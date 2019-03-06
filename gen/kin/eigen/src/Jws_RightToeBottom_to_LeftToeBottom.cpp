/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:24:04 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jws_RightToeBottom_to_LeftToeBottom.h"

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
  double t493;
  double t548;
  double t444;
  double t511;
  double t583;
  double t322;
  double t697;
  double t705;
  double t776;
  double t527;
  double t595;
  double t651;
  double t794;
  double t47;
  double t832;
  double t865;
  double t867;
  double t686;
  double t803;
  double t805;
  double t881;
  double t33;
  double t942;
  double t950;
  double t955;
  double t818;
  double t897;
  double t917;
  double t964;
  double t14;
  double t1032;
  double t1054;
  double t1056;
  double t930;
  double t980;
  double t989;
  double t1083;
  double t1171;
  double t1237;
  double t1243;
  double t1149;
  double t1152;
  double t1168;
  double t1345;
  double t1348;
  double t1371;
  double t1170;
  double t1280;
  double t1285;
  double t1487;
  double t1501;
  double t1503;
  double t1327;
  double t1407;
  double t1450;
  double t1529;
  double t1546;
  double t1556;
  double t1482;
  double t1508;
  double t1511;
  double t1009;
  double t1084;
  double t1085;
  double t1098;
  double t1106;
  double t1116;
  double t1527;
  double t1637;
  double t1653;
  double t1677;
  double t1686;
  double t1705;
  double t1811;
  double t1815;
  double t1818;
  double t1907;
  double t1971;
  double t1976;
  double t2005;
  double t1914;
  double t1915;
  double t1948;
  double t2058;
  double t2059;
  double t2072;
  double t1949;
  double t2014;
  double t2015;
  double t2125;
  double t2152;
  double t2172;
  double t2037;
  double t2089;
  double t2115;
  double t1776;
  double t1780;
  double t1787;
  double t1676;
  double t1706;
  double t1749;
  double t2124;
  double t2221;
  double t2225;
  double t2252;
  double t2324;
  double t2337;
  double t1096;
  double t1131;
  double t1140;
  double t2438;
  double t2450;
  double t2485;
  double t2237;
  double t2338;
  double t2359;
  double t2363;
  double t2374;
  double t2422;
  double t2432;
  double t2538;
  double t2547;
  double t2548;
  double t2565;
  double t2571;
  double t2594;
  double t2603;
  double t2610;
  double t2614;
  double t2615;
  double t2811;
  double t2827;
  double t2870;
  double t2890;
  double t2898;
  double t2862;
  double t2864;
  double t2869;
  double t2846;
  double t3099;
  double t1753;
  double t1824;
  double t1852;
  double t3104;
  double t3105;
  double t2934;
  double t2981;
  double t2985;
  double t2907;
  double t2912;
  double t2913;
  double t3115;
  double t3132;
  double t2664;
  double t2716;
  double t2721;
  double t3137;
  double t3142;
  double t3077;
  double t3081;
  double t3090;
  double t3031;
  double t2729;
  double t2786;
  double t2799;
  double t3106;
  double t3136;
  double t3143;
  double t3176;
  double t3182;
  double t3189;
  double t3206;
  double t3212;
  double t3244;
  double t3252;
  double t3258;
  double t3259;
  double t3344;
  double t3345;
  double t3361;
  double t3489;
  double t3494;
  double t3519;
  double t3546;
  double t3502;
  double t3507;
  double t3499;
  double t3511;
  double t3615;
  double t3619;
  double t3622;
  double t3624;
  double t3638;
  double t3651;
  double t3663;
  double t3664;
  double t3670;
  double t3694;
  t493 = Cos(var1[9]);
  t548 = Sin(var1[7]);
  t444 = Cos(var1[7]);
  t511 = Sin(var1[8]);
  t583 = Sin(var1[9]);
  t322 = Cos(var1[10]);
  t697 = -1.*t493*t548;
  t705 = -1.*t444*t511*t583;
  t776 = t697 + t705;
  t527 = t444*t493*t511;
  t595 = -1.*t548*t583;
  t651 = t527 + t595;
  t794 = Sin(var1[10]);
  t47 = Cos(var1[11]);
  t832 = t322*t776;
  t865 = -1.*t651*t794;
  t867 = t832 + t865;
  t686 = t322*t651;
  t803 = t776*t794;
  t805 = t686 + t803;
  t881 = Sin(var1[11]);
  t33 = Cos(var1[12]);
  t942 = t47*t867;
  t950 = -1.*t805*t881;
  t955 = t942 + t950;
  t818 = t47*t805;
  t897 = t867*t881;
  t917 = t818 + t897;
  t964 = Sin(var1[12]);
  t14 = Cos(var1[13]);
  t1032 = t33*t955;
  t1054 = -1.*t917*t964;
  t1056 = t1032 + t1054;
  t930 = t33*t917;
  t980 = t955*t964;
  t989 = t930 + t980;
  t1083 = Sin(var1[13]);
  t1171 = t444*t493;
  t1237 = -1.*t548*t511*t583;
  t1243 = t1171 + t1237;
  t1149 = t493*t548*t511;
  t1152 = t444*t583;
  t1168 = t1149 + t1152;
  t1345 = t322*t1243;
  t1348 = -1.*t1168*t794;
  t1371 = t1345 + t1348;
  t1170 = t322*t1168;
  t1280 = t1243*t794;
  t1285 = t1170 + t1280;
  t1487 = t47*t1371;
  t1501 = -1.*t1285*t881;
  t1503 = t1487 + t1501;
  t1327 = t47*t1285;
  t1407 = t1371*t881;
  t1450 = t1327 + t1407;
  t1529 = t33*t1503;
  t1546 = -1.*t1450*t964;
  t1556 = t1529 + t1546;
  t1482 = t33*t1450;
  t1508 = t1503*t964;
  t1511 = t1482 + t1508;
  t1009 = t14*t989;
  t1084 = t1056*t1083;
  t1085 = t1009 + t1084;
  t1098 = t14*t1056;
  t1106 = -1.*t989*t1083;
  t1116 = t1098 + t1106;
  t1527 = t14*t1511;
  t1637 = t1556*t1083;
  t1653 = t1527 + t1637;
  t1677 = t14*t1556;
  t1686 = -1.*t1511*t1083;
  t1705 = t1677 + t1686;
  t1811 = 0.642788*t1653;
  t1815 = 0.766044*t1705;
  t1818 = t1811 + t1815;
  t1907 = Cos(var1[8]);
  t1971 = -1.*t1907*t322*t583;
  t1976 = -1.*t1907*t493*t794;
  t2005 = t1971 + t1976;
  t1914 = t1907*t493*t322;
  t1915 = -1.*t1907*t583*t794;
  t1948 = t1914 + t1915;
  t2058 = t47*t2005;
  t2059 = -1.*t1948*t881;
  t2072 = t2058 + t2059;
  t1949 = t47*t1948;
  t2014 = t2005*t881;
  t2015 = t1949 + t2014;
  t2125 = t33*t2072;
  t2152 = -1.*t2015*t964;
  t2172 = t2125 + t2152;
  t2037 = t33*t2015;
  t2089 = t2072*t964;
  t2115 = t2037 + t2089;
  t1776 = -0.766044*t1085;
  t1780 = 0.642788*t1116;
  t1787 = t1776 + t1780;
  t1676 = -0.766044*t1653;
  t1706 = 0.642788*t1705;
  t1749 = t1676 + t1706;
  t2124 = t14*t2115;
  t2221 = t2172*t1083;
  t2225 = t2124 + t2221;
  t2252 = t14*t2172;
  t2324 = -1.*t2115*t1083;
  t2337 = t2252 + t2324;
  t1096 = 0.642788*t1085;
  t1131 = 0.766044*t1116;
  t1140 = t1096 + t1131;
  t2438 = 0.642788*t2225;
  t2450 = 0.766044*t2337;
  t2485 = t2438 + t2450;
  t2237 = -0.766044*t2225;
  t2338 = 0.642788*t2337;
  t2359 = t2237 + t2338;
  t2363 = t444*t1907*t2359;
  t2374 = t511*t1787;
  t2422 = t2363 + t2374;
  t2432 = -1.*t1818*t2422;
  t2538 = t444*t1907*t2485;
  t2547 = t511*t1140;
  t2548 = t2538 + t2547;
  t2565 = t1749*t2548;
  t2571 = t2485*t1787;
  t2594 = -1.*t2359*t1140;
  t2603 = t2571 + t2594;
  t2610 = -1.*t1907*t548*t2603;
  t2614 = 0. + t2432 + t2565 + t2610;
  t2615 = 1/t2614;
  t2811 = Cos(var1[0]);
  t2827 = 0. + t2811;
  t2870 = Sin(var1[0]);
  t2890 = -1.*t2870;
  t2898 = 0. + t2890;
  t2862 = -1.*t2485*t1749;
  t2864 = t2359*t1818;
  t2869 = 0. + t2862 + t2864;
  t2846 = 0. + t2571 + t2594;
  t3099 = Cos(var1[1]);
  t1753 = t1140*t1749;
  t1824 = -1.*t1787*t1818;
  t1852 = 0. + t1753 + t1824;
  t3104 = -1.*t2811*t3099;
  t3105 = 0. + t3104;
  t2934 = t1907*t548*t2359;
  t2981 = t511*t1749;
  t2985 = 0. + t2934 + t2981;
  t2907 = -1.*t444*t1907*t2359;
  t2912 = -1.*t511*t1787;
  t2913 = 0. + t2907 + t2912;
  t3115 = -1.*t3099*t2870;
  t3132 = 0. + t3115;
  t2664 = -1.*t1907*t548*t1787;
  t2716 = t444*t1907*t1749;
  t2721 = 0. + t2664 + t2716;
  t3137 = Sin(var1[1]);
  t3142 = 0. + t3137;
  t3077 = -1.*t1907*t548*t2485;
  t3081 = -1.*t511*t1818;
  t3090 = 0. + t3077 + t3081;
  t3031 = 0. + t2538 + t2547;
  t2729 = t1907*t548*t1140;
  t2786 = -1.*t444*t1907*t1818;
  t2799 = 0. + t2729 + t2786;
  t3106 = t3105*t2869*t2615;
  t3136 = t2846*t2615*t3132;
  t3143 = t1852*t2615*t3142;
  t3176 = t3106 + t3136 + t3143;
  t3182 = t3105*t2985*t2615;
  t3189 = t2913*t2615*t3132;
  t3206 = t2721*t2615*t3142;
  t3212 = t3182 + t3189 + t3206;
  t3244 = t3105*t3090*t2615;
  t3252 = t3031*t2615*t3132;
  t3258 = t2799*t2615*t3142;
  t3259 = t3244 + t3252 + t3258;
  t3344 = -1.*t444;
  t3345 = 0. + t3344;
  t3361 = 0. + t548;
  t3489 = t1907*t548;
  t3494 = 0. + t3489;
  t3519 = -1.*t511;
  t3546 = 0. + t3519;
  t3502 = t444*t1907;
  t3507 = 0. + t3502;
  t3499 = t3494*t2846*t2615;
  t3511 = t3507*t2869*t2615;
  t3615 = t3546*t1852*t2615;
  t3619 = t3499 + t3511 + t3615;
  t3622 = t3494*t2913*t2615;
  t3624 = t3546*t2721*t2615;
  t3638 = t3507*t2985*t2615;
  t3651 = t3622 + t3624 + t3638;
  t3663 = t3494*t3031*t2615;
  t3664 = t3546*t2799*t2615;
  t3670 = t3507*t3090*t2615;
  t3694 = t3663 + t3664 + t3670;

  p_output1(0)=0. + t1852*t2615;
  p_output1(1)=0. + t2615*t2721;
  p_output1(2)=0. + t2615*t2799;
  p_output1(3)=0. + t2615*t2827*t2846 + t2615*t2869*t2898;
  p_output1(4)=0. + t2615*t2827*t2913 + t2615*t2898*t2985;
  p_output1(5)=0. + t2615*t2827*t3031 + t2615*t2898*t3090;
  p_output1(6)=t3176;
  p_output1(7)=t3212;
  p_output1(8)=t3259;
  p_output1(9)=t3176;
  p_output1(10)=t3212;
  p_output1(11)=t3259;
  p_output1(12)=t3176;
  p_output1(13)=t3212;
  p_output1(14)=t3259;
  p_output1(15)=t3176;
  p_output1(16)=t3212;
  p_output1(17)=t3259;
  p_output1(18)=t3176;
  p_output1(19)=t3212;
  p_output1(20)=t3259;
  p_output1(21)=0. - 1.*t1852*t2615;
  p_output1(22)=0. - 1.*t2615*t2721;
  p_output1(23)=0. - 1.*t2615*t2799;
  p_output1(24)=0. + t2615*t2846*t3345 + t2615*t2869*t3361;
  p_output1(25)=0. + t2615*t2913*t3345 + t2615*t2985*t3361;
  p_output1(26)=0. + t2615*t3031*t3345 + t2615*t3090*t3361;
  p_output1(27)=t3619;
  p_output1(28)=t3651;
  p_output1(29)=t3694;
  p_output1(30)=t3619;
  p_output1(31)=t3651;
  p_output1(32)=t3694;
  p_output1(33)=t3619;
  p_output1(34)=t3651;
  p_output1(35)=t3694;
  p_output1(36)=t3619;
  p_output1(37)=t3651;
  p_output1(38)=t3694;
  p_output1(39)=t3619;
  p_output1(40)=t3651;
  p_output1(41)=t3694;
}


       
Eigen::Matrix<double,3,14> Jws_RightToeBottom_to_LeftToeBottom(const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



