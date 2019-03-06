/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_abduction_left_src.h"

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
  double t2385;
  double t4646;
  double t5025;
  double t4974;
  double t5072;
  double t2805;
  double t4991;
  double t5122;
  double t5127;
  double t5189;
  double t5195;
  double t5216;
  double t5218;
  double t2569;
  double t3595;
  double t3709;
  double t3877;
  double t4574;
  double t5256;
  double t5260;
  double t5314;
  double t5317;
  double t5335;
  double t5339;
  double t5344;
  double t5361;
  t2385 = Cos(var1[3]);
  t4646 = Cos(var1[5]);
  t5025 = Sin(var1[4]);
  t4974 = Sin(var1[3]);
  t5072 = Sin(var1[5]);
  t2805 = Cos(var1[6]);
  t4991 = -1.*t4646*t4974;
  t5122 = t2385*t5025*t5072;
  t5127 = t4991 + t5122;
  t5189 = t2385*t4646*t5025;
  t5195 = t4974*t5072;
  t5216 = t5189 + t5195;
  t5218 = Sin(var1[6]);
  t2569 = Cos(var1[4]);
  t3595 = -1.*t2805;
  t3709 = 1. + t3595;
  t3877 = 0.135*t3709;
  t4574 = 0. + t3877;
  t5256 = -0.135*t5218;
  t5260 = 0. + t5256;
  t5314 = t2385*t4646;
  t5317 = t4974*t5025*t5072;
  t5335 = t5314 + t5317;
  t5339 = t4646*t4974*t5025;
  t5344 = -1.*t2385*t5072;
  t5361 = t5339 + t5344;
  p_output1[0]=0. - 0.049*t2385*t2569 + t4574*t5127 + 0.135*(t2805*t5127 + t5216*t5218) + t5216*t5260 + var1[0];
  p_output1[1]=0. - 0.049*t2569*t4974 + t4574*t5335 + t5260*t5361 + 0.135*(t2805*t5335 + t5218*t5361) + var1[1];
  p_output1[2]=0. + 0.049*t5025 + t2569*t4574*t5072 + 0.135*(t2569*t2805*t5072 + t2569*t4646*t5218) + t2569*t4646*t5260 + var1[2];
}



void p_hip_abduction_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
