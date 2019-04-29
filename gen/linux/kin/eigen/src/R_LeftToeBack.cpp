/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:45 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBack.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t515;
  double t431;
  double t547;
  double t465;
  double t590;
  double t85;
  double t403;
  double t952;
  double t1066;
  double t1101;
  double t473;
  double t702;
  double t791;
  double t860;
  double t896;
  double t897;
  double t931;
  double t960;
  double t980;
  double t2308;
  double t2459;
  double t2466;
  double t2492;
  double t2376;
  double t2382;
  double t2431;
  double t2503;
  double t2607;
  double t2458;
  double t2540;
  double t2571;
  double t2242;
  double t2626;
  double t2654;
  double t2676;
  double t2817;
  double t2572;
  double t2709;
  double t2734;
  double t2166;
  double t2846;
  double t2903;
  double t2959;
  double t3054;
  double t2793;
  double t3006;
  double t3027;
  double t2072;
  double t3055;
  double t3056;
  double t3081;
  double t3262;
  double t3049;
  double t3092;
  double t3115;
  double t2068;
  double t3278;
  double t3292;
  double t3301;
  double t1293;
  double t1364;
  double t1373;
  double t1474;
  double t1509;
  double t1515;
  double t1568;
  double t1607;
  double t1680;
  double t3593;
  double t3657;
  double t3679;
  double t3551;
  double t3558;
  double t3563;
  double t3575;
  double t3699;
  double t3709;
  double t3775;
  double t3785;
  double t3801;
  double t3728;
  double t3805;
  double t3814;
  double t3836;
  double t3843;
  double t3887;
  double t3828;
  double t3958;
  double t3963;
  double t3970;
  double t3995;
  double t4012;
  double t3967;
  double t4073;
  double t4084;
  double t4136;
  double t4166;
  double t4186;
  double t1853;
  double t1931;
  double t1954;
  double t4341;
  double t4347;
  double t4352;
  double t4285;
  double t4307;
  double t4317;
  double t4337;
  double t4364;
  double t4378;
  double t4415;
  double t4417;
  double t4427;
  double t4402;
  double t4432;
  double t4443;
  double t4453;
  double t4472;
  double t4475;
  double t4447;
  double t4484;
  double t4503;
  double t4523;
  double t4526;
  double t4528;
  double t4522;
  double t4575;
  double t4586;
  double t4613;
  double t4614;
  double t4619;
  double t3152;
  double t3316;
  double t3324;
  double t3370;
  double t3389;
  double t3421;
  double t4098;
  double t4187;
  double t4191;
  double t4202;
  double t4209;
  double t4213;
  double t4606;
  double t4621;
  double t4634;
  double t4677;
  double t4681;
  double t4687;
  t515 = Cos(var1[3]);
  t431 = Cos(var1[5]);
  t547 = Sin(var1[4]);
  t465 = Sin(var1[3]);
  t590 = Sin(var1[5]);
  t85 = Cos(var1[7]);
  t403 = Cos(var1[6]);
  t952 = Sin(var1[6]);
  t1066 = Cos(var1[4]);
  t1101 = Sin(var1[7]);
  t473 = -1.*t431*t465;
  t702 = t515*t547*t590;
  t791 = t473 + t702;
  t860 = t403*t791;
  t896 = t515*t431*t547;
  t897 = t465*t590;
  t931 = t896 + t897;
  t960 = t931*t952;
  t980 = t860 + t960;
  t2308 = Cos(var1[8]);
  t2459 = t403*t931;
  t2466 = -1.*t791*t952;
  t2492 = t2459 + t2466;
  t2376 = t515*t1066*t85;
  t2382 = t980*t1101;
  t2431 = t2376 + t2382;
  t2503 = Sin(var1[8]);
  t2607 = Cos(var1[9]);
  t2458 = t2308*t2431;
  t2540 = t2492*t2503;
  t2571 = t2458 + t2540;
  t2242 = Sin(var1[9]);
  t2626 = t2308*t2492;
  t2654 = -1.*t2431*t2503;
  t2676 = t2626 + t2654;
  t2817 = Cos(var1[10]);
  t2572 = -1.*t2242*t2571;
  t2709 = t2607*t2676;
  t2734 = t2572 + t2709;
  t2166 = Sin(var1[10]);
  t2846 = t2607*t2571;
  t2903 = t2242*t2676;
  t2959 = t2846 + t2903;
  t3054 = Cos(var1[11]);
  t2793 = t2166*t2734;
  t3006 = t2817*t2959;
  t3027 = t2793 + t3006;
  t2072 = Sin(var1[11]);
  t3055 = t2817*t2734;
  t3056 = -1.*t2166*t2959;
  t3081 = t3055 + t3056;
  t3262 = Cos(var1[12]);
  t3049 = -1.*t2072*t3027;
  t3092 = t3054*t3081;
  t3115 = t3049 + t3092;
  t2068 = Sin(var1[12]);
  t3278 = t3054*t3027;
  t3292 = t2072*t3081;
  t3301 = t3278 + t3292;
  t1293 = t515*t431;
  t1364 = t465*t547*t590;
  t1373 = t1293 + t1364;
  t1474 = t403*t1373;
  t1509 = t431*t465*t547;
  t1515 = -1.*t515*t590;
  t1568 = t1509 + t1515;
  t1607 = t1568*t952;
  t1680 = t1474 + t1607;
  t3593 = t403*t1568;
  t3657 = -1.*t1373*t952;
  t3679 = t3593 + t3657;
  t3551 = t1066*t85*t465;
  t3558 = t1680*t1101;
  t3563 = t3551 + t3558;
  t3575 = t2308*t3563;
  t3699 = t3679*t2503;
  t3709 = t3575 + t3699;
  t3775 = t2308*t3679;
  t3785 = -1.*t3563*t2503;
  t3801 = t3775 + t3785;
  t3728 = -1.*t2242*t3709;
  t3805 = t2607*t3801;
  t3814 = t3728 + t3805;
  t3836 = t2607*t3709;
  t3843 = t2242*t3801;
  t3887 = t3836 + t3843;
  t3828 = t2166*t3814;
  t3958 = t2817*t3887;
  t3963 = t3828 + t3958;
  t3970 = t2817*t3814;
  t3995 = -1.*t2166*t3887;
  t4012 = t3970 + t3995;
  t3967 = -1.*t2072*t3963;
  t4073 = t3054*t4012;
  t4084 = t3967 + t4073;
  t4136 = t3054*t3963;
  t4166 = t2072*t4012;
  t4186 = t4136 + t4166;
  t1853 = t1066*t403*t590;
  t1931 = t1066*t431*t952;
  t1954 = t1853 + t1931;
  t4341 = t1066*t431*t403;
  t4347 = -1.*t1066*t590*t952;
  t4352 = t4341 + t4347;
  t4285 = -1.*t85*t547;
  t4307 = t1954*t1101;
  t4317 = t4285 + t4307;
  t4337 = t2308*t4317;
  t4364 = t4352*t2503;
  t4378 = t4337 + t4364;
  t4415 = t2308*t4352;
  t4417 = -1.*t4317*t2503;
  t4427 = t4415 + t4417;
  t4402 = -1.*t2242*t4378;
  t4432 = t2607*t4427;
  t4443 = t4402 + t4432;
  t4453 = t2607*t4378;
  t4472 = t2242*t4427;
  t4475 = t4453 + t4472;
  t4447 = t2166*t4443;
  t4484 = t2817*t4475;
  t4503 = t4447 + t4484;
  t4523 = t2817*t4443;
  t4526 = -1.*t2166*t4475;
  t4528 = t4523 + t4526;
  t4522 = -1.*t2072*t4503;
  t4575 = t3054*t4528;
  t4586 = t4522 + t4575;
  t4613 = t3054*t4503;
  t4614 = t2072*t4528;
  t4619 = t4613 + t4614;
  t3152 = t2068*t3115;
  t3316 = t3262*t3301;
  t3324 = t3152 + t3316;
  t3370 = t3262*t3115;
  t3389 = -1.*t2068*t3301;
  t3421 = t3370 + t3389;
  t4098 = t2068*t4084;
  t4187 = t3262*t4186;
  t4191 = t4098 + t4187;
  t4202 = t3262*t4084;
  t4209 = -1.*t2068*t4186;
  t4213 = t4202 + t4209;
  t4606 = t2068*t4586;
  t4621 = t3262*t4619;
  t4634 = t4606 + t4621;
  t4677 = t3262*t4586;
  t4681 = -1.*t2068*t4619;
  t4687 = t4677 + t4681;

  p_output1(0)=t1066*t1101*t515 - 1.*t85*t980;
  p_output1(1)=t1066*t1101*t465 - 1.*t1680*t85;
  p_output1(2)=-1.*t1101*t547 - 1.*t1954*t85;
  p_output1(3)=0.642788*t3324 + 0.766044*t3421;
  p_output1(4)=0.642788*t4191 + 0.766044*t4213;
  p_output1(5)=0.642788*t4634 + 0.766044*t4687;
  p_output1(6)=-0.766044*t3324 + 0.642788*t3421;
  p_output1(7)=-0.766044*t4191 + 0.642788*t4213;
  p_output1(8)=-0.766044*t4634 + 0.642788*t4687;
}


       
Eigen::Matrix<double,3,3> R_LeftToeBack(const Eigen::Matrix<double,20,1> &var1)
//void R_LeftToeBack(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



