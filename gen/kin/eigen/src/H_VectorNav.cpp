/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:54 GMT-05:00
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
  double t1057;
  double t1705;
  double t891;
  double t1962;
  double t1998;
  double t2024;
  double t2355;
  double t2361;
  double t2368;
  double t2400;
  double t2401;
  double t2440;
  t1057 = Cos(var1[4]);
  t1705 = Sin(var1[3]);
  t891 = Cos(var1[3]);
  t1962 = Sin(var1[4]);
  t1998 = Cos(var1[5]);
  t2024 = Sin(var1[5]);
  t2355 = t891*t1998*t1962;
  t2361 = t1705*t2024;
  t2368 = t2355 + t2361;
  t2400 = t1998*t1705*t1962;
  t2401 = -1.*t891*t2024;
  t2440 = t2400 + t2401;

  p_output1(0)=t1057*t891;
  p_output1(1)=t1057*t1705;
  p_output1(2)=-1.*t1962;
  p_output1(3)=0;
  p_output1(4)=-1.*t1705*t1998 + t1962*t2024*t891;
  p_output1(5)=t1705*t1962*t2024 + t1998*t891;
  p_output1(6)=t1057*t2024;
  p_output1(7)=0;
  p_output1(8)=t2368;
  p_output1(9)=t2440;
  p_output1(10)=t1057*t1998;
  p_output1(11)=0;
  p_output1(12)=-0.07996*t2368 + 0.03155*t1057*t891 + var1(0);
  p_output1(13)=0.03155*t1057*t1705 - 0.07996*t2440 + var1(1);
  p_output1(14)=-0.03155*t1962 - 0.07996*t1057*t1998 + var1(2);
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



