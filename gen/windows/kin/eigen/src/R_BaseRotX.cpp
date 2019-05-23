/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:09:04 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_BaseRotX.h"

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
  double t298;
  double t679;
  double t140;
  double t3532;
  double t3671;
  double t3687;
  t298 = Cos(var1[4]);
  t679 = Sin(var1[3]);
  t140 = Cos(var1[3]);
  t3532 = Sin(var1[4]);
  t3671 = Cos(var1[5]);
  t3687 = Sin(var1[5]);

  p_output1(0)=t140*t298;
  p_output1(1)=t298*t679;
  p_output1(2)=-1.*t3532;
  p_output1(3)=t140*t3532*t3687 - 1.*t3671*t679;
  p_output1(4)=t140*t3671 + t3532*t3687*t679;
  p_output1(5)=t298*t3687;
  p_output1(6)=t140*t3532*t3671 + t3687*t679;
  p_output1(7)=-1.*t140*t3687 + t3532*t3671*t679;
  p_output1(8)=t298*t3671;
}


       
Eigen::Matrix<double,3,3> R_BaseRotX(const Eigen::Matrix<double,20,1> &var1)
//void R_BaseRotX(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



