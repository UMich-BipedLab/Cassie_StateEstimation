/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:39 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_abduction_right_src.h"

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
  double t400;
  double t1494;
  double t2596;
  double t2152;
  double t4016;
  double t851;
  double t2447;
  double t4181;
  double t4420;
  double t4499;
  double t4887;
  double t5013;
  double t5019;
  double t453;
  double t1053;
  double t1396;
  double t4503;
  double t4629;
  double t4816;
  double t4883;
  double t5468;
  double t5474;
  double t5485;
  double t5501;
  double t5515;
  double t5520;
  t400 = Cos(var1[3]);
  t1494 = Cos(var1[5]);
  t2596 = Sin(var1[3]);
  t2152 = Sin(var1[4]);
  t4016 = Sin(var1[5]);
  t851 = Sin(var1[13]);
  t2447 = t400*t1494*t2152;
  t4181 = t2596*t4016;
  t4420 = t2447 + t4181;
  t4499 = Cos(var1[13]);
  t4887 = -1.*t1494*t2596;
  t5013 = t400*t2152*t4016;
  t5019 = t4887 + t5013;
  t453 = Cos(var1[4]);
  t1053 = 0.135*t851;
  t1396 = 0. + t1053;
  t4503 = -1.*t4499;
  t4629 = 1. + t4503;
  t4816 = -0.135*t4629;
  t4883 = 0. + t4816;
  t5468 = t1494*t2596*t2152;
  t5474 = -1.*t400*t4016;
  t5485 = t5468 + t5474;
  t5501 = t400*t1494;
  t5515 = t2596*t2152*t4016;
  t5520 = t5501 + t5515;
  p_output1[0]=0. + t1396*t4420 - 0.049*t400*t453 + t4883*t5019 - 0.135*(t4499*t5019 + t4420*t851) + var1[0];
  p_output1[1]=0. - 0.049*t2596*t453 + t1396*t5485 + t4883*t5520 - 0.135*(t4499*t5520 + t5485*t851) + var1[1];
  p_output1[2]=0. + 0.049*t2152 + t1396*t1494*t453 + t4016*t453*t4883 - 0.135*(t4016*t4499*t453 + t1494*t453*t851) + var1[2];
}



void p_hip_abduction_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
