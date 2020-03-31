// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/hesim.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// C_incr_effect
std::vector<double> C_incr_effect(std::vector<double> x, std::vector<double> y, int n_samples, int n_strategies, int n_grps);
RcppExport SEXP _hesim_C_incr_effect(SEXP xSEXP, SEXP ySEXP, SEXP n_samplesSEXP, SEXP n_strategiesSEXP, SEXP n_grpsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< int >::type n_strategies(n_strategiesSEXP);
    Rcpp::traits::input_parameter< int >::type n_grps(n_grpsSEXP);
    rcpp_result_gen = Rcpp::wrap(C_incr_effect(x, y, n_samples, n_strategies, n_grps));
    return rcpp_result_gen;
END_RCPP
}
// C_ceac
std::vector<double> C_ceac(std::vector<double> k, std::vector<double> ie, std::vector<double> ic, int n_samples, int n_strategies, int n_grps);
RcppExport SEXP _hesim_C_ceac(SEXP kSEXP, SEXP ieSEXP, SEXP icSEXP, SEXP n_samplesSEXP, SEXP n_strategiesSEXP, SEXP n_grpsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type k(kSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type ie(ieSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type ic(icSEXP);
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< int >::type n_strategies(n_strategiesSEXP);
    Rcpp::traits::input_parameter< int >::type n_grps(n_grpsSEXP);
    rcpp_result_gen = Rcpp::wrap(C_ceac(k, ie, ic, n_samples, n_strategies, n_grps));
    return rcpp_result_gen;
END_RCPP
}
// C_mce
std::vector<double> C_mce(std::vector<double> k, std::vector<double> e, std::vector<double> c, int n_samples, int n_strategies, int n_grps);
RcppExport SEXP _hesim_C_mce(SEXP kSEXP, SEXP eSEXP, SEXP cSEXP, SEXP n_samplesSEXP, SEXP n_strategiesSEXP, SEXP n_grpsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type k(kSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type e(eSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type c(cSEXP);
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< int >::type n_strategies(n_strategiesSEXP);
    Rcpp::traits::input_parameter< int >::type n_grps(n_grpsSEXP);
    rcpp_result_gen = Rcpp::wrap(C_mce(k, e, c, n_samples, n_strategies, n_grps));
    return rcpp_result_gen;
END_RCPP
}
// C_enmbpi
std::vector<double> C_enmbpi(std::vector<double> k, std::vector<double> e, std::vector<double> c, int n_samples, int n_strategies, int n_grps);
RcppExport SEXP _hesim_C_enmbpi(SEXP kSEXP, SEXP eSEXP, SEXP cSEXP, SEXP n_samplesSEXP, SEXP n_strategiesSEXP, SEXP n_grpsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type k(kSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type e(eSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type c(cSEXP);
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< int >::type n_strategies(n_strategiesSEXP);
    Rcpp::traits::input_parameter< int >::type n_grps(n_grpsSEXP);
    rcpp_result_gen = Rcpp::wrap(C_enmbpi(k, e, c, n_samples, n_strategies, n_grps));
    return rcpp_result_gen;
END_RCPP
}
// tmax_max
int tmax_max(arma::mat m);
RcppExport SEXP _hesim_tmax_max(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(tmax_max(m));
    return rcpp_result_gen;
END_RCPP
}
// C_ctstm_summary
Rcpp::DataFrame C_ctstm_summary(Rcpp::Environment R_CtstmTrans, std::vector<double> t, std::string type);
RcppExport SEXP _hesim_C_ctstm_summary(SEXP R_CtstmTransSEXP, SEXP tSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Environment >::type R_CtstmTrans(R_CtstmTransSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type t(tSEXP);
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(C_ctstm_summary(R_CtstmTrans, t, type));
    return rcpp_result_gen;
END_RCPP
}
// C_rgengamma
std::vector<double> C_rgengamma(int n, std::vector<double> mu, std::vector<double> sigma, std::vector<double> Q);
RcppExport SEXP _hesim_C_rgengamma(SEXP nSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP QSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type mu(muSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type Q(QSEXP);
    rcpp_result_gen = Rcpp::wrap(C_rgengamma(n, mu, sigma, Q));
    return rcpp_result_gen;
END_RCPP
}
// C_rpwexp
std::vector<double> C_rpwexp(int n, arma::mat rate, arma::rowvec time);
RcppExport SEXP _hesim_C_rpwexp(SEXP nSEXP, SEXP rateSEXP, SEXP timeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type rate(rateSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type time(timeSEXP);
    rcpp_result_gen = Rcpp::wrap(C_rpwexp(n, rate, time));
    return rcpp_result_gen;
END_RCPP
}
// C_rcat
std::vector<double> C_rcat(int n, arma::mat probs);
RcppExport SEXP _hesim_C_rcat(SEXP nSEXP, SEXP probsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type probs(probsSEXP);
    rcpp_result_gen = Rcpp::wrap(C_rcat(n, probs));
    return rcpp_result_gen;
END_RCPP
}
// C_rdirichlet_mat
arma::cube C_rdirichlet_mat(int n, arma::mat alpha);
RcppExport SEXP _hesim_C_rdirichlet_mat(SEXP nSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(C_rdirichlet_mat(n, alpha));
    return rcpp_result_gen;
END_RCPP
}
// C_normalize_transprobs
void C_normalize_transprobs(arma::cube& value);
RcppExport SEXP _hesim_C_normalize_transprobs(SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube& >::type value(valueSEXP);
    C_normalize_transprobs(value);
    return R_NilValue;
END_RCPP
}
// C_cohort_dtstm_sim_stateprobs
Rcpp::DataFrame C_cohort_dtstm_sim_stateprobs(Rcpp::Environment R_CohortDtstmTrans, std::vector<double> times);
RcppExport SEXP _hesim_C_cohort_dtstm_sim_stateprobs(SEXP R_CohortDtstmTransSEXP, SEXP timesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Environment >::type R_CohortDtstmTrans(R_CohortDtstmTransSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type times(timesSEXP);
    rcpp_result_gen = Rcpp::wrap(C_cohort_dtstm_sim_stateprobs(R_CohortDtstmTrans, times));
    return rcpp_result_gen;
END_RCPP
}
// C_ctstm_sim_disease
Rcpp::DataFrame C_ctstm_sim_disease(Rcpp::Environment R_CtstmTrans, std::vector<int> start_state, std::vector<double> start_age, std::vector<double> start_time, int death_state, std::string clock, std::vector<int> reset_states, double max_t, double max_age, int progress);
RcppExport SEXP _hesim_C_ctstm_sim_disease(SEXP R_CtstmTransSEXP, SEXP start_stateSEXP, SEXP start_ageSEXP, SEXP start_timeSEXP, SEXP death_stateSEXP, SEXP clockSEXP, SEXP reset_statesSEXP, SEXP max_tSEXP, SEXP max_ageSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Environment >::type R_CtstmTrans(R_CtstmTransSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type start_state(start_stateSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type start_age(start_ageSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type start_time(start_timeSEXP);
    Rcpp::traits::input_parameter< int >::type death_state(death_stateSEXP);
    Rcpp::traits::input_parameter< std::string >::type clock(clockSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type reset_states(reset_statesSEXP);
    Rcpp::traits::input_parameter< double >::type max_t(max_tSEXP);
    Rcpp::traits::input_parameter< double >::type max_age(max_ageSEXP);
    Rcpp::traits::input_parameter< int >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(C_ctstm_sim_disease(R_CtstmTrans, start_state, start_age, start_time, death_state, clock, reset_states, max_t, max_age, progress));
    return rcpp_result_gen;
END_RCPP
}
// C_ctstm_indiv_stateprobs
Rcpp::DataFrame C_ctstm_indiv_stateprobs(Rcpp::DataFrame R_disease_prog, std::vector<double> t, int n_samples, int n_strategies, std::vector<int> unique_strategy_id, std::vector<int> strategy_index, int n_grps, std::vector<int> unique_grp_id, std::vector<int> grp_index, int n_states, int n_patients);
RcppExport SEXP _hesim_C_ctstm_indiv_stateprobs(SEXP R_disease_progSEXP, SEXP tSEXP, SEXP n_samplesSEXP, SEXP n_strategiesSEXP, SEXP unique_strategy_idSEXP, SEXP strategy_indexSEXP, SEXP n_grpsSEXP, SEXP unique_grp_idSEXP, SEXP grp_indexSEXP, SEXP n_statesSEXP, SEXP n_patientsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type R_disease_prog(R_disease_progSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type t(tSEXP);
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< int >::type n_strategies(n_strategiesSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type unique_strategy_id(unique_strategy_idSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type strategy_index(strategy_indexSEXP);
    Rcpp::traits::input_parameter< int >::type n_grps(n_grpsSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type unique_grp_id(unique_grp_idSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type grp_index(grp_indexSEXP);
    Rcpp::traits::input_parameter< int >::type n_states(n_statesSEXP);
    Rcpp::traits::input_parameter< int >::type n_patients(n_patientsSEXP);
    rcpp_result_gen = Rcpp::wrap(C_ctstm_indiv_stateprobs(R_disease_prog, t, n_samples, n_strategies, unique_strategy_id, strategy_index, n_grps, unique_grp_id, grp_index, n_states, n_patients));
    return rcpp_result_gen;
END_RCPP
}
// C_indiv_ctstm_wlos
std::vector<double> C_indiv_ctstm_wlos(Rcpp::DataFrame R_disease_prog, std::vector<int> strategy_idx, std::vector<int> patient_idx, Rcpp::Environment R_StateVal, double dr, std::string type, double max_time);
RcppExport SEXP _hesim_C_indiv_ctstm_wlos(SEXP R_disease_progSEXP, SEXP strategy_idxSEXP, SEXP patient_idxSEXP, SEXP R_StateValSEXP, SEXP drSEXP, SEXP typeSEXP, SEXP max_timeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type R_disease_prog(R_disease_progSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type strategy_idx(strategy_idxSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type patient_idx(patient_idxSEXP);
    Rcpp::traits::input_parameter< Rcpp::Environment >::type R_StateVal(R_StateValSEXP);
    Rcpp::traits::input_parameter< double >::type dr(drSEXP);
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    Rcpp::traits::input_parameter< double >::type max_time(max_timeSEXP);
    rcpp_result_gen = Rcpp::wrap(C_indiv_ctstm_wlos(R_disease_prog, strategy_idx, patient_idx, R_StateVal, dr, type, max_time));
    return rcpp_result_gen;
END_RCPP
}
// C_indiv_ctstm_starting
std::vector<double> C_indiv_ctstm_starting(Rcpp::DataFrame R_disease_prog, std::vector<int> strategy_idx, std::vector<int> patient_idx, Rcpp::Environment R_StateVal, double dr, std::string type);
RcppExport SEXP _hesim_C_indiv_ctstm_starting(SEXP R_disease_progSEXP, SEXP strategy_idxSEXP, SEXP patient_idxSEXP, SEXP R_StateValSEXP, SEXP drSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type R_disease_prog(R_disease_progSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type strategy_idx(strategy_idxSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type patient_idx(patient_idxSEXP);
    Rcpp::traits::input_parameter< Rcpp::Environment >::type R_StateVal(R_StateValSEXP);
    Rcpp::traits::input_parameter< double >::type dr(drSEXP);
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(C_indiv_ctstm_starting(R_disease_prog, strategy_idx, patient_idx, R_StateVal, dr, type));
    return rcpp_result_gen;
END_RCPP
}
// C_indiv_ctstm_los
std::vector<double> C_indiv_ctstm_los(Rcpp::DataFrame R_disease_prog, std::vector<int> strategy_idx, std::vector<int> patient_idx, double dr);
RcppExport SEXP _hesim_C_indiv_ctstm_los(SEXP R_disease_progSEXP, SEXP strategy_idxSEXP, SEXP patient_idxSEXP, SEXP drSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type R_disease_prog(R_disease_progSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type strategy_idx(strategy_idxSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type patient_idx(patient_idxSEXP);
    Rcpp::traits::input_parameter< double >::type dr(drSEXP);
    rcpp_result_gen = Rcpp::wrap(C_indiv_ctstm_los(R_disease_prog, strategy_idx, patient_idx, dr));
    return rcpp_result_gen;
END_RCPP
}
// C_psm_curves_summary
Rcpp::DataFrame C_psm_curves_summary(Rcpp::Environment R_PsmCurves, std::vector<double> x, std::string type, double dr);
RcppExport SEXP _hesim_C_psm_curves_summary(SEXP R_PsmCurvesSEXP, SEXP xSEXP, SEXP typeSEXP, SEXP drSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Environment >::type R_PsmCurves(R_PsmCurvesSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    Rcpp::traits::input_parameter< double >::type dr(drSEXP);
    rcpp_result_gen = Rcpp::wrap(C_psm_curves_summary(R_PsmCurves, x, type, dr));
    return rcpp_result_gen;
END_RCPP
}
// C_psm_sim_stateprobs
Rcpp::List C_psm_sim_stateprobs(Rcpp::DataFrame R_psm_survival, int n_samples, int n_strategies, int n_patients, int n_states, int n_times);
RcppExport SEXP _hesim_C_psm_sim_stateprobs(SEXP R_psm_survivalSEXP, SEXP n_samplesSEXP, SEXP n_strategiesSEXP, SEXP n_patientsSEXP, SEXP n_statesSEXP, SEXP n_timesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type R_psm_survival(R_psm_survivalSEXP);
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< int >::type n_strategies(n_strategiesSEXP);
    Rcpp::traits::input_parameter< int >::type n_patients(n_patientsSEXP);
    Rcpp::traits::input_parameter< int >::type n_states(n_statesSEXP);
    Rcpp::traits::input_parameter< int >::type n_times(n_timesSEXP);
    rcpp_result_gen = Rcpp::wrap(C_psm_sim_stateprobs(R_psm_survival, n_samples, n_strategies, n_patients, n_states, n_times));
    return rcpp_result_gen;
END_RCPP
}
// C_statevals_sim
Rcpp::DataFrame C_statevals_sim(Rcpp::Environment R_StateVals, std::vector<double> times, std::string type);
RcppExport SEXP _hesim_C_statevals_sim(SEXP R_StateValsSEXP, SEXP timesSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::Environment >::type R_StateVals(R_StateValsSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type times(timesSEXP);
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(C_statevals_sim(R_StateVals, times, type));
    return rcpp_result_gen;
END_RCPP
}
// C_sim_ev
Rcpp::DataFrame C_sim_ev(Rcpp::DataFrame R_stateprobs, Rcpp::List R_statevals, std::vector<double> dr, std::vector<std::string> categories, std::vector<double> times, std::string method);
RcppExport SEXP _hesim_C_sim_ev(SEXP R_stateprobsSEXP, SEXP R_statevalsSEXP, SEXP drSEXP, SEXP categoriesSEXP, SEXP timesSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type R_stateprobs(R_stateprobsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type R_statevals(R_statevalsSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type dr(drSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type categories(categoriesSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type times(timesSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(C_sim_ev(R_stateprobs, R_statevals, dr, categories, times, method));
    return rcpp_result_gen;
END_RCPP
}
// C_test_trapz
double C_test_trapz(std::vector<double> x, std::vector<double> y);
RcppExport SEXP _hesim_C_test_trapz(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_trapz(x, y));
    return rcpp_result_gen;
END_RCPP
}
// C_test_is_absorbing
std::vector<bool> C_test_is_absorbing(arma::mat m);
RcppExport SEXP _hesim_C_test_is_absorbing(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_is_absorbing(m));
    return rcpp_result_gen;
END_RCPP
}
// C_test_trans_mat_trans_id
std::vector<int> C_test_trans_mat_trans_id(arma::mat m, int from_state);
RcppExport SEXP _hesim_C_test_trans_mat_trans_id(SEXP mSEXP, SEXP from_stateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type from_state(from_stateSEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_trans_mat_trans_id(m, from_state));
    return rcpp_result_gen;
END_RCPP
}
// C_test_trans_mat_to
std::vector<int> C_test_trans_mat_to(arma::mat m, int from_state);
RcppExport SEXP _hesim_C_test_trans_mat_to(SEXP mSEXP, SEXP from_stateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type from_state(from_stateSEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_trans_mat_to(m, from_state));
    return rcpp_result_gen;
END_RCPP
}
// C_test_trans_mat_n_trans
int C_test_trans_mat_n_trans(arma::mat m);
RcppExport SEXP _hesim_C_test_trans_mat_n_trans(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_trans_mat_n_trans(m));
    return rcpp_result_gen;
END_RCPP
}
// C_test_rtruncnorm
double C_test_rtruncnorm(double mean, double sd, double lower, double upper);
RcppExport SEXP _hesim_C_test_rtruncnorm(SEXP meanSEXP, SEXP sdSEXP, SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< double >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< double >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< double >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_rtruncnorm(mean, sd, lower, upper));
    return rcpp_result_gen;
END_RCPP
}
// C_test_xptr_test_time_fun
SEXP C_test_xptr_test_time_fun(Rcpp::List L);
RcppExport SEXP _hesim_C_test_xptr_test_time_fun(SEXP LSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type L(LSEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_xptr_test_time_fun(L));
    return rcpp_result_gen;
END_RCPP
}
// C_test_obs_index
int C_test_obs_index(Rcpp::List R_input_data, int strategy_index, int patient_index, int health_index);
RcppExport SEXP _hesim_C_test_obs_index(SEXP R_input_dataSEXP, SEXP strategy_indexSEXP, SEXP patient_indexSEXP, SEXP health_indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type R_input_data(R_input_dataSEXP);
    Rcpp::traits::input_parameter< int >::type strategy_index(strategy_indexSEXP);
    Rcpp::traits::input_parameter< int >::type patient_index(patient_indexSEXP);
    Rcpp::traits::input_parameter< int >::type health_index(health_indexSEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_obs_index(R_input_data, strategy_index, patient_index, health_index));
    return rcpp_result_gen;
END_RCPP
}
// C_test_obs_index_ids
int C_test_obs_index_ids(Rcpp::List R_input_data, int strategy_index, int patient_index, int health_index, std::string member);
RcppExport SEXP _hesim_C_test_obs_index_ids(SEXP R_input_dataSEXP, SEXP strategy_indexSEXP, SEXP patient_indexSEXP, SEXP health_indexSEXP, SEXP memberSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type R_input_data(R_input_dataSEXP);
    Rcpp::traits::input_parameter< int >::type strategy_index(strategy_indexSEXP);
    Rcpp::traits::input_parameter< int >::type patient_index(patient_indexSEXP);
    Rcpp::traits::input_parameter< int >::type health_index(health_indexSEXP);
    Rcpp::traits::input_parameter< std::string >::type member(memberSEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_obs_index_ids(R_input_data, strategy_index, patient_index, health_index, member));
    return rcpp_result_gen;
END_RCPP
}
// test_quad_dnorm
double test_quad_dnorm(double lower, double upper);
RcppExport SEXP _hesim_test_quad_dnorm(SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< double >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(test_quad_dnorm(lower, upper));
    return rcpp_result_gen;
END_RCPP
}
// test_quad_ier1
double test_quad_ier1();
RcppExport SEXP _hesim_test_quad_ier1() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(test_quad_ier1());
    return rcpp_result_gen;
END_RCPP
}
// test_quad_ier4
double test_quad_ier4();
RcppExport SEXP _hesim_test_quad_ier4() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(test_quad_ier4());
    return rcpp_result_gen;
END_RCPP
}
// test_quad_ier5
double test_quad_ier5();
RcppExport SEXP _hesim_test_quad_ier5() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(test_quad_ier5());
    return rcpp_result_gen;
END_RCPP
}
// test_riemann_x2
double test_riemann_x2(std::vector<double> x);
RcppExport SEXP _hesim_test_riemann_x2(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(test_riemann_x2(x));
    return rcpp_result_gen;
END_RCPP
}
// test_cum_riemann_x2
std::vector<double> test_cum_riemann_x2(std::vector<double> x);
RcppExport SEXP _hesim_test_cum_riemann_x2(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(test_cum_riemann_x2(x));
    return rcpp_result_gen;
END_RCPP
}
// C_test_rtrunc_repeat
double C_test_rtrunc_repeat(double lower, double upper);
RcppExport SEXP _hesim_C_test_rtrunc_repeat(SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< double >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_rtrunc_repeat(lower, upper));
    return rcpp_result_gen;
END_RCPP
}
// C_test_rsurv
double C_test_rsurv(std::vector<double> time, std::vector<double> cumhaz, bool time_inf);
RcppExport SEXP _hesim_C_test_rsurv(SEXP timeSEXP, SEXP cumhazSEXP, SEXP time_infSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type time(timeSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type cumhaz(cumhazSEXP);
    Rcpp::traits::input_parameter< bool >::type time_inf(time_infSEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_rsurv(time, cumhaz, time_inf));
    return rcpp_result_gen;
END_RCPP
}
// C_test_add_constant_int
std::vector<int> C_test_add_constant_int(std::vector<int> v, double value);
RcppExport SEXP _hesim_C_test_add_constant_int(SEXP vSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type v(vSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_add_constant_int(v, value));
    return rcpp_result_gen;
END_RCPP
}
// C_test_add_constant_double
std::vector<double> C_test_add_constant_double(std::vector<double> v, double value);
RcppExport SEXP _hesim_C_test_add_constant_double(SEXP vSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type v(vSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_add_constant_double(v, value));
    return rcpp_result_gen;
END_RCPP
}
// C_test_pv
double C_test_pv(double z, double r, double t1, double t2);
RcppExport SEXP _hesim_C_test_pv(SEXP zSEXP, SEXP rSEXP, SEXP t1SEXP, SEXP t2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< double >::type t2(t2SEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_pv(z, r, t1, t2));
    return rcpp_result_gen;
END_RCPP
}
// C_test_seq
std::vector<double> C_test_seq(double from, double to, double by);
RcppExport SEXP _hesim_C_test_seq(SEXP fromSEXP, SEXP toSEXP, SEXP bySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type from(fromSEXP);
    Rcpp::traits::input_parameter< double >::type to(toSEXP);
    Rcpp::traits::input_parameter< double >::type by(bySEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_seq(from, to, by));
    return rcpp_result_gen;
END_RCPP
}
// C_test_max_lt
double C_test_max_lt(std::vector<double> v, double value);
RcppExport SEXP _hesim_C_test_max_lt(SEXP vSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type v(vSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(C_test_max_lt(v, value));
    return rcpp_result_gen;
END_RCPP
}
// test_zeroin
double test_zeroin();
RcppExport SEXP _hesim_test_zeroin() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(test_zeroin());
    return rcpp_result_gen;
END_RCPP
}
// C_rowmax
arma::colvec C_rowmax(arma::mat x);
RcppExport SEXP _hesim_C_rowmax(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(C_rowmax(x));
    return rcpp_result_gen;
END_RCPP
}
// C_rowmax_index
arma::ucolvec C_rowmax_index(arma::mat x);
RcppExport SEXP _hesim_C_rowmax_index(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(C_rowmax_index(x));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_distributions();

static const R_CallMethodDef CallEntries[] = {
    {"_hesim_C_incr_effect", (DL_FUNC) &_hesim_C_incr_effect, 5},
    {"_hesim_C_ceac", (DL_FUNC) &_hesim_C_ceac, 6},
    {"_hesim_C_mce", (DL_FUNC) &_hesim_C_mce, 6},
    {"_hesim_C_enmbpi", (DL_FUNC) &_hesim_C_enmbpi, 6},
    {"_hesim_tmax_max", (DL_FUNC) &_hesim_tmax_max, 1},
    {"_hesim_C_ctstm_summary", (DL_FUNC) &_hesim_C_ctstm_summary, 3},
    {"_hesim_C_rgengamma", (DL_FUNC) &_hesim_C_rgengamma, 4},
    {"_hesim_C_rpwexp", (DL_FUNC) &_hesim_C_rpwexp, 3},
    {"_hesim_C_rcat", (DL_FUNC) &_hesim_C_rcat, 2},
    {"_hesim_C_rdirichlet_mat", (DL_FUNC) &_hesim_C_rdirichlet_mat, 2},
    {"_hesim_C_normalize_transprobs", (DL_FUNC) &_hesim_C_normalize_transprobs, 1},
    {"_hesim_C_cohort_dtstm_sim_stateprobs", (DL_FUNC) &_hesim_C_cohort_dtstm_sim_stateprobs, 2},
    {"_hesim_C_ctstm_sim_disease", (DL_FUNC) &_hesim_C_ctstm_sim_disease, 10},
    {"_hesim_C_ctstm_indiv_stateprobs", (DL_FUNC) &_hesim_C_ctstm_indiv_stateprobs, 11},
    {"_hesim_C_indiv_ctstm_wlos", (DL_FUNC) &_hesim_C_indiv_ctstm_wlos, 7},
    {"_hesim_C_indiv_ctstm_starting", (DL_FUNC) &_hesim_C_indiv_ctstm_starting, 6},
    {"_hesim_C_indiv_ctstm_los", (DL_FUNC) &_hesim_C_indiv_ctstm_los, 4},
    {"_hesim_C_psm_curves_summary", (DL_FUNC) &_hesim_C_psm_curves_summary, 4},
    {"_hesim_C_psm_sim_stateprobs", (DL_FUNC) &_hesim_C_psm_sim_stateprobs, 6},
    {"_hesim_C_statevals_sim", (DL_FUNC) &_hesim_C_statevals_sim, 3},
    {"_hesim_C_sim_ev", (DL_FUNC) &_hesim_C_sim_ev, 6},
    {"_hesim_C_test_trapz", (DL_FUNC) &_hesim_C_test_trapz, 2},
    {"_hesim_C_test_is_absorbing", (DL_FUNC) &_hesim_C_test_is_absorbing, 1},
    {"_hesim_C_test_trans_mat_trans_id", (DL_FUNC) &_hesim_C_test_trans_mat_trans_id, 2},
    {"_hesim_C_test_trans_mat_to", (DL_FUNC) &_hesim_C_test_trans_mat_to, 2},
    {"_hesim_C_test_trans_mat_n_trans", (DL_FUNC) &_hesim_C_test_trans_mat_n_trans, 1},
    {"_hesim_C_test_rtruncnorm", (DL_FUNC) &_hesim_C_test_rtruncnorm, 4},
    {"_hesim_C_test_xptr_test_time_fun", (DL_FUNC) &_hesim_C_test_xptr_test_time_fun, 1},
    {"_hesim_C_test_obs_index", (DL_FUNC) &_hesim_C_test_obs_index, 4},
    {"_hesim_C_test_obs_index_ids", (DL_FUNC) &_hesim_C_test_obs_index_ids, 5},
    {"_hesim_test_quad_dnorm", (DL_FUNC) &_hesim_test_quad_dnorm, 2},
    {"_hesim_test_quad_ier1", (DL_FUNC) &_hesim_test_quad_ier1, 0},
    {"_hesim_test_quad_ier4", (DL_FUNC) &_hesim_test_quad_ier4, 0},
    {"_hesim_test_quad_ier5", (DL_FUNC) &_hesim_test_quad_ier5, 0},
    {"_hesim_test_riemann_x2", (DL_FUNC) &_hesim_test_riemann_x2, 1},
    {"_hesim_test_cum_riemann_x2", (DL_FUNC) &_hesim_test_cum_riemann_x2, 1},
    {"_hesim_C_test_rtrunc_repeat", (DL_FUNC) &_hesim_C_test_rtrunc_repeat, 2},
    {"_hesim_C_test_rsurv", (DL_FUNC) &_hesim_C_test_rsurv, 3},
    {"_hesim_C_test_add_constant_int", (DL_FUNC) &_hesim_C_test_add_constant_int, 2},
    {"_hesim_C_test_add_constant_double", (DL_FUNC) &_hesim_C_test_add_constant_double, 2},
    {"_hesim_C_test_pv", (DL_FUNC) &_hesim_C_test_pv, 4},
    {"_hesim_C_test_seq", (DL_FUNC) &_hesim_C_test_seq, 3},
    {"_hesim_C_test_max_lt", (DL_FUNC) &_hesim_C_test_max_lt, 2},
    {"_hesim_test_zeroin", (DL_FUNC) &_hesim_test_zeroin, 0},
    {"_hesim_C_rowmax", (DL_FUNC) &_hesim_C_rowmax, 1},
    {"_hesim_C_rowmax_index", (DL_FUNC) &_hesim_C_rowmax_index, 1},
    {"_rcpp_module_boot_distributions", (DL_FUNC) &_rcpp_module_boot_distributions, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_hesim(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
