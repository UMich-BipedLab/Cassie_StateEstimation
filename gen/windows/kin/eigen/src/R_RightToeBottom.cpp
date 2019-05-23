/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:10:32 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t188;
  double t883;
  double t923;
  double t894;
  double t967;
  double t434;
  double t467;
  double t773;
  double t838;
  double t1028;
  double t918;
  double t984;
  double t1007;
  double t1065;
  double t1079;
  double t1123;
  double t1024;
  double t1171;
  double t1227;
  double t2325;
  double t2172;
  double t2274;
  double t2275;
  double t2153;
  double t2326;
  double t2328;
  double t2354;
  double t2438;
  double t2315;
  double t2387;
  double t2414;
  double t2118;
  double t2453;
  double t2562;
  double t2573;
  double t2641;
  double t2429;
  double t2599;
  double t2612;
  double t2109;
  double t2660;
  double t2675;
  double t2716;
  double t2801;
  double t2636;
  double t2740;
  double t2769;
  double t2094;
  double t2804;
  double t2805;
  double t2809;
  double t2887;
  double t2787;
  double t2812;
  double t2870;
  double t2072;
  double t2932;
  double t2962;
  double t2965;
  double t1327;
  double t1354;
  double t1425;
  double t1692;
  double t1712;
  double t1716;
  double t1677;
  double t1731;
  double t1734;
  double t3245;
  double t3247;
  double t3337;
  double t3394;
  double t3397;
  double t3398;
  double t3389;
  double t3403;
  double t3423;
  double t3436;
  double t3448;
  double t3575;
  double t3427;
  double t3670;
  double t3686;
  double t3723;
  double t3744;
  double t3763;
  double t3718;
  double t3842;
  double t3847;
  double t3936;
  double t3958;
  double t3969;
  double t3926;
  double t3984;
  double t3988;
  double t4062;
  double t4072;
  double t4111;
  double t1813;
  double t1816;
  double t1947;
  double t4292;
  double t4310;
  double t4324;
  double t4356;
  double t4380;
  double t4386;
  double t4330;
  double t4405;
  double t4417;
  double t4459;
  double t4489;
  double t4493;
  double t4427;
  double t4515;
  double t4522;
  double t4541;
  double t4556;
  double t4558;
  double t4523;
  double t4565;
  double t4567;
  double t4588;
  double t4590;
  double t4594;
  double t4585;
  double t4595;
  double t4597;
  double t4602;
  double t4605;
  double t4606;
  double t2874;
  double t2992;
  double t3030;
  double t3089;
  double t3130;
  double t3136;
  double t4054;
  double t4128;
  double t4150;
  double t4177;
  double t4185;
  double t4196;
  double t4599;
  double t4610;
  double t4611;
  double t4633;
  double t4642;
  double t4649;
  t188 = Cos(var1[3]);
  t883 = Cos(var1[5]);
  t923 = Sin(var1[3]);
  t894 = Sin(var1[4]);
  t967 = Sin(var1[5]);
  t434 = Cos(var1[4]);
  t467 = Sin(var1[14]);
  t773 = Cos(var1[14]);
  t838 = Sin(var1[13]);
  t1028 = Cos(var1[13]);
  t918 = t188*t883*t894;
  t984 = t923*t967;
  t1007 = t918 + t984;
  t1065 = -1.*t883*t923;
  t1079 = t188*t894*t967;
  t1123 = t1065 + t1079;
  t1024 = t838*t1007;
  t1171 = t1028*t1123;
  t1227 = t1024 + t1171;
  t2325 = Cos(var1[15]);
  t2172 = t1028*t1007;
  t2274 = -1.*t838*t1123;
  t2275 = t2172 + t2274;
  t2153 = Sin(var1[15]);
  t2326 = t773*t188*t434;
  t2328 = t467*t1227;
  t2354 = t2326 + t2328;
  t2438 = Cos(var1[16]);
  t2315 = t2153*t2275;
  t2387 = t2325*t2354;
  t2414 = t2315 + t2387;
  t2118 = Sin(var1[16]);
  t2453 = t2325*t2275;
  t2562 = -1.*t2153*t2354;
  t2573 = t2453 + t2562;
  t2641 = Cos(var1[17]);
  t2429 = -1.*t2118*t2414;
  t2599 = t2438*t2573;
  t2612 = t2429 + t2599;
  t2109 = Sin(var1[17]);
  t2660 = t2438*t2414;
  t2675 = t2118*t2573;
  t2716 = t2660 + t2675;
  t2801 = Cos(var1[18]);
  t2636 = t2109*t2612;
  t2740 = t2641*t2716;
  t2769 = t2636 + t2740;
  t2094 = Sin(var1[18]);
  t2804 = t2641*t2612;
  t2805 = -1.*t2109*t2716;
  t2809 = t2804 + t2805;
  t2887 = Cos(var1[19]);
  t2787 = -1.*t2094*t2769;
  t2812 = t2801*t2809;
  t2870 = t2787 + t2812;
  t2072 = Sin(var1[19]);
  t2932 = t2801*t2769;
  t2962 = t2094*t2809;
  t2965 = t2932 + t2962;
  t1327 = t883*t923*t894;
  t1354 = -1.*t188*t967;
  t1425 = t1327 + t1354;
  t1692 = t188*t883;
  t1712 = t923*t894*t967;
  t1716 = t1692 + t1712;
  t1677 = t838*t1425;
  t1731 = t1028*t1716;
  t1734 = t1677 + t1731;
  t3245 = t1028*t1425;
  t3247 = -1.*t838*t1716;
  t3337 = t3245 + t3247;
  t3394 = t773*t434*t923;
  t3397 = t467*t1734;
  t3398 = t3394 + t3397;
  t3389 = t2153*t3337;
  t3403 = t2325*t3398;
  t3423 = t3389 + t3403;
  t3436 = t2325*t3337;
  t3448 = -1.*t2153*t3398;
  t3575 = t3436 + t3448;
  t3427 = -1.*t2118*t3423;
  t3670 = t2438*t3575;
  t3686 = t3427 + t3670;
  t3723 = t2438*t3423;
  t3744 = t2118*t3575;
  t3763 = t3723 + t3744;
  t3718 = t2109*t3686;
  t3842 = t2641*t3763;
  t3847 = t3718 + t3842;
  t3936 = t2641*t3686;
  t3958 = -1.*t2109*t3763;
  t3969 = t3936 + t3958;
  t3926 = -1.*t2094*t3847;
  t3984 = t2801*t3969;
  t3988 = t3926 + t3984;
  t4062 = t2801*t3847;
  t4072 = t2094*t3969;
  t4111 = t4062 + t4072;
  t1813 = t434*t883*t838;
  t1816 = t1028*t434*t967;
  t1947 = t1813 + t1816;
  t4292 = t1028*t434*t883;
  t4310 = -1.*t434*t838*t967;
  t4324 = t4292 + t4310;
  t4356 = -1.*t773*t894;
  t4380 = t467*t1947;
  t4386 = t4356 + t4380;
  t4330 = t2153*t4324;
  t4405 = t2325*t4386;
  t4417 = t4330 + t4405;
  t4459 = t2325*t4324;
  t4489 = -1.*t2153*t4386;
  t4493 = t4459 + t4489;
  t4427 = -1.*t2118*t4417;
  t4515 = t2438*t4493;
  t4522 = t4427 + t4515;
  t4541 = t2438*t4417;
  t4556 = t2118*t4493;
  t4558 = t4541 + t4556;
  t4523 = t2109*t4522;
  t4565 = t2641*t4558;
  t4567 = t4523 + t4565;
  t4588 = t2641*t4522;
  t4590 = -1.*t2109*t4558;
  t4594 = t4588 + t4590;
  t4585 = -1.*t2094*t4567;
  t4595 = t2801*t4594;
  t4597 = t4585 + t4595;
  t4602 = t2801*t4567;
  t4605 = t2094*t4594;
  t4606 = t4602 + t4605;
  t2874 = t2072*t2870;
  t2992 = t2887*t2965;
  t3030 = t2874 + t2992;
  t3089 = t2887*t2870;
  t3130 = -1.*t2072*t2965;
  t3136 = t3089 + t3130;
  t4054 = t2072*t3988;
  t4128 = t2887*t4111;
  t4150 = t4054 + t4128;
  t4177 = t2887*t3988;
  t4185 = -1.*t2072*t4111;
  t4196 = t4177 + t4185;
  t4599 = t2072*t4597;
  t4610 = t2887*t4606;
  t4611 = t4599 + t4610;
  t4633 = t2887*t4597;
  t4642 = -1.*t2072*t4606;
  t4649 = t4633 + t4642;

  p_output1(0)=t188*t434*t467 - 1.*t1227*t773;
  p_output1(1)=-1.*t1734*t773 + t434*t467*t923;
  p_output1(2)=-1.*t1947*t773 - 1.*t467*t894;
  p_output1(3)=0.642788*t3030 + 0.766044*t3136;
  p_output1(4)=0.642788*t4150 + 0.766044*t4196;
  p_output1(5)=0.642788*t4611 + 0.766044*t4649;
  p_output1(6)=-0.766044*t3030 + 0.642788*t3136;
  p_output1(7)=-0.766044*t4150 + 0.642788*t4196;
  p_output1(8)=-0.766044*t4611 + 0.642788*t4649;
}


       
Eigen::Matrix<double,3,3> R_RightToeBottom(const Eigen::Matrix<double,20,1> &var1)
//void R_RightToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



