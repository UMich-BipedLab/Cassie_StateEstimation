/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:21:46 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_flexion_left.h"

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
  double t1079;
  double t1905;
  double t563;
  double t1441;
  double t1979;
  double t558;
  double t2438;
  double t2756;
  double t2760;
  double t1451;
  double t2282;
  double t2305;
  double t2796;
  double t290;
  double t3108;
  double t3129;
  double t4049;
  double t4257;
  double t4300;
  double t3932;
  double t3950;
  double t3986;
  double t3433;
  double t3792;
  double t3210;
  double t3236;
  double t3378;
  double t3431;
  double t3462;
  double t3713;
  double t2383;
  double t2904;
  double t3059;
  double t4372;
  double t4672;
  double t4701;
  double t4772;
  double t4780;
  double t4858;
  double t4009;
  double t4349;
  double t4356;
  double t5164;
  double t5166;
  double t5224;
  double t5256;
  double t5266;
  double t5275;
  double t5020;
  double t5025;
  double t5073;
  double t5925;
  double t5949;
  double t6030;
  double t6032;
  double t5342;
  double t5343;
  double t5395;
  double t5863;
  double t5878;
  double t5887;
  double t5890;
  double t5908;
  double t5909;
  double t5952;
  double t5955;
  double t5957;
  double t5966;
  double t5967;
  double t5988;
  double t6035;
  double t6040;
  double t6042;
  double t6054;
  double t6060;
  double t6071;
  double t5409;
  double t5535;
  double t5592;
  double t5687;
  double t5695;
  double t5698;
  t1079 = Cos(var1[5]);
  t1905 = Sin(var1[3]);
  t563 = Cos(var1[3]);
  t1441 = Sin(var1[4]);
  t1979 = Sin(var1[5]);
  t558 = Cos(var1[6]);
  t2438 = -1.*t1079*t1905;
  t2756 = t563*t1441*t1979;
  t2760 = t2438 + t2756;
  t1451 = t563*t1079*t1441;
  t2282 = t1905*t1979;
  t2305 = t1451 + t2282;
  t2796 = Sin(var1[6]);
  t290 = Cos(var1[8]);
  t3108 = Cos(var1[4]);
  t3129 = Cos(var1[7]);
  t4049 = t563*t1079;
  t4257 = t1905*t1441*t1979;
  t4300 = t4049 + t4257;
  t3932 = t1079*t1905*t1441;
  t3950 = -1.*t563*t1979;
  t3986 = t3932 + t3950;
  t3433 = Sin(var1[7]);
  t3792 = Sin(var1[8]);
  t3210 = t563*t3108*t3129;
  t3236 = t558*t2760;
  t3378 = t2305*t2796;
  t3431 = t3236 + t3378;
  t3462 = t3431*t3433;
  t3713 = t3210 + t3462;
  t2383 = t558*t2305;
  t2904 = -1.*t2760*t2796;
  t3059 = t2383 + t2904;
  t4372 = t3108*t3129*t1905;
  t4672 = t558*t4300;
  t4701 = t3986*t2796;
  t4772 = t4672 + t4701;
  t4780 = t4772*t3433;
  t4858 = t4372 + t4780;
  t4009 = t558*t3986;
  t4349 = -1.*t4300*t2796;
  t4356 = t4009 + t4349;
  t5164 = -1.*t3129*t1441;
  t5166 = t3108*t558*t1979;
  t5224 = t3108*t1079*t2796;
  t5256 = t5166 + t5224;
  t5266 = t5256*t3433;
  t5275 = t5164 + t5266;
  t5020 = t3108*t1079*t558;
  t5025 = -1.*t3108*t1979*t2796;
  t5073 = t5020 + t5025;
  t5925 = -1.*t3129;
  t5949 = 1. + t5925;
  t6030 = -1.*t290;
  t6032 = 1. + t6030;
  t5342 = t290*t3713;
  t5343 = t3059*t3792;
  t5395 = t5342 + t5343;
  t5863 = -1.*t558;
  t5878 = 1. + t5863;
  t5887 = 0.135*t5878;
  t5890 = 0. + t5887;
  t5908 = -0.135*t2796;
  t5909 = 0. + t5908;
  t5952 = 0.135*t5949;
  t5955 = 0.049*t3433;
  t5957 = 0. + t5952 + t5955;
  t5966 = -0.049*t5949;
  t5967 = 0.135*t3433;
  t5988 = 0. + t5966 + t5967;
  t6035 = -0.049*t6032;
  t6040 = -0.09*t3792;
  t6042 = 0. + t6035 + t6040;
  t6054 = -0.09*t6032;
  t6060 = 0.049*t3792;
  t6071 = 0. + t6054 + t6060;
  t5409 = t290*t4858;
  t5535 = t4356*t3792;
  t5592 = t5409 + t5535;
  t5687 = t290*t5275;
  t5695 = t5073*t3792;
  t5698 = t5687 + t5695;

  p_output1(0)=-1.*t290*t3059 + t3713*t3792;
  p_output1(1)=-1.*t290*t4356 + t3792*t4858;
  p_output1(2)=-1.*t290*t5073 + t3792*t5275;
  p_output1(3)=0.;
  p_output1(4)=t5395;
  p_output1(5)=t5592;
  p_output1(6)=t5698;
  p_output1(7)=0.;
  p_output1(8)=-1.*t3129*t3431 + t3108*t3433*t563;
  p_output1(9)=t1905*t3108*t3433 - 1.*t3129*t4772;
  p_output1(10)=-1.*t1441*t3433 - 1.*t3129*t5256;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.09*(t290*t3059 - 1.*t3713*t3792) - 0.049*t5395 + 0.135*(t3129*t3431 - 1.*t3108*t3433*t563) + t2760*t5890 + t2305*t5909 + t3431*t5957 + t3108*t563*t5988 + t3713*t6042 + t3059*t6071 + var1(0);
  p_output1(13)=0. + 0.135*(-1.*t1905*t3108*t3433 + t3129*t4772) - 0.09*(t290*t4356 - 1.*t3792*t4858) - 0.049*t5592 + t4300*t5890 + t3986*t5909 + t4772*t5957 + t1905*t3108*t5988 + t4858*t6042 + t4356*t6071 + var1(1);
  p_output1(14)=0. + 0.135*(t1441*t3433 + t3129*t5256) - 0.09*(t290*t5073 - 1.*t3792*t5275) - 0.049*t5698 + t1979*t3108*t5890 + t1079*t3108*t5909 + t5256*t5957 - 1.*t1441*t5988 + t5275*t6042 + t5073*t6071 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_hip_flexion_left(const Eigen::Matrix<double,20,1> &var1)
//void H_hip_flexion_left(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



