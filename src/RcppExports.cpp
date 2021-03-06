// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// init_system
S4 init_system(int nQubits);
RcppExport SEXP _quantumSystem_init_system(SEXP nQubitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nQubits(nQubitsSEXP);
    rcpp_result_gen = Rcpp::wrap(init_system(nQubits));
    return rcpp_result_gen;
END_RCPP
}
// seq_int
NumericVector seq_int(int first, int last);
RcppExport SEXP _quantumSystem_seq_int(SEXP firstSEXP, SEXP lastSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type first(firstSEXP);
    Rcpp::traits::input_parameter< int >::type last(lastSEXP);
    rcpp_result_gen = Rcpp::wrap(seq_int(first, last));
    return rcpp_result_gen;
END_RCPP
}
// meassurement
int meassurement(S4 quantumSystem);
RcppExport SEXP _quantumSystem_meassurement(SEXP quantumSystemSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type quantumSystem(quantumSystemSEXP);
    rcpp_result_gen = Rcpp::wrap(meassurement(quantumSystem));
    return rcpp_result_gen;
END_RCPP
}
// getStateProbability
float getStateProbability(S4 quantumSystem, int index);
RcppExport SEXP _quantumSystem_getStateProbability(SEXP quantumSystemSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type quantumSystem(quantumSystemSEXP);
    Rcpp::traits::input_parameter< int >::type index(indexSEXP);
    rcpp_result_gen = Rcpp::wrap(getStateProbability(quantumSystem, index));
    return rcpp_result_gen;
END_RCPP
}
// applyHadamard
void applyHadamard(S4 quantumSystem);
RcppExport SEXP _quantumSystem_applyHadamard(SEXP quantumSystemSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type quantumSystem(quantumSystemSEXP);
    applyHadamard(quantumSystem);
    return R_NilValue;
END_RCPP
}
// applyOracleFunction
void applyOracleFunction(S4 quantumSystem, int target);
RcppExport SEXP _quantumSystem_applyOracleFunction(SEXP quantumSystemSEXP, SEXP targetSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type quantumSystem(quantumSystemSEXP);
    Rcpp::traits::input_parameter< int >::type target(targetSEXP);
    applyOracleFunction(quantumSystem, target);
    return R_NilValue;
END_RCPP
}
// applyDifussion
void applyDifussion(S4 quantumSystem);
RcppExport SEXP _quantumSystem_applyDifussion(SEXP quantumSystemSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type quantumSystem(quantumSystemSEXP);
    applyDifussion(quantumSystem);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_quantumSystem_init_system", (DL_FUNC) &_quantumSystem_init_system, 1},
    {"_quantumSystem_seq_int", (DL_FUNC) &_quantumSystem_seq_int, 2},
    {"_quantumSystem_meassurement", (DL_FUNC) &_quantumSystem_meassurement, 1},
    {"_quantumSystem_getStateProbability", (DL_FUNC) &_quantumSystem_getStateProbability, 2},
    {"_quantumSystem_applyHadamard", (DL_FUNC) &_quantumSystem_applyHadamard, 1},
    {"_quantumSystem_applyOracleFunction", (DL_FUNC) &_quantumSystem_applyOracleFunction, 2},
    {"_quantumSystem_applyDifussion", (DL_FUNC) &_quantumSystem_applyDifussion, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_quantumSystem(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
