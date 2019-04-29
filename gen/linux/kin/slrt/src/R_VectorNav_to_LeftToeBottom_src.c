/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:02:11 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_LeftToeBottom_src.h"

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
  double t613;
  double t2112;
  double t1667;
  double t1716;
  double t2335;
  double t2687;
  double t1850;
  double t2341;
  double t2366;
  double t1523;
  double t2766;
  double t2818;
  double t2873;
  double t2950;
  double t2375;
  double t2900;
  double t2934;
  double t1496;
  double t2975;
  double t2997;
  double t3022;
  double t3250;
  double t2937;
  double t3158;
  double t3163;
  double t1372;
  double t3272;
  double t3302;
  double t3331;
  double t564;
  double t144;
  double t919;
  double t3793;
  double t3821;
  double t3822;
  double t3967;
  double t3989;
  double t3999;
  double t3930;
  double t4005;
  double t4015;
  double t4129;
  double t4153;
  double t4211;
  double t4049;
  double t4215;
  double t4219;
  double t4241;
  double t4257;
  double t4267;
  double t4220;
  double t4270;
  double t4272;
  double t4291;
  double t4329;
  double t4352;
  double t4479;
  double t4480;
  double t4481;
  double t4496;
  double t4504;
  double t4506;
  double t4489;
  double t4518;
  double t4527;
  double t4593;
  double t4608;
  double t4617;
  double t4584;
  double t4620;
  double t4636;
  double t4642;
  double t4643;
  double t4677;
  double t4640;
  double t4679;
  double t4685;
  double t4700;
  double t4711;
  double t4713;
  double t3209;
  double t3405;
  double t3570;
  double t3623;
  double t3625;
  double t3637;
  double t4283;
  double t4380;
  double t4382;
  double t4415;
  double t4443;
  double t4444;
  double t4691;
  double t4721;
  double t4738;
  double t4742;
  double t4748;
  double t4754;
  t613 = Cos(var1[1]);
  t2112 = Cos(var1[3]);
  t1667 = Cos(var1[2]);
  t1716 = Sin(var1[3]);
  t2335 = Sin(var1[2]);
  t2687 = Cos(var1[4]);
  t1850 = -1.*t613*t1667*t1716;
  t2341 = -1.*t2112*t613*t2335;
  t2366 = t1850 + t2341;
  t1523 = Sin(var1[4]);
  t2766 = t2112*t613*t1667;
  t2818 = -1.*t613*t1716*t2335;
  t2873 = t2766 + t2818;
  t2950 = Cos(var1[5]);
  t2375 = t1523*t2366;
  t2900 = t2687*t2873;
  t2934 = t2375 + t2900;
  t1496 = Sin(var1[5]);
  t2975 = t2687*t2366;
  t2997 = -1.*t1523*t2873;
  t3022 = t2975 + t2997;
  t3250 = Cos(var1[6]);
  t2937 = -1.*t1496*t2934;
  t3158 = t2950*t3022;
  t3163 = t2937 + t3158;
  t1372 = Sin(var1[6]);
  t3272 = t2950*t2934;
  t3302 = t1496*t3022;
  t3331 = t3272 + t3302;
  t564 = Cos(var1[0]);
  t144 = Sin(var1[1]);
  t919 = Sin(var1[0]);
  t3793 = t564*t1667*t144;
  t3821 = -1.*t919*t2335;
  t3822 = t3793 + t3821;
  t3967 = -1.*t1667*t919;
  t3989 = -1.*t564*t144*t2335;
  t3999 = t3967 + t3989;
  t3930 = -1.*t1716*t3822;
  t4005 = t2112*t3999;
  t4015 = t3930 + t4005;
  t4129 = t2112*t3822;
  t4153 = t1716*t3999;
  t4211 = t4129 + t4153;
  t4049 = t1523*t4015;
  t4215 = t2687*t4211;
  t4219 = t4049 + t4215;
  t4241 = t2687*t4015;
  t4257 = -1.*t1523*t4211;
  t4267 = t4241 + t4257;
  t4220 = -1.*t1496*t4219;
  t4270 = t2950*t4267;
  t4272 = t4220 + t4270;
  t4291 = t2950*t4219;
  t4329 = t1496*t4267;
  t4352 = t4291 + t4329;
  t4479 = t1667*t919*t144;
  t4480 = t564*t2335;
  t4481 = t4479 + t4480;
  t4496 = t564*t1667;
  t4504 = -1.*t919*t144*t2335;
  t4506 = t4496 + t4504;
  t4489 = -1.*t1716*t4481;
  t4518 = t2112*t4506;
  t4527 = t4489 + t4518;
  t4593 = t2112*t4481;
  t4608 = t1716*t4506;
  t4617 = t4593 + t4608;
  t4584 = t1523*t4527;
  t4620 = t2687*t4617;
  t4636 = t4584 + t4620;
  t4642 = t2687*t4527;
  t4643 = -1.*t1523*t4617;
  t4677 = t4642 + t4643;
  t4640 = -1.*t1496*t4636;
  t4679 = t2950*t4677;
  t4685 = t4640 + t4679;
  t4700 = t2950*t4636;
  t4711 = t1496*t4677;
  t4713 = t4700 + t4711;
  t3209 = t1372*t3163;
  t3405 = t3250*t3331;
  t3570 = t3209 + t3405;
  t3623 = t3250*t3163;
  t3625 = -1.*t1372*t3331;
  t3637 = t3623 + t3625;
  t4283 = t1372*t4272;
  t4380 = t3250*t4352;
  t4382 = t4283 + t4380;
  t4415 = t3250*t4272;
  t4443 = -1.*t1372*t4352;
  t4444 = t4415 + t4443;
  t4691 = t1372*t4685;
  t4721 = t3250*t4713;
  t4738 = t4691 + t4721;
  t4742 = t3250*t4685;
  t4748 = -1.*t1372*t4713;
  t4754 = t4742 + t4748;
  p_output1[0]=0. + t144;
  p_output1[1]=0. - 1.*t564*t613;
  p_output1[2]=0. - 1.*t613*t919;
  p_output1[3]=0. + 0.642788*t3570 + 0.766044*t3637;
  p_output1[4]=0. + 0.642788*t4382 + 0.766044*t4444;
  p_output1[5]=0. + 0.642788*t4738 + 0.766044*t4754;
  p_output1[6]=0. - 0.766044*t3570 + 0.642788*t3637;
  p_output1[7]=0. - 0.766044*t4382 + 0.642788*t4444;
  p_output1[8]=0. - 0.766044*t4738 + 0.642788*t4754;
}



void R_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
