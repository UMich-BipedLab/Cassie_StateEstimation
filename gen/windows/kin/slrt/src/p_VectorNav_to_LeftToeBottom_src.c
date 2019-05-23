/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:11:16 GMT-04:00
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
  double t98;
  double t713;
  double t843;
  double t1481;
  double t1533;
  double t1614;
  double t2666;
  double t3240;
  double t3315;
  double t3333;
  double t3398;
  double t3537;
  double t3704;
  double t3794;
  double t4078;
  double t4229;
  double t4236;
  double t4285;
  double t4302;
  double t4338;
  double t4359;
  double t4391;
  double t4402;
  double t4403;
  double t4529;
  double t4560;
  double t4562;
  double t4587;
  double t4635;
  double t4657;
  double t4664;
  double t4670;
  double t4686;
  double t4695;
  double t4788;
  double t4796;
  double t4816;
  double t4879;
  double t235;
  double t410;
  double t2374;
  double t2459;
  double t2494;
  double t2663;
  double t2671;
  double t2783;
  double t1554;
  double t2104;
  double t2133;
  double t5265;
  double t2853;
  double t2938;
  double t3194;
  double t3343;
  double t3448;
  double t3533;
  double t5330;
  double t5349;
  double t5368;
  double t5393;
  double t5417;
  double t5435;
  double t3837;
  double t3911;
  double t4018;
  double t4357;
  double t4360;
  double t4378;
  double t5446;
  double t5456;
  double t5457;
  double t5474;
  double t5482;
  double t5486;
  double t4498;
  double t4508;
  double t4526;
  double t4659;
  double t4665;
  double t4669;
  double t5493;
  double t5494;
  double t5516;
  double t5543;
  double t5549;
  double t5555;
  double t4733;
  double t4755;
  double t4769;
  double t5564;
  double t5580;
  double t5607;
  double t5632;
  double t5646;
  double t5657;
  double t5113;
  double t5153;
  double t5207;
  double t5269;
  double t5289;
  double t5309;
  double t6058;
  double t6074;
  double t6075;
  double t6088;
  double t6090;
  double t6099;
  double t6109;
  double t6126;
  double t6136;
  double t6140;
  double t6149;
  double t6154;
  double t6158;
  double t6165;
  double t6169;
  double t6258;
  double t6268;
  double t6272;
  double t6276;
  double t6300;
  double t6302;
  double t6308;
  double t6312;
  double t6335;
  t98 = Cos(var1[1]);
  t713 = Cos(var1[2]);
  t843 = Cos(var1[3]);
  t1481 = -1.*t843;
  t1533 = 1. + t1481;
  t1614 = Sin(var1[3]);
  t2666 = Sin(var1[2]);
  t3240 = Cos(var1[4]);
  t3315 = -1.*t3240;
  t3333 = 1. + t3315;
  t3398 = Sin(var1[4]);
  t3537 = -1.*t98*t713*t1614;
  t3704 = -1.*t843*t98*t2666;
  t3794 = t3537 + t3704;
  t4078 = t843*t98*t713;
  t4229 = -1.*t98*t1614*t2666;
  t4236 = t4078 + t4229;
  t4285 = Cos(var1[5]);
  t4302 = -1.*t4285;
  t4338 = 1. + t4302;
  t4359 = Sin(var1[5]);
  t4391 = t3398*t3794;
  t4402 = t3240*t4236;
  t4403 = t4391 + t4402;
  t4529 = t3240*t3794;
  t4560 = -1.*t3398*t4236;
  t4562 = t4529 + t4560;
  t4587 = Cos(var1[6]);
  t4635 = -1.*t4587;
  t4657 = 1. + t4635;
  t4664 = Sin(var1[6]);
  t4670 = -1.*t4359*t4403;
  t4686 = t4285*t4562;
  t4695 = t4670 + t4686;
  t4788 = t4285*t4403;
  t4796 = t4359*t4562;
  t4816 = t4788 + t4796;
  t4879 = Cos(var1[0]);
  t235 = -1.*t98;
  t410 = 1. + t235;
  t2374 = Sin(var1[1]);
  t2459 = -1.*t713;
  t2494 = 1. + t2459;
  t2663 = -0.049*t2494;
  t2671 = -0.09*t2666;
  t2783 = 0. + t2663 + t2671;
  t1554 = -0.049*t1533;
  t2104 = -0.21*t1614;
  t2133 = 0. + t1554 + t2104;
  t5265 = Sin(var1[0]);
  t2853 = -0.21*t1533;
  t2938 = 0.049*t1614;
  t3194 = 0. + t2853 + t2938;
  t3343 = -0.2707*t3333;
  t3448 = 0.0016*t3398;
  t3533 = 0. + t3343 + t3448;
  t5330 = t4879*t713*t2374;
  t5349 = -1.*t5265*t2666;
  t5368 = t5330 + t5349;
  t5393 = -1.*t713*t5265;
  t5417 = -1.*t4879*t2374*t2666;
  t5435 = t5393 + t5417;
  t3837 = -0.0016*t3333;
  t3911 = -0.2707*t3398;
  t4018 = 0. + t3837 + t3911;
  t4357 = 0.0184*t4338;
  t4360 = -0.7055*t4359;
  t4378 = 0. + t4357 + t4360;
  t5446 = -1.*t1614*t5368;
  t5456 = t843*t5435;
  t5457 = t5446 + t5456;
  t5474 = t843*t5368;
  t5482 = t1614*t5435;
  t5486 = t5474 + t5482;
  t4498 = -0.7055*t4338;
  t4508 = -0.0184*t4359;
  t4526 = 0. + t4498 + t4508;
  t4659 = -1.1135*t4657;
  t4665 = 0.0216*t4664;
  t4669 = 0. + t4659 + t4665;
  t5493 = t3398*t5457;
  t5494 = t3240*t5486;
  t5516 = t5493 + t5494;
  t5543 = t3240*t5457;
  t5549 = -1.*t3398*t5486;
  t5555 = t5543 + t5549;
  t4733 = -0.0216*t4657;
  t4755 = -1.1135*t4664;
  t4769 = 0. + t4733 + t4755;
  t5564 = -1.*t4359*t5516;
  t5580 = t4285*t5555;
  t5607 = t5564 + t5580;
  t5632 = t4285*t5516;
  t5646 = t4359*t5555;
  t5657 = t5632 + t5646;
  t5113 = 0.135*t410;
  t5153 = 0.049*t2374;
  t5207 = 0. + t5113 + t5153;
  t5269 = -0.09*t2494;
  t5289 = 0.049*t2666;
  t5309 = 0. + t5269 + t5289;
  t6058 = t713*t5265*t2374;
  t6074 = t4879*t2666;
  t6075 = t6058 + t6074;
  t6088 = t4879*t713;
  t6090 = -1.*t5265*t2374*t2666;
  t6099 = t6088 + t6090;
  t6109 = -1.*t1614*t6075;
  t6126 = t843*t6099;
  t6136 = t6109 + t6126;
  t6140 = t843*t6075;
  t6149 = t1614*t6099;
  t6154 = t6140 + t6149;
  t6158 = t3398*t6136;
  t6165 = t3240*t6154;
  t6169 = t6158 + t6165;
  t6258 = t3240*t6136;
  t6268 = -1.*t3398*t6154;
  t6272 = t6258 + t6268;
  t6276 = -1.*t4359*t6169;
  t6300 = t4285*t6272;
  t6302 = t6276 + t6300;
  t6308 = t4285*t6169;
  t6312 = t4359*t6272;
  t6335 = t6308 + t6312;
  p_output1[0]=-0.03155 + 0.004500000000000004*t2374 + t3533*t3794 - 0.049*t410 + t4018*t4236 + t4378*t4403 + t4526*t4562 + t4669*t4695 + t4769*t4816 + 0.0306*(t4664*t4695 + t4587*t4816) - 1.1312*(t4587*t4695 - 1.*t4664*t4816) + t2783*t98 - 1.*t2666*t3194*t98 + t2133*t713*t98;
  p_output1[1]=0. + 0.135*(1. - 1.*t4879) + t2374*t2783*t4879 + t4879*t5207 - 1.*t5265*t5309 + t2133*t5368 + t3194*t5435 + t3533*t5457 + t4018*t5486 + t4378*t5516 + t4526*t5555 + t4669*t5607 + t4769*t5657 + 0.0306*(t4664*t5607 + t4587*t5657) - 1.1312*(t4587*t5607 - 1.*t4664*t5657) + 0.1305*t4879*t98;
  p_output1[2]=0.07996 - 0.135*t5265 + t2374*t2783*t5265 + t5207*t5265 + t4879*t5309 + t2133*t6075 + t3194*t6099 + t3533*t6136 + t4018*t6154 + t4378*t6169 + t4526*t6272 + t4669*t6302 + t4769*t6335 + 0.0306*(t4664*t6302 + t4587*t6335) - 1.1312*(t4587*t6302 - 1.*t4664*t6335) + 0.1305*t5265*t98;
}



void p_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
