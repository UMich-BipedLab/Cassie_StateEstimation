/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:14 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_flexion_left.h"

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
  double t3435;
  double t3489;
  double t2657;
  double t3439;
  double t4058;
  double t921;
  double t4846;
  double t4876;
  double t4992;
  double t3441;
  double t4078;
  double t4773;
  double t5146;
  double t360;
  double t5197;
  double t5249;
  double t5677;
  double t5685;
  double t5690;
  double t5532;
  double t5551;
  double t5623;
  double t5429;
  double t5510;
  double t5310;
  double t5315;
  double t5409;
  double t5425;
  double t5462;
  double t5496;
  double t4778;
  double t5171;
  double t5184;
  double t5861;
  double t5868;
  double t5874;
  double t5904;
  double t5913;
  double t5918;
  double t5627;
  double t5837;
  double t5855;
  double t6045;
  double t6068;
  double t6070;
  double t6074;
  double t6082;
  double t6092;
  double t5983;
  double t5984;
  double t6009;
  t3435 = Cos(var1[5]);
  t3489 = Sin(var1[3]);
  t2657 = Cos(var1[3]);
  t3439 = Sin(var1[4]);
  t4058 = Sin(var1[5]);
  t921 = Cos(var1[6]);
  t4846 = -1.*t3435*t3489;
  t4876 = t2657*t3439*t4058;
  t4992 = t4846 + t4876;
  t3441 = t2657*t3435*t3439;
  t4078 = t3489*t4058;
  t4773 = t3441 + t4078;
  t5146 = Sin(var1[6]);
  t360 = Cos(var1[8]);
  t5197 = Cos(var1[4]);
  t5249 = Cos(var1[7]);
  t5677 = t2657*t3435;
  t5685 = t3489*t3439*t4058;
  t5690 = t5677 + t5685;
  t5532 = t3435*t3489*t3439;
  t5551 = -1.*t2657*t4058;
  t5623 = t5532 + t5551;
  t5429 = Sin(var1[7]);
  t5510 = Sin(var1[8]);
  t5310 = t2657*t5197*t5249;
  t5315 = t921*t4992;
  t5409 = t4773*t5146;
  t5425 = t5315 + t5409;
  t5462 = t5425*t5429;
  t5496 = t5310 + t5462;
  t4778 = t921*t4773;
  t5171 = -1.*t4992*t5146;
  t5184 = t4778 + t5171;
  t5861 = t5197*t5249*t3489;
  t5868 = t921*t5690;
  t5874 = t5623*t5146;
  t5904 = t5868 + t5874;
  t5913 = t5904*t5429;
  t5918 = t5861 + t5913;
  t5627 = t921*t5623;
  t5837 = -1.*t5690*t5146;
  t5855 = t5627 + t5837;
  t6045 = -1.*t5249*t3439;
  t6068 = t5197*t921*t4058;
  t6070 = t5197*t3435*t5146;
  t6074 = t6068 + t6070;
  t6082 = t6074*t5429;
  t6092 = t6045 + t6082;
  t5983 = t5197*t3435*t921;
  t5984 = -1.*t5197*t4058*t5146;
  t6009 = t5983 + t5984;

  p_output1(0)=-1.*t360*t5184 + t5496*t5510;
  p_output1(1)=-1.*t360*t5855 + t5510*t5918;
  p_output1(2)=-1.*t360*t6009 + t5510*t6092;
  p_output1(3)=t360*t5496 + t5184*t5510;
  p_output1(4)=t5510*t5855 + t360*t5918;
  p_output1(5)=t5510*t6009 + t360*t6092;
  p_output1(6)=-1.*t5249*t5425 + t2657*t5197*t5429;
  p_output1(7)=t3489*t5197*t5429 - 1.*t5249*t5904;
  p_output1(8)=-1.*t3439*t5429 - 1.*t5249*t6074;
}


       
Eigen::Matrix<double,3,3> R_hip_flexion_left(const Eigen::Matrix<double,20,1> &var1)
//void R_hip_flexion_left(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



