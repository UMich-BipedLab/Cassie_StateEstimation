/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_rotation_right_src.h"

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
  double t746;
  double t6307;
  double t6386;
  double t6331;
  double t6408;
  double t2103;
  double t2104;
  double t2110;
  double t3008;
  double t5528;
  double t6379;
  double t6415;
  double t6434;
  double t6463;
  double t6515;
  double t6518;
  double t6520;
  double t891;
  double t6545;
  double t6553;
  double t6557;
  double t2121;
  double t3813;
  double t5060;
  double t6099;
  double t6286;
  double t6464;
  double t6478;
  double t6493;
  double t6508;
  double t6530;
  double t6535;
  double t6538;
  double t6709;
  double t6715;
  double t6722;
  double t6794;
  double t6817;
  double t6819;
  double t6827;
  double t6832;
  double t6833;
  double t6916;
  double t6925;
  double t6940;
  t746 = Cos(var1[3]);
  t6307 = Cos(var1[5]);
  t6386 = Sin(var1[3]);
  t6331 = Sin(var1[4]);
  t6408 = Sin(var1[5]);
  t2103 = Cos(var1[14]);
  t2104 = -1.*t2103;
  t2110 = 1. + t2104;
  t3008 = Sin(var1[14]);
  t5528 = Sin(var1[13]);
  t6379 = t746*t6307*t6331;
  t6415 = t6386*t6408;
  t6434 = t6379 + t6415;
  t6463 = Cos(var1[13]);
  t6515 = -1.*t6307*t6386;
  t6518 = t746*t6331*t6408;
  t6520 = t6515 + t6518;
  t891 = Cos(var1[4]);
  t6545 = t5528*t6434;
  t6553 = t6463*t6520;
  t6557 = t6545 + t6553;
  t2121 = -0.049*t2110;
  t3813 = -0.135*t3008;
  t5060 = 0. + t2121 + t3813;
  t6099 = 0.135*t5528;
  t6286 = 0. + t6099;
  t6464 = -1.*t6463;
  t6478 = 1. + t6464;
  t6493 = -0.135*t6478;
  t6508 = 0. + t6493;
  t6530 = -0.135*t2110;
  t6535 = 0.049*t3008;
  t6538 = 0. + t6530 + t6535;
  t6709 = t6307*t6386*t6331;
  t6715 = -1.*t746*t6408;
  t6722 = t6709 + t6715;
  t6794 = t746*t6307;
  t6817 = t6386*t6331*t6408;
  t6819 = t6794 + t6817;
  t6827 = t5528*t6722;
  t6832 = t6463*t6819;
  t6833 = t6827 + t6832;
  t6916 = t891*t6307*t5528;
  t6925 = t6463*t891*t6408;
  t6940 = t6916 + t6925;
  p_output1[0]=0. + t6286*t6434 + t6508*t6520 - 0.09*(t6434*t6463 - 1.*t5528*t6520) + t6538*t6557 + t5060*t746*t891 - 0.049*(t3008*t6557 + t2103*t746*t891) - 0.135*(t2103*t6557 - 1.*t3008*t746*t891) + var1[0];
  p_output1[1]=0. + t6286*t6722 + t6508*t6819 - 0.09*(t6463*t6722 - 1.*t5528*t6819) + t6538*t6833 + t5060*t6386*t891 - 0.049*(t3008*t6833 + t2103*t6386*t891) - 0.135*(t2103*t6833 - 1.*t3008*t6386*t891) + var1[1];
  p_output1[2]=0. - 1.*t5060*t6331 + t6538*t6940 - 0.135*(t3008*t6331 + t2103*t6940) - 0.049*(-1.*t2103*t6331 + t3008*t6940) + t6286*t6307*t891 + t6408*t6508*t891 - 0.09*(-1.*t5528*t6408*t891 + t6307*t6463*t891) + var1[2];
}



void p_hip_rotation_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
