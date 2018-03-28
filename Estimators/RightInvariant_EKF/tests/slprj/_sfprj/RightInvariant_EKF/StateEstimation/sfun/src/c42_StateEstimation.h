#ifndef __c42_StateEstimation_h__
#define __c42_StateEstimation_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc42_StateEstimationInstanceStruct
#define typedef_SFc42_StateEstimationInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c42_sfEvent;
  boolean_T c42_doneDoubleBufferReInit;
  uint8_T c42_is_active_c42_StateEstimation;
  real_T (*c42_q)[20];
  real_T (*c42_GRF)[4];
  real_T (*c42_contact)[2];
} SFc42_StateEstimationInstanceStruct;

#endif                                 /*typedef_SFc42_StateEstimationInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c42_StateEstimation_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c42_StateEstimation_get_check_sum(mxArray *plhs[]);
extern void c42_StateEstimation_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
