/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:11:41 GMT-04:00
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
  double t102;
  double t373;
  double t434;
  double t356;
  double t447;
  double t349;
  double t524;
  double t526;
  double t561;
  double t394;
  double t450;
  double t482;
  double t572;
  double t337;
  double t591;
  double t616;
  double t623;
  double t517;
  double t576;
  double t577;
  double t666;
  double t312;
  double t737;
  double t741;
  double t754;
  double t583;
  double t693;
  double t718;
  double t768;
  double t78;
  double t49;
  double t203;
  double t900;
  double t908;
  double t914;
  double t848;
  double t858;
  double t863;
  double t967;
  double t974;
  double t985;
  double t870;
  double t931;
  double t940;
  double t997;
  double t1013;
  double t1047;
  double t942;
  double t988;
  double t990;
  double t1094;
  double t1102;
  double t1104;
  double t991;
  double t1049;
  double t1076;
  double t1197;
  double t1199;
  double t1234;
  double t1156;
  double t1165;
  double t1169;
  double t1304;
  double t1333;
  double t1393;
  double t1171;
  double t1266;
  double t1297;
  double t1468;
  double t1469;
  double t1483;
  double t1302;
  double t1405;
  double t1412;
  double t1569;
  double t1570;
  double t1572;
  double t1431;
  double t1533;
  double t1542;
  double t735;
  double t771;
  double t775;
  double t803;
  double t829;
  double t838;
  double t1088;
  double t1105;
  double t1112;
  double t1120;
  double t1122;
  double t1124;
  double t1554;
  double t1573;
  double t1582;
  double t1609;
  double t1615;
  double t1616;
  double t1909;
  double t1925;
  double t2032;
  double t2041;
  double t2126;
  double t2131;
  double t2185;
  double t2218;
  double t1774;
  double t1778;
  double t1809;
  double t1859;
  double t1892;
  double t1893;
  double t1896;
  double t1937;
  double t1944;
  double t1948;
  double t1982;
  double t1985;
  double t1987;
  double t2056;
  double t2061;
  double t2081;
  double t2095;
  double t2097;
  double t2101;
  double t2139;
  double t2147;
  double t2153;
  double t2155;
  double t2172;
  double t2177;
  double t2223;
  double t2229;
  double t2231;
  double t2250;
  double t2255;
  double t2258;
  double t2309;
  double t2311;
  double t2318;
  double t2340;
  double t2344;
  double t2350;
  t102 = Cos(var1[8]);
  t373 = Cos(var1[10]);
  t434 = Sin(var1[9]);
  t356 = Cos(var1[9]);
  t447 = Sin(var1[10]);
  t349 = Cos(var1[11]);
  t524 = -1.*t102*t373*t434;
  t526 = -1.*t102*t356*t447;
  t561 = t524 + t526;
  t394 = t102*t356*t373;
  t450 = -1.*t102*t434*t447;
  t482 = t394 + t450;
  t572 = Sin(var1[11]);
  t337 = Cos(var1[12]);
  t591 = t349*t561;
  t616 = -1.*t482*t572;
  t623 = t591 + t616;
  t517 = t349*t482;
  t576 = t561*t572;
  t577 = t517 + t576;
  t666 = Sin(var1[12]);
  t312 = Cos(var1[13]);
  t737 = t337*t623;
  t741 = -1.*t577*t666;
  t754 = t737 + t741;
  t583 = t337*t577;
  t693 = t623*t666;
  t718 = t583 + t693;
  t768 = Sin(var1[13]);
  t78 = Cos(var1[7]);
  t49 = Sin(var1[8]);
  t203 = Sin(var1[7]);
  t900 = -1.*t356*t203;
  t908 = -1.*t78*t49*t434;
  t914 = t900 + t908;
  t848 = t78*t356*t49;
  t858 = -1.*t203*t434;
  t863 = t848 + t858;
  t967 = t373*t914;
  t974 = -1.*t863*t447;
  t985 = t967 + t974;
  t870 = t373*t863;
  t931 = t914*t447;
  t940 = t870 + t931;
  t997 = t349*t985;
  t1013 = -1.*t940*t572;
  t1047 = t997 + t1013;
  t942 = t349*t940;
  t988 = t985*t572;
  t990 = t942 + t988;
  t1094 = t337*t1047;
  t1102 = -1.*t990*t666;
  t1104 = t1094 + t1102;
  t991 = t337*t990;
  t1049 = t1047*t666;
  t1076 = t991 + t1049;
  t1197 = t78*t356;
  t1199 = -1.*t203*t49*t434;
  t1234 = t1197 + t1199;
  t1156 = t356*t203*t49;
  t1165 = t78*t434;
  t1169 = t1156 + t1165;
  t1304 = t373*t1234;
  t1333 = -1.*t1169*t447;
  t1393 = t1304 + t1333;
  t1171 = t373*t1169;
  t1266 = t1234*t447;
  t1297 = t1171 + t1266;
  t1468 = t349*t1393;
  t1469 = -1.*t1297*t572;
  t1483 = t1468 + t1469;
  t1302 = t349*t1297;
  t1405 = t1393*t572;
  t1412 = t1302 + t1405;
  t1569 = t337*t1483;
  t1570 = -1.*t1412*t666;
  t1572 = t1569 + t1570;
  t1431 = t337*t1412;
  t1533 = t1483*t666;
  t1542 = t1431 + t1533;
  t735 = t312*t718;
  t771 = t754*t768;
  t775 = t735 + t771;
  t803 = t312*t754;
  t829 = -1.*t718*t768;
  t838 = t803 + t829;
  t1088 = t312*t1076;
  t1105 = t1104*t768;
  t1112 = t1088 + t1105;
  t1120 = t312*t1104;
  t1122 = -1.*t1076*t768;
  t1124 = t1120 + t1122;
  t1554 = t312*t1542;
  t1573 = t1572*t768;
  t1582 = t1554 + t1573;
  t1609 = t312*t1572;
  t1615 = -1.*t1542*t768;
  t1616 = t1609 + t1615;
  t1909 = -1.*t373;
  t1925 = 1. + t1909;
  t2032 = -1.*t349;
  t2041 = 1. + t2032;
  t2126 = -1.*t337;
  t2131 = 1. + t2126;
  t2185 = -1.*t312;
  t2218 = 1. + t2185;
  t1774 = -1.*t102;
  t1778 = 1. + t1774;
  t1809 = -1.*t356;
  t1859 = 1. + t1809;
  t1892 = -0.049*t1859;
  t1893 = -0.09*t434;
  t1896 = 0. + t1892 + t1893;
  t1937 = -0.049*t1925;
  t1944 = -0.21*t447;
  t1948 = 0. + t1937 + t1944;
  t1982 = -0.21*t1925;
  t1985 = 0.049*t447;
  t1987 = 0. + t1982 + t1985;
  t2056 = -0.0016*t2041;
  t2061 = -0.2707*t572;
  t2081 = 0. + t2056 + t2061;
  t2095 = -0.2707*t2041;
  t2097 = 0.0016*t572;
  t2101 = 0. + t2095 + t2097;
  t2139 = 0.0184*t2131;
  t2147 = -0.7055*t666;
  t2153 = 0. + t2139 + t2147;
  t2155 = -0.7055*t2131;
  t2172 = -0.0184*t666;
  t2177 = 0. + t2155 + t2172;
  t2223 = -0.0216*t2218;
  t2229 = -1.1135*t768;
  t2231 = 0. + t2223 + t2229;
  t2250 = -1.1135*t2218;
  t2255 = 0.0216*t768;
  t2258 = 0. + t2250 + t2255;
  t2309 = -0.135*t1778;
  t2311 = 0.049*t49;
  t2318 = 0. + t2309 + t2311;
  t2340 = -0.09*t1859;
  t2344 = 0.049*t434;
  t2350 = 0. + t2340 + t2344;

  p_output1(0)=0. + t49;
  p_output1(1)=0. - 1.*t102*t78;
  p_output1(2)=0. - 1.*t102*t203;
  p_output1(3)=0.;
  p_output1(4)=0. + 0.642788*t775 + 0.766044*t838;
  p_output1(5)=0. + 0.642788*t1112 + 0.766044*t1124;
  p_output1(6)=0. + 0.642788*t1582 + 0.766044*t1616;
  p_output1(7)=0.;
  p_output1(8)=0. - 0.766044*t775 + 0.642788*t838;
  p_output1(9)=0. - 0.766044*t1112 + 0.642788*t1124;
  p_output1(10)=0. - 0.766044*t1582 + 0.642788*t1616;
  p_output1(11)=0.;
  p_output1(12)=-0.03155 - 0.049*t1778 + t102*t1896 + t102*t1948*t356 - 1.*t102*t1987*t434 + t2081*t482 - 0.004500000000000004*t49 + t2101*t561 + t2153*t577 + t2177*t623 + t2231*t718 + t2258*t754 + 0.0306*t775 - 1.1312*t838;
  p_output1(13)=0. + 0.0306*t1112 - 1.1312*t1124 + t1047*t2177 + t1076*t2231 + t1104*t2258 - 1.*t203*t2350 - 0.135*(1. - 1.*t78) - 0.1305*t102*t78 + t2318*t78 + t1896*t49*t78 + t1948*t863 + t1987*t914 + t2081*t940 + t2101*t985 + t2153*t990;
  p_output1(14)=0.07996 + 0.0306*t1582 - 1.1312*t1616 + t1169*t1948 + t1234*t1987 + 0.135*t203 - 0.1305*t102*t203 + t1297*t2081 + t1393*t2101 + t1412*t2153 + t1483*t2177 + t1542*t2231 + t1572*t2258 + t203*t2318 + t1896*t203*t49 + t2350*t78;
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_VectorNav_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void H_VectorNav_to_RightToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



