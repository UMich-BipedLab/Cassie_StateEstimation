/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:08:24 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeFront_src.h"

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
  double t83;
  double t338;
  double t394;
  double t356;
  double t416;
  double t220;
  double t249;
  double t287;
  double t317;
  double t567;
  double t363;
  double t494;
  double t560;
  double t620;
  double t727;
  double t734;
  double t565;
  double t762;
  double t774;
  double t1377;
  double t1297;
  double t1323;
  double t1353;
  double t1287;
  double t1379;
  double t1391;
  double t1392;
  double t1522;
  double t1361;
  double t1431;
  double t1457;
  double t1284;
  double t1533;
  double t1545;
  double t1549;
  double t1592;
  double t1461;
  double t1552;
  double t1559;
  double t1263;
  double t1598;
  double t1603;
  double t1618;
  double t1774;
  double t1588;
  double t1658;
  double t1676;
  double t1259;
  double t1810;
  double t1846;
  double t1861;
  double t1996;
  double t1726;
  double t1878;
  double t1885;
  double t1255;
  double t2001;
  double t2020;
  double t2043;
  double t868;
  double t875;
  double t879;
  double t890;
  double t917;
  double t928;
  double t888;
  double t1059;
  double t1080;
  double t2300;
  double t2305;
  double t2307;
  double t2333;
  double t2335;
  double t2344;
  double t2319;
  double t2347;
  double t2362;
  double t2372;
  double t2389;
  double t2394;
  double t2366;
  double t2405;
  double t2411;
  double t2441;
  double t2539;
  double t2544;
  double t2413;
  double t2546;
  double t2570;
  double t2583;
  double t2592;
  double t2603;
  double t2571;
  double t2615;
  double t2617;
  double t2645;
  double t2658;
  double t2668;
  double t1132;
  double t1136;
  double t1144;
  double t2785;
  double t2788;
  double t2804;
  double t2826;
  double t2837;
  double t2839;
  double t2819;
  double t2850;
  double t2855;
  double t2868;
  double t2878;
  double t2889;
  double t2866;
  double t2896;
  double t2899;
  double t2910;
  double t2914;
  double t2923;
  double t2908;
  double t2928;
  double t2936;
  double t2938;
  double t2941;
  double t2942;
  double t2937;
  double t2943;
  double t2959;
  double t2985;
  double t3007;
  double t3038;
  double t1950;
  double t2048;
  double t2071;
  double t2243;
  double t2252;
  double t2261;
  double t2626;
  double t2694;
  double t2700;
  double t2716;
  double t2727;
  double t2729;
  double t2970;
  double t3045;
  double t3103;
  double t3121;
  double t3134;
  double t3157;
  double t3408;
  double t3445;
  double t3599;
  double t3610;
  double t3822;
  double t3829;
  double t3890;
  double t3912;
  double t3979;
  double t3983;
  double t4197;
  double t4215;
  double t3448;
  double t3465;
  double t3472;
  double t3485;
  double t3507;
  double t3535;
  double t3549;
  double t3553;
  double t3556;
  double t3573;
  double t3576;
  double t3581;
  double t3676;
  double t3700;
  double t3715;
  double t3786;
  double t3808;
  double t3812;
  double t3831;
  double t3833;
  double t3838;
  double t3848;
  double t3852;
  double t3879;
  double t3919;
  double t3920;
  double t3925;
  double t3937;
  double t3959;
  double t3964;
  double t3991;
  double t3997;
  double t4023;
  double t4050;
  double t4052;
  double t4121;
  double t4227;
  double t4249;
  double t4254;
  double t4275;
  double t4301;
  double t4338;
  t83 = Cos(var1[3]);
  t338 = Cos(var1[5]);
  t394 = Sin(var1[3]);
  t356 = Sin(var1[4]);
  t416 = Sin(var1[5]);
  t220 = Cos(var1[4]);
  t249 = Sin(var1[14]);
  t287 = Cos(var1[14]);
  t317 = Sin(var1[13]);
  t567 = Cos(var1[13]);
  t363 = t83*t338*t356;
  t494 = t394*t416;
  t560 = t363 + t494;
  t620 = -1.*t338*t394;
  t727 = t83*t356*t416;
  t734 = t620 + t727;
  t565 = t317*t560;
  t762 = t567*t734;
  t774 = t565 + t762;
  t1377 = Cos(var1[15]);
  t1297 = t567*t560;
  t1323 = -1.*t317*t734;
  t1353 = t1297 + t1323;
  t1287 = Sin(var1[15]);
  t1379 = t287*t83*t220;
  t1391 = t249*t774;
  t1392 = t1379 + t1391;
  t1522 = Cos(var1[16]);
  t1361 = t1287*t1353;
  t1431 = t1377*t1392;
  t1457 = t1361 + t1431;
  t1284 = Sin(var1[16]);
  t1533 = t1377*t1353;
  t1545 = -1.*t1287*t1392;
  t1549 = t1533 + t1545;
  t1592 = Cos(var1[17]);
  t1461 = -1.*t1284*t1457;
  t1552 = t1522*t1549;
  t1559 = t1461 + t1552;
  t1263 = Sin(var1[17]);
  t1598 = t1522*t1457;
  t1603 = t1284*t1549;
  t1618 = t1598 + t1603;
  t1774 = Cos(var1[18]);
  t1588 = t1263*t1559;
  t1658 = t1592*t1618;
  t1676 = t1588 + t1658;
  t1259 = Sin(var1[18]);
  t1810 = t1592*t1559;
  t1846 = -1.*t1263*t1618;
  t1861 = t1810 + t1846;
  t1996 = Cos(var1[19]);
  t1726 = -1.*t1259*t1676;
  t1878 = t1774*t1861;
  t1885 = t1726 + t1878;
  t1255 = Sin(var1[19]);
  t2001 = t1774*t1676;
  t2020 = t1259*t1861;
  t2043 = t2001 + t2020;
  t868 = t338*t394*t356;
  t875 = -1.*t83*t416;
  t879 = t868 + t875;
  t890 = t83*t338;
  t917 = t394*t356*t416;
  t928 = t890 + t917;
  t888 = t317*t879;
  t1059 = t567*t928;
  t1080 = t888 + t1059;
  t2300 = t567*t879;
  t2305 = -1.*t317*t928;
  t2307 = t2300 + t2305;
  t2333 = t287*t220*t394;
  t2335 = t249*t1080;
  t2344 = t2333 + t2335;
  t2319 = t1287*t2307;
  t2347 = t1377*t2344;
  t2362 = t2319 + t2347;
  t2372 = t1377*t2307;
  t2389 = -1.*t1287*t2344;
  t2394 = t2372 + t2389;
  t2366 = -1.*t1284*t2362;
  t2405 = t1522*t2394;
  t2411 = t2366 + t2405;
  t2441 = t1522*t2362;
  t2539 = t1284*t2394;
  t2544 = t2441 + t2539;
  t2413 = t1263*t2411;
  t2546 = t1592*t2544;
  t2570 = t2413 + t2546;
  t2583 = t1592*t2411;
  t2592 = -1.*t1263*t2544;
  t2603 = t2583 + t2592;
  t2571 = -1.*t1259*t2570;
  t2615 = t1774*t2603;
  t2617 = t2571 + t2615;
  t2645 = t1774*t2570;
  t2658 = t1259*t2603;
  t2668 = t2645 + t2658;
  t1132 = t220*t338*t317;
  t1136 = t567*t220*t416;
  t1144 = t1132 + t1136;
  t2785 = t567*t220*t338;
  t2788 = -1.*t220*t317*t416;
  t2804 = t2785 + t2788;
  t2826 = -1.*t287*t356;
  t2837 = t249*t1144;
  t2839 = t2826 + t2837;
  t2819 = t1287*t2804;
  t2850 = t1377*t2839;
  t2855 = t2819 + t2850;
  t2868 = t1377*t2804;
  t2878 = -1.*t1287*t2839;
  t2889 = t2868 + t2878;
  t2866 = -1.*t1284*t2855;
  t2896 = t1522*t2889;
  t2899 = t2866 + t2896;
  t2910 = t1522*t2855;
  t2914 = t1284*t2889;
  t2923 = t2910 + t2914;
  t2908 = t1263*t2899;
  t2928 = t1592*t2923;
  t2936 = t2908 + t2928;
  t2938 = t1592*t2899;
  t2941 = -1.*t1263*t2923;
  t2942 = t2938 + t2941;
  t2937 = -1.*t1259*t2936;
  t2943 = t1774*t2942;
  t2959 = t2937 + t2943;
  t2985 = t1774*t2936;
  t3007 = t1259*t2942;
  t3038 = t2985 + t3007;
  t1950 = t1255*t1885;
  t2048 = t1996*t2043;
  t2071 = t1950 + t2048;
  t2243 = t1996*t1885;
  t2252 = -1.*t1255*t2043;
  t2261 = t2243 + t2252;
  t2626 = t1255*t2617;
  t2694 = t1996*t2668;
  t2700 = t2626 + t2694;
  t2716 = t1996*t2617;
  t2727 = -1.*t1255*t2668;
  t2729 = t2716 + t2727;
  t2970 = t1255*t2959;
  t3045 = t1996*t3038;
  t3103 = t2970 + t3045;
  t3121 = t1996*t2959;
  t3134 = -1.*t1255*t3038;
  t3157 = t3121 + t3134;
  t3408 = -1.*t287;
  t3445 = 1. + t3408;
  t3599 = -1.*t1377;
  t3610 = 1. + t3599;
  t3822 = -1.*t1522;
  t3829 = 1. + t3822;
  t3890 = -1.*t1592;
  t3912 = 1. + t3890;
  t3979 = -1.*t1774;
  t3983 = 1. + t3979;
  t4197 = -1.*t1996;
  t4215 = 1. + t4197;
  t3448 = -0.049*t3445;
  t3465 = -0.135*t249;
  t3472 = 0. + t3448 + t3465;
  t3485 = 0.135*t317;
  t3507 = 0. + t3485;
  t3535 = -1.*t567;
  t3549 = 1. + t3535;
  t3553 = -0.135*t3549;
  t3556 = 0. + t3553;
  t3573 = -0.135*t3445;
  t3576 = 0.049*t249;
  t3581 = 0. + t3573 + t3576;
  t3676 = -0.09*t3610;
  t3700 = 0.049*t1287;
  t3715 = 0. + t3676 + t3700;
  t3786 = -0.049*t3610;
  t3808 = -0.09*t1287;
  t3812 = 0. + t3786 + t3808;
  t3831 = -0.049*t3829;
  t3833 = -0.21*t1284;
  t3838 = 0. + t3831 + t3833;
  t3848 = -0.21*t3829;
  t3852 = 0.049*t1284;
  t3879 = 0. + t3848 + t3852;
  t3919 = -0.2707*t3912;
  t3920 = 0.0016*t1263;
  t3925 = 0. + t3919 + t3920;
  t3937 = -0.0016*t3912;
  t3959 = -0.2707*t1263;
  t3964 = 0. + t3937 + t3959;
  t3991 = 0.0184*t3983;
  t3997 = -0.7055*t1259;
  t4023 = 0. + t3991 + t3997;
  t4050 = -0.7055*t3983;
  t4052 = -0.0184*t1259;
  t4121 = 0. + t4050 + t4052;
  t4227 = -1.1135*t4215;
  t4249 = 0.0216*t1255;
  t4254 = 0. + t4227 + t4249;
  t4275 = -0.0216*t4215;
  t4301 = -1.1135*t1255;
  t4338 = 0. + t4275 + t4301;
  p_output1[0]=-1.*t287*t774 + t220*t249*t83;
  p_output1[1]=-1.*t1080*t287 + t220*t249*t394;
  p_output1[2]=-1.*t1144*t287 - 1.*t249*t356;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2071 + 0.766044*t2261;
  p_output1[5]=0.642788*t2700 + 0.766044*t2729;
  p_output1[6]=0.642788*t3103 + 0.766044*t3157;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2071 + 0.642788*t2261;
  p_output1[9]=-0.766044*t2700 + 0.642788*t2729;
  p_output1[10]=-0.766044*t3103 + 0.642788*t3157;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.088451*t2071 - 1.062256*t2261 + t1353*t3715 + t1392*t3812 + t1457*t3838 + t1549*t3879 + t1559*t3925 + t1618*t3964 + t1676*t4023 + t1861*t4121 + t1885*t4254 + t2043*t4338 + t3507*t560 + t3556*t734 + t3581*t774 + t220*t3472*t83 - 0.1305*(t287*t774 - 1.*t220*t249*t83) + var1[0];
  p_output1[13]=0. + 0.088451*t2700 - 1.062256*t2729 + t1080*t3581 + t2307*t3715 + t2344*t3812 + t2362*t3838 + t2394*t3879 + t2411*t3925 + t220*t3472*t394 - 0.1305*(t1080*t287 - 1.*t220*t249*t394) + t2544*t3964 + t2570*t4023 + t2603*t4121 + t2617*t4254 + t2668*t4338 + t3507*t879 + t3556*t928 + var1[1];
  p_output1[14]=0. + 0.088451*t3103 - 1.062256*t3157 + t220*t338*t3507 - 1.*t3472*t356 - 0.1305*(t1144*t287 + t249*t356) + t1144*t3581 + t2804*t3715 + t2839*t3812 + t2855*t3838 + t2889*t3879 + t2899*t3925 + t2923*t3964 + t2936*t4023 + t2942*t4121 + t220*t3556*t416 + t2959*t4254 + t3038*t4338 + var1[2];
  p_output1[15]=1.;
}



void H_RightToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
