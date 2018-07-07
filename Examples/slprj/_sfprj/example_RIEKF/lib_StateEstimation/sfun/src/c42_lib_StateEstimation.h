#ifndef __c42_lib_StateEstimation_h__
#define __c42_lib_StateEstimation_h__

/* Type Definitions */
#ifndef typedef_SFc42_lib_StateEstimationInstanceStruct
#define typedef_SFc42_lib_StateEstimationInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c42_sfEvent;
  boolean_T c42_doneDoubleBufferReInit;
  uint8_T c42_is_active_c42_lib_StateEstimation;
  void *c42_fEmlrtCtx;
  real_T (*c42_e)[14];
  real_T (*c42_GRF)[4];
  real_T (*c42_contact)[2];
} SFc42_lib_StateEstimationInstanceStruct;

#endif                                 /*typedef_SFc42_lib_StateEstimationInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c42_lib_StateEstimation_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c42_lib_StateEstimation_get_check_sum(mxArray *plhs[]);
extern void c42_lib_StateEstimation_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
