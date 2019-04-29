/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:22:17 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_rotation_right.h"

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
  double t911;
  double t1148;
  double t845;
  double t921;
  double t1149;
  double t319;
  double t1569;
  double t4261;
  double t1000;
  double t1356;
  double t1365;
  double t2273;
  double t2288;
  double t2319;
  double t5087;
  double t5402;
  double t2630;
  double t2789;
  double t3365;
  double t3996;
  double t4039;
  double t4042;
  double t5454;
  double t5476;
  double t5488;
  double t6505;
  double t6591;
  double t6606;
  double t6638;
  double t6658;
  double t6667;
  t911 = Cos(var1[5]);
  t1148 = Sin(var1[3]);
  t845 = Cos(var1[3]);
  t921 = Sin(var1[4]);
  t1149 = Sin(var1[5]);
  t319 = Cos(var1[13]);
  t1569 = Sin(var1[13]);
  t4261 = Cos(var1[4]);
  t1000 = t845*t911*t921;
  t1356 = t1148*t1149;
  t1365 = t1000 + t1356;
  t2273 = -1.*t911*t1148;
  t2288 = t845*t921*t1149;
  t2319 = t2273 + t2288;
  t5087 = Cos(var1[14]);
  t5402 = Sin(var1[14]);
  t2630 = t911*t1148*t921;
  t2789 = -1.*t845*t1149;
  t3365 = t2630 + t2789;
  t3996 = t845*t911;
  t4039 = t1148*t921*t1149;
  t4042 = t3996 + t4039;
  t5454 = t1569*t1365;
  t5476 = t319*t2319;
  t5488 = t5454 + t5476;
  t6505 = t1569*t3365;
  t6591 = t319*t4042;
  t6606 = t6505 + t6591;
  t6638 = t4261*t911*t1569;
  t6658 = t319*t4261*t1149;
  t6667 = t6638 + t6658;

  p_output1(0)=t1569*t2319 - 1.*t1365*t319;
  p_output1(1)=-1.*t319*t3365 + t1569*t4042;
  p_output1(2)=t1149*t1569*t4261 - 1.*t319*t4261*t911;
  p_output1(3)=t5402*t5488 + t4261*t5087*t845;
  p_output1(4)=t1148*t4261*t5087 + t5402*t6606;
  p_output1(5)=t5402*t6667 - 1.*t5087*t921;
  p_output1(6)=-1.*t5087*t5488 + t4261*t5402*t845;
  p_output1(7)=t1148*t4261*t5402 - 1.*t5087*t6606;
  p_output1(8)=-1.*t5087*t6667 - 1.*t5402*t921;
}


       
Eigen::Matrix<double,3,3> R_hip_rotation_right(const Eigen::Matrix<double,20,1> &var1)
//void R_hip_rotation_right(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



