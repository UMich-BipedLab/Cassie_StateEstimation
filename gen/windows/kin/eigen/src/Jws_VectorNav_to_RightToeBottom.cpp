/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:32:44 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jws_VectorNav_to_RightToeBottom.h"

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
  double t526;
  double t792;
  double t228;
  double t724;
  double t749;
  double t884;
  double t902;
  double t968;
  double t1026;
  t526 = Cos(var1[7]);
  t792 = Cos(var1[8]);
  t228 = Sin(var1[7]);
  t724 = Sin(var1[8]);
  t749 = 0. + t724;
  t884 = -1.*t526*t792;
  t902 = 0. + t884;
  t968 = -1.*t792*t228;
  t1026 = 0. + t968;

  p_output1(0)=0;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=0;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=0;
  p_output1(9)=0;
  p_output1(10)=0;
  p_output1(11)=0;
  p_output1(12)=0;
  p_output1(13)=0;
  p_output1(14)=0;
  p_output1(15)=0;
  p_output1(16)=0;
  p_output1(17)=0;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=1.;
  p_output1(22)=0.;
  p_output1(23)=0.;
  p_output1(24)=0.;
  p_output1(25)=0. - 1.*t228;
  p_output1(26)=0. + t526;
  p_output1(27)=t749;
  p_output1(28)=t902;
  p_output1(29)=t1026;
  p_output1(30)=t749;
  p_output1(31)=t902;
  p_output1(32)=t1026;
  p_output1(33)=t749;
  p_output1(34)=t902;
  p_output1(35)=t1026;
  p_output1(36)=t749;
  p_output1(37)=t902;
  p_output1(38)=t1026;
  p_output1(39)=t749;
  p_output1(40)=t902;
  p_output1(41)=t1026;
}


       
Eigen::Matrix<double,3,14> Jws_VectorNav_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void Jws_VectorNav_to_RightToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



