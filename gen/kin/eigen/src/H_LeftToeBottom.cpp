/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t368;
  double t263;
  double t371;
  double t309;
  double t411;
  double t71;
  double t228;
  double t700;
  double t753;
  double t762;
  double t312;
  double t504;
  double t534;
  double t559;
  double t575;
  double t637;
  double t662;
  double t706;
  double t722;
  double t1434;
  double t1542;
  double t1549;
  double t1591;
  double t1443;
  double t1460;
  double t1499;
  double t1616;
  double t1690;
  double t1516;
  double t1628;
  double t1655;
  double t1412;
  double t1711;
  double t1736;
  double t1755;
  double t1826;
  double t1657;
  double t1757;
  double t1781;
  double t1335;
  double t1844;
  double t1854;
  double t1868;
  double t1927;
  double t1802;
  double t1875;
  double t1896;
  double t1249;
  double t1974;
  double t2004;
  double t2047;
  double t2107;
  double t1926;
  double t2086;
  double t2091;
  double t1234;
  double t2137;
  double t2155;
  double t2213;
  double t780;
  double t842;
  double t865;
  double t892;
  double t909;
  double t916;
  double t918;
  double t924;
  double t932;
  double t2464;
  double t2465;
  double t2479;
  double t2436;
  double t2450;
  double t2452;
  double t2460;
  double t2489;
  double t2514;
  double t2546;
  double t2555;
  double t2565;
  double t2515;
  double t2600;
  double t2629;
  double t2667;
  double t2687;
  double t2700;
  double t2631;
  double t2707;
  double t2759;
  double t2819;
  double t2856;
  double t2867;
  double t2777;
  double t2879;
  double t2888;
  double t2910;
  double t2924;
  double t2934;
  double t1008;
  double t1021;
  double t1057;
  double t3075;
  double t3132;
  double t3135;
  double t3038;
  double t3042;
  double t3060;
  double t3071;
  double t3138;
  double t3154;
  double t3170;
  double t3180;
  double t3188;
  double t3157;
  double t3207;
  double t3216;
  double t3230;
  double t3242;
  double t3248;
  double t3226;
  double t3251;
  double t3253;
  double t3282;
  double t3332;
  double t3343;
  double t3259;
  double t3347;
  double t3362;
  double t3423;
  double t3453;
  double t3459;
  double t2092;
  double t2259;
  double t2277;
  double t2304;
  double t2354;
  double t2364;
  double t2895;
  double t2949;
  double t2964;
  double t2986;
  double t2988;
  double t3004;
  double t3393;
  double t3468;
  double t3516;
  double t3525;
  double t3585;
  double t3588;
  double t3937;
  double t3938;
  double t4198;
  double t4204;
  double t4322;
  double t4325;
  double t4506;
  double t4508;
  double t4604;
  double t4607;
  double t4800;
  double t4855;
  double t3707;
  double t3715;
  double t3732;
  double t3734;
  double t3743;
  double t3760;
  double t3945;
  double t3975;
  double t3986;
  double t4023;
  double t4042;
  double t4052;
  double t4214;
  double t4235;
  double t4258;
  double t4277;
  double t4287;
  double t4291;
  double t4327;
  double t4330;
  double t4338;
  double t4370;
  double t4455;
  double t4461;
  double t4524;
  double t4527;
  double t4542;
  double t4559;
  double t4563;
  double t4571;
  double t4632;
  double t4656;
  double t4686;
  double t4720;
  double t4741;
  double t4756;
  double t4856;
  double t4888;
  double t4892;
  double t4895;
  double t4916;
  double t4922;
  t368 = Cos(var1[3]);
  t263 = Cos(var1[5]);
  t371 = Sin(var1[4]);
  t309 = Sin(var1[3]);
  t411 = Sin(var1[5]);
  t71 = Cos(var1[7]);
  t228 = Cos(var1[6]);
  t700 = Sin(var1[6]);
  t753 = Cos(var1[4]);
  t762 = Sin(var1[7]);
  t312 = -1.*t263*t309;
  t504 = t368*t371*t411;
  t534 = t312 + t504;
  t559 = t228*t534;
  t575 = t368*t263*t371;
  t637 = t309*t411;
  t662 = t575 + t637;
  t706 = t662*t700;
  t722 = t559 + t706;
  t1434 = Cos(var1[8]);
  t1542 = t228*t662;
  t1549 = -1.*t534*t700;
  t1591 = t1542 + t1549;
  t1443 = t368*t753*t71;
  t1460 = t722*t762;
  t1499 = t1443 + t1460;
  t1616 = Sin(var1[8]);
  t1690 = Cos(var1[9]);
  t1516 = t1434*t1499;
  t1628 = t1591*t1616;
  t1655 = t1516 + t1628;
  t1412 = Sin(var1[9]);
  t1711 = t1434*t1591;
  t1736 = -1.*t1499*t1616;
  t1755 = t1711 + t1736;
  t1826 = Cos(var1[10]);
  t1657 = -1.*t1412*t1655;
  t1757 = t1690*t1755;
  t1781 = t1657 + t1757;
  t1335 = Sin(var1[10]);
  t1844 = t1690*t1655;
  t1854 = t1412*t1755;
  t1868 = t1844 + t1854;
  t1927 = Cos(var1[11]);
  t1802 = t1335*t1781;
  t1875 = t1826*t1868;
  t1896 = t1802 + t1875;
  t1249 = Sin(var1[11]);
  t1974 = t1826*t1781;
  t2004 = -1.*t1335*t1868;
  t2047 = t1974 + t2004;
  t2107 = Cos(var1[12]);
  t1926 = -1.*t1249*t1896;
  t2086 = t1927*t2047;
  t2091 = t1926 + t2086;
  t1234 = Sin(var1[12]);
  t2137 = t1927*t1896;
  t2155 = t1249*t2047;
  t2213 = t2137 + t2155;
  t780 = t368*t263;
  t842 = t309*t371*t411;
  t865 = t780 + t842;
  t892 = t228*t865;
  t909 = t263*t309*t371;
  t916 = -1.*t368*t411;
  t918 = t909 + t916;
  t924 = t918*t700;
  t932 = t892 + t924;
  t2464 = t228*t918;
  t2465 = -1.*t865*t700;
  t2479 = t2464 + t2465;
  t2436 = t753*t71*t309;
  t2450 = t932*t762;
  t2452 = t2436 + t2450;
  t2460 = t1434*t2452;
  t2489 = t2479*t1616;
  t2514 = t2460 + t2489;
  t2546 = t1434*t2479;
  t2555 = -1.*t2452*t1616;
  t2565 = t2546 + t2555;
  t2515 = -1.*t1412*t2514;
  t2600 = t1690*t2565;
  t2629 = t2515 + t2600;
  t2667 = t1690*t2514;
  t2687 = t1412*t2565;
  t2700 = t2667 + t2687;
  t2631 = t1335*t2629;
  t2707 = t1826*t2700;
  t2759 = t2631 + t2707;
  t2819 = t1826*t2629;
  t2856 = -1.*t1335*t2700;
  t2867 = t2819 + t2856;
  t2777 = -1.*t1249*t2759;
  t2879 = t1927*t2867;
  t2888 = t2777 + t2879;
  t2910 = t1927*t2759;
  t2924 = t1249*t2867;
  t2934 = t2910 + t2924;
  t1008 = t753*t228*t411;
  t1021 = t753*t263*t700;
  t1057 = t1008 + t1021;
  t3075 = t753*t263*t228;
  t3132 = -1.*t753*t411*t700;
  t3135 = t3075 + t3132;
  t3038 = -1.*t71*t371;
  t3042 = t1057*t762;
  t3060 = t3038 + t3042;
  t3071 = t1434*t3060;
  t3138 = t3135*t1616;
  t3154 = t3071 + t3138;
  t3170 = t1434*t3135;
  t3180 = -1.*t3060*t1616;
  t3188 = t3170 + t3180;
  t3157 = -1.*t1412*t3154;
  t3207 = t1690*t3188;
  t3216 = t3157 + t3207;
  t3230 = t1690*t3154;
  t3242 = t1412*t3188;
  t3248 = t3230 + t3242;
  t3226 = t1335*t3216;
  t3251 = t1826*t3248;
  t3253 = t3226 + t3251;
  t3282 = t1826*t3216;
  t3332 = -1.*t1335*t3248;
  t3343 = t3282 + t3332;
  t3259 = -1.*t1249*t3253;
  t3347 = t1927*t3343;
  t3362 = t3259 + t3347;
  t3423 = t1927*t3253;
  t3453 = t1249*t3343;
  t3459 = t3423 + t3453;
  t2092 = t1234*t2091;
  t2259 = t2107*t2213;
  t2277 = t2092 + t2259;
  t2304 = t2107*t2091;
  t2354 = -1.*t1234*t2213;
  t2364 = t2304 + t2354;
  t2895 = t1234*t2888;
  t2949 = t2107*t2934;
  t2964 = t2895 + t2949;
  t2986 = t2107*t2888;
  t2988 = -1.*t1234*t2934;
  t3004 = t2986 + t2988;
  t3393 = t1234*t3362;
  t3468 = t2107*t3459;
  t3516 = t3393 + t3468;
  t3525 = t2107*t3362;
  t3585 = -1.*t1234*t3459;
  t3588 = t3525 + t3585;
  t3937 = -1.*t71;
  t3938 = 1. + t3937;
  t4198 = -1.*t1434;
  t4204 = 1. + t4198;
  t4322 = -1.*t1690;
  t4325 = 1. + t4322;
  t4506 = -1.*t1826;
  t4508 = 1. + t4506;
  t4604 = -1.*t1927;
  t4607 = 1. + t4604;
  t4800 = -1.*t2107;
  t4855 = 1. + t4800;
  t3707 = -1.*t228;
  t3715 = 1. + t3707;
  t3732 = 0.135*t3715;
  t3734 = 0. + t3732;
  t3743 = -0.135*t700;
  t3760 = 0. + t3743;
  t3945 = 0.135*t3938;
  t3975 = 0.049*t762;
  t3986 = 0. + t3945 + t3975;
  t4023 = -0.049*t3938;
  t4042 = 0.135*t762;
  t4052 = 0. + t4023 + t4042;
  t4214 = -0.049*t4204;
  t4235 = -0.09*t1616;
  t4258 = 0. + t4214 + t4235;
  t4277 = -0.09*t4204;
  t4287 = 0.049*t1616;
  t4291 = 0. + t4277 + t4287;
  t4327 = -0.049*t4325;
  t4330 = -0.21*t1412;
  t4338 = 0. + t4327 + t4330;
  t4370 = -0.21*t4325;
  t4455 = 0.049*t1412;
  t4461 = 0. + t4370 + t4455;
  t4524 = -0.2707*t4508;
  t4527 = 0.0016*t1335;
  t4542 = 0. + t4524 + t4527;
  t4559 = -0.0016*t4508;
  t4563 = -0.2707*t1335;
  t4571 = 0. + t4559 + t4563;
  t4632 = 0.0184*t4607;
  t4656 = -0.7055*t1249;
  t4686 = 0. + t4632 + t4656;
  t4720 = -0.7055*t4607;
  t4741 = -0.0184*t1249;
  t4756 = 0. + t4720 + t4741;
  t4856 = -1.1135*t4855;
  t4888 = 0.0216*t1234;
  t4892 = 0. + t4856 + t4888;
  t4895 = -0.0216*t4855;
  t4916 = -1.1135*t1234;
  t4922 = 0. + t4895 + t4916;

  p_output1(0)=-1.*t71*t722 + t368*t753*t762;
  p_output1(1)=t309*t753*t762 - 1.*t71*t932;
  p_output1(2)=-1.*t1057*t71 - 1.*t371*t762;
  p_output1(3)=0.;
  p_output1(4)=0.642788*t2277 + 0.766044*t2364;
  p_output1(5)=0.642788*t2964 + 0.766044*t3004;
  p_output1(6)=0.642788*t3516 + 0.766044*t3588;
  p_output1(7)=0.;
  p_output1(8)=-0.766044*t2277 + 0.642788*t2364;
  p_output1(9)=-0.766044*t2964 + 0.642788*t3004;
  p_output1(10)=-0.766044*t3516 + 0.642788*t3588;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.0306*t2277 - 1.1312*t2364 + t1499*t4258 + t1591*t4291 + t1655*t4338 + t1755*t4461 + t1781*t4542 + t1868*t4571 + t1896*t4686 + t2047*t4756 + t2091*t4892 + t2213*t4922 + t3734*t534 + t3760*t662 + t3986*t722 + t368*t4052*t753 + 0.1305*(t71*t722 - 1.*t368*t753*t762) + var1(0);
  p_output1(13)=0. + 0.0306*t2964 - 1.1312*t3004 + t2452*t4258 + t2479*t4291 + t2514*t4338 + t2565*t4461 + t2629*t4542 + t2700*t4571 + t2759*t4686 + t2867*t4756 + t2888*t4892 + t2934*t4922 + t309*t4052*t753 + t3734*t865 + t3760*t918 + t3986*t932 + 0.1305*(-1.*t309*t753*t762 + t71*t932) + var1(1);
  p_output1(14)=0. + 0.0306*t3516 - 1.1312*t3588 + t1057*t3986 - 1.*t371*t4052 + t3060*t4258 + t3135*t4291 + t3154*t4338 + t3188*t4461 + t3216*t4542 + t3248*t4571 + t3253*t4686 + t3343*t4756 + t3362*t4892 + t3459*t4922 + t263*t3760*t753 + t3734*t411*t753 + 0.1305*(t1057*t71 + t371*t762) + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_LeftToeBottom(const Eigen::Matrix<double,20,1> &var1)
//void H_LeftToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



