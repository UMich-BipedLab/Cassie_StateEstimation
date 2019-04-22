/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:29 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_abduction_left_src.h"

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
  double t1810;
  double t2494;
  double t720;
  double t3573;
  double t5323;
  double t5643;
  double t5282;
  double t5800;
  double t5777;
  double t5784;
  double t5799;
  double t5565;
  double t5660;
  double t5685;
  double t5883;
  double t5886;
  double t5890;
  double t5821;
  double t5824;
  double t5851;
  t1810 = Cos(var1[4]);
  t2494 = Sin(var1[3]);
  t720 = Cos(var1[3]);
  t3573 = Sin(var1[4]);
  t5323 = Cos(var1[5]);
  t5643 = Sin(var1[5]);
  t5282 = Cos(var1[6]);
  t5800 = Sin(var1[6]);
  t5777 = t720*t5323*t3573;
  t5784 = t2494*t5643;
  t5799 = t5777 + t5784;
  t5565 = -1.*t5323*t2494;
  t5660 = t720*t3573*t5643;
  t5685 = t5565 + t5660;
  t5883 = t5323*t2494*t3573;
  t5886 = -1.*t720*t5643;
  t5890 = t5883 + t5886;
  t5821 = t720*t5323;
  t5824 = t2494*t3573*t5643;
  t5851 = t5821 + t5824;
  p_output1[0]=t1810*t720;
  p_output1[1]=t1810*t2494;
  p_output1[2]=-1.*t3573;
  p_output1[3]=t5282*t5685 + t5799*t5800;
  p_output1[4]=t5282*t5851 + t5800*t5890;
  p_output1[5]=t1810*t5282*t5643 + t1810*t5323*t5800;
  p_output1[6]=t5282*t5799 - 1.*t5685*t5800;
  p_output1[7]=-1.*t5800*t5851 + t5282*t5890;
  p_output1[8]=t1810*t5282*t5323 - 1.*t1810*t5643*t5800;
}



void R_hip_abduction_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
