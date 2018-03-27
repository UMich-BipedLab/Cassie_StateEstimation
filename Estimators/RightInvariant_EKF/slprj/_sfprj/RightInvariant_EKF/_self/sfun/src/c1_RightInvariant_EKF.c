/* Include files */

#include "RightInvariant_EKF_sfun.h"
#include "c1_RightInvariant_EKF.h"
#include <math.h>
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
static const char * c1_debug_family_names[12] = { "enable", "R", "pL", "N",
  "indices", "nargin", "nargout", "position", "orientation", "pulse1", "pulse2",
  "landmarks" };

static const char * c1_b_debug_family_names[4] = { "nargin", "nargout", "v",
  "Ax" };

static const char * c1_c_debug_family_names[6] = { "qv", "qw", "nargin",
  "nargout", "q", "R" };

/* Function Declarations */
static void initialize_c1_RightInvariant_EKF
  (SFc1_RightInvariant_EKFInstanceStruct *chartInstance);
static void initialize_params_c1_RightInvariant_EKF
  (SFc1_RightInvariant_EKFInstanceStruct *chartInstance);
static void enable_c1_RightInvariant_EKF(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance);
static void disable_c1_RightInvariant_EKF(SFc1_RightInvariant_EKFInstanceStruct *
  chartInstance);
static void c1_update_debugger_state_c1_RightInvariant_EKF
  (SFc1_RightInvariant_EKFInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_RightInvariant_EKF
  (SFc1_RightInvariant_EKFInstanceStruct *chartInstance);
static void set_sim_state_c1_RightInvariant_EKF
  (SFc1_RightInvariant_EKFInstanceStruct *chartInstance, const mxArray *c1_st);
static void finalize_c1_RightInvariant_EKF(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance);
static void sf_gateway_c1_RightInvariant_EKF
  (SFc1_RightInvariant_EKFInstanceStruct *chartInstance);
static void mdl_start_c1_RightInvariant_EKF
  (SFc1_RightInvariant_EKFInstanceStruct *chartInstance);
static void c1_chartstep_c1_RightInvariant_EKF
  (SFc1_RightInvariant_EKFInstanceStruct *chartInstance);
static void initSimStructsc1_RightInvariant_EKF
  (SFc1_RightInvariant_EKFInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber, uint32_T c1_instanceNumber);
static const mxArray *c1_sf_marshallOut(void *chartInstanceVoid, real_T
  c1_inData_data[], int32_T c1_inData_sizes[2]);
static void c1_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_landmarks, const char_T *c1_identifier,
  real_T c1_y_data[], int32_T c1_y_sizes[2]);
static void c1_b_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y_data[], int32_T c1_y_sizes[2]);
static void c1_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, real_T c1_outData_data[], int32_T
  c1_outData_sizes[2]);
static const mxArray *c1_b_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static const mxArray *c1_c_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static const mxArray *c1_d_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static real_T c1_c_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_e_sf_marshallOut(void *chartInstanceVoid, real_T
  c1_inData_data[], int32_T *c1_inData_sizes);
static void c1_d_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y_data[], int32_T *c1_y_sizes);
static void c1_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, real_T c1_outData_data[], int32_T
  *c1_outData_sizes);
static const mxArray *c1_f_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static void c1_e_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y[9]);
static void c1_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_g_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static boolean_T c1_f_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static void c1_g_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y[3]);
static void c1_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static void c1_h_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y[4]);
static void c1_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static void c1_error(SFc1_RightInvariant_EKFInstanceStruct *chartInstance);
static void c1_b_error(SFc1_RightInvariant_EKFInstanceStruct *chartInstance);
static void c1_rand(SFc1_RightInvariant_EKFInstanceStruct *chartInstance, real_T
                    c1_r[3]);
static void c1_eml_rand_mt19937ar(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, uint32_T c1_d_state[625], uint32_T c1_e_state[625], real_T
  *c1_r);
static void c1_c_error(SFc1_RightInvariant_EKFInstanceStruct *chartInstance);
static const mxArray *c1_h_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static int32_T c1_i_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_h_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static uint32_T c1_j_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_b_method, const char_T *c1_identifier,
  boolean_T *c1_svPtr);
static uint32_T c1_k_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr);
static void c1_l_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_d_state, const char_T *c1_identifier,
  boolean_T *c1_svPtr, uint32_T c1_y[625]);
static void c1_m_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr, uint32_T c1_y[625]);
static void c1_n_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_d_state, const char_T *c1_identifier,
  boolean_T *c1_svPtr, uint32_T c1_y[2]);
static void c1_o_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr, uint32_T c1_y[2]);
static uint8_T c1_p_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_RightInvariant_EKF, const
  char_T *c1_identifier);
static uint8_T c1_q_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static real_T c1_b_eml_rand_mt19937ar(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, uint32_T c1_d_state[625]);
static void init_dsm_address_info(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c1_RightInvariant_EKF
  (SFc1_RightInvariant_EKFInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc1_RightInvariant_EKF(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c1_method_not_empty = false;
  chartInstance->c1_state_not_empty = false;
  chartInstance->c1_b_state_not_empty = false;
  chartInstance->c1_c_state_not_empty = false;
  chartInstance->c1_is_active_c1_RightInvariant_EKF = 0U;
}

static void initialize_params_c1_RightInvariant_EKF
  (SFc1_RightInvariant_EKFInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c1_RightInvariant_EKF(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c1_RightInvariant_EKF(SFc1_RightInvariant_EKFInstanceStruct *
  chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c1_update_debugger_state_c1_RightInvariant_EKF
  (SFc1_RightInvariant_EKFInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c1_RightInvariant_EKF
  (SFc1_RightInvariant_EKFInstanceStruct *chartInstance)
{
  const mxArray *c1_st;
  const mxArray *c1_y = NULL;
  const mxArray *c1_b_y = NULL;
  uint32_T c1_hoistedGlobal;
  const mxArray *c1_c_y = NULL;
  uint32_T c1_b_hoistedGlobal;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  uint8_T c1_c_hoistedGlobal;
  const mxArray *c1_g_y = NULL;
  c1_st = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellmatrix(6, 1), false);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", *chartInstance->c1_landmarks_data, 0,
    0U, 1U, 0U, 2, (*chartInstance->c1_landmarks_sizes)[0],
    (*chartInstance->c1_landmarks_sizes)[1]), false);
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_hoistedGlobal = chartInstance->c1_method;
  c1_c_y = NULL;
  if (!chartInstance->c1_method_not_empty) {
    sf_mex_assign(&c1_c_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_c_y, sf_mex_create("y", &c1_hoistedGlobal, 7, 0U, 0U, 0U,
      0), false);
  }

  sf_mex_setcell(c1_y, 1, c1_c_y);
  c1_b_hoistedGlobal = chartInstance->c1_state;
  c1_d_y = NULL;
  if (!chartInstance->c1_method_not_empty) {
    sf_mex_assign(&c1_d_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_d_y, sf_mex_create("y", &c1_b_hoistedGlobal, 7, 0U, 0U, 0U,
      0), false);
  }

  sf_mex_setcell(c1_y, 2, c1_d_y);
  c1_e_y = NULL;
  if (!chartInstance->c1_c_state_not_empty) {
    sf_mex_assign(&c1_e_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_e_y, sf_mex_create("y", chartInstance->c1_c_state, 7, 0U,
      1U, 0U, 1, 625), false);
  }

  sf_mex_setcell(c1_y, 3, c1_e_y);
  c1_f_y = NULL;
  if (!chartInstance->c1_b_state_not_empty) {
    sf_mex_assign(&c1_f_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_f_y, sf_mex_create("y", chartInstance->c1_b_state, 7, 0U,
      1U, 0U, 1, 2), false);
  }

  sf_mex_setcell(c1_y, 4, c1_f_y);
  c1_c_hoistedGlobal = chartInstance->c1_is_active_c1_RightInvariant_EKF;
  c1_g_y = NULL;
  sf_mex_assign(&c1_g_y, sf_mex_create("y", &c1_c_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c1_y, 5, c1_g_y);
  sf_mex_assign(&c1_st, c1_y, false);
  return c1_st;
}

static void set_sim_state_c1_RightInvariant_EKF
  (SFc1_RightInvariant_EKFInstanceStruct *chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_u;
  real_T c1_tmp_data[40];
  int32_T c1_tmp_sizes[2];
  int32_T c1_i0;
  int32_T c1_i1;
  int32_T c1_loop_ub;
  int32_T c1_i2;
  uint32_T c1_uv0[625];
  int32_T c1_i3;
  uint32_T c1_uv1[2];
  int32_T c1_i4;
  chartInstance->c1_doneDoubleBufferReInit = true;
  c1_u = sf_mex_dup(c1_st);
  c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("landmarks", c1_u,
    0)), "landmarks", c1_tmp_data, c1_tmp_sizes);
  ssSetCurrentOutputPortDimensions_wrapper(chartInstance->S, 1, 0, c1_tmp_sizes
    [0]);
  ssSetCurrentOutputPortDimensions_wrapper(chartInstance->S, 1, 1, c1_tmp_sizes
    [1]);
  c1_i0 = (*chartInstance->c1_landmarks_sizes)[0];
  c1_i1 = (*chartInstance->c1_landmarks_sizes)[1];
  c1_loop_ub = c1_tmp_sizes[0] * c1_tmp_sizes[1] - 1;
  for (c1_i2 = 0; c1_i2 <= c1_loop_ub; c1_i2++) {
    (*chartInstance->c1_landmarks_data)[c1_i2] = c1_tmp_data[c1_i2];
  }

  chartInstance->c1_method = c1_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("method", c1_u, 1)), "method",
    &chartInstance->c1_method_not_empty);
  chartInstance->c1_state = c1_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("state", c1_u, 2)), "state",
    &chartInstance->c1_state_not_empty);
  c1_l_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("state", c1_u,
    3)), "state", &chartInstance->c1_c_state_not_empty, c1_uv0);
  for (c1_i3 = 0; c1_i3 < 625; c1_i3++) {
    chartInstance->c1_c_state[c1_i3] = c1_uv0[c1_i3];
  }

  c1_n_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("state", c1_u,
    4)), "state", &chartInstance->c1_b_state_not_empty, c1_uv1);
  for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
    chartInstance->c1_b_state[c1_i4] = c1_uv1[c1_i4];
  }

  chartInstance->c1_is_active_c1_RightInvariant_EKF = c1_p_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c1_RightInvariant_EKF",
       c1_u, 5)), "is_active_c1_RightInvariant_EKF");
  sf_mex_destroy(&c1_u);
  c1_update_debugger_state_c1_RightInvariant_EKF(chartInstance);
  sf_mex_destroy(&c1_st);
}

static void finalize_c1_RightInvariant_EKF(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c1_RightInvariant_EKF
  (SFc1_RightInvariant_EKFInstanceStruct *chartInstance)
{
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_loop_ub;
  int32_T c1_i7;
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_pulse2, 3U, 1U, 0U,
                        chartInstance->c1_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_pulse1, 2U, 1U, 0U,
                        chartInstance->c1_sfEvent, false);
  for (c1_i5 = 0; c1_i5 < 4; c1_i5++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c1_orientation)[c1_i5], 1U, 1U, 0U,
                          chartInstance->c1_sfEvent, false);
  }

  for (c1_i6 = 0; c1_i6 < 3; c1_i6++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c1_position)[c1_i6], 0U, 1U, 0U,
                          chartInstance->c1_sfEvent, false);
  }

  chartInstance->c1_sfEvent = CALL_EVENT;
  c1_chartstep_c1_RightInvariant_EKF(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_RightInvariant_EKFMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  c1_loop_ub = (*chartInstance->c1_landmarks_sizes)[0] *
    (*chartInstance->c1_landmarks_sizes)[1] - 1;
  for (c1_i7 = 0; c1_i7 <= c1_loop_ub; c1_i7++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c1_landmarks_data)[c1_i7], 4U, 1U, 0U,
                          chartInstance->c1_sfEvent, false);
  }
}

static void mdl_start_c1_RightInvariant_EKF
  (SFc1_RightInvariant_EKFInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_chartstep_c1_RightInvariant_EKF
  (SFc1_RightInvariant_EKFInstanceStruct *chartInstance)
{
  real_T c1_hoistedGlobal;
  real_T c1_b_hoistedGlobal;
  int32_T c1_i8;
  int32_T c1_i9;
  real_T c1_b_position[3];
  real_T c1_b_pulse1;
  real_T c1_b_orientation[4];
  real_T c1_b_pulse2;
  uint32_T c1_debug_family_var_map[12];
  boolean_T c1_enable;
  real_T c1_R[9];
  real_T c1_pL[9];
  real_T c1_N;
  real_T c1_indices_data[3];
  int32_T c1_indices_sizes;
  real_T c1_nargin = 4.0;
  real_T c1_nargout = 1.0;
  real_T c1_b_landmarks_data[40];
  int32_T c1_b_landmarks_sizes[2];
  real_T c1_x;
  real_T c1_b_x;
  boolean_T c1_b;
  real_T c1_c_x;
  real_T c1_d_x;
  boolean_T c1_b_b;
  int32_T c1_landmarks;
  int32_T c1_b_landmarks;
  int32_T c1_i10;
  uint32_T c1_b_debug_family_var_map[6];
  real_T c1_q[4];
  static int32_T c1_iv0[4] = { 1, 2, 3, 0 };

  int32_T c1_i11;
  real_T c1_qv[3];
  int32_T c1_i12;
  real_T c1_qw;
  int32_T c1_loop_ub;
  real_T c1_b_nargin = 1.0;
  int32_T c1_i13;
  real_T c1_b_nargout = 1.0;
  real_T c1_b_R[9];
  int32_T c1_i14;
  real_T c1_a;
  real_T c1_b_a;
  real_T c1_c_a;
  real_T c1_e_x;
  real_T c1_d_a;
  real_T c1_c;
  boolean_T c1_p;
  real_T c1_e_a;
  int32_T c1_i15;
  int32_T c1_i16;
  real_T c1_y[9];
  static real_T c1_c_b[9] = { 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0 };

  uint32_T c1_c_debug_family_var_map[4];
  real_T c1_v[3];
  real_T c1_c_nargin = 1.0;
  real_T c1_c_nargout = 1.0;
  real_T c1_Ax[9];
  real_T c1_f_a;
  int32_T c1_i17;
  int32_T c1_i18;
  real_T c1_d_b[9];
  int32_T c1_i19;
  int32_T c1_i20;
  real_T c1_g_a[3];
  int32_T c1_i21;
  real_T c1_e_b[3];
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i25;
  real_T c1_b_y[9];
  int32_T c1_i26;
  int32_T c1_i27;
  int32_T c1_i28;
  int32_T c1_i29;
  int32_T c1_i30;
  static real_T c1_dv0[9] = { 0.0, 0.0, 0.0, 1.0, 2.0, 3.0, -5.0, 1.5, -2.1 };

  int32_T c1_k;
  real_T c1_h_a;
  real_T c1_b_k;
  real_T c1_f_b;
  real_T c1_f_x;
  real_T c1_i_a;
  real_T c1_g_x;
  real_T c1_g_b;
  boolean_T c1_b_p;
  boolean_T c1_c_p;
  boolean_T c1_d_p;
  real_T c1_j_a;
  real_T c1_k_a;
  real_T c1_h_b;
  real_T c1_i_b;
  real_T c1_l_a;
  real_T c1_m_a;
  real_T c1_j_b;
  real_T c1_k_b;
  boolean_T c1_e_p;
  boolean_T c1_f_p;
  boolean_T c1_g_p;
  boolean_T c1_h_p;
  boolean_T c1_i_p;
  boolean_T c1_j_p;
  real_T c1_n_a;
  int32_T c1_idx[3];
  real_T c1_o_a;
  real_T c1_l_b;
  real_T c1_m_b;
  real_T c1_p_a;
  real_T c1_q_a;
  real_T c1_n_b;
  real_T c1_o_b;
  boolean_T c1_k_p;
  boolean_T c1_l_p;
  boolean_T c1_m_p;
  int32_T c1_i31;
  boolean_T c1_n_p;
  boolean_T c1_o_p;
  boolean_T c1_p_p;
  real_T c1_c_y[3];
  int32_T c1_c_k;
  int32_T c1_b_sizes;
  int32_T c1_b_loop_ub;
  int32_T c1_i32;
  int32_T c1_d_k;
  real_T c1_b_data[3];
  real_T c1_h_x;
  boolean_T c1_p_b;
  int32_T c1_q_b;
  int32_T c1_b_c;
  int32_T c1_r_a;
  int32_T c1_s_a;
  int32_T c1_nInf;
  int32_T c1_t_a;
  int32_T c1_nFinite;
  int32_T c1_nb;
  int32_T c1_r_b;
  int32_T c1_khi;
  int32_T c1_e_k;
  real_T c1_i_x;
  int32_T c1_u_a;
  int32_T c1_v_a;
  int32_T c1_w_a;
  int32_T c1_s_b;
  int32_T c1_x_a;
  int32_T c1_c_c;
  int32_T c1_j;
  real_T c1_y_a;
  real_T c1_t_b;
  int32_T c1_ab_a;
  real_T c1_j_x;
  boolean_T c1_b0;
  int32_T c1_bb_a;
  real_T c1_k_x;
  boolean_T c1_b1;
  real_T c1_l_x;
  boolean_T c1_b2;
  int32_T c1_cb_a;
  real_T c1_d_y;
  int32_T c1_u_b;
  real_T c1_A;
  int32_T c1_i33;
  int32_T c1_d_c;
  real_T c1_m_x;
  real_T c1_n_x;
  real_T c1_e_y;
  real_T c1_o_x;
  real_T c1_p_x;
  real_T c1_q_x;
  real_T c1_r_x;
  int32_T c1_i34;
  real_T c1_absxk;
  int32_T c1_i35;
  real_T c1_s_x;
  real_T c1_t_x;
  boolean_T c1_v_b;
  int32_T c1_indices;
  int32_T c1_i36;
  boolean_T c1_b3;
  int32_T c1_i37;
  int32_T c1_i38;
  real_T c1_u_x;
  boolean_T c1_w_b;
  boolean_T c1_b4;
  int32_T c1_i39;
  boolean_T c1_x_b;
  real_T c1_r;
  int32_T c1_varargin_1_sizes[2];
  int32_T c1_exponent;
  int32_T c1_i40;
  int32_T c1_b_exponent;
  int32_T c1_varargin_1;
  int32_T c1_i41;
  real_T c1_v_x;
  int32_T c1_b_varargin_1;
  boolean_T c1_y_b;
  boolean_T c1_q_p;
  int32_T c1_c_loop_ub;
  int32_T c1_i42;
  real_T c1_w_x;
  boolean_T c1_r_p;
  boolean_T c1_ab_b;
  real_T c1_varargin_2[4];
  real_T c1_varargin_1_data[40];
  int32_T c1_i43;
  real_T c1_db_a;
  real_T c1_eb_a;
  real_T c1_flt;
  boolean_T c1_s_p;
  boolean_T c1_b5;
  boolean_T c1_b6;
  boolean_T c1_b7;
  boolean_T c1_result;
  const mxArray *c1_f_y = NULL;
  static char_T c1_cv0[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  boolean_T c1_b8;
  boolean_T c1_b9;
  boolean_T c1_b_result;
  int32_T c1_c_result;
  int32_T c1_input_sizes[2];
  c1_cell_0_size c1_reshapes_elems_sizes;
  int32_T c1_reshapes;
  int32_T c1_b_reshapes;
  int32_T c1_d_loop_ub;
  int32_T c1_i44;
  int32_T c1_i45;
  c1_cell_0 c1_reshapes_data;
  int32_T c1_b_varargin_1_sizes[2];
  int32_T c1_c_varargin_1;
  int32_T c1_d_varargin_1;
  int32_T c1_e_loop_ub;
  int32_T c1_i46;
  int32_T c1_i47;
  real_T c1_b_varargin_1_data[40];
  int32_T c1_c_landmarks_sizes[2];
  int32_T c1_f_loop_ub;
  int32_T c1_i48;
  int32_T c1_i49;
  int32_T c1_i50;
  real_T c1_c_landmarks_data[44];
  int32_T c1_c_landmarks;
  int32_T c1_d_landmarks;
  int32_T c1_g_loop_ub;
  int32_T c1_i51;
  int32_T c1_x_sizes;
  int32_T c1_h_loop_ub;
  int32_T c1_i52;
  int32_T c1_nxin;
  real_T c1_x_data[3];
  int32_T c1_nrowx;
  int32_T c1_nxout;
  int32_T c1_f_k;
  const mxArray *c1_g_y = NULL;
  static char_T c1_cv1[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  boolean_T c1_b10;
  boolean_T c1_b11;
  boolean_T c1_b12;
  int32_T c1_i53;
  int32_T c1_x_x;
  int32_T c1_y_x[2];
  int32_T c1_b_x_sizes;
  int32_T c1_i_loop_ub;
  int32_T c1_i54;
  real_T c1_b_x_data[3];
  int32_T c1_j_loop_ub;
  int32_T c1_i55;
  int32_T c1_k_loop_ub;
  int32_T c1_i56;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  int32_T exitg1;
  boolean_T exitg2;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
  c1_hoistedGlobal = *chartInstance->c1_pulse1;
  c1_b_hoistedGlobal = *chartInstance->c1_pulse2;
  for (c1_i8 = 0; c1_i8 < 3; c1_i8++) {
    c1_b_position[c1_i8] = (*chartInstance->c1_position)[c1_i8];
  }

  for (c1_i9 = 0; c1_i9 < 4; c1_i9++) {
    c1_b_orientation[c1_i9] = (*chartInstance->c1_orientation)[c1_i9];
  }

  c1_b_pulse1 = c1_hoistedGlobal;
  c1_b_pulse2 = c1_b_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 12U, 12U, c1_debug_family_names,
    c1_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_enable, 0U, c1_g_sf_marshallOut,
    c1_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_R, 1U, c1_f_sf_marshallOut,
    c1_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_pL, 2U, c1_f_sf_marshallOut,
    c1_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c1_N, 3U, c1_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_DYN_IMPORTABLE(c1_indices_data, (const int32_T *)
    &c1_indices_sizes, NULL, 0, 4, (void *)c1_e_sf_marshallOut, (void *)
    c1_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_nargin, 5U, c1_b_sf_marshallOut,
    c1_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_nargout, 6U, c1_b_sf_marshallOut,
    c1_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_b_position, 7U, c1_d_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_b_orientation, 8U, c1_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c1_b_pulse1, 9U, c1_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c1_b_pulse2, 10U, c1_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_DYN_IMPORTABLE(c1_b_landmarks_data, (const int32_T *)
    &c1_b_landmarks_sizes, NULL, 0, 11, (void *)c1_sf_marshallOut, (void *)
    c1_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 4);
  c1_x = c1_b_pulse1;
  c1_b_x = c1_x;
  c1_b = muDoubleScalarIsNaN(c1_b_x);
  if (c1_b) {
    c1_error(chartInstance);
  }

  guard4 = false;
  if (CV_EML_COND(0, 1, 0, c1_b_pulse1 != 0.0)) {
    c1_c_x = c1_b_pulse2;
    c1_d_x = c1_c_x;
    c1_b_b = muDoubleScalarIsNaN(c1_d_x);
    if (c1_b_b) {
      c1_error(chartInstance);
    }

    if (!CV_EML_COND(0, 1, 1, c1_b_pulse2 != 0.0)) {
      CV_EML_MCDC(0, 1, 0, true);
      CV_EML_IF(0, 1, 0, true);
      _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 5);
      c1_enable = true;
    } else {
      guard4 = true;
    }
  } else {
    guard4 = true;
  }

  if (guard4) {
    CV_EML_MCDC(0, 1, 0, false);
    CV_EML_IF(0, 1, 0, false);
    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 7);
    c1_enable = false;
  }

  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 11);
  c1_b_landmarks_sizes[0] = 0;
  c1_b_landmarks_sizes[1] = 0;
  c1_landmarks = c1_b_landmarks_sizes[0];
  c1_b_landmarks = c1_b_landmarks_sizes[1];
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 14);
  if (CV_EML_IF(0, 1, 1, c1_enable)) {
    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 16);
    for (c1_i10 = 0; c1_i10 < 4; c1_i10++) {
      c1_q[c1_i10] = c1_b_orientation[c1_iv0[c1_i10]];
    }

    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 6U, 6U, c1_c_debug_family_names,
      c1_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_qv, 0U, c1_d_sf_marshallOut,
      c1_f_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_qw, 1U, c1_b_sf_marshallOut,
      c1_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_b_nargin, 2U, c1_b_sf_marshallOut,
      c1_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_b_nargout, 3U, c1_b_sf_marshallOut,
      c1_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_q, 4U, c1_c_sf_marshallOut,
      c1_g_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_b_R, 5U, c1_f_sf_marshallOut,
      c1_d_sf_marshallIn);
    CV_SCRIPT_FCN(0, 0);
    _SFD_SCRIPT_CALL(0U, chartInstance->c1_sfEvent, 8);
    for (c1_i14 = 0; c1_i14 < 3; c1_i14++) {
      c1_qv[c1_i14] = c1_q[c1_i14];
    }

    _SFD_SCRIPT_CALL(0U, chartInstance->c1_sfEvent, 8);
    c1_qw = c1_q[3];
    _SFD_SCRIPT_CALL(0U, chartInstance->c1_sfEvent, 9);
    c1_a = c1_qw;
    c1_b_a = c1_a;
    c1_c_a = c1_b_a;
    c1_e_x = c1_c_a;
    c1_d_a = c1_e_x;
    c1_c = c1_d_a * c1_d_a;
    c1_p = false;
    if (c1_p) {
      c1_b_error(chartInstance);
    }

    c1_e_a = 2.0 * c1_c - 1.0;
    for (c1_i15 = 0; c1_i15 < 9; c1_i15++) {
      c1_y[c1_i15] = c1_e_a * c1_c_b[c1_i15];
    }

    for (c1_i16 = 0; c1_i16 < 3; c1_i16++) {
      c1_v[c1_i16] = c1_qv[c1_i16];
    }

    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c1_b_debug_family_names,
      c1_c_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_c_nargin, 0U, c1_b_sf_marshallOut,
      c1_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_c_nargout, 1U, c1_b_sf_marshallOut,
      c1_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_v, 2U, c1_d_sf_marshallOut,
      c1_f_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_Ax, 3U, c1_f_sf_marshallOut,
      c1_d_sf_marshallIn);
    CV_SCRIPT_FCN(1, 0);
    _SFD_SCRIPT_CALL(1U, chartInstance->c1_sfEvent, 3);
    c1_Ax[0] = 0.0;
    c1_Ax[3] = -c1_v[2];
    c1_Ax[6] = c1_v[1];
    c1_Ax[1] = c1_v[2];
    c1_Ax[4] = 0.0;
    c1_Ax[7] = -c1_v[0];
    c1_Ax[2] = -c1_v[1];
    c1_Ax[5] = c1_v[0];
    c1_Ax[8] = 0.0;
    _SFD_SCRIPT_CALL(1U, chartInstance->c1_sfEvent, -3);
    _SFD_SYMBOL_SCOPE_POP();
    c1_f_a = 2.0 * c1_qw;
    for (c1_i17 = 0; c1_i17 < 9; c1_i17++) {
      c1_d_b[c1_i17] = c1_Ax[c1_i17];
    }

    for (c1_i18 = 0; c1_i18 < 9; c1_i18++) {
      c1_d_b[c1_i18] *= c1_f_a;
    }

    for (c1_i19 = 0; c1_i19 < 3; c1_i19++) {
      c1_g_a[c1_i19] = c1_qv[c1_i19];
    }

    for (c1_i20 = 0; c1_i20 < 3; c1_i20++) {
      c1_e_b[c1_i20] = c1_qv[c1_i20];
    }

    for (c1_i21 = 0; c1_i21 < 3; c1_i21++) {
      c1_i23 = 0;
      for (c1_i24 = 0; c1_i24 < 3; c1_i24++) {
        c1_b_y[c1_i23 + c1_i21] = c1_g_a[c1_i21] * c1_e_b[c1_i24];
        c1_i23 += 3;
      }
    }

    for (c1_i22 = 0; c1_i22 < 9; c1_i22++) {
      c1_b_y[c1_i22] *= 2.0;
    }

    for (c1_i25 = 0; c1_i25 < 9; c1_i25++) {
      c1_b_R[c1_i25] = (c1_y[c1_i25] - c1_d_b[c1_i25]) + c1_b_y[c1_i25];
    }

    _SFD_SCRIPT_CALL(0U, chartInstance->c1_sfEvent, -9);
    _SFD_SYMBOL_SCOPE_POP();
    c1_i26 = 0;
    for (c1_i27 = 0; c1_i27 < 3; c1_i27++) {
      c1_i28 = 0;
      for (c1_i30 = 0; c1_i30 < 3; c1_i30++) {
        c1_R[c1_i30 + c1_i26] = c1_b_R[c1_i28 + c1_i27];
        c1_i28 += 3;
      }

      c1_i26 += 3;
    }

    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 19);
    for (c1_i29 = 0; c1_i29 < 9; c1_i29++) {
      c1_pL[c1_i29] = c1_dv0[c1_i29];
    }

    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 25);
    c1_N = 3.0;
    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 26);
    c1_rand(chartInstance, c1_g_a);
    for (c1_k = 0; c1_k < 3; c1_k++) {
      c1_b_k = 1.0 + (real_T)c1_k;
      c1_f_x = c1_g_a[(int32_T)c1_b_k - 1] * 3.0;
      c1_g_x = c1_f_x;
      c1_g_x = muDoubleScalarFloor(c1_g_x);
      c1_g_a[(int32_T)c1_b_k - 1] = 1.0 + c1_g_x;
    }

    c1_h_a = c1_g_a[0];
    c1_f_b = c1_g_a[1];
    c1_i_a = c1_h_a;
    c1_g_b = c1_f_b;
    c1_b_p = (c1_i_a <= c1_g_b);
    c1_c_p = c1_b_p;
    c1_d_p = c1_c_p;
    if (c1_d_p) {
      c1_k_a = c1_g_a[1];
      c1_i_b = c1_g_a[2];
      c1_m_a = c1_k_a;
      c1_k_b = c1_i_b;
      c1_f_p = (c1_m_a <= c1_k_b);
      c1_h_p = c1_f_p;
      c1_j_p = c1_h_p;
      if (c1_j_p) {
        c1_idx[0] = 1;
        c1_idx[1] = 2;
        c1_idx[2] = 3;
      } else {
        c1_o_a = c1_g_a[0];
        c1_m_b = c1_g_a[2];
        c1_q_a = c1_o_a;
        c1_o_b = c1_m_b;
        c1_l_p = (c1_q_a <= c1_o_b);
        c1_n_p = c1_l_p;
        c1_p_p = c1_n_p;
        if (c1_p_p) {
          c1_idx[0] = 1;
          c1_idx[1] = 3;
          c1_idx[2] = 2;
        } else {
          c1_idx[0] = 3;
          c1_idx[1] = 1;
          c1_idx[2] = 2;
        }
      }
    } else {
      c1_j_a = c1_g_a[0];
      c1_h_b = c1_g_a[2];
      c1_l_a = c1_j_a;
      c1_j_b = c1_h_b;
      c1_e_p = (c1_l_a <= c1_j_b);
      c1_g_p = c1_e_p;
      c1_i_p = c1_g_p;
      if (c1_i_p) {
        c1_idx[0] = 2;
        c1_idx[1] = 1;
        c1_idx[2] = 3;
      } else {
        c1_n_a = c1_g_a[1];
        c1_l_b = c1_g_a[2];
        c1_p_a = c1_n_a;
        c1_n_b = c1_l_b;
        c1_k_p = (c1_p_a <= c1_n_b);
        c1_m_p = c1_k_p;
        c1_o_p = c1_m_p;
        if (c1_o_p) {
          c1_idx[0] = 2;
          c1_idx[1] = 3;
          c1_idx[2] = 1;
        } else {
          c1_idx[0] = 3;
          c1_idx[1] = 2;
          c1_idx[2] = 1;
        }
      }
    }

    for (c1_i31 = 0; c1_i31 < 3; c1_i31++) {
      c1_c_y[c1_i31] = 0.0;
    }

    c1_indices_sizes = 3;
    for (c1_c_k = 0; c1_c_k + 1 < 4; c1_c_k++) {
      c1_indices_data[c1_c_k] = c1_g_a[c1_idx[c1_c_k] - 1];
    }

    c1_b_sizes = c1_indices_sizes;
    c1_b_loop_ub = c1_indices_sizes - 1;
    for (c1_i32 = 0; c1_i32 <= c1_b_loop_ub; c1_i32++) {
      c1_b_data[c1_i32] = c1_indices_data[c1_i32];
    }

    c1_d_k = 3;
    exitg2 = false;
    while ((!exitg2) && (c1_d_k >= 1)) {
      c1_h_x = c1_b_data[c1_d_k - 1];
      c1_p_b = muDoubleScalarIsInf(c1_h_x);
      if (c1_p_b && (c1_b_data[c1_d_k - 1] > 0.0)) {
        c1_s_a = c1_d_k - 1;
        c1_d_k = c1_s_a;
      } else {
        exitg2 = true;
      }
    }

    c1_q_b = c1_d_k;
    c1_b_c = 3 - c1_q_b;
    c1_r_a = c1_b_c;
    c1_nInf = c1_r_a;
    c1_t_a = c1_d_k;
    c1_nFinite = c1_t_a;
    c1_nb = 0;
    c1_r_b = c1_nFinite;
    c1_khi = c1_r_b;
    c1_e_k = 1;
    while (c1_e_k <= c1_khi) {
      c1_i_x = c1_indices_data[c1_e_k - 1];
      do {
        exitg1 = 0;
        c1_w_a = c1_e_k + 1;
        c1_e_k = c1_w_a;
        if (c1_e_k > c1_khi) {
          exitg1 = 1;
        } else {
          c1_y_a = c1_indices_data[c1_e_k - 1];
          c1_t_b = c1_i_x;
          c1_j_x = c1_t_b - c1_y_a;
          c1_k_x = c1_j_x;
          c1_l_x = c1_k_x;
          c1_d_y = muDoubleScalarAbs(c1_l_x);
          c1_A = c1_t_b;
          c1_m_x = c1_A;
          c1_n_x = c1_m_x;
          c1_e_y = c1_n_x / 2.0;
          c1_o_x = c1_e_y;
          c1_p_x = c1_o_x;
          c1_q_x = c1_p_x;
          c1_r_x = c1_q_x;
          c1_absxk = muDoubleScalarAbs(c1_r_x);
          c1_s_x = c1_absxk;
          c1_t_x = c1_s_x;
          c1_v_b = muDoubleScalarIsInf(c1_t_x);
          c1_b3 = !c1_v_b;
          c1_u_x = c1_s_x;
          c1_w_b = muDoubleScalarIsNaN(c1_u_x);
          c1_b4 = !c1_w_b;
          c1_x_b = (c1_b3 && c1_b4);
          if (c1_x_b) {
            if (c1_absxk <= 2.2250738585072014E-308) {
              c1_r = 4.94065645841247E-324;
            } else {
              frexp(c1_absxk, &c1_exponent);
              c1_b_exponent = c1_exponent;
              c1_r = ldexp(1.0, c1_b_exponent - 53);
            }
          } else {
            c1_r = rtNaN;
          }

          guard2 = false;
          guard3 = false;
          if (c1_d_y < c1_r) {
            guard3 = true;
          } else {
            c1_v_x = c1_y_a;
            c1_y_b = muDoubleScalarIsInf(c1_v_x);
            if (c1_y_b) {
              c1_w_x = c1_t_b;
              c1_ab_b = muDoubleScalarIsInf(c1_w_x);
              if (c1_ab_b && (c1_y_a > 0.0 == c1_t_b > 0.0)) {
                guard3 = true;
              } else {
                guard2 = true;
              }
            } else {
              guard2 = true;
            }
          }

          if (guard3) {
            c1_q_p = true;
          }

          if (guard2) {
            c1_q_p = false;
          }

          c1_r_p = c1_q_p;
          if (!c1_r_p) {
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);

      c1_ab_a = c1_nb + 1;
      c1_nb = c1_ab_a;
      c1_indices_data[c1_nb - 1] = c1_i_x;
    }

    if (c1_nInf > 0) {
      c1_u_a = c1_nb + 1;
      c1_nb = c1_u_a;
      c1_x_a = c1_khi + 1;
      c1_c_c = c1_x_a - 1;
      c1_indices_data[c1_nb - 1] = c1_indices_data[c1_c_c];
    }

    c1_v_a = c1_khi;
    c1_s_b = c1_nInf;
    c1_e_k = c1_v_a + c1_s_b;
    for (c1_j = 1; c1_j < 1; c1_j++) {
      c1_bb_a = c1_nb + 1;
      c1_nb = c1_bb_a;
      c1_cb_a = c1_e_k;
      c1_u_b = c1_j;
      c1_d_c = (c1_cb_a + c1_u_b) - 1;
      c1_indices_data[c1_nb - 1] = c1_indices_data[c1_d_c];
    }

    c1_b0 = (1 > c1_nb);
    c1_b1 = c1_b0;
    c1_b2 = c1_b1;
    if (c1_b2) {
      c1_i33 = 0;
    } else {
      c1_i33 = c1_nb;
    }

    c1_indices_sizes = c1_i33;
    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 27);
    while (CV_EML_WHILE(0, 1, 0, !(c1_indices_sizes == 0))) {
      _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 28);
      c1_i34 = 0;
      for (c1_i35 = 0; c1_i35 < 3; c1_i35++) {
        c1_i36 = 0;
        for (c1_i38 = 0; c1_i38 < 3; c1_i38++) {
          c1_y[c1_i38 + c1_i34] = c1_R[c1_i36 + c1_i35];
          c1_i36 += 3;
        }

        c1_i34 += 3;
      }

      c1_indices = sf_eml_array_bounds_check(sfGlobalDebugInstanceStruct,
        chartInstance->S, 1U, 739, 10, MAX_uint32_T, (int32_T)sf_integer_check
        (chartInstance->S, 1U, 739U, 10U, c1_indices_data[0]), 1, 3) - 1;
      for (c1_i37 = 0; c1_i37 < 3; c1_i37++) {
        c1_g_a[c1_i37] = c1_pL[c1_i37 + 3 * c1_indices] - c1_b_position[c1_i37];
      }

      for (c1_i39 = 0; c1_i39 < 3; c1_i39++) {
        c1_c_y[c1_i39] = 0.0;
        c1_i40 = 0;
        for (c1_i41 = 0; c1_i41 < 3; c1_i41++) {
          c1_c_y[c1_i39] += c1_y[c1_i40 + c1_i39] * c1_g_a[c1_i41];
          c1_i40 += 3;
        }
      }

      c1_varargin_1_sizes[0] = c1_b_landmarks_sizes[0];
      c1_varargin_1_sizes[1] = c1_b_landmarks_sizes[1];
      c1_varargin_1 = c1_varargin_1_sizes[0];
      c1_b_varargin_1 = c1_varargin_1_sizes[1];
      c1_c_loop_ub = c1_b_landmarks_sizes[0] * c1_b_landmarks_sizes[1] - 1;
      for (c1_i42 = 0; c1_i42 <= c1_c_loop_ub; c1_i42++) {
        c1_varargin_1_data[c1_i42] = c1_b_landmarks_data[c1_i42];
      }

      c1_varargin_2[0] = c1_indices_data[0];
      for (c1_i43 = 0; c1_i43 < 3; c1_i43++) {
        c1_varargin_2[c1_i43 + 1] = c1_c_y[c1_i43];
      }

      c1_db_a = (real_T)c1_varargin_1_sizes[0];
      c1_eb_a = c1_db_a;
      c1_flt = c1_eb_a;
      c1_s_p = (4.0 == c1_flt);
      guard1 = false;
      if (c1_s_p) {
        guard1 = true;
      } else {
        c1_b5 = (c1_varargin_1_sizes[0] == 0);
        c1_b6 = (c1_varargin_1_sizes[1] == 0);
        c1_result = (c1_b5 || c1_b6);
        if (c1_result) {
          guard1 = true;
        } else {
          c1_b7 = false;
        }
      }

      if (guard1) {
        c1_b7 = true;
      }

      if (c1_b7) {
      } else {
        c1_f_y = NULL;
        sf_mex_assign(&c1_f_y, sf_mex_create("y", c1_cv0, 10, 0U, 1U, 0U, 2, 1,
          39), false);
        sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                          sf_mex_call_debug(sfGlobalDebugInstanceStruct,
          "message", 1U, 1U, 14, c1_f_y));
      }

      c1_b8 = (c1_varargin_1_sizes[0] == 0);
      c1_b9 = (c1_varargin_1_sizes[1] == 0);
      c1_b_result = (c1_b8 || c1_b9);
      if (!c1_b_result) {
        c1_c_result = c1_varargin_1_sizes[1];
      } else {
        c1_c_result = 0;
      }

      c1_input_sizes[1] = c1_c_result;
      c1_reshapes_elems_sizes.f1[0] = 4;
      c1_reshapes_elems_sizes.f1[1] = c1_input_sizes[1];
      c1_reshapes = c1_reshapes_elems_sizes.f1[0];
      c1_b_reshapes = c1_reshapes_elems_sizes.f1[1];
      c1_d_loop_ub = (c1_input_sizes[1] << 2) - 1;
      for (c1_i44 = 0; c1_i44 <= c1_d_loop_ub; c1_i44++) {
        c1_reshapes_data.f1[c1_i44] = c1_varargin_1_data[c1_i44];
      }

      for (c1_i45 = 0; c1_i45 < 4; c1_i45++) {
        c1_reshapes_data.f2[c1_i45] = c1_varargin_2[c1_i45];
      }

      c1_b_varargin_1_sizes[0] = 4;
      c1_b_varargin_1_sizes[1] = c1_reshapes_elems_sizes.f1[1];
      c1_c_varargin_1 = c1_b_varargin_1_sizes[0];
      c1_d_varargin_1 = c1_b_varargin_1_sizes[1];
      c1_e_loop_ub = c1_reshapes_elems_sizes.f1[0] * c1_reshapes_elems_sizes.f1
        [1] - 1;
      for (c1_i46 = 0; c1_i46 <= c1_e_loop_ub; c1_i46++) {
        c1_b_varargin_1_data[c1_i46] = c1_reshapes_data.f1[c1_i46];
      }

      for (c1_i47 = 0; c1_i47 < 4; c1_i47++) {
        c1_varargin_2[c1_i47] = c1_reshapes_data.f2[c1_i47];
      }

      c1_c_landmarks_sizes[0] = 4;
      c1_c_landmarks_sizes[1] = c1_b_varargin_1_sizes[1] + 1;
      c1_f_loop_ub = c1_b_varargin_1_sizes[1] - 1;
      for (c1_i48 = 0; c1_i48 <= c1_f_loop_ub; c1_i48++) {
        for (c1_i50 = 0; c1_i50 < 4; c1_i50++) {
          c1_c_landmarks_data[c1_i50 + c1_c_landmarks_sizes[0] * c1_i48] =
            c1_b_varargin_1_data[c1_i50 + c1_b_varargin_1_sizes[0] * c1_i48];
        }
      }

      for (c1_i49 = 0; c1_i49 < 4; c1_i49++) {
        c1_c_landmarks_data[c1_i49 + c1_c_landmarks_sizes[0] *
          c1_b_varargin_1_sizes[1]] = c1_varargin_2[c1_i49];
      }

      _SFD_DIM_SIZE_GEQ_CHECK(10, c1_c_landmarks_sizes[1], 2);
      c1_b_landmarks_sizes[0] = 4;
      c1_b_landmarks_sizes[1] = c1_c_landmarks_sizes[1];
      c1_c_landmarks = c1_b_landmarks_sizes[0];
      c1_d_landmarks = c1_b_landmarks_sizes[1];
      c1_g_loop_ub = c1_c_landmarks_sizes[0] * c1_c_landmarks_sizes[1] - 1;
      for (c1_i51 = 0; c1_i51 <= c1_g_loop_ub; c1_i51++) {
        c1_b_landmarks_data[c1_i51] = c1_c_landmarks_data[c1_i51];
      }

      _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 29);
      c1_x_sizes = c1_indices_sizes;
      c1_h_loop_ub = c1_indices_sizes - 1;
      for (c1_i52 = 0; c1_i52 <= c1_h_loop_ub; c1_i52++) {
        c1_x_data[c1_i52] = c1_indices_data[c1_i52];
      }

      c1_nxin = c1_x_sizes - 1;
      c1_nrowx = c1_x_sizes;
      c1_nxout = c1_nxin;
      for (c1_f_k = 1; c1_f_k <= c1_nxout; c1_f_k++) {
        c1_x_data[c1_f_k - 1] = c1_x_data[c1_f_k];
      }

      if (c1_nxout <= c1_nrowx) {
      } else {
        c1_g_y = NULL;
        sf_mex_assign(&c1_g_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                          sf_mex_call_debug(sfGlobalDebugInstanceStruct,
          "message", 1U, 1U, 14, c1_g_y));
      }

      c1_b10 = (1 > c1_nxout);
      c1_b11 = c1_b10;
      c1_b12 = c1_b11;
      if (c1_b12) {
        c1_i53 = 0;
      } else {
        c1_i53 = c1_nxout;
      }

      c1_x_x = c1_x_sizes;
      c1_y_x[0] = c1_x_x;
      c1_y_x[1] = 1;
      c1_b_x_sizes = c1_i53;
      c1_i_loop_ub = c1_i53 - 1;
      for (c1_i54 = 0; c1_i54 <= c1_i_loop_ub; c1_i54++) {
        c1_b_x_data[c1_i54] = c1_x_data[c1_i54];
      }

      c1_x_sizes = c1_b_x_sizes;
      c1_j_loop_ub = c1_b_x_sizes - 1;
      for (c1_i55 = 0; c1_i55 <= c1_j_loop_ub; c1_i55++) {
        c1_x_data[c1_i55] = c1_b_x_data[c1_i55];
      }

      c1_indices_sizes = c1_x_sizes;
      c1_k_loop_ub = c1_x_sizes - 1;
      for (c1_i56 = 0; c1_i56 <= c1_k_loop_ub; c1_i56++) {
        c1_indices_data[c1_i56] = c1_x_data[c1_i56];
      }

      _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 27);
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, -29);
  _SFD_SYMBOL_SCOPE_POP();
  ssSetCurrentOutputPortDimensions_wrapper(chartInstance->S, 1, 0,
    c1_b_landmarks_sizes[0]);
  ssSetCurrentOutputPortDimensions_wrapper(chartInstance->S, 1, 1,
    c1_b_landmarks_sizes[1]);
  c1_i11 = (*chartInstance->c1_landmarks_sizes)[0];
  c1_i12 = (*chartInstance->c1_landmarks_sizes)[1];
  c1_loop_ub = c1_b_landmarks_sizes[0] * c1_b_landmarks_sizes[1] - 1;
  for (c1_i13 = 0; c1_i13 <= c1_loop_ub; c1_i13++) {
    (*chartInstance->c1_landmarks_data)[c1_i13] = c1_b_landmarks_data[c1_i13];
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
}

static void initSimStructsc1_RightInvariant_EKF
  (SFc1_RightInvariant_EKFInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber, uint32_T c1_instanceNumber)
{
  (void)c1_machineNumber;
  _SFD_SCRIPT_TRANSLATION(c1_chartNumber, c1_instanceNumber, 0U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\utils\\+Angles\\Quaternion_to_Rotation.m"));
  _SFD_SCRIPT_TRANSLATION(c1_chartNumber, c1_instanceNumber, 1U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\utils\\+Angles\\skew.m"));
}

static const mxArray *c1_sf_marshallOut(void *chartInstanceVoid, real_T
  c1_inData_data[], int32_T c1_inData_sizes[2])
{
  const mxArray *c1_mxArrayOutData;
  int32_T c1_u_sizes[2];
  int32_T c1_u;
  int32_T c1_b_u;
  int32_T c1_loop_ub;
  int32_T c1_i57;
  const mxArray *c1_y = NULL;
  real_T c1_u_data[40];
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_mxArrayOutData = NULL;
  c1_u_sizes[0] = c1_inData_sizes[0];
  c1_u_sizes[1] = c1_inData_sizes[1];
  c1_u = c1_u_sizes[0];
  c1_b_u = c1_u_sizes[1];
  c1_loop_ub = c1_inData_sizes[0] * c1_inData_sizes[1] - 1;
  for (c1_i57 = 0; c1_i57 <= c1_loop_ub; c1_i57++) {
    c1_u_data[c1_i57] = c1_inData_data[c1_i57];
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u_data, 0, 0U, 1U, 0U, 2,
    c1_u_sizes[0], c1_u_sizes[1]), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static void c1_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_landmarks, const char_T *c1_identifier,
  real_T c1_y_data[], int32_T c1_y_sizes[2])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_landmarks), &c1_thisId,
                        c1_y_data, c1_y_sizes);
  sf_mex_destroy(&c1_landmarks);
}

static void c1_b_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y_data[], int32_T c1_y_sizes[2])
{
  int32_T c1_i58;
  int32_T c1_i59;
  uint32_T c1_uv2[2];
  real_T c1_tmp_data[40];
  boolean_T c1_bv0[2];
  int32_T c1_tmp_sizes[2];
  int32_T c1_y;
  int32_T c1_b_y;
  int32_T c1_loop_ub;
  int32_T c1_i60;
  (void)chartInstance;
  for (c1_i58 = 0; c1_i58 < 2; c1_i58++) {
    c1_uv2[c1_i58] = 4U + 6U * (uint32_T)c1_i58;
  }

  for (c1_i59 = 0; c1_i59 < 2; c1_i59++) {
    c1_bv0[c1_i59] = true;
  }

  sf_mex_import_vs(c1_parentId, sf_mex_dup(c1_u), c1_tmp_data, 1, 0, 0U, 1, 0U,
                   2, c1_bv0, c1_uv2, c1_tmp_sizes);
  c1_y_sizes[0] = c1_tmp_sizes[0];
  c1_y_sizes[1] = c1_tmp_sizes[1];
  c1_y = c1_y_sizes[0];
  c1_b_y = c1_y_sizes[1];
  c1_loop_ub = c1_tmp_sizes[0] * c1_tmp_sizes[1] - 1;
  for (c1_i60 = 0; c1_i60 <= c1_loop_ub; c1_i60++) {
    c1_y_data[c1_i60] = c1_tmp_data[c1_i60];
  }

  sf_mex_destroy(&c1_u);
}

static void c1_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, real_T c1_outData_data[], int32_T
  c1_outData_sizes[2])
{
  const mxArray *c1_landmarks;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y_data[40];
  int32_T c1_y_sizes[2];
  int32_T c1_loop_ub;
  int32_T c1_i61;
  int32_T c1_b_loop_ub;
  int32_T c1_i62;
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_landmarks = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_landmarks), &c1_thisId,
                        c1_y_data, c1_y_sizes);
  sf_mex_destroy(&c1_landmarks);
  c1_outData_sizes[0] = c1_y_sizes[0];
  c1_outData_sizes[1] = c1_y_sizes[1];
  c1_loop_ub = c1_y_sizes[1] - 1;
  for (c1_i61 = 0; c1_i61 <= c1_loop_ub; c1_i61++) {
    c1_b_loop_ub = c1_y_sizes[0] - 1;
    for (c1_i62 = 0; c1_i62 <= c1_b_loop_ub; c1_i62++) {
      c1_outData_data[c1_i62 + c1_outData_sizes[0] * c1_i61] = c1_y_data[c1_i62
        + c1_y_sizes[0] * c1_i61];
    }
  }

  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_b_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData;
  real_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_mxArrayOutData = NULL;
  c1_u = *(real_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static const mxArray *c1_c_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData;
  int32_T c1_i63;
  const mxArray *c1_y = NULL;
  real_T c1_u[4];
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_mxArrayOutData = NULL;
  for (c1_i63 = 0; c1_i63 < 4; c1_i63++) {
    c1_u[c1_i63] = (*(real_T (*)[4])c1_inData)[c1_i63];
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 1, 4), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static const mxArray *c1_d_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData;
  int32_T c1_i64;
  const mxArray *c1_y = NULL;
  real_T c1_u[3];
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_mxArrayOutData = NULL;
  for (c1_i64 = 0; c1_i64 < 3; c1_i64++) {
    c1_u[c1_i64] = (*(real_T (*)[3])c1_inData)[c1_i64];
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 1, 3), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static real_T c1_c_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  real_T c1_y;
  real_T c1_d0;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_d0, 1, 0, 0U, 0, 0U, 0);
  c1_y = c1_d0;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_nargout;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y;
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_nargout = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nargout), &c1_thisId);
  sf_mex_destroy(&c1_nargout);
  *(real_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_e_sf_marshallOut(void *chartInstanceVoid, real_T
  c1_inData_data[], int32_T *c1_inData_sizes)
{
  const mxArray *c1_mxArrayOutData;
  int32_T c1_u_sizes;
  int32_T c1_loop_ub;
  int32_T c1_i65;
  const mxArray *c1_y = NULL;
  real_T c1_u_data[3];
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_mxArrayOutData = NULL;
  c1_u_sizes = *c1_inData_sizes;
  c1_loop_ub = *c1_inData_sizes - 1;
  for (c1_i65 = 0; c1_i65 <= c1_loop_ub; c1_i65++) {
    c1_u_data[c1_i65] = c1_inData_data[c1_i65];
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u_data, 0, 0U, 1U, 0U, 1,
    c1_u_sizes), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static void c1_d_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y_data[], int32_T *c1_y_sizes)
{
  uint32_T c1_uv3[1];
  boolean_T c1_bv1[1];
  real_T c1_tmp_data[3];
  int32_T c1_tmp_sizes;
  int32_T c1_loop_ub;
  int32_T c1_i66;
  (void)chartInstance;
  c1_uv3[0] = 3U;
  c1_bv1[0] = true;
  sf_mex_import_vs(c1_parentId, sf_mex_dup(c1_u), c1_tmp_data, 1, 0, 0U, 1, 0U,
                   1, c1_bv1, c1_uv3, &c1_tmp_sizes);
  *c1_y_sizes = c1_tmp_sizes;
  c1_loop_ub = c1_tmp_sizes - 1;
  for (c1_i66 = 0; c1_i66 <= c1_loop_ub; c1_i66++) {
    c1_y_data[c1_i66] = c1_tmp_data[c1_i66];
  }

  sf_mex_destroy(&c1_u);
}

static void c1_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, real_T c1_outData_data[], int32_T
  *c1_outData_sizes)
{
  const mxArray *c1_indices;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y_data[3];
  int32_T c1_y_sizes;
  int32_T c1_loop_ub;
  int32_T c1_i67;
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_indices = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_indices), &c1_thisId,
                        c1_y_data, &c1_y_sizes);
  sf_mex_destroy(&c1_indices);
  *c1_outData_sizes = c1_y_sizes;
  c1_loop_ub = c1_y_sizes - 1;
  for (c1_i67 = 0; c1_i67 <= c1_loop_ub; c1_i67++) {
    c1_outData_data[c1_i67] = c1_y_data[c1_i67];
  }

  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_f_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData;
  int32_T c1_i68;
  int32_T c1_i69;
  const mxArray *c1_y = NULL;
  int32_T c1_i70;
  real_T c1_u[9];
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_mxArrayOutData = NULL;
  c1_i68 = 0;
  for (c1_i69 = 0; c1_i69 < 3; c1_i69++) {
    for (c1_i70 = 0; c1_i70 < 3; c1_i70++) {
      c1_u[c1_i70 + c1_i68] = (*(real_T (*)[9])c1_inData)[c1_i70 + c1_i68];
    }

    c1_i68 += 3;
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 2, 3, 3), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static void c1_e_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y[9])
{
  real_T c1_dv1[9];
  int32_T c1_i71;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_dv1, 1, 0, 0U, 1, 0U, 2, 3, 3);
  for (c1_i71 = 0; c1_i71 < 9; c1_i71++) {
    c1_y[c1_i71] = c1_dv1[c1_i71];
  }

  sf_mex_destroy(&c1_u);
}

static void c1_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_pL;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y[9];
  int32_T c1_i72;
  int32_T c1_i73;
  int32_T c1_i74;
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_pL = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_pL), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_pL);
  c1_i72 = 0;
  for (c1_i73 = 0; c1_i73 < 3; c1_i73++) {
    for (c1_i74 = 0; c1_i74 < 3; c1_i74++) {
      (*(real_T (*)[9])c1_outData)[c1_i74 + c1_i72] = c1_y[c1_i74 + c1_i72];
    }

    c1_i72 += 3;
  }

  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_g_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData;
  boolean_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_mxArrayOutData = NULL;
  c1_u = *(boolean_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static boolean_T c1_f_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  boolean_T c1_y;
  boolean_T c1_b13;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b13, 1, 11, 0U, 0, 0U, 0);
  c1_y = c1_b13;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_enable;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  boolean_T c1_y;
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_enable = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_enable), &c1_thisId);
  sf_mex_destroy(&c1_enable);
  *(boolean_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static void c1_g_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y[3])
{
  real_T c1_dv2[3];
  int32_T c1_i75;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_dv2, 1, 0, 0U, 1, 0U, 1, 3);
  for (c1_i75 = 0; c1_i75 < 3; c1_i75++) {
    c1_y[c1_i75] = c1_dv2[c1_i75];
  }

  sf_mex_destroy(&c1_u);
}

static void c1_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_v;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y[3];
  int32_T c1_i76;
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_v = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_v), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_v);
  for (c1_i76 = 0; c1_i76 < 3; c1_i76++) {
    (*(real_T (*)[3])c1_outData)[c1_i76] = c1_y[c1_i76];
  }

  sf_mex_destroy(&c1_mxArrayInData);
}

static void c1_h_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y[4])
{
  real_T c1_dv3[4];
  int32_T c1_i77;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_dv3, 1, 0, 0U, 1, 0U, 1, 4);
  for (c1_i77 = 0; c1_i77 < 4; c1_i77++) {
    c1_y[c1_i77] = c1_dv3[c1_i77];
  }

  sf_mex_destroy(&c1_u);
}

static void c1_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_q;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y[4];
  int32_T c1_i78;
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_q = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_q), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_q);
  for (c1_i78 = 0; c1_i78 < 4; c1_i78++) {
    (*(real_T (*)[4])c1_outData)[c1_i78] = c1_y[c1_i78];
  }

  sf_mex_destroy(&c1_mxArrayInData);
}

const mxArray *sf_c1_RightInvariant_EKF_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  const char * c1_data[5] = {
    "789ced53cd4ac34010de48ad4a513c79133c0a426345503cb5a6f6072bdab4a22052d266da0677b325bbb1edcd37f0ea2308be8fcfe36e92a63194062a450407"
    "96dd6f67bfc97c3319a454af90b02db15ed6104a8b7d5dac15e4db6a8095e04e09ef536833c0af6275a8cd61c47da76d1040133329b16cc3e6cdf10090038ce2",
    "67303d4fd7c2d0b408d46804542c014829e20a8174c9b3d687ce53c325c8e9b3f033084781a7e7104df5a4627a2636d1b31de1ddcce1c9f7bb319ec405bb8781"
    "65ebaec1c1b12d6ab7386de9941b5c9c83b8a70971d3b1b869af7a6e1b83cf7f4fe0b3185fe2878b47ed4cbd65e03055a78ced550c876318ab45da7109d89ca9",
    "658b57dcb6e76d69066316b434d14d87622c59cc6d136aba429dea720b33f5c0d7aaced69a25611da37ad333f25522f96e847dc9d7321f9f85c5f9d33efe36bf"
    "82e6f76b077def97c4bdda086a26e15dceee8f73278d61b553d6ca7ebcfd483c65463c14d91779ffd7feaf7c42be9958be120773ca9e6018c6f9e95cbe25f08d",
    "18df586edda4b6a04aff73b8e81c9af5dc797950d2b97e7d34a4c5c665bb37be2b2e7f0ebf009ee0d96f",
    "" };

  c1_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(c1_data, 1936U, &c1_nameCaptureInfo);
  return c1_nameCaptureInfo;
}

static void c1_error(SFc1_RightInvariant_EKFInstanceStruct *chartInstance)
{
  const mxArray *c1_y = NULL;
  static char_T c1_cv2[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
    'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  (void)chartInstance;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_cv2, 10, 0U, 1U, 0U, 2, 1, 19),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message", 1U,
    1U, 14, c1_y));
}

static void c1_b_error(SFc1_RightInvariant_EKFInstanceStruct *chartInstance)
{
  const mxArray *c1_y = NULL;
  static char_T c1_cv3[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'p', 'o', 'w', 'e', 'r', '_', 'd', 'o', 'm', 'a', 'i',
    'n', 'E', 'r', 'r', 'o', 'r' };

  (void)chartInstance;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_cv3, 10, 0U, 1U, 0U, 2, 1, 31),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message", 1U,
    1U, 14, c1_y));
}

static void c1_rand(SFc1_RightInvariant_EKFInstanceStruct *chartInstance, real_T
                    c1_r[3])
{
  int32_T c1_i79;
  int32_T c1_k;
  uint32_T c1_b_r;
  real_T c1_b_k;
  real_T c1_d1;
  int32_T c1_mti;
  real_T c1_b_mti;
  real_T c1_d2;
  uint32_T c1_u0;
  if (!chartInstance->c1_method_not_empty) {
    chartInstance->c1_method = 7U;
    chartInstance->c1_method_not_empty = true;
  }

  if (!chartInstance->c1_c_state_not_empty) {
    for (c1_i79 = 0; c1_i79 < 625; c1_i79++) {
      chartInstance->c1_c_state[c1_i79] = 0U;
    }

    c1_b_r = 5489U;
    chartInstance->c1_c_state[0] = 5489U;
    for (c1_mti = 0; c1_mti < 623; c1_mti++) {
      c1_b_mti = 2.0 + (real_T)c1_mti;
      c1_d2 = muDoubleScalarRound(c1_b_mti - 1.0);
      if (c1_d2 < 4.294967296E+9) {
        if (c1_d2 >= 0.0) {
          c1_u0 = (uint32_T)c1_d2;
        } else {
          c1_u0 = 0U;
        }
      } else if (c1_d2 >= 4.294967296E+9) {
        c1_u0 = MAX_uint32_T;
      } else {
        c1_u0 = 0U;
      }

      c1_b_r = (c1_b_r ^ c1_b_r >> 30U) * 1812433253U + c1_u0;
      chartInstance->c1_c_state[(int32_T)c1_b_mti - 1] = c1_b_r;
    }

    chartInstance->c1_c_state[624] = 624U;
    chartInstance->c1_c_state_not_empty = true;
  }

  for (c1_k = 0; c1_k < 3; c1_k++) {
    c1_b_k = 1.0 + (real_T)c1_k;
    c1_d1 = c1_b_eml_rand_mt19937ar(chartInstance, chartInstance->c1_c_state);
    c1_r[(int32_T)c1_b_k - 1] = c1_d1;
  }
}

static void c1_eml_rand_mt19937ar(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, uint32_T c1_d_state[625], uint32_T c1_e_state[625], real_T
  *c1_r)
{
  int32_T c1_i80;
  for (c1_i80 = 0; c1_i80 < 625; c1_i80++) {
    c1_e_state[c1_i80] = c1_d_state[c1_i80];
  }

  *c1_r = c1_b_eml_rand_mt19937ar(chartInstance, c1_e_state);
}

static void c1_c_error(SFc1_RightInvariant_EKFInstanceStruct *chartInstance)
{
  const mxArray *c1_y = NULL;
  static char_T c1_cv4[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  (void)chartInstance;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_cv4, 10, 0U, 1U, 0U, 2, 1, 37),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message", 1U,
    1U, 14, c1_y));
}

static const mxArray *c1_h_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData;
  int32_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_mxArrayOutData = NULL;
  c1_u = *(int32_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static int32_T c1_i_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  int32_T c1_y;
  int32_T c1_i81;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_i81, 1, 6, 0U, 0, 0U, 0);
  c1_y = c1_i81;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_h_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_b_sfEvent;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  int32_T c1_y;
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_b_sfEvent = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_sfEvent),
    &c1_thisId);
  sf_mex_destroy(&c1_b_sfEvent);
  *(int32_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static uint32_T c1_j_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_b_method, const char_T *c1_identifier,
  boolean_T *c1_svPtr)
{
  uint32_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_k_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_method),
    &c1_thisId, c1_svPtr);
  sf_mex_destroy(&c1_b_method);
  return c1_y;
}

static uint32_T c1_k_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr)
{
  uint32_T c1_y;
  uint32_T c1_u1;
  (void)chartInstance;
  if (mxIsEmpty(c1_u)) {
    *c1_svPtr = false;
  } else {
    *c1_svPtr = true;
    sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_u1, 1, 7, 0U, 0, 0U, 0);
    c1_y = c1_u1;
  }

  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_l_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_d_state, const char_T *c1_identifier,
  boolean_T *c1_svPtr, uint32_T c1_y[625])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_m_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_d_state), &c1_thisId,
                        c1_svPtr, c1_y);
  sf_mex_destroy(&c1_d_state);
}

static void c1_m_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr, uint32_T c1_y[625])
{
  uint32_T c1_uv4[625];
  int32_T c1_i82;
  (void)chartInstance;
  if (mxIsEmpty(c1_u)) {
    *c1_svPtr = false;
  } else {
    *c1_svPtr = true;
    sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_uv4, 1, 7, 0U, 1, 0U, 1, 625);
    for (c1_i82 = 0; c1_i82 < 625; c1_i82++) {
      c1_y[c1_i82] = c1_uv4[c1_i82];
    }
  }

  sf_mex_destroy(&c1_u);
}

static void c1_n_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_d_state, const char_T *c1_identifier,
  boolean_T *c1_svPtr, uint32_T c1_y[2])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_o_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_d_state), &c1_thisId,
                        c1_svPtr, c1_y);
  sf_mex_destroy(&c1_d_state);
}

static void c1_o_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr, uint32_T c1_y[2])
{
  uint32_T c1_uv5[2];
  int32_T c1_i83;
  (void)chartInstance;
  if (mxIsEmpty(c1_u)) {
    *c1_svPtr = false;
  } else {
    *c1_svPtr = true;
    sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_uv5, 1, 7, 0U, 1, 0U, 1, 2);
    for (c1_i83 = 0; c1_i83 < 2; c1_i83++) {
      c1_y[c1_i83] = c1_uv5[c1_i83];
    }
  }

  sf_mex_destroy(&c1_u);
}

static uint8_T c1_p_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_RightInvariant_EKF, const
  char_T *c1_identifier)
{
  uint8_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_q_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_is_active_c1_RightInvariant_EKF), &c1_thisId);
  sf_mex_destroy(&c1_b_is_active_c1_RightInvariant_EKF);
  return c1_y;
}

static uint8_T c1_q_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_y;
  uint8_T c1_u2;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_u2, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_u2;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static real_T c1_b_eml_rand_mt19937ar(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, uint32_T c1_d_state[625])
{
  int32_T c1_j;
  uint32_T c1_u[2];
  real_T c1_b_j;
  uint32_T c1_mti;
  real_T c1_b_r;
  int32_T c1_kk;
  uint32_T c1_y;
  boolean_T c1_isvalid;
  int32_T c1_b_kk;
  real_T c1_c_kk;
  boolean_T c1_b_isvalid;
  uint32_T c1_b_y;
  uint32_T c1_c_y;
  uint32_T c1_d_y;
  int32_T c1_k;
  uint32_T c1_e_y;
  uint32_T c1_f_y;
  uint32_T c1_g_y;
  int32_T c1_a;
  int32_T exitg1;
  boolean_T exitg2;

  /* ========================= COPYRIGHT NOTICE ============================ */
  /*  This is a uniform (0,1) pseudorandom number generator based on:        */
  /*                                                                         */
  /*  A C-program for MT19937, with initialization improved 2002/1/26.       */
  /*  Coded by Takuji Nishimura and Makoto Matsumoto.                        */
  /*                                                                         */
  /*  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,      */
  /*  All rights reserved.                                                   */
  /*                                                                         */
  /*  Redistribution and use in source and binary forms, with or without     */
  /*  modification, are permitted provided that the following conditions     */
  /*  are met:                                                               */
  /*                                                                         */
  /*    1. Redistributions of source code must retain the above copyright    */
  /*       notice, this list of conditions and the following disclaimer.     */
  /*                                                                         */
  /*    2. Redistributions in binary form must reproduce the above copyright */
  /*       notice, this list of conditions and the following disclaimer      */
  /*       in the documentation and/or other materials provided with the     */
  /*       distribution.                                                     */
  /*                                                                         */
  /*    3. The names of its contributors may not be used to endorse or       */
  /*       promote products derived from this software without specific      */
  /*       prior written permission.                                         */
  /*                                                                         */
  /*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS    */
  /*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT      */
  /*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR  */
  /*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT  */
  /*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,  */
  /*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT       */
  /*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,  */
  /*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY  */
  /*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT    */
  /*  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE */
  /*  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */
  /*                                                                         */
  /* =============================   END   ================================= */
  do {
    exitg1 = 0;
    for (c1_j = 0; c1_j < 2; c1_j++) {
      c1_b_j = 1.0 + (real_T)c1_j;
      c1_mti = c1_d_state[624] + 1U;
      if ((real_T)c1_mti >= 625.0) {
        for (c1_kk = 0; c1_kk < 227; c1_kk++) {
          c1_c_kk = 1.0 + (real_T)c1_kk;
          c1_y = (c1_d_state[(int32_T)c1_c_kk - 1] & 2147483648U) | (c1_d_state
            [(int32_T)(c1_c_kk + 1.0) - 1] & 2147483647U);
          c1_b_y = c1_y;
          c1_c_y = c1_b_y;
          if ((real_T)(c1_c_y & 1U) == 0.0) {
            c1_c_y >>= 1U;
          } else {
            c1_c_y = c1_c_y >> 1U ^ 2567483615U;
          }

          c1_d_state[(int32_T)c1_c_kk - 1] = c1_d_state[(int32_T)(c1_c_kk +
            397.0) - 1] ^ c1_c_y;
        }

        for (c1_b_kk = 0; c1_b_kk < 396; c1_b_kk++) {
          c1_c_kk = 228.0 + (real_T)c1_b_kk;
          c1_y = (c1_d_state[(int32_T)c1_c_kk - 1] & 2147483648U) | (c1_d_state
            [(int32_T)(c1_c_kk + 1.0) - 1] & 2147483647U);
          c1_f_y = c1_y;
          c1_g_y = c1_f_y;
          if ((real_T)(c1_g_y & 1U) == 0.0) {
            c1_g_y >>= 1U;
          } else {
            c1_g_y = c1_g_y >> 1U ^ 2567483615U;
          }

          c1_d_state[(int32_T)c1_c_kk - 1] = c1_d_state[(int32_T)((c1_c_kk + 1.0)
            - 228.0) - 1] ^ c1_g_y;
        }

        c1_y = (c1_d_state[623] & 2147483648U) | (c1_d_state[0] & 2147483647U);
        c1_d_y = c1_y;
        c1_e_y = c1_d_y;
        if ((real_T)(c1_e_y & 1U) == 0.0) {
          c1_e_y >>= 1U;
        } else {
          c1_e_y = c1_e_y >> 1U ^ 2567483615U;
        }

        c1_d_state[623] = c1_d_state[396] ^ c1_e_y;
        c1_mti = 1U;
      }

      c1_y = c1_d_state[(int32_T)c1_mti - 1];
      c1_d_state[624] = c1_mti;
      c1_y ^= c1_y >> 11U;
      c1_y ^= c1_y << 7U & 2636928640U;
      c1_y ^= c1_y << 15U & 4022730752U;
      c1_y ^= c1_y >> 18U;
      c1_u[(int32_T)c1_b_j - 1] = c1_y;
    }

    c1_u[0] >>= 5U;
    c1_u[1] >>= 6U;
    c1_b_r = 1.1102230246251565E-16 * ((real_T)c1_u[0] * 6.7108864E+7 + (real_T)
      c1_u[1]);
    if (c1_b_r == 0.0) {
      if (((real_T)c1_d_state[624] >= 1.0) && ((real_T)c1_d_state[624] < 625.0))
      {
        c1_isvalid = true;
      } else {
        c1_isvalid = false;
      }

      c1_b_isvalid = c1_isvalid;
      if (c1_isvalid) {
        c1_b_isvalid = false;
        c1_k = 0;
        exitg2 = false;
        while ((!exitg2) && (c1_k + 1 < 625)) {
          if ((real_T)c1_d_state[c1_k] == 0.0) {
            c1_a = c1_k + 1;
            c1_k = c1_a;
          } else {
            c1_b_isvalid = true;
            exitg2 = true;
          }
        }
      }

      if (!c1_b_isvalid) {
        c1_c_error(chartInstance);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return c1_b_r;
}

static void init_dsm_address_info(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance)
{
  chartInstance->c1_position = (real_T (*)[3])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c1_landmarks_data = (real_T (*)[40])
    ssGetOutputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c1_landmarks_sizes = (int32_T (*)[2])
    ssGetCurrentOutputPortDimensions_wrapper(chartInstance->S, 1);
  chartInstance->c1_orientation = (real_T (*)[4])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_pulse1 = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c1_pulse2 = (real_T *)ssGetInputPortSignal_wrapper
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

void sf_c1_RightInvariant_EKF_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4087993804U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2090439293U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(53945562U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2451120183U);
}

mxArray* sf_c1_RightInvariant_EKF_get_post_codegen_info(void);
mxArray *sf_c1_RightInvariant_EKF_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("xnX6DPkXSAEgDYfsFgx1DB");
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
      pr[0] = (double)(4);
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
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
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
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
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
      pr[0] = (double)(4);
      pr[1] = (double)(10);
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
    mxArray* mxPostCodegenInfo = sf_c1_RightInvariant_EKF_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c1_RightInvariant_EKF_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c1_RightInvariant_EKF_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("pre");
  mxArray *fallbackReason = mxCreateString("hasBreakpoints");
  mxArray *hiddenFallbackType = mxCreateString("none");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c1_RightInvariant_EKF_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c1_RightInvariant_EKF_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c1_RightInvariant_EKF(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x6'type','srcId','name','auxInfo'{{M[1],M[5],T\"landmarks\",},{M[4],M[0],T\"method\",S'l','i','p'{{M1x2[523 529],M[1],T\"C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m\"}}},{M[4],M[0],T\"state\",S'l','i','p'{{M1x2[165 170],M[1],T\"C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mcg16807_stateful.m\"}}},{M[4],M[0],T\"state\",S'l','i','p'{{M1x2[166 171],M[1],T\"C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m\"}}},{M[4],M[0],T\"state\",S'l','i','p'{{M1x2[165 170],M[1],T\"C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_shr3cong_stateful.m\"}}},{M[8],M[0],T\"is_active_c1_RightInvariant_EKF\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 6, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_RightInvariant_EKF_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc1_RightInvariant_EKFInstanceStruct *chartInstance =
      (SFc1_RightInvariant_EKFInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _RightInvariant_EKFMachineNumber_,
           1,
           1,
           1,
           0,
           5,
           0,
           0,
           0,
           0,
           2,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"position");
          _SFD_SET_DATA_PROPS(1,1,1,0,"orientation");
          _SFD_SET_DATA_PROPS(2,1,1,0,"pulse1");
          _SFD_SET_DATA_PROPS(3,1,1,0,"pulse2");
          _SFD_SET_DATA_PROPS(4,2,0,1,"landmarks");
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
        _SFD_CV_INIT_EML(0,1,1,0,2,0,0,0,0,1,2,1);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,807);
        _SFD_CV_INIT_EML_IF(0,1,0,110,130,150,178);
        _SFD_CV_INIT_EML_IF(0,1,1,252,261,-1,802);
        _SFD_CV_INIT_EML_WHILE(0,1,0,653,677,798);

        {
          static int condStart[] = { 113, 124 };

          static int condEnd[] = { 119, 130 };

          static int pfixExpr[] = { 0, 1, -1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,0,113,130,2,0,&(condStart[0]),&(condEnd[0]),
                                4,&(pfixExpr[0]));
        }

        _SFD_CV_INIT_SCRIPT(0,1,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(0,0,"Quaternion_to_Rotation",0,-1,274);
        _SFD_CV_INIT_SCRIPT(1,1,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(1,0,"skew",0,-1,156);

        {
          unsigned int dimVector[1];
          dimVector[0]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_d_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 4U;
          _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_c_sf_marshallOut,(MexInFcnForType)NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_b_sf_marshallOut,(MexInFcnForType)NULL);

        {
          unsigned int dimVector[2];
          dimVector[0]= 4U;
          dimVector[1]= 10U;
          _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_sf_marshallOut,(MexInFcnForType)
            c1_sf_marshallIn);
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
    SFc1_RightInvariant_EKFInstanceStruct *chartInstance =
      (SFc1_RightInvariant_EKFInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(0U, *chartInstance->c1_position);
        _SFD_SET_DATA_VALUE_PTR_VAR_DIM(4U, *chartInstance->c1_landmarks_data,
          (void *)chartInstance->c1_landmarks_sizes);
        _SFD_SET_DATA_VALUE_PTR(1U, *chartInstance->c1_orientation);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c1_pulse1);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c1_pulse2);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sM6jw19MmtVGn2AtFHugBTG";
}

static void sf_opaque_initialize_c1_RightInvariant_EKF(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc1_RightInvariant_EKFInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c1_RightInvariant_EKF((SFc1_RightInvariant_EKFInstanceStruct*)
    chartInstanceVar);
  initialize_c1_RightInvariant_EKF((SFc1_RightInvariant_EKFInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c1_RightInvariant_EKF(void *chartInstanceVar)
{
  enable_c1_RightInvariant_EKF((SFc1_RightInvariant_EKFInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c1_RightInvariant_EKF(void *chartInstanceVar)
{
  disable_c1_RightInvariant_EKF((SFc1_RightInvariant_EKFInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c1_RightInvariant_EKF(void *chartInstanceVar)
{
  sf_gateway_c1_RightInvariant_EKF((SFc1_RightInvariant_EKFInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c1_RightInvariant_EKF(SimStruct* S)
{
  return get_sim_state_c1_RightInvariant_EKF
    ((SFc1_RightInvariant_EKFInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c1_RightInvariant_EKF(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c1_RightInvariant_EKF((SFc1_RightInvariant_EKFInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c1_RightInvariant_EKF(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_RightInvariant_EKFInstanceStruct*) chartInstanceVar)
      ->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_RightInvariant_EKF_optimization_info();
    }

    finalize_c1_RightInvariant_EKF((SFc1_RightInvariant_EKFInstanceStruct*)
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
  initSimStructsc1_RightInvariant_EKF((SFc1_RightInvariant_EKFInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_RightInvariant_EKF(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_RightInvariant_EKF
      ((SFc1_RightInvariant_EKFInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

static void mdlSetWorkWidths_c1_RightInvariant_EKF(SimStruct *S)
{
  /* Set overwritable ports for inplace optimization */
  ssSetStatesModifiedOnlyInUpdate(S, 1);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_RightInvariant_EKF_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,1);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,1,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 1);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,1);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,1,4);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,1,1);
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

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,1);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(210737461U));
  ssSetChecksum1(S,(3395138363U));
  ssSetChecksum2(S,(4035915580U));
  ssSetChecksum3(S,(579629942U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c1_RightInvariant_EKF(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c1_RightInvariant_EKF(SimStruct *S)
{
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)utMalloc(sizeof
    (SFc1_RightInvariant_EKFInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc1_RightInvariant_EKFInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_RightInvariant_EKF;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_RightInvariant_EKF;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c1_RightInvariant_EKF;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_RightInvariant_EKF;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c1_RightInvariant_EKF;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_RightInvariant_EKF;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_RightInvariant_EKF;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_RightInvariant_EKF;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_RightInvariant_EKF;
  chartInstance->chartInfo.mdlStart = mdlStart_c1_RightInvariant_EKF;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c1_RightInvariant_EKF;
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
  mdl_start_c1_RightInvariant_EKF(chartInstance);
}

void c1_RightInvariant_EKF_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c1_RightInvariant_EKF(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_RightInvariant_EKF(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_RightInvariant_EKF(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_RightInvariant_EKF_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
