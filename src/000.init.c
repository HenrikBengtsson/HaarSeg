#include <Rdefines.h>
#include <R_ext/Rdynload.h>
#include "HaarSeg.h"

#define CDEF(name, n) {#name, (DL_FUNC) &name, n}
                               
static R_CMethodDef cMethods[]  = {
  CDEF("rConvAndPeak", 5),
  CDEF("rPulseConv", 5),
  CDEF("rWConvAndPeak", 6),
  CDEF("rThresAndUnify", 7),
  {NULL, NULL, 0}
};

void R_init_matrixStats(DllInfo *info) {
  R_registerRoutines(info, cMethods, NULL, NULL, NULL);
  R_useDynamicSymbols(info, FALSE);
}
