/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:11:46 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t221;
  double t1409;
  double t1068;
  double t1239;
  double t1414;
  double t1644;
  double t1308;
  double t1418;
  double t1519;
  double t1029;
  double t1732;
  double t1813;
  double t1828;
  double t1998;
  double t1589;
  double t1894;
  double t1989;
  double t946;
  double t2007;
  double t2083;
  double t2101;
  double t2397;
  double t1993;
  double t2280;
  double t2360;
  double t943;
  double t2420;
  double t2435;
  double t2457;
  double t192;
  double t37;
  double t317;
  double t2606;
  double t2642;
  double t2672;
  double t2731;
  double t2736;
  double t2740;
  double t2715;
  double t2749;
  double t2763;
  double t2803;
  double t2823;
  double t2856;
  double t2795;
  double t2927;
  double t2947;
  double t2957;
  double t2967;
  double t3001;
  double t2953;
  double t3010;
  double t3031;
  double t3073;
  double t3074;
  double t3076;
  double t3121;
  double t3147;
  double t3174;
  double t3238;
  double t3247;
  double t3252;
  double t3232;
  double t3282;
  double t3292;
  double t3325;
  double t3328;
  double t3330;
  double t3293;
  double t3362;
  double t3364;
  double t3427;
  double t3439;
  double t3446;
  double t3411;
  double t3452;
  double t3464;
  double t3504;
  double t3506;
  double t3508;
  double t2392;
  double t2478;
  double t2480;
  double t2570;
  double t2576;
  double t2579;
  double t3053;
  double t3088;
  double t3100;
  double t3105;
  double t3111;
  double t3112;
  double t3490;
  double t3519;
  double t3535;
  double t3583;
  double t3584;
  double t3585;
  double t3707;
  double t3728;
  double t3912;
  double t3918;
  double t4024;
  double t4027;
  double t4117;
  double t4120;
  double t3666;
  double t3667;
  double t3792;
  double t3839;
  double t3841;
  double t3853;
  double t3855;
  double t3730;
  double t3733;
  double t3750;
  double t3876;
  double t3897;
  double t3901;
  double t3920;
  double t3931;
  double t3933;
  double t3947;
  double t3968;
  double t4000;
  double t4032;
  double t4033;
  double t4040;
  double t4081;
  double t4087;
  double t4102;
  double t4164;
  double t4165;
  double t4167;
  double t4182;
  double t4187;
  double t4191;
  double t4249;
  double t4263;
  double t4267;
  double t4301;
  double t4304;
  double t4305;
  t221 = Cos(var1[1]);
  t1409 = Cos(var1[3]);
  t1068 = Cos(var1[2]);
  t1239 = Sin(var1[3]);
  t1414 = Sin(var1[2]);
  t1644 = Cos(var1[4]);
  t1308 = -1.*t221*t1068*t1239;
  t1418 = -1.*t1409*t221*t1414;
  t1519 = t1308 + t1418;
  t1029 = Sin(var1[4]);
  t1732 = t1409*t221*t1068;
  t1813 = -1.*t221*t1239*t1414;
  t1828 = t1732 + t1813;
  t1998 = Cos(var1[5]);
  t1589 = t1029*t1519;
  t1894 = t1644*t1828;
  t1989 = t1589 + t1894;
  t946 = Sin(var1[5]);
  t2007 = t1644*t1519;
  t2083 = -1.*t1029*t1828;
  t2101 = t2007 + t2083;
  t2397 = Cos(var1[6]);
  t1993 = -1.*t946*t1989;
  t2280 = t1998*t2101;
  t2360 = t1993 + t2280;
  t943 = Sin(var1[6]);
  t2420 = t1998*t1989;
  t2435 = t946*t2101;
  t2457 = t2420 + t2435;
  t192 = Cos(var1[0]);
  t37 = Sin(var1[1]);
  t317 = Sin(var1[0]);
  t2606 = t192*t1068*t37;
  t2642 = -1.*t317*t1414;
  t2672 = t2606 + t2642;
  t2731 = -1.*t1068*t317;
  t2736 = -1.*t192*t37*t1414;
  t2740 = t2731 + t2736;
  t2715 = -1.*t1239*t2672;
  t2749 = t1409*t2740;
  t2763 = t2715 + t2749;
  t2803 = t1409*t2672;
  t2823 = t1239*t2740;
  t2856 = t2803 + t2823;
  t2795 = t1029*t2763;
  t2927 = t1644*t2856;
  t2947 = t2795 + t2927;
  t2957 = t1644*t2763;
  t2967 = -1.*t1029*t2856;
  t3001 = t2957 + t2967;
  t2953 = -1.*t946*t2947;
  t3010 = t1998*t3001;
  t3031 = t2953 + t3010;
  t3073 = t1998*t2947;
  t3074 = t946*t3001;
  t3076 = t3073 + t3074;
  t3121 = t1068*t317*t37;
  t3147 = t192*t1414;
  t3174 = t3121 + t3147;
  t3238 = t192*t1068;
  t3247 = -1.*t317*t37*t1414;
  t3252 = t3238 + t3247;
  t3232 = -1.*t1239*t3174;
  t3282 = t1409*t3252;
  t3292 = t3232 + t3282;
  t3325 = t1409*t3174;
  t3328 = t1239*t3252;
  t3330 = t3325 + t3328;
  t3293 = t1029*t3292;
  t3362 = t1644*t3330;
  t3364 = t3293 + t3362;
  t3427 = t1644*t3292;
  t3439 = -1.*t1029*t3330;
  t3446 = t3427 + t3439;
  t3411 = -1.*t946*t3364;
  t3452 = t1998*t3446;
  t3464 = t3411 + t3452;
  t3504 = t1998*t3364;
  t3506 = t946*t3446;
  t3508 = t3504 + t3506;
  t2392 = t943*t2360;
  t2478 = t2397*t2457;
  t2480 = t2392 + t2478;
  t2570 = t2397*t2360;
  t2576 = -1.*t943*t2457;
  t2579 = t2570 + t2576;
  t3053 = t943*t3031;
  t3088 = t2397*t3076;
  t3100 = t3053 + t3088;
  t3105 = t2397*t3031;
  t3111 = -1.*t943*t3076;
  t3112 = t3105 + t3111;
  t3490 = t943*t3464;
  t3519 = t2397*t3508;
  t3535 = t3490 + t3519;
  t3583 = t2397*t3464;
  t3584 = -1.*t943*t3508;
  t3585 = t3583 + t3584;
  t3707 = -1.*t1409;
  t3728 = 1. + t3707;
  t3912 = -1.*t1644;
  t3918 = 1. + t3912;
  t4024 = -1.*t1998;
  t4027 = 1. + t4024;
  t4117 = -1.*t2397;
  t4120 = 1. + t4117;
  t3666 = -1.*t221;
  t3667 = 1. + t3666;
  t3792 = -1.*t1068;
  t3839 = 1. + t3792;
  t3841 = -0.049*t3839;
  t3853 = -0.09*t1414;
  t3855 = 0. + t3841 + t3853;
  t3730 = -0.049*t3728;
  t3733 = -0.21*t1239;
  t3750 = 0. + t3730 + t3733;
  t3876 = -0.21*t3728;
  t3897 = 0.049*t1239;
  t3901 = 0. + t3876 + t3897;
  t3920 = -0.2707*t3918;
  t3931 = 0.0016*t1029;
  t3933 = 0. + t3920 + t3931;
  t3947 = -0.0016*t3918;
  t3968 = -0.2707*t1029;
  t4000 = 0. + t3947 + t3968;
  t4032 = 0.0184*t4027;
  t4033 = -0.7055*t946;
  t4040 = 0. + t4032 + t4033;
  t4081 = -0.7055*t4027;
  t4087 = -0.0184*t946;
  t4102 = 0. + t4081 + t4087;
  t4164 = -1.1135*t4120;
  t4165 = 0.0216*t943;
  t4167 = 0. + t4164 + t4165;
  t4182 = -0.0216*t4120;
  t4187 = -1.1135*t943;
  t4191 = 0. + t4182 + t4187;
  t4249 = 0.135*t3667;
  t4263 = 0.049*t37;
  t4267 = 0. + t4249 + t4263;
  t4301 = -0.09*t3839;
  t4304 = 0.049*t1414;
  t4305 = 0. + t4301 + t4304;

  p_output1(0)=0. + t37;
  p_output1(1)=0. - 1.*t192*t221;
  p_output1(2)=0. - 1.*t221*t317;
  p_output1(3)=0.;
  p_output1(4)=0. + 0.642788*t2480 + 0.766044*t2579;
  p_output1(5)=0. + 0.642788*t3100 + 0.766044*t3112;
  p_output1(6)=0. + 0.642788*t3535 + 0.766044*t3585;
  p_output1(7)=0.;
  p_output1(8)=0. - 0.766044*t2480 + 0.642788*t2579;
  p_output1(9)=0. - 0.766044*t3100 + 0.642788*t3112;
  p_output1(10)=0. - 0.766044*t3535 + 0.642788*t3585;
  p_output1(11)=0.;
  p_output1(12)=-0.03155 + 0.0306*t2480 - 1.1312*t2579 - 0.049*t3667 + 0.004500000000000004*t37 + t1068*t221*t3750 + t221*t3855 - 1.*t1414*t221*t3901 + t1519*t3933 + t1828*t4000 + t1989*t4040 + t2101*t4102 + t2360*t4167 + t2457*t4191;
  p_output1(13)=0. + 0.135*(1. - 1.*t192) + 0.1305*t192*t221 + 0.0306*t3100 - 1.1312*t3112 + t2672*t3750 + t192*t37*t3855 + t2740*t3901 + t2763*t3933 + t2856*t4000 + t2947*t4040 + t3001*t4102 + t3031*t4167 + t3076*t4191 + t192*t4267 - 1.*t317*t4305;
  p_output1(14)=0.07996 - 0.135*t317 + 0.1305*t221*t317 + 0.0306*t3535 - 1.1312*t3585 + t3174*t3750 + t317*t37*t3855 + t3252*t3901 + t3292*t3933 + t3330*t4000 + t3364*t4040 + t3446*t4102 + t3464*t4167 + t3508*t4191 + t317*t4267 + t192*t4305;
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_VectorNav_to_LeftToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void H_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



