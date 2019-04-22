/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t344;
  double t760;
  double t1012;
  double t867;
  double t1014;
  double t581;
  double t708;
  double t751;
  double t754;
  double t1158;
  double t970;
  double t1040;
  double t1090;
  double t1159;
  double t1173;
  double t1354;
  double t1139;
  double t1406;
  double t1427;
  double t2275;
  double t2191;
  double t2206;
  double t2215;
  double t2125;
  double t2278;
  double t2281;
  double t2296;
  double t2371;
  double t2244;
  double t2301;
  double t2302;
  double t2096;
  double t2380;
  double t2396;
  double t2432;
  double t2493;
  double t2356;
  double t2433;
  double t2454;
  double t2053;
  double t2511;
  double t2544;
  double t2547;
  double t2670;
  double t2457;
  double t2567;
  double t2584;
  double t2051;
  double t2698;
  double t2701;
  double t2704;
  double t2796;
  double t2640;
  double t2715;
  double t2720;
  double t2041;
  double t2830;
  double t2834;
  double t2838;
  double t1533;
  double t1534;
  double t1615;
  double t1675;
  double t1788;
  double t1864;
  double t1634;
  double t1875;
  double t1878;
  double t2978;
  double t2981;
  double t2995;
  double t3031;
  double t3054;
  double t3062;
  double t3002;
  double t3068;
  double t3110;
  double t3169;
  double t3185;
  double t3199;
  double t3139;
  double t3261;
  double t3267;
  double t3291;
  double t3292;
  double t3304;
  double t3277;
  double t3341;
  double t3346;
  double t3385;
  double t3390;
  double t3410;
  double t3353;
  double t3411;
  double t3439;
  double t3507;
  double t3510;
  double t3527;
  double t1979;
  double t2019;
  double t2023;
  double t3631;
  double t3633;
  double t3640;
  double t3643;
  double t3648;
  double t3660;
  double t3641;
  double t3676;
  double t3677;
  double t3679;
  double t3688;
  double t3690;
  double t3678;
  double t3692;
  double t3698;
  double t3764;
  double t3768;
  double t3770;
  double t3729;
  double t3781;
  double t3800;
  double t3815;
  double t3820;
  double t3830;
  double t3801;
  double t3843;
  double t3845;
  double t3852;
  double t3857;
  double t3871;
  double t2739;
  double t2845;
  double t2865;
  double t2908;
  double t2921;
  double t2955;
  double t3482;
  double t3533;
  double t3541;
  double t3567;
  double t3575;
  double t3595;
  double t3847;
  double t3877;
  double t3882;
  double t3897;
  double t3900;
  double t3908;
  t344 = Cos(var1[3]);
  t760 = Cos(var1[5]);
  t1012 = Sin(var1[3]);
  t867 = Sin(var1[4]);
  t1014 = Sin(var1[5]);
  t581 = Cos(var1[4]);
  t708 = Sin(var1[14]);
  t751 = Cos(var1[14]);
  t754 = Sin(var1[13]);
  t1158 = Cos(var1[13]);
  t970 = t344*t760*t867;
  t1040 = t1012*t1014;
  t1090 = t970 + t1040;
  t1159 = -1.*t760*t1012;
  t1173 = t344*t867*t1014;
  t1354 = t1159 + t1173;
  t1139 = t754*t1090;
  t1406 = t1158*t1354;
  t1427 = t1139 + t1406;
  t2275 = Cos(var1[15]);
  t2191 = t1158*t1090;
  t2206 = -1.*t754*t1354;
  t2215 = t2191 + t2206;
  t2125 = Sin(var1[15]);
  t2278 = t751*t344*t581;
  t2281 = t708*t1427;
  t2296 = t2278 + t2281;
  t2371 = Cos(var1[16]);
  t2244 = t2125*t2215;
  t2301 = t2275*t2296;
  t2302 = t2244 + t2301;
  t2096 = Sin(var1[16]);
  t2380 = t2275*t2215;
  t2396 = -1.*t2125*t2296;
  t2432 = t2380 + t2396;
  t2493 = Cos(var1[17]);
  t2356 = -1.*t2096*t2302;
  t2433 = t2371*t2432;
  t2454 = t2356 + t2433;
  t2053 = Sin(var1[17]);
  t2511 = t2371*t2302;
  t2544 = t2096*t2432;
  t2547 = t2511 + t2544;
  t2670 = Cos(var1[18]);
  t2457 = t2053*t2454;
  t2567 = t2493*t2547;
  t2584 = t2457 + t2567;
  t2051 = Sin(var1[18]);
  t2698 = t2493*t2454;
  t2701 = -1.*t2053*t2547;
  t2704 = t2698 + t2701;
  t2796 = Cos(var1[19]);
  t2640 = -1.*t2051*t2584;
  t2715 = t2670*t2704;
  t2720 = t2640 + t2715;
  t2041 = Sin(var1[19]);
  t2830 = t2670*t2584;
  t2834 = t2051*t2704;
  t2838 = t2830 + t2834;
  t1533 = t760*t1012*t867;
  t1534 = -1.*t344*t1014;
  t1615 = t1533 + t1534;
  t1675 = t344*t760;
  t1788 = t1012*t867*t1014;
  t1864 = t1675 + t1788;
  t1634 = t754*t1615;
  t1875 = t1158*t1864;
  t1878 = t1634 + t1875;
  t2978 = t1158*t1615;
  t2981 = -1.*t754*t1864;
  t2995 = t2978 + t2981;
  t3031 = t751*t581*t1012;
  t3054 = t708*t1878;
  t3062 = t3031 + t3054;
  t3002 = t2125*t2995;
  t3068 = t2275*t3062;
  t3110 = t3002 + t3068;
  t3169 = t2275*t2995;
  t3185 = -1.*t2125*t3062;
  t3199 = t3169 + t3185;
  t3139 = -1.*t2096*t3110;
  t3261 = t2371*t3199;
  t3267 = t3139 + t3261;
  t3291 = t2371*t3110;
  t3292 = t2096*t3199;
  t3304 = t3291 + t3292;
  t3277 = t2053*t3267;
  t3341 = t2493*t3304;
  t3346 = t3277 + t3341;
  t3385 = t2493*t3267;
  t3390 = -1.*t2053*t3304;
  t3410 = t3385 + t3390;
  t3353 = -1.*t2051*t3346;
  t3411 = t2670*t3410;
  t3439 = t3353 + t3411;
  t3507 = t2670*t3346;
  t3510 = t2051*t3410;
  t3527 = t3507 + t3510;
  t1979 = t581*t760*t754;
  t2019 = t1158*t581*t1014;
  t2023 = t1979 + t2019;
  t3631 = t1158*t581*t760;
  t3633 = -1.*t581*t754*t1014;
  t3640 = t3631 + t3633;
  t3643 = -1.*t751*t867;
  t3648 = t708*t2023;
  t3660 = t3643 + t3648;
  t3641 = t2125*t3640;
  t3676 = t2275*t3660;
  t3677 = t3641 + t3676;
  t3679 = t2275*t3640;
  t3688 = -1.*t2125*t3660;
  t3690 = t3679 + t3688;
  t3678 = -1.*t2096*t3677;
  t3692 = t2371*t3690;
  t3698 = t3678 + t3692;
  t3764 = t2371*t3677;
  t3768 = t2096*t3690;
  t3770 = t3764 + t3768;
  t3729 = t2053*t3698;
  t3781 = t2493*t3770;
  t3800 = t3729 + t3781;
  t3815 = t2493*t3698;
  t3820 = -1.*t2053*t3770;
  t3830 = t3815 + t3820;
  t3801 = -1.*t2051*t3800;
  t3843 = t2670*t3830;
  t3845 = t3801 + t3843;
  t3852 = t2670*t3800;
  t3857 = t2051*t3830;
  t3871 = t3852 + t3857;
  t2739 = t2041*t2720;
  t2845 = t2796*t2838;
  t2865 = t2739 + t2845;
  t2908 = t2796*t2720;
  t2921 = -1.*t2041*t2838;
  t2955 = t2908 + t2921;
  t3482 = t2041*t3439;
  t3533 = t2796*t3527;
  t3541 = t3482 + t3533;
  t3567 = t2796*t3439;
  t3575 = -1.*t2041*t3527;
  t3595 = t3567 + t3575;
  t3847 = t2041*t3845;
  t3877 = t2796*t3871;
  t3882 = t3847 + t3877;
  t3897 = t2796*t3845;
  t3900 = -1.*t2041*t3871;
  t3908 = t3897 + t3900;

  p_output1(0)=t344*t581*t708 - 1.*t1427*t751;
  p_output1(1)=t1012*t581*t708 - 1.*t1878*t751;
  p_output1(2)=-1.*t2023*t751 - 1.*t708*t867;
  p_output1(3)=0.642788*t2865 + 0.766044*t2955;
  p_output1(4)=0.642788*t3541 + 0.766044*t3595;
  p_output1(5)=0.642788*t3882 + 0.766044*t3908;
  p_output1(6)=-0.766044*t2865 + 0.642788*t2955;
  p_output1(7)=-0.766044*t3541 + 0.642788*t3595;
  p_output1(8)=-0.766044*t3882 + 0.642788*t3908;
}


       
Eigen::Matrix<double,3,3> R_RightToeBottom(const Eigen::Matrix<double,20,1> &var1)
//void R_RightToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



