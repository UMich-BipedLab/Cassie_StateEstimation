#ifndef __c40_RightInvariant_EKF_h__
#define __c40_RightInvariant_EKF_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc40_RightInvariant_EKFInstanceStruct
#define typedef_SFc40_RightInvariant_EKFInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c40_sfEvent;
  boolean_T c40_doneDoubleBufferReInit;
  uint8_T c40_is_active_c40_RightInvariant_EKF;
  real_T (*c40_q)[20];
  real_T (*c40_dq)[20];
  real_T (*c40_b_q)[20];
  real_T (*c40_b_dq)[20];
  real_T (*c40_w)[3];
  real_T (*c40_contact)[2];
  real_T (*c40_X)[49];
  real_T *c40_ekf_enabled;
  real_T (*c40_velocity)[3];
  real_T (*c40_velocity_kinematic)[3];
  real_T *c40_filter_selector;
} SFc40_RightInvariant_EKFInstanceStruct;

#endif                                 /*typedef_SFc40_RightInvariant_EKFInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c40_RightInvariant_EKF_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c40_RightInvariant_EKF_get_check_sum(mxArray *plhs[]);
extern void c40_RightInvariant_EKF_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
