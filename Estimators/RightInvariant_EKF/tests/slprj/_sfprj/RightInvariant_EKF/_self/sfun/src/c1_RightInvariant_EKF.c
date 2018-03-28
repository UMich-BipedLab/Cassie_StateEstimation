/* Include files */

#include "RightInvariant_EKF_sfun.h"
#include "c1_RightInvariant_EKF.h"
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
static const char * c1_debug_family_names[14] = { "enable", "R", "N", "indices",
  "measurement", "nargin", "nargout", "position", "orientation", "pulse1",
  "pulse2", "landmark_positions", "landmark_true_noise_std", "landmarks" };

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
static const mxArray *c1_e_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static real_T c1_c_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static void c1_d_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y[3]);
static void c1_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_f_sf_marshallOut(void *chartInstanceVoid, real_T
  c1_inData_data[], int32_T *c1_inData_sizes);
static void c1_e_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y_data[], int32_T *c1_y_sizes);
static void c1_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, real_T c1_outData_data[], int32_T
  *c1_outData_sizes);
static const mxArray *c1_g_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static void c1_f_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y[9]);
static void c1_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_h_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static boolean_T c1_g_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static void c1_h_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y[4]);
static void c1_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static void c1_error(SFc1_RightInvariant_EKFInstanceStruct *chartInstance);
static void c1_b_error(SFc1_RightInvariant_EKFInstanceStruct *chartInstance);
static real_T c1_rand(SFc1_RightInvariant_EKFInstanceStruct *chartInstance);
static void c1_eml_rand_mt19937ar(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, uint32_T c1_e_state[625], uint32_T c1_f_state[625], real_T
  *c1_r);
static void c1_genrand_uint32_vector(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, uint32_T c1_mt[625], uint32_T c1_b_mt[625], uint32_T c1_u[2]);
static boolean_T c1_is_valid_state(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, uint32_T c1_mt[625]);
static void c1_c_error(SFc1_RightInvariant_EKFInstanceStruct *chartInstance);
static void c1_b_rand(SFc1_RightInvariant_EKFInstanceStruct *chartInstance,
                      real_T c1_r[7]);
static void c1_randn(SFc1_RightInvariant_EKFInstanceStruct *chartInstance,
                     real_T c1_r[3]);
static void c1_b_eml_rand_mt19937ar(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, uint32_T c1_e_state[625], uint32_T c1_f_state[625], real_T
  *c1_r);
static void c1_genrandu(SFc1_RightInvariant_EKFInstanceStruct *chartInstance,
  uint32_T c1_mt[625], uint32_T c1_b_mt[625], real_T *c1_r);
static const mxArray *c1_i_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static int32_T c1_i_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_h_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static uint32_T c1_j_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_c_method, const char_T *c1_identifier,
  boolean_T *c1_svPtr);
static uint32_T c1_k_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr);
static void c1_l_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_e_state, const char_T *c1_identifier,
  boolean_T *c1_svPtr, uint32_T c1_y[625]);
static void c1_m_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr, uint32_T c1_y[625]);
static void c1_n_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_e_state, const char_T *c1_identifier,
  boolean_T *c1_svPtr, uint32_T c1_y[2]);
static void c1_o_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr, uint32_T c1_y[2]);
static uint8_T c1_p_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_RightInvariant_EKF, const
  char_T *c1_identifier);
static uint8_T c1_q_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static real_T c1_c_eml_rand_mt19937ar(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, uint32_T c1_e_state[625]);
static void c1_b_genrand_uint32_vector(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, uint32_T c1_mt[625], uint32_T c1_u[2]);
static real_T c1_d_eml_rand_mt19937ar(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, uint32_T c1_e_state[625]);
static real_T c1_b_genrandu(SFc1_RightInvariant_EKFInstanceStruct *chartInstance,
  uint32_T c1_mt[625]);
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
  chartInstance->c1_b_method_not_empty = false;
  chartInstance->c1_d_state_not_empty = false;
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
  uint32_T c1_c_hoistedGlobal;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  const mxArray *c1_g_y = NULL;
  const mxArray *c1_h_y = NULL;
  uint8_T c1_d_hoistedGlobal;
  const mxArray *c1_i_y = NULL;
  c1_st = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellmatrix(8, 1), false);
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
  c1_b_hoistedGlobal = chartInstance->c1_b_method;
  c1_d_y = NULL;
  if (!chartInstance->c1_method_not_empty) {
    sf_mex_assign(&c1_d_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_d_y, sf_mex_create("y", &c1_b_hoistedGlobal, 7, 0U, 0U, 0U,
      0), false);
  }

  sf_mex_setcell(c1_y, 2, c1_d_y);
  c1_c_hoistedGlobal = chartInstance->c1_state;
  c1_e_y = NULL;
  if (!chartInstance->c1_method_not_empty) {
    sf_mex_assign(&c1_e_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_e_y, sf_mex_create("y", &c1_c_hoistedGlobal, 7, 0U, 0U, 0U,
      0), false);
  }

  sf_mex_setcell(c1_y, 3, c1_e_y);
  c1_f_y = NULL;
  if (!chartInstance->c1_c_state_not_empty) {
    sf_mex_assign(&c1_f_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_f_y, sf_mex_create("y", chartInstance->c1_c_state, 7, 0U,
      1U, 0U, 1, 625), false);
  }

  sf_mex_setcell(c1_y, 4, c1_f_y);
  c1_g_y = NULL;
  if (!chartInstance->c1_b_state_not_empty) {
    sf_mex_assign(&c1_g_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_g_y, sf_mex_create("y", chartInstance->c1_b_state, 7, 0U,
      1U, 0U, 1, 2), false);
  }

  sf_mex_setcell(c1_y, 5, c1_g_y);
  c1_h_y = NULL;
  if (!chartInstance->c1_b_state_not_empty) {
    sf_mex_assign(&c1_h_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_h_y, sf_mex_create("y", chartInstance->c1_d_state, 7, 0U,
      1U, 0U, 1, 2), false);
  }

  sf_mex_setcell(c1_y, 6, c1_h_y);
  c1_d_hoistedGlobal = chartInstance->c1_is_active_c1_RightInvariant_EKF;
  c1_i_y = NULL;
  sf_mex_assign(&c1_i_y, sf_mex_create("y", &c1_d_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c1_y, 7, c1_i_y);
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
  uint32_T c1_uv2[2];
  int32_T c1_i5;
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
  chartInstance->c1_b_method = c1_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("method", c1_u, 2)), "method",
    &chartInstance->c1_b_method_not_empty);
  chartInstance->c1_state = c1_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("state", c1_u, 3)), "state",
    &chartInstance->c1_state_not_empty);
  c1_l_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("state", c1_u,
    4)), "state", &chartInstance->c1_c_state_not_empty, c1_uv0);
  for (c1_i3 = 0; c1_i3 < 625; c1_i3++) {
    chartInstance->c1_c_state[c1_i3] = c1_uv0[c1_i3];
  }

  c1_n_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("state", c1_u,
    5)), "state", &chartInstance->c1_b_state_not_empty, c1_uv1);
  for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
    chartInstance->c1_b_state[c1_i4] = c1_uv1[c1_i4];
  }

  c1_n_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("state", c1_u,
    6)), "state", &chartInstance->c1_d_state_not_empty, c1_uv2);
  for (c1_i5 = 0; c1_i5 < 2; c1_i5++) {
    chartInstance->c1_d_state[c1_i5] = c1_uv2[c1_i5];
  }

  chartInstance->c1_is_active_c1_RightInvariant_EKF = c1_p_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c1_RightInvariant_EKF",
       c1_u, 7)), "is_active_c1_RightInvariant_EKF");
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
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_loop_ub;
  int32_T c1_i10;
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
  for (c1_i6 = 0; c1_i6 < 3; c1_i6++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c1_landmark_true_noise_std)[c1_i6],
                          5U, 1U, 0U, chartInstance->c1_sfEvent, false);
  }

  for (c1_i7 = 0; c1_i7 < 28; c1_i7++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c1_landmark_positions)[c1_i7], 4U, 1U,
                          0U, chartInstance->c1_sfEvent, false);
  }

  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_pulse2, 3U, 1U, 0U,
                        chartInstance->c1_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_pulse1, 2U, 1U, 0U,
                        chartInstance->c1_sfEvent, false);
  for (c1_i8 = 0; c1_i8 < 4; c1_i8++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c1_orientation)[c1_i8], 1U, 1U, 0U,
                          chartInstance->c1_sfEvent, false);
  }

  for (c1_i9 = 0; c1_i9 < 3; c1_i9++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c1_position)[c1_i9], 0U, 1U, 0U,
                          chartInstance->c1_sfEvent, false);
  }

  chartInstance->c1_sfEvent = CALL_EVENT;
  c1_chartstep_c1_RightInvariant_EKF(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_RightInvariant_EKFMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  c1_loop_ub = (*chartInstance->c1_landmarks_sizes)[0] *
    (*chartInstance->c1_landmarks_sizes)[1] - 1;
  for (c1_i10 = 0; c1_i10 <= c1_loop_ub; c1_i10++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c1_landmarks_data)[c1_i10], 6U, 1U,
                          0U, chartInstance->c1_sfEvent, false);
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
  int32_T c1_i11;
  int32_T c1_i12;
  real_T c1_b_position[3];
  real_T c1_b_pulse1;
  real_T c1_b_orientation[4];
  real_T c1_b_pulse2;
  int32_T c1_i13;
  int32_T c1_i14;
  real_T c1_b_landmark_positions[28];
  uint32_T c1_debug_family_var_map[14];
  real_T c1_b_landmark_true_noise_std[3];
  boolean_T c1_enable;
  real_T c1_R[9];
  real_T c1_N;
  real_T c1_indices_data[7];
  int32_T c1_indices_sizes;
  real_T c1_measurement[3];
  real_T c1_nargin = 6.0;
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
  int32_T c1_i15;
  uint32_T c1_b_debug_family_var_map[6];
  real_T c1_q[4];
  static int32_T c1_iv0[4] = { 1, 2, 3, 0 };

  int32_T c1_i16;
  real_T c1_qv[3];
  int32_T c1_i17;
  real_T c1_qw;
  int32_T c1_loop_ub;
  real_T c1_b_nargin = 1.0;
  int32_T c1_i18;
  real_T c1_b_nargout = 1.0;
  real_T c1_b_R[9];
  int32_T c1_i19;
  real_T c1_a;
  real_T c1_b_a;
  real_T c1_c_a;
  real_T c1_e_x;
  real_T c1_d_a;
  real_T c1_c;
  boolean_T c1_p;
  real_T c1_e_a;
  int32_T c1_i20;
  int32_T c1_i21;
  real_T c1_y[9];
  static real_T c1_c_b[9] = { 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0 };

  uint32_T c1_c_debug_family_var_map[4];
  real_T c1_v[3];
  real_T c1_c_nargin = 1.0;
  real_T c1_c_nargout = 1.0;
  real_T c1_Ax[9];
  real_T c1_f_a;
  int32_T c1_i22;
  int32_T c1_i23;
  real_T c1_d_b[9];
  int32_T c1_i24;
  int32_T c1_i25;
  real_T c1_g_a[3];
  int32_T c1_i26;
  real_T c1_e_b[3];
  int32_T c1_i27;
  int32_T c1_i28;
  int32_T c1_i29;
  int32_T c1_i30;
  real_T c1_b_y[9];
  int32_T c1_i31;
  int32_T c1_i32;
  int32_T c1_i33;
  int32_T c1_i34;
  real_T c1_r;
  real_T c1_f_x;
  real_T c1_g_x;
  real_T c1_varargin_2;
  real_T c1_h_x;
  real_T c1_i_x;
  int32_T c1_k;
  int32_T c1_iv1[2];
  int32_T c1_f_b;
  int32_T c1_c_y;
  int32_T c1_i35;
  real_T c1_rp[7];
  int32_T c1_i36;
  int32_T c1_nsel;
  boolean_T c1_selected[7];
  int32_T c1_b_k;
  int32_T c1_idx[7];
  real_T c1_b_r;
  real_T c1_j_x;
  int32_T c1_irow1;
  real_T c1_k_x;
  int32_T c1_i;
  int32_T c1_irow2;
  real_T c1_h_a;
  real_T c1_g_b;
  int32_T c1_i37;
  int32_T c1_i38;
  int32_T c1_i_a;
  real_T c1_j_a;
  int32_T c1_i39;
  int32_T c1_i2;
  real_T c1_h_b;
  int32_T c1_j;
  boolean_T c1_b_p;
  int32_T c1_b_j;
  int32_T c1_pEnd;
  boolean_T c1_c_p;
  int32_T c1_indices;
  int32_T c1_i40;
  boolean_T c1_d_p;
  int32_T c1_i41;
  int32_T c1_i42;
  int32_T c1_e_p;
  int32_T c1_b_q;
  int32_T c1_i43;
  int32_T c1_qEnd;
  real_T c1_d_y[3];
  int32_T c1_c_k;
  int32_T c1_i44;
  int32_T c1_i45;
  int32_T c1_kEnd;
  int32_T c1_i46;
  int32_T c1_b_irow1;
  int32_T c1_varargin_1_sizes[2];
  int32_T c1_d_k;
  int32_T c1_b_irow2;
  real_T c1_k_a;
  int32_T c1_varargin_1;
  real_T c1_i_b;
  int32_T c1_b_varargin_1;
  int32_T c1_iwork[7];
  real_T c1_l_a;
  int32_T c1_b_loop_ub;
  real_T c1_j_b;
  int32_T c1_i47;
  boolean_T c1_f_p;
  boolean_T c1_g_p;
  boolean_T c1_h_p;
  real_T c1_b_varargin_2[4];
  real_T c1_varargin_1_data[40];
  int32_T c1_i48;
  real_T c1_m_a;
  real_T c1_n_a;
  real_T c1_flt;
  boolean_T c1_i_p;
  boolean_T c1_b0;
  boolean_T c1_b1;
  boolean_T c1_b2;
  boolean_T c1_result;
  const mxArray *c1_e_y = NULL;
  static char_T c1_cv0[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  boolean_T c1_b3;
  boolean_T c1_b4;
  boolean_T c1_b_result;
  int32_T c1_c_result;
  int32_T c1_input_sizes[2];
  c1_cell_0_size c1_reshapes_elems_sizes;
  int32_T c1_reshapes;
  int32_T c1_b_reshapes;
  int32_T c1_c_loop_ub;
  int32_T c1_i49;
  int32_T c1_i50;
  c1_cell_0 c1_reshapes_data;
  int32_T c1_b_varargin_1_sizes[2];
  int32_T c1_c_varargin_1;
  int32_T c1_d_varargin_1;
  int32_T c1_d_loop_ub;
  int32_T c1_i51;
  int32_T c1_i52;
  real_T c1_b_varargin_1_data[40];
  int32_T c1_c_landmarks_sizes[2];
  int32_T c1_e_loop_ub;
  int32_T c1_i53;
  int32_T c1_i54;
  int32_T c1_i55;
  real_T c1_c_landmarks_data[44];
  int32_T c1_c_landmarks;
  int32_T c1_d_landmarks;
  int32_T c1_f_loop_ub;
  int32_T c1_i56;
  int32_T c1_x_sizes;
  int32_T c1_g_loop_ub;
  int32_T c1_i57;
  int32_T c1_b_idx;
  real_T c1_x_data[7];
  int32_T c1_c_idx;
  int32_T c1_d_idx;
  int32_T c1_n;
  boolean_T c1_j_p;
  int32_T c1_l_x;
  int32_T c1_m_x;
  const mxArray *c1_f_y = NULL;
  static char_T c1_cv1[25] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'u', 'b',
    's', 'd', 'e', 'l', 'd', 'i', 'm', 'm', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  int32_T c1_e_idx;
  int32_T c1_nxin;
  int32_T c1_nrowx;
  int32_T c1_nxout;
  int32_T c1_e_k;
  const mxArray *c1_g_y = NULL;
  static char_T c1_cv2[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  boolean_T c1_b5;
  boolean_T c1_b6;
  boolean_T c1_b7;
  int32_T c1_i58;
  int32_T c1_n_x;
  int32_T c1_o_x[2];
  int32_T c1_b_x_sizes;
  int32_T c1_h_loop_ub;
  int32_T c1_i59;
  real_T c1_b_x_data[7];
  int32_T c1_i_loop_ub;
  int32_T c1_i60;
  int32_T c1_j_loop_ub;
  int32_T c1_i61;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c1_sfEvent);
  c1_hoistedGlobal = *chartInstance->c1_pulse1;
  c1_b_hoistedGlobal = *chartInstance->c1_pulse2;
  for (c1_i11 = 0; c1_i11 < 3; c1_i11++) {
    c1_b_position[c1_i11] = (*chartInstance->c1_position)[c1_i11];
  }

  for (c1_i12 = 0; c1_i12 < 4; c1_i12++) {
    c1_b_orientation[c1_i12] = (*chartInstance->c1_orientation)[c1_i12];
  }

  c1_b_pulse1 = c1_hoistedGlobal;
  c1_b_pulse2 = c1_b_hoistedGlobal;
  for (c1_i13 = 0; c1_i13 < 28; c1_i13++) {
    c1_b_landmark_positions[c1_i13] = (*chartInstance->c1_landmark_positions)
      [c1_i13];
  }

  for (c1_i14 = 0; c1_i14 < 3; c1_i14++) {
    c1_b_landmark_true_noise_std[c1_i14] =
      (*chartInstance->c1_landmark_true_noise_std)[c1_i14];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 14U, 14U, c1_debug_family_names,
    c1_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_enable, 0U, c1_h_sf_marshallOut,
    c1_f_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_R, 1U, c1_g_sf_marshallOut,
    c1_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c1_N, 2U, c1_d_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_DYN_IMPORTABLE(c1_indices_data, (const int32_T *)
    &c1_indices_sizes, NULL, 0, 3, (void *)c1_f_sf_marshallOut, (void *)
    c1_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_measurement, 4U, c1_b_sf_marshallOut,
    c1_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_nargin, 5U, c1_d_sf_marshallOut,
    c1_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_nargout, 6U, c1_d_sf_marshallOut,
    c1_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_b_position, 7U, c1_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_b_orientation, 8U, c1_e_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c1_b_pulse1, 9U, c1_d_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c1_b_pulse2, 10U, c1_d_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_b_landmark_positions, 11U, c1_c_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c1_b_landmark_true_noise_std, 12U,
    c1_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_DYN_IMPORTABLE(c1_b_landmarks_data, (const int32_T *)
    &c1_b_landmarks_sizes, NULL, 0, 13, (void *)c1_sf_marshallOut, (void *)
    c1_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 4);
  c1_x = c1_b_pulse1;
  c1_b_x = c1_x;
  c1_b = muDoubleScalarIsNaN(c1_b_x);
  if (c1_b) {
    c1_error(chartInstance);
  }

  guard3 = false;
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
      guard3 = true;
    }
  } else {
    guard3 = true;
  }

  if (guard3) {
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
    for (c1_i15 = 0; c1_i15 < 4; c1_i15++) {
      c1_q[c1_i15] = c1_b_orientation[c1_iv0[c1_i15]];
    }

    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 6U, 6U, c1_c_debug_family_names,
      c1_b_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_qv, 0U, c1_b_sf_marshallOut,
      c1_c_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_qw, 1U, c1_d_sf_marshallOut,
      c1_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_b_nargin, 2U, c1_d_sf_marshallOut,
      c1_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_b_nargout, 3U, c1_d_sf_marshallOut,
      c1_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_q, 4U, c1_e_sf_marshallOut,
      c1_g_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_b_R, 5U, c1_g_sf_marshallOut,
      c1_e_sf_marshallIn);
    CV_SCRIPT_FCN(0, 0);
    _SFD_SCRIPT_CALL(0U, chartInstance->c1_sfEvent, 8);
    for (c1_i19 = 0; c1_i19 < 3; c1_i19++) {
      c1_qv[c1_i19] = c1_q[c1_i19];
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
    for (c1_i20 = 0; c1_i20 < 9; c1_i20++) {
      c1_y[c1_i20] = c1_e_a * c1_c_b[c1_i20];
    }

    for (c1_i21 = 0; c1_i21 < 3; c1_i21++) {
      c1_v[c1_i21] = c1_qv[c1_i21];
    }

    _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c1_b_debug_family_names,
      c1_c_debug_family_var_map);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_c_nargin, 0U, c1_d_sf_marshallOut,
      c1_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c1_c_nargout, 1U, c1_d_sf_marshallOut,
      c1_b_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_v, 2U, c1_b_sf_marshallOut,
      c1_c_sf_marshallIn);
    _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c1_Ax, 3U, c1_g_sf_marshallOut,
      c1_e_sf_marshallIn);
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
    for (c1_i22 = 0; c1_i22 < 9; c1_i22++) {
      c1_d_b[c1_i22] = c1_Ax[c1_i22];
    }

    for (c1_i23 = 0; c1_i23 < 9; c1_i23++) {
      c1_d_b[c1_i23] *= c1_f_a;
    }

    for (c1_i24 = 0; c1_i24 < 3; c1_i24++) {
      c1_g_a[c1_i24] = c1_qv[c1_i24];
    }

    for (c1_i25 = 0; c1_i25 < 3; c1_i25++) {
      c1_e_b[c1_i25] = c1_qv[c1_i25];
    }

    for (c1_i26 = 0; c1_i26 < 3; c1_i26++) {
      c1_i28 = 0;
      for (c1_i29 = 0; c1_i29 < 3; c1_i29++) {
        c1_b_y[c1_i28 + c1_i26] = c1_g_a[c1_i26] * c1_e_b[c1_i29];
        c1_i28 += 3;
      }
    }

    for (c1_i27 = 0; c1_i27 < 9; c1_i27++) {
      c1_b_y[c1_i27] *= 2.0;
    }

    for (c1_i30 = 0; c1_i30 < 9; c1_i30++) {
      c1_b_R[c1_i30] = (c1_y[c1_i30] - c1_d_b[c1_i30]) + c1_b_y[c1_i30];
    }

    _SFD_SCRIPT_CALL(0U, chartInstance->c1_sfEvent, -9);
    _SFD_SYMBOL_SCOPE_POP();
    c1_i31 = 0;
    for (c1_i32 = 0; c1_i32 < 3; c1_i32++) {
      c1_i33 = 0;
      for (c1_i34 = 0; c1_i34 < 3; c1_i34++) {
        c1_R[c1_i34 + c1_i31] = c1_b_R[c1_i33 + c1_i32];
        c1_i33 += 3;
      }

      c1_i31 += 3;
    }

    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 20);
    c1_N = 7.0;
    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 21);
    c1_r = c1_rand(chartInstance);
    c1_f_x = c1_r * 7.0;
    c1_g_x = c1_f_x;
    c1_g_x = muDoubleScalarFloor(c1_g_x);
    c1_r = 1.0 + c1_g_x;
    c1_varargin_2 = c1_r;
    c1_h_x = c1_varargin_2;
    c1_i_x = c1_h_x;
    c1_i_x = muDoubleScalarFloor(c1_i_x);
    c1_k = (int32_T)c1_i_x;
    c1_iv1[0] = c1_k;
    c1_iv1[1] = 1;
    c1_indices_sizes = c1_iv1[0];
    c1_f_b = c1_k;
    c1_c_y = c1_f_b << 2;
    if (c1_c_y > 7) {
      c1_b_rand(chartInstance, c1_rp);
      for (c1_i36 = 0; c1_i36 < 7; c1_i36++) {
        c1_idx[c1_i36] = 0;
      }

      for (c1_b_k = 1; c1_b_k < 7; c1_b_k += 2) {
        c1_irow1 = c1_b_k - 1;
        c1_irow2 = c1_b_k;
        c1_h_a = c1_rp[c1_irow1];
        c1_g_b = c1_rp[c1_irow2];
        c1_j_a = c1_h_a;
        c1_h_b = c1_g_b;
        c1_b_p = (c1_j_a <= c1_h_b);
        c1_c_p = c1_b_p;
        c1_d_p = c1_c_p;
        if (c1_d_p) {
          c1_idx[c1_b_k - 1] = c1_b_k;
          c1_idx[c1_b_k] = c1_b_k + 1;
        } else {
          c1_idx[c1_b_k - 1] = c1_b_k + 1;
          c1_idx[c1_b_k] = c1_b_k;
        }
      }

      c1_idx[6] = 7;
      c1_i = 2;
      while (c1_i < 7) {
        c1_i_a = c1_i;
        c1_i2 = c1_i_a << 1;
        c1_j = 1;
        for (c1_pEnd = 1 + c1_i; c1_pEnd < 8; c1_pEnd = c1_qEnd + c1_i) {
          c1_e_p = c1_j - 1;
          c1_b_q = c1_pEnd - 1;
          c1_qEnd = c1_j + c1_i2;
          if (c1_qEnd > 8) {
            c1_qEnd = 8;
          }

          c1_c_k = 0;
          c1_kEnd = c1_qEnd - c1_j;
          while (c1_c_k + 1 <= c1_kEnd) {
            c1_b_irow1 = c1_idx[c1_e_p] - 1;
            c1_b_irow2 = c1_idx[c1_b_q] - 1;
            c1_k_a = c1_rp[c1_b_irow1];
            c1_i_b = c1_rp[c1_b_irow2];
            c1_l_a = c1_k_a;
            c1_j_b = c1_i_b;
            c1_f_p = (c1_l_a <= c1_j_b);
            c1_g_p = c1_f_p;
            c1_h_p = c1_g_p;
            if (c1_h_p) {
              c1_iwork[c1_c_k] = c1_idx[c1_e_p];
              c1_e_p++;
              if (c1_e_p + 1 == c1_pEnd) {
                while (c1_b_q + 1 < c1_qEnd) {
                  c1_c_k++;
                  c1_iwork[c1_c_k] = c1_idx[c1_b_q];
                  c1_b_q++;
                }
              }
            } else {
              c1_iwork[c1_c_k] = c1_idx[c1_b_q];
              c1_b_q++;
              if (c1_b_q + 1 == c1_qEnd) {
                while (c1_e_p + 1 < c1_pEnd) {
                  c1_c_k++;
                  c1_iwork[c1_c_k] = c1_idx[c1_e_p];
                  c1_e_p++;
                }
              }
            }

            c1_c_k++;
          }

          c1_e_p = c1_j;
          for (c1_d_k = 0; c1_d_k + 1 <= c1_kEnd; c1_d_k++) {
            c1_idx[(c1_e_p + c1_d_k) - 1] = c1_iwork[c1_d_k];
          }

          c1_j = c1_qEnd;
        }

        c1_i = c1_i2;
      }

      for (c1_i38 = 0; c1_i38 < 7; c1_i38++) {
        c1_rp[c1_i38] = (real_T)c1_idx[c1_i38];
      }

      for (c1_b_j = 1; c1_b_j <= c1_k; c1_b_j++) {
        c1_indices_data[sf_eml_array_bounds_check(sfGlobalDebugInstanceStruct,
          chartInstance->S, 1U, 560, 22, MAX_uint32_T, c1_b_j, 1,
          c1_indices_sizes) - 1] = c1_rp[c1_b_j - 1];
      }
    } else {
      for (c1_i35 = 0; c1_i35 < 7; c1_i35++) {
        c1_selected[c1_i35] = false;
      }

      c1_nsel = 0;
      while (c1_nsel < c1_k) {
        c1_b_r = c1_rand(chartInstance);
        c1_j_x = c1_b_r * 7.0;
        c1_k_x = c1_j_x;
        c1_k_x = muDoubleScalarFloor(c1_k_x);
        c1_b_r = 1.0 + c1_k_x;
        if (!c1_selected[(int32_T)c1_b_r - 1]) {
          c1_selected[(int32_T)c1_b_r - 1] = true;
          c1_nsel++;
          c1_indices_data[sf_eml_array_bounds_check(sfGlobalDebugInstanceStruct,
            chartInstance->S, 1U, 560, 22, MAX_uint32_T, c1_nsel, 1,
            c1_indices_sizes) - 1] = c1_b_r;
        }
      }
    }

    _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 22);
    while (CV_EML_WHILE(0, 1, 0, !(c1_indices_sizes == 0))) {
      _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 23);
      c1_i37 = 0;
      for (c1_i39 = 0; c1_i39 < 3; c1_i39++) {
        c1_i40 = 0;
        for (c1_i42 = 0; c1_i42 < 3; c1_i42++) {
          c1_y[c1_i42 + c1_i37] = c1_R[c1_i40 + c1_i39];
          c1_i40 += 3;
        }

        c1_i37 += 3;
      }

      c1_indices = sf_eml_array_bounds_check(sfGlobalDebugInstanceStruct,
        chartInstance->S, 1U, 662, 12, MAX_uint32_T, (int32_T)
        c1_indices_data[sf_eml_array_bounds_check(sfGlobalDebugInstanceStruct,
        chartInstance->S, 1U, 662, 12, MAX_uint32_T, c1_indices_sizes, 1,
        c1_indices_sizes) - 1], 1, 7) - 1;
      for (c1_i41 = 0; c1_i41 < 3; c1_i41++) {
        c1_g_a[c1_i41] = c1_b_landmark_positions[(c1_i41 + (c1_indices << 2)) +
          1] - c1_b_position[c1_i41];
      }

      for (c1_i43 = 0; c1_i43 < 3; c1_i43++) {
        c1_d_y[c1_i43] = 0.0;
        c1_i45 = 0;
        for (c1_i46 = 0; c1_i46 < 3; c1_i46++) {
          c1_d_y[c1_i43] += c1_y[c1_i45 + c1_i43] * c1_g_a[c1_i46];
          c1_i45 += 3;
        }
      }

      c1_randn(chartInstance, c1_g_a);
      for (c1_i44 = 0; c1_i44 < 3; c1_i44++) {
        c1_measurement[c1_i44] = c1_d_y[c1_i44] +
          c1_b_landmark_true_noise_std[c1_i44] * c1_g_a[c1_i44];
      }

      _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 24);
      c1_varargin_1_sizes[0] = c1_b_landmarks_sizes[0];
      c1_varargin_1_sizes[1] = c1_b_landmarks_sizes[1];
      c1_varargin_1 = c1_varargin_1_sizes[0];
      c1_b_varargin_1 = c1_varargin_1_sizes[1];
      c1_b_loop_ub = c1_b_landmarks_sizes[0] * c1_b_landmarks_sizes[1] - 1;
      for (c1_i47 = 0; c1_i47 <= c1_b_loop_ub; c1_i47++) {
        c1_varargin_1_data[c1_i47] = c1_b_landmarks_data[c1_i47];
      }

      c1_b_varargin_2[0] = c1_b_landmark_positions[(sf_eml_array_bounds_check
        (sfGlobalDebugInstanceStruct, chartInstance->S, 1U, 788, 12,
         MAX_uint32_T, (int32_T)c1_indices_data[sf_eml_array_bounds_check
         (sfGlobalDebugInstanceStruct, chartInstance->S, 1U, 788, 12,
          MAX_uint32_T, c1_indices_sizes, 1, c1_indices_sizes) - 1], 1, 7) - 1) <<
        2];
      for (c1_i48 = 0; c1_i48 < 3; c1_i48++) {
        c1_b_varargin_2[c1_i48 + 1] = c1_measurement[c1_i48];
      }

      c1_m_a = (real_T)c1_varargin_1_sizes[0];
      c1_n_a = c1_m_a;
      c1_flt = c1_n_a;
      c1_i_p = (4.0 == c1_flt);
      guard2 = false;
      if (c1_i_p) {
        guard2 = true;
      } else {
        c1_b0 = (c1_varargin_1_sizes[0] == 0);
        c1_b1 = (c1_varargin_1_sizes[1] == 0);
        c1_result = (c1_b0 || c1_b1);
        if (c1_result) {
          guard2 = true;
        } else {
          c1_b2 = false;
        }
      }

      if (guard2) {
        c1_b2 = true;
      }

      if (c1_b2) {
      } else {
        c1_e_y = NULL;
        sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_cv0, 10, 0U, 1U, 0U, 2, 1,
          39), false);
        sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                          sf_mex_call_debug(sfGlobalDebugInstanceStruct,
          "message", 1U, 1U, 14, c1_e_y));
      }

      c1_b3 = (c1_varargin_1_sizes[0] == 0);
      c1_b4 = (c1_varargin_1_sizes[1] == 0);
      c1_b_result = (c1_b3 || c1_b4);
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
      c1_c_loop_ub = (c1_input_sizes[1] << 2) - 1;
      for (c1_i49 = 0; c1_i49 <= c1_c_loop_ub; c1_i49++) {
        c1_reshapes_data.f1[c1_i49] = c1_varargin_1_data[c1_i49];
      }

      for (c1_i50 = 0; c1_i50 < 4; c1_i50++) {
        c1_reshapes_data.f2[c1_i50] = c1_b_varargin_2[c1_i50];
      }

      c1_b_varargin_1_sizes[0] = 4;
      c1_b_varargin_1_sizes[1] = c1_reshapes_elems_sizes.f1[1];
      c1_c_varargin_1 = c1_b_varargin_1_sizes[0];
      c1_d_varargin_1 = c1_b_varargin_1_sizes[1];
      c1_d_loop_ub = c1_reshapes_elems_sizes.f1[0] * c1_reshapes_elems_sizes.f1
        [1] - 1;
      for (c1_i51 = 0; c1_i51 <= c1_d_loop_ub; c1_i51++) {
        c1_b_varargin_1_data[c1_i51] = c1_reshapes_data.f1[c1_i51];
      }

      for (c1_i52 = 0; c1_i52 < 4; c1_i52++) {
        c1_b_varargin_2[c1_i52] = c1_reshapes_data.f2[c1_i52];
      }

      c1_c_landmarks_sizes[0] = 4;
      c1_c_landmarks_sizes[1] = c1_b_varargin_1_sizes[1] + 1;
      c1_e_loop_ub = c1_b_varargin_1_sizes[1] - 1;
      for (c1_i53 = 0; c1_i53 <= c1_e_loop_ub; c1_i53++) {
        for (c1_i55 = 0; c1_i55 < 4; c1_i55++) {
          c1_c_landmarks_data[c1_i55 + c1_c_landmarks_sizes[0] * c1_i53] =
            c1_b_varargin_1_data[c1_i55 + c1_b_varargin_1_sizes[0] * c1_i53];
        }
      }

      for (c1_i54 = 0; c1_i54 < 4; c1_i54++) {
        c1_c_landmarks_data[c1_i54 + c1_c_landmarks_sizes[0] *
          c1_b_varargin_1_sizes[1]] = c1_b_varargin_2[c1_i54];
      }

      _SFD_DIM_SIZE_GEQ_CHECK(10, c1_c_landmarks_sizes[1], 2);
      c1_b_landmarks_sizes[0] = 4;
      c1_b_landmarks_sizes[1] = c1_c_landmarks_sizes[1];
      c1_c_landmarks = c1_b_landmarks_sizes[0];
      c1_d_landmarks = c1_b_landmarks_sizes[1];
      c1_f_loop_ub = c1_c_landmarks_sizes[0] * c1_c_landmarks_sizes[1] - 1;
      for (c1_i56 = 0; c1_i56 <= c1_f_loop_ub; c1_i56++) {
        c1_b_landmarks_data[c1_i56] = c1_c_landmarks_data[c1_i56];
      }

      _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 25);
      c1_x_sizes = c1_indices_sizes;
      c1_g_loop_ub = c1_indices_sizes - 1;
      for (c1_i57 = 0; c1_i57 <= c1_g_loop_ub; c1_i57++) {
        c1_x_data[c1_i57] = c1_indices_data[c1_i57];
      }

      c1_b_idx = c1_indices_sizes;
      c1_c_idx = c1_b_idx;
      c1_d_idx = c1_c_idx;
      c1_n = c1_x_sizes;
      c1_j_p = true;
      guard1 = false;
      if (c1_d_idx > c1_n) {
        guard1 = true;
      } else {
        c1_l_x = c1_d_idx;
        c1_m_x = c1_l_x;
        if (c1_d_idx != c1_m_x) {
          guard1 = true;
        }
      }

      if (guard1) {
        c1_j_p = false;
      }

      if (c1_j_p) {
      } else {
        c1_f_y = NULL;
        sf_mex_assign(&c1_f_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1,
          25), false);
        sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                          sf_mex_call_debug(sfGlobalDebugInstanceStruct,
          "message", 1U, 1U, 14, c1_f_y));
      }

      c1_e_idx = c1_b_idx;
      c1_nxin = c1_x_sizes - 1;
      c1_nrowx = c1_x_sizes;
      c1_nxout = c1_nxin;
      for (c1_e_k = c1_e_idx; c1_e_k <= c1_nxout; c1_e_k++) {
        c1_x_data[c1_e_k - 1] = c1_x_data[c1_e_k];
      }

      if (c1_nxout <= c1_nrowx) {
      } else {
        c1_g_y = NULL;
        sf_mex_assign(&c1_g_y, sf_mex_create("y", c1_cv2, 10, 0U, 1U, 0U, 2, 1,
          30), false);
        sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                          sf_mex_call_debug(sfGlobalDebugInstanceStruct,
          "message", 1U, 1U, 14, c1_g_y));
      }

      c1_b5 = (1 > c1_nxout);
      c1_b6 = c1_b5;
      c1_b7 = c1_b6;
      if (c1_b7) {
        c1_i58 = 0;
      } else {
        c1_i58 = c1_nxout;
      }

      c1_n_x = c1_x_sizes;
      c1_o_x[0] = c1_n_x;
      c1_o_x[1] = 1;
      c1_b_x_sizes = c1_i58;
      c1_h_loop_ub = c1_i58 - 1;
      for (c1_i59 = 0; c1_i59 <= c1_h_loop_ub; c1_i59++) {
        c1_b_x_data[c1_i59] = c1_x_data[c1_i59];
      }

      c1_x_sizes = c1_b_x_sizes;
      c1_i_loop_ub = c1_b_x_sizes - 1;
      for (c1_i60 = 0; c1_i60 <= c1_i_loop_ub; c1_i60++) {
        c1_x_data[c1_i60] = c1_b_x_data[c1_i60];
      }

      c1_indices_sizes = c1_x_sizes;
      c1_j_loop_ub = c1_x_sizes - 1;
      for (c1_i61 = 0; c1_i61 <= c1_j_loop_ub; c1_i61++) {
        c1_indices_data[c1_i61] = c1_x_data[c1_i61];
      }

      _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, 22);
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c1_sfEvent, -25);
  _SFD_SYMBOL_SCOPE_POP();
  ssSetCurrentOutputPortDimensions_wrapper(chartInstance->S, 1, 0,
    c1_b_landmarks_sizes[0]);
  ssSetCurrentOutputPortDimensions_wrapper(chartInstance->S, 1, 1,
    c1_b_landmarks_sizes[1]);
  c1_i16 = (*chartInstance->c1_landmarks_sizes)[0];
  c1_i17 = (*chartInstance->c1_landmarks_sizes)[1];
  c1_loop_ub = c1_b_landmarks_sizes[0] * c1_b_landmarks_sizes[1] - 1;
  for (c1_i18 = 0; c1_i18 <= c1_loop_ub; c1_i18++) {
    (*chartInstance->c1_landmarks_data)[c1_i18] = c1_b_landmarks_data[c1_i18];
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
  int32_T c1_i62;
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
  for (c1_i62 = 0; c1_i62 <= c1_loop_ub; c1_i62++) {
    c1_u_data[c1_i62] = c1_inData_data[c1_i62];
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
  int32_T c1_i63;
  int32_T c1_i64;
  uint32_T c1_uv3[2];
  real_T c1_tmp_data[40];
  boolean_T c1_bv0[2];
  int32_T c1_tmp_sizes[2];
  int32_T c1_y;
  int32_T c1_b_y;
  int32_T c1_loop_ub;
  int32_T c1_i65;
  (void)chartInstance;
  for (c1_i63 = 0; c1_i63 < 2; c1_i63++) {
    c1_uv3[c1_i63] = 4U + 6U * (uint32_T)c1_i63;
  }

  for (c1_i64 = 0; c1_i64 < 2; c1_i64++) {
    c1_bv0[c1_i64] = true;
  }

  sf_mex_import_vs(c1_parentId, sf_mex_dup(c1_u), c1_tmp_data, 1, 0, 0U, 1, 0U,
                   2, c1_bv0, c1_uv3, c1_tmp_sizes);
  c1_y_sizes[0] = c1_tmp_sizes[0];
  c1_y_sizes[1] = c1_tmp_sizes[1];
  c1_y = c1_y_sizes[0];
  c1_b_y = c1_y_sizes[1];
  c1_loop_ub = c1_tmp_sizes[0] * c1_tmp_sizes[1] - 1;
  for (c1_i65 = 0; c1_i65 <= c1_loop_ub; c1_i65++) {
    c1_y_data[c1_i65] = c1_tmp_data[c1_i65];
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
  int32_T c1_i66;
  int32_T c1_b_loop_ub;
  int32_T c1_i67;
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
  for (c1_i66 = 0; c1_i66 <= c1_loop_ub; c1_i66++) {
    c1_b_loop_ub = c1_y_sizes[0] - 1;
    for (c1_i67 = 0; c1_i67 <= c1_b_loop_ub; c1_i67++) {
      c1_outData_data[c1_i67 + c1_outData_sizes[0] * c1_i66] = c1_y_data[c1_i67
        + c1_y_sizes[0] * c1_i66];
    }
  }

  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_b_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData;
  int32_T c1_i68;
  const mxArray *c1_y = NULL;
  real_T c1_u[3];
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_mxArrayOutData = NULL;
  for (c1_i68 = 0; c1_i68 < 3; c1_i68++) {
    c1_u[c1_i68] = (*(real_T (*)[3])c1_inData)[c1_i68];
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 1, 3), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static const mxArray *c1_c_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData;
  int32_T c1_i69;
  int32_T c1_i70;
  const mxArray *c1_y = NULL;
  int32_T c1_i71;
  real_T c1_u[28];
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_mxArrayOutData = NULL;
  c1_i69 = 0;
  for (c1_i70 = 0; c1_i70 < 7; c1_i70++) {
    for (c1_i71 = 0; c1_i71 < 4; c1_i71++) {
      c1_u[c1_i71 + c1_i69] = (*(real_T (*)[28])c1_inData)[c1_i71 + c1_i69];
    }

    c1_i69 += 4;
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 2, 4, 7), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static const mxArray *c1_d_sf_marshallOut(void *chartInstanceVoid, void
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

static const mxArray *c1_e_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData;
  int32_T c1_i72;
  const mxArray *c1_y = NULL;
  real_T c1_u[4];
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_mxArrayOutData = NULL;
  for (c1_i72 = 0; c1_i72 < 4; c1_i72++) {
    c1_u[c1_i72] = (*(real_T (*)[4])c1_inData)[c1_i72];
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 1, 4), false);
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

static void c1_d_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y[3])
{
  real_T c1_dv0[3];
  int32_T c1_i73;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_dv0, 1, 0, 0U, 1, 0U, 1, 3);
  for (c1_i73 = 0; c1_i73 < 3; c1_i73++) {
    c1_y[c1_i73] = c1_dv0[c1_i73];
  }

  sf_mex_destroy(&c1_u);
}

static void c1_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_measurement;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y[3];
  int32_T c1_i74;
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_measurement = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_measurement), &c1_thisId,
                        c1_y);
  sf_mex_destroy(&c1_measurement);
  for (c1_i74 = 0; c1_i74 < 3; c1_i74++) {
    (*(real_T (*)[3])c1_outData)[c1_i74] = c1_y[c1_i74];
  }

  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_f_sf_marshallOut(void *chartInstanceVoid, real_T
  c1_inData_data[], int32_T *c1_inData_sizes)
{
  const mxArray *c1_mxArrayOutData;
  int32_T c1_u_sizes;
  int32_T c1_loop_ub;
  int32_T c1_i75;
  const mxArray *c1_y = NULL;
  real_T c1_u_data[7];
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_mxArrayOutData = NULL;
  c1_u_sizes = *c1_inData_sizes;
  c1_loop_ub = *c1_inData_sizes - 1;
  for (c1_i75 = 0; c1_i75 <= c1_loop_ub; c1_i75++) {
    c1_u_data[c1_i75] = c1_inData_data[c1_i75];
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u_data, 0, 0U, 1U, 0U, 1,
    c1_u_sizes), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static void c1_e_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y_data[], int32_T *c1_y_sizes)
{
  uint32_T c1_uv4[1];
  boolean_T c1_bv1[1];
  real_T c1_tmp_data[7];
  int32_T c1_tmp_sizes;
  int32_T c1_loop_ub;
  int32_T c1_i76;
  (void)chartInstance;
  c1_uv4[0] = 7U;
  c1_bv1[0] = true;
  sf_mex_import_vs(c1_parentId, sf_mex_dup(c1_u), c1_tmp_data, 1, 0, 0U, 1, 0U,
                   1, c1_bv1, c1_uv4, &c1_tmp_sizes);
  *c1_y_sizes = c1_tmp_sizes;
  c1_loop_ub = c1_tmp_sizes - 1;
  for (c1_i76 = 0; c1_i76 <= c1_loop_ub; c1_i76++) {
    c1_y_data[c1_i76] = c1_tmp_data[c1_i76];
  }

  sf_mex_destroy(&c1_u);
}

static void c1_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, real_T c1_outData_data[], int32_T
  *c1_outData_sizes)
{
  const mxArray *c1_indices;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y_data[7];
  int32_T c1_y_sizes;
  int32_T c1_loop_ub;
  int32_T c1_i77;
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_indices = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_indices), &c1_thisId,
                        c1_y_data, &c1_y_sizes);
  sf_mex_destroy(&c1_indices);
  *c1_outData_sizes = c1_y_sizes;
  c1_loop_ub = c1_y_sizes - 1;
  for (c1_i77 = 0; c1_i77 <= c1_loop_ub; c1_i77++) {
    c1_outData_data[c1_i77] = c1_y_data[c1_i77];
  }

  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_g_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData;
  int32_T c1_i78;
  int32_T c1_i79;
  const mxArray *c1_y = NULL;
  int32_T c1_i80;
  real_T c1_u[9];
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_mxArrayOutData = NULL;
  c1_i78 = 0;
  for (c1_i79 = 0; c1_i79 < 3; c1_i79++) {
    for (c1_i80 = 0; c1_i80 < 3; c1_i80++) {
      c1_u[c1_i80 + c1_i78] = (*(real_T (*)[9])c1_inData)[c1_i80 + c1_i78];
    }

    c1_i78 += 3;
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 2, 3, 3), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static void c1_f_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y[9])
{
  real_T c1_dv1[9];
  int32_T c1_i81;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_dv1, 1, 0, 0U, 1, 0U, 2, 3, 3);
  for (c1_i81 = 0; c1_i81 < 9; c1_i81++) {
    c1_y[c1_i81] = c1_dv1[c1_i81];
  }

  sf_mex_destroy(&c1_u);
}

static void c1_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_R;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y[9];
  int32_T c1_i82;
  int32_T c1_i83;
  int32_T c1_i84;
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_R = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_R), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_R);
  c1_i82 = 0;
  for (c1_i83 = 0; c1_i83 < 3; c1_i83++) {
    for (c1_i84 = 0; c1_i84 < 3; c1_i84++) {
      (*(real_T (*)[9])c1_outData)[c1_i84 + c1_i82] = c1_y[c1_i84 + c1_i82];
    }

    c1_i82 += 3;
  }

  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_h_sf_marshallOut(void *chartInstanceVoid, void
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

static boolean_T c1_g_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  boolean_T c1_y;
  boolean_T c1_b8;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b8, 1, 11, 0U, 0, 0U, 0);
  c1_y = c1_b8;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
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
  c1_y = c1_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_enable), &c1_thisId);
  sf_mex_destroy(&c1_enable);
  *(boolean_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static void c1_h_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y[4])
{
  real_T c1_dv2[4];
  int32_T c1_i85;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_dv2, 1, 0, 0U, 1, 0U, 1, 4);
  for (c1_i85 = 0; c1_i85 < 4; c1_i85++) {
    c1_y[c1_i85] = c1_dv2[c1_i85];
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
  int32_T c1_i86;
  SFc1_RightInvariant_EKFInstanceStruct *chartInstance;
  chartInstance = (SFc1_RightInvariant_EKFInstanceStruct *)chartInstanceVoid;
  c1_q = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_q), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_q);
  for (c1_i86 = 0; c1_i86 < 4; c1_i86++) {
    (*(real_T (*)[4])c1_outData)[c1_i86] = c1_y[c1_i86];
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
  static char_T c1_cv3[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
    'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  (void)chartInstance;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_cv3, 10, 0U, 1U, 0U, 2, 1, 19),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message", 1U,
    1U, 14, c1_y));
}

static void c1_b_error(SFc1_RightInvariant_EKFInstanceStruct *chartInstance)
{
  const mxArray *c1_y = NULL;
  static char_T c1_cv4[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'p', 'o', 'w', 'e', 'r', '_', 'd', 'o', 'm', 'a', 'i',
    'n', 'E', 'r', 'r', 'o', 'r' };

  (void)chartInstance;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_cv4, 10, 0U, 1U, 0U, 2, 1, 31),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message", 1U,
    1U, 14, c1_y));
}

static real_T c1_rand(SFc1_RightInvariant_EKFInstanceStruct *chartInstance)
{
  int32_T c1_i87;
  real_T c1_d1;
  uint32_T c1_b_r;
  int32_T c1_mti;
  real_T c1_b_mti;
  real_T c1_d2;
  uint32_T c1_u0;
  if (!chartInstance->c1_method_not_empty) {
    chartInstance->c1_method = 7U;
    chartInstance->c1_method_not_empty = true;
  }

  if (!chartInstance->c1_c_state_not_empty) {
    for (c1_i87 = 0; c1_i87 < 625; c1_i87++) {
      chartInstance->c1_c_state[c1_i87] = 0U;
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

  c1_d1 = c1_c_eml_rand_mt19937ar(chartInstance, chartInstance->c1_c_state);
  return c1_d1;
}

static void c1_eml_rand_mt19937ar(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, uint32_T c1_e_state[625], uint32_T c1_f_state[625], real_T
  *c1_r)
{
  int32_T c1_i88;
  for (c1_i88 = 0; c1_i88 < 625; c1_i88++) {
    c1_f_state[c1_i88] = c1_e_state[c1_i88];
  }

  *c1_r = c1_c_eml_rand_mt19937ar(chartInstance, c1_f_state);
}

static void c1_genrand_uint32_vector(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, uint32_T c1_mt[625], uint32_T c1_b_mt[625], uint32_T c1_u[2])
{
  int32_T c1_i89;
  for (c1_i89 = 0; c1_i89 < 625; c1_i89++) {
    c1_b_mt[c1_i89] = c1_mt[c1_i89];
  }

  c1_b_genrand_uint32_vector(chartInstance, c1_b_mt, c1_u);
}

static boolean_T c1_is_valid_state(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, uint32_T c1_mt[625])
{
  boolean_T c1_isvalid;
  boolean_T c1_b_isvalid;
  int32_T c1_k;
  int32_T c1_a;
  boolean_T exitg1;
  (void)chartInstance;
  if (((real_T)c1_mt[624] >= 1.0) && ((real_T)c1_mt[624] < 625.0)) {
    c1_b_isvalid = true;
  } else {
    c1_b_isvalid = false;
  }

  c1_isvalid = c1_b_isvalid;
  if (c1_b_isvalid) {
    c1_isvalid = false;
    c1_k = 0;
    exitg1 = false;
    while ((!exitg1) && (c1_k + 1 < 625)) {
      if ((real_T)c1_mt[c1_k] == 0.0) {
        c1_a = c1_k + 1;
        c1_k = c1_a;
      } else {
        c1_isvalid = true;
        exitg1 = true;
      }
    }
  }

  return c1_isvalid;
}

static void c1_c_error(SFc1_RightInvariant_EKFInstanceStruct *chartInstance)
{
  const mxArray *c1_y = NULL;
  static char_T c1_cv5[37] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'd', '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'w', 'i', 's', 't', 'e', 'r', 'S', 't', 'a', 't', 'e' };

  (void)chartInstance;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_cv5, 10, 0U, 1U, 0U, 2, 1, 37),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message", 1U,
    1U, 14, c1_y));
}

static void c1_b_rand(SFc1_RightInvariant_EKFInstanceStruct *chartInstance,
                      real_T c1_r[7])
{
  int32_T c1_i90;
  int32_T c1_k;
  uint32_T c1_b_r;
  real_T c1_b_k;
  real_T c1_d3;
  int32_T c1_mti;
  real_T c1_b_mti;
  real_T c1_d4;
  uint32_T c1_u1;
  if (!chartInstance->c1_method_not_empty) {
    chartInstance->c1_method = 7U;
    chartInstance->c1_method_not_empty = true;
  }

  if (!chartInstance->c1_c_state_not_empty) {
    for (c1_i90 = 0; c1_i90 < 625; c1_i90++) {
      chartInstance->c1_c_state[c1_i90] = 0U;
    }

    c1_b_r = 5489U;
    chartInstance->c1_c_state[0] = 5489U;
    for (c1_mti = 0; c1_mti < 623; c1_mti++) {
      c1_b_mti = 2.0 + (real_T)c1_mti;
      c1_d4 = muDoubleScalarRound(c1_b_mti - 1.0);
      if (c1_d4 < 4.294967296E+9) {
        if (c1_d4 >= 0.0) {
          c1_u1 = (uint32_T)c1_d4;
        } else {
          c1_u1 = 0U;
        }
      } else if (c1_d4 >= 4.294967296E+9) {
        c1_u1 = MAX_uint32_T;
      } else {
        c1_u1 = 0U;
      }

      c1_b_r = (c1_b_r ^ c1_b_r >> 30U) * 1812433253U + c1_u1;
      chartInstance->c1_c_state[(int32_T)c1_b_mti - 1] = c1_b_r;
    }

    chartInstance->c1_c_state[624] = 624U;
    chartInstance->c1_c_state_not_empty = true;
  }

  for (c1_k = 0; c1_k < 7; c1_k++) {
    c1_b_k = 1.0 + (real_T)c1_k;
    c1_d3 = c1_c_eml_rand_mt19937ar(chartInstance, chartInstance->c1_c_state);
    c1_r[(int32_T)c1_b_k - 1] = c1_d3;
  }
}

static void c1_randn(SFc1_RightInvariant_EKFInstanceStruct *chartInstance,
                     real_T c1_r[3])
{
  int32_T c1_i91;
  int32_T c1_i92;
  int32_T c1_k;
  uint32_T c1_b_r;
  real_T c1_b_k;
  real_T c1_d5;
  int32_T c1_mti;
  real_T c1_b_mti;
  real_T c1_d6;
  uint32_T c1_u2;
  if (!chartInstance->c1_b_method_not_empty) {
    chartInstance->c1_b_method = 0U;
    chartInstance->c1_b_method_not_empty = true;
    for (c1_i91 = 0; c1_i91 < 2; c1_i91++) {
      chartInstance->c1_d_state[c1_i91] = 362436069U + (uint32_T)(-362436069 *
        c1_i91);
    }

    chartInstance->c1_d_state[1] = 521288629U;
    chartInstance->c1_d_state_not_empty = true;
  }

  if (!chartInstance->c1_method_not_empty) {
    chartInstance->c1_method = 7U;
    chartInstance->c1_method_not_empty = true;
  }

  if (!chartInstance->c1_c_state_not_empty) {
    for (c1_i92 = 0; c1_i92 < 625; c1_i92++) {
      chartInstance->c1_c_state[c1_i92] = 0U;
    }

    c1_b_r = 5489U;
    chartInstance->c1_c_state[0] = 5489U;
    for (c1_mti = 0; c1_mti < 623; c1_mti++) {
      c1_b_mti = 2.0 + (real_T)c1_mti;
      c1_d6 = muDoubleScalarRound(c1_b_mti - 1.0);
      if (c1_d6 < 4.294967296E+9) {
        if (c1_d6 >= 0.0) {
          c1_u2 = (uint32_T)c1_d6;
        } else {
          c1_u2 = 0U;
        }
      } else if (c1_d6 >= 4.294967296E+9) {
        c1_u2 = MAX_uint32_T;
      } else {
        c1_u2 = 0U;
      }

      c1_b_r = (c1_b_r ^ c1_b_r >> 30U) * 1812433253U + c1_u2;
      chartInstance->c1_c_state[(int32_T)c1_b_mti - 1] = c1_b_r;
    }

    chartInstance->c1_c_state[624] = 624U;
    chartInstance->c1_c_state_not_empty = true;
  }

  for (c1_k = 0; c1_k < 3; c1_k++) {
    c1_b_k = 1.0 + (real_T)c1_k;
    c1_d5 = c1_d_eml_rand_mt19937ar(chartInstance, chartInstance->c1_c_state);
    c1_r[(int32_T)c1_b_k - 1] = c1_d5;
  }
}

static void c1_b_eml_rand_mt19937ar(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, uint32_T c1_e_state[625], uint32_T c1_f_state[625], real_T
  *c1_r)
{
  int32_T c1_i93;
  for (c1_i93 = 0; c1_i93 < 625; c1_i93++) {
    c1_f_state[c1_i93] = c1_e_state[c1_i93];
  }

  *c1_r = c1_d_eml_rand_mt19937ar(chartInstance, c1_f_state);
}

static void c1_genrandu(SFc1_RightInvariant_EKFInstanceStruct *chartInstance,
  uint32_T c1_mt[625], uint32_T c1_b_mt[625], real_T *c1_r)
{
  int32_T c1_i94;
  for (c1_i94 = 0; c1_i94 < 625; c1_i94++) {
    c1_b_mt[c1_i94] = c1_mt[c1_i94];
  }

  *c1_r = c1_b_genrandu(chartInstance, c1_b_mt);
}

static const mxArray *c1_i_sf_marshallOut(void *chartInstanceVoid, void
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
  int32_T c1_i95;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_i95, 1, 6, 0U, 0, 0U, 0);
  c1_y = c1_i95;
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
  *chartInstance, const mxArray *c1_c_method, const char_T *c1_identifier,
  boolean_T *c1_svPtr)
{
  uint32_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_k_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_c_method),
    &c1_thisId, c1_svPtr);
  sf_mex_destroy(&c1_c_method);
  return c1_y;
}

static uint32_T c1_k_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr)
{
  uint32_T c1_y;
  uint32_T c1_u3;
  (void)chartInstance;
  if (mxIsEmpty(c1_u)) {
    *c1_svPtr = false;
  } else {
    *c1_svPtr = true;
    sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_u3, 1, 7, 0U, 0, 0U, 0);
    c1_y = c1_u3;
  }

  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_l_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_e_state, const char_T *c1_identifier,
  boolean_T *c1_svPtr, uint32_T c1_y[625])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_m_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_e_state), &c1_thisId,
                        c1_svPtr, c1_y);
  sf_mex_destroy(&c1_e_state);
}

static void c1_m_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr, uint32_T c1_y[625])
{
  uint32_T c1_uv5[625];
  int32_T c1_i96;
  (void)chartInstance;
  if (mxIsEmpty(c1_u)) {
    *c1_svPtr = false;
  } else {
    *c1_svPtr = true;
    sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_uv5, 1, 7, 0U, 1, 0U, 1, 625);
    for (c1_i96 = 0; c1_i96 < 625; c1_i96++) {
      c1_y[c1_i96] = c1_uv5[c1_i96];
    }
  }

  sf_mex_destroy(&c1_u);
}

static void c1_n_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_e_state, const char_T *c1_identifier,
  boolean_T *c1_svPtr, uint32_T c1_y[2])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_o_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_e_state), &c1_thisId,
                        c1_svPtr, c1_y);
  sf_mex_destroy(&c1_e_state);
}

static void c1_o_emlrt_marshallIn(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  boolean_T *c1_svPtr, uint32_T c1_y[2])
{
  uint32_T c1_uv6[2];
  int32_T c1_i97;
  (void)chartInstance;
  if (mxIsEmpty(c1_u)) {
    *c1_svPtr = false;
  } else {
    *c1_svPtr = true;
    sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_uv6, 1, 7, 0U, 1, 0U, 1, 2);
    for (c1_i97 = 0; c1_i97 < 2; c1_i97++) {
      c1_y[c1_i97] = c1_uv6[c1_i97];
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
  uint8_T c1_u4;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_u4, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_u4;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static real_T c1_c_eml_rand_mt19937ar(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, uint32_T c1_e_state[625])
{
  uint32_T c1_u[2];
  real_T c1_b_r;
  int32_T c1_i98;
  uint32_T c1_f_state[625];
  int32_T exitg1;

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
    c1_b_genrand_uint32_vector(chartInstance, c1_e_state, c1_u);
    c1_u[0] >>= 5U;
    c1_u[1] >>= 6U;
    c1_b_r = 1.1102230246251565E-16 * ((real_T)c1_u[0] * 6.7108864E+7 + (real_T)
      c1_u[1]);
    if (c1_b_r == 0.0) {
      for (c1_i98 = 0; c1_i98 < 625; c1_i98++) {
        c1_f_state[c1_i98] = c1_e_state[c1_i98];
      }

      if (!c1_is_valid_state(chartInstance, c1_f_state)) {
        c1_c_error(chartInstance);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return c1_b_r;
}

static void c1_b_genrand_uint32_vector(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, uint32_T c1_mt[625], uint32_T c1_u[2])
{
  int32_T c1_j;
  real_T c1_b_j;
  uint32_T c1_mti;
  int32_T c1_kk;
  uint32_T c1_y;
  int32_T c1_b_kk;
  real_T c1_c_kk;
  uint32_T c1_b_y;
  uint32_T c1_c_y;
  uint32_T c1_d_y;
  uint32_T c1_e_y;
  uint32_T c1_f_y;
  uint32_T c1_g_y;
  (void)chartInstance;
  for (c1_j = 0; c1_j < 2; c1_j++) {
    c1_b_j = 1.0 + (real_T)c1_j;
    c1_mti = c1_mt[624] + 1U;
    if ((real_T)c1_mti >= 625.0) {
      for (c1_kk = 0; c1_kk < 227; c1_kk++) {
        c1_c_kk = 1.0 + (real_T)c1_kk;
        c1_y = (c1_mt[(int32_T)c1_c_kk - 1] & 2147483648U) | (c1_mt[(int32_T)
          (c1_c_kk + 1.0) - 1] & 2147483647U);
        c1_b_y = c1_y;
        c1_c_y = c1_b_y;
        if ((real_T)(c1_c_y & 1U) == 0.0) {
          c1_c_y >>= 1U;
        } else {
          c1_c_y = c1_c_y >> 1U ^ 2567483615U;
        }

        c1_mt[(int32_T)c1_c_kk - 1] = c1_mt[(int32_T)(c1_c_kk + 397.0) - 1] ^
          c1_c_y;
      }

      for (c1_b_kk = 0; c1_b_kk < 396; c1_b_kk++) {
        c1_c_kk = 228.0 + (real_T)c1_b_kk;
        c1_y = (c1_mt[(int32_T)c1_c_kk - 1] & 2147483648U) | (c1_mt[(int32_T)
          (c1_c_kk + 1.0) - 1] & 2147483647U);
        c1_f_y = c1_y;
        c1_g_y = c1_f_y;
        if ((real_T)(c1_g_y & 1U) == 0.0) {
          c1_g_y >>= 1U;
        } else {
          c1_g_y = c1_g_y >> 1U ^ 2567483615U;
        }

        c1_mt[(int32_T)c1_c_kk - 1] = c1_mt[(int32_T)((c1_c_kk + 1.0) - 228.0) -
          1] ^ c1_g_y;
      }

      c1_y = (c1_mt[623] & 2147483648U) | (c1_mt[0] & 2147483647U);
      c1_d_y = c1_y;
      c1_e_y = c1_d_y;
      if ((real_T)(c1_e_y & 1U) == 0.0) {
        c1_e_y >>= 1U;
      } else {
        c1_e_y = c1_e_y >> 1U ^ 2567483615U;
      }

      c1_mt[623] = c1_mt[396] ^ c1_e_y;
      c1_mti = 1U;
    }

    c1_y = c1_mt[(int32_T)c1_mti - 1];
    c1_mt[624] = c1_mti;
    c1_y ^= c1_y >> 11U;
    c1_y ^= c1_y << 7U & 2636928640U;
    c1_y ^= c1_y << 15U & 4022730752U;
    c1_y ^= c1_y >> 18U;
    c1_u[(int32_T)c1_b_j - 1] = c1_y;
  }
}

static real_T c1_d_eml_rand_mt19937ar(SFc1_RightInvariant_EKFInstanceStruct
  *chartInstance, uint32_T c1_e_state[625])
{
  uint32_T c1_u32[2];
  uint32_T c1_i;
  uint32_T c1_ip1;
  real_T c1_u;
  real_T c1_b_r;
  static real_T c1_dv3[257] = { 0.0, 0.215241895984875, 0.286174591792068,
    0.335737519214422, 0.375121332878378, 0.408389134611989, 0.43751840220787,
    0.46363433679088, 0.487443966139235, 0.50942332960209, 0.529909720661557,
    0.549151702327164, 0.567338257053817, 0.584616766106378, 0.601104617755991,
    0.61689699000775, 0.63207223638606, 0.646695714894993, 0.660822574244419,
    0.674499822837293, 0.687767892795788, 0.700661841106814, 0.713212285190975,
    0.725446140909999, 0.737387211434295, 0.749056662017815, 0.760473406430107,
    0.771654424224568, 0.782615023307232, 0.793369058840623, 0.80392911698997,
    0.814306670135215, 0.824512208752291, 0.834555354086381, 0.844444954909153,
    0.854189171008163, 0.863795545553308, 0.87327106808886, 0.882622229585165,
    0.891855070732941, 0.900975224461221, 0.909987953496718, 0.91889818364959,
    0.927710533401999, 0.936429340286575, 0.945058684468165, 0.953602409881086,
    0.96206414322304, 0.970447311064224, 0.978755155294224, 0.986990747099062,
    0.99515699963509, 1.00325667954467, 1.01129241744, 1.01926671746548,
    1.02718196603564, 1.03504043983344, 1.04284431314415, 1.05059566459093,
    1.05829648333067, 1.06594867476212, 1.07355406579244, 1.0811144097034,
    1.08863139065398, 1.09610662785202, 1.10354167942464, 1.11093804601357,
    1.11829717411934, 1.12562045921553, 1.13290924865253, 1.14016484436815,
    1.14738850542085, 1.15458145035993, 1.16174485944561, 1.16887987673083,
    1.17598761201545, 1.18306914268269, 1.19012551542669, 1.19715774787944,
    1.20416683014438, 1.2111537262437, 1.21811937548548, 1.22506469375653,
    1.23199057474614, 1.23889789110569, 1.24578749554863, 1.2526602218949,
    1.25951688606371, 1.26635828701823, 1.27318520766536, 1.27999841571382,
    1.28679866449324, 1.29358669373695, 1.30036323033084, 1.30712898903073,
    1.31388467315022, 1.32063097522106, 1.32736857762793, 1.33409815321936,
    1.3408203658964, 1.34753587118059, 1.35424531676263, 1.36094934303328,
    1.36764858359748, 1.37434366577317, 1.38103521107586, 1.38772383568998,
    1.39441015092814, 1.40109476367925, 1.4077782768464, 1.41446128977547,
    1.42114439867531, 1.42782819703026, 1.43451327600589, 1.44120022484872,
    1.44788963128058, 1.45458208188841, 1.46127816251028, 1.46797845861808,
    1.47468355569786, 1.48139403962819, 1.48811049705745, 1.49483351578049,
    1.50156368511546, 1.50830159628131, 1.51504784277671, 1.521803020761,
    1.52856772943771, 1.53534257144151, 1.542128153229, 1.54892508547417,
    1.55573398346918, 1.56255546753104, 1.56939016341512, 1.57623870273591,
    1.58310172339603, 1.58997987002419, 1.59687379442279, 1.60378415602609,
    1.61071162236983, 1.61765686957301, 1.62462058283303, 1.63160345693487,
    1.63860619677555, 1.64562951790478, 1.65267414708306, 1.65974082285818,
    1.66683029616166, 1.67394333092612, 1.68108070472517, 1.68824320943719,
    1.69543165193456, 1.70264685479992, 1.7098896570713, 1.71716091501782,
    1.72446150294804, 1.73179231405296, 1.73915426128591, 1.74654827828172,
    1.75397532031767, 1.76143636531891, 1.76893241491127, 1.77646449552452,
    1.78403365954944, 1.79164098655216, 1.79928758454972, 1.80697459135082,
    1.81470317596628, 1.82247454009388, 1.83028991968276, 1.83815058658281,
    1.84605785028518, 1.8540130597602, 1.86201760539967, 1.87007292107127,
    1.878180486293, 1.88634182853678, 1.8945585256707, 1.90283220855043,
    1.91116456377125, 1.91955733659319, 1.92801233405266, 1.93653142827569,
    1.94511656000868, 1.95376974238465, 1.96249306494436, 1.97128869793366,
    1.98015889690048, 1.98910600761744, 1.99813247135842, 2.00724083056053,
    2.0164337349062, 2.02571394786385, 2.03508435372962, 2.04454796521753,
    2.05410793165065, 2.06376754781173, 2.07353026351874, 2.0833996939983,
    2.09337963113879, 2.10347405571488, 2.11368715068665, 2.12402331568952,
    2.13448718284602, 2.14508363404789, 2.15581781987674, 2.16669518035431,
    2.17772146774029, 2.18890277162636, 2.20024554661128, 2.21175664288416,
    2.22344334009251, 2.23531338492992, 2.24737503294739, 2.25963709517379,
    2.27210899022838, 2.28480080272449, 2.29772334890286, 2.31088825060137,
    2.32430801887113, 2.33799614879653, 2.35196722737914, 2.36623705671729,
    2.38082279517208, 2.39574311978193, 2.41101841390112, 2.42667098493715,
    2.44272531820036, 2.4592083743347, 2.47614993967052, 2.49358304127105,
    2.51154444162669, 2.53007523215985, 2.54922155032478, 2.56903545268184,
    2.58957598670829, 2.61091051848882, 2.63311639363158, 2.65628303757674,
    2.68051464328574, 2.70593365612306, 2.73268535904401, 2.76094400527999,
    2.79092117400193, 2.82287739682644, 2.85713873087322, 2.89412105361341,
    2.93436686720889, 2.97860327988184, 3.02783779176959, 3.08352613200214,
    3.147889289518, 3.2245750520478, 3.32024473383983, 3.44927829856143,
    3.65415288536101, 3.91075795952492 };

  real_T c1_x;
  real_T c1_b_x;
  real_T c1_c_x;
  real_T c1_y;
  real_T c1_b_u;
  real_T c1_c_u;
  real_T c1_d_x;
  real_T c1_e_x;
  real_T c1_f_x;
  real_T c1_d_u;
  static real_T c1_dv4[257] = { 1.0, 0.977101701267673, 0.959879091800108,
    0.9451989534423, 0.932060075959231, 0.919991505039348, 0.908726440052131,
    0.898095921898344, 0.887984660755834, 0.878309655808918, 0.869008688036857,
    0.860033621196332, 0.851346258458678, 0.842915653112205, 0.834716292986884,
    0.826726833946222, 0.818929191603703, 0.811307874312656, 0.803849483170964,
    0.796542330422959, 0.789376143566025, 0.782341832654803, 0.775431304981187,
    0.768637315798486, 0.761953346836795, 0.755373506507096, 0.748892447219157,
    0.742505296340151, 0.736207598126863, 0.729995264561476, 0.72386453346863,
    0.717811932630722, 0.711834248878248, 0.705928501332754, 0.700091918136512,
    0.694321916126117, 0.688616083004672, 0.682972161644995, 0.677388036218774,
    0.671861719897082, 0.66639134390875, 0.660975147776663, 0.655611470579697,
    0.650298743110817, 0.645035480820822, 0.639820277453057, 0.634651799287624,
    0.629528779924837, 0.624450015547027, 0.619414360605834, 0.614420723888914,
    0.609468064925773, 0.604555390697468, 0.599681752619125, 0.594846243767987,
    0.590047996332826, 0.585286179263371, 0.580559996100791, 0.575868682972354,
    0.571211506735253, 0.566587763256165, 0.561996775814525, 0.557437893618766,
    0.552910490425833, 0.548413963255266, 0.543947731190026, 0.539511234256952,
    0.535103932380458, 0.530725304403662, 0.526374847171684, 0.522052074672322,
    0.517756517229756, 0.513487720747327, 0.509245245995748, 0.505028667943468,
    0.500837575126149, 0.49667156905249, 0.492530263643869, 0.488413284705458,
    0.484320269426683, 0.480250865909047, 0.476204732719506, 0.47218153846773,
    0.468180961405694, 0.464202689048174, 0.460246417812843, 0.456311852678716,
    0.452398706861849, 0.448506701507203, 0.444635565395739, 0.440785034665804,
    0.436954852547985, 0.433144769112652, 0.429354541029442, 0.425583931338022,
    0.421832709229496, 0.418100649837848, 0.414387534040891, 0.410693148270188,
    0.407017284329473, 0.403359739221114, 0.399720314980197, 0.396098818515832,
    0.392495061459315, 0.388908860018789, 0.385340034840077, 0.381788410873393,
    0.378253817245619, 0.374736087137891, 0.371235057668239, 0.367750569779032,
    0.364282468129004, 0.360830600989648, 0.357394820145781, 0.353974980800077,
    0.350570941481406, 0.347182563956794, 0.343809713146851, 0.340452257044522,
    0.337110066637006, 0.333783015830718, 0.330470981379163, 0.327173842813601,
    0.323891482376391, 0.320623784956905, 0.317370638029914, 0.314131931596337,
    0.310907558126286, 0.307697412504292, 0.30450139197665, 0.301319396100803,
    0.298151326696685, 0.294997087799962, 0.291856585617095, 0.288729728482183,
    0.285616426815502, 0.282516593083708, 0.279430141761638, 0.276356989295668,
    0.273297054068577, 0.270250256365875, 0.267216518343561, 0.264195763997261,
    0.261187919132721, 0.258192911337619, 0.255210669954662, 0.252241126055942,
    0.249284212418529, 0.246339863501264, 0.24340801542275, 0.240488605940501,
    0.237581574431238, 0.23468686187233, 0.231804410824339, 0.228934165414681,
    0.226076071322381, 0.223230075763918, 0.220396127480152, 0.217574176724331,
    0.214764175251174, 0.211966076307031, 0.209179834621125, 0.206405406397881,
    0.203642749310335, 0.200891822494657, 0.198152586545776, 0.195425003514135,
    0.192709036903589, 0.190004651670465, 0.187311814223801, 0.1846304924268,
    0.181960655599523, 0.179302274522848, 0.176655321443735, 0.174019770081839,
    0.171395595637506, 0.168782774801212, 0.166181285764482, 0.163591108232366,
    0.161012223437511, 0.158444614155925, 0.15588826472448, 0.153343161060263,
    0.150809290681846, 0.148286642732575, 0.145775208005994, 0.143274978973514,
    0.140785949814445, 0.138308116448551, 0.135841476571254, 0.133386029691669,
    0.130941777173644, 0.12850872228, 0.126086870220186, 0.123676228201597,
    0.12127680548479, 0.11888861344291, 0.116511665625611, 0.114145977827839,
    0.111791568163838, 0.109448457146812, 0.107116667774684, 0.104796225622487,
    0.102487158941935, 0.10018949876881, 0.0979032790388625, 0.095628536713009,
    0.093365311912691, 0.0911136480663738, 0.0888735920682759,
    0.0866451944505581, 0.0844285095703535, 0.082223595813203,
    0.0800305158146631, 0.0778493367020961, 0.0756801303589272,
    0.0735229737139814, 0.0713779490588905, 0.0692451443970068,
    0.0671246538277886, 0.065016577971243, 0.0629210244377582, 0.06083810834954,
    0.0587679529209339, 0.0567106901062031, 0.0546664613248891,
    0.0526354182767924, 0.0506177238609479, 0.0486135532158687,
    0.0466230949019305, 0.0446465522512946, 0.0426841449164746,
    0.0407361106559411, 0.0388027074045262, 0.0368842156885674,
    0.0349809414617162, 0.0330932194585786, 0.0312214171919203,
    0.0293659397581334, 0.0275272356696031, 0.0257058040085489,
    0.0239022033057959, 0.0221170627073089, 0.0203510962300445,
    0.0186051212757247, 0.0168800831525432, 0.0151770883079353,
    0.0134974506017399, 0.0118427578579079, 0.0102149714397015,
    0.00861658276939875, 0.00705087547137324, 0.00552240329925101,
    0.00403797259336304, 0.00260907274610216, 0.0012602859304986,
    0.000477467764609386 };

  int32_T exitg1;
  do {
    exitg1 = 0;
    c1_b_genrand_uint32_vector(chartInstance, c1_e_state, c1_u32);
    c1_i = (c1_u32[1] >> 24U) + 1U;
    c1_ip1 = c1_i + 1U;
    c1_u = ((real_T)(c1_u32[0] >> 3U) * 1.6777216E+7 + (real_T)(c1_u32[1] &
             16777215U)) * 2.2204460492503131E-16 - 1.0;
    c1_b_r = c1_u * c1_dv3[(int32_T)c1_ip1 - 1];
    c1_x = c1_b_r;
    c1_b_x = c1_x;
    c1_c_x = c1_b_x;
    c1_y = muDoubleScalarAbs(c1_c_x);
    if (c1_y <= c1_dv3[(int32_T)c1_i - 1]) {
      exitg1 = 1;
    } else if ((real_T)c1_i < 256.0) {
      c1_b_u = c1_b_genrandu(chartInstance, c1_e_state);
      c1_d_x = -0.5 * c1_b_r * c1_b_r;
      c1_f_x = c1_d_x;
      c1_f_x = muDoubleScalarExp(c1_f_x);
      if (c1_dv4[(int32_T)c1_ip1 - 1] + c1_b_u * (c1_dv4[(int32_T)c1_i - 1] -
           c1_dv4[(int32_T)c1_ip1 - 1]) < c1_f_x) {
        exitg1 = 1;
      }
    } else {
      do {
        c1_c_u = c1_b_genrandu(chartInstance, c1_e_state);
        c1_e_x = muDoubleScalarLog(c1_c_u) * 0.273661237329758;
        c1_d_u = c1_b_genrandu(chartInstance, c1_e_state);
      } while (!(-2.0 * muDoubleScalarLog(c1_d_u) > c1_e_x * c1_e_x));

      if (c1_b_r < 0.0) {
        c1_b_r = c1_e_x - 3.65415288536101;
      } else {
        c1_b_r = 3.65415288536101 - c1_e_x;
      }

      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return c1_b_r;
}

static real_T c1_b_genrandu(SFc1_RightInvariant_EKFInstanceStruct *chartInstance,
  uint32_T c1_mt[625])
{
  real_T c1_r;
  uint32_T c1_u[2];
  int32_T c1_i99;
  uint32_T c1_b_mt[625];
  int32_T exitg1;

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
    c1_b_genrand_uint32_vector(chartInstance, c1_mt, c1_u);
    c1_u[0] >>= 5U;
    c1_u[1] >>= 6U;
    c1_r = 1.1102230246251565E-16 * ((real_T)c1_u[0] * 6.7108864E+7 + (real_T)
      c1_u[1]);
    if (c1_r == 0.0) {
      for (c1_i99 = 0; c1_i99 < 625; c1_i99++) {
        c1_b_mt[c1_i99] = c1_mt[c1_i99];
      }

      if (!c1_is_valid_state(chartInstance, c1_b_mt)) {
        c1_c_error(chartInstance);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return c1_r;
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
  chartInstance->c1_landmark_positions = (real_T (*)[28])
    ssGetInputPortSignal_wrapper(chartInstance->S, 4);
  chartInstance->c1_landmark_true_noise_std = (real_T (*)[3])
    ssGetInputPortSignal_wrapper(chartInstance->S, 5);
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
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1097404542U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1968390677U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3245350910U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(329753227U);
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
    mxArray *mxChecksum = mxCreateString("uQbUgOCuP5roCPBEv2fSbF");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,6,3,dataFields);

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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(4);
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
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
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
    "100 S1x8'type','srcId','name','auxInfo'{{M[1],M[5],T\"landmarks\",},{M[4],M[0],T\"method\",S'l','i','p'{{M1x2[523 529],M[1],T\"C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand.m\"}}},{M[4],M[0],T\"method\",S'l','i','p'{{M1x2[649 655],M[1],T\"C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_randn.m\"}}},{M[4],M[0],T\"state\",S'l','i','p'{{M1x2[165 170],M[1],T\"C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mcg16807_stateful.m\"}}},{M[4],M[0],T\"state\",S'l','i','p'{{M1x2[166 171],M[1],T\"C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_mt19937ar_stateful.m\"}}},{M[4],M[0],T\"state\",S'l','i','p'{{M1x2[165 170],M[1],T\"C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_rand_shr3cong_stateful.m\"}}},{M[4],M[0],T\"state\",S'l','i','p'{{M1x2[656 661],M[1],T\"C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\randfun\\private\\eml_randn.m\"}}},{M[8],M[0],T\"is_active_c1_RightInvariant_EKF\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 8, 10);
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
           7,
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
          _SFD_SET_DATA_PROPS(4,1,1,0,"landmark_positions");
          _SFD_SET_DATA_PROPS(5,1,1,0,"landmark_true_noise_std");
          _SFD_SET_DATA_PROPS(6,2,0,1,"landmarks");
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
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,861);
        _SFD_CV_INIT_EML_IF(0,1,0,155,175,195,223);
        _SFD_CV_INIT_EML_IF(0,1,1,297,306,-1,856);
        _SFD_CV_INIT_EML_WHILE(0,1,0,588,612,852);

        {
          static int condStart[] = { 158, 169 };

          static int condEnd[] = { 164, 175 };

          static int pfixExpr[] = { 0, 1, -1, -3 };

          _SFD_CV_INIT_EML_MCDC(0,1,0,158,175,2,0,&(condStart[0]),&(condEnd[0]),
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
            1.0,0,0,(MexFcnForType)c1_b_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 4U;
          _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_e_sf_marshallOut,(MexInFcnForType)NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_d_sf_marshallOut,(MexInFcnForType)NULL);

        {
          unsigned int dimVector[2];
          dimVector[0]= 4U;
          dimVector[1]= 7U;
          _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_c_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_b_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[2];
          dimVector[0]= 4U;
          dimVector[1]= 10U;
          _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
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
        _SFD_SET_DATA_VALUE_PTR_VAR_DIM(6U, *chartInstance->c1_landmarks_data,
          (void *)chartInstance->c1_landmarks_sizes);
        _SFD_SET_DATA_VALUE_PTR(1U, *chartInstance->c1_orientation);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c1_pulse1);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c1_pulse2);
        _SFD_SET_DATA_VALUE_PTR(4U, *chartInstance->c1_landmark_positions);
        _SFD_SET_DATA_VALUE_PTR(5U, *chartInstance->c1_landmark_true_noise_std);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sz0jTxxTaSfTBRCHmefrhrG";
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
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,1,6);
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
      for (inPortIdx=0; inPortIdx < 6; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,1);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(299517679U));
  ssSetChecksum1(S,(2740434082U));
  ssSetChecksum2(S,(893941388U));
  ssSetChecksum3(S,(3791495047U));
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
