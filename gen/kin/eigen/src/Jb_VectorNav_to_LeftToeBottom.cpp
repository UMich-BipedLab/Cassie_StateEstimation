/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:21:08 GMT-05:00
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
  double t479;
  double t575;
  double t736;
  double t503;
  double t603;
  double t631;
  double t467;
  double t755;
  double t781;
  double t784;
  double t922;
  double t659;
  double t817;
  double t890;
  double t421;
  double t932;
  double t954;
  double t960;
  double t1103;
  double t898;
  double t987;
  double t1064;
  double t376;
  double t1149;
  double t1169;
  double t1176;
  double t317;
  double t331;
  double t1479;
  double t1486;
  double t1555;
  double t1432;
  double t1663;
  double t1680;
  double t1712;
  double t1723;
  double t1699;
  double t1765;
  double t1796;
  double t1798;
  double t1828;
  double t1832;
  double t1309;
  double t1097;
  double t1214;
  double t1242;
  double t1262;
  double t1291;
  double t1301;
  double t1307;
  double t1314;
  double t1319;
  double t1386;
  double t1403;
  double t1895;
  double t1917;
  double t1919;
  double t1797;
  double t1857;
  double t1863;
  double t2378;
  double t2430;
  double t2276;
  double t2308;
  double t2438;
  double t2482;
  double t2499;
  double t2534;
  double t2601;
  double t2626;
  double t2636;
  double t2671;
  double t2168;
  double t2177;
  double t2327;
  double t2333;
  double t2585;
  double t2694;
  double t2702;
  double t2724;
  double t2742;
  double t2839;
  double t2857;
  double t2884;
  double t2122;
  double t2130;
  double t2206;
  double t2240;
  double t2715;
  double t2890;
  double t2902;
  double t2911;
  double t2915;
  double t2928;
  double t2931;
  double t2938;
  double t1886;
  double t1938;
  double t1974;
  double t2020;
  double t2025;
  double t19;
  double t2056;
  double t2057;
  double t2967;
  double t2976;
  double t3005;
  double t3009;
  double t3012;
  double t2135;
  double t2141;
  double t2906;
  double t2942;
  double t2949;
  double t3032;
  double t3033;
  double t3062;
  double t3076;
  double t3079;
  double t3083;
  double t3085;
  double t2065;
  double t2951;
  double t2959;
  double t3016;
  double t3020;
  double t3039;
  double t3048;
  double t3088;
  double t3097;
  double t3128;
  double t3161;
  double t3163;
  double t3191;
  double t3192;
  double t3232;
  double t3247;
  double t3270;
  double t248;
  double t2028;
  double t2049;
  double t2053;
  double t3121;
  double t3124;
  double t3356;
  double t3381;
  double t3298;
  double t3300;
  double t3026;
  double t3276;
  t479 = Cos(var1[6]);
  t575 = Sin(var1[6]);
  t736 = Cos(var1[5]);
  t503 = 0.642788*t479;
  t603 = -0.766044*t575;
  t631 = t503 + t603;
  t467 = Sin(var1[5]);
  t755 = 0.766044*t479;
  t781 = 0.642788*t575;
  t784 = t755 + t781;
  t922 = Cos(var1[4]);
  t659 = t467*t631;
  t817 = t736*t784;
  t890 = 0. + t659 + t817;
  t421 = Sin(var1[4]);
  t932 = t736*t631;
  t954 = -1.*t467*t784;
  t960 = 0. + t932 + t954;
  t1103 = Sin(var1[3]);
  t898 = -1.*t421*t890;
  t987 = t922*t960;
  t1064 = 0. + t898 + t987;
  t376 = Cos(var1[3]);
  t1149 = t922*t890;
  t1169 = t421*t960;
  t1176 = 0. + t1149 + t1169;
  t317 = Cos(var1[1]);
  t331 = Cos(var1[2]);
  t1479 = -0.766044*t479;
  t1486 = -0.642788*t575;
  t1555 = t1479 + t1486;
  t1432 = -1.*t467*t631;
  t1663 = t736*t1555;
  t1680 = 0. + t1432 + t1663;
  t1712 = t467*t1555;
  t1723 = 0. + t932 + t1712;
  t1699 = t421*t1680;
  t1765 = t922*t1723;
  t1796 = 0. + t1699 + t1765;
  t1798 = t922*t1680;
  t1828 = -1.*t421*t1723;
  t1832 = 0. + t1798 + t1828;
  t1309 = Sin(var1[2]);
  t1097 = t376*t1064;
  t1214 = -1.*t1103*t1176;
  t1242 = 0. + t1097 + t1214;
  t1262 = t331*t1242;
  t1291 = t1103*t1064;
  t1301 = t376*t1176;
  t1307 = 0. + t1291 + t1301;
  t1314 = -1.*t1307*t1309;
  t1319 = 0. + t1262 + t1314;
  t1386 = t317*t1319;
  t1403 = 0. + t1386;
  t1895 = t376*t1796;
  t1917 = t1103*t1832;
  t1919 = 0. + t1895 + t1917;
  t1797 = -1.*t1103*t1796;
  t1857 = t376*t1832;
  t1863 = 0. + t1797 + t1857;
  t2378 = -1.*t479;
  t2430 = 1. + t2378;
  t2276 = -1.*t736;
  t2308 = 1. + t2276;
  t2438 = -0.0216*t2430;
  t2482 = 0.0306*t479;
  t2499 = 0.01770000000000005*t575;
  t2534 = 0. + t2438 + t2482 + t2499;
  t2601 = -1.1135*t2430;
  t2626 = -1.1312*t479;
  t2636 = 0.052199999999999996*t575;
  t2671 = 0. + t2601 + t2626 + t2636;
  t2168 = -1.*t922;
  t2177 = 1. + t2168;
  t2327 = -0.7055*t2308;
  t2333 = -0.0184*t467;
  t2585 = t467*t2534;
  t2694 = t736*t2671;
  t2702 = 0. + t2327 + t2333 + t2585 + t2694;
  t2724 = 0.0184*t2308;
  t2742 = -0.7055*t467;
  t2839 = t736*t2534;
  t2857 = -1.*t467*t2671;
  t2884 = 0. + t2724 + t2742 + t2839 + t2857;
  t2122 = -1.*t376;
  t2130 = 1. + t2122;
  t2206 = -0.0016*t2177;
  t2240 = -0.2707*t421;
  t2715 = -1.*t421*t2702;
  t2890 = t922*t2884;
  t2902 = 0. + t2206 + t2240 + t2715 + t2890;
  t2911 = -0.2707*t2177;
  t2915 = 0.0016*t421;
  t2928 = t922*t2702;
  t2931 = t421*t2884;
  t2938 = 0. + t2911 + t2915 + t2928 + t2931;
  t1886 = t331*t1863;
  t1938 = -1.*t1919*t1309;
  t1974 = 0. + t1886 + t1938;
  t2020 = t317*t1974;
  t2025 = 0. + t2020;
  t19 = Sin(var1[1]);
  t2056 = -1.*t331;
  t2057 = 1. + t2056;
  t2967 = -0.049*t2130;
  t2976 = -0.21*t1103;
  t3005 = t376*t2902;
  t3009 = -1.*t1103*t2938;
  t3012 = 0. + t2967 + t2976 + t3005 + t3009;
  t2135 = -0.21*t2130;
  t2141 = 0.049*t1103;
  t2906 = t1103*t2902;
  t2942 = t376*t2938;
  t2949 = 0. + t2135 + t2141 + t2906 + t2942;
  t3032 = -1.*t317;
  t3033 = 1. + t3032;
  t3062 = -0.049*t2057;
  t3076 = t331*t3012;
  t3079 = -0.09*t1309;
  t3083 = -1.*t2949*t1309;
  t3085 = 0. + t3062 + t3076 + t3079 + t3083;
  t2065 = -0.09*t2057;
  t2951 = t331*t2949;
  t2959 = 0.049*t1309;
  t3016 = t3012*t1309;
  t3020 = 0. + t2065 + t2951 + t2959 + t3016;
  t3039 = -0.049*t3033;
  t3048 = 0.004500000000000004*t19;
  t3088 = t317*t3085;
  t3097 = 0. + t3039 + t3048 + t3088;
  t3128 = 0.135*t3033;
  t3161 = 0.1305*t317;
  t3163 = 0.049*t19;
  t3191 = t19*t3085;
  t3192 = 0. + t3128 + t3161 + t3163 + t3191;
  t3232 = t331*t1307;
  t3247 = t1242*t1309;
  t3270 = 0. + t3232 + t3247;
  t248 = 0. + t19;
  t2028 = t331*t1919;
  t2049 = t1863*t1309;
  t2053 = 0. + t2028 + t2049;
  t3121 = t19*t1974;
  t3124 = 0. + t3121;
  t3356 = -1.*t317;
  t3381 = 0. + t3356;
  t3298 = t19*t1319;
  t3300 = 0. + t3298;
  t3026 = t2053*t3020;
  t3276 = -1.*t3020*t3270;

  p_output1(0)=t248;
  p_output1(1)=t1403;
  p_output1(2)=t2025;
  p_output1(3)=0. + t1403*(t3026 + t2025*t3097 + t3124*t3192) + t2025*(-1.*t1403*t3097 + t3276 - 1.*t3192*t3300);
  p_output1(4)=t248*(-1.*t2053*t3020 - 1.*t2025*t3097 - 1.*t3124*t3192) - 0.135*t3270 + t2025*(0. + t248*t3097 + t3192*t3381);
  p_output1(5)=-0.135*t2053 + t248*(t1403*t3097 + t3020*t3270 + t3192*t3300) + t1403*(0. - 1.*t248*t3097 - 1.*t3192*t3381);
  p_output1(6)=0.;
  p_output1(7)=t3270;
  p_output1(8)=t2053;
  p_output1(9)=-0.049 + (0. + t3026 + t1974*t3085)*t3270 + t2053*(0. - 1.*t1319*t3085 + t3276);
  p_output1(10)=0. + 0.135*t1319 - 0.1305*t2053;
  p_output1(11)=0. + 0.135*t1974 + 0.1305*t3270;
  p_output1(12)=1.;
  p_output1(13)=0.;
  p_output1(14)=0.;
  p_output1(15)=0.;
  p_output1(16)=0. - 0.09*t1242 + 0.049*t1307 - 1.*t1919*t2949 - 1.*t1863*t3012;
  p_output1(17)=0. - 0.09*t1863 + 0.049*t1919 + t1307*t2949 + t1242*t3012;
  p_output1(18)=1.;
  p_output1(19)=0.;
  p_output1(20)=0.;
  p_output1(21)=0.;
  p_output1(22)=0. - 0.21*t1064 + 0.049*t1176 - 1.*t1832*t2902 - 1.*t1796*t2938;
  p_output1(23)=0. + 0.049*t1796 - 0.21*t1832 + t1064*t2902 + t1176*t2938;
  p_output1(24)=1.;
  p_output1(25)=0.;
  p_output1(26)=0.;
  p_output1(27)=0.;
  p_output1(28)=0. - 1.*t1723*t2702 - 1.*t1680*t2884 + 0.0016*t890 - 0.2707*t960;
  p_output1(29)=0. - 0.2707*t1680 + 0.0016*t1723 + t2702*t890 + t2884*t960;
  p_output1(30)=1.;
  p_output1(31)=0.;
  p_output1(32)=0.;
  p_output1(33)=0.;
  p_output1(34)=0. - 1.*t1555*t2534 - 0.7055*t631 - 1.*t2671*t631 - 0.0184*t784;
  p_output1(35)=0. - 0.7055*t1555 - 0.0184*t631 + t2534*t631 + t2671*t784;
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
{
  /* Call Subroutines */
  Eigen::Matrix<double,6,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



