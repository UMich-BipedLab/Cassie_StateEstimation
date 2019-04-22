/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_abduction_left_src.h"

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
  double t1012;
  double t1771;
  double t685;
  double t2829;
  double t4574;
  double t5298;
  double t4423;
  double t5532;
  double t5392;
  double t5460;
  double t5466;
  double t4905;
  double t5361;
  double t5363;
  double t5581;
  double t5587;
  double t5589;
  double t5563;
  double t5565;
  double t5572;
  double t5374;
  double t5552;
  double t5558;
  double t5740;
  double t5766;
  double t5772;
  double t5777;
  double t5799;
  double t5800;
  double t5576;
  double t5593;
  double t5615;
  double t5637;
  double t5641;
  double t5643;
  t1012 = Cos(var1[4]);
  t1771 = Sin(var1[3]);
  t685 = Cos(var1[3]);
  t2829 = Sin(var1[4]);
  t4574 = Cos(var1[5]);
  t5298 = Sin(var1[5]);
  t4423 = Cos(var1[6]);
  t5532 = Sin(var1[6]);
  t5392 = t685*t4574*t2829;
  t5460 = t1771*t5298;
  t5466 = t5392 + t5460;
  t4905 = -1.*t4574*t1771;
  t5361 = t685*t2829*t5298;
  t5363 = t4905 + t5361;
  t5581 = t4574*t1771*t2829;
  t5587 = -1.*t685*t5298;
  t5589 = t5581 + t5587;
  t5563 = t685*t4574;
  t5565 = t1771*t2829*t5298;
  t5572 = t5563 + t5565;
  t5374 = t4423*t5363;
  t5552 = t5466*t5532;
  t5558 = t5374 + t5552;
  t5740 = -1.*t4423;
  t5766 = 1. + t5740;
  t5772 = 0.135*t5766;
  t5777 = 0. + t5772;
  t5799 = -0.135*t5532;
  t5800 = 0. + t5799;
  t5576 = t4423*t5572;
  t5593 = t5589*t5532;
  t5615 = t5576 + t5593;
  t5637 = t1012*t4423*t5298;
  t5641 = t1012*t4574*t5532;
  t5643 = t5637 + t5641;
  p_output1[0]=t1012*t685;
  p_output1[1]=t1012*t1771;
  p_output1[2]=-1.*t2829;
  p_output1[3]=0.;
  p_output1[4]=t5558;
  p_output1[5]=t5615;
  p_output1[6]=t5643;
  p_output1[7]=0.;
  p_output1[8]=t4423*t5466 - 1.*t5363*t5532;
  p_output1[9]=-1.*t5532*t5572 + t4423*t5589;
  p_output1[10]=t1012*t4423*t4574 - 1.*t1012*t5298*t5532;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.135*t5558 + t5363*t5777 + t5466*t5800 - 0.049*t1012*t685 + var1[0];
  p_output1[13]=0. - 0.049*t1012*t1771 + 0.135*t5615 + t5572*t5777 + t5589*t5800 + var1[1];
  p_output1[14]=0. + 0.049*t2829 + 0.135*t5643 + t1012*t5298*t5777 + t1012*t4574*t5800 + var1[2];
  p_output1[15]=1.;
}



void H_hip_abduction_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
