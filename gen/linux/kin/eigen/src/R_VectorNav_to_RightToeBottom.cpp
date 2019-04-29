/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:02:37 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t236;
  double t793;
  double t846;
  double t781;
  double t928;
  double t746;
  double t1080;
  double t1097;
  double t1099;
  double t824;
  double t1001;
  double t1032;
  double t1104;
  double t656;
  double t1155;
  double t1183;
  double t1238;
  double t1059;
  double t1125;
  double t1150;
  double t1298;
  double t567;
  double t1404;
  double t1412;
  double t1446;
  double t1151;
  double t1311;
  double t1347;
  double t1468;
  double t206;
  double t24;
  double t520;
  double t1639;
  double t1648;
  double t1664;
  double t1590;
  double t1627;
  double t1629;
  double t1736;
  double t1771;
  double t1821;
  double t1631;
  double t1673;
  double t1700;
  double t1930;
  double t1934;
  double t1950;
  double t1702;
  double t1822;
  double t1886;
  double t1983;
  double t1991;
  double t1995;
  double t1895;
  double t1965;
  double t1970;
  double t2109;
  double t2136;
  double t2137;
  double t2061;
  double t2066;
  double t2106;
  double t2166;
  double t2167;
  double t2196;
  double t2108;
  double t2146;
  double t2149;
  double t2230;
  double t2234;
  double t2249;
  double t2150;
  double t2200;
  double t2222;
  double t2269;
  double t2272;
  double t2273;
  double t2228;
  double t2255;
  double t2259;
  double t1367;
  double t1508;
  double t1511;
  double t1549;
  double t1560;
  double t1573;
  double t1975;
  double t2013;
  double t2014;
  double t2023;
  double t2038;
  double t2040;
  double t2265;
  double t2285;
  double t2289;
  double t2301;
  double t2302;
  double t2303;
  t236 = Cos(var1[8]);
  t793 = Cos(var1[10]);
  t846 = Sin(var1[9]);
  t781 = Cos(var1[9]);
  t928 = Sin(var1[10]);
  t746 = Cos(var1[11]);
  t1080 = -1.*t236*t793*t846;
  t1097 = -1.*t236*t781*t928;
  t1099 = t1080 + t1097;
  t824 = t236*t781*t793;
  t1001 = -1.*t236*t846*t928;
  t1032 = t824 + t1001;
  t1104 = Sin(var1[11]);
  t656 = Cos(var1[12]);
  t1155 = t746*t1099;
  t1183 = -1.*t1032*t1104;
  t1238 = t1155 + t1183;
  t1059 = t746*t1032;
  t1125 = t1099*t1104;
  t1150 = t1059 + t1125;
  t1298 = Sin(var1[12]);
  t567 = Cos(var1[13]);
  t1404 = t656*t1238;
  t1412 = -1.*t1150*t1298;
  t1446 = t1404 + t1412;
  t1151 = t656*t1150;
  t1311 = t1238*t1298;
  t1347 = t1151 + t1311;
  t1468 = Sin(var1[13]);
  t206 = Cos(var1[7]);
  t24 = Sin(var1[8]);
  t520 = Sin(var1[7]);
  t1639 = -1.*t781*t520;
  t1648 = -1.*t206*t24*t846;
  t1664 = t1639 + t1648;
  t1590 = t206*t781*t24;
  t1627 = -1.*t520*t846;
  t1629 = t1590 + t1627;
  t1736 = t793*t1664;
  t1771 = -1.*t1629*t928;
  t1821 = t1736 + t1771;
  t1631 = t793*t1629;
  t1673 = t1664*t928;
  t1700 = t1631 + t1673;
  t1930 = t746*t1821;
  t1934 = -1.*t1700*t1104;
  t1950 = t1930 + t1934;
  t1702 = t746*t1700;
  t1822 = t1821*t1104;
  t1886 = t1702 + t1822;
  t1983 = t656*t1950;
  t1991 = -1.*t1886*t1298;
  t1995 = t1983 + t1991;
  t1895 = t656*t1886;
  t1965 = t1950*t1298;
  t1970 = t1895 + t1965;
  t2109 = t206*t781;
  t2136 = -1.*t520*t24*t846;
  t2137 = t2109 + t2136;
  t2061 = t781*t520*t24;
  t2066 = t206*t846;
  t2106 = t2061 + t2066;
  t2166 = t793*t2137;
  t2167 = -1.*t2106*t928;
  t2196 = t2166 + t2167;
  t2108 = t793*t2106;
  t2146 = t2137*t928;
  t2149 = t2108 + t2146;
  t2230 = t746*t2196;
  t2234 = -1.*t2149*t1104;
  t2249 = t2230 + t2234;
  t2150 = t746*t2149;
  t2200 = t2196*t1104;
  t2222 = t2150 + t2200;
  t2269 = t656*t2249;
  t2272 = -1.*t2222*t1298;
  t2273 = t2269 + t2272;
  t2228 = t656*t2222;
  t2255 = t2249*t1298;
  t2259 = t2228 + t2255;
  t1367 = t567*t1347;
  t1508 = t1446*t1468;
  t1511 = t1367 + t1508;
  t1549 = t567*t1446;
  t1560 = -1.*t1347*t1468;
  t1573 = t1549 + t1560;
  t1975 = t567*t1970;
  t2013 = t1995*t1468;
  t2014 = t1975 + t2013;
  t2023 = t567*t1995;
  t2038 = -1.*t1970*t1468;
  t2040 = t2023 + t2038;
  t2265 = t567*t2259;
  t2285 = t2273*t1468;
  t2289 = t2265 + t2285;
  t2301 = t567*t2273;
  t2302 = -1.*t2259*t1468;
  t2303 = t2301 + t2302;

  p_output1(0)=0. + t24;
  p_output1(1)=0. - 1.*t206*t236;
  p_output1(2)=0. - 1.*t236*t520;
  p_output1(3)=0. + 0.642788*t1511 + 0.766044*t1573;
  p_output1(4)=0. + 0.642788*t2014 + 0.766044*t2040;
  p_output1(5)=0. + 0.642788*t2289 + 0.766044*t2303;
  p_output1(6)=0. - 0.766044*t1511 + 0.642788*t1573;
  p_output1(7)=0. - 0.766044*t2014 + 0.642788*t2040;
  p_output1(8)=0. - 0.766044*t2289 + 0.642788*t2303;
}


       
Eigen::Matrix<double,3,3> R_VectorNav_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



