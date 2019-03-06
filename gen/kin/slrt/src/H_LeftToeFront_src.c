/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:53 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeFront_src.h"

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
  double t352;
  double t261;
  double t372;
  double t289;
  double t373;
  double t118;
  double t148;
  double t509;
  double t653;
  double t731;
  double t308;
  double t385;
  double t394;
  double t409;
  double t427;
  double t500;
  double t503;
  double t537;
  double t552;
  double t1287;
  double t1372;
  double t1391;
  double t1410;
  double t1288;
  double t1300;
  double t1323;
  double t1434;
  double t1467;
  double t1341;
  double t1454;
  double t1459;
  double t1265;
  double t1480;
  double t1496;
  double t1497;
  double t1558;
  double t1465;
  double t1510;
  double t1515;
  double t1229;
  double t1568;
  double t1574;
  double t1614;
  double t1646;
  double t1555;
  double t1618;
  double t1619;
  double t1208;
  double t1659;
  double t1667;
  double t1686;
  double t1764;
  double t1635;
  double t1720;
  double t1744;
  double t1192;
  double t1775;
  double t1776;
  double t1787;
  double t753;
  double t776;
  double t783;
  double t793;
  double t799;
  double t879;
  double t889;
  double t898;
  double t910;
  double t1963;
  double t2002;
  double t2007;
  double t1920;
  double t1935;
  double t1942;
  double t1948;
  double t2013;
  double t2025;
  double t2046;
  double t2047;
  double t2049;
  double t2042;
  double t2081;
  double t2094;
  double t2127;
  double t2129;
  double t2144;
  double t2098;
  double t2145;
  double t2161;
  double t2165;
  double t2169;
  double t2202;
  double t2162;
  double t2204;
  double t2236;
  double t2246;
  double t2247;
  double t2251;
  double t1116;
  double t1138;
  double t1144;
  double t2339;
  double t2358;
  double t2370;
  double t2319;
  double t2320;
  double t2323;
  double t2325;
  double t2380;
  double t2398;
  double t2419;
  double t2420;
  double t2434;
  double t2403;
  double t2438;
  double t2461;
  double t2499;
  double t2503;
  double t2532;
  double t2498;
  double t2541;
  double t2547;
  double t2556;
  double t2584;
  double t2604;
  double t2555;
  double t2613;
  double t2614;
  double t2636;
  double t2646;
  double t2648;
  double t1758;
  double t1802;
  double t1806;
  double t1853;
  double t1873;
  double t1874;
  double t2239;
  double t2253;
  double t2254;
  double t2265;
  double t2275;
  double t2284;
  double t2623;
  double t2676;
  double t2694;
  double t2736;
  double t2739;
  double t2741;
  double t2926;
  double t2928;
  double t3004;
  double t3007;
  double t3054;
  double t3064;
  double t3133;
  double t3139;
  double t3211;
  double t3212;
  double t3380;
  double t3390;
  double t2886;
  double t2892;
  double t2894;
  double t2901;
  double t2908;
  double t2909;
  double t2930;
  double t2931;
  double t2947;
  double t2956;
  double t2962;
  double t2964;
  double t3018;
  double t3020;
  double t3026;
  double t3034;
  double t3036;
  double t3037;
  double t3065;
  double t3073;
  double t3089;
  double t3102;
  double t3112;
  double t3119;
  double t3144;
  double t3148;
  double t3152;
  double t3193;
  double t3201;
  double t3208;
  double t3234;
  double t3237;
  double t3243;
  double t3288;
  double t3346;
  double t3348;
  double t3398;
  double t3404;
  double t3415;
  double t3455;
  double t3473;
  double t3477;
  t352 = Cos(var1[3]);
  t261 = Cos(var1[5]);
  t372 = Sin(var1[4]);
  t289 = Sin(var1[3]);
  t373 = Sin(var1[5]);
  t118 = Cos(var1[7]);
  t148 = Cos(var1[6]);
  t509 = Sin(var1[6]);
  t653 = Cos(var1[4]);
  t731 = Sin(var1[7]);
  t308 = -1.*t261*t289;
  t385 = t352*t372*t373;
  t394 = t308 + t385;
  t409 = t148*t394;
  t427 = t352*t261*t372;
  t500 = t289*t373;
  t503 = t427 + t500;
  t537 = t503*t509;
  t552 = t409 + t537;
  t1287 = Cos(var1[8]);
  t1372 = t148*t503;
  t1391 = -1.*t394*t509;
  t1410 = t1372 + t1391;
  t1288 = t352*t653*t118;
  t1300 = t552*t731;
  t1323 = t1288 + t1300;
  t1434 = Sin(var1[8]);
  t1467 = Cos(var1[9]);
  t1341 = t1287*t1323;
  t1454 = t1410*t1434;
  t1459 = t1341 + t1454;
  t1265 = Sin(var1[9]);
  t1480 = t1287*t1410;
  t1496 = -1.*t1323*t1434;
  t1497 = t1480 + t1496;
  t1558 = Cos(var1[10]);
  t1465 = -1.*t1265*t1459;
  t1510 = t1467*t1497;
  t1515 = t1465 + t1510;
  t1229 = Sin(var1[10]);
  t1568 = t1467*t1459;
  t1574 = t1265*t1497;
  t1614 = t1568 + t1574;
  t1646 = Cos(var1[11]);
  t1555 = t1229*t1515;
  t1618 = t1558*t1614;
  t1619 = t1555 + t1618;
  t1208 = Sin(var1[11]);
  t1659 = t1558*t1515;
  t1667 = -1.*t1229*t1614;
  t1686 = t1659 + t1667;
  t1764 = Cos(var1[12]);
  t1635 = -1.*t1208*t1619;
  t1720 = t1646*t1686;
  t1744 = t1635 + t1720;
  t1192 = Sin(var1[12]);
  t1775 = t1646*t1619;
  t1776 = t1208*t1686;
  t1787 = t1775 + t1776;
  t753 = t352*t261;
  t776 = t289*t372*t373;
  t783 = t753 + t776;
  t793 = t148*t783;
  t799 = t261*t289*t372;
  t879 = -1.*t352*t373;
  t889 = t799 + t879;
  t898 = t889*t509;
  t910 = t793 + t898;
  t1963 = t148*t889;
  t2002 = -1.*t783*t509;
  t2007 = t1963 + t2002;
  t1920 = t653*t118*t289;
  t1935 = t910*t731;
  t1942 = t1920 + t1935;
  t1948 = t1287*t1942;
  t2013 = t2007*t1434;
  t2025 = t1948 + t2013;
  t2046 = t1287*t2007;
  t2047 = -1.*t1942*t1434;
  t2049 = t2046 + t2047;
  t2042 = -1.*t1265*t2025;
  t2081 = t1467*t2049;
  t2094 = t2042 + t2081;
  t2127 = t1467*t2025;
  t2129 = t1265*t2049;
  t2144 = t2127 + t2129;
  t2098 = t1229*t2094;
  t2145 = t1558*t2144;
  t2161 = t2098 + t2145;
  t2165 = t1558*t2094;
  t2169 = -1.*t1229*t2144;
  t2202 = t2165 + t2169;
  t2162 = -1.*t1208*t2161;
  t2204 = t1646*t2202;
  t2236 = t2162 + t2204;
  t2246 = t1646*t2161;
  t2247 = t1208*t2202;
  t2251 = t2246 + t2247;
  t1116 = t653*t148*t373;
  t1138 = t653*t261*t509;
  t1144 = t1116 + t1138;
  t2339 = t653*t261*t148;
  t2358 = -1.*t653*t373*t509;
  t2370 = t2339 + t2358;
  t2319 = -1.*t118*t372;
  t2320 = t1144*t731;
  t2323 = t2319 + t2320;
  t2325 = t1287*t2323;
  t2380 = t2370*t1434;
  t2398 = t2325 + t2380;
  t2419 = t1287*t2370;
  t2420 = -1.*t2323*t1434;
  t2434 = t2419 + t2420;
  t2403 = -1.*t1265*t2398;
  t2438 = t1467*t2434;
  t2461 = t2403 + t2438;
  t2499 = t1467*t2398;
  t2503 = t1265*t2434;
  t2532 = t2499 + t2503;
  t2498 = t1229*t2461;
  t2541 = t1558*t2532;
  t2547 = t2498 + t2541;
  t2556 = t1558*t2461;
  t2584 = -1.*t1229*t2532;
  t2604 = t2556 + t2584;
  t2555 = -1.*t1208*t2547;
  t2613 = t1646*t2604;
  t2614 = t2555 + t2613;
  t2636 = t1646*t2547;
  t2646 = t1208*t2604;
  t2648 = t2636 + t2646;
  t1758 = t1192*t1744;
  t1802 = t1764*t1787;
  t1806 = t1758 + t1802;
  t1853 = t1764*t1744;
  t1873 = -1.*t1192*t1787;
  t1874 = t1853 + t1873;
  t2239 = t1192*t2236;
  t2253 = t1764*t2251;
  t2254 = t2239 + t2253;
  t2265 = t1764*t2236;
  t2275 = -1.*t1192*t2251;
  t2284 = t2265 + t2275;
  t2623 = t1192*t2614;
  t2676 = t1764*t2648;
  t2694 = t2623 + t2676;
  t2736 = t1764*t2614;
  t2739 = -1.*t1192*t2648;
  t2741 = t2736 + t2739;
  t2926 = -1.*t118;
  t2928 = 1. + t2926;
  t3004 = -1.*t1287;
  t3007 = 1. + t3004;
  t3054 = -1.*t1467;
  t3064 = 1. + t3054;
  t3133 = -1.*t1558;
  t3139 = 1. + t3133;
  t3211 = -1.*t1646;
  t3212 = 1. + t3211;
  t3380 = -1.*t1764;
  t3390 = 1. + t3380;
  t2886 = -1.*t148;
  t2892 = 1. + t2886;
  t2894 = 0.135*t2892;
  t2901 = 0. + t2894;
  t2908 = -0.135*t509;
  t2909 = 0. + t2908;
  t2930 = 0.135*t2928;
  t2931 = 0.049*t731;
  t2947 = 0. + t2930 + t2931;
  t2956 = -0.049*t2928;
  t2962 = 0.135*t731;
  t2964 = 0. + t2956 + t2962;
  t3018 = -0.049*t3007;
  t3020 = -0.09*t1434;
  t3026 = 0. + t3018 + t3020;
  t3034 = -0.09*t3007;
  t3036 = 0.049*t1434;
  t3037 = 0. + t3034 + t3036;
  t3065 = -0.049*t3064;
  t3073 = -0.21*t1265;
  t3089 = 0. + t3065 + t3073;
  t3102 = -0.21*t3064;
  t3112 = 0.049*t1265;
  t3119 = 0. + t3102 + t3112;
  t3144 = -0.2707*t3139;
  t3148 = 0.0016*t1229;
  t3152 = 0. + t3144 + t3148;
  t3193 = -0.0016*t3139;
  t3201 = -0.2707*t1229;
  t3208 = 0. + t3193 + t3201;
  t3234 = 0.0184*t3212;
  t3237 = -0.7055*t1208;
  t3243 = 0. + t3234 + t3237;
  t3288 = -0.7055*t3212;
  t3346 = -0.0184*t1208;
  t3348 = 0. + t3288 + t3346;
  t3398 = -1.1135*t3390;
  t3404 = 0.0216*t1192;
  t3415 = 0. + t3398 + t3404;
  t3455 = -0.0216*t3390;
  t3473 = -1.1135*t1192;
  t3477 = 0. + t3455 + t3473;
  p_output1[0]=-1.*t118*t552 + t352*t653*t731;
  p_output1[1]=t289*t653*t731 - 1.*t118*t910;
  p_output1[2]=-1.*t1144*t118 - 1.*t372*t731;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1806 + 0.766044*t1874;
  p_output1[5]=0.642788*t2254 + 0.766044*t2284;
  p_output1[6]=0.642788*t2694 + 0.766044*t2741;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1806 + 0.642788*t1874;
  p_output1[9]=-0.766044*t2254 + 0.642788*t2284;
  p_output1[10]=-0.766044*t2694 + 0.642788*t2741;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.088451*t1806 - 1.062256*t1874 + t1323*t3026 + t1410*t3037 + t1459*t3089 + t1497*t3119 + t1515*t3152 + t1614*t3208 + t1619*t3243 + t1686*t3348 + t1744*t3415 + t1787*t3477 + t2901*t394 + t2909*t503 + t2947*t552 + t2964*t352*t653 + 0.1305*(t118*t552 - 1.*t352*t653*t731) + var1[0];
  p_output1[13]=0. + 0.088451*t2254 - 1.062256*t2284 + t1942*t3026 + t2007*t3037 + t2025*t3089 + t2049*t3119 + t2094*t3152 + t2144*t3208 + t2161*t3243 + t2202*t3348 + t2236*t3415 + t2251*t3477 + t289*t2964*t653 + t2901*t783 + t2909*t889 + t2947*t910 + 0.1305*(-1.*t289*t653*t731 + t118*t910) + var1[1];
  p_output1[14]=0. + 0.088451*t2694 - 1.062256*t2741 + t1144*t2947 + t2323*t3026 + t2370*t3037 + t2398*t3089 + t2434*t3119 + t2461*t3152 + t2532*t3208 + t2547*t3243 + t2604*t3348 + t2614*t3415 + t2648*t3477 - 1.*t2964*t372 + t261*t2909*t653 + t2901*t373*t653 + 0.1305*(t1144*t118 + t372*t731) + var1[2];
  p_output1[15]=1.;
}



void H_LeftToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
