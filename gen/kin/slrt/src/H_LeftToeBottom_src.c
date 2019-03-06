/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:51 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeBottom_src.h"

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
  double t400;
  double t354;
  double t401;
  double t384;
  double t428;
  double t6;
  double t311;
  double t587;
  double t649;
  double t704;
  double t386;
  double t438;
  double t478;
  double t554;
  double t571;
  double t573;
  double t581;
  double t589;
  double t628;
  double t1334;
  double t1489;
  double t1563;
  double t1565;
  double t1352;
  double t1392;
  double t1423;
  double t1586;
  double t1677;
  double t1444;
  double t1591;
  double t1651;
  double t1279;
  double t1695;
  double t1714;
  double t1722;
  double t1789;
  double t1661;
  double t1732;
  double t1754;
  double t1261;
  double t1794;
  double t1813;
  double t1886;
  double t1979;
  double t1788;
  double t1890;
  double t1932;
  double t1256;
  double t1995;
  double t2006;
  double t2105;
  double t2232;
  double t1946;
  double t2150;
  double t2166;
  double t1244;
  double t2235;
  double t2259;
  double t2289;
  double t767;
  double t800;
  double t813;
  double t850;
  double t873;
  double t875;
  double t904;
  double t905;
  double t939;
  double t2643;
  double t2702;
  double t2715;
  double t2537;
  double t2576;
  double t2585;
  double t2616;
  double t2723;
  double t2728;
  double t2758;
  double t2800;
  double t2828;
  double t2756;
  double t2874;
  double t2941;
  double t3021;
  double t3042;
  double t3045;
  double t2992;
  double t3063;
  double t3070;
  double t3175;
  double t3207;
  double t3210;
  double t3101;
  double t3229;
  double t3274;
  double t3285;
  double t3287;
  double t3310;
  double t1052;
  double t1060;
  double t1199;
  double t3436;
  double t3437;
  double t3457;
  double t3399;
  double t3401;
  double t3417;
  double t3420;
  double t3481;
  double t3526;
  double t3545;
  double t3563;
  double t3621;
  double t3539;
  double t3629;
  double t3643;
  double t3703;
  double t3711;
  double t3730;
  double t3647;
  double t3741;
  double t3742;
  double t3758;
  double t3765;
  double t3773;
  double t3746;
  double t3808;
  double t3815;
  double t3855;
  double t3856;
  double t3862;
  double t2216;
  double t2316;
  double t2321;
  double t2327;
  double t2410;
  double t2416;
  double t3277;
  double t3317;
  double t3340;
  double t3362;
  double t3364;
  double t3366;
  double t3820;
  double t3882;
  double t3901;
  double t3933;
  double t3978;
  double t3982;
  double t4453;
  double t4479;
  double t4659;
  double t4726;
  double t4882;
  double t4911;
  double t5135;
  double t5147;
  double t5320;
  double t5373;
  double t5499;
  double t5509;
  double t4274;
  double t4285;
  double t4318;
  double t4357;
  double t4368;
  double t4382;
  double t4518;
  double t4521;
  double t4543;
  double t4553;
  double t4555;
  double t4575;
  double t4733;
  double t4754;
  double t4775;
  double t4787;
  double t4793;
  double t4798;
  double t4943;
  double t4968;
  double t5001;
  double t5046;
  double t5089;
  double t5100;
  double t5157;
  double t5169;
  double t5203;
  double t5250;
  double t5275;
  double t5308;
  double t5377;
  double t5410;
  double t5432;
  double t5462;
  double t5468;
  double t5474;
  double t5514;
  double t5515;
  double t5539;
  double t5547;
  double t5556;
  double t5583;
  t400 = Cos(var1[3]);
  t354 = Cos(var1[5]);
  t401 = Sin(var1[4]);
  t384 = Sin(var1[3]);
  t428 = Sin(var1[5]);
  t6 = Cos(var1[7]);
  t311 = Cos(var1[6]);
  t587 = Sin(var1[6]);
  t649 = Cos(var1[4]);
  t704 = Sin(var1[7]);
  t386 = -1.*t354*t384;
  t438 = t400*t401*t428;
  t478 = t386 + t438;
  t554 = t311*t478;
  t571 = t400*t354*t401;
  t573 = t384*t428;
  t581 = t571 + t573;
  t589 = t581*t587;
  t628 = t554 + t589;
  t1334 = Cos(var1[8]);
  t1489 = t311*t581;
  t1563 = -1.*t478*t587;
  t1565 = t1489 + t1563;
  t1352 = t400*t649*t6;
  t1392 = t628*t704;
  t1423 = t1352 + t1392;
  t1586 = Sin(var1[8]);
  t1677 = Cos(var1[9]);
  t1444 = t1334*t1423;
  t1591 = t1565*t1586;
  t1651 = t1444 + t1591;
  t1279 = Sin(var1[9]);
  t1695 = t1334*t1565;
  t1714 = -1.*t1423*t1586;
  t1722 = t1695 + t1714;
  t1789 = Cos(var1[10]);
  t1661 = -1.*t1279*t1651;
  t1732 = t1677*t1722;
  t1754 = t1661 + t1732;
  t1261 = Sin(var1[10]);
  t1794 = t1677*t1651;
  t1813 = t1279*t1722;
  t1886 = t1794 + t1813;
  t1979 = Cos(var1[11]);
  t1788 = t1261*t1754;
  t1890 = t1789*t1886;
  t1932 = t1788 + t1890;
  t1256 = Sin(var1[11]);
  t1995 = t1789*t1754;
  t2006 = -1.*t1261*t1886;
  t2105 = t1995 + t2006;
  t2232 = Cos(var1[12]);
  t1946 = -1.*t1256*t1932;
  t2150 = t1979*t2105;
  t2166 = t1946 + t2150;
  t1244 = Sin(var1[12]);
  t2235 = t1979*t1932;
  t2259 = t1256*t2105;
  t2289 = t2235 + t2259;
  t767 = t400*t354;
  t800 = t384*t401*t428;
  t813 = t767 + t800;
  t850 = t311*t813;
  t873 = t354*t384*t401;
  t875 = -1.*t400*t428;
  t904 = t873 + t875;
  t905 = t904*t587;
  t939 = t850 + t905;
  t2643 = t311*t904;
  t2702 = -1.*t813*t587;
  t2715 = t2643 + t2702;
  t2537 = t649*t6*t384;
  t2576 = t939*t704;
  t2585 = t2537 + t2576;
  t2616 = t1334*t2585;
  t2723 = t2715*t1586;
  t2728 = t2616 + t2723;
  t2758 = t1334*t2715;
  t2800 = -1.*t2585*t1586;
  t2828 = t2758 + t2800;
  t2756 = -1.*t1279*t2728;
  t2874 = t1677*t2828;
  t2941 = t2756 + t2874;
  t3021 = t1677*t2728;
  t3042 = t1279*t2828;
  t3045 = t3021 + t3042;
  t2992 = t1261*t2941;
  t3063 = t1789*t3045;
  t3070 = t2992 + t3063;
  t3175 = t1789*t2941;
  t3207 = -1.*t1261*t3045;
  t3210 = t3175 + t3207;
  t3101 = -1.*t1256*t3070;
  t3229 = t1979*t3210;
  t3274 = t3101 + t3229;
  t3285 = t1979*t3070;
  t3287 = t1256*t3210;
  t3310 = t3285 + t3287;
  t1052 = t649*t311*t428;
  t1060 = t649*t354*t587;
  t1199 = t1052 + t1060;
  t3436 = t649*t354*t311;
  t3437 = -1.*t649*t428*t587;
  t3457 = t3436 + t3437;
  t3399 = -1.*t6*t401;
  t3401 = t1199*t704;
  t3417 = t3399 + t3401;
  t3420 = t1334*t3417;
  t3481 = t3457*t1586;
  t3526 = t3420 + t3481;
  t3545 = t1334*t3457;
  t3563 = -1.*t3417*t1586;
  t3621 = t3545 + t3563;
  t3539 = -1.*t1279*t3526;
  t3629 = t1677*t3621;
  t3643 = t3539 + t3629;
  t3703 = t1677*t3526;
  t3711 = t1279*t3621;
  t3730 = t3703 + t3711;
  t3647 = t1261*t3643;
  t3741 = t1789*t3730;
  t3742 = t3647 + t3741;
  t3758 = t1789*t3643;
  t3765 = -1.*t1261*t3730;
  t3773 = t3758 + t3765;
  t3746 = -1.*t1256*t3742;
  t3808 = t1979*t3773;
  t3815 = t3746 + t3808;
  t3855 = t1979*t3742;
  t3856 = t1256*t3773;
  t3862 = t3855 + t3856;
  t2216 = t1244*t2166;
  t2316 = t2232*t2289;
  t2321 = t2216 + t2316;
  t2327 = t2232*t2166;
  t2410 = -1.*t1244*t2289;
  t2416 = t2327 + t2410;
  t3277 = t1244*t3274;
  t3317 = t2232*t3310;
  t3340 = t3277 + t3317;
  t3362 = t2232*t3274;
  t3364 = -1.*t1244*t3310;
  t3366 = t3362 + t3364;
  t3820 = t1244*t3815;
  t3882 = t2232*t3862;
  t3901 = t3820 + t3882;
  t3933 = t2232*t3815;
  t3978 = -1.*t1244*t3862;
  t3982 = t3933 + t3978;
  t4453 = -1.*t6;
  t4479 = 1. + t4453;
  t4659 = -1.*t1334;
  t4726 = 1. + t4659;
  t4882 = -1.*t1677;
  t4911 = 1. + t4882;
  t5135 = -1.*t1789;
  t5147 = 1. + t5135;
  t5320 = -1.*t1979;
  t5373 = 1. + t5320;
  t5499 = -1.*t2232;
  t5509 = 1. + t5499;
  t4274 = -1.*t311;
  t4285 = 1. + t4274;
  t4318 = 0.135*t4285;
  t4357 = 0. + t4318;
  t4368 = -0.135*t587;
  t4382 = 0. + t4368;
  t4518 = 0.135*t4479;
  t4521 = 0.049*t704;
  t4543 = 0. + t4518 + t4521;
  t4553 = -0.049*t4479;
  t4555 = 0.135*t704;
  t4575 = 0. + t4553 + t4555;
  t4733 = -0.049*t4726;
  t4754 = -0.09*t1586;
  t4775 = 0. + t4733 + t4754;
  t4787 = -0.09*t4726;
  t4793 = 0.049*t1586;
  t4798 = 0. + t4787 + t4793;
  t4943 = -0.049*t4911;
  t4968 = -0.21*t1279;
  t5001 = 0. + t4943 + t4968;
  t5046 = -0.21*t4911;
  t5089 = 0.049*t1279;
  t5100 = 0. + t5046 + t5089;
  t5157 = -0.2707*t5147;
  t5169 = 0.0016*t1261;
  t5203 = 0. + t5157 + t5169;
  t5250 = -0.0016*t5147;
  t5275 = -0.2707*t1261;
  t5308 = 0. + t5250 + t5275;
  t5377 = 0.0184*t5373;
  t5410 = -0.7055*t1256;
  t5432 = 0. + t5377 + t5410;
  t5462 = -0.7055*t5373;
  t5468 = -0.0184*t1256;
  t5474 = 0. + t5462 + t5468;
  t5514 = -1.1135*t5509;
  t5515 = 0.0216*t1244;
  t5539 = 0. + t5514 + t5515;
  t5547 = -0.0216*t5509;
  t5556 = -1.1135*t1244;
  t5583 = 0. + t5547 + t5556;
  p_output1[0]=-1.*t6*t628 + t400*t649*t704;
  p_output1[1]=t384*t649*t704 - 1.*t6*t939;
  p_output1[2]=-1.*t1199*t6 - 1.*t401*t704;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2321 + 0.766044*t2416;
  p_output1[5]=0.642788*t3340 + 0.766044*t3366;
  p_output1[6]=0.642788*t3901 + 0.766044*t3982;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2321 + 0.642788*t2416;
  p_output1[9]=-0.766044*t3340 + 0.642788*t3366;
  p_output1[10]=-0.766044*t3901 + 0.642788*t3982;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t2321 - 1.1312*t2416 + t1423*t4775 + t4357*t478 + t1565*t4798 + t1651*t5001 + t1722*t5100 + t1754*t5203 + t1886*t5308 + t1932*t5432 + t2105*t5474 + t2166*t5539 + t2289*t5583 + t4382*t581 + t4543*t628 + t400*t4575*t649 + 0.1305*(t6*t628 - 1.*t400*t649*t704) + var1[0];
  p_output1[13]=0. + 0.0306*t3340 - 1.1312*t3366 + t2585*t4775 + t2715*t4798 + t2728*t5001 + t2828*t5100 + t2941*t5203 + t3045*t5308 + t3070*t5432 + t3210*t5474 + t3274*t5539 + t3310*t5583 + t384*t4575*t649 + t4357*t813 + t4382*t904 + t4543*t939 + 0.1305*(-1.*t384*t649*t704 + t6*t939) + var1[1];
  p_output1[14]=0. + 0.0306*t3901 - 1.1312*t3982 + t1199*t4543 - 1.*t401*t4575 + t3417*t4775 + t3457*t4798 + t3526*t5001 + t3621*t5100 + t3643*t5203 + t3730*t5308 + t3742*t5432 + t3773*t5474 + t3815*t5539 + t3862*t5583 + t428*t4357*t649 + t354*t4382*t649 + 0.1305*(t1199*t6 + t401*t704) + var1[2];
  p_output1[15]=1.;
}



void H_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
