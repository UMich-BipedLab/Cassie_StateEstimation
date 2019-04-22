/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:21:10 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jws_VectorNav_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t624;
  double t931;
  double t347;
  double t813;
  double t903;
  double t989;
  double t995;
  double t1111;
  double t1116;
  t624 = Cos(var1[0]);
  t931 = Cos(var1[1]);
  t347 = Sin(var1[0]);
  t813 = Sin(var1[1]);
  t903 = 0. + t813;
  t989 = -1.*t624*t931;
  t995 = 0. + t989;
  t1111 = -1.*t931*t347;
  t1116 = 0. + t1111;

  p_output1(0)=1.;
  p_output1(1)=0.;
  p_output1(2)=0.;
  p_output1(3)=0.;
  p_output1(4)=0. - 1.*t347;
  p_output1(5)=0. + t624;
  p_output1(6)=t903;
  p_output1(7)=t995;
  p_output1(8)=t1116;
  p_output1(9)=t903;
  p_output1(10)=t995;
  p_output1(11)=t1116;
  p_output1(12)=t903;
  p_output1(13)=t995;
  p_output1(14)=t1116;
  p_output1(15)=t903;
  p_output1(16)=t995;
  p_output1(17)=t1116;
  p_output1(18)=t903;
  p_output1(19)=t995;
  p_output1(20)=t1116;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
}


       
Eigen::Matrix<double,3,14> Jws_VectorNav_to_LeftToeBottom(const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



