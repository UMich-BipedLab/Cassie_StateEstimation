/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:10 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_abduction_left.h"

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
  double t411;
  double t3650;
  double t3700;
  double t3680;
  double t3707;
  double t2902;
  double t3698;
  double t3709;
  double t3715;
  double t3754;
  double t3787;
  double t3792;
  double t3813;
  double t504;
  double t3583;
  double t3603;
  double t3619;
  double t3627;
  double t3822;
  double t3833;
  double t3910;
  double t3928;
  double t3939;
  double t3960;
  double t3961;
  double t3971;
  t411 = Cos(var1[3]);
  t3650 = Cos(var1[5]);
  t3700 = Sin(var1[4]);
  t3680 = Sin(var1[3]);
  t3707 = Sin(var1[5]);
  t2902 = Cos(var1[6]);
  t3698 = -1.*t3650*t3680;
  t3709 = t411*t3700*t3707;
  t3715 = t3698 + t3709;
  t3754 = t411*t3650*t3700;
  t3787 = t3680*t3707;
  t3792 = t3754 + t3787;
  t3813 = Sin(var1[6]);
  t504 = Cos(var1[4]);
  t3583 = -1.*t2902;
  t3603 = 1. + t3583;
  t3619 = 0.135*t3603;
  t3627 = 0. + t3619;
  t3822 = -0.135*t3813;
  t3833 = 0. + t3822;
  t3910 = t411*t3650;
  t3928 = t3680*t3700*t3707;
  t3939 = t3910 + t3928;
  t3960 = t3650*t3680*t3700;
  t3961 = -1.*t411*t3707;
  t3971 = t3960 + t3961;

  p_output1(0)=0. + t3627*t3715 + 0.135*(t2902*t3715 + t3792*t3813) + t3792*t3833 - 0.049*t411*t504 + var1(0);
  p_output1(1)=0. + t3627*t3939 + t3833*t3971 + 0.135*(t2902*t3939 + t3813*t3971) - 0.049*t3680*t504 + var1(1);
  p_output1(2)=0. + 0.049*t3700 + t3627*t3707*t504 + t3650*t3833*t504 + 0.135*(t2902*t3707*t504 + t3650*t3813*t504) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_hip_abduction_left(const Eigen::Matrix<double,20,1> &var1)
//void p_hip_abduction_left(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



