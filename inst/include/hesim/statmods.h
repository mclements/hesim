# ifndef STATMODELS_H
# define STATMODELS_H
#include <hesim/distributions.h>
#include <hesim/Params.h>

namespace hesim {

/** @ingroup statmods 
 * Prediction and random sampling from different statistical models.
 */
namespace statmods {


/***************************************************************************//** 
 * A statistical model.
 * This is an abstract base class for a collection of statistical models.
 ******************************************************************************/ 
class statmod {
public:
  /** 
   * Predict values using the mean of the probability distribution.
   * @param sample A random sample of the parameters from the posterior
   * distribution.
   * @param obs The observation (i.e., row index) for which to make a prediction
   * from the input matrix (or matrices when there are multiple parameters).
   * @return. The predicted value.
   */ 
  virtual double predict(int sample, int obs) = 0;
  
  /** 
   * Sample random values from the probability distribution.
   * @param sample A random sample of the parameters from the posterior
   * distribution.
   * @param obs The observation (i.e., row index) for which to make a prediction
   * from the input matrix (or matrices when there are multiple parameters).
   * @return. A random draw.
   */ 
  virtual double random(int sample, int obs) = 0;
};

/***************************************************************************//** 
 * A linear model.
 * Prediction and random sampling from a fitted linear model. Random samples
 * are from a normal distribution.  
 ******************************************************************************/ 
class lm : public statmod{
public:
  arma::mat X_;
  ParamsLm params_;
  
  /** 
   * The constructor.
   * Instantiates a linear model.
   */ 
  lm(arma::mat X, ParamsLm params)
    : params_(params){
    X_ = X;
    
  }
  
  double predict(int sample, int obs) {
    return arma::dot(X_.row(obs), params_.coefs_.row(sample));
  }
  
  double random(int sample, int obs) {
    return R::rnorm(predict(sample, obs), params_.sigma_[sample]);
  }
};

/***************************************************************************//** 
 * A survival model.
 * Prediction and random sampling from a survival model. Values depend on the
 * underlying probability distribution.  
 ******************************************************************************/ 
class surv : public statmod {
private:
  std::unique_ptr<stats::distribution> dist_; ///<A pointer to the @c distribution base class.
  
  /** 
   * Initialize @c dist_.
   * Initialize the underlying probability distribution
   * @param params_surv The parameters of the survival distribution.
   * @return A unique pointer to the base class of the underlying probability
   * distribution.
   */ 
  static std::unique_ptr<stats::distribution> init_dist_(ParamsSurv params_surv){
    stats::distribution *d;
    std::string dist_name = params_surv.dist_name_;
    if (dist_name == "exponential" || dist_name == "exp"){
      d = new stats::exponential(1);
    }
    else if (dist_name == "weibull.quiet" || dist_name == "weibull"){
      d = new stats::weibull(1, 1);
    }
    else if (dist_name == "weibullNMA"){
      d = new stats::weibull_nma(0, 0); // equivalent to shape = 1, scale = 1 wih weibull
    }
    else if (dist_name == "gamma"){
      d = new stats::gamma(1, 1);
    }
    else if (dist_name == "lnorm"){
      d = new stats::lognormal(0, 1);
    }
    else if (dist_name == "gompertz"){
      d = new stats::gompertz(0, 1);
    }
    else if (dist_name == "llogis"){
      d = new stats::loglogistic(1, 1);
    }
    else if (dist_name == "gengamma"){
      d = new stats::gengamma(0, 1, 0);
    }
    else if (dist_name == "survspline"){
      int n_knots = params_surv.spline_aux_.knots_.size();
      std::vector<double> gamma(n_knots, 0.0);
      d = new stats::survsplines(gamma, params_surv.spline_aux_.knots_,
                                 params_surv.spline_aux_.scale_,
                                 params_surv.spline_aux_.timescale_);
    }
    else{
        Rcpp::stop("The selected distribution is not available.");
    }
    std::unique_ptr<stats::distribution> uptr(d);
    return uptr;
  }
  
  /** 
   * Predict parameter values given covariates.
   * Predict parameter values of the underlying probability distribution
   * for a given sample of the model parameters (i.e., the regression coefficients)
   * and observation.
   */ 
  std::vector<double> predict_params(int sample, int obs) const {
    int n_pars = params_.coefs_.size();
    std::vector<double> y(n_pars);
    for (int j = 0; j < n_pars; ++j){
      y[j] = arma::dot(X_[j].row(obs),
                       params_.coefs_[j].row(sample));
    }
    return y;    
  }

public:
  vecmats X_;
  ParamsSurv params_;
  
  /** 
   * The constructor.
   * Instantiates a survival model.
   */ 
  surv(vecmats X, ParamsSurv params)
    : params_(params), dist_(init_dist_(params)){
    X_ = X;
  }
  
  /** 
   * Set the parameters of the survival distribution.
   * @param[in] sample A random sample of the parameters from the posterior
   * distribution.
   * @param[in] obs The observation (i.e., row index) for which to make a prediction
   * from the input matrix (or matrices when there are multiple parameters).
   * @param[out]. @c dist_ is updated using @c predict_params().
   */ 
  void set_dist(int sample, int obs) {
    dist_->set_params(predict_params(sample, obs));
  }

  /** 
   * Summarize a survival model.
   * Summarize predictions from a survival model for a given observation and
   * sample of the parameters 
   * @param sample A random sample of the parameters from the posterior
   * distribution.
   * @param obs The observation (i.e., row index) for which to make a prediction
   * from the input matrix (or matrices when there are multiple parameters).
   * @param t Times at which to make predictions.
   * @param type "hazard" for hazards; "cumhazard" for cumulative hazards;
   * "survival" for survival probabilities; and "rmst" for restricted mean survival.
   * @return Summary measure as determined by @p type for each time @p t.
   */ 
  std::vector<double> summary(int sample, int obs, std::vector<double> t, std::string type,
                              double dr = 0){
    std::vector<double> out(t.size());
    set_dist(sample, obs);
    for (int i = 0; i < t.size(); ++i){
      if (type == "hazard"){
        out[i] = dist_->hazard(t[i]);
      }
      else if (type == "cumhazard"){
        out[i] = dist_->cumhazard(t[i]);
      }
      else if (type == "survival"){
        out[i] = 1 - dist_->cdf(t[i]);
      }
      else if (type == "rmst"){
        out[i] = stats::rmst(dist_.get(), t[i], dr);
      }
      else{
        Rcpp::stop("Selected 'type' is not supported.");
      }
    }
    return out;
  }

  /** 
   * Quantile of survival model.
   * Compute the quantile of a survival model for a given observation and
   * sample of the parameters.
   * @param sample A random sample of the parameters from the posterior
   * distribution.
   * @param obs The observation (i.e., row index) for which to make a prediction
   * from the input matrix (or matrices when there are multiple parameters).
   * @param p Probabilities at which to compute quantiles. 
   * @return Quantile for each probability @p p.
   */ 
  std::vector<double> quantile(int sample, int obs, std::vector<double> p) {
    std::vector<double> out(p.size());
    set_dist(sample, obs);
    for (int i = 0; i < p.size(); ++i){
      out[i] = dist_->quantile(p[i]);
    }
    return out;
  }
  
  /** 
   * NOTE: A predict() METHOD IS CURRENTLY UNAVAILABLE WITH @c surv.
   */ 
  double predict(int sample, int obs) {
    Rcpp::stop("Predict method is currently unavailable with class 'surv'");
  }
  
  /** 
   * Random number generation from survival model.
   * Draw a random sample from the underlying survival distribution of the survival 
   * model for a given observation and sample of the parameters.
   * @param sample A random sample of the parameters from the posterior
   * distribution.
   * @param obs The observation (i.e., row index) for which to make a prediction
   * from the input matrix (or matrices when there are multiple parameters).
   * @return A random sample from the underlying survival distribution.
   */ 
  double random(int sample, int obs) {
    set_dist(sample, obs);
    return dist_->random();
  }

};

} // end namespace hesim

} // end namespace statmods

# endif

