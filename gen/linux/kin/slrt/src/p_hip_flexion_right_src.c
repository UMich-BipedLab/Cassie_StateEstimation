/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:42 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_flexion_right_src.h"

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
  double t121;
  double t4305;
  double t4555;
  double t4398;
  double t4662;
  double t2855;
  double t3145;
  double t3682;
  double t3792;
  double t4162;
  double t4549;
  double t4691;
  double t4696;
  double t4911;
  double t5120;
  double t5138;
  double t5431;
  double t124;
  double t5628;
  double t5655;
  double t5669;
  double t5697;
  double t5700;
  double t5706;
  double t5722;
  double t5742;
  double t5792;
  double t5857;
  double t6028;
  double t6044;
  double t6053;
  double t3697;
  double t3910;
  double t3940;
  double t4276;
  double t4294;
  double t4914;
  double t5022;
  double t5026;
  double t5040;
  double t5444;
  double t5452;
  double t5608;
  double t6266;
  double t6276;
  double t6294;
  double t6313;
  double t6324;
  double t6326;
  double t5721;
  double t5733;
  double t5740;
  double t6342;
  double t6379;
  double t6430;
  double t6009;
  double t6010;
  double t6018;
  double t6448;
  double t6455;
  double t6459;
  double t6548;
  double t6551;
  double t6556;
  double t6702;
  double t6703;
  double t6705;
  double t6749;
  double t6754;
  double t6761;
  double t6804;
  double t6825;
  double t6827;
  t121 = Cos(var1[3]);
  t4305 = Cos(var1[5]);
  t4555 = Sin(var1[3]);
  t4398 = Sin(var1[4]);
  t4662 = Sin(var1[5]);
  t2855 = Cos(var1[14]);
  t3145 = -1.*t2855;
  t3682 = 1. + t3145;
  t3792 = Sin(var1[14]);
  t4162 = Sin(var1[13]);
  t4549 = t121*t4305*t4398;
  t4691 = t4555*t4662;
  t4696 = t4549 + t4691;
  t4911 = Cos(var1[13]);
  t5120 = -1.*t4305*t4555;
  t5138 = t121*t4398*t4662;
  t5431 = t5120 + t5138;
  t124 = Cos(var1[4]);
  t5628 = t4162*t4696;
  t5655 = t4911*t5431;
  t5669 = t5628 + t5655;
  t5697 = Cos(var1[15]);
  t5700 = -1.*t5697;
  t5706 = 1. + t5700;
  t5722 = Sin(var1[15]);
  t5742 = t4911*t4696;
  t5792 = -1.*t4162*t5431;
  t5857 = t5742 + t5792;
  t6028 = t2855*t121*t124;
  t6044 = t3792*t5669;
  t6053 = t6028 + t6044;
  t3697 = -0.049*t3682;
  t3910 = -0.135*t3792;
  t3940 = 0. + t3697 + t3910;
  t4276 = 0.135*t4162;
  t4294 = 0. + t4276;
  t4914 = -1.*t4911;
  t5022 = 1. + t4914;
  t5026 = -0.135*t5022;
  t5040 = 0. + t5026;
  t5444 = -0.135*t3682;
  t5452 = 0.049*t3792;
  t5608 = 0. + t5444 + t5452;
  t6266 = t4305*t4555*t4398;
  t6276 = -1.*t121*t4662;
  t6294 = t6266 + t6276;
  t6313 = t121*t4305;
  t6324 = t4555*t4398*t4662;
  t6326 = t6313 + t6324;
  t5721 = -0.09*t5706;
  t5733 = 0.049*t5722;
  t5740 = 0. + t5721 + t5733;
  t6342 = t4162*t6294;
  t6379 = t4911*t6326;
  t6430 = t6342 + t6379;
  t6009 = -0.049*t5706;
  t6010 = -0.09*t5722;
  t6018 = 0. + t6009 + t6010;
  t6448 = t4911*t6294;
  t6455 = -1.*t4162*t6326;
  t6459 = t6448 + t6455;
  t6548 = t2855*t124*t4555;
  t6551 = t3792*t6430;
  t6556 = t6548 + t6551;
  t6702 = t124*t4305*t4162;
  t6703 = t4911*t124*t4662;
  t6705 = t6702 + t6703;
  t6749 = t4911*t124*t4305;
  t6754 = -1.*t124*t4162*t4662;
  t6761 = t6749 + t6754;
  t6804 = -1.*t2855*t4398;
  t6825 = t3792*t6705;
  t6827 = t6804 + t6825;
  p_output1[0]=0. + t121*t124*t3940 + t4294*t4696 + t5040*t5431 + t5608*t5669 - 0.135*(-1.*t121*t124*t3792 + t2855*t5669) + t5740*t5857 + t6018*t6053 - 0.049*(t5722*t5857 + t5697*t6053) - 0.09*(t5697*t5857 - 1.*t5722*t6053) + var1[0];
  p_output1[1]=0. + t124*t3940*t4555 + t4294*t6294 + t5040*t6326 + t5608*t6430 - 0.135*(-1.*t124*t3792*t4555 + t2855*t6430) + t5740*t6459 + t6018*t6556 - 0.049*(t5722*t6459 + t5697*t6556) - 0.09*(t5697*t6459 - 1.*t5722*t6556) + var1[1];
  p_output1[2]=0. + t124*t4294*t4305 - 1.*t3940*t4398 + t124*t4662*t5040 + t5608*t6705 - 0.135*(t3792*t4398 + t2855*t6705) + t5740*t6761 + t6018*t6827 - 0.049*(t5722*t6761 + t5697*t6827) - 0.09*(t5697*t6761 - 1.*t5722*t6827) + var1[2];
}



void p_hip_flexion_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
