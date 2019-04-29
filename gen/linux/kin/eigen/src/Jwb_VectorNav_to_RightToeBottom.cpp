/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:21:11 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jwb_VectorNav_to_RightToeBottom.h"

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
  double t995;
  double t1116;
  double t1427;
  double t1076;
  double t1129;
  double t1220;
  double t941;
  double t1436;
  double t1516;
  double t1561;
  double t1656;
  double t1369;
  double t1590;
  double t1623;
  double t815;
  double t1689;
  double t1716;
  double t1748;
  double t2050;
  double t1633;
  double t1764;
  double t1969;
  double t808;
  double t2203;
  double t2209;
  double t2269;
  double t110;
  double t2345;
  double t2751;
  double t3010;
  double t3151;
  double t2657;
  double t3274;
  double t3315;
  double t3345;
  double t3353;
  double t752;
  double t3326;
  double t3417;
  double t3454;
  double t3542;
  double t3672;
  double t3700;
  double t2008;
  double t2281;
  double t2283;
  double t2436;
  double t2438;
  double t2453;
  double t3524;
  double t3701;
  double t3803;
  double t3840;
  double t3846;
  double t3880;
  t995 = Cos(var1[13]);
  t1116 = Sin(var1[13]);
  t1427 = Cos(var1[12]);
  t1076 = 0.642788*t995;
  t1129 = -0.766044*t1116;
  t1220 = t1076 + t1129;
  t941 = Sin(var1[12]);
  t1436 = 0.766044*t995;
  t1516 = 0.642788*t1116;
  t1561 = t1436 + t1516;
  t1656 = Cos(var1[11]);
  t1369 = t941*t1220;
  t1590 = t1427*t1561;
  t1623 = 0. + t1369 + t1590;
  t815 = Sin(var1[11]);
  t1689 = t1427*t1220;
  t1716 = -1.*t941*t1561;
  t1748 = 0. + t1689 + t1716;
  t2050 = Cos(var1[10]);
  t1633 = -1.*t815*t1623;
  t1764 = t1656*t1748;
  t1969 = 0. + t1633 + t1764;
  t808 = Sin(var1[10]);
  t2203 = t1656*t1623;
  t2209 = t815*t1748;
  t2269 = 0. + t2203 + t2209;
  t110 = Cos(var1[8]);
  t2345 = Cos(var1[9]);
  t2751 = -0.766044*t995;
  t3010 = -0.642788*t1116;
  t3151 = t2751 + t3010;
  t2657 = -1.*t941*t1220;
  t3274 = t1427*t3151;
  t3315 = 0. + t2657 + t3274;
  t3345 = t941*t3151;
  t3353 = 0. + t1689 + t3345;
  t752 = Sin(var1[9]);
  t3326 = t815*t3315;
  t3417 = t1656*t3353;
  t3454 = 0. + t3326 + t3417;
  t3542 = t1656*t3315;
  t3672 = -1.*t815*t3353;
  t3700 = 0. + t3542 + t3672;
  t2008 = t808*t1969;
  t2281 = t2050*t2269;
  t2283 = 0. + t2008 + t2281;
  t2436 = t2050*t1969;
  t2438 = -1.*t808*t2269;
  t2453 = 0. + t2436 + t2438;
  t3524 = -1.*t808*t3454;
  t3701 = t2050*t3700;
  t3803 = 0. + t3524 + t3701;
  t3840 = t2050*t3454;
  t3846 = t808*t3700;
  t3880 = 0. + t3840 + t3846;

  p_output1(0)=0;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=0;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=0;
  p_output1(9)=0;
  p_output1(10)=0;
  p_output1(11)=0;
  p_output1(12)=0;
  p_output1(13)=0;
  p_output1(14)=0;
  p_output1(15)=0;
  p_output1(16)=0;
  p_output1(17)=0;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0. + Sin(var1(8));
  p_output1(22)=0. + t110*(0. + t2345*t2453 - 1.*t2283*t752);
  p_output1(23)=0. + t110*(0. + t2345*t3803 - 1.*t3880*t752);
  p_output1(24)=0.;
  p_output1(25)=0. + t2283*t2345 + t2453*t752;
  p_output1(26)=0. + t2345*t3880 + t3803*t752;
  p_output1(27)=1.;
  p_output1(28)=0.;
  p_output1(29)=0.;
  p_output1(30)=1.;
  p_output1(31)=0.;
  p_output1(32)=0.;
  p_output1(33)=1.;
  p_output1(34)=0.;
  p_output1(35)=0.;
  p_output1(36)=1.;
  p_output1(37)=0.;
  p_output1(38)=0.;
  p_output1(39)=1.;
  p_output1(40)=0.;
  p_output1(41)=0.;
}


       
Eigen::Matrix<double,3,14> Jwb_VectorNav_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



