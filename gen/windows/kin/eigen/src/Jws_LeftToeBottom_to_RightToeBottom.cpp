/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:35:31 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jws_LeftToeBottom_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t536;
  double t580;
  double t522;
  double t543;
  double t614;
  double t703;
  double t548;
  double t644;
  double t692;
  double t519;
  double t741;
  double t742;
  double t757;
  double t770;
  double t699;
  double t762;
  double t763;
  double t503;
  double t775;
  double t805;
  double t846;
  double t884;
  double t765;
  double t852;
  double t855;
  double t343;
  double t886;
  double t919;
  double t941;
  double t1095;
  double t871;
  double t991;
  double t1053;
  double t277;
  double t1108;
  double t1128;
  double t1132;
  double t1283;
  double t1290;
  double t1291;
  double t1294;
  double t1309;
  double t1317;
  double t1292;
  double t1383;
  double t1398;
  double t1407;
  double t1408;
  double t1411;
  double t1401;
  double t1432;
  double t1481;
  double t1558;
  double t1565;
  double t1571;
  double t1508;
  double t1576;
  double t1594;
  double t1626;
  double t1643;
  double t1673;
  double t1094;
  double t1134;
  double t1156;
  double t1196;
  double t1208;
  double t1214;
  double t1607;
  double t1691;
  double t1703;
  double t1718;
  double t1722;
  double t1729;
  double t1790;
  double t1794;
  double t1828;
  double t1842;
  double t1877;
  double t1883;
  double t1918;
  double t1971;
  double t1973;
  double t1977;
  double t1968;
  double t1992;
  double t2033;
  double t2038;
  double t2052;
  double t2056;
  double t2037;
  double t2067;
  double t2077;
  double t2090;
  double t2092;
  double t2109;
  double t1765;
  double t1778;
  double t1785;
  double t1713;
  double t1732;
  double t1738;
  double t2089;
  double t2123;
  double t2126;
  double t2149;
  double t2152;
  double t2186;
  double t1191;
  double t1249;
  double t1272;
  double t2242;
  double t2247;
  double t2265;
  double t2133;
  double t2188;
  double t2189;
  double t2204;
  double t2212;
  double t2222;
  double t2226;
  double t2266;
  double t2285;
  double t2305;
  double t2310;
  double t2324;
  double t2339;
  double t2345;
  double t2361;
  double t2365;
  double t2387;
  double t2474;
  double t2477;
  double t2486;
  double t2478;
  double t2500;
  double t2527;
  double t2531;
  double t1741;
  double t1830;
  double t1838;
  double t2641;
  double t2650;
  double t2561;
  double t2563;
  double t2565;
  double t2686;
  double t2699;
  double t2410;
  double t2411;
  double t2412;
  double t2673;
  double t2681;
  double t2576;
  double t2581;
  double t2589;
  double t2618;
  double t2440;
  double t2457;
  double t2458;
  double t2628;
  double t2630;
  double t2632;
  double t2653;
  double t2685;
  double t2712;
  double t2715;
  double t2727;
  double t2731;
  double t2732;
  double t2736;
  double t2744;
  double t2747;
  double t2758;
  double t2771;
  double t2804;
  double t2808;
  double t2843;
  double t2860;
  double t2866;
  double t2974;
  double t3026;
  double t3042;
  double t3082;
  double t3105;
  double t3070;
  double t3072;
  double t3056;
  double t3074;
  double t3112;
  double t3138;
  double t3146;
  double t3156;
  double t3161;
  double t3162;
  double t3169;
  double t3170;
  double t3182;
  double t3187;
  t536 = Cos(var1[2]);
  t580 = Sin(var1[0]);
  t522 = Cos(var1[0]);
  t543 = Sin(var1[1]);
  t614 = Sin(var1[2]);
  t703 = Cos(var1[3]);
  t548 = t522*t536*t543;
  t644 = -1.*t580*t614;
  t692 = t548 + t644;
  t519 = Sin(var1[3]);
  t741 = -1.*t536*t580;
  t742 = -1.*t522*t543*t614;
  t757 = t741 + t742;
  t770 = Cos(var1[4]);
  t699 = -1.*t519*t692;
  t762 = t703*t757;
  t763 = t699 + t762;
  t503 = Sin(var1[4]);
  t775 = t703*t692;
  t805 = t519*t757;
  t846 = t775 + t805;
  t884 = Cos(var1[5]);
  t765 = t503*t763;
  t852 = t770*t846;
  t855 = t765 + t852;
  t343 = Sin(var1[5]);
  t886 = t770*t763;
  t919 = -1.*t503*t846;
  t941 = t886 + t919;
  t1095 = Cos(var1[6]);
  t871 = -1.*t343*t855;
  t991 = t884*t941;
  t1053 = t871 + t991;
  t277 = Sin(var1[6]);
  t1108 = t884*t855;
  t1128 = t343*t941;
  t1132 = t1108 + t1128;
  t1283 = t536*t580*t543;
  t1290 = t522*t614;
  t1291 = t1283 + t1290;
  t1294 = t522*t536;
  t1309 = -1.*t580*t543*t614;
  t1317 = t1294 + t1309;
  t1292 = -1.*t519*t1291;
  t1383 = t703*t1317;
  t1398 = t1292 + t1383;
  t1407 = t703*t1291;
  t1408 = t519*t1317;
  t1411 = t1407 + t1408;
  t1401 = t503*t1398;
  t1432 = t770*t1411;
  t1481 = t1401 + t1432;
  t1558 = t770*t1398;
  t1565 = -1.*t503*t1411;
  t1571 = t1558 + t1565;
  t1508 = -1.*t343*t1481;
  t1576 = t884*t1571;
  t1594 = t1508 + t1576;
  t1626 = t884*t1481;
  t1643 = t343*t1571;
  t1673 = t1626 + t1643;
  t1094 = t277*t1053;
  t1134 = t1095*t1132;
  t1156 = t1094 + t1134;
  t1196 = t1095*t1053;
  t1208 = -1.*t277*t1132;
  t1214 = t1196 + t1208;
  t1607 = t277*t1594;
  t1691 = t1095*t1673;
  t1703 = t1607 + t1691;
  t1718 = t1095*t1594;
  t1722 = -1.*t277*t1673;
  t1729 = t1718 + t1722;
  t1790 = 0.642788*t1703;
  t1794 = 0.766044*t1729;
  t1828 = t1790 + t1794;
  t1842 = Cos(var1[1]);
  t1877 = -1.*t1842*t536*t519;
  t1883 = -1.*t703*t1842*t614;
  t1918 = t1877 + t1883;
  t1971 = t703*t1842*t536;
  t1973 = -1.*t1842*t519*t614;
  t1977 = t1971 + t1973;
  t1968 = t503*t1918;
  t1992 = t770*t1977;
  t2033 = t1968 + t1992;
  t2038 = t770*t1918;
  t2052 = -1.*t503*t1977;
  t2056 = t2038 + t2052;
  t2037 = -1.*t343*t2033;
  t2067 = t884*t2056;
  t2077 = t2037 + t2067;
  t2090 = t884*t2033;
  t2092 = t343*t2056;
  t2109 = t2090 + t2092;
  t1765 = -0.766044*t1156;
  t1778 = 0.642788*t1214;
  t1785 = t1765 + t1778;
  t1713 = -0.766044*t1703;
  t1732 = 0.642788*t1729;
  t1738 = t1713 + t1732;
  t2089 = t277*t2077;
  t2123 = t1095*t2109;
  t2126 = t2089 + t2123;
  t2149 = t1095*t2077;
  t2152 = -1.*t277*t2109;
  t2186 = t2149 + t2152;
  t1191 = 0.642788*t1156;
  t1249 = 0.766044*t1214;
  t1272 = t1191 + t1249;
  t2242 = 0.642788*t2126;
  t2247 = 0.766044*t2186;
  t2265 = t2242 + t2247;
  t2133 = -0.766044*t2126;
  t2188 = 0.642788*t2186;
  t2189 = t2133 + t2188;
  t2204 = t522*t1842*t2189;
  t2212 = t543*t1785;
  t2222 = t2204 + t2212;
  t2226 = -1.*t1828*t2222;
  t2266 = t522*t1842*t2265;
  t2285 = t543*t1272;
  t2305 = t2266 + t2285;
  t2310 = t1738*t2305;
  t2324 = t2265*t1785;
  t2339 = -1.*t2189*t1272;
  t2345 = t2324 + t2339;
  t2361 = -1.*t1842*t580*t2345;
  t2365 = 0. + t2226 + t2310 + t2361;
  t2387 = 1/t2365;
  t2474 = -1.*t522;
  t2477 = 0. + t2474;
  t2486 = 0. + t580;
  t2478 = 0. + t2324 + t2339;
  t2500 = -1.*t2265*t1738;
  t2527 = t2189*t1828;
  t2531 = 0. + t2500 + t2527;
  t1741 = t1272*t1738;
  t1830 = -1.*t1785*t1828;
  t1838 = 0. + t1741 + t1830;
  t2641 = t1842*t580;
  t2650 = 0. + t2641;
  t2561 = -1.*t522*t1842*t2189;
  t2563 = -1.*t543*t1785;
  t2565 = 0. + t2561 + t2563;
  t2686 = -1.*t543;
  t2699 = 0. + t2686;
  t2410 = -1.*t1842*t580*t1785;
  t2411 = t522*t1842*t1738;
  t2412 = 0. + t2410 + t2411;
  t2673 = t522*t1842;
  t2681 = 0. + t2673;
  t2576 = t1842*t580*t2189;
  t2581 = t543*t1738;
  t2589 = 0. + t2576 + t2581;
  t2618 = 0. + t2266 + t2285;
  t2440 = t1842*t580*t1272;
  t2457 = -1.*t522*t1842*t1828;
  t2458 = 0. + t2440 + t2457;
  t2628 = -1.*t1842*t580*t2265;
  t2630 = -1.*t543*t1828;
  t2632 = 0. + t2628 + t2630;
  t2653 = t2650*t2478*t2387;
  t2685 = t2681*t2531*t2387;
  t2712 = t2699*t1838*t2387;
  t2715 = t2653 + t2685 + t2712;
  t2727 = t2650*t2565*t2387;
  t2731 = t2699*t2412*t2387;
  t2732 = t2681*t2589*t2387;
  t2736 = t2727 + t2731 + t2732;
  t2744 = t2650*t2618*t2387;
  t2747 = t2699*t2458*t2387;
  t2758 = t2681*t2632*t2387;
  t2771 = t2744 + t2747 + t2758;
  t2804 = Cos(var1[7]);
  t2808 = 0. + t2804;
  t2843 = Sin(var1[7]);
  t2860 = -1.*t2843;
  t2866 = 0. + t2860;
  t2974 = Cos(var1[8]);
  t3026 = -1.*t2974*t2843;
  t3042 = 0. + t3026;
  t3082 = Sin(var1[8]);
  t3105 = 0. + t3082;
  t3070 = -1.*t2804*t2974;
  t3072 = 0. + t3070;
  t3056 = t3042*t2478*t2387;
  t3074 = t3072*t2531*t2387;
  t3112 = t3105*t1838*t2387;
  t3138 = t3056 + t3074 + t3112;
  t3146 = t3042*t2565*t2387;
  t3156 = t3105*t2412*t2387;
  t3161 = t3072*t2589*t2387;
  t3162 = t3146 + t3156 + t3161;
  t3169 = t3042*t2618*t2387;
  t3170 = t3105*t2458*t2387;
  t3182 = t3072*t2632*t2387;
  t3187 = t3169 + t3170 + t3182;

  p_output1(0)=0. - 1.*t1838*t2387;
  p_output1(1)=0. - 1.*t2387*t2412;
  p_output1(2)=0. - 1.*t2387*t2458;
  p_output1(3)=0. + t2387*t2477*t2478 + t2387*t2486*t2531;
  p_output1(4)=0. + t2387*t2477*t2565 + t2387*t2486*t2589;
  p_output1(5)=0. + t2387*t2477*t2618 + t2387*t2486*t2632;
  p_output1(6)=t2715;
  p_output1(7)=t2736;
  p_output1(8)=t2771;
  p_output1(9)=t2715;
  p_output1(10)=t2736;
  p_output1(11)=t2771;
  p_output1(12)=t2715;
  p_output1(13)=t2736;
  p_output1(14)=t2771;
  p_output1(15)=t2715;
  p_output1(16)=t2736;
  p_output1(17)=t2771;
  p_output1(18)=t2715;
  p_output1(19)=t2736;
  p_output1(20)=t2771;
  p_output1(21)=0. + t1838*t2387;
  p_output1(22)=0. + t2387*t2412;
  p_output1(23)=0. + t2387*t2458;
  p_output1(24)=0. + t2387*t2478*t2808 + t2387*t2531*t2866;
  p_output1(25)=0. + t2387*t2565*t2808 + t2387*t2589*t2866;
  p_output1(26)=0. + t2387*t2618*t2808 + t2387*t2632*t2866;
  p_output1(27)=t3138;
  p_output1(28)=t3162;
  p_output1(29)=t3187;
  p_output1(30)=t3138;
  p_output1(31)=t3162;
  p_output1(32)=t3187;
  p_output1(33)=t3138;
  p_output1(34)=t3162;
  p_output1(35)=t3187;
  p_output1(36)=t3138;
  p_output1(37)=t3162;
  p_output1(38)=t3187;
  p_output1(39)=t3138;
  p_output1(40)=t3162;
  p_output1(41)=t3187;
}


       
Eigen::Matrix<double,3,14> Jws_LeftToeBottom_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void Jws_LeftToeBottom_to_RightToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



