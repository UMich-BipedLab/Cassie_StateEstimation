/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_toe_joint_right_src.h"

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
  double t1733;
  double t2229;
  double t1186;
  double t1831;
  double t2231;
  double t2582;
  double t1945;
  double t2308;
  double t2387;
  double t1126;
  double t2868;
  double t2952;
  double t3023;
  double t4262;
  double t2483;
  double t3046;
  double t3601;
  double t1070;
  double t4369;
  double t4411;
  double t4418;
  double t4426;
  double t4573;
  double t4630;
  double t4854;
  double t4871;
  double t4903;
  double t4970;
  double t4252;
  double t4938;
  double t4947;
  double t675;
  double t5012;
  double t5024;
  double t5038;
  double t5120;
  double t4951;
  double t5039;
  double t5066;
  double t348;
  double t5154;
  double t5159;
  double t5188;
  double t5206;
  double t5098;
  double t5190;
  double t5195;
  double t169;
  double t5218;
  double t5259;
  double t5273;
  double t59;
  double t5396;
  double t5403;
  double t5404;
  double t5412;
  double t5422;
  double t5435;
  double t5405;
  double t5437;
  double t5442;
  double t5459;
  double t5465;
  double t5475;
  double t5492;
  double t5517;
  double t5524;
  double t5451;
  double t5537;
  double t5540;
  double t5545;
  double t5552;
  double t5562;
  double t5543;
  double t5577;
  double t5582;
  double t5616;
  double t5630;
  double t5631;
  double t5351;
  double t5597;
  double t5633;
  double t5644;
  double t5649;
  double t5658;
  double t5661;
  double t5729;
  double t5736;
  double t5739;
  double t5746;
  double t5749;
  double t5780;
  double t5791;
  double t5797;
  double t5817;
  double t5744;
  double t5819;
  double t5834;
  double t5870;
  double t5872;
  double t5887;
  double t5856;
  double t5893;
  double t5896;
  double t5911;
  double t5915;
  double t5923;
  double t5903;
  double t5927;
  double t5933;
  double t5952;
  double t5953;
  double t5969;
  double t5201;
  double t5316;
  double t5326;
  double t5357;
  double t5358;
  double t5378;
  double t5647;
  double t5675;
  double t5676;
  double t5682;
  double t5698;
  double t5703;
  double t5942;
  double t5974;
  double t5994;
  double t6000;
  double t6021;
  double t6023;
  t1733 = Cos(var1[5]);
  t2229 = Sin(var1[3]);
  t1186 = Cos(var1[3]);
  t1831 = Sin(var1[4]);
  t2231 = Sin(var1[5]);
  t2582 = Sin(var1[13]);
  t1945 = t1186*t1733*t1831;
  t2308 = t2229*t2231;
  t2387 = t1945 + t2308;
  t1126 = Cos(var1[13]);
  t2868 = -1.*t1733*t2229;
  t2952 = t1186*t1831*t2231;
  t3023 = t2868 + t2952;
  t4262 = Cos(var1[15]);
  t2483 = t1126*t2387;
  t3046 = -1.*t2582*t3023;
  t3601 = t2483 + t3046;
  t1070 = Sin(var1[15]);
  t4369 = Cos(var1[14]);
  t4411 = Cos(var1[4]);
  t4418 = t4369*t1186*t4411;
  t4426 = Sin(var1[14]);
  t4573 = t2582*t2387;
  t4630 = t1126*t3023;
  t4854 = t4573 + t4630;
  t4871 = t4426*t4854;
  t4903 = t4418 + t4871;
  t4970 = Cos(var1[16]);
  t4252 = t1070*t3601;
  t4938 = t4262*t4903;
  t4947 = t4252 + t4938;
  t675 = Sin(var1[16]);
  t5012 = t4262*t3601;
  t5024 = -1.*t1070*t4903;
  t5038 = t5012 + t5024;
  t5120 = Cos(var1[17]);
  t4951 = -1.*t675*t4947;
  t5039 = t4970*t5038;
  t5066 = t4951 + t5039;
  t348 = Sin(var1[17]);
  t5154 = t4970*t4947;
  t5159 = t675*t5038;
  t5188 = t5154 + t5159;
  t5206 = Cos(var1[18]);
  t5098 = t348*t5066;
  t5190 = t5120*t5188;
  t5195 = t5098 + t5190;
  t169 = Sin(var1[18]);
  t5218 = t5120*t5066;
  t5259 = -1.*t348*t5188;
  t5273 = t5218 + t5259;
  t59 = Cos(var1[19]);
  t5396 = t1733*t2229*t1831;
  t5403 = -1.*t1186*t2231;
  t5404 = t5396 + t5403;
  t5412 = t1186*t1733;
  t5422 = t2229*t1831*t2231;
  t5435 = t5412 + t5422;
  t5405 = t1126*t5404;
  t5437 = -1.*t2582*t5435;
  t5442 = t5405 + t5437;
  t5459 = t4369*t4411*t2229;
  t5465 = t2582*t5404;
  t5475 = t1126*t5435;
  t5492 = t5465 + t5475;
  t5517 = t4426*t5492;
  t5524 = t5459 + t5517;
  t5451 = t1070*t5442;
  t5537 = t4262*t5524;
  t5540 = t5451 + t5537;
  t5545 = t4262*t5442;
  t5552 = -1.*t1070*t5524;
  t5562 = t5545 + t5552;
  t5543 = -1.*t675*t5540;
  t5577 = t4970*t5562;
  t5582 = t5543 + t5577;
  t5616 = t4970*t5540;
  t5630 = t675*t5562;
  t5631 = t5616 + t5630;
  t5351 = Sin(var1[19]);
  t5597 = t348*t5582;
  t5633 = t5120*t5631;
  t5644 = t5597 + t5633;
  t5649 = t5120*t5582;
  t5658 = -1.*t348*t5631;
  t5661 = t5649 + t5658;
  t5729 = t1126*t4411*t1733;
  t5736 = -1.*t4411*t2582*t2231;
  t5739 = t5729 + t5736;
  t5746 = -1.*t4369*t1831;
  t5749 = t4411*t1733*t2582;
  t5780 = t1126*t4411*t2231;
  t5791 = t5749 + t5780;
  t5797 = t4426*t5791;
  t5817 = t5746 + t5797;
  t5744 = t1070*t5739;
  t5819 = t4262*t5817;
  t5834 = t5744 + t5819;
  t5870 = t4262*t5739;
  t5872 = -1.*t1070*t5817;
  t5887 = t5870 + t5872;
  t5856 = -1.*t675*t5834;
  t5893 = t4970*t5887;
  t5896 = t5856 + t5893;
  t5911 = t4970*t5834;
  t5915 = t675*t5887;
  t5923 = t5911 + t5915;
  t5903 = t348*t5896;
  t5927 = t5120*t5923;
  t5933 = t5903 + t5927;
  t5952 = t5120*t5896;
  t5953 = -1.*t348*t5923;
  t5969 = t5952 + t5953;
  t5201 = -1.*t169*t5195;
  t5316 = t5206*t5273;
  t5326 = t5201 + t5316;
  t5357 = t5206*t5195;
  t5358 = t169*t5273;
  t5378 = t5357 + t5358;
  t5647 = -1.*t169*t5644;
  t5675 = t5206*t5661;
  t5676 = t5647 + t5675;
  t5682 = t5206*t5644;
  t5698 = t169*t5661;
  t5703 = t5682 + t5698;
  t5942 = -1.*t169*t5933;
  t5974 = t5206*t5969;
  t5994 = t5942 + t5974;
  t6000 = t5206*t5933;
  t6021 = t169*t5969;
  t6023 = t6000 + t6021;
  p_output1[0]=t5351*t5378 - 1.*t5326*t59;
  p_output1[1]=t5351*t5703 - 1.*t5676*t59;
  p_output1[2]=-1.*t59*t5994 + t5351*t6023;
  p_output1[3]=t5326*t5351 + t5378*t59;
  p_output1[4]=t5351*t5676 + t5703*t59;
  p_output1[5]=t5351*t5994 + t59*t6023;
  p_output1[6]=t1186*t4411*t4426 - 1.*t4369*t4854;
  p_output1[7]=t2229*t4411*t4426 - 1.*t4369*t5492;
  p_output1[8]=-1.*t1831*t4426 - 1.*t4369*t5791;
}



void R_toe_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
