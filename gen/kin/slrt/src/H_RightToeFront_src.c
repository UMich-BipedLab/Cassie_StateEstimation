/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:58 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeFront_src.h"

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
  double t43;
  double t382;
  double t476;
  double t402;
  double t523;
  double t85;
  double t110;
  double t258;
  double t272;
  double t643;
  double t435;
  double t560;
  double t598;
  double t693;
  double t694;
  double t701;
  double t635;
  double t708;
  double t743;
  double t1544;
  double t1503;
  double t1507;
  double t1527;
  double t1474;
  double t1570;
  double t1596;
  double t1597;
  double t1637;
  double t1528;
  double t1599;
  double t1605;
  double t1448;
  double t1639;
  double t1641;
  double t1644;
  double t1747;
  double t1630;
  double t1704;
  double t1721;
  double t1447;
  double t1768;
  double t1776;
  double t1779;
  double t1888;
  double t1743;
  double t1797;
  double t1828;
  double t1438;
  double t1903;
  double t1936;
  double t1973;
  double t2070;
  double t1883;
  double t1980;
  double t1990;
  double t1428;
  double t2122;
  double t2128;
  double t2194;
  double t801;
  double t809;
  double t818;
  double t943;
  double t948;
  double t1052;
  double t903;
  double t1078;
  double t1101;
  double t2374;
  double t2406;
  double t2411;
  double t2430;
  double t2454;
  double t2464;
  double t2413;
  double t2480;
  double t2510;
  double t2568;
  double t2571;
  double t2578;
  double t2556;
  double t2605;
  double t2622;
  double t2638;
  double t2641;
  double t2681;
  double t2628;
  double t2683;
  double t2690;
  double t2740;
  double t2765;
  double t2801;
  double t2729;
  double t2803;
  double t2827;
  double t2864;
  double t2885;
  double t2890;
  double t1135;
  double t1148;
  double t1264;
  double t3097;
  double t3103;
  double t3126;
  double t3136;
  double t3139;
  double t3192;
  double t3130;
  double t3213;
  double t3226;
  double t3241;
  double t3257;
  double t3271;
  double t3240;
  double t3295;
  double t3334;
  double t3363;
  double t3364;
  double t3394;
  double t3360;
  double t3403;
  double t3427;
  double t3457;
  double t3465;
  double t3482;
  double t3449;
  double t3487;
  double t3496;
  double t3500;
  double t3513;
  double t3542;
  double t2039;
  double t2226;
  double t2227;
  double t2284;
  double t2290;
  double t2307;
  double t2863;
  double t2912;
  double t2913;
  double t2938;
  double t2961;
  double t2974;
  double t3498;
  double t3545;
  double t3547;
  double t3590;
  double t3592;
  double t3600;
  double t3828;
  double t3832;
  double t3984;
  double t3991;
  double t4127;
  double t4134;
  double t4193;
  double t4208;
  double t4249;
  double t4251;
  double t4327;
  double t4348;
  double t3839;
  double t3840;
  double t3857;
  double t3866;
  double t3871;
  double t3890;
  double t3895;
  double t3901;
  double t3915;
  double t3931;
  double t3935;
  double t3964;
  double t4021;
  double t4026;
  double t4035;
  double t4083;
  double t4088;
  double t4102;
  double t4140;
  double t4142;
  double t4152;
  double t4164;
  double t4168;
  double t4180;
  double t4210;
  double t4224;
  double t4225;
  double t4229;
  double t4230;
  double t4236;
  double t4254;
  double t4256;
  double t4260;
  double t4277;
  double t4280;
  double t4285;
  double t4351;
  double t4355;
  double t4384;
  double t4409;
  double t4453;
  double t4462;
  t43 = Cos(var1[3]);
  t382 = Cos(var1[5]);
  t476 = Sin(var1[3]);
  t402 = Sin(var1[4]);
  t523 = Sin(var1[5]);
  t85 = Cos(var1[4]);
  t110 = Sin(var1[14]);
  t258 = Cos(var1[14]);
  t272 = Sin(var1[13]);
  t643 = Cos(var1[13]);
  t435 = t43*t382*t402;
  t560 = t476*t523;
  t598 = t435 + t560;
  t693 = -1.*t382*t476;
  t694 = t43*t402*t523;
  t701 = t693 + t694;
  t635 = t272*t598;
  t708 = t643*t701;
  t743 = t635 + t708;
  t1544 = Cos(var1[15]);
  t1503 = t643*t598;
  t1507 = -1.*t272*t701;
  t1527 = t1503 + t1507;
  t1474 = Sin(var1[15]);
  t1570 = t258*t43*t85;
  t1596 = t110*t743;
  t1597 = t1570 + t1596;
  t1637 = Cos(var1[16]);
  t1528 = t1474*t1527;
  t1599 = t1544*t1597;
  t1605 = t1528 + t1599;
  t1448 = Sin(var1[16]);
  t1639 = t1544*t1527;
  t1641 = -1.*t1474*t1597;
  t1644 = t1639 + t1641;
  t1747 = Cos(var1[17]);
  t1630 = -1.*t1448*t1605;
  t1704 = t1637*t1644;
  t1721 = t1630 + t1704;
  t1447 = Sin(var1[17]);
  t1768 = t1637*t1605;
  t1776 = t1448*t1644;
  t1779 = t1768 + t1776;
  t1888 = Cos(var1[18]);
  t1743 = t1447*t1721;
  t1797 = t1747*t1779;
  t1828 = t1743 + t1797;
  t1438 = Sin(var1[18]);
  t1903 = t1747*t1721;
  t1936 = -1.*t1447*t1779;
  t1973 = t1903 + t1936;
  t2070 = Cos(var1[19]);
  t1883 = -1.*t1438*t1828;
  t1980 = t1888*t1973;
  t1990 = t1883 + t1980;
  t1428 = Sin(var1[19]);
  t2122 = t1888*t1828;
  t2128 = t1438*t1973;
  t2194 = t2122 + t2128;
  t801 = t382*t476*t402;
  t809 = -1.*t43*t523;
  t818 = t801 + t809;
  t943 = t43*t382;
  t948 = t476*t402*t523;
  t1052 = t943 + t948;
  t903 = t272*t818;
  t1078 = t643*t1052;
  t1101 = t903 + t1078;
  t2374 = t643*t818;
  t2406 = -1.*t272*t1052;
  t2411 = t2374 + t2406;
  t2430 = t258*t85*t476;
  t2454 = t110*t1101;
  t2464 = t2430 + t2454;
  t2413 = t1474*t2411;
  t2480 = t1544*t2464;
  t2510 = t2413 + t2480;
  t2568 = t1544*t2411;
  t2571 = -1.*t1474*t2464;
  t2578 = t2568 + t2571;
  t2556 = -1.*t1448*t2510;
  t2605 = t1637*t2578;
  t2622 = t2556 + t2605;
  t2638 = t1637*t2510;
  t2641 = t1448*t2578;
  t2681 = t2638 + t2641;
  t2628 = t1447*t2622;
  t2683 = t1747*t2681;
  t2690 = t2628 + t2683;
  t2740 = t1747*t2622;
  t2765 = -1.*t1447*t2681;
  t2801 = t2740 + t2765;
  t2729 = -1.*t1438*t2690;
  t2803 = t1888*t2801;
  t2827 = t2729 + t2803;
  t2864 = t1888*t2690;
  t2885 = t1438*t2801;
  t2890 = t2864 + t2885;
  t1135 = t85*t382*t272;
  t1148 = t643*t85*t523;
  t1264 = t1135 + t1148;
  t3097 = t643*t85*t382;
  t3103 = -1.*t85*t272*t523;
  t3126 = t3097 + t3103;
  t3136 = -1.*t258*t402;
  t3139 = t110*t1264;
  t3192 = t3136 + t3139;
  t3130 = t1474*t3126;
  t3213 = t1544*t3192;
  t3226 = t3130 + t3213;
  t3241 = t1544*t3126;
  t3257 = -1.*t1474*t3192;
  t3271 = t3241 + t3257;
  t3240 = -1.*t1448*t3226;
  t3295 = t1637*t3271;
  t3334 = t3240 + t3295;
  t3363 = t1637*t3226;
  t3364 = t1448*t3271;
  t3394 = t3363 + t3364;
  t3360 = t1447*t3334;
  t3403 = t1747*t3394;
  t3427 = t3360 + t3403;
  t3457 = t1747*t3334;
  t3465 = -1.*t1447*t3394;
  t3482 = t3457 + t3465;
  t3449 = -1.*t1438*t3427;
  t3487 = t1888*t3482;
  t3496 = t3449 + t3487;
  t3500 = t1888*t3427;
  t3513 = t1438*t3482;
  t3542 = t3500 + t3513;
  t2039 = t1428*t1990;
  t2226 = t2070*t2194;
  t2227 = t2039 + t2226;
  t2284 = t2070*t1990;
  t2290 = -1.*t1428*t2194;
  t2307 = t2284 + t2290;
  t2863 = t1428*t2827;
  t2912 = t2070*t2890;
  t2913 = t2863 + t2912;
  t2938 = t2070*t2827;
  t2961 = -1.*t1428*t2890;
  t2974 = t2938 + t2961;
  t3498 = t1428*t3496;
  t3545 = t2070*t3542;
  t3547 = t3498 + t3545;
  t3590 = t2070*t3496;
  t3592 = -1.*t1428*t3542;
  t3600 = t3590 + t3592;
  t3828 = -1.*t258;
  t3832 = 1. + t3828;
  t3984 = -1.*t1544;
  t3991 = 1. + t3984;
  t4127 = -1.*t1637;
  t4134 = 1. + t4127;
  t4193 = -1.*t1747;
  t4208 = 1. + t4193;
  t4249 = -1.*t1888;
  t4251 = 1. + t4249;
  t4327 = -1.*t2070;
  t4348 = 1. + t4327;
  t3839 = -0.049*t3832;
  t3840 = -0.135*t110;
  t3857 = 0. + t3839 + t3840;
  t3866 = 0.135*t272;
  t3871 = 0. + t3866;
  t3890 = -1.*t643;
  t3895 = 1. + t3890;
  t3901 = -0.135*t3895;
  t3915 = 0. + t3901;
  t3931 = -0.135*t3832;
  t3935 = 0.049*t110;
  t3964 = 0. + t3931 + t3935;
  t4021 = -0.09*t3991;
  t4026 = 0.049*t1474;
  t4035 = 0. + t4021 + t4026;
  t4083 = -0.049*t3991;
  t4088 = -0.09*t1474;
  t4102 = 0. + t4083 + t4088;
  t4140 = -0.049*t4134;
  t4142 = -0.21*t1448;
  t4152 = 0. + t4140 + t4142;
  t4164 = -0.21*t4134;
  t4168 = 0.049*t1448;
  t4180 = 0. + t4164 + t4168;
  t4210 = -0.2707*t4208;
  t4224 = 0.0016*t1447;
  t4225 = 0. + t4210 + t4224;
  t4229 = -0.0016*t4208;
  t4230 = -0.2707*t1447;
  t4236 = 0. + t4229 + t4230;
  t4254 = 0.0184*t4251;
  t4256 = -0.7055*t1438;
  t4260 = 0. + t4254 + t4256;
  t4277 = -0.7055*t4251;
  t4280 = -0.0184*t1438;
  t4285 = 0. + t4277 + t4280;
  t4351 = -1.1135*t4348;
  t4355 = 0.0216*t1428;
  t4384 = 0. + t4351 + t4355;
  t4409 = -0.0216*t4348;
  t4453 = -1.1135*t1428;
  t4462 = 0. + t4409 + t4453;
  p_output1[0]=-1.*t258*t743 + t110*t43*t85;
  p_output1[1]=-1.*t1101*t258 + t110*t476*t85;
  p_output1[2]=-1.*t1264*t258 - 1.*t110*t402;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2227 + 0.766044*t2307;
  p_output1[5]=0.642788*t2913 + 0.766044*t2974;
  p_output1[6]=0.642788*t3547 + 0.766044*t3600;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2227 + 0.642788*t2307;
  p_output1[9]=-0.766044*t2913 + 0.642788*t2974;
  p_output1[10]=-0.766044*t3547 + 0.642788*t3600;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.088451*t2227 - 1.062256*t2307 + t1527*t4035 + t1597*t4102 + t1605*t4152 + t1644*t4180 + t1721*t4225 + t1779*t4236 + t1828*t4260 + t1973*t4285 + t1990*t4384 + t2194*t4462 + t3871*t598 + t3915*t701 + t3964*t743 + t3857*t43*t85 - 0.1305*(t258*t743 - 1.*t110*t43*t85) + var1[0];
  p_output1[13]=0. + 0.088451*t2913 - 1.062256*t2974 + t1052*t3915 + t1101*t3964 + t2411*t4035 + t2464*t4102 + t2510*t4152 + t2578*t4180 + t2622*t4225 + t2681*t4236 + t2690*t4260 + t2801*t4285 + t2827*t4384 + t2890*t4462 + t3871*t818 + t3857*t476*t85 - 0.1305*(t1101*t258 - 1.*t110*t476*t85) + var1[1];
  p_output1[14]=0. + 0.088451*t3547 - 1.062256*t3600 + t1264*t3964 - 1.*t3857*t402 - 0.1305*(t1264*t258 + t110*t402) + t3126*t4035 + t3192*t4102 + t3226*t4152 + t3271*t4180 + t3334*t4225 + t3394*t4236 + t3427*t4260 + t3482*t4285 + t3496*t4384 + t3542*t4462 + t382*t3871*t85 + t3915*t523*t85 + var1[2];
  p_output1[15]=1.;
}



void H_RightToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
