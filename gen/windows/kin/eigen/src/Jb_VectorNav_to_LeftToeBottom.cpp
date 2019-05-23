/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:32:33 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_VectorNav_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,6,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t558;
  double t603;
  double t701;
  double t576;
  double t676;
  double t688;
  double t505;
  double t702;
  double t719;
  double t739;
  double t806;
  double t693;
  double t778;
  double t801;
  double t424;
  double t881;
  double t893;
  double t905;
  double t959;
  double t803;
  double t911;
  double t923;
  double t423;
  double t970;
  double t1008;
  double t1036;
  double t323;
  double t418;
  double t1299;
  double t1316;
  double t1357;
  double t1288;
  double t1406;
  double t1410;
  double t1453;
  double t1464;
  double t1449;
  double t1519;
  double t1537;
  double t1571;
  double t1579;
  double t1592;
  double t1211;
  double t931;
  double t1093;
  double t1124;
  double t1130;
  double t1132;
  double t1162;
  double t1194;
  double t1213;
  double t1216;
  double t1252;
  double t1255;
  double t1624;
  double t1689;
  double t1707;
  double t1552;
  double t1603;
  double t1613;
  double t2191;
  double t2198;
  double t2086;
  double t2090;
  double t2205;
  double t2208;
  double t2249;
  double t2287;
  double t2337;
  double t2375;
  double t2396;
  double t2404;
  double t2023;
  double t2036;
  double t2138;
  double t2175;
  double t2323;
  double t2432;
  double t2452;
  double t2493;
  double t2498;
  double t2502;
  double t2508;
  double t2524;
  double t1956;
  double t1958;
  double t2038;
  double t2079;
  double t2476;
  double t2536;
  double t2537;
  double t2580;
  double t2601;
  double t2645;
  double t2665;
  double t2670;
  double t1615;
  double t1717;
  double t1742;
  double t1757;
  double t1809;
  double t55;
  double t1919;
  double t1925;
  double t2814;
  double t2833;
  double t2854;
  double t2862;
  double t2931;
  double t2002;
  double t2004;
  double t2556;
  double t2710;
  double t2721;
  double t2948;
  double t2958;
  double t2998;
  double t3006;
  double t3013;
  double t3027;
  double t3031;
  double t1945;
  double t2741;
  double t2793;
  double t2934;
  double t2935;
  double t2968;
  double t2983;
  double t3036;
  double t3079;
  double t3121;
  double t3145;
  double t3148;
  double t3152;
  double t3154;
  double t3202;
  double t3203;
  double t3235;
  double t128;
  double t1848;
  double t1853;
  double t1872;
  double t3092;
  double t3111;
  double t3340;
  double t3342;
  double t3272;
  double t3279;
  double t2947;
  double t3244;
  t558 = Cos(var1[6]);
  t603 = Sin(var1[6]);
  t701 = Cos(var1[5]);
  t576 = 0.642788*t558;
  t676 = -0.766044*t603;
  t688 = t576 + t676;
  t505 = Sin(var1[5]);
  t702 = 0.766044*t558;
  t719 = 0.642788*t603;
  t739 = t702 + t719;
  t806 = Cos(var1[4]);
  t693 = t505*t688;
  t778 = t701*t739;
  t801 = 0. + t693 + t778;
  t424 = Sin(var1[4]);
  t881 = t701*t688;
  t893 = -1.*t505*t739;
  t905 = 0. + t881 + t893;
  t959 = Sin(var1[3]);
  t803 = -1.*t424*t801;
  t911 = t806*t905;
  t923 = 0. + t803 + t911;
  t423 = Cos(var1[3]);
  t970 = t806*t801;
  t1008 = t424*t905;
  t1036 = 0. + t970 + t1008;
  t323 = Cos(var1[1]);
  t418 = Cos(var1[2]);
  t1299 = -0.766044*t558;
  t1316 = -0.642788*t603;
  t1357 = t1299 + t1316;
  t1288 = -1.*t505*t688;
  t1406 = t701*t1357;
  t1410 = 0. + t1288 + t1406;
  t1453 = t505*t1357;
  t1464 = 0. + t881 + t1453;
  t1449 = t424*t1410;
  t1519 = t806*t1464;
  t1537 = 0. + t1449 + t1519;
  t1571 = t806*t1410;
  t1579 = -1.*t424*t1464;
  t1592 = 0. + t1571 + t1579;
  t1211 = Sin(var1[2]);
  t931 = t423*t923;
  t1093 = -1.*t959*t1036;
  t1124 = 0. + t931 + t1093;
  t1130 = t418*t1124;
  t1132 = t959*t923;
  t1162 = t423*t1036;
  t1194 = 0. + t1132 + t1162;
  t1213 = -1.*t1194*t1211;
  t1216 = 0. + t1130 + t1213;
  t1252 = t323*t1216;
  t1255 = 0. + t1252;
  t1624 = t423*t1537;
  t1689 = t959*t1592;
  t1707 = 0. + t1624 + t1689;
  t1552 = -1.*t959*t1537;
  t1603 = t423*t1592;
  t1613 = 0. + t1552 + t1603;
  t2191 = -1.*t558;
  t2198 = 1. + t2191;
  t2086 = -1.*t701;
  t2090 = 1. + t2086;
  t2205 = -0.0216*t2198;
  t2208 = 0.0306*t558;
  t2249 = 0.01770000000000005*t603;
  t2287 = 0. + t2205 + t2208 + t2249;
  t2337 = -1.1135*t2198;
  t2375 = -1.1312*t558;
  t2396 = 0.052199999999999996*t603;
  t2404 = 0. + t2337 + t2375 + t2396;
  t2023 = -1.*t806;
  t2036 = 1. + t2023;
  t2138 = -0.7055*t2090;
  t2175 = -0.0184*t505;
  t2323 = t505*t2287;
  t2432 = t701*t2404;
  t2452 = 0. + t2138 + t2175 + t2323 + t2432;
  t2493 = 0.0184*t2090;
  t2498 = -0.7055*t505;
  t2502 = t701*t2287;
  t2508 = -1.*t505*t2404;
  t2524 = 0. + t2493 + t2498 + t2502 + t2508;
  t1956 = -1.*t423;
  t1958 = 1. + t1956;
  t2038 = -0.0016*t2036;
  t2079 = -0.2707*t424;
  t2476 = -1.*t424*t2452;
  t2536 = t806*t2524;
  t2537 = 0. + t2038 + t2079 + t2476 + t2536;
  t2580 = -0.2707*t2036;
  t2601 = 0.0016*t424;
  t2645 = t806*t2452;
  t2665 = t424*t2524;
  t2670 = 0. + t2580 + t2601 + t2645 + t2665;
  t1615 = t418*t1613;
  t1717 = -1.*t1707*t1211;
  t1742 = 0. + t1615 + t1717;
  t1757 = t323*t1742;
  t1809 = 0. + t1757;
  t55 = Sin(var1[1]);
  t1919 = -1.*t418;
  t1925 = 1. + t1919;
  t2814 = -0.049*t1958;
  t2833 = -0.21*t959;
  t2854 = t423*t2537;
  t2862 = -1.*t959*t2670;
  t2931 = 0. + t2814 + t2833 + t2854 + t2862;
  t2002 = -0.21*t1958;
  t2004 = 0.049*t959;
  t2556 = t959*t2537;
  t2710 = t423*t2670;
  t2721 = 0. + t2002 + t2004 + t2556 + t2710;
  t2948 = -1.*t323;
  t2958 = 1. + t2948;
  t2998 = -0.049*t1925;
  t3006 = t418*t2931;
  t3013 = -0.09*t1211;
  t3027 = -1.*t2721*t1211;
  t3031 = 0. + t2998 + t3006 + t3013 + t3027;
  t1945 = -0.09*t1925;
  t2741 = t418*t2721;
  t2793 = 0.049*t1211;
  t2934 = t2931*t1211;
  t2935 = 0. + t1945 + t2741 + t2793 + t2934;
  t2968 = -0.049*t2958;
  t2983 = 0.004500000000000004*t55;
  t3036 = t323*t3031;
  t3079 = 0. + t2968 + t2983 + t3036;
  t3121 = 0.135*t2958;
  t3145 = 0.1305*t323;
  t3148 = 0.049*t55;
  t3152 = t55*t3031;
  t3154 = 0. + t3121 + t3145 + t3148 + t3152;
  t3202 = t418*t1194;
  t3203 = t1124*t1211;
  t3235 = 0. + t3202 + t3203;
  t128 = 0. + t55;
  t1848 = t418*t1707;
  t1853 = t1613*t1211;
  t1872 = 0. + t1848 + t1853;
  t3092 = t55*t1742;
  t3111 = 0. + t3092;
  t3340 = -1.*t323;
  t3342 = 0. + t3340;
  t3272 = t55*t1216;
  t3279 = 0. + t3272;
  t2947 = t1872*t2935;
  t3244 = -1.*t2935*t3235;

  p_output1(0)=t128;
  p_output1(1)=t1255;
  p_output1(2)=t1809;
  p_output1(3)=0. + t1255*(t2947 + t1809*t3079 + t3111*t3154) + t1809*(-1.*t1255*t3079 + t3244 - 1.*t3154*t3279);
  p_output1(4)=t128*(-1.*t1872*t2935 - 1.*t1809*t3079 - 1.*t3111*t3154) - 0.135*t3235 + t1809*(0. + t128*t3079 + t3154*t3342);
  p_output1(5)=-0.135*t1872 + t128*(t1255*t3079 + t2935*t3235 + t3154*t3279) + t1255*(0. - 1.*t128*t3079 - 1.*t3154*t3342);
  p_output1(6)=0.;
  p_output1(7)=t3235;
  p_output1(8)=t1872;
  p_output1(9)=-0.049 + (0. + t2947 + t1742*t3031)*t3235 + t1872*(0. - 1.*t1216*t3031 + t3244);
  p_output1(10)=0. + 0.135*t1216 - 0.1305*t1872;
  p_output1(11)=0. + 0.135*t1742 + 0.1305*t3235;
  p_output1(12)=1.;
  p_output1(13)=0.;
  p_output1(14)=0.;
  p_output1(15)=0.;
  p_output1(16)=0. - 0.09*t1124 + 0.049*t1194 - 1.*t1707*t2721 - 1.*t1613*t2931;
  p_output1(17)=0. - 0.09*t1613 + 0.049*t1707 + t1194*t2721 + t1124*t2931;
  p_output1(18)=1.;
  p_output1(19)=0.;
  p_output1(20)=0.;
  p_output1(21)=0.;
  p_output1(22)=0. + 0.049*t1036 - 1.*t1592*t2537 - 1.*t1537*t2670 - 0.21*t923;
  p_output1(23)=0. + 0.049*t1537 - 0.21*t1592 + t1036*t2670 + t2537*t923;
  p_output1(24)=1.;
  p_output1(25)=0.;
  p_output1(26)=0.;
  p_output1(27)=0.;
  p_output1(28)=0. - 1.*t1464*t2452 - 1.*t1410*t2524 + 0.0016*t801 - 0.2707*t905;
  p_output1(29)=0. - 0.2707*t1410 + 0.0016*t1464 + t2452*t801 + t2524*t905;
  p_output1(30)=1.;
  p_output1(31)=0.;
  p_output1(32)=0.;
  p_output1(33)=0.;
  p_output1(34)=0. - 1.*t1357*t2287 - 0.7055*t688 - 1.*t2404*t688 - 0.0184*t739;
  p_output1(35)=0. - 0.7055*t1357 - 0.0184*t688 + t2287*t688 + t2404*t739;
  p_output1(36)=1.;
  p_output1(37)=0.;
  p_output1(38)=0.;
  p_output1(39)=0.;
  p_output1(40)=0.05136484440000011;
  p_output1(41)=0.019994554799999897;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=0;
  p_output1(46)=0;
  p_output1(47)=0;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
  p_output1(54)=0;
  p_output1(55)=0;
  p_output1(56)=0;
  p_output1(57)=0;
  p_output1(58)=0;
  p_output1(59)=0;
  p_output1(60)=0;
  p_output1(61)=0;
  p_output1(62)=0;
  p_output1(63)=0;
  p_output1(64)=0;
  p_output1(65)=0;
  p_output1(66)=0;
  p_output1(67)=0;
  p_output1(68)=0;
  p_output1(69)=0;
  p_output1(70)=0;
  p_output1(71)=0;
  p_output1(72)=0;
  p_output1(73)=0;
  p_output1(74)=0;
  p_output1(75)=0;
  p_output1(76)=0;
  p_output1(77)=0;
  p_output1(78)=0;
  p_output1(79)=0;
  p_output1(80)=0;
  p_output1(81)=0;
  p_output1(82)=0;
  p_output1(83)=0;
}


       
Eigen::Matrix<double,6,14> Jb_VectorNav_to_LeftToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void Jb_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,6,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,6,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



