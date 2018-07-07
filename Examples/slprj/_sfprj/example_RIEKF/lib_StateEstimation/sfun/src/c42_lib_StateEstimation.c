/* Include files */

#include "lib_StateEstimation_sfun.h"
#include "c42_lib_StateEstimation.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "lib_StateEstimation_sfun_debug_macros.h"
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
static const char * c42_debug_family_names[17] = { "J_pR", "J_pL", "qs_knee_L",
  "qs_tarsus_L", "qs_knee_R", "qs_tarsus_R", "tau_L", "tau_R", "GRF_L", "GRF_R",
  "cL", "cR", "nargin", "nargout", "e", "GRF", "contact" };

static const char * c42_b_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

static const char * c42_c_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

static const char * c42_d_debug_family_names[6] = { "tl", "tu", "nargin",
  "nargout", "f", "s" };

/* Function Declarations */
static void initialize_c42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance);
static void initialize_params_c42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance);
static void enable_c42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance);
static void disable_c42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance);
static void c42_update_debugger_state_c42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance);
static void set_sim_state_c42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance, const mxArray *c42_st);
static void finalize_c42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance);
static void sf_gateway_c42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance);
static void mdl_start_c42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance);
static void initSimStructsc42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c42_machineNumber, uint32_T
  c42_chartNumber, uint32_T c42_instanceNumber);
static const mxArray *c42_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData);
static void c42_emlrt_marshallIn(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c42_b_contact, const char_T *c42_identifier,
  real_T c42_y[2]);
static void c42_b_emlrt_marshallIn(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c42_u, const emlrtMsgIdentifier *c42_parentId,
  real_T c42_y[2]);
static void c42_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData);
static const mxArray *c42_b_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData);
static void c42_c_emlrt_marshallIn(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c42_b_GRF, const char_T *c42_identifier, real_T
  c42_y[4]);
static void c42_d_emlrt_marshallIn(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c42_u, const emlrtMsgIdentifier *c42_parentId,
  real_T c42_y[4]);
static void c42_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData);
static const mxArray *c42_c_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData);
static const mxArray *c42_d_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData);
static real_T c42_e_emlrt_marshallIn(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c42_u, const emlrtMsgIdentifier *c42_parentId);
static void c42_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData);
static const mxArray *c42_e_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData);
static void c42_f_emlrt_marshallIn(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c42_u, const emlrtMsgIdentifier *c42_parentId,
  real_T c42_y[42]);
static void c42_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData);
static void c42_g_emlrt_marshallIn(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c42_u, const emlrtMsgIdentifier *c42_parentId,
  real_T c42_y[14]);
static void c42_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData);
static void c42_mldivide(SFc42_lib_StateEstimationInstanceStruct *chartInstance,
  real_T c42_A[4], real_T c42_B[2], real_T c42_Y[2]);
static void c42_warning(SFc42_lib_StateEstimationInstanceStruct *chartInstance);
static real_T c42_scaleFactor(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, real_T c42_f);
static const mxArray *c42_f_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData);
static int32_T c42_h_emlrt_marshallIn(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c42_u, const emlrtMsgIdentifier *c42_parentId);
static void c42_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData);
static uint8_T c42_i_emlrt_marshallIn(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c42_b_is_active_c42_lib_StateEstimation, const
  char_T *c42_identifier);
static uint8_T c42_j_emlrt_marshallIn(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c42_u, const emlrtMsgIdentifier *c42_parentId);
static void init_dsm_address_info(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc42_lib_StateEstimation(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  chartInstance->c42_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c42_is_active_c42_lib_StateEstimation = 0U;
}

static void initialize_params_c42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c42_update_debugger_state_c42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance)
{
  const mxArray *c42_st;
  const mxArray *c42_y = NULL;
  const mxArray *c42_b_y = NULL;
  const mxArray *c42_c_y = NULL;
  uint8_T c42_hoistedGlobal;
  const mxArray *c42_d_y = NULL;
  c42_st = NULL;
  c42_st = NULL;
  c42_y = NULL;
  sf_mex_assign(&c42_y, sf_mex_createcellmatrix(3, 1), false);
  c42_b_y = NULL;
  sf_mex_assign(&c42_b_y, sf_mex_create("y", *chartInstance->c42_GRF, 0, 0U, 1U,
    0U, 1, 4), false);
  sf_mex_setcell(c42_y, 0, c42_b_y);
  c42_c_y = NULL;
  sf_mex_assign(&c42_c_y, sf_mex_create("y", *chartInstance->c42_contact, 0, 0U,
    1U, 0U, 1, 2), false);
  sf_mex_setcell(c42_y, 1, c42_c_y);
  c42_hoistedGlobal = chartInstance->c42_is_active_c42_lib_StateEstimation;
  c42_d_y = NULL;
  sf_mex_assign(&c42_d_y, sf_mex_create("y", &c42_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c42_y, 2, c42_d_y);
  sf_mex_assign(&c42_st, c42_y, false);
  return c42_st;
}

static void set_sim_state_c42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance, const mxArray *c42_st)
{
  const mxArray *c42_u;
  real_T c42_dv0[4];
  int32_T c42_i0;
  real_T c42_dv1[2];
  int32_T c42_i1;
  chartInstance->c42_doneDoubleBufferReInit = true;
  c42_u = sf_mex_dup(c42_st);
  c42_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c42_u, 0)),
    "GRF", c42_dv0);
  for (c42_i0 = 0; c42_i0 < 4; c42_i0++) {
    (*chartInstance->c42_GRF)[c42_i0] = c42_dv0[c42_i0];
  }

  c42_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c42_u, 1)),
                       "contact", c42_dv1);
  for (c42_i1 = 0; c42_i1 < 2; c42_i1++) {
    (*chartInstance->c42_contact)[c42_i1] = c42_dv1[c42_i1];
  }

  chartInstance->c42_is_active_c42_lib_StateEstimation = c42_i_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c42_u, 2)),
     "is_active_c42_lib_StateEstimation");
  sf_mex_destroy(&c42_u);
  c42_update_debugger_state_c42_lib_StateEstimation(chartInstance);
  sf_mex_destroy(&c42_st);
}

static void finalize_c42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance)
{
  int32_T c42_i2;
  int32_T c42_i3;
  uint32_T c42_debug_family_var_map[17];
  real_T c42_b_e[14];
  real_T c42_J_pR[42];
  real_T c42_J_pL[42];
  real_T c42_qs_knee_L;
  real_T c42_qs_tarsus_L;
  real_T c42_qs_knee_R;
  real_T c42_qs_tarsus_R;
  real_T c42_tau_L[2];
  real_T c42_tau_R[2];
  real_T c42_GRF_L[2];
  real_T c42_GRF_R[2];
  real_T c42_cL;
  real_T c42_cR;
  real_T c42_nargin = 1.0;
  real_T c42_nargout = 2.0;
  real_T c42_b_GRF[4];
  real_T c42_b_contact[2];
  int32_T c42_i4;
  uint32_T c42_b_debug_family_var_map[4];
  real_T c42_var1[14];
  real_T c42_b_nargin = 1.0;
  real_T c42_b_nargout = 1.0;
  int32_T c42_i5;
  int32_T c42_i6;
  real_T c42_b_var1[14];
  real_T c42_c_nargin = 1.0;
  real_T c42_c_nargout = 1.0;
  int32_T c42_i7;
  real_T c42_b_qs_knee_L[2];
  int32_T c42_i8;
  real_T c42_b_qs_knee_R[2];
  int32_T c42_i9;
  int32_T c42_i10;
  int32_T c42_i11;
  int32_T c42_i12;
  real_T c42_b_J_pL[4];
  int32_T c42_i13;
  int32_T c42_i14;
  real_T c42_b_tau_L[2];
  real_T c42_dv2[2];
  int32_T c42_i15;
  int32_T c42_i16;
  int32_T c42_i17;
  int32_T c42_i18;
  real_T c42_b_J_pR[4];
  int32_T c42_i19;
  int32_T c42_i20;
  real_T c42_b_tau_R[2];
  real_T c42_dv3[2];
  int32_T c42_i21;
  int32_T c42_i22;
  int32_T c42_i23;
  int32_T c42_i24;
  int32_T c42_i25;
  int32_T c42_i26;
  int32_T c42_i27;
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 1U, chartInstance->c42_sfEvent);
  for (c42_i2 = 0; c42_i2 < 14; c42_i2++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c42_e)[c42_i2], 0U);
  }

  chartInstance->c42_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 1U, chartInstance->c42_sfEvent);
  for (c42_i3 = 0; c42_i3 < 14; c42_i3++) {
    c42_b_e[c42_i3] = (*chartInstance->c42_e)[c42_i3];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 17U, 17U, c42_debug_family_names,
    c42_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c42_J_pR, 0U, c42_e_sf_marshallOut,
    c42_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c42_J_pL, 1U, c42_e_sf_marshallOut,
    c42_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c42_qs_knee_L, 2U, c42_d_sf_marshallOut,
    c42_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c42_qs_tarsus_L, 3U,
    c42_d_sf_marshallOut, c42_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c42_qs_knee_R, 4U, c42_d_sf_marshallOut,
    c42_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c42_qs_tarsus_R, 5U,
    c42_d_sf_marshallOut, c42_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c42_tau_L, 6U, c42_sf_marshallOut,
    c42_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c42_tau_R, 7U, c42_sf_marshallOut,
    c42_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c42_GRF_L, 8U, c42_sf_marshallOut,
    c42_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c42_GRF_R, 9U, c42_sf_marshallOut,
    c42_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c42_cL, 10U, c42_d_sf_marshallOut,
    c42_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c42_cR, 11U, c42_d_sf_marshallOut,
    c42_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c42_nargin, 12U, c42_d_sf_marshallOut,
    c42_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c42_nargout, 13U, c42_d_sf_marshallOut,
    c42_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c42_b_e, 14U, c42_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c42_b_GRF, 15U, c42_b_sf_marshallOut,
    c42_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c42_b_contact, 16U, c42_sf_marshallOut,
    c42_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c42_sfEvent, 7);
  for (c42_i4 = 0; c42_i4 < 14; c42_i4++) {
    c42_var1[c42_i4] = c42_b_e[c42_i4];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c42_b_debug_family_names,
    c42_b_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c42_b_nargin, 0U, c42_d_sf_marshallOut,
    c42_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c42_b_nargout, 1U, c42_d_sf_marshallOut,
    c42_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c42_var1, 2U, c42_c_sf_marshallOut,
    c42_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c42_J_pR, 3U, c42_e_sf_marshallOut,
    c42_d_sf_marshallIn);
  CV_SCRIPT_FCN(0, 0);
  _SFD_SCRIPT_CALL(0U, chartInstance->c42_sfEvent, 2);
  CV_SCRIPT_IF(0, 0, false);
  _SFD_SCRIPT_CALL(0U, chartInstance->c42_sfEvent, 5);
  _SFD_SCRIPT_CALL(0U, chartInstance->c42_sfEvent, 7);
  for (c42_i5 = 0; c42_i5 < 42; c42_i5++) {
    c42_J_pR[c42_i5] = 0.0;
  }

  _SFD_SCRIPT_CALL(0U, chartInstance->c42_sfEvent, 10);
  J_VectorNav_to_RightToeBottom_src(c42_J_pR, c42_var1);
  _SFD_SCRIPT_CALL(0U, chartInstance->c42_sfEvent, -10);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_EML_CALL(0U, chartInstance->c42_sfEvent, 8);
  for (c42_i6 = 0; c42_i6 < 14; c42_i6++) {
    c42_b_var1[c42_i6] = c42_b_e[c42_i6];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c42_c_debug_family_names,
    c42_b_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c42_c_nargin, 0U, c42_d_sf_marshallOut,
    c42_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c42_c_nargout, 1U, c42_d_sf_marshallOut,
    c42_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c42_b_var1, 2U, c42_c_sf_marshallOut,
    c42_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c42_J_pL, 3U, c42_e_sf_marshallOut,
    c42_d_sf_marshallIn);
  CV_SCRIPT_FCN(1, 0);
  _SFD_SCRIPT_CALL(1U, chartInstance->c42_sfEvent, 2);
  CV_SCRIPT_IF(1, 0, false);
  _SFD_SCRIPT_CALL(1U, chartInstance->c42_sfEvent, 5);
  _SFD_SCRIPT_CALL(1U, chartInstance->c42_sfEvent, 7);
  for (c42_i7 = 0; c42_i7 < 42; c42_i7++) {
    c42_J_pL[c42_i7] = 0.0;
  }

  _SFD_SCRIPT_CALL(1U, chartInstance->c42_sfEvent, 10);
  J_VectorNav_to_LeftToeBottom_src(c42_J_pL, c42_b_var1);
  _SFD_SCRIPT_CALL(1U, chartInstance->c42_sfEvent, -10);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_EML_CALL(0U, chartInstance->c42_sfEvent, 10);
  c42_qs_knee_L = c42_b_e[4];
  _SFD_EML_CALL(0U, chartInstance->c42_sfEvent, 11);
  c42_qs_tarsus_L = ((c42_b_e[3] + c42_b_e[4]) + c42_b_e[5]) -
    0.22689280275926285;
  _SFD_EML_CALL(0U, chartInstance->c42_sfEvent, 13);
  c42_qs_knee_R = c42_b_e[11];
  _SFD_EML_CALL(0U, chartInstance->c42_sfEvent, 14);
  c42_qs_tarsus_R = ((c42_b_e[10] + c42_b_e[11]) + c42_b_e[12]) -
    0.22689280275926285;
  _SFD_EML_CALL(0U, chartInstance->c42_sfEvent, 16);
  c42_b_qs_knee_L[0] = c42_qs_knee_L + c42_qs_tarsus_L;
  c42_b_qs_knee_L[1] = c42_qs_tarsus_L;
  for (c42_i8 = 0; c42_i8 < 2; c42_i8++) {
    c42_tau_L[c42_i8] = (-1500.0 + 250.0 * (real_T)c42_i8) *
      c42_b_qs_knee_L[c42_i8];
  }

  _SFD_EML_CALL(0U, chartInstance->c42_sfEvent, 17);
  c42_b_qs_knee_R[0] = c42_qs_knee_R + c42_qs_tarsus_R;
  c42_b_qs_knee_R[1] = c42_qs_tarsus_R;
  for (c42_i9 = 0; c42_i9 < 2; c42_i9++) {
    c42_tau_R[c42_i9] = (-1500.0 + 250.0 * (real_T)c42_i9) *
      c42_b_qs_knee_R[c42_i9];
  }

  _SFD_EML_CALL(0U, chartInstance->c42_sfEvent, 19);
  c42_i10 = 0;
  for (c42_i11 = 0; c42_i11 < 2; c42_i11++) {
    c42_b_J_pL[c42_i11] = -c42_J_pL[c42_i10 + 12];
    c42_i10 += 2;
  }

  c42_i12 = 0;
  for (c42_i13 = 0; c42_i13 < 2; c42_i13++) {
    c42_b_J_pL[c42_i13 + 2] = -c42_J_pL[c42_i12 + 15];
    c42_i12 += 2;
  }

  for (c42_i14 = 0; c42_i14 < 2; c42_i14++) {
    c42_b_tau_L[c42_i14] = c42_tau_L[c42_i14];
  }

  c42_mldivide(chartInstance, c42_b_J_pL, c42_b_tau_L, c42_dv2);
  for (c42_i15 = 0; c42_i15 < 2; c42_i15++) {
    c42_GRF_L[c42_i15] = c42_dv2[c42_i15];
  }

  _SFD_EML_CALL(0U, chartInstance->c42_sfEvent, 20);
  c42_i16 = 0;
  for (c42_i17 = 0; c42_i17 < 2; c42_i17++) {
    c42_b_J_pR[c42_i17] = -c42_J_pR[c42_i16 + 33];
    c42_i16 += 2;
  }

  c42_i18 = 0;
  for (c42_i19 = 0; c42_i19 < 2; c42_i19++) {
    c42_b_J_pR[c42_i19 + 2] = -c42_J_pR[c42_i18 + 36];
    c42_i18 += 2;
  }

  for (c42_i20 = 0; c42_i20 < 2; c42_i20++) {
    c42_b_tau_R[c42_i20] = c42_tau_R[c42_i20];
  }

  c42_mldivide(chartInstance, c42_b_J_pR, c42_b_tau_R, c42_dv3);
  for (c42_i21 = 0; c42_i21 < 2; c42_i21++) {
    c42_GRF_R[c42_i21] = c42_dv3[c42_i21];
  }

  _SFD_EML_CALL(0U, chartInstance->c42_sfEvent, 21);
  for (c42_i22 = 0; c42_i22 < 2; c42_i22++) {
    c42_b_GRF[c42_i22] = c42_GRF_L[c42_i22];
  }

  for (c42_i23 = 0; c42_i23 < 2; c42_i23++) {
    c42_b_GRF[c42_i23 + 2] = c42_GRF_R[c42_i23];
  }

  _SFD_EML_CALL(0U, chartInstance->c42_sfEvent, 24);
  c42_cL = c42_scaleFactor(chartInstance, c42_b_GRF[1]);
  _SFD_EML_CALL(0U, chartInstance->c42_sfEvent, 25);
  c42_cR = c42_scaleFactor(chartInstance, c42_b_GRF[3]);
  _SFD_EML_CALL(0U, chartInstance->c42_sfEvent, 26);
  c42_b_contact[0] = c42_cL;
  c42_b_contact[1] = c42_cR;
  _SFD_EML_CALL(0U, chartInstance->c42_sfEvent, -26);
  _SFD_SYMBOL_SCOPE_POP();
  for (c42_i24 = 0; c42_i24 < 4; c42_i24++) {
    (*chartInstance->c42_GRF)[c42_i24] = c42_b_GRF[c42_i24];
  }

  for (c42_i25 = 0; c42_i25 < 2; c42_i25++) {
    (*chartInstance->c42_contact)[c42_i25] = c42_b_contact[c42_i25];
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c42_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_lib_StateEstimationMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  for (c42_i26 = 0; c42_i26 < 4; c42_i26++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c42_GRF)[c42_i26], 1U);
  }

  for (c42_i27 = 0; c42_i27 < 2; c42_i27++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c42_contact)[c42_i27], 2U);
  }
}

static void mdl_start_c42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void initSimStructsc42_lib_StateEstimation
  (SFc42_lib_StateEstimationInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c42_machineNumber, uint32_T
  c42_chartNumber, uint32_T c42_instanceNumber)
{
  (void)(c42_machineNumber);
  (void)(c42_chartNumber);
  (void)(c42_instanceNumber);
  _SFD_SCRIPT_TRANSLATION(c42_chartNumber, c42_instanceNumber, 0U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Examples\\gen\\kin\\m\\J_VectorNav_"
    "to_RightToeBottom.m"));
  _SFD_SCRIPT_TRANSLATION(c42_chartNumber, c42_instanceNumber, 1U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Examples\\gen\\kin\\m\\J_VectorNav_"
    "to_LeftToeBottom.m"));
}

static const mxArray *c42_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData)
{
  const mxArray *c42_mxArrayOutData;
  int32_T c42_i28;
  const mxArray *c42_y = NULL;
  real_T c42_u[2];
  SFc42_lib_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc42_lib_StateEstimationInstanceStruct *)chartInstanceVoid;
  c42_mxArrayOutData = NULL;
  c42_mxArrayOutData = NULL;
  for (c42_i28 = 0; c42_i28 < 2; c42_i28++) {
    c42_u[c42_i28] = (*(real_T (*)[2])c42_inData)[c42_i28];
  }

  c42_y = NULL;
  sf_mex_assign(&c42_y, sf_mex_create("y", c42_u, 0, 0U, 1U, 0U, 1, 2), false);
  sf_mex_assign(&c42_mxArrayOutData, c42_y, false);
  return c42_mxArrayOutData;
}

static void c42_emlrt_marshallIn(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c42_b_contact, const char_T *c42_identifier,
  real_T c42_y[2])
{
  emlrtMsgIdentifier c42_thisId;
  c42_thisId.fIdentifier = (const char *)c42_identifier;
  c42_thisId.fParent = NULL;
  c42_thisId.bParentIsCell = false;
  c42_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c42_b_contact), &c42_thisId,
    c42_y);
  sf_mex_destroy(&c42_b_contact);
}

static void c42_b_emlrt_marshallIn(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c42_u, const emlrtMsgIdentifier *c42_parentId,
  real_T c42_y[2])
{
  real_T c42_dv4[2];
  int32_T c42_i29;
  (void)chartInstance;
  sf_mex_import(c42_parentId, sf_mex_dup(c42_u), c42_dv4, 1, 0, 0U, 1, 0U, 1, 2);
  for (c42_i29 = 0; c42_i29 < 2; c42_i29++) {
    c42_y[c42_i29] = c42_dv4[c42_i29];
  }

  sf_mex_destroy(&c42_u);
}

static void c42_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData)
{
  const mxArray *c42_b_contact;
  emlrtMsgIdentifier c42_thisId;
  real_T c42_y[2];
  int32_T c42_i30;
  SFc42_lib_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc42_lib_StateEstimationInstanceStruct *)chartInstanceVoid;
  c42_b_contact = sf_mex_dup(c42_mxArrayInData);
  c42_thisId.fIdentifier = (const char *)c42_varName;
  c42_thisId.fParent = NULL;
  c42_thisId.bParentIsCell = false;
  c42_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c42_b_contact), &c42_thisId,
    c42_y);
  sf_mex_destroy(&c42_b_contact);
  for (c42_i30 = 0; c42_i30 < 2; c42_i30++) {
    (*(real_T (*)[2])c42_outData)[c42_i30] = c42_y[c42_i30];
  }

  sf_mex_destroy(&c42_mxArrayInData);
}

static const mxArray *c42_b_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData)
{
  const mxArray *c42_mxArrayOutData;
  int32_T c42_i31;
  const mxArray *c42_y = NULL;
  real_T c42_u[4];
  SFc42_lib_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc42_lib_StateEstimationInstanceStruct *)chartInstanceVoid;
  c42_mxArrayOutData = NULL;
  c42_mxArrayOutData = NULL;
  for (c42_i31 = 0; c42_i31 < 4; c42_i31++) {
    c42_u[c42_i31] = (*(real_T (*)[4])c42_inData)[c42_i31];
  }

  c42_y = NULL;
  sf_mex_assign(&c42_y, sf_mex_create("y", c42_u, 0, 0U, 1U, 0U, 1, 4), false);
  sf_mex_assign(&c42_mxArrayOutData, c42_y, false);
  return c42_mxArrayOutData;
}

static void c42_c_emlrt_marshallIn(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c42_b_GRF, const char_T *c42_identifier, real_T
  c42_y[4])
{
  emlrtMsgIdentifier c42_thisId;
  c42_thisId.fIdentifier = (const char *)c42_identifier;
  c42_thisId.fParent = NULL;
  c42_thisId.bParentIsCell = false;
  c42_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c42_b_GRF), &c42_thisId,
    c42_y);
  sf_mex_destroy(&c42_b_GRF);
}

static void c42_d_emlrt_marshallIn(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c42_u, const emlrtMsgIdentifier *c42_parentId,
  real_T c42_y[4])
{
  real_T c42_dv5[4];
  int32_T c42_i32;
  (void)chartInstance;
  sf_mex_import(c42_parentId, sf_mex_dup(c42_u), c42_dv5, 1, 0, 0U, 1, 0U, 1, 4);
  for (c42_i32 = 0; c42_i32 < 4; c42_i32++) {
    c42_y[c42_i32] = c42_dv5[c42_i32];
  }

  sf_mex_destroy(&c42_u);
}

static void c42_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData)
{
  const mxArray *c42_b_GRF;
  emlrtMsgIdentifier c42_thisId;
  real_T c42_y[4];
  int32_T c42_i33;
  SFc42_lib_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc42_lib_StateEstimationInstanceStruct *)chartInstanceVoid;
  c42_b_GRF = sf_mex_dup(c42_mxArrayInData);
  c42_thisId.fIdentifier = (const char *)c42_varName;
  c42_thisId.fParent = NULL;
  c42_thisId.bParentIsCell = false;
  c42_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c42_b_GRF), &c42_thisId,
    c42_y);
  sf_mex_destroy(&c42_b_GRF);
  for (c42_i33 = 0; c42_i33 < 4; c42_i33++) {
    (*(real_T (*)[4])c42_outData)[c42_i33] = c42_y[c42_i33];
  }

  sf_mex_destroy(&c42_mxArrayInData);
}

static const mxArray *c42_c_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData)
{
  const mxArray *c42_mxArrayOutData;
  int32_T c42_i34;
  const mxArray *c42_y = NULL;
  real_T c42_u[14];
  SFc42_lib_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc42_lib_StateEstimationInstanceStruct *)chartInstanceVoid;
  c42_mxArrayOutData = NULL;
  c42_mxArrayOutData = NULL;
  for (c42_i34 = 0; c42_i34 < 14; c42_i34++) {
    c42_u[c42_i34] = (*(real_T (*)[14])c42_inData)[c42_i34];
  }

  c42_y = NULL;
  sf_mex_assign(&c42_y, sf_mex_create("y", c42_u, 0, 0U, 1U, 0U, 1, 14), false);
  sf_mex_assign(&c42_mxArrayOutData, c42_y, false);
  return c42_mxArrayOutData;
}

static const mxArray *c42_d_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData)
{
  const mxArray *c42_mxArrayOutData;
  real_T c42_u;
  const mxArray *c42_y = NULL;
  SFc42_lib_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc42_lib_StateEstimationInstanceStruct *)chartInstanceVoid;
  c42_mxArrayOutData = NULL;
  c42_mxArrayOutData = NULL;
  c42_u = *(real_T *)c42_inData;
  c42_y = NULL;
  sf_mex_assign(&c42_y, sf_mex_create("y", &c42_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c42_mxArrayOutData, c42_y, false);
  return c42_mxArrayOutData;
}

static real_T c42_e_emlrt_marshallIn(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c42_u, const emlrtMsgIdentifier *c42_parentId)
{
  real_T c42_y;
  real_T c42_d0;
  (void)chartInstance;
  sf_mex_import(c42_parentId, sf_mex_dup(c42_u), &c42_d0, 1, 0, 0U, 0, 0U, 0);
  c42_y = c42_d0;
  sf_mex_destroy(&c42_u);
  return c42_y;
}

static void c42_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData)
{
  const mxArray *c42_nargout;
  emlrtMsgIdentifier c42_thisId;
  real_T c42_y;
  SFc42_lib_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc42_lib_StateEstimationInstanceStruct *)chartInstanceVoid;
  c42_nargout = sf_mex_dup(c42_mxArrayInData);
  c42_thisId.fIdentifier = (const char *)c42_varName;
  c42_thisId.fParent = NULL;
  c42_thisId.bParentIsCell = false;
  c42_y = c42_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c42_nargout),
    &c42_thisId);
  sf_mex_destroy(&c42_nargout);
  *(real_T *)c42_outData = c42_y;
  sf_mex_destroy(&c42_mxArrayInData);
}

static const mxArray *c42_e_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData)
{
  const mxArray *c42_mxArrayOutData;
  int32_T c42_i35;
  int32_T c42_i36;
  const mxArray *c42_y = NULL;
  int32_T c42_i37;
  real_T c42_u[42];
  SFc42_lib_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc42_lib_StateEstimationInstanceStruct *)chartInstanceVoid;
  c42_mxArrayOutData = NULL;
  c42_mxArrayOutData = NULL;
  c42_i35 = 0;
  for (c42_i36 = 0; c42_i36 < 14; c42_i36++) {
    for (c42_i37 = 0; c42_i37 < 3; c42_i37++) {
      c42_u[c42_i37 + c42_i35] = (*(real_T (*)[42])c42_inData)[c42_i37 + c42_i35];
    }

    c42_i35 += 3;
  }

  c42_y = NULL;
  sf_mex_assign(&c42_y, sf_mex_create("y", c42_u, 0, 0U, 1U, 0U, 2, 3, 14),
                false);
  sf_mex_assign(&c42_mxArrayOutData, c42_y, false);
  return c42_mxArrayOutData;
}

static void c42_f_emlrt_marshallIn(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c42_u, const emlrtMsgIdentifier *c42_parentId,
  real_T c42_y[42])
{
  real_T c42_dv6[42];
  int32_T c42_i38;
  (void)chartInstance;
  sf_mex_import(c42_parentId, sf_mex_dup(c42_u), c42_dv6, 1, 0, 0U, 1, 0U, 2, 3,
                14);
  for (c42_i38 = 0; c42_i38 < 42; c42_i38++) {
    c42_y[c42_i38] = c42_dv6[c42_i38];
  }

  sf_mex_destroy(&c42_u);
}

static void c42_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData)
{
  const mxArray *c42_J_pL;
  emlrtMsgIdentifier c42_thisId;
  real_T c42_y[42];
  int32_T c42_i39;
  int32_T c42_i40;
  int32_T c42_i41;
  SFc42_lib_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc42_lib_StateEstimationInstanceStruct *)chartInstanceVoid;
  c42_J_pL = sf_mex_dup(c42_mxArrayInData);
  c42_thisId.fIdentifier = (const char *)c42_varName;
  c42_thisId.fParent = NULL;
  c42_thisId.bParentIsCell = false;
  c42_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c42_J_pL), &c42_thisId, c42_y);
  sf_mex_destroy(&c42_J_pL);
  c42_i39 = 0;
  for (c42_i40 = 0; c42_i40 < 14; c42_i40++) {
    for (c42_i41 = 0; c42_i41 < 3; c42_i41++) {
      (*(real_T (*)[42])c42_outData)[c42_i41 + c42_i39] = c42_y[c42_i41 +
        c42_i39];
    }

    c42_i39 += 3;
  }

  sf_mex_destroy(&c42_mxArrayInData);
}

static void c42_g_emlrt_marshallIn(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c42_u, const emlrtMsgIdentifier *c42_parentId,
  real_T c42_y[14])
{
  real_T c42_dv7[14];
  int32_T c42_i42;
  (void)chartInstance;
  sf_mex_import(c42_parentId, sf_mex_dup(c42_u), c42_dv7, 1, 0, 0U, 1, 0U, 1, 14);
  for (c42_i42 = 0; c42_i42 < 14; c42_i42++) {
    c42_y[c42_i42] = c42_dv7[c42_i42];
  }

  sf_mex_destroy(&c42_u);
}

static void c42_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData)
{
  const mxArray *c42_var1;
  emlrtMsgIdentifier c42_thisId;
  real_T c42_y[14];
  int32_T c42_i43;
  SFc42_lib_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc42_lib_StateEstimationInstanceStruct *)chartInstanceVoid;
  c42_var1 = sf_mex_dup(c42_mxArrayInData);
  c42_thisId.fIdentifier = (const char *)c42_varName;
  c42_thisId.fParent = NULL;
  c42_thisId.bParentIsCell = false;
  c42_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c42_var1), &c42_thisId, c42_y);
  sf_mex_destroy(&c42_var1);
  for (c42_i43 = 0; c42_i43 < 14; c42_i43++) {
    (*(real_T (*)[14])c42_outData)[c42_i43] = c42_y[c42_i43];
  }

  sf_mex_destroy(&c42_mxArrayInData);
}

const mxArray *sf_c42_lib_StateEstimation_get_eml_resolved_functions_info(void)
{
  const mxArray *c42_nameCaptureInfo = NULL;
  const char * c42_data[7] = {
    "789ced554d6f1241181eb46df4a0213d78aa498f5e60aa214deb09f9b0540b81421bc5183a2c2fcb84991ddc996dc18bfe093d99f827f40f78f0e851ff86470f"
    "1e5cbe97911592123e4cdf30997df2cccc33efcbbbcfa2c0613a8010baed8e6beef8b9893a71cb1dbfdf2014ecc20ee70d9d0ff4e6eb1aeec73a5a1becf3f21f",
    "7ab3212c054dd5058c5a907178196c175884c3e0988ae0d422962ab41a806c90829d43a5c354298302e570243c20455dc01f7ba8016853ede7780d8c7adee1c8"
    "aec9e1759917204f7dce3cf9b773e8e7bf36a63e5e5e0fbd3efaba717ade751b63f4bc7cc067eec74d74c383b6a27dbdb73ee78dcb6f9cde5d1fbda0c63f299d",
    "82a1849d21e725254ac7d4aca9828098504a703439ff69efb3a1e1e17dba4c4538650643bd5f97d47befab37cabf48be8c3fc427126c898f8594db29622b062d"
    "9c1086c3c152121f509572ca1db61427525228c5ddb7c4168cb57749a7cc45c56120718fcd2ba2202915e5445161e16493f0469b37c1c2756a618eff59f6309f",
    "6bdf7dfaf8edfba3f9f6f9bcdfabc5e9357dce9bb68feff8e80535be5eb412d9a29dc89945276159b956e679ea223ebc477682cea47b201f3caff3cf7cf64faa"
    "a31ecbe5f7db33f3fb2d1fbda0c66bc67304d511bb5f59bf7fe7ab37ca2f87df8f943d3ccd7776867df7f9caef57dfef2594f722bb4f5b2759b3c94ddae02a77",
    "f02a75e5f77a2c97df47a3b3f2d7751fbd608f3198eb4168717e7e2f7039bd2fbe7aa3fc4cfd9c989451d50a199d55a18a30705e54d505b1013fd8b9bf17dad9"
    "6dffb4653630201270feef83dc0f0223e5901282d5a9c285ee2c719aa81aeefc45e146378f39f6e18fcdafffb5ff2f34bf79f9bf3acd340dbe6feebf8ed0c2e1",
    "33d3c9a523b1d8eafbff1fcf854cf9", "" };

  c42_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(c42_data, 4872U, &c42_nameCaptureInfo);
  return c42_nameCaptureInfo;
}

static void c42_mldivide(SFc42_lib_StateEstimationInstanceStruct *chartInstance,
  real_T c42_A[4], real_T c42_B[2], real_T c42_Y[2])
{
  int32_T c42_r1;
  int32_T c42_r2;
  real_T c42_a21;
  real_T c42_a22;
  if (muDoubleScalarAbs(c42_A[1]) + muDoubleScalarAbs(0.0) > muDoubleScalarAbs
      (c42_A[0]) + muDoubleScalarAbs(0.0)) {
    c42_r1 = 1;
    c42_r2 = 0;
  } else {
    c42_r1 = 0;
    c42_r2 = 1;
  }

  c42_a21 = c42_A[c42_r2] / c42_A[c42_r1];
  c42_a22 = c42_A[2 + c42_r2] - c42_a21 * c42_A[2 + c42_r1];
  if ((c42_a22 == 0.0) || (c42_A[c42_r1] == 0.0)) {
    c42_warning(chartInstance);
  }

  c42_Y[1] = (c42_B[c42_r2] - c42_B[c42_r1] * c42_a21) / c42_a22;
  c42_Y[0] = (c42_B[c42_r1] - c42_Y[1] * c42_A[2 + c42_r1]) / c42_A[c42_r1];
}

static void c42_warning(SFc42_lib_StateEstimationInstanceStruct *chartInstance)
{
  const mxArray *c42_y = NULL;
  static char_T c42_cv0[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *c42_b_y = NULL;
  static char_T c42_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c42_c_y = NULL;
  static char_T c42_msgID[27] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't',
    'r', 'i', 'x' };

  (void)chartInstance;
  c42_y = NULL;
  sf_mex_assign(&c42_y, sf_mex_create("y", c42_cv0, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c42_b_y = NULL;
  sf_mex_assign(&c42_b_y, sf_mex_create("y", c42_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c42_c_y = NULL;
  sf_mex_assign(&c42_c_y, sf_mex_create("y", c42_msgID, 10, 0U, 1U, 0U, 2, 1, 27),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "feval", 0U, 2U, 14, c42_y, 14,
                    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "feval", 1U,
    2U, 14, c42_b_y, 14, c42_c_y));
}

static real_T c42_scaleFactor(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, real_T c42_f)
{
  real_T c42_s;
  uint32_T c42_debug_family_var_map[6];
  real_T c42_tl;
  real_T c42_tu;
  real_T c42_nargin = 3.0;
  real_T c42_nargout = 1.0;
  real_T c42_a;
  real_T c42_A;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 6U, 6U, c42_d_debug_family_names,
    c42_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c42_tl, 0U, c42_d_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c42_tu, 1U, c42_d_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c42_nargin, 2U, c42_d_sf_marshallOut,
    c42_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c42_nargout, 3U, c42_d_sf_marshallOut,
    c42_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c42_f, 4U, c42_d_sf_marshallOut,
    c42_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c42_s, 5U, c42_d_sf_marshallOut,
    c42_c_sf_marshallIn);
  c42_tu = 100.0;
  c42_tl = 50.0;
  CV_EML_FCN(0, 1);
  _SFD_EML_CALL(0U, chartInstance->c42_sfEvent, 32);
  c42_a = c42_f;
  c42_A = muDoubleScalarMax(muDoubleScalarMin(c42_a, 100.0), 50.0) - c42_tl;
  c42_s = c42_A / 50.0;
  _SFD_EML_CALL(0U, chartInstance->c42_sfEvent, -32);
  _SFD_SYMBOL_SCOPE_POP();
  return c42_s;
}

static const mxArray *c42_f_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData)
{
  const mxArray *c42_mxArrayOutData;
  int32_T c42_u;
  const mxArray *c42_y = NULL;
  SFc42_lib_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc42_lib_StateEstimationInstanceStruct *)chartInstanceVoid;
  c42_mxArrayOutData = NULL;
  c42_mxArrayOutData = NULL;
  c42_u = *(int32_T *)c42_inData;
  c42_y = NULL;
  sf_mex_assign(&c42_y, sf_mex_create("y", &c42_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c42_mxArrayOutData, c42_y, false);
  return c42_mxArrayOutData;
}

static int32_T c42_h_emlrt_marshallIn(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c42_u, const emlrtMsgIdentifier *c42_parentId)
{
  int32_T c42_y;
  int32_T c42_i44;
  (void)chartInstance;
  sf_mex_import(c42_parentId, sf_mex_dup(c42_u), &c42_i44, 1, 6, 0U, 0, 0U, 0);
  c42_y = c42_i44;
  sf_mex_destroy(&c42_u);
  return c42_y;
}

static void c42_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData)
{
  const mxArray *c42_b_sfEvent;
  emlrtMsgIdentifier c42_thisId;
  int32_T c42_y;
  SFc42_lib_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc42_lib_StateEstimationInstanceStruct *)chartInstanceVoid;
  c42_b_sfEvent = sf_mex_dup(c42_mxArrayInData);
  c42_thisId.fIdentifier = (const char *)c42_varName;
  c42_thisId.fParent = NULL;
  c42_thisId.bParentIsCell = false;
  c42_y = c42_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c42_b_sfEvent),
    &c42_thisId);
  sf_mex_destroy(&c42_b_sfEvent);
  *(int32_T *)c42_outData = c42_y;
  sf_mex_destroy(&c42_mxArrayInData);
}

static uint8_T c42_i_emlrt_marshallIn(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c42_b_is_active_c42_lib_StateEstimation, const
  char_T *c42_identifier)
{
  uint8_T c42_y;
  emlrtMsgIdentifier c42_thisId;
  c42_thisId.fIdentifier = (const char *)c42_identifier;
  c42_thisId.fParent = NULL;
  c42_thisId.bParentIsCell = false;
  c42_y = c42_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c42_b_is_active_c42_lib_StateEstimation), &c42_thisId);
  sf_mex_destroy(&c42_b_is_active_c42_lib_StateEstimation);
  return c42_y;
}

static uint8_T c42_j_emlrt_marshallIn(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c42_u, const emlrtMsgIdentifier *c42_parentId)
{
  uint8_T c42_y;
  uint8_T c42_u0;
  (void)chartInstance;
  sf_mex_import(c42_parentId, sf_mex_dup(c42_u), &c42_u0, 1, 3, 0U, 0, 0U, 0);
  c42_y = c42_u0;
  sf_mex_destroy(&c42_u);
  return c42_y;
}

static void init_dsm_address_info(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc42_lib_StateEstimationInstanceStruct
  *chartInstance)
{
  chartInstance->c42_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c42_e = (real_T (*)[14])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c42_GRF = (real_T (*)[4])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c42_contact = (real_T (*)[2])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
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

void sf_c42_lib_StateEstimation_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1245200069U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2866404485U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2182940951U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(832067699U);
}

mxArray* sf_c42_lib_StateEstimation_get_post_codegen_info(void);
mxArray *sf_c42_lib_StateEstimation_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("AwpZ5K7jE4pmNiHyxyGupE");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(14);
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
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

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
      pr[0] = (double)(2);
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo =
      sf_c42_lib_StateEstimation_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c42_lib_StateEstimation_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c42_lib_StateEstimation_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString(
    "J_VectorNav_to_RightToeBottom_src");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c42_lib_StateEstimation_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c42_lib_StateEstimation_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c42_lib_StateEstimation(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x3'type','srcId','name','auxInfo'{{M[1],M[5],T\"GRF\",},{M[1],M[6],T\"contact\",},{M[8],M[0],T\"is_active_c42_lib_StateEstimation\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 3, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c42_lib_StateEstimation_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc42_lib_StateEstimationInstanceStruct *chartInstance =
      (SFc42_lib_StateEstimationInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _lib_StateEstimationMachineNumber_,
           42,
           1,
           1,
           0,
           3,
           0,
           0,
           0,
           0,
           2,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_lib_StateEstimationMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_lib_StateEstimationMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _lib_StateEstimationMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"e");
          _SFD_SET_DATA_PROPS(1,2,0,1,"GRF");
          _SFD_SET_DATA_PROPS(2,2,0,1,"contact");
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
        _SFD_CV_INIT_EML(0,1,2,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,755);
        _SFD_CV_INIT_EML_FCN(0,1,"scaleFactor",757,-1,902);
        _SFD_CV_INIT_SCRIPT(0,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(0,0,"J_VectorNav_to_RightToeBottom",0,-1,412);
        _SFD_CV_INIT_SCRIPT_IF(0,0,61,86,152,408);
        _SFD_CV_INIT_SCRIPT(1,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(1,0,"J_VectorNav_to_LeftToeBottom",0,-1,408);
        _SFD_CV_INIT_SCRIPT_IF(1,0,60,85,150,404);

        {
          unsigned int dimVector[1];
          dimVector[0]= 14U;
          _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c42_c_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 4U;
          _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c42_b_sf_marshallOut,(MexInFcnForType)
            c42_b_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 2U;
          _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c42_sf_marshallOut,(MexInFcnForType)
            c42_sf_marshallIn);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _lib_StateEstimationMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc42_lib_StateEstimationInstanceStruct *chartInstance =
      (SFc42_lib_StateEstimationInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(0U, (void *)chartInstance->c42_e);
        _SFD_SET_DATA_VALUE_PTR(1U, (void *)chartInstance->c42_GRF);
        _SFD_SET_DATA_VALUE_PTR(2U, (void *)chartInstance->c42_contact);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "szpFC0Ni3e4YWHQAH5gGcGE";
}

static void sf_opaque_initialize_c42_lib_StateEstimation(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc42_lib_StateEstimationInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c42_lib_StateEstimation
    ((SFc42_lib_StateEstimationInstanceStruct*) chartInstanceVar);
  initialize_c42_lib_StateEstimation((SFc42_lib_StateEstimationInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c42_lib_StateEstimation(void *chartInstanceVar)
{
  enable_c42_lib_StateEstimation((SFc42_lib_StateEstimationInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c42_lib_StateEstimation(void *chartInstanceVar)
{
  disable_c42_lib_StateEstimation((SFc42_lib_StateEstimationInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c42_lib_StateEstimation(void *chartInstanceVar)
{
  sf_gateway_c42_lib_StateEstimation((SFc42_lib_StateEstimationInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c42_lib_StateEstimation(SimStruct*
  S)
{
  return get_sim_state_c42_lib_StateEstimation
    ((SFc42_lib_StateEstimationInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c42_lib_StateEstimation(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c42_lib_StateEstimation((SFc42_lib_StateEstimationInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c42_lib_StateEstimation(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc42_lib_StateEstimationInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_lib_StateEstimation_optimization_info();
    }

    finalize_c42_lib_StateEstimation((SFc42_lib_StateEstimationInstanceStruct*)
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
  initSimStructsc42_lib_StateEstimation((SFc42_lib_StateEstimationInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c42_lib_StateEstimation(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c42_lib_StateEstimation
      ((SFc42_lib_StateEstimationInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

static void mdlSetWorkWidths_c42_lib_StateEstimation(SimStruct *S)
{
  /* Set overwritable ports for inplace optimization */
  ssSetInputPortDirectFeedThrough(S, 0, 1);
  ssSetStatesModifiedOnlyInUpdate(S, 1);
  ssSetBlockIsPurelyCombinatorial_wrapper(S, 1);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_lib_StateEstimation_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      42);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,42,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 42);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,42);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,42,1);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,42,2);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=2; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 1; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,42);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(259550241U));
  ssSetChecksum1(S,(1789748359U));
  ssSetChecksum2(S,(51851800U));
  ssSetChecksum3(S,(2032456095U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c42_lib_StateEstimation(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c42_lib_StateEstimation(SimStruct *S)
{
  SFc42_lib_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc42_lib_StateEstimationInstanceStruct *)utMalloc(sizeof
    (SFc42_lib_StateEstimationInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc42_lib_StateEstimationInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c42_lib_StateEstimation;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c42_lib_StateEstimation;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c42_lib_StateEstimation;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c42_lib_StateEstimation;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c42_lib_StateEstimation;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c42_lib_StateEstimation;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c42_lib_StateEstimation;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c42_lib_StateEstimation;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c42_lib_StateEstimation;
  chartInstance->chartInfo.mdlStart = mdlStart_c42_lib_StateEstimation;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c42_lib_StateEstimation;
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
  mdl_start_c42_lib_StateEstimation(chartInstance);
}

void c42_lib_StateEstimation_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c42_lib_StateEstimation(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c42_lib_StateEstimation(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c42_lib_StateEstimation(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c42_lib_StateEstimation_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
