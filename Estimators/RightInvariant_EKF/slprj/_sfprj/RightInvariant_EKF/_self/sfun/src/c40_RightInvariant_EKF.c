/* Include files */

#include "RightInvariant_EKF_sfun.h"
#include "c40_RightInvariant_EKF.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "RightInvariant_EKF_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);
static const mxArray* sf_opaque_get_hover_data_for_msg(void *chartInstance,
  int32_T msgSSID);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c40_debug_family_names[23] = { "use_ekf_position",
  "use_ekf_orientation", "use_ekf_velocity", "e", "e_dot", "pL", "J_pL", "pR",
  "J_pR", "Rbi", "Rwi", "Rwb", "nargin", "nargout", "q", "dq", "w", "contact",
  "X", "ekf_enabled", "velocity", "velocity_kinematic", "filter_selector" };

static const char * c40_b_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

static const char * c40_c_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

static const char * c40_d_debug_family_names[4] = { "nargin", "nargout", "v",
  "Ax" };

static const char * c40_e_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

static const char * c40_f_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

static const char * c40_g_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

static const char * c40_h_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

static const char * c40_i_debug_family_names[4] = { "nargin", "nargout", "theta",
  "R" };

static const char * c40_j_debug_family_names[4] = { "nargin", "nargout", "theta",
  "R" };

static const char * c40_k_debug_family_names[4] = { "nargin", "nargout", "theta",
  "R" };

static const char * c40_l_debug_family_names[4] = { "nargin", "nargout", "ypr",
  "R" };

/* Function Declarations */
static void initialize_c40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance);
static void initialize_params_c40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance);
static void enable_c40_RightInvariant_EKF(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance);
static void disable_c40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance);
static void c40_update_debugger_state_c40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance);
static void set_sim_state_c40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance, const mxArray *c40_st);
static void finalize_c40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance);
static void sf_gateway_c40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance);
static void mdl_start_c40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance);
static void c40_chartstep_c40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance);
static void initSimStructsc40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c40_machineNumber, uint32_T
  c40_chartNumber, uint32_T c40_instanceNumber);
static const mxArray *c40_sf_marshallOut(void *chartInstanceVoid, void
  *c40_inData);
static real_T c40_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_b_filter_selector, const char_T
  *c40_identifier);
static real_T c40_b_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_u, const emlrtMsgIdentifier *c40_parentId);
static void c40_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c40_mxArrayInData, const char_T *c40_varName, void *c40_outData);
static const mxArray *c40_b_sf_marshallOut(void *chartInstanceVoid, void
  *c40_inData);
static void c40_c_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_b_velocity_kinematic, const char_T
  *c40_identifier, real_T c40_y[3]);
static void c40_d_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_u, const emlrtMsgIdentifier *c40_parentId,
  real_T c40_y[3]);
static void c40_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c40_mxArrayInData, const char_T *c40_varName, void *c40_outData);
static const mxArray *c40_c_sf_marshallOut(void *chartInstanceVoid, void
  *c40_inData);
static void c40_e_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_c_dq, const char_T *c40_identifier, real_T
  c40_y[20]);
static void c40_f_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_u, const emlrtMsgIdentifier *c40_parentId,
  real_T c40_y[20]);
static void c40_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c40_mxArrayInData, const char_T *c40_varName, void *c40_outData);
static const mxArray *c40_d_sf_marshallOut(void *chartInstanceVoid, void
  *c40_inData);
static const mxArray *c40_e_sf_marshallOut(void *chartInstanceVoid, void
  *c40_inData);
static const mxArray *c40_f_sf_marshallOut(void *chartInstanceVoid, void
  *c40_inData);
static void c40_g_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_u, const emlrtMsgIdentifier *c40_parentId,
  real_T c40_y[9]);
static void c40_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c40_mxArrayInData, const char_T *c40_varName, void *c40_outData);
static const mxArray *c40_g_sf_marshallOut(void *chartInstanceVoid, void
  *c40_inData);
static void c40_h_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_u, const emlrtMsgIdentifier *c40_parentId,
  real_T c40_y[42]);
static void c40_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c40_mxArrayInData, const char_T *c40_varName, void *c40_outData);
static const mxArray *c40_h_sf_marshallOut(void *chartInstanceVoid, void
  *c40_inData);
static void c40_i_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_u, const emlrtMsgIdentifier *c40_parentId,
  real_T c40_y[14]);
static void c40_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c40_mxArrayInData, const char_T *c40_varName, void *c40_outData);
static const mxArray *c40_i_sf_marshallOut(void *chartInstanceVoid, void
  *c40_inData);
static void c40_error(SFc40_RightInvariant_EKFInstanceStruct *chartInstance);
static const mxArray *c40_j_sf_marshallOut(void *chartInstanceVoid, void
  *c40_inData);
static int32_T c40_j_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_u, const emlrtMsgIdentifier *c40_parentId);
static void c40_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c40_mxArrayInData, const char_T *c40_varName, void *c40_outData);
static uint8_T c40_k_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_b_is_active_c40_RightInvariant_EKF, const
  char_T *c40_identifier);
static uint8_T c40_l_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_u, const emlrtMsgIdentifier *c40_parentId);
static void init_dsm_address_info(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc40_RightInvariant_EKF(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  chartInstance->c40_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c40_is_active_c40_RightInvariant_EKF = 0U;
}

static void initialize_params_c40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c40_RightInvariant_EKF(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c40_update_debugger_state_c40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance)
{
  const mxArray *c40_st;
  const mxArray *c40_y = NULL;
  const mxArray *c40_b_y = NULL;
  real_T c40_hoistedGlobal;
  const mxArray *c40_c_y = NULL;
  const mxArray *c40_d_y = NULL;
  const mxArray *c40_e_y = NULL;
  const mxArray *c40_f_y = NULL;
  uint8_T c40_b_hoistedGlobal;
  const mxArray *c40_g_y = NULL;
  c40_st = NULL;
  c40_st = NULL;
  c40_y = NULL;
  sf_mex_assign(&c40_y, sf_mex_createcellmatrix(6, 1), false);
  c40_b_y = NULL;
  sf_mex_assign(&c40_b_y, sf_mex_create("y", *chartInstance->c40_dq, 0, 0U, 1U,
    0U, 1, 20), false);
  sf_mex_setcell(c40_y, 0, c40_b_y);
  c40_hoistedGlobal = *chartInstance->c40_filter_selector;
  c40_c_y = NULL;
  sf_mex_assign(&c40_c_y, sf_mex_create("y", &c40_hoistedGlobal, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c40_y, 1, c40_c_y);
  c40_d_y = NULL;
  sf_mex_assign(&c40_d_y, sf_mex_create("y", *chartInstance->c40_q, 0, 0U, 1U,
    0U, 1, 20), false);
  sf_mex_setcell(c40_y, 2, c40_d_y);
  c40_e_y = NULL;
  sf_mex_assign(&c40_e_y, sf_mex_create("y", *chartInstance->c40_velocity, 0, 0U,
    1U, 0U, 1, 3), false);
  sf_mex_setcell(c40_y, 3, c40_e_y);
  c40_f_y = NULL;
  sf_mex_assign(&c40_f_y, sf_mex_create("y",
    *chartInstance->c40_velocity_kinematic, 0, 0U, 1U, 0U, 1, 3), false);
  sf_mex_setcell(c40_y, 4, c40_f_y);
  c40_b_hoistedGlobal = chartInstance->c40_is_active_c40_RightInvariant_EKF;
  c40_g_y = NULL;
  sf_mex_assign(&c40_g_y, sf_mex_create("y", &c40_b_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c40_y, 5, c40_g_y);
  sf_mex_assign(&c40_st, c40_y, false);
  return c40_st;
}

static void set_sim_state_c40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance, const mxArray *c40_st)
{
  const mxArray *c40_u;
  real_T c40_dv0[20];
  int32_T c40_i0;
  real_T c40_dv1[20];
  int32_T c40_i1;
  real_T c40_dv2[3];
  int32_T c40_i2;
  real_T c40_dv3[3];
  int32_T c40_i3;
  chartInstance->c40_doneDoubleBufferReInit = true;
  c40_u = sf_mex_dup(c40_st);
  c40_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("dq", c40_u, 0)),
    "dq", c40_dv0);
  for (c40_i0 = 0; c40_i0 < 20; c40_i0++) {
    (*chartInstance->c40_dq)[c40_i0] = c40_dv0[c40_i0];
  }

  *chartInstance->c40_filter_selector = c40_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("filter_selector", c40_u, 1)), "filter_selector");
  c40_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("q", c40_u, 2)),
    "q", c40_dv1);
  for (c40_i1 = 0; c40_i1 < 20; c40_i1++) {
    (*chartInstance->c40_q)[c40_i1] = c40_dv1[c40_i1];
  }

  c40_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("velocity",
    c40_u, 3)), "velocity", c40_dv2);
  for (c40_i2 = 0; c40_i2 < 3; c40_i2++) {
    (*chartInstance->c40_velocity)[c40_i2] = c40_dv2[c40_i2];
  }

  c40_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "velocity_kinematic", c40_u, 4)), "velocity_kinematic", c40_dv3);
  for (c40_i3 = 0; c40_i3 < 3; c40_i3++) {
    (*chartInstance->c40_velocity_kinematic)[c40_i3] = c40_dv3[c40_i3];
  }

  chartInstance->c40_is_active_c40_RightInvariant_EKF = c40_k_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c40_RightInvariant_EKF",
       c40_u, 5)), "is_active_c40_RightInvariant_EKF");
  sf_mex_destroy(&c40_u);
  c40_update_debugger_state_c40_RightInvariant_EKF(chartInstance);
  sf_mex_destroy(&c40_st);
}

static void finalize_c40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance)
{
  int32_T c40_i4;
  int32_T c40_i5;
  int32_T c40_i6;
  int32_T c40_i7;
  int32_T c40_i8;
  int32_T c40_i9;
  int32_T c40_i10;
  int32_T c40_i11;
  int32_T c40_i12;
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 2U, chartInstance->c40_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c40_ekf_enabled, 5U, 1U, 0U,
                        chartInstance->c40_sfEvent, false);
  for (c40_i4 = 0; c40_i4 < 49; c40_i4++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c40_X)[c40_i4], 4U, 1U, 0U,
                          chartInstance->c40_sfEvent, false);
  }

  for (c40_i5 = 0; c40_i5 < 2; c40_i5++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c40_contact)[c40_i5], 3U, 1U, 0U,
                          chartInstance->c40_sfEvent, false);
  }

  for (c40_i6 = 0; c40_i6 < 3; c40_i6++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c40_w)[c40_i6], 2U, 1U, 0U,
                          chartInstance->c40_sfEvent, false);
  }

  for (c40_i7 = 0; c40_i7 < 20; c40_i7++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c40_b_dq)[c40_i7], 1U, 1U, 0U,
                          chartInstance->c40_sfEvent, false);
  }

  for (c40_i8 = 0; c40_i8 < 20; c40_i8++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c40_b_q)[c40_i8], 0U, 1U, 0U,
                          chartInstance->c40_sfEvent, false);
  }

  chartInstance->c40_sfEvent = CALL_EVENT;
  c40_chartstep_c40_RightInvariant_EKF(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_RightInvariant_EKFMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  for (c40_i9 = 0; c40_i9 < 20; c40_i9++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c40_q)[c40_i9], 6U, 1U, 0U,
                          chartInstance->c40_sfEvent, false);
  }

  for (c40_i10 = 0; c40_i10 < 20; c40_i10++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c40_dq)[c40_i10], 7U, 1U, 0U,
                          chartInstance->c40_sfEvent, false);
  }

  for (c40_i11 = 0; c40_i11 < 3; c40_i11++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c40_velocity)[c40_i11], 8U, 1U, 0U,
                          chartInstance->c40_sfEvent, false);
  }

  for (c40_i12 = 0; c40_i12 < 3; c40_i12++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c40_velocity_kinematic)[c40_i12], 9U,
                          1U, 0U, chartInstance->c40_sfEvent, false);
  }

  _SFD_DATA_RANGE_CHECK(*chartInstance->c40_filter_selector, 10U, 1U, 0U,
                        chartInstance->c40_sfEvent, false);
}

static void mdl_start_c40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c40_chartstep_c40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance)
{
  real_T c40_hoistedGlobal;
  int32_T c40_i13;
  int32_T c40_i14;
  real_T c40_c_q[20];
  int32_T c40_i15;
  real_T c40_c_dq[20];
  int32_T c40_i16;
  real_T c40_b_w[3];
  int32_T c40_i17;
  real_T c40_b_contact[2];
  real_T c40_b_ekf_enabled;
  real_T c40_b_X[49];
  uint32_T c40_debug_family_var_map[23];
  boolean_T c40_use_ekf_position;
  boolean_T c40_use_ekf_orientation;
  boolean_T c40_use_ekf_velocity;
  real_T c40_e[14];
  real_T c40_e_dot[14];
  real_T c40_pL[3];
  real_T c40_J_pL[42];
  real_T c40_pR[3];
  real_T c40_J_pR[42];
  real_T c40_Rbi[9];
  real_T c40_Rwi[9];
  real_T c40_Rwb[9];
  real_T c40_nargin = 6.0;
  real_T c40_nargout = 5.0;
  real_T c40_d_q[20];
  real_T c40_d_dq[20];
  real_T c40_b_velocity[3];
  real_T c40_b_velocity_kinematic[3];
  real_T c40_b_filter_selector;
  int32_T c40_i18;
  int32_T c40_i19;
  int32_T c40_i20;
  int32_T c40_i21;
  int32_T c40_i22;
  int32_T c40_i23;
  int32_T c40_i24;
  uint32_T c40_b_debug_family_var_map[4];
  real_T c40_var1[14];
  real_T c40_b_nargin = 1.0;
  real_T c40_b_var1[14];
  real_T c40_b_nargout = 1.0;
  real_T c40_c_nargin = 1.0;
  real_T c40_c_nargout = 1.0;
  int32_T c40_i25;
  real_T c40_c_var1[14];
  real_T c40_d_nargin = 1.0;
  real_T c40_d_nargout = 1.0;
  int32_T c40_i26;
  real_T c40_output1[9];
  int32_T c40_i27;
  int32_T c40_i28;
  int32_T c40_i29;
  int32_T c40_i30;
  real_T c40_d_var1[14];
  real_T c40_e_nargin = 1.0;
  real_T c40_e_var1[14];
  real_T c40_e_nargout = 1.0;
  real_T c40_f_nargin = 1.0;
  int32_T c40_i31;
  real_T c40_f_nargout = 1.0;
  int32_T c40_i32;
  int32_T c40_i33;
  int32_T c40_i34;
  real_T c40_x;
  int32_T c40_i35;
  real_T c40_b_x;
  boolean_T c40_b;
  int32_T c40_i36;
  int32_T c40_i37;
  int32_T c40_i38;
  int32_T c40_i39;
  int32_T c40_i40;
  int32_T c40_i41;
  int32_T c40_i42;
  real_T c40_a[42];
  int32_T c40_i43;
  int32_T c40_i44;
  int32_T c40_i45;
  real_T c40_b_b[14];
  real_T c40_c_x;
  int32_T c40_i46;
  real_T c40_d_x;
  int32_T c40_i47;
  boolean_T c40_c_b;
  int32_T c40_i48;
  real_T c40_y[3];
  real_T c40_f_var1[14];
  int32_T c40_i49;
  real_T c40_g_nargin = 1.0;
  int32_T c40_i50;
  int32_T c40_i51;
  real_T c40_g_nargout = 1.0;
  int32_T c40_i52;
  real_T c40_v[3];
  int32_T c40_i53;
  real_T c40_h_nargin = 1.0;
  real_T c40_b_output1[3];
  real_T c40_b_v[3];
  real_T c40_h_nargout = 1.0;
  real_T c40_i_nargin = 1.0;
  int32_T c40_i54;
  int32_T c40_i55;
  real_T c40_i_nargout = 1.0;
  real_T c40_Ax[9];
  int32_T c40_i56;
  int32_T c40_i57;
  real_T c40_b_Ax[9];
  real_T c40_ypr[3];
  real_T c40_j_nargin = 1.0;
  int32_T c40_i58;
  real_T c40_j_nargout = 1.0;
  int32_T c40_i59;
  int32_T c40_i60;
  int32_T c40_i61;
  real_T c40_b_a[9];
  real_T c40_theta;
  int32_T c40_i62;
  int32_T c40_i63;
  real_T c40_k_nargin = 1.0;
  real_T c40_k_nargout = 1.0;
  int32_T c40_i64;
  int32_T c40_i65;
  int32_T c40_i66;
  int32_T c40_i67;
  int32_T c40_i68;
  real_T c40_R[9];
  int32_T c40_i69;
  int32_T c40_i70;
  real_T c40_d_b[9];
  int32_T c40_i71;
  real_T c40_e_b[3];
  int32_T c40_i72;
  real_T c40_e_x;
  real_T c40_f_x;
  int32_T c40_i73;
  int32_T c40_i74;
  int32_T c40_i75;
  int32_T c40_i76;
  int32_T c40_i77;
  int32_T c40_i78;
  real_T c40_g_x;
  int32_T c40_i79;
  real_T c40_h_x;
  int32_T c40_i80;
  int32_T c40_i81;
  real_T c40_c_v[3];
  int32_T c40_i82;
  real_T c40_b_y[3];
  real_T c40_i_x;
  real_T c40_l_nargin = 1.0;
  int32_T c40_i83;
  int32_T c40_i84;
  real_T c40_j_x;
  real_T c40_l_nargout = 1.0;
  int32_T c40_i85;
  int32_T c40_i86;
  int32_T c40_i87;
  int32_T c40_i88;
  real_T c40_k_x;
  real_T c40_c_Ax[9];
  int32_T c40_i89;
  real_T c40_l_x;
  int32_T c40_i90;
  int32_T c40_i91;
  static real_T c40_dv4[3] = { 0.0, 0.0, 1.0 };

  int32_T c40_i92;
  real_T c40_b_theta;
  real_T c40_m_nargin = 1.0;
  int32_T c40_i93;
  real_T c40_m_nargout = 1.0;
  real_T c40_b_R[9];
  int32_T c40_i94;
  real_T c40_m_x;
  int32_T c40_i95;
  int32_T c40_i96;
  real_T c40_n_x;
  int32_T c40_i97;
  real_T c40_o_x;
  real_T c40_g_var1[14];
  real_T c40_p_x;
  real_T c40_n_nargin = 1.0;
  real_T c40_c_y[9];
  real_T c40_n_nargout = 1.0;
  int32_T c40_i98;
  real_T c40_q_x;
  int32_T c40_i99;
  real_T c40_r_x;
  real_T c40_c_output1[3];
  real_T c40_s_x;
  real_T c40_t_x;
  int32_T c40_i100;
  int32_T c40_i101;
  int32_T c40_i102;
  static real_T c40_dv5[3] = { 0.0, 1.0, 0.0 };

  int32_T c40_i103;
  int32_T c40_i104;
  int32_T c40_i105;
  int32_T c40_i106;
  int32_T c40_i107;
  int32_T c40_i108;
  int32_T c40_i109;
  int32_T c40_i110;
  int32_T c40_i111;
  int32_T c40_i112;
  real_T c40_c_theta;
  int32_T c40_i113;
  int32_T c40_i114;
  real_T c40_o_nargin = 1.0;
  int32_T c40_i115;
  int32_T c40_i116;
  real_T c40_o_nargout = 1.0;
  int32_T c40_i117;
  real_T c40_c_R[9];
  int32_T c40_i118;
  int32_T c40_i119;
  int32_T c40_i120;
  real_T c40_u_x;
  int32_T c40_i121;
  real_T c40_v_x;
  real_T c40_w_x;
  real_T c40_x_x;
  int32_T c40_i122;
  int32_T c40_i123;
  real_T c40_y_x;
  real_T c40_ab_x;
  int32_T c40_i124;
  real_T c40_bb_x;
  real_T c40_cb_x;
  int32_T c40_i125;
  int32_T c40_i126;
  int32_T c40_i127;
  int32_T c40_i128;
  static real_T c40_dv6[3] = { 1.0, 0.0, 0.0 };

  int32_T c40_i129;
  int32_T c40_i130;
  int32_T c40_i131;
  int32_T c40_i132;
  int32_T c40_i133;
  int32_T c40_i134;
  int32_T c40_i135;
  int32_T c40_i136;
  int32_T c40_i137;
  int32_T c40_i138;
  int32_T c40_i139;
  int32_T c40_i140;
  int32_T c40_i141;
  int32_T c40_i142;
  int32_T c40_i143;
  int32_T c40_i144;
  int32_T c40_i145;
  int32_T c40_i146;
  int32_T c40_i147;
  int32_T c40_i148;
  int32_T c40_i149;
  int32_T c40_i150;
  real_T c40_d_v[3];
  real_T c40_p_nargin = 1.0;
  real_T c40_p_nargout = 1.0;
  real_T c40_d_Ax[9];
  int32_T c40_i151;
  int32_T c40_i152;
  int32_T c40_i153;
  int32_T c40_i154;
  int32_T c40_i155;
  int32_T c40_i156;
  real_T c40_h_var1[14];
  real_T c40_q_nargin = 1.0;
  real_T c40_q_nargout = 1.0;
  int32_T c40_i157;
  int32_T c40_i158;
  real_T c40_d_output1[3];
  int32_T c40_i159;
  int32_T c40_i160;
  int32_T c40_i161;
  int32_T c40_i162;
  int32_T c40_i163;
  int32_T c40_i164;
  int32_T c40_i165;
  int32_T c40_i166;
  int32_T c40_i167;
  int32_T c40_i168;
  int32_T c40_i169;
  int32_T c40_i170;
  int32_T c40_i171;
  int32_T c40_i172;
  int32_T c40_i173;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 2U, chartInstance->c40_sfEvent);
  c40_hoistedGlobal = *chartInstance->c40_ekf_enabled;
  for (c40_i13 = 0; c40_i13 < 20; c40_i13++) {
    c40_c_q[c40_i13] = (*chartInstance->c40_b_q)[c40_i13];
  }

  for (c40_i14 = 0; c40_i14 < 20; c40_i14++) {
    c40_c_dq[c40_i14] = (*chartInstance->c40_b_dq)[c40_i14];
  }

  for (c40_i15 = 0; c40_i15 < 3; c40_i15++) {
    c40_b_w[c40_i15] = (*chartInstance->c40_w)[c40_i15];
  }

  for (c40_i16 = 0; c40_i16 < 2; c40_i16++) {
    c40_b_contact[c40_i16] = (*chartInstance->c40_contact)[c40_i16];
  }

  for (c40_i17 = 0; c40_i17 < 49; c40_i17++) {
    c40_b_X[c40_i17] = (*chartInstance->c40_X)[c40_i17];
  }

  c40_b_ekf_enabled = c40_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 23U, 25U, c40_debug_family_names,
    c40_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c40_use_ekf_position, 0U, c40_i_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c40_use_ekf_orientation, 1U, c40_i_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c40_use_ekf_velocity, 2U, c40_i_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_e, 3U, c40_h_sf_marshallOut,
    c40_f_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_e_dot, 4U, c40_h_sf_marshallOut,
    c40_f_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_pL, 5U, c40_b_sf_marshallOut,
    c40_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_J_pL, 6U, c40_g_sf_marshallOut,
    c40_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_pR, 7U, c40_b_sf_marshallOut,
    c40_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_J_pR, 8U, c40_g_sf_marshallOut,
    c40_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_Rbi, 9U, c40_f_sf_marshallOut,
    c40_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_Rwi, 10U, c40_f_sf_marshallOut,
    c40_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_Rwb, 11U, c40_f_sf_marshallOut,
    c40_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_nargin, 12U, c40_sf_marshallOut,
    c40_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_nargout, 13U, c40_sf_marshallOut,
    c40_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c40_c_q, 14U, c40_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c40_c_dq, 15U, c40_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c40_b_w, 16U, c40_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c40_b_contact, 17U, c40_e_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c40_b_X, 18U, c40_d_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c40_b_ekf_enabled, 19U, c40_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_d_q, MAX_uint32_T,
    c40_c_sf_marshallOut, c40_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_d_dq, MAX_uint32_T,
    c40_c_sf_marshallOut, c40_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_b_velocity, 20U, c40_b_sf_marshallOut,
    c40_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_b_velocity_kinematic, 21U,
    c40_b_sf_marshallOut, c40_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_b_filter_selector, 22U,
    c40_sf_marshallOut, c40_sf_marshallIn);
  for (c40_i18 = 0; c40_i18 < 20; c40_i18++) {
    c40_d_dq[c40_i18] = c40_c_dq[c40_i18];
  }

  _SFD_SYMBOL_SWITCH(15U, 21U);
  for (c40_i19 = 0; c40_i19 < 20; c40_i19++) {
    c40_d_q[c40_i19] = c40_c_q[c40_i19];
  }

  _SFD_SYMBOL_SWITCH(14U, 20U);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 24);
  c40_use_ekf_position = true;
  _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 25);
  c40_use_ekf_orientation = false;
  _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 26);
  c40_use_ekf_velocity = true;
  _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 29);
  for (c40_i20 = 0; c40_i20 < 14; c40_i20++) {
    c40_e[c40_i20] = c40_d_q[c40_i20 + 6];
  }

  _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 30);
  for (c40_i21 = 0; c40_i21 < 14; c40_i21++) {
    c40_e_dot[c40_i21] = c40_d_dq[c40_i21 + 6];
  }

  _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 32);
  if (CV_EML_IF(0, 1, 0, CV_RELATIONAL_EVAL(4U, 0U, 0, c40_b_contact[0], 1.0, -1,
        0U, c40_b_contact[0] == 1.0))) {
    _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 33);
    for (c40_i22 = 0; c40_i22 < 14; c40_i22++) {
      c40_var1[c40_i22] = c40_e[c40_i22];
    }

    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c40_b_debug_family_names,
      c40_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_b_nargin, 0U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_b_nargout, 1U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_var1, 2U, c40_h_sf_marshallOut,
      c40_f_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_pL, 3U, c40_b_sf_marshallOut,
      c40_b_sf_marshallIn);
    CV_SCRIPT_FCN(0, 0);
    _SFD_SCRIPT_CALL(0U, chartInstance->c40_sfEvent, 2);
    CV_SCRIPT_IF(0, 0, false);
    _SFD_SCRIPT_CALL(0U, chartInstance->c40_sfEvent, 5);
    _SFD_SCRIPT_CALL(0U, chartInstance->c40_sfEvent, 7);
    for (c40_i26 = 0; c40_i26 < 3; c40_i26++) {
      c40_pL[c40_i26] = 0.0;
    }

    _SFD_SCRIPT_CALL(0U, chartInstance->c40_sfEvent, 10);
    p_VectorNav_to_LeftToeBottom_src(c40_pL, c40_var1);
    _SFD_SCRIPT_CALL(0U, chartInstance->c40_sfEvent, -10);
    _SFD_SYMBOL_SCOPE_POP();
    _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 34);
    for (c40_i29 = 0; c40_i29 < 14; c40_i29++) {
      c40_d_var1[c40_i29] = c40_e[c40_i29];
    }

    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c40_c_debug_family_names,
      c40_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_e_nargin, 0U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_e_nargout, 1U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_d_var1, 2U, c40_h_sf_marshallOut,
      c40_f_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_J_pL, 3U, c40_g_sf_marshallOut,
      c40_e_sf_marshallIn);
    CV_SCRIPT_FCN(1, 0);
    _SFD_SCRIPT_CALL(1U, chartInstance->c40_sfEvent, 2);
    CV_SCRIPT_IF(1, 0, false);
    _SFD_SCRIPT_CALL(1U, chartInstance->c40_sfEvent, 5);
    _SFD_SCRIPT_CALL(1U, chartInstance->c40_sfEvent, 7);
    for (c40_i35 = 0; c40_i35 < 42; c40_i35++) {
      c40_J_pL[c40_i35] = 0.0;
    }

    _SFD_SCRIPT_CALL(1U, chartInstance->c40_sfEvent, 10);
    J_VectorNav_to_LeftToeBottom_src(c40_J_pL, c40_d_var1);
    _SFD_SCRIPT_CALL(1U, chartInstance->c40_sfEvent, -10);
    _SFD_SYMBOL_SCOPE_POP();
    _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 35);
    for (c40_i37 = 0; c40_i37 < 42; c40_i37++) {
      c40_a[c40_i37] = -c40_J_pL[c40_i37];
    }

    for (c40_i42 = 0; c40_i42 < 14; c40_i42++) {
      c40_b_b[c40_i42] = c40_e_dot[c40_i42];
    }

    for (c40_i45 = 0; c40_i45 < 3; c40_i45++) {
      c40_y[c40_i45] = 0.0;
      c40_i49 = 0;
      for (c40_i51 = 0; c40_i51 < 14; c40_i51++) {
        c40_y[c40_i45] += c40_a[c40_i49 + c40_i45] * c40_b_b[c40_i51];
        c40_i49 += 3;
      }
    }

    for (c40_i48 = 0; c40_i48 < 3; c40_i48++) {
      c40_v[c40_i48] = c40_b_w[c40_i48];
    }

    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c40_d_debug_family_names,
      c40_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_h_nargin, 0U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_h_nargout, 1U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_v, 2U, c40_b_sf_marshallOut,
      c40_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_Ax, 3U, c40_f_sf_marshallOut,
      c40_d_sf_marshallIn);
    CV_SCRIPT_FCN(2, 0);
    _SFD_SCRIPT_CALL(2U, chartInstance->c40_sfEvent, 3);
    c40_Ax[0] = 0.0;
    c40_Ax[3] = -c40_v[2];
    c40_Ax[6] = c40_v[1];
    c40_Ax[1] = c40_v[2];
    c40_Ax[4] = 0.0;
    c40_Ax[7] = -c40_v[0];
    c40_Ax[2] = -c40_v[1];
    c40_Ax[5] = c40_v[0];
    c40_Ax[8] = 0.0;
    _SFD_SCRIPT_CALL(2U, chartInstance->c40_sfEvent, -3);
    _SFD_SYMBOL_SCOPE_POP();
    for (c40_i68 = 0; c40_i68 < 9; c40_i68++) {
      c40_b_a[c40_i68] = c40_Ax[c40_i68];
    }

    for (c40_i72 = 0; c40_i72 < 3; c40_i72++) {
      c40_e_b[c40_i72] = c40_pL[c40_i72];
    }

    for (c40_i78 = 0; c40_i78 < 3; c40_i78++) {
      c40_b_y[c40_i78] = 0.0;
      c40_i84 = 0;
      for (c40_i87 = 0; c40_i87 < 3; c40_i87++) {
        c40_b_y[c40_i78] += c40_b_a[c40_i84 + c40_i78] * c40_e_b[c40_i87];
        c40_i84 += 3;
      }
    }

    for (c40_i82 = 0; c40_i82 < 3; c40_i82++) {
      c40_b_velocity_kinematic[c40_i82] = c40_y[c40_i82] - c40_b_y[c40_i82];
    }
  } else {
    _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 36);
    if (CV_EML_IF(0, 1, 1, CV_RELATIONAL_EVAL(4U, 0U, 1, c40_b_contact[1], 1.0,
          -1, 0U, c40_b_contact[1] == 1.0))) {
      _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 37);
      for (c40_i24 = 0; c40_i24 < 14; c40_i24++) {
        c40_b_var1[c40_i24] = c40_e[c40_i24];
      }

      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c40_e_debug_family_names,
        c40_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_c_nargin, 0U, c40_sf_marshallOut,
        c40_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_c_nargout, 1U,
        c40_sf_marshallOut, c40_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_b_var1, 2U, c40_h_sf_marshallOut,
        c40_f_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_pR, 3U, c40_b_sf_marshallOut,
        c40_b_sf_marshallIn);
      CV_SCRIPT_FCN(3, 0);
      _SFD_SCRIPT_CALL(3U, chartInstance->c40_sfEvent, 2);
      CV_SCRIPT_IF(3, 0, false);
      _SFD_SCRIPT_CALL(3U, chartInstance->c40_sfEvent, 5);
      _SFD_SCRIPT_CALL(3U, chartInstance->c40_sfEvent, 7);
      for (c40_i27 = 0; c40_i27 < 3; c40_i27++) {
        c40_pR[c40_i27] = 0.0;
      }

      _SFD_SCRIPT_CALL(3U, chartInstance->c40_sfEvent, 10);
      p_VectorNav_to_RightToeBottom_src(c40_pR, c40_b_var1);
      _SFD_SCRIPT_CALL(3U, chartInstance->c40_sfEvent, -10);
      _SFD_SYMBOL_SCOPE_POP();
      _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 38);
      for (c40_i30 = 0; c40_i30 < 14; c40_i30++) {
        c40_e_var1[c40_i30] = c40_e[c40_i30];
      }

      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c40_f_debug_family_names,
        c40_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_f_nargin, 0U, c40_sf_marshallOut,
        c40_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_f_nargout, 1U,
        c40_sf_marshallOut, c40_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_e_var1, 2U, c40_h_sf_marshallOut,
        c40_f_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_J_pR, 3U, c40_g_sf_marshallOut,
        c40_e_sf_marshallIn);
      CV_SCRIPT_FCN(4, 0);
      _SFD_SCRIPT_CALL(4U, chartInstance->c40_sfEvent, 2);
      CV_SCRIPT_IF(4, 0, false);
      _SFD_SCRIPT_CALL(4U, chartInstance->c40_sfEvent, 5);
      _SFD_SCRIPT_CALL(4U, chartInstance->c40_sfEvent, 7);
      for (c40_i36 = 0; c40_i36 < 42; c40_i36++) {
        c40_J_pR[c40_i36] = 0.0;
      }

      _SFD_SCRIPT_CALL(4U, chartInstance->c40_sfEvent, 10);
      J_VectorNav_to_RightToeBottom_src(c40_J_pR, c40_e_var1);
      _SFD_SCRIPT_CALL(4U, chartInstance->c40_sfEvent, -10);
      _SFD_SYMBOL_SCOPE_POP();
      _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 39);
      for (c40_i40 = 0; c40_i40 < 42; c40_i40++) {
        c40_a[c40_i40] = -c40_J_pR[c40_i40];
      }

      for (c40_i43 = 0; c40_i43 < 14; c40_i43++) {
        c40_b_b[c40_i43] = c40_e_dot[c40_i43];
      }

      for (c40_i47 = 0; c40_i47 < 3; c40_i47++) {
        c40_y[c40_i47] = 0.0;
        c40_i52 = 0;
        for (c40_i53 = 0; c40_i53 < 14; c40_i53++) {
          c40_y[c40_i47] += c40_a[c40_i52 + c40_i47] * c40_b_b[c40_i53];
          c40_i52 += 3;
        }
      }

      for (c40_i50 = 0; c40_i50 < 3; c40_i50++) {
        c40_b_v[c40_i50] = c40_b_w[c40_i50];
      }

      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c40_d_debug_family_names,
        c40_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_i_nargin, 0U, c40_sf_marshallOut,
        c40_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_i_nargout, 1U,
        c40_sf_marshallOut, c40_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_b_v, 2U, c40_b_sf_marshallOut,
        c40_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_b_Ax, 3U, c40_f_sf_marshallOut,
        c40_d_sf_marshallIn);
      CV_SCRIPT_FCN(2, 0);
      _SFD_SCRIPT_CALL(2U, chartInstance->c40_sfEvent, 3);
      c40_b_Ax[0] = 0.0;
      c40_b_Ax[3] = -c40_b_v[2];
      c40_b_Ax[6] = c40_b_v[1];
      c40_b_Ax[1] = c40_b_v[2];
      c40_b_Ax[4] = 0.0;
      c40_b_Ax[7] = -c40_b_v[0];
      c40_b_Ax[2] = -c40_b_v[1];
      c40_b_Ax[5] = c40_b_v[0];
      c40_b_Ax[8] = 0.0;
      _SFD_SCRIPT_CALL(2U, chartInstance->c40_sfEvent, -3);
      _SFD_SYMBOL_SCOPE_POP();
      for (c40_i70 = 0; c40_i70 < 9; c40_i70++) {
        c40_b_a[c40_i70] = c40_b_Ax[c40_i70];
      }

      for (c40_i74 = 0; c40_i74 < 3; c40_i74++) {
        c40_e_b[c40_i74] = c40_pR[c40_i74];
      }

      for (c40_i81 = 0; c40_i81 < 3; c40_i81++) {
        c40_b_y[c40_i81] = 0.0;
        c40_i88 = 0;
        for (c40_i89 = 0; c40_i89 < 3; c40_i89++) {
          c40_b_y[c40_i81] += c40_b_a[c40_i88 + c40_i81] * c40_e_b[c40_i89];
          c40_i88 += 3;
        }
      }

      for (c40_i86 = 0; c40_i86 < 3; c40_i86++) {
        c40_b_velocity_kinematic[c40_i86] = c40_y[c40_i86] - c40_b_y[c40_i86];
      }
    } else {
      _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 41);
      for (c40_i23 = 0; c40_i23 < 3; c40_i23++) {
        c40_b_velocity_kinematic[c40_i23] = 0.0;
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 45);
  for (c40_i25 = 0; c40_i25 < 14; c40_i25++) {
    c40_c_var1[c40_i25] = c40_e[c40_i25];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c40_g_debug_family_names,
    c40_b_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_d_nargin, 0U, c40_sf_marshallOut,
    c40_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_d_nargout, 1U, c40_sf_marshallOut,
    c40_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_c_var1, 2U, c40_h_sf_marshallOut,
    c40_f_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_output1, 3U, c40_f_sf_marshallOut,
    c40_d_sf_marshallIn);
  CV_SCRIPT_FCN(5, 0);
  _SFD_SCRIPT_CALL(5U, chartInstance->c40_sfEvent, 2);
  CV_SCRIPT_IF(5, 0, false);
  _SFD_SCRIPT_CALL(5U, chartInstance->c40_sfEvent, 5);
  _SFD_SCRIPT_CALL(5U, chartInstance->c40_sfEvent, 7);
  for (c40_i28 = 0; c40_i28 < 9; c40_i28++) {
    c40_output1[c40_i28] = 0.0;
  }

  _SFD_SCRIPT_CALL(5U, chartInstance->c40_sfEvent, 10);
  R_VectorNav_to_Pelvis_src(c40_output1, c40_c_var1);
  _SFD_SCRIPT_CALL(5U, chartInstance->c40_sfEvent, -10);
  _SFD_SYMBOL_SCOPE_POP();
  c40_i31 = 0;
  for (c40_i32 = 0; c40_i32 < 3; c40_i32++) {
    c40_i33 = 0;
    for (c40_i34 = 0; c40_i34 < 3; c40_i34++) {
      c40_Rbi[c40_i34 + c40_i31] = c40_output1[c40_i33 + c40_i32];
      c40_i33 += 3;
    }

    c40_i31 += 3;
  }

  _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 48);
  CV_EML_COND(0, 1, 0, c40_use_ekf_position);
  c40_x = c40_b_ekf_enabled;
  c40_b_x = c40_x;
  c40_b = muDoubleScalarIsNaN(c40_b_x);
  if (c40_b) {
    c40_error(chartInstance);
  }

  if (CV_EML_COND(0, 1, 1, c40_b_ekf_enabled != 0.0)) {
    CV_EML_MCDC(0, 1, 0, true);
    CV_EML_IF(0, 1, 2, true);
    _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 49);
    c40_i38 = 0;
    c40_i39 = 0;
    for (c40_i41 = 0; c40_i41 < 3; c40_i41++) {
      for (c40_i44 = 0; c40_i44 < 3; c40_i44++) {
        c40_Rwi[c40_i44 + c40_i38] = c40_b_X[c40_i44 + c40_i39];
      }

      c40_i38 += 3;
      c40_i39 += 7;
    }

    _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 51);
    for (c40_i46 = 0; c40_i46 < 14; c40_i46++) {
      c40_f_var1[c40_i46] = c40_e[c40_i46];
    }

    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c40_h_debug_family_names,
      c40_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_g_nargin, 0U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_g_nargout, 1U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_f_var1, 2U, c40_h_sf_marshallOut,
      c40_f_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_b_output1, 3U, c40_b_sf_marshallOut,
      c40_b_sf_marshallIn);
    CV_SCRIPT_FCN(6, 0);
    _SFD_SCRIPT_CALL(6U, chartInstance->c40_sfEvent, 2);
    CV_SCRIPT_IF(6, 0, false);
    _SFD_SCRIPT_CALL(6U, chartInstance->c40_sfEvent, 5);
    _SFD_SCRIPT_CALL(6U, chartInstance->c40_sfEvent, 7);
    for (c40_i58 = 0; c40_i58 < 3; c40_i58++) {
      c40_b_output1[c40_i58] = 0.0;
    }

    _SFD_SCRIPT_CALL(6U, chartInstance->c40_sfEvent, 10);
    p_VectorNav_to_Pelvis_src(c40_b_output1, c40_f_var1);
    _SFD_SCRIPT_CALL(6U, chartInstance->c40_sfEvent, -10);
    _SFD_SYMBOL_SCOPE_POP();
    for (c40_i63 = 0; c40_i63 < 9; c40_i63++) {
      c40_b_a[c40_i63] = c40_Rwi[c40_i63];
    }

    for (c40_i67 = 0; c40_i67 < 3; c40_i67++) {
      c40_e_b[c40_i67] = c40_b_output1[c40_i67];
    }

    for (c40_i71 = 0; c40_i71 < 3; c40_i71++) {
      c40_y[c40_i71] = 0.0;
      c40_i79 = 0;
      for (c40_i80 = 0; c40_i80 < 3; c40_i80++) {
        c40_y[c40_i71] += c40_b_a[c40_i79 + c40_i71] * c40_e_b[c40_i80];
        c40_i79 += 3;
      }
    }

    for (c40_i77 = 0; c40_i77 < 3; c40_i77++) {
      c40_d_q[c40_i77] = c40_b_X[c40_i77 + 28] + c40_y[c40_i77];
    }

    _SFD_SYMBOL_SWITCH(14U, 20U);
  } else {
    CV_EML_MCDC(0, 1, 0, false);
    CV_EML_IF(0, 1, 2, false);
  }

  _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 55);
  CV_EML_COND(0, 1, 2, c40_use_ekf_orientation);
  CV_EML_MCDC(0, 1, 1, false);
  CV_EML_IF(0, 1, 3, false);
  _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 62);
  CV_EML_COND(0, 1, 4, c40_use_ekf_velocity);
  c40_c_x = c40_b_ekf_enabled;
  c40_d_x = c40_c_x;
  c40_c_b = muDoubleScalarIsNaN(c40_d_x);
  if (c40_c_b) {
    c40_error(chartInstance);
  }

  if (CV_EML_COND(0, 1, 5, c40_b_ekf_enabled != 0.0)) {
    CV_EML_MCDC(0, 1, 2, true);
    CV_EML_IF(0, 1, 4, true);
    _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 63);
    c40_i55 = 0;
    c40_i56 = 0;
    for (c40_i57 = 0; c40_i57 < 3; c40_i57++) {
      for (c40_i59 = 0; c40_i59 < 3; c40_i59++) {
        c40_Rwi[c40_i59 + c40_i55] = c40_b_X[c40_i59 + c40_i56];
      }

      c40_i55 += 3;
      c40_i56 += 7;
    }

    _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 64);
    for (c40_i60 = 0; c40_i60 < 9; c40_i60++) {
      c40_b_a[c40_i60] = c40_Rwi[c40_i60];
    }

    c40_i61 = 0;
    for (c40_i62 = 0; c40_i62 < 3; c40_i62++) {
      c40_i65 = 0;
      for (c40_i66 = 0; c40_i66 < 3; c40_i66++) {
        c40_d_b[c40_i66 + c40_i61] = c40_Rbi[c40_i65 + c40_i62];
        c40_i65 += 3;
      }

      c40_i61 += 3;
    }

    for (c40_i64 = 0; c40_i64 < 9; c40_i64++) {
      c40_Rwb[c40_i64] = 0.0;
    }

    for (c40_i69 = 0; c40_i69 < 3; c40_i69++) {
      c40_i73 = 0;
      for (c40_i76 = 0; c40_i76 < 3; c40_i76++) {
        c40_Rwb[c40_i73 + c40_i69] = 0.0;
        c40_i83 = 0;
        for (c40_i85 = 0; c40_i85 < 3; c40_i85++) {
          c40_Rwb[c40_i73 + c40_i69] += c40_b_a[c40_i83 + c40_i69] *
            c40_d_b[c40_i85 + c40_i73];
          c40_i83 += 3;
        }

        c40_i73 += 3;
      }
    }

    _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 66);
    for (c40_i75 = 0; c40_i75 < 3; c40_i75++) {
      c40_c_v[c40_i75] = c40_b_w[c40_i75];
    }

    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c40_d_debug_family_names,
      c40_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_l_nargin, 0U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_l_nargout, 1U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_c_v, 2U, c40_b_sf_marshallOut,
      c40_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_c_Ax, 3U, c40_f_sf_marshallOut,
      c40_d_sf_marshallIn);
    CV_SCRIPT_FCN(2, 0);
    _SFD_SCRIPT_CALL(2U, chartInstance->c40_sfEvent, 3);
    c40_c_Ax[0] = 0.0;
    c40_c_Ax[3] = -c40_c_v[2];
    c40_c_Ax[6] = c40_c_v[1];
    c40_c_Ax[1] = c40_c_v[2];
    c40_c_Ax[4] = 0.0;
    c40_c_Ax[7] = -c40_c_v[0];
    c40_c_Ax[2] = -c40_c_v[1];
    c40_c_Ax[5] = c40_c_v[0];
    c40_c_Ax[8] = 0.0;
    _SFD_SCRIPT_CALL(2U, chartInstance->c40_sfEvent, -3);
    _SFD_SYMBOL_SCOPE_POP();
    for (c40_i92 = 0; c40_i92 < 9; c40_i92++) {
      c40_b_a[c40_i92] = c40_Rwi[c40_i92];
    }

    for (c40_i93 = 0; c40_i93 < 9; c40_i93++) {
      c40_d_b[c40_i93] = c40_c_Ax[c40_i93];
    }

    for (c40_i94 = 0; c40_i94 < 3; c40_i94++) {
      c40_i96 = 0;
      for (c40_i97 = 0; c40_i97 < 3; c40_i97++) {
        c40_c_y[c40_i96 + c40_i94] = 0.0;
        c40_i98 = 0;
        for (c40_i99 = 0; c40_i99 < 3; c40_i99++) {
          c40_c_y[c40_i96 + c40_i94] += c40_b_a[c40_i98 + c40_i94] *
            c40_d_b[c40_i99 + c40_i96];
          c40_i98 += 3;
        }

        c40_i96 += 3;
      }
    }

    for (c40_i95 = 0; c40_i95 < 14; c40_i95++) {
      c40_g_var1[c40_i95] = c40_e[c40_i95];
    }

    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c40_h_debug_family_names,
      c40_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_n_nargin, 0U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_n_nargout, 1U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_g_var1, 2U, c40_h_sf_marshallOut,
      c40_f_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_c_output1, 3U, c40_b_sf_marshallOut,
      c40_b_sf_marshallIn);
    CV_SCRIPT_FCN(6, 0);
    _SFD_SCRIPT_CALL(6U, chartInstance->c40_sfEvent, 2);
    CV_SCRIPT_IF(6, 0, false);
    _SFD_SCRIPT_CALL(6U, chartInstance->c40_sfEvent, 5);
    _SFD_SCRIPT_CALL(6U, chartInstance->c40_sfEvent, 7);
    for (c40_i100 = 0; c40_i100 < 3; c40_i100++) {
      c40_c_output1[c40_i100] = 0.0;
    }

    _SFD_SCRIPT_CALL(6U, chartInstance->c40_sfEvent, 10);
    p_VectorNav_to_Pelvis_src(c40_c_output1, c40_g_var1);
    _SFD_SCRIPT_CALL(6U, chartInstance->c40_sfEvent, -10);
    _SFD_SYMBOL_SCOPE_POP();
    for (c40_i103 = 0; c40_i103 < 3; c40_i103++) {
      c40_e_b[c40_i103] = c40_c_output1[c40_i103];
    }

    for (c40_i104 = 0; c40_i104 < 3; c40_i104++) {
      c40_y[c40_i104] = 0.0;
      c40_i108 = 0;
      for (c40_i109 = 0; c40_i109 < 3; c40_i109++) {
        c40_y[c40_i104] += c40_c_y[c40_i108 + c40_i104] * c40_e_b[c40_i109];
        c40_i108 += 3;
      }
    }

    for (c40_i106 = 0; c40_i106 < 3; c40_i106++) {
      c40_d_dq[c40_i106] = c40_b_X[c40_i106 + 21] + c40_y[c40_i106];
    }

    _SFD_SYMBOL_SWITCH(15U, 21U);
    _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 68);
    c40_i111 = 0;
    for (c40_i112 = 0; c40_i112 < 3; c40_i112++) {
      c40_i116 = 0;
      for (c40_i117 = 0; c40_i117 < 3; c40_i117++) {
        c40_b_a[c40_i117 + c40_i111] = c40_Rwb[c40_i116 + c40_i112];
        c40_i116 += 3;
      }

      c40_i111 += 3;
    }

    for (c40_i115 = 0; c40_i115 < 3; c40_i115++) {
      c40_e_b[c40_i115] = c40_d_dq[c40_i115];
    }

    for (c40_i119 = 0; c40_i119 < 3; c40_i119++) {
      c40_b_velocity[c40_i119] = 0.0;
    }

    for (c40_i121 = 0; c40_i121 < 3; c40_i121++) {
      c40_b_velocity[c40_i121] = 0.0;
      c40_i122 = 0;
      for (c40_i123 = 0; c40_i123 < 3; c40_i123++) {
        c40_b_velocity[c40_i121] += c40_b_a[c40_i122 + c40_i121] *
          c40_e_b[c40_i123];
        c40_i122 += 3;
      }
    }

    _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 69);
    c40_b_filter_selector = 1.0;
  } else {
    CV_EML_MCDC(0, 1, 2, false);
    CV_EML_IF(0, 1, 4, false);
    _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 71);
    for (c40_i54 = 0; c40_i54 < 3; c40_i54++) {
      c40_ypr[c40_i54] = c40_d_q[c40_i54 + 3];
    }

    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c40_l_debug_family_names,
      c40_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_j_nargin, 0U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_j_nargout, 1U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_ypr, 2U, c40_b_sf_marshallOut,
      c40_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_Rwb, 3U, c40_f_sf_marshallOut,
      c40_d_sf_marshallIn);
    CV_SCRIPT_FCN(7, 0);
    _SFD_SCRIPT_CALL(7U, chartInstance->c40_sfEvent, 3);
    c40_theta = c40_ypr[0];
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c40_i_debug_family_names,
      c40_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_k_nargin, 0U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_k_nargout, 1U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_theta, 2U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_R, 3U, c40_f_sf_marshallOut,
      c40_d_sf_marshallIn);
    CV_SCRIPT_FCN(8, 0);
    _SFD_SCRIPT_CALL(8U, chartInstance->c40_sfEvent, 3);
    c40_e_x = c40_theta;
    c40_f_x = c40_e_x;
    c40_f_x = muDoubleScalarCos(c40_f_x);
    c40_g_x = c40_theta;
    c40_h_x = c40_g_x;
    c40_h_x = muDoubleScalarSin(c40_h_x);
    c40_i_x = c40_theta;
    c40_j_x = c40_i_x;
    c40_j_x = muDoubleScalarSin(c40_j_x);
    c40_k_x = c40_theta;
    c40_l_x = c40_k_x;
    c40_l_x = muDoubleScalarCos(c40_l_x);
    c40_R[0] = c40_f_x;
    c40_R[3] = -c40_h_x;
    c40_R[6] = 0.0;
    c40_R[1] = c40_j_x;
    c40_R[4] = c40_l_x;
    c40_R[7] = 0.0;
    c40_i90 = 0;
    for (c40_i91 = 0; c40_i91 < 3; c40_i91++) {
      c40_R[c40_i90 + 2] = c40_dv4[c40_i91];
      c40_i90 += 3;
    }

    _SFD_SCRIPT_CALL(8U, chartInstance->c40_sfEvent, -3);
    _SFD_SYMBOL_SCOPE_POP();
    c40_b_theta = c40_ypr[1];
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c40_j_debug_family_names,
      c40_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_m_nargin, 0U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_m_nargout, 1U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_b_theta, 2U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_b_R, 3U, c40_f_sf_marshallOut,
      c40_d_sf_marshallIn);
    CV_SCRIPT_FCN(9, 0);
    _SFD_SCRIPT_CALL(9U, chartInstance->c40_sfEvent, 3);
    c40_m_x = c40_b_theta;
    c40_n_x = c40_m_x;
    c40_n_x = muDoubleScalarCos(c40_n_x);
    c40_o_x = c40_b_theta;
    c40_p_x = c40_o_x;
    c40_p_x = muDoubleScalarSin(c40_p_x);
    c40_q_x = c40_b_theta;
    c40_r_x = c40_q_x;
    c40_r_x = muDoubleScalarSin(c40_r_x);
    c40_s_x = c40_b_theta;
    c40_t_x = c40_s_x;
    c40_t_x = muDoubleScalarCos(c40_t_x);
    c40_b_R[0] = c40_n_x;
    c40_b_R[3] = 0.0;
    c40_b_R[6] = c40_p_x;
    c40_i101 = 0;
    for (c40_i102 = 0; c40_i102 < 3; c40_i102++) {
      c40_b_R[c40_i101 + 1] = c40_dv5[c40_i102];
      c40_i101 += 3;
    }

    c40_b_R[2] = -c40_r_x;
    c40_b_R[5] = 0.0;
    c40_b_R[8] = c40_t_x;
    _SFD_SCRIPT_CALL(9U, chartInstance->c40_sfEvent, -3);
    _SFD_SYMBOL_SCOPE_POP();
    for (c40_i105 = 0; c40_i105 < 9; c40_i105++) {
      c40_b_a[c40_i105] = c40_R[c40_i105];
    }

    for (c40_i107 = 0; c40_i107 < 9; c40_i107++) {
      c40_d_b[c40_i107] = c40_b_R[c40_i107];
    }

    for (c40_i110 = 0; c40_i110 < 3; c40_i110++) {
      c40_i113 = 0;
      for (c40_i114 = 0; c40_i114 < 3; c40_i114++) {
        c40_c_y[c40_i113 + c40_i110] = 0.0;
        c40_i118 = 0;
        for (c40_i120 = 0; c40_i120 < 3; c40_i120++) {
          c40_c_y[c40_i113 + c40_i110] += c40_b_a[c40_i118 + c40_i110] *
            c40_d_b[c40_i120 + c40_i113];
          c40_i118 += 3;
        }

        c40_i113 += 3;
      }
    }

    c40_c_theta = c40_ypr[2];
    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c40_k_debug_family_names,
      c40_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_o_nargin, 0U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_o_nargout, 1U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_c_theta, 2U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_c_R, 3U, c40_f_sf_marshallOut,
      c40_d_sf_marshallIn);
    CV_SCRIPT_FCN(10, 0);
    _SFD_SCRIPT_CALL(10U, chartInstance->c40_sfEvent, 3);
    c40_u_x = c40_c_theta;
    c40_v_x = c40_u_x;
    c40_v_x = muDoubleScalarCos(c40_v_x);
    c40_w_x = c40_c_theta;
    c40_x_x = c40_w_x;
    c40_x_x = muDoubleScalarSin(c40_x_x);
    c40_y_x = c40_c_theta;
    c40_ab_x = c40_y_x;
    c40_ab_x = muDoubleScalarSin(c40_ab_x);
    c40_bb_x = c40_c_theta;
    c40_cb_x = c40_bb_x;
    c40_cb_x = muDoubleScalarCos(c40_cb_x);
    c40_i126 = 0;
    for (c40_i127 = 0; c40_i127 < 3; c40_i127++) {
      c40_c_R[c40_i126] = c40_dv6[c40_i127];
      c40_i126 += 3;
    }

    c40_c_R[1] = 0.0;
    c40_c_R[4] = c40_v_x;
    c40_c_R[7] = -c40_x_x;
    c40_c_R[2] = 0.0;
    c40_c_R[5] = c40_ab_x;
    c40_c_R[8] = c40_cb_x;
    _SFD_SCRIPT_CALL(10U, chartInstance->c40_sfEvent, -3);
    _SFD_SYMBOL_SCOPE_POP();
    for (c40_i130 = 0; c40_i130 < 9; c40_i130++) {
      c40_d_b[c40_i130] = c40_c_R[c40_i130];
    }

    for (c40_i131 = 0; c40_i131 < 9; c40_i131++) {
      c40_Rwb[c40_i131] = 0.0;
    }

    for (c40_i132 = 0; c40_i132 < 3; c40_i132++) {
      c40_i133 = 0;
      for (c40_i134 = 0; c40_i134 < 3; c40_i134++) {
        c40_Rwb[c40_i133 + c40_i132] = 0.0;
        c40_i136 = 0;
        for (c40_i138 = 0; c40_i138 < 3; c40_i138++) {
          c40_Rwb[c40_i133 + c40_i132] += c40_c_y[c40_i136 + c40_i132] *
            c40_d_b[c40_i138 + c40_i133];
          c40_i136 += 3;
        }

        c40_i133 += 3;
      }
    }

    _SFD_SCRIPT_CALL(7U, chartInstance->c40_sfEvent, -3);
    _SFD_SYMBOL_SCOPE_POP();
    _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 72);
    for (c40_i135 = 0; c40_i135 < 9; c40_i135++) {
      c40_b_a[c40_i135] = c40_Rwb[c40_i135];
    }

    for (c40_i137 = 0; c40_i137 < 9; c40_i137++) {
      c40_d_b[c40_i137] = c40_Rbi[c40_i137];
    }

    for (c40_i139 = 0; c40_i139 < 9; c40_i139++) {
      c40_Rwi[c40_i139] = 0.0;
    }

    for (c40_i140 = 0; c40_i140 < 3; c40_i140++) {
      c40_i141 = 0;
      for (c40_i143 = 0; c40_i143 < 3; c40_i143++) {
        c40_Rwi[c40_i141 + c40_i140] = 0.0;
        c40_i145 = 0;
        for (c40_i146 = 0; c40_i146 < 3; c40_i146++) {
          c40_Rwi[c40_i141 + c40_i140] += c40_b_a[c40_i145 + c40_i140] *
            c40_d_b[c40_i146 + c40_i141];
          c40_i145 += 3;
        }

        c40_i141 += 3;
      }
    }

    _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 74);
    for (c40_i142 = 0; c40_i142 < 9; c40_i142++) {
      c40_b_a[c40_i142] = c40_Rwi[c40_i142];
    }

    for (c40_i144 = 0; c40_i144 < 3; c40_i144++) {
      c40_e_b[c40_i144] = c40_b_velocity_kinematic[c40_i144];
    }

    for (c40_i147 = 0; c40_i147 < 3; c40_i147++) {
      c40_y[c40_i147] = 0.0;
      c40_i149 = 0;
      for (c40_i150 = 0; c40_i150 < 3; c40_i150++) {
        c40_y[c40_i147] += c40_b_a[c40_i149 + c40_i147] * c40_e_b[c40_i150];
        c40_i149 += 3;
      }
    }

    for (c40_i148 = 0; c40_i148 < 3; c40_i148++) {
      c40_d_v[c40_i148] = c40_b_w[c40_i148];
    }

    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c40_d_debug_family_names,
      c40_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_p_nargin, 0U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_p_nargout, 1U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_d_v, 2U, c40_b_sf_marshallOut,
      c40_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_d_Ax, 3U, c40_f_sf_marshallOut,
      c40_d_sf_marshallIn);
    CV_SCRIPT_FCN(2, 0);
    _SFD_SCRIPT_CALL(2U, chartInstance->c40_sfEvent, 3);
    c40_d_Ax[0] = 0.0;
    c40_d_Ax[3] = -c40_d_v[2];
    c40_d_Ax[6] = c40_d_v[1];
    c40_d_Ax[1] = c40_d_v[2];
    c40_d_Ax[4] = 0.0;
    c40_d_Ax[7] = -c40_d_v[0];
    c40_d_Ax[2] = -c40_d_v[1];
    c40_d_Ax[5] = c40_d_v[0];
    c40_d_Ax[8] = 0.0;
    _SFD_SCRIPT_CALL(2U, chartInstance->c40_sfEvent, -3);
    _SFD_SYMBOL_SCOPE_POP();
    for (c40_i151 = 0; c40_i151 < 9; c40_i151++) {
      c40_b_a[c40_i151] = c40_Rwi[c40_i151];
    }

    for (c40_i152 = 0; c40_i152 < 9; c40_i152++) {
      c40_d_b[c40_i152] = c40_d_Ax[c40_i152];
    }

    for (c40_i153 = 0; c40_i153 < 3; c40_i153++) {
      c40_i155 = 0;
      for (c40_i156 = 0; c40_i156 < 3; c40_i156++) {
        c40_c_y[c40_i155 + c40_i153] = 0.0;
        c40_i157 = 0;
        for (c40_i158 = 0; c40_i158 < 3; c40_i158++) {
          c40_c_y[c40_i155 + c40_i153] += c40_b_a[c40_i157 + c40_i153] *
            c40_d_b[c40_i158 + c40_i155];
          c40_i157 += 3;
        }

        c40_i155 += 3;
      }
    }

    for (c40_i154 = 0; c40_i154 < 14; c40_i154++) {
      c40_h_var1[c40_i154] = c40_e[c40_i154];
    }

    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c40_h_debug_family_names,
      c40_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_q_nargin, 0U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c40_q_nargout, 1U, c40_sf_marshallOut,
      c40_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_h_var1, 2U, c40_h_sf_marshallOut,
      c40_f_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c40_d_output1, 3U, c40_b_sf_marshallOut,
      c40_b_sf_marshallIn);
    CV_SCRIPT_FCN(6, 0);
    _SFD_SCRIPT_CALL(6U, chartInstance->c40_sfEvent, 2);
    CV_SCRIPT_IF(6, 0, false);
    _SFD_SCRIPT_CALL(6U, chartInstance->c40_sfEvent, 5);
    _SFD_SCRIPT_CALL(6U, chartInstance->c40_sfEvent, 7);
    for (c40_i159 = 0; c40_i159 < 3; c40_i159++) {
      c40_d_output1[c40_i159] = 0.0;
    }

    _SFD_SCRIPT_CALL(6U, chartInstance->c40_sfEvent, 10);
    p_VectorNav_to_Pelvis_src(c40_d_output1, c40_h_var1);
    _SFD_SCRIPT_CALL(6U, chartInstance->c40_sfEvent, -10);
    _SFD_SYMBOL_SCOPE_POP();
    for (c40_i160 = 0; c40_i160 < 3; c40_i160++) {
      c40_e_b[c40_i160] = c40_d_output1[c40_i160];
    }

    for (c40_i161 = 0; c40_i161 < 3; c40_i161++) {
      c40_b_y[c40_i161] = 0.0;
      c40_i163 = 0;
      for (c40_i164 = 0; c40_i164 < 3; c40_i164++) {
        c40_b_y[c40_i161] += c40_c_y[c40_i163 + c40_i161] * c40_e_b[c40_i164];
        c40_i163 += 3;
      }
    }

    for (c40_i162 = 0; c40_i162 < 3; c40_i162++) {
      c40_d_dq[c40_i162] = c40_y[c40_i162] + c40_b_y[c40_i162];
    }

    _SFD_SYMBOL_SWITCH(15U, 21U);
    _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 76);
    c40_i165 = 0;
    for (c40_i166 = 0; c40_i166 < 3; c40_i166++) {
      c40_i168 = 0;
      for (c40_i169 = 0; c40_i169 < 3; c40_i169++) {
        c40_b_a[c40_i169 + c40_i165] = c40_Rwb[c40_i168 + c40_i166];
        c40_i168 += 3;
      }

      c40_i165 += 3;
    }

    for (c40_i167 = 0; c40_i167 < 3; c40_i167++) {
      c40_e_b[c40_i167] = c40_d_dq[c40_i167];
    }

    for (c40_i170 = 0; c40_i170 < 3; c40_i170++) {
      c40_b_velocity[c40_i170] = 0.0;
    }

    for (c40_i171 = 0; c40_i171 < 3; c40_i171++) {
      c40_b_velocity[c40_i171] = 0.0;
      c40_i172 = 0;
      for (c40_i173 = 0; c40_i173 < 3; c40_i173++) {
        c40_b_velocity[c40_i171] += c40_b_a[c40_i172 + c40_i171] *
          c40_e_b[c40_i173];
        c40_i172 += 3;
      }
    }

    _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, 77);
    c40_b_filter_selector = 0.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c40_sfEvent, -77);
  _SFD_SYMBOL_SCOPE_POP();
  for (c40_i124 = 0; c40_i124 < 20; c40_i124++) {
    (*chartInstance->c40_q)[c40_i124] = c40_d_q[c40_i124];
  }

  for (c40_i125 = 0; c40_i125 < 20; c40_i125++) {
    (*chartInstance->c40_dq)[c40_i125] = c40_d_dq[c40_i125];
  }

  for (c40_i128 = 0; c40_i128 < 3; c40_i128++) {
    (*chartInstance->c40_velocity)[c40_i128] = c40_b_velocity[c40_i128];
  }

  for (c40_i129 = 0; c40_i129 < 3; c40_i129++) {
    (*chartInstance->c40_velocity_kinematic)[c40_i129] =
      c40_b_velocity_kinematic[c40_i129];
  }

  *chartInstance->c40_filter_selector = c40_b_filter_selector;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c40_sfEvent);
}

static void initSimStructsc40_RightInvariant_EKF
  (SFc40_RightInvariant_EKFInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c40_machineNumber, uint32_T
  c40_chartNumber, uint32_T c40_instanceNumber)
{
  (void)c40_machineNumber;
  _SFD_SCRIPT_TRANSLATION(c40_chartNumber, c40_instanceNumber, 0U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_Model\\gen\\kin\\m\\p_VectorNav_to_LeftToeBottom.m"));
  _SFD_SCRIPT_TRANSLATION(c40_chartNumber, c40_instanceNumber, 1U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_Model\\gen\\kin\\m\\J_VectorNav_to_LeftToeBottom.m"));
  _SFD_SCRIPT_TRANSLATION(c40_chartNumber, c40_instanceNumber, 2U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\utils\\+Angles\\skew.m"));
  _SFD_SCRIPT_TRANSLATION(c40_chartNumber, c40_instanceNumber, 3U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_Model\\gen\\kin\\m\\p_VectorNav_to_RightToeBottom.m"));
  _SFD_SCRIPT_TRANSLATION(c40_chartNumber, c40_instanceNumber, 4U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_Model\\gen\\kin\\m\\J_VectorNav_to_RightToeBottom.m"));
  _SFD_SCRIPT_TRANSLATION(c40_chartNumber, c40_instanceNumber, 5U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_Model\\gen\\kin\\m\\R_VectorNav_to_Pelvis.m"));
  _SFD_SCRIPT_TRANSLATION(c40_chartNumber, c40_instanceNumber, 6U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_Model\\gen\\kin\\m\\p_VectorNav_to_Pelvis.m"));
  _SFD_SCRIPT_TRANSLATION(c40_chartNumber, c40_instanceNumber, 7U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\utils\\+Angles\\Euler_to_Rotation.m"));
  _SFD_SCRIPT_TRANSLATION(c40_chartNumber, c40_instanceNumber, 8U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\utils\\+Angles\\Rz.m"));
  _SFD_SCRIPT_TRANSLATION(c40_chartNumber, c40_instanceNumber, 9U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\utils\\+Angles\\Ry.m"));
  _SFD_SCRIPT_TRANSLATION(c40_chartNumber, c40_instanceNumber, 10U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\utils\\+Angles\\Rx.m"));
}

static const mxArray *c40_sf_marshallOut(void *chartInstanceVoid, void
  *c40_inData)
{
  const mxArray *c40_mxArrayOutData;
  real_T c40_u;
  const mxArray *c40_y = NULL;
  SFc40_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc40_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c40_mxArrayOutData = NULL;
  c40_mxArrayOutData = NULL;
  c40_u = *(real_T *)c40_inData;
  c40_y = NULL;
  sf_mex_assign(&c40_y, sf_mex_create("y", &c40_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c40_mxArrayOutData, c40_y, false);
  return c40_mxArrayOutData;
}

static real_T c40_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_b_filter_selector, const char_T
  *c40_identifier)
{
  real_T c40_y;
  emlrtMsgIdentifier c40_thisId;
  c40_thisId.fIdentifier = c40_identifier;
  c40_thisId.fParent = NULL;
  c40_thisId.bParentIsCell = false;
  c40_y = c40_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c40_b_filter_selector),
    &c40_thisId);
  sf_mex_destroy(&c40_b_filter_selector);
  return c40_y;
}

static real_T c40_b_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_u, const emlrtMsgIdentifier *c40_parentId)
{
  real_T c40_y;
  real_T c40_d0;
  (void)chartInstance;
  sf_mex_import(c40_parentId, sf_mex_dup(c40_u), &c40_d0, 1, 0, 0U, 0, 0U, 0);
  c40_y = c40_d0;
  sf_mex_destroy(&c40_u);
  return c40_y;
}

static void c40_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c40_mxArrayInData, const char_T *c40_varName, void *c40_outData)
{
  const mxArray *c40_b_filter_selector;
  const char_T *c40_identifier;
  emlrtMsgIdentifier c40_thisId;
  real_T c40_y;
  SFc40_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc40_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c40_b_filter_selector = sf_mex_dup(c40_mxArrayInData);
  c40_identifier = c40_varName;
  c40_thisId.fIdentifier = c40_identifier;
  c40_thisId.fParent = NULL;
  c40_thisId.bParentIsCell = false;
  c40_y = c40_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c40_b_filter_selector),
    &c40_thisId);
  sf_mex_destroy(&c40_b_filter_selector);
  *(real_T *)c40_outData = c40_y;
  sf_mex_destroy(&c40_mxArrayInData);
}

static const mxArray *c40_b_sf_marshallOut(void *chartInstanceVoid, void
  *c40_inData)
{
  const mxArray *c40_mxArrayOutData;
  int32_T c40_i174;
  const mxArray *c40_y = NULL;
  real_T c40_u[3];
  SFc40_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc40_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c40_mxArrayOutData = NULL;
  c40_mxArrayOutData = NULL;
  for (c40_i174 = 0; c40_i174 < 3; c40_i174++) {
    c40_u[c40_i174] = (*(real_T (*)[3])c40_inData)[c40_i174];
  }

  c40_y = NULL;
  sf_mex_assign(&c40_y, sf_mex_create("y", c40_u, 0, 0U, 1U, 0U, 1, 3), false);
  sf_mex_assign(&c40_mxArrayOutData, c40_y, false);
  return c40_mxArrayOutData;
}

static void c40_c_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_b_velocity_kinematic, const char_T
  *c40_identifier, real_T c40_y[3])
{
  emlrtMsgIdentifier c40_thisId;
  c40_thisId.fIdentifier = c40_identifier;
  c40_thisId.fParent = NULL;
  c40_thisId.bParentIsCell = false;
  c40_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c40_b_velocity_kinematic),
    &c40_thisId, c40_y);
  sf_mex_destroy(&c40_b_velocity_kinematic);
}

static void c40_d_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_u, const emlrtMsgIdentifier *c40_parentId,
  real_T c40_y[3])
{
  real_T c40_dv7[3];
  int32_T c40_i175;
  (void)chartInstance;
  sf_mex_import(c40_parentId, sf_mex_dup(c40_u), c40_dv7, 1, 0, 0U, 1, 0U, 1, 3);
  for (c40_i175 = 0; c40_i175 < 3; c40_i175++) {
    c40_y[c40_i175] = c40_dv7[c40_i175];
  }

  sf_mex_destroy(&c40_u);
}

static void c40_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c40_mxArrayInData, const char_T *c40_varName, void *c40_outData)
{
  const mxArray *c40_b_velocity_kinematic;
  const char_T *c40_identifier;
  emlrtMsgIdentifier c40_thisId;
  real_T c40_y[3];
  int32_T c40_i176;
  SFc40_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc40_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c40_b_velocity_kinematic = sf_mex_dup(c40_mxArrayInData);
  c40_identifier = c40_varName;
  c40_thisId.fIdentifier = c40_identifier;
  c40_thisId.fParent = NULL;
  c40_thisId.bParentIsCell = false;
  c40_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c40_b_velocity_kinematic),
    &c40_thisId, c40_y);
  sf_mex_destroy(&c40_b_velocity_kinematic);
  for (c40_i176 = 0; c40_i176 < 3; c40_i176++) {
    (*(real_T (*)[3])c40_outData)[c40_i176] = c40_y[c40_i176];
  }

  sf_mex_destroy(&c40_mxArrayInData);
}

static const mxArray *c40_c_sf_marshallOut(void *chartInstanceVoid, void
  *c40_inData)
{
  const mxArray *c40_mxArrayOutData;
  int32_T c40_i177;
  const mxArray *c40_y = NULL;
  real_T c40_u[20];
  SFc40_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc40_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c40_mxArrayOutData = NULL;
  c40_mxArrayOutData = NULL;
  for (c40_i177 = 0; c40_i177 < 20; c40_i177++) {
    c40_u[c40_i177] = (*(real_T (*)[20])c40_inData)[c40_i177];
  }

  c40_y = NULL;
  sf_mex_assign(&c40_y, sf_mex_create("y", c40_u, 0, 0U, 1U, 0U, 1, 20), false);
  sf_mex_assign(&c40_mxArrayOutData, c40_y, false);
  return c40_mxArrayOutData;
}

static void c40_e_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_c_dq, const char_T *c40_identifier, real_T
  c40_y[20])
{
  emlrtMsgIdentifier c40_thisId;
  c40_thisId.fIdentifier = c40_identifier;
  c40_thisId.fParent = NULL;
  c40_thisId.bParentIsCell = false;
  c40_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c40_c_dq), &c40_thisId, c40_y);
  sf_mex_destroy(&c40_c_dq);
}

static void c40_f_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_u, const emlrtMsgIdentifier *c40_parentId,
  real_T c40_y[20])
{
  real_T c40_dv8[20];
  int32_T c40_i178;
  (void)chartInstance;
  sf_mex_import(c40_parentId, sf_mex_dup(c40_u), c40_dv8, 1, 0, 0U, 1, 0U, 1, 20);
  for (c40_i178 = 0; c40_i178 < 20; c40_i178++) {
    c40_y[c40_i178] = c40_dv8[c40_i178];
  }

  sf_mex_destroy(&c40_u);
}

static void c40_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c40_mxArrayInData, const char_T *c40_varName, void *c40_outData)
{
  const mxArray *c40_c_dq;
  const char_T *c40_identifier;
  emlrtMsgIdentifier c40_thisId;
  real_T c40_y[20];
  int32_T c40_i179;
  SFc40_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc40_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c40_c_dq = sf_mex_dup(c40_mxArrayInData);
  c40_identifier = c40_varName;
  c40_thisId.fIdentifier = c40_identifier;
  c40_thisId.fParent = NULL;
  c40_thisId.bParentIsCell = false;
  c40_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c40_c_dq), &c40_thisId, c40_y);
  sf_mex_destroy(&c40_c_dq);
  for (c40_i179 = 0; c40_i179 < 20; c40_i179++) {
    (*(real_T (*)[20])c40_outData)[c40_i179] = c40_y[c40_i179];
  }

  sf_mex_destroy(&c40_mxArrayInData);
}

static const mxArray *c40_d_sf_marshallOut(void *chartInstanceVoid, void
  *c40_inData)
{
  const mxArray *c40_mxArrayOutData;
  int32_T c40_i180;
  int32_T c40_i181;
  const mxArray *c40_y = NULL;
  int32_T c40_i182;
  real_T c40_u[49];
  SFc40_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc40_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c40_mxArrayOutData = NULL;
  c40_mxArrayOutData = NULL;
  c40_i180 = 0;
  for (c40_i181 = 0; c40_i181 < 7; c40_i181++) {
    for (c40_i182 = 0; c40_i182 < 7; c40_i182++) {
      c40_u[c40_i182 + c40_i180] = (*(real_T (*)[49])c40_inData)[c40_i182 +
        c40_i180];
    }

    c40_i180 += 7;
  }

  c40_y = NULL;
  sf_mex_assign(&c40_y, sf_mex_create("y", c40_u, 0, 0U, 1U, 0U, 2, 7, 7), false);
  sf_mex_assign(&c40_mxArrayOutData, c40_y, false);
  return c40_mxArrayOutData;
}

static const mxArray *c40_e_sf_marshallOut(void *chartInstanceVoid, void
  *c40_inData)
{
  const mxArray *c40_mxArrayOutData;
  int32_T c40_i183;
  const mxArray *c40_y = NULL;
  real_T c40_u[2];
  SFc40_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc40_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c40_mxArrayOutData = NULL;
  c40_mxArrayOutData = NULL;
  for (c40_i183 = 0; c40_i183 < 2; c40_i183++) {
    c40_u[c40_i183] = (*(real_T (*)[2])c40_inData)[c40_i183];
  }

  c40_y = NULL;
  sf_mex_assign(&c40_y, sf_mex_create("y", c40_u, 0, 0U, 1U, 0U, 1, 2), false);
  sf_mex_assign(&c40_mxArrayOutData, c40_y, false);
  return c40_mxArrayOutData;
}

static const mxArray *c40_f_sf_marshallOut(void *chartInstanceVoid, void
  *c40_inData)
{
  const mxArray *c40_mxArrayOutData;
  int32_T c40_i184;
  int32_T c40_i185;
  const mxArray *c40_y = NULL;
  int32_T c40_i186;
  real_T c40_u[9];
  SFc40_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc40_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c40_mxArrayOutData = NULL;
  c40_mxArrayOutData = NULL;
  c40_i184 = 0;
  for (c40_i185 = 0; c40_i185 < 3; c40_i185++) {
    for (c40_i186 = 0; c40_i186 < 3; c40_i186++) {
      c40_u[c40_i186 + c40_i184] = (*(real_T (*)[9])c40_inData)[c40_i186 +
        c40_i184];
    }

    c40_i184 += 3;
  }

  c40_y = NULL;
  sf_mex_assign(&c40_y, sf_mex_create("y", c40_u, 0, 0U, 1U, 0U, 2, 3, 3), false);
  sf_mex_assign(&c40_mxArrayOutData, c40_y, false);
  return c40_mxArrayOutData;
}

static void c40_g_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_u, const emlrtMsgIdentifier *c40_parentId,
  real_T c40_y[9])
{
  real_T c40_dv9[9];
  int32_T c40_i187;
  (void)chartInstance;
  sf_mex_import(c40_parentId, sf_mex_dup(c40_u), c40_dv9, 1, 0, 0U, 1, 0U, 2, 3,
                3);
  for (c40_i187 = 0; c40_i187 < 9; c40_i187++) {
    c40_y[c40_i187] = c40_dv9[c40_i187];
  }

  sf_mex_destroy(&c40_u);
}

static void c40_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c40_mxArrayInData, const char_T *c40_varName, void *c40_outData)
{
  const mxArray *c40_Rwb;
  const char_T *c40_identifier;
  emlrtMsgIdentifier c40_thisId;
  real_T c40_y[9];
  int32_T c40_i188;
  int32_T c40_i189;
  int32_T c40_i190;
  SFc40_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc40_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c40_Rwb = sf_mex_dup(c40_mxArrayInData);
  c40_identifier = c40_varName;
  c40_thisId.fIdentifier = c40_identifier;
  c40_thisId.fParent = NULL;
  c40_thisId.bParentIsCell = false;
  c40_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c40_Rwb), &c40_thisId, c40_y);
  sf_mex_destroy(&c40_Rwb);
  c40_i188 = 0;
  for (c40_i189 = 0; c40_i189 < 3; c40_i189++) {
    for (c40_i190 = 0; c40_i190 < 3; c40_i190++) {
      (*(real_T (*)[9])c40_outData)[c40_i190 + c40_i188] = c40_y[c40_i190 +
        c40_i188];
    }

    c40_i188 += 3;
  }

  sf_mex_destroy(&c40_mxArrayInData);
}

static const mxArray *c40_g_sf_marshallOut(void *chartInstanceVoid, void
  *c40_inData)
{
  const mxArray *c40_mxArrayOutData;
  int32_T c40_i191;
  int32_T c40_i192;
  const mxArray *c40_y = NULL;
  int32_T c40_i193;
  real_T c40_u[42];
  SFc40_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc40_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c40_mxArrayOutData = NULL;
  c40_mxArrayOutData = NULL;
  c40_i191 = 0;
  for (c40_i192 = 0; c40_i192 < 14; c40_i192++) {
    for (c40_i193 = 0; c40_i193 < 3; c40_i193++) {
      c40_u[c40_i193 + c40_i191] = (*(real_T (*)[42])c40_inData)[c40_i193 +
        c40_i191];
    }

    c40_i191 += 3;
  }

  c40_y = NULL;
  sf_mex_assign(&c40_y, sf_mex_create("y", c40_u, 0, 0U, 1U, 0U, 2, 3, 14),
                false);
  sf_mex_assign(&c40_mxArrayOutData, c40_y, false);
  return c40_mxArrayOutData;
}

static void c40_h_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_u, const emlrtMsgIdentifier *c40_parentId,
  real_T c40_y[42])
{
  real_T c40_dv10[42];
  int32_T c40_i194;
  (void)chartInstance;
  sf_mex_import(c40_parentId, sf_mex_dup(c40_u), c40_dv10, 1, 0, 0U, 1, 0U, 2, 3,
                14);
  for (c40_i194 = 0; c40_i194 < 42; c40_i194++) {
    c40_y[c40_i194] = c40_dv10[c40_i194];
  }

  sf_mex_destroy(&c40_u);
}

static void c40_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c40_mxArrayInData, const char_T *c40_varName, void *c40_outData)
{
  const mxArray *c40_J_pR;
  const char_T *c40_identifier;
  emlrtMsgIdentifier c40_thisId;
  real_T c40_y[42];
  int32_T c40_i195;
  int32_T c40_i196;
  int32_T c40_i197;
  SFc40_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc40_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c40_J_pR = sf_mex_dup(c40_mxArrayInData);
  c40_identifier = c40_varName;
  c40_thisId.fIdentifier = c40_identifier;
  c40_thisId.fParent = NULL;
  c40_thisId.bParentIsCell = false;
  c40_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c40_J_pR), &c40_thisId, c40_y);
  sf_mex_destroy(&c40_J_pR);
  c40_i195 = 0;
  for (c40_i196 = 0; c40_i196 < 14; c40_i196++) {
    for (c40_i197 = 0; c40_i197 < 3; c40_i197++) {
      (*(real_T (*)[42])c40_outData)[c40_i197 + c40_i195] = c40_y[c40_i197 +
        c40_i195];
    }

    c40_i195 += 3;
  }

  sf_mex_destroy(&c40_mxArrayInData);
}

static const mxArray *c40_h_sf_marshallOut(void *chartInstanceVoid, void
  *c40_inData)
{
  const mxArray *c40_mxArrayOutData;
  int32_T c40_i198;
  const mxArray *c40_y = NULL;
  real_T c40_u[14];
  SFc40_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc40_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c40_mxArrayOutData = NULL;
  c40_mxArrayOutData = NULL;
  for (c40_i198 = 0; c40_i198 < 14; c40_i198++) {
    c40_u[c40_i198] = (*(real_T (*)[14])c40_inData)[c40_i198];
  }

  c40_y = NULL;
  sf_mex_assign(&c40_y, sf_mex_create("y", c40_u, 0, 0U, 1U, 0U, 1, 14), false);
  sf_mex_assign(&c40_mxArrayOutData, c40_y, false);
  return c40_mxArrayOutData;
}

static void c40_i_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_u, const emlrtMsgIdentifier *c40_parentId,
  real_T c40_y[14])
{
  real_T c40_dv11[14];
  int32_T c40_i199;
  (void)chartInstance;
  sf_mex_import(c40_parentId, sf_mex_dup(c40_u), c40_dv11, 1, 0, 0U, 1, 0U, 1,
                14);
  for (c40_i199 = 0; c40_i199 < 14; c40_i199++) {
    c40_y[c40_i199] = c40_dv11[c40_i199];
  }

  sf_mex_destroy(&c40_u);
}

static void c40_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c40_mxArrayInData, const char_T *c40_varName, void *c40_outData)
{
  const mxArray *c40_e_dot;
  const char_T *c40_identifier;
  emlrtMsgIdentifier c40_thisId;
  real_T c40_y[14];
  int32_T c40_i200;
  SFc40_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc40_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c40_e_dot = sf_mex_dup(c40_mxArrayInData);
  c40_identifier = c40_varName;
  c40_thisId.fIdentifier = c40_identifier;
  c40_thisId.fParent = NULL;
  c40_thisId.bParentIsCell = false;
  c40_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c40_e_dot), &c40_thisId,
    c40_y);
  sf_mex_destroy(&c40_e_dot);
  for (c40_i200 = 0; c40_i200 < 14; c40_i200++) {
    (*(real_T (*)[14])c40_outData)[c40_i200] = c40_y[c40_i200];
  }

  sf_mex_destroy(&c40_mxArrayInData);
}

static const mxArray *c40_i_sf_marshallOut(void *chartInstanceVoid, void
  *c40_inData)
{
  const mxArray *c40_mxArrayOutData;
  boolean_T c40_u;
  const mxArray *c40_y = NULL;
  SFc40_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc40_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c40_mxArrayOutData = NULL;
  c40_mxArrayOutData = NULL;
  c40_u = *(boolean_T *)c40_inData;
  c40_y = NULL;
  sf_mex_assign(&c40_y, sf_mex_create("y", &c40_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c40_mxArrayOutData, c40_y, false);
  return c40_mxArrayOutData;
}

const mxArray *sf_c40_RightInvariant_EKF_get_eml_resolved_functions_info(void)
{
  const mxArray *c40_nameCaptureInfo = NULL;
  const char * c40_data[8] = {
    "789ced984d6fda300086cdd455abaa4dbb6cda619376d861d2a486524adb9dca478106022594b2769a5000174293388d1d20ecb6fd80edb863efbbecb8e37ec5"
    "7ecf623e4386881428eb2091acf0e2bc8edfd84f9c04f88e39606e8fccf2eb1500ebe6fe8159ee81de76bfaf7d66d9ecef7bffaf81877dfdc52c15a410d826bd",
    "4a459021186c55248b8aa090534385408318494d58edd65c8a123c156598461691144d21c72d554341abe8ef681d56aef2ba0cb43a1e9e064856d1cde307a33c"
    "6bb63c836d90e7b1c57732c5478f7f6ef351ad96ce6085202d23344b0495d2f0929c221841842079d0eebe43bbebb676d7bb574f2f4bb0e7ffe9e0ff64f353fd",
    "fee843f42d53c050c30c8f307e99143422418389a18a2e438560262192a45eeed696a202c6222c45cdd1d490245117d6cb32aaea12c44cbf964355283135a830"
    "57a2c2c8ccb4ec5bf2e8ba5af3af4fe8bfcfd2ff8dd138b19bdf7f8767f0cf7afeb9f99360faf83d05e3e347f55920c9a9984d97a5738e34f6592997482713bd",
    "f65e5bdaf34d680f58f66e8e5f243fec0af3332dbbc7cfc8ef869f564082e54c9d8feccae17ae232db16db62257eb7f93974c8b969f3511d566ae60cdbc257b0"
    "356c67565ebe39f8059b9feab9f2a21351c2cc9b5e3686661be030c37c3a4caf320fd5dc7624a1c679c267032d14cba7ca35a318bbdb3c38ad272f6c3eaa6dcf",
    "24bc58ab8f2d288b584f3edbfc54ff83e7b1f1ec7d82bcf5c41d3f9ce00f6520173f3f3b852d146836eb8d5ce33f7f1e9bc40fbbc2fc4ccdeef133f43bf1f304"
    "8c8f1fd5ef9ae5f3947a701d6bfa8b5abb28e3742e1f01779b1f3739f9f1397402a5a688c17cb8f9e1e0ff68f353bd086e2666f67819faddac3715bfc843b670",
    "b0b7b7e70fed1c7702398d7091e5e3455d415e2666f67819faddf082aad19a5ebcdc8e84b207692e54d9ade543ea7fcecb339b8feafefbfe9139bfb4ee430a22"
    "021191320f5e6e1cfc8acd4ff52dbef7ff959122e2bdffbbbbcf1eec9ce370a4d1aaa8173868c89a0ecddb0e580c1f370efdbd2bf3ead0a19f1bb67e52dde791",
    "ef58f2cecae157077fc9e62fddeef5e23be605f2b873b72e05838d90eccfb352ab5a88e402cdd6d545e37a41df0d6e1cfabb0cdc1996bccbc69de171e7fe7b9d"
    "119570c630e2fe76f5acb08f12a9582895f4b89b17776d4bde65e3aeed71e79a3bb601d9e37052e7c44e9ccf9483d94c47e517f01ef60745e0a5f4",
    "" };

  c40_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(c40_data, 9424U, &c40_nameCaptureInfo);
  return c40_nameCaptureInfo;
}

static void c40_error(SFc40_RightInvariant_EKFInstanceStruct *chartInstance)
{
  const mxArray *c40_y = NULL;
  static char_T c40_cv0[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
    'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  (void)chartInstance;
  c40_y = NULL;
  sf_mex_assign(&c40_y, sf_mex_create("y", c40_cv0, 10, 0U, 1U, 0U, 2, 1, 19),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message", 1U,
    1U, 14, c40_y));
}

static const mxArray *c40_j_sf_marshallOut(void *chartInstanceVoid, void
  *c40_inData)
{
  const mxArray *c40_mxArrayOutData;
  int32_T c40_u;
  const mxArray *c40_y = NULL;
  SFc40_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc40_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c40_mxArrayOutData = NULL;
  c40_mxArrayOutData = NULL;
  c40_u = *(int32_T *)c40_inData;
  c40_y = NULL;
  sf_mex_assign(&c40_y, sf_mex_create("y", &c40_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c40_mxArrayOutData, c40_y, false);
  return c40_mxArrayOutData;
}

static int32_T c40_j_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_u, const emlrtMsgIdentifier *c40_parentId)
{
  int32_T c40_y;
  int32_T c40_i201;
  (void)chartInstance;
  sf_mex_import(c40_parentId, sf_mex_dup(c40_u), &c40_i201, 1, 6, 0U, 0, 0U, 0);
  c40_y = c40_i201;
  sf_mex_destroy(&c40_u);
  return c40_y;
}

static void c40_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c40_mxArrayInData, const char_T *c40_varName, void *c40_outData)
{
  const mxArray *c40_b_sfEvent;
  const char_T *c40_identifier;
  emlrtMsgIdentifier c40_thisId;
  int32_T c40_y;
  SFc40_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc40_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c40_b_sfEvent = sf_mex_dup(c40_mxArrayInData);
  c40_identifier = c40_varName;
  c40_thisId.fIdentifier = c40_identifier;
  c40_thisId.fParent = NULL;
  c40_thisId.bParentIsCell = false;
  c40_y = c40_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c40_b_sfEvent),
    &c40_thisId);
  sf_mex_destroy(&c40_b_sfEvent);
  *(int32_T *)c40_outData = c40_y;
  sf_mex_destroy(&c40_mxArrayInData);
}

static uint8_T c40_k_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_b_is_active_c40_RightInvariant_EKF, const
  char_T *c40_identifier)
{
  uint8_T c40_y;
  emlrtMsgIdentifier c40_thisId;
  c40_thisId.fIdentifier = c40_identifier;
  c40_thisId.fParent = NULL;
  c40_thisId.bParentIsCell = false;
  c40_y = c40_l_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c40_b_is_active_c40_RightInvariant_EKF), &c40_thisId);
  sf_mex_destroy(&c40_b_is_active_c40_RightInvariant_EKF);
  return c40_y;
}

static uint8_T c40_l_emlrt_marshallIn(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c40_u, const emlrtMsgIdentifier *c40_parentId)
{
  uint8_T c40_y;
  uint8_T c40_u0;
  (void)chartInstance;
  sf_mex_import(c40_parentId, sf_mex_dup(c40_u), &c40_u0, 1, 3, 0U, 0, 0U, 0);
  c40_y = c40_u0;
  sf_mex_destroy(&c40_u);
  return c40_y;
}

static void init_dsm_address_info(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc40_RightInvariant_EKFInstanceStruct
  *chartInstance)
{
  chartInstance->c40_q = (real_T (*)[20])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c40_dq = (real_T (*)[20])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c40_b_q = (real_T (*)[20])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c40_b_dq = (real_T (*)[20])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c40_w = (real_T (*)[3])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c40_contact = (real_T (*)[2])ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c40_X = (real_T (*)[49])ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c40_ekf_enabled = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c40_velocity = (real_T (*)[3])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c40_velocity_kinematic = (real_T (*)[3])
    ssGetOutputPortSignal_wrapper(chartInstance->S, 4);
  chartInstance->c40_filter_selector = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

void sf_c40_RightInvariant_EKF_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2923111809U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3219572262U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2808791928U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(631338721U);
}

mxArray* sf_c40_RightInvariant_EKF_get_post_codegen_info(void);
mxArray *sf_c40_RightInvariant_EKF_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("ZG2eaketZJedU4skUn79uC");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,6,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(20);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(20);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(2);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(7);
      pr[1] = (double)(7);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,5,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,5,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(20);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(20);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo = sf_c40_RightInvariant_EKF_get_post_codegen_info
      ();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c40_RightInvariant_EKF_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c40_RightInvariant_EKF_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString(
    "p_VectorNav_to_LeftToeBottom_src");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c40_RightInvariant_EKF_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c40_RightInvariant_EKF_get_post_codegen_info(void)
{
  const char* fieldNames[] = { "exportedFunctionsUsedByThisChart",
    "exportedFunctionsChecksum" };

  mwSize dims[2] = { 1, 1 };

  mxArray* mxPostCodegenInfo = mxCreateStructArray(2, dims, sizeof(fieldNames)/
    sizeof(fieldNames[0]), fieldNames);

  {
    mxArray* mxExportedFunctionsChecksum = mxCreateString("");
    mwSize exp_dims[2] = { 0, 1 };

    mxArray* mxExportedFunctionsUsedByThisChart = mxCreateCellArray(2, exp_dims);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsUsedByThisChart",
               mxExportedFunctionsUsedByThisChart);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsChecksum",
               mxExportedFunctionsChecksum);
  }

  return mxPostCodegenInfo;
}

static const mxArray *sf_get_sim_state_info_c40_RightInvariant_EKF(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x6'type','srcId','name','auxInfo'{{M[1],M[12],T\"dq\",},{M[1],M[13],T\"filter_selector\",},{M[1],M[11],T\"q\",},{M[1],M[5],T\"velocity\",},{M[1],M[15],T\"velocity_kinematic\",},{M[8],M[0],T\"is_active_c40_RightInvariant_EKF\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 6, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c40_RightInvariant_EKF_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc40_RightInvariant_EKFInstanceStruct *chartInstance =
      (SFc40_RightInvariant_EKFInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _RightInvariant_EKFMachineNumber_,
           40,
           1,
           1,
           0,
           11,
           0,
           0,
           0,
           0,
           11,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_RightInvariant_EKFMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_RightInvariant_EKFMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _RightInvariant_EKFMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"q");
          _SFD_SET_DATA_PROPS(1,1,1,0,"dq");
          _SFD_SET_DATA_PROPS(2,1,1,0,"w");
          _SFD_SET_DATA_PROPS(3,1,1,0,"contact");
          _SFD_SET_DATA_PROPS(4,1,1,0,"X");
          _SFD_SET_DATA_PROPS(5,1,1,0,"ekf_enabled");
          _SFD_SET_DATA_PROPS(6,2,0,1,"q");
          _SFD_SET_DATA_PROPS(7,2,0,1,"dq");
          _SFD_SET_DATA_PROPS(8,2,0,1,"velocity");
          _SFD_SET_DATA_PROPS(9,2,0,1,"velocity_kinematic");
          _SFD_SET_DATA_PROPS(10,2,0,1,"filter_selector");
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,0,5,0,0,0,0,0,6,3);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,2479);
        _SFD_CV_INIT_EML_IF(0,1,0,951,969,1154,1408);
        _SFD_CV_INIT_EML_IF(0,1,1,1154,1176,1363,1408);
        _SFD_CV_INIT_EML_IF(0,1,2,1488,1522,-1,1650);
        _SFD_CV_INIT_EML_IF(0,1,3,1667,1704,-1,1798);
        _SFD_CV_INIT_EML_IF(0,1,4,1811,1845,2132,2472);

        {
          static int condStart[] = { 1491, 1511 };

          static int condEnd[] = { 1507, 1522 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,0,1491,1522,2,0,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 1670, 1693 };

          static int condEnd[] = { 1689, 1704 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,1,1670,1704,2,2,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        {
          static int condStart[] = { 1814, 1834 };

          static int condEnd[] = { 1830, 1845 };

          static int pfixExpr[] = { 0, 1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,2,1814,1845,2,4,&(condStart[0]),&(condEnd[0]),
                                3,&(pfixExpr[0]));
        }

        _SFD_CV_INIT_EML_RELATIONAL(0,1,0,954,969,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(0,1,1,1161,1176,-1,0);
        _SFD_CV_INIT_SCRIPT(0,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(0,0,"p_VectorNav_to_LeftToeBottom",0,-1,407);
        _SFD_CV_INIT_SCRIPT_IF(0,0,60,85,150,403);
        _SFD_CV_INIT_SCRIPT(1,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(1,0,"J_VectorNav_to_LeftToeBottom",0,-1,408);
        _SFD_CV_INIT_SCRIPT_IF(1,0,60,85,150,404);
        _SFD_CV_INIT_SCRIPT(2,1,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(2,0,"skew",0,-1,156);
        _SFD_CV_INIT_SCRIPT(3,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(3,0,"p_VectorNav_to_RightToeBottom",0,-1,411);
        _SFD_CV_INIT_SCRIPT_IF(3,0,61,86,152,407);
        _SFD_CV_INIT_SCRIPT(4,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(4,0,"J_VectorNav_to_RightToeBottom",0,-1,412);
        _SFD_CV_INIT_SCRIPT_IF(4,0,61,86,152,408);
        _SFD_CV_INIT_SCRIPT(5,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(5,0,"R_VectorNav_to_Pelvis",0,-1,379);
        _SFD_CV_INIT_SCRIPT_IF(5,0,53,78,136,375);
        _SFD_CV_INIT_SCRIPT(6,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(6,0,"p_VectorNav_to_Pelvis",0,-1,379);
        _SFD_CV_INIT_SCRIPT_IF(6,0,53,78,136,375);
        _SFD_CV_INIT_SCRIPT(7,1,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(7,0,"Euler_to_Rotation",0,-1,160);
        _SFD_CV_INIT_SCRIPT(8,1,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(8,0,"Rz",0,-1,170);
        _SFD_CV_INIT_SCRIPT(9,1,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(9,0,"Ry",0,-1,166);
        _SFD_CV_INIT_SCRIPT(10,1,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(10,0,"Rx",0,-1,174);

        {
          unsigned int dimVector[1];
          dimVector[0]= 20U;
          _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c40_c_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 20U;
          _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c40_c_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c40_b_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 2U;
          _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c40_e_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[2];
          dimVector[0]= 7U;
          dimVector[1]= 7U;
          _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c40_d_sf_marshallOut,(MexInFcnForType)NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c40_sf_marshallOut,(MexInFcnForType)NULL);

        {
          unsigned int dimVector[1];
          dimVector[0]= 20U;
          _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c40_c_sf_marshallOut,(MexInFcnForType)
            c40_c_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 20U;
          _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c40_c_sf_marshallOut,(MexInFcnForType)
            c40_c_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c40_b_sf_marshallOut,(MexInFcnForType)
            c40_b_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c40_b_sf_marshallOut,(MexInFcnForType)
            c40_b_sf_marshallIn);
        }

        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c40_sf_marshallOut,(MexInFcnForType)c40_sf_marshallIn);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _RightInvariant_EKFMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc40_RightInvariant_EKFInstanceStruct *chartInstance =
      (SFc40_RightInvariant_EKFInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(6U, *chartInstance->c40_q);
        _SFD_SET_DATA_VALUE_PTR(7U, *chartInstance->c40_dq);
        _SFD_SET_DATA_VALUE_PTR(0U, *chartInstance->c40_b_q);
        _SFD_SET_DATA_VALUE_PTR(1U, *chartInstance->c40_b_dq);
        _SFD_SET_DATA_VALUE_PTR(2U, *chartInstance->c40_w);
        _SFD_SET_DATA_VALUE_PTR(3U, *chartInstance->c40_contact);
        _SFD_SET_DATA_VALUE_PTR(4U, *chartInstance->c40_X);
        _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c40_ekf_enabled);
        _SFD_SET_DATA_VALUE_PTR(8U, *chartInstance->c40_velocity);
        _SFD_SET_DATA_VALUE_PTR(9U, *chartInstance->c40_velocity_kinematic);
        _SFD_SET_DATA_VALUE_PTR(10U, chartInstance->c40_filter_selector);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sIsERV9pAUW4VxZZDP1pwUC";
}

static void sf_opaque_initialize_c40_RightInvariant_EKF(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc40_RightInvariant_EKFInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c40_RightInvariant_EKF
    ((SFc40_RightInvariant_EKFInstanceStruct*) chartInstanceVar);
  initialize_c40_RightInvariant_EKF((SFc40_RightInvariant_EKFInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c40_RightInvariant_EKF(void *chartInstanceVar)
{
  enable_c40_RightInvariant_EKF((SFc40_RightInvariant_EKFInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c40_RightInvariant_EKF(void *chartInstanceVar)
{
  disable_c40_RightInvariant_EKF((SFc40_RightInvariant_EKFInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c40_RightInvariant_EKF(void *chartInstanceVar)
{
  sf_gateway_c40_RightInvariant_EKF((SFc40_RightInvariant_EKFInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c40_RightInvariant_EKF(SimStruct*
  S)
{
  return get_sim_state_c40_RightInvariant_EKF
    ((SFc40_RightInvariant_EKFInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c40_RightInvariant_EKF(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c40_RightInvariant_EKF((SFc40_RightInvariant_EKFInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c40_RightInvariant_EKF(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc40_RightInvariant_EKFInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_RightInvariant_EKF_optimization_info();
    }

    finalize_c40_RightInvariant_EKF((SFc40_RightInvariant_EKFInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc40_RightInvariant_EKF((SFc40_RightInvariant_EKFInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c40_RightInvariant_EKF(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c40_RightInvariant_EKF
      ((SFc40_RightInvariant_EKFInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

static void mdlSetWorkWidths_c40_RightInvariant_EKF(SimStruct *S)
{
  /* Set overwritable ports for inplace optimization */
  ssSetInputPortOverWritable(S, 0, 1);
  ssSetOutputPortOverwritesInputPort(S, 1, 0);
  ssSetInputPortOverWritable(S, 1, 1);
  ssSetOutputPortOverwritesInputPort(S, 2, 1);
  ssSetStatesModifiedOnlyInUpdate(S, 1);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_RightInvariant_EKF_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      40);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,40,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 40);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,40);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,40,6);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,40,5);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=5; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 6; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,40);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3896437937U));
  ssSetChecksum1(S,(3482905204U));
  ssSetChecksum2(S,(318929305U));
  ssSetChecksum3(S,(1157694752U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c40_RightInvariant_EKF(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c40_RightInvariant_EKF(SimStruct *S)
{
  SFc40_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc40_RightInvariant_EKFInstanceStruct *)utMalloc(sizeof
    (SFc40_RightInvariant_EKFInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc40_RightInvariant_EKFInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c40_RightInvariant_EKF;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c40_RightInvariant_EKF;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c40_RightInvariant_EKF;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c40_RightInvariant_EKF;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c40_RightInvariant_EKF;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c40_RightInvariant_EKF;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c40_RightInvariant_EKF;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c40_RightInvariant_EKF;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c40_RightInvariant_EKF;
  chartInstance->chartInfo.mdlStart = mdlStart_c40_RightInvariant_EKF;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c40_RightInvariant_EKF;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
  chartInstance->S = S;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  chart_debug_initialization(S,1);
  mdl_start_c40_RightInvariant_EKF(chartInstance);
}

void c40_RightInvariant_EKF_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c40_RightInvariant_EKF(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c40_RightInvariant_EKF(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c40_RightInvariant_EKF(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c40_RightInvariant_EKF_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
