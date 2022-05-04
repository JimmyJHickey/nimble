// DO NOT EDIT BY HAND.
// This file was automatically generated by nimble/packages/generateStaticCode.R

#include <nimble/predefinedNimbleLists.h>
#include <Rmath.h>
#include <iostream>
#include <math.h>
#include <nimble/EigenTypedefs.h>
#include <nimble/RcppUtils.h>
#include <nimble/Utils.h>
#include <nimble/accessorClasses.h>
#include <nimble/smartPtrs.h>
#undef eval

SEXP new_EIGEN_EIGENCLASS() {
  nimSmartPtr<EIGEN_EIGENCLASS> *ptrToSmartPtr;
  EIGEN_EIGENCLASS *newObj;
  SEXP SptrToSmartPtr;
  SEXP Sans;
  newObj = new EIGEN_EIGENCLASS;
  ptrToSmartPtr = new nimSmartPtr<EIGEN_EIGENCLASS>;
  ptrToSmartPtr->setPtrFromT(newObj);
  PROTECT(SptrToSmartPtr =
              R_MakeExternalPtr(ptrToSmartPtr, R_NilValue, R_NilValue));
  PROTECT(Sans = EIGEN_EIGENCLASS_castDerivedPtrPtrToPairOfPtrsSEXP(
              SptrToSmartPtr));
  UNPROTECT(2);
  return (Sans);
}

SEXP EIGEN_EIGENCLASS_castPtrPtrToNamedObjectsPtrSEXP(SEXP input) {
  return (R_MakeExternalPtr(
      dynamic_cast<NamedObjects *>(reinterpret_cast<EIGEN_EIGENCLASS *>(
          *static_cast<void **>(R_ExternalPtrAddr(input)))),
      R_NilValue, R_NilValue));
}

SEXP EIGEN_EIGENCLASS_castDerivedPtrPtrToPairOfPtrsSEXP(SEXP input) {
  nimSmartPtrBase *ptrToSmartPtrBase;
  nimSmartPtr<EIGEN_EIGENCLASS> *ptrToSmartPtr;
  void *ptrToPtr;
  SEXP SptrToSmartPtrBase;
  SEXP SptrToPtr;
  SEXP Sans;
  ptrToSmartPtr =
      static_cast<nimSmartPtr<EIGEN_EIGENCLASS> *>(R_ExternalPtrAddr(input));
  ptrToSmartPtrBase = dynamic_cast<nimSmartPtrBase *>(ptrToSmartPtr);
  ptrToPtr = ptrToSmartPtr->getVoidPtrToRealPtr();
  PROTECT(SptrToSmartPtrBase =
              R_MakeExternalPtr(ptrToSmartPtrBase, R_NilValue, R_NilValue));
  PROTECT(SptrToPtr = R_MakeExternalPtr(ptrToPtr, R_NilValue, R_NilValue));
  PROTECT(Sans = Rf_allocVector(VECSXP, 2));
  SET_VECTOR_ELT(Sans, 0, SptrToSmartPtrBase);
  SET_VECTOR_ELT(Sans, 1, SptrToPtr);
  UNPROTECT(3);
  return (Sans);
}

SEXP new_EIGEN_SVDCLASS() {
  nimSmartPtr<EIGEN_SVDCLASS> *ptrToSmartPtr;
  EIGEN_SVDCLASS *newObj;
  SEXP SptrToSmartPtr;
  SEXP Sans;
  newObj = new EIGEN_SVDCLASS;
  ptrToSmartPtr = new nimSmartPtr<EIGEN_SVDCLASS>;
  ptrToSmartPtr->setPtrFromT(newObj);
  PROTECT(SptrToSmartPtr =
              R_MakeExternalPtr(ptrToSmartPtr, R_NilValue, R_NilValue));
  PROTECT(Sans =
              EIGEN_SVDCLASS_castDerivedPtrPtrToPairOfPtrsSEXP(SptrToSmartPtr));
  UNPROTECT(2);
  return (Sans);
}

SEXP EIGEN_SVDCLASS_castPtrPtrToNamedObjectsPtrSEXP(SEXP input) {
  return (R_MakeExternalPtr(
      dynamic_cast<NamedObjects *>(reinterpret_cast<EIGEN_SVDCLASS *>(
          *static_cast<void **>(R_ExternalPtrAddr(input)))),
      R_NilValue, R_NilValue));
}

SEXP EIGEN_SVDCLASS_castDerivedPtrPtrToPairOfPtrsSEXP(SEXP input) {
  nimSmartPtrBase *ptrToSmartPtrBase;
  nimSmartPtr<EIGEN_SVDCLASS> *ptrToSmartPtr;
  void *ptrToPtr;
  SEXP SptrToSmartPtrBase;
  SEXP SptrToPtr;
  SEXP Sans;
  ptrToSmartPtr =
      static_cast<nimSmartPtr<EIGEN_SVDCLASS> *>(R_ExternalPtrAddr(input));
  ptrToSmartPtrBase = dynamic_cast<nimSmartPtrBase *>(ptrToSmartPtr);
  ptrToPtr = ptrToSmartPtr->getVoidPtrToRealPtr();
  PROTECT(SptrToSmartPtrBase =
              R_MakeExternalPtr(ptrToSmartPtrBase, R_NilValue, R_NilValue));
  PROTECT(SptrToPtr = R_MakeExternalPtr(ptrToPtr, R_NilValue, R_NilValue));
  PROTECT(Sans = Rf_allocVector(VECSXP, 2));
  SET_VECTOR_ELT(Sans, 0, SptrToSmartPtrBase);
  SET_VECTOR_ELT(Sans, 1, SptrToPtr);
  UNPROTECT(3);
  return (Sans);
}

void OptimResultNimbleList::copyFromSEXP(SEXP S_nimList_) {
  SEXP S__dot_xData;
  SEXP S_par;
  SEXP S_value;
  SEXP S_counts;
  SEXP S_convergence;
  SEXP S_message;
  SEXP S_hessian;
  RObjectPointer = S_nimList_;
  PROTECT(S__dot_xData = Rf_allocVector(STRSXP, 1));
  SET_STRING_ELT(S__dot_xData, 0, Rf_mkChar(".xData"));
  PROTECT(S_par = Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                    Rf_install("par")));
  PROTECT(S_value =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("value")));
  PROTECT(S_counts =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("counts")));
  PROTECT(S_convergence =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("convergence")));
  PROTECT(S_message =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("message")));
  PROTECT(S_hessian =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("hessian")));
  SEXP_2_NimArr<1>(S_par, par);
  value = SEXP_2_double(S_value);
  SEXP_2_NimArr<1>(S_counts, counts);
  convergence = SEXP_2_int(S_convergence);
  message = STRSEXP_2_string(S_message);
  SEXP_2_NimArr<2>(S_hessian, hessian);
  UNPROTECT(13);
}
SEXP OptimResultNimbleList::copyToSEXP() {
  SEXP S__dot_xData;
  SEXP S_par;
  SEXP S_value;
  SEXP S_counts;
  SEXP S_convergence;
  SEXP S_message;
  SEXP S_hessian;
  if (!RCopiedFlag) {
    PROTECT(S__dot_xData = Rf_allocVector(STRSXP, 1));
    SET_STRING_ELT(S__dot_xData, 0, Rf_mkChar(".xData"));
    PROTECT(S_par = NimArr_2_SEXP<1>(par));
    PROTECT(S_value = double_2_SEXP(value));
    PROTECT(S_counts = NimArr_2_SEXP<1>(counts));
    PROTECT(S_convergence = int_2_SEXP(convergence));
    PROTECT(S_message = string_2_STRSEXP(message));
    PROTECT(S_hessian = NimArr_2_SEXP<2>(hessian));
    Rf_defineVar(Rf_install("par"), S_par,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("value"), S_value,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("counts"), S_counts,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("convergence"), S_convergence,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("message"), S_message,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("hessian"), S_hessian,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    RCopiedFlag = true;
    UNPROTECT(13);
  }
  return (RObjectPointer);
}
void OptimResultNimbleList::createNewSEXP() {
  SEXP S_newNimList;
  SEXP S_listName;
  PROTECT(S_listName = Rf_allocVector(STRSXP, 1));
  SET_STRING_ELT(S_listName, 0, Rf_mkChar("OptimResultNimbleList"));
  PROTECT(S_newNimList = makeNewNimbleList(S_listName));
  RObjectPointer = S_newNimList;
  UNPROTECT(2);
}
void OptimResultNimbleList::resetFlags() { RCopiedFlag = false; }
void OptimResultNimbleList::copyFromRobject(SEXP Robject) {
  SETUP_S_xData;
  COPY_NUMERIC_VECTOR_FROM_R_OBJECT("par");
  COPY_DOUBLE_SCALAR_FROM_R_OBJECT("value");
  COPY_NUMERIC_VECTOR_FROM_R_OBJECT("counts");
  COPY_INTEGER_SCALAR_FROM_R_OBJECT("convergence");
  COPY_NUMERIC_VECTOR_FROM_R_OBJECT("hessian");
  UNPROTECT(7);
}
OptimResultNimbleList::OptimResultNimbleList() {
  RCopiedFlag = false;
  RObjectPointer = NULL;
  namedObjects["par"] = &par;
  namedObjects["value"] = &value;
  namedObjects["counts"] = &counts;
  namedObjects["convergence"] = &convergence;
  namedObjects["message"] = &message;
  namedObjects["hessian"] = &hessian;
  namedObjects["RObjectPointer"] = &RObjectPointer;
  namedObjects["RCopiedFlag"] = &RCopiedFlag;
}

SEXP new_OptimResultNimbleList() {
  nimSmartPtr<OptimResultNimbleList> *ptrToSmartPtr;
  OptimResultNimbleList *newObj;
  SEXP SptrToSmartPtr;
  SEXP Sans;
  newObj = new OptimResultNimbleList;
  ptrToSmartPtr = new nimSmartPtr<OptimResultNimbleList>;
  ptrToSmartPtr->setPtrFromT(newObj);
  PROTECT(SptrToSmartPtr =
              R_MakeExternalPtr(ptrToSmartPtr, R_NilValue, R_NilValue));
  PROTECT(Sans = OptimResultNimbleList_castDerivedPtrPtrToPairOfPtrsSEXP(
              SptrToSmartPtr));
  UNPROTECT(2);
  return (Sans);
}

SEXP OptimResultNimbleList_castPtrPtrToNamedObjectsPtrSEXP(SEXP input) {
  return (R_MakeExternalPtr(
      dynamic_cast<NamedObjects *>(reinterpret_cast<OptimResultNimbleList *>(
          *static_cast<void **>(R_ExternalPtrAddr(input)))),
      R_NilValue, R_NilValue));
}

SEXP OptimResultNimbleList_castDerivedPtrPtrToPairOfPtrsSEXP(SEXP input) {
  nimSmartPtrBase *ptrToSmartPtrBase;
  nimSmartPtr<OptimResultNimbleList> *ptrToSmartPtr;
  void *ptrToPtr;
  SEXP SptrToSmartPtrBase;
  SEXP SptrToPtr;
  SEXP Sans;
  ptrToSmartPtr = static_cast<nimSmartPtr<OptimResultNimbleList> *>(
      R_ExternalPtrAddr(input));
  ptrToSmartPtrBase = dynamic_cast<nimSmartPtrBase *>(ptrToSmartPtr);
  ptrToPtr = ptrToSmartPtr->getVoidPtrToRealPtr();
  PROTECT(SptrToSmartPtrBase =
              R_MakeExternalPtr(ptrToSmartPtrBase, R_NilValue, R_NilValue));
  PROTECT(SptrToPtr = R_MakeExternalPtr(ptrToPtr, R_NilValue, R_NilValue));
  PROTECT(Sans = Rf_allocVector(VECSXP, 2));
  SET_VECTOR_ELT(Sans, 0, SptrToSmartPtrBase);
  SET_VECTOR_ELT(Sans, 1, SptrToPtr);
  UNPROTECT(3);
  return (Sans);
}

void OptimControlNimbleList::copyFromSEXP(SEXP S_nimList_) {
  SEXP S__dot_xData;
  SEXP S_trace;
  SEXP S_fnscale;
  SEXP S_parscale;
  SEXP S_ndeps;
  SEXP S_maxit;
  SEXP S_abstol;
  SEXP S_reltol;
  SEXP S_alpha;
  SEXP S_beta;
  SEXP S_gamma;
  SEXP S_REPORT;
  SEXP S_type;
  SEXP S_lmm;
  SEXP S_factr;
  SEXP S_pgtol;
  SEXP S_temp;
  SEXP S_tmax;
  RObjectPointer = S_nimList_;
  PROTECT(S__dot_xData = Rf_allocVector(STRSXP, 1));
  SET_STRING_ELT(S__dot_xData, 0, Rf_mkChar(".xData"));
  PROTECT(S_trace =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("trace")));
  PROTECT(S_fnscale =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("fnscale")));
  PROTECT(S_parscale =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("parscale")));
  PROTECT(S_ndeps =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("ndeps")));
  PROTECT(S_maxit =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("maxit")));
  PROTECT(S_abstol =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("abstol")));
  PROTECT(S_reltol =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("reltol")));
  PROTECT(S_alpha =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("alpha")));
  PROTECT(S_beta = Rf_findVarInFrame(
              PROTECT(GET_SLOT(S_nimList_, S__dot_xData)), Rf_install("beta")));
  PROTECT(S_gamma =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("gamma")));
  PROTECT(S_REPORT =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("REPORT")));
  PROTECT(S_type = Rf_findVarInFrame(
              PROTECT(GET_SLOT(S_nimList_, S__dot_xData)), Rf_install("type")));
  PROTECT(S_lmm = Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                    Rf_install("lmm")));
  PROTECT(S_factr =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("factr")));
  PROTECT(S_pgtol =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("pgtol")));
  PROTECT(S_temp = Rf_findVarInFrame(
              PROTECT(GET_SLOT(S_nimList_, S__dot_xData)), Rf_install("temp")));
  PROTECT(S_tmax = Rf_findVarInFrame(
              PROTECT(GET_SLOT(S_nimList_, S__dot_xData)), Rf_install("tmax")));
  trace = SEXP_2_int(S_trace);
  fnscale = SEXP_2_double(S_fnscale);
  SEXP_2_NimArr<1>(S_parscale, parscale);
  SEXP_2_NimArr<1>(S_ndeps, ndeps);
  maxit = SEXP_2_int(S_maxit);
  abstol = SEXP_2_double(S_abstol);
  reltol = SEXP_2_double(S_reltol);
  alpha = SEXP_2_double(S_alpha);
  beta = SEXP_2_double(S_beta);
  gamma = SEXP_2_double(S_gamma);
  REPORT = SEXP_2_int(S_REPORT);
  type = SEXP_2_int(S_type);
  lmm = SEXP_2_int(S_lmm);
  factr = SEXP_2_double(S_factr);
  pgtol = SEXP_2_double(S_pgtol);
  temp = SEXP_2_double(S_temp);
  tmax = SEXP_2_int(S_tmax);
  UNPROTECT(35);
}
SEXP OptimControlNimbleList::copyToSEXP() {
  SEXP S__dot_xData;
  SEXP S_trace;
  SEXP S_fnscale;
  SEXP S_parscale;
  SEXP S_ndeps;
  SEXP S_maxit;
  SEXP S_abstol;
  SEXP S_reltol;
  SEXP S_alpha;
  SEXP S_beta;
  SEXP S_gamma;
  SEXP S_REPORT;
  SEXP S_type;
  SEXP S_lmm;
  SEXP S_factr;
  SEXP S_pgtol;
  SEXP S_temp;
  SEXP S_tmax;
  if (!RCopiedFlag) {
    PROTECT(S__dot_xData = Rf_allocVector(STRSXP, 1));
    SET_STRING_ELT(S__dot_xData, 0, Rf_mkChar(".xData"));
    PROTECT(S_trace = int_2_SEXP(trace));
    PROTECT(S_fnscale = double_2_SEXP(fnscale));
    PROTECT(S_parscale = NimArr_2_SEXP<1>(parscale));
    PROTECT(S_ndeps = NimArr_2_SEXP<1>(ndeps));
    PROTECT(S_maxit = int_2_SEXP(maxit));
    PROTECT(S_abstol = double_2_SEXP(abstol));
    PROTECT(S_reltol = double_2_SEXP(reltol));
    PROTECT(S_alpha = double_2_SEXP(alpha));
    PROTECT(S_beta = double_2_SEXP(beta));
    PROTECT(S_gamma = double_2_SEXP(gamma));
    PROTECT(S_REPORT = int_2_SEXP(REPORT));
    PROTECT(S_type = int_2_SEXP(type));
    PROTECT(S_lmm = int_2_SEXP(lmm));
    PROTECT(S_factr = double_2_SEXP(factr));
    PROTECT(S_pgtol = double_2_SEXP(pgtol));
    PROTECT(S_temp = double_2_SEXP(temp));
    PROTECT(S_tmax = int_2_SEXP(tmax));
    Rf_defineVar(Rf_install("trace"), S_trace,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("fnscale"), S_fnscale,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("parscale"), S_parscale,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("ndeps"), S_ndeps,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("maxit"), S_maxit,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("abstol"), S_abstol,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("reltol"), S_reltol,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("alpha"), S_alpha,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("beta"), S_beta,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("gamma"), S_gamma,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("REPORT"), S_REPORT,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("type"), S_type,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("lmm"), S_lmm,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("factr"), S_factr,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("pgtol"), S_pgtol,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("temp"), S_temp,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("tmax"), S_tmax,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    RCopiedFlag = true;
    UNPROTECT(35);
  }
  return (RObjectPointer);
}
void OptimControlNimbleList::createNewSEXP() {
  SEXP S_newNimList;
  SEXP S_listName;
  PROTECT(S_listName = Rf_allocVector(STRSXP, 1));
  SET_STRING_ELT(S_listName, 0, Rf_mkChar("OptimControlNimbleList"));
  PROTECT(S_newNimList = makeNewNimbleList(S_listName));
  RObjectPointer = S_newNimList;
  UNPROTECT(2);
}
void OptimControlNimbleList::resetFlags() { RCopiedFlag = false; }
void OptimControlNimbleList::copyFromRobject(SEXP Robject) {
  SETUP_S_xData;
  COPY_INTEGER_SCALAR_FROM_R_OBJECT("trace");
  COPY_DOUBLE_SCALAR_FROM_R_OBJECT("fnscale");
  COPY_NUMERIC_VECTOR_FROM_R_OBJECT("parscale");
  COPY_NUMERIC_VECTOR_FROM_R_OBJECT("ndeps");
  COPY_INTEGER_SCALAR_FROM_R_OBJECT("maxit");
  COPY_DOUBLE_SCALAR_FROM_R_OBJECT("abstol");
  COPY_DOUBLE_SCALAR_FROM_R_OBJECT("reltol");
  COPY_DOUBLE_SCALAR_FROM_R_OBJECT("alpha");
  COPY_DOUBLE_SCALAR_FROM_R_OBJECT("beta");
  COPY_DOUBLE_SCALAR_FROM_R_OBJECT("gamma");
  COPY_INTEGER_SCALAR_FROM_R_OBJECT("REPORT");
  COPY_INTEGER_SCALAR_FROM_R_OBJECT("type");
  COPY_INTEGER_SCALAR_FROM_R_OBJECT("lmm");
  COPY_DOUBLE_SCALAR_FROM_R_OBJECT("factr");
  COPY_DOUBLE_SCALAR_FROM_R_OBJECT("pgtol");
  COPY_DOUBLE_SCALAR_FROM_R_OBJECT("temp");
  COPY_INTEGER_SCALAR_FROM_R_OBJECT("tmax");
  UNPROTECT(19);
}
OptimControlNimbleList::OptimControlNimbleList() {
  RCopiedFlag = false;
  RObjectPointer = NULL;
  namedObjects["trace"] = &trace;
  namedObjects["fnscale"] = &fnscale;
  namedObjects["parscale"] = &parscale;
  namedObjects["ndeps"] = &ndeps;
  namedObjects["maxit"] = &maxit;
  namedObjects["abstol"] = &abstol;
  namedObjects["reltol"] = &reltol;
  namedObjects["alpha"] = &alpha;
  namedObjects["beta"] = &beta;
  namedObjects["gamma"] = &gamma;
  namedObjects["REPORT"] = &REPORT;
  namedObjects["type"] = &type;
  namedObjects["lmm"] = &lmm;
  namedObjects["factr"] = &factr;
  namedObjects["pgtol"] = &pgtol;
  namedObjects["temp"] = &temp;
  namedObjects["tmax"] = &tmax;
  namedObjects["RObjectPointer"] = &RObjectPointer;
  namedObjects["RCopiedFlag"] = &RCopiedFlag;
}

SEXP new_OptimControlNimbleList() {
  nimSmartPtr<OptimControlNimbleList> *ptrToSmartPtr;
  OptimControlNimbleList *newObj;
  SEXP SptrToSmartPtr;
  SEXP Sans;
  newObj = new OptimControlNimbleList;
  ptrToSmartPtr = new nimSmartPtr<OptimControlNimbleList>;
  ptrToSmartPtr->setPtrFromT(newObj);
  PROTECT(SptrToSmartPtr =
              R_MakeExternalPtr(ptrToSmartPtr, R_NilValue, R_NilValue));
  PROTECT(Sans = OptimControlNimbleList_castDerivedPtrPtrToPairOfPtrsSEXP(
              SptrToSmartPtr));
  UNPROTECT(2);
  return (Sans);
}

SEXP OptimControlNimbleList_castPtrPtrToNamedObjectsPtrSEXP(SEXP input) {
  return (R_MakeExternalPtr(
      dynamic_cast<NamedObjects *>(reinterpret_cast<OptimControlNimbleList *>(
          *static_cast<void **>(R_ExternalPtrAddr(input)))),
      R_NilValue, R_NilValue));
}

SEXP OptimControlNimbleList_castDerivedPtrPtrToPairOfPtrsSEXP(SEXP input) {
  nimSmartPtrBase *ptrToSmartPtrBase;
  nimSmartPtr<OptimControlNimbleList> *ptrToSmartPtr;
  void *ptrToPtr;
  SEXP SptrToSmartPtrBase;
  SEXP SptrToPtr;
  SEXP Sans;
  ptrToSmartPtr = static_cast<nimSmartPtr<OptimControlNimbleList> *>(
      R_ExternalPtrAddr(input));
  ptrToSmartPtrBase = dynamic_cast<nimSmartPtrBase *>(ptrToSmartPtr);
  ptrToPtr = ptrToSmartPtr->getVoidPtrToRealPtr();
  PROTECT(SptrToSmartPtrBase =
              R_MakeExternalPtr(ptrToSmartPtrBase, R_NilValue, R_NilValue));
  PROTECT(SptrToPtr = R_MakeExternalPtr(ptrToPtr, R_NilValue, R_NilValue));
  PROTECT(Sans = Rf_allocVector(VECSXP, 2));
  SET_VECTOR_ELT(Sans, 0, SptrToSmartPtrBase);
  SET_VECTOR_ELT(Sans, 1, SptrToPtr);
  UNPROTECT(3);
  return (Sans);
}

void NIMBLE_ADCLASS::copyFromSEXP(SEXP S_nimList_) {
  SEXP S__dot_xData;
  SEXP S_value;
  SEXP S_jacobian;
  SEXP S_hessian;
  RObjectPointer = S_nimList_;
  PROTECT(S__dot_xData = Rf_allocVector(STRSXP, 1));
  SET_STRING_ELT(S__dot_xData, 0, Rf_mkChar(".xData"));
  PROTECT(S_value =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("value")));
  PROTECT(S_jacobian =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("jacobian")));
  PROTECT(S_hessian =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("hessian")));
  SEXP_2_NimArr<1>(S_value, value);
  SEXP_2_NimArr<2>(S_jacobian, jacobian);
  SEXP_2_NimArr<3>(S_hessian, hessian);
  UNPROTECT(7);
}
SEXP NIMBLE_ADCLASS::copyToSEXP() {
  PROTECT(RObjectPointer);
  SEXP S__dot_xData;
  SEXP S_value;
  SEXP S_jacobian;
  SEXP S_hessian;
  if (!RCopiedFlag) {
    PROTECT(S__dot_xData = Rf_allocVector(STRSXP, 1));
    SET_STRING_ELT(S__dot_xData, 0, PROTECT(Rf_mkChar(".xData")));
    PROTECT(S_value = NimArr_2_SEXP<1>(value));
    PROTECT(S_jacobian = NimArr_2_SEXP<2>(jacobian));
    PROTECT(S_hessian = NimArr_2_SEXP<3>(hessian));
    Rf_defineVar(PROTECT(Rf_install("value")), S_value,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(PROTECT(Rf_install("jacobian")), S_jacobian,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(PROTECT(Rf_install("hessian")), S_hessian,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    RCopiedFlag = true;
    UNPROTECT(11);
  }
  UNPROTECT(1);
  return (RObjectPointer);
}
void NIMBLE_ADCLASS::createNewSEXP() {
  SEXP S_newNimList;
  SEXP S_listName;
  PROTECT(S_listName = Rf_allocVector(STRSXP, 1));
  SET_STRING_ELT(S_listName, 0, Rf_mkChar("NIMBLE_ADCLASS"));
  PROTECT(S_newNimList = makeNewNimbleList(S_listName));
  RObjectPointer = S_newNimList;
  UNPROTECT(2);
}
void NIMBLE_ADCLASS::resetFlags() { RCopiedFlag = false; }

void NIMBLE_ADCLASS::copyFromRobject(SEXP Robject) {
  SETUP_S_xData;
  COPY_NUMERIC_VECTOR_FROM_R_OBJECT("value");
  COPY_NUMERIC_VECTOR_FROM_R_OBJECT("jacobian");
  COPY_NUMERIC_VECTOR_FROM_R_OBJECT("hessian");
  UNPROTECT(5);
}

NIMBLE_ADCLASS::NIMBLE_ADCLASS() {
  RCopiedFlag = false;
  RObjectPointer = NULL;
  namedObjects["value"] = &value;
  namedObjects["jacobian"] = &jacobian;
  namedObjects["hessian"] = &hessian;
  namedObjects["RObjectPointer"] = &RObjectPointer;
  namedObjects["RCopiedFlag"] = &RCopiedFlag;
}

SEXP new_NIMBLE_ADCLASS() {
  nimSmartPtr<NIMBLE_ADCLASS> *ptrToSmartPtr;
  NIMBLE_ADCLASS *newObj;
  SEXP SptrToSmartPtr;
  SEXP Sans;
  newObj = new NIMBLE_ADCLASS;
  ptrToSmartPtr = new nimSmartPtr<NIMBLE_ADCLASS>;
  ptrToSmartPtr->setPtrFromT(newObj);
  PROTECT(SptrToSmartPtr =
              R_MakeExternalPtr(ptrToSmartPtr, R_NilValue, R_NilValue));
  PROTECT(Sans =
              NIMBLE_ADCLASS_castDerivedPtrPtrToPairOfPtrsSEXP(SptrToSmartPtr));
  UNPROTECT(2);
  return (Sans);
}

SEXP NIMBLE_ADCLASS_castPtrPtrToNamedObjectsPtrSEXP(SEXP input) {
  return (R_MakeExternalPtr(
      dynamic_cast<NamedObjects *>(reinterpret_cast<NIMBLE_ADCLASS *>(
          *static_cast<void **>(R_ExternalPtrAddr(input)))),
      R_NilValue, R_NilValue));
}

SEXP NIMBLE_ADCLASS_castDerivedPtrPtrToPairOfPtrsSEXP(SEXP input) {
  nimSmartPtrBase *ptrToSmartPtrBase;
  nimSmartPtr<NIMBLE_ADCLASS> *ptrToSmartPtr;
  void *ptrToPtr;
  SEXP SptrToSmartPtrBase;
  SEXP SptrToPtr;
  SEXP Sans;
  ptrToSmartPtr =
      static_cast<nimSmartPtr<NIMBLE_ADCLASS> *>(R_ExternalPtrAddr(input));
  ptrToSmartPtrBase = dynamic_cast<nimSmartPtrBase *>(ptrToSmartPtr);
  ptrToPtr = ptrToSmartPtr->getVoidPtrToRealPtr();
  PROTECT(SptrToSmartPtrBase =
              R_MakeExternalPtr(ptrToSmartPtrBase, R_NilValue, R_NilValue));
  PROTECT(SptrToPtr = R_MakeExternalPtr(ptrToPtr, R_NilValue, R_NilValue));
  PROTECT(Sans = Rf_allocVector(VECSXP, 2));
  SET_VECTOR_ELT(Sans, 0, SptrToSmartPtrBase);
  SET_VECTOR_ELT(Sans, 1, SptrToPtr);
  UNPROTECT(3);
  return (Sans);
}

void waicList::copyFromSEXP(SEXP S_nimList_) {
  SEXP S__dot_xData;
  SEXP S_WAIC;
  SEXP S_lppd;
  SEXP S_pWAIC;
  RObjectPointer = S_nimList_;
  PROTECT(S__dot_xData = Rf_allocVector(STRSXP, 1));
  SET_STRING_ELT(S__dot_xData, 0, Rf_mkChar(".xData"));
  PROTECT(S_WAIC = Rf_findVarInFrame(
              PROTECT(GET_SLOT(S_nimList_, S__dot_xData)), Rf_install("WAIC")));
  PROTECT(S_lppd = Rf_findVarInFrame(
              PROTECT(GET_SLOT(S_nimList_, S__dot_xData)), Rf_install("lppd")));
  PROTECT(S_pWAIC =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("pWAIC")));
  WAIC = SEXP_2_double(S_WAIC);
  lppd = SEXP_2_double(S_lppd);
  pWAIC = SEXP_2_double(S_pWAIC);
  UNPROTECT(7);
}
SEXP waicList::copyToSEXP() {
  SEXP S__dot_xData;
  SEXP S_WAIC;
  SEXP S_lppd;
  SEXP S_pWAIC;
  if (!RCopiedFlag) {
    PROTECT(S__dot_xData = Rf_allocVector(STRSXP, 1));
    SET_STRING_ELT(S__dot_xData, 0, Rf_mkChar(".xData"));
    PROTECT(S_WAIC = double_2_SEXP(WAIC));
    PROTECT(S_lppd = double_2_SEXP(lppd));
    PROTECT(S_pWAIC = double_2_SEXP(pWAIC));
    Rf_defineVar(Rf_install("WAIC"), S_WAIC,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("lppd"), S_lppd,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("pWAIC"), S_pWAIC,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    RCopiedFlag = true;
    UNPROTECT(7);
  }
  return (RObjectPointer);
}
void waicList::createNewSEXP() {
  SEXP S_newNimList;
  SEXP S_listName;
  PROTECT(S_listName = Rf_allocVector(STRSXP, 1));
  SET_STRING_ELT(S_listName, 0, Rf_mkChar("waicList"));
  PROTECT(S_newNimList = makeNewNimbleList(S_listName));
  RObjectPointer = S_newNimList;
  UNPROTECT(2);
}
void waicList::resetFlags() { RCopiedFlag = false; }
void waicList::copyFromRobject(SEXP Robject) {
  SETUP_S_xData;
  COPY_DOUBLE_SCALAR_FROM_R_OBJECT("WAIC");
  COPY_DOUBLE_SCALAR_FROM_R_OBJECT("lppd");
  COPY_DOUBLE_SCALAR_FROM_R_OBJECT("pWAIC");
  UNPROTECT(5);
}
waicList::waicList() {
  RCopiedFlag = false;
  RObjectPointer = NULL;
  namedObjects["WAIC"] = &WAIC;
  namedObjects["lppd"] = &lppd;
  namedObjects["pWAIC"] = &pWAIC;
  namedObjects["RObjectPointer"] = &RObjectPointer;
  namedObjects["RCopiedFlag"] = &RCopiedFlag;
}

SEXP new_waicList() {
  nimSmartPtr<waicList> *ptrToSmartPtr;
  waicList *newObj;
  SEXP SptrToSmartPtr;
  SEXP Sans;
  newObj = new waicList;
  ptrToSmartPtr = new nimSmartPtr<waicList>;
  ptrToSmartPtr->setPtrFromT(newObj);
  PROTECT(SptrToSmartPtr =
              R_MakeExternalPtr(ptrToSmartPtr, R_NilValue, R_NilValue));
  PROTECT(Sans = waicList_castDerivedPtrPtrToPairOfPtrsSEXP(SptrToSmartPtr));
  UNPROTECT(2);
  return (Sans);
}

SEXP waicList_castPtrPtrToNamedObjectsPtrSEXP(SEXP input) {
  return (R_MakeExternalPtr(
      dynamic_cast<NamedObjects *>(reinterpret_cast<waicList *>(
          *static_cast<void **>(R_ExternalPtrAddr(input)))),
      R_NilValue, R_NilValue));
}

SEXP waicList_castDerivedPtrPtrToPairOfPtrsSEXP(SEXP input) {
  nimSmartPtrBase *ptrToSmartPtrBase;
  nimSmartPtr<waicList> *ptrToSmartPtr;
  void *ptrToPtr;
  SEXP SptrToSmartPtrBase;
  SEXP SptrToPtr;
  SEXP Sans;
  ptrToSmartPtr =
      static_cast<nimSmartPtr<waicList> *>(R_ExternalPtrAddr(input));
  ptrToSmartPtrBase = dynamic_cast<nimSmartPtrBase *>(ptrToSmartPtr);
  ptrToPtr = ptrToSmartPtr->getVoidPtrToRealPtr();
  PROTECT(SptrToSmartPtrBase =
              R_MakeExternalPtr(ptrToSmartPtrBase, R_NilValue, R_NilValue));
  PROTECT(SptrToPtr = R_MakeExternalPtr(ptrToPtr, R_NilValue, R_NilValue));
  PROTECT(Sans = Rf_allocVector(VECSXP, 2));
  SET_VECTOR_ELT(Sans, 0, SptrToSmartPtrBase);
  SET_VECTOR_ELT(Sans, 1, SptrToPtr);
  UNPROTECT(3);
  return (Sans);
}

void waicDetailsList::copyFromSEXP(SEXP S_nimList_) {
  SEXP S__dot_xData;
  SEXP S_marginal;
  SEXP S_niterMarginal;
  SEXP S_thin;
  SEXP S_online;
  SEXP S_WAIC_partialMC;
  SEXP S_lppd_partialMC;
  SEXP S_pWAIC_partialMC;
  SEXP S_niterMarginal_partialMC;
  SEXP S_WAIC_elements;
  SEXP S_lppd_elements;
  SEXP S_pWAIC_elements;
  RObjectPointer = S_nimList_;
  PROTECT(S__dot_xData = Rf_allocVector(STRSXP, 1));
  SET_STRING_ELT(S__dot_xData, 0, Rf_mkChar(".xData"));
  PROTECT(S_marginal =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("marginal")));
  PROTECT(S_niterMarginal =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("niterMarginal")));
  PROTECT(S_thin = Rf_findVarInFrame(
              PROTECT(GET_SLOT(S_nimList_, S__dot_xData)), Rf_install("thin")));
  PROTECT(S_online =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("online")));
  PROTECT(S_WAIC_partialMC =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("WAIC_partialMC")));
  PROTECT(S_lppd_partialMC =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("lppd_partialMC")));
  PROTECT(S_pWAIC_partialMC =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("pWAIC_partialMC")));
  PROTECT(S_niterMarginal_partialMC =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("niterMarginal_partialMC")));
  PROTECT(S_WAIC_elements =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("WAIC_elements")));
  PROTECT(S_lppd_elements =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("lppd_elements")));
  PROTECT(S_pWAIC_elements =
              Rf_findVarInFrame(PROTECT(GET_SLOT(S_nimList_, S__dot_xData)),
                                Rf_install("pWAIC_elements")));
  marginal = SEXP_2_bool(S_marginal);
  niterMarginal = SEXP_2_double(S_niterMarginal);
  thin = SEXP_2_bool(S_thin);
  online = SEXP_2_bool(S_online);
  SEXP_2_NimArr<1>(S_WAIC_partialMC, WAIC_partialMC);
  SEXP_2_NimArr<1>(S_lppd_partialMC, lppd_partialMC);
  SEXP_2_NimArr<1>(S_pWAIC_partialMC, pWAIC_partialMC);
  SEXP_2_NimArr<1>(S_niterMarginal_partialMC, niterMarginal_partialMC);
  SEXP_2_NimArr<1>(S_WAIC_elements, WAIC_elements);
  SEXP_2_NimArr<1>(S_lppd_elements, lppd_elements);
  SEXP_2_NimArr<1>(S_pWAIC_elements, pWAIC_elements);
  UNPROTECT(23);
}
SEXP waicDetailsList::copyToSEXP() {
  SEXP S__dot_xData;
  SEXP S_marginal;
  SEXP S_niterMarginal;
  SEXP S_thin;
  SEXP S_online;
  SEXP S_WAIC_partialMC;
  SEXP S_lppd_partialMC;
  SEXP S_pWAIC_partialMC;
  SEXP S_niterMarginal_partialMC;
  SEXP S_WAIC_elements;
  SEXP S_lppd_elements;
  SEXP S_pWAIC_elements;
  if (!RCopiedFlag) {
    PROTECT(S__dot_xData = Rf_allocVector(STRSXP, 1));
    SET_STRING_ELT(S__dot_xData, 0, Rf_mkChar(".xData"));
    PROTECT(S_marginal = bool_2_SEXP(marginal));
    PROTECT(S_niterMarginal = double_2_SEXP(niterMarginal));
    PROTECT(S_thin = bool_2_SEXP(thin));
    PROTECT(S_online = bool_2_SEXP(online));
    PROTECT(S_WAIC_partialMC = NimArr_2_SEXP<1>(WAIC_partialMC));
    PROTECT(S_lppd_partialMC = NimArr_2_SEXP<1>(lppd_partialMC));
    PROTECT(S_pWAIC_partialMC = NimArr_2_SEXP<1>(pWAIC_partialMC));
    PROTECT(S_niterMarginal_partialMC =
                NimArr_2_SEXP<1>(niterMarginal_partialMC));
    PROTECT(S_WAIC_elements = NimArr_2_SEXP<1>(WAIC_elements));
    PROTECT(S_lppd_elements = NimArr_2_SEXP<1>(lppd_elements));
    PROTECT(S_pWAIC_elements = NimArr_2_SEXP<1>(pWAIC_elements));
    Rf_defineVar(Rf_install("marginal"), S_marginal,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("niterMarginal"), S_niterMarginal,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("thin"), S_thin,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("online"), S_online,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("WAIC_partialMC"), S_WAIC_partialMC,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("lppd_partialMC"), S_lppd_partialMC,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("pWAIC_partialMC"), S_pWAIC_partialMC,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("niterMarginal_partialMC"),
                 S_niterMarginal_partialMC,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("WAIC_elements"), S_WAIC_elements,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("lppd_elements"), S_lppd_elements,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    Rf_defineVar(Rf_install("pWAIC_elements"), S_pWAIC_elements,
                 PROTECT(GET_SLOT(RObjectPointer, S__dot_xData)));
    RCopiedFlag = true;
    UNPROTECT(23);
  }
  return (RObjectPointer);
}
void waicDetailsList::createNewSEXP() {
  SEXP S_newNimList;
  SEXP S_listName;
  PROTECT(S_listName = Rf_allocVector(STRSXP, 1));
  SET_STRING_ELT(S_listName, 0, Rf_mkChar("waicDetailsList"));
  PROTECT(S_newNimList = makeNewNimbleList(S_listName));
  RObjectPointer = S_newNimList;
  UNPROTECT(2);
}
void waicDetailsList::resetFlags() { RCopiedFlag = false; }
void waicDetailsList::copyFromRobject(SEXP Robject) {
  SETUP_S_xData;
  COPY_LOGICAL_SCALAR_FROM_R_OBJECT("marginal");
  COPY_DOUBLE_SCALAR_FROM_R_OBJECT("niterMarginal");
  COPY_LOGICAL_SCALAR_FROM_R_OBJECT("thin");
  COPY_LOGICAL_SCALAR_FROM_R_OBJECT("online");
  COPY_NUMERIC_VECTOR_FROM_R_OBJECT("WAIC_partialMC");
  COPY_NUMERIC_VECTOR_FROM_R_OBJECT("lppd_partialMC");
  COPY_NUMERIC_VECTOR_FROM_R_OBJECT("pWAIC_partialMC");
  COPY_NUMERIC_VECTOR_FROM_R_OBJECT("niterMarginal_partialMC");
  COPY_NUMERIC_VECTOR_FROM_R_OBJECT("WAIC_elements");
  COPY_NUMERIC_VECTOR_FROM_R_OBJECT("lppd_elements");
  COPY_NUMERIC_VECTOR_FROM_R_OBJECT("pWAIC_elements");
  UNPROTECT(13);
}
waicDetailsList::waicDetailsList() {
  RCopiedFlag = false;
  RObjectPointer = NULL;
  namedObjects["marginal"] = &marginal;
  namedObjects["niterMarginal"] = &niterMarginal;
  namedObjects["thin"] = &thin;
  namedObjects["online"] = &online;
  namedObjects["WAIC_partialMC"] = &WAIC_partialMC;
  namedObjects["lppd_partialMC"] = &lppd_partialMC;
  namedObjects["pWAIC_partialMC"] = &pWAIC_partialMC;
  namedObjects["niterMarginal_partialMC"] = &niterMarginal_partialMC;
  namedObjects["WAIC_elements"] = &WAIC_elements;
  namedObjects["lppd_elements"] = &lppd_elements;
  namedObjects["pWAIC_elements"] = &pWAIC_elements;
  namedObjects["RObjectPointer"] = &RObjectPointer;
  namedObjects["RCopiedFlag"] = &RCopiedFlag;
}

SEXP new_waicDetailsList() {
  nimSmartPtr<waicDetailsList> *ptrToSmartPtr;
  waicDetailsList *newObj;
  SEXP SptrToSmartPtr;
  SEXP Sans;
  newObj = new waicDetailsList;
  ptrToSmartPtr = new nimSmartPtr<waicDetailsList>;
  ptrToSmartPtr->setPtrFromT(newObj);
  PROTECT(SptrToSmartPtr =
              R_MakeExternalPtr(ptrToSmartPtr, R_NilValue, R_NilValue));
  PROTECT(
      Sans = waicDetailsList_castDerivedPtrPtrToPairOfPtrsSEXP(SptrToSmartPtr));
  UNPROTECT(2);
  return (Sans);
}

SEXP waicDetailsList_castPtrPtrToNamedObjectsPtrSEXP(SEXP input) {
  return (R_MakeExternalPtr(
      dynamic_cast<NamedObjects *>(reinterpret_cast<waicDetailsList *>(
          *static_cast<void **>(R_ExternalPtrAddr(input)))),
      R_NilValue, R_NilValue));
}

SEXP waicDetailsList_castDerivedPtrPtrToPairOfPtrsSEXP(SEXP input) {
  nimSmartPtrBase *ptrToSmartPtrBase;
  nimSmartPtr<waicDetailsList> *ptrToSmartPtr;
  void *ptrToPtr;
  SEXP SptrToSmartPtrBase;
  SEXP SptrToPtr;
  SEXP Sans;
  ptrToSmartPtr =
      static_cast<nimSmartPtr<waicDetailsList> *>(R_ExternalPtrAddr(input));
  ptrToSmartPtrBase = dynamic_cast<nimSmartPtrBase *>(ptrToSmartPtr);
  ptrToPtr = ptrToSmartPtr->getVoidPtrToRealPtr();
  PROTECT(SptrToSmartPtrBase =
              R_MakeExternalPtr(ptrToSmartPtrBase, R_NilValue, R_NilValue));
  PROTECT(SptrToPtr = R_MakeExternalPtr(ptrToPtr, R_NilValue, R_NilValue));
  PROTECT(Sans = Rf_allocVector(VECSXP, 2));
  SET_VECTOR_ELT(Sans, 0, SptrToSmartPtrBase);
  SET_VECTOR_ELT(Sans, 1, SptrToPtr);
  UNPROTECT(3);
  return (Sans);
}
