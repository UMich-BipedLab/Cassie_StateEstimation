/* Include files */

#include "modelInterface.h"
#include "m_MH1YGGHXm7BJTN0FViiwM.h"
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const mxArray *eml_mx;
static const mxArray *b_eml_mx;
static emlrtRSInfo emlrtRSI = { 2,     /* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 12,  /* lineNo */
  "toLogicalCheck",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 1,   /* lineNo */
  "Propagates",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+mixin\\+coder\\Propagates.p"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 26,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 31,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 32,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 33,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 34,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 35,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 36,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 37,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 38,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 39,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 40,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 41,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 42,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 43,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 44,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 45,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 46,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 47,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 48,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 49, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 50, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 55, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 117,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 118,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 119,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 120,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 121,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 122,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 123,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 124,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 125,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 126,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 127,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 128,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 129,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 130,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 131,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 49, /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 61, /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 57, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 58, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 66, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 69, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 72, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 75, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 78, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 81, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 84, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 87, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 90, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 93, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 96, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 99, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 102,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 105,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 108,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 111,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 114,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 117,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 120,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 123,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 126,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 187,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 192,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 199,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 204,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 208,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 210,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 225,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 227,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 389,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 392,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 397,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 401,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 411,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 418,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 420,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 423,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 424,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 447,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 448,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 449,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 450,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 453,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 455,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 456,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 457,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 459,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 462,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 465,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 5,  /* lineNo */
  "Exp",                               /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\utils\\+Angles\\Exp.m"/* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 11, /* lineNo */
  "Exp",                               /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\utils\\+Angles\\Exp.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 37, /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

static emlrtRSInfo yd_emlrtRSI = { 59, /* lineNo */
  "eye",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 92, /* lineNo */
  "eye",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 20, /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 300,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 25, /* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 100,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 358,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 68, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 21, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 63, /* lineNo */
  "xgemm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgemm.m"/* pathName */
};

static emlrtRSInfo je_emlrtRSI = { 85, /* lineNo */
  "xgemm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgemm.m"/* pathName */
};

static emlrtRSInfo ke_emlrtRSI = { 63, /* lineNo */
  "xgemm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgemm.m"/* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 64, /* lineNo */
  "xgemm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgemm.m"/* pathName */
};

static emlrtRSInfo me_emlrtRSI = { 84, /* lineNo */
  "xgemm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgemm.m"/* pathName */
};

static emlrtRSInfo ne_emlrtRSI = { 86, /* lineNo */
  "xgemm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgemm.m"/* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 90, /* lineNo */
  "xgemm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgemm.m"/* pathName */
};

static emlrtRSInfo pe_emlrtRSI = { 294,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo qe_emlrtRSI = { 293,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo re_emlrtRSI = { 513,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 514,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 515,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 516,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo ve_emlrtRSI = { 522,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 524,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo xe_emlrtRSI = { 525,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo ye_emlrtRSI = { 526,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo af_emlrtRSI = { 530,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo bf_emlrtRSI = { 534,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 535,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo df_emlrtRSI = { 541,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo ef_emlrtRSI = { 545,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo ff_emlrtRSI = { 549,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo gf_emlrtRSI = { 550,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo hf_emlrtRSI = { 556,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo if_emlrtRSI = { 560,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo jf_emlrtRSI = { 471,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 472,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 473,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo mf_emlrtRSI = { 474,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo nf_emlrtRSI = { 487,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo of_emlrtRSI = { 491,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo pf_emlrtRSI = { 492,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo qf_emlrtRSI = { 493,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo rf_emlrtRSI = { 494,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo sf_emlrtRSI = { 500,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo tf_emlrtRSI = { 501,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo uf_emlrtRSI = { 1,  /* lineNo */
  "mrdivide",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\mrdivide.p"/* pathName */
};

static emlrtRSInfo vf_emlrtRSI = { 42, /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo wf_emlrtRSI = { 102,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo xf_emlrtRSI = { 100,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo yf_emlrtRSI = { 112,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo ag_emlrtRSI = { 114,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo bg_emlrtRSI = { 119,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo cg_emlrtRSI = { 28, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo dg_emlrtRSI = { 36, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo eg_emlrtRSI = { 50, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo fg_emlrtRSI = { 58, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo gg_emlrtRSI = { 23, /* lineNo */
  "ixamax",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\ixamax.m"/* pathName */
};

static emlrtRSInfo hg_emlrtRSI = { 24, /* lineNo */
  "ixamax",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\ixamax.m"/* pathName */
};

static emlrtRSInfo ig_emlrtRSI = { 45, /* lineNo */
  "xgeru",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgeru.m"/* pathName */
};

static emlrtRSInfo jg_emlrtRSI = { 45, /* lineNo */
  "xger",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xger.m"/* pathName */
};

static emlrtRSInfo kg_emlrtRSI = { 15, /* lineNo */
  "xger",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xger.m"/* pathName */
};

static emlrtRSInfo lg_emlrtRSI = { 54, /* lineNo */
  "xgerx",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgerx.m"/* pathName */
};

static emlrtRSInfo mg_emlrtRSI = { 41, /* lineNo */
  "xgerx",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgerx.m"/* pathName */
};

static emlrtRSInfo ng_emlrtRSI = { 76, /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo og_emlrtRSI = { 59, /* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m"/* pathName */
};

static emlrtRSInfo pg_emlrtRSI = { 68, /* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm.m"/* pathName */
};

static emlrtRSInfo qg_emlrtRSI = { 143,/* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xtrsm.m"/* pathName */
};

static emlrtRSInfo rg_emlrtRSI = { 146,/* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xtrsm.m"/* pathName */
};

static emlrtRSInfo sg_emlrtRSI = { 153,/* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xtrsm.m"/* pathName */
};

static emlrtRSInfo tg_emlrtRSI = { 170,/* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xtrsm.m"/* pathName */
};

static emlrtRSInfo ug_emlrtRSI = { 18, /* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo vg_emlrtRSI = { 332,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo wg_emlrtRSI = { 333,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo xg_emlrtRSI = { 338,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo yg_emlrtRSI = { 339,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo ah_emlrtRSI = { 341,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo bh_emlrtRSI = { 343,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo ch_emlrtRSI = { 345,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo dh_emlrtRSI = { 347,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo eh_emlrtRSI = { 39, /* lineNo */
  "reshape",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pathName */
};

static emlrtRSInfo fh_emlrtRSI = { 61, /* lineNo */
  "reshape",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pathName */
};

static emlrtRSInfo gh_emlrtRSI = { 108,/* lineNo */
  "reshape",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pathName */
};

static emlrtRSInfo hh_emlrtRSI = { 51, /* lineNo */
  "eye",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m"/* pathName */
};

static emlrtRSInfo ih_emlrtRSI = { 570,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo jh_emlrtRSI = { 595,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo kh_emlrtRSI = { 596,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo lh_emlrtRSI = { 604,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo mh_emlrtRSI = { 25, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo nh_emlrtRSI = { 88, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo oh_emlrtRSI = { 55, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo ph_emlrtRSI = { 18, /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo qh_emlrtRSI = { 45, /* lineNo */
  "infocheck",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pathName */
};

static emlrtRSInfo rh_emlrtRSI = { 48, /* lineNo */
  "infocheck",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pathName */
};

static emlrtRSInfo sh_emlrtRSI = { 23, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo th_emlrtRSI = { 30, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo uh_emlrtRSI = { 44, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo vh_emlrtRSI = { 25, /* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo wh_emlrtRSI = { 78, /* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo xh_emlrtRSI = { 121,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo yh_emlrtRSI = { 149,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo ai_emlrtRSI = { 30, /* lineNo */
  "xswap",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xswap.m"/* pathName */
};

static emlrtRSInfo bi_emlrtRSI = { 20, /* lineNo */
  "xswap",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xswap.m"/* pathName */
};

static emlrtRSInfo ci_emlrtRSI = { 54, /* lineNo */
  "xger",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xger.m"/* pathName */
};

static emlrtRSInfo di_emlrtRSI = { 135,/* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xtrsm.m"/* pathName */
};

static emlrtRSInfo ei_emlrtRSI = { 167,/* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xtrsm.m"/* pathName */
};

static emlrtRSInfo fi_emlrtRSI = { 28, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo gi_emlrtRSI = { 32, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 39, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo ii_emlrtRSI = { 14, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo ji_emlrtRSI = { 17, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo ki_emlrtRSI = { 41, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo li_emlrtRSI = { 76, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo mi_emlrtRSI = { 79, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo ni_emlrtRSI = { 19, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo oi_emlrtRSI = { 25, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo pi_emlrtRSI = { 31, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo qi_emlrtRSI = { 32, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo ri_emlrtRSI = { 37, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 47, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 51, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 64, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 78, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 83, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 97, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo yi_emlrtRSI = { 104,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo aj_emlrtRSI = { 12, /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

static emlrtRSInfo bj_emlrtRSI = { 23, /* lineNo */
  "xnrm2",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xnrm2.m"/* pathName */
};

static emlrtRSInfo cj_emlrtRSI = { 36, /* lineNo */
  "xnrm2",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xnrm2.m"/* pathName */
};

static emlrtRSInfo dj_emlrtRSI = { 20, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo ej_emlrtRSI = { 41, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo fj_emlrtRSI = { 53, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo gj_emlrtRSI = { 68, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo hj_emlrtRSI = { 71, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo ij_emlrtRSI = { 81, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo jj_emlrtRSI = { 31, /* lineNo */
  "xscal",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xscal.m"/* pathName */
};

static emlrtRSInfo kj_emlrtRSI = { 38, /* lineNo */
  "xscal",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xscal.m"/* pathName */
};

static emlrtRSInfo lj_emlrtRSI = { 18, /* lineNo */
  "xscal",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xscal.m"/* pathName */
};

static emlrtRSInfo mj_emlrtRSI = { 103,/* lineNo */
  "xzlarf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo nj_emlrtRSI = { 50, /* lineNo */
  "xzlarf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo oj_emlrtRSI = { 68, /* lineNo */
  "xzlarf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo pj_emlrtRSI = { 75, /* lineNo */
  "xzlarf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo qj_emlrtRSI = { 68, /* lineNo */
  "xgemv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgemv.m"/* pathName */
};

static emlrtRSInfo rj_emlrtRSI = { 57, /* lineNo */
  "xgemv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgemv.m"/* pathName */
};

static emlrtRSInfo sj_emlrtRSI = { 73, /* lineNo */
  "xgemv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgemv.m"/* pathName */
};

static emlrtRSInfo tj_emlrtRSI = { 36, /* lineNo */
  "xgemv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgemv.m"/* pathName */
};

static emlrtRSInfo uj_emlrtRSI = { 45, /* lineNo */
  "xgerc",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgerc.m"/* pathName */
};

static emlrtRSInfo vj_emlrtRSI = { 121,/* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo wj_emlrtRSI = { 120,/* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo xj_emlrtRSI = { 72, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo yj_emlrtRSI = { 78, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo ak_emlrtRSI = { 79, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo bk_emlrtRSI = { 89, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo ck_emlrtRSI = { 29, /* lineNo */
  "xunormqr",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRSInfo dk_emlrtRSI = { 32, /* lineNo */
  "xunormqr",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRSInfo ek_emlrtRSI = { 101,/* lineNo */
  "xunormqr",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRSInfo fk_emlrtRSI = { 15, /* lineNo */
  "xzunormqr",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzunormqr.m"/* pathName */
};

static emlrtRSInfo gk_emlrtRSI = { 18, /* lineNo */
  "xzunormqr",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzunormqr.m"/* pathName */
};

static emlrtRSInfo hk_emlrtRSI = { 20, /* lineNo */
  "xzunormqr",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzunormqr.m"/* pathName */
};

static emlrtRSInfo ik_emlrtRSI = { 26, /* lineNo */
  "xzunormqr",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzunormqr.m"/* pathName */
};

static emlrtRSInfo jk_emlrtRSI = { 611,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo kk_emlrtRSI = { 661,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo lk_emlrtRSI = { 666,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo mk_emlrtRSI = { 670,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo nk_emlrtRSI = { 679,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo ok_emlrtRSI = { 683,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo pk_emlrtRSI = { 61, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo qk_emlrtRSI = { 62, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtMCInfo emlrtMCI = { 17,    /* lineNo */
  9,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\error.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 1,   /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 282, /* lineNo */
  13,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtMCInfo d_emlrtMCI = { 53,  /* lineNo */
  23,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 86,  /* lineNo */
  15,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 281, /* lineNo */
  27,                                  /* colNo */
  "cat",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 99,  /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo h_emlrtMCI = { 104, /* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtMCInfo i_emlrtMCI = { 480, /* lineNo */
  13,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtMCInfo j_emlrtMCI = { 481, /* lineNo */
  13,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtMCInfo k_emlrtMCI = { 1,   /* lineNo */
  1,                                   /* colNo */
  "mrdivide",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\mrdivide.p"/* pName */
};

static emlrtMCInfo l_emlrtMCI = { 14,  /* lineNo */
  25,                                  /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtMCInfo m_emlrtMCI = { 14,  /* lineNo */
  9,                                   /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtMCInfo n_emlrtMCI = { 88,  /* lineNo */
  9,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtMCInfo o_emlrtMCI = { 138, /* lineNo */
  9,                                   /* colNo */
  "reshape",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pName */
};

static emlrtMCInfo p_emlrtMCI = { 71,  /* lineNo */
  15,                                  /* colNo */
  "reshape",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pName */
};

static emlrtMCInfo q_emlrtMCI = { 580, /* lineNo */
  13,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtMCInfo r_emlrtMCI = { 37,  /* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtMCInfo s_emlrtMCI = { 52,  /* lineNo */
  19,                                  /* colNo */
  "flt2str",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pName */
};

static emlrtMCInfo t_emlrtMCI = { 622, /* lineNo */
  13,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtMCInfo u_emlrtMCI = { 623, /* lineNo */
  13,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  228,                                 /* lineNo */
  20,                                  /* colNo */
  "Pa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  228,                                 /* lineNo */
  25,                                  /* colNo */
  "Pa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 370,   /* lineNo */
  46,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  1000,                                /* iLast */
  370,                                 /* lineNo */
  46,                                  /* colNo */
  "obj.a_init_vec",                    /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 371, /* lineNo */
  46,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  1000,                                /* iLast */
  371,                                 /* lineNo */
  46,                                  /* colNo */
  "obj.w_init_vec",                    /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 284, /* lineNo */
  72,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { 1,   /* iFirst */
  21,                                  /* iLast */
  284,                                 /* lineNo */
  72,                                  /* colNo */
  "Pa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 284, /* lineNo */
  101,                                 /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { 1,   /* iFirst */
  21,                                  /* iLast */
  284,                                 /* lineNo */
  101,                                 /* colNo */
  "Pa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 284, /* lineNo */
  21,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  60,                                  /* iLast */
  284,                                 /* lineNo */
  21,                                  /* colNo */
  "obj.Pll",                           /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 284, /* lineNo */
  44,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  60,                                  /* iLast */
  284,                                 /* lineNo */
  44,                                  /* colNo */
  "obj.Pll",                           /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  284,                                 /* lineNo */
  13,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtDCInfo g_emlrtDCI = { 285, /* lineNo */
  61,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { 1,   /* iFirst */
  21,                                  /* iLast */
  285,                                 /* lineNo */
  61,                                  /* colNo */
  "Pa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 285, /* lineNo */
  27,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { 1,   /* iFirst */
  60,                                  /* iLast */
  285,                                 /* lineNo */
  27,                                  /* colNo */
  "obj.Pxl",                           /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  285,                                 /* lineNo */
  13,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtDCInfo i_emlrtDCI = { 288, /* lineNo */
  51,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { 1,   /* iFirst */
  21,                                  /* iLast */
  288,                                 /* lineNo */
  51,                                  /* colNo */
  "Pa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 288, /* lineNo */
  21,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { 1,   /* iFirst */
  60,                                  /* iLast */
  288,                                 /* lineNo */
  21,                                  /* colNo */
  "obj.Plt",                           /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  288,                                 /* lineNo */
  13,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtDCInfo k_emlrtDCI = { 442, /* lineNo */
  39,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { 1,   /* iFirst */
  100,                                 /* iLast */
  442,                                 /* lineNo */
  39,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 442, /* lineNo */
  61,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { 1,   /* iFirst */
  100,                                 /* iLast */
  442,                                 /* lineNo */
  61,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { 2,   /* nDims */
  453,                                 /* lineNo */
  18,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtDCInfo m_emlrtDCI = { 458, /* lineNo */
  161,                                 /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { 1,   /* iFirst */
  100,                                 /* iLast */
  458,                                 /* lineNo */
  161,                                 /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 458, /* lineNo */
  183,                                 /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { 1,   /* iFirst */
  100,                                 /* iLast */
  458,                                 /* lineNo */
  183,                                 /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = { 2,   /* nDims */
  465,                                 /* lineNo */
  35,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  446,                                 /* lineNo */
  20,                                  /* colNo */
  "Fc",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 300, /* lineNo */
  44,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { 1,   /* iFirst */
  20,                                  /* iLast */
  300,                                 /* lineNo */
  44,                                  /* colNo */
  "obj.landmarks",                     /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 300, /* lineNo */
  80,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { 1,   /* iFirst */
  100,                                 /* iLast */
  300,                                 /* lineNo */
  80,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 300, /* lineNo */
  113,                                 /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { 1,   /* iFirst */
  100,                                 /* iLast */
  300,                                 /* lineNo */
  113,                                 /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 300, /* lineNo */
  147,                                 /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { 1,   /* iFirst */
  100,                                 /* iLast */
  300,                                 /* lineNo */
  147,                                 /* colNo */
  "obj.Eye",                           /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 300, /* lineNo */
  167,                                 /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { 1,   /* iFirst */
  100,                                 /* iLast */
  300,                                 /* lineNo */
  167,                                 /* colNo */
  "obj.Eye",                           /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 354, /* lineNo */
  26,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  358,                                 /* lineNo */
  56,                                  /* colNo */
  "X",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  353,                                 /* lineNo */
  19,                                  /* colNo */
  "X",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  353,                                 /* lineNo */
  23,                                  /* colNo */
  "X",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  355,                                 /* lineNo */
  18,                                  /* colNo */
  "AdjX",                              /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  355,                                 /* lineNo */
  22,                                  /* colNo */
  "AdjX",                              /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  357,                                 /* lineNo */
  22,                                  /* colNo */
  "AdjX",                              /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  357,                                 /* lineNo */
  34,                                  /* colNo */
  "AdjX",                              /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  358,                                 /* lineNo */
  52,                                  /* colNo */
  "X",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  358,                                 /* lineNo */
  22,                                  /* colNo */
  "AdjX",                              /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  358,                                 /* lineNo */
  34,                                  /* colNo */
  "AdjX",                              /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 293, /* lineNo */
  42,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { 1,  /* iFirst */
  60,                                  /* iLast */
  293,                                 /* lineNo */
  42,                                  /* colNo */
  "obj.Pxl",                           /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 294, /* lineNo */
  33,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { 1,  /* iFirst */
  60,                                  /* iLast */
  294,                                 /* lineNo */
  33,                                  /* colNo */
  "obj.Pxl",                           /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 294, /* lineNo */
  66,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { 1,  /* iFirst */
  60,                                  /* iLast */
  294,                                 /* lineNo */
  66,                                  /* colNo */
  "obj.Pll",                           /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 294, /* lineNo */
  89,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { 1,  /* iFirst */
  60,                                  /* iLast */
  294,                                 /* lineNo */
  89,                                  /* colNo */
  "obj.Pll",                           /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 294, /* lineNo */
  121,                                 /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { 1,  /* iFirst */
  60,                                  /* iLast */
  294,                                 /* lineNo */
  121,                                 /* colNo */
  "obj.Plt",                           /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 295,/* lineNo */
  37,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { 1,  /* iFirst */
  60,                                  /* iLast */
  295,                                 /* lineNo */
  37,                                  /* colNo */
  "obj.Plt",                           /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  288,                                 /* lineNo */
  51,                                  /* colNo */
  "Pa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  285,                                 /* lineNo */
  61,                                  /* colNo */
  "Pa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  284,                                 /* lineNo */
  101,                                 /* colNo */
  "Pa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  284,                                 /* lineNo */
  72,                                  /* colNo */
  "Pa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  283,                                 /* lineNo */
  26,                                  /* colNo */
  "Pa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  283,                                 /* lineNo */
  32,                                  /* colNo */
  "Pa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  285,                                 /* lineNo */
  55,                                  /* colNo */
  "Pa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  286,                                 /* lineNo */
  26,                                  /* colNo */
  "Pa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  286,                                 /* lineNo */
  37,                                  /* colNo */
  "Pa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  287,                                 /* lineNo */
  26,                                  /* colNo */
  "Pa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  287,                                 /* lineNo */
  32,                                  /* colNo */
  "Pa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  288,                                 /* lineNo */
  80,                                  /* colNo */
  "Pa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 519,/* lineNo */
  51,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  519,                                 /* lineNo */
  51,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 520,/* lineNo */
  51,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  520,                                 /* lineNo */
  51,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 522,/* lineNo */
  83,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  522,                                 /* lineNo */
  83,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 523,/* lineNo */
  83,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  523,                                 /* lineNo */
  83,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 526,/* lineNo */
  57,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  526,                                 /* lineNo */
  57,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 526,/* lineNo */
  105,                                 /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  526,                                 /* lineNo */
  105,                                 /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 527,/* lineNo */
  48,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  527,                                 /* lineNo */
  48,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 527,/* lineNo */
  104,                                 /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  527,                                 /* lineNo */
  104,                                 /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 538,/* lineNo */
  51,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  538,                                 /* lineNo */
  51,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = { 540,/* lineNo */
  83,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  540,                                 /* lineNo */
  83,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 542,/* lineNo */
  57,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  542,                                 /* lineNo */
  57,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 553,/* lineNo */
  51,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  553,                                 /* lineNo */
  51,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 555,/* lineNo */
  83,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  555,                                 /* lineNo */
  83,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 557,/* lineNo */
  57,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  557,                                 /* lineNo */
  57,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { 2,   /* nDims */
  473,                                 /* lineNo */
  17,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtDCInfo pb_emlrtDCI = { 483,/* lineNo */
  30,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  483,                                 /* lineNo */
  30,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 483,/* lineNo */
  43,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  483,                                 /* lineNo */
  43,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = { 484, /* lineNo */
  21,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtECInfo g_emlrtECI = { 1,   /* nDims */
  483,                                 /* lineNo */
  13,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtECInfo h_emlrtECI = { 2,   /* nDims */
  483,                                 /* lineNo */
  13,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtECInfo i_emlrtECI = { -1,  /* nDims */
  485,                                 /* lineNo */
  17,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtECInfo j_emlrtECI = { -1,  /* nDims */
  487,                                 /* lineNo */
  17,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtECInfo k_emlrtECI = { 1,   /* nDims */
  491,                                 /* lineNo */
  13,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  492,                                 /* lineNo */
  26,                                  /* colNo */
  "delta",                             /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  496,                                 /* lineNo */
  59,                                  /* colNo */
  "Xa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 496,/* lineNo */
  59,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = { 496,/* lineNo */
  29,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { 1,  /* iFirst */
  20,                                  /* iLast */
  496,                                 /* lineNo */
  29,                                  /* colNo */
  "obj.landmarks",                     /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo l_emlrtECI = { -1,  /* nDims */
  496,                                 /* lineNo */
  13,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtECInfo m_emlrtECI = { 2,   /* nDims */
  501,                                 /* lineNo */
  36,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtECInfo n_emlrtECI = { 2,   /* nDims */
  501,                                 /* lineNo */
  51,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtECInfo o_emlrtECI = { 2,   /* nDims */
  501,                                 /* lineNo */
  35,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  493,                                 /* lineNo */
  22,                                  /* colNo */
  "delta",                             /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  495,                                 /* lineNo */
  24,                                  /* colNo */
  "Xa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  495,                                 /* lineNo */
  28,                                  /* colNo */
  "Xa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  496,                                 /* lineNo */
  55,                                  /* colNo */
  "Xa",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = { 485,/* lineNo */
  22,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  485,                                 /* lineNo */
  22,                                  /* colNo */
  "BigX",                              /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ub_emlrtDCI = { 485,/* lineNo */
  52,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  485,                                 /* lineNo */
  52,                                  /* colNo */
  "BigX",                              /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  341,                                 /* lineNo */
  25,                                  /* colNo */
  "v",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  345,                                 /* lineNo */
  20,                                  /* colNo */
  "dX",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo p_emlrtECI = { -1,  /* nDims */
  345,                                 /* lineNo */
  13,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  332,                                 /* lineNo */
  26,                                  /* colNo */
  "v",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  333,                                 /* lineNo */
  24,                                  /* colNo */
  "v",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  347,                                 /* lineNo */
  22,                                  /* colNo */
  "v",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = { 90, /* lineNo */
  11,                                  /* colNo */
  "eye",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo wb_emlrtDCI = { 90, /* lineNo */
  13,                                  /* colNo */
  "eye",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m",/* pName */
  4                                    /* checkKind */
};

static emlrtECInfo q_emlrtECI = { -1,  /* nDims */
  594,                                 /* lineNo */
  21,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  594,                                 /* lineNo */
  72,                                  /* colNo */
  "measured_landmarks",                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  594,                                 /* lineNo */
  66,                                  /* colNo */
  "measured_landmarks",                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  591,                                 /* lineNo */
  77,                                  /* colNo */
  "measured_landmarks",                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  575,                                 /* lineNo */
  77,                                  /* colNo */
  "measured_landmarks",                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  591,                                 /* lineNo */
  79,                                  /* colNo */
  "measured_landmarks",                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  594,                                 /* lineNo */
  21,                                  /* colNo */
  "Y",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  595,                                 /* lineNo */
  21,                                  /* colNo */
  "b",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  596,                                 /* lineNo */
  23,                                  /* colNo */
  "H",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  597,                                 /* lineNo */
  23,                                  /* colNo */
  "N",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  597,                                 /* lineNo */
  43,                                  /* colNo */
  "N",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  598,                                 /* lineNo */
  24,                                  /* colNo */
  "PI",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  598,                                 /* lineNo */
  44,                                  /* colNo */
  "PI",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  575,                                 /* lineNo */
  79,                                  /* colNo */
  "measured_landmarks",                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  325,                                 /* lineNo */
  26,                                  /* colNo */
  "v",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  325,                                 /* lineNo */
  33,                                  /* colNo */
  "v",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  326,                                 /* lineNo */
  19,                                  /* colNo */
  "v",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  326,                                 /* lineNo */
  33,                                  /* colNo */
  "v",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  327,                                 /* lineNo */
  20,                                  /* colNo */
  "v",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  327,                                 /* lineNo */
  27,                                  /* colNo */
  "v",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo r_emlrtECI = { 2,   /* nDims */
  683,                                 /* lineNo */
  47,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtBCInfo yd_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  679,                                 /* lineNo */
  105,                                 /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo xb_emlrtDCI = { 679,/* lineNo */
  105,                                 /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = { 1,  /* iFirst */
  20,                                  /* iLast */
  675,                                 /* lineNo */
  41,                                  /* colNo */
  "obj.landmarks",                     /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo yb_emlrtDCI = { 675,/* lineNo */
  41,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  675,                                 /* lineNo */
  88,                                  /* colNo */
  "new_landmarks",                     /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo s_emlrtECI = { -1,  /* nDims */
  637,                                 /* lineNo */
  21,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtBCInfo ce_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  637,                                 /* lineNo */
  37,                                  /* colNo */
  "new_landmarks",                     /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo t_emlrtECI = { -1,  /* nDims */
  654,                                 /* lineNo */
  21,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtECInfo u_emlrtECI = { -1,  /* nDims */
  651,                                 /* lineNo */
  21,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtECInfo v_emlrtECI = { -1,  /* nDims */
  645,                                 /* lineNo */
  21,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtBCInfo de_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  654,                                 /* lineNo */
  111,                                 /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ac_emlrtDCI = { 654,/* lineNo */
  111,                                 /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  648,                                 /* lineNo */
  40,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bc_emlrtDCI = { 648,/* lineNo */
  40,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fe_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  643,                                 /* lineNo */
  36,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cc_emlrtDCI = { 643,/* lineNo */
  36,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  642,                                 /* lineNo */
  52,                                  /* colNo */
  "measured_landmarks",                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo he_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  642,                                 /* lineNo */
  46,                                  /* colNo */
  "measured_landmarks",                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ie_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  637,                                 /* lineNo */
  67,                                  /* colNo */
  "measured_landmarks",                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  635,                                 /* lineNo */
  66,                                  /* colNo */
  "measured_landmarks",                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  616,                                 /* lineNo */
  66,                                  /* colNo */
  "measured_landmarks",                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo dc_emlrtDCI = { 625,/* lineNo */
  32,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ec_emlrtDCI = { 625,/* lineNo */
  32,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo fc_emlrtDCI = { 627,/* lineNo */
  33,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo gc_emlrtDCI = { 627,/* lineNo */
  33,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo hc_emlrtDCI = { 628,/* lineNo */
  38,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo ic_emlrtDCI = { 624,/* lineNo */
  23,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo jc_emlrtDCI = { 624,/* lineNo */
  23,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo le_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  674,                                 /* lineNo */
  79,                                  /* colNo */
  "new_landmarks",                     /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = { 1,  /* iFirst */
  20,                                  /* iLast */
  674,                                 /* lineNo */
  25,                                  /* colNo */
  "obj.landmark_ids",                  /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kc_emlrtDCI = { 674,/* lineNo */
  25,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  682,                                 /* lineNo */
  27,                                  /* colNo */
  "G",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  635,                                 /* lineNo */
  68,                                  /* colNo */
  "measured_landmarks",                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  644,                                 /* lineNo */
  21,                                  /* colNo */
  "Y2",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lc_emlrtDCI = { 645,/* lineNo */
  21,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  645,                                 /* lineNo */
  21,                                  /* colNo */
  "Y",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo re_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  649,                                 /* lineNo */
  26,                                  /* colNo */
  "H2",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo se_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  651,                                 /* lineNo */
  23,                                  /* colNo */
  "H",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo te_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  653,                                 /* lineNo */
  23,                                  /* colNo */
  "N",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ue_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  653,                                 /* lineNo */
  43,                                  /* colNo */
  "N",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ve_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  654,                                 /* lineNo */
  24,                                  /* colNo */
  "PI",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mc_emlrtDCI = { 654,/* lineNo */
  44,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo we_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  654,                                 /* lineNo */
  44,                                  /* colNo */
  "PI",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  616,                                 /* lineNo */
  68,                                  /* colNo */
  "measured_landmarks",                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo w_emlrtECI = { 1,   /* nDims */
  3,                                   /* lineNo */
  4,                                   /* colNo */
  "",                                  /* fName */
  ""                                   /* pName */
};

static emlrtECInfo x_emlrtECI = { 2,   /* nDims */
  3,                                   /* lineNo */
  4,                                   /* colNo */
  "",                                  /* fName */
  ""                                   /* pName */
};

static emlrtRSInfo rk_emlrtRSI = { 37, /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo sk_emlrtRSI = { 99, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo tk_emlrtRSI = { 104,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo uk_emlrtRSI = { 481,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo vk_emlrtRSI = { 480,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo wk_emlrtRSI = { 281,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo xk_emlrtRSI = { 623,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo yk_emlrtRSI = { 622,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo al_emlrtRSI = { 17, /* lineNo */
  "error",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\error.m"/* pathName */
};

static emlrtRSInfo bl_emlrtRSI = { 580,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo cl_emlrtRSI = { 88, /* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo dl_emlrtRSI = { 53, /* lineNo */
  "assertValidSizeArg",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pathName */
};

static emlrtRSInfo el_emlrtRSI = { 71, /* lineNo */
  "reshape",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pathName */
};

static emlrtRSInfo fl_emlrtRSI = { 138,/* lineNo */
  "reshape",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pathName */
};

static emlrtRSInfo gl_emlrtRSI = { 282,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo hl_emlrtRSI = { 86, /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo il_emlrtRSI = { 14, /* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo jl_emlrtRSI = { 52, /* lineNo */
  "flt2str",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pathName */
};

/* Function Declarations */
static RIEKF *RIEKF_RIEKF(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance,
  RIEKF *obj);
static void error(const emlrtStack *sp);
static void SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj);
static void b_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj);
static void c_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj);
static void d_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj);
static void e_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj);
static void f_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj);
static void g_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj);
static void h_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj);
static void i_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj);
static void j_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj);
static void k_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj);
static void l_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj);
static void m_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj);
static void n_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj);
static void o_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj);
static void p_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj);
static void q_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj);
static void r_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj);
static void s_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj);
static void t_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj);
static void RIEKF_setupImpl(RIEKF *obj);
static void power(real_T a[3], real_T y[3]);
static void SystemCore_checkTunablePropChange(const emlrtStack *sp, RIEKF *obj);
static void mw__internal__system___fcn(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, boolean_T varargin_1, boolean_T
  varargin_2, boolean_T varargin_3, boolean_T varargin_4, real_T varargin_5[3],
  real_T varargin_6[3], real_T varargin_7[3], real_T varargin_8[3], real_T
  varargin_9[3], real_T varargin_10[14], real_T varargin_11[3], real_T
  varargin_12[3], real_T varargin_13[3], real_T varargin_14[6], real_T
  varargin_15[3], real_T varargin_16[3], real_T varargin_17[3], real_T
  varargin_18[3], real_T varargin_19[3], real_T varargin_20[4], real_T
  varargin_21, real_T varargin_22, real_T varargin_23[3], real_T varargin_24[3],
  real_T varargin_25[14], real_T varargin_26[2], real_T varargin_27_data[],
  int32_T varargin_27_sizes[2], real_T varargin_28[49], real_T varargout_1_data[],
  int32_T varargout_1_sizes[2], real_T varargout_2[6], real_T varargout_3[441],
  real_T *varargout_4, real_T varargout_5[20]);
static boolean_T isequal(boolean_T varargin_1, boolean_T varargin_2);
static boolean_T b_isequal(real_T varargin_1[3], real_T varargin_2[3]);
static boolean_T c_isequal(real_T varargin_1[14], real_T varargin_2[14]);
static boolean_T d_isequal(real_T varargin_1[6], real_T varargin_2[6]);
static boolean_T e_isequal(real_T varargin_1[4], real_T varargin_2[4]);
static void SystemCore_step(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance,
  const emlrtStack *sp, RIEKF *obj, real_T varargin_1, real_T varargin_2, real_T
  varargin_3[3], real_T varargin_4[3], real_T varargin_5[14], real_T varargin_6
  [2], real_T varargin_7_data[], int32_T varargin_7_sizes[2], real_T varargin_8
  [49], real_T varargout_1_data[], int32_T varargout_1_sizes[2], real_T
  varargout_2[6], real_T varargout_3[441], real_T *varargout_4, real_T
  varargout_5[20]);
static void SystemCore_setupAndReset(const emlrtStack *sp, RIEKF *obj);
static void SystemCore_systemblock_prestep(RIEKF *obj);
static void SystemCore_checkTunableProps(RIEKF *obj);
static void RIEKF_stepImpl(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance,
  const emlrtStack *sp, RIEKF *obj, real_T enable, real_T t, real_T w[3], real_T
  a[3], real_T encoders[14], real_T contact[2], real_T measured_landmarks_data[],
  int32_T measured_landmarks_sizes[2], real_T X_init[49], real_T X_data[],
  int32_T X_sizes[2], real_T theta[6], real_T P[441], real_T *enabled, real_T
  landmark_ids[20]);
static void RIEKF_InitializeBias(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T w[3], real_T a[3],
  real_T X_init[49]);
static real_T norm(real_T x[3]);
static void mean(real_T x[3000], real_T y[3]);
static boolean_T any(boolean_T x[2]);
static void RIEKF_InitializeFilter(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T enable, real_T
  X_init[49]);
static void RIEKF_Store_Covariance(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Pa[441]);
static void b_RIEKF_Store_Covariance(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Pa[441]);
static void RIEKF_Predict_State(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T w[3], real_T a[3],
  real_T encoders[14], real_T contact[2], real_T dt);
static void RIEKF_Separate_State(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, real_T X[49], real_T theta[6], real_T R[9], real_T v[3],
  real_T p[3], real_T dR[3], real_T dL[3], real_T bg[3], real_T ba[3]);
static void Exp(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance, real_T v[3],
                real_T output[9]);
static void eye(real_T I[9]);
static real_T mpower(real_T a);
static void p_VectorNav_to_RightToeBottom(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, real_T var1[14], real_T output1[3]);
static void p_VectorNav_to_LeftToeBottom(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, real_T var1[14], real_T output1[3]);
static void RIEKF_skew(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance,
  real_T v[3], real_T A[9]);
static void blkdiag(real_T b_varargin_2_data[], int32_T varargin_2_sizes[2],
                    real_T jb_y_data[], int32_T y_sizes[2]);
static void output_size(int32_T varargin_1_sizes[2], int32_T *nrows, int32_T
  *ncols);
static void b_blkdiag(real_T e_varargin_1_data[], int32_T varargin_1_sizes[2],
                      real_T jb_y_data[], int32_T y_sizes[2]);
static void b_eye(const emlrtStack *sp, real_T varargin_1[2], real_T e_I_data[],
                  int32_T I_sizes[2]);
static void check_forloop_overflow_error(const emlrtStack *sp);
static void RIEKF_Augmented_State(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T e_Xa_data[], int32_T
  Xa_sizes[2]);
static void RIEKF_Adjoint(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance,
  const emlrtStack *sp, real_T X_data[], int32_T X_sizes[2], real_T AdjX_data[],
  int32_T AdjX_sizes[2]);
static void c_blkdiag(real_T e_varargin_1_data[], int32_T varargin_1_sizes[2],
                      real_T jb_y_data[], int32_T y_sizes[2]);
static void R_VectorNav_to_RightToeBottom(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, real_T var1[14], real_T output1[9]);
static void R_VectorNav_to_LeftToeBottom(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, real_T var1[14], real_T output1[9]);
static void d_blkdiag(real_T varargin_1[9], real_T varargin_2[9], real_T
                      varargin_4[9], real_T varargin_5[9], real_T
                      varargin_6_data[], int32_T varargin_6_sizes[2], real_T
                      varargin_7[9], real_T varargin_8[9], real_T jb_y_data[],
                      int32_T y_sizes[2]);
static void RIEKF_Construct_State(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, real_T R[9], real_T v[3], real_T p[3], real_T dR[3], real_T
  dL[3], real_T bg[3], real_T ba[3], real_T X[49], real_T theta[6]);
static void RIEKF_Augmented_Covariance(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T g_Pa_data[], int32_T
  Pa_sizes[2]);
static void c_RIEKF_Store_Covariance(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T g_Pa_data[], int32_T
  Pa_sizes[2]);
static void RIEKF_Update_ForwardKinematics(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *
  moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T encoders[14], real_T
  contact[2]);
static void J_VectorNav_to_RightToeBottom(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, real_T var1[14], real_T output1[42]);
static void J_VectorNav_to_LeftToeBottom(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, real_T var1[14], real_T output1[42]);
static void e_blkdiag(real_T varargin_1[9], real_T varargin_2[9], real_T y[36]);
static void RIEKF_Update_State(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Y_data[], int32_T
  Y_sizes, real_T g_b_data[], int32_T b_sizes, real_T H_data[], int32_T H_sizes
  [2], real_T N[36], real_T c_PI_data[], int32_T PI_sizes[2]);
static void mrdivide(const emlrtStack *sp, real_T b_A_data[], int32_T A_sizes[2],
                     real_T B[36], real_T jb_y_data[], int32_T y_sizes[2]);
static void lusolve(const emlrtStack *sp, real_T A[36], real_T b_B_data[],
                    int32_T B_sizes[2], real_T X_data[], int32_T X_sizes[2]);
static void warn_singular(const emlrtStack *sp);
static void warning(const emlrtStack *sp);
static void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, int32_T
  indexSize[2]);
static void RIEKF_exp(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance,
                      const emlrtStack *sp, real_T v_data[], int32_T v_sizes,
                      real_T dX_data[], int32_T dX_sizes[2]);
static void b_error(const emlrtStack *sp);
static void c_eye(const emlrtStack *sp, real_T varargin_1, real_T e_I_data[],
                  int32_T I_sizes[2]);
static void b_indexShapeCheck(const emlrtStack *sp, int32_T matrixSize);
static void b_RIEKF_Update_State(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Y_data[], int32_T
  Y_sizes, real_T g_b_data[], int32_T b_sizes, real_T H_data[], int32_T H_sizes
  [2], real_T N[9], real_T c_PI_data[], int32_T PI_sizes[2]);
static void b_mrdivide(const emlrtStack *sp, real_T b_A_data[], int32_T A_sizes
  [2], real_T B[9], real_T jb_y_data[], int32_T y_sizes[2]);
static void b_lusolve(const emlrtStack *sp, real_T A[9], real_T b_B_data[],
                      int32_T B_sizes[2], real_T X_data[], int32_T X_sizes[2]);
static void RIEKF_Update_StaticLandmarks(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T
  measured_landmarks_data[], int32_T measured_landmarks_sizes[2]);
static void b_RIEKF_skew(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance,
  const emlrtStack *sp, real_T v_data[], int32_T v_sizes[2], real_T A[9]);
static void c_RIEKF_Update_State(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Y_data[], int32_T
  Y_sizes, real_T g_b_data[], int32_T b_sizes, real_T H_data[], int32_T H_sizes
  [2], real_T b_N_data[], int32_T N_sizes[2], real_T c_PI_data[], int32_T
  PI_sizes[2]);
static void c_mrdivide(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance,
  const emlrtStack *sp, real_T b_A_data[], int32_T A_sizes[2], real_T b_B_data[],
  int32_T B_sizes[2], real_T jb_y_data[], int32_T y_sizes[2]);
static void c_lusolve(const emlrtStack *sp, real_T b_A_data[], int32_T A_sizes[2],
                      real_T b_B_data[], int32_T B_sizes[2], real_T X_data[],
                      int32_T X_sizes[2]);
static void c_error(const emlrtStack *sp);
static void d_error(const emlrtStack *sp, int32_T varargin_2);
static void eml_signed_integer_colon(const emlrtStack *sp, int32_T b, int32_T
  jb_y_data[], int32_T y_sizes[2]);
static void qrsolve(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance, const
                    emlrtStack *sp, real_T b_A_data[], int32_T A_sizes[2],
                    real_T b_B_data[], int32_T B_sizes[2], real_T Y_data[],
                    int32_T Y_sizes[2]);
static void e_error(const emlrtStack *sp, int32_T varargin_2);
static int32_T rankFromQR(const emlrtStack *sp, real_T b_A_data[], int32_T
  A_sizes[2]);
static void b_warning(const emlrtStack *sp, int32_T varargin_1, char_T
                      varargin_2[14]);
static void f_error(const emlrtStack *sp, int32_T varargin_2);
static void RIEKF_Update_Landmarks(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T
  measured_landmarks_data[], int32_T measured_landmarks_sizes[2]);
static void d_RIEKF_Update_State(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Y_data[], int32_T
  Y_sizes, real_T g_b_data[], int32_T b_sizes, real_T H_data[], int32_T H_sizes
  [2], real_T b_N_data[], int32_T N_sizes[2], real_T c_PI_data[], int32_T
  PI_sizes[2]);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[45]);
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [30]);
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u[4]);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_sprintf,
  const char_T *identifier, char_T y[14]);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
static void cgxe_mdl_start(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance);
static const mxArray *d_emlrt_marshallOut(const int32_T u);
static const mxArray *e_emlrt_marshallOut(const boolean_T u);
static const mxArray *f_emlrt_marshallOut(const real_T u[3]);
static const mxArray *g_emlrt_marshallOut(const real_T u[14]);
static const mxArray *h_emlrt_marshallOut(const real_T u[6]);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_sysobj,
  const char_T *identifier, RIEKF *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, RIEKF *y);
static int32_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[3]);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[14]);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[6]);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[4]);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[49]);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[60]);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[225]);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[3600]);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[900]);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[36]);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[90]);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[360]);
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[3000]);
static real_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[2]);
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[20]);
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[9]);
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[196]);
static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[441]);
static boolean_T ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier);
static void cgxe_mdl_set_sim_state(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const mxArray *st);
static const mxArray *message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static void g_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void b_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location);
static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);
static int32_T cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static boolean_T db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[3]);
static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[14]);
static void gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[6]);
static void hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[4]);
static void ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[49]);
static void jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[60]);
static void kb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[225]);
static void lb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[3600]);
static void mb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[900]);
static void nb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[36]);
static void ob_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[90]);
static void pb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[360]);
static void qb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[3000]);
static real_T rb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void sb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[2]);
static void tb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[20]);
static void ub_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[9]);
static void vb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[196]);
static void wb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[441]);
static void b_RIEKF_RIEKF(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance,
  RIEKF **obj);
static void xgetrf(const emlrtStack *sp, int32_T m, int32_T n, real_T b_A_data[],
                   int32_T A_sizes[2], int32_T lda, int32_T ipiv_data[], int32_T
                   ipiv_sizes[2], int32_T *info);
static void xtrsm(int32_T m, int32_T n, real_T b_A_data[], int32_T lda, real_T
                  b_B_data[], int32_T ldb);
static void b_xtrsm(int32_T m, int32_T n, real_T b_A_data[], int32_T lda, real_T
                    b_B_data[], int32_T ldb);
static void xgeqp3(const emlrtStack *sp, real_T b_A_data[], int32_T A_sizes[2],
                   real_T tau_data[], int32_T *tau_sizes, int32_T jpvt_data[],
                   int32_T jpvt_sizes[2]);
static int32_T div_nzp_s32(int32_T numerator, int32_T denominator);
static void init_simulink_io_address(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance);

/* Function Definitions */
static RIEKF *RIEKF_RIEKF(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance,
  RIEKF *obj)
{
  RIEKF *b_obj;
  b_obj = obj;
  b_RIEKF_RIEKF(moduleInstance, &b_obj);
  return b_obj;
}

static void error(const emlrtStack *sp)
{
  emlrtStack st;
  int32_T i0;
  const mxArray *y;
  char_T u[19];
  static char_T cv0[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l',
    'o', 'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 19 };

  st.prev = sp;
  st.tls = sp->tls;
  for (i0 = 0; i0 < 19; i0++) {
    u[i0] = cv0[i0];
  }

  y = NULL;
  m0 = emlrtCreateCharArray(2, iv0);
  emlrtInitCharArrayR2013a(sp, 19, m0, &u[0]);
  emlrtAssign(&y, m0);
  st.site = &al_emlrtRSI;
  g_error(&st, message(&st, y, &emlrtMCI), &emlrtMCI);
}

static void SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj)
{
  RIEKF *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

static void b_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj)
{
  RIEKF *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

static void c_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj)
{
  RIEKF *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

static void d_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj)
{
  RIEKF *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

static void e_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj)
{
  RIEKF *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

static void f_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj)
{
  RIEKF *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

static void g_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj)
{
  RIEKF *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

static void h_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj)
{
  RIEKF *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

static void i_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj)
{
  RIEKF *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

static void j_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj)
{
  RIEKF *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

static void k_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj)
{
  RIEKF *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

static void l_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj)
{
  RIEKF *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

static void m_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj)
{
  RIEKF *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

static void n_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj)
{
  RIEKF *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

static void o_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj)
{
  RIEKF *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

static void p_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj)
{
  RIEKF *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

static void q_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj)
{
  RIEKF *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

static void r_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj)
{
  RIEKF *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

static void s_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj)
{
  RIEKF *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

static void t_SystemProp_matlabCodegenNotifyAnyProp(RIEKF *obj)
{
  RIEKF *b_obj;
  boolean_T flag;
  b_obj = obj;
  flag = (b_obj->isInitialized == 1);
  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

static void RIEKF_setupImpl(RIEKF *obj)
{
  int32_T i;
  emlrtStack st;
  real_T v[3];
  real_T d[9];
  real_T a[14];
  emlrtStack b_st;
  real_T y[14];
  real_T b_d[196];
  real_T c_d[9];
  real_T d_d[9];
  real_T e_d[9];
  real_T f_d[9];
  real_T g_d[9];
  real_T h_d[9];
  real_T b_y[441];
  int32_T i1;
  int8_T I[49];
  int8_T b_I[225];
  int8_T c_I[3600];
  int8_T d_I[900];
  int8_T e_I[36];
  int8_T f_I[90];
  int8_T g_I[360];
  obj->filter_enabled = false;
  obj->bias_initialized = false;
  for (i = 0; i < 3000; i++) {
    obj->a_init_vec[i] = 0.0;
  }

  for (i = 0; i < 3000; i++) {
    obj->w_init_vec[i] = 0.0;
  }

  st.site = &db_emlrtRSI;
  power(obj->gyro_noise_std, v);
  for (i = 0; i < 9; i++) {
    d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    d[i + 3 * i] = v[i];
  }

  for (i = 0; i < 9; i++) {
    obj->Qg[i] = d[i];
  }

  st.site = &eb_emlrtRSI;
  power(obj->gyro_bias_noise_std, v);
  for (i = 0; i < 9; i++) {
    d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    d[i + 3 * i] = v[i];
  }

  for (i = 0; i < 9; i++) {
    obj->Qbg[i] = d[i];
  }

  st.site = &fb_emlrtRSI;
  power(obj->accel_noise_std, v);
  for (i = 0; i < 9; i++) {
    d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    d[i + 3 * i] = v[i];
  }

  for (i = 0; i < 9; i++) {
    obj->Qa[i] = d[i];
  }

  st.site = &gb_emlrtRSI;
  power(obj->accel_bias_noise_std, v);
  for (i = 0; i < 9; i++) {
    d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    d[i + 3 * i] = v[i];
  }

  for (i = 0; i < 9; i++) {
    obj->Qba[i] = d[i];
  }

  st.site = &hb_emlrtRSI;
  power(obj->contact_noise_std, v);
  for (i = 0; i < 9; i++) {
    d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    d[i + 3 * i] = v[i];
  }

  for (i = 0; i < 9; i++) {
    obj->Qc[i] = d[i];
  }

  st.site = &ib_emlrtRSI;
  for (i = 0; i < 14; i++) {
    a[i] = obj->encoder_noise_std[i];
  }

  b_st.site = &sb_emlrtRSI;
  for (i = 0; i < 14; i++) {
    y[i] = a[i] * a[i];
  }

  for (i = 0; i < 196; i++) {
    b_d[i] = 0.0;
  }

  for (i = 0; i < 14; i++) {
    b_d[i + 14 * i] = y[i];
  }

  for (i = 0; i < 196; i++) {
    obj->Qe[i] = b_d[i];
  }

  st.site = &jb_emlrtRSI;
  power(obj->landmark_noise_std, v);
  for (i = 0; i < 9; i++) {
    d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    d[i + 3 * i] = v[i];
  }

  for (i = 0; i < 9; i++) {
    obj->Ql[i] = d[i];
  }

  st.site = &kb_emlrtRSI;
  power(obj->prior_forward_kinematics_std, v);
  for (i = 0; i < 9; i++) {
    d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    d[i + 3 * i] = v[i];
  }

  for (i = 0; i < 9; i++) {
    obj->Np[i] = d[i];
  }

  st.site = &lb_emlrtRSI;
  power(*(real_T (*)[3])&obj->prior_base_pose_std[0], v);
  for (i = 0; i < 9; i++) {
    d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    d[i + 3 * i] = v[i];
  }

  st.site = &mb_emlrtRSI;
  power(obj->prior_base_velocity_std, v);
  for (i = 0; i < 9; i++) {
    c_d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    c_d[i + 3 * i] = v[i];
  }

  st.site = &nb_emlrtRSI;
  power(*(real_T (*)[3])&obj->prior_base_pose_std[3], v);
  for (i = 0; i < 9; i++) {
    d_d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    d_d[i + 3 * i] = v[i];
  }

  st.site = &ob_emlrtRSI;
  power(obj->prior_contact_position_std, v);
  for (i = 0; i < 9; i++) {
    e_d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    e_d[i + 3 * i] = v[i];
  }

  st.site = &pb_emlrtRSI;
  power(obj->prior_contact_position_std, v);
  for (i = 0; i < 9; i++) {
    f_d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    f_d[i + 3 * i] = v[i];
  }

  st.site = &qb_emlrtRSI;
  power(obj->prior_gyro_bias_std, v);
  for (i = 0; i < 9; i++) {
    g_d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    g_d[i + 3 * i] = v[i];
  }

  st.site = &rb_emlrtRSI;
  power(obj->prior_accel_bias_std, v);
  for (i = 0; i < 9; i++) {
    h_d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    h_d[i + 3 * i] = v[i];
  }

  for (i = 0; i < 441; i++) {
    b_y[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    for (i1 = 0; i1 < 3; i1++) {
      b_y[i1 + 21 * i] = d[i1 + 3 * i];
      b_y[(i1 + 21 * (3 + i)) + 3] = c_d[i1 + 3 * i];
      b_y[(i1 + 21 * (6 + i)) + 6] = d_d[i1 + 3 * i];
      b_y[(i1 + 21 * (9 + i)) + 9] = e_d[i1 + 3 * i];
      b_y[(i1 + 21 * (12 + i)) + 12] = f_d[i1 + 3 * i];
      b_y[(i1 + 21 * (15 + i)) + 15] = g_d[i1 + 3 * i];
      b_y[(i1 + 21 * (18 + i)) + 18] = h_d[i1 + 3 * i];
    }
  }

  for (i = 0; i < 441; i++) {
    obj->P_prior[i] = b_y[i];
  }

  for (i = 0; i < 3; i++) {
    obj->bg0[i] = obj->gyro_bias_init[i];
  }

  for (i = 0; i < 3; i++) {
    obj->ba0[i] = obj->accel_bias_init[i];
  }

  for (i = 0; i < 49; i++) {
    I[i] = 0;
  }

  for (i = 0; i < 7; i++) {
    I[i + 7 * i] = 1;
  }

  for (i = 0; i < 49; i++) {
    obj->X[i] = (real_T)I[i];
  }

  for (i = 0; i < 60; i++) {
    obj->landmarks[i] = 0.0;
  }

  for (i = 0; i < 6; i++) {
    obj->theta[i] = 0.0;
  }

  for (i = 0; i < 225; i++) {
    b_I[i] = 0;
  }

  for (i = 0; i < 15; i++) {
    b_I[i + 15 * i] = 1;
  }

  for (i = 0; i < 225; i++) {
    obj->Pxx[i] = (real_T)b_I[i];
  }

  for (i = 0; i < 3600; i++) {
    c_I[i] = 0;
  }

  for (i = 0; i < 60; i++) {
    c_I[i + 60 * i] = 1;
  }

  for (i = 0; i < 3600; i++) {
    obj->Pll[i] = (real_T)c_I[i];
  }

  for (i = 0; i < 900; i++) {
    d_I[i] = 0;
  }

  for (i = 0; i < 15; i++) {
    d_I[i + 15 * i] = 1;
  }

  for (i = 0; i < 900; i++) {
    obj->Pxl[i] = (real_T)d_I[i];
  }

  for (i = 0; i < 36; i++) {
    e_I[i] = 0;
  }

  for (i = 0; i < 6; i++) {
    e_I[i + 6 * i] = 1;
  }

  for (i = 0; i < 36; i++) {
    obj->Ptt[i] = (real_T)e_I[i];
  }

  for (i = 0; i < 90; i++) {
    f_I[i] = 0;
  }

  for (i = 0; i < 6; i++) {
    f_I[i + 15 * i] = 1;
  }

  for (i = 0; i < 90; i++) {
    obj->Pxt[i] = (real_T)f_I[i];
  }

  for (i = 0; i < 360; i++) {
    g_I[i] = 0;
  }

  for (i = 0; i < 6; i++) {
    g_I[i + 60 * i] = 1;
  }

  for (i = 0; i < 360; i++) {
    obj->Plt[i] = (real_T)g_I[i];
  }

  for (i = 0; i < 3; i++) {
    obj->w_prev[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    obj->a_prev[i] = 0.0;
  }

  for (i = 0; i < 14; i++) {
    obj->encoders_prev[i] = 0.0;
  }

  for (i = 0; i < 2; i++) {
    obj->contact_prev[i] = 0.0;
  }

  obj->t_prev = 0.0;
  for (i = 0; i < 20; i++) {
    obj->landmark_ids[i] = 0.0;
  }

  obj->num_landmarks = 0.0;
}

static void power(real_T a[3], real_T y[3])
{
  emlrtStack st;
  int32_T k;
  st.site = &sb_emlrtRSI;
  for (k = 0; k < 3; k++) {
    y[k] = a[k] * a[k];
  }
}

static void SystemCore_checkTunablePropChange(const emlrtStack *sp, RIEKF *obj)
{
  emlrtStack st;
  int32_T i2;
  const mxArray *y;
  char_T u[44];
  static char_T cv1[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 44 };

  st.prev = sp;
  st.tls = sp->tls;
  if (obj->TunablePropsChanged) {
    for (i2 = 0; i2 < 44; i2++) {
      u[i2] = cv1[i2];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 44, m1, &u[0]);
    emlrtAssign(&y, m1);
    st.site = &d_emlrtRSI;
    g_error(&st, message(&st, y, &b_emlrtMCI), &b_emlrtMCI);
  }
}

static void mw__internal__system___fcn(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, boolean_T varargin_1, boolean_T
  varargin_2, boolean_T varargin_3, boolean_T varargin_4, real_T varargin_5[3],
  real_T varargin_6[3], real_T varargin_7[3], real_T varargin_8[3], real_T
  varargin_9[3], real_T varargin_10[14], real_T varargin_11[3], real_T
  varargin_12[3], real_T varargin_13[3], real_T varargin_14[6], real_T
  varargin_15[3], real_T varargin_16[3], real_T varargin_17[3], real_T
  varargin_18[3], real_T varargin_19[3], real_T varargin_20[4], real_T
  varargin_21, real_T varargin_22, real_T varargin_23[3], real_T varargin_24[3],
  real_T varargin_25[14], real_T varargin_26[2], real_T varargin_27_data[],
  int32_T varargin_27_sizes[2], real_T varargin_28[49], real_T varargout_1_data[],
  int32_T varargout_1_sizes[2], real_T varargout_2[6], real_T varargout_3[441],
  real_T *varargout_4, real_T varargout_5[20])
{
  emlrtStack st;
  real_T dv0[3];
  int32_T i;
  real_T dv1[14];
  real_T dv2[6];
  real_T dv3[4];
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &g_emlrtRSI;
    RIEKF_RIEKF(moduleInstance, &moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
    st.site = &h_emlrtRSI;
    SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    moduleInstance->sysobj.static_bias_initialization = varargin_1;
    st.site = &i_emlrtRSI;
    b_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    moduleInstance->sysobj.ekf_update_enabled = varargin_2;
    st.site = &j_emlrtRSI;
    c_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    moduleInstance->sysobj.enable_bias_estimation = varargin_3;
    st.site = &k_emlrtRSI;
    d_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    moduleInstance->sysobj.enable_static_landmarks = varargin_4;
    st.site = &l_emlrtRSI;
    e_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_noise_std[i] = varargin_5[i];
    }

    st.site = &m_emlrtRSI;
    f_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_noise_std[i] = varargin_6[i];
    }

    st.site = &n_emlrtRSI;
    g_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_noise_std[i] = varargin_7[i];
    }

    st.site = &o_emlrtRSI;
    h_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_noise_std[i] = varargin_8[i];
    }

    st.site = &p_emlrtRSI;
    i_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.contact_noise_std[i] = varargin_9[i];
    }

    st.site = &q_emlrtRSI;
    j_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 14; i++) {
      moduleInstance->sysobj.encoder_noise_std[i] = varargin_10[i];
    }

    st.site = &r_emlrtRSI;
    k_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.landmark_noise_std[i] = varargin_11[i];
    }

    st.site = &s_emlrtRSI;
    l_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_init[i] = varargin_12[i];
    }

    st.site = &t_emlrtRSI;
    m_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_init[i] = varargin_13[i];
    }

    st.site = &u_emlrtRSI;
    n_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 6; i++) {
      moduleInstance->sysobj.prior_base_pose_std[i] = varargin_14[i];
    }

    st.site = &v_emlrtRSI;
    o_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_base_velocity_std[i] = varargin_15[i];
    }

    st.site = &w_emlrtRSI;
    p_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_contact_position_std[i] = varargin_16[i];
    }

    st.site = &x_emlrtRSI;
    q_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_gyro_bias_std[i] = varargin_17[i];
    }

    st.site = &y_emlrtRSI;
    r_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_accel_bias_std[i] = varargin_18[i];
    }

    st.site = &ab_emlrtRSI;
    s_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_forward_kinematics_std[i] = varargin_19[i];
    }

    st.site = &bb_emlrtRSI;
    t_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 4; i++) {
      moduleInstance->sysobj.landmark_positions[i] = varargin_20[i];
    }
  }

  if (!isequal(moduleInstance->sysobj.static_bias_initialization, varargin_1)) {
    st.site = &wb_emlrtRSI;
    SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    moduleInstance->sysobj.static_bias_initialization = varargin_1;
  }

  if (!isequal(moduleInstance->sysobj.ekf_update_enabled, varargin_2)) {
    st.site = &xb_emlrtRSI;
    b_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    moduleInstance->sysobj.ekf_update_enabled = varargin_2;
  }

  if (!isequal(moduleInstance->sysobj.enable_bias_estimation, varargin_3)) {
    st.site = &yb_emlrtRSI;
    c_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    moduleInstance->sysobj.enable_bias_estimation = varargin_3;
  }

  if (!isequal(moduleInstance->sysobj.enable_static_landmarks, varargin_4)) {
    st.site = &ac_emlrtRSI;
    d_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    moduleInstance->sysobj.enable_static_landmarks = varargin_4;
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.gyro_noise_std[i];
  }

  if (!b_isequal(dv0, varargin_5)) {
    st.site = &bc_emlrtRSI;
    e_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_noise_std[i] = varargin_5[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.gyro_bias_noise_std[i];
  }

  if (!b_isequal(dv0, varargin_6)) {
    st.site = &cc_emlrtRSI;
    f_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_noise_std[i] = varargin_6[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.accel_noise_std[i];
  }

  if (!b_isequal(dv0, varargin_7)) {
    st.site = &dc_emlrtRSI;
    g_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_noise_std[i] = varargin_7[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.accel_bias_noise_std[i];
  }

  if (!b_isequal(dv0, varargin_8)) {
    st.site = &ec_emlrtRSI;
    h_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_noise_std[i] = varargin_8[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.contact_noise_std[i];
  }

  if (!b_isequal(dv0, varargin_9)) {
    st.site = &fc_emlrtRSI;
    i_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.contact_noise_std[i] = varargin_9[i];
    }
  }

  for (i = 0; i < 14; i++) {
    dv1[i] = moduleInstance->sysobj.encoder_noise_std[i];
  }

  if (!c_isequal(dv1, varargin_10)) {
    st.site = &gc_emlrtRSI;
    j_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 14; i++) {
      moduleInstance->sysobj.encoder_noise_std[i] = varargin_10[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.landmark_noise_std[i];
  }

  if (!b_isequal(dv0, varargin_11)) {
    st.site = &hc_emlrtRSI;
    k_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.landmark_noise_std[i] = varargin_11[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.gyro_bias_init[i];
  }

  if (!b_isequal(dv0, varargin_12)) {
    st.site = &ic_emlrtRSI;
    l_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_init[i] = varargin_12[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.accel_bias_init[i];
  }

  if (!b_isequal(dv0, varargin_13)) {
    st.site = &jc_emlrtRSI;
    m_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_init[i] = varargin_13[i];
    }
  }

  for (i = 0; i < 6; i++) {
    dv2[i] = moduleInstance->sysobj.prior_base_pose_std[i];
  }

  if (!d_isequal(dv2, varargin_14)) {
    st.site = &kc_emlrtRSI;
    n_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 6; i++) {
      moduleInstance->sysobj.prior_base_pose_std[i] = varargin_14[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.prior_base_velocity_std[i];
  }

  if (!b_isequal(dv0, varargin_15)) {
    st.site = &lc_emlrtRSI;
    o_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_base_velocity_std[i] = varargin_15[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.prior_contact_position_std[i];
  }

  if (!b_isequal(dv0, varargin_16)) {
    st.site = &mc_emlrtRSI;
    p_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_contact_position_std[i] = varargin_16[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.prior_gyro_bias_std[i];
  }

  if (!b_isequal(dv0, varargin_17)) {
    st.site = &nc_emlrtRSI;
    q_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_gyro_bias_std[i] = varargin_17[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.prior_accel_bias_std[i];
  }

  if (!b_isequal(dv0, varargin_18)) {
    st.site = &oc_emlrtRSI;
    r_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_accel_bias_std[i] = varargin_18[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.prior_forward_kinematics_std[i];
  }

  if (!b_isequal(dv0, varargin_19)) {
    st.site = &pc_emlrtRSI;
    s_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_forward_kinematics_std[i] = varargin_19[i];
    }
  }

  for (i = 0; i < 4; i++) {
    dv3[i] = moduleInstance->sysobj.landmark_positions[i];
  }

  if (!e_isequal(dv3, varargin_20)) {
    st.site = &qc_emlrtRSI;
    t_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 4; i++) {
      moduleInstance->sysobj.landmark_positions[i] = varargin_20[i];
    }
  }

  st.site = &rc_emlrtRSI;
  SystemCore_step(moduleInstance, &st, &moduleInstance->sysobj, varargin_21,
                  varargin_22, varargin_23, varargin_24, varargin_25,
                  varargin_26, varargin_27_data, varargin_27_sizes, varargin_28,
                  varargout_1_data, varargout_1_sizes, varargout_2, varargout_3,
                  varargout_4, varargout_5);
}

static boolean_T isequal(boolean_T varargin_1, boolean_T varargin_2)
{
  boolean_T p;
  boolean_T b_p;
  p = false;
  b_p = true;
  if ((int32_T)varargin_1 != (int32_T)varargin_2) {
    b_p = false;
  }

  if (b_p) {
    p = true;
  }

  return p;
}

static boolean_T b_isequal(real_T varargin_1[3], real_T varargin_2[3])
{
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  boolean_T exitg1;
  p = false;
  b_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if (!(varargin_1[k] == varargin_2[k])) {
      b_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (b_p) {
    p = true;
  }

  return p;
}

static boolean_T c_isequal(real_T varargin_1[14], real_T varargin_2[14])
{
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  boolean_T exitg1;
  p = false;
  b_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 14)) {
    if (!(varargin_1[k] == varargin_2[k])) {
      b_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (b_p) {
    p = true;
  }

  return p;
}

static boolean_T d_isequal(real_T varargin_1[6], real_T varargin_2[6])
{
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  boolean_T exitg1;
  p = false;
  b_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if (!(varargin_1[k] == varargin_2[k])) {
      b_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (b_p) {
    p = true;
  }

  return p;
}

static boolean_T e_isequal(real_T varargin_1[4], real_T varargin_2[4])
{
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  boolean_T exitg1;
  p = false;
  b_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 4)) {
    if (!(varargin_1[k] == varargin_2[k])) {
      b_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (b_p) {
    p = true;
  }

  return p;
}

static void SystemCore_step(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance,
  const emlrtStack *sp, RIEKF *obj, real_T varargin_1, real_T varargin_2, real_T
  varargin_3[3], real_T varargin_4[3], real_T varargin_5[14], real_T varargin_6
  [2], real_T varargin_7_data[], int32_T varargin_7_sizes[2], real_T varargin_8
  [49], real_T varargout_1_data[], int32_T varargout_1_sizes[2], real_T
  varargout_2[6], real_T varargout_3[441], real_T *varargout_4, real_T
  varargout_5[20])
{
  emlrtStack st;
  static char_T cv2[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T cv3[4] = { 's', 't', 'e', 'p' };

  st.prev = sp;
  st.tls = sp->tls;
  if (obj->isInitialized == 2) {
    st.site = &d_emlrtRSI;
    g_error(&st, b_message(&st, emlrt_marshallOut(&st, cv2), c_emlrt_marshallOut
             (&st, cv3), &b_emlrtMCI), &b_emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    st.site = &d_emlrtRSI;
    SystemCore_setupAndReset(&st, obj);
  }

  st.site = &d_emlrtRSI;
  SystemCore_systemblock_prestep(obj);
  st.site = &d_emlrtRSI;
  SystemCore_checkTunableProps(obj);
  st.site = &d_emlrtRSI;
  RIEKF_stepImpl(moduleInstance, &st, obj, varargin_1, varargin_2, varargin_3,
                 varargin_4, varargin_5, varargin_6, varargin_7_data,
                 varargin_7_sizes, varargin_8, varargout_1_data,
                 varargout_1_sizes, varargout_2, varargout_3, varargout_4,
                 varargout_5);
  st.site = &d_emlrtRSI;
  SystemCore_checkTunablePropChange(&st, obj);
}

static void SystemCore_setupAndReset(const emlrtStack *sp, RIEKF *obj)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  RIEKF *b_obj;
  int32_T i3;
  const mxArray *y;
  char_T u[51];
  static char_T cv4[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *m2;
  static const int32_T iv2[2] = { 1, 51 };

  const mxArray *b_y;
  char_T b_u[44];
  static char_T cv5[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static const int32_T iv3[2] = { 1, 44 };

  const mxArray *c_y;
  char_T c_u[5];
  static char_T cv6[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv4[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  st.site = &d_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_obj = obj;
  if (b_obj->isInitialized != 0) {
    for (i3 = 0; i3 < 51; i3++) {
      u[i3] = cv4[i3];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&st, 51, m2, &u[0]);
    emlrtAssign(&y, m2);
    for (i3 = 0; i3 < 5; i3++) {
      c_u[i3] = cv6[i3];
    }

    c_y = NULL;
    m2 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(&st, 5, m2, &c_u[0]);
    emlrtAssign(&c_y, m2);
    b_st.site = &d_emlrtRSI;
    g_error(&b_st, b_message(&b_st, y, c_y, &b_emlrtMCI), &b_emlrtMCI);
  }

  b_obj->isInitialized = 1;
  b_st.site = &d_emlrtRSI;
  RIEKF_setupImpl(b_obj);
  b_st.site = &d_emlrtRSI;
  if (b_obj->TunablePropsChanged) {
    for (i3 = 0; i3 < 44; i3++) {
      b_u[i3] = cv5[i3];
    }

    b_y = NULL;
    m2 = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(&b_st, 44, m2, &b_u[0]);
    emlrtAssign(&b_y, m2);
    c_st.site = &d_emlrtRSI;
    g_error(&c_st, message(&c_st, b_y, &b_emlrtMCI), &b_emlrtMCI);
  }

  b_obj->TunablePropsChanged = false;
}

static void SystemCore_systemblock_prestep(RIEKF *obj)
{
  if (!obj->CacheInputSizes) {
    obj->CacheInputSizes = true;
  }
}

static void SystemCore_checkTunableProps(RIEKF *obj)
{
  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
  }
}

static void RIEKF_stepImpl(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance,
  const emlrtStack *sp, RIEKF *obj, real_T enable, real_T t, real_T w[3], real_T
  a[3], real_T encoders[14], real_T contact[2], real_T measured_landmarks_data[],
  int32_T measured_landmarks_sizes[2], real_T X_init[49], real_T X_data[],
  int32_T X_sizes[2], real_T theta[6], real_T P[441], real_T *enabled, real_T
  landmark_ids[20])
{
  emlrtStack st;
  boolean_T guard1 = false;
  boolean_T b_contact[2];
  int32_T i;
  real_T b_obj[3];
  real_T c_obj[3];
  real_T d_obj[14];
  real_T e_obj[2];
  int32_T Pa_sizes[2];
  int32_T i4;
  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(moduleInstance->covInst, 0, 1);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 1);
  st.site = &sc_emlrtRSI;
  RIEKF_InitializeBias(moduleInstance, &st, obj, w, a, X_init);
  guard1 = false;
  if (covrtLogCond(moduleInstance->covInst, 0, 0, 15, t > 0.01)) {
    for (i = 0; i < 2; i++) {
      b_contact[i] = (contact[i] == 1.0);
    }

    if (covrtLogCond(moduleInstance->covInst, 0, 0, 16, any(b_contact))) {
      covrtLogMcdc(moduleInstance->covInst, 0, 0, 0, true);
      covrtLogIf(moduleInstance->covInst, 0, 0, 0, true);
      covrtLogBasicBlock(moduleInstance->covInst, 0, 2);
      st.site = &tc_emlrtRSI;
      RIEKF_InitializeFilter(moduleInstance, &st, obj, enable, X_init);
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    covrtLogMcdc(moduleInstance->covInst, 0, 0, 0, false);
    covrtLogIf(moduleInstance->covInst, 0, 0, 0, false);
  }

  if (covrtLogIf(moduleInstance->covInst, 0, 0, 1, obj->filter_enabled)) {
    covrtLogBasicBlock(moduleInstance->covInst, 0, 3);
    for (i = 0; i < 3; i++) {
      b_obj[i] = obj->w_prev[i];
    }

    for (i = 0; i < 3; i++) {
      c_obj[i] = obj->a_prev[i];
    }

    for (i = 0; i < 14; i++) {
      d_obj[i] = obj->encoders_prev[i];
    }

    for (i = 0; i < 2; i++) {
      e_obj[i] = obj->contact_prev[i];
    }

    st.site = &uc_emlrtRSI;
    RIEKF_Predict_State(moduleInstance, &st, obj, b_obj, c_obj, d_obj, e_obj, t
                        - obj->t_prev);
    if (covrtLogIf(moduleInstance->covInst, 0, 0, 2, obj->ekf_update_enabled)) {
      covrtLogBasicBlock(moduleInstance->covInst, 0, 4);
      st.site = &vc_emlrtRSI;
      RIEKF_Update_ForwardKinematics(moduleInstance, &st, obj, encoders, contact);
      if (covrtLogIf(moduleInstance->covInst, 0, 0, 3, covrtLogMcdc
                     (moduleInstance->covInst, 0, 0, 1, !covrtLogCond
                      (moduleInstance->covInst, 0, 0, 17,
                       (measured_landmarks_sizes[0] == 0) ||
                       (measured_landmarks_sizes[1] == 0))))) {
        if (covrtLogIf(moduleInstance->covInst, 0, 0, 4,
                       obj->enable_static_landmarks)) {
          covrtLogBasicBlock(moduleInstance->covInst, 0, 5);
          st.site = &wc_emlrtRSI;
          RIEKF_Update_StaticLandmarks(moduleInstance, &st, obj,
            measured_landmarks_data, measured_landmarks_sizes);
        } else {
          covrtLogBasicBlock(moduleInstance->covInst, 0, 6);
          st.site = &xc_emlrtRSI;
          RIEKF_Update_Landmarks(moduleInstance, &st, obj,
            measured_landmarks_data, measured_landmarks_sizes);
        }
      }
    }
  }

  covrtLogBasicBlock(moduleInstance->covInst, 0, 7);
  for (i = 0; i < 3; i++) {
    obj->w_prev[i] = w[i];
  }

  for (i = 0; i < 3; i++) {
    obj->a_prev[i] = a[i];
  }

  for (i = 0; i < 14; i++) {
    obj->encoders_prev[i] = encoders[i];
  }

  for (i = 0; i < 2; i++) {
    obj->contact_prev[i] = contact[i];
  }

  obj->t_prev = t;
  st.site = &yc_emlrtRSI;
  RIEKF_Augmented_State(moduleInstance, &st, obj, X_data, X_sizes);
  for (i = 0; i < 6; i++) {
    theta[i] = obj->theta[i];
  }

  st.site = &ad_emlrtRSI;
  RIEKF_Augmented_Covariance(moduleInstance, &st, obj, moduleInstance->Pa_data,
    Pa_sizes);
  for (i = 0; i < 21; i++) {
    for (i4 = 0; i4 < 21; i4++) {
      P[i4 + 21 * i] = moduleInstance->Pa_data[(emlrtDynamicBoundsCheckR2012b(1
        + i4, 1, Pa_sizes[0], &emlrtBCI, sp) + Pa_sizes[0] *
        (emlrtDynamicBoundsCheckR2012b(1 + i, 1, Pa_sizes[1], &b_emlrtBCI, sp) -
         1)) - 1];
    }
  }

  *enabled = (real_T)obj->filter_enabled;
  for (i = 0; i < 20; i++) {
    landmark_ids[i] = obj->landmark_ids[i];
  }
}

static void RIEKF_InitializeBias(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T w[3], real_T a[3],
  real_T X_init[49])
{
  real_T Rwi[3];
  real_T b_Rwi[9];
  int32_T i5;
  int32_T i6;
  real_T b_obj;
  static real_T dv4[3] = { 0.0, 0.0, -9.81 };

  covrtLogFcn(moduleInstance->covInst, 0, 10);

  /*  Function to initiaze IMU bias */
  if (covrtLogIf(moduleInstance->covInst, 0, 0, 6,
                 obj->static_bias_initialization)) {
    if (covrtLogIf(moduleInstance->covInst, 0, 0, 7, covrtLogMcdc
                   (moduleInstance->covInst, 0, 0, 2, !covrtLogCond
                    (moduleInstance->covInst, 0, 0, 0, obj->bias_initialized))))
    {
      if (covrtLogCond(moduleInstance->covInst, 0, 0, 1, norm(a) > 0.0) &&
          covrtLogCond(moduleInstance->covInst, 0, 0, 2, norm(w) > 0.0)) {
        covrtLogMcdc(moduleInstance->covInst, 0, 0, 3, true);
        covrtLogIf(moduleInstance->covInst, 0, 0, 8, true);

        /*  Wait for valid signal */
        if (covrtLogIf(moduleInstance->covInst, 0, 0, 9, obj->imu_init_count <=
                       1000.0)) {
          covrtLogBasicBlock(moduleInstance->covInst, 0, 20);

          /*  Accumulate vector of imu data */
          for (i5 = 0; i5 < 3; i5++) {
            for (i6 = 0; i6 < 3; i6++) {
              b_Rwi[i6 + 3 * i5] = X_init[i6 + 7 * i5];
            }
          }

          for (i5 = 0; i5 < 3; i5++) {
            b_obj = 0.0;
            for (i6 = 0; i6 < 3; i6++) {
              b_obj += b_Rwi[i5 + 3 * i6] * a[i6];
            }

            Rwi[i5] = b_obj + dv4[i5];
          }

          b_obj = obj->imu_init_count;
          i5 = (int32_T)emlrtIntegerCheckR2012b(b_obj, &emlrtDCI, sp);
          emlrtDynamicBoundsCheckR2012b(i5, 1, 1000, &c_emlrtBCI, sp);
          for (i5 = 0; i5 < 3; i5++) {
            obj->a_init_vec[i5 + 3 * ((int32_T)b_obj - 1)] = 0.0;
            for (i6 = 0; i6 < 3; i6++) {
              obj->a_init_vec[i5 + 3 * ((int32_T)b_obj - 1)] += b_Rwi[i6 + 3 *
                i5] * Rwi[i6];
            }
          }

          b_obj = obj->imu_init_count;
          i5 = (int32_T)emlrtIntegerCheckR2012b(b_obj, &b_emlrtDCI, sp);
          emlrtDynamicBoundsCheckR2012b(i5, 1, 1000, &d_emlrtBCI, sp);
          for (i5 = 0; i5 < 3; i5++) {
            obj->w_init_vec[i5 + 3 * ((int32_T)b_obj - 1)] = w[i5];
          }

          obj->imu_init_count++;
        } else {
          covrtLogBasicBlock(moduleInstance->covInst, 0, 21);

          /*  Use imu data vector to estimate initial biases */
          mean(obj->a_init_vec, Rwi);
          for (i5 = 0; i5 < 3; i5++) {
            obj->ba0[i5] = Rwi[i5];
          }

          mean(obj->w_init_vec, Rwi);
          for (i5 = 0; i5 < 3; i5++) {
            obj->bg0[i5] = Rwi[i5];
          }

          obj->bias_initialized = true;
        }
      } else {
        covrtLogMcdc(moduleInstance->covInst, 0, 0, 3, false);
        covrtLogIf(moduleInstance->covInst, 0, 0, 8, false);
      }
    }
  } else {
    covrtLogBasicBlock(moduleInstance->covInst, 0, 22);
    obj->bias_initialized = true;
  }
}

static real_T norm(real_T x[3])
{
  real_T y;
  real_T scale;
  int32_T k;
  real_T absxk;
  real_T t;
  y = 0.0;
  scale = 2.2250738585072014E-308;
  for (k = 0; k < 3; k++) {
    absxk = muDoubleScalarAbs(x[k]);
    if (absxk > scale) {
      t = scale / absxk;
      y = 1.0 + y * t * t;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

static void mean(real_T x[3000], real_T y[3])
{
  int32_T j;
  real_T s;
  int32_T k;
  for (j = 0; j < 3; j++) {
    s = x[j];
    for (k = 0; k < 999; k++) {
      s += x[j + (k + 1) * 3];
    }

    y[j] = s / 1000.0;
  }
}

static boolean_T any(boolean_T x[2])
{
  boolean_T y;
  int32_T k;
  boolean_T exitg1;
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!!x[k]) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

static void RIEKF_InitializeFilter(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T enable, real_T
  X_init[49])
{
  emlrtStack st;
  emlrtStack b_st;
  int32_T i;
  int8_T I[49];
  real_T b_obj[441];
  static real_T dv5[441] = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  covrtLogFcn(moduleInstance->covInst, 0, 11);

  /*  Attempt to enable filter (successful if enable is true, and */
  /*  at least one foot is on the ground) */
  st.site = &bd_emlrtRSI;
  if (muDoubleScalarIsNaN(enable)) {
    b_st.site = &e_emlrtRSI;
    error(&b_st);
  }

  if (covrtLogCond(moduleInstance->covInst, 0, 0, 3, enable != 0.0) &&
      (!covrtLogCond(moduleInstance->covInst, 0, 0, 4, obj->filter_enabled))) {
    covrtLogMcdc(moduleInstance->covInst, 0, 0, 4, true);
    covrtLogIf(moduleInstance->covInst, 0, 0, 10, true);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 23);
    for (i = 0; i < 49; i++) {
      obj->X[i] = X_init[i];
    }

    for (i = 0; i < 3; i++) {
      obj->theta[i] = obj->bg0[i];
    }

    for (i = 0; i < 3; i++) {
      obj->theta[i + 3] = obj->ba0[i];
    }

    for (i = 0; i < 441; i++) {
      b_obj[i] = obj->P_prior[i];
    }

    st.site = &cd_emlrtRSI;
    RIEKF_Store_Covariance(moduleInstance, &st, obj, b_obj);
    obj->filter_enabled = true;
  } else {
    covrtLogMcdc(moduleInstance->covInst, 0, 0, 4, false);
    covrtLogIf(moduleInstance->covInst, 0, 0, 10, false);
  }

  /*  If filter is disabled, zero everything */
  st.site = &dd_emlrtRSI;
  if (muDoubleScalarIsNaN(enable)) {
    b_st.site = &e_emlrtRSI;
    error(&b_st);
  }

  if ((!covrtLogCond(moduleInstance->covInst, 0, 0, 5, enable != 0.0)) ||
      (!covrtLogCond(moduleInstance->covInst, 0, 0, 6, obj->filter_enabled))) {
    covrtLogMcdc(moduleInstance->covInst, 0, 0, 5, true);
    covrtLogIf(moduleInstance->covInst, 0, 0, 11, true);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 24);
    for (i = 0; i < 49; i++) {
      I[i] = 0;
    }

    for (i = 0; i < 7; i++) {
      I[i + 7 * i] = 1;
    }

    for (i = 0; i < 49; i++) {
      obj->X[i] = (real_T)I[i];
    }

    for (i = 0; i < 60; i++) {
      obj->landmarks[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      obj->theta[i] = 0.0;
    }

    st.site = &ed_emlrtRSI;
    b_RIEKF_Store_Covariance(moduleInstance, &st, obj, dv5);
    obj->num_landmarks = 0.0;
    for (i = 0; i < 20; i++) {
      obj->landmark_ids[i] = 0.0;
    }

    obj->filter_enabled = false;
  } else {
    covrtLogMcdc(moduleInstance->covInst, 0, 0, 5, false);
    covrtLogIf(moduleInstance->covInst, 0, 0, 11, false);
  }
}

static void RIEKF_Store_Covariance(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Pa[441])
{
  emlrtStack st;
  int32_T i7;
  static char_T cv7[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  real_T d0;
  int32_T i8;
  int32_T i9;
  int32_T i10;
  int32_T i11;
  int32_T loop_ub;
  int32_T b_loop_ub;
  int32_T i12;
  int8_T o_tmp_data[60];
  int32_T iv5[2];
  int8_T p_tmp_data[60];
  int32_T Pa_sizes[2];
  int32_T b_Pa[2];
  int32_T iv6[2];
  int32_T b_Pa_sizes[2];
  int32_T iv7[2];
  int32_T c_Pa_sizes[2];
  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(moduleInstance->covInst, 0, 2);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 8);

  /*     %% Properties ================================================== */
  /*  PUBLIC PROPERTIES */
  /*  Enable Static Bias Initialization */
  /*  Enable Measurement Updates */
  /*  Enable Bias Estimation */
  /*  Enable Static Landmarks */
  /*  Gyroscope Noise std */
  /*  Gyroscope Bias Noise std */
  /*  Accelerometer Noise std */
  /*  Accelerometer Bias Noise std */
  /*  Contact Noise std */
  /*  Encoder Noise std */
  /*  Landmark Noise std */
  /*  Gyroscope Bias Initial Condition  */
  /*  Accelerometer Bias Initial Condition */
  /*  Prior Base Pose std */
  /*  Prior Base Velocity std */
  /*  Prior Contact position std */
  /*  Prior Gyroscope Bias std */
  /*  Prior Accelerometer Bias std */
  /*  Prior Forward Kinematics std */
  /*  Static Landmark Positions */
  /*  PROTECTED PROPERTIES  */
  /*  PRIVATE PROPERTIES */
  /*  Sensor Covariances */
  /*  Gyro Covariance Matrix */
  /*  Gyro bias Covariance Matrix */
  /*  Accel Covariance Matrix */
  /*  Accel Bias Covariance Matrix */
  /*  Contact Covariance Matrix */
  /*  Encoder Covariance Matrix */
  /*  Landmark Distance Covariance Matrix */
  /*  Prior Forward Kinematics Covariance Matrix */
  /*  PRIVATE CONSTANTS */
  /*  EKF Noise Parameters */
  /*  Gravity */
  /*  Pre-allocated Identity matrix (useful for codegen) */
  /*  Pre-allocated matrix of zeros (useful for codegen) */
  /*     %% PROTECTED METHODS ===================================================== */
  /* SETUPIMPL Initialize System object. */
  /*  Initialize Sensor Covariances */
  /*  Gyro Covariance Matrix */
  /*  Gyro bias Covariance Matrix */
  /*  Accel Covariance Matrix */
  /*  Accel Bias Covariance Matrix */
  /*  Contact Covariance Matrix */
  /*  Encoder Covariance Matrix */
  /*  Landmark Covariance Matrix */
  /*  Prior Forward Kinematics Covariance Matrix */
  /*  Initialize bias estimates */
  /*  Initialze State and Covariance */
  /*  Variables to store previous measurements */
  /*  Landmark  */
  /*  Cannot be empty due to codegen */
  /*  setupImpl */
  /*  Function that creates a state vector from sensor readings. */
  /*  */
  /*    Inputs: */
  /*        enable    - flag to enable/disable the filter */
  /*        t         - time */
  /*        w         - angular velocity, {I}_w_{WI} */
  /*        a         - linear acceleration, {I}_a_{WI} */
  /*        encoders  - joint encoder positions */
  /*        contact   - contact indicator */
  /*        measured_landmarks - vector of landmark IDs along with distance */
  /*        X_init    - initial state */
  /*  */
  /*    Outputs: */
  /*        X       - current state estimate */
  /*        theta   - current parameter estimates */
  /*        P       - current covariance estimate  */
  /*        enabled - flag indicating when the filter is enabled */
  /*  */
  /*    Author: Ross Hartley */
  /*    Date:   1/19/2018 */
  /*  */
  /*  Initialize bias */
  /*  (does nothing if bias is already initialized) */
  /*  Initiaze filter */
  /*  (does nothing if filter is already initialized) */
  /*  Only run if filter is enabled */
  /*  Predict state using IMU and contact measurements      */
  /*  Update using other measurements */
  /*  Update state using forward kinematic measurements */
  /*  Update state using landmark position measurements */
  /*  Store last values */
  /*  Output */
  /*  stepImpl */
  /*  Define Outputs ===================================================== */
  /* RESETIMPL Reset System object states. */
  /*  resetImpl */
  /* GETOUTPUTSIZEIMPL Get sizes of output ports. */
  /*  getOutputSizeImpl */
  /* GETOUTPUTDATATYPEIMPL Get data types of output ports. */
  /*  getOutputDataTypeImpl */
  /* ISOUTPUTCOMPLEXIMPL Complexity of output ports. */
  /*  isOutputComplexImpl */
  /* ISOUTPUTFIXEDSIZEIMPL Fixed-size or variale-size output ports. */
  /*  isOutputFixedSizeImpl */
  /*     %% PRIVATE METHODS ===================================================== */
  /*  Separate covariance into state, landmark, and parameter parts */
  if (!(21.0 == 21.0 + 3.0 * obj->num_landmarks)) {
    st.site = &gl_emlrtRSI;
    g_error(&st, message(&st, b_emlrt_marshallOut(&st, cv7), &c_emlrtMCI),
            &c_emlrtMCI);
  }

  for (i7 = 0; i7 < 15; i7++) {
    for (i8 = 0; i8 < 15; i8++) {
      obj->Pxx[i8 + 15 * i7] = Pa[i8 + 21 * i7];
    }
  }

  d0 = (16.0 + 3.0 * obj->num_landmarks) - 1.0;
  if (16.0 > d0) {
    i7 = 0;
    i8 = 0;
  } else {
    i7 = 15;
    i8 = (int32_T)emlrtIntegerCheckR2012b(d0, &c_emlrtDCI, sp);
    i8 = emlrtDynamicBoundsCheckR2012b(i8, 1, 21, &e_emlrtBCI, sp);
  }

  d0 = (16.0 + 3.0 * obj->num_landmarks) - 1.0;
  if (16.0 > d0) {
    i9 = 0;
    i10 = 0;
  } else {
    i9 = 15;
    i10 = (int32_T)emlrtIntegerCheckR2012b(d0, &d_emlrtDCI, sp);
    i10 = emlrtDynamicBoundsCheckR2012b(i10, 1, 21, &f_emlrtBCI, sp);
  }

  d0 = 3.0 * obj->num_landmarks;
  if (1.0 > d0) {
    i11 = 0;
  } else {
    i11 = (int32_T)emlrtIntegerCheckR2012b(d0, &e_emlrtDCI, sp);
    i11 = emlrtDynamicBoundsCheckR2012b(i11, 1, 60, &g_emlrtBCI, sp);
  }

  d0 = 3.0 * obj->num_landmarks;
  if (1.0 > d0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(d0, &f_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 60, &h_emlrtBCI, sp);
  }

  b_loop_ub = (int8_T)((int8_T)i11 - 1);
  for (i12 = 0; i12 <= b_loop_ub; i12++) {
    o_tmp_data[i12] = (int8_T)i12;
  }

  b_loop_ub = (int8_T)((int8_T)loop_ub - 1);
  for (i12 = 0; i12 <= b_loop_ub; i12++) {
    p_tmp_data[i12] = (int8_T)i12;
  }

  iv5[0] = (int8_T)((int8_T)i11 - 1) + 1;
  iv5[1] = (int8_T)((int8_T)loop_ub - 1) + 1;
  Pa_sizes[0] = i8 - i7;
  Pa_sizes[1] = i10 - i9;
  for (i11 = 0; i11 < 2; i11++) {
    b_Pa[i11] = Pa_sizes[i11];
  }

  emlrtSubAssignSizeCheckR2012b(iv5, 2, b_Pa, 2, &emlrtECI, sp);
  b_loop_ub = i10 - i9;
  for (i10 = 0; i10 < b_loop_ub; i10++) {
    loop_ub = i8 - i7;
    for (i11 = 0; i11 < loop_ub; i11++) {
      obj->Pll[o_tmp_data[i11] + 60 * p_tmp_data[i10]] = Pa[(i7 + i11) + 21 *
        (i9 + i10)];
    }
  }

  d0 = (16.0 + 3.0 * obj->num_landmarks) - 1.0;
  if (16.0 > d0) {
    i7 = 0;
    i8 = 0;
  } else {
    i7 = 15;
    i8 = (int32_T)emlrtIntegerCheckR2012b(d0, &g_emlrtDCI, sp);
    i8 = emlrtDynamicBoundsCheckR2012b(i8, 1, 21, &i_emlrtBCI, sp);
  }

  d0 = 3.0 * obj->num_landmarks;
  if (1.0 > d0) {
    i9 = 0;
  } else {
    i9 = (int32_T)emlrtIntegerCheckR2012b(d0, &h_emlrtDCI, sp);
    i9 = emlrtDynamicBoundsCheckR2012b(i9, 1, 60, &j_emlrtBCI, sp);
  }

  b_loop_ub = (int8_T)((int8_T)i9 - 1);
  for (i10 = 0; i10 <= b_loop_ub; i10++) {
    o_tmp_data[i10] = (int8_T)i10;
  }

  iv6[0] = 15;
  iv6[1] = (int8_T)((int8_T)i9 - 1) + 1;
  b_Pa_sizes[0] = 15;
  b_Pa_sizes[1] = i8 - i7;
  for (i9 = 0; i9 < 2; i9++) {
    b_Pa[i9] = b_Pa_sizes[i9];
  }

  emlrtSubAssignSizeCheckR2012b(iv6, 2, b_Pa, 2, &b_emlrtECI, sp);
  b_loop_ub = i8 - i7;
  for (i8 = 0; i8 < b_loop_ub; i8++) {
    for (i9 = 0; i9 < 15; i9++) {
      obj->Pxl[i9 + 15 * o_tmp_data[i8]] = Pa[i9 + 21 * (i7 + i8)];
    }
  }

  for (i7 = 0; i7 < 6; i7++) {
    for (i8 = 0; i8 < 6; i8++) {
      obj->Ptt[i8 + 6 * i7] = Pa[(i8 + 21 * (15 + i7)) + 15];
    }
  }

  for (i7 = 0; i7 < 6; i7++) {
    for (i8 = 0; i8 < 15; i8++) {
      obj->Pxt[i8 + 15 * i7] = Pa[i8 + 21 * (15 + i7)];
    }
  }

  d0 = (16.0 + 3.0 * obj->num_landmarks) - 1.0;
  if (16.0 > d0) {
    i7 = 0;
    i8 = 0;
  } else {
    i7 = 15;
    i8 = (int32_T)emlrtIntegerCheckR2012b(d0, &i_emlrtDCI, sp);
    i8 = emlrtDynamicBoundsCheckR2012b(i8, 1, 21, &k_emlrtBCI, sp);
  }

  d0 = 3.0 * obj->num_landmarks;
  if (1.0 > d0) {
    i9 = 0;
  } else {
    i9 = (int32_T)emlrtIntegerCheckR2012b(d0, &j_emlrtDCI, sp);
    i9 = emlrtDynamicBoundsCheckR2012b(i9, 1, 60, &l_emlrtBCI, sp);
  }

  b_loop_ub = (int8_T)((int8_T)i9 - 1);
  for (i10 = 0; i10 <= b_loop_ub; i10++) {
    o_tmp_data[i10] = (int8_T)i10;
  }

  iv7[0] = (int8_T)((int8_T)i9 - 1) + 1;
  iv7[1] = 6;
  c_Pa_sizes[0] = i8 - i7;
  c_Pa_sizes[1] = 6;
  for (i9 = 0; i9 < 2; i9++) {
    b_Pa[i9] = c_Pa_sizes[i9];
  }

  emlrtSubAssignSizeCheckR2012b(iv7, 2, b_Pa, 2, &c_emlrtECI, sp);
  for (i9 = 0; i9 < 6; i9++) {
    b_loop_ub = i8 - i7;
    for (i10 = 0; i10 < b_loop_ub; i10++) {
      obj->Plt[o_tmp_data[i10] + 60 * i9] = Pa[(i7 + i10) + 21 * (15 + i9)];
    }
  }
}

static void b_RIEKF_Store_Covariance(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Pa[441])
{
  emlrtStack st;
  int32_T i13;
  static char_T cv8[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  real_T d1;
  int32_T i14;
  int32_T i15;
  int32_T i16;
  int32_T i17;
  int32_T loop_ub;
  int32_T b_loop_ub;
  int32_T i18;
  int8_T o_tmp_data[60];
  int32_T iv8[2];
  int8_T p_tmp_data[60];
  int32_T Pa_sizes[2];
  int32_T b_Pa[2];
  int32_T iv9[2];
  int32_T b_Pa_sizes[2];
  int32_T iv10[2];
  int32_T c_Pa_sizes[2];
  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(moduleInstance->covInst, 0, 2);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 8);

  /*     %% Properties ================================================== */
  /*  PUBLIC PROPERTIES */
  /*  Enable Static Bias Initialization */
  /*  Enable Measurement Updates */
  /*  Enable Bias Estimation */
  /*  Enable Static Landmarks */
  /*  Gyroscope Noise std */
  /*  Gyroscope Bias Noise std */
  /*  Accelerometer Noise std */
  /*  Accelerometer Bias Noise std */
  /*  Contact Noise std */
  /*  Encoder Noise std */
  /*  Landmark Noise std */
  /*  Gyroscope Bias Initial Condition  */
  /*  Accelerometer Bias Initial Condition */
  /*  Prior Base Pose std */
  /*  Prior Base Velocity std */
  /*  Prior Contact position std */
  /*  Prior Gyroscope Bias std */
  /*  Prior Accelerometer Bias std */
  /*  Prior Forward Kinematics std */
  /*  Static Landmark Positions */
  /*  PROTECTED PROPERTIES  */
  /*  PRIVATE PROPERTIES */
  /*  Sensor Covariances */
  /*  Gyro Covariance Matrix */
  /*  Gyro bias Covariance Matrix */
  /*  Accel Covariance Matrix */
  /*  Accel Bias Covariance Matrix */
  /*  Contact Covariance Matrix */
  /*  Encoder Covariance Matrix */
  /*  Landmark Distance Covariance Matrix */
  /*  Prior Forward Kinematics Covariance Matrix */
  /*  PRIVATE CONSTANTS */
  /*  EKF Noise Parameters */
  /*  Gravity */
  /*  Pre-allocated Identity matrix (useful for codegen) */
  /*  Pre-allocated matrix of zeros (useful for codegen) */
  /*     %% PROTECTED METHODS ===================================================== */
  /* SETUPIMPL Initialize System object. */
  /*  Initialize Sensor Covariances */
  /*  Gyro Covariance Matrix */
  /*  Gyro bias Covariance Matrix */
  /*  Accel Covariance Matrix */
  /*  Accel Bias Covariance Matrix */
  /*  Contact Covariance Matrix */
  /*  Encoder Covariance Matrix */
  /*  Landmark Covariance Matrix */
  /*  Prior Forward Kinematics Covariance Matrix */
  /*  Initialize bias estimates */
  /*  Initialze State and Covariance */
  /*  Variables to store previous measurements */
  /*  Landmark  */
  /*  Cannot be empty due to codegen */
  /*  setupImpl */
  /*  Function that creates a state vector from sensor readings. */
  /*  */
  /*    Inputs: */
  /*        enable    - flag to enable/disable the filter */
  /*        t         - time */
  /*        w         - angular velocity, {I}_w_{WI} */
  /*        a         - linear acceleration, {I}_a_{WI} */
  /*        encoders  - joint encoder positions */
  /*        contact   - contact indicator */
  /*        measured_landmarks - vector of landmark IDs along with distance */
  /*        X_init    - initial state */
  /*  */
  /*    Outputs: */
  /*        X       - current state estimate */
  /*        theta   - current parameter estimates */
  /*        P       - current covariance estimate  */
  /*        enabled - flag indicating when the filter is enabled */
  /*  */
  /*    Author: Ross Hartley */
  /*    Date:   1/19/2018 */
  /*  */
  /*  Initialize bias */
  /*  (does nothing if bias is already initialized) */
  /*  Initiaze filter */
  /*  (does nothing if filter is already initialized) */
  /*  Only run if filter is enabled */
  /*  Predict state using IMU and contact measurements      */
  /*  Update using other measurements */
  /*  Update state using forward kinematic measurements */
  /*  Update state using landmark position measurements */
  /*  Store last values */
  /*  Output */
  /*  stepImpl */
  /*  Define Outputs ===================================================== */
  /* RESETIMPL Reset System object states. */
  /*  resetImpl */
  /* GETOUTPUTSIZEIMPL Get sizes of output ports. */
  /*  getOutputSizeImpl */
  /* GETOUTPUTDATATYPEIMPL Get data types of output ports. */
  /*  getOutputDataTypeImpl */
  /* ISOUTPUTCOMPLEXIMPL Complexity of output ports. */
  /*  isOutputComplexImpl */
  /* ISOUTPUTFIXEDSIZEIMPL Fixed-size or variale-size output ports. */
  /*  isOutputFixedSizeImpl */
  /*     %% PRIVATE METHODS ===================================================== */
  /*  Separate covariance into state, landmark, and parameter parts */
  if (!(21.0 == 21.0 + 3.0 * obj->num_landmarks)) {
    st.site = &gl_emlrtRSI;
    g_error(&st, message(&st, b_emlrt_marshallOut(&st, cv8), &c_emlrtMCI),
            &c_emlrtMCI);
  }

  for (i13 = 0; i13 < 15; i13++) {
    for (i14 = 0; i14 < 15; i14++) {
      obj->Pxx[i14 + 15 * i13] = Pa[i14 + 21 * i13];
    }
  }

  d1 = (16.0 + 3.0 * obj->num_landmarks) - 1.0;
  if (16.0 > d1) {
    i13 = 0;
    i14 = 0;
  } else {
    i13 = 15;
    i14 = (int32_T)emlrtIntegerCheckR2012b(d1, &c_emlrtDCI, sp);
    i14 = emlrtDynamicBoundsCheckR2012b(i14, 1, 21, &e_emlrtBCI, sp);
  }

  d1 = (16.0 + 3.0 * obj->num_landmarks) - 1.0;
  if (16.0 > d1) {
    i15 = 0;
    i16 = 0;
  } else {
    i15 = 15;
    i16 = (int32_T)emlrtIntegerCheckR2012b(d1, &d_emlrtDCI, sp);
    i16 = emlrtDynamicBoundsCheckR2012b(i16, 1, 21, &f_emlrtBCI, sp);
  }

  d1 = 3.0 * obj->num_landmarks;
  if (1.0 > d1) {
    i17 = 0;
  } else {
    i17 = (int32_T)emlrtIntegerCheckR2012b(d1, &e_emlrtDCI, sp);
    i17 = emlrtDynamicBoundsCheckR2012b(i17, 1, 60, &g_emlrtBCI, sp);
  }

  d1 = 3.0 * obj->num_landmarks;
  if (1.0 > d1) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(d1, &f_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 60, &h_emlrtBCI, sp);
  }

  b_loop_ub = (int8_T)((int8_T)i17 - 1);
  for (i18 = 0; i18 <= b_loop_ub; i18++) {
    o_tmp_data[i18] = (int8_T)i18;
  }

  b_loop_ub = (int8_T)((int8_T)loop_ub - 1);
  for (i18 = 0; i18 <= b_loop_ub; i18++) {
    p_tmp_data[i18] = (int8_T)i18;
  }

  iv8[0] = (int8_T)((int8_T)i17 - 1) + 1;
  iv8[1] = (int8_T)((int8_T)loop_ub - 1) + 1;
  Pa_sizes[0] = i14 - i13;
  Pa_sizes[1] = i16 - i15;
  for (i17 = 0; i17 < 2; i17++) {
    b_Pa[i17] = Pa_sizes[i17];
  }

  emlrtSubAssignSizeCheckR2012b(iv8, 2, b_Pa, 2, &emlrtECI, sp);
  b_loop_ub = i16 - i15;
  for (i16 = 0; i16 < b_loop_ub; i16++) {
    loop_ub = i14 - i13;
    for (i17 = 0; i17 < loop_ub; i17++) {
      obj->Pll[o_tmp_data[i17] + 60 * p_tmp_data[i16]] = Pa[(i13 + i17) + 21 *
        (i15 + i16)];
    }
  }

  d1 = (16.0 + 3.0 * obj->num_landmarks) - 1.0;
  if (16.0 > d1) {
    i13 = 0;
    i14 = 0;
  } else {
    i13 = 15;
    i14 = (int32_T)emlrtIntegerCheckR2012b(d1, &g_emlrtDCI, sp);
    i14 = emlrtDynamicBoundsCheckR2012b(i14, 1, 21, &i_emlrtBCI, sp);
  }

  d1 = 3.0 * obj->num_landmarks;
  if (1.0 > d1) {
    i15 = 0;
  } else {
    i15 = (int32_T)emlrtIntegerCheckR2012b(d1, &h_emlrtDCI, sp);
    i15 = emlrtDynamicBoundsCheckR2012b(i15, 1, 60, &j_emlrtBCI, sp);
  }

  b_loop_ub = (int8_T)((int8_T)i15 - 1);
  for (i16 = 0; i16 <= b_loop_ub; i16++) {
    o_tmp_data[i16] = (int8_T)i16;
  }

  iv9[0] = 15;
  iv9[1] = (int8_T)((int8_T)i15 - 1) + 1;
  b_Pa_sizes[0] = 15;
  b_Pa_sizes[1] = i14 - i13;
  for (i15 = 0; i15 < 2; i15++) {
    b_Pa[i15] = b_Pa_sizes[i15];
  }

  emlrtSubAssignSizeCheckR2012b(iv9, 2, b_Pa, 2, &b_emlrtECI, sp);
  b_loop_ub = i14 - i13;
  for (i14 = 0; i14 < b_loop_ub; i14++) {
    for (i15 = 0; i15 < 15; i15++) {
      obj->Pxl[i15 + 15 * o_tmp_data[i14]] = Pa[i15 + 21 * (i13 + i14)];
    }
  }

  for (i13 = 0; i13 < 6; i13++) {
    for (i14 = 0; i14 < 6; i14++) {
      obj->Ptt[i14 + 6 * i13] = Pa[(i14 + 21 * (15 + i13)) + 15];
    }
  }

  for (i13 = 0; i13 < 6; i13++) {
    for (i14 = 0; i14 < 15; i14++) {
      obj->Pxt[i14 + 15 * i13] = Pa[i14 + 21 * (15 + i13)];
    }
  }

  d1 = (16.0 + 3.0 * obj->num_landmarks) - 1.0;
  if (16.0 > d1) {
    i13 = 0;
    i14 = 0;
  } else {
    i13 = 15;
    i14 = (int32_T)emlrtIntegerCheckR2012b(d1, &i_emlrtDCI, sp);
    i14 = emlrtDynamicBoundsCheckR2012b(i14, 1, 21, &k_emlrtBCI, sp);
  }

  d1 = 3.0 * obj->num_landmarks;
  if (1.0 > d1) {
    i15 = 0;
  } else {
    i15 = (int32_T)emlrtIntegerCheckR2012b(d1, &j_emlrtDCI, sp);
    i15 = emlrtDynamicBoundsCheckR2012b(i15, 1, 60, &l_emlrtBCI, sp);
  }

  b_loop_ub = (int8_T)((int8_T)i15 - 1);
  for (i16 = 0; i16 <= b_loop_ub; i16++) {
    o_tmp_data[i16] = (int8_T)i16;
  }

  iv10[0] = (int8_T)((int8_T)i15 - 1) + 1;
  iv10[1] = 6;
  c_Pa_sizes[0] = i14 - i13;
  c_Pa_sizes[1] = 6;
  for (i15 = 0; i15 < 2; i15++) {
    b_Pa[i15] = c_Pa_sizes[i15];
  }

  emlrtSubAssignSizeCheckR2012b(iv10, 2, b_Pa, 2, &c_emlrtECI, sp);
  for (i15 = 0; i15 < 6; i15++) {
    b_loop_ub = i14 - i13;
    for (i16 = 0; i16 < b_loop_ub; i16++) {
      obj->Plt[o_tmp_data[i16] + 60 * i15] = Pa[(i13 + i16) + 21 * (15 + i15)];
    }
  }
}

static void RIEKF_Predict_State(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T w[3], real_T a[3],
  real_T encoders[14], real_T contact[2], real_T dt)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  real_T R[9];
  real_T v[3];
  real_T p[3];
  real_T dR[3];
  real_T dL[3];
  real_T bg[3];
  real_T ba[3];
  real_T b_w[3];
  real_T a_k[3];
  int32_T i;
  real_T b[9];
  int32_T i19;
  int32_T i20;
  real_T b_b;
  real_T p_pred[3];
  real_T R_pred[9];
  int32_T i21;
  real_T beta1;
  real_T c_b[3];
  static real_T dv6[3] = { 0.0, 0.0, -9.81 };

  real_T d_b[3];
  int32_T loop_ub;
  int32_T b_loop_ub;
  int32_T Fc_sizes[2];
  int32_T tmp_sizes[2];
  real_T hR_R[9];
  real_T hR_L[9];
  real_T b_a[9];
  real_T e_b[9];
  real_T b_hR_R[9];
  real_T b_hR_L[9];
  real_T c_a[9];
  int32_T Fc;
  real_T b_Fc[2];
  int32_T Fk_sizes[2];
  int32_T Qk_sizes[2];
  int32_T Lc_sizes[2];
  static int16_T y[9] = { 10000, 0, 0, 0, 10000, 0, 0, 0, 10000 };

  int32_T b_tmp_sizes[2];
  int32_T y_sizes_idx_0;
  int32_T y_sizes_idx_1;
  const mxArray *b_y;
  char_T u[21];
  static char_T cv9[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *c_y;
  char_T b_u[45];
  static char_T cv10[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  const mxArray *m3;
  static const int32_T iv11[2] = { 1, 21 };

  static const int32_T iv12[2] = { 1, 45 };

  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  const mxArray *d_y;
  char_T c_u[21];
  const mxArray *e_y;
  char_T d_u[45];
  static const int32_T iv13[2] = { 1, 21 };

  static const int32_T iv14[2] = { 1, 45 };

  int32_T b_sizes_idx_0;
  const mxArray *f_y;
  char_T e_u[21];
  const mxArray *g_y;
  char_T f_u[45];
  static const int32_T iv15[2] = { 1, 21 };

  static const int32_T iv16[2] = { 1, 45 };

  const mxArray *h_y;
  char_T g_u[21];
  const mxArray *i_y;
  char_T h_u[45];
  static const int32_T iv17[2] = { 1, 21 };

  static const int32_T iv18[2] = { 1, 45 };

  real_T b_contact[3];
  real_T dv7[49];
  real_T dv8[6];
  real_T o_tmp_data[6561];
  const mxArray *j_y;
  char_T i_u[21];
  const mxArray *k_y;
  char_T j_u[45];
  static const int32_T iv19[2] = { 1, 21 };

  static const int32_T iv20[2] = { 1, 45 };

  int32_T y_sizes[2];
  const mxArray *l_y;
  char_T k_u[21];
  const mxArray *m_y;
  char_T l_u[45];
  static const int32_T iv21[2] = { 1, 21 };

  static const int32_T iv22[2] = { 1, 45 };

  int32_T b_y_sizes[2];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  covrtLogFcn(moduleInstance->covInst, 0, 12);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 25);

  /*  Right-Invariant Extended Kalman Filter Prediction Step      */
  st.site = &fd_emlrtRSI;
  RIEKF_Separate_State(moduleInstance, obj->X, obj->theta, R, v, p, dR, dL, bg,
                       ba);

  /*  Bias corrected IMU information */
  /*  {I}_w_{WI} */
  /*  {I}_a_{WI} */
  /*  Base Pose Dynamics */
  for (i = 0; i < 3; i++) {
    a_k[i] = a[i] - ba[i];
    b_w[i] = (w[i] - bg[i]) * dt;
  }

  st.site = &gd_emlrtRSI;
  Exp(moduleInstance, b_w, b);
  for (i19 = 0; i19 < 3; i19++) {
    for (i20 = 0; i20 < 3; i20++) {
      R_pred[i19 + 3 * i20] = 0.0;
      for (i21 = 0; i21 < 3; i21++) {
        R_pred[i19 + 3 * i20] += R[i19 + 3 * i21] * b[i21 + 3 * i20];
      }
    }
  }

  st.site = &hd_emlrtRSI;
  b_b = mpower(dt);
  for (i19 = 0; i19 < 3; i19++) {
    beta1 = 0.0;
    for (i20 = 0; i20 < 3; i20++) {
      beta1 += R[i19 + 3 * i20] * a_k[i20];
    }

    p_pred[i19] = (p[i19] + v[i19] * dt) + 0.5 * (beta1 + dv6[i19]) * b_b;
  }

  /*  Foot Position Dynamics */
  st.site = &id_emlrtRSI;
  p_VectorNav_to_RightToeBottom(moduleInstance, encoders, c_b);

  /*  {W}_p_{WR} */
  st.site = &jd_emlrtRSI;
  p_VectorNav_to_LeftToeBottom(moduleInstance, encoders, d_b);

  /*  {W}_p_{WL} */
  /*  Bias Dynamics */
  /*  -- Linearized invariant error dynamics -- */
  /*  Base */
  /*  Landmarks           */
  beta1 = 3.0 * obj->num_landmarks;
  if (1.0 > beta1) {
    loop_ub = 0;
  } else {
    i19 = (int32_T)emlrtIntegerCheckR2012b(beta1, &k_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i19, 1, 100, &m_emlrtBCI, sp);
  }

  beta1 = 3.0 * obj->num_landmarks;
  if (1.0 > beta1) {
    b_loop_ub = 0;
  } else {
    i19 = (int32_T)emlrtIntegerCheckR2012b(beta1, &l_emlrtDCI, sp);
    b_loop_ub = emlrtDynamicBoundsCheckR2012b(i19, 1, 100, &n_emlrtBCI, sp);
  }

  /*  Parameters */
  Fc_sizes[0] = loop_ub;
  Fc_sizes[1] = b_loop_ub;
  for (i19 = 0; i19 < b_loop_ub; i19++) {
    for (i20 = 0; i20 < loop_ub; i20++) {
      moduleInstance->i_tmp_data[i20 + loop_ub * i19] = 0.0;
    }
  }

  blkdiag(moduleInstance->i_tmp_data, Fc_sizes, moduleInstance->g_tmp_data,
          tmp_sizes);
  b_blkdiag(moduleInstance->g_tmp_data, tmp_sizes, moduleInstance->Fc_data,
            Fc_sizes);
  st.site = &kd_emlrtRSI;
  RIEKF_skew(moduleInstance, v, b);
  for (i19 = 0; i19 < 9; i19++) {
    b[i19] = -b[i19];
  }

  st.site = &ld_emlrtRSI;
  RIEKF_skew(moduleInstance, p, hR_R);
  for (i19 = 0; i19 < 9; i19++) {
    hR_R[i19] = -hR_R[i19];
  }

  st.site = &md_emlrtRSI;
  RIEKF_skew(moduleInstance, dR, hR_L);
  for (i19 = 0; i19 < 9; i19++) {
    hR_L[i19] = -hR_L[i19];
  }

  st.site = &nd_emlrtRSI;
  RIEKF_skew(moduleInstance, dL, b_a);
  for (i19 = 0; i19 < 9; i19++) {
    b_a[i19] = -b_a[i19];
  }

  for (i19 = 0; i19 < 3; i19++) {
    for (i20 = 0; i20 < 3; i20++) {
      e_b[i19 + 3 * i20] = 0.0;
      b_hR_R[i19 + 3 * i20] = 0.0;
      b_hR_L[i19 + 3 * i20] = 0.0;
      c_a[i19 + 3 * i20] = 0.0;
      for (i21 = 0; i21 < 3; i21++) {
        e_b[i19 + 3 * i20] += b[i19 + 3 * i21] * R[i21 + 3 * i20];
        b_hR_R[i19 + 3 * i20] += hR_R[i19 + 3 * i21] * R[i21 + 3 * i20];
        b_hR_L[i19 + 3 * i20] += hR_L[i19 + 3 * i21] * R[i21 + 3 * i20];
        c_a[i19 + 3 * i20] += b_a[i19 + 3 * i21] * R[i21 + 3 * i20];
      }
    }
  }

  i = Fc_sizes[1] - 5;
  Fc = Fc_sizes[1];
  for (i19 = 0; i19 < 3; i19++) {
    for (i20 = 0; i20 < 3; i20++) {
      moduleInstance->Fc_data[i20 + Fc_sizes[0] * (emlrtDynamicBoundsCheckR2012b
        (i19 + i, 1, Fc, &q_emlrtBCI, sp) - 1)] = -R[i20 + 3 * i19];
    }
  }

  for (i19 = 0; i19 < 3; i19++) {
    for (i20 = 0; i20 < 3; i20++) {
      moduleInstance->Fc_data[i20 + Fc_sizes[0] * (emlrtDynamicBoundsCheckR2012b
        ((i19 + i) + 3, 1, Fc, &q_emlrtBCI, sp) - 1)] = 0.0;
    }
  }

  for (i19 = 0; i19 < 3; i19++) {
    for (i20 = 0; i20 < 3; i20++) {
      moduleInstance->Fc_data[(i20 + Fc_sizes[0] *
        (emlrtDynamicBoundsCheckR2012b(i19 + i, 1, Fc, &q_emlrtBCI, sp) - 1)) +
        3] = e_b[i20 + 3 * i19];
    }
  }

  for (i19 = 0; i19 < 3; i19++) {
    for (i20 = 0; i20 < 3; i20++) {
      moduleInstance->Fc_data[(i20 + Fc_sizes[0] *
        (emlrtDynamicBoundsCheckR2012b((i19 + i) + 3, 1, Fc, &q_emlrtBCI, sp) -
         1)) + 3] = -R[i20 + 3 * i19];
    }
  }

  for (i19 = 0; i19 < 3; i19++) {
    for (i20 = 0; i20 < 3; i20++) {
      moduleInstance->Fc_data[(i20 + Fc_sizes[0] *
        (emlrtDynamicBoundsCheckR2012b(i19 + i, 1, Fc, &q_emlrtBCI, sp) - 1)) +
        6] = b_hR_R[i20 + 3 * i19];
    }
  }

  for (i19 = 0; i19 < 3; i19++) {
    for (i20 = 0; i20 < 3; i20++) {
      moduleInstance->Fc_data[(i20 + Fc_sizes[0] *
        (emlrtDynamicBoundsCheckR2012b((i19 + i) + 3, 1, Fc, &q_emlrtBCI, sp) -
         1)) + 6] = 0.0;
    }
  }

  for (i19 = 0; i19 < 3; i19++) {
    for (i20 = 0; i20 < 3; i20++) {
      moduleInstance->Fc_data[(i20 + Fc_sizes[0] *
        (emlrtDynamicBoundsCheckR2012b(i19 + i, 1, Fc, &q_emlrtBCI, sp) - 1)) +
        9] = b_hR_L[i20 + 3 * i19];
    }
  }

  for (i19 = 0; i19 < 3; i19++) {
    for (i20 = 0; i20 < 3; i20++) {
      moduleInstance->Fc_data[(i20 + Fc_sizes[0] *
        (emlrtDynamicBoundsCheckR2012b((i19 + i) + 3, 1, Fc, &q_emlrtBCI, sp) -
         1)) + 9] = 0.0;
    }
  }

  for (i19 = 0; i19 < 3; i19++) {
    for (i20 = 0; i20 < 3; i20++) {
      moduleInstance->Fc_data[(i20 + Fc_sizes[0] *
        (emlrtDynamicBoundsCheckR2012b(i19 + i, 1, Fc, &q_emlrtBCI, sp) - 1)) +
        12] = c_a[i20 + 3 * i19];
    }
  }

  for (i19 = 0; i19 < 3; i19++) {
    for (i20 = 0; i20 < 3; i20++) {
      moduleInstance->Fc_data[(i20 + Fc_sizes[0] *
        (emlrtDynamicBoundsCheckR2012b((i19 + i) + 3, 1, Fc, &q_emlrtBCI, sp) -
         1)) + 12] = 0.0;
    }
  }

  /*  Discretize */
  for (i19 = 0; i19 < 2; i19++) {
    b_Fc[i19] = (real_T)Fc_sizes[i19];
  }

  st.site = &od_emlrtRSI;
  b_eye(&st, b_Fc, moduleInstance->Fk_data, Fk_sizes);
  Qk_sizes[0] = Fc_sizes[0];
  Qk_sizes[1] = Fc_sizes[1];
  loop_ub = Fc_sizes[0] * Fc_sizes[1];
  for (i19 = 0; i19 < loop_ub; i19++) {
    moduleInstance->Qk_data[i19] = moduleInstance->Fc_data[i19] * dt;
  }

  for (i19 = 0; i19 < 2; i19++) {
    Fc_sizes[i19] = Fk_sizes[i19];
    Lc_sizes[i19] = Qk_sizes[i19];
  }

  emlrtSizeEqCheckNDR2012b(Fc_sizes, Lc_sizes, &d_emlrtECI, sp);
  loop_ub = Fk_sizes[0] * Fk_sizes[1];
  for (i19 = 0; i19 < loop_ub; i19++) {
    moduleInstance->Fk_data[i19] += moduleInstance->Qk_data[i19];
  }

  st.site = &pd_emlrtRSI;
  RIEKF_Augmented_State(moduleInstance, &st, obj, moduleInstance->h_tmp_data,
                        Fc_sizes);
  st.site = &pd_emlrtRSI;
  RIEKF_Adjoint(moduleInstance, &st, moduleInstance->h_tmp_data, Fc_sizes,
                moduleInstance->f_tmp_data, tmp_sizes);
  c_blkdiag(moduleInstance->f_tmp_data, tmp_sizes, moduleInstance->Lc_data,
            Lc_sizes);
  st.site = &qd_emlrtRSI;
  R_VectorNav_to_RightToeBottom(moduleInstance, encoders, hR_R);
  st.site = &rd_emlrtRSI;
  R_VectorNav_to_LeftToeBottom(moduleInstance, encoders, hR_L);
  beta1 = 3.0 * obj->num_landmarks;
  if (1.0 > beta1) {
    loop_ub = 0;
  } else {
    i19 = (int32_T)emlrtIntegerCheckR2012b(beta1, &m_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i19, 1, 100, &o_emlrtBCI, sp);
  }

  beta1 = 3.0 * obj->num_landmarks;
  if (1.0 > beta1) {
    b_loop_ub = 0;
  } else {
    i19 = (int32_T)emlrtIntegerCheckR2012b(beta1, &n_emlrtDCI, sp);
    b_loop_ub = emlrtDynamicBoundsCheckR2012b(i19, 1, 100, &p_emlrtBCI, sp);
  }

  for (i19 = 0; i19 < 9; i19++) {
    b[i19] = obj->Qc[i19] + (real_T)y[i19] * (1.0 - contact[1]);
  }

  for (i19 = 0; i19 < 9; i19++) {
    b_a[i19] = obj->Qc[i19] + (real_T)y[i19] * (1.0 - contact[0]);
  }

  for (i19 = 0; i19 < 3; i19++) {
    for (i20 = 0; i20 < 3; i20++) {
      e_b[i19 + 3 * i20] = 0.0;
      for (i21 = 0; i21 < 3; i21++) {
        e_b[i19 + 3 * i20] += hR_R[i19 + 3 * i21] * b[i21 + 3 * i20];
      }
    }

    for (i20 = 0; i20 < 3; i20++) {
      b_hR_R[i19 + 3 * i20] = 0.0;
      c_a[i19 + 3 * i20] = 0.0;
      for (i21 = 0; i21 < 3; i21++) {
        b_hR_R[i19 + 3 * i20] += e_b[i19 + 3 * i21] * hR_R[i20 + 3 * i21];
        c_a[i19 + 3 * i20] += hR_L[i19 + 3 * i21] * b_a[i21 + 3 * i20];
      }
    }

    for (i20 = 0; i20 < 3; i20++) {
      b_hR_L[i19 + 3 * i20] = 0.0;
      for (i21 = 0; i21 < 3; i21++) {
        b_hR_L[i19 + 3 * i20] += c_a[i19 + 3 * i21] * hR_L[i20 + 3 * i21];
      }
    }
  }

  b_tmp_sizes[0] = loop_ub;
  b_tmp_sizes[1] = b_loop_ub;
  for (i19 = 0; i19 < b_loop_ub; i19++) {
    for (i20 = 0; i20 < loop_ub; i20++) {
      moduleInstance->i_tmp_data[i20 + loop_ub * i19] = 0.0;
    }
  }

  d_blkdiag(obj->Qg, obj->Qa, b_hR_R, b_hR_L, moduleInstance->i_tmp_data,
            b_tmp_sizes, obj->Qbg, obj->Qba, moduleInstance->Fc_data, Fc_sizes);
  st.site = &sd_emlrtRSI;
  loop_ub = Fk_sizes[0] * Fk_sizes[1];
  for (i19 = 0; i19 < loop_ub; i19++) {
    moduleInstance->d_a_data[i19] = moduleInstance->Fk_data[i19];
  }

  loop_ub = Lc_sizes[0] * Lc_sizes[1];
  for (i19 = 0; i19 < loop_ub; i19++) {
    moduleInstance->d_b_data[i19] = moduleInstance->Lc_data[i19];
  }

  b_st.site = &he_emlrtRSI;
  if (!(Fk_sizes[1] == Lc_sizes[0])) {
    if (((Fk_sizes[0] == 1) && (Fk_sizes[1] == 1)) || ((Lc_sizes[0] == 1) &&
         (Lc_sizes[1] == 1))) {
      for (i19 = 0; i19 < 45; i19++) {
        b_u[i19] = cv10[i19];
      }

      c_y = NULL;
      m3 = emlrtCreateCharArray(2, iv12);
      emlrtInitCharArrayR2013a(&b_st, 45, m3, &b_u[0]);
      emlrtAssign(&c_y, m3);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, c_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i19 = 0; i19 < 21; i19++) {
        u[i19] = cv9[i19];
      }

      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv11);
      emlrtInitCharArrayR2013a(&b_st, 21, m3, &u[0]);
      emlrtAssign(&b_y, m3);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, b_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((Fk_sizes[1] == 1) || (Lc_sizes[0] == 1)) {
    y_sizes_idx_0 = Fk_sizes[0];
    y_sizes_idx_1 = Lc_sizes[1];
    loop_ub = Fk_sizes[0];
    for (i19 = 0; i19 < loop_ub; i19++) {
      b_loop_ub = Lc_sizes[1];
      for (i20 = 0; i20 < b_loop_ub; i20++) {
        moduleInstance->n_y_data[i19 + y_sizes_idx_0 * i20] = 0.0;
        i = Fk_sizes[1];
        for (i21 = 0; i21 < i; i21++) {
          moduleInstance->n_y_data[i19 + y_sizes_idx_0 * i20] +=
            moduleInstance->Fk_data[i19 + Fk_sizes[0] * i21] *
            moduleInstance->Lc_data[i21 + Lc_sizes[0] * i20];
        }
      }
    }
  } else {
    y_sizes_idx_0 = (int16_T)Fk_sizes[0];
    y_sizes_idx_1 = (int16_T)Lc_sizes[1];
    loop_ub = (int16_T)Lc_sizes[1];
    for (i19 = 0; i19 < loop_ub; i19++) {
      for (i20 = 0; i20 < y_sizes_idx_0; i20++) {
        moduleInstance->n_y_data[i20 + y_sizes_idx_0 * i19] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((Fk_sizes[0] < 1) || (Lc_sizes[1] < 1) || (Fk_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      b_b = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)Fk_sizes[0];
      n_t = (ptrdiff_t)Lc_sizes[1];
      k_t = (ptrdiff_t)Fk_sizes[1];
      lda_t = (ptrdiff_t)Fk_sizes[0];
      ldb_t = (ptrdiff_t)Fk_sizes[1];
      ldc_t = (ptrdiff_t)Fk_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &b_b, &moduleInstance->d_a_data
            [0], &lda_t, &moduleInstance->d_b_data[0], &ldb_t, &beta1,
            &moduleInstance->n_y_data[0], &ldc_t);
    }
  }

  st.site = &sd_emlrtRSI;
  loop_ub = Fc_sizes[0] * Fc_sizes[1];
  for (i19 = 0; i19 < loop_ub; i19++) {
    moduleInstance->d_b_data[i19] = moduleInstance->Fc_data[i19];
  }

  b_st.site = &he_emlrtRSI;
  if (!(y_sizes_idx_1 == Fc_sizes[0])) {
    if (((y_sizes_idx_0 == 1) && (y_sizes_idx_1 == 1)) || ((Fc_sizes[0] == 1) &&
         (Fc_sizes[1] == 1))) {
      for (i19 = 0; i19 < 45; i19++) {
        d_u[i19] = cv10[i19];
      }

      e_y = NULL;
      m3 = emlrtCreateCharArray(2, iv14);
      emlrtInitCharArrayR2013a(&b_st, 45, m3, &d_u[0]);
      emlrtAssign(&e_y, m3);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, e_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i19 = 0; i19 < 21; i19++) {
        c_u[i19] = cv9[i19];
      }

      d_y = NULL;
      m3 = emlrtCreateCharArray(2, iv13);
      emlrtInitCharArrayR2013a(&b_st, 21, m3, &c_u[0]);
      emlrtAssign(&d_y, m3);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, d_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((y_sizes_idx_1 == 1) || (Fc_sizes[0] == 1)) {
    i = y_sizes_idx_0;
    Fc = Fc_sizes[1];
    for (i19 = 0; i19 < y_sizes_idx_0; i19++) {
      loop_ub = Fc_sizes[1];
      for (i20 = 0; i20 < loop_ub; i20++) {
        moduleInstance->o_y_data[i19 + y_sizes_idx_0 * i20] = 0.0;
        for (i21 = 0; i21 < y_sizes_idx_1; i21++) {
          moduleInstance->o_y_data[i19 + y_sizes_idx_0 * i20] +=
            moduleInstance->n_y_data[i19 + y_sizes_idx_0 * i21] *
            moduleInstance->Fc_data[i21 + Fc_sizes[0] * i20];
        }
      }
    }
  } else {
    i = (int16_T)y_sizes_idx_0;
    Fc = (int16_T)Fc_sizes[1];
    loop_ub = (int16_T)Fc_sizes[1];
    for (i19 = 0; i19 < loop_ub; i19++) {
      for (i20 = 0; i20 < i; i20++) {
        moduleInstance->o_y_data[i20 + (int16_T)y_sizes_idx_0 * i19] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((y_sizes_idx_0 < 1) || (Fc_sizes[1] < 1) || (y_sizes_idx_1 < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      b_b = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)y_sizes_idx_0;
      n_t = (ptrdiff_t)Fc_sizes[1];
      k_t = (ptrdiff_t)y_sizes_idx_1;
      lda_t = (ptrdiff_t)y_sizes_idx_0;
      ldb_t = (ptrdiff_t)y_sizes_idx_1;
      ldc_t = (ptrdiff_t)y_sizes_idx_0;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &b_b, &moduleInstance->n_y_data
            [0], &lda_t, &moduleInstance->d_b_data[0], &ldb_t, &beta1,
            &moduleInstance->o_y_data[0], &ldc_t);
    }
  }

  st.site = &sd_emlrtRSI;
  b_sizes_idx_0 = Lc_sizes[1];
  loop_ub = Lc_sizes[0];
  for (i19 = 0; i19 < loop_ub; i19++) {
    b_loop_ub = Lc_sizes[1];
    for (i20 = 0; i20 < b_loop_ub; i20++) {
      moduleInstance->d_b_data[i20 + b_sizes_idx_0 * i19] =
        moduleInstance->Lc_data[i19 + Lc_sizes[0] * i20];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(Fc == Lc_sizes[1])) {
    if (((i == 1) && (Fc == 1)) || ((Lc_sizes[1] == 1) && (Lc_sizes[0] == 1))) {
      for (i19 = 0; i19 < 45; i19++) {
        f_u[i19] = cv10[i19];
      }

      g_y = NULL;
      m3 = emlrtCreateCharArray(2, iv16);
      emlrtInitCharArrayR2013a(&b_st, 45, m3, &f_u[0]);
      emlrtAssign(&g_y, m3);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, g_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i19 = 0; i19 < 21; i19++) {
        e_u[i19] = cv9[i19];
      }

      f_y = NULL;
      m3 = emlrtCreateCharArray(2, iv15);
      emlrtInitCharArrayR2013a(&b_st, 21, m3, &e_u[0]);
      emlrtAssign(&f_y, m3);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, f_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((Fc == 1) || (Lc_sizes[1] == 1)) {
    y_sizes_idx_0 = i;
    y_sizes_idx_1 = Lc_sizes[0];
    for (i19 = 0; i19 < i; i19++) {
      loop_ub = Lc_sizes[0];
      for (i20 = 0; i20 < loop_ub; i20++) {
        moduleInstance->p_y_data[i19 + i * i20] = 0.0;
        for (i21 = 0; i21 < Fc; i21++) {
          moduleInstance->p_y_data[i19 + i * i20] += moduleInstance->
            o_y_data[i19 + i * i21] * moduleInstance->d_b_data[i21 +
            b_sizes_idx_0 * i20];
        }
      }
    }
  } else {
    y_sizes_idx_0 = (int16_T)i;
    y_sizes_idx_1 = (int16_T)Lc_sizes[0];
    loop_ub = (int16_T)Lc_sizes[0];
    for (i19 = 0; i19 < loop_ub; i19++) {
      for (i20 = 0; i20 < y_sizes_idx_0; i20++) {
        moduleInstance->p_y_data[i20 + (int16_T)i * i19] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((i < 1) || (Lc_sizes[0] < 1) || (Fc < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      b_b = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)i;
      n_t = (ptrdiff_t)Lc_sizes[0];
      k_t = (ptrdiff_t)Fc;
      lda_t = (ptrdiff_t)i;
      ldb_t = (ptrdiff_t)Fc;
      ldc_t = (ptrdiff_t)i;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &b_b, &moduleInstance->o_y_data
            [0], &lda_t, &moduleInstance->d_b_data[0], &ldb_t, &beta1,
            &moduleInstance->p_y_data[0], &ldc_t);
    }
  }

  st.site = &sd_emlrtRSI;
  b_sizes_idx_0 = Fk_sizes[1];
  loop_ub = Fk_sizes[0];
  for (i19 = 0; i19 < loop_ub; i19++) {
    b_loop_ub = Fk_sizes[1];
    for (i20 = 0; i20 < b_loop_ub; i20++) {
      moduleInstance->d_b_data[i20 + b_sizes_idx_0 * i19] =
        moduleInstance->Fk_data[i19 + Fk_sizes[0] * i20];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(y_sizes_idx_1 == Fk_sizes[1])) {
    if (((y_sizes_idx_0 == 1) && (y_sizes_idx_1 == 1)) || ((Fk_sizes[1] == 1) &&
         (Fk_sizes[0] == 1))) {
      for (i19 = 0; i19 < 45; i19++) {
        h_u[i19] = cv10[i19];
      }

      i_y = NULL;
      m3 = emlrtCreateCharArray(2, iv18);
      emlrtInitCharArrayR2013a(&b_st, 45, m3, &h_u[0]);
      emlrtAssign(&i_y, m3);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, i_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i19 = 0; i19 < 21; i19++) {
        g_u[i19] = cv9[i19];
      }

      h_y = NULL;
      m3 = emlrtCreateCharArray(2, iv17);
      emlrtInitCharArrayR2013a(&b_st, 21, m3, &g_u[0]);
      emlrtAssign(&h_y, m3);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, h_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((y_sizes_idx_1 == 1) || (Fk_sizes[1] == 1)) {
    i = y_sizes_idx_0;
    Fc = Fk_sizes[0];
    for (i19 = 0; i19 < y_sizes_idx_0; i19++) {
      loop_ub = Fk_sizes[0];
      for (i20 = 0; i20 < loop_ub; i20++) {
        moduleInstance->q_y_data[i19 + y_sizes_idx_0 * i20] = 0.0;
        for (i21 = 0; i21 < y_sizes_idx_1; i21++) {
          moduleInstance->q_y_data[i19 + y_sizes_idx_0 * i20] +=
            moduleInstance->p_y_data[i19 + y_sizes_idx_0 * i21] *
            moduleInstance->d_b_data[i21 + b_sizes_idx_0 * i20];
        }
      }
    }
  } else {
    i = (int16_T)y_sizes_idx_0;
    Fc = (int16_T)Fk_sizes[0];
    loop_ub = (int16_T)Fk_sizes[0];
    for (i19 = 0; i19 < loop_ub; i19++) {
      for (i20 = 0; i20 < i; i20++) {
        moduleInstance->q_y_data[i20 + (int16_T)y_sizes_idx_0 * i19] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((y_sizes_idx_0 < 1) || (Fk_sizes[0] < 1) || (y_sizes_idx_1 < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      b_b = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)y_sizes_idx_0;
      n_t = (ptrdiff_t)Fk_sizes[0];
      k_t = (ptrdiff_t)y_sizes_idx_1;
      lda_t = (ptrdiff_t)y_sizes_idx_0;
      ldb_t = (ptrdiff_t)y_sizes_idx_1;
      ldc_t = (ptrdiff_t)y_sizes_idx_0;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &b_b, &moduleInstance->p_y_data
            [0], &lda_t, &moduleInstance->d_b_data[0], &ldb_t, &beta1,
            &moduleInstance->q_y_data[0], &ldc_t);
    }
  }

  Qk_sizes[0] = i;
  Qk_sizes[1] = Fc;
  loop_ub = i * Fc;
  for (i19 = 0; i19 < loop_ub; i19++) {
    moduleInstance->Qk_data[i19] = moduleInstance->q_y_data[i19] * dt;
  }

  /*  Discretized */
  /*  Construct predicted state */
  for (i19 = 0; i19 < 3; i19++) {
    beta1 = 0.0;
    for (i20 = 0; i20 < 3; i20++) {
      beta1 += R[i19 + 3 * i20] * a_k[i20];
    }

    b_w[i19] = v[i19] + (beta1 + dv6[i19]) * dt;
    beta1 = 0.0;
    for (i20 = 0; i20 < 3; i20++) {
      beta1 += R_pred[i19 + 3 * i20] * c_b[i20];
    }

    p[i19] = contact[1] * dR[i19] + (1.0 - contact[1]) * (p_pred[i19] + beta1);
    beta1 = 0.0;
    for (i20 = 0; i20 < 3; i20++) {
      beta1 += R_pred[i19 + 3 * i20] * d_b[i20];
    }

    b_contact[i19] = contact[0] * dL[i19] + (1.0 - contact[0]) * (p_pred[i19] +
      beta1);
  }

  st.site = &td_emlrtRSI;
  RIEKF_Construct_State(moduleInstance, R_pred, b_w, p_pred, p, b_contact, bg,
                        ba, dv7, dv8);
  for (i19 = 0; i19 < 49; i19++) {
    obj->X[i19] = dv7[i19];
  }

  for (i = 0; i < 6; i++) {
    obj->theta[i] = dv8[i];
  }

  /*  Predict Covariance */
  st.site = &ud_emlrtRSI;
  loop_ub = Fk_sizes[0] * Fk_sizes[1];
  for (i19 = 0; i19 < loop_ub; i19++) {
    moduleInstance->d_a_data[i19] = moduleInstance->Fk_data[i19];
  }

  b_st.site = &ud_emlrtRSI;
  RIEKF_Augmented_Covariance(moduleInstance, &b_st, obj, o_tmp_data, Fc_sizes);
  loop_ub = Fc_sizes[0] * Fc_sizes[1];
  for (i19 = 0; i19 < loop_ub; i19++) {
    moduleInstance->d_b_data[i19] = o_tmp_data[i19];
  }

  b_st.site = &he_emlrtRSI;
  if (!(Fk_sizes[1] == Fc_sizes[0])) {
    if (((Fk_sizes[0] == 1) && (Fk_sizes[1] == 1)) || ((Fc_sizes[0] == 1) &&
         (Fc_sizes[1] == 1))) {
      for (i19 = 0; i19 < 45; i19++) {
        j_u[i19] = cv10[i19];
      }

      k_y = NULL;
      m3 = emlrtCreateCharArray(2, iv20);
      emlrtInitCharArrayR2013a(&b_st, 45, m3, &j_u[0]);
      emlrtAssign(&k_y, m3);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, k_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i19 = 0; i19 < 21; i19++) {
        i_u[i19] = cv9[i19];
      }

      j_y = NULL;
      m3 = emlrtCreateCharArray(2, iv19);
      emlrtInitCharArrayR2013a(&b_st, 21, m3, &i_u[0]);
      emlrtAssign(&j_y, m3);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, j_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((Fk_sizes[1] == 1) || (Fc_sizes[0] == 1)) {
    y_sizes_idx_0 = Fk_sizes[0];
    y_sizes_idx_1 = Fc_sizes[1];
    loop_ub = Fk_sizes[0];
    for (i19 = 0; i19 < loop_ub; i19++) {
      b_loop_ub = Fc_sizes[1];
      for (i20 = 0; i20 < b_loop_ub; i20++) {
        moduleInstance->r_y_data[i19 + y_sizes_idx_0 * i20] = 0.0;
        i = Fk_sizes[1];
        for (i21 = 0; i21 < i; i21++) {
          moduleInstance->r_y_data[i19 + y_sizes_idx_0 * i20] +=
            moduleInstance->Fk_data[i19 + Fk_sizes[0] * i21] *
            moduleInstance->d_b_data[i21 + Fc_sizes[0] * i20];
        }
      }
    }
  } else {
    y_sizes_idx_0 = (int16_T)Fk_sizes[0];
    y_sizes_idx_1 = (int16_T)Fc_sizes[1];
    loop_ub = (int16_T)Fc_sizes[1];
    for (i19 = 0; i19 < loop_ub; i19++) {
      for (i20 = 0; i20 < y_sizes_idx_0; i20++) {
        moduleInstance->r_y_data[i20 + y_sizes_idx_0 * i19] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((Fk_sizes[0] < 1) || (Fc_sizes[1] < 1) || (Fk_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      b_b = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)Fk_sizes[0];
      n_t = (ptrdiff_t)Fc_sizes[1];
      k_t = (ptrdiff_t)Fk_sizes[1];
      lda_t = (ptrdiff_t)Fk_sizes[0];
      ldb_t = (ptrdiff_t)Fk_sizes[1];
      ldc_t = (ptrdiff_t)Fk_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &b_b, &moduleInstance->d_a_data
            [0], &lda_t, &moduleInstance->d_b_data[0], &ldb_t, &beta1,
            &moduleInstance->r_y_data[0], &ldc_t);
    }
  }

  st.site = &ud_emlrtRSI;
  b_sizes_idx_0 = Fk_sizes[1];
  loop_ub = Fk_sizes[0];
  for (i19 = 0; i19 < loop_ub; i19++) {
    b_loop_ub = Fk_sizes[1];
    for (i20 = 0; i20 < b_loop_ub; i20++) {
      moduleInstance->d_b_data[i20 + b_sizes_idx_0 * i19] =
        moduleInstance->Fk_data[i19 + Fk_sizes[0] * i20];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(y_sizes_idx_1 == Fk_sizes[1])) {
    if (((y_sizes_idx_0 == 1) && (y_sizes_idx_1 == 1)) || ((Fk_sizes[1] == 1) &&
         (Fk_sizes[0] == 1))) {
      for (i19 = 0; i19 < 45; i19++) {
        l_u[i19] = cv10[i19];
      }

      m_y = NULL;
      m3 = emlrtCreateCharArray(2, iv22);
      emlrtInitCharArrayR2013a(&b_st, 45, m3, &l_u[0]);
      emlrtAssign(&m_y, m3);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, m_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i19 = 0; i19 < 21; i19++) {
        k_u[i19] = cv9[i19];
      }

      l_y = NULL;
      m3 = emlrtCreateCharArray(2, iv21);
      emlrtInitCharArrayR2013a(&b_st, 21, m3, &k_u[0]);
      emlrtAssign(&l_y, m3);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, l_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((y_sizes_idx_1 == 1) || (Fk_sizes[1] == 1)) {
    y_sizes[0] = y_sizes_idx_0;
    y_sizes[1] = Fk_sizes[0];
    for (i19 = 0; i19 < y_sizes_idx_0; i19++) {
      loop_ub = Fk_sizes[0];
      for (i20 = 0; i20 < loop_ub; i20++) {
        moduleInstance->s_y_data[i19 + y_sizes_idx_0 * i20] = 0.0;
        for (i21 = 0; i21 < y_sizes_idx_1; i21++) {
          moduleInstance->s_y_data[i19 + y_sizes_idx_0 * i20] +=
            moduleInstance->r_y_data[i19 + y_sizes_idx_0 * i21] *
            moduleInstance->d_b_data[i21 + b_sizes_idx_0 * i20];
        }
      }
    }
  } else {
    y_sizes[0] = (int16_T)y_sizes_idx_0;
    y_sizes[1] = (int16_T)Fk_sizes[0];
    loop_ub = (int16_T)Fk_sizes[0];
    for (i19 = 0; i19 < loop_ub; i19++) {
      b_loop_ub = (int16_T)y_sizes_idx_0;
      for (i20 = 0; i20 < b_loop_ub; i20++) {
        moduleInstance->s_y_data[i20 + (int16_T)y_sizes_idx_0 * i19] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((y_sizes_idx_0 < 1) || (Fk_sizes[0] < 1) || (y_sizes_idx_1 < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      b_b = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)y_sizes_idx_0;
      n_t = (ptrdiff_t)Fk_sizes[0];
      k_t = (ptrdiff_t)y_sizes_idx_1;
      lda_t = (ptrdiff_t)y_sizes_idx_0;
      ldb_t = (ptrdiff_t)y_sizes_idx_1;
      ldc_t = (ptrdiff_t)y_sizes_idx_0;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &b_b, &moduleInstance->r_y_data
            [0], &lda_t, &moduleInstance->d_b_data[0], &ldb_t, &beta1,
            &moduleInstance->s_y_data[0], &ldc_t);
    }
  }

  for (i19 = 0; i19 < 2; i19++) {
    Fc_sizes[i19] = y_sizes[i19];
    Lc_sizes[i19] = Qk_sizes[i19];
  }

  emlrtSizeEqCheckNDR2012b(Fc_sizes, Lc_sizes, &e_emlrtECI, sp);
  b_y_sizes[0] = y_sizes[0];
  b_y_sizes[1] = y_sizes[1];
  loop_ub = y_sizes[0] * y_sizes[1];
  for (i19 = 0; i19 < loop_ub; i19++) {
    moduleInstance->t_y_data[i19] = moduleInstance->s_y_data[i19] +
      moduleInstance->Qk_data[i19];
  }

  st.site = &ud_emlrtRSI;
  c_RIEKF_Store_Covariance(moduleInstance, &st, obj, moduleInstance->t_y_data,
    b_y_sizes);
}

static void RIEKF_Separate_State(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, real_T X[49], real_T theta[6], real_T R[9], real_T v[3],
  real_T p[3], real_T dR[3], real_T dL[3], real_T bg[3], real_T ba[3])
{
  int32_T i;
  int32_T i22;
  covrtLogFcn(moduleInstance->covInst, 0, 5);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 11);

  /*  Separate state vector into components */
  /*  Orientation */
  /*  Base Velocity */
  /*  Base Position */
  /*  Right Foot Position */
  /*  Left Foot Position */
  /*  Parameters */
  /*  Gyroscope Bias */
  for (i = 0; i < 3; i++) {
    for (i22 = 0; i22 < 3; i22++) {
      R[i22 + 3 * i] = X[i22 + 7 * i];
    }

    v[i] = X[21 + i];
    p[i] = X[28 + i];
    dR[i] = X[35 + i];
    dL[i] = X[42 + i];
    bg[i] = theta[i];
    ba[i] = theta[i + 3];
  }

  /*  Accelerometer Bias */
}

static void Exp(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance, real_T v[3],
                real_T output[9])
{
  emlrtStack st;
  real_T A[9];
  real_T norm_v;
  int8_T I[9];
  int32_T k;
  real_T y;
  emlrtStack b_st;
  emlrtStack c_st;
  real_T b_A[9];
  int32_T i23;
  int32_T i24;
  covrtLogFcn(moduleInstance->covInst, 1, 0);
  covrtLogBasicBlock(moduleInstance->covInst, 1, 0);

  /* EXP Computes the vectorized exponential map (at the identity) as defined in: */
  /*  http://www.roboticsproceedings.org/rss11/p06.pdf */
  st.site = &vd_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst, 2, 0);
  covrtLogBasicBlock(moduleInstance->covInst, 2, 0);

  /*  Convert from vector to skew symmetric matrix */
  A[0] = 0.0;
  A[3] = -v[2];
  A[6] = v[1];
  A[1] = v[2];
  A[4] = 0.0;
  A[7] = -v[0];
  A[2] = -v[1];
  A[5] = v[0];
  A[8] = 0.0;
  norm_v = norm(v);
  if (covrtLogIf(moduleInstance->covInst, 1, 0, 0, norm_v == 0.0)) {
    covrtLogBasicBlock(moduleInstance->covInst, 1, 1);
    for (k = 0; k < 9; k++) {
      output[k] = 0.0;
    }

    for (k = 0; k < 3; k++) {
      output[k + 3 * k] = 1.0;
    }
  } else {
    covrtLogBasicBlock(moduleInstance->covInst, 1, 2);
    for (k = 0; k < 9; k++) {
      I[k] = 0;
    }

    for (k = 0; k < 3; k++) {
      I[k + 3 * k] = 1;
    }

    y = muDoubleScalarSin(norm_v) / norm_v;
    st.site = &wd_emlrtRSI;
    b_st.site = &xd_emlrtRSI;
    c_st.site = &sb_emlrtRSI;
    norm_v = (1.0 - muDoubleScalarCos(norm_v)) / (norm_v * norm_v);
    for (k = 0; k < 3; k++) {
      for (i23 = 0; i23 < 3; i23++) {
        b_A[k + 3 * i23] = 0.0;
        for (i24 = 0; i24 < 3; i24++) {
          b_A[k + 3 * i23] += A[k + 3 * i24] * A[i24 + 3 * i23];
        }
      }
    }

    for (k = 0; k < 3; k++) {
      for (i23 = 0; i23 < 3; i23++) {
        output[i23 + 3 * k] = ((real_T)I[i23 + 3 * k] + y * A[i23 + 3 * k]) +
          norm_v * b_A[i23 + 3 * k];
      }
    }
  }
}

static void eye(real_T I[9])
{
  int32_T k;
  for (k = 0; k < 9; k++) {
    I[k] = 0.0;
  }

  for (k = 0; k < 3; k++) {
    I[k + 3 * k] = 1.0;
  }
}

static real_T mpower(real_T a)
{
  emlrtStack st;
  emlrtStack b_st;
  st.site = &xd_emlrtRSI;
  b_st.site = &sb_emlrtRSI;
  return a * a;
}

static void p_VectorNav_to_RightToeBottom(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, real_T var1[14], real_T output1[3])
{
  covrtLogFcn(moduleInstance->covInst, 3, 0);
  covrtLogIf(moduleInstance->covInst, 3, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst, 3, 1);
  p_VectorNav_to_RightToeBottom_src(output1, var1);
}

static void p_VectorNav_to_LeftToeBottom(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, real_T var1[14], real_T output1[3])
{
  covrtLogFcn(moduleInstance->covInst, 4, 0);
  covrtLogIf(moduleInstance->covInst, 4, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst, 4, 1);
  p_VectorNav_to_LeftToeBottom_src(output1, var1);
}

static void RIEKF_skew(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance,
  real_T v[3], real_T A[9])
{
  covrtLogFcn(moduleInstance->covInst, 0, 7);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 13);

  /*  Convert from vector to skew symmetric matrix */
  A[0] = 0.0;
  A[3] = -v[2];
  A[6] = v[1];
  A[1] = v[2];
  A[4] = 0.0;
  A[7] = -v[0];
  A[2] = -v[1];
  A[5] = v[0];
  A[8] = 0.0;
}

static void blkdiag(real_T b_varargin_2_data[], int32_T varargin_2_sizes[2],
                    real_T jb_y_data[], int32_T y_sizes[2])
{
  int32_T loop_ub;
  int32_T i25;
  int32_T i26;
  static real_T varargin_1[225] = { 0.0, 0.0, 0.0, 0.0, -9.81, -0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 9.81, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  int32_T b_loop_ub;
  y_sizes[0] = (int8_T)(15 + varargin_2_sizes[0]);
  y_sizes[1] = (int8_T)(15 + varargin_2_sizes[1]);
  loop_ub = (int8_T)(15 + varargin_2_sizes[0]) * (int8_T)(15 + varargin_2_sizes
    [1]);
  for (i25 = 0; i25 < loop_ub; i25++) {
    jb_y_data[i25] = 0.0;
  }

  for (i25 = 0; i25 < 15; i25++) {
    for (i26 = 0; i26 < 15; i26++) {
      jb_y_data[i26 + y_sizes[0] * i25] = varargin_1[i26 + 15 * i25];
    }
  }

  if ((varargin_2_sizes[0] > 0) && (varargin_2_sizes[1] > 0)) {
    loop_ub = varargin_2_sizes[1];
    for (i25 = 0; i25 < loop_ub; i25++) {
      b_loop_ub = varargin_2_sizes[0];
      for (i26 = 0; i26 < b_loop_ub; i26++) {
        jb_y_data[(i26 + y_sizes[0] * (15 + i25)) + 15] = b_varargin_2_data[i26
          + varargin_2_sizes[0] * i25];
      }
    }
  }
}

static void output_size(int32_T varargin_1_sizes[2], int32_T *nrows, int32_T
  *ncols)
{
  *nrows = varargin_1_sizes[0] + 6;
  *ncols = varargin_1_sizes[1] + 6;
}

static void b_blkdiag(real_T e_varargin_1_data[], int32_T varargin_1_sizes[2],
                      real_T jb_y_data[], int32_T y_sizes[2])
{
  int32_T loop_ub;
  int32_T i27;
  int32_T b_loop_ub;
  int32_T i28;
  int32_T i29;
  int32_T tmp_sizes;
  int8_T o_tmp_data[121];
  int8_T p_tmp_data[121];
  y_sizes[0] = (int8_T)(varargin_1_sizes[0] + 6);
  y_sizes[1] = (int8_T)(varargin_1_sizes[1] + 6);
  loop_ub = (int8_T)(varargin_1_sizes[0] + 6) * (int8_T)(varargin_1_sizes[1] + 6);
  for (i27 = 0; i27 < loop_ub; i27++) {
    jb_y_data[i27] = 0.0;
  }

  loop_ub = varargin_1_sizes[1];
  for (i27 = 0; i27 < loop_ub; i27++) {
    b_loop_ub = varargin_1_sizes[0];
    for (i28 = 0; i28 < b_loop_ub; i28++) {
      jb_y_data[i28 + y_sizes[0] * i27] = e_varargin_1_data[i28 +
        varargin_1_sizes[0] * i27];
    }
  }

  if (varargin_1_sizes[0] + 1 > varargin_1_sizes[0] + 6) {
    i27 = 1;
    i28 = 0;
  } else {
    i27 = varargin_1_sizes[0] + 1;
    i28 = varargin_1_sizes[0] + 6;
  }

  if (varargin_1_sizes[1] + 1 > varargin_1_sizes[1] + 6) {
    b_loop_ub = 1;
    i29 = 0;
  } else {
    b_loop_ub = varargin_1_sizes[1] + 1;
    i29 = varargin_1_sizes[1] + 6;
  }

  tmp_sizes = (int8_T)((int8_T)i28 - (int8_T)i27);
  loop_ub = (int8_T)((int8_T)i28 - (int8_T)i27);
  for (i28 = 0; i28 <= loop_ub; i28++) {
    o_tmp_data[i28] = (int8_T)((int8_T)((int8_T)i27 + i28) - 1);
  }

  loop_ub = (int8_T)((int8_T)i29 - (int8_T)b_loop_ub);
  for (i27 = 0; i27 <= loop_ub; i27++) {
    p_tmp_data[i27] = (int8_T)((int8_T)((int8_T)b_loop_ub + i27) - 1);
  }

  loop_ub = (int8_T)((int8_T)i29 - (int8_T)b_loop_ub) + 1;
  for (i27 = 0; i27 < loop_ub; i27++) {
    b_loop_ub = tmp_sizes + 1;
    for (i28 = 0; i28 < b_loop_ub; i28++) {
      jb_y_data[o_tmp_data[i28] + y_sizes[0] * p_tmp_data[i27]] = 0.0;
    }
  }
}

static void b_eye(const emlrtStack *sp, real_T varargin_1[2], real_T e_I_data[],
                  int32_T I_sizes[2])
{
  emlrtStack st;
  emlrtStack b_st;
  boolean_T b0;
  int32_T k;
  const mxArray *y;
  char_T u[28];
  static char_T cv11[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I', 'n',
    'p', 'u', 't' };

  const mxArray *m4;
  static const int32_T iv23[2] = { 1, 28 };

  real_T minval;
  const mxArray *b_y;
  const mxArray *c_y;
  char_T b_u[28];
  int32_T loop_ub;
  static const int32_T iv24[2] = { 1, 28 };

  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &yd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((!(varargin_1[0] != varargin_1[0])) && (!(-2.147483648E+9 > varargin_1[0])))
  {
    b0 = true;
  } else {
    b0 = false;
  }

  if (!b0) {
    for (k = 0; k < 28; k++) {
      u[k] = cv11[k];
    }

    y = NULL;
    m4 = emlrtCreateCharArray(2, iv23);
    emlrtInitCharArrayR2013a(&st, 28, m4, &u[0]);
    emlrtAssign(&y, m4);
    b_y = NULL;
    m4 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m4) = MIN_int32_T;
    emlrtAssign(&b_y, m4);
    d_y = NULL;
    m4 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m4) = MAX_int32_T;
    emlrtAssign(&d_y, m4);
    b_st.site = &dl_emlrtRSI;
    g_error(&b_st, c_message(&b_st, y, b_y, d_y, &d_emlrtMCI), &d_emlrtMCI);
  }

  if ((!(varargin_1[1] != varargin_1[1])) && (!(-2.147483648E+9 > varargin_1[1])))
  {
    b0 = true;
  } else {
    b0 = false;
  }

  if (!b0) {
    for (k = 0; k < 28; k++) {
      b_u[k] = cv11[k];
    }

    c_y = NULL;
    m4 = emlrtCreateCharArray(2, iv24);
    emlrtInitCharArrayR2013a(&st, 28, m4, &b_u[0]);
    emlrtAssign(&c_y, m4);
    e_y = NULL;
    m4 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m4) = MIN_int32_T;
    emlrtAssign(&e_y, m4);
    f_y = NULL;
    m4 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m4) = MAX_int32_T;
    emlrtAssign(&f_y, m4);
    b_st.site = &dl_emlrtRSI;
    g_error(&b_st, c_message(&b_st, c_y, e_y, f_y, &d_emlrtMCI), &d_emlrtMCI);
  }

  minval = muDoubleScalarMin(varargin_1[0], varargin_1[1]);
  I_sizes[0] = (int32_T)varargin_1[0];
  I_sizes[1] = (int32_T)varargin_1[1];
  loop_ub = (int32_T)varargin_1[0] * (int32_T)varargin_1[1];
  for (k = 0; k < loop_ub; k++) {
    e_I_data[k] = 0.0;
  }

  if ((int32_T)minval > 0) {
    st.site = &ae_emlrtRSI;
    if ((!(1 > (int32_T)minval)) && ((int32_T)minval > 2147483646)) {
      b_st.site = &be_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 0; k + 1 <= (int32_T)minval; k++) {
      e_I_data[k + I_sizes[0] * k] = 1.0;
    }
  }
}

static void check_forloop_overflow_error(const emlrtStack *sp)
{
  emlrtStack st;
  int32_T i30;
  const mxArray *y;
  char_T u[34];
  static char_T cv12[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *m5;
  static const int32_T iv25[2] = { 1, 34 };

  const mxArray *b_y;
  char_T b_u[5];
  static char_T cv13[5] = { 'i', 'n', 't', '3', '2' };

  static const int32_T iv26[2] = { 1, 5 };

  st.prev = sp;
  st.tls = sp->tls;
  for (i30 = 0; i30 < 34; i30++) {
    u[i30] = cv12[i30];
  }

  y = NULL;
  m5 = emlrtCreateCharArray(2, iv25);
  emlrtInitCharArrayR2013a(sp, 34, m5, &u[0]);
  emlrtAssign(&y, m5);
  for (i30 = 0; i30 < 5; i30++) {
    b_u[i30] = cv13[i30];
  }

  b_y = NULL;
  m5 = emlrtCreateCharArray(2, iv26);
  emlrtInitCharArrayR2013a(sp, 5, m5, &b_u[0]);
  emlrtAssign(&b_y, m5);
  st.site = &hl_emlrtRSI;
  g_error(&st, b_message(&st, y, b_y, &e_emlrtMCI), &e_emlrtMCI);
}

static void RIEKF_Augmented_State(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T e_Xa_data[], int32_T
  Xa_sizes[2])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  real_T d2;
  int32_T i31;
  int32_T loop_ub;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T e_loop_ub;
  int32_T i32;
  int32_T result;
  real_T e_varargin_1_data[60];
  boolean_T empty_non_axis_sizes;
  const mxArray *y;
  char_T u[39];
  static char_T cv14[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  const mxArray *m6;
  static const int32_T iv27[2] = { 1, 39 };

  int32_T b_result;
  const mxArray *b_y;
  char_T b_u[39];
  static const int32_T iv28[2] = { 1, 39 };

  int32_T result_sizes_idx_0;
  real_T varargin_1[49];
  const mxArray *c_y;
  char_T c_u[39];
  static const int32_T iv29[2] = { 1, 39 };

  real_T reshapes_f2_data[700];
  real_T f_varargin_1_data[749];
  int8_T b_varargin_2_data[10000];
  static int8_T iv30[10000] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1
  };

  const mxArray *d_y;
  char_T d_u[39];
  static const int32_T iv31[2] = { 1, 39 };

  const mxArray *e_y;
  char_T e_u[39];
  static const int32_T iv32[2] = { 1, 39 };

  int8_T c_varargin_2_data[10700];
  const mxArray *f_y;
  char_T f_u[39];
  static const int32_T iv33[2] = { 1, 39 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  covrtLogFcn(moduleInstance->covInst, 0, 4);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 10);

  /*  Augmented state matrix */
  d2 = obj->num_landmarks;
  if (1.0 > d2) {
    loop_ub = 0;
  } else {
    i31 = (int32_T)emlrtIntegerCheckR2012b(d2, &o_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i31, 1, 20, &r_emlrtBCI, sp);
  }

  d2 = obj->num_landmarks;
  if (1.0 > d2) {
    b_loop_ub = 0;
  } else {
    i31 = (int32_T)emlrtIntegerCheckR2012b(d2, &p_emlrtDCI, sp);
    b_loop_ub = emlrtDynamicBoundsCheckR2012b(i31, 1, 100, &s_emlrtBCI, sp);
  }

  d2 = obj->num_landmarks;
  if (1.0 > d2) {
    c_loop_ub = 0;
  } else {
    i31 = (int32_T)emlrtIntegerCheckR2012b(d2, &q_emlrtDCI, sp);
    c_loop_ub = emlrtDynamicBoundsCheckR2012b(i31, 1, 100, &t_emlrtBCI, sp);
  }

  d2 = obj->num_landmarks;
  if (1.0 > d2) {
    d_loop_ub = 0;
  } else {
    i31 = (int32_T)emlrtIntegerCheckR2012b(d2, &r_emlrtDCI, sp);
    d_loop_ub = emlrtDynamicBoundsCheckR2012b(i31, 1, 100, &u_emlrtBCI, sp);
  }

  d2 = obj->num_landmarks;
  if (1.0 > d2) {
    e_loop_ub = 0;
  } else {
    i31 = (int32_T)emlrtIntegerCheckR2012b(d2, &s_emlrtDCI, sp);
    e_loop_ub = emlrtDynamicBoundsCheckR2012b(i31, 1, 100, &v_emlrtBCI, sp);
  }

  st.site = &ce_emlrtRSI;
  for (i31 = 0; i31 < loop_ub; i31++) {
    for (i32 = 0; i32 < 3; i32++) {
      e_varargin_1_data[i32 + 3 * i31] = obj->landmarks[i32 + 3 * i31];
    }
  }

  b_st.site = &de_emlrtRSI;
  if (!(loop_ub == 0)) {
    result = loop_ub;
  } else if (!(b_loop_ub == 0)) {
    result = b_loop_ub;
  } else {
    result = 0;
  }

  c_st.site = &ee_emlrtRSI;
  if ((result == loop_ub) || (loop_ub == 0)) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    for (i31 = 0; i31 < 39; i31++) {
      u[i31] = cv14[i31];
    }

    y = NULL;
    m6 = emlrtCreateCharArray(2, iv27);
    emlrtInitCharArrayR2013a(&c_st, 39, m6, &u[0]);
    emlrtAssign(&y, m6);
    d_st.site = &wk_emlrtRSI;
    g_error(&d_st, message(&d_st, y, &f_emlrtMCI), &f_emlrtMCI);
  }

  if ((result == b_loop_ub) || (b_loop_ub == 0)) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    for (i31 = 0; i31 < 39; i31++) {
      b_u[i31] = cv14[i31];
    }

    b_y = NULL;
    m6 = emlrtCreateCharArray(2, iv28);
    emlrtInitCharArrayR2013a(&c_st, 39, m6, &b_u[0]);
    emlrtAssign(&b_y, m6);
    d_st.site = &wk_emlrtRSI;
    g_error(&d_st, message(&d_st, b_y, &f_emlrtMCI), &f_emlrtMCI);
  }

  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || (!(loop_ub == 0))) {
    b_result = 3;
  } else {
    b_result = 0;
  }

  if (empty_non_axis_sizes || (!(b_loop_ub == 0))) {
    b_loop_ub = 4;
  } else {
    b_loop_ub = 0;
  }

  result_sizes_idx_0 = b_result + b_loop_ub;
  for (i31 = 0; i31 < result; i31++) {
    for (i32 = 0; i32 < b_result; i32++) {
      moduleInstance->result_data[i32 + result_sizes_idx_0 * i31] =
        e_varargin_1_data[i32 + b_result * i31];
    }
  }

  for (i31 = 0; i31 < result; i31++) {
    for (i32 = 0; i32 < b_loop_ub; i32++) {
      moduleInstance->result_data[(i32 + b_result) + result_sizes_idx_0 * i31] =
        0.0;
    }
  }

  loop_ub = b_result + b_loop_ub;
  st.site = &ce_emlrtRSI;
  for (i31 = 0; i31 < 49; i31++) {
    varargin_1[i31] = obj->X[i31];
  }

  b_st.site = &de_emlrtRSI;
  c_st.site = &ee_emlrtRSI;
  if ((7 == result_sizes_idx_0) || ((loop_ub == 0) || (result == 0))) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    for (i31 = 0; i31 < 39; i31++) {
      c_u[i31] = cv14[i31];
    }

    c_y = NULL;
    m6 = emlrtCreateCharArray(2, iv29);
    emlrtInitCharArrayR2013a(&c_st, 39, m6, &c_u[0]);
    emlrtAssign(&c_y, m6);
    d_st.site = &wk_emlrtRSI;
    g_error(&d_st, message(&d_st, c_y, &f_emlrtMCI), &f_emlrtMCI);
  }

  if (!((loop_ub == 0) || (result == 0))) {
  } else {
    result = 0;
  }

  loop_ub = 7 * result;
  for (i31 = 0; i31 < loop_ub; i31++) {
    reshapes_f2_data[i31] = moduleInstance->result_data[i31];
  }

  for (i31 = 0; i31 < 7; i31++) {
    for (i32 = 0; i32 < 7; i32++) {
      f_varargin_1_data[i32 + 7 * i31] = varargin_1[i32 + 7 * i31];
    }
  }

  for (i31 = 0; i31 < result; i31++) {
    for (i32 = 0; i32 < 7; i32++) {
      f_varargin_1_data[i32 + 7 * (i31 + 7)] = reshapes_f2_data[i32 + 7 * i31];
    }
  }

  st.site = &ce_emlrtRSI;
  for (i31 = 0; i31 < e_loop_ub; i31++) {
    for (i32 = 0; i32 < d_loop_ub; i32++) {
      b_varargin_2_data[i32 + d_loop_ub * i31] = iv30[i32 + 100 * i31];
    }
  }

  b_st.site = &de_emlrtRSI;
  if (!(c_loop_ub == 0)) {
    b_result = c_loop_ub;
  } else if (!((d_loop_ub == 0) || (e_loop_ub == 0))) {
    b_result = d_loop_ub;
  } else {
    b_result = 0;
    if (d_loop_ub > 0) {
      b_result = d_loop_ub;
    }
  }

  c_st.site = &ee_emlrtRSI;
  if ((b_result == c_loop_ub) || (c_loop_ub == 0)) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    for (i31 = 0; i31 < 39; i31++) {
      d_u[i31] = cv14[i31];
    }

    d_y = NULL;
    m6 = emlrtCreateCharArray(2, iv31);
    emlrtInitCharArrayR2013a(&c_st, 39, m6, &d_u[0]);
    emlrtAssign(&d_y, m6);
    d_st.site = &wk_emlrtRSI;
    g_error(&d_st, message(&d_st, d_y, &f_emlrtMCI), &f_emlrtMCI);
  }

  if ((b_result == d_loop_ub) || ((d_loop_ub == 0) || (e_loop_ub == 0))) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    for (i31 = 0; i31 < 39; i31++) {
      e_u[i31] = cv14[i31];
    }

    e_y = NULL;
    m6 = emlrtCreateCharArray(2, iv32);
    emlrtInitCharArrayR2013a(&c_st, 39, m6, &e_u[0]);
    emlrtAssign(&e_y, m6);
    d_st.site = &wk_emlrtRSI;
    g_error(&d_st, message(&d_st, e_y, &f_emlrtMCI), &f_emlrtMCI);
  }

  empty_non_axis_sizes = (b_result == 0);
  if (empty_non_axis_sizes || (!(c_loop_ub == 0))) {
    b_loop_ub = 7;
  } else {
    b_loop_ub = 0;
  }

  if (empty_non_axis_sizes || (!((d_loop_ub == 0) || (e_loop_ub == 0)))) {
  } else {
    e_loop_ub = 0;
  }

  loop_ub = b_loop_ub + e_loop_ub;
  for (i31 = 0; i31 < b_loop_ub; i31++) {
    for (i32 = 0; i32 < b_result; i32++) {
      c_varargin_2_data[i32 + b_result * i31] = 0;
    }
  }

  for (i31 = 0; i31 < e_loop_ub; i31++) {
    for (i32 = 0; i32 < b_result; i32++) {
      c_varargin_2_data[i32 + b_result * (i31 + b_loop_ub)] =
        b_varargin_2_data[i32 + b_result * i31];
    }
  }

  st.site = &ce_emlrtRSI;
  b_st.site = &de_emlrtRSI;
  c_st.site = &ee_emlrtRSI;
  if ((7 + result == loop_ub) || ((b_result == 0) || (loop_ub == 0))) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    for (i31 = 0; i31 < 39; i31++) {
      f_u[i31] = cv14[i31];
    }

    f_y = NULL;
    m6 = emlrtCreateCharArray(2, iv33);
    emlrtInitCharArrayR2013a(&c_st, 39, m6, &f_u[0]);
    emlrtAssign(&f_y, m6);
    d_st.site = &wk_emlrtRSI;
    g_error(&d_st, message(&d_st, f_y, &f_emlrtMCI), &f_emlrtMCI);
  }

  if (!((b_result == 0) || (loop_ub == 0))) {
  } else {
    b_result = 0;
  }

  Xa_sizes[0] = 7 + b_result;
  Xa_sizes[1] = 7 + result;
  loop_ub = 7 + result;
  for (i31 = 0; i31 < loop_ub; i31++) {
    for (i32 = 0; i32 < 7; i32++) {
      e_Xa_data[i32 + (7 + b_result) * i31] = f_varargin_1_data[i32 + 7 * i31];
    }
  }

  loop_ub = 7 + result;
  for (i31 = 0; i31 < loop_ub; i31++) {
    for (i32 = 0; i32 < b_result; i32++) {
      e_Xa_data[(i32 + (7 + b_result) * i31) + 7] = (real_T)
        c_varargin_2_data[i32 + b_result * i31];
    }
  }
}

static void RIEKF_Adjoint(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance,
  const emlrtStack *sp, real_T X_data[], int32_T X_sizes[2], real_T AdjX_data[],
  int32_T AdjX_sizes[2])
{
  emlrtStack st;
  real_T R[9];
  int32_T i33;
  int32_T i34;
  int32_T loop_ub;
  int32_T i35;
  int32_T i36;
  int32_T i37;
  real_T dv9[9];
  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(moduleInstance->covInst, 0, 9);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 18);

  /*  Adjoint of SE_N(3)          */
  for (i33 = 0; i33 < 3; i33++) {
    for (i34 = 0; i34 < 3; i34++) {
      R[i34 + 3 * i33] = X_data[(emlrtDynamicBoundsCheckR2012b(1 + i34, 1,
        X_sizes[0], &x_emlrtBCI, sp) + X_sizes[0] *
        (emlrtDynamicBoundsCheckR2012b(1 + i33, 1, X_sizes[1], &y_emlrtBCI, sp)
         - 1)) - 1];
    }
  }

  i33 = 3 * (X_sizes[1] - 2);
  i34 = (int32_T)emlrtNonNegativeCheckR2012b((real_T)(3 * (X_sizes[1] - 2)),
    &t_emlrtDCI, sp);
  AdjX_sizes[0] = i33;
  AdjX_sizes[1] = i33;
  loop_ub = i33 * i33;
  for (i35 = 0; i35 < loop_ub; i35++) {
    AdjX_data[i35] = 0.0;
  }

  for (i35 = 0; i35 < 3; i35++) {
    for (i36 = 0; i36 < 3; i36++) {
      AdjX_data[(emlrtDynamicBoundsCheckR2012b(1 + i36, 1, i34, &ab_emlrtBCI, sp)
                 + i33 * (emlrtDynamicBoundsCheckR2012b(1 + i35, 1, i34,
        &bb_emlrtBCI, sp) - 1)) - 1] = R[i36 + 3 * i35];
    }
  }

  loop_ub = 3;
  while (loop_ub - 3 <= X_sizes[1] - 4) {
    covrtLogFor(moduleInstance->covInst, 0, 0, 0, 1);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 19);
    i34 = 3 * (loop_ub - 2) + 1;
    i35 = 3 * (loop_ub - 2) + 1;
    for (i36 = 0; i36 < 3; i36++) {
      for (i37 = 0; i37 < 3; i37++) {
        AdjX_data[(emlrtDynamicBoundsCheckR2012b(i37 + i34, 1, i33, &cb_emlrtBCI,
                    sp) + i33 * (emlrtDynamicBoundsCheckR2012b(i36 + i35, 1, i33,
          &db_emlrtBCI, sp) - 1)) - 1] = R[i37 + 3 * i36];
      }
    }

    st.site = &fe_emlrtRSI;
    for (i34 = 0; i34 < 3; i34++) {
      emlrtDynamicBoundsCheckR2012b(i34 + 1, 1, X_sizes[0], &eb_emlrtBCI, &st);
    }

    emlrtDynamicBoundsCheckR2012b((int32_T)((1.0 + (real_T)(loop_ub - 3)) + 3.0),
      1, X_sizes[1], &w_emlrtBCI, &st);
    covrtLogFcn(moduleInstance->covInst, 0, 7);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 13);

    /*  Convert from vector to skew symmetric matrix */
    dv9[0] = 0.0;
    dv9[3] = -X_data[2 + X_sizes[0] * loop_ub];
    dv9[6] = X_data[1 + X_sizes[0] * loop_ub];
    dv9[1] = X_data[2 + X_sizes[0] * loop_ub];
    dv9[4] = 0.0;
    dv9[7] = -X_data[X_sizes[0] * loop_ub];
    dv9[2] = -X_data[1 + X_sizes[0] * loop_ub];
    dv9[5] = X_data[X_sizes[0] * loop_ub];
    dv9[8] = 0.0;
    i34 = 3 * (loop_ub - 2) + 1;
    for (i35 = 0; i35 < 3; i35++) {
      for (i36 = 0; i36 < 3; i36++) {
        AdjX_data[(emlrtDynamicBoundsCheckR2012b(i35 + i34, 1, i33, &fb_emlrtBCI,
                    sp) + i33 * (emlrtDynamicBoundsCheckR2012b(1 + i36, 1, i33,
          &gb_emlrtBCI, sp) - 1)) - 1] = 0.0;
        for (i37 = 0; i37 < 3; i37++) {
          AdjX_data[(emlrtDynamicBoundsCheckR2012b(i35 + i34, 1, i33,
                      &fb_emlrtBCI, sp) + i33 * (emlrtDynamicBoundsCheckR2012b(1
            + i36, 1, i33, &gb_emlrtBCI, sp) - 1)) - 1] = AdjX_data
            [(emlrtDynamicBoundsCheckR2012b(i35 + i34, 1, i33, &fb_emlrtBCI, sp)
              + i33 * (emlrtDynamicBoundsCheckR2012b(1 + i36, 1, i33,
                &gb_emlrtBCI, sp) - 1)) - 1] + dv9[i35 + 3 * i37] * R[i37 + 3 *
            i36];
        }
      }
    }

    loop_ub++;
    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst, 0, 0, 0, 0);
}

static void c_blkdiag(real_T e_varargin_1_data[], int32_T varargin_1_sizes[2],
                      real_T jb_y_data[], int32_T y_sizes[2])
{
  int32_T nrows;
  int32_T ncols;
  int32_T loop_ub;
  int32_T i38;
  int32_T i39;
  int32_T i40;
  int32_T tmp_sizes;
  int16_T o_tmp_data[321];
  int16_T p_tmp_data[321];
  static real_T varargin_2[36] = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  output_size(varargin_1_sizes, &nrows, &ncols);
  y_sizes[0] = nrows;
  y_sizes[1] = ncols;
  loop_ub = nrows * ncols;
  for (i38 = 0; i38 < loop_ub; i38++) {
    jb_y_data[i38] = 0.0;
  }

  if ((varargin_1_sizes[0] > 0) && (varargin_1_sizes[1] > 0)) {
    loop_ub = varargin_1_sizes[1];
    for (i38 = 0; i38 < loop_ub; i38++) {
      ncols = varargin_1_sizes[0];
      for (i39 = 0; i39 < ncols; i39++) {
        jb_y_data[i39 + nrows * i38] = e_varargin_1_data[i39 + varargin_1_sizes
          [0] * i38];
      }
    }
  }

  if (varargin_1_sizes[0] + 1 > varargin_1_sizes[0] + 6) {
    i38 = 1;
    i39 = 0;
  } else {
    i38 = varargin_1_sizes[0] + 1;
    i39 = varargin_1_sizes[0] + 6;
  }

  if (varargin_1_sizes[1] + 1 > varargin_1_sizes[1] + 6) {
    ncols = 1;
    i40 = 0;
  } else {
    ncols = varargin_1_sizes[1] + 1;
    i40 = varargin_1_sizes[1] + 6;
  }

  tmp_sizes = (int16_T)((int16_T)i39 - (int16_T)i38);
  loop_ub = (int16_T)((int16_T)i39 - (int16_T)i38);
  for (i39 = 0; i39 <= loop_ub; i39++) {
    o_tmp_data[i39] = (int16_T)((int16_T)((int16_T)i38 + i39) - 1);
  }

  loop_ub = (int16_T)((int16_T)i40 - (int16_T)ncols);
  for (i38 = 0; i38 <= loop_ub; i38++) {
    p_tmp_data[i38] = (int16_T)((int16_T)((int16_T)ncols + i38) - 1);
  }

  loop_ub = (int16_T)((int16_T)i40 - (int16_T)ncols) + 1;
  for (i38 = 0; i38 < loop_ub; i38++) {
    ncols = tmp_sizes + 1;
    for (i39 = 0; i39 < ncols; i39++) {
      jb_y_data[o_tmp_data[i39] + nrows * p_tmp_data[i38]] = varargin_2[i39 +
        (tmp_sizes + 1) * i38];
    }
  }
}

static void R_VectorNav_to_RightToeBottom(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, real_T var1[14], real_T output1[9])
{
  covrtLogFcn(moduleInstance->covInst, 5, 0);
  covrtLogIf(moduleInstance->covInst, 5, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst, 5, 1);
  R_VectorNav_to_RightToeBottom_src(output1, var1);
}

static void R_VectorNav_to_LeftToeBottom(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, real_T var1[14], real_T output1[9])
{
  covrtLogFcn(moduleInstance->covInst, 6, 0);
  covrtLogIf(moduleInstance->covInst, 6, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst, 6, 1);
  R_VectorNav_to_LeftToeBottom_src(output1, var1);
}

static void d_blkdiag(real_T varargin_1[9], real_T varargin_2[9], real_T
                      varargin_4[9], real_T varargin_5[9], real_T
                      varargin_6_data[], int32_T varargin_6_sizes[2], real_T
                      varargin_7[9], real_T varargin_8[9], real_T jb_y_data[],
                      int32_T y_sizes[2])
{
  int32_T loop_ub;
  int32_T i41;
  int32_T i42;
  int32_T b_loop_ub;
  int32_T i43;
  int32_T tmp_sizes;
  int8_T o_tmp_data[118];
  int8_T p_tmp_data[118];
  int8_T q_tmp_data[121];
  int8_T r_tmp_data[121];
  y_sizes[0] = (int8_T)(varargin_6_sizes[0] + 21);
  y_sizes[1] = (int8_T)(varargin_6_sizes[1] + 21);
  loop_ub = (int8_T)(varargin_6_sizes[0] + 21) * (int8_T)(varargin_6_sizes[1] +
    21);
  for (i41 = 0; i41 < loop_ub; i41++) {
    jb_y_data[i41] = 0.0;
  }

  for (i41 = 0; i41 < 3; i41++) {
    for (i42 = 0; i42 < 3; i42++) {
      jb_y_data[i42 + y_sizes[0] * i41] = varargin_1[i42 + 3 * i41];
    }
  }

  for (i41 = 0; i41 < 3; i41++) {
    for (i42 = 0; i42 < 3; i42++) {
      jb_y_data[(i42 + y_sizes[0] * (3 + i41)) + 3] = varargin_2[i42 + 3 * i41];
    }
  }

  for (i41 = 0; i41 < 3; i41++) {
    for (i42 = 0; i42 < 3; i42++) {
      jb_y_data[(i42 + y_sizes[0] * (6 + i41)) + 6] = 0.0;
    }
  }

  for (i41 = 0; i41 < 3; i41++) {
    for (i42 = 0; i42 < 3; i42++) {
      jb_y_data[(i42 + y_sizes[0] * (9 + i41)) + 9] = varargin_4[i42 + 3 * i41];
    }
  }

  for (i41 = 0; i41 < 3; i41++) {
    for (i42 = 0; i42 < 3; i42++) {
      jb_y_data[(i42 + y_sizes[0] * (12 + i41)) + 12] = varargin_5[i42 + 3 * i41];
    }
  }

  if ((varargin_6_sizes[0] > 0) && (varargin_6_sizes[1] > 0)) {
    loop_ub = varargin_6_sizes[1];
    for (i41 = 0; i41 < loop_ub; i41++) {
      b_loop_ub = varargin_6_sizes[0];
      for (i42 = 0; i42 < b_loop_ub; i42++) {
        jb_y_data[(i42 + y_sizes[0] * (15 + i41)) + 15] = varargin_6_data[i42 +
          varargin_6_sizes[0] * i41];
      }
    }
  }

  if (varargin_6_sizes[0] + 16 > varargin_6_sizes[0] + 18) {
    i41 = 1;
    i42 = 0;
  } else {
    i41 = varargin_6_sizes[0] + 16;
    i42 = varargin_6_sizes[0] + 18;
  }

  if (varargin_6_sizes[1] + 16 > varargin_6_sizes[1] + 18) {
    b_loop_ub = 1;
    i43 = 0;
  } else {
    b_loop_ub = varargin_6_sizes[1] + 16;
    i43 = varargin_6_sizes[1] + 18;
  }

  tmp_sizes = (int8_T)((int8_T)i42 - (int8_T)i41);
  loop_ub = (int8_T)((int8_T)i42 - (int8_T)i41);
  for (i42 = 0; i42 <= loop_ub; i42++) {
    o_tmp_data[i42] = (int8_T)((int8_T)((int8_T)i41 + i42) - 1);
  }

  loop_ub = (int8_T)((int8_T)i43 - (int8_T)b_loop_ub);
  for (i41 = 0; i41 <= loop_ub; i41++) {
    p_tmp_data[i41] = (int8_T)((int8_T)((int8_T)b_loop_ub + i41) - 1);
  }

  loop_ub = (int8_T)((int8_T)i43 - (int8_T)b_loop_ub) + 1;
  for (i41 = 0; i41 < loop_ub; i41++) {
    b_loop_ub = tmp_sizes + 1;
    for (i42 = 0; i42 < b_loop_ub; i42++) {
      jb_y_data[o_tmp_data[i42] + y_sizes[0] * p_tmp_data[i41]] = varargin_7[i42
        + (tmp_sizes + 1) * i41];
    }
  }

  if (varargin_6_sizes[0] + 19 > varargin_6_sizes[0] + 21) {
    i41 = 1;
    i42 = 0;
  } else {
    i41 = varargin_6_sizes[0] + 19;
    i42 = varargin_6_sizes[0] + 21;
  }

  if (varargin_6_sizes[1] + 19 > varargin_6_sizes[1] + 21) {
    b_loop_ub = 1;
    i43 = 0;
  } else {
    b_loop_ub = varargin_6_sizes[1] + 19;
    i43 = varargin_6_sizes[1] + 21;
  }

  tmp_sizes = (int8_T)((int8_T)i42 - (int8_T)i41);
  loop_ub = (int8_T)((int8_T)i42 - (int8_T)i41);
  for (i42 = 0; i42 <= loop_ub; i42++) {
    q_tmp_data[i42] = (int8_T)((int8_T)((int8_T)i41 + i42) - 1);
  }

  loop_ub = (int8_T)((int8_T)i43 - (int8_T)b_loop_ub);
  for (i41 = 0; i41 <= loop_ub; i41++) {
    r_tmp_data[i41] = (int8_T)((int8_T)((int8_T)b_loop_ub + i41) - 1);
  }

  loop_ub = (int8_T)((int8_T)i43 - (int8_T)b_loop_ub) + 1;
  for (i41 = 0; i41 < loop_ub; i41++) {
    b_loop_ub = tmp_sizes + 1;
    for (i42 = 0; i42 < b_loop_ub; i42++) {
      jb_y_data[q_tmp_data[i42] + y_sizes[0] * r_tmp_data[i41]] = varargin_8[i42
        + (tmp_sizes + 1) * i41];
    }
  }
}

static void RIEKF_Construct_State(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, real_T R[9], real_T v[3], real_T p[3], real_T dR[3], real_T
  dL[3], real_T bg[3], real_T ba[3], real_T X[49], real_T theta[6])
{
  int32_T i;
  int32_T i44;
  static int8_T iv34[7] = { 0, 0, 0, 1, 0, 0, 0 };

  static int8_T iv35[7] = { 0, 0, 0, 0, 1, 0, 0 };

  static int8_T iv36[7] = { 0, 0, 0, 0, 0, 1, 0 };

  static int8_T iv37[7] = { 0, 0, 0, 0, 0, 0, 1 };

  covrtLogFcn(moduleInstance->covInst, 0, 6);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 12);

  /*  Construct matrix from separate states */
  for (i = 0; i < 3; i++) {
    for (i44 = 0; i44 < 3; i44++) {
      X[i44 + 7 * i] = R[i44 + 3 * i];
    }

    X[21 + i] = v[i];
    X[28 + i] = p[i];
    X[35 + i] = dR[i];
    X[42 + i] = dL[i];
  }

  for (i = 0; i < 7; i++) {
    X[3 + 7 * i] = (real_T)iv34[i];
    X[4 + 7 * i] = (real_T)iv35[i];
    X[5 + 7 * i] = (real_T)iv36[i];
    X[6 + 7 * i] = (real_T)iv37[i];
  }

  /*  Parameters */
  for (i = 0; i < 3; i++) {
    theta[i] = bg[i];
    theta[i + 3] = ba[i];
  }
}

static void RIEKF_Augmented_Covariance(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T g_Pa_data[], int32_T
  Pa_sizes[2])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  real_T d3;
  int32_T i45;
  int32_T loop_ub;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T e_loop_ub;
  int32_T f_loop_ub;
  int32_T i46;
  real_T e_varargin_1_data[900];
  real_T b_varargin_2_data[3600];
  int32_T result;
  real_T varargin_3_data[360];
  boolean_T empty_non_axis_sizes;
  const mxArray *y;
  char_T u[39];
  static char_T cv15[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  const mxArray *m7;
  static const int32_T iv38[2] = { 1, 39 };

  const mxArray *b_y;
  char_T b_u[39];
  static const int32_T iv39[2] = { 1, 39 };

  int32_T b_result;
  const mxArray *c_y;
  char_T c_u[39];
  static const int32_T iv40[2] = { 1, 39 };

  real_T f_varargin_1_data[1215];
  real_T b_varargin_3_data[486];
  const mxArray *d_y;
  char_T d_u[39];
  static const int32_T iv41[2] = { 1, 39 };

  const mxArray *e_y;
  char_T e_u[39];
  static const int32_T iv42[2] = { 1, 39 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  covrtLogFcn(moduleInstance->covInst, 0, 3);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 9);

  /*  Augmented covariance matrix */
  d3 = 3.0 * obj->num_landmarks;
  if (1.0 > d3) {
    loop_ub = -1;
  } else {
    i45 = (int32_T)emlrtIntegerCheckR2012b(d3, &u_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i45, 1, 60, &hb_emlrtBCI, sp) - 1;
  }

  d3 = 3.0 * obj->num_landmarks;
  if (1.0 > d3) {
    b_loop_ub = 0;
  } else {
    i45 = (int32_T)emlrtIntegerCheckR2012b(d3, &v_emlrtDCI, sp);
    b_loop_ub = emlrtDynamicBoundsCheckR2012b(i45, 1, 60, &ib_emlrtBCI, sp);
  }

  d3 = 3.0 * obj->num_landmarks;
  if (1.0 > d3) {
    c_loop_ub = 0;
  } else {
    i45 = (int32_T)emlrtIntegerCheckR2012b(d3, &w_emlrtDCI, sp);
    c_loop_ub = emlrtDynamicBoundsCheckR2012b(i45, 1, 60, &jb_emlrtBCI, sp);
  }

  d3 = 3.0 * obj->num_landmarks;
  if (1.0 > d3) {
    d_loop_ub = 0;
  } else {
    i45 = (int32_T)emlrtIntegerCheckR2012b(d3, &x_emlrtDCI, sp);
    d_loop_ub = emlrtDynamicBoundsCheckR2012b(i45, 1, 60, &kb_emlrtBCI, sp);
  }

  d3 = 3.0 * obj->num_landmarks;
  if (1.0 > d3) {
    e_loop_ub = 0;
  } else {
    i45 = (int32_T)emlrtIntegerCheckR2012b(d3, &y_emlrtDCI, sp);
    e_loop_ub = emlrtDynamicBoundsCheckR2012b(i45, 1, 60, &lb_emlrtBCI, sp);
  }

  d3 = 3.0 * obj->num_landmarks;
  if (1.0 > d3) {
    f_loop_ub = -1;
  } else {
    i45 = (int32_T)emlrtIntegerCheckR2012b(d3, &ab_emlrtDCI, sp);
    f_loop_ub = emlrtDynamicBoundsCheckR2012b(i45, 1, 60, &mb_emlrtBCI, sp) - 1;
  }

  st.site = &pe_emlrtRSI;
  for (i45 = 0; i45 < 15; i45++) {
    for (i46 = 0; i46 < b_loop_ub; i46++) {
      e_varargin_1_data[i46 + b_loop_ub * i45] = obj->Pxl[i45 + 15 * i46];
    }
  }

  for (i45 = 0; i45 < d_loop_ub; i45++) {
    for (i46 = 0; i46 < c_loop_ub; i46++) {
      b_varargin_2_data[i46 + c_loop_ub * i45] = obj->Pll[i46 + 60 * i45];
    }
  }

  for (i45 = 0; i45 < 6; i45++) {
    for (i46 = 0; i46 < e_loop_ub; i46++) {
      varargin_3_data[i46 + e_loop_ub * i45] = obj->Plt[i46 + 60 * i45];
    }
  }

  b_st.site = &de_emlrtRSI;
  if (!(b_loop_ub == 0)) {
    result = b_loop_ub;
  } else if (!((c_loop_ub == 0) || (d_loop_ub == 0))) {
    result = c_loop_ub;
  } else if (!(e_loop_ub == 0)) {
    result = e_loop_ub;
  } else {
    result = 0;
    if (c_loop_ub > 0) {
      result = c_loop_ub;
    }
  }

  c_st.site = &ee_emlrtRSI;
  if ((result == b_loop_ub) || (b_loop_ub == 0)) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    for (i45 = 0; i45 < 39; i45++) {
      u[i45] = cv15[i45];
    }

    y = NULL;
    m7 = emlrtCreateCharArray(2, iv38);
    emlrtInitCharArrayR2013a(&c_st, 39, m7, &u[0]);
    emlrtAssign(&y, m7);
    d_st.site = &wk_emlrtRSI;
    g_error(&d_st, message(&d_st, y, &f_emlrtMCI), &f_emlrtMCI);
  }

  if ((result == c_loop_ub) || ((c_loop_ub == 0) || (d_loop_ub == 0))) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    for (i45 = 0; i45 < 39; i45++) {
      b_u[i45] = cv15[i45];
    }

    b_y = NULL;
    m7 = emlrtCreateCharArray(2, iv39);
    emlrtInitCharArrayR2013a(&c_st, 39, m7, &b_u[0]);
    emlrtAssign(&b_y, m7);
    d_st.site = &wk_emlrtRSI;
    g_error(&d_st, message(&d_st, b_y, &f_emlrtMCI), &f_emlrtMCI);
  }

  if ((result == e_loop_ub) || (e_loop_ub == 0)) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    for (i45 = 0; i45 < 39; i45++) {
      c_u[i45] = cv15[i45];
    }

    c_y = NULL;
    m7 = emlrtCreateCharArray(2, iv40);
    emlrtInitCharArrayR2013a(&c_st, 39, m7, &c_u[0]);
    emlrtAssign(&c_y, m7);
    d_st.site = &wk_emlrtRSI;
    g_error(&d_st, message(&d_st, c_y, &f_emlrtMCI), &f_emlrtMCI);
  }

  empty_non_axis_sizes = (result == 0);
  if (empty_non_axis_sizes || (!(b_loop_ub == 0))) {
    b_result = 15;
  } else {
    b_result = 0;
  }

  if (empty_non_axis_sizes || (!((c_loop_ub == 0) || (d_loop_ub == 0)))) {
  } else {
    d_loop_ub = 0;
  }

  if (empty_non_axis_sizes || (!(e_loop_ub == 0))) {
    b_loop_ub = 6;
  } else {
    b_loop_ub = 0;
  }

  c_loop_ub = (b_result + d_loop_ub) + b_loop_ub;
  for (i45 = 0; i45 < b_result; i45++) {
    for (i46 = 0; i46 < result; i46++) {
      moduleInstance->varargin_2_data[i46 + result * i45] =
        e_varargin_1_data[i46 + result * i45];
    }
  }

  for (i45 = 0; i45 < d_loop_ub; i45++) {
    for (i46 = 0; i46 < result; i46++) {
      moduleInstance->varargin_2_data[i46 + result * (i45 + b_result)] =
        b_varargin_2_data[i46 + result * i45];
    }
  }

  for (i45 = 0; i45 < b_loop_ub; i45++) {
    for (i46 = 0; i46 < result; i46++) {
      moduleInstance->varargin_2_data[i46 + result * ((i45 + b_result) +
        d_loop_ub)] = varargin_3_data[i46 + result * i45];
    }
  }

  st.site = &qe_emlrtRSI;
  for (i45 = 0; i45 < 15; i45++) {
    for (i46 = 0; i46 < 15; i46++) {
      f_varargin_1_data[i46 + 15 * i45] = obj->Pxx[i46 + 15 * i45];
    }
  }

  for (i45 = 0; i45 <= loop_ub; i45++) {
    for (i46 = 0; i46 < 15; i46++) {
      f_varargin_1_data[i46 + 15 * (i45 + 15)] = obj->Pxl[i46 + 15 * i45];
    }
  }

  for (i45 = 0; i45 < 6; i45++) {
    for (i46 = 0; i46 < 15; i46++) {
      f_varargin_1_data[i46 + 15 * ((i45 + loop_ub) + 16)] = obj->Pxt[i46 + 15 *
        i45];
    }
  }

  for (i45 = 0; i45 < 15; i45++) {
    for (i46 = 0; i46 < 6; i46++) {
      b_varargin_3_data[i46 + 6 * i45] = obj->Pxt[i45 + 15 * i46];
    }
  }

  for (i45 = 0; i45 <= f_loop_ub; i45++) {
    for (i46 = 0; i46 < 6; i46++) {
      b_varargin_3_data[i46 + 6 * (i45 + 15)] = obj->Plt[i45 + 60 * i46];
    }
  }

  for (i45 = 0; i45 < 6; i45++) {
    for (i46 = 0; i46 < 6; i46++) {
      b_varargin_3_data[i46 + 6 * ((i45 + f_loop_ub) + 16)] = obj->Ptt[i46 + 6 *
        i45];
    }
  }

  b_st.site = &de_emlrtRSI;
  c_st.site = &ee_emlrtRSI;
  if ((loop_ub + 22 == c_loop_ub) || ((result == 0) || (c_loop_ub == 0))) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    for (i45 = 0; i45 < 39; i45++) {
      d_u[i45] = cv15[i45];
    }

    d_y = NULL;
    m7 = emlrtCreateCharArray(2, iv41);
    emlrtInitCharArrayR2013a(&c_st, 39, m7, &d_u[0]);
    emlrtAssign(&d_y, m7);
    d_st.site = &wk_emlrtRSI;
    g_error(&d_st, message(&d_st, d_y, &f_emlrtMCI), &f_emlrtMCI);
  }

  if (loop_ub + 22 != f_loop_ub + 22) {
    for (i45 = 0; i45 < 39; i45++) {
      e_u[i45] = cv15[i45];
    }

    e_y = NULL;
    m7 = emlrtCreateCharArray(2, iv42);
    emlrtInitCharArrayR2013a(&c_st, 39, m7, &e_u[0]);
    emlrtAssign(&e_y, m7);
    d_st.site = &wk_emlrtRSI;
    g_error(&d_st, message(&d_st, e_y, &f_emlrtMCI), &f_emlrtMCI);
  }

  if (!((result == 0) || (c_loop_ub == 0))) {
  } else {
    result = 0;
  }

  Pa_sizes[0] = result + 21;
  Pa_sizes[1] = loop_ub + 22;
  b_loop_ub = loop_ub + 22;
  for (i45 = 0; i45 < b_loop_ub; i45++) {
    for (i46 = 0; i46 < 15; i46++) {
      g_Pa_data[i46 + (result + 21) * i45] = f_varargin_1_data[i46 + 15 * i45];
    }
  }

  b_loop_ub = loop_ub + 22;
  for (i45 = 0; i45 < b_loop_ub; i45++) {
    for (i46 = 0; i46 < result; i46++) {
      g_Pa_data[(i46 + (result + 21) * i45) + 15] =
        moduleInstance->varargin_2_data[i46 + result * i45];
    }
  }

  loop_ub += 22;
  for (i45 = 0; i45 < loop_ub; i45++) {
    for (i46 = 0; i46 < 6; i46++) {
      g_Pa_data[((i46 + result) + (result + 21) * i45) + 15] =
        b_varargin_3_data[i46 + 6 * i45];
    }
  }
}

static void c_RIEKF_Store_Covariance(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T g_Pa_data[], int32_T
  Pa_sizes[2])
{
  emlrtStack st;
  int32_T i47;
  static char_T cv16[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  real_T d4;
  int32_T i48;
  int32_T i49;
  int32_T i50;
  int32_T i51;
  int32_T tmp_sizes_idx_0;
  int32_T loop_ub;
  int32_T i52;
  int8_T o_tmp_data[60];
  int32_T iv43[2];
  int8_T p_tmp_data[60];
  int32_T b_Pa_sizes[2];
  int32_T Pa[2];
  int32_T iv44[2];
  int32_T c_Pa_sizes[2];
  int32_T iv45[2];
  int32_T d_Pa_sizes[2];
  real_T q_tmp_data[726];
  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(moduleInstance->covInst, 0, 2);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 8);

  /*     %% Properties ================================================== */
  /*  PUBLIC PROPERTIES */
  /*  Enable Static Bias Initialization */
  /*  Enable Measurement Updates */
  /*  Enable Bias Estimation */
  /*  Enable Static Landmarks */
  /*  Gyroscope Noise std */
  /*  Gyroscope Bias Noise std */
  /*  Accelerometer Noise std */
  /*  Accelerometer Bias Noise std */
  /*  Contact Noise std */
  /*  Encoder Noise std */
  /*  Landmark Noise std */
  /*  Gyroscope Bias Initial Condition  */
  /*  Accelerometer Bias Initial Condition */
  /*  Prior Base Pose std */
  /*  Prior Base Velocity std */
  /*  Prior Contact position std */
  /*  Prior Gyroscope Bias std */
  /*  Prior Accelerometer Bias std */
  /*  Prior Forward Kinematics std */
  /*  Static Landmark Positions */
  /*  PROTECTED PROPERTIES  */
  /*  PRIVATE PROPERTIES */
  /*  Sensor Covariances */
  /*  Gyro Covariance Matrix */
  /*  Gyro bias Covariance Matrix */
  /*  Accel Covariance Matrix */
  /*  Accel Bias Covariance Matrix */
  /*  Contact Covariance Matrix */
  /*  Encoder Covariance Matrix */
  /*  Landmark Distance Covariance Matrix */
  /*  Prior Forward Kinematics Covariance Matrix */
  /*  PRIVATE CONSTANTS */
  /*  EKF Noise Parameters */
  /*  Gravity */
  /*  Pre-allocated Identity matrix (useful for codegen) */
  /*  Pre-allocated matrix of zeros (useful for codegen) */
  /*     %% PROTECTED METHODS ===================================================== */
  /* SETUPIMPL Initialize System object. */
  /*  Initialize Sensor Covariances */
  /*  Gyro Covariance Matrix */
  /*  Gyro bias Covariance Matrix */
  /*  Accel Covariance Matrix */
  /*  Accel Bias Covariance Matrix */
  /*  Contact Covariance Matrix */
  /*  Encoder Covariance Matrix */
  /*  Landmark Covariance Matrix */
  /*  Prior Forward Kinematics Covariance Matrix */
  /*  Initialize bias estimates */
  /*  Initialze State and Covariance */
  /*  Variables to store previous measurements */
  /*  Landmark  */
  /*  Cannot be empty due to codegen */
  /*  setupImpl */
  /*  Function that creates a state vector from sensor readings. */
  /*  */
  /*    Inputs: */
  /*        enable    - flag to enable/disable the filter */
  /*        t         - time */
  /*        w         - angular velocity, {I}_w_{WI} */
  /*        a         - linear acceleration, {I}_a_{WI} */
  /*        encoders  - joint encoder positions */
  /*        contact   - contact indicator */
  /*        measured_landmarks - vector of landmark IDs along with distance */
  /*        X_init    - initial state */
  /*  */
  /*    Outputs: */
  /*        X       - current state estimate */
  /*        theta   - current parameter estimates */
  /*        P       - current covariance estimate  */
  /*        enabled - flag indicating when the filter is enabled */
  /*  */
  /*    Author: Ross Hartley */
  /*    Date:   1/19/2018 */
  /*  */
  /*  Initialize bias */
  /*  (does nothing if bias is already initialized) */
  /*  Initiaze filter */
  /*  (does nothing if filter is already initialized) */
  /*  Only run if filter is enabled */
  /*  Predict state using IMU and contact measurements      */
  /*  Update using other measurements */
  /*  Update state using forward kinematic measurements */
  /*  Update state using landmark position measurements */
  /*  Store last values */
  /*  Output */
  /*  stepImpl */
  /*  Define Outputs ===================================================== */
  /* RESETIMPL Reset System object states. */
  /*  resetImpl */
  /* GETOUTPUTSIZEIMPL Get sizes of output ports. */
  /*  getOutputSizeImpl */
  /* GETOUTPUTDATATYPEIMPL Get data types of output ports. */
  /*  getOutputDataTypeImpl */
  /* ISOUTPUTCOMPLEXIMPL Complexity of output ports. */
  /*  isOutputComplexImpl */
  /* ISOUTPUTFIXEDSIZEIMPL Fixed-size or variale-size output ports. */
  /*  isOutputFixedSizeImpl */
  /*     %% PRIVATE METHODS ===================================================== */
  /*  Separate covariance into state, landmark, and parameter parts */
  if (!((real_T)Pa_sizes[1] == 21.0 + 3.0 * obj->num_landmarks)) {
    st.site = &gl_emlrtRSI;
    g_error(&st, message(&st, b_emlrt_marshallOut(&st, cv16), &c_emlrtMCI),
            &c_emlrtMCI);
  }

  for (i47 = 0; i47 < 15; i47++) {
    for (i48 = 0; i48 < 15; i48++) {
      obj->Pxx[i48 + 15 * i47] = g_Pa_data[(emlrtDynamicBoundsCheckR2012b(1 +
        i48, 1, Pa_sizes[0], &rb_emlrtBCI, sp) + Pa_sizes[0] *
        (emlrtDynamicBoundsCheckR2012b(1 + i47, 1, Pa_sizes[1], &sb_emlrtBCI, sp)
         - 1)) - 1];
    }
  }

  d4 = (16.0 + 3.0 * obj->num_landmarks) - 1.0;
  if (16.0 > d4) {
    i47 = 0;
    i48 = -1;
  } else {
    emlrtDynamicBoundsCheckR2012b(16, 1, Pa_sizes[0], &qb_emlrtBCI, sp);
    i47 = 15;
    i48 = (int32_T)emlrtIntegerCheckR2012b(d4, &c_emlrtDCI, sp);
    i48 = emlrtDynamicBoundsCheckR2012b(i48, 1, Pa_sizes[0], &qb_emlrtBCI, sp) -
      1;
  }

  d4 = (16.0 + 3.0 * obj->num_landmarks) - 1.0;
  if (16.0 > d4) {
    i49 = 0;
    i50 = -1;
  } else {
    emlrtDynamicBoundsCheckR2012b(16, 1, Pa_sizes[1], &pb_emlrtBCI, sp);
    i49 = 15;
    i50 = (int32_T)emlrtIntegerCheckR2012b(d4, &d_emlrtDCI, sp);
    i50 = emlrtDynamicBoundsCheckR2012b(i50, 1, Pa_sizes[1], &pb_emlrtBCI, sp) -
      1;
  }

  d4 = 3.0 * obj->num_landmarks;
  if (1.0 > d4) {
    i51 = 0;
  } else {
    i51 = (int32_T)emlrtIntegerCheckR2012b(d4, &e_emlrtDCI, sp);
    i51 = emlrtDynamicBoundsCheckR2012b(i51, 1, 60, &g_emlrtBCI, sp);
  }

  d4 = 3.0 * obj->num_landmarks;
  if (1.0 > d4) {
    tmp_sizes_idx_0 = 0;
  } else {
    tmp_sizes_idx_0 = (int32_T)emlrtIntegerCheckR2012b(d4, &f_emlrtDCI, sp);
    tmp_sizes_idx_0 = emlrtDynamicBoundsCheckR2012b(tmp_sizes_idx_0, 1, 60,
      &h_emlrtBCI, sp);
  }

  loop_ub = (int8_T)((int8_T)i51 - 1);
  for (i52 = 0; i52 <= loop_ub; i52++) {
    o_tmp_data[i52] = (int8_T)i52;
  }

  loop_ub = (int8_T)((int8_T)tmp_sizes_idx_0 - 1);
  for (i52 = 0; i52 <= loop_ub; i52++) {
    p_tmp_data[i52] = (int8_T)i52;
  }

  iv43[0] = (int8_T)((int8_T)i51 - 1) + 1;
  iv43[1] = (int8_T)((int8_T)tmp_sizes_idx_0 - 1) + 1;
  b_Pa_sizes[0] = (i48 - i47) + 1;
  b_Pa_sizes[1] = (i50 - i49) + 1;
  for (i51 = 0; i51 < 2; i51++) {
    Pa[i51] = b_Pa_sizes[i51];
  }

  emlrtSubAssignSizeCheckR2012b(iv43, 2, Pa, 2, &emlrtECI, sp);
  loop_ub = i50 - i49;
  for (i50 = 0; i50 <= loop_ub; i50++) {
    tmp_sizes_idx_0 = i48 - i47;
    for (i51 = 0; i51 <= tmp_sizes_idx_0; i51++) {
      obj->Pll[o_tmp_data[i51] + 60 * p_tmp_data[i50]] = g_Pa_data[(i47 + i51) +
        Pa_sizes[0] * (i49 + i50)];
    }
  }

  d4 = (16.0 + 3.0 * obj->num_landmarks) - 1.0;
  if (16.0 > d4) {
    i47 = 0;
    i48 = -1;
  } else {
    emlrtDynamicBoundsCheckR2012b(16, 1, Pa_sizes[1], &ob_emlrtBCI, sp);
    i47 = 15;
    i48 = (int32_T)emlrtIntegerCheckR2012b(d4, &g_emlrtDCI, sp);
    i48 = emlrtDynamicBoundsCheckR2012b(i48, 1, Pa_sizes[1], &ob_emlrtBCI, sp) -
      1;
  }

  d4 = 3.0 * obj->num_landmarks;
  if (1.0 > d4) {
    i49 = 0;
  } else {
    i49 = (int32_T)emlrtIntegerCheckR2012b(d4, &h_emlrtDCI, sp);
    i49 = emlrtDynamicBoundsCheckR2012b(i49, 1, 60, &j_emlrtBCI, sp);
  }

  loop_ub = (int8_T)((int8_T)i49 - 1);
  for (i50 = 0; i50 <= loop_ub; i50++) {
    o_tmp_data[i50] = (int8_T)i50;
  }

  for (i50 = 0; i50 < 15; i50++) {
    emlrtDynamicBoundsCheckR2012b(i50 + 1, 1, Pa_sizes[0], &tb_emlrtBCI, sp);
  }

  iv44[0] = 15;
  iv44[1] = (int8_T)((int8_T)i49 - 1) + 1;
  c_Pa_sizes[0] = 15;
  c_Pa_sizes[1] = (i48 - i47) + 1;
  for (i49 = 0; i49 < 2; i49++) {
    Pa[i49] = c_Pa_sizes[i49];
  }

  emlrtSubAssignSizeCheckR2012b(iv44, 2, Pa, 2, &b_emlrtECI, sp);
  loop_ub = i48 - i47;
  for (i48 = 0; i48 <= loop_ub; i48++) {
    for (i49 = 0; i49 < 15; i49++) {
      obj->Pxl[i49 + 15 * o_tmp_data[i48]] = g_Pa_data[i49 + Pa_sizes[0] * (i47
        + i48)];
    }
  }

  for (i47 = 0; i47 < 6; i47++) {
    for (i48 = 0; i48 < 6; i48++) {
      obj->Ptt[i48 + 6 * i47] = g_Pa_data[(emlrtDynamicBoundsCheckR2012b((i48 +
        Pa_sizes[0]) - 5, 1, Pa_sizes[0], &ub_emlrtBCI, sp) + Pa_sizes[0] *
        (emlrtDynamicBoundsCheckR2012b((i47 + Pa_sizes[1]) - 5, 1, Pa_sizes[1],
        &vb_emlrtBCI, sp) - 1)) - 1];
    }
  }

  for (i47 = 0; i47 < 6; i47++) {
    for (i48 = 0; i48 < 15; i48++) {
      obj->Pxt[i48 + 15 * i47] = g_Pa_data[(emlrtDynamicBoundsCheckR2012b(1 +
        i48, 1, Pa_sizes[0], &wb_emlrtBCI, sp) + Pa_sizes[0] *
        (emlrtDynamicBoundsCheckR2012b((i47 + Pa_sizes[1]) - 5, 1, Pa_sizes[1],
        &xb_emlrtBCI, sp) - 1)) - 1];
    }
  }

  d4 = (16.0 + 3.0 * obj->num_landmarks) - 1.0;
  if (16.0 > d4) {
    i47 = 0;
    i48 = 0;
  } else {
    emlrtDynamicBoundsCheckR2012b(16, 1, Pa_sizes[0], &nb_emlrtBCI, sp);
    i47 = 15;
    i48 = (int32_T)emlrtIntegerCheckR2012b(d4, &i_emlrtDCI, sp);
    i48 = emlrtDynamicBoundsCheckR2012b(i48, 1, Pa_sizes[0], &nb_emlrtBCI, sp);
  }

  d4 = 3.0 * obj->num_landmarks;
  if (1.0 > d4) {
    i49 = 0;
  } else {
    i49 = (int32_T)emlrtIntegerCheckR2012b(d4, &j_emlrtDCI, sp);
    i49 = emlrtDynamicBoundsCheckR2012b(i49, 1, 60, &l_emlrtBCI, sp);
  }

  loop_ub = (int8_T)((int8_T)i49 - 1);
  for (i50 = 0; i50 <= loop_ub; i50++) {
    o_tmp_data[i50] = (int8_T)i50;
  }

  tmp_sizes_idx_0 = i48 - i47;
  for (i50 = 0; i50 < 6; i50++) {
    loop_ub = i48 - i47;
    for (i51 = 0; i51 < loop_ub; i51++) {
      q_tmp_data[i51 + tmp_sizes_idx_0 * i50] = g_Pa_data[(i47 + i51) +
        Pa_sizes[0] * (emlrtDynamicBoundsCheckR2012b((i50 + Pa_sizes[1]) - 5, 1,
        Pa_sizes[1], &yb_emlrtBCI, sp) - 1)];
    }
  }

  iv45[0] = (int8_T)((int8_T)i49 - 1) + 1;
  iv45[1] = 6;
  d_Pa_sizes[0] = i48 - i47;
  d_Pa_sizes[1] = 6;
  for (i47 = 0; i47 < 2; i47++) {
    Pa[i47] = d_Pa_sizes[i47];
  }

  emlrtSubAssignSizeCheckR2012b(iv45, 2, Pa, 2, &c_emlrtECI, sp);
  for (i47 = 0; i47 < 6; i47++) {
    for (i48 = 0; i48 < tmp_sizes_idx_0; i48++) {
      obj->Plt[o_tmp_data[i48] + 60 * i47] = q_tmp_data[i48 + tmp_sizes_idx_0 *
        i47];
    }
  }
}

static void RIEKF_Update_ForwardKinematics(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *
  moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T encoders[14], real_T
  contact[2])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  real_T R_pred[9];
  int32_T i53;
  int32_T i54;
  real_T s_pR[3];
  real_T s_pL[3];
  real_T JR[42];
  real_T JL[42];
  real_T alpha1;
  int32_T loop_ub;
  real_T s_pL_data[214];
  int32_T s_pR_sizes;
  int32_T s_pL_sizes;
  int32_T b_loop_ub;
  real_T Y_data[214];
  real_T b[196];
  real_T a[42];
  real_T beta1;
  char_T TRANSB;
  char_T TRANSA;
  real_T y[42];
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  real_T dv10[9];
  ptrdiff_t ldc_t;
  real_T b_y[9];
  real_T o_tmp_data[642];
  real_T N[9];
  real_T p_tmp_data[107];
  int32_T c_loop_ub;
  real_T q_tmp_data[363];
  real_T r_tmp_data[363];
  real_T e_varargin_1_data[642];
  int32_T tmp_sizes[2];
  real_T R_pred_data[321];
  real_T b_R_pred_data[321];
  real_T b_varargin_2_data[642];
  const mxArray *c_y;
  char_T u[39];
  static char_T cv17[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  const mxArray *m8;
  static const int32_T iv46[2] = { 1, 39 };

  int32_T R_pred_sizes[2];
  real_T b_a[42];
  real_T d_y[9];
  int32_T d_loop_ub;
  int32_T tmp_sizes_idx_1;
  real_T f_varargin_1_data[642];
  real_T c_varargin_2_data[642];
  const mxArray *e_y;
  char_T b_u[39];
  static const int32_T iv47[2] = { 1, 39 };

  real_T dv11[36];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  covrtLogFcn(moduleInstance->covInst, 0, 14);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 29);

  /*  Function to perform Right-Invariant EKF update from forward */
  /*  kinematic measurements */
  for (i53 = 0; i53 < 3; i53++) {
    for (i54 = 0; i54 < 3; i54++) {
      R_pred[i54 + 3 * i53] = obj->X[i54 + 7 * i53];
    }
  }

  if (covrtLogCond(moduleInstance->covInst, 0, 0, 7, contact[1] == 1.0) &&
      covrtLogCond(moduleInstance->covInst, 0, 0, 8, contact[0] == 1.0)) {
    covrtLogMcdc(moduleInstance->covInst, 0, 0, 6, true);
    covrtLogIf(moduleInstance->covInst, 0, 0, 12, true);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 30);

    /*  Double Support */
    st.site = &re_emlrtRSI;
    p_VectorNav_to_RightToeBottom(moduleInstance, encoders, s_pR);
    st.site = &se_emlrtRSI;
    p_VectorNav_to_LeftToeBottom(moduleInstance, encoders, s_pL);
    st.site = &te_emlrtRSI;
    J_VectorNav_to_RightToeBottom(moduleInstance, encoders, JR);
    st.site = &ue_emlrtRSI;
    J_VectorNav_to_LeftToeBottom(moduleInstance, encoders, JL);

    /*  Measurement Model */
    alpha1 = obj->num_landmarks;
    if (1.0 > alpha1) {
      loop_ub = 14;
    } else {
      i53 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &bb_emlrtDCI, sp);
      loop_ub = emlrtDynamicBoundsCheckR2012b(i53, 1, 100, &ac_emlrtBCI, sp) +
        14;
    }

    alpha1 = obj->num_landmarks;
    if (1.0 > alpha1) {
      b_loop_ub = 0;
    } else {
      i53 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &cb_emlrtDCI, sp);
      b_loop_ub = emlrtDynamicBoundsCheckR2012b(i53, 1, 100, &bc_emlrtBCI, sp);
    }

    s_pR_sizes = loop_ub + b_loop_ub;
    for (i53 = 0; i53 < 3; i53++) {
      s_pL_data[i53] = s_pR[i53];
    }

    s_pL_data[3] = 0.0;
    s_pL_data[4] = 1.0;
    s_pL_data[5] = -1.0;
    s_pL_data[6] = 0.0;
    for (i53 = 0; i53 <= loop_ub - 15; i53++) {
      s_pL_data[i53 + 7] = 0.0;
    }

    for (i53 = 0; i53 < 3; i53++) {
      s_pL_data[(i53 + loop_ub) - 7] = s_pL[i53];
    }

    s_pL_data[loop_ub - 4] = 0.0;
    s_pL_data[loop_ub - 3] = 1.0;
    s_pL_data[loop_ub - 2] = 0.0;
    s_pL_data[loop_ub - 1] = -1.0;
    for (i53 = 0; i53 < b_loop_ub; i53++) {
      s_pL_data[i53 + loop_ub] = 0.0;
    }

    for (i53 = 0; i53 < s_pR_sizes; i53++) {
      Y_data[i53] = s_pL_data[i53];
    }

    alpha1 = 3.0 * obj->num_landmarks;
    if (1.0 > alpha1) {
      loop_ub = -1;
    } else {
      i53 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &db_emlrtDCI, sp);
      loop_ub = emlrtDynamicBoundsCheckR2012b(i53, 1, 100, &cc_emlrtBCI, sp) - 1;
    }

    alpha1 = 3.0 * obj->num_landmarks;
    if (1.0 > alpha1) {
      b_loop_ub = -1;
    } else {
      i53 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &eb_emlrtDCI, sp);
      b_loop_ub = emlrtDynamicBoundsCheckR2012b(i53, 1, 100, &dc_emlrtBCI, sp) -
        1;
    }

    st.site = &ve_emlrtRSI;
    eye(dv10);
    eye(b_y);
    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * i53] = 0.0;
      }
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * (i53 + 3)] = 0.0;
      }
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * (i53 + 6)] = -dv10[i54 + 3 * i53];
      }
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * (i53 + 9)] = b_y[i54 + 3 * i53];
      }
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * (i53 + 12)] = 0.0;
      }
    }

    for (i53 = 0; i53 <= loop_ub; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * (i53 + 15)] = 0.0;
      }
    }

    for (i53 = 0; i53 < 6; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * ((i53 + loop_ub) + 16)] = 0.0;
      }
    }

    s_pL_sizes = loop_ub + 22;
    for (i53 = 0; i53 < s_pL_sizes; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        e_varargin_1_data[i54 + 3 * i53] = o_tmp_data[i54 + 3 * i53];
      }
    }

    eye(dv10);
    eye(b_y);
    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * i53] = 0.0;
      }
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * (i53 + 3)] = 0.0;
      }
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * (i53 + 6)] = -dv10[i54 + 3 * i53];
      }
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * (i53 + 9)] = 0.0;
      }
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * (i53 + 12)] = b_y[i54 + 3 * i53];
      }
    }

    for (i53 = 0; i53 <= b_loop_ub; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * (i53 + 15)] = 0.0;
      }
    }

    for (i53 = 0; i53 < 6; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * ((i53 + b_loop_ub) + 16)] = 0.0;
      }
    }

    s_pL_sizes = b_loop_ub + 22;
    for (i53 = 0; i53 < s_pL_sizes; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        b_varargin_2_data[i54 + 3 * i53] = o_tmp_data[i54 + 3 * i53];
      }
    }

    b_st.site = &de_emlrtRSI;
    c_st.site = &ee_emlrtRSI;
    if (loop_ub + 22 != b_loop_ub + 22) {
      for (i53 = 0; i53 < 39; i53++) {
        u[i53] = cv17[i53];
      }

      c_y = NULL;
      m8 = emlrtCreateCharArray(2, iv46);
      emlrtInitCharArrayR2013a(&c_st, 39, m8, &u[0]);
      emlrtAssign(&c_y, m8);
      d_st.site = &wk_emlrtRSI;
      g_error(&d_st, message(&d_st, c_y, &f_emlrtMCI), &f_emlrtMCI);
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 14; i54++) {
        a[i53 + 3 * i54] = 0.0;
        b_a[i53 + 3 * i54] = 0.0;
        for (s_pL_sizes = 0; s_pL_sizes < 3; s_pL_sizes++) {
          a[i53 + 3 * i54] += R_pred[i53 + 3 * s_pL_sizes] * JR[s_pL_sizes + 3 *
            i54];
          b_a[i53 + 3 * i54] += R_pred[i53 + 3 * s_pL_sizes] * JL[s_pL_sizes + 3
            * i54];
        }
      }
    }

    st.site = &we_emlrtRSI;
    for (i53 = 0; i53 < 196; i53++) {
      b[i53] = obj->Qe[i53];
    }

    b_st.site = &ge_emlrtRSI;
    c_st.site = &je_emlrtRSI;
    alpha1 = 1.0;
    beta1 = 0.0;
    TRANSB = 'N';
    TRANSA = 'N';
    for (i53 = 0; i53 < 42; i53++) {
      y[i53] = 0.0;
    }

    m_t = (ptrdiff_t)3;
    n_t = (ptrdiff_t)14;
    k_t = (ptrdiff_t)14;
    lda_t = (ptrdiff_t)3;
    ldb_t = (ptrdiff_t)14;
    ldc_t = (ptrdiff_t)3;
    dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t, &b[0],
          &ldb_t, &beta1, &y[0], &ldc_t);
    st.site = &xe_emlrtRSI;
    for (i53 = 0; i53 < 196; i53++) {
      b[i53] = obj->Qe[i53];
    }

    b_st.site = &ge_emlrtRSI;
    c_st.site = &je_emlrtRSI;
    alpha1 = 1.0;
    beta1 = 0.0;
    TRANSB = 'N';
    TRANSA = 'N';
    for (i53 = 0; i53 < 42; i53++) {
      a[i53] = 0.0;
    }

    m_t = (ptrdiff_t)3;
    n_t = (ptrdiff_t)14;
    k_t = (ptrdiff_t)14;
    lda_t = (ptrdiff_t)3;
    ldb_t = (ptrdiff_t)14;
    ldc_t = (ptrdiff_t)3;
    dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &b_a[0], &lda_t, &b[0],
          &ldb_t, &beta1, &a[0], &ldc_t);
    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        b_y[i53 + 3 * i54] = 0.0;
        for (s_pL_sizes = 0; s_pL_sizes < 14; s_pL_sizes++) {
          b_y[i53 + 3 * i54] += y[i53 + 3 * s_pL_sizes] * JR[i54 + 3 *
            s_pL_sizes];
        }
      }
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        alpha1 = 0.0;
        for (s_pL_sizes = 0; s_pL_sizes < 3; s_pL_sizes++) {
          alpha1 += b_y[i53 + 3 * s_pL_sizes] * R_pred[i54 + 3 * s_pL_sizes];
        }

        d_y[i53 + 3 * i54] = alpha1 + obj->Np[i53 + 3 * i54];
      }
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        b_y[i53 + 3 * i54] = 0.0;
        for (s_pL_sizes = 0; s_pL_sizes < 14; s_pL_sizes++) {
          b_y[i53 + 3 * i54] += a[i53 + 3 * s_pL_sizes] * JL[i54 + 3 *
            s_pL_sizes];
        }
      }
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        alpha1 = 0.0;
        for (s_pL_sizes = 0; s_pL_sizes < 3; s_pL_sizes++) {
          alpha1 += b_y[i53 + 3 * s_pL_sizes] * R_pred[i54 + 3 * s_pL_sizes];
        }

        N[i53 + 3 * i54] = alpha1 + obj->Np[i53 + 3 * i54];
      }
    }

    alpha1 = obj->num_landmarks;
    if (1.0 > alpha1) {
      b_loop_ub = 14;
    } else {
      i53 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &fb_emlrtDCI, sp);
      b_loop_ub = emlrtDynamicBoundsCheckR2012b(i53, 1, 100, &ec_emlrtBCI, sp) +
        14;
    }

    alpha1 = obj->num_landmarks;
    if (1.0 > alpha1) {
      s_pL_sizes = 0;
    } else {
      i53 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &gb_emlrtDCI, sp);
      s_pL_sizes = emlrtDynamicBoundsCheckR2012b(i53, 1, 100, &fc_emlrtBCI, sp);
    }

    alpha1 = obj->num_landmarks;
    if (1.0 > alpha1) {
      c_loop_ub = 14;
    } else {
      i53 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &hb_emlrtDCI, sp);
      c_loop_ub = emlrtDynamicBoundsCheckR2012b(i53, 1, 100, &gc_emlrtBCI, sp) +
        14;
    }

    alpha1 = obj->num_landmarks;
    if (1.0 > alpha1) {
      d_loop_ub = 0;
    } else {
      i53 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &ib_emlrtDCI, sp);
      d_loop_ub = emlrtDynamicBoundsCheckR2012b(i53, 1, 100, &hc_emlrtBCI, sp);
    }

    st.site = &ye_emlrtRSI;
    eye(dv10);
    tmp_sizes_idx_1 = b_loop_ub + s_pL_sizes;
    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * i53] = dv10[i54 + 3 * i53];
      }
    }

    for (i53 = 0; i53 < 4; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * (i53 + 3)] = 0.0;
      }
    }

    for (i53 = 0; i53 <= b_loop_ub - 15; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * (i53 + 7)] = 0.0;
      }
    }

    for (i53 = 0; i53 < 7; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * ((i53 + b_loop_ub) - 7)] = 0.0;
      }
    }

    for (i53 = 0; i53 < s_pL_sizes; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * (i53 + b_loop_ub)] = 0.0;
      }
    }

    for (i53 = 0; i53 < tmp_sizes_idx_1; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        f_varargin_1_data[i54 + 3 * i53] = o_tmp_data[i54 + 3 * i53];
      }
    }

    eye(dv10);
    s_pL_sizes = c_loop_ub + d_loop_ub;
    for (i53 = 0; i53 < 7; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * i53] = 0.0;
      }
    }

    for (i53 = 0; i53 <= c_loop_ub - 15; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * (i53 + 7)] = 0.0;
      }
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * ((i53 + c_loop_ub) - 7)] = dv10[i54 + 3 * i53];
      }
    }

    for (i53 = 0; i53 < 4; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * ((i53 + c_loop_ub) - 4)] = 0.0;
      }
    }

    for (i53 = 0; i53 < d_loop_ub; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        o_tmp_data[i54 + 3 * (i53 + c_loop_ub)] = 0.0;
      }
    }

    for (i53 = 0; i53 < s_pL_sizes; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        c_varargin_2_data[i54 + 3 * i53] = o_tmp_data[i54 + 3 * i53];
      }
    }

    b_st.site = &de_emlrtRSI;
    c_st.site = &ee_emlrtRSI;
    if (tmp_sizes_idx_1 != s_pL_sizes) {
      for (i53 = 0; i53 < 39; i53++) {
        b_u[i53] = cv17[i53];
      }

      e_y = NULL;
      m8 = emlrtCreateCharArray(2, iv47);
      emlrtInitCharArrayR2013a(&c_st, 39, m8, &b_u[0]);
      emlrtAssign(&e_y, m8);
      d_st.site = &wk_emlrtRSI;
      g_error(&d_st, message(&d_st, e_y, &f_emlrtMCI), &f_emlrtMCI);
    }

    /*  Update State */
    b_loop_ub = (uint8_T)s_pR_sizes;
    for (i53 = 0; i53 < b_loop_ub; i53++) {
      s_pL_data[i53] = 0.0;
    }

    tmp_sizes[0] = 6;
    tmp_sizes[1] = loop_ub + 22;
    b_loop_ub = loop_ub + 22;
    for (i53 = 0; i53 < b_loop_ub; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        moduleInstance->c_varargin_1_data[i54 + 6 * i53] = e_varargin_1_data[i54
          + 3 * i53];
      }
    }

    loop_ub += 22;
    for (i53 = 0; i53 < loop_ub; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        moduleInstance->c_varargin_1_data[(i54 + 6 * i53) + 3] =
          b_varargin_2_data[i54 + 3 * i53];
      }
    }

    R_pred_sizes[0] = 6;
    R_pred_sizes[1] = tmp_sizes_idx_1;
    for (i53 = 0; i53 < tmp_sizes_idx_1; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        moduleInstance->d_varargin_1_data[i54 + 6 * i53] = f_varargin_1_data[i54
          + 3 * i53];
      }
    }

    for (i53 = 0; i53 < tmp_sizes_idx_1; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        moduleInstance->d_varargin_1_data[(i54 + 6 * i53) + 3] =
          c_varargin_2_data[i54 + 3 * i53];
      }
    }

    e_blkdiag(d_y, N, dv11);
    st.site = &af_emlrtRSI;
    RIEKF_Update_State(moduleInstance, &st, obj, Y_data, s_pR_sizes, s_pL_data,
                       (int32_T)(uint8_T)s_pR_sizes,
                       moduleInstance->c_varargin_1_data, tmp_sizes, dv11,
                       moduleInstance->d_varargin_1_data, R_pred_sizes);
  } else {
    covrtLogMcdc(moduleInstance->covInst, 0, 0, 6, false);
    covrtLogIf(moduleInstance->covInst, 0, 0, 12, false);
    if (covrtLogIf(moduleInstance->covInst, 0, 0, 13, contact[1] == 1.0)) {
      covrtLogBasicBlock(moduleInstance->covInst, 0, 31);

      /*  Single Support Right     */
      st.site = &bf_emlrtRSI;
      p_VectorNav_to_RightToeBottom(moduleInstance, encoders, s_pR);
      st.site = &cf_emlrtRSI;
      J_VectorNav_to_RightToeBottom(moduleInstance, encoders, JR);

      /*  Measurement Model */
      alpha1 = obj->num_landmarks;
      if (1.0 > alpha1) {
        loop_ub = -1;
      } else {
        i53 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &jb_emlrtDCI, sp);
        loop_ub = emlrtDynamicBoundsCheckR2012b(i53, 1, 100, &ic_emlrtBCI, sp) -
          1;
      }

      s_pR_sizes = loop_ub + 8;
      for (i53 = 0; i53 < 3; i53++) {
        s_pL_data[i53] = s_pR[i53];
      }

      s_pL_data[3] = 0.0;
      s_pL_data[4] = 1.0;
      s_pL_data[5] = -1.0;
      s_pL_data[6] = 0.0;
      for (i53 = 0; i53 <= loop_ub; i53++) {
        s_pL_data[i53 + 7] = 0.0;
      }

      for (i53 = 0; i53 < s_pR_sizes; i53++) {
        Y_data[i53] = s_pL_data[i53];
      }

      alpha1 = 3.0 * obj->num_landmarks;
      if (1.0 > alpha1) {
        b_loop_ub = -1;
      } else {
        i53 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &kb_emlrtDCI, sp);
        b_loop_ub = emlrtDynamicBoundsCheckR2012b(i53, 1, 100, &jc_emlrtBCI, sp)
          - 1;
      }

      for (i53 = 0; i53 < 3; i53++) {
        for (i54 = 0; i54 < 14; i54++) {
          a[i53 + 3 * i54] = 0.0;
          for (s_pL_sizes = 0; s_pL_sizes < 3; s_pL_sizes++) {
            a[i53 + 3 * i54] += R_pred[i53 + 3 * s_pL_sizes] * JR[s_pL_sizes + 3
              * i54];
          }
        }
      }

      st.site = &df_emlrtRSI;
      for (i53 = 0; i53 < 196; i53++) {
        b[i53] = obj->Qe[i53];
      }

      b_st.site = &ge_emlrtRSI;
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      for (i53 = 0; i53 < 42; i53++) {
        y[i53] = 0.0;
      }

      m_t = (ptrdiff_t)3;
      n_t = (ptrdiff_t)14;
      k_t = (ptrdiff_t)14;
      lda_t = (ptrdiff_t)3;
      ldb_t = (ptrdiff_t)14;
      ldc_t = (ptrdiff_t)3;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t, &b[0],
            &ldb_t, &beta1, &y[0], &ldc_t);
      for (i53 = 0; i53 < 3; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          b_y[i53 + 3 * i54] = 0.0;
          for (s_pL_sizes = 0; s_pL_sizes < 14; s_pL_sizes++) {
            b_y[i53 + 3 * i54] += y[i53 + 3 * s_pL_sizes] * JR[i54 + 3 *
              s_pL_sizes];
          }
        }
      }

      for (i53 = 0; i53 < 3; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          alpha1 = 0.0;
          for (s_pL_sizes = 0; s_pL_sizes < 3; s_pL_sizes++) {
            alpha1 += b_y[i53 + 3 * s_pL_sizes] * R_pred[i54 + 3 * s_pL_sizes];
          }

          N[i53 + 3 * i54] = alpha1 + obj->Np[i53 + 3 * i54];
        }
      }

      alpha1 = obj->num_landmarks;
      if (1.0 > alpha1) {
        s_pL_sizes = -1;
      } else {
        i53 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &lb_emlrtDCI, sp);
        s_pL_sizes = emlrtDynamicBoundsCheckR2012b(i53, 1, 100, &kc_emlrtBCI, sp)
          - 1;
      }

      /*  Update State */
      eye(dv10);
      eye(b_y);
      eye(R_pred);
      c_loop_ub = (uint8_T)(loop_ub + 8);
      for (i53 = 0; i53 < c_loop_ub; i53++) {
        p_tmp_data[i53] = 0.0;
      }

      for (i53 = 0; i53 < 3; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          r_tmp_data[i54 + 3 * i53] = 0.0;
        }
      }

      for (i53 = 0; i53 < 3; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          r_tmp_data[i54 + 3 * (i53 + 3)] = 0.0;
        }
      }

      for (i53 = 0; i53 < 3; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          r_tmp_data[i54 + 3 * (i53 + 6)] = -dv10[i54 + 3 * i53];
        }
      }

      for (i53 = 0; i53 < 3; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          r_tmp_data[i54 + 3 * (i53 + 9)] = b_y[i54 + 3 * i53];
        }
      }

      for (i53 = 0; i53 < 3; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          r_tmp_data[i54 + 3 * (i53 + 12)] = 0.0;
        }
      }

      for (i53 = 0; i53 <= b_loop_ub; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          r_tmp_data[i54 + 3 * (i53 + 15)] = 0.0;
        }
      }

      for (i53 = 0; i53 < 6; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          r_tmp_data[i54 + 3 * ((i53 + b_loop_ub) + 16)] = 0.0;
        }
      }

      tmp_sizes[0] = 3;
      tmp_sizes[1] = b_loop_ub + 22;
      b_loop_ub += 22;
      for (i53 = 0; i53 < b_loop_ub; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          q_tmp_data[i54 + 3 * i53] = r_tmp_data[i54 + 3 * i53];
        }
      }

      for (i53 = 0; i53 < 3; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          b_R_pred_data[i54 + 3 * i53] = R_pred[i54 + 3 * i53];
        }
      }

      for (i53 = 0; i53 < 4; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          b_R_pred_data[i54 + 3 * (i53 + 3)] = 0.0;
        }
      }

      for (i53 = 0; i53 <= s_pL_sizes; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          b_R_pred_data[i54 + 3 * (i53 + 7)] = 0.0;
        }
      }

      R_pred_sizes[0] = 3;
      R_pred_sizes[1] = s_pL_sizes + 8;
      b_loop_ub = s_pL_sizes + 8;
      for (i53 = 0; i53 < b_loop_ub; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          R_pred_data[i54 + 3 * i53] = b_R_pred_data[i54 + 3 * i53];
        }
      }

      st.site = &ef_emlrtRSI;
      b_RIEKF_Update_State(moduleInstance, &st, obj, Y_data, loop_ub + 8,
                           p_tmp_data, (int32_T)(uint8_T)(loop_ub + 8),
                           q_tmp_data, tmp_sizes, N, R_pred_data, R_pred_sizes);
    } else {
      if (covrtLogIf(moduleInstance->covInst, 0, 0, 14, contact[0] == 1.0)) {
        covrtLogBasicBlock(moduleInstance->covInst, 0, 32);

        /*  Single Support Left */
        st.site = &ff_emlrtRSI;
        p_VectorNav_to_LeftToeBottom(moduleInstance, encoders, s_pL);
        st.site = &gf_emlrtRSI;
        J_VectorNav_to_LeftToeBottom(moduleInstance, encoders, JL);

        /*  Measurement Model */
        alpha1 = obj->num_landmarks;
        if (1.0 > alpha1) {
          loop_ub = -1;
        } else {
          i53 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &mb_emlrtDCI, sp);
          loop_ub = emlrtDynamicBoundsCheckR2012b(i53, 1, 100, &lc_emlrtBCI, sp)
            - 1;
        }

        s_pL_sizes = loop_ub + 8;
        for (i53 = 0; i53 < 3; i53++) {
          s_pL_data[i53] = s_pL[i53];
        }

        s_pL_data[3] = 0.0;
        s_pL_data[4] = 1.0;
        s_pL_data[5] = 0.0;
        s_pL_data[6] = -1.0;
        for (i53 = 0; i53 <= loop_ub; i53++) {
          s_pL_data[i53 + 7] = 0.0;
        }

        for (i53 = 0; i53 < s_pL_sizes; i53++) {
          Y_data[i53] = s_pL_data[i53];
        }

        alpha1 = 3.0 * obj->num_landmarks;
        if (1.0 > alpha1) {
          b_loop_ub = -1;
        } else {
          i53 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &nb_emlrtDCI, sp);
          b_loop_ub = emlrtDynamicBoundsCheckR2012b(i53, 1, 100, &mc_emlrtBCI,
            sp) - 1;
        }

        for (i53 = 0; i53 < 3; i53++) {
          for (i54 = 0; i54 < 14; i54++) {
            a[i53 + 3 * i54] = 0.0;
            for (s_pL_sizes = 0; s_pL_sizes < 3; s_pL_sizes++) {
              a[i53 + 3 * i54] += R_pred[i53 + 3 * s_pL_sizes] * JL[s_pL_sizes +
                3 * i54];
            }
          }
        }

        st.site = &hf_emlrtRSI;
        for (i53 = 0; i53 < 196; i53++) {
          b[i53] = obj->Qe[i53];
        }

        b_st.site = &ge_emlrtRSI;
        c_st.site = &je_emlrtRSI;
        alpha1 = 1.0;
        beta1 = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        for (i53 = 0; i53 < 42; i53++) {
          y[i53] = 0.0;
        }

        m_t = (ptrdiff_t)3;
        n_t = (ptrdiff_t)14;
        k_t = (ptrdiff_t)14;
        lda_t = (ptrdiff_t)3;
        ldb_t = (ptrdiff_t)14;
        ldc_t = (ptrdiff_t)3;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t, &b[0],
              &ldb_t, &beta1, &y[0], &ldc_t);
        for (i53 = 0; i53 < 3; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            b_y[i53 + 3 * i54] = 0.0;
            for (s_pL_sizes = 0; s_pL_sizes < 14; s_pL_sizes++) {
              b_y[i53 + 3 * i54] += y[i53 + 3 * s_pL_sizes] * JL[i54 + 3 *
                s_pL_sizes];
            }
          }
        }

        for (i53 = 0; i53 < 3; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            alpha1 = 0.0;
            for (s_pL_sizes = 0; s_pL_sizes < 3; s_pL_sizes++) {
              alpha1 += b_y[i53 + 3 * s_pL_sizes] * R_pred[i54 + 3 * s_pL_sizes];
            }

            N[i53 + 3 * i54] = alpha1 + obj->Np[i53 + 3 * i54];
          }
        }

        alpha1 = obj->num_landmarks;
        if (1.0 > alpha1) {
          s_pL_sizes = -1;
        } else {
          i53 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &ob_emlrtDCI, sp);
          s_pL_sizes = emlrtDynamicBoundsCheckR2012b(i53, 1, 100, &nc_emlrtBCI,
            sp) - 1;
        }

        /*  Update State */
        eye(dv10);
        eye(b_y);
        eye(R_pred);
        c_loop_ub = (uint8_T)(loop_ub + 8);
        for (i53 = 0; i53 < c_loop_ub; i53++) {
          p_tmp_data[i53] = 0.0;
        }

        for (i53 = 0; i53 < 3; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            r_tmp_data[i54 + 3 * i53] = 0.0;
          }
        }

        for (i53 = 0; i53 < 3; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            r_tmp_data[i54 + 3 * (i53 + 3)] = 0.0;
          }
        }

        for (i53 = 0; i53 < 3; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            r_tmp_data[i54 + 3 * (i53 + 6)] = -dv10[i54 + 3 * i53];
          }
        }

        for (i53 = 0; i53 < 3; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            r_tmp_data[i54 + 3 * (i53 + 9)] = 0.0;
          }
        }

        for (i53 = 0; i53 < 3; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            r_tmp_data[i54 + 3 * (i53 + 12)] = b_y[i54 + 3 * i53];
          }
        }

        for (i53 = 0; i53 <= b_loop_ub; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            r_tmp_data[i54 + 3 * (i53 + 15)] = 0.0;
          }
        }

        for (i53 = 0; i53 < 6; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            r_tmp_data[i54 + 3 * ((i53 + b_loop_ub) + 16)] = 0.0;
          }
        }

        tmp_sizes[0] = 3;
        tmp_sizes[1] = b_loop_ub + 22;
        b_loop_ub += 22;
        for (i53 = 0; i53 < b_loop_ub; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            q_tmp_data[i54 + 3 * i53] = r_tmp_data[i54 + 3 * i53];
          }
        }

        for (i53 = 0; i53 < 3; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            b_R_pred_data[i54 + 3 * i53] = R_pred[i54 + 3 * i53];
          }
        }

        for (i53 = 0; i53 < 4; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            b_R_pred_data[i54 + 3 * (i53 + 3)] = 0.0;
          }
        }

        for (i53 = 0; i53 <= s_pL_sizes; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            b_R_pred_data[i54 + 3 * (i53 + 7)] = 0.0;
          }
        }

        R_pred_sizes[0] = 3;
        R_pred_sizes[1] = s_pL_sizes + 8;
        b_loop_ub = s_pL_sizes + 8;
        for (i53 = 0; i53 < b_loop_ub; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            R_pred_data[i54 + 3 * i53] = b_R_pred_data[i54 + 3 * i53];
          }
        }

        st.site = &if_emlrtRSI;
        b_RIEKF_Update_State(moduleInstance, &st, obj, Y_data, loop_ub + 8,
                             p_tmp_data, (int32_T)(uint8_T)(loop_ub + 8),
                             q_tmp_data, tmp_sizes, N, R_pred_data, R_pred_sizes);
      }
    }
  }
}

static void J_VectorNav_to_RightToeBottom(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, real_T var1[14], real_T output1[42])
{
  covrtLogFcn(moduleInstance->covInst, 7, 0);
  covrtLogIf(moduleInstance->covInst, 7, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst, 7, 1);
  J_VectorNav_to_RightToeBottom_src(output1, var1);
}

static void J_VectorNav_to_LeftToeBottom(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, real_T var1[14], real_T output1[42])
{
  covrtLogFcn(moduleInstance->covInst, 8, 0);
  covrtLogIf(moduleInstance->covInst, 8, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst, 8, 1);
  J_VectorNav_to_LeftToeBottom_src(output1, var1);
}

static void e_blkdiag(real_T varargin_1[9], real_T varargin_2[9], real_T y[36])
{
  int32_T i55;
  int32_T i56;
  for (i55 = 0; i55 < 36; i55++) {
    y[i55] = 0.0;
  }

  for (i55 = 0; i55 < 3; i55++) {
    for (i56 = 0; i56 < 3; i56++) {
      y[i56 + 6 * i55] = varargin_1[i56 + 3 * i55];
      y[(i56 + 6 * (3 + i55)) + 3] = varargin_2[i56 + 3 * i55];
    }
  }
}

static void RIEKF_Update_State(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Y_data[], int32_T
  Y_sizes, real_T g_b_data[], int32_T b_sizes, real_T H_data[], int32_T H_sizes
  [2], real_T N[36], real_T c_PI_data[], int32_T PI_sizes[2])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  int32_T tmp_sizes[2];
  int32_T Xa_sizes[2];
  int32_T loop_ub;
  int32_T i57;
  int32_T Pa_sizes[2];
  int32_T y_sizes_idx_0;
  int32_T y_sizes_idx_1;
  const mxArray *y;
  char_T u[21];
  static char_T cv18[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *b_y;
  char_T b_u[45];
  static char_T cv19[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  const mxArray *m9;
  static const int32_T iv48[2] = { 1, 21 };

  static const int32_T iv49[2] = { 1, 45 };

  int32_T i58;
  int32_T b_loop_ub;
  int32_T b_sizes_idx_0;
  real_T alpha1;
  real_T Xdim;
  char_T TRANSB;
  int32_T c_loop_ub;
  char_T TRANSA;
  int32_T i59;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  int32_T y_sizes[2];
  ptrdiff_t ldc_t;
  const mxArray *c_y;
  char_T c_u[21];
  const mxArray *d_y;
  char_T d_u[45];
  static const int32_T iv50[2] = { 1, 21 };

  static const int32_T iv51[2] = { 1, 45 };

  int32_T e_y[2];
  int32_T dX_sizes[2];
  int32_T b_y_sizes[2];
  const mxArray *f_y;
  char_T e_u[21];
  const mxArray *g_y;
  char_T f_u[45];
  static const int32_T iv52[2] = { 1, 21 };

  static const int32_T iv53[2] = { 1, 45 };

  real_T h_y[36];
  real_T c_K_data[726];
  int32_T K_sizes[2];
  real_T Ydim;
  static char_T cv20[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  int8_T o_tmp_data[27];
  real_T h_b_data[400];
  int32_T iv54[2];
  int8_T p_tmp_data[27];
  int32_T c_y_sizes;
  const mxArray *i_y;
  char_T g_u[21];
  const mxArray *j_y;
  char_T h_u[45];
  static const int32_T iv55[2] = { 1, 21 };

  static const int32_T iv56[2] = { 1, 45 };

  real_T jb_y_data[121];
  real_T Z_data[100];
  const mxArray *k_y;
  char_T i_u[21];
  static const int32_T iv57[2] = { 1, 21 };

  const mxArray *l_y;
  char_T j_u[21];
  const mxArray *m_y;
  char_T k_u[45];
  static const int32_T iv58[2] = { 1, 21 };

  static const int32_T iv59[2] = { 1, 45 };

  real_T delta_data[121];
  int32_T iv60[2];
  real_T b_delta_data[75];
  real_T dX_data[784];
  real_T dtheta[6];
  const mxArray *n_y;
  char_T l_u[21];
  const mxArray *o_y;
  char_T m_u[45];
  static const int32_T iv61[2] = { 1, 21 };

  static const int32_T iv62[2] = { 1, 45 };

  int8_T q_tmp_data[20];
  int32_T iv63[2];
  int32_T d_y_sizes[2];
  real_T Pa[2];
  int32_T I_sizes[2];
  real_T i_b_data[1284];
  int32_T C_sizes[2];
  const mxArray *p_y;
  char_T n_u[21];
  static const int32_T iv64[2] = { 1, 21 };

  int32_T b_C_sizes[2];
  const mxArray *q_y;
  char_T o_u[21];
  static const int32_T iv65[2] = { 1, 21 };

  const mxArray *r_y;
  char_T p_u[21];
  const mxArray *s_y;
  char_T q_u[45];
  static const int32_T iv66[2] = { 1, 21 };

  static const int32_T iv67[2] = { 1, 45 };

  int32_T e_y_sizes[2];
  const mxArray *t_y;
  char_T r_u[21];
  const mxArray *u_y;
  char_T s_u[45];
  static const int32_T iv68[2] = { 1, 21 };

  static const int32_T iv69[2] = { 1, 45 };

  real_T n_C_data[726];
  uint8_T c_C_sizes[2];
  real_T j_b_data[726];
  int32_T f_y_sizes[2];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  covrtLogFcn(moduleInstance->covInst, 0, 13);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 26);

  /*  Update State and Covariance from a measurement */
  /*  Compute Kalman Gain */
  st.site = &jf_emlrtRSI;
  RIEKF_Augmented_State(moduleInstance, &st, obj, moduleInstance->e_tmp_data,
                        tmp_sizes);
  Xa_sizes[0] = tmp_sizes[0];
  Xa_sizes[1] = tmp_sizes[1];
  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i57 = 0; i57 < loop_ub; i57++) {
    moduleInstance->b_Xa_data[i57] = moduleInstance->e_tmp_data[i57];
  }

  st.site = &kf_emlrtRSI;
  RIEKF_Augmented_Covariance(moduleInstance, &st, obj, moduleInstance->d_Pa_data,
    Pa_sizes);
  st.site = &lf_emlrtRSI;
  loop_ub = H_sizes[0] * H_sizes[1];
  for (i57 = 0; i57 < loop_ub; i57++) {
    moduleInstance->c_a_data[i57] = H_data[i57];
  }

  loop_ub = Pa_sizes[0] * Pa_sizes[1];
  for (i57 = 0; i57 < loop_ub; i57++) {
    moduleInstance->c_b_data[i57] = moduleInstance->d_Pa_data[i57];
  }

  b_st.site = &he_emlrtRSI;
  if (!(H_sizes[1] == Pa_sizes[0])) {
    if (((H_sizes[0] == 1) && (H_sizes[1] == 1)) || ((Pa_sizes[0] == 1) &&
         (Pa_sizes[1] == 1))) {
      for (i57 = 0; i57 < 45; i57++) {
        b_u[i57] = cv19[i57];
      }

      b_y = NULL;
      m9 = emlrtCreateCharArray(2, iv49);
      emlrtInitCharArrayR2013a(&b_st, 45, m9, &b_u[0]);
      emlrtAssign(&b_y, m9);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, b_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i57 = 0; i57 < 21; i57++) {
        u[i57] = cv18[i57];
      }

      y = NULL;
      m9 = emlrtCreateCharArray(2, iv48);
      emlrtInitCharArrayR2013a(&b_st, 21, m9, &u[0]);
      emlrtAssign(&y, m9);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((H_sizes[1] == 1) || (Pa_sizes[0] == 1)) {
    y_sizes_idx_0 = H_sizes[0];
    y_sizes_idx_1 = Pa_sizes[1];
    loop_ub = H_sizes[0];
    for (i57 = 0; i57 < loop_ub; i57++) {
      b_loop_ub = Pa_sizes[1];
      for (i58 = 0; i58 < b_loop_ub; i58++) {
        moduleInstance->g_y_data[i57 + y_sizes_idx_0 * i58] = 0.0;
        c_loop_ub = H_sizes[1];
        for (i59 = 0; i59 < c_loop_ub; i59++) {
          moduleInstance->g_y_data[i57 + y_sizes_idx_0 * i58] += H_data[i57 +
            H_sizes[0] * i59] * moduleInstance->d_Pa_data[i59 + Pa_sizes[0] *
            i58];
        }
      }
    }
  } else {
    y_sizes_idx_0 = (uint8_T)H_sizes[0];
    y_sizes_idx_1 = (uint8_T)Pa_sizes[1];
    loop_ub = (uint8_T)Pa_sizes[1];
    for (i57 = 0; i57 < loop_ub; i57++) {
      for (i58 = 0; i58 < y_sizes_idx_0; i58++) {
        moduleInstance->g_y_data[i58 + y_sizes_idx_0 * i57] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((H_sizes[0] < 1) || (Pa_sizes[1] < 1) || (H_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)H_sizes[0];
      n_t = (ptrdiff_t)Pa_sizes[1];
      k_t = (ptrdiff_t)H_sizes[1];
      lda_t = (ptrdiff_t)H_sizes[0];
      ldb_t = (ptrdiff_t)H_sizes[1];
      ldc_t = (ptrdiff_t)H_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->c_a_data[0], &lda_t, &moduleInstance->c_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->g_y_data[0], &ldc_t);
    }
  }

  st.site = &lf_emlrtRSI;
  b_sizes_idx_0 = H_sizes[1];
  loop_ub = H_sizes[0];
  for (i57 = 0; i57 < loop_ub; i57++) {
    b_loop_ub = H_sizes[1];
    for (i58 = 0; i58 < b_loop_ub; i58++) {
      moduleInstance->c_b_data[i58 + b_sizes_idx_0 * i57] = H_data[i57 +
        H_sizes[0] * i58];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(y_sizes_idx_1 == H_sizes[1])) {
    if (((y_sizes_idx_0 == 1) && (y_sizes_idx_1 == 1)) || ((H_sizes[1] == 1) &&
         (H_sizes[0] == 1))) {
      for (i57 = 0; i57 < 45; i57++) {
        d_u[i57] = cv19[i57];
      }

      d_y = NULL;
      m9 = emlrtCreateCharArray(2, iv51);
      emlrtInitCharArrayR2013a(&b_st, 45, m9, &d_u[0]);
      emlrtAssign(&d_y, m9);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, d_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i57 = 0; i57 < 21; i57++) {
        c_u[i57] = cv18[i57];
      }

      c_y = NULL;
      m9 = emlrtCreateCharArray(2, iv50);
      emlrtInitCharArrayR2013a(&b_st, 21, m9, &c_u[0]);
      emlrtAssign(&c_y, m9);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, c_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((y_sizes_idx_1 == 1) || (H_sizes[1] == 1)) {
    y_sizes[0] = y_sizes_idx_0;
    y_sizes[1] = H_sizes[0];
    for (i57 = 0; i57 < y_sizes_idx_0; i57++) {
      loop_ub = H_sizes[0];
      for (i58 = 0; i58 < loop_ub; i58++) {
        moduleInstance->h_y_data[i57 + y_sizes_idx_0 * i58] = 0.0;
        for (i59 = 0; i59 < y_sizes_idx_1; i59++) {
          moduleInstance->h_y_data[i57 + y_sizes_idx_0 * i58] +=
            moduleInstance->g_y_data[i57 + y_sizes_idx_0 * i59] *
            moduleInstance->c_b_data[i59 + b_sizes_idx_0 * i58];
        }
      }
    }
  } else {
    y_sizes[0] = (uint8_T)y_sizes_idx_0;
    y_sizes[1] = (uint8_T)H_sizes[0];
    loop_ub = (uint8_T)H_sizes[0];
    for (i57 = 0; i57 < loop_ub; i57++) {
      b_loop_ub = (uint8_T)y_sizes_idx_0;
      for (i58 = 0; i58 < b_loop_ub; i58++) {
        moduleInstance->h_y_data[i58 + (uint8_T)y_sizes_idx_0 * i57] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((y_sizes_idx_0 < 1) || (H_sizes[0] < 1) || (y_sizes_idx_1 < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)y_sizes_idx_0;
      n_t = (ptrdiff_t)H_sizes[0];
      k_t = (ptrdiff_t)y_sizes_idx_1;
      lda_t = (ptrdiff_t)y_sizes_idx_0;
      ldb_t = (ptrdiff_t)y_sizes_idx_1;
      ldc_t = (ptrdiff_t)y_sizes_idx_0;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->g_y_data[0], &lda_t, &moduleInstance->c_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->h_y_data[0], &ldc_t);
    }
  }

  for (i57 = 0; i57 < 2; i57++) {
    e_y[i57] = y_sizes[i57];
    dX_sizes[i57] = 6;
  }

  emlrtSizeEqCheckNDR2012b(e_y, dX_sizes, &f_emlrtECI, sp);
  st.site = &mf_emlrtRSI;
  loop_ub = Pa_sizes[0] * Pa_sizes[1];
  for (i57 = 0; i57 < loop_ub; i57++) {
    moduleInstance->c_a_data[i57] = moduleInstance->d_Pa_data[i57];
  }

  b_sizes_idx_0 = H_sizes[1];
  loop_ub = H_sizes[0];
  for (i57 = 0; i57 < loop_ub; i57++) {
    b_loop_ub = H_sizes[1];
    for (i58 = 0; i58 < b_loop_ub; i58++) {
      moduleInstance->c_b_data[i58 + b_sizes_idx_0 * i57] = H_data[i57 +
        H_sizes[0] * i58];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(Pa_sizes[1] == H_sizes[1])) {
    if (((Pa_sizes[0] == 1) && (Pa_sizes[1] == 1)) || ((H_sizes[1] == 1) &&
         (H_sizes[0] == 1))) {
      for (i57 = 0; i57 < 45; i57++) {
        f_u[i57] = cv19[i57];
      }

      g_y = NULL;
      m9 = emlrtCreateCharArray(2, iv53);
      emlrtInitCharArrayR2013a(&b_st, 45, m9, &f_u[0]);
      emlrtAssign(&g_y, m9);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, g_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i57 = 0; i57 < 21; i57++) {
        e_u[i57] = cv18[i57];
      }

      f_y = NULL;
      m9 = emlrtCreateCharArray(2, iv52);
      emlrtInitCharArrayR2013a(&b_st, 21, m9, &e_u[0]);
      emlrtAssign(&f_y, m9);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, f_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((Pa_sizes[1] == 1) || (H_sizes[1] == 1)) {
    b_y_sizes[0] = Pa_sizes[0];
    b_y_sizes[1] = H_sizes[0];
    loop_ub = Pa_sizes[0];
    for (i57 = 0; i57 < loop_ub; i57++) {
      b_loop_ub = H_sizes[0];
      for (i58 = 0; i58 < b_loop_ub; i58++) {
        moduleInstance->i_y_data[i57 + b_y_sizes[0] * i58] = 0.0;
        c_loop_ub = Pa_sizes[1];
        for (i59 = 0; i59 < c_loop_ub; i59++) {
          moduleInstance->i_y_data[i57 + b_y_sizes[0] * i58] +=
            moduleInstance->d_Pa_data[i57 + Pa_sizes[0] * i59] *
            moduleInstance->c_b_data[i59 + b_sizes_idx_0 * i58];
        }
      }
    }
  } else {
    b_y_sizes[0] = (uint8_T)Pa_sizes[0];
    b_y_sizes[1] = (uint8_T)H_sizes[0];
    loop_ub = (uint8_T)H_sizes[0];
    for (i57 = 0; i57 < loop_ub; i57++) {
      b_loop_ub = b_y_sizes[0];
      for (i58 = 0; i58 < b_loop_ub; i58++) {
        moduleInstance->i_y_data[i58 + b_y_sizes[0] * i57] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((Pa_sizes[0] < 1) || (H_sizes[0] < 1) || (Pa_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)Pa_sizes[0];
      n_t = (ptrdiff_t)H_sizes[0];
      k_t = (ptrdiff_t)Pa_sizes[1];
      lda_t = (ptrdiff_t)Pa_sizes[0];
      ldb_t = (ptrdiff_t)Pa_sizes[1];
      ldc_t = (ptrdiff_t)Pa_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->c_a_data[0], &lda_t, &moduleInstance->c_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->i_y_data[0], &ldc_t);
    }
  }

  for (i57 = 0; i57 < 36; i57++) {
    h_y[i57] = moduleInstance->h_y_data[i57] + N[i57];
  }

  st.site = &mf_emlrtRSI;
  mrdivide(&st, moduleInstance->i_y_data, b_y_sizes, h_y, c_K_data, K_sizes);

  /*  Copy X along the diagonals if more than one measurement */
  /*  TODO: find better way to do this */
  Xdim = 7.0 + obj->num_landmarks;
  Ydim = (real_T)Y_sizes / Xdim;
  if (!(Ydim < 20.0)) {
    st.site = &vk_emlrtRSI;
    g_error(&st, message(&st, b_emlrt_marshallOut(&st, cv20), &i_emlrtMCI),
            &i_emlrtMCI);
  }

  if (!(Xdim < 27.0)) {
    st.site = &uk_emlrtRSI;
    g_error(&st, message(&st, b_emlrt_marshallOut(&st, cv20), &j_emlrtMCI),
            &j_emlrtMCI);
  }

  alpha1 = Xdim * Ydim;
  if (1.0 > alpha1) {
    loop_ub = 0;
  } else {
    i57 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &pb_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i57, 1, 100, &oc_emlrtBCI, sp);
  }

  alpha1 = Xdim * Ydim;
  if (1.0 > alpha1) {
    b_loop_ub = 0;
  } else {
    i57 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &qb_emlrtDCI, sp);
    b_loop_ub = emlrtDynamicBoundsCheckR2012b(i57, 1, 100, &pc_emlrtBCI, sp);
  }

  emlrtDimSizeGeqCheckR2012b(540, loop_ub, &g_emlrtECI, sp);
  emlrtDimSizeGeqCheckR2012b(540, b_loop_ub, &h_emlrtECI, sp);
  c_loop_ub = loop_ub * b_loop_ub;
  for (i57 = 0; i57 < c_loop_ub; i57++) {
    moduleInstance->b_BigX_data[i57] = 0.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, Ydim, mxDOUBLE_CLASS, (int32_T)Ydim,
    &emlrtRTEI, sp);
  b_sizes_idx_0 = 0;
  while (b_sizes_idx_0 <= (int32_T)Ydim - 1) {
    covrtLogFor(moduleInstance->covInst, 0, 0, 1, 1);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 27);
    alpha1 = Xdim * ((1.0 + (real_T)b_sizes_idx_0) - 1.0);
    c_loop_ub = (int32_T)muDoubleScalarFloor(Xdim - 1.0);
    for (i57 = 0; i57 <= c_loop_ub; i57++) {
      i58 = (int8_T)emlrtIntegerCheckR2012b(alpha1 + (1.0 + (real_T)i57),
        &tb_emlrtDCI, sp);
      o_tmp_data[i57] = (int8_T)((int8_T)emlrtDynamicBoundsCheckR2012b(i58, 1,
        loop_ub, &xc_emlrtBCI, sp) - 1);
    }

    alpha1 = Xdim * ((1.0 + (real_T)b_sizes_idx_0) - 1.0);
    c_loop_ub = (int32_T)muDoubleScalarFloor(Xdim - 1.0);
    for (i57 = 0; i57 <= c_loop_ub; i57++) {
      i58 = (int8_T)emlrtIntegerCheckR2012b(alpha1 + (1.0 + (real_T)i57),
        &ub_emlrtDCI, sp);
      p_tmp_data[i57] = (int8_T)((int8_T)emlrtDynamicBoundsCheckR2012b(i58, 1,
        b_loop_ub, &yc_emlrtBCI, sp) - 1);
    }

    iv54[0] = (int32_T)muDoubleScalarFloor(Xdim - 1.0) + 1;
    iv54[1] = (int32_T)muDoubleScalarFloor(Xdim - 1.0) + 1;
    emlrtSubAssignSizeCheckR2012b(iv54, 2, Xa_sizes, 2, &i_emlrtECI, sp);
    c_loop_ub = Xa_sizes[1];
    for (i57 = 0; i57 < c_loop_ub; i57++) {
      c_y_sizes = Xa_sizes[0];
      for (i58 = 0; i58 < c_y_sizes; i58++) {
        moduleInstance->b_BigX_data[o_tmp_data[i58] + loop_ub * p_tmp_data[i57]]
          = moduleInstance->b_Xa_data[i58 + Xa_sizes[0] * i57];
      }
    }

    b_sizes_idx_0++;
    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst, 0, 0, 1, 0);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 28);
  st.site = &nf_emlrtRSI;
  c_loop_ub = loop_ub * b_loop_ub;
  for (i57 = 0; i57 < c_loop_ub; i57++) {
    moduleInstance->c_a_data[i57] = moduleInstance->b_BigX_data[i57];
  }

  for (i57 = 0; i57 < Y_sizes; i57++) {
    h_b_data[i57] = Y_data[i57];
  }

  b_st.site = &he_emlrtRSI;
  if (!(b_loop_ub == Y_sizes)) {
    if (((loop_ub == 1) && (b_loop_ub == 1)) || (Y_sizes == 1)) {
      for (i57 = 0; i57 < 45; i57++) {
        h_u[i57] = cv19[i57];
      }

      j_y = NULL;
      m9 = emlrtCreateCharArray(2, iv56);
      emlrtInitCharArrayR2013a(&b_st, 45, m9, &h_u[0]);
      emlrtAssign(&j_y, m9);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, j_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i57 = 0; i57 < 21; i57++) {
        g_u[i57] = cv18[i57];
      }

      i_y = NULL;
      m9 = emlrtCreateCharArray(2, iv55);
      emlrtInitCharArrayR2013a(&b_st, 21, m9, &g_u[0]);
      emlrtAssign(&i_y, m9);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, i_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((b_loop_ub == 1) || (Y_sizes == 1)) {
    c_y_sizes = loop_ub;
    for (i57 = 0; i57 < loop_ub; i57++) {
      jb_y_data[i57] = 0.0;
      for (i58 = 0; i58 < b_loop_ub; i58++) {
        jb_y_data[i57] += moduleInstance->b_BigX_data[i57 + loop_ub * i58] *
          Y_data[i58];
      }
    }
  } else {
    b_sizes_idx_0 = (int8_T)loop_ub;
    c_y_sizes = (int8_T)loop_ub;
    for (i57 = 0; i57 < b_sizes_idx_0; i57++) {
      jb_y_data[i57] = 0.0;
    }

    b_st.site = &ge_emlrtRSI;
    if ((loop_ub < 1) || (b_loop_ub < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)loop_ub;
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)b_loop_ub;
      lda_t = (ptrdiff_t)loop_ub;
      ldb_t = (ptrdiff_t)b_loop_ub;
      ldc_t = (ptrdiff_t)loop_ub;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->c_a_data[0], &lda_t, &h_b_data[0], &ldb_t, &Xdim,
            &jb_y_data[0], &ldc_t);
    }
  }

  emlrtSizeEqCheck1DR2012b(c_y_sizes, b_sizes, &j_emlrtECI, sp);
  for (i57 = 0; i57 < c_y_sizes; i57++) {
    Z_data[i57] = jb_y_data[i57] - g_b_data[i57];
  }

  /*  Update State */
  st.site = &of_emlrtRSI;
  b_st.site = &he_emlrtRSI;
  if (!(6 == PI_sizes[0])) {
    for (i57 = 0; i57 < 21; i57++) {
      i_u[i57] = cv18[i57];
    }

    k_y = NULL;
    m9 = emlrtCreateCharArray(2, iv57);
    emlrtInitCharArrayR2013a(&b_st, 21, m9, &i_u[0]);
    emlrtAssign(&k_y, m9);
    c_st.site = &tk_emlrtRSI;
    g_error(&c_st, message(&c_st, k_y, &h_emlrtMCI), &h_emlrtMCI);
  }

  if (PI_sizes[0] == 1) {
    y_sizes_idx_0 = K_sizes[0];
    y_sizes_idx_1 = PI_sizes[1];
    loop_ub = K_sizes[0];
    for (i57 = 0; i57 < loop_ub; i57++) {
      b_loop_ub = PI_sizes[1];
      for (i58 = 0; i58 < b_loop_ub; i58++) {
        moduleInstance->m_y_data[i57 + y_sizes_idx_0 * i58] = 0.0;
        for (i59 = 0; i59 < 6; i59++) {
          moduleInstance->m_y_data[i57 + y_sizes_idx_0 * i58] += c_K_data[i57 +
            K_sizes[0] * i59] * c_PI_data[i59 + i58];
        }
      }
    }
  } else {
    y_sizes_idx_0 = (uint8_T)K_sizes[0];
    y_sizes_idx_1 = (uint8_T)PI_sizes[1];
    loop_ub = (uint8_T)PI_sizes[1];
    for (i57 = 0; i57 < loop_ub; i57++) {
      for (i58 = 0; i58 < y_sizes_idx_0; i58++) {
        moduleInstance->m_y_data[i58 + y_sizes_idx_0 * i57] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if (!(K_sizes[0] < 1)) {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)K_sizes[0];
      n_t = (ptrdiff_t)PI_sizes[1];
      k_t = (ptrdiff_t)6;
      lda_t = (ptrdiff_t)K_sizes[0];
      ldb_t = (ptrdiff_t)6;
      ldc_t = (ptrdiff_t)K_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &c_K_data[0], &lda_t,
            &c_PI_data[0], &ldb_t, &Xdim, &moduleInstance->m_y_data[0], &ldc_t);
    }
  }

  st.site = &of_emlrtRSI;
  loop_ub = y_sizes_idx_0 * y_sizes_idx_1;
  for (i57 = 0; i57 < loop_ub; i57++) {
    moduleInstance->c_a_data[i57] = moduleInstance->m_y_data[i57];
  }

  for (i57 = 0; i57 < c_y_sizes; i57++) {
    h_b_data[i57] = jb_y_data[i57] - g_b_data[i57];
  }

  b_st.site = &he_emlrtRSI;
  if (!(y_sizes_idx_1 == c_y_sizes)) {
    if (((y_sizes_idx_0 == 1) && (y_sizes_idx_1 == 1)) || (c_y_sizes == 1)) {
      for (i57 = 0; i57 < 45; i57++) {
        k_u[i57] = cv19[i57];
      }

      m_y = NULL;
      m9 = emlrtCreateCharArray(2, iv59);
      emlrtInitCharArrayR2013a(&b_st, 45, m9, &k_u[0]);
      emlrtAssign(&m_y, m9);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, m_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i57 = 0; i57 < 21; i57++) {
        j_u[i57] = cv18[i57];
      }

      l_y = NULL;
      m9 = emlrtCreateCharArray(2, iv58);
      emlrtInitCharArrayR2013a(&b_st, 21, m9, &j_u[0]);
      emlrtAssign(&l_y, m9);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, l_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((y_sizes_idx_1 == 1) || (c_y_sizes == 1)) {
    c_y_sizes = y_sizes_idx_0;
    for (i57 = 0; i57 < y_sizes_idx_0; i57++) {
      delta_data[i57] = 0.0;
      for (i58 = 0; i58 < y_sizes_idx_1; i58++) {
        delta_data[i57] += moduleInstance->m_y_data[i57 + y_sizes_idx_0 * i58] *
          Z_data[i58];
      }
    }
  } else {
    b_sizes_idx_0 = (int8_T)y_sizes_idx_0;
    c_y_sizes = (int8_T)y_sizes_idx_0;
    for (i57 = 0; i57 < b_sizes_idx_0; i57++) {
      delta_data[i57] = 0.0;
    }

    b_st.site = &ge_emlrtRSI;
    if ((y_sizes_idx_0 < 1) || (y_sizes_idx_1 < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)y_sizes_idx_0;
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)y_sizes_idx_1;
      lda_t = (ptrdiff_t)y_sizes_idx_0;
      ldb_t = (ptrdiff_t)y_sizes_idx_1;
      ldc_t = (ptrdiff_t)y_sizes_idx_0;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->c_a_data[0], &lda_t, &h_b_data[0], &ldb_t, &Xdim,
            &delta_data[0], &ldc_t);
    }
  }

  emlrtDimSizeGeqCheckR2012b(81, c_y_sizes, &k_emlrtECI, sp);
  if (1 > c_y_sizes - 6) {
    loop_ub = 0;
  } else {
    emlrtDynamicBoundsCheckR2012b(1, 1, c_y_sizes, &qc_emlrtBCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(c_y_sizes - 6, 1, c_y_sizes,
      &qc_emlrtBCI, sp);
  }

  iv60[0] = 1;
  iv60[1] = loop_ub;
  st.site = &pf_emlrtRSI;
  indexShapeCheck(&st, c_y_sizes, iv60);
  for (i57 = 0; i57 < loop_ub; i57++) {
    b_delta_data[i57] = delta_data[i57];
  }

  st.site = &pf_emlrtRSI;
  RIEKF_exp(moduleInstance, &st, b_delta_data, loop_ub, dX_data, dX_sizes);
  st.site = &qf_emlrtRSI;
  b_indexShapeCheck(&st, c_y_sizes);
  for (i57 = 0; i57 < 6; i57++) {
    dtheta[i57] = delta_data[emlrtDynamicBoundsCheckR2012b((i57 + c_y_sizes) - 5,
      1, c_y_sizes, &tc_emlrtBCI, sp) - 1];
  }

  st.site = &rf_emlrtRSI;
  loop_ub = dX_sizes[0] * dX_sizes[1];
  for (i57 = 0; i57 < loop_ub; i57++) {
    moduleInstance->c_a_data[i57] = dX_data[i57];
  }

  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i57 = 0; i57 < loop_ub; i57++) {
    moduleInstance->c_b_data[i57] = moduleInstance->b_Xa_data[i57];
  }

  b_st.site = &he_emlrtRSI;
  if (!(dX_sizes[1] == tmp_sizes[0])) {
    if (((dX_sizes[0] == 1) && (dX_sizes[1] == 1)) || ((tmp_sizes[0] == 1) &&
         (tmp_sizes[1] == 1))) {
      for (i57 = 0; i57 < 45; i57++) {
        m_u[i57] = cv19[i57];
      }

      o_y = NULL;
      m9 = emlrtCreateCharArray(2, iv62);
      emlrtInitCharArrayR2013a(&b_st, 45, m9, &m_u[0]);
      emlrtAssign(&o_y, m9);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, o_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i57 = 0; i57 < 21; i57++) {
        l_u[i57] = cv18[i57];
      }

      n_y = NULL;
      m9 = emlrtCreateCharArray(2, iv61);
      emlrtInitCharArrayR2013a(&b_st, 21, m9, &l_u[0]);
      emlrtAssign(&n_y, m9);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, n_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((dX_sizes[1] == 1) || (tmp_sizes[0] == 1)) {
    y_sizes_idx_0 = dX_sizes[0];
    y_sizes_idx_1 = tmp_sizes[1];
    loop_ub = dX_sizes[0];
    for (i57 = 0; i57 < loop_ub; i57++) {
      b_loop_ub = Xa_sizes[1];
      for (i58 = 0; i58 < b_loop_ub; i58++) {
        moduleInstance->j_y_data[i57 + y_sizes_idx_0 * i58] = 0.0;
        c_loop_ub = dX_sizes[1];
        for (i59 = 0; i59 < c_loop_ub; i59++) {
          moduleInstance->j_y_data[i57 + y_sizes_idx_0 * i58] += dX_data[i57 +
            dX_sizes[0] * i59] * moduleInstance->b_Xa_data[i59 + Xa_sizes[0] *
            i58];
        }
      }
    }
  } else {
    y_sizes_idx_0 = (uint8_T)dX_sizes[0];
    y_sizes_idx_1 = (uint8_T)tmp_sizes[1];
    loop_ub = (uint8_T)tmp_sizes[1];
    for (i57 = 0; i57 < loop_ub; i57++) {
      for (i58 = 0; i58 < y_sizes_idx_0; i58++) {
        moduleInstance->j_y_data[i58 + y_sizes_idx_0 * i57] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((dX_sizes[0] < 1) || (tmp_sizes[1] < 1) || (dX_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)dX_sizes[0];
      n_t = (ptrdiff_t)tmp_sizes[1];
      k_t = (ptrdiff_t)dX_sizes[1];
      lda_t = (ptrdiff_t)dX_sizes[0];
      ldb_t = (ptrdiff_t)dX_sizes[1];
      ldc_t = (ptrdiff_t)dX_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->c_a_data[0], &lda_t, &moduleInstance->c_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->j_y_data[0], &ldc_t);
    }
  }

  for (i57 = 0; i57 < 7; i57++) {
    for (i58 = 0; i58 < 7; i58++) {
      obj->X[i58 + 7 * i57] = moduleInstance->j_y_data
        [(emlrtDynamicBoundsCheckR2012b(1 + i58, 1, y_sizes_idx_0, &uc_emlrtBCI,
           sp) + y_sizes_idx_0 * (emlrtDynamicBoundsCheckR2012b(1 + i57, 1,
            y_sizes_idx_1, &vc_emlrtBCI, sp) - 1)) - 1];
    }
  }

  alpha1 = (8.0 + obj->num_landmarks) - 1.0;
  if (8.0 > alpha1) {
    i57 = 0;
    i58 = 0;
  } else {
    emlrtDynamicBoundsCheckR2012b(8, 1, y_sizes_idx_1, &rc_emlrtBCI, sp);
    i57 = 7;
    i58 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &rb_emlrtDCI, sp);
    i58 = emlrtDynamicBoundsCheckR2012b(i58, 1, y_sizes_idx_1, &rc_emlrtBCI, sp);
  }

  alpha1 = obj->num_landmarks;
  if (1.0 > alpha1) {
    i59 = 0;
  } else {
    i59 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &sb_emlrtDCI, sp);
    i59 = emlrtDynamicBoundsCheckR2012b(i59, 1, 20, &sc_emlrtBCI, sp);
  }

  loop_ub = (int8_T)((int8_T)i59 - 1);
  for (b_sizes_idx_0 = 0; b_sizes_idx_0 <= loop_ub; b_sizes_idx_0++) {
    q_tmp_data[b_sizes_idx_0] = (int8_T)b_sizes_idx_0;
  }

  for (b_sizes_idx_0 = 0; b_sizes_idx_0 < 3; b_sizes_idx_0++) {
    emlrtDynamicBoundsCheckR2012b(b_sizes_idx_0 + 1, 1, y_sizes_idx_0,
      &wc_emlrtBCI, sp);
  }

  iv63[0] = 3;
  iv63[1] = (int8_T)((int8_T)i59 - 1) + 1;
  d_y_sizes[0] = 3;
  d_y_sizes[1] = i58 - i57;
  for (i59 = 0; i59 < 2; i59++) {
    e_y[i59] = d_y_sizes[i59];
  }

  emlrtSubAssignSizeCheckR2012b(iv63, 2, e_y, 2, &l_emlrtECI, sp);
  loop_ub = i58 - i57;
  for (i58 = 0; i58 < loop_ub; i58++) {
    for (i59 = 0; i59 < 3; i59++) {
      obj->landmarks[i59 + 3 * q_tmp_data[i58]] = moduleInstance->j_y_data[i59 +
        y_sizes_idx_0 * (i57 + i58)];
    }
  }

  for (i57 = 0; i57 < 6; i57++) {
    obj->theta[i57] += dtheta[i57];
  }

  /*  Update Covariance */
  for (i57 = 0; i57 < 2; i57++) {
    Pa[i57] = (real_T)Pa_sizes[i57];
  }

  st.site = &sf_emlrtRSI;
  b_eye(&st, Pa, moduleInstance->d_tmp_data, tmp_sizes);
  I_sizes[0] = tmp_sizes[0];
  I_sizes[1] = tmp_sizes[1];
  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i57 = 0; i57 < loop_ub; i57++) {
    moduleInstance->b_I_data[i57] = moduleInstance->d_tmp_data[i57];
  }

  st.site = &tf_emlrtRSI;
  loop_ub = H_sizes[0] * H_sizes[1];
  for (i57 = 0; i57 < loop_ub; i57++) {
    i_b_data[i57] = H_data[i57];
  }

  b_st.site = &he_emlrtRSI;
  if (!(6 == H_sizes[0])) {
    for (i57 = 0; i57 < 21; i57++) {
      n_u[i57] = cv18[i57];
    }

    p_y = NULL;
    m9 = emlrtCreateCharArray(2, iv64);
    emlrtInitCharArrayR2013a(&b_st, 21, m9, &n_u[0]);
    emlrtAssign(&p_y, m9);
    c_st.site = &tk_emlrtRSI;
    g_error(&c_st, message(&c_st, p_y, &h_emlrtMCI), &h_emlrtMCI);
  }

  if (H_sizes[0] == 1) {
    C_sizes[0] = K_sizes[0];
    C_sizes[1] = H_sizes[1];
    loop_ub = K_sizes[0];
    for (i57 = 0; i57 < loop_ub; i57++) {
      b_loop_ub = H_sizes[1];
      for (i58 = 0; i58 < b_loop_ub; i58++) {
        moduleInstance->i_C_data[i57 + C_sizes[0] * i58] = 0.0;
        for (i59 = 0; i59 < 6; i59++) {
          moduleInstance->i_C_data[i57 + C_sizes[0] * i58] += c_K_data[i57 +
            K_sizes[0] * i59] * H_data[i59 + i58];
        }
      }
    }
  } else {
    C_sizes[0] = (uint8_T)K_sizes[0];
    C_sizes[1] = (uint8_T)H_sizes[1];
    loop_ub = (uint8_T)H_sizes[1];
    for (i57 = 0; i57 < loop_ub; i57++) {
      b_loop_ub = C_sizes[0];
      for (i58 = 0; i58 < b_loop_ub; i58++) {
        moduleInstance->i_C_data[i58 + C_sizes[0] * i57] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if (!(K_sizes[0] < 1)) {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)K_sizes[0];
      n_t = (ptrdiff_t)H_sizes[1];
      k_t = (ptrdiff_t)6;
      lda_t = (ptrdiff_t)K_sizes[0];
      ldb_t = (ptrdiff_t)6;
      ldc_t = (ptrdiff_t)K_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &c_K_data[0], &lda_t,
            &i_b_data[0], &ldb_t, &Xdim, &moduleInstance->i_C_data[0], &ldc_t);
    }
  }

  for (i57 = 0; i57 < 2; i57++) {
    dX_sizes[i57] = I_sizes[i57];
    y_sizes[i57] = C_sizes[i57];
  }

  emlrtSizeEqCheckNDR2012b(dX_sizes, y_sizes, &m_emlrtECI, sp);
  st.site = &tf_emlrtRSI;
  loop_ub = H_sizes[0] * H_sizes[1];
  for (i57 = 0; i57 < loop_ub; i57++) {
    i_b_data[i57] = H_data[i57];
  }

  b_st.site = &he_emlrtRSI;
  if (!(6 == H_sizes[0])) {
    for (i57 = 0; i57 < 21; i57++) {
      o_u[i57] = cv18[i57];
    }

    q_y = NULL;
    m9 = emlrtCreateCharArray(2, iv65);
    emlrtInitCharArrayR2013a(&b_st, 21, m9, &o_u[0]);
    emlrtAssign(&q_y, m9);
    c_st.site = &tk_emlrtRSI;
    g_error(&c_st, message(&c_st, q_y, &h_emlrtMCI), &h_emlrtMCI);
  }

  if (H_sizes[0] == 1) {
    b_C_sizes[0] = K_sizes[0];
    b_C_sizes[1] = H_sizes[1];
    loop_ub = K_sizes[0];
    for (i57 = 0; i57 < loop_ub; i57++) {
      b_loop_ub = H_sizes[1];
      for (i58 = 0; i58 < b_loop_ub; i58++) {
        moduleInstance->j_C_data[i57 + b_C_sizes[0] * i58] = 0.0;
        for (i59 = 0; i59 < 6; i59++) {
          moduleInstance->j_C_data[i57 + b_C_sizes[0] * i58] += c_K_data[i57 +
            K_sizes[0] * i59] * H_data[i59 + i58];
        }
      }
    }
  } else {
    b_C_sizes[0] = (uint8_T)K_sizes[0];
    b_C_sizes[1] = (uint8_T)H_sizes[1];
    loop_ub = (uint8_T)H_sizes[1];
    for (i57 = 0; i57 < loop_ub; i57++) {
      b_loop_ub = b_C_sizes[0];
      for (i58 = 0; i58 < b_loop_ub; i58++) {
        moduleInstance->j_C_data[i58 + b_C_sizes[0] * i57] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if (!(K_sizes[0] < 1)) {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)K_sizes[0];
      n_t = (ptrdiff_t)H_sizes[1];
      k_t = (ptrdiff_t)6;
      lda_t = (ptrdiff_t)K_sizes[0];
      ldb_t = (ptrdiff_t)6;
      ldc_t = (ptrdiff_t)K_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &c_K_data[0], &lda_t,
            &i_b_data[0], &ldb_t, &Xdim, &moduleInstance->j_C_data[0], &ldc_t);
    }
  }

  for (i57 = 0; i57 < 2; i57++) {
    dX_sizes[i57] = I_sizes[i57];
    y_sizes[i57] = b_C_sizes[i57];
  }

  emlrtSizeEqCheckNDR2012b(dX_sizes, y_sizes, &n_emlrtECI, sp);
  st.site = &tf_emlrtRSI;
  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i57 = 0; i57 < loop_ub; i57++) {
    moduleInstance->c_a_data[i57] = moduleInstance->b_I_data[i57] -
      moduleInstance->i_C_data[i57];
  }

  loop_ub = Pa_sizes[0] * Pa_sizes[1];
  for (i57 = 0; i57 < loop_ub; i57++) {
    moduleInstance->c_b_data[i57] = moduleInstance->d_Pa_data[i57];
  }

  b_st.site = &he_emlrtRSI;
  if (!(tmp_sizes[1] == Pa_sizes[0])) {
    if (((tmp_sizes[0] == 1) && (tmp_sizes[1] == 1)) || ((Pa_sizes[0] == 1) &&
         (Pa_sizes[1] == 1))) {
      for (i57 = 0; i57 < 45; i57++) {
        q_u[i57] = cv19[i57];
      }

      s_y = NULL;
      m9 = emlrtCreateCharArray(2, iv67);
      emlrtInitCharArrayR2013a(&b_st, 45, m9, &q_u[0]);
      emlrtAssign(&s_y, m9);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, s_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i57 = 0; i57 < 21; i57++) {
        p_u[i57] = cv18[i57];
      }

      r_y = NULL;
      m9 = emlrtCreateCharArray(2, iv66);
      emlrtInitCharArrayR2013a(&b_st, 21, m9, &p_u[0]);
      emlrtAssign(&r_y, m9);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, r_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((tmp_sizes[1] == 1) || (Pa_sizes[0] == 1)) {
    y_sizes_idx_0 = tmp_sizes[0];
    y_sizes_idx_1 = Pa_sizes[1];
    loop_ub = tmp_sizes[0];
    for (i57 = 0; i57 < loop_ub; i57++) {
      b_loop_ub = Pa_sizes[1];
      for (i58 = 0; i58 < b_loop_ub; i58++) {
        moduleInstance->k_y_data[i57 + y_sizes_idx_0 * i58] = 0.0;
        c_loop_ub = tmp_sizes[1];
        for (i59 = 0; i59 < c_loop_ub; i59++) {
          moduleInstance->k_y_data[i57 + y_sizes_idx_0 * i58] +=
            moduleInstance->c_a_data[i57 + tmp_sizes[0] * i59] *
            moduleInstance->d_Pa_data[i59 + Pa_sizes[0] * i58];
        }
      }
    }
  } else {
    y_sizes_idx_0 = (uint8_T)tmp_sizes[0];
    y_sizes_idx_1 = (uint8_T)Pa_sizes[1];
    loop_ub = (uint8_T)Pa_sizes[1];
    for (i57 = 0; i57 < loop_ub; i57++) {
      for (i58 = 0; i58 < y_sizes_idx_0; i58++) {
        moduleInstance->k_y_data[i58 + y_sizes_idx_0 * i57] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((tmp_sizes[0] < 1) || (Pa_sizes[1] < 1) || (tmp_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)tmp_sizes[0];
      n_t = (ptrdiff_t)Pa_sizes[1];
      k_t = (ptrdiff_t)tmp_sizes[1];
      lda_t = (ptrdiff_t)tmp_sizes[0];
      ldb_t = (ptrdiff_t)tmp_sizes[1];
      ldc_t = (ptrdiff_t)tmp_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->c_a_data[0], &lda_t, &moduleInstance->c_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->k_y_data[0], &ldc_t);
    }
  }

  st.site = &tf_emlrtRSI;
  b_sizes_idx_0 = tmp_sizes[1];
  loop_ub = tmp_sizes[0];
  for (i57 = 0; i57 < loop_ub; i57++) {
    b_loop_ub = I_sizes[1];
    for (i58 = 0; i58 < b_loop_ub; i58++) {
      moduleInstance->c_b_data[i58 + b_sizes_idx_0 * i57] =
        moduleInstance->b_I_data[i57 + I_sizes[0] * i58] -
        moduleInstance->j_C_data[i57 + b_C_sizes[0] * i58];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(y_sizes_idx_1 == tmp_sizes[1])) {
    if (((y_sizes_idx_0 == 1) && (y_sizes_idx_1 == 1)) || ((tmp_sizes[1] == 1) &&
         (tmp_sizes[0] == 1))) {
      for (i57 = 0; i57 < 45; i57++) {
        s_u[i57] = cv19[i57];
      }

      u_y = NULL;
      m9 = emlrtCreateCharArray(2, iv69);
      emlrtInitCharArrayR2013a(&b_st, 45, m9, &s_u[0]);
      emlrtAssign(&u_y, m9);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, u_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i57 = 0; i57 < 21; i57++) {
        r_u[i57] = cv18[i57];
      }

      t_y = NULL;
      m9 = emlrtCreateCharArray(2, iv68);
      emlrtInitCharArrayR2013a(&b_st, 21, m9, &r_u[0]);
      emlrtAssign(&t_y, m9);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, t_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((y_sizes_idx_1 == 1) || (tmp_sizes[1] == 1)) {
    e_y_sizes[0] = y_sizes_idx_0;
    e_y_sizes[1] = tmp_sizes[0];
    for (i57 = 0; i57 < y_sizes_idx_0; i57++) {
      loop_ub = tmp_sizes[0];
      for (i58 = 0; i58 < loop_ub; i58++) {
        moduleInstance->l_y_data[i57 + y_sizes_idx_0 * i58] = 0.0;
        for (i59 = 0; i59 < y_sizes_idx_1; i59++) {
          moduleInstance->l_y_data[i57 + y_sizes_idx_0 * i58] +=
            moduleInstance->k_y_data[i57 + y_sizes_idx_0 * i59] *
            moduleInstance->c_b_data[i59 + b_sizes_idx_0 * i58];
        }
      }
    }
  } else {
    e_y_sizes[0] = (uint8_T)y_sizes_idx_0;
    e_y_sizes[1] = (uint8_T)tmp_sizes[0];
    loop_ub = (uint8_T)tmp_sizes[0];
    for (i57 = 0; i57 < loop_ub; i57++) {
      b_loop_ub = (uint8_T)y_sizes_idx_0;
      for (i58 = 0; i58 < b_loop_ub; i58++) {
        moduleInstance->l_y_data[i58 + (uint8_T)y_sizes_idx_0 * i57] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((y_sizes_idx_0 < 1) || (tmp_sizes[0] < 1) || (y_sizes_idx_1 < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)y_sizes_idx_0;
      n_t = (ptrdiff_t)tmp_sizes[0];
      k_t = (ptrdiff_t)y_sizes_idx_1;
      lda_t = (ptrdiff_t)y_sizes_idx_0;
      ldb_t = (ptrdiff_t)y_sizes_idx_1;
      ldc_t = (ptrdiff_t)y_sizes_idx_0;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->k_y_data[0], &lda_t, &moduleInstance->c_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->l_y_data[0], &ldc_t);
    }
  }

  st.site = &tf_emlrtRSI;
  b_sizes_idx_0 = (int8_T)K_sizes[0];
  for (i57 = 0; i57 < 6; i57++) {
    for (i58 = 0; i58 < b_sizes_idx_0; i58++) {
      n_C_data[i58 + b_sizes_idx_0 * i57] = 0.0;
    }
  }

  b_st.site = &ge_emlrtRSI;
  if (!(K_sizes[0] < 1)) {
    c_st.site = &je_emlrtRSI;
    alpha1 = 1.0;
    Xdim = 0.0;
    TRANSB = 'N';
    TRANSA = 'N';
    m_t = (ptrdiff_t)K_sizes[0];
    n_t = (ptrdiff_t)6;
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)K_sizes[0];
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)K_sizes[0];
    dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &c_K_data[0], &lda_t, &N
          [0], &ldb_t, &Xdim, &n_C_data[0], &ldc_t);
  }

  st.site = &tf_emlrtRSI;
  loop_ub = K_sizes[0];
  for (i57 = 0; i57 < loop_ub; i57++) {
    for (i58 = 0; i58 < 6; i58++) {
      j_b_data[i58 + 6 * i57] = c_K_data[i57 + K_sizes[0] * i58];
    }
  }

  c_C_sizes[0] = (uint8_T)K_sizes[0];
  c_C_sizes[1] = (uint8_T)K_sizes[0];
  loop_ub = (uint8_T)K_sizes[0];
  for (i57 = 0; i57 < loop_ub; i57++) {
    b_loop_ub = c_C_sizes[0];
    for (i58 = 0; i58 < b_loop_ub; i58++) {
      moduleInstance->k_C_data[i58 + c_C_sizes[0] * i57] = 0.0;
    }
  }

  b_st.site = &ge_emlrtRSI;
  if (((int8_T)K_sizes[0] < 1) || (K_sizes[0] < 1)) {
  } else {
    c_st.site = &je_emlrtRSI;
    alpha1 = 1.0;
    Xdim = 0.0;
    TRANSB = 'N';
    TRANSA = 'N';
    m_t = (ptrdiff_t)(int8_T)K_sizes[0];
    n_t = (ptrdiff_t)K_sizes[0];
    k_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)(int8_T)K_sizes[0];
    ldb_t = (ptrdiff_t)6;
    ldc_t = (ptrdiff_t)(int8_T)K_sizes[0];
    dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &n_C_data[0], &lda_t,
          &j_b_data[0], &ldb_t, &Xdim, &moduleInstance->k_C_data[0], &ldc_t);
  }

  for (i57 = 0; i57 < 2; i57++) {
    e_y[i57] = e_y_sizes[i57];
    y_sizes[i57] = c_C_sizes[i57];
  }

  emlrtSizeEqCheckNDR2012b(e_y, y_sizes, &o_emlrtECI, sp);
  f_y_sizes[0] = e_y_sizes[0];
  f_y_sizes[1] = e_y_sizes[1];
  loop_ub = e_y_sizes[0] * e_y_sizes[1];
  for (i57 = 0; i57 < loop_ub; i57++) {
    moduleInstance->d_tmp_data[i57] = moduleInstance->l_y_data[i57] +
      moduleInstance->k_C_data[i57];
  }

  st.site = &tf_emlrtRSI;
  c_RIEKF_Store_Covariance(moduleInstance, &st, obj, moduleInstance->d_tmp_data,
    f_y_sizes);

  /*  Joseph update form */
}

static void mrdivide(const emlrtStack *sp, real_T b_A_data[], int32_T A_sizes[2],
                     real_T B[36], real_T jb_y_data[], int32_T y_sizes[2])
{
  emlrtStack st;
  int32_T i60;
  const mxArray *y;
  char_T u[21];
  static char_T cv21[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'd', 'i', 'm', 'a', 'g', 'r', 'e', 'e' };

  const mxArray *m10;
  static const int32_T iv70[2] = { 1, 21 };

  st.prev = sp;
  st.tls = sp->tls;
  if (6 != A_sizes[1]) {
    for (i60 = 0; i60 < 21; i60++) {
      u[i60] = cv21[i60];
    }

    y = NULL;
    m10 = emlrtCreateCharArray(2, iv70);
    emlrtInitCharArrayR2013a(sp, 21, m10, &u[0]);
    emlrtAssign(&y, m10);
    st.site = &uf_emlrtRSI;
    g_error(&st, message(&st, y, &k_emlrtMCI), &k_emlrtMCI);
  }

  if (A_sizes[0] == 0) {
    y_sizes[0] = 0;
    y_sizes[1] = 6;
  } else {
    st.site = &uf_emlrtRSI;
    lusolve(&st, B, b_A_data, A_sizes, jb_y_data, y_sizes);
  }
}

static void lusolve(const emlrtStack *sp, real_T A[36], real_T b_B_data[],
                    int32_T B_sizes[2], real_T X_data[], int32_T X_sizes[2])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  real_T b_A[36];
  int32_T iy;
  int8_T ipiv[6];
  int32_T info;
  int32_T j;
  int32_T c;
  int32_T ix;
  real_T temp;
  int32_T jp;
  real_T s;
  int32_T b;
  char_T DIAGA;
  char_T TRANSA;
  char_T UPLO;
  char_T SIDE;
  ptrdiff_t m_t;
  int32_T jy;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  int32_T ijA;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &vf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  b_st.site = &xf_emlrtRSI;
  c_st.site = &cg_emlrtRSI;
  for (iy = 0; iy < 36; iy++) {
    b_A[iy] = A[iy];
  }

  for (iy = 0; iy < 6; iy++) {
    ipiv[iy] = (int8_T)(1 + iy);
  }

  info = 0;
  for (j = 0; j < 5; j++) {
    c = j * 7;
    d_st.site = &dg_emlrtRSI;
    e_st.site = &gg_emlrtRSI;
    iy = 1;
    ix = c;
    temp = muDoubleScalarAbs(b_A[c]);
    f_st.site = &hg_emlrtRSI;
    for (jp = 2; jp <= 6 - j; jp++) {
      ix++;
      s = muDoubleScalarAbs(b_A[ix]);
      if (s > temp) {
        iy = jp;
        temp = s;
      }
    }

    if (b_A[(c + iy) - 1] != 0.0) {
      if (iy - 1 != 0) {
        ipiv[j] = (int8_T)(j + iy);
        ix = j;
        iy = (j + iy) - 1;
        for (jp = 0; jp < 6; jp++) {
          temp = b_A[ix];
          b_A[ix] = b_A[iy];
          b_A[iy] = temp;
          ix += 6;
          iy += 6;
        }
      }

      b = c - j;
      d_st.site = &eg_emlrtRSI;
      for (iy = c + 1; iy + 1 <= b + 6; iy++) {
        b_A[iy] /= b_A[c];
      }
    } else {
      info = j + 1;
    }

    d_st.site = &fg_emlrtRSI;
    e_st.site = &ig_emlrtRSI;
    f_st.site = &jg_emlrtRSI;
    g_st.site = &kg_emlrtRSI;
    jp = c + 8;
    jy = c + 6;
    h_st.site = &mg_emlrtRSI;
    for (iy = 1; iy <= 5 - j; iy++) {
      temp = b_A[jy];
      if (b_A[jy] != 0.0) {
        ix = c;
        b = (jp - j) + 4;
        h_st.site = &lg_emlrtRSI;
        if ((!(jp > b)) && (b > 2147483646)) {
          i_st.site = &be_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }

        for (ijA = jp - 1; ijA + 1 <= b; ijA++) {
          b_A[ijA] += b_A[ix + 1] * -temp;
          ix++;
        }
      }

      jy += 6;
      jp += 6;
    }
  }

  if ((info == 0) && (!(b_A[35] != 0.0))) {
    info = 6;
  }

  if (info > 0) {
    b_st.site = &wf_emlrtRSI;
    c_st.site = &ng_emlrtRSI;
    warning(&c_st);
  }

  b_st.site = &yf_emlrtRSI;
  X_sizes[0] = B_sizes[0];
  X_sizes[1] = 6;
  jp = B_sizes[0] * 6;
  for (iy = 0; iy < jp; iy++) {
    X_data[iy] = b_B_data[iy];
  }

  if (!(B_sizes[0] < 1)) {
    c_st.site = &pg_emlrtRSI;
    temp = 1.0;
    DIAGA = 'N';
    TRANSA = 'N';
    UPLO = 'U';
    SIDE = 'R';
    m_t = (ptrdiff_t)B_sizes[0];
    n_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)6;
    ldb_t = (ptrdiff_t)B_sizes[0];
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, &temp, &b_A[0], &lda_t,
          &X_data[0], &ldb_t);
  }

  b_st.site = &ag_emlrtRSI;
  if (!(B_sizes[0] < 1)) {
    c_st.site = &pg_emlrtRSI;
    temp = 1.0;
    DIAGA = 'U';
    TRANSA = 'N';
    UPLO = 'L';
    SIDE = 'R';
    m_t = (ptrdiff_t)B_sizes[0];
    n_t = (ptrdiff_t)6;
    lda_t = (ptrdiff_t)6;
    ldb_t = (ptrdiff_t)B_sizes[0];
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, &temp, &b_A[0], &lda_t,
          &X_data[0], &ldb_t);
  }

  for (iy = 4; iy > -1; iy += -1) {
    if (ipiv[iy] != iy + 1) {
      jp = ipiv[iy] - 1;
      b_st.site = &bg_emlrtRSI;
      for (jy = 0; jy + 1 <= B_sizes[0]; jy++) {
        temp = X_data[jy + X_sizes[0] * iy];
        X_data[jy + X_sizes[0] * iy] = X_data[jy + X_sizes[0] * jp];
        X_data[jy + X_sizes[0] * jp] = temp;
      }
    }
  }
}

static void warn_singular(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ng_emlrtRSI;
  warning(&st);
}

static void warning(const emlrtStack *sp)
{
  emlrtStack st;
  int32_T i61;
  char_T msgID[27];
  static char_T cv22[27] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't', 'r',
    'i', 'x' };

  const mxArray *y;
  char_T u[7];
  static char_T cv23[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m11;
  static const int32_T iv71[2] = { 1, 7 };

  const mxArray *b_y;
  char_T b_u[7];
  static char_T cv24[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  static const int32_T iv72[2] = { 1, 7 };

  const mxArray *c_y;
  static const int32_T iv73[2] = { 1, 27 };

  st.prev = sp;
  st.tls = sp->tls;
  for (i61 = 0; i61 < 27; i61++) {
    msgID[i61] = cv22[i61];
  }

  for (i61 = 0; i61 < 7; i61++) {
    u[i61] = cv23[i61];
  }

  y = NULL;
  m11 = emlrtCreateCharArray(2, iv71);
  emlrtInitCharArrayR2013a(sp, 7, m11, &u[0]);
  emlrtAssign(&y, m11);
  for (i61 = 0; i61 < 7; i61++) {
    b_u[i61] = cv24[i61];
  }

  b_y = NULL;
  m11 = emlrtCreateCharArray(2, iv72);
  emlrtInitCharArrayR2013a(sp, 7, m11, &b_u[0]);
  emlrtAssign(&b_y, m11);
  c_y = NULL;
  m11 = emlrtCreateCharArray(2, iv73);
  emlrtInitCharArrayR2013a(sp, 27, m11, &msgID[0]);
  emlrtAssign(&c_y, m11);
  st.site = &il_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &l_emlrtMCI), &m_emlrtMCI);
}

static void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, int32_T
  indexSize[2])
{
  emlrtStack st;
  emlrtStack b_st;
  boolean_T guard1 = false;
  boolean_T nonSingletonDimFound;
  int32_T i62;
  const mxArray *y;
  char_T u[30];
  static char_T cv25[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
    'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'V', 'e', 'c', 't', 'o', 'r', 'V',
    'e', 'c', 't', 'o', 'r' };

  const mxArray *m12;
  static const int32_T iv74[2] = { 1, 30 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  guard1 = false;
  if (!(matrixSize != 1)) {
    nonSingletonDimFound = false;
    if (indexSize[1] != 1) {
      nonSingletonDimFound = true;
    }

    if (nonSingletonDimFound) {
      nonSingletonDimFound = true;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    nonSingletonDimFound = false;
  }

  st.site = &ug_emlrtRSI;
  if (nonSingletonDimFound) {
    for (i62 = 0; i62 < 30; i62++) {
      u[i62] = cv25[i62];
    }

    y = NULL;
    m12 = emlrtCreateCharArray(2, iv74);
    emlrtInitCharArrayR2013a(&st, 30, m12, &u[0]);
    emlrtAssign(&y, m12);
    b_st.site = &cl_emlrtRSI;
    g_error(&b_st, message(&b_st, y, &n_emlrtMCI), &n_emlrtMCI);
  }
}

static void RIEKF_exp(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance,
                      const emlrtStack *sp, real_T v_data[], int32_T v_sizes,
                      real_T dX_data[], int32_T dX_sizes[2])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  int32_T i63;
  const mxArray *y;
  char_T u[30];
  static char_T cv26[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
    'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'V', 'e', 'c', 't', 'o', 'r', 'V',
    'e', 'c', 't', 'o', 'r' };

  const mxArray *m13;
  static const int32_T iv75[2] = { 1, 30 };

  real_T A[9];
  real_T v[3];
  const mxArray *b_y;
  char_T b_u[30];
  static const int32_T iv76[2] = { 1, 30 };

  real_T phi;
  real_T c_y;
  real_T R[9];
  real_T Jr[9];
  real_T d_y;
  real_T I[9];
  int32_T i64;
  boolean_T guard1 = false;
  boolean_T nonSingletonDimFound;
  int32_T i65;
  int32_T maxdimlen;
  int32_T unnamed_idx_0;
  int32_T nx;
  const mxArray *e_y;
  char_T c_u[30];
  static const int32_T iv77[2] = { 1, 30 };

  int32_T calclen;
  const mxArray *f_y;
  char_T d_u[30];
  static char_T cv27[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  static const int32_T iv78[2] = { 1, 30 };

  real_T u_data[75];
  real_T beta1;
  const mxArray *g_y;
  char_T e_u[40];
  static char_T cv28[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D', 'i',
    'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e', 'l' };

  static const int32_T iv79[2] = { 1, 40 };

  real_T o_tmp_data[5625];
  int32_T tmp_sizes[2];
  int8_T p_tmp_data[28];
  int32_T C_sizes[2];
  int32_T iv80[2];
  real_T n_C_data[75];
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  const mxArray *h_y;
  char_T f_u[30];
  static const int32_T iv81[2] = { 1, 30 };

  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  covrtLogFcn(moduleInstance->covInst, 0, 8);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 14);

  /*  Exponential map of SE_N(3) */
  st.site = &vg_emlrtRSI;
  b_st.site = &ug_emlrtRSI;
  if (!(v_sizes != 1)) {
    for (i63 = 0; i63 < 30; i63++) {
      u[i63] = cv26[i63];
    }

    y = NULL;
    m13 = emlrtCreateCharArray(2, iv75);
    emlrtInitCharArrayR2013a(&b_st, 30, m13, &u[0]);
    emlrtAssign(&y, m13);
    c_st.site = &cl_emlrtRSI;
    g_error(&c_st, message(&c_st, y, &n_emlrtMCI), &n_emlrtMCI);
  }

  st.site = &vg_emlrtRSI;
  for (i63 = 0; i63 < 3; i63++) {
    emlrtDynamicBoundsCheckR2012b(i63 + 1, 1, v_sizes, &cd_emlrtBCI, &st);
  }

  covrtLogFcn(moduleInstance->covInst, 0, 7);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 13);

  /*  Convert from vector to skew symmetric matrix */
  A[0] = 0.0;
  A[3] = -v_data[2];
  A[6] = v_data[1];
  A[1] = v_data[2];
  A[4] = 0.0;
  A[7] = -v_data[0];
  A[2] = -v_data[1];
  A[5] = v_data[0];
  A[8] = 0.0;
  st.site = &wg_emlrtRSI;
  b_st.site = &ug_emlrtRSI;
  if (!(v_sizes != 1)) {
    for (i63 = 0; i63 < 30; i63++) {
      b_u[i63] = cv26[i63];
    }

    b_y = NULL;
    m13 = emlrtCreateCharArray(2, iv76);
    emlrtInitCharArrayR2013a(&b_st, 30, m13, &b_u[0]);
    emlrtAssign(&b_y, m13);
    c_st.site = &cl_emlrtRSI;
    g_error(&c_st, message(&c_st, b_y, &n_emlrtMCI), &n_emlrtMCI);
  }

  for (i63 = 0; i63 < 3; i63++) {
    v[i63] = v_data[emlrtDynamicBoundsCheckR2012b(1 + i63, 1, v_sizes,
      &dd_emlrtBCI, sp) - 1];
  }

  phi = norm(v);
  if (covrtLogIf(moduleInstance->covInst, 0, 0, 5, phi < 1.0E-6)) {
    covrtLogBasicBlock(moduleInstance->covInst, 0, 15);
    eye(R);
    eye(Jr);
  } else {
    covrtLogBasicBlock(moduleInstance->covInst, 0, 16);
    c_y = muDoubleScalarSin(phi) / phi;
    st.site = &xg_emlrtRSI;
    b_st.site = &xd_emlrtRSI;
    c_st.site = &sb_emlrtRSI;
    d_y = (1.0 - muDoubleScalarCos(phi)) / (phi * phi);
    eye(I);
    for (i63 = 0; i63 < 3; i63++) {
      for (i64 = 0; i64 < 3; i64++) {
        Jr[i63 + 3 * i64] = 0.0;
        for (i65 = 0; i65 < 3; i65++) {
          Jr[i63 + 3 * i64] += A[i63 + 3 * i65] * A[i65 + 3 * i64];
        }
      }
    }

    for (i63 = 0; i63 < 3; i63++) {
      for (i64 = 0; i64 < 3; i64++) {
        R[i64 + 3 * i63] = (I[i64 + 3 * i63] + c_y * A[i64 + 3 * i63]) + d_y *
          Jr[i64 + 3 * i63];
      }
    }

    for (i63 = 0; i63 < 9; i63++) {
      I[i63] = 0.0;
    }

    for (maxdimlen = 0; maxdimlen < 3; maxdimlen++) {
      I[maxdimlen + 3 * maxdimlen] = 1.0;
    }

    st.site = &yg_emlrtRSI;
    b_st.site = &xd_emlrtRSI;
    c_st.site = &sb_emlrtRSI;
    c_y = (1.0 - muDoubleScalarCos(phi)) / (phi * phi);
    st.site = &yg_emlrtRSI;
    b_st.site = &xd_emlrtRSI;
    c_st.site = &sb_emlrtRSI;
    d_y = (phi - muDoubleScalarSin(phi)) / muDoubleScalarPower(phi, 3.0);
    for (i63 = 0; i63 < 3; i63++) {
      for (i64 = 0; i64 < 3; i64++) {
        beta1 = 0.0;
        for (i65 = 0; i65 < 3; i65++) {
          beta1 += d_y * A[i63 + 3 * i65] * A[i65 + 3 * i64];
        }

        Jr[i63 + 3 * i64] = (I[i63 + 3 * i64] + c_y * A[i63 + 3 * i64]) + beta1;
      }
    }
  }

  covrtLogBasicBlock(moduleInstance->covInst, 0, 17);
  if (4 > v_sizes) {
    i63 = 1;
    i64 = 1;
  } else {
    i63 = 4;
    i64 = emlrtDynamicBoundsCheckR2012b(v_sizes, 1, v_sizes, &ad_emlrtBCI, sp) +
      1;
  }

  st.site = &ah_emlrtRSI;
  guard1 = false;
  if (!(v_sizes != 1)) {
    nonSingletonDimFound = false;
    if (i64 - i63 != 1) {
      nonSingletonDimFound = true;
    }

    if (nonSingletonDimFound) {
      nonSingletonDimFound = true;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    nonSingletonDimFound = false;
  }

  b_st.site = &ug_emlrtRSI;
  if (nonSingletonDimFound) {
    for (i65 = 0; i65 < 30; i65++) {
      c_u[i65] = cv26[i65];
    }

    e_y = NULL;
    m13 = emlrtCreateCharArray(2, iv77);
    emlrtInitCharArrayR2013a(&b_st, 30, m13, &c_u[0]);
    emlrtAssign(&e_y, m13);
    c_st.site = &cl_emlrtRSI;
    g_error(&c_st, message(&c_st, e_y, &n_emlrtMCI), &n_emlrtMCI);
  }

  st.site = &ah_emlrtRSI;
  unnamed_idx_0 = i64 - i63;
  nx = i64 - i63;
  b_st.site = &eh_emlrtRSI;
  calclen = div_nzp_s32(i64 - i63, 3);
  if (!(calclen <= i64 - i63)) {
    for (i65 = 0; i65 < 30; i65++) {
      d_u[i65] = cv27[i65];
    }

    f_y = NULL;
    m13 = emlrtCreateCharArray(2, iv78);
    emlrtInitCharArrayR2013a(&b_st, 30, m13, &d_u[0]);
    emlrtAssign(&f_y, m13);
    c_st.site = &fl_emlrtRSI;
    g_error(&c_st, message(&c_st, f_y, &o_emlrtMCI), &o_emlrtMCI);
  }

  maxdimlen = (int8_T)(i64 - i63);
  if (1 > (int8_T)(i64 - i63)) {
    maxdimlen = 1;
  }

  if (unnamed_idx_0 > maxdimlen) {
    maxdimlen = i64 - i63;
  }

  if (3 > maxdimlen) {
    b_st.site = &fh_emlrtRSI;
    b_error(&b_st);
  }

  if ((int8_T)calclen > maxdimlen) {
    b_st.site = &fh_emlrtRSI;
    b_error(&b_st);
  }

  if (unnamed_idx_0 != 3 * (int8_T)calclen) {
    for (i64 = 0; i64 < 40; i64++) {
      e_u[i64] = cv28[i64];
    }

    g_y = NULL;
    m13 = emlrtCreateCharArray(2, iv79);
    emlrtInitCharArrayR2013a(&st, 40, m13, &e_u[0]);
    emlrtAssign(&g_y, m13);
    b_st.site = &el_emlrtRSI;
    g_error(&b_st, message(&b_st, g_y, &p_emlrtMCI), &p_emlrtMCI);
  }

  b_st.site = &gh_emlrtRSI;
  for (maxdimlen = -1; maxdimlen + 2 <= nx; maxdimlen++) {
    u_data[maxdimlen + 1] = v_data[i63 + maxdimlen];
  }

  st.site = &bh_emlrtRSI;
  c_eye(&st, 3.0 + (real_T)(int8_T)calclen, o_tmp_data, tmp_sizes);
  dX_sizes[0] = tmp_sizes[0];
  dX_sizes[1] = tmp_sizes[1];
  maxdimlen = tmp_sizes[0] * tmp_sizes[1];
  for (i63 = 0; i63 < maxdimlen; i63++) {
    dX_data[i63] = o_tmp_data[i63];
  }

  for (i63 = 0; i63 < 3; i63++) {
    for (i64 = 0; i64 < 3; i64++) {
      dX_data[i64 + dX_sizes[0] * i63] = R[i64 + 3 * i63];
    }
  }

  if (4 > tmp_sizes[1]) {
    i63 = 1;
    i64 = 0;
  } else {
    i63 = 4;
    i64 = emlrtDynamicBoundsCheckR2012b(tmp_sizes[1], 1, tmp_sizes[1],
      &bd_emlrtBCI, sp);
  }

  maxdimlen = (int8_T)((int8_T)i64 - i63);
  for (i65 = 0; i65 <= maxdimlen; i65++) {
    p_tmp_data[i65] = (int8_T)((int8_T)(i63 + i65) - 1);
  }

  st.site = &ch_emlrtRSI;
  C_sizes[1] = (int8_T)calclen;
  C_sizes[0] = 3;
  maxdimlen = (int8_T)calclen;
  for (i65 = 0; i65 < maxdimlen; i65++) {
    for (unnamed_idx_0 = 0; unnamed_idx_0 < 3; unnamed_idx_0++) {
      n_C_data[unnamed_idx_0 + 3 * i65] = 0.0;
    }
  }

  b_st.site = &ge_emlrtRSI;
  if (!((int8_T)calclen < 1)) {
    c_st.site = &je_emlrtRSI;
    phi = 1.0;
    beta1 = 0.0;
    TRANSB = 'N';
    TRANSA = 'N';
    m_t = (ptrdiff_t)3;
    n_t = (ptrdiff_t)(int8_T)calclen;
    k_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)3;
    ldb_t = (ptrdiff_t)3;
    ldc_t = (ptrdiff_t)3;
    dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &phi, &Jr[0], &lda_t, &u_data[0],
          &ldb_t, &beta1, &n_C_data[0], &ldc_t);
  }

  iv80[0] = 3;
  iv80[1] = (int8_T)((int8_T)i64 - i63) + 1;
  emlrtSubAssignSizeCheckR2012b(iv80, 2, C_sizes, 2, &p_emlrtECI, sp);
  maxdimlen = (int8_T)calclen;
  for (i63 = 0; i63 < maxdimlen; i63++) {
    for (i64 = 0; i64 < 3; i64++) {
      dX_data[i64 + dX_sizes[0] * p_tmp_data[i63]] = n_C_data[i64 + 3 * i63];
    }
  }

  st.site = &dh_emlrtRSI;
  b_st.site = &ug_emlrtRSI;
  if (!(v_sizes != 1)) {
    for (i63 = 0; i63 < 30; i63++) {
      f_u[i63] = cv26[i63];
    }

    h_y = NULL;
    m13 = emlrtCreateCharArray(2, iv81);
    emlrtInitCharArrayR2013a(&b_st, 30, m13, &f_u[0]);
    emlrtAssign(&h_y, m13);
    c_st.site = &cl_emlrtRSI;
    g_error(&c_st, message(&c_st, h_y, &n_emlrtMCI), &n_emlrtMCI);
  }

  for (i63 = 0; i63 < 6; i63++) {
    emlrtDynamicBoundsCheckR2012b((int32_T)((real_T)v_sizes + (-5.0 + (real_T)
      i63)), 1, v_sizes, &ed_emlrtBCI, sp);
  }
}

static void b_error(const emlrtStack *sp)
{
  emlrtStack st;
  int32_T i66;
  const mxArray *y;
  char_T u[39];
  static char_T cv29[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'r', 'e', 's', 'h', 'a', 'p', 'e', '_', 'e', 'm', 'p',
    't', 'y', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'L', 'i', 'm', 'i', 't' };

  const mxArray *m14;
  static const int32_T iv82[2] = { 1, 39 };

  st.prev = sp;
  st.tls = sp->tls;
  for (i66 = 0; i66 < 39; i66++) {
    u[i66] = cv29[i66];
  }

  y = NULL;
  m14 = emlrtCreateCharArray(2, iv82);
  emlrtInitCharArrayR2013a(sp, 39, m14, &u[0]);
  emlrtAssign(&y, m14);
  st.site = &al_emlrtRSI;
  g_error(&st, message(&st, y, &emlrtMCI), &emlrtMCI);
}

static void c_eye(const emlrtStack *sp, real_T varargin_1, real_T e_I_data[],
                  int32_T I_sizes[2])
{
  emlrtStack st;
  emlrtStack b_st;
  boolean_T b1;
  int32_T k;
  int32_T loop_ub;
  const mxArray *y;
  char_T u[28];
  static char_T cv30[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I', 'n',
    'p', 'u', 't' };

  const mxArray *m15;
  static const int32_T iv83[2] = { 1, 28 };

  const mxArray *b_y;
  const mxArray *c_y;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hh_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((!(varargin_1 != varargin_1)) && (!(-2.147483648E+9 > varargin_1))) {
    b1 = true;
  } else {
    b1 = false;
  }

  if (!b1) {
    for (k = 0; k < 28; k++) {
      u[k] = cv30[k];
    }

    y = NULL;
    m15 = emlrtCreateCharArray(2, iv83);
    emlrtInitCharArrayR2013a(&st, 28, m15, &u[0]);
    emlrtAssign(&y, m15);
    b_y = NULL;
    m15 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m15) = MIN_int32_T;
    emlrtAssign(&b_y, m15);
    c_y = NULL;
    m15 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m15) = MAX_int32_T;
    emlrtAssign(&c_y, m15);
    b_st.site = &dl_emlrtRSI;
    g_error(&b_st, c_message(&b_st, y, b_y, c_y, &d_emlrtMCI), &d_emlrtMCI);
  }

  I_sizes[0] = (int32_T)emlrtNonNegativeCheckR2012b(varargin_1, &vb_emlrtDCI, sp);
  I_sizes[1] = (int32_T)emlrtNonNegativeCheckR2012b(varargin_1, &wb_emlrtDCI, sp);
  loop_ub = (int32_T)emlrtNonNegativeCheckR2012b(varargin_1, &vb_emlrtDCI, sp) *
    (int32_T)emlrtNonNegativeCheckR2012b(varargin_1, &wb_emlrtDCI, sp);
  for (k = 0; k < loop_ub; k++) {
    e_I_data[k] = 0.0;
  }

  if ((int32_T)varargin_1 > 0) {
    st.site = &ae_emlrtRSI;
    if ((!(1 > (int32_T)varargin_1)) && ((int32_T)varargin_1 > 2147483646)) {
      b_st.site = &be_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 0; k + 1 <= (int32_T)varargin_1; k++) {
      e_I_data[k + (int32_T)varargin_1 * k] = 1.0;
    }
  }
}

static void b_indexShapeCheck(const emlrtStack *sp, int32_T matrixSize)
{
  emlrtStack st;
  emlrtStack b_st;
  int32_T i67;
  const mxArray *y;
  char_T u[30];
  static char_T cv31[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
    'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'V', 'e', 'c', 't', 'o', 'r', 'V',
    'e', 'c', 't', 'o', 'r' };

  const mxArray *m16;
  static const int32_T iv84[2] = { 1, 30 };

  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ug_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!(matrixSize != 1)) {
    for (i67 = 0; i67 < 30; i67++) {
      u[i67] = cv31[i67];
    }

    y = NULL;
    m16 = emlrtCreateCharArray(2, iv84);
    emlrtInitCharArrayR2013a(&st, 30, m16, &u[0]);
    emlrtAssign(&y, m16);
    b_st.site = &cl_emlrtRSI;
    g_error(&b_st, message(&b_st, y, &n_emlrtMCI), &n_emlrtMCI);
  }
}

static void b_RIEKF_Update_State(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Y_data[], int32_T
  Y_sizes, real_T g_b_data[], int32_T b_sizes, real_T H_data[], int32_T H_sizes
  [2], real_T N[9], real_T c_PI_data[], int32_T PI_sizes[2])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  int32_T tmp_sizes[2];
  int32_T Xa_sizes[2];
  int32_T loop_ub;
  int32_T i68;
  int32_T Pa_sizes[2];
  int32_T C_sizes_idx_1;
  const mxArray *y;
  char_T u[21];
  static char_T cv32[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *b_y;
  char_T b_u[45];
  static char_T cv33[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  const mxArray *m17;
  static const int32_T iv85[2] = { 1, 21 };

  static const int32_T iv86[2] = { 1, 45 };

  int32_T i69;
  int32_T b_sizes_idx_0;
  real_T alpha1;
  real_T c_K_data[243];
  real_T Xdim;
  int32_T b_loop_ub;
  char_T TRANSB;
  int32_T i70;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  real_T h_b_data[363];
  ptrdiff_t lda_t;
  real_T c_y[9];
  const mxArray *d_y;
  char_T c_u[21];
  ptrdiff_t ldb_t;
  static const int32_T iv87[2] = { 1, 21 };

  ptrdiff_t ldc_t;
  int32_T dX_sizes[2];
  const mxArray *e_y;
  char_T d_u[21];
  const mxArray *f_y;
  char_T e_u[45];
  static const int32_T iv88[2] = { 1, 21 };

  static const int32_T iv89[2] = { 1, 45 };

  real_T g_y[9];
  real_T n_C_data[243];
  int32_T K_sizes[2];
  real_T Ydim;
  static char_T cv34[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  int32_T c_loop_ub;
  int8_T o_tmp_data[27];
  real_T i_b_data[400];
  int32_T iv90[2];
  int8_T p_tmp_data[27];
  const mxArray *h_y;
  char_T f_u[21];
  const mxArray *i_y;
  char_T g_u[45];
  static const int32_T iv91[2] = { 1, 21 };

  static const int32_T iv92[2] = { 1, 45 };

  real_T o_C_data[121];
  real_T Z_data[107];
  real_T g_a_data[252];
  int32_T y_sizes_idx_0;
  real_T j_b_data[363];
  const mxArray *j_y;
  char_T h_u[21];
  const mxArray *k_y;
  char_T i_u[45];
  static const int32_T iv93[2] = { 1, 21 };

  static const int32_T iv94[2] = { 1, 45 };

  real_T delta_data[121];
  int32_T l_y[2];
  real_T b_delta_data[75];
  real_T dX_data[784];
  real_T dtheta[6];
  const mxArray *m_y;
  char_T j_u[21];
  const mxArray *n_y;
  char_T k_u[45];
  static const int32_T iv95[2] = { 1, 21 };

  static const int32_T iv96[2] = { 1, 45 };

  int8_T q_tmp_data[20];
  int32_T iv97[2];
  int32_T y_sizes[2];
  real_T Pa[2];
  int32_T I_sizes[2];
  int8_T b_y_sizes[2];
  int8_T c_y_sizes[2];
  const mxArray *o_y;
  char_T l_u[21];
  const mxArray *p_y;
  char_T m_u[45];
  static const int32_T iv98[2] = { 1, 21 };

  static const int32_T iv99[2] = { 1, 45 };

  int32_T d_y_sizes[2];
  const mxArray *q_y;
  char_T n_u[21];
  const mxArray *r_y;
  char_T o_u[45];
  static const int32_T iv100[2] = { 1, 21 };

  static const int32_T iv101[2] = { 1, 45 };

  real_T jb_y_data[252];
  int8_T e_y_sizes[2];
  int32_T f_y_sizes[2];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  covrtLogFcn(moduleInstance->covInst, 0, 13);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 26);

  /*  Update State and Covariance from a measurement */
  /*  Compute Kalman Gain */
  st.site = &jf_emlrtRSI;
  RIEKF_Augmented_State(moduleInstance, &st, obj, moduleInstance->n_tmp_data,
                        tmp_sizes);
  Xa_sizes[0] = tmp_sizes[0];
  Xa_sizes[1] = tmp_sizes[1];
  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i68 = 0; i68 < loop_ub; i68++) {
    moduleInstance->d_Xa_data[i68] = moduleInstance->n_tmp_data[i68];
  }

  st.site = &kf_emlrtRSI;
  RIEKF_Augmented_Covariance(moduleInstance, &st, obj, moduleInstance->f_Pa_data,
    Pa_sizes);
  st.site = &lf_emlrtRSI;
  b_st.site = &he_emlrtRSI;
  if (!(H_sizes[1] == Pa_sizes[0])) {
    if ((Pa_sizes[0] == 1) && (Pa_sizes[1] == 1)) {
      for (i68 = 0; i68 < 45; i68++) {
        b_u[i68] = cv33[i68];
      }

      b_y = NULL;
      m17 = emlrtCreateCharArray(2, iv86);
      emlrtInitCharArrayR2013a(&b_st, 45, m17, &b_u[0]);
      emlrtAssign(&b_y, m17);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, b_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i68 = 0; i68 < 21; i68++) {
        u[i68] = cv32[i68];
      }

      y = NULL;
      m17 = emlrtCreateCharArray(2, iv85);
      emlrtInitCharArrayR2013a(&b_st, 21, m17, &u[0]);
      emlrtAssign(&y, m17);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if (Pa_sizes[0] == 1) {
    C_sizes_idx_1 = Pa_sizes[1];
    for (i68 = 0; i68 < 3; i68++) {
      loop_ub = Pa_sizes[1];
      for (i69 = 0; i69 < loop_ub; i69++) {
        c_K_data[i68 + 3 * i69] = 0.0;
        b_loop_ub = H_sizes[1];
        for (i70 = 0; i70 < b_loop_ub; i70++) {
          c_K_data[i68 + 3 * i69] += H_data[i68 + H_sizes[0] * i70] *
            moduleInstance->f_Pa_data[i70 + i69];
        }
      }
    }
  } else {
    C_sizes_idx_1 = (int8_T)Pa_sizes[1];
    loop_ub = (int8_T)Pa_sizes[1];
    for (i68 = 0; i68 < loop_ub; i68++) {
      for (i69 = 0; i69 < 3; i69++) {
        c_K_data[i69 + 3 * i68] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if (!(Pa_sizes[1] < 1)) {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)3;
      n_t = (ptrdiff_t)Pa_sizes[1];
      k_t = (ptrdiff_t)H_sizes[1];
      lda_t = (ptrdiff_t)3;
      ldb_t = (ptrdiff_t)H_sizes[1];
      ldc_t = (ptrdiff_t)3;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &H_data[0], &lda_t,
            &moduleInstance->f_Pa_data[0], &ldb_t, &Xdim, &c_K_data[0], &ldc_t);
    }
  }

  st.site = &lf_emlrtRSI;
  b_sizes_idx_0 = H_sizes[1];
  for (i68 = 0; i68 < 3; i68++) {
    loop_ub = H_sizes[1];
    for (i69 = 0; i69 < loop_ub; i69++) {
      h_b_data[i69 + b_sizes_idx_0 * i68] = H_data[i68 + H_sizes[0] * i69];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(C_sizes_idx_1 == H_sizes[1])) {
    for (i68 = 0; i68 < 21; i68++) {
      c_u[i68] = cv32[i68];
    }

    d_y = NULL;
    m17 = emlrtCreateCharArray(2, iv87);
    emlrtInitCharArrayR2013a(&b_st, 21, m17, &c_u[0]);
    emlrtAssign(&d_y, m17);
    c_st.site = &tk_emlrtRSI;
    g_error(&c_st, message(&c_st, d_y, &h_emlrtMCI), &h_emlrtMCI);
  }

  if (C_sizes_idx_1 == 1) {
    for (i68 = 0; i68 < 3; i68++) {
      for (i69 = 0; i69 < 3; i69++) {
        c_y[i68 + 3 * i69] = 0.0;
        i70 = 0;
        while (i70 <= 0) {
          c_y[i68 + 3 * i69] += c_K_data[i68] * h_b_data[b_sizes_idx_0 * i69];
          i70 = 1;
        }
      }
    }
  } else {
    b_st.site = &ge_emlrtRSI;
    for (i68 = 0; i68 < 9; i68++) {
      c_y[i68] = 0.0;
    }

    if (!(C_sizes_idx_1 < 1)) {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)3;
      n_t = (ptrdiff_t)3;
      k_t = (ptrdiff_t)C_sizes_idx_1;
      lda_t = (ptrdiff_t)3;
      ldb_t = (ptrdiff_t)C_sizes_idx_1;
      ldc_t = (ptrdiff_t)3;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &c_K_data[0], &lda_t,
            &h_b_data[0], &ldb_t, &Xdim, &c_y[0], &ldc_t);
    }
  }

  st.site = &mf_emlrtRSI;
  b_sizes_idx_0 = H_sizes[1];
  for (i68 = 0; i68 < 3; i68++) {
    loop_ub = H_sizes[1];
    for (i69 = 0; i69 < loop_ub; i69++) {
      h_b_data[i69 + b_sizes_idx_0 * i68] = H_data[i68 + H_sizes[0] * i69];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(Pa_sizes[1] == H_sizes[1])) {
    if ((Pa_sizes[0] == 1) && (Pa_sizes[1] == 1)) {
      for (i68 = 0; i68 < 45; i68++) {
        e_u[i68] = cv33[i68];
      }

      f_y = NULL;
      m17 = emlrtCreateCharArray(2, iv89);
      emlrtInitCharArrayR2013a(&b_st, 45, m17, &e_u[0]);
      emlrtAssign(&f_y, m17);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, f_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i68 = 0; i68 < 21; i68++) {
        d_u[i68] = cv32[i68];
      }

      e_y = NULL;
      m17 = emlrtCreateCharArray(2, iv88);
      emlrtInitCharArrayR2013a(&b_st, 21, m17, &d_u[0]);
      emlrtAssign(&e_y, m17);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, e_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if (Pa_sizes[1] == 1) {
    dX_sizes[0] = Pa_sizes[0];
    dX_sizes[1] = 3;
    loop_ub = Pa_sizes[0];
    for (i68 = 0; i68 < loop_ub; i68++) {
      for (i69 = 0; i69 < 3; i69++) {
        n_C_data[i68 + dX_sizes[0] * i69] = 0.0;
        i70 = 0;
        while (i70 <= 0) {
          n_C_data[i68 + dX_sizes[0] * i69] += moduleInstance->f_Pa_data[i68] *
            h_b_data[b_sizes_idx_0 * i69];
          i70 = 1;
        }
      }
    }
  } else {
    dX_sizes[0] = (int8_T)Pa_sizes[0];
    dX_sizes[1] = 3;
    for (i68 = 0; i68 < 3; i68++) {
      loop_ub = dX_sizes[0];
      for (i69 = 0; i69 < loop_ub; i69++) {
        n_C_data[i69 + dX_sizes[0] * i68] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((Pa_sizes[0] < 1) || (Pa_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)Pa_sizes[0];
      n_t = (ptrdiff_t)3;
      k_t = (ptrdiff_t)Pa_sizes[1];
      lda_t = (ptrdiff_t)Pa_sizes[0];
      ldb_t = (ptrdiff_t)Pa_sizes[1];
      ldc_t = (ptrdiff_t)Pa_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->f_Pa_data[0], &lda_t, &h_b_data[0], &ldb_t, &Xdim,
            &n_C_data[0], &ldc_t);
    }
  }

  for (i68 = 0; i68 < 9; i68++) {
    g_y[i68] = c_y[i68] + N[i68];
  }

  st.site = &mf_emlrtRSI;
  b_mrdivide(&st, n_C_data, dX_sizes, g_y, c_K_data, K_sizes);

  /*  Copy X along the diagonals if more than one measurement */
  /*  TODO: find better way to do this */
  Xdim = 7.0 + obj->num_landmarks;
  Ydim = (real_T)Y_sizes / Xdim;
  if (!(Ydim < 20.0)) {
    st.site = &vk_emlrtRSI;
    g_error(&st, message(&st, b_emlrt_marshallOut(&st, cv34), &i_emlrtMCI),
            &i_emlrtMCI);
  }

  if (!(Xdim < 27.0)) {
    st.site = &uk_emlrtRSI;
    g_error(&st, message(&st, b_emlrt_marshallOut(&st, cv34), &j_emlrtMCI),
            &j_emlrtMCI);
  }

  alpha1 = Xdim * Ydim;
  if (1.0 > alpha1) {
    loop_ub = 0;
  } else {
    i68 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &pb_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i68, 1, 100, &oc_emlrtBCI, sp);
  }

  alpha1 = Xdim * Ydim;
  if (1.0 > alpha1) {
    b_loop_ub = 0;
  } else {
    i68 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &qb_emlrtDCI, sp);
    b_loop_ub = emlrtDynamicBoundsCheckR2012b(i68, 1, 100, &pc_emlrtBCI, sp);
  }

  emlrtDimSizeGeqCheckR2012b(540, loop_ub, &g_emlrtECI, sp);
  emlrtDimSizeGeqCheckR2012b(540, b_loop_ub, &h_emlrtECI, sp);
  c_loop_ub = loop_ub * b_loop_ub;
  for (i68 = 0; i68 < c_loop_ub; i68++) {
    moduleInstance->d_BigX_data[i68] = 0.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, Ydim, mxDOUBLE_CLASS, (int32_T)Ydim,
    &emlrtRTEI, sp);
  C_sizes_idx_1 = 0;
  while (C_sizes_idx_1 <= (int32_T)Ydim - 1) {
    covrtLogFor(moduleInstance->covInst, 0, 0, 1, 1);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 27);
    alpha1 = Xdim * ((1.0 + (real_T)C_sizes_idx_1) - 1.0);
    c_loop_ub = (int32_T)muDoubleScalarFloor(Xdim - 1.0);
    for (i68 = 0; i68 <= c_loop_ub; i68++) {
      i69 = (int8_T)emlrtIntegerCheckR2012b(alpha1 + (1.0 + (real_T)i68),
        &tb_emlrtDCI, sp);
      o_tmp_data[i68] = (int8_T)((int8_T)emlrtDynamicBoundsCheckR2012b(i69, 1,
        loop_ub, &xc_emlrtBCI, sp) - 1);
    }

    alpha1 = Xdim * ((1.0 + (real_T)C_sizes_idx_1) - 1.0);
    c_loop_ub = (int32_T)muDoubleScalarFloor(Xdim - 1.0);
    for (i68 = 0; i68 <= c_loop_ub; i68++) {
      i69 = (int8_T)emlrtIntegerCheckR2012b(alpha1 + (1.0 + (real_T)i68),
        &ub_emlrtDCI, sp);
      p_tmp_data[i68] = (int8_T)((int8_T)emlrtDynamicBoundsCheckR2012b(i69, 1,
        b_loop_ub, &yc_emlrtBCI, sp) - 1);
    }

    iv90[0] = (int32_T)muDoubleScalarFloor(Xdim - 1.0) + 1;
    iv90[1] = (int32_T)muDoubleScalarFloor(Xdim - 1.0) + 1;
    emlrtSubAssignSizeCheckR2012b(iv90, 2, Xa_sizes, 2, &i_emlrtECI, sp);
    c_loop_ub = Xa_sizes[1];
    for (i68 = 0; i68 < c_loop_ub; i68++) {
      b_sizes_idx_0 = Xa_sizes[0];
      for (i69 = 0; i69 < b_sizes_idx_0; i69++) {
        moduleInstance->d_BigX_data[o_tmp_data[i69] + loop_ub * p_tmp_data[i68]]
          = moduleInstance->d_Xa_data[i69 + Xa_sizes[0] * i68];
      }
    }

    C_sizes_idx_1++;
    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst, 0, 0, 1, 0);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 28);
  st.site = &nf_emlrtRSI;
  c_loop_ub = loop_ub * b_loop_ub;
  for (i68 = 0; i68 < c_loop_ub; i68++) {
    moduleInstance->f_a_data[i68] = moduleInstance->d_BigX_data[i68];
  }

  for (i68 = 0; i68 < Y_sizes; i68++) {
    i_b_data[i68] = Y_data[i68];
  }

  b_st.site = &he_emlrtRSI;
  if (!(b_loop_ub == Y_sizes)) {
    if (((loop_ub == 1) && (b_loop_ub == 1)) || (Y_sizes == 1)) {
      for (i68 = 0; i68 < 45; i68++) {
        g_u[i68] = cv33[i68];
      }

      i_y = NULL;
      m17 = emlrtCreateCharArray(2, iv92);
      emlrtInitCharArrayR2013a(&b_st, 45, m17, &g_u[0]);
      emlrtAssign(&i_y, m17);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, i_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i68 = 0; i68 < 21; i68++) {
        f_u[i68] = cv32[i68];
      }

      h_y = NULL;
      m17 = emlrtCreateCharArray(2, iv91);
      emlrtInitCharArrayR2013a(&b_st, 21, m17, &f_u[0]);
      emlrtAssign(&h_y, m17);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, h_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((b_loop_ub == 1) || (Y_sizes == 1)) {
    b_sizes_idx_0 = loop_ub;
    for (i68 = 0; i68 < loop_ub; i68++) {
      o_C_data[i68] = 0.0;
      for (i69 = 0; i69 < b_loop_ub; i69++) {
        o_C_data[i68] += moduleInstance->d_BigX_data[i68 + loop_ub * i69] *
          Y_data[i69];
      }
    }
  } else {
    C_sizes_idx_1 = (int8_T)loop_ub;
    b_sizes_idx_0 = (int8_T)loop_ub;
    for (i68 = 0; i68 < C_sizes_idx_1; i68++) {
      o_C_data[i68] = 0.0;
    }

    b_st.site = &ge_emlrtRSI;
    if ((loop_ub < 1) || (b_loop_ub < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)loop_ub;
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)b_loop_ub;
      lda_t = (ptrdiff_t)loop_ub;
      ldb_t = (ptrdiff_t)b_loop_ub;
      ldc_t = (ptrdiff_t)loop_ub;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->f_a_data[0], &lda_t, &i_b_data[0], &ldb_t, &Xdim,
            &o_C_data[0], &ldc_t);
    }
  }

  emlrtSizeEqCheck1DR2012b(b_sizes_idx_0, b_sizes, &j_emlrtECI, sp);
  for (i68 = 0; i68 < b_sizes_idx_0; i68++) {
    Z_data[i68] = o_C_data[i68] - g_b_data[i68];
  }

  /*  Update State */
  st.site = &of_emlrtRSI;
  loop_ub = K_sizes[0] * K_sizes[1];
  for (i68 = 0; i68 < loop_ub; i68++) {
    g_a_data[i68] = c_K_data[i68];
  }

  loop_ub = PI_sizes[0] * PI_sizes[1];
  for (i68 = 0; i68 < loop_ub; i68++) {
    j_b_data[i68] = c_PI_data[i68];
  }

  y_sizes_idx_0 = (int8_T)K_sizes[0];
  loop_ub = (int8_T)PI_sizes[1];
  for (i68 = 0; i68 < loop_ub; i68++) {
    for (i69 = 0; i69 < y_sizes_idx_0; i69++) {
      moduleInstance->eb_y_data[i69 + y_sizes_idx_0 * i68] = 0.0;
    }
  }

  b_st.site = &ge_emlrtRSI;
  if ((K_sizes[0] < 1) || (PI_sizes[1] < 1)) {
  } else {
    c_st.site = &je_emlrtRSI;
    alpha1 = 1.0;
    Xdim = 0.0;
    TRANSB = 'N';
    TRANSA = 'N';
    m_t = (ptrdiff_t)K_sizes[0];
    n_t = (ptrdiff_t)PI_sizes[1];
    k_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)K_sizes[0];
    ldb_t = (ptrdiff_t)3;
    ldc_t = (ptrdiff_t)K_sizes[0];
    dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &g_a_data[0], &lda_t,
          &j_b_data[0], &ldb_t, &Xdim, &moduleInstance->eb_y_data[0], &ldc_t);
  }

  st.site = &of_emlrtRSI;
  loop_ub = (int8_T)K_sizes[0] * (int8_T)PI_sizes[1];
  for (i68 = 0; i68 < loop_ub; i68++) {
    moduleInstance->f_a_data[i68] = moduleInstance->eb_y_data[i68];
  }

  for (i68 = 0; i68 < b_sizes_idx_0; i68++) {
    i_b_data[i68] = o_C_data[i68] - g_b_data[i68];
  }

  b_st.site = &he_emlrtRSI;
  if (!((int8_T)PI_sizes[1] == b_sizes_idx_0)) {
    if ((((int8_T)K_sizes[0] == 1) && ((int8_T)PI_sizes[1] == 1)) ||
        (b_sizes_idx_0 == 1)) {
      for (i68 = 0; i68 < 45; i68++) {
        i_u[i68] = cv33[i68];
      }

      k_y = NULL;
      m17 = emlrtCreateCharArray(2, iv94);
      emlrtInitCharArrayR2013a(&b_st, 45, m17, &i_u[0]);
      emlrtAssign(&k_y, m17);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, k_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i68 = 0; i68 < 21; i68++) {
        h_u[i68] = cv32[i68];
      }

      j_y = NULL;
      m17 = emlrtCreateCharArray(2, iv93);
      emlrtInitCharArrayR2013a(&b_st, 21, m17, &h_u[0]);
      emlrtAssign(&j_y, m17);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, j_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if (((int8_T)PI_sizes[1] == 1) || (b_sizes_idx_0 == 1)) {
    b_sizes_idx_0 = (int8_T)K_sizes[0];
    loop_ub = (int8_T)K_sizes[0];
    for (i68 = 0; i68 < loop_ub; i68++) {
      delta_data[i68] = 0.0;
      b_loop_ub = (int8_T)PI_sizes[1];
      for (i69 = 0; i69 < b_loop_ub; i69++) {
        delta_data[i68] += moduleInstance->eb_y_data[i68 + y_sizes_idx_0 * i69] *
          Z_data[i69];
      }
    }
  } else {
    C_sizes_idx_1 = (int8_T)K_sizes[0];
    b_sizes_idx_0 = (int8_T)K_sizes[0];
    for (i68 = 0; i68 < C_sizes_idx_1; i68++) {
      delta_data[i68] = 0.0;
    }

    b_st.site = &ge_emlrtRSI;
    if (((int8_T)K_sizes[0] < 1) || ((int8_T)PI_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)(int8_T)K_sizes[0];
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)(int8_T)PI_sizes[1];
      lda_t = (ptrdiff_t)(int8_T)K_sizes[0];
      ldb_t = (ptrdiff_t)(int8_T)PI_sizes[1];
      ldc_t = (ptrdiff_t)(int8_T)K_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->f_a_data[0], &lda_t, &i_b_data[0], &ldb_t, &Xdim,
            &delta_data[0], &ldc_t);
    }
  }

  emlrtDimSizeGeqCheckR2012b(81, b_sizes_idx_0, &k_emlrtECI, sp);
  if (1 > b_sizes_idx_0 - 6) {
    loop_ub = 0;
  } else {
    emlrtDynamicBoundsCheckR2012b(1, 1, b_sizes_idx_0, &qc_emlrtBCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(b_sizes_idx_0 - 6, 1, b_sizes_idx_0,
      &qc_emlrtBCI, sp);
  }

  l_y[0] = 1;
  l_y[1] = loop_ub;
  st.site = &pf_emlrtRSI;
  indexShapeCheck(&st, b_sizes_idx_0, l_y);
  for (i68 = 0; i68 < loop_ub; i68++) {
    b_delta_data[i68] = delta_data[i68];
  }

  st.site = &pf_emlrtRSI;
  RIEKF_exp(moduleInstance, &st, b_delta_data, loop_ub, dX_data, dX_sizes);
  st.site = &qf_emlrtRSI;
  b_indexShapeCheck(&st, b_sizes_idx_0);
  for (i68 = 0; i68 < 6; i68++) {
    dtheta[i68] = delta_data[emlrtDynamicBoundsCheckR2012b((i68 + b_sizes_idx_0)
      - 5, 1, b_sizes_idx_0, &tc_emlrtBCI, sp) - 1];
  }

  st.site = &rf_emlrtRSI;
  loop_ub = dX_sizes[0] * dX_sizes[1];
  for (i68 = 0; i68 < loop_ub; i68++) {
    moduleInstance->f_a_data[i68] = dX_data[i68];
  }

  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i68 = 0; i68 < loop_ub; i68++) {
    moduleInstance->f_b_data[i68] = moduleInstance->d_Xa_data[i68];
  }

  b_st.site = &he_emlrtRSI;
  if (!(dX_sizes[1] == tmp_sizes[0])) {
    if (((dX_sizes[0] == 1) && (dX_sizes[1] == 1)) || ((tmp_sizes[0] == 1) &&
         (tmp_sizes[1] == 1))) {
      for (i68 = 0; i68 < 45; i68++) {
        k_u[i68] = cv33[i68];
      }

      n_y = NULL;
      m17 = emlrtCreateCharArray(2, iv96);
      emlrtInitCharArrayR2013a(&b_st, 45, m17, &k_u[0]);
      emlrtAssign(&n_y, m17);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, n_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i68 = 0; i68 < 21; i68++) {
        j_u[i68] = cv32[i68];
      }

      m_y = NULL;
      m17 = emlrtCreateCharArray(2, iv95);
      emlrtInitCharArrayR2013a(&b_st, 21, m17, &j_u[0]);
      emlrtAssign(&m_y, m17);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, m_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((dX_sizes[1] == 1) || (tmp_sizes[0] == 1)) {
    y_sizes_idx_0 = dX_sizes[0];
    C_sizes_idx_1 = tmp_sizes[1];
    loop_ub = dX_sizes[0];
    for (i68 = 0; i68 < loop_ub; i68++) {
      b_loop_ub = Xa_sizes[1];
      for (i69 = 0; i69 < b_loop_ub; i69++) {
        moduleInstance->bb_y_data[i68 + y_sizes_idx_0 * i69] = 0.0;
        c_loop_ub = dX_sizes[1];
        for (i70 = 0; i70 < c_loop_ub; i70++) {
          moduleInstance->bb_y_data[i68 + y_sizes_idx_0 * i69] += dX_data[i68 +
            dX_sizes[0] * i70] * moduleInstance->d_Xa_data[i70 + Xa_sizes[0] *
            i69];
        }
      }
    }
  } else {
    y_sizes_idx_0 = (int8_T)dX_sizes[0];
    C_sizes_idx_1 = (int8_T)tmp_sizes[1];
    loop_ub = (int8_T)tmp_sizes[1];
    for (i68 = 0; i68 < loop_ub; i68++) {
      for (i69 = 0; i69 < y_sizes_idx_0; i69++) {
        moduleInstance->bb_y_data[i69 + y_sizes_idx_0 * i68] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((dX_sizes[0] < 1) || (tmp_sizes[1] < 1) || (dX_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)dX_sizes[0];
      n_t = (ptrdiff_t)tmp_sizes[1];
      k_t = (ptrdiff_t)dX_sizes[1];
      lda_t = (ptrdiff_t)dX_sizes[0];
      ldb_t = (ptrdiff_t)dX_sizes[1];
      ldc_t = (ptrdiff_t)dX_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->f_a_data[0], &lda_t, &moduleInstance->f_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->bb_y_data[0], &ldc_t);
    }
  }

  for (i68 = 0; i68 < 7; i68++) {
    for (i69 = 0; i69 < 7; i69++) {
      obj->X[i69 + 7 * i68] = moduleInstance->bb_y_data
        [(emlrtDynamicBoundsCheckR2012b(1 + i69, 1, y_sizes_idx_0, &uc_emlrtBCI,
           sp) + y_sizes_idx_0 * (emlrtDynamicBoundsCheckR2012b(1 + i68, 1,
            C_sizes_idx_1, &vc_emlrtBCI, sp) - 1)) - 1];
    }
  }

  alpha1 = (8.0 + obj->num_landmarks) - 1.0;
  if (8.0 > alpha1) {
    i68 = 0;
    i69 = 0;
  } else {
    emlrtDynamicBoundsCheckR2012b(8, 1, C_sizes_idx_1, &rc_emlrtBCI, sp);
    i68 = 7;
    i69 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &rb_emlrtDCI, sp);
    i69 = emlrtDynamicBoundsCheckR2012b(i69, 1, C_sizes_idx_1, &rc_emlrtBCI, sp);
  }

  alpha1 = obj->num_landmarks;
  if (1.0 > alpha1) {
    i70 = 0;
  } else {
    i70 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &sb_emlrtDCI, sp);
    i70 = emlrtDynamicBoundsCheckR2012b(i70, 1, 20, &sc_emlrtBCI, sp);
  }

  loop_ub = (int8_T)((int8_T)i70 - 1);
  for (C_sizes_idx_1 = 0; C_sizes_idx_1 <= loop_ub; C_sizes_idx_1++) {
    q_tmp_data[C_sizes_idx_1] = (int8_T)C_sizes_idx_1;
  }

  for (C_sizes_idx_1 = 0; C_sizes_idx_1 < 3; C_sizes_idx_1++) {
    emlrtDynamicBoundsCheckR2012b(C_sizes_idx_1 + 1, 1, y_sizes_idx_0,
      &wc_emlrtBCI, sp);
  }

  iv97[0] = 3;
  iv97[1] = (int8_T)((int8_T)i70 - 1) + 1;
  y_sizes[0] = 3;
  y_sizes[1] = i69 - i68;
  for (i70 = 0; i70 < 2; i70++) {
    l_y[i70] = y_sizes[i70];
  }

  emlrtSubAssignSizeCheckR2012b(iv97, 2, l_y, 2, &l_emlrtECI, sp);
  loop_ub = i69 - i68;
  for (i69 = 0; i69 < loop_ub; i69++) {
    for (i70 = 0; i70 < 3; i70++) {
      obj->landmarks[i70 + 3 * q_tmp_data[i69]] = moduleInstance->bb_y_data[i70
        + y_sizes_idx_0 * (i68 + i69)];
    }
  }

  for (i68 = 0; i68 < 6; i68++) {
    obj->theta[i68] += dtheta[i68];
  }

  /*  Update Covariance */
  for (i68 = 0; i68 < 2; i68++) {
    Pa[i68] = (real_T)Pa_sizes[i68];
  }

  st.site = &sf_emlrtRSI;
  b_eye(&st, Pa, moduleInstance->m_tmp_data, tmp_sizes);
  I_sizes[0] = tmp_sizes[0];
  I_sizes[1] = tmp_sizes[1];
  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i68 = 0; i68 < loop_ub; i68++) {
    moduleInstance->d_I_data[i68] = moduleInstance->m_tmp_data[i68];
  }

  st.site = &tf_emlrtRSI;
  loop_ub = K_sizes[0] * K_sizes[1];
  for (i68 = 0; i68 < loop_ub; i68++) {
    g_a_data[i68] = c_K_data[i68];
  }

  b_y_sizes[0] = (int8_T)K_sizes[0];
  b_y_sizes[1] = (int8_T)H_sizes[1];
  loop_ub = (int8_T)H_sizes[1];
  for (i68 = 0; i68 < loop_ub; i68++) {
    b_loop_ub = b_y_sizes[0];
    for (i69 = 0; i69 < b_loop_ub; i69++) {
      moduleInstance->fb_y_data[i69 + b_y_sizes[0] * i68] = 0.0;
    }
  }

  b_st.site = &ge_emlrtRSI;
  if ((K_sizes[0] < 1) || (H_sizes[1] < 1)) {
  } else {
    c_st.site = &je_emlrtRSI;
    alpha1 = 1.0;
    Xdim = 0.0;
    TRANSB = 'N';
    TRANSA = 'N';
    m_t = (ptrdiff_t)K_sizes[0];
    n_t = (ptrdiff_t)H_sizes[1];
    k_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)K_sizes[0];
    ldb_t = (ptrdiff_t)3;
    ldc_t = (ptrdiff_t)K_sizes[0];
    dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &g_a_data[0], &lda_t,
          &H_data[0], &ldb_t, &Xdim, &moduleInstance->fb_y_data[0], &ldc_t);
  }

  for (i68 = 0; i68 < 2; i68++) {
    dX_sizes[i68] = I_sizes[i68];
    l_y[i68] = b_y_sizes[i68];
  }

  emlrtSizeEqCheckNDR2012b(dX_sizes, l_y, &m_emlrtECI, sp);
  st.site = &tf_emlrtRSI;
  loop_ub = K_sizes[0] * K_sizes[1];
  for (i68 = 0; i68 < loop_ub; i68++) {
    g_a_data[i68] = c_K_data[i68];
  }

  c_y_sizes[0] = (int8_T)K_sizes[0];
  c_y_sizes[1] = (int8_T)H_sizes[1];
  loop_ub = (int8_T)H_sizes[1];
  for (i68 = 0; i68 < loop_ub; i68++) {
    b_loop_ub = c_y_sizes[0];
    for (i69 = 0; i69 < b_loop_ub; i69++) {
      moduleInstance->gb_y_data[i69 + c_y_sizes[0] * i68] = 0.0;
    }
  }

  b_st.site = &ge_emlrtRSI;
  if ((K_sizes[0] < 1) || (H_sizes[1] < 1)) {
  } else {
    c_st.site = &je_emlrtRSI;
    alpha1 = 1.0;
    Xdim = 0.0;
    TRANSB = 'N';
    TRANSA = 'N';
    m_t = (ptrdiff_t)K_sizes[0];
    n_t = (ptrdiff_t)H_sizes[1];
    k_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)K_sizes[0];
    ldb_t = (ptrdiff_t)3;
    ldc_t = (ptrdiff_t)K_sizes[0];
    dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &g_a_data[0], &lda_t,
          &H_data[0], &ldb_t, &Xdim, &moduleInstance->gb_y_data[0], &ldc_t);
  }

  for (i68 = 0; i68 < 2; i68++) {
    dX_sizes[i68] = I_sizes[i68];
    l_y[i68] = c_y_sizes[i68];
  }

  emlrtSizeEqCheckNDR2012b(dX_sizes, l_y, &n_emlrtECI, sp);
  st.site = &tf_emlrtRSI;
  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i68 = 0; i68 < loop_ub; i68++) {
    moduleInstance->f_a_data[i68] = moduleInstance->d_I_data[i68] -
      moduleInstance->fb_y_data[i68];
  }

  loop_ub = Pa_sizes[0] * Pa_sizes[1];
  for (i68 = 0; i68 < loop_ub; i68++) {
    moduleInstance->f_b_data[i68] = moduleInstance->f_Pa_data[i68];
  }

  b_st.site = &he_emlrtRSI;
  if (!(tmp_sizes[1] == Pa_sizes[0])) {
    if (((tmp_sizes[0] == 1) && (tmp_sizes[1] == 1)) || ((Pa_sizes[0] == 1) &&
         (Pa_sizes[1] == 1))) {
      for (i68 = 0; i68 < 45; i68++) {
        m_u[i68] = cv33[i68];
      }

      p_y = NULL;
      m17 = emlrtCreateCharArray(2, iv99);
      emlrtInitCharArrayR2013a(&b_st, 45, m17, &m_u[0]);
      emlrtAssign(&p_y, m17);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, p_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i68 = 0; i68 < 21; i68++) {
        l_u[i68] = cv32[i68];
      }

      o_y = NULL;
      m17 = emlrtCreateCharArray(2, iv98);
      emlrtInitCharArrayR2013a(&b_st, 21, m17, &l_u[0]);
      emlrtAssign(&o_y, m17);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, o_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((tmp_sizes[1] == 1) || (Pa_sizes[0] == 1)) {
    y_sizes_idx_0 = tmp_sizes[0];
    C_sizes_idx_1 = Pa_sizes[1];
    loop_ub = tmp_sizes[0];
    for (i68 = 0; i68 < loop_ub; i68++) {
      b_loop_ub = Pa_sizes[1];
      for (i69 = 0; i69 < b_loop_ub; i69++) {
        moduleInstance->cb_y_data[i68 + y_sizes_idx_0 * i69] = 0.0;
        c_loop_ub = tmp_sizes[1];
        for (i70 = 0; i70 < c_loop_ub; i70++) {
          moduleInstance->cb_y_data[i68 + y_sizes_idx_0 * i69] +=
            moduleInstance->f_a_data[i68 + tmp_sizes[0] * i70] *
            moduleInstance->f_Pa_data[i70 + Pa_sizes[0] * i69];
        }
      }
    }
  } else {
    y_sizes_idx_0 = (int8_T)tmp_sizes[0];
    C_sizes_idx_1 = (int8_T)Pa_sizes[1];
    loop_ub = (int8_T)Pa_sizes[1];
    for (i68 = 0; i68 < loop_ub; i68++) {
      for (i69 = 0; i69 < y_sizes_idx_0; i69++) {
        moduleInstance->cb_y_data[i69 + y_sizes_idx_0 * i68] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((tmp_sizes[0] < 1) || (Pa_sizes[1] < 1) || (tmp_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)tmp_sizes[0];
      n_t = (ptrdiff_t)Pa_sizes[1];
      k_t = (ptrdiff_t)tmp_sizes[1];
      lda_t = (ptrdiff_t)tmp_sizes[0];
      ldb_t = (ptrdiff_t)tmp_sizes[1];
      ldc_t = (ptrdiff_t)tmp_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->f_a_data[0], &lda_t, &moduleInstance->f_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->cb_y_data[0], &ldc_t);
    }
  }

  st.site = &tf_emlrtRSI;
  b_sizes_idx_0 = tmp_sizes[1];
  loop_ub = tmp_sizes[0];
  for (i68 = 0; i68 < loop_ub; i68++) {
    b_loop_ub = I_sizes[1];
    for (i69 = 0; i69 < b_loop_ub; i69++) {
      moduleInstance->f_b_data[i69 + b_sizes_idx_0 * i68] =
        moduleInstance->d_I_data[i68 + I_sizes[0] * i69] -
        moduleInstance->gb_y_data[i68 + c_y_sizes[0] * i69];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(C_sizes_idx_1 == tmp_sizes[1])) {
    if (((y_sizes_idx_0 == 1) && (C_sizes_idx_1 == 1)) || ((tmp_sizes[1] == 1) &&
         (tmp_sizes[0] == 1))) {
      for (i68 = 0; i68 < 45; i68++) {
        o_u[i68] = cv33[i68];
      }

      r_y = NULL;
      m17 = emlrtCreateCharArray(2, iv101);
      emlrtInitCharArrayR2013a(&b_st, 45, m17, &o_u[0]);
      emlrtAssign(&r_y, m17);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, r_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i68 = 0; i68 < 21; i68++) {
        n_u[i68] = cv32[i68];
      }

      q_y = NULL;
      m17 = emlrtCreateCharArray(2, iv100);
      emlrtInitCharArrayR2013a(&b_st, 21, m17, &n_u[0]);
      emlrtAssign(&q_y, m17);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, q_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((C_sizes_idx_1 == 1) || (tmp_sizes[1] == 1)) {
    d_y_sizes[0] = y_sizes_idx_0;
    d_y_sizes[1] = tmp_sizes[0];
    for (i68 = 0; i68 < y_sizes_idx_0; i68++) {
      loop_ub = tmp_sizes[0];
      for (i69 = 0; i69 < loop_ub; i69++) {
        moduleInstance->db_y_data[i68 + y_sizes_idx_0 * i69] = 0.0;
        for (i70 = 0; i70 < C_sizes_idx_1; i70++) {
          moduleInstance->db_y_data[i68 + y_sizes_idx_0 * i69] +=
            moduleInstance->cb_y_data[i68 + y_sizes_idx_0 * i70] *
            moduleInstance->f_b_data[i70 + b_sizes_idx_0 * i69];
        }
      }
    }
  } else {
    d_y_sizes[0] = (int8_T)y_sizes_idx_0;
    d_y_sizes[1] = (int8_T)tmp_sizes[0];
    loop_ub = (int8_T)tmp_sizes[0];
    for (i68 = 0; i68 < loop_ub; i68++) {
      b_loop_ub = (int8_T)y_sizes_idx_0;
      for (i69 = 0; i69 < b_loop_ub; i69++) {
        moduleInstance->db_y_data[i69 + (int8_T)y_sizes_idx_0 * i68] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((y_sizes_idx_0 < 1) || (tmp_sizes[0] < 1) || (C_sizes_idx_1 < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)y_sizes_idx_0;
      n_t = (ptrdiff_t)tmp_sizes[0];
      k_t = (ptrdiff_t)C_sizes_idx_1;
      lda_t = (ptrdiff_t)y_sizes_idx_0;
      ldb_t = (ptrdiff_t)C_sizes_idx_1;
      ldc_t = (ptrdiff_t)y_sizes_idx_0;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->cb_y_data[0], &lda_t, &moduleInstance->f_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->db_y_data[0], &ldc_t);
    }
  }

  st.site = &tf_emlrtRSI;
  loop_ub = K_sizes[0] * K_sizes[1];
  for (i68 = 0; i68 < loop_ub; i68++) {
    g_a_data[i68] = c_K_data[i68];
  }

  y_sizes_idx_0 = (int8_T)K_sizes[0];
  for (i68 = 0; i68 < 3; i68++) {
    for (i69 = 0; i69 < y_sizes_idx_0; i69++) {
      jb_y_data[i69 + y_sizes_idx_0 * i68] = 0.0;
    }
  }

  b_st.site = &ge_emlrtRSI;
  if (!(K_sizes[0] < 1)) {
    c_st.site = &je_emlrtRSI;
    alpha1 = 1.0;
    Xdim = 0.0;
    TRANSB = 'N';
    TRANSA = 'N';
    m_t = (ptrdiff_t)K_sizes[0];
    n_t = (ptrdiff_t)3;
    k_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)K_sizes[0];
    ldb_t = (ptrdiff_t)3;
    ldc_t = (ptrdiff_t)K_sizes[0];
    dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &g_a_data[0], &lda_t, &N
          [0], &ldb_t, &Xdim, &jb_y_data[0], &ldc_t);
  }

  st.site = &tf_emlrtRSI;
  loop_ub = K_sizes[0];
  for (i68 = 0; i68 < loop_ub; i68++) {
    for (i69 = 0; i69 < 3; i69++) {
      j_b_data[i69 + 3 * i68] = c_K_data[i68 + K_sizes[0] * i69];
    }
  }

  e_y_sizes[0] = (int8_T)K_sizes[0];
  e_y_sizes[1] = (int8_T)K_sizes[0];
  loop_ub = (int8_T)K_sizes[0];
  for (i68 = 0; i68 < loop_ub; i68++) {
    b_loop_ub = e_y_sizes[0];
    for (i69 = 0; i69 < b_loop_ub; i69++) {
      moduleInstance->hb_y_data[i69 + e_y_sizes[0] * i68] = 0.0;
    }
  }

  b_st.site = &ge_emlrtRSI;
  if (((int8_T)K_sizes[0] < 1) || (K_sizes[0] < 1)) {
  } else {
    c_st.site = &je_emlrtRSI;
    alpha1 = 1.0;
    Xdim = 0.0;
    TRANSB = 'N';
    TRANSA = 'N';
    m_t = (ptrdiff_t)(int8_T)K_sizes[0];
    n_t = (ptrdiff_t)K_sizes[0];
    k_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)(int8_T)K_sizes[0];
    ldb_t = (ptrdiff_t)3;
    ldc_t = (ptrdiff_t)(int8_T)K_sizes[0];
    dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &jb_y_data[0], &lda_t,
          &j_b_data[0], &ldb_t, &Xdim, &moduleInstance->hb_y_data[0], &ldc_t);
  }

  for (i68 = 0; i68 < 2; i68++) {
    l_y[i68] = d_y_sizes[i68];
    dX_sizes[i68] = e_y_sizes[i68];
  }

  emlrtSizeEqCheckNDR2012b(l_y, dX_sizes, &o_emlrtECI, sp);
  f_y_sizes[0] = d_y_sizes[0];
  f_y_sizes[1] = d_y_sizes[1];
  loop_ub = d_y_sizes[0] * d_y_sizes[1];
  for (i68 = 0; i68 < loop_ub; i68++) {
    moduleInstance->ib_y_data[i68] = moduleInstance->db_y_data[i68] +
      moduleInstance->hb_y_data[i68];
  }

  st.site = &tf_emlrtRSI;
  c_RIEKF_Store_Covariance(moduleInstance, &st, obj, moduleInstance->ib_y_data,
    f_y_sizes);

  /*  Joseph update form */
}

static void b_mrdivide(const emlrtStack *sp, real_T b_A_data[], int32_T A_sizes
  [2], real_T B[9], real_T jb_y_data[], int32_T y_sizes[2])
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (A_sizes[0] == 0) {
    y_sizes[0] = 0;
    y_sizes[1] = 3;
  } else {
    st.site = &uf_emlrtRSI;
    b_lusolve(&st, B, b_A_data, A_sizes, jb_y_data, y_sizes);
  }
}

static void b_lusolve(const emlrtStack *sp, real_T A[9], real_T b_B_data[],
                      int32_T B_sizes[2], real_T X_data[], int32_T X_sizes[2])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  real_T b_A[9];
  int32_T iy;
  int8_T ipiv[3];
  int32_T info;
  int32_T j;
  int32_T c;
  int32_T ix;
  real_T temp;
  int32_T jp;
  real_T s;
  int32_T b;
  char_T DIAGA;
  char_T TRANSA;
  char_T UPLO;
  char_T SIDE;
  ptrdiff_t m_t;
  int32_T jy;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  int32_T ijA;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &vf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  b_st.site = &xf_emlrtRSI;
  c_st.site = &cg_emlrtRSI;
  for (iy = 0; iy < 9; iy++) {
    b_A[iy] = A[iy];
  }

  for (iy = 0; iy < 3; iy++) {
    ipiv[iy] = (int8_T)(1 + iy);
  }

  info = 0;
  for (j = 0; j < 2; j++) {
    c = j << 2;
    d_st.site = &dg_emlrtRSI;
    e_st.site = &gg_emlrtRSI;
    iy = 1;
    ix = c;
    temp = muDoubleScalarAbs(b_A[c]);
    f_st.site = &hg_emlrtRSI;
    for (jp = 2; jp <= 3 - j; jp++) {
      ix++;
      s = muDoubleScalarAbs(b_A[ix]);
      if (s > temp) {
        iy = jp;
        temp = s;
      }
    }

    if (b_A[(c + iy) - 1] != 0.0) {
      if (iy - 1 != 0) {
        ipiv[j] = (int8_T)(j + iy);
        ix = j;
        iy = (j + iy) - 1;
        for (jp = 0; jp < 3; jp++) {
          temp = b_A[ix];
          b_A[ix] = b_A[iy];
          b_A[iy] = temp;
          ix += 3;
          iy += 3;
        }
      }

      b = c - j;
      d_st.site = &eg_emlrtRSI;
      for (iy = c + 1; iy + 1 <= b + 3; iy++) {
        b_A[iy] /= b_A[c];
      }
    } else {
      info = j + 1;
    }

    d_st.site = &fg_emlrtRSI;
    e_st.site = &ig_emlrtRSI;
    f_st.site = &jg_emlrtRSI;
    g_st.site = &kg_emlrtRSI;
    jp = c + 5;
    jy = c + 3;
    h_st.site = &mg_emlrtRSI;
    for (iy = 1; iy <= 2 - j; iy++) {
      temp = b_A[jy];
      if (b_A[jy] != 0.0) {
        ix = c;
        b = (jp - j) + 1;
        h_st.site = &lg_emlrtRSI;
        if ((!(jp > b)) && (b > 2147483646)) {
          i_st.site = &be_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }

        for (ijA = jp - 1; ijA + 1 <= b; ijA++) {
          b_A[ijA] += b_A[ix + 1] * -temp;
          ix++;
        }
      }

      jy += 3;
      jp += 3;
    }
  }

  if ((info == 0) && (!(b_A[8] != 0.0))) {
    info = 3;
  }

  if (info > 0) {
    b_st.site = &wf_emlrtRSI;
    c_st.site = &ng_emlrtRSI;
    warning(&c_st);
  }

  b_st.site = &yf_emlrtRSI;
  X_sizes[0] = B_sizes[0];
  X_sizes[1] = 3;
  jp = B_sizes[0] * B_sizes[1];
  for (iy = 0; iy < jp; iy++) {
    X_data[iy] = b_B_data[iy];
  }

  if (!(B_sizes[0] < 1)) {
    c_st.site = &pg_emlrtRSI;
    temp = 1.0;
    DIAGA = 'N';
    TRANSA = 'N';
    UPLO = 'U';
    SIDE = 'R';
    m_t = (ptrdiff_t)B_sizes[0];
    n_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)3;
    ldb_t = (ptrdiff_t)B_sizes[0];
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, &temp, &b_A[0], &lda_t,
          &X_data[0], &ldb_t);
  }

  b_st.site = &ag_emlrtRSI;
  if (!(B_sizes[0] < 1)) {
    c_st.site = &pg_emlrtRSI;
    temp = 1.0;
    DIAGA = 'U';
    TRANSA = 'N';
    UPLO = 'L';
    SIDE = 'R';
    m_t = (ptrdiff_t)B_sizes[0];
    n_t = (ptrdiff_t)3;
    lda_t = (ptrdiff_t)3;
    ldb_t = (ptrdiff_t)B_sizes[0];
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, &temp, &b_A[0], &lda_t,
          &X_data[0], &ldb_t);
  }

  for (iy = 1; iy > -1; iy += -1) {
    if (ipiv[iy] != iy + 1) {
      jp = ipiv[iy] - 1;
      b_st.site = &bg_emlrtRSI;
      for (jy = 0; jy + 1 <= B_sizes[0]; jy++) {
        temp = X_data[jy + X_sizes[0] * iy];
        X_data[jy + X_sizes[0] * iy] = X_data[jy + X_sizes[0] * jp];
        X_data[jy + X_sizes[0] * jp] = temp;
      }
    }
  }
}

static void RIEKF_Update_StaticLandmarks(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T
  measured_landmarks_data[], int32_T measured_landmarks_sizes[2])
{
  emlrtStack st;
  real_T R_pred[9];
  real_T unusedU7[3];
  real_T unusedU8[3];
  real_T unusedU9[3];
  real_T unusedUa[3];
  real_T unusedUb[3];
  real_T unusedUc[3];
  real_T lm_cnt;
  int32_T i;
  boolean_T x;
  static char_T cv35[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  int32_T Y_sizes;
  int32_T ii_sizes_idx_0;
  int32_T ii_sizes_idx_1;
  int32_T i71;
  int32_T b_sizes;
  real_T Y_data[140];
  int32_T H_sizes[2];
  real_T g_b_data[140];
  real_T d5;
  real_T H_data[1260];
  int32_T N_sizes[2];
  int32_T PI_sizes[2];
  int32_T i72;
  int32_T i73;
  real_T o_tmp_data[8];
  emlrtStack b_st;
  emlrtStack c_st;
  real_T e_varargin_1_data[3];
  real_T p_tmp_data[7];
  int32_T obj_sizes[2];
  real_T b[9];
  real_T b_R_pred[9];
  int32_T i74;
  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(moduleInstance->covInst, 0, 15);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 33);

  /*  Function to perform Right-Invariant EKF update from static */
  /*  landmark distance measurements */
  st.site = &ih_emlrtRSI;
  RIEKF_Separate_State(moduleInstance, obj->X, obj->theta, R_pred, unusedU7,
                       unusedU8, unusedU9, unusedUa, unusedUb, unusedUc);

  /*  Determine sizes (needed for codegen), (TODO: there is probably a better way to do this) */
  lm_cnt = 0.0;
  i = 1;
  while (i - 1 <= measured_landmarks_sizes[1] - 1) {
    covrtLogFor(moduleInstance->covInst, 0, 0, 2, 1);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 34);
    emlrtDynamicBoundsCheckR2012b(1, 1, measured_landmarks_sizes[0],
      &id_emlrtBCI, sp);
    x = (obj->landmark_positions[0] ==
         measured_landmarks_data[measured_landmarks_sizes[0] *
         (emlrtDynamicBoundsCheckR2012b(i, 1, measured_landmarks_sizes[1],
           &rd_emlrtBCI, sp) - 1)]);
    if (x) {
      ii_sizes_idx_0 = 1;
      ii_sizes_idx_1 = 1;
    } else {
      ii_sizes_idx_0 = 0;
      ii_sizes_idx_1 = 0;
    }

    if (covrtLogIf(moduleInstance->covInst, 0, 0, 15, covrtLogMcdc
                   (moduleInstance->covInst, 0, 0, 7, !covrtLogCond
                    (moduleInstance->covInst, 0, 0, 9, (ii_sizes_idx_0 == 0) ||
                     (ii_sizes_idx_1 == 0))))) {
      covrtLogBasicBlock(moduleInstance->covInst, 0, 35);
      lm_cnt++;
    }

    i++;
    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst, 0, 0, 2, 0);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 36);
  if (!(lm_cnt <= 20.0)) {
    st.site = &bl_emlrtRSI;
    g_error(&st, message(&st, b_emlrt_marshallOut(&st, cv35), &q_emlrtMCI),
            &q_emlrtMCI);
  }

  /*  TODO: change to constant variable */
  Y_sizes = (int32_T)(7.0 * lm_cnt);
  ii_sizes_idx_0 = (int32_T)(7.0 * lm_cnt);
  for (i71 = 0; i71 < ii_sizes_idx_0; i71++) {
    Y_data[i71] = 0.0;
  }

  b_sizes = (int32_T)(7.0 * lm_cnt);
  ii_sizes_idx_0 = (int32_T)(7.0 * lm_cnt);
  for (i71 = 0; i71 < ii_sizes_idx_0; i71++) {
    g_b_data[i71] = 0.0;
  }

  H_sizes[0] = (int32_T)(3.0 * lm_cnt);
  H_sizes[1] = 21;
  ii_sizes_idx_0 = (int32_T)(3.0 * lm_cnt) * 21;
  for (i71 = 0; i71 < ii_sizes_idx_0; i71++) {
    H_data[i71] = 0.0;
  }

  d5 = 3.0 * lm_cnt;
  N_sizes[0] = (int32_T)d5;
  N_sizes[1] = (int32_T)d5;
  ii_sizes_idx_0 = (int32_T)d5 * (int32_T)d5;
  for (i71 = 0; i71 < ii_sizes_idx_0; i71++) {
    moduleInstance->N_data[i71] = 0.0;
  }

  PI_sizes[0] = (int32_T)(3.0 * lm_cnt);
  PI_sizes[1] = (int32_T)(7.0 * lm_cnt);
  ii_sizes_idx_0 = (int32_T)(3.0 * lm_cnt) * (int32_T)(7.0 * lm_cnt);
  for (i71 = 0; i71 < ii_sizes_idx_0; i71++) {
    moduleInstance->b_PI_data[i71] = 0.0;
  }

  /*  Stack landmark measurements (TODO: Optimize this) */
  i = 0;
  while (i <= measured_landmarks_sizes[1] - 1) {
    covrtLogFor(moduleInstance->covInst, 0, 0, 3, 1);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 37);

    /*  Search to see if measured landmark id is in the list of */
    /*  static landmarks */
    emlrtDynamicBoundsCheckR2012b(1, 1, measured_landmarks_sizes[0],
      &hd_emlrtBCI, sp);
    x = (obj->landmark_positions[0] ==
         measured_landmarks_data[measured_landmarks_sizes[0] *
         (emlrtDynamicBoundsCheckR2012b(1 + i, 1, measured_landmarks_sizes[1],
           &jd_emlrtBCI, sp) - 1)]);
    if (x) {
      ii_sizes_idx_0 = 1;
      ii_sizes_idx_1 = 1;
    } else {
      ii_sizes_idx_0 = 0;
      ii_sizes_idx_1 = 0;
    }

    if (covrtLogIf(moduleInstance->covInst, 0, 0, 16, covrtLogMcdc
                   (moduleInstance->covInst, 0, 0, 8, !covrtLogCond
                    (moduleInstance->covInst, 0, 0, 10, (ii_sizes_idx_0 == 0) ||
                     (ii_sizes_idx_1 == 0))))) {
      covrtLogBasicBlock(moduleInstance->covInst, 0, 38);

      /*  Create measurement model */
      if (2 > measured_landmarks_sizes[0]) {
        i71 = 0;
        i72 = 0;
      } else {
        i71 = 1;
        i72 = emlrtDynamicBoundsCheckR2012b(measured_landmarks_sizes[0], 1,
          measured_landmarks_sizes[0], &gd_emlrtBCI, sp);
      }

      emlrtDynamicBoundsCheckR2012b(1 + i, 1, measured_landmarks_sizes[1],
        &fd_emlrtBCI, sp);
      ii_sizes_idx_0 = i72 - i71;
      for (i73 = 0; i73 < ii_sizes_idx_0; i73++) {
        o_tmp_data[i73] = measured_landmarks_data[(i71 + i73) +
          measured_landmarks_sizes[0] * i];
      }

      o_tmp_data[i72 - i71] = 0.0;
      o_tmp_data[(i72 - i71) + 1] = 1.0;
      o_tmp_data[(i72 - i71) + 2] = 0.0;
      o_tmp_data[(i72 - i71) + 3] = 0.0;
      emlrtSizeEqCheck1DR2012b(7, (i72 - i71) + 4, &q_emlrtECI, sp);
      i71 = 7 * i + 1;
      for (i72 = 0; i72 < 7; i72++) {
        Y_data[emlrtDynamicBoundsCheckR2012b(i72 + i71, 1, Y_sizes, &kd_emlrtBCI,
          sp) - 1] = o_tmp_data[i72];
      }

      st.site = &jh_emlrtRSI;
      i71 = 0;
      while (i71 <= 0) {
        for (i71 = 0; i71 < 3; i71++) {
          e_varargin_1_data[i71] = obj->landmark_positions[1 + i71];
        }

        i71 = 1;
      }

      b_st.site = &de_emlrtRSI;
      c_st.site = &ee_emlrtRSI;
      for (i71 = 0; i71 < 3; i71++) {
        p_tmp_data[i71] = e_varargin_1_data[i71];
      }

      p_tmp_data[3] = 0.0;
      p_tmp_data[4] = 1.0;
      p_tmp_data[5] = 0.0;
      p_tmp_data[6] = 0.0;
      i71 = 7 * i + 1;
      for (i72 = 0; i72 < 7; i72++) {
        g_b_data[emlrtDynamicBoundsCheckR2012b(i72 + i71, 1, b_sizes,
          &ld_emlrtBCI, sp) - 1] = p_tmp_data[i72];
      }

      obj_sizes[0] = 3;
      obj_sizes[1] = 1;
      i71 = 0;
      while (i71 <= 0) {
        for (i71 = 0; i71 < 3; i71++) {
          unusedU7[i71] = obj->landmark_positions[1 + i71];
        }

        i71 = 1;
      }

      st.site = &kh_emlrtRSI;
      b_RIEKF_skew(moduleInstance, &st, unusedU7, obj_sizes, b);
      eye(b_R_pred);
      i71 = 3 * i + 1;
      ii_sizes_idx_0 = H_sizes[0];
      for (i72 = 0; i72 < 3; i72++) {
        for (i73 = 0; i73 < 3; i73++) {
          H_data[(emlrtDynamicBoundsCheckR2012b(i73 + i71, 1, ii_sizes_idx_0,
                   &md_emlrtBCI, sp) + H_sizes[0] * i72) - 1] = b[i73 + 3 * i72];
        }
      }

      for (i72 = 0; i72 < 3; i72++) {
        for (i73 = 0; i73 < 3; i73++) {
          H_data[(emlrtDynamicBoundsCheckR2012b(i73 + i71, 1, ii_sizes_idx_0,
                   &md_emlrtBCI, sp) + H_sizes[0] * (i72 + 3)) - 1] = 0.0;
        }
      }

      for (i72 = 0; i72 < 3; i72++) {
        for (i73 = 0; i73 < 3; i73++) {
          H_data[(emlrtDynamicBoundsCheckR2012b(i73 + i71, 1, ii_sizes_idx_0,
                   &md_emlrtBCI, sp) + H_sizes[0] * (i72 + 6)) - 1] =
            -b_R_pred[i73 + 3 * i72];
        }
      }

      for (i72 = 0; i72 < 3; i72++) {
        for (i73 = 0; i73 < 3; i73++) {
          H_data[(emlrtDynamicBoundsCheckR2012b(i73 + i71, 1, ii_sizes_idx_0,
                   &md_emlrtBCI, sp) + H_sizes[0] * (i72 + 9)) - 1] = 0.0;
        }
      }

      for (i72 = 0; i72 < 3; i72++) {
        for (i73 = 0; i73 < 3; i73++) {
          H_data[(emlrtDynamicBoundsCheckR2012b(i73 + i71, 1, ii_sizes_idx_0,
                   &md_emlrtBCI, sp) + H_sizes[0] * (i72 + 12)) - 1] = 0.0;
        }
      }

      for (i72 = 0; i72 < 3; i72++) {
        for (i73 = 0; i73 < 3; i73++) {
          H_data[(emlrtDynamicBoundsCheckR2012b(i73 + i71, 1, ii_sizes_idx_0,
                   &md_emlrtBCI, sp) + H_sizes[0] * (i72 + 15)) - 1] = 0.0;
        }
      }

      for (i72 = 0; i72 < 3; i72++) {
        for (i73 = 0; i73 < 3; i73++) {
          H_data[(emlrtDynamicBoundsCheckR2012b(i73 + i71, 1, ii_sizes_idx_0,
                   &md_emlrtBCI, sp) + H_sizes[0] * (i72 + 18)) - 1] = 0.0;
        }
      }

      for (i71 = 0; i71 < 9; i71++) {
        b[i71] = obj->Ql[i71];
      }

      for (i71 = 0; i71 < 3; i71++) {
        for (i72 = 0; i72 < 3; i72++) {
          b_R_pred[i71 + 3 * i72] = 0.0;
          for (i73 = 0; i73 < 3; i73++) {
            b_R_pred[i71 + 3 * i72] += R_pred[i71 + 3 * i73] * b[i73 + 3 * i72];
          }
        }
      }

      i71 = 3 * i + 1;
      i72 = 3 * i + 1;
      for (i73 = 0; i73 < 3; i73++) {
        for (i74 = 0; i74 < 3; i74++) {
          moduleInstance->N_data[(emlrtDynamicBoundsCheckR2012b(i73 + i71, 1,
            (int32_T)d5, &nd_emlrtBCI, sp) + (int32_T)d5 *
            (emlrtDynamicBoundsCheckR2012b(i74 + i72, 1, (int32_T)d5,
            &od_emlrtBCI, sp) - 1)) - 1] = 0.0;
          for (ii_sizes_idx_0 = 0; ii_sizes_idx_0 < 3; ii_sizes_idx_0++) {
            moduleInstance->N_data[(emlrtDynamicBoundsCheckR2012b(i73 + i71, 1,
              (int32_T)d5, &nd_emlrtBCI, sp) + (int32_T)d5 *
              (emlrtDynamicBoundsCheckR2012b(i74 + i72, 1, (int32_T)d5,
              &od_emlrtBCI, sp) - 1)) - 1] = moduleInstance->N_data
              [(emlrtDynamicBoundsCheckR2012b(i73 + i71, 1, (int32_T)d5,
                 &nd_emlrtBCI, sp) + (int32_T)d5 *
                (emlrtDynamicBoundsCheckR2012b(i74 + i72, 1, (int32_T)d5,
                  &od_emlrtBCI, sp) - 1)) - 1] + b_R_pred[i73 + 3 *
              ii_sizes_idx_0] * R_pred[i74 + 3 * ii_sizes_idx_0];
          }
        }
      }

      eye(b);
      i71 = 3 * i + 1;
      ii_sizes_idx_0 = PI_sizes[0];
      i72 = 7 * i + 1;
      ii_sizes_idx_1 = PI_sizes[1];
      for (i73 = 0; i73 < 3; i73++) {
        for (i74 = 0; i74 < 3; i74++) {
          moduleInstance->b_PI_data[(emlrtDynamicBoundsCheckR2012b(i74 + i71, 1,
            ii_sizes_idx_0, &pd_emlrtBCI, sp) + PI_sizes[0] *
            (emlrtDynamicBoundsCheckR2012b(i73 + i72, 1, ii_sizes_idx_1,
            &qd_emlrtBCI, sp) - 1)) - 1] = b[i74 + 3 * i73];
        }
      }

      for (i73 = 0; i73 < 4; i73++) {
        for (i74 = 0; i74 < 3; i74++) {
          moduleInstance->b_PI_data[(emlrtDynamicBoundsCheckR2012b(i74 + i71, 1,
            ii_sizes_idx_0, &pd_emlrtBCI, sp) + PI_sizes[0] *
            (emlrtDynamicBoundsCheckR2012b((i73 + i72) + 3, 1, ii_sizes_idx_1,
            &qd_emlrtBCI, sp) - 1)) - 1] = 0.0;
        }
      }
    }

    i++;
    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst, 0, 0, 3, 0);

  /*  Update State */
  if (covrtLogIf(moduleInstance->covInst, 0, 0, 17, covrtLogMcdc
                 (moduleInstance->covInst, 0, 0, 9, !covrtLogCond
                  (moduleInstance->covInst, 0, 0, 11, Y_sizes == 0)))) {
    covrtLogBasicBlock(moduleInstance->covInst, 0, 39);
    st.site = &lh_emlrtRSI;
    c_RIEKF_Update_State(moduleInstance, &st, obj, Y_data, Y_sizes, g_b_data,
                         b_sizes, H_data, H_sizes, moduleInstance->N_data,
                         N_sizes, moduleInstance->b_PI_data, PI_sizes);
  }
}

static void b_RIEKF_skew(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance,
  const emlrtStack *sp, real_T v_data[], int32_T v_sizes[2], real_T A[9])
{
  covrtLogFcn(moduleInstance->covInst, 0, 7);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 13);

  /*  Convert from vector to skew symmetric matrix */
  emlrtDynamicBoundsCheckR2012b(3, 1, 3 * v_sizes[1], &sd_emlrtBCI, sp);
  emlrtDynamicBoundsCheckR2012b(2, 1, 3 * v_sizes[1], &td_emlrtBCI, sp);
  emlrtDynamicBoundsCheckR2012b(3, 1, 3 * v_sizes[1], &ud_emlrtBCI, sp);
  emlrtDynamicBoundsCheckR2012b(1, 1, 3 * v_sizes[1], &vd_emlrtBCI, sp);
  emlrtDynamicBoundsCheckR2012b(2, 1, 3 * v_sizes[1], &wd_emlrtBCI, sp);
  emlrtDynamicBoundsCheckR2012b(1, 1, 3 * v_sizes[1], &xd_emlrtBCI, sp);
  A[0] = 0.0;
  A[3] = -v_data[2];
  A[6] = v_data[1];
  A[1] = v_data[2];
  A[4] = 0.0;
  A[7] = -v_data[0];
  A[2] = -v_data[1];
  A[5] = v_data[0];
  A[8] = 0.0;
}

static void c_RIEKF_Update_State(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Y_data[], int32_T
  Y_sizes, real_T g_b_data[], int32_T b_sizes, real_T H_data[], int32_T H_sizes
  [2], real_T b_N_data[], int32_T N_sizes[2], real_T c_PI_data[], int32_T
  PI_sizes[2])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  int32_T tmp_sizes[2];
  int32_T Xa_sizes[2];
  int32_T loop_ub;
  int32_T i75;
  int32_T Pa_sizes[2];
  real_T g_a_data[1701];
  int32_T I_sizes[2];
  const mxArray *y;
  char_T u[21];
  static char_T cv36[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *b_y;
  char_T b_u[45];
  static char_T cv37[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  const mxArray *m18;
  static const int32_T iv102[2] = { 1, 21 };

  static const int32_T iv103[2] = { 1, 45 };

  int32_T b_loop_ub;
  int32_T i76;
  real_T alpha1;
  real_T Xdim;
  char_T TRANSB;
  int32_T i77;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  real_T h_b_data[1701];
  ptrdiff_t lda_t;
  int32_T y_sizes[2];
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  const mxArray *c_y;
  char_T c_u[21];
  const mxArray *d_y;
  char_T d_u[45];
  static const int32_T iv104[2] = { 1, 21 };

  static const int32_T iv105[2] = { 1, 45 };

  int32_T e_y[2];
  int32_T dX_sizes[2];
  int32_T b_y_sizes[2];
  const mxArray *f_y;
  char_T e_u[21];
  const mxArray *g_y;
  char_T f_u[45];
  static const int32_T iv106[2] = { 1, 21 };

  static const int32_T iv107[2] = { 1, 45 };

  real_T jb_y_data[3600];
  int32_T c_y_sizes[2];
  int32_T K_sizes[2];
  real_T Ydim;
  static char_T cv38[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  int32_T c_loop_ub;
  int32_T i;
  int8_T o_tmp_data[27];
  real_T i_b_data[400];
  int32_T iv108[2];
  int8_T p_tmp_data[27];
  int32_T C_sizes;
  const mxArray *h_y;
  char_T g_u[21];
  const mxArray *i_y;
  char_T h_u[45];
  static const int32_T iv109[2] = { 1, 21 };

  static const int32_T iv110[2] = { 1, 45 };

  real_T n_C_data[121];
  real_T Z_data[121];
  int32_T y_sizes_idx_0;
  int32_T y_sizes_idx_1;
  const mxArray *j_y;
  char_T i_u[21];
  const mxArray *k_y;
  char_T j_u[45];
  static const int32_T iv111[2] = { 1, 21 };

  static const int32_T iv112[2] = { 1, 45 };

  const mxArray *l_y;
  char_T k_u[21];
  const mxArray *m_y;
  char_T l_u[45];
  static const int32_T iv113[2] = { 1, 21 };

  static const int32_T iv114[2] = { 1, 45 };

  real_T delta_data[121];
  int32_T iv115[2];
  real_T b_delta_data[75];
  real_T dX_data[784];
  real_T dtheta[6];
  const mxArray *n_y;
  char_T m_u[21];
  const mxArray *o_y;
  char_T n_u[45];
  static const int32_T iv116[2] = { 1, 21 };

  static const int32_T iv117[2] = { 1, 45 };

  int8_T q_tmp_data[20];
  int32_T iv118[2];
  int32_T d_y_sizes[2];
  real_T Pa[2];
  int32_T b_C_sizes[2];
  const mxArray *p_y;
  char_T o_u[21];
  const mxArray *q_y;
  char_T p_u[45];
  static const int32_T iv119[2] = { 1, 21 };

  static const int32_T iv120[2] = { 1, 45 };

  real_T o_C_data[1701];
  int32_T c_C_sizes[2];
  const mxArray *r_y;
  char_T q_u[21];
  const mxArray *s_y;
  char_T r_u[45];
  static const int32_T iv121[2] = { 1, 21 };

  static const int32_T iv122[2] = { 1, 45 };

  real_T p_C_data[1701];
  const mxArray *t_y;
  char_T s_u[21];
  const mxArray *u_y;
  char_T t_u[45];
  static const int32_T iv123[2] = { 1, 21 };

  static const int32_T iv124[2] = { 1, 45 };

  int32_T d_C_sizes[2];
  const mxArray *v_y;
  char_T u_u[21];
  const mxArray *w_y;
  char_T v_u[45];
  static const int32_T iv125[2] = { 1, 21 };

  static const int32_T iv126[2] = { 1, 45 };

  const mxArray *x_y;
  char_T w_u[21];
  const mxArray *y_y;
  char_T x_u[45];
  static const int32_T iv127[2] = { 1, 21 };

  static const int32_T iv128[2] = { 1, 45 };

  int32_T e_y_sizes[2];
  const mxArray *ab_y;
  char_T y_u[21];
  const mxArray *bb_y;
  char_T ab_u[45];
  static const int32_T iv129[2] = { 1, 21 };

  static const int32_T iv130[2] = { 1, 45 };

  int32_T e_C_sizes[2];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  covrtLogFcn(moduleInstance->covInst, 0, 13);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 26);

  /*  Update State and Covariance from a measurement */
  /*  Compute Kalman Gain */
  st.site = &jf_emlrtRSI;
  RIEKF_Augmented_State(moduleInstance, &st, obj, moduleInstance->k_tmp_data,
                        tmp_sizes);
  Xa_sizes[0] = tmp_sizes[0];
  Xa_sizes[1] = tmp_sizes[1];
  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    moduleInstance->c_Xa_data[i75] = moduleInstance->k_tmp_data[i75];
  }

  st.site = &kf_emlrtRSI;
  RIEKF_Augmented_Covariance(moduleInstance, &st, obj, moduleInstance->e_Pa_data,
    Pa_sizes);
  st.site = &lf_emlrtRSI;
  loop_ub = H_sizes[0] * H_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    g_a_data[i75] = H_data[i75];
  }

  b_st.site = &he_emlrtRSI;
  if (!(21 == Pa_sizes[0])) {
    if ((Pa_sizes[0] == 1) && (Pa_sizes[1] == 1)) {
      for (i75 = 0; i75 < 45; i75++) {
        b_u[i75] = cv37[i75];
      }

      b_y = NULL;
      m18 = emlrtCreateCharArray(2, iv103);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &b_u[0]);
      emlrtAssign(&b_y, m18);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, b_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        u[i75] = cv36[i75];
      }

      y = NULL;
      m18 = emlrtCreateCharArray(2, iv102);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &u[0]);
      emlrtAssign(&y, m18);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if (Pa_sizes[0] == 1) {
    I_sizes[0] = H_sizes[0];
    I_sizes[1] = Pa_sizes[1];
    loop_ub = H_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = Pa_sizes[1];
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        moduleInstance->c_I_data[i75 + I_sizes[0] * i76] = 0.0;
        for (i77 = 0; i77 < 21; i77++) {
          moduleInstance->c_I_data[i75 + I_sizes[0] * i76] += H_data[i75 +
            H_sizes[0] * i77] * moduleInstance->e_Pa_data[i77 + i76];
        }
      }
    }
  } else {
    I_sizes[0] = (uint8_T)H_sizes[0];
    I_sizes[1] = (uint8_T)Pa_sizes[1];
    loop_ub = (uint8_T)Pa_sizes[1];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = I_sizes[0];
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        moduleInstance->c_I_data[i76 + I_sizes[0] * i75] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((H_sizes[0] < 1) || (Pa_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)H_sizes[0];
      n_t = (ptrdiff_t)Pa_sizes[1];
      k_t = (ptrdiff_t)21;
      lda_t = (ptrdiff_t)H_sizes[0];
      ldb_t = (ptrdiff_t)21;
      ldc_t = (ptrdiff_t)H_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &g_a_data[0], &lda_t,
            &moduleInstance->e_Pa_data[0], &ldb_t, &Xdim,
            &moduleInstance->c_I_data[0], &ldc_t);
    }
  }

  st.site = &lf_emlrtRSI;
  loop_ub = H_sizes[0];
  for (i75 = 0; i75 < loop_ub; i75++) {
    for (i76 = 0; i76 < 21; i76++) {
      h_b_data[i76 + 21 * i75] = H_data[i75 + H_sizes[0] * i76];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(I_sizes[1] == 21)) {
    if ((I_sizes[0] == 1) && (I_sizes[1] == 1)) {
      for (i75 = 0; i75 < 45; i75++) {
        d_u[i75] = cv37[i75];
      }

      d_y = NULL;
      m18 = emlrtCreateCharArray(2, iv105);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &d_u[0]);
      emlrtAssign(&d_y, m18);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, d_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        c_u[i75] = cv36[i75];
      }

      c_y = NULL;
      m18 = emlrtCreateCharArray(2, iv104);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &c_u[0]);
      emlrtAssign(&c_y, m18);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, c_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if (I_sizes[1] == 1) {
    y_sizes[0] = I_sizes[0];
    y_sizes[1] = H_sizes[0];
    loop_ub = I_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = H_sizes[0];
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        moduleInstance->y_y_data[i75 + y_sizes[0] * i76] = 0.0;
        i77 = 0;
        while (i77 <= 0) {
          moduleInstance->y_y_data[i75 + y_sizes[0] * i76] +=
            moduleInstance->c_I_data[i75] * h_b_data[21 * i76];
          i77 = 1;
        }
      }
    }
  } else {
    y_sizes[0] = (uint8_T)I_sizes[0];
    y_sizes[1] = (uint8_T)H_sizes[0];
    loop_ub = (uint8_T)H_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = y_sizes[0];
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        moduleInstance->y_y_data[i76 + y_sizes[0] * i75] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((I_sizes[0] < 1) || (H_sizes[0] < 1) || (I_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)I_sizes[0];
      n_t = (ptrdiff_t)H_sizes[0];
      k_t = (ptrdiff_t)I_sizes[1];
      lda_t = (ptrdiff_t)I_sizes[0];
      ldb_t = (ptrdiff_t)I_sizes[1];
      ldc_t = (ptrdiff_t)I_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->c_I_data[0], &lda_t, &h_b_data[0], &ldb_t, &Xdim,
            &moduleInstance->y_y_data[0], &ldc_t);
    }
  }

  for (i75 = 0; i75 < 2; i75++) {
    e_y[i75] = y_sizes[i75];
    dX_sizes[i75] = N_sizes[i75];
  }

  emlrtSizeEqCheckNDR2012b(e_y, dX_sizes, &f_emlrtECI, sp);
  st.site = &mf_emlrtRSI;
  loop_ub = H_sizes[0];
  for (i75 = 0; i75 < loop_ub; i75++) {
    for (i76 = 0; i76 < 21; i76++) {
      h_b_data[i76 + 21 * i75] = H_data[i75 + H_sizes[0] * i76];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(Pa_sizes[1] == 21)) {
    if ((Pa_sizes[0] == 1) && (Pa_sizes[1] == 1)) {
      for (i75 = 0; i75 < 45; i75++) {
        f_u[i75] = cv37[i75];
      }

      g_y = NULL;
      m18 = emlrtCreateCharArray(2, iv107);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &f_u[0]);
      emlrtAssign(&g_y, m18);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, g_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        e_u[i75] = cv36[i75];
      }

      f_y = NULL;
      m18 = emlrtCreateCharArray(2, iv106);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &e_u[0]);
      emlrtAssign(&f_y, m18);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, f_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if (Pa_sizes[1] == 1) {
    b_y_sizes[0] = Pa_sizes[0];
    b_y_sizes[1] = H_sizes[0];
    loop_ub = Pa_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = H_sizes[0];
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        moduleInstance->ab_y_data[i75 + b_y_sizes[0] * i76] = 0.0;
        i77 = 0;
        while (i77 <= 0) {
          moduleInstance->ab_y_data[i75 + b_y_sizes[0] * i76] +=
            moduleInstance->e_Pa_data[i75] * h_b_data[21 * i76];
          i77 = 1;
        }
      }
    }
  } else {
    b_y_sizes[0] = (uint8_T)Pa_sizes[0];
    b_y_sizes[1] = (uint8_T)H_sizes[0];
    loop_ub = (uint8_T)H_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = b_y_sizes[0];
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        moduleInstance->ab_y_data[i76 + b_y_sizes[0] * i75] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((Pa_sizes[0] < 1) || (H_sizes[0] < 1) || (Pa_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)Pa_sizes[0];
      n_t = (ptrdiff_t)H_sizes[0];
      k_t = (ptrdiff_t)Pa_sizes[1];
      lda_t = (ptrdiff_t)Pa_sizes[0];
      ldb_t = (ptrdiff_t)Pa_sizes[1];
      ldc_t = (ptrdiff_t)Pa_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->e_Pa_data[0], &lda_t, &h_b_data[0], &ldb_t, &Xdim,
            &moduleInstance->ab_y_data[0], &ldc_t);
    }
  }

  c_y_sizes[0] = y_sizes[0];
  c_y_sizes[1] = y_sizes[1];
  loop_ub = y_sizes[0] * y_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    jb_y_data[i75] = moduleInstance->y_y_data[i75] + b_N_data[i75];
  }

  st.site = &mf_emlrtRSI;
  c_mrdivide(moduleInstance, &st, moduleInstance->ab_y_data, b_y_sizes,
             jb_y_data, c_y_sizes, moduleInstance->b_K_data, K_sizes);

  /*  Copy X along the diagonals if more than one measurement */
  /*  TODO: find better way to do this */
  Xdim = 7.0 + obj->num_landmarks;
  Ydim = (real_T)Y_sizes / Xdim;
  if (!(Ydim < 20.0)) {
    st.site = &vk_emlrtRSI;
    g_error(&st, message(&st, b_emlrt_marshallOut(&st, cv38), &i_emlrtMCI),
            &i_emlrtMCI);
  }

  if (!(Xdim < 27.0)) {
    st.site = &uk_emlrtRSI;
    g_error(&st, message(&st, b_emlrt_marshallOut(&st, cv38), &j_emlrtMCI),
            &j_emlrtMCI);
  }

  alpha1 = Xdim * Ydim;
  if (1.0 > alpha1) {
    loop_ub = 0;
  } else {
    i75 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &pb_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i75, 1, 100, &oc_emlrtBCI, sp);
  }

  alpha1 = Xdim * Ydim;
  if (1.0 > alpha1) {
    b_loop_ub = 0;
  } else {
    i75 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &qb_emlrtDCI, sp);
    b_loop_ub = emlrtDynamicBoundsCheckR2012b(i75, 1, 100, &pc_emlrtBCI, sp);
  }

  emlrtDimSizeGeqCheckR2012b(540, loop_ub, &g_emlrtECI, sp);
  emlrtDimSizeGeqCheckR2012b(540, b_loop_ub, &h_emlrtECI, sp);
  c_loop_ub = loop_ub * b_loop_ub;
  for (i75 = 0; i75 < c_loop_ub; i75++) {
    moduleInstance->c_BigX_data[i75] = 0.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, Ydim, mxDOUBLE_CLASS, (int32_T)Ydim,
    &emlrtRTEI, sp);
  i = 0;
  while (i <= (int32_T)Ydim - 1) {
    covrtLogFor(moduleInstance->covInst, 0, 0, 1, 1);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 27);
    alpha1 = Xdim * ((1.0 + (real_T)i) - 1.0);
    c_loop_ub = (int32_T)muDoubleScalarFloor(Xdim - 1.0);
    for (i75 = 0; i75 <= c_loop_ub; i75++) {
      i76 = (int8_T)emlrtIntegerCheckR2012b(alpha1 + (1.0 + (real_T)i75),
        &tb_emlrtDCI, sp);
      o_tmp_data[i75] = (int8_T)((int8_T)emlrtDynamicBoundsCheckR2012b(i76, 1,
        loop_ub, &xc_emlrtBCI, sp) - 1);
    }

    alpha1 = Xdim * ((1.0 + (real_T)i) - 1.0);
    c_loop_ub = (int32_T)muDoubleScalarFloor(Xdim - 1.0);
    for (i75 = 0; i75 <= c_loop_ub; i75++) {
      i76 = (int8_T)emlrtIntegerCheckR2012b(alpha1 + (1.0 + (real_T)i75),
        &ub_emlrtDCI, sp);
      p_tmp_data[i75] = (int8_T)((int8_T)emlrtDynamicBoundsCheckR2012b(i76, 1,
        b_loop_ub, &yc_emlrtBCI, sp) - 1);
    }

    iv108[0] = (int32_T)muDoubleScalarFloor(Xdim - 1.0) + 1;
    iv108[1] = (int32_T)muDoubleScalarFloor(Xdim - 1.0) + 1;
    emlrtSubAssignSizeCheckR2012b(iv108, 2, Xa_sizes, 2, &i_emlrtECI, sp);
    c_loop_ub = Xa_sizes[1];
    for (i75 = 0; i75 < c_loop_ub; i75++) {
      C_sizes = Xa_sizes[0];
      for (i76 = 0; i76 < C_sizes; i76++) {
        moduleInstance->c_BigX_data[o_tmp_data[i76] + loop_ub * p_tmp_data[i75]]
          = moduleInstance->c_Xa_data[i76 + Xa_sizes[0] * i75];
      }
    }

    i++;
    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst, 0, 0, 1, 0);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 28);
  st.site = &nf_emlrtRSI;
  c_loop_ub = loop_ub * b_loop_ub;
  for (i75 = 0; i75 < c_loop_ub; i75++) {
    moduleInstance->e_a_data[i75] = moduleInstance->c_BigX_data[i75];
  }

  for (i75 = 0; i75 < Y_sizes; i75++) {
    i_b_data[i75] = Y_data[i75];
  }

  b_st.site = &he_emlrtRSI;
  if (!(b_loop_ub == Y_sizes)) {
    if (((loop_ub == 1) && (b_loop_ub == 1)) || (Y_sizes == 1)) {
      for (i75 = 0; i75 < 45; i75++) {
        h_u[i75] = cv37[i75];
      }

      i_y = NULL;
      m18 = emlrtCreateCharArray(2, iv110);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &h_u[0]);
      emlrtAssign(&i_y, m18);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, i_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        g_u[i75] = cv36[i75];
      }

      h_y = NULL;
      m18 = emlrtCreateCharArray(2, iv109);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &g_u[0]);
      emlrtAssign(&h_y, m18);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, h_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((b_loop_ub == 1) || (Y_sizes == 1)) {
    C_sizes = loop_ub;
    for (i75 = 0; i75 < loop_ub; i75++) {
      n_C_data[i75] = 0.0;
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        n_C_data[i75] += moduleInstance->c_BigX_data[i75 + loop_ub * i76] *
          Y_data[i76];
      }
    }
  } else {
    i = (int8_T)loop_ub;
    C_sizes = (int8_T)loop_ub;
    for (i75 = 0; i75 < i; i75++) {
      n_C_data[i75] = 0.0;
    }

    b_st.site = &ge_emlrtRSI;
    if ((loop_ub < 1) || (b_loop_ub < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)loop_ub;
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)b_loop_ub;
      lda_t = (ptrdiff_t)loop_ub;
      ldb_t = (ptrdiff_t)b_loop_ub;
      ldc_t = (ptrdiff_t)loop_ub;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->e_a_data[0], &lda_t, &i_b_data[0], &ldb_t, &Xdim,
            &n_C_data[0], &ldc_t);
    }
  }

  emlrtSizeEqCheck1DR2012b(C_sizes, b_sizes, &j_emlrtECI, sp);
  for (i75 = 0; i75 < C_sizes; i75++) {
    Z_data[i75] = n_C_data[i75] - g_b_data[i75];
  }

  /*  Update State */
  st.site = &of_emlrtRSI;
  loop_ub = K_sizes[0] * K_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    moduleInstance->e_a_data[i75] = moduleInstance->b_K_data[i75];
  }

  loop_ub = PI_sizes[0] * PI_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    moduleInstance->e_b_data[i75] = c_PI_data[i75];
  }

  b_st.site = &he_emlrtRSI;
  if (!(K_sizes[1] == PI_sizes[0])) {
    if (((K_sizes[0] == 1) && (K_sizes[1] == 1)) || ((PI_sizes[0] == 1) &&
         (PI_sizes[1] == 1))) {
      for (i75 = 0; i75 < 45; i75++) {
        j_u[i75] = cv37[i75];
      }

      k_y = NULL;
      m18 = emlrtCreateCharArray(2, iv112);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &j_u[0]);
      emlrtAssign(&k_y, m18);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, k_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        i_u[i75] = cv36[i75];
      }

      j_y = NULL;
      m18 = emlrtCreateCharArray(2, iv111);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &i_u[0]);
      emlrtAssign(&j_y, m18);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, j_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((K_sizes[1] == 1) || (PI_sizes[0] == 1)) {
    y_sizes_idx_0 = K_sizes[0];
    y_sizes_idx_1 = PI_sizes[1];
    loop_ub = K_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = PI_sizes[1];
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        moduleInstance->u_y_data[i75 + y_sizes_idx_0 * i76] = 0.0;
        c_loop_ub = K_sizes[1];
        for (i77 = 0; i77 < c_loop_ub; i77++) {
          moduleInstance->u_y_data[i75 + y_sizes_idx_0 * i76] +=
            moduleInstance->b_K_data[i75 + K_sizes[0] * i77] * c_PI_data[i77 +
            PI_sizes[0] * i76];
        }
      }
    }
  } else {
    y_sizes_idx_0 = (uint8_T)K_sizes[0];
    y_sizes_idx_1 = (uint8_T)PI_sizes[1];
    loop_ub = (uint8_T)PI_sizes[1];
    for (i75 = 0; i75 < loop_ub; i75++) {
      for (i76 = 0; i76 < y_sizes_idx_0; i76++) {
        moduleInstance->u_y_data[i76 + y_sizes_idx_0 * i75] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((K_sizes[0] < 1) || (PI_sizes[1] < 1) || (K_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)K_sizes[0];
      n_t = (ptrdiff_t)PI_sizes[1];
      k_t = (ptrdiff_t)K_sizes[1];
      lda_t = (ptrdiff_t)K_sizes[0];
      ldb_t = (ptrdiff_t)K_sizes[1];
      ldc_t = (ptrdiff_t)K_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->e_a_data[0], &lda_t, &moduleInstance->e_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->u_y_data[0], &ldc_t);
    }
  }

  st.site = &of_emlrtRSI;
  for (i75 = 0; i75 < C_sizes; i75++) {
    i_b_data[i75] = n_C_data[i75] - g_b_data[i75];
  }

  b_st.site = &he_emlrtRSI;
  if (!(y_sizes_idx_1 == C_sizes)) {
    if (((y_sizes_idx_0 == 1) && (y_sizes_idx_1 == 1)) || (C_sizes == 1)) {
      for (i75 = 0; i75 < 45; i75++) {
        l_u[i75] = cv37[i75];
      }

      m_y = NULL;
      m18 = emlrtCreateCharArray(2, iv114);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &l_u[0]);
      emlrtAssign(&m_y, m18);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, m_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        k_u[i75] = cv36[i75];
      }

      l_y = NULL;
      m18 = emlrtCreateCharArray(2, iv113);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &k_u[0]);
      emlrtAssign(&l_y, m18);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, l_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((y_sizes_idx_1 == 1) || (C_sizes == 1)) {
    C_sizes = y_sizes_idx_0;
    for (i75 = 0; i75 < y_sizes_idx_0; i75++) {
      delta_data[i75] = 0.0;
      for (i76 = 0; i76 < y_sizes_idx_1; i76++) {
        delta_data[i75] += moduleInstance->u_y_data[i75 + y_sizes_idx_0 * i76] *
          Z_data[i76];
      }
    }
  } else {
    i = (int8_T)y_sizes_idx_0;
    C_sizes = (int8_T)y_sizes_idx_0;
    for (i75 = 0; i75 < i; i75++) {
      delta_data[i75] = 0.0;
    }

    b_st.site = &ge_emlrtRSI;
    if ((y_sizes_idx_0 < 1) || (y_sizes_idx_1 < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)y_sizes_idx_0;
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)y_sizes_idx_1;
      lda_t = (ptrdiff_t)y_sizes_idx_0;
      ldb_t = (ptrdiff_t)y_sizes_idx_1;
      ldc_t = (ptrdiff_t)y_sizes_idx_0;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->u_y_data[0], &lda_t, &i_b_data[0], &ldb_t, &Xdim,
            &delta_data[0], &ldc_t);
    }
  }

  emlrtDimSizeGeqCheckR2012b(81, C_sizes, &k_emlrtECI, sp);
  if (1 > C_sizes - 6) {
    loop_ub = 0;
  } else {
    emlrtDynamicBoundsCheckR2012b(1, 1, C_sizes, &qc_emlrtBCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(C_sizes - 6, 1, C_sizes,
      &qc_emlrtBCI, sp);
  }

  iv115[0] = 1;
  iv115[1] = loop_ub;
  st.site = &pf_emlrtRSI;
  indexShapeCheck(&st, C_sizes, iv115);
  for (i75 = 0; i75 < loop_ub; i75++) {
    b_delta_data[i75] = delta_data[i75];
  }

  st.site = &pf_emlrtRSI;
  RIEKF_exp(moduleInstance, &st, b_delta_data, loop_ub, dX_data, dX_sizes);
  st.site = &qf_emlrtRSI;
  b_indexShapeCheck(&st, C_sizes);
  for (i75 = 0; i75 < 6; i75++) {
    dtheta[i75] = delta_data[emlrtDynamicBoundsCheckR2012b((i75 + C_sizes) - 5,
      1, C_sizes, &tc_emlrtBCI, sp) - 1];
  }

  st.site = &rf_emlrtRSI;
  loop_ub = dX_sizes[0] * dX_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    moduleInstance->e_a_data[i75] = dX_data[i75];
  }

  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    moduleInstance->e_b_data[i75] = moduleInstance->c_Xa_data[i75];
  }

  b_st.site = &he_emlrtRSI;
  if (!(dX_sizes[1] == tmp_sizes[0])) {
    if (((dX_sizes[0] == 1) && (dX_sizes[1] == 1)) || ((tmp_sizes[0] == 1) &&
         (tmp_sizes[1] == 1))) {
      for (i75 = 0; i75 < 45; i75++) {
        n_u[i75] = cv37[i75];
      }

      o_y = NULL;
      m18 = emlrtCreateCharArray(2, iv117);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &n_u[0]);
      emlrtAssign(&o_y, m18);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, o_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        m_u[i75] = cv36[i75];
      }

      n_y = NULL;
      m18 = emlrtCreateCharArray(2, iv116);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &m_u[0]);
      emlrtAssign(&n_y, m18);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, n_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((dX_sizes[1] == 1) || (tmp_sizes[0] == 1)) {
    y_sizes_idx_0 = dX_sizes[0];
    y_sizes_idx_1 = tmp_sizes[1];
    loop_ub = dX_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = Xa_sizes[1];
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        moduleInstance->v_y_data[i75 + y_sizes_idx_0 * i76] = 0.0;
        c_loop_ub = dX_sizes[1];
        for (i77 = 0; i77 < c_loop_ub; i77++) {
          moduleInstance->v_y_data[i75 + y_sizes_idx_0 * i76] += dX_data[i75 +
            dX_sizes[0] * i77] * moduleInstance->c_Xa_data[i77 + Xa_sizes[0] *
            i76];
        }
      }
    }
  } else {
    y_sizes_idx_0 = (uint8_T)dX_sizes[0];
    y_sizes_idx_1 = (uint8_T)tmp_sizes[1];
    loop_ub = (uint8_T)tmp_sizes[1];
    for (i75 = 0; i75 < loop_ub; i75++) {
      for (i76 = 0; i76 < y_sizes_idx_0; i76++) {
        moduleInstance->v_y_data[i76 + y_sizes_idx_0 * i75] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((dX_sizes[0] < 1) || (tmp_sizes[1] < 1) || (dX_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)dX_sizes[0];
      n_t = (ptrdiff_t)tmp_sizes[1];
      k_t = (ptrdiff_t)dX_sizes[1];
      lda_t = (ptrdiff_t)dX_sizes[0];
      ldb_t = (ptrdiff_t)dX_sizes[1];
      ldc_t = (ptrdiff_t)dX_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->e_a_data[0], &lda_t, &moduleInstance->e_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->v_y_data[0], &ldc_t);
    }
  }

  for (i75 = 0; i75 < 7; i75++) {
    for (i76 = 0; i76 < 7; i76++) {
      obj->X[i76 + 7 * i75] = moduleInstance->v_y_data
        [(emlrtDynamicBoundsCheckR2012b(1 + i76, 1, y_sizes_idx_0, &uc_emlrtBCI,
           sp) + y_sizes_idx_0 * (emlrtDynamicBoundsCheckR2012b(1 + i75, 1,
            y_sizes_idx_1, &vc_emlrtBCI, sp) - 1)) - 1];
    }
  }

  alpha1 = (8.0 + obj->num_landmarks) - 1.0;
  if (8.0 > alpha1) {
    i75 = 0;
    i76 = 0;
  } else {
    emlrtDynamicBoundsCheckR2012b(8, 1, y_sizes_idx_1, &rc_emlrtBCI, sp);
    i75 = 7;
    i76 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &rb_emlrtDCI, sp);
    i76 = emlrtDynamicBoundsCheckR2012b(i76, 1, y_sizes_idx_1, &rc_emlrtBCI, sp);
  }

  alpha1 = obj->num_landmarks;
  if (1.0 > alpha1) {
    i77 = 0;
  } else {
    i77 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &sb_emlrtDCI, sp);
    i77 = emlrtDynamicBoundsCheckR2012b(i77, 1, 20, &sc_emlrtBCI, sp);
  }

  loop_ub = (int8_T)((int8_T)i77 - 1);
  for (i = 0; i <= loop_ub; i++) {
    q_tmp_data[i] = (int8_T)i;
  }

  for (i = 0; i < 3; i++) {
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, y_sizes_idx_0, &wc_emlrtBCI, sp);
  }

  iv118[0] = 3;
  iv118[1] = (int8_T)((int8_T)i77 - 1) + 1;
  d_y_sizes[0] = 3;
  d_y_sizes[1] = i76 - i75;
  for (i77 = 0; i77 < 2; i77++) {
    e_y[i77] = d_y_sizes[i77];
  }

  emlrtSubAssignSizeCheckR2012b(iv118, 2, e_y, 2, &l_emlrtECI, sp);
  loop_ub = i76 - i75;
  for (i76 = 0; i76 < loop_ub; i76++) {
    for (i77 = 0; i77 < 3; i77++) {
      obj->landmarks[i77 + 3 * q_tmp_data[i76]] = moduleInstance->v_y_data[i77 +
        y_sizes_idx_0 * (i75 + i76)];
    }
  }

  for (i75 = 0; i75 < 6; i75++) {
    obj->theta[i75] += dtheta[i75];
  }

  /*  Update Covariance */
  for (i75 = 0; i75 < 2; i75++) {
    Pa[i75] = (real_T)Pa_sizes[i75];
  }

  st.site = &sf_emlrtRSI;
  b_eye(&st, Pa, moduleInstance->j_tmp_data, tmp_sizes);
  I_sizes[0] = tmp_sizes[0];
  I_sizes[1] = tmp_sizes[1];
  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    moduleInstance->c_I_data[i75] = moduleInstance->j_tmp_data[i75];
  }

  st.site = &tf_emlrtRSI;
  b_st.site = &he_emlrtRSI;
  if (!(K_sizes[1] == H_sizes[0])) {
    if ((K_sizes[0] == 1) && (K_sizes[1] == 1)) {
      for (i75 = 0; i75 < 45; i75++) {
        p_u[i75] = cv37[i75];
      }

      q_y = NULL;
      m18 = emlrtCreateCharArray(2, iv120);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &p_u[0]);
      emlrtAssign(&q_y, m18);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, q_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        o_u[i75] = cv36[i75];
      }

      p_y = NULL;
      m18 = emlrtCreateCharArray(2, iv119);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &o_u[0]);
      emlrtAssign(&p_y, m18);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, p_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((K_sizes[1] == 1) || (H_sizes[0] == 1)) {
    b_C_sizes[0] = K_sizes[0];
    b_C_sizes[1] = 21;
    loop_ub = K_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      for (i76 = 0; i76 < 21; i76++) {
        o_C_data[i75 + b_C_sizes[0] * i76] = 0.0;
        b_loop_ub = K_sizes[1];
        for (i77 = 0; i77 < b_loop_ub; i77++) {
          o_C_data[i75 + b_C_sizes[0] * i76] += moduleInstance->b_K_data[i75 +
            K_sizes[0] * i77] * H_data[i77 + H_sizes[0] * i76];
        }
      }
    }
  } else {
    b_C_sizes[0] = (int8_T)K_sizes[0];
    b_C_sizes[1] = 21;
    for (i75 = 0; i75 < 21; i75++) {
      loop_ub = b_C_sizes[0];
      for (i76 = 0; i76 < loop_ub; i76++) {
        o_C_data[i76 + b_C_sizes[0] * i75] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((K_sizes[0] < 1) || (K_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)K_sizes[0];
      n_t = (ptrdiff_t)21;
      k_t = (ptrdiff_t)K_sizes[1];
      lda_t = (ptrdiff_t)K_sizes[0];
      ldb_t = (ptrdiff_t)K_sizes[1];
      ldc_t = (ptrdiff_t)K_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->b_K_data[0], &lda_t, &H_data[0], &ldb_t, &Xdim,
            &o_C_data[0], &ldc_t);
    }
  }

  for (i75 = 0; i75 < 2; i75++) {
    dX_sizes[i75] = I_sizes[i75];
    y_sizes[i75] = b_C_sizes[i75];
  }

  emlrtSizeEqCheckNDR2012b(dX_sizes, y_sizes, &m_emlrtECI, sp);
  st.site = &tf_emlrtRSI;
  b_st.site = &he_emlrtRSI;
  if (!(K_sizes[1] == H_sizes[0])) {
    if ((K_sizes[0] == 1) && (K_sizes[1] == 1)) {
      for (i75 = 0; i75 < 45; i75++) {
        r_u[i75] = cv37[i75];
      }

      s_y = NULL;
      m18 = emlrtCreateCharArray(2, iv122);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &r_u[0]);
      emlrtAssign(&s_y, m18);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, s_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        q_u[i75] = cv36[i75];
      }

      r_y = NULL;
      m18 = emlrtCreateCharArray(2, iv121);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &q_u[0]);
      emlrtAssign(&r_y, m18);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, r_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((K_sizes[1] == 1) || (H_sizes[0] == 1)) {
    c_C_sizes[0] = K_sizes[0];
    c_C_sizes[1] = 21;
    loop_ub = K_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      for (i76 = 0; i76 < 21; i76++) {
        p_C_data[i75 + c_C_sizes[0] * i76] = 0.0;
        b_loop_ub = K_sizes[1];
        for (i77 = 0; i77 < b_loop_ub; i77++) {
          p_C_data[i75 + c_C_sizes[0] * i76] += moduleInstance->b_K_data[i75 +
            K_sizes[0] * i77] * H_data[i77 + H_sizes[0] * i76];
        }
      }
    }
  } else {
    c_C_sizes[0] = (int8_T)K_sizes[0];
    c_C_sizes[1] = 21;
    for (i75 = 0; i75 < 21; i75++) {
      loop_ub = c_C_sizes[0];
      for (i76 = 0; i76 < loop_ub; i76++) {
        p_C_data[i76 + c_C_sizes[0] * i75] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((K_sizes[0] < 1) || (K_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)K_sizes[0];
      n_t = (ptrdiff_t)21;
      k_t = (ptrdiff_t)K_sizes[1];
      lda_t = (ptrdiff_t)K_sizes[0];
      ldb_t = (ptrdiff_t)K_sizes[1];
      ldc_t = (ptrdiff_t)K_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->b_K_data[0], &lda_t, &H_data[0], &ldb_t, &Xdim,
            &p_C_data[0], &ldc_t);
    }
  }

  for (i75 = 0; i75 < 2; i75++) {
    dX_sizes[i75] = I_sizes[i75];
    y_sizes[i75] = c_C_sizes[i75];
  }

  emlrtSizeEqCheckNDR2012b(dX_sizes, y_sizes, &n_emlrtECI, sp);
  st.site = &tf_emlrtRSI;
  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    o_C_data[i75] = moduleInstance->c_I_data[i75] - o_C_data[i75];
  }

  b_st.site = &he_emlrtRSI;
  if (!(21 == Pa_sizes[0])) {
    if ((Pa_sizes[0] == 1) && (Pa_sizes[1] == 1)) {
      for (i75 = 0; i75 < 45; i75++) {
        t_u[i75] = cv37[i75];
      }

      u_y = NULL;
      m18 = emlrtCreateCharArray(2, iv124);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &t_u[0]);
      emlrtAssign(&u_y, m18);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, u_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        s_u[i75] = cv36[i75];
      }

      t_y = NULL;
      m18 = emlrtCreateCharArray(2, iv123);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &s_u[0]);
      emlrtAssign(&t_y, m18);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, t_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if (Pa_sizes[0] == 1) {
    i = tmp_sizes[0];
    C_sizes = Pa_sizes[1];
    loop_ub = tmp_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = Pa_sizes[1];
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        moduleInstance->l_C_data[i75 + i * i76] = 0.0;
        for (i77 = 0; i77 < 21; i77++) {
          moduleInstance->l_C_data[i75 + i * i76] += o_C_data[i75 + tmp_sizes[0]
            * i77] * moduleInstance->e_Pa_data[i77 + i76];
        }
      }
    }
  } else {
    i = (uint8_T)tmp_sizes[0];
    C_sizes = (uint8_T)Pa_sizes[1];
    loop_ub = (uint8_T)Pa_sizes[1];
    for (i75 = 0; i75 < loop_ub; i75++) {
      for (i76 = 0; i76 < i; i76++) {
        moduleInstance->l_C_data[i76 + i * i75] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((tmp_sizes[0] < 1) || (Pa_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)tmp_sizes[0];
      n_t = (ptrdiff_t)Pa_sizes[1];
      k_t = (ptrdiff_t)21;
      lda_t = (ptrdiff_t)tmp_sizes[0];
      ldb_t = (ptrdiff_t)21;
      ldc_t = (ptrdiff_t)tmp_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &o_C_data[0], &lda_t,
            &moduleInstance->e_Pa_data[0], &ldb_t, &Xdim,
            &moduleInstance->l_C_data[0], &ldc_t);
    }
  }

  st.site = &tf_emlrtRSI;
  c_loop_ub = tmp_sizes[1];
  loop_ub = tmp_sizes[0];
  for (i75 = 0; i75 < loop_ub; i75++) {
    b_loop_ub = I_sizes[1];
    for (i76 = 0; i76 < b_loop_ub; i76++) {
      h_b_data[i76 + c_loop_ub * i75] = moduleInstance->c_I_data[i75 + I_sizes[0]
        * i76] - p_C_data[i75 + c_C_sizes[0] * i76];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(C_sizes == 21)) {
    if ((i == 1) && (C_sizes == 1)) {
      for (i75 = 0; i75 < 45; i75++) {
        v_u[i75] = cv37[i75];
      }

      w_y = NULL;
      m18 = emlrtCreateCharArray(2, iv126);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &v_u[0]);
      emlrtAssign(&w_y, m18);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, w_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        u_u[i75] = cv36[i75];
      }

      v_y = NULL;
      m18 = emlrtCreateCharArray(2, iv125);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &u_u[0]);
      emlrtAssign(&v_y, m18);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, v_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if (C_sizes == 1) {
    d_C_sizes[0] = i;
    d_C_sizes[1] = tmp_sizes[0];
    for (i75 = 0; i75 < i; i75++) {
      loop_ub = tmp_sizes[0];
      for (i76 = 0; i76 < loop_ub; i76++) {
        moduleInstance->m_C_data[i75 + i * i76] = 0.0;
        i77 = 0;
        while (i77 <= 0) {
          moduleInstance->m_C_data[i75 + i * i76] += moduleInstance->
            l_C_data[i75] * h_b_data[c_loop_ub * i76];
          i77 = 1;
        }
      }
    }
  } else {
    d_C_sizes[0] = (uint8_T)i;
    d_C_sizes[1] = (uint8_T)tmp_sizes[0];
    loop_ub = (uint8_T)tmp_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = (uint8_T)i;
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        moduleInstance->m_C_data[i76 + (uint8_T)i * i75] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((i < 1) || (tmp_sizes[0] < 1) || (C_sizes < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)i;
      n_t = (ptrdiff_t)tmp_sizes[0];
      k_t = (ptrdiff_t)C_sizes;
      lda_t = (ptrdiff_t)i;
      ldb_t = (ptrdiff_t)C_sizes;
      ldc_t = (ptrdiff_t)i;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->l_C_data[0], &lda_t, &h_b_data[0], &ldb_t, &Xdim,
            &moduleInstance->m_C_data[0], &ldc_t);
    }
  }

  st.site = &tf_emlrtRSI;
  loop_ub = K_sizes[0] * K_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    moduleInstance->e_a_data[i75] = moduleInstance->b_K_data[i75];
  }

  loop_ub = N_sizes[0] * N_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    moduleInstance->e_b_data[i75] = b_N_data[i75];
  }

  b_st.site = &he_emlrtRSI;
  if (!(K_sizes[1] == N_sizes[0])) {
    if (((K_sizes[0] == 1) && (K_sizes[1] == 1)) || ((N_sizes[0] == 1) &&
         (N_sizes[1] == 1))) {
      for (i75 = 0; i75 < 45; i75++) {
        x_u[i75] = cv37[i75];
      }

      y_y = NULL;
      m18 = emlrtCreateCharArray(2, iv128);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &x_u[0]);
      emlrtAssign(&y_y, m18);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, y_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        w_u[i75] = cv36[i75];
      }

      x_y = NULL;
      m18 = emlrtCreateCharArray(2, iv127);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &w_u[0]);
      emlrtAssign(&x_y, m18);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, x_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((K_sizes[1] == 1) || (N_sizes[0] == 1)) {
    y_sizes_idx_0 = K_sizes[0];
    y_sizes_idx_1 = N_sizes[1];
    loop_ub = K_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = N_sizes[1];
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        moduleInstance->w_y_data[i75 + y_sizes_idx_0 * i76] = 0.0;
        c_loop_ub = K_sizes[1];
        for (i77 = 0; i77 < c_loop_ub; i77++) {
          moduleInstance->w_y_data[i75 + y_sizes_idx_0 * i76] +=
            moduleInstance->b_K_data[i75 + K_sizes[0] * i77] * b_N_data[i77 +
            N_sizes[0] * i76];
        }
      }
    }
  } else {
    y_sizes_idx_0 = (uint8_T)K_sizes[0];
    y_sizes_idx_1 = (uint8_T)N_sizes[1];
    loop_ub = (uint8_T)N_sizes[1];
    for (i75 = 0; i75 < loop_ub; i75++) {
      for (i76 = 0; i76 < y_sizes_idx_0; i76++) {
        moduleInstance->w_y_data[i76 + y_sizes_idx_0 * i75] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((K_sizes[0] < 1) || (N_sizes[1] < 1) || (K_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)K_sizes[0];
      n_t = (ptrdiff_t)N_sizes[1];
      k_t = (ptrdiff_t)K_sizes[1];
      lda_t = (ptrdiff_t)K_sizes[0];
      ldb_t = (ptrdiff_t)K_sizes[1];
      ldc_t = (ptrdiff_t)K_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->e_a_data[0], &lda_t, &moduleInstance->e_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->w_y_data[0], &ldc_t);
    }
  }

  st.site = &tf_emlrtRSI;
  c_loop_ub = K_sizes[1];
  loop_ub = K_sizes[0];
  for (i75 = 0; i75 < loop_ub; i75++) {
    b_loop_ub = K_sizes[1];
    for (i76 = 0; i76 < b_loop_ub; i76++) {
      moduleInstance->e_b_data[i76 + c_loop_ub * i75] = moduleInstance->
        b_K_data[i75 + K_sizes[0] * i76];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(y_sizes_idx_1 == K_sizes[1])) {
    if (((y_sizes_idx_0 == 1) && (y_sizes_idx_1 == 1)) || ((K_sizes[1] == 1) &&
         (K_sizes[0] == 1))) {
      for (i75 = 0; i75 < 45; i75++) {
        ab_u[i75] = cv37[i75];
      }

      bb_y = NULL;
      m18 = emlrtCreateCharArray(2, iv130);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &ab_u[0]);
      emlrtAssign(&bb_y, m18);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, bb_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        y_u[i75] = cv36[i75];
      }

      ab_y = NULL;
      m18 = emlrtCreateCharArray(2, iv129);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &y_u[0]);
      emlrtAssign(&ab_y, m18);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, ab_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((y_sizes_idx_1 == 1) || (K_sizes[1] == 1)) {
    e_y_sizes[0] = y_sizes_idx_0;
    e_y_sizes[1] = K_sizes[0];
    for (i75 = 0; i75 < y_sizes_idx_0; i75++) {
      loop_ub = K_sizes[0];
      for (i76 = 0; i76 < loop_ub; i76++) {
        moduleInstance->x_y_data[i75 + y_sizes_idx_0 * i76] = 0.0;
        for (i77 = 0; i77 < y_sizes_idx_1; i77++) {
          moduleInstance->x_y_data[i75 + y_sizes_idx_0 * i76] +=
            moduleInstance->w_y_data[i75 + y_sizes_idx_0 * i77] *
            moduleInstance->e_b_data[i77 + c_loop_ub * i76];
        }
      }
    }
  } else {
    e_y_sizes[0] = (uint8_T)y_sizes_idx_0;
    e_y_sizes[1] = (uint8_T)K_sizes[0];
    loop_ub = (uint8_T)K_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = (uint8_T)y_sizes_idx_0;
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        moduleInstance->x_y_data[i76 + (uint8_T)y_sizes_idx_0 * i75] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((y_sizes_idx_0 < 1) || (K_sizes[0] < 1) || (y_sizes_idx_1 < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)y_sizes_idx_0;
      n_t = (ptrdiff_t)K_sizes[0];
      k_t = (ptrdiff_t)y_sizes_idx_1;
      lda_t = (ptrdiff_t)y_sizes_idx_0;
      ldb_t = (ptrdiff_t)y_sizes_idx_1;
      ldc_t = (ptrdiff_t)y_sizes_idx_0;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->w_y_data[0], &lda_t, &moduleInstance->e_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->x_y_data[0], &ldc_t);
    }
  }

  for (i75 = 0; i75 < 2; i75++) {
    y_sizes[i75] = d_C_sizes[i75];
    e_y[i75] = e_y_sizes[i75];
  }

  emlrtSizeEqCheckNDR2012b(y_sizes, e_y, &o_emlrtECI, sp);
  e_C_sizes[0] = d_C_sizes[0];
  e_C_sizes[1] = d_C_sizes[1];
  loop_ub = d_C_sizes[0] * d_C_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    moduleInstance->l_C_data[i75] = moduleInstance->m_C_data[i75] +
      moduleInstance->x_y_data[i75];
  }

  st.site = &tf_emlrtRSI;
  c_RIEKF_Store_Covariance(moduleInstance, &st, obj, moduleInstance->l_C_data,
    e_C_sizes);

  /*  Joseph update form */
}

static void c_mrdivide(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance,
  const emlrtStack *sp, real_T b_A_data[], int32_T A_sizes[2], real_T b_B_data[],
  int32_T B_sizes[2], real_T jb_y_data[], int32_T y_sizes[2])
{
  emlrtStack st;
  int32_T i78;
  real_T c_B_data[3600];
  const mxArray *y;
  char_T u[21];
  static char_T cv39[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'd', 'i', 'm', 'a', 'g', 'r', 'e', 'e' };

  int32_T b_B_sizes[2];
  int32_T loop_ub;
  const mxArray *m19;
  static const int32_T iv131[2] = { 1, 21 };

  int32_T b_loop_ub;
  int32_T b_A_sizes[2];
  int32_T i79;
  int32_T tmp_sizes[2];
  st.prev = sp;
  st.tls = sp->tls;
  if (B_sizes[1] != A_sizes[1]) {
    for (i78 = 0; i78 < 21; i78++) {
      u[i78] = cv39[i78];
    }

    y = NULL;
    m19 = emlrtCreateCharArray(2, iv131);
    emlrtInitCharArrayR2013a(sp, 21, m19, &u[0]);
    emlrtAssign(&y, m19);
    st.site = &uf_emlrtRSI;
    g_error(&st, message(&st, y, &k_emlrtMCI), &k_emlrtMCI);
  }

  if ((A_sizes[0] == 0) || (A_sizes[1] == 0) || ((B_sizes[0] == 0) || (B_sizes[1]
        == 0))) {
    y_sizes[0] = (int8_T)A_sizes[0];
    y_sizes[1] = (int8_T)B_sizes[0];
    loop_ub = (int8_T)A_sizes[0] * (int8_T)B_sizes[0];
    for (i78 = 0; i78 < loop_ub; i78++) {
      jb_y_data[i78] = 0.0;
    }
  } else if (B_sizes[0] == B_sizes[1]) {
    st.site = &uf_emlrtRSI;
    c_lusolve(&st, b_B_data, B_sizes, b_A_data, A_sizes, jb_y_data, y_sizes);
  } else {
    b_B_sizes[0] = B_sizes[1];
    b_B_sizes[1] = B_sizes[0];
    loop_ub = B_sizes[0];
    for (i78 = 0; i78 < loop_ub; i78++) {
      b_loop_ub = B_sizes[1];
      for (i79 = 0; i79 < b_loop_ub; i79++) {
        c_B_data[i79 + b_B_sizes[0] * i78] = b_B_data[i78 + B_sizes[0] * i79];
      }
    }

    b_A_sizes[0] = A_sizes[1];
    b_A_sizes[1] = A_sizes[0];
    loop_ub = A_sizes[0];
    for (i78 = 0; i78 < loop_ub; i78++) {
      b_loop_ub = A_sizes[1];
      for (i79 = 0; i79 < b_loop_ub; i79++) {
        moduleInstance->A_data[i79 + b_A_sizes[0] * i78] = b_A_data[i78 +
          A_sizes[0] * i79];
      }
    }

    st.site = &uf_emlrtRSI;
    qrsolve(moduleInstance, &st, c_B_data, b_B_sizes, moduleInstance->A_data,
            b_A_sizes, moduleInstance->l_tmp_data, tmp_sizes);
    y_sizes[0] = tmp_sizes[1];
    y_sizes[1] = tmp_sizes[0];
    loop_ub = tmp_sizes[0];
    for (i78 = 0; i78 < loop_ub; i78++) {
      b_loop_ub = tmp_sizes[1];
      for (i79 = 0; i79 < b_loop_ub; i79++) {
        jb_y_data[i79 + y_sizes[0] * i78] = moduleInstance->l_tmp_data[i78 +
          tmp_sizes[0] * i79];
      }
    }
  }
}

static void c_lusolve(const emlrtStack *sp, real_T b_A_data[], int32_T A_sizes[2],
                      real_T b_B_data[], int32_T B_sizes[2], real_T X_data[],
                      int32_T X_sizes[2])
{
  emlrtStack st;
  emlrtStack b_st;
  int32_T b_A_sizes[2];
  int32_T loop_ub;
  int32_T jp;
  real_T c_A_data[3600];
  int32_T ipiv_data[60];
  int32_T ipiv_sizes[2];
  int32_T xi;
  real_T temp;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &vf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_A_sizes[0] = A_sizes[0];
  b_A_sizes[1] = A_sizes[1];
  loop_ub = A_sizes[0] * A_sizes[1];
  for (jp = 0; jp < loop_ub; jp++) {
    c_A_data[jp] = b_A_data[jp];
  }

  b_st.site = &xf_emlrtRSI;
  xgetrf(&b_st, A_sizes[1], A_sizes[1], c_A_data, b_A_sizes, A_sizes[1],
         ipiv_data, ipiv_sizes, &loop_ub);
  if (loop_ub > 0) {
    b_st.site = &wf_emlrtRSI;
    warn_singular(&b_st);
  }

  X_sizes[0] = B_sizes[0];
  X_sizes[1] = B_sizes[1];
  loop_ub = B_sizes[0] * B_sizes[1];
  for (jp = 0; jp < loop_ub; jp++) {
    X_data[jp] = b_B_data[jp];
  }

  b_st.site = &yf_emlrtRSI;
  xtrsm(B_sizes[0], A_sizes[1], c_A_data, A_sizes[1], X_data, B_sizes[0]);
  b_st.site = &ag_emlrtRSI;
  b_xtrsm(B_sizes[0], A_sizes[1], c_A_data, A_sizes[1], X_data, B_sizes[0]);
  for (loop_ub = A_sizes[1] - 2; loop_ub + 1 > 0; loop_ub--) {
    if (ipiv_data[loop_ub] != loop_ub + 1) {
      jp = ipiv_data[loop_ub] - 1;
      b_st.site = &bg_emlrtRSI;
      for (xi = 0; xi + 1 <= B_sizes[0]; xi++) {
        temp = X_data[xi + X_sizes[0] * loop_ub];
        X_data[xi + X_sizes[0] * loop_ub] = X_data[xi + X_sizes[0] * jp];
        X_data[xi + X_sizes[0] * jp] = temp;
      }
    }
  }
}

static void c_error(const emlrtStack *sp)
{
  emlrtStack st;
  int32_T i80;
  const mxArray *y;
  char_T u[12];
  static char_T cv40[12] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'm',
    'e', 'm' };

  const mxArray *m20;
  static const int32_T iv132[2] = { 1, 12 };

  st.prev = sp;
  st.tls = sp->tls;
  for (i80 = 0; i80 < 12; i80++) {
    u[i80] = cv40[i80];
  }

  y = NULL;
  m20 = emlrtCreateCharArray(2, iv132);
  emlrtInitCharArrayR2013a(sp, 12, m20, &u[0]);
  emlrtAssign(&y, m20);
  st.site = &al_emlrtRSI;
  g_error(&st, message(&st, y, &emlrtMCI), &emlrtMCI);
}

static void d_error(const emlrtStack *sp, int32_T varargin_2)
{
  emlrtStack st;
  int32_T i81;
  const mxArray *y;
  char_T u[33];
  static char_T cv41[33] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'L', 'A', 'P', 'A', 'C', 'K', 'C', 'a', 'l', 'l', 'E',
    'r', 'r', 'o', 'r', 'I', 'n', 'f', 'o' };

  const mxArray *m21;
  static const int32_T iv133[2] = { 1, 33 };

  const mxArray *b_y;
  char_T b_u[19];
  static char_T cv42[19] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd', 'g',
    'e', 't', 'r', 'f', '_', 'w', 'o', 'r', 'k' };

  static const int32_T iv134[2] = { 1, 19 };

  const mxArray *c_y;
  st.prev = sp;
  st.tls = sp->tls;
  for (i81 = 0; i81 < 33; i81++) {
    u[i81] = cv41[i81];
  }

  y = NULL;
  m21 = emlrtCreateCharArray(2, iv133);
  emlrtInitCharArrayR2013a(sp, 33, m21, &u[0]);
  emlrtAssign(&y, m21);
  for (i81 = 0; i81 < 19; i81++) {
    b_u[i81] = cv42[i81];
  }

  b_y = NULL;
  m21 = emlrtCreateCharArray(2, iv134);
  emlrtInitCharArrayR2013a(sp, 19, m21, &b_u[0]);
  emlrtAssign(&b_y, m21);
  c_y = NULL;
  m21 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m21) = varargin_2;
  emlrtAssign(&c_y, m21);
  st.site = &al_emlrtRSI;
  g_error(&st, c_message(&st, y, b_y, c_y, &emlrtMCI), &emlrtMCI);
}

static void eml_signed_integer_colon(const emlrtStack *sp, int32_T b, int32_T
  jb_y_data[], int32_T y_sizes[2])
{
  emlrtStack st;
  emlrtStack b_st;
  int32_T n;
  int32_T yk;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (b < 1) {
    n = 0;
  } else {
    n = b;
  }

  y_sizes[0] = 1;
  y_sizes[1] = n;
  if (n > 0) {
    jb_y_data[0] = 1;
    yk = 1;
    st.site = &yh_emlrtRSI;
    if ((!(2 > n)) && (n > 2147483646)) {
      b_st.site = &be_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 1; k + 1 <= n; k++) {
      yk++;
      jb_y_data[k] = yk;
    }
  }
}

static void qrsolve(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance, const
                    emlrtStack *sp, real_T b_A_data[], int32_T A_sizes[2],
                    real_T b_B_data[], int32_T B_sizes[2], real_T Y_data[],
                    int32_T Y_sizes[2])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  int32_T b_A_sizes[2];
  int32_T info;
  int32_T i;
  real_T c_A_data[3600];
  real_T tau_data[60];
  int32_T jpvt_data[60];
  int32_T jpvt_sizes[2];
  int32_T rankR;
  ptrdiff_t nrc_t;
  int32_T c_A_sizes;
  ptrdiff_t info_t;
  int32_T j;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_A_sizes[0] = A_sizes[0];
  b_A_sizes[1] = A_sizes[1];
  info = A_sizes[0] * A_sizes[1];
  for (i = 0; i < info; i++) {
    c_A_data[i] = b_A_data[i];
  }

  st.site = &fi_emlrtRSI;
  xgeqp3(&st, c_A_data, b_A_sizes, tau_data, &info, jpvt_data, jpvt_sizes);
  st.site = &gi_emlrtRSI;
  rankR = rankFromQR(&st, c_A_data, b_A_sizes);
  st.site = &hi_emlrtRSI;
  Y_sizes[0] = (int8_T)b_A_sizes[1];
  Y_sizes[1] = (int8_T)B_sizes[1];
  info = (int8_T)b_A_sizes[1] * (int8_T)B_sizes[1];
  for (i = 0; i < info; i++) {
    Y_data[i] = 0.0;
  }

  b_st.site = &xj_emlrtRSI;
  c_st.site = &ck_emlrtRSI;
  info = B_sizes[0] * B_sizes[1];
  for (i = 0; i < info; i++) {
    moduleInstance->B_data[i] = b_B_data[i];
  }

  if ((!((b_A_sizes[0] == 0) || (b_A_sizes[1] == 0))) && (!((B_sizes[0] == 0) ||
        (B_sizes[1] == 0)))) {
    nrc_t = (ptrdiff_t)B_sizes[0];
    if (b_A_sizes[0] < b_A_sizes[1]) {
      c_A_sizes = b_A_sizes[0];
    } else {
      c_A_sizes = b_A_sizes[1];
    }

    info_t = LAPACKE_dormqr(102, 'L', 'T', nrc_t, (ptrdiff_t)B_sizes[1],
      (ptrdiff_t)c_A_sizes, &c_A_data[0], (ptrdiff_t)b_A_sizes[0], &tau_data[0],
      &moduleInstance->B_data[0], nrc_t);
    info = (int32_T)info_t;
    d_st.site = &ek_emlrtRSI;
    if (info != 0) {
      if (info == -1010) {
        e_st.site = &qh_emlrtRSI;
        c_error(&e_st);
      } else {
        e_st.site = &rh_emlrtRSI;
        f_error(&e_st, info);
      }
    }
  }

  b_st.site = &yj_emlrtRSI;
  for (info = 0; info + 1 <= B_sizes[1]; info++) {
    b_st.site = &ak_emlrtRSI;
    if ((!(1 > rankR)) && (rankR > 2147483646)) {
      c_st.site = &be_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (i = 0; i + 1 <= rankR; i++) {
      Y_data[(jpvt_data[i] + Y_sizes[0] * info) - 1] = moduleInstance->B_data[i
        + B_sizes[0] * info];
    }

    for (j = rankR - 1; j + 1 > 0; j--) {
      Y_data[(jpvt_data[j] + Y_sizes[0] * info) - 1] /= c_A_data[j + b_A_sizes[0]
        * j];
      b_st.site = &bk_emlrtRSI;
      for (i = 0; i + 1 <= j; i++) {
        Y_data[(jpvt_data[i] + Y_sizes[0] * info) - 1] -= Y_data[(jpvt_data[j] +
          Y_sizes[0] * info) - 1] * c_A_data[i + b_A_sizes[0] * j];
      }
    }
  }
}

static void e_error(const emlrtStack *sp, int32_T varargin_2)
{
  emlrtStack st;
  int32_T i82;
  const mxArray *y;
  char_T u[33];
  static char_T cv43[33] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'L', 'A', 'P', 'A', 'C', 'K', 'C', 'a', 'l', 'l', 'E',
    'r', 'r', 'o', 'r', 'I', 'n', 'f', 'o' };

  const mxArray *m22;
  static const int32_T iv135[2] = { 1, 33 };

  const mxArray *b_y;
  char_T b_u[14];
  static char_T cv44[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd', 'g',
    'e', 'q', 'p', '3' };

  static const int32_T iv136[2] = { 1, 14 };

  const mxArray *c_y;
  st.prev = sp;
  st.tls = sp->tls;
  for (i82 = 0; i82 < 33; i82++) {
    u[i82] = cv43[i82];
  }

  y = NULL;
  m22 = emlrtCreateCharArray(2, iv135);
  emlrtInitCharArrayR2013a(sp, 33, m22, &u[0]);
  emlrtAssign(&y, m22);
  for (i82 = 0; i82 < 14; i82++) {
    b_u[i82] = cv44[i82];
  }

  b_y = NULL;
  m22 = emlrtCreateCharArray(2, iv136);
  emlrtInitCharArrayR2013a(sp, 14, m22, &b_u[0]);
  emlrtAssign(&b_y, m22);
  c_y = NULL;
  m22 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m22) = varargin_2;
  emlrtAssign(&c_y, m22);
  st.site = &al_emlrtRSI;
  g_error(&st, c_message(&st, y, b_y, c_y, &emlrtMCI), &emlrtMCI);
}

static int32_T rankFromQR(const emlrtStack *sp, real_T b_A_data[], int32_T
  A_sizes[2])
{
  int32_T r;
  emlrtStack st;
  emlrtStack b_st;
  real_T tol;
  int32_T minmn;
  int32_T maxmn;
  const mxArray *y;
  char_T rfmt[6];
  static char_T cv45[6] = { '%', '1', '4', '.', '6', 'e' };

  const mxArray *m23;
  static const int32_T iv137[2] = { 1, 6 };

  const mxArray *b_y;
  char_T cv46[14];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  r = 0;
  tol = 0.0;
  if (A_sizes[0] < A_sizes[1]) {
    minmn = A_sizes[0];
    maxmn = A_sizes[1];
  } else {
    minmn = A_sizes[1];
    maxmn = A_sizes[0];
  }

  if (minmn > 0) {
    tol = (real_T)maxmn * muDoubleScalarAbs(b_A_data[0]) *
      2.2204460492503131E-16;
    while ((r < minmn) && (muDoubleScalarAbs(b_A_data[r + A_sizes[0] * r]) >=
                           tol)) {
      r++;
    }
  }

  if (r < minmn) {
    st.site = &vj_emlrtRSI;
    for (minmn = 0; minmn < 6; minmn++) {
      rfmt[minmn] = cv45[minmn];
    }

    y = NULL;
    m23 = emlrtCreateCharArray(2, iv137);
    emlrtInitCharArrayR2013a(&st, 6, m23, &rfmt[0]);
    emlrtAssign(&y, m23);
    b_y = NULL;
    m23 = emlrtCreateDoubleScalar(tol);
    emlrtAssign(&b_y, m23);
    b_st.site = &jl_emlrtRSI;
    emlrt_marshallIn(&b_st, b_sprintf(&b_st, y, b_y, &s_emlrtMCI), "sprintf",
                     cv46);
    st.site = &wj_emlrtRSI;
    b_warning(&st, r, cv46);
  }

  return r;
}

static void b_warning(const emlrtStack *sp, int32_T varargin_1, char_T
                      varargin_2[14])
{
  emlrtStack st;
  int32_T i83;
  char_T msgID[32];
  static char_T cv47[32] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'r', 'a', 'n', 'k', 'D', 'e', 'f', 'i', 'c', 'i', 'e', 'n',
    't', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *y;
  char_T u[7];
  static char_T cv48[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *m24;
  static const int32_T iv138[2] = { 1, 7 };

  const mxArray *b_y;
  char_T b_u[7];
  static char_T cv49[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  static const int32_T iv139[2] = { 1, 7 };

  const mxArray *c_y;
  static const int32_T iv140[2] = { 1, 32 };

  const mxArray *d_y;
  const mxArray *e_y;
  static const int32_T iv141[2] = { 1, 14 };

  st.prev = sp;
  st.tls = sp->tls;
  for (i83 = 0; i83 < 32; i83++) {
    msgID[i83] = cv47[i83];
  }

  for (i83 = 0; i83 < 7; i83++) {
    u[i83] = cv48[i83];
  }

  y = NULL;
  m24 = emlrtCreateCharArray(2, iv138);
  emlrtInitCharArrayR2013a(sp, 7, m24, &u[0]);
  emlrtAssign(&y, m24);
  for (i83 = 0; i83 < 7; i83++) {
    b_u[i83] = cv49[i83];
  }

  b_y = NULL;
  m24 = emlrtCreateCharArray(2, iv139);
  emlrtInitCharArrayR2013a(sp, 7, m24, &b_u[0]);
  emlrtAssign(&b_y, m24);
  c_y = NULL;
  m24 = emlrtCreateCharArray(2, iv140);
  emlrtInitCharArrayR2013a(sp, 32, m24, &msgID[0]);
  emlrtAssign(&c_y, m24);
  d_y = NULL;
  m24 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m24) = varargin_1;
  emlrtAssign(&d_y, m24);
  e_y = NULL;
  m24 = emlrtCreateCharArray(2, iv141);
  emlrtInitCharArrayR2013a(sp, 14, m24, &varargin_2[0]);
  emlrtAssign(&e_y, m24);
  st.site = &il_emlrtRSI;
  b_feval(&st, y, c_feval(&st, b_y, c_y, d_y, e_y, &l_emlrtMCI), &m_emlrtMCI);
}

static void f_error(const emlrtStack *sp, int32_T varargin_2)
{
  emlrtStack st;
  int32_T i84;
  const mxArray *y;
  char_T u[33];
  static char_T cv50[33] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'L', 'A', 'P', 'A', 'C', 'K', 'C', 'a', 'l', 'l', 'E',
    'r', 'r', 'o', 'r', 'I', 'n', 'f', 'o' };

  const mxArray *m25;
  static const int32_T iv142[2] = { 1, 33 };

  const mxArray *b_y;
  char_T b_u[14];
  static char_T cv51[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd', 'o',
    'r', 'm', 'q', 'r' };

  static const int32_T iv143[2] = { 1, 14 };

  const mxArray *c_y;
  st.prev = sp;
  st.tls = sp->tls;
  for (i84 = 0; i84 < 33; i84++) {
    u[i84] = cv50[i84];
  }

  y = NULL;
  m25 = emlrtCreateCharArray(2, iv142);
  emlrtInitCharArrayR2013a(sp, 33, m25, &u[0]);
  emlrtAssign(&y, m25);
  for (i84 = 0; i84 < 14; i84++) {
    b_u[i84] = cv51[i84];
  }

  b_y = NULL;
  m25 = emlrtCreateCharArray(2, iv143);
  emlrtInitCharArrayR2013a(sp, 14, m25, &b_u[0]);
  emlrtAssign(&b_y, m25);
  c_y = NULL;
  m25 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m25) = varargin_2;
  emlrtAssign(&c_y, m25);
  st.site = &al_emlrtRSI;
  g_error(&st, c_message(&st, y, b_y, c_y, &emlrtMCI), &emlrtMCI);
}

static void RIEKF_Update_Landmarks(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T
  measured_landmarks_data[], int32_T measured_landmarks_sizes[2])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  boolean_T b2;
  real_T R_pred[9];
  real_T unusedUd[3];
  real_T unusedUe[3];
  real_T unusedUf[3];
  real_T unusedU10[3];
  real_T unusedU11[3];
  real_T unusedU12[3];
  real_T lm_cnt;
  int32_T i;
  real_T Xdim;
  boolean_T x[20];
  static char_T cv52[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  int32_T i85;
  int32_T F_sizes_idx_0;
  real_T d6;
  int8_T ii_sizes[2];
  int32_T Y_sizes;
  int32_T loop_ub;
  int32_T b_loop_ub;
  boolean_T exitg2;
  int32_T H_sizes[2];
  real_T Y_data[400];
  real_T H_data[3600];
  int32_T N_sizes[2];
  int32_T PI_sizes[2];
  real_T b_N_data[3600];
  real_T beta1;
  int32_T new_landmarks_sizes_idx_1;
  int32_T b_index;
  real_T new_landmarks_data[40];
  real_T o_tmp_data[400];
  int32_T ii_data[20];
  int32_T b_ii_sizes[2];
  boolean_T exitg1;
  boolean_T guard1 = false;
  int32_T i86;
  int8_T id_data[20];
  int32_T i87;
  int32_T i88;
  int32_T iv144[1];
  int32_T measured_landmarks[1];
  real_T b_measured_landmarks_data[4];
  real_T b[9];
  real_T p_tmp_data[345];
  int32_T i89;
  int8_T Y2_data[100];
  real_T q_tmp_data[108];
  real_T b_varargin_2_data[345];
  const mxArray *y;
  char_T u[39];
  static char_T cv53[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  const mxArray *m26;
  static const int32_T iv145[2] = { 1, 39 };

  const mxArray *b_y;
  char_T b_u[39];
  static const int32_T iv146[2] = { 1, 39 };

  int32_T varargin_1_sizes[2];
  real_T H2_data[300];
  int8_T i90;
  int32_T tmp_sizes[2];
  int8_T iv147[3];
  int32_T G_sizes_idx_0;
  int8_T r_tmp_data[60];
  int32_T b_sizes[2];
  real_T G_data[252];
  real_T g_b_data[363];
  int32_T y_sizes_idx_1;
  const mxArray *c_y;
  char_T c_u[21];
  static char_T cv54[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *d_y;
  char_T d_u[45];
  static char_T cv55[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  static const int32_T iv148[2] = { 1, 21 };

  static const int32_T iv149[2] = { 1, 45 };

  int32_T iv150[2];
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  real_T b_R_pred[9];
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  int32_T y_sizes[2];
  ptrdiff_t ldc_t;
  const mxArray *e_y;
  char_T e_u[21];
  const mxArray *f_y;
  char_T f_u[45];
  static const int32_T iv151[2] = { 1, 21 };

  static const int32_T iv152[2] = { 1, 45 };

  real_T n_C_data[252];
  real_T h_b_data[321];
  int16_T s_tmp_data[20];
  int16_T C_sizes[2];
  int32_T iv153[2];
  int32_T b_y_sizes[2];
  real_T t_tmp_data[321];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b2 = false;
  covrtLogFcn(moduleInstance->covInst, 0, 16);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 40);

  /*  Function to perform Right-Invariant EKF update from estimated */
  /*  landmark distance measurements             */
  st.site = &jk_emlrtRSI;
  RIEKF_Separate_State(moduleInstance, obj->X, obj->theta, R_pred, unusedUd,
                       unusedUe, unusedUf, unusedU10, unusedU11, unusedU12);

  /*  Determine sizes (needed for codegen), (TODO: there is probably a better way to do this) */
  lm_cnt = 0.0;
  i = 1;
  while (i - 1 <= measured_landmarks_sizes[1] - 1) {
    covrtLogFor(moduleInstance->covInst, 0, 0, 4, 1);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 41);
    emlrtDynamicBoundsCheckR2012b(1, 1, measured_landmarks_sizes[0],
      &ke_emlrtBCI, sp);
    emlrtDynamicBoundsCheckR2012b(i, 1, measured_landmarks_sizes[1],
      &xe_emlrtBCI, sp);
    for (i85 = 0; i85 < 20; i85++) {
      x[i85] = (obj->landmark_ids[i85] ==
                measured_landmarks_data[measured_landmarks_sizes[0] * (i - 1)]);
    }

    F_sizes_idx_0 = 0;
    for (i85 = 0; i85 < 2; i85++) {
      ii_sizes[i85] = 1;
    }

    b_loop_ub = 1;
    exitg2 = false;
    while ((!exitg2) && (b_loop_ub < 21)) {
      if (x[b_loop_ub - 1]) {
        F_sizes_idx_0 = 1;
        exitg2 = true;
      } else {
        b_loop_ub++;
      }
    }

    if (F_sizes_idx_0 == 0) {
      ii_sizes[1] = 0;
    }

    if (covrtLogIf(moduleInstance->covInst, 0, 0, 18, covrtLogMcdc
                   (moduleInstance->covInst, 0, 0, 10, !covrtLogCond
                    (moduleInstance->covInst, 0, 0, 12, ii_sizes[1] == 0)))) {
      covrtLogBasicBlock(moduleInstance->covInst, 0, 42);
      lm_cnt++;
    }

    i++;
    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst, 0, 0, 4, 0);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 43);
  Xdim = 7.0 + obj->num_landmarks;
  if (!(lm_cnt <= 20.0)) {
    st.site = &yk_emlrtRSI;
    g_error(&st, message(&st, b_emlrt_marshallOut(&st, cv52), &t_emlrtMCI),
            &t_emlrtMCI);
  }

  /*  TODO: change to constant variable */
  if (!(Xdim <= 20.0)) {
    st.site = &xk_emlrtRSI;
    g_error(&st, message(&st, b_emlrt_marshallOut(&st, cv52), &u_emlrtMCI),
            &u_emlrtMCI);
  }

  /*  TODO: change to constant variable */
  d6 = emlrtNonNegativeCheckR2012b(Xdim * lm_cnt, &jc_emlrtDCI, sp);
  Y_sizes = (int32_T)emlrtIntegerCheckR2012b(d6, &ic_emlrtDCI, sp);
  d6 = emlrtNonNegativeCheckR2012b(Xdim * lm_cnt, &jc_emlrtDCI, sp);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(d6, &ic_emlrtDCI, sp);
  for (i85 = 0; i85 < loop_ub; i85++) {
    Y_data[i85] = 0.0;
  }

  H_sizes[0] = (int32_T)(3.0 * lm_cnt);
  d6 = emlrtNonNegativeCheckR2012b((3.0 * (Xdim - 3.0) + 3.0) + 6.0,
    &ec_emlrtDCI, sp);
  H_sizes[1] = (int32_T)emlrtIntegerCheckR2012b(d6, &dc_emlrtDCI, sp);
  d6 = emlrtNonNegativeCheckR2012b((3.0 * (Xdim - 3.0) + 3.0) + 6.0,
    &ec_emlrtDCI, sp);
  loop_ub = (int32_T)(3.0 * lm_cnt) * (int32_T)emlrtIntegerCheckR2012b(d6,
    &dc_emlrtDCI, sp);
  for (i85 = 0; i85 < loop_ub; i85++) {
    H_data[i85] = 0.0;
  }

  d6 = 3.0 * lm_cnt;
  N_sizes[0] = (int32_T)d6;
  N_sizes[1] = (int32_T)d6;
  loop_ub = (int32_T)d6 * (int32_T)d6;
  for (i85 = 0; i85 < loop_ub; i85++) {
    b_N_data[i85] = 0.0;
  }

  PI_sizes[0] = (int32_T)(3.0 * lm_cnt);
  beta1 = emlrtNonNegativeCheckR2012b(Xdim * lm_cnt, &gc_emlrtDCI, sp);
  PI_sizes[1] = (int32_T)emlrtIntegerCheckR2012b(beta1, &fc_emlrtDCI, sp);
  beta1 = emlrtNonNegativeCheckR2012b(Xdim * lm_cnt, &gc_emlrtDCI, sp);
  loop_ub = (int32_T)(3.0 * lm_cnt) * (int32_T)emlrtIntegerCheckR2012b(beta1,
    &fc_emlrtDCI, sp);
  for (i85 = 0; i85 < loop_ub; i85++) {
    moduleInstance->PI_data[i85] = 0.0;
  }

  new_landmarks_sizes_idx_1 = (int32_T)emlrtNonNegativeCheckR2012b((real_T)
    (int32_T)((real_T)measured_landmarks_sizes[1] - lm_cnt), &hc_emlrtDCI, sp);
  loop_ub = (int32_T)emlrtNonNegativeCheckR2012b((real_T)(int32_T)((real_T)
    measured_landmarks_sizes[1] - lm_cnt), &hc_emlrtDCI, sp) << 2;
  for (i85 = 0; i85 < loop_ub; i85++) {
    new_landmarks_data[i85] = 0.0;
  }

  b_index = 0;

  /*  Stack landmark measurements for batch update */
  i = 0;
  while (i <= measured_landmarks_sizes[1] - 1) {
    covrtLogFor(moduleInstance->covInst, 0, 0, 5, 1);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 44);

    /*  Search to see if measured landmark id is in the list of */
    /*  static landmarks */
    emlrtDynamicBoundsCheckR2012b(1, 1, measured_landmarks_sizes[0],
      &je_emlrtBCI, sp);
    emlrtDynamicBoundsCheckR2012b(1 + i, 1, measured_landmarks_sizes[1],
      &oe_emlrtBCI, sp);
    for (i85 = 0; i85 < 20; i85++) {
      x[i85] = (obj->landmark_ids[i85] ==
                measured_landmarks_data[measured_landmarks_sizes[0] * i]);
    }

    F_sizes_idx_0 = 0;
    for (i85 = 0; i85 < 2; i85++) {
      b_ii_sizes[i85] = 1 + 19 * i85;
    }

    b_loop_ub = 1;
    exitg1 = false;
    while ((!exitg1) && (b_loop_ub < 21)) {
      guard1 = false;
      if (x[b_loop_ub - 1]) {
        F_sizes_idx_0++;
        ii_data[F_sizes_idx_0 - 1] = b_loop_ub;
        if (F_sizes_idx_0 >= 20) {
          exitg1 = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1) {
        b_loop_ub++;
      }
    }

    if (1 > F_sizes_idx_0) {
      i86 = 0;
    } else {
      i86 = F_sizes_idx_0;
    }

    loop_ub = b_ii_sizes[0] * i86;
    for (i85 = 0; i85 < loop_ub; i85++) {
      id_data[i85] = (int8_T)ii_data[i85];
    }

    if (1 > F_sizes_idx_0) {
      i87 = 0;
    } else {
      i87 = F_sizes_idx_0;
    }

    if (covrtLogIf(moduleInstance->covInst, 0, 0, 19, i87 == 0)) {
      covrtLogBasicBlock(moduleInstance->covInst, 0, 45);
      emlrtDynamicBoundsCheckR2012b(b_index + 1, 1, new_landmarks_sizes_idx_1,
        &ce_emlrtBCI, sp);
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, measured_landmarks_sizes[1],
        &ie_emlrtBCI, sp);
      if (!b2) {
        iv144[0] = 4;
        b2 = true;
      }

      measured_landmarks[0] = measured_landmarks_sizes[0];
      emlrtSubAssignSizeCheckR2012b(iv144, 1, measured_landmarks, 1, &s_emlrtECI,
        sp);
      loop_ub = measured_landmarks_sizes[0];
      for (i85 = 0; i85 < loop_ub; i85++) {
        b_measured_landmarks_data[i85] = measured_landmarks_data[i85 +
          measured_landmarks_sizes[0] * i];
      }

      for (i85 = 0; i85 < 4; i85++) {
        new_landmarks_data[i85 + (b_index << 2)] = b_measured_landmarks_data[i85];
      }

      b_index++;
    } else {
      covrtLogBasicBlock(moduleInstance->covInst, 0, 46);

      /*  makes codegen happy */
      /*  Create measurement model */
      if (2 > measured_landmarks_sizes[0]) {
        i85 = -4;
        i88 = 0;
      } else {
        i85 = -3;
        i88 = emlrtDynamicBoundsCheckR2012b(measured_landmarks_sizes[0], 1,
          measured_landmarks_sizes[0], &he_emlrtBCI, sp);
      }

      emlrtDynamicBoundsCheckR2012b(i + 1, 1, measured_landmarks_sizes[1],
        &ge_emlrtBCI, sp);
      beta1 = obj->num_landmarks;
      if (1.0 > beta1) {
        loop_ub = 0;
      } else {
        i89 = (int32_T)emlrtIntegerCheckR2012b(beta1, &cc_emlrtDCI, sp);
        loop_ub = emlrtDynamicBoundsCheckR2012b(i89, 1, 100, &fe_emlrtBCI, sp);
      }

      for (i89 = 0; i89 < loop_ub; i89++) {
        Y2_data[i89] = 0;
      }

      Y2_data[emlrtDynamicBoundsCheckR2012b((int32_T)id_data[0], 1, loop_ub,
        &pe_emlrtBCI, sp) - 1] = -1;
      lm_cnt = Xdim * ((1.0 + (real_T)i) - 1.0);
      b_ii_sizes[1] = (int32_T)muDoubleScalarFloor(Xdim - 1.0) + 1;
      b_loop_ub = (int32_T)muDoubleScalarFloor(Xdim - 1.0);
      for (i89 = 0; i89 <= b_loop_ub; i89++) {
        F_sizes_idx_0 = (int32_T)emlrtIntegerCheckR2012b(lm_cnt + (1.0 + (real_T)
          i89), &lc_emlrtDCI, sp);
        ii_data[i89] = emlrtDynamicBoundsCheckR2012b(F_sizes_idx_0, 1, Y_sizes,
          &qe_emlrtBCI, sp);
      }

      b_loop_ub = i88 - i85;
      for (i89 = 0; i89 <= b_loop_ub - 5; i89++) {
        q_tmp_data[i89] = measured_landmarks_data[((i85 + i89) +
          measured_landmarks_sizes[0] * i) + 4];
      }

      q_tmp_data[(i88 - i85) - 4] = 0.0;
      q_tmp_data[(i88 - i85) - 3] = 1.0;
      q_tmp_data[(i88 - i85) - 2] = 0.0;
      q_tmp_data[(i88 - i85) - 1] = 0.0;
      for (i89 = 0; i89 < loop_ub; i89++) {
        q_tmp_data[(i89 + i88) - i85] = (real_T)Y2_data[i89];
      }

      emlrtSizeEqCheck1DR2012b(b_ii_sizes[1], (i88 - i85) + loop_ub, &v_emlrtECI,
        sp);
      loop_ub = b_ii_sizes[1];
      for (i85 = 0; i85 < loop_ub; i85++) {
        Y_data[ii_data[i85] - 1] = q_tmp_data[i85];
      }

      beta1 = 3.0 * obj->num_landmarks;
      if (1.0 > beta1) {
        loop_ub = 0;
      } else {
        i85 = (int32_T)emlrtIntegerCheckR2012b(beta1, &bc_emlrtDCI, sp);
        loop_ub = emlrtDynamicBoundsCheckR2012b(i85, 1, 100, &ee_emlrtBCI, sp);
      }

      for (i85 = 0; i85 < loop_ub; i85++) {
        for (i88 = 0; i88 < 3; i88++) {
          H2_data[i88 + 3 * i85] = 0.0;
        }
      }

      eye(b);
      i85 = 3 * (id_data[0] - 1);
      for (i88 = 0; i88 < 3; i88++) {
        for (i89 = 0; i89 < 3; i89++) {
          H2_data[i89 + 3 * (emlrtDynamicBoundsCheckR2012b((i85 + i88) + 1, 1,
            loop_ub, &re_emlrtBCI, sp) - 1)] = b[i89 + 3 * i88];
        }
      }

      i90 = (int8_T)((int8_T)(3 * (int8_T)i) + 1);
      for (i85 = 0; i85 < 3; i85++) {
        iv147[i85] = (int8_T)((int8_T)emlrtDynamicBoundsCheckR2012b((int32_T)
          (int8_T)(i85 + i90), 1, H_sizes[0], &se_emlrtBCI, sp) - 1);
      }

      b_loop_ub = (int8_T)((int8_T)H_sizes[1] - 1);
      for (i85 = 0; i85 <= b_loop_ub; i85++) {
        r_tmp_data[i85] = (int8_T)i85;
      }

      eye(b);
      b_sizes[0] = 3;
      b_sizes[1] = 21 + loop_ub;
      for (i85 = 0; i85 < 3; i85++) {
        for (i88 = 0; i88 < 3; i88++) {
          g_b_data[i88 + 3 * i85] = 0.0;
        }
      }

      for (i85 = 0; i85 < 3; i85++) {
        for (i88 = 0; i88 < 3; i88++) {
          g_b_data[i88 + 3 * (i85 + 3)] = 0.0;
        }
      }

      for (i85 = 0; i85 < 3; i85++) {
        for (i88 = 0; i88 < 3; i88++) {
          g_b_data[i88 + 3 * (i85 + 6)] = -b[i88 + 3 * i85];
        }
      }

      for (i85 = 0; i85 < 3; i85++) {
        for (i88 = 0; i88 < 3; i88++) {
          g_b_data[i88 + 3 * (i85 + 9)] = 0.0;
        }
      }

      for (i85 = 0; i85 < 3; i85++) {
        for (i88 = 0; i88 < 3; i88++) {
          g_b_data[i88 + 3 * (i85 + 12)] = 0.0;
        }
      }

      for (i85 = 0; i85 < loop_ub; i85++) {
        for (i88 = 0; i88 < 3; i88++) {
          g_b_data[i88 + 3 * (i85 + 15)] = H2_data[i88 + 3 * i85];
        }
      }

      for (i85 = 0; i85 < 6; i85++) {
        for (i88 = 0; i88 < 3; i88++) {
          g_b_data[i88 + 3 * ((i85 + loop_ub) + 15)] = 0.0;
        }
      }

      iv150[0] = 3;
      iv150[1] = (int8_T)((int8_T)H_sizes[1] - 1) + 1;
      emlrtSubAssignSizeCheckR2012b(iv150, 2, b_sizes, 2, &u_emlrtECI, sp);
      loop_ub += 21;
      for (i85 = 0; i85 < loop_ub; i85++) {
        for (i88 = 0; i88 < 3; i88++) {
          H_data[iv147[i88] + H_sizes[0] * r_tmp_data[i85]] = g_b_data[i88 + 3 *
            i85];
        }
      }

      for (i85 = 0; i85 < 9; i85++) {
        b[i85] = obj->Ql[i85];
      }

      for (i85 = 0; i85 < 3; i85++) {
        for (i88 = 0; i88 < 3; i88++) {
          b_R_pred[i85 + 3 * i88] = 0.0;
          for (i89 = 0; i89 < 3; i89++) {
            b_R_pred[i85 + 3 * i88] += R_pred[i85 + 3 * i89] * b[i89 + 3 * i88];
          }
        }
      }

      i85 = 3 * i + 1;
      i88 = 3 * i + 1;
      for (i89 = 0; i89 < 3; i89++) {
        for (F_sizes_idx_0 = 0; F_sizes_idx_0 < 3; F_sizes_idx_0++) {
          b_N_data[(emlrtDynamicBoundsCheckR2012b(i89 + i85, 1, (int32_T)d6,
                     &te_emlrtBCI, sp) + (int32_T)d6 *
                    (emlrtDynamicBoundsCheckR2012b(F_sizes_idx_0 + i88, 1,
                      (int32_T)d6, &ue_emlrtBCI, sp) - 1)) - 1] = 0.0;
          for (b_loop_ub = 0; b_loop_ub < 3; b_loop_ub++) {
            b_N_data[(emlrtDynamicBoundsCheckR2012b(i89 + i85, 1, (int32_T)d6,
                       &te_emlrtBCI, sp) + (int32_T)d6 *
                      (emlrtDynamicBoundsCheckR2012b(F_sizes_idx_0 + i88, 1,
                        (int32_T)d6, &ue_emlrtBCI, sp) - 1)) - 1] = b_N_data
              [(emlrtDynamicBoundsCheckR2012b(i89 + i85, 1, (int32_T)d6,
                 &te_emlrtBCI, sp) + (int32_T)d6 *
                (emlrtDynamicBoundsCheckR2012b(F_sizes_idx_0 + i88, 1, (int32_T)
                  d6, &ue_emlrtBCI, sp) - 1)) - 1] + b_R_pred[i89 + 3 *
              b_loop_ub] * R_pred[F_sizes_idx_0 + 3 * b_loop_ub];
          }
        }
      }

      beta1 = obj->num_landmarks;
      if (1.0 > beta1) {
        loop_ub = -1;
      } else {
        i85 = (int32_T)emlrtIntegerCheckR2012b(beta1, &ac_emlrtDCI, sp);
        loop_ub = emlrtDynamicBoundsCheckR2012b(i85, 1, 100, &de_emlrtBCI, sp) -
          1;
      }

      i90 = (int8_T)((int8_T)(3 * (int8_T)i) + 1);
      for (i85 = 0; i85 < 3; i85++) {
        iv147[i85] = (int8_T)((int8_T)emlrtDynamicBoundsCheckR2012b((int32_T)
          (int8_T)(i85 + i90), 1, PI_sizes[0], &ve_emlrtBCI, sp) - 1);
      }

      lm_cnt = Xdim * ((1.0 + (real_T)i) - 1.0);
      b_loop_ub = (int32_T)muDoubleScalarFloor(Xdim - 1.0);
      for (i85 = 0; i85 <= b_loop_ub; i85++) {
        i88 = (int16_T)emlrtIntegerCheckR2012b(lm_cnt + (1.0 + (real_T)i85),
          &mc_emlrtDCI, sp);
        s_tmp_data[i85] = (int16_T)((int16_T)emlrtDynamicBoundsCheckR2012b(i88,
          1, PI_sizes[1], &we_emlrtBCI, sp) - 1);
      }

      eye(b);
      for (i85 = 0; i85 < 3; i85++) {
        for (i88 = 0; i88 < 3; i88++) {
          h_b_data[i88 + 3 * i85] = b[i88 + 3 * i85];
        }
      }

      for (i85 = 0; i85 < 4; i85++) {
        for (i88 = 0; i88 < 3; i88++) {
          h_b_data[i88 + 3 * (i85 + 3)] = 0.0;
        }
      }

      for (i85 = 0; i85 <= loop_ub; i85++) {
        for (i88 = 0; i88 < 3; i88++) {
          h_b_data[i88 + 3 * (i85 + 7)] = 0.0;
        }
      }

      tmp_sizes[0] = 3;
      tmp_sizes[1] = loop_ub + 8;
      b_loop_ub = loop_ub + 8;
      for (i85 = 0; i85 < b_loop_ub; i85++) {
        for (i88 = 0; i88 < 3; i88++) {
          t_tmp_data[i88 + 3 * i85] = h_b_data[i88 + 3 * i85];
        }
      }

      iv153[0] = 3;
      iv153[1] = (int32_T)muDoubleScalarFloor(Xdim - 1.0) + 1;
      emlrtSubAssignSizeCheckR2012b(iv153, 2, tmp_sizes, 2, &t_emlrtECI, sp);
      loop_ub += 8;
      for (i85 = 0; i85 < loop_ub; i85++) {
        for (i88 = 0; i88 < 3; i88++) {
          moduleInstance->PI_data[iv147[i88] + PI_sizes[0] * s_tmp_data[i85]] =
            t_tmp_data[i88 + 3 * i85];
        }
      }
    }

    i++;
    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst, 0, 0, 5, 0);

  /*  Update State */
  if (covrtLogIf(moduleInstance->covInst, 0, 0, 20, covrtLogMcdc
                 (moduleInstance->covInst, 0, 0, 11, !covrtLogCond
                  (moduleInstance->covInst, 0, 0, 13, Y_sizes == 0)))) {
    covrtLogBasicBlock(moduleInstance->covInst, 0, 47);
    loop_ub = (int16_T)Y_sizes;
    for (i85 = 0; i85 < loop_ub; i85++) {
      o_tmp_data[i85] = 0.0;
    }

    st.site = &kk_emlrtRSI;
    d_RIEKF_Update_State(moduleInstance, &st, obj, Y_data, Y_sizes, o_tmp_data,
                         (int32_T)(int16_T)Y_sizes, H_data, H_sizes, b_N_data,
                         N_sizes, moduleInstance->PI_data, PI_sizes);
  }

  /*  Augment State for new landmarks */
  if (covrtLogIf(moduleInstance->covInst, 0, 0, 21, covrtLogMcdc
                 (moduleInstance->covInst, 0, 0, 12, !covrtLogCond
                  (moduleInstance->covInst, 0, 0, 14, new_landmarks_sizes_idx_1 ==
                   0)))) {
    covrtLogBasicBlock(moduleInstance->covInst, 0, 48);
    st.site = &lk_emlrtRSI;
    RIEKF_Separate_State(moduleInstance, obj->X, obj->theta, R_pred, unusedUd,
                         unusedUe, unusedUf, unusedU10, unusedU11, unusedU12);
    i = 0;
    while (i <= new_landmarks_sizes_idx_1 - 1) {
      covrtLogFor(moduleInstance->covInst, 0, 0, 6, 1);
      if (covrtLogIf(moduleInstance->covInst, 0, 0, 22, obj->num_landmarks <
                     20.0)) {
        covrtLogBasicBlock(moduleInstance->covInst, 0, 49);

        /*  Increment number of landmarks after extracting cov */
        st.site = &mk_emlrtRSI;
        RIEKF_Augmented_Covariance(moduleInstance, &st, obj,
          moduleInstance->b_Pa_data, N_sizes);
        obj->num_landmarks++;

        /*  this needs to be done before Store_Covariance */
        /*  Initialize new landmark mean */
        d6 = obj->num_landmarks;
        i85 = (int32_T)emlrtIntegerCheckR2012b(d6, &kc_emlrtDCI, sp);
        obj->landmark_ids[emlrtDynamicBoundsCheckR2012b(i85, 1, 20, &me_emlrtBCI,
          sp) - 1] = new_landmarks_data[(emlrtDynamicBoundsCheckR2012b(1 + i, 1,
          new_landmarks_sizes_idx_1, &le_emlrtBCI, sp) - 1) << 2];
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, new_landmarks_sizes_idx_1,
          &be_emlrtBCI, sp);
        lm_cnt = obj->num_landmarks;
        i85 = (int32_T)emlrtIntegerCheckR2012b(lm_cnt, &yb_emlrtDCI, sp);
        emlrtDynamicBoundsCheckR2012b(i85, 1, 20, &ae_emlrtBCI, sp);
        for (i85 = 0; i85 < 3; i85++) {
          d6 = 0.0;
          for (i88 = 0; i88 < 3; i88++) {
            d6 += R_pred[i85 + 3 * i88] * new_landmarks_data[(i88 + (i << 2)) +
              1];
          }

          obj->landmarks[i85 + 3 * ((int32_T)lm_cnt - 1)] = unusedUe[i85] + d6;
        }

        /*  Initialize new landmark covariance */
        /*  Start with I with state dim and add row to increase dimension */
        d6 = 3.0 * (obj->num_landmarks - 1.0);
        if (1.0 > d6) {
          loop_ub = -1;
        } else {
          i85 = (int32_T)emlrtIntegerCheckR2012b(d6, &xb_emlrtDCI, sp);
          loop_ub = emlrtDynamicBoundsCheckR2012b(i85, 1, 100, &yd_emlrtBCI, sp)
            - 1;
        }

        st.site = &nk_emlrtRSI;
        c_eye(&st, (real_T)N_sizes[0] - 6.0, moduleInstance->b_varargin_1_data,
              H_sizes);
        st.site = &nk_emlrtRSI;
        eye(b);
        for (i85 = 0; i85 < 6; i85++) {
          for (i88 = 0; i88 < 3; i88++) {
            p_tmp_data[i88 + 3 * i85] = 0.0;
          }
        }

        for (i85 = 0; i85 < 3; i85++) {
          for (i88 = 0; i88 < 3; i88++) {
            p_tmp_data[i88 + 3 * (i85 + 6)] = b[i88 + 3 * i85];
          }
        }

        for (i85 = 0; i85 < 6; i85++) {
          for (i88 = 0; i88 < 3; i88++) {
            p_tmp_data[i88 + 3 * (i85 + 9)] = 0.0;
          }
        }

        for (i85 = 0; i85 <= loop_ub; i85++) {
          for (i88 = 0; i88 < 3; i88++) {
            p_tmp_data[i88 + 3 * (i85 + 15)] = 0.0;
          }
        }

        b_loop_ub = loop_ub + 16;
        for (i85 = 0; i85 < b_loop_ub; i85++) {
          for (i88 = 0; i88 < 3; i88++) {
            b_varargin_2_data[i88 + 3 * i85] = p_tmp_data[i88 + 3 * i85];
          }
        }

        b_st.site = &de_emlrtRSI;
        if (!((H_sizes[0] == 0) || (H_sizes[1] == 0))) {
          F_sizes_idx_0 = H_sizes[1];
        } else {
          F_sizes_idx_0 = loop_ub + 16;
        }

        c_st.site = &ee_emlrtRSI;
        if ((F_sizes_idx_0 == H_sizes[1]) || ((H_sizes[0] == 0) || (H_sizes[1] ==
              0))) {
          b2 = true;
        } else {
          b2 = false;
        }

        if (!b2) {
          for (i85 = 0; i85 < 39; i85++) {
            u[i85] = cv53[i85];
          }

          y = NULL;
          m26 = emlrtCreateCharArray(2, iv145);
          emlrtInitCharArrayR2013a(&c_st, 39, m26, &u[0]);
          emlrtAssign(&y, m26);
          d_st.site = &wk_emlrtRSI;
          g_error(&d_st, message(&d_st, y, &f_emlrtMCI), &f_emlrtMCI);
        }

        if (F_sizes_idx_0 != loop_ub + 16) {
          for (i85 = 0; i85 < 39; i85++) {
            b_u[i85] = cv53[i85];
          }

          b_y = NULL;
          m26 = emlrtCreateCharArray(2, iv146);
          emlrtInitCharArrayR2013a(&c_st, 39, m26, &b_u[0]);
          emlrtAssign(&b_y, m26);
          d_st.site = &wk_emlrtRSI;
          g_error(&d_st, message(&d_st, b_y, &f_emlrtMCI), &f_emlrtMCI);
        }

        if ((F_sizes_idx_0 == 0) || (!((H_sizes[0] == 0) || (H_sizes[1] == 0))))
        {
          b_loop_ub = H_sizes[0];
        } else {
          b_loop_ub = 0;
        }

        varargin_1_sizes[0] = b_loop_ub + 3;
        varargin_1_sizes[1] = F_sizes_idx_0;
        for (i85 = 0; i85 < F_sizes_idx_0; i85++) {
          for (i88 = 0; i88 < b_loop_ub; i88++) {
            moduleInstance->varargin_1_data[i88 + (b_loop_ub + 3) * i85] =
              moduleInstance->b_varargin_1_data[i88 + b_loop_ub * i85];
          }
        }

        for (i85 = 0; i85 < F_sizes_idx_0; i85++) {
          for (i88 = 0; i88 < 3; i88++) {
            moduleInstance->varargin_1_data[(i88 + b_loop_ub) + (b_loop_ub + 3) *
              i85] = b_varargin_2_data[i88 + 3 * i85];
          }
        }

        c_blkdiag(moduleInstance->varargin_1_data, varargin_1_sizes,
                  moduleInstance->tmp_data, tmp_sizes);
        F_sizes_idx_0 = tmp_sizes[0];
        Y_sizes = tmp_sizes[1];
        loop_ub = tmp_sizes[0] * tmp_sizes[1];
        for (i85 = 0; i85 < loop_ub; i85++) {
          moduleInstance->F_data[i85] = moduleInstance->tmp_data[i85];
        }

        /*  Add block I for parameters */
        G_sizes_idx_0 = tmp_sizes[0];
        loop_ub = tmp_sizes[0] * 3;
        for (i85 = 0; i85 < loop_ub; i85++) {
          G_data[i85] = 0.0;
        }

        for (i85 = 0; i85 < 3; i85++) {
          for (i88 = 0; i88 < 3; i88++) {
            G_data[(emlrtDynamicBoundsCheckR2012b((i88 + tmp_sizes[0]) - 8, 1,
                     tmp_sizes[0], &ne_emlrtBCI, sp) + G_sizes_idx_0 * i85) - 1]
              = R_pred[i88 + 3 * i85];
          }
        }

        st.site = &ok_emlrtRSI;
        loop_ub = tmp_sizes[0] * tmp_sizes[1];
        for (i85 = 0; i85 < loop_ub; i85++) {
          moduleInstance->a_data[i85] = moduleInstance->F_data[i85];
        }

        loop_ub = N_sizes[0] * N_sizes[1];
        for (i85 = 0; i85 < loop_ub; i85++) {
          moduleInstance->b_data[i85] = moduleInstance->b_Pa_data[i85];
        }

        b_st.site = &he_emlrtRSI;
        if (!(tmp_sizes[1] == N_sizes[0])) {
          if (((tmp_sizes[0] == 1) && (tmp_sizes[1] == 1)) || ((N_sizes[0] == 1)
               && (N_sizes[1] == 1))) {
            for (i85 = 0; i85 < 45; i85++) {
              d_u[i85] = cv55[i85];
            }

            d_y = NULL;
            m26 = emlrtCreateCharArray(2, iv149);
            emlrtInitCharArrayR2013a(&b_st, 45, m26, &d_u[0]);
            emlrtAssign(&d_y, m26);
            c_st.site = &sk_emlrtRSI;
            g_error(&c_st, message(&c_st, d_y, &g_emlrtMCI), &g_emlrtMCI);
          } else {
            for (i85 = 0; i85 < 21; i85++) {
              c_u[i85] = cv54[i85];
            }

            c_y = NULL;
            m26 = emlrtCreateCharArray(2, iv148);
            emlrtInitCharArrayR2013a(&b_st, 21, m26, &c_u[0]);
            emlrtAssign(&c_y, m26);
            c_st.site = &tk_emlrtRSI;
            g_error(&c_st, message(&c_st, c_y, &h_emlrtMCI), &h_emlrtMCI);
          }
        }

        if ((tmp_sizes[1] == 1) || (N_sizes[0] == 1)) {
          b_index = tmp_sizes[0];
          y_sizes_idx_1 = N_sizes[1];
          loop_ub = tmp_sizes[0];
          for (i85 = 0; i85 < loop_ub; i85++) {
            b_loop_ub = N_sizes[1];
            for (i88 = 0; i88 < b_loop_ub; i88++) {
              moduleInstance->y_data[i85 + b_index * i88] = 0.0;
              for (i89 = 0; i89 < Y_sizes; i89++) {
                moduleInstance->y_data[i85 + b_index * i88] +=
                  moduleInstance->F_data[i85 + F_sizes_idx_0 * i89] *
                  moduleInstance->b_Pa_data[i89 + N_sizes[0] * i88];
              }
            }
          }
        } else {
          b_index = (int16_T)tmp_sizes[0];
          y_sizes_idx_1 = (int16_T)N_sizes[1];
          loop_ub = (int16_T)N_sizes[1];
          for (i85 = 0; i85 < loop_ub; i85++) {
            for (i88 = 0; i88 < b_index; i88++) {
              moduleInstance->y_data[i88 + b_index * i85] = 0.0;
            }
          }

          b_st.site = &ge_emlrtRSI;
          if ((tmp_sizes[0] < 1) || (N_sizes[1] < 1) || (tmp_sizes[1] < 1)) {
          } else {
            c_st.site = &je_emlrtRSI;
            lm_cnt = 1.0;
            beta1 = 0.0;
            TRANSB = 'N';
            TRANSA = 'N';
            m_t = (ptrdiff_t)tmp_sizes[0];
            n_t = (ptrdiff_t)N_sizes[1];
            k_t = (ptrdiff_t)tmp_sizes[1];
            lda_t = (ptrdiff_t)tmp_sizes[0];
            ldb_t = (ptrdiff_t)tmp_sizes[1];
            ldc_t = (ptrdiff_t)tmp_sizes[0];
            dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &lm_cnt,
                  &moduleInstance->a_data[0], &lda_t, &moduleInstance->b_data[0],
                  &ldb_t, &beta1, &moduleInstance->y_data[0], &ldc_t);
          }
        }

        st.site = &ok_emlrtRSI;
        b_loop_ub = tmp_sizes[1];
        loop_ub = tmp_sizes[0];
        for (i85 = 0; i85 < loop_ub; i85++) {
          for (i88 = 0; i88 < Y_sizes; i88++) {
            moduleInstance->b_data[i88 + b_loop_ub * i85] =
              moduleInstance->F_data[i85 + F_sizes_idx_0 * i88];
          }
        }

        b_st.site = &he_emlrtRSI;
        if (!(y_sizes_idx_1 == tmp_sizes[1])) {
          if (((b_index == 1) && (y_sizes_idx_1 == 1)) || ((tmp_sizes[1] == 1) &&
               (tmp_sizes[0] == 1))) {
            for (i85 = 0; i85 < 45; i85++) {
              f_u[i85] = cv55[i85];
            }

            f_y = NULL;
            m26 = emlrtCreateCharArray(2, iv152);
            emlrtInitCharArrayR2013a(&b_st, 45, m26, &f_u[0]);
            emlrtAssign(&f_y, m26);
            c_st.site = &sk_emlrtRSI;
            g_error(&c_st, message(&c_st, f_y, &g_emlrtMCI), &g_emlrtMCI);
          } else {
            for (i85 = 0; i85 < 21; i85++) {
              e_u[i85] = cv54[i85];
            }

            e_y = NULL;
            m26 = emlrtCreateCharArray(2, iv151);
            emlrtInitCharArrayR2013a(&b_st, 21, m26, &e_u[0]);
            emlrtAssign(&e_y, m26);
            c_st.site = &tk_emlrtRSI;
            g_error(&c_st, message(&c_st, e_y, &h_emlrtMCI), &h_emlrtMCI);
          }
        }

        if ((y_sizes_idx_1 == 1) || (tmp_sizes[1] == 1)) {
          y_sizes[0] = b_index;
          y_sizes[1] = tmp_sizes[0];
          for (i85 = 0; i85 < b_index; i85++) {
            loop_ub = tmp_sizes[0];
            for (i88 = 0; i88 < loop_ub; i88++) {
              moduleInstance->b_y_data[i85 + b_index * i88] = 0.0;
              for (i89 = 0; i89 < y_sizes_idx_1; i89++) {
                moduleInstance->b_y_data[i85 + b_index * i88] +=
                  moduleInstance->y_data[i85 + b_index * i89] *
                  moduleInstance->b_data[i89 + b_loop_ub * i88];
              }
            }
          }
        } else {
          y_sizes[0] = (int16_T)b_index;
          y_sizes[1] = (int16_T)tmp_sizes[0];
          loop_ub = (int16_T)tmp_sizes[0];
          for (i85 = 0; i85 < loop_ub; i85++) {
            b_loop_ub = (int16_T)b_index;
            for (i88 = 0; i88 < b_loop_ub; i88++) {
              moduleInstance->b_y_data[i88 + (int16_T)b_index * i85] = 0.0;
            }
          }

          b_st.site = &ge_emlrtRSI;
          if ((b_index < 1) || (tmp_sizes[0] < 1) || (y_sizes_idx_1 < 1)) {
          } else {
            c_st.site = &je_emlrtRSI;
            lm_cnt = 1.0;
            beta1 = 0.0;
            TRANSB = 'N';
            TRANSA = 'N';
            m_t = (ptrdiff_t)b_index;
            n_t = (ptrdiff_t)tmp_sizes[0];
            k_t = (ptrdiff_t)y_sizes_idx_1;
            lda_t = (ptrdiff_t)b_index;
            ldb_t = (ptrdiff_t)y_sizes_idx_1;
            ldc_t = (ptrdiff_t)b_index;
            dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &lm_cnt,
                  &moduleInstance->y_data[0], &lda_t, &moduleInstance->b_data[0],
                  &ldb_t, &beta1, &moduleInstance->b_y_data[0], &ldc_t);
          }
        }

        st.site = &ok_emlrtRSI;
        for (i85 = 0; i85 < 9; i85++) {
          b[i85] = obj->Ql[i85];
        }

        b_loop_ub = (int8_T)tmp_sizes[0];
        for (i85 = 0; i85 < 3; i85++) {
          for (i88 = 0; i88 < b_loop_ub; i88++) {
            n_C_data[i88 + b_loop_ub * i85] = 0.0;
          }
        }

        b_st.site = &ge_emlrtRSI;
        if (!(tmp_sizes[0] < 1)) {
          c_st.site = &je_emlrtRSI;
          lm_cnt = 1.0;
          beta1 = 0.0;
          TRANSB = 'N';
          TRANSA = 'N';
          m_t = (ptrdiff_t)tmp_sizes[0];
          n_t = (ptrdiff_t)3;
          k_t = (ptrdiff_t)3;
          lda_t = (ptrdiff_t)tmp_sizes[0];
          ldb_t = (ptrdiff_t)3;
          ldc_t = (ptrdiff_t)tmp_sizes[0];
          dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &lm_cnt, &G_data[0], &lda_t,
                &b[0], &ldb_t, &beta1, &n_C_data[0], &ldc_t);
        }

        st.site = &ok_emlrtRSI;
        loop_ub = tmp_sizes[0];
        for (i85 = 0; i85 < loop_ub; i85++) {
          for (i88 = 0; i88 < 3; i88++) {
            g_b_data[i88 + 3 * i85] = G_data[i85 + G_sizes_idx_0 * i88];
          }
        }

        C_sizes[0] = (int8_T)tmp_sizes[0];
        C_sizes[1] = (int16_T)tmp_sizes[0];
        loop_ub = (int16_T)tmp_sizes[0];
        for (i85 = 0; i85 < loop_ub; i85++) {
          b_loop_ub = C_sizes[0];
          for (i88 = 0; i88 < b_loop_ub; i88++) {
            moduleInstance->h_C_data[i88 + C_sizes[0] * i85] = 0.0;
          }
        }

        b_st.site = &ge_emlrtRSI;
        if (((int8_T)tmp_sizes[0] < 1) || (tmp_sizes[0] < 1)) {
        } else {
          c_st.site = &je_emlrtRSI;
          lm_cnt = 1.0;
          beta1 = 0.0;
          TRANSB = 'N';
          TRANSA = 'N';
          m_t = (ptrdiff_t)(int8_T)tmp_sizes[0];
          n_t = (ptrdiff_t)tmp_sizes[0];
          k_t = (ptrdiff_t)3;
          lda_t = (ptrdiff_t)(int8_T)tmp_sizes[0];
          ldb_t = (ptrdiff_t)3;
          ldc_t = (ptrdiff_t)(int8_T)tmp_sizes[0];
          dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &lm_cnt, &n_C_data[0],
                &lda_t, &g_b_data[0], &ldb_t, &beta1, &moduleInstance->h_C_data
                [0], &ldc_t);
        }

        for (i85 = 0; i85 < 2; i85++) {
          H_sizes[i85] = y_sizes[i85];
          N_sizes[i85] = C_sizes[i85];
        }

        emlrtSizeEqCheckNDR2012b(H_sizes, N_sizes, &r_emlrtECI, sp);
        b_y_sizes[0] = y_sizes[0];
        b_y_sizes[1] = y_sizes[1];
        loop_ub = y_sizes[0] * y_sizes[1];
        for (i85 = 0; i85 < loop_ub; i85++) {
          moduleInstance->f_y_data[i85] = moduleInstance->b_y_data[i85] +
            moduleInstance->h_C_data[i85];
        }

        st.site = &ok_emlrtRSI;
        c_RIEKF_Store_Covariance(moduleInstance, &st, obj,
          moduleInstance->f_y_data, b_y_sizes);
      }

      i++;
      cgxertListenForCtrlC(moduleInstance->S);
    }

    covrtLogFor(moduleInstance->covInst, 0, 0, 6, 0);
  }
}

static void d_RIEKF_Update_State(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Y_data[], int32_T
  Y_sizes, real_T g_b_data[], int32_T b_sizes, real_T H_data[], int32_T H_sizes
  [2], real_T b_N_data[], int32_T N_sizes[2], real_T c_PI_data[], int32_T
  PI_sizes[2])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  int32_T tmp_sizes[2];
  int32_T Xa_sizes[2];
  int32_T loop_ub;
  int32_T i91;
  int32_T Pa_sizes[2];
  int32_T y_sizes_idx_0;
  int32_T y_sizes_idx_1;
  const mxArray *y;
  char_T u[21];
  static char_T cv56[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *b_y;
  char_T b_u[45];
  static char_T cv57[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D', 'y',
    'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p', 'a',
    'n', 's', 'i', 'o', 'n' };

  const mxArray *m27;
  static const int32_T iv154[2] = { 1, 21 };

  static const int32_T iv155[2] = { 1, 45 };

  int32_T i92;
  int32_T b_loop_ub;
  int32_T b_sizes_idx_0;
  real_T alpha1;
  real_T Xdim;
  char_T TRANSB;
  int32_T c_loop_ub;
  char_T TRANSA;
  int32_T i93;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  int32_T y_sizes[2];
  ptrdiff_t ldc_t;
  const mxArray *c_y;
  char_T c_u[21];
  const mxArray *d_y;
  char_T d_u[45];
  static const int32_T iv156[2] = { 1, 21 };

  static const int32_T iv157[2] = { 1, 45 };

  int32_T dX_sizes[2];
  int32_T K_sizes[2];
  int32_T b_y_sizes[2];
  const mxArray *e_y;
  char_T e_u[21];
  const mxArray *f_y;
  char_T f_u[45];
  static const int32_T iv158[2] = { 1, 21 };

  static const int32_T iv159[2] = { 1, 45 };

  real_T jb_y_data[3600];
  int32_T c_y_sizes[2];
  real_T Ydim;
  static char_T cv58[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  int8_T o_tmp_data[27];
  int32_T iv160[2];
  const mxArray *g_y;
  char_T g_u[21];
  const mxArray *h_y;
  char_T h_u[45];
  int8_T p_tmp_data[27];
  static const int32_T iv161[2] = { 1, 21 };

  static const int32_T iv162[2] = { 1, 45 };

  real_T n_C_data[121];
  real_T Z_data[121];
  int32_T C_sizes_idx_0;
  int32_T C_sizes_idx_1;
  const mxArray *i_y;
  char_T i_u[21];
  const mxArray *j_y;
  char_T j_u[45];
  static const int32_T iv163[2] = { 1, 21 };

  static const int32_T iv164[2] = { 1, 45 };

  real_T h_b_data[400];
  const mxArray *k_y;
  char_T k_u[21];
  const mxArray *l_y;
  char_T l_u[45];
  static const int32_T iv165[2] = { 1, 21 };

  static const int32_T iv166[2] = { 1, 45 };

  real_T delta_data[121];
  int32_T iv167[2];
  real_T b_delta_data[75];
  real_T dX_data[784];
  real_T dtheta[6];
  const mxArray *m_y;
  char_T m_u[21];
  const mxArray *n_y;
  char_T n_u[45];
  static const int32_T iv168[2] = { 1, 21 };

  static const int32_T iv169[2] = { 1, 45 };

  int8_T q_tmp_data[20];
  int32_T iv170[2];
  int32_T b_Xa_sizes[2];
  real_T Pa[2];
  int32_T I_sizes[2];
  int32_T C_sizes[2];
  const mxArray *o_y;
  char_T o_u[21];
  const mxArray *p_y;
  char_T p_u[45];
  static const int32_T iv171[2] = { 1, 21 };

  static const int32_T iv172[2] = { 1, 45 };

  int32_T b_C_sizes[2];
  const mxArray *q_y;
  char_T q_u[21];
  const mxArray *r_y;
  char_T r_u[45];
  static const int32_T iv173[2] = { 1, 21 };

  static const int32_T iv174[2] = { 1, 45 };

  const mxArray *s_y;
  char_T s_u[21];
  const mxArray *t_y;
  char_T t_u[45];
  static const int32_T iv175[2] = { 1, 21 };

  static const int32_T iv176[2] = { 1, 45 };

  int32_T c_C_sizes[2];
  const mxArray *u_y;
  char_T u_u[21];
  const mxArray *v_y;
  char_T v_u[45];
  static const int32_T iv177[2] = { 1, 21 };

  static const int32_T iv178[2] = { 1, 45 };

  const mxArray *w_y;
  char_T w_u[21];
  const mxArray *x_y;
  char_T x_u[45];
  static const int32_T iv179[2] = { 1, 21 };

  static const int32_T iv180[2] = { 1, 45 };

  int32_T d_C_sizes[2];
  const mxArray *y_y;
  char_T y_u[21];
  const mxArray *ab_y;
  char_T ab_u[45];
  static const int32_T iv181[2] = { 1, 21 };

  static const int32_T iv182[2] = { 1, 45 };

  int32_T e_C_sizes[2];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  covrtLogFcn(moduleInstance->covInst, 0, 13);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 26);

  /*  Update State and Covariance from a measurement */
  /*  Compute Kalman Gain */
  st.site = &jf_emlrtRSI;
  RIEKF_Augmented_State(moduleInstance, &st, obj, moduleInstance->c_tmp_data,
                        tmp_sizes);
  Xa_sizes[0] = tmp_sizes[0];
  Xa_sizes[1] = tmp_sizes[1];
  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->Xa_data[i91] = moduleInstance->c_tmp_data[i91];
  }

  st.site = &kf_emlrtRSI;
  RIEKF_Augmented_Covariance(moduleInstance, &st, obj, moduleInstance->c_Pa_data,
    Pa_sizes);
  st.site = &lf_emlrtRSI;
  loop_ub = H_sizes[0] * H_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->b_a_data[i91] = H_data[i91];
  }

  loop_ub = Pa_sizes[0] * Pa_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->b_b_data[i91] = moduleInstance->c_Pa_data[i91];
  }

  b_st.site = &he_emlrtRSI;
  if (!(H_sizes[1] == Pa_sizes[0])) {
    if (((H_sizes[0] == 1) && (H_sizes[1] == 1)) || ((Pa_sizes[0] == 1) &&
         (Pa_sizes[1] == 1))) {
      for (i91 = 0; i91 < 45; i91++) {
        b_u[i91] = cv57[i91];
      }

      b_y = NULL;
      m27 = emlrtCreateCharArray(2, iv155);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &b_u[0]);
      emlrtAssign(&b_y, m27);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, b_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        u[i91] = cv56[i91];
      }

      y = NULL;
      m27 = emlrtCreateCharArray(2, iv154);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &u[0]);
      emlrtAssign(&y, m27);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((H_sizes[1] == 1) || (Pa_sizes[0] == 1)) {
    y_sizes_idx_0 = H_sizes[0];
    y_sizes_idx_1 = Pa_sizes[1];
    loop_ub = H_sizes[0];
    for (i91 = 0; i91 < loop_ub; i91++) {
      b_loop_ub = Pa_sizes[1];
      for (i92 = 0; i92 < b_loop_ub; i92++) {
        moduleInstance->c_y_data[i91 + y_sizes_idx_0 * i92] = 0.0;
        c_loop_ub = H_sizes[1];
        for (i93 = 0; i93 < c_loop_ub; i93++) {
          moduleInstance->c_y_data[i91 + y_sizes_idx_0 * i92] += H_data[i91 +
            H_sizes[0] * i93] * moduleInstance->c_Pa_data[i93 + Pa_sizes[0] *
            i92];
        }
      }
    }
  } else {
    y_sizes_idx_0 = (int16_T)H_sizes[0];
    y_sizes_idx_1 = (int16_T)Pa_sizes[1];
    loop_ub = (int16_T)Pa_sizes[1];
    for (i91 = 0; i91 < loop_ub; i91++) {
      for (i92 = 0; i92 < y_sizes_idx_0; i92++) {
        moduleInstance->c_y_data[i92 + y_sizes_idx_0 * i91] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((H_sizes[0] < 1) || (Pa_sizes[1] < 1) || (H_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)H_sizes[0];
      n_t = (ptrdiff_t)Pa_sizes[1];
      k_t = (ptrdiff_t)H_sizes[1];
      lda_t = (ptrdiff_t)H_sizes[0];
      ldb_t = (ptrdiff_t)H_sizes[1];
      ldc_t = (ptrdiff_t)H_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->b_a_data[0], &lda_t, &moduleInstance->b_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->c_y_data[0], &ldc_t);
    }
  }

  st.site = &lf_emlrtRSI;
  b_sizes_idx_0 = H_sizes[1];
  loop_ub = H_sizes[0];
  for (i91 = 0; i91 < loop_ub; i91++) {
    b_loop_ub = H_sizes[1];
    for (i92 = 0; i92 < b_loop_ub; i92++) {
      moduleInstance->b_b_data[i92 + b_sizes_idx_0 * i91] = H_data[i91 +
        H_sizes[0] * i92];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(y_sizes_idx_1 == H_sizes[1])) {
    if (((y_sizes_idx_0 == 1) && (y_sizes_idx_1 == 1)) || ((H_sizes[1] == 1) &&
         (H_sizes[0] == 1))) {
      for (i91 = 0; i91 < 45; i91++) {
        d_u[i91] = cv57[i91];
      }

      d_y = NULL;
      m27 = emlrtCreateCharArray(2, iv157);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &d_u[0]);
      emlrtAssign(&d_y, m27);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, d_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        c_u[i91] = cv56[i91];
      }

      c_y = NULL;
      m27 = emlrtCreateCharArray(2, iv156);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &c_u[0]);
      emlrtAssign(&c_y, m27);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, c_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((y_sizes_idx_1 == 1) || (H_sizes[1] == 1)) {
    y_sizes[0] = y_sizes_idx_0;
    y_sizes[1] = H_sizes[0];
    for (i91 = 0; i91 < y_sizes_idx_0; i91++) {
      loop_ub = H_sizes[0];
      for (i92 = 0; i92 < loop_ub; i92++) {
        moduleInstance->d_y_data[i91 + y_sizes_idx_0 * i92] = 0.0;
        for (i93 = 0; i93 < y_sizes_idx_1; i93++) {
          moduleInstance->d_y_data[i91 + y_sizes_idx_0 * i92] +=
            moduleInstance->c_y_data[i91 + y_sizes_idx_0 * i93] *
            moduleInstance->b_b_data[i93 + b_sizes_idx_0 * i92];
        }
      }
    }
  } else {
    y_sizes[0] = (int16_T)y_sizes_idx_0;
    y_sizes[1] = (int16_T)H_sizes[0];
    loop_ub = (int16_T)H_sizes[0];
    for (i91 = 0; i91 < loop_ub; i91++) {
      b_loop_ub = (int16_T)y_sizes_idx_0;
      for (i92 = 0; i92 < b_loop_ub; i92++) {
        moduleInstance->d_y_data[i92 + (int16_T)y_sizes_idx_0 * i91] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((y_sizes_idx_0 < 1) || (H_sizes[0] < 1) || (y_sizes_idx_1 < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)y_sizes_idx_0;
      n_t = (ptrdiff_t)H_sizes[0];
      k_t = (ptrdiff_t)y_sizes_idx_1;
      lda_t = (ptrdiff_t)y_sizes_idx_0;
      ldb_t = (ptrdiff_t)y_sizes_idx_1;
      ldc_t = (ptrdiff_t)y_sizes_idx_0;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->c_y_data[0], &lda_t, &moduleInstance->b_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->d_y_data[0], &ldc_t);
    }
  }

  for (i91 = 0; i91 < 2; i91++) {
    dX_sizes[i91] = y_sizes[i91];
    K_sizes[i91] = N_sizes[i91];
  }

  emlrtSizeEqCheckNDR2012b(dX_sizes, K_sizes, &f_emlrtECI, sp);
  st.site = &mf_emlrtRSI;
  loop_ub = Pa_sizes[0] * Pa_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->b_a_data[i91] = moduleInstance->c_Pa_data[i91];
  }

  b_sizes_idx_0 = H_sizes[1];
  loop_ub = H_sizes[0];
  for (i91 = 0; i91 < loop_ub; i91++) {
    b_loop_ub = H_sizes[1];
    for (i92 = 0; i92 < b_loop_ub; i92++) {
      moduleInstance->b_b_data[i92 + b_sizes_idx_0 * i91] = H_data[i91 +
        H_sizes[0] * i92];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(Pa_sizes[1] == H_sizes[1])) {
    if (((Pa_sizes[0] == 1) && (Pa_sizes[1] == 1)) || ((H_sizes[1] == 1) &&
         (H_sizes[0] == 1))) {
      for (i91 = 0; i91 < 45; i91++) {
        f_u[i91] = cv57[i91];
      }

      f_y = NULL;
      m27 = emlrtCreateCharArray(2, iv159);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &f_u[0]);
      emlrtAssign(&f_y, m27);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, f_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        e_u[i91] = cv56[i91];
      }

      e_y = NULL;
      m27 = emlrtCreateCharArray(2, iv158);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &e_u[0]);
      emlrtAssign(&e_y, m27);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, e_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((Pa_sizes[1] == 1) || (H_sizes[1] == 1)) {
    b_y_sizes[0] = Pa_sizes[0];
    b_y_sizes[1] = H_sizes[0];
    loop_ub = Pa_sizes[0];
    for (i91 = 0; i91 < loop_ub; i91++) {
      b_loop_ub = H_sizes[0];
      for (i92 = 0; i92 < b_loop_ub; i92++) {
        moduleInstance->e_y_data[i91 + b_y_sizes[0] * i92] = 0.0;
        c_loop_ub = Pa_sizes[1];
        for (i93 = 0; i93 < c_loop_ub; i93++) {
          moduleInstance->e_y_data[i91 + b_y_sizes[0] * i92] +=
            moduleInstance->c_Pa_data[i91 + Pa_sizes[0] * i93] *
            moduleInstance->b_b_data[i93 + b_sizes_idx_0 * i92];
        }
      }
    }
  } else {
    b_y_sizes[0] = (int16_T)Pa_sizes[0];
    b_y_sizes[1] = (int16_T)H_sizes[0];
    loop_ub = (int16_T)H_sizes[0];
    for (i91 = 0; i91 < loop_ub; i91++) {
      b_loop_ub = b_y_sizes[0];
      for (i92 = 0; i92 < b_loop_ub; i92++) {
        moduleInstance->e_y_data[i92 + b_y_sizes[0] * i91] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((Pa_sizes[0] < 1) || (H_sizes[0] < 1) || (Pa_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)Pa_sizes[0];
      n_t = (ptrdiff_t)H_sizes[0];
      k_t = (ptrdiff_t)Pa_sizes[1];
      lda_t = (ptrdiff_t)Pa_sizes[0];
      ldb_t = (ptrdiff_t)Pa_sizes[1];
      ldc_t = (ptrdiff_t)Pa_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->b_a_data[0], &lda_t, &moduleInstance->b_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->e_y_data[0], &ldc_t);
    }
  }

  c_y_sizes[0] = y_sizes[0];
  c_y_sizes[1] = y_sizes[1];
  loop_ub = y_sizes[0] * y_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    jb_y_data[i91] = moduleInstance->d_y_data[i91] + b_N_data[i91];
  }

  st.site = &mf_emlrtRSI;
  c_mrdivide(moduleInstance, &st, moduleInstance->e_y_data, b_y_sizes, jb_y_data,
             c_y_sizes, moduleInstance->K_data, K_sizes);

  /*  Copy X along the diagonals if more than one measurement */
  /*  TODO: find better way to do this */
  Xdim = 7.0 + obj->num_landmarks;
  Ydim = (real_T)Y_sizes / Xdim;
  if (!(Ydim < 20.0)) {
    st.site = &vk_emlrtRSI;
    g_error(&st, message(&st, b_emlrt_marshallOut(&st, cv58), &i_emlrtMCI),
            &i_emlrtMCI);
  }

  if (!(Xdim < 27.0)) {
    st.site = &uk_emlrtRSI;
    g_error(&st, message(&st, b_emlrt_marshallOut(&st, cv58), &j_emlrtMCI),
            &j_emlrtMCI);
  }

  alpha1 = Xdim * Ydim;
  if (1.0 > alpha1) {
    loop_ub = 0;
  } else {
    i91 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &pb_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(i91, 1, 100, &oc_emlrtBCI, sp);
  }

  alpha1 = Xdim * Ydim;
  if (1.0 > alpha1) {
    b_loop_ub = 0;
  } else {
    i91 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &qb_emlrtDCI, sp);
    b_loop_ub = emlrtDynamicBoundsCheckR2012b(i91, 1, 100, &pc_emlrtBCI, sp);
  }

  emlrtDimSizeGeqCheckR2012b(540, loop_ub, &g_emlrtECI, sp);
  emlrtDimSizeGeqCheckR2012b(540, b_loop_ub, &h_emlrtECI, sp);
  c_loop_ub = loop_ub * b_loop_ub;
  for (i91 = 0; i91 < c_loop_ub; i91++) {
    moduleInstance->BigX_data[i91] = 0.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, Ydim, mxDOUBLE_CLASS, (int32_T)Ydim,
    &emlrtRTEI, sp);
  y_sizes_idx_0 = 0;
  while (y_sizes_idx_0 <= (int32_T)Ydim - 1) {
    covrtLogFor(moduleInstance->covInst, 0, 0, 1, 1);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 27);
    alpha1 = Xdim * ((1.0 + (real_T)y_sizes_idx_0) - 1.0);
    c_loop_ub = (int32_T)muDoubleScalarFloor(Xdim - 1.0);
    for (i91 = 0; i91 <= c_loop_ub; i91++) {
      i92 = (int8_T)emlrtIntegerCheckR2012b(alpha1 + (1.0 + (real_T)i91),
        &tb_emlrtDCI, sp);
      o_tmp_data[i91] = (int8_T)((int8_T)emlrtDynamicBoundsCheckR2012b(i92, 1,
        loop_ub, &xc_emlrtBCI, sp) - 1);
    }

    alpha1 = Xdim * ((1.0 + (real_T)y_sizes_idx_0) - 1.0);
    c_loop_ub = (int32_T)muDoubleScalarFloor(Xdim - 1.0);
    for (i91 = 0; i91 <= c_loop_ub; i91++) {
      i92 = (int8_T)emlrtIntegerCheckR2012b(alpha1 + (1.0 + (real_T)i91),
        &ub_emlrtDCI, sp);
      p_tmp_data[i91] = (int8_T)((int8_T)emlrtDynamicBoundsCheckR2012b(i92, 1,
        b_loop_ub, &yc_emlrtBCI, sp) - 1);
    }

    iv160[0] = (int32_T)muDoubleScalarFloor(Xdim - 1.0) + 1;
    iv160[1] = (int32_T)muDoubleScalarFloor(Xdim - 1.0) + 1;
    emlrtSubAssignSizeCheckR2012b(iv160, 2, Xa_sizes, 2, &i_emlrtECI, sp);
    c_loop_ub = Xa_sizes[1];
    for (i91 = 0; i91 < c_loop_ub; i91++) {
      y_sizes_idx_1 = Xa_sizes[0];
      for (i92 = 0; i92 < y_sizes_idx_1; i92++) {
        moduleInstance->BigX_data[o_tmp_data[i92] + loop_ub * p_tmp_data[i91]] =
          moduleInstance->Xa_data[i92 + Xa_sizes[0] * i91];
      }
    }

    y_sizes_idx_0++;
    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst, 0, 0, 1, 0);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 28);
  st.site = &nf_emlrtRSI;
  c_loop_ub = loop_ub * b_loop_ub;
  for (i91 = 0; i91 < c_loop_ub; i91++) {
    moduleInstance->b_a_data[i91] = moduleInstance->BigX_data[i91];
  }

  b_st.site = &he_emlrtRSI;
  if (!(b_loop_ub == Y_sizes)) {
    if (((loop_ub == 1) && (b_loop_ub == 1)) || (Y_sizes == 1)) {
      for (i91 = 0; i91 < 45; i91++) {
        h_u[i91] = cv57[i91];
      }

      h_y = NULL;
      m27 = emlrtCreateCharArray(2, iv162);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &h_u[0]);
      emlrtAssign(&h_y, m27);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, h_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        g_u[i91] = cv56[i91];
      }

      g_y = NULL;
      m27 = emlrtCreateCharArray(2, iv161);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &g_u[0]);
      emlrtAssign(&g_y, m27);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, g_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((b_loop_ub == 1) || (Y_sizes == 1)) {
    y_sizes_idx_1 = loop_ub;
    for (i91 = 0; i91 < loop_ub; i91++) {
      n_C_data[i91] = 0.0;
      for (i92 = 0; i92 < b_loop_ub; i92++) {
        n_C_data[i91] += moduleInstance->BigX_data[i91 + loop_ub * i92] *
          Y_data[i92];
      }
    }
  } else {
    y_sizes_idx_0 = (int8_T)loop_ub;
    y_sizes_idx_1 = (int8_T)loop_ub;
    for (i91 = 0; i91 < y_sizes_idx_0; i91++) {
      n_C_data[i91] = 0.0;
    }

    b_st.site = &ge_emlrtRSI;
    if ((loop_ub < 1) || (b_loop_ub < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)loop_ub;
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)b_loop_ub;
      lda_t = (ptrdiff_t)loop_ub;
      ldb_t = (ptrdiff_t)b_loop_ub;
      ldc_t = (ptrdiff_t)loop_ub;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->b_a_data[0], &lda_t, &Y_data[0], &ldb_t, &Xdim,
            &n_C_data[0], &ldc_t);
    }
  }

  emlrtSizeEqCheck1DR2012b(y_sizes_idx_1, b_sizes, &j_emlrtECI, sp);
  for (i91 = 0; i91 < y_sizes_idx_1; i91++) {
    Z_data[i91] = n_C_data[i91] - g_b_data[i91];
  }

  /*  Update State */
  st.site = &of_emlrtRSI;
  loop_ub = K_sizes[0] * K_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->b_a_data[i91] = moduleInstance->K_data[i91];
  }

  loop_ub = PI_sizes[0] * PI_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->b_b_data[i91] = c_PI_data[i91];
  }

  b_st.site = &he_emlrtRSI;
  if (!(K_sizes[1] == PI_sizes[0])) {
    if (((K_sizes[0] == 1) && (K_sizes[1] == 1)) || ((PI_sizes[0] == 1) &&
         (PI_sizes[1] == 1))) {
      for (i91 = 0; i91 < 45; i91++) {
        j_u[i91] = cv57[i91];
      }

      j_y = NULL;
      m27 = emlrtCreateCharArray(2, iv164);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &j_u[0]);
      emlrtAssign(&j_y, m27);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, j_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        i_u[i91] = cv56[i91];
      }

      i_y = NULL;
      m27 = emlrtCreateCharArray(2, iv163);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &i_u[0]);
      emlrtAssign(&i_y, m27);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, i_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((K_sizes[1] == 1) || (PI_sizes[0] == 1)) {
    C_sizes_idx_0 = K_sizes[0];
    C_sizes_idx_1 = PI_sizes[1];
    loop_ub = K_sizes[0];
    for (i91 = 0; i91 < loop_ub; i91++) {
      b_loop_ub = PI_sizes[1];
      for (i92 = 0; i92 < b_loop_ub; i92++) {
        moduleInstance->C_data[i91 + C_sizes_idx_0 * i92] = 0.0;
        c_loop_ub = K_sizes[1];
        for (i93 = 0; i93 < c_loop_ub; i93++) {
          moduleInstance->C_data[i91 + C_sizes_idx_0 * i92] +=
            moduleInstance->K_data[i91 + K_sizes[0] * i93] * c_PI_data[i93 +
            PI_sizes[0] * i92];
        }
      }
    }
  } else {
    C_sizes_idx_0 = (int16_T)K_sizes[0];
    C_sizes_idx_1 = (int16_T)PI_sizes[1];
    loop_ub = (int16_T)PI_sizes[1];
    for (i91 = 0; i91 < loop_ub; i91++) {
      for (i92 = 0; i92 < C_sizes_idx_0; i92++) {
        moduleInstance->C_data[i92 + C_sizes_idx_0 * i91] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((K_sizes[0] < 1) || (PI_sizes[1] < 1) || (K_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)K_sizes[0];
      n_t = (ptrdiff_t)PI_sizes[1];
      k_t = (ptrdiff_t)K_sizes[1];
      lda_t = (ptrdiff_t)K_sizes[0];
      ldb_t = (ptrdiff_t)K_sizes[1];
      ldc_t = (ptrdiff_t)K_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->b_a_data[0], &lda_t, &moduleInstance->b_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->C_data[0], &ldc_t);
    }
  }

  st.site = &of_emlrtRSI;
  for (i91 = 0; i91 < y_sizes_idx_1; i91++) {
    h_b_data[i91] = n_C_data[i91] - g_b_data[i91];
  }

  b_st.site = &he_emlrtRSI;
  if (!(C_sizes_idx_1 == y_sizes_idx_1)) {
    if (((C_sizes_idx_0 == 1) && (C_sizes_idx_1 == 1)) || (y_sizes_idx_1 == 1))
    {
      for (i91 = 0; i91 < 45; i91++) {
        l_u[i91] = cv57[i91];
      }

      l_y = NULL;
      m27 = emlrtCreateCharArray(2, iv166);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &l_u[0]);
      emlrtAssign(&l_y, m27);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, l_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        k_u[i91] = cv56[i91];
      }

      k_y = NULL;
      m27 = emlrtCreateCharArray(2, iv165);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &k_u[0]);
      emlrtAssign(&k_y, m27);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, k_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((C_sizes_idx_1 == 1) || (y_sizes_idx_1 == 1)) {
    y_sizes_idx_1 = C_sizes_idx_0;
    for (i91 = 0; i91 < C_sizes_idx_0; i91++) {
      delta_data[i91] = 0.0;
      for (i92 = 0; i92 < C_sizes_idx_1; i92++) {
        delta_data[i91] += moduleInstance->C_data[i91 + C_sizes_idx_0 * i92] *
          Z_data[i92];
      }
    }
  } else {
    y_sizes_idx_0 = (int8_T)C_sizes_idx_0;
    y_sizes_idx_1 = (int8_T)C_sizes_idx_0;
    for (i91 = 0; i91 < y_sizes_idx_0; i91++) {
      delta_data[i91] = 0.0;
    }

    b_st.site = &ge_emlrtRSI;
    if ((C_sizes_idx_0 < 1) || (C_sizes_idx_1 < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)C_sizes_idx_0;
      n_t = (ptrdiff_t)1;
      k_t = (ptrdiff_t)C_sizes_idx_1;
      lda_t = (ptrdiff_t)C_sizes_idx_0;
      ldb_t = (ptrdiff_t)C_sizes_idx_1;
      ldc_t = (ptrdiff_t)C_sizes_idx_0;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &moduleInstance->
            C_data[0], &lda_t, &h_b_data[0], &ldb_t, &Xdim, &delta_data[0],
            &ldc_t);
    }
  }

  emlrtDimSizeGeqCheckR2012b(81, y_sizes_idx_1, &k_emlrtECI, sp);
  if (1 > y_sizes_idx_1 - 6) {
    loop_ub = 0;
  } else {
    emlrtDynamicBoundsCheckR2012b(1, 1, y_sizes_idx_1, &qc_emlrtBCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(y_sizes_idx_1 - 6, 1, y_sizes_idx_1,
      &qc_emlrtBCI, sp);
  }

  iv167[0] = 1;
  iv167[1] = loop_ub;
  st.site = &pf_emlrtRSI;
  indexShapeCheck(&st, y_sizes_idx_1, iv167);
  for (i91 = 0; i91 < loop_ub; i91++) {
    b_delta_data[i91] = delta_data[i91];
  }

  st.site = &pf_emlrtRSI;
  RIEKF_exp(moduleInstance, &st, b_delta_data, loop_ub, dX_data, dX_sizes);
  st.site = &qf_emlrtRSI;
  b_indexShapeCheck(&st, y_sizes_idx_1);
  for (i91 = 0; i91 < 6; i91++) {
    dtheta[i91] = delta_data[emlrtDynamicBoundsCheckR2012b((i91 + y_sizes_idx_1)
      - 5, 1, y_sizes_idx_1, &tc_emlrtBCI, sp) - 1];
  }

  st.site = &rf_emlrtRSI;
  loop_ub = dX_sizes[0] * dX_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->b_a_data[i91] = dX_data[i91];
  }

  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->b_b_data[i91] = moduleInstance->Xa_data[i91];
  }

  b_st.site = &he_emlrtRSI;
  if (!(dX_sizes[1] == tmp_sizes[0])) {
    if (((dX_sizes[0] == 1) && (dX_sizes[1] == 1)) || ((tmp_sizes[0] == 1) &&
         (tmp_sizes[1] == 1))) {
      for (i91 = 0; i91 < 45; i91++) {
        n_u[i91] = cv57[i91];
      }

      n_y = NULL;
      m27 = emlrtCreateCharArray(2, iv169);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &n_u[0]);
      emlrtAssign(&n_y, m27);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, n_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        m_u[i91] = cv56[i91];
      }

      m_y = NULL;
      m27 = emlrtCreateCharArray(2, iv168);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &m_u[0]);
      emlrtAssign(&m_y, m27);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, m_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((dX_sizes[1] == 1) || (tmp_sizes[0] == 1)) {
    y_sizes_idx_0 = dX_sizes[0];
    loop_ub = dX_sizes[0];
    for (i91 = 0; i91 < loop_ub; i91++) {
      b_loop_ub = Xa_sizes[1];
      for (i92 = 0; i92 < b_loop_ub; i92++) {
        moduleInstance->c_y_data[i91 + y_sizes_idx_0 * i92] = 0.0;
        c_loop_ub = dX_sizes[1];
        for (i93 = 0; i93 < c_loop_ub; i93++) {
          moduleInstance->c_y_data[i91 + y_sizes_idx_0 * i92] += dX_data[i91 +
            dX_sizes[0] * i93] * moduleInstance->Xa_data[i93 + Xa_sizes[0] * i92];
        }
      }
    }

    Xa_sizes[0] = dX_sizes[0];
    Xa_sizes[1] = tmp_sizes[1];
    loop_ub = tmp_sizes[1];
    for (i91 = 0; i91 < loop_ub; i91++) {
      for (i92 = 0; i92 < y_sizes_idx_0; i92++) {
        moduleInstance->Xa_data[i92 + Xa_sizes[0] * i91] =
          moduleInstance->c_y_data[i92 + y_sizes_idx_0 * i91];
      }
    }
  } else {
    Xa_sizes[0] = (int16_T)dX_sizes[0];
    Xa_sizes[1] = (int16_T)tmp_sizes[1];
    loop_ub = (int16_T)tmp_sizes[1];
    for (i91 = 0; i91 < loop_ub; i91++) {
      b_loop_ub = Xa_sizes[0];
      for (i92 = 0; i92 < b_loop_ub; i92++) {
        moduleInstance->Xa_data[i92 + Xa_sizes[0] * i91] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((dX_sizes[0] < 1) || (tmp_sizes[1] < 1) || (dX_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)dX_sizes[0];
      n_t = (ptrdiff_t)tmp_sizes[1];
      k_t = (ptrdiff_t)dX_sizes[1];
      lda_t = (ptrdiff_t)dX_sizes[0];
      ldb_t = (ptrdiff_t)dX_sizes[1];
      ldc_t = (ptrdiff_t)dX_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->b_a_data[0], &lda_t, &moduleInstance->b_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->Xa_data[0], &ldc_t);
    }
  }

  for (i91 = 0; i91 < 7; i91++) {
    for (i92 = 0; i92 < 7; i92++) {
      obj->X[i92 + 7 * i91] = moduleInstance->Xa_data
        [(emlrtDynamicBoundsCheckR2012b(1 + i92, 1, Xa_sizes[0], &uc_emlrtBCI,
           sp) + Xa_sizes[0] * (emlrtDynamicBoundsCheckR2012b(1 + i91, 1,
            Xa_sizes[1], &vc_emlrtBCI, sp) - 1)) - 1];
    }
  }

  alpha1 = (8.0 + obj->num_landmarks) - 1.0;
  if (8.0 > alpha1) {
    i91 = 0;
    i92 = 0;
  } else {
    emlrtDynamicBoundsCheckR2012b(8, 1, Xa_sizes[1], &rc_emlrtBCI, sp);
    i91 = 7;
    i92 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &rb_emlrtDCI, sp);
    i92 = emlrtDynamicBoundsCheckR2012b(i92, 1, Xa_sizes[1], &rc_emlrtBCI, sp);
  }

  alpha1 = obj->num_landmarks;
  if (1.0 > alpha1) {
    i93 = 0;
  } else {
    i93 = (int32_T)emlrtIntegerCheckR2012b(alpha1, &sb_emlrtDCI, sp);
    i93 = emlrtDynamicBoundsCheckR2012b(i93, 1, 20, &sc_emlrtBCI, sp);
  }

  loop_ub = (int8_T)((int8_T)i93 - 1);
  for (y_sizes_idx_0 = 0; y_sizes_idx_0 <= loop_ub; y_sizes_idx_0++) {
    q_tmp_data[y_sizes_idx_0] = (int8_T)y_sizes_idx_0;
  }

  for (y_sizes_idx_0 = 0; y_sizes_idx_0 < 3; y_sizes_idx_0++) {
    emlrtDynamicBoundsCheckR2012b(y_sizes_idx_0 + 1, 1, Xa_sizes[0],
      &wc_emlrtBCI, sp);
  }

  iv170[0] = 3;
  iv170[1] = (int8_T)((int8_T)i93 - 1) + 1;
  b_Xa_sizes[0] = 3;
  b_Xa_sizes[1] = i92 - i91;
  for (i93 = 0; i93 < 2; i93++) {
    dX_sizes[i93] = b_Xa_sizes[i93];
  }

  emlrtSubAssignSizeCheckR2012b(iv170, 2, dX_sizes, 2, &l_emlrtECI, sp);
  loop_ub = i92 - i91;
  for (i92 = 0; i92 < loop_ub; i92++) {
    for (i93 = 0; i93 < 3; i93++) {
      obj->landmarks[i93 + 3 * q_tmp_data[i92]] = moduleInstance->Xa_data[i93 +
        Xa_sizes[0] * (i91 + i92)];
    }
  }

  for (i91 = 0; i91 < 6; i91++) {
    obj->theta[i91] += dtheta[i91];
  }

  /*  Update Covariance */
  for (i91 = 0; i91 < 2; i91++) {
    Pa[i91] = (real_T)Pa_sizes[i91];
  }

  st.site = &sf_emlrtRSI;
  b_eye(&st, Pa, moduleInstance->b_tmp_data, tmp_sizes);
  I_sizes[0] = tmp_sizes[0];
  I_sizes[1] = tmp_sizes[1];
  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->I_data[i91] = moduleInstance->b_tmp_data[i91];
  }

  st.site = &tf_emlrtRSI;
  loop_ub = K_sizes[0] * K_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->b_a_data[i91] = moduleInstance->K_data[i91];
  }

  loop_ub = H_sizes[0] * H_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->b_b_data[i91] = H_data[i91];
  }

  b_st.site = &he_emlrtRSI;
  if (!(K_sizes[1] == H_sizes[0])) {
    if (((K_sizes[0] == 1) && (K_sizes[1] == 1)) || ((H_sizes[0] == 1) &&
         (H_sizes[1] == 1))) {
      for (i91 = 0; i91 < 45; i91++) {
        p_u[i91] = cv57[i91];
      }

      p_y = NULL;
      m27 = emlrtCreateCharArray(2, iv172);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &p_u[0]);
      emlrtAssign(&p_y, m27);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, p_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        o_u[i91] = cv56[i91];
      }

      o_y = NULL;
      m27 = emlrtCreateCharArray(2, iv171);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &o_u[0]);
      emlrtAssign(&o_y, m27);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, o_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((K_sizes[1] == 1) || (H_sizes[0] == 1)) {
    C_sizes[0] = K_sizes[0];
    C_sizes[1] = H_sizes[1];
    loop_ub = K_sizes[0];
    for (i91 = 0; i91 < loop_ub; i91++) {
      b_loop_ub = H_sizes[1];
      for (i92 = 0; i92 < b_loop_ub; i92++) {
        moduleInstance->b_C_data[i91 + C_sizes[0] * i92] = 0.0;
        c_loop_ub = K_sizes[1];
        for (i93 = 0; i93 < c_loop_ub; i93++) {
          moduleInstance->b_C_data[i91 + C_sizes[0] * i92] +=
            moduleInstance->K_data[i91 + K_sizes[0] * i93] * H_data[i93 +
            H_sizes[0] * i92];
        }
      }
    }
  } else {
    C_sizes[0] = (int16_T)K_sizes[0];
    C_sizes[1] = (int16_T)H_sizes[1];
    loop_ub = (int16_T)H_sizes[1];
    for (i91 = 0; i91 < loop_ub; i91++) {
      b_loop_ub = C_sizes[0];
      for (i92 = 0; i92 < b_loop_ub; i92++) {
        moduleInstance->b_C_data[i92 + C_sizes[0] * i91] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((K_sizes[0] < 1) || (H_sizes[1] < 1) || (K_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)K_sizes[0];
      n_t = (ptrdiff_t)H_sizes[1];
      k_t = (ptrdiff_t)K_sizes[1];
      lda_t = (ptrdiff_t)K_sizes[0];
      ldb_t = (ptrdiff_t)K_sizes[1];
      ldc_t = (ptrdiff_t)K_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->b_a_data[0], &lda_t, &moduleInstance->b_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->b_C_data[0], &ldc_t);
    }
  }

  for (i91 = 0; i91 < 2; i91++) {
    dX_sizes[i91] = I_sizes[i91];
    y_sizes[i91] = C_sizes[i91];
  }

  emlrtSizeEqCheckNDR2012b(dX_sizes, y_sizes, &m_emlrtECI, sp);
  st.site = &tf_emlrtRSI;
  loop_ub = K_sizes[0] * K_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->b_a_data[i91] = moduleInstance->K_data[i91];
  }

  loop_ub = H_sizes[0] * H_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->b_b_data[i91] = H_data[i91];
  }

  b_st.site = &he_emlrtRSI;
  if (!(K_sizes[1] == H_sizes[0])) {
    if (((K_sizes[0] == 1) && (K_sizes[1] == 1)) || ((H_sizes[0] == 1) &&
         (H_sizes[1] == 1))) {
      for (i91 = 0; i91 < 45; i91++) {
        r_u[i91] = cv57[i91];
      }

      r_y = NULL;
      m27 = emlrtCreateCharArray(2, iv174);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &r_u[0]);
      emlrtAssign(&r_y, m27);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, r_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        q_u[i91] = cv56[i91];
      }

      q_y = NULL;
      m27 = emlrtCreateCharArray(2, iv173);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &q_u[0]);
      emlrtAssign(&q_y, m27);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, q_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((K_sizes[1] == 1) || (H_sizes[0] == 1)) {
    b_C_sizes[0] = K_sizes[0];
    b_C_sizes[1] = H_sizes[1];
    loop_ub = K_sizes[0];
    for (i91 = 0; i91 < loop_ub; i91++) {
      b_loop_ub = H_sizes[1];
      for (i92 = 0; i92 < b_loop_ub; i92++) {
        moduleInstance->c_C_data[i91 + b_C_sizes[0] * i92] = 0.0;
        c_loop_ub = K_sizes[1];
        for (i93 = 0; i93 < c_loop_ub; i93++) {
          moduleInstance->c_C_data[i91 + b_C_sizes[0] * i92] +=
            moduleInstance->K_data[i91 + K_sizes[0] * i93] * H_data[i93 +
            H_sizes[0] * i92];
        }
      }
    }
  } else {
    b_C_sizes[0] = (int16_T)K_sizes[0];
    b_C_sizes[1] = (int16_T)H_sizes[1];
    loop_ub = (int16_T)H_sizes[1];
    for (i91 = 0; i91 < loop_ub; i91++) {
      b_loop_ub = b_C_sizes[0];
      for (i92 = 0; i92 < b_loop_ub; i92++) {
        moduleInstance->c_C_data[i92 + b_C_sizes[0] * i91] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((K_sizes[0] < 1) || (H_sizes[1] < 1) || (K_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)K_sizes[0];
      n_t = (ptrdiff_t)H_sizes[1];
      k_t = (ptrdiff_t)K_sizes[1];
      lda_t = (ptrdiff_t)K_sizes[0];
      ldb_t = (ptrdiff_t)K_sizes[1];
      ldc_t = (ptrdiff_t)K_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->b_a_data[0], &lda_t, &moduleInstance->b_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->c_C_data[0], &ldc_t);
    }
  }

  for (i91 = 0; i91 < 2; i91++) {
    dX_sizes[i91] = I_sizes[i91];
    y_sizes[i91] = b_C_sizes[i91];
  }

  emlrtSizeEqCheckNDR2012b(dX_sizes, y_sizes, &n_emlrtECI, sp);
  st.site = &tf_emlrtRSI;
  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->b_C_data[i91] = moduleInstance->I_data[i91] -
      moduleInstance->b_C_data[i91];
  }

  loop_ub = Pa_sizes[0] * Pa_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->b_b_data[i91] = moduleInstance->c_Pa_data[i91];
  }

  b_st.site = &he_emlrtRSI;
  if (!(tmp_sizes[1] == Pa_sizes[0])) {
    if (((tmp_sizes[0] == 1) && (tmp_sizes[1] == 1)) || ((Pa_sizes[0] == 1) &&
         (Pa_sizes[1] == 1))) {
      for (i91 = 0; i91 < 45; i91++) {
        t_u[i91] = cv57[i91];
      }

      t_y = NULL;
      m27 = emlrtCreateCharArray(2, iv176);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &t_u[0]);
      emlrtAssign(&t_y, m27);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, t_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        s_u[i91] = cv56[i91];
      }

      s_y = NULL;
      m27 = emlrtCreateCharArray(2, iv175);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &s_u[0]);
      emlrtAssign(&s_y, m27);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, s_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((tmp_sizes[1] == 1) || (Pa_sizes[0] == 1)) {
    C_sizes_idx_0 = tmp_sizes[0];
    C_sizes_idx_1 = Pa_sizes[1];
    loop_ub = tmp_sizes[0];
    for (i91 = 0; i91 < loop_ub; i91++) {
      b_loop_ub = Pa_sizes[1];
      for (i92 = 0; i92 < b_loop_ub; i92++) {
        moduleInstance->d_C_data[i91 + C_sizes_idx_0 * i92] = 0.0;
        c_loop_ub = tmp_sizes[1];
        for (i93 = 0; i93 < c_loop_ub; i93++) {
          moduleInstance->d_C_data[i91 + C_sizes_idx_0 * i92] +=
            moduleInstance->b_C_data[i91 + tmp_sizes[0] * i93] *
            moduleInstance->c_Pa_data[i93 + Pa_sizes[0] * i92];
        }
      }
    }
  } else {
    C_sizes_idx_0 = (int16_T)tmp_sizes[0];
    C_sizes_idx_1 = (int16_T)Pa_sizes[1];
    loop_ub = (int16_T)Pa_sizes[1];
    for (i91 = 0; i91 < loop_ub; i91++) {
      for (i92 = 0; i92 < C_sizes_idx_0; i92++) {
        moduleInstance->d_C_data[i92 + C_sizes_idx_0 * i91] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((tmp_sizes[0] < 1) || (Pa_sizes[1] < 1) || (tmp_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)tmp_sizes[0];
      n_t = (ptrdiff_t)Pa_sizes[1];
      k_t = (ptrdiff_t)tmp_sizes[1];
      lda_t = (ptrdiff_t)tmp_sizes[0];
      ldb_t = (ptrdiff_t)tmp_sizes[1];
      ldc_t = (ptrdiff_t)tmp_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->b_C_data[0], &lda_t, &moduleInstance->b_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->d_C_data[0], &ldc_t);
    }
  }

  st.site = &tf_emlrtRSI;
  b_sizes_idx_0 = tmp_sizes[1];
  loop_ub = tmp_sizes[0];
  for (i91 = 0; i91 < loop_ub; i91++) {
    b_loop_ub = I_sizes[1];
    for (i92 = 0; i92 < b_loop_ub; i92++) {
      moduleInstance->b_b_data[i92 + b_sizes_idx_0 * i91] =
        moduleInstance->I_data[i91 + I_sizes[0] * i92] -
        moduleInstance->c_C_data[i91 + b_C_sizes[0] * i92];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(C_sizes_idx_1 == tmp_sizes[1])) {
    if (((C_sizes_idx_0 == 1) && (C_sizes_idx_1 == 1)) || ((tmp_sizes[1] == 1) &&
         (tmp_sizes[0] == 1))) {
      for (i91 = 0; i91 < 45; i91++) {
        v_u[i91] = cv57[i91];
      }

      v_y = NULL;
      m27 = emlrtCreateCharArray(2, iv178);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &v_u[0]);
      emlrtAssign(&v_y, m27);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, v_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        u_u[i91] = cv56[i91];
      }

      u_y = NULL;
      m27 = emlrtCreateCharArray(2, iv177);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &u_u[0]);
      emlrtAssign(&u_y, m27);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, u_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((C_sizes_idx_1 == 1) || (tmp_sizes[1] == 1)) {
    c_C_sizes[0] = C_sizes_idx_0;
    c_C_sizes[1] = tmp_sizes[0];
    for (i91 = 0; i91 < C_sizes_idx_0; i91++) {
      loop_ub = tmp_sizes[0];
      for (i92 = 0; i92 < loop_ub; i92++) {
        moduleInstance->e_C_data[i91 + C_sizes_idx_0 * i92] = 0.0;
        for (i93 = 0; i93 < C_sizes_idx_1; i93++) {
          moduleInstance->e_C_data[i91 + C_sizes_idx_0 * i92] +=
            moduleInstance->d_C_data[i91 + C_sizes_idx_0 * i93] *
            moduleInstance->b_b_data[i93 + b_sizes_idx_0 * i92];
        }
      }
    }
  } else {
    c_C_sizes[0] = (int16_T)C_sizes_idx_0;
    c_C_sizes[1] = (int16_T)tmp_sizes[0];
    loop_ub = (int16_T)tmp_sizes[0];
    for (i91 = 0; i91 < loop_ub; i91++) {
      b_loop_ub = (int16_T)C_sizes_idx_0;
      for (i92 = 0; i92 < b_loop_ub; i92++) {
        moduleInstance->e_C_data[i92 + (int16_T)C_sizes_idx_0 * i91] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((C_sizes_idx_0 < 1) || (tmp_sizes[0] < 1) || (C_sizes_idx_1 < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)C_sizes_idx_0;
      n_t = (ptrdiff_t)tmp_sizes[0];
      k_t = (ptrdiff_t)C_sizes_idx_1;
      lda_t = (ptrdiff_t)C_sizes_idx_0;
      ldb_t = (ptrdiff_t)C_sizes_idx_1;
      ldc_t = (ptrdiff_t)C_sizes_idx_0;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->d_C_data[0], &lda_t, &moduleInstance->b_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->e_C_data[0], &ldc_t);
    }
  }

  st.site = &tf_emlrtRSI;
  loop_ub = K_sizes[0] * K_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->b_a_data[i91] = moduleInstance->K_data[i91];
  }

  loop_ub = N_sizes[0] * N_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->b_b_data[i91] = b_N_data[i91];
  }

  b_st.site = &he_emlrtRSI;
  if (!(K_sizes[1] == N_sizes[0])) {
    if (((K_sizes[0] == 1) && (K_sizes[1] == 1)) || ((N_sizes[0] == 1) &&
         (N_sizes[1] == 1))) {
      for (i91 = 0; i91 < 45; i91++) {
        x_u[i91] = cv57[i91];
      }

      x_y = NULL;
      m27 = emlrtCreateCharArray(2, iv180);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &x_u[0]);
      emlrtAssign(&x_y, m27);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, x_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        w_u[i91] = cv56[i91];
      }

      w_y = NULL;
      m27 = emlrtCreateCharArray(2, iv179);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &w_u[0]);
      emlrtAssign(&w_y, m27);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, w_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((K_sizes[1] == 1) || (N_sizes[0] == 1)) {
    C_sizes_idx_0 = K_sizes[0];
    C_sizes_idx_1 = N_sizes[1];
    loop_ub = K_sizes[0];
    for (i91 = 0; i91 < loop_ub; i91++) {
      b_loop_ub = N_sizes[1];
      for (i92 = 0; i92 < b_loop_ub; i92++) {
        moduleInstance->f_C_data[i91 + C_sizes_idx_0 * i92] = 0.0;
        c_loop_ub = K_sizes[1];
        for (i93 = 0; i93 < c_loop_ub; i93++) {
          moduleInstance->f_C_data[i91 + C_sizes_idx_0 * i92] +=
            moduleInstance->K_data[i91 + K_sizes[0] * i93] * b_N_data[i93 +
            N_sizes[0] * i92];
        }
      }
    }
  } else {
    C_sizes_idx_0 = (int16_T)K_sizes[0];
    C_sizes_idx_1 = (int16_T)N_sizes[1];
    loop_ub = (int16_T)N_sizes[1];
    for (i91 = 0; i91 < loop_ub; i91++) {
      for (i92 = 0; i92 < C_sizes_idx_0; i92++) {
        moduleInstance->f_C_data[i92 + C_sizes_idx_0 * i91] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((K_sizes[0] < 1) || (N_sizes[1] < 1) || (K_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)K_sizes[0];
      n_t = (ptrdiff_t)N_sizes[1];
      k_t = (ptrdiff_t)K_sizes[1];
      lda_t = (ptrdiff_t)K_sizes[0];
      ldb_t = (ptrdiff_t)K_sizes[1];
      ldc_t = (ptrdiff_t)K_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->b_a_data[0], &lda_t, &moduleInstance->b_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->f_C_data[0], &ldc_t);
    }
  }

  st.site = &tf_emlrtRSI;
  b_sizes_idx_0 = K_sizes[1];
  loop_ub = K_sizes[0];
  for (i91 = 0; i91 < loop_ub; i91++) {
    b_loop_ub = K_sizes[1];
    for (i92 = 0; i92 < b_loop_ub; i92++) {
      moduleInstance->b_b_data[i92 + b_sizes_idx_0 * i91] =
        moduleInstance->K_data[i91 + K_sizes[0] * i92];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(C_sizes_idx_1 == K_sizes[1])) {
    if (((C_sizes_idx_0 == 1) && (C_sizes_idx_1 == 1)) || ((K_sizes[1] == 1) &&
         (K_sizes[0] == 1))) {
      for (i91 = 0; i91 < 45; i91++) {
        ab_u[i91] = cv57[i91];
      }

      ab_y = NULL;
      m27 = emlrtCreateCharArray(2, iv182);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &ab_u[0]);
      emlrtAssign(&ab_y, m27);
      c_st.site = &sk_emlrtRSI;
      g_error(&c_st, message(&c_st, ab_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        y_u[i91] = cv56[i91];
      }

      y_y = NULL;
      m27 = emlrtCreateCharArray(2, iv181);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &y_u[0]);
      emlrtAssign(&y_y, m27);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, message(&c_st, y_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((C_sizes_idx_1 == 1) || (K_sizes[1] == 1)) {
    d_C_sizes[0] = C_sizes_idx_0;
    d_C_sizes[1] = K_sizes[0];
    for (i91 = 0; i91 < C_sizes_idx_0; i91++) {
      loop_ub = K_sizes[0];
      for (i92 = 0; i92 < loop_ub; i92++) {
        moduleInstance->g_C_data[i91 + C_sizes_idx_0 * i92] = 0.0;
        for (i93 = 0; i93 < C_sizes_idx_1; i93++) {
          moduleInstance->g_C_data[i91 + C_sizes_idx_0 * i92] +=
            moduleInstance->f_C_data[i91 + C_sizes_idx_0 * i93] *
            moduleInstance->b_b_data[i93 + b_sizes_idx_0 * i92];
        }
      }
    }
  } else {
    d_C_sizes[0] = (int16_T)C_sizes_idx_0;
    d_C_sizes[1] = (int16_T)K_sizes[0];
    loop_ub = (int16_T)K_sizes[0];
    for (i91 = 0; i91 < loop_ub; i91++) {
      b_loop_ub = (int16_T)C_sizes_idx_0;
      for (i92 = 0; i92 < b_loop_ub; i92++) {
        moduleInstance->g_C_data[i92 + (int16_T)C_sizes_idx_0 * i91] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((C_sizes_idx_0 < 1) || (K_sizes[0] < 1) || (C_sizes_idx_1 < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)C_sizes_idx_0;
      n_t = (ptrdiff_t)K_sizes[0];
      k_t = (ptrdiff_t)C_sizes_idx_1;
      lda_t = (ptrdiff_t)C_sizes_idx_0;
      ldb_t = (ptrdiff_t)C_sizes_idx_1;
      ldc_t = (ptrdiff_t)C_sizes_idx_0;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->f_C_data[0], &lda_t, &moduleInstance->b_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->g_C_data[0], &ldc_t);
    }
  }

  for (i91 = 0; i91 < 2; i91++) {
    y_sizes[i91] = c_C_sizes[i91];
    dX_sizes[i91] = d_C_sizes[i91];
  }

  emlrtSizeEqCheckNDR2012b(y_sizes, dX_sizes, &o_emlrtECI, sp);
  e_C_sizes[0] = c_C_sizes[0];
  e_C_sizes[1] = c_C_sizes[1];
  loop_ub = c_C_sizes[0] * c_C_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->C_data[i91] = moduleInstance->e_C_data[i91] +
      moduleInstance->g_C_data[i91];
  }

  st.site = &tf_emlrtRSI;
  c_RIEKF_Store_Covariance(moduleInstance, &st, obj, moduleInstance->C_data,
    e_C_sizes);

  /*  Joseph update form */
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[45])
{
  const mxArray *y;
  const mxArray *m28;
  static const int32_T iv183[2] = { 1, 45 };

  y = NULL;
  m28 = emlrtCreateCharArray(2, iv183);
  emlrtInitCharArrayR2013a(sp, 45, m28, &u[0]);
  emlrtAssign(&y, m28);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [30])
{
  const mxArray *y;
  const mxArray *m29;
  static const int32_T iv184[2] = { 1, 30 };

  y = NULL;
  m29 = emlrtCreateCharArray(2, iv184);
  emlrtInitCharArrayR2013a(sp, 30, m29, &u[0]);
  emlrtAssign(&y, m29);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u[4])
{
  const mxArray *y;
  const mxArray *m30;
  static const int32_T iv185[2] = { 1, 4 };

  y = NULL;
  m30 = emlrtCreateCharArray(2, iv185);
  emlrtInitCharArrayR2013a(sp, 4, m30, &u[0]);
  emlrtAssign(&y, m30);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_sprintf,
  const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(c_sprintf), &thisId, y);
  emlrtDestroyArray(&c_sprintf);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void cgxe_mdl_start(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack b_st;
  emlrtStack c_st;
  const mxArray *m31;
  static const int32_T iv186[2] = { 0, 0 };

  static const int32_T iv187[2] = { 0, 0 };

  int32_T cond_starts_0_0[1] = { 14368 };

  int32_T cond_ends_0_0[1] = { 14388 };

  int32_T postfix_exprs_0_0[2] = { 0, -1 };

  int32_T cond_starts_0_1[2] = { 14412, 14427 };

  int32_T cond_ends_0_1[2] = { 14423, 14438 };

  int32_T postfix_exprs_0_1[3] = { 0, 1, -3 };

  int32_T cond_starts_0_2[2] = { 15537, 15548 };

  int32_T cond_ends_0_2[2] = { 15543, 15566 };

  int32_T postfix_exprs_0_2[4] = { 0, 1, -1, -3 };

  int32_T cond_starts_0_3[2] = { 15827, 15838 };

  int32_T cond_ends_0_3[2] = { 15833, 15856 };

  int32_T postfix_exprs_0_3[5] = { 0, -1, 1, -1, -2 };

  int32_T cond_starts_0_4[2] = { 20953, 20972 };

  int32_T cond_ends_0_4[2] = { 20968, 20987 };

  int32_T postfix_exprs_0_4[3] = { 0, 1, -3 };

  int32_T cond_starts_0_5[1] = { 24329 };

  int32_T cond_ends_0_5[1] = { 24340 };

  int32_T postfix_exprs_0_5[2] = { 0, -1 };

  int32_T cond_starts_0_6[1] = { 24998 };

  int32_T cond_ends_0_6[1] = { 25009 };

  int32_T postfix_exprs_0_6[2] = { 0, -1 };

  int32_T cond_starts_0_7[1] = { 25667 };

  int32_T cond_ends_0_7[1] = { 25677 };

  int32_T postfix_exprs_0_7[2] = { 0, -1 };

  int32_T cond_starts_0_8[1] = { 26327 };

  int32_T cond_ends_0_8[1] = { 26338 };

  int32_T postfix_exprs_0_8[2] = { 0, -1 };

  int32_T cond_starts_0_9[1] = { 28308 };

  int32_T cond_ends_0_9[1] = { 28318 };

  int32_T postfix_exprs_0_9[2] = { 0, -1 };

  int32_T cond_starts_0_10[1] = { 28496 };

  int32_T cond_ends_0_10[1] = { 28518 };

  int32_T postfix_exprs_0_10[2] = { 0, -1 };

  int32_T cond_starts_0_11[2] = { 7449, 7461 };

  int32_T cond_ends_0_11[2] = { 7457, 7478 };

  int32_T postfix_exprs_0_11[3] = { 0, 1, -3 };

  int32_T cond_starts_0_12[1] = { 8167 };

  int32_T cond_ends_0_12[1] = { 8194 };

  int32_T postfix_exprs_0_12[2] = { 0, -1 };

  real_T varargin_5[3];
  real_T varargin_6[3];
  real_T varargin_7[3];
  real_T varargin_8[3];
  real_T varargin_9[3];
  int32_T i;
  real_T varargin_10[14];
  real_T varargin_11[3];
  real_T varargin_12[3];
  real_T varargin_13[3];
  real_T varargin_14[6];
  real_T varargin_15[3];
  real_T varargin_16[3];
  real_T varargin_17[3];
  real_T varargin_18[3];
  real_T varargin_19[3];
  real_T varargin_20[4];
  RIEKF *obj;
  emlrtStack d_st;
  const mxArray *y;
  char_T u[51];
  static char_T cv59[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  emlrtStack e_st;
  static const int32_T iv188[2] = { 1, 51 };

  const mxArray *b_y;
  char_T b_u[44];
  static char_T cv60[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static const int32_T iv189[2] = { 1, 44 };

  const mxArray *c_y;
  char_T c_u[5];
  static char_T cv61[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv190[2] = { 1, 5 };

  boolean_T flag;
  boolean_T *enable_static_landmarks;
  boolean_T *enable_bias_estimation;
  boolean_T *ekf_update_enabled;
  boolean_T *static_bias_initialization;
  real_T (*gyro_noise_std)[3];
  real_T (*gyro_bias_noise_std)[3];
  real_T (*accel_noise_std)[3];
  real_T (*encoder_noise_std)[14];
  real_T (*accel_bias_noise_std)[3];
  real_T (*contact_noise_std)[3];
  real_T (*landmark_noise_std)[3];
  real_T (*gyro_bias_init)[3];
  real_T (*accel_bias_init)[3];
  real_T (*prior_base_pose_std)[6];
  real_T (*prior_base_velocity_std)[3];
  real_T (*prior_contact_position_std)[3];
  real_T (*prior_gyro_bias_std)[3];
  real_T (*landmark_positions)[4];
  real_T (*prior_accel_bias_std)[3];
  real_T (*prior_forward_kinematics_std)[3];
  prior_forward_kinematics_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 18);
  prior_accel_bias_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 17);
  landmark_positions = (real_T (*)[4])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 19);
  prior_gyro_bias_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 16);
  prior_contact_position_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 15);
  prior_base_velocity_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 14);
  prior_base_pose_std = (real_T (*)[6])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 13);
  accel_bias_init = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 12);
  gyro_bias_init = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 11);
  landmark_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 10);
  contact_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 8);
  accel_bias_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 7);
  encoder_noise_std = (real_T (*)[14])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 9);
  accel_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 6);
  gyro_bias_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 5);
  gyro_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 4);
  static_bias_initialization = (boolean_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 0);
  ekf_update_enabled = (boolean_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 1);
  enable_bias_estimation = (boolean_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 2);
  enable_static_landmarks = (boolean_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 3);
  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  m31 = emlrtCreateNumericArray(2, iv186, mxDOUBLE_CLASS, mxREAL);
  emlrtAssignP(&b_eml_mx, m31);
  m31 = emlrtCreateCharArray(2, iv187);
  emlrtAssignP(&eml_mx, m31);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst,
                  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
                  "IEKF.m", 0U, 17U, 50U, 23U, 0U, 0U, 0U, 7U, 0U, 18U, 13U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst, 0U, 0U, "RIEKF_RIEKF", 27, -1, 32);
  covrtFcnInit(moduleInstance->covInst, 0U, 2U, "RIEKF_Store_Covariance", 10786,
               -1, 11425);
  covrtFcnInit(moduleInstance->covInst, 0U, 3U, "RIEKF_Augmented_Covariance",
               11443, -1, 11830);
  covrtFcnInit(moduleInstance->covInst, 0U, 4U, "RIEKF_Augmented_State", 11848,
               -1, 12120);
  covrtFcnInit(moduleInstance->covInst, 0U, 5U, "RIEKF_Separate_State", 12138,
               -1, 12634);
  covrtFcnInit(moduleInstance->covInst, 0U, 6U, "RIEKF_Construct_State", 12652,
               -1, 12931);
  covrtFcnInit(moduleInstance->covInst, 0U, 7U, "RIEKF_skew", 12949, -1, 13159);
  covrtFcnInit(moduleInstance->covInst, 0U, 8U, "RIEKF_exp", 13177, -1, 13811);
  covrtFcnInit(moduleInstance->covInst, 0U, 9U, "RIEKF_Adjoint", 13829, -1,
               14192);
  covrtFcnInit(moduleInstance->covInst, 0U, 10U, "RIEKF_InitializeBias", 14210,
               -1, 15328);
  covrtFcnInit(moduleInstance->covInst, 0U, 11U, "RIEKF_InitializeFilter", 15346,
               -1, 16222);
  covrtFcnInit(moduleInstance->covInst, 0U, 12U, "RIEKF_Predict_State", 16240,
               -1, 19129);
  covrtFcnInit(moduleInstance->covInst, 0U, 13U, "RIEKF_Update_State", 19147, -1,
               20683);
  covrtFcnInit(moduleInstance->covInst, 0U, 14U,
               "RIEKF_Update_ForwardKinematics", 20701, -1, 23747);
  covrtFcnInit(moduleInstance->covInst, 0U, 15U, "RIEKF_Update_StaticLandmarks",
               23764, -1, 25755);
  covrtFcnInit(moduleInstance->covInst, 0U, 16U, "RIEKF_Update_Landmarks", 25773,
               -1, 29795);
  covrtFcnInit(moduleInstance->covInst, 0U, 1U, "RIEKF_stepImpl", 6099, -1, 9023);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 0U, 27, -1, 32);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 8U, 10914, -1, 11412);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 9U, 11538, -1, 11817);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 10U, 11932, -1, 12107);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 11U, 12267, -1, 12600);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 12U, 12782, -1, 12918);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 13U, 13046, -1, 13146);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 17U, 13611, -1, 13798);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 16U, 13436, -1, 13581);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 15U, 13362, -1, 13401);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 14U, 13266, -1, 13318);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 19U, 14066, -1, 14163);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 18U, 13915, -1, 14024);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 22U, 15272, -1, 15299);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 21U, 15014, -1, 15165);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 20U, 14625, -1, 14878);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 24U, 15873, -1, 16180);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 23U, 15583, -1, 15739);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 25U, 16388, -1, 19116);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 28U, 20064, -1, 20636);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 27U, 19965, -1, 20034);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 26U, 19302, -1, 19920);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 32U, 23087, -1, 23688);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 31U, 22359, -1, 22978);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 30U, 21038, -1, 22237);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 29U, 20900, -1, 20923);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 39U, 25694, -1, 25726);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 38U, 25077, -1, 25568);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 37U, 24909, -1, 24976);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 36U, 24430, -1, 24668);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 35U, 24361, -1, 24380);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 34U, 24240, -1, 24307);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 33U, 23969, -1, 24173);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 49U, 28807, -1, 29709);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 48U, 28535, -1, 28595);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 47U, 28335, -1, 28403);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 46U, 27343, -1, 28209);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 45U, 27213, -1, 27300);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 44U, 27105, -1, 27159);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 43U, 26428, -1, 26857);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 42U, 26359, -1, 26378);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 41U, 26249, -1, 26305);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 40U, 25974, -1, 26182);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 7U, 8583, -1, 9009);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 6U, 8383, -1, 8423);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 5U, 8278, -1, 8324);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 4U, 8022, -1, 8069);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 3U, 7741, -1, 7835);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 2U, 7496, -1, 7532);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 1U, 7296, -1, 7328);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst, 0U, 5U, 13332, 13345, 13415, 13598);
  covrtIfInit(moduleInstance->covInst, 0U, 6U, 14314, 14347, 15251, 15316);
  covrtIfInit(moduleInstance->covInst, 0U, 7U, 14364, 14388, -1, 15238);
  covrtIfInit(moduleInstance->covInst, 0U, 8U, 14409, 14438, -1, 15218);
  covrtIfInit(moduleInstance->covInst, 0U, 9U, 14487, 14536, 14904, 15194);
  covrtIfInit(moduleInstance->covInst, 0U, 10U, 15534, 15566, -1, 15756);
  covrtIfInit(moduleInstance->covInst, 0U, 11U, 15823, 15856, -1, 16197);
  covrtIfInit(moduleInstance->covInst, 0U, 12U, 20950, 20987, 22276, 22298);
  covrtIfInit(moduleInstance->covInst, 0U, 13U, 22276, 22298, 23009, 23722);
  covrtIfInit(moduleInstance->covInst, 0U, 14U, 23009, 23031, -1, 23031);
  covrtIfInit(moduleInstance->covInst, 0U, 15U, 24325, 24340, -1, 24401);
  covrtIfInit(moduleInstance->covInst, 0U, 16U, 24994, 25009, -1, 25589);
  covrtIfInit(moduleInstance->covInst, 0U, 17U, 25663, 25677, -1, 25743);
  covrtIfInit(moduleInstance->covInst, 0U, 18U, 26323, 26338, -1, 26399);
  covrtIfInit(moduleInstance->covInst, 0U, 19U, 27178, 27192, 27318, 28230);
  covrtIfInit(moduleInstance->covInst, 0U, 20U, 28304, 28318, -1, 28420);
  covrtIfInit(moduleInstance->covInst, 0U, 21U, 28492, 28518, -1, 29770);
  covrtIfInit(moduleInstance->covInst, 0U, 22U, 28665, 28705, -1, 29734);
  covrtIfInit(moduleInstance->covInst, 0U, 0U, 7446, 7478, -1, 7549);
  covrtIfInit(moduleInstance->covInst, 0U, 1U, 7619, 7640, -1, 8525);
  covrtIfInit(moduleInstance->covInst, 0U, 2U, 7904, 7929, -1, 8496);
  covrtIfInit(moduleInstance->covInst, 0U, 3U, 8163, 8194, -1, 8476);
  covrtIfInit(moduleInstance->covInst, 0U, 4U, 8219, 8249, 8350, 8452);

  /* Initialize MCDC Information */
  covrtMcdcInit(moduleInstance->covInst, 0U, 2U, 14367, 14388, 1, 0,
                cond_starts_0_0, cond_ends_0_0, 2, postfix_exprs_0_0);
  covrtMcdcInit(moduleInstance->covInst, 0U, 3U, 14412, 14438, 2, 1,
                cond_starts_0_1, cond_ends_0_1, 3, postfix_exprs_0_1);
  covrtMcdcInit(moduleInstance->covInst, 0U, 4U, 15537, 15566, 2, 3,
                cond_starts_0_2, cond_ends_0_2, 4, postfix_exprs_0_2);
  covrtMcdcInit(moduleInstance->covInst, 0U, 5U, 15826, 15856, 2, 5,
                cond_starts_0_3, cond_ends_0_3, 5, postfix_exprs_0_3);
  covrtMcdcInit(moduleInstance->covInst, 0U, 6U, 20953, 20987, 2, 7,
                cond_starts_0_4, cond_ends_0_4, 3, postfix_exprs_0_4);
  covrtMcdcInit(moduleInstance->covInst, 0U, 7U, 24328, 24340, 1, 9,
                cond_starts_0_5, cond_ends_0_5, 2, postfix_exprs_0_5);
  covrtMcdcInit(moduleInstance->covInst, 0U, 8U, 24997, 25009, 1, 10,
                cond_starts_0_6, cond_ends_0_6, 2, postfix_exprs_0_6);
  covrtMcdcInit(moduleInstance->covInst, 0U, 9U, 25666, 25677, 1, 11,
                cond_starts_0_7, cond_ends_0_7, 2, postfix_exprs_0_7);
  covrtMcdcInit(moduleInstance->covInst, 0U, 10U, 26326, 26338, 1, 12,
                cond_starts_0_8, cond_ends_0_8, 2, postfix_exprs_0_8);
  covrtMcdcInit(moduleInstance->covInst, 0U, 11U, 28307, 28318, 1, 13,
                cond_starts_0_9, cond_ends_0_9, 2, postfix_exprs_0_9);
  covrtMcdcInit(moduleInstance->covInst, 0U, 12U, 28495, 28518, 1, 14,
                cond_starts_0_10, cond_ends_0_10, 2, postfix_exprs_0_10);
  covrtMcdcInit(moduleInstance->covInst, 0U, 0U, 7449, 7478, 2, 15,
                cond_starts_0_11, cond_ends_0_11, 3, postfix_exprs_0_11);
  covrtMcdcInit(moduleInstance->covInst, 0U, 1U, 8166, 8194, 1, 17,
                cond_starts_0_12, cond_ends_0_12, 2, postfix_exprs_0_12);

  /* Initialize For Information */
  covrtForInit(moduleInstance->covInst, 0U, 0U, 14038, 14050, 14180);
  covrtForInit(moduleInstance->covInst, 0U, 1U, 19934, 19949, 20051);
  covrtForInit(moduleInstance->covInst, 0U, 2U, 24187, 24224, 24417);
  covrtForInit(moduleInstance->covInst, 0U, 3U, 24747, 24784, 25605);
  covrtForInit(moduleInstance->covInst, 0U, 4U, 26196, 26233, 26415);
  covrtForInit(moduleInstance->covInst, 0U, 5U, 26943, 26980, 28246);
  covrtForInit(moduleInstance->covInst, 0U, 6U, 28613, 28645, 29754);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst, 0U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst,
                  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\utils\\+Angles\\Exp.m",
                  1U, 1U, 3U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst, 1U, 0U, "Exp", 0, -1, 330);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst, 1U, 2U, 245, -1, 320);
  covrtBasicBlockInit(moduleInstance->covInst, 1U, 1U, 219, -1, 234);
  covrtBasicBlockInit(moduleInstance->covInst, 1U, 0U, 161, -1, 197);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst, 1U, 0U, 200, 214, 236, 325);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst, 1U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst,
                  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\utils\\+Angles\\skew.m",
                  2U, 1U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst, 2U, 0U, "skew", 0, -1, 156);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst, 2U, 0U, 71, -1, 151);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst, 2U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst,
                  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_Model\\gen\\kin\\m\\p_VectorNav_to_RightToeBottom.m",
                  3U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst, 3U, 0U, "p_VectorNav_to_RightToeBottom",
               0, -1, 411);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst, 3U, 1U, 165, -1, 398);
  covrtBasicBlockInit(moduleInstance->covInst, 3U, 0U, 95, -1, 146);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst, 3U, 0U, 61, 86, 152, 407);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst, 3U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst,
                  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_Model\\gen\\kin\\m\\p_VectorNav_to_LeftToeBottom.m",
                  4U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst, 4U, 0U, "p_VectorNav_to_LeftToeBottom",
               0, -1, 407);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst, 4U, 1U, 163, -1, 394);
  covrtBasicBlockInit(moduleInstance->covInst, 4U, 0U, 94, -1, 144);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst, 4U, 0U, 60, 85, 150, 403);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst, 4U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst,
                  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_Model\\gen\\kin\\m\\R_VectorNav_to_RightToeBottom.m",
                  5U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst, 5U, 0U, "R_VectorNav_to_RightToeBottom",
               0, -1, 411);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst, 5U, 1U, 165, -1, 398);
  covrtBasicBlockInit(moduleInstance->covInst, 5U, 0U, 95, -1, 146);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst, 5U, 0U, 61, 86, 152, 407);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst, 5U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst,
                  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_Model\\gen\\kin\\m\\R_VectorNav_to_LeftToeBottom.m",
                  6U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst, 6U, 0U, "R_VectorNav_to_LeftToeBottom",
               0, -1, 407);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst, 6U, 1U, 163, -1, 394);
  covrtBasicBlockInit(moduleInstance->covInst, 6U, 0U, 94, -1, 144);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst, 6U, 0U, 60, 85, 150, 403);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst, 6U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst,
                  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_Model\\gen\\kin\\m\\J_VectorNav_to_RightToeBottom.m",
                  7U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst, 7U, 0U, "J_VectorNav_to_RightToeBottom",
               0, -1, 412);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst, 7U, 1U, 165, -1, 399);
  covrtBasicBlockInit(moduleInstance->covInst, 7U, 0U, 95, -1, 146);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst, 7U, 0U, 61, 86, 152, 408);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst, 7U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst,
                  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_Model\\gen\\kin\\m\\J_VectorNav_to_LeftToeBottom.m",
                  8U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst, 8U, 0U, "J_VectorNav_to_LeftToeBottom",
               0, -1, 408);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst, 8U, 1U, 163, -1, 395);
  covrtBasicBlockInit(moduleInstance->covInst, 8U, 0U, 94, -1, 144);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst, 8U, 0U, 60, 85, 150, 404);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst, 8U);
  for (i = 0; i < 3; i++) {
    varargin_5[i] = (*gyro_noise_std)[i];
    varargin_6[i] = (*gyro_bias_noise_std)[i];
    varargin_7[i] = (*accel_noise_std)[i];
    varargin_8[i] = (*accel_bias_noise_std)[i];
    varargin_9[i] = (*contact_noise_std)[i];
  }

  for (i = 0; i < 14; i++) {
    varargin_10[i] = (*encoder_noise_std)[i];
  }

  for (i = 0; i < 3; i++) {
    varargin_11[i] = (*landmark_noise_std)[i];
    varargin_12[i] = (*gyro_bias_init)[i];
    varargin_13[i] = (*accel_bias_init)[i];
  }

  for (i = 0; i < 6; i++) {
    varargin_14[i] = (*prior_base_pose_std)[i];
  }

  for (i = 0; i < 3; i++) {
    varargin_15[i] = (*prior_base_velocity_std)[i];
    varargin_16[i] = (*prior_contact_position_std)[i];
    varargin_17[i] = (*prior_gyro_bias_std)[i];
    varargin_18[i] = (*prior_accel_bias_std)[i];
    varargin_19[i] = (*prior_forward_kinematics_std)[i];
  }

  for (i = 0; i < 4; i++) {
    varargin_20[i] = (*landmark_positions)[i];
  }

  if (!moduleInstance->sysobj_not_empty) {
    b_st.site = &g_emlrtRSI;
    obj = &moduleInstance->sysobj;
    moduleInstance->sysobj.imu_init_count = 1.0;
    covrtLogFcn(moduleInstance->covInst, 0, 0);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 0);
    c_st.site = &emlrtRSI;
    d_st.site = &b_emlrtRSI;
    e_st.site = &c_emlrtRSI;
    d_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    obj->TunablePropsChanged = false;
    obj->CacheInputSizes = false;
    e_st.site = &d_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &f_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
    b_st.site = &h_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.static_bias_initialization =
      *static_bias_initialization;
    b_st.site = &i_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.ekf_update_enabled = *ekf_update_enabled;
    b_st.site = &j_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.enable_bias_estimation = *enable_bias_estimation;
    b_st.site = &k_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.enable_static_landmarks = *enable_static_landmarks;
    b_st.site = &l_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_noise_std[i] = varargin_5[i];
    }

    b_st.site = &m_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_noise_std[i] = varargin_6[i];
    }

    b_st.site = &n_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_noise_std[i] = varargin_7[i];
    }

    b_st.site = &o_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_noise_std[i] = varargin_8[i];
    }

    b_st.site = &p_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.contact_noise_std[i] = varargin_9[i];
    }

    b_st.site = &q_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 14; i++) {
      moduleInstance->sysobj.encoder_noise_std[i] = varargin_10[i];
    }

    b_st.site = &r_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.landmark_noise_std[i] = varargin_11[i];
    }

    b_st.site = &s_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_init[i] = varargin_12[i];
    }

    b_st.site = &t_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_init[i] = varargin_13[i];
    }

    b_st.site = &u_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 6; i++) {
      moduleInstance->sysobj.prior_base_pose_std[i] = varargin_14[i];
    }

    b_st.site = &v_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_base_velocity_std[i] = varargin_15[i];
    }

    b_st.site = &w_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_contact_position_std[i] = varargin_16[i];
    }

    b_st.site = &x_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_gyro_bias_std[i] = varargin_17[i];
    }

    b_st.site = &y_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_accel_bias_std[i] = varargin_18[i];
    }

    b_st.site = &ab_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_forward_kinematics_std[i] = varargin_19[i];
    }

    b_st.site = &bb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 4; i++) {
      moduleInstance->sysobj.landmark_positions[i] = varargin_20[i];
    }
  }

  b_st.site = &cb_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      u[i] = cv59[i];
    }

    y = NULL;
    m31 = emlrtCreateCharArray(2, iv188);
    emlrtInitCharArrayR2013a(&b_st, 51, m31, &u[0]);
    emlrtAssign(&y, m31);
    for (i = 0; i < 5; i++) {
      c_u[i] = cv61[i];
    }

    c_y = NULL;
    m31 = emlrtCreateCharArray(2, iv190);
    emlrtInitCharArrayR2013a(&b_st, 5, m31, &c_u[0]);
    emlrtAssign(&c_y, m31);
    g_error(&b_st, b_message(&b_st, y, c_y, &b_emlrtMCI), &b_emlrtMCI);
  }

  obj->isInitialized = 1;
  c_st.site = &d_emlrtRSI;
  RIEKF_setupImpl(obj);
  c_st.site = &d_emlrtRSI;
  if (obj->TunablePropsChanged) {
    for (i = 0; i < 44; i++) {
      b_u[i] = cv60[i];
    }

    b_y = NULL;
    m31 = emlrtCreateCharArray(2, iv189);
    emlrtInitCharArrayR2013a(&c_st, 44, m31, &b_u[0]);
    emlrtAssign(&b_y, m31);
    g_error(&c_st, message(&c_st, b_y, &b_emlrtMCI), &b_emlrtMCI);
  }

  obj->TunablePropsChanged = false;
}

static void cgxe_mdl_initialize(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack b_st;
  real_T varargin_5[3];
  real_T varargin_6[3];
  real_T varargin_7[3];
  real_T varargin_8[3];
  real_T varargin_9[3];
  int32_T i;
  real_T varargin_10[14];
  real_T varargin_11[3];
  real_T varargin_12[3];
  real_T varargin_13[3];
  real_T varargin_14[6];
  real_T varargin_15[3];
  real_T varargin_16[3];
  real_T varargin_17[3];
  real_T varargin_18[3];
  real_T varargin_19[3];
  real_T varargin_20[4];
  RIEKF *obj;
  boolean_T tunablePropChangedBeforeResetImpl;
  emlrtStack c_st;
  emlrtStack d_st;
  const mxArray *y;
  char_T u[45];
  static char_T cv62[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  emlrtStack e_st;
  const mxArray *m32;
  static const int32_T iv191[2] = { 1, 45 };

  const mxArray *b_y;
  char_T b_u[45];
  static const int32_T iv192[2] = { 1, 45 };

  const mxArray *c_y;
  char_T c_u[8];
  static char_T cv63[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  static const int32_T iv193[2] = { 1, 8 };

  const mxArray *d_y;
  char_T d_u[44];
  static char_T cv64[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static const int32_T iv194[2] = { 1, 44 };

  const mxArray *e_y;
  char_T e_u[5];
  static char_T cv65[5] = { 'r', 'e', 's', 'e', 't' };

  static const int32_T iv195[2] = { 1, 5 };

  boolean_T *enable_static_landmarks;
  boolean_T *enable_bias_estimation;
  boolean_T *ekf_update_enabled;
  boolean_T *static_bias_initialization;
  real_T (*gyro_noise_std)[3];
  real_T (*gyro_bias_noise_std)[3];
  real_T (*accel_noise_std)[3];
  real_T (*encoder_noise_std)[14];
  real_T (*accel_bias_noise_std)[3];
  real_T (*contact_noise_std)[3];
  real_T (*landmark_noise_std)[3];
  real_T (*gyro_bias_init)[3];
  real_T (*accel_bias_init)[3];
  real_T (*prior_base_pose_std)[6];
  real_T (*prior_base_velocity_std)[3];
  real_T (*prior_contact_position_std)[3];
  real_T (*prior_gyro_bias_std)[3];
  real_T (*landmark_positions)[4];
  real_T (*prior_accel_bias_std)[3];
  real_T (*prior_forward_kinematics_std)[3];
  prior_forward_kinematics_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 18);
  prior_accel_bias_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 17);
  landmark_positions = (real_T (*)[4])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 19);
  prior_gyro_bias_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 16);
  prior_contact_position_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 15);
  prior_base_velocity_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 14);
  prior_base_pose_std = (real_T (*)[6])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 13);
  accel_bias_init = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 12);
  gyro_bias_init = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 11);
  landmark_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 10);
  contact_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 8);
  accel_bias_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 7);
  encoder_noise_std = (real_T (*)[14])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 9);
  accel_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 6);
  gyro_bias_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 5);
  gyro_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 4);
  static_bias_initialization = (boolean_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 0);
  ekf_update_enabled = (boolean_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 1);
  enable_bias_estimation = (boolean_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 2);
  enable_static_landmarks = (boolean_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 3);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (i = 0; i < 3; i++) {
    varargin_5[i] = (*gyro_noise_std)[i];
    varargin_6[i] = (*gyro_bias_noise_std)[i];
    varargin_7[i] = (*accel_noise_std)[i];
    varargin_8[i] = (*accel_bias_noise_std)[i];
    varargin_9[i] = (*contact_noise_std)[i];
  }

  for (i = 0; i < 14; i++) {
    varargin_10[i] = (*encoder_noise_std)[i];
  }

  for (i = 0; i < 3; i++) {
    varargin_11[i] = (*landmark_noise_std)[i];
    varargin_12[i] = (*gyro_bias_init)[i];
    varargin_13[i] = (*accel_bias_init)[i];
  }

  for (i = 0; i < 6; i++) {
    varargin_14[i] = (*prior_base_pose_std)[i];
  }

  for (i = 0; i < 3; i++) {
    varargin_15[i] = (*prior_base_velocity_std)[i];
    varargin_16[i] = (*prior_contact_position_std)[i];
    varargin_17[i] = (*prior_gyro_bias_std)[i];
    varargin_18[i] = (*prior_accel_bias_std)[i];
    varargin_19[i] = (*prior_forward_kinematics_std)[i];
  }

  for (i = 0; i < 4; i++) {
    varargin_20[i] = (*landmark_positions)[i];
  }

  if (!moduleInstance->sysobj_not_empty) {
    b_st.site = &g_emlrtRSI;
    obj = &moduleInstance->sysobj;
    moduleInstance->sysobj.imu_init_count = 1.0;
    covrtLogFcn(moduleInstance->covInst, 0, 0);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 0);
    c_st.site = &emlrtRSI;
    d_st.site = &b_emlrtRSI;
    e_st.site = &c_emlrtRSI;
    d_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    obj->TunablePropsChanged = false;
    obj->CacheInputSizes = false;
    e_st.site = &d_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &f_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
    b_st.site = &h_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.static_bias_initialization =
      *static_bias_initialization;
    b_st.site = &i_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.ekf_update_enabled = *ekf_update_enabled;
    b_st.site = &j_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.enable_bias_estimation = *enable_bias_estimation;
    b_st.site = &k_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.enable_static_landmarks = *enable_static_landmarks;
    b_st.site = &l_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_noise_std[i] = varargin_5[i];
    }

    b_st.site = &m_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_noise_std[i] = varargin_6[i];
    }

    b_st.site = &n_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_noise_std[i] = varargin_7[i];
    }

    b_st.site = &o_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_noise_std[i] = varargin_8[i];
    }

    b_st.site = &p_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.contact_noise_std[i] = varargin_9[i];
    }

    b_st.site = &q_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 14; i++) {
      moduleInstance->sysobj.encoder_noise_std[i] = varargin_10[i];
    }

    b_st.site = &r_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.landmark_noise_std[i] = varargin_11[i];
    }

    b_st.site = &s_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_init[i] = varargin_12[i];
    }

    b_st.site = &t_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_init[i] = varargin_13[i];
    }

    b_st.site = &u_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 6; i++) {
      moduleInstance->sysobj.prior_base_pose_std[i] = varargin_14[i];
    }

    b_st.site = &v_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_base_velocity_std[i] = varargin_15[i];
    }

    b_st.site = &w_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_contact_position_std[i] = varargin_16[i];
    }

    b_st.site = &x_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_gyro_bias_std[i] = varargin_17[i];
    }

    b_st.site = &y_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_accel_bias_std[i] = varargin_18[i];
    }

    b_st.site = &ab_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_forward_kinematics_std[i] = varargin_19[i];
    }

    b_st.site = &bb_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 4; i++) {
      moduleInstance->sysobj.landmark_positions[i] = varargin_20[i];
    }
  }

  b_st.site = &ub_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = cv62[i];
    }

    y = NULL;
    m32 = emlrtCreateCharArray(2, iv191);
    emlrtInitCharArrayR2013a(&b_st, 45, m32, &u[0]);
    emlrtAssign(&y, m32);
    for (i = 0; i < 8; i++) {
      c_u[i] = cv63[i];
    }

    c_y = NULL;
    m32 = emlrtCreateCharArray(2, iv193);
    emlrtInitCharArrayR2013a(&b_st, 8, m32, &c_u[0]);
    emlrtAssign(&c_y, m32);
    g_error(&b_st, b_message(&b_st, y, c_y, &b_emlrtMCI), &b_emlrtMCI);
  }

  tunablePropChangedBeforeResetImpl = (obj->isInitialized == 1);
  if (tunablePropChangedBeforeResetImpl) {
    b_st.site = &vb_emlrtRSI;
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i = 0; i < 45; i++) {
        b_u[i] = cv62[i];
      }

      b_y = NULL;
      m32 = emlrtCreateCharArray(2, iv192);
      emlrtInitCharArrayR2013a(&b_st, 45, m32, &b_u[0]);
      emlrtAssign(&b_y, m32);
      for (i = 0; i < 5; i++) {
        e_u[i] = cv65[i];
      }

      e_y = NULL;
      m32 = emlrtCreateCharArray(2, iv195);
      emlrtInitCharArrayR2013a(&b_st, 5, m32, &e_u[0]);
      emlrtAssign(&e_y, m32);
      g_error(&b_st, b_message(&b_st, b_y, e_y, &b_emlrtMCI), &b_emlrtMCI);
    }

    tunablePropChangedBeforeResetImpl = obj->TunablePropsChanged;
    if ((int32_T)tunablePropChangedBeforeResetImpl != (int32_T)
        obj->TunablePropsChanged) {
      for (i = 0; i < 44; i++) {
        d_u[i] = cv64[i];
      }

      d_y = NULL;
      m32 = emlrtCreateCharArray(2, iv194);
      emlrtInitCharArrayR2013a(&b_st, 44, m32, &d_u[0]);
      emlrtAssign(&d_y, m32);
      g_error(&b_st, message(&b_st, d_y, &b_emlrtMCI), &b_emlrtMCI);
    }
  }
}

static void cgxe_mdl_outputs(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T dv12[3];
  real_T dv13[3];
  real_T dv14[3];
  real_T dv15[3];
  real_T dv16[3];
  int32_T i94;
  real_T dv17[14];
  real_T dv18[3];
  real_T dv19[3];
  real_T dv20[3];
  real_T dv21[6];
  real_T dv22[3];
  real_T dv23[3];
  real_T dv24[3];
  real_T dv25[3];
  real_T dv26[3];
  real_T dv27[4];
  real_T dv28[3];
  real_T dv29[3];
  real_T dv30[14];
  real_T dv31[2];
  real_T o_tmp_data[40];
  int32_T tmp_sizes[2];
  int32_T loop_ub;
  real_T dv32[49];
  int32_T b_y0_sizes[2];
  real_T c_y1[6];
  real_T y2[441];
  real_T b_y3;
  real_T y4[20];
  boolean_T *static_bias_initialization;
  boolean_T *ekf_update_enabled;
  boolean_T *enable_bias_estimation;
  boolean_T *enable_static_landmarks;
  real_T (*gyro_noise_std)[3];
  real_T (*gyro_bias_noise_std)[3];
  real_T (*accel_noise_std)[3];
  real_T (*encoder_noise_std)[14];
  real_T (*accel_bias_noise_std)[3];
  real_T (*contact_noise_std)[3];
  real_T (*landmark_noise_std)[3];
  real_T (*gyro_bias_init)[3];
  real_T (*accel_bias_init)[3];
  real_T (*prior_base_pose_std)[6];
  real_T (*prior_base_velocity_std)[3];
  real_T (*prior_contact_position_std)[3];
  real_T (*prior_gyro_bias_std)[3];
  real_T (*landmark_positions)[4];
  real_T (*prior_accel_bias_std)[3];
  real_T (*prior_forward_kinematics_std)[3];
  prior_forward_kinematics_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 18);
  prior_accel_bias_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 17);
  landmark_positions = (real_T (*)[4])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 19);
  prior_gyro_bias_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 16);
  prior_contact_position_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 15);
  prior_base_velocity_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 14);
  prior_base_pose_std = (real_T (*)[6])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 13);
  accel_bias_init = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 12);
  gyro_bias_init = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 11);
  landmark_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 10);
  contact_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 8);
  accel_bias_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 7);
  encoder_noise_std = (real_T (*)[14])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 9);
  accel_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 6);
  gyro_bias_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 5);
  gyro_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 4);
  enable_static_landmarks = (boolean_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 3);
  enable_bias_estimation = (boolean_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 2);
  ekf_update_enabled = (boolean_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 1);
  static_bias_initialization = (boolean_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  for (i94 = 0; i94 < 3; i94++) {
    dv12[i94] = (*gyro_noise_std)[i94];
    dv13[i94] = (*gyro_bias_noise_std)[i94];
    dv14[i94] = (*accel_noise_std)[i94];
    dv15[i94] = (*accel_bias_noise_std)[i94];
    dv16[i94] = (*contact_noise_std)[i94];
  }

  for (i94 = 0; i94 < 14; i94++) {
    dv17[i94] = (*encoder_noise_std)[i94];
  }

  for (i94 = 0; i94 < 3; i94++) {
    dv18[i94] = (*landmark_noise_std)[i94];
    dv19[i94] = (*gyro_bias_init)[i94];
    dv20[i94] = (*accel_bias_init)[i94];
  }

  for (i94 = 0; i94 < 6; i94++) {
    dv21[i94] = (*prior_base_pose_std)[i94];
  }

  for (i94 = 0; i94 < 3; i94++) {
    dv22[i94] = (*prior_base_velocity_std)[i94];
    dv23[i94] = (*prior_contact_position_std)[i94];
    dv24[i94] = (*prior_gyro_bias_std)[i94];
    dv25[i94] = (*prior_accel_bias_std)[i94];
    dv26[i94] = (*prior_forward_kinematics_std)[i94];
  }

  for (i94 = 0; i94 < 4; i94++) {
    dv27[i94] = (*landmark_positions)[i94];
  }

  for (i94 = 0; i94 < 3; i94++) {
    dv28[i94] = (*moduleInstance->u2)[i94];
    dv29[i94] = (*moduleInstance->u3)[i94];
  }

  for (i94 = 0; i94 < 14; i94++) {
    dv30[i94] = (*moduleInstance->u4)[i94];
  }

  for (i94 = 0; i94 < 2; i94++) {
    dv31[i94] = (*moduleInstance->u5)[i94];
  }

  tmp_sizes[0] = (*moduleInstance->u6_sizes)[0];
  tmp_sizes[1] = (*moduleInstance->u6_sizes)[1];
  loop_ub = (*moduleInstance->u6_sizes)[0] * (*moduleInstance->u6_sizes)[1];
  for (i94 = 0; i94 < loop_ub; i94++) {
    o_tmp_data[i94] = (*moduleInstance->u6_data)[i94];
  }

  for (i94 = 0; i94 < 49; i94++) {
    dv32[i94] = (*moduleInstance->u7)[i94];
  }

  mw__internal__system___fcn(moduleInstance, &st, *static_bias_initialization,
    *ekf_update_enabled, *enable_bias_estimation, *enable_static_landmarks, dv12,
    dv13, dv14, dv15, dv16, dv17, dv18, dv19, dv20, dv21, dv22, dv23, dv24, dv25,
    dv26, dv27, *moduleInstance->u0, *moduleInstance->u1, dv28, dv29, dv30, dv31,
    o_tmp_data, tmp_sizes, dv32, moduleInstance->b_y0_data, b_y0_sizes, c_y1, y2,
    &b_y3, y4);
  emlrtDimSizeGeqCheckR2012b(27, b_y0_sizes[0], &w_emlrtECI, &st);
  emlrtDimSizeGeqCheckR2012b(27, b_y0_sizes[1], &x_emlrtECI, &st);
  cgxertSetCurrentOutputPortDimensions(moduleInstance->S, 0, 0, b_y0_sizes[0]);
  cgxertSetCurrentOutputPortDimensions(moduleInstance->S, 0, 1, b_y0_sizes[1]);
  loop_ub = b_y0_sizes[0] * b_y0_sizes[1];
  for (i94 = 0; i94 < loop_ub; i94++) {
    (*moduleInstance->y0_data)[i94] = moduleInstance->b_y0_data[i94];
  }

  for (i94 = 0; i94 < 6; i94++) {
    (*moduleInstance->b_y1)[i94] = c_y1[i94];
  }

  cgxertSetCurrentOutputPortDimensions(moduleInstance->S, 2, 0, 21);
  cgxertSetCurrentOutputPortDimensions(moduleInstance->S, 2, 1, 21);
  for (i94 = 0; i94 < 441; i94++) {
    (*moduleInstance->y2_data)[i94] = y2[i94];
  }

  *moduleInstance->y3 = b_y3;
  cgxertSetCurrentOutputPortDimensions(moduleInstance->S, 4, 0, 1);
  cgxertSetCurrentOutputPortDimensions(moduleInstance->S, 4, 1, 20);
  for (i94 = 0; i94 < 20; i94++) {
    (*moduleInstance->y4_data)[i94] = y4[i94];
  }
}

static void cgxe_mdl_update(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack b_st;
  real_T varargin_5[3];
  real_T varargin_6[3];
  real_T varargin_7[3];
  real_T varargin_8[3];
  real_T varargin_9[3];
  int32_T i;
  real_T varargin_10[14];
  real_T varargin_11[3];
  real_T varargin_12[3];
  real_T varargin_13[3];
  real_T varargin_14[6];
  real_T varargin_15[3];
  real_T varargin_16[3];
  real_T varargin_17[3];
  real_T varargin_18[3];
  real_T varargin_19[3];
  real_T varargin_20[4];
  RIEKF *obj;
  boolean_T flag;
  emlrtStack c_st;
  emlrtStack d_st;
  const mxArray *y;
  char_T u[45];
  static char_T cv66[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  emlrtStack e_st;
  const mxArray *m33;
  static const int32_T iv196[2] = { 1, 45 };

  const mxArray *b_y;
  char_T b_u[45];
  static const int32_T iv197[2] = { 1, 45 };

  const mxArray *c_y;
  char_T c_u[8];
  static char_T cv67[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  static const int32_T iv198[2] = { 1, 8 };

  const mxArray *d_y;
  char_T d_u[7];
  static char_T cv68[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  static const int32_T iv199[2] = { 1, 7 };

  boolean_T *enable_static_landmarks;
  boolean_T *enable_bias_estimation;
  boolean_T *ekf_update_enabled;
  boolean_T *static_bias_initialization;
  real_T (*gyro_noise_std)[3];
  real_T (*gyro_bias_noise_std)[3];
  real_T (*accel_noise_std)[3];
  real_T (*encoder_noise_std)[14];
  real_T (*accel_bias_noise_std)[3];
  real_T (*contact_noise_std)[3];
  real_T (*landmark_noise_std)[3];
  real_T (*gyro_bias_init)[3];
  real_T (*accel_bias_init)[3];
  real_T (*prior_base_pose_std)[6];
  real_T (*prior_base_velocity_std)[3];
  real_T (*prior_contact_position_std)[3];
  real_T (*prior_gyro_bias_std)[3];
  real_T (*landmark_positions)[4];
  real_T (*prior_accel_bias_std)[3];
  real_T (*prior_forward_kinematics_std)[3];
  prior_forward_kinematics_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 18);
  prior_accel_bias_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 17);
  landmark_positions = (real_T (*)[4])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 19);
  prior_gyro_bias_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 16);
  prior_contact_position_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 15);
  prior_base_velocity_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 14);
  prior_base_pose_std = (real_T (*)[6])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 13);
  accel_bias_init = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 12);
  gyro_bias_init = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 11);
  landmark_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 10);
  contact_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 8);
  accel_bias_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 7);
  encoder_noise_std = (real_T (*)[14])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 9);
  accel_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 6);
  gyro_bias_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 5);
  gyro_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 4);
  static_bias_initialization = (boolean_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 0);
  ekf_update_enabled = (boolean_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 1);
  enable_bias_estimation = (boolean_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 2);
  enable_static_landmarks = (boolean_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 3);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtDestroyArray(&b_eml_mx);
  emlrtDestroyArray(&eml_mx);
  for (i = 0; i < 3; i++) {
    varargin_5[i] = (*gyro_noise_std)[i];
    varargin_6[i] = (*gyro_bias_noise_std)[i];
    varargin_7[i] = (*accel_noise_std)[i];
    varargin_8[i] = (*accel_bias_noise_std)[i];
    varargin_9[i] = (*contact_noise_std)[i];
  }

  for (i = 0; i < 14; i++) {
    varargin_10[i] = (*encoder_noise_std)[i];
  }

  for (i = 0; i < 3; i++) {
    varargin_11[i] = (*landmark_noise_std)[i];
    varargin_12[i] = (*gyro_bias_init)[i];
    varargin_13[i] = (*accel_bias_init)[i];
  }

  for (i = 0; i < 6; i++) {
    varargin_14[i] = (*prior_base_pose_std)[i];
  }

  for (i = 0; i < 3; i++) {
    varargin_15[i] = (*prior_base_velocity_std)[i];
    varargin_16[i] = (*prior_contact_position_std)[i];
    varargin_17[i] = (*prior_gyro_bias_std)[i];
    varargin_18[i] = (*prior_accel_bias_std)[i];
    varargin_19[i] = (*prior_forward_kinematics_std)[i];
  }

  for (i = 0; i < 4; i++) {
    varargin_20[i] = (*landmark_positions)[i];
  }

  if (!moduleInstance->sysobj_not_empty) {
    b_st.site = &g_emlrtRSI;
    obj = &moduleInstance->sysobj;
    moduleInstance->sysobj.imu_init_count = 1.0;
    covrtLogFcn(moduleInstance->covInst, 0, 0);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 0);
    c_st.site = &emlrtRSI;
    d_st.site = &b_emlrtRSI;
    e_st.site = &c_emlrtRSI;
    d_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    obj->TunablePropsChanged = false;
    obj->CacheInputSizes = false;
    e_st.site = &d_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    e_st.site = &d_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &f_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
    b_st.site = &h_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.static_bias_initialization =
      *static_bias_initialization;
    b_st.site = &i_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.ekf_update_enabled = *ekf_update_enabled;
    b_st.site = &j_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.enable_bias_estimation = *enable_bias_estimation;
    b_st.site = &k_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.enable_static_landmarks = *enable_static_landmarks;
    b_st.site = &l_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_noise_std[i] = varargin_5[i];
    }

    b_st.site = &m_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_noise_std[i] = varargin_6[i];
    }

    b_st.site = &n_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_noise_std[i] = varargin_7[i];
    }

    b_st.site = &o_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_noise_std[i] = varargin_8[i];
    }

    b_st.site = &p_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.contact_noise_std[i] = varargin_9[i];
    }

    b_st.site = &q_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 14; i++) {
      moduleInstance->sysobj.encoder_noise_std[i] = varargin_10[i];
    }

    b_st.site = &r_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.landmark_noise_std[i] = varargin_11[i];
    }

    b_st.site = &s_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_init[i] = varargin_12[i];
    }

    b_st.site = &t_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_init[i] = varargin_13[i];
    }

    b_st.site = &u_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 6; i++) {
      moduleInstance->sysobj.prior_base_pose_std[i] = varargin_14[i];
    }

    b_st.site = &v_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_base_velocity_std[i] = varargin_15[i];
    }

    b_st.site = &w_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_contact_position_std[i] = varargin_16[i];
    }

    b_st.site = &x_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_gyro_bias_std[i] = varargin_17[i];
    }

    b_st.site = &y_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_accel_bias_std[i] = varargin_18[i];
    }

    b_st.site = &ab_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_forward_kinematics_std[i] = varargin_19[i];
    }

    b_st.site = &bb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 4; i++) {
      moduleInstance->sysobj.landmark_positions[i] = varargin_20[i];
    }
  }

  b_st.site = &pk_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = cv66[i];
    }

    y = NULL;
    m33 = emlrtCreateCharArray(2, iv196);
    emlrtInitCharArrayR2013a(&b_st, 45, m33, &u[0]);
    emlrtAssign(&y, m33);
    for (i = 0; i < 8; i++) {
      c_u[i] = cv67[i];
    }

    c_y = NULL;
    m33 = emlrtCreateCharArray(2, iv198);
    emlrtInitCharArrayR2013a(&b_st, 8, m33, &c_u[0]);
    emlrtAssign(&c_y, m33);
    g_error(&b_st, b_message(&b_st, y, c_y, &b_emlrtMCI), &b_emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    b_st.site = &qk_emlrtRSI;
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i = 0; i < 45; i++) {
        b_u[i] = cv66[i];
      }

      b_y = NULL;
      m33 = emlrtCreateCharArray(2, iv197);
      emlrtInitCharArrayR2013a(&b_st, 45, m33, &b_u[0]);
      emlrtAssign(&b_y, m33);
      for (i = 0; i < 7; i++) {
        d_u[i] = cv68[i];
      }

      d_y = NULL;
      m33 = emlrtCreateCharArray(2, iv199);
      emlrtInitCharArrayR2013a(&b_st, 7, m33, &d_u[0]);
      emlrtAssign(&d_y, m33);
      g_error(&b_st, b_message(&b_st, b_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
    }

    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
    }
  }

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst);
}

static const mxArray *d_emlrt_marshallOut(const int32_T u)
{
  const mxArray *y;
  const mxArray *m34;
  y = NULL;
  m34 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m34) = u;
  emlrtAssign(&y, m34);
  return y;
}

static const mxArray *e_emlrt_marshallOut(const boolean_T u)
{
  const mxArray *y;
  const mxArray *m35;
  y = NULL;
  m35 = emlrtCreateLogicalScalar(u);
  emlrtAssign(&y, m35);
  return y;
}

static const mxArray *f_emlrt_marshallOut(const real_T u[3])
{
  const mxArray *y;
  const mxArray *m36;
  static const int32_T iv200[1] = { 3 };

  real_T *pData;
  int32_T i;
  y = NULL;
  m36 = emlrtCreateNumericArray(1, iv200, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m36);
  for (i = 0; i < 3; i++) {
    pData[i] = u[i];
  }

  emlrtAssign(&y, m36);
  return y;
}

static const mxArray *g_emlrt_marshallOut(const real_T u[14])
{
  const mxArray *y;
  const mxArray *m37;
  static const int32_T iv201[1] = { 14 };

  real_T *pData;
  int32_T i;
  y = NULL;
  m37 = emlrtCreateNumericArray(1, iv201, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m37);
  for (i = 0; i < 14; i++) {
    pData[i] = u[i];
  }

  emlrtAssign(&y, m37);
  return y;
}

static const mxArray *h_emlrt_marshallOut(const real_T u[6])
{
  const mxArray *y;
  const mxArray *m38;
  static const int32_T iv202[1] = { 6 };

  real_T *pData;
  int32_T i;
  y = NULL;
  m38 = emlrtCreateNumericArray(1, iv202, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m38);
  for (i = 0; i < 6; i++) {
    pData[i] = u[i];
  }

  emlrtAssign(&y, m38);
  return y;
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance)
{
  const mxArray *st;
  const mxArray *y;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m39;
  const mxArray *d_y;
  const mxArray *e_y;
  static const int32_T iv203[1] = { 3 };

  real_T *pData;
  int32_T i;
  const mxArray *f_y;
  static const int32_T iv204[1] = { 3 };

  const mxArray *g_y;
  static const int32_T iv205[1] = { 3 };

  const mxArray *h_y;
  static const int32_T iv206[1] = { 3 };

  const mxArray *i_y;
  static const int32_T iv207[1] = { 4 };

  const mxArray *j_y;
  static const int32_T iv208[2] = { 7, 7 };

  const mxArray *k_y;
  static const int32_T iv209[2] = { 3, 20 };

  const mxArray *l_y;
  static const int32_T iv210[1] = { 6 };

  const mxArray *m_y;
  static const int32_T iv211[2] = { 15, 15 };

  const mxArray *n_y;
  static const int32_T iv212[2] = { 60, 60 };

  const mxArray *o_y;
  static const int32_T iv213[2] = { 15, 60 };

  const mxArray *p_y;
  static const int32_T iv214[2] = { 6, 6 };

  const mxArray *q_y;
  static const int32_T iv215[2] = { 15, 6 };

  const mxArray *r_y;
  static const int32_T iv216[2] = { 60, 6 };

  const mxArray *s_y;
  const mxArray *t_y;
  const mxArray *u_y;
  static const int32_T iv217[1] = { 3 };

  const mxArray *v_y;
  static const int32_T iv218[1] = { 3 };

  const mxArray *w_y;
  static const int32_T iv219[2] = { 3, 1000 };

  const mxArray *x_y;
  static const int32_T iv220[2] = { 3, 1000 };

  const mxArray *y_y;
  const mxArray *ab_y;
  static const int32_T iv221[1] = { 3 };

  const mxArray *bb_y;
  static const int32_T iv222[1] = { 3 };

  const mxArray *cb_y;
  static const int32_T iv223[1] = { 14 };

  const mxArray *db_y;
  static const int32_T iv224[1] = { 2 };

  const mxArray *eb_y;
  const mxArray *fb_y;
  static const int32_T iv225[2] = { 1, 20 };

  const mxArray *gb_y;
  const mxArray *hb_y;
  static const int32_T iv226[2] = { 3, 3 };

  const mxArray *ib_y;
  static const int32_T iv227[2] = { 3, 3 };

  const mxArray *jb_y;
  static const int32_T iv228[2] = { 3, 3 };

  const mxArray *kb_y;
  static const int32_T iv229[2] = { 3, 3 };

  const mxArray *lb_y;
  static const int32_T iv230[2] = { 3, 3 };

  const mxArray *mb_y;
  static const int32_T iv231[2] = { 14, 14 };

  const mxArray *nb_y;
  static const int32_T iv232[2] = { 3, 3 };

  const mxArray *ob_y;
  static const int32_T iv233[2] = { 3, 3 };

  const mxArray *pb_y;
  static const int32_T iv234[2] = { 21, 21 };

  const mxArray *qb_y;
  st = NULL;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  emlrtAddField(b_y, d_emlrt_marshallOut(moduleInstance->sysobj.isInitialized),
                "isInitialized", 0);
  emlrtAddField(b_y, e_emlrt_marshallOut
                (moduleInstance->sysobj.TunablePropsChanged),
                "TunablePropsChanged", 0);
  emlrtAddField(b_y, e_emlrt_marshallOut(moduleInstance->sysobj.CacheInputSizes),
                "CacheInputSizes", 0);
  emlrtAddField(b_y, e_emlrt_marshallOut
                (moduleInstance->sysobj.static_bias_initialization),
                "static_bias_initialization", 0);
  emlrtAddField(b_y, e_emlrt_marshallOut
                (moduleInstance->sysobj.ekf_update_enabled),
                "ekf_update_enabled", 0);
  c_y = NULL;
  m39 = emlrtCreateLogicalScalar(moduleInstance->sysobj.enable_bias_estimation);
  emlrtAssign(&c_y, m39);
  emlrtAddField(b_y, c_y, "enable_bias_estimation", 0);
  d_y = NULL;
  m39 = emlrtCreateLogicalScalar(moduleInstance->sysobj.enable_static_landmarks);
  emlrtAssign(&d_y, m39);
  emlrtAddField(b_y, d_y, "enable_static_landmarks", 0);
  emlrtAddField(b_y, f_emlrt_marshallOut(moduleInstance->sysobj.gyro_noise_std),
                "gyro_noise_std", 0);
  emlrtAddField(b_y, f_emlrt_marshallOut
                (moduleInstance->sysobj.gyro_bias_noise_std),
                "gyro_bias_noise_std", 0);
  emlrtAddField(b_y, f_emlrt_marshallOut(moduleInstance->sysobj.accel_noise_std),
                "accel_noise_std", 0);
  emlrtAddField(b_y, f_emlrt_marshallOut
                (moduleInstance->sysobj.accel_bias_noise_std),
                "accel_bias_noise_std", 0);
  emlrtAddField(b_y, f_emlrt_marshallOut
                (moduleInstance->sysobj.contact_noise_std), "contact_noise_std",
                0);
  emlrtAddField(b_y, g_emlrt_marshallOut
                (moduleInstance->sysobj.encoder_noise_std), "encoder_noise_std",
                0);
  emlrtAddField(b_y, f_emlrt_marshallOut
                (moduleInstance->sysobj.landmark_noise_std),
                "landmark_noise_std", 0);
  emlrtAddField(b_y, f_emlrt_marshallOut(moduleInstance->sysobj.gyro_bias_init),
                "gyro_bias_init", 0);
  emlrtAddField(b_y, f_emlrt_marshallOut(moduleInstance->sysobj.accel_bias_init),
                "accel_bias_init", 0);
  emlrtAddField(b_y, h_emlrt_marshallOut
                (moduleInstance->sysobj.prior_base_pose_std),
                "prior_base_pose_std", 0);
  emlrtAddField(b_y, f_emlrt_marshallOut
                (moduleInstance->sysobj.prior_base_velocity_std),
                "prior_base_velocity_std", 0);
  e_y = NULL;
  m39 = emlrtCreateNumericArray(1, iv203, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.prior_contact_position_std[i];
  }

  emlrtAssign(&e_y, m39);
  emlrtAddField(b_y, e_y, "prior_contact_position_std", 0);
  f_y = NULL;
  m39 = emlrtCreateNumericArray(1, iv204, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.prior_gyro_bias_std[i];
  }

  emlrtAssign(&f_y, m39);
  emlrtAddField(b_y, f_y, "prior_gyro_bias_std", 0);
  g_y = NULL;
  m39 = emlrtCreateNumericArray(1, iv205, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.prior_accel_bias_std[i];
  }

  emlrtAssign(&g_y, m39);
  emlrtAddField(b_y, g_y, "prior_accel_bias_std", 0);
  h_y = NULL;
  m39 = emlrtCreateNumericArray(1, iv206, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.prior_forward_kinematics_std[i];
  }

  emlrtAssign(&h_y, m39);
  emlrtAddField(b_y, h_y, "prior_forward_kinematics_std", 0);
  i_y = NULL;
  m39 = emlrtCreateNumericArray(1, iv207, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 4; i++) {
    pData[i] = moduleInstance->sysobj.landmark_positions[i];
  }

  emlrtAssign(&i_y, m39);
  emlrtAddField(b_y, i_y, "landmark_positions", 0);
  j_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv208, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 49; i++) {
    pData[i] = moduleInstance->sysobj.X[i];
  }

  emlrtAssign(&j_y, m39);
  emlrtAddField(b_y, j_y, "X", 0);
  k_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv209, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 60; i++) {
    pData[i] = moduleInstance->sysobj.landmarks[i];
  }

  emlrtAssign(&k_y, m39);
  emlrtAddField(b_y, k_y, "landmarks", 0);
  l_y = NULL;
  m39 = emlrtCreateNumericArray(1, iv210, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 6; i++) {
    pData[i] = moduleInstance->sysobj.theta[i];
  }

  emlrtAssign(&l_y, m39);
  emlrtAddField(b_y, l_y, "theta", 0);
  m_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv211, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 225; i++) {
    pData[i] = moduleInstance->sysobj.Pxx[i];
  }

  emlrtAssign(&m_y, m39);
  emlrtAddField(b_y, m_y, "Pxx", 0);
  n_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv212, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 3600; i++) {
    pData[i] = moduleInstance->sysobj.Pll[i];
  }

  emlrtAssign(&n_y, m39);
  emlrtAddField(b_y, n_y, "Pll", 0);
  o_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv213, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 900; i++) {
    pData[i] = moduleInstance->sysobj.Pxl[i];
  }

  emlrtAssign(&o_y, m39);
  emlrtAddField(b_y, o_y, "Pxl", 0);
  p_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv214, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 36; i++) {
    pData[i] = moduleInstance->sysobj.Ptt[i];
  }

  emlrtAssign(&p_y, m39);
  emlrtAddField(b_y, p_y, "Ptt", 0);
  q_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv215, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 90; i++) {
    pData[i] = moduleInstance->sysobj.Pxt[i];
  }

  emlrtAssign(&q_y, m39);
  emlrtAddField(b_y, q_y, "Pxt", 0);
  r_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv216, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 360; i++) {
    pData[i] = moduleInstance->sysobj.Plt[i];
  }

  emlrtAssign(&r_y, m39);
  emlrtAddField(b_y, r_y, "Plt", 0);
  s_y = NULL;
  m39 = emlrtCreateLogicalScalar(moduleInstance->sysobj.filter_enabled);
  emlrtAssign(&s_y, m39);
  emlrtAddField(b_y, s_y, "filter_enabled", 0);
  t_y = NULL;
  m39 = emlrtCreateLogicalScalar(moduleInstance->sysobj.bias_initialized);
  emlrtAssign(&t_y, m39);
  emlrtAddField(b_y, t_y, "bias_initialized", 0);
  u_y = NULL;
  m39 = emlrtCreateNumericArray(1, iv217, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.ba0[i];
  }

  emlrtAssign(&u_y, m39);
  emlrtAddField(b_y, u_y, "ba0", 0);
  v_y = NULL;
  m39 = emlrtCreateNumericArray(1, iv218, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.bg0[i];
  }

  emlrtAssign(&v_y, m39);
  emlrtAddField(b_y, v_y, "bg0", 0);
  w_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv219, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 3000; i++) {
    pData[i] = moduleInstance->sysobj.a_init_vec[i];
  }

  emlrtAssign(&w_y, m39);
  emlrtAddField(b_y, w_y, "a_init_vec", 0);
  x_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv220, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 3000; i++) {
    pData[i] = moduleInstance->sysobj.w_init_vec[i];
  }

  emlrtAssign(&x_y, m39);
  emlrtAddField(b_y, x_y, "w_init_vec", 0);
  y_y = NULL;
  m39 = emlrtCreateDoubleScalar(moduleInstance->sysobj.imu_init_count);
  emlrtAssign(&y_y, m39);
  emlrtAddField(b_y, y_y, "imu_init_count", 0);
  ab_y = NULL;
  m39 = emlrtCreateNumericArray(1, iv221, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.w_prev[i];
  }

  emlrtAssign(&ab_y, m39);
  emlrtAddField(b_y, ab_y, "w_prev", 0);
  bb_y = NULL;
  m39 = emlrtCreateNumericArray(1, iv222, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.a_prev[i];
  }

  emlrtAssign(&bb_y, m39);
  emlrtAddField(b_y, bb_y, "a_prev", 0);
  cb_y = NULL;
  m39 = emlrtCreateNumericArray(1, iv223, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 14; i++) {
    pData[i] = moduleInstance->sysobj.encoders_prev[i];
  }

  emlrtAssign(&cb_y, m39);
  emlrtAddField(b_y, cb_y, "encoders_prev", 0);
  db_y = NULL;
  m39 = emlrtCreateNumericArray(1, iv224, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 2; i++) {
    pData[i] = moduleInstance->sysobj.contact_prev[i];
  }

  emlrtAssign(&db_y, m39);
  emlrtAddField(b_y, db_y, "contact_prev", 0);
  eb_y = NULL;
  m39 = emlrtCreateDoubleScalar(moduleInstance->sysobj.t_prev);
  emlrtAssign(&eb_y, m39);
  emlrtAddField(b_y, eb_y, "t_prev", 0);
  fb_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv225, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 20; i++) {
    pData[i] = moduleInstance->sysobj.landmark_ids[i];
  }

  emlrtAssign(&fb_y, m39);
  emlrtAddField(b_y, fb_y, "landmark_ids", 0);
  gb_y = NULL;
  m39 = emlrtCreateDoubleScalar(moduleInstance->sysobj.num_landmarks);
  emlrtAssign(&gb_y, m39);
  emlrtAddField(b_y, gb_y, "num_landmarks", 0);
  hb_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv226, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 9; i++) {
    pData[i] = moduleInstance->sysobj.Qg[i];
  }

  emlrtAssign(&hb_y, m39);
  emlrtAddField(b_y, hb_y, "Qg", 0);
  ib_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv227, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 9; i++) {
    pData[i] = moduleInstance->sysobj.Qbg[i];
  }

  emlrtAssign(&ib_y, m39);
  emlrtAddField(b_y, ib_y, "Qbg", 0);
  jb_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv228, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 9; i++) {
    pData[i] = moduleInstance->sysobj.Qa[i];
  }

  emlrtAssign(&jb_y, m39);
  emlrtAddField(b_y, jb_y, "Qa", 0);
  kb_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv229, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 9; i++) {
    pData[i] = moduleInstance->sysobj.Qba[i];
  }

  emlrtAssign(&kb_y, m39);
  emlrtAddField(b_y, kb_y, "Qba", 0);
  lb_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv230, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 9; i++) {
    pData[i] = moduleInstance->sysobj.Qc[i];
  }

  emlrtAssign(&lb_y, m39);
  emlrtAddField(b_y, lb_y, "Qc", 0);
  mb_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv231, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 196; i++) {
    pData[i] = moduleInstance->sysobj.Qe[i];
  }

  emlrtAssign(&mb_y, m39);
  emlrtAddField(b_y, mb_y, "Qe", 0);
  nb_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv232, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 9; i++) {
    pData[i] = moduleInstance->sysobj.Ql[i];
  }

  emlrtAssign(&nb_y, m39);
  emlrtAddField(b_y, nb_y, "Ql", 0);
  ob_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv233, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 9; i++) {
    pData[i] = moduleInstance->sysobj.Np[i];
  }

  emlrtAssign(&ob_y, m39);
  emlrtAddField(b_y, ob_y, "Np", 0);
  pb_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv234, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 441; i++) {
    pData[i] = moduleInstance->sysobj.P_prior[i];
  }

  emlrtAssign(&pb_y, m39);
  emlrtAddField(b_y, pb_y, "P_prior", 0);
  emlrtSetCell(y, 0, b_y);
  qb_y = NULL;
  m39 = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&qb_y, m39);
  emlrtSetCell(y, 1, qb_y);
  emlrtAssign(&st, y);
  return st;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_sysobj,
  const char_T *identifier, RIEKF *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(b_sysobj), &thisId, y);
  emlrtDestroyArray(&b_sysobj);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, RIEKF *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[55] = { "isInitialized", "TunablePropsChanged",
    "CacheInputSizes", "static_bias_initialization", "ekf_update_enabled",
    "enable_bias_estimation", "enable_static_landmarks", "gyro_noise_std",
    "gyro_bias_noise_std", "accel_noise_std", "accel_bias_noise_std",
    "contact_noise_std", "encoder_noise_std", "landmark_noise_std",
    "gyro_bias_init", "accel_bias_init", "prior_base_pose_std",
    "prior_base_velocity_std", "prior_contact_position_std",
    "prior_gyro_bias_std", "prior_accel_bias_std",
    "prior_forward_kinematics_std", "landmark_positions", "X", "landmarks",
    "theta", "Pxx", "Pll", "Pxl", "Ptt", "Pxt", "Plt", "filter_enabled",
    "bias_initialized", "ba0", "bg0", "a_init_vec", "w_init_vec",
    "imu_init_count", "w_prev", "a_prev", "encoders_prev", "contact_prev",
    "t_prev", "landmark_ids", "num_landmarks", "Qg", "Qbg", "Qa", "Qba", "Qc",
    "Qe", "Ql", "Np", "P_prior" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 55, fieldNames, 0U, &dims);
  thisId.fIdentifier = "isInitialized";
  y->isInitialized = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u,
    0, "isInitialized")), &thisId);
  thisId.fIdentifier = "TunablePropsChanged";
  y->TunablePropsChanged = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a
    (sp, u, 0, "TunablePropsChanged")), &thisId);
  thisId.fIdentifier = "CacheInputSizes";
  y->CacheInputSizes = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp,
    u, 0, "CacheInputSizes")), &thisId);
  thisId.fIdentifier = "static_bias_initialization";
  y->static_bias_initialization = f_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2013a(sp, u, 0, "static_bias_initialization")), &thisId);
  thisId.fIdentifier = "ekf_update_enabled";
  y->ekf_update_enabled = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a
    (sp, u, 0, "ekf_update_enabled")), &thisId);
  thisId.fIdentifier = "enable_bias_estimation";
  y->enable_bias_estimation = f_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2013a(sp, u, 0, "enable_bias_estimation")), &thisId);
  thisId.fIdentifier = "enable_static_landmarks";
  y->enable_static_landmarks = f_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2013a(sp, u, 0, "enable_static_landmarks")), &thisId);
  thisId.fIdentifier = "gyro_noise_std";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "gyro_noise_std")), &thisId, y->gyro_noise_std);
  thisId.fIdentifier = "gyro_bias_noise_std";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "gyro_bias_noise_std")), &thisId, y->gyro_bias_noise_std);
  thisId.fIdentifier = "accel_noise_std";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "accel_noise_std")), &thisId, y->accel_noise_std);
  thisId.fIdentifier = "accel_bias_noise_std";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "accel_bias_noise_std")), &thisId, y->accel_bias_noise_std);
  thisId.fIdentifier = "contact_noise_std";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "contact_noise_std")), &thisId, y->contact_noise_std);
  thisId.fIdentifier = "encoder_noise_std";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "encoder_noise_std")), &thisId, y->encoder_noise_std);
  thisId.fIdentifier = "landmark_noise_std";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "landmark_noise_std")), &thisId, y->landmark_noise_std);
  thisId.fIdentifier = "gyro_bias_init";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "gyro_bias_init")), &thisId, y->gyro_bias_init);
  thisId.fIdentifier = "accel_bias_init";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "accel_bias_init")), &thisId, y->accel_bias_init);
  thisId.fIdentifier = "prior_base_pose_std";
  i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "prior_base_pose_std")), &thisId, y->prior_base_pose_std);
  thisId.fIdentifier = "prior_base_velocity_std";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "prior_base_velocity_std")), &thisId, y->prior_base_velocity_std);
  thisId.fIdentifier = "prior_contact_position_std";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "prior_contact_position_std")), &thisId, y->prior_contact_position_std);
  thisId.fIdentifier = "prior_gyro_bias_std";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "prior_gyro_bias_std")), &thisId, y->prior_gyro_bias_std);
  thisId.fIdentifier = "prior_accel_bias_std";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "prior_accel_bias_std")), &thisId, y->prior_accel_bias_std);
  thisId.fIdentifier = "prior_forward_kinematics_std";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "prior_forward_kinematics_std")), &thisId, y->prior_forward_kinematics_std);
  thisId.fIdentifier = "landmark_positions";
  j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "landmark_positions")), &thisId, y->landmark_positions);
  thisId.fIdentifier = "X";
  k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "X")), &thisId,
                     y->X);
  thisId.fIdentifier = "landmarks";
  l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "landmarks")),
                     &thisId, y->landmarks);
  thisId.fIdentifier = "theta";
  i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "theta")),
                     &thisId, y->theta);
  thisId.fIdentifier = "Pxx";
  m_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "Pxx")),
                     &thisId, y->Pxx);
  thisId.fIdentifier = "Pll";
  n_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "Pll")),
                     &thisId, y->Pll);
  thisId.fIdentifier = "Pxl";
  o_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "Pxl")),
                     &thisId, y->Pxl);
  thisId.fIdentifier = "Ptt";
  p_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "Ptt")),
                     &thisId, y->Ptt);
  thisId.fIdentifier = "Pxt";
  q_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "Pxt")),
                     &thisId, y->Pxt);
  thisId.fIdentifier = "Plt";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "Plt")),
                     &thisId, y->Plt);
  thisId.fIdentifier = "filter_enabled";
  y->filter_enabled = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp,
    u, 0, "filter_enabled")), &thisId);
  thisId.fIdentifier = "bias_initialized";
  y->bias_initialized = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp,
    u, 0, "bias_initialized")), &thisId);
  thisId.fIdentifier = "ba0";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "ba0")),
                     &thisId, y->ba0);
  thisId.fIdentifier = "bg0";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "bg0")),
                     &thisId, y->bg0);
  thisId.fIdentifier = "a_init_vec";
  s_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "a_init_vec")),
                     &thisId, y->a_init_vec);
  thisId.fIdentifier = "w_init_vec";
  s_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "w_init_vec")),
                     &thisId, y->w_init_vec);
  thisId.fIdentifier = "imu_init_count";
  y->imu_init_count = t_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp,
    u, 0, "imu_init_count")), &thisId);
  thisId.fIdentifier = "w_prev";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "w_prev")),
                     &thisId, y->w_prev);
  thisId.fIdentifier = "a_prev";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "a_prev")),
                     &thisId, y->a_prev);
  thisId.fIdentifier = "encoders_prev";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "encoders_prev")), &thisId, y->encoders_prev);
  thisId.fIdentifier = "contact_prev";
  u_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "contact_prev")),
                     &thisId, y->contact_prev);
  thisId.fIdentifier = "t_prev";
  y->t_prev = t_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "t_prev")), &thisId);
  thisId.fIdentifier = "landmark_ids";
  v_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "landmark_ids")),
                     &thisId, y->landmark_ids);
  thisId.fIdentifier = "num_landmarks";
  y->num_landmarks = t_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u,
    0, "num_landmarks")), &thisId);
  thisId.fIdentifier = "Qg";
  w_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "Qg")),
                     &thisId, y->Qg);
  thisId.fIdentifier = "Qbg";
  w_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "Qbg")),
                     &thisId, y->Qbg);
  thisId.fIdentifier = "Qa";
  w_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "Qa")),
                     &thisId, y->Qa);
  thisId.fIdentifier = "Qba";
  w_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "Qba")),
                     &thisId, y->Qba);
  thisId.fIdentifier = "Qc";
  w_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "Qc")),
                     &thisId, y->Qc);
  thisId.fIdentifier = "Qe";
  x_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "Qe")),
                     &thisId, y->Qe);
  thisId.fIdentifier = "Ql";
  w_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "Ql")),
                     &thisId, y->Ql);
  thisId.fIdentifier = "Np";
  w_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "Np")),
                     &thisId, y->Np);
  thisId.fIdentifier = "P_prior";
  y_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "P_prior")),
                     &thisId, y->P_prior);
  emlrtDestroyArray(&u);
}

static int32_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = cb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = db_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[3])
{
  eb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[14])
{
  fb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[6])
{
  gb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[4])
{
  hb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[49])
{
  ib_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[60])
{
  jb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[225])
{
  kb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[3600])
{
  lb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[900])
{
  mb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[36])
{
  nb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[90])
{
  ob_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[360])
{
  pb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[3000])
{
  qb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = rb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[2])
{
  sb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[20])
{
  tb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[9])
{
  ub_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[196])
{
  vb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[441])
{
  wb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static boolean_T ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance, const mxArray *st)
{
  emlrtStack b_st = { NULL,            /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *u;
  b_st.tls = moduleInstance->emlrtRootTLSGlobal;
  u = emlrtAlias(st);
  c_emlrt_marshallIn(&b_st, emlrtAlias(emlrtGetCell(&b_st, "sysobj", u, 0)),
                     "sysobj", &moduleInstance->sysobj);
  moduleInstance->sysobj_not_empty = ab_emlrt_marshallIn(&b_st, emlrtAlias
    (emlrtGetCell(&b_st, "sysobj_not_empty", u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
  emlrtDestroyArray(&st);
}

static const mxArray *message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m40;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m40, 1, &pArray, "message", true,
    location);
}

static void g_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m41;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m41, 2, pArrays, "message", true,
    location);
}

static const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m42;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m42, 3, pArrays, "message", true,
    location);
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m43;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m43, 2, pArrays, "feval", true, location);
}

static void b_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "feval", true, location);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m44;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m44, 2, pArrays, "sprintf", true,
    location);
}

static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m45;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m45, 4, pArrays, "feval", true, location);
}

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = { 1, 14 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, ret, 14);
  emlrtDestroyArray(&src);
}

static int32_T cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  int32_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 0U, &dims);
  ret = *(int32_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static boolean_T db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *mxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[3])
{
  static const int32_T dims[1] = { 3 };

  int32_T i95;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  for (i95 = 0; i95 < 3; i95++) {
    ret[i95] = (*(real_T (*)[3])mxGetData(src))[i95];
  }

  emlrtDestroyArray(&src);
}

static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[14])
{
  static const int32_T dims[1] = { 14 };

  int32_T i96;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  for (i96 = 0; i96 < 14; i96++) {
    ret[i96] = (*(real_T (*)[14])mxGetData(src))[i96];
  }

  emlrtDestroyArray(&src);
}

static void gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[6])
{
  static const int32_T dims[1] = { 6 };

  int32_T i97;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  for (i97 = 0; i97 < 6; i97++) {
    ret[i97] = (*(real_T (*)[6])mxGetData(src))[i97];
  }

  emlrtDestroyArray(&src);
}

static void hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[4])
{
  static const int32_T dims[1] = { 4 };

  int32_T i98;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  for (i98 = 0; i98 < 4; i98++) {
    ret[i98] = (*(real_T (*)[4])mxGetData(src))[i98];
  }

  emlrtDestroyArray(&src);
}

static void ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[49])
{
  static const int32_T dims[2] = { 7, 7 };

  int32_T i99;
  int32_T i100;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i99 = 0; i99 < 7; i99++) {
    for (i100 = 0; i100 < 7; i100++) {
      ret[i100 + 7 * i99] = (*(real_T (*)[49])mxGetData(src))[i100 + 7 * i99];
    }
  }

  emlrtDestroyArray(&src);
}

static void jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[60])
{
  static const int32_T dims[2] = { 3, 20 };

  int32_T i101;
  int32_T i102;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i101 = 0; i101 < 20; i101++) {
    for (i102 = 0; i102 < 3; i102++) {
      ret[i102 + 3 * i101] = (*(real_T (*)[60])mxGetData(src))[i102 + 3 * i101];
    }
  }

  emlrtDestroyArray(&src);
}

static void kb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[225])
{
  static const int32_T dims[2] = { 15, 15 };

  int32_T i103;
  int32_T i104;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i103 = 0; i103 < 15; i103++) {
    for (i104 = 0; i104 < 15; i104++) {
      ret[i104 + 15 * i103] = (*(real_T (*)[225])mxGetData(src))[i104 + 15 *
        i103];
    }
  }

  emlrtDestroyArray(&src);
}

static void lb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[3600])
{
  static const int32_T dims[2] = { 60, 60 };

  int32_T i105;
  int32_T i106;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i105 = 0; i105 < 60; i105++) {
    for (i106 = 0; i106 < 60; i106++) {
      ret[i106 + 60 * i105] = (*(real_T (*)[3600])mxGetData(src))[i106 + 60 *
        i105];
    }
  }

  emlrtDestroyArray(&src);
}

static void mb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[900])
{
  static const int32_T dims[2] = { 15, 60 };

  int32_T i107;
  int32_T i108;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i107 = 0; i107 < 60; i107++) {
    for (i108 = 0; i108 < 15; i108++) {
      ret[i108 + 15 * i107] = (*(real_T (*)[900])mxGetData(src))[i108 + 15 *
        i107];
    }
  }

  emlrtDestroyArray(&src);
}

static void nb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[36])
{
  static const int32_T dims[2] = { 6, 6 };

  int32_T i109;
  int32_T i110;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i109 = 0; i109 < 6; i109++) {
    for (i110 = 0; i110 < 6; i110++) {
      ret[i110 + 6 * i109] = (*(real_T (*)[36])mxGetData(src))[i110 + 6 * i109];
    }
  }

  emlrtDestroyArray(&src);
}

static void ob_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[90])
{
  static const int32_T dims[2] = { 15, 6 };

  int32_T i111;
  int32_T i112;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i111 = 0; i111 < 6; i111++) {
    for (i112 = 0; i112 < 15; i112++) {
      ret[i112 + 15 * i111] = (*(real_T (*)[90])mxGetData(src))[i112 + 15 * i111];
    }
  }

  emlrtDestroyArray(&src);
}

static void pb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[360])
{
  static const int32_T dims[2] = { 60, 6 };

  int32_T i113;
  int32_T i114;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i113 = 0; i113 < 6; i113++) {
    for (i114 = 0; i114 < 60; i114++) {
      ret[i114 + 60 * i113] = (*(real_T (*)[360])mxGetData(src))[i114 + 60 *
        i113];
    }
  }

  emlrtDestroyArray(&src);
}

static void qb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[3000])
{
  static const int32_T dims[2] = { 3, 1000 };

  int32_T i115;
  int32_T i116;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i115 = 0; i115 < 1000; i115++) {
    for (i116 = 0; i116 < 3; i116++) {
      ret[i116 + 3 * i115] = (*(real_T (*)[3000])mxGetData(src))[i116 + 3 * i115];
    }
  }

  emlrtDestroyArray(&src);
}

static real_T rb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void sb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[2])
{
  static const int32_T dims[1] = { 2 };

  int32_T i117;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  for (i117 = 0; i117 < 2; i117++) {
    ret[i117] = (*(real_T (*)[2])mxGetData(src))[i117];
  }

  emlrtDestroyArray(&src);
}

static void tb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[20])
{
  static const int32_T dims[2] = { 1, 20 };

  int32_T i118;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i118 = 0; i118 < 20; i118++) {
    ret[i118] = (*(real_T (*)[20])mxGetData(src))[i118];
  }

  emlrtDestroyArray(&src);
}

static void ub_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[9])
{
  static const int32_T dims[2] = { 3, 3 };

  int32_T i119;
  int32_T i120;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i119 = 0; i119 < 3; i119++) {
    for (i120 = 0; i120 < 3; i120++) {
      ret[i120 + 3 * i119] = (*(real_T (*)[9])mxGetData(src))[i120 + 3 * i119];
    }
  }

  emlrtDestroyArray(&src);
}

static void vb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[196])
{
  static const int32_T dims[2] = { 14, 14 };

  int32_T i121;
  int32_T i122;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i121 = 0; i121 < 14; i121++) {
    for (i122 = 0; i122 < 14; i122++) {
      ret[i122 + 14 * i121] = (*(real_T (*)[196])mxGetData(src))[i122 + 14 *
        i121];
    }
  }

  emlrtDestroyArray(&src);
}

static void wb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[441])
{
  static const int32_T dims[2] = { 21, 21 };

  int32_T i123;
  int32_T i124;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i123 = 0; i123 < 21; i123++) {
    for (i124 = 0; i124 < 21; i124++) {
      ret[i124 + 21 * i123] = (*(real_T (*)[441])mxGetData(src))[i124 + 21 *
        i123];
    }
  }

  emlrtDestroyArray(&src);
}

static void b_RIEKF_RIEKF(InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance,
  RIEKF **obj)
{
  emlrtStack st;
  RIEKF *b_obj;
  emlrtStack b_st;
  emlrtStack c_st;
  (*obj)->imu_init_count = 1.0;
  covrtLogFcn(moduleInstance->covInst, 0, 0);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 0);
  st.site = &emlrtRSI;
  b_obj = *obj;
  b_st.site = &b_emlrtRSI;
  c_st.site = &c_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  b_obj->isInitialized = 0;
  b_obj->TunablePropsChanged = false;
  b_obj->CacheInputSizes = false;
  c_st.site = &d_emlrtRSI;
  c_st.site = &d_emlrtRSI;
  c_st.site = &d_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &f_emlrtRSI;
}

static void xgetrf(const emlrtStack *sp, int32_T m, int32_T n, real_T b_A_data[],
                   int32_T A_sizes[2], int32_T lda, int32_T ipiv_data[], int32_T
                   ipiv_sizes[2], int32_T *info)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  int32_T minval;
  int32_T varargin_1;
  ptrdiff_t ipiv_t_data[60];
  ptrdiff_t info_t;
  const mxArray *y;
  char_T u[15];
  static char_T cv69[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
    'x', 's', 'i', 'z', 'e' };

  const mxArray *m46;
  static const int32_T iv235[2] = { 1, 15 };

  st.prev = sp;
  st.tls = sp->tls;
  st.site = &mh_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if ((A_sizes[0] == 0) || (A_sizes[1] == 0)) {
    ipiv_sizes[0] = 1;
    ipiv_sizes[1] = 0;
    *info = 0;
  } else {
    minval = muIntScalarMin_sint32(m, n);
    if (minval > 1) {
      varargin_1 = minval;
    } else {
      varargin_1 = 1;
    }

    b_st.site = &oh_emlrtRSI;
    c_st.site = &ph_emlrtRSI;
    if ((int8_T)varargin_1 != varargin_1) {
      for (minval = 0; minval < 15; minval++) {
        u[minval] = cv69[minval];
      }

      y = NULL;
      m46 = emlrtCreateCharArray(2, iv235);
      emlrtInitCharArrayR2013a(&b_st, 15, m46, &u[0]);
      emlrtAssign(&y, m46);
      c_st.site = &rk_emlrtRSI;
      g_error(&c_st, y, &r_emlrtMCI);
    }

    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)m, (ptrdiff_t)n, &b_A_data[0],
      (ptrdiff_t)lda, &ipiv_t_data[0]);
    *info = (int32_T)info_t;
    ipiv_sizes[0] = 1;
    ipiv_sizes[1] = (int8_T)varargin_1;
    b_st.site = &nh_emlrtRSI;
    if (*info < 0) {
      if (*info == -1010) {
        c_st.site = &qh_emlrtRSI;
        c_error(&c_st);
      } else {
        c_st.site = &rh_emlrtRSI;
        d_error(&c_st, *info);
      }
    }

    for (minval = 0; minval < (int8_T)varargin_1; minval++) {
      ipiv_data[minval] = (int32_T)ipiv_t_data[minval];
    }
  }
}

static void xtrsm(int32_T m, int32_T n, real_T b_A_data[], int32_T lda, real_T
                  b_B_data[], int32_T ldb)
{
  emlrtStack st;
  real_T alpha1;
  char_T DIAGA;
  char_T TRANSA;
  char_T UPLO;
  char_T SIDE;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  if ((m < 1) || (n < 1)) {
  } else {
    st.site = &pg_emlrtRSI;
    alpha1 = 1.0;
    DIAGA = 'N';
    TRANSA = 'N';
    UPLO = 'U';
    SIDE = 'R';
    m_t = (ptrdiff_t)m;
    n_t = (ptrdiff_t)n;
    lda_t = (ptrdiff_t)lda;
    ldb_t = (ptrdiff_t)ldb;
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, &alpha1, &b_A_data[0],
          &lda_t, &b_B_data[0], &ldb_t);
  }
}

static void b_xtrsm(int32_T m, int32_T n, real_T b_A_data[], int32_T lda, real_T
                    b_B_data[], int32_T ldb)
{
  emlrtStack st;
  real_T alpha1;
  char_T DIAGA;
  char_T TRANSA;
  char_T UPLO;
  char_T SIDE;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  if ((m < 1) || (n < 1)) {
  } else {
    st.site = &pg_emlrtRSI;
    alpha1 = 1.0;
    DIAGA = 'U';
    TRANSA = 'N';
    UPLO = 'L';
    SIDE = 'R';
    m_t = (ptrdiff_t)m;
    n_t = (ptrdiff_t)n;
    lda_t = (ptrdiff_t)lda;
    ldb_t = (ptrdiff_t)ldb;
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, &alpha1, &b_A_data[0],
          &lda_t, &b_B_data[0], &ldb_t);
  }
}

static void xgeqp3(const emlrtStack *sp, real_T b_A_data[], int32_T A_sizes[2],
                   real_T tau_data[], int32_T *tau_sizes, int32_T jpvt_data[],
                   int32_T jpvt_sizes[2])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  int32_T n;
  int32_T jpvt_t_sizes;
  int32_T loop_ub;
  int32_T i125;
  ptrdiff_t m_t;
  ptrdiff_t jpvt_t_data[60];
  ptrdiff_t info_t;
  int32_T info;
  boolean_T p;
  boolean_T b_p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ii_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  n = A_sizes[1];
  if ((A_sizes[0] == 0) || (A_sizes[1] == 0)) {
    *tau_sizes = 0;
    b_st.site = &ki_emlrtRSI;
    c_st.site = &vh_emlrtRSI;
    d_st.site = &wh_emlrtRSI;
    e_st.site = &xh_emlrtRSI;
    eml_signed_integer_colon(&e_st, A_sizes[1], jpvt_data, jpvt_sizes);
  } else {
    *tau_sizes = muIntScalarMin_sint32(A_sizes[0], n);
    jpvt_t_sizes = A_sizes[1];
    loop_ub = A_sizes[1];
    for (i125 = 0; i125 < loop_ub; i125++) {
      jpvt_t_data[i125] = (ptrdiff_t)0;
    }

    m_t = (ptrdiff_t)A_sizes[0];
    info_t = LAPACKE_dgeqp3(102, m_t, (ptrdiff_t)A_sizes[1], &b_A_data[0], m_t,
      &jpvt_t_data[0], &tau_data[0]);
    info = (int32_T)info_t;
    b_st.site = &li_emlrtRSI;
    if (info != 0) {
      p = true;
      b_p = false;
      if (info == -4) {
        b_p = true;
      }

      if (!b_p) {
        if (info == -1010) {
          c_st.site = &qh_emlrtRSI;
          c_error(&c_st);
        } else {
          c_st.site = &rh_emlrtRSI;
          e_error(&c_st, info);
        }
      }
    } else {
      p = false;
    }

    if (p) {
      loop_ub = A_sizes[1];
      for (i125 = 0; i125 < loop_ub; i125++) {
        info = A_sizes[0];
        for (jpvt_t_sizes = 0; jpvt_t_sizes < info; jpvt_t_sizes++) {
          b_A_data[jpvt_t_sizes + A_sizes[0] * i125] = rtNaN;
        }
      }

      for (i125 = 0; i125 < *tau_sizes; i125++) {
        tau_data[i125] = rtNaN;
      }

      b_st.site = &mi_emlrtRSI;
      c_st.site = &vh_emlrtRSI;
      d_st.site = &wh_emlrtRSI;
      e_st.site = &xh_emlrtRSI;
      eml_signed_integer_colon(&e_st, n, jpvt_data, jpvt_sizes);
    } else {
      jpvt_sizes[0] = 1;
      jpvt_sizes[1] = jpvt_t_sizes;
      for (i125 = 0; i125 < jpvt_t_sizes; i125++) {
        jpvt_data[i125] = (int32_T)jpvt_t_data[i125];
      }
    }
  }
}

static int32_T div_nzp_s32(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  boolean_T quotientNeedsNegation;
  if (numerator < 0) {
    absNumerator = ~(uint32_T)numerator + 1U;
  } else {
    absNumerator = (uint32_T)numerator;
  }

  if (denominator < 0) {
    absDenominator = ~(uint32_T)denominator + 1U;
  } else {
    absDenominator = (uint32_T)denominator;
  }

  quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
  absNumerator /= absDenominator;
  if (quotientNeedsNegation) {
    quotient = -(int32_T)absNumerator;
  } else {
    quotient = (int32_T)absNumerator;
  }

  return quotient;
}

static void init_simulink_io_address(InstanceStruct_MH1YGGHXm7BJTN0FViiwM
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->covInst = (covrtInstance *)cgxertGetCovrtInstance
    (moduleInstance->S);
  moduleInstance->u0 = (real_T *)cgxertGetInputPortSignal(moduleInstance->S, 0);
  moduleInstance->u1 = (real_T *)cgxertGetInputPortSignal(moduleInstance->S, 1);
  moduleInstance->u2 = (real_T (*)[3])cgxertGetInputPortSignal(moduleInstance->S,
    2);
  moduleInstance->u3 = (real_T (*)[3])cgxertGetInputPortSignal(moduleInstance->S,
    3);
  moduleInstance->u4 = (real_T (*)[14])cgxertGetInputPortSignal
    (moduleInstance->S, 4);
  moduleInstance->u5 = (real_T (*)[2])cgxertGetInputPortSignal(moduleInstance->S,
    5);
  moduleInstance->u6_data = (real_T (*)[40])cgxertGetInputPortSignal
    (moduleInstance->S, 6);
  moduleInstance->u6_sizes = (int32_T (*)[2])cgxertGetCurrentInputPortDimensions
    (moduleInstance->S, 6);
  moduleInstance->u7 = (real_T (*)[49])cgxertGetInputPortSignal
    (moduleInstance->S, 7);
  moduleInstance->y0_data = (real_T (*)[729])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->y0_sizes = (int32_T (*)[2])
    cgxertGetCurrentOutputPortDimensions(moduleInstance->S, 0);
  moduleInstance->b_y1 = (real_T (*)[6])cgxertGetOutputPortSignal
    (moduleInstance->S, 1);
  moduleInstance->y2_data = (real_T (*)[6561])cgxertGetOutputPortSignal
    (moduleInstance->S, 2);
  moduleInstance->y2_sizes = (int32_T (*)[2])
    cgxertGetCurrentOutputPortDimensions(moduleInstance->S, 2);
  moduleInstance->y3 = (real_T *)cgxertGetOutputPortSignal(moduleInstance->S, 3);
  moduleInstance->y4_data = (real_T (*)[20])cgxertGetOutputPortSignal
    (moduleInstance->S, 4);
  moduleInstance->y4_sizes = (int32_T (*)[2])
    cgxertGetCurrentOutputPortDimensions(moduleInstance->S, 4);
}

/* CGXE Glue Code */
static void mdlOutputs_MH1YGGHXm7BJTN0FViiwM(SimStruct *S, int_T tid)
{
  InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance =
    (InstanceStruct_MH1YGGHXm7BJTN0FViiwM *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_MH1YGGHXm7BJTN0FViiwM(SimStruct *S)
{
  InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance =
    (InstanceStruct_MH1YGGHXm7BJTN0FViiwM *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_MH1YGGHXm7BJTN0FViiwM(SimStruct *S, int_T tid)
{
  InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance =
    (InstanceStruct_MH1YGGHXm7BJTN0FViiwM *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_MH1YGGHXm7BJTN0FViiwM(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance =
    (InstanceStruct_MH1YGGHXm7BJTN0FViiwM *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_MH1YGGHXm7BJTN0FViiwM(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance =
    (InstanceStruct_MH1YGGHXm7BJTN0FViiwM *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_MH1YGGHXm7BJTN0FViiwM(SimStruct *S)
{
  InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance =
    (InstanceStruct_MH1YGGHXm7BJTN0FViiwM *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlStart_MH1YGGHXm7BJTN0FViiwM(SimStruct *S)
{
  InstanceStruct_MH1YGGHXm7BJTN0FViiwM *moduleInstance =
    (InstanceStruct_MH1YGGHXm7BJTN0FViiwM *)calloc(1, sizeof
    (InstanceStruct_MH1YGGHXm7BJTN0FViiwM));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_MH1YGGHXm7BJTN0FViiwM);
  ssSetmdlInitializeConditions(S, mdlInitialize_MH1YGGHXm7BJTN0FViiwM);
  ssSetmdlUpdate(S, mdlUpdate_MH1YGGHXm7BJTN0FViiwM);
  ssSetmdlTerminate(S, mdlTerminate_MH1YGGHXm7BJTN0FViiwM);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_MH1YGGHXm7BJTN0FViiwM(SimStruct *S)
{
}

void method_dispatcher_MH1YGGHXm7BJTN0FViiwM(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_MH1YGGHXm7BJTN0FViiwM(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_MH1YGGHXm7BJTN0FViiwM(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_MH1YGGHXm7BJTN0FViiwM(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_MH1YGGHXm7BJTN0FViiwM(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: MH1YGGHXm7BJTN0FViiwM.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_MH1YGGHXm7BJTN0FViiwM_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxArray * elem_12;
  mxArray * elem_13;
  mxArray * elem_14;
  mxArray * elem_15;
  mxArray * elem_16;
  mxArray * elem_17;
  mxArray * elem_18;
  mxArray * elem_19;
  mxArray * elem_20;
  mxArray * elem_21;
  mxArray * elem_22;
  mxArray * elem_23;
  mxArray * elem_24;
  mxArray * elem_25;
  mxArray * elem_26;
  mxArray * elem_27;
  mxArray * elem_28;
  mxArray * elem_29;
  mxArray * elem_30;
  mxArray * elem_31;
  mxArray * elem_32;
  mxArray * elem_33;
  mxArray * elem_34;
  mxArray * elem_35;
  mxArray * elem_36;
  mxArray * elem_37;
  mxArray * elem_38;
  mxArray * elem_39;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(1,4);
  elem_4 = mxCreateString("addIncludeFiles");
  mxSetCell(elem_3,0,elem_4);
  elem_5 = mxCreateCellMatrix(1,8);
  elem_6 = mxCreateString("J_VectorNav_to_LeftToeBottom_src.h");
  mxSetCell(elem_5,0,elem_6);
  elem_7 = mxCreateString("J_VectorNav_to_RightToeBottom_src.h");
  mxSetCell(elem_5,1,elem_7);
  elem_8 = mxCreateString("R_VectorNav_to_LeftToeBottom_src.h");
  mxSetCell(elem_5,2,elem_8);
  elem_9 = mxCreateString("R_VectorNav_to_RightToeBottom_src.h");
  mxSetCell(elem_5,3,elem_9);
  elem_10 = mxCreateString("blas.h");
  mxSetCell(elem_5,4,elem_10);
  elem_11 = mxCreateString("lapacke.h");
  mxSetCell(elem_5,5,elem_11);
  elem_12 = mxCreateString("p_VectorNav_to_LeftToeBottom_src.h");
  mxSetCell(elem_5,6,elem_12);
  elem_13 = mxCreateString("p_VectorNav_to_RightToeBottom_src.h");
  mxSetCell(elem_5,7,elem_13);
  mxSetCell(elem_3,1,elem_5);
  elem_14 = mxCreateCellMatrix(1,8);
  elem_15 = mxCreateString("");
  mxSetCell(elem_14,0,elem_15);
  elem_16 = mxCreateString("");
  mxSetCell(elem_14,1,elem_16);
  elem_17 = mxCreateString("");
  mxSetCell(elem_14,2,elem_17);
  elem_18 = mxCreateString("");
  mxSetCell(elem_14,3,elem_18);
  elem_19 = mxCreateString("");
  mxSetCell(elem_14,4,elem_19);
  elem_20 = mxCreateString("");
  mxSetCell(elem_14,5,elem_20);
  elem_21 = mxCreateString("");
  mxSetCell(elem_14,6,elem_21);
  elem_22 = mxCreateString("");
  mxSetCell(elem_14,7,elem_22);
  mxSetCell(elem_3,2,elem_14);
  elem_23 = mxCreateCellMatrix(1,8);
  elem_24 = mxCreateString("");
  mxSetCell(elem_23,0,elem_24);
  elem_25 = mxCreateString("");
  mxSetCell(elem_23,1,elem_25);
  elem_26 = mxCreateString("");
  mxSetCell(elem_23,2,elem_26);
  elem_27 = mxCreateString("");
  mxSetCell(elem_23,3,elem_27);
  elem_28 = mxCreateString("__EMLJITSupported__");
  mxSetCell(elem_23,4,elem_28);
  elem_29 = mxCreateString("__EMLJITSupported__");
  mxSetCell(elem_23,5,elem_29);
  elem_30 = mxCreateString("");
  mxSetCell(elem_23,6,elem_30);
  elem_31 = mxCreateString("");
  mxSetCell(elem_23,7,elem_31);
  mxSetCell(elem_3,3,elem_23);
  mxSetCell(elem_1,1,elem_3);
  elem_32 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_32);
  elem_33 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_33);
  elem_34 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_34);
  elem_35 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_35);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_36 = mxCreateCellMatrix(1,2);
  elem_37 = mxCreateString("coder.internal.blas.BLASApi");
  mxSetCell(elem_36,0,elem_37);
  elem_38 = mxCreateString("coder.internal.lapack.LAPACKApi");
  mxSetCell(elem_36,1,elem_38);
  mxSetCell(mxBIArgs,1,elem_36);
  elem_39 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_39);
  return mxBIArgs;
}

mxArray *cgxe_MH1YGGHXm7BJTN0FViiwM_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "J_VectorNav_to_LeftToeBottom_src.h");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
