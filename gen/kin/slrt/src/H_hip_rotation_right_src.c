/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:41 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_rotation_right_src.h"

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
  double t492;
  double t1087;
  double t264;
  double t710;
  double t1306;
  double t89;
  double t2018;
  double t3183;
  double t822;
  double t1418;
  double t1740;
  double t2076;
  double t2077;
  double t2133;
  double t3393;
  double t3464;
  double t2666;
  double t2752;
  double t2791;
  double t3018;
  double t3032;
  double t3049;
  double t3473;
  double t3570;
  double t3580;
  double t3768;
  double t3785;
  double t3788;
  double t3897;
  double t3941;
  double t3948;
  double t4483;
  double t4494;
  double t3421;
  double t3627;
  double t3674;
  double t4549;
  double t4555;
  double t4659;
  double t4667;
  double t4691;
  double t4712;
  double t4744;
  double t4911;
  double t4940;
  double t5120;
  double t5123;
  double t5267;
  double t3755;
  double t3791;
  double t3808;
  double t3812;
  double t3978;
  double t3993;
  t492 = Cos(var1[5]);
  t1087 = Sin(var1[3]);
  t264 = Cos(var1[3]);
  t710 = Sin(var1[4]);
  t1306 = Sin(var1[5]);
  t89 = Cos(var1[13]);
  t2018 = Sin(var1[13]);
  t3183 = Cos(var1[4]);
  t822 = t264*t492*t710;
  t1418 = t1087*t1306;
  t1740 = t822 + t1418;
  t2076 = -1.*t492*t1087;
  t2077 = t264*t710*t1306;
  t2133 = t2076 + t2077;
  t3393 = Cos(var1[14]);
  t3464 = Sin(var1[14]);
  t2666 = t492*t1087*t710;
  t2752 = -1.*t264*t1306;
  t2791 = t2666 + t2752;
  t3018 = t264*t492;
  t3032 = t1087*t710*t1306;
  t3049 = t3018 + t3032;
  t3473 = t2018*t1740;
  t3570 = t89*t2133;
  t3580 = t3473 + t3570;
  t3768 = t2018*t2791;
  t3785 = t89*t3049;
  t3788 = t3768 + t3785;
  t3897 = t3183*t492*t2018;
  t3941 = t89*t3183*t1306;
  t3948 = t3897 + t3941;
  t4483 = -1.*t3393;
  t4494 = 1. + t4483;
  t3421 = t3393*t264*t3183;
  t3627 = t3464*t3580;
  t3674 = t3421 + t3627;
  t4549 = -0.049*t4494;
  t4555 = -0.135*t3464;
  t4659 = 0. + t4549 + t4555;
  t4667 = 0.135*t2018;
  t4691 = 0. + t4667;
  t4712 = -1.*t89;
  t4744 = 1. + t4712;
  t4911 = -0.135*t4744;
  t4940 = 0. + t4911;
  t5120 = -0.135*t4494;
  t5123 = 0.049*t3464;
  t5267 = 0. + t5120 + t5123;
  t3755 = t3393*t3183*t1087;
  t3791 = t3464*t3788;
  t3808 = t3755 + t3791;
  t3812 = -1.*t3393*t710;
  t3978 = t3464*t3948;
  t3993 = t3812 + t3978;
  p_output1[0]=t2018*t2133 - 1.*t1740*t89;
  p_output1[1]=t2018*t3049 - 1.*t2791*t89;
  p_output1[2]=t1306*t2018*t3183 - 1.*t3183*t492*t89;
  p_output1[3]=0.;
  p_output1[4]=t3674;
  p_output1[5]=t3808;
  p_output1[6]=t3993;
  p_output1[7]=0.;
  p_output1[8]=t264*t3183*t3464 - 1.*t3393*t3580;
  p_output1[9]=t1087*t3183*t3464 - 1.*t3393*t3788;
  p_output1[10]=-1.*t3393*t3948 - 1.*t3464*t710;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.135*(-1.*t264*t3183*t3464 + t3393*t3580) - 0.049*t3674 + t264*t3183*t4659 + t1740*t4691 + t2133*t4940 + t3580*t5267 - 0.09*(-1.*t2018*t2133 + t1740*t89) + var1[0];
  p_output1[13]=0. - 0.135*(-1.*t1087*t3183*t3464 + t3393*t3788) - 0.049*t3808 + t1087*t3183*t4659 + t2791*t4691 + t3049*t4940 + t3788*t5267 - 0.09*(-1.*t2018*t3049 + t2791*t89) + var1[1];
  p_output1[14]=0. - 0.049*t3993 + t3183*t4691*t492 + t1306*t3183*t4940 + t3948*t5267 - 1.*t4659*t710 - 0.135*(t3393*t3948 + t3464*t710) - 0.09*(-1.*t1306*t2018*t3183 + t3183*t492*t89) + var1[2];
  p_output1[15]=1.;
}



void H_hip_rotation_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
