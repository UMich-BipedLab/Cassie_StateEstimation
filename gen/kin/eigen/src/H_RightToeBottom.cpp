/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:47 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeBottom.h"

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
  double t144;
  double t418;
  double t531;
  double t496;
  double t533;
  double t208;
  double t317;
  double t363;
  double t376;
  double t595;
  double t507;
  double t537;
  double t571;
  double t611;
  double t630;
  double t678;
  double t581;
  double t708;
  double t745;
  double t1468;
  double t1369;
  double t1374;
  double t1427;
  double t1358;
  double t1522;
  double t1533;
  double t1543;
  double t1609;
  double t1455;
  double t1547;
  double t1603;
  double t1353;
  double t1615;
  double t1625;
  double t1634;
  double t1702;
  double t1608;
  double t1649;
  double t1650;
  double t1331;
  double t1767;
  double t1788;
  double t1857;
  double t1869;
  double t1654;
  double t1864;
  double t1866;
  double t1251;
  double t1878;
  double t1905;
  double t1918;
  double t1955;
  double t1867;
  double t1919;
  double t1935;
  double t1229;
  double t1969;
  double t1979;
  double t1994;
  double t812;
  double t822;
  double t867;
  double t970;
  double t1014;
  double t1029;
  double t900;
  double t1040;
  double t1073;
  double t2101;
  double t2119;
  double t2138;
  double t2206;
  double t2215;
  double t2220;
  double t2151;
  double t2230;
  double t2234;
  double t2244;
  double t2252;
  double t2275;
  double t2239;
  double t2278;
  double t2281;
  double t2301;
  double t2302;
  double t2308;
  double t2296;
  double t2328;
  double t2331;
  double t2356;
  double t2360;
  double t2380;
  double t2336;
  double t2396;
  double t2416;
  double t2433;
  double t2454;
  double t2455;
  double t1158;
  double t1159;
  double t1169;
  double t2584;
  double t2585;
  double t2592;
  double t2639;
  double t2640;
  double t2643;
  double t2593;
  double t2646;
  double t2657;
  double t2670;
  double t2677;
  double t2698;
  double t2663;
  double t2701;
  double t2704;
  double t2720;
  double t2722;
  double t2729;
  double t2715;
  double t2739;
  double t2740;
  double t2782;
  double t2785;
  double t2796;
  double t2745;
  double t2820;
  double t2830;
  double t2838;
  double t2845;
  double t2850;
  double t1944;
  double t2019;
  double t2023;
  double t2033;
  double t2040;
  double t2041;
  double t2432;
  double t2457;
  double t2485;
  double t2511;
  double t2528;
  double t2544;
  double t2834;
  double t2865;
  double t2873;
  double t2921;
  double t2940;
  double t2955;
  double t3099;
  double t3116;
  double t3316;
  double t3329;
  double t3499;
  double t3502;
  double t3578;
  double t3584;
  double t3650;
  double t3653;
  double t3746;
  double t3759;
  double t3134;
  double t3139;
  double t3143;
  double t3169;
  double t3175;
  double t3229;
  double t3256;
  double t3267;
  double t3277;
  double t3292;
  double t3299;
  double t3304;
  double t3331;
  double t3341;
  double t3345;
  double t3411;
  double t3434;
  double t3439;
  double t3507;
  double t3510;
  double t3524;
  double t3533;
  double t3541;
  double t3544;
  double t3598;
  double t3617;
  double t3631;
  double t3640;
  double t3641;
  double t3643;
  double t3660;
  double t3676;
  double t3677;
  double t3679;
  double t3690;
  double t3692;
  double t3764;
  double t3768;
  double t3770;
  double t3800;
  double t3801;
  double t3815;
  t144 = Cos(var1[3]);
  t418 = Cos(var1[5]);
  t531 = Sin(var1[3]);
  t496 = Sin(var1[4]);
  t533 = Sin(var1[5]);
  t208 = Cos(var1[4]);
  t317 = Sin(var1[14]);
  t363 = Cos(var1[14]);
  t376 = Sin(var1[13]);
  t595 = Cos(var1[13]);
  t507 = t144*t418*t496;
  t537 = t531*t533;
  t571 = t507 + t537;
  t611 = -1.*t418*t531;
  t630 = t144*t496*t533;
  t678 = t611 + t630;
  t581 = t376*t571;
  t708 = t595*t678;
  t745 = t581 + t708;
  t1468 = Cos(var1[15]);
  t1369 = t595*t571;
  t1374 = -1.*t376*t678;
  t1427 = t1369 + t1374;
  t1358 = Sin(var1[15]);
  t1522 = t363*t144*t208;
  t1533 = t317*t745;
  t1543 = t1522 + t1533;
  t1609 = Cos(var1[16]);
  t1455 = t1358*t1427;
  t1547 = t1468*t1543;
  t1603 = t1455 + t1547;
  t1353 = Sin(var1[16]);
  t1615 = t1468*t1427;
  t1625 = -1.*t1358*t1543;
  t1634 = t1615 + t1625;
  t1702 = Cos(var1[17]);
  t1608 = -1.*t1353*t1603;
  t1649 = t1609*t1634;
  t1650 = t1608 + t1649;
  t1331 = Sin(var1[17]);
  t1767 = t1609*t1603;
  t1788 = t1353*t1634;
  t1857 = t1767 + t1788;
  t1869 = Cos(var1[18]);
  t1654 = t1331*t1650;
  t1864 = t1702*t1857;
  t1866 = t1654 + t1864;
  t1251 = Sin(var1[18]);
  t1878 = t1702*t1650;
  t1905 = -1.*t1331*t1857;
  t1918 = t1878 + t1905;
  t1955 = Cos(var1[19]);
  t1867 = -1.*t1251*t1866;
  t1919 = t1869*t1918;
  t1935 = t1867 + t1919;
  t1229 = Sin(var1[19]);
  t1969 = t1869*t1866;
  t1979 = t1251*t1918;
  t1994 = t1969 + t1979;
  t812 = t418*t531*t496;
  t822 = -1.*t144*t533;
  t867 = t812 + t822;
  t970 = t144*t418;
  t1014 = t531*t496*t533;
  t1029 = t970 + t1014;
  t900 = t376*t867;
  t1040 = t595*t1029;
  t1073 = t900 + t1040;
  t2101 = t595*t867;
  t2119 = -1.*t376*t1029;
  t2138 = t2101 + t2119;
  t2206 = t363*t208*t531;
  t2215 = t317*t1073;
  t2220 = t2206 + t2215;
  t2151 = t1358*t2138;
  t2230 = t1468*t2220;
  t2234 = t2151 + t2230;
  t2244 = t1468*t2138;
  t2252 = -1.*t1358*t2220;
  t2275 = t2244 + t2252;
  t2239 = -1.*t1353*t2234;
  t2278 = t1609*t2275;
  t2281 = t2239 + t2278;
  t2301 = t1609*t2234;
  t2302 = t1353*t2275;
  t2308 = t2301 + t2302;
  t2296 = t1331*t2281;
  t2328 = t1702*t2308;
  t2331 = t2296 + t2328;
  t2356 = t1702*t2281;
  t2360 = -1.*t1331*t2308;
  t2380 = t2356 + t2360;
  t2336 = -1.*t1251*t2331;
  t2396 = t1869*t2380;
  t2416 = t2336 + t2396;
  t2433 = t1869*t2331;
  t2454 = t1251*t2380;
  t2455 = t2433 + t2454;
  t1158 = t208*t418*t376;
  t1159 = t595*t208*t533;
  t1169 = t1158 + t1159;
  t2584 = t595*t208*t418;
  t2585 = -1.*t208*t376*t533;
  t2592 = t2584 + t2585;
  t2639 = -1.*t363*t496;
  t2640 = t317*t1169;
  t2643 = t2639 + t2640;
  t2593 = t1358*t2592;
  t2646 = t1468*t2643;
  t2657 = t2593 + t2646;
  t2670 = t1468*t2592;
  t2677 = -1.*t1358*t2643;
  t2698 = t2670 + t2677;
  t2663 = -1.*t1353*t2657;
  t2701 = t1609*t2698;
  t2704 = t2663 + t2701;
  t2720 = t1609*t2657;
  t2722 = t1353*t2698;
  t2729 = t2720 + t2722;
  t2715 = t1331*t2704;
  t2739 = t1702*t2729;
  t2740 = t2715 + t2739;
  t2782 = t1702*t2704;
  t2785 = -1.*t1331*t2729;
  t2796 = t2782 + t2785;
  t2745 = -1.*t1251*t2740;
  t2820 = t1869*t2796;
  t2830 = t2745 + t2820;
  t2838 = t1869*t2740;
  t2845 = t1251*t2796;
  t2850 = t2838 + t2845;
  t1944 = t1229*t1935;
  t2019 = t1955*t1994;
  t2023 = t1944 + t2019;
  t2033 = t1955*t1935;
  t2040 = -1.*t1229*t1994;
  t2041 = t2033 + t2040;
  t2432 = t1229*t2416;
  t2457 = t1955*t2455;
  t2485 = t2432 + t2457;
  t2511 = t1955*t2416;
  t2528 = -1.*t1229*t2455;
  t2544 = t2511 + t2528;
  t2834 = t1229*t2830;
  t2865 = t1955*t2850;
  t2873 = t2834 + t2865;
  t2921 = t1955*t2830;
  t2940 = -1.*t1229*t2850;
  t2955 = t2921 + t2940;
  t3099 = -1.*t363;
  t3116 = 1. + t3099;
  t3316 = -1.*t1468;
  t3329 = 1. + t3316;
  t3499 = -1.*t1609;
  t3502 = 1. + t3499;
  t3578 = -1.*t1702;
  t3584 = 1. + t3578;
  t3650 = -1.*t1869;
  t3653 = 1. + t3650;
  t3746 = -1.*t1955;
  t3759 = 1. + t3746;
  t3134 = -0.049*t3116;
  t3139 = -0.135*t317;
  t3143 = 0. + t3134 + t3139;
  t3169 = 0.135*t376;
  t3175 = 0. + t3169;
  t3229 = -1.*t595;
  t3256 = 1. + t3229;
  t3267 = -0.135*t3256;
  t3277 = 0. + t3267;
  t3292 = -0.135*t3116;
  t3299 = 0.049*t317;
  t3304 = 0. + t3292 + t3299;
  t3331 = -0.09*t3329;
  t3341 = 0.049*t1358;
  t3345 = 0. + t3331 + t3341;
  t3411 = -0.049*t3329;
  t3434 = -0.09*t1358;
  t3439 = 0. + t3411 + t3434;
  t3507 = -0.049*t3502;
  t3510 = -0.21*t1353;
  t3524 = 0. + t3507 + t3510;
  t3533 = -0.21*t3502;
  t3541 = 0.049*t1353;
  t3544 = 0. + t3533 + t3541;
  t3598 = -0.2707*t3584;
  t3617 = 0.0016*t1331;
  t3631 = 0. + t3598 + t3617;
  t3640 = -0.0016*t3584;
  t3641 = -0.2707*t1331;
  t3643 = 0. + t3640 + t3641;
  t3660 = 0.0184*t3653;
  t3676 = -0.7055*t1251;
  t3677 = 0. + t3660 + t3676;
  t3679 = -0.7055*t3653;
  t3690 = -0.0184*t1251;
  t3692 = 0. + t3679 + t3690;
  t3764 = -1.1135*t3759;
  t3768 = 0.0216*t1229;
  t3770 = 0. + t3764 + t3768;
  t3800 = -0.0216*t3759;
  t3801 = -1.1135*t1229;
  t3815 = 0. + t3800 + t3801;

  p_output1(0)=t144*t208*t317 - 1.*t363*t745;
  p_output1(1)=-1.*t1073*t363 + t208*t317*t531;
  p_output1(2)=-1.*t1169*t363 - 1.*t317*t496;
  p_output1(3)=0.;
  p_output1(4)=0.642788*t2023 + 0.766044*t2041;
  p_output1(5)=0.642788*t2485 + 0.766044*t2544;
  p_output1(6)=0.642788*t2873 + 0.766044*t2955;
  p_output1(7)=0.;
  p_output1(8)=-0.766044*t2023 + 0.642788*t2041;
  p_output1(9)=-0.766044*t2485 + 0.642788*t2544;
  p_output1(10)=-0.766044*t2873 + 0.642788*t2955;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.0306*t2023 - 1.1312*t2041 + t144*t208*t3143 + t1427*t3345 + t1543*t3439 + t1603*t3524 + t1634*t3544 + t1650*t3631 + t1857*t3643 + t1866*t3677 + t1918*t3692 + t1935*t3770 + t1994*t3815 + t3175*t571 + t3277*t678 + t3304*t745 - 0.1305*(-1.*t144*t208*t317 + t363*t745) + var1(0);
  p_output1(13)=0. + 0.0306*t2485 - 1.1312*t2544 + t1029*t3277 + t1073*t3304 + t2138*t3345 + t2220*t3439 + t2234*t3524 + t2275*t3544 + t2281*t3631 + t2308*t3643 + t2331*t3677 + t2380*t3692 + t2416*t3770 + t2455*t3815 + t208*t3143*t531 - 0.1305*(t1073*t363 - 1.*t208*t317*t531) + t3175*t867 + var1(1);
  p_output1(14)=0. + 0.0306*t2873 - 1.1312*t2955 + t1169*t3304 + t2592*t3345 + t2643*t3439 + t2657*t3524 + t2698*t3544 + t2704*t3631 + t2729*t3643 + t2740*t3677 + t2796*t3692 + t2830*t3770 + t2850*t3815 + t208*t3175*t418 - 1.*t3143*t496 - 0.1305*(t1169*t363 + t317*t496) + t208*t3277*t533 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RightToeBottom(const Eigen::Matrix<double,20,1> &var1)
//void H_RightToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



