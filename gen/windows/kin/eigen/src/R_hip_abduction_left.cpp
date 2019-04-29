/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:21:38 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_abduction_left.h"

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
  double t2690;
  double t3902;
  double t2166;
  double t4441;
  double t4774;
  double t4888;
  double t4771;
  double t4955;
  double t4926;
  double t4952;
  double t4954;
  double t4812;
  double t4890;
  double t4916;
  double t5033;
  double t5049;
  double t5054;
  double t5003;
  double t5011;
  double t5018;
  t2690 = Cos(var1[4]);
  t3902 = Sin(var1[3]);
  t2166 = Cos(var1[3]);
  t4441 = Sin(var1[4]);
  t4774 = Cos(var1[5]);
  t4888 = Sin(var1[5]);
  t4771 = Cos(var1[6]);
  t4955 = Sin(var1[6]);
  t4926 = t2166*t4774*t4441;
  t4952 = t3902*t4888;
  t4954 = t4926 + t4952;
  t4812 = -1.*t4774*t3902;
  t4890 = t2166*t4441*t4888;
  t4916 = t4812 + t4890;
  t5033 = t4774*t3902*t4441;
  t5049 = -1.*t2166*t4888;
  t5054 = t5033 + t5049;
  t5003 = t2166*t4774;
  t5011 = t3902*t4441*t4888;
  t5018 = t5003 + t5011;

  p_output1(0)=t2166*t2690;
  p_output1(1)=t2690*t3902;
  p_output1(2)=-1.*t4441;
  p_output1(3)=t4771*t4916 + t4954*t4955;
  p_output1(4)=t4771*t5018 + t4955*t5054;
  p_output1(5)=t2690*t4771*t4888 + t2690*t4774*t4955;
  p_output1(6)=t4771*t4954 - 1.*t4916*t4955;
  p_output1(7)=-1.*t4955*t5018 + t4771*t5054;
  p_output1(8)=t2690*t4771*t4774 - 1.*t2690*t4888*t4955;
}


       
Eigen::Matrix<double,3,3> R_hip_abduction_left(const Eigen::Matrix<double,20,1> &var1)
//void R_hip_abduction_left(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



