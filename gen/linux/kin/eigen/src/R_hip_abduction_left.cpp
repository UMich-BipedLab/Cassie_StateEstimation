/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:11 GMT-05:00
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
  double t324;
  double t655;
  double t229;
  double t1422;
  double t4030;
  double t4107;
  double t2882;
  double t4241;
  double t4198;
  double t4204;
  double t4214;
  double t4081;
  double t4148;
  double t4181;
  double t4338;
  double t4342;
  double t4345;
  double t4265;
  double t4271;
  double t4304;
  t324 = Cos(var1[4]);
  t655 = Sin(var1[3]);
  t229 = Cos(var1[3]);
  t1422 = Sin(var1[4]);
  t4030 = Cos(var1[5]);
  t4107 = Sin(var1[5]);
  t2882 = Cos(var1[6]);
  t4241 = Sin(var1[6]);
  t4198 = t229*t4030*t1422;
  t4204 = t655*t4107;
  t4214 = t4198 + t4204;
  t4081 = -1.*t4030*t655;
  t4148 = t229*t1422*t4107;
  t4181 = t4081 + t4148;
  t4338 = t4030*t655*t1422;
  t4342 = -1.*t229*t4107;
  t4345 = t4338 + t4342;
  t4265 = t229*t4030;
  t4271 = t655*t1422*t4107;
  t4304 = t4265 + t4271;

  p_output1(0)=t229*t324;
  p_output1(1)=t324*t655;
  p_output1(2)=-1.*t1422;
  p_output1(3)=t2882*t4181 + t4214*t4241;
  p_output1(4)=t2882*t4304 + t4241*t4345;
  p_output1(5)=t2882*t324*t4107 + t324*t4030*t4241;
  p_output1(6)=t2882*t4214 - 1.*t4181*t4241;
  p_output1(7)=-1.*t4241*t4304 + t2882*t4345;
  p_output1(8)=t2882*t324*t4030 - 1.*t324*t4107*t4241;
}


       
Eigen::Matrix<double,3,3> R_hip_abduction_left(const Eigen::Matrix<double,20,1> &var1)
//void R_hip_abduction_left(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



