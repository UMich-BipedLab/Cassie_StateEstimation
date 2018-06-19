/* Include files */

#include "modelInterface.h"
#include "m_F1Scry3smjzFxDJqc88Zr.h"
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

static emlrtRSInfo wc_emlrtRSI = { 206,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 208,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 210,/* lineNo */
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

static emlrtRSInfo ih_emlrtRSI = { 12, /* lineNo */
  "all",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\all.m"/* pathName */
};

static emlrtRSInfo jh_emlrtRSI = { 124,/* lineNo */
  "allOrAny",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pathName */
};

static emlrtRSInfo kh_emlrtRSI = { 570,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo lh_emlrtRSI = { 601,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo mh_emlrtRSI = { 602,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo nh_emlrtRSI = { 610,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo oh_emlrtRSI = { 25, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo ph_emlrtRSI = { 88, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo qh_emlrtRSI = { 55, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo rh_emlrtRSI = { 18, /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo sh_emlrtRSI = { 45, /* lineNo */
  "infocheck",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pathName */
};

static emlrtRSInfo th_emlrtRSI = { 48, /* lineNo */
  "infocheck",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\infocheck.m"/* pathName */
};

static emlrtRSInfo uh_emlrtRSI = { 23, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo vh_emlrtRSI = { 30, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo wh_emlrtRSI = { 44, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo xh_emlrtRSI = { 25, /* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo yh_emlrtRSI = { 78, /* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo ai_emlrtRSI = { 121,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo bi_emlrtRSI = { 149,/* lineNo */
  "colon",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\colon.m"/* pathName */
};

static emlrtRSInfo ci_emlrtRSI = { 30, /* lineNo */
  "xswap",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xswap.m"/* pathName */
};

static emlrtRSInfo di_emlrtRSI = { 20, /* lineNo */
  "xswap",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xswap.m"/* pathName */
};

static emlrtRSInfo ei_emlrtRSI = { 54, /* lineNo */
  "xger",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xger.m"/* pathName */
};

static emlrtRSInfo fi_emlrtRSI = { 135,/* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xtrsm.m"/* pathName */
};

static emlrtRSInfo gi_emlrtRSI = { 167,/* lineNo */
  "xtrsm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xtrsm.m"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 28, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo ii_emlrtRSI = { 32, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo ji_emlrtRSI = { 39, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo ki_emlrtRSI = { 14, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo li_emlrtRSI = { 17, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo mi_emlrtRSI = { 41, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo ni_emlrtRSI = { 76, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo oi_emlrtRSI = { 79, /* lineNo */
  "xgeqp3",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo pi_emlrtRSI = { 19, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo qi_emlrtRSI = { 25, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo ri_emlrtRSI = { 31, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 32, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 37, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 47, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 51, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 64, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 78, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo yi_emlrtRSI = { 83, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo aj_emlrtRSI = { 97, /* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo bj_emlrtRSI = { 104,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo cj_emlrtRSI = { 12, /* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

static emlrtRSInfo dj_emlrtRSI = { 23, /* lineNo */
  "xnrm2",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xnrm2.m"/* pathName */
};

static emlrtRSInfo ej_emlrtRSI = { 36, /* lineNo */
  "xnrm2",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xnrm2.m"/* pathName */
};

static emlrtRSInfo fj_emlrtRSI = { 20, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo gj_emlrtRSI = { 41, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo hj_emlrtRSI = { 53, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo ij_emlrtRSI = { 68, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo jj_emlrtRSI = { 71, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo kj_emlrtRSI = { 81, /* lineNo */
  "xzlarfg",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo lj_emlrtRSI = { 31, /* lineNo */
  "xscal",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xscal.m"/* pathName */
};

static emlrtRSInfo mj_emlrtRSI = { 38, /* lineNo */
  "xscal",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xscal.m"/* pathName */
};

static emlrtRSInfo nj_emlrtRSI = { 18, /* lineNo */
  "xscal",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xscal.m"/* pathName */
};

static emlrtRSInfo oj_emlrtRSI = { 103,/* lineNo */
  "xzlarf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo pj_emlrtRSI = { 50, /* lineNo */
  "xzlarf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo qj_emlrtRSI = { 68, /* lineNo */
  "xzlarf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo rj_emlrtRSI = { 75, /* lineNo */
  "xzlarf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo sj_emlrtRSI = { 68, /* lineNo */
  "xgemv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgemv.m"/* pathName */
};

static emlrtRSInfo tj_emlrtRSI = { 57, /* lineNo */
  "xgemv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgemv.m"/* pathName */
};

static emlrtRSInfo uj_emlrtRSI = { 73, /* lineNo */
  "xgemv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgemv.m"/* pathName */
};

static emlrtRSInfo vj_emlrtRSI = { 36, /* lineNo */
  "xgemv",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgemv.m"/* pathName */
};

static emlrtRSInfo wj_emlrtRSI = { 45, /* lineNo */
  "xgerc",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgerc.m"/* pathName */
};

static emlrtRSInfo xj_emlrtRSI = { 121,/* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo yj_emlrtRSI = { 120,/* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo ak_emlrtRSI = { 72, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo bk_emlrtRSI = { 78, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo ck_emlrtRSI = { 79, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo dk_emlrtRSI = { 89, /* lineNo */
  "qrsolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo ek_emlrtRSI = { 29, /* lineNo */
  "xunormqr",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRSInfo fk_emlrtRSI = { 32, /* lineNo */
  "xunormqr",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRSInfo gk_emlrtRSI = { 101,/* lineNo */
  "xunormqr",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRSInfo hk_emlrtRSI = { 15, /* lineNo */
  "xzunormqr",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzunormqr.m"/* pathName */
};

static emlrtRSInfo ik_emlrtRSI = { 18, /* lineNo */
  "xzunormqr",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzunormqr.m"/* pathName */
};

static emlrtRSInfo jk_emlrtRSI = { 20, /* lineNo */
  "xzunormqr",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzunormqr.m"/* pathName */
};

static emlrtRSInfo kk_emlrtRSI = { 26, /* lineNo */
  "xzunormqr",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzunormqr.m"/* pathName */
};

static emlrtRSInfo lk_emlrtRSI = { 617,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo mk_emlrtRSI = { 673,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo nk_emlrtRSI = { 678,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo ok_emlrtRSI = { 685,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo pk_emlrtRSI = { 694,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo qk_emlrtRSI = { 698,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo rk_emlrtRSI = { 61, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo sk_emlrtRSI = { 62, /* lineNo */
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

static emlrtMCInfo q_emlrtMCI = { 583, /* lineNo */
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

static emlrtMCInfo t_emlrtMCI = { 631, /* lineNo */
  13,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtMCInfo u_emlrtMCI = { 632, /* lineNo */
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
  30,                                  /* iLast */
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
  30,                                  /* iLast */
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
  30,                                  /* iLast */
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
  30,                                  /* iLast */
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
  10,                                  /* iLast */
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
  30,                                  /* iLast */
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
  30,                                  /* iLast */
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
  30,                                  /* iLast */
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
  30,                                  /* iLast */
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
  30,                                  /* iLast */
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
  30,                                  /* iLast */
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
  10,                                  /* iLast */
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

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  600,                                 /* lineNo */
  21,                                  /* colNo */
  "Y",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  601,                                 /* lineNo */
  21,                                  /* colNo */
  "b",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  602,                                 /* lineNo */
  23,                                  /* colNo */
  "H",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  603,                                 /* lineNo */
  23,                                  /* colNo */
  "N",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  603,                                 /* lineNo */
  43,                                  /* colNo */
  "N",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  604,                                 /* lineNo */
  24,                                  /* colNo */
  "PI",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  604,                                 /* lineNo */
  44,                                  /* colNo */
  "PI",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  325,                                 /* lineNo */
  26,                                  /* colNo */
  "v",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  325,                                 /* lineNo */
  33,                                  /* colNo */
  "v",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  326,                                 /* lineNo */
  19,                                  /* colNo */
  "v",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  326,                                 /* lineNo */
  33,                                  /* colNo */
  "v",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  327,                                 /* lineNo */
  20,                                  /* colNo */
  "v",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  327,                                 /* lineNo */
  27,                                  /* colNo */
  "v",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo q_emlrtECI = { 2,   /* nDims */
  698,                                 /* lineNo */
  47,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtBCInfo sd_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  694,                                 /* lineNo */
  105,                                 /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo xb_emlrtDCI = { 694,/* lineNo */
  105,                                 /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = { 1,  /* iFirst */
  10,                                  /* iLast */
  690,                                 /* lineNo */
  41,                                  /* colNo */
  "obj.landmarks",                     /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo yb_emlrtDCI = { 690,/* lineNo */
  41,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  690,                                 /* lineNo */
  88,                                  /* colNo */
  "new_landmarks",                     /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = { 1,  /* iFirst */
  10,                                  /* iLast */
  680,                                 /* lineNo */
  83,                                  /* colNo */
  "measured_landmarks",                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  649,                                 /* lineNo */
  37,                                  /* colNo */
  "new_landmarks",                     /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtECInfo r_emlrtECI = { -1,  /* nDims */
  666,                                 /* lineNo */
  21,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtECInfo s_emlrtECI = { -1,  /* nDims */
  663,                                 /* lineNo */
  21,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtECInfo t_emlrtECI = { -1,  /* nDims */
  657,                                 /* lineNo */
  21,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pName */
};

static emlrtBCInfo xd_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  666,                                 /* lineNo */
  111,                                 /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ac_emlrtDCI = { 666,/* lineNo */
  111,                                 /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yd_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  660,                                 /* lineNo */
  40,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bc_emlrtDCI = { 660,/* lineNo */
  40,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  655,                                 /* lineNo */
  36,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cc_emlrtDCI = { 655,/* lineNo */
  36,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = { 1,  /* iFirst */
  100,                                 /* iLast */
  637,                                 /* lineNo */
  44,                                  /* colNo */
  "obj.Zeros",                         /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo dc_emlrtDCI = { 634,/* lineNo */
  32,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ec_emlrtDCI = { 634,/* lineNo */
  32,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo fc_emlrtDCI = { 636,/* lineNo */
  33,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo gc_emlrtDCI = { 636,/* lineNo */
  33,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo hc_emlrtDCI = { 633,/* lineNo */
  23,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ic_emlrtDCI = { 633,/* lineNo */
  23,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = { 1,  /* iFirst */
  10,                                  /* iLast */
  680,                                 /* lineNo */
  45,                                  /* colNo */
  "measured_landmarks",                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo de_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  689,                                 /* lineNo */
  79,                                  /* colNo */
  "new_landmarks",                     /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = { 1,  /* iFirst */
  10,                                  /* iLast */
  689,                                 /* lineNo */
  25,                                  /* colNo */
  "obj.landmark_ids",                  /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jc_emlrtDCI = { 689,/* lineNo */
  25,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  697,                                 /* lineNo */
  27,                                  /* colNo */
  "G",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  656,                                 /* lineNo */
  21,                                  /* colNo */
  "Y2",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kc_emlrtDCI = { 657,/* lineNo */
  21,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo he_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  657,                                 /* lineNo */
  21,                                  /* colNo */
  "Y",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ie_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  661,                                 /* lineNo */
  26,                                  /* colNo */
  "H2",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  663,                                 /* lineNo */
  23,                                  /* colNo */
  "H",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  665,                                 /* lineNo */
  23,                                  /* colNo */
  "N",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo le_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  665,                                 /* lineNo */
  43,                                  /* colNo */
  "N",                                 /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  666,                                 /* lineNo */
  24,                                  /* colNo */
  "PI",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lc_emlrtDCI = { 666,/* lineNo */
  44,                                  /* colNo */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  666,                                 /* lineNo */
  44,                                  /* colNo */
  "PI",                                /* aName */
  "RIEKF",                             /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m",                            /* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo tk_emlrtRSI = { 37, /* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo uk_emlrtRSI = { 99, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo vk_emlrtRSI = { 104,/* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo wk_emlrtRSI = { 481,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo xk_emlrtRSI = { 480,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo yk_emlrtRSI = { 281,/* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo al_emlrtRSI = { 632,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo bl_emlrtRSI = { 631,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo cl_emlrtRSI = { 17, /* lineNo */
  "error",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\error.m"/* pathName */
};

static emlrtRSInfo dl_emlrtRSI = { 583,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo el_emlrtRSI = { 88, /* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo fl_emlrtRSI = { 53, /* lineNo */
  "assertValidSizeArg",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pathName */
};

static emlrtRSInfo gl_emlrtRSI = { 71, /* lineNo */
  "reshape",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pathName */
};

static emlrtRSInfo hl_emlrtRSI = { 138,/* lineNo */
  "reshape",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pathName */
};

static emlrtRSInfo il_emlrtRSI = { 282,/* lineNo */
  "RIEKF",                             /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "IEKF.m"                             /* pathName */
};

static emlrtRSInfo jl_emlrtRSI = { 86, /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo kl_emlrtRSI = { 14, /* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo ll_emlrtRSI = { 52, /* lineNo */
  "flt2str",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2016b\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"/* pathName */
};

/* Function Declarations */
static RIEKF *RIEKF_RIEKF(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance,
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
static boolean_T isequal(boolean_T varargin_1, boolean_T varargin_2);
static boolean_T b_isequal(real_T varargin_1[3], real_T varargin_2[3]);
static boolean_T c_isequal(real_T varargin_1[14], real_T varargin_2[14]);
static boolean_T d_isequal(real_T varargin_1[6], real_T varargin_2[6]);
static boolean_T e_isequal(real_T varargin_1[4], real_T varargin_2[4]);
static void SystemCore_step(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance,
  const emlrtStack *sp, RIEKF *obj, real_T varargin_1, real_T varargin_2, real_T
  varargin_3[3], real_T varargin_4[3], real_T varargin_5[14], real_T varargin_6
  [2], real_T varargin_7[40], real_T varargin_8[49], real_T varargout_1[49],
  real_T varargout_2[6], real_T varargout_3[441], real_T *varargout_4, real_T
  varargout_5[40]);
static void SystemCore_setupAndReset(const emlrtStack *sp, RIEKF *obj);
static void SystemCore_checkTunableProps(RIEKF *obj);
static void RIEKF_InitializeBias(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T w[3], real_T a[3],
  real_T X_init[49]);
static real_T norm(real_T x[3]);
static void mean(real_T x[3000], real_T y[3]);
static boolean_T any(boolean_T x[2]);
static void RIEKF_InitializeFilter(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T enable, real_T
  X_init[49]);
static void RIEKF_Store_Covariance(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Pa[441]);
static void b_RIEKF_Store_Covariance(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Pa[441]);
static void RIEKF_Predict_State(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T w[3], real_T a[3],
  real_T encoders[14], real_T contact[2], real_T dt);
static void RIEKF_Separate_State(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, real_T X[49], real_T theta[6], real_T R[9], real_T v[3],
  real_T p[3], real_T dR[3], real_T dL[3], real_T bg[3], real_T ba[3]);
static void Exp(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance, real_T v[3],
                real_T output[9]);
static void eye(real_T I[9]);
static real_T mpower(real_T a);
static void p_VectorNav_to_RightToeBottom(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, real_T var1[14], real_T output1[3]);
static void p_VectorNav_to_LeftToeBottom(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, real_T var1[14], real_T output1[3]);
static void RIEKF_skew(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance,
  real_T v[3], real_T A[9]);
static void blkdiag(real_T varargin_2_data[], int32_T varargin_2_sizes[2],
                    real_T kb_y_data[], int32_T y_sizes[2]);
static void output_size(int32_T varargin_1_sizes[2], int32_T *nrows, int32_T
  *ncols);
static void b_blkdiag(real_T d_varargin_1_data[], int32_T varargin_1_sizes[2],
                      real_T kb_y_data[], int32_T y_sizes[2]);
static void b_eye(const emlrtStack *sp, real_T varargin_1[2], real_T I_data[],
                  int32_T I_sizes[2]);
static void check_forloop_overflow_error(const emlrtStack *sp);
static void RIEKF_Augmented_State(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T e_Xa_data[], int32_T
  Xa_sizes[2]);
static void RIEKF_Adjoint(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance,
  const emlrtStack *sp, real_T X_data[], int32_T X_sizes[2], real_T AdjX_data[],
  int32_T AdjX_sizes[2]);
static void c_blkdiag(real_T d_varargin_1_data[], int32_T varargin_1_sizes[2],
                      real_T kb_y_data[], int32_T y_sizes[2]);
static void R_VectorNav_to_RightToeBottom(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, real_T var1[14], real_T output1[9]);
static void R_VectorNav_to_LeftToeBottom(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, real_T var1[14], real_T output1[9]);
static void d_blkdiag(real_T varargin_1[9], real_T varargin_2[9], real_T
                      varargin_4[9], real_T varargin_5[9], real_T
                      varargin_6_data[], int32_T varargin_6_sizes[2], real_T
                      varargin_7[9], real_T varargin_8[9], real_T kb_y_data[],
                      int32_T y_sizes[2]);
static void RIEKF_Construct_State(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, real_T R[9], real_T v[3], real_T p[3], real_T dR[3], real_T
  dL[3], real_T bg[3], real_T ba[3], real_T X[49], real_T theta[6]);
static void RIEKF_Augmented_Covariance(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Pa_data[], int32_T
  Pa_sizes[2]);
static void c_RIEKF_Store_Covariance(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Pa_data[], int32_T
  Pa_sizes[2]);
static void RIEKF_Update_ForwardKinematics(InstanceStruct_F1Scry3smjzFxDJqc88Zr *
  moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T encoders[14], real_T
  contact[2]);
static void J_VectorNav_to_RightToeBottom(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, real_T var1[14], real_T output1[42]);
static void J_VectorNav_to_LeftToeBottom(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, real_T var1[14], real_T output1[42]);
static void e_blkdiag(real_T varargin_1[9], real_T varargin_2[9], real_T y[36]);
static void RIEKF_Update_State(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Y_data[], int32_T
  Y_sizes, real_T g_b_data[], int32_T b_sizes, real_T b_H_data[], int32_T
  H_sizes[2], real_T N[36], real_T c_PI_data[], int32_T PI_sizes[2]);
static void mrdivide(const emlrtStack *sp, real_T c_A_data[], int32_T A_sizes[2],
                     real_T B[36], real_T kb_y_data[], int32_T y_sizes[2]);
static void lusolve(const emlrtStack *sp, real_T A[36], real_T c_B_data[],
                    int32_T B_sizes[2], real_T X_data[], int32_T X_sizes[2]);
static void warn_singular(const emlrtStack *sp);
static void warning(const emlrtStack *sp);
static void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, int32_T
  indexSize[2]);
static void RIEKF_exp(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance,
                      const emlrtStack *sp, real_T v_data[], int32_T v_sizes,
                      real_T dX_data[], int32_T dX_sizes[2]);
static void b_error(const emlrtStack *sp);
static void c_eye(const emlrtStack *sp, real_T varargin_1, real_T I_data[],
                  int32_T I_sizes[2]);
static void b_indexShapeCheck(const emlrtStack *sp, int32_T matrixSize);
static void b_RIEKF_Update_State(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Y_data[], int32_T
  Y_sizes, real_T g_b_data[], int32_T b_sizes, real_T b_H_data[], int32_T
  H_sizes[2], real_T N[9], real_T c_PI_data[], int32_T PI_sizes[2]);
static void b_mrdivide(const emlrtStack *sp, real_T c_A_data[], int32_T A_sizes
  [2], real_T B[9], real_T kb_y_data[], int32_T y_sizes[2]);
static void b_lusolve(const emlrtStack *sp, real_T A[9], real_T c_B_data[],
                      int32_T B_sizes[2], real_T X_data[], int32_T X_sizes[2]);
static void all(const emlrtStack *sp, boolean_T x[40], boolean_T y[10]);
static boolean_T b_all(boolean_T x[10]);
static void RIEKF_Update_StaticLandmarks(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T measured_landmarks
  [40]);
static void b_RIEKF_skew(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance,
  const emlrtStack *sp, real_T v_data[], int32_T v_sizes[2], real_T A[9]);
static void c_RIEKF_Update_State(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Y_data[], int32_T
  Y_sizes, real_T g_b_data[], int32_T b_sizes, real_T b_H_data[], int32_T
  H_sizes[2], real_T c_N_data[], int32_T N_sizes[2], real_T c_PI_data[], int32_T
  PI_sizes[2]);
static void c_mrdivide(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance,
  const emlrtStack *sp, real_T c_A_data[], int32_T A_sizes[2], real_T c_B_data[],
  int32_T B_sizes[2], real_T kb_y_data[], int32_T y_sizes[2]);
static void c_lusolve(const emlrtStack *sp, real_T c_A_data[], int32_T A_sizes[2],
                      real_T c_B_data[], int32_T B_sizes[2], real_T X_data[],
                      int32_T X_sizes[2]);
static void c_error(const emlrtStack *sp);
static void d_error(const emlrtStack *sp, int32_T varargin_2);
static void eml_signed_integer_colon(const emlrtStack *sp, int32_T b, int32_T
  kb_y_data[], int32_T y_sizes[2]);
static void qrsolve(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance, const
                    emlrtStack *sp, real_T c_A_data[], int32_T A_sizes[2],
                    real_T c_B_data[], int32_T B_sizes[2], real_T Y_data[],
                    int32_T Y_sizes[2]);
static void e_error(const emlrtStack *sp, int32_T varargin_2);
static int32_T rankFromQR(const emlrtStack *sp, real_T c_A_data[], int32_T
  A_sizes[2]);
static void b_warning(const emlrtStack *sp, int32_T varargin_1, char_T
                      varargin_2[14]);
static void f_error(const emlrtStack *sp, int32_T varargin_2);
static void RIEKF_Update_Landmarks(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T measured_landmarks
  [40]);
static real_T sum(boolean_T x[10]);
static void d_RIEKF_Update_State(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Y_data[], int32_T
  Y_sizes, real_T g_b_data[], int32_T b_sizes, real_T b_H_data[], int32_T
  H_sizes[2], real_T c_N_data[], int32_T N_sizes[2], real_T c_PI_data[], int32_T
  PI_sizes[2]);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const char_T u[45]);
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [30]);
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u[4]);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_sprintf,
  const char_T *identifier, char_T y[14]);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
static void cgxe_mdl_start(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance);
static const mxArray *d_emlrt_marshallOut(const int32_T u);
static const mxArray *e_emlrt_marshallOut(const boolean_T u);
static const mxArray *f_emlrt_marshallOut(const real_T u[3]);
static const mxArray *g_emlrt_marshallOut(const real_T u[14]);
static const mxArray *h_emlrt_marshallOut(const real_T u[6]);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance);
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
  emlrtMsgIdentifier *parentId, real_T y[30]);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[225]);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[900]);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[450]);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[36]);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[90]);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[180]);
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[3000]);
static real_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[2]);
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[10]);
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[9]);
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[196]);
static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[441]);
static boolean_T ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier);
static void cgxe_mdl_set_sim_state(InstanceStruct_F1Scry3smjzFxDJqc88Zr
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
  emlrtMsgIdentifier *msgId, real_T ret[30]);
static void kb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[225]);
static void lb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[900]);
static void mb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[450]);
static void nb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[36]);
static void ob_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[90]);
static void pb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[180]);
static void qb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[3000]);
static real_T rb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void sb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[2]);
static void tb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[10]);
static void ub_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[9]);
static void vb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[196]);
static void wb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[441]);
static void b_RIEKF_RIEKF(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance,
  RIEKF **obj);
static void xgetrf(const emlrtStack *sp, int32_T m, int32_T n, real_T c_A_data[],
                   int32_T A_sizes[2], int32_T lda, int32_T ipiv_data[], int32_T
                   ipiv_sizes[2], int32_T *info);
static void xtrsm(int32_T m, int32_T n, real_T c_A_data[], int32_T lda, real_T
                  c_B_data[], int32_T ldb);
static void b_xtrsm(int32_T m, int32_T n, real_T c_A_data[], int32_T lda, real_T
                    c_B_data[], int32_T ldb);
static void xgeqp3(const emlrtStack *sp, real_T c_A_data[], int32_T A_sizes[2],
                   real_T tau_data[], int32_T *tau_sizes, int32_T jpvt_data[],
                   int32_T jpvt_sizes[2]);
static int32_T div_nzp_s32(int32_T numerator, int32_T denominator);
static void init_simulink_io_address(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance);

/* Function Definitions */
static RIEKF *RIEKF_RIEKF(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance,
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
  st.site = &cl_emlrtRSI;
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
  int8_T c_I[900];
  int8_T d_I[450];
  int8_T e_I[36];
  int8_T f_I[90];
  int8_T g_I[180];
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

  for (i = 0; i < 30; i++) {
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

  for (i = 0; i < 900; i++) {
    c_I[i] = 0;
  }

  for (i = 0; i < 30; i++) {
    c_I[i + 30 * i] = 1;
  }

  for (i = 0; i < 900; i++) {
    obj->Pll[i] = (real_T)c_I[i];
  }

  for (i = 0; i < 450; i++) {
    d_I[i] = 0;
  }

  for (i = 0; i < 15; i++) {
    d_I[i + 15 * i] = 1;
  }

  for (i = 0; i < 450; i++) {
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

  for (i = 0; i < 180; i++) {
    g_I[i] = 0;
  }

  for (i = 0; i < 6; i++) {
    g_I[i + 30 * i] = 1;
  }

  for (i = 0; i < 180; i++) {
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
  for (i = 0; i < 10; i++) {
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

static void SystemCore_step(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance,
  const emlrtStack *sp, RIEKF *obj, real_T varargin_1, real_T varargin_2, real_T
  varargin_3[3], real_T varargin_4[3], real_T varargin_5[14], real_T varargin_6
  [2], real_T varargin_7[40], real_T varargin_8[49], real_T varargout_1[49],
  real_T varargout_2[6], real_T varargout_3[441], real_T *varargout_4, real_T
  varargout_5[40])
{
  emlrtStack st;
  emlrtStack b_st;
  static char_T cv2[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T cv3[4] = { 's', 't', 'e', 'p' };

  RIEKF *b_obj;
  boolean_T guard1 = false;
  boolean_T b_varargin_6[2];
  int32_T i;
  real_T c_obj[3];
  real_T d_obj[3];
  real_T e_obj[14];
  real_T f_obj[2];
  boolean_T bv0[40];
  real_T Pa_data[2601];
  int32_T Pa_sizes[2];
  boolean_T bv1[10];
  int32_T b_varargout_4;
  int32_T i3;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
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
  SystemCore_checkTunableProps(obj);
  st.site = &d_emlrtRSI;
  b_obj = obj;
  covrtLogFcn(moduleInstance->covInst, 0, 1);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 1);
  b_st.site = &sc_emlrtRSI;
  RIEKF_InitializeBias(moduleInstance, &b_st, b_obj, varargin_3, varargin_4,
                       varargin_8);
  guard1 = false;
  if (covrtLogCond(moduleInstance->covInst, 0, 0, 25, varargin_2 > 0.01)) {
    for (i = 0; i < 2; i++) {
      b_varargin_6[i] = (varargin_6[i] == 1.0);
    }

    if (covrtLogCond(moduleInstance->covInst, 0, 0, 26, any(b_varargin_6))) {
      covrtLogMcdc(moduleInstance->covInst, 0, 0, 0, true);
      covrtLogIf(moduleInstance->covInst, 0, 0, 0, true);
      covrtLogBasicBlock(moduleInstance->covInst, 0, 2);
      b_st.site = &tc_emlrtRSI;
      RIEKF_InitializeFilter(moduleInstance, &b_st, b_obj, varargin_1,
        varargin_8);
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

  if (covrtLogIf(moduleInstance->covInst, 0, 0, 1, b_obj->filter_enabled)) {
    covrtLogBasicBlock(moduleInstance->covInst, 0, 3);
    for (i = 0; i < 3; i++) {
      c_obj[i] = b_obj->w_prev[i];
      d_obj[i] = b_obj->a_prev[i];
    }

    for (i = 0; i < 14; i++) {
      e_obj[i] = b_obj->encoders_prev[i];
    }

    for (i = 0; i < 2; i++) {
      f_obj[i] = b_obj->contact_prev[i];
    }

    b_st.site = &uc_emlrtRSI;
    RIEKF_Predict_State(moduleInstance, &b_st, b_obj, c_obj, d_obj, e_obj, f_obj,
                        varargin_2 - b_obj->t_prev);
    if (covrtLogIf(moduleInstance->covInst, 0, 0, 2, b_obj->ekf_update_enabled))
    {
      covrtLogBasicBlock(moduleInstance->covInst, 0, 4);
      b_st.site = &vc_emlrtRSI;
      RIEKF_Update_ForwardKinematics(moduleInstance, &b_st, b_obj, varargin_5,
        varargin_6);
      for (i = 0; i < 40; i++) {
        bv0[i] = muDoubleScalarIsNaN(varargin_7[i]);
      }

      b_st.site = &wc_emlrtRSI;
      all(&b_st, bv0, bv1);
      if (covrtLogIf(moduleInstance->covInst, 0, 0, 3, covrtLogMcdc
                     (moduleInstance->covInst, 0, 0, 1, !covrtLogCond
                      (moduleInstance->covInst, 0, 0, 27, b_all(bv1))))) {
        if (covrtLogIf(moduleInstance->covInst, 0, 0, 4,
                       b_obj->enable_static_landmarks)) {
          covrtLogBasicBlock(moduleInstance->covInst, 0, 5);
          b_st.site = &xc_emlrtRSI;
          RIEKF_Update_StaticLandmarks(moduleInstance, &b_st, b_obj, varargin_7);
        } else {
          covrtLogBasicBlock(moduleInstance->covInst, 0, 6);
          b_st.site = &yc_emlrtRSI;
          RIEKF_Update_Landmarks(moduleInstance, &b_st, b_obj, varargin_7);
        }
      }
    }
  }

  covrtLogBasicBlock(moduleInstance->covInst, 0, 7);
  for (i = 0; i < 3; i++) {
    b_obj->w_prev[i] = varargin_3[i];
  }

  for (i = 0; i < 3; i++) {
    b_obj->a_prev[i] = varargin_4[i];
  }

  for (i = 0; i < 14; i++) {
    b_obj->encoders_prev[i] = varargin_5[i];
  }

  for (i = 0; i < 2; i++) {
    b_obj->contact_prev[i] = varargin_6[i];
  }

  b_obj->t_prev = varargin_2;
  for (i = 0; i < 49; i++) {
    varargout_1[i] = b_obj->X[i];
  }

  for (i = 0; i < 6; i++) {
    varargout_2[i] = b_obj->theta[i];
  }

  b_st.site = &ad_emlrtRSI;
  RIEKF_Augmented_Covariance(moduleInstance, &b_st, b_obj, Pa_data, Pa_sizes);
  for (i = 0; i < 21; i++) {
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, Pa_sizes[0], &emlrtBCI, &st);
  }

  for (i = 0; i < 21; i++) {
    emlrtDynamicBoundsCheckR2012b(i + 1, 1, Pa_sizes[1], &b_emlrtBCI, &st);
  }

  b_varargout_4 = (int32_T)b_obj->filter_enabled;
  for (i = 0; i < 10; i++) {
    varargout_5[i << 2] = b_obj->landmark_ids[i];
    for (i3 = 0; i3 < 3; i3++) {
      varargout_5[(i3 + (i << 2)) + 1] = b_obj->landmarks[i3 + 3 * i];
    }
  }

  for (i = 0; i < 21; i++) {
    for (i3 = 0; i3 < 21; i3++) {
      varargout_3[i3 + 21 * i] = Pa_data[i3 + Pa_sizes[0] * i];
    }
  }

  *varargout_4 = (real_T)b_varargout_4;
  st.site = &d_emlrtRSI;
  SystemCore_checkTunablePropChange(&st, obj);
}

static void SystemCore_setupAndReset(const emlrtStack *sp, RIEKF *obj)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  RIEKF *b_obj;
  int32_T i4;
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
    for (i4 = 0; i4 < 51; i4++) {
      u[i4] = cv4[i4];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(&st, 51, m2, &u[0]);
    emlrtAssign(&y, m2);
    for (i4 = 0; i4 < 5; i4++) {
      c_u[i4] = cv6[i4];
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
    for (i4 = 0; i4 < 44; i4++) {
      b_u[i4] = cv5[i4];
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

static void SystemCore_checkTunableProps(RIEKF *obj)
{
  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
  }
}

static void RIEKF_InitializeBias(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T w[3], real_T a[3],
  real_T X_init[49])
{
  real_T Rwi[3];
  real_T b_Rwi[9];
  int32_T i5;
  int32_T i6;
  real_T b_obj;
  static real_T dv0[3] = { 0.0, 0.0, -9.81 };

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

            Rwi[i5] = b_obj + dv0[i5];
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

static void RIEKF_InitializeFilter(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T enable, real_T
  X_init[49])
{
  emlrtStack st;
  emlrtStack b_st;
  int32_T i;
  int8_T I[49];
  real_T b_obj[441];
  static real_T dv1[441] = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
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

    for (i = 0; i < 30; i++) {
      obj->landmarks[i] = 0.0;
    }

    for (i = 0; i < 6; i++) {
      obj->theta[i] = 0.0;
    }

    st.site = &ed_emlrtRSI;
    b_RIEKF_Store_Covariance(moduleInstance, &st, obj, dv1);
    obj->num_landmarks = 0.0;
    for (i = 0; i < 10; i++) {
      obj->landmark_ids[i] = 0.0;
    }

    obj->filter_enabled = false;
  } else {
    covrtLogMcdc(moduleInstance->covInst, 0, 0, 5, false);
    covrtLogIf(moduleInstance->covInst, 0, 0, 11, false);
  }
}

static void RIEKF_Store_Covariance(InstanceStruct_F1Scry3smjzFxDJqc88Zr
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
  int8_T n_tmp_data[30];
  int32_T iv5[2];
  int8_T o_tmp_data[30];
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
  /* ~isempty(measured_landmarks) */
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
    st.site = &il_emlrtRSI;
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
    i11 = emlrtDynamicBoundsCheckR2012b(i11, 1, 30, &g_emlrtBCI, sp);
  }

  d0 = 3.0 * obj->num_landmarks;
  if (1.0 > d0) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(d0, &f_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 30, &h_emlrtBCI, sp);
  }

  b_loop_ub = (int8_T)((int8_T)i11 - 1);
  for (i12 = 0; i12 <= b_loop_ub; i12++) {
    n_tmp_data[i12] = (int8_T)i12;
  }

  b_loop_ub = (int8_T)((int8_T)loop_ub - 1);
  for (i12 = 0; i12 <= b_loop_ub; i12++) {
    o_tmp_data[i12] = (int8_T)i12;
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
      obj->Pll[n_tmp_data[i11] + 30 * o_tmp_data[i10]] = Pa[(i7 + i11) + 21 *
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
    i9 = emlrtDynamicBoundsCheckR2012b(i9, 1, 30, &j_emlrtBCI, sp);
  }

  b_loop_ub = (int8_T)((int8_T)i9 - 1);
  for (i10 = 0; i10 <= b_loop_ub; i10++) {
    n_tmp_data[i10] = (int8_T)i10;
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
      obj->Pxl[i9 + 15 * n_tmp_data[i8]] = Pa[i9 + 21 * (i7 + i8)];
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
    i9 = emlrtDynamicBoundsCheckR2012b(i9, 1, 30, &l_emlrtBCI, sp);
  }

  b_loop_ub = (int8_T)((int8_T)i9 - 1);
  for (i10 = 0; i10 <= b_loop_ub; i10++) {
    n_tmp_data[i10] = (int8_T)i10;
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
      obj->Plt[n_tmp_data[i10] + 30 * i9] = Pa[(i7 + i10) + 21 * (15 + i9)];
    }
  }
}

static void b_RIEKF_Store_Covariance(InstanceStruct_F1Scry3smjzFxDJqc88Zr
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
  int8_T n_tmp_data[30];
  int32_T iv8[2];
  int8_T o_tmp_data[30];
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
  /* ~isempty(measured_landmarks) */
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
    st.site = &il_emlrtRSI;
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
    i17 = emlrtDynamicBoundsCheckR2012b(i17, 1, 30, &g_emlrtBCI, sp);
  }

  d1 = 3.0 * obj->num_landmarks;
  if (1.0 > d1) {
    loop_ub = 0;
  } else {
    loop_ub = (int32_T)emlrtIntegerCheckR2012b(d1, &f_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(loop_ub, 1, 30, &h_emlrtBCI, sp);
  }

  b_loop_ub = (int8_T)((int8_T)i17 - 1);
  for (i18 = 0; i18 <= b_loop_ub; i18++) {
    n_tmp_data[i18] = (int8_T)i18;
  }

  b_loop_ub = (int8_T)((int8_T)loop_ub - 1);
  for (i18 = 0; i18 <= b_loop_ub; i18++) {
    o_tmp_data[i18] = (int8_T)i18;
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
      obj->Pll[n_tmp_data[i17] + 30 * o_tmp_data[i16]] = Pa[(i13 + i17) + 21 *
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
    i15 = emlrtDynamicBoundsCheckR2012b(i15, 1, 30, &j_emlrtBCI, sp);
  }

  b_loop_ub = (int8_T)((int8_T)i15 - 1);
  for (i16 = 0; i16 <= b_loop_ub; i16++) {
    n_tmp_data[i16] = (int8_T)i16;
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
      obj->Pxl[i15 + 15 * n_tmp_data[i14]] = Pa[i15 + 21 * (i13 + i14)];
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
    i15 = emlrtDynamicBoundsCheckR2012b(i15, 1, 30, &l_emlrtBCI, sp);
  }

  b_loop_ub = (int8_T)((int8_T)i15 - 1);
  for (i16 = 0; i16 <= b_loop_ub; i16++) {
    n_tmp_data[i16] = (int8_T)i16;
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
      obj->Plt[n_tmp_data[i16] + 30 * i15] = Pa[(i13 + i16) + 21 * (15 + i15)];
    }
  }
}

static void RIEKF_Predict_State(InstanceStruct_F1Scry3smjzFxDJqc88Zr
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
  static real_T dv2[3] = { 0.0, 0.0, -9.81 };

  real_T d_b[3];
  int32_T loop_ub;
  int32_T b_loop_ub;
  real_T n_tmp_data[10000];
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
  real_T dv3[49];
  real_T dv4[6];
  real_T o_tmp_data[2601];
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

    p_pred[i19] = (p[i19] + v[i19] * dt) + 0.5 * (beta1 + dv2[i19]) * b_b;
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
      n_tmp_data[i20 + loop_ub * i19] = 0.0;
    }
  }

  blkdiag(n_tmp_data, Fc_sizes, moduleInstance->e_tmp_data, tmp_sizes);
  b_blkdiag(moduleInstance->e_tmp_data, tmp_sizes, moduleInstance->Fc_data,
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
  RIEKF_Augmented_State(moduleInstance, &st, obj, moduleInstance->f_tmp_data,
                        Fc_sizes);
  st.site = &pd_emlrtRSI;
  RIEKF_Adjoint(moduleInstance, &st, moduleInstance->f_tmp_data, Fc_sizes,
                moduleInstance->d_tmp_data, tmp_sizes);
  c_blkdiag(moduleInstance->d_tmp_data, tmp_sizes, moduleInstance->Lc_data,
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
      n_tmp_data[i20 + loop_ub * i19] = 0.0;
    }
  }

  d_blkdiag(obj->Qg, obj->Qa, b_hR_R, b_hR_L, n_tmp_data, b_tmp_sizes, obj->Qbg,
            obj->Qba, moduleInstance->Fc_data, Fc_sizes);
  st.site = &sd_emlrtRSI;
  loop_ub = Fk_sizes[0] * Fk_sizes[1];
  for (i19 = 0; i19 < loop_ub; i19++) {
    moduleInstance->c_a_data[i19] = moduleInstance->Fk_data[i19];
  }

  loop_ub = Lc_sizes[0] * Lc_sizes[1];
  for (i19 = 0; i19 < loop_ub; i19++) {
    moduleInstance->c_b_data[i19] = moduleInstance->Lc_data[i19];
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, c_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i19 = 0; i19 < 21; i19++) {
        u[i19] = cv9[i19];
      }

      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv11);
      emlrtInitCharArrayR2013a(&b_st, 21, m3, &u[0]);
      emlrtAssign(&b_y, m3);
      c_st.site = &vk_emlrtRSI;
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
        moduleInstance->h_y_data[i19 + y_sizes_idx_0 * i20] = 0.0;
        i = Fk_sizes[1];
        for (i21 = 0; i21 < i; i21++) {
          moduleInstance->h_y_data[i19 + y_sizes_idx_0 * i20] +=
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
        moduleInstance->h_y_data[i20 + y_sizes_idx_0 * i19] = 0.0;
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
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &b_b, &moduleInstance->c_a_data
            [0], &lda_t, &moduleInstance->c_b_data[0], &ldb_t, &beta1,
            &moduleInstance->h_y_data[0], &ldc_t);
    }
  }

  st.site = &sd_emlrtRSI;
  loop_ub = Fc_sizes[0] * Fc_sizes[1];
  for (i19 = 0; i19 < loop_ub; i19++) {
    moduleInstance->c_b_data[i19] = moduleInstance->Fc_data[i19];
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, e_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i19 = 0; i19 < 21; i19++) {
        c_u[i19] = cv9[i19];
      }

      d_y = NULL;
      m3 = emlrtCreateCharArray(2, iv13);
      emlrtInitCharArrayR2013a(&b_st, 21, m3, &c_u[0]);
      emlrtAssign(&d_y, m3);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, d_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((y_sizes_idx_1 == 1) || (Fc_sizes[0] == 1)) {
    i = y_sizes_idx_0;
    Fc = Fc_sizes[1];
    for (i19 = 0; i19 < y_sizes_idx_0; i19++) {
      loop_ub = Fc_sizes[1];
      for (i20 = 0; i20 < loop_ub; i20++) {
        moduleInstance->i_y_data[i19 + y_sizes_idx_0 * i20] = 0.0;
        for (i21 = 0; i21 < y_sizes_idx_1; i21++) {
          moduleInstance->i_y_data[i19 + y_sizes_idx_0 * i20] +=
            moduleInstance->h_y_data[i19 + y_sizes_idx_0 * i21] *
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
        moduleInstance->i_y_data[i20 + (int16_T)y_sizes_idx_0 * i19] = 0.0;
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
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &b_b, &moduleInstance->h_y_data
            [0], &lda_t, &moduleInstance->c_b_data[0], &ldb_t, &beta1,
            &moduleInstance->i_y_data[0], &ldc_t);
    }
  }

  st.site = &sd_emlrtRSI;
  b_sizes_idx_0 = Lc_sizes[1];
  loop_ub = Lc_sizes[0];
  for (i19 = 0; i19 < loop_ub; i19++) {
    b_loop_ub = Lc_sizes[1];
    for (i20 = 0; i20 < b_loop_ub; i20++) {
      moduleInstance->c_b_data[i20 + b_sizes_idx_0 * i19] =
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, g_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i19 = 0; i19 < 21; i19++) {
        e_u[i19] = cv9[i19];
      }

      f_y = NULL;
      m3 = emlrtCreateCharArray(2, iv15);
      emlrtInitCharArrayR2013a(&b_st, 21, m3, &e_u[0]);
      emlrtAssign(&f_y, m3);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, f_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((Fc == 1) || (Lc_sizes[1] == 1)) {
    y_sizes_idx_0 = i;
    y_sizes_idx_1 = Lc_sizes[0];
    for (i19 = 0; i19 < i; i19++) {
      loop_ub = Lc_sizes[0];
      for (i20 = 0; i20 < loop_ub; i20++) {
        moduleInstance->j_y_data[i19 + i * i20] = 0.0;
        for (i21 = 0; i21 < Fc; i21++) {
          moduleInstance->j_y_data[i19 + i * i20] += moduleInstance->
            i_y_data[i19 + i * i21] * moduleInstance->c_b_data[i21 +
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
        moduleInstance->j_y_data[i20 + (int16_T)i * i19] = 0.0;
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
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &b_b, &moduleInstance->i_y_data
            [0], &lda_t, &moduleInstance->c_b_data[0], &ldb_t, &beta1,
            &moduleInstance->j_y_data[0], &ldc_t);
    }
  }

  st.site = &sd_emlrtRSI;
  b_sizes_idx_0 = Fk_sizes[1];
  loop_ub = Fk_sizes[0];
  for (i19 = 0; i19 < loop_ub; i19++) {
    b_loop_ub = Fk_sizes[1];
    for (i20 = 0; i20 < b_loop_ub; i20++) {
      moduleInstance->c_b_data[i20 + b_sizes_idx_0 * i19] =
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, i_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i19 = 0; i19 < 21; i19++) {
        g_u[i19] = cv9[i19];
      }

      h_y = NULL;
      m3 = emlrtCreateCharArray(2, iv17);
      emlrtInitCharArrayR2013a(&b_st, 21, m3, &g_u[0]);
      emlrtAssign(&h_y, m3);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, h_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((y_sizes_idx_1 == 1) || (Fk_sizes[1] == 1)) {
    i = y_sizes_idx_0;
    Fc = Fk_sizes[0];
    for (i19 = 0; i19 < y_sizes_idx_0; i19++) {
      loop_ub = Fk_sizes[0];
      for (i20 = 0; i20 < loop_ub; i20++) {
        moduleInstance->k_y_data[i19 + y_sizes_idx_0 * i20] = 0.0;
        for (i21 = 0; i21 < y_sizes_idx_1; i21++) {
          moduleInstance->k_y_data[i19 + y_sizes_idx_0 * i20] +=
            moduleInstance->j_y_data[i19 + y_sizes_idx_0 * i21] *
            moduleInstance->c_b_data[i21 + b_sizes_idx_0 * i20];
        }
      }
    }
  } else {
    i = (int16_T)y_sizes_idx_0;
    Fc = (int16_T)Fk_sizes[0];
    loop_ub = (int16_T)Fk_sizes[0];
    for (i19 = 0; i19 < loop_ub; i19++) {
      for (i20 = 0; i20 < i; i20++) {
        moduleInstance->k_y_data[i20 + (int16_T)y_sizes_idx_0 * i19] = 0.0;
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
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &b_b, &moduleInstance->j_y_data
            [0], &lda_t, &moduleInstance->c_b_data[0], &ldb_t, &beta1,
            &moduleInstance->k_y_data[0], &ldc_t);
    }
  }

  Qk_sizes[0] = i;
  Qk_sizes[1] = Fc;
  loop_ub = i * Fc;
  for (i19 = 0; i19 < loop_ub; i19++) {
    moduleInstance->Qk_data[i19] = moduleInstance->k_y_data[i19] * dt;
  }

  /*  Discretized */
  /*  Construct predicted state */
  for (i19 = 0; i19 < 3; i19++) {
    beta1 = 0.0;
    for (i20 = 0; i20 < 3; i20++) {
      beta1 += R[i19 + 3 * i20] * a_k[i20];
    }

    b_w[i19] = v[i19] + (beta1 + dv2[i19]) * dt;
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
                        ba, dv3, dv4);
  for (i19 = 0; i19 < 49; i19++) {
    obj->X[i19] = dv3[i19];
  }

  for (i = 0; i < 6; i++) {
    obj->theta[i] = dv4[i];
  }

  /*  Predict Covariance */
  st.site = &ud_emlrtRSI;
  loop_ub = Fk_sizes[0] * Fk_sizes[1];
  for (i19 = 0; i19 < loop_ub; i19++) {
    moduleInstance->c_a_data[i19] = moduleInstance->Fk_data[i19];
  }

  b_st.site = &ud_emlrtRSI;
  RIEKF_Augmented_Covariance(moduleInstance, &b_st, obj, o_tmp_data, Fc_sizes);
  loop_ub = Fc_sizes[0] * Fc_sizes[1];
  for (i19 = 0; i19 < loop_ub; i19++) {
    moduleInstance->c_b_data[i19] = o_tmp_data[i19];
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, k_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i19 = 0; i19 < 21; i19++) {
        i_u[i19] = cv9[i19];
      }

      j_y = NULL;
      m3 = emlrtCreateCharArray(2, iv19);
      emlrtInitCharArrayR2013a(&b_st, 21, m3, &i_u[0]);
      emlrtAssign(&j_y, m3);
      c_st.site = &vk_emlrtRSI;
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
        moduleInstance->l_y_data[i19 + y_sizes_idx_0 * i20] = 0.0;
        i = Fk_sizes[1];
        for (i21 = 0; i21 < i; i21++) {
          moduleInstance->l_y_data[i19 + y_sizes_idx_0 * i20] +=
            moduleInstance->Fk_data[i19 + Fk_sizes[0] * i21] *
            moduleInstance->c_b_data[i21 + Fc_sizes[0] * i20];
        }
      }
    }
  } else {
    y_sizes_idx_0 = (int16_T)Fk_sizes[0];
    y_sizes_idx_1 = (int16_T)Fc_sizes[1];
    loop_ub = (int16_T)Fc_sizes[1];
    for (i19 = 0; i19 < loop_ub; i19++) {
      for (i20 = 0; i20 < y_sizes_idx_0; i20++) {
        moduleInstance->l_y_data[i20 + y_sizes_idx_0 * i19] = 0.0;
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
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &b_b, &moduleInstance->c_a_data
            [0], &lda_t, &moduleInstance->c_b_data[0], &ldb_t, &beta1,
            &moduleInstance->l_y_data[0], &ldc_t);
    }
  }

  st.site = &ud_emlrtRSI;
  b_sizes_idx_0 = Fk_sizes[1];
  loop_ub = Fk_sizes[0];
  for (i19 = 0; i19 < loop_ub; i19++) {
    b_loop_ub = Fk_sizes[1];
    for (i20 = 0; i20 < b_loop_ub; i20++) {
      moduleInstance->c_b_data[i20 + b_sizes_idx_0 * i19] =
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, m_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i19 = 0; i19 < 21; i19++) {
        k_u[i19] = cv9[i19];
      }

      l_y = NULL;
      m3 = emlrtCreateCharArray(2, iv21);
      emlrtInitCharArrayR2013a(&b_st, 21, m3, &k_u[0]);
      emlrtAssign(&l_y, m3);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, l_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((y_sizes_idx_1 == 1) || (Fk_sizes[1] == 1)) {
    y_sizes[0] = y_sizes_idx_0;
    y_sizes[1] = Fk_sizes[0];
    for (i19 = 0; i19 < y_sizes_idx_0; i19++) {
      loop_ub = Fk_sizes[0];
      for (i20 = 0; i20 < loop_ub; i20++) {
        moduleInstance->m_y_data[i19 + y_sizes_idx_0 * i20] = 0.0;
        for (i21 = 0; i21 < y_sizes_idx_1; i21++) {
          moduleInstance->m_y_data[i19 + y_sizes_idx_0 * i20] +=
            moduleInstance->l_y_data[i19 + y_sizes_idx_0 * i21] *
            moduleInstance->c_b_data[i21 + b_sizes_idx_0 * i20];
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
        moduleInstance->m_y_data[i20 + (int16_T)y_sizes_idx_0 * i19] = 0.0;
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
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &b_b, &moduleInstance->l_y_data
            [0], &lda_t, &moduleInstance->c_b_data[0], &ldb_t, &beta1,
            &moduleInstance->m_y_data[0], &ldc_t);
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
    moduleInstance->n_y_data[i19] = moduleInstance->m_y_data[i19] +
      moduleInstance->Qk_data[i19];
  }

  st.site = &ud_emlrtRSI;
  c_RIEKF_Store_Covariance(moduleInstance, &st, obj, moduleInstance->n_y_data,
    b_y_sizes);
}

static void RIEKF_Separate_State(InstanceStruct_F1Scry3smjzFxDJqc88Zr
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

static void Exp(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance, real_T v[3],
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

static void p_VectorNav_to_RightToeBottom(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, real_T var1[14], real_T output1[3])
{
  covrtLogFcn(moduleInstance->covInst, 3, 0);
  covrtLogIf(moduleInstance->covInst, 3, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst, 3, 1);
  p_VectorNav_to_RightToeBottom_src(output1, var1);
}

static void p_VectorNav_to_LeftToeBottom(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, real_T var1[14], real_T output1[3])
{
  covrtLogFcn(moduleInstance->covInst, 4, 0);
  covrtLogIf(moduleInstance->covInst, 4, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst, 4, 1);
  p_VectorNav_to_LeftToeBottom_src(output1, var1);
}

static void RIEKF_skew(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance,
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

static void blkdiag(real_T varargin_2_data[], int32_T varargin_2_sizes[2],
                    real_T kb_y_data[], int32_T y_sizes[2])
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
    kb_y_data[i25] = 0.0;
  }

  for (i25 = 0; i25 < 15; i25++) {
    for (i26 = 0; i26 < 15; i26++) {
      kb_y_data[i26 + y_sizes[0] * i25] = varargin_1[i26 + 15 * i25];
    }
  }

  if ((varargin_2_sizes[0] > 0) && (varargin_2_sizes[1] > 0)) {
    loop_ub = varargin_2_sizes[1];
    for (i25 = 0; i25 < loop_ub; i25++) {
      b_loop_ub = varargin_2_sizes[0];
      for (i26 = 0; i26 < b_loop_ub; i26++) {
        kb_y_data[(i26 + y_sizes[0] * (15 + i25)) + 15] = varargin_2_data[i26 +
          varargin_2_sizes[0] * i25];
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

static void b_blkdiag(real_T d_varargin_1_data[], int32_T varargin_1_sizes[2],
                      real_T kb_y_data[], int32_T y_sizes[2])
{
  int32_T loop_ub;
  int32_T i27;
  int32_T b_loop_ub;
  int32_T i28;
  int32_T i29;
  int32_T tmp_sizes;
  int8_T n_tmp_data[121];
  int8_T o_tmp_data[121];
  y_sizes[0] = (int8_T)(varargin_1_sizes[0] + 6);
  y_sizes[1] = (int8_T)(varargin_1_sizes[1] + 6);
  loop_ub = (int8_T)(varargin_1_sizes[0] + 6) * (int8_T)(varargin_1_sizes[1] + 6);
  for (i27 = 0; i27 < loop_ub; i27++) {
    kb_y_data[i27] = 0.0;
  }

  loop_ub = varargin_1_sizes[1];
  for (i27 = 0; i27 < loop_ub; i27++) {
    b_loop_ub = varargin_1_sizes[0];
    for (i28 = 0; i28 < b_loop_ub; i28++) {
      kb_y_data[i28 + y_sizes[0] * i27] = d_varargin_1_data[i28 +
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
    n_tmp_data[i28] = (int8_T)((int8_T)((int8_T)i27 + i28) - 1);
  }

  loop_ub = (int8_T)((int8_T)i29 - (int8_T)b_loop_ub);
  for (i27 = 0; i27 <= loop_ub; i27++) {
    o_tmp_data[i27] = (int8_T)((int8_T)((int8_T)b_loop_ub + i27) - 1);
  }

  loop_ub = (int8_T)((int8_T)i29 - (int8_T)b_loop_ub) + 1;
  for (i27 = 0; i27 < loop_ub; i27++) {
    b_loop_ub = tmp_sizes + 1;
    for (i28 = 0; i28 < b_loop_ub; i28++) {
      kb_y_data[n_tmp_data[i28] + y_sizes[0] * o_tmp_data[i27]] = 0.0;
    }
  }
}

static void b_eye(const emlrtStack *sp, real_T varargin_1[2], real_T I_data[],
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
    b_st.site = &fl_emlrtRSI;
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
    b_st.site = &fl_emlrtRSI;
    g_error(&b_st, c_message(&b_st, c_y, e_y, f_y, &d_emlrtMCI), &d_emlrtMCI);
  }

  minval = muDoubleScalarMin(varargin_1[0], varargin_1[1]);
  I_sizes[0] = (int32_T)varargin_1[0];
  I_sizes[1] = (int32_T)varargin_1[1];
  loop_ub = (int32_T)varargin_1[0] * (int32_T)varargin_1[1];
  for (k = 0; k < loop_ub; k++) {
    I_data[k] = 0.0;
  }

  if ((int32_T)minval > 0) {
    st.site = &ae_emlrtRSI;
    if ((!(1 > (int32_T)minval)) && ((int32_T)minval > 2147483646)) {
      b_st.site = &be_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 0; k + 1 <= (int32_T)minval; k++) {
      I_data[k + I_sizes[0] * k] = 1.0;
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
  st.site = &jl_emlrtRSI;
  g_error(&st, b_message(&st, y, b_y, &e_emlrtMCI), &e_emlrtMCI);
}

static void RIEKF_Augmented_State(InstanceStruct_F1Scry3smjzFxDJqc88Zr
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
  real_T d_varargin_1_data[30];
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
  real_T e_varargin_1_data[749];
  int8_T varargin_2_data[10000];
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

  int8_T b_varargin_2_data[10700];
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
    loop_ub = emlrtDynamicBoundsCheckR2012b(i31, 1, 10, &r_emlrtBCI, sp);
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
      d_varargin_1_data[i32 + 3 * i31] = obj->landmarks[i32 + 3 * i31];
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
    d_st.site = &yk_emlrtRSI;
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
    d_st.site = &yk_emlrtRSI;
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
        d_varargin_1_data[i32 + b_result * i31];
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
    d_st.site = &yk_emlrtRSI;
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
      e_varargin_1_data[i32 + 7 * i31] = varargin_1[i32 + 7 * i31];
    }
  }

  for (i31 = 0; i31 < result; i31++) {
    for (i32 = 0; i32 < 7; i32++) {
      e_varargin_1_data[i32 + 7 * (i31 + 7)] = reshapes_f2_data[i32 + 7 * i31];
    }
  }

  st.site = &ce_emlrtRSI;
  for (i31 = 0; i31 < e_loop_ub; i31++) {
    for (i32 = 0; i32 < d_loop_ub; i32++) {
      varargin_2_data[i32 + d_loop_ub * i31] = iv30[i32 + 100 * i31];
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
    d_st.site = &yk_emlrtRSI;
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
    d_st.site = &yk_emlrtRSI;
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
      b_varargin_2_data[i32 + b_result * i31] = 0;
    }
  }

  for (i31 = 0; i31 < e_loop_ub; i31++) {
    for (i32 = 0; i32 < b_result; i32++) {
      b_varargin_2_data[i32 + b_result * (i31 + b_loop_ub)] =
        varargin_2_data[i32 + b_result * i31];
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
    d_st.site = &yk_emlrtRSI;
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
      e_Xa_data[i32 + (7 + b_result) * i31] = e_varargin_1_data[i32 + 7 * i31];
    }
  }

  loop_ub = 7 + result;
  for (i31 = 0; i31 < loop_ub; i31++) {
    for (i32 = 0; i32 < b_result; i32++) {
      e_Xa_data[(i32 + (7 + b_result) * i31) + 7] = (real_T)
        b_varargin_2_data[i32 + b_result * i31];
    }
  }
}

static void RIEKF_Adjoint(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance,
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
  real_T dv5[9];
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
    dv5[0] = 0.0;
    dv5[3] = -X_data[2 + X_sizes[0] * loop_ub];
    dv5[6] = X_data[1 + X_sizes[0] * loop_ub];
    dv5[1] = X_data[2 + X_sizes[0] * loop_ub];
    dv5[4] = 0.0;
    dv5[7] = -X_data[X_sizes[0] * loop_ub];
    dv5[2] = -X_data[1 + X_sizes[0] * loop_ub];
    dv5[5] = X_data[X_sizes[0] * loop_ub];
    dv5[8] = 0.0;
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
                &gb_emlrtBCI, sp) - 1)) - 1] + dv5[i35 + 3 * i37] * R[i37 + 3 *
            i36];
        }
      }
    }

    loop_ub++;
    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst, 0, 0, 0, 0);
}

static void c_blkdiag(real_T d_varargin_1_data[], int32_T varargin_1_sizes[2],
                      real_T kb_y_data[], int32_T y_sizes[2])
{
  int32_T nrows;
  int32_T ncols;
  int32_T loop_ub;
  int32_T i38;
  int32_T i39;
  int32_T i40;
  int32_T tmp_sizes;
  int16_T n_tmp_data[321];
  int16_T o_tmp_data[321];
  static real_T varargin_2[36] = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  output_size(varargin_1_sizes, &nrows, &ncols);
  y_sizes[0] = nrows;
  y_sizes[1] = ncols;
  loop_ub = nrows * ncols;
  for (i38 = 0; i38 < loop_ub; i38++) {
    kb_y_data[i38] = 0.0;
  }

  if ((varargin_1_sizes[0] > 0) && (varargin_1_sizes[1] > 0)) {
    loop_ub = varargin_1_sizes[1];
    for (i38 = 0; i38 < loop_ub; i38++) {
      ncols = varargin_1_sizes[0];
      for (i39 = 0; i39 < ncols; i39++) {
        kb_y_data[i39 + nrows * i38] = d_varargin_1_data[i39 + varargin_1_sizes
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
    n_tmp_data[i39] = (int16_T)((int16_T)((int16_T)i38 + i39) - 1);
  }

  loop_ub = (int16_T)((int16_T)i40 - (int16_T)ncols);
  for (i38 = 0; i38 <= loop_ub; i38++) {
    o_tmp_data[i38] = (int16_T)((int16_T)((int16_T)ncols + i38) - 1);
  }

  loop_ub = (int16_T)((int16_T)i40 - (int16_T)ncols) + 1;
  for (i38 = 0; i38 < loop_ub; i38++) {
    ncols = tmp_sizes + 1;
    for (i39 = 0; i39 < ncols; i39++) {
      kb_y_data[n_tmp_data[i39] + nrows * o_tmp_data[i38]] = varargin_2[i39 +
        (tmp_sizes + 1) * i38];
    }
  }
}

static void R_VectorNav_to_RightToeBottom(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, real_T var1[14], real_T output1[9])
{
  covrtLogFcn(moduleInstance->covInst, 5, 0);
  covrtLogIf(moduleInstance->covInst, 5, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst, 5, 1);
  R_VectorNav_to_RightToeBottom_src(output1, var1);
}

static void R_VectorNav_to_LeftToeBottom(InstanceStruct_F1Scry3smjzFxDJqc88Zr
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
                      varargin_7[9], real_T varargin_8[9], real_T kb_y_data[],
                      int32_T y_sizes[2])
{
  int32_T loop_ub;
  int32_T i41;
  int32_T i42;
  int32_T b_loop_ub;
  int32_T i43;
  int32_T tmp_sizes;
  int8_T n_tmp_data[118];
  int8_T o_tmp_data[118];
  int8_T p_tmp_data[121];
  int8_T q_tmp_data[121];
  y_sizes[0] = (int8_T)(varargin_6_sizes[0] + 21);
  y_sizes[1] = (int8_T)(varargin_6_sizes[1] + 21);
  loop_ub = (int8_T)(varargin_6_sizes[0] + 21) * (int8_T)(varargin_6_sizes[1] +
    21);
  for (i41 = 0; i41 < loop_ub; i41++) {
    kb_y_data[i41] = 0.0;
  }

  for (i41 = 0; i41 < 3; i41++) {
    for (i42 = 0; i42 < 3; i42++) {
      kb_y_data[i42 + y_sizes[0] * i41] = varargin_1[i42 + 3 * i41];
    }
  }

  for (i41 = 0; i41 < 3; i41++) {
    for (i42 = 0; i42 < 3; i42++) {
      kb_y_data[(i42 + y_sizes[0] * (3 + i41)) + 3] = varargin_2[i42 + 3 * i41];
    }
  }

  for (i41 = 0; i41 < 3; i41++) {
    for (i42 = 0; i42 < 3; i42++) {
      kb_y_data[(i42 + y_sizes[0] * (6 + i41)) + 6] = 0.0;
    }
  }

  for (i41 = 0; i41 < 3; i41++) {
    for (i42 = 0; i42 < 3; i42++) {
      kb_y_data[(i42 + y_sizes[0] * (9 + i41)) + 9] = varargin_4[i42 + 3 * i41];
    }
  }

  for (i41 = 0; i41 < 3; i41++) {
    for (i42 = 0; i42 < 3; i42++) {
      kb_y_data[(i42 + y_sizes[0] * (12 + i41)) + 12] = varargin_5[i42 + 3 * i41];
    }
  }

  if ((varargin_6_sizes[0] > 0) && (varargin_6_sizes[1] > 0)) {
    loop_ub = varargin_6_sizes[1];
    for (i41 = 0; i41 < loop_ub; i41++) {
      b_loop_ub = varargin_6_sizes[0];
      for (i42 = 0; i42 < b_loop_ub; i42++) {
        kb_y_data[(i42 + y_sizes[0] * (15 + i41)) + 15] = varargin_6_data[i42 +
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
    n_tmp_data[i42] = (int8_T)((int8_T)((int8_T)i41 + i42) - 1);
  }

  loop_ub = (int8_T)((int8_T)i43 - (int8_T)b_loop_ub);
  for (i41 = 0; i41 <= loop_ub; i41++) {
    o_tmp_data[i41] = (int8_T)((int8_T)((int8_T)b_loop_ub + i41) - 1);
  }

  loop_ub = (int8_T)((int8_T)i43 - (int8_T)b_loop_ub) + 1;
  for (i41 = 0; i41 < loop_ub; i41++) {
    b_loop_ub = tmp_sizes + 1;
    for (i42 = 0; i42 < b_loop_ub; i42++) {
      kb_y_data[n_tmp_data[i42] + y_sizes[0] * o_tmp_data[i41]] = varargin_7[i42
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
    p_tmp_data[i42] = (int8_T)((int8_T)((int8_T)i41 + i42) - 1);
  }

  loop_ub = (int8_T)((int8_T)i43 - (int8_T)b_loop_ub);
  for (i41 = 0; i41 <= loop_ub; i41++) {
    q_tmp_data[i41] = (int8_T)((int8_T)((int8_T)b_loop_ub + i41) - 1);
  }

  loop_ub = (int8_T)((int8_T)i43 - (int8_T)b_loop_ub) + 1;
  for (i41 = 0; i41 < loop_ub; i41++) {
    b_loop_ub = tmp_sizes + 1;
    for (i42 = 0; i42 < b_loop_ub; i42++) {
      kb_y_data[p_tmp_data[i42] + y_sizes[0] * q_tmp_data[i41]] = varargin_8[i42
        + (tmp_sizes + 1) * i41];
    }
  }
}

static void RIEKF_Construct_State(InstanceStruct_F1Scry3smjzFxDJqc88Zr
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

static void RIEKF_Augmented_Covariance(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Pa_data[], int32_T
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
  real_T d_varargin_1_data[450];
  real_T varargin_2_data[900];
  int32_T result;
  real_T varargin_3_data[180];
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

  real_T b_varargin_2_data[1530];
  real_T e_varargin_1_data[765];
  real_T b_varargin_3_data[306];
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
    loop_ub = emlrtDynamicBoundsCheckR2012b(i45, 1, 30, &hb_emlrtBCI, sp) - 1;
  }

  d3 = 3.0 * obj->num_landmarks;
  if (1.0 > d3) {
    b_loop_ub = 0;
  } else {
    i45 = (int32_T)emlrtIntegerCheckR2012b(d3, &v_emlrtDCI, sp);
    b_loop_ub = emlrtDynamicBoundsCheckR2012b(i45, 1, 30, &ib_emlrtBCI, sp);
  }

  d3 = 3.0 * obj->num_landmarks;
  if (1.0 > d3) {
    c_loop_ub = 0;
  } else {
    i45 = (int32_T)emlrtIntegerCheckR2012b(d3, &w_emlrtDCI, sp);
    c_loop_ub = emlrtDynamicBoundsCheckR2012b(i45, 1, 30, &jb_emlrtBCI, sp);
  }

  d3 = 3.0 * obj->num_landmarks;
  if (1.0 > d3) {
    d_loop_ub = 0;
  } else {
    i45 = (int32_T)emlrtIntegerCheckR2012b(d3, &x_emlrtDCI, sp);
    d_loop_ub = emlrtDynamicBoundsCheckR2012b(i45, 1, 30, &kb_emlrtBCI, sp);
  }

  d3 = 3.0 * obj->num_landmarks;
  if (1.0 > d3) {
    e_loop_ub = 0;
  } else {
    i45 = (int32_T)emlrtIntegerCheckR2012b(d3, &y_emlrtDCI, sp);
    e_loop_ub = emlrtDynamicBoundsCheckR2012b(i45, 1, 30, &lb_emlrtBCI, sp);
  }

  d3 = 3.0 * obj->num_landmarks;
  if (1.0 > d3) {
    f_loop_ub = -1;
  } else {
    i45 = (int32_T)emlrtIntegerCheckR2012b(d3, &ab_emlrtDCI, sp);
    f_loop_ub = emlrtDynamicBoundsCheckR2012b(i45, 1, 30, &mb_emlrtBCI, sp) - 1;
  }

  st.site = &pe_emlrtRSI;
  for (i45 = 0; i45 < 15; i45++) {
    for (i46 = 0; i46 < b_loop_ub; i46++) {
      d_varargin_1_data[i46 + b_loop_ub * i45] = obj->Pxl[i45 + 15 * i46];
    }
  }

  for (i45 = 0; i45 < d_loop_ub; i45++) {
    for (i46 = 0; i46 < c_loop_ub; i46++) {
      varargin_2_data[i46 + c_loop_ub * i45] = obj->Pll[i46 + 30 * i45];
    }
  }

  for (i45 = 0; i45 < 6; i45++) {
    for (i46 = 0; i46 < e_loop_ub; i46++) {
      varargin_3_data[i46 + e_loop_ub * i45] = obj->Plt[i46 + 30 * i45];
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
    d_st.site = &yk_emlrtRSI;
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
    d_st.site = &yk_emlrtRSI;
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
    d_st.site = &yk_emlrtRSI;
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
      b_varargin_2_data[i46 + result * i45] = d_varargin_1_data[i46 + result *
        i45];
    }
  }

  for (i45 = 0; i45 < d_loop_ub; i45++) {
    for (i46 = 0; i46 < result; i46++) {
      b_varargin_2_data[i46 + result * (i45 + b_result)] = varargin_2_data[i46 +
        result * i45];
    }
  }

  for (i45 = 0; i45 < b_loop_ub; i45++) {
    for (i46 = 0; i46 < result; i46++) {
      b_varargin_2_data[i46 + result * ((i45 + b_result) + d_loop_ub)] =
        varargin_3_data[i46 + result * i45];
    }
  }

  st.site = &qe_emlrtRSI;
  for (i45 = 0; i45 < 15; i45++) {
    for (i46 = 0; i46 < 15; i46++) {
      e_varargin_1_data[i46 + 15 * i45] = obj->Pxx[i46 + 15 * i45];
    }
  }

  for (i45 = 0; i45 <= loop_ub; i45++) {
    for (i46 = 0; i46 < 15; i46++) {
      e_varargin_1_data[i46 + 15 * (i45 + 15)] = obj->Pxl[i46 + 15 * i45];
    }
  }

  for (i45 = 0; i45 < 6; i45++) {
    for (i46 = 0; i46 < 15; i46++) {
      e_varargin_1_data[i46 + 15 * ((i45 + loop_ub) + 16)] = obj->Pxt[i46 + 15 *
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
      b_varargin_3_data[i46 + 6 * (i45 + 15)] = obj->Plt[i45 + 30 * i46];
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
    d_st.site = &yk_emlrtRSI;
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
    d_st.site = &yk_emlrtRSI;
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
      Pa_data[i46 + (result + 21) * i45] = e_varargin_1_data[i46 + 15 * i45];
    }
  }

  b_loop_ub = loop_ub + 22;
  for (i45 = 0; i45 < b_loop_ub; i45++) {
    for (i46 = 0; i46 < result; i46++) {
      Pa_data[(i46 + (result + 21) * i45) + 15] = b_varargin_2_data[i46 + result
        * i45];
    }
  }

  loop_ub += 22;
  for (i45 = 0; i45 < loop_ub; i45++) {
    for (i46 = 0; i46 < 6; i46++) {
      Pa_data[((i46 + result) + (result + 21) * i45) + 15] =
        b_varargin_3_data[i46 + 6 * i45];
    }
  }
}

static void c_RIEKF_Store_Covariance(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Pa_data[], int32_T
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
  int8_T n_tmp_data[30];
  int32_T iv43[2];
  int8_T o_tmp_data[30];
  int32_T b_Pa_sizes[2];
  int32_T Pa[2];
  int32_T iv44[2];
  int32_T c_Pa_sizes[2];
  int32_T iv45[2];
  int32_T d_Pa_sizes[2];
  real_T p_tmp_data[726];
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
  /* ~isempty(measured_landmarks) */
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
    st.site = &il_emlrtRSI;
    g_error(&st, message(&st, b_emlrt_marshallOut(&st, cv16), &c_emlrtMCI),
            &c_emlrtMCI);
  }

  for (i47 = 0; i47 < 15; i47++) {
    for (i48 = 0; i48 < 15; i48++) {
      obj->Pxx[i48 + 15 * i47] = Pa_data[(emlrtDynamicBoundsCheckR2012b(1 + i48,
        1, Pa_sizes[0], &rb_emlrtBCI, sp) + Pa_sizes[0] *
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
    i51 = emlrtDynamicBoundsCheckR2012b(i51, 1, 30, &g_emlrtBCI, sp);
  }

  d4 = 3.0 * obj->num_landmarks;
  if (1.0 > d4) {
    tmp_sizes_idx_0 = 0;
  } else {
    tmp_sizes_idx_0 = (int32_T)emlrtIntegerCheckR2012b(d4, &f_emlrtDCI, sp);
    tmp_sizes_idx_0 = emlrtDynamicBoundsCheckR2012b(tmp_sizes_idx_0, 1, 30,
      &h_emlrtBCI, sp);
  }

  loop_ub = (int8_T)((int8_T)i51 - 1);
  for (i52 = 0; i52 <= loop_ub; i52++) {
    n_tmp_data[i52] = (int8_T)i52;
  }

  loop_ub = (int8_T)((int8_T)tmp_sizes_idx_0 - 1);
  for (i52 = 0; i52 <= loop_ub; i52++) {
    o_tmp_data[i52] = (int8_T)i52;
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
      obj->Pll[n_tmp_data[i51] + 30 * o_tmp_data[i50]] = Pa_data[(i47 + i51) +
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
    i49 = emlrtDynamicBoundsCheckR2012b(i49, 1, 30, &j_emlrtBCI, sp);
  }

  loop_ub = (int8_T)((int8_T)i49 - 1);
  for (i50 = 0; i50 <= loop_ub; i50++) {
    n_tmp_data[i50] = (int8_T)i50;
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
      obj->Pxl[i49 + 15 * n_tmp_data[i48]] = Pa_data[i49 + Pa_sizes[0] * (i47 +
        i48)];
    }
  }

  for (i47 = 0; i47 < 6; i47++) {
    for (i48 = 0; i48 < 6; i48++) {
      obj->Ptt[i48 + 6 * i47] = Pa_data[(emlrtDynamicBoundsCheckR2012b((i48 +
        Pa_sizes[0]) - 5, 1, Pa_sizes[0], &ub_emlrtBCI, sp) + Pa_sizes[0] *
        (emlrtDynamicBoundsCheckR2012b((i47 + Pa_sizes[1]) - 5, 1, Pa_sizes[1],
        &vb_emlrtBCI, sp) - 1)) - 1];
    }
  }

  for (i47 = 0; i47 < 6; i47++) {
    for (i48 = 0; i48 < 15; i48++) {
      obj->Pxt[i48 + 15 * i47] = Pa_data[(emlrtDynamicBoundsCheckR2012b(1 + i48,
        1, Pa_sizes[0], &wb_emlrtBCI, sp) + Pa_sizes[0] *
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
    i49 = emlrtDynamicBoundsCheckR2012b(i49, 1, 30, &l_emlrtBCI, sp);
  }

  loop_ub = (int8_T)((int8_T)i49 - 1);
  for (i50 = 0; i50 <= loop_ub; i50++) {
    n_tmp_data[i50] = (int8_T)i50;
  }

  tmp_sizes_idx_0 = i48 - i47;
  for (i50 = 0; i50 < 6; i50++) {
    loop_ub = i48 - i47;
    for (i51 = 0; i51 < loop_ub; i51++) {
      p_tmp_data[i51 + tmp_sizes_idx_0 * i50] = Pa_data[(i47 + i51) + Pa_sizes[0]
        * (emlrtDynamicBoundsCheckR2012b((i50 + Pa_sizes[1]) - 5, 1, Pa_sizes[1],
            &yb_emlrtBCI, sp) - 1)];
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
      obj->Plt[n_tmp_data[i48] + 30 * i47] = p_tmp_data[i48 + tmp_sizes_idx_0 *
        i47];
    }
  }
}

static void RIEKF_Update_ForwardKinematics(InstanceStruct_F1Scry3smjzFxDJqc88Zr *
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
  real_T dv6[9];
  ptrdiff_t ldc_t;
  real_T b_y[9];
  real_T n_tmp_data[642];
  real_T N[9];
  real_T o_tmp_data[107];
  int32_T c_loop_ub;
  real_T p_tmp_data[363];
  real_T q_tmp_data[363];
  real_T d_varargin_1_data[642];
  int32_T tmp_sizes[2];
  real_T R_pred_data[321];
  real_T b_R_pred_data[321];
  real_T varargin_2_data[642];
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
  real_T e_varargin_1_data[642];
  real_T b_varargin_2_data[642];
  const mxArray *e_y;
  char_T b_u[39];
  static const int32_T iv47[2] = { 1, 39 };

  real_T dv7[36];
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
    eye(dv6);
    eye(b_y);
    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * i53] = 0.0;
      }
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * (i53 + 3)] = 0.0;
      }
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * (i53 + 6)] = -dv6[i54 + 3 * i53];
      }
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * (i53 + 9)] = b_y[i54 + 3 * i53];
      }
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * (i53 + 12)] = 0.0;
      }
    }

    for (i53 = 0; i53 <= loop_ub; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * (i53 + 15)] = 0.0;
      }
    }

    for (i53 = 0; i53 < 6; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * ((i53 + loop_ub) + 16)] = 0.0;
      }
    }

    s_pL_sizes = loop_ub + 22;
    for (i53 = 0; i53 < s_pL_sizes; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        d_varargin_1_data[i54 + 3 * i53] = n_tmp_data[i54 + 3 * i53];
      }
    }

    eye(dv6);
    eye(b_y);
    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * i53] = 0.0;
      }
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * (i53 + 3)] = 0.0;
      }
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * (i53 + 6)] = -dv6[i54 + 3 * i53];
      }
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * (i53 + 9)] = 0.0;
      }
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * (i53 + 12)] = b_y[i54 + 3 * i53];
      }
    }

    for (i53 = 0; i53 <= b_loop_ub; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * (i53 + 15)] = 0.0;
      }
    }

    for (i53 = 0; i53 < 6; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * ((i53 + b_loop_ub) + 16)] = 0.0;
      }
    }

    s_pL_sizes = b_loop_ub + 22;
    for (i53 = 0; i53 < s_pL_sizes; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        varargin_2_data[i54 + 3 * i53] = n_tmp_data[i54 + 3 * i53];
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
      d_st.site = &yk_emlrtRSI;
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
    eye(dv6);
    tmp_sizes_idx_1 = b_loop_ub + s_pL_sizes;
    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * i53] = dv6[i54 + 3 * i53];
      }
    }

    for (i53 = 0; i53 < 4; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * (i53 + 3)] = 0.0;
      }
    }

    for (i53 = 0; i53 <= b_loop_ub - 15; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * (i53 + 7)] = 0.0;
      }
    }

    for (i53 = 0; i53 < 7; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * ((i53 + b_loop_ub) - 7)] = 0.0;
      }
    }

    for (i53 = 0; i53 < s_pL_sizes; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * (i53 + b_loop_ub)] = 0.0;
      }
    }

    for (i53 = 0; i53 < tmp_sizes_idx_1; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        e_varargin_1_data[i54 + 3 * i53] = n_tmp_data[i54 + 3 * i53];
      }
    }

    eye(dv6);
    s_pL_sizes = c_loop_ub + d_loop_ub;
    for (i53 = 0; i53 < 7; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * i53] = 0.0;
      }
    }

    for (i53 = 0; i53 <= c_loop_ub - 15; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * (i53 + 7)] = 0.0;
      }
    }

    for (i53 = 0; i53 < 3; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * ((i53 + c_loop_ub) - 7)] = dv6[i54 + 3 * i53];
      }
    }

    for (i53 = 0; i53 < 4; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * ((i53 + c_loop_ub) - 4)] = 0.0;
      }
    }

    for (i53 = 0; i53 < d_loop_ub; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        n_tmp_data[i54 + 3 * (i53 + c_loop_ub)] = 0.0;
      }
    }

    for (i53 = 0; i53 < s_pL_sizes; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        b_varargin_2_data[i54 + 3 * i53] = n_tmp_data[i54 + 3 * i53];
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
      d_st.site = &yk_emlrtRSI;
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
        moduleInstance->b_varargin_1_data[i54 + 6 * i53] = d_varargin_1_data[i54
          + 3 * i53];
      }
    }

    loop_ub += 22;
    for (i53 = 0; i53 < loop_ub; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        moduleInstance->b_varargin_1_data[(i54 + 6 * i53) + 3] =
          varargin_2_data[i54 + 3 * i53];
      }
    }

    R_pred_sizes[0] = 6;
    R_pred_sizes[1] = tmp_sizes_idx_1;
    for (i53 = 0; i53 < tmp_sizes_idx_1; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        moduleInstance->c_varargin_1_data[i54 + 6 * i53] = e_varargin_1_data[i54
          + 3 * i53];
      }
    }

    for (i53 = 0; i53 < tmp_sizes_idx_1; i53++) {
      for (i54 = 0; i54 < 3; i54++) {
        moduleInstance->c_varargin_1_data[(i54 + 6 * i53) + 3] =
          b_varargin_2_data[i54 + 3 * i53];
      }
    }

    e_blkdiag(d_y, N, dv7);
    st.site = &af_emlrtRSI;
    RIEKF_Update_State(moduleInstance, &st, obj, Y_data, s_pR_sizes, s_pL_data,
                       (int32_T)(uint8_T)s_pR_sizes,
                       moduleInstance->b_varargin_1_data, tmp_sizes, dv7,
                       moduleInstance->c_varargin_1_data, R_pred_sizes);
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
      eye(dv6);
      eye(b_y);
      eye(R_pred);
      c_loop_ub = (uint8_T)(loop_ub + 8);
      for (i53 = 0; i53 < c_loop_ub; i53++) {
        o_tmp_data[i53] = 0.0;
      }

      for (i53 = 0; i53 < 3; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          q_tmp_data[i54 + 3 * i53] = 0.0;
        }
      }

      for (i53 = 0; i53 < 3; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          q_tmp_data[i54 + 3 * (i53 + 3)] = 0.0;
        }
      }

      for (i53 = 0; i53 < 3; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          q_tmp_data[i54 + 3 * (i53 + 6)] = -dv6[i54 + 3 * i53];
        }
      }

      for (i53 = 0; i53 < 3; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          q_tmp_data[i54 + 3 * (i53 + 9)] = b_y[i54 + 3 * i53];
        }
      }

      for (i53 = 0; i53 < 3; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          q_tmp_data[i54 + 3 * (i53 + 12)] = 0.0;
        }
      }

      for (i53 = 0; i53 <= b_loop_ub; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          q_tmp_data[i54 + 3 * (i53 + 15)] = 0.0;
        }
      }

      for (i53 = 0; i53 < 6; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          q_tmp_data[i54 + 3 * ((i53 + b_loop_ub) + 16)] = 0.0;
        }
      }

      tmp_sizes[0] = 3;
      tmp_sizes[1] = b_loop_ub + 22;
      b_loop_ub += 22;
      for (i53 = 0; i53 < b_loop_ub; i53++) {
        for (i54 = 0; i54 < 3; i54++) {
          p_tmp_data[i54 + 3 * i53] = q_tmp_data[i54 + 3 * i53];
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
                           o_tmp_data, (int32_T)(uint8_T)(loop_ub + 8),
                           p_tmp_data, tmp_sizes, N, R_pred_data, R_pred_sizes);
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
        eye(dv6);
        eye(b_y);
        eye(R_pred);
        c_loop_ub = (uint8_T)(loop_ub + 8);
        for (i53 = 0; i53 < c_loop_ub; i53++) {
          o_tmp_data[i53] = 0.0;
        }

        for (i53 = 0; i53 < 3; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            q_tmp_data[i54 + 3 * i53] = 0.0;
          }
        }

        for (i53 = 0; i53 < 3; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            q_tmp_data[i54 + 3 * (i53 + 3)] = 0.0;
          }
        }

        for (i53 = 0; i53 < 3; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            q_tmp_data[i54 + 3 * (i53 + 6)] = -dv6[i54 + 3 * i53];
          }
        }

        for (i53 = 0; i53 < 3; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            q_tmp_data[i54 + 3 * (i53 + 9)] = 0.0;
          }
        }

        for (i53 = 0; i53 < 3; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            q_tmp_data[i54 + 3 * (i53 + 12)] = b_y[i54 + 3 * i53];
          }
        }

        for (i53 = 0; i53 <= b_loop_ub; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            q_tmp_data[i54 + 3 * (i53 + 15)] = 0.0;
          }
        }

        for (i53 = 0; i53 < 6; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            q_tmp_data[i54 + 3 * ((i53 + b_loop_ub) + 16)] = 0.0;
          }
        }

        tmp_sizes[0] = 3;
        tmp_sizes[1] = b_loop_ub + 22;
        b_loop_ub += 22;
        for (i53 = 0; i53 < b_loop_ub; i53++) {
          for (i54 = 0; i54 < 3; i54++) {
            p_tmp_data[i54 + 3 * i53] = q_tmp_data[i54 + 3 * i53];
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
                             o_tmp_data, (int32_T)(uint8_T)(loop_ub + 8),
                             p_tmp_data, tmp_sizes, N, R_pred_data, R_pred_sizes);
      }
    }
  }
}

static void J_VectorNav_to_RightToeBottom(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, real_T var1[14], real_T output1[42])
{
  covrtLogFcn(moduleInstance->covInst, 7, 0);
  covrtLogIf(moduleInstance->covInst, 7, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst, 7, 1);
  J_VectorNav_to_RightToeBottom_src(output1, var1);
}

static void J_VectorNav_to_LeftToeBottom(InstanceStruct_F1Scry3smjzFxDJqc88Zr
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

static void RIEKF_Update_State(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Y_data[], int32_T
  Y_sizes, real_T g_b_data[], int32_T b_sizes, real_T b_H_data[], int32_T
  H_sizes[2], real_T N[36], real_T c_PI_data[], int32_T PI_sizes[2])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  int32_T tmp_sizes[2];
  int32_T Xa_sizes[2];
  int32_T loop_ub;
  int32_T i57;
  real_T Pa_data[2601];
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

  int8_T n_tmp_data[17];
  real_T h_b_data[400];
  int32_T iv54[2];
  int8_T o_tmp_data[17];
  int32_T c_y_sizes;
  const mxArray *i_y;
  char_T g_u[21];
  const mxArray *j_y;
  char_T h_u[45];
  static const int32_T iv55[2] = { 1, 21 };

  static const int32_T iv56[2] = { 1, 45 };

  real_T kb_y_data[121];
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
  real_T b_delta_data[45];
  real_T dX_data[324];
  real_T dtheta[6];
  const mxArray *n_y;
  char_T l_u[21];
  const mxArray *o_y;
  char_T m_u[45];
  static const int32_T iv61[2] = { 1, 21 };

  static const int32_T iv62[2] = { 1, 45 };

  int8_T p_tmp_data[10];
  int32_T iv63[2];
  int32_T d_y_sizes[2];
  real_T Pa[2];
  int32_T I_sizes[2];
  real_T I_data[2601];
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

  real_T o_C_data[726];
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
  RIEKF_Augmented_State(moduleInstance, &st, obj, moduleInstance->h_tmp_data,
                        tmp_sizes);
  Xa_sizes[0] = tmp_sizes[0];
  Xa_sizes[1] = tmp_sizes[1];
  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i57 = 0; i57 < loop_ub; i57++) {
    moduleInstance->b_Xa_data[i57] = moduleInstance->h_tmp_data[i57];
  }

  st.site = &kf_emlrtRSI;
  RIEKF_Augmented_Covariance(moduleInstance, &st, obj, Pa_data, Pa_sizes);
  st.site = &lf_emlrtRSI;
  loop_ub = H_sizes[0] * H_sizes[1];
  for (i57 = 0; i57 < loop_ub; i57++) {
    moduleInstance->d_a_data[i57] = b_H_data[i57];
  }

  loop_ub = Pa_sizes[0] * Pa_sizes[1];
  for (i57 = 0; i57 < loop_ub; i57++) {
    moduleInstance->d_b_data[i57] = Pa_data[i57];
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, b_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i57 = 0; i57 < 21; i57++) {
        u[i57] = cv18[i57];
      }

      y = NULL;
      m9 = emlrtCreateCharArray(2, iv48);
      emlrtInitCharArrayR2013a(&b_st, 21, m9, &u[0]);
      emlrtAssign(&y, m9);
      c_st.site = &vk_emlrtRSI;
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
        moduleInstance->o_y_data[i57 + y_sizes_idx_0 * i58] = 0.0;
        c_loop_ub = H_sizes[1];
        for (i59 = 0; i59 < c_loop_ub; i59++) {
          moduleInstance->o_y_data[i57 + y_sizes_idx_0 * i58] += b_H_data[i57 +
            H_sizes[0] * i59] * Pa_data[i59 + Pa_sizes[0] * i58];
        }
      }
    }
  } else {
    y_sizes_idx_0 = (uint8_T)H_sizes[0];
    y_sizes_idx_1 = (uint8_T)Pa_sizes[1];
    loop_ub = (uint8_T)Pa_sizes[1];
    for (i57 = 0; i57 < loop_ub; i57++) {
      for (i58 = 0; i58 < y_sizes_idx_0; i58++) {
        moduleInstance->o_y_data[i58 + y_sizes_idx_0 * i57] = 0.0;
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
            &moduleInstance->d_a_data[0], &lda_t, &moduleInstance->d_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->o_y_data[0], &ldc_t);
    }
  }

  st.site = &lf_emlrtRSI;
  b_sizes_idx_0 = H_sizes[1];
  loop_ub = H_sizes[0];
  for (i57 = 0; i57 < loop_ub; i57++) {
    b_loop_ub = H_sizes[1];
    for (i58 = 0; i58 < b_loop_ub; i58++) {
      moduleInstance->d_b_data[i58 + b_sizes_idx_0 * i57] = b_H_data[i57 +
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, d_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i57 = 0; i57 < 21; i57++) {
        c_u[i57] = cv18[i57];
      }

      c_y = NULL;
      m9 = emlrtCreateCharArray(2, iv50);
      emlrtInitCharArrayR2013a(&b_st, 21, m9, &c_u[0]);
      emlrtAssign(&c_y, m9);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, c_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((y_sizes_idx_1 == 1) || (H_sizes[1] == 1)) {
    y_sizes[0] = y_sizes_idx_0;
    y_sizes[1] = H_sizes[0];
    for (i57 = 0; i57 < y_sizes_idx_0; i57++) {
      loop_ub = H_sizes[0];
      for (i58 = 0; i58 < loop_ub; i58++) {
        moduleInstance->p_y_data[i57 + y_sizes_idx_0 * i58] = 0.0;
        for (i59 = 0; i59 < y_sizes_idx_1; i59++) {
          moduleInstance->p_y_data[i57 + y_sizes_idx_0 * i58] +=
            moduleInstance->o_y_data[i57 + y_sizes_idx_0 * i59] *
            moduleInstance->d_b_data[i59 + b_sizes_idx_0 * i58];
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
        moduleInstance->p_y_data[i58 + (uint8_T)y_sizes_idx_0 * i57] = 0.0;
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
            &moduleInstance->o_y_data[0], &lda_t, &moduleInstance->d_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->p_y_data[0], &ldc_t);
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
    moduleInstance->d_a_data[i57] = Pa_data[i57];
  }

  b_sizes_idx_0 = H_sizes[1];
  loop_ub = H_sizes[0];
  for (i57 = 0; i57 < loop_ub; i57++) {
    b_loop_ub = H_sizes[1];
    for (i58 = 0; i58 < b_loop_ub; i58++) {
      moduleInstance->d_b_data[i58 + b_sizes_idx_0 * i57] = b_H_data[i57 +
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, g_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i57 = 0; i57 < 21; i57++) {
        e_u[i57] = cv18[i57];
      }

      f_y = NULL;
      m9 = emlrtCreateCharArray(2, iv52);
      emlrtInitCharArrayR2013a(&b_st, 21, m9, &e_u[0]);
      emlrtAssign(&f_y, m9);
      c_st.site = &vk_emlrtRSI;
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
        moduleInstance->q_y_data[i57 + b_y_sizes[0] * i58] = 0.0;
        c_loop_ub = Pa_sizes[1];
        for (i59 = 0; i59 < c_loop_ub; i59++) {
          moduleInstance->q_y_data[i57 + b_y_sizes[0] * i58] += Pa_data[i57 +
            Pa_sizes[0] * i59] * moduleInstance->d_b_data[i59 + b_sizes_idx_0 *
            i58];
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
        moduleInstance->q_y_data[i58 + b_y_sizes[0] * i57] = 0.0;
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
            &moduleInstance->d_a_data[0], &lda_t, &moduleInstance->d_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->q_y_data[0], &ldc_t);
    }
  }

  for (i57 = 0; i57 < 36; i57++) {
    h_y[i57] = moduleInstance->p_y_data[i57] + N[i57];
  }

  st.site = &mf_emlrtRSI;
  mrdivide(&st, moduleInstance->q_y_data, b_y_sizes, h_y, c_K_data, K_sizes);

  /*  Copy X along the diagonals if more than one measurement */
  /*  TODO: find better way to do this */
  Xdim = 7.0 + obj->num_landmarks;
  Ydim = (real_T)Y_sizes / Xdim;
  if (!(Ydim < 10.0)) {
    st.site = &xk_emlrtRSI;
    g_error(&st, message(&st, b_emlrt_marshallOut(&st, cv20), &i_emlrtMCI),
            &i_emlrtMCI);
  }

  if (!(Xdim < 17.0)) {
    st.site = &wk_emlrtRSI;
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

  emlrtDimSizeGeqCheckR2012b(170, loop_ub, &g_emlrtECI, sp);
  emlrtDimSizeGeqCheckR2012b(170, b_loop_ub, &h_emlrtECI, sp);
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
      n_tmp_data[i57] = (int8_T)((int8_T)emlrtDynamicBoundsCheckR2012b(i58, 1,
        loop_ub, &xc_emlrtBCI, sp) - 1);
    }

    alpha1 = Xdim * ((1.0 + (real_T)b_sizes_idx_0) - 1.0);
    c_loop_ub = (int32_T)muDoubleScalarFloor(Xdim - 1.0);
    for (i57 = 0; i57 <= c_loop_ub; i57++) {
      i58 = (int8_T)emlrtIntegerCheckR2012b(alpha1 + (1.0 + (real_T)i57),
        &ub_emlrtDCI, sp);
      o_tmp_data[i57] = (int8_T)((int8_T)emlrtDynamicBoundsCheckR2012b(i58, 1,
        b_loop_ub, &yc_emlrtBCI, sp) - 1);
    }

    iv54[0] = (int32_T)muDoubleScalarFloor(Xdim - 1.0) + 1;
    iv54[1] = (int32_T)muDoubleScalarFloor(Xdim - 1.0) + 1;
    emlrtSubAssignSizeCheckR2012b(iv54, 2, Xa_sizes, 2, &i_emlrtECI, sp);
    c_loop_ub = Xa_sizes[1];
    for (i57 = 0; i57 < c_loop_ub; i57++) {
      c_y_sizes = Xa_sizes[0];
      for (i58 = 0; i58 < c_y_sizes; i58++) {
        moduleInstance->b_BigX_data[n_tmp_data[i58] + loop_ub * o_tmp_data[i57]]
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
    moduleInstance->d_a_data[i57] = moduleInstance->b_BigX_data[i57];
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, j_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i57 = 0; i57 < 21; i57++) {
        g_u[i57] = cv18[i57];
      }

      i_y = NULL;
      m9 = emlrtCreateCharArray(2, iv55);
      emlrtInitCharArrayR2013a(&b_st, 21, m9, &g_u[0]);
      emlrtAssign(&i_y, m9);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, i_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((b_loop_ub == 1) || (Y_sizes == 1)) {
    c_y_sizes = loop_ub;
    for (i57 = 0; i57 < loop_ub; i57++) {
      kb_y_data[i57] = 0.0;
      for (i58 = 0; i58 < b_loop_ub; i58++) {
        kb_y_data[i57] += moduleInstance->b_BigX_data[i57 + loop_ub * i58] *
          Y_data[i58];
      }
    }
  } else {
    b_sizes_idx_0 = (int8_T)loop_ub;
    c_y_sizes = (int8_T)loop_ub;
    for (i57 = 0; i57 < b_sizes_idx_0; i57++) {
      kb_y_data[i57] = 0.0;
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
            &moduleInstance->d_a_data[0], &lda_t, &h_b_data[0], &ldb_t, &Xdim,
            &kb_y_data[0], &ldc_t);
    }
  }

  emlrtSizeEqCheck1DR2012b(c_y_sizes, b_sizes, &j_emlrtECI, sp);
  for (i57 = 0; i57 < c_y_sizes; i57++) {
    Z_data[i57] = kb_y_data[i57] - g_b_data[i57];
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
    c_st.site = &vk_emlrtRSI;
    g_error(&c_st, message(&c_st, k_y, &h_emlrtMCI), &h_emlrtMCI);
  }

  if (PI_sizes[0] == 1) {
    y_sizes_idx_0 = K_sizes[0];
    y_sizes_idx_1 = PI_sizes[1];
    loop_ub = K_sizes[0];
    for (i57 = 0; i57 < loop_ub; i57++) {
      b_loop_ub = PI_sizes[1];
      for (i58 = 0; i58 < b_loop_ub; i58++) {
        moduleInstance->u_y_data[i57 + y_sizes_idx_0 * i58] = 0.0;
        for (i59 = 0; i59 < 6; i59++) {
          moduleInstance->u_y_data[i57 + y_sizes_idx_0 * i58] += c_K_data[i57 +
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
        moduleInstance->u_y_data[i58 + y_sizes_idx_0 * i57] = 0.0;
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
            &c_PI_data[0], &ldb_t, &Xdim, &moduleInstance->u_y_data[0], &ldc_t);
    }
  }

  st.site = &of_emlrtRSI;
  loop_ub = y_sizes_idx_0 * y_sizes_idx_1;
  for (i57 = 0; i57 < loop_ub; i57++) {
    moduleInstance->d_a_data[i57] = moduleInstance->u_y_data[i57];
  }

  for (i57 = 0; i57 < c_y_sizes; i57++) {
    h_b_data[i57] = kb_y_data[i57] - g_b_data[i57];
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, m_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i57 = 0; i57 < 21; i57++) {
        j_u[i57] = cv18[i57];
      }

      l_y = NULL;
      m9 = emlrtCreateCharArray(2, iv58);
      emlrtInitCharArrayR2013a(&b_st, 21, m9, &j_u[0]);
      emlrtAssign(&l_y, m9);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, l_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((y_sizes_idx_1 == 1) || (c_y_sizes == 1)) {
    c_y_sizes = y_sizes_idx_0;
    for (i57 = 0; i57 < y_sizes_idx_0; i57++) {
      delta_data[i57] = 0.0;
      for (i58 = 0; i58 < y_sizes_idx_1; i58++) {
        delta_data[i57] += moduleInstance->u_y_data[i57 + y_sizes_idx_0 * i58] *
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
            &moduleInstance->d_a_data[0], &lda_t, &h_b_data[0], &ldb_t, &Xdim,
            &delta_data[0], &ldc_t);
    }
  }

  emlrtDimSizeGeqCheckR2012b(51, c_y_sizes, &k_emlrtECI, sp);
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
    moduleInstance->d_a_data[i57] = dX_data[i57];
  }

  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i57 = 0; i57 < loop_ub; i57++) {
    moduleInstance->d_b_data[i57] = moduleInstance->b_Xa_data[i57];
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, o_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i57 = 0; i57 < 21; i57++) {
        l_u[i57] = cv18[i57];
      }

      n_y = NULL;
      m9 = emlrtCreateCharArray(2, iv61);
      emlrtInitCharArrayR2013a(&b_st, 21, m9, &l_u[0]);
      emlrtAssign(&n_y, m9);
      c_st.site = &vk_emlrtRSI;
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
        moduleInstance->r_y_data[i57 + y_sizes_idx_0 * i58] = 0.0;
        c_loop_ub = dX_sizes[1];
        for (i59 = 0; i59 < c_loop_ub; i59++) {
          moduleInstance->r_y_data[i57 + y_sizes_idx_0 * i58] += dX_data[i57 +
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
        moduleInstance->r_y_data[i58 + y_sizes_idx_0 * i57] = 0.0;
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
            &moduleInstance->d_a_data[0], &lda_t, &moduleInstance->d_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->r_y_data[0], &ldc_t);
    }
  }

  for (i57 = 0; i57 < 7; i57++) {
    for (i58 = 0; i58 < 7; i58++) {
      obj->X[i58 + 7 * i57] = moduleInstance->r_y_data
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
    i59 = emlrtDynamicBoundsCheckR2012b(i59, 1, 10, &sc_emlrtBCI, sp);
  }

  loop_ub = (int8_T)((int8_T)i59 - 1);
  for (b_sizes_idx_0 = 0; b_sizes_idx_0 <= loop_ub; b_sizes_idx_0++) {
    p_tmp_data[b_sizes_idx_0] = (int8_T)b_sizes_idx_0;
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
      obj->landmarks[i59 + 3 * p_tmp_data[i58]] = moduleInstance->r_y_data[i59 +
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
  b_eye(&st, Pa, moduleInstance->g_tmp_data, tmp_sizes);
  I_sizes[0] = tmp_sizes[0];
  I_sizes[1] = tmp_sizes[1];
  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i57 = 0; i57 < loop_ub; i57++) {
    I_data[i57] = moduleInstance->g_tmp_data[i57];
  }

  st.site = &tf_emlrtRSI;
  loop_ub = H_sizes[0] * H_sizes[1];
  for (i57 = 0; i57 < loop_ub; i57++) {
    i_b_data[i57] = b_H_data[i57];
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
    c_st.site = &vk_emlrtRSI;
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
            K_sizes[0] * i59] * b_H_data[i59 + i58];
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
    i_b_data[i57] = b_H_data[i57];
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
    c_st.site = &vk_emlrtRSI;
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
            K_sizes[0] * i59] * b_H_data[i59 + i58];
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
    moduleInstance->d_a_data[i57] = I_data[i57] - moduleInstance->i_C_data[i57];
  }

  loop_ub = Pa_sizes[0] * Pa_sizes[1];
  for (i57 = 0; i57 < loop_ub; i57++) {
    moduleInstance->d_b_data[i57] = Pa_data[i57];
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, s_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i57 = 0; i57 < 21; i57++) {
        p_u[i57] = cv18[i57];
      }

      r_y = NULL;
      m9 = emlrtCreateCharArray(2, iv66);
      emlrtInitCharArrayR2013a(&b_st, 21, m9, &p_u[0]);
      emlrtAssign(&r_y, m9);
      c_st.site = &vk_emlrtRSI;
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
        moduleInstance->s_y_data[i57 + y_sizes_idx_0 * i58] = 0.0;
        c_loop_ub = tmp_sizes[1];
        for (i59 = 0; i59 < c_loop_ub; i59++) {
          moduleInstance->s_y_data[i57 + y_sizes_idx_0 * i58] +=
            moduleInstance->d_a_data[i57 + tmp_sizes[0] * i59] * Pa_data[i59 +
            Pa_sizes[0] * i58];
        }
      }
    }
  } else {
    y_sizes_idx_0 = (uint8_T)tmp_sizes[0];
    y_sizes_idx_1 = (uint8_T)Pa_sizes[1];
    loop_ub = (uint8_T)Pa_sizes[1];
    for (i57 = 0; i57 < loop_ub; i57++) {
      for (i58 = 0; i58 < y_sizes_idx_0; i58++) {
        moduleInstance->s_y_data[i58 + y_sizes_idx_0 * i57] = 0.0;
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
            &moduleInstance->d_a_data[0], &lda_t, &moduleInstance->d_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->s_y_data[0], &ldc_t);
    }
  }

  st.site = &tf_emlrtRSI;
  b_sizes_idx_0 = tmp_sizes[1];
  loop_ub = tmp_sizes[0];
  for (i57 = 0; i57 < loop_ub; i57++) {
    b_loop_ub = I_sizes[1];
    for (i58 = 0; i58 < b_loop_ub; i58++) {
      moduleInstance->d_b_data[i58 + b_sizes_idx_0 * i57] = I_data[i57 +
        I_sizes[0] * i58] - moduleInstance->j_C_data[i57 + b_C_sizes[0] * i58];
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, u_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i57 = 0; i57 < 21; i57++) {
        r_u[i57] = cv18[i57];
      }

      t_y = NULL;
      m9 = emlrtCreateCharArray(2, iv68);
      emlrtInitCharArrayR2013a(&b_st, 21, m9, &r_u[0]);
      emlrtAssign(&t_y, m9);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, t_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((y_sizes_idx_1 == 1) || (tmp_sizes[1] == 1)) {
    e_y_sizes[0] = y_sizes_idx_0;
    e_y_sizes[1] = tmp_sizes[0];
    for (i57 = 0; i57 < y_sizes_idx_0; i57++) {
      loop_ub = tmp_sizes[0];
      for (i58 = 0; i58 < loop_ub; i58++) {
        moduleInstance->t_y_data[i57 + y_sizes_idx_0 * i58] = 0.0;
        for (i59 = 0; i59 < y_sizes_idx_1; i59++) {
          moduleInstance->t_y_data[i57 + y_sizes_idx_0 * i58] +=
            moduleInstance->s_y_data[i57 + y_sizes_idx_0 * i59] *
            moduleInstance->d_b_data[i59 + b_sizes_idx_0 * i58];
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
        moduleInstance->t_y_data[i58 + (uint8_T)y_sizes_idx_0 * i57] = 0.0;
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
            &moduleInstance->s_y_data[0], &lda_t, &moduleInstance->d_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->t_y_data[0], &ldc_t);
    }
  }

  st.site = &tf_emlrtRSI;
  b_sizes_idx_0 = (int8_T)K_sizes[0];
  for (i57 = 0; i57 < 6; i57++) {
    for (i58 = 0; i58 < b_sizes_idx_0; i58++) {
      o_C_data[i58 + b_sizes_idx_0 * i57] = 0.0;
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
          [0], &ldb_t, &Xdim, &o_C_data[0], &ldc_t);
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
    dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &o_C_data[0], &lda_t,
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
    moduleInstance->g_tmp_data[i57] = moduleInstance->t_y_data[i57] +
      moduleInstance->k_C_data[i57];
  }

  st.site = &tf_emlrtRSI;
  c_RIEKF_Store_Covariance(moduleInstance, &st, obj, moduleInstance->g_tmp_data,
    f_y_sizes);

  /*  Joseph update form */
}

static void mrdivide(const emlrtStack *sp, real_T c_A_data[], int32_T A_sizes[2],
                     real_T B[36], real_T kb_y_data[], int32_T y_sizes[2])
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
    lusolve(&st, B, c_A_data, A_sizes, kb_y_data, y_sizes);
  }
}

static void lusolve(const emlrtStack *sp, real_T A[36], real_T c_B_data[],
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
    X_data[iy] = c_B_data[iy];
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
  st.site = &kl_emlrtRSI;
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
    b_st.site = &el_emlrtRSI;
    g_error(&b_st, message(&b_st, y, &n_emlrtMCI), &n_emlrtMCI);
  }
}

static void RIEKF_exp(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance,
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

  real_T u_data[45];
  real_T beta1;
  const mxArray *g_y;
  char_T e_u[40];
  static char_T cv28[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D', 'i',
    'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e', 'l' };

  static const int32_T iv79[2] = { 1, 40 };

  real_T n_tmp_data[2025];
  int32_T tmp_sizes[2];
  int8_T o_tmp_data[18];
  int32_T C_sizes[2];
  int32_T iv80[2];
  real_T o_C_data[45];
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
    c_st.site = &el_emlrtRSI;
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
    c_st.site = &el_emlrtRSI;
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
    c_st.site = &el_emlrtRSI;
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
    c_st.site = &hl_emlrtRSI;
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
    b_st.site = &gl_emlrtRSI;
    g_error(&b_st, message(&b_st, g_y, &p_emlrtMCI), &p_emlrtMCI);
  }

  b_st.site = &gh_emlrtRSI;
  for (maxdimlen = -1; maxdimlen + 2 <= nx; maxdimlen++) {
    u_data[maxdimlen + 1] = v_data[i63 + maxdimlen];
  }

  st.site = &bh_emlrtRSI;
  c_eye(&st, 3.0 + (real_T)(int8_T)calclen, n_tmp_data, tmp_sizes);
  dX_sizes[0] = tmp_sizes[0];
  dX_sizes[1] = tmp_sizes[1];
  maxdimlen = tmp_sizes[0] * tmp_sizes[1];
  for (i63 = 0; i63 < maxdimlen; i63++) {
    dX_data[i63] = n_tmp_data[i63];
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
    o_tmp_data[i65] = (int8_T)((int8_T)(i63 + i65) - 1);
  }

  st.site = &ch_emlrtRSI;
  C_sizes[1] = (int8_T)calclen;
  C_sizes[0] = 3;
  maxdimlen = (int8_T)calclen;
  for (i65 = 0; i65 < maxdimlen; i65++) {
    for (unnamed_idx_0 = 0; unnamed_idx_0 < 3; unnamed_idx_0++) {
      o_C_data[unnamed_idx_0 + 3 * i65] = 0.0;
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
          &ldb_t, &beta1, &o_C_data[0], &ldc_t);
  }

  iv80[0] = 3;
  iv80[1] = (int8_T)((int8_T)i64 - i63) + 1;
  emlrtSubAssignSizeCheckR2012b(iv80, 2, C_sizes, 2, &p_emlrtECI, sp);
  maxdimlen = (int8_T)calclen;
  for (i63 = 0; i63 < maxdimlen; i63++) {
    for (i64 = 0; i64 < 3; i64++) {
      dX_data[i64 + dX_sizes[0] * o_tmp_data[i63]] = o_C_data[i64 + 3 * i63];
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
    c_st.site = &el_emlrtRSI;
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
  st.site = &cl_emlrtRSI;
  g_error(&st, message(&st, y, &emlrtMCI), &emlrtMCI);
}

static void c_eye(const emlrtStack *sp, real_T varargin_1, real_T I_data[],
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
    b_st.site = &fl_emlrtRSI;
    g_error(&b_st, c_message(&b_st, y, b_y, c_y, &d_emlrtMCI), &d_emlrtMCI);
  }

  I_sizes[0] = (int32_T)emlrtNonNegativeCheckR2012b(varargin_1, &vb_emlrtDCI, sp);
  I_sizes[1] = (int32_T)emlrtNonNegativeCheckR2012b(varargin_1, &wb_emlrtDCI, sp);
  loop_ub = (int32_T)emlrtNonNegativeCheckR2012b(varargin_1, &vb_emlrtDCI, sp) *
    (int32_T)emlrtNonNegativeCheckR2012b(varargin_1, &wb_emlrtDCI, sp);
  for (k = 0; k < loop_ub; k++) {
    I_data[k] = 0.0;
  }

  if ((int32_T)varargin_1 > 0) {
    st.site = &ae_emlrtRSI;
    if ((!(1 > (int32_T)varargin_1)) && ((int32_T)varargin_1 > 2147483646)) {
      b_st.site = &be_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 0; k + 1 <= (int32_T)varargin_1; k++) {
      I_data[k + (int32_T)varargin_1 * k] = 1.0;
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
    b_st.site = &el_emlrtRSI;
    g_error(&b_st, message(&b_st, y, &n_emlrtMCI), &n_emlrtMCI);
  }
}

static void b_RIEKF_Update_State(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Y_data[], int32_T
  Y_sizes, real_T g_b_data[], int32_T b_sizes, real_T b_H_data[], int32_T
  H_sizes[2], real_T N[9], real_T c_PI_data[], int32_T PI_sizes[2])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  int32_T tmp_sizes[2];
  int32_T Xa_sizes[2];
  int32_T loop_ub;
  int32_T i68;
  real_T Pa_data[2601];
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
  real_T c_K_data[153];
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
  real_T o_C_data[153];
  int32_T K_sizes[2];
  real_T Ydim;
  static char_T cv34[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  int32_T c_loop_ub;
  int8_T n_tmp_data[17];
  real_T i_b_data[400];
  int32_T iv90[2];
  int8_T o_tmp_data[17];
  const mxArray *h_y;
  char_T f_u[21];
  const mxArray *i_y;
  char_T g_u[45];
  static const int32_T iv91[2] = { 1, 21 };

  static const int32_T iv92[2] = { 1, 45 };

  real_T p_C_data[121];
  real_T Z_data[107];
  real_T g_a_data[162];
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
  real_T b_delta_data[45];
  real_T dX_data[324];
  real_T dtheta[6];
  const mxArray *m_y;
  char_T j_u[21];
  const mxArray *n_y;
  char_T k_u[45];
  static const int32_T iv95[2] = { 1, 21 };

  static const int32_T iv96[2] = { 1, 45 };

  int8_T p_tmp_data[10];
  int32_T iv97[2];
  int32_T y_sizes[2];
  real_T Pa[2];
  int32_T I_sizes[2];
  real_T I_data[2601];
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

  real_T kb_y_data[162];
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
  RIEKF_Augmented_State(moduleInstance, &st, obj, moduleInstance->m_tmp_data,
                        tmp_sizes);
  Xa_sizes[0] = tmp_sizes[0];
  Xa_sizes[1] = tmp_sizes[1];
  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i68 = 0; i68 < loop_ub; i68++) {
    moduleInstance->d_Xa_data[i68] = moduleInstance->m_tmp_data[i68];
  }

  st.site = &kf_emlrtRSI;
  RIEKF_Augmented_Covariance(moduleInstance, &st, obj, Pa_data, Pa_sizes);
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, b_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i68 = 0; i68 < 21; i68++) {
        u[i68] = cv32[i68];
      }

      y = NULL;
      m17 = emlrtCreateCharArray(2, iv85);
      emlrtInitCharArrayR2013a(&b_st, 21, m17, &u[0]);
      emlrtAssign(&y, m17);
      c_st.site = &vk_emlrtRSI;
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
          c_K_data[i68 + 3 * i69] += b_H_data[i68 + H_sizes[0] * i70] *
            Pa_data[i70 + i69];
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
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &b_H_data[0], &lda_t,
            &Pa_data[0], &ldb_t, &Xdim, &c_K_data[0], &ldc_t);
    }
  }

  st.site = &lf_emlrtRSI;
  b_sizes_idx_0 = H_sizes[1];
  for (i68 = 0; i68 < 3; i68++) {
    loop_ub = H_sizes[1];
    for (i69 = 0; i69 < loop_ub; i69++) {
      h_b_data[i69 + b_sizes_idx_0 * i68] = b_H_data[i68 + H_sizes[0] * i69];
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
    c_st.site = &vk_emlrtRSI;
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
      h_b_data[i69 + b_sizes_idx_0 * i68] = b_H_data[i68 + H_sizes[0] * i69];
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, f_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i68 = 0; i68 < 21; i68++) {
        d_u[i68] = cv32[i68];
      }

      e_y = NULL;
      m17 = emlrtCreateCharArray(2, iv88);
      emlrtInitCharArrayR2013a(&b_st, 21, m17, &d_u[0]);
      emlrtAssign(&e_y, m17);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, e_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if (Pa_sizes[1] == 1) {
    dX_sizes[0] = Pa_sizes[0];
    dX_sizes[1] = 3;
    loop_ub = Pa_sizes[0];
    for (i68 = 0; i68 < loop_ub; i68++) {
      for (i69 = 0; i69 < 3; i69++) {
        o_C_data[i68 + dX_sizes[0] * i69] = 0.0;
        i70 = 0;
        while (i70 <= 0) {
          o_C_data[i68 + dX_sizes[0] * i69] += Pa_data[i68] *
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
        o_C_data[i69 + dX_sizes[0] * i68] = 0.0;
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
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &Pa_data[0], &lda_t,
            &h_b_data[0], &ldb_t, &Xdim, &o_C_data[0], &ldc_t);
    }
  }

  for (i68 = 0; i68 < 9; i68++) {
    g_y[i68] = c_y[i68] + N[i68];
  }

  st.site = &mf_emlrtRSI;
  b_mrdivide(&st, o_C_data, dX_sizes, g_y, c_K_data, K_sizes);

  /*  Copy X along the diagonals if more than one measurement */
  /*  TODO: find better way to do this */
  Xdim = 7.0 + obj->num_landmarks;
  Ydim = (real_T)Y_sizes / Xdim;
  if (!(Ydim < 10.0)) {
    st.site = &xk_emlrtRSI;
    g_error(&st, message(&st, b_emlrt_marshallOut(&st, cv34), &i_emlrtMCI),
            &i_emlrtMCI);
  }

  if (!(Xdim < 17.0)) {
    st.site = &wk_emlrtRSI;
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

  emlrtDimSizeGeqCheckR2012b(170, loop_ub, &g_emlrtECI, sp);
  emlrtDimSizeGeqCheckR2012b(170, b_loop_ub, &h_emlrtECI, sp);
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
      n_tmp_data[i68] = (int8_T)((int8_T)emlrtDynamicBoundsCheckR2012b(i69, 1,
        loop_ub, &xc_emlrtBCI, sp) - 1);
    }

    alpha1 = Xdim * ((1.0 + (real_T)C_sizes_idx_1) - 1.0);
    c_loop_ub = (int32_T)muDoubleScalarFloor(Xdim - 1.0);
    for (i68 = 0; i68 <= c_loop_ub; i68++) {
      i69 = (int8_T)emlrtIntegerCheckR2012b(alpha1 + (1.0 + (real_T)i68),
        &ub_emlrtDCI, sp);
      o_tmp_data[i68] = (int8_T)((int8_T)emlrtDynamicBoundsCheckR2012b(i69, 1,
        b_loop_ub, &yc_emlrtBCI, sp) - 1);
    }

    iv90[0] = (int32_T)muDoubleScalarFloor(Xdim - 1.0) + 1;
    iv90[1] = (int32_T)muDoubleScalarFloor(Xdim - 1.0) + 1;
    emlrtSubAssignSizeCheckR2012b(iv90, 2, Xa_sizes, 2, &i_emlrtECI, sp);
    c_loop_ub = Xa_sizes[1];
    for (i68 = 0; i68 < c_loop_ub; i68++) {
      b_sizes_idx_0 = Xa_sizes[0];
      for (i69 = 0; i69 < b_sizes_idx_0; i69++) {
        moduleInstance->d_BigX_data[n_tmp_data[i69] + loop_ub * o_tmp_data[i68]]
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, i_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i68 = 0; i68 < 21; i68++) {
        f_u[i68] = cv32[i68];
      }

      h_y = NULL;
      m17 = emlrtCreateCharArray(2, iv91);
      emlrtInitCharArrayR2013a(&b_st, 21, m17, &f_u[0]);
      emlrtAssign(&h_y, m17);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, h_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((b_loop_ub == 1) || (Y_sizes == 1)) {
    b_sizes_idx_0 = loop_ub;
    for (i68 = 0; i68 < loop_ub; i68++) {
      p_C_data[i68] = 0.0;
      for (i69 = 0; i69 < b_loop_ub; i69++) {
        p_C_data[i68] += moduleInstance->d_BigX_data[i68 + loop_ub * i69] *
          Y_data[i69];
      }
    }
  } else {
    C_sizes_idx_1 = (int8_T)loop_ub;
    b_sizes_idx_0 = (int8_T)loop_ub;
    for (i68 = 0; i68 < C_sizes_idx_1; i68++) {
      p_C_data[i68] = 0.0;
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
            &p_C_data[0], &ldc_t);
    }
  }

  emlrtSizeEqCheck1DR2012b(b_sizes_idx_0, b_sizes, &j_emlrtECI, sp);
  for (i68 = 0; i68 < b_sizes_idx_0; i68++) {
    Z_data[i68] = p_C_data[i68] - g_b_data[i68];
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
      moduleInstance->fb_y_data[i69 + y_sizes_idx_0 * i68] = 0.0;
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
          &j_b_data[0], &ldb_t, &Xdim, &moduleInstance->fb_y_data[0], &ldc_t);
  }

  st.site = &of_emlrtRSI;
  loop_ub = (int8_T)K_sizes[0] * (int8_T)PI_sizes[1];
  for (i68 = 0; i68 < loop_ub; i68++) {
    moduleInstance->f_a_data[i68] = moduleInstance->fb_y_data[i68];
  }

  for (i68 = 0; i68 < b_sizes_idx_0; i68++) {
    i_b_data[i68] = p_C_data[i68] - g_b_data[i68];
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, k_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i68 = 0; i68 < 21; i68++) {
        h_u[i68] = cv32[i68];
      }

      j_y = NULL;
      m17 = emlrtCreateCharArray(2, iv93);
      emlrtInitCharArrayR2013a(&b_st, 21, m17, &h_u[0]);
      emlrtAssign(&j_y, m17);
      c_st.site = &vk_emlrtRSI;
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
        delta_data[i68] += moduleInstance->fb_y_data[i68 + y_sizes_idx_0 * i69] *
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

  emlrtDimSizeGeqCheckR2012b(51, b_sizes_idx_0, &k_emlrtECI, sp);
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, n_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i68 = 0; i68 < 21; i68++) {
        j_u[i68] = cv32[i68];
      }

      m_y = NULL;
      m17 = emlrtCreateCharArray(2, iv95);
      emlrtInitCharArrayR2013a(&b_st, 21, m17, &j_u[0]);
      emlrtAssign(&m_y, m17);
      c_st.site = &vk_emlrtRSI;
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
        moduleInstance->cb_y_data[i68 + y_sizes_idx_0 * i69] = 0.0;
        c_loop_ub = dX_sizes[1];
        for (i70 = 0; i70 < c_loop_ub; i70++) {
          moduleInstance->cb_y_data[i68 + y_sizes_idx_0 * i69] += dX_data[i68 +
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
        moduleInstance->cb_y_data[i69 + y_sizes_idx_0 * i68] = 0.0;
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
            &ldb_t, &Xdim, &moduleInstance->cb_y_data[0], &ldc_t);
    }
  }

  for (i68 = 0; i68 < 7; i68++) {
    for (i69 = 0; i69 < 7; i69++) {
      obj->X[i69 + 7 * i68] = moduleInstance->cb_y_data
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
    i70 = emlrtDynamicBoundsCheckR2012b(i70, 1, 10, &sc_emlrtBCI, sp);
  }

  loop_ub = (int8_T)((int8_T)i70 - 1);
  for (C_sizes_idx_1 = 0; C_sizes_idx_1 <= loop_ub; C_sizes_idx_1++) {
    p_tmp_data[C_sizes_idx_1] = (int8_T)C_sizes_idx_1;
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
      obj->landmarks[i70 + 3 * p_tmp_data[i69]] = moduleInstance->cb_y_data[i70
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
  b_eye(&st, Pa, moduleInstance->l_tmp_data, tmp_sizes);
  I_sizes[0] = tmp_sizes[0];
  I_sizes[1] = tmp_sizes[1];
  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i68 = 0; i68 < loop_ub; i68++) {
    I_data[i68] = moduleInstance->l_tmp_data[i68];
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
      moduleInstance->gb_y_data[i69 + b_y_sizes[0] * i68] = 0.0;
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
          &b_H_data[0], &ldb_t, &Xdim, &moduleInstance->gb_y_data[0], &ldc_t);
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
      moduleInstance->hb_y_data[i69 + c_y_sizes[0] * i68] = 0.0;
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
          &b_H_data[0], &ldb_t, &Xdim, &moduleInstance->hb_y_data[0], &ldc_t);
  }

  for (i68 = 0; i68 < 2; i68++) {
    dX_sizes[i68] = I_sizes[i68];
    l_y[i68] = c_y_sizes[i68];
  }

  emlrtSizeEqCheckNDR2012b(dX_sizes, l_y, &n_emlrtECI, sp);
  st.site = &tf_emlrtRSI;
  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i68 = 0; i68 < loop_ub; i68++) {
    moduleInstance->f_a_data[i68] = I_data[i68] - moduleInstance->gb_y_data[i68];
  }

  loop_ub = Pa_sizes[0] * Pa_sizes[1];
  for (i68 = 0; i68 < loop_ub; i68++) {
    moduleInstance->f_b_data[i68] = Pa_data[i68];
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, p_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i68 = 0; i68 < 21; i68++) {
        l_u[i68] = cv32[i68];
      }

      o_y = NULL;
      m17 = emlrtCreateCharArray(2, iv98);
      emlrtInitCharArrayR2013a(&b_st, 21, m17, &l_u[0]);
      emlrtAssign(&o_y, m17);
      c_st.site = &vk_emlrtRSI;
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
        moduleInstance->db_y_data[i68 + y_sizes_idx_0 * i69] = 0.0;
        c_loop_ub = tmp_sizes[1];
        for (i70 = 0; i70 < c_loop_ub; i70++) {
          moduleInstance->db_y_data[i68 + y_sizes_idx_0 * i69] +=
            moduleInstance->f_a_data[i68 + tmp_sizes[0] * i70] * Pa_data[i70 +
            Pa_sizes[0] * i69];
        }
      }
    }
  } else {
    y_sizes_idx_0 = (int8_T)tmp_sizes[0];
    C_sizes_idx_1 = (int8_T)Pa_sizes[1];
    loop_ub = (int8_T)Pa_sizes[1];
    for (i68 = 0; i68 < loop_ub; i68++) {
      for (i69 = 0; i69 < y_sizes_idx_0; i69++) {
        moduleInstance->db_y_data[i69 + y_sizes_idx_0 * i68] = 0.0;
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
            &ldb_t, &Xdim, &moduleInstance->db_y_data[0], &ldc_t);
    }
  }

  st.site = &tf_emlrtRSI;
  b_sizes_idx_0 = tmp_sizes[1];
  loop_ub = tmp_sizes[0];
  for (i68 = 0; i68 < loop_ub; i68++) {
    b_loop_ub = I_sizes[1];
    for (i69 = 0; i69 < b_loop_ub; i69++) {
      moduleInstance->f_b_data[i69 + b_sizes_idx_0 * i68] = I_data[i68 +
        I_sizes[0] * i69] - moduleInstance->hb_y_data[i68 + c_y_sizes[0] * i69];
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, r_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i68 = 0; i68 < 21; i68++) {
        n_u[i68] = cv32[i68];
      }

      q_y = NULL;
      m17 = emlrtCreateCharArray(2, iv100);
      emlrtInitCharArrayR2013a(&b_st, 21, m17, &n_u[0]);
      emlrtAssign(&q_y, m17);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, q_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((C_sizes_idx_1 == 1) || (tmp_sizes[1] == 1)) {
    d_y_sizes[0] = y_sizes_idx_0;
    d_y_sizes[1] = tmp_sizes[0];
    for (i68 = 0; i68 < y_sizes_idx_0; i68++) {
      loop_ub = tmp_sizes[0];
      for (i69 = 0; i69 < loop_ub; i69++) {
        moduleInstance->eb_y_data[i68 + y_sizes_idx_0 * i69] = 0.0;
        for (i70 = 0; i70 < C_sizes_idx_1; i70++) {
          moduleInstance->eb_y_data[i68 + y_sizes_idx_0 * i69] +=
            moduleInstance->db_y_data[i68 + y_sizes_idx_0 * i70] *
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
        moduleInstance->eb_y_data[i69 + (int8_T)y_sizes_idx_0 * i68] = 0.0;
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
            &moduleInstance->db_y_data[0], &lda_t, &moduleInstance->f_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->eb_y_data[0], &ldc_t);
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
      kb_y_data[i69 + y_sizes_idx_0 * i68] = 0.0;
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
          [0], &ldb_t, &Xdim, &kb_y_data[0], &ldc_t);
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
      moduleInstance->ib_y_data[i69 + e_y_sizes[0] * i68] = 0.0;
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
    dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &kb_y_data[0], &lda_t,
          &j_b_data[0], &ldb_t, &Xdim, &moduleInstance->ib_y_data[0], &ldc_t);
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
    moduleInstance->jb_y_data[i68] = moduleInstance->eb_y_data[i68] +
      moduleInstance->ib_y_data[i68];
  }

  st.site = &tf_emlrtRSI;
  c_RIEKF_Store_Covariance(moduleInstance, &st, obj, moduleInstance->jb_y_data,
    f_y_sizes);

  /*  Joseph update form */
}

static void b_mrdivide(const emlrtStack *sp, real_T c_A_data[], int32_T A_sizes
  [2], real_T B[9], real_T kb_y_data[], int32_T y_sizes[2])
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (A_sizes[0] == 0) {
    y_sizes[0] = 0;
    y_sizes[1] = 3;
  } else {
    st.site = &uf_emlrtRSI;
    b_lusolve(&st, B, c_A_data, A_sizes, kb_y_data, y_sizes);
  }
}

static void b_lusolve(const emlrtStack *sp, real_T A[9], real_T c_B_data[],
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
    X_data[iy] = c_B_data[iy];
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

static void all(const emlrtStack *sp, boolean_T x[40], boolean_T y[10])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  int32_T i2;
  int32_T iy;
  int32_T i;
  int32_T i1;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ih_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  for (i2 = 0; i2 < 10; i2++) {
    y[i2] = true;
  }

  i2 = 0;
  iy = -1;
  for (i = 0; i < 10; i++) {
    i1 = i2 + 1;
    i2 += 4;
    iy++;
    b_st.site = &jh_emlrtRSI;
    if ((!(i1 > i2)) && (i2 > 2147483646)) {
      c_st.site = &be_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    exitg1 = false;
    while ((!exitg1) && (i1 <= i2)) {
      if (!x[i1 - 1]) {
        y[iy] = false;
        exitg1 = true;
      } else {
        i1++;
      }
    }
  }
}

static boolean_T b_all(boolean_T x[10])
{
  boolean_T y;
  int32_T k;
  boolean_T exitg1;
  y = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 10)) {
    if (!x[k]) {
      y = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

static void RIEKF_Update_StaticLandmarks(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T measured_landmarks
  [40])
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
  static char_T cv35[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  int32_T Y_sizes;
  boolean_T x;
  int32_T ii_sizes_idx_0;
  int32_T i71;
  int32_T ii_sizes_idx_1;
  int32_T b_sizes;
  real_T Y_data[140];
  int32_T H_sizes[2];
  real_T g_b_data[140];
  real_T d5;
  real_T b_H_data[1260];
  int32_T N_sizes[2];
  int32_T PI_sizes[2];
  real_T b_measured_landmarks[7];
  int32_T i72;
  emlrtStack b_st;
  emlrtStack c_st;
  real_T d_varargin_1_data[3];
  real_T n_tmp_data[7];
  int32_T obj_sizes[2];
  real_T b[9];
  real_T b_R_pred[9];
  int32_T i73;
  int32_T i74;
  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(moduleInstance->covInst, 0, 15);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 33);

  /*  Function to perform Right-Invariant EKF update from static */
  /*  landmark distance measurements */
  st.site = &kh_emlrtRSI;
  RIEKF_Separate_State(moduleInstance, obj->X, obj->theta, R_pred, unusedU7,
                       unusedU8, unusedU9, unusedUa, unusedUb, unusedUc);

  /*  Determine sizes (needed for codegen), (TODO: there is probably a better way to do this) */
  lm_cnt = 0.0;
  for (i = 0; i < 10; i++) {
    covrtLogFor(moduleInstance->covInst, 0, 0, 2, 1);
    if (covrtLogCond(moduleInstance->covInst, 0, 0, 9, measured_landmarks[i << 2]
                     == 0.0) || covrtLogCond(moduleInstance->covInst, 0, 0, 10,
         muDoubleScalarIsNaN(measured_landmarks[i << 2]))) {
      covrtLogMcdc(moduleInstance->covInst, 0, 0, 7, true);
      covrtLogIf(moduleInstance->covInst, 0, 0, 15, true);
      covrtLogBasicBlock(moduleInstance->covInst, 0, 34);
    } else {
      covrtLogMcdc(moduleInstance->covInst, 0, 0, 7, false);
      covrtLogIf(moduleInstance->covInst, 0, 0, 15, false);
      covrtLogBasicBlock(moduleInstance->covInst, 0, 35);
      x = (obj->landmark_positions[0] == measured_landmarks[i << 2]);
      if (x) {
        ii_sizes_idx_0 = 1;
        ii_sizes_idx_1 = 1;
      } else {
        ii_sizes_idx_0 = 0;
        ii_sizes_idx_1 = 0;
      }

      if (covrtLogIf(moduleInstance->covInst, 0, 0, 16, covrtLogMcdc
                     (moduleInstance->covInst, 0, 0, 8, !covrtLogCond
                      (moduleInstance->covInst, 0, 0, 11, (ii_sizes_idx_0 == 0) ||
                       (ii_sizes_idx_1 == 0))))) {
        covrtLogBasicBlock(moduleInstance->covInst, 0, 36);
        lm_cnt++;
      }
    }

    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst, 0, 0, 2, 0);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 37);
  if (!(lm_cnt <= 20.0)) {
    st.site = &dl_emlrtRSI;
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
    b_H_data[i71] = 0.0;
  }

  d5 = 3.0 * lm_cnt;
  N_sizes[0] = (int32_T)d5;
  N_sizes[1] = (int32_T)d5;
  ii_sizes_idx_0 = (int32_T)d5 * (int32_T)d5;
  for (i71 = 0; i71 < ii_sizes_idx_0; i71++) {
    moduleInstance->b_N_data[i71] = 0.0;
  }

  PI_sizes[0] = (int32_T)(3.0 * lm_cnt);
  PI_sizes[1] = (int32_T)(7.0 * lm_cnt);
  ii_sizes_idx_0 = (int32_T)(3.0 * lm_cnt) * (int32_T)(7.0 * lm_cnt);
  for (i71 = 0; i71 < ii_sizes_idx_0; i71++) {
    moduleInstance->b_PI_data[i71] = 0.0;
  }

  /*  Stack landmark measurements (TODO: Optimize this) */
  for (i = 0; i < 10; i++) {
    covrtLogFor(moduleInstance->covInst, 0, 0, 3, 1);

    /*  Search to see if measured landmark id is in the list of */
    /*  static landmarks */
    if (covrtLogCond(moduleInstance->covInst, 0, 0, 12, measured_landmarks[i <<
                     2] == 0.0) || covrtLogCond(moduleInstance->covInst, 0, 0,
         13, muDoubleScalarIsNaN(measured_landmarks[i << 2]))) {
      covrtLogMcdc(moduleInstance->covInst, 0, 0, 9, true);
      covrtLogIf(moduleInstance->covInst, 0, 0, 17, true);
      covrtLogBasicBlock(moduleInstance->covInst, 0, 38);
    } else {
      covrtLogMcdc(moduleInstance->covInst, 0, 0, 9, false);
      covrtLogIf(moduleInstance->covInst, 0, 0, 17, false);
      covrtLogBasicBlock(moduleInstance->covInst, 0, 39);
      x = (obj->landmark_positions[0] == measured_landmarks[i << 2]);
      if (x) {
        ii_sizes_idx_0 = 1;
        ii_sizes_idx_1 = 1;
      } else {
        ii_sizes_idx_0 = 0;
        ii_sizes_idx_1 = 0;
      }

      if (covrtLogIf(moduleInstance->covInst, 0, 0, 18, covrtLogMcdc
                     (moduleInstance->covInst, 0, 0, 10, !covrtLogCond
                      (moduleInstance->covInst, 0, 0, 14, (ii_sizes_idx_0 == 0) ||
                       (ii_sizes_idx_1 == 0))))) {
        covrtLogBasicBlock(moduleInstance->covInst, 0, 40);

        /*  Create measurement model */
        for (i71 = 0; i71 < 3; i71++) {
          b_measured_landmarks[i71] = measured_landmarks[(i71 + (i << 2)) + 1];
        }

        b_measured_landmarks[3] = 0.0;
        b_measured_landmarks[4] = 1.0;
        b_measured_landmarks[5] = 0.0;
        b_measured_landmarks[6] = 0.0;
        i71 = 7 * i + 1;
        for (i72 = 0; i72 < 7; i72++) {
          Y_data[emlrtDynamicBoundsCheckR2012b(i72 + i71, 1, Y_sizes,
            &fd_emlrtBCI, sp) - 1] = b_measured_landmarks[i72];
        }

        st.site = &lh_emlrtRSI;
        i71 = 0;
        while (i71 <= 0) {
          for (i71 = 0; i71 < 3; i71++) {
            d_varargin_1_data[i71] = obj->landmark_positions[1 + i71];
          }

          i71 = 1;
        }

        b_st.site = &de_emlrtRSI;
        c_st.site = &ee_emlrtRSI;
        for (i71 = 0; i71 < 3; i71++) {
          n_tmp_data[i71] = d_varargin_1_data[i71];
        }

        n_tmp_data[3] = 0.0;
        n_tmp_data[4] = 1.0;
        n_tmp_data[5] = 0.0;
        n_tmp_data[6] = 0.0;
        i71 = 7 * i + 1;
        for (i72 = 0; i72 < 7; i72++) {
          g_b_data[emlrtDynamicBoundsCheckR2012b(i72 + i71, 1, b_sizes,
            &gd_emlrtBCI, sp) - 1] = n_tmp_data[i72];
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

        st.site = &mh_emlrtRSI;
        b_RIEKF_skew(moduleInstance, &st, unusedU7, obj_sizes, b);
        eye(b_R_pred);
        i71 = 3 * i + 1;
        ii_sizes_idx_0 = H_sizes[0];
        for (i72 = 0; i72 < 3; i72++) {
          for (i73 = 0; i73 < 3; i73++) {
            b_H_data[(emlrtDynamicBoundsCheckR2012b(i73 + i71, 1, ii_sizes_idx_0,
                       &hd_emlrtBCI, sp) + H_sizes[0] * i72) - 1] = b[i73 + 3 *
              i72];
          }
        }

        for (i72 = 0; i72 < 3; i72++) {
          for (i73 = 0; i73 < 3; i73++) {
            b_H_data[(emlrtDynamicBoundsCheckR2012b(i73 + i71, 1, ii_sizes_idx_0,
                       &hd_emlrtBCI, sp) + H_sizes[0] * (i72 + 3)) - 1] = 0.0;
          }
        }

        for (i72 = 0; i72 < 3; i72++) {
          for (i73 = 0; i73 < 3; i73++) {
            b_H_data[(emlrtDynamicBoundsCheckR2012b(i73 + i71, 1, ii_sizes_idx_0,
                       &hd_emlrtBCI, sp) + H_sizes[0] * (i72 + 6)) - 1] =
              -b_R_pred[i73 + 3 * i72];
          }
        }

        for (i72 = 0; i72 < 3; i72++) {
          for (i73 = 0; i73 < 3; i73++) {
            b_H_data[(emlrtDynamicBoundsCheckR2012b(i73 + i71, 1, ii_sizes_idx_0,
                       &hd_emlrtBCI, sp) + H_sizes[0] * (i72 + 9)) - 1] = 0.0;
          }
        }

        for (i72 = 0; i72 < 3; i72++) {
          for (i73 = 0; i73 < 3; i73++) {
            b_H_data[(emlrtDynamicBoundsCheckR2012b(i73 + i71, 1, ii_sizes_idx_0,
                       &hd_emlrtBCI, sp) + H_sizes[0] * (i72 + 12)) - 1] = 0.0;
          }
        }

        for (i72 = 0; i72 < 3; i72++) {
          for (i73 = 0; i73 < 3; i73++) {
            b_H_data[(emlrtDynamicBoundsCheckR2012b(i73 + i71, 1, ii_sizes_idx_0,
                       &hd_emlrtBCI, sp) + H_sizes[0] * (i72 + 15)) - 1] = 0.0;
          }
        }

        for (i72 = 0; i72 < 3; i72++) {
          for (i73 = 0; i73 < 3; i73++) {
            b_H_data[(emlrtDynamicBoundsCheckR2012b(i73 + i71, 1, ii_sizes_idx_0,
                       &hd_emlrtBCI, sp) + H_sizes[0] * (i72 + 18)) - 1] = 0.0;
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
            moduleInstance->b_N_data[(emlrtDynamicBoundsCheckR2012b(i73 + i71, 1,
              (int32_T)d5, &id_emlrtBCI, sp) + (int32_T)d5 *
              (emlrtDynamicBoundsCheckR2012b(i74 + i72, 1, (int32_T)d5,
              &jd_emlrtBCI, sp) - 1)) - 1] = 0.0;
            for (ii_sizes_idx_0 = 0; ii_sizes_idx_0 < 3; ii_sizes_idx_0++) {
              moduleInstance->b_N_data[(emlrtDynamicBoundsCheckR2012b(i73 + i71,
                1, (int32_T)d5, &id_emlrtBCI, sp) + (int32_T)d5 *
                (emlrtDynamicBoundsCheckR2012b(i74 + i72, 1, (int32_T)d5,
                &jd_emlrtBCI, sp) - 1)) - 1] = moduleInstance->b_N_data
                [(emlrtDynamicBoundsCheckR2012b(i73 + i71, 1, (int32_T)d5,
                   &id_emlrtBCI, sp) + (int32_T)d5 *
                  (emlrtDynamicBoundsCheckR2012b(i74 + i72, 1, (int32_T)d5,
                    &jd_emlrtBCI, sp) - 1)) - 1] + b_R_pred[i73 + 3 *
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
            moduleInstance->b_PI_data[(emlrtDynamicBoundsCheckR2012b(i74 + i71,
              1, ii_sizes_idx_0, &kd_emlrtBCI, sp) + PI_sizes[0] *
              (emlrtDynamicBoundsCheckR2012b(i73 + i72, 1, ii_sizes_idx_1,
              &ld_emlrtBCI, sp) - 1)) - 1] = b[i74 + 3 * i73];
          }
        }

        for (i73 = 0; i73 < 4; i73++) {
          for (i74 = 0; i74 < 3; i74++) {
            moduleInstance->b_PI_data[(emlrtDynamicBoundsCheckR2012b(i74 + i71,
              1, ii_sizes_idx_0, &kd_emlrtBCI, sp) + PI_sizes[0] *
              (emlrtDynamicBoundsCheckR2012b((i73 + i72) + 3, 1, ii_sizes_idx_1,
              &ld_emlrtBCI, sp) - 1)) - 1] = 0.0;
          }
        }
      }
    }

    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst, 0, 0, 3, 0);

  /*  Update State */
  if (covrtLogIf(moduleInstance->covInst, 0, 0, 19, covrtLogMcdc
                 (moduleInstance->covInst, 0, 0, 11, !covrtLogCond
                  (moduleInstance->covInst, 0, 0, 15, Y_sizes == 0)))) {
    covrtLogBasicBlock(moduleInstance->covInst, 0, 41);
    st.site = &nh_emlrtRSI;
    c_RIEKF_Update_State(moduleInstance, &st, obj, Y_data, Y_sizes, g_b_data,
                         b_sizes, b_H_data, H_sizes, moduleInstance->b_N_data,
                         N_sizes, moduleInstance->b_PI_data, PI_sizes);
  }
}

static void b_RIEKF_skew(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance,
  const emlrtStack *sp, real_T v_data[], int32_T v_sizes[2], real_T A[9])
{
  covrtLogFcn(moduleInstance->covInst, 0, 7);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 13);

  /*  Convert from vector to skew symmetric matrix */
  emlrtDynamicBoundsCheckR2012b(3, 1, 3 * v_sizes[1], &md_emlrtBCI, sp);
  emlrtDynamicBoundsCheckR2012b(2, 1, 3 * v_sizes[1], &nd_emlrtBCI, sp);
  emlrtDynamicBoundsCheckR2012b(3, 1, 3 * v_sizes[1], &od_emlrtBCI, sp);
  emlrtDynamicBoundsCheckR2012b(1, 1, 3 * v_sizes[1], &pd_emlrtBCI, sp);
  emlrtDynamicBoundsCheckR2012b(2, 1, 3 * v_sizes[1], &qd_emlrtBCI, sp);
  emlrtDynamicBoundsCheckR2012b(1, 1, 3 * v_sizes[1], &rd_emlrtBCI, sp);
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

static void c_RIEKF_Update_State(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Y_data[], int32_T
  Y_sizes, real_T g_b_data[], int32_T b_sizes, real_T b_H_data[], int32_T
  H_sizes[2], real_T c_N_data[], int32_T N_sizes[2], real_T c_PI_data[], int32_T
  PI_sizes[2])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  int32_T tmp_sizes[2];
  int32_T Xa_sizes[2];
  int32_T loop_ub;
  int32_T i75;
  real_T Pa_data[2601];
  int32_T Pa_sizes[2];
  int32_T C_sizes_idx_0;
  int32_T C_sizes_idx_1;
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

  int32_T i76;
  int32_T b_loop_ub;
  real_T alpha1;
  real_T Xdim;
  char_T TRANSB;
  int32_T i77;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  real_T h_b_data[1260];
  ptrdiff_t lda_t;
  int32_T C_sizes[2];
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  const mxArray *c_y;
  char_T c_u[21];
  const mxArray *d_y;
  char_T d_u[45];
  static const int32_T iv104[2] = { 1, 21 };

  static const int32_T iv105[2] = { 1, 45 };

  int32_T C[2];
  int32_T N[2];
  int32_T dX_sizes[2];
  const mxArray *e_y;
  char_T e_u[21];
  const mxArray *f_y;
  char_T f_u[45];
  static const int32_T iv106[2] = { 1, 21 };

  static const int32_T iv107[2] = { 1, 45 };

  int32_T b_C_sizes[2];
  int32_T K_sizes_idx_0;
  int32_T K_sizes_idx_1;
  real_T Ydim;
  static char_T cv38[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  int32_T c_loop_ub;
  int8_T n_tmp_data[17];
  real_T i_b_data[400];
  int32_T iv108[2];
  int8_T o_tmp_data[17];
  const mxArray *g_y;
  char_T g_u[21];
  const mxArray *h_y;
  char_T h_u[45];
  static const int32_T iv109[2] = { 1, 21 };

  static const int32_T iv110[2] = { 1, 45 };

  real_T o_C_data[121];
  real_T Z_data[121];
  int32_T y_sizes_idx_0;
  int32_T y_sizes_idx_1;
  const mxArray *i_y;
  char_T i_u[21];
  const mxArray *j_y;
  char_T j_u[45];
  static const int32_T iv111[2] = { 1, 21 };

  static const int32_T iv112[2] = { 1, 45 };

  const mxArray *k_y;
  char_T k_u[21];
  const mxArray *l_y;
  char_T l_u[45];
  static const int32_T iv113[2] = { 1, 21 };

  static const int32_T iv114[2] = { 1, 45 };

  real_T delta_data[121];
  int32_T iv115[2];
  real_T b_delta_data[45];
  real_T dX_data[324];
  real_T dtheta[6];
  const mxArray *m_y;
  char_T m_u[21];
  const mxArray *n_y;
  char_T n_u[45];
  static const int32_T iv116[2] = { 1, 21 };

  static const int32_T iv117[2] = { 1, 45 };

  int8_T p_tmp_data[10];
  int32_T iv118[2];
  int32_T y_sizes[2];
  real_T Pa[2];
  int32_T I_sizes[2];
  real_T I_data[2601];
  int32_T c_C_sizes[2];
  const mxArray *o_y;
  char_T o_u[21];
  const mxArray *p_y;
  char_T p_u[45];
  static const int32_T iv119[2] = { 1, 21 };

  static const int32_T iv120[2] = { 1, 45 };

  real_T p_C_data[1071];
  int32_T d_C_sizes[2];
  const mxArray *q_y;
  char_T q_u[21];
  const mxArray *r_y;
  char_T r_u[45];
  static const int32_T iv121[2] = { 1, 21 };

  static const int32_T iv122[2] = { 1, 45 };

  real_T q_C_data[1071];
  real_T g_a_data[1260];
  const mxArray *s_y;
  char_T s_u[21];
  const mxArray *t_y;
  char_T t_u[45];
  static const int32_T iv123[2] = { 1, 21 };

  static const int32_T iv124[2] = { 1, 45 };

  real_T kb_y_data[3060];
  int32_T b_y_sizes[2];
  const mxArray *u_y;
  char_T u_u[21];
  const mxArray *v_y;
  char_T v_u[45];
  static const int32_T iv125[2] = { 1, 21 };

  static const int32_T iv126[2] = { 1, 45 };

  const mxArray *w_y;
  char_T w_u[21];
  const mxArray *x_y;
  char_T x_u[45];
  static const int32_T iv127[2] = { 1, 21 };

  static const int32_T iv128[2] = { 1, 45 };

  int32_T c_y_sizes[2];
  const mxArray *y_y;
  char_T y_u[21];
  const mxArray *ab_y;
  char_T ab_u[45];
  static const int32_T iv129[2] = { 1, 21 };

  static const int32_T iv130[2] = { 1, 45 };

  int32_T d_y_sizes[2];
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
  RIEKF_Augmented_State(moduleInstance, &st, obj, moduleInstance->j_tmp_data,
                        tmp_sizes);
  Xa_sizes[0] = tmp_sizes[0];
  Xa_sizes[1] = tmp_sizes[1];
  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    moduleInstance->c_Xa_data[i75] = moduleInstance->j_tmp_data[i75];
  }

  st.site = &kf_emlrtRSI;
  RIEKF_Augmented_Covariance(moduleInstance, &st, obj, Pa_data, Pa_sizes);
  st.site = &lf_emlrtRSI;
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
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, b_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        u[i75] = cv36[i75];
      }

      y = NULL;
      m18 = emlrtCreateCharArray(2, iv102);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &u[0]);
      emlrtAssign(&y, m18);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if (Pa_sizes[0] == 1) {
    C_sizes_idx_0 = H_sizes[0];
    C_sizes_idx_1 = Pa_sizes[1];
    loop_ub = H_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = Pa_sizes[1];
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        moduleInstance->n_C_data[i75 + C_sizes_idx_0 * i76] = 0.0;
        for (i77 = 0; i77 < 21; i77++) {
          moduleInstance->n_C_data[i75 + C_sizes_idx_0 * i76] += b_H_data[i75 +
            H_sizes[0] * i77] * Pa_data[i77 + i76];
        }
      }
    }
  } else {
    C_sizes_idx_0 = (uint8_T)H_sizes[0];
    C_sizes_idx_1 = (uint8_T)Pa_sizes[1];
    loop_ub = (uint8_T)Pa_sizes[1];
    for (i75 = 0; i75 < loop_ub; i75++) {
      for (i76 = 0; i76 < C_sizes_idx_0; i76++) {
        moduleInstance->n_C_data[i76 + C_sizes_idx_0 * i75] = 0.0;
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
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &b_H_data[0], &lda_t,
            &Pa_data[0], &ldb_t, &Xdim, &moduleInstance->n_C_data[0], &ldc_t);
    }
  }

  st.site = &lf_emlrtRSI;
  loop_ub = H_sizes[0];
  for (i75 = 0; i75 < loop_ub; i75++) {
    for (i76 = 0; i76 < 21; i76++) {
      h_b_data[i76 + 21 * i75] = b_H_data[i75 + H_sizes[0] * i76];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(C_sizes_idx_1 == 21)) {
    if ((C_sizes_idx_0 == 1) && (C_sizes_idx_1 == 1)) {
      for (i75 = 0; i75 < 45; i75++) {
        d_u[i75] = cv37[i75];
      }

      d_y = NULL;
      m18 = emlrtCreateCharArray(2, iv105);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &d_u[0]);
      emlrtAssign(&d_y, m18);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, d_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        c_u[i75] = cv36[i75];
      }

      c_y = NULL;
      m18 = emlrtCreateCharArray(2, iv104);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &c_u[0]);
      emlrtAssign(&c_y, m18);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, c_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if (C_sizes_idx_1 == 1) {
    C_sizes[0] = C_sizes_idx_0;
    C_sizes[1] = H_sizes[0];
    for (i75 = 0; i75 < C_sizes_idx_0; i75++) {
      loop_ub = H_sizes[0];
      for (i76 = 0; i76 < loop_ub; i76++) {
        moduleInstance->l_C_data[i75 + C_sizes_idx_0 * i76] = 0.0;
        i77 = 0;
        while (i77 <= 0) {
          moduleInstance->l_C_data[i75 + C_sizes_idx_0 * i76] +=
            moduleInstance->n_C_data[i75] * h_b_data[21 * i76];
          i77 = 1;
        }
      }
    }
  } else {
    C_sizes[0] = (uint8_T)C_sizes_idx_0;
    C_sizes[1] = (uint8_T)H_sizes[0];
    loop_ub = (uint8_T)H_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = (uint8_T)C_sizes_idx_0;
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        moduleInstance->l_C_data[i76 + (uint8_T)C_sizes_idx_0 * i75] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((C_sizes_idx_0 < 1) || (H_sizes[0] < 1) || (C_sizes_idx_1 < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)C_sizes_idx_0;
      n_t = (ptrdiff_t)H_sizes[0];
      k_t = (ptrdiff_t)C_sizes_idx_1;
      lda_t = (ptrdiff_t)C_sizes_idx_0;
      ldb_t = (ptrdiff_t)C_sizes_idx_1;
      ldc_t = (ptrdiff_t)C_sizes_idx_0;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->n_C_data[0], &lda_t, &h_b_data[0], &ldb_t, &Xdim,
            &moduleInstance->l_C_data[0], &ldc_t);
    }
  }

  for (i75 = 0; i75 < 2; i75++) {
    C[i75] = C_sizes[i75];
    N[i75] = N_sizes[i75];
  }

  emlrtSizeEqCheckNDR2012b(C, N, &f_emlrtECI, sp);
  st.site = &mf_emlrtRSI;
  loop_ub = Pa_sizes[0] * Pa_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    moduleInstance->n_C_data[i75] = Pa_data[i75];
  }

  loop_ub = H_sizes[0];
  for (i75 = 0; i75 < loop_ub; i75++) {
    for (i76 = 0; i76 < 21; i76++) {
      h_b_data[i76 + 21 * i75] = b_H_data[i75 + H_sizes[0] * i76];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(Pa_sizes[1] == 21)) {
    if ((Pa_sizes[0] == 1) && (Pa_sizes[1] == 1)) {
      for (i75 = 0; i75 < 45; i75++) {
        f_u[i75] = cv37[i75];
      }

      f_y = NULL;
      m18 = emlrtCreateCharArray(2, iv107);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &f_u[0]);
      emlrtAssign(&f_y, m18);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, f_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        e_u[i75] = cv36[i75];
      }

      e_y = NULL;
      m18 = emlrtCreateCharArray(2, iv106);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &e_u[0]);
      emlrtAssign(&e_y, m18);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, e_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if (Pa_sizes[1] == 1) {
    dX_sizes[0] = Pa_sizes[0];
    dX_sizes[1] = H_sizes[0];
    loop_ub = Pa_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = H_sizes[0];
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        moduleInstance->ab_y_data[i75 + dX_sizes[0] * i76] = 0.0;
        i77 = 0;
        while (i77 <= 0) {
          moduleInstance->ab_y_data[i75 + dX_sizes[0] * i76] += Pa_data[i75] *
            h_b_data[21 * i76];
          i77 = 1;
        }
      }
    }
  } else {
    dX_sizes[0] = (uint8_T)Pa_sizes[0];
    dX_sizes[1] = (uint8_T)H_sizes[0];
    loop_ub = (uint8_T)H_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = dX_sizes[0];
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        moduleInstance->ab_y_data[i76 + dX_sizes[0] * i75] = 0.0;
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
            &moduleInstance->n_C_data[0], &lda_t, &h_b_data[0], &ldb_t, &Xdim,
            &moduleInstance->ab_y_data[0], &ldc_t);
    }
  }

  b_C_sizes[0] = C_sizes[0];
  b_C_sizes[1] = C_sizes[1];
  loop_ub = C_sizes[0] * C_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    moduleInstance->m_C_data[i75] = moduleInstance->l_C_data[i75] + c_N_data[i75];
  }

  st.site = &mf_emlrtRSI;
  c_mrdivide(moduleInstance, &st, moduleInstance->ab_y_data, dX_sizes,
             moduleInstance->m_C_data, b_C_sizes, moduleInstance->l_C_data,
             C_sizes);
  K_sizes_idx_0 = C_sizes[0];
  K_sizes_idx_1 = C_sizes[1];
  loop_ub = C_sizes[0] * C_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    moduleInstance->b_K_data[i75] = moduleInstance->l_C_data[i75];
  }

  /*  Copy X along the diagonals if more than one measurement */
  /*  TODO: find better way to do this */
  Xdim = 7.0 + obj->num_landmarks;
  Ydim = (real_T)Y_sizes / Xdim;
  if (!(Ydim < 10.0)) {
    st.site = &xk_emlrtRSI;
    g_error(&st, message(&st, b_emlrt_marshallOut(&st, cv38), &i_emlrtMCI),
            &i_emlrtMCI);
  }

  if (!(Xdim < 17.0)) {
    st.site = &wk_emlrtRSI;
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

  emlrtDimSizeGeqCheckR2012b(170, loop_ub, &g_emlrtECI, sp);
  emlrtDimSizeGeqCheckR2012b(170, b_loop_ub, &h_emlrtECI, sp);
  c_loop_ub = loop_ub * b_loop_ub;
  for (i75 = 0; i75 < c_loop_ub; i75++) {
    moduleInstance->c_BigX_data[i75] = 0.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, Ydim, mxDOUBLE_CLASS, (int32_T)Ydim,
    &emlrtRTEI, sp);
  C_sizes_idx_0 = 0;
  while (C_sizes_idx_0 <= (int32_T)Ydim - 1) {
    covrtLogFor(moduleInstance->covInst, 0, 0, 1, 1);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 27);
    alpha1 = Xdim * ((1.0 + (real_T)C_sizes_idx_0) - 1.0);
    c_loop_ub = (int32_T)muDoubleScalarFloor(Xdim - 1.0);
    for (i75 = 0; i75 <= c_loop_ub; i75++) {
      i76 = (int8_T)emlrtIntegerCheckR2012b(alpha1 + (1.0 + (real_T)i75),
        &tb_emlrtDCI, sp);
      n_tmp_data[i75] = (int8_T)((int8_T)emlrtDynamicBoundsCheckR2012b(i76, 1,
        loop_ub, &xc_emlrtBCI, sp) - 1);
    }

    alpha1 = Xdim * ((1.0 + (real_T)C_sizes_idx_0) - 1.0);
    c_loop_ub = (int32_T)muDoubleScalarFloor(Xdim - 1.0);
    for (i75 = 0; i75 <= c_loop_ub; i75++) {
      i76 = (int8_T)emlrtIntegerCheckR2012b(alpha1 + (1.0 + (real_T)i75),
        &ub_emlrtDCI, sp);
      o_tmp_data[i75] = (int8_T)((int8_T)emlrtDynamicBoundsCheckR2012b(i76, 1,
        b_loop_ub, &yc_emlrtBCI, sp) - 1);
    }

    iv108[0] = (int32_T)muDoubleScalarFloor(Xdim - 1.0) + 1;
    iv108[1] = (int32_T)muDoubleScalarFloor(Xdim - 1.0) + 1;
    emlrtSubAssignSizeCheckR2012b(iv108, 2, Xa_sizes, 2, &i_emlrtECI, sp);
    c_loop_ub = Xa_sizes[1];
    for (i75 = 0; i75 < c_loop_ub; i75++) {
      C_sizes_idx_1 = Xa_sizes[0];
      for (i76 = 0; i76 < C_sizes_idx_1; i76++) {
        moduleInstance->c_BigX_data[n_tmp_data[i76] + loop_ub * o_tmp_data[i75]]
          = moduleInstance->c_Xa_data[i76 + Xa_sizes[0] * i75];
      }
    }

    C_sizes_idx_0++;
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

      h_y = NULL;
      m18 = emlrtCreateCharArray(2, iv110);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &h_u[0]);
      emlrtAssign(&h_y, m18);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, h_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        g_u[i75] = cv36[i75];
      }

      g_y = NULL;
      m18 = emlrtCreateCharArray(2, iv109);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &g_u[0]);
      emlrtAssign(&g_y, m18);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, g_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((b_loop_ub == 1) || (Y_sizes == 1)) {
    C_sizes_idx_1 = loop_ub;
    for (i75 = 0; i75 < loop_ub; i75++) {
      o_C_data[i75] = 0.0;
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        o_C_data[i75] += moduleInstance->c_BigX_data[i75 + loop_ub * i76] *
          Y_data[i76];
      }
    }
  } else {
    C_sizes_idx_0 = (int8_T)loop_ub;
    C_sizes_idx_1 = (int8_T)loop_ub;
    for (i75 = 0; i75 < C_sizes_idx_0; i75++) {
      o_C_data[i75] = 0.0;
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
            &o_C_data[0], &ldc_t);
    }
  }

  emlrtSizeEqCheck1DR2012b(C_sizes_idx_1, b_sizes, &j_emlrtECI, sp);
  for (i75 = 0; i75 < C_sizes_idx_1; i75++) {
    Z_data[i75] = o_C_data[i75] - g_b_data[i75];
  }

  /*  Update State */
  st.site = &of_emlrtRSI;
  loop_ub = C_sizes[0] * C_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    moduleInstance->e_a_data[i75] = moduleInstance->b_K_data[i75];
  }

  loop_ub = PI_sizes[0] * PI_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    moduleInstance->e_b_data[i75] = c_PI_data[i75];
  }

  b_st.site = &he_emlrtRSI;
  if (!(C_sizes[1] == PI_sizes[0])) {
    if (((C_sizes[0] == 1) && (C_sizes[1] == 1)) || ((PI_sizes[0] == 1) &&
         (PI_sizes[1] == 1))) {
      for (i75 = 0; i75 < 45; i75++) {
        j_u[i75] = cv37[i75];
      }

      j_y = NULL;
      m18 = emlrtCreateCharArray(2, iv112);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &j_u[0]);
      emlrtAssign(&j_y, m18);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, j_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        i_u[i75] = cv36[i75];
      }

      i_y = NULL;
      m18 = emlrtCreateCharArray(2, iv111);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &i_u[0]);
      emlrtAssign(&i_y, m18);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, i_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((C_sizes[1] == 1) || (PI_sizes[0] == 1)) {
    y_sizes_idx_0 = C_sizes[0];
    y_sizes_idx_1 = PI_sizes[1];
    loop_ub = C_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = PI_sizes[1];
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        moduleInstance->v_y_data[i75 + y_sizes_idx_0 * i76] = 0.0;
        for (i77 = 0; i77 < K_sizes_idx_1; i77++) {
          moduleInstance->v_y_data[i75 + y_sizes_idx_0 * i76] +=
            moduleInstance->b_K_data[i75 + K_sizes_idx_0 * i77] * c_PI_data[i77
            + PI_sizes[0] * i76];
        }
      }
    }
  } else {
    y_sizes_idx_0 = (uint8_T)C_sizes[0];
    y_sizes_idx_1 = (uint8_T)PI_sizes[1];
    loop_ub = (uint8_T)PI_sizes[1];
    for (i75 = 0; i75 < loop_ub; i75++) {
      for (i76 = 0; i76 < y_sizes_idx_0; i76++) {
        moduleInstance->v_y_data[i76 + y_sizes_idx_0 * i75] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((C_sizes[0] < 1) || (PI_sizes[1] < 1) || (C_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)C_sizes[0];
      n_t = (ptrdiff_t)PI_sizes[1];
      k_t = (ptrdiff_t)C_sizes[1];
      lda_t = (ptrdiff_t)C_sizes[0];
      ldb_t = (ptrdiff_t)C_sizes[1];
      ldc_t = (ptrdiff_t)C_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->e_a_data[0], &lda_t, &moduleInstance->e_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->v_y_data[0], &ldc_t);
    }
  }

  st.site = &of_emlrtRSI;
  for (i75 = 0; i75 < C_sizes_idx_1; i75++) {
    i_b_data[i75] = o_C_data[i75] - g_b_data[i75];
  }

  b_st.site = &he_emlrtRSI;
  if (!(y_sizes_idx_1 == C_sizes_idx_1)) {
    if (((y_sizes_idx_0 == 1) && (y_sizes_idx_1 == 1)) || (C_sizes_idx_1 == 1))
    {
      for (i75 = 0; i75 < 45; i75++) {
        l_u[i75] = cv37[i75];
      }

      l_y = NULL;
      m18 = emlrtCreateCharArray(2, iv114);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &l_u[0]);
      emlrtAssign(&l_y, m18);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, l_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        k_u[i75] = cv36[i75];
      }

      k_y = NULL;
      m18 = emlrtCreateCharArray(2, iv113);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &k_u[0]);
      emlrtAssign(&k_y, m18);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, k_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((y_sizes_idx_1 == 1) || (C_sizes_idx_1 == 1)) {
    C_sizes_idx_1 = y_sizes_idx_0;
    for (i75 = 0; i75 < y_sizes_idx_0; i75++) {
      delta_data[i75] = 0.0;
      for (i76 = 0; i76 < y_sizes_idx_1; i76++) {
        delta_data[i75] += moduleInstance->v_y_data[i75 + y_sizes_idx_0 * i76] *
          Z_data[i76];
      }
    }
  } else {
    C_sizes_idx_0 = (int8_T)y_sizes_idx_0;
    C_sizes_idx_1 = (int8_T)y_sizes_idx_0;
    for (i75 = 0; i75 < C_sizes_idx_0; i75++) {
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
            &moduleInstance->v_y_data[0], &lda_t, &i_b_data[0], &ldb_t, &Xdim,
            &delta_data[0], &ldc_t);
    }
  }

  emlrtDimSizeGeqCheckR2012b(51, C_sizes_idx_1, &k_emlrtECI, sp);
  if (1 > C_sizes_idx_1 - 6) {
    loop_ub = 0;
  } else {
    emlrtDynamicBoundsCheckR2012b(1, 1, C_sizes_idx_1, &qc_emlrtBCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(C_sizes_idx_1 - 6, 1, C_sizes_idx_1,
      &qc_emlrtBCI, sp);
  }

  iv115[0] = 1;
  iv115[1] = loop_ub;
  st.site = &pf_emlrtRSI;
  indexShapeCheck(&st, C_sizes_idx_1, iv115);
  for (i75 = 0; i75 < loop_ub; i75++) {
    b_delta_data[i75] = delta_data[i75];
  }

  st.site = &pf_emlrtRSI;
  RIEKF_exp(moduleInstance, &st, b_delta_data, loop_ub, dX_data, dX_sizes);
  st.site = &qf_emlrtRSI;
  b_indexShapeCheck(&st, C_sizes_idx_1);
  for (i75 = 0; i75 < 6; i75++) {
    dtheta[i75] = delta_data[emlrtDynamicBoundsCheckR2012b((i75 + C_sizes_idx_1)
      - 5, 1, C_sizes_idx_1, &tc_emlrtBCI, sp) - 1];
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

      n_y = NULL;
      m18 = emlrtCreateCharArray(2, iv117);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &n_u[0]);
      emlrtAssign(&n_y, m18);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, n_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        m_u[i75] = cv36[i75];
      }

      m_y = NULL;
      m18 = emlrtCreateCharArray(2, iv116);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &m_u[0]);
      emlrtAssign(&m_y, m18);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, m_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((dX_sizes[1] == 1) || (tmp_sizes[0] == 1)) {
    y_sizes_idx_0 = dX_sizes[0];
    y_sizes_idx_1 = tmp_sizes[1];
    loop_ub = dX_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = Xa_sizes[1];
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        moduleInstance->w_y_data[i75 + y_sizes_idx_0 * i76] = 0.0;
        c_loop_ub = dX_sizes[1];
        for (i77 = 0; i77 < c_loop_ub; i77++) {
          moduleInstance->w_y_data[i75 + y_sizes_idx_0 * i76] += dX_data[i75 +
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
        moduleInstance->w_y_data[i76 + y_sizes_idx_0 * i75] = 0.0;
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
            &ldb_t, &Xdim, &moduleInstance->w_y_data[0], &ldc_t);
    }
  }

  for (i75 = 0; i75 < 7; i75++) {
    for (i76 = 0; i76 < 7; i76++) {
      obj->X[i76 + 7 * i75] = moduleInstance->w_y_data
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
    i77 = emlrtDynamicBoundsCheckR2012b(i77, 1, 10, &sc_emlrtBCI, sp);
  }

  loop_ub = (int8_T)((int8_T)i77 - 1);
  for (C_sizes_idx_0 = 0; C_sizes_idx_0 <= loop_ub; C_sizes_idx_0++) {
    p_tmp_data[C_sizes_idx_0] = (int8_T)C_sizes_idx_0;
  }

  for (C_sizes_idx_0 = 0; C_sizes_idx_0 < 3; C_sizes_idx_0++) {
    emlrtDynamicBoundsCheckR2012b(C_sizes_idx_0 + 1, 1, y_sizes_idx_0,
      &wc_emlrtBCI, sp);
  }

  iv118[0] = 3;
  iv118[1] = (int8_T)((int8_T)i77 - 1) + 1;
  y_sizes[0] = 3;
  y_sizes[1] = i76 - i75;
  for (i77 = 0; i77 < 2; i77++) {
    N[i77] = y_sizes[i77];
  }

  emlrtSubAssignSizeCheckR2012b(iv118, 2, N, 2, &l_emlrtECI, sp);
  loop_ub = i76 - i75;
  for (i76 = 0; i76 < loop_ub; i76++) {
    for (i77 = 0; i77 < 3; i77++) {
      obj->landmarks[i77 + 3 * p_tmp_data[i76]] = moduleInstance->w_y_data[i77 +
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
  b_eye(&st, Pa, moduleInstance->i_tmp_data, tmp_sizes);
  I_sizes[0] = tmp_sizes[0];
  I_sizes[1] = tmp_sizes[1];
  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    I_data[i75] = moduleInstance->i_tmp_data[i75];
  }

  st.site = &tf_emlrtRSI;
  b_st.site = &he_emlrtRSI;
  if (!(C_sizes[1] == H_sizes[0])) {
    if ((C_sizes[0] == 1) && (C_sizes[1] == 1)) {
      for (i75 = 0; i75 < 45; i75++) {
        p_u[i75] = cv37[i75];
      }

      p_y = NULL;
      m18 = emlrtCreateCharArray(2, iv120);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &p_u[0]);
      emlrtAssign(&p_y, m18);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, p_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        o_u[i75] = cv36[i75];
      }

      o_y = NULL;
      m18 = emlrtCreateCharArray(2, iv119);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &o_u[0]);
      emlrtAssign(&o_y, m18);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, o_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((C_sizes[1] == 1) || (H_sizes[0] == 1)) {
    c_C_sizes[0] = C_sizes[0];
    c_C_sizes[1] = 21;
    loop_ub = C_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      for (i76 = 0; i76 < 21; i76++) {
        p_C_data[i75 + c_C_sizes[0] * i76] = 0.0;
        for (i77 = 0; i77 < K_sizes_idx_1; i77++) {
          p_C_data[i75 + c_C_sizes[0] * i76] += moduleInstance->b_K_data[i75 +
            K_sizes_idx_0 * i77] * b_H_data[i77 + H_sizes[0] * i76];
        }
      }
    }
  } else {
    c_C_sizes[0] = (int8_T)C_sizes[0];
    c_C_sizes[1] = 21;
    for (i75 = 0; i75 < 21; i75++) {
      loop_ub = c_C_sizes[0];
      for (i76 = 0; i76 < loop_ub; i76++) {
        p_C_data[i76 + c_C_sizes[0] * i75] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((C_sizes[0] < 1) || (C_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)C_sizes[0];
      n_t = (ptrdiff_t)21;
      k_t = (ptrdiff_t)C_sizes[1];
      lda_t = (ptrdiff_t)C_sizes[0];
      ldb_t = (ptrdiff_t)C_sizes[1];
      ldc_t = (ptrdiff_t)C_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->b_K_data[0], &lda_t, &b_H_data[0], &ldb_t, &Xdim,
            &p_C_data[0], &ldc_t);
    }
  }

  for (i75 = 0; i75 < 2; i75++) {
    dX_sizes[i75] = I_sizes[i75];
    C[i75] = c_C_sizes[i75];
  }

  emlrtSizeEqCheckNDR2012b(dX_sizes, C, &m_emlrtECI, sp);
  st.site = &tf_emlrtRSI;
  b_st.site = &he_emlrtRSI;
  if (!(C_sizes[1] == H_sizes[0])) {
    if ((C_sizes[0] == 1) && (C_sizes[1] == 1)) {
      for (i75 = 0; i75 < 45; i75++) {
        r_u[i75] = cv37[i75];
      }

      r_y = NULL;
      m18 = emlrtCreateCharArray(2, iv122);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &r_u[0]);
      emlrtAssign(&r_y, m18);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, r_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        q_u[i75] = cv36[i75];
      }

      q_y = NULL;
      m18 = emlrtCreateCharArray(2, iv121);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &q_u[0]);
      emlrtAssign(&q_y, m18);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, q_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((C_sizes[1] == 1) || (H_sizes[0] == 1)) {
    d_C_sizes[0] = C_sizes[0];
    d_C_sizes[1] = 21;
    loop_ub = C_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      for (i76 = 0; i76 < 21; i76++) {
        q_C_data[i75 + d_C_sizes[0] * i76] = 0.0;
        for (i77 = 0; i77 < K_sizes_idx_1; i77++) {
          q_C_data[i75 + d_C_sizes[0] * i76] += moduleInstance->b_K_data[i75 +
            K_sizes_idx_0 * i77] * b_H_data[i77 + H_sizes[0] * i76];
        }
      }
    }
  } else {
    d_C_sizes[0] = (int8_T)C_sizes[0];
    d_C_sizes[1] = 21;
    for (i75 = 0; i75 < 21; i75++) {
      loop_ub = d_C_sizes[0];
      for (i76 = 0; i76 < loop_ub; i76++) {
        q_C_data[i76 + d_C_sizes[0] * i75] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((C_sizes[0] < 1) || (C_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)C_sizes[0];
      n_t = (ptrdiff_t)21;
      k_t = (ptrdiff_t)C_sizes[1];
      lda_t = (ptrdiff_t)C_sizes[0];
      ldb_t = (ptrdiff_t)C_sizes[1];
      ldc_t = (ptrdiff_t)C_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->b_K_data[0], &lda_t, &b_H_data[0], &ldb_t, &Xdim,
            &q_C_data[0], &ldc_t);
    }
  }

  for (i75 = 0; i75 < 2; i75++) {
    dX_sizes[i75] = I_sizes[i75];
    C[i75] = d_C_sizes[i75];
  }

  emlrtSizeEqCheckNDR2012b(dX_sizes, C, &n_emlrtECI, sp);
  st.site = &tf_emlrtRSI;
  loop_ub = tmp_sizes[0] * tmp_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    g_a_data[i75] = I_data[i75] - p_C_data[i75];
  }

  b_st.site = &he_emlrtRSI;
  if (!(21 == Pa_sizes[0])) {
    if ((Pa_sizes[0] == 1) && (Pa_sizes[1] == 1)) {
      for (i75 = 0; i75 < 45; i75++) {
        t_u[i75] = cv37[i75];
      }

      t_y = NULL;
      m18 = emlrtCreateCharArray(2, iv124);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &t_u[0]);
      emlrtAssign(&t_y, m18);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, t_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        s_u[i75] = cv36[i75];
      }

      s_y = NULL;
      m18 = emlrtCreateCharArray(2, iv123);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &s_u[0]);
      emlrtAssign(&s_y, m18);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, s_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if (Pa_sizes[0] == 1) {
    y_sizes_idx_0 = tmp_sizes[0];
    y_sizes_idx_1 = Pa_sizes[1];
    loop_ub = tmp_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = Pa_sizes[1];
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        kb_y_data[i75 + y_sizes_idx_0 * i76] = 0.0;
        for (i77 = 0; i77 < 21; i77++) {
          kb_y_data[i75 + y_sizes_idx_0 * i76] += g_a_data[i75 + tmp_sizes[0] *
            i77] * Pa_data[i77 + i76];
        }
      }
    }
  } else {
    y_sizes_idx_0 = (uint8_T)tmp_sizes[0];
    y_sizes_idx_1 = (uint8_T)Pa_sizes[1];
    loop_ub = (uint8_T)Pa_sizes[1];
    for (i75 = 0; i75 < loop_ub; i75++) {
      for (i76 = 0; i76 < y_sizes_idx_0; i76++) {
        kb_y_data[i76 + y_sizes_idx_0 * i75] = 0.0;
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
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &g_a_data[0], &lda_t,
            &Pa_data[0], &ldb_t, &Xdim, &kb_y_data[0], &ldc_t);
    }
  }

  st.site = &tf_emlrtRSI;
  C_sizes_idx_0 = tmp_sizes[1];
  loop_ub = tmp_sizes[0];
  for (i75 = 0; i75 < loop_ub; i75++) {
    b_loop_ub = I_sizes[1];
    for (i76 = 0; i76 < b_loop_ub; i76++) {
      h_b_data[i76 + C_sizes_idx_0 * i75] = I_data[i75 + I_sizes[0] * i76] -
        q_C_data[i75 + d_C_sizes[0] * i76];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(y_sizes_idx_1 == 21)) {
    if ((y_sizes_idx_0 == 1) && (y_sizes_idx_1 == 1)) {
      for (i75 = 0; i75 < 45; i75++) {
        v_u[i75] = cv37[i75];
      }

      v_y = NULL;
      m18 = emlrtCreateCharArray(2, iv126);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &v_u[0]);
      emlrtAssign(&v_y, m18);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, v_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        u_u[i75] = cv36[i75];
      }

      u_y = NULL;
      m18 = emlrtCreateCharArray(2, iv125);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &u_u[0]);
      emlrtAssign(&u_y, m18);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, u_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if (y_sizes_idx_1 == 1) {
    b_y_sizes[0] = y_sizes_idx_0;
    b_y_sizes[1] = tmp_sizes[0];
    for (i75 = 0; i75 < y_sizes_idx_0; i75++) {
      loop_ub = tmp_sizes[0];
      for (i76 = 0; i76 < loop_ub; i76++) {
        moduleInstance->bb_y_data[i75 + y_sizes_idx_0 * i76] = 0.0;
        i77 = 0;
        while (i77 <= 0) {
          moduleInstance->bb_y_data[i75 + y_sizes_idx_0 * i76] += kb_y_data[i75]
            * h_b_data[C_sizes_idx_0 * i76];
          i77 = 1;
        }
      }
    }
  } else {
    b_y_sizes[0] = (uint8_T)y_sizes_idx_0;
    b_y_sizes[1] = (uint8_T)tmp_sizes[0];
    loop_ub = (uint8_T)tmp_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = (uint8_T)y_sizes_idx_0;
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        moduleInstance->bb_y_data[i76 + (uint8_T)y_sizes_idx_0 * i75] = 0.0;
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
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &kb_y_data[0], &lda_t,
            &h_b_data[0], &ldb_t, &Xdim, &moduleInstance->bb_y_data[0], &ldc_t);
    }
  }

  st.site = &tf_emlrtRSI;
  loop_ub = C_sizes[0] * C_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    moduleInstance->e_a_data[i75] = moduleInstance->b_K_data[i75];
  }

  loop_ub = N_sizes[0] * N_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    moduleInstance->e_b_data[i75] = c_N_data[i75];
  }

  b_st.site = &he_emlrtRSI;
  if (!(C_sizes[1] == N_sizes[0])) {
    if (((C_sizes[0] == 1) && (C_sizes[1] == 1)) || ((N_sizes[0] == 1) &&
         (N_sizes[1] == 1))) {
      for (i75 = 0; i75 < 45; i75++) {
        x_u[i75] = cv37[i75];
      }

      x_y = NULL;
      m18 = emlrtCreateCharArray(2, iv128);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &x_u[0]);
      emlrtAssign(&x_y, m18);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, x_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        w_u[i75] = cv36[i75];
      }

      w_y = NULL;
      m18 = emlrtCreateCharArray(2, iv127);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &w_u[0]);
      emlrtAssign(&w_y, m18);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, w_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((C_sizes[1] == 1) || (N_sizes[0] == 1)) {
    y_sizes_idx_0 = C_sizes[0];
    y_sizes_idx_1 = N_sizes[1];
    loop_ub = C_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = N_sizes[1];
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        moduleInstance->x_y_data[i75 + y_sizes_idx_0 * i76] = 0.0;
        for (i77 = 0; i77 < K_sizes_idx_1; i77++) {
          moduleInstance->x_y_data[i75 + y_sizes_idx_0 * i76] +=
            moduleInstance->b_K_data[i75 + K_sizes_idx_0 * i77] * c_N_data[i77 +
            N_sizes[0] * i76];
        }
      }
    }
  } else {
    y_sizes_idx_0 = (uint8_T)C_sizes[0];
    y_sizes_idx_1 = (uint8_T)N_sizes[1];
    loop_ub = (uint8_T)N_sizes[1];
    for (i75 = 0; i75 < loop_ub; i75++) {
      for (i76 = 0; i76 < y_sizes_idx_0; i76++) {
        moduleInstance->x_y_data[i76 + y_sizes_idx_0 * i75] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((C_sizes[0] < 1) || (N_sizes[1] < 1) || (C_sizes[1] < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)C_sizes[0];
      n_t = (ptrdiff_t)N_sizes[1];
      k_t = (ptrdiff_t)C_sizes[1];
      lda_t = (ptrdiff_t)C_sizes[0];
      ldb_t = (ptrdiff_t)C_sizes[1];
      ldc_t = (ptrdiff_t)C_sizes[0];
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->e_a_data[0], &lda_t, &moduleInstance->e_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->x_y_data[0], &ldc_t);
    }
  }

  st.site = &tf_emlrtRSI;
  C_sizes_idx_0 = C_sizes[1];
  loop_ub = C_sizes[0];
  for (i75 = 0; i75 < loop_ub; i75++) {
    for (i76 = 0; i76 < K_sizes_idx_1; i76++) {
      moduleInstance->e_b_data[i76 + C_sizes_idx_0 * i75] =
        moduleInstance->b_K_data[i75 + K_sizes_idx_0 * i76];
    }
  }

  b_st.site = &he_emlrtRSI;
  if (!(y_sizes_idx_1 == C_sizes[1])) {
    if (((y_sizes_idx_0 == 1) && (y_sizes_idx_1 == 1)) || ((C_sizes[1] == 1) &&
         (C_sizes[0] == 1))) {
      for (i75 = 0; i75 < 45; i75++) {
        ab_u[i75] = cv37[i75];
      }

      ab_y = NULL;
      m18 = emlrtCreateCharArray(2, iv130);
      emlrtInitCharArrayR2013a(&b_st, 45, m18, &ab_u[0]);
      emlrtAssign(&ab_y, m18);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, ab_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i75 = 0; i75 < 21; i75++) {
        y_u[i75] = cv36[i75];
      }

      y_y = NULL;
      m18 = emlrtCreateCharArray(2, iv129);
      emlrtInitCharArrayR2013a(&b_st, 21, m18, &y_u[0]);
      emlrtAssign(&y_y, m18);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, y_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((y_sizes_idx_1 == 1) || (C_sizes[1] == 1)) {
    c_y_sizes[0] = y_sizes_idx_0;
    c_y_sizes[1] = C_sizes[0];
    for (i75 = 0; i75 < y_sizes_idx_0; i75++) {
      loop_ub = C_sizes[0];
      for (i76 = 0; i76 < loop_ub; i76++) {
        moduleInstance->y_y_data[i75 + y_sizes_idx_0 * i76] = 0.0;
        for (i77 = 0; i77 < y_sizes_idx_1; i77++) {
          moduleInstance->y_y_data[i75 + y_sizes_idx_0 * i76] +=
            moduleInstance->x_y_data[i75 + y_sizes_idx_0 * i77] *
            moduleInstance->e_b_data[i77 + C_sizes_idx_0 * i76];
        }
      }
    }
  } else {
    c_y_sizes[0] = (uint8_T)y_sizes_idx_0;
    c_y_sizes[1] = (uint8_T)C_sizes[0];
    loop_ub = (uint8_T)C_sizes[0];
    for (i75 = 0; i75 < loop_ub; i75++) {
      b_loop_ub = (uint8_T)y_sizes_idx_0;
      for (i76 = 0; i76 < b_loop_ub; i76++) {
        moduleInstance->y_y_data[i76 + (uint8_T)y_sizes_idx_0 * i75] = 0.0;
      }
    }

    b_st.site = &ge_emlrtRSI;
    if ((y_sizes_idx_0 < 1) || (C_sizes[0] < 1) || (y_sizes_idx_1 < 1)) {
    } else {
      c_st.site = &je_emlrtRSI;
      alpha1 = 1.0;
      Xdim = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)y_sizes_idx_0;
      n_t = (ptrdiff_t)C_sizes[0];
      k_t = (ptrdiff_t)y_sizes_idx_1;
      lda_t = (ptrdiff_t)y_sizes_idx_0;
      ldb_t = (ptrdiff_t)y_sizes_idx_1;
      ldc_t = (ptrdiff_t)y_sizes_idx_0;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1,
            &moduleInstance->x_y_data[0], &lda_t, &moduleInstance->e_b_data[0],
            &ldb_t, &Xdim, &moduleInstance->y_y_data[0], &ldc_t);
    }
  }

  for (i75 = 0; i75 < 2; i75++) {
    N[i75] = b_y_sizes[i75];
    dX_sizes[i75] = c_y_sizes[i75];
  }

  emlrtSizeEqCheckNDR2012b(N, dX_sizes, &o_emlrtECI, sp);
  d_y_sizes[0] = b_y_sizes[0];
  d_y_sizes[1] = b_y_sizes[1];
  loop_ub = b_y_sizes[0] * b_y_sizes[1];
  for (i75 = 0; i75 < loop_ub; i75++) {
    Pa_data[i75] = moduleInstance->bb_y_data[i75] + moduleInstance->y_y_data[i75];
  }

  st.site = &tf_emlrtRSI;
  c_RIEKF_Store_Covariance(moduleInstance, &st, obj, Pa_data, d_y_sizes);

  /*  Joseph update form */
}

static void c_mrdivide(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance,
  const emlrtStack *sp, real_T c_A_data[], int32_T A_sizes[2], real_T c_B_data[],
  int32_T B_sizes[2], real_T kb_y_data[], int32_T y_sizes[2])
{
  emlrtStack st;
  int32_T i78;
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
      kb_y_data[i78] = 0.0;
    }
  } else if (B_sizes[0] == B_sizes[1]) {
    st.site = &uf_emlrtRSI;
    c_lusolve(&st, c_B_data, B_sizes, c_A_data, A_sizes, kb_y_data, y_sizes);
  } else {
    b_B_sizes[0] = B_sizes[1];
    b_B_sizes[1] = B_sizes[0];
    loop_ub = B_sizes[0];
    for (i78 = 0; i78 < loop_ub; i78++) {
      b_loop_ub = B_sizes[1];
      for (i79 = 0; i79 < b_loop_ub; i79++) {
        moduleInstance->B_data[i79 + b_B_sizes[0] * i78] = c_B_data[i78 +
          B_sizes[0] * i79];
      }
    }

    b_A_sizes[0] = A_sizes[1];
    b_A_sizes[1] = A_sizes[0];
    loop_ub = A_sizes[0];
    for (i78 = 0; i78 < loop_ub; i78++) {
      b_loop_ub = A_sizes[1];
      for (i79 = 0; i79 < b_loop_ub; i79++) {
        moduleInstance->A_data[i79 + b_A_sizes[0] * i78] = c_A_data[i78 +
          A_sizes[0] * i79];
      }
    }

    st.site = &uf_emlrtRSI;
    qrsolve(moduleInstance, &st, moduleInstance->B_data, b_B_sizes,
            moduleInstance->A_data, b_A_sizes, moduleInstance->k_tmp_data,
            tmp_sizes);
    y_sizes[0] = tmp_sizes[1];
    y_sizes[1] = tmp_sizes[0];
    loop_ub = tmp_sizes[0];
    for (i78 = 0; i78 < loop_ub; i78++) {
      b_loop_ub = tmp_sizes[1];
      for (i79 = 0; i79 < b_loop_ub; i79++) {
        kb_y_data[i79 + y_sizes[0] * i78] = moduleInstance->k_tmp_data[i78 +
          tmp_sizes[0] * i79];
      }
    }
  }
}

static void c_lusolve(const emlrtStack *sp, real_T c_A_data[], int32_T A_sizes[2],
                      real_T c_B_data[], int32_T B_sizes[2], real_T X_data[],
                      int32_T X_sizes[2])
{
  emlrtStack st;
  emlrtStack b_st;
  int32_T b_A_sizes[2];
  int32_T loop_ub;
  int32_T jp;
  real_T d_A_data[3600];
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
    d_A_data[jp] = c_A_data[jp];
  }

  b_st.site = &xf_emlrtRSI;
  xgetrf(&b_st, A_sizes[1], A_sizes[1], d_A_data, b_A_sizes, A_sizes[1],
         ipiv_data, ipiv_sizes, &loop_ub);
  if (loop_ub > 0) {
    b_st.site = &wf_emlrtRSI;
    warn_singular(&b_st);
  }

  X_sizes[0] = B_sizes[0];
  X_sizes[1] = B_sizes[1];
  loop_ub = B_sizes[0] * B_sizes[1];
  for (jp = 0; jp < loop_ub; jp++) {
    X_data[jp] = c_B_data[jp];
  }

  b_st.site = &yf_emlrtRSI;
  xtrsm(B_sizes[0], A_sizes[1], d_A_data, A_sizes[1], X_data, B_sizes[0]);
  b_st.site = &ag_emlrtRSI;
  b_xtrsm(B_sizes[0], A_sizes[1], d_A_data, A_sizes[1], X_data, B_sizes[0]);
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
  st.site = &cl_emlrtRSI;
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
  st.site = &cl_emlrtRSI;
  g_error(&st, c_message(&st, y, b_y, c_y, &emlrtMCI), &emlrtMCI);
}

static void eml_signed_integer_colon(const emlrtStack *sp, int32_T b, int32_T
  kb_y_data[], int32_T y_sizes[2])
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
    kb_y_data[0] = 1;
    yk = 1;
    st.site = &bi_emlrtRSI;
    if ((!(2 > n)) && (n > 2147483646)) {
      b_st.site = &be_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 1; k + 1 <= n; k++) {
      yk++;
      kb_y_data[k] = yk;
    }
  }
}

static void qrsolve(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance, const
                    emlrtStack *sp, real_T c_A_data[], int32_T A_sizes[2],
                    real_T c_B_data[], int32_T B_sizes[2], real_T Y_data[],
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
    moduleInstance->b_A_data[i] = c_A_data[i];
  }

  st.site = &hi_emlrtRSI;
  xgeqp3(&st, moduleInstance->b_A_data, b_A_sizes, tau_data, &info, jpvt_data,
         jpvt_sizes);
  st.site = &ii_emlrtRSI;
  rankR = rankFromQR(&st, moduleInstance->b_A_data, b_A_sizes);
  st.site = &ji_emlrtRSI;
  Y_sizes[0] = (int8_T)b_A_sizes[1];
  Y_sizes[1] = (int8_T)B_sizes[1];
  info = (int8_T)b_A_sizes[1] * (int8_T)B_sizes[1];
  for (i = 0; i < info; i++) {
    Y_data[i] = 0.0;
  }

  b_st.site = &ak_emlrtRSI;
  c_st.site = &ek_emlrtRSI;
  info = B_sizes[0] * B_sizes[1];
  for (i = 0; i < info; i++) {
    moduleInstance->b_B_data[i] = c_B_data[i];
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
      (ptrdiff_t)c_A_sizes, &moduleInstance->b_A_data[0], (ptrdiff_t)b_A_sizes[0],
      &tau_data[0], &moduleInstance->b_B_data[0], nrc_t);
    info = (int32_T)info_t;
    d_st.site = &gk_emlrtRSI;
    if (info != 0) {
      if (info == -1010) {
        e_st.site = &sh_emlrtRSI;
        c_error(&e_st);
      } else {
        e_st.site = &th_emlrtRSI;
        f_error(&e_st, info);
      }
    }
  }

  b_st.site = &bk_emlrtRSI;
  for (info = 0; info + 1 <= B_sizes[1]; info++) {
    b_st.site = &ck_emlrtRSI;
    if ((!(1 > rankR)) && (rankR > 2147483646)) {
      c_st.site = &be_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (i = 0; i + 1 <= rankR; i++) {
      Y_data[(jpvt_data[i] + Y_sizes[0] * info) - 1] = moduleInstance->
        b_B_data[i + B_sizes[0] * info];
    }

    for (j = rankR - 1; j + 1 > 0; j--) {
      Y_data[(jpvt_data[j] + Y_sizes[0] * info) - 1] /= moduleInstance->
        b_A_data[j + b_A_sizes[0] * j];
      b_st.site = &dk_emlrtRSI;
      for (i = 0; i + 1 <= j; i++) {
        Y_data[(jpvt_data[i] + Y_sizes[0] * info) - 1] -= Y_data[(jpvt_data[j] +
          Y_sizes[0] * info) - 1] * moduleInstance->b_A_data[i + b_A_sizes[0] *
          j];
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
  st.site = &cl_emlrtRSI;
  g_error(&st, c_message(&st, y, b_y, c_y, &emlrtMCI), &emlrtMCI);
}

static int32_T rankFromQR(const emlrtStack *sp, real_T c_A_data[], int32_T
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
    tol = (real_T)maxmn * muDoubleScalarAbs(c_A_data[0]) *
      2.2204460492503131E-16;
    while ((r < minmn) && (muDoubleScalarAbs(c_A_data[r + A_sizes[0] * r]) >=
                           tol)) {
      r++;
    }
  }

  if (r < minmn) {
    st.site = &xj_emlrtRSI;
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
    b_st.site = &ll_emlrtRSI;
    emlrt_marshallIn(&b_st, b_sprintf(&b_st, y, b_y, &s_emlrtMCI), "sprintf",
                     cv46);
    st.site = &yj_emlrtRSI;
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
  st.site = &kl_emlrtRSI;
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
  st.site = &cl_emlrtRSI;
  g_error(&st, c_message(&st, y, b_y, c_y, &emlrtMCI), &emlrtMCI);
}

static void RIEKF_Update_Landmarks(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T measured_landmarks
  [40])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
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
  static char_T cv52[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  boolean_T b_measured_landmarks[10];
  int32_T i85;
  real_T d6;
  int32_T F_sizes_idx_0;
  int32_T Y_sizes;
  int8_T ii_sizes[2];
  int32_T loop_ub;
  int32_T result;
  boolean_T exitg2;
  int32_T H_sizes[2];
  real_T Y_data[400];
  int32_T N_sizes[2];
  int32_T PI_sizes[2];
  real_T beta1;
  int32_T b_index;
  int32_T i86;
  real_T new_landmarks_data[400];
  real_T n_tmp_data[400];
  int32_T b_loop_ub;
  int8_T ii_data[10];
  boolean_T guard1 = false;
  boolean_T exitg1;
  boolean_T b_guard1 = false;
  int32_T i87;
  real_T Pa_data[2601];
  int8_T id_data[10];
  int32_T i88;
  int8_T Y2_data[100];
  real_T d_varargin_1_data[2025];
  int32_T c_loop_ub;
  real_T b[9];
  real_T o_tmp_data[345];
  int16_T p_tmp_data[20];
  real_T q_tmp_data[107];
  real_T varargin_2_data[345];
  boolean_T b2;
  real_T H2_data[300];
  int8_T i89;
  int32_T i90;
  const mxArray *y;
  char_T u[39];
  static char_T cv53[39] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'c', 'a', 't',
    'e', 'n', 'a', 't', 'e', ':', 'm', 'a', 't', 'r', 'i', 'x', 'D', 'i', 'm',
    'e', 'n', 's', 'i', 'o', 'n', 'M', 'i', 's', 'm', 'a', 't', 'c', 'h' };

  int8_T iv144[3];
  const mxArray *m26;
  static const int32_T iv145[2] = { 1, 39 };

  const mxArray *b_y;
  char_T b_u[39];
  static const int32_T iv146[2] = { 1, 39 };

  int32_T varargin_1_sizes[2];
  int8_T r_tmp_data[60];
  int32_T b_sizes[2];
  int32_T tmp_sizes[2];
  real_T g_b_data[363];
  int32_T G_sizes_idx_0;
  real_T G_data[162];
  int32_T iv147[2];
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

  real_T b_R_pred[9];
  static const int32_T iv148[2] = { 1, 21 };

  static const int32_T iv149[2] = { 1, 45 };

  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  int32_T y_sizes[2];
  ptrdiff_t ldc_t;
  const mxArray *e_y;
  char_T e_u[21];
  const mxArray *f_y;
  char_T f_u[45];
  static const int32_T iv150[2] = { 1, 21 };

  static const int32_T iv151[2] = { 1, 45 };

  real_T h_b_data[321];
  int16_T s_tmp_data[20];
  real_T o_C_data[162];
  int16_T C_sizes[2];
  int32_T iv152[2];
  real_T t_tmp_data[321];
  int32_T b_y_sizes[2];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  covrtLogFcn(moduleInstance->covInst, 0, 16);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 42);

  /*  Function to perform Right-Invariant EKF update from estimated */
  /*  landmark distance measurements             */
  st.site = &lk_emlrtRSI;
  RIEKF_Separate_State(moduleInstance, obj->X, obj->theta, R_pred, unusedUd,
                       unusedUe, unusedUf, unusedU10, unusedU11, unusedU12);

  /*  Determine sizes (needed for codegen), (TODO: there is probably a better way to do this) */
  lm_cnt = 0.0;
  for (i = 0; i < 10; i++) {
    covrtLogFor(moduleInstance->covInst, 0, 0, 4, 1);
    if (covrtLogCond(moduleInstance->covInst, 0, 0, 16, measured_landmarks[i <<
                     2] == 0.0) || covrtLogCond(moduleInstance->covInst, 0, 0,
         17, muDoubleScalarIsNaN(measured_landmarks[i << 2]))) {
      covrtLogMcdc(moduleInstance->covInst, 0, 0, 12, true);
      covrtLogIf(moduleInstance->covInst, 0, 0, 20, true);
      covrtLogBasicBlock(moduleInstance->covInst, 0, 43);
    } else {
      covrtLogMcdc(moduleInstance->covInst, 0, 0, 12, false);
      covrtLogIf(moduleInstance->covInst, 0, 0, 20, false);
      covrtLogBasicBlock(moduleInstance->covInst, 0, 44);
      for (i85 = 0; i85 < 10; i85++) {
        b_measured_landmarks[i85] = (obj->landmark_ids[i85] ==
          measured_landmarks[i << 2]);
      }

      F_sizes_idx_0 = 0;
      for (i85 = 0; i85 < 2; i85++) {
        ii_sizes[i85] = 1;
      }

      result = 1;
      exitg2 = false;
      while ((!exitg2) && (result < 11)) {
        if (b_measured_landmarks[result - 1]) {
          F_sizes_idx_0 = 1;
          exitg2 = true;
        } else {
          result++;
        }
      }

      if (F_sizes_idx_0 == 0) {
        ii_sizes[1] = 0;
      }

      if (covrtLogIf(moduleInstance->covInst, 0, 0, 21, covrtLogMcdc
                     (moduleInstance->covInst, 0, 0, 13, !covrtLogCond
                      (moduleInstance->covInst, 0, 0, 18, ii_sizes[1] == 0)))) {
        covrtLogBasicBlock(moduleInstance->covInst, 0, 45);
        lm_cnt++;
      }
    }

    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst, 0, 0, 4, 0);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 46);
  Xdim = 7.0 + obj->num_landmarks;
  if (!(lm_cnt <= 20.0)) {
    st.site = &bl_emlrtRSI;
    g_error(&st, message(&st, b_emlrt_marshallOut(&st, cv52), &t_emlrtMCI),
            &t_emlrtMCI);
  }

  /*  TODO: change to constant variable */
  if (!(Xdim <= 20.0)) {
    st.site = &al_emlrtRSI;
    g_error(&st, message(&st, b_emlrt_marshallOut(&st, cv52), &u_emlrtMCI),
            &u_emlrtMCI);
  }

  /*  TODO: change to constant variable */
  d6 = emlrtNonNegativeCheckR2012b(Xdim * lm_cnt, &ic_emlrtDCI, sp);
  Y_sizes = (int32_T)emlrtIntegerCheckR2012b(d6, &hc_emlrtDCI, sp);
  d6 = emlrtNonNegativeCheckR2012b(Xdim * lm_cnt, &ic_emlrtDCI, sp);
  loop_ub = (int32_T)emlrtIntegerCheckR2012b(d6, &hc_emlrtDCI, sp);
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
    moduleInstance->H_data[i85] = 0.0;
  }

  d6 = 3.0 * lm_cnt;
  N_sizes[0] = (int32_T)d6;
  N_sizes[1] = (int32_T)d6;
  loop_ub = (int32_T)d6 * (int32_T)d6;
  for (i85 = 0; i85 < loop_ub; i85++) {
    moduleInstance->N_data[i85] = 0.0;
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

  for (i85 = 0; i85 < 10; i85++) {
    b_measured_landmarks[i85] = (measured_landmarks[i85 << 2] > 1.0);
  }

  beta1 = sum(b_measured_landmarks) - lm_cnt;
  if (1.0 > beta1) {
    loop_ub = 0;
  } else {
    loop_ub = emlrtDynamicBoundsCheckR2012b((int32_T)beta1, 1, 100, &be_emlrtBCI,
      sp);
  }

  for (i85 = 0; i85 < loop_ub; i85++) {
    for (i86 = 0; i86 < 4; i86++) {
      new_landmarks_data[i86 + (i85 << 2)] = 0.0;
    }
  }

  b_index = 1;

  /*  Stack landmark measurements for batch update */
  for (i = 0; i < 10; i++) {
    covrtLogFor(moduleInstance->covInst, 0, 0, 5, 1);

    /*  Search to see if measured landmark id is in the list of */
    /*  static landmarks  */
    if (covrtLogCond(moduleInstance->covInst, 0, 0, 19, measured_landmarks[i <<
                     2] == 0.0) || covrtLogCond(moduleInstance->covInst, 0, 0,
         20, muDoubleScalarIsNaN(measured_landmarks[i << 2]))) {
      covrtLogMcdc(moduleInstance->covInst, 0, 0, 14, true);
      covrtLogIf(moduleInstance->covInst, 0, 0, 22, true);
      covrtLogBasicBlock(moduleInstance->covInst, 0, 47);
    } else {
      covrtLogMcdc(moduleInstance->covInst, 0, 0, 14, false);
      covrtLogIf(moduleInstance->covInst, 0, 0, 22, false);
      covrtLogBasicBlock(moduleInstance->covInst, 0, 48);
      for (i85 = 0; i85 < 10; i85++) {
        b_measured_landmarks[i85] = (obj->landmark_ids[i85] ==
          measured_landmarks[i << 2]);
      }

      F_sizes_idx_0 = 0;
      for (i85 = 0; i85 < 2; i85++) {
        ii_sizes[i85] = (int8_T)(1 + 9 * i85);
      }

      result = 1;
      exitg1 = false;
      while ((!exitg1) && (result < 11)) {
        b_guard1 = false;
        if (b_measured_landmarks[result - 1]) {
          F_sizes_idx_0++;
          ii_data[F_sizes_idx_0 - 1] = (int8_T)result;
          if (F_sizes_idx_0 >= 10) {
            exitg1 = true;
          } else {
            b_guard1 = true;
          }
        } else {
          b_guard1 = true;
        }

        if (b_guard1) {
          result++;
        }
      }

      if (1 > F_sizes_idx_0) {
        i87 = 0;
      } else {
        i87 = F_sizes_idx_0;
      }

      b_loop_ub = ii_sizes[0] * i87;
      for (i85 = 0; i85 < b_loop_ub; i85++) {
        id_data[i85] = ii_data[i85];
      }

      if (1 > F_sizes_idx_0) {
        i88 = 0;
      } else {
        i88 = F_sizes_idx_0;
      }

      if (covrtLogIf(moduleInstance->covInst, 0, 0, 23, i88 == 0)) {
        covrtLogBasicBlock(moduleInstance->covInst, 0, 49);
        emlrtDynamicBoundsCheckR2012b(b_index, 1, loop_ub, &wd_emlrtBCI, sp);
        for (i85 = 0; i85 < 4; i85++) {
          new_landmarks_data[i85 + ((b_index - 1) << 2)] =
            measured_landmarks[i85 + (i << 2)];
        }

        b_index++;
      } else {
        covrtLogBasicBlock(moduleInstance->covInst, 0, 50);

        /*  makes codegen happy */
        /*  Create measurement model */
        beta1 = obj->num_landmarks;
        if (1.0 > beta1) {
          b_loop_ub = 0;
        } else {
          i85 = (int32_T)emlrtIntegerCheckR2012b(beta1, &cc_emlrtDCI, sp);
          b_loop_ub = emlrtDynamicBoundsCheckR2012b(i85, 1, 100, &ae_emlrtBCI,
            sp);
        }

        for (i85 = 0; i85 < b_loop_ub; i85++) {
          Y2_data[i85] = 0;
        }

        Y2_data[emlrtDynamicBoundsCheckR2012b((int32_T)id_data[0], 1, b_loop_ub,
          &ge_emlrtBCI, sp) - 1] = -1;
        lm_cnt = Xdim * ((1.0 + (real_T)i) - 1.0);
        result = (int32_T)muDoubleScalarFloor(Xdim - 1.0) + 1;
        c_loop_ub = (int32_T)muDoubleScalarFloor(Xdim - 1.0);
        for (i85 = 0; i85 <= c_loop_ub; i85++) {
          i86 = (int16_T)emlrtIntegerCheckR2012b(lm_cnt + (1.0 + (real_T)i85),
            &kc_emlrtDCI, sp);
          p_tmp_data[i85] = (int16_T)emlrtDynamicBoundsCheckR2012b(i86, 1,
            Y_sizes, &he_emlrtBCI, sp);
        }

        for (i85 = 0; i85 < 3; i85++) {
          q_tmp_data[i85] = measured_landmarks[(i85 + (i << 2)) + 1];
        }

        q_tmp_data[3] = 0.0;
        q_tmp_data[4] = 1.0;
        q_tmp_data[5] = 0.0;
        q_tmp_data[6] = 0.0;
        for (i85 = 0; i85 < b_loop_ub; i85++) {
          q_tmp_data[i85 + 7] = (real_T)Y2_data[i85];
        }

        emlrtSizeEqCheck1DR2012b(result, b_loop_ub + 7, &t_emlrtECI, sp);
        for (i85 = 0; i85 < result; i85++) {
          Y_data[p_tmp_data[i85] - 1] = q_tmp_data[i85];
        }

        beta1 = 3.0 * obj->num_landmarks;
        if (1.0 > beta1) {
          b_loop_ub = 0;
        } else {
          i85 = (int32_T)emlrtIntegerCheckR2012b(beta1, &bc_emlrtDCI, sp);
          b_loop_ub = emlrtDynamicBoundsCheckR2012b(i85, 1, 100, &yd_emlrtBCI,
            sp);
        }

        for (i85 = 0; i85 < b_loop_ub; i85++) {
          for (i86 = 0; i86 < 3; i86++) {
            H2_data[i86 + 3 * i85] = 0.0;
          }
        }

        eye(b);
        i85 = 3 * (id_data[0] - 1);
        for (i86 = 0; i86 < 3; i86++) {
          for (i90 = 0; i90 < 3; i90++) {
            H2_data[i90 + 3 * (emlrtDynamicBoundsCheckR2012b((i85 + i86) + 1, 1,
              b_loop_ub, &ie_emlrtBCI, sp) - 1)] = b[i90 + 3 * i86];
          }
        }

        i89 = (int8_T)(3 * i + 1);
        for (i85 = 0; i85 < 3; i85++) {
          iv144[i85] = (int8_T)((int8_T)emlrtDynamicBoundsCheckR2012b(i85 + i89,
            1, H_sizes[0], &je_emlrtBCI, sp) - 1);
        }

        c_loop_ub = (int8_T)((int8_T)H_sizes[1] - 1);
        for (i85 = 0; i85 <= c_loop_ub; i85++) {
          r_tmp_data[i85] = (int8_T)i85;
        }

        eye(b);
        b_sizes[0] = 3;
        b_sizes[1] = 21 + b_loop_ub;
        for (i85 = 0; i85 < 3; i85++) {
          for (i86 = 0; i86 < 3; i86++) {
            g_b_data[i86 + 3 * i85] = 0.0;
          }
        }

        for (i85 = 0; i85 < 3; i85++) {
          for (i86 = 0; i86 < 3; i86++) {
            g_b_data[i86 + 3 * (i85 + 3)] = 0.0;
          }
        }

        for (i85 = 0; i85 < 3; i85++) {
          for (i86 = 0; i86 < 3; i86++) {
            g_b_data[i86 + 3 * (i85 + 6)] = -b[i86 + 3 * i85];
          }
        }

        for (i85 = 0; i85 < 3; i85++) {
          for (i86 = 0; i86 < 3; i86++) {
            g_b_data[i86 + 3 * (i85 + 9)] = 0.0;
          }
        }

        for (i85 = 0; i85 < 3; i85++) {
          for (i86 = 0; i86 < 3; i86++) {
            g_b_data[i86 + 3 * (i85 + 12)] = 0.0;
          }
        }

        for (i85 = 0; i85 < b_loop_ub; i85++) {
          for (i86 = 0; i86 < 3; i86++) {
            g_b_data[i86 + 3 * (i85 + 15)] = H2_data[i86 + 3 * i85];
          }
        }

        for (i85 = 0; i85 < 6; i85++) {
          for (i86 = 0; i86 < 3; i86++) {
            g_b_data[i86 + 3 * ((i85 + b_loop_ub) + 15)] = 0.0;
          }
        }

        iv147[0] = 3;
        iv147[1] = (int8_T)((int8_T)H_sizes[1] - 1) + 1;
        emlrtSubAssignSizeCheckR2012b(iv147, 2, b_sizes, 2, &s_emlrtECI, sp);
        b_loop_ub += 21;
        for (i85 = 0; i85 < b_loop_ub; i85++) {
          for (i86 = 0; i86 < 3; i86++) {
            moduleInstance->H_data[iv144[i86] + H_sizes[0] * r_tmp_data[i85]] =
              g_b_data[i86 + 3 * i85];
          }
        }

        for (i85 = 0; i85 < 9; i85++) {
          b[i85] = obj->Ql[i85];
        }

        for (i85 = 0; i85 < 3; i85++) {
          for (i86 = 0; i86 < 3; i86++) {
            b_R_pred[i85 + 3 * i86] = 0.0;
            for (i90 = 0; i90 < 3; i90++) {
              b_R_pred[i85 + 3 * i86] += R_pred[i85 + 3 * i90] * b[i90 + 3 * i86];
            }
          }
        }

        i85 = 3 * i + 1;
        i86 = 3 * i + 1;
        for (i90 = 0; i90 < 3; i90++) {
          for (result = 0; result < 3; result++) {
            moduleInstance->N_data[(emlrtDynamicBoundsCheckR2012b(i90 + i85, 1,
              (int32_T)d6, &ke_emlrtBCI, sp) + (int32_T)d6 *
              (emlrtDynamicBoundsCheckR2012b(result + i86, 1, (int32_T)d6,
              &le_emlrtBCI, sp) - 1)) - 1] = 0.0;
            for (F_sizes_idx_0 = 0; F_sizes_idx_0 < 3; F_sizes_idx_0++) {
              moduleInstance->N_data[(emlrtDynamicBoundsCheckR2012b(i90 + i85, 1,
                (int32_T)d6, &ke_emlrtBCI, sp) + (int32_T)d6 *
                (emlrtDynamicBoundsCheckR2012b(result + i86, 1, (int32_T)d6,
                &le_emlrtBCI, sp) - 1)) - 1] = moduleInstance->N_data
                [(emlrtDynamicBoundsCheckR2012b(i90 + i85, 1, (int32_T)d6,
                   &ke_emlrtBCI, sp) + (int32_T)d6 *
                  (emlrtDynamicBoundsCheckR2012b(result + i86, 1, (int32_T)d6,
                    &le_emlrtBCI, sp) - 1)) - 1] + b_R_pred[i90 + 3 *
                F_sizes_idx_0] * R_pred[result + 3 * F_sizes_idx_0];
            }
          }
        }

        beta1 = obj->num_landmarks;
        if (1.0 > beta1) {
          b_loop_ub = -1;
        } else {
          i85 = (int32_T)emlrtIntegerCheckR2012b(beta1, &ac_emlrtDCI, sp);
          b_loop_ub = emlrtDynamicBoundsCheckR2012b(i85, 1, 100, &xd_emlrtBCI,
            sp) - 1;
        }

        i89 = (int8_T)(3 * i + 1);
        for (i85 = 0; i85 < 3; i85++) {
          iv144[i85] = (int8_T)((int8_T)emlrtDynamicBoundsCheckR2012b(i85 + i89,
            1, PI_sizes[0], &me_emlrtBCI, sp) - 1);
        }

        lm_cnt = Xdim * ((1.0 + (real_T)i) - 1.0);
        c_loop_ub = (int32_T)muDoubleScalarFloor(Xdim - 1.0);
        for (i85 = 0; i85 <= c_loop_ub; i85++) {
          i86 = (int16_T)emlrtIntegerCheckR2012b(lm_cnt + (1.0 + (real_T)i85),
            &lc_emlrtDCI, sp);
          s_tmp_data[i85] = (int16_T)((int16_T)emlrtDynamicBoundsCheckR2012b(i86,
            1, PI_sizes[1], &ne_emlrtBCI, sp) - 1);
        }

        eye(b);
        for (i85 = 0; i85 < 3; i85++) {
          for (i86 = 0; i86 < 3; i86++) {
            h_b_data[i86 + 3 * i85] = b[i86 + 3 * i85];
          }
        }

        for (i85 = 0; i85 < 4; i85++) {
          for (i86 = 0; i86 < 3; i86++) {
            h_b_data[i86 + 3 * (i85 + 3)] = 0.0;
          }
        }

        for (i85 = 0; i85 <= b_loop_ub; i85++) {
          for (i86 = 0; i86 < 3; i86++) {
            h_b_data[i86 + 3 * (i85 + 7)] = 0.0;
          }
        }

        tmp_sizes[0] = 3;
        tmp_sizes[1] = b_loop_ub + 8;
        c_loop_ub = b_loop_ub + 8;
        for (i85 = 0; i85 < c_loop_ub; i85++) {
          for (i86 = 0; i86 < 3; i86++) {
            t_tmp_data[i86 + 3 * i85] = h_b_data[i86 + 3 * i85];
          }
        }

        iv152[0] = 3;
        iv152[1] = (int32_T)muDoubleScalarFloor(Xdim - 1.0) + 1;
        emlrtSubAssignSizeCheckR2012b(iv152, 2, tmp_sizes, 2, &r_emlrtECI, sp);
        b_loop_ub += 8;
        for (i85 = 0; i85 < b_loop_ub; i85++) {
          for (i86 = 0; i86 < 3; i86++) {
            moduleInstance->PI_data[iv144[i86] + PI_sizes[0] * s_tmp_data[i85]] =
              t_tmp_data[i86 + 3 * i85];
          }
        }
      }
    }

    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst, 0, 0, 5, 0);

  /*  Update State */
  if (covrtLogIf(moduleInstance->covInst, 0, 0, 24, covrtLogMcdc
                 (moduleInstance->covInst, 0, 0, 15, !covrtLogCond
                  (moduleInstance->covInst, 0, 0, 21, Y_sizes == 0)))) {
    covrtLogBasicBlock(moduleInstance->covInst, 0, 51);
    b_loop_ub = (int16_T)Y_sizes;
    for (i85 = 0; i85 < b_loop_ub; i85++) {
      n_tmp_data[i85] = 0.0;
    }

    st.site = &mk_emlrtRSI;
    d_RIEKF_Update_State(moduleInstance, &st, obj, Y_data, Y_sizes, n_tmp_data,
                         (int32_T)(int16_T)Y_sizes, moduleInstance->H_data,
                         H_sizes, moduleInstance->N_data, N_sizes,
                         moduleInstance->PI_data, PI_sizes);
  }

  /*  Augment State for new landmarks */
  if (covrtLogIf(moduleInstance->covInst, 0, 0, 25, covrtLogMcdc
                 (moduleInstance->covInst, 0, 0, 16, !covrtLogCond
                  (moduleInstance->covInst, 0, 0, 22, loop_ub == 0)))) {
    covrtLogBasicBlock(moduleInstance->covInst, 0, 52);
    st.site = &nk_emlrtRSI;
    RIEKF_Separate_State(moduleInstance, obj->X, obj->theta, R_pred, unusedUd,
                         unusedUe, unusedUf, unusedU10, unusedU11, unusedU12);
    i = 0;
    while (i <= loop_ub - 1) {
      covrtLogFor(moduleInstance->covInst, 0, 0, 6, 1);
      guard1 = false;
      if (covrtLogCond(moduleInstance->covInst, 0, 0, 23, measured_landmarks
                       [(emlrtDynamicBoundsCheckR2012b(1 + i, 1, 10,
             &ce_emlrtBCI, sp) - 1) << 2] == 0.0)) {
        guard1 = true;
      } else {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, 10, &vd_emlrtBCI, sp);
        if (covrtLogCond(moduleInstance->covInst, 0, 0, 24, muDoubleScalarIsNaN
                         (measured_landmarks[i << 2]))) {
          guard1 = true;
        } else {
          covrtLogMcdc(moduleInstance->covInst, 0, 0, 17, false);
          covrtLogIf(moduleInstance->covInst, 0, 0, 26, false);
          if (covrtLogIf(moduleInstance->covInst, 0, 0, 27, obj->num_landmarks <
                         10.0)) {
            covrtLogBasicBlock(moduleInstance->covInst, 0, 54);

            /*  Increment number of landmarks after extracting cov */
            st.site = &ok_emlrtRSI;
            RIEKF_Augmented_Covariance(moduleInstance, &st, obj, Pa_data,
              N_sizes);
            obj->num_landmarks++;

            /*  this needs to be done before Store_Covariance */
            /*  Initialize new landmark mean */
            d6 = obj->num_landmarks;
            i85 = (int32_T)emlrtIntegerCheckR2012b(d6, &jc_emlrtDCI, sp);
            obj->landmark_ids[emlrtDynamicBoundsCheckR2012b(i85, 1, 10,
              &ee_emlrtBCI, sp) - 1] = new_landmarks_data
              [(emlrtDynamicBoundsCheckR2012b(1 + i, 1, loop_ub, &de_emlrtBCI,
                 sp) - 1) << 2];
            emlrtDynamicBoundsCheckR2012b(i + 1, 1, loop_ub, &ud_emlrtBCI, sp);
            lm_cnt = obj->num_landmarks;
            i85 = (int32_T)emlrtIntegerCheckR2012b(lm_cnt, &yb_emlrtDCI, sp);
            emlrtDynamicBoundsCheckR2012b(i85, 1, 10, &td_emlrtBCI, sp);
            for (i85 = 0; i85 < 3; i85++) {
              d6 = 0.0;
              for (i86 = 0; i86 < 3; i86++) {
                d6 += R_pred[i85 + 3 * i86] * new_landmarks_data[(i86 + (i << 2))
                  + 1];
              }

              obj->landmarks[i85 + 3 * ((int32_T)lm_cnt - 1)] = unusedUe[i85] +
                d6;
            }

            /*  Initialize new landmark covariance */
            /*  Start with I with state dim and add row to increase dimension */
            d6 = 3.0 * (obj->num_landmarks - 1.0);
            if (1.0 > d6) {
              b_loop_ub = -1;
            } else {
              i85 = (int32_T)emlrtIntegerCheckR2012b(d6, &xb_emlrtDCI, sp);
              b_loop_ub = emlrtDynamicBoundsCheckR2012b(i85, 1, 100,
                &sd_emlrtBCI, sp) - 1;
            }

            st.site = &pk_emlrtRSI;
            c_eye(&st, (real_T)N_sizes[0] - 6.0, d_varargin_1_data, H_sizes);
            st.site = &pk_emlrtRSI;
            eye(b);
            for (i85 = 0; i85 < 6; i85++) {
              for (i86 = 0; i86 < 3; i86++) {
                o_tmp_data[i86 + 3 * i85] = 0.0;
              }
            }

            for (i85 = 0; i85 < 3; i85++) {
              for (i86 = 0; i86 < 3; i86++) {
                o_tmp_data[i86 + 3 * (i85 + 6)] = b[i86 + 3 * i85];
              }
            }

            for (i85 = 0; i85 < 6; i85++) {
              for (i86 = 0; i86 < 3; i86++) {
                o_tmp_data[i86 + 3 * (i85 + 9)] = 0.0;
              }
            }

            for (i85 = 0; i85 <= b_loop_ub; i85++) {
              for (i86 = 0; i86 < 3; i86++) {
                o_tmp_data[i86 + 3 * (i85 + 15)] = 0.0;
              }
            }

            c_loop_ub = b_loop_ub + 16;
            for (i85 = 0; i85 < c_loop_ub; i85++) {
              for (i86 = 0; i86 < 3; i86++) {
                varargin_2_data[i86 + 3 * i85] = o_tmp_data[i86 + 3 * i85];
              }
            }

            b_st.site = &de_emlrtRSI;
            if (!((H_sizes[0] == 0) || (H_sizes[1] == 0))) {
              F_sizes_idx_0 = H_sizes[1];
            } else {
              F_sizes_idx_0 = b_loop_ub + 16;
            }

            c_st.site = &ee_emlrtRSI;
            if ((F_sizes_idx_0 == H_sizes[1]) || ((H_sizes[0] == 0) || (H_sizes
                  [1] == 0))) {
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
              d_st.site = &yk_emlrtRSI;
              g_error(&d_st, message(&d_st, y, &f_emlrtMCI), &f_emlrtMCI);
            }

            if (F_sizes_idx_0 != b_loop_ub + 16) {
              for (i85 = 0; i85 < 39; i85++) {
                b_u[i85] = cv53[i85];
              }

              b_y = NULL;
              m26 = emlrtCreateCharArray(2, iv146);
              emlrtInitCharArrayR2013a(&c_st, 39, m26, &b_u[0]);
              emlrtAssign(&b_y, m26);
              d_st.site = &yk_emlrtRSI;
              g_error(&d_st, message(&d_st, b_y, &f_emlrtMCI), &f_emlrtMCI);
            }

            if ((F_sizes_idx_0 == 0) || (!((H_sizes[0] == 0) || (H_sizes[1] == 0))))
            {
              result = H_sizes[0];
            } else {
              result = 0;
            }

            varargin_1_sizes[0] = result + 3;
            varargin_1_sizes[1] = F_sizes_idx_0;
            for (i85 = 0; i85 < F_sizes_idx_0; i85++) {
              for (i86 = 0; i86 < result; i86++) {
                moduleInstance->varargin_1_data[i86 + (result + 3) * i85] =
                  d_varargin_1_data[i86 + result * i85];
              }
            }

            for (i85 = 0; i85 < F_sizes_idx_0; i85++) {
              for (i86 = 0; i86 < 3; i86++) {
                moduleInstance->varargin_1_data[(i86 + result) + (result + 3) *
                  i85] = varargin_2_data[i86 + 3 * i85];
              }
            }

            c_blkdiag(moduleInstance->varargin_1_data, varargin_1_sizes,
                      moduleInstance->tmp_data, tmp_sizes);
            F_sizes_idx_0 = tmp_sizes[0];
            Y_sizes = tmp_sizes[1];
            b_loop_ub = tmp_sizes[0] * tmp_sizes[1];
            for (i85 = 0; i85 < b_loop_ub; i85++) {
              moduleInstance->F_data[i85] = moduleInstance->tmp_data[i85];
            }

            /*  Add block I for parameters */
            G_sizes_idx_0 = tmp_sizes[0];
            b_loop_ub = tmp_sizes[0] * 3;
            for (i85 = 0; i85 < b_loop_ub; i85++) {
              G_data[i85] = 0.0;
            }

            for (i85 = 0; i85 < 3; i85++) {
              for (i86 = 0; i86 < 3; i86++) {
                G_data[(emlrtDynamicBoundsCheckR2012b((i86 + tmp_sizes[0]) - 8,
                         1, tmp_sizes[0], &fe_emlrtBCI, sp) + G_sizes_idx_0 *
                        i85) - 1] = R_pred[i86 + 3 * i85];
              }
            }

            st.site = &qk_emlrtRSI;
            b_loop_ub = tmp_sizes[0] * tmp_sizes[1];
            for (i85 = 0; i85 < b_loop_ub; i85++) {
              moduleInstance->a_data[i85] = moduleInstance->F_data[i85];
            }

            b_loop_ub = N_sizes[0] * N_sizes[1];
            for (i85 = 0; i85 < b_loop_ub; i85++) {
              moduleInstance->b_data[i85] = Pa_data[i85];
            }

            b_st.site = &he_emlrtRSI;
            if (!(tmp_sizes[1] == N_sizes[0])) {
              if (((tmp_sizes[0] == 1) && (tmp_sizes[1] == 1)) || ((N_sizes[0] ==
                    1) && (N_sizes[1] == 1))) {
                for (i85 = 0; i85 < 45; i85++) {
                  d_u[i85] = cv55[i85];
                }

                d_y = NULL;
                m26 = emlrtCreateCharArray(2, iv149);
                emlrtInitCharArrayR2013a(&b_st, 45, m26, &d_u[0]);
                emlrtAssign(&d_y, m26);
                c_st.site = &uk_emlrtRSI;
                g_error(&c_st, message(&c_st, d_y, &g_emlrtMCI), &g_emlrtMCI);
              } else {
                for (i85 = 0; i85 < 21; i85++) {
                  c_u[i85] = cv54[i85];
                }

                c_y = NULL;
                m26 = emlrtCreateCharArray(2, iv148);
                emlrtInitCharArrayR2013a(&b_st, 21, m26, &c_u[0]);
                emlrtAssign(&c_y, m26);
                c_st.site = &vk_emlrtRSI;
                g_error(&c_st, message(&c_st, c_y, &h_emlrtMCI), &h_emlrtMCI);
              }
            }

            if ((tmp_sizes[1] == 1) || (N_sizes[0] == 1)) {
              b_index = tmp_sizes[0];
              y_sizes_idx_1 = N_sizes[1];
              b_loop_ub = tmp_sizes[0];
              for (i85 = 0; i85 < b_loop_ub; i85++) {
                c_loop_ub = N_sizes[1];
                for (i86 = 0; i86 < c_loop_ub; i86++) {
                  moduleInstance->y_data[i85 + b_index * i86] = 0.0;
                  for (i90 = 0; i90 < Y_sizes; i90++) {
                    moduleInstance->y_data[i85 + b_index * i86] +=
                      moduleInstance->F_data[i85 + F_sizes_idx_0 * i90] *
                      Pa_data[i90 + N_sizes[0] * i86];
                  }
                }
              }
            } else {
              b_index = (int16_T)tmp_sizes[0];
              y_sizes_idx_1 = (int16_T)N_sizes[1];
              b_loop_ub = (int16_T)N_sizes[1];
              for (i85 = 0; i85 < b_loop_ub; i85++) {
                for (i86 = 0; i86 < b_index; i86++) {
                  moduleInstance->y_data[i86 + b_index * i85] = 0.0;
                }
              }

              b_st.site = &ge_emlrtRSI;
              if ((tmp_sizes[0] < 1) || (N_sizes[1] < 1) || (tmp_sizes[1] < 1))
              {
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
                      &moduleInstance->a_data[0], &lda_t,
                      &moduleInstance->b_data[0], &ldb_t, &beta1,
                      &moduleInstance->y_data[0], &ldc_t);
              }
            }

            st.site = &qk_emlrtRSI;
            result = tmp_sizes[1];
            b_loop_ub = tmp_sizes[0];
            for (i85 = 0; i85 < b_loop_ub; i85++) {
              for (i86 = 0; i86 < Y_sizes; i86++) {
                moduleInstance->b_data[i86 + result * i85] =
                  moduleInstance->F_data[i85 + F_sizes_idx_0 * i86];
              }
            }

            b_st.site = &he_emlrtRSI;
            if (!(y_sizes_idx_1 == tmp_sizes[1])) {
              if (((b_index == 1) && (y_sizes_idx_1 == 1)) || ((tmp_sizes[1] ==
                    1) && (tmp_sizes[0] == 1))) {
                for (i85 = 0; i85 < 45; i85++) {
                  f_u[i85] = cv55[i85];
                }

                f_y = NULL;
                m26 = emlrtCreateCharArray(2, iv151);
                emlrtInitCharArrayR2013a(&b_st, 45, m26, &f_u[0]);
                emlrtAssign(&f_y, m26);
                c_st.site = &uk_emlrtRSI;
                g_error(&c_st, message(&c_st, f_y, &g_emlrtMCI), &g_emlrtMCI);
              } else {
                for (i85 = 0; i85 < 21; i85++) {
                  e_u[i85] = cv54[i85];
                }

                e_y = NULL;
                m26 = emlrtCreateCharArray(2, iv150);
                emlrtInitCharArrayR2013a(&b_st, 21, m26, &e_u[0]);
                emlrtAssign(&e_y, m26);
                c_st.site = &vk_emlrtRSI;
                g_error(&c_st, message(&c_st, e_y, &h_emlrtMCI), &h_emlrtMCI);
              }
            }

            if ((y_sizes_idx_1 == 1) || (tmp_sizes[1] == 1)) {
              y_sizes[0] = b_index;
              y_sizes[1] = tmp_sizes[0];
              for (i85 = 0; i85 < b_index; i85++) {
                b_loop_ub = tmp_sizes[0];
                for (i86 = 0; i86 < b_loop_ub; i86++) {
                  moduleInstance->b_y_data[i85 + b_index * i86] = 0.0;
                  for (i90 = 0; i90 < y_sizes_idx_1; i90++) {
                    moduleInstance->b_y_data[i85 + b_index * i86] +=
                      moduleInstance->y_data[i85 + b_index * i90] *
                      moduleInstance->b_data[i90 + result * i86];
                  }
                }
              }
            } else {
              y_sizes[0] = (int16_T)b_index;
              y_sizes[1] = (int16_T)tmp_sizes[0];
              b_loop_ub = (int16_T)tmp_sizes[0];
              for (i85 = 0; i85 < b_loop_ub; i85++) {
                c_loop_ub = (int16_T)b_index;
                for (i86 = 0; i86 < c_loop_ub; i86++) {
                  moduleInstance->b_y_data[i86 + (int16_T)b_index * i85] = 0.0;
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
                      &moduleInstance->y_data[0], &lda_t,
                      &moduleInstance->b_data[0], &ldb_t, &beta1,
                      &moduleInstance->b_y_data[0], &ldc_t);
              }
            }

            st.site = &qk_emlrtRSI;
            for (i85 = 0; i85 < 9; i85++) {
              b[i85] = obj->Ql[i85];
            }

            result = (int8_T)tmp_sizes[0];
            for (i85 = 0; i85 < 3; i85++) {
              for (i86 = 0; i86 < result; i86++) {
                o_C_data[i86 + result * i85] = 0.0;
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
              dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &lm_cnt, &G_data[0],
                    &lda_t, &b[0], &ldb_t, &beta1, &o_C_data[0], &ldc_t);
            }

            st.site = &qk_emlrtRSI;
            b_loop_ub = tmp_sizes[0];
            for (i85 = 0; i85 < b_loop_ub; i85++) {
              for (i86 = 0; i86 < 3; i86++) {
                g_b_data[i86 + 3 * i85] = G_data[i85 + G_sizes_idx_0 * i86];
              }
            }

            C_sizes[0] = (int8_T)tmp_sizes[0];
            C_sizes[1] = (int16_T)tmp_sizes[0];
            b_loop_ub = (int16_T)tmp_sizes[0];
            for (i85 = 0; i85 < b_loop_ub; i85++) {
              c_loop_ub = C_sizes[0];
              for (i86 = 0; i86 < c_loop_ub; i86++) {
                moduleInstance->h_C_data[i86 + C_sizes[0] * i85] = 0.0;
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
              dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &lm_cnt, &o_C_data[0],
                    &lda_t, &g_b_data[0], &ldb_t, &beta1,
                    &moduleInstance->h_C_data[0], &ldc_t);
            }

            for (i85 = 0; i85 < 2; i85++) {
              H_sizes[i85] = y_sizes[i85];
              N_sizes[i85] = C_sizes[i85];
            }

            emlrtSizeEqCheckNDR2012b(H_sizes, N_sizes, &q_emlrtECI, sp);
            b_y_sizes[0] = y_sizes[0];
            b_y_sizes[1] = y_sizes[1];
            b_loop_ub = y_sizes[0] * y_sizes[1];
            for (i85 = 0; i85 < b_loop_ub; i85++) {
              moduleInstance->f_y_data[i85] = moduleInstance->b_y_data[i85] +
                moduleInstance->h_C_data[i85];
            }

            st.site = &qk_emlrtRSI;
            c_RIEKF_Store_Covariance(moduleInstance, &st, obj,
              moduleInstance->f_y_data, b_y_sizes);
          }
        }
      }

      if (guard1) {
        covrtLogMcdc(moduleInstance->covInst, 0, 0, 17, true);
        covrtLogIf(moduleInstance->covInst, 0, 0, 26, true);
        covrtLogBasicBlock(moduleInstance->covInst, 0, 53);
      }

      i++;
      cgxertListenForCtrlC(moduleInstance->S);
    }

    covrtLogFor(moduleInstance->covInst, 0, 0, 6, 0);
  }
}

static real_T sum(boolean_T x[10])
{
  real_T y;
  int32_T k;
  y = (real_T)x[0];
  for (k = 0; k < 9; k++) {
    y += (real_T)x[k + 1];
  }

  return y;
}

static void d_RIEKF_Update_State(InstanceStruct_F1Scry3smjzFxDJqc88Zr
  *moduleInstance, const emlrtStack *sp, RIEKF *obj, real_T Y_data[], int32_T
  Y_sizes, real_T g_b_data[], int32_T b_sizes, real_T b_H_data[], int32_T
  H_sizes[2], real_T c_N_data[], int32_T N_sizes[2], real_T c_PI_data[], int32_T
  PI_sizes[2])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  int32_T tmp_sizes[2];
  int32_T Xa_sizes[2];
  int32_T loop_ub;
  int32_T i91;
  real_T Pa_data[2601];
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
  static const int32_T iv153[2] = { 1, 21 };

  static const int32_T iv154[2] = { 1, 45 };

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
  static const int32_T iv155[2] = { 1, 21 };

  static const int32_T iv156[2] = { 1, 45 };

  int32_T dX_sizes[2];
  int32_T K_sizes[2];
  int32_T b_y_sizes[2];
  const mxArray *e_y;
  char_T e_u[21];
  const mxArray *f_y;
  char_T f_u[45];
  static const int32_T iv157[2] = { 1, 21 };

  static const int32_T iv158[2] = { 1, 45 };

  int32_T c_y_sizes[2];
  real_T Ydim;
  static char_T cv58[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
    't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F',
    'a', 'i', 'l', 'e', 'd' };

  int8_T n_tmp_data[17];
  int32_T iv159[2];
  const mxArray *g_y;
  char_T g_u[21];
  const mxArray *h_y;
  char_T h_u[45];
  int8_T o_tmp_data[17];
  static const int32_T iv160[2] = { 1, 21 };

  static const int32_T iv161[2] = { 1, 45 };

  real_T o_C_data[121];
  real_T Z_data[121];
  int32_T C_sizes_idx_0;
  int32_T C_sizes_idx_1;
  const mxArray *i_y;
  char_T i_u[21];
  const mxArray *j_y;
  char_T j_u[45];
  static const int32_T iv162[2] = { 1, 21 };

  static const int32_T iv163[2] = { 1, 45 };

  real_T h_b_data[400];
  const mxArray *k_y;
  char_T k_u[21];
  const mxArray *l_y;
  char_T l_u[45];
  static const int32_T iv164[2] = { 1, 21 };

  static const int32_T iv165[2] = { 1, 45 };

  real_T delta_data[121];
  int32_T iv166[2];
  real_T b_delta_data[45];
  real_T dX_data[324];
  real_T dtheta[6];
  const mxArray *m_y;
  char_T m_u[21];
  const mxArray *n_y;
  char_T n_u[45];
  static const int32_T iv167[2] = { 1, 21 };

  static const int32_T iv168[2] = { 1, 45 };

  int8_T p_tmp_data[10];
  int32_T iv169[2];
  int32_T b_Xa_sizes[2];
  real_T Pa[2];
  int32_T I_sizes[2];
  real_T I_data[2601];
  int32_T C_sizes[2];
  const mxArray *o_y;
  char_T o_u[21];
  const mxArray *p_y;
  char_T p_u[45];
  static const int32_T iv170[2] = { 1, 21 };

  static const int32_T iv171[2] = { 1, 45 };

  int32_T b_C_sizes[2];
  const mxArray *q_y;
  char_T q_u[21];
  const mxArray *r_y;
  char_T r_u[45];
  static const int32_T iv172[2] = { 1, 21 };

  static const int32_T iv173[2] = { 1, 45 };

  const mxArray *s_y;
  char_T s_u[21];
  const mxArray *t_y;
  char_T t_u[45];
  static const int32_T iv174[2] = { 1, 21 };

  static const int32_T iv175[2] = { 1, 45 };

  int32_T c_C_sizes[2];
  const mxArray *u_y;
  char_T u_u[21];
  const mxArray *v_y;
  char_T v_u[45];
  static const int32_T iv176[2] = { 1, 21 };

  static const int32_T iv177[2] = { 1, 45 };

  const mxArray *w_y;
  char_T w_u[21];
  const mxArray *x_y;
  char_T x_u[45];
  static const int32_T iv178[2] = { 1, 21 };

  static const int32_T iv179[2] = { 1, 45 };

  int32_T d_C_sizes[2];
  const mxArray *y_y;
  char_T y_u[21];
  const mxArray *ab_y;
  char_T ab_u[45];
  static const int32_T iv180[2] = { 1, 21 };

  static const int32_T iv181[2] = { 1, 45 };

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
  RIEKF_Augmented_Covariance(moduleInstance, &st, obj, Pa_data, Pa_sizes);
  st.site = &lf_emlrtRSI;
  loop_ub = H_sizes[0] * H_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->b_a_data[i91] = b_H_data[i91];
  }

  loop_ub = Pa_sizes[0] * Pa_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->b_b_data[i91] = Pa_data[i91];
  }

  b_st.site = &he_emlrtRSI;
  if (!(H_sizes[1] == Pa_sizes[0])) {
    if (((H_sizes[0] == 1) && (H_sizes[1] == 1)) || ((Pa_sizes[0] == 1) &&
         (Pa_sizes[1] == 1))) {
      for (i91 = 0; i91 < 45; i91++) {
        b_u[i91] = cv57[i91];
      }

      b_y = NULL;
      m27 = emlrtCreateCharArray(2, iv154);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &b_u[0]);
      emlrtAssign(&b_y, m27);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, b_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        u[i91] = cv56[i91];
      }

      y = NULL;
      m27 = emlrtCreateCharArray(2, iv153);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &u[0]);
      emlrtAssign(&y, m27);
      c_st.site = &vk_emlrtRSI;
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
          moduleInstance->c_y_data[i91 + y_sizes_idx_0 * i92] += b_H_data[i91 +
            H_sizes[0] * i93] * Pa_data[i93 + Pa_sizes[0] * i92];
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
      moduleInstance->b_b_data[i92 + b_sizes_idx_0 * i91] = b_H_data[i91 +
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
      m27 = emlrtCreateCharArray(2, iv156);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &d_u[0]);
      emlrtAssign(&d_y, m27);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, d_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        c_u[i91] = cv56[i91];
      }

      c_y = NULL;
      m27 = emlrtCreateCharArray(2, iv155);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &c_u[0]);
      emlrtAssign(&c_y, m27);
      c_st.site = &vk_emlrtRSI;
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
    moduleInstance->b_a_data[i91] = Pa_data[i91];
  }

  b_sizes_idx_0 = H_sizes[1];
  loop_ub = H_sizes[0];
  for (i91 = 0; i91 < loop_ub; i91++) {
    b_loop_ub = H_sizes[1];
    for (i92 = 0; i92 < b_loop_ub; i92++) {
      moduleInstance->b_b_data[i92 + b_sizes_idx_0 * i91] = b_H_data[i91 +
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
      m27 = emlrtCreateCharArray(2, iv158);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &f_u[0]);
      emlrtAssign(&f_y, m27);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, f_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        e_u[i91] = cv56[i91];
      }

      e_y = NULL;
      m27 = emlrtCreateCharArray(2, iv157);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &e_u[0]);
      emlrtAssign(&e_y, m27);
      c_st.site = &vk_emlrtRSI;
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
          moduleInstance->e_y_data[i91 + b_y_sizes[0] * i92] += Pa_data[i91 +
            Pa_sizes[0] * i93] * moduleInstance->b_b_data[i93 + b_sizes_idx_0 *
            i92];
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
    moduleInstance->g_y_data[i91] = moduleInstance->d_y_data[i91] + c_N_data[i91];
  }

  st.site = &mf_emlrtRSI;
  c_mrdivide(moduleInstance, &st, moduleInstance->e_y_data, b_y_sizes,
             moduleInstance->g_y_data, c_y_sizes, moduleInstance->K_data,
             K_sizes);

  /*  Copy X along the diagonals if more than one measurement */
  /*  TODO: find better way to do this */
  Xdim = 7.0 + obj->num_landmarks;
  Ydim = (real_T)Y_sizes / Xdim;
  if (!(Ydim < 10.0)) {
    st.site = &xk_emlrtRSI;
    g_error(&st, message(&st, b_emlrt_marshallOut(&st, cv58), &i_emlrtMCI),
            &i_emlrtMCI);
  }

  if (!(Xdim < 17.0)) {
    st.site = &wk_emlrtRSI;
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

  emlrtDimSizeGeqCheckR2012b(170, loop_ub, &g_emlrtECI, sp);
  emlrtDimSizeGeqCheckR2012b(170, b_loop_ub, &h_emlrtECI, sp);
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
      n_tmp_data[i91] = (int8_T)((int8_T)emlrtDynamicBoundsCheckR2012b(i92, 1,
        loop_ub, &xc_emlrtBCI, sp) - 1);
    }

    alpha1 = Xdim * ((1.0 + (real_T)y_sizes_idx_0) - 1.0);
    c_loop_ub = (int32_T)muDoubleScalarFloor(Xdim - 1.0);
    for (i91 = 0; i91 <= c_loop_ub; i91++) {
      i92 = (int8_T)emlrtIntegerCheckR2012b(alpha1 + (1.0 + (real_T)i91),
        &ub_emlrtDCI, sp);
      o_tmp_data[i91] = (int8_T)((int8_T)emlrtDynamicBoundsCheckR2012b(i92, 1,
        b_loop_ub, &yc_emlrtBCI, sp) - 1);
    }

    iv159[0] = (int32_T)muDoubleScalarFloor(Xdim - 1.0) + 1;
    iv159[1] = (int32_T)muDoubleScalarFloor(Xdim - 1.0) + 1;
    emlrtSubAssignSizeCheckR2012b(iv159, 2, Xa_sizes, 2, &i_emlrtECI, sp);
    c_loop_ub = Xa_sizes[1];
    for (i91 = 0; i91 < c_loop_ub; i91++) {
      y_sizes_idx_1 = Xa_sizes[0];
      for (i92 = 0; i92 < y_sizes_idx_1; i92++) {
        moduleInstance->BigX_data[n_tmp_data[i92] + loop_ub * o_tmp_data[i91]] =
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
      m27 = emlrtCreateCharArray(2, iv161);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &h_u[0]);
      emlrtAssign(&h_y, m27);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, h_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        g_u[i91] = cv56[i91];
      }

      g_y = NULL;
      m27 = emlrtCreateCharArray(2, iv160);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &g_u[0]);
      emlrtAssign(&g_y, m27);
      c_st.site = &vk_emlrtRSI;
      g_error(&c_st, message(&c_st, g_y, &h_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((b_loop_ub == 1) || (Y_sizes == 1)) {
    y_sizes_idx_1 = loop_ub;
    for (i91 = 0; i91 < loop_ub; i91++) {
      o_C_data[i91] = 0.0;
      for (i92 = 0; i92 < b_loop_ub; i92++) {
        o_C_data[i91] += moduleInstance->BigX_data[i91 + loop_ub * i92] *
          Y_data[i92];
      }
    }
  } else {
    y_sizes_idx_0 = (int8_T)loop_ub;
    y_sizes_idx_1 = (int8_T)loop_ub;
    for (i91 = 0; i91 < y_sizes_idx_0; i91++) {
      o_C_data[i91] = 0.0;
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
            &o_C_data[0], &ldc_t);
    }
  }

  emlrtSizeEqCheck1DR2012b(y_sizes_idx_1, b_sizes, &j_emlrtECI, sp);
  for (i91 = 0; i91 < y_sizes_idx_1; i91++) {
    Z_data[i91] = o_C_data[i91] - g_b_data[i91];
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
      m27 = emlrtCreateCharArray(2, iv163);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &j_u[0]);
      emlrtAssign(&j_y, m27);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, j_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        i_u[i91] = cv56[i91];
      }

      i_y = NULL;
      m27 = emlrtCreateCharArray(2, iv162);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &i_u[0]);
      emlrtAssign(&i_y, m27);
      c_st.site = &vk_emlrtRSI;
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
    h_b_data[i91] = o_C_data[i91] - g_b_data[i91];
  }

  b_st.site = &he_emlrtRSI;
  if (!(C_sizes_idx_1 == y_sizes_idx_1)) {
    if (((C_sizes_idx_0 == 1) && (C_sizes_idx_1 == 1)) || (y_sizes_idx_1 == 1))
    {
      for (i91 = 0; i91 < 45; i91++) {
        l_u[i91] = cv57[i91];
      }

      l_y = NULL;
      m27 = emlrtCreateCharArray(2, iv165);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &l_u[0]);
      emlrtAssign(&l_y, m27);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, l_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        k_u[i91] = cv56[i91];
      }

      k_y = NULL;
      m27 = emlrtCreateCharArray(2, iv164);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &k_u[0]);
      emlrtAssign(&k_y, m27);
      c_st.site = &vk_emlrtRSI;
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

  emlrtDimSizeGeqCheckR2012b(51, y_sizes_idx_1, &k_emlrtECI, sp);
  if (1 > y_sizes_idx_1 - 6) {
    loop_ub = 0;
  } else {
    emlrtDynamicBoundsCheckR2012b(1, 1, y_sizes_idx_1, &qc_emlrtBCI, sp);
    loop_ub = emlrtDynamicBoundsCheckR2012b(y_sizes_idx_1 - 6, 1, y_sizes_idx_1,
      &qc_emlrtBCI, sp);
  }

  iv166[0] = 1;
  iv166[1] = loop_ub;
  st.site = &pf_emlrtRSI;
  indexShapeCheck(&st, y_sizes_idx_1, iv166);
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
      m27 = emlrtCreateCharArray(2, iv168);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &n_u[0]);
      emlrtAssign(&n_y, m27);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, n_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        m_u[i91] = cv56[i91];
      }

      m_y = NULL;
      m27 = emlrtCreateCharArray(2, iv167);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &m_u[0]);
      emlrtAssign(&m_y, m27);
      c_st.site = &vk_emlrtRSI;
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
    i93 = emlrtDynamicBoundsCheckR2012b(i93, 1, 10, &sc_emlrtBCI, sp);
  }

  loop_ub = (int8_T)((int8_T)i93 - 1);
  for (y_sizes_idx_0 = 0; y_sizes_idx_0 <= loop_ub; y_sizes_idx_0++) {
    p_tmp_data[y_sizes_idx_0] = (int8_T)y_sizes_idx_0;
  }

  for (y_sizes_idx_0 = 0; y_sizes_idx_0 < 3; y_sizes_idx_0++) {
    emlrtDynamicBoundsCheckR2012b(y_sizes_idx_0 + 1, 1, Xa_sizes[0],
      &wc_emlrtBCI, sp);
  }

  iv169[0] = 3;
  iv169[1] = (int8_T)((int8_T)i93 - 1) + 1;
  b_Xa_sizes[0] = 3;
  b_Xa_sizes[1] = i92 - i91;
  for (i93 = 0; i93 < 2; i93++) {
    dX_sizes[i93] = b_Xa_sizes[i93];
  }

  emlrtSubAssignSizeCheckR2012b(iv169, 2, dX_sizes, 2, &l_emlrtECI, sp);
  loop_ub = i92 - i91;
  for (i92 = 0; i92 < loop_ub; i92++) {
    for (i93 = 0; i93 < 3; i93++) {
      obj->landmarks[i93 + 3 * p_tmp_data[i92]] = moduleInstance->Xa_data[i93 +
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
    I_data[i91] = moduleInstance->b_tmp_data[i91];
  }

  st.site = &tf_emlrtRSI;
  loop_ub = K_sizes[0] * K_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->b_a_data[i91] = moduleInstance->K_data[i91];
  }

  loop_ub = H_sizes[0] * H_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->b_b_data[i91] = b_H_data[i91];
  }

  b_st.site = &he_emlrtRSI;
  if (!(K_sizes[1] == H_sizes[0])) {
    if (((K_sizes[0] == 1) && (K_sizes[1] == 1)) || ((H_sizes[0] == 1) &&
         (H_sizes[1] == 1))) {
      for (i91 = 0; i91 < 45; i91++) {
        p_u[i91] = cv57[i91];
      }

      p_y = NULL;
      m27 = emlrtCreateCharArray(2, iv171);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &p_u[0]);
      emlrtAssign(&p_y, m27);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, p_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        o_u[i91] = cv56[i91];
      }

      o_y = NULL;
      m27 = emlrtCreateCharArray(2, iv170);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &o_u[0]);
      emlrtAssign(&o_y, m27);
      c_st.site = &vk_emlrtRSI;
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
            moduleInstance->K_data[i91 + K_sizes[0] * i93] * b_H_data[i93 +
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
    moduleInstance->b_b_data[i91] = b_H_data[i91];
  }

  b_st.site = &he_emlrtRSI;
  if (!(K_sizes[1] == H_sizes[0])) {
    if (((K_sizes[0] == 1) && (K_sizes[1] == 1)) || ((H_sizes[0] == 1) &&
         (H_sizes[1] == 1))) {
      for (i91 = 0; i91 < 45; i91++) {
        r_u[i91] = cv57[i91];
      }

      r_y = NULL;
      m27 = emlrtCreateCharArray(2, iv173);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &r_u[0]);
      emlrtAssign(&r_y, m27);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, r_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        q_u[i91] = cv56[i91];
      }

      q_y = NULL;
      m27 = emlrtCreateCharArray(2, iv172);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &q_u[0]);
      emlrtAssign(&q_y, m27);
      c_st.site = &vk_emlrtRSI;
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
            moduleInstance->K_data[i91 + K_sizes[0] * i93] * b_H_data[i93 +
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
    moduleInstance->b_C_data[i91] = I_data[i91] - moduleInstance->b_C_data[i91];
  }

  loop_ub = Pa_sizes[0] * Pa_sizes[1];
  for (i91 = 0; i91 < loop_ub; i91++) {
    moduleInstance->b_b_data[i91] = Pa_data[i91];
  }

  b_st.site = &he_emlrtRSI;
  if (!(tmp_sizes[1] == Pa_sizes[0])) {
    if (((tmp_sizes[0] == 1) && (tmp_sizes[1] == 1)) || ((Pa_sizes[0] == 1) &&
         (Pa_sizes[1] == 1))) {
      for (i91 = 0; i91 < 45; i91++) {
        t_u[i91] = cv57[i91];
      }

      t_y = NULL;
      m27 = emlrtCreateCharArray(2, iv175);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &t_u[0]);
      emlrtAssign(&t_y, m27);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, t_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        s_u[i91] = cv56[i91];
      }

      s_y = NULL;
      m27 = emlrtCreateCharArray(2, iv174);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &s_u[0]);
      emlrtAssign(&s_y, m27);
      c_st.site = &vk_emlrtRSI;
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
            moduleInstance->b_C_data[i91 + tmp_sizes[0] * i93] * Pa_data[i93 +
            Pa_sizes[0] * i92];
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
      moduleInstance->b_b_data[i92 + b_sizes_idx_0 * i91] = I_data[i91 +
        I_sizes[0] * i92] - moduleInstance->c_C_data[i91 + b_C_sizes[0] * i92];
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
      m27 = emlrtCreateCharArray(2, iv177);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &v_u[0]);
      emlrtAssign(&v_y, m27);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, v_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        u_u[i91] = cv56[i91];
      }

      u_y = NULL;
      m27 = emlrtCreateCharArray(2, iv176);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &u_u[0]);
      emlrtAssign(&u_y, m27);
      c_st.site = &vk_emlrtRSI;
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
    moduleInstance->b_b_data[i91] = c_N_data[i91];
  }

  b_st.site = &he_emlrtRSI;
  if (!(K_sizes[1] == N_sizes[0])) {
    if (((K_sizes[0] == 1) && (K_sizes[1] == 1)) || ((N_sizes[0] == 1) &&
         (N_sizes[1] == 1))) {
      for (i91 = 0; i91 < 45; i91++) {
        x_u[i91] = cv57[i91];
      }

      x_y = NULL;
      m27 = emlrtCreateCharArray(2, iv179);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &x_u[0]);
      emlrtAssign(&x_y, m27);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, x_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        w_u[i91] = cv56[i91];
      }

      w_y = NULL;
      m27 = emlrtCreateCharArray(2, iv178);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &w_u[0]);
      emlrtAssign(&w_y, m27);
      c_st.site = &vk_emlrtRSI;
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
            moduleInstance->K_data[i91 + K_sizes[0] * i93] * c_N_data[i93 +
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
      m27 = emlrtCreateCharArray(2, iv181);
      emlrtInitCharArrayR2013a(&b_st, 45, m27, &ab_u[0]);
      emlrtAssign(&ab_y, m27);
      c_st.site = &uk_emlrtRSI;
      g_error(&c_st, message(&c_st, ab_y, &g_emlrtMCI), &g_emlrtMCI);
    } else {
      for (i91 = 0; i91 < 21; i91++) {
        y_u[i91] = cv56[i91];
      }

      y_y = NULL;
      m27 = emlrtCreateCharArray(2, iv180);
      emlrtInitCharArrayR2013a(&b_st, 21, m27, &y_u[0]);
      emlrtAssign(&y_y, m27);
      c_st.site = &vk_emlrtRSI;
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
  static const int32_T iv182[2] = { 1, 45 };

  y = NULL;
  m28 = emlrtCreateCharArray(2, iv182);
  emlrtInitCharArrayR2013a(sp, 45, m28, &u[0]);
  emlrtAssign(&y, m28);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [30])
{
  const mxArray *y;
  const mxArray *m29;
  static const int32_T iv183[2] = { 1, 30 };

  y = NULL;
  m29 = emlrtCreateCharArray(2, iv183);
  emlrtInitCharArrayR2013a(sp, 30, m29, &u[0]);
  emlrtAssign(&y, m29);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const char_T u[4])
{
  const mxArray *y;
  const mxArray *m30;
  static const int32_T iv184[2] = { 1, 4 };

  y = NULL;
  m30 = emlrtCreateCharArray(2, iv184);
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

static void cgxe_mdl_start(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack b_st;
  emlrtStack c_st;
  const mxArray *m31;
  static const int32_T iv185[2] = { 0, 0 };

  static const int32_T iv186[2] = { 0, 0 };

  int32_T cond_starts_0_0[1] = { 14384 };

  int32_T cond_ends_0_0[1] = { 14404 };

  int32_T postfix_exprs_0_0[2] = { 0, -1 };

  int32_T cond_starts_0_1[2] = { 14428, 14443 };

  int32_T cond_ends_0_1[2] = { 14439, 14454 };

  int32_T postfix_exprs_0_1[3] = { 0, 1, -3 };

  int32_T cond_starts_0_2[2] = { 15553, 15564 };

  int32_T cond_ends_0_2[2] = { 15559, 15582 };

  int32_T postfix_exprs_0_2[4] = { 0, 1, -1, -3 };

  int32_T cond_starts_0_3[2] = { 15843, 15854 };

  int32_T cond_ends_0_3[2] = { 15849, 15872 };

  int32_T postfix_exprs_0_3[5] = { 0, -1, 1, -1, -2 };

  int32_T cond_starts_0_4[2] = { 20969, 20988 };

  int32_T cond_ends_0_4[2] = { 20984, 21003 };

  int32_T postfix_exprs_0_4[3] = { 0, 1, -3 };

  int32_T cond_starts_0_5[2] = { 24259, 24291 };

  int32_T cond_ends_0_5[2] = { 24287, 24321 };

  int32_T postfix_exprs_0_5[3] = { 0, 1, -2 };

  int32_T cond_starts_0_6[1] = { 24495 };

  int32_T cond_ends_0_6[1] = { 24506 };

  int32_T postfix_exprs_0_6[2] = { 0, -1 };

  int32_T cond_starts_0_7[2] = { 25078, 25110 };

  int32_T cond_ends_0_7[2] = { 25106, 25140 };

  int32_T postfix_exprs_0_7[3] = { 0, 1, -2 };

  int32_T cond_starts_0_8[1] = { 25314 };

  int32_T cond_ends_0_8[1] = { 25325 };

  int32_T postfix_exprs_0_8[2] = { 0, -1 };

  int32_T cond_starts_0_9[1] = { 25983 };

  int32_T cond_ends_0_9[1] = { 25993 };

  int32_T postfix_exprs_0_9[2] = { 0, -1 };

  int32_T cond_starts_0_10[2] = { 26568, 26600 };

  int32_T cond_ends_0_10[2] = { 26596, 26630 };

  int32_T postfix_exprs_0_10[3] = { 0, 1, -2 };

  int32_T cond_starts_0_11[1] = { 26793 };

  int32_T cond_ends_0_11[1] = { 26804 };

  int32_T postfix_exprs_0_11[2] = { 0, -1 };

  int32_T cond_starts_0_12[2] = { 27591, 27623 };

  int32_T cond_ends_0_12[2] = { 27619, 27653 };

  int32_T postfix_exprs_0_12[3] = { 0, 1, -2 };

  int32_T cond_starts_0_13[1] = { 28941 };

  int32_T cond_ends_0_13[1] = { 28951 };

  int32_T postfix_exprs_0_13[2] = { 0, -1 };

  int32_T cond_starts_0_14[1] = { 29129 };

  int32_T cond_ends_0_14[1] = { 29151 };

  int32_T postfix_exprs_0_14[2] = { 0, -1 };

  int32_T cond_starts_0_15[2] = { 29301, 29333 };

  int32_T cond_ends_0_15[2] = { 29329, 29363 };

  int32_T postfix_exprs_0_15[3] = { 0, 1, -2 };

  int32_T cond_starts_0_16[2] = { 7455, 7467 };

  int32_T cond_ends_0_16[2] = { 7463, 7484 };

  int32_T postfix_exprs_0_16[3] = { 0, 1, -3 };

  int32_T cond_starts_0_17[1] = { 8173 };

  int32_T cond_ends_0_17[1] = { 8208 };

  int32_T postfix_exprs_0_17[2] = { 0, -1 };

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
  static const int32_T iv187[2] = { 1, 51 };

  const mxArray *b_y;
  char_T b_u[44];
  static char_T cv60[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static const int32_T iv188[2] = { 1, 44 };

  const mxArray *c_y;
  char_T c_u[5];
  static char_T cv61[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv189[2] = { 1, 5 };

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
  m31 = emlrtCreateNumericArray(2, iv185, mxDOUBLE_CLASS, mxREAL);
  emlrtAssignP(&b_eml_mx, m31);
  m31 = emlrtCreateCharArray(2, iv186);
  emlrtAssignP(&eml_mx, m31);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst,
                  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
                  "IEKF.m", 0U, 17U, 55U, 28U, 0U, 0U, 0U, 7U, 0U, 28U, 18U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst, 0U, 0U, "RIEKF_RIEKF", 27, -1, 32);
  covrtFcnInit(moduleInstance->covInst, 0U, 2U, "RIEKF_Store_Covariance", 10802,
               -1, 11441);
  covrtFcnInit(moduleInstance->covInst, 0U, 3U, "RIEKF_Augmented_Covariance",
               11459, -1, 11846);
  covrtFcnInit(moduleInstance->covInst, 0U, 4U, "RIEKF_Augmented_State", 11864,
               -1, 12136);
  covrtFcnInit(moduleInstance->covInst, 0U, 5U, "RIEKF_Separate_State", 12154,
               -1, 12650);
  covrtFcnInit(moduleInstance->covInst, 0U, 6U, "RIEKF_Construct_State", 12668,
               -1, 12947);
  covrtFcnInit(moduleInstance->covInst, 0U, 7U, "RIEKF_skew", 12965, -1, 13175);
  covrtFcnInit(moduleInstance->covInst, 0U, 8U, "RIEKF_exp", 13193, -1, 13827);
  covrtFcnInit(moduleInstance->covInst, 0U, 9U, "RIEKF_Adjoint", 13845, -1,
               14208);
  covrtFcnInit(moduleInstance->covInst, 0U, 10U, "RIEKF_InitializeBias", 14226,
               -1, 15344);
  covrtFcnInit(moduleInstance->covInst, 0U, 11U, "RIEKF_InitializeFilter", 15362,
               -1, 16238);
  covrtFcnInit(moduleInstance->covInst, 0U, 12U, "RIEKF_Predict_State", 16256,
               -1, 19145);
  covrtFcnInit(moduleInstance->covInst, 0U, 13U, "RIEKF_Update_State", 19163, -1,
               20699);
  covrtFcnInit(moduleInstance->covInst, 0U, 14U,
               "RIEKF_Update_ForwardKinematics", 20717, -1, 23763);
  covrtFcnInit(moduleInstance->covInst, 0U, 15U, "RIEKF_Update_StaticLandmarks",
               23780, -1, 26071);
  covrtFcnInit(moduleInstance->covInst, 0U, 16U, "RIEKF_Update_Landmarks", 26089,
               -1, 30590);
  covrtFcnInit(moduleInstance->covInst, 0U, 1U, "RIEKF_stepImpl", 6099, -1, 9074);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 0U, 27, -1, 32);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 8U, 10930, -1, 11428);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 9U, 11554, -1, 11833);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 10U, 11948, -1, 12123);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 11U, 12283, -1, 12616);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 12U, 12798, -1, 12934);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 13U, 13062, -1, 13162);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 17U, 13627, -1, 13814);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 16U, 13452, -1, 13597);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 15U, 13378, -1, 13417);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 14U, 13282, -1, 13334);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 19U, 14082, -1, 14179);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 18U, 13931, -1, 14040);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 22U, 15288, -1, 15315);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 21U, 15030, -1, 15181);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 20U, 14641, -1, 14894);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 24U, 15889, -1, 16196);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 23U, 15599, -1, 15755);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 25U, 16404, -1, 19132);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 28U, 20080, -1, 20652);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 27U, 19981, -1, 20050);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 26U, 19318, -1, 19936);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 32U, 23103, -1, 23704);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 31U, 22375, -1, 22994);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 30U, 21054, -1, 22253);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 29U, 20916, -1, 20939);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 41U, 26010, -1, 26042);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 40U, 25393, -1, 25884);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 39U, 25225, -1, 25292);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 38U, 25161, -1, 25169);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 37U, 24596, -1, 24834);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 36U, 24527, -1, 24546);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 35U, 24406, -1, 24473);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 34U, 24342, -1, 24350);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 33U, 23985, -1, 24189);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 54U, 29602, -1, 30504);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 53U, 29388, -1, 29396);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 52U, 29168, -1, 29228);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 51U, 28968, -1, 29036);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 50U, 27976, -1, 28842);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 49U, 27846, -1, 27933);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 48U, 27738, -1, 27792);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 47U, 27674, -1, 27682);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 46U, 26894, -1, 27339);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 45U, 26825, -1, 26844);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 44U, 26715, -1, 26771);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 43U, 26651, -1, 26659);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 42U, 26290, -1, 26498);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 7U, 8627, -1, 9060);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 6U, 8427, -1, 8467);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 5U, 8322, -1, 8368);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 4U, 8028, -1, 8075);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 3U, 7747, -1, 7841);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 2U, 7502, -1, 7538);
  covrtBasicBlockInit(moduleInstance->covInst, 0U, 1U, 7302, -1, 7334);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst, 0U, 5U, 13348, 13361, 13431, 13614);
  covrtIfInit(moduleInstance->covInst, 0U, 6U, 14330, 14363, 15267, 15332);
  covrtIfInit(moduleInstance->covInst, 0U, 7U, 14380, 14404, -1, 15254);
  covrtIfInit(moduleInstance->covInst, 0U, 8U, 14425, 14454, -1, 15234);
  covrtIfInit(moduleInstance->covInst, 0U, 9U, 14503, 14552, 14920, 15210);
  covrtIfInit(moduleInstance->covInst, 0U, 10U, 15550, 15582, -1, 15772);
  covrtIfInit(moduleInstance->covInst, 0U, 11U, 15839, 15872, -1, 16213);
  covrtIfInit(moduleInstance->covInst, 0U, 12U, 20966, 21003, 22292, 22314);
  covrtIfInit(moduleInstance->covInst, 0U, 13U, 22292, 22314, 23025, 23738);
  covrtIfInit(moduleInstance->covInst, 0U, 14U, 23025, 23047, -1, 23047);
  covrtIfInit(moduleInstance->covInst, 0U, 15U, 24256, 24321, 24491, 24567);
  covrtIfInit(moduleInstance->covInst, 0U, 16U, 24491, 24506, -1, 24567);
  covrtIfInit(moduleInstance->covInst, 0U, 17U, 25075, 25140, 25310, 25905);
  covrtIfInit(moduleInstance->covInst, 0U, 18U, 25310, 25325, -1, 25905);
  covrtIfInit(moduleInstance->covInst, 0U, 19U, 25979, 25993, -1, 26059);
  covrtIfInit(moduleInstance->covInst, 0U, 20U, 26565, 26630, 26789, 26865);
  covrtIfInit(moduleInstance->covInst, 0U, 21U, 26789, 26804, -1, 26865);
  covrtIfInit(moduleInstance->covInst, 0U, 22U, 27588, 27653, 27811, 28863);
  covrtIfInit(moduleInstance->covInst, 0U, 23U, 27811, 27825, 27951, 28863);
  covrtIfInit(moduleInstance->covInst, 0U, 24U, 28937, 28951, -1, 29053);
  covrtIfInit(moduleInstance->covInst, 0U, 25U, 29125, 29151, -1, 30565);
  covrtIfInit(moduleInstance->covInst, 0U, 26U, 29298, 29363, 29460, 30529);
  covrtIfInit(moduleInstance->covInst, 0U, 27U, 29460, 29500, -1, 30529);
  covrtIfInit(moduleInstance->covInst, 0U, 0U, 7452, 7484, -1, 7555);
  covrtIfInit(moduleInstance->covInst, 0U, 1U, 7625, 7646, -1, 8569);
  covrtIfInit(moduleInstance->covInst, 0U, 2U, 7910, 7935, -1, 8540);
  covrtIfInit(moduleInstance->covInst, 0U, 3U, 8169, 8208, -1, 8520);
  covrtIfInit(moduleInstance->covInst, 0U, 4U, 8263, 8293, 8394, 8496);

  /* Initialize MCDC Information */
  covrtMcdcInit(moduleInstance->covInst, 0U, 2U, 14383, 14404, 1, 0,
                cond_starts_0_0, cond_ends_0_0, 2, postfix_exprs_0_0);
  covrtMcdcInit(moduleInstance->covInst, 0U, 3U, 14428, 14454, 2, 1,
                cond_starts_0_1, cond_ends_0_1, 3, postfix_exprs_0_1);
  covrtMcdcInit(moduleInstance->covInst, 0U, 4U, 15553, 15582, 2, 3,
                cond_starts_0_2, cond_ends_0_2, 4, postfix_exprs_0_2);
  covrtMcdcInit(moduleInstance->covInst, 0U, 5U, 15842, 15872, 2, 5,
                cond_starts_0_3, cond_ends_0_3, 5, postfix_exprs_0_3);
  covrtMcdcInit(moduleInstance->covInst, 0U, 6U, 20969, 21003, 2, 7,
                cond_starts_0_4, cond_ends_0_4, 3, postfix_exprs_0_4);
  covrtMcdcInit(moduleInstance->covInst, 0U, 7U, 24259, 24321, 2, 9,
                cond_starts_0_5, cond_ends_0_5, 3, postfix_exprs_0_5);
  covrtMcdcInit(moduleInstance->covInst, 0U, 8U, 24494, 24506, 1, 11,
                cond_starts_0_6, cond_ends_0_6, 2, postfix_exprs_0_6);
  covrtMcdcInit(moduleInstance->covInst, 0U, 9U, 25078, 25140, 2, 12,
                cond_starts_0_7, cond_ends_0_7, 3, postfix_exprs_0_7);
  covrtMcdcInit(moduleInstance->covInst, 0U, 10U, 25313, 25325, 1, 14,
                cond_starts_0_8, cond_ends_0_8, 2, postfix_exprs_0_8);
  covrtMcdcInit(moduleInstance->covInst, 0U, 11U, 25982, 25993, 1, 15,
                cond_starts_0_9, cond_ends_0_9, 2, postfix_exprs_0_9);
  covrtMcdcInit(moduleInstance->covInst, 0U, 12U, 26568, 26630, 2, 16,
                cond_starts_0_10, cond_ends_0_10, 3, postfix_exprs_0_10);
  covrtMcdcInit(moduleInstance->covInst, 0U, 13U, 26792, 26804, 1, 18,
                cond_starts_0_11, cond_ends_0_11, 2, postfix_exprs_0_11);
  covrtMcdcInit(moduleInstance->covInst, 0U, 14U, 27591, 27653, 2, 19,
                cond_starts_0_12, cond_ends_0_12, 3, postfix_exprs_0_12);
  covrtMcdcInit(moduleInstance->covInst, 0U, 15U, 28940, 28951, 1, 21,
                cond_starts_0_13, cond_ends_0_13, 2, postfix_exprs_0_13);
  covrtMcdcInit(moduleInstance->covInst, 0U, 16U, 29128, 29151, 1, 22,
                cond_starts_0_14, cond_ends_0_14, 2, postfix_exprs_0_14);
  covrtMcdcInit(moduleInstance->covInst, 0U, 17U, 29301, 29363, 2, 23,
                cond_starts_0_15, cond_ends_0_15, 3, postfix_exprs_0_15);
  covrtMcdcInit(moduleInstance->covInst, 0U, 0U, 7455, 7484, 2, 25,
                cond_starts_0_16, cond_ends_0_16, 3, postfix_exprs_0_16);
  covrtMcdcInit(moduleInstance->covInst, 0U, 1U, 8172, 8208, 1, 27,
                cond_starts_0_17, cond_ends_0_17, 2, postfix_exprs_0_17);

  /* Initialize For Information */
  covrtForInit(moduleInstance->covInst, 0U, 0U, 14054, 14066, 14196);
  covrtForInit(moduleInstance->covInst, 0U, 1U, 19950, 19965, 20067);
  covrtForInit(moduleInstance->covInst, 0U, 2U, 24203, 24240, 24583);
  covrtForInit(moduleInstance->covInst, 0U, 3U, 24913, 24950, 25921);
  covrtForInit(moduleInstance->covInst, 0U, 4U, 26512, 26549, 26881);
  covrtForInit(moduleInstance->covInst, 0U, 5U, 27425, 27462, 28879);
  covrtForInit(moduleInstance->covInst, 0U, 6U, 29246, 29278, 30549);

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
    m31 = emlrtCreateCharArray(2, iv187);
    emlrtInitCharArrayR2013a(&b_st, 51, m31, &u[0]);
    emlrtAssign(&y, m31);
    for (i = 0; i < 5; i++) {
      c_u[i] = cv61[i];
    }

    c_y = NULL;
    m31 = emlrtCreateCharArray(2, iv189);
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
    m31 = emlrtCreateCharArray(2, iv188);
    emlrtInitCharArrayR2013a(&c_st, 44, m31, &b_u[0]);
    emlrtAssign(&b_y, m31);
    g_error(&c_st, message(&c_st, b_y, &b_emlrtMCI), &b_emlrtMCI);
  }

  obj->TunablePropsChanged = false;
}

static void cgxe_mdl_initialize(InstanceStruct_F1Scry3smjzFxDJqc88Zr
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
  static const int32_T iv190[2] = { 1, 45 };

  const mxArray *b_y;
  char_T b_u[45];
  static const int32_T iv191[2] = { 1, 45 };

  const mxArray *c_y;
  char_T c_u[8];
  static char_T cv63[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  static const int32_T iv192[2] = { 1, 8 };

  const mxArray *d_y;
  char_T d_u[44];
  static char_T cv64[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static const int32_T iv193[2] = { 1, 44 };

  const mxArray *e_y;
  char_T e_u[5];
  static char_T cv65[5] = { 'r', 'e', 's', 'e', 't' };

  static const int32_T iv194[2] = { 1, 5 };

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
    m32 = emlrtCreateCharArray(2, iv190);
    emlrtInitCharArrayR2013a(&b_st, 45, m32, &u[0]);
    emlrtAssign(&y, m32);
    for (i = 0; i < 8; i++) {
      c_u[i] = cv63[i];
    }

    c_y = NULL;
    m32 = emlrtCreateCharArray(2, iv192);
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
      m32 = emlrtCreateCharArray(2, iv191);
      emlrtInitCharArrayR2013a(&b_st, 45, m32, &b_u[0]);
      emlrtAssign(&b_y, m32);
      for (i = 0; i < 5; i++) {
        e_u[i] = cv65[i];
      }

      e_y = NULL;
      m32 = emlrtCreateCharArray(2, iv194);
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
      m32 = emlrtCreateCharArray(2, iv193);
      emlrtInitCharArrayR2013a(&b_st, 44, m32, &d_u[0]);
      emlrtAssign(&d_y, m32);
      g_error(&b_st, message(&b_st, d_y, &b_emlrtMCI), &b_emlrtMCI);
    }
  }
}

static void cgxe_mdl_outputs(InstanceStruct_F1Scry3smjzFxDJqc88Zr
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
  real_T varargin_21;
  real_T varargin_22;
  real_T varargin_23[3];
  real_T varargin_24[3];
  real_T varargin_25[14];
  real_T varargin_26[2];
  real_T varargin_27[40];
  real_T varargin_28[49];
  real_T dv8[3];
  real_T dv9[14];
  real_T dv10[6];
  real_T dv11[4];
  real_T varargout_1[49];
  real_T varargout_3[441];
  real_T varargout_4;
  real_T varargout_5[40];
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

  varargin_21 = *moduleInstance->u0;
  varargin_22 = *moduleInstance->u1;
  for (i = 0; i < 3; i++) {
    varargin_23[i] = (*moduleInstance->u2)[i];
    varargin_24[i] = (*moduleInstance->u3)[i];
  }

  for (i = 0; i < 14; i++) {
    varargin_25[i] = (*moduleInstance->u4)[i];
  }

  for (i = 0; i < 2; i++) {
    varargin_26[i] = (*moduleInstance->u5)[i];
  }

  for (i = 0; i < 40; i++) {
    varargin_27[i] = (*moduleInstance->u6)[i];
  }

  for (i = 0; i < 49; i++) {
    varargin_28[i] = (*moduleInstance->u7)[i];
  }

  if (!moduleInstance->sysobj_not_empty) {
    b_st.site = &g_emlrtRSI;
    RIEKF_RIEKF(moduleInstance, &moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
    b_st.site = &h_emlrtRSI;
    SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    moduleInstance->sysobj.static_bias_initialization =
      *static_bias_initialization;
    b_st.site = &i_emlrtRSI;
    b_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    moduleInstance->sysobj.ekf_update_enabled = *ekf_update_enabled;
    b_st.site = &j_emlrtRSI;
    c_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    moduleInstance->sysobj.enable_bias_estimation = *enable_bias_estimation;
    b_st.site = &k_emlrtRSI;
    d_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    moduleInstance->sysobj.enable_static_landmarks = *enable_static_landmarks;
    b_st.site = &l_emlrtRSI;
    e_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_noise_std[i] = varargin_5[i];
    }

    b_st.site = &m_emlrtRSI;
    f_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_noise_std[i] = varargin_6[i];
    }

    b_st.site = &n_emlrtRSI;
    g_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_noise_std[i] = varargin_7[i];
    }

    b_st.site = &o_emlrtRSI;
    h_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_noise_std[i] = varargin_8[i];
    }

    b_st.site = &p_emlrtRSI;
    i_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.contact_noise_std[i] = varargin_9[i];
    }

    b_st.site = &q_emlrtRSI;
    j_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 14; i++) {
      moduleInstance->sysobj.encoder_noise_std[i] = varargin_10[i];
    }

    b_st.site = &r_emlrtRSI;
    k_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.landmark_noise_std[i] = varargin_11[i];
    }

    b_st.site = &s_emlrtRSI;
    l_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_init[i] = varargin_12[i];
    }

    b_st.site = &t_emlrtRSI;
    m_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_init[i] = varargin_13[i];
    }

    b_st.site = &u_emlrtRSI;
    n_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 6; i++) {
      moduleInstance->sysobj.prior_base_pose_std[i] = varargin_14[i];
    }

    b_st.site = &v_emlrtRSI;
    o_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_base_velocity_std[i] = varargin_15[i];
    }

    b_st.site = &w_emlrtRSI;
    p_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_contact_position_std[i] = varargin_16[i];
    }

    b_st.site = &x_emlrtRSI;
    q_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_gyro_bias_std[i] = varargin_17[i];
    }

    b_st.site = &y_emlrtRSI;
    r_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_accel_bias_std[i] = varargin_18[i];
    }

    b_st.site = &ab_emlrtRSI;
    s_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_forward_kinematics_std[i] = varargin_19[i];
    }

    b_st.site = &bb_emlrtRSI;
    t_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 4; i++) {
      moduleInstance->sysobj.landmark_positions[i] = varargin_20[i];
    }
  }

  if (!isequal(moduleInstance->sysobj.static_bias_initialization,
               *static_bias_initialization)) {
    b_st.site = &wb_emlrtRSI;
    SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    moduleInstance->sysobj.static_bias_initialization =
      *static_bias_initialization;
  }

  if (!isequal(moduleInstance->sysobj.ekf_update_enabled, *ekf_update_enabled))
  {
    b_st.site = &xb_emlrtRSI;
    b_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    moduleInstance->sysobj.ekf_update_enabled = *ekf_update_enabled;
  }

  if (!isequal(moduleInstance->sysobj.enable_bias_estimation,
               *enable_bias_estimation)) {
    b_st.site = &yb_emlrtRSI;
    c_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    moduleInstance->sysobj.enable_bias_estimation = *enable_bias_estimation;
  }

  if (!isequal(moduleInstance->sysobj.enable_static_landmarks,
               *enable_static_landmarks)) {
    b_st.site = &ac_emlrtRSI;
    d_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    moduleInstance->sysobj.enable_static_landmarks = *enable_static_landmarks;
  }

  for (i = 0; i < 3; i++) {
    dv8[i] = moduleInstance->sysobj.gyro_noise_std[i];
  }

  if (!b_isequal(dv8, varargin_5)) {
    b_st.site = &bc_emlrtRSI;
    e_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_noise_std[i] = varargin_5[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv8[i] = moduleInstance->sysobj.gyro_bias_noise_std[i];
  }

  if (!b_isequal(dv8, varargin_6)) {
    b_st.site = &cc_emlrtRSI;
    f_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_noise_std[i] = varargin_6[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv8[i] = moduleInstance->sysobj.accel_noise_std[i];
  }

  if (!b_isequal(dv8, varargin_7)) {
    b_st.site = &dc_emlrtRSI;
    g_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_noise_std[i] = varargin_7[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv8[i] = moduleInstance->sysobj.accel_bias_noise_std[i];
  }

  if (!b_isequal(dv8, varargin_8)) {
    b_st.site = &ec_emlrtRSI;
    h_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_noise_std[i] = varargin_8[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv8[i] = moduleInstance->sysobj.contact_noise_std[i];
  }

  if (!b_isequal(dv8, varargin_9)) {
    b_st.site = &fc_emlrtRSI;
    i_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.contact_noise_std[i] = varargin_9[i];
    }
  }

  for (i = 0; i < 14; i++) {
    dv9[i] = moduleInstance->sysobj.encoder_noise_std[i];
  }

  if (!c_isequal(dv9, varargin_10)) {
    b_st.site = &gc_emlrtRSI;
    j_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 14; i++) {
      moduleInstance->sysobj.encoder_noise_std[i] = varargin_10[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv8[i] = moduleInstance->sysobj.landmark_noise_std[i];
  }

  if (!b_isequal(dv8, varargin_11)) {
    b_st.site = &hc_emlrtRSI;
    k_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.landmark_noise_std[i] = varargin_11[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv8[i] = moduleInstance->sysobj.gyro_bias_init[i];
  }

  if (!b_isequal(dv8, varargin_12)) {
    b_st.site = &ic_emlrtRSI;
    l_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_init[i] = varargin_12[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv8[i] = moduleInstance->sysobj.accel_bias_init[i];
  }

  if (!b_isequal(dv8, varargin_13)) {
    b_st.site = &jc_emlrtRSI;
    m_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_init[i] = varargin_13[i];
    }
  }

  for (i = 0; i < 6; i++) {
    dv10[i] = moduleInstance->sysobj.prior_base_pose_std[i];
  }

  if (!d_isequal(dv10, varargin_14)) {
    b_st.site = &kc_emlrtRSI;
    n_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 6; i++) {
      moduleInstance->sysobj.prior_base_pose_std[i] = varargin_14[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv8[i] = moduleInstance->sysobj.prior_base_velocity_std[i];
  }

  if (!b_isequal(dv8, varargin_15)) {
    b_st.site = &lc_emlrtRSI;
    o_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_base_velocity_std[i] = varargin_15[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv8[i] = moduleInstance->sysobj.prior_contact_position_std[i];
  }

  if (!b_isequal(dv8, varargin_16)) {
    b_st.site = &mc_emlrtRSI;
    p_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_contact_position_std[i] = varargin_16[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv8[i] = moduleInstance->sysobj.prior_gyro_bias_std[i];
  }

  if (!b_isequal(dv8, varargin_17)) {
    b_st.site = &nc_emlrtRSI;
    q_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_gyro_bias_std[i] = varargin_17[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv8[i] = moduleInstance->sysobj.prior_accel_bias_std[i];
  }

  if (!b_isequal(dv8, varargin_18)) {
    b_st.site = &oc_emlrtRSI;
    r_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_accel_bias_std[i] = varargin_18[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv8[i] = moduleInstance->sysobj.prior_forward_kinematics_std[i];
  }

  if (!b_isequal(dv8, varargin_19)) {
    b_st.site = &pc_emlrtRSI;
    s_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_forward_kinematics_std[i] = varargin_19[i];
    }
  }

  for (i = 0; i < 4; i++) {
    dv11[i] = moduleInstance->sysobj.landmark_positions[i];
  }

  if (!e_isequal(dv11, varargin_20)) {
    b_st.site = &qc_emlrtRSI;
    t_SystemProp_matlabCodegenNotifyAnyProp(&moduleInstance->sysobj);
    for (i = 0; i < 4; i++) {
      moduleInstance->sysobj.landmark_positions[i] = varargin_20[i];
    }
  }

  b_st.site = &rc_emlrtRSI;
  SystemCore_step(moduleInstance, &b_st, &moduleInstance->sysobj, varargin_21,
                  varargin_22, varargin_23, varargin_24, varargin_25,
                  varargin_26, varargin_27, varargin_28, varargout_1,
                  varargin_14, varargout_3, &varargout_4, varargout_5);
  for (i = 0; i < 49; i++) {
    (*moduleInstance->b_y0)[i] = varargout_1[i];
  }

  for (i = 0; i < 6; i++) {
    (*moduleInstance->b_y1)[i] = varargin_14[i];
  }

  for (i = 0; i < 441; i++) {
    (*moduleInstance->y2)[i] = varargout_3[i];
  }

  *moduleInstance->y3 = varargout_4;
  for (i = 0; i < 40; i++) {
    (*moduleInstance->y4)[i] = varargout_5[i];
  }
}

static void cgxe_mdl_update(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_F1Scry3smjzFxDJqc88Zr
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
  static const int32_T iv195[2] = { 1, 45 };

  const mxArray *b_y;
  char_T b_u[45];
  static const int32_T iv196[2] = { 1, 45 };

  const mxArray *c_y;
  char_T c_u[8];
  static char_T cv67[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  static const int32_T iv197[2] = { 1, 8 };

  const mxArray *d_y;
  char_T d_u[7];
  static char_T cv68[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  static const int32_T iv198[2] = { 1, 7 };

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

  b_st.site = &rk_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = cv66[i];
    }

    y = NULL;
    m33 = emlrtCreateCharArray(2, iv195);
    emlrtInitCharArrayR2013a(&b_st, 45, m33, &u[0]);
    emlrtAssign(&y, m33);
    for (i = 0; i < 8; i++) {
      c_u[i] = cv67[i];
    }

    c_y = NULL;
    m33 = emlrtCreateCharArray(2, iv197);
    emlrtInitCharArrayR2013a(&b_st, 8, m33, &c_u[0]);
    emlrtAssign(&c_y, m33);
    g_error(&b_st, b_message(&b_st, y, c_y, &b_emlrtMCI), &b_emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    b_st.site = &sk_emlrtRSI;
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i = 0; i < 45; i++) {
        b_u[i] = cv66[i];
      }

      b_y = NULL;
      m33 = emlrtCreateCharArray(2, iv196);
      emlrtInitCharArrayR2013a(&b_st, 45, m33, &b_u[0]);
      emlrtAssign(&b_y, m33);
      for (i = 0; i < 7; i++) {
        d_u[i] = cv68[i];
      }

      d_y = NULL;
      m33 = emlrtCreateCharArray(2, iv198);
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
  static const int32_T iv199[1] = { 3 };

  real_T *pData;
  int32_T i;
  y = NULL;
  m36 = emlrtCreateNumericArray(1, iv199, mxDOUBLE_CLASS, mxREAL);
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
  static const int32_T iv200[1] = { 14 };

  real_T *pData;
  int32_T i;
  y = NULL;
  m37 = emlrtCreateNumericArray(1, iv200, mxDOUBLE_CLASS, mxREAL);
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
  static const int32_T iv201[1] = { 6 };

  real_T *pData;
  int32_T i;
  y = NULL;
  m38 = emlrtCreateNumericArray(1, iv201, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m38);
  for (i = 0; i < 6; i++) {
    pData[i] = u[i];
  }

  emlrtAssign(&y, m38);
  return y;
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance)
{
  const mxArray *st;
  const mxArray *y;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m39;
  const mxArray *d_y;
  const mxArray *e_y;
  static const int32_T iv202[1] = { 3 };

  real_T *pData;
  int32_T i;
  const mxArray *f_y;
  static const int32_T iv203[1] = { 3 };

  const mxArray *g_y;
  static const int32_T iv204[1] = { 3 };

  const mxArray *h_y;
  static const int32_T iv205[1] = { 3 };

  const mxArray *i_y;
  static const int32_T iv206[1] = { 4 };

  const mxArray *j_y;
  static const int32_T iv207[2] = { 7, 7 };

  const mxArray *k_y;
  static const int32_T iv208[2] = { 3, 10 };

  const mxArray *l_y;
  static const int32_T iv209[1] = { 6 };

  const mxArray *m_y;
  static const int32_T iv210[2] = { 15, 15 };

  const mxArray *n_y;
  static const int32_T iv211[2] = { 30, 30 };

  const mxArray *o_y;
  static const int32_T iv212[2] = { 15, 30 };

  const mxArray *p_y;
  static const int32_T iv213[2] = { 6, 6 };

  const mxArray *q_y;
  static const int32_T iv214[2] = { 15, 6 };

  const mxArray *r_y;
  static const int32_T iv215[2] = { 30, 6 };

  const mxArray *s_y;
  const mxArray *t_y;
  const mxArray *u_y;
  static const int32_T iv216[1] = { 3 };

  const mxArray *v_y;
  static const int32_T iv217[1] = { 3 };

  const mxArray *w_y;
  static const int32_T iv218[2] = { 3, 1000 };

  const mxArray *x_y;
  static const int32_T iv219[2] = { 3, 1000 };

  const mxArray *y_y;
  const mxArray *ab_y;
  static const int32_T iv220[1] = { 3 };

  const mxArray *bb_y;
  static const int32_T iv221[1] = { 3 };

  const mxArray *cb_y;
  static const int32_T iv222[1] = { 14 };

  const mxArray *db_y;
  static const int32_T iv223[1] = { 2 };

  const mxArray *eb_y;
  const mxArray *fb_y;
  static const int32_T iv224[2] = { 1, 10 };

  const mxArray *gb_y;
  const mxArray *hb_y;
  static const int32_T iv225[2] = { 3, 3 };

  const mxArray *ib_y;
  static const int32_T iv226[2] = { 3, 3 };

  const mxArray *jb_y;
  static const int32_T iv227[2] = { 3, 3 };

  const mxArray *kb_y;
  static const int32_T iv228[2] = { 3, 3 };

  const mxArray *lb_y;
  static const int32_T iv229[2] = { 3, 3 };

  const mxArray *mb_y;
  static const int32_T iv230[2] = { 14, 14 };

  const mxArray *nb_y;
  static const int32_T iv231[2] = { 3, 3 };

  const mxArray *ob_y;
  static const int32_T iv232[2] = { 3, 3 };

  const mxArray *pb_y;
  static const int32_T iv233[2] = { 21, 21 };

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
  m39 = emlrtCreateNumericArray(1, iv202, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.prior_contact_position_std[i];
  }

  emlrtAssign(&e_y, m39);
  emlrtAddField(b_y, e_y, "prior_contact_position_std", 0);
  f_y = NULL;
  m39 = emlrtCreateNumericArray(1, iv203, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.prior_gyro_bias_std[i];
  }

  emlrtAssign(&f_y, m39);
  emlrtAddField(b_y, f_y, "prior_gyro_bias_std", 0);
  g_y = NULL;
  m39 = emlrtCreateNumericArray(1, iv204, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.prior_accel_bias_std[i];
  }

  emlrtAssign(&g_y, m39);
  emlrtAddField(b_y, g_y, "prior_accel_bias_std", 0);
  h_y = NULL;
  m39 = emlrtCreateNumericArray(1, iv205, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.prior_forward_kinematics_std[i];
  }

  emlrtAssign(&h_y, m39);
  emlrtAddField(b_y, h_y, "prior_forward_kinematics_std", 0);
  i_y = NULL;
  m39 = emlrtCreateNumericArray(1, iv206, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 4; i++) {
    pData[i] = moduleInstance->sysobj.landmark_positions[i];
  }

  emlrtAssign(&i_y, m39);
  emlrtAddField(b_y, i_y, "landmark_positions", 0);
  j_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv207, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 49; i++) {
    pData[i] = moduleInstance->sysobj.X[i];
  }

  emlrtAssign(&j_y, m39);
  emlrtAddField(b_y, j_y, "X", 0);
  k_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv208, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 30; i++) {
    pData[i] = moduleInstance->sysobj.landmarks[i];
  }

  emlrtAssign(&k_y, m39);
  emlrtAddField(b_y, k_y, "landmarks", 0);
  l_y = NULL;
  m39 = emlrtCreateNumericArray(1, iv209, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 6; i++) {
    pData[i] = moduleInstance->sysobj.theta[i];
  }

  emlrtAssign(&l_y, m39);
  emlrtAddField(b_y, l_y, "theta", 0);
  m_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv210, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 225; i++) {
    pData[i] = moduleInstance->sysobj.Pxx[i];
  }

  emlrtAssign(&m_y, m39);
  emlrtAddField(b_y, m_y, "Pxx", 0);
  n_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv211, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 900; i++) {
    pData[i] = moduleInstance->sysobj.Pll[i];
  }

  emlrtAssign(&n_y, m39);
  emlrtAddField(b_y, n_y, "Pll", 0);
  o_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv212, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 450; i++) {
    pData[i] = moduleInstance->sysobj.Pxl[i];
  }

  emlrtAssign(&o_y, m39);
  emlrtAddField(b_y, o_y, "Pxl", 0);
  p_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv213, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 36; i++) {
    pData[i] = moduleInstance->sysobj.Ptt[i];
  }

  emlrtAssign(&p_y, m39);
  emlrtAddField(b_y, p_y, "Ptt", 0);
  q_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv214, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 90; i++) {
    pData[i] = moduleInstance->sysobj.Pxt[i];
  }

  emlrtAssign(&q_y, m39);
  emlrtAddField(b_y, q_y, "Pxt", 0);
  r_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv215, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 180; i++) {
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
  m39 = emlrtCreateNumericArray(1, iv216, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.ba0[i];
  }

  emlrtAssign(&u_y, m39);
  emlrtAddField(b_y, u_y, "ba0", 0);
  v_y = NULL;
  m39 = emlrtCreateNumericArray(1, iv217, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.bg0[i];
  }

  emlrtAssign(&v_y, m39);
  emlrtAddField(b_y, v_y, "bg0", 0);
  w_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv218, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 3000; i++) {
    pData[i] = moduleInstance->sysobj.a_init_vec[i];
  }

  emlrtAssign(&w_y, m39);
  emlrtAddField(b_y, w_y, "a_init_vec", 0);
  x_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv219, mxDOUBLE_CLASS, mxREAL);
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
  m39 = emlrtCreateNumericArray(1, iv220, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.w_prev[i];
  }

  emlrtAssign(&ab_y, m39);
  emlrtAddField(b_y, ab_y, "w_prev", 0);
  bb_y = NULL;
  m39 = emlrtCreateNumericArray(1, iv221, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.a_prev[i];
  }

  emlrtAssign(&bb_y, m39);
  emlrtAddField(b_y, bb_y, "a_prev", 0);
  cb_y = NULL;
  m39 = emlrtCreateNumericArray(1, iv222, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 14; i++) {
    pData[i] = moduleInstance->sysobj.encoders_prev[i];
  }

  emlrtAssign(&cb_y, m39);
  emlrtAddField(b_y, cb_y, "encoders_prev", 0);
  db_y = NULL;
  m39 = emlrtCreateNumericArray(1, iv223, mxDOUBLE_CLASS, mxREAL);
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
  m39 = emlrtCreateNumericArray(2, iv224, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 10; i++) {
    pData[i] = moduleInstance->sysobj.landmark_ids[i];
  }

  emlrtAssign(&fb_y, m39);
  emlrtAddField(b_y, fb_y, "landmark_ids", 0);
  gb_y = NULL;
  m39 = emlrtCreateDoubleScalar(moduleInstance->sysobj.num_landmarks);
  emlrtAssign(&gb_y, m39);
  emlrtAddField(b_y, gb_y, "num_landmarks", 0);
  hb_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv225, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 9; i++) {
    pData[i] = moduleInstance->sysobj.Qg[i];
  }

  emlrtAssign(&hb_y, m39);
  emlrtAddField(b_y, hb_y, "Qg", 0);
  ib_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv226, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 9; i++) {
    pData[i] = moduleInstance->sysobj.Qbg[i];
  }

  emlrtAssign(&ib_y, m39);
  emlrtAddField(b_y, ib_y, "Qbg", 0);
  jb_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv227, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 9; i++) {
    pData[i] = moduleInstance->sysobj.Qa[i];
  }

  emlrtAssign(&jb_y, m39);
  emlrtAddField(b_y, jb_y, "Qa", 0);
  kb_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv228, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 9; i++) {
    pData[i] = moduleInstance->sysobj.Qba[i];
  }

  emlrtAssign(&kb_y, m39);
  emlrtAddField(b_y, kb_y, "Qba", 0);
  lb_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv229, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 9; i++) {
    pData[i] = moduleInstance->sysobj.Qc[i];
  }

  emlrtAssign(&lb_y, m39);
  emlrtAddField(b_y, lb_y, "Qc", 0);
  mb_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv230, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 196; i++) {
    pData[i] = moduleInstance->sysobj.Qe[i];
  }

  emlrtAssign(&mb_y, m39);
  emlrtAddField(b_y, mb_y, "Qe", 0);
  nb_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv231, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 9; i++) {
    pData[i] = moduleInstance->sysobj.Ql[i];
  }

  emlrtAssign(&nb_y, m39);
  emlrtAddField(b_y, nb_y, "Ql", 0);
  ob_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv232, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m39);
  for (i = 0; i < 9; i++) {
    pData[i] = moduleInstance->sysobj.Np[i];
  }

  emlrtAssign(&ob_y, m39);
  emlrtAddField(b_y, ob_y, "Np", 0);
  pb_y = NULL;
  m39 = emlrtCreateNumericArray(2, iv233, mxDOUBLE_CLASS, mxREAL);
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
  static const char * fieldNames[54] = { "isInitialized", "TunablePropsChanged",
    "static_bias_initialization", "ekf_update_enabled", "enable_bias_estimation",
    "enable_static_landmarks", "gyro_noise_std", "gyro_bias_noise_std",
    "accel_noise_std", "accel_bias_noise_std", "contact_noise_std",
    "encoder_noise_std", "landmark_noise_std", "gyro_bias_init",
    "accel_bias_init", "prior_base_pose_std", "prior_base_velocity_std",
    "prior_contact_position_std", "prior_gyro_bias_std", "prior_accel_bias_std",
    "prior_forward_kinematics_std", "landmark_positions", "X", "landmarks",
    "theta", "Pxx", "Pll", "Pxl", "Ptt", "Pxt", "Plt", "filter_enabled",
    "bias_initialized", "ba0", "bg0", "a_init_vec", "w_init_vec",
    "imu_init_count", "w_prev", "a_prev", "encoders_prev", "contact_prev",
    "t_prev", "landmark_ids", "num_landmarks", "Qg", "Qbg", "Qa", "Qba", "Qc",
    "Qe", "Ql", "Np", "P_prior" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 54, fieldNames, 0U, &dims);
  thisId.fIdentifier = "isInitialized";
  y->isInitialized = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u,
    0, "isInitialized")), &thisId);
  thisId.fIdentifier = "TunablePropsChanged";
  y->TunablePropsChanged = f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a
    (sp, u, 0, "TunablePropsChanged")), &thisId);
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
  emlrtMsgIdentifier *parentId, real_T y[30])
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
  emlrtMsgIdentifier *parentId, real_T y[900])
{
  lb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[450])
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
  emlrtMsgIdentifier *parentId, real_T y[180])
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
  emlrtMsgIdentifier *parentId, real_T y[10])
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

static void cgxe_mdl_set_sim_state(InstanceStruct_F1Scry3smjzFxDJqc88Zr
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

  int32_T i94;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  for (i94 = 0; i94 < 3; i94++) {
    ret[i94] = (*(real_T (*)[3])mxGetData(src))[i94];
  }

  emlrtDestroyArray(&src);
}

static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[14])
{
  static const int32_T dims[1] = { 14 };

  int32_T i95;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  for (i95 = 0; i95 < 14; i95++) {
    ret[i95] = (*(real_T (*)[14])mxGetData(src))[i95];
  }

  emlrtDestroyArray(&src);
}

static void gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[6])
{
  static const int32_T dims[1] = { 6 };

  int32_T i96;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  for (i96 = 0; i96 < 6; i96++) {
    ret[i96] = (*(real_T (*)[6])mxGetData(src))[i96];
  }

  emlrtDestroyArray(&src);
}

static void hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[4])
{
  static const int32_T dims[1] = { 4 };

  int32_T i97;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  for (i97 = 0; i97 < 4; i97++) {
    ret[i97] = (*(real_T (*)[4])mxGetData(src))[i97];
  }

  emlrtDestroyArray(&src);
}

static void ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[49])
{
  static const int32_T dims[2] = { 7, 7 };

  int32_T i98;
  int32_T i99;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i98 = 0; i98 < 7; i98++) {
    for (i99 = 0; i99 < 7; i99++) {
      ret[i99 + 7 * i98] = (*(real_T (*)[49])mxGetData(src))[i99 + 7 * i98];
    }
  }

  emlrtDestroyArray(&src);
}

static void jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[30])
{
  static const int32_T dims[2] = { 3, 10 };

  int32_T i100;
  int32_T i101;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i100 = 0; i100 < 10; i100++) {
    for (i101 = 0; i101 < 3; i101++) {
      ret[i101 + 3 * i100] = (*(real_T (*)[30])mxGetData(src))[i101 + 3 * i100];
    }
  }

  emlrtDestroyArray(&src);
}

static void kb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[225])
{
  static const int32_T dims[2] = { 15, 15 };

  int32_T i102;
  int32_T i103;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i102 = 0; i102 < 15; i102++) {
    for (i103 = 0; i103 < 15; i103++) {
      ret[i103 + 15 * i102] = (*(real_T (*)[225])mxGetData(src))[i103 + 15 *
        i102];
    }
  }

  emlrtDestroyArray(&src);
}

static void lb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[900])
{
  static const int32_T dims[2] = { 30, 30 };

  int32_T i104;
  int32_T i105;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i104 = 0; i104 < 30; i104++) {
    for (i105 = 0; i105 < 30; i105++) {
      ret[i105 + 30 * i104] = (*(real_T (*)[900])mxGetData(src))[i105 + 30 *
        i104];
    }
  }

  emlrtDestroyArray(&src);
}

static void mb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[450])
{
  static const int32_T dims[2] = { 15, 30 };

  int32_T i106;
  int32_T i107;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i106 = 0; i106 < 30; i106++) {
    for (i107 = 0; i107 < 15; i107++) {
      ret[i107 + 15 * i106] = (*(real_T (*)[450])mxGetData(src))[i107 + 15 *
        i106];
    }
  }

  emlrtDestroyArray(&src);
}

static void nb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[36])
{
  static const int32_T dims[2] = { 6, 6 };

  int32_T i108;
  int32_T i109;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i108 = 0; i108 < 6; i108++) {
    for (i109 = 0; i109 < 6; i109++) {
      ret[i109 + 6 * i108] = (*(real_T (*)[36])mxGetData(src))[i109 + 6 * i108];
    }
  }

  emlrtDestroyArray(&src);
}

static void ob_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[90])
{
  static const int32_T dims[2] = { 15, 6 };

  int32_T i110;
  int32_T i111;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i110 = 0; i110 < 6; i110++) {
    for (i111 = 0; i111 < 15; i111++) {
      ret[i111 + 15 * i110] = (*(real_T (*)[90])mxGetData(src))[i111 + 15 * i110];
    }
  }

  emlrtDestroyArray(&src);
}

static void pb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[180])
{
  static const int32_T dims[2] = { 30, 6 };

  int32_T i112;
  int32_T i113;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i112 = 0; i112 < 6; i112++) {
    for (i113 = 0; i113 < 30; i113++) {
      ret[i113 + 30 * i112] = (*(real_T (*)[180])mxGetData(src))[i113 + 30 *
        i112];
    }
  }

  emlrtDestroyArray(&src);
}

static void qb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[3000])
{
  static const int32_T dims[2] = { 3, 1000 };

  int32_T i114;
  int32_T i115;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i114 = 0; i114 < 1000; i114++) {
    for (i115 = 0; i115 < 3; i115++) {
      ret[i115 + 3 * i114] = (*(real_T (*)[3000])mxGetData(src))[i115 + 3 * i114];
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

  int32_T i116;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  for (i116 = 0; i116 < 2; i116++) {
    ret[i116] = (*(real_T (*)[2])mxGetData(src))[i116];
  }

  emlrtDestroyArray(&src);
}

static void tb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[10])
{
  static const int32_T dims[2] = { 1, 10 };

  int32_T i117;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i117 = 0; i117 < 10; i117++) {
    ret[i117] = (*(real_T (*)[10])mxGetData(src))[i117];
  }

  emlrtDestroyArray(&src);
}

static void ub_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[9])
{
  static const int32_T dims[2] = { 3, 3 };

  int32_T i118;
  int32_T i119;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i118 = 0; i118 < 3; i118++) {
    for (i119 = 0; i119 < 3; i119++) {
      ret[i119 + 3 * i118] = (*(real_T (*)[9])mxGetData(src))[i119 + 3 * i118];
    }
  }

  emlrtDestroyArray(&src);
}

static void vb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[196])
{
  static const int32_T dims[2] = { 14, 14 };

  int32_T i120;
  int32_T i121;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i120 = 0; i120 < 14; i120++) {
    for (i121 = 0; i121 < 14; i121++) {
      ret[i121 + 14 * i120] = (*(real_T (*)[196])mxGetData(src))[i121 + 14 *
        i120];
    }
  }

  emlrtDestroyArray(&src);
}

static void wb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[441])
{
  static const int32_T dims[2] = { 21, 21 };

  int32_T i122;
  int32_T i123;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i122 = 0; i122 < 21; i122++) {
    for (i123 = 0; i123 < 21; i123++) {
      ret[i123 + 21 * i122] = (*(real_T (*)[441])mxGetData(src))[i123 + 21 *
        i122];
    }
  }

  emlrtDestroyArray(&src);
}

static void b_RIEKF_RIEKF(InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance,
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
  c_st.site = &d_emlrtRSI;
  c_st.site = &d_emlrtRSI;
  c_st.site = &d_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &f_emlrtRSI;
}

static void xgetrf(const emlrtStack *sp, int32_T m, int32_T n, real_T c_A_data[],
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
  static const int32_T iv234[2] = { 1, 15 };

  st.prev = sp;
  st.tls = sp->tls;
  st.site = &oh_emlrtRSI;
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

    b_st.site = &qh_emlrtRSI;
    c_st.site = &rh_emlrtRSI;
    if ((int8_T)varargin_1 != varargin_1) {
      for (minval = 0; minval < 15; minval++) {
        u[minval] = cv69[minval];
      }

      y = NULL;
      m46 = emlrtCreateCharArray(2, iv234);
      emlrtInitCharArrayR2013a(&b_st, 15, m46, &u[0]);
      emlrtAssign(&y, m46);
      c_st.site = &tk_emlrtRSI;
      g_error(&c_st, y, &r_emlrtMCI);
    }

    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)m, (ptrdiff_t)n, &c_A_data[0],
      (ptrdiff_t)lda, &ipiv_t_data[0]);
    *info = (int32_T)info_t;
    ipiv_sizes[0] = 1;
    ipiv_sizes[1] = (int8_T)varargin_1;
    b_st.site = &ph_emlrtRSI;
    if (*info < 0) {
      if (*info == -1010) {
        c_st.site = &sh_emlrtRSI;
        c_error(&c_st);
      } else {
        c_st.site = &th_emlrtRSI;
        d_error(&c_st, *info);
      }
    }

    for (minval = 0; minval < (int8_T)varargin_1; minval++) {
      ipiv_data[minval] = (int32_T)ipiv_t_data[minval];
    }
  }
}

static void xtrsm(int32_T m, int32_T n, real_T c_A_data[], int32_T lda, real_T
                  c_B_data[], int32_T ldb)
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
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, &alpha1, &c_A_data[0],
          &lda_t, &c_B_data[0], &ldb_t);
  }
}

static void b_xtrsm(int32_T m, int32_T n, real_T c_A_data[], int32_T lda, real_T
                    c_B_data[], int32_T ldb)
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
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, &alpha1, &c_A_data[0],
          &lda_t, &c_B_data[0], &ldb_t);
  }
}

static void xgeqp3(const emlrtStack *sp, real_T c_A_data[], int32_T A_sizes[2],
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
  int32_T i124;
  ptrdiff_t m_t;
  ptrdiff_t jpvt_t_data[60];
  ptrdiff_t info_t;
  int32_T info;
  boolean_T p;
  boolean_T b_p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ki_emlrtRSI;
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
    b_st.site = &mi_emlrtRSI;
    c_st.site = &xh_emlrtRSI;
    d_st.site = &yh_emlrtRSI;
    e_st.site = &ai_emlrtRSI;
    eml_signed_integer_colon(&e_st, A_sizes[1], jpvt_data, jpvt_sizes);
  } else {
    *tau_sizes = muIntScalarMin_sint32(A_sizes[0], n);
    jpvt_t_sizes = A_sizes[1];
    loop_ub = A_sizes[1];
    for (i124 = 0; i124 < loop_ub; i124++) {
      jpvt_t_data[i124] = (ptrdiff_t)0;
    }

    m_t = (ptrdiff_t)A_sizes[0];
    info_t = LAPACKE_dgeqp3(102, m_t, (ptrdiff_t)A_sizes[1], &c_A_data[0], m_t,
      &jpvt_t_data[0], &tau_data[0]);
    info = (int32_T)info_t;
    b_st.site = &ni_emlrtRSI;
    if (info != 0) {
      p = true;
      b_p = false;
      if (info == -4) {
        b_p = true;
      }

      if (!b_p) {
        if (info == -1010) {
          c_st.site = &sh_emlrtRSI;
          c_error(&c_st);
        } else {
          c_st.site = &th_emlrtRSI;
          e_error(&c_st, info);
        }
      }
    } else {
      p = false;
    }

    if (p) {
      loop_ub = A_sizes[1];
      for (i124 = 0; i124 < loop_ub; i124++) {
        info = A_sizes[0];
        for (jpvt_t_sizes = 0; jpvt_t_sizes < info; jpvt_t_sizes++) {
          c_A_data[jpvt_t_sizes + A_sizes[0] * i124] = rtNaN;
        }
      }

      for (i124 = 0; i124 < *tau_sizes; i124++) {
        tau_data[i124] = rtNaN;
      }

      b_st.site = &oi_emlrtRSI;
      c_st.site = &xh_emlrtRSI;
      d_st.site = &yh_emlrtRSI;
      e_st.site = &ai_emlrtRSI;
      eml_signed_integer_colon(&e_st, n, jpvt_data, jpvt_sizes);
    } else {
      jpvt_sizes[0] = 1;
      jpvt_sizes[1] = jpvt_t_sizes;
      for (i124 = 0; i124 < jpvt_t_sizes; i124++) {
        jpvt_data[i124] = (int32_T)jpvt_t_data[i124];
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

static void init_simulink_io_address(InstanceStruct_F1Scry3smjzFxDJqc88Zr
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
  moduleInstance->u6 = (real_T (*)[40])cgxertGetInputPortSignal
    (moduleInstance->S, 6);
  moduleInstance->u7 = (real_T (*)[49])cgxertGetInputPortSignal
    (moduleInstance->S, 7);
  moduleInstance->b_y0 = (real_T (*)[49])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->b_y1 = (real_T (*)[6])cgxertGetOutputPortSignal
    (moduleInstance->S, 1);
  moduleInstance->y2 = (real_T (*)[441])cgxertGetOutputPortSignal
    (moduleInstance->S, 2);
  moduleInstance->y3 = (real_T *)cgxertGetOutputPortSignal(moduleInstance->S, 3);
  moduleInstance->y4 = (real_T (*)[40])cgxertGetOutputPortSignal
    (moduleInstance->S, 4);
}

/* CGXE Glue Code */
static void mdlOutputs_F1Scry3smjzFxDJqc88Zr(SimStruct *S, int_T tid)
{
  InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance =
    (InstanceStruct_F1Scry3smjzFxDJqc88Zr *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_F1Scry3smjzFxDJqc88Zr(SimStruct *S)
{
  InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance =
    (InstanceStruct_F1Scry3smjzFxDJqc88Zr *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_F1Scry3smjzFxDJqc88Zr(SimStruct *S, int_T tid)
{
  InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance =
    (InstanceStruct_F1Scry3smjzFxDJqc88Zr *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_F1Scry3smjzFxDJqc88Zr(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance =
    (InstanceStruct_F1Scry3smjzFxDJqc88Zr *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_F1Scry3smjzFxDJqc88Zr(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance =
    (InstanceStruct_F1Scry3smjzFxDJqc88Zr *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_F1Scry3smjzFxDJqc88Zr(SimStruct *S)
{
  InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance =
    (InstanceStruct_F1Scry3smjzFxDJqc88Zr *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlStart_F1Scry3smjzFxDJqc88Zr(SimStruct *S)
{
  InstanceStruct_F1Scry3smjzFxDJqc88Zr *moduleInstance =
    (InstanceStruct_F1Scry3smjzFxDJqc88Zr *)calloc(1, sizeof
    (InstanceStruct_F1Scry3smjzFxDJqc88Zr));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_F1Scry3smjzFxDJqc88Zr);
  ssSetmdlInitializeConditions(S, mdlInitialize_F1Scry3smjzFxDJqc88Zr);
  ssSetmdlUpdate(S, mdlUpdate_F1Scry3smjzFxDJqc88Zr);
  ssSetmdlTerminate(S, mdlTerminate_F1Scry3smjzFxDJqc88Zr);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_F1Scry3smjzFxDJqc88Zr(SimStruct *S)
{
}

void method_dispatcher_F1Scry3smjzFxDJqc88Zr(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_F1Scry3smjzFxDJqc88Zr(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_F1Scry3smjzFxDJqc88Zr(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_F1Scry3smjzFxDJqc88Zr(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_F1Scry3smjzFxDJqc88Zr(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: F1Scry3smjzFxDJqc88Zr.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_F1Scry3smjzFxDJqc88Zr_BuildInfoUpdate(void)
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

mxArray *cgxe_F1Scry3smjzFxDJqc88Zr_fallback_info(void)
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
