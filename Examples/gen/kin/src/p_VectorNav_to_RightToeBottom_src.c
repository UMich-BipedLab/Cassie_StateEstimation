/*
 * Automatically Generated from Mathematica.
 * Sun 29 Jul 2018 03:58:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_RightToeBottom_src.h"

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
  double t207;
  double t613;
  double t782;
  double t868;
  double t917;
  double t965;
  double t1039;
  double t1240;
  double t1254;
  double t1312;
  double t1332;
  double t1188;
  double t1208;
  double t1228;
  double t1371;
  double t1407;
  double t1411;
  double t1555;
  double t1574;
  double t1575;
  double t1621;
  double t1465;
  double t1542;
  double t1553;
  double t1662;
  double t1663;
  double t1673;
  double t1731;
  double t1740;
  double t1745;
  double t1769;
  double t1710;
  double t1713;
  double t1724;
  double t1797;
  double t1807;
  double t1818;
  double t1993;
  double t263;
  double t293;
  double t532;
  double t664;
  double t760;
  double t764;
  double t820;
  double t839;
  double t2067;
  double t967;
  double t1064;
  double t1070;
  double t1129;
  double t1163;
  double t1179;
  double t2167;
  double t2179;
  double t2182;
  double t2186;
  double t2188;
  double t2193;
  double t1324;
  double t1349;
  double t1351;
  double t1425;
  double t1442;
  double t1457;
  double t2201;
  double t2208;
  double t2216;
  double t2259;
  double t2264;
  double t2267;
  double t1614;
  double t1632;
  double t1635;
  double t1680;
  double t1687;
  double t1688;
  double t2291;
  double t2292;
  double t2315;
  double t2325;
  double t2332;
  double t2346;
  double t1757;
  double t1773;
  double t1780;
  double t1828;
  double t1857;
  double t1879;
  double t2371;
  double t2377;
  double t2378;
  double t2390;
  double t2391;
  double t2401;
  double t2038;
  double t2041;
  double t2064;
  double t2076;
  double t2086;
  double t2118;
  double t2500;
  double t2502;
  double t2508;
  double t2528;
  double t2529;
  double t2533;
  double t2549;
  double t2568;
  double t2569;
  double t2578;
  double t2598;
  double t2600;
  double t2605;
  double t2637;
  double t2657;
  double t2663;
  double t2666;
  double t2678;
  double t2691;
  double t2698;
  double t2701;
  double t2704;
  double t2707;
  double t2714;
  t207 = Cos(var1[8]);
  t613 = Cos(var1[9]);
  t782 = Sin(var1[9]);
  t868 = Cos(var1[10]);
  t917 = -1.*t868;
  t965 = 1. + t917;
  t1039 = Sin(var1[10]);
  t1240 = Cos(var1[11]);
  t1254 = -1.*t1240;
  t1312 = 1. + t1254;
  t1332 = Sin(var1[11]);
  t1188 = t207*t613*t868;
  t1208 = -1.*t207*t782*t1039;
  t1228 = t1188 + t1208;
  t1371 = -1.*t207*t868*t782;
  t1407 = -1.*t207*t613*t1039;
  t1411 = t1371 + t1407;
  t1555 = Cos(var1[12]);
  t1574 = -1.*t1555;
  t1575 = 1. + t1574;
  t1621 = Sin(var1[12]);
  t1465 = t1240*t1228;
  t1542 = t1411*t1332;
  t1553 = t1465 + t1542;
  t1662 = t1240*t1411;
  t1663 = -1.*t1228*t1332;
  t1673 = t1662 + t1663;
  t1731 = Cos(var1[13]);
  t1740 = -1.*t1731;
  t1745 = 1. + t1740;
  t1769 = Sin(var1[13]);
  t1710 = t1555*t1553;
  t1713 = t1673*t1621;
  t1724 = t1710 + t1713;
  t1797 = t1555*t1673;
  t1807 = -1.*t1553*t1621;
  t1818 = t1797 + t1807;
  t1993 = Cos(var1[7]);
  t263 = -1.*t207;
  t293 = 1. + t263;
  t532 = Sin(var1[8]);
  t664 = -1.*t613;
  t760 = 1. + t664;
  t764 = -0.049*t760;
  t820 = -0.09*t782;
  t839 = 0. + t764 + t820;
  t2067 = Sin(var1[7]);
  t967 = -0.049*t965;
  t1064 = -0.21*t1039;
  t1070 = 0. + t967 + t1064;
  t1129 = -0.21*t965;
  t1163 = 0.049*t1039;
  t1179 = 0. + t1129 + t1163;
  t2167 = t1993*t613*t532;
  t2179 = -1.*t2067*t782;
  t2182 = t2167 + t2179;
  t2186 = -1.*t613*t2067;
  t2188 = -1.*t1993*t532*t782;
  t2193 = t2186 + t2188;
  t1324 = -0.0016*t1312;
  t1349 = -0.2707*t1332;
  t1351 = 0. + t1324 + t1349;
  t1425 = -0.2707*t1312;
  t1442 = 0.0016*t1332;
  t1457 = 0. + t1425 + t1442;
  t2201 = t868*t2182;
  t2208 = t2193*t1039;
  t2216 = t2201 + t2208;
  t2259 = t868*t2193;
  t2264 = -1.*t2182*t1039;
  t2267 = t2259 + t2264;
  t1614 = 0.0184*t1575;
  t1632 = -0.7055*t1621;
  t1635 = 0. + t1614 + t1632;
  t1680 = -0.7055*t1575;
  t1687 = -0.0184*t1621;
  t1688 = 0. + t1680 + t1687;
  t2291 = t1240*t2216;
  t2292 = t2267*t1332;
  t2315 = t2291 + t2292;
  t2325 = t1240*t2267;
  t2332 = -1.*t2216*t1332;
  t2346 = t2325 + t2332;
  t1757 = -0.0216*t1745;
  t1773 = -1.1135*t1769;
  t1780 = 0. + t1757 + t1773;
  t1828 = -1.1135*t1745;
  t1857 = 0.0216*t1769;
  t1879 = 0. + t1828 + t1857;
  t2371 = t1555*t2315;
  t2377 = t2346*t1621;
  t2378 = t2371 + t2377;
  t2390 = t1555*t2346;
  t2391 = -1.*t2315*t1621;
  t2401 = t2390 + t2391;
  t2038 = -0.135*t293;
  t2041 = 0.049*t532;
  t2064 = 0. + t2038 + t2041;
  t2076 = -0.09*t760;
  t2086 = 0.049*t782;
  t2118 = 0. + t2076 + t2086;
  t2500 = t613*t2067*t532;
  t2502 = t1993*t782;
  t2508 = t2500 + t2502;
  t2528 = t1993*t613;
  t2529 = -1.*t2067*t532*t782;
  t2533 = t2528 + t2529;
  t2549 = t868*t2508;
  t2568 = t2533*t1039;
  t2569 = t2549 + t2568;
  t2578 = t868*t2533;
  t2598 = -1.*t2508*t1039;
  t2600 = t2578 + t2598;
  t2605 = t1240*t2569;
  t2637 = t2600*t1332;
  t2657 = t2605 + t2637;
  t2663 = t1240*t2600;
  t2666 = -1.*t2569*t1332;
  t2678 = t2663 + t2666;
  t2691 = t1555*t2657;
  t2698 = t2678*t1621;
  t2701 = t2691 + t2698;
  t2704 = t1555*t2678;
  t2707 = -1.*t2657*t1621;
  t2714 = t2704 + t2707;
  p_output1[0]=-0.03155 + t1228*t1351 + t1411*t1457 + t1553*t1635 + t1673*t1688 + t1724*t1780 - 1.1312*(-1.*t1724*t1769 + t1731*t1818) + 0.0306*(t1724*t1731 + t1769*t1818) + t1818*t1879 - 0.049*t293 - 0.004500000000000004*t532 + t1070*t207*t613 - 1.*t1179*t207*t782 + t207*t839;
  p_output1[1]=0. - 0.135*(1. - 1.*t1993) + t1993*t2064 - 0.1305*t1993*t207 - 1.*t2067*t2118 + t1070*t2182 + t1179*t2193 + t1351*t2216 + t1457*t2267 + t1635*t2315 + t1688*t2346 + t1780*t2378 + t1879*t2401 - 1.1312*(-1.*t1769*t2378 + t1731*t2401) + 0.0306*(t1731*t2378 + t1769*t2401) + t1993*t532*t839;
  p_output1[2]=0.07996 + 0.135*t2067 + t2064*t2067 - 0.1305*t2067*t207 + t1993*t2118 + t1070*t2508 + t1179*t2533 + t1351*t2569 + t1457*t2600 + t1635*t2657 + t1688*t2678 + t1780*t2701 + t1879*t2714 - 1.1312*(-1.*t1769*t2701 + t1731*t2714) + 0.0306*(t1731*t2701 + t1769*t2714) + t2067*t532*t839;
}



void p_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
