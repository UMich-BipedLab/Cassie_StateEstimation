/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:11 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_abduction_left.h"

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
  double t321;
  double t1200;
  double t301;
  double t3848;
  double t3910;
  double t3987;
  double t3903;
  double t4046;
  double t4030;
  double t4037;
  double t4044;
  double t3983;
  double t3996;
  double t4000;
  double t4108;
  double t4119;
  double t4120;
  double t4075;
  double t4081;
  double t4095;
  double t4009;
  double t4060;
  double t4070;
  double t4290;
  double t4297;
  double t4304;
  double t4305;
  double t4342;
  double t4345;
  double t4107;
  double t4121;
  double t4126;
  double t4148;
  double t4161;
  double t4162;
  t321 = Cos(var1[4]);
  t1200 = Sin(var1[3]);
  t301 = Cos(var1[3]);
  t3848 = Sin(var1[4]);
  t3910 = Cos(var1[5]);
  t3987 = Sin(var1[5]);
  t3903 = Cos(var1[6]);
  t4046 = Sin(var1[6]);
  t4030 = t301*t3910*t3848;
  t4037 = t1200*t3987;
  t4044 = t4030 + t4037;
  t3983 = -1.*t3910*t1200;
  t3996 = t301*t3848*t3987;
  t4000 = t3983 + t3996;
  t4108 = t3910*t1200*t3848;
  t4119 = -1.*t301*t3987;
  t4120 = t4108 + t4119;
  t4075 = t301*t3910;
  t4081 = t1200*t3848*t3987;
  t4095 = t4075 + t4081;
  t4009 = t3903*t4000;
  t4060 = t4044*t4046;
  t4070 = t4009 + t4060;
  t4290 = -1.*t3903;
  t4297 = 1. + t4290;
  t4304 = 0.135*t4297;
  t4305 = 0. + t4304;
  t4342 = -0.135*t4046;
  t4345 = 0. + t4342;
  t4107 = t3903*t4095;
  t4121 = t4120*t4046;
  t4126 = t4107 + t4121;
  t4148 = t321*t3903*t3987;
  t4161 = t321*t3910*t4046;
  t4162 = t4148 + t4161;

  p_output1(0)=t301*t321;
  p_output1(1)=t1200*t321;
  p_output1(2)=-1.*t3848;
  p_output1(3)=0.;
  p_output1(4)=t4070;
  p_output1(5)=t4126;
  p_output1(6)=t4162;
  p_output1(7)=0.;
  p_output1(8)=t3903*t4044 - 1.*t4000*t4046;
  p_output1(9)=-1.*t4046*t4095 + t3903*t4120;
  p_output1(10)=t321*t3903*t3910 - 1.*t321*t3987*t4046;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.049*t301*t321 + 0.135*t4070 + t4000*t4305 + t4044*t4345 + var1(0);
  p_output1(13)=0. - 0.049*t1200*t321 + 0.135*t4126 + t4095*t4305 + t4120*t4345 + var1(1);
  p_output1(14)=0. + 0.049*t3848 + 0.135*t4162 + t321*t3987*t4305 + t321*t3910*t4345 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_hip_abduction_left(const Eigen::Matrix<double,20,1> &var1)
//void H_hip_abduction_left(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



