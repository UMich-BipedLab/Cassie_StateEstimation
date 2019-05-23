/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:10:47 GMT-04:00
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
  double t803;
  double t1808;
  double t718;
  double t2482;
  double t2779;
  double t2895;
  t803 = Cos(var1[4]);
  t1808 = Sin(var1[3]);
  t718 = Cos(var1[3]);
  t2482 = Sin(var1[4]);
  t2779 = Cos(var1[5]);
  t2895 = Sin(var1[5]);

  p_output1(0)=t718*t803;
  p_output1(1)=t1808*t803;
  p_output1(2)=-1.*t2482;
  p_output1(3)=-1.*t1808*t2779 + t2482*t2895*t718;
  p_output1(4)=t1808*t2482*t2895 + t2779*t718;
  p_output1(5)=t2895*t803;
  p_output1(6)=t1808*t2895 + t2482*t2779*t718;
  p_output1(7)=t1808*t2482*t2779 - 1.*t2895*t718;
  p_output1(8)=t2779*t803;
}


       
Eigen::Matrix<double,3,3> R_VectorNav(const Eigen::Matrix<double,20,1> &var1)
//void R_VectorNav(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



