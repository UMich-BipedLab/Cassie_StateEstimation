/* Include files */

#include "StateEstimation_sfun.h"
#include "c21_StateEstimation.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "StateEstimation_sfun_debug_macros.h"
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
static const char * c21_debug_family_names[11] = { "pL", "J_pL", "pR", "J_pR",
  "nargin", "nargout", "w", "e", "e_dot", "contact", "velocity" };

static const char * c21_b_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

static const char * c21_c_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

static const char * c21_d_debug_family_names[4] = { "nargin", "nargout", "v",
  "Ax" };

static const char * c21_e_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

static const char * c21_f_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

/* Function Declarations */
static void initialize_c21_StateEstimation(SFc21_StateEstimationInstanceStruct
  *chartInstance);
static void initialize_params_c21_StateEstimation
  (SFc21_StateEstimationInstanceStruct *chartInstance);
static void enable_c21_StateEstimation(SFc21_StateEstimationInstanceStruct
  *chartInstance);
static void disable_c21_StateEstimation(SFc21_StateEstimationInstanceStruct
  *chartInstance);
static void c21_update_debugger_state_c21_StateEstimation
  (SFc21_StateEstimationInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c21_StateEstimation
  (SFc21_StateEstimationInstanceStruct *chartInstance);
static void set_sim_state_c21_StateEstimation
  (SFc21_StateEstimationInstanceStruct *chartInstance, const mxArray *c21_st);
static void finalize_c21_StateEstimation(SFc21_StateEstimationInstanceStruct
  *chartInstance);
static void sf_gateway_c21_StateEstimation(SFc21_StateEstimationInstanceStruct
  *chartInstance);
static void mdl_start_c21_StateEstimation(SFc21_StateEstimationInstanceStruct
  *chartInstance);
static void initSimStructsc21_StateEstimation
  (SFc21_StateEstimationInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c21_machineNumber, uint32_T
  c21_chartNumber, uint32_T c21_instanceNumber);
static const mxArray *c21_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData);
static void c21_emlrt_marshallIn(SFc21_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c21_b_velocity, const char_T *c21_identifier,
  real_T c21_y[3]);
static void c21_b_emlrt_marshallIn(SFc21_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId,
  real_T c21_y[3]);
static void c21_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData);
static const mxArray *c21_b_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData);
static const mxArray *c21_c_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData);
static const mxArray *c21_d_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData);
static real_T c21_c_emlrt_marshallIn(SFc21_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId);
static void c21_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData);
static const mxArray *c21_e_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData);
static void c21_d_emlrt_marshallIn(SFc21_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId,
  real_T c21_y[42]);
static void c21_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData);
static void c21_e_emlrt_marshallIn(SFc21_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId,
  real_T c21_y[14]);
static void c21_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData);
static const mxArray *c21_f_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData);
static void c21_f_emlrt_marshallIn(SFc21_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId,
  real_T c21_y[9]);
static void c21_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData);
static const mxArray *c21_g_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData);
static int32_T c21_g_emlrt_marshallIn(SFc21_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId);
static void c21_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData);
static uint8_T c21_h_emlrt_marshallIn(SFc21_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c21_b_is_active_c21_StateEstimation, const
  char_T *c21_identifier);
static uint8_T c21_i_emlrt_marshallIn(SFc21_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId);
static void init_dsm_address_info(SFc21_StateEstimationInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc21_StateEstimationInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c21_StateEstimation(SFc21_StateEstimationInstanceStruct
  *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc21_StateEstimation(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  chartInstance->c21_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c21_is_active_c21_StateEstimation = 0U;
}

static void initialize_params_c21_StateEstimation
  (SFc21_StateEstimationInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c21_StateEstimation(SFc21_StateEstimationInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c21_StateEstimation(SFc21_StateEstimationInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c21_update_debugger_state_c21_StateEstimation
  (SFc21_StateEstimationInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c21_StateEstimation
  (SFc21_StateEstimationInstanceStruct *chartInstance)
{
  const mxArray *c21_st;
  const mxArray *c21_y = NULL;
  const mxArray *c21_b_y = NULL;
  uint8_T c21_hoistedGlobal;
  const mxArray *c21_c_y = NULL;
  c21_st = NULL;
  c21_st = NULL;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_createcellmatrix(2, 1), false);
  c21_b_y = NULL;
  sf_mex_assign(&c21_b_y, sf_mex_create("y", *chartInstance->c21_velocity, 0, 0U,
    1U, 0U, 1, 3), false);
  sf_mex_setcell(c21_y, 0, c21_b_y);
  c21_hoistedGlobal = chartInstance->c21_is_active_c21_StateEstimation;
  c21_c_y = NULL;
  sf_mex_assign(&c21_c_y, sf_mex_create("y", &c21_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c21_y, 1, c21_c_y);
  sf_mex_assign(&c21_st, c21_y, false);
  return c21_st;
}

static void set_sim_state_c21_StateEstimation
  (SFc21_StateEstimationInstanceStruct *chartInstance, const mxArray *c21_st)
{
  const mxArray *c21_u;
  real_T c21_dv0[3];
  int32_T c21_i0;
  chartInstance->c21_doneDoubleBufferReInit = true;
  c21_u = sf_mex_dup(c21_st);
  c21_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("velocity",
    c21_u, 0)), "velocity", c21_dv0);
  for (c21_i0 = 0; c21_i0 < 3; c21_i0++) {
    (*chartInstance->c21_velocity)[c21_i0] = c21_dv0[c21_i0];
  }

  chartInstance->c21_is_active_c21_StateEstimation = c21_h_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c21_StateEstimation",
       c21_u, 1)), "is_active_c21_StateEstimation");
  sf_mex_destroy(&c21_u);
  c21_update_debugger_state_c21_StateEstimation(chartInstance);
  sf_mex_destroy(&c21_st);
}

static void finalize_c21_StateEstimation(SFc21_StateEstimationInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c21_StateEstimation(SFc21_StateEstimationInstanceStruct
  *chartInstance)
{
  int32_T c21_i1;
  int32_T c21_i2;
  int32_T c21_i3;
  int32_T c21_i4;
  int32_T c21_i5;
  int32_T c21_i6;
  real_T c21_b_w[3];
  int32_T c21_i7;
  real_T c21_b_e[14];
  int32_T c21_i8;
  real_T c21_b_e_dot[14];
  uint32_T c21_debug_family_var_map[11];
  real_T c21_b_contact[2];
  real_T c21_pL[3];
  real_T c21_J_pL[42];
  real_T c21_pR[3];
  real_T c21_J_pR[42];
  real_T c21_nargin = 4.0;
  real_T c21_nargout = 1.0;
  real_T c21_b_velocity[3];
  int32_T c21_i9;
  int32_T c21_i10;
  int32_T c21_i11;
  uint32_T c21_b_debug_family_var_map[4];
  real_T c21_var1[14];
  real_T c21_b_nargin = 1.0;
  real_T c21_b_var1[14];
  real_T c21_b_nargout = 1.0;
  real_T c21_c_nargin = 1.0;
  real_T c21_c_nargout = 1.0;
  int32_T c21_i12;
  int32_T c21_i13;
  int32_T c21_i14;
  int32_T c21_i15;
  int32_T c21_i16;
  int32_T c21_i17;
  real_T c21_c_var1[14];
  real_T c21_d_nargin = 1.0;
  real_T c21_d_var1[14];
  real_T c21_d_nargout = 1.0;
  real_T c21_e_nargin = 1.0;
  real_T c21_e_nargout = 1.0;
  int32_T c21_i18;
  int32_T c21_i19;
  int32_T c21_i20;
  int32_T c21_i21;
  int32_T c21_i22;
  real_T c21_a[42];
  int32_T c21_i23;
  int32_T c21_i24;
  real_T c21_b[14];
  int32_T c21_i25;
  int32_T c21_i26;
  real_T c21_y[3];
  int32_T c21_i27;
  int32_T c21_i28;
  int32_T c21_i29;
  int32_T c21_i30;
  real_T c21_v[3];
  int32_T c21_i31;
  real_T c21_f_nargin = 1.0;
  real_T c21_b_v[3];
  real_T c21_f_nargout = 1.0;
  real_T c21_g_nargin = 1.0;
  real_T c21_g_nargout = 1.0;
  real_T c21_Ax[9];
  real_T c21_b_Ax[9];
  int32_T c21_i32;
  int32_T c21_i33;
  int32_T c21_i34;
  real_T c21_b_a[9];
  int32_T c21_i35;
  int32_T c21_i36;
  real_T c21_b_b[3];
  int32_T c21_i37;
  int32_T c21_i38;
  real_T c21_b_y[3];
  int32_T c21_i39;
  int32_T c21_i40;
  int32_T c21_i41;
  int32_T c21_i42;
  int32_T c21_i43;
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U, chartInstance->c21_sfEvent);
  for (c21_i1 = 0; c21_i1 < 2; c21_i1++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c21_contact)[c21_i1], 3U, 1U, 0U,
                          chartInstance->c21_sfEvent, false);
  }

  for (c21_i2 = 0; c21_i2 < 14; c21_i2++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c21_e_dot)[c21_i2], 2U, 1U, 0U,
                          chartInstance->c21_sfEvent, false);
  }

  for (c21_i3 = 0; c21_i3 < 14; c21_i3++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c21_e)[c21_i3], 1U, 1U, 0U,
                          chartInstance->c21_sfEvent, false);
  }

  for (c21_i4 = 0; c21_i4 < 3; c21_i4++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c21_w)[c21_i4], 0U, 1U, 0U,
                          chartInstance->c21_sfEvent, false);
  }

  chartInstance->c21_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c21_sfEvent);
  for (c21_i5 = 0; c21_i5 < 3; c21_i5++) {
    c21_b_w[c21_i5] = (*chartInstance->c21_w)[c21_i5];
  }

  for (c21_i6 = 0; c21_i6 < 14; c21_i6++) {
    c21_b_e[c21_i6] = (*chartInstance->c21_e)[c21_i6];
  }

  for (c21_i7 = 0; c21_i7 < 14; c21_i7++) {
    c21_b_e_dot[c21_i7] = (*chartInstance->c21_e_dot)[c21_i7];
  }

  for (c21_i8 = 0; c21_i8 < 2; c21_i8++) {
    c21_b_contact[c21_i8] = (*chartInstance->c21_contact)[c21_i8];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 11U, 11U, c21_debug_family_names,
    c21_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c21_pL, 0U, c21_sf_marshallOut,
    c21_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c21_J_pL, 1U, c21_e_sf_marshallOut,
    c21_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c21_pR, 2U, c21_sf_marshallOut,
    c21_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c21_J_pR, 3U, c21_e_sf_marshallOut,
    c21_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c21_nargin, 4U, c21_d_sf_marshallOut,
    c21_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c21_nargout, 5U, c21_d_sf_marshallOut,
    c21_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c21_b_w, 6U, c21_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c21_b_e, 7U, c21_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c21_b_e_dot, 8U, c21_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c21_b_contact, 9U, c21_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c21_b_velocity, 10U, c21_sf_marshallOut,
    c21_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 4);
  if (CV_EML_IF(0, 1, 0, CV_RELATIONAL_EVAL(4U, 0U, 0, c21_b_contact[0], 1.0, -1,
        0U, c21_b_contact[0] == 1.0))) {
    _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 5);
    for (c21_i9 = 0; c21_i9 < 14; c21_i9++) {
      c21_var1[c21_i9] = c21_b_e[c21_i9];
    }

    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c21_b_debug_family_names,
      c21_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c21_b_nargin, 0U, c21_d_sf_marshallOut,
      c21_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c21_b_nargout, 1U,
      c21_d_sf_marshallOut, c21_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c21_var1, 2U, c21_c_sf_marshallOut,
      c21_d_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c21_pL, 3U, c21_sf_marshallOut,
      c21_sf_marshallIn);
    CV_SCRIPT_FCN(0, 0);
    _SFD_SCRIPT_CALL(0U, chartInstance->c21_sfEvent, 2);
    CV_SCRIPT_IF(0, 0, false);
    _SFD_SCRIPT_CALL(0U, chartInstance->c21_sfEvent, 5);
    _SFD_SCRIPT_CALL(0U, chartInstance->c21_sfEvent, 7);
    for (c21_i13 = 0; c21_i13 < 3; c21_i13++) {
      c21_pL[c21_i13] = 0.0;
    }

    _SFD_SCRIPT_CALL(0U, chartInstance->c21_sfEvent, 10);
    p_VectorNav_to_LeftToeBottom_src(c21_pL, c21_var1);
    _SFD_SCRIPT_CALL(0U, chartInstance->c21_sfEvent, -10);
    _SFD_SYMBOL_SCOPE_POP();
    _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 6);
    for (c21_i16 = 0; c21_i16 < 14; c21_i16++) {
      c21_c_var1[c21_i16] = c21_b_e[c21_i16];
    }

    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c21_c_debug_family_names,
      c21_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c21_d_nargin, 0U, c21_d_sf_marshallOut,
      c21_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c21_d_nargout, 1U,
      c21_d_sf_marshallOut, c21_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c21_c_var1, 2U, c21_c_sf_marshallOut,
      c21_d_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c21_J_pL, 3U, c21_e_sf_marshallOut,
      c21_c_sf_marshallIn);
    CV_SCRIPT_FCN(1, 0);
    _SFD_SCRIPT_CALL(1U, chartInstance->c21_sfEvent, 2);
    CV_SCRIPT_IF(1, 0, false);
    _SFD_SCRIPT_CALL(1U, chartInstance->c21_sfEvent, 5);
    _SFD_SCRIPT_CALL(1U, chartInstance->c21_sfEvent, 7);
    for (c21_i18 = 0; c21_i18 < 42; c21_i18++) {
      c21_J_pL[c21_i18] = 0.0;
    }

    _SFD_SCRIPT_CALL(1U, chartInstance->c21_sfEvent, 10);
    J_VectorNav_to_LeftToeBottom_src(c21_J_pL, c21_c_var1);
    _SFD_SCRIPT_CALL(1U, chartInstance->c21_sfEvent, -10);
    _SFD_SYMBOL_SCOPE_POP();
    _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 7);
    for (c21_i20 = 0; c21_i20 < 42; c21_i20++) {
      c21_a[c21_i20] = -c21_J_pL[c21_i20];
    }

    for (c21_i22 = 0; c21_i22 < 14; c21_i22++) {
      c21_b[c21_i22] = c21_b_e_dot[c21_i22];
    }

    for (c21_i24 = 0; c21_i24 < 3; c21_i24++) {
      c21_y[c21_i24] = 0.0;
      c21_i27 = 0;
      for (c21_i29 = 0; c21_i29 < 14; c21_i29++) {
        c21_y[c21_i24] += c21_a[c21_i27 + c21_i24] * c21_b[c21_i29];
        c21_i27 += 3;
      }
    }

    for (c21_i26 = 0; c21_i26 < 3; c21_i26++) {
      c21_v[c21_i26] = c21_b_w[c21_i26];
    }

    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c21_d_debug_family_names,
      c21_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c21_f_nargin, 0U, c21_d_sf_marshallOut,
      c21_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c21_f_nargout, 1U,
      c21_d_sf_marshallOut, c21_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c21_v, 2U, c21_sf_marshallOut,
      c21_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c21_Ax, 3U, c21_f_sf_marshallOut,
      c21_e_sf_marshallIn);
    CV_SCRIPT_FCN(2, 0);
    _SFD_SCRIPT_CALL(2U, chartInstance->c21_sfEvent, 3);
    c21_Ax[0] = 0.0;
    c21_Ax[3] = -c21_v[2];
    c21_Ax[6] = c21_v[1];
    c21_Ax[1] = c21_v[2];
    c21_Ax[4] = 0.0;
    c21_Ax[7] = -c21_v[0];
    c21_Ax[2] = -c21_v[1];
    c21_Ax[5] = c21_v[0];
    c21_Ax[8] = 0.0;
    _SFD_SCRIPT_CALL(2U, chartInstance->c21_sfEvent, -3);
    _SFD_SYMBOL_SCOPE_POP();
    for (c21_i32 = 0; c21_i32 < 9; c21_i32++) {
      c21_b_a[c21_i32] = c21_Ax[c21_i32];
    }

    for (c21_i34 = 0; c21_i34 < 3; c21_i34++) {
      c21_b_b[c21_i34] = c21_pL[c21_i34];
    }

    for (c21_i36 = 0; c21_i36 < 3; c21_i36++) {
      c21_b_y[c21_i36] = 0.0;
      c21_i39 = 0;
      for (c21_i41 = 0; c21_i41 < 3; c21_i41++) {
        c21_b_y[c21_i36] += c21_b_a[c21_i39 + c21_i36] * c21_b_b[c21_i41];
        c21_i39 += 3;
      }
    }

    for (c21_i38 = 0; c21_i38 < 3; c21_i38++) {
      c21_b_velocity[c21_i38] = c21_y[c21_i38] - c21_b_y[c21_i38];
    }
  } else {
    _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 8);
    if (CV_EML_IF(0, 1, 1, CV_RELATIONAL_EVAL(4U, 0U, 1, c21_b_contact[1], 1.0,
          -1, 0U, c21_b_contact[1] == 1.0))) {
      _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 9);
      for (c21_i11 = 0; c21_i11 < 14; c21_i11++) {
        c21_b_var1[c21_i11] = c21_b_e[c21_i11];
      }

      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c21_e_debug_family_names,
        c21_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c21_c_nargin, 0U,
        c21_d_sf_marshallOut, c21_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c21_c_nargout, 1U,
        c21_d_sf_marshallOut, c21_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c21_b_var1, 2U, c21_c_sf_marshallOut,
        c21_d_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c21_pR, 3U, c21_sf_marshallOut,
        c21_sf_marshallIn);
      CV_SCRIPT_FCN(3, 0);
      _SFD_SCRIPT_CALL(3U, chartInstance->c21_sfEvent, 2);
      CV_SCRIPT_IF(3, 0, false);
      _SFD_SCRIPT_CALL(3U, chartInstance->c21_sfEvent, 5);
      _SFD_SCRIPT_CALL(3U, chartInstance->c21_sfEvent, 7);
      for (c21_i15 = 0; c21_i15 < 3; c21_i15++) {
        c21_pR[c21_i15] = 0.0;
      }

      _SFD_SCRIPT_CALL(3U, chartInstance->c21_sfEvent, 10);
      p_VectorNav_to_RightToeBottom_src(c21_pR, c21_b_var1);
      _SFD_SCRIPT_CALL(3U, chartInstance->c21_sfEvent, -10);
      _SFD_SYMBOL_SCOPE_POP();
      _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 10);
      for (c21_i17 = 0; c21_i17 < 14; c21_i17++) {
        c21_d_var1[c21_i17] = c21_b_e[c21_i17];
      }

      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c21_f_debug_family_names,
        c21_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c21_e_nargin, 0U,
        c21_d_sf_marshallOut, c21_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c21_e_nargout, 1U,
        c21_d_sf_marshallOut, c21_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c21_d_var1, 2U, c21_c_sf_marshallOut,
        c21_d_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c21_J_pR, 3U, c21_e_sf_marshallOut,
        c21_c_sf_marshallIn);
      CV_SCRIPT_FCN(4, 0);
      _SFD_SCRIPT_CALL(4U, chartInstance->c21_sfEvent, 2);
      CV_SCRIPT_IF(4, 0, false);
      _SFD_SCRIPT_CALL(4U, chartInstance->c21_sfEvent, 5);
      _SFD_SCRIPT_CALL(4U, chartInstance->c21_sfEvent, 7);
      for (c21_i19 = 0; c21_i19 < 42; c21_i19++) {
        c21_J_pR[c21_i19] = 0.0;
      }

      _SFD_SCRIPT_CALL(4U, chartInstance->c21_sfEvent, 10);
      J_VectorNav_to_RightToeBottom_src(c21_J_pR, c21_d_var1);
      _SFD_SCRIPT_CALL(4U, chartInstance->c21_sfEvent, -10);
      _SFD_SYMBOL_SCOPE_POP();
      _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 11);
      for (c21_i21 = 0; c21_i21 < 42; c21_i21++) {
        c21_a[c21_i21] = -c21_J_pR[c21_i21];
      }

      for (c21_i23 = 0; c21_i23 < 14; c21_i23++) {
        c21_b[c21_i23] = c21_b_e_dot[c21_i23];
      }

      for (c21_i25 = 0; c21_i25 < 3; c21_i25++) {
        c21_y[c21_i25] = 0.0;
        c21_i30 = 0;
        for (c21_i31 = 0; c21_i31 < 14; c21_i31++) {
          c21_y[c21_i25] += c21_a[c21_i30 + c21_i25] * c21_b[c21_i31];
          c21_i30 += 3;
        }
      }

      for (c21_i28 = 0; c21_i28 < 3; c21_i28++) {
        c21_b_v[c21_i28] = c21_b_w[c21_i28];
      }

      _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c21_d_debug_family_names,
        c21_b_debug_family_var_map);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c21_g_nargin, 0U,
        c21_d_sf_marshallOut, c21_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c21_g_nargout, 1U,
        c21_d_sf_marshallOut, c21_b_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c21_b_v, 2U, c21_sf_marshallOut,
        c21_sf_marshallIn);
      _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c21_b_Ax, 3U, c21_f_sf_marshallOut,
        c21_e_sf_marshallIn);
      CV_SCRIPT_FCN(2, 0);
      _SFD_SCRIPT_CALL(2U, chartInstance->c21_sfEvent, 3);
      c21_b_Ax[0] = 0.0;
      c21_b_Ax[3] = -c21_b_v[2];
      c21_b_Ax[6] = c21_b_v[1];
      c21_b_Ax[1] = c21_b_v[2];
      c21_b_Ax[4] = 0.0;
      c21_b_Ax[7] = -c21_b_v[0];
      c21_b_Ax[2] = -c21_b_v[1];
      c21_b_Ax[5] = c21_b_v[0];
      c21_b_Ax[8] = 0.0;
      _SFD_SCRIPT_CALL(2U, chartInstance->c21_sfEvent, -3);
      _SFD_SYMBOL_SCOPE_POP();
      for (c21_i33 = 0; c21_i33 < 9; c21_i33++) {
        c21_b_a[c21_i33] = c21_b_Ax[c21_i33];
      }

      for (c21_i35 = 0; c21_i35 < 3; c21_i35++) {
        c21_b_b[c21_i35] = c21_pR[c21_i35];
      }

      for (c21_i37 = 0; c21_i37 < 3; c21_i37++) {
        c21_b_y[c21_i37] = 0.0;
        c21_i42 = 0;
        for (c21_i43 = 0; c21_i43 < 3; c21_i43++) {
          c21_b_y[c21_i37] += c21_b_a[c21_i42 + c21_i37] * c21_b_b[c21_i43];
          c21_i42 += 3;
        }
      }

      for (c21_i40 = 0; c21_i40 < 3; c21_i40++) {
        c21_b_velocity[c21_i40] = c21_y[c21_i40] - c21_b_y[c21_i40];
      }
    } else {
      _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, 13);
      for (c21_i10 = 0; c21_i10 < 3; c21_i10++) {
        c21_b_velocity[c21_i10] = 0.0;
      }
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c21_sfEvent, -13);
  _SFD_SYMBOL_SCOPE_POP();
  for (c21_i12 = 0; c21_i12 < 3; c21_i12++) {
    (*chartInstance->c21_velocity)[c21_i12] = c21_b_velocity[c21_i12];
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c21_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_StateEstimationMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  for (c21_i14 = 0; c21_i14 < 3; c21_i14++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c21_velocity)[c21_i14], 4U, 1U, 0U,
                          chartInstance->c21_sfEvent, false);
  }
}

static void mdl_start_c21_StateEstimation(SFc21_StateEstimationInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initSimStructsc21_StateEstimation
  (SFc21_StateEstimationInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c21_machineNumber, uint32_T
  c21_chartNumber, uint32_T c21_instanceNumber)
{
  (void)c21_machineNumber;
  _SFD_SCRIPT_TRANSLATION(c21_chartNumber, c21_instanceNumber, 0U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_Model\\gen\\kin\\m\\p_VectorNav_to_LeftToeBottom.m"));
  _SFD_SCRIPT_TRANSLATION(c21_chartNumber, c21_instanceNumber, 1U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_Model\\gen\\kin\\m\\J_VectorNav_to_LeftToeBottom.m"));
  _SFD_SCRIPT_TRANSLATION(c21_chartNumber, c21_instanceNumber, 2U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\utils\\+Angles\\skew.m"));
  _SFD_SCRIPT_TRANSLATION(c21_chartNumber, c21_instanceNumber, 3U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_Model\\gen\\kin\\m\\p_VectorNav_to_RightToeBottom.m"));
  _SFD_SCRIPT_TRANSLATION(c21_chartNumber, c21_instanceNumber, 4U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_Model\\gen\\kin\\m\\J_VectorNav_to_RightToeBottom.m"));
}

static const mxArray *c21_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData)
{
  const mxArray *c21_mxArrayOutData;
  int32_T c21_i44;
  const mxArray *c21_y = NULL;
  real_T c21_u[3];
  SFc21_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc21_StateEstimationInstanceStruct *)chartInstanceVoid;
  c21_mxArrayOutData = NULL;
  c21_mxArrayOutData = NULL;
  for (c21_i44 = 0; c21_i44 < 3; c21_i44++) {
    c21_u[c21_i44] = (*(real_T (*)[3])c21_inData)[c21_i44];
  }

  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_create("y", c21_u, 0, 0U, 1U, 0U, 1, 3), false);
  sf_mex_assign(&c21_mxArrayOutData, c21_y, false);
  return c21_mxArrayOutData;
}

static void c21_emlrt_marshallIn(SFc21_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c21_b_velocity, const char_T *c21_identifier,
  real_T c21_y[3])
{
  emlrtMsgIdentifier c21_thisId;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_thisId.bParentIsCell = false;
  c21_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_b_velocity), &c21_thisId,
    c21_y);
  sf_mex_destroy(&c21_b_velocity);
}

static void c21_b_emlrt_marshallIn(SFc21_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId,
  real_T c21_y[3])
{
  real_T c21_dv1[3];
  int32_T c21_i45;
  (void)chartInstance;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), c21_dv1, 1, 0, 0U, 1, 0U, 1, 3);
  for (c21_i45 = 0; c21_i45 < 3; c21_i45++) {
    c21_y[c21_i45] = c21_dv1[c21_i45];
  }

  sf_mex_destroy(&c21_u);
}

static void c21_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData)
{
  const mxArray *c21_b_velocity;
  const char_T *c21_identifier;
  emlrtMsgIdentifier c21_thisId;
  real_T c21_y[3];
  int32_T c21_i46;
  SFc21_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc21_StateEstimationInstanceStruct *)chartInstanceVoid;
  c21_b_velocity = sf_mex_dup(c21_mxArrayInData);
  c21_identifier = c21_varName;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_thisId.bParentIsCell = false;
  c21_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_b_velocity), &c21_thisId,
    c21_y);
  sf_mex_destroy(&c21_b_velocity);
  for (c21_i46 = 0; c21_i46 < 3; c21_i46++) {
    (*(real_T (*)[3])c21_outData)[c21_i46] = c21_y[c21_i46];
  }

  sf_mex_destroy(&c21_mxArrayInData);
}

static const mxArray *c21_b_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData)
{
  const mxArray *c21_mxArrayOutData;
  int32_T c21_i47;
  const mxArray *c21_y = NULL;
  real_T c21_u[2];
  SFc21_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc21_StateEstimationInstanceStruct *)chartInstanceVoid;
  c21_mxArrayOutData = NULL;
  c21_mxArrayOutData = NULL;
  for (c21_i47 = 0; c21_i47 < 2; c21_i47++) {
    c21_u[c21_i47] = (*(real_T (*)[2])c21_inData)[c21_i47];
  }

  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_create("y", c21_u, 0, 0U, 1U, 0U, 1, 2), false);
  sf_mex_assign(&c21_mxArrayOutData, c21_y, false);
  return c21_mxArrayOutData;
}

static const mxArray *c21_c_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData)
{
  const mxArray *c21_mxArrayOutData;
  int32_T c21_i48;
  const mxArray *c21_y = NULL;
  real_T c21_u[14];
  SFc21_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc21_StateEstimationInstanceStruct *)chartInstanceVoid;
  c21_mxArrayOutData = NULL;
  c21_mxArrayOutData = NULL;
  for (c21_i48 = 0; c21_i48 < 14; c21_i48++) {
    c21_u[c21_i48] = (*(real_T (*)[14])c21_inData)[c21_i48];
  }

  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_create("y", c21_u, 0, 0U, 1U, 0U, 1, 14), false);
  sf_mex_assign(&c21_mxArrayOutData, c21_y, false);
  return c21_mxArrayOutData;
}

static const mxArray *c21_d_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData)
{
  const mxArray *c21_mxArrayOutData;
  real_T c21_u;
  const mxArray *c21_y = NULL;
  SFc21_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc21_StateEstimationInstanceStruct *)chartInstanceVoid;
  c21_mxArrayOutData = NULL;
  c21_mxArrayOutData = NULL;
  c21_u = *(real_T *)c21_inData;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_create("y", &c21_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c21_mxArrayOutData, c21_y, false);
  return c21_mxArrayOutData;
}

static real_T c21_c_emlrt_marshallIn(SFc21_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId)
{
  real_T c21_y;
  real_T c21_d0;
  (void)chartInstance;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), &c21_d0, 1, 0, 0U, 0, 0U, 0);
  c21_y = c21_d0;
  sf_mex_destroy(&c21_u);
  return c21_y;
}

static void c21_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData)
{
  const mxArray *c21_nargout;
  const char_T *c21_identifier;
  emlrtMsgIdentifier c21_thisId;
  real_T c21_y;
  SFc21_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc21_StateEstimationInstanceStruct *)chartInstanceVoid;
  c21_nargout = sf_mex_dup(c21_mxArrayInData);
  c21_identifier = c21_varName;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_thisId.bParentIsCell = false;
  c21_y = c21_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_nargout),
    &c21_thisId);
  sf_mex_destroy(&c21_nargout);
  *(real_T *)c21_outData = c21_y;
  sf_mex_destroy(&c21_mxArrayInData);
}

static const mxArray *c21_e_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData)
{
  const mxArray *c21_mxArrayOutData;
  int32_T c21_i49;
  int32_T c21_i50;
  const mxArray *c21_y = NULL;
  int32_T c21_i51;
  real_T c21_u[42];
  SFc21_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc21_StateEstimationInstanceStruct *)chartInstanceVoid;
  c21_mxArrayOutData = NULL;
  c21_mxArrayOutData = NULL;
  c21_i49 = 0;
  for (c21_i50 = 0; c21_i50 < 14; c21_i50++) {
    for (c21_i51 = 0; c21_i51 < 3; c21_i51++) {
      c21_u[c21_i51 + c21_i49] = (*(real_T (*)[42])c21_inData)[c21_i51 + c21_i49];
    }

    c21_i49 += 3;
  }

  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_create("y", c21_u, 0, 0U, 1U, 0U, 2, 3, 14),
                false);
  sf_mex_assign(&c21_mxArrayOutData, c21_y, false);
  return c21_mxArrayOutData;
}

static void c21_d_emlrt_marshallIn(SFc21_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId,
  real_T c21_y[42])
{
  real_T c21_dv2[42];
  int32_T c21_i52;
  (void)chartInstance;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), c21_dv2, 1, 0, 0U, 1, 0U, 2, 3,
                14);
  for (c21_i52 = 0; c21_i52 < 42; c21_i52++) {
    c21_y[c21_i52] = c21_dv2[c21_i52];
  }

  sf_mex_destroy(&c21_u);
}

static void c21_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData)
{
  const mxArray *c21_J_pR;
  const char_T *c21_identifier;
  emlrtMsgIdentifier c21_thisId;
  real_T c21_y[42];
  int32_T c21_i53;
  int32_T c21_i54;
  int32_T c21_i55;
  SFc21_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc21_StateEstimationInstanceStruct *)chartInstanceVoid;
  c21_J_pR = sf_mex_dup(c21_mxArrayInData);
  c21_identifier = c21_varName;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_thisId.bParentIsCell = false;
  c21_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_J_pR), &c21_thisId, c21_y);
  sf_mex_destroy(&c21_J_pR);
  c21_i53 = 0;
  for (c21_i54 = 0; c21_i54 < 14; c21_i54++) {
    for (c21_i55 = 0; c21_i55 < 3; c21_i55++) {
      (*(real_T (*)[42])c21_outData)[c21_i55 + c21_i53] = c21_y[c21_i55 +
        c21_i53];
    }

    c21_i53 += 3;
  }

  sf_mex_destroy(&c21_mxArrayInData);
}

static void c21_e_emlrt_marshallIn(SFc21_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId,
  real_T c21_y[14])
{
  real_T c21_dv3[14];
  int32_T c21_i56;
  (void)chartInstance;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), c21_dv3, 1, 0, 0U, 1, 0U, 1, 14);
  for (c21_i56 = 0; c21_i56 < 14; c21_i56++) {
    c21_y[c21_i56] = c21_dv3[c21_i56];
  }

  sf_mex_destroy(&c21_u);
}

static void c21_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData)
{
  const mxArray *c21_var1;
  const char_T *c21_identifier;
  emlrtMsgIdentifier c21_thisId;
  real_T c21_y[14];
  int32_T c21_i57;
  SFc21_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc21_StateEstimationInstanceStruct *)chartInstanceVoid;
  c21_var1 = sf_mex_dup(c21_mxArrayInData);
  c21_identifier = c21_varName;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_thisId.bParentIsCell = false;
  c21_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_var1), &c21_thisId, c21_y);
  sf_mex_destroy(&c21_var1);
  for (c21_i57 = 0; c21_i57 < 14; c21_i57++) {
    (*(real_T (*)[14])c21_outData)[c21_i57] = c21_y[c21_i57];
  }

  sf_mex_destroy(&c21_mxArrayInData);
}

static const mxArray *c21_f_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData)
{
  const mxArray *c21_mxArrayOutData;
  int32_T c21_i58;
  int32_T c21_i59;
  const mxArray *c21_y = NULL;
  int32_T c21_i60;
  real_T c21_u[9];
  SFc21_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc21_StateEstimationInstanceStruct *)chartInstanceVoid;
  c21_mxArrayOutData = NULL;
  c21_mxArrayOutData = NULL;
  c21_i58 = 0;
  for (c21_i59 = 0; c21_i59 < 3; c21_i59++) {
    for (c21_i60 = 0; c21_i60 < 3; c21_i60++) {
      c21_u[c21_i60 + c21_i58] = (*(real_T (*)[9])c21_inData)[c21_i60 + c21_i58];
    }

    c21_i58 += 3;
  }

  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_create("y", c21_u, 0, 0U, 1U, 0U, 2, 3, 3), false);
  sf_mex_assign(&c21_mxArrayOutData, c21_y, false);
  return c21_mxArrayOutData;
}

static void c21_f_emlrt_marshallIn(SFc21_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId,
  real_T c21_y[9])
{
  real_T c21_dv4[9];
  int32_T c21_i61;
  (void)chartInstance;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), c21_dv4, 1, 0, 0U, 1, 0U, 2, 3,
                3);
  for (c21_i61 = 0; c21_i61 < 9; c21_i61++) {
    c21_y[c21_i61] = c21_dv4[c21_i61];
  }

  sf_mex_destroy(&c21_u);
}

static void c21_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData)
{
  const mxArray *c21_Ax;
  const char_T *c21_identifier;
  emlrtMsgIdentifier c21_thisId;
  real_T c21_y[9];
  int32_T c21_i62;
  int32_T c21_i63;
  int32_T c21_i64;
  SFc21_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc21_StateEstimationInstanceStruct *)chartInstanceVoid;
  c21_Ax = sf_mex_dup(c21_mxArrayInData);
  c21_identifier = c21_varName;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_thisId.bParentIsCell = false;
  c21_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_Ax), &c21_thisId, c21_y);
  sf_mex_destroy(&c21_Ax);
  c21_i62 = 0;
  for (c21_i63 = 0; c21_i63 < 3; c21_i63++) {
    for (c21_i64 = 0; c21_i64 < 3; c21_i64++) {
      (*(real_T (*)[9])c21_outData)[c21_i64 + c21_i62] = c21_y[c21_i64 + c21_i62];
    }

    c21_i62 += 3;
  }

  sf_mex_destroy(&c21_mxArrayInData);
}

const mxArray *sf_c21_StateEstimation_get_eml_resolved_functions_info(void)
{
  const mxArray *c21_nameCaptureInfo = NULL;
  const char * c21_data[6] = {
    "789ced56dd8ed240141ecc4a341bcddee895265e9a98ec208966f56af9112adbb2f223488c212d1c6861a6839d69815b7d006f7d075fc027313e8e1d7e4b4368"
    "02ebba062699b45fcf7ca7fd7ae6cb19147bab217fdcf7e7ef1384e2fef58e3f6fa1e9b83dc3b1d97d6cf1fc08dd9be16ffe6c315bc0484c83b64e01cd479b51",
    "cbd66d511d0f0039c019f1a03d89742c02558b82ca0240b17c407381d002c890bccf98d0ea575c8a1c932f5e8348104cf424d052cf5148cf7cccf59c0478ef36"
    "f0e4fa47219ec483660d5a823945dd6b0ad654a123aa0cd24c0846e779cf22f2c64379e393bfe71a04a6fc9f11fc2f21bec41fdf7ccabcc6ef39381c9719e74f",
    "14dd1104c638cb5a2e055b709cb784e21a936833a3736e4133e357d361844816770dcada2e018e67518db581e02ed8b86fd998e24dda4fe9f2bf06f5c7d77c7f"
    "2cf0fd7797752a1cfff895da81bfebfbaf8cafa0cdf57b8856eb27712da968035e500dd2d044efac404a7955c94ff33d0de48badc98702d76dd65fa77f0a7bec",
    "9f4dda0ffe59f2b7f1cf3049c0289ae5f40b9a32f39dcb9135b25ab99bed9ff3089dc7219ec429bbebefb053de87e122cfae7ef91ec1d7437c89afd42faeb008"
    "c7cfa6dab0d436b7c30efbe95cdd673fb44bcfd3f941ae2cca97c921cb562e8ceeb89ebdd97e88ea278f433c89436792b2d535571aca75f493af21bec4ffe03c",
    "b6aa7de6a0433fd9ce3f9a9e7859042dd7a85561c8929e67f64abdfffc3cb6ce3f853df6cf46ed07ff2cf851fe798056eb27f107cf685c0c5e7dce7a89ba33aa"
    "53ae962a69f4f7fdf3079c76a0d6", "" };

  c21_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(c21_data, 4328U, &c21_nameCaptureInfo);
  return c21_nameCaptureInfo;
}

static const mxArray *c21_g_sf_marshallOut(void *chartInstanceVoid, void
  *c21_inData)
{
  const mxArray *c21_mxArrayOutData;
  int32_T c21_u;
  const mxArray *c21_y = NULL;
  SFc21_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc21_StateEstimationInstanceStruct *)chartInstanceVoid;
  c21_mxArrayOutData = NULL;
  c21_mxArrayOutData = NULL;
  c21_u = *(int32_T *)c21_inData;
  c21_y = NULL;
  sf_mex_assign(&c21_y, sf_mex_create("y", &c21_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c21_mxArrayOutData, c21_y, false);
  return c21_mxArrayOutData;
}

static int32_T c21_g_emlrt_marshallIn(SFc21_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId)
{
  int32_T c21_y;
  int32_T c21_i65;
  (void)chartInstance;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), &c21_i65, 1, 6, 0U, 0, 0U, 0);
  c21_y = c21_i65;
  sf_mex_destroy(&c21_u);
  return c21_y;
}

static void c21_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c21_mxArrayInData, const char_T *c21_varName, void *c21_outData)
{
  const mxArray *c21_b_sfEvent;
  const char_T *c21_identifier;
  emlrtMsgIdentifier c21_thisId;
  int32_T c21_y;
  SFc21_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc21_StateEstimationInstanceStruct *)chartInstanceVoid;
  c21_b_sfEvent = sf_mex_dup(c21_mxArrayInData);
  c21_identifier = c21_varName;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_thisId.bParentIsCell = false;
  c21_y = c21_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c21_b_sfEvent),
    &c21_thisId);
  sf_mex_destroy(&c21_b_sfEvent);
  *(int32_T *)c21_outData = c21_y;
  sf_mex_destroy(&c21_mxArrayInData);
}

static uint8_T c21_h_emlrt_marshallIn(SFc21_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c21_b_is_active_c21_StateEstimation, const
  char_T *c21_identifier)
{
  uint8_T c21_y;
  emlrtMsgIdentifier c21_thisId;
  c21_thisId.fIdentifier = c21_identifier;
  c21_thisId.fParent = NULL;
  c21_thisId.bParentIsCell = false;
  c21_y = c21_i_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c21_b_is_active_c21_StateEstimation), &c21_thisId);
  sf_mex_destroy(&c21_b_is_active_c21_StateEstimation);
  return c21_y;
}

static uint8_T c21_i_emlrt_marshallIn(SFc21_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c21_u, const emlrtMsgIdentifier *c21_parentId)
{
  uint8_T c21_y;
  uint8_T c21_u0;
  (void)chartInstance;
  sf_mex_import(c21_parentId, sf_mex_dup(c21_u), &c21_u0, 1, 3, 0U, 0, 0U, 0);
  c21_y = c21_u0;
  sf_mex_destroy(&c21_u);
  return c21_y;
}

static void init_dsm_address_info(SFc21_StateEstimationInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc21_StateEstimationInstanceStruct
  *chartInstance)
{
  chartInstance->c21_w = (real_T (*)[3])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c21_e = (real_T (*)[14])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c21_e_dot = (real_T (*)[14])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c21_contact = (real_T (*)[2])ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c21_velocity = (real_T (*)[3])ssGetOutputPortSignal_wrapper
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

void sf_c21_StateEstimation_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2332873491U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1997706776U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2642012009U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3919868459U);
}

mxArray* sf_c21_StateEstimation_get_post_codegen_info(void);
mxArray *sf_c21_StateEstimation_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("UZum7TGUHKgvX9DqSlNKuD");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,4,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
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
      pr[0] = (double)(14);
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
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
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
    mxArray* mxPostCodegenInfo = sf_c21_StateEstimation_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c21_StateEstimation_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c21_StateEstimation_jit_fallback_info(void)
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

mxArray *sf_c21_StateEstimation_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c21_StateEstimation_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c21_StateEstimation(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"velocity\",},{M[8],M[0],T\"is_active_c21_StateEstimation\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c21_StateEstimation_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc21_StateEstimationInstanceStruct *chartInstance =
      (SFc21_StateEstimationInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _StateEstimationMachineNumber_,
           21,
           1,
           1,
           0,
           5,
           0,
           0,
           0,
           0,
           5,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_StateEstimationMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_StateEstimationMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _StateEstimationMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"w");
          _SFD_SET_DATA_PROPS(1,1,1,0,"e");
          _SFD_SET_DATA_PROPS(2,1,1,0,"e_dot");
          _SFD_SET_DATA_PROPS(3,1,1,0,"contact");
          _SFD_SET_DATA_PROPS(4,2,0,1,"velocity");
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
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,526);
        _SFD_CV_INIT_EML_IF(0,1,0,94,112,287,521);
        _SFD_CV_INIT_EML_IF(0,1,1,287,309,486,521);
        _SFD_CV_INIT_EML_RELATIONAL(0,1,0,97,112,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(0,1,1,294,309,-1,0);
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

        {
          unsigned int dimVector[1];
          dimVector[0]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c21_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 14U;
          _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c21_c_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 14U;
          _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c21_c_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 2U;
          _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c21_b_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c21_sf_marshallOut,(MexInFcnForType)
            c21_sf_marshallIn);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _StateEstimationMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc21_StateEstimationInstanceStruct *chartInstance =
      (SFc21_StateEstimationInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(0U, *chartInstance->c21_w);
        _SFD_SET_DATA_VALUE_PTR(1U, *chartInstance->c21_e);
        _SFD_SET_DATA_VALUE_PTR(2U, *chartInstance->c21_e_dot);
        _SFD_SET_DATA_VALUE_PTR(3U, *chartInstance->c21_contact);
        _SFD_SET_DATA_VALUE_PTR(4U, *chartInstance->c21_velocity);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "s4NK5CaNaafh9RC2YNlVczG";
}

static void sf_opaque_initialize_c21_StateEstimation(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc21_StateEstimationInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c21_StateEstimation((SFc21_StateEstimationInstanceStruct*)
    chartInstanceVar);
  initialize_c21_StateEstimation((SFc21_StateEstimationInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c21_StateEstimation(void *chartInstanceVar)
{
  enable_c21_StateEstimation((SFc21_StateEstimationInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c21_StateEstimation(void *chartInstanceVar)
{
  disable_c21_StateEstimation((SFc21_StateEstimationInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c21_StateEstimation(void *chartInstanceVar)
{
  sf_gateway_c21_StateEstimation((SFc21_StateEstimationInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c21_StateEstimation(SimStruct* S)
{
  return get_sim_state_c21_StateEstimation((SFc21_StateEstimationInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c21_StateEstimation(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c21_StateEstimation((SFc21_StateEstimationInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c21_StateEstimation(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc21_StateEstimationInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_StateEstimation_optimization_info();
    }

    finalize_c21_StateEstimation((SFc21_StateEstimationInstanceStruct*)
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
  initSimStructsc21_StateEstimation((SFc21_StateEstimationInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c21_StateEstimation(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c21_StateEstimation((SFc21_StateEstimationInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

static void mdlSetWorkWidths_c21_StateEstimation(SimStruct *S)
{
  /* Set overwritable ports for inplace optimization */
  ssSetStatesModifiedOnlyInUpdate(S, 1);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_StateEstimation_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      21);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,21,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 21);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,21);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,21,4);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,21,1);
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

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,21);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2920293704U));
  ssSetChecksum1(S,(2395103542U));
  ssSetChecksum2(S,(856584328U));
  ssSetChecksum3(S,(4187248791U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c21_StateEstimation(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c21_StateEstimation(SimStruct *S)
{
  SFc21_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc21_StateEstimationInstanceStruct *)utMalloc(sizeof
    (SFc21_StateEstimationInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc21_StateEstimationInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c21_StateEstimation;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c21_StateEstimation;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c21_StateEstimation;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c21_StateEstimation;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c21_StateEstimation;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c21_StateEstimation;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c21_StateEstimation;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c21_StateEstimation;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c21_StateEstimation;
  chartInstance->chartInfo.mdlStart = mdlStart_c21_StateEstimation;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c21_StateEstimation;
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
  mdl_start_c21_StateEstimation(chartInstance);
}

void c21_StateEstimation_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c21_StateEstimation(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c21_StateEstimation(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c21_StateEstimation(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c21_StateEstimation_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
