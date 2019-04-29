/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:32 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_flexion_left_src.h"

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
  double t726;
  double t1684;
  double t643;
  double t981;
  double t1785;
  double t505;
  double t3829;
  double t4018;
  double t4046;
  double t1009;
  double t1838;
  double t2621;
  double t4399;
  double t390;
  double t4826;
  double t4829;
  double t5505;
  double t5551;
  double t5557;
  double t5330;
  double t5400;
  double t5457;
  double t5258;
  double t5269;
  double t4877;
  double t5153;
  double t5171;
  double t5179;
  double t5263;
  double t5265;
  double t3822;
  double t4501;
  double t4571;
  double t5604;
  double t5618;
  double t5666;
  double t5683;
  double t5708;
  double t5719;
  double t5495;
  double t5583;
  double t5584;
  double t5915;
  double t5932;
  double t5933;
  double t5940;
  double t5995;
  double t6013;
  double t5828;
  double t5855;
  double t5856;
  t726 = Cos(var1[5]);
  t1684 = Sin(var1[3]);
  t643 = Cos(var1[3]);
  t981 = Sin(var1[4]);
  t1785 = Sin(var1[5]);
  t505 = Cos(var1[6]);
  t3829 = -1.*t726*t1684;
  t4018 = t643*t981*t1785;
  t4046 = t3829 + t4018;
  t1009 = t643*t726*t981;
  t1838 = t1684*t1785;
  t2621 = t1009 + t1838;
  t4399 = Sin(var1[6]);
  t390 = Cos(var1[8]);
  t4826 = Cos(var1[4]);
  t4829 = Cos(var1[7]);
  t5505 = t643*t726;
  t5551 = t1684*t981*t1785;
  t5557 = t5505 + t5551;
  t5330 = t726*t1684*t981;
  t5400 = -1.*t643*t1785;
  t5457 = t5330 + t5400;
  t5258 = Sin(var1[7]);
  t5269 = Sin(var1[8]);
  t4877 = t643*t4826*t4829;
  t5153 = t505*t4046;
  t5171 = t2621*t4399;
  t5179 = t5153 + t5171;
  t5263 = t5179*t5258;
  t5265 = t4877 + t5263;
  t3822 = t505*t2621;
  t4501 = -1.*t4046*t4399;
  t4571 = t3822 + t4501;
  t5604 = t4826*t4829*t1684;
  t5618 = t505*t5557;
  t5666 = t5457*t4399;
  t5683 = t5618 + t5666;
  t5708 = t5683*t5258;
  t5719 = t5604 + t5708;
  t5495 = t505*t5457;
  t5583 = -1.*t5557*t4399;
  t5584 = t5495 + t5583;
  t5915 = -1.*t4829*t981;
  t5932 = t4826*t505*t1785;
  t5933 = t4826*t726*t4399;
  t5940 = t5932 + t5933;
  t5995 = t5940*t5258;
  t6013 = t5915 + t5995;
  t5828 = t4826*t726*t505;
  t5855 = -1.*t4826*t1785*t4399;
  t5856 = t5828 + t5855;
  p_output1[0]=-1.*t390*t4571 + t5265*t5269;
  p_output1[1]=-1.*t390*t5584 + t5269*t5719;
  p_output1[2]=-1.*t390*t5856 + t5269*t6013;
  p_output1[3]=t390*t5265 + t4571*t5269;
  p_output1[4]=t5269*t5584 + t390*t5719;
  p_output1[5]=t5269*t5856 + t390*t6013;
  p_output1[6]=-1.*t4829*t5179 + t4826*t5258*t643;
  p_output1[7]=t1684*t4826*t5258 - 1.*t4829*t5683;
  p_output1[8]=-1.*t4829*t5940 - 1.*t5258*t981;
}



void R_hip_flexion_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
