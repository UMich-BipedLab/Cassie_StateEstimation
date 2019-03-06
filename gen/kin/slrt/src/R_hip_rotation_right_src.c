/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:41 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_rotation_right_src.h"

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
  double t928;
  double t3018;
  double t871;
  double t2145;
  double t3139;
  double t668;
  double t3442;
  double t3740;
  double t2370;
  double t3163;
  double t3357;
  double t3502;
  double t3509;
  double t3522;
  double t3825;
  double t3867;
  double t3591;
  double t3602;
  double t3637;
  double t3673;
  double t3702;
  double t3707;
  double t3880;
  double t3886;
  double t3892;
  double t3913;
  double t3970;
  double t3974;
  double t3993;
  double t3997;
  double t4006;
  t928 = Cos(var1[5]);
  t3018 = Sin(var1[3]);
  t871 = Cos(var1[3]);
  t2145 = Sin(var1[4]);
  t3139 = Sin(var1[5]);
  t668 = Cos(var1[13]);
  t3442 = Sin(var1[13]);
  t3740 = Cos(var1[4]);
  t2370 = t871*t928*t2145;
  t3163 = t3018*t3139;
  t3357 = t2370 + t3163;
  t3502 = -1.*t928*t3018;
  t3509 = t871*t2145*t3139;
  t3522 = t3502 + t3509;
  t3825 = Cos(var1[14]);
  t3867 = Sin(var1[14]);
  t3591 = t928*t3018*t2145;
  t3602 = -1.*t871*t3139;
  t3637 = t3591 + t3602;
  t3673 = t871*t928;
  t3702 = t3018*t2145*t3139;
  t3707 = t3673 + t3702;
  t3880 = t3442*t3357;
  t3886 = t668*t3522;
  t3892 = t3880 + t3886;
  t3913 = t3442*t3637;
  t3970 = t668*t3707;
  t3974 = t3913 + t3970;
  t3993 = t3740*t928*t3442;
  t3997 = t668*t3740*t3139;
  t4006 = t3993 + t3997;
  p_output1[0]=t3442*t3522 - 1.*t3357*t668;
  p_output1[1]=t3442*t3707 - 1.*t3637*t668;
  p_output1[2]=t3139*t3442*t3740 - 1.*t3740*t668*t928;
  p_output1[3]=t3867*t3892 + t3740*t3825*t871;
  p_output1[4]=t3018*t3740*t3825 + t3867*t3974;
  p_output1[5]=-1.*t2145*t3825 + t3867*t4006;
  p_output1[6]=-1.*t3825*t3892 + t3740*t3867*t871;
  p_output1[7]=t3018*t3740*t3867 - 1.*t3825*t3974;
  p_output1[8]=-1.*t2145*t3867 - 1.*t3825*t4006;
}



void R_hip_rotation_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
