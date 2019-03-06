/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:00 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeBack_src.h"

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
  double t188;
  double t399;
  double t575;
  double t531;
  double t599;
  double t312;
  double t368;
  double t396;
  double t398;
  double t685;
  double t553;
  double t605;
  double t650;
  double t696;
  double t697;
  double t700;
  double t676;
  double t710;
  double t713;
  double t1224;
  double t1177;
  double t1187;
  double t1203;
  double t1151;
  double t1231;
  double t1290;
  double t1293;
  double t1345;
  double t1217;
  double t1323;
  double t1324;
  double t1136;
  double t1347;
  double t1350;
  double t1396;
  double t1445;
  double t1330;
  double t1416;
  double t1437;
  double t1132;
  double t1450;
  double t1478;
  double t1577;
  double t1598;
  double t1443;
  double t1587;
  double t1593;
  double t1105;
  double t1600;
  double t1603;
  double t1627;
  double t1717;
  double t1595;
  double t1646;
  double t1669;
  double t1062;
  double t1722;
  double t1736;
  double t1742;
  double t749;
  double t825;
  double t833;
  double t930;
  double t940;
  double t963;
  double t917;
  double t969;
  double t977;
  double t1835;
  double t1842;
  double t1859;
  double t1908;
  double t1928;
  double t1959;
  double t1865;
  double t1981;
  double t1999;
  double t2009;
  double t2014;
  double t2021;
  double t2003;
  double t2037;
  double t2073;
  double t2087;
  double t2090;
  double t2096;
  double t2079;
  double t2108;
  double t2113;
  double t2136;
  double t2138;
  double t2158;
  double t2125;
  double t2163;
  double t2173;
  double t2186;
  double t2195;
  double t2203;
  double t1028;
  double t1034;
  double t1044;
  double t2453;
  double t2459;
  double t2474;
  double t2485;
  double t2499;
  double t2520;
  double t2481;
  double t2527;
  double t2538;
  double t2553;
  double t2590;
  double t2597;
  double t2545;
  double t2613;
  double t2619;
  double t2639;
  double t2650;
  double t2651;
  double t2634;
  double t2663;
  double t2668;
  double t2694;
  double t2696;
  double t2732;
  double t2688;
  double t2750;
  double t2751;
  double t2776;
  double t2778;
  double t2779;
  double t1682;
  double t1767;
  double t1780;
  double t1793;
  double t1810;
  double t1819;
  double t2184;
  double t2259;
  double t2268;
  double t2299;
  double t2338;
  double t2358;
  double t2770;
  double t2781;
  double t2799;
  double t2830;
  double t2835;
  double t2849;
  double t2939;
  double t2942;
  double t3067;
  double t3074;
  double t3222;
  double t3225;
  double t3323;
  double t3325;
  double t3398;
  double t3401;
  double t3499;
  double t3527;
  double t2953;
  double t2954;
  double t2958;
  double t2974;
  double t3009;
  double t3017;
  double t3019;
  double t3024;
  double t3037;
  double t3042;
  double t3052;
  double t3055;
  double t3099;
  double t3100;
  double t3107;
  double t3189;
  double t3196;
  double t3199;
  double t3227;
  double t3238;
  double t3244;
  double t3294;
  double t3296;
  double t3301;
  double t3327;
  double t3341;
  double t3350;
  double t3358;
  double t3376;
  double t3386;
  double t3405;
  double t3421;
  double t3438;
  double t3460;
  double t3479;
  double t3487;
  double t3528;
  double t3538;
  double t3541;
  double t3556;
  double t3560;
  double t3573;
  t188 = Cos(var1[3]);
  t399 = Cos(var1[5]);
  t575 = Sin(var1[3]);
  t531 = Sin(var1[4]);
  t599 = Sin(var1[5]);
  t312 = Cos(var1[4]);
  t368 = Sin(var1[14]);
  t396 = Cos(var1[14]);
  t398 = Sin(var1[13]);
  t685 = Cos(var1[13]);
  t553 = t188*t399*t531;
  t605 = t575*t599;
  t650 = t553 + t605;
  t696 = -1.*t399*t575;
  t697 = t188*t531*t599;
  t700 = t696 + t697;
  t676 = t398*t650;
  t710 = t685*t700;
  t713 = t676 + t710;
  t1224 = Cos(var1[15]);
  t1177 = t685*t650;
  t1187 = -1.*t398*t700;
  t1203 = t1177 + t1187;
  t1151 = Sin(var1[15]);
  t1231 = t396*t188*t312;
  t1290 = t368*t713;
  t1293 = t1231 + t1290;
  t1345 = Cos(var1[16]);
  t1217 = t1151*t1203;
  t1323 = t1224*t1293;
  t1324 = t1217 + t1323;
  t1136 = Sin(var1[16]);
  t1347 = t1224*t1203;
  t1350 = -1.*t1151*t1293;
  t1396 = t1347 + t1350;
  t1445 = Cos(var1[17]);
  t1330 = -1.*t1136*t1324;
  t1416 = t1345*t1396;
  t1437 = t1330 + t1416;
  t1132 = Sin(var1[17]);
  t1450 = t1345*t1324;
  t1478 = t1136*t1396;
  t1577 = t1450 + t1478;
  t1598 = Cos(var1[18]);
  t1443 = t1132*t1437;
  t1587 = t1445*t1577;
  t1593 = t1443 + t1587;
  t1105 = Sin(var1[18]);
  t1600 = t1445*t1437;
  t1603 = -1.*t1132*t1577;
  t1627 = t1600 + t1603;
  t1717 = Cos(var1[19]);
  t1595 = -1.*t1105*t1593;
  t1646 = t1598*t1627;
  t1669 = t1595 + t1646;
  t1062 = Sin(var1[19]);
  t1722 = t1598*t1593;
  t1736 = t1105*t1627;
  t1742 = t1722 + t1736;
  t749 = t399*t575*t531;
  t825 = -1.*t188*t599;
  t833 = t749 + t825;
  t930 = t188*t399;
  t940 = t575*t531*t599;
  t963 = t930 + t940;
  t917 = t398*t833;
  t969 = t685*t963;
  t977 = t917 + t969;
  t1835 = t685*t833;
  t1842 = -1.*t398*t963;
  t1859 = t1835 + t1842;
  t1908 = t396*t312*t575;
  t1928 = t368*t977;
  t1959 = t1908 + t1928;
  t1865 = t1151*t1859;
  t1981 = t1224*t1959;
  t1999 = t1865 + t1981;
  t2009 = t1224*t1859;
  t2014 = -1.*t1151*t1959;
  t2021 = t2009 + t2014;
  t2003 = -1.*t1136*t1999;
  t2037 = t1345*t2021;
  t2073 = t2003 + t2037;
  t2087 = t1345*t1999;
  t2090 = t1136*t2021;
  t2096 = t2087 + t2090;
  t2079 = t1132*t2073;
  t2108 = t1445*t2096;
  t2113 = t2079 + t2108;
  t2136 = t1445*t2073;
  t2138 = -1.*t1132*t2096;
  t2158 = t2136 + t2138;
  t2125 = -1.*t1105*t2113;
  t2163 = t1598*t2158;
  t2173 = t2125 + t2163;
  t2186 = t1598*t2113;
  t2195 = t1105*t2158;
  t2203 = t2186 + t2195;
  t1028 = t312*t399*t398;
  t1034 = t685*t312*t599;
  t1044 = t1028 + t1034;
  t2453 = t685*t312*t399;
  t2459 = -1.*t312*t398*t599;
  t2474 = t2453 + t2459;
  t2485 = -1.*t396*t531;
  t2499 = t368*t1044;
  t2520 = t2485 + t2499;
  t2481 = t1151*t2474;
  t2527 = t1224*t2520;
  t2538 = t2481 + t2527;
  t2553 = t1224*t2474;
  t2590 = -1.*t1151*t2520;
  t2597 = t2553 + t2590;
  t2545 = -1.*t1136*t2538;
  t2613 = t1345*t2597;
  t2619 = t2545 + t2613;
  t2639 = t1345*t2538;
  t2650 = t1136*t2597;
  t2651 = t2639 + t2650;
  t2634 = t1132*t2619;
  t2663 = t1445*t2651;
  t2668 = t2634 + t2663;
  t2694 = t1445*t2619;
  t2696 = -1.*t1132*t2651;
  t2732 = t2694 + t2696;
  t2688 = -1.*t1105*t2668;
  t2750 = t1598*t2732;
  t2751 = t2688 + t2750;
  t2776 = t1598*t2668;
  t2778 = t1105*t2732;
  t2779 = t2776 + t2778;
  t1682 = t1062*t1669;
  t1767 = t1717*t1742;
  t1780 = t1682 + t1767;
  t1793 = t1717*t1669;
  t1810 = -1.*t1062*t1742;
  t1819 = t1793 + t1810;
  t2184 = t1062*t2173;
  t2259 = t1717*t2203;
  t2268 = t2184 + t2259;
  t2299 = t1717*t2173;
  t2338 = -1.*t1062*t2203;
  t2358 = t2299 + t2338;
  t2770 = t1062*t2751;
  t2781 = t1717*t2779;
  t2799 = t2770 + t2781;
  t2830 = t1717*t2751;
  t2835 = -1.*t1062*t2779;
  t2849 = t2830 + t2835;
  t2939 = -1.*t396;
  t2942 = 1. + t2939;
  t3067 = -1.*t1224;
  t3074 = 1. + t3067;
  t3222 = -1.*t1345;
  t3225 = 1. + t3222;
  t3323 = -1.*t1445;
  t3325 = 1. + t3323;
  t3398 = -1.*t1598;
  t3401 = 1. + t3398;
  t3499 = -1.*t1717;
  t3527 = 1. + t3499;
  t2953 = -0.049*t2942;
  t2954 = -0.135*t368;
  t2958 = 0. + t2953 + t2954;
  t2974 = 0.135*t398;
  t3009 = 0. + t2974;
  t3017 = -1.*t685;
  t3019 = 1. + t3017;
  t3024 = -0.135*t3019;
  t3037 = 0. + t3024;
  t3042 = -0.135*t2942;
  t3052 = 0.049*t368;
  t3055 = 0. + t3042 + t3052;
  t3099 = -0.09*t3074;
  t3100 = 0.049*t1151;
  t3107 = 0. + t3099 + t3100;
  t3189 = -0.049*t3074;
  t3196 = -0.09*t1151;
  t3199 = 0. + t3189 + t3196;
  t3227 = -0.049*t3225;
  t3238 = -0.21*t1136;
  t3244 = 0. + t3227 + t3238;
  t3294 = -0.21*t3225;
  t3296 = 0.049*t1136;
  t3301 = 0. + t3294 + t3296;
  t3327 = -0.2707*t3325;
  t3341 = 0.0016*t1132;
  t3350 = 0. + t3327 + t3341;
  t3358 = -0.0016*t3325;
  t3376 = -0.2707*t1132;
  t3386 = 0. + t3358 + t3376;
  t3405 = 0.0184*t3401;
  t3421 = -0.7055*t1105;
  t3438 = 0. + t3405 + t3421;
  t3460 = -0.7055*t3401;
  t3479 = -0.0184*t1105;
  t3487 = 0. + t3460 + t3479;
  t3528 = -1.1135*t3527;
  t3538 = 0.0216*t1062;
  t3541 = 0. + t3528 + t3538;
  t3556 = -0.0216*t3527;
  t3560 = -1.1135*t1062;
  t3573 = 0. + t3556 + t3560;
  p_output1[0]=t188*t312*t368 - 1.*t396*t713;
  p_output1[1]=t312*t368*t575 - 1.*t396*t977;
  p_output1[2]=-1.*t1044*t396 - 1.*t368*t531;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1780 + 0.766044*t1819;
  p_output1[5]=0.642788*t2268 + 0.766044*t2358;
  p_output1[6]=0.642788*t2799 + 0.766044*t2849;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1780 + 0.642788*t1819;
  p_output1[9]=-0.766044*t2268 + 0.642788*t2358;
  p_output1[10]=-0.766044*t2799 + 0.642788*t2849;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.027251*t1780 - 1.200144*t1819 + t1203*t3107 + t188*t2958*t312 + t1293*t3199 + t1324*t3244 + t1396*t3301 + t1437*t3350 + t1577*t3386 + t1593*t3438 + t1627*t3487 + t1669*t3541 + t1742*t3573 + t3009*t650 + t3037*t700 + t3055*t713 - 0.1305*(-1.*t188*t312*t368 + t396*t713) + var1[0];
  p_output1[13]=0. - 0.027251*t2268 - 1.200144*t2358 + t1859*t3107 + t1959*t3199 + t1999*t3244 + t2021*t3301 + t2073*t3350 + t2096*t3386 + t2113*t3438 + t2158*t3487 + t2173*t3541 + t2203*t3573 + t2958*t312*t575 + t3009*t833 + t3037*t963 + t3055*t977 - 0.1305*(-1.*t312*t368*t575 + t396*t977) + var1[1];
  p_output1[14]=0. - 0.027251*t2799 - 1.200144*t2849 + t1044*t3055 + t2474*t3107 + t2520*t3199 + t2538*t3244 + t2597*t3301 + t2619*t3350 + t2651*t3386 + t2668*t3438 + t2732*t3487 + t2751*t3541 + t2779*t3573 + t3009*t312*t399 - 1.*t2958*t531 - 0.1305*(t1044*t396 + t368*t531) + t3037*t312*t599 + var1[2];
  p_output1[15]=1.;
}



void H_RightToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
