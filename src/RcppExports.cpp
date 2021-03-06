// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// ccipca_C
Rcpp::List ccipca_C(arma::colvec lambda, arma::mat U, arma::colvec x, int n, int q, double l, double tol);
RcppExport SEXP onlinePCA_ccipca_C(SEXP lambdaSEXP, SEXP USEXP, SEXP xSEXP, SEXP nSEXP, SEXP qSEXP, SEXP lSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::colvec >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type U(USEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type l(lSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    __result = Rcpp::wrap(ccipca_C(lambda, U, x, n, q, l, tol));
    return __result;
END_RCPP
}
// sgapca_exC
Rcpp::NumericMatrix sgapca_exC(const arma::mat& Qs, const arma::colvec& x, const arma::colvec& y, const arma::colvec& gamma);
RcppExport SEXP onlinePCA_sgapca_exC(SEXP QsSEXP, SEXP xSEXP, SEXP ySEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type Qs(QsSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type gamma(gammaSEXP);
    __result = Rcpp::wrap(sgapca_exC(Qs, x, y, gamma));
    return __result;
END_RCPP
}
// sgapca_nnC
Rcpp::NumericMatrix sgapca_nnC(const arma::mat& Q, const arma::colvec& x, const arma::colvec& y, const arma::colvec& gamma);
RcppExport SEXP onlinePCA_sgapca_nnC(SEXP QSEXP, SEXP xSEXP, SEXP ySEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type Q(QSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type gamma(gammaSEXP);
    __result = Rcpp::wrap(sgapca_nnC(Q, x, y, gamma));
    return __result;
END_RCPP
}
// ghapca_C
Rcpp::NumericMatrix ghapca_C(const arma::mat& Q, const arma::colvec& x, const arma::colvec& y, const arma::colvec& gamma);
RcppExport SEXP onlinePCA_ghapca_C(SEXP QSEXP, SEXP xSEXP, SEXP ySEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type Q(QSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type gamma(gammaSEXP);
    __result = Rcpp::wrap(ghapca_C(Q, x, y, gamma));
    return __result;
END_RCPP
}
