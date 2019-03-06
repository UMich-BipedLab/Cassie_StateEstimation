/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:26 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_rotation_right.h"

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
  double t1785;
  double t2314;
  double t797;
  double t1807;
  double t2379;
  double t631;
  double t3342;
  double t6005;
  double t1906;
  double t2382;
  double t2408;
  double t3608;
  double t3785;
  double t3955;
  double t6386;
  double t6445;
  double t4166;
  double t4191;
  double t4337;
  double t5083;
  double t5288;
  double t5291;
  double t6454;
  double t6695;
  double t6834;
  double t6959;
  double t6966;
  double t6974;
  double t7053;
  double t7057;
  double t7062;
  t1785 = Cos(var1[5]);
  t2314 = Sin(var1[3]);
  t797 = Cos(var1[3]);
  t1807 = Sin(var1[4]);
  t2379 = Sin(var1[5]);
  t631 = Cos(var1[13]);
  t3342 = Sin(var1[13]);
  t6005 = Cos(var1[4]);
  t1906 = t797*t1785*t1807;
  t2382 = t2314*t2379;
  t2408 = t1906 + t2382;
  t3608 = -1.*t1785*t2314;
  t3785 = t797*t1807*t2379;
  t3955 = t3608 + t3785;
  t6386 = Cos(var1[14]);
  t6445 = Sin(var1[14]);
  t4166 = t1785*t2314*t1807;
  t4191 = -1.*t797*t2379;
  t4337 = t4166 + t4191;
  t5083 = t797*t1785;
  t5288 = t2314*t1807*t2379;
  t5291 = t5083 + t5288;
  t6454 = t3342*t2408;
  t6695 = t631*t3955;
  t6834 = t6454 + t6695;
  t6959 = t3342*t4337;
  t6966 = t631*t5291;
  t6974 = t6959 + t6966;
  t7053 = t6005*t1785*t3342;
  t7057 = t631*t6005*t2379;
  t7062 = t7053 + t7057;

  p_output1(0)=t3342*t3955 - 1.*t2408*t631;
  p_output1(1)=t3342*t5291 - 1.*t4337*t631;
  p_output1(2)=t2379*t3342*t6005 - 1.*t1785*t6005*t631;
  p_output1(3)=t6445*t6834 + t6005*t6386*t797;
  p_output1(4)=t2314*t6005*t6386 + t6445*t6974;
  p_output1(5)=-1.*t1807*t6386 + t6445*t7062;
  p_output1(6)=-1.*t6386*t6834 + t6005*t6445*t797;
  p_output1(7)=t2314*t6005*t6445 - 1.*t6386*t6974;
  p_output1(8)=-1.*t1807*t6445 - 1.*t6386*t7062;
}


       
Eigen::Matrix<double,3,3> R_hip_rotation_right(const Eigen::Matrix<double,20,1> &var1)
//void R_hip_rotation_right(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



