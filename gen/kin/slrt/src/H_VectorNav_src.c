/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:01 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_src.h"

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
  double t1089;
  double t2087;
  double t1065;
  double t2285;
  double t2388;
  double t2499;
  double t2732;
  double t2737;
  double t2778;
  double t2792;
  double t2806;
  double t2851;
  t1089 = Cos(var1[4]);
  t2087 = Sin(var1[3]);
  t1065 = Cos(var1[3]);
  t2285 = Sin(var1[4]);
  t2388 = Cos(var1[5]);
  t2499 = Sin(var1[5]);
  t2732 = t1065*t2388*t2285;
  t2737 = t2087*t2499;
  t2778 = t2732 + t2737;
  t2792 = t2388*t2087*t2285;
  t2806 = -1.*t1065*t2499;
  t2851 = t2792 + t2806;
  p_output1[0]=t1065*t1089;
  p_output1[1]=t1089*t2087;
  p_output1[2]=-1.*t2285;
  p_output1[3]=0;
  p_output1[4]=-1.*t2087*t2388 + t1065*t2285*t2499;
  p_output1[5]=t1065*t2388 + t2087*t2285*t2499;
  p_output1[6]=t1089*t2499;
  p_output1[7]=0;
  p_output1[8]=t2778;
  p_output1[9]=t2851;
  p_output1[10]=t1089*t2388;
  p_output1[11]=0;
  p_output1[12]=0.03155*t1065*t1089 - 0.07996*t2778 + var1[0];
  p_output1[13]=0.03155*t1089*t2087 - 0.07996*t2851 + var1[1];
  p_output1[14]=-0.03155*t2285 - 0.07996*t1089*t2388 + var1[2];
  p_output1[15]=1.;
}



void H_VectorNav_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
