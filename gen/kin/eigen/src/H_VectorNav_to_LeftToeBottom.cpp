/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:02:39 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_LeftToeBottom.h"

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
  double t284;
  double t1774;
  double t1511;
  double t1562;
  double t1780;
  double t1962;
  double t1655;
  double t1796;
  double t1956;
  double t1506;
  double t2015;
  double t2016;
  double t2045;
  double t2188;
  double t1961;
  double t2084;
  double t2135;
  double t1434;
  double t2195;
  double t2289;
  double t2318;
  double t2347;
  double t2170;
  double t2323;
  double t2332;
  double t1336;
  double t2360;
  double t2405;
  double t2444;
  double t220;
  double t153;
  double t1009;
  double t2625;
  double t2628;
  double t2635;
  double t2697;
  double t2720;
  double t2740;
  double t2666;
  double t2788;
  double t2818;
  double t2834;
  double t2836;
  double t2845;
  double t2822;
  double t2846;
  double t2852;
  double t2895;
  double t2898;
  double t2912;
  double t2885;
  double t2921;
  double t2961;
  double t2982;
  double t3003;
  double t3035;
  double t3151;
  double t3156;
  double t3165;
  double t3195;
  double t3198;
  double t3202;
  double t3184;
  double t3206;
  double t3232;
  double t3260;
  double t3280;
  double t3293;
  double t3259;
  double t3300;
  double t3310;
  double t3329;
  double t3340;
  double t3343;
  double t3314;
  double t3362;
  double t3381;
  double t3386;
  double t3398;
  double t3407;
  double t2336;
  double t2454;
  double t2477;
  double t2557;
  double t2568;
  double t2583;
  double t2968;
  double t3036;
  double t3041;
  double t3101;
  double t3108;
  double t3127;
  double t3383;
  double t3434;
  double t3453;
  double t3458;
  double t3471;
  double t3480;
  double t3607;
  double t3608;
  double t3766;
  double t3786;
  double t3876;
  double t3877;
  double t3966;
  double t3969;
  double t3571;
  double t3587;
  double t3691;
  double t3702;
  double t3726;
  double t3729;
  double t3730;
  double t3610;
  double t3614;
  double t3643;
  double t3742;
  double t3757;
  double t3758;
  double t3801;
  double t3810;
  double t3811;
  double t3840;
  double t3846;
  double t3851;
  double t3879;
  double t3881;
  double t3896;
  double t3926;
  double t3935;
  double t3938;
  double t3974;
  double t3980;
  double t3982;
  double t3994;
  double t4002;
  double t4004;
  double t4091;
  double t4117;
  double t4128;
  double t4149;
  double t4153;
  double t4160;
  t284 = Cos(var1[1]);
  t1774 = Cos(var1[3]);
  t1511 = Cos(var1[2]);
  t1562 = Sin(var1[3]);
  t1780 = Sin(var1[2]);
  t1962 = Cos(var1[4]);
  t1655 = -1.*t284*t1511*t1562;
  t1796 = -1.*t1774*t284*t1780;
  t1956 = t1655 + t1796;
  t1506 = Sin(var1[4]);
  t2015 = t1774*t284*t1511;
  t2016 = -1.*t284*t1562*t1780;
  t2045 = t2015 + t2016;
  t2188 = Cos(var1[5]);
  t1961 = t1506*t1956;
  t2084 = t1962*t2045;
  t2135 = t1961 + t2084;
  t1434 = Sin(var1[5]);
  t2195 = t1962*t1956;
  t2289 = -1.*t1506*t2045;
  t2318 = t2195 + t2289;
  t2347 = Cos(var1[6]);
  t2170 = -1.*t1434*t2135;
  t2323 = t2188*t2318;
  t2332 = t2170 + t2323;
  t1336 = Sin(var1[6]);
  t2360 = t2188*t2135;
  t2405 = t1434*t2318;
  t2444 = t2360 + t2405;
  t220 = Cos(var1[0]);
  t153 = Sin(var1[1]);
  t1009 = Sin(var1[0]);
  t2625 = t220*t1511*t153;
  t2628 = -1.*t1009*t1780;
  t2635 = t2625 + t2628;
  t2697 = -1.*t1511*t1009;
  t2720 = -1.*t220*t153*t1780;
  t2740 = t2697 + t2720;
  t2666 = -1.*t1562*t2635;
  t2788 = t1774*t2740;
  t2818 = t2666 + t2788;
  t2834 = t1774*t2635;
  t2836 = t1562*t2740;
  t2845 = t2834 + t2836;
  t2822 = t1506*t2818;
  t2846 = t1962*t2845;
  t2852 = t2822 + t2846;
  t2895 = t1962*t2818;
  t2898 = -1.*t1506*t2845;
  t2912 = t2895 + t2898;
  t2885 = -1.*t1434*t2852;
  t2921 = t2188*t2912;
  t2961 = t2885 + t2921;
  t2982 = t2188*t2852;
  t3003 = t1434*t2912;
  t3035 = t2982 + t3003;
  t3151 = t1511*t1009*t153;
  t3156 = t220*t1780;
  t3165 = t3151 + t3156;
  t3195 = t220*t1511;
  t3198 = -1.*t1009*t153*t1780;
  t3202 = t3195 + t3198;
  t3184 = -1.*t1562*t3165;
  t3206 = t1774*t3202;
  t3232 = t3184 + t3206;
  t3260 = t1774*t3165;
  t3280 = t1562*t3202;
  t3293 = t3260 + t3280;
  t3259 = t1506*t3232;
  t3300 = t1962*t3293;
  t3310 = t3259 + t3300;
  t3329 = t1962*t3232;
  t3340 = -1.*t1506*t3293;
  t3343 = t3329 + t3340;
  t3314 = -1.*t1434*t3310;
  t3362 = t2188*t3343;
  t3381 = t3314 + t3362;
  t3386 = t2188*t3310;
  t3398 = t1434*t3343;
  t3407 = t3386 + t3398;
  t2336 = t1336*t2332;
  t2454 = t2347*t2444;
  t2477 = t2336 + t2454;
  t2557 = t2347*t2332;
  t2568 = -1.*t1336*t2444;
  t2583 = t2557 + t2568;
  t2968 = t1336*t2961;
  t3036 = t2347*t3035;
  t3041 = t2968 + t3036;
  t3101 = t2347*t2961;
  t3108 = -1.*t1336*t3035;
  t3127 = t3101 + t3108;
  t3383 = t1336*t3381;
  t3434 = t2347*t3407;
  t3453 = t3383 + t3434;
  t3458 = t2347*t3381;
  t3471 = -1.*t1336*t3407;
  t3480 = t3458 + t3471;
  t3607 = -1.*t1774;
  t3608 = 1. + t3607;
  t3766 = -1.*t1962;
  t3786 = 1. + t3766;
  t3876 = -1.*t2188;
  t3877 = 1. + t3876;
  t3966 = -1.*t2347;
  t3969 = 1. + t3966;
  t3571 = -1.*t284;
  t3587 = 1. + t3571;
  t3691 = -1.*t1511;
  t3702 = 1. + t3691;
  t3726 = -0.049*t3702;
  t3729 = -0.09*t1780;
  t3730 = 0. + t3726 + t3729;
  t3610 = -0.049*t3608;
  t3614 = -0.21*t1562;
  t3643 = 0. + t3610 + t3614;
  t3742 = -0.21*t3608;
  t3757 = 0.049*t1562;
  t3758 = 0. + t3742 + t3757;
  t3801 = -0.2707*t3786;
  t3810 = 0.0016*t1506;
  t3811 = 0. + t3801 + t3810;
  t3840 = -0.0016*t3786;
  t3846 = -0.2707*t1506;
  t3851 = 0. + t3840 + t3846;
  t3879 = 0.0184*t3877;
  t3881 = -0.7055*t1434;
  t3896 = 0. + t3879 + t3881;
  t3926 = -0.7055*t3877;
  t3935 = -0.0184*t1434;
  t3938 = 0. + t3926 + t3935;
  t3974 = -1.1135*t3969;
  t3980 = 0.0216*t1336;
  t3982 = 0. + t3974 + t3980;
  t3994 = -0.0216*t3969;
  t4002 = -1.1135*t1336;
  t4004 = 0. + t3994 + t4002;
  t4091 = 0.135*t3587;
  t4117 = 0.049*t153;
  t4128 = 0. + t4091 + t4117;
  t4149 = -0.09*t3702;
  t4153 = 0.049*t1780;
  t4160 = 0. + t4149 + t4153;

  p_output1(0)=0. + t153;
  p_output1(1)=0. - 1.*t220*t284;
  p_output1(2)=0. - 1.*t1009*t284;
  p_output1(3)=0.;
  p_output1(4)=0. + 0.642788*t2477 + 0.766044*t2583;
  p_output1(5)=0. + 0.642788*t3041 + 0.766044*t3127;
  p_output1(6)=0. + 0.642788*t3453 + 0.766044*t3480;
  p_output1(7)=0.;
  p_output1(8)=0. - 0.766044*t2477 + 0.642788*t2583;
  p_output1(9)=0. - 0.766044*t3041 + 0.642788*t3127;
  p_output1(10)=0. - 0.766044*t3453 + 0.642788*t3480;
  p_output1(11)=0.;
  p_output1(12)=-0.03155 + 0.004500000000000004*t153 + 0.0306*t2477 - 1.1312*t2583 - 0.049*t3587 + t1511*t284*t3643 + t284*t3730 - 1.*t1780*t284*t3758 + t1956*t3811 + t2045*t3851 + t2135*t3896 + t2318*t3938 + t2332*t3982 + t2444*t4004;
  p_output1(13)=0. + 0.135*(1. - 1.*t220) + 0.1305*t220*t284 + 0.0306*t3041 - 1.1312*t3127 + t2635*t3643 + t153*t220*t3730 + t2740*t3758 + t2818*t3811 + t2845*t3851 + t2852*t3896 + t2912*t3938 + t2961*t3982 + t3035*t4004 + t220*t4128 - 1.*t1009*t4160;
  p_output1(14)=0.07996 - 0.135*t1009 + 0.1305*t1009*t284 + 0.0306*t3453 - 1.1312*t3480 + t3165*t3643 + t1009*t153*t3730 + t3202*t3758 + t3232*t3811 + t3293*t3851 + t3310*t3896 + t3343*t3938 + t3381*t3982 + t3407*t4004 + t1009*t4128 + t220*t4160;
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_VectorNav_to_LeftToeBottom(const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



