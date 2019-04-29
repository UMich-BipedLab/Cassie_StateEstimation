/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:21:04 GMT-04:00
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
  double t948;
  double t1759;
  double t538;
  double t1947;
  double t2061;
  double t2078;
  double t2378;
  double t2435;
  double t2449;
  double t2602;
  double t2646;
  double t2733;
  t948 = Cos(var1[4]);
  t1759 = Sin(var1[3]);
  t538 = Cos(var1[3]);
  t1947 = Sin(var1[4]);
  t2061 = Cos(var1[5]);
  t2078 = Sin(var1[5]);
  t2378 = t538*t2061*t1947;
  t2435 = t1759*t2078;
  t2449 = t2378 + t2435;
  t2602 = t2061*t1759*t1947;
  t2646 = -1.*t538*t2078;
  t2733 = t2602 + t2646;
  p_output1[0]=t538*t948;
  p_output1[1]=t1759*t948;
  p_output1[2]=-1.*t1947;
  p_output1[3]=0;
  p_output1[4]=-1.*t1759*t2061 + t1947*t2078*t538;
  p_output1[5]=t1759*t1947*t2078 + t2061*t538;
  p_output1[6]=t2078*t948;
  p_output1[7]=0;
  p_output1[8]=t2449;
  p_output1[9]=t2733;
  p_output1[10]=t2061*t948;
  p_output1[11]=0;
  p_output1[12]=-0.07996*t2449 + 0.03155*t538*t948 + var1[0];
  p_output1[13]=-0.07996*t2733 + 0.03155*t1759*t948 + var1[1];
  p_output1[14]=-0.03155*t1947 - 0.07996*t2061*t948 + var1[2];
  p_output1[15]=1.;
}



void H_VectorNav_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
