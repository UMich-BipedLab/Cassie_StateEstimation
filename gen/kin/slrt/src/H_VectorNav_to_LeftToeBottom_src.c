/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:02:11 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_LeftToeBottom_src.h"

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
  double t392;
  double t1458;
  double t1262;
  double t1363;
  double t1576;
  double t1736;
  double t1428;
  double t1588;
  double t1607;
  double t1195;
  double t1762;
  double t1765;
  double t1769;
  double t1883;
  double t1635;
  double t1771;
  double t1818;
  double t969;
  double t1898;
  double t1935;
  double t2003;
  double t2063;
  double t1849;
  double t2006;
  double t2016;
  double t896;
  double t2117;
  double t2131;
  double t2156;
  double t255;
  double t35;
  double t678;
  double t2378;
  double t2379;
  double t2381;
  double t2487;
  double t2606;
  double t2675;
  double t2415;
  double t2687;
  double t2711;
  double t2741;
  double t2766;
  double t2868;
  double t2725;
  double t2873;
  double t2898;
  double t2916;
  double t2928;
  double t2934;
  double t2913;
  double t2937;
  double t2975;
  double t3090;
  double t3103;
  double t3116;
  double t3272;
  double t3280;
  double t3307;
  double t3362;
  double t3364;
  double t3384;
  double t3314;
  double t3405;
  double t3445;
  double t3493;
  double t3510;
  double t3513;
  double t3465;
  double t3527;
  double t3548;
  double t3566;
  double t3594;
  double t3598;
  double t3550;
  double t3599;
  double t3623;
  double t3665;
  double t3681;
  double t3690;
  double t2053;
  double t2178;
  double t2179;
  double t2241;
  double t2314;
  double t2318;
  double t3066;
  double t3143;
  double t3156;
  double t3163;
  double t3200;
  double t3209;
  double t3661;
  double t3701;
  double t3793;
  double t3822;
  double t3832;
  double t3860;
  double t4071;
  double t4092;
  double t4239;
  double t4240;
  double t4321;
  double t4336;
  double t4401;
  double t4402;
  double t4052;
  double t4065;
  double t4177;
  double t4194;
  double t4211;
  double t4215;
  double t4219;
  double t4095;
  double t4129;
  double t4148;
  double t4222;
  double t4232;
  double t4233;
  double t4241;
  double t4247;
  double t4248;
  double t4270;
  double t4283;
  double t4291;
  double t4346;
  double t4351;
  double t4352;
  double t4380;
  double t4382;
  double t4392;
  double t4415;
  double t4418;
  double t4435;
  double t4444;
  double t4446;
  double t4449;
  double t4504;
  double t4508;
  double t4518;
  double t4584;
  double t4593;
  double t4595;
  t392 = Cos(var1[1]);
  t1458 = Cos(var1[3]);
  t1262 = Cos(var1[2]);
  t1363 = Sin(var1[3]);
  t1576 = Sin(var1[2]);
  t1736 = Cos(var1[4]);
  t1428 = -1.*t392*t1262*t1363;
  t1588 = -1.*t1458*t392*t1576;
  t1607 = t1428 + t1588;
  t1195 = Sin(var1[4]);
  t1762 = t1458*t392*t1262;
  t1765 = -1.*t392*t1363*t1576;
  t1769 = t1762 + t1765;
  t1883 = Cos(var1[5]);
  t1635 = t1195*t1607;
  t1771 = t1736*t1769;
  t1818 = t1635 + t1771;
  t969 = Sin(var1[5]);
  t1898 = t1736*t1607;
  t1935 = -1.*t1195*t1769;
  t2003 = t1898 + t1935;
  t2063 = Cos(var1[6]);
  t1849 = -1.*t969*t1818;
  t2006 = t1883*t2003;
  t2016 = t1849 + t2006;
  t896 = Sin(var1[6]);
  t2117 = t1883*t1818;
  t2131 = t969*t2003;
  t2156 = t2117 + t2131;
  t255 = Cos(var1[0]);
  t35 = Sin(var1[1]);
  t678 = Sin(var1[0]);
  t2378 = t255*t1262*t35;
  t2379 = -1.*t678*t1576;
  t2381 = t2378 + t2379;
  t2487 = -1.*t1262*t678;
  t2606 = -1.*t255*t35*t1576;
  t2675 = t2487 + t2606;
  t2415 = -1.*t1363*t2381;
  t2687 = t1458*t2675;
  t2711 = t2415 + t2687;
  t2741 = t1458*t2381;
  t2766 = t1363*t2675;
  t2868 = t2741 + t2766;
  t2725 = t1195*t2711;
  t2873 = t1736*t2868;
  t2898 = t2725 + t2873;
  t2916 = t1736*t2711;
  t2928 = -1.*t1195*t2868;
  t2934 = t2916 + t2928;
  t2913 = -1.*t969*t2898;
  t2937 = t1883*t2934;
  t2975 = t2913 + t2937;
  t3090 = t1883*t2898;
  t3103 = t969*t2934;
  t3116 = t3090 + t3103;
  t3272 = t1262*t678*t35;
  t3280 = t255*t1576;
  t3307 = t3272 + t3280;
  t3362 = t255*t1262;
  t3364 = -1.*t678*t35*t1576;
  t3384 = t3362 + t3364;
  t3314 = -1.*t1363*t3307;
  t3405 = t1458*t3384;
  t3445 = t3314 + t3405;
  t3493 = t1458*t3307;
  t3510 = t1363*t3384;
  t3513 = t3493 + t3510;
  t3465 = t1195*t3445;
  t3527 = t1736*t3513;
  t3548 = t3465 + t3527;
  t3566 = t1736*t3445;
  t3594 = -1.*t1195*t3513;
  t3598 = t3566 + t3594;
  t3550 = -1.*t969*t3548;
  t3599 = t1883*t3598;
  t3623 = t3550 + t3599;
  t3665 = t1883*t3548;
  t3681 = t969*t3598;
  t3690 = t3665 + t3681;
  t2053 = t896*t2016;
  t2178 = t2063*t2156;
  t2179 = t2053 + t2178;
  t2241 = t2063*t2016;
  t2314 = -1.*t896*t2156;
  t2318 = t2241 + t2314;
  t3066 = t896*t2975;
  t3143 = t2063*t3116;
  t3156 = t3066 + t3143;
  t3163 = t2063*t2975;
  t3200 = -1.*t896*t3116;
  t3209 = t3163 + t3200;
  t3661 = t896*t3623;
  t3701 = t2063*t3690;
  t3793 = t3661 + t3701;
  t3822 = t2063*t3623;
  t3832 = -1.*t896*t3690;
  t3860 = t3822 + t3832;
  t4071 = -1.*t1458;
  t4092 = 1. + t4071;
  t4239 = -1.*t1736;
  t4240 = 1. + t4239;
  t4321 = -1.*t1883;
  t4336 = 1. + t4321;
  t4401 = -1.*t2063;
  t4402 = 1. + t4401;
  t4052 = -1.*t392;
  t4065 = 1. + t4052;
  t4177 = -1.*t1262;
  t4194 = 1. + t4177;
  t4211 = -0.049*t4194;
  t4215 = -0.09*t1576;
  t4219 = 0. + t4211 + t4215;
  t4095 = -0.049*t4092;
  t4129 = -0.21*t1363;
  t4148 = 0. + t4095 + t4129;
  t4222 = -0.21*t4092;
  t4232 = 0.049*t1363;
  t4233 = 0. + t4222 + t4232;
  t4241 = -0.2707*t4240;
  t4247 = 0.0016*t1195;
  t4248 = 0. + t4241 + t4247;
  t4270 = -0.0016*t4240;
  t4283 = -0.2707*t1195;
  t4291 = 0. + t4270 + t4283;
  t4346 = 0.0184*t4336;
  t4351 = -0.7055*t969;
  t4352 = 0. + t4346 + t4351;
  t4380 = -0.7055*t4336;
  t4382 = -0.0184*t969;
  t4392 = 0. + t4380 + t4382;
  t4415 = -1.1135*t4402;
  t4418 = 0.0216*t896;
  t4435 = 0. + t4415 + t4418;
  t4444 = -0.0216*t4402;
  t4446 = -1.1135*t896;
  t4449 = 0. + t4444 + t4446;
  t4504 = 0.135*t4065;
  t4508 = 0.049*t35;
  t4518 = 0. + t4504 + t4508;
  t4584 = -0.09*t4194;
  t4593 = 0.049*t1576;
  t4595 = 0. + t4584 + t4593;
  p_output1[0]=0. + t35;
  p_output1[1]=0. - 1.*t255*t392;
  p_output1[2]=0. - 1.*t392*t678;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t2179 + 0.766044*t2318;
  p_output1[5]=0. + 0.642788*t3156 + 0.766044*t3209;
  p_output1[6]=0. + 0.642788*t3793 + 0.766044*t3860;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t2179 + 0.642788*t2318;
  p_output1[9]=0. - 0.766044*t3156 + 0.642788*t3209;
  p_output1[10]=0. - 0.766044*t3793 + 0.642788*t3860;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 + 0.0306*t2179 - 1.1312*t2318 + 0.004500000000000004*t35 - 0.049*t4065 + t1262*t392*t4148 + t392*t4219 - 1.*t1576*t392*t4233 + t1607*t4248 + t1769*t4291 + t1818*t4352 + t2003*t4392 + t2016*t4435 + t2156*t4449;
  p_output1[13]=0. + 0.135*(1. - 1.*t255) + 0.0306*t3156 - 1.1312*t3209 + 0.1305*t255*t392 + t2381*t4148 + t255*t35*t4219 + t2675*t4233 + t2711*t4248 + t2868*t4291 + t2898*t4352 + t2934*t4392 + t2975*t4435 + t3116*t4449 + t255*t4518 - 1.*t4595*t678;
  p_output1[14]=0.07996 + 0.0306*t3793 - 1.1312*t3860 + t3307*t4148 + t3384*t4233 + t3445*t4248 + t3513*t4291 + t3548*t4352 + t3598*t4392 + t3623*t4435 + t3690*t4449 + t255*t4595 - 0.135*t678 + 0.1305*t392*t678 + t35*t4219*t678 + t4518*t678;
  p_output1[15]=1.;
}



void H_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
