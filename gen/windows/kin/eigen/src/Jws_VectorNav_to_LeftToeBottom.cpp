/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:32:37 GMT-04:00
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
  double t236;
  double t398;
  double t30;
  double t377;
  double t391;
  double t504;
  double t612;
  double t645;
  double t720;
  t236 = Cos(var1[0]);
  t398 = Cos(var1[1]);
  t30 = Sin(var1[0]);
  t377 = Sin(var1[1]);
  t391 = 0. + t377;
  t504 = -1.*t236*t398;
  t612 = 0. + t504;
  t645 = -1.*t398*t30;
  t720 = 0. + t645;

  p_output1(0)=1.;
  p_output1(1)=0.;
  p_output1(2)=0.;
  p_output1(3)=0.;
  p_output1(4)=0. - 1.*t30;
  p_output1(5)=0. + t236;
  p_output1(6)=t391;
  p_output1(7)=t612;
  p_output1(8)=t720;
  p_output1(9)=t391;
  p_output1(10)=t612;
  p_output1(11)=t720;
  p_output1(12)=t391;
  p_output1(13)=t612;
  p_output1(14)=t720;
  p_output1(15)=t391;
  p_output1(16)=t612;
  p_output1(17)=t720;
  p_output1(18)=t391;
  p_output1(19)=t612;
  p_output1(20)=t720;
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
//void Jws_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



