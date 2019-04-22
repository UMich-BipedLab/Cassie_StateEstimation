/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:21:09 GMT-05:00
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
  double t755;
  double t858;
  double t1275;
  double t836;
  double t932;
  double t1097;
  double t723;
  double t1301;
  double t1663;
  double t1678;
  double t1798;
  double t1100;
  double t1727;
  double t1776;
  double t717;
  double t1833;
  double t1850;
  double t1895;
  double t2188;
  double t1783;
  double t1954;
  double t1974;
  double t659;
  double t2238;
  double t2240;
  double t2327;
  double t650;
  double t2967;
  double t2976;
  double t3026;
  double t2951;
  double t3048;
  double t3062;
  double t3128;
  double t3131;
  double t3079;
  double t3175;
  double t3191;
  double t3232;
  double t3298;
  double t3304;
  double t2839;
  double t3623;
  double t3624;
  double t3589;
  double t3592;
  double t3631;
  double t3646;
  double t3649;
  double t3671;
  double t3688;
  double t3710;
  double t3711;
  double t3724;
  double t3562;
  double t3563;
  double t3593;
  double t3605;
  double t3687;
  double t3744;
  double t3758;
  double t3777;
  double t3785;
  double t3789;
  double t3807;
  double t3820;
  double t3500;
  double t3522;
  double t3565;
  double t3569;
  double t3775;
  double t3852;
  double t3855;
  double t3902;
  double t3911;
  double t3919;
  double t3926;
  double t3927;
  double t260;
  double t3382;
  double t3383;
  double t3401;
  double t3231;
  double t3335;
  double t3344;
  double t3445;
  double t3474;
  double t3963;
  double t3973;
  double t3978;
  double t3988;
  double t4019;
  double t3535;
  double t3550;
  double t3890;
  double t3931;
  double t3938;
  double t4157;
  double t4072;
  double t4075;
  double t4081;
  double t4124;
  double t4137;
  double t4163;
  double t4169;
  double t4173;
  double t4174;
  double t4176;
  double t4099;
  double t4108;
  double t3480;
  double t3941;
  double t3961;
  double t4020;
  double t4036;
  double t2482;
  double t2626;
  double t2792;
  double t2020;
  double t2410;
  double t2422;
  double t4147;
  double t4162;
  double t4179;
  double t4195;
  double t2438;
  double t2905;
  double t2906;
  double t2915;
  double t2928;
  double t4224;
  double t4230;
  double t4239;
  double t4241;
  double t4252;
  double t4285;
  double t4290;
  double t4293;
  double t4384;
  double t3349;
  double t3417;
  double t3428;
  double t4215;
  double t4219;
  double t4409;
  double t4412;
  double t4307;
  double t4335;
  double t4065;
  double t4294;
  t755 = Cos(var1[6]);
  t858 = Sin(var1[6]);
  t1275 = Cos(var1[5]);
  t836 = 0.642788*t755;
  t932 = -0.766044*t858;
  t1097 = t836 + t932;
  t723 = Sin(var1[5]);
  t1301 = 0.766044*t755;
  t1663 = 0.642788*t858;
  t1678 = t1301 + t1663;
  t1798 = Cos(var1[4]);
  t1100 = t723*t1097;
  t1727 = t1275*t1678;
  t1776 = 0. + t1100 + t1727;
  t717 = Sin(var1[4]);
  t1833 = t1275*t1097;
  t1850 = -1.*t723*t1678;
  t1895 = 0. + t1833 + t1850;
  t2188 = Sin(var1[3]);
  t1783 = -1.*t717*t1776;
  t1954 = t1798*t1895;
  t1974 = 0. + t1783 + t1954;
  t659 = Cos(var1[3]);
  t2238 = t1798*t1776;
  t2240 = t717*t1895;
  t2327 = 0. + t2238 + t2240;
  t650 = Cos(var1[2]);
  t2967 = -0.766044*t755;
  t2976 = -0.642788*t858;
  t3026 = t2967 + t2976;
  t2951 = -1.*t723*t1097;
  t3048 = t1275*t3026;
  t3062 = 0. + t2951 + t3048;
  t3128 = t723*t3026;
  t3131 = 0. + t1833 + t3128;
  t3079 = t717*t3062;
  t3175 = t1798*t3131;
  t3191 = 0. + t3079 + t3175;
  t3232 = t1798*t3062;
  t3298 = -1.*t717*t3131;
  t3304 = 0. + t3232 + t3298;
  t2839 = Sin(var1[2]);
  t3623 = -1.*t755;
  t3624 = 1. + t3623;
  t3589 = -1.*t1275;
  t3592 = 1. + t3589;
  t3631 = -0.0216*t3624;
  t3646 = 0.0306*t755;
  t3649 = 0.01770000000000005*t858;
  t3671 = 0. + t3631 + t3646 + t3649;
  t3688 = -1.1135*t3624;
  t3710 = -1.1312*t755;
  t3711 = 0.052199999999999996*t858;
  t3724 = 0. + t3688 + t3710 + t3711;
  t3562 = -1.*t1798;
  t3563 = 1. + t3562;
  t3593 = -0.7055*t3592;
  t3605 = -0.0184*t723;
  t3687 = t723*t3671;
  t3744 = t1275*t3724;
  t3758 = 0. + t3593 + t3605 + t3687 + t3744;
  t3777 = 0.0184*t3592;
  t3785 = -0.7055*t723;
  t3789 = t1275*t3671;
  t3807 = -1.*t723*t3724;
  t3820 = 0. + t3777 + t3785 + t3789 + t3807;
  t3500 = -1.*t659;
  t3522 = 1. + t3500;
  t3565 = -0.0016*t3563;
  t3569 = -0.2707*t717;
  t3775 = -1.*t717*t3758;
  t3852 = t1798*t3820;
  t3855 = 0. + t3565 + t3569 + t3775 + t3852;
  t3902 = -0.2707*t3563;
  t3911 = 0.0016*t717;
  t3919 = t1798*t3758;
  t3926 = t717*t3820;
  t3927 = 0. + t3902 + t3911 + t3919 + t3926;
  t260 = Cos(var1[1]);
  t3382 = -1.*t2188*t3191;
  t3383 = t659*t3304;
  t3401 = 0. + t3382 + t3383;
  t3231 = t659*t3191;
  t3335 = t2188*t3304;
  t3344 = 0. + t3231 + t3335;
  t3445 = -1.*t650;
  t3474 = 1. + t3445;
  t3963 = -0.049*t3522;
  t3973 = -0.21*t2188;
  t3978 = t659*t3855;
  t3988 = -1.*t2188*t3927;
  t4019 = 0. + t3963 + t3973 + t3978 + t3988;
  t3535 = -0.21*t3522;
  t3550 = 0.049*t2188;
  t3890 = t2188*t3855;
  t3931 = t659*t3927;
  t3938 = 0. + t3535 + t3550 + t3890 + t3931;
  t4157 = Sin(var1[1]);
  t4072 = t650*t3401;
  t4075 = -1.*t3344*t2839;
  t4081 = 0. + t4072 + t4075;
  t4124 = -1.*t260;
  t4137 = 1. + t4124;
  t4163 = -0.049*t3474;
  t4169 = t650*t4019;
  t4173 = -0.09*t2839;
  t4174 = -1.*t3938*t2839;
  t4176 = 0. + t4163 + t4169 + t4173 + t4174;
  t4099 = t260*t4081;
  t4108 = 0. + t4099;
  t3480 = -0.09*t3474;
  t3941 = t650*t3938;
  t3961 = 0.049*t2839;
  t4020 = t4019*t2839;
  t4036 = 0. + t3480 + t3941 + t3961 + t4020;
  t2482 = t2188*t1974;
  t2626 = t659*t2327;
  t2792 = 0. + t2482 + t2626;
  t2020 = t659*t1974;
  t2410 = -1.*t2188*t2327;
  t2422 = 0. + t2020 + t2410;
  t4147 = -0.049*t4137;
  t4162 = 0.004500000000000004*t4157;
  t4179 = t260*t4176;
  t4195 = 0. + t4147 + t4162 + t4179;
  t2438 = t650*t2422;
  t2905 = -1.*t2792*t2839;
  t2906 = 0. + t2438 + t2905;
  t2915 = t260*t2906;
  t2928 = 0. + t2915;
  t4224 = 0.135*t4137;
  t4230 = 0.1305*t260;
  t4239 = 0.049*t4157;
  t4241 = t4157*t4176;
  t4252 = 0. + t4224 + t4230 + t4239 + t4241;
  t4285 = t650*t2792;
  t4290 = t2422*t2839;
  t4293 = 0. + t4285 + t4290;
  t4384 = 0. + t4157;
  t3349 = t650*t3344;
  t3417 = t3401*t2839;
  t3428 = 0. + t3349 + t3417;
  t4215 = t4157*t4081;
  t4219 = 0. + t4215;
  t4409 = -1.*t260;
  t4412 = 0. + t4409;
  t4307 = t4157*t2906;
  t4335 = 0. + t4307;
  t4065 = t3428*t4036;
  t4294 = -1.*t4036*t4293;

  p_output1(0)=0. + t2928*(t4065 + t4108*t4195 + t4219*t4252) + t4108*(-1.*t2928*t4195 + t4294 - 1.*t4252*t4335);
  p_output1(1)=-0.135*t4293 + (-1.*t3428*t4036 - 1.*t4108*t4195 - 1.*t4219*t4252)*t4384 + t4108*(0. + t4195*t4384 + t4252*t4412);
  p_output1(2)=-0.135*t3428 + (t2928*t4195 + t4036*t4293 + t4252*t4335)*t4384 + t2928*(0. - 1.*t4195*t4384 - 1.*t4252*t4412);
  p_output1(3)=-0.049 + (0. + t4065 + t4081*t4176)*t4293 + t3428*(0. - 1.*t2906*t4176 + t4294);
  p_output1(4)=0. + 0.135*t2906 - 0.1305*t3428;
  p_output1(5)=0. + 0.135*t4081 + 0.1305*t4293;
  p_output1(6)=0.;
  p_output1(7)=0. - 0.09*t2422 + 0.049*t2792 - 1.*t3344*t3938 - 1.*t3401*t4019;
  p_output1(8)=0. + 0.049*t3344 - 0.09*t3401 + t2792*t3938 + t2422*t4019;
  p_output1(9)=0.;
  p_output1(10)=0. - 0.21*t1974 + 0.049*t2327 - 1.*t3304*t3855 - 1.*t3191*t3927;
  p_output1(11)=0. + 0.049*t3191 - 0.21*t3304 + t1974*t3855 + t2327*t3927;
  p_output1(12)=0.;
  p_output1(13)=0. + 0.0016*t1776 - 0.2707*t1895 - 1.*t3131*t3758 - 1.*t3062*t3820;
  p_output1(14)=0. - 0.2707*t3062 + 0.0016*t3131 + t1776*t3758 + t1895*t3820;
  p_output1(15)=0.;
  p_output1(16)=0. - 0.7055*t1097 - 0.0184*t1678 - 1.*t3026*t3671 - 1.*t1097*t3724;
  p_output1(17)=0. - 0.0184*t1097 - 0.7055*t3026 + t1097*t3671 + t1678*t3724;
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
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



