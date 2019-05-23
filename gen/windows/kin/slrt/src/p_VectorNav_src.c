/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:08:31 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_src.h"

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
  double t156;
  double t293;
  double t922;
  double t835;
  double t896;
  double t961;
  t156 = Cos(var1[3]);
  t293 = Cos(var1[4]);
  t922 = Sin(var1[3]);
  t835 = Cos(var1[5]);
  t896 = Sin(var1[4]);
  t961 = Sin(var1[5]);
  p_output1[0]=0.03155*t156*t293 - 0.07996*(t156*t835*t896 + t922*t961) + var1[0];
  p_output1[1]=0.03155*t293*t922 - 0.07996*(t835*t896*t922 - 1.*t156*t961) + var1[1];
  p_output1[2]=-0.07996*t293*t835 - 0.03155*t896 + var1[2];
}



void p_VectorNav_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
