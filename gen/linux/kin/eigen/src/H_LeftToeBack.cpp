/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:45 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeBack.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t245;
  double t137;
  double t252;
  double t138;
  double t343;
  double t107;
  double t136;
  double t441;
  double t497;
  double t505;
  double t168;
  double t350;
  double t355;
  double t356;
  double t388;
  double t393;
  double t431;
  double t463;
  double t464;
  double t1213;
  double t1320;
  double t1321;
  double t1364;
  double t1238;
  double t1252;
  double t1262;
  double t1371;
  double t1452;
  double t1293;
  double t1373;
  double t1391;
  double t1195;
  double t1474;
  double t1495;
  double t1505;
  double t1557;
  double t1416;
  double t1508;
  double t1509;
  double t1145;
  double t1568;
  double t1572;
  double t1597;
  double t1641;
  double t1515;
  double t1607;
  double t1621;
  double t1116;
  double t1723;
  double t1783;
  double t1787;
  double t1848;
  double t1633;
  double t1795;
  double t1817;
  double t1114;
  double t1851;
  double t1853;
  double t1920;
  double t579;
  double t664;
  double t665;
  double t702;
  double t721;
  double t739;
  double t743;
  double t791;
  double t820;
  double t2242;
  double t2255;
  double t2308;
  double t2166;
  double t2178;
  double t2184;
  double t2211;
  double t2330;
  double t2370;
  double t2376;
  double t2391;
  double t2431;
  double t2374;
  double t2458;
  double t2466;
  double t2496;
  double t2503;
  double t2561;
  double t2492;
  double t2571;
  double t2601;
  double t2613;
  double t2619;
  double t2626;
  double t2610;
  double t2654;
  double t2676;
  double t2792;
  double t2793;
  double t2798;
  double t931;
  double t967;
  double t981;
  double t3027;
  double t3052;
  double t3054;
  double t2963;
  double t2976;
  double t2987;
  double t3006;
  double t3055;
  double t3063;
  double t3081;
  double t3091;
  double t3092;
  double t3073;
  double t3114;
  double t3115;
  double t3140;
  double t3152;
  double t3168;
  double t3122;
  double t3173;
  double t3232;
  double t3278;
  double t3281;
  double t3292;
  double t3272;
  double t3301;
  double t3363;
  double t3382;
  double t3389;
  double t3418;
  double t1836;
  double t1931;
  double t1954;
  double t1995;
  double t2029;
  double t2063;
  double t2734;
  double t2817;
  double t2828;
  double t2903;
  double t2911;
  double t2915;
  double t3370;
  double t3421;
  double t3542;
  double t3558;
  double t3560;
  double t3563;
  double t3860;
  double t3872;
  double t4128;
  double t4132;
  double t4221;
  double t4233;
  double t4368;
  double t4398;
  double t4454;
  double t4460;
  double t4556;
  double t4561;
  double t3766;
  double t3788;
  double t3801;
  double t3805;
  double t3828;
  double t3832;
  double t3881;
  double t3951;
  double t3958;
  double t3967;
  double t3970;
  double t3987;
  double t4136;
  double t4138;
  double t4186;
  double t4194;
  double t4202;
  double t4209;
  double t4264;
  double t4282;
  double t4285;
  double t4317;
  double t4341;
  double t4347;
  double t4402;
  double t4415;
  double t4417;
  double t4432;
  double t4443;
  double t4447;
  double t4472;
  double t4475;
  double t4484;
  double t4522;
  double t4523;
  double t4526;
  double t4575;
  double t4586;
  double t4606;
  double t4614;
  double t4619;
  double t4621;
  t245 = Cos(var1[3]);
  t137 = Cos(var1[5]);
  t252 = Sin(var1[4]);
  t138 = Sin(var1[3]);
  t343 = Sin(var1[5]);
  t107 = Cos(var1[7]);
  t136 = Cos(var1[6]);
  t441 = Sin(var1[6]);
  t497 = Cos(var1[4]);
  t505 = Sin(var1[7]);
  t168 = -1.*t137*t138;
  t350 = t245*t252*t343;
  t355 = t168 + t350;
  t356 = t136*t355;
  t388 = t245*t137*t252;
  t393 = t138*t343;
  t431 = t388 + t393;
  t463 = t431*t441;
  t464 = t356 + t463;
  t1213 = Cos(var1[8]);
  t1320 = t136*t431;
  t1321 = -1.*t355*t441;
  t1364 = t1320 + t1321;
  t1238 = t245*t497*t107;
  t1252 = t464*t505;
  t1262 = t1238 + t1252;
  t1371 = Sin(var1[8]);
  t1452 = Cos(var1[9]);
  t1293 = t1213*t1262;
  t1373 = t1364*t1371;
  t1391 = t1293 + t1373;
  t1195 = Sin(var1[9]);
  t1474 = t1213*t1364;
  t1495 = -1.*t1262*t1371;
  t1505 = t1474 + t1495;
  t1557 = Cos(var1[10]);
  t1416 = -1.*t1195*t1391;
  t1508 = t1452*t1505;
  t1509 = t1416 + t1508;
  t1145 = Sin(var1[10]);
  t1568 = t1452*t1391;
  t1572 = t1195*t1505;
  t1597 = t1568 + t1572;
  t1641 = Cos(var1[11]);
  t1515 = t1145*t1509;
  t1607 = t1557*t1597;
  t1621 = t1515 + t1607;
  t1116 = Sin(var1[11]);
  t1723 = t1557*t1509;
  t1783 = -1.*t1145*t1597;
  t1787 = t1723 + t1783;
  t1848 = Cos(var1[12]);
  t1633 = -1.*t1116*t1621;
  t1795 = t1641*t1787;
  t1817 = t1633 + t1795;
  t1114 = Sin(var1[12]);
  t1851 = t1641*t1621;
  t1853 = t1116*t1787;
  t1920 = t1851 + t1853;
  t579 = t245*t137;
  t664 = t138*t252*t343;
  t665 = t579 + t664;
  t702 = t136*t665;
  t721 = t137*t138*t252;
  t739 = -1.*t245*t343;
  t743 = t721 + t739;
  t791 = t743*t441;
  t820 = t702 + t791;
  t2242 = t136*t743;
  t2255 = -1.*t665*t441;
  t2308 = t2242 + t2255;
  t2166 = t497*t107*t138;
  t2178 = t820*t505;
  t2184 = t2166 + t2178;
  t2211 = t1213*t2184;
  t2330 = t2308*t1371;
  t2370 = t2211 + t2330;
  t2376 = t1213*t2308;
  t2391 = -1.*t2184*t1371;
  t2431 = t2376 + t2391;
  t2374 = -1.*t1195*t2370;
  t2458 = t1452*t2431;
  t2466 = t2374 + t2458;
  t2496 = t1452*t2370;
  t2503 = t1195*t2431;
  t2561 = t2496 + t2503;
  t2492 = t1145*t2466;
  t2571 = t1557*t2561;
  t2601 = t2492 + t2571;
  t2613 = t1557*t2466;
  t2619 = -1.*t1145*t2561;
  t2626 = t2613 + t2619;
  t2610 = -1.*t1116*t2601;
  t2654 = t1641*t2626;
  t2676 = t2610 + t2654;
  t2792 = t1641*t2601;
  t2793 = t1116*t2626;
  t2798 = t2792 + t2793;
  t931 = t497*t136*t343;
  t967 = t497*t137*t441;
  t981 = t931 + t967;
  t3027 = t497*t137*t136;
  t3052 = -1.*t497*t343*t441;
  t3054 = t3027 + t3052;
  t2963 = -1.*t107*t252;
  t2976 = t981*t505;
  t2987 = t2963 + t2976;
  t3006 = t1213*t2987;
  t3055 = t3054*t1371;
  t3063 = t3006 + t3055;
  t3081 = t1213*t3054;
  t3091 = -1.*t2987*t1371;
  t3092 = t3081 + t3091;
  t3073 = -1.*t1195*t3063;
  t3114 = t1452*t3092;
  t3115 = t3073 + t3114;
  t3140 = t1452*t3063;
  t3152 = t1195*t3092;
  t3168 = t3140 + t3152;
  t3122 = t1145*t3115;
  t3173 = t1557*t3168;
  t3232 = t3122 + t3173;
  t3278 = t1557*t3115;
  t3281 = -1.*t1145*t3168;
  t3292 = t3278 + t3281;
  t3272 = -1.*t1116*t3232;
  t3301 = t1641*t3292;
  t3363 = t3272 + t3301;
  t3382 = t1641*t3232;
  t3389 = t1116*t3292;
  t3418 = t3382 + t3389;
  t1836 = t1114*t1817;
  t1931 = t1848*t1920;
  t1954 = t1836 + t1931;
  t1995 = t1848*t1817;
  t2029 = -1.*t1114*t1920;
  t2063 = t1995 + t2029;
  t2734 = t1114*t2676;
  t2817 = t1848*t2798;
  t2828 = t2734 + t2817;
  t2903 = t1848*t2676;
  t2911 = -1.*t1114*t2798;
  t2915 = t2903 + t2911;
  t3370 = t1114*t3363;
  t3421 = t1848*t3418;
  t3542 = t3370 + t3421;
  t3558 = t1848*t3363;
  t3560 = -1.*t1114*t3418;
  t3563 = t3558 + t3560;
  t3860 = -1.*t107;
  t3872 = 1. + t3860;
  t4128 = -1.*t1213;
  t4132 = 1. + t4128;
  t4221 = -1.*t1452;
  t4233 = 1. + t4221;
  t4368 = -1.*t1557;
  t4398 = 1. + t4368;
  t4454 = -1.*t1641;
  t4460 = 1. + t4454;
  t4556 = -1.*t1848;
  t4561 = 1. + t4556;
  t3766 = -1.*t136;
  t3788 = 1. + t3766;
  t3801 = 0.135*t3788;
  t3805 = 0. + t3801;
  t3828 = -0.135*t441;
  t3832 = 0. + t3828;
  t3881 = 0.135*t3872;
  t3951 = 0.049*t505;
  t3958 = 0. + t3881 + t3951;
  t3967 = -0.049*t3872;
  t3970 = 0.135*t505;
  t3987 = 0. + t3967 + t3970;
  t4136 = -0.049*t4132;
  t4138 = -0.09*t1371;
  t4186 = 0. + t4136 + t4138;
  t4194 = -0.09*t4132;
  t4202 = 0.049*t1371;
  t4209 = 0. + t4194 + t4202;
  t4264 = -0.049*t4233;
  t4282 = -0.21*t1195;
  t4285 = 0. + t4264 + t4282;
  t4317 = -0.21*t4233;
  t4341 = 0.049*t1195;
  t4347 = 0. + t4317 + t4341;
  t4402 = -0.2707*t4398;
  t4415 = 0.0016*t1145;
  t4417 = 0. + t4402 + t4415;
  t4432 = -0.0016*t4398;
  t4443 = -0.2707*t1145;
  t4447 = 0. + t4432 + t4443;
  t4472 = 0.0184*t4460;
  t4475 = -0.7055*t1116;
  t4484 = 0. + t4472 + t4475;
  t4522 = -0.7055*t4460;
  t4523 = -0.0184*t1116;
  t4526 = 0. + t4522 + t4523;
  t4575 = -1.1135*t4561;
  t4586 = 0.0216*t1114;
  t4606 = 0. + t4575 + t4586;
  t4614 = -0.0216*t4561;
  t4619 = -1.1135*t1114;
  t4621 = 0. + t4614 + t4619;

  p_output1(0)=-1.*t107*t464 + t245*t497*t505;
  p_output1(1)=t138*t497*t505 - 1.*t107*t820;
  p_output1(2)=-1.*t252*t505 - 1.*t107*t981;
  p_output1(3)=0.;
  p_output1(4)=0.642788*t1954 + 0.766044*t2063;
  p_output1(5)=0.642788*t2828 + 0.766044*t2915;
  p_output1(6)=0.642788*t3542 + 0.766044*t3563;
  p_output1(7)=0.;
  p_output1(8)=-0.766044*t1954 + 0.642788*t2063;
  p_output1(9)=-0.766044*t2828 + 0.642788*t2915;
  p_output1(10)=-0.766044*t3542 + 0.642788*t3563;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.027251*t1954 - 1.200144*t2063 + t355*t3805 + t1262*t4186 + t1364*t4209 + t1391*t4285 + t3832*t431 + t1505*t4347 + t1509*t4417 + t1597*t4447 + t1621*t4484 + t1787*t4526 + t1817*t4606 + t1920*t4621 + t3958*t464 + t245*t3987*t497 + 0.1305*(t107*t464 - 1.*t245*t497*t505) + var1(0);
  p_output1(13)=0. - 0.027251*t2828 - 1.200144*t2915 + t2184*t4186 + t2308*t4209 + t2370*t4285 + t2431*t4347 + t2466*t4417 + t2561*t4447 + t2601*t4484 + t2626*t4526 + t2676*t4606 + t2798*t4621 + t138*t3987*t497 + t3805*t665 + t3832*t743 + t3958*t820 + 0.1305*(-1.*t138*t497*t505 + t107*t820) + var1(1);
  p_output1(14)=0. - 0.027251*t3542 - 1.200144*t3563 - 1.*t252*t3987 + t2987*t4186 + t3054*t4209 + t3063*t4285 + t3092*t4347 + t3115*t4417 + t3168*t4447 + t3232*t4484 + t3292*t4526 + t3363*t4606 + t3418*t4621 + t343*t3805*t497 + t137*t3832*t497 + t3958*t981 + 0.1305*(t252*t505 + t107*t981) + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_LeftToeBack(const Eigen::Matrix<double,20,1> &var1)
//void H_LeftToeBack(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



