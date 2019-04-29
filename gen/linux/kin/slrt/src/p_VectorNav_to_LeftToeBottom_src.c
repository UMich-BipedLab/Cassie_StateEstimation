/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:02:12 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_LeftToeBottom_src.h"

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
  double t541;
  double t820;
  double t837;
  double t899;
  double t1257;
  double t1364;
  double t2950;
  double t3599;
  double t3637;
  double t3700;
  double t4015;
  double t4241;
  double t4267;
  double t4270;
  double t4416;
  double t4446;
  double t4510;
  double t4593;
  double t4608;
  double t4615;
  double t4642;
  double t4691;
  double t4700;
  double t4721;
  double t4841;
  double t4906;
  double t4949;
  double t4966;
  double t4982;
  double t4984;
  double t4993;
  double t5042;
  double t5051;
  double t5069;
  double t5126;
  double t5137;
  double t5146;
  double t5206;
  double t583;
  double t733;
  double t2014;
  double t2383;
  double t2440;
  double t2809;
  double t3022;
  double t3114;
  double t1293;
  double t1669;
  double t1755;
  double t5329;
  double t3209;
  double t3302;
  double t3405;
  double t3973;
  double t4049;
  double t4213;
  double t5354;
  double t5377;
  double t5381;
  double t5421;
  double t5432;
  double t5449;
  double t4331;
  double t4335;
  double t4407;
  double t4620;
  double t4679;
  double t4685;
  double t5460;
  double t5467;
  double t5469;
  double t5500;
  double t5503;
  double t5506;
  double t4742;
  double t4807;
  double t4811;
  double t4989;
  double t5022;
  double t5031;
  double t5527;
  double t5547;
  double t5558;
  double t5566;
  double t5577;
  double t5587;
  double t5094;
  double t5105;
  double t5122;
  double t5595;
  double t5597;
  double t5606;
  double t5630;
  double t5631;
  double t5632;
  double t5286;
  double t5299;
  double t5301;
  double t5331;
  double t5337;
  double t5339;
  double t5763;
  double t5767;
  double t5770;
  double t5783;
  double t5784;
  double t5794;
  double t5807;
  double t5817;
  double t5831;
  double t5835;
  double t5837;
  double t5842;
  double t5845;
  double t5857;
  double t5865;
  double t5870;
  double t5872;
  double t5881;
  double t5900;
  double t5903;
  double t5904;
  double t5922;
  double t5923;
  double t5949;
  t541 = Cos(var1[1]);
  t820 = Cos(var1[2]);
  t837 = Cos(var1[3]);
  t899 = -1.*t837;
  t1257 = 1. + t899;
  t1364 = Sin(var1[3]);
  t2950 = Sin(var1[2]);
  t3599 = Cos(var1[4]);
  t3637 = -1.*t3599;
  t3700 = 1. + t3637;
  t4015 = Sin(var1[4]);
  t4241 = -1.*t541*t820*t1364;
  t4267 = -1.*t837*t541*t2950;
  t4270 = t4241 + t4267;
  t4416 = t837*t541*t820;
  t4446 = -1.*t541*t1364*t2950;
  t4510 = t4416 + t4446;
  t4593 = Cos(var1[5]);
  t4608 = -1.*t4593;
  t4615 = 1. + t4608;
  t4642 = Sin(var1[5]);
  t4691 = t4015*t4270;
  t4700 = t3599*t4510;
  t4721 = t4691 + t4700;
  t4841 = t3599*t4270;
  t4906 = -1.*t4015*t4510;
  t4949 = t4841 + t4906;
  t4966 = Cos(var1[6]);
  t4982 = -1.*t4966;
  t4984 = 1. + t4982;
  t4993 = Sin(var1[6]);
  t5042 = -1.*t4642*t4721;
  t5051 = t4593*t4949;
  t5069 = t5042 + t5051;
  t5126 = t4593*t4721;
  t5137 = t4642*t4949;
  t5146 = t5126 + t5137;
  t5206 = Cos(var1[0]);
  t583 = -1.*t541;
  t733 = 1. + t583;
  t2014 = Sin(var1[1]);
  t2383 = -1.*t820;
  t2440 = 1. + t2383;
  t2809 = -0.049*t2440;
  t3022 = -0.09*t2950;
  t3114 = 0. + t2809 + t3022;
  t1293 = -0.049*t1257;
  t1669 = -0.21*t1364;
  t1755 = 0. + t1293 + t1669;
  t5329 = Sin(var1[0]);
  t3209 = -0.21*t1257;
  t3302 = 0.049*t1364;
  t3405 = 0. + t3209 + t3302;
  t3973 = -0.2707*t3700;
  t4049 = 0.0016*t4015;
  t4213 = 0. + t3973 + t4049;
  t5354 = t5206*t820*t2014;
  t5377 = -1.*t5329*t2950;
  t5381 = t5354 + t5377;
  t5421 = -1.*t820*t5329;
  t5432 = -1.*t5206*t2014*t2950;
  t5449 = t5421 + t5432;
  t4331 = -0.0016*t3700;
  t4335 = -0.2707*t4015;
  t4407 = 0. + t4331 + t4335;
  t4620 = 0.0184*t4615;
  t4679 = -0.7055*t4642;
  t4685 = 0. + t4620 + t4679;
  t5460 = -1.*t1364*t5381;
  t5467 = t837*t5449;
  t5469 = t5460 + t5467;
  t5500 = t837*t5381;
  t5503 = t1364*t5449;
  t5506 = t5500 + t5503;
  t4742 = -0.7055*t4615;
  t4807 = -0.0184*t4642;
  t4811 = 0. + t4742 + t4807;
  t4989 = -1.1135*t4984;
  t5022 = 0.0216*t4993;
  t5031 = 0. + t4989 + t5022;
  t5527 = t4015*t5469;
  t5547 = t3599*t5506;
  t5558 = t5527 + t5547;
  t5566 = t3599*t5469;
  t5577 = -1.*t4015*t5506;
  t5587 = t5566 + t5577;
  t5094 = -0.0216*t4984;
  t5105 = -1.1135*t4993;
  t5122 = 0. + t5094 + t5105;
  t5595 = -1.*t4642*t5558;
  t5597 = t4593*t5587;
  t5606 = t5595 + t5597;
  t5630 = t4593*t5558;
  t5631 = t4642*t5587;
  t5632 = t5630 + t5631;
  t5286 = 0.135*t733;
  t5299 = 0.049*t2014;
  t5301 = 0. + t5286 + t5299;
  t5331 = -0.09*t2440;
  t5337 = 0.049*t2950;
  t5339 = 0. + t5331 + t5337;
  t5763 = t820*t5329*t2014;
  t5767 = t5206*t2950;
  t5770 = t5763 + t5767;
  t5783 = t5206*t820;
  t5784 = -1.*t5329*t2014*t2950;
  t5794 = t5783 + t5784;
  t5807 = -1.*t1364*t5770;
  t5817 = t837*t5794;
  t5831 = t5807 + t5817;
  t5835 = t837*t5770;
  t5837 = t1364*t5794;
  t5842 = t5835 + t5837;
  t5845 = t4015*t5831;
  t5857 = t3599*t5842;
  t5865 = t5845 + t5857;
  t5870 = t3599*t5831;
  t5872 = -1.*t4015*t5842;
  t5881 = t5870 + t5872;
  t5900 = -1.*t4642*t5865;
  t5903 = t4593*t5881;
  t5904 = t5900 + t5903;
  t5922 = t4593*t5865;
  t5923 = t4642*t5881;
  t5949 = t5922 + t5923;
  p_output1[0]=-0.03155 + 0.004500000000000004*t2014 + t4213*t4270 + t4407*t4510 + t4685*t4721 + t4811*t4949 + t5031*t5069 + t5122*t5146 + 0.0306*(t4993*t5069 + t4966*t5146) - 1.1312*(t4966*t5069 - 1.*t4993*t5146) + t3114*t541 - 1.*t2950*t3405*t541 - 0.049*t733 + t1755*t541*t820;
  p_output1[1]=0. + 0.135*(1. - 1.*t5206) + t2014*t3114*t5206 + t5206*t5301 - 1.*t5329*t5339 + t1755*t5381 + 0.1305*t5206*t541 + t3405*t5449 + t4213*t5469 + t4407*t5506 + t4685*t5558 + t4811*t5587 + t5031*t5606 + t5122*t5632 + 0.0306*(t4993*t5606 + t4966*t5632) - 1.1312*(t4966*t5606 - 1.*t4993*t5632);
  p_output1[2]=0.07996 - 0.135*t5329 + t2014*t3114*t5329 + t5301*t5329 + t5206*t5339 + 0.1305*t5329*t541 + t1755*t5770 + t3405*t5794 + t4213*t5831 + t4407*t5842 + t4685*t5865 + t4811*t5881 + t5031*t5904 + t5122*t5949 + 0.0306*(t4993*t5904 + t4966*t5949) - 1.1312*(t4966*t5904 - 1.*t4993*t5949);
}



void p_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
