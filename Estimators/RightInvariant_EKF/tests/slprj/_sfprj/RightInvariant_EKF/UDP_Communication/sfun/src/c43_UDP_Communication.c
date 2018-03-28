/* Include files */

#include "UDP_Communication_sfun.h"
#include "c43_UDP_Communication.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "UDP_Communication_sfun_debug_macros.h"
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
static const char * c43_debug_family_names[6] = { "Rwi", "nargin", "nargout",
  "X", "P", "pose_data" };

static const char * c43_b_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

static const char * c43_c_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

static const char * c43_d_debug_family_names[13] = { "a1", "a2", "a3", "a4",
  "max_a", "qx", "qy", "qz", "qw", "nargin", "nargout", "R", "q" };

/* Function Declarations */
static void initialize_c43_UDP_Communication
  (SFc43_UDP_CommunicationInstanceStruct *chartInstance);
static void initialize_params_c43_UDP_Communication
  (SFc43_UDP_CommunicationInstanceStruct *chartInstance);
static void enable_c43_UDP_Communication(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance);
static void disable_c43_UDP_Communication(SFc43_UDP_CommunicationInstanceStruct *
  chartInstance);
static void c43_update_debugger_state_c43_UDP_Communication
  (SFc43_UDP_CommunicationInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c43_UDP_Communication
  (SFc43_UDP_CommunicationInstanceStruct *chartInstance);
static void set_sim_state_c43_UDP_Communication
  (SFc43_UDP_CommunicationInstanceStruct *chartInstance, const mxArray *c43_st);
static void finalize_c43_UDP_Communication(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance);
static void sf_gateway_c43_UDP_Communication
  (SFc43_UDP_CommunicationInstanceStruct *chartInstance);
static void mdl_start_c43_UDP_Communication
  (SFc43_UDP_CommunicationInstanceStruct *chartInstance);
static void initSimStructsc43_UDP_Communication
  (SFc43_UDP_CommunicationInstanceStruct *chartInstance);
static void c43_Rotation_to_Quaternion(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, real_T c43_R[9], real_T c43_q[4]);
static void init_script_number_translation(uint32_T c43_machineNumber, uint32_T
  c43_chartNumber, uint32_T c43_instanceNumber);
static const mxArray *c43_sf_marshallOut(void *chartInstanceVoid, void
  *c43_inData);
static void c43_emlrt_marshallIn(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, const mxArray *c43_b_pose_data, const char_T *c43_identifier,
  real_T c43_y[43]);
static void c43_b_emlrt_marshallIn(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, const mxArray *c43_u, const emlrtMsgIdentifier *c43_parentId,
  real_T c43_y[43]);
static void c43_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c43_mxArrayInData, const char_T *c43_varName, void *c43_outData);
static const mxArray *c43_b_sf_marshallOut(void *chartInstanceVoid, void
  *c43_inData);
static const mxArray *c43_c_sf_marshallOut(void *chartInstanceVoid, void
  *c43_inData);
static const mxArray *c43_d_sf_marshallOut(void *chartInstanceVoid, void
  *c43_inData);
static real_T c43_c_emlrt_marshallIn(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, const mxArray *c43_u, const emlrtMsgIdentifier *c43_parentId);
static void c43_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c43_mxArrayInData, const char_T *c43_varName, void *c43_outData);
static const mxArray *c43_e_sf_marshallOut(void *chartInstanceVoid, void
  *c43_inData);
static void c43_d_emlrt_marshallIn(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, const mxArray *c43_u, const emlrtMsgIdentifier *c43_parentId,
  real_T c43_y[9]);
static void c43_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c43_mxArrayInData, const char_T *c43_varName, void *c43_outData);
static const mxArray *c43_f_sf_marshallOut(void *chartInstanceVoid, void
  *c43_inData);
static void c43_e_emlrt_marshallIn(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, const mxArray *c43_u, const emlrtMsgIdentifier *c43_parentId,
  real_T c43_y[3]);
static void c43_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c43_mxArrayInData, const char_T *c43_varName, void *c43_outData);
static const mxArray *c43_g_sf_marshallOut(void *chartInstanceVoid, void
  *c43_inData);
static void c43_f_emlrt_marshallIn(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, const mxArray *c43_u, const emlrtMsgIdentifier *c43_parentId,
  real_T c43_y[14]);
static void c43_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c43_mxArrayInData, const char_T *c43_varName, void *c43_outData);
static const mxArray *c43_h_sf_marshallOut(void *chartInstanceVoid, void
  *c43_inData);
static void c43_g_emlrt_marshallIn(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, const mxArray *c43_u, const emlrtMsgIdentifier *c43_parentId,
  real_T c43_y[4]);
static void c43_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c43_mxArrayInData, const char_T *c43_varName, void *c43_outData);
static void c43_abs(SFc43_UDP_CommunicationInstanceStruct *chartInstance, real_T
                    c43_x[4], real_T c43_y[4]);
static void c43_check_forloop_overflow_error
  (SFc43_UDP_CommunicationInstanceStruct *chartInstance, boolean_T c43_overflow);
static void c43_error(SFc43_UDP_CommunicationInstanceStruct *chartInstance);
static const mxArray *c43_i_sf_marshallOut(void *chartInstanceVoid, void
  *c43_inData);
static int32_T c43_h_emlrt_marshallIn(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, const mxArray *c43_u, const emlrtMsgIdentifier *c43_parentId);
static void c43_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c43_mxArrayInData, const char_T *c43_varName, void *c43_outData);
static uint8_T c43_i_emlrt_marshallIn(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, const mxArray *c43_b_is_active_c43_UDP_Communication, const
  char_T *c43_identifier);
static uint8_T c43_j_emlrt_marshallIn(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, const mxArray *c43_u, const emlrtMsgIdentifier *c43_parentId);
static void init_dsm_address_info(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c43_UDP_Communication
  (SFc43_UDP_CommunicationInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc43_UDP_Communication(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  chartInstance->c43_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c43_is_active_c43_UDP_Communication = 0U;
}

static void initialize_params_c43_UDP_Communication
  (SFc43_UDP_CommunicationInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c43_UDP_Communication(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c43_UDP_Communication(SFc43_UDP_CommunicationInstanceStruct *
  chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c43_update_debugger_state_c43_UDP_Communication
  (SFc43_UDP_CommunicationInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c43_UDP_Communication
  (SFc43_UDP_CommunicationInstanceStruct *chartInstance)
{
  const mxArray *c43_st;
  const mxArray *c43_y = NULL;
  const mxArray *c43_b_y = NULL;
  uint8_T c43_hoistedGlobal;
  const mxArray *c43_c_y = NULL;
  c43_st = NULL;
  c43_st = NULL;
  c43_y = NULL;
  sf_mex_assign(&c43_y, sf_mex_createcellmatrix(2, 1), false);
  c43_b_y = NULL;
  sf_mex_assign(&c43_b_y, sf_mex_create("y", *chartInstance->c43_pose_data, 0,
    0U, 1U, 0U, 1, 43), false);
  sf_mex_setcell(c43_y, 0, c43_b_y);
  c43_hoistedGlobal = chartInstance->c43_is_active_c43_UDP_Communication;
  c43_c_y = NULL;
  sf_mex_assign(&c43_c_y, sf_mex_create("y", &c43_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c43_y, 1, c43_c_y);
  sf_mex_assign(&c43_st, c43_y, false);
  return c43_st;
}

static void set_sim_state_c43_UDP_Communication
  (SFc43_UDP_CommunicationInstanceStruct *chartInstance, const mxArray *c43_st)
{
  const mxArray *c43_u;
  real_T c43_dv0[43];
  int32_T c43_i0;
  chartInstance->c43_doneDoubleBufferReInit = true;
  c43_u = sf_mex_dup(c43_st);
  c43_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("pose_data",
    c43_u, 0)), "pose_data", c43_dv0);
  for (c43_i0 = 0; c43_i0 < 43; c43_i0++) {
    (*chartInstance->c43_pose_data)[c43_i0] = c43_dv0[c43_i0];
  }

  chartInstance->c43_is_active_c43_UDP_Communication = c43_i_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c43_UDP_Communication",
       c43_u, 1)), "is_active_c43_UDP_Communication");
  sf_mex_destroy(&c43_u);
  c43_update_debugger_state_c43_UDP_Communication(chartInstance);
  sf_mex_destroy(&c43_st);
}

static void finalize_c43_UDP_Communication(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c43_UDP_Communication
  (SFc43_UDP_CommunicationInstanceStruct *chartInstance)
{
  int32_T c43_i1;
  int32_T c43_i2;
  int32_T c43_i3;
  int32_T c43_i4;
  real_T c43_b_X[49];
  uint32_T c43_debug_family_var_map[6];
  real_T c43_b_P[441];
  real_T c43_Rwi[9];
  real_T c43_nargin = 2.0;
  real_T c43_nargout = 1.0;
  real_T c43_b_pose_data[43];
  int32_T c43_i5;
  int32_T c43_i6;
  int32_T c43_i7;
  int32_T c43_i8;
  int32_T c43_i9;
  int32_T c43_i10;
  uint32_T c43_b_debug_family_var_map[4];
  real_T c43_var1[14];
  real_T c43_b_nargin = 1.0;
  real_T c43_b_nargout = 1.0;
  real_T c43_output1[3];
  int32_T c43_i11;
  int32_T c43_i12;
  int32_T c43_i13;
  real_T c43_a[9];
  int32_T c43_i14;
  real_T c43_b[3];
  int32_T c43_i15;
  real_T c43_y[3];
  int32_T c43_i16;
  int32_T c43_i17;
  int32_T c43_i18;
  real_T c43_b_var1[14];
  real_T c43_c_nargin = 1.0;
  real_T c43_c_nargout = 1.0;
  real_T c43_b_output1[9];
  int32_T c43_i19;
  int32_T c43_i20;
  int32_T c43_i21;
  int32_T c43_i22;
  real_T c43_b_b[9];
  int32_T c43_i23;
  int32_T c43_i24;
  int32_T c43_i25;
  int32_T c43_i26;
  real_T c43_b_y[9];
  real_T c43_dv1[4];
  int32_T c43_i27;
  real_T c43_c_y[9];
  int32_T c43_i28;
  int32_T c43_i29;
  int32_T c43_i30;
  int32_T c43_i31;
  int32_T c43_i32;
  int32_T c43_k;
  int32_T c43_i33;
  int32_T c43_i34;
  real_T c43_d_y[36];
  real_T c43_x[36];
  static int32_T c43_iv0[6] = { 0, 1, 2, 0, 1, 2 };

  static int32_T c43_iv1[6] = { 6, 7, 8, 6, 7, 8 };

  int32_T c43_i35;
  int32_T c43_i36;
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 2U, chartInstance->c43_sfEvent);
  for (c43_i1 = 0; c43_i1 < 441; c43_i1++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c43_P)[c43_i1], 1U, 1U, 0U,
                          chartInstance->c43_sfEvent, false);
  }

  for (c43_i2 = 0; c43_i2 < 49; c43_i2++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c43_X)[c43_i2], 0U, 1U, 0U,
                          chartInstance->c43_sfEvent, false);
  }

  chartInstance->c43_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 2U, chartInstance->c43_sfEvent);
  for (c43_i3 = 0; c43_i3 < 49; c43_i3++) {
    c43_b_X[c43_i3] = (*chartInstance->c43_X)[c43_i3];
  }

  for (c43_i4 = 0; c43_i4 < 441; c43_i4++) {
    c43_b_P[c43_i4] = (*chartInstance->c43_P)[c43_i4];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 6U, 6U, c43_debug_family_names,
    c43_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c43_Rwi, 0U, c43_e_sf_marshallOut,
    c43_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c43_nargin, 1U, c43_d_sf_marshallOut,
    c43_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c43_nargout, 2U, c43_d_sf_marshallOut,
    c43_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c43_b_X, 3U, c43_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c43_b_P, 4U, c43_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c43_b_pose_data, 5U, c43_sf_marshallOut,
    c43_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c43_sfEvent, 4);
  c43_i5 = 0;
  c43_i6 = 0;
  for (c43_i7 = 0; c43_i7 < 3; c43_i7++) {
    for (c43_i8 = 0; c43_i8 < 3; c43_i8++) {
      c43_Rwi[c43_i8 + c43_i5] = c43_b_X[c43_i8 + c43_i6];
    }

    c43_i5 += 3;
    c43_i6 += 7;
  }

  _SFD_EML_CALL(0U, chartInstance->c43_sfEvent, 6);
  for (c43_i9 = 0; c43_i9 < 43; c43_i9++) {
    c43_b_pose_data[c43_i9] = 0.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c43_sfEvent, 7);
  for (c43_i10 = 0; c43_i10 < 14; c43_i10++) {
    c43_var1[c43_i10] = 0.0;
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c43_b_debug_family_names,
    c43_b_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c43_b_nargin, 0U, c43_d_sf_marshallOut,
    c43_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c43_b_nargout, 1U, c43_d_sf_marshallOut,
    c43_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c43_var1, 2U, c43_g_sf_marshallOut,
    c43_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c43_output1, 3U, c43_f_sf_marshallOut,
    c43_d_sf_marshallIn);
  CV_SCRIPT_FCN(0, 0);
  _SFD_SCRIPT_CALL(0U, chartInstance->c43_sfEvent, 2);
  CV_SCRIPT_IF(0, 0, false);
  _SFD_SCRIPT_CALL(0U, chartInstance->c43_sfEvent, 5);
  _SFD_SCRIPT_CALL(0U, chartInstance->c43_sfEvent, 7);
  for (c43_i11 = 0; c43_i11 < 3; c43_i11++) {
    c43_output1[c43_i11] = 0.0;
  }

  _SFD_SCRIPT_CALL(0U, chartInstance->c43_sfEvent, 10);
  p_VectorNav_to_Pelvis_src(c43_output1, c43_var1);
  _SFD_SCRIPT_CALL(0U, chartInstance->c43_sfEvent, -10);
  _SFD_SYMBOL_SCOPE_POP();
  for (c43_i12 = 0; c43_i12 < 9; c43_i12++) {
    c43_a[c43_i12] = c43_Rwi[c43_i12];
  }

  for (c43_i13 = 0; c43_i13 < 3; c43_i13++) {
    c43_b[c43_i13] = c43_output1[c43_i13];
  }

  for (c43_i14 = 0; c43_i14 < 3; c43_i14++) {
    c43_y[c43_i14] = 0.0;
    c43_i16 = 0;
    for (c43_i17 = 0; c43_i17 < 3; c43_i17++) {
      c43_y[c43_i14] += c43_a[c43_i16 + c43_i14] * c43_b[c43_i17];
      c43_i16 += 3;
    }
  }

  for (c43_i15 = 0; c43_i15 < 3; c43_i15++) {
    c43_b_pose_data[c43_i15] = c43_b_X[c43_i15 + 28] + c43_y[c43_i15];
  }

  _SFD_EML_CALL(0U, chartInstance->c43_sfEvent, 8);
  for (c43_i18 = 0; c43_i18 < 14; c43_i18++) {
    c43_b_var1[c43_i18] = 0.0;
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c43_c_debug_family_names,
    c43_b_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c43_c_nargin, 0U, c43_d_sf_marshallOut,
    c43_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c43_c_nargout, 1U, c43_d_sf_marshallOut,
    c43_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c43_b_var1, 2U, c43_g_sf_marshallOut,
    c43_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c43_b_output1, 3U, c43_e_sf_marshallOut,
    c43_c_sf_marshallIn);
  CV_SCRIPT_FCN(1, 0);
  _SFD_SCRIPT_CALL(1U, chartInstance->c43_sfEvent, 2);
  CV_SCRIPT_IF(1, 0, false);
  _SFD_SCRIPT_CALL(1U, chartInstance->c43_sfEvent, 5);
  _SFD_SCRIPT_CALL(1U, chartInstance->c43_sfEvent, 7);
  for (c43_i19 = 0; c43_i19 < 9; c43_i19++) {
    c43_b_output1[c43_i19] = 0.0;
  }

  _SFD_SCRIPT_CALL(1U, chartInstance->c43_sfEvent, 10);
  R_VectorNav_to_Pelvis_src(c43_b_output1, c43_b_var1);
  _SFD_SCRIPT_CALL(1U, chartInstance->c43_sfEvent, -10);
  _SFD_SYMBOL_SCOPE_POP();
  for (c43_i20 = 0; c43_i20 < 9; c43_i20++) {
    c43_a[c43_i20] = c43_Rwi[c43_i20];
  }

  for (c43_i21 = 0; c43_i21 < 9; c43_i21++) {
    c43_b_b[c43_i21] = c43_b_output1[c43_i21];
  }

  for (c43_i22 = 0; c43_i22 < 3; c43_i22++) {
    c43_i24 = 0;
    for (c43_i26 = 0; c43_i26 < 3; c43_i26++) {
      c43_c_y[c43_i24 + c43_i22] = 0.0;
      c43_i30 = 0;
      for (c43_i31 = 0; c43_i31 < 3; c43_i31++) {
        c43_c_y[c43_i24 + c43_i22] += c43_a[c43_i30 + c43_i22] * c43_b_b[c43_i31
          + c43_i24];
        c43_i30 += 3;
      }

      c43_i24 += 3;
    }
  }

  c43_i23 = 0;
  for (c43_i25 = 0; c43_i25 < 3; c43_i25++) {
    c43_i27 = 0;
    for (c43_i29 = 0; c43_i29 < 3; c43_i29++) {
      c43_b_y[c43_i29 + c43_i23] = c43_c_y[c43_i27 + c43_i25];
      c43_i27 += 3;
    }

    c43_i23 += 3;
  }

  c43_Rotation_to_Quaternion(chartInstance, c43_b_y, c43_dv1);
  for (c43_i28 = 0; c43_i28 < 4; c43_i28++) {
    c43_b_pose_data[c43_i28 + 3] = c43_dv1[c43_i28];
  }

  _SFD_EML_CALL(0U, chartInstance->c43_sfEvent, 11);
  for (c43_i32 = 0; c43_i32 < 6; c43_i32++) {
    for (c43_i33 = 0; c43_i33 < 6; c43_i33++) {
      c43_x[c43_i33 + 6 * c43_i32] = c43_b_P[c43_iv0[c43_i33] + 21 *
        c43_iv1[c43_i32]];
    }
  }

  for (c43_k = 0; c43_k + 1 < 37; c43_k++) {
    c43_d_y[c43_k] = c43_x[c43_k];
  }

  for (c43_i34 = 0; c43_i34 < 36; c43_i34++) {
    c43_b_pose_data[c43_i34 + 7] = c43_d_y[c43_i34];
  }

  _SFD_EML_CALL(0U, chartInstance->c43_sfEvent, -11);
  _SFD_SYMBOL_SCOPE_POP();
  for (c43_i35 = 0; c43_i35 < 43; c43_i35++) {
    (*chartInstance->c43_pose_data)[c43_i35] = c43_b_pose_data[c43_i35];
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c43_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_UDP_CommunicationMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  for (c43_i36 = 0; c43_i36 < 43; c43_i36++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c43_pose_data)[c43_i36], 2U, 1U, 0U,
                          chartInstance->c43_sfEvent, false);
  }
}

static void mdl_start_c43_UDP_Communication
  (SFc43_UDP_CommunicationInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void initSimStructsc43_UDP_Communication
  (SFc43_UDP_CommunicationInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c43_Rotation_to_Quaternion(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, real_T c43_R[9], real_T c43_q[4])
{
  uint32_T c43_debug_family_var_map[13];
  real_T c43_a1;
  real_T c43_a2;
  real_T c43_a3;
  real_T c43_a4;
  real_T c43_max_a;
  real_T c43_qx;
  real_T c43_qy;
  real_T c43_qz;
  real_T c43_qw;
  real_T c43_nargin = 1.0;
  real_T c43_nargout = 1.0;
  real_T c43_b_a1[4];
  real_T c43_varargin_1[4];
  int32_T c43_ixstart;
  real_T c43_mtmp;
  real_T c43_x;
  boolean_T c43_foundnan;
  int32_T c43_ix;
  int32_T c43_i37;
  boolean_T c43_overflow;
  real_T c43_b_x;
  real_T c43_switch_expression;
  boolean_T c43_b;
  real_T c43_b_varargin_1;
  int32_T c43_b_ix;
  real_T c43_varargin_2;
  real_T c43_varargin_3;
  real_T c43_varargin_4;
  real_T c43_a;
  real_T c43_b_switch_expression;
  real_T c43_b_b;
  real_T c43_case_expression;
  boolean_T c43_p;
  boolean_T c43_result;
  real_T c43_c_switch_expression;
  real_T c43_index;
  real_T c43_b_case_expression;
  boolean_T c43_b_result;
  real_T c43_d_switch_expression;
  real_T c43_c_case_expression;
  boolean_T c43_c_result;
  const mxArray *c43_y = NULL;
  real_T c43_c_x;
  real_T c43_d_x;
  real_T c43_e_x;
  real_T c43_f_x;
  static char_T c43_c_varargin_1[47] = { 'E', 'r', 'r', 'o', 'r', ' ', 'c', 'o',
    'm', 'p', 'u', 't', 'i', 'n', 'g', ' ', 'q', 'u', 'a', 't', 'e', 'r', 'n',
    'i', 'o', 'n', ' ', 'f', 'r', 'o', 'm', ' ', 'r', 'o', 't', 'a', 't', 'i',
    'o', 'n', ' ', 'm', 'a', 't', 'r', 'i', 'x' };

  real_T c43_g_x;
  real_T c43_h_x;
  real_T c43_i_x;
  real_T c43_e_switch_expression;
  real_T c43_j_x;
  real_T c43_k_x;
  real_T c43_l_x;
  real_T c43_m_x;
  real_T c43_d_case_expression;
  boolean_T c43_b_p;
  boolean_T c43_c_p;
  boolean_T c43_d_p;
  boolean_T c43_e_p;
  boolean_T c43_d_result;
  boolean_T c43_f_p;
  boolean_T c43_g_p;
  boolean_T c43_h_p;
  boolean_T c43_i_p;
  real_T c43_n_x;
  real_T c43_A;
  real_T c43_b_A;
  real_T c43_c_A;
  real_T c43_B;
  real_T c43_o_x;
  real_T c43_b_B;
  real_T c43_c_B;
  real_T c43_p_x;
  real_T c43_q_x;
  real_T c43_r_x;
  real_T c43_b_y;
  real_T c43_c_y;
  real_T c43_d_y;
  int32_T c43_i38;
  real_T c43_s_x;
  real_T c43_t_x;
  real_T c43_u_x;
  real_T c43_e_y;
  real_T c43_v_x;
  real_T c43_f_y;
  real_T c43_g_y;
  real_T c43_w_x;
  real_T c43_x_x;
  real_T c43_y_x;
  boolean_T c43_j_p;
  real_T c43_ab_x;
  real_T c43_bb_x;
  real_T c43_cb_x;
  boolean_T c43_k_p;
  real_T c43_db_x;
  real_T c43_eb_x;
  real_T c43_fb_x;
  real_T c43_gb_x;
  boolean_T c43_l_p;
  boolean_T c43_m_p;
  boolean_T c43_n_p;
  boolean_T c43_o_p;
  boolean_T c43_p_p;
  boolean_T c43_q_p;
  real_T c43_d_A;
  real_T c43_d_B;
  real_T c43_hb_x;
  real_T c43_ib_x;
  real_T c43_e_A;
  real_T c43_h_y;
  real_T c43_f_A;
  real_T c43_e_B;
  real_T c43_jb_x;
  real_T c43_kb_x;
  real_T c43_f_B;
  real_T c43_lb_x;
  real_T c43_i_y;
  real_T c43_mb_x;
  real_T c43_j_y;
  real_T c43_k_y;
  real_T c43_nb_x;
  real_T c43_ob_x;
  real_T c43_l_y;
  real_T c43_pb_x;
  real_T c43_qb_x;
  real_T c43_m_y;
  real_T c43_rb_x;
  real_T c43_sb_x;
  real_T c43_tb_x;
  real_T c43_ub_x;
  real_T c43_vb_x;
  boolean_T c43_r_p;
  boolean_T c43_s_p;
  real_T c43_wb_x;
  real_T c43_xb_x;
  boolean_T c43_t_p;
  boolean_T c43_u_p;
  real_T c43_yb_x;
  real_T c43_ac_x;
  boolean_T c43_v_p;
  boolean_T c43_w_p;
  boolean_T c43_x_p;
  boolean_T c43_y_p;
  real_T c43_g_A;
  real_T c43_h_A;
  real_T c43_g_B;
  real_T c43_h_B;
  real_T c43_bc_x;
  real_T c43_cc_x;
  real_T c43_dc_x;
  real_T c43_i_A;
  real_T c43_n_y;
  real_T c43_o_y;
  real_T c43_i_B;
  real_T c43_ec_x;
  real_T c43_fc_x;
  real_T c43_gc_x;
  real_T c43_hc_x;
  real_T c43_p_y;
  real_T c43_q_y;
  real_T c43_r_y;
  real_T c43_ic_x;
  real_T c43_s_y;
  real_T c43_jc_x;
  real_T c43_kc_x;
  real_T c43_lc_x;
  real_T c43_mc_x;
  real_T c43_nc_x;
  real_T c43_oc_x;
  real_T c43_pc_x;
  real_T c43_qc_x;
  real_T c43_rc_x;
  real_T c43_sc_x;
  boolean_T c43_ab_p;
  boolean_T c43_bb_p;
  boolean_T c43_cb_p;
  boolean_T c43_db_p;
  boolean_T c43_eb_p;
  boolean_T c43_fb_p;
  real_T c43_tc_x;
  boolean_T c43_gb_p;
  boolean_T c43_hb_p;
  real_T c43_j_A;
  real_T c43_k_A;
  real_T c43_l_A;
  real_T c43_j_B;
  real_T c43_k_B;
  real_T c43_l_B;
  real_T c43_uc_x;
  real_T c43_vc_x;
  real_T c43_wc_x;
  real_T c43_xc_x;
  real_T c43_t_y;
  real_T c43_u_y;
  real_T c43_v_y;
  real_T c43_yc_x;
  real_T c43_ad_x;
  real_T c43_bd_x;
  real_T c43_cd_x;
  real_T c43_w_y;
  real_T c43_x_y;
  real_T c43_y_y;
  boolean_T exitg1;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 13U, 13U, c43_d_debug_family_names,
    c43_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c43_a1, 0U, c43_d_sf_marshallOut,
    c43_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c43_a2, 1U, c43_d_sf_marshallOut,
    c43_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c43_a3, 2U, c43_d_sf_marshallOut,
    c43_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c43_a4, 3U, c43_d_sf_marshallOut,
    c43_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c43_max_a, 4U, c43_d_sf_marshallOut,
    c43_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c43_qx, 5U, c43_d_sf_marshallOut,
    c43_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c43_qy, 6U, c43_d_sf_marshallOut,
    c43_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c43_qz, 7U, c43_d_sf_marshallOut,
    c43_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c43_qw, 8U, c43_d_sf_marshallOut,
    c43_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c43_nargin, 9U, c43_d_sf_marshallOut,
    c43_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c43_nargout, 10U, c43_d_sf_marshallOut,
    c43_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c43_R, 11U, c43_e_sf_marshallOut,
    c43_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c43_q, 12U, c43_h_sf_marshallOut,
    c43_f_sf_marshallIn);
  CV_SCRIPT_FCN(2, 0);
  _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 10);
  c43_a1 = 0.25 * (((1.0 + c43_R[0]) + c43_R[4]) + c43_R[8]);
  _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 11);
  c43_a2 = 0.25 * (((1.0 + c43_R[0]) - c43_R[4]) - c43_R[8]);
  _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 12);
  c43_a3 = 0.25 * (((1.0 - c43_R[0]) + c43_R[4]) - c43_R[8]);
  _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 13);
  c43_a4 = 0.25 * (((1.0 - c43_R[0]) - c43_R[4]) + c43_R[8]);
  _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 15);
  c43_b_a1[0] = c43_a1;
  c43_b_a1[1] = c43_a2;
  c43_b_a1[2] = c43_a3;
  c43_b_a1[3] = c43_a4;
  c43_abs(chartInstance, c43_b_a1, c43_varargin_1);
  c43_ixstart = 1;
  c43_mtmp = c43_varargin_1[0];
  c43_x = c43_mtmp;
  c43_foundnan = muDoubleScalarIsNaN(c43_x);
  if (c43_foundnan) {
    c43_ix = 1;
    exitg1 = false;
    while ((!exitg1) && (c43_ix + 1 < 5)) {
      c43_ixstart = c43_ix + 1;
      c43_b_x = c43_varargin_1[c43_ix];
      c43_b = muDoubleScalarIsNaN(c43_b_x);
      if (!c43_b) {
        c43_mtmp = c43_varargin_1[c43_ix];
        exitg1 = true;
      } else {
        c43_ix++;
      }
    }
  }

  if (c43_ixstart < 4) {
    c43_i37 = c43_ixstart;
    c43_overflow = false;
    if (c43_overflow) {
      c43_check_forloop_overflow_error(chartInstance, c43_overflow);
    }

    for (c43_b_ix = c43_i37; c43_b_ix + 1 < 5; c43_b_ix++) {
      c43_a = c43_varargin_1[c43_b_ix];
      c43_b_b = c43_mtmp;
      c43_p = (c43_a > c43_b_b);
      if (c43_p) {
        c43_mtmp = c43_varargin_1[c43_b_ix];
      }
    }
  }

  c43_max_a = c43_mtmp;
  _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 18);
  c43_switch_expression = c43_max_a;
  c43_b_varargin_1 = c43_a1;
  c43_varargin_2 = c43_a2;
  c43_varargin_3 = c43_a3;
  c43_varargin_4 = c43_a4;
  c43_b_switch_expression = c43_switch_expression;
  c43_case_expression = c43_b_varargin_1;
  c43_result = (c43_case_expression == c43_b_switch_expression);
  if (c43_result) {
    c43_index = 0.0;
  } else {
    c43_c_switch_expression = c43_switch_expression;
    c43_b_case_expression = c43_varargin_2;
    c43_b_result = (c43_b_case_expression == c43_c_switch_expression);
    if (c43_b_result) {
      c43_index = 1.0;
    } else {
      c43_d_switch_expression = c43_switch_expression;
      c43_c_case_expression = c43_varargin_3;
      c43_c_result = (c43_c_case_expression == c43_d_switch_expression);
      if (c43_c_result) {
        c43_index = 2.0;
      } else {
        c43_e_switch_expression = c43_switch_expression;
        c43_d_case_expression = c43_varargin_4;
        c43_d_result = (c43_d_case_expression == c43_e_switch_expression);
        if (c43_d_result) {
          c43_index = 3.0;
        } else {
          c43_index = -1.0;
        }
      }
    }
  }

  switch ((int32_T)sf_integer_check(chartInstance->S, 0U, 0U, 0U, c43_index)) {
   case 0:
    CV_SCRIPT_SWITCH(2, 0, 1);
    _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 20);
    c43_c_x = c43_a1;
    c43_g_x = c43_c_x;
    c43_j_x = c43_g_x;
    c43_b_p = (c43_j_x < 0.0);
    c43_f_p = c43_b_p;
    if (c43_f_p) {
      c43_error(chartInstance);
    }

    c43_g_x = muDoubleScalarSqrt(c43_g_x);
    c43_A = 0.25 * (c43_R[7] - c43_R[5]);
    c43_B = c43_g_x;
    c43_p_x = c43_A;
    c43_b_y = c43_B;
    c43_s_x = c43_p_x;
    c43_e_y = c43_b_y;
    c43_qx = c43_s_x / c43_e_y;
    _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 21);
    c43_y_x = c43_a1;
    c43_cb_x = c43_y_x;
    c43_eb_x = c43_cb_x;
    c43_l_p = (c43_eb_x < 0.0);
    c43_o_p = c43_l_p;
    if (c43_o_p) {
      c43_error(chartInstance);
    }

    c43_cb_x = muDoubleScalarSqrt(c43_cb_x);
    c43_e_A = 0.25 * (c43_R[2] - c43_R[6]);
    c43_e_B = c43_cb_x;
    c43_lb_x = c43_e_A;
    c43_j_y = c43_e_B;
    c43_nb_x = c43_lb_x;
    c43_l_y = c43_j_y;
    c43_qy = c43_nb_x / c43_l_y;
    _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 22);
    c43_vb_x = c43_a1;
    c43_xb_x = c43_vb_x;
    c43_yb_x = c43_xb_x;
    c43_v_p = (c43_yb_x < 0.0);
    c43_x_p = c43_v_p;
    if (c43_x_p) {
      c43_error(chartInstance);
    }

    c43_xb_x = muDoubleScalarSqrt(c43_xb_x);
    c43_i_A = 0.25 * (c43_R[3] - c43_R[1]);
    c43_i_B = c43_xb_x;
    c43_hc_x = c43_i_A;
    c43_r_y = c43_i_B;
    c43_ic_x = c43_hc_x;
    c43_s_y = c43_r_y;
    c43_qz = c43_ic_x / c43_s_y;
    _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 23);
    c43_sc_x = c43_a1;
    c43_qw = c43_sc_x;
    c43_tc_x = c43_qw;
    c43_gb_p = (c43_tc_x < 0.0);
    c43_hb_p = c43_gb_p;
    if (c43_hb_p) {
      c43_error(chartInstance);
    }

    c43_uc_x = c43_qw;
    c43_qw = c43_uc_x;
    c43_yc_x = c43_qw;
    c43_qw = c43_yc_x;
    c43_qw = muDoubleScalarSqrt(c43_qw);
    break;

   case 1:
    CV_SCRIPT_SWITCH(2, 0, 2);
    _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 25);
    c43_d_x = c43_a2;
    c43_qx = c43_d_x;
    c43_k_x = c43_qx;
    c43_c_p = (c43_k_x < 0.0);
    c43_g_p = c43_c_p;
    if (c43_g_p) {
      c43_error(chartInstance);
    }

    c43_n_x = c43_qx;
    c43_qx = c43_n_x;
    c43_o_x = c43_qx;
    c43_qx = c43_o_x;
    c43_qx = muDoubleScalarSqrt(c43_qx);
    _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 26);
    c43_v_x = c43_a2;
    c43_w_x = c43_v_x;
    c43_x_x = c43_w_x;
    c43_j_p = (c43_x_x < 0.0);
    c43_k_p = c43_j_p;
    if (c43_k_p) {
      c43_error(chartInstance);
    }

    c43_w_x = muDoubleScalarSqrt(c43_w_x);
    c43_d_A = 0.25 * (c43_R[3] + c43_R[1]);
    c43_d_B = c43_w_x;
    c43_hb_x = c43_d_A;
    c43_h_y = c43_d_B;
    c43_jb_x = c43_hb_x;
    c43_i_y = c43_h_y;
    c43_qy = c43_jb_x / c43_i_y;
    _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 27);
    c43_pb_x = c43_a2;
    c43_rb_x = c43_pb_x;
    c43_tb_x = c43_rb_x;
    c43_r_p = (c43_tb_x < 0.0);
    c43_t_p = c43_r_p;
    if (c43_t_p) {
      c43_error(chartInstance);
    }

    c43_rb_x = muDoubleScalarSqrt(c43_rb_x);
    c43_g_A = 0.25 * (c43_R[6] + c43_R[2]);
    c43_g_B = c43_rb_x;
    c43_bc_x = c43_g_A;
    c43_n_y = c43_g_B;
    c43_ec_x = c43_bc_x;
    c43_p_y = c43_n_y;
    c43_qz = c43_ec_x / c43_p_y;
    _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 28);
    c43_jc_x = c43_a2;
    c43_mc_x = c43_jc_x;
    c43_pc_x = c43_mc_x;
    c43_ab_p = (c43_pc_x < 0.0);
    c43_db_p = c43_ab_p;
    if (c43_db_p) {
      c43_error(chartInstance);
    }

    c43_mc_x = muDoubleScalarSqrt(c43_mc_x);
    c43_j_A = 0.25 * (c43_R[7] - c43_R[5]);
    c43_j_B = c43_mc_x;
    c43_vc_x = c43_j_A;
    c43_t_y = c43_j_B;
    c43_ad_x = c43_vc_x;
    c43_w_y = c43_t_y;
    c43_qw = c43_ad_x / c43_w_y;
    break;

   case 2:
    CV_SCRIPT_SWITCH(2, 0, 3);
    _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 30);
    c43_e_x = c43_a3;
    c43_h_x = c43_e_x;
    c43_l_x = c43_h_x;
    c43_d_p = (c43_l_x < 0.0);
    c43_h_p = c43_d_p;
    if (c43_h_p) {
      c43_error(chartInstance);
    }

    c43_h_x = muDoubleScalarSqrt(c43_h_x);
    c43_b_A = 0.25 * (c43_R[1] + c43_R[3]);
    c43_b_B = c43_h_x;
    c43_q_x = c43_b_A;
    c43_c_y = c43_b_B;
    c43_t_x = c43_q_x;
    c43_f_y = c43_c_y;
    c43_qx = c43_t_x / c43_f_y;
    _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 31);
    c43_ab_x = c43_a3;
    c43_qy = c43_ab_x;
    c43_fb_x = c43_qy;
    c43_m_p = (c43_fb_x < 0.0);
    c43_p_p = c43_m_p;
    if (c43_p_p) {
      c43_error(chartInstance);
    }

    c43_ib_x = c43_qy;
    c43_qy = c43_ib_x;
    c43_kb_x = c43_qy;
    c43_qy = c43_kb_x;
    c43_qy = muDoubleScalarSqrt(c43_qy);
    _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 32);
    c43_qb_x = c43_a3;
    c43_sb_x = c43_qb_x;
    c43_ub_x = c43_sb_x;
    c43_s_p = (c43_ub_x < 0.0);
    c43_u_p = c43_s_p;
    if (c43_u_p) {
      c43_error(chartInstance);
    }

    c43_sb_x = muDoubleScalarSqrt(c43_sb_x);
    c43_h_A = 0.25 * (c43_R[7] + c43_R[5]);
    c43_h_B = c43_sb_x;
    c43_cc_x = c43_h_A;
    c43_o_y = c43_h_B;
    c43_fc_x = c43_cc_x;
    c43_q_y = c43_o_y;
    c43_qz = c43_fc_x / c43_q_y;
    _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 33);
    c43_kc_x = c43_a3;
    c43_nc_x = c43_kc_x;
    c43_qc_x = c43_nc_x;
    c43_bb_p = (c43_qc_x < 0.0);
    c43_eb_p = c43_bb_p;
    if (c43_eb_p) {
      c43_error(chartInstance);
    }

    c43_nc_x = muDoubleScalarSqrt(c43_nc_x);
    c43_k_A = 0.25 * (c43_R[2] - c43_R[6]);
    c43_k_B = c43_nc_x;
    c43_wc_x = c43_k_A;
    c43_u_y = c43_k_B;
    c43_bd_x = c43_wc_x;
    c43_x_y = c43_u_y;
    c43_qw = c43_bd_x / c43_x_y;
    break;

   case 3:
    CV_SCRIPT_SWITCH(2, 0, 4);
    _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 35);
    c43_f_x = c43_a4;
    c43_i_x = c43_f_x;
    c43_m_x = c43_i_x;
    c43_e_p = (c43_m_x < 0.0);
    c43_i_p = c43_e_p;
    if (c43_i_p) {
      c43_error(chartInstance);
    }

    c43_i_x = muDoubleScalarSqrt(c43_i_x);
    c43_c_A = 0.25 * (c43_R[2] + c43_R[6]);
    c43_c_B = c43_i_x;
    c43_r_x = c43_c_A;
    c43_d_y = c43_c_B;
    c43_u_x = c43_r_x;
    c43_g_y = c43_d_y;
    c43_qx = c43_u_x / c43_g_y;
    _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 36);
    c43_bb_x = c43_a4;
    c43_db_x = c43_bb_x;
    c43_gb_x = c43_db_x;
    c43_n_p = (c43_gb_x < 0.0);
    c43_q_p = c43_n_p;
    if (c43_q_p) {
      c43_error(chartInstance);
    }

    c43_db_x = muDoubleScalarSqrt(c43_db_x);
    c43_f_A = 0.25 * (c43_R[5] + c43_R[7]);
    c43_f_B = c43_db_x;
    c43_mb_x = c43_f_A;
    c43_k_y = c43_f_B;
    c43_ob_x = c43_mb_x;
    c43_m_y = c43_k_y;
    c43_qy = c43_ob_x / c43_m_y;
    _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 37);
    c43_wb_x = c43_a4;
    c43_qz = c43_wb_x;
    c43_ac_x = c43_qz;
    c43_w_p = (c43_ac_x < 0.0);
    c43_y_p = c43_w_p;
    if (c43_y_p) {
      c43_error(chartInstance);
    }

    c43_dc_x = c43_qz;
    c43_qz = c43_dc_x;
    c43_gc_x = c43_qz;
    c43_qz = c43_gc_x;
    c43_qz = muDoubleScalarSqrt(c43_qz);
    _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 38);
    c43_lc_x = c43_a4;
    c43_oc_x = c43_lc_x;
    c43_rc_x = c43_oc_x;
    c43_cb_p = (c43_rc_x < 0.0);
    c43_fb_p = c43_cb_p;
    if (c43_fb_p) {
      c43_error(chartInstance);
    }

    c43_oc_x = muDoubleScalarSqrt(c43_oc_x);
    c43_l_A = 0.25 * (c43_R[3] - c43_R[1]);
    c43_l_B = c43_oc_x;
    c43_xc_x = c43_l_A;
    c43_v_y = c43_l_B;
    c43_cd_x = c43_xc_x;
    c43_y_y = c43_v_y;
    c43_qw = c43_cd_x / c43_y_y;
    break;

   default:
    CV_SCRIPT_SWITCH(2, 0, 0);
    _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 40);
    c43_y = NULL;
    sf_mex_assign(&c43_y, sf_mex_create("y", c43_c_varargin_1, 10, 0U, 1U, 0U, 2,
      1, 47), false);
    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14, c43_y);
    break;
  }

  _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 43);
  c43_q[0] = c43_qx;
  c43_q[1] = c43_qy;
  c43_q[2] = c43_qz;
  c43_q[3] = c43_qw;
  _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 47);
  if (CV_SCRIPT_IF(2, 0, CV_RELATIONAL_EVAL(14U, 2U, 0, c43_qw, 0.0, -1, 2U,
        c43_qw < 0.0))) {
    _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, 48);
    for (c43_i38 = 0; c43_i38 < 4; c43_i38++) {
      c43_q[c43_i38] = -c43_q[c43_i38];
    }
  }

  _SFD_SCRIPT_CALL(2U, chartInstance->c43_sfEvent, -48);
  _SFD_SYMBOL_SCOPE_POP();
}

static void init_script_number_translation(uint32_T c43_machineNumber, uint32_T
  c43_chartNumber, uint32_T c43_instanceNumber)
{
  (void)c43_machineNumber;
  _SFD_SCRIPT_TRANSLATION(c43_chartNumber, c43_instanceNumber, 0U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_Model\\gen\\kin\\m\\p_VectorNav_to_Pelvis.m"));
  _SFD_SCRIPT_TRANSLATION(c43_chartNumber, c43_instanceNumber, 1U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_Model\\gen\\kin\\m\\R_VectorNav_to_Pelvis.m"));
  _SFD_SCRIPT_TRANSLATION(c43_chartNumber, c43_instanceNumber, 2U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\utils\\+Angles\\Rotation_to_Quaternion.m"));
}

static const mxArray *c43_sf_marshallOut(void *chartInstanceVoid, void
  *c43_inData)
{
  const mxArray *c43_mxArrayOutData;
  int32_T c43_i39;
  const mxArray *c43_y = NULL;
  real_T c43_u[43];
  SFc43_UDP_CommunicationInstanceStruct *chartInstance;
  chartInstance = (SFc43_UDP_CommunicationInstanceStruct *)chartInstanceVoid;
  c43_mxArrayOutData = NULL;
  c43_mxArrayOutData = NULL;
  for (c43_i39 = 0; c43_i39 < 43; c43_i39++) {
    c43_u[c43_i39] = (*(real_T (*)[43])c43_inData)[c43_i39];
  }

  c43_y = NULL;
  sf_mex_assign(&c43_y, sf_mex_create("y", c43_u, 0, 0U, 1U, 0U, 1, 43), false);
  sf_mex_assign(&c43_mxArrayOutData, c43_y, false);
  return c43_mxArrayOutData;
}

static void c43_emlrt_marshallIn(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, const mxArray *c43_b_pose_data, const char_T *c43_identifier,
  real_T c43_y[43])
{
  emlrtMsgIdentifier c43_thisId;
  c43_thisId.fIdentifier = c43_identifier;
  c43_thisId.fParent = NULL;
  c43_thisId.bParentIsCell = false;
  c43_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c43_b_pose_data), &c43_thisId,
    c43_y);
  sf_mex_destroy(&c43_b_pose_data);
}

static void c43_b_emlrt_marshallIn(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, const mxArray *c43_u, const emlrtMsgIdentifier *c43_parentId,
  real_T c43_y[43])
{
  real_T c43_dv2[43];
  int32_T c43_i40;
  (void)chartInstance;
  sf_mex_import(c43_parentId, sf_mex_dup(c43_u), c43_dv2, 1, 0, 0U, 1, 0U, 1, 43);
  for (c43_i40 = 0; c43_i40 < 43; c43_i40++) {
    c43_y[c43_i40] = c43_dv2[c43_i40];
  }

  sf_mex_destroy(&c43_u);
}

static void c43_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c43_mxArrayInData, const char_T *c43_varName, void *c43_outData)
{
  const mxArray *c43_b_pose_data;
  const char_T *c43_identifier;
  emlrtMsgIdentifier c43_thisId;
  real_T c43_y[43];
  int32_T c43_i41;
  SFc43_UDP_CommunicationInstanceStruct *chartInstance;
  chartInstance = (SFc43_UDP_CommunicationInstanceStruct *)chartInstanceVoid;
  c43_b_pose_data = sf_mex_dup(c43_mxArrayInData);
  c43_identifier = c43_varName;
  c43_thisId.fIdentifier = c43_identifier;
  c43_thisId.fParent = NULL;
  c43_thisId.bParentIsCell = false;
  c43_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c43_b_pose_data), &c43_thisId,
    c43_y);
  sf_mex_destroy(&c43_b_pose_data);
  for (c43_i41 = 0; c43_i41 < 43; c43_i41++) {
    (*(real_T (*)[43])c43_outData)[c43_i41] = c43_y[c43_i41];
  }

  sf_mex_destroy(&c43_mxArrayInData);
}

static const mxArray *c43_b_sf_marshallOut(void *chartInstanceVoid, void
  *c43_inData)
{
  const mxArray *c43_mxArrayOutData;
  int32_T c43_i42;
  int32_T c43_i43;
  const mxArray *c43_y = NULL;
  int32_T c43_i44;
  real_T c43_u[441];
  SFc43_UDP_CommunicationInstanceStruct *chartInstance;
  chartInstance = (SFc43_UDP_CommunicationInstanceStruct *)chartInstanceVoid;
  c43_mxArrayOutData = NULL;
  c43_mxArrayOutData = NULL;
  c43_i42 = 0;
  for (c43_i43 = 0; c43_i43 < 21; c43_i43++) {
    for (c43_i44 = 0; c43_i44 < 21; c43_i44++) {
      c43_u[c43_i44 + c43_i42] = (*(real_T (*)[441])c43_inData)[c43_i44 +
        c43_i42];
    }

    c43_i42 += 21;
  }

  c43_y = NULL;
  sf_mex_assign(&c43_y, sf_mex_create("y", c43_u, 0, 0U, 1U, 0U, 2, 21, 21),
                false);
  sf_mex_assign(&c43_mxArrayOutData, c43_y, false);
  return c43_mxArrayOutData;
}

static const mxArray *c43_c_sf_marshallOut(void *chartInstanceVoid, void
  *c43_inData)
{
  const mxArray *c43_mxArrayOutData;
  int32_T c43_i45;
  int32_T c43_i46;
  const mxArray *c43_y = NULL;
  int32_T c43_i47;
  real_T c43_u[49];
  SFc43_UDP_CommunicationInstanceStruct *chartInstance;
  chartInstance = (SFc43_UDP_CommunicationInstanceStruct *)chartInstanceVoid;
  c43_mxArrayOutData = NULL;
  c43_mxArrayOutData = NULL;
  c43_i45 = 0;
  for (c43_i46 = 0; c43_i46 < 7; c43_i46++) {
    for (c43_i47 = 0; c43_i47 < 7; c43_i47++) {
      c43_u[c43_i47 + c43_i45] = (*(real_T (*)[49])c43_inData)[c43_i47 + c43_i45];
    }

    c43_i45 += 7;
  }

  c43_y = NULL;
  sf_mex_assign(&c43_y, sf_mex_create("y", c43_u, 0, 0U, 1U, 0U, 2, 7, 7), false);
  sf_mex_assign(&c43_mxArrayOutData, c43_y, false);
  return c43_mxArrayOutData;
}

static const mxArray *c43_d_sf_marshallOut(void *chartInstanceVoid, void
  *c43_inData)
{
  const mxArray *c43_mxArrayOutData;
  real_T c43_u;
  const mxArray *c43_y = NULL;
  SFc43_UDP_CommunicationInstanceStruct *chartInstance;
  chartInstance = (SFc43_UDP_CommunicationInstanceStruct *)chartInstanceVoid;
  c43_mxArrayOutData = NULL;
  c43_mxArrayOutData = NULL;
  c43_u = *(real_T *)c43_inData;
  c43_y = NULL;
  sf_mex_assign(&c43_y, sf_mex_create("y", &c43_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c43_mxArrayOutData, c43_y, false);
  return c43_mxArrayOutData;
}

static real_T c43_c_emlrt_marshallIn(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, const mxArray *c43_u, const emlrtMsgIdentifier *c43_parentId)
{
  real_T c43_y;
  real_T c43_d0;
  (void)chartInstance;
  sf_mex_import(c43_parentId, sf_mex_dup(c43_u), &c43_d0, 1, 0, 0U, 0, 0U, 0);
  c43_y = c43_d0;
  sf_mex_destroy(&c43_u);
  return c43_y;
}

static void c43_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c43_mxArrayInData, const char_T *c43_varName, void *c43_outData)
{
  const mxArray *c43_nargout;
  const char_T *c43_identifier;
  emlrtMsgIdentifier c43_thisId;
  real_T c43_y;
  SFc43_UDP_CommunicationInstanceStruct *chartInstance;
  chartInstance = (SFc43_UDP_CommunicationInstanceStruct *)chartInstanceVoid;
  c43_nargout = sf_mex_dup(c43_mxArrayInData);
  c43_identifier = c43_varName;
  c43_thisId.fIdentifier = c43_identifier;
  c43_thisId.fParent = NULL;
  c43_thisId.bParentIsCell = false;
  c43_y = c43_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c43_nargout),
    &c43_thisId);
  sf_mex_destroy(&c43_nargout);
  *(real_T *)c43_outData = c43_y;
  sf_mex_destroy(&c43_mxArrayInData);
}

static const mxArray *c43_e_sf_marshallOut(void *chartInstanceVoid, void
  *c43_inData)
{
  const mxArray *c43_mxArrayOutData;
  int32_T c43_i48;
  int32_T c43_i49;
  const mxArray *c43_y = NULL;
  int32_T c43_i50;
  real_T c43_u[9];
  SFc43_UDP_CommunicationInstanceStruct *chartInstance;
  chartInstance = (SFc43_UDP_CommunicationInstanceStruct *)chartInstanceVoid;
  c43_mxArrayOutData = NULL;
  c43_mxArrayOutData = NULL;
  c43_i48 = 0;
  for (c43_i49 = 0; c43_i49 < 3; c43_i49++) {
    for (c43_i50 = 0; c43_i50 < 3; c43_i50++) {
      c43_u[c43_i50 + c43_i48] = (*(real_T (*)[9])c43_inData)[c43_i50 + c43_i48];
    }

    c43_i48 += 3;
  }

  c43_y = NULL;
  sf_mex_assign(&c43_y, sf_mex_create("y", c43_u, 0, 0U, 1U, 0U, 2, 3, 3), false);
  sf_mex_assign(&c43_mxArrayOutData, c43_y, false);
  return c43_mxArrayOutData;
}

static void c43_d_emlrt_marshallIn(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, const mxArray *c43_u, const emlrtMsgIdentifier *c43_parentId,
  real_T c43_y[9])
{
  real_T c43_dv3[9];
  int32_T c43_i51;
  (void)chartInstance;
  sf_mex_import(c43_parentId, sf_mex_dup(c43_u), c43_dv3, 1, 0, 0U, 1, 0U, 2, 3,
                3);
  for (c43_i51 = 0; c43_i51 < 9; c43_i51++) {
    c43_y[c43_i51] = c43_dv3[c43_i51];
  }

  sf_mex_destroy(&c43_u);
}

static void c43_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c43_mxArrayInData, const char_T *c43_varName, void *c43_outData)
{
  const mxArray *c43_Rwi;
  const char_T *c43_identifier;
  emlrtMsgIdentifier c43_thisId;
  real_T c43_y[9];
  int32_T c43_i52;
  int32_T c43_i53;
  int32_T c43_i54;
  SFc43_UDP_CommunicationInstanceStruct *chartInstance;
  chartInstance = (SFc43_UDP_CommunicationInstanceStruct *)chartInstanceVoid;
  c43_Rwi = sf_mex_dup(c43_mxArrayInData);
  c43_identifier = c43_varName;
  c43_thisId.fIdentifier = c43_identifier;
  c43_thisId.fParent = NULL;
  c43_thisId.bParentIsCell = false;
  c43_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c43_Rwi), &c43_thisId, c43_y);
  sf_mex_destroy(&c43_Rwi);
  c43_i52 = 0;
  for (c43_i53 = 0; c43_i53 < 3; c43_i53++) {
    for (c43_i54 = 0; c43_i54 < 3; c43_i54++) {
      (*(real_T (*)[9])c43_outData)[c43_i54 + c43_i52] = c43_y[c43_i54 + c43_i52];
    }

    c43_i52 += 3;
  }

  sf_mex_destroy(&c43_mxArrayInData);
}

static const mxArray *c43_f_sf_marshallOut(void *chartInstanceVoid, void
  *c43_inData)
{
  const mxArray *c43_mxArrayOutData;
  int32_T c43_i55;
  const mxArray *c43_y = NULL;
  real_T c43_u[3];
  SFc43_UDP_CommunicationInstanceStruct *chartInstance;
  chartInstance = (SFc43_UDP_CommunicationInstanceStruct *)chartInstanceVoid;
  c43_mxArrayOutData = NULL;
  c43_mxArrayOutData = NULL;
  for (c43_i55 = 0; c43_i55 < 3; c43_i55++) {
    c43_u[c43_i55] = (*(real_T (*)[3])c43_inData)[c43_i55];
  }

  c43_y = NULL;
  sf_mex_assign(&c43_y, sf_mex_create("y", c43_u, 0, 0U, 1U, 0U, 1, 3), false);
  sf_mex_assign(&c43_mxArrayOutData, c43_y, false);
  return c43_mxArrayOutData;
}

static void c43_e_emlrt_marshallIn(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, const mxArray *c43_u, const emlrtMsgIdentifier *c43_parentId,
  real_T c43_y[3])
{
  real_T c43_dv4[3];
  int32_T c43_i56;
  (void)chartInstance;
  sf_mex_import(c43_parentId, sf_mex_dup(c43_u), c43_dv4, 1, 0, 0U, 1, 0U, 1, 3);
  for (c43_i56 = 0; c43_i56 < 3; c43_i56++) {
    c43_y[c43_i56] = c43_dv4[c43_i56];
  }

  sf_mex_destroy(&c43_u);
}

static void c43_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c43_mxArrayInData, const char_T *c43_varName, void *c43_outData)
{
  const mxArray *c43_output1;
  const char_T *c43_identifier;
  emlrtMsgIdentifier c43_thisId;
  real_T c43_y[3];
  int32_T c43_i57;
  SFc43_UDP_CommunicationInstanceStruct *chartInstance;
  chartInstance = (SFc43_UDP_CommunicationInstanceStruct *)chartInstanceVoid;
  c43_output1 = sf_mex_dup(c43_mxArrayInData);
  c43_identifier = c43_varName;
  c43_thisId.fIdentifier = c43_identifier;
  c43_thisId.fParent = NULL;
  c43_thisId.bParentIsCell = false;
  c43_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c43_output1), &c43_thisId,
    c43_y);
  sf_mex_destroy(&c43_output1);
  for (c43_i57 = 0; c43_i57 < 3; c43_i57++) {
    (*(real_T (*)[3])c43_outData)[c43_i57] = c43_y[c43_i57];
  }

  sf_mex_destroy(&c43_mxArrayInData);
}

static const mxArray *c43_g_sf_marshallOut(void *chartInstanceVoid, void
  *c43_inData)
{
  const mxArray *c43_mxArrayOutData;
  int32_T c43_i58;
  const mxArray *c43_y = NULL;
  real_T c43_u[14];
  SFc43_UDP_CommunicationInstanceStruct *chartInstance;
  chartInstance = (SFc43_UDP_CommunicationInstanceStruct *)chartInstanceVoid;
  c43_mxArrayOutData = NULL;
  c43_mxArrayOutData = NULL;
  for (c43_i58 = 0; c43_i58 < 14; c43_i58++) {
    c43_u[c43_i58] = (*(real_T (*)[14])c43_inData)[c43_i58];
  }

  c43_y = NULL;
  sf_mex_assign(&c43_y, sf_mex_create("y", c43_u, 0, 0U, 1U, 0U, 1, 14), false);
  sf_mex_assign(&c43_mxArrayOutData, c43_y, false);
  return c43_mxArrayOutData;
}

static void c43_f_emlrt_marshallIn(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, const mxArray *c43_u, const emlrtMsgIdentifier *c43_parentId,
  real_T c43_y[14])
{
  real_T c43_dv5[14];
  int32_T c43_i59;
  (void)chartInstance;
  sf_mex_import(c43_parentId, sf_mex_dup(c43_u), c43_dv5, 1, 0, 0U, 1, 0U, 1, 14);
  for (c43_i59 = 0; c43_i59 < 14; c43_i59++) {
    c43_y[c43_i59] = c43_dv5[c43_i59];
  }

  sf_mex_destroy(&c43_u);
}

static void c43_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c43_mxArrayInData, const char_T *c43_varName, void *c43_outData)
{
  const mxArray *c43_var1;
  const char_T *c43_identifier;
  emlrtMsgIdentifier c43_thisId;
  real_T c43_y[14];
  int32_T c43_i60;
  SFc43_UDP_CommunicationInstanceStruct *chartInstance;
  chartInstance = (SFc43_UDP_CommunicationInstanceStruct *)chartInstanceVoid;
  c43_var1 = sf_mex_dup(c43_mxArrayInData);
  c43_identifier = c43_varName;
  c43_thisId.fIdentifier = c43_identifier;
  c43_thisId.fParent = NULL;
  c43_thisId.bParentIsCell = false;
  c43_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c43_var1), &c43_thisId, c43_y);
  sf_mex_destroy(&c43_var1);
  for (c43_i60 = 0; c43_i60 < 14; c43_i60++) {
    (*(real_T (*)[14])c43_outData)[c43_i60] = c43_y[c43_i60];
  }

  sf_mex_destroy(&c43_mxArrayInData);
}

static const mxArray *c43_h_sf_marshallOut(void *chartInstanceVoid, void
  *c43_inData)
{
  const mxArray *c43_mxArrayOutData;
  int32_T c43_i61;
  const mxArray *c43_y = NULL;
  real_T c43_u[4];
  SFc43_UDP_CommunicationInstanceStruct *chartInstance;
  chartInstance = (SFc43_UDP_CommunicationInstanceStruct *)chartInstanceVoid;
  c43_mxArrayOutData = NULL;
  c43_mxArrayOutData = NULL;
  for (c43_i61 = 0; c43_i61 < 4; c43_i61++) {
    c43_u[c43_i61] = (*(real_T (*)[4])c43_inData)[c43_i61];
  }

  c43_y = NULL;
  sf_mex_assign(&c43_y, sf_mex_create("y", c43_u, 0, 0U, 1U, 0U, 1, 4), false);
  sf_mex_assign(&c43_mxArrayOutData, c43_y, false);
  return c43_mxArrayOutData;
}

static void c43_g_emlrt_marshallIn(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, const mxArray *c43_u, const emlrtMsgIdentifier *c43_parentId,
  real_T c43_y[4])
{
  real_T c43_dv6[4];
  int32_T c43_i62;
  (void)chartInstance;
  sf_mex_import(c43_parentId, sf_mex_dup(c43_u), c43_dv6, 1, 0, 0U, 1, 0U, 1, 4);
  for (c43_i62 = 0; c43_i62 < 4; c43_i62++) {
    c43_y[c43_i62] = c43_dv6[c43_i62];
  }

  sf_mex_destroy(&c43_u);
}

static void c43_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c43_mxArrayInData, const char_T *c43_varName, void *c43_outData)
{
  const mxArray *c43_q;
  const char_T *c43_identifier;
  emlrtMsgIdentifier c43_thisId;
  real_T c43_y[4];
  int32_T c43_i63;
  SFc43_UDP_CommunicationInstanceStruct *chartInstance;
  chartInstance = (SFc43_UDP_CommunicationInstanceStruct *)chartInstanceVoid;
  c43_q = sf_mex_dup(c43_mxArrayInData);
  c43_identifier = c43_varName;
  c43_thisId.fIdentifier = c43_identifier;
  c43_thisId.fParent = NULL;
  c43_thisId.bParentIsCell = false;
  c43_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c43_q), &c43_thisId, c43_y);
  sf_mex_destroy(&c43_q);
  for (c43_i63 = 0; c43_i63 < 4; c43_i63++) {
    (*(real_T (*)[4])c43_outData)[c43_i63] = c43_y[c43_i63];
  }

  sf_mex_destroy(&c43_mxArrayInData);
}

const mxArray *sf_c43_UDP_Communication_get_eml_resolved_functions_info(void)
{
  const mxArray *c43_nameCaptureInfo = NULL;
  const char * c43_data[5] = {
    "789ced535d6fd330147561543004e205de907844429acb1029e5892d837653036bb6021a42519adc76d6fc5162bbdae047f03726ed65bf86df83dda45d882222"
    "ad05218d2b5d3927d7e7dac7f641b56d0f99b86bf2e32a427533de34790da57123c33593d7b331fdbf82ee64f8bbc9487005c72a2df290019a452c18e12157fb",
    "27634009484127104f2b4342619f30e88a1ce81003d89b5c690e6cc97ebb87101ded69869243395f06d13c98ea69a00b3d2b053db398e9b997e3757ec3b3f3ef"
    "1778168f83f7102991bc0d278112c12ed0099159bf1715fdea857ef5e9a9e90185947f5ec1ff56e05bfce9f567f725ee4b4824f685948f3a61a2289ce02d1169",
    "065c49dc26aaa307d36ae0865212085c738b89a0d4b2a41e30116b0a1267554fc440f108383e221c335caa798dcdcf31afbb5eb2ef5a6edfb72eee65e7f6d98f"
    "8d05f88baebf347ed53b7a807ebd378b45ec8ef487e1d34de75dabeb39d1f3d19e33de4cfb3dcef5ab95f443b9f132f3ffa65ffc2be89752cdfffd32e75fc62f",
    "5183f8b0d36f359bcd86f36cfbeb7a2f51de3fee97dd0a9d0f0b3c8b37f8c8bcac355fa85011c1edfbe9e95041c20d42cbf1cd69055f16f8162fd5375a112af1"
    "93542b2ed7bab05f5e75afb25fbc83f583be8cdbd072fce349bbd76fe9e197ad3fef979f69270261",
    "" };

  c43_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(c43_data, 2664U, &c43_nameCaptureInfo);
  return c43_nameCaptureInfo;
}

static void c43_abs(SFc43_UDP_CommunicationInstanceStruct *chartInstance, real_T
                    c43_x[4], real_T c43_y[4])
{
  int32_T c43_k;
  real_T c43_b_x;
  real_T c43_b_y;
  (void)chartInstance;
  for (c43_k = 0; c43_k + 1 < 5; c43_k++) {
    c43_b_x = c43_x[c43_k];
    c43_b_y = muDoubleScalarAbs(c43_b_x);
    c43_y[c43_k] = c43_b_y;
  }
}

static void c43_check_forloop_overflow_error
  (SFc43_UDP_CommunicationInstanceStruct *chartInstance, boolean_T c43_overflow)
{
  const mxArray *c43_y = NULL;
  static char_T c43_cv0[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *c43_b_y = NULL;
  static char_T c43_cv1[5] = { 'i', 'n', 't', '3', '2' };

  (void)chartInstance;
  if (!c43_overflow) {
  } else {
    c43_y = NULL;
    sf_mex_assign(&c43_y, sf_mex_create("y", c43_cv0, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    c43_b_y = NULL;
    sf_mex_assign(&c43_b_y, sf_mex_create("y", c43_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                      sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message",
      1U, 2U, 14, c43_y, 14, c43_b_y));
  }
}

static void c43_error(SFc43_UDP_CommunicationInstanceStruct *chartInstance)
{
  const mxArray *c43_y = NULL;
  static char_T c43_cv2[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  const mxArray *c43_b_y = NULL;
  static char_T c43_cv3[4] = { 's', 'q', 'r', 't' };

  (void)chartInstance;
  c43_y = NULL;
  sf_mex_assign(&c43_y, sf_mex_create("y", c43_cv2, 10, 0U, 1U, 0U, 2, 1, 30),
                false);
  c43_b_y = NULL;
  sf_mex_assign(&c43_b_y, sf_mex_create("y", c43_cv3, 10, 0U, 1U, 0U, 2, 1, 4),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message", 1U,
    2U, 14, c43_y, 14, c43_b_y));
}

static const mxArray *c43_i_sf_marshallOut(void *chartInstanceVoid, void
  *c43_inData)
{
  const mxArray *c43_mxArrayOutData;
  int32_T c43_u;
  const mxArray *c43_y = NULL;
  SFc43_UDP_CommunicationInstanceStruct *chartInstance;
  chartInstance = (SFc43_UDP_CommunicationInstanceStruct *)chartInstanceVoid;
  c43_mxArrayOutData = NULL;
  c43_mxArrayOutData = NULL;
  c43_u = *(int32_T *)c43_inData;
  c43_y = NULL;
  sf_mex_assign(&c43_y, sf_mex_create("y", &c43_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c43_mxArrayOutData, c43_y, false);
  return c43_mxArrayOutData;
}

static int32_T c43_h_emlrt_marshallIn(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, const mxArray *c43_u, const emlrtMsgIdentifier *c43_parentId)
{
  int32_T c43_y;
  int32_T c43_i64;
  (void)chartInstance;
  sf_mex_import(c43_parentId, sf_mex_dup(c43_u), &c43_i64, 1, 6, 0U, 0, 0U, 0);
  c43_y = c43_i64;
  sf_mex_destroy(&c43_u);
  return c43_y;
}

static void c43_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c43_mxArrayInData, const char_T *c43_varName, void *c43_outData)
{
  const mxArray *c43_b_sfEvent;
  const char_T *c43_identifier;
  emlrtMsgIdentifier c43_thisId;
  int32_T c43_y;
  SFc43_UDP_CommunicationInstanceStruct *chartInstance;
  chartInstance = (SFc43_UDP_CommunicationInstanceStruct *)chartInstanceVoid;
  c43_b_sfEvent = sf_mex_dup(c43_mxArrayInData);
  c43_identifier = c43_varName;
  c43_thisId.fIdentifier = c43_identifier;
  c43_thisId.fParent = NULL;
  c43_thisId.bParentIsCell = false;
  c43_y = c43_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c43_b_sfEvent),
    &c43_thisId);
  sf_mex_destroy(&c43_b_sfEvent);
  *(int32_T *)c43_outData = c43_y;
  sf_mex_destroy(&c43_mxArrayInData);
}

static uint8_T c43_i_emlrt_marshallIn(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, const mxArray *c43_b_is_active_c43_UDP_Communication, const
  char_T *c43_identifier)
{
  uint8_T c43_y;
  emlrtMsgIdentifier c43_thisId;
  c43_thisId.fIdentifier = c43_identifier;
  c43_thisId.fParent = NULL;
  c43_thisId.bParentIsCell = false;
  c43_y = c43_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c43_b_is_active_c43_UDP_Communication), &c43_thisId);
  sf_mex_destroy(&c43_b_is_active_c43_UDP_Communication);
  return c43_y;
}

static uint8_T c43_j_emlrt_marshallIn(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance, const mxArray *c43_u, const emlrtMsgIdentifier *c43_parentId)
{
  uint8_T c43_y;
  uint8_T c43_u0;
  (void)chartInstance;
  sf_mex_import(c43_parentId, sf_mex_dup(c43_u), &c43_u0, 1, 3, 0U, 0, 0U, 0);
  c43_y = c43_u0;
  sf_mex_destroy(&c43_u);
  return c43_y;
}

static void init_dsm_address_info(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc43_UDP_CommunicationInstanceStruct
  *chartInstance)
{
  chartInstance->c43_pose_data = (real_T (*)[43])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c43_X = (real_T (*)[49])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c43_P = (real_T (*)[441])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
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

void sf_c43_UDP_Communication_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1289525157U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1854011942U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2584512594U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2375926678U);
}

mxArray* sf_c43_UDP_Communication_get_post_codegen_info(void);
mxArray *sf_c43_UDP_Communication_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("EMzBK1twZORtPZ7whrrf9G");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(21);
      pr[1] = (double)(21);
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
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(43);
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
    mxArray* mxPostCodegenInfo = sf_c43_UDP_Communication_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c43_UDP_Communication_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c43_UDP_Communication_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("p_VectorNav_to_Pelvis_src");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c43_UDP_Communication_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c43_UDP_Communication_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c43_UDP_Communication(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[6],T\"pose_data\",},{M[8],M[0],T\"is_active_c43_UDP_Communication\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c43_UDP_Communication_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc43_UDP_CommunicationInstanceStruct *chartInstance =
      (SFc43_UDP_CommunicationInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _UDP_CommunicationMachineNumber_,
           43,
           1,
           1,
           0,
           3,
           0,
           0,
           0,
           0,
           3,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_UDP_CommunicationMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_UDP_CommunicationMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _UDP_CommunicationMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"X");
          _SFD_SET_DATA_PROPS(1,1,1,0,"P");
          _SFD_SET_DATA_PROPS(2,2,0,1,"pose_data");
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
        _SFD_CV_INIT_EML(0,1,1,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,457);
        _SFD_CV_INIT_SCRIPT(0,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(0,0,"p_VectorNav_to_Pelvis",0,-1,379);
        _SFD_CV_INIT_SCRIPT_IF(0,0,53,78,136,375);
        _SFD_CV_INIT_SCRIPT(1,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(1,0,"R_VectorNav_to_Pelvis",0,-1,379);
        _SFD_CV_INIT_SCRIPT_IF(1,0,53,78,136,375);
        _SFD_CV_INIT_SCRIPT(2,1,0,1,0,0,1,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(2,0,"Rotation_to_Quaternion",0,-1,1602);
        _SFD_CV_INIT_SCRIPT_IF(2,0,1572,1581,-1,1597);

        {
          static int caseStart[] = { 1389, 649, 834, 1019, 1204 };

          static int caseExprEnd[] = { 1398, 656, 841, 1026, 1211 };

          _SFD_CV_INIT_SCRIPT_SWITCH(2,0,632,645,1467,5,&(caseStart[0]),
            &(caseExprEnd[0]));
        }

        _SFD_CV_INIT_SCRIPT_RELATIONAL(2,0,1575,1581,-1,2);

        {
          unsigned int dimVector[2];
          dimVector[0]= 7U;
          dimVector[1]= 7U;
          _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c43_c_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[2];
          dimVector[0]= 21U;
          dimVector[1]= 21U;
          _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c43_b_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 43U;
          _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c43_sf_marshallOut,(MexInFcnForType)
            c43_sf_marshallIn);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _UDP_CommunicationMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc43_UDP_CommunicationInstanceStruct *chartInstance =
      (SFc43_UDP_CommunicationInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(2U, *chartInstance->c43_pose_data);
        _SFD_SET_DATA_VALUE_PTR(0U, *chartInstance->c43_X);
        _SFD_SET_DATA_VALUE_PTR(1U, *chartInstance->c43_P);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sqQagvE1YWMMN5MMyq5U8G";
}

static void sf_opaque_initialize_c43_UDP_Communication(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc43_UDP_CommunicationInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c43_UDP_Communication((SFc43_UDP_CommunicationInstanceStruct*)
    chartInstanceVar);
  initialize_c43_UDP_Communication((SFc43_UDP_CommunicationInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c43_UDP_Communication(void *chartInstanceVar)
{
  enable_c43_UDP_Communication((SFc43_UDP_CommunicationInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c43_UDP_Communication(void *chartInstanceVar)
{
  disable_c43_UDP_Communication((SFc43_UDP_CommunicationInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c43_UDP_Communication(void *chartInstanceVar)
{
  sf_gateway_c43_UDP_Communication((SFc43_UDP_CommunicationInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c43_UDP_Communication(SimStruct* S)
{
  return get_sim_state_c43_UDP_Communication
    ((SFc43_UDP_CommunicationInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c43_UDP_Communication(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c43_UDP_Communication((SFc43_UDP_CommunicationInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c43_UDP_Communication(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc43_UDP_CommunicationInstanceStruct*) chartInstanceVar)
      ->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_UDP_Communication_optimization_info();
    }

    finalize_c43_UDP_Communication((SFc43_UDP_CommunicationInstanceStruct*)
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
  initSimStructsc43_UDP_Communication((SFc43_UDP_CommunicationInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c43_UDP_Communication(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c43_UDP_Communication
      ((SFc43_UDP_CommunicationInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

static void mdlSetWorkWidths_c43_UDP_Communication(SimStruct *S)
{
  /* Set overwritable ports for inplace optimization */
  ssSetStatesModifiedOnlyInUpdate(S, 1);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_UDP_Communication_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      43);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,43,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 43);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,43);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,43,2);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,43,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 2; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,43);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2441204683U));
  ssSetChecksum1(S,(1542931678U));
  ssSetChecksum2(S,(1176382042U));
  ssSetChecksum3(S,(1147157735U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c43_UDP_Communication(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c43_UDP_Communication(SimStruct *S)
{
  SFc43_UDP_CommunicationInstanceStruct *chartInstance;
  chartInstance = (SFc43_UDP_CommunicationInstanceStruct *)utMalloc(sizeof
    (SFc43_UDP_CommunicationInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc43_UDP_CommunicationInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c43_UDP_Communication;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c43_UDP_Communication;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c43_UDP_Communication;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c43_UDP_Communication;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c43_UDP_Communication;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c43_UDP_Communication;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c43_UDP_Communication;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c43_UDP_Communication;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c43_UDP_Communication;
  chartInstance->chartInfo.mdlStart = mdlStart_c43_UDP_Communication;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c43_UDP_Communication;
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
  mdl_start_c43_UDP_Communication(chartInstance);
}

void c43_UDP_Communication_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c43_UDP_Communication(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c43_UDP_Communication(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c43_UDP_Communication(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c43_UDP_Communication_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
