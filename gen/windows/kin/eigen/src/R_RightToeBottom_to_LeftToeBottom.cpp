/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:11:52 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottom_to_LeftToeBottom.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }


/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t455;
  double t559;
  double t639;
  double t556;
  double t820;
  double t288;
  double t1248;
  double t1329;
  double t1367;
  double t560;
  double t833;
  double t834;
  double t1403;
  double t206;
  double t1544;
  double t1545;
  double t1585;
  double t893;
  double t1423;
  double t1438;
  double t1601;
  double t147;
  double t1786;
  double t1793;
  double t1833;
  double t1445;
  double t1645;
  double t1656;
  double t1838;
  double t2586;
  double t2511;
  double t2547;
  double t2782;
  double t2785;
  double t2870;
  double t2552;
  double t2598;
  double t2674;
  double t3060;
  double t3094;
  double t3139;
  double t2710;
  double t2883;
  double t2942;
  double t3162;
  double t3192;
  double t3240;
  double t3005;
  double t3148;
  double t3149;
  double t3397;
  double t3429;
  double t3515;
  double t3157;
  double t3361;
  double t3370;
  double t1751;
  double t1873;
  double t1970;
  double t2132;
  double t2246;
  double t2293;
  double t3391;
  double t3525;
  double t3633;
  double t3747;
  double t3796;
  double t3799;
  double t4048;
  double t4053;
  double t4108;
  double t3926;
  double t3948;
  double t3994;
  double t4328;
  double t4355;
  double t4371;
  double t4270;
  double t4272;
  double t4301;
  double t4473;
  double t4478;
  double t4484;
  double t4317;
  double t4414;
  double t4445;
  double t4570;
  double t4578;
  double t4635;
  double t4447;
  double t4486;
  double t4512;
  double t4805;
  double t4860;
  double t4881;
  double t4516;
  double t4685;
  double t4697;
  double t3742;
  double t3847;
  double t3866;
  double t2094;
  double t2456;
  double t2474;
  double t4716;
  double t4909;
  double t4965;
  double t5007;
  double t5022;
  double t5031;
  double t4979;
  double t5078;
  double t5085;
  double t5393;
  double t5397;
  double t5431;
  double t127;
  double t5645;
  double t5662;
  double t4226;
  double t5177;
  double t5222;
  double t5320;
  double t5342;
  double t5626;
  double t5627;
  double t5638;
  double t5702;
  double t5722;
  double t5736;
  double t5747;
  double t14;
  double t5776;
  double t5860;
  double t5827;
  double t5842;
  double t5845;
  double t6272;
  double t6257;
  double t6258;
  double t6280;
  double t6298;
  double t6259;
  double t6282;
  double t6292;
  double t6253;
  double t6303;
  double t6316;
  double t6336;
  double t6387;
  double t6295;
  double t6355;
  double t6363;
  double t6216;
  double t6391;
  double t6396;
  double t6401;
  double t6414;
  double t6379;
  double t6402;
  double t6403;
  double t6198;
  double t6425;
  double t6428;
  double t6429;
  double t3922;
  double t4152;
  double t4207;
  double t6504;
  double t6524;
  double t6525;
  double t6528;
  double t6532;
  double t6534;
  double t6526;
  double t6555;
  double t6571;
  double t6588;
  double t6600;
  double t6601;
  double t6581;
  double t6603;
  double t6613;
  double t6620;
  double t6628;
  double t6636;
  double t6615;
  double t6638;
  double t6640;
  double t6646;
  double t6647;
  double t6656;
  double t5766;
  double t6748;
  double t6751;
  double t6752;
  double t6778;
  double t6780;
  double t6783;
  double t6774;
  double t6786;
  double t6790;
  double t6799;
  double t6800;
  double t6811;
  double t6793;
  double t6814;
  double t6820;
  double t6830;
  double t6831;
  double t6835;
  double t6822;
  double t6845;
  double t6855;
  double t6862;
  double t6867;
  double t6868;
  double t6078;
  double t6079;
  double t6084;
  double t6405;
  double t6431;
  double t6434;
  double t6445;
  double t6447;
  double t6463;
  double t6466;
  double t6482;
  double t6487;
  double t5870;
  double t5895;
  double t5897;
  double t6642;
  double t6661;
  double t6675;
  double t6687;
  double t6690;
  double t6691;
  double t6694;
  double t6695;
  double t6707;
  double t5958;
  double t5966;
  double t6052;
  double t6859;
  double t6874;
  double t6878;
  double t6884;
  double t6885;
  double t6906;
  double t6924;
  double t6930;
  double t6933;
  double t6168;
  double t6181;
  double t6186;
  double t6132;
  double t6148;
  double t6153;
  double t6159;
  double t6977;
  double t6986;
  double t6992;
  double t6998;
  double t6999;
  double t7001;
  double t7035;
  double t7037;
  double t7038;
  t455 = Cos(var1[8]);
  t559 = Cos(var1[10]);
  t639 = Sin(var1[9]);
  t556 = Cos(var1[9]);
  t820 = Sin(var1[10]);
  t288 = Cos(var1[11]);
  t1248 = -1.*t455*t559*t639;
  t1329 = -1.*t455*t556*t820;
  t1367 = t1248 + t1329;
  t560 = t455*t556*t559;
  t833 = -1.*t455*t639*t820;
  t834 = t560 + t833;
  t1403 = Sin(var1[11]);
  t206 = Cos(var1[12]);
  t1544 = t288*t1367;
  t1545 = -1.*t834*t1403;
  t1585 = t1544 + t1545;
  t893 = t288*t834;
  t1423 = t1367*t1403;
  t1438 = t893 + t1423;
  t1601 = Sin(var1[12]);
  t147 = Cos(var1[13]);
  t1786 = t206*t1585;
  t1793 = -1.*t1438*t1601;
  t1833 = t1786 + t1793;
  t1445 = t206*t1438;
  t1645 = t1585*t1601;
  t1656 = t1445 + t1645;
  t1838 = Sin(var1[13]);
  t2586 = Cos(var1[7]);
  t2511 = Sin(var1[7]);
  t2547 = Sin(var1[8]);
  t2782 = t2586*t556;
  t2785 = -1.*t2511*t2547*t639;
  t2870 = t2782 + t2785;
  t2552 = t556*t2511*t2547;
  t2598 = t2586*t639;
  t2674 = t2552 + t2598;
  t3060 = t559*t2870;
  t3094 = -1.*t2674*t820;
  t3139 = t3060 + t3094;
  t2710 = t559*t2674;
  t2883 = t2870*t820;
  t2942 = t2710 + t2883;
  t3162 = t288*t3139;
  t3192 = -1.*t2942*t1403;
  t3240 = t3162 + t3192;
  t3005 = t288*t2942;
  t3148 = t3139*t1403;
  t3149 = t3005 + t3148;
  t3397 = t206*t3240;
  t3429 = -1.*t3149*t1601;
  t3515 = t3397 + t3429;
  t3157 = t206*t3149;
  t3361 = t3240*t1601;
  t3370 = t3157 + t3361;
  t1751 = t147*t1656;
  t1873 = t1833*t1838;
  t1970 = t1751 + t1873;
  t2132 = t147*t1833;
  t2246 = -1.*t1656*t1838;
  t2293 = t2132 + t2246;
  t3391 = t147*t3370;
  t3525 = t3515*t1838;
  t3633 = t3391 + t3525;
  t3747 = t147*t3515;
  t3796 = -1.*t3370*t1838;
  t3799 = t3747 + t3796;
  t4048 = 0.642788*t3633;
  t4053 = 0.766044*t3799;
  t4108 = t4048 + t4053;
  t3926 = -0.766044*t1970;
  t3948 = 0.642788*t2293;
  t3994 = t3926 + t3948;
  t4328 = -1.*t556*t2511;
  t4355 = -1.*t2586*t2547*t639;
  t4371 = t4328 + t4355;
  t4270 = t2586*t556*t2547;
  t4272 = -1.*t2511*t639;
  t4301 = t4270 + t4272;
  t4473 = t559*t4371;
  t4478 = -1.*t4301*t820;
  t4484 = t4473 + t4478;
  t4317 = t559*t4301;
  t4414 = t4371*t820;
  t4445 = t4317 + t4414;
  t4570 = t288*t4484;
  t4578 = -1.*t4445*t1403;
  t4635 = t4570 + t4578;
  t4447 = t288*t4445;
  t4486 = t4484*t1403;
  t4512 = t4447 + t4486;
  t4805 = t206*t4635;
  t4860 = -1.*t4512*t1601;
  t4881 = t4805 + t4860;
  t4516 = t206*t4512;
  t4685 = t4635*t1601;
  t4697 = t4516 + t4685;
  t3742 = -0.766044*t3633;
  t3847 = 0.642788*t3799;
  t3866 = t3742 + t3847;
  t2094 = 0.642788*t1970;
  t2456 = 0.766044*t2293;
  t2474 = t2094 + t2456;
  t4716 = t147*t4697;
  t4909 = t4881*t1838;
  t4965 = t4716 + t4909;
  t5007 = t147*t4881;
  t5022 = -1.*t4697*t1838;
  t5031 = t5007 + t5022;
  t4979 = -0.766044*t4965;
  t5078 = 0.642788*t5031;
  t5085 = t4979 + t5078;
  t5393 = 0.642788*t4965;
  t5397 = 0.766044*t5031;
  t5431 = t5393 + t5397;
  t127 = Cos(var1[1]);
  t5645 = t2474*t5085;
  t5662 = -1.*t3994*t5431;
  t4226 = t2586*t455*t3994;
  t5177 = t2547*t5085;
  t5222 = t4226 + t5177;
  t5320 = -1.*t4108*t5222;
  t5342 = t2586*t455*t2474;
  t5626 = t2547*t5431;
  t5627 = t5342 + t5626;
  t5638 = t3866*t5627;
  t5702 = t5645 + t5662;
  t5722 = -1.*t455*t2511*t5702;
  t5736 = 0. + t5320 + t5638 + t5722;
  t5747 = 1/t5736;
  t14 = Cos(var1[0]);
  t5776 = Sin(var1[0]);
  t5860 = Sin(var1[1]);
  t5827 = t5431*t3866;
  t5842 = -1.*t5085*t4108;
  t5845 = 0. + t5827 + t5842;
  t6272 = Cos(var1[3]);
  t6257 = Cos(var1[2]);
  t6258 = Sin(var1[3]);
  t6280 = Sin(var1[2]);
  t6298 = Cos(var1[4]);
  t6259 = -1.*t127*t6257*t6258;
  t6282 = -1.*t6272*t127*t6280;
  t6292 = t6259 + t6282;
  t6253 = Sin(var1[4]);
  t6303 = t6272*t127*t6257;
  t6316 = -1.*t127*t6258*t6280;
  t6336 = t6303 + t6316;
  t6387 = Cos(var1[5]);
  t6295 = t6253*t6292;
  t6355 = t6298*t6336;
  t6363 = t6295 + t6355;
  t6216 = Sin(var1[5]);
  t6391 = t6298*t6292;
  t6396 = -1.*t6253*t6336;
  t6401 = t6391 + t6396;
  t6414 = Cos(var1[6]);
  t6379 = -1.*t6216*t6363;
  t6402 = t6387*t6401;
  t6403 = t6379 + t6402;
  t6198 = Sin(var1[6]);
  t6425 = t6387*t6363;
  t6428 = t6216*t6401;
  t6429 = t6425 + t6428;
  t3922 = -1.*t2474*t3866;
  t4152 = t3994*t4108;
  t4207 = 0. + t3922 + t4152;
  t6504 = t14*t6257*t5860;
  t6524 = -1.*t5776*t6280;
  t6525 = t6504 + t6524;
  t6528 = -1.*t6257*t5776;
  t6532 = -1.*t14*t5860*t6280;
  t6534 = t6528 + t6532;
  t6526 = -1.*t6258*t6525;
  t6555 = t6272*t6534;
  t6571 = t6526 + t6555;
  t6588 = t6272*t6525;
  t6600 = t6258*t6534;
  t6601 = t6588 + t6600;
  t6581 = t6253*t6571;
  t6603 = t6298*t6601;
  t6613 = t6581 + t6603;
  t6620 = t6298*t6571;
  t6628 = -1.*t6253*t6601;
  t6636 = t6620 + t6628;
  t6615 = -1.*t6216*t6613;
  t6638 = t6387*t6636;
  t6640 = t6615 + t6638;
  t6646 = t6387*t6613;
  t6647 = t6216*t6636;
  t6656 = t6646 + t6647;
  t5766 = 0. + t5645 + t5662;
  t6748 = t6257*t5776*t5860;
  t6751 = t14*t6280;
  t6752 = t6748 + t6751;
  t6778 = t14*t6257;
  t6780 = -1.*t5776*t5860*t6280;
  t6783 = t6778 + t6780;
  t6774 = -1.*t6258*t6752;
  t6786 = t6272*t6783;
  t6790 = t6774 + t6786;
  t6799 = t6272*t6752;
  t6800 = t6258*t6783;
  t6811 = t6799 + t6800;
  t6793 = t6253*t6790;
  t6814 = t6298*t6811;
  t6820 = t6793 + t6814;
  t6830 = t6298*t6790;
  t6831 = -1.*t6253*t6811;
  t6835 = t6830 + t6831;
  t6822 = -1.*t6216*t6820;
  t6845 = t6387*t6835;
  t6855 = t6822 + t6845;
  t6862 = t6387*t6820;
  t6867 = t6216*t6835;
  t6868 = t6862 + t6867;
  t6078 = -1.*t455*t2511*t5085;
  t6079 = t2586*t455*t3866;
  t6084 = 0. + t6078 + t6079;
  t6405 = t6198*t6403;
  t6431 = t6414*t6429;
  t6434 = t6405 + t6431;
  t6445 = 0.642788*t6434;
  t6447 = t6414*t6403;
  t6463 = -1.*t6198*t6429;
  t6466 = t6447 + t6463;
  t6482 = 0.766044*t6466;
  t6487 = t6445 + t6482;
  t5870 = t455*t2511*t3994;
  t5895 = t2547*t3866;
  t5897 = 0. + t5870 + t5895;
  t6642 = t6198*t6640;
  t6661 = t6414*t6656;
  t6675 = t6642 + t6661;
  t6687 = 0.642788*t6675;
  t6690 = t6414*t6640;
  t6691 = -1.*t6198*t6656;
  t6694 = t6690 + t6691;
  t6695 = 0.766044*t6694;
  t6707 = t6687 + t6695;
  t5958 = -1.*t2586*t455*t3994;
  t5966 = -1.*t2547*t5085;
  t6052 = 0. + t5958 + t5966;
  t6859 = t6198*t6855;
  t6874 = t6414*t6868;
  t6878 = t6859 + t6874;
  t6884 = 0.642788*t6878;
  t6885 = t6414*t6855;
  t6906 = -1.*t6198*t6868;
  t6924 = t6885 + t6906;
  t6930 = 0.766044*t6924;
  t6933 = t6884 + t6930;
  t6168 = t455*t2511*t5431;
  t6181 = -1.*t2586*t455*t4108;
  t6186 = 0. + t6168 + t6181;
  t6132 = -1.*t455*t2511*t2474;
  t6148 = -1.*t2547*t4108;
  t6153 = 0. + t6132 + t6148;
  t6159 = 0. + t5342 + t5626;
  t6977 = -0.766044*t6434;
  t6986 = 0.642788*t6466;
  t6992 = t6977 + t6986;
  t6998 = -0.766044*t6675;
  t6999 = 0.642788*t6694;
  t7001 = t6998 + t6999;
  t7035 = -0.766044*t6878;
  t7037 = 0.642788*t6924;
  t7038 = t7035 + t7037;

  p_output1(0)=0. - 1.*t127*t14*t4207*t5747 - 1.*t127*t5747*t5766*t5776 + t5747*t5845*t5860;
  p_output1(1)=0. - 1.*t127*t14*t5747*t5897 - 1.*t127*t5747*t5776*t6052 + t5747*t5860*t6084;
  p_output1(2)=0. - 1.*t127*t14*t5747*t6153 - 1.*t127*t5747*t5776*t6159 + t5747*t5860*t6186;
  p_output1(3)=0. + t5747*t5845*t6487 + t4207*t5747*t6707 + t5747*t5766*t6933;
  p_output1(4)=0. + t5747*t6084*t6487 + t5747*t5897*t6707 + t5747*t6052*t6933;
  p_output1(5)=0. + t5747*t6186*t6487 + t5747*t6153*t6707 + t5747*t6159*t6933;
  p_output1(6)=0. + t5747*t5845*t6992 + t4207*t5747*t7001 + t5747*t5766*t7038;
  p_output1(7)=0. + t5747*t6084*t6992 + t5747*t5897*t7001 + t5747*t6052*t7038;
  p_output1(8)=0. + t5747*t6186*t6992 + t5747*t6153*t7001 + t5747*t6159*t7038;
}


       
Eigen::Matrix<double,3,3> R_RightToeBottom_to_LeftToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void R_RightToeBottom_to_LeftToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



