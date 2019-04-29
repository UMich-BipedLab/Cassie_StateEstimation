/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:11:24 GMT-05:00
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
  double t839;
  double t1034;
  double t1249;
  double t919;
  double t1230;
  double t1241;
  double t700;
  double t1343;
  double t1648;
  double t1660;
  double t1881;
  double t1242;
  double t1676;
  double t1693;
  double t600;
  double t1905;
  double t1978;
  double t2017;
  double t2172;
  double t1760;
  double t2029;
  double t2094;
  double t569;
  double t2189;
  double t2197;
  double t2211;
  double t505;
  double t2539;
  double t2608;
  double t2611;
  double t2524;
  double t2638;
  double t2644;
  double t2670;
  double t2688;
  double t2654;
  double t2691;
  double t2735;
  double t2746;
  double t2752;
  double t2763;
  double t2470;
  double t2969;
  double t3011;
  double t2944;
  double t2950;
  double t3014;
  double t3020;
  double t3022;
  double t3028;
  double t3071;
  double t3080;
  double t3081;
  double t3087;
  double t2918;
  double t2919;
  double t2955;
  double t2961;
  double t3048;
  double t3093;
  double t3094;
  double t3125;
  double t3139;
  double t3166;
  double t3168;
  double t3169;
  double t2878;
  double t2883;
  double t2922;
  double t2923;
  double t3097;
  double t3182;
  double t3187;
  double t3213;
  double t3217;
  double t3221;
  double t3226;
  double t3227;
  double t312;
  double t2803;
  double t2820;
  double t2825;
  double t2738;
  double t2764;
  double t2771;
  double t2868;
  double t2870;
  double t3281;
  double t3282;
  double t3300;
  double t3302;
  double t3309;
  double t2895;
  double t2910;
  double t3206;
  double t3235;
  double t3241;
  double t3406;
  double t3348;
  double t3361;
  double t3369;
  double t3385;
  double t3400;
  double t3412;
  double t3438;
  double t3443;
  double t3463;
  double t3471;
  double t3382;
  double t3383;
  double t2871;
  double t3267;
  double t3271;
  double t3324;
  double t3329;
  double t2426;
  double t2433;
  double t2448;
  double t2096;
  double t2297;
  double t2369;
  double t3405;
  double t3407;
  double t3473;
  double t3487;
  double t2388;
  double t2473;
  double t2477;
  double t2494;
  double t2507;
  double t3507;
  double t3508;
  double t3509;
  double t3511;
  double t3526;
  double t3554;
  double t3559;
  double t3564;
  double t3638;
  double t2781;
  double t2828;
  double t2855;
  double t3503;
  double t3506;
  double t3644;
  double t3647;
  double t3602;
  double t3626;
  double t3344;
  double t3576;
  t839 = Cos(var1[6]);
  t1034 = Sin(var1[6]);
  t1249 = Cos(var1[5]);
  t919 = 0.642788*t839;
  t1230 = -0.766044*t1034;
  t1241 = t919 + t1230;
  t700 = Sin(var1[5]);
  t1343 = 0.766044*t839;
  t1648 = 0.642788*t1034;
  t1660 = t1343 + t1648;
  t1881 = Cos(var1[4]);
  t1242 = t700*t1241;
  t1676 = t1249*t1660;
  t1693 = 0. + t1242 + t1676;
  t600 = Sin(var1[4]);
  t1905 = t1249*t1241;
  t1978 = -1.*t700*t1660;
  t2017 = 0. + t1905 + t1978;
  t2172 = Sin(var1[3]);
  t1760 = -1.*t600*t1693;
  t2029 = t1881*t2017;
  t2094 = 0. + t1760 + t2029;
  t569 = Cos(var1[3]);
  t2189 = t1881*t1693;
  t2197 = t600*t2017;
  t2211 = 0. + t2189 + t2197;
  t505 = Cos(var1[2]);
  t2539 = -0.766044*t839;
  t2608 = -0.642788*t1034;
  t2611 = t2539 + t2608;
  t2524 = -1.*t700*t1241;
  t2638 = t1249*t2611;
  t2644 = 0. + t2524 + t2638;
  t2670 = t700*t2611;
  t2688 = 0. + t1905 + t2670;
  t2654 = t600*t2644;
  t2691 = t1881*t2688;
  t2735 = 0. + t2654 + t2691;
  t2746 = t1881*t2644;
  t2752 = -1.*t600*t2688;
  t2763 = 0. + t2746 + t2752;
  t2470 = Sin(var1[2]);
  t2969 = -1.*t839;
  t3011 = 1. + t2969;
  t2944 = -1.*t1249;
  t2950 = 1. + t2944;
  t3014 = -0.0216*t3011;
  t3020 = 0.0306*t839;
  t3022 = 0.01770000000000005*t1034;
  t3028 = 0. + t3014 + t3020 + t3022;
  t3071 = -1.1135*t3011;
  t3080 = -1.1312*t839;
  t3081 = 0.052199999999999996*t1034;
  t3087 = 0. + t3071 + t3080 + t3081;
  t2918 = -1.*t1881;
  t2919 = 1. + t2918;
  t2955 = -0.7055*t2950;
  t2961 = -0.0184*t700;
  t3048 = t700*t3028;
  t3093 = t1249*t3087;
  t3094 = 0. + t2955 + t2961 + t3048 + t3093;
  t3125 = 0.0184*t2950;
  t3139 = -0.7055*t700;
  t3166 = t1249*t3028;
  t3168 = -1.*t700*t3087;
  t3169 = 0. + t3125 + t3139 + t3166 + t3168;
  t2878 = -1.*t569;
  t2883 = 1. + t2878;
  t2922 = -0.0016*t2919;
  t2923 = -0.2707*t600;
  t3097 = -1.*t600*t3094;
  t3182 = t1881*t3169;
  t3187 = 0. + t2922 + t2923 + t3097 + t3182;
  t3213 = -0.2707*t2919;
  t3217 = 0.0016*t600;
  t3221 = t1881*t3094;
  t3226 = t600*t3169;
  t3227 = 0. + t3213 + t3217 + t3221 + t3226;
  t312 = Cos(var1[1]);
  t2803 = -1.*t2172*t2735;
  t2820 = t569*t2763;
  t2825 = 0. + t2803 + t2820;
  t2738 = t569*t2735;
  t2764 = t2172*t2763;
  t2771 = 0. + t2738 + t2764;
  t2868 = -1.*t505;
  t2870 = 1. + t2868;
  t3281 = -0.049*t2883;
  t3282 = -0.21*t2172;
  t3300 = t569*t3187;
  t3302 = -1.*t2172*t3227;
  t3309 = 0. + t3281 + t3282 + t3300 + t3302;
  t2895 = -0.21*t2883;
  t2910 = 0.049*t2172;
  t3206 = t2172*t3187;
  t3235 = t569*t3227;
  t3241 = 0. + t2895 + t2910 + t3206 + t3235;
  t3406 = Sin(var1[1]);
  t3348 = t505*t2825;
  t3361 = -1.*t2771*t2470;
  t3369 = 0. + t3348 + t3361;
  t3385 = -1.*t312;
  t3400 = 1. + t3385;
  t3412 = -0.049*t2870;
  t3438 = t505*t3309;
  t3443 = -0.09*t2470;
  t3463 = -1.*t3241*t2470;
  t3471 = 0. + t3412 + t3438 + t3443 + t3463;
  t3382 = t312*t3369;
  t3383 = 0. + t3382;
  t2871 = -0.09*t2870;
  t3267 = t505*t3241;
  t3271 = 0.049*t2470;
  t3324 = t3309*t2470;
  t3329 = 0. + t2871 + t3267 + t3271 + t3324;
  t2426 = t2172*t2094;
  t2433 = t569*t2211;
  t2448 = 0. + t2426 + t2433;
  t2096 = t569*t2094;
  t2297 = -1.*t2172*t2211;
  t2369 = 0. + t2096 + t2297;
  t3405 = -0.049*t3400;
  t3407 = 0.004500000000000004*t3406;
  t3473 = t312*t3471;
  t3487 = 0. + t3405 + t3407 + t3473;
  t2388 = t505*t2369;
  t2473 = -1.*t2448*t2470;
  t2477 = 0. + t2388 + t2473;
  t2494 = t312*t2477;
  t2507 = 0. + t2494;
  t3507 = 0.135*t3400;
  t3508 = 0.1305*t312;
  t3509 = 0.049*t3406;
  t3511 = t3406*t3471;
  t3526 = 0. + t3507 + t3508 + t3509 + t3511;
  t3554 = t505*t2448;
  t3559 = t2369*t2470;
  t3564 = 0. + t3554 + t3559;
  t3638 = 0. + t3406;
  t2781 = t505*t2771;
  t2828 = t2825*t2470;
  t2855 = 0. + t2781 + t2828;
  t3503 = t3406*t3369;
  t3506 = 0. + t3503;
  t3644 = -1.*t312;
  t3647 = 0. + t3644;
  t3602 = t3406*t2477;
  t3626 = 0. + t3602;
  t3344 = t2855*t3329;
  t3576 = -1.*t3329*t3564;
  p_output1[0]=0. + t2507*(t3344 + t3383*t3487 + t3506*t3526) + t3383*(-1.*t2507*t3487 + t3576 - 1.*t3526*t3626);
  p_output1[1]=-0.135*t3564 + (-1.*t2855*t3329 - 1.*t3383*t3487 - 1.*t3506*t3526)*t3638 + t3383*(0. + t3487*t3638 + t3526*t3647);
  p_output1[2]=-0.135*t2855 + (t2507*t3487 + t3329*t3564 + t3526*t3626)*t3638 + t2507*(0. - 1.*t3487*t3638 - 1.*t3526*t3647);
  p_output1[3]=-0.049 + (0. + t3344 + t3369*t3471)*t3564 + t2855*(0. - 1.*t2477*t3471 + t3576);
  p_output1[4]=0. + 0.135*t2477 - 0.1305*t2855;
  p_output1[5]=0. + 0.135*t3369 + 0.1305*t3564;
  p_output1[6]=0.;
  p_output1[7]=0. - 0.09*t2369 + 0.049*t2448 - 1.*t2771*t3241 - 1.*t2825*t3309;
  p_output1[8]=0. + 0.049*t2771 - 0.09*t2825 + t2448*t3241 + t2369*t3309;
  p_output1[9]=0.;
  p_output1[10]=0. - 0.21*t2094 + 0.049*t2211 - 1.*t2763*t3187 - 1.*t2735*t3227;
  p_output1[11]=0. + 0.049*t2735 - 0.21*t2763 + t2094*t3187 + t2211*t3227;
  p_output1[12]=0.;
  p_output1[13]=0. + 0.0016*t1693 - 0.2707*t2017 - 1.*t2688*t3094 - 1.*t2644*t3169;
  p_output1[14]=0. - 0.2707*t2644 + 0.0016*t2688 + t1693*t3094 + t2017*t3169;
  p_output1[15]=0.;
  p_output1[16]=0. - 0.7055*t1241 - 0.0184*t1660 - 1.*t2611*t3028 - 1.*t1241*t3087;
  p_output1[17]=0. - 0.0184*t1241 - 0.7055*t2611 + t1241*t3028 + t1660*t3087;
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
