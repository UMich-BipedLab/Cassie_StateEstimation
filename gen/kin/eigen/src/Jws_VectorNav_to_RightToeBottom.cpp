/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:21:12 GMT-05:00
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
  double t341;
  double t764;
  double t205;
  double t658;
  double t729;
  double t877;
  double t882;
  double t912;
  double t946;
  t341 = Cos(var1[7]);
  t764 = Cos(var1[8]);
  t205 = Sin(var1[7]);
  t658 = Sin(var1[8]);
  t729 = 0. + t658;
  t877 = -1.*t341*t764;
  t882 = 0. + t877;
  t912 = -1.*t764*t205;
  t946 = 0. + t912;

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
  p_output1(25)=0. - 1.*t205;
  p_output1(26)=0. + t341;
  p_output1(27)=t729;
  p_output1(28)=t882;
  p_output1(29)=t946;
  p_output1(30)=t729;
  p_output1(31)=t882;
  p_output1(32)=t946;
  p_output1(33)=t729;
  p_output1(34)=t882;
  p_output1(35)=t946;
  p_output1(36)=t729;
  p_output1(37)=t882;
  p_output1(38)=t946;
  p_output1(39)=t729;
  p_output1(40)=t882;
  p_output1(41)=t946;
}


       
Eigen::Matrix<double,3,14> Jws_VectorNav_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



