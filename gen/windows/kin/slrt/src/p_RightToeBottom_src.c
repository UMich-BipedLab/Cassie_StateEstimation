/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:20:45 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeBottom_src.h"

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
  double t502;
  double t1510;
  double t1645;
  double t1611;
  double t1646;
  double t733;
  double t738;
  double t953;
  double t1018;
  double t1419;
  double t1632;
  double t1647;
  double t1658;
  double t1722;
  double t2161;
  double t2180;
  double t2352;
  double t554;
  double t2533;
  double t2569;
  double t2593;
  double t2650;
  double t2705;
  double t2829;
  double t2898;
  double t2986;
  double t2998;
  double t3047;
  double t3389;
  double t3399;
  double t3430;
  double t3469;
  double t3583;
  double t3648;
  double t3677;
  double t3774;
  double t3797;
  double t3854;
  double t4042;
  double t4058;
  double t4084;
  double t4086;
  double t4089;
  double t4181;
  double t4201;
  double t4233;
  double t4234;
  double t4241;
  double t4304;
  double t4322;
  double t4326;
  double t4331;
  double t4339;
  double t4345;
  double t4351;
  double t4397;
  double t4413;
  double t4421;
  double t4457;
  double t4465;
  double t4467;
  double t4469;
  double t4471;
  double t4473;
  double t4481;
  double t4487;
  double t4489;
  double t4491;
  double t4510;
  double t4518;
  double t4520;
  double t1017;
  double t1019;
  double t1027;
  double t1504;
  double t1509;
  double t1909;
  double t2088;
  double t2093;
  double t2132;
  double t2465;
  double t2518;
  double t2530;
  double t4552;
  double t4553;
  double t4554;
  double t4560;
  double t4574;
  double t4575;
  double t2836;
  double t2962;
  double t2978;
  double t4681;
  double t4697;
  double t4705;
  double t3311;
  double t3352;
  double t3374;
  double t3666;
  double t3696;
  double t3706;
  double t4757;
  double t4765;
  double t4797;
  double t4898;
  double t4908;
  double t4914;
  double t3965;
  double t3978;
  double t4016;
  double t4187;
  double t4214;
  double t4220;
  double t4954;
  double t4967;
  double t4968;
  double t4994;
  double t5018;
  double t5020;
  double t4276;
  double t4279;
  double t4302;
  double t4350;
  double t4353;
  double t4376;
  double t5075;
  double t5076;
  double t5096;
  double t5137;
  double t5142;
  double t5144;
  double t4443;
  double t4447;
  double t4448;
  double t4480;
  double t4484;
  double t4486;
  double t5151;
  double t5162;
  double t5187;
  double t5198;
  double t5201;
  double t5233;
  double t4498;
  double t4499;
  double t4506;
  double t5268;
  double t5287;
  double t5293;
  double t5302;
  double t5319;
  double t5324;
  double t5470;
  double t5489;
  double t5497;
  double t5508;
  double t5522;
  double t5536;
  double t5578;
  double t5579;
  double t5580;
  double t5588;
  double t5591;
  double t5595;
  double t5603;
  double t5604;
  double t5607;
  double t5613;
  double t5618;
  double t5619;
  double t5640;
  double t5646;
  double t5650;
  double t5654;
  double t5658;
  double t5661;
  double t5666;
  double t5674;
  double t5677;
  double t5690;
  double t5707;
  double t5717;
  double t5724;
  double t5733;
  double t5737;
  t502 = Cos(var1[3]);
  t1510 = Cos(var1[5]);
  t1645 = Sin(var1[3]);
  t1611 = Sin(var1[4]);
  t1646 = Sin(var1[5]);
  t733 = Cos(var1[14]);
  t738 = -1.*t733;
  t953 = 1. + t738;
  t1018 = Sin(var1[14]);
  t1419 = Sin(var1[13]);
  t1632 = t502*t1510*t1611;
  t1647 = t1645*t1646;
  t1658 = t1632 + t1647;
  t1722 = Cos(var1[13]);
  t2161 = -1.*t1510*t1645;
  t2180 = t502*t1611*t1646;
  t2352 = t2161 + t2180;
  t554 = Cos(var1[4]);
  t2533 = t1419*t1658;
  t2569 = t1722*t2352;
  t2593 = t2533 + t2569;
  t2650 = Cos(var1[15]);
  t2705 = -1.*t2650;
  t2829 = 1. + t2705;
  t2898 = Sin(var1[15]);
  t2986 = t1722*t1658;
  t2998 = -1.*t1419*t2352;
  t3047 = t2986 + t2998;
  t3389 = t733*t502*t554;
  t3399 = t1018*t2593;
  t3430 = t3389 + t3399;
  t3469 = Cos(var1[16]);
  t3583 = -1.*t3469;
  t3648 = 1. + t3583;
  t3677 = Sin(var1[16]);
  t3774 = t2898*t3047;
  t3797 = t2650*t3430;
  t3854 = t3774 + t3797;
  t4042 = t2650*t3047;
  t4058 = -1.*t2898*t3430;
  t4084 = t4042 + t4058;
  t4086 = Cos(var1[17]);
  t4089 = -1.*t4086;
  t4181 = 1. + t4089;
  t4201 = Sin(var1[17]);
  t4233 = -1.*t3677*t3854;
  t4234 = t3469*t4084;
  t4241 = t4233 + t4234;
  t4304 = t3469*t3854;
  t4322 = t3677*t4084;
  t4326 = t4304 + t4322;
  t4331 = Cos(var1[18]);
  t4339 = -1.*t4331;
  t4345 = 1. + t4339;
  t4351 = Sin(var1[18]);
  t4397 = t4201*t4241;
  t4413 = t4086*t4326;
  t4421 = t4397 + t4413;
  t4457 = t4086*t4241;
  t4465 = -1.*t4201*t4326;
  t4467 = t4457 + t4465;
  t4469 = Cos(var1[19]);
  t4471 = -1.*t4469;
  t4473 = 1. + t4471;
  t4481 = Sin(var1[19]);
  t4487 = -1.*t4351*t4421;
  t4489 = t4331*t4467;
  t4491 = t4487 + t4489;
  t4510 = t4331*t4421;
  t4518 = t4351*t4467;
  t4520 = t4510 + t4518;
  t1017 = -0.049*t953;
  t1019 = -0.135*t1018;
  t1027 = 0. + t1017 + t1019;
  t1504 = 0.135*t1419;
  t1509 = 0. + t1504;
  t1909 = -1.*t1722;
  t2088 = 1. + t1909;
  t2093 = -0.135*t2088;
  t2132 = 0. + t2093;
  t2465 = -0.135*t953;
  t2518 = 0.049*t1018;
  t2530 = 0. + t2465 + t2518;
  t4552 = t1510*t1645*t1611;
  t4553 = -1.*t502*t1646;
  t4554 = t4552 + t4553;
  t4560 = t502*t1510;
  t4574 = t1645*t1611*t1646;
  t4575 = t4560 + t4574;
  t2836 = -0.09*t2829;
  t2962 = 0.049*t2898;
  t2978 = 0. + t2836 + t2962;
  t4681 = t1419*t4554;
  t4697 = t1722*t4575;
  t4705 = t4681 + t4697;
  t3311 = -0.049*t2829;
  t3352 = -0.09*t2898;
  t3374 = 0. + t3311 + t3352;
  t3666 = -0.049*t3648;
  t3696 = -0.21*t3677;
  t3706 = 0. + t3666 + t3696;
  t4757 = t1722*t4554;
  t4765 = -1.*t1419*t4575;
  t4797 = t4757 + t4765;
  t4898 = t733*t554*t1645;
  t4908 = t1018*t4705;
  t4914 = t4898 + t4908;
  t3965 = -0.21*t3648;
  t3978 = 0.049*t3677;
  t4016 = 0. + t3965 + t3978;
  t4187 = -0.2707*t4181;
  t4214 = 0.0016*t4201;
  t4220 = 0. + t4187 + t4214;
  t4954 = t2898*t4797;
  t4967 = t2650*t4914;
  t4968 = t4954 + t4967;
  t4994 = t2650*t4797;
  t5018 = -1.*t2898*t4914;
  t5020 = t4994 + t5018;
  t4276 = -0.0016*t4181;
  t4279 = -0.2707*t4201;
  t4302 = 0. + t4276 + t4279;
  t4350 = 0.0184*t4345;
  t4353 = -0.7055*t4351;
  t4376 = 0. + t4350 + t4353;
  t5075 = -1.*t3677*t4968;
  t5076 = t3469*t5020;
  t5096 = t5075 + t5076;
  t5137 = t3469*t4968;
  t5142 = t3677*t5020;
  t5144 = t5137 + t5142;
  t4443 = -0.7055*t4345;
  t4447 = -0.0184*t4351;
  t4448 = 0. + t4443 + t4447;
  t4480 = -1.1135*t4473;
  t4484 = 0.0216*t4481;
  t4486 = 0. + t4480 + t4484;
  t5151 = t4201*t5096;
  t5162 = t4086*t5144;
  t5187 = t5151 + t5162;
  t5198 = t4086*t5096;
  t5201 = -1.*t4201*t5144;
  t5233 = t5198 + t5201;
  t4498 = -0.0216*t4473;
  t4499 = -1.1135*t4481;
  t4506 = 0. + t4498 + t4499;
  t5268 = -1.*t4351*t5187;
  t5287 = t4331*t5233;
  t5293 = t5268 + t5287;
  t5302 = t4331*t5187;
  t5319 = t4351*t5233;
  t5324 = t5302 + t5319;
  t5470 = t554*t1510*t1419;
  t5489 = t1722*t554*t1646;
  t5497 = t5470 + t5489;
  t5508 = t1722*t554*t1510;
  t5522 = -1.*t554*t1419*t1646;
  t5536 = t5508 + t5522;
  t5578 = -1.*t733*t1611;
  t5579 = t1018*t5497;
  t5580 = t5578 + t5579;
  t5588 = t2898*t5536;
  t5591 = t2650*t5580;
  t5595 = t5588 + t5591;
  t5603 = t2650*t5536;
  t5604 = -1.*t2898*t5580;
  t5607 = t5603 + t5604;
  t5613 = -1.*t3677*t5595;
  t5618 = t3469*t5607;
  t5619 = t5613 + t5618;
  t5640 = t3469*t5595;
  t5646 = t3677*t5607;
  t5650 = t5640 + t5646;
  t5654 = t4201*t5619;
  t5658 = t4086*t5650;
  t5661 = t5654 + t5658;
  t5666 = t4086*t5619;
  t5674 = -1.*t4201*t5650;
  t5677 = t5666 + t5674;
  t5690 = -1.*t4351*t5661;
  t5707 = t4331*t5677;
  t5717 = t5690 + t5707;
  t5724 = t4331*t5661;
  t5733 = t4351*t5677;
  t5737 = t5724 + t5733;
  p_output1[0]=0. + t1509*t1658 + t2132*t2352 + t2530*t2593 + t2978*t3047 + t3374*t3430 + t3706*t3854 + t4016*t4084 + t4220*t4241 + t4302*t4326 + t4376*t4421 + t4448*t4467 + t4486*t4491 + t4506*t4520 + 0.0306*(t4481*t4491 + t4469*t4520) - 1.1312*(t4469*t4491 - 1.*t4481*t4520) + t1027*t502*t554 - 0.1305*(-1.*t1018*t502*t554 + t2593*t733) + var1[0];
  p_output1[1]=0. + t1509*t4554 + t2132*t4575 + t2530*t4705 + t2978*t4797 + t3374*t4914 + t3706*t4968 + t4016*t5020 + t4220*t5096 + t4302*t5144 + t4376*t5187 + t4448*t5233 + t4486*t5293 + t4506*t5324 + 0.0306*(t4481*t5293 + t4469*t5324) - 1.1312*(t4469*t5293 - 1.*t4481*t5324) + t1027*t1645*t554 - 0.1305*(-1.*t1018*t1645*t554 + t4705*t733) + var1[1];
  p_output1[2]=0. - 1.*t1027*t1611 + t2530*t5497 + t2978*t5536 + t1509*t1510*t554 + t1646*t2132*t554 + t3374*t5580 + t3706*t5595 + t4016*t5607 + t4220*t5619 + t4302*t5650 + t4376*t5661 + t4448*t5677 + t4486*t5717 + t4506*t5737 + 0.0306*(t4481*t5717 + t4469*t5737) - 1.1312*(t4469*t5717 - 1.*t4481*t5737) - 0.1305*(t1018*t1611 + t5497*t733) + var1[2];
}



void p_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
