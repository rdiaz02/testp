// This file was automatically generated by 'Kmisc::registerFunctions()'

#include <R.h>
#include <Rinternals.h>

#include <R_ext/Rdynload.h>

SEXP testp_f4(SEXP xSEXP);
SEXP testp_f3(SEXP v1SEXP);

R_CallMethodDef callMethods[]  = {
  {"C_testp_f4", (DL_FUNC) &testp_f4, 1},
  {"C_testp_f3", (DL_FUNC) &testp_f3, 1},
  {NULL, NULL, 0}
};

void R_init_testp(DllInfo *info) {
  R_registerRoutines(info, NULL, callMethods, NULL, NULL);
  R_useDynamicSymbols(info, FALSE);
}

