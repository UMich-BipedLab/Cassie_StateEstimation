/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:53 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeFront_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
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
static void output1(double *p_output1,const double *var1)
{
  double t954;
  double t672;
  double t1041;
  double t695;
  double t1076;
  double t243;
  double t334;
  double t1266;
  double t1404;
  double t1407;
  double t889;
  double t1116;
  double t1122;
  double t1130;
  double t1138;
  double t1146;
  double t1185;
  double t1288;
  double t1357;
  double t2145;
  double t2265;
  double t2284;
  double t2317;
  double t2202;
  double t2246;
  double t2247;
  double t2320;
  double t2434;
  double t2254;
  double t2355;
  double t2370;
  double t2098;
  double t2461;
  double t2526;
  double t2541;
  double t2560;
  double t2388;
  double t2544;
  double t2549;
  double t2081;
  double t2574;
  double t2593;
  double t2604;
  double t2665;
  double t2556;
  double t2614;
  double t2623;
  double t2059;
  double t2686;
  double t2694;
  double t2721;
  double t2789;
  double t2646;
  double t2749;
  double t2752;
  double t2049;
  double t2832;
  double t2841;
  double t2880;
  double t1454;
  double t1497;
  double t1515;
  double t1533;
  double t1574;
  double t1649;
  double t1656;
  double t1686;
  double t1704;
  double t3018;
  double t3028;
  double t3034;
  double t2970;
  double t2985;
  double t3000;
  double t3015;
  double t3036;
  double t3037;
  double t3065;
  double t3073;
  double t3094;
  double t3040;
  double t3104;
  double t3119;
  double t3148;
  double t3168;
  double t3208;
  double t3144;
  double t3209;
  double t3234;
  double t3243;
  double t3252;
  double t3303;
  double t3237;
  double t3314;
  double t3348;
  double t3428;
  double t3455;
  double t3473;
  double t1814;
  double t1826;
  double t1922;
  double t3613;
  double t3618;
  double t3637;
  double t3551;
  double t3604;
  double t3609;
  double t3611;
  double t3648;
  double t3668;
  double t3687;
  double t3700;
  double t3703;
  double t3679;
  double t3707;
  double t3713;
  double t3720;
  double t3739;
  double t3747;
  double t3716;
  double t3749;
  double t3750;
  double t3768;
  double t3772;
  double t3774;
  double t3752;
  double t3788;
  double t3796;
  double t3818;
  double t3825;
  double t3841;
  double t2788;
  double t2881;
  double t2894;
  double t2901;
  double t2930;
  double t2940;
  double t3415;
  double t3477;
  double t3478;
  double t3502;
  double t3510;
  double t3521;
  double t3799;
  double t3849;
  double t3850;
  double t3867;
  double t3870;
  double t3880;
  t954 = Cos(var1[3]);
  t672 = Cos(var1[5]);
  t1041 = Sin(var1[4]);
  t695 = Sin(var1[3]);
  t1076 = Sin(var1[5]);
  t243 = Cos(var1[7]);
  t334 = Cos(var1[6]);
  t1266 = Sin(var1[6]);
  t1404 = Cos(var1[4]);
  t1407 = Sin(var1[7]);
  t889 = -1.*t672*t695;
  t1116 = t954*t1041*t1076;
  t1122 = t889 + t1116;
  t1130 = t334*t1122;
  t1138 = t954*t672*t1041;
  t1146 = t695*t1076;
  t1185 = t1138 + t1146;
  t1288 = t1185*t1266;
  t1357 = t1130 + t1288;
  t2145 = Cos(var1[8]);
  t2265 = t334*t1185;
  t2284 = -1.*t1122*t1266;
  t2317 = t2265 + t2284;
  t2202 = t954*t1404*t243;
  t2246 = t1357*t1407;
  t2247 = t2202 + t2246;
  t2320 = Sin(var1[8]);
  t2434 = Cos(var1[9]);
  t2254 = t2145*t2247;
  t2355 = t2317*t2320;
  t2370 = t2254 + t2355;
  t2098 = Sin(var1[9]);
  t2461 = t2145*t2317;
  t2526 = -1.*t2247*t2320;
  t2541 = t2461 + t2526;
  t2560 = Cos(var1[10]);
  t2388 = -1.*t2098*t2370;
  t2544 = t2434*t2541;
  t2549 = t2388 + t2544;
  t2081 = Sin(var1[10]);
  t2574 = t2434*t2370;
  t2593 = t2098*t2541;
  t2604 = t2574 + t2593;
  t2665 = Cos(var1[11]);
  t2556 = t2081*t2549;
  t2614 = t2560*t2604;
  t2623 = t2556 + t2614;
  t2059 = Sin(var1[11]);
  t2686 = t2560*t2549;
  t2694 = -1.*t2081*t2604;
  t2721 = t2686 + t2694;
  t2789 = Cos(var1[12]);
  t2646 = -1.*t2059*t2623;
  t2749 = t2665*t2721;
  t2752 = t2646 + t2749;
  t2049 = Sin(var1[12]);
  t2832 = t2665*t2623;
  t2841 = t2059*t2721;
  t2880 = t2832 + t2841;
  t1454 = t954*t672;
  t1497 = t695*t1041*t1076;
  t1515 = t1454 + t1497;
  t1533 = t334*t1515;
  t1574 = t672*t695*t1041;
  t1649 = -1.*t954*t1076;
  t1656 = t1574 + t1649;
  t1686 = t1656*t1266;
  t1704 = t1533 + t1686;
  t3018 = t334*t1656;
  t3028 = -1.*t1515*t1266;
  t3034 = t3018 + t3028;
  t2970 = t1404*t243*t695;
  t2985 = t1704*t1407;
  t3000 = t2970 + t2985;
  t3015 = t2145*t3000;
  t3036 = t3034*t2320;
  t3037 = t3015 + t3036;
  t3065 = t2145*t3034;
  t3073 = -1.*t3000*t2320;
  t3094 = t3065 + t3073;
  t3040 = -1.*t2098*t3037;
  t3104 = t2434*t3094;
  t3119 = t3040 + t3104;
  t3148 = t2434*t3037;
  t3168 = t2098*t3094;
  t3208 = t3148 + t3168;
  t3144 = t2081*t3119;
  t3209 = t2560*t3208;
  t3234 = t3144 + t3209;
  t3243 = t2560*t3119;
  t3252 = -1.*t2081*t3208;
  t3303 = t3243 + t3252;
  t3237 = -1.*t2059*t3234;
  t3314 = t2665*t3303;
  t3348 = t3237 + t3314;
  t3428 = t2665*t3234;
  t3455 = t2059*t3303;
  t3473 = t3428 + t3455;
  t1814 = t1404*t334*t1076;
  t1826 = t1404*t672*t1266;
  t1922 = t1814 + t1826;
  t3613 = t1404*t672*t334;
  t3618 = -1.*t1404*t1076*t1266;
  t3637 = t3613 + t3618;
  t3551 = -1.*t243*t1041;
  t3604 = t1922*t1407;
  t3609 = t3551 + t3604;
  t3611 = t2145*t3609;
  t3648 = t3637*t2320;
  t3668 = t3611 + t3648;
  t3687 = t2145*t3637;
  t3700 = -1.*t3609*t2320;
  t3703 = t3687 + t3700;
  t3679 = -1.*t2098*t3668;
  t3707 = t2434*t3703;
  t3713 = t3679 + t3707;
  t3720 = t2434*t3668;
  t3739 = t2098*t3703;
  t3747 = t3720 + t3739;
  t3716 = t2081*t3713;
  t3749 = t2560*t3747;
  t3750 = t3716 + t3749;
  t3768 = t2560*t3713;
  t3772 = -1.*t2081*t3747;
  t3774 = t3768 + t3772;
  t3752 = -1.*t2059*t3750;
  t3788 = t2665*t3774;
  t3796 = t3752 + t3788;
  t3818 = t2665*t3750;
  t3825 = t2059*t3774;
  t3841 = t3818 + t3825;
  t2788 = t2049*t2752;
  t2881 = t2789*t2880;
  t2894 = t2788 + t2881;
  t2901 = t2789*t2752;
  t2930 = -1.*t2049*t2880;
  t2940 = t2901 + t2930;
  t3415 = t2049*t3348;
  t3477 = t2789*t3473;
  t3478 = t3415 + t3477;
  t3502 = t2789*t3348;
  t3510 = -1.*t2049*t3473;
  t3521 = t3502 + t3510;
  t3799 = t2049*t3796;
  t3849 = t2789*t3841;
  t3850 = t3799 + t3849;
  t3867 = t2789*t3796;
  t3870 = -1.*t2049*t3841;
  t3880 = t3867 + t3870;
  p_output1[0]=-1.*t1357*t243 + t1404*t1407*t954;
  p_output1[1]=-1.*t1704*t243 + t1404*t1407*t695;
  p_output1[2]=-1.*t1041*t1407 - 1.*t1922*t243;
  p_output1[3]=0.642788*t2894 + 0.766044*t2940;
  p_output1[4]=0.642788*t3478 + 0.766044*t3521;
  p_output1[5]=0.642788*t3850 + 0.766044*t3880;
  p_output1[6]=-0.766044*t2894 + 0.642788*t2940;
  p_output1[7]=-0.766044*t3478 + 0.642788*t3521;
  p_output1[8]=-0.766044*t3850 + 0.642788*t3880;
}



void R_LeftToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
