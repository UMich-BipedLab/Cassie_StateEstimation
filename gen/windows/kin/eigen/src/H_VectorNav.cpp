/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:10:46 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t899;
  double t1989;
  double t102;
  double t2036;
  double t2317;
  double t2397;
  double t2895;
  double t2977;
  double t3023;
  double t3060;
  double t3105;
  double t3122;
  t899 = Cos(var1[4]);
  t1989 = Sin(var1[3]);
  t102 = Cos(var1[3]);
  t2036 = Sin(var1[4]);
  t2317 = Cos(var1[5]);
  t2397 = Sin(var1[5]);
  t2895 = t102*t2317*t2036;
  t2977 = t1989*t2397;
  t3023 = t2895 + t2977;
  t3060 = t2317*t1989*t2036;
  t3105 = -1.*t102*t2397;
  t3122 = t3060 + t3105;

  p_output1(0)=t102*t899;
  p_output1(1)=t1989*t899;
  p_output1(2)=-1.*t2036;
  p_output1(3)=0;
  p_output1(4)=-1.*t1989*t2317 + t102*t2036*t2397;
  p_output1(5)=t102*t2317 + t1989*t2036*t2397;
  p_output1(6)=t2397*t899;
  p_output1(7)=0;
  p_output1(8)=t3023;
  p_output1(9)=t3122;
  p_output1(10)=t2317*t899;
  p_output1(11)=0;
  p_output1(12)=-0.07996*t3023 + 0.03155*t102*t899 + var1(0);
  p_output1(13)=-0.07996*t3122 + 0.03155*t1989*t899 + var1(1);
  p_output1(14)=-0.03155*t2036 - 0.07996*t2317*t899 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_VectorNav(const Eigen::Matrix<double,20,1> &var1)
//void H_VectorNav(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



