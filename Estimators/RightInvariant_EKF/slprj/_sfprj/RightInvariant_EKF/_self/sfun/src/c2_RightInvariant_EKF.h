#ifndef __c2_RightInvariant_EKF_h__
#define __c2_RightInvariant_EKF_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc2_RightInvariant_EKFInstanceStruct
#define typedef_SFc2_RightInvariant_EKFInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c2_sfEvent;
  boolean_T c2_doneDoubleBufferReInit;
  uint8_T c2_is_active_c2_RightInvariant_EKF;
  real_T (*c2_quaternion)[4];
  real_T (*c2_velocity)[3];
  real_T (*c2_X_init)[49];
  real_T (*c2_encoders)[14];
  real_T (*c2_contact)[2];
} SFc2_RightInvariant_EKFInstanceStruct;

#endif                                 /*typedef_SFc2_RightInvariant_EKFInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c2_RightInvariant_EKF_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c2_RightInvariant_EKF_get_check_sum(mxArray *plhs[]);
extern void c2_RightInvariant_EKF_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
