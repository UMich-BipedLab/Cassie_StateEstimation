/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:11:43 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t198;
  double t914;
  double t1112;
  double t1431;
  double t1452;
  double t1483;
  double t1550;
  double t2061;
  double t2081;
  double t2095;
  double t2109;
  double t1991;
  double t1994;
  double t2017;
  double t2177;
  double t2223;
  double t2229;
  double t2329;
  double t2344;
  double t2354;
  double t2370;
  double t2272;
  double t2292;
  double t2295;
  double t2422;
  double t2435;
  double t2441;
  double t2516;
  double t2529;
  double t2531;
  double t2535;
  double t2482;
  double t2499;
  double t2504;
  double t2561;
  double t2562;
  double t2566;
  double t2716;
  double t456;
  double t459;
  double t691;
  double t1061;
  double t1077;
  double t1104;
  double t1161;
  double t1265;
  double t2779;
  double t1531;
  double t1573;
  double t1577;
  double t1893;
  double t1896;
  double t1931;
  double t2823;
  double t2826;
  double t2842;
  double t2854;
  double t2862;
  double t2863;
  double t2101;
  double t2128;
  double t2169;
  double t2250;
  double t2255;
  double t2258;
  double t2882;
  double t2886;
  double t2889;
  double t2895;
  double t2898;
  double t2902;
  double t2357;
  double t2379;
  double t2392;
  double t2451;
  double t2452;
  double t2462;
  double t2927;
  double t2953;
  double t2955;
  double t2968;
  double t2970;
  double t2993;
  double t2532;
  double t2539;
  double t2540;
  double t2570;
  double t2576;
  double t2579;
  double t3000;
  double t3001;
  double t3007;
  double t3025;
  double t3035;
  double t3036;
  double t2737;
  double t2740;
  double t2743;
  double t2803;
  double t2813;
  double t2816;
  double t3120;
  double t3121;
  double t3122;
  double t3128;
  double t3136;
  double t3150;
  double t3168;
  double t3174;
  double t3189;
  double t3191;
  double t3195;
  double t3204;
  double t3222;
  double t3223;
  double t3227;
  double t3247;
  double t3250;
  double t3251;
  double t3260;
  double t3263;
  double t3269;
  double t3282;
  double t3283;
  double t3288;
  t198 = Cos(var1[8]);
  t914 = Cos(var1[9]);
  t1112 = Sin(var1[9]);
  t1431 = Cos(var1[10]);
  t1452 = -1.*t1431;
  t1483 = 1. + t1452;
  t1550 = Sin(var1[10]);
  t2061 = Cos(var1[11]);
  t2081 = -1.*t2061;
  t2095 = 1. + t2081;
  t2109 = Sin(var1[11]);
  t1991 = t198*t914*t1431;
  t1994 = -1.*t198*t1112*t1550;
  t2017 = t1991 + t1994;
  t2177 = -1.*t198*t1431*t1112;
  t2223 = -1.*t198*t914*t1550;
  t2229 = t2177 + t2223;
  t2329 = Cos(var1[12]);
  t2344 = -1.*t2329;
  t2354 = 1. + t2344;
  t2370 = Sin(var1[12]);
  t2272 = t2061*t2017;
  t2292 = t2229*t2109;
  t2295 = t2272 + t2292;
  t2422 = t2061*t2229;
  t2435 = -1.*t2017*t2109;
  t2441 = t2422 + t2435;
  t2516 = Cos(var1[13]);
  t2529 = -1.*t2516;
  t2531 = 1. + t2529;
  t2535 = Sin(var1[13]);
  t2482 = t2329*t2295;
  t2499 = t2441*t2370;
  t2504 = t2482 + t2499;
  t2561 = t2329*t2441;
  t2562 = -1.*t2295*t2370;
  t2566 = t2561 + t2562;
  t2716 = Cos(var1[7]);
  t456 = -1.*t198;
  t459 = 1. + t456;
  t691 = Sin(var1[8]);
  t1061 = -1.*t914;
  t1077 = 1. + t1061;
  t1104 = -0.049*t1077;
  t1161 = -0.09*t1112;
  t1265 = 0. + t1104 + t1161;
  t2779 = Sin(var1[7]);
  t1531 = -0.049*t1483;
  t1573 = -0.21*t1550;
  t1577 = 0. + t1531 + t1573;
  t1893 = -0.21*t1483;
  t1896 = 0.049*t1550;
  t1931 = 0. + t1893 + t1896;
  t2823 = t2716*t914*t691;
  t2826 = -1.*t2779*t1112;
  t2842 = t2823 + t2826;
  t2854 = -1.*t914*t2779;
  t2862 = -1.*t2716*t691*t1112;
  t2863 = t2854 + t2862;
  t2101 = -0.0016*t2095;
  t2128 = -0.2707*t2109;
  t2169 = 0. + t2101 + t2128;
  t2250 = -0.2707*t2095;
  t2255 = 0.0016*t2109;
  t2258 = 0. + t2250 + t2255;
  t2882 = t1431*t2842;
  t2886 = t2863*t1550;
  t2889 = t2882 + t2886;
  t2895 = t1431*t2863;
  t2898 = -1.*t2842*t1550;
  t2902 = t2895 + t2898;
  t2357 = 0.0184*t2354;
  t2379 = -0.7055*t2370;
  t2392 = 0. + t2357 + t2379;
  t2451 = -0.7055*t2354;
  t2452 = -0.0184*t2370;
  t2462 = 0. + t2451 + t2452;
  t2927 = t2061*t2889;
  t2953 = t2902*t2109;
  t2955 = t2927 + t2953;
  t2968 = t2061*t2902;
  t2970 = -1.*t2889*t2109;
  t2993 = t2968 + t2970;
  t2532 = -0.0216*t2531;
  t2539 = -1.1135*t2535;
  t2540 = 0. + t2532 + t2539;
  t2570 = -1.1135*t2531;
  t2576 = 0.0216*t2535;
  t2579 = 0. + t2570 + t2576;
  t3000 = t2329*t2955;
  t3001 = t2993*t2370;
  t3007 = t3000 + t3001;
  t3025 = t2329*t2993;
  t3035 = -1.*t2955*t2370;
  t3036 = t3025 + t3035;
  t2737 = -0.135*t459;
  t2740 = 0.049*t691;
  t2743 = 0. + t2737 + t2740;
  t2803 = -0.09*t1077;
  t2813 = 0.049*t1112;
  t2816 = 0. + t2803 + t2813;
  t3120 = t914*t2779*t691;
  t3121 = t2716*t1112;
  t3122 = t3120 + t3121;
  t3128 = t2716*t914;
  t3136 = -1.*t2779*t691*t1112;
  t3150 = t3128 + t3136;
  t3168 = t1431*t3122;
  t3174 = t3150*t1550;
  t3189 = t3168 + t3174;
  t3191 = t1431*t3150;
  t3195 = -1.*t3122*t1550;
  t3204 = t3191 + t3195;
  t3222 = t2061*t3189;
  t3223 = t3204*t2109;
  t3227 = t3222 + t3223;
  t3247 = t2061*t3204;
  t3250 = -1.*t3189*t2109;
  t3251 = t3247 + t3250;
  t3260 = t2329*t3227;
  t3263 = t3251*t2370;
  t3269 = t3260 + t3263;
  t3282 = t2329*t3251;
  t3283 = -1.*t3227*t2370;
  t3288 = t3282 + t3283;

  p_output1(0)=-0.03155 + t1265*t198 - 1.*t1112*t1931*t198 + t2017*t2169 + t2229*t2258 + t2295*t2392 + t2441*t2462 + t2504*t2540 - 1.1312*(-1.*t2504*t2535 + t2516*t2566) + 0.0306*(t2504*t2516 + t2535*t2566) + t2566*t2579 - 0.049*t459 - 0.004500000000000004*t691 + t1577*t198*t914;
  p_output1(1)=0. - 0.135*(1. - 1.*t2716) - 0.1305*t198*t2716 + t2716*t2743 - 1.*t2779*t2816 + t1577*t2842 + t1931*t2863 + t2169*t2889 + t2258*t2902 + t2392*t2955 + t2462*t2993 + t2540*t3007 + t2579*t3036 - 1.1312*(-1.*t2535*t3007 + t2516*t3036) + 0.0306*(t2516*t3007 + t2535*t3036) + t1265*t2716*t691;
  p_output1(2)=0.07996 + 0.135*t2779 - 0.1305*t198*t2779 + t2743*t2779 + t2716*t2816 + t1577*t3122 + t1931*t3150 + t2169*t3189 + t2258*t3204 + t2392*t3227 + t2462*t3251 + t2540*t3269 + t2579*t3288 - 1.1312*(-1.*t2535*t3269 + t2516*t3288) + 0.0306*(t2516*t3269 + t2535*t3288) + t1265*t2779*t691;
}


       
Eigen::Matrix<double,3,1> p_VectorNav_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void p_VectorNav_to_RightToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



