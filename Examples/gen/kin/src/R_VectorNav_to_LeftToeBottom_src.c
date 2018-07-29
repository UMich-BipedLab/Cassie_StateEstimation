/*
 * Automatically Generated from Mathematica.
 * Sun 29 Jul 2018 03:58:22 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_LeftToeBottom_src.h"

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
  double t353;
  double t1515;
  double t1255;
  double t1410;
  double t1543;
  double t1707;
  double t1501;
  double t1570;
  double t1630;
  double t1253;
  double t1828;
  double t1853;
  double t1854;
  double t1981;
  double t1688;
  double t1931;
  double t1952;
  double t1226;
  double t1994;
  double t2004;
  double t2013;
  double t2252;
  double t1960;
  double t2018;
  double t2043;
  double t1183;
  double t2259;
  double t2291;
  double t2292;
  double t325;
  double t148;
  double t628;
  double t2506;
  double t2510;
  double t2513;
  double t2624;
  double t2653;
  double t2663;
  double t2533;
  double t2669;
  double t2675;
  double t2728;
  double t2765;
  double t2772;
  double t2702;
  double t2776;
  double t2800;
  double t2810;
  double t2812;
  double t2836;
  double t2804;
  double t2845;
  double t2853;
  double t2936;
  double t2953;
  double t2971;
  double t3083;
  double t3085;
  double t3091;
  double t3118;
  double t3120;
  double t3131;
  double t3108;
  double t3135;
  double t3137;
  double t3152;
  double t3154;
  double t3175;
  double t3144;
  double t3179;
  double t3180;
  double t3214;
  double t3223;
  double t3253;
  double t3213;
  double t3266;
  double t3271;
  double t3295;
  double t3298;
  double t3299;
  double t2238;
  double t2316;
  double t2317;
  double t2408;
  double t2427;
  double t2483;
  double t2913;
  double t2998;
  double t3007;
  double t3041;
  double t3050;
  double t3054;
  double t3294;
  double t3300;
  double t3304;
  double t3335;
  double t3336;
  double t3338;
  t353 = Cos(var1[1]);
  t1515 = Cos(var1[3]);
  t1255 = Cos(var1[2]);
  t1410 = Sin(var1[3]);
  t1543 = Sin(var1[2]);
  t1707 = Cos(var1[4]);
  t1501 = -1.*t353*t1255*t1410;
  t1570 = -1.*t1515*t353*t1543;
  t1630 = t1501 + t1570;
  t1253 = Sin(var1[4]);
  t1828 = t1515*t353*t1255;
  t1853 = -1.*t353*t1410*t1543;
  t1854 = t1828 + t1853;
  t1981 = Cos(var1[5]);
  t1688 = t1253*t1630;
  t1931 = t1707*t1854;
  t1952 = t1688 + t1931;
  t1226 = Sin(var1[5]);
  t1994 = t1707*t1630;
  t2004 = -1.*t1253*t1854;
  t2013 = t1994 + t2004;
  t2252 = Cos(var1[6]);
  t1960 = -1.*t1226*t1952;
  t2018 = t1981*t2013;
  t2043 = t1960 + t2018;
  t1183 = Sin(var1[6]);
  t2259 = t1981*t1952;
  t2291 = t1226*t2013;
  t2292 = t2259 + t2291;
  t325 = Cos(var1[0]);
  t148 = Sin(var1[1]);
  t628 = Sin(var1[0]);
  t2506 = t325*t1255*t148;
  t2510 = -1.*t628*t1543;
  t2513 = t2506 + t2510;
  t2624 = -1.*t1255*t628;
  t2653 = -1.*t325*t148*t1543;
  t2663 = t2624 + t2653;
  t2533 = -1.*t1410*t2513;
  t2669 = t1515*t2663;
  t2675 = t2533 + t2669;
  t2728 = t1515*t2513;
  t2765 = t1410*t2663;
  t2772 = t2728 + t2765;
  t2702 = t1253*t2675;
  t2776 = t1707*t2772;
  t2800 = t2702 + t2776;
  t2810 = t1707*t2675;
  t2812 = -1.*t1253*t2772;
  t2836 = t2810 + t2812;
  t2804 = -1.*t1226*t2800;
  t2845 = t1981*t2836;
  t2853 = t2804 + t2845;
  t2936 = t1981*t2800;
  t2953 = t1226*t2836;
  t2971 = t2936 + t2953;
  t3083 = t1255*t628*t148;
  t3085 = t325*t1543;
  t3091 = t3083 + t3085;
  t3118 = t325*t1255;
  t3120 = -1.*t628*t148*t1543;
  t3131 = t3118 + t3120;
  t3108 = -1.*t1410*t3091;
  t3135 = t1515*t3131;
  t3137 = t3108 + t3135;
  t3152 = t1515*t3091;
  t3154 = t1410*t3131;
  t3175 = t3152 + t3154;
  t3144 = t1253*t3137;
  t3179 = t1707*t3175;
  t3180 = t3144 + t3179;
  t3214 = t1707*t3137;
  t3223 = -1.*t1253*t3175;
  t3253 = t3214 + t3223;
  t3213 = -1.*t1226*t3180;
  t3266 = t1981*t3253;
  t3271 = t3213 + t3266;
  t3295 = t1981*t3180;
  t3298 = t1226*t3253;
  t3299 = t3295 + t3298;
  t2238 = t1183*t2043;
  t2316 = t2252*t2292;
  t2317 = t2238 + t2316;
  t2408 = t2252*t2043;
  t2427 = -1.*t1183*t2292;
  t2483 = t2408 + t2427;
  t2913 = t1183*t2853;
  t2998 = t2252*t2971;
  t3007 = t2913 + t2998;
  t3041 = t2252*t2853;
  t3050 = -1.*t1183*t2971;
  t3054 = t3041 + t3050;
  t3294 = t1183*t3271;
  t3300 = t2252*t3299;
  t3304 = t3294 + t3300;
  t3335 = t2252*t3271;
  t3336 = -1.*t1183*t3299;
  t3338 = t3335 + t3336;
  p_output1[0]=0. + t148;
  p_output1[1]=0. - 1.*t325*t353;
  p_output1[2]=0. - 1.*t353*t628;
  p_output1[3]=0. + 0.642788*t2317 + 0.766044*t2483;
  p_output1[4]=0. + 0.642788*t3007 + 0.766044*t3054;
  p_output1[5]=0. + 0.642788*t3304 + 0.766044*t3338;
  p_output1[6]=0. - 0.766044*t2317 + 0.642788*t2483;
  p_output1[7]=0. - 0.766044*t3007 + 0.642788*t3054;
  p_output1[8]=0. - 0.766044*t3304 + 0.642788*t3338;
}



void R_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
