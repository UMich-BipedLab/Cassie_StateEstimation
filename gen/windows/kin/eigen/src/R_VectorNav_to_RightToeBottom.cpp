/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:11:42 GMT-04:00
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
  double t394;
  double t870;
  double t932;
  double t845;
  double t942;
  double t838;
  double t1049;
  double t1070;
  double t1077;
  double t914;
  double t985;
  double t988;
  double t1088;
  double t811;
  double t1116;
  double t1130;
  double t1165;
  double t997;
  double t1104;
  double t1105;
  double t1171;
  double t775;
  double t1393;
  double t1424;
  double t1431;
  double t1112;
  double t1234;
  double t1266;
  double t1468;
  double t253;
  double t121;
  double t576;
  double t1623;
  double t1625;
  double t1653;
  double t1584;
  double t1616;
  double t1619;
  double t1780;
  double t1808;
  double t1893;
  double t1621;
  double t1672;
  double t1695;
  double t1980;
  double t1982;
  double t1991;
  double t1708;
  double t1896;
  double t1937;
  double t2081;
  double t2086;
  double t2095;
  double t1944;
  double t1994;
  double t2056;
  double t2229;
  double t2231;
  double t2239;
  double t2176;
  double t2177;
  double t2182;
  double t2258;
  double t2264;
  double t2271;
  double t2223;
  double t2250;
  double t2252;
  double t2295;
  double t2305;
  double t2308;
  double t2255;
  double t2272;
  double t2290;
  double t2318;
  double t2325;
  double t2329;
  double t2292;
  double t2309;
  double t2311;
  double t1304;
  double t1483;
  double t1531;
  double t1554;
  double t1572;
  double t1573;
  double t2061;
  double t2101;
  double t2109;
  double t2147;
  double t2153;
  double t2154;
  double t2312;
  double t2340;
  double t2344;
  double t2357;
  double t2366;
  double t2370;
  t394 = Cos(var1[8]);
  t870 = Cos(var1[10]);
  t932 = Sin(var1[9]);
  t845 = Cos(var1[9]);
  t942 = Sin(var1[10]);
  t838 = Cos(var1[11]);
  t1049 = -1.*t394*t870*t932;
  t1070 = -1.*t394*t845*t942;
  t1077 = t1049 + t1070;
  t914 = t394*t845*t870;
  t985 = -1.*t394*t932*t942;
  t988 = t914 + t985;
  t1088 = Sin(var1[11]);
  t811 = Cos(var1[12]);
  t1116 = t838*t1077;
  t1130 = -1.*t988*t1088;
  t1165 = t1116 + t1130;
  t997 = t838*t988;
  t1104 = t1077*t1088;
  t1105 = t997 + t1104;
  t1171 = Sin(var1[12]);
  t775 = Cos(var1[13]);
  t1393 = t811*t1165;
  t1424 = -1.*t1105*t1171;
  t1431 = t1393 + t1424;
  t1112 = t811*t1105;
  t1234 = t1165*t1171;
  t1266 = t1112 + t1234;
  t1468 = Sin(var1[13]);
  t253 = Cos(var1[7]);
  t121 = Sin(var1[8]);
  t576 = Sin(var1[7]);
  t1623 = -1.*t845*t576;
  t1625 = -1.*t253*t121*t932;
  t1653 = t1623 + t1625;
  t1584 = t253*t845*t121;
  t1616 = -1.*t576*t932;
  t1619 = t1584 + t1616;
  t1780 = t870*t1653;
  t1808 = -1.*t1619*t942;
  t1893 = t1780 + t1808;
  t1621 = t870*t1619;
  t1672 = t1653*t942;
  t1695 = t1621 + t1672;
  t1980 = t838*t1893;
  t1982 = -1.*t1695*t1088;
  t1991 = t1980 + t1982;
  t1708 = t838*t1695;
  t1896 = t1893*t1088;
  t1937 = t1708 + t1896;
  t2081 = t811*t1991;
  t2086 = -1.*t1937*t1171;
  t2095 = t2081 + t2086;
  t1944 = t811*t1937;
  t1994 = t1991*t1171;
  t2056 = t1944 + t1994;
  t2229 = t253*t845;
  t2231 = -1.*t576*t121*t932;
  t2239 = t2229 + t2231;
  t2176 = t845*t576*t121;
  t2177 = t253*t932;
  t2182 = t2176 + t2177;
  t2258 = t870*t2239;
  t2264 = -1.*t2182*t942;
  t2271 = t2258 + t2264;
  t2223 = t870*t2182;
  t2250 = t2239*t942;
  t2252 = t2223 + t2250;
  t2295 = t838*t2271;
  t2305 = -1.*t2252*t1088;
  t2308 = t2295 + t2305;
  t2255 = t838*t2252;
  t2272 = t2271*t1088;
  t2290 = t2255 + t2272;
  t2318 = t811*t2308;
  t2325 = -1.*t2290*t1171;
  t2329 = t2318 + t2325;
  t2292 = t811*t2290;
  t2309 = t2308*t1171;
  t2311 = t2292 + t2309;
  t1304 = t775*t1266;
  t1483 = t1431*t1468;
  t1531 = t1304 + t1483;
  t1554 = t775*t1431;
  t1572 = -1.*t1266*t1468;
  t1573 = t1554 + t1572;
  t2061 = t775*t2056;
  t2101 = t2095*t1468;
  t2109 = t2061 + t2101;
  t2147 = t775*t2095;
  t2153 = -1.*t2056*t1468;
  t2154 = t2147 + t2153;
  t2312 = t775*t2311;
  t2340 = t2329*t1468;
  t2344 = t2312 + t2340;
  t2357 = t775*t2329;
  t2366 = -1.*t2311*t1468;
  t2370 = t2357 + t2366;

  p_output1(0)=0. + t121;
  p_output1(1)=0. - 1.*t253*t394;
  p_output1(2)=0. - 1.*t394*t576;
  p_output1(3)=0. + 0.642788*t1531 + 0.766044*t1573;
  p_output1(4)=0. + 0.642788*t2109 + 0.766044*t2154;
  p_output1(5)=0. + 0.642788*t2344 + 0.766044*t2370;
  p_output1(6)=0. - 0.766044*t1531 + 0.642788*t1573;
  p_output1(7)=0. - 0.766044*t2109 + 0.642788*t2154;
  p_output1(8)=0. - 0.766044*t2344 + 0.642788*t2370;
}


       
Eigen::Matrix<double,3,3> R_VectorNav_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void R_VectorNav_to_RightToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



