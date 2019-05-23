/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:20:02 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jvb_VectorNav_to_LeftToeBottom_src.h"

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
  double t1012;
  double t1018;
  double t1382;
  double t1015;
  double t1127;
  double t1303;
  double t868;
  double t1438;
  double t1588;
  double t1695;
  double t1874;
  double t1323;
  double t1787;
  double t1793;
  double t854;
  double t1898;
  double t1916;
  double t2065;
  double t2160;
  double t1864;
  double t2089;
  double t2110;
  double t826;
  double t2175;
  double t2176;
  double t2242;
  double t554;
  double t2494;
  double t2503;
  double t2508;
  double t2483;
  double t2521;
  double t2553;
  double t2579;
  double t2612;
  double t2572;
  double t2626;
  double t2641;
  double t2679;
  double t2680;
  double t2683;
  double t2391;
  double t2897;
  double t2910;
  double t2860;
  double t2861;
  double t2912;
  double t2932;
  double t2945;
  double t2947;
  double t2968;
  double t2974;
  double t2984;
  double t2994;
  double t2835;
  double t2847;
  double t2877;
  double t2890;
  double t2956;
  double t2997;
  double t3012;
  double t3065;
  double t3070;
  double t3082;
  double t3085;
  double t3090;
  double t2788;
  double t2799;
  double t2849;
  double t2858;
  double t3059;
  double t3091;
  double t3105;
  double t3189;
  double t3195;
  double t3204;
  double t3214;
  double t3218;
  double t445;
  double t2709;
  double t2734;
  double t2755;
  double t2657;
  double t2698;
  double t2701;
  double t2761;
  double t2776;
  double t3250;
  double t3255;
  double t3258;
  double t3261;
  double t3262;
  double t2802;
  double t2830;
  double t3116;
  double t3219;
  double t3224;
  double t3370;
  double t3335;
  double t3337;
  double t3345;
  double t3349;
  double t3350;
  double t3378;
  double t3383;
  double t3388;
  double t3401;
  double t3409;
  double t3346;
  double t3347;
  double t2780;
  double t3235;
  double t3243;
  double t3275;
  double t3281;
  double t2346;
  double t2360;
  double t2385;
  double t2123;
  double t2250;
  double t2290;
  double t3356;
  double t3375;
  double t3424;
  double t3427;
  double t2295;
  double t2420;
  double t2432;
  double t2445;
  double t2472;
  double t3438;
  double t3446;
  double t3447;
  double t3464;
  double t3472;
  double t3511;
  double t3522;
  double t3538;
  double t3587;
  double t2707;
  double t2756;
  double t2757;
  double t3434;
  double t3436;
  double t3612;
  double t3620;
  double t3553;
  double t3562;
  double t3283;
  double t3542;
  t1012 = Cos(var1[6]);
  t1018 = Sin(var1[6]);
  t1382 = Cos(var1[5]);
  t1015 = 0.642788*t1012;
  t1127 = -0.766044*t1018;
  t1303 = t1015 + t1127;
  t868 = Sin(var1[5]);
  t1438 = 0.766044*t1012;
  t1588 = 0.642788*t1018;
  t1695 = t1438 + t1588;
  t1874 = Cos(var1[4]);
  t1323 = t868*t1303;
  t1787 = t1382*t1695;
  t1793 = 0. + t1323 + t1787;
  t854 = Sin(var1[4]);
  t1898 = t1382*t1303;
  t1916 = -1.*t868*t1695;
  t2065 = 0. + t1898 + t1916;
  t2160 = Sin(var1[3]);
  t1864 = -1.*t854*t1793;
  t2089 = t1874*t2065;
  t2110 = 0. + t1864 + t2089;
  t826 = Cos(var1[3]);
  t2175 = t1874*t1793;
  t2176 = t854*t2065;
  t2242 = 0. + t2175 + t2176;
  t554 = Cos(var1[2]);
  t2494 = -0.766044*t1012;
  t2503 = -0.642788*t1018;
  t2508 = t2494 + t2503;
  t2483 = -1.*t868*t1303;
  t2521 = t1382*t2508;
  t2553 = 0. + t2483 + t2521;
  t2579 = t868*t2508;
  t2612 = 0. + t1898 + t2579;
  t2572 = t854*t2553;
  t2626 = t1874*t2612;
  t2641 = 0. + t2572 + t2626;
  t2679 = t1874*t2553;
  t2680 = -1.*t854*t2612;
  t2683 = 0. + t2679 + t2680;
  t2391 = Sin(var1[2]);
  t2897 = -1.*t1012;
  t2910 = 1. + t2897;
  t2860 = -1.*t1382;
  t2861 = 1. + t2860;
  t2912 = -0.0216*t2910;
  t2932 = 0.0306*t1012;
  t2945 = 0.01770000000000005*t1018;
  t2947 = 0. + t2912 + t2932 + t2945;
  t2968 = -1.1135*t2910;
  t2974 = -1.1312*t1012;
  t2984 = 0.052199999999999996*t1018;
  t2994 = 0. + t2968 + t2974 + t2984;
  t2835 = -1.*t1874;
  t2847 = 1. + t2835;
  t2877 = -0.7055*t2861;
  t2890 = -0.0184*t868;
  t2956 = t868*t2947;
  t2997 = t1382*t2994;
  t3012 = 0. + t2877 + t2890 + t2956 + t2997;
  t3065 = 0.0184*t2861;
  t3070 = -0.7055*t868;
  t3082 = t1382*t2947;
  t3085 = -1.*t868*t2994;
  t3090 = 0. + t3065 + t3070 + t3082 + t3085;
  t2788 = -1.*t826;
  t2799 = 1. + t2788;
  t2849 = -0.0016*t2847;
  t2858 = -0.2707*t854;
  t3059 = -1.*t854*t3012;
  t3091 = t1874*t3090;
  t3105 = 0. + t2849 + t2858 + t3059 + t3091;
  t3189 = -0.2707*t2847;
  t3195 = 0.0016*t854;
  t3204 = t1874*t3012;
  t3214 = t854*t3090;
  t3218 = 0. + t3189 + t3195 + t3204 + t3214;
  t445 = Cos(var1[1]);
  t2709 = -1.*t2160*t2641;
  t2734 = t826*t2683;
  t2755 = 0. + t2709 + t2734;
  t2657 = t826*t2641;
  t2698 = t2160*t2683;
  t2701 = 0. + t2657 + t2698;
  t2761 = -1.*t554;
  t2776 = 1. + t2761;
  t3250 = -0.049*t2799;
  t3255 = -0.21*t2160;
  t3258 = t826*t3105;
  t3261 = -1.*t2160*t3218;
  t3262 = 0. + t3250 + t3255 + t3258 + t3261;
  t2802 = -0.21*t2799;
  t2830 = 0.049*t2160;
  t3116 = t2160*t3105;
  t3219 = t826*t3218;
  t3224 = 0. + t2802 + t2830 + t3116 + t3219;
  t3370 = Sin(var1[1]);
  t3335 = t554*t2755;
  t3337 = -1.*t2701*t2391;
  t3345 = 0. + t3335 + t3337;
  t3349 = -1.*t445;
  t3350 = 1. + t3349;
  t3378 = -0.049*t2776;
  t3383 = t554*t3262;
  t3388 = -0.09*t2391;
  t3401 = -1.*t3224*t2391;
  t3409 = 0. + t3378 + t3383 + t3388 + t3401;
  t3346 = t445*t3345;
  t3347 = 0. + t3346;
  t2780 = -0.09*t2776;
  t3235 = t554*t3224;
  t3243 = 0.049*t2391;
  t3275 = t3262*t2391;
  t3281 = 0. + t2780 + t3235 + t3243 + t3275;
  t2346 = t2160*t2110;
  t2360 = t826*t2242;
  t2385 = 0. + t2346 + t2360;
  t2123 = t826*t2110;
  t2250 = -1.*t2160*t2242;
  t2290 = 0. + t2123 + t2250;
  t3356 = -0.049*t3350;
  t3375 = 0.004500000000000004*t3370;
  t3424 = t445*t3409;
  t3427 = 0. + t3356 + t3375 + t3424;
  t2295 = t554*t2290;
  t2420 = -1.*t2385*t2391;
  t2432 = 0. + t2295 + t2420;
  t2445 = t445*t2432;
  t2472 = 0. + t2445;
  t3438 = 0.135*t3350;
  t3446 = 0.1305*t445;
  t3447 = 0.049*t3370;
  t3464 = t3370*t3409;
  t3472 = 0. + t3438 + t3446 + t3447 + t3464;
  t3511 = t554*t2385;
  t3522 = t2290*t2391;
  t3538 = 0. + t3511 + t3522;
  t3587 = 0. + t3370;
  t2707 = t554*t2701;
  t2756 = t2755*t2391;
  t2757 = 0. + t2707 + t2756;
  t3434 = t3370*t3345;
  t3436 = 0. + t3434;
  t3612 = -1.*t445;
  t3620 = 0. + t3612;
  t3553 = t3370*t2432;
  t3562 = 0. + t3553;
  t3283 = t2757*t3281;
  t3542 = -1.*t3281*t3538;
  p_output1[0]=0. + t2472*(t3283 + t3347*t3427 + t3436*t3472) + t3347*(-1.*t2472*t3427 + t3542 - 1.*t3472*t3562);
  p_output1[1]=-0.135*t3538 + (-1.*t2757*t3281 - 1.*t3347*t3427 - 1.*t3436*t3472)*t3587 + t3347*(0. + t3427*t3587 + t3472*t3620);
  p_output1[2]=-0.135*t2757 + (t2472*t3427 + t3281*t3538 + t3472*t3562)*t3587 + t2472*(0. - 1.*t3427*t3587 - 1.*t3472*t3620);
  p_output1[3]=-0.049 + (0. + t3283 + t3345*t3409)*t3538 + t2757*(0. - 1.*t2432*t3409 + t3542);
  p_output1[4]=0. + 0.135*t2432 - 0.1305*t2757;
  p_output1[5]=0. + 0.135*t3345 + 0.1305*t3538;
  p_output1[6]=0.;
  p_output1[7]=0. - 0.09*t2290 + 0.049*t2385 - 1.*t2701*t3224 - 1.*t2755*t3262;
  p_output1[8]=0. + 0.049*t2701 - 0.09*t2755 + t2385*t3224 + t2290*t3262;
  p_output1[9]=0.;
  p_output1[10]=0. - 0.21*t2110 + 0.049*t2242 - 1.*t2683*t3105 - 1.*t2641*t3218;
  p_output1[11]=0. + 0.049*t2641 - 0.21*t2683 + t2110*t3105 + t2242*t3218;
  p_output1[12]=0.;
  p_output1[13]=0. + 0.0016*t1793 - 0.2707*t2065 - 1.*t2612*t3012 - 1.*t2553*t3090;
  p_output1[14]=0. - 0.2707*t2553 + 0.0016*t2612 + t1793*t3012 + t2065*t3090;
  p_output1[15]=0.;
  p_output1[16]=0. - 0.7055*t1303 - 0.0184*t1695 - 1.*t2508*t2947 - 1.*t1303*t2994;
  p_output1[17]=0. - 0.0184*t1303 - 0.7055*t2508 + t1303*t2947 + t1695*t2994;
  p_output1[18]=0.;
  p_output1[19]=0.05136484440000011;
  p_output1[20]=0.019994554799999897;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
}



void Jvb_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
