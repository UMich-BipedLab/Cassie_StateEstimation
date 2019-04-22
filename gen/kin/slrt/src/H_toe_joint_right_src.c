/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_toe_joint_right_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
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
static void output1(double *p_output1,const double *var1)
{
  double t611;
  double t745;
  double t528;
  double t679;
  double t763;
  double t825;
  double t686;
  double t771;
  double t781;
  double t459;
  double t854;
  double t897;
  double t940;
  double t1023;
  double t791;
  double t963;
  double t976;
  double t456;
  double t1045;
  double t1066;
  double t1083;
  double t1092;
  double t1096;
  double t1129;
  double t1136;
  double t1173;
  double t1194;
  double t1348;
  double t995;
  double t1238;
  double t1249;
  double t455;
  double t1357;
  double t1362;
  double t1404;
  double t1520;
  double t1281;
  double t1446;
  double t1460;
  double t406;
  double t1532;
  double t1541;
  double t1553;
  double t1691;
  double t1494;
  double t1624;
  double t1648;
  double t291;
  double t1697;
  double t1699;
  double t1705;
  double t283;
  double t2087;
  double t2110;
  double t2113;
  double t2148;
  double t2153;
  double t2185;
  double t2138;
  double t2193;
  double t2219;
  double t2314;
  double t2332;
  double t2371;
  double t2376;
  double t2381;
  double t2391;
  double t2238;
  double t2421;
  double t2447;
  double t2484;
  double t2508;
  double t2589;
  double t2450;
  double t2597;
  double t2663;
  double t2692;
  double t2730;
  double t2732;
  double t1850;
  double t2673;
  double t2770;
  double t2805;
  double t2812;
  double t2818;
  double t2830;
  double t2936;
  double t2943;
  double t2960;
  double t3016;
  double t3046;
  double t3050;
  double t3067;
  double t3088;
  double t3117;
  double t2981;
  double t3125;
  double t3147;
  double t3250;
  double t3251;
  double t3263;
  double t3180;
  double t3266;
  double t3335;
  double t3341;
  double t3358;
  double t3361;
  double t3337;
  double t3375;
  double t3414;
  double t3460;
  double t3483;
  double t3489;
  double t1666;
  double t1711;
  double t1786;
  double t1867;
  double t1942;
  double t1976;
  double t2809;
  double t2852;
  double t2854;
  double t2862;
  double t2868;
  double t2870;
  double t3430;
  double t3494;
  double t3503;
  double t3525;
  double t3534;
  double t3564;
  double t3966;
  double t3984;
  double t4384;
  double t4386;
  double t4536;
  double t4551;
  double t4709;
  double t4744;
  double t4821;
  double t4823;
  double t4907;
  double t4927;
  double t3586;
  double t3588;
  double t3595;
  double t4010;
  double t4029;
  double t4045;
  double t4122;
  double t4165;
  double t4227;
  double t4246;
  double t4259;
  double t4260;
  double t4325;
  double t4326;
  double t4345;
  double t4418;
  double t4441;
  double t4460;
  double t4509;
  double t4516;
  double t4527;
  double t4596;
  double t4633;
  double t4641;
  double t4675;
  double t4678;
  double t4683;
  double t4749;
  double t4768;
  double t4772;
  double t4778;
  double t4786;
  double t4791;
  double t4826;
  double t4842;
  double t4843;
  double t4857;
  double t4862;
  double t4887;
  double t4938;
  double t4951;
  double t4953;
  double t5024;
  double t5038;
  double t5039;
  double t3598;
  double t3656;
  double t3680;
  double t3686;
  double t3712;
  double t3744;
  t611 = Cos(var1[5]);
  t745 = Sin(var1[3]);
  t528 = Cos(var1[3]);
  t679 = Sin(var1[4]);
  t763 = Sin(var1[5]);
  t825 = Sin(var1[13]);
  t686 = t528*t611*t679;
  t771 = t745*t763;
  t781 = t686 + t771;
  t459 = Cos(var1[13]);
  t854 = -1.*t611*t745;
  t897 = t528*t679*t763;
  t940 = t854 + t897;
  t1023 = Cos(var1[15]);
  t791 = t459*t781;
  t963 = -1.*t825*t940;
  t976 = t791 + t963;
  t456 = Sin(var1[15]);
  t1045 = Cos(var1[14]);
  t1066 = Cos(var1[4]);
  t1083 = t1045*t528*t1066;
  t1092 = Sin(var1[14]);
  t1096 = t825*t781;
  t1129 = t459*t940;
  t1136 = t1096 + t1129;
  t1173 = t1092*t1136;
  t1194 = t1083 + t1173;
  t1348 = Cos(var1[16]);
  t995 = t456*t976;
  t1238 = t1023*t1194;
  t1249 = t995 + t1238;
  t455 = Sin(var1[16]);
  t1357 = t1023*t976;
  t1362 = -1.*t456*t1194;
  t1404 = t1357 + t1362;
  t1520 = Cos(var1[17]);
  t1281 = -1.*t455*t1249;
  t1446 = t1348*t1404;
  t1460 = t1281 + t1446;
  t406 = Sin(var1[17]);
  t1532 = t1348*t1249;
  t1541 = t455*t1404;
  t1553 = t1532 + t1541;
  t1691 = Cos(var1[18]);
  t1494 = t406*t1460;
  t1624 = t1520*t1553;
  t1648 = t1494 + t1624;
  t291 = Sin(var1[18]);
  t1697 = t1520*t1460;
  t1699 = -1.*t406*t1553;
  t1705 = t1697 + t1699;
  t283 = Cos(var1[19]);
  t2087 = t611*t745*t679;
  t2110 = -1.*t528*t763;
  t2113 = t2087 + t2110;
  t2148 = t528*t611;
  t2153 = t745*t679*t763;
  t2185 = t2148 + t2153;
  t2138 = t459*t2113;
  t2193 = -1.*t825*t2185;
  t2219 = t2138 + t2193;
  t2314 = t1045*t1066*t745;
  t2332 = t825*t2113;
  t2371 = t459*t2185;
  t2376 = t2332 + t2371;
  t2381 = t1092*t2376;
  t2391 = t2314 + t2381;
  t2238 = t456*t2219;
  t2421 = t1023*t2391;
  t2447 = t2238 + t2421;
  t2484 = t1023*t2219;
  t2508 = -1.*t456*t2391;
  t2589 = t2484 + t2508;
  t2450 = -1.*t455*t2447;
  t2597 = t1348*t2589;
  t2663 = t2450 + t2597;
  t2692 = t1348*t2447;
  t2730 = t455*t2589;
  t2732 = t2692 + t2730;
  t1850 = Sin(var1[19]);
  t2673 = t406*t2663;
  t2770 = t1520*t2732;
  t2805 = t2673 + t2770;
  t2812 = t1520*t2663;
  t2818 = -1.*t406*t2732;
  t2830 = t2812 + t2818;
  t2936 = t459*t1066*t611;
  t2943 = -1.*t1066*t825*t763;
  t2960 = t2936 + t2943;
  t3016 = -1.*t1045*t679;
  t3046 = t1066*t611*t825;
  t3050 = t459*t1066*t763;
  t3067 = t3046 + t3050;
  t3088 = t1092*t3067;
  t3117 = t3016 + t3088;
  t2981 = t456*t2960;
  t3125 = t1023*t3117;
  t3147 = t2981 + t3125;
  t3250 = t1023*t2960;
  t3251 = -1.*t456*t3117;
  t3263 = t3250 + t3251;
  t3180 = -1.*t455*t3147;
  t3266 = t1348*t3263;
  t3335 = t3180 + t3266;
  t3341 = t1348*t3147;
  t3358 = t455*t3263;
  t3361 = t3341 + t3358;
  t3337 = t406*t3335;
  t3375 = t1520*t3361;
  t3414 = t3337 + t3375;
  t3460 = t1520*t3335;
  t3483 = -1.*t406*t3361;
  t3489 = t3460 + t3483;
  t1666 = -1.*t291*t1648;
  t1711 = t1691*t1705;
  t1786 = t1666 + t1711;
  t1867 = t1691*t1648;
  t1942 = t291*t1705;
  t1976 = t1867 + t1942;
  t2809 = -1.*t291*t2805;
  t2852 = t1691*t2830;
  t2854 = t2809 + t2852;
  t2862 = t1691*t2805;
  t2868 = t291*t2830;
  t2870 = t2862 + t2868;
  t3430 = -1.*t291*t3414;
  t3494 = t1691*t3489;
  t3503 = t3430 + t3494;
  t3525 = t1691*t3414;
  t3534 = t291*t3489;
  t3564 = t3525 + t3534;
  t3966 = -1.*t1045;
  t3984 = 1. + t3966;
  t4384 = -1.*t1023;
  t4386 = 1. + t4384;
  t4536 = -1.*t1348;
  t4551 = 1. + t4536;
  t4709 = -1.*t1520;
  t4744 = 1. + t4709;
  t4821 = -1.*t1691;
  t4823 = 1. + t4821;
  t4907 = -1.*t283;
  t4927 = 1. + t4907;
  t3586 = t1850*t1786;
  t3588 = t283*t1976;
  t3595 = t3586 + t3588;
  t4010 = -0.049*t3984;
  t4029 = -0.135*t1092;
  t4045 = 0. + t4010 + t4029;
  t4122 = 0.135*t825;
  t4165 = 0. + t4122;
  t4227 = -1.*t459;
  t4246 = 1. + t4227;
  t4259 = -0.135*t4246;
  t4260 = 0. + t4259;
  t4325 = -0.135*t3984;
  t4326 = 0.049*t1092;
  t4345 = 0. + t4325 + t4326;
  t4418 = -0.09*t4386;
  t4441 = 0.049*t456;
  t4460 = 0. + t4418 + t4441;
  t4509 = -0.049*t4386;
  t4516 = -0.09*t456;
  t4527 = 0. + t4509 + t4516;
  t4596 = -0.049*t4551;
  t4633 = -0.21*t455;
  t4641 = 0. + t4596 + t4633;
  t4675 = -0.21*t4551;
  t4678 = 0.049*t455;
  t4683 = 0. + t4675 + t4678;
  t4749 = -0.2707*t4744;
  t4768 = 0.0016*t406;
  t4772 = 0. + t4749 + t4768;
  t4778 = -0.0016*t4744;
  t4786 = -0.2707*t406;
  t4791 = 0. + t4778 + t4786;
  t4826 = 0.0184*t4823;
  t4842 = -0.7055*t291;
  t4843 = 0. + t4826 + t4842;
  t4857 = -0.7055*t4823;
  t4862 = -0.0184*t291;
  t4887 = 0. + t4857 + t4862;
  t4938 = -1.1135*t4927;
  t4951 = 0.0216*t1850;
  t4953 = 0. + t4938 + t4951;
  t5024 = -0.0216*t4927;
  t5038 = -1.1135*t1850;
  t5039 = 0. + t5024 + t5038;
  t3598 = t1850*t2854;
  t3656 = t283*t2870;
  t3680 = t3598 + t3656;
  t3686 = t1850*t3503;
  t3712 = t283*t3564;
  t3744 = t3686 + t3712;
  p_output1[0]=t1850*t1976 - 1.*t1786*t283;
  p_output1[1]=-1.*t283*t2854 + t1850*t2870;
  p_output1[2]=-1.*t283*t3503 + t1850*t3564;
  p_output1[3]=0.;
  p_output1[4]=t3595;
  p_output1[5]=t3680;
  p_output1[6]=t3744;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1045*t1136 + t1066*t1092*t528;
  p_output1[9]=-1.*t1045*t2376 + t1066*t1092*t745;
  p_output1[10]=-1.*t1045*t3067 - 1.*t1092*t679;
  p_output1[11]=0.;
  p_output1[12]=0. - 1.1135*(-1.*t1850*t1976 + t1786*t283) - 0.0216*t3595 + t1136*t4345 + t1194*t4527 + t1249*t4641 + t1404*t4683 + t1460*t4772 + t1553*t4791 + t1648*t4843 + t1705*t4887 + t1786*t4953 + t1976*t5039 + t1066*t4045*t528 - 0.1305*(t1045*t1136 - 1.*t1066*t1092*t528) + t4165*t781 + t4260*t940 + t4460*t976 + var1[0];
  p_output1[13]=0. - 1.1135*(t283*t2854 - 1.*t1850*t2870) - 0.0216*t3680 + t2113*t4165 + t2185*t4260 + t2376*t4345 + t2219*t4460 + t2391*t4527 + t2447*t4641 + t2589*t4683 + t2663*t4772 + t2732*t4791 + t2805*t4843 + t2830*t4887 + t2854*t4953 + t2870*t5039 + t1066*t4045*t745 - 0.1305*(t1045*t2376 - 1.*t1066*t1092*t745) + var1[1];
  p_output1[14]=0. - 1.1135*(t283*t3503 - 1.*t1850*t3564) - 0.0216*t3744 + t3067*t4345 + t2960*t4460 + t3117*t4527 + t3147*t4641 + t3263*t4683 + t3335*t4772 + t3361*t4791 + t3414*t4843 + t3489*t4887 + t3503*t4953 + t3564*t5039 + t1066*t4165*t611 - 1.*t4045*t679 - 0.1305*(t1045*t3067 + t1092*t679) + t1066*t4260*t763 + var1[2];
  p_output1[15]=1.;
}



void H_toe_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
