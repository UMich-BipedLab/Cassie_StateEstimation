#ifndef __c1_RightInvariant_EKF_h__
#define __c1_RightInvariant_EKF_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_c1_struct_T
#define typedef_c1_struct_T

typedef struct {
  int32_T f0;
  int32_T f1;
} c1_struct_T;

#endif                                 /*typedef_c1_struct_T*/

#ifndef struct_sQRjD5tVzUVzkWZ7EBxCU6B
#define struct_sQRjD5tVzUVzkWZ7EBxCU6B

struct sQRjD5tVzUVzkWZ7EBxCU6B
{
  real_T f1[40];
  real_T f2[4];
};

#endif                                 /*struct_sQRjD5tVzUVzkWZ7EBxCU6B*/

#ifndef typedef_c1_cell_0
#define typedef_c1_cell_0

typedef struct sQRjD5tVzUVzkWZ7EBxCU6B c1_cell_0;

#endif                                 /*typedef_c1_cell_0*/

#ifndef struct_sQRjD5tVzUVzkWZ7EBxCU6B_size
#define struct_sQRjD5tVzUVzkWZ7EBxCU6B_size

struct sQRjD5tVzUVzkWZ7EBxCU6B_size
{
  int32_T f1[2];
};

#endif                                 /*struct_sQRjD5tVzUVzkWZ7EBxCU6B_size*/

#ifndef typedef_c1_cell_0_size
#define typedef_c1_cell_0_size

typedef struct sQRjD5tVzUVzkWZ7EBxCU6B_size c1_cell_0_size;

#endif                                 /*typedef_c1_cell_0_size*/

#ifndef typedef_SFc1_RightInvariant_EKFInstanceStruct
#define typedef_SFc1_RightInvariant_EKFInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c1_sfEvent;
  boolean_T c1_doneDoubleBufferReInit;
  uint8_T c1_is_active_c1_RightInvariant_EKF;
  uint32_T c1_method;
  boolean_T c1_method_not_empty;
  uint32_T c1_state;
  boolean_T c1_state_not_empty;
  uint32_T c1_b_state[2];
  boolean_T c1_b_state_not_empty;
  uint32_T c1_c_state[625];
  boolean_T c1_c_state_not_empty;
  uint32_T c1_b_method;
  boolean_T c1_b_method_not_empty;
  uint32_T c1_d_state[2];
  boolean_T c1_d_state_not_empty;
  real_T (*c1_position)[3];
  real_T (*c1_landmarks_data)[40];
  int32_T (*c1_landmarks_sizes)[2];
  real_T (*c1_orientation)[4];
  real_T *c1_pulse1;
  real_T *c1_pulse2;
  real_T (*c1_landmark_positions)[28];
  real_T (*c1_landmark_true_noise_std)[3];
} SFc1_RightInvariant_EKFInstanceStruct;

#endif                                 /*typedef_SFc1_RightInvariant_EKFInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_RightInvariant_EKF_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c1_RightInvariant_EKF_get_check_sum(mxArray *plhs[]);
extern void c1_RightInvariant_EKF_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
