/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:02:38 GMT-05:00
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
  double t282;
  double t746;
  double t1016;
  double t1151;
  double t1238;
  double t1311;
  double t1367;
  double t1895;
  double t1930;
  double t1950;
  double t1975;
  double t1673;
  double t1821;
  double t1822;
  double t2040;
  double t2049;
  double t2061;
  double t2146;
  double t2228;
  double t2233;
  double t2255;
  double t2109;
  double t2135;
  double t2137;
  double t2294;
  double t2301;
  double t2303;
  double t2353;
  double t2358;
  double t2388;
  double t2396;
  double t2336;
  double t2347;
  double t2352;
  double t2405;
  double t2406;
  double t2434;
  double t2590;
  double t307;
  double t329;
  double t557;
  double t824;
  double t997;
  double t1009;
  double t1024;
  double t1054;
  double t2653;
  double t1352;
  double t1404;
  double t1446;
  double t1536;
  double t1581;
  double t1631;
  double t2697;
  double t2702;
  double t2722;
  double t2725;
  double t2726;
  double t2731;
  double t1965;
  double t2016;
  double t2027;
  double t2066;
  double t2083;
  double t2084;
  double t2740;
  double t2741;
  double t2745;
  double t2752;
  double t2756;
  double t2759;
  double t2249;
  double t2265;
  double t2269;
  double t2310;
  double t2313;
  double t2318;
  double t2797;
  double t2818;
  double t2830;
  double t2836;
  double t2838;
  double t2845;
  double t2395;
  double t2398;
  double t2400;
  double t2437;
  double t2444;
  double t2448;
  double t2849;
  double t2852;
  double t2858;
  double t2867;
  double t2880;
  double t2888;
  double t2625;
  double t2630;
  double t2633;
  double t2661;
  double t2686;
  double t2692;
  double t3043;
  double t3046;
  double t3048;
  double t3058;
  double t3059;
  double t3061;
  double t3064;
  double t3076;
  double t3079;
  double t3101;
  double t3102;
  double t3127;
  double t3132;
  double t3135;
  double t3154;
  double t3158;
  double t3159;
  double t3163;
  double t3167;
  double t3177;
  double t3189;
  double t3202;
  double t3214;
  double t3224;
  t282 = Cos(var1[8]);
  t746 = Cos(var1[9]);
  t1016 = Sin(var1[9]);
  t1151 = Cos(var1[10]);
  t1238 = -1.*t1151;
  t1311 = 1. + t1238;
  t1367 = Sin(var1[10]);
  t1895 = Cos(var1[11]);
  t1930 = -1.*t1895;
  t1950 = 1. + t1930;
  t1975 = Sin(var1[11]);
  t1673 = t282*t746*t1151;
  t1821 = -1.*t282*t1016*t1367;
  t1822 = t1673 + t1821;
  t2040 = -1.*t282*t1151*t1016;
  t2049 = -1.*t282*t746*t1367;
  t2061 = t2040 + t2049;
  t2146 = Cos(var1[12]);
  t2228 = -1.*t2146;
  t2233 = 1. + t2228;
  t2255 = Sin(var1[12]);
  t2109 = t1895*t1822;
  t2135 = t2061*t1975;
  t2137 = t2109 + t2135;
  t2294 = t1895*t2061;
  t2301 = -1.*t1822*t1975;
  t2303 = t2294 + t2301;
  t2353 = Cos(var1[13]);
  t2358 = -1.*t2353;
  t2388 = 1. + t2358;
  t2396 = Sin(var1[13]);
  t2336 = t2146*t2137;
  t2347 = t2303*t2255;
  t2352 = t2336 + t2347;
  t2405 = t2146*t2303;
  t2406 = -1.*t2137*t2255;
  t2434 = t2405 + t2406;
  t2590 = Cos(var1[7]);
  t307 = -1.*t282;
  t329 = 1. + t307;
  t557 = Sin(var1[8]);
  t824 = -1.*t746;
  t997 = 1. + t824;
  t1009 = -0.049*t997;
  t1024 = -0.09*t1016;
  t1054 = 0. + t1009 + t1024;
  t2653 = Sin(var1[7]);
  t1352 = -0.049*t1311;
  t1404 = -0.21*t1367;
  t1446 = 0. + t1352 + t1404;
  t1536 = -0.21*t1311;
  t1581 = 0.049*t1367;
  t1631 = 0. + t1536 + t1581;
  t2697 = t2590*t746*t557;
  t2702 = -1.*t2653*t1016;
  t2722 = t2697 + t2702;
  t2725 = -1.*t746*t2653;
  t2726 = -1.*t2590*t557*t1016;
  t2731 = t2725 + t2726;
  t1965 = -0.0016*t1950;
  t2016 = -0.2707*t1975;
  t2027 = 0. + t1965 + t2016;
  t2066 = -0.2707*t1950;
  t2083 = 0.0016*t1975;
  t2084 = 0. + t2066 + t2083;
  t2740 = t1151*t2722;
  t2741 = t2731*t1367;
  t2745 = t2740 + t2741;
  t2752 = t1151*t2731;
  t2756 = -1.*t2722*t1367;
  t2759 = t2752 + t2756;
  t2249 = 0.0184*t2233;
  t2265 = -0.7055*t2255;
  t2269 = 0. + t2249 + t2265;
  t2310 = -0.7055*t2233;
  t2313 = -0.0184*t2255;
  t2318 = 0. + t2310 + t2313;
  t2797 = t1895*t2745;
  t2818 = t2759*t1975;
  t2830 = t2797 + t2818;
  t2836 = t1895*t2759;
  t2838 = -1.*t2745*t1975;
  t2845 = t2836 + t2838;
  t2395 = -0.0216*t2388;
  t2398 = -1.1135*t2396;
  t2400 = 0. + t2395 + t2398;
  t2437 = -1.1135*t2388;
  t2444 = 0.0216*t2396;
  t2448 = 0. + t2437 + t2444;
  t2849 = t2146*t2830;
  t2852 = t2845*t2255;
  t2858 = t2849 + t2852;
  t2867 = t2146*t2845;
  t2880 = -1.*t2830*t2255;
  t2888 = t2867 + t2880;
  t2625 = -0.135*t329;
  t2630 = 0.049*t557;
  t2633 = 0. + t2625 + t2630;
  t2661 = -0.09*t997;
  t2686 = 0.049*t1016;
  t2692 = 0. + t2661 + t2686;
  t3043 = t746*t2653*t557;
  t3046 = t2590*t1016;
  t3048 = t3043 + t3046;
  t3058 = t2590*t746;
  t3059 = -1.*t2653*t557*t1016;
  t3061 = t3058 + t3059;
  t3064 = t1151*t3048;
  t3076 = t3061*t1367;
  t3079 = t3064 + t3076;
  t3101 = t1151*t3061;
  t3102 = -1.*t3048*t1367;
  t3127 = t3101 + t3102;
  t3132 = t1895*t3079;
  t3135 = t3127*t1975;
  t3154 = t3132 + t3135;
  t3158 = t1895*t3127;
  t3159 = -1.*t3079*t1975;
  t3163 = t3158 + t3159;
  t3167 = t2146*t3154;
  t3177 = t3163*t2255;
  t3189 = t3167 + t3177;
  t3202 = t2146*t3163;
  t3214 = -1.*t3154*t2255;
  t3224 = t3202 + t3214;

  p_output1(0)=-0.03155 + t1822*t2027 + t2061*t2084 + t2137*t2269 + t2303*t2318 + t2352*t2400 - 1.1312*(-1.*t2352*t2396 + t2353*t2434) + 0.0306*(t2352*t2353 + t2396*t2434) + t2434*t2448 + t1054*t282 - 1.*t1016*t1631*t282 - 0.049*t329 - 0.004500000000000004*t557 + t1446*t282*t746;
  p_output1(1)=0. - 0.135*(1. - 1.*t2590) + t2590*t2633 - 1.*t2653*t2692 + t1446*t2722 + t1631*t2731 + t2027*t2745 + t2084*t2759 - 0.1305*t2590*t282 + t2269*t2830 + t2318*t2845 + t2400*t2858 + t2448*t2888 - 1.1312*(-1.*t2396*t2858 + t2353*t2888) + 0.0306*(t2353*t2858 + t2396*t2888) + t1054*t2590*t557;
  p_output1(2)=0.07996 + 0.135*t2653 + t2633*t2653 + t2590*t2692 - 0.1305*t2653*t282 + t1446*t3048 + t1631*t3061 + t2027*t3079 + t2084*t3127 + t2269*t3154 + t2318*t3163 + t2400*t3189 + t2448*t3224 - 1.1312*(-1.*t2396*t3189 + t2353*t3224) + 0.0306*(t2353*t3189 + t2396*t3224) + t1054*t2653*t557;
}


       
Eigen::Matrix<double,3,1> p_VectorNav_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



