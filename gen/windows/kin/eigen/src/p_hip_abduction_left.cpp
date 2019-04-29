/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:21:34 GMT-04:00
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
  double t1624;
  double t3873;
  double t3962;
  double t3914;
  double t3971;
  double t3760;
  double t3960;
  double t4008;
  double t4011;
  double t4037;
  double t4043;
  double t4128;
  double t4158;
  double t2004;
  double t3778;
  double t3828;
  double t3840;
  double t3861;
  double t4175;
  double t4199;
  double t4329;
  double t4335;
  double t4342;
  double t4368;
  double t4370;
  double t4402;
  t1624 = Cos(var1[3]);
  t3873 = Cos(var1[5]);
  t3962 = Sin(var1[4]);
  t3914 = Sin(var1[3]);
  t3971 = Sin(var1[5]);
  t3760 = Cos(var1[6]);
  t3960 = -1.*t3873*t3914;
  t4008 = t1624*t3962*t3971;
  t4011 = t3960 + t4008;
  t4037 = t1624*t3873*t3962;
  t4043 = t3914*t3971;
  t4128 = t4037 + t4043;
  t4158 = Sin(var1[6]);
  t2004 = Cos(var1[4]);
  t3778 = -1.*t3760;
  t3828 = 1. + t3778;
  t3840 = 0.135*t3828;
  t3861 = 0. + t3840;
  t4175 = -0.135*t4158;
  t4199 = 0. + t4175;
  t4329 = t1624*t3873;
  t4335 = t3914*t3962*t3971;
  t4342 = t4329 + t4335;
  t4368 = t3873*t3914*t3962;
  t4370 = -1.*t1624*t3971;
  t4402 = t4368 + t4370;

  p_output1(0)=0. - 0.049*t1624*t2004 + t3861*t4011 + 0.135*(t3760*t4011 + t4128*t4158) + t4128*t4199 + var1(0);
  p_output1(1)=0. - 0.049*t2004*t3914 + t3861*t4342 + t4199*t4402 + 0.135*(t3760*t4342 + t4158*t4402) + var1(1);
  p_output1(2)=0. + 0.049*t3962 + t2004*t3861*t3971 + 0.135*(t2004*t3760*t3971 + t2004*t3873*t4158) + t2004*t3873*t4199 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_hip_abduction_left(const Eigen::Matrix<double,20,1> &var1)
//void p_hip_abduction_left(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



