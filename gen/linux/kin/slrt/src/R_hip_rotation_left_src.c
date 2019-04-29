/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:30 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_rotation_left_src.h"

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
  double t280;
  double t1176;
  double t259;
  double t477;
  double t1601;
  double t175;
  double t2629;
  double t3685;
  double t2430;
  double t2497;
  double t2603;
  double t769;
  double t1834;
  double t1995;
  double t4051;
  double t3480;
  double t3491;
  double t3517;
  double t3255;
  double t3267;
  double t3268;
  double t4193;
  double t4106;
  double t4143;
  double t4156;
  double t4236;
  double t4267;
  double t4285;
  double t4348;
  double t4352;
  double t4358;
  t280 = Cos(var1[5]);
  t1176 = Sin(var1[3]);
  t259 = Cos(var1[3]);
  t477 = Sin(var1[4]);
  t1601 = Sin(var1[5]);
  t175 = Cos(var1[6]);
  t2629 = Sin(var1[6]);
  t3685 = Cos(var1[4]);
  t2430 = -1.*t280*t1176;
  t2497 = t259*t477*t1601;
  t2603 = t2430 + t2497;
  t769 = t259*t280*t477;
  t1834 = t1176*t1601;
  t1995 = t769 + t1834;
  t4051 = Cos(var1[7]);
  t3480 = t259*t280;
  t3491 = t1176*t477*t1601;
  t3517 = t3480 + t3491;
  t3255 = t280*t1176*t477;
  t3267 = -1.*t259*t1601;
  t3268 = t3255 + t3267;
  t4193 = Sin(var1[7]);
  t4106 = t175*t2603;
  t4143 = t1995*t2629;
  t4156 = t4106 + t4143;
  t4236 = t175*t3517;
  t4267 = t3268*t2629;
  t4285 = t4236 + t4267;
  t4348 = t3685*t175*t1601;
  t4352 = t3685*t280*t2629;
  t4358 = t4348 + t4352;
  p_output1[0]=-1.*t175*t1995 + t2603*t2629;
  p_output1[1]=-1.*t175*t3268 + t2629*t3517;
  p_output1[2]=t1601*t2629*t3685 - 1.*t175*t280*t3685;
  p_output1[3]=t259*t3685*t4051 + t4156*t4193;
  p_output1[4]=t1176*t3685*t4051 + t4193*t4285;
  p_output1[5]=t4193*t4358 - 1.*t4051*t477;
  p_output1[6]=-1.*t4051*t4156 + t259*t3685*t4193;
  p_output1[7]=t1176*t3685*t4193 - 1.*t4051*t4285;
  p_output1[8]=-1.*t4051*t4358 - 1.*t4193*t477;
}



void R_hip_rotation_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
