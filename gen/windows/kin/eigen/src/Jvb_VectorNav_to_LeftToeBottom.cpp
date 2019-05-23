/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:32:35 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jvb_VectorNav_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t970;
  double t1108;
  double t1455;
  double t1032;
  double t1162;
  double t1346;
  double t905;
  double t1615;
  double t1624;
  double t1626;
  double t1982;
  double t1406;
  double t1839;
  double t1908;
  double t798;
  double t2002;
  double t2038;
  double t2110;
  double t2249;
  double t1962;
  double t2198;
  double t2205;
  double t742;
  double t2323;
  double t2413;
  double t2448;
  double t722;
  double t2946;
  double t2968;
  double t2998;
  double t2854;
  double t3014;
  double t3021;
  double t3041;
  double t3113;
  double t3036;
  double t3115;
  double t3121;
  double t3148;
  double t3165;
  double t3184;
  double t2645;
  double t3512;
  double t3514;
  double t3463;
  double t3481;
  double t3525;
  double t3527;
  double t3548;
  double t3591;
  double t3685;
  double t3687;
  double t3700;
  double t3722;
  double t3424;
  double t3432;
  double t3490;
  double t3496;
  double t3619;
  double t3725;
  double t3730;
  double t3761;
  double t3763;
  double t3786;
  double t3798;
  double t3801;
  double t3374;
  double t3378;
  double t3451;
  double t3452;
  double t3753;
  double t3807;
  double t3843;
  double t3855;
  double t3860;
  double t3872;
  double t3874;
  double t3880;
  double t702;
  double t3304;
  double t3305;
  double t3317;
  double t3145;
  double t3268;
  double t3272;
  double t3340;
  double t3359;
  double t3981;
  double t4027;
  double t4037;
  double t4044;
  double t4072;
  double t3398;
  double t3416;
  double t3849;
  double t3890;
  double t3892;
  double t4198;
  double t4146;
  double t4158;
  double t4164;
  double t4174;
  double t4179;
  double t4204;
  double t4210;
  double t4213;
  double t4218;
  double t4219;
  double t4169;
  double t4170;
  double t3371;
  double t3944;
  double t3971;
  double t4073;
  double t4119;
  double t2535;
  double t2556;
  double t2601;
  double t2214;
  double t2475;
  double t2479;
  double t4193;
  double t4199;
  double t4220;
  double t4221;
  double t2522;
  double t2710;
  double t2793;
  double t2808;
  double t2814;
  double t4272;
  double t4274;
  double t4280;
  double t4287;
  double t4302;
  double t4325;
  double t4330;
  double t4331;
  double t4388;
  double t3281;
  double t3331;
  double t3334;
  double t4240;
  double t4252;
  double t4390;
  double t4393;
  double t4359;
  double t4360;
  double t4141;
  double t4337;
  t970 = Cos(var1[6]);
  t1108 = Sin(var1[6]);
  t1455 = Cos(var1[5]);
  t1032 = 0.642788*t970;
  t1162 = -0.766044*t1108;
  t1346 = t1032 + t1162;
  t905 = Sin(var1[5]);
  t1615 = 0.766044*t970;
  t1624 = 0.642788*t1108;
  t1626 = t1615 + t1624;
  t1982 = Cos(var1[4]);
  t1406 = t905*t1346;
  t1839 = t1455*t1626;
  t1908 = 0. + t1406 + t1839;
  t798 = Sin(var1[4]);
  t2002 = t1455*t1346;
  t2038 = -1.*t905*t1626;
  t2110 = 0. + t2002 + t2038;
  t2249 = Sin(var1[3]);
  t1962 = -1.*t798*t1908;
  t2198 = t1982*t2110;
  t2205 = 0. + t1962 + t2198;
  t742 = Cos(var1[3]);
  t2323 = t1982*t1908;
  t2413 = t798*t2110;
  t2448 = 0. + t2323 + t2413;
  t722 = Cos(var1[2]);
  t2946 = -0.766044*t970;
  t2968 = -0.642788*t1108;
  t2998 = t2946 + t2968;
  t2854 = -1.*t905*t1346;
  t3014 = t1455*t2998;
  t3021 = 0. + t2854 + t3014;
  t3041 = t905*t2998;
  t3113 = 0. + t2002 + t3041;
  t3036 = t798*t3021;
  t3115 = t1982*t3113;
  t3121 = 0. + t3036 + t3115;
  t3148 = t1982*t3021;
  t3165 = -1.*t798*t3113;
  t3184 = 0. + t3148 + t3165;
  t2645 = Sin(var1[2]);
  t3512 = -1.*t970;
  t3514 = 1. + t3512;
  t3463 = -1.*t1455;
  t3481 = 1. + t3463;
  t3525 = -0.0216*t3514;
  t3527 = 0.0306*t970;
  t3548 = 0.01770000000000005*t1108;
  t3591 = 0. + t3525 + t3527 + t3548;
  t3685 = -1.1135*t3514;
  t3687 = -1.1312*t970;
  t3700 = 0.052199999999999996*t1108;
  t3722 = 0. + t3685 + t3687 + t3700;
  t3424 = -1.*t1982;
  t3432 = 1. + t3424;
  t3490 = -0.7055*t3481;
  t3496 = -0.0184*t905;
  t3619 = t905*t3591;
  t3725 = t1455*t3722;
  t3730 = 0. + t3490 + t3496 + t3619 + t3725;
  t3761 = 0.0184*t3481;
  t3763 = -0.7055*t905;
  t3786 = t1455*t3591;
  t3798 = -1.*t905*t3722;
  t3801 = 0. + t3761 + t3763 + t3786 + t3798;
  t3374 = -1.*t742;
  t3378 = 1. + t3374;
  t3451 = -0.0016*t3432;
  t3452 = -0.2707*t798;
  t3753 = -1.*t798*t3730;
  t3807 = t1982*t3801;
  t3843 = 0. + t3451 + t3452 + t3753 + t3807;
  t3855 = -0.2707*t3432;
  t3860 = 0.0016*t798;
  t3872 = t1982*t3730;
  t3874 = t798*t3801;
  t3880 = 0. + t3855 + t3860 + t3872 + t3874;
  t702 = Cos(var1[1]);
  t3304 = -1.*t2249*t3121;
  t3305 = t742*t3184;
  t3317 = 0. + t3304 + t3305;
  t3145 = t742*t3121;
  t3268 = t2249*t3184;
  t3272 = 0. + t3145 + t3268;
  t3340 = -1.*t722;
  t3359 = 1. + t3340;
  t3981 = -0.049*t3378;
  t4027 = -0.21*t2249;
  t4037 = t742*t3843;
  t4044 = -1.*t2249*t3880;
  t4072 = 0. + t3981 + t4027 + t4037 + t4044;
  t3398 = -0.21*t3378;
  t3416 = 0.049*t2249;
  t3849 = t2249*t3843;
  t3890 = t742*t3880;
  t3892 = 0. + t3398 + t3416 + t3849 + t3890;
  t4198 = Sin(var1[1]);
  t4146 = t722*t3317;
  t4158 = -1.*t3272*t2645;
  t4164 = 0. + t4146 + t4158;
  t4174 = -1.*t702;
  t4179 = 1. + t4174;
  t4204 = -0.049*t3359;
  t4210 = t722*t4072;
  t4213 = -0.09*t2645;
  t4218 = -1.*t3892*t2645;
  t4219 = 0. + t4204 + t4210 + t4213 + t4218;
  t4169 = t702*t4164;
  t4170 = 0. + t4169;
  t3371 = -0.09*t3359;
  t3944 = t722*t3892;
  t3971 = 0.049*t2645;
  t4073 = t4072*t2645;
  t4119 = 0. + t3371 + t3944 + t3971 + t4073;
  t2535 = t2249*t2205;
  t2556 = t742*t2448;
  t2601 = 0. + t2535 + t2556;
  t2214 = t742*t2205;
  t2475 = -1.*t2249*t2448;
  t2479 = 0. + t2214 + t2475;
  t4193 = -0.049*t4179;
  t4199 = 0.004500000000000004*t4198;
  t4220 = t702*t4219;
  t4221 = 0. + t4193 + t4199 + t4220;
  t2522 = t722*t2479;
  t2710 = -1.*t2601*t2645;
  t2793 = 0. + t2522 + t2710;
  t2808 = t702*t2793;
  t2814 = 0. + t2808;
  t4272 = 0.135*t4179;
  t4274 = 0.1305*t702;
  t4280 = 0.049*t4198;
  t4287 = t4198*t4219;
  t4302 = 0. + t4272 + t4274 + t4280 + t4287;
  t4325 = t722*t2601;
  t4330 = t2479*t2645;
  t4331 = 0. + t4325 + t4330;
  t4388 = 0. + t4198;
  t3281 = t722*t3272;
  t3331 = t3317*t2645;
  t3334 = 0. + t3281 + t3331;
  t4240 = t4198*t4164;
  t4252 = 0. + t4240;
  t4390 = -1.*t702;
  t4393 = 0. + t4390;
  t4359 = t4198*t2793;
  t4360 = 0. + t4359;
  t4141 = t3334*t4119;
  t4337 = -1.*t4119*t4331;

  p_output1(0)=0. + t2814*(t4141 + t4170*t4221 + t4252*t4302) + t4170*(-1.*t2814*t4221 + t4337 - 1.*t4302*t4360);
  p_output1(1)=-0.135*t4331 + (-1.*t3334*t4119 - 1.*t4170*t4221 - 1.*t4252*t4302)*t4388 + t4170*(0. + t4221*t4388 + t4302*t4393);
  p_output1(2)=-0.135*t3334 + (t2814*t4221 + t4119*t4331 + t4302*t4360)*t4388 + t2814*(0. - 1.*t4221*t4388 - 1.*t4302*t4393);
  p_output1(3)=-0.049 + (0. + t4141 + t4164*t4219)*t4331 + t3334*(0. - 1.*t2793*t4219 + t4337);
  p_output1(4)=0. + 0.135*t2793 - 0.1305*t3334;
  p_output1(5)=0. + 0.135*t4164 + 0.1305*t4331;
  p_output1(6)=0.;
  p_output1(7)=0. - 0.09*t2479 + 0.049*t2601 - 1.*t3272*t3892 - 1.*t3317*t4072;
  p_output1(8)=0. + 0.049*t3272 - 0.09*t3317 + t2601*t3892 + t2479*t4072;
  p_output1(9)=0.;
  p_output1(10)=0. - 0.21*t2205 + 0.049*t2448 - 1.*t3184*t3843 - 1.*t3121*t3880;
  p_output1(11)=0. + 0.049*t3121 - 0.21*t3184 + t2205*t3843 + t2448*t3880;
  p_output1(12)=0.;
  p_output1(13)=0. + 0.0016*t1908 - 0.2707*t2110 - 1.*t3113*t3730 - 1.*t3021*t3801;
  p_output1(14)=0. - 0.2707*t3021 + 0.0016*t3113 + t1908*t3730 + t2110*t3801;
  p_output1(15)=0.;
  p_output1(16)=0. - 0.7055*t1346 - 0.0184*t1626 - 1.*t2998*t3591 - 1.*t1346*t3722;
  p_output1(17)=0. - 0.0184*t1346 - 0.7055*t2998 + t1346*t3591 + t1626*t3722;
  p_output1(18)=0.;
  p_output1(19)=0.05136484440000011;
  p_output1(20)=0.019994554799999897;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
}


       
Eigen::Matrix<double,3,14> Jvb_VectorNav_to_LeftToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void Jvb_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



