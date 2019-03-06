/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:39 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_abduction_right_src.h"

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
  double t1053;
  double t4416;
  double t3476;
  double t3567;
  double t4420;
  double t1819;
  double t4100;
  double t4467;
  double t4607;
  double t4955;
  double t5468;
  double t5485;
  double t5496;
  double t639;
  double t2281;
  double t2383;
  double t4998;
  double t5247;
  double t5303;
  double t5420;
  double t5562;
  double t5568;
  double t5622;
  double t5649;
  double t5686;
  double t5690;
  double t6056;
  double t6061;
  double t6071;
  double t6215;
  double t6229;
  double t6231;
  double t6114;
  double t6285;
  double t6386;
  double t6387;
  double t6392;
  double t6331;
  double t6334;
  double t6339;
  double t6345;
  t1053 = Sin(var1[3]);
  t4416 = Cos(var1[3]);
  t3476 = Cos(var1[5]);
  t3567 = Sin(var1[4]);
  t4420 = Sin(var1[5]);
  t1819 = Sin(var1[13]);
  t4100 = -1.*t3476*t1053*t3567;
  t4467 = t4416*t4420;
  t4607 = t4100 + t4467;
  t4955 = Cos(var1[13]);
  t5468 = -1.*t4416*t3476;
  t5485 = -1.*t1053*t3567*t4420;
  t5496 = t5468 + t5485;
  t639 = Cos(var1[4]);
  t2281 = 0.135*t1819;
  t2383 = 0. + t2281;
  t4998 = -1.*t4955;
  t5247 = 1. + t4998;
  t5303 = -0.135*t5247;
  t5420 = 0. + t5303;
  t5562 = t4416*t3476*t3567;
  t5568 = t1053*t4420;
  t5622 = t5562 + t5568;
  t5649 = -1.*t3476*t1053;
  t5686 = t4416*t3567*t4420;
  t5690 = t5649 + t5686;
  t6056 = t3476*t1053;
  t6061 = -1.*t4416*t3567*t4420;
  t6071 = t6056 + t6061;
  t6215 = t3476*t1053*t3567;
  t6229 = -1.*t4416*t4420;
  t6231 = t6215 + t6229;
  t6114 = t4955*t5622;
  t6285 = t4955*t6231;
  t6386 = t4416*t3476;
  t6387 = t1053*t3567*t4420;
  t6392 = t6386 + t6387;
  t6331 = t4955*t639*t3476;
  t6334 = -1.*t639*t1819*t4420;
  t6339 = t6331 + t6334;
  t6345 = -0.135*t6339;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2383*t4607 + t5420*t5496 - 0.135*(t1819*t4607 + t4955*t5496) + 0.049*t1053*t639;
  p_output1[10]=t2383*t5622 + t5420*t5690 - 0.135*(t1819*t5622 + t4955*t5690) - 0.049*t4416*t639;
  p_output1[11]=0;
  p_output1[12]=0.049*t3567*t4416 + t2383*t3476*t4416*t639 + t4416*t4420*t5420*t639 - 0.135*(t1819*t3476*t4416*t639 + t4416*t4420*t4955*t639);
  p_output1[13]=0.049*t1053*t3567 + t1053*t2383*t3476*t639 + t1053*t4420*t5420*t639 - 0.135*(t1053*t1819*t3476*t639 + t1053*t4420*t4955*t639);
  p_output1[14]=-1.*t2383*t3476*t3567 - 0.135*(-1.*t1819*t3476*t3567 - 1.*t3567*t4420*t4955) - 1.*t3567*t4420*t5420 + 0.049*t639;
  p_output1[15]=t5420*t5622 + t2383*t6071 - 0.135*(t1819*t6071 + t6114);
  p_output1[16]=t2383*t5496 + t5420*t6231 - 0.135*(t1819*t5496 + t6285);
  p_output1[17]=t6345 - 1.*t2383*t4420*t639 + t3476*t5420*t639;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  p_output1[39]=0.135*t4955*t5622 - 0.135*t1819*t5690 - 0.135*(-1.*t1819*t5690 + t6114);
  p_output1[40]=0.135*t4955*t6231 - 0.135*t1819*t6392 - 0.135*(t6285 - 1.*t1819*t6392);
  p_output1[41]=t6345 - 0.135*t1819*t4420*t639 + 0.135*t3476*t4955*t639;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jp_hip_abduction_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
