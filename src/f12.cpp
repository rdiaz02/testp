#include <Rcpp.h>

double f2(double x) {
  return 2 * x;
}

// [[Rcpp::export]]
double f4(double x) {
  return 3 * f2(x);
}

// [[Rcpp::export]]
int f3(Rcpp::IntegerVector v1) {
  std::vector<int> v2 = Rcpp::as<std::vector<int> > (v1);
  return v2[0];
}
