/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:59 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeBack_src.h"

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
  double t11;
  double t1886;
  double t2006;
  double t1923;
  double t2032;
  double t892;
  double t1080;
  double t1142;
  double t1205;
  double t1739;
  double t1944;
  double t2097;
  double t2149;
  double t2411;
  double t2756;
  double t2801;
  double t2863;
  double t489;
  double t3026;
  double t3052;
  double t3069;
  double t3344;
  double t3370;
  double t3402;
  double t3461;
  double t3545;
  double t3602;
  double t3743;
  double t4095;
  double t4168;
  double t4210;
  double t4228;
  double t4236;
  double t4263;
  double t4285;
  double t4434;
  double t4481;
  double t4488;
  double t4716;
  double t4742;
  double t4747;
  double t4752;
  double t4753;
  double t4754;
  double t4888;
  double t4954;
  double t4962;
  double t4963;
  double t4996;
  double t5031;
  double t5056;
  double t5097;
  double t5102;
  double t5151;
  double t5180;
  double t5192;
  double t5211;
  double t5224;
  double t5246;
  double t5247;
  double t5249;
  double t5252;
  double t5266;
  double t5269;
  double t5289;
  double t5303;
  double t5306;
  double t5324;
  double t5342;
  double t5352;
  double t5354;
  double t1157;
  double t1347;
  double t1387;
  double t1768;
  double t1827;
  double t2519;
  double t2588;
  double t2719;
  double t2745;
  double t2974;
  double t3013;
  double t3021;
  double t5395;
  double t5402;
  double t5409;
  double t5423;
  double t5432;
  double t5443;
  double t3445;
  double t3484;
  double t3487;
  double t5458;
  double t5471;
  double t5472;
  double t3964;
  double t3996;
  double t4026;
  double t4265;
  double t4384;
  double t4420;
  double t5479;
  double t5482;
  double t5489;
  double t5527;
  double t5528;
  double t5541;
  double t4574;
  double t4584;
  double t4656;
  double t4765;
  double t4920;
  double t4946;
  double t5554;
  double t5558;
  double t5560;
  double t5569;
  double t5570;
  double t5573;
  double t4979;
  double t4981;
  double t4988;
  double t5167;
  double t5182;
  double t5189;
  double t5585;
  double t5588;
  double t5590;
  double t5600;
  double t5607;
  double t5613;
  double t5233;
  double t5238;
  double t5242;
  double t5279;
  double t5290;
  double t5292;
  double t5620;
  double t5632;
  double t5640;
  double t5650;
  double t5655;
  double t5656;
  double t5331;
  double t5334;
  double t5341;
  double t5671;
  double t5683;
  double t5684;
  double t5699;
  double t5701;
  double t5705;
  double t5767;
  double t5768;
  double t5772;
  double t5785;
  double t5788;
  double t5789;
  double t5811;
  double t5814;
  double t5816;
  double t5824;
  double t5826;
  double t5827;
  double t5830;
  double t5838;
  double t5843;
  double t5846;
  double t5847;
  double t5848;
  double t5852;
  double t5854;
  double t5859;
  double t5862;
  double t5863;
  double t5864;
  double t5885;
  double t5888;
  double t5889;
  double t5897;
  double t5904;
  double t5907;
  double t5914;
  double t5917;
  double t5925;
  t11 = Cos(var1[3]);
  t1886 = Cos(var1[5]);
  t2006 = Sin(var1[3]);
  t1923 = Sin(var1[4]);
  t2032 = Sin(var1[5]);
  t892 = Cos(var1[14]);
  t1080 = -1.*t892;
  t1142 = 1. + t1080;
  t1205 = Sin(var1[14]);
  t1739 = Sin(var1[13]);
  t1944 = t11*t1886*t1923;
  t2097 = t2006*t2032;
  t2149 = t1944 + t2097;
  t2411 = Cos(var1[13]);
  t2756 = -1.*t1886*t2006;
  t2801 = t11*t1923*t2032;
  t2863 = t2756 + t2801;
  t489 = Cos(var1[4]);
  t3026 = t1739*t2149;
  t3052 = t2411*t2863;
  t3069 = t3026 + t3052;
  t3344 = Cos(var1[15]);
  t3370 = -1.*t3344;
  t3402 = 1. + t3370;
  t3461 = Sin(var1[15]);
  t3545 = t2411*t2149;
  t3602 = -1.*t1739*t2863;
  t3743 = t3545 + t3602;
  t4095 = t892*t11*t489;
  t4168 = t1205*t3069;
  t4210 = t4095 + t4168;
  t4228 = Cos(var1[16]);
  t4236 = -1.*t4228;
  t4263 = 1. + t4236;
  t4285 = Sin(var1[16]);
  t4434 = t3461*t3743;
  t4481 = t3344*t4210;
  t4488 = t4434 + t4481;
  t4716 = t3344*t3743;
  t4742 = -1.*t3461*t4210;
  t4747 = t4716 + t4742;
  t4752 = Cos(var1[17]);
  t4753 = -1.*t4752;
  t4754 = 1. + t4753;
  t4888 = Sin(var1[17]);
  t4954 = -1.*t4285*t4488;
  t4962 = t4228*t4747;
  t4963 = t4954 + t4962;
  t4996 = t4228*t4488;
  t5031 = t4285*t4747;
  t5056 = t4996 + t5031;
  t5097 = Cos(var1[18]);
  t5102 = -1.*t5097;
  t5151 = 1. + t5102;
  t5180 = Sin(var1[18]);
  t5192 = t4888*t4963;
  t5211 = t4752*t5056;
  t5224 = t5192 + t5211;
  t5246 = t4752*t4963;
  t5247 = -1.*t4888*t5056;
  t5249 = t5246 + t5247;
  t5252 = Cos(var1[19]);
  t5266 = -1.*t5252;
  t5269 = 1. + t5266;
  t5289 = Sin(var1[19]);
  t5303 = -1.*t5180*t5224;
  t5306 = t5097*t5249;
  t5324 = t5303 + t5306;
  t5342 = t5097*t5224;
  t5352 = t5180*t5249;
  t5354 = t5342 + t5352;
  t1157 = -0.049*t1142;
  t1347 = -0.135*t1205;
  t1387 = 0. + t1157 + t1347;
  t1768 = 0.135*t1739;
  t1827 = 0. + t1768;
  t2519 = -1.*t2411;
  t2588 = 1. + t2519;
  t2719 = -0.135*t2588;
  t2745 = 0. + t2719;
  t2974 = -0.135*t1142;
  t3013 = 0.049*t1205;
  t3021 = 0. + t2974 + t3013;
  t5395 = t1886*t2006*t1923;
  t5402 = -1.*t11*t2032;
  t5409 = t5395 + t5402;
  t5423 = t11*t1886;
  t5432 = t2006*t1923*t2032;
  t5443 = t5423 + t5432;
  t3445 = -0.09*t3402;
  t3484 = 0.049*t3461;
  t3487 = 0. + t3445 + t3484;
  t5458 = t1739*t5409;
  t5471 = t2411*t5443;
  t5472 = t5458 + t5471;
  t3964 = -0.049*t3402;
  t3996 = -0.09*t3461;
  t4026 = 0. + t3964 + t3996;
  t4265 = -0.049*t4263;
  t4384 = -0.21*t4285;
  t4420 = 0. + t4265 + t4384;
  t5479 = t2411*t5409;
  t5482 = -1.*t1739*t5443;
  t5489 = t5479 + t5482;
  t5527 = t892*t489*t2006;
  t5528 = t1205*t5472;
  t5541 = t5527 + t5528;
  t4574 = -0.21*t4263;
  t4584 = 0.049*t4285;
  t4656 = 0. + t4574 + t4584;
  t4765 = -0.2707*t4754;
  t4920 = 0.0016*t4888;
  t4946 = 0. + t4765 + t4920;
  t5554 = t3461*t5489;
  t5558 = t3344*t5541;
  t5560 = t5554 + t5558;
  t5569 = t3344*t5489;
  t5570 = -1.*t3461*t5541;
  t5573 = t5569 + t5570;
  t4979 = -0.0016*t4754;
  t4981 = -0.2707*t4888;
  t4988 = 0. + t4979 + t4981;
  t5167 = 0.0184*t5151;
  t5182 = -0.7055*t5180;
  t5189 = 0. + t5167 + t5182;
  t5585 = -1.*t4285*t5560;
  t5588 = t4228*t5573;
  t5590 = t5585 + t5588;
  t5600 = t4228*t5560;
  t5607 = t4285*t5573;
  t5613 = t5600 + t5607;
  t5233 = -0.7055*t5151;
  t5238 = -0.0184*t5180;
  t5242 = 0. + t5233 + t5238;
  t5279 = -1.1135*t5269;
  t5290 = 0.0216*t5289;
  t5292 = 0. + t5279 + t5290;
  t5620 = t4888*t5590;
  t5632 = t4752*t5613;
  t5640 = t5620 + t5632;
  t5650 = t4752*t5590;
  t5655 = -1.*t4888*t5613;
  t5656 = t5650 + t5655;
  t5331 = -0.0216*t5269;
  t5334 = -1.1135*t5289;
  t5341 = 0. + t5331 + t5334;
  t5671 = -1.*t5180*t5640;
  t5683 = t5097*t5656;
  t5684 = t5671 + t5683;
  t5699 = t5097*t5640;
  t5701 = t5180*t5656;
  t5705 = t5699 + t5701;
  t5767 = t489*t1886*t1739;
  t5768 = t2411*t489*t2032;
  t5772 = t5767 + t5768;
  t5785 = t2411*t489*t1886;
  t5788 = -1.*t489*t1739*t2032;
  t5789 = t5785 + t5788;
  t5811 = -1.*t892*t1923;
  t5814 = t1205*t5772;
  t5816 = t5811 + t5814;
  t5824 = t3461*t5789;
  t5826 = t3344*t5816;
  t5827 = t5824 + t5826;
  t5830 = t3344*t5789;
  t5838 = -1.*t3461*t5816;
  t5843 = t5830 + t5838;
  t5846 = -1.*t4285*t5827;
  t5847 = t4228*t5843;
  t5848 = t5846 + t5847;
  t5852 = t4228*t5827;
  t5854 = t4285*t5843;
  t5859 = t5852 + t5854;
  t5862 = t4888*t5848;
  t5863 = t4752*t5859;
  t5864 = t5862 + t5863;
  t5885 = t4752*t5848;
  t5888 = -1.*t4888*t5859;
  t5889 = t5885 + t5888;
  t5897 = -1.*t5180*t5864;
  t5904 = t5097*t5889;
  t5907 = t5897 + t5904;
  t5914 = t5097*t5864;
  t5917 = t5180*t5889;
  t5925 = t5914 + t5917;
  p_output1[0]=0. + t1827*t2149 + t2745*t2863 + t3021*t3069 + t3487*t3743 + t4026*t4210 + t4420*t4488 + t4656*t4747 + t11*t1387*t489 + t4946*t4963 + t4988*t5056 + t5189*t5224 + t5242*t5249 + t5292*t5324 + t5341*t5354 - 0.027251*(t5289*t5324 + t5252*t5354) - 1.200144*(t5252*t5324 - 1.*t5289*t5354) - 0.1305*(-1.*t11*t1205*t489 + t3069*t892) + var1[0];
  p_output1[1]=0. + t1387*t2006*t489 + t1827*t5409 + t2745*t5443 + t3021*t5472 + t3487*t5489 + t4026*t5541 + t4420*t5560 + t4656*t5573 + t4946*t5590 + t4988*t5613 + t5189*t5640 + t5242*t5656 + t5292*t5684 + t5341*t5705 - 0.027251*(t5289*t5684 + t5252*t5705) - 1.200144*(t5252*t5684 - 1.*t5289*t5705) - 0.1305*(-1.*t1205*t2006*t489 + t5472*t892) + var1[1];
  p_output1[2]=0. - 1.*t1387*t1923 + t1827*t1886*t489 + t2032*t2745*t489 + t3021*t5772 + t3487*t5789 + t4026*t5816 + t4420*t5827 + t4656*t5843 + t4946*t5848 + t4988*t5859 + t5189*t5864 + t5242*t5889 + t5292*t5907 + t5341*t5925 - 0.027251*(t5289*t5907 + t5252*t5925) - 1.200144*(t5252*t5907 - 1.*t5289*t5925) - 0.1305*(t1205*t1923 + t5772*t892) + var1[2];
}



void p_RightToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
