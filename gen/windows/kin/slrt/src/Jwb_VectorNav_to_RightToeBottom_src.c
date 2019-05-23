/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:20:08 GMT-04:00
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
  double t1107;
  double t1215;
  double t1378;
  double t1146;
  double t1267;
  double t1295;
  double t1075;
  double t1476;
  double t1492;
  double t1666;
  double t2040;
  double t1301;
  double t1880;
  double t1940;
  double t985;
  double t2144;
  double t2202;
  double t2210;
  double t2478;
  double t2015;
  double t2218;
  double t2297;
  double t828;
  double t2731;
  double t2784;
  double t2845;
  double t135;
  double t3013;
  double t3935;
  double t4310;
  double t4418;
  double t3749;
  double t4574;
  double t4668;
  double t4701;
  double t4879;
  double t827;
  double t4672;
  double t4961;
  double t5027;
  double t5090;
  double t5108;
  double t5136;
  double t2378;
  double t2911;
  double t2944;
  double t3097;
  double t3321;
  double t3523;
  double t5029;
  double t5184;
  double t5206;
  double t5294;
  double t5353;
  double t5386;
  t1107 = Cos(var1[13]);
  t1215 = Sin(var1[13]);
  t1378 = Cos(var1[12]);
  t1146 = 0.642788*t1107;
  t1267 = -0.766044*t1215;
  t1295 = t1146 + t1267;
  t1075 = Sin(var1[12]);
  t1476 = 0.766044*t1107;
  t1492 = 0.642788*t1215;
  t1666 = t1476 + t1492;
  t2040 = Cos(var1[11]);
  t1301 = t1075*t1295;
  t1880 = t1378*t1666;
  t1940 = 0. + t1301 + t1880;
  t985 = Sin(var1[11]);
  t2144 = t1378*t1295;
  t2202 = -1.*t1075*t1666;
  t2210 = 0. + t2144 + t2202;
  t2478 = Cos(var1[10]);
  t2015 = -1.*t985*t1940;
  t2218 = t2040*t2210;
  t2297 = 0. + t2015 + t2218;
  t828 = Sin(var1[10]);
  t2731 = t2040*t1940;
  t2784 = t985*t2210;
  t2845 = 0. + t2731 + t2784;
  t135 = Cos(var1[8]);
  t3013 = Cos(var1[9]);
  t3935 = -0.766044*t1107;
  t4310 = -0.642788*t1215;
  t4418 = t3935 + t4310;
  t3749 = -1.*t1075*t1295;
  t4574 = t1378*t4418;
  t4668 = 0. + t3749 + t4574;
  t4701 = t1075*t4418;
  t4879 = 0. + t2144 + t4701;
  t827 = Sin(var1[9]);
  t4672 = t985*t4668;
  t4961 = t2040*t4879;
  t5027 = 0. + t4672 + t4961;
  t5090 = t2040*t4668;
  t5108 = -1.*t985*t4879;
  t5136 = 0. + t5090 + t5108;
  t2378 = t828*t2297;
  t2911 = t2478*t2845;
  t2944 = 0. + t2378 + t2911;
  t3097 = t2478*t2297;
  t3321 = -1.*t828*t2845;
  t3523 = 0. + t3097 + t3321;
  t5029 = -1.*t828*t5027;
  t5184 = t2478*t5136;
  t5206 = 0. + t5029 + t5184;
  t5294 = t2478*t5027;
  t5353 = t828*t5136;
  t5386 = 0. + t5294 + t5353;
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
  p_output1[22]=0. + t135*(0. + t3013*t3523 - 1.*t2944*t827);
  p_output1[23]=0. + t135*(0. + t3013*t5206 - 1.*t5386*t827);
  p_output1[24]=0.;
  p_output1[25]=0. + t2944*t3013 + t3523*t827;
  p_output1[26]=0. + t3013*t5386 + t5206*t827;
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
