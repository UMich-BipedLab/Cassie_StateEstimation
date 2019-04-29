/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:20:59 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeBack_src.h"

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
  double t68;
  double t340;
  double t533;
  double t421;
  double t610;
  double t109;
  double t247;
  double t258;
  double t272;
  double t757;
  double t490;
  double t693;
  double t697;
  double t814;
  double t815;
  double t830;
  double t726;
  double t839;
  double t872;
  double t1629;
  double t1560;
  double t1581;
  double t1600;
  double t1535;
  double t1662;
  double t1680;
  double t1687;
  double t1815;
  double t1620;
  double t1743;
  double t1773;
  double t1523;
  double t1919;
  double t1930;
  double t1947;
  double t2063;
  double t1802;
  double t1958;
  double t2044;
  double t1500;
  double t2065;
  double t2068;
  double t2069;
  double t2232;
  double t2061;
  double t2082;
  double t2182;
  double t1496;
  double t2235;
  double t2237;
  double t2245;
  double t2324;
  double t2201;
  double t2260;
  double t2266;
  double t1494;
  double t2337;
  double t2378;
  double t2393;
  double t910;
  double t919;
  double t932;
  double t1017;
  double t1063;
  double t1122;
  double t997;
  double t1125;
  double t1126;
  double t2498;
  double t2512;
  double t2553;
  double t2593;
  double t2619;
  double t2631;
  double t2555;
  double t2638;
  double t2647;
  double t2671;
  double t2684;
  double t2685;
  double t2657;
  double t2697;
  double t2710;
  double t2730;
  double t2751;
  double t2783;
  double t2729;
  double t2805;
  double t2824;
  double t2865;
  double t2880;
  double t2888;
  double t2842;
  double t2903;
  double t2926;
  double t3036;
  double t3069;
  double t3070;
  double t1317;
  double t1373;
  double t1387;
  double t3120;
  double t3182;
  double t3201;
  double t3232;
  double t3266;
  double t3271;
  double t3231;
  double t3287;
  double t3300;
  double t3333;
  double t3338;
  double t3343;
  double t3320;
  double t3347;
  double t3351;
  double t3354;
  double t3379;
  double t3381;
  double t3353;
  double t3388;
  double t3389;
  double t3395;
  double t3401;
  double t3410;
  double t3392;
  double t3421;
  double t3451;
  double t3480;
  double t3508;
  double t3529;
  double t2274;
  double t2395;
  double t2427;
  double t2449;
  double t2455;
  double t2473;
  double t2930;
  double t3081;
  double t3083;
  double t3093;
  double t3095;
  double t3097;
  double t3461;
  double t3532;
  double t3582;
  double t3615;
  double t3624;
  double t3634;
  double t3787;
  double t3793;
  double t3998;
  double t3999;
  double t4105;
  double t4106;
  double t4232;
  double t4235;
  double t4289;
  double t4294;
  double t4374;
  double t4378;
  double t3823;
  double t3827;
  double t3831;
  double t3885;
  double t3896;
  double t3930;
  double t3945;
  double t3960;
  double t3961;
  double t3970;
  double t3971;
  double t3975;
  double t4004;
  double t4008;
  double t4019;
  double t4076;
  double t4077;
  double t4097;
  double t4115;
  double t4136;
  double t4145;
  double t4173;
  double t4199;
  double t4207;
  double t4238;
  double t4253;
  double t4259;
  double t4274;
  double t4277;
  double t4278;
  double t4309;
  double t4314;
  double t4329;
  double t4359;
  double t4360;
  double t4367;
  double t4389;
  double t4399;
  double t4402;
  double t4472;
  double t4488;
  double t4492;
  t68 = Cos(var1[3]);
  t340 = Cos(var1[5]);
  t533 = Sin(var1[3]);
  t421 = Sin(var1[4]);
  t610 = Sin(var1[5]);
  t109 = Cos(var1[4]);
  t247 = Sin(var1[14]);
  t258 = Cos(var1[14]);
  t272 = Sin(var1[13]);
  t757 = Cos(var1[13]);
  t490 = t68*t340*t421;
  t693 = t533*t610;
  t697 = t490 + t693;
  t814 = -1.*t340*t533;
  t815 = t68*t421*t610;
  t830 = t814 + t815;
  t726 = t272*t697;
  t839 = t757*t830;
  t872 = t726 + t839;
  t1629 = Cos(var1[15]);
  t1560 = t757*t697;
  t1581 = -1.*t272*t830;
  t1600 = t1560 + t1581;
  t1535 = Sin(var1[15]);
  t1662 = t258*t68*t109;
  t1680 = t247*t872;
  t1687 = t1662 + t1680;
  t1815 = Cos(var1[16]);
  t1620 = t1535*t1600;
  t1743 = t1629*t1687;
  t1773 = t1620 + t1743;
  t1523 = Sin(var1[16]);
  t1919 = t1629*t1600;
  t1930 = -1.*t1535*t1687;
  t1947 = t1919 + t1930;
  t2063 = Cos(var1[17]);
  t1802 = -1.*t1523*t1773;
  t1958 = t1815*t1947;
  t2044 = t1802 + t1958;
  t1500 = Sin(var1[17]);
  t2065 = t1815*t1773;
  t2068 = t1523*t1947;
  t2069 = t2065 + t2068;
  t2232 = Cos(var1[18]);
  t2061 = t1500*t2044;
  t2082 = t2063*t2069;
  t2182 = t2061 + t2082;
  t1496 = Sin(var1[18]);
  t2235 = t2063*t2044;
  t2237 = -1.*t1500*t2069;
  t2245 = t2235 + t2237;
  t2324 = Cos(var1[19]);
  t2201 = -1.*t1496*t2182;
  t2260 = t2232*t2245;
  t2266 = t2201 + t2260;
  t1494 = Sin(var1[19]);
  t2337 = t2232*t2182;
  t2378 = t1496*t2245;
  t2393 = t2337 + t2378;
  t910 = t340*t533*t421;
  t919 = -1.*t68*t610;
  t932 = t910 + t919;
  t1017 = t68*t340;
  t1063 = t533*t421*t610;
  t1122 = t1017 + t1063;
  t997 = t272*t932;
  t1125 = t757*t1122;
  t1126 = t997 + t1125;
  t2498 = t757*t932;
  t2512 = -1.*t272*t1122;
  t2553 = t2498 + t2512;
  t2593 = t258*t109*t533;
  t2619 = t247*t1126;
  t2631 = t2593 + t2619;
  t2555 = t1535*t2553;
  t2638 = t1629*t2631;
  t2647 = t2555 + t2638;
  t2671 = t1629*t2553;
  t2684 = -1.*t1535*t2631;
  t2685 = t2671 + t2684;
  t2657 = -1.*t1523*t2647;
  t2697 = t1815*t2685;
  t2710 = t2657 + t2697;
  t2730 = t1815*t2647;
  t2751 = t1523*t2685;
  t2783 = t2730 + t2751;
  t2729 = t1500*t2710;
  t2805 = t2063*t2783;
  t2824 = t2729 + t2805;
  t2865 = t2063*t2710;
  t2880 = -1.*t1500*t2783;
  t2888 = t2865 + t2880;
  t2842 = -1.*t1496*t2824;
  t2903 = t2232*t2888;
  t2926 = t2842 + t2903;
  t3036 = t2232*t2824;
  t3069 = t1496*t2888;
  t3070 = t3036 + t3069;
  t1317 = t109*t340*t272;
  t1373 = t757*t109*t610;
  t1387 = t1317 + t1373;
  t3120 = t757*t109*t340;
  t3182 = -1.*t109*t272*t610;
  t3201 = t3120 + t3182;
  t3232 = -1.*t258*t421;
  t3266 = t247*t1387;
  t3271 = t3232 + t3266;
  t3231 = t1535*t3201;
  t3287 = t1629*t3271;
  t3300 = t3231 + t3287;
  t3333 = t1629*t3201;
  t3338 = -1.*t1535*t3271;
  t3343 = t3333 + t3338;
  t3320 = -1.*t1523*t3300;
  t3347 = t1815*t3343;
  t3351 = t3320 + t3347;
  t3354 = t1815*t3300;
  t3379 = t1523*t3343;
  t3381 = t3354 + t3379;
  t3353 = t1500*t3351;
  t3388 = t2063*t3381;
  t3389 = t3353 + t3388;
  t3395 = t2063*t3351;
  t3401 = -1.*t1500*t3381;
  t3410 = t3395 + t3401;
  t3392 = -1.*t1496*t3389;
  t3421 = t2232*t3410;
  t3451 = t3392 + t3421;
  t3480 = t2232*t3389;
  t3508 = t1496*t3410;
  t3529 = t3480 + t3508;
  t2274 = t1494*t2266;
  t2395 = t2324*t2393;
  t2427 = t2274 + t2395;
  t2449 = t2324*t2266;
  t2455 = -1.*t1494*t2393;
  t2473 = t2449 + t2455;
  t2930 = t1494*t2926;
  t3081 = t2324*t3070;
  t3083 = t2930 + t3081;
  t3093 = t2324*t2926;
  t3095 = -1.*t1494*t3070;
  t3097 = t3093 + t3095;
  t3461 = t1494*t3451;
  t3532 = t2324*t3529;
  t3582 = t3461 + t3532;
  t3615 = t2324*t3451;
  t3624 = -1.*t1494*t3529;
  t3634 = t3615 + t3624;
  t3787 = -1.*t258;
  t3793 = 1. + t3787;
  t3998 = -1.*t1629;
  t3999 = 1. + t3998;
  t4105 = -1.*t1815;
  t4106 = 1. + t4105;
  t4232 = -1.*t2063;
  t4235 = 1. + t4232;
  t4289 = -1.*t2232;
  t4294 = 1. + t4289;
  t4374 = -1.*t2324;
  t4378 = 1. + t4374;
  t3823 = -0.049*t3793;
  t3827 = -0.135*t247;
  t3831 = 0. + t3823 + t3827;
  t3885 = 0.135*t272;
  t3896 = 0. + t3885;
  t3930 = -1.*t757;
  t3945 = 1. + t3930;
  t3960 = -0.135*t3945;
  t3961 = 0. + t3960;
  t3970 = -0.135*t3793;
  t3971 = 0.049*t247;
  t3975 = 0. + t3970 + t3971;
  t4004 = -0.09*t3999;
  t4008 = 0.049*t1535;
  t4019 = 0. + t4004 + t4008;
  t4076 = -0.049*t3999;
  t4077 = -0.09*t1535;
  t4097 = 0. + t4076 + t4077;
  t4115 = -0.049*t4106;
  t4136 = -0.21*t1523;
  t4145 = 0. + t4115 + t4136;
  t4173 = -0.21*t4106;
  t4199 = 0.049*t1523;
  t4207 = 0. + t4173 + t4199;
  t4238 = -0.2707*t4235;
  t4253 = 0.0016*t1500;
  t4259 = 0. + t4238 + t4253;
  t4274 = -0.0016*t4235;
  t4277 = -0.2707*t1500;
  t4278 = 0. + t4274 + t4277;
  t4309 = 0.0184*t4294;
  t4314 = -0.7055*t1496;
  t4329 = 0. + t4309 + t4314;
  t4359 = -0.7055*t4294;
  t4360 = -0.0184*t1496;
  t4367 = 0. + t4359 + t4360;
  t4389 = -1.1135*t4378;
  t4399 = 0.0216*t1494;
  t4402 = 0. + t4389 + t4399;
  t4472 = -0.0216*t4378;
  t4488 = -1.1135*t1494;
  t4492 = 0. + t4472 + t4488;
  p_output1[0]=t109*t247*t68 - 1.*t258*t872;
  p_output1[1]=-1.*t1126*t258 + t109*t247*t533;
  p_output1[2]=-1.*t1387*t258 - 1.*t247*t421;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2427 + 0.766044*t2473;
  p_output1[5]=0.642788*t3083 + 0.766044*t3097;
  p_output1[6]=0.642788*t3582 + 0.766044*t3634;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2427 + 0.642788*t2473;
  p_output1[9]=-0.766044*t3083 + 0.642788*t3097;
  p_output1[10]=-0.766044*t3582 + 0.642788*t3634;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.027251*t2427 - 1.200144*t2473 + t1600*t4019 + t1687*t4097 + t1773*t4145 + t1947*t4207 + t2044*t4259 + t2069*t4278 + t2182*t4329 + t2245*t4367 + t2266*t4402 + t2393*t4492 + t109*t3831*t68 + t3896*t697 + t3961*t830 + t3975*t872 - 0.1305*(-1.*t109*t247*t68 + t258*t872) + var1[0];
  p_output1[13]=0. - 0.027251*t3083 - 1.200144*t3097 + t1122*t3961 + t1126*t3975 + t2553*t4019 + t2631*t4097 + t2647*t4145 + t2685*t4207 + t2710*t4259 + t2783*t4278 + t2824*t4329 + t2888*t4367 + t2926*t4402 + t3070*t4492 + t109*t3831*t533 - 0.1305*(t1126*t258 - 1.*t109*t247*t533) + t3896*t932 + var1[1];
  p_output1[14]=0. - 0.027251*t3582 - 1.200144*t3634 + t109*t340*t3896 + t1387*t3975 + t3201*t4019 + t3271*t4097 + t3300*t4145 + t3343*t4207 - 1.*t3831*t421 - 0.1305*(t1387*t258 + t247*t421) + t3351*t4259 + t3381*t4278 + t3389*t4329 + t3410*t4367 + t3451*t4402 + t3529*t4492 + t109*t3961*t610 + var1[2];
  p_output1[15]=1.;
}



void H_RightToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
