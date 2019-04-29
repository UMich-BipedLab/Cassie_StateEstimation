/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:02:36 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_RightToeBottom.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t88;
  double t450;
  double t487;
  double t438;
  double t502;
  double t413;
  double t528;
  double t531;
  double t537;
  double t467;
  double t517;
  double t518;
  double t544;
  double t401;
  double t593;
  double t607;
  double t610;
  double t520;
  double t545;
  double t563;
  double t636;
  double t390;
  double t690;
  double t697;
  double t719;
  double t567;
  double t656;
  double t671;
  double t725;
  double t75;
  double t23;
  double t269;
  double t831;
  double t832;
  double t846;
  double t805;
  double t811;
  double t818;
  double t942;
  double t974;
  double t1001;
  double t824;
  double t848;
  double t902;
  double t1059;
  double t1065;
  double t1080;
  double t928;
  double t1010;
  double t1020;
  double t1104;
  double t1109;
  double t1125;
  double t1032;
  double t1089;
  double t1090;
  double t1334;
  double t1340;
  double t1347;
  double t1238;
  double t1257;
  double t1263;
  double t1404;
  double t1410;
  double t1412;
  double t1311;
  double t1367;
  double t1382;
  double t1492;
  double t1503;
  double t1508;
  double t1395;
  double t1420;
  double t1429;
  double t1536;
  double t1543;
  double t1549;
  double t1446;
  double t1511;
  double t1516;
  double t675;
  double t741;
  double t746;
  double t765;
  double t771;
  double t781;
  double t1097;
  double t1148;
  double t1150;
  double t1155;
  double t1173;
  double t1183;
  double t1534;
  double t1553;
  double t1560;
  double t1581;
  double t1588;
  double t1590;
  double t1839;
  double t1859;
  double t1953;
  double t1960;
  double t2010;
  double t2011;
  double t2070;
  double t2072;
  double t1703;
  double t1730;
  double t1744;
  double t1745;
  double t1771;
  double t1789;
  double t1821;
  double t1880;
  double t1886;
  double t1895;
  double t1930;
  double t1934;
  double t1941;
  double t1965;
  double t1969;
  double t1970;
  double t1983;
  double t1991;
  double t1995;
  double t2013;
  double t2014;
  double t2023;
  double t2040;
  double t2049;
  double t2050;
  double t2106;
  double t2108;
  double t2109;
  double t2137;
  double t2146;
  double t2149;
  double t2249;
  double t2255;
  double t2259;
  double t2273;
  double t2285;
  double t2286;
  t88 = Cos(var1[8]);
  t450 = Cos(var1[10]);
  t487 = Sin(var1[9]);
  t438 = Cos(var1[9]);
  t502 = Sin(var1[10]);
  t413 = Cos(var1[11]);
  t528 = -1.*t88*t450*t487;
  t531 = -1.*t88*t438*t502;
  t537 = t528 + t531;
  t467 = t88*t438*t450;
  t517 = -1.*t88*t487*t502;
  t518 = t467 + t517;
  t544 = Sin(var1[11]);
  t401 = Cos(var1[12]);
  t593 = t413*t537;
  t607 = -1.*t518*t544;
  t610 = t593 + t607;
  t520 = t413*t518;
  t545 = t537*t544;
  t563 = t520 + t545;
  t636 = Sin(var1[12]);
  t390 = Cos(var1[13]);
  t690 = t401*t610;
  t697 = -1.*t563*t636;
  t719 = t690 + t697;
  t567 = t401*t563;
  t656 = t610*t636;
  t671 = t567 + t656;
  t725 = Sin(var1[13]);
  t75 = Cos(var1[7]);
  t23 = Sin(var1[8]);
  t269 = Sin(var1[7]);
  t831 = -1.*t438*t269;
  t832 = -1.*t75*t23*t487;
  t846 = t831 + t832;
  t805 = t75*t438*t23;
  t811 = -1.*t269*t487;
  t818 = t805 + t811;
  t942 = t450*t846;
  t974 = -1.*t818*t502;
  t1001 = t942 + t974;
  t824 = t450*t818;
  t848 = t846*t502;
  t902 = t824 + t848;
  t1059 = t413*t1001;
  t1065 = -1.*t902*t544;
  t1080 = t1059 + t1065;
  t928 = t413*t902;
  t1010 = t1001*t544;
  t1020 = t928 + t1010;
  t1104 = t401*t1080;
  t1109 = -1.*t1020*t636;
  t1125 = t1104 + t1109;
  t1032 = t401*t1020;
  t1089 = t1080*t636;
  t1090 = t1032 + t1089;
  t1334 = t75*t438;
  t1340 = -1.*t269*t23*t487;
  t1347 = t1334 + t1340;
  t1238 = t438*t269*t23;
  t1257 = t75*t487;
  t1263 = t1238 + t1257;
  t1404 = t450*t1347;
  t1410 = -1.*t1263*t502;
  t1412 = t1404 + t1410;
  t1311 = t450*t1263;
  t1367 = t1347*t502;
  t1382 = t1311 + t1367;
  t1492 = t413*t1412;
  t1503 = -1.*t1382*t544;
  t1508 = t1492 + t1503;
  t1395 = t413*t1382;
  t1420 = t1412*t544;
  t1429 = t1395 + t1420;
  t1536 = t401*t1508;
  t1543 = -1.*t1429*t636;
  t1549 = t1536 + t1543;
  t1446 = t401*t1429;
  t1511 = t1508*t636;
  t1516 = t1446 + t1511;
  t675 = t390*t671;
  t741 = t719*t725;
  t746 = t675 + t741;
  t765 = t390*t719;
  t771 = -1.*t671*t725;
  t781 = t765 + t771;
  t1097 = t390*t1090;
  t1148 = t1125*t725;
  t1150 = t1097 + t1148;
  t1155 = t390*t1125;
  t1173 = -1.*t1090*t725;
  t1183 = t1155 + t1173;
  t1534 = t390*t1516;
  t1553 = t1549*t725;
  t1560 = t1534 + t1553;
  t1581 = t390*t1549;
  t1588 = -1.*t1516*t725;
  t1590 = t1581 + t1588;
  t1839 = -1.*t450;
  t1859 = 1. + t1839;
  t1953 = -1.*t413;
  t1960 = 1. + t1953;
  t2010 = -1.*t401;
  t2011 = 1. + t2010;
  t2070 = -1.*t390;
  t2072 = 1. + t2070;
  t1703 = -1.*t88;
  t1730 = 1. + t1703;
  t1744 = -1.*t438;
  t1745 = 1. + t1744;
  t1771 = -0.049*t1745;
  t1789 = -0.09*t487;
  t1821 = 0. + t1771 + t1789;
  t1880 = -0.049*t1859;
  t1886 = -0.21*t502;
  t1895 = 0. + t1880 + t1886;
  t1930 = -0.21*t1859;
  t1934 = 0.049*t502;
  t1941 = 0. + t1930 + t1934;
  t1965 = -0.0016*t1960;
  t1969 = -0.2707*t544;
  t1970 = 0. + t1965 + t1969;
  t1983 = -0.2707*t1960;
  t1991 = 0.0016*t544;
  t1995 = 0. + t1983 + t1991;
  t2013 = 0.0184*t2011;
  t2014 = -0.7055*t636;
  t2023 = 0. + t2013 + t2014;
  t2040 = -0.7055*t2011;
  t2049 = -0.0184*t636;
  t2050 = 0. + t2040 + t2049;
  t2106 = -0.0216*t2072;
  t2108 = -1.1135*t725;
  t2109 = 0. + t2106 + t2108;
  t2137 = -1.1135*t2072;
  t2146 = 0.0216*t725;
  t2149 = 0. + t2137 + t2146;
  t2249 = -0.135*t1730;
  t2255 = 0.049*t23;
  t2259 = 0. + t2249 + t2255;
  t2273 = -0.09*t1745;
  t2285 = 0.049*t487;
  t2286 = 0. + t2273 + t2285;

  p_output1(0)=0. + t23;
  p_output1(1)=0. - 1.*t75*t88;
  p_output1(2)=0. - 1.*t269*t88;
  p_output1(3)=0.;
  p_output1(4)=0. + 0.642788*t746 + 0.766044*t781;
  p_output1(5)=0. + 0.642788*t1150 + 0.766044*t1183;
  p_output1(6)=0. + 0.642788*t1560 + 0.766044*t1590;
  p_output1(7)=0.;
  p_output1(8)=0. - 0.766044*t746 + 0.642788*t781;
  p_output1(9)=0. - 0.766044*t1150 + 0.642788*t1183;
  p_output1(10)=0. - 0.766044*t1560 + 0.642788*t1590;
  p_output1(11)=0.;
  p_output1(12)=-0.03155 - 0.049*t1730 - 0.004500000000000004*t23 + t1970*t518 + t1995*t537 + t2023*t563 + t2050*t610 + t2109*t671 + t2149*t719 + 0.0306*t746 - 1.1312*t781 + t1821*t88 + t1895*t438*t88 - 1.*t1941*t487*t88;
  p_output1(13)=0. + 0.0306*t1150 - 1.1312*t1183 + t1001*t1995 + t1020*t2023 + t1080*t2050 + t1090*t2109 + t1125*t2149 - 1.*t2286*t269 - 0.135*(1. - 1.*t75) + t2259*t75 + t1821*t23*t75 + t1895*t818 + t1941*t846 - 0.1305*t75*t88 + t1970*t902;
  p_output1(14)=0.07996 + 0.0306*t1560 - 1.1312*t1590 + t1263*t1895 + t1347*t1941 + t1382*t1970 + t1412*t1995 + t1429*t2023 + t1508*t2050 + t1516*t2109 + t1549*t2149 + 0.135*t269 + t2259*t269 + t1821*t23*t269 + t2286*t75 - 0.1305*t269*t88;
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_VectorNav_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



