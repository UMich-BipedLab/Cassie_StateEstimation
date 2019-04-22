/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_abduction_right_src.h"

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
  double t3663;
  double t3279;
  double t5052;
  double t4833;
  double t5882;
  double t5922;
  double t5832;
  double t6054;
  double t5898;
  double t6016;
  double t6033;
  double t6071;
  double t6078;
  double t6080;
  double t6146;
  double t6193;
  double t6198;
  double t6232;
  double t6233;
  double t6259;
  t3663 = Cos(var1[4]);
  t3279 = Cos(var1[3]);
  t5052 = Sin(var1[4]);
  t4833 = Sin(var1[3]);
  t5882 = Cos(var1[5]);
  t5922 = Sin(var1[5]);
  t5832 = Sin(var1[13]);
  t6054 = Cos(var1[13]);
  t5898 = t3279*t5882*t5052;
  t6016 = t4833*t5922;
  t6033 = t5898 + t6016;
  t6071 = -1.*t5882*t4833;
  t6078 = t3279*t5052*t5922;
  t6080 = t6071 + t6078;
  t6146 = t5882*t4833*t5052;
  t6193 = -1.*t3279*t5922;
  t6198 = t6146 + t6193;
  t6232 = t3279*t5882;
  t6233 = t4833*t5052*t5922;
  t6259 = t6232 + t6233;
  p_output1[0]=t3279*t3663;
  p_output1[1]=t3663*t4833;
  p_output1[2]=-1.*t5052;
  p_output1[3]=t5832*t6033 + t6054*t6080;
  p_output1[4]=t5832*t6198 + t6054*t6259;
  p_output1[5]=t3663*t5832*t5882 + t3663*t5922*t6054;
  p_output1[6]=t6033*t6054 - 1.*t5832*t6080;
  p_output1[7]=t6054*t6198 - 1.*t5832*t6259;
  p_output1[8]=-1.*t3663*t5832*t5922 + t3663*t5882*t6054;
}



void R_hip_abduction_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
