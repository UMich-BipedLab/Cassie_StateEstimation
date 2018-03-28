#ifndef __c21_StateEstimation_h__
#define __c21_StateEstimation_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc21_StateEstimationInstanceStruct
#define typedef_SFc21_StateEstimationInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c21_sfEvent;
  boolean_T c21_doneDoubleBufferReInit;
  uint8_T c21_is_active_c21_StateEstimation;
  real_T (*c21_w)[3];
  real_T (*c21_e)[14];
  real_T (*c21_e_dot)[14];
  real_T (*c21_contact)[2];
  real_T (*c21_velocity)[3];
} SFc21_StateEstimationInstanceStruct;

#endif                                 /*typedef_SFc21_StateEstimationInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c21_StateEstimation_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c21_StateEstimation_get_check_sum(mxArray *plhs[]);
extern void c21_StateEstimation_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
