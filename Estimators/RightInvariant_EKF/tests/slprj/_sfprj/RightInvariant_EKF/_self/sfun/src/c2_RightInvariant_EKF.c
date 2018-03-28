/* Include files */

#include "RightInvariant_EKF_sfun.h"
#include "c2_RightInvariant_EKF.h"
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
static const char * c2_debug_family_names[12] = { "R", "p", "v", "dR", "dL",
  "nargin", "nargout", "quaternion", "velocity", "encoders", "contact", "X_init"
};

static const char * c2_b_debug_family_names[4] = { "nargin", "nargout", "v",
  "Ax" };

static const char * c2_c_debug_family_names[6] = { "qv", "qw", "nargin",
  "nargout", "q", "R" };

static const char * c2_d_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

static const char * c2_e_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

/* Function Declarations */
static void initialize_c2_RightInvariant_EKF
  (SFc2_RightInvariant_EKFInstanceStruct *chartInstance);
static void initialize_params_c2_RightInvariant_EKF
  (SFc2_RightInvariant_EKFInstanceStruct *chartInstance);
static void enable_c2_RightInvariant_EKF(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance);
static void disable_c2_RightInvariant_EKF(SFc2_RightInvariant_EKFInstanceStruct *
  chartInstance);
static void c2_update_debugger_state_c2_RightInvariant_EKF
  (SFc2_RightInvariant_EKFInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c2_RightInvariant_EKF
  (SFc2_RightInvariant_EKFInstanceStruct *chartInstance);
static void set_sim_state_c2_RightInvariant_EKF
  (SFc2_RightInvariant_EKFInstanceStruct *chartInstance, const mxArray *c2_st);
static void finalize_c2_RightInvariant_EKF(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance);
static void sf_gateway_c2_RightInvariant_EKF
  (SFc2_RightInvariant_EKFInstanceStruct *chartInstance);
static void mdl_start_c2_RightInvariant_EKF
  (SFc2_RightInvariant_EKFInstanceStruct *chartInstance);
static void initSimStructsc2_RightInvariant_EKF
  (SFc2_RightInvariant_EKFInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber, uint32_T c2_instanceNumber);
static const mxArray *c2_sf_marshallOut(void *chartInstanceVoid, void *c2_inData);
static void c2_emlrt_marshallIn(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c2_b_X_init, const char_T *c2_identifier,
  real_T c2_y[49]);
static void c2_b_emlrt_marshallIn(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  real_T c2_y[49]);
static void c2_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_b_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static const mxArray *c2_c_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static const mxArray *c2_d_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static const mxArray *c2_e_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static const mxArray *c2_f_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static real_T c2_c_emlrt_marshallIn(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static void c2_d_emlrt_marshallIn(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  real_T c2_y[3]);
static void c2_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static const mxArray *c2_g_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static void c2_e_emlrt_marshallIn(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  real_T c2_y[9]);
static void c2_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static void c2_f_emlrt_marshallIn(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  real_T c2_y[4]);
static void c2_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static void c2_g_emlrt_marshallIn(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  real_T c2_y[14]);
static void c2_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static void c2_error(SFc2_RightInvariant_EKFInstanceStruct *chartInstance);
static const mxArray *c2_h_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData);
static int32_T c2_h_emlrt_marshallIn(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void c2_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData);
static uint8_T c2_i_emlrt_marshallIn(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_RightInvariant_EKF, const
  char_T *c2_identifier);
static uint8_T c2_j_emlrt_marshallIn(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static void init_dsm_address_info(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c2_RightInvariant_EKF
  (SFc2_RightInvariant_EKFInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc2_RightInvariant_EKF(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_is_active_c2_RightInvariant_EKF = 0U;
}

static void initialize_params_c2_RightInvariant_EKF
  (SFc2_RightInvariant_EKFInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c2_RightInvariant_EKF(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_RightInvariant_EKF(SFc2_RightInvariant_EKFInstanceStruct *
  chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c2_update_debugger_state_c2_RightInvariant_EKF
  (SFc2_RightInvariant_EKFInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c2_RightInvariant_EKF
  (SFc2_RightInvariant_EKFInstanceStruct *chartInstance)
{
  const mxArray *c2_st;
  const mxArray *c2_y = NULL;
  const mxArray *c2_b_y = NULL;
  uint8_T c2_hoistedGlobal;
  const mxArray *c2_c_y = NULL;
  c2_st = NULL;
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellmatrix(2, 1), false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", *chartInstance->c2_X_init, 0, 0U, 1U,
    0U, 2, 7, 7), false);
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_hoistedGlobal = chartInstance->c2_is_active_c2_RightInvariant_EKF;
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", &c2_hoistedGlobal, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c2_y, 1, c2_c_y);
  sf_mex_assign(&c2_st, c2_y, false);
  return c2_st;
}

static void set_sim_state_c2_RightInvariant_EKF
  (SFc2_RightInvariant_EKFInstanceStruct *chartInstance, const mxArray *c2_st)
{
  const mxArray *c2_u;
  real_T c2_dv0[49];
  int32_T c2_i0;
  chartInstance->c2_doneDoubleBufferReInit = true;
  c2_u = sf_mex_dup(c2_st);
  c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("X_init", c2_u, 0)),
                      "X_init", c2_dv0);
  for (c2_i0 = 0; c2_i0 < 49; c2_i0++) {
    (*chartInstance->c2_X_init)[c2_i0] = c2_dv0[c2_i0];
  }

  chartInstance->c2_is_active_c2_RightInvariant_EKF = c2_i_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c2_RightInvariant_EKF",
       c2_u, 1)), "is_active_c2_RightInvariant_EKF");
  sf_mex_destroy(&c2_u);
  c2_update_debugger_state_c2_RightInvariant_EKF(chartInstance);
  sf_mex_destroy(&c2_st);
}

static void finalize_c2_RightInvariant_EKF(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c2_RightInvariant_EKF
  (SFc2_RightInvariant_EKFInstanceStruct *chartInstance)
{
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  real_T c2_b_quaternion[4];
  int32_T c2_i7;
  real_T c2_b_velocity[3];
  int32_T c2_i8;
  real_T c2_b_encoders[14];
  uint32_T c2_debug_family_var_map[12];
  real_T c2_b_contact[2];
  real_T c2_R[9];
  real_T c2_p[3];
  real_T c2_v[3];
  real_T c2_dR[3];
  real_T c2_dL[3];
  real_T c2_nargin = 4.0;
  real_T c2_nargout = 1.0;
  real_T c2_b_X_init[49];
  int32_T c2_i9;
  uint32_T c2_b_debug_family_var_map[6];
  real_T c2_q[4];
  real_T c2_qv[3];
  real_T c2_qw;
  real_T c2_b_nargin = 1.0;
  real_T c2_b_nargout = 1.0;
  int32_T c2_i10;
  real_T c2_a;
  real_T c2_b_a;
  real_T c2_c_a;
  real_T c2_x;
  real_T c2_d_a;
  real_T c2_c;
  boolean_T c2_b_p;
  real_T c2_e_a;
  int32_T c2_i11;
  int32_T c2_i12;
  real_T c2_y[9];
  static real_T c2_b[9] = { 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0 };

  uint32_T c2_c_debug_family_var_map[4];
  real_T c2_b_v[3];
  real_T c2_c_nargin = 1.0;
  real_T c2_c_nargout = 1.0;
  real_T c2_Ax[9];
  real_T c2_f_a;
  int32_T c2_i13;
  int32_T c2_i14;
  real_T c2_b_b[9];
  int32_T c2_i15;
  int32_T c2_i16;
  real_T c2_g_a[3];
  int32_T c2_i17;
  real_T c2_c_b[3];
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i20;
  int32_T c2_i21;
  real_T c2_b_y[9];
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i30;
  real_T c2_var1[14];
  int32_T c2_i31;
  real_T c2_d_nargin = 1.0;
  real_T c2_b_var1[14];
  real_T c2_d_nargout = 1.0;
  real_T c2_e_nargin = 1.0;
  real_T c2_c_var1[14];
  real_T c2_e_nargout = 1.0;
  real_T c2_output1[3];
  real_T c2_f_nargin = 1.0;
  real_T c2_f_nargout = 1.0;
  real_T c2_b_output1[3];
  real_T c2_c_output1[3];
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i45;
  int32_T c2_i46;
  real_T c2_c_y[3];
  int32_T c2_i47;
  int32_T c2_i48;
  int32_T c2_i49;
  int32_T c2_i50;
  int32_T c2_i51;
  int32_T c2_i52;
  int32_T c2_i53;
  real_T c2_d_var1[14];
  real_T c2_g_nargin = 1.0;
  real_T c2_g_nargout = 1.0;
  real_T c2_d_output1[3];
  int32_T c2_i54;
  int32_T c2_i55;
  int32_T c2_i56;
  int32_T c2_i57;
  int32_T c2_i58;
  int32_T c2_i59;
  int32_T c2_i60;
  int32_T c2_i61;
  int32_T c2_i62;
  int32_T c2_i63;
  int32_T c2_i64;
  int32_T c2_i65;
  int32_T c2_i66;
  int32_T c2_i67;
  int32_T c2_i68;
  int32_T c2_i69;
  int32_T c2_i70;
  int32_T c2_i71;
  static real_T c2_dv1[7] = { 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0 };

  int32_T c2_i72;
  int32_T c2_i73;
  static real_T c2_dv2[7] = { 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0 };

  int32_T c2_i74;
  int32_T c2_i75;
  static real_T c2_dv3[7] = { 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0 };

  int32_T c2_i76;
  static real_T c2_dv4[7] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T c2_i77;
  int32_T c2_i78;
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 1U, chartInstance->c2_sfEvent);
  for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c2_contact)[c2_i1], 3U, 1U, 0U,
                          chartInstance->c2_sfEvent, false);
  }

  for (c2_i2 = 0; c2_i2 < 14; c2_i2++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c2_encoders)[c2_i2], 2U, 1U, 0U,
                          chartInstance->c2_sfEvent, false);
  }

  for (c2_i3 = 0; c2_i3 < 3; c2_i3++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c2_velocity)[c2_i3], 1U, 1U, 0U,
                          chartInstance->c2_sfEvent, false);
  }

  for (c2_i4 = 0; c2_i4 < 4; c2_i4++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c2_quaternion)[c2_i4], 0U, 1U, 0U,
                          chartInstance->c2_sfEvent, false);
  }

  chartInstance->c2_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 1U, chartInstance->c2_sfEvent);
  for (c2_i5 = 0; c2_i5 < 4; c2_i5++) {
    c2_b_quaternion[c2_i5] = (*chartInstance->c2_quaternion)[c2_i5];
  }

  for (c2_i6 = 0; c2_i6 < 3; c2_i6++) {
    c2_b_velocity[c2_i6] = (*chartInstance->c2_velocity)[c2_i6];
  }

  for (c2_i7 = 0; c2_i7 < 14; c2_i7++) {
    c2_b_encoders[c2_i7] = (*chartInstance->c2_encoders)[c2_i7];
  }

  for (c2_i8 = 0; c2_i8 < 2; c2_i8++) {
    c2_b_contact[c2_i8] = (*chartInstance->c2_contact)[c2_i8];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 12U, 12U, c2_debug_family_names,
    c2_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_R, 0U, c2_g_sf_marshallOut,
    c2_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_p, 1U, c2_d_sf_marshallOut,
    c2_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_v, 2U, c2_d_sf_marshallOut,
    c2_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_dR, 3U, c2_d_sf_marshallOut,
    c2_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_dL, 4U, c2_d_sf_marshallOut,
    c2_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_nargin, 5U, c2_f_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_nargout, 6U, c2_f_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c2_b_quaternion, 7U, c2_e_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c2_b_velocity, 8U, c2_d_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c2_b_encoders, 9U, c2_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c2_b_contact, 10U, c2_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_b_X_init, 11U, c2_sf_marshallOut,
    c2_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 3);
  for (c2_i9 = 0; c2_i9 < 4; c2_i9++) {
    c2_q[c2_i9] = c2_b_quaternion[c2_i9];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 6U, 6U, c2_c_debug_family_names,
    c2_b_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_qv, 0U, c2_d_sf_marshallOut,
    c2_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_qw, 1U, c2_f_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_b_nargin, 2U, c2_f_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_b_nargout, 3U, c2_f_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_q, 4U, c2_e_sf_marshallOut,
    c2_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_R, 5U, c2_g_sf_marshallOut,
    c2_d_sf_marshallIn);
  CV_SCRIPT_FCN(0, 0);
  _SFD_SCRIPT_CALL(0U, chartInstance->c2_sfEvent, 8);
  for (c2_i10 = 0; c2_i10 < 3; c2_i10++) {
    c2_qv[c2_i10] = c2_q[c2_i10];
  }

  _SFD_SCRIPT_CALL(0U, chartInstance->c2_sfEvent, 8);
  c2_qw = c2_q[3];
  _SFD_SCRIPT_CALL(0U, chartInstance->c2_sfEvent, 9);
  c2_a = c2_qw;
  c2_b_a = c2_a;
  c2_c_a = c2_b_a;
  c2_x = c2_c_a;
  c2_d_a = c2_x;
  c2_c = c2_d_a * c2_d_a;
  c2_b_p = false;
  if (c2_b_p) {
    c2_error(chartInstance);
  }

  c2_e_a = 2.0 * c2_c - 1.0;
  for (c2_i11 = 0; c2_i11 < 9; c2_i11++) {
    c2_y[c2_i11] = c2_e_a * c2_b[c2_i11];
  }

  for (c2_i12 = 0; c2_i12 < 3; c2_i12++) {
    c2_b_v[c2_i12] = c2_qv[c2_i12];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c2_b_debug_family_names,
    c2_c_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_c_nargin, 0U, c2_f_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_c_nargout, 1U, c2_f_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_b_v, 2U, c2_d_sf_marshallOut,
    c2_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_Ax, 3U, c2_g_sf_marshallOut,
    c2_d_sf_marshallIn);
  CV_SCRIPT_FCN(1, 0);
  _SFD_SCRIPT_CALL(1U, chartInstance->c2_sfEvent, 3);
  c2_Ax[0] = 0.0;
  c2_Ax[3] = -c2_b_v[2];
  c2_Ax[6] = c2_b_v[1];
  c2_Ax[1] = c2_b_v[2];
  c2_Ax[4] = 0.0;
  c2_Ax[7] = -c2_b_v[0];
  c2_Ax[2] = -c2_b_v[1];
  c2_Ax[5] = c2_b_v[0];
  c2_Ax[8] = 0.0;
  _SFD_SCRIPT_CALL(1U, chartInstance->c2_sfEvent, -3);
  _SFD_SYMBOL_SCOPE_POP();
  c2_f_a = 2.0 * c2_qw;
  for (c2_i13 = 0; c2_i13 < 9; c2_i13++) {
    c2_b_b[c2_i13] = c2_Ax[c2_i13];
  }

  for (c2_i14 = 0; c2_i14 < 9; c2_i14++) {
    c2_b_b[c2_i14] *= c2_f_a;
  }

  for (c2_i15 = 0; c2_i15 < 3; c2_i15++) {
    c2_g_a[c2_i15] = c2_qv[c2_i15];
  }

  for (c2_i16 = 0; c2_i16 < 3; c2_i16++) {
    c2_c_b[c2_i16] = c2_qv[c2_i16];
  }

  for (c2_i17 = 0; c2_i17 < 3; c2_i17++) {
    c2_i19 = 0;
    for (c2_i20 = 0; c2_i20 < 3; c2_i20++) {
      c2_b_y[c2_i19 + c2_i17] = c2_g_a[c2_i17] * c2_c_b[c2_i20];
      c2_i19 += 3;
    }
  }

  for (c2_i18 = 0; c2_i18 < 9; c2_i18++) {
    c2_b_y[c2_i18] *= 2.0;
  }

  for (c2_i21 = 0; c2_i21 < 9; c2_i21++) {
    c2_R[c2_i21] = (c2_y[c2_i21] - c2_b_b[c2_i21]) + c2_b_y[c2_i21];
  }

  _SFD_SCRIPT_CALL(0U, chartInstance->c2_sfEvent, -9);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 4);
  for (c2_i22 = 0; c2_i22 < 3; c2_i22++) {
    c2_p[c2_i22] = 0.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 5);
  for (c2_i23 = 0; c2_i23 < 9; c2_i23++) {
    c2_y[c2_i23] = c2_R[c2_i23];
  }

  for (c2_i24 = 0; c2_i24 < 3; c2_i24++) {
    c2_g_a[c2_i24] = c2_b_velocity[c2_i24];
  }

  for (c2_i25 = 0; c2_i25 < 3; c2_i25++) {
    c2_v[c2_i25] = 0.0;
  }

  for (c2_i26 = 0; c2_i26 < 3; c2_i26++) {
    c2_v[c2_i26] = 0.0;
    c2_i27 = 0;
    for (c2_i28 = 0; c2_i28 < 3; c2_i28++) {
      c2_v[c2_i26] += c2_y[c2_i27 + c2_i26] * c2_g_a[c2_i28];
      c2_i27 += 3;
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 7);
  if (CV_EML_IF(0, 1, 0, CV_RELATIONAL_EVAL(4U, 0U, 0, c2_b_contact[0], 1.0, -1,
        0U, c2_b_contact[0] == 1.0))) {
    _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 9);
    for (c2_i29 = 0; c2_i29 < 14; c2_i29++) {
      c2_var1[c2_i29] = c2_b_encoders[c2_i29];
    }

    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c2_d_debug_family_names,
      c2_c_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_d_nargin, 0U, c2_f_sf_marshallOut,
      c2_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_d_nargout, 1U, c2_f_sf_marshallOut,
      c2_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_var1, 2U, c2_c_sf_marshallOut,
      c2_f_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_output1, 3U, c2_d_sf_marshallOut,
      c2_c_sf_marshallIn);
    CV_SCRIPT_FCN(2, 0);
    _SFD_SCRIPT_CALL(2U, chartInstance->c2_sfEvent, 2);
    CV_SCRIPT_IF(2, 0, false);
    _SFD_SCRIPT_CALL(2U, chartInstance->c2_sfEvent, 5);
    _SFD_SCRIPT_CALL(2U, chartInstance->c2_sfEvent, 7);
    for (c2_i32 = 0; c2_i32 < 3; c2_i32++) {
      c2_output1[c2_i32] = 0.0;
    }

    _SFD_SCRIPT_CALL(2U, chartInstance->c2_sfEvent, 10);
    p_VectorNav_to_LeftToeBottom_src(c2_output1, c2_var1);
    _SFD_SCRIPT_CALL(2U, chartInstance->c2_sfEvent, -10);
    _SFD_SYMBOL_SCOPE_POP();
    for (c2_i35 = 0; c2_i35 < 9; c2_i35++) {
      c2_y[c2_i35] = -c2_R[c2_i35];
    }

    for (c2_i37 = 0; c2_i37 < 3; c2_i37++) {
      c2_g_a[c2_i37] = c2_output1[c2_i37];
    }

    for (c2_i40 = 0; c2_i40 < 3; c2_i40++) {
      c2_p[c2_i40] = 0.0;
    }

    for (c2_i43 = 0; c2_i43 < 3; c2_i43++) {
      c2_p[c2_i43] = 0.0;
      c2_i47 = 0;
      for (c2_i49 = 0; c2_i49 < 3; c2_i49++) {
        c2_p[c2_i43] += c2_y[c2_i47 + c2_i43] * c2_g_a[c2_i49];
        c2_i47 += 3;
      }
    }
  } else {
    _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 10);
    if (CV_EML_IF(0, 1, 1, CV_RELATIONAL_EVAL(4U, 0U, 1, c2_b_contact[1], 1.0,
          -1, 0U, c2_b_contact[1] == 1.0))) {
      _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 12);
      for (c2_i30 = 0; c2_i30 < 14; c2_i30++) {
        c2_b_var1[c2_i30] = c2_b_encoders[c2_i30];
      }

      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c2_e_debug_family_names,
        c2_c_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_e_nargin, 0U, c2_f_sf_marshallOut,
        c2_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_e_nargout, 1U,
        c2_f_sf_marshallOut, c2_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_b_var1, 2U, c2_c_sf_marshallOut,
        c2_f_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_b_output1, 3U, c2_d_sf_marshallOut,
        c2_c_sf_marshallIn);
      CV_SCRIPT_FCN(3, 0);
      _SFD_SCRIPT_CALL(3U, chartInstance->c2_sfEvent, 2);
      CV_SCRIPT_IF(3, 0, false);
      _SFD_SCRIPT_CALL(3U, chartInstance->c2_sfEvent, 5);
      _SFD_SCRIPT_CALL(3U, chartInstance->c2_sfEvent, 7);
      for (c2_i33 = 0; c2_i33 < 3; c2_i33++) {
        c2_b_output1[c2_i33] = 0.0;
      }

      _SFD_SCRIPT_CALL(3U, chartInstance->c2_sfEvent, 10);
      p_VectorNav_to_RightToeBottom_src(c2_b_output1, c2_b_var1);
      _SFD_SCRIPT_CALL(3U, chartInstance->c2_sfEvent, -10);
      _SFD_SYMBOL_SCOPE_POP();
      for (c2_i36 = 0; c2_i36 < 9; c2_i36++) {
        c2_y[c2_i36] = -c2_R[c2_i36];
      }

      for (c2_i39 = 0; c2_i39 < 3; c2_i39++) {
        c2_g_a[c2_i39] = c2_b_output1[c2_i39];
      }

      for (c2_i42 = 0; c2_i42 < 3; c2_i42++) {
        c2_p[c2_i42] = 0.0;
      }

      for (c2_i45 = 0; c2_i45 < 3; c2_i45++) {
        c2_p[c2_i45] = 0.0;
        c2_i51 = 0;
        for (c2_i52 = 0; c2_i52 < 3; c2_i52++) {
          c2_p[c2_i45] += c2_y[c2_i51 + c2_i45] * c2_g_a[c2_i52];
          c2_i51 += 3;
        }
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 16);
  for (c2_i31 = 0; c2_i31 < 14; c2_i31++) {
    c2_c_var1[c2_i31] = c2_b_encoders[c2_i31];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c2_e_debug_family_names,
    c2_c_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_f_nargin, 0U, c2_f_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_f_nargout, 1U, c2_f_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_c_var1, 2U, c2_c_sf_marshallOut,
    c2_f_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_c_output1, 3U, c2_d_sf_marshallOut,
    c2_c_sf_marshallIn);
  CV_SCRIPT_FCN(3, 0);
  _SFD_SCRIPT_CALL(3U, chartInstance->c2_sfEvent, 2);
  CV_SCRIPT_IF(3, 0, false);
  _SFD_SCRIPT_CALL(3U, chartInstance->c2_sfEvent, 5);
  _SFD_SCRIPT_CALL(3U, chartInstance->c2_sfEvent, 7);
  for (c2_i34 = 0; c2_i34 < 3; c2_i34++) {
    c2_c_output1[c2_i34] = 0.0;
  }

  _SFD_SCRIPT_CALL(3U, chartInstance->c2_sfEvent, 10);
  p_VectorNav_to_RightToeBottom_src(c2_c_output1, c2_c_var1);
  _SFD_SCRIPT_CALL(3U, chartInstance->c2_sfEvent, -10);
  _SFD_SYMBOL_SCOPE_POP();
  for (c2_i38 = 0; c2_i38 < 9; c2_i38++) {
    c2_y[c2_i38] = c2_R[c2_i38];
  }

  for (c2_i41 = 0; c2_i41 < 3; c2_i41++) {
    c2_g_a[c2_i41] = c2_c_output1[c2_i41];
  }

  for (c2_i44 = 0; c2_i44 < 3; c2_i44++) {
    c2_c_y[c2_i44] = 0.0;
    c2_i48 = 0;
    for (c2_i50 = 0; c2_i50 < 3; c2_i50++) {
      c2_c_y[c2_i44] += c2_y[c2_i48 + c2_i44] * c2_g_a[c2_i50];
      c2_i48 += 3;
    }
  }

  for (c2_i46 = 0; c2_i46 < 3; c2_i46++) {
    c2_dR[c2_i46] = c2_p[c2_i46] + c2_c_y[c2_i46];
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 17);
  for (c2_i53 = 0; c2_i53 < 14; c2_i53++) {
    c2_d_var1[c2_i53] = c2_b_encoders[c2_i53];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c2_d_debug_family_names,
    c2_c_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_g_nargin, 0U, c2_f_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c2_g_nargout, 1U, c2_f_sf_marshallOut,
    c2_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_d_var1, 2U, c2_c_sf_marshallOut,
    c2_f_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c2_d_output1, 3U, c2_d_sf_marshallOut,
    c2_c_sf_marshallIn);
  CV_SCRIPT_FCN(2, 0);
  _SFD_SCRIPT_CALL(2U, chartInstance->c2_sfEvent, 2);
  CV_SCRIPT_IF(2, 0, false);
  _SFD_SCRIPT_CALL(2U, chartInstance->c2_sfEvent, 5);
  _SFD_SCRIPT_CALL(2U, chartInstance->c2_sfEvent, 7);
  for (c2_i54 = 0; c2_i54 < 3; c2_i54++) {
    c2_d_output1[c2_i54] = 0.0;
  }

  _SFD_SCRIPT_CALL(2U, chartInstance->c2_sfEvent, 10);
  p_VectorNav_to_LeftToeBottom_src(c2_d_output1, c2_d_var1);
  _SFD_SCRIPT_CALL(2U, chartInstance->c2_sfEvent, -10);
  _SFD_SYMBOL_SCOPE_POP();
  for (c2_i55 = 0; c2_i55 < 9; c2_i55++) {
    c2_y[c2_i55] = c2_R[c2_i55];
  }

  for (c2_i56 = 0; c2_i56 < 3; c2_i56++) {
    c2_g_a[c2_i56] = c2_d_output1[c2_i56];
  }

  for (c2_i57 = 0; c2_i57 < 3; c2_i57++) {
    c2_c_y[c2_i57] = 0.0;
    c2_i59 = 0;
    for (c2_i60 = 0; c2_i60 < 3; c2_i60++) {
      c2_c_y[c2_i57] += c2_y[c2_i59 + c2_i57] * c2_g_a[c2_i60];
      c2_i59 += 3;
    }
  }

  for (c2_i58 = 0; c2_i58 < 3; c2_i58++) {
    c2_dL[c2_i58] = c2_p[c2_i58] + c2_c_y[c2_i58];
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, 20);
  c2_i61 = 0;
  c2_i62 = 0;
  for (c2_i63 = 0; c2_i63 < 3; c2_i63++) {
    for (c2_i65 = 0; c2_i65 < 3; c2_i65++) {
      c2_b_X_init[c2_i65 + c2_i61] = c2_R[c2_i65 + c2_i62];
    }

    c2_i61 += 7;
    c2_i62 += 3;
  }

  for (c2_i64 = 0; c2_i64 < 3; c2_i64++) {
    c2_b_X_init[c2_i64 + 21] = c2_v[c2_i64];
  }

  for (c2_i66 = 0; c2_i66 < 3; c2_i66++) {
    c2_b_X_init[c2_i66 + 28] = c2_p[c2_i66];
  }

  for (c2_i67 = 0; c2_i67 < 3; c2_i67++) {
    c2_b_X_init[c2_i67 + 35] = c2_dR[c2_i67];
  }

  for (c2_i68 = 0; c2_i68 < 3; c2_i68++) {
    c2_b_X_init[c2_i68 + 42] = c2_dL[c2_i68];
  }

  c2_i69 = 0;
  for (c2_i70 = 0; c2_i70 < 7; c2_i70++) {
    c2_b_X_init[c2_i69 + 3] = c2_dv1[c2_i70];
    c2_i69 += 7;
  }

  c2_i71 = 0;
  for (c2_i72 = 0; c2_i72 < 7; c2_i72++) {
    c2_b_X_init[c2_i71 + 4] = c2_dv2[c2_i72];
    c2_i71 += 7;
  }

  c2_i73 = 0;
  for (c2_i74 = 0; c2_i74 < 7; c2_i74++) {
    c2_b_X_init[c2_i73 + 5] = c2_dv3[c2_i74];
    c2_i73 += 7;
  }

  c2_i75 = 0;
  for (c2_i76 = 0; c2_i76 < 7; c2_i76++) {
    c2_b_X_init[c2_i75 + 6] = c2_dv4[c2_i76];
    c2_i75 += 7;
  }

  _SFD_EML_CALL(0U, chartInstance->c2_sfEvent, -20);
  _SFD_SYMBOL_SCOPE_POP();
  for (c2_i77 = 0; c2_i77 < 49; c2_i77++) {
    (*chartInstance->c2_X_init)[c2_i77] = c2_b_X_init[c2_i77];
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c2_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_RightInvariant_EKFMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  for (c2_i78 = 0; c2_i78 < 49; c2_i78++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c2_X_init)[c2_i78], 4U, 1U, 0U,
                          chartInstance->c2_sfEvent, false);
  }
}

static void mdl_start_c2_RightInvariant_EKF
  (SFc2_RightInvariant_EKFInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void initSimStructsc2_RightInvariant_EKF
  (SFc2_RightInvariant_EKFInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber, uint32_T c2_instanceNumber)
{
  (void)c2_machineNumber;
  _SFD_SCRIPT_TRANSLATION(c2_chartNumber, c2_instanceNumber, 0U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\utils\\+Angles\\Quaternion_to_Rotation.m"));
  _SFD_SCRIPT_TRANSLATION(c2_chartNumber, c2_instanceNumber, 1U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\utils\\+Angles\\skew.m"));
  _SFD_SCRIPT_TRANSLATION(c2_chartNumber, c2_instanceNumber, 2U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_Model\\gen\\kin\\m\\p_VectorNav_to_LeftToeBottom.m"));
  _SFD_SCRIPT_TRANSLATION(c2_chartNumber, c2_instanceNumber, 3U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_Model\\gen\\kin\\m\\p_VectorNav_to_RightToeBottom.m"));
}

static const mxArray *c2_sf_marshallOut(void *chartInstanceVoid, void *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  int32_T c2_i79;
  int32_T c2_i80;
  const mxArray *c2_y = NULL;
  int32_T c2_i81;
  real_T c2_u[49];
  SFc2_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc2_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  c2_i79 = 0;
  for (c2_i80 = 0; c2_i80 < 7; c2_i80++) {
    for (c2_i81 = 0; c2_i81 < 7; c2_i81++) {
      c2_u[c2_i81 + c2_i79] = (*(real_T (*)[49])c2_inData)[c2_i81 + c2_i79];
    }

    c2_i79 += 7;
  }

  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_u, 0, 0U, 1U, 0U, 2, 7, 7), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static void c2_emlrt_marshallIn(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c2_b_X_init, const char_T *c2_identifier,
  real_T c2_y[49])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_X_init), &c2_thisId, c2_y);
  sf_mex_destroy(&c2_b_X_init);
}

static void c2_b_emlrt_marshallIn(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  real_T c2_y[49])
{
  real_T c2_dv5[49];
  int32_T c2_i82;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_dv5, 1, 0, 0U, 1, 0U, 2, 7, 7);
  for (c2_i82 = 0; c2_i82 < 49; c2_i82++) {
    c2_y[c2_i82] = c2_dv5[c2_i82];
  }

  sf_mex_destroy(&c2_u);
}

static void c2_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_b_X_init;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y[49];
  int32_T c2_i83;
  int32_T c2_i84;
  int32_T c2_i85;
  SFc2_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc2_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c2_b_X_init = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_X_init), &c2_thisId, c2_y);
  sf_mex_destroy(&c2_b_X_init);
  c2_i83 = 0;
  for (c2_i84 = 0; c2_i84 < 7; c2_i84++) {
    for (c2_i85 = 0; c2_i85 < 7; c2_i85++) {
      (*(real_T (*)[49])c2_outData)[c2_i85 + c2_i83] = c2_y[c2_i85 + c2_i83];
    }

    c2_i83 += 7;
  }

  sf_mex_destroy(&c2_mxArrayInData);
}

static const mxArray *c2_b_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  int32_T c2_i86;
  const mxArray *c2_y = NULL;
  real_T c2_u[2];
  SFc2_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc2_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  for (c2_i86 = 0; c2_i86 < 2; c2_i86++) {
    c2_u[c2_i86] = (*(real_T (*)[2])c2_inData)[c2_i86];
  }

  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_u, 0, 0U, 1U, 0U, 1, 2), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static const mxArray *c2_c_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  int32_T c2_i87;
  const mxArray *c2_y = NULL;
  real_T c2_u[14];
  SFc2_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc2_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  for (c2_i87 = 0; c2_i87 < 14; c2_i87++) {
    c2_u[c2_i87] = (*(real_T (*)[14])c2_inData)[c2_i87];
  }

  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_u, 0, 0U, 1U, 0U, 1, 14), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static const mxArray *c2_d_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  int32_T c2_i88;
  const mxArray *c2_y = NULL;
  real_T c2_u[3];
  SFc2_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc2_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  for (c2_i88 = 0; c2_i88 < 3; c2_i88++) {
    c2_u[c2_i88] = (*(real_T (*)[3])c2_inData)[c2_i88];
  }

  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_u, 0, 0U, 1U, 0U, 1, 3), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static const mxArray *c2_e_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  int32_T c2_i89;
  const mxArray *c2_y = NULL;
  real_T c2_u[4];
  SFc2_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc2_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  for (c2_i89 = 0; c2_i89 < 4; c2_i89++) {
    c2_u[c2_i89] = (*(real_T (*)[4])c2_inData)[c2_i89];
  }

  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_u, 0, 0U, 1U, 0U, 1, 4), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static const mxArray *c2_f_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  real_T c2_u;
  const mxArray *c2_y = NULL;
  SFc2_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc2_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  c2_u = *(real_T *)c2_inData;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", &c2_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static real_T c2_c_emlrt_marshallIn(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  real_T c2_y;
  real_T c2_d0;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_d0, 1, 0, 0U, 0, 0U, 0);
  c2_y = c2_d0;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_nargout;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y;
  SFc2_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc2_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c2_nargout = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_nargout), &c2_thisId);
  sf_mex_destroy(&c2_nargout);
  *(real_T *)c2_outData = c2_y;
  sf_mex_destroy(&c2_mxArrayInData);
}

static void c2_d_emlrt_marshallIn(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  real_T c2_y[3])
{
  real_T c2_dv6[3];
  int32_T c2_i90;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_dv6, 1, 0, 0U, 1, 0U, 1, 3);
  for (c2_i90 = 0; c2_i90 < 3; c2_i90++) {
    c2_y[c2_i90] = c2_dv6[c2_i90];
  }

  sf_mex_destroy(&c2_u);
}

static void c2_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_dL;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y[3];
  int32_T c2_i91;
  SFc2_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc2_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c2_dL = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_dL), &c2_thisId, c2_y);
  sf_mex_destroy(&c2_dL);
  for (c2_i91 = 0; c2_i91 < 3; c2_i91++) {
    (*(real_T (*)[3])c2_outData)[c2_i91] = c2_y[c2_i91];
  }

  sf_mex_destroy(&c2_mxArrayInData);
}

static const mxArray *c2_g_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  int32_T c2_i92;
  int32_T c2_i93;
  const mxArray *c2_y = NULL;
  int32_T c2_i94;
  real_T c2_u[9];
  SFc2_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc2_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  c2_i92 = 0;
  for (c2_i93 = 0; c2_i93 < 3; c2_i93++) {
    for (c2_i94 = 0; c2_i94 < 3; c2_i94++) {
      c2_u[c2_i94 + c2_i92] = (*(real_T (*)[9])c2_inData)[c2_i94 + c2_i92];
    }

    c2_i92 += 3;
  }

  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_u, 0, 0U, 1U, 0U, 2, 3, 3), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static void c2_e_emlrt_marshallIn(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  real_T c2_y[9])
{
  real_T c2_dv7[9];
  int32_T c2_i95;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_dv7, 1, 0, 0U, 1, 0U, 2, 3, 3);
  for (c2_i95 = 0; c2_i95 < 9; c2_i95++) {
    c2_y[c2_i95] = c2_dv7[c2_i95];
  }

  sf_mex_destroy(&c2_u);
}

static void c2_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_R;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y[9];
  int32_T c2_i96;
  int32_T c2_i97;
  int32_T c2_i98;
  SFc2_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc2_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c2_R = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_R), &c2_thisId, c2_y);
  sf_mex_destroy(&c2_R);
  c2_i96 = 0;
  for (c2_i97 = 0; c2_i97 < 3; c2_i97++) {
    for (c2_i98 = 0; c2_i98 < 3; c2_i98++) {
      (*(real_T (*)[9])c2_outData)[c2_i98 + c2_i96] = c2_y[c2_i98 + c2_i96];
    }

    c2_i96 += 3;
  }

  sf_mex_destroy(&c2_mxArrayInData);
}

static void c2_f_emlrt_marshallIn(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  real_T c2_y[4])
{
  real_T c2_dv8[4];
  int32_T c2_i99;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_dv8, 1, 0, 0U, 1, 0U, 1, 4);
  for (c2_i99 = 0; c2_i99 < 4; c2_i99++) {
    c2_y[c2_i99] = c2_dv8[c2_i99];
  }

  sf_mex_destroy(&c2_u);
}

static void c2_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_q;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y[4];
  int32_T c2_i100;
  SFc2_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc2_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c2_q = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_q), &c2_thisId, c2_y);
  sf_mex_destroy(&c2_q);
  for (c2_i100 = 0; c2_i100 < 4; c2_i100++) {
    (*(real_T (*)[4])c2_outData)[c2_i100] = c2_y[c2_i100];
  }

  sf_mex_destroy(&c2_mxArrayInData);
}

static void c2_g_emlrt_marshallIn(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  real_T c2_y[14])
{
  real_T c2_dv9[14];
  int32_T c2_i101;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_dv9, 1, 0, 0U, 1, 0U, 1, 14);
  for (c2_i101 = 0; c2_i101 < 14; c2_i101++) {
    c2_y[c2_i101] = c2_dv9[c2_i101];
  }

  sf_mex_destroy(&c2_u);
}

static void c2_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_var1;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  real_T c2_y[14];
  int32_T c2_i102;
  SFc2_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc2_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c2_var1 = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_var1), &c2_thisId, c2_y);
  sf_mex_destroy(&c2_var1);
  for (c2_i102 = 0; c2_i102 < 14; c2_i102++) {
    (*(real_T (*)[14])c2_outData)[c2_i102] = c2_y[c2_i102];
  }

  sf_mex_destroy(&c2_mxArrayInData);
}

const mxArray *sf_c2_RightInvariant_EKF_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  const char * c2_data[6] = {
    "789ced56d16ed330147551a9401388279e40e21169d2bc5508269eb6a53459970c9a96c284509526b76d5a3bae62a75d5fe10378e51390f801be84ef216ed22e"
    "8daa466a5926342c39cec9cdb9f1f1f591830aa7060adbc3f8520a877b61bf83a27637c685b017e3317a5e440f62fc2dec36f3045c8a28e85914d0bc398cba9e",
    "e589e67404c807cec8189c59a4eb1268ba147496009a1b025a4d84164086e4bdd2077bd80828f2fb7cf119449260a6671f5de929a6f4ccdb5ccfa304efdd1a9e"
    "7cff698a27f1b1d723c0f7ea8125c0f75ce6b5056b9b4c5822bc8ff31e66e42da5f29666ab17740844fc1f197c9ee24bfce9cd67e5357ecfc1e7d8649c3fd32c",
    "5f1098e20ab3030a9ee0587585167466d1b66271ee425b09abe93342248b071dca9c20548703e1128e7723ad78b5d63dba58c7a4ded28af91612f3bdbfa8cb91"
    "bef3f3f7f1e6fcab3ade345f43ebebf5182dd74be29e7e09ba434557f08f2f0e5e3526a7b6aaa851bee7897c8515f95062dce4fd7f6d7f1d65cc7727355f8963",
    "9ff2214c1679b6f5e5f70cbe95e25bd7bb6e525bbc4aff7db8a90f9dfac1893aaa9ac27c5b9eb04ae3acd39b7ea8e4e3c3eb3ab79ea478128fda2db005f3cfad"
    "b174990e5dd16470c28460749e775b7ffccae07f49f125feabfe88a3067380e01e7878e87a98e275dae706da62ffd56eb37f5a65cd18f19ade211786181cd648",
    "5dd5b59cceb13cfffb527bc8747bfd2503e5e19faf29bec437e09f65ed5bff07de6eff18d6fecb7330aa17ad264c58793cee0fea831cfcf30765fe787e",
    "" };

  c2_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(c2_data, 3600U, &c2_nameCaptureInfo);
  return c2_nameCaptureInfo;
}

static void c2_error(SFc2_RightInvariant_EKFInstanceStruct *chartInstance)
{
  const mxArray *c2_y = NULL;
  static char_T c2_cv0[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'p', 'o', 'w', 'e', 'r', '_', 'd', 'o', 'm', 'a', 'i',
    'n', 'E', 'r', 'r', 'o', 'r' };

  (void)chartInstance;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", c2_cv0, 10, 0U, 1U, 0U, 2, 1, 31),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message", 1U,
    1U, 14, c2_y));
}

static const mxArray *c2_h_sf_marshallOut(void *chartInstanceVoid, void
  *c2_inData)
{
  const mxArray *c2_mxArrayOutData;
  int32_T c2_u;
  const mxArray *c2_y = NULL;
  SFc2_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc2_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c2_mxArrayOutData = NULL;
  c2_mxArrayOutData = NULL;
  c2_u = *(int32_T *)c2_inData;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create("y", &c2_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c2_mxArrayOutData, c2_y, false);
  return c2_mxArrayOutData;
}

static int32_T c2_h_emlrt_marshallIn(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  int32_T c2_y;
  int32_T c2_i103;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_i103, 1, 6, 0U, 0, 0U, 0);
  c2_y = c2_i103;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void c2_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c2_mxArrayInData, const char_T *c2_varName, void *c2_outData)
{
  const mxArray *c2_b_sfEvent;
  const char_T *c2_identifier;
  emlrtMsgIdentifier c2_thisId;
  int32_T c2_y;
  SFc2_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc2_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c2_b_sfEvent = sf_mex_dup(c2_mxArrayInData);
  c2_identifier = c2_varName;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_sfEvent),
    &c2_thisId);
  sf_mex_destroy(&c2_b_sfEvent);
  *(int32_T *)c2_outData = c2_y;
  sf_mex_destroy(&c2_mxArrayInData);
}

static uint8_T c2_i_emlrt_marshallIn(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_RightInvariant_EKF, const
  char_T *c2_identifier)
{
  uint8_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_b_is_active_c2_RightInvariant_EKF), &c2_thisId);
  sf_mex_destroy(&c2_b_is_active_c2_RightInvariant_EKF);
  return c2_y;
}

static uint8_T c2_j_emlrt_marshallIn(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_y;
  uint8_T c2_u0;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_u0, 1, 3, 0U, 0, 0U, 0);
  c2_y = c2_u0;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static void init_dsm_address_info(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc2_RightInvariant_EKFInstanceStruct
  *chartInstance)
{
  chartInstance->c2_quaternion = (real_T (*)[4])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c2_velocity = (real_T (*)[3])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_X_init = (real_T (*)[49])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_encoders = (real_T (*)[14])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c2_contact = (real_T (*)[2])ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
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

void sf_c2_RightInvariant_EKF_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2052732848U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1126489562U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(514015501U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(535077043U);
}

mxArray* sf_c2_RightInvariant_EKF_get_post_codegen_info(void);
mxArray *sf_c2_RightInvariant_EKF_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("cDssarRYE4MmcIMu2238WF");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,4,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(4);
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
      pr[0] = (double)(3);
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
      pr[0] = (double)(14);
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
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(7);
      pr[1] = (double)(7);
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo = sf_c2_RightInvariant_EKF_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c2_RightInvariant_EKF_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c2_RightInvariant_EKF_jit_fallback_info(void)
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

mxArray *sf_c2_RightInvariant_EKF_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c2_RightInvariant_EKF_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c2_RightInvariant_EKF(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"X_init\",},{M[8],M[0],T\"is_active_c2_RightInvariant_EKF\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_RightInvariant_EKF_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc2_RightInvariant_EKFInstanceStruct *chartInstance =
      (SFc2_RightInvariant_EKFInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _RightInvariant_EKFMachineNumber_,
           2,
           1,
           1,
           0,
           5,
           0,
           0,
           0,
           0,
           4,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"quaternion");
          _SFD_SET_DATA_PROPS(1,1,1,0,"velocity");
          _SFD_SET_DATA_PROPS(2,1,1,0,"encoders");
          _SFD_SET_DATA_PROPS(3,1,1,0,"contact");
          _SFD_SET_DATA_PROPS(4,2,0,1,"X_init");
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
        _SFD_CV_INIT_EML(0,1,1,0,2,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,693);
        _SFD_CV_INIT_EML_IF(0,1,0,161,179,283,305);
        _SFD_CV_INIT_EML_IF(0,1,1,283,305,-1,305);
        _SFD_CV_INIT_EML_RELATIONAL(0,1,0,164,179,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(0,1,1,290,305,-1,0);
        _SFD_CV_INIT_SCRIPT(0,1,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(0,0,"Quaternion_to_Rotation",0,-1,274);
        _SFD_CV_INIT_SCRIPT(1,1,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(1,0,"skew",0,-1,156);
        _SFD_CV_INIT_SCRIPT(2,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(2,0,"p_VectorNav_to_LeftToeBottom",0,-1,407);
        _SFD_CV_INIT_SCRIPT_IF(2,0,60,85,150,403);
        _SFD_CV_INIT_SCRIPT(3,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(3,0,"p_VectorNav_to_RightToeBottom",0,-1,411);
        _SFD_CV_INIT_SCRIPT_IF(3,0,61,86,152,407);

        {
          unsigned int dimVector[1];
          dimVector[0]= 4U;
          _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c2_e_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c2_d_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 14U;
          _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c2_c_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 2U;
          _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c2_b_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[2];
          dimVector[0]= 7U;
          dimVector[1]= 7U;
          _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c2_sf_marshallOut,(MexInFcnForType)
            c2_sf_marshallIn);
        }
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
    SFc2_RightInvariant_EKFInstanceStruct *chartInstance =
      (SFc2_RightInvariant_EKFInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(0U, *chartInstance->c2_quaternion);
        _SFD_SET_DATA_VALUE_PTR(1U, *chartInstance->c2_velocity);
        _SFD_SET_DATA_VALUE_PTR(4U, *chartInstance->c2_X_init);
        _SFD_SET_DATA_VALUE_PTR(2U, *chartInstance->c2_encoders);
        _SFD_SET_DATA_VALUE_PTR(3U, *chartInstance->c2_contact);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "s68KJL4KQMPJgncb37M5v2G";
}

static void sf_opaque_initialize_c2_RightInvariant_EKF(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc2_RightInvariant_EKFInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c2_RightInvariant_EKF((SFc2_RightInvariant_EKFInstanceStruct*)
    chartInstanceVar);
  initialize_c2_RightInvariant_EKF((SFc2_RightInvariant_EKFInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c2_RightInvariant_EKF(void *chartInstanceVar)
{
  enable_c2_RightInvariant_EKF((SFc2_RightInvariant_EKFInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c2_RightInvariant_EKF(void *chartInstanceVar)
{
  disable_c2_RightInvariant_EKF((SFc2_RightInvariant_EKFInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c2_RightInvariant_EKF(void *chartInstanceVar)
{
  sf_gateway_c2_RightInvariant_EKF((SFc2_RightInvariant_EKFInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_RightInvariant_EKF(SimStruct* S)
{
  return get_sim_state_c2_RightInvariant_EKF
    ((SFc2_RightInvariant_EKFInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_RightInvariant_EKF(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c2_RightInvariant_EKF((SFc2_RightInvariant_EKFInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c2_RightInvariant_EKF(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_RightInvariant_EKFInstanceStruct*) chartInstanceVar)
      ->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_RightInvariant_EKF_optimization_info();
    }

    finalize_c2_RightInvariant_EKF((SFc2_RightInvariant_EKFInstanceStruct*)
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
  initSimStructsc2_RightInvariant_EKF((SFc2_RightInvariant_EKFInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_RightInvariant_EKF(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_RightInvariant_EKF
      ((SFc2_RightInvariant_EKFInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

static void mdlSetWorkWidths_c2_RightInvariant_EKF(SimStruct *S)
{
  /* Set overwritable ports for inplace optimization */
  ssSetStatesModifiedOnlyInUpdate(S, 1);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_RightInvariant_EKF_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,2);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,2,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 2);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,2);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,2,4);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,2,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 4; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,2);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1162606863U));
  ssSetChecksum1(S,(3001503331U));
  ssSetChecksum2(S,(2870320864U));
  ssSetChecksum3(S,(3561293634U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c2_RightInvariant_EKF(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c2_RightInvariant_EKF(SimStruct *S)
{
  SFc2_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc2_RightInvariant_EKFInstanceStruct *)utMalloc(sizeof
    (SFc2_RightInvariant_EKFInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc2_RightInvariant_EKFInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c2_RightInvariant_EKF;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c2_RightInvariant_EKF;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c2_RightInvariant_EKF;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_RightInvariant_EKF;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c2_RightInvariant_EKF;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c2_RightInvariant_EKF;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c2_RightInvariant_EKF;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c2_RightInvariant_EKF;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_RightInvariant_EKF;
  chartInstance->chartInfo.mdlStart = mdlStart_c2_RightInvariant_EKF;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c2_RightInvariant_EKF;
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
  mdl_start_c2_RightInvariant_EKF(chartInstance);
}

void c2_RightInvariant_EKF_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c2_RightInvariant_EKF(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_RightInvariant_EKF(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_RightInvariant_EKF(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_RightInvariant_EKF_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
