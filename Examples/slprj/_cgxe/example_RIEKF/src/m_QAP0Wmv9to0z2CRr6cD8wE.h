#ifndef __QAP0Wmv9to0z2CRr6cD8wE_h__
#define __QAP0Wmv9to0z2CRr6cD8wE_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"

/* Type Definitions */
#ifndef typedef_RightInvariantEKF
#define typedef_RightInvariantEKF

typedef struct {
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  boolean_T static_bias_initialization;
  boolean_T ekf_update_enabled;
  boolean_T enable_bias_estimation;
  real_T gyro_noise_std[3];
  real_T gyro_bias_noise_std[3];
  real_T accel_noise_std[3];
  real_T accel_bias_noise_std[3];
  real_T contact_noise_std[3];
  real_T encoder_noise_std[14];
  real_T gyro_bias_init[3];
  real_T accel_bias_init[3];
  real_T prior_base_pose_std[6];
  real_T prior_base_velocity_std[3];
  real_T prior_contact_position_std[3];
  real_T prior_gyro_bias_std[3];
  real_T prior_accel_bias_std[3];
  real_T prior_forward_kinematics_std[3];
  real_T X[49];
  real_T theta[6];
  real_T P[441];
  boolean_T filter_enabled;
  boolean_T bias_initialized;
  real_T bg0[3];
  real_T ba0[3];
  real_T w_init_vec[3000];
  real_T a_init_vec[3000];
  real_T imu_init_count;
  real_T w_prev[3];
  real_T a_prev[3];
  real_T encoders_prev[14];
  real_T contact_prev[2];
  real_T t_prev;
  real_T Qg[9];
  real_T Qbg[9];
  real_T Qa[9];
  real_T Qba[9];
  real_T Qc[9];
  real_T Qe[196];
  real_T Np[9];
  real_T P_prior[441];
} RightInvariantEKF;

#endif                                 /*typedef_RightInvariantEKF*/

#ifndef typedef_InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
#define typedef_InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE

typedef struct {
  SimStruct *S;
  RightInvariantEKF sysobj;
  boolean_T sysobj_not_empty;
  void *emlrtRootTLSGlobal;
  real_T *u0;
  real_T *u1;
  real_T (*u2)[3];
  real_T (*u3)[3];
  real_T (*u4)[14];
  real_T (*u5)[2];
  real_T (*u6)[49];
  real_T (*b_y0)[49];
  real_T (*b_y1)[6];
  real_T (*y2)[441];
  real_T *y3;
  covrtInstance *covInst_CONTAINER_BLOCK_INDEX;
} InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE;

#endif                                 /*typedef_InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_QAP0Wmv9to0z2CRr6cD8wE(SimStruct *S, int_T method,
  void* data);

#endif
