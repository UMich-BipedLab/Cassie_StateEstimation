/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:25 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_rotation_right.h"

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
  double t249;
  double t4629;
  double t4981;
  double t4648;
  double t5720;
  double t792;
  double t912;
  double t968;
  double t1381;
  double t2400;
  double t4682;
  double t5877;
  double t6013;
  double t6369;
  double t6677;
  double t6701;
  double t6759;
  double t729;
  double t6828;
  double t6834;
  double t6837;
  double t1274;
  double t1626;
  double t1838;
  double t3597;
  double t4403;
  double t6491;
  double t6518;
  double t6590;
  double t6631;
  double t6768;
  double t6778;
  double t6779;
  double t7003;
  double t7010;
  double t7023;
  double t7035;
  double t7046;
  double t7052;
  double t7057;
  double t7062;
  double t7063;
  double t7187;
  double t7190;
  double t7192;
  t249 = Cos(var1[3]);
  t4629 = Cos(var1[5]);
  t4981 = Sin(var1[3]);
  t4648 = Sin(var1[4]);
  t5720 = Sin(var1[5]);
  t792 = Cos(var1[14]);
  t912 = -1.*t792;
  t968 = 1. + t912;
  t1381 = Sin(var1[14]);
  t2400 = Sin(var1[13]);
  t4682 = t249*t4629*t4648;
  t5877 = t4981*t5720;
  t6013 = t4682 + t5877;
  t6369 = Cos(var1[13]);
  t6677 = -1.*t4629*t4981;
  t6701 = t249*t4648*t5720;
  t6759 = t6677 + t6701;
  t729 = Cos(var1[4]);
  t6828 = t2400*t6013;
  t6834 = t6369*t6759;
  t6837 = t6828 + t6834;
  t1274 = -0.049*t968;
  t1626 = -0.135*t1381;
  t1838 = 0. + t1274 + t1626;
  t3597 = 0.135*t2400;
  t4403 = 0. + t3597;
  t6491 = -1.*t6369;
  t6518 = 1. + t6491;
  t6590 = -0.135*t6518;
  t6631 = 0. + t6590;
  t6768 = -0.135*t968;
  t6778 = 0.049*t1381;
  t6779 = 0. + t6768 + t6778;
  t7003 = t4629*t4981*t4648;
  t7010 = -1.*t249*t5720;
  t7023 = t7003 + t7010;
  t7035 = t249*t4629;
  t7046 = t4981*t4648*t5720;
  t7052 = t7035 + t7046;
  t7057 = t2400*t7023;
  t7062 = t6369*t7052;
  t7063 = t7057 + t7062;
  t7187 = t729*t4629*t2400;
  t7190 = t6369*t729*t5720;
  t7192 = t7187 + t7190;

  p_output1(0)=0. + t4403*t6013 + t6631*t6759 - 0.09*(t6013*t6369 - 1.*t2400*t6759) + t6779*t6837 + t1838*t249*t729 - 0.135*(-1.*t1381*t249*t729 + t6837*t792) - 0.049*(t1381*t6837 + t249*t729*t792) + var1(0);
  p_output1(1)=0. + t4403*t7023 + t6631*t7052 - 0.09*(t6369*t7023 - 1.*t2400*t7052) + t6779*t7063 + t1838*t4981*t729 - 0.135*(-1.*t1381*t4981*t729 + t7063*t792) - 0.049*(t1381*t7063 + t4981*t729*t792) + var1(1);
  p_output1(2)=0. - 1.*t1838*t4648 + t6779*t7192 + t4403*t4629*t729 + t5720*t6631*t729 - 0.09*(-1.*t2400*t5720*t729 + t4629*t6369*t729) - 0.049*(t1381*t7192 - 1.*t4648*t792) - 0.135*(t1381*t4648 + t7192*t792) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_hip_rotation_right(const Eigen::Matrix<double,20,1> &var1)
//void p_hip_rotation_right(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



