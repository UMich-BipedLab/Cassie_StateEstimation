#ifndef __F1Scry3smjzFxDJqc88Zr_h__
#define __F1Scry3smjzFxDJqc88Zr_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"

/* Type Definitions */
#ifndef typedef_struct_T
#define typedef_struct_T

typedef struct {
  int32_T f0;
  int32_T f1;
} struct_T;

#endif                                 /*typedef_struct_T*/

#include <stdlib.h>
#ifndef struct_tag_s2YyZS33yNAFCbPYuP3fXpF
#define struct_tag_s2YyZS33yNAFCbPYuP3fXpF

struct tag_s2YyZS33yNAFCbPYuP3fXpF
{
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  boolean_T static_bias_initialization;
  boolean_T ekf_update_enabled;
  boolean_T enable_bias_estimation;
  boolean_T enable_static_landmarks;
  real_T gyro_noise_std[3];
  real_T gyro_bias_noise_std[3];
  real_T accel_noise_std[3];
  real_T accel_bias_noise_std[3];
  real_T contact_noise_std[3];
  real_T encoder_noise_std[14];
  real_T landmark_noise_std[3];
  real_T gyro_bias_init[3];
  real_T accel_bias_init[3];
  real_T prior_base_pose_std[6];
  real_T prior_base_velocity_std[3];
  real_T prior_contact_position_std[3];
  real_T prior_gyro_bias_std[3];
  real_T prior_accel_bias_std[3];
  real_T prior_forward_kinematics_std[3];
  real_T landmark_positions[4];
  real_T X[49];
  real_T landmarks[30];
  real_T theta[6];
  real_T Pxx[225];
  real_T Pll[900];
  real_T Pxl[450];
  real_T Ptt[36];
  real_T Pxt[90];
  real_T Plt[180];
  boolean_T filter_enabled;
  boolean_T bias_initialized;
  real_T ba0[3];
  real_T bg0[3];
  real_T a_init_vec[3000];
  real_T w_init_vec[3000];
  real_T imu_init_count;
  real_T w_prev[3];
  real_T a_prev[3];
  real_T encoders_prev[14];
  real_T contact_prev[2];
  real_T t_prev;
  real_T landmark_ids[10];
  real_T num_landmarks;
  real_T Qg[9];
  real_T Qbg[9];
  real_T Qa[9];
  real_T Qba[9];
  real_T Qc[9];
  real_T Qe[196];
  real_T Ql[9];
  real_T Np[9];
  real_T P_prior[441];
};

#endif                                 /*struct_tag_s2YyZS33yNAFCbPYuP3fXpF*/

#ifndef typedef_RIEKF
#define typedef_RIEKF

typedef struct tag_s2YyZS33yNAFCbPYuP3fXpF RIEKF;

#endif                                 /*typedef_RIEKF*/

#ifndef typedef_b_struct_T
#define typedef_b_struct_T

typedef struct {
  real_T f0[2];
  real_T f1[2];
  real_T f2[2];
  real_T f3[2];
  real_T f4[2];
  real_T f5[2];
  real_T f6[2];
  real_T f7[2];
} b_struct_T;

#endif                                 /*typedef_b_struct_T*/

#ifndef typedef_InstanceStruct_F1Scry3smjzFxDJqc88Zr
#define typedef_InstanceStruct_F1Scry3smjzFxDJqc88Zr

typedef struct {
  SimStruct *S;
  RIEKF sysobj;
  boolean_T sysobj_not_empty;
  real_T b_data[128400];
  real_T b_b_data[128400];
  real_T tmp_data[103041];
  real_T a_data[48400];
  real_T y_data[48400];
  real_T b_y_data[48400];
  real_T Xa_data[48400];
  real_T b_a_data[48400];
  real_T c_y_data[48400];
  real_T d_y_data[48400];
  real_T e_y_data[48400];
  real_T C_data[48400];
  real_T b_C_data[48400];
  real_T c_C_data[48400];
  real_T d_C_data[48400];
  real_T e_C_data[48400];
  real_T f_C_data[48400];
  real_T g_C_data[48400];
  real_T BigX_data[28900];
  real_T PI_data[24000];
  real_T varargin_1_data[22898];
  real_T result_data[22898];
  real_T b_tmp_data[14641];
  real_T c_tmp_data[11449];
  real_T F_data[6534];
  real_T h_C_data[6534];
  real_T f_y_data[6534];
  real_T H_data[3600];
  real_T N_data[3600];
  real_T g_y_data[3600];
  real_T K_data[3600];
  real_T c_b_data[128400];
  real_T Lc_data[103041];
  real_T d_tmp_data[99225];
  real_T c_a_data[48400];
  real_T h_y_data[48400];
  real_T i_y_data[48400];
  real_T j_y_data[48400];
  real_T k_y_data[48400];
  real_T l_y_data[48400];
  real_T m_y_data[48400];
  real_T Qk_data[38841];
  real_T n_y_data[38841];
  real_T Fc_data[14641];
  real_T Fk_data[14641];
  real_T e_tmp_data[13225];
  real_T f_tmp_data[11449];
  real_T d_b_data[128400];
  real_T d_a_data[48400];
  real_T o_y_data[48400];
  real_T p_y_data[48400];
  real_T q_y_data[48400];
  real_T r_y_data[48400];
  real_T s_y_data[48400];
  real_T t_y_data[48400];
  real_T b_Xa_data[38841];
  real_T b_BigX_data[28900];
  real_T u_y_data[25894];
  real_T i_C_data[25894];
  real_T j_C_data[25894];
  real_T b_varargin_1_data[22898];
  real_T c_varargin_1_data[22898];
  real_T g_tmp_data[14641];
  real_T k_C_data[14641];
  real_T h_tmp_data[11449];
  real_T e_b_data[128400];
  real_T e_a_data[48400];
  real_T v_y_data[48400];
  real_T w_y_data[48400];
  real_T x_y_data[48400];
  real_T y_y_data[48400];
  real_T c_Xa_data[38841];
  real_T c_BigX_data[28900];
  real_T i_tmp_data[14641];
  real_T j_tmp_data[11449];
  real_T b_PI_data[8400];
  real_T b_N_data[3600];
  real_T l_C_data[3600];
  real_T m_C_data[3600];
  real_T ab_y_data[3600];
  real_T bb_y_data[3600];
  real_T B_data[3600];
  real_T A_data[3600];
  real_T k_tmp_data[3600];
  real_T b_A_data[3600];
  real_T b_B_data[3600];
  real_T n_C_data[3060];
  real_T f_b_data[128400];
  real_T f_a_data[48400];
  real_T cb_y_data[48400];
  real_T db_y_data[48400];
  real_T eb_y_data[48400];
  real_T d_Xa_data[38841];
  real_T d_BigX_data[28900];
  real_T l_tmp_data[14641];
  real_T m_tmp_data[11449];
  real_T fb_y_data[6534];
  real_T gb_y_data[6534];
  real_T hb_y_data[6534];
  real_T ib_y_data[6534];
  real_T jb_y_data[6171];
  real_T b_K_data[3060];
  void *emlrtRootTLSGlobal;
  covrtInstance *covInst;
  real_T *u0;
  real_T *u1;
  real_T (*u2)[3];
  real_T (*u3)[3];
  real_T (*u4)[14];
  real_T (*u5)[2];
  real_T (*u6)[40];
  real_T (*u7)[49];
  real_T (*b_y0)[49];
  real_T (*b_y1)[6];
  real_T (*y2)[441];
  real_T *y3;
  real_T (*y4)[40];
} InstanceStruct_F1Scry3smjzFxDJqc88Zr;

#endif                                 /*typedef_InstanceStruct_F1Scry3smjzFxDJqc88Zr*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_F1Scry3smjzFxDJqc88Zr(SimStruct *S, int_T method,
  void* data);

#endif
