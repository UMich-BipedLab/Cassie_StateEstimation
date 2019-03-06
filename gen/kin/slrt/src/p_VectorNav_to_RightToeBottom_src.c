/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:02:09 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_RightToeBottom_src.h"

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
  double t580;
  double t1212;
  double t1811;
  double t2107;
  double t2161;
  double t2165;
  double t2196;
  double t2525;
  double t2540;
  double t2571;
  double t2588;
  double t2505;
  double t2517;
  double t2524;
  double t2643;
  double t2651;
  double t2654;
  double t2720;
  double t2746;
  double t2763;
  double t2786;
  double t2695;
  double t2707;
  double t2718;
  double t2819;
  double t2820;
  double t2830;
  double t2878;
  double t2894;
  double t2895;
  double t2910;
  double t2853;
  double t2859;
  double t2870;
  double t2916;
  double t2918;
  double t2919;
  double t3011;
  double t805;
  double t940;
  double t1025;
  double t1337;
  double t1452;
  double t1491;
  double t1825;
  double t1927;
  double t3084;
  double t2178;
  double t2246;
  double t2278;
  double t2427;
  double t2428;
  double t2448;
  double t3126;
  double t3134;
  double t3139;
  double t3147;
  double t3155;
  double t3156;
  double t2572;
  double t2606;
  double t2616;
  double t2675;
  double t2679;
  double t2683;
  double t3167;
  double t3172;
  double t3179;
  double t3184;
  double t3186;
  double t3206;
  double t2774;
  double t2789;
  double t2795;
  double t2831;
  double t2844;
  double t2848;
  double t3220;
  double t3222;
  double t3239;
  double t3250;
  double t3254;
  double t3260;
  double t2898;
  double t2912;
  double t2913;
  double t2921;
  double t2926;
  double t2938;
  double t3266;
  double t3281;
  double t3309;
  double t3328;
  double t3337;
  double t3348;
  double t3067;
  double t3069;
  double t3071;
  double t3089;
  double t3116;
  double t3120;
  double t3459;
  double t3468;
  double t3475;
  double t3485;
  double t3497;
  double t3498;
  double t3523;
  double t3529;
  double t3531;
  double t3536;
  double t3544;
  double t3548;
  double t3577;
  double t3580;
  double t3589;
  double t3605;
  double t3607;
  double t3614;
  double t3623;
  double t3624;
  double t3639;
  double t3652;
  double t3655;
  double t3659;
  t580 = Cos(var1[8]);
  t1212 = Cos(var1[9]);
  t1811 = Sin(var1[9]);
  t2107 = Cos(var1[10]);
  t2161 = -1.*t2107;
  t2165 = 1. + t2161;
  t2196 = Sin(var1[10]);
  t2525 = Cos(var1[11]);
  t2540 = -1.*t2525;
  t2571 = 1. + t2540;
  t2588 = Sin(var1[11]);
  t2505 = t580*t1212*t2107;
  t2517 = -1.*t580*t1811*t2196;
  t2524 = t2505 + t2517;
  t2643 = -1.*t580*t2107*t1811;
  t2651 = -1.*t580*t1212*t2196;
  t2654 = t2643 + t2651;
  t2720 = Cos(var1[12]);
  t2746 = -1.*t2720;
  t2763 = 1. + t2746;
  t2786 = Sin(var1[12]);
  t2695 = t2525*t2524;
  t2707 = t2654*t2588;
  t2718 = t2695 + t2707;
  t2819 = t2525*t2654;
  t2820 = -1.*t2524*t2588;
  t2830 = t2819 + t2820;
  t2878 = Cos(var1[13]);
  t2894 = -1.*t2878;
  t2895 = 1. + t2894;
  t2910 = Sin(var1[13]);
  t2853 = t2720*t2718;
  t2859 = t2830*t2786;
  t2870 = t2853 + t2859;
  t2916 = t2720*t2830;
  t2918 = -1.*t2718*t2786;
  t2919 = t2916 + t2918;
  t3011 = Cos(var1[7]);
  t805 = -1.*t580;
  t940 = 1. + t805;
  t1025 = Sin(var1[8]);
  t1337 = -1.*t1212;
  t1452 = 1. + t1337;
  t1491 = -0.049*t1452;
  t1825 = -0.09*t1811;
  t1927 = 0. + t1491 + t1825;
  t3084 = Sin(var1[7]);
  t2178 = -0.049*t2165;
  t2246 = -0.21*t2196;
  t2278 = 0. + t2178 + t2246;
  t2427 = -0.21*t2165;
  t2428 = 0.049*t2196;
  t2448 = 0. + t2427 + t2428;
  t3126 = t3011*t1212*t1025;
  t3134 = -1.*t3084*t1811;
  t3139 = t3126 + t3134;
  t3147 = -1.*t1212*t3084;
  t3155 = -1.*t3011*t1025*t1811;
  t3156 = t3147 + t3155;
  t2572 = -0.0016*t2571;
  t2606 = -0.2707*t2588;
  t2616 = 0. + t2572 + t2606;
  t2675 = -0.2707*t2571;
  t2679 = 0.0016*t2588;
  t2683 = 0. + t2675 + t2679;
  t3167 = t2107*t3139;
  t3172 = t3156*t2196;
  t3179 = t3167 + t3172;
  t3184 = t2107*t3156;
  t3186 = -1.*t3139*t2196;
  t3206 = t3184 + t3186;
  t2774 = 0.0184*t2763;
  t2789 = -0.7055*t2786;
  t2795 = 0. + t2774 + t2789;
  t2831 = -0.7055*t2763;
  t2844 = -0.0184*t2786;
  t2848 = 0. + t2831 + t2844;
  t3220 = t2525*t3179;
  t3222 = t3206*t2588;
  t3239 = t3220 + t3222;
  t3250 = t2525*t3206;
  t3254 = -1.*t3179*t2588;
  t3260 = t3250 + t3254;
  t2898 = -0.0216*t2895;
  t2912 = -1.1135*t2910;
  t2913 = 0. + t2898 + t2912;
  t2921 = -1.1135*t2895;
  t2926 = 0.0216*t2910;
  t2938 = 0. + t2921 + t2926;
  t3266 = t2720*t3239;
  t3281 = t3260*t2786;
  t3309 = t3266 + t3281;
  t3328 = t2720*t3260;
  t3337 = -1.*t3239*t2786;
  t3348 = t3328 + t3337;
  t3067 = -0.135*t940;
  t3069 = 0.049*t1025;
  t3071 = 0. + t3067 + t3069;
  t3089 = -0.09*t1452;
  t3116 = 0.049*t1811;
  t3120 = 0. + t3089 + t3116;
  t3459 = t1212*t3084*t1025;
  t3468 = t3011*t1811;
  t3475 = t3459 + t3468;
  t3485 = t3011*t1212;
  t3497 = -1.*t3084*t1025*t1811;
  t3498 = t3485 + t3497;
  t3523 = t2107*t3475;
  t3529 = t3498*t2196;
  t3531 = t3523 + t3529;
  t3536 = t2107*t3498;
  t3544 = -1.*t3475*t2196;
  t3548 = t3536 + t3544;
  t3577 = t2525*t3531;
  t3580 = t3548*t2588;
  t3589 = t3577 + t3580;
  t3605 = t2525*t3548;
  t3607 = -1.*t3531*t2588;
  t3614 = t3605 + t3607;
  t3623 = t2720*t3589;
  t3624 = t3614*t2786;
  t3639 = t3623 + t3624;
  t3652 = t2720*t3614;
  t3655 = -1.*t3589*t2786;
  t3659 = t3652 + t3655;
  p_output1[0]=-0.03155 - 0.004500000000000004*t1025 + t2524*t2616 + t2654*t2683 + t2718*t2795 + t2830*t2848 + t2870*t2913 - 1.1312*(-1.*t2870*t2910 + t2878*t2919) + 0.0306*(t2870*t2878 + t2910*t2919) + t2919*t2938 + t1927*t580 + t1212*t2278*t580 - 1.*t1811*t2448*t580 - 0.049*t940;
  p_output1[1]=0. - 0.135*(1. - 1.*t3011) + t1025*t1927*t3011 + t3011*t3071 - 1.*t3084*t3120 + t2278*t3139 + t2448*t3156 + t2616*t3179 + t2683*t3206 + t2795*t3239 + t2848*t3260 + t2913*t3309 + t2938*t3348 - 1.1312*(-1.*t2910*t3309 + t2878*t3348) + 0.0306*(t2878*t3309 + t2910*t3348) - 0.1305*t3011*t580;
  p_output1[2]=0.07996 + 0.135*t3084 + t1025*t1927*t3084 + t3071*t3084 + t3011*t3120 + t2278*t3475 + t2448*t3498 + t2616*t3531 + t2683*t3548 + t2795*t3589 + t2848*t3614 + t2913*t3639 + t2938*t3659 - 1.1312*(-1.*t2910*t3639 + t2878*t3659) + 0.0306*(t2878*t3639 + t2910*t3659) - 0.1305*t3084*t580;
}



void p_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
