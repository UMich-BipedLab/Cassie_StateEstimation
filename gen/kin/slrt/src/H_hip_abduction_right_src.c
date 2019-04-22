/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_abduction_right_src.h"

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
  double t2992;
  double t681;
  double t3837;
  double t3529;
  double t5208;
  double t5496;
  double t4537;
  double t5538;
  double t5385;
  double t5501;
  double t5531;
  double t5568;
  double t5636;
  double t5686;
  double t5723;
  double t5725;
  double t5739;
  double t5753;
  double t5761;
  double t5766;
  double t5533;
  double t5695;
  double t5712;
  double t5919;
  double t5920;
  double t5956;
  double t5975;
  double t5984;
  double t5999;
  double t5752;
  double t5770;
  double t5782;
  double t5805;
  double t5809;
  double t5832;
  t2992 = Cos(var1[4]);
  t681 = Cos(var1[3]);
  t3837 = Sin(var1[4]);
  t3529 = Sin(var1[3]);
  t5208 = Cos(var1[5]);
  t5496 = Sin(var1[5]);
  t4537 = Sin(var1[13]);
  t5538 = Cos(var1[13]);
  t5385 = t681*t5208*t3837;
  t5501 = t3529*t5496;
  t5531 = t5385 + t5501;
  t5568 = -1.*t5208*t3529;
  t5636 = t681*t3837*t5496;
  t5686 = t5568 + t5636;
  t5723 = t5208*t3529*t3837;
  t5725 = -1.*t681*t5496;
  t5739 = t5723 + t5725;
  t5753 = t681*t5208;
  t5761 = t3529*t3837*t5496;
  t5766 = t5753 + t5761;
  t5533 = t4537*t5531;
  t5695 = t5538*t5686;
  t5712 = t5533 + t5695;
  t5919 = 0.135*t4537;
  t5920 = 0. + t5919;
  t5956 = -1.*t5538;
  t5975 = 1. + t5956;
  t5984 = -0.135*t5975;
  t5999 = 0. + t5984;
  t5752 = t4537*t5739;
  t5770 = t5538*t5766;
  t5782 = t5752 + t5770;
  t5805 = t2992*t5208*t4537;
  t5809 = t5538*t2992*t5496;
  t5832 = t5805 + t5809;
  p_output1[0]=t2992*t681;
  p_output1[1]=t2992*t3529;
  p_output1[2]=-1.*t3837;
  p_output1[3]=0.;
  p_output1[4]=t5712;
  p_output1[5]=t5782;
  p_output1[6]=t5832;
  p_output1[7]=0.;
  p_output1[8]=t5531*t5538 - 1.*t4537*t5686;
  p_output1[9]=t5538*t5739 - 1.*t4537*t5766;
  p_output1[10]=-1.*t2992*t4537*t5496 + t2992*t5208*t5538;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.135*t5712 + t5531*t5920 + t5686*t5999 - 0.049*t2992*t681 + var1[0];
  p_output1[13]=0. - 0.049*t2992*t3529 - 0.135*t5782 + t5739*t5920 + t5766*t5999 + var1[1];
  p_output1[14]=0. + 0.049*t3837 - 0.135*t5832 + t2992*t5208*t5920 + t2992*t5496*t5999 + var1[2];
  p_output1[15]=1.;
}



void H_hip_abduction_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
