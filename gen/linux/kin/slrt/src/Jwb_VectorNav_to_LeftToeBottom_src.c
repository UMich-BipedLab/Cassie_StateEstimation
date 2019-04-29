/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:11:24 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jwb_VectorNav_to_LeftToeBottom_src.h"

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
  double t535;
  double t600;
  double t832;
  double t558;
  double t700;
  double t784;
  double t518;
  double t919;
  double t1034;
  double t1073;
  double t1230;
  double t803;
  double t1086;
  double t1091;
  double t489;
  double t1280;
  double t1331;
  double t1378;
  double t1556;
  double t1176;
  double t1392;
  double t1409;
  double t385;
  double t1559;
  double t1579;
  double t1585;
  double t73;
  double t327;
  double t2073;
  double t2083;
  double t2094;
  double t2056;
  double t2096;
  double t2101;
  double t2115;
  double t2123;
  double t2103;
  double t2126;
  double t2153;
  double t2172;
  double t2186;
  double t2189;
  double t1857;
  double t1676;
  double t1693;
  double t1706;
  double t1419;
  double t1628;
  double t1648;
  double t2235;
  double t2238;
  double t2243;
  double t2163;
  double t2197;
  double t2207;
  t535 = Cos(var1[6]);
  t600 = Sin(var1[6]);
  t832 = Cos(var1[5]);
  t558 = 0.642788*t535;
  t700 = -0.766044*t600;
  t784 = t558 + t700;
  t518 = Sin(var1[5]);
  t919 = 0.766044*t535;
  t1034 = 0.642788*t600;
  t1073 = t919 + t1034;
  t1230 = Cos(var1[4]);
  t803 = t518*t784;
  t1086 = t832*t1073;
  t1091 = 0. + t803 + t1086;
  t489 = Sin(var1[4]);
  t1280 = t832*t784;
  t1331 = -1.*t518*t1073;
  t1378 = 0. + t1280 + t1331;
  t1556 = Sin(var1[3]);
  t1176 = -1.*t489*t1091;
  t1392 = t1230*t1378;
  t1409 = 0. + t1176 + t1392;
  t385 = Cos(var1[3]);
  t1559 = t1230*t1091;
  t1579 = t489*t1378;
  t1585 = 0. + t1559 + t1579;
  t73 = Cos(var1[1]);
  t327 = Cos(var1[2]);
  t2073 = -0.766044*t535;
  t2083 = -0.642788*t600;
  t2094 = t2073 + t2083;
  t2056 = -1.*t518*t784;
  t2096 = t832*t2094;
  t2101 = 0. + t2056 + t2096;
  t2115 = t518*t2094;
  t2123 = 0. + t1280 + t2115;
  t2103 = t489*t2101;
  t2126 = t1230*t2123;
  t2153 = 0. + t2103 + t2126;
  t2172 = t1230*t2101;
  t2186 = -1.*t489*t2123;
  t2189 = 0. + t2172 + t2186;
  t1857 = Sin(var1[2]);
  t1676 = t1556*t1409;
  t1693 = t385*t1585;
  t1706 = 0. + t1676 + t1693;
  t1419 = t385*t1409;
  t1628 = -1.*t1556*t1585;
  t1648 = 0. + t1419 + t1628;
  t2235 = t385*t2153;
  t2238 = t1556*t2189;
  t2243 = 0. + t2235 + t2238;
  t2163 = -1.*t1556*t2153;
  t2197 = t385*t2189;
  t2207 = 0. + t2163 + t2197;
  p_output1[0]=0. + Sin(var1[1]);
  p_output1[1]=0. + (0. - 1.*t1706*t1857 + t1648*t327)*t73;
  p_output1[2]=0. + (0. - 1.*t1857*t2243 + t2207*t327)*t73;
  p_output1[3]=0.;
  p_output1[4]=0. + t1648*t1857 + t1706*t327;
  p_output1[5]=0. + t1857*t2207 + t2243*t327;
  p_output1[6]=1.;
  p_output1[7]=0.;
  p_output1[8]=0.;
  p_output1[9]=1.;
  p_output1[10]=0.;
  p_output1[11]=0.;
  p_output1[12]=1.;
  p_output1[13]=0.;
  p_output1[14]=0.;
  p_output1[15]=1.;
  p_output1[16]=0.;
  p_output1[17]=0.;
  p_output1[18]=1.;
  p_output1[19]=0.;
  p_output1[20]=0.;
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



void Jwb_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
