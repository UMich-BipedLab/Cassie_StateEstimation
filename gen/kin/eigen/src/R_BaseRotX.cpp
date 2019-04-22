/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:10 GMT-05:00
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
  double t2897;
  double t3386;
  double t1332;
  double t3487;
  double t3561;
  double t3579;
  t2897 = Cos(var1[4]);
  t3386 = Sin(var1[3]);
  t1332 = Cos(var1[3]);
  t3487 = Sin(var1[4]);
  t3561 = Cos(var1[5]);
  t3579 = Sin(var1[5]);

  p_output1(0)=t1332*t2897;
  p_output1(1)=t2897*t3386;
  p_output1(2)=-1.*t3487;
  p_output1(3)=-1.*t3386*t3561 + t1332*t3487*t3579;
  p_output1(4)=t1332*t3561 + t3386*t3487*t3579;
  p_output1(5)=t2897*t3579;
  p_output1(6)=t1332*t3487*t3561 + t3386*t3579;
  p_output1(7)=t3386*t3487*t3561 - 1.*t1332*t3579;
  p_output1(8)=t2897*t3561;
}


       
Eigen::Matrix<double,3,3> R_BaseRotX(const Eigen::Matrix<double,20,1> &var1)
//void R_BaseRotX(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



