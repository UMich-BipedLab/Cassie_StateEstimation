/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:09:31 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_ankle_joint_left.h"

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
  double t458;
  double t593;
  double t722;
  double t624;
  double t741;
  double t582;
  double t946;
  double t979;
  double t993;
  double t654;
  double t805;
  double t886;
  double t1010;
  double t413;
  double t1336;
  double t1343;
  double t1344;
  double t539;
  double t545;
  double t568;
  double t938;
  double t1033;
  double t1035;
  double t1049;
  double t1085;
  double t1176;
  double t1357;
  double t1443;
  double t1222;
  double t1381;
  double t1386;
  double t342;
  double t1454;
  double t1467;
  double t1540;
  double t1667;
  double t1440;
  double t1544;
  double t1556;
  double t186;
  double t1673;
  double t1686;
  double t1724;
  double t127;
  double t2090;
  double t2094;
  double t2116;
  double t2014;
  double t2032;
  double t2038;
  double t2322;
  double t2358;
  double t2453;
  double t2013;
  double t2087;
  double t2126;
  double t2160;
  double t2170;
  double t2203;
  double t2263;
  double t2475;
  double t2530;
  double t2559;
  double t2562;
  double t2582;
  double t1952;
  double t2545;
  double t2616;
  double t2618;
  double t2743;
  double t2744;
  double t2816;
  double t3144;
  double t3171;
  double t3174;
  double t3072;
  double t3091;
  double t3123;
  double t3125;
  double t3126;
  double t3136;
  double t3143;
  double t3198;
  double t3249;
  double t3284;
  double t3290;
  double t3306;
  double t3282;
  double t3307;
  double t3331;
  double t3412;
  double t3413;
  double t3417;
  double t1568;
  double t1749;
  double t1870;
  double t1954;
  double t1955;
  double t1969;
  double t2742;
  double t2827;
  double t2911;
  double t2973;
  double t3040;
  double t3043;
  double t3382;
  double t3435;
  double t3439;
  double t3477;
  double t3495;
  double t3519;
  double t4017;
  double t4059;
  double t4466;
  double t4470;
  double t4627;
  double t4630;
  double t4781;
  double t4782;
  double t4919;
  double t4943;
  double t3562;
  double t3563;
  double t3565;
  double t3827;
  double t3881;
  double t3892;
  double t3896;
  double t3935;
  double t3997;
  double t4063;
  double t4094;
  double t4113;
  double t4130;
  double t4138;
  double t4263;
  double t4501;
  double t4525;
  double t4537;
  double t4572;
  double t4607;
  double t4618;
  double t4640;
  double t4651;
  double t4657;
  double t4682;
  double t4685;
  double t4689;
  double t4816;
  double t4824;
  double t4850;
  double t4865;
  double t4894;
  double t4911;
  double t4948;
  double t4949;
  double t4966;
  double t4980;
  double t4987;
  double t5000;
  double t3626;
  double t3631;
  double t3651;
  double t3691;
  double t3697;
  double t3707;
  t458 = Cos(var1[3]);
  t593 = Cos(var1[5]);
  t722 = Sin(var1[4]);
  t624 = Sin(var1[3]);
  t741 = Sin(var1[5]);
  t582 = Cos(var1[6]);
  t946 = t458*t593*t722;
  t979 = t624*t741;
  t993 = t946 + t979;
  t654 = -1.*t593*t624;
  t805 = t458*t722*t741;
  t886 = t654 + t805;
  t1010 = Sin(var1[6]);
  t413 = Cos(var1[8]);
  t1336 = t582*t993;
  t1343 = -1.*t886*t1010;
  t1344 = t1336 + t1343;
  t539 = Cos(var1[4]);
  t545 = Cos(var1[7]);
  t568 = t458*t539*t545;
  t938 = t582*t886;
  t1033 = t993*t1010;
  t1035 = t938 + t1033;
  t1049 = Sin(var1[7]);
  t1085 = t1035*t1049;
  t1176 = t568 + t1085;
  t1357 = Sin(var1[8]);
  t1443 = Cos(var1[9]);
  t1222 = t413*t1176;
  t1381 = t1344*t1357;
  t1386 = t1222 + t1381;
  t342 = Sin(var1[9]);
  t1454 = t413*t1344;
  t1467 = -1.*t1176*t1357;
  t1540 = t1454 + t1467;
  t1667 = Cos(var1[10]);
  t1440 = -1.*t342*t1386;
  t1544 = t1443*t1540;
  t1556 = t1440 + t1544;
  t186 = Sin(var1[10]);
  t1673 = t1443*t1386;
  t1686 = t342*t1540;
  t1724 = t1673 + t1686;
  t127 = Sin(var1[11]);
  t2090 = t593*t624*t722;
  t2094 = -1.*t458*t741;
  t2116 = t2090 + t2094;
  t2014 = t458*t593;
  t2032 = t624*t722*t741;
  t2038 = t2014 + t2032;
  t2322 = t582*t2116;
  t2358 = -1.*t2038*t1010;
  t2453 = t2322 + t2358;
  t2013 = t539*t545*t624;
  t2087 = t582*t2038;
  t2126 = t2116*t1010;
  t2160 = t2087 + t2126;
  t2170 = t2160*t1049;
  t2203 = t2013 + t2170;
  t2263 = t413*t2203;
  t2475 = t2453*t1357;
  t2530 = t2263 + t2475;
  t2559 = t413*t2453;
  t2562 = -1.*t2203*t1357;
  t2582 = t2559 + t2562;
  t1952 = Cos(var1[11]);
  t2545 = -1.*t342*t2530;
  t2616 = t1443*t2582;
  t2618 = t2545 + t2616;
  t2743 = t1443*t2530;
  t2744 = t342*t2582;
  t2816 = t2743 + t2744;
  t3144 = t539*t593*t582;
  t3171 = -1.*t539*t741*t1010;
  t3174 = t3144 + t3171;
  t3072 = -1.*t545*t722;
  t3091 = t539*t582*t741;
  t3123 = t539*t593*t1010;
  t3125 = t3091 + t3123;
  t3126 = t3125*t1049;
  t3136 = t3072 + t3126;
  t3143 = t413*t3136;
  t3198 = t3174*t1357;
  t3249 = t3143 + t3198;
  t3284 = t413*t3174;
  t3290 = -1.*t3136*t1357;
  t3306 = t3284 + t3290;
  t3282 = -1.*t342*t3249;
  t3307 = t1443*t3306;
  t3331 = t3282 + t3307;
  t3412 = t1443*t3249;
  t3413 = t342*t3306;
  t3417 = t3412 + t3413;
  t1568 = t186*t1556;
  t1749 = t1667*t1724;
  t1870 = t1568 + t1749;
  t1954 = t1667*t1556;
  t1955 = -1.*t186*t1724;
  t1969 = t1954 + t1955;
  t2742 = t186*t2618;
  t2827 = t1667*t2816;
  t2911 = t2742 + t2827;
  t2973 = t1667*t2618;
  t3040 = -1.*t186*t2816;
  t3043 = t2973 + t3040;
  t3382 = t186*t3331;
  t3435 = t1667*t3417;
  t3439 = t3382 + t3435;
  t3477 = t1667*t3331;
  t3495 = -1.*t186*t3417;
  t3519 = t3477 + t3495;
  t4017 = -1.*t545;
  t4059 = 1. + t4017;
  t4466 = -1.*t413;
  t4470 = 1. + t4466;
  t4627 = -1.*t1443;
  t4630 = 1. + t4627;
  t4781 = -1.*t1667;
  t4782 = 1. + t4781;
  t4919 = -1.*t1952;
  t4943 = 1. + t4919;
  t3562 = t1952*t1870;
  t3563 = t127*t1969;
  t3565 = t3562 + t3563;
  t3827 = -1.*t582;
  t3881 = 1. + t3827;
  t3892 = 0.135*t3881;
  t3896 = 0. + t3892;
  t3935 = -0.135*t1010;
  t3997 = 0. + t3935;
  t4063 = 0.135*t4059;
  t4094 = 0.049*t1049;
  t4113 = 0. + t4063 + t4094;
  t4130 = -0.049*t4059;
  t4138 = 0.135*t1049;
  t4263 = 0. + t4130 + t4138;
  t4501 = -0.049*t4470;
  t4525 = -0.09*t1357;
  t4537 = 0. + t4501 + t4525;
  t4572 = -0.09*t4470;
  t4607 = 0.049*t1357;
  t4618 = 0. + t4572 + t4607;
  t4640 = -0.049*t4630;
  t4651 = -0.21*t342;
  t4657 = 0. + t4640 + t4651;
  t4682 = -0.21*t4630;
  t4685 = 0.049*t342;
  t4689 = 0. + t4682 + t4685;
  t4816 = -0.2707*t4782;
  t4824 = 0.0016*t186;
  t4850 = 0. + t4816 + t4824;
  t4865 = -0.0016*t4782;
  t4894 = -0.2707*t186;
  t4911 = 0. + t4865 + t4894;
  t4948 = 0.0184*t4943;
  t4949 = -0.7055*t127;
  t4966 = 0. + t4948 + t4949;
  t4980 = -0.7055*t4943;
  t4987 = -0.0184*t127;
  t5000 = 0. + t4980 + t4987;
  t3626 = t1952*t2911;
  t3631 = t127*t3043;
  t3651 = t3626 + t3631;
  t3691 = t1952*t3439;
  t3697 = t127*t3519;
  t3707 = t3691 + t3697;

  p_output1(0)=t127*t1870 - 1.*t1952*t1969;
  p_output1(1)=t127*t2911 - 1.*t1952*t3043;
  p_output1(2)=t127*t3439 - 1.*t1952*t3519;
  p_output1(3)=0.;
  p_output1(4)=t3565;
  p_output1(5)=t3651;
  p_output1(6)=t3707;
  p_output1(7)=0.;
  p_output1(8)=t1049*t458*t539 - 1.*t1035*t545;
  p_output1(9)=-1.*t2160*t545 + t1049*t539*t624;
  p_output1(10)=-1.*t3125*t545 - 1.*t1049*t722;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.7055*(-1.*t127*t1870 + t1952*t1969) + 0.0184*t3565 + t1035*t4113 + t1176*t4537 + t1344*t4618 + t1386*t4657 + t1540*t4689 + t1556*t4850 + t1724*t4911 + t1870*t4966 + t1969*t5000 + t4263*t458*t539 + 0.1305*(-1.*t1049*t458*t539 + t1035*t545) + t3896*t886 + t3997*t993 + var1(0);
  p_output1(13)=0. - 0.7055*(-1.*t127*t2911 + t1952*t3043) + 0.0184*t3651 + t2038*t3896 + t2116*t3997 + t2160*t4113 + t2203*t4537 + t2453*t4618 + t2530*t4657 + t2582*t4689 + t2618*t4850 + t2816*t4911 + t2911*t4966 + t3043*t5000 + t4263*t539*t624 + 0.1305*(t2160*t545 - 1.*t1049*t539*t624) + var1(1);
  p_output1(14)=0. - 0.7055*(-1.*t127*t3439 + t1952*t3519) + 0.0184*t3707 + t3125*t4113 + t3136*t4537 + t3174*t4618 + t3249*t4657 + t3306*t4689 + t3331*t4850 + t3417*t4911 + t3439*t4966 + t3519*t5000 + t3997*t539*t593 - 1.*t4263*t722 + 0.1305*(t3125*t545 + t1049*t722) + t3896*t539*t741 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_ankle_joint_left(const Eigen::Matrix<double,20,1> &var1)
//void H_ankle_joint_left(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



