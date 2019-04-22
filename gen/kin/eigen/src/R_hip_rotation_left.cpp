/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:12 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_rotation_left.h"

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
  double t1369;
  double t2031;
  double t970;
  double t1919;
  double t2215;
  double t681;
  double t3660;
  double t4516;
  double t3118;
  double t3381;
  double t3385;
  double t1965;
  double t2228;
  double t2782;
  double t4633;
  double t4163;
  double t4201;
  double t4318;
  double t3780;
  double t3808;
  double t3882;
  double t4755;
  double t4737;
  double t4748;
  double t4749;
  double t4792;
  double t4798;
  double t4819;
  double t4863;
  double t4874;
  double t4877;
  t1369 = Cos(var1[5]);
  t2031 = Sin(var1[3]);
  t970 = Cos(var1[3]);
  t1919 = Sin(var1[4]);
  t2215 = Sin(var1[5]);
  t681 = Cos(var1[6]);
  t3660 = Sin(var1[6]);
  t4516 = Cos(var1[4]);
  t3118 = -1.*t1369*t2031;
  t3381 = t970*t1919*t2215;
  t3385 = t3118 + t3381;
  t1965 = t970*t1369*t1919;
  t2228 = t2031*t2215;
  t2782 = t1965 + t2228;
  t4633 = Cos(var1[7]);
  t4163 = t970*t1369;
  t4201 = t2031*t1919*t2215;
  t4318 = t4163 + t4201;
  t3780 = t1369*t2031*t1919;
  t3808 = -1.*t970*t2215;
  t3882 = t3780 + t3808;
  t4755 = Sin(var1[7]);
  t4737 = t681*t3385;
  t4748 = t2782*t3660;
  t4749 = t4737 + t4748;
  t4792 = t681*t4318;
  t4798 = t3882*t3660;
  t4819 = t4792 + t4798;
  t4863 = t4516*t681*t2215;
  t4874 = t4516*t1369*t3660;
  t4877 = t4863 + t4874;

  p_output1(0)=t3385*t3660 - 1.*t2782*t681;
  p_output1(1)=t3660*t4318 - 1.*t3882*t681;
  p_output1(2)=t2215*t3660*t4516 - 1.*t1369*t4516*t681;
  p_output1(3)=t4749*t4755 + t4516*t4633*t970;
  p_output1(4)=t2031*t4516*t4633 + t4755*t4819;
  p_output1(5)=-1.*t1919*t4633 + t4755*t4877;
  p_output1(6)=-1.*t4633*t4749 + t4516*t4755*t970;
  p_output1(7)=t2031*t4516*t4755 - 1.*t4633*t4819;
  p_output1(8)=-1.*t1919*t4755 - 1.*t4633*t4877;
}


       
Eigen::Matrix<double,3,3> R_hip_rotation_left(const Eigen::Matrix<double,20,1> &var1)
//void R_hip_rotation_left(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



