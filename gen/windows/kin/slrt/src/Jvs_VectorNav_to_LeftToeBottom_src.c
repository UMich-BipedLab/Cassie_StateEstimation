/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:20:06 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jvs_VectorNav_to_LeftToeBottom_src.h"

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
  double t54;
  double t833;
  double t835;
  double t875;
  double t1272;
  double t114;
  double t452;
  double t617;
  double t957;
  double t1501;
  double t1576;
  double t1866;
  double t1907;
  double t2033;
  double t2035;
  double t1020;
  double t1434;
  double t1437;
  double t1479;
  double t2181;
  double t3080;
  double t3161;
  double t3173;
  double t3204;
  double t2050;
  double t3175;
  double t3269;
  double t3288;
  double t3431;
  double t3494;
  double t3509;
  double t2300;
  double t2346;
  double t2397;
  double t2830;
  double t2877;
  double t2400;
  double t2445;
  double t2616;
  double t2682;
  double t2896;
  double t2948;
  double t2949;
  double t3014;
  double t3024;
  double t4576;
  double t4559;
  double t3553;
  double t3566;
  double t3773;
  double t3800;
  double t3856;
  double t4739;
  double t4767;
  double t3927;
  double t3934;
  double t3942;
  double t3388;
  double t3513;
  double t4789;
  double t4798;
  double t4809;
  double t4310;
  double t4319;
  double t4363;
  double t4857;
  double t4865;
  double t4896;
  double t4398;
  double t4448;
  double t4462;
  double t3633;
  double t3692;
  double t3695;
  double t3997;
  double t4087;
  double t4195;
  double t4575;
  double t4598;
  double t4609;
  double t4653;
  double t4660;
  double t4681;
  double t5278;
  double t5271;
  double t4822;
  double t4900;
  double t5001;
  double t5007;
  double t5018;
  double t5298;
  double t5303;
  double t5041;
  double t5072;
  double t5075;
  double t4944;
  double t4948;
  double t5306;
  double t5309;
  double t5310;
  double t5181;
  double t5182;
  double t5198;
  double t5320;
  double t5325;
  double t5333;
  double t5210;
  double t5213;
  double t5228;
  double t4960;
  double t4966;
  double t5090;
  double t5096;
  double t5120;
  double t5130;
  double t5147;
  double t5149;
  double t5274;
  double t5281;
  double t5282;
  double t5287;
  double t5288;
  double t5289;
  double t5486;
  double t5479;
  double t5318;
  double t5337;
  double t5381;
  double t5382;
  double t5384;
  double t5532;
  double t5537;
  double t5388;
  double t5390;
  double t5391;
  double t5349;
  double t5352;
  double t5539;
  double t5540;
  double t5541;
  double t5445;
  double t5446;
  double t5452;
  double t5553;
  double t5554;
  double t5560;
  double t5458;
  double t5461;
  double t5463;
  double t5367;
  double t5369;
  double t5395;
  double t5397;
  double t5415;
  double t5419;
  double t5422;
  double t5423;
  t54 = Cos(var1[0]);
  t833 = Sin(var1[0]);
  t835 = -1.*t833;
  t875 = 0. + t835;
  t1272 = Cos(var1[1]);
  t114 = -1.*t54;
  t452 = 1. + t114;
  t617 = 0.135*t452;
  t957 = 0.135*t833;
  t1501 = -1.*t1272;
  t1576 = 1. + t1501;
  t1866 = 0.135*t1576;
  t1907 = Sin(var1[1]);
  t2033 = 0.049*t1907;
  t2035 = 0. + t1866 + t2033;
  t1020 = 0.049*t54;
  t1434 = -1.*t54*t1272;
  t1437 = 0. + t1434;
  t1479 = -0.07996*t1437;
  t2181 = -1.*t833*t2035;
  t3080 = Cos(var1[2]);
  t3161 = -1.*t3080;
  t3173 = 1. + t3161;
  t3204 = Sin(var1[2]);
  t2050 = t54*t2035;
  t3175 = -0.049*t3173;
  t3269 = -0.09*t3204;
  t3288 = 0. + t3175 + t3269;
  t3431 = -0.09*t3173;
  t3494 = 0.049*t3204;
  t3509 = 0. + t3431 + t3494;
  t2300 = -1.*t1272*t833;
  t2346 = 0. + t2300;
  t2397 = 0.03155*t2346;
  t2830 = 0. + t1907;
  t2877 = 0.07996*t2830;
  t2400 = 0.049*t1576;
  t2445 = -0.135*t1907;
  t2616 = -0.135*t833;
  t2682 = t833*t2035;
  t2896 = -0.03155*t1437;
  t2948 = -0.049*t1576;
  t2949 = 0.135*t1907;
  t3014 = -0.135*t452;
  t3024 = -1.*t54*t2035;
  t4576 = Cos(var1[3]);
  t4559 = Sin(var1[3]);
  t3553 = t54*t1907*t3288;
  t3566 = -1.*t833*t3509;
  t3773 = t54*t3080*t1907;
  t3800 = -1.*t833*t3204;
  t3856 = t3773 + t3800;
  t4739 = -1.*t4576;
  t4767 = 1. + t4739;
  t3927 = -1.*t3080*t833;
  t3934 = -1.*t54*t1907*t3204;
  t3942 = t3927 + t3934;
  t3388 = -1.*t833*t1907*t3288;
  t3513 = -1.*t54*t3509;
  t4789 = -0.049*t4767;
  t4798 = -0.21*t4559;
  t4809 = 0. + t4789 + t4798;
  t4310 = t3080*t833*t1907;
  t4319 = t54*t3204;
  t4363 = t4310 + t4319;
  t4857 = -0.21*t4767;
  t4865 = 0.049*t4559;
  t4896 = 0. + t4857 + t4865;
  t4398 = t54*t3080;
  t4448 = -1.*t833*t1907*t3204;
  t4462 = t4398 + t4448;
  t3633 = -1.*t1272*t3288;
  t3692 = t833*t1907*t3288;
  t3695 = t54*t3509;
  t3997 = t1272*t3288;
  t4087 = -1.*t54*t1907*t3288;
  t4195 = t833*t3509;
  t4575 = -1.*t1272*t3080*t4559;
  t4598 = -1.*t4576*t1272*t3204;
  t4609 = t4575 + t4598;
  t4653 = t4576*t1272*t3080;
  t4660 = -1.*t1272*t4559*t3204;
  t4681 = t4653 + t4660;
  t5278 = Cos(var1[4]);
  t5271 = Sin(var1[4]);
  t4822 = t4809*t3856;
  t4900 = t4896*t3942;
  t5001 = -1.*t4559*t3856;
  t5007 = t4576*t3942;
  t5018 = t5001 + t5007;
  t5298 = -1.*t5278;
  t5303 = 1. + t5298;
  t5041 = t4576*t3856;
  t5072 = t4559*t3942;
  t5075 = t5041 + t5072;
  t4944 = -1.*t4809*t4363;
  t4948 = -1.*t4896*t4462;
  t5306 = -0.2707*t5303;
  t5309 = 0.0016*t5271;
  t5310 = 0. + t5306 + t5309;
  t5181 = -1.*t4559*t4363;
  t5182 = t4576*t4462;
  t5198 = t5181 + t5182;
  t5320 = -0.0016*t5303;
  t5325 = -0.2707*t5271;
  t5333 = 0. + t5320 + t5325;
  t5210 = t4576*t4363;
  t5213 = t4559*t4462;
  t5228 = t5210 + t5213;
  t4960 = -1.*t1272*t3080*t4809;
  t4966 = t1272*t4896*t3204;
  t5090 = t4809*t4363;
  t5096 = t4896*t4462;
  t5120 = t1272*t3080*t4809;
  t5130 = -1.*t1272*t4896*t3204;
  t5147 = -1.*t4809*t3856;
  t5149 = -1.*t4896*t3942;
  t5274 = t5271*t4609;
  t5281 = t5278*t4681;
  t5282 = t5274 + t5281;
  t5287 = t5278*t4609;
  t5288 = -1.*t5271*t4681;
  t5289 = t5287 + t5288;
  t5486 = Cos(var1[5]);
  t5479 = Sin(var1[5]);
  t5318 = t5310*t5018;
  t5337 = t5333*t5075;
  t5381 = t5271*t5018;
  t5382 = t5278*t5075;
  t5384 = t5381 + t5382;
  t5532 = -1.*t5486;
  t5537 = 1. + t5532;
  t5388 = t5278*t5018;
  t5390 = -1.*t5271*t5075;
  t5391 = t5388 + t5390;
  t5349 = -1.*t5310*t5198;
  t5352 = -1.*t5333*t5228;
  t5539 = 0.0184*t5537;
  t5540 = -0.7055*t5479;
  t5541 = 0. + t5539 + t5540;
  t5445 = t5271*t5198;
  t5446 = t5278*t5228;
  t5452 = t5445 + t5446;
  t5553 = -0.7055*t5537;
  t5554 = -0.0184*t5479;
  t5560 = 0. + t5553 + t5554;
  t5458 = t5278*t5198;
  t5461 = -1.*t5271*t5228;
  t5463 = t5458 + t5461;
  t5367 = -1.*t5310*t4609;
  t5369 = -1.*t5333*t4681;
  t5395 = t5310*t5198;
  t5397 = t5333*t5228;
  t5415 = t5310*t4609;
  t5419 = t5333*t4681;
  t5422 = -1.*t5310*t5018;
  t5423 = -1.*t5333*t5075;
  p_output1[0]=0.;
  p_output1[1]=0.07996;
  p_output1[2]=-0.135;
  p_output1[3]=0.135 + t54*(0. + t617) - 0.07996*t875 - 1.*t833*(0. + t957);
  p_output1[4]=0. + t1020 + 0.03155*(0. + t54);
  p_output1[5]=0. + 0.049*t833 - 0.03155*t875;
  p_output1[6]=0. - 0.09*t1272 + t1479 - 1.*t1272*(0. + t2050 + t617)*t833 - 1.*t1272*t54*(0. + t2181 + t957);
  p_output1[7]=0. + t2397 + t1907*(0. + t2616 + t2682) + t2877 - 0.09*t1907*t54 - 0.049*t833 - 1.*t1272*(0. + t2400 + t2445)*t833;
  p_output1[8]=0. + t1020 + t2896 + t1907*(0. + t3014 + t3024) - 1.*t1272*(0. + t2948 + t2949)*t54 - 0.09*t1907*t833;
  p_output1[9]=0. + t1479 - 0.21*t1272*t3080 - 0.049*t1272*t3204 - 1.*t1272*(0. + t2050 + t3553 + t3566 + t617)*t833 - 1.*t1272*t54*(0. + t2181 + t3388 + t3513 + t957);
  p_output1[10]=0. + t2397 + t2877 + t1907*(0. + t2616 + t2682 + t3692 + t3695) - 0.21*t3856 + 0.049*t3942 - 1.*t1272*(0. + t2400 + t2445 + t3633)*t833;
  p_output1[11]=0. + t2896 + t1907*(0. + t3014 + t3024 + t4087 + t4195) - 0.21*t4363 + 0.049*t4462 - 1.*t1272*(0. + t2948 + t2949 + t3997)*t54;
  p_output1[12]=0. + t1479 + 0.0016*t4609 - 0.2707*t4681 - 1.*t1272*(0. + t2050 + t3553 + t3566 + t4822 + t4900 + t617)*t833 - 1.*t1272*t54*(0. + t2181 + t3388 + t3513 + t4944 + t4948 + t957);
  p_output1[13]=0. + t2397 + t2877 + 0.0016*t5018 - 0.2707*t5075 + t1907*(0. + t2616 + t2682 + t3692 + t3695 + t5090 + t5096) - 1.*t1272*(0. + t2400 + t2445 + t3633 + t4960 + t4966)*t833;
  p_output1[14]=0. + t2896 + t1907*(0. + t3014 + t3024 + t4087 + t4195 + t5147 + t5149) + 0.0016*t5198 - 0.2707*t5228 - 1.*t1272*(0. + t2948 + t2949 + t3997 + t5120 + t5130)*t54;
  p_output1[15]=0. + t1479 - 0.7055*t5282 - 0.0184*t5289 - 1.*t1272*(0. + t2050 + t3553 + t3566 + t4822 + t4900 + t5318 + t5337 + t617)*t833 - 1.*t1272*t54*(0. + t2181 + t3388 + t3513 + t4944 + t4948 + t5349 + t5352 + t957);
  p_output1[16]=0. + t2397 + t2877 - 0.7055*t5384 - 0.0184*t5391 + t1907*(0. + t2616 + t2682 + t3692 + t3695 + t5090 + t5096 + t5395 + t5397) - 1.*t1272*(0. + t2400 + t2445 + t3633 + t4960 + t4966 + t5367 + t5369)*t833;
  p_output1[17]=0. + t2896 - 1.*t1272*t54*(0. + t2948 + t2949 + t3997 + t5120 + t5130 + t5415 + t5419) + t1907*(0. + t3014 + t3024 + t4087 + t4195 + t5147 + t5149 + t5422 + t5423) - 0.7055*t5452 - 0.0184*t5463;
  p_output1[18]=0. + t1479 - 1.1135*(t5289*t5479 + t5282*t5486) + 0.0216*(-1.*t5282*t5479 + t5289*t5486) - 1.*t1272*(0. + t2050 + t3553 + t3566 + t4822 + t4900 + t5318 + t5337 + t5384*t5541 + t5391*t5560 + t617)*t833 - 1.*t1272*t54*(0. + t2181 + t3388 + t3513 + t4944 + t4948 + t5349 + t5352 - 1.*t5452*t5541 - 1.*t5463*t5560 + t957);
  p_output1[19]=0. + t2397 + t2877 - 1.1135*(t5391*t5479 + t5384*t5486) + 0.0216*(-1.*t5384*t5479 + t5391*t5486) + t1907*(0. + t2616 + t2682 + t3692 + t3695 + t5090 + t5096 + t5395 + t5397 + t5452*t5541 + t5463*t5560) - 1.*t1272*(0. + t2400 + t2445 + t3633 + t4960 + t4966 + t5367 + t5369 - 1.*t5282*t5541 - 1.*t5289*t5560)*t833;
  p_output1[20]=0. + t2896 - 1.1135*(t5463*t5479 + t5452*t5486) + 0.0216*(-1.*t5452*t5479 + t5463*t5486) - 1.*t1272*t54*(0. + t2948 + t2949 + t3997 + t5120 + t5130 + t5415 + t5419 + t5282*t5541 + t5289*t5560) + t1907*(0. + t3014 + t3024 + t4087 + t4195 + t5147 + t5149 + t5422 + t5423 - 1.*t5384*t5541 - 1.*t5391*t5560);
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



void Jvs_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
