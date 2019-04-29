/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:11:26 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jwb_VectorNav_to_RightToeBottom_src.h"

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
  double t918;
  double t986;
  double t1307;
  double t936;
  double t1129;
  double t1137;
  double t880;
  double t1450;
  double t1680;
  double t1695;
  double t1909;
  double t1201;
  double t1697;
  double t1725;
  double t684;
  double t1983;
  double t2077;
  double t2169;
  double t2584;
  double t1772;
  double t2397;
  double t2444;
  double t314;
  double t2638;
  double t2811;
  double t2850;
  double t283;
  double t3153;
  double t3393;
  double t3419;
  double t3446;
  double t3363;
  double t3451;
  double t3510;
  double t3562;
  double t3563;
  double t313;
  double t3557;
  double t3593;
  double t3614;
  double t3888;
  double t3903;
  double t4043;
  double t2549;
  double t2991;
  double t3141;
  double t3256;
  double t3279;
  double t3296;
  double t3779;
  double t4206;
  double t4252;
  double t4378;
  double t4423;
  double t4509;
  t918 = Cos(var1[13]);
  t986 = Sin(var1[13]);
  t1307 = Cos(var1[12]);
  t936 = 0.642788*t918;
  t1129 = -0.766044*t986;
  t1137 = t936 + t1129;
  t880 = Sin(var1[12]);
  t1450 = 0.766044*t918;
  t1680 = 0.642788*t986;
  t1695 = t1450 + t1680;
  t1909 = Cos(var1[11]);
  t1201 = t880*t1137;
  t1697 = t1307*t1695;
  t1725 = 0. + t1201 + t1697;
  t684 = Sin(var1[11]);
  t1983 = t1307*t1137;
  t2077 = -1.*t880*t1695;
  t2169 = 0. + t1983 + t2077;
  t2584 = Cos(var1[10]);
  t1772 = -1.*t684*t1725;
  t2397 = t1909*t2169;
  t2444 = 0. + t1772 + t2397;
  t314 = Sin(var1[10]);
  t2638 = t1909*t1725;
  t2811 = t684*t2169;
  t2850 = 0. + t2638 + t2811;
  t283 = Cos(var1[8]);
  t3153 = Cos(var1[9]);
  t3393 = -0.766044*t918;
  t3419 = -0.642788*t986;
  t3446 = t3393 + t3419;
  t3363 = -1.*t880*t1137;
  t3451 = t1307*t3446;
  t3510 = 0. + t3363 + t3451;
  t3562 = t880*t3446;
  t3563 = 0. + t1983 + t3562;
  t313 = Sin(var1[9]);
  t3557 = t684*t3510;
  t3593 = t1909*t3563;
  t3614 = 0. + t3557 + t3593;
  t3888 = t1909*t3510;
  t3903 = -1.*t684*t3563;
  t4043 = 0. + t3888 + t3903;
  t2549 = t314*t2444;
  t2991 = t2584*t2850;
  t3141 = 0. + t2549 + t2991;
  t3256 = t2584*t2444;
  t3279 = -1.*t314*t2850;
  t3296 = 0. + t3256 + t3279;
  t3779 = -1.*t314*t3614;
  t4206 = t2584*t4043;
  t4252 = 0. + t3779 + t4206;
  t4378 = t2584*t3614;
  t4423 = t314*t4043;
  t4509 = 0. + t4378 + t4423;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0. + Sin(var1[8]);
  p_output1[22]=0. + t283*(0. - 1.*t313*t3141 + t3153*t3296);
  p_output1[23]=0. + t283*(0. + t3153*t4252 - 1.*t313*t4509);
  p_output1[24]=0.;
  p_output1[25]=0. + t3141*t3153 + t313*t3296;
  p_output1[26]=0. + t313*t4252 + t3153*t4509;
  p_output1[27]=1.;
  p_output1[28]=0.;
  p_output1[29]=0.;
  p_output1[30]=1.;
  p_output1[31]=0.;
  p_output1[32]=0.;
  p_output1[33]=1.;
  p_output1[34]=0.;
  p_output1[35]=0.;
  p_output1[36]=1.;
  p_output1[37]=0.;
  p_output1[38]=0.;
  p_output1[39]=1.;
  p_output1[40]=0.;
  p_output1[41]=0.;
}



void Jwb_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
