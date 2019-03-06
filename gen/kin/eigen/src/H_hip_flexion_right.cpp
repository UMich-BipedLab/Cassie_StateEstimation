/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_flexion_right.h"

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
  double t345;
  double t856;
  double t285;
  double t643;
  double t1036;
  double t1570;
  double t733;
  double t1058;
  double t1309;
  double t122;
  double t1769;
  double t1806;
  double t1836;
  double t109;
  double t2171;
  double t2223;
  double t2260;
  double t2321;
  double t2901;
  double t3165;
  double t3178;
  double t3325;
  double t3440;
  double t3466;
  double t1325;
  double t1898;
  double t2042;
  double t2315;
  double t2338;
  double t2446;
  double t2545;
  double t2558;
  double t2647;
  double t3314;
  double t3483;
  double t3493;
  double t3543;
  double t3553;
  double t3614;
  double t3651;
  double t3654;
  double t3656;
  double t3794;
  double t3867;
  double t3898;
  double t3918;
  double t4004;
  double t4061;
  double t4133;
  double t4149;
  double t4172;
  double t5179;
  double t5208;
  double t6204;
  double t6207;
  double t4309;
  double t4349;
  double t4355;
  double t5221;
  double t5244;
  double t5428;
  double t5759;
  double t5769;
  double t5871;
  double t5975;
  double t5978;
  double t6052;
  double t6054;
  double t6059;
  double t6089;
  double t6265;
  double t6321;
  double t6338;
  double t6608;
  double t6613;
  double t6754;
  double t4360;
  double t4393;
  double t4480;
  double t4520;
  double t4612;
  double t4624;
  t345 = Cos(var1[5]);
  t856 = Sin(var1[3]);
  t285 = Cos(var1[3]);
  t643 = Sin(var1[4]);
  t1036 = Sin(var1[5]);
  t1570 = Sin(var1[13]);
  t733 = t285*t345*t643;
  t1058 = t856*t1036;
  t1309 = t733 + t1058;
  t122 = Cos(var1[13]);
  t1769 = -1.*t345*t856;
  t1806 = t285*t643*t1036;
  t1836 = t1769 + t1806;
  t109 = Cos(var1[15]);
  t2171 = Sin(var1[15]);
  t2223 = Cos(var1[14]);
  t2260 = Cos(var1[4]);
  t2321 = Sin(var1[14]);
  t2901 = t345*t856*t643;
  t3165 = -1.*t285*t1036;
  t3178 = t2901 + t3165;
  t3325 = t285*t345;
  t3440 = t856*t643*t1036;
  t3466 = t3325 + t3440;
  t1325 = t122*t1309;
  t1898 = -1.*t1570*t1836;
  t2042 = t1325 + t1898;
  t2315 = t2223*t285*t2260;
  t2338 = t1570*t1309;
  t2446 = t122*t1836;
  t2545 = t2338 + t2446;
  t2558 = t2321*t2545;
  t2647 = t2315 + t2558;
  t3314 = t122*t3178;
  t3483 = -1.*t1570*t3466;
  t3493 = t3314 + t3483;
  t3543 = t2223*t2260*t856;
  t3553 = t1570*t3178;
  t3614 = t122*t3466;
  t3651 = t3553 + t3614;
  t3654 = t2321*t3651;
  t3656 = t3543 + t3654;
  t3794 = t122*t2260*t345;
  t3867 = -1.*t2260*t1570*t1036;
  t3898 = t3794 + t3867;
  t3918 = -1.*t2223*t643;
  t4004 = t2260*t345*t1570;
  t4061 = t122*t2260*t1036;
  t4133 = t4004 + t4061;
  t4149 = t2321*t4133;
  t4172 = t3918 + t4149;
  t5179 = -1.*t2223;
  t5208 = 1. + t5179;
  t6204 = -1.*t109;
  t6207 = 1. + t6204;
  t4309 = t2171*t2042;
  t4349 = t109*t2647;
  t4355 = t4309 + t4349;
  t5221 = -0.049*t5208;
  t5244 = -0.135*t2321;
  t5428 = 0. + t5221 + t5244;
  t5759 = 0.135*t1570;
  t5769 = 0. + t5759;
  t5871 = -1.*t122;
  t5975 = 1. + t5871;
  t5978 = -0.135*t5975;
  t6052 = 0. + t5978;
  t6054 = -0.135*t5208;
  t6059 = 0.049*t2321;
  t6089 = 0. + t6054 + t6059;
  t6265 = -0.09*t6207;
  t6321 = 0.049*t2171;
  t6338 = 0. + t6265 + t6321;
  t6608 = -0.049*t6207;
  t6613 = -0.09*t2171;
  t6754 = 0. + t6608 + t6613;
  t4360 = t2171*t3493;
  t4393 = t109*t3656;
  t4480 = t4360 + t4393;
  t4520 = t2171*t3898;
  t4612 = t109*t4172;
  t4624 = t4520 + t4612;

  p_output1(0)=-1.*t109*t2042 + t2171*t2647;
  p_output1(1)=-1.*t109*t3493 + t2171*t3656;
  p_output1(2)=-1.*t109*t3898 + t2171*t4172;
  p_output1(3)=0.;
  p_output1(4)=t4355;
  p_output1(5)=t4480;
  p_output1(6)=t4624;
  p_output1(7)=0.;
  p_output1(8)=-1.*t2223*t2545 + t2260*t2321*t285;
  p_output1(9)=-1.*t2223*t3651 + t2260*t2321*t856;
  p_output1(10)=-1.*t2223*t4133 - 1.*t2321*t643;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.09*(t109*t2042 - 1.*t2171*t2647) - 0.135*(t2223*t2545 - 1.*t2260*t2321*t285) - 0.049*t4355 + t2260*t285*t5428 + t1309*t5769 + t1836*t6052 + t2545*t6089 + t2042*t6338 + t2647*t6754 + var1(0);
  p_output1(13)=0. - 0.09*(t109*t3493 - 1.*t2171*t3656) - 0.049*t4480 + t3178*t5769 + t3466*t6052 + t3651*t6089 + t3493*t6338 + t3656*t6754 + t2260*t5428*t856 - 0.135*(t2223*t3651 - 1.*t2260*t2321*t856) + var1(1);
  p_output1(14)=0. - 0.09*(t109*t3898 - 1.*t2171*t4172) - 0.049*t4624 + t2260*t345*t5769 + t1036*t2260*t6052 + t4133*t6089 + t3898*t6338 - 1.*t5428*t643 - 0.135*(t2223*t4133 + t2321*t643) + t4172*t6754 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_hip_flexion_right(const Eigen::Matrix<double,20,1> &var1)
//void H_hip_flexion_right(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



