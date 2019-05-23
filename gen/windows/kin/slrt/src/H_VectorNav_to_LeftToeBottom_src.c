/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:11:13 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_LeftToeBottom_src.h"

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
  double t216;
  double t1042;
  double t944;
  double t1020;
  double t1059;
  double t1111;
  double t1041;
  double t1064;
  double t1098;
  double t758;
  double t1134;
  double t1176;
  double t1205;
  double t1319;
  double t1108;
  double t1206;
  double t1219;
  double t717;
  double t1355;
  double t1357;
  double t1371;
  double t1542;
  double t1305;
  double t1375;
  double t1467;
  double t702;
  double t1569;
  double t1573;
  double t1588;
  double t115;
  double t39;
  double t262;
  double t1811;
  double t1822;
  double t1828;
  double t1881;
  double t1888;
  double t1924;
  double t1875;
  double t1944;
  double t1976;
  double t2084;
  double t2088;
  double t2125;
  double t2064;
  double t2169;
  double t2195;
  double t2290;
  double t2294;
  double t2302;
  double t2245;
  double t2307;
  double t2331;
  double t2456;
  double t2473;
  double t2477;
  double t2663;
  double t2668;
  double t2686;
  double t2775;
  double t2828;
  double t2830;
  double t2714;
  double t2853;
  double t2933;
  double t2938;
  double t2942;
  double t2984;
  double t2936;
  double t3050;
  double t3083;
  double t3098;
  double t3104;
  double t3172;
  double t3092;
  double t3180;
  double t3194;
  double t3208;
  double t3230;
  double t3286;
  double t1514;
  double t1591;
  double t1664;
  double t1684;
  double t1717;
  double t1735;
  double t2382;
  double t2492;
  double t2500;
  double t2507;
  double t2546;
  double t2563;
  double t3207;
  double t3315;
  double t3345;
  double t3424;
  double t3425;
  double t3451;
  double t3776;
  double t3795;
  double t4020;
  double t4021;
  double t4107;
  double t4133;
  double t4261;
  double t4267;
  double t3687;
  double t3736;
  double t3877;
  double t3885;
  double t3906;
  double t3911;
  double t3957;
  double t3831;
  double t3837;
  double t3838;
  double t3991;
  double t3994;
  double t4007;
  double t4034;
  double t4044;
  double t4053;
  double t4069;
  double t4074;
  double t4078;
  double t4143;
  double t4193;
  double t4198;
  double t4227;
  double t4236;
  double t4240;
  double t4270;
  double t4272;
  double t4285;
  double t4338;
  double t4339;
  double t4348;
  double t4403;
  double t4410;
  double t4411;
  double t4429;
  double t4441;
  double t4448;
  t216 = Cos(var1[1]);
  t1042 = Cos(var1[3]);
  t944 = Cos(var1[2]);
  t1020 = Sin(var1[3]);
  t1059 = Sin(var1[2]);
  t1111 = Cos(var1[4]);
  t1041 = -1.*t216*t944*t1020;
  t1064 = -1.*t1042*t216*t1059;
  t1098 = t1041 + t1064;
  t758 = Sin(var1[4]);
  t1134 = t1042*t216*t944;
  t1176 = -1.*t216*t1020*t1059;
  t1205 = t1134 + t1176;
  t1319 = Cos(var1[5]);
  t1108 = t758*t1098;
  t1206 = t1111*t1205;
  t1219 = t1108 + t1206;
  t717 = Sin(var1[5]);
  t1355 = t1111*t1098;
  t1357 = -1.*t758*t1205;
  t1371 = t1355 + t1357;
  t1542 = Cos(var1[6]);
  t1305 = -1.*t717*t1219;
  t1375 = t1319*t1371;
  t1467 = t1305 + t1375;
  t702 = Sin(var1[6]);
  t1569 = t1319*t1219;
  t1573 = t717*t1371;
  t1588 = t1569 + t1573;
  t115 = Cos(var1[0]);
  t39 = Sin(var1[1]);
  t262 = Sin(var1[0]);
  t1811 = t115*t944*t39;
  t1822 = -1.*t262*t1059;
  t1828 = t1811 + t1822;
  t1881 = -1.*t944*t262;
  t1888 = -1.*t115*t39*t1059;
  t1924 = t1881 + t1888;
  t1875 = -1.*t1020*t1828;
  t1944 = t1042*t1924;
  t1976 = t1875 + t1944;
  t2084 = t1042*t1828;
  t2088 = t1020*t1924;
  t2125 = t2084 + t2088;
  t2064 = t758*t1976;
  t2169 = t1111*t2125;
  t2195 = t2064 + t2169;
  t2290 = t1111*t1976;
  t2294 = -1.*t758*t2125;
  t2302 = t2290 + t2294;
  t2245 = -1.*t717*t2195;
  t2307 = t1319*t2302;
  t2331 = t2245 + t2307;
  t2456 = t1319*t2195;
  t2473 = t717*t2302;
  t2477 = t2456 + t2473;
  t2663 = t944*t262*t39;
  t2668 = t115*t1059;
  t2686 = t2663 + t2668;
  t2775 = t115*t944;
  t2828 = -1.*t262*t39*t1059;
  t2830 = t2775 + t2828;
  t2714 = -1.*t1020*t2686;
  t2853 = t1042*t2830;
  t2933 = t2714 + t2853;
  t2938 = t1042*t2686;
  t2942 = t1020*t2830;
  t2984 = t2938 + t2942;
  t2936 = t758*t2933;
  t3050 = t1111*t2984;
  t3083 = t2936 + t3050;
  t3098 = t1111*t2933;
  t3104 = -1.*t758*t2984;
  t3172 = t3098 + t3104;
  t3092 = -1.*t717*t3083;
  t3180 = t1319*t3172;
  t3194 = t3092 + t3180;
  t3208 = t1319*t3083;
  t3230 = t717*t3172;
  t3286 = t3208 + t3230;
  t1514 = t702*t1467;
  t1591 = t1542*t1588;
  t1664 = t1514 + t1591;
  t1684 = t1542*t1467;
  t1717 = -1.*t702*t1588;
  t1735 = t1684 + t1717;
  t2382 = t702*t2331;
  t2492 = t1542*t2477;
  t2500 = t2382 + t2492;
  t2507 = t1542*t2331;
  t2546 = -1.*t702*t2477;
  t2563 = t2507 + t2546;
  t3207 = t702*t3194;
  t3315 = t1542*t3286;
  t3345 = t3207 + t3315;
  t3424 = t1542*t3194;
  t3425 = -1.*t702*t3286;
  t3451 = t3424 + t3425;
  t3776 = -1.*t1042;
  t3795 = 1. + t3776;
  t4020 = -1.*t1111;
  t4021 = 1. + t4020;
  t4107 = -1.*t1319;
  t4133 = 1. + t4107;
  t4261 = -1.*t1542;
  t4267 = 1. + t4261;
  t3687 = -1.*t216;
  t3736 = 1. + t3687;
  t3877 = -1.*t944;
  t3885 = 1. + t3877;
  t3906 = -0.049*t3885;
  t3911 = -0.09*t1059;
  t3957 = 0. + t3906 + t3911;
  t3831 = -0.049*t3795;
  t3837 = -0.21*t1020;
  t3838 = 0. + t3831 + t3837;
  t3991 = -0.21*t3795;
  t3994 = 0.049*t1020;
  t4007 = 0. + t3991 + t3994;
  t4034 = -0.2707*t4021;
  t4044 = 0.0016*t758;
  t4053 = 0. + t4034 + t4044;
  t4069 = -0.0016*t4021;
  t4074 = -0.2707*t758;
  t4078 = 0. + t4069 + t4074;
  t4143 = 0.0184*t4133;
  t4193 = -0.7055*t717;
  t4198 = 0. + t4143 + t4193;
  t4227 = -0.7055*t4133;
  t4236 = -0.0184*t717;
  t4240 = 0. + t4227 + t4236;
  t4270 = -1.1135*t4267;
  t4272 = 0.0216*t702;
  t4285 = 0. + t4270 + t4272;
  t4338 = -0.0216*t4267;
  t4339 = -1.1135*t702;
  t4348 = 0. + t4338 + t4339;
  t4403 = 0.135*t3736;
  t4410 = 0.049*t39;
  t4411 = 0. + t4403 + t4410;
  t4429 = -0.09*t3885;
  t4441 = 0.049*t1059;
  t4448 = 0. + t4429 + t4441;
  p_output1[0]=0. + t39;
  p_output1[1]=0. - 1.*t115*t216;
  p_output1[2]=0. - 1.*t216*t262;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t1664 + 0.766044*t1735;
  p_output1[5]=0. + 0.642788*t2500 + 0.766044*t2563;
  p_output1[6]=0. + 0.642788*t3345 + 0.766044*t3451;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t1664 + 0.642788*t1735;
  p_output1[9]=0. - 0.766044*t2500 + 0.642788*t2563;
  p_output1[10]=0. - 0.766044*t3345 + 0.642788*t3451;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 + 0.0306*t1664 - 1.1312*t1735 - 0.049*t3736 + 0.004500000000000004*t39 + t216*t3957 - 1.*t1059*t216*t4007 + t1098*t4053 + t1205*t4078 + t1219*t4198 + t1371*t4240 + t1467*t4285 + t1588*t4348 + t216*t3838*t944;
  p_output1[13]=0. + 0.135*(1. - 1.*t115) + 0.1305*t115*t216 + 0.0306*t2500 - 1.1312*t2563 + t1828*t3838 + t115*t39*t3957 + t1924*t4007 + t1976*t4053 + t2125*t4078 + t2195*t4198 + t2302*t4240 + t2331*t4285 + t2477*t4348 + t115*t4411 - 1.*t262*t4448;
  p_output1[14]=0.07996 - 0.135*t262 + 0.1305*t216*t262 + 0.0306*t3345 - 1.1312*t3451 + t2686*t3838 + t262*t39*t3957 + t2830*t4007 + t2933*t4053 + t2984*t4078 + t3083*t4198 + t3172*t4240 + t3194*t4285 + t3286*t4348 + t262*t4411 + t115*t4448;
  p_output1[15]=1.;
}



void H_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
