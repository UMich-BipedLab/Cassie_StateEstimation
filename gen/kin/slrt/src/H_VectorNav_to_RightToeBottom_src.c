/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:02:08 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_RightToeBottom_src.h"

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
  double t201;
  double t518;
  double t590;
  double t503;
  double t611;
  double t470;
  double t645;
  double t649;
  double t690;
  double t557;
  double t634;
  double t639;
  double t698;
  double t460;
  double t755;
  double t764;
  double t799;
  double t644;
  double t701;
  double t705;
  double t828;
  double t435;
  double t882;
  double t898;
  double t905;
  double t726;
  double t874;
  double t877;
  double t916;
  double t180;
  double t104;
  double t311;
  double t1074;
  double t1085;
  double t1089;
  double t1019;
  double t1043;
  double t1047;
  double t1121;
  double t1123;
  double t1124;
  double t1069;
  double t1093;
  double t1102;
  double t1181;
  double t1196;
  double t1201;
  double t1105;
  double t1158;
  double t1160;
  double t1230;
  double t1241;
  double t1252;
  double t1169;
  double t1205;
  double t1217;
  double t1366;
  double t1378;
  double t1398;
  double t1325;
  double t1337;
  double t1342;
  double t1429;
  double t1443;
  double t1462;
  double t1350;
  double t1400;
  double t1412;
  double t1591;
  double t1609;
  double t1638;
  double t1424;
  double t1491;
  double t1495;
  double t1665;
  double t1697;
  double t1703;
  double t1511;
  double t1642;
  double t1650;
  double t881;
  double t924;
  double t964;
  double t986;
  double t994;
  double t995;
  double t1218;
  double t1261;
  double t1270;
  double t1291;
  double t1295;
  double t1298;
  double t1656;
  double t1740;
  double t1750;
  double t1758;
  double t1767;
  double t1792;
  double t2027;
  double t2031;
  double t2093;
  double t2106;
  double t2195;
  double t2204;
  double t2264;
  double t2271;
  double t1961;
  double t1963;
  double t1991;
  double t2009;
  double t2011;
  double t2012;
  double t2013;
  double t2033;
  double t2054;
  double t2055;
  double t2066;
  double t2079;
  double t2088;
  double t2107;
  double t2133;
  double t2135;
  double t2160;
  double t2161;
  double t2165;
  double t2209;
  double t2210;
  double t2224;
  double t2227;
  double t2236;
  double t2242;
  double t2291;
  double t2299;
  double t2303;
  double t2308;
  double t2309;
  double t2324;
  double t2406;
  double t2410;
  double t2413;
  double t2434;
  double t2444;
  double t2459;
  t201 = Cos(var1[8]);
  t518 = Cos(var1[10]);
  t590 = Sin(var1[9]);
  t503 = Cos(var1[9]);
  t611 = Sin(var1[10]);
  t470 = Cos(var1[11]);
  t645 = -1.*t201*t518*t590;
  t649 = -1.*t201*t503*t611;
  t690 = t645 + t649;
  t557 = t201*t503*t518;
  t634 = -1.*t201*t590*t611;
  t639 = t557 + t634;
  t698 = Sin(var1[11]);
  t460 = Cos(var1[12]);
  t755 = t470*t690;
  t764 = -1.*t639*t698;
  t799 = t755 + t764;
  t644 = t470*t639;
  t701 = t690*t698;
  t705 = t644 + t701;
  t828 = Sin(var1[12]);
  t435 = Cos(var1[13]);
  t882 = t460*t799;
  t898 = -1.*t705*t828;
  t905 = t882 + t898;
  t726 = t460*t705;
  t874 = t799*t828;
  t877 = t726 + t874;
  t916 = Sin(var1[13]);
  t180 = Cos(var1[7]);
  t104 = Sin(var1[8]);
  t311 = Sin(var1[7]);
  t1074 = -1.*t503*t311;
  t1085 = -1.*t180*t104*t590;
  t1089 = t1074 + t1085;
  t1019 = t180*t503*t104;
  t1043 = -1.*t311*t590;
  t1047 = t1019 + t1043;
  t1121 = t518*t1089;
  t1123 = -1.*t1047*t611;
  t1124 = t1121 + t1123;
  t1069 = t518*t1047;
  t1093 = t1089*t611;
  t1102 = t1069 + t1093;
  t1181 = t470*t1124;
  t1196 = -1.*t1102*t698;
  t1201 = t1181 + t1196;
  t1105 = t470*t1102;
  t1158 = t1124*t698;
  t1160 = t1105 + t1158;
  t1230 = t460*t1201;
  t1241 = -1.*t1160*t828;
  t1252 = t1230 + t1241;
  t1169 = t460*t1160;
  t1205 = t1201*t828;
  t1217 = t1169 + t1205;
  t1366 = t180*t503;
  t1378 = -1.*t311*t104*t590;
  t1398 = t1366 + t1378;
  t1325 = t503*t311*t104;
  t1337 = t180*t590;
  t1342 = t1325 + t1337;
  t1429 = t518*t1398;
  t1443 = -1.*t1342*t611;
  t1462 = t1429 + t1443;
  t1350 = t518*t1342;
  t1400 = t1398*t611;
  t1412 = t1350 + t1400;
  t1591 = t470*t1462;
  t1609 = -1.*t1412*t698;
  t1638 = t1591 + t1609;
  t1424 = t470*t1412;
  t1491 = t1462*t698;
  t1495 = t1424 + t1491;
  t1665 = t460*t1638;
  t1697 = -1.*t1495*t828;
  t1703 = t1665 + t1697;
  t1511 = t460*t1495;
  t1642 = t1638*t828;
  t1650 = t1511 + t1642;
  t881 = t435*t877;
  t924 = t905*t916;
  t964 = t881 + t924;
  t986 = t435*t905;
  t994 = -1.*t877*t916;
  t995 = t986 + t994;
  t1218 = t435*t1217;
  t1261 = t1252*t916;
  t1270 = t1218 + t1261;
  t1291 = t435*t1252;
  t1295 = -1.*t1217*t916;
  t1298 = t1291 + t1295;
  t1656 = t435*t1650;
  t1740 = t1703*t916;
  t1750 = t1656 + t1740;
  t1758 = t435*t1703;
  t1767 = -1.*t1650*t916;
  t1792 = t1758 + t1767;
  t2027 = -1.*t518;
  t2031 = 1. + t2027;
  t2093 = -1.*t470;
  t2106 = 1. + t2093;
  t2195 = -1.*t460;
  t2204 = 1. + t2195;
  t2264 = -1.*t435;
  t2271 = 1. + t2264;
  t1961 = -1.*t201;
  t1963 = 1. + t1961;
  t1991 = -1.*t503;
  t2009 = 1. + t1991;
  t2011 = -0.049*t2009;
  t2012 = -0.09*t590;
  t2013 = 0. + t2011 + t2012;
  t2033 = -0.049*t2031;
  t2054 = -0.21*t611;
  t2055 = 0. + t2033 + t2054;
  t2066 = -0.21*t2031;
  t2079 = 0.049*t611;
  t2088 = 0. + t2066 + t2079;
  t2107 = -0.0016*t2106;
  t2133 = -0.2707*t698;
  t2135 = 0. + t2107 + t2133;
  t2160 = -0.2707*t2106;
  t2161 = 0.0016*t698;
  t2165 = 0. + t2160 + t2161;
  t2209 = 0.0184*t2204;
  t2210 = -0.7055*t828;
  t2224 = 0. + t2209 + t2210;
  t2227 = -0.7055*t2204;
  t2236 = -0.0184*t828;
  t2242 = 0. + t2227 + t2236;
  t2291 = -0.0216*t2271;
  t2299 = -1.1135*t916;
  t2303 = 0. + t2291 + t2299;
  t2308 = -1.1135*t2271;
  t2309 = 0.0216*t916;
  t2324 = 0. + t2308 + t2309;
  t2406 = -0.135*t1963;
  t2410 = 0.049*t104;
  t2413 = 0. + t2406 + t2410;
  t2434 = -0.09*t2009;
  t2444 = 0.049*t590;
  t2459 = 0. + t2434 + t2444;
  p_output1[0]=0. + t104;
  p_output1[1]=0. - 1.*t180*t201;
  p_output1[2]=0. - 1.*t201*t311;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t964 + 0.766044*t995;
  p_output1[5]=0. + 0.642788*t1270 + 0.766044*t1298;
  p_output1[6]=0. + 0.642788*t1750 + 0.766044*t1792;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t964 + 0.642788*t995;
  p_output1[9]=0. - 0.766044*t1270 + 0.642788*t1298;
  p_output1[10]=0. - 0.766044*t1750 + 0.642788*t1792;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 - 0.004500000000000004*t104 - 0.049*t1963 + t201*t2013 + t201*t2055*t503 - 1.*t201*t2088*t590 + t2135*t639 + t2165*t690 + t2224*t705 + t2242*t799 + t2303*t877 + t2324*t905 + 0.0306*t964 - 1.1312*t995;
  p_output1[13]=0. + 0.0306*t1270 - 1.1312*t1298 - 0.135*(1. - 1.*t180) - 0.1305*t180*t201 + t104*t180*t2013 + t1047*t2055 + t1089*t2088 + t1102*t2135 + t1124*t2165 + t1160*t2224 + t1201*t2242 + t1217*t2303 + t1252*t2324 + t180*t2413 - 1.*t2459*t311;
  p_output1[14]=0.07996 + 0.0306*t1750 - 1.1312*t1792 + t1342*t2055 + t1398*t2088 + t1412*t2135 + t1462*t2165 + t1495*t2224 + t1638*t2242 + t1650*t2303 + t1703*t2324 + t180*t2459 + 0.135*t311 - 0.1305*t201*t311 + t104*t2013*t311 + t2413*t311;
  p_output1[15]=1.;
}



void H_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
