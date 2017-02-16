#include <RcppArmadillo.h>
#include <RcppArmadilloExtensions/sample.h>
using namespace Rcpp;

// Gompertz Distribution
// [[Rcpp::export]]
double qgompertzC (double p, double shape, double rate) {
  double q = 0;
  double asymp = 1 - exp(rate/shape);
  if (shape == 0){
    q = R::qexp(p, rate, 1, 0);
  }
  else if (shape < 0 && p > asymp){
    q = INFINITY;
  }
  else {
    q = 1/shape * log(1 - shape * log(1 - p)/rate);
  }
  return q;
}

//' @export
// [[Rcpp::export]]
double rgompertzC (double shape, double rate){
  double u = R::runif(0,1);
  return qgompertzC(u, shape, rate);
}

// Random Survival Times
// [[Rcpp::export]]
double rsurv(double location, double anc1, std::string dist) {
  double surv = 0.0;
  if (dist == "exponential"){
    double rate = exp(location);
    surv = R::rexp(1/rate);
  }
  else if (dist == "weibull"){
    double shape = exp(anc1);
    double scale = exp(location);
    surv = R::rweibull(shape, scale);
  }
  else if (dist == "gompertz"){
    double shape = anc1;
    double rate = exp(location);
    surv = rgompertzC(shape, rate);
  }
  return surv;
}

// Random generation for categorical distribution
//' @export
// [[Rcpp::export]]
int rcat1C(arma::rowvec probs) {
  int k = probs.n_elem;
  double probs_sum = accu(probs);
  probs = probs/probs_sum;
  IntegerVector ans(k);
  rmultinom(1, probs.begin(), k, ans.begin());
  int max = which_max(ans);
  return(max);
}

//' @export
// [[Rcpp::export]]
arma::vec rcatC(arma::mat probs){
  int n = probs.n_rows;
  arma::vec samp(n);
  for (int i = 0; i < n; ++i){
    samp(i) = rcat1C(probs.row(i));
  }
  return(samp);
}

