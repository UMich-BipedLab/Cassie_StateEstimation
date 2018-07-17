/*
 * Automatically Generated from Mathematica.
 * Tue 17 Jul 2018 10:14:23 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t242;
  double t420;
  double t805;
  double t860;
  double t932;
  double t1005;
  double t1127;
  double t1269;
  double t1638;
  double t1865;
  double t1929;
  double t2008;
  double t2136;
  double t2324;
  double t2378;
  double t2623;
  double t2709;
  double t2719;
  double t2760;
  double t2769;
  double t2791;
  double t2830;
  double t2882;
  double t2924;
  double t2964;
  double t3148;
  double t3181;
  double t3183;
  double t3192;
  double t3196;
  double t3216;
  double t3286;
  double t3337;
  double t3395;
  double t3397;
  double t3514;
  double t3575;
  double t3654;
  double t3706;
  double t3712;
  double t3749;
  double t3787;
  double t3863;
  double t3872;
  double t3897;
  double t4032;
  double t4035;
  double t4037;
  double t654;
  double t744;
  double t798;
  double t831;
  double t833;
  double t1069;
  double t1141;
  double t1177;
  double t1525;
  double t1584;
  double t1619;
  double t1956;
  double t2094;
  double t2095;
  double t2490;
  double t2507;
  double t2545;
  double t2822;
  double t2863;
  double t2867;
  double t4214;
  double t4222;
  double t4224;
  double t4233;
  double t4238;
  double t4251;
  double t3061;
  double t3063;
  double t3073;
  double t3232;
  double t3318;
  double t3328;
  double t4260;
  double t4268;
  double t4279;
  double t4283;
  double t4291;
  double t4294;
  double t3406;
  double t3416;
  double t3465;
  double t3784;
  double t3800;
  double t3812;
  double t4299;
  double t4302;
  double t4307;
  double t4313;
  double t4314;
  double t4316;
  double t3973;
  double t4005;
  double t4011;
  double t4324;
  double t4325;
  double t4328;
  double t4340;
  double t4355;
  double t4357;
  double t4671;
  double t4694;
  double t4709;
  double t4839;
  double t4852;
  double t4858;
  double t4883;
  double t4910;
  double t4912;
  double t4936;
  double t4972;
  double t5001;
  double t5056;
  double t5086;
  double t5107;
  double t5131;
  double t5133;
  double t5151;
  double t5489;
  double t5522;
  double t5532;
  double t5541;
  double t5548;
  double t5575;
  double t5587;
  double t5596;
  double t5604;
  double t5629;
  double t5635;
  double t5648;
  double t5657;
  double t5660;
  double t5667;
  double t5685;
  double t5704;
  double t5714;
  double t5393;
  double t5410;
  double t5415;
  double t5839;
  double t5845;
  double t5847;
  double t5862;
  double t5864;
  double t5867;
  double t5885;
  double t5893;
  double t5909;
  double t5914;
  double t5923;
  double t5927;
  double t5933;
  double t5947;
  double t5950;
  double t5964;
  double t5968;
  double t5975;
  double t6119;
  double t6124;
  double t6129;
  double t6145;
  double t6147;
  double t6148;
  double t6153;
  double t6155;
  double t6159;
  double t6167;
  double t6174;
  double t6178;
  double t6212;
  double t6224;
  double t6226;
  double t6237;
  double t6248;
  double t6256;
  double t6069;
  double t6071;
  double t6100;
  double t6391;
  double t6396;
  double t6404;
  double t6417;
  double t6423;
  double t6455;
  double t6457;
  double t6467;
  double t6479;
  double t6483;
  double t6486;
  double t6511;
  double t6519;
  double t6536;
  double t6548;
  double t6550;
  double t6551;
  double t6563;
  double t6575;
  double t6583;
  double t6345;
  double t6352;
  double t6692;
  double t6694;
  double t6700;
  double t6714;
  double t6715;
  double t6717;
  double t6723;
  double t6726;
  double t6741;
  double t6745;
  double t6748;
  double t6760;
  double t6765;
  double t6778;
  double t6781;
  double t6782;
  double t6806;
  double t6811;
  double t6815;
  double t6822;
  double t6141;
  double t6149;
  double t6164;
  double t6179;
  double t6228;
  double t6258;
  double t6262;
  double t6272;
  double t6273;
  double t6278;
  double t6283;
  double t6284;
  double t6329;
  double t6333;
  double t6902;
  double t6907;
  double t6908;
  double t6917;
  double t6919;
  double t6947;
  double t6948;
  double t6951;
  double t6960;
  double t6963;
  double t6979;
  double t6985;
  double t7003;
  double t7008;
  double t7010;
  double t7019;
  double t7020;
  double t7022;
  double t7082;
  double t7085;
  double t7098;
  double t7128;
  double t7132;
  double t7147;
  double t7155;
  double t7178;
  double t7179;
  double t7180;
  double t7199;
  double t7200;
  double t7224;
  double t7238;
  double t7248;
  double t7250;
  double t7254;
  double t7259;
  double t7266;
  double t7359;
  double t7363;
  double t7365;
  double t7367;
  double t7373;
  double t7387;
  double t7390;
  double t7393;
  double t7396;
  double t7397;
  double t7399;
  double t7403;
  double t7413;
  double t7338;
  double t7347;
  double t7351;
  double t7353;
  double t7357;
  double t7469;
  double t7475;
  double t7489;
  double t7490;
  double t7502;
  double t7503;
  double t7508;
  double t7596;
  double t7597;
  double t7598;
  double t7602;
  double t7606;
  double t7608;
  double t7614;
  double t7638;
  double t7650;
  double t7656;
  double t7677;
  double t7680;
  double t7682;
  double t7765;
  double t7771;
  double t7775;
  double t7800;
  double t7801;
  double t7807;
  double t7809;
  double t7728;
  double t7737;
  double t7755;
  double t7779;
  double t7786;
  double t7859;
  double t7866;
  double t4445;
  double t7900;
  double t7903;
  double t7909;
  double t7918;
  double t7939;
  double t7949;
  double t7954;
  double t7813;
  double t8021;
  double t8022;
  double t8028;
  double t7824;
  double t7996;
  double t7997;
  double t8012;
  double t8013;
  double t8020;
  double t7870;
  double t4472;
  double t4534;
  double t7964;
  double t8083;
  double t8084;
  double t8085;
  double t7984;
  t242 = Sin(var1[0]);
  t420 = Cos(var1[1]);
  t805 = Sin(var1[1]);
  t860 = Cos(var1[2]);
  t932 = -1.*t860;
  t1005 = 1. + t932;
  t1127 = Sin(var1[2]);
  t1269 = Cos(var1[0]);
  t1638 = Cos(var1[3]);
  t1865 = -1.*t1638;
  t1929 = 1. + t1865;
  t2008 = Sin(var1[3]);
  t2136 = -1.*t860*t242*t805;
  t2324 = -1.*t1269*t1127;
  t2378 = t2136 + t2324;
  t2623 = -1.*t1269*t860;
  t2709 = t242*t805*t1127;
  t2719 = t2623 + t2709;
  t2760 = Cos(var1[4]);
  t2769 = -1.*t2760;
  t2791 = 1. + t2769;
  t2830 = Sin(var1[4]);
  t2882 = -1.*t2008*t2378;
  t2924 = t1638*t2719;
  t2964 = t2882 + t2924;
  t3148 = t1638*t2378;
  t3181 = t2008*t2719;
  t3183 = t3148 + t3181;
  t3192 = Cos(var1[5]);
  t3196 = -1.*t3192;
  t3216 = 1. + t3196;
  t3286 = Sin(var1[5]);
  t3337 = t2830*t2964;
  t3395 = t2760*t3183;
  t3397 = t3337 + t3395;
  t3514 = t2760*t2964;
  t3575 = -1.*t2830*t3183;
  t3654 = t3514 + t3575;
  t3706 = Cos(var1[6]);
  t3712 = -1.*t3706;
  t3749 = 1. + t3712;
  t3787 = Sin(var1[6]);
  t3863 = -1.*t3286*t3397;
  t3872 = t3192*t3654;
  t3897 = t3863 + t3872;
  t4032 = t3192*t3397;
  t4035 = t3286*t3654;
  t4037 = t4032 + t4035;
  t654 = -1.*t420;
  t744 = 1. + t654;
  t798 = 0.135*t744;
  t831 = 0.049*t805;
  t833 = 0. + t798 + t831;
  t1069 = -0.049*t1005;
  t1141 = -0.09*t1127;
  t1177 = 0. + t1069 + t1141;
  t1525 = -0.09*t1005;
  t1584 = 0.049*t1127;
  t1619 = 0. + t1525 + t1584;
  t1956 = -0.049*t1929;
  t2094 = -0.21*t2008;
  t2095 = 0. + t1956 + t2094;
  t2490 = -0.21*t1929;
  t2507 = 0.049*t2008;
  t2545 = 0. + t2490 + t2507;
  t2822 = -0.2707*t2791;
  t2863 = 0.0016*t2830;
  t2867 = 0. + t2822 + t2863;
  t4214 = t1269*t860*t805;
  t4222 = -1.*t242*t1127;
  t4224 = t4214 + t4222;
  t4233 = -1.*t860*t242;
  t4238 = -1.*t1269*t805*t1127;
  t4251 = t4233 + t4238;
  t3061 = -0.0016*t2791;
  t3063 = -0.2707*t2830;
  t3073 = 0. + t3061 + t3063;
  t3232 = 0.0184*t3216;
  t3318 = -0.7055*t3286;
  t3328 = 0. + t3232 + t3318;
  t4260 = -1.*t2008*t4224;
  t4268 = t1638*t4251;
  t4279 = t4260 + t4268;
  t4283 = t1638*t4224;
  t4291 = t2008*t4251;
  t4294 = t4283 + t4291;
  t3406 = -0.7055*t3216;
  t3416 = -0.0184*t3286;
  t3465 = 0. + t3406 + t3416;
  t3784 = -1.1135*t3749;
  t3800 = 0.0216*t3787;
  t3812 = 0. + t3784 + t3800;
  t4299 = t2830*t4279;
  t4302 = t2760*t4294;
  t4307 = t4299 + t4302;
  t4313 = t2760*t4279;
  t4314 = -1.*t2830*t4294;
  t4316 = t4313 + t4314;
  t3973 = -0.0216*t3749;
  t4005 = -1.1135*t3787;
  t4011 = 0. + t3973 + t4005;
  t4324 = -1.*t3286*t4307;
  t4325 = t3192*t4316;
  t4328 = t4324 + t4325;
  t4340 = t3192*t4307;
  t4355 = t3286*t4316;
  t4357 = t4340 + t4355;
  t4671 = t860*t2008*t805;
  t4694 = t1638*t805*t1127;
  t4709 = t4671 + t4694;
  t4839 = -1.*t1638*t860*t805;
  t4852 = t2008*t805*t1127;
  t4858 = t4839 + t4852;
  t4883 = t2830*t4709;
  t4910 = t2760*t4858;
  t4912 = t4883 + t4910;
  t4936 = t2760*t4709;
  t4972 = -1.*t2830*t4858;
  t5001 = t4936 + t4972;
  t5056 = -1.*t3286*t4912;
  t5086 = t3192*t5001;
  t5107 = t5056 + t5086;
  t5131 = t3192*t4912;
  t5133 = t3286*t5001;
  t5151 = t5131 + t5133;
  t5489 = -1.*t1269*t420*t860*t2008;
  t5522 = -1.*t1638*t1269*t420*t1127;
  t5532 = t5489 + t5522;
  t5541 = t1638*t1269*t420*t860;
  t5548 = -1.*t1269*t420*t2008*t1127;
  t5575 = t5541 + t5548;
  t5587 = t2830*t5532;
  t5596 = t2760*t5575;
  t5604 = t5587 + t5596;
  t5629 = t2760*t5532;
  t5635 = -1.*t2830*t5575;
  t5648 = t5629 + t5635;
  t5657 = -1.*t3286*t5604;
  t5660 = t3192*t5648;
  t5667 = t5657 + t5660;
  t5685 = t3192*t5604;
  t5704 = t3286*t5648;
  t5714 = t5685 + t5704;
  t5393 = 0.049*t420;
  t5410 = 0.135*t805;
  t5415 = t5393 + t5410;
  t5839 = -1.*t420*t860*t2008*t242;
  t5845 = -1.*t1638*t420*t242*t1127;
  t5847 = t5839 + t5845;
  t5862 = t1638*t420*t860*t242;
  t5864 = -1.*t420*t2008*t242*t1127;
  t5867 = t5862 + t5864;
  t5885 = t2830*t5847;
  t5893 = t2760*t5867;
  t5909 = t5885 + t5893;
  t5914 = t2760*t5847;
  t5923 = -1.*t2830*t5867;
  t5927 = t5914 + t5923;
  t5933 = -1.*t3286*t5909;
  t5947 = t3192*t5927;
  t5950 = t5933 + t5947;
  t5964 = t3192*t5909;
  t5968 = t3286*t5927;
  t5975 = t5964 + t5968;
  t6119 = -1.*t420*t860*t2008;
  t6124 = -1.*t1638*t420*t1127;
  t6129 = t6119 + t6124;
  t6145 = -1.*t1638*t420*t860;
  t6147 = t420*t2008*t1127;
  t6148 = t6145 + t6147;
  t6153 = -1.*t2830*t6129;
  t6155 = t2760*t6148;
  t6159 = t6153 + t6155;
  t6167 = t2760*t6129;
  t6174 = t2830*t6148;
  t6178 = t6167 + t6174;
  t6212 = t3286*t6159;
  t6224 = t3192*t6178;
  t6226 = t6212 + t6224;
  t6237 = t3192*t6159;
  t6248 = -1.*t3286*t6178;
  t6256 = t6237 + t6248;
  t6069 = -0.09*t860;
  t6071 = -0.049*t1127;
  t6100 = t6069 + t6071;
  t6391 = -1.*t1269*t860*t805;
  t6396 = t242*t1127;
  t6404 = t6391 + t6396;
  t6417 = t2008*t6404;
  t6423 = t6417 + t4268;
  t6455 = t1638*t6404;
  t6457 = -1.*t2008*t4251;
  t6467 = t6455 + t6457;
  t6479 = -1.*t2830*t6423;
  t6483 = t2760*t6467;
  t6486 = t6479 + t6483;
  t6511 = t2760*t6423;
  t6519 = t2830*t6467;
  t6536 = t6511 + t6519;
  t6548 = t3286*t6486;
  t6550 = t3192*t6536;
  t6551 = t6548 + t6550;
  t6563 = t3192*t6486;
  t6575 = -1.*t3286*t6536;
  t6583 = t6563 + t6575;
  t6345 = 0.049*t860;
  t6352 = t6345 + t1141;
  t6692 = t1269*t860;
  t6694 = -1.*t242*t805*t1127;
  t6700 = t6692 + t6694;
  t6714 = t2008*t2378;
  t6715 = t1638*t6700;
  t6717 = t6714 + t6715;
  t6723 = -1.*t2008*t6700;
  t6726 = t3148 + t6723;
  t6741 = -1.*t2830*t6717;
  t6745 = t2760*t6726;
  t6748 = t6741 + t6745;
  t6760 = t2760*t6717;
  t6765 = t2830*t6726;
  t6778 = t6760 + t6765;
  t6781 = t3286*t6748;
  t6782 = t3192*t6778;
  t6806 = t6781 + t6782;
  t6811 = t3192*t6748;
  t6815 = -1.*t3286*t6778;
  t6822 = t6811 + t6815;
  t6141 = t3073*t6129;
  t6149 = t2867*t6148;
  t6164 = t3465*t6159;
  t6179 = t3328*t6178;
  t6228 = t4011*t6226;
  t6258 = t3812*t6256;
  t6262 = -1.*t3787*t6226;
  t6272 = t3706*t6256;
  t6273 = t6262 + t6272;
  t6278 = -1.1312*t6273;
  t6283 = t3706*t6226;
  t6284 = t3787*t6256;
  t6329 = t6283 + t6284;
  t6333 = 0.0306*t6329;
  t6902 = -0.21*t1638;
  t6907 = -0.049*t2008;
  t6908 = t6902 + t6907;
  t6917 = 0.049*t1638;
  t6919 = t6917 + t2094;
  t6947 = -1.*t1638*t4224;
  t6948 = t6947 + t6457;
  t6951 = -1.*t2830*t4279;
  t6960 = t2760*t6948;
  t6963 = t6951 + t6960;
  t6979 = t2830*t6948;
  t6985 = t4313 + t6979;
  t7003 = t3286*t6963;
  t7008 = t3192*t6985;
  t7010 = t7003 + t7008;
  t7019 = t3192*t6963;
  t7020 = -1.*t3286*t6985;
  t7022 = t7019 + t7020;
  t7082 = t860*t242*t805;
  t7085 = t1269*t1127;
  t7098 = t7082 + t7085;
  t7128 = -1.*t2008*t7098;
  t7132 = t7128 + t6715;
  t7147 = -1.*t1638*t7098;
  t7155 = t7147 + t6723;
  t7178 = -1.*t2830*t7132;
  t7179 = t2760*t7155;
  t7180 = t7178 + t7179;
  t7199 = t2760*t7132;
  t7200 = t2830*t7155;
  t7224 = t7199 + t7200;
  t7238 = t3286*t7180;
  t7248 = t3192*t7224;
  t7250 = t7238 + t7248;
  t7254 = t3192*t7180;
  t7259 = -1.*t3286*t7224;
  t7266 = t7254 + t7259;
  t7359 = t1638*t420*t860;
  t7363 = -1.*t420*t2008*t1127;
  t7365 = t7359 + t7363;
  t7367 = -1.*t2760*t7365;
  t7373 = t6153 + t7367;
  t7387 = -1.*t2830*t7365;
  t7390 = t6167 + t7387;
  t7393 = t3286*t7373;
  t7396 = t3192*t7390;
  t7397 = t7393 + t7396;
  t7399 = t3192*t7373;
  t7403 = -1.*t3286*t7390;
  t7413 = t7399 + t7403;
  t7338 = 0.0016*t2760;
  t7347 = t7338 + t3063;
  t7351 = -0.2707*t2760;
  t7353 = -0.0016*t2830;
  t7357 = t7351 + t7353;
  t7469 = -1.*t2760*t4294;
  t7475 = t6951 + t7469;
  t7489 = t3286*t7475;
  t7490 = t7489 + t4325;
  t7502 = t3192*t7475;
  t7503 = -1.*t3286*t4316;
  t7508 = t7502 + t7503;
  t7596 = t1638*t7098;
  t7597 = t2008*t6700;
  t7598 = t7596 + t7597;
  t7602 = -1.*t2760*t7598;
  t7606 = t7178 + t7602;
  t7608 = -1.*t2830*t7598;
  t7614 = t7199 + t7608;
  t7638 = t3286*t7606;
  t7650 = t3192*t7614;
  t7656 = t7638 + t7650;
  t7677 = t3192*t7606;
  t7680 = -1.*t3286*t7614;
  t7682 = t7677 + t7680;
  t7765 = t2830*t6129;
  t7771 = t2760*t7365;
  t7775 = t7765 + t7771;
  t7800 = -1.*t3286*t7775;
  t7801 = t7800 + t7396;
  t7807 = -1.*t3192*t7775;
  t7809 = t7807 + t7403;
  t7728 = -0.7055*t3192;
  t7737 = 0.0184*t3286;
  t7755 = t7728 + t7737;
  t7779 = -0.0184*t3192;
  t7786 = t7779 + t3318;
  t7859 = -1.*t3192*t4307;
  t7866 = t7859 + t7503;
  t4445 = t3706*t4328;
  t7900 = t2830*t7132;
  t7903 = t2760*t7598;
  t7909 = t7900 + t7903;
  t7918 = -1.*t3286*t7909;
  t7939 = t7918 + t7650;
  t7949 = -1.*t3192*t7909;
  t7954 = t7949 + t7680;
  t7813 = -1.*t3787*t7801;
  t8021 = t3192*t7775;
  t8022 = t3286*t7390;
  t8028 = t8021 + t8022;
  t7824 = t3706*t7801;
  t7996 = 0.0216*t3706;
  t7997 = t7996 + t4005;
  t8012 = -1.1135*t3706;
  t8013 = -0.0216*t3787;
  t8020 = t8012 + t8013;
  t7870 = -1.*t3787*t4328;
  t4472 = -1.*t3787*t4357;
  t4534 = t4445 + t4472;
  t7964 = -1.*t3787*t7939;
  t8083 = t3192*t7909;
  t8084 = t3286*t7614;
  t8085 = t8083 + t8084;
  t7984 = t3706*t7939;
  p_output1[0]=0;
  p_output1[1]=-1.*t1269*t1619 + t2095*t2378 + 0.135*t242 + t2545*t2719 + t2867*t2964 + t3073*t3183 + t3328*t3397 + t3465*t3654 + t3812*t3897 + t4011*t4037 + 0.0306*(t3787*t3897 + t3706*t4037) - 1.1312*(t3706*t3897 - 1.*t3787*t4037) - 0.1305*t242*t420 - 1.*t1177*t242*t805 - 1.*t242*t833;
  p_output1[2]=-0.135*t1269 - 1.*t1619*t242 + 0.1305*t1269*t420 + t2095*t4224 + t2545*t4251 + t2867*t4279 + t3073*t4294 + t3328*t4307 + t3465*t4316 + t3812*t4328 + t4011*t4357 + 0.0306*(t3787*t4328 + t3706*t4357) - 1.1312*t4534 + t1177*t1269*t805 + t1269*t833;
  p_output1[3]=0.004500000000000004*t420 + t2867*t4709 + t3073*t4858 + t3328*t4912 + t3465*t5001 + t3812*t5107 + t4011*t5151 + 0.0306*(t3787*t5107 + t3706*t5151) - 1.1312*(t3706*t5107 - 1.*t3787*t5151) - 0.049*t805 - 1.*t1177*t805 + t1127*t2545*t805 - 1.*t2095*t805*t860;
  p_output1[4]=t1177*t1269*t420 - 1.*t1127*t1269*t2545*t420 + t1269*t5415 + t2867*t5532 + t3073*t5575 + t3328*t5604 + t3465*t5648 + t3812*t5667 + t4011*t5714 + 0.0306*(t3787*t5667 + t3706*t5714) - 1.1312*(t3706*t5667 - 1.*t3787*t5714) - 0.1305*t1269*t805 + t1269*t2095*t420*t860;
  p_output1[5]=t1177*t242*t420 - 1.*t1127*t242*t2545*t420 + t242*t5415 + t2867*t5847 + t3073*t5867 + t3328*t5909 + t3465*t5927 + t3812*t5950 + t4011*t5975 + 0.0306*(t3787*t5950 + t3706*t5975) - 1.1312*(t3706*t5950 - 1.*t3787*t5975) - 0.1305*t242*t805 + t2095*t242*t420*t860;
  p_output1[6]=-1.*t1127*t2095*t420 + t420*t6100 + t6141 + t6149 + t6164 + t6179 + t6228 + t6258 + t6278 + t6333 - 1.*t2545*t420*t860;
  p_output1[7]=t2095*t4251 - 1.*t242*t6352 + t2545*t6404 + t3073*t6423 + t2867*t6467 + t3465*t6486 + t3328*t6536 + t4011*t6551 + t3812*t6583 - 1.1312*(-1.*t3787*t6551 + t3706*t6583) + 0.0306*(t3706*t6551 + t3787*t6583) + t1269*t6100*t805;
  p_output1[8]=t2378*t2545 + t1269*t6352 + t2095*t6700 + t3073*t6717 + t2867*t6726 + t3465*t6748 + t3328*t6778 + t4011*t6806 + t3812*t6822 - 1.1312*(-1.*t3787*t6806 + t3706*t6822) + 0.0306*(t3706*t6806 + t3787*t6822) + t242*t6100*t805;
  p_output1[9]=t6141 + t6149 + t6164 + t6179 + t6228 + t6258 + t6278 + t6333 - 1.*t1127*t420*t6919 + t420*t6908*t860;
  p_output1[10]=t3073*t4279 + t4224*t6908 + t4251*t6919 + t2867*t6948 + t3465*t6963 + t3328*t6985 + t4011*t7010 + t3812*t7022 - 1.1312*(-1.*t3787*t7010 + t3706*t7022) + 0.0306*(t3706*t7010 + t3787*t7022);
  p_output1[11]=t6700*t6919 + t6908*t7098 + t3073*t7132 + t2867*t7155 + t3465*t7180 + t3328*t7224 + t4011*t7250 + t3812*t7266 - 1.1312*(-1.*t3787*t7250 + t3706*t7266) + 0.0306*(t3706*t7250 + t3787*t7266);
  p_output1[12]=t6129*t7347 + t7357*t7365 + t3465*t7373 + t3328*t7390 + t4011*t7397 + t3812*t7413 - 1.1312*(-1.*t3787*t7397 + t3706*t7413) + 0.0306*(t3706*t7397 + t3787*t7413);
  p_output1[13]=t3328*t4316 + t4279*t7347 + t4294*t7357 + t3465*t7475 + t4011*t7490 + t3812*t7508 - 1.1312*(-1.*t3787*t7490 + t3706*t7508) + 0.0306*(t3706*t7490 + t3787*t7508);
  p_output1[14]=t7132*t7347 + t7357*t7598 + t3465*t7606 + t3328*t7614 + t4011*t7656 + t3812*t7682 - 1.1312*(-1.*t3787*t7656 + t3706*t7682) + 0.0306*(t3706*t7656 + t3787*t7682);
  p_output1[15]=t7755*t7775 + t7390*t7786 + t4011*t7801 + t3812*t7809 - 1.1312*(t3706*t7809 + t7813) + 0.0306*(t3787*t7809 + t7824);
  p_output1[16]=t4011*t4328 + t4307*t7755 + t4316*t7786 + t3812*t7866 + 0.0306*(t4445 + t3787*t7866) - 1.1312*(t3706*t7866 + t7870);
  p_output1[17]=t7614*t7786 + t7755*t7909 + t4011*t7939 + t3812*t7954 - 1.1312*(t3706*t7954 + t7964) + 0.0306*(t3787*t7954 + t7984);
  p_output1[18]=t7801*t7997 + t8020*t8028 - 1.1312*(t7813 - 1.*t3706*t8028) + 0.0306*(t7824 - 1.*t3787*t8028);
  p_output1[19]=0.0306*t4534 - 1.1312*(-1.*t3706*t4357 + t7870) + t4328*t7997 + t4357*t8020;
  p_output1[20]=t7939*t7997 + t8020*t8085 - 1.1312*(t7964 - 1.*t3706*t8085) + 0.0306*(t7984 - 1.*t3787*t8085);
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jp_VectorNav_to_LeftToeBottom_mex.hh"

namespace SymExpression
{

void Jp_VectorNav_to_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
