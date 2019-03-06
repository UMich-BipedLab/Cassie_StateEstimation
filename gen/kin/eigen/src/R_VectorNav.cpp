/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:55 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav.h"

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
  double t233;
  double t632;
  double t196;
  double t834;
  double t893;
  double t935;
  t233 = Cos(var1[4]);
  t632 = Sin(var1[3]);
  t196 = Cos(var1[3]);
  t834 = Sin(var1[4]);
  t893 = Cos(var1[5]);
  t935 = Sin(var1[5]);

  p_output1(0)=t196*t233;
  p_output1(1)=t233*t632;
  p_output1(2)=-1.*t834;
  p_output1(3)=-1.*t632*t893 + t196*t834*t935;
  p_output1(4)=t196*t893 + t632*t834*t935;
  p_output1(5)=t233*t935;
  p_output1(6)=t196*t834*t893 + t632*t935;
  p_output1(7)=t632*t834*t893 - 1.*t196*t935;
  p_output1(8)=t233*t893;
}


       
Eigen::Matrix<double,3,3> R_VectorNav(const Eigen::Matrix<double,20,1> &var1)
//void R_VectorNav(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



