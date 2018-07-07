#ifndef __example_RIEKF_cgxe_h__
#define __example_RIEKF_cgxe_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "emlrt.h"
#include "covrt.h"
#include "cgxert.h"
#include "J_VectorNav_to_LeftToeBottom_src.h"
#include "J_VectorNav_to_RightToeBottom_src.h"
#include "R_VectorNav_to_LeftToeBottom_src.h"
#include "R_VectorNav_to_RightToeBottom_src.h"
#include "blas.h"
#include "p_VectorNav_to_LeftToeBottom_src.h"
#include "p_VectorNav_to_RightToeBottom_src.h"
#define rtInf                          (mxGetInf())
#define rtMinusInf                     (-(mxGetInf()))
#define rtNaN                          (mxGetNaN())
#define rtIsNaN(X)                     ((int)mxIsNaN(X))
#define rtIsInf(X)                     ((int)mxIsInf(X))

extern unsigned int cgxe_example_RIEKF_method_dispatcher(SimStruct* S, int_T
  method, void* data);

#endif
