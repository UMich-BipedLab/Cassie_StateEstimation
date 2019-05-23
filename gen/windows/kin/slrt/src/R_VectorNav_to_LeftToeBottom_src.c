/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:11:14 GMT-04:00
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
  double t358;
  double t1801;
  double t1746;
  double t1769;
  double t1811;
  double t2084;
  double t1780;
  double t1855;
  double t1924;
  double t1353;
  double t2104;
  double t2185;
  double t2290;
  double t2374;
  double t2064;
  double t2302;
  double t2307;
  double t1174;
  double t2459;
  double t2473;
  double t2492;
  double t2535;
  double t2331;
  double t2500;
  double t2503;
  double t875;
  double t2663;
  double t2671;
  double t2682;
  double t328;
  double t76;
  double t631;
  double t2942;
  double t2975;
  double t2985;
  double t3050;
  double t3172;
  double t3194;
  double t3020;
  double t3208;
  double t3230;
  double t3345;
  double t3398;
  double t3424;
  double t3315;
  double t3448;
  double t3468;
  double t3567;
  double t3579;
  double t3580;
  double t3517;
  double t3652;
  double t3675;
  double t3799;
  double t3837;
  double t3871;
  double t4074;
  double t4078;
  double t4082;
  double t4151;
  double t4227;
  double t4229;
  double t4143;
  double t4236;
  double t4240;
  double t4285;
  double t4338;
  double t4339;
  double t4270;
  double t4348;
  double t4358;
  double t4378;
  double t4381;
  double t4389;
  double t4363;
  double t4390;
  double t4402;
  double t4410;
  double t4411;
  double t4418;
  double t2507;
  double t2711;
  double t2830;
  double t2879;
  double t2896;
  double t2924;
  double t3748;
  double t3886;
  double t3906;
  double t3911;
  double t3957;
  double t3974;
  double t4403;
  double t4425;
  double t4429;
  double t4442;
  double t4451;
  double t4486;
  t358 = Cos(var1[1]);
  t1801 = Cos(var1[3]);
  t1746 = Cos(var1[2]);
  t1769 = Sin(var1[3]);
  t1811 = Sin(var1[2]);
  t2084 = Cos(var1[4]);
  t1780 = -1.*t358*t1746*t1769;
  t1855 = -1.*t1801*t358*t1811;
  t1924 = t1780 + t1855;
  t1353 = Sin(var1[4]);
  t2104 = t1801*t358*t1746;
  t2185 = -1.*t358*t1769*t1811;
  t2290 = t2104 + t2185;
  t2374 = Cos(var1[5]);
  t2064 = t1353*t1924;
  t2302 = t2084*t2290;
  t2307 = t2064 + t2302;
  t1174 = Sin(var1[5]);
  t2459 = t2084*t1924;
  t2473 = -1.*t1353*t2290;
  t2492 = t2459 + t2473;
  t2535 = Cos(var1[6]);
  t2331 = -1.*t1174*t2307;
  t2500 = t2374*t2492;
  t2503 = t2331 + t2500;
  t875 = Sin(var1[6]);
  t2663 = t2374*t2307;
  t2671 = t1174*t2492;
  t2682 = t2663 + t2671;
  t328 = Cos(var1[0]);
  t76 = Sin(var1[1]);
  t631 = Sin(var1[0]);
  t2942 = t328*t1746*t76;
  t2975 = -1.*t631*t1811;
  t2985 = t2942 + t2975;
  t3050 = -1.*t1746*t631;
  t3172 = -1.*t328*t76*t1811;
  t3194 = t3050 + t3172;
  t3020 = -1.*t1769*t2985;
  t3208 = t1801*t3194;
  t3230 = t3020 + t3208;
  t3345 = t1801*t2985;
  t3398 = t1769*t3194;
  t3424 = t3345 + t3398;
  t3315 = t1353*t3230;
  t3448 = t2084*t3424;
  t3468 = t3315 + t3448;
  t3567 = t2084*t3230;
  t3579 = -1.*t1353*t3424;
  t3580 = t3567 + t3579;
  t3517 = -1.*t1174*t3468;
  t3652 = t2374*t3580;
  t3675 = t3517 + t3652;
  t3799 = t2374*t3468;
  t3837 = t1174*t3580;
  t3871 = t3799 + t3837;
  t4074 = t1746*t631*t76;
  t4078 = t328*t1811;
  t4082 = t4074 + t4078;
  t4151 = t328*t1746;
  t4227 = -1.*t631*t76*t1811;
  t4229 = t4151 + t4227;
  t4143 = -1.*t1769*t4082;
  t4236 = t1801*t4229;
  t4240 = t4143 + t4236;
  t4285 = t1801*t4082;
  t4338 = t1769*t4229;
  t4339 = t4285 + t4338;
  t4270 = t1353*t4240;
  t4348 = t2084*t4339;
  t4358 = t4270 + t4348;
  t4378 = t2084*t4240;
  t4381 = -1.*t1353*t4339;
  t4389 = t4378 + t4381;
  t4363 = -1.*t1174*t4358;
  t4390 = t2374*t4389;
  t4402 = t4363 + t4390;
  t4410 = t2374*t4358;
  t4411 = t1174*t4389;
  t4418 = t4410 + t4411;
  t2507 = t875*t2503;
  t2711 = t2535*t2682;
  t2830 = t2507 + t2711;
  t2879 = t2535*t2503;
  t2896 = -1.*t875*t2682;
  t2924 = t2879 + t2896;
  t3748 = t875*t3675;
  t3886 = t2535*t3871;
  t3906 = t3748 + t3886;
  t3911 = t2535*t3675;
  t3957 = -1.*t875*t3871;
  t3974 = t3911 + t3957;
  t4403 = t875*t4402;
  t4425 = t2535*t4418;
  t4429 = t4403 + t4425;
  t4442 = t2535*t4402;
  t4451 = -1.*t875*t4418;
  t4486 = t4442 + t4451;
  p_output1[0]=0. + t76;
  p_output1[1]=0. - 1.*t328*t358;
  p_output1[2]=0. - 1.*t358*t631;
  p_output1[3]=0. + 0.642788*t2830 + 0.766044*t2924;
  p_output1[4]=0. + 0.642788*t3906 + 0.766044*t3974;
  p_output1[5]=0. + 0.642788*t4429 + 0.766044*t4486;
  p_output1[6]=0. - 0.766044*t2830 + 0.642788*t2924;
  p_output1[7]=0. - 0.766044*t3906 + 0.642788*t3974;
  p_output1[8]=0. - 0.766044*t4429 + 0.642788*t4486;
}



void R_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
