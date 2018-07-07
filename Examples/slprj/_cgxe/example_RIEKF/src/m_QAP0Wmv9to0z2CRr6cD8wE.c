/* Include files */

#include "modelInterface.h"
#include "m_QAP0Wmv9to0z2CRr6cD8wE.h"
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static const mxArray *eml_mx;
static const mxArray *b_eml_mx;
static emlrtRSInfo emlrtRSI = { 2,     /* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 1,   /* lineNo */
  "Propagates",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+mixin\\+coder\\Propagates.p"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 23,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 29,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 30,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 31,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 32,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 33,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 34,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 35,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 36,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 37,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 38,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 39,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 40,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 41,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 42,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 43,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 44,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 45,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 50,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 52,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 59, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 62, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 65, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 68, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 71, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 74, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 77, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 80, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 83, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 86, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 89, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 92, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 95, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 98, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 101,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 104,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 107,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 110,/* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 151,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 156,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 163,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 167,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 321,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 329,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 12, /* lineNo */
  "toLogicalCheck",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 340,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 347,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 349,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 352,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 353,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 374,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 375,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 376,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 377,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 381,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 382,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 383,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 385,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 388,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 391,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 274,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 279,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 40, /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 49, /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 61, /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 285,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 287,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 288,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 289,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 290,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 68, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 87, /* lineNo */
  "xgemm",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgemm.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 429,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 430,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 431,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 432,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 440,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 441,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 446,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 450,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 451,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 457,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 461,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 465,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 466,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 472,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 476,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 397,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 398,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 409,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 410,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 416,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 417,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 1,  /* lineNo */
  "mrdivide",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\ops\\mrdivide.p"/* pathName */
};

static emlrtRSInfo yd_emlrtRSI = { 42, /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 102,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 100,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 30, /* lineNo */
  "xgetrf",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgetrf.m"/* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 36, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 50, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 58, /* lineNo */
  "xzgetrf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgetrf.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 23, /* lineNo */
  "ixamax",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\ixamax.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 24, /* lineNo */
  "ixamax",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\ixamax.m"/* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 21, /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo je_emlrtRSI = { 45, /* lineNo */
  "xgeru",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgeru.m"/* pathName */
};

static emlrtRSInfo ke_emlrtRSI = { 45, /* lineNo */
  "xger",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xger.m"/* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 15, /* lineNo */
  "xger",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xger.m"/* pathName */
};

static emlrtRSInfo me_emlrtRSI = { 54, /* lineNo */
  "xgerx",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgerx.m"/* pathName */
};

static emlrtRSInfo ne_emlrtRSI = { 76, /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 258,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo pe_emlrtRSI = { 264,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo qe_emlrtRSI = { 265,/* lineNo */
  "RightInvariantEKF",                 /* fcnName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pathName */
};

static emlrtRSInfo re_emlrtRSI = { 48, /* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 250,/* lineNo */
  "lusolve",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\lusolve.m"/* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 54, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 55, /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 19,  /* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\error.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 87,  /* lineNo */
  15,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 14,  /* lineNo */
  25,                                  /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 14,  /* lineNo */
  9,                                   /* colNo */
  "warning",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 302,   /* lineNo */
  46,                                  /* colNo */
  "RightInvariantEKF",                 /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m",                /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  1000,                                /* iLast */
  302,                                 /* lineNo */
  46,                                  /* colNo */
  "obj.a_init_vec",                    /* aName */
  "RightInvariantEKF",                 /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m",                /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 303, /* lineNo */
  46,                                  /* colNo */
  "RightInvariantEKF",                 /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m",                /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  1000,                                /* iLast */
  303,                                 /* lineNo */
  46,                                  /* colNo */
  "obj.w_init_vec",                    /* aName */
  "RightInvariantEKF",                 /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m",                /* pName */
  3                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  404,                                 /* lineNo */
  17,                                  /* colNo */
  "RightInvariantEKF",                 /* fName */
  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
  "ightInvariantEKF.m"                 /* pName */
};

static emlrtRSInfo ve_emlrtRSI = { 87, /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 19, /* lineNo */
  "error",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\error.m"/* pathName */
};

static emlrtRSInfo xe_emlrtRSI = { 14, /* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\warning.m"/* pathName */
};

/* Function Declarations */
static RightInvariantEKF *RightInvariantEKF_RightInvariantEKF
  (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance, RightInvariantEKF *obj);
static void RightInvariantEKF_setupImpl(RightInvariantEKF *obj);
static void blkdiag(real_T varargin_1[9], real_T varargin_2[9], real_T
                    varargin_3[9], real_T varargin_4[9], real_T varargin_5[9],
                    real_T varargin_6[9], real_T varargin_7[9], real_T y[441]);
static void eye(real_T I[441]);
static void mw__internal__call__step(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance, const emlrtStack *sp, boolean_T static_bias_initialization,
  boolean_T ekf_update_enabled, boolean_T enable_bias_estimation, real_T
  gyro_noise_std[3], real_T gyro_bias_noise_std[3], real_T accel_noise_std[3],
  real_T accel_bias_noise_std[3], real_T contact_noise_std[3], real_T
  encoder_noise_std[14], real_T gyro_bias_init[3], real_T accel_bias_init[3],
  real_T prior_base_pose_std[6], real_T prior_base_velocity_std[3], real_T
  prior_contact_position_std[3], real_T prior_gyro_bias_std[3], real_T
  prior_accel_bias_std[3], real_T prior_forward_kinematics_std[3], real_T b_u0,
  real_T b_u1, real_T b_u2[3], real_T b_u3[3], real_T b_u4[14], real_T b_u5[2],
  real_T b_u6[49], real_T c_y0[49], real_T c_y1[6], real_T b_y2[441], real_T
  *b_y3);
static boolean_T isequal(boolean_T varargin_1, boolean_T varargin_2);
static boolean_T b_isequal(real_T varargin_1[3], real_T varargin_2[3]);
static boolean_T c_isequal(real_T varargin_1[14], real_T varargin_2[14]);
static boolean_T d_isequal(real_T varargin_1[6], real_T varargin_2[6]);
static void RightInvariantEKF_stepImpl(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance, const emlrtStack *sp, RightInvariantEKF *obj, real_T enable,
  real_T t, real_T w[3], real_T a[3], real_T encoders[14], real_T contact[2],
  real_T X_init[49], real_T X[49], real_T theta[6], real_T P[441], real_T
  *enabled);
static real_T norm(real_T x[3]);
static void mean(real_T x[3000], real_T y[3]);
static void error(const emlrtStack *sp);
static void RightInvariantEKF_Predict_State
  (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance, RightInvariantEKF *obj,
   real_T w[3], real_T a[3], real_T encoders[14], real_T contact[2], real_T dt);
static void RightInvariantEKF_Separate_State
  (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance, real_T X[49], real_T
   theta[6], real_T R[9], real_T v[3], real_T p[3], real_T dR[3], real_T dL[3],
   real_T bg[3], real_T ba[3]);
static void RightInvariantEKF_exp_SO3(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance, real_T w[3], real_T R[9]);
static void RightInvariantEKF_skew(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance, real_T v[3], real_T A[9]);
static void p_VectorNav_to_RightToeBottom(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *
  moduleInstance, real_T var1[14], real_T output1[3]);
static void p_VectorNav_to_LeftToeBottom(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance, real_T var1[14], real_T output1[3]);
static void b_blkdiag(real_T varargin_1[225], real_T varargin_2[36], real_T y
                      [441]);
static void b_eye(real_T I[441]);
static void RightInvariantEKF_Adjoint(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance, real_T X[49], real_T AdjX[225]);
static void R_VectorNav_to_RightToeBottom(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *
  moduleInstance, real_T var1[14], real_T output1[9]);
static void R_VectorNav_to_LeftToeBottom(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance, real_T var1[14], real_T output1[9]);
static void RightInvariantEKF_Construct_State
  (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance, real_T R[9], real_T v
   [3], real_T p[3], real_T dR[3], real_T dL[3], real_T bg[3], real_T ba[3],
   real_T X[49], real_T theta[6]);
static void RightInvariantEKF_Update_ForwardKinematics
  (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance, const emlrtStack *sp,
   RightInvariantEKF *obj, real_T encoders[14], real_T contact[2]);
static void RightInvariantEKF_Update_State(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance, const emlrtStack *sp, RightInvariantEKF *obj, real_T Y[14],
  real_T b[14], real_T N[36]);
static void check_forloop_overflow_error(const emlrtStack *sp);
static void warning(const emlrtStack *sp);
static void RightInvariantEKF_exp(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance, real_T v[15], real_T dX[49]);
static void b_RightInvariantEKF_Update_State
  (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance, const emlrtStack *sp,
   RightInvariantEKF *obj, real_T Y[7], real_T b[7], real_T H[63], real_T N[9],
   real_T PI[21]);
static void mrdivide(const emlrtStack *sp, real_T A[63], real_T B[9], real_T y
                     [63]);
static void cgxe_mdl_start(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance);
static const mxArray *emlrt_marshallOut(const int32_T u);
static const mxArray *b_emlrt_marshallOut(const real_T u[3]);
static const mxArray *c_emlrt_marshallOut(const real_T u[14]);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_sysobj,
  const char_T *identifier, RightInvariantEKF *y);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, RightInvariantEKF *y);
static int32_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[3]);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[14]);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[6]);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[49]);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[441]);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[3000]);
static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[2]);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[9]);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[196]);
static boolean_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier);
static void cgxe_mdl_set_sim_state(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance, const mxArray *st);
static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void b_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void b_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);
static int32_T p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static boolean_T q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[3]);
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[14]);
static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[6]);
static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[49]);
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[441]);
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[3000]);
static real_T x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[2]);
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[9]);
static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[196]);
static void b_RightInvariantEKF_RightInvariantEKF
  (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance, RightInvariantEKF
   **obj);
static void b_mrdivide(const emlrtStack *sp, real_T A[126], real_T B[36]);
static void init_simulink_io_address(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance);

/* Function Definitions */
static RightInvariantEKF *RightInvariantEKF_RightInvariantEKF
  (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance, RightInvariantEKF *obj)
{
  RightInvariantEKF *b_obj;
  b_obj = obj;
  b_RightInvariantEKF_RightInvariantEKF(moduleInstance, &b_obj);
  return b_obj;
}

static void RightInvariantEKF_setupImpl(RightInvariantEKF *obj)
{
  int32_T i;
  real_T a[3];
  real_T z1[3];
  real_T d[9];
  real_T b_a[14];
  real_T b_z1[14];
  real_T b_d[196];
  real_T c_d[9];
  real_T d_d[9];
  real_T e_d[9];
  real_T f_d[9];
  real_T g_d[9];
  real_T h_d[9];
  real_T y[441];
  int32_T i0;
  int8_T I[49];
  obj->filter_enabled = false;
  obj->bias_initialized = false;
  for (i = 0; i < 3000; i++) {
    obj->a_init_vec[i] = 0.0;
  }

  for (i = 0; i < 3000; i++) {
    obj->w_init_vec[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    a[i] = obj->gyro_noise_std[i];
  }

  for (i = 0; i < 3; i++) {
    z1[i] = a[i] * a[i];
  }

  for (i = 0; i < 9; i++) {
    d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    d[i + 3 * i] = z1[i];
  }

  for (i = 0; i < 9; i++) {
    obj->Qg[i] = d[i];
  }

  for (i = 0; i < 3; i++) {
    a[i] = obj->gyro_bias_noise_std[i];
  }

  for (i = 0; i < 3; i++) {
    z1[i] = a[i] * a[i];
  }

  for (i = 0; i < 9; i++) {
    d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    d[i + 3 * i] = z1[i];
  }

  for (i = 0; i < 9; i++) {
    obj->Qbg[i] = d[i];
  }

  for (i = 0; i < 3; i++) {
    a[i] = obj->accel_noise_std[i];
  }

  for (i = 0; i < 3; i++) {
    z1[i] = a[i] * a[i];
  }

  for (i = 0; i < 9; i++) {
    d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    d[i + 3 * i] = z1[i];
  }

  for (i = 0; i < 9; i++) {
    obj->Qa[i] = d[i];
  }

  for (i = 0; i < 3; i++) {
    a[i] = obj->accel_bias_noise_std[i];
  }

  for (i = 0; i < 3; i++) {
    z1[i] = a[i] * a[i];
  }

  for (i = 0; i < 9; i++) {
    d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    d[i + 3 * i] = z1[i];
  }

  for (i = 0; i < 9; i++) {
    obj->Qba[i] = d[i];
  }

  for (i = 0; i < 3; i++) {
    a[i] = obj->contact_noise_std[i];
  }

  for (i = 0; i < 3; i++) {
    z1[i] = a[i] * a[i];
  }

  for (i = 0; i < 9; i++) {
    d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    d[i + 3 * i] = z1[i];
  }

  for (i = 0; i < 9; i++) {
    obj->Qc[i] = d[i];
  }

  for (i = 0; i < 14; i++) {
    b_a[i] = obj->encoder_noise_std[i];
  }

  for (i = 0; i < 14; i++) {
    b_z1[i] = b_a[i] * b_a[i];
  }

  for (i = 0; i < 196; i++) {
    b_d[i] = 0.0;
  }

  for (i = 0; i < 14; i++) {
    b_d[i + 14 * i] = b_z1[i];
  }

  for (i = 0; i < 196; i++) {
    obj->Qe[i] = b_d[i];
  }

  for (i = 0; i < 3; i++) {
    a[i] = obj->prior_forward_kinematics_std[i];
  }

  for (i = 0; i < 3; i++) {
    z1[i] = a[i] * a[i];
  }

  for (i = 0; i < 9; i++) {
    d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    d[i + 3 * i] = z1[i];
  }

  for (i = 0; i < 9; i++) {
    obj->Np[i] = d[i];
  }

  for (i = 0; i < 3; i++) {
    a[i] = obj->prior_base_pose_std[i];
  }

  for (i = 0; i < 3; i++) {
    z1[i] = a[i] * a[i];
  }

  for (i = 0; i < 9; i++) {
    d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    d[i + 3 * i] = z1[i];
  }

  for (i = 0; i < 3; i++) {
    a[i] = obj->prior_base_velocity_std[i];
  }

  for (i = 0; i < 3; i++) {
    z1[i] = a[i] * a[i];
  }

  for (i = 0; i < 9; i++) {
    c_d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    c_d[i + 3 * i] = z1[i];
  }

  for (i = 0; i < 3; i++) {
    a[i] = obj->prior_base_pose_std[i + 3];
  }

  for (i = 0; i < 3; i++) {
    z1[i] = a[i] * a[i];
  }

  for (i = 0; i < 9; i++) {
    d_d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    d_d[i + 3 * i] = z1[i];
  }

  for (i = 0; i < 3; i++) {
    a[i] = obj->prior_contact_position_std[i];
  }

  for (i = 0; i < 3; i++) {
    z1[i] = a[i] * a[i];
  }

  for (i = 0; i < 9; i++) {
    e_d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    e_d[i + 3 * i] = z1[i];
  }

  for (i = 0; i < 3; i++) {
    a[i] = obj->prior_contact_position_std[i];
  }

  for (i = 0; i < 3; i++) {
    z1[i] = a[i] * a[i];
  }

  for (i = 0; i < 9; i++) {
    f_d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    f_d[i + 3 * i] = z1[i];
  }

  for (i = 0; i < 3; i++) {
    a[i] = obj->prior_gyro_bias_std[i];
  }

  for (i = 0; i < 3; i++) {
    z1[i] = a[i] * a[i];
  }

  for (i = 0; i < 9; i++) {
    g_d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    g_d[i + 3 * i] = z1[i];
  }

  for (i = 0; i < 3; i++) {
    a[i] = obj->prior_accel_bias_std[i];
  }

  for (i = 0; i < 3; i++) {
    z1[i] = a[i] * a[i];
  }

  for (i = 0; i < 9; i++) {
    h_d[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    h_d[i + 3 * i] = z1[i];
  }

  for (i = 0; i < 441; i++) {
    y[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    for (i0 = 0; i0 < 3; i0++) {
      y[i0 + 21 * i] = d[i0 + 3 * i];
      y[(i0 + 21 * (3 + i)) + 3] = c_d[i0 + 3 * i];
      y[(i0 + 21 * (6 + i)) + 6] = d_d[i0 + 3 * i];
      y[(i0 + 21 * (9 + i)) + 9] = e_d[i0 + 3 * i];
      y[(i0 + 21 * (12 + i)) + 12] = f_d[i0 + 3 * i];
      y[(i0 + 21 * (15 + i)) + 15] = g_d[i0 + 3 * i];
      y[(i0 + 21 * (18 + i)) + 18] = h_d[i0 + 3 * i];
    }
  }

  for (i = 0; i < 441; i++) {
    obj->P_prior[i] = y[i];
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

  for (i = 0; i < 6; i++) {
    obj->theta[i] = 0.0;
  }

  for (i = 0; i < 441; i++) {
    y[i] = 0.0;
  }

  for (i = 0; i < 21; i++) {
    y[i + 21 * i] = 1.0;
  }

  for (i = 0; i < 441; i++) {
    obj->P[i] = y[i];
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
}

static void blkdiag(real_T varargin_1[9], real_T varargin_2[9], real_T
                    varargin_3[9], real_T varargin_4[9], real_T varargin_5[9],
                    real_T varargin_6[9], real_T varargin_7[9], real_T y[441])
{
  int32_T i1;
  int32_T i2;
  for (i1 = 0; i1 < 441; i1++) {
    y[i1] = 0.0;
  }

  for (i1 = 0; i1 < 3; i1++) {
    for (i2 = 0; i2 < 3; i2++) {
      y[i2 + 21 * i1] = varargin_1[i2 + 3 * i1];
      y[(i2 + 21 * (3 + i1)) + 3] = varargin_2[i2 + 3 * i1];
      y[(i2 + 21 * (6 + i1)) + 6] = varargin_3[i2 + 3 * i1];
      y[(i2 + 21 * (9 + i1)) + 9] = varargin_4[i2 + 3 * i1];
      y[(i2 + 21 * (12 + i1)) + 12] = varargin_5[i2 + 3 * i1];
      y[(i2 + 21 * (15 + i1)) + 15] = varargin_6[i2 + 3 * i1];
      y[(i2 + 21 * (18 + i1)) + 18] = varargin_7[i2 + 3 * i1];
    }
  }
}

static void eye(real_T I[441])
{
  int32_T k;
  for (k = 0; k < 441; k++) {
    I[k] = 0.0;
  }

  for (k = 0; k < 21; k++) {
    I[k + 21 * k] = 1.0;
  }
}

static void mw__internal__call__step(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance, const emlrtStack *sp, boolean_T static_bias_initialization,
  boolean_T ekf_update_enabled, boolean_T enable_bias_estimation, real_T
  gyro_noise_std[3], real_T gyro_bias_noise_std[3], real_T accel_noise_std[3],
  real_T accel_bias_noise_std[3], real_T contact_noise_std[3], real_T
  encoder_noise_std[14], real_T gyro_bias_init[3], real_T accel_bias_init[3],
  real_T prior_base_pose_std[6], real_T prior_base_velocity_std[3], real_T
  prior_contact_position_std[3], real_T prior_gyro_bias_std[3], real_T
  prior_accel_bias_std[3], real_T prior_forward_kinematics_std[3], real_T b_u0,
  real_T b_u1, real_T b_u2[3], real_T b_u3[3], real_T b_u4[14], real_T b_u5[2],
  real_T b_u6[49], real_T c_y0[49], real_T c_y1[6], real_T b_y2[441], real_T
  *b_y3)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  real_T varargin_4[3];
  real_T varargin_5[3];
  real_T varargin_6[3];
  real_T varargin_7[3];
  real_T varargin_8[3];
  int32_T i;
  real_T varargin_9[14];
  real_T varargin_10[3];
  real_T varargin_11[3];
  real_T varargin_12[6];
  real_T varargin_13[3];
  real_T varargin_14[3];
  real_T varargin_15[3];
  real_T varargin_16[3];
  real_T varargin_17[3];
  boolean_T flag;
  real_T dv0[3];
  real_T dv1[14];
  real_T dv2[6];
  RightInvariantEKF *obj;
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 45 };

  static char_T u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's', 't',
    'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e', 'd',
    'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 4 };

  static const int32_T iv2[2] = { 1, 51 };

  static char_T b_u[4] = { 's', 't', 'e', 'p' };

  static char_T c_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static const int32_T iv3[2] = { 1, 5 };

  static const int32_T iv4[2] = { 1, 44 };

  static char_T d_u[5] = { 's', 'e', 't', 'u', 'p' };

  static char_T e_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static const int32_T iv5[2] = { 1, 44 };

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
  for (i = 0; i < 3; i++) {
    varargin_4[i] = gyro_noise_std[i];
    varargin_5[i] = gyro_bias_noise_std[i];
    varargin_6[i] = accel_noise_std[i];
    varargin_7[i] = accel_bias_noise_std[i];
    varargin_8[i] = contact_noise_std[i];
  }

  for (i = 0; i < 14; i++) {
    varargin_9[i] = encoder_noise_std[i];
  }

  for (i = 0; i < 3; i++) {
    varargin_10[i] = gyro_bias_init[i];
    varargin_11[i] = accel_bias_init[i];
  }

  for (i = 0; i < 6; i++) {
    varargin_12[i] = prior_base_pose_std[i];
  }

  for (i = 0; i < 3; i++) {
    varargin_13[i] = prior_base_velocity_std[i];
    varargin_14[i] = prior_contact_position_std[i];
    varargin_15[i] = prior_gyro_bias_std[i];
    varargin_16[i] = prior_accel_bias_std[i];
    varargin_17[i] = prior_forward_kinematics_std[i];
  }

  if (!moduleInstance->sysobj_not_empty) {
    st.site = &f_emlrtRSI;
    RightInvariantEKF_RightInvariantEKF(moduleInstance, &moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
    st.site = &g_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.static_bias_initialization =
      static_bias_initialization;
    st.site = &h_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.ekf_update_enabled = ekf_update_enabled;
    st.site = &i_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.enable_bias_estimation = enable_bias_estimation;
    st.site = &j_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_noise_std[i] = varargin_4[i];
    }

    st.site = &k_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_noise_std[i] = varargin_5[i];
    }

    st.site = &l_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_noise_std[i] = varargin_6[i];
    }

    st.site = &m_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_noise_std[i] = varargin_7[i];
    }

    st.site = &n_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.contact_noise_std[i] = varargin_8[i];
    }

    st.site = &o_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 14; i++) {
      moduleInstance->sysobj.encoder_noise_std[i] = varargin_9[i];
    }

    st.site = &p_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_init[i] = varargin_10[i];
    }

    st.site = &q_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_init[i] = varargin_11[i];
    }

    st.site = &r_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 6; i++) {
      moduleInstance->sysobj.prior_base_pose_std[i] = varargin_12[i];
    }

    st.site = &s_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_base_velocity_std[i] = varargin_13[i];
    }

    st.site = &t_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_contact_position_std[i] = varargin_14[i];
    }

    st.site = &u_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_gyro_bias_std[i] = varargin_15[i];
    }

    st.site = &v_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_accel_bias_std[i] = varargin_16[i];
    }

    st.site = &w_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_forward_kinematics_std[i] = varargin_17[i];
    }
  }

  if (!isequal(moduleInstance->sysobj.static_bias_initialization,
               static_bias_initialization)) {
    st.site = &ab_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.static_bias_initialization =
      static_bias_initialization;
  }

  if (!isequal(moduleInstance->sysobj.ekf_update_enabled, ekf_update_enabled)) {
    st.site = &bb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.ekf_update_enabled = ekf_update_enabled;
  }

  if (!isequal(moduleInstance->sysobj.enable_bias_estimation,
               enable_bias_estimation)) {
    st.site = &cb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.enable_bias_estimation = enable_bias_estimation;
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.gyro_noise_std[i];
  }

  if (!b_isequal(dv0, varargin_4)) {
    st.site = &db_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_noise_std[i] = varargin_4[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.gyro_bias_noise_std[i];
  }

  if (!b_isequal(dv0, varargin_5)) {
    st.site = &eb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_noise_std[i] = varargin_5[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.accel_noise_std[i];
  }

  if (!b_isequal(dv0, varargin_6)) {
    st.site = &fb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_noise_std[i] = varargin_6[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.accel_bias_noise_std[i];
  }

  if (!b_isequal(dv0, varargin_7)) {
    st.site = &gb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_noise_std[i] = varargin_7[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.contact_noise_std[i];
  }

  if (!b_isequal(dv0, varargin_8)) {
    st.site = &hb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.contact_noise_std[i] = varargin_8[i];
    }
  }

  for (i = 0; i < 14; i++) {
    dv1[i] = moduleInstance->sysobj.encoder_noise_std[i];
  }

  if (!c_isequal(dv1, varargin_9)) {
    st.site = &ib_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 14; i++) {
      moduleInstance->sysobj.encoder_noise_std[i] = varargin_9[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.gyro_bias_init[i];
  }

  if (!b_isequal(dv0, varargin_10)) {
    st.site = &jb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_init[i] = varargin_10[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.accel_bias_init[i];
  }

  if (!b_isequal(dv0, varargin_11)) {
    st.site = &kb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_init[i] = varargin_11[i];
    }
  }

  for (i = 0; i < 6; i++) {
    dv2[i] = moduleInstance->sysobj.prior_base_pose_std[i];
  }

  if (!d_isequal(dv2, varargin_12)) {
    st.site = &lb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 6; i++) {
      moduleInstance->sysobj.prior_base_pose_std[i] = varargin_12[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.prior_base_velocity_std[i];
  }

  if (!b_isequal(dv0, varargin_13)) {
    st.site = &mb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_base_velocity_std[i] = varargin_13[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.prior_contact_position_std[i];
  }

  if (!b_isequal(dv0, varargin_14)) {
    st.site = &nb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_contact_position_std[i] = varargin_14[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.prior_gyro_bias_std[i];
  }

  if (!b_isequal(dv0, varargin_15)) {
    st.site = &ob_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_gyro_bias_std[i] = varargin_15[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.prior_accel_bias_std[i];
  }

  if (!b_isequal(dv0, varargin_16)) {
    st.site = &pb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_accel_bias_std[i] = varargin_16[i];
    }
  }

  for (i = 0; i < 3; i++) {
    dv0[i] = moduleInstance->sysobj.prior_forward_kinematics_std[i];
  }

  if (!b_isequal(dv0, varargin_17)) {
    st.site = &qb_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_forward_kinematics_std[i] = varargin_17[i];
    }
  }

  st.site = &rb_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(&st, 45, m0, &u[0]);
    emlrtAssign(&y, m0);
    b_y = NULL;
    m0 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(&st, 4, m0, &b_u[0]);
    emlrtAssign(&b_y, m0);
    b_st.site = &d_emlrtRSI;
    b_error(&b_st, message(&b_st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    b_st.site = &d_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    if (obj->isInitialized != 0) {
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv2);
      emlrtInitCharArrayR2013a(&c_st, 51, m0, &c_u[0]);
      emlrtAssign(&y, m0);
      b_y = NULL;
      m0 = emlrtCreateCharArray(2, iv3);
      emlrtInitCharArrayR2013a(&c_st, 5, m0, &d_u[0]);
      emlrtAssign(&b_y, m0);
      d_st.site = &d_emlrtRSI;
      b_error(&d_st, message(&d_st, y, b_y, &emlrtMCI), &emlrtMCI);
    }

    obj->isInitialized = 1;
    d_st.site = &d_emlrtRSI;
    RightInvariantEKF_setupImpl(obj);
    d_st.site = &d_emlrtRSI;
    if (obj->TunablePropsChanged) {
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv5);
      emlrtInitCharArrayR2013a(&d_st, 44, m0, &e_u[0]);
      emlrtAssign(&y, m0);
      e_st.site = &d_emlrtRSI;
      b_error(&e_st, b_message(&e_st, y, &emlrtMCI), &emlrtMCI);
    }

    obj->TunablePropsChanged = false;
  }

  b_st.site = &d_emlrtRSI;
  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
  }

  b_st.site = &d_emlrtRSI;
  RightInvariantEKF_stepImpl(moduleInstance, &b_st, obj, b_u0, b_u1, b_u2, b_u3,
    b_u4, b_u5, b_u6, c_y0, varargin_12, b_y2, b_y3);
  b_st.site = &d_emlrtRSI;
  if (obj->TunablePropsChanged) {
    y = NULL;
    m0 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(&b_st, 44, m0, &e_u[0]);
    emlrtAssign(&y, m0);
    c_st.site = &d_emlrtRSI;
    b_error(&c_st, b_message(&c_st, y, &emlrtMCI), &emlrtMCI);
  }

  for (i = 0; i < 6; i++) {
    c_y1[i] = varargin_12[i];
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

static void RightInvariantEKF_stepImpl(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance, const emlrtStack *sp, RightInvariantEKF *obj, real_T enable,
  real_T t, real_T w[3], real_T a[3], real_T encoders[14], real_T contact[2],
  real_T X_init[49], real_T X[49], real_T theta[6], real_T P[441], real_T
  *enabled)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  boolean_T guard1 = false;
  boolean_T y;
  int32_T i;
  boolean_T exitg1;
  real_T Rwi[3];
  real_T b_Rwi[9];
  int32_T i3;
  real_T b_obj[3];
  real_T c_obj;
  real_T d_obj[14];
  static real_T dv3[3] = { 0.0, 0.0, -9.81 };

  real_T e_obj[2];
  int8_T I[49];
  int8_T b_I[441];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 1);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 1);
  st.site = &sb_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 8);

  /*  Function to initiaze IMU bias */
  if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 5,
                 obj->static_bias_initialization)) {
    if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 6,
                   covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0,
          0, 1, !covrtLogCond(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0,
           0, 0, obj->bias_initialized)))) {
      if (covrtLogCond(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 1,
                       norm(a) > 0.0) && covrtLogCond
          (moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 2, norm(w) > 0.0))
      {
        covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 2,
                     true);
        covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 7, true);

        /*  Wait for valid signal */
        if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 8,
                       obj->imu_init_count <= 1000.0)) {
          covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0,
                             17);

          /*  Accumulate vector of imu data */
          for (i = 0; i < 3; i++) {
            for (i3 = 0; i3 < 3; i3++) {
              b_Rwi[i3 + 3 * i] = X_init[i3 + 7 * i];
            }
          }

          for (i = 0; i < 3; i++) {
            c_obj = 0.0;
            for (i3 = 0; i3 < 3; i3++) {
              c_obj += b_Rwi[i + 3 * i3] * a[i3];
            }

            Rwi[i] = c_obj + dv3[i];
          }

          c_obj = obj->imu_init_count;
          i = (int32_T)emlrtIntegerCheckR2012b(c_obj, &emlrtDCI, &st);
          emlrtDynamicBoundsCheckR2012b(i, 1, 1000, &emlrtBCI, &st);
          for (i = 0; i < 3; i++) {
            obj->a_init_vec[i + 3 * ((int32_T)c_obj - 1)] = 0.0;
            for (i3 = 0; i3 < 3; i3++) {
              obj->a_init_vec[i + 3 * ((int32_T)c_obj - 1)] += b_Rwi[i3 + 3 * i]
                * Rwi[i3];
            }
          }

          c_obj = obj->imu_init_count;
          i = (int32_T)emlrtIntegerCheckR2012b(c_obj, &b_emlrtDCI, &st);
          emlrtDynamicBoundsCheckR2012b(i, 1, 1000, &b_emlrtBCI, &st);
          for (i = 0; i < 3; i++) {
            obj->w_init_vec[i + 3 * ((int32_T)c_obj - 1)] = w[i];
          }

          obj->imu_init_count++;
        } else {
          covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0,
                             18);

          /*  Use imu data vector to estimate initial biases */
          mean(obj->a_init_vec, Rwi);
          for (i = 0; i < 3; i++) {
            obj->ba0[i] = Rwi[i];
          }

          mean(obj->w_init_vec, Rwi);
          for (i = 0; i < 3; i++) {
            obj->bg0[i] = Rwi[i];
          }

          obj->bias_initialized = true;
        }
      } else {
        covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 2,
                     false);
        covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 7, false);
      }
    }
  } else {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 19);
    obj->bias_initialized = true;
  }

  guard1 = false;
  if (covrtLogCond(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 9, t >
                   0.1)) {
    y = false;
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i < 2)) {
      if (contact[i] == 1.0) {
        y = true;
        exitg1 = true;
      } else {
        i++;
      }
    }

    if (covrtLogCond(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 10, y))
    {
      covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 0, true);
      covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 0, true);
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 2);
      st.site = &tb_emlrtRSI;
      covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 9);

      /*  Attempt to enable filter (successful if enable is true, and */
      /*  at least one foot is on the ground) */
      b_st.site = &wb_emlrtRSI;
      if (muDoubleScalarIsNaN(enable)) {
        c_st.site = &yb_emlrtRSI;
        error(&c_st);
      }

      if (covrtLogCond(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 3,
                       enable != 0.0) && (!covrtLogCond
           (moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 4,
            obj->filter_enabled))) {
        covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 3,
                     true);
        covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 9, true);
        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 20);
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
          obj->P[i] = obj->P_prior[i];
        }

        obj->filter_enabled = true;
      } else {
        covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 3,
                     false);
        covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 9, false);
      }

      /*  If filter is disabled, zero everything */
      b_st.site = &xb_emlrtRSI;
      if (muDoubleScalarIsNaN(enable)) {
        c_st.site = &yb_emlrtRSI;
        error(&c_st);
      }

      if ((!covrtLogCond(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 5,
                         enable != 0.0)) || (!covrtLogCond
           (moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 6,
            obj->filter_enabled))) {
        covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 4,
                     true);
        covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 10, true);
        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 21);
        for (i = 0; i < 49; i++) {
          I[i] = 0;
        }

        for (i = 0; i < 7; i++) {
          I[i + 7 * i] = 1;
        }

        for (i = 0; i < 49; i++) {
          obj->X[i] = (real_T)I[i];
        }

        for (i = 0; i < 6; i++) {
          obj->theta[i] = 0.0;
        }

        for (i = 0; i < 441; i++) {
          b_I[i] = 0;
        }

        for (i = 0; i < 21; i++) {
          b_I[i + 21 * i] = 1;
        }

        for (i = 0; i < 441; i++) {
          obj->P[i] = (real_T)b_I[i];
        }

        obj->filter_enabled = false;
      } else {
        covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 4,
                     false);
        covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 10,
                   false);
      }
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 0, false);
    covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 0, false);
  }

  if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 1,
                 obj->filter_enabled)) {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 3);
    for (i = 0; i < 3; i++) {
      Rwi[i] = obj->w_prev[i];
    }

    for (i = 0; i < 3; i++) {
      b_obj[i] = obj->a_prev[i];
    }

    for (i = 0; i < 14; i++) {
      d_obj[i] = obj->encoders_prev[i];
    }

    for (i = 0; i < 2; i++) {
      e_obj[i] = obj->contact_prev[i];
    }

    st.site = &ub_emlrtRSI;
    RightInvariantEKF_Predict_State(moduleInstance, obj, Rwi, b_obj, d_obj,
      e_obj, t - obj->t_prev);
    if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 2,
                   obj->ekf_update_enabled)) {
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 4);
      st.site = &vb_emlrtRSI;
      RightInvariantEKF_Update_ForwardKinematics(moduleInstance, &st, obj,
        encoders, contact);
    }
  }

  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 5);
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
  for (i = 0; i < 49; i++) {
    X[i] = obj->X[i];
  }

  for (i = 0; i < 6; i++) {
    theta[i] = obj->theta[i];
  }

  for (i = 0; i < 441; i++) {
    P[i] = obj->P[i];
  }

  *enabled = (real_T)obj->filter_enabled;
}

static real_T norm(real_T x[3])
{
  real_T y;
  real_T scale;
  int32_T k;
  real_T absxk;
  real_T t;
  y = 0.0;
  scale = 3.3121686421112381E-170;
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
  int32_T k;
  int32_T xoffset;
  for (j = 0; j < 3; j++) {
    y[j] = x[j];
  }

  for (k = 0; k < 999; k++) {
    xoffset = (k + 1) * 3;
    for (j = 0; j < 3; j++) {
      y[j] += x[xoffset + j];
    }
  }

  for (j = 0; j < 3; j++) {
    y[j] /= 1000.0;
  }
}

static void error(const emlrtStack *sp)
{
  emlrtStack st;
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv6[2] = { 1, 19 };

  static char_T u[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 'l', 'o',
    'g', 'i', 'c', 'a', 'l', 'n', 'a', 'n' };

  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m1 = emlrtCreateCharArray(2, iv6);
  emlrtInitCharArrayR2013a(sp, 19, m1, &u[0]);
  emlrtAssign(&y, m1);
  st.site = &we_emlrtRSI;
  b_error(&st, b_message(&st, y, &b_emlrtMCI), &b_emlrtMCI);
}

static void RightInvariantEKF_Predict_State
  (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance, RightInvariantEKF *obj,
   real_T w[3], real_T a[3], real_T encoders[14], real_T contact[2], real_T dt)
{
  emlrtStack st;
  real_T R[9];
  real_T v[3];
  real_T p[3];
  real_T dR[3];
  real_T dL[3];
  real_T bg[3];
  real_T ba[3];
  real_T a_k[3];
  real_T b_w[3];
  int32_T i;
  real_T b[9];
  int32_T i4;
  emlrtStack b_st;
  emlrtStack c_st;
  real_T c;
  real_T R_pred[9];
  real_T p_pred[3];
  int32_T i5;
  real_T beta1;
  real_T b_b[3];
  static real_T dv4[3] = { 0.0, 0.0, -9.81 };

  real_T c_b[3];
  real_T A[441];
  static real_T dv5[441] = { 0.0, 0.0, 0.0, 0.0, -9.81, -0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 9.81,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  real_T hR_R[9];
  real_T hR_L[9];
  real_T b_a[9];
  real_T d_b[9];
  real_T b_hR_R[9];
  real_T b_hR_L[9];
  real_T c_a[9];
  real_T Phi[441];
  real_T dv6[225];
  real_T Adj[441];
  static real_T dv7[36] = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static int16_T y[9] = { 10000, 0, 0, 0, 10000, 0, 0, 0, 10000 };

  real_T c_hR_L[9];
  real_T d_a[441];
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  real_T e_a[441];
  real_T e_b[441];
  real_T b_contact[3];
  real_T dv8[49];
  real_T dv9[6];
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 10);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 22);

  /*  Right-Invariant Extended Kalman Filter Prediction Step      */
  st.site = &ac_emlrtRSI;
  RightInvariantEKF_Separate_State(moduleInstance, obj->X, obj->theta, R, v, p,
    dR, dL, bg, ba);

  /*  Bias corrected IMU information */
  /*  {I}_w_{WI} */
  /*  {I}_a_{WI} */
  /*  Base Pose Dynamics */
  for (i = 0; i < 3; i++) {
    a_k[i] = a[i] - ba[i];
    b_w[i] = (w[i] - bg[i]) * dt;
  }

  st.site = &bc_emlrtRSI;
  RightInvariantEKF_exp_SO3(moduleInstance, b_w, b);
  for (i = 0; i < 3; i++) {
    for (i4 = 0; i4 < 3; i4++) {
      R_pred[i + 3 * i4] = 0.0;
      for (i5 = 0; i5 < 3; i5++) {
        R_pred[i + 3 * i4] += R[i + 3 * i5] * b[i5 + 3 * i4];
      }
    }
  }

  st.site = &cc_emlrtRSI;
  b_st.site = &rc_emlrtRSI;
  c_st.site = &sc_emlrtRSI;
  c = dt * dt;
  for (i = 0; i < 3; i++) {
    beta1 = 0.0;
    for (i4 = 0; i4 < 3; i4++) {
      beta1 += R[i + 3 * i4] * a_k[i4];
    }

    p_pred[i] = (p[i] + v[i] * dt) + 0.5 * (beta1 + dv4[i]) * c;
  }

  /*  Foot Position Dynamics */
  st.site = &dc_emlrtRSI;
  p_VectorNav_to_RightToeBottom(moduleInstance, encoders, b_b);

  /*  {W}_p_{WR} */
  st.site = &ec_emlrtRSI;
  p_VectorNav_to_LeftToeBottom(moduleInstance, encoders, c_b);

  /*  {W}_p_{WL} */
  /*  Bias Dynamics */
  /*  -- Linearized invariant error dynamics -- */
  /*  Base pose, velocity, and contact */
  /*  IMU biases */
  for (i = 0; i < 441; i++) {
    A[i] = dv5[i];
  }

  st.site = &fc_emlrtRSI;
  RightInvariantEKF_skew(moduleInstance, v, b);
  for (i = 0; i < 9; i++) {
    b[i] = -b[i];
  }

  st.site = &gc_emlrtRSI;
  RightInvariantEKF_skew(moduleInstance, p, hR_R);
  for (i = 0; i < 9; i++) {
    hR_R[i] = -hR_R[i];
  }

  st.site = &hc_emlrtRSI;
  RightInvariantEKF_skew(moduleInstance, dR, hR_L);
  for (i = 0; i < 9; i++) {
    hR_L[i] = -hR_L[i];
  }

  st.site = &ic_emlrtRSI;
  RightInvariantEKF_skew(moduleInstance, dL, b_a);
  for (i = 0; i < 9; i++) {
    b_a[i] = -b_a[i];
  }

  for (i = 0; i < 3; i++) {
    for (i4 = 0; i4 < 3; i4++) {
      d_b[i + 3 * i4] = 0.0;
      b_hR_R[i + 3 * i4] = 0.0;
      b_hR_L[i + 3 * i4] = 0.0;
      c_a[i + 3 * i4] = 0.0;
      for (i5 = 0; i5 < 3; i5++) {
        d_b[i + 3 * i4] += b[i + 3 * i5] * R[i5 + 3 * i4];
        b_hR_R[i + 3 * i4] += hR_R[i + 3 * i5] * R[i5 + 3 * i4];
        b_hR_L[i + 3 * i4] += hR_L[i + 3 * i5] * R[i5 + 3 * i4];
        c_a[i + 3 * i4] += b_a[i + 3 * i5] * R[i5 + 3 * i4];
      }

      A[i4 + 21 * (15 + i)] = -R[i4 + 3 * i];
      A[i4 + 21 * (i + 18)] = 0.0;
    }
  }

  for (i = 0; i < 3; i++) {
    for (i4 = 0; i4 < 3; i4++) {
      A[(i4 + 21 * (15 + i)) + 3] = d_b[i4 + 3 * i];
      A[(i4 + 21 * (i + 18)) + 3] = -R[i4 + 3 * i];
      A[(i4 + 21 * (15 + i)) + 6] = b_hR_R[i4 + 3 * i];
      A[(i4 + 21 * (i + 18)) + 6] = 0.0;
      A[(i4 + 21 * (15 + i)) + 9] = b_hR_L[i4 + 3 * i];
      A[(i4 + 21 * (i + 18)) + 9] = 0.0;
      A[(i4 + 21 * (15 + i)) + 12] = c_a[i4 + 3 * i];
      A[(i4 + 21 * (i + 18)) + 12] = 0.0;
    }
  }

  /*  Discretization */
  b_eye(Phi);
  for (i = 0; i < 441; i++) {
    Phi[i] += A[i] * dt;
  }

  /*  Fast approximation of exp(A*dt) */
  st.site = &jc_emlrtRSI;
  RightInvariantEKF_Adjoint(moduleInstance, obj->X, dv6);
  b_blkdiag(dv6, dv7, Adj);
  st.site = &kc_emlrtRSI;
  R_VectorNav_to_RightToeBottom(moduleInstance, encoders, hR_R);
  st.site = &lc_emlrtRSI;
  R_VectorNav_to_LeftToeBottom(moduleInstance, encoders, hR_L);
  for (i = 0; i < 9; i++) {
    b[i] = obj->Qc[i] + (real_T)y[i] * (1.0 - contact[1]);
  }

  for (i = 0; i < 9; i++) {
    b_a[i] = obj->Qc[i] + (real_T)y[i] * (1.0 - contact[0]);
  }

  for (i = 0; i < 9; i++) {
    d_b[i] = 0.0;
  }

  for (i = 0; i < 3; i++) {
    for (i4 = 0; i4 < 3; i4++) {
      c_a[i + 3 * i4] = 0.0;
      for (i5 = 0; i5 < 3; i5++) {
        c_a[i + 3 * i4] += hR_R[i + 3 * i5] * b[i5 + 3 * i4];
      }
    }

    for (i4 = 0; i4 < 3; i4++) {
      b_hR_R[i + 3 * i4] = 0.0;
      c_hR_L[i + 3 * i4] = 0.0;
      for (i5 = 0; i5 < 3; i5++) {
        b_hR_R[i + 3 * i4] += c_a[i + 3 * i5] * hR_R[i4 + 3 * i5];
        c_hR_L[i + 3 * i4] += hR_L[i + 3 * i5] * b_a[i5 + 3 * i4];
      }
    }

    for (i4 = 0; i4 < 3; i4++) {
      b_hR_L[i + 3 * i4] = 0.0;
      for (i5 = 0; i5 < 3; i5++) {
        b_hR_L[i + 3 * i4] += c_hR_L[i + 3 * i5] * hR_L[i4 + 3 * i5];
      }
    }
  }

  blkdiag(obj->Qg, obj->Qa, d_b, b_hR_R, b_hR_L, obj->Qbg, obj->Qba, A);
  st.site = &mc_emlrtRSI;
  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  c = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  for (i = 0; i < 441; i++) {
    d_a[i] = 0.0;
  }

  m_t = (ptrdiff_t)21;
  n_t = (ptrdiff_t)21;
  k_t = (ptrdiff_t)21;
  lda_t = (ptrdiff_t)21;
  ldb_t = (ptrdiff_t)21;
  ldc_t = (ptrdiff_t)21;
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &c, &Phi[0], &lda_t, &Adj[0], &ldb_t,
        &beta1, &d_a[0], &ldc_t);
  st.site = &mc_emlrtRSI;
  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  c = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  for (i = 0; i < 441; i++) {
    e_a[i] = 0.0;
  }

  m_t = (ptrdiff_t)21;
  n_t = (ptrdiff_t)21;
  k_t = (ptrdiff_t)21;
  lda_t = (ptrdiff_t)21;
  ldb_t = (ptrdiff_t)21;
  ldc_t = (ptrdiff_t)21;
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &c, &d_a[0], &lda_t, &A[0], &ldb_t,
        &beta1, &e_a[0], &ldc_t);
  st.site = &mc_emlrtRSI;
  for (i = 0; i < 21; i++) {
    for (i4 = 0; i4 < 21; i4++) {
      e_b[i4 + 21 * i] = Adj[i + 21 * i4];
    }
  }

  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  c = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  for (i = 0; i < 441; i++) {
    d_a[i] = 0.0;
  }

  m_t = (ptrdiff_t)21;
  n_t = (ptrdiff_t)21;
  k_t = (ptrdiff_t)21;
  lda_t = (ptrdiff_t)21;
  ldb_t = (ptrdiff_t)21;
  ldc_t = (ptrdiff_t)21;
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &c, &e_a[0], &lda_t, &e_b[0], &ldb_t,
        &beta1, &d_a[0], &ldc_t);
  st.site = &mc_emlrtRSI;
  for (i = 0; i < 21; i++) {
    for (i4 = 0; i4 < 21; i4++) {
      e_b[i4 + 21 * i] = Phi[i + 21 * i4];
    }
  }

  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  c = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  for (i = 0; i < 441; i++) {
    Adj[i] = 0.0;
  }

  m_t = (ptrdiff_t)21;
  n_t = (ptrdiff_t)21;
  k_t = (ptrdiff_t)21;
  lda_t = (ptrdiff_t)21;
  ldb_t = (ptrdiff_t)21;
  ldc_t = (ptrdiff_t)21;
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &c, &d_a[0], &lda_t, &e_b[0], &ldb_t,
        &beta1, &Adj[0], &ldc_t);

  /*  Approximated discretized noise matrix  */
  /*  Construct predicted state */
  for (i = 0; i < 3; i++) {
    beta1 = 0.0;
    for (i4 = 0; i4 < 3; i4++) {
      beta1 += R[i + 3 * i4] * a_k[i4];
    }

    b_w[i] = v[i] + (beta1 + dv4[i]) * dt;
    beta1 = 0.0;
    for (i4 = 0; i4 < 3; i4++) {
      beta1 += R_pred[i + 3 * i4] * b_b[i4];
    }

    p[i] = contact[1] * dR[i] + (1.0 - contact[1]) * (p_pred[i] + beta1);
    beta1 = 0.0;
    for (i4 = 0; i4 < 3; i4++) {
      beta1 += R_pred[i + 3 * i4] * c_b[i4];
    }

    b_contact[i] = contact[0] * dL[i] + (1.0 - contact[0]) * (p_pred[i] + beta1);
  }

  st.site = &nc_emlrtRSI;
  RightInvariantEKF_Construct_State(moduleInstance, R_pred, b_w, p_pred, p,
    b_contact, bg, ba, dv8, dv9);
  for (i = 0; i < 49; i++) {
    obj->X[i] = dv8[i];
  }

  for (i = 0; i < 6; i++) {
    obj->theta[i] = dv9[i];
  }

  /*  Predict Covariance */
  st.site = &oc_emlrtRSI;
  for (i = 0; i < 441; i++) {
    e_b[i] = obj->P[i];
  }

  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  c = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  for (i = 0; i < 441; i++) {
    d_a[i] = 0.0;
  }

  m_t = (ptrdiff_t)21;
  n_t = (ptrdiff_t)21;
  k_t = (ptrdiff_t)21;
  lda_t = (ptrdiff_t)21;
  ldb_t = (ptrdiff_t)21;
  ldc_t = (ptrdiff_t)21;
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &c, &Phi[0], &lda_t, &e_b[0], &ldb_t,
        &beta1, &d_a[0], &ldc_t);
  st.site = &oc_emlrtRSI;
  for (i = 0; i < 21; i++) {
    for (i4 = 0; i4 < 21; i4++) {
      e_b[i4 + 21 * i] = Phi[i + 21 * i4];
    }
  }

  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  c = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  for (i = 0; i < 441; i++) {
    A[i] = 0.0;
  }

  m_t = (ptrdiff_t)21;
  n_t = (ptrdiff_t)21;
  k_t = (ptrdiff_t)21;
  lda_t = (ptrdiff_t)21;
  ldb_t = (ptrdiff_t)21;
  ldc_t = (ptrdiff_t)21;
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &c, &d_a[0], &lda_t, &e_b[0], &ldb_t,
        &beta1, &A[0], &ldc_t);
  for (i = 0; i < 441; i++) {
    obj->P[i] = A[i] + Adj[i] * dt;
  }
}

static void RightInvariantEKF_Separate_State
  (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance, real_T X[49], real_T
   theta[6], real_T R[9], real_T v[3], real_T p[3], real_T dR[3], real_T dL[3],
   real_T bg[3], real_T ba[3])
{
  int32_T i;
  int32_T i6;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 2);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 6);

  /*     %% Properties ================================================== */
  /*  PUBLIC PROPERTIES */
  /*  Enable Static Bias Initialization */
  /*  Enable Measurement Updates */
  /*  Enable Bias Estimation */
  /*  Gyroscope Noise std */
  /*  Gyroscope Bias Noise std */
  /*  Accelerometer Noise std */
  /*  Accelerometer Bias Noise std */
  /*  Contact Noise std */
  /*  Encoder Noise std */
  /*  Gyroscope Bias Initial Condition  */
  /*  Accelerometer Bias Initial Condition */
  /*  Prior Base Pose std */
  /*  Prior Base Velocity std */
  /*  Prior Contact position std */
  /*  Prior Gyroscope Bias std */
  /*  Prior Accelerometer Bias std */
  /*  Prior Forward Kinematics std */
  /*  PROTECTED PROPERTIES  */
  /*  PRIVATE PROPERTIES */
  /*  State Lie Group */
  /*  Extra state parameters */
  /*  Covariance of combined state */
  /*  Flag that specifies if the filter is enabled */
  /*  Flag that specifies if the IMU bias is initialized */
  /*  Initial gyroscope bias */
  /*  Initial accelerometer bias */
  /*  Vector of gyroscope measurements to aid initialization */
  /*  Vector of accelerometer measurements to aid initialization */
  /*  Counter to determine how much IMU data has been collected for static initialization */
  /*  Previous gyroscope measurement */
  /*  Previous accelerometer measurement */
  /*  Previous encoder measurement */
  /*  Previous contact measurement */
  /*  Previous timestamp */
  /*  --- Sensor Covariances --- */
  /*  Gyro Covariance Matrix */
  /*  Gyro bias Covariance Matrix */
  /*  Accel Covariance Matrix */
  /*  Accel Bias Covariance Matrix */
  /*  Contact Covariance Matrix */
  /*  Encoder Covariance Matrix */
  /*  Prior Forward Kinematics Covariance Matrix */
  /*  Prior State Covariance Matrix */
  /*  PRIVATE CONSTANTS */
  /*  Gravity vector */
  /*  Number of IMU samples collected for static bias initialization */
  /*     %% PROTECTED METHODS ===================================================== */
  /* SETUPIMPL Initialize System object. */
  /*  Initialize Sensor Covariances */
  /*  Gyro Covariance Matrix */
  /*  Gyro bias Covariance Matrix */
  /*  Accel Covariance Matrix */
  /*  Accel Bias Covariance Matrix */
  /*  Contact Covariance Matrix */
  /*  Encoder Covariance Matrix */
  /*  Prior Forward Kinematics Covariance Matrix */
  /*  Prior State Covariance Matrix */
  /*  Initialize bias estimates */
  /*  Initialze State and Covariance */
  /*  Variables to store previous measurements */
  /*  setupImpl */
  /*  Right-Invariant EKF that creates an estimated state from sensor readings. */
  /*  */
  /*    Inputs: */
  /*        enable    - flag to enable/disable the filter */
  /*        t         - time */
  /*        w         - angular velocity, {I}_w_{WI} */
  /*        a         - linear acceleration, {I}_a_{WI} */
  /*        encoders  - joint encoder positions */
  /*        contact   - contact indicator */
  /*        X_init    - initial state */
  /*  */
  /*    Outputs: */
  /*        X       - current state estimate */
  /*        theta   - current parameter estimates */
  /*        P       - current covariance estimate  */
  /*        enabled - flag indicating when the filter is enabled */
  /*  */
  /*    Author: Ross Hartley */
  /*    Date:   6/28/2018 */
  /*  */
  /*  Initialize bias */
  /*  (does nothing if bias is already initialized) */
  /*  Initiaze filter */
  /*  (does nothing if filter is already initialized) */
  /*  Only run if filter is enabled */
  /*  Predict state using IMU and contact measurements      */
  /*  Update state using forward kinematic measurements */
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
  /*  Separate state vector into components */
  /*  Orientation */
  /*  Base Velocity */
  /*  Base Position */
  /*  Right Foot Position */
  /*  Left Foot Position */
  /*  Parameters */
  /*  Gyroscope Bias */
  for (i = 0; i < 3; i++) {
    for (i6 = 0; i6 < 3; i6++) {
      R[i6 + 3 * i] = X[i6 + 7 * i];
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

static void RightInvariantEKF_exp_SO3(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance, real_T w[3], real_T R[9])
{
  emlrtStack st;
  real_T A[9];
  real_T phi;
  int8_T I[9];
  int32_T k;
  real_T y;
  emlrtStack b_st;
  emlrtStack c_st;
  real_T b_A[9];
  int32_T i7;
  int32_T i8;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 6);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 13);

  /*  Exponential map of SO(3) */
  st.site = &pc_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 4);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 8);

  /*  Convert from vector to skew symmetric matrix */
  A[0] = 0.0;
  A[3] = -w[2];
  A[6] = w[1];
  A[1] = w[2];
  A[4] = 0.0;
  A[7] = -w[0];
  A[2] = -w[1];
  A[5] = w[0];
  A[8] = 0.0;
  phi = norm(w);
  if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 4, phi <
                 1.0E-6)) {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 14);
    for (k = 0; k < 9; k++) {
      R[k] = 0.0;
    }

    for (k = 0; k < 3; k++) {
      R[k + 3 * k] = 1.0;
    }
  } else {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 15);
    for (k = 0; k < 9; k++) {
      I[k] = 0;
    }

    for (k = 0; k < 3; k++) {
      I[k + 3 * k] = 1;
    }

    y = muDoubleScalarSin(phi) / phi;
    st.site = &qc_emlrtRSI;
    b_st.site = &rc_emlrtRSI;
    c_st.site = &sc_emlrtRSI;
    phi = (1.0 - muDoubleScalarCos(phi)) / (phi * phi);
    for (k = 0; k < 3; k++) {
      for (i7 = 0; i7 < 3; i7++) {
        b_A[k + 3 * i7] = 0.0;
        for (i8 = 0; i8 < 3; i8++) {
          b_A[k + 3 * i7] += A[k + 3 * i8] * A[i8 + 3 * i7];
        }
      }
    }

    for (k = 0; k < 3; k++) {
      for (i7 = 0; i7 < 3; i7++) {
        R[i7 + 3 * k] = ((real_T)I[i7 + 3 * k] + y * A[i7 + 3 * k]) + phi *
          b_A[i7 + 3 * k];
      }
    }
  }
}

static void RightInvariantEKF_skew(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance, real_T v[3], real_T A[9])
{
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 4);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 8);

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

static void p_VectorNav_to_RightToeBottom(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *
  moduleInstance, real_T var1[14], real_T output1[3])
{
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1, 0);
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1, 1);
  p_VectorNav_to_RightToeBottom_src(output1, var1);
}

static void p_VectorNav_to_LeftToeBottom(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance, real_T var1[14], real_T output1[3])
{
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 2, 0);
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 2, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 2, 1);
  p_VectorNav_to_LeftToeBottom_src(output1, var1);
}

static void b_blkdiag(real_T varargin_1[225], real_T varargin_2[36], real_T y
                      [441])
{
  int32_T i9;
  int32_T i10;
  for (i9 = 0; i9 < 441; i9++) {
    y[i9] = 0.0;
  }

  for (i9 = 0; i9 < 15; i9++) {
    for (i10 = 0; i10 < 15; i10++) {
      y[i10 + 21 * i9] = varargin_1[i10 + 15 * i9];
    }
  }

  for (i9 = 0; i9 < 6; i9++) {
    for (i10 = 0; i10 < 6; i10++) {
      y[(i10 + 21 * (15 + i9)) + 15] = varargin_2[i10 + 6 * i9];
    }
  }
}

static void b_eye(real_T I[441])
{
  int32_T k;
  for (k = 0; k < 441; k++) {
    I[k] = 0.0;
  }

  for (k = 0; k < 21; k++) {
    I[k + 21 * k] = 1.0;
  }
}

static void RightInvariantEKF_Adjoint(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance, real_T X[49], real_T AdjX[225])
{
  emlrtStack st;
  real_T R[9];
  int32_T i11;
  int32_T i12;
  real_T dv10[9];
  real_T dv11[9];
  real_T dv12[9];
  real_T dv13[9];
  real_T dv14[9];
  real_T dv15[9];
  real_T dv16[9];
  real_T dv17[9];
  int32_T i13;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 7);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 16);

  /*  Adjoint of SE_N(3)          */
  st.site = &uc_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 2);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 6);

  /*     %% Properties ================================================== */
  /*  PUBLIC PROPERTIES */
  /*  Enable Static Bias Initialization */
  /*  Enable Measurement Updates */
  /*  Enable Bias Estimation */
  /*  Gyroscope Noise std */
  /*  Gyroscope Bias Noise std */
  /*  Accelerometer Noise std */
  /*  Accelerometer Bias Noise std */
  /*  Contact Noise std */
  /*  Encoder Noise std */
  /*  Gyroscope Bias Initial Condition  */
  /*  Accelerometer Bias Initial Condition */
  /*  Prior Base Pose std */
  /*  Prior Base Velocity std */
  /*  Prior Contact position std */
  /*  Prior Gyroscope Bias std */
  /*  Prior Accelerometer Bias std */
  /*  Prior Forward Kinematics std */
  /*  PROTECTED PROPERTIES  */
  /*  PRIVATE PROPERTIES */
  /*  State Lie Group */
  /*  Extra state parameters */
  /*  Covariance of combined state */
  /*  Flag that specifies if the filter is enabled */
  /*  Flag that specifies if the IMU bias is initialized */
  /*  Initial gyroscope bias */
  /*  Initial accelerometer bias */
  /*  Vector of gyroscope measurements to aid initialization */
  /*  Vector of accelerometer measurements to aid initialization */
  /*  Counter to determine how much IMU data has been collected for static initialization */
  /*  Previous gyroscope measurement */
  /*  Previous accelerometer measurement */
  /*  Previous encoder measurement */
  /*  Previous contact measurement */
  /*  Previous timestamp */
  /*  --- Sensor Covariances --- */
  /*  Gyro Covariance Matrix */
  /*  Gyro bias Covariance Matrix */
  /*  Accel Covariance Matrix */
  /*  Accel Bias Covariance Matrix */
  /*  Contact Covariance Matrix */
  /*  Encoder Covariance Matrix */
  /*  Prior Forward Kinematics Covariance Matrix */
  /*  Prior State Covariance Matrix */
  /*  PRIVATE CONSTANTS */
  /*  Gravity vector */
  /*  Number of IMU samples collected for static bias initialization */
  /*     %% PROTECTED METHODS ===================================================== */
  /* SETUPIMPL Initialize System object. */
  /*  Initialize Sensor Covariances */
  /*  Gyro Covariance Matrix */
  /*  Gyro bias Covariance Matrix */
  /*  Accel Covariance Matrix */
  /*  Accel Bias Covariance Matrix */
  /*  Contact Covariance Matrix */
  /*  Encoder Covariance Matrix */
  /*  Prior Forward Kinematics Covariance Matrix */
  /*  Prior State Covariance Matrix */
  /*  Initialize bias estimates */
  /*  Initialze State and Covariance */
  /*  Variables to store previous measurements */
  /*  setupImpl */
  /*  Right-Invariant EKF that creates an estimated state from sensor readings. */
  /*  */
  /*    Inputs: */
  /*        enable    - flag to enable/disable the filter */
  /*        t         - time */
  /*        w         - angular velocity, {I}_w_{WI} */
  /*        a         - linear acceleration, {I}_a_{WI} */
  /*        encoders  - joint encoder positions */
  /*        contact   - contact indicator */
  /*        X_init    - initial state */
  /*  */
  /*    Outputs: */
  /*        X       - current state estimate */
  /*        theta   - current parameter estimates */
  /*        P       - current covariance estimate  */
  /*        enabled - flag indicating when the filter is enabled */
  /*  */
  /*    Author: Ross Hartley */
  /*    Date:   6/28/2018 */
  /*  */
  /*  Initialize bias */
  /*  (does nothing if bias is already initialized) */
  /*  Initiaze filter */
  /*  (does nothing if filter is already initialized) */
  /*  Only run if filter is enabled */
  /*  Predict state using IMU and contact measurements      */
  /*  Update state using forward kinematic measurements */
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
  /*  Separate state vector into components */
  for (i11 = 0; i11 < 3; i11++) {
    for (i12 = 0; i12 < 3; i12++) {
      R[i12 + 3 * i11] = X[i12 + 7 * i11];
    }
  }

  /*  Orientation */
  /*  Base Velocity */
  /*  Base Position */
  /*  Right Foot Position */
  /*  Left Foot Position */
  /*  Parameters */
  /*  Gyroscope Bias */
  /*  Accelerometer Bias */
  st.site = &vc_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 4);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 8);

  /*  Convert from vector to skew symmetric matrix */
  st.site = &wc_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 4);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 8);

  /*  Convert from vector to skew symmetric matrix */
  st.site = &xc_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 4);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 8);

  /*  Convert from vector to skew symmetric matrix */
  st.site = &yc_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 4);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 8);

  /*  Convert from vector to skew symmetric matrix */
  dv10[0] = 0.0;
  dv10[3] = -X[23];
  dv10[6] = X[22];
  dv10[1] = X[23];
  dv10[4] = 0.0;
  dv10[7] = -X[21];
  dv10[2] = -X[22];
  dv10[5] = X[21];
  dv10[8] = 0.0;
  dv12[0] = 0.0;
  dv12[3] = -X[30];
  dv12[6] = X[29];
  dv12[1] = X[30];
  dv12[4] = 0.0;
  dv12[7] = -X[28];
  dv12[2] = -X[29];
  dv12[5] = X[28];
  dv12[8] = 0.0;
  dv14[0] = 0.0;
  dv14[3] = -X[37];
  dv14[6] = X[36];
  dv14[1] = X[37];
  dv14[4] = 0.0;
  dv14[7] = -X[35];
  dv14[2] = -X[36];
  dv14[5] = X[35];
  dv14[8] = 0.0;
  dv16[0] = 0.0;
  dv16[3] = -X[44];
  dv16[6] = X[43];
  dv16[1] = X[44];
  dv16[4] = 0.0;
  dv16[7] = -X[42];
  dv16[2] = -X[43];
  dv16[5] = X[42];
  dv16[8] = 0.0;
  for (i11 = 0; i11 < 3; i11++) {
    for (i12 = 0; i12 < 3; i12++) {
      dv11[i11 + 3 * i12] = 0.0;
      dv13[i11 + 3 * i12] = 0.0;
      dv15[i11 + 3 * i12] = 0.0;
      dv17[i11 + 3 * i12] = 0.0;
      for (i13 = 0; i13 < 3; i13++) {
        dv11[i11 + 3 * i12] += dv10[i11 + 3 * i13] * R[i13 + 3 * i12];
        dv13[i11 + 3 * i12] += dv12[i11 + 3 * i13] * R[i13 + 3 * i12];
        dv15[i11 + 3 * i12] += dv14[i11 + 3 * i13] * R[i13 + 3 * i12];
        dv17[i11 + 3 * i12] += dv16[i11 + 3 * i13] * R[i13 + 3 * i12];
      }

      AdjX[i12 + 15 * i11] = R[i12 + 3 * i11];
      AdjX[i12 + 15 * (i11 + 3)] = 0.0;
      AdjX[i12 + 15 * (i11 + 6)] = 0.0;
      AdjX[i12 + 15 * (i11 + 9)] = 0.0;
      AdjX[i12 + 15 * (i11 + 12)] = 0.0;
    }
  }

  for (i11 = 0; i11 < 3; i11++) {
    for (i12 = 0; i12 < 3; i12++) {
      AdjX[(i12 + 15 * i11) + 3] = dv11[i12 + 3 * i11];
      AdjX[(i12 + 15 * (i11 + 3)) + 3] = R[i12 + 3 * i11];
      AdjX[(i12 + 15 * (i11 + 6)) + 3] = 0.0;
      AdjX[(i12 + 15 * (i11 + 9)) + 3] = 0.0;
      AdjX[(i12 + 15 * (i11 + 12)) + 3] = 0.0;
      AdjX[(i12 + 15 * i11) + 6] = dv13[i12 + 3 * i11];
      AdjX[(i12 + 15 * (i11 + 3)) + 6] = 0.0;
      AdjX[(i12 + 15 * (i11 + 6)) + 6] = R[i12 + 3 * i11];
      AdjX[(i12 + 15 * (i11 + 9)) + 6] = 0.0;
      AdjX[(i12 + 15 * (i11 + 12)) + 6] = 0.0;
      AdjX[(i12 + 15 * i11) + 9] = dv15[i12 + 3 * i11];
      AdjX[(i12 + 15 * (i11 + 3)) + 9] = 0.0;
      AdjX[(i12 + 15 * (i11 + 6)) + 9] = 0.0;
      AdjX[(i12 + 15 * (i11 + 9)) + 9] = R[i12 + 3 * i11];
      AdjX[(i12 + 15 * (i11 + 12)) + 9] = 0.0;
      AdjX[(i12 + 15 * i11) + 12] = dv17[i12 + 3 * i11];
      AdjX[(i12 + 15 * (i11 + 3)) + 12] = 0.0;
      AdjX[(i12 + 15 * (i11 + 6)) + 12] = 0.0;
      AdjX[(i12 + 15 * (i11 + 9)) + 12] = 0.0;
      AdjX[(i12 + 15 * (i11 + 12)) + 12] = R[i12 + 3 * i11];
    }
  }
}

static void R_VectorNav_to_RightToeBottom(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *
  moduleInstance, real_T var1[14], real_T output1[9])
{
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 3, 0);
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 3, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 3, 1);
  R_VectorNav_to_RightToeBottom_src(output1, var1);
}

static void R_VectorNav_to_LeftToeBottom(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance, real_T var1[14], real_T output1[9])
{
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 4, 0);
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 4, 0, 0, false);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 4, 1);
  R_VectorNav_to_LeftToeBottom_src(output1, var1);
}

static void RightInvariantEKF_Construct_State
  (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance, real_T R[9], real_T v
   [3], real_T p[3], real_T dR[3], real_T dL[3], real_T bg[3], real_T ba[3],
   real_T X[49], real_T theta[6])
{
  int32_T i;
  int32_T i14;
  static int8_T iv7[7] = { 0, 0, 0, 1, 0, 0, 0 };

  static int8_T iv8[7] = { 0, 0, 0, 0, 1, 0, 0 };

  static int8_T iv9[7] = { 0, 0, 0, 0, 0, 1, 0 };

  static int8_T iv10[7] = { 0, 0, 0, 0, 0, 0, 1 };

  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 3);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 7);

  /*  Construct matrix from separate states */
  for (i = 0; i < 3; i++) {
    for (i14 = 0; i14 < 3; i14++) {
      X[i14 + 7 * i] = R[i14 + 3 * i];
    }

    X[21 + i] = v[i];
    X[28 + i] = p[i];
    X[35 + i] = dR[i];
    X[42 + i] = dL[i];
  }

  for (i = 0; i < 7; i++) {
    X[3 + 7 * i] = (real_T)iv7[i];
    X[4 + 7 * i] = (real_T)iv8[i];
    X[5 + 7 * i] = (real_T)iv9[i];
    X[6 + 7 * i] = (real_T)iv10[i];
  }

  /*  Parameters */
  for (i = 0; i < 3; i++) {
    theta[i] = bg[i];
    theta[i + 3] = ba[i];
  }
}

static void RightInvariantEKF_Update_ForwardKinematics
  (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance, const emlrtStack *sp,
   RightInvariantEKF *obj, real_T encoders[14], real_T contact[2])
{
  emlrtStack st;
  real_T R_pred[9];
  int32_T i15;
  int32_T i16;
  real_T s_pR[3];
  real_T s_pL[3];
  real_T JR[42];
  real_T JL[42];
  real_T y[42];
  real_T b[196];
  real_T a[42];
  int32_T i17;
  emlrtStack b_st;
  emlrtStack c_st;
  real_T alpha1;
  real_T beta1;
  char_T TRANSB;
  char_T TRANSA;
  real_T b_a[42];
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  real_T b_y[9];
  real_T N[9];
  real_T b_s_pL[7];
  real_T dv18[7];
  static real_T dv19[63] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.0, -0.0, -0.0, -0.0, -1.0, -0.0,
    -0.0, -0.0, -1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  static real_T dv20[21] = { 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  static real_T dv21[63] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.0, -0.0, -0.0, -0.0, -1.0, -0.0,
    -0.0, -0.0, -1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  real_T varargin_2[9];
  real_T b_N[36];
  real_T b_s_pR[14];
  real_T dv22[14];
  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 12);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 26);

  /*  Function to perform Right-Invariant EKF update from forward */
  /*  kinematic measurements */
  for (i15 = 0; i15 < 3; i15++) {
    for (i16 = 0; i16 < 3; i16++) {
      R_pred[i16 + 3 * i15] = obj->X[i16 + 7 * i15];
    }
  }

  if (covrtLogCond(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 7,
                   contact[1] == 1.0) && covrtLogCond
      (moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 8, contact[0] == 1.0))
  {
    covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 5, true);
    covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 11, true);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 27);

    /*  Double Support */
    st.site = &cd_emlrtRSI;
    covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1, 0);
    covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1, 0, 0, false);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1, 1);
    p_VectorNav_to_RightToeBottom_src(s_pR, encoders);
    st.site = &dd_emlrtRSI;
    covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 2, 0);
    covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 2, 0, 0, false);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 2, 1);
    p_VectorNav_to_LeftToeBottom_src(s_pL, encoders);
    st.site = &ed_emlrtRSI;
    covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 5, 0);
    covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 5, 0, 0, false);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 5, 1);
    J_VectorNav_to_RightToeBottom_src(JR, encoders);
    st.site = &fd_emlrtRSI;
    covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 6, 0);
    covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 6, 0, 0, false);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 6, 1);
    J_VectorNav_to_LeftToeBottom_src(JL, encoders);

    /*  Measurement Model */
    for (i15 = 0; i15 < 3; i15++) {
      for (i16 = 0; i16 < 14; i16++) {
        a[i15 + 3 * i16] = 0.0;
        b_a[i15 + 3 * i16] = 0.0;
        for (i17 = 0; i17 < 3; i17++) {
          a[i15 + 3 * i16] += R_pred[i15 + 3 * i17] * JR[i17 + 3 * i16];
          b_a[i15 + 3 * i16] += R_pred[i15 + 3 * i17] * JL[i17 + 3 * i16];
        }
      }
    }

    st.site = &gd_emlrtRSI;
    for (i15 = 0; i15 < 196; i15++) {
      b[i15] = obj->Qe[i15];
    }

    b_st.site = &ad_emlrtRSI;
    c_st.site = &bd_emlrtRSI;
    alpha1 = 1.0;
    beta1 = 0.0;
    TRANSB = 'N';
    TRANSA = 'N';
    for (i15 = 0; i15 < 42; i15++) {
      y[i15] = 0.0;
    }

    m_t = (ptrdiff_t)3;
    n_t = (ptrdiff_t)14;
    k_t = (ptrdiff_t)14;
    lda_t = (ptrdiff_t)3;
    ldb_t = (ptrdiff_t)14;
    ldc_t = (ptrdiff_t)3;
    dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t, &b[0],
          &ldb_t, &beta1, &y[0], &ldc_t);
    st.site = &hd_emlrtRSI;
    for (i15 = 0; i15 < 196; i15++) {
      b[i15] = obj->Qe[i15];
    }

    b_st.site = &ad_emlrtRSI;
    c_st.site = &bd_emlrtRSI;
    alpha1 = 1.0;
    beta1 = 0.0;
    TRANSB = 'N';
    TRANSA = 'N';
    for (i15 = 0; i15 < 42; i15++) {
      a[i15] = 0.0;
    }

    m_t = (ptrdiff_t)3;
    n_t = (ptrdiff_t)14;
    k_t = (ptrdiff_t)14;
    lda_t = (ptrdiff_t)3;
    ldb_t = (ptrdiff_t)14;
    ldc_t = (ptrdiff_t)3;
    dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &b_a[0], &lda_t, &b[0],
          &ldb_t, &beta1, &a[0], &ldc_t);
    for (i15 = 0; i15 < 3; i15++) {
      for (i16 = 0; i16 < 3; i16++) {
        b_y[i15 + 3 * i16] = 0.0;
        for (i17 = 0; i17 < 14; i17++) {
          b_y[i15 + 3 * i16] += y[i15 + 3 * i17] * JR[i16 + 3 * i17];
        }
      }
    }

    for (i15 = 0; i15 < 3; i15++) {
      for (i16 = 0; i16 < 3; i16++) {
        alpha1 = 0.0;
        for (i17 = 0; i17 < 3; i17++) {
          alpha1 += b_y[i15 + 3 * i17] * R_pred[i16 + 3 * i17];
        }

        N[i15 + 3 * i16] = alpha1 + obj->Np[i15 + 3 * i16];
      }
    }

    for (i15 = 0; i15 < 3; i15++) {
      for (i16 = 0; i16 < 3; i16++) {
        b_y[i15 + 3 * i16] = 0.0;
        for (i17 = 0; i17 < 14; i17++) {
          b_y[i15 + 3 * i16] += a[i15 + 3 * i17] * JL[i16 + 3 * i17];
        }
      }
    }

    for (i15 = 0; i15 < 3; i15++) {
      for (i16 = 0; i16 < 3; i16++) {
        alpha1 = 0.0;
        for (i17 = 0; i17 < 3; i17++) {
          alpha1 += b_y[i15 + 3 * i17] * R_pred[i16 + 3 * i17];
        }

        varargin_2[i15 + 3 * i16] = alpha1 + obj->Np[i15 + 3 * i16];
      }
    }

    for (i15 = 0; i15 < 36; i15++) {
      b_N[i15] = 0.0;
    }

    /*  Update State */
    b_s_pR[3] = 0.0;
    b_s_pR[4] = 1.0;
    b_s_pR[5] = -1.0;
    b_s_pR[6] = 0.0;
    for (i15 = 0; i15 < 3; i15++) {
      for (i16 = 0; i16 < 3; i16++) {
        b_N[i16 + 6 * i15] = N[i16 + 3 * i15];
        b_N[(i16 + 6 * (3 + i15)) + 3] = varargin_2[i16 + 3 * i15];
      }

      b_s_pR[i15] = s_pR[i15];
      b_s_pR[i15 + 7] = s_pL[i15];
    }

    b_s_pR[10] = 0.0;
    b_s_pR[11] = 1.0;
    b_s_pR[12] = 0.0;
    b_s_pR[13] = -1.0;
    for (i15 = 0; i15 < 14; i15++) {
      dv22[i15] = 0.0;
    }

    st.site = &id_emlrtRSI;
    RightInvariantEKF_Update_State(moduleInstance, &st, obj, b_s_pR, dv22, b_N);
  } else {
    covrtLogMcdc(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 5, false);
    covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 11, false);
    if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 12,
                   contact[1] == 1.0)) {
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 28);

      /*  Single Support Right     */
      st.site = &jd_emlrtRSI;
      covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1, 0);
      covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1, 0, 0, false);
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1, 1);
      p_VectorNav_to_RightToeBottom_src(s_pR, encoders);
      st.site = &kd_emlrtRSI;
      covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 5, 0);
      covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 5, 0, 0, false);
      covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 5, 1);
      J_VectorNav_to_RightToeBottom_src(JR, encoders);

      /*  Measurement Model */
      for (i15 = 0; i15 < 3; i15++) {
        for (i16 = 0; i16 < 14; i16++) {
          a[i15 + 3 * i16] = 0.0;
          for (i17 = 0; i17 < 3; i17++) {
            a[i15 + 3 * i16] += R_pred[i15 + 3 * i17] * JR[i17 + 3 * i16];
          }
        }
      }

      st.site = &ld_emlrtRSI;
      for (i15 = 0; i15 < 196; i15++) {
        b[i15] = obj->Qe[i15];
      }

      b_st.site = &ad_emlrtRSI;
      c_st.site = &bd_emlrtRSI;
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      for (i15 = 0; i15 < 42; i15++) {
        y[i15] = 0.0;
      }

      m_t = (ptrdiff_t)3;
      n_t = (ptrdiff_t)14;
      k_t = (ptrdiff_t)14;
      lda_t = (ptrdiff_t)3;
      ldb_t = (ptrdiff_t)14;
      ldc_t = (ptrdiff_t)3;
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t, &b[0],
            &ldb_t, &beta1, &y[0], &ldc_t);
      for (i15 = 0; i15 < 3; i15++) {
        for (i16 = 0; i16 < 3; i16++) {
          b_y[i15 + 3 * i16] = 0.0;
          for (i17 = 0; i17 < 14; i17++) {
            b_y[i15 + 3 * i16] += y[i15 + 3 * i17] * JR[i16 + 3 * i17];
          }
        }
      }

      for (i15 = 0; i15 < 3; i15++) {
        for (i16 = 0; i16 < 3; i16++) {
          alpha1 = 0.0;
          for (i17 = 0; i17 < 3; i17++) {
            alpha1 += b_y[i15 + 3 * i17] * R_pred[i16 + 3 * i17];
          }

          N[i15 + 3 * i16] = alpha1 + obj->Np[i15 + 3 * i16];
        }
      }

      /*  Update State */
      for (i15 = 0; i15 < 3; i15++) {
        b_s_pL[i15] = s_pR[i15];
      }

      b_s_pL[3] = 0.0;
      b_s_pL[4] = 1.0;
      b_s_pL[5] = -1.0;
      b_s_pL[6] = 0.0;
      for (i15 = 0; i15 < 7; i15++) {
        dv18[i15] = 0.0;
      }

      st.site = &md_emlrtRSI;
      b_RightInvariantEKF_Update_State(moduleInstance, &st, obj, b_s_pL, dv18,
        dv19, N, dv20);
    } else {
      if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 13,
                     contact[0] == 1.0)) {
        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 29);

        /*  Single Support Left */
        st.site = &nd_emlrtRSI;
        covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 2, 0);
        covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 2, 0, 0, false);
        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 2, 1);
        p_VectorNav_to_LeftToeBottom_src(s_pL, encoders);
        st.site = &od_emlrtRSI;
        covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 6, 0);
        covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 6, 0, 0, false);
        covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 6, 1);
        J_VectorNav_to_LeftToeBottom_src(JL, encoders);

        /*  Measurement Model */
        for (i15 = 0; i15 < 3; i15++) {
          for (i16 = 0; i16 < 14; i16++) {
            a[i15 + 3 * i16] = 0.0;
            for (i17 = 0; i17 < 3; i17++) {
              a[i15 + 3 * i16] += R_pred[i15 + 3 * i17] * JL[i17 + 3 * i16];
            }
          }
        }

        st.site = &pd_emlrtRSI;
        for (i15 = 0; i15 < 196; i15++) {
          b[i15] = obj->Qe[i15];
        }

        b_st.site = &ad_emlrtRSI;
        c_st.site = &bd_emlrtRSI;
        alpha1 = 1.0;
        beta1 = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        for (i15 = 0; i15 < 42; i15++) {
          y[i15] = 0.0;
        }

        m_t = (ptrdiff_t)3;
        n_t = (ptrdiff_t)14;
        k_t = (ptrdiff_t)14;
        lda_t = (ptrdiff_t)3;
        ldb_t = (ptrdiff_t)14;
        ldc_t = (ptrdiff_t)3;
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t, &b[0],
              &ldb_t, &beta1, &y[0], &ldc_t);
        for (i15 = 0; i15 < 3; i15++) {
          for (i16 = 0; i16 < 3; i16++) {
            b_y[i15 + 3 * i16] = 0.0;
            for (i17 = 0; i17 < 14; i17++) {
              b_y[i15 + 3 * i16] += y[i15 + 3 * i17] * JL[i16 + 3 * i17];
            }
          }
        }

        for (i15 = 0; i15 < 3; i15++) {
          for (i16 = 0; i16 < 3; i16++) {
            alpha1 = 0.0;
            for (i17 = 0; i17 < 3; i17++) {
              alpha1 += b_y[i15 + 3 * i17] * R_pred[i16 + 3 * i17];
            }

            N[i15 + 3 * i16] = alpha1 + obj->Np[i15 + 3 * i16];
          }
        }

        /*  Update State */
        for (i15 = 0; i15 < 3; i15++) {
          b_s_pL[i15] = s_pL[i15];
        }

        b_s_pL[3] = 0.0;
        b_s_pL[4] = 1.0;
        b_s_pL[5] = 0.0;
        b_s_pL[6] = -1.0;
        for (i15 = 0; i15 < 7; i15++) {
          dv18[i15] = 0.0;
        }

        st.site = &qd_emlrtRSI;
        b_RightInvariantEKF_Update_State(moduleInstance, &st, obj, b_s_pL, dv18,
          dv21, N, dv20);
      }
    }
  }
}

static void RightInvariantEKF_Update_State(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance, const emlrtStack *sp, RightInvariantEKF *obj, real_T Y[14],
  real_T b[14], real_T N[36])
{
  emlrtStack st;
  boolean_T b0;
  real_T b_b[441];
  int32_T i18;
  real_T a[126];
  emlrtStack b_st;
  emlrtStack c_st;
  real_T alpha1;
  real_T beta1;
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  static real_T b_a[126] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.0, -0.0, -0.0,
    -1.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -1.0, -0.0,
    -0.0, -1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  real_T y[36];
  static real_T c_b[126] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.0, -0.0, -0.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -1.0, -0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -1.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.0,
    -0.0, -0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -1.0, -0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  real_T c_a[441];
  real_T K[126];
  real_T b_y[36];
  real_T BigX[196];
  int32_T i;
  real_T c_y[294];
  int32_T i19;
  int32_T i20;
  int32_T i21;
  int32_T tmp_size_idx_0;
  int32_T loop_ub;
  int32_T b_tmp_size_idx_0;
  int8_T tmp_data[14];
  int32_T iv11[2];
  int8_T b_tmp_data[14];
  int32_T iv12[2];
  static real_T d_b[84] = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  real_T b_BigX[14];
  real_T dX[49];
  real_T delta[21];
  real_T e_b[49];
  real_T d_y[441];
  real_T IKH[441];
  real_T f_b[126];
  st.prev = sp;
  st.tls = sp->tls;
  b0 = false;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 11);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 23);

  /*  Update State and Covariance from a measurement */
  /*  Compute Kalman Gain */
  st.site = &rd_emlrtRSI;
  for (i18 = 0; i18 < 441; i18++) {
    b_b[i18] = obj->P[i18];
  }

  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  alpha1 = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  for (i18 = 0; i18 < 126; i18++) {
    a[i18] = 0.0;
  }

  m_t = (ptrdiff_t)6;
  n_t = (ptrdiff_t)21;
  k_t = (ptrdiff_t)21;
  lda_t = (ptrdiff_t)6;
  ldb_t = (ptrdiff_t)21;
  ldc_t = (ptrdiff_t)6;
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &b_a[0], &lda_t, &b_b[0],
        &ldb_t, &beta1, &a[0], &ldc_t);
  st.site = &rd_emlrtRSI;
  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  alpha1 = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  for (i18 = 0; i18 < 36; i18++) {
    y[i18] = 0.0;
  }

  m_t = (ptrdiff_t)6;
  n_t = (ptrdiff_t)6;
  k_t = (ptrdiff_t)21;
  lda_t = (ptrdiff_t)6;
  ldb_t = (ptrdiff_t)21;
  ldc_t = (ptrdiff_t)6;
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t, &c_b[0],
        &ldb_t, &beta1, &y[0], &ldc_t);
  st.site = &sd_emlrtRSI;
  for (i18 = 0; i18 < 441; i18++) {
    c_a[i18] = obj->P[i18];
  }

  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  alpha1 = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  for (i18 = 0; i18 < 126; i18++) {
    K[i18] = 0.0;
  }

  m_t = (ptrdiff_t)21;
  n_t = (ptrdiff_t)6;
  k_t = (ptrdiff_t)21;
  lda_t = (ptrdiff_t)21;
  ldb_t = (ptrdiff_t)21;
  ldc_t = (ptrdiff_t)21;
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &c_a[0], &lda_t, &c_b[0],
        &ldb_t, &beta1, &K[0], &ldc_t);
  for (i18 = 0; i18 < 36; i18++) {
    b_y[i18] = y[i18] + N[i18];
  }

  st.site = &sd_emlrtRSI;
  b_mrdivide(&st, K, b_y);

  /*  Compute measurement update */
  for (i18 = 0; i18 < 196; i18++) {
    BigX[i18] = 0.0;
  }

  for (i = 0; i < 2; i++) {
    covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 0, 1);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 24);
    i18 = 7 * i + 1;
    i19 = 7 * (1 + i);
    if (i18 > i19) {
      i18 = 1;
      i19 = 0;
    }

    i20 = 7 * i + 1;
    i21 = 7 * (1 + i);
    if (i20 > i21) {
      i20 = 1;
      i21 = 0;
    }

    tmp_size_idx_0 = (i19 - i18) + 1;
    loop_ub = i19 - i18;
    for (i19 = 0; i19 <= loop_ub; i19++) {
      tmp_data[i19] = (int8_T)((i18 + i19) - 1);
    }

    b_tmp_size_idx_0 = (i21 - i20) + 1;
    loop_ub = i21 - i20;
    for (i18 = 0; i18 <= loop_ub; i18++) {
      b_tmp_data[i18] = (int8_T)((i20 + i18) - 1);
    }

    iv11[0] = tmp_size_idx_0;
    iv11[1] = b_tmp_size_idx_0;
    if (!b0) {
      for (i18 = 0; i18 < 2; i18++) {
        iv12[i18] = 7;
      }

      b0 = true;
    }

    emlrtSubAssignSizeCheckR2012b(iv11, 2, iv12, 2, &emlrtECI, sp);
    for (i18 = 0; i18 < b_tmp_size_idx_0; i18++) {
      for (i19 = 0; i19 < tmp_size_idx_0; i19++) {
        BigX[tmp_data[i19] + 14 * b_tmp_data[i18]] = obj->X[i19 + tmp_size_idx_0
          * i18];
      }
    }

    cgxertListenForCtrlC(moduleInstance->S);
  }

  covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 0, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 25);

  /*  Update State */
  st.site = &td_emlrtRSI;
  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  alpha1 = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  for (i18 = 0; i18 < 294; i18++) {
    c_y[i18] = 0.0;
  }

  m_t = (ptrdiff_t)21;
  n_t = (ptrdiff_t)14;
  k_t = (ptrdiff_t)6;
  lda_t = (ptrdiff_t)21;
  ldb_t = (ptrdiff_t)6;
  ldc_t = (ptrdiff_t)21;
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &K[0], &lda_t, &d_b[0],
        &ldb_t, &beta1, &c_y[0], &ldc_t);
  for (i18 = 0; i18 < 14; i18++) {
    alpha1 = 0.0;
    for (i19 = 0; i19 < 14; i19++) {
      alpha1 += BigX[i18 + 14 * i19] * Y[i19];
    }

    b_BigX[i18] = alpha1 - b[i18];
  }

  for (i18 = 0; i18 < 21; i18++) {
    delta[i18] = 0.0;
    for (i19 = 0; i19 < 14; i19++) {
      delta[i18] += c_y[i18 + 21 * i19] * b_BigX[i19];
    }
  }

  st.site = &ud_emlrtRSI;
  RightInvariantEKF_exp(moduleInstance, *(real_T (*)[15])&delta[0], dX);
  for (i18 = 0; i18 < 49; i18++) {
    e_b[i18] = obj->X[i18];
  }

  for (i18 = 0; i18 < 7; i18++) {
    for (i19 = 0; i19 < 7; i19++) {
      obj->X[i18 + 7 * i19] = 0.0;
      for (i20 = 0; i20 < 7; i20++) {
        obj->X[i18 + 7 * i19] += dX[i18 + 7 * i20] * e_b[i20 + 7 * i19];
      }
    }
  }

  for (i18 = 0; i18 < 6; i18++) {
    obj->theta[i18] += delta[15 + i18];
  }

  /*  Update Covariance */
  st.site = &vd_emlrtRSI;
  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  alpha1 = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  for (i18 = 0; i18 < 441; i18++) {
    d_y[i18] = 0.0;
  }

  m_t = (ptrdiff_t)21;
  n_t = (ptrdiff_t)21;
  k_t = (ptrdiff_t)6;
  lda_t = (ptrdiff_t)21;
  ldb_t = (ptrdiff_t)6;
  ldc_t = (ptrdiff_t)21;
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &K[0], &lda_t, &b_a[0],
        &ldb_t, &beta1, &d_y[0], &ldc_t);
  eye(IKH);
  for (i18 = 0; i18 < 441; i18++) {
    IKH[i18] -= d_y[i18];
  }

  st.site = &wd_emlrtRSI;
  for (i18 = 0; i18 < 441; i18++) {
    b_b[i18] = obj->P[i18];
  }

  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  alpha1 = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  for (i18 = 0; i18 < 441; i18++) {
    c_a[i18] = 0.0;
  }

  m_t = (ptrdiff_t)21;
  n_t = (ptrdiff_t)21;
  k_t = (ptrdiff_t)21;
  lda_t = (ptrdiff_t)21;
  ldb_t = (ptrdiff_t)21;
  ldc_t = (ptrdiff_t)21;
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &IKH[0], &lda_t, &b_b[0],
        &ldb_t, &beta1, &c_a[0], &ldc_t);
  st.site = &wd_emlrtRSI;
  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  alpha1 = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  for (i18 = 0; i18 < 126; i18++) {
    a[i18] = 0.0;
  }

  m_t = (ptrdiff_t)21;
  n_t = (ptrdiff_t)6;
  k_t = (ptrdiff_t)6;
  lda_t = (ptrdiff_t)21;
  ldb_t = (ptrdiff_t)6;
  ldc_t = (ptrdiff_t)21;
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &K[0], &lda_t, &N[0],
        &ldb_t, &beta1, &a[0], &ldc_t);
  st.site = &wd_emlrtRSI;
  for (i18 = 0; i18 < 21; i18++) {
    for (i19 = 0; i19 < 21; i19++) {
      b_b[i19 + 21 * i18] = IKH[i18 + 21 * i19];
    }
  }

  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  alpha1 = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  for (i18 = 0; i18 < 441; i18++) {
    d_y[i18] = 0.0;
  }

  m_t = (ptrdiff_t)21;
  n_t = (ptrdiff_t)21;
  k_t = (ptrdiff_t)21;
  lda_t = (ptrdiff_t)21;
  ldb_t = (ptrdiff_t)21;
  ldc_t = (ptrdiff_t)21;
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &c_a[0], &lda_t, &b_b[0],
        &ldb_t, &beta1, &d_y[0], &ldc_t);
  st.site = &wd_emlrtRSI;
  for (i18 = 0; i18 < 21; i18++) {
    for (i19 = 0; i19 < 6; i19++) {
      f_b[i19 + 6 * i18] = K[i18 + 21 * i19];
    }
  }

  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  alpha1 = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  for (i18 = 0; i18 < 441; i18++) {
    b_b[i18] = 0.0;
  }

  m_t = (ptrdiff_t)21;
  n_t = (ptrdiff_t)21;
  k_t = (ptrdiff_t)6;
  lda_t = (ptrdiff_t)21;
  ldb_t = (ptrdiff_t)6;
  ldc_t = (ptrdiff_t)21;
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t, &f_b[0],
        &ldb_t, &beta1, &b_b[0], &ldc_t);
  for (i18 = 0; i18 < 441; i18++) {
    obj->P[i18] = d_y[i18] + b_b[i18];
  }

  /*  Joseph update form */
}

static void check_forloop_overflow_error(const emlrtStack *sp)
{
  emlrtStack st;
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv13[2] = { 1, 34 };

  static char_T u[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l', 'b',
    'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p', '_',
    'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *b_y;
  static const int32_T iv14[2] = { 1, 5 };

  static char_T b_u[5] = { 'i', 'n', 't', '3', '2' };

  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m2 = emlrtCreateCharArray(2, iv13);
  emlrtInitCharArrayR2013a(sp, 34, m2, &u[0]);
  emlrtAssign(&y, m2);
  b_y = NULL;
  m2 = emlrtCreateCharArray(2, iv14);
  emlrtInitCharArrayR2013a(sp, 5, m2, &b_u[0]);
  emlrtAssign(&b_y, m2);
  st.site = &ve_emlrtRSI;
  b_error(&st, message(&st, y, b_y, &c_emlrtMCI), &c_emlrtMCI);
}

static void warning(const emlrtStack *sp)
{
  emlrtStack st;
  const mxArray *y;
  const mxArray *m3;
  static const int32_T iv15[2] = { 1, 7 };

  static char_T u[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *b_y;
  static const int32_T iv16[2] = { 1, 7 };

  static char_T b_u[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c_y;
  static const int32_T iv17[2] = { 1, 27 };

  static char_T msgID[27] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't', 'r',
    'i', 'x' };

  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m3 = emlrtCreateCharArray(2, iv15);
  emlrtInitCharArrayR2013a(sp, 7, m3, &u[0]);
  emlrtAssign(&y, m3);
  b_y = NULL;
  m3 = emlrtCreateCharArray(2, iv16);
  emlrtInitCharArrayR2013a(sp, 7, m3, &b_u[0]);
  emlrtAssign(&b_y, m3);
  c_y = NULL;
  m3 = emlrtCreateCharArray(2, iv17);
  emlrtInitCharArrayR2013a(sp, 27, m3, &msgID[0]);
  emlrtAssign(&c_y, m3);
  st.site = &xe_emlrtRSI;
  b_feval(&st, y, feval(&st, b_y, c_y, &d_emlrtMCI), &e_emlrtMCI);
}

static void RightInvariantEKF_exp(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance, real_T v[15], real_T dX[49])
{
  emlrtStack st;
  real_T A[9];
  real_T phi;
  int8_T I[9];
  real_T R[9];
  int32_T k;
  real_T y;
  real_T Jr[9];
  emlrtStack b_st;
  emlrtStack c_st;
  real_T b_y;
  int32_T i22;
  int32_T i23;
  real_T b_Jr[3];
  real_T c_Jr[3];
  real_T d_Jr[3];
  real_T e_Jr[3];
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 5);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 9);

  /*  Exponential map of SE_N(3) */
  st.site = &oe_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 4);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 8);

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
  phi = norm(*(real_T (*)[3])&v[0]);
  if (covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 3, phi <
                 1.0E-6)) {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 10);
    for (k = 0; k < 9; k++) {
      R[k] = 0.0;
    }

    for (k = 0; k < 3; k++) {
      R[k + 3 * k] = 1.0;
    }

    for (k = 0; k < 9; k++) {
      Jr[k] = 0.0;
    }

    for (k = 0; k < 3; k++) {
      Jr[k + 3 * k] = 1.0;
    }
  } else {
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 11);
    for (k = 0; k < 9; k++) {
      I[k] = 0;
    }

    for (k = 0; k < 3; k++) {
      I[k + 3 * k] = 1;
    }

    y = muDoubleScalarSin(phi) / phi;
    st.site = &pe_emlrtRSI;
    b_st.site = &rc_emlrtRSI;
    c_st.site = &sc_emlrtRSI;
    b_y = (1.0 - muDoubleScalarCos(phi)) / (phi * phi);
    for (k = 0; k < 3; k++) {
      for (i22 = 0; i22 < 3; i22++) {
        Jr[k + 3 * i22] = 0.0;
        for (i23 = 0; i23 < 3; i23++) {
          Jr[k + 3 * i22] += A[k + 3 * i23] * A[i23 + 3 * i22];
        }
      }
    }

    for (k = 0; k < 3; k++) {
      for (i22 = 0; i22 < 3; i22++) {
        R[i22 + 3 * k] = ((real_T)I[i22 + 3 * k] + y * A[i22 + 3 * k]) + b_y *
          Jr[i22 + 3 * k];
      }
    }

    for (k = 0; k < 9; k++) {
      I[k] = 0;
    }

    for (k = 0; k < 3; k++) {
      I[k + 3 * k] = 1;
    }

    st.site = &qe_emlrtRSI;
    b_st.site = &rc_emlrtRSI;
    c_st.site = &sc_emlrtRSI;
    y = (1.0 - muDoubleScalarCos(phi)) / (phi * phi);
    st.site = &qe_emlrtRSI;
    b_st.site = &rc_emlrtRSI;
    c_st.site = &sc_emlrtRSI;
    b_y = (phi - muDoubleScalarSin(phi)) / muDoubleScalarPower(phi, 3.0);
    for (k = 0; k < 3; k++) {
      for (i22 = 0; i22 < 3; i22++) {
        phi = 0.0;
        for (i23 = 0; i23 < 3; i23++) {
          phi += b_y * A[k + 3 * i23] * A[i23 + 3 * i22];
        }

        Jr[k + 3 * i22] = ((real_T)I[k + 3 * i22] + y * A[k + 3 * i22]) + phi;
      }
    }
  }

  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 12);

  /*  Construct group */
  for (k = 0; k < 49; k++) {
    dX[k] = 0.0;
  }

  for (k = 0; k < 7; k++) {
    dX[k + 7 * k] = 1.0;
  }

  for (k = 0; k < 3; k++) {
    b_Jr[k] = 0.0;
    c_Jr[k] = 0.0;
    d_Jr[k] = 0.0;
    e_Jr[k] = 0.0;
    for (i22 = 0; i22 < 3; i22++) {
      dX[i22 + 7 * k] = R[i22 + 3 * k];
      b_Jr[k] += Jr[k + 3 * i22] * v[3 + i22];
      c_Jr[k] += Jr[k + 3 * i22] * v[6 + i22];
      d_Jr[k] += Jr[k + 3 * i22] * v[9 + i22];
      e_Jr[k] += Jr[k + 3 * i22] * v[12 + i22];
    }

    dX[21 + k] = b_Jr[k];
    dX[28 + k] = c_Jr[k];
    dX[35 + k] = d_Jr[k];
    dX[42 + k] = e_Jr[k];
  }
}

static void b_RightInvariantEKF_Update_State
  (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance, const emlrtStack *sp,
   RightInvariantEKF *obj, real_T Y[7], real_T b[7], real_T H[63], real_T N[9],
   real_T PI[21])
{
  emlrtStack st;
  real_T y[63];
  real_T b_b[441];
  int32_T i24;
  emlrtStack b_st;
  emlrtStack c_st;
  real_T alpha1;
  real_T beta1;
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  real_T a[441];
  real_T K[63];
  real_T b_K[63];
  int32_T i25;
  real_T b_y[9];
  int32_T i26;
  real_T BigX[49];
  real_T c_K[147];
  real_T b_BigX[7];
  real_T delta[21];
  real_T c_b[49];
  real_T c_y[441];
  real_T IKH[441];
  st.prev = sp;
  st.tls = sp->tls;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 11);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 23);

  /*  Update State and Covariance from a measurement */
  /*  Compute Kalman Gain */
  st.site = &rd_emlrtRSI;
  for (i24 = 0; i24 < 441; i24++) {
    b_b[i24] = obj->P[i24];
  }

  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  alpha1 = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  for (i24 = 0; i24 < 63; i24++) {
    y[i24] = 0.0;
  }

  m_t = (ptrdiff_t)3;
  n_t = (ptrdiff_t)21;
  k_t = (ptrdiff_t)21;
  lda_t = (ptrdiff_t)3;
  ldb_t = (ptrdiff_t)21;
  ldc_t = (ptrdiff_t)3;
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &H[0], &lda_t, &b_b[0],
        &ldb_t, &beta1, &y[0], &ldc_t);
  st.site = &sd_emlrtRSI;
  for (i24 = 0; i24 < 441; i24++) {
    a[i24] = obj->P[i24];
  }

  for (i24 = 0; i24 < 3; i24++) {
    for (i25 = 0; i25 < 21; i25++) {
      K[i25 + 21 * i24] = H[i24 + 3 * i25];
    }
  }

  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  alpha1 = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  for (i24 = 0; i24 < 63; i24++) {
    b_K[i24] = 0.0;
  }

  m_t = (ptrdiff_t)21;
  n_t = (ptrdiff_t)3;
  k_t = (ptrdiff_t)21;
  lda_t = (ptrdiff_t)21;
  ldb_t = (ptrdiff_t)21;
  ldc_t = (ptrdiff_t)21;
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t, &K[0],
        &ldb_t, &beta1, &b_K[0], &ldc_t);
  for (i24 = 0; i24 < 3; i24++) {
    for (i25 = 0; i25 < 3; i25++) {
      alpha1 = 0.0;
      for (i26 = 0; i26 < 21; i26++) {
        alpha1 += y[i24 + 3 * i26] * H[i25 + 3 * i26];
      }

      b_y[i24 + 3 * i25] = alpha1 + N[i24 + 3 * i25];
    }
  }

  st.site = &sd_emlrtRSI;
  mrdivide(&st, b_K, b_y, K);

  /*  Compute measurement update */
  covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 0, 1);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 24);
  for (i24 = 0; i24 < 49; i24++) {
    BigX[i24] = obj->X[i24];
  }

  covrtLogFor(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 0, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 25);

  /*  Update State */
  for (i24 = 0; i24 < 21; i24++) {
    for (i25 = 0; i25 < 7; i25++) {
      c_K[i24 + 21 * i25] = 0.0;
      for (i26 = 0; i26 < 3; i26++) {
        c_K[i24 + 21 * i25] += K[i24 + 21 * i26] * PI[i26 + 3 * i25];
      }
    }
  }

  for (i24 = 0; i24 < 7; i24++) {
    alpha1 = 0.0;
    for (i25 = 0; i25 < 7; i25++) {
      alpha1 += BigX[i24 + 7 * i25] * Y[i25];
    }

    b_BigX[i24] = alpha1 - b[i24];
  }

  for (i24 = 0; i24 < 21; i24++) {
    delta[i24] = 0.0;
    for (i25 = 0; i25 < 7; i25++) {
      delta[i24] += c_K[i24 + 21 * i25] * b_BigX[i25];
    }
  }

  st.site = &ud_emlrtRSI;
  RightInvariantEKF_exp(moduleInstance, *(real_T (*)[15])&delta[0], BigX);
  for (i24 = 0; i24 < 49; i24++) {
    c_b[i24] = obj->X[i24];
  }

  for (i24 = 0; i24 < 7; i24++) {
    for (i25 = 0; i25 < 7; i25++) {
      obj->X[i24 + 7 * i25] = 0.0;
      for (i26 = 0; i26 < 7; i26++) {
        obj->X[i24 + 7 * i25] += BigX[i24 + 7 * i26] * c_b[i26 + 7 * i25];
      }
    }
  }

  for (i24 = 0; i24 < 6; i24++) {
    obj->theta[i24] += delta[15 + i24];
  }

  /*  Update Covariance */
  st.site = &vd_emlrtRSI;
  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  alpha1 = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  for (i24 = 0; i24 < 441; i24++) {
    c_y[i24] = 0.0;
  }

  m_t = (ptrdiff_t)21;
  n_t = (ptrdiff_t)21;
  k_t = (ptrdiff_t)3;
  lda_t = (ptrdiff_t)21;
  ldb_t = (ptrdiff_t)3;
  ldc_t = (ptrdiff_t)21;
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &K[0], &lda_t, &H[0],
        &ldb_t, &beta1, &c_y[0], &ldc_t);
  eye(IKH);
  for (i24 = 0; i24 < 441; i24++) {
    IKH[i24] -= c_y[i24];
  }

  st.site = &wd_emlrtRSI;
  for (i24 = 0; i24 < 441; i24++) {
    b_b[i24] = obj->P[i24];
  }

  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  alpha1 = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  for (i24 = 0; i24 < 441; i24++) {
    a[i24] = 0.0;
  }

  m_t = (ptrdiff_t)21;
  n_t = (ptrdiff_t)21;
  k_t = (ptrdiff_t)21;
  lda_t = (ptrdiff_t)21;
  ldb_t = (ptrdiff_t)21;
  ldc_t = (ptrdiff_t)21;
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &IKH[0], &lda_t, &b_b[0],
        &ldb_t, &beta1, &a[0], &ldc_t);
  for (i24 = 0; i24 < 21; i24++) {
    for (i25 = 0; i25 < 3; i25++) {
      b_K[i24 + 21 * i25] = 0.0;
      for (i26 = 0; i26 < 3; i26++) {
        b_K[i24 + 21 * i25] += K[i24 + 21 * i26] * N[i26 + 3 * i25];
      }
    }
  }

  for (i24 = 0; i24 < 21; i24++) {
    for (i25 = 0; i25 < 3; i25++) {
      y[i25 + 3 * i24] = b_K[i25 + 3 * i24];
    }
  }

  st.site = &wd_emlrtRSI;
  for (i24 = 0; i24 < 21; i24++) {
    for (i25 = 0; i25 < 21; i25++) {
      b_b[i25 + 21 * i24] = IKH[i24 + 21 * i25];
    }
  }

  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  alpha1 = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  for (i24 = 0; i24 < 441; i24++) {
    c_y[i24] = 0.0;
  }

  m_t = (ptrdiff_t)21;
  n_t = (ptrdiff_t)21;
  k_t = (ptrdiff_t)21;
  lda_t = (ptrdiff_t)21;
  ldb_t = (ptrdiff_t)21;
  ldc_t = (ptrdiff_t)21;
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t, &b_b[0],
        &ldb_t, &beta1, &c_y[0], &ldc_t);
  st.site = &wd_emlrtRSI;
  for (i24 = 0; i24 < 21; i24++) {
    for (i25 = 0; i25 < 3; i25++) {
      b_K[i25 + 3 * i24] = K[i24 + 21 * i25];
    }
  }

  for (i24 = 0; i24 < 3; i24++) {
    for (i25 = 0; i25 < 21; i25++) {
      K[i25 + 21 * i24] = b_K[i25 + 21 * i24];
    }
  }

  b_st.site = &ad_emlrtRSI;
  c_st.site = &bd_emlrtRSI;
  alpha1 = 1.0;
  beta1 = 0.0;
  TRANSB = 'N';
  TRANSA = 'N';
  for (i24 = 0; i24 < 441; i24++) {
    b_b[i24] = 0.0;
  }

  m_t = (ptrdiff_t)21;
  n_t = (ptrdiff_t)21;
  k_t = (ptrdiff_t)3;
  lda_t = (ptrdiff_t)21;
  ldb_t = (ptrdiff_t)3;
  ldc_t = (ptrdiff_t)21;
  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, &alpha1, &y[0], &lda_t, &K[0],
        &ldb_t, &beta1, &b_b[0], &ldc_t);
  for (i24 = 0; i24 < 441; i24++) {
    obj->P[i24] = c_y[i24] + b_b[i24];
  }

  /*  Joseph update form */
}

static void mrdivide(const emlrtStack *sp, real_T A[63], real_T B[9], real_T y
                     [63])
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  real_T b_A[9];
  int32_T rtemp;
  int32_T r1;
  int32_T r2;
  int32_T r3;
  real_T maxval;
  real_T a21;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &xd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &re_emlrtRSI;
  for (rtemp = 0; rtemp < 9; rtemp++) {
    b_A[rtemp] = B[rtemp];
  }

  r1 = 0;
  r2 = 1;
  r3 = 2;
  maxval = muDoubleScalarAbs(B[0]);
  a21 = muDoubleScalarAbs(B[1]);
  if (a21 > maxval) {
    maxval = a21;
    r1 = 1;
    r2 = 0;
  }

  if (muDoubleScalarAbs(B[2]) > maxval) {
    r1 = 2;
    r2 = 1;
    r3 = 0;
  }

  b_A[r2] = B[r2] / B[r1];
  b_A[r3] /= b_A[r1];
  b_A[3 + r2] -= b_A[r2] * b_A[3 + r1];
  b_A[3 + r3] -= b_A[r3] * b_A[3 + r1];
  b_A[6 + r2] -= b_A[r2] * b_A[6 + r1];
  b_A[6 + r3] -= b_A[r3] * b_A[6 + r1];
  if (muDoubleScalarAbs(b_A[3 + r3]) > muDoubleScalarAbs(b_A[3 + r2])) {
    rtemp = r2 + 1;
    r2 = r3;
    r3 = rtemp - 1;
  }

  b_A[3 + r3] /= b_A[3 + r2];
  b_A[6 + r3] -= b_A[3 + r3] * b_A[6 + r2];
  if ((b_A[r1] == 0.0) || (b_A[3 + r2] == 0.0) || (b_A[6 + r3] == 0.0)) {
    c_st.site = &se_emlrtRSI;
    d_st.site = &ne_emlrtRSI;
    warning(&d_st);
  }

  for (rtemp = 0; rtemp < 21; rtemp++) {
    y[rtemp + 21 * r1] = A[rtemp] / b_A[r1];
    y[rtemp + 21 * r2] = A[21 + rtemp] - y[rtemp + 21 * r1] * b_A[3 + r1];
    y[rtemp + 21 * r3] = A[42 + rtemp] - y[rtemp + 21 * r1] * b_A[6 + r1];
    y[rtemp + 21 * r2] /= b_A[3 + r2];
    y[rtemp + 21 * r3] -= y[rtemp + 21 * r2] * b_A[6 + r2];
    y[rtemp + 21 * r3] /= b_A[6 + r3];
    y[rtemp + 21 * r2] -= y[rtemp + 21 * r3] * b_A[3 + r3];
    y[rtemp + 21 * r1] -= y[rtemp + 21 * r3] * b_A[r3];
    y[rtemp + 21 * r1] -= y[rtemp + 21 * r2] * b_A[r2];
  }
}

static void cgxe_mdl_start(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack b_st;
  emlrtStack c_st;
  const mxArray *m4;
  static const int32_T iv18[2] = { 0, 0 };

  static const int32_T iv19[2] = { 0, 0 };

  int32_T cond_starts_0_0[1] = { 12089 };

  int32_T cond_ends_0_0[1] = { 12109 };

  int32_T postfix_exprs_0_0[2] = { 0, -1 };

  int32_T cond_starts_0_1[2] = { 12133, 12148 };

  int32_T cond_ends_0_1[2] = { 12144, 12159 };

  int32_T postfix_exprs_0_1[3] = { 0, 1, -3 };

  int32_T cond_starts_0_2[2] = { 13258, 13269 };

  int32_T cond_ends_0_2[2] = { 13264, 13287 };

  int32_T postfix_exprs_0_2[4] = { 0, 1, -1, -3 };

  int32_T cond_starts_0_3[2] = { 13535, 13546 };

  int32_T cond_ends_0_3[2] = { 13541, 13564 };

  int32_T postfix_exprs_0_3[5] = { 0, -1, 1, -1, -2 };

  int32_T cond_starts_0_4[2] = { 17702, 17721 };

  int32_T cond_ends_0_4[2] = { 17717, 17736 };

  int32_T postfix_exprs_0_4[3] = { 0, 1, -3 };

  int32_T cond_starts_0_5[2] = { 6959, 6970 };

  int32_T cond_ends_0_5[2] = { 6966, 6987 };

  int32_T postfix_exprs_0_5[3] = { 0, 1, -3 };

  real_T varargin_4[3];
  real_T varargin_5[3];
  real_T varargin_6[3];
  real_T varargin_7[3];
  real_T varargin_8[3];
  int32_T i;
  real_T varargin_9[14];
  real_T varargin_10[3];
  real_T varargin_11[3];
  real_T varargin_12[6];
  real_T varargin_13[3];
  real_T varargin_14[3];
  real_T varargin_15[3];
  real_T varargin_16[3];
  real_T varargin_17[3];
  RightInvariantEKF *obj;
  const mxArray *y;
  static const int32_T iv20[2] = { 1, 51 };

  static char_T u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's', 't',
    'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e', 'd',
    'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e', 'a',
    's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  emlrtStack d_st;
  emlrtStack e_st;
  const mxArray *b_y;
  static const int32_T iv21[2] = { 1, 5 };

  static char_T b_u[5] = { 's', 'e', 't', 'u', 'p' };

  static const int32_T iv22[2] = { 1, 44 };

  static char_T c_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  boolean_T flag;
  boolean_T *static_bias_initialization;
  boolean_T *ekf_update_enabled;
  boolean_T *enable_bias_estimation;
  real_T (*gyro_noise_std)[3];
  real_T (*gyro_bias_noise_std)[3];
  real_T (*accel_noise_std)[3];
  real_T (*encoder_noise_std)[14];
  real_T (*accel_bias_noise_std)[3];
  real_T (*contact_noise_std)[3];
  real_T (*gyro_bias_init)[3];
  real_T (*accel_bias_init)[3];
  real_T (*prior_base_pose_std)[6];
  real_T (*prior_base_velocity_std)[3];
  real_T (*prior_contact_position_std)[3];
  real_T (*prior_gyro_bias_std)[3];
  real_T (*prior_accel_bias_std)[3];
  real_T (*prior_forward_kinematics_std)[3];
  init_simulink_io_address(moduleInstance);
  prior_forward_kinematics_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 16);
  prior_accel_bias_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 15);
  prior_gyro_bias_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 14);
  prior_contact_position_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 13);
  prior_base_velocity_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 12);
  prior_base_pose_std = (real_T (*)[6])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 11);
  accel_bias_init = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 10);
  gyro_bias_init = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 9);
  contact_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 7);
  accel_bias_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 6);
  encoder_noise_std = (real_T (*)[14])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 8);
  accel_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 5);
  gyro_bias_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 4);
  gyro_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
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
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  m4 = emlrtCreateNumericArray(2, iv18, mxDOUBLE_CLASS, mxREAL);
  emlrtAssignP(&b_eml_mx, m4);
  m4 = emlrtCreateCharArray(2, iv19);
  emlrtAssignP(&eml_mx, m4);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\Estimators\\RightInvariant_EKF\\R"
                  "ightInvariantEKF.m", 0U, 13U, 30U, 14U, 0U, 0U, 0U, 1U, 0U,
                  11U, 6U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U,
               "RightInvariantEKF_RightInvariantEKF", 27, -1, 44);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 2U,
               "RightInvariantEKF_Separate_State", 9433, -1, 9929);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 3U,
               "RightInvariantEKF_Construct_State", 9947, -1, 10226);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 4U,
               "RightInvariantEKF_skew", 10244, -1, 10454);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 5U,
               "RightInvariantEKF_exp", 10464, -1, 11021);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 6U,
               "RightInvariantEKF_exp_SO3", 11039, -1, 11349);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 7U,
               "RightInvariantEKF_Adjoint", 11359, -1, 11898);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 8U,
               "RightInvariantEKF_InitializeBias", 11931, -1, 13049);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 9U,
               "RightInvariantEKF_InitializeFilter", 13067, -1, 13754);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 10U,
               "RightInvariantEKF_Predict_State", 13772, -1, 16558);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 11U,
               "RightInvariantEKF_Update_State", 16576, -1, 17436);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 12U,
               "RightInvariantEKF_Update_ForwardKinematics", 17463, -1, 19992);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 1U,
               "RightInvariantEKF_stepImpl", 5712, -1, 7974);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U, 27,
                      -1, 44);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 6U,
                      9562, -1, 9895);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 7U,
                      10077, -1, 10213);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 8U,
                      10341, -1, 10441);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 12U,
                      10920, -1, 11008);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 11U,
                      10715, -1, 10860);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 10U,
                      10641, -1, 10680);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 9U,
                      10545, -1, 10597);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 15U,
                      11262, -1, 11320);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 14U,
                      11217, -1, 11227);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 13U,
                      11121, -1, 11173);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 16U,
                      11445, -1, 11885);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 19U,
                      12993, -1, 13020);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 18U,
                      12735, -1, 12886);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 17U,
                      12346, -1, 12599);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 21U,
                      13581, -1, 13712);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 20U,
                      13304, -1, 13447);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 22U,
                      13920, -1, 16545);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 25U,
                      17019, -1, 17389);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 24U,
                      16948, -1, 16989);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 23U,
                      16731, -1, 16905);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 29U,
                      19440, -1, 19933);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 28U,
                      18820, -1, 19331);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 27U,
                      17787, -1, 18698);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 26U,
                      17649, -1, 17672);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 5U,
                      7648, -1, 7960);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 4U,
                      7493, -1, 7540);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 3U,
                      7250, -1, 7344);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 2U,
                      7005, -1, 7041);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 1U,
                      6806, -1, 6838);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 3U, 10611,
              10624, 10694, 10877);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 4U, 11187,
              11200, 11241, 11337);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 5U, 12035,
              12068, 12972, 13037);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 6U, 12085,
              12109, -1, 12959);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 7U, 12130,
              12159, -1, 12939);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 8U, 12208,
              12257, 12625, 12915);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 9U, 13255,
              13287, -1, 13464);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 10U, 13531,
              13564, -1, 13729);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 11U, 17699,
              17736, 18737, 18759);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 12U, 18737,
              18759, 19362, 19967);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 13U, 19362,
              19384, -1, 19384);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U, 6956, 6987,
              -1, 7058);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 1U, 7128, 7149,
              -1, 7590);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 2U, 7447, 7472,
              -1, 7561);

  /* Initialize MCDC Information */
  covrtMcdcInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 1U, 12088,
                12109, 1, 0, cond_starts_0_0, cond_ends_0_0, 2,
                postfix_exprs_0_0);
  covrtMcdcInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 2U, 12133,
                12159, 2, 1, cond_starts_0_1, cond_ends_0_1, 3,
                postfix_exprs_0_1);
  covrtMcdcInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 3U, 13258,
                13287, 2, 3, cond_starts_0_2, cond_ends_0_2, 4,
                postfix_exprs_0_2);
  covrtMcdcInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 4U, 13534,
                13564, 2, 5, cond_starts_0_3, cond_ends_0_3, 5,
                postfix_exprs_0_3);
  covrtMcdcInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 5U, 17702,
                17736, 2, 7, cond_starts_0_4, cond_ends_0_4, 3,
                postfix_exprs_0_4);
  covrtMcdcInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U, 6959,
                6987, 2, 9, cond_starts_0_5, cond_ends_0_5, 3, postfix_exprs_0_5);

  /* Initialize For Information */
  covrtForInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U, 16919,
               16932, 17006);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\gen\\kin\\m\\p_VectorNav_to_RightT"
                  "oeBottom.m", 1U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1U, 0U,
               "p_VectorNav_to_RightToeBottom", 0, -1, 411);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1U, 1U, 165,
                      -1, 398);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1U, 0U, 95,
                      -1, 146);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1U, 0U, 61, 86, 152,
              407);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 1U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\gen\\kin\\m\\p_VectorNav_to_LeftTo"
                  "eBottom.m", 2U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 2U, 0U,
               "p_VectorNav_to_LeftToeBottom", 0, -1, 407);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 2U, 1U, 163,
                      -1, 394);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 2U, 0U, 94,
                      -1, 144);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 2U, 0U, 60, 85, 150,
              403);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 2U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\gen\\kin\\m\\R_VectorNav_to_RightT"
                  "oeBottom.m", 3U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 3U, 0U,
               "R_VectorNav_to_RightToeBottom", 0, -1, 411);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 3U, 1U, 165,
                      -1, 398);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 3U, 0U, 95,
                      -1, 146);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 3U, 0U, 61, 86, 152,
              407);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 3U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\gen\\kin\\m\\R_VectorNav_to_LeftTo"
                  "eBottom.m", 4U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 4U, 0U,
               "R_VectorNav_to_LeftToeBottom", 0, -1, 407);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 4U, 1U, 163,
                      -1, 394);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 4U, 0U, 94,
                      -1, 144);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 4U, 0U, 60, 85, 150,
              403);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 4U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\gen\\kin\\m\\J_VectorNav_to_RightT"
                  "oeBottom.m", 5U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 5U, 0U,
               "J_VectorNav_to_RightToeBottom", 0, -1, 412);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 5U, 1U, 165,
                      -1, 399);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 5U, 0U, 95,
                      -1, 146);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 5U, 0U, 61, 86, 152,
              408);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 5U);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\Ross Hartley\\Documents\\GitHub\\Ross_Cassie_Controllers\\submodules\\Cassie_StateEstimation\\gen\\kin\\m\\J_VectorNav_to_LeftTo"
                  "eBottom.m", 6U, 1U, 2U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 6U, 0U,
               "J_VectorNav_to_LeftToeBottom", 0, -1, 408);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 6U, 1U, 163,
                      -1, 395);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 6U, 0U, 94,
                      -1, 144);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 6U, 0U, 60, 85, 150,
              404);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 6U);
  for (i = 0; i < 3; i++) {
    varargin_4[i] = (*gyro_noise_std)[i];
    varargin_5[i] = (*gyro_bias_noise_std)[i];
    varargin_6[i] = (*accel_noise_std)[i];
    varargin_7[i] = (*accel_bias_noise_std)[i];
    varargin_8[i] = (*contact_noise_std)[i];
  }

  for (i = 0; i < 14; i++) {
    varargin_9[i] = (*encoder_noise_std)[i];
  }

  for (i = 0; i < 3; i++) {
    varargin_10[i] = (*gyro_bias_init)[i];
    varargin_11[i] = (*accel_bias_init)[i];
  }

  for (i = 0; i < 6; i++) {
    varargin_12[i] = (*prior_base_pose_std)[i];
  }

  for (i = 0; i < 3; i++) {
    varargin_13[i] = (*prior_base_velocity_std)[i];
    varargin_14[i] = (*prior_contact_position_std)[i];
    varargin_15[i] = (*prior_gyro_bias_std)[i];
    varargin_16[i] = (*prior_accel_bias_std)[i];
    varargin_17[i] = (*prior_forward_kinematics_std)[i];
  }

  if (!moduleInstance->sysobj_not_empty) {
    b_st.site = &f_emlrtRSI;
    obj = &moduleInstance->sysobj;
    moduleInstance->sysobj.imu_init_count = 1.0;
    covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
    c_st.site = &emlrtRSI;
    d_st.site = &b_emlrtRSI;
    e_st.site = &c_emlrtRSI;
    d_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    obj->TunablePropsChanged = false;
    e_st.site = &d_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &e_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
    b_st.site = &g_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.static_bias_initialization =
      *static_bias_initialization;
    b_st.site = &h_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.ekf_update_enabled = *ekf_update_enabled;
    b_st.site = &i_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.enable_bias_estimation = *enable_bias_estimation;
    b_st.site = &j_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_noise_std[i] = varargin_4[i];
    }

    b_st.site = &k_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_noise_std[i] = varargin_5[i];
    }

    b_st.site = &l_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_noise_std[i] = varargin_6[i];
    }

    b_st.site = &m_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_noise_std[i] = varargin_7[i];
    }

    b_st.site = &n_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.contact_noise_std[i] = varargin_8[i];
    }

    b_st.site = &o_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 14; i++) {
      moduleInstance->sysobj.encoder_noise_std[i] = varargin_9[i];
    }

    b_st.site = &p_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_init[i] = varargin_10[i];
    }

    b_st.site = &q_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_init[i] = varargin_11[i];
    }

    b_st.site = &r_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 6; i++) {
      moduleInstance->sysobj.prior_base_pose_std[i] = varargin_12[i];
    }

    b_st.site = &s_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_base_velocity_std[i] = varargin_13[i];
    }

    b_st.site = &t_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_contact_position_std[i] = varargin_14[i];
    }

    b_st.site = &u_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_gyro_bias_std[i] = varargin_15[i];
    }

    b_st.site = &v_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_accel_bias_std[i] = varargin_16[i];
    }

    b_st.site = &w_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_forward_kinematics_std[i] = varargin_17[i];
    }
  }

  b_st.site = &x_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized != 0) {
    y = NULL;
    m4 = emlrtCreateCharArray(2, iv20);
    emlrtInitCharArrayR2013a(&b_st, 51, m4, &u[0]);
    emlrtAssign(&y, m4);
    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv21);
    emlrtInitCharArrayR2013a(&b_st, 5, m4, &b_u[0]);
    emlrtAssign(&b_y, m4);
    b_error(&b_st, message(&b_st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  obj->isInitialized = 1;
  c_st.site = &d_emlrtRSI;
  RightInvariantEKF_setupImpl(obj);
  c_st.site = &d_emlrtRSI;
  if (obj->TunablePropsChanged) {
    y = NULL;
    m4 = emlrtCreateCharArray(2, iv22);
    emlrtInitCharArrayR2013a(&c_st, 44, m4, &c_u[0]);
    emlrtAssign(&y, m4);
    b_error(&c_st, b_message(&c_st, y, &emlrtMCI), &emlrtMCI);
  }

  obj->TunablePropsChanged = false;
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack b_st;
  real_T varargin_4[3];
  real_T varargin_5[3];
  real_T varargin_6[3];
  real_T varargin_7[3];
  real_T varargin_8[3];
  int32_T i;
  real_T varargin_9[14];
  real_T varargin_10[3];
  real_T varargin_11[3];
  real_T varargin_12[6];
  real_T varargin_13[3];
  real_T varargin_14[3];
  real_T varargin_15[3];
  real_T varargin_16[3];
  real_T varargin_17[3];
  RightInvariantEKF *obj;
  const mxArray *y;
  boolean_T tunablePropChangedBeforeResetImpl;
  const mxArray *m5;
  static const int32_T iv23[2] = { 1, 45 };

  emlrtStack c_st;
  static char_T u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's', 't',
    'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e', 'd',
    'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  emlrtStack d_st;
  emlrtStack e_st;
  static const int32_T iv24[2] = { 1, 44 };

  const mxArray *b_y;
  static char_T b_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static const int32_T iv25[2] = { 1, 5 };

  static char_T c_u[5] = { 'r', 'e', 's', 'e', 't' };

  boolean_T *static_bias_initialization;
  boolean_T *ekf_update_enabled;
  boolean_T *enable_bias_estimation;
  real_T (*gyro_noise_std)[3];
  real_T (*gyro_bias_noise_std)[3];
  real_T (*accel_noise_std)[3];
  real_T (*encoder_noise_std)[14];
  real_T (*accel_bias_noise_std)[3];
  real_T (*contact_noise_std)[3];
  real_T (*gyro_bias_init)[3];
  real_T (*accel_bias_init)[3];
  real_T (*prior_base_pose_std)[6];
  real_T (*prior_base_velocity_std)[3];
  real_T (*prior_contact_position_std)[3];
  real_T (*prior_gyro_bias_std)[3];
  real_T (*prior_accel_bias_std)[3];
  real_T (*prior_forward_kinematics_std)[3];
  prior_forward_kinematics_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 16);
  prior_accel_bias_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 15);
  prior_gyro_bias_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 14);
  prior_contact_position_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 13);
  prior_base_velocity_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 12);
  prior_base_pose_std = (real_T (*)[6])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 11);
  accel_bias_init = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 10);
  gyro_bias_init = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 9);
  contact_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 7);
  accel_bias_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 6);
  encoder_noise_std = (real_T (*)[14])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 8);
  accel_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 5);
  gyro_bias_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 4);
  gyro_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
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
  cgxertSetGcb(moduleInstance->S, -1, -1);
  for (i = 0; i < 3; i++) {
    varargin_4[i] = (*gyro_noise_std)[i];
    varargin_5[i] = (*gyro_bias_noise_std)[i];
    varargin_6[i] = (*accel_noise_std)[i];
    varargin_7[i] = (*accel_bias_noise_std)[i];
    varargin_8[i] = (*contact_noise_std)[i];
  }

  for (i = 0; i < 14; i++) {
    varargin_9[i] = (*encoder_noise_std)[i];
  }

  for (i = 0; i < 3; i++) {
    varargin_10[i] = (*gyro_bias_init)[i];
    varargin_11[i] = (*accel_bias_init)[i];
  }

  for (i = 0; i < 6; i++) {
    varargin_12[i] = (*prior_base_pose_std)[i];
  }

  for (i = 0; i < 3; i++) {
    varargin_13[i] = (*prior_base_velocity_std)[i];
    varargin_14[i] = (*prior_contact_position_std)[i];
    varargin_15[i] = (*prior_gyro_bias_std)[i];
    varargin_16[i] = (*prior_accel_bias_std)[i];
    varargin_17[i] = (*prior_forward_kinematics_std)[i];
  }

  if (!moduleInstance->sysobj_not_empty) {
    b_st.site = &f_emlrtRSI;
    obj = &moduleInstance->sysobj;
    moduleInstance->sysobj.imu_init_count = 1.0;
    covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
    c_st.site = &emlrtRSI;
    d_st.site = &b_emlrtRSI;
    e_st.site = &c_emlrtRSI;
    d_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    obj->TunablePropsChanged = false;
    e_st.site = &d_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &e_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
    b_st.site = &g_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.static_bias_initialization =
      *static_bias_initialization;
    b_st.site = &h_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.ekf_update_enabled = *ekf_update_enabled;
    b_st.site = &i_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.enable_bias_estimation = *enable_bias_estimation;
    b_st.site = &j_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_noise_std[i] = varargin_4[i];
    }

    b_st.site = &k_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_noise_std[i] = varargin_5[i];
    }

    b_st.site = &l_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_noise_std[i] = varargin_6[i];
    }

    b_st.site = &m_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_noise_std[i] = varargin_7[i];
    }

    b_st.site = &n_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.contact_noise_std[i] = varargin_8[i];
    }

    b_st.site = &o_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 14; i++) {
      moduleInstance->sysobj.encoder_noise_std[i] = varargin_9[i];
    }

    b_st.site = &p_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_init[i] = varargin_10[i];
    }

    b_st.site = &q_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_init[i] = varargin_11[i];
    }

    b_st.site = &r_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 6; i++) {
      moduleInstance->sysobj.prior_base_pose_std[i] = varargin_12[i];
    }

    b_st.site = &s_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_base_velocity_std[i] = varargin_13[i];
    }

    b_st.site = &t_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_contact_position_std[i] = varargin_14[i];
    }

    b_st.site = &u_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_gyro_bias_std[i] = varargin_15[i];
    }

    b_st.site = &v_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_accel_bias_std[i] = varargin_16[i];
    }

    b_st.site = &w_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_forward_kinematics_std[i] = varargin_17[i];
    }
  }

  b_st.site = &y_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    y = NULL;
    m5 = emlrtCreateCharArray(2, iv23);
    emlrtInitCharArrayR2013a(&b_st, 45, m5, &u[0]);
    emlrtAssign(&y, m5);
    b_y = NULL;
    m5 = emlrtCreateCharArray(2, iv25);
    emlrtInitCharArrayR2013a(&b_st, 5, m5, &c_u[0]);
    emlrtAssign(&b_y, m5);
    b_error(&b_st, message(&b_st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  tunablePropChangedBeforeResetImpl = obj->TunablePropsChanged;
  if ((int32_T)tunablePropChangedBeforeResetImpl != (int32_T)
      obj->TunablePropsChanged) {
    y = NULL;
    m5 = emlrtCreateCharArray(2, iv24);
    emlrtInitCharArrayR2013a(&b_st, 44, m5, &b_u[0]);
    emlrtAssign(&y, m5);
    b_error(&b_st, b_message(&b_st, y, &emlrtMCI), &emlrtMCI);
  }

  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T dv23[3];
  real_T dv24[3];
  real_T dv25[3];
  real_T dv26[3];
  real_T dv27[3];
  int32_T i27;
  real_T dv28[14];
  real_T dv29[3];
  real_T dv30[3];
  real_T dv31[6];
  real_T dv32[3];
  real_T dv33[3];
  real_T dv34[3];
  real_T dv35[3];
  real_T dv36[3];
  real_T dv37[3];
  real_T dv38[3];
  real_T dv39[14];
  real_T dv40[2];
  real_T dv41[49];
  real_T y_tmp0[49];
  real_T y_tmp1[6];
  real_T y_tmp2[441];
  real_T y_tmp3;
  boolean_T *static_bias_initialization;
  boolean_T *ekf_update_enabled;
  boolean_T *enable_bias_estimation;
  real_T (*gyro_noise_std)[3];
  real_T (*gyro_bias_noise_std)[3];
  real_T (*accel_noise_std)[3];
  real_T (*encoder_noise_std)[14];
  real_T (*accel_bias_noise_std)[3];
  real_T (*contact_noise_std)[3];
  real_T (*gyro_bias_init)[3];
  real_T (*accel_bias_init)[3];
  real_T (*prior_base_pose_std)[6];
  real_T (*prior_base_velocity_std)[3];
  real_T (*prior_contact_position_std)[3];
  real_T (*prior_gyro_bias_std)[3];
  real_T (*prior_accel_bias_std)[3];
  real_T (*prior_forward_kinematics_std)[3];
  prior_forward_kinematics_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 16);
  prior_accel_bias_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 15);
  prior_gyro_bias_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 14);
  prior_contact_position_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 13);
  prior_base_velocity_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 12);
  prior_base_pose_std = (real_T (*)[6])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 11);
  accel_bias_init = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 10);
  gyro_bias_init = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 9);
  contact_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 7);
  accel_bias_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 6);
  encoder_noise_std = (real_T (*)[14])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 8);
  accel_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 5);
  gyro_bias_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 4);
  gyro_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 3);
  enable_bias_estimation = (boolean_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 2);
  ekf_update_enabled = (boolean_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 1);
  static_bias_initialization = (boolean_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  for (i27 = 0; i27 < 3; i27++) {
    dv23[i27] = (*gyro_noise_std)[i27];
    dv24[i27] = (*gyro_bias_noise_std)[i27];
    dv25[i27] = (*accel_noise_std)[i27];
    dv26[i27] = (*accel_bias_noise_std)[i27];
    dv27[i27] = (*contact_noise_std)[i27];
  }

  for (i27 = 0; i27 < 14; i27++) {
    dv28[i27] = (*encoder_noise_std)[i27];
  }

  for (i27 = 0; i27 < 3; i27++) {
    dv29[i27] = (*gyro_bias_init)[i27];
    dv30[i27] = (*accel_bias_init)[i27];
  }

  for (i27 = 0; i27 < 6; i27++) {
    dv31[i27] = (*prior_base_pose_std)[i27];
  }

  for (i27 = 0; i27 < 3; i27++) {
    dv32[i27] = (*prior_base_velocity_std)[i27];
    dv33[i27] = (*prior_contact_position_std)[i27];
    dv34[i27] = (*prior_gyro_bias_std)[i27];
    dv35[i27] = (*prior_accel_bias_std)[i27];
    dv36[i27] = (*prior_forward_kinematics_std)[i27];
    dv37[i27] = (*moduleInstance->u2)[i27];
    dv38[i27] = (*moduleInstance->u3)[i27];
  }

  for (i27 = 0; i27 < 14; i27++) {
    dv39[i27] = (*moduleInstance->u4)[i27];
  }

  for (i27 = 0; i27 < 2; i27++) {
    dv40[i27] = (*moduleInstance->u5)[i27];
  }

  for (i27 = 0; i27 < 49; i27++) {
    dv41[i27] = (*moduleInstance->u6)[i27];
  }

  mw__internal__call__step(moduleInstance, &st, *static_bias_initialization,
    *ekf_update_enabled, *enable_bias_estimation, dv23, dv24, dv25, dv26, dv27,
    dv28, dv29, dv30, dv31, dv32, dv33, dv34, dv35, dv36, *moduleInstance->u0,
    *moduleInstance->u1, dv37, dv38, dv39, dv40, dv41, y_tmp0, y_tmp1, y_tmp2,
    &y_tmp3);
  for (i27 = 0; i27 < 49; i27++) {
    (*moduleInstance->b_y0)[i27] = y_tmp0[i27];
  }

  for (i27 = 0; i27 < 6; i27++) {
    (*moduleInstance->b_y1)[i27] = y_tmp1[i27];
  }

  for (i27 = 0; i27 < 441; i27++) {
    (*moduleInstance->y2)[i27] = y_tmp2[i27];
  }

  *moduleInstance->y3 = y_tmp3;
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_terminate(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emlrtStack b_st;
  real_T varargin_4[3];
  real_T varargin_5[3];
  real_T varargin_6[3];
  real_T varargin_7[3];
  real_T varargin_8[3];
  int32_T i;
  real_T varargin_9[14];
  real_T varargin_10[3];
  real_T varargin_11[3];
  real_T varargin_12[6];
  real_T varargin_13[3];
  real_T varargin_14[3];
  real_T varargin_15[3];
  real_T varargin_16[3];
  real_T varargin_17[3];
  RightInvariantEKF *obj;
  const mxArray *y;
  boolean_T flag;
  const mxArray *m6;
  static const int32_T iv26[2] = { 1, 45 };

  emlrtStack c_st;
  static char_T u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's', 't',
    'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e', 'd',
    'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  emlrtStack d_st;
  emlrtStack e_st;
  const mxArray *b_y;
  static const int32_T iv27[2] = { 1, 8 };

  static char_T b_u[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  static const int32_T iv28[2] = { 1, 45 };

  static const int32_T iv29[2] = { 1, 7 };

  static char_T c_u[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  boolean_T *static_bias_initialization;
  boolean_T *ekf_update_enabled;
  boolean_T *enable_bias_estimation;
  real_T (*gyro_noise_std)[3];
  real_T (*gyro_bias_noise_std)[3];
  real_T (*accel_noise_std)[3];
  real_T (*encoder_noise_std)[14];
  real_T (*accel_bias_noise_std)[3];
  real_T (*contact_noise_std)[3];
  real_T (*gyro_bias_init)[3];
  real_T (*accel_bias_init)[3];
  real_T (*prior_base_pose_std)[6];
  real_T (*prior_base_velocity_std)[3];
  real_T (*prior_contact_position_std)[3];
  real_T (*prior_gyro_bias_std)[3];
  real_T (*prior_accel_bias_std)[3];
  real_T (*prior_forward_kinematics_std)[3];
  prior_forward_kinematics_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 16);
  prior_accel_bias_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 15);
  prior_gyro_bias_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 14);
  prior_contact_position_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 13);
  prior_base_velocity_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 12);
  prior_base_pose_std = (real_T (*)[6])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 11);
  accel_bias_init = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 10);
  gyro_bias_init = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 9);
  contact_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 7);
  accel_bias_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 6);
  encoder_noise_std = (real_T (*)[14])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 8);
  accel_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 5);
  gyro_bias_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 4);
  gyro_noise_std = (real_T (*)[3])cgxertGetRunTimeParamInfoData
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
  emlrtDestroyArray(&b_eml_mx);
  emlrtDestroyArray(&eml_mx);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  for (i = 0; i < 3; i++) {
    varargin_4[i] = (*gyro_noise_std)[i];
    varargin_5[i] = (*gyro_bias_noise_std)[i];
    varargin_6[i] = (*accel_noise_std)[i];
    varargin_7[i] = (*accel_bias_noise_std)[i];
    varargin_8[i] = (*contact_noise_std)[i];
  }

  for (i = 0; i < 14; i++) {
    varargin_9[i] = (*encoder_noise_std)[i];
  }

  for (i = 0; i < 3; i++) {
    varargin_10[i] = (*gyro_bias_init)[i];
    varargin_11[i] = (*accel_bias_init)[i];
  }

  for (i = 0; i < 6; i++) {
    varargin_12[i] = (*prior_base_pose_std)[i];
  }

  for (i = 0; i < 3; i++) {
    varargin_13[i] = (*prior_base_velocity_std)[i];
    varargin_14[i] = (*prior_contact_position_std)[i];
    varargin_15[i] = (*prior_gyro_bias_std)[i];
    varargin_16[i] = (*prior_accel_bias_std)[i];
    varargin_17[i] = (*prior_forward_kinematics_std)[i];
  }

  if (!moduleInstance->sysobj_not_empty) {
    b_st.site = &f_emlrtRSI;
    obj = &moduleInstance->sysobj;
    moduleInstance->sysobj.imu_init_count = 1.0;
    covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
    covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
    c_st.site = &emlrtRSI;
    d_st.site = &b_emlrtRSI;
    e_st.site = &c_emlrtRSI;
    d_st.site = &b_emlrtRSI;
    obj->isInitialized = 0;
    obj->TunablePropsChanged = false;
    e_st.site = &d_emlrtRSI;
    c_st.site = &emlrtRSI;
    d_st.site = &e_emlrtRSI;
    moduleInstance->sysobj_not_empty = true;
    b_st.site = &g_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.static_bias_initialization =
      *static_bias_initialization;
    b_st.site = &h_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.ekf_update_enabled = *ekf_update_enabled;
    b_st.site = &i_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.enable_bias_estimation = *enable_bias_estimation;
    b_st.site = &j_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_noise_std[i] = varargin_4[i];
    }

    b_st.site = &k_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_noise_std[i] = varargin_5[i];
    }

    b_st.site = &l_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_noise_std[i] = varargin_6[i];
    }

    b_st.site = &m_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_noise_std[i] = varargin_7[i];
    }

    b_st.site = &n_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.contact_noise_std[i] = varargin_8[i];
    }

    b_st.site = &o_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 14; i++) {
      moduleInstance->sysobj.encoder_noise_std[i] = varargin_9[i];
    }

    b_st.site = &p_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.gyro_bias_init[i] = varargin_10[i];
    }

    b_st.site = &q_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.accel_bias_init[i] = varargin_11[i];
    }

    b_st.site = &r_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 6; i++) {
      moduleInstance->sysobj.prior_base_pose_std[i] = varargin_12[i];
    }

    b_st.site = &s_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_base_velocity_std[i] = varargin_13[i];
    }

    b_st.site = &t_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_contact_position_std[i] = varargin_14[i];
    }

    b_st.site = &u_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_gyro_bias_std[i] = varargin_15[i];
    }

    b_st.site = &v_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_accel_bias_std[i] = varargin_16[i];
    }

    b_st.site = &w_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 3; i++) {
      moduleInstance->sysobj.prior_forward_kinematics_std[i] = varargin_17[i];
    }
  }

  b_st.site = &te_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    y = NULL;
    m6 = emlrtCreateCharArray(2, iv26);
    emlrtInitCharArrayR2013a(&b_st, 45, m6, &u[0]);
    emlrtAssign(&y, m6);
    b_y = NULL;
    m6 = emlrtCreateCharArray(2, iv27);
    emlrtInitCharArrayR2013a(&b_st, 8, m6, &b_u[0]);
    emlrtAssign(&b_y, m6);
    b_error(&b_st, message(&b_st, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    b_st.site = &ue_emlrtRSI;
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      y = NULL;
      m6 = emlrtCreateCharArray(2, iv28);
      emlrtInitCharArrayR2013a(&b_st, 45, m6, &u[0]);
      emlrtAssign(&y, m6);
      b_y = NULL;
      m6 = emlrtCreateCharArray(2, iv29);
      emlrtInitCharArrayR2013a(&b_st, 7, m6, &c_u[0]);
      emlrtAssign(&b_y, m6);
      b_error(&b_st, message(&b_st, y, b_y, &emlrtMCI), &emlrtMCI);
    }

    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
    }
  }

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static const mxArray *emlrt_marshallOut(const int32_T u)
{
  const mxArray *y;
  const mxArray *m7;
  y = NULL;
  m7 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m7) = u;
  emlrtAssign(&y, m7);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const real_T u[3])
{
  const mxArray *y;
  const mxArray *m8;
  static const int32_T iv30[1] = { 3 };

  real_T *pData;
  int32_T i;
  y = NULL;
  m8 = emlrtCreateNumericArray(1, iv30, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m8);
  for (i = 0; i < 3; i++) {
    pData[i] = u[i];
  }

  emlrtAssign(&y, m8);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const real_T u[14])
{
  const mxArray *y;
  const mxArray *m9;
  static const int32_T iv31[1] = { 14 };

  real_T *pData;
  int32_T i;
  y = NULL;
  m9 = emlrtCreateNumericArray(1, iv31, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m9);
  for (i = 0; i < 14; i++) {
    pData[i] = u[i];
  }

  emlrtAssign(&y, m9);
  return y;
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance)
{
  const mxArray *st;
  const mxArray *y;
  const mxArray *b_y;
  static const char * sv0[42] = { "isInitialized", "TunablePropsChanged",
    "static_bias_initialization", "ekf_update_enabled", "enable_bias_estimation",
    "gyro_noise_std", "gyro_bias_noise_std", "accel_noise_std",
    "accel_bias_noise_std", "contact_noise_std", "encoder_noise_std",
    "gyro_bias_init", "accel_bias_init", "prior_base_pose_std",
    "prior_base_velocity_std", "prior_contact_position_std",
    "prior_gyro_bias_std", "prior_accel_bias_std",
    "prior_forward_kinematics_std", "X", "theta", "P", "filter_enabled",
    "bias_initialized", "bg0", "ba0", "w_init_vec", "a_init_vec",
    "imu_init_count", "w_prev", "a_prev", "encoders_prev", "contact_prev",
    "t_prev", "Qg", "Qbg", "Qa", "Qba", "Qc", "Qe", "Np", "P_prior" };

  const mxArray *c_y;
  const mxArray *m10;
  static const int32_T iv32[1] = { 3 };

  real_T *pData;
  int32_T i;
  static const int32_T iv33[1] = { 6 };

  static const int32_T iv34[1] = { 3 };

  static const int32_T iv35[1] = { 3 };

  static const int32_T iv36[1] = { 3 };

  static const int32_T iv37[1] = { 3 };

  static const int32_T iv38[1] = { 3 };

  static const int32_T iv39[2] = { 7, 7 };

  real_T (*b_pData)[49];
  int32_T b_i;
  static const int32_T iv40[1] = { 6 };

  static const int32_T iv41[2] = { 21, 21 };

  real_T (*c_pData)[441];
  static const int32_T iv42[1] = { 3 };

  static const int32_T iv43[1] = { 3 };

  static const int32_T iv44[2] = { 3, 1000 };

  real_T (*d_pData)[3000];
  static const int32_T iv45[2] = { 3, 1000 };

  static const int32_T iv46[1] = { 3 };

  static const int32_T iv47[1] = { 3 };

  static const int32_T iv48[1] = { 14 };

  static const int32_T iv49[1] = { 2 };

  static const int32_T iv50[2] = { 3, 3 };

  real_T (*e_pData)[9];
  static const int32_T iv51[2] = { 3, 3 };

  static const int32_T iv52[2] = { 3, 3 };

  static const int32_T iv53[2] = { 3, 3 };

  static const int32_T iv54[2] = { 3, 3 };

  static const int32_T iv55[2] = { 14, 14 };

  real_T (*f_pData)[196];
  static const int32_T iv56[2] = { 3, 3 };

  static const int32_T iv57[2] = { 21, 21 };

  st = NULL;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 42, sv0));
  emlrtSetFieldR2017b(b_y, 0, "isInitialized", emlrt_marshallOut
                      (moduleInstance->sysobj.isInitialized), 0);
  c_y = NULL;
  m10 = emlrtCreateLogicalScalar(moduleInstance->sysobj.TunablePropsChanged);
  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "TunablePropsChanged", c_y, 1);
  c_y = NULL;
  m10 = emlrtCreateLogicalScalar
    (moduleInstance->sysobj.static_bias_initialization);
  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "static_bias_initialization", c_y, 2);
  c_y = NULL;
  m10 = emlrtCreateLogicalScalar(moduleInstance->sysobj.ekf_update_enabled);
  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "ekf_update_enabled", c_y, 3);
  c_y = NULL;
  m10 = emlrtCreateLogicalScalar(moduleInstance->sysobj.enable_bias_estimation);
  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "enable_bias_estimation", c_y, 4);
  emlrtSetFieldR2017b(b_y, 0, "gyro_noise_std", b_emlrt_marshallOut
                      (moduleInstance->sysobj.gyro_noise_std), 5);
  emlrtSetFieldR2017b(b_y, 0, "gyro_bias_noise_std", b_emlrt_marshallOut
                      (moduleInstance->sysobj.gyro_bias_noise_std), 6);
  emlrtSetFieldR2017b(b_y, 0, "accel_noise_std", b_emlrt_marshallOut
                      (moduleInstance->sysobj.accel_noise_std), 7);
  emlrtSetFieldR2017b(b_y, 0, "accel_bias_noise_std", b_emlrt_marshallOut
                      (moduleInstance->sysobj.accel_bias_noise_std), 8);
  emlrtSetFieldR2017b(b_y, 0, "contact_noise_std", b_emlrt_marshallOut
                      (moduleInstance->sysobj.contact_noise_std), 9);
  emlrtSetFieldR2017b(b_y, 0, "encoder_noise_std", c_emlrt_marshallOut
                      (moduleInstance->sysobj.encoder_noise_std), 10);
  emlrtSetFieldR2017b(b_y, 0, "gyro_bias_init", b_emlrt_marshallOut
                      (moduleInstance->sysobj.gyro_bias_init), 11);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(1, iv32, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m10);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.accel_bias_init[i];
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "accel_bias_init", c_y, 12);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(1, iv33, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m10);
  for (i = 0; i < 6; i++) {
    pData[i] = moduleInstance->sysobj.prior_base_pose_std[i];
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "prior_base_pose_std", c_y, 13);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(1, iv34, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m10);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.prior_base_velocity_std[i];
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "prior_base_velocity_std", c_y, 14);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(1, iv35, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m10);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.prior_contact_position_std[i];
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "prior_contact_position_std", c_y, 15);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(1, iv36, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m10);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.prior_gyro_bias_std[i];
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "prior_gyro_bias_std", c_y, 16);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(1, iv37, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m10);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.prior_accel_bias_std[i];
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "prior_accel_bias_std", c_y, 17);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(1, iv38, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m10);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.prior_forward_kinematics_std[i];
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "prior_forward_kinematics_std", c_y, 18);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(2, iv39, mxDOUBLE_CLASS, mxREAL);
  b_pData = (real_T (*)[49])emlrtMxGetPr(m10);
  for (i = 0; i < 7; i++) {
    for (b_i = 0; b_i < 7; b_i++) {
      (*b_pData)[b_i + 7 * i] = moduleInstance->sysobj.X[b_i + 7 * i];
    }
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "X", c_y, 19);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(1, iv40, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m10);
  for (i = 0; i < 6; i++) {
    pData[i] = moduleInstance->sysobj.theta[i];
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "theta", c_y, 20);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(2, iv41, mxDOUBLE_CLASS, mxREAL);
  c_pData = (real_T (*)[441])emlrtMxGetPr(m10);
  for (i = 0; i < 21; i++) {
    for (b_i = 0; b_i < 21; b_i++) {
      (*c_pData)[b_i + 21 * i] = moduleInstance->sysobj.P[b_i + 21 * i];
    }
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "P", c_y, 21);
  c_y = NULL;
  m10 = emlrtCreateLogicalScalar(moduleInstance->sysobj.filter_enabled);
  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "filter_enabled", c_y, 22);
  c_y = NULL;
  m10 = emlrtCreateLogicalScalar(moduleInstance->sysobj.bias_initialized);
  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "bias_initialized", c_y, 23);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(1, iv42, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m10);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.bg0[i];
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "bg0", c_y, 24);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(1, iv43, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m10);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.ba0[i];
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "ba0", c_y, 25);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(2, iv44, mxDOUBLE_CLASS, mxREAL);
  d_pData = (real_T (*)[3000])emlrtMxGetPr(m10);
  for (i = 0; i < 1000; i++) {
    for (b_i = 0; b_i < 3; b_i++) {
      (*d_pData)[b_i + 3 * i] = moduleInstance->sysobj.w_init_vec[b_i + 3 * i];
    }
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "w_init_vec", c_y, 26);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(2, iv45, mxDOUBLE_CLASS, mxREAL);
  d_pData = (real_T (*)[3000])emlrtMxGetPr(m10);
  for (i = 0; i < 1000; i++) {
    for (b_i = 0; b_i < 3; b_i++) {
      (*d_pData)[b_i + 3 * i] = moduleInstance->sysobj.a_init_vec[b_i + 3 * i];
    }
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "a_init_vec", c_y, 27);
  c_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.imu_init_count);
  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "imu_init_count", c_y, 28);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(1, iv46, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m10);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.w_prev[i];
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "w_prev", c_y, 29);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(1, iv47, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m10);
  for (i = 0; i < 3; i++) {
    pData[i] = moduleInstance->sysobj.a_prev[i];
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "a_prev", c_y, 30);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(1, iv48, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m10);
  for (i = 0; i < 14; i++) {
    pData[i] = moduleInstance->sysobj.encoders_prev[i];
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "encoders_prev", c_y, 31);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(1, iv49, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)emlrtMxGetPr(m10);
  for (i = 0; i < 2; i++) {
    pData[i] = moduleInstance->sysobj.contact_prev[i];
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "contact_prev", c_y, 32);
  c_y = NULL;
  m10 = emlrtCreateDoubleScalar(moduleInstance->sysobj.t_prev);
  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "t_prev", c_y, 33);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(2, iv50, mxDOUBLE_CLASS, mxREAL);
  e_pData = (real_T (*)[9])emlrtMxGetPr(m10);
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 3; b_i++) {
      (*e_pData)[b_i + 3 * i] = moduleInstance->sysobj.Qg[b_i + 3 * i];
    }
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "Qg", c_y, 34);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(2, iv51, mxDOUBLE_CLASS, mxREAL);
  e_pData = (real_T (*)[9])emlrtMxGetPr(m10);
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 3; b_i++) {
      (*e_pData)[b_i + 3 * i] = moduleInstance->sysobj.Qbg[b_i + 3 * i];
    }
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "Qbg", c_y, 35);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(2, iv52, mxDOUBLE_CLASS, mxREAL);
  e_pData = (real_T (*)[9])emlrtMxGetPr(m10);
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 3; b_i++) {
      (*e_pData)[b_i + 3 * i] = moduleInstance->sysobj.Qa[b_i + 3 * i];
    }
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "Qa", c_y, 36);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(2, iv53, mxDOUBLE_CLASS, mxREAL);
  e_pData = (real_T (*)[9])emlrtMxGetPr(m10);
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 3; b_i++) {
      (*e_pData)[b_i + 3 * i] = moduleInstance->sysobj.Qba[b_i + 3 * i];
    }
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "Qba", c_y, 37);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(2, iv54, mxDOUBLE_CLASS, mxREAL);
  e_pData = (real_T (*)[9])emlrtMxGetPr(m10);
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 3; b_i++) {
      (*e_pData)[b_i + 3 * i] = moduleInstance->sysobj.Qc[b_i + 3 * i];
    }
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "Qc", c_y, 38);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(2, iv55, mxDOUBLE_CLASS, mxREAL);
  f_pData = (real_T (*)[196])emlrtMxGetPr(m10);
  for (i = 0; i < 14; i++) {
    for (b_i = 0; b_i < 14; b_i++) {
      (*f_pData)[b_i + 14 * i] = moduleInstance->sysobj.Qe[b_i + 14 * i];
    }
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "Qe", c_y, 39);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(2, iv56, mxDOUBLE_CLASS, mxREAL);
  e_pData = (real_T (*)[9])emlrtMxGetPr(m10);
  for (i = 0; i < 3; i++) {
    for (b_i = 0; b_i < 3; b_i++) {
      (*e_pData)[b_i + 3 * i] = moduleInstance->sysobj.Np[b_i + 3 * i];
    }
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "Np", c_y, 40);
  c_y = NULL;
  m10 = emlrtCreateNumericArray(2, iv57, mxDOUBLE_CLASS, mxREAL);
  c_pData = (real_T (*)[441])emlrtMxGetPr(m10);
  for (i = 0; i < 21; i++) {
    for (b_i = 0; b_i < 21; b_i++) {
      (*c_pData)[b_i + 21 * i] = moduleInstance->sysobj.P_prior[b_i + 21 * i];
    }
  }

  emlrtAssign(&c_y, m10);
  emlrtSetFieldR2017b(b_y, 0, "P_prior", c_y, 41);
  emlrtSetCell(y, 0, b_y);
  b_y = NULL;
  m10 = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&b_y, m10);
  emlrtSetCell(y, 1, b_y);
  emlrtAssign(&st, y);
  return st;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_sysobj,
  const char_T *identifier, RightInvariantEKF *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(b_sysobj), &thisId, y);
  emlrtDestroyArray(&b_sysobj);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, RightInvariantEKF *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[42] = { "isInitialized", "TunablePropsChanged",
    "static_bias_initialization", "ekf_update_enabled", "enable_bias_estimation",
    "gyro_noise_std", "gyro_bias_noise_std", "accel_noise_std",
    "accel_bias_noise_std", "contact_noise_std", "encoder_noise_std",
    "gyro_bias_init", "accel_bias_init", "prior_base_pose_std",
    "prior_base_velocity_std", "prior_contact_position_std",
    "prior_gyro_bias_std", "prior_accel_bias_std",
    "prior_forward_kinematics_std", "X", "theta", "P", "filter_enabled",
    "bias_initialized", "bg0", "ba0", "w_init_vec", "a_init_vec",
    "imu_init_count", "w_prev", "a_prev", "encoders_prev", "contact_prev",
    "t_prev", "Qg", "Qbg", "Qa", "Qba", "Qc", "Qe", "Np", "P_prior" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 42, fieldNames, 0U, &dims);
  thisId.fIdentifier = "isInitialized";
  y->isInitialized = c_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u,
    0, 0, "isInitialized")), &thisId);
  thisId.fIdentifier = "TunablePropsChanged";
  y->TunablePropsChanged = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 1, "TunablePropsChanged")), &thisId);
  thisId.fIdentifier = "static_bias_initialization";
  y->static_bias_initialization = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 2, "static_bias_initialization")), &thisId);
  thisId.fIdentifier = "ekf_update_enabled";
  y->ekf_update_enabled = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    (sp, u, 0, 3, "ekf_update_enabled")), &thisId);
  thisId.fIdentifier = "enable_bias_estimation";
  y->enable_bias_estimation = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b(sp, u, 0, 4, "enable_bias_estimation")), &thisId);
  thisId.fIdentifier = "gyro_noise_std";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 5,
    "gyro_noise_std")), &thisId, y->gyro_noise_std);
  thisId.fIdentifier = "gyro_bias_noise_std";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 6,
    "gyro_bias_noise_std")), &thisId, y->gyro_bias_noise_std);
  thisId.fIdentifier = "accel_noise_std";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 7,
    "accel_noise_std")), &thisId, y->accel_noise_std);
  thisId.fIdentifier = "accel_bias_noise_std";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 8,
    "accel_bias_noise_std")), &thisId, y->accel_bias_noise_std);
  thisId.fIdentifier = "contact_noise_std";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 9,
    "contact_noise_std")), &thisId, y->contact_noise_std);
  thisId.fIdentifier = "encoder_noise_std";
  f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 10,
    "encoder_noise_std")), &thisId, y->encoder_noise_std);
  thisId.fIdentifier = "gyro_bias_init";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 11,
    "gyro_bias_init")), &thisId, y->gyro_bias_init);
  thisId.fIdentifier = "accel_bias_init";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 12,
    "accel_bias_init")), &thisId, y->accel_bias_init);
  thisId.fIdentifier = "prior_base_pose_std";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 13,
    "prior_base_pose_std")), &thisId, y->prior_base_pose_std);
  thisId.fIdentifier = "prior_base_velocity_std";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 14,
    "prior_base_velocity_std")), &thisId, y->prior_base_velocity_std);
  thisId.fIdentifier = "prior_contact_position_std";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 15,
    "prior_contact_position_std")), &thisId, y->prior_contact_position_std);
  thisId.fIdentifier = "prior_gyro_bias_std";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 16,
    "prior_gyro_bias_std")), &thisId, y->prior_gyro_bias_std);
  thisId.fIdentifier = "prior_accel_bias_std";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 17,
    "prior_accel_bias_std")), &thisId, y->prior_accel_bias_std);
  thisId.fIdentifier = "prior_forward_kinematics_std";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 18,
    "prior_forward_kinematics_std")), &thisId, y->prior_forward_kinematics_std);
  thisId.fIdentifier = "X";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 19, "X")),
                     &thisId, y->X);
  thisId.fIdentifier = "theta";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 20, "theta")),
                     &thisId, y->theta);
  thisId.fIdentifier = "P";
  i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 21, "P")),
                     &thisId, y->P);
  thisId.fIdentifier = "filter_enabled";
  y->filter_enabled = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 22, "filter_enabled")), &thisId);
  thisId.fIdentifier = "bias_initialized";
  y->bias_initialized = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 23, "bias_initialized")), &thisId);
  thisId.fIdentifier = "bg0";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 24, "bg0")),
                     &thisId, y->bg0);
  thisId.fIdentifier = "ba0";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 25, "ba0")),
                     &thisId, y->ba0);
  thisId.fIdentifier = "w_init_vec";
  j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 26,
    "w_init_vec")), &thisId, y->w_init_vec);
  thisId.fIdentifier = "a_init_vec";
  j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 27,
    "a_init_vec")), &thisId, y->a_init_vec);
  thisId.fIdentifier = "imu_init_count";
  y->imu_init_count = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp,
    u, 0, 28, "imu_init_count")), &thisId);
  thisId.fIdentifier = "w_prev";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 29, "w_prev")),
                     &thisId, y->w_prev);
  thisId.fIdentifier = "a_prev";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 30, "a_prev")),
                     &thisId, y->a_prev);
  thisId.fIdentifier = "encoders_prev";
  f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 31,
    "encoders_prev")), &thisId, y->encoders_prev);
  thisId.fIdentifier = "contact_prev";
  l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 32,
    "contact_prev")), &thisId, y->contact_prev);
  thisId.fIdentifier = "t_prev";
  y->t_prev = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 33,
    "t_prev")), &thisId);
  thisId.fIdentifier = "Qg";
  m_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 34, "Qg")),
                     &thisId, y->Qg);
  thisId.fIdentifier = "Qbg";
  m_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 35, "Qbg")),
                     &thisId, y->Qbg);
  thisId.fIdentifier = "Qa";
  m_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 36, "Qa")),
                     &thisId, y->Qa);
  thisId.fIdentifier = "Qba";
  m_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 37, "Qba")),
                     &thisId, y->Qba);
  thisId.fIdentifier = "Qc";
  m_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 38, "Qc")),
                     &thisId, y->Qc);
  thisId.fIdentifier = "Qe";
  n_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 39, "Qe")),
                     &thisId, y->Qe);
  thisId.fIdentifier = "Np";
  m_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 40, "Np")),
                     &thisId, y->Np);
  thisId.fIdentifier = "P_prior";
  i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 41, "P_prior")),
                     &thisId, y->P_prior);
  emlrtDestroyArray(&u);
}

static int32_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = p_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[3])
{
  r_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[14])
{
  s_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[6])
{
  t_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[49])
{
  u_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[441])
{
  v_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[3000])
{
  w_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = x_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[2])
{
  y_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[9])
{
  ab_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[196])
{
  bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static boolean_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance, const mxArray *st)
{
  emlrtStack b_st = { NULL,            /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *u;
  b_st.tls = moduleInstance->emlrtRootTLSGlobal;
  u = emlrtAlias(st);
  emlrt_marshallIn(&b_st, emlrtAlias(emlrtGetCell(&b_st, "sysobj", u, 0)),
                   "sysobj", &moduleInstance->sysobj);
  moduleInstance->sysobj_not_empty = o_emlrt_marshallIn(&b_st, emlrtAlias
    (emlrtGetCell(&b_st, "sysobj_not_empty", u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
  emlrtDestroyArray(&st);
}

static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m11;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m11, 2, pArrays, "message", true,
    location);
}

static void b_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m12;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m12, 1, &pArray, "message", true,
    location);
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m13;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m13, 2, pArrays, "feval", true, location);
}

static void b_feval(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "feval", true, location);
}

static int32_T p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  int32_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "int32", false, 0U, &dims);
  ret = *(int32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static boolean_T q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, &dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[3])
{
  static const int32_T dims[1] = { 3 };

  int32_T i28;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  for (i28 = 0; i28 < 3; i28++) {
    ret[i28] = (*(real_T (*)[3])emlrtMxGetData(src))[i28];
  }

  emlrtDestroyArray(&src);
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[14])
{
  static const int32_T dims[1] = { 14 };

  int32_T i29;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  for (i29 = 0; i29 < 14; i29++) {
    ret[i29] = (*(real_T (*)[14])emlrtMxGetData(src))[i29];
  }

  emlrtDestroyArray(&src);
}

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[6])
{
  static const int32_T dims[1] = { 6 };

  int32_T i30;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  for (i30 = 0; i30 < 6; i30++) {
    ret[i30] = (*(real_T (*)[6])emlrtMxGetData(src))[i30];
  }

  emlrtDestroyArray(&src);
}

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[49])
{
  static const int32_T dims[2] = { 7, 7 };

  int32_T i31;
  int32_T i32;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i31 = 0; i31 < 7; i31++) {
    for (i32 = 0; i32 < 7; i32++) {
      ret[i32 + 7 * i31] = (*(real_T (*)[49])emlrtMxGetData(src))[i32 + 7 * i31];
    }
  }

  emlrtDestroyArray(&src);
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[441])
{
  static const int32_T dims[2] = { 21, 21 };

  int32_T i33;
  int32_T i34;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i33 = 0; i33 < 21; i33++) {
    for (i34 = 0; i34 < 21; i34++) {
      ret[i34 + 21 * i33] = (*(real_T (*)[441])emlrtMxGetData(src))[i34 + 21 *
        i33];
    }
  }

  emlrtDestroyArray(&src);
}

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[3000])
{
  static const int32_T dims[2] = { 3, 1000 };

  int32_T i35;
  int32_T i36;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i35 = 0; i35 < 1000; i35++) {
    for (i36 = 0; i36 < 3; i36++) {
      ret[i36 + 3 * i35] = (*(real_T (*)[3000])emlrtMxGetData(src))[i36 + 3 *
        i35];
    }
  }

  emlrtDestroyArray(&src);
}

static real_T x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[2])
{
  static const int32_T dims[1] = { 2 };

  int32_T i37;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  for (i37 = 0; i37 < 2; i37++) {
    ret[i37] = (*(real_T (*)[2])emlrtMxGetData(src))[i37];
  }

  emlrtDestroyArray(&src);
}

static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[9])
{
  static const int32_T dims[2] = { 3, 3 };

  int32_T i38;
  int32_T i39;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i38 = 0; i38 < 3; i38++) {
    for (i39 = 0; i39 < 3; i39++) {
      ret[i39 + 3 * i38] = (*(real_T (*)[9])emlrtMxGetData(src))[i39 + 3 * i38];
    }
  }

  emlrtDestroyArray(&src);
}

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[196])
{
  static const int32_T dims[2] = { 14, 14 };

  int32_T i40;
  int32_T i41;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  for (i40 = 0; i40 < 14; i40++) {
    for (i41 = 0; i41 < 14; i41++) {
      ret[i41 + 14 * i40] = (*(real_T (*)[196])emlrtMxGetData(src))[i41 + 14 *
        i40];
    }
  }

  emlrtDestroyArray(&src);
}

static void b_RightInvariantEKF_RightInvariantEKF
  (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance, RightInvariantEKF
   **obj)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  (*obj)->imu_init_count = 1.0;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
  st.site = &emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &c_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  (*obj)->isInitialized = 0;
  (*obj)->TunablePropsChanged = false;
  c_st.site = &d_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &e_emlrtRSI;
}

static void b_mrdivide(const emlrtStack *sp, real_T A[126], real_T B[36])
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
  emlrtStack j_st;
  real_T b_A[36];
  int32_T jBcol;
  int8_T ipiv[6];
  int32_T info;
  int32_T j;
  int32_T c;
  int32_T jp;
  int32_T ix;
  real_T temp;
  int32_T k;
  real_T s;
  int32_T kBcol;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &xd_emlrtRSI;
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
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  b_st.site = &yd_emlrtRSI;
  c_st.site = &be_emlrtRSI;
  d_st.site = &ce_emlrtRSI;
  for (jBcol = 0; jBcol < 36; jBcol++) {
    b_A[jBcol] = B[jBcol];
  }

  for (jBcol = 0; jBcol < 6; jBcol++) {
    ipiv[jBcol] = (int8_T)(1 + jBcol);
  }

  info = 0;
  for (j = 0; j < 5; j++) {
    c = j * 7;
    e_st.site = &de_emlrtRSI;
    f_st.site = &ge_emlrtRSI;
    jp = 1;
    ix = c;
    temp = muDoubleScalarAbs(b_A[c]);
    g_st.site = &he_emlrtRSI;
    for (k = 2; k <= 6 - j; k++) {
      ix++;
      s = muDoubleScalarAbs(b_A[ix]);
      if (s > temp) {
        jp = k;
        temp = s;
      }
    }

    if (b_A[(c + jp) - 1] != 0.0) {
      if (jp - 1 != 0) {
        ipiv[j] = (int8_T)(j + jp);
        ix = j;
        jp = (j + jp) - 1;
        for (k = 0; k < 6; k++) {
          temp = b_A[ix];
          b_A[ix] = b_A[jp];
          b_A[jp] = temp;
          ix += 6;
          jp += 6;
        }
      }

      k = c - j;
      e_st.site = &ee_emlrtRSI;
      for (i = c + 1; i + 1 <= k + 6; i++) {
        b_A[i] /= b_A[c];
      }
    } else {
      info = j + 1;
    }

    e_st.site = &fe_emlrtRSI;
    f_st.site = &je_emlrtRSI;
    g_st.site = &ke_emlrtRSI;
    h_st.site = &le_emlrtRSI;
    jp = c + 8;
    jBcol = c + 6;
    for (kBcol = 1; kBcol <= 5 - j; kBcol++) {
      temp = b_A[jBcol];
      if (b_A[jBcol] != 0.0) {
        ix = c;
        k = (jp - j) + 4;
        i_st.site = &me_emlrtRSI;
        if ((!(jp > k)) && (k > 2147483646)) {
          j_st.site = &ie_emlrtRSI;
          check_forloop_overflow_error(&j_st);
        }

        for (i = jp - 1; i + 1 <= k; i++) {
          b_A[i] += b_A[ix + 1] * -temp;
          ix++;
        }
      }

      jBcol += 6;
      jp += 6;
    }
  }

  if ((info == 0) && (!(b_A[35] != 0.0))) {
    info = 6;
  }

  if (info > 0) {
    c_st.site = &ae_emlrtRSI;
    d_st.site = &ne_emlrtRSI;
    warning(&d_st);
  }

  for (j = 0; j < 6; j++) {
    jBcol = 21 * j;
    jp = 6 * j;
    for (k = 0; k + 1 <= j; k++) {
      kBcol = 21 * k;
      if (b_A[k + jp] != 0.0) {
        for (i = 0; i < 21; i++) {
          A[i + jBcol] -= b_A[k + jp] * A[i + kBcol];
        }
      }
    }

    temp = 1.0 / b_A[j + jp];
    for (i = 0; i < 21; i++) {
      A[i + jBcol] *= temp;
    }
  }

  for (j = 5; j > -1; j--) {
    jBcol = 21 * j;
    jp = 6 * j;
    for (k = j + 1; k + 1 < 7; k++) {
      kBcol = 21 * k;
      if (b_A[k + jp] != 0.0) {
        for (i = 0; i < 21; i++) {
          A[i + jBcol] -= b_A[k + jp] * A[i + kBcol];
        }
      }
    }
  }

  for (jBcol = 4; jBcol > -1; jBcol--) {
    if (ipiv[jBcol] != jBcol + 1) {
      jp = ipiv[jBcol] - 1;
      for (kBcol = 0; kBcol < 21; kBcol++) {
        temp = A[kBcol + 21 * jBcol];
        A[kBcol + 21 * jBcol] = A[kBcol + 21 * jp];
        A[kBcol + 21 * jp] = temp;
      }
    }
  }
}

static void init_simulink_io_address(InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
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
  moduleInstance->u6 = (real_T (*)[49])cgxertGetInputPortSignal
    (moduleInstance->S, 6);
  moduleInstance->b_y0 = (real_T (*)[49])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->b_y1 = (real_T (*)[6])cgxertGetOutputPortSignal
    (moduleInstance->S, 1);
  moduleInstance->y2 = (real_T (*)[441])cgxertGetOutputPortSignal
    (moduleInstance->S, 2);
  moduleInstance->y3 = (real_T *)cgxertGetOutputPortSignal(moduleInstance->S, 3);
  moduleInstance->covInst_CONTAINER_BLOCK_INDEX = (covrtInstance *)
    cgxertGetCovrtInstance(moduleInstance->S, -1);
}

/* CGXE Glue Code */
static void mdlOutputs_QAP0Wmv9to0z2CRr6cD8wE(SimStruct *S, int_T tid)
{
  InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance =
    (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_QAP0Wmv9to0z2CRr6cD8wE(SimStruct *S)
{
  InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance =
    (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_QAP0Wmv9to0z2CRr6cD8wE(SimStruct *S, int_T tid)
{
  InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance =
    (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_QAP0Wmv9to0z2CRr6cD8wE(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance =
    (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_QAP0Wmv9to0z2CRr6cD8wE(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance =
    (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_QAP0Wmv9to0z2CRr6cD8wE(SimStruct *S)
{
  InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance =
    (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlStart_QAP0Wmv9to0z2CRr6cD8wE(SimStruct *S)
{
  InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *moduleInstance =
    (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE *)calloc(1, sizeof
    (InstanceStruct_QAP0Wmv9to0z2CRr6cD8wE));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_QAP0Wmv9to0z2CRr6cD8wE);
  ssSetmdlInitializeConditions(S, mdlInitialize_QAP0Wmv9to0z2CRr6cD8wE);
  ssSetmdlUpdate(S, mdlUpdate_QAP0Wmv9to0z2CRr6cD8wE);
  ssSetmdlTerminate(S, mdlTerminate_QAP0Wmv9to0z2CRr6cD8wE);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_QAP0Wmv9to0z2CRr6cD8wE(SimStruct *S)
{
}

void method_dispatcher_QAP0Wmv9to0z2CRr6cD8wE(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_QAP0Wmv9to0z2CRr6cD8wE(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_QAP0Wmv9to0z2CRr6cD8wE(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_QAP0Wmv9to0z2CRr6cD8wE(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_QAP0Wmv9to0z2CRr6cD8wE(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: QAP0Wmv9to0z2CRr6cD8wE.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_QAP0Wmv9to0z2CRr6cD8wE_BuildInfoUpdate(void)
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
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(1,4);
  elem_4 = mxCreateString("addIncludeFiles");
  mxSetCell(elem_3,0,elem_4);
  elem_5 = mxCreateCellMatrix(1,7);
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
  elem_11 = mxCreateString("p_VectorNav_to_LeftToeBottom_src.h");
  mxSetCell(elem_5,5,elem_11);
  elem_12 = mxCreateString("p_VectorNav_to_RightToeBottom_src.h");
  mxSetCell(elem_5,6,elem_12);
  mxSetCell(elem_3,1,elem_5);
  elem_13 = mxCreateCellMatrix(1,7);
  elem_14 = mxCreateString("");
  mxSetCell(elem_13,0,elem_14);
  elem_15 = mxCreateString("");
  mxSetCell(elem_13,1,elem_15);
  elem_16 = mxCreateString("");
  mxSetCell(elem_13,2,elem_16);
  elem_17 = mxCreateString("");
  mxSetCell(elem_13,3,elem_17);
  elem_18 = mxCreateString("");
  mxSetCell(elem_13,4,elem_18);
  elem_19 = mxCreateString("");
  mxSetCell(elem_13,5,elem_19);
  elem_20 = mxCreateString("");
  mxSetCell(elem_13,6,elem_20);
  mxSetCell(elem_3,2,elem_13);
  elem_21 = mxCreateCellMatrix(1,7);
  elem_22 = mxCreateString("");
  mxSetCell(elem_21,0,elem_22);
  elem_23 = mxCreateString("");
  mxSetCell(elem_21,1,elem_23);
  elem_24 = mxCreateString("");
  mxSetCell(elem_21,2,elem_24);
  elem_25 = mxCreateString("");
  mxSetCell(elem_21,3,elem_25);
  elem_26 = mxCreateString("__EMLJITSupported__");
  mxSetCell(elem_21,4,elem_26);
  elem_27 = mxCreateString("");
  mxSetCell(elem_21,5,elem_27);
  elem_28 = mxCreateString("");
  mxSetCell(elem_21,6,elem_28);
  mxSetCell(elem_3,3,elem_21);
  mxSetCell(elem_1,1,elem_3);
  elem_29 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_29);
  elem_30 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_30);
  elem_31 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_31);
  elem_32 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_32);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_33 = mxCreateCellMatrix(1,1);
  elem_34 = mxCreateString("coder.internal.blas.BLASApi");
  mxSetCell(elem_33,0,elem_34);
  mxSetCell(mxBIArgs,1,elem_33);
  elem_35 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_35);
  return mxBIArgs;
}

mxArray *cgxe_QAP0Wmv9to0z2CRr6cD8wE_fallback_info(void)
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
