/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:43 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_joint_right_src.h"

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
  double t297;
  double t2790;
  double t3764;
  double t3191;
  double t3977;
  double t361;
  double t522;
  double t1211;
  double t1871;
  double t2531;
  double t3220;
  double t3980;
  double t4241;
  double t4818;
  double t5652;
  double t5714;
  double t5742;
  double t340;
  double t6115;
  double t6123;
  double t6202;
  double t6292;
  double t6296;
  double t6416;
  double t6441;
  double t6527;
  double t6529;
  double t6532;
  double t6598;
  double t6647;
  double t6653;
  double t6676;
  double t6678;
  double t6683;
  double t6696;
  double t6726;
  double t6742;
  double t6749;
  double t6810;
  double t6824;
  double t6838;
  double t1471;
  double t2033;
  double t2373;
  double t2688;
  double t2727;
  double t5089;
  double t5363;
  double t5525;
  double t5605;
  double t5965;
  double t6020;
  double t6093;
  double t6928;
  double t6936;
  double t6941;
  double t6985;
  double t6987;
  double t6995;
  double t6429;
  double t6448;
  double t6487;
  double t7009;
  double t7013;
  double t7050;
  double t6569;
  double t6574;
  double t6575;
  double t6695;
  double t6702;
  double t6703;
  double t7055;
  double t7067;
  double t7069;
  double t7127;
  double t7133;
  double t7140;
  double t6792;
  double t6794;
  double t6795;
  double t7150;
  double t7217;
  double t7234;
  double t7251;
  double t7255;
  double t7284;
  double t7391;
  double t7414;
  double t7428;
  double t7447;
  double t7458;
  double t7465;
  double t7517;
  double t7518;
  double t7521;
  double t7527;
  double t7528;
  double t7536;
  double t7539;
  double t7541;
  double t7547;
  t297 = Cos(var1[3]);
  t2790 = Cos(var1[5]);
  t3764 = Sin(var1[3]);
  t3191 = Sin(var1[4]);
  t3977 = Sin(var1[5]);
  t361 = Cos(var1[14]);
  t522 = -1.*t361;
  t1211 = 1. + t522;
  t1871 = Sin(var1[14]);
  t2531 = Sin(var1[13]);
  t3220 = t297*t2790*t3191;
  t3980 = t3764*t3977;
  t4241 = t3220 + t3980;
  t4818 = Cos(var1[13]);
  t5652 = -1.*t2790*t3764;
  t5714 = t297*t3191*t3977;
  t5742 = t5652 + t5714;
  t340 = Cos(var1[4]);
  t6115 = t2531*t4241;
  t6123 = t4818*t5742;
  t6202 = t6115 + t6123;
  t6292 = Cos(var1[15]);
  t6296 = -1.*t6292;
  t6416 = 1. + t6296;
  t6441 = Sin(var1[15]);
  t6527 = t4818*t4241;
  t6529 = -1.*t2531*t5742;
  t6532 = t6527 + t6529;
  t6598 = t361*t297*t340;
  t6647 = t1871*t6202;
  t6653 = t6598 + t6647;
  t6676 = Cos(var1[16]);
  t6678 = -1.*t6676;
  t6683 = 1. + t6678;
  t6696 = Sin(var1[16]);
  t6726 = t6441*t6532;
  t6742 = t6292*t6653;
  t6749 = t6726 + t6742;
  t6810 = t6292*t6532;
  t6824 = -1.*t6441*t6653;
  t6838 = t6810 + t6824;
  t1471 = -0.049*t1211;
  t2033 = -0.135*t1871;
  t2373 = 0. + t1471 + t2033;
  t2688 = 0.135*t2531;
  t2727 = 0. + t2688;
  t5089 = -1.*t4818;
  t5363 = 1. + t5089;
  t5525 = -0.135*t5363;
  t5605 = 0. + t5525;
  t5965 = -0.135*t1211;
  t6020 = 0.049*t1871;
  t6093 = 0. + t5965 + t6020;
  t6928 = t2790*t3764*t3191;
  t6936 = -1.*t297*t3977;
  t6941 = t6928 + t6936;
  t6985 = t297*t2790;
  t6987 = t3764*t3191*t3977;
  t6995 = t6985 + t6987;
  t6429 = -0.09*t6416;
  t6448 = 0.049*t6441;
  t6487 = 0. + t6429 + t6448;
  t7009 = t2531*t6941;
  t7013 = t4818*t6995;
  t7050 = t7009 + t7013;
  t6569 = -0.049*t6416;
  t6574 = -0.09*t6441;
  t6575 = 0. + t6569 + t6574;
  t6695 = -0.049*t6683;
  t6702 = -0.21*t6696;
  t6703 = 0. + t6695 + t6702;
  t7055 = t4818*t6941;
  t7067 = -1.*t2531*t6995;
  t7069 = t7055 + t7067;
  t7127 = t361*t340*t3764;
  t7133 = t1871*t7050;
  t7140 = t7127 + t7133;
  t6792 = -0.21*t6683;
  t6794 = 0.049*t6696;
  t6795 = 0. + t6792 + t6794;
  t7150 = t6441*t7069;
  t7217 = t6292*t7140;
  t7234 = t7150 + t7217;
  t7251 = t6292*t7069;
  t7255 = -1.*t6441*t7140;
  t7284 = t7251 + t7255;
  t7391 = t340*t2790*t2531;
  t7414 = t4818*t340*t3977;
  t7428 = t7391 + t7414;
  t7447 = t4818*t340*t2790;
  t7458 = -1.*t340*t2531*t3977;
  t7465 = t7447 + t7458;
  t7517 = -1.*t361*t3191;
  t7518 = t1871*t7428;
  t7521 = t7517 + t7518;
  t7527 = t6441*t7465;
  t7528 = t6292*t7521;
  t7536 = t7527 + t7528;
  t7539 = t6292*t7465;
  t7541 = -1.*t6441*t7521;
  t7547 = t7539 + t7541;
  p_output1[0]=0. + t2373*t297*t340 + t2727*t4241 + t5605*t5742 + t6093*t6202 - 0.1305*(-1.*t1871*t297*t340 + t361*t6202) + t6487*t6532 + t6575*t6653 + t6703*t6749 + t6795*t6838 - 0.21*(-1.*t6696*t6749 + t6676*t6838) - 0.049*(t6676*t6749 + t6696*t6838) + var1[0];
  p_output1[1]=0. + t2373*t340*t3764 + t2727*t6941 + t5605*t6995 + t6093*t7050 - 0.1305*(-1.*t1871*t340*t3764 + t361*t7050) + t6487*t7069 + t6575*t7140 + t6703*t7234 + t6795*t7284 - 0.21*(-1.*t6696*t7234 + t6676*t7284) - 0.049*(t6676*t7234 + t6696*t7284) + var1[1];
  p_output1[2]=0. - 1.*t2373*t3191 + t2727*t2790*t340 + t340*t3977*t5605 + t6093*t7428 - 0.1305*(t1871*t3191 + t361*t7428) + t6487*t7465 + t6575*t7521 + t6703*t7536 + t6795*t7547 - 0.21*(-1.*t6696*t7536 + t6676*t7547) - 0.049*(t6676*t7536 + t6696*t7547) + var1[2];
}



void p_knee_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
