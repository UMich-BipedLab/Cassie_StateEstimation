/* Include files */

#include "StateEstimation_sfun.h"
#include "c41_StateEstimation.h"
#include "mwmathutil.h"
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
static const char * c41_debug_family_names[25] = { "qin", "Rni", "Rbi", "Rwn",
  "Rwi", "Rwb", "wb", "qq", "qaR", "qjR", "qaL", "qjL", "dqq", "dqaR", "dqjR",
  "dqaL", "dqjL", "nargin", "nargout", "outputs", "qwi", "wi", "ai", "q", "dq" };

static const char * c41_b_debug_family_names[4] = { "nargin", "nargout", "v",
  "Ax" };

static const char * c41_c_debug_family_names[6] = { "qv", "qw", "nargin",
  "nargout", "q", "R" };

static const char * c41_d_debug_family_names[4] = { "nargin", "nargout", "var1",
  "output1" };

static const char * c41_e_debug_family_names[13] = { "a1", "a2", "a3", "a4",
  "max_a", "qx", "qy", "qz", "qw", "nargin", "nargout", "R", "q" };

static const char * c41_f_debug_family_names[7] = { "qx", "qy", "qz", "nargin",
  "nargout", "R", "q" };

static const char * c41_g_debug_family_names[15] = { "qx", "qy", "wx", "wy",
  "wz", "t2", "t3", "t4", "t5", "t6", "nargin", "nargout", "in1", "in2", "dq" };

/* Function Declarations */
static void initialize_c41_StateEstimation(SFc41_StateEstimationInstanceStruct
  *chartInstance);
static void initialize_params_c41_StateEstimation
  (SFc41_StateEstimationInstanceStruct *chartInstance);
static void enable_c41_StateEstimation(SFc41_StateEstimationInstanceStruct
  *chartInstance);
static void disable_c41_StateEstimation(SFc41_StateEstimationInstanceStruct
  *chartInstance);
static void c41_update_debugger_state_c41_StateEstimation
  (SFc41_StateEstimationInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c41_StateEstimation
  (SFc41_StateEstimationInstanceStruct *chartInstance);
static void set_sim_state_c41_StateEstimation
  (SFc41_StateEstimationInstanceStruct *chartInstance, const mxArray *c41_st);
static void finalize_c41_StateEstimation(SFc41_StateEstimationInstanceStruct
  *chartInstance);
static void sf_gateway_c41_StateEstimation(SFc41_StateEstimationInstanceStruct
  *chartInstance);
static void mdl_start_c41_StateEstimation(SFc41_StateEstimationInstanceStruct
  *chartInstance);
static void c41_chartstep_c41_StateEstimation
  (SFc41_StateEstimationInstanceStruct *chartInstance);
static void initSimStructsc41_StateEstimation
  (SFc41_StateEstimationInstanceStruct *chartInstance);
static void c41_Rotation_to_Quaternion(SFc41_StateEstimationInstanceStruct
  *chartInstance, real_T c41_R[9], real_T c41_b_q[4]);
static void init_script_number_translation(uint32_T c41_machineNumber, uint32_T
  c41_chartNumber, uint32_T c41_instanceNumber);
static const mxArray *c41_sf_marshallOut(void *chartInstanceVoid, void
  *c41_inData);
static void c41_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_b_dq, const char_T *c41_identifier, real_T
  c41_y[20]);
static void c41_b_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_u, const emlrtMsgIdentifier *c41_parentId,
  real_T c41_y[20]);
static void c41_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c41_mxArrayInData, const char_T *c41_varName, void *c41_outData);
static const mxArray *c41_b_sf_marshallOut(void *chartInstanceVoid, void
  *c41_inData);
static void c41_c_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_b_ai, const char_T *c41_identifier, real_T
  c41_y[3]);
static void c41_d_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_u, const emlrtMsgIdentifier *c41_parentId,
  real_T c41_y[3]);
static void c41_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c41_mxArrayInData, const char_T *c41_varName, void *c41_outData);
static const mxArray *c41_c_sf_marshallOut(void *chartInstanceVoid, void
  *c41_inData);
static void c41_e_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_b_qwi, const char_T *c41_identifier, real_T
  c41_y[4]);
static void c41_f_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_u, const emlrtMsgIdentifier *c41_parentId,
  real_T c41_y[4]);
static void c41_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c41_mxArrayInData, const char_T *c41_varName, void *c41_outData);
static const mxArray *c41_d_sf_marshallOut(void *chartInstanceVoid, void
  *c41_inData);
static const mxArray *c41_e_sf_marshallOut(void *chartInstanceVoid, void
  *c41_inData);
static real_T c41_g_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_u, const emlrtMsgIdentifier *c41_parentId);
static void c41_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c41_mxArrayInData, const char_T *c41_varName, void *c41_outData);
static const mxArray *c41_f_sf_marshallOut(void *chartInstanceVoid, void
  *c41_inData);
static void c41_h_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_u, const emlrtMsgIdentifier *c41_parentId,
  real_T c41_y[2]);
static void c41_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c41_mxArrayInData, const char_T *c41_varName, void *c41_outData);
static const mxArray *c41_g_sf_marshallOut(void *chartInstanceVoid, void
  *c41_inData);
static void c41_i_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_u, const emlrtMsgIdentifier *c41_parentId,
  real_T c41_y[5]);
static void c41_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c41_mxArrayInData, const char_T *c41_varName, void *c41_outData);
static const mxArray *c41_h_sf_marshallOut(void *chartInstanceVoid, void
  *c41_inData);
static void c41_j_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_u, const emlrtMsgIdentifier *c41_parentId,
  real_T c41_y[9]);
static void c41_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c41_mxArrayInData, const char_T *c41_varName, void *c41_outData);
static const mxArray *c41_i_sf_marshallOut(void *chartInstanceVoid, void
  *c41_inData);
static void c41_k_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_u, const emlrtMsgIdentifier *c41_parentId,
  real_T c41_y[14]);
static void c41_h_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c41_mxArrayInData, const char_T *c41_varName, void *c41_outData);
static void c41_error(SFc41_StateEstimationInstanceStruct *chartInstance);
static void c41_abs(SFc41_StateEstimationInstanceStruct *chartInstance, real_T
                    c41_x[4], real_T c41_y[4]);
static void c41_check_forloop_overflow_error(SFc41_StateEstimationInstanceStruct
  *chartInstance, boolean_T c41_overflow);
static void c41_b_error(SFc41_StateEstimationInstanceStruct *chartInstance);
static void c41_c_error(SFc41_StateEstimationInstanceStruct *chartInstance);
static const mxArray *c41_j_sf_marshallOut(void *chartInstanceVoid, void
  *c41_inData);
static int32_T c41_l_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_u, const emlrtMsgIdentifier *c41_parentId);
static void c41_i_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c41_mxArrayInData, const char_T *c41_varName, void *c41_outData);
static const mxArray *c41_outputs_bus_io(void *chartInstanceVoid, void
  *c41_pData);
static uint8_T c41_m_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_b_is_active_c41_StateEstimation, const
  char_T *c41_identifier);
static uint8_T c41_n_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_u, const emlrtMsgIdentifier *c41_parentId);
static void init_dsm_address_info(SFc41_StateEstimationInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc41_StateEstimationInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c41_StateEstimation(SFc41_StateEstimationInstanceStruct
  *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc41_StateEstimation(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  chartInstance->c41_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c41_is_active_c41_StateEstimation = 0U;
}

static void initialize_params_c41_StateEstimation
  (SFc41_StateEstimationInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c41_StateEstimation(SFc41_StateEstimationInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c41_StateEstimation(SFc41_StateEstimationInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c41_update_debugger_state_c41_StateEstimation
  (SFc41_StateEstimationInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c41_StateEstimation
  (SFc41_StateEstimationInstanceStruct *chartInstance)
{
  const mxArray *c41_st;
  const mxArray *c41_y = NULL;
  const mxArray *c41_b_y = NULL;
  const mxArray *c41_c_y = NULL;
  const mxArray *c41_d_y = NULL;
  const mxArray *c41_e_y = NULL;
  const mxArray *c41_f_y = NULL;
  uint8_T c41_hoistedGlobal;
  const mxArray *c41_g_y = NULL;
  c41_st = NULL;
  c41_st = NULL;
  c41_y = NULL;
  sf_mex_assign(&c41_y, sf_mex_createcellmatrix(6, 1), false);
  c41_b_y = NULL;
  sf_mex_assign(&c41_b_y, sf_mex_create("y", *chartInstance->c41_ai, 0, 0U, 1U,
    0U, 1, 3), false);
  sf_mex_setcell(c41_y, 0, c41_b_y);
  c41_c_y = NULL;
  sf_mex_assign(&c41_c_y, sf_mex_create("y", *chartInstance->c41_dq, 0, 0U, 1U,
    0U, 1, 20), false);
  sf_mex_setcell(c41_y, 1, c41_c_y);
  c41_d_y = NULL;
  sf_mex_assign(&c41_d_y, sf_mex_create("y", *chartInstance->c41_q, 0, 0U, 1U,
    0U, 1, 20), false);
  sf_mex_setcell(c41_y, 2, c41_d_y);
  c41_e_y = NULL;
  sf_mex_assign(&c41_e_y, sf_mex_create("y", *chartInstance->c41_qwi, 0, 0U, 1U,
    0U, 1, 4), false);
  sf_mex_setcell(c41_y, 3, c41_e_y);
  c41_f_y = NULL;
  sf_mex_assign(&c41_f_y, sf_mex_create("y", *chartInstance->c41_wi, 0, 0U, 1U,
    0U, 1, 3), false);
  sf_mex_setcell(c41_y, 4, c41_f_y);
  c41_hoistedGlobal = chartInstance->c41_is_active_c41_StateEstimation;
  c41_g_y = NULL;
  sf_mex_assign(&c41_g_y, sf_mex_create("y", &c41_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c41_y, 5, c41_g_y);
  sf_mex_assign(&c41_st, c41_y, false);
  return c41_st;
}

static void set_sim_state_c41_StateEstimation
  (SFc41_StateEstimationInstanceStruct *chartInstance, const mxArray *c41_st)
{
  const mxArray *c41_u;
  real_T c41_dv0[3];
  int32_T c41_i0;
  real_T c41_dv1[20];
  int32_T c41_i1;
  real_T c41_dv2[20];
  int32_T c41_i2;
  real_T c41_dv3[4];
  int32_T c41_i3;
  real_T c41_dv4[3];
  int32_T c41_i4;
  chartInstance->c41_doneDoubleBufferReInit = true;
  c41_u = sf_mex_dup(c41_st);
  c41_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("ai", c41_u, 0)),
    "ai", c41_dv0);
  for (c41_i0 = 0; c41_i0 < 3; c41_i0++) {
    (*chartInstance->c41_ai)[c41_i0] = c41_dv0[c41_i0];
  }

  c41_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("dq", c41_u, 1)),
                       "dq", c41_dv1);
  for (c41_i1 = 0; c41_i1 < 20; c41_i1++) {
    (*chartInstance->c41_dq)[c41_i1] = c41_dv1[c41_i1];
  }

  c41_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("q", c41_u, 2)),
                       "q", c41_dv2);
  for (c41_i2 = 0; c41_i2 < 20; c41_i2++) {
    (*chartInstance->c41_q)[c41_i2] = c41_dv2[c41_i2];
  }

  c41_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("qwi", c41_u,
    3)), "qwi", c41_dv3);
  for (c41_i3 = 0; c41_i3 < 4; c41_i3++) {
    (*chartInstance->c41_qwi)[c41_i3] = c41_dv3[c41_i3];
  }

  c41_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("wi", c41_u, 4)),
    "wi", c41_dv4);
  for (c41_i4 = 0; c41_i4 < 3; c41_i4++) {
    (*chartInstance->c41_wi)[c41_i4] = c41_dv4[c41_i4];
  }

  chartInstance->c41_is_active_c41_StateEstimation = c41_m_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c41_StateEstimation",
       c41_u, 5)), "is_active_c41_StateEstimation");
  sf_mex_destroy(&c41_u);
  c41_update_debugger_state_c41_StateEstimation(chartInstance);
  sf_mex_destroy(&c41_st);
}

static void finalize_c41_StateEstimation(SFc41_StateEstimationInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c41_StateEstimation(SFc41_StateEstimationInstanceStruct
  *chartInstance)
{
  int32_T c41_i5;
  int32_T c41_i6;
  int32_T c41_i7;
  int32_T c41_i8;
  int32_T c41_i9;
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 1U, chartInstance->c41_sfEvent);
  chartInstance->c41_sfEvent = CALL_EVENT;
  c41_chartstep_c41_StateEstimation(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_StateEstimationMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  for (c41_i5 = 0; c41_i5 < 4; c41_i5++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c41_qwi)[c41_i5], 1U, 1U, 0U,
                          chartInstance->c41_sfEvent, false);
  }

  for (c41_i6 = 0; c41_i6 < 3; c41_i6++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c41_wi)[c41_i6], 2U, 1U, 0U,
                          chartInstance->c41_sfEvent, false);
  }

  for (c41_i7 = 0; c41_i7 < 3; c41_i7++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c41_ai)[c41_i7], 3U, 1U, 0U,
                          chartInstance->c41_sfEvent, false);
  }

  for (c41_i8 = 0; c41_i8 < 20; c41_i8++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c41_q)[c41_i8], 4U, 1U, 0U,
                          chartInstance->c41_sfEvent, false);
  }

  for (c41_i9 = 0; c41_i9 < 20; c41_i9++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c41_dq)[c41_i9], 5U, 1U, 0U,
                          chartInstance->c41_sfEvent, false);
  }
}

static void mdl_start_c41_StateEstimation(SFc41_StateEstimationInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c41_chartstep_c41_StateEstimation
  (SFc41_StateEstimationInstanceStruct *chartInstance)
{
  int32_T c41_i10;
  int32_T c41_i11;
  c41_cassieOutputsBus c41_b_outputs;
  int32_T c41_i12;
  int32_T c41_i13;
  int32_T c41_i14;
  int32_T c41_i15;
  int32_T c41_i16;
  int32_T c41_i17;
  int32_T c41_i18;
  uint32_T c41_debug_family_var_map[25];
  real_T c41_qin[4];
  real_T c41_Rni[9];
  real_T c41_Rbi[9];
  real_T c41_Rwn[9];
  real_T c41_Rwi[9];
  real_T c41_Rwb[9];
  real_T c41_wb[3];
  real_T c41_qq[3];
  real_T c41_qaR[5];
  real_T c41_qjR[2];
  real_T c41_qaL[5];
  real_T c41_qjL[2];
  real_T c41_dqq[3];
  real_T c41_dqaR[5];
  real_T c41_dqjR[2];
  real_T c41_dqaL[5];
  real_T c41_dqjL[2];
  real_T c41_nargin = 1.0;
  real_T c41_nargout = 5.0;
  real_T c41_b_qwi[4];
  real_T c41_b_wi[3];
  real_T c41_b_ai[3];
  real_T c41_b_q[20];
  real_T c41_b_dq[20];
  c41_CassieOutputs *c41_obj;
  c41_CassieOutputs c41_cassieOutputs;
  c41_CassieOutputs *c41_b_obj;
  int32_T c41_i19;
  int32_T c41_i20;
  c41_s6OB5gUPZ36CI1QpFApZgNB c41_data;
  int32_T c41_i21;
  int32_T c41_i22;
  int32_T c41_i23;
  int32_T c41_i24;
  int32_T c41_i25;
  int32_T c41_i26;
  int32_T c41_i27;
  c41_CassieOutputs *c41_c_obj;
  c41_cassieOutputsBus c41_b_data;
  int32_T c41_i28;
  int32_T c41_i29;
  int32_T c41_i30;
  int32_T c41_i31;
  int32_T c41_i32;
  int32_T c41_i33;
  int32_T c41_i34;
  int32_T c41_i35;
  int32_T c41_i36;
  c41_CassieOutputs *c41_d_obj;
  int32_T c41_i37;
  int32_T c41_i38;
  real_T c41_e_obj[4];
  int32_T c41_i39;
  int32_T c41_i40;
  real_T c41_b_qin[4];
  static int32_T c41_iv0[4] = { 1, 2, 3, 0 };

  c41_CassieOutputs *c41_f_obj;
  int32_T c41_i41;
  int32_T c41_i42;
  real_T c41_g_obj[3];
  c41_CassieOutputs *c41_h_obj;
  int32_T c41_i43;
  int32_T c41_i44;
  real_T c41_i_obj[3];
  int32_T c41_i45;
  uint32_T c41_b_debug_family_var_map[6];
  real_T c41_c_q[4];
  real_T c41_qv[3];
  real_T c41_qw;
  real_T c41_b_nargin = 1.0;
  real_T c41_b_nargout = 1.0;
  real_T c41_R[9];
  int32_T c41_i46;
  real_T c41_a;
  real_T c41_b_a;
  real_T c41_c_a;
  real_T c41_x;
  real_T c41_d_a;
  real_T c41_c;
  boolean_T c41_p;
  real_T c41_e_a;
  int32_T c41_i47;
  int32_T c41_i48;
  real_T c41_y[9];
  static real_T c41_b[9] = { 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0 };

  uint32_T c41_c_debug_family_var_map[4];
  real_T c41_v[3];
  real_T c41_c_nargin = 1.0;
  real_T c41_c_nargout = 1.0;
  real_T c41_Ax[9];
  real_T c41_f_a;
  int32_T c41_i49;
  int32_T c41_i50;
  real_T c41_b_b[9];
  int32_T c41_i51;
  int32_T c41_i52;
  real_T c41_g_a[3];
  int32_T c41_i53;
  real_T c41_c_b[3];
  int32_T c41_i54;
  int32_T c41_i55;
  int32_T c41_i56;
  int32_T c41_i57;
  real_T c41_b_y[9];
  int32_T c41_i58;
  int32_T c41_i59;
  int32_T c41_i60;
  int32_T c41_i61;
  int32_T c41_i62;
  real_T c41_var1[14];
  real_T c41_d_nargin = 1.0;
  real_T c41_d_nargout = 1.0;
  real_T c41_output1[9];
  int32_T c41_i63;
  int32_T c41_i64;
  int32_T c41_i65;
  int32_T c41_i66;
  int32_T c41_i67;
  int32_T c41_i68;
  static real_T c41_h_a[9] = { 1.0, 0.0, 0.0, 0.0, -1.0, 1.2246467991473532E-16,
    0.0, -1.2246467991473532E-16, -1.0 };

  int32_T c41_i69;
  int32_T c41_i70;
  int32_T c41_i71;
  int32_T c41_i72;
  int32_T c41_i73;
  int32_T c41_i74;
  int32_T c41_i75;
  int32_T c41_i76;
  int32_T c41_i77;
  int32_T c41_i78;
  int32_T c41_i79;
  int32_T c41_i80;
  int32_T c41_i81;
  int32_T c41_i82;
  int32_T c41_i83;
  int32_T c41_i84;
  int32_T c41_i85;
  real_T c41_b_Rwi[9];
  real_T c41_dv5[4];
  int32_T c41_i86;
  int32_T c41_i87;
  int32_T c41_i88;
  int32_T c41_i89;
  int32_T c41_i90;
  int32_T c41_i91;
  int32_T c41_i92;
  int32_T c41_i93;
  int32_T c41_i94;
  int32_T c41_i95;
  uint32_T c41_d_debug_family_var_map[7];
  real_T c41_b_R[9];
  real_T c41_qx;
  real_T c41_qy;
  real_T c41_qz;
  real_T c41_e_nargin = 1.0;
  real_T c41_e_nargout = 1.0;
  real_T c41_c_y;
  real_T c41_b_x;
  real_T c41_d_y;
  real_T c41_c_x;
  real_T c41_d_x;
  real_T c41_e_y;
  real_T c41_e_x;
  real_T c41_f_y;
  real_T c41_g_y;
  real_T c41_h_y;
  real_T c41_f_x;
  real_T c41_g_x;
  real_T c41_i_y;
  real_T c41_h_x;
  real_T c41_i_x;
  real_T c41_j_y;
  real_T c41_k_y;
  real_T c41_j_x;
  real_T c41_k_x;
  real_T c41_r;
  real_T c41_l_x;
  boolean_T c41_b0;
  boolean_T c41_b1;
  boolean_T c41_b_p;
  boolean_T c41_c_p;
  c41_CassieOutputs *c41_j_obj;
  real_T c41_m_x;
  int32_T c41_i96;
  real_T c41_n_x;
  int32_T c41_i97;
  real_T c41_k_obj[5];
  real_T c41_l_y;
  real_T c41_o_x;
  c41_CassieOutputs *c41_l_obj;
  real_T c41_p_x;
  int32_T c41_i98;
  real_T c41_m_y;
  real_T c41_n_y;
  real_T c41_q_x;
  int32_T c41_i99;
  real_T c41_m_obj[2];
  c41_CassieOutputs *c41_n_obj;
  int32_T c41_i100;
  int32_T c41_i101;
  real_T c41_o_obj[5];
  c41_CassieOutputs *c41_p_obj;
  int32_T c41_i102;
  int32_T c41_i103;
  real_T c41_q_obj[2];
  int32_T c41_i104;
  int32_T c41_i105;
  real_T c41_in1[3];
  uint32_T c41_e_debug_family_var_map[15];
  real_T c41_in2[3];
  real_T c41_b_qx;
  real_T c41_b_qy;
  real_T c41_wx;
  real_T c41_wy;
  real_T c41_wz;
  real_T c41_t2;
  real_T c41_t3;
  real_T c41_t4;
  real_T c41_t5;
  real_T c41_t6;
  real_T c41_f_nargin = 2.0;
  real_T c41_f_nargout = 1.0;
  real_T c41_r_x;
  real_T c41_s_x;
  real_T c41_t_x;
  real_T c41_u_x;
  real_T c41_v_x;
  real_T c41_w_x;
  real_T c41_x_x;
  real_T c41_y_x;
  real_T c41_ab_x;
  real_T c41_o_y;
  real_T c41_p_y;
  real_T c41_bb_x;
  real_T c41_cb_x;
  real_T c41_db_x;
  c41_CassieOutputs *c41_r_obj;
  int32_T c41_i106;
  int32_T c41_i107;
  real_T c41_s_obj[5];
  c41_CassieOutputs *c41_t_obj;
  int32_T c41_i108;
  int32_T c41_i109;
  real_T c41_u_obj[2];
  c41_CassieOutputs *c41_v_obj;
  int32_T c41_i110;
  int32_T c41_i111;
  real_T c41_w_obj[5];
  c41_CassieOutputs *c41_x_obj;
  int32_T c41_i112;
  int32_T c41_i113;
  real_T c41_y_obj[2];
  int32_T c41_i114;
  int32_T c41_i115;
  int32_T c41_i116;
  int32_T c41_i117;
  int32_T c41_i118;
  int32_T c41_i119;
  int32_T c41_i120;
  int32_T c41_i121;
  int32_T c41_i122;
  int32_T c41_i123;
  int32_T c41_i124;
  int32_T c41_i125;
  int32_T c41_i126;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 1U, chartInstance->c41_sfEvent);
  for (c41_i10 = 0; c41_i10 < 4; c41_i10++) {
    c41_b_outputs.vectorNavOrientation[c41_i10] = ((real_T *)&((char_T *)
      chartInstance->c41_outputs)[0])[c41_i10];
  }

  for (c41_i11 = 0; c41_i11 < 3; c41_i11++) {
    c41_b_outputs.vectorNavAngularVelocity[c41_i11] = ((real_T *)&((char_T *)
      chartInstance->c41_outputs)[32])[c41_i11];
  }

  for (c41_i12 = 0; c41_i12 < 3; c41_i12++) {
    c41_b_outputs.vectorNavLinearAcceleration[c41_i12] = ((real_T *)&((char_T *)
      chartInstance->c41_outputs)[56])[c41_i12];
  }

  for (c41_i13 = 0; c41_i13 < 3; c41_i13++) {
    c41_b_outputs.vectorNavMagneticField[c41_i13] = ((real_T *)&((char_T *)
      chartInstance->c41_outputs)[80])[c41_i13];
  }

  c41_b_outputs.vectorNavPressure = *(real_T *)&((char_T *)
    chartInstance->c41_outputs)[104];
  c41_b_outputs.vectorNavTemperature = *(real_T *)&((char_T *)
    chartInstance->c41_outputs)[112];
  for (c41_i14 = 0; c41_i14 < 10; c41_i14++) {
    c41_b_outputs.motorPosition[c41_i14] = ((real_T *)&((char_T *)
      chartInstance->c41_outputs)[120])[c41_i14];
  }

  for (c41_i15 = 0; c41_i15 < 10; c41_i15++) {
    c41_b_outputs.motorVelocity[c41_i15] = ((real_T *)&((char_T *)
      chartInstance->c41_outputs)[200])[c41_i15];
  }

  for (c41_i16 = 0; c41_i16 < 4; c41_i16++) {
    c41_b_outputs.jointPosition[c41_i16] = ((real_T *)&((char_T *)
      chartInstance->c41_outputs)[280])[c41_i16];
  }

  for (c41_i17 = 0; c41_i17 < 4; c41_i17++) {
    c41_b_outputs.jointVelocity[c41_i17] = ((real_T *)&((char_T *)
      chartInstance->c41_outputs)[312])[c41_i17];
  }

  for (c41_i18 = 0; c41_i18 < 16; c41_i18++) {
    c41_b_outputs.radio[c41_i18] = ((real_T *)&((char_T *)
      chartInstance->c41_outputs)[344])[c41_i18];
  }

  c41_b_outputs.stateOfCharge = *(real_T *)&((char_T *)
    chartInstance->c41_outputs)[472];
  c41_b_outputs.status = *(real_T *)&((char_T *)chartInstance->c41_outputs)[480];
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 25U, 25U, c41_debug_family_names,
    c41_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_qin, 0U, c41_c_sf_marshallOut,
    c41_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_Rni, 1U, c41_h_sf_marshallOut,
    c41_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_Rbi, 2U, c41_h_sf_marshallOut,
    c41_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c41_Rwn, 3U, c41_h_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_Rwi, 4U, c41_h_sf_marshallOut,
    c41_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_Rwb, 5U, c41_h_sf_marshallOut,
    c41_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_wb, 6U, c41_b_sf_marshallOut,
    c41_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_qq, 7U, c41_b_sf_marshallOut,
    c41_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_qaR, 8U, c41_g_sf_marshallOut,
    c41_f_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_qjR, 9U, c41_f_sf_marshallOut,
    c41_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_qaL, 10U, c41_g_sf_marshallOut,
    c41_f_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_qjL, 11U, c41_f_sf_marshallOut,
    c41_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_dqq, 12U, c41_b_sf_marshallOut,
    c41_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_dqaR, 13U, c41_g_sf_marshallOut,
    c41_f_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_dqjR, 14U, c41_f_sf_marshallOut,
    c41_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_dqaL, 15U, c41_g_sf_marshallOut,
    c41_f_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_dqjL, 16U, c41_f_sf_marshallOut,
    c41_e_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_nargin, 17U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_nargout, 18U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c41_b_outputs, 19U, c41_d_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_b_qwi, 20U, c41_c_sf_marshallOut,
    c41_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_b_wi, 21U, c41_b_sf_marshallOut,
    c41_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_b_ai, 22U, c41_b_sf_marshallOut,
    c41_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_b_q, 23U, c41_sf_marshallOut,
    c41_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_b_dq, 24U, c41_sf_marshallOut,
    c41_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 14);
  c41_obj = &c41_cassieOutputs;
  c41_b_obj = c41_obj;
  for (c41_i19 = 0; c41_i19 < 4; c41_i19++) {
    c41_data.vectorNavOrientation[c41_i19] = 0.0;
  }

  for (c41_i20 = 0; c41_i20 < 3; c41_i20++) {
    c41_data.vectorNavAngularVelocity[c41_i20] = 0.0;
  }

  for (c41_i21 = 0; c41_i21 < 3; c41_i21++) {
    c41_data.vectorNavLinearAcceleration[c41_i21] = 0.0;
  }

  for (c41_i22 = 0; c41_i22 < 3; c41_i22++) {
    c41_data.vectorNavMagneticField[c41_i22] = 0.0;
  }

  c41_data.vectorNavPressure = 0.0;
  c41_data.vectorNavTemperature = 0.0;
  for (c41_i23 = 0; c41_i23 < 10; c41_i23++) {
    c41_data.motorPosition[c41_i23] = 0.0;
  }

  for (c41_i24 = 0; c41_i24 < 10; c41_i24++) {
    c41_data.motorVelocity[c41_i24] = 0.0;
  }

  for (c41_i25 = 0; c41_i25 < 4; c41_i25++) {
    c41_data.jointPosition[c41_i25] = 0.0;
  }

  for (c41_i26 = 0; c41_i26 < 4; c41_i26++) {
    c41_data.jointVelocity[c41_i26] = 0.0;
  }

  for (c41_i27 = 0; c41_i27 < 16; c41_i27++) {
    c41_data.radio[c41_i27] = 0.0;
  }

  c41_data.stateOfCharge = 1.0;
  c41_data.status = 0.0;
  c41_b_obj->data = c41_data;
  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 15);
  c41_c_obj = &c41_cassieOutputs;
  c41_b_data = c41_b_outputs;
  for (c41_i28 = 0; c41_i28 < 4; c41_i28++) {
    c41_c_obj->data.vectorNavOrientation[c41_i28] =
      c41_b_data.vectorNavOrientation[c41_i28];
  }

  for (c41_i29 = 0; c41_i29 < 3; c41_i29++) {
    c41_c_obj->data.vectorNavAngularVelocity[c41_i29] =
      c41_b_data.vectorNavAngularVelocity[c41_i29];
  }

  for (c41_i30 = 0; c41_i30 < 3; c41_i30++) {
    c41_c_obj->data.vectorNavLinearAcceleration[c41_i30] =
      c41_b_data.vectorNavLinearAcceleration[c41_i30];
  }

  for (c41_i31 = 0; c41_i31 < 3; c41_i31++) {
    c41_c_obj->data.vectorNavMagneticField[c41_i31] =
      c41_b_data.vectorNavMagneticField[c41_i31];
  }

  c41_c_obj->data.vectorNavPressure = c41_b_data.vectorNavPressure;
  c41_c_obj->data.vectorNavTemperature = c41_b_data.vectorNavTemperature;
  for (c41_i32 = 0; c41_i32 < 10; c41_i32++) {
    c41_c_obj->data.motorPosition[c41_i32] = c41_b_data.motorPosition[c41_i32];
  }

  for (c41_i33 = 0; c41_i33 < 10; c41_i33++) {
    c41_c_obj->data.motorVelocity[c41_i33] = c41_b_data.motorVelocity[c41_i33];
  }

  for (c41_i34 = 0; c41_i34 < 4; c41_i34++) {
    c41_c_obj->data.jointPosition[c41_i34] = c41_b_data.jointPosition[c41_i34];
  }

  for (c41_i35 = 0; c41_i35 < 4; c41_i35++) {
    c41_c_obj->data.jointVelocity[c41_i35] = c41_b_data.jointVelocity[c41_i35];
  }

  for (c41_i36 = 0; c41_i36 < 16; c41_i36++) {
    c41_c_obj->data.radio[c41_i36] = c41_b_data.radio[c41_i36];
  }

  c41_c_obj->data.stateOfCharge = c41_b_data.stateOfCharge;
  c41_c_obj->data.status = c41_b_data.status;
  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 19);
  c41_d_obj = &c41_cassieOutputs;
  for (c41_i37 = 0; c41_i37 < 4; c41_i37++) {
    c41_e_obj[c41_i37] = c41_d_obj->data.vectorNavOrientation[c41_i37];
  }

  for (c41_i38 = 0; c41_i38 < 4; c41_i38++) {
    c41_qin[c41_i38] = c41_e_obj[c41_i38];
  }

  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 19);
  for (c41_i39 = 0; c41_i39 < 4; c41_i39++) {
    c41_b_qin[c41_i39] = c41_qin[c41_iv0[c41_i39]];
  }

  for (c41_i40 = 0; c41_i40 < 4; c41_i40++) {
    c41_qin[c41_i40] = c41_b_qin[c41_i40];
  }

  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 20);
  c41_f_obj = &c41_cassieOutputs;
  for (c41_i41 = 0; c41_i41 < 3; c41_i41++) {
    c41_g_obj[c41_i41] = c41_f_obj->data.vectorNavAngularVelocity[c41_i41];
  }

  for (c41_i42 = 0; c41_i42 < 3; c41_i42++) {
    c41_b_wi[c41_i42] = c41_g_obj[c41_i42];
  }

  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 21);
  c41_h_obj = &c41_cassieOutputs;
  for (c41_i43 = 0; c41_i43 < 3; c41_i43++) {
    c41_i_obj[c41_i43] = c41_h_obj->data.vectorNavLinearAcceleration[c41_i43];
  }

  for (c41_i44 = 0; c41_i44 < 3; c41_i44++) {
    c41_b_ai[c41_i44] = c41_i_obj[c41_i44];
  }

  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 22);
  for (c41_i45 = 0; c41_i45 < 4; c41_i45++) {
    c41_c_q[c41_i45] = c41_qin[c41_i45];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 6U, 6U, c41_c_debug_family_names,
    c41_b_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_qv, 0U, c41_b_sf_marshallOut,
    c41_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_qw, 1U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_b_nargin, 2U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_b_nargout, 3U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_c_q, 4U, c41_c_sf_marshallOut,
    c41_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_R, 5U, c41_h_sf_marshallOut,
    c41_g_sf_marshallIn);
  CV_SCRIPT_FCN(0, 0);
  _SFD_SCRIPT_CALL(0U, chartInstance->c41_sfEvent, 8);
  for (c41_i46 = 0; c41_i46 < 3; c41_i46++) {
    c41_qv[c41_i46] = c41_c_q[c41_i46];
  }

  _SFD_SCRIPT_CALL(0U, chartInstance->c41_sfEvent, 8);
  c41_qw = c41_c_q[3];
  _SFD_SCRIPT_CALL(0U, chartInstance->c41_sfEvent, 9);
  c41_a = c41_qw;
  c41_b_a = c41_a;
  c41_c_a = c41_b_a;
  c41_x = c41_c_a;
  c41_d_a = c41_x;
  c41_c = c41_d_a * c41_d_a;
  c41_p = false;
  if (c41_p) {
    c41_error(chartInstance);
  }

  c41_e_a = 2.0 * c41_c - 1.0;
  for (c41_i47 = 0; c41_i47 < 9; c41_i47++) {
    c41_y[c41_i47] = c41_e_a * c41_b[c41_i47];
  }

  for (c41_i48 = 0; c41_i48 < 3; c41_i48++) {
    c41_v[c41_i48] = c41_qv[c41_i48];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c41_b_debug_family_names,
    c41_c_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_c_nargin, 0U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_c_nargout, 1U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_v, 2U, c41_b_sf_marshallOut,
    c41_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_Ax, 3U, c41_h_sf_marshallOut,
    c41_g_sf_marshallIn);
  CV_SCRIPT_FCN(1, 0);
  _SFD_SCRIPT_CALL(1U, chartInstance->c41_sfEvent, 3);
  c41_Ax[0] = 0.0;
  c41_Ax[3] = -c41_v[2];
  c41_Ax[6] = c41_v[1];
  c41_Ax[1] = c41_v[2];
  c41_Ax[4] = 0.0;
  c41_Ax[7] = -c41_v[0];
  c41_Ax[2] = -c41_v[1];
  c41_Ax[5] = c41_v[0];
  c41_Ax[8] = 0.0;
  _SFD_SCRIPT_CALL(1U, chartInstance->c41_sfEvent, -3);
  _SFD_SYMBOL_SCOPE_POP();
  c41_f_a = 2.0 * c41_qw;
  for (c41_i49 = 0; c41_i49 < 9; c41_i49++) {
    c41_b_b[c41_i49] = c41_Ax[c41_i49];
  }

  for (c41_i50 = 0; c41_i50 < 9; c41_i50++) {
    c41_b_b[c41_i50] *= c41_f_a;
  }

  for (c41_i51 = 0; c41_i51 < 3; c41_i51++) {
    c41_g_a[c41_i51] = c41_qv[c41_i51];
  }

  for (c41_i52 = 0; c41_i52 < 3; c41_i52++) {
    c41_c_b[c41_i52] = c41_qv[c41_i52];
  }

  for (c41_i53 = 0; c41_i53 < 3; c41_i53++) {
    c41_i55 = 0;
    for (c41_i56 = 0; c41_i56 < 3; c41_i56++) {
      c41_b_y[c41_i55 + c41_i53] = c41_g_a[c41_i53] * c41_c_b[c41_i56];
      c41_i55 += 3;
    }
  }

  for (c41_i54 = 0; c41_i54 < 9; c41_i54++) {
    c41_b_y[c41_i54] *= 2.0;
  }

  for (c41_i57 = 0; c41_i57 < 9; c41_i57++) {
    c41_R[c41_i57] = (c41_y[c41_i57] - c41_b_b[c41_i57]) + c41_b_y[c41_i57];
  }

  _SFD_SCRIPT_CALL(0U, chartInstance->c41_sfEvent, -9);
  _SFD_SYMBOL_SCOPE_POP();
  c41_i58 = 0;
  for (c41_i59 = 0; c41_i59 < 3; c41_i59++) {
    c41_i60 = 0;
    for (c41_i62 = 0; c41_i62 < 3; c41_i62++) {
      c41_Rni[c41_i62 + c41_i58] = c41_R[c41_i60 + c41_i59];
      c41_i60 += 3;
    }

    c41_i58 += 3;
  }

  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 23);
  for (c41_i61 = 0; c41_i61 < 14; c41_i61++) {
    c41_var1[c41_i61] = 0.0;
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 4U, 4U, c41_d_debug_family_names,
    c41_c_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_d_nargin, 0U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_d_nargout, 1U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_var1, 2U, c41_i_sf_marshallOut,
    c41_h_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_output1, 3U, c41_h_sf_marshallOut,
    c41_g_sf_marshallIn);
  CV_SCRIPT_FCN(2, 0);
  _SFD_SCRIPT_CALL(2U, chartInstance->c41_sfEvent, 2);
  CV_SCRIPT_IF(2, 0, false);
  _SFD_SCRIPT_CALL(2U, chartInstance->c41_sfEvent, 5);
  _SFD_SCRIPT_CALL(2U, chartInstance->c41_sfEvent, 7);
  for (c41_i63 = 0; c41_i63 < 9; c41_i63++) {
    c41_output1[c41_i63] = 0.0;
  }

  _SFD_SCRIPT_CALL(2U, chartInstance->c41_sfEvent, 10);
  R_VectorNav_to_Pelvis_src(c41_output1, c41_var1);
  _SFD_SCRIPT_CALL(2U, chartInstance->c41_sfEvent, -10);
  _SFD_SYMBOL_SCOPE_POP();
  c41_i64 = 0;
  for (c41_i65 = 0; c41_i65 < 3; c41_i65++) {
    c41_i66 = 0;
    for (c41_i68 = 0; c41_i68 < 3; c41_i68++) {
      c41_Rbi[c41_i68 + c41_i64] = c41_output1[c41_i66 + c41_i65];
      c41_i66 += 3;
    }

    c41_i64 += 3;
  }

  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 24);
  for (c41_i67 = 0; c41_i67 < 9; c41_i67++) {
    c41_Rwn[c41_i67] = c41_h_a[c41_i67];
  }

  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 25);
  for (c41_i69 = 0; c41_i69 < 9; c41_i69++) {
    c41_b_b[c41_i69] = c41_Rni[c41_i69];
  }

  for (c41_i70 = 0; c41_i70 < 9; c41_i70++) {
    c41_Rwi[c41_i70] = 0.0;
  }

  for (c41_i71 = 0; c41_i71 < 3; c41_i71++) {
    c41_i72 = 0;
    for (c41_i74 = 0; c41_i74 < 3; c41_i74++) {
      c41_Rwi[c41_i72 + c41_i71] = 0.0;
      c41_i77 = 0;
      for (c41_i78 = 0; c41_i78 < 3; c41_i78++) {
        c41_Rwi[c41_i72 + c41_i71] += c41_h_a[c41_i77 + c41_i71] *
          c41_b_b[c41_i78 + c41_i72];
        c41_i77 += 3;
      }

      c41_i72 += 3;
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 26);
  for (c41_i73 = 0; c41_i73 < 9; c41_i73++) {
    c41_y[c41_i73] = c41_Rwi[c41_i73];
  }

  c41_i75 = 0;
  for (c41_i76 = 0; c41_i76 < 3; c41_i76++) {
    c41_i80 = 0;
    for (c41_i81 = 0; c41_i81 < 3; c41_i81++) {
      c41_b_b[c41_i81 + c41_i75] = c41_Rbi[c41_i80 + c41_i76];
      c41_i80 += 3;
    }

    c41_i75 += 3;
  }

  for (c41_i79 = 0; c41_i79 < 9; c41_i79++) {
    c41_Rwb[c41_i79] = 0.0;
  }

  for (c41_i82 = 0; c41_i82 < 3; c41_i82++) {
    c41_i83 = 0;
    for (c41_i85 = 0; c41_i85 < 3; c41_i85++) {
      c41_Rwb[c41_i83 + c41_i82] = 0.0;
      c41_i87 = 0;
      for (c41_i88 = 0; c41_i88 < 3; c41_i88++) {
        c41_Rwb[c41_i83 + c41_i82] += c41_y[c41_i87 + c41_i82] * c41_b_b[c41_i88
          + c41_i83];
        c41_i87 += 3;
      }

      c41_i83 += 3;
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 27);
  for (c41_i84 = 0; c41_i84 < 9; c41_i84++) {
    c41_b_Rwi[c41_i84] = c41_Rwi[c41_i84];
  }

  c41_Rotation_to_Quaternion(chartInstance, c41_b_Rwi, c41_dv5);
  for (c41_i86 = 0; c41_i86 < 4; c41_i86++) {
    c41_b_qwi[c41_i86] = c41_dv5[c41_i86];
  }

  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 33);
  for (c41_i89 = 0; c41_i89 < 9; c41_i89++) {
    c41_y[c41_i89] = c41_Rbi[c41_i89];
  }

  for (c41_i90 = 0; c41_i90 < 3; c41_i90++) {
    c41_g_a[c41_i90] = c41_b_wi[c41_i90];
  }

  for (c41_i91 = 0; c41_i91 < 3; c41_i91++) {
    c41_wb[c41_i91] = 0.0;
  }

  for (c41_i92 = 0; c41_i92 < 3; c41_i92++) {
    c41_wb[c41_i92] = 0.0;
    c41_i94 = 0;
    for (c41_i95 = 0; c41_i95 < 3; c41_i95++) {
      c41_wb[c41_i92] += c41_y[c41_i94 + c41_i92] * c41_g_a[c41_i95];
      c41_i94 += 3;
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 36);
  for (c41_i93 = 0; c41_i93 < 9; c41_i93++) {
    c41_b_R[c41_i93] = c41_Rwb[c41_i93];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 7U, 7U, c41_f_debug_family_names,
    c41_d_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_qx, 0U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_qy, 1U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_qz, 2U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_e_nargin, 3U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_e_nargout, 4U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_b_R, 5U, c41_h_sf_marshallOut,
    c41_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_qq, 6U, c41_b_sf_marshallOut,
    c41_b_sf_marshallIn);
  CV_SCRIPT_FCN(5, 0);
  _SFD_SCRIPT_CALL(5U, chartInstance->c41_sfEvent, 9);
  if (CV_SCRIPT_IF(5, 0, CV_RELATIONAL_EVAL(14U, 5U, 0, c41_b_R[2], 1.0, -1, 2U,
        c41_b_R[2] < 1.0))) {
    _SFD_SCRIPT_CALL(5U, chartInstance->c41_sfEvent, 10);
    if (CV_SCRIPT_IF(5, 1, CV_RELATIONAL_EVAL(14U, 5U, 1, c41_b_R[2], -1.0, -1,
          4U, c41_b_R[2] > -1.0))) {
      _SFD_SCRIPT_CALL(5U, chartInstance->c41_sfEvent, 12);
      c41_c_y = c41_b_R[5];
      c41_b_x = c41_b_R[8];
      c41_c_x = c41_c_y;
      c41_e_y = c41_b_x;
      c41_g_y = c41_c_x;
      c41_g_x = c41_e_y;
      c41_qx = muDoubleScalarAtan2(c41_g_y, c41_g_x);
      _SFD_SCRIPT_CALL(5U, chartInstance->c41_sfEvent, 13);
      c41_j_x = -c41_b_R[2];
      c41_qy = c41_j_x;
      c41_l_x = c41_qy;
      c41_b0 = (c41_l_x < -1.0);
      c41_b1 = (c41_l_x > 1.0);
      c41_b_p = (c41_b0 || c41_b1);
      c41_c_p = c41_b_p;
      if (c41_c_p) {
        c41_c_error(chartInstance);
      }

      c41_m_x = c41_qy;
      c41_qy = c41_m_x;
      c41_n_x = c41_qy;
      c41_qy = c41_n_x;
      c41_qy = muDoubleScalarAsin(c41_qy);
      _SFD_SCRIPT_CALL(5U, chartInstance->c41_sfEvent, 14);
      c41_l_y = c41_b_R[1];
      c41_o_x = c41_b_R[0];
      c41_p_x = c41_l_y;
      c41_m_y = c41_o_x;
      c41_n_y = c41_p_x;
      c41_q_x = c41_m_y;
      c41_qz = muDoubleScalarAtan2(c41_n_y, c41_q_x);
    } else {
      _SFD_SCRIPT_CALL(5U, chartInstance->c41_sfEvent, 17);
      c41_qx = 0.0;
      _SFD_SCRIPT_CALL(5U, chartInstance->c41_sfEvent, 18);
      c41_qy = 1.5707963267948966;
      _SFD_SCRIPT_CALL(5U, chartInstance->c41_sfEvent, 19);
      c41_f_y = -c41_b_R[7];
      c41_f_x = c41_b_R[4];
      c41_h_x = c41_f_y;
      c41_j_y = c41_f_x;
      c41_k_y = c41_h_x;
      c41_k_x = c41_j_y;
      c41_r = muDoubleScalarAtan2(c41_k_y, c41_k_x);
      c41_qz = -c41_r;
    }
  } else {
    _SFD_SCRIPT_CALL(5U, chartInstance->c41_sfEvent, 23);
    c41_qx = 0.0;
    _SFD_SCRIPT_CALL(5U, chartInstance->c41_sfEvent, 24);
    c41_qy = -1.5707963267948966;
    _SFD_SCRIPT_CALL(5U, chartInstance->c41_sfEvent, 25);
    c41_d_y = -c41_b_R[7];
    c41_d_x = c41_b_R[4];
    c41_e_x = c41_d_y;
    c41_h_y = c41_d_x;
    c41_i_y = c41_e_x;
    c41_i_x = c41_h_y;
    c41_qz = muDoubleScalarAtan2(c41_i_y, c41_i_x);
  }

  _SFD_SCRIPT_CALL(5U, chartInstance->c41_sfEvent, 28);
  c41_qq[0] = c41_qz;
  c41_qq[1] = c41_qy;
  c41_qq[2] = c41_qx;
  _SFD_SCRIPT_CALL(5U, chartInstance->c41_sfEvent, -28);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 37);
  c41_j_obj = &c41_cassieOutputs;
  for (c41_i96 = 0; c41_i96 < 5; c41_i96++) {
    c41_k_obj[c41_i96] = c41_j_obj->data.motorPosition[c41_i96 + 5];
  }

  for (c41_i97 = 0; c41_i97 < 5; c41_i97++) {
    c41_qaR[c41_i97] = c41_k_obj[c41_i97];
  }

  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 38);
  c41_l_obj = &c41_cassieOutputs;
  for (c41_i98 = 0; c41_i98 < 2; c41_i98++) {
    c41_m_obj[c41_i98] = c41_l_obj->data.jointPosition[c41_i98 + 2];
  }

  for (c41_i99 = 0; c41_i99 < 2; c41_i99++) {
    c41_qjR[c41_i99] = c41_m_obj[c41_i99];
  }

  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 39);
  c41_n_obj = &c41_cassieOutputs;
  for (c41_i100 = 0; c41_i100 < 5; c41_i100++) {
    c41_o_obj[c41_i100] = c41_n_obj->data.motorPosition[c41_i100];
  }

  for (c41_i101 = 0; c41_i101 < 5; c41_i101++) {
    c41_qaL[c41_i101] = c41_o_obj[c41_i101];
  }

  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 40);
  c41_p_obj = &c41_cassieOutputs;
  for (c41_i102 = 0; c41_i102 < 2; c41_i102++) {
    c41_q_obj[c41_i102] = c41_p_obj->data.jointPosition[c41_i102];
  }

  for (c41_i103 = 0; c41_i103 < 2; c41_i103++) {
    c41_qjL[c41_i103] = c41_q_obj[c41_i103];
  }

  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 43);
  for (c41_i104 = 0; c41_i104 < 3; c41_i104++) {
    c41_in1[c41_i104] = c41_qq[c41_i104];
  }

  for (c41_i105 = 0; c41_i105 < 3; c41_i105++) {
    c41_in2[c41_i105] = c41_wb[c41_i105];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 15U, 15U, c41_g_debug_family_names,
    c41_e_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_b_qx, 0U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_b_qy, 1U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_wx, 2U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_wy, 3U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_wz, 4U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_t2, 5U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_t3, 6U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_t4, 7U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_t5, 8U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_t6, 9U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_f_nargin, 10U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_f_nargout, 11U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_in1, 12U, c41_b_sf_marshallOut,
    c41_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_in2, 13U, c41_b_sf_marshallOut,
    c41_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_dqq, 14U, c41_b_sf_marshallOut,
    c41_b_sf_marshallIn);
  CV_SCRIPT_FCN(6, 0);
  _SFD_SCRIPT_CALL(6U, chartInstance->c41_sfEvent, 8);
  c41_b_qx = c41_in1[2];
  _SFD_SCRIPT_CALL(6U, chartInstance->c41_sfEvent, 9);
  c41_b_qy = c41_in1[1];
  _SFD_SCRIPT_CALL(6U, chartInstance->c41_sfEvent, 10);
  c41_wx = c41_in2[0];
  _SFD_SCRIPT_CALL(6U, chartInstance->c41_sfEvent, 11);
  c41_wy = c41_in2[1];
  _SFD_SCRIPT_CALL(6U, chartInstance->c41_sfEvent, 12);
  c41_wz = c41_in2[2];
  _SFD_SCRIPT_CALL(6U, chartInstance->c41_sfEvent, 13);
  c41_r_x = c41_b_qx;
  c41_t2 = c41_r_x;
  c41_s_x = c41_t2;
  c41_t2 = c41_s_x;
  c41_t_x = c41_t2;
  c41_t2 = c41_t_x;
  c41_t2 = muDoubleScalarCos(c41_t2);
  _SFD_SCRIPT_CALL(6U, chartInstance->c41_sfEvent, 14);
  c41_u_x = c41_b_qx;
  c41_t3 = c41_u_x;
  c41_v_x = c41_t3;
  c41_t3 = c41_v_x;
  c41_w_x = c41_t3;
  c41_t3 = c41_w_x;
  c41_t3 = muDoubleScalarSin(c41_t3);
  _SFD_SCRIPT_CALL(6U, chartInstance->c41_sfEvent, 15);
  c41_x_x = c41_b_qy;
  c41_t4 = c41_x_x;
  c41_y_x = c41_t4;
  c41_t4 = c41_y_x;
  c41_ab_x = c41_t4;
  c41_t4 = c41_ab_x;
  c41_t4 = muDoubleScalarCos(c41_t4);
  _SFD_SCRIPT_CALL(6U, chartInstance->c41_sfEvent, 16);
  c41_o_y = c41_t4;
  c41_p_y = c41_o_y;
  c41_t5 = 1.0 / c41_p_y;
  _SFD_SCRIPT_CALL(6U, chartInstance->c41_sfEvent, 17);
  c41_bb_x = c41_b_qy;
  c41_t6 = c41_bb_x;
  c41_cb_x = c41_t6;
  c41_t6 = c41_cb_x;
  c41_db_x = c41_t6;
  c41_t6 = c41_db_x;
  c41_t6 = muDoubleScalarSin(c41_t6);
  _SFD_SCRIPT_CALL(6U, chartInstance->c41_sfEvent, 18);
  c41_dqq[0] = c41_t5 * (c41_t3 * c41_wy + c41_t2 * c41_wz);
  c41_dqq[1] = c41_t2 * c41_wy - c41_t3 * c41_wz;
  c41_dqq[2] = c41_t5 * ((c41_t4 * c41_wx + c41_t3 * c41_t6 * c41_wy) + c41_t2 *
    c41_t6 * c41_wz);
  _SFD_SCRIPT_CALL(6U, chartInstance->c41_sfEvent, -18);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 44);
  c41_r_obj = &c41_cassieOutputs;
  for (c41_i106 = 0; c41_i106 < 5; c41_i106++) {
    c41_s_obj[c41_i106] = c41_r_obj->data.motorVelocity[c41_i106 + 5];
  }

  for (c41_i107 = 0; c41_i107 < 5; c41_i107++) {
    c41_dqaR[c41_i107] = c41_s_obj[c41_i107];
  }

  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 45);
  c41_t_obj = &c41_cassieOutputs;
  for (c41_i108 = 0; c41_i108 < 2; c41_i108++) {
    c41_u_obj[c41_i108] = c41_t_obj->data.jointVelocity[c41_i108 + 2];
  }

  for (c41_i109 = 0; c41_i109 < 2; c41_i109++) {
    c41_dqjR[c41_i109] = c41_u_obj[c41_i109];
  }

  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 46);
  c41_v_obj = &c41_cassieOutputs;
  for (c41_i110 = 0; c41_i110 < 5; c41_i110++) {
    c41_w_obj[c41_i110] = c41_v_obj->data.motorVelocity[c41_i110];
  }

  for (c41_i111 = 0; c41_i111 < 5; c41_i111++) {
    c41_dqaL[c41_i111] = c41_w_obj[c41_i111];
  }

  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 47);
  c41_x_obj = &c41_cassieOutputs;
  for (c41_i112 = 0; c41_i112 < 2; c41_i112++) {
    c41_y_obj[c41_i112] = c41_x_obj->data.jointVelocity[c41_i112];
  }

  for (c41_i113 = 0; c41_i113 < 2; c41_i113++) {
    c41_dqjL[c41_i113] = c41_y_obj[c41_i113];
  }

  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 50);
  for (c41_i114 = 0; c41_i114 < 3; c41_i114++) {
    c41_b_q[c41_i114] = 0.0;
  }

  for (c41_i115 = 0; c41_i115 < 3; c41_i115++) {
    c41_b_q[c41_i115 + 3] = c41_qq[c41_i115];
  }

  for (c41_i116 = 0; c41_i116 < 3; c41_i116++) {
    c41_b_q[c41_i116 + 6] = c41_qaL[c41_i116];
  }

  c41_b_q[9] = c41_qaL[3];
  c41_b_q[10] = c41_qjL[0];
  c41_b_q[11] = c41_qjL[1];
  c41_b_q[12] = c41_qaL[4];
  for (c41_i117 = 0; c41_i117 < 3; c41_i117++) {
    c41_b_q[c41_i117 + 13] = c41_qaR[c41_i117];
  }

  c41_b_q[16] = c41_qaR[3];
  c41_b_q[17] = c41_qjR[0];
  c41_b_q[18] = c41_qjR[1];
  c41_b_q[19] = c41_qaR[4];
  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, 51);
  for (c41_i118 = 0; c41_i118 < 3; c41_i118++) {
    c41_b_dq[c41_i118] = 0.0;
  }

  for (c41_i119 = 0; c41_i119 < 3; c41_i119++) {
    c41_b_dq[c41_i119 + 3] = c41_dqq[c41_i119];
  }

  for (c41_i120 = 0; c41_i120 < 3; c41_i120++) {
    c41_b_dq[c41_i120 + 6] = c41_dqaL[c41_i120];
  }

  c41_b_dq[9] = c41_dqaL[3];
  c41_b_dq[10] = c41_dqjL[0];
  c41_b_dq[11] = c41_dqjL[1];
  c41_b_dq[12] = c41_dqaL[4];
  for (c41_i121 = 0; c41_i121 < 3; c41_i121++) {
    c41_b_dq[c41_i121 + 13] = c41_dqaR[c41_i121];
  }

  c41_b_dq[16] = c41_dqaR[3];
  c41_b_dq[17] = c41_dqjR[0];
  c41_b_dq[18] = c41_dqjR[1];
  c41_b_dq[19] = c41_dqaR[4];
  _SFD_EML_CALL(0U, chartInstance->c41_sfEvent, -51);
  _SFD_SYMBOL_SCOPE_POP();
  for (c41_i122 = 0; c41_i122 < 4; c41_i122++) {
    (*chartInstance->c41_qwi)[c41_i122] = c41_b_qwi[c41_i122];
  }

  for (c41_i123 = 0; c41_i123 < 3; c41_i123++) {
    (*chartInstance->c41_wi)[c41_i123] = c41_b_wi[c41_i123];
  }

  for (c41_i124 = 0; c41_i124 < 3; c41_i124++) {
    (*chartInstance->c41_ai)[c41_i124] = c41_b_ai[c41_i124];
  }

  for (c41_i125 = 0; c41_i125 < 20; c41_i125++) {
    (*chartInstance->c41_q)[c41_i125] = c41_b_q[c41_i125];
  }

  for (c41_i126 = 0; c41_i126 < 20; c41_i126++) {
    (*chartInstance->c41_dq)[c41_i126] = c41_b_dq[c41_i126];
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c41_sfEvent);
}

static void initSimStructsc41_StateEstimation
  (SFc41_StateEstimationInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c41_Rotation_to_Quaternion(SFc41_StateEstimationInstanceStruct
  *chartInstance, real_T c41_R[9], real_T c41_b_q[4])
{
  uint32_T c41_debug_family_var_map[13];
  real_T c41_a1;
  real_T c41_a2;
  real_T c41_a3;
  real_T c41_a4;
  real_T c41_max_a;
  real_T c41_qx;
  real_T c41_qy;
  real_T c41_qz;
  real_T c41_qw;
  real_T c41_nargin = 1.0;
  real_T c41_nargout = 1.0;
  real_T c41_b_a1[4];
  real_T c41_varargin_1[4];
  int32_T c41_ixstart;
  real_T c41_mtmp;
  real_T c41_x;
  boolean_T c41_foundnan;
  int32_T c41_ix;
  int32_T c41_i127;
  boolean_T c41_overflow;
  real_T c41_b_x;
  real_T c41_switch_expression;
  boolean_T c41_b;
  real_T c41_b_varargin_1;
  int32_T c41_b_ix;
  real_T c41_varargin_2;
  real_T c41_varargin_3;
  real_T c41_varargin_4;
  real_T c41_a;
  real_T c41_b_switch_expression;
  real_T c41_b_b;
  real_T c41_case_expression;
  boolean_T c41_p;
  boolean_T c41_result;
  real_T c41_c_switch_expression;
  real_T c41_index;
  real_T c41_b_case_expression;
  boolean_T c41_b_result;
  real_T c41_d_switch_expression;
  real_T c41_c_case_expression;
  boolean_T c41_c_result;
  const mxArray *c41_y = NULL;
  real_T c41_c_x;
  real_T c41_d_x;
  real_T c41_e_x;
  real_T c41_f_x;
  static char_T c41_c_varargin_1[47] = { 'E', 'r', 'r', 'o', 'r', ' ', 'c', 'o',
    'm', 'p', 'u', 't', 'i', 'n', 'g', ' ', 'q', 'u', 'a', 't', 'e', 'r', 'n',
    'i', 'o', 'n', ' ', 'f', 'r', 'o', 'm', ' ', 'r', 'o', 't', 'a', 't', 'i',
    'o', 'n', ' ', 'm', 'a', 't', 'r', 'i', 'x' };

  real_T c41_g_x;
  real_T c41_h_x;
  real_T c41_i_x;
  real_T c41_e_switch_expression;
  real_T c41_j_x;
  real_T c41_k_x;
  real_T c41_l_x;
  real_T c41_m_x;
  real_T c41_d_case_expression;
  boolean_T c41_b_p;
  boolean_T c41_c_p;
  boolean_T c41_d_p;
  boolean_T c41_e_p;
  boolean_T c41_d_result;
  boolean_T c41_f_p;
  boolean_T c41_g_p;
  boolean_T c41_h_p;
  boolean_T c41_i_p;
  real_T c41_n_x;
  real_T c41_A;
  real_T c41_b_A;
  real_T c41_c_A;
  real_T c41_B;
  real_T c41_o_x;
  real_T c41_b_B;
  real_T c41_c_B;
  real_T c41_p_x;
  real_T c41_q_x;
  real_T c41_r_x;
  real_T c41_b_y;
  real_T c41_c_y;
  real_T c41_d_y;
  int32_T c41_i128;
  real_T c41_s_x;
  real_T c41_t_x;
  real_T c41_u_x;
  real_T c41_e_y;
  real_T c41_v_x;
  real_T c41_f_y;
  real_T c41_g_y;
  real_T c41_w_x;
  real_T c41_x_x;
  real_T c41_y_x;
  boolean_T c41_j_p;
  real_T c41_ab_x;
  real_T c41_bb_x;
  real_T c41_cb_x;
  boolean_T c41_k_p;
  real_T c41_db_x;
  real_T c41_eb_x;
  real_T c41_fb_x;
  real_T c41_gb_x;
  boolean_T c41_l_p;
  boolean_T c41_m_p;
  boolean_T c41_n_p;
  boolean_T c41_o_p;
  boolean_T c41_p_p;
  boolean_T c41_q_p;
  real_T c41_d_A;
  real_T c41_d_B;
  real_T c41_hb_x;
  real_T c41_ib_x;
  real_T c41_e_A;
  real_T c41_h_y;
  real_T c41_f_A;
  real_T c41_e_B;
  real_T c41_jb_x;
  real_T c41_kb_x;
  real_T c41_f_B;
  real_T c41_lb_x;
  real_T c41_i_y;
  real_T c41_mb_x;
  real_T c41_j_y;
  real_T c41_k_y;
  real_T c41_nb_x;
  real_T c41_ob_x;
  real_T c41_l_y;
  real_T c41_pb_x;
  real_T c41_qb_x;
  real_T c41_m_y;
  real_T c41_rb_x;
  real_T c41_sb_x;
  real_T c41_tb_x;
  real_T c41_ub_x;
  real_T c41_vb_x;
  boolean_T c41_r_p;
  boolean_T c41_s_p;
  real_T c41_wb_x;
  real_T c41_xb_x;
  boolean_T c41_t_p;
  boolean_T c41_u_p;
  real_T c41_yb_x;
  real_T c41_ac_x;
  boolean_T c41_v_p;
  boolean_T c41_w_p;
  boolean_T c41_x_p;
  boolean_T c41_y_p;
  real_T c41_g_A;
  real_T c41_h_A;
  real_T c41_g_B;
  real_T c41_h_B;
  real_T c41_bc_x;
  real_T c41_cc_x;
  real_T c41_dc_x;
  real_T c41_i_A;
  real_T c41_n_y;
  real_T c41_o_y;
  real_T c41_i_B;
  real_T c41_ec_x;
  real_T c41_fc_x;
  real_T c41_gc_x;
  real_T c41_hc_x;
  real_T c41_p_y;
  real_T c41_q_y;
  real_T c41_r_y;
  real_T c41_ic_x;
  real_T c41_s_y;
  real_T c41_jc_x;
  real_T c41_kc_x;
  real_T c41_lc_x;
  real_T c41_mc_x;
  real_T c41_nc_x;
  real_T c41_oc_x;
  real_T c41_pc_x;
  real_T c41_qc_x;
  real_T c41_rc_x;
  real_T c41_sc_x;
  boolean_T c41_ab_p;
  boolean_T c41_bb_p;
  boolean_T c41_cb_p;
  boolean_T c41_db_p;
  boolean_T c41_eb_p;
  boolean_T c41_fb_p;
  real_T c41_tc_x;
  boolean_T c41_gb_p;
  boolean_T c41_hb_p;
  real_T c41_j_A;
  real_T c41_k_A;
  real_T c41_l_A;
  real_T c41_j_B;
  real_T c41_k_B;
  real_T c41_l_B;
  real_T c41_uc_x;
  real_T c41_vc_x;
  real_T c41_wc_x;
  real_T c41_xc_x;
  real_T c41_t_y;
  real_T c41_u_y;
  real_T c41_v_y;
  real_T c41_yc_x;
  real_T c41_ad_x;
  real_T c41_bd_x;
  real_T c41_cd_x;
  real_T c41_w_y;
  real_T c41_x_y;
  real_T c41_y_y;
  boolean_T exitg1;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 13U, 13U, c41_e_debug_family_names,
    c41_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_a1, 0U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_a2, 1U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_a3, 2U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_a4, 3U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_max_a, 4U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_qx, 5U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_qy, 6U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_qz, 7U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_qw, 8U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_nargin, 9U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c41_nargout, 10U, c41_e_sf_marshallOut,
    c41_d_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_R, 11U, c41_h_sf_marshallOut,
    c41_g_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c41_b_q, 12U, c41_c_sf_marshallOut,
    c41_c_sf_marshallIn);
  CV_SCRIPT_FCN(4, 0);
  _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 10);
  c41_a1 = 0.25 * (((1.0 + c41_R[0]) + c41_R[4]) + c41_R[8]);
  _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 11);
  c41_a2 = 0.25 * (((1.0 + c41_R[0]) - c41_R[4]) - c41_R[8]);
  _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 12);
  c41_a3 = 0.25 * (((1.0 - c41_R[0]) + c41_R[4]) - c41_R[8]);
  _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 13);
  c41_a4 = 0.25 * (((1.0 - c41_R[0]) - c41_R[4]) + c41_R[8]);
  _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 15);
  c41_b_a1[0] = c41_a1;
  c41_b_a1[1] = c41_a2;
  c41_b_a1[2] = c41_a3;
  c41_b_a1[3] = c41_a4;
  c41_abs(chartInstance, c41_b_a1, c41_varargin_1);
  c41_ixstart = 1;
  c41_mtmp = c41_varargin_1[0];
  c41_x = c41_mtmp;
  c41_foundnan = muDoubleScalarIsNaN(c41_x);
  if (c41_foundnan) {
    c41_ix = 1;
    exitg1 = false;
    while ((!exitg1) && (c41_ix + 1 < 5)) {
      c41_ixstart = c41_ix + 1;
      c41_b_x = c41_varargin_1[c41_ix];
      c41_b = muDoubleScalarIsNaN(c41_b_x);
      if (!c41_b) {
        c41_mtmp = c41_varargin_1[c41_ix];
        exitg1 = true;
      } else {
        c41_ix++;
      }
    }
  }

  if (c41_ixstart < 4) {
    c41_i127 = c41_ixstart;
    c41_overflow = false;
    if (c41_overflow) {
      c41_check_forloop_overflow_error(chartInstance, c41_overflow);
    }

    for (c41_b_ix = c41_i127; c41_b_ix + 1 < 5; c41_b_ix++) {
      c41_a = c41_varargin_1[c41_b_ix];
      c41_b_b = c41_mtmp;
      c41_p = (c41_a > c41_b_b);
      if (c41_p) {
        c41_mtmp = c41_varargin_1[c41_b_ix];
      }
    }
  }

  c41_max_a = c41_mtmp;
  _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 18);
  c41_switch_expression = c41_max_a;
  c41_b_varargin_1 = c41_a1;
  c41_varargin_2 = c41_a2;
  c41_varargin_3 = c41_a3;
  c41_varargin_4 = c41_a4;
  c41_b_switch_expression = c41_switch_expression;
  c41_case_expression = c41_b_varargin_1;
  c41_result = (c41_case_expression == c41_b_switch_expression);
  if (c41_result) {
    c41_index = 0.0;
  } else {
    c41_c_switch_expression = c41_switch_expression;
    c41_b_case_expression = c41_varargin_2;
    c41_b_result = (c41_b_case_expression == c41_c_switch_expression);
    if (c41_b_result) {
      c41_index = 1.0;
    } else {
      c41_d_switch_expression = c41_switch_expression;
      c41_c_case_expression = c41_varargin_3;
      c41_c_result = (c41_c_case_expression == c41_d_switch_expression);
      if (c41_c_result) {
        c41_index = 2.0;
      } else {
        c41_e_switch_expression = c41_switch_expression;
        c41_d_case_expression = c41_varargin_4;
        c41_d_result = (c41_d_case_expression == c41_e_switch_expression);
        if (c41_d_result) {
          c41_index = 3.0;
        } else {
          c41_index = -1.0;
        }
      }
    }
  }

  switch ((int32_T)sf_integer_check(chartInstance->S, 0U, 0U, 0U, c41_index)) {
   case 0:
    CV_SCRIPT_SWITCH(4, 0, 1);
    _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 20);
    c41_c_x = c41_a1;
    c41_g_x = c41_c_x;
    c41_j_x = c41_g_x;
    c41_b_p = (c41_j_x < 0.0);
    c41_f_p = c41_b_p;
    if (c41_f_p) {
      c41_b_error(chartInstance);
    }

    c41_g_x = muDoubleScalarSqrt(c41_g_x);
    c41_A = 0.25 * (c41_R[7] - c41_R[5]);
    c41_B = c41_g_x;
    c41_p_x = c41_A;
    c41_b_y = c41_B;
    c41_s_x = c41_p_x;
    c41_e_y = c41_b_y;
    c41_qx = c41_s_x / c41_e_y;
    _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 21);
    c41_y_x = c41_a1;
    c41_cb_x = c41_y_x;
    c41_eb_x = c41_cb_x;
    c41_l_p = (c41_eb_x < 0.0);
    c41_o_p = c41_l_p;
    if (c41_o_p) {
      c41_b_error(chartInstance);
    }

    c41_cb_x = muDoubleScalarSqrt(c41_cb_x);
    c41_e_A = 0.25 * (c41_R[2] - c41_R[6]);
    c41_e_B = c41_cb_x;
    c41_lb_x = c41_e_A;
    c41_j_y = c41_e_B;
    c41_nb_x = c41_lb_x;
    c41_l_y = c41_j_y;
    c41_qy = c41_nb_x / c41_l_y;
    _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 22);
    c41_vb_x = c41_a1;
    c41_xb_x = c41_vb_x;
    c41_yb_x = c41_xb_x;
    c41_v_p = (c41_yb_x < 0.0);
    c41_x_p = c41_v_p;
    if (c41_x_p) {
      c41_b_error(chartInstance);
    }

    c41_xb_x = muDoubleScalarSqrt(c41_xb_x);
    c41_i_A = 0.25 * (c41_R[3] - c41_R[1]);
    c41_i_B = c41_xb_x;
    c41_hc_x = c41_i_A;
    c41_r_y = c41_i_B;
    c41_ic_x = c41_hc_x;
    c41_s_y = c41_r_y;
    c41_qz = c41_ic_x / c41_s_y;
    _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 23);
    c41_sc_x = c41_a1;
    c41_qw = c41_sc_x;
    c41_tc_x = c41_qw;
    c41_gb_p = (c41_tc_x < 0.0);
    c41_hb_p = c41_gb_p;
    if (c41_hb_p) {
      c41_b_error(chartInstance);
    }

    c41_uc_x = c41_qw;
    c41_qw = c41_uc_x;
    c41_yc_x = c41_qw;
    c41_qw = c41_yc_x;
    c41_qw = muDoubleScalarSqrt(c41_qw);
    break;

   case 1:
    CV_SCRIPT_SWITCH(4, 0, 2);
    _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 25);
    c41_d_x = c41_a2;
    c41_qx = c41_d_x;
    c41_k_x = c41_qx;
    c41_c_p = (c41_k_x < 0.0);
    c41_g_p = c41_c_p;
    if (c41_g_p) {
      c41_b_error(chartInstance);
    }

    c41_n_x = c41_qx;
    c41_qx = c41_n_x;
    c41_o_x = c41_qx;
    c41_qx = c41_o_x;
    c41_qx = muDoubleScalarSqrt(c41_qx);
    _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 26);
    c41_v_x = c41_a2;
    c41_w_x = c41_v_x;
    c41_x_x = c41_w_x;
    c41_j_p = (c41_x_x < 0.0);
    c41_k_p = c41_j_p;
    if (c41_k_p) {
      c41_b_error(chartInstance);
    }

    c41_w_x = muDoubleScalarSqrt(c41_w_x);
    c41_d_A = 0.25 * (c41_R[3] + c41_R[1]);
    c41_d_B = c41_w_x;
    c41_hb_x = c41_d_A;
    c41_h_y = c41_d_B;
    c41_jb_x = c41_hb_x;
    c41_i_y = c41_h_y;
    c41_qy = c41_jb_x / c41_i_y;
    _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 27);
    c41_pb_x = c41_a2;
    c41_rb_x = c41_pb_x;
    c41_tb_x = c41_rb_x;
    c41_r_p = (c41_tb_x < 0.0);
    c41_t_p = c41_r_p;
    if (c41_t_p) {
      c41_b_error(chartInstance);
    }

    c41_rb_x = muDoubleScalarSqrt(c41_rb_x);
    c41_g_A = 0.25 * (c41_R[6] + c41_R[2]);
    c41_g_B = c41_rb_x;
    c41_bc_x = c41_g_A;
    c41_n_y = c41_g_B;
    c41_ec_x = c41_bc_x;
    c41_p_y = c41_n_y;
    c41_qz = c41_ec_x / c41_p_y;
    _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 28);
    c41_jc_x = c41_a2;
    c41_mc_x = c41_jc_x;
    c41_pc_x = c41_mc_x;
    c41_ab_p = (c41_pc_x < 0.0);
    c41_db_p = c41_ab_p;
    if (c41_db_p) {
      c41_b_error(chartInstance);
    }

    c41_mc_x = muDoubleScalarSqrt(c41_mc_x);
    c41_j_A = 0.25 * (c41_R[7] - c41_R[5]);
    c41_j_B = c41_mc_x;
    c41_vc_x = c41_j_A;
    c41_t_y = c41_j_B;
    c41_ad_x = c41_vc_x;
    c41_w_y = c41_t_y;
    c41_qw = c41_ad_x / c41_w_y;
    break;

   case 2:
    CV_SCRIPT_SWITCH(4, 0, 3);
    _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 30);
    c41_e_x = c41_a3;
    c41_h_x = c41_e_x;
    c41_l_x = c41_h_x;
    c41_d_p = (c41_l_x < 0.0);
    c41_h_p = c41_d_p;
    if (c41_h_p) {
      c41_b_error(chartInstance);
    }

    c41_h_x = muDoubleScalarSqrt(c41_h_x);
    c41_b_A = 0.25 * (c41_R[1] + c41_R[3]);
    c41_b_B = c41_h_x;
    c41_q_x = c41_b_A;
    c41_c_y = c41_b_B;
    c41_t_x = c41_q_x;
    c41_f_y = c41_c_y;
    c41_qx = c41_t_x / c41_f_y;
    _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 31);
    c41_ab_x = c41_a3;
    c41_qy = c41_ab_x;
    c41_fb_x = c41_qy;
    c41_m_p = (c41_fb_x < 0.0);
    c41_p_p = c41_m_p;
    if (c41_p_p) {
      c41_b_error(chartInstance);
    }

    c41_ib_x = c41_qy;
    c41_qy = c41_ib_x;
    c41_kb_x = c41_qy;
    c41_qy = c41_kb_x;
    c41_qy = muDoubleScalarSqrt(c41_qy);
    _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 32);
    c41_qb_x = c41_a3;
    c41_sb_x = c41_qb_x;
    c41_ub_x = c41_sb_x;
    c41_s_p = (c41_ub_x < 0.0);
    c41_u_p = c41_s_p;
    if (c41_u_p) {
      c41_b_error(chartInstance);
    }

    c41_sb_x = muDoubleScalarSqrt(c41_sb_x);
    c41_h_A = 0.25 * (c41_R[7] + c41_R[5]);
    c41_h_B = c41_sb_x;
    c41_cc_x = c41_h_A;
    c41_o_y = c41_h_B;
    c41_fc_x = c41_cc_x;
    c41_q_y = c41_o_y;
    c41_qz = c41_fc_x / c41_q_y;
    _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 33);
    c41_kc_x = c41_a3;
    c41_nc_x = c41_kc_x;
    c41_qc_x = c41_nc_x;
    c41_bb_p = (c41_qc_x < 0.0);
    c41_eb_p = c41_bb_p;
    if (c41_eb_p) {
      c41_b_error(chartInstance);
    }

    c41_nc_x = muDoubleScalarSqrt(c41_nc_x);
    c41_k_A = 0.25 * (c41_R[2] - c41_R[6]);
    c41_k_B = c41_nc_x;
    c41_wc_x = c41_k_A;
    c41_u_y = c41_k_B;
    c41_bd_x = c41_wc_x;
    c41_x_y = c41_u_y;
    c41_qw = c41_bd_x / c41_x_y;
    break;

   case 3:
    CV_SCRIPT_SWITCH(4, 0, 4);
    _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 35);
    c41_f_x = c41_a4;
    c41_i_x = c41_f_x;
    c41_m_x = c41_i_x;
    c41_e_p = (c41_m_x < 0.0);
    c41_i_p = c41_e_p;
    if (c41_i_p) {
      c41_b_error(chartInstance);
    }

    c41_i_x = muDoubleScalarSqrt(c41_i_x);
    c41_c_A = 0.25 * (c41_R[2] + c41_R[6]);
    c41_c_B = c41_i_x;
    c41_r_x = c41_c_A;
    c41_d_y = c41_c_B;
    c41_u_x = c41_r_x;
    c41_g_y = c41_d_y;
    c41_qx = c41_u_x / c41_g_y;
    _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 36);
    c41_bb_x = c41_a4;
    c41_db_x = c41_bb_x;
    c41_gb_x = c41_db_x;
    c41_n_p = (c41_gb_x < 0.0);
    c41_q_p = c41_n_p;
    if (c41_q_p) {
      c41_b_error(chartInstance);
    }

    c41_db_x = muDoubleScalarSqrt(c41_db_x);
    c41_f_A = 0.25 * (c41_R[5] + c41_R[7]);
    c41_f_B = c41_db_x;
    c41_mb_x = c41_f_A;
    c41_k_y = c41_f_B;
    c41_ob_x = c41_mb_x;
    c41_m_y = c41_k_y;
    c41_qy = c41_ob_x / c41_m_y;
    _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 37);
    c41_wb_x = c41_a4;
    c41_qz = c41_wb_x;
    c41_ac_x = c41_qz;
    c41_w_p = (c41_ac_x < 0.0);
    c41_y_p = c41_w_p;
    if (c41_y_p) {
      c41_b_error(chartInstance);
    }

    c41_dc_x = c41_qz;
    c41_qz = c41_dc_x;
    c41_gc_x = c41_qz;
    c41_qz = c41_gc_x;
    c41_qz = muDoubleScalarSqrt(c41_qz);
    _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 38);
    c41_lc_x = c41_a4;
    c41_oc_x = c41_lc_x;
    c41_rc_x = c41_oc_x;
    c41_cb_p = (c41_rc_x < 0.0);
    c41_fb_p = c41_cb_p;
    if (c41_fb_p) {
      c41_b_error(chartInstance);
    }

    c41_oc_x = muDoubleScalarSqrt(c41_oc_x);
    c41_l_A = 0.25 * (c41_R[3] - c41_R[1]);
    c41_l_B = c41_oc_x;
    c41_xc_x = c41_l_A;
    c41_v_y = c41_l_B;
    c41_cd_x = c41_xc_x;
    c41_y_y = c41_v_y;
    c41_qw = c41_cd_x / c41_y_y;
    break;

   default:
    CV_SCRIPT_SWITCH(4, 0, 0);
    _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 40);
    c41_y = NULL;
    sf_mex_assign(&c41_y, sf_mex_create("y", c41_c_varargin_1, 10, 0U, 1U, 0U, 2,
      1, 47), false);
    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14, c41_y);
    break;
  }

  _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 43);
  c41_b_q[0] = c41_qx;
  c41_b_q[1] = c41_qy;
  c41_b_q[2] = c41_qz;
  c41_b_q[3] = c41_qw;
  _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 47);
  if (CV_SCRIPT_IF(4, 0, CV_RELATIONAL_EVAL(14U, 4U, 0, c41_qw, 0.0, -1, 2U,
        c41_qw < 0.0))) {
    _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, 48);
    for (c41_i128 = 0; c41_i128 < 4; c41_i128++) {
      c41_b_q[c41_i128] = -c41_b_q[c41_i128];
    }
  }

  _SFD_SCRIPT_CALL(4U, chartInstance->c41_sfEvent, -48);
  _SFD_SYMBOL_SCOPE_POP();
}

static void init_script_number_translation(uint32_T c41_machineNumber, uint32_T
  c41_chartNumber, uint32_T c41_instanceNumber)
{
  (void)c41_machineNumber;
  _SFD_SCRIPT_TRANSLATION(c41_chartNumber, c41_instanceNumber, 0U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\utils\\+Angles\\Quaternion_to_Rotation.m"));
  _SFD_SCRIPT_TRANSLATION(c41_chartNumber, c41_instanceNumber, 1U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\utils\\+Angles\\skew.m"));
  _SFD_SCRIPT_TRANSLATION(c41_chartNumber, c41_instanceNumber, 2U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_Model\\gen\\kin\\m\\R_VectorNav_to_Pelvis.m"));
  _SFD_SCRIPT_TRANSLATION(c41_chartNumber, c41_instanceNumber, 3U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\utils\\+Angles\\Rx.m"));
  _SFD_SCRIPT_TRANSLATION(c41_chartNumber, c41_instanceNumber, 4U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\utils\\+Angles\\Rotation_to_Quaternion.m"));
  _SFD_SCRIPT_TRANSLATION(c41_chartNumber, c41_instanceNumber, 5U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\utils\\+Angles\\Rotation_to_Euler.m"));
  _SFD_SCRIPT_TRANSLATION(c41_chartNumber, c41_instanceNumber, 6U,
    sf_debug_get_script_id(
    "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\utils\\+Angles\\AngularVelocity_to_EulerRates.m"));
}

static const mxArray *c41_sf_marshallOut(void *chartInstanceVoid, void
  *c41_inData)
{
  const mxArray *c41_mxArrayOutData;
  int32_T c41_i129;
  const mxArray *c41_y = NULL;
  real_T c41_u[20];
  SFc41_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc41_StateEstimationInstanceStruct *)chartInstanceVoid;
  c41_mxArrayOutData = NULL;
  c41_mxArrayOutData = NULL;
  for (c41_i129 = 0; c41_i129 < 20; c41_i129++) {
    c41_u[c41_i129] = (*(real_T (*)[20])c41_inData)[c41_i129];
  }

  c41_y = NULL;
  sf_mex_assign(&c41_y, sf_mex_create("y", c41_u, 0, 0U, 1U, 0U, 1, 20), false);
  sf_mex_assign(&c41_mxArrayOutData, c41_y, false);
  return c41_mxArrayOutData;
}

static void c41_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_b_dq, const char_T *c41_identifier, real_T
  c41_y[20])
{
  emlrtMsgIdentifier c41_thisId;
  c41_thisId.fIdentifier = c41_identifier;
  c41_thisId.fParent = NULL;
  c41_thisId.bParentIsCell = false;
  c41_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c41_b_dq), &c41_thisId, c41_y);
  sf_mex_destroy(&c41_b_dq);
}

static void c41_b_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_u, const emlrtMsgIdentifier *c41_parentId,
  real_T c41_y[20])
{
  real_T c41_dv6[20];
  int32_T c41_i130;
  (void)chartInstance;
  sf_mex_import(c41_parentId, sf_mex_dup(c41_u), c41_dv6, 1, 0, 0U, 1, 0U, 1, 20);
  for (c41_i130 = 0; c41_i130 < 20; c41_i130++) {
    c41_y[c41_i130] = c41_dv6[c41_i130];
  }

  sf_mex_destroy(&c41_u);
}

static void c41_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c41_mxArrayInData, const char_T *c41_varName, void *c41_outData)
{
  const mxArray *c41_b_dq;
  const char_T *c41_identifier;
  emlrtMsgIdentifier c41_thisId;
  real_T c41_y[20];
  int32_T c41_i131;
  SFc41_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc41_StateEstimationInstanceStruct *)chartInstanceVoid;
  c41_b_dq = sf_mex_dup(c41_mxArrayInData);
  c41_identifier = c41_varName;
  c41_thisId.fIdentifier = c41_identifier;
  c41_thisId.fParent = NULL;
  c41_thisId.bParentIsCell = false;
  c41_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c41_b_dq), &c41_thisId, c41_y);
  sf_mex_destroy(&c41_b_dq);
  for (c41_i131 = 0; c41_i131 < 20; c41_i131++) {
    (*(real_T (*)[20])c41_outData)[c41_i131] = c41_y[c41_i131];
  }

  sf_mex_destroy(&c41_mxArrayInData);
}

static const mxArray *c41_b_sf_marshallOut(void *chartInstanceVoid, void
  *c41_inData)
{
  const mxArray *c41_mxArrayOutData;
  int32_T c41_i132;
  const mxArray *c41_y = NULL;
  real_T c41_u[3];
  SFc41_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc41_StateEstimationInstanceStruct *)chartInstanceVoid;
  c41_mxArrayOutData = NULL;
  c41_mxArrayOutData = NULL;
  for (c41_i132 = 0; c41_i132 < 3; c41_i132++) {
    c41_u[c41_i132] = (*(real_T (*)[3])c41_inData)[c41_i132];
  }

  c41_y = NULL;
  sf_mex_assign(&c41_y, sf_mex_create("y", c41_u, 0, 0U, 1U, 0U, 1, 3), false);
  sf_mex_assign(&c41_mxArrayOutData, c41_y, false);
  return c41_mxArrayOutData;
}

static void c41_c_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_b_ai, const char_T *c41_identifier, real_T
  c41_y[3])
{
  emlrtMsgIdentifier c41_thisId;
  c41_thisId.fIdentifier = c41_identifier;
  c41_thisId.fParent = NULL;
  c41_thisId.bParentIsCell = false;
  c41_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c41_b_ai), &c41_thisId, c41_y);
  sf_mex_destroy(&c41_b_ai);
}

static void c41_d_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_u, const emlrtMsgIdentifier *c41_parentId,
  real_T c41_y[3])
{
  real_T c41_dv7[3];
  int32_T c41_i133;
  (void)chartInstance;
  sf_mex_import(c41_parentId, sf_mex_dup(c41_u), c41_dv7, 1, 0, 0U, 1, 0U, 1, 3);
  for (c41_i133 = 0; c41_i133 < 3; c41_i133++) {
    c41_y[c41_i133] = c41_dv7[c41_i133];
  }

  sf_mex_destroy(&c41_u);
}

static void c41_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c41_mxArrayInData, const char_T *c41_varName, void *c41_outData)
{
  const mxArray *c41_b_ai;
  const char_T *c41_identifier;
  emlrtMsgIdentifier c41_thisId;
  real_T c41_y[3];
  int32_T c41_i134;
  SFc41_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc41_StateEstimationInstanceStruct *)chartInstanceVoid;
  c41_b_ai = sf_mex_dup(c41_mxArrayInData);
  c41_identifier = c41_varName;
  c41_thisId.fIdentifier = c41_identifier;
  c41_thisId.fParent = NULL;
  c41_thisId.bParentIsCell = false;
  c41_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c41_b_ai), &c41_thisId, c41_y);
  sf_mex_destroy(&c41_b_ai);
  for (c41_i134 = 0; c41_i134 < 3; c41_i134++) {
    (*(real_T (*)[3])c41_outData)[c41_i134] = c41_y[c41_i134];
  }

  sf_mex_destroy(&c41_mxArrayInData);
}

static const mxArray *c41_c_sf_marshallOut(void *chartInstanceVoid, void
  *c41_inData)
{
  const mxArray *c41_mxArrayOutData;
  int32_T c41_i135;
  const mxArray *c41_y = NULL;
  real_T c41_u[4];
  SFc41_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc41_StateEstimationInstanceStruct *)chartInstanceVoid;
  c41_mxArrayOutData = NULL;
  c41_mxArrayOutData = NULL;
  for (c41_i135 = 0; c41_i135 < 4; c41_i135++) {
    c41_u[c41_i135] = (*(real_T (*)[4])c41_inData)[c41_i135];
  }

  c41_y = NULL;
  sf_mex_assign(&c41_y, sf_mex_create("y", c41_u, 0, 0U, 1U, 0U, 1, 4), false);
  sf_mex_assign(&c41_mxArrayOutData, c41_y, false);
  return c41_mxArrayOutData;
}

static void c41_e_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_b_qwi, const char_T *c41_identifier, real_T
  c41_y[4])
{
  emlrtMsgIdentifier c41_thisId;
  c41_thisId.fIdentifier = c41_identifier;
  c41_thisId.fParent = NULL;
  c41_thisId.bParentIsCell = false;
  c41_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c41_b_qwi), &c41_thisId,
    c41_y);
  sf_mex_destroy(&c41_b_qwi);
}

static void c41_f_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_u, const emlrtMsgIdentifier *c41_parentId,
  real_T c41_y[4])
{
  real_T c41_dv8[4];
  int32_T c41_i136;
  (void)chartInstance;
  sf_mex_import(c41_parentId, sf_mex_dup(c41_u), c41_dv8, 1, 0, 0U, 1, 0U, 1, 4);
  for (c41_i136 = 0; c41_i136 < 4; c41_i136++) {
    c41_y[c41_i136] = c41_dv8[c41_i136];
  }

  sf_mex_destroy(&c41_u);
}

static void c41_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c41_mxArrayInData, const char_T *c41_varName, void *c41_outData)
{
  const mxArray *c41_b_qwi;
  const char_T *c41_identifier;
  emlrtMsgIdentifier c41_thisId;
  real_T c41_y[4];
  int32_T c41_i137;
  SFc41_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc41_StateEstimationInstanceStruct *)chartInstanceVoid;
  c41_b_qwi = sf_mex_dup(c41_mxArrayInData);
  c41_identifier = c41_varName;
  c41_thisId.fIdentifier = c41_identifier;
  c41_thisId.fParent = NULL;
  c41_thisId.bParentIsCell = false;
  c41_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c41_b_qwi), &c41_thisId,
    c41_y);
  sf_mex_destroy(&c41_b_qwi);
  for (c41_i137 = 0; c41_i137 < 4; c41_i137++) {
    (*(real_T (*)[4])c41_outData)[c41_i137] = c41_y[c41_i137];
  }

  sf_mex_destroy(&c41_mxArrayInData);
}

static const mxArray *c41_d_sf_marshallOut(void *chartInstanceVoid, void
  *c41_inData)
{
  const mxArray *c41_mxArrayOutData;
  c41_cassieOutputsBus c41_u;
  const mxArray *c41_y = NULL;
  int32_T c41_i138;
  const mxArray *c41_b_y = NULL;
  real_T c41_b_u[4];
  int32_T c41_i139;
  const mxArray *c41_c_y = NULL;
  real_T c41_c_u[3];
  int32_T c41_i140;
  const mxArray *c41_d_y = NULL;
  int32_T c41_i141;
  const mxArray *c41_e_y = NULL;
  real_T c41_d_u;
  const mxArray *c41_f_y = NULL;
  real_T c41_e_u;
  const mxArray *c41_g_y = NULL;
  int32_T c41_i142;
  const mxArray *c41_h_y = NULL;
  real_T c41_f_u[10];
  int32_T c41_i143;
  const mxArray *c41_i_y = NULL;
  int32_T c41_i144;
  const mxArray *c41_j_y = NULL;
  int32_T c41_i145;
  const mxArray *c41_k_y = NULL;
  int32_T c41_i146;
  const mxArray *c41_l_y = NULL;
  real_T c41_g_u[16];
  real_T c41_h_u;
  const mxArray *c41_m_y = NULL;
  real_T c41_i_u;
  const mxArray *c41_n_y = NULL;
  SFc41_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc41_StateEstimationInstanceStruct *)chartInstanceVoid;
  c41_mxArrayOutData = NULL;
  c41_mxArrayOutData = NULL;
  c41_u = *(c41_cassieOutputsBus *)c41_inData;
  c41_y = NULL;
  sf_mex_assign(&c41_y, sf_mex_createstruct("structure", 2, 1, 1), false);
  for (c41_i138 = 0; c41_i138 < 4; c41_i138++) {
    c41_b_u[c41_i138] = c41_u.vectorNavOrientation[c41_i138];
  }

  c41_b_y = NULL;
  sf_mex_assign(&c41_b_y, sf_mex_create("y", c41_b_u, 0, 0U, 1U, 0U, 2, 4, 1),
                false);
  sf_mex_addfield(c41_y, c41_b_y, "vectorNavOrientation", "vectorNavOrientation",
                  0);
  for (c41_i139 = 0; c41_i139 < 3; c41_i139++) {
    c41_c_u[c41_i139] = c41_u.vectorNavAngularVelocity[c41_i139];
  }

  c41_c_y = NULL;
  sf_mex_assign(&c41_c_y, sf_mex_create("y", c41_c_u, 0, 0U, 1U, 0U, 2, 3, 1),
                false);
  sf_mex_addfield(c41_y, c41_c_y, "vectorNavAngularVelocity",
                  "vectorNavAngularVelocity", 0);
  for (c41_i140 = 0; c41_i140 < 3; c41_i140++) {
    c41_c_u[c41_i140] = c41_u.vectorNavLinearAcceleration[c41_i140];
  }

  c41_d_y = NULL;
  sf_mex_assign(&c41_d_y, sf_mex_create("y", c41_c_u, 0, 0U, 1U, 0U, 2, 3, 1),
                false);
  sf_mex_addfield(c41_y, c41_d_y, "vectorNavLinearAcceleration",
                  "vectorNavLinearAcceleration", 0);
  for (c41_i141 = 0; c41_i141 < 3; c41_i141++) {
    c41_c_u[c41_i141] = c41_u.vectorNavMagneticField[c41_i141];
  }

  c41_e_y = NULL;
  sf_mex_assign(&c41_e_y, sf_mex_create("y", c41_c_u, 0, 0U, 1U, 0U, 2, 3, 1),
                false);
  sf_mex_addfield(c41_y, c41_e_y, "vectorNavMagneticField",
                  "vectorNavMagneticField", 0);
  c41_d_u = c41_u.vectorNavPressure;
  c41_f_y = NULL;
  sf_mex_assign(&c41_f_y, sf_mex_create("y", &c41_d_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_addfield(c41_y, c41_f_y, "vectorNavPressure", "vectorNavPressure", 0);
  c41_e_u = c41_u.vectorNavTemperature;
  c41_g_y = NULL;
  sf_mex_assign(&c41_g_y, sf_mex_create("y", &c41_e_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_addfield(c41_y, c41_g_y, "vectorNavTemperature", "vectorNavTemperature",
                  0);
  for (c41_i142 = 0; c41_i142 < 10; c41_i142++) {
    c41_f_u[c41_i142] = c41_u.motorPosition[c41_i142];
  }

  c41_h_y = NULL;
  sf_mex_assign(&c41_h_y, sf_mex_create("y", c41_f_u, 0, 0U, 1U, 0U, 2, 10, 1),
                false);
  sf_mex_addfield(c41_y, c41_h_y, "motorPosition", "motorPosition", 0);
  for (c41_i143 = 0; c41_i143 < 10; c41_i143++) {
    c41_f_u[c41_i143] = c41_u.motorVelocity[c41_i143];
  }

  c41_i_y = NULL;
  sf_mex_assign(&c41_i_y, sf_mex_create("y", c41_f_u, 0, 0U, 1U, 0U, 2, 10, 1),
                false);
  sf_mex_addfield(c41_y, c41_i_y, "motorVelocity", "motorVelocity", 0);
  for (c41_i144 = 0; c41_i144 < 4; c41_i144++) {
    c41_b_u[c41_i144] = c41_u.jointPosition[c41_i144];
  }

  c41_j_y = NULL;
  sf_mex_assign(&c41_j_y, sf_mex_create("y", c41_b_u, 0, 0U, 1U, 0U, 2, 4, 1),
                false);
  sf_mex_addfield(c41_y, c41_j_y, "jointPosition", "jointPosition", 0);
  for (c41_i145 = 0; c41_i145 < 4; c41_i145++) {
    c41_b_u[c41_i145] = c41_u.jointVelocity[c41_i145];
  }

  c41_k_y = NULL;
  sf_mex_assign(&c41_k_y, sf_mex_create("y", c41_b_u, 0, 0U, 1U, 0U, 2, 4, 1),
                false);
  sf_mex_addfield(c41_y, c41_k_y, "jointVelocity", "jointVelocity", 0);
  for (c41_i146 = 0; c41_i146 < 16; c41_i146++) {
    c41_g_u[c41_i146] = c41_u.radio[c41_i146];
  }

  c41_l_y = NULL;
  sf_mex_assign(&c41_l_y, sf_mex_create("y", c41_g_u, 0, 0U, 1U, 0U, 2, 16, 1),
                false);
  sf_mex_addfield(c41_y, c41_l_y, "radio", "radio", 0);
  c41_h_u = c41_u.stateOfCharge;
  c41_m_y = NULL;
  sf_mex_assign(&c41_m_y, sf_mex_create("y", &c41_h_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_addfield(c41_y, c41_m_y, "stateOfCharge", "stateOfCharge", 0);
  c41_i_u = c41_u.status;
  c41_n_y = NULL;
  sf_mex_assign(&c41_n_y, sf_mex_create("y", &c41_i_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_addfield(c41_y, c41_n_y, "status", "status", 0);
  sf_mex_assign(&c41_mxArrayOutData, c41_y, false);
  return c41_mxArrayOutData;
}

static const mxArray *c41_e_sf_marshallOut(void *chartInstanceVoid, void
  *c41_inData)
{
  const mxArray *c41_mxArrayOutData;
  real_T c41_u;
  const mxArray *c41_y = NULL;
  SFc41_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc41_StateEstimationInstanceStruct *)chartInstanceVoid;
  c41_mxArrayOutData = NULL;
  c41_mxArrayOutData = NULL;
  c41_u = *(real_T *)c41_inData;
  c41_y = NULL;
  sf_mex_assign(&c41_y, sf_mex_create("y", &c41_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c41_mxArrayOutData, c41_y, false);
  return c41_mxArrayOutData;
}

static real_T c41_g_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_u, const emlrtMsgIdentifier *c41_parentId)
{
  real_T c41_y;
  real_T c41_d0;
  (void)chartInstance;
  sf_mex_import(c41_parentId, sf_mex_dup(c41_u), &c41_d0, 1, 0, 0U, 0, 0U, 0);
  c41_y = c41_d0;
  sf_mex_destroy(&c41_u);
  return c41_y;
}

static void c41_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c41_mxArrayInData, const char_T *c41_varName, void *c41_outData)
{
  const mxArray *c41_nargout;
  const char_T *c41_identifier;
  emlrtMsgIdentifier c41_thisId;
  real_T c41_y;
  SFc41_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc41_StateEstimationInstanceStruct *)chartInstanceVoid;
  c41_nargout = sf_mex_dup(c41_mxArrayInData);
  c41_identifier = c41_varName;
  c41_thisId.fIdentifier = c41_identifier;
  c41_thisId.fParent = NULL;
  c41_thisId.bParentIsCell = false;
  c41_y = c41_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c41_nargout),
    &c41_thisId);
  sf_mex_destroy(&c41_nargout);
  *(real_T *)c41_outData = c41_y;
  sf_mex_destroy(&c41_mxArrayInData);
}

static const mxArray *c41_f_sf_marshallOut(void *chartInstanceVoid, void
  *c41_inData)
{
  const mxArray *c41_mxArrayOutData;
  int32_T c41_i147;
  const mxArray *c41_y = NULL;
  real_T c41_u[2];
  SFc41_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc41_StateEstimationInstanceStruct *)chartInstanceVoid;
  c41_mxArrayOutData = NULL;
  c41_mxArrayOutData = NULL;
  for (c41_i147 = 0; c41_i147 < 2; c41_i147++) {
    c41_u[c41_i147] = (*(real_T (*)[2])c41_inData)[c41_i147];
  }

  c41_y = NULL;
  sf_mex_assign(&c41_y, sf_mex_create("y", c41_u, 0, 0U, 1U, 0U, 1, 2), false);
  sf_mex_assign(&c41_mxArrayOutData, c41_y, false);
  return c41_mxArrayOutData;
}

static void c41_h_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_u, const emlrtMsgIdentifier *c41_parentId,
  real_T c41_y[2])
{
  real_T c41_dv9[2];
  int32_T c41_i148;
  (void)chartInstance;
  sf_mex_import(c41_parentId, sf_mex_dup(c41_u), c41_dv9, 1, 0, 0U, 1, 0U, 1, 2);
  for (c41_i148 = 0; c41_i148 < 2; c41_i148++) {
    c41_y[c41_i148] = c41_dv9[c41_i148];
  }

  sf_mex_destroy(&c41_u);
}

static void c41_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c41_mxArrayInData, const char_T *c41_varName, void *c41_outData)
{
  const mxArray *c41_dqjL;
  const char_T *c41_identifier;
  emlrtMsgIdentifier c41_thisId;
  real_T c41_y[2];
  int32_T c41_i149;
  SFc41_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc41_StateEstimationInstanceStruct *)chartInstanceVoid;
  c41_dqjL = sf_mex_dup(c41_mxArrayInData);
  c41_identifier = c41_varName;
  c41_thisId.fIdentifier = c41_identifier;
  c41_thisId.fParent = NULL;
  c41_thisId.bParentIsCell = false;
  c41_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c41_dqjL), &c41_thisId, c41_y);
  sf_mex_destroy(&c41_dqjL);
  for (c41_i149 = 0; c41_i149 < 2; c41_i149++) {
    (*(real_T (*)[2])c41_outData)[c41_i149] = c41_y[c41_i149];
  }

  sf_mex_destroy(&c41_mxArrayInData);
}

static const mxArray *c41_g_sf_marshallOut(void *chartInstanceVoid, void
  *c41_inData)
{
  const mxArray *c41_mxArrayOutData;
  int32_T c41_i150;
  const mxArray *c41_y = NULL;
  real_T c41_u[5];
  SFc41_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc41_StateEstimationInstanceStruct *)chartInstanceVoid;
  c41_mxArrayOutData = NULL;
  c41_mxArrayOutData = NULL;
  for (c41_i150 = 0; c41_i150 < 5; c41_i150++) {
    c41_u[c41_i150] = (*(real_T (*)[5])c41_inData)[c41_i150];
  }

  c41_y = NULL;
  sf_mex_assign(&c41_y, sf_mex_create("y", c41_u, 0, 0U, 1U, 0U, 1, 5), false);
  sf_mex_assign(&c41_mxArrayOutData, c41_y, false);
  return c41_mxArrayOutData;
}

static void c41_i_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_u, const emlrtMsgIdentifier *c41_parentId,
  real_T c41_y[5])
{
  real_T c41_dv10[5];
  int32_T c41_i151;
  (void)chartInstance;
  sf_mex_import(c41_parentId, sf_mex_dup(c41_u), c41_dv10, 1, 0, 0U, 1, 0U, 1, 5);
  for (c41_i151 = 0; c41_i151 < 5; c41_i151++) {
    c41_y[c41_i151] = c41_dv10[c41_i151];
  }

  sf_mex_destroy(&c41_u);
}

static void c41_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c41_mxArrayInData, const char_T *c41_varName, void *c41_outData)
{
  const mxArray *c41_dqaL;
  const char_T *c41_identifier;
  emlrtMsgIdentifier c41_thisId;
  real_T c41_y[5];
  int32_T c41_i152;
  SFc41_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc41_StateEstimationInstanceStruct *)chartInstanceVoid;
  c41_dqaL = sf_mex_dup(c41_mxArrayInData);
  c41_identifier = c41_varName;
  c41_thisId.fIdentifier = c41_identifier;
  c41_thisId.fParent = NULL;
  c41_thisId.bParentIsCell = false;
  c41_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c41_dqaL), &c41_thisId, c41_y);
  sf_mex_destroy(&c41_dqaL);
  for (c41_i152 = 0; c41_i152 < 5; c41_i152++) {
    (*(real_T (*)[5])c41_outData)[c41_i152] = c41_y[c41_i152];
  }

  sf_mex_destroy(&c41_mxArrayInData);
}

static const mxArray *c41_h_sf_marshallOut(void *chartInstanceVoid, void
  *c41_inData)
{
  const mxArray *c41_mxArrayOutData;
  int32_T c41_i153;
  int32_T c41_i154;
  const mxArray *c41_y = NULL;
  int32_T c41_i155;
  real_T c41_u[9];
  SFc41_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc41_StateEstimationInstanceStruct *)chartInstanceVoid;
  c41_mxArrayOutData = NULL;
  c41_mxArrayOutData = NULL;
  c41_i153 = 0;
  for (c41_i154 = 0; c41_i154 < 3; c41_i154++) {
    for (c41_i155 = 0; c41_i155 < 3; c41_i155++) {
      c41_u[c41_i155 + c41_i153] = (*(real_T (*)[9])c41_inData)[c41_i155 +
        c41_i153];
    }

    c41_i153 += 3;
  }

  c41_y = NULL;
  sf_mex_assign(&c41_y, sf_mex_create("y", c41_u, 0, 0U, 1U, 0U, 2, 3, 3), false);
  sf_mex_assign(&c41_mxArrayOutData, c41_y, false);
  return c41_mxArrayOutData;
}

static void c41_j_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_u, const emlrtMsgIdentifier *c41_parentId,
  real_T c41_y[9])
{
  real_T c41_dv11[9];
  int32_T c41_i156;
  (void)chartInstance;
  sf_mex_import(c41_parentId, sf_mex_dup(c41_u), c41_dv11, 1, 0, 0U, 1, 0U, 2, 3,
                3);
  for (c41_i156 = 0; c41_i156 < 9; c41_i156++) {
    c41_y[c41_i156] = c41_dv11[c41_i156];
  }

  sf_mex_destroy(&c41_u);
}

static void c41_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c41_mxArrayInData, const char_T *c41_varName, void *c41_outData)
{
  const mxArray *c41_Rwb;
  const char_T *c41_identifier;
  emlrtMsgIdentifier c41_thisId;
  real_T c41_y[9];
  int32_T c41_i157;
  int32_T c41_i158;
  int32_T c41_i159;
  SFc41_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc41_StateEstimationInstanceStruct *)chartInstanceVoid;
  c41_Rwb = sf_mex_dup(c41_mxArrayInData);
  c41_identifier = c41_varName;
  c41_thisId.fIdentifier = c41_identifier;
  c41_thisId.fParent = NULL;
  c41_thisId.bParentIsCell = false;
  c41_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c41_Rwb), &c41_thisId, c41_y);
  sf_mex_destroy(&c41_Rwb);
  c41_i157 = 0;
  for (c41_i158 = 0; c41_i158 < 3; c41_i158++) {
    for (c41_i159 = 0; c41_i159 < 3; c41_i159++) {
      (*(real_T (*)[9])c41_outData)[c41_i159 + c41_i157] = c41_y[c41_i159 +
        c41_i157];
    }

    c41_i157 += 3;
  }

  sf_mex_destroy(&c41_mxArrayInData);
}

static const mxArray *c41_i_sf_marshallOut(void *chartInstanceVoid, void
  *c41_inData)
{
  const mxArray *c41_mxArrayOutData;
  int32_T c41_i160;
  const mxArray *c41_y = NULL;
  real_T c41_u[14];
  SFc41_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc41_StateEstimationInstanceStruct *)chartInstanceVoid;
  c41_mxArrayOutData = NULL;
  c41_mxArrayOutData = NULL;
  for (c41_i160 = 0; c41_i160 < 14; c41_i160++) {
    c41_u[c41_i160] = (*(real_T (*)[14])c41_inData)[c41_i160];
  }

  c41_y = NULL;
  sf_mex_assign(&c41_y, sf_mex_create("y", c41_u, 0, 0U, 1U, 0U, 1, 14), false);
  sf_mex_assign(&c41_mxArrayOutData, c41_y, false);
  return c41_mxArrayOutData;
}

static void c41_k_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_u, const emlrtMsgIdentifier *c41_parentId,
  real_T c41_y[14])
{
  real_T c41_dv12[14];
  int32_T c41_i161;
  (void)chartInstance;
  sf_mex_import(c41_parentId, sf_mex_dup(c41_u), c41_dv12, 1, 0, 0U, 1, 0U, 1,
                14);
  for (c41_i161 = 0; c41_i161 < 14; c41_i161++) {
    c41_y[c41_i161] = c41_dv12[c41_i161];
  }

  sf_mex_destroy(&c41_u);
}

static void c41_h_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c41_mxArrayInData, const char_T *c41_varName, void *c41_outData)
{
  const mxArray *c41_var1;
  const char_T *c41_identifier;
  emlrtMsgIdentifier c41_thisId;
  real_T c41_y[14];
  int32_T c41_i162;
  SFc41_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc41_StateEstimationInstanceStruct *)chartInstanceVoid;
  c41_var1 = sf_mex_dup(c41_mxArrayInData);
  c41_identifier = c41_varName;
  c41_thisId.fIdentifier = c41_identifier;
  c41_thisId.fParent = NULL;
  c41_thisId.bParentIsCell = false;
  c41_k_emlrt_marshallIn(chartInstance, sf_mex_dup(c41_var1), &c41_thisId, c41_y);
  sf_mex_destroy(&c41_var1);
  for (c41_i162 = 0; c41_i162 < 14; c41_i162++) {
    (*(real_T (*)[14])c41_outData)[c41_i162] = c41_y[c41_i162];
  }

  sf_mex_destroy(&c41_mxArrayInData);
}

const mxArray *sf_c41_StateEstimation_get_eml_resolved_functions_info(void)
{
  const mxArray *c41_nameCaptureInfo = NULL;
  const char * c41_data[8] = {
    "789ced584f6fda301c355357adaa3aedb04dd3a4493bec3069524369056527204080110aa17455ab09056220c58969ecf06f1f623beeb8e3a45df669f6791603"
    "a169861a29a115ddb064390fe7fdec67fbc53620941781951e5bb9f312804dab7c64e507609a1ece70c8514e7fdf003b33fcc5ca4dac5338a4d34a5dd620b093",
    "82355597757a3cea41604082511f2a939a968ae0b1aac12276809c6a012deba89a0356c59ef90e6c76aba6068c0e99370390134cf484c1959e0d971e3bd97a9e"
    "3878891b78ecfd1d178f615e2644854726ed9994046cff9747fb23178fe173fe13ff9eab1168104ec284bccec9064570c4a571d3d4a04e0927a834673626b5f5",
    "6977ebbc356b064688b188d9d0b0622248b8696d55d54ca4ea5d4e4c1e1793298ec79a8675ee9ad2dd9ea3df878e7e6f2ee877c8d1efadab7110b67ffe4e06e0"
    "076d7f69fc1cb879de9e82ebf3c67079805311b17576b19fce760f51a19f6e15ed786f1df1420be20147e9e77dbfebb3eca1f3958bc770526f5b2b6bb762ca14",
    "1aba8af53ac5750953995acfe0eff15f1477d3159761059b0d04a7fc1f1e7ce2e2337c9e59a26f4caa22c2bd9b6ae5166bddd5e6e3e86fbd258aff8b5f9e83eb"
    "f3c570bb38844545a32d4a4e0ff662d541be29f0c2ddf8e5beadaf84477fb75dfd6578e653d28583799ca0befce6c1975d7cf976c78d699b8dd2da877e7da854",
    "f652422f2b51e92832c0e9ea87467bf431bddafb9697ce672e1ec352fd043629364a729fb9ac0c515fb5cf77417de175cefbece233bc545fcc6a45ac40c4b5a1"
    "ce75559dd3b8859a03ef5ba0f03ffba519562558a8c563b15838ba9f1f472a061553abed978487ce2d178fe1d9fe210d1d7182fae4ab07bfeee2337c8bfb8734",
    "b4bcb0de37fcf9a070010bf964ce14d571562a350e8e4ae39eb4e23e0870dfb14f65ec3b7a755e03ffe47d67b1d6f57d67cef7e317f12c7256238a00e35169d8"
    "172ab5b8d9babce7e7ac172e1ec30bfc92b1d698b10c9f7cf7e0eb2e3ec377e49389466691b53ffcf9433aac54abe974e6d2407d3ed3cf75c452b69c5d6d7f9c",
    "7ae87ce3e2313cf387559848364e20c24d958ee64b48b23eb7c48e7fdbf792b18bcff02dfae546cdf6457eed1f9fffa749f170ad610ad1c828368e8a8dde2932"
    "c277701efb0369be7d44", "" };

  c41_nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(c41_data, 6776U, &c41_nameCaptureInfo);
  return c41_nameCaptureInfo;
}

static void c41_error(SFc41_StateEstimationInstanceStruct *chartInstance)
{
  const mxArray *c41_y = NULL;
  static char_T c41_cv0[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'p', 'o', 'w', 'e', 'r', '_', 'd', 'o', 'm', 'a', 'i',
    'n', 'E', 'r', 'r', 'o', 'r' };

  (void)chartInstance;
  c41_y = NULL;
  sf_mex_assign(&c41_y, sf_mex_create("y", c41_cv0, 10, 0U, 1U, 0U, 2, 1, 31),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message", 1U,
    1U, 14, c41_y));
}

static void c41_abs(SFc41_StateEstimationInstanceStruct *chartInstance, real_T
                    c41_x[4], real_T c41_y[4])
{
  int32_T c41_k;
  real_T c41_b_x;
  real_T c41_b_y;
  (void)chartInstance;
  for (c41_k = 0; c41_k + 1 < 5; c41_k++) {
    c41_b_x = c41_x[c41_k];
    c41_b_y = muDoubleScalarAbs(c41_b_x);
    c41_y[c41_k] = c41_b_y;
  }
}

static void c41_check_forloop_overflow_error(SFc41_StateEstimationInstanceStruct
  *chartInstance, boolean_T c41_overflow)
{
  const mxArray *c41_y = NULL;
  static char_T c41_cv1[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *c41_b_y = NULL;
  static char_T c41_cv2[5] = { 'i', 'n', 't', '3', '2' };

  (void)chartInstance;
  if (!c41_overflow) {
  } else {
    c41_y = NULL;
    sf_mex_assign(&c41_y, sf_mex_create("y", c41_cv1, 10, 0U, 1U, 0U, 2, 1, 34),
                  false);
    c41_b_y = NULL;
    sf_mex_assign(&c41_b_y, sf_mex_create("y", c41_cv2, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                      sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message",
      1U, 2U, 14, c41_y, 14, c41_b_y));
  }
}

static void c41_b_error(SFc41_StateEstimationInstanceStruct *chartInstance)
{
  const mxArray *c41_y = NULL;
  static char_T c41_cv3[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  const mxArray *c41_b_y = NULL;
  static char_T c41_cv4[4] = { 's', 'q', 'r', 't' };

  (void)chartInstance;
  c41_y = NULL;
  sf_mex_assign(&c41_y, sf_mex_create("y", c41_cv3, 10, 0U, 1U, 0U, 2, 1, 30),
                false);
  c41_b_y = NULL;
  sf_mex_assign(&c41_b_y, sf_mex_create("y", c41_cv4, 10, 0U, 1U, 0U, 2, 1, 4),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message", 1U,
    2U, 14, c41_y, 14, c41_b_y));
}

static void c41_c_error(SFc41_StateEstimationInstanceStruct *chartInstance)
{
  const mxArray *c41_y = NULL;
  static char_T c41_cv5[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  const mxArray *c41_b_y = NULL;
  static char_T c41_cv6[4] = { 'a', 's', 'i', 'n' };

  (void)chartInstance;
  c41_y = NULL;
  sf_mex_assign(&c41_y, sf_mex_create("y", c41_cv5, 10, 0U, 1U, 0U, 2, 1, 30),
                false);
  c41_b_y = NULL;
  sf_mex_assign(&c41_b_y, sf_mex_create("y", c41_cv6, 10, 0U, 1U, 0U, 2, 1, 4),
                false);
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "error", 0U, 1U, 14,
                    sf_mex_call_debug(sfGlobalDebugInstanceStruct, "message", 1U,
    2U, 14, c41_y, 14, c41_b_y));
}

static const mxArray *c41_j_sf_marshallOut(void *chartInstanceVoid, void
  *c41_inData)
{
  const mxArray *c41_mxArrayOutData;
  int32_T c41_u;
  const mxArray *c41_y = NULL;
  SFc41_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc41_StateEstimationInstanceStruct *)chartInstanceVoid;
  c41_mxArrayOutData = NULL;
  c41_mxArrayOutData = NULL;
  c41_u = *(int32_T *)c41_inData;
  c41_y = NULL;
  sf_mex_assign(&c41_y, sf_mex_create("y", &c41_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c41_mxArrayOutData, c41_y, false);
  return c41_mxArrayOutData;
}

static int32_T c41_l_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_u, const emlrtMsgIdentifier *c41_parentId)
{
  int32_T c41_y;
  int32_T c41_i163;
  (void)chartInstance;
  sf_mex_import(c41_parentId, sf_mex_dup(c41_u), &c41_i163, 1, 6, 0U, 0, 0U, 0);
  c41_y = c41_i163;
  sf_mex_destroy(&c41_u);
  return c41_y;
}

static void c41_i_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c41_mxArrayInData, const char_T *c41_varName, void *c41_outData)
{
  const mxArray *c41_b_sfEvent;
  const char_T *c41_identifier;
  emlrtMsgIdentifier c41_thisId;
  int32_T c41_y;
  SFc41_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc41_StateEstimationInstanceStruct *)chartInstanceVoid;
  c41_b_sfEvent = sf_mex_dup(c41_mxArrayInData);
  c41_identifier = c41_varName;
  c41_thisId.fIdentifier = c41_identifier;
  c41_thisId.fParent = NULL;
  c41_thisId.bParentIsCell = false;
  c41_y = c41_l_emlrt_marshallIn(chartInstance, sf_mex_dup(c41_b_sfEvent),
    &c41_thisId);
  sf_mex_destroy(&c41_b_sfEvent);
  *(int32_T *)c41_outData = c41_y;
  sf_mex_destroy(&c41_mxArrayInData);
}

static const mxArray *c41_outputs_bus_io(void *chartInstanceVoid, void
  *c41_pData)
{
  const mxArray *c41_mxVal;
  int32_T c41_i164;
  int32_T c41_i165;
  c41_cassieOutputsBus c41_tmp;
  int32_T c41_i166;
  int32_T c41_i167;
  int32_T c41_i168;
  int32_T c41_i169;
  int32_T c41_i170;
  int32_T c41_i171;
  int32_T c41_i172;
  SFc41_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc41_StateEstimationInstanceStruct *)chartInstanceVoid;
  c41_mxVal = NULL;
  c41_mxVal = NULL;
  for (c41_i164 = 0; c41_i164 < 4; c41_i164++) {
    c41_tmp.vectorNavOrientation[c41_i164] = ((real_T *)&((char_T *)
      (c41_cassieOutputsBus *)c41_pData)[0])[c41_i164];
  }

  for (c41_i165 = 0; c41_i165 < 3; c41_i165++) {
    c41_tmp.vectorNavAngularVelocity[c41_i165] = ((real_T *)&((char_T *)
      (c41_cassieOutputsBus *)c41_pData)[32])[c41_i165];
  }

  for (c41_i166 = 0; c41_i166 < 3; c41_i166++) {
    c41_tmp.vectorNavLinearAcceleration[c41_i166] = ((real_T *)&((char_T *)
      (c41_cassieOutputsBus *)c41_pData)[56])[c41_i166];
  }

  for (c41_i167 = 0; c41_i167 < 3; c41_i167++) {
    c41_tmp.vectorNavMagneticField[c41_i167] = ((real_T *)&((char_T *)
      (c41_cassieOutputsBus *)c41_pData)[80])[c41_i167];
  }

  c41_tmp.vectorNavPressure = *(real_T *)&((char_T *)(c41_cassieOutputsBus *)
    c41_pData)[104];
  c41_tmp.vectorNavTemperature = *(real_T *)&((char_T *)(c41_cassieOutputsBus *)
    c41_pData)[112];
  for (c41_i168 = 0; c41_i168 < 10; c41_i168++) {
    c41_tmp.motorPosition[c41_i168] = ((real_T *)&((char_T *)
      (c41_cassieOutputsBus *)c41_pData)[120])[c41_i168];
  }

  for (c41_i169 = 0; c41_i169 < 10; c41_i169++) {
    c41_tmp.motorVelocity[c41_i169] = ((real_T *)&((char_T *)
      (c41_cassieOutputsBus *)c41_pData)[200])[c41_i169];
  }

  for (c41_i170 = 0; c41_i170 < 4; c41_i170++) {
    c41_tmp.jointPosition[c41_i170] = ((real_T *)&((char_T *)
      (c41_cassieOutputsBus *)c41_pData)[280])[c41_i170];
  }

  for (c41_i171 = 0; c41_i171 < 4; c41_i171++) {
    c41_tmp.jointVelocity[c41_i171] = ((real_T *)&((char_T *)
      (c41_cassieOutputsBus *)c41_pData)[312])[c41_i171];
  }

  for (c41_i172 = 0; c41_i172 < 16; c41_i172++) {
    c41_tmp.radio[c41_i172] = ((real_T *)&((char_T *)(c41_cassieOutputsBus *)
      c41_pData)[344])[c41_i172];
  }

  c41_tmp.stateOfCharge = *(real_T *)&((char_T *)(c41_cassieOutputsBus *)
    c41_pData)[472];
  c41_tmp.status = *(real_T *)&((char_T *)(c41_cassieOutputsBus *)c41_pData)[480];
  sf_mex_assign(&c41_mxVal, c41_d_sf_marshallOut(chartInstance, &c41_tmp), false);
  return c41_mxVal;
}

static uint8_T c41_m_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_b_is_active_c41_StateEstimation, const
  char_T *c41_identifier)
{
  uint8_T c41_y;
  emlrtMsgIdentifier c41_thisId;
  c41_thisId.fIdentifier = c41_identifier;
  c41_thisId.fParent = NULL;
  c41_thisId.bParentIsCell = false;
  c41_y = c41_n_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c41_b_is_active_c41_StateEstimation), &c41_thisId);
  sf_mex_destroy(&c41_b_is_active_c41_StateEstimation);
  return c41_y;
}

static uint8_T c41_n_emlrt_marshallIn(SFc41_StateEstimationInstanceStruct
  *chartInstance, const mxArray *c41_u, const emlrtMsgIdentifier *c41_parentId)
{
  uint8_T c41_y;
  uint8_T c41_u0;
  (void)chartInstance;
  sf_mex_import(c41_parentId, sf_mex_dup(c41_u), &c41_u0, 1, 3, 0U, 0, 0U, 0);
  c41_y = c41_u0;
  sf_mex_destroy(&c41_u);
  return c41_y;
}

static void init_dsm_address_info(SFc41_StateEstimationInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc41_StateEstimationInstanceStruct
  *chartInstance)
{
  chartInstance->c41_qwi = (real_T (*)[4])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c41_wi = (real_T (*)[3])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c41_ai = (real_T (*)[3])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c41_q = (real_T (*)[20])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c41_outputs = (c41_cassieOutputsBus *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 0);
  chartInstance->c41_dq = (real_T (*)[20])ssGetOutputPortSignal_wrapper
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

void sf_c41_StateEstimation_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(85455391U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2261334971U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1825712628U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1107965037U);
}

mxArray* sf_c41_StateEstimation_get_post_codegen_info(void);
mxArray *sf_c41_StateEstimation_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("8x96s6k65hsUinpvN2FkkD");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,0,mxREAL);
      double *pr = mxGetPr(mxSize);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(13));
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

    mxArray *mxData = mxCreateStructMatrix(1,5,3,dataFields);

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
      pr[0] = (double)(20);
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
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(20);
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
    mxArray* mxPostCodegenInfo = sf_c41_StateEstimation_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c41_StateEstimation_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c41_StateEstimation_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("R_VectorNav_to_Pelvis_src");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c41_StateEstimation_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c41_StateEstimation_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c41_StateEstimation(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x6'type','srcId','name','auxInfo'{{M[1],M[6],T\"ai\",},{M[1],M[9],T\"dq\",},{M[1],M[5],T\"q\",},{M[1],M[11],T\"qwi\",},{M[1],M[7],T\"wi\",},{M[8],M[0],T\"is_active_c41_StateEstimation\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 6, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c41_StateEstimation_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc41_StateEstimationInstanceStruct *chartInstance =
      (SFc41_StateEstimationInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _StateEstimationMachineNumber_,
           41,
           1,
           1,
           0,
           6,
           0,
           0,
           0,
           0,
           7,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"outputs");
          _SFD_SET_DATA_PROPS(1,2,0,1,"qwi");
          _SFD_SET_DATA_PROPS(2,2,0,1,"wi");
          _SFD_SET_DATA_PROPS(3,2,0,1,"ai");
          _SFD_SET_DATA_PROPS(4,2,0,1,"q");
          _SFD_SET_DATA_PROPS(5,2,0,1,"dq");
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
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,2074);
        _SFD_CV_INIT_SCRIPT(0,1,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(0,0,"Quaternion_to_Rotation",0,-1,274);
        _SFD_CV_INIT_SCRIPT(1,1,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(1,0,"skew",0,-1,156);
        _SFD_CV_INIT_SCRIPT(2,1,0,1,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(2,0,"R_VectorNav_to_Pelvis",0,-1,379);
        _SFD_CV_INIT_SCRIPT_IF(2,0,53,78,136,375);
        _SFD_CV_INIT_SCRIPT(3,1,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(3,0,"Rx",0,-1,174);
        _SFD_CV_INIT_SCRIPT(4,1,0,1,0,0,1,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(4,0,"Rotation_to_Quaternion",0,-1,1602);
        _SFD_CV_INIT_SCRIPT_IF(4,0,1572,1581,-1,1597);

        {
          static int caseStart[] = { 1389, 649, 834, 1019, 1204 };

          static int caseExprEnd[] = { 1398, 656, 841, 1026, 1211 };

          _SFD_CV_INIT_SCRIPT_SWITCH(4,0,632,645,1467,5,&(caseStart[0]),
            &(caseExprEnd[0]));
        }

        _SFD_CV_INIT_SCRIPT_RELATIONAL(4,0,1575,1581,-1,2);
        _SFD_CV_INIT_SCRIPT(5,1,0,2,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(5,0,"Rotation_to_Euler",0,-1,626);
        _SFD_CV_INIT_SCRIPT_IF(5,0,227,240,507,603);
        _SFD_CV_INIT_SCRIPT_IF(5,1,246,260,390,506);
        _SFD_CV_INIT_SCRIPT_RELATIONAL(5,0,230,240,-1,2);
        _SFD_CV_INIT_SCRIPT_RELATIONAL(5,1,249,260,-1,4);
        _SFD_CV_INIT_SCRIPT(6,1,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_SCRIPT_FCN(6,0,"AngularVelocity_to_EulerRates",0,-1,458);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_STRUCT,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c41_outputs_bus_io,(MexInFcnForType)NULL);

        {
          unsigned int dimVector[1];
          dimVector[0]= 4U;
          _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c41_c_sf_marshallOut,(MexInFcnForType)
            c41_c_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c41_b_sf_marshallOut,(MexInFcnForType)
            c41_b_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c41_b_sf_marshallOut,(MexInFcnForType)
            c41_b_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 20U;
          _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c41_sf_marshallOut,(MexInFcnForType)
            c41_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 20U;
          _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c41_sf_marshallOut,(MexInFcnForType)
            c41_sf_marshallIn);
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
    SFc41_StateEstimationInstanceStruct *chartInstance =
      (SFc41_StateEstimationInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(1U, *chartInstance->c41_qwi);
        _SFD_SET_DATA_VALUE_PTR(2U, *chartInstance->c41_wi);
        _SFD_SET_DATA_VALUE_PTR(3U, *chartInstance->c41_ai);
        _SFD_SET_DATA_VALUE_PTR(4U, *chartInstance->c41_q);
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c41_outputs);
        _SFD_SET_DATA_VALUE_PTR(5U, *chartInstance->c41_dq);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "s9aOqnkzkvppWSwYB8gKXQE";
}

static void sf_opaque_initialize_c41_StateEstimation(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc41_StateEstimationInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c41_StateEstimation((SFc41_StateEstimationInstanceStruct*)
    chartInstanceVar);
  initialize_c41_StateEstimation((SFc41_StateEstimationInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c41_StateEstimation(void *chartInstanceVar)
{
  enable_c41_StateEstimation((SFc41_StateEstimationInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c41_StateEstimation(void *chartInstanceVar)
{
  disable_c41_StateEstimation((SFc41_StateEstimationInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c41_StateEstimation(void *chartInstanceVar)
{
  sf_gateway_c41_StateEstimation((SFc41_StateEstimationInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c41_StateEstimation(SimStruct* S)
{
  return get_sim_state_c41_StateEstimation((SFc41_StateEstimationInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c41_StateEstimation(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c41_StateEstimation((SFc41_StateEstimationInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c41_StateEstimation(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc41_StateEstimationInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_StateEstimation_optimization_info();
    }

    finalize_c41_StateEstimation((SFc41_StateEstimationInstanceStruct*)
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
  initSimStructsc41_StateEstimation((SFc41_StateEstimationInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c41_StateEstimation(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c41_StateEstimation((SFc41_StateEstimationInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

static void mdlSetWorkWidths_c41_StateEstimation(SimStruct *S)
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
      41);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,41,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 41);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,41);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,41,1);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,41,5);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=5; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 1; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,41);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3083566189U));
  ssSetChecksum1(S,(3696694248U));
  ssSetChecksum2(S,(1862442551U));
  ssSetChecksum3(S,(154464426U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c41_StateEstimation(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c41_StateEstimation(SimStruct *S)
{
  SFc41_StateEstimationInstanceStruct *chartInstance;
  chartInstance = (SFc41_StateEstimationInstanceStruct *)utMalloc(sizeof
    (SFc41_StateEstimationInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc41_StateEstimationInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c41_StateEstimation;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c41_StateEstimation;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c41_StateEstimation;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c41_StateEstimation;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c41_StateEstimation;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c41_StateEstimation;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c41_StateEstimation;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c41_StateEstimation;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c41_StateEstimation;
  chartInstance->chartInfo.mdlStart = mdlStart_c41_StateEstimation;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c41_StateEstimation;
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
  mdl_start_c41_StateEstimation(chartInstance);
}

void c41_StateEstimation_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c41_StateEstimation(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c41_StateEstimation(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c41_StateEstimation(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c41_StateEstimation_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
