/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:11:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jws_VectorNav_to_RightToeBottom_src.h"

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
  double t592;
  double t1059;
  double t367;
  double t1050;
  double t1058;
  double t1082;
  double t1131;
  double t1136;
  double t1166;
  t592 = Cos(var1[7]);
  t1059 = Cos(var1[8]);
  t367 = Sin(var1[7]);
  t1050 = Sin(var1[8]);
  t1058 = 0. + t1050;
  t1082 = -1.*t592*t1059;
  t1131 = 0. + t1082;
  t1136 = -1.*t1059*t367;
  t1166 = 0. + t1136;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=1.;
  p_output1[22]=0.;
  p_output1[23]=0.;
  p_output1[24]=0.;
  p_output1[25]=0. - 1.*t367;
  p_output1[26]=0. + t592;
  p_output1[27]=t1058;
  p_output1[28]=t1131;
  p_output1[29]=t1166;
  p_output1[30]=t1058;
  p_output1[31]=t1131;
  p_output1[32]=t1166;
  p_output1[33]=t1058;
  p_output1[34]=t1131;
  p_output1[35]=t1166;
  p_output1[36]=t1058;
  p_output1[37]=t1131;
  p_output1[38]=t1166;
  p_output1[39]=t1058;
  p_output1[40]=t1131;
  p_output1[41]=t1166;
}



void Jws_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
