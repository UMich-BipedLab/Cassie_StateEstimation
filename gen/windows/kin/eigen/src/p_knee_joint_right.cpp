/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:22:22 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_joint_right.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t506;
  double t3393;
  double t3989;
  double t3473;
  double t4096;
  double t1485;
  double t1565;
  double t1599;
  double t1921;
  double t2958;
  double t3600;
  double t4559;
  double t4695;
  double t4892;
  double t5747;
  double t6079;
  double t6091;
  double t1146;
  double t6619;
  double t6623;
  double t6650;
  double t6694;
  double t6704;
  double t6810;
  double t6870;
  double t6931;
  double t6935;
  double t6954;
  double t7069;
  double t7088;
  double t7096;
  double t7165;
  double t7178;
  double t7179;
  double t7190;
  double t7250;
  double t7256;
  double t7268;
  double t7382;
  double t7387;
  double t7390;
  double t1732;
  double t2212;
  double t2289;
  double t2968;
  double t3105;
  double t5117;
  double t5277;
  double t5702;
  double t5728;
  double t6418;
  double t6435;
  double t6597;
  double t7481;
  double t7484;
  double t7519;
  double t7537;
  double t7565;
  double t7577;
  double t6867;
  double t6884;
  double t6896;
  double t7622;
  double t7627;
  double t7636;
  double t7014;
  double t7022;
  double t7066;
  double t7187;
  double t7214;
  double t7215;
  double t7650;
  double t7667;
  double t7682;
  double t7781;
  double t7784;
  double t7792;
  double t7336;
  double t7339;
  double t7354;
  double t7807;
  double t7808;
  double t7810;
  double t7812;
  double t7832;
  double t7838;
  double t7970;
  double t7984;
  double t7988;
  double t8018;
  double t8022;
  double t8046;
  double t8098;
  double t8105;
  double t8124;
  double t8128;
  double t8130;
  double t8141;
  double t8153;
  double t8154;
  double t8160;
  t506 = Cos(var1[3]);
  t3393 = Cos(var1[5]);
  t3989 = Sin(var1[3]);
  t3473 = Sin(var1[4]);
  t4096 = Sin(var1[5]);
  t1485 = Cos(var1[14]);
  t1565 = -1.*t1485;
  t1599 = 1. + t1565;
  t1921 = Sin(var1[14]);
  t2958 = Sin(var1[13]);
  t3600 = t506*t3393*t3473;
  t4559 = t3989*t4096;
  t4695 = t3600 + t4559;
  t4892 = Cos(var1[13]);
  t5747 = -1.*t3393*t3989;
  t6079 = t506*t3473*t4096;
  t6091 = t5747 + t6079;
  t1146 = Cos(var1[4]);
  t6619 = t2958*t4695;
  t6623 = t4892*t6091;
  t6650 = t6619 + t6623;
  t6694 = Cos(var1[15]);
  t6704 = -1.*t6694;
  t6810 = 1. + t6704;
  t6870 = Sin(var1[15]);
  t6931 = t4892*t4695;
  t6935 = -1.*t2958*t6091;
  t6954 = t6931 + t6935;
  t7069 = t1485*t506*t1146;
  t7088 = t1921*t6650;
  t7096 = t7069 + t7088;
  t7165 = Cos(var1[16]);
  t7178 = -1.*t7165;
  t7179 = 1. + t7178;
  t7190 = Sin(var1[16]);
  t7250 = t6870*t6954;
  t7256 = t6694*t7096;
  t7268 = t7250 + t7256;
  t7382 = t6694*t6954;
  t7387 = -1.*t6870*t7096;
  t7390 = t7382 + t7387;
  t1732 = -0.049*t1599;
  t2212 = -0.135*t1921;
  t2289 = 0. + t1732 + t2212;
  t2968 = 0.135*t2958;
  t3105 = 0. + t2968;
  t5117 = -1.*t4892;
  t5277 = 1. + t5117;
  t5702 = -0.135*t5277;
  t5728 = 0. + t5702;
  t6418 = -0.135*t1599;
  t6435 = 0.049*t1921;
  t6597 = 0. + t6418 + t6435;
  t7481 = t3393*t3989*t3473;
  t7484 = -1.*t506*t4096;
  t7519 = t7481 + t7484;
  t7537 = t506*t3393;
  t7565 = t3989*t3473*t4096;
  t7577 = t7537 + t7565;
  t6867 = -0.09*t6810;
  t6884 = 0.049*t6870;
  t6896 = 0. + t6867 + t6884;
  t7622 = t2958*t7519;
  t7627 = t4892*t7577;
  t7636 = t7622 + t7627;
  t7014 = -0.049*t6810;
  t7022 = -0.09*t6870;
  t7066 = 0. + t7014 + t7022;
  t7187 = -0.049*t7179;
  t7214 = -0.21*t7190;
  t7215 = 0. + t7187 + t7214;
  t7650 = t4892*t7519;
  t7667 = -1.*t2958*t7577;
  t7682 = t7650 + t7667;
  t7781 = t1485*t1146*t3989;
  t7784 = t1921*t7636;
  t7792 = t7781 + t7784;
  t7336 = -0.21*t7179;
  t7339 = 0.049*t7190;
  t7354 = 0. + t7336 + t7339;
  t7807 = t6870*t7682;
  t7808 = t6694*t7792;
  t7810 = t7807 + t7808;
  t7812 = t6694*t7682;
  t7832 = -1.*t6870*t7792;
  t7838 = t7812 + t7832;
  t7970 = t1146*t3393*t2958;
  t7984 = t4892*t1146*t4096;
  t7988 = t7970 + t7984;
  t8018 = t4892*t1146*t3393;
  t8022 = -1.*t1146*t2958*t4096;
  t8046 = t8018 + t8022;
  t8098 = -1.*t1485*t3473;
  t8105 = t1921*t7988;
  t8124 = t8098 + t8105;
  t8128 = t6870*t8046;
  t8130 = t6694*t8124;
  t8141 = t8128 + t8130;
  t8153 = t6694*t8046;
  t8154 = -1.*t6870*t8124;
  t8160 = t8153 + t8154;

  p_output1(0)=0. + t3105*t4695 + t1146*t2289*t506 + t5728*t6091 + t6597*t6650 - 0.1305*(-1.*t1146*t1921*t506 + t1485*t6650) + t6896*t6954 + t7066*t7096 + t7215*t7268 + t7354*t7390 - 0.21*(-1.*t7190*t7268 + t7165*t7390) - 0.049*(t7165*t7268 + t7190*t7390) + var1(0);
  p_output1(1)=0. + t1146*t2289*t3989 + t3105*t7519 + t5728*t7577 + t6597*t7636 - 0.1305*(-1.*t1146*t1921*t3989 + t1485*t7636) + t6896*t7682 + t7066*t7792 + t7215*t7810 + t7354*t7838 - 0.21*(-1.*t7190*t7810 + t7165*t7838) - 0.049*(t7165*t7810 + t7190*t7838) + var1(1);
  p_output1(2)=0. + t1146*t3105*t3393 - 1.*t2289*t3473 + t1146*t4096*t5728 + t6597*t7988 - 0.1305*(t1921*t3473 + t1485*t7988) + t6896*t8046 + t7066*t8124 + t7215*t8141 + t7354*t8160 - 0.21*(-1.*t7190*t8141 + t7165*t8160) - 0.049*(t7165*t8141 + t7190*t8160) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_knee_joint_right(const Eigen::Matrix<double,20,1> &var1)
//void p_knee_joint_right(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



