/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:29 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_rotation_left_src.h"

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
  double t1041;
  double t1002;
  double t1042;
  double t1020;
  double t1059;
  double t227;
  double t1206;
  double t1256;
  double t1297;
  double t1022;
  double t1131;
  double t1153;
  double t1301;
  double t1828;
  double t1879;
  double t1910;
  double t2079;
  double t1780;
  double t1811;
  double t1822;
  double t2294;
  double t356;
  double t856;
  double t922;
  double t966;
  double t1312;
  double t1371;
  double t3052;
  double t3078;
  double t3083;
  double t2943;
  double t2984;
  double t3018;
  double t1944;
  double t2189;
  double t2205;
  double t2307;
  double t2351;
  double t2447;
  double t3208;
  double t3231;
  double t3252;
  double t4056;
  double t4069;
  double t4074;
  t1041 = Cos(var1[3]);
  t1002 = Cos(var1[5]);
  t1042 = Sin(var1[4]);
  t1020 = Sin(var1[3]);
  t1059 = Sin(var1[5]);
  t227 = Cos(var1[6]);
  t1206 = t1041*t1002*t1042;
  t1256 = t1020*t1059;
  t1297 = t1206 + t1256;
  t1022 = -1.*t1002*t1020;
  t1131 = t1041*t1042*t1059;
  t1153 = t1022 + t1131;
  t1301 = Sin(var1[6]);
  t1828 = Cos(var1[7]);
  t1879 = -1.*t1828;
  t1910 = 1. + t1879;
  t2079 = Sin(var1[7]);
  t1780 = t227*t1153;
  t1811 = t1297*t1301;
  t1822 = t1780 + t1811;
  t2294 = Cos(var1[4]);
  t356 = -1.*t227;
  t856 = 1. + t356;
  t922 = 0.135*t856;
  t966 = 0. + t922;
  t1312 = -0.135*t1301;
  t1371 = 0. + t1312;
  t3052 = t1002*t1020*t1042;
  t3078 = -1.*t1041*t1059;
  t3083 = t3052 + t3078;
  t2943 = t1041*t1002;
  t2984 = t1020*t1042*t1059;
  t3018 = t2943 + t2984;
  t1944 = 0.135*t1910;
  t2189 = 0.049*t2079;
  t2205 = 0. + t1944 + t2189;
  t2307 = -0.049*t1910;
  t2351 = 0.135*t2079;
  t2447 = 0. + t2307 + t2351;
  t3208 = t227*t3018;
  t3231 = t3083*t1301;
  t3252 = t3208 + t3231;
  t4056 = t2294*t227*t1059;
  t4069 = t2294*t1002*t1301;
  t4074 = t4056 + t4069;
  p_output1[0]=0. + t1297*t1371 + t1822*t2205 - 0.09*(-1.*t1153*t1301 + t1297*t227) - 0.049*(t1822*t2079 + t1041*t1828*t2294) + 0.135*(t1822*t1828 - 1.*t1041*t2079*t2294) + t1041*t2294*t2447 + t1153*t966 + var1[0];
  p_output1[1]=0. + t1020*t2294*t2447 + t1371*t3083 - 0.09*(-1.*t1301*t3018 + t227*t3083) + t2205*t3252 + 0.135*(-1.*t1020*t2079*t2294 + t1828*t3252) - 0.049*(t1020*t1828*t2294 + t2079*t3252) + t3018*t966 + var1[1];
  p_output1[2]=0. + t1002*t1371*t2294 - 0.09*(-1.*t1059*t1301*t2294 + t1002*t227*t2294) - 1.*t1042*t2447 + t2205*t4074 + 0.135*(t1042*t2079 + t1828*t4074) - 0.049*(-1.*t1042*t1828 + t2079*t4074) + t1059*t2294*t966 + var1[2];
}



void p_hip_rotation_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
