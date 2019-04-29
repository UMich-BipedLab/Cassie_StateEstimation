/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:12 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_rotation_left.h"

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
  double t317;
  double t672;
  double t286;
  double t582;
  double t695;
  double t225;
  double t1361;
  double t2875;
  double t1021;
  double t1344;
  double t1358;
  double t668;
  double t822;
  double t918;
  double t3190;
  double t2083;
  double t2281;
  double t2348;
  double t1658;
  double t1759;
  double t1830;
  double t3663;
  double t3381;
  double t3385;
  double t3610;
  double t3943;
  double t4029;
  double t4114;
  double t4423;
  double t4440;
  double t4466;
  double t4852;
  double t4857;
  double t3345;
  double t3729;
  double t3764;
  double t4641;
  double t4651;
  double t4676;
  double t4748;
  double t4764;
  double t4784;
  double t4860;
  double t4863;
  double t4874;
  double t4880;
  double t4887;
  double t4892;
  double t3913;
  double t4163;
  double t4201;
  double t4257;
  double t4469;
  double t4474;
  t317 = Cos(var1[5]);
  t672 = Sin(var1[3]);
  t286 = Cos(var1[3]);
  t582 = Sin(var1[4]);
  t695 = Sin(var1[5]);
  t225 = Cos(var1[6]);
  t1361 = Sin(var1[6]);
  t2875 = Cos(var1[4]);
  t1021 = -1.*t317*t672;
  t1344 = t286*t582*t695;
  t1358 = t1021 + t1344;
  t668 = t286*t317*t582;
  t822 = t672*t695;
  t918 = t668 + t822;
  t3190 = Cos(var1[7]);
  t2083 = t286*t317;
  t2281 = t672*t582*t695;
  t2348 = t2083 + t2281;
  t1658 = t317*t672*t582;
  t1759 = -1.*t286*t695;
  t1830 = t1658 + t1759;
  t3663 = Sin(var1[7]);
  t3381 = t225*t1358;
  t3385 = t918*t1361;
  t3610 = t3381 + t3385;
  t3943 = t225*t2348;
  t4029 = t1830*t1361;
  t4114 = t3943 + t4029;
  t4423 = t2875*t225*t695;
  t4440 = t2875*t317*t1361;
  t4466 = t4423 + t4440;
  t4852 = -1.*t3190;
  t4857 = 1. + t4852;
  t3345 = t286*t2875*t3190;
  t3729 = t3610*t3663;
  t3764 = t3345 + t3729;
  t4641 = -1.*t225;
  t4651 = 1. + t4641;
  t4676 = 0.135*t4651;
  t4748 = 0. + t4676;
  t4764 = -0.135*t1361;
  t4784 = 0. + t4764;
  t4860 = 0.135*t4857;
  t4863 = 0.049*t3663;
  t4874 = 0. + t4860 + t4863;
  t4880 = -0.049*t4857;
  t4887 = 0.135*t3663;
  t4892 = 0. + t4880 + t4887;
  t3913 = t2875*t3190*t672;
  t4163 = t4114*t3663;
  t4201 = t3913 + t4163;
  t4257 = -1.*t3190*t582;
  t4469 = t4466*t3663;
  t4474 = t4257 + t4469;

  p_output1(0)=t1358*t1361 - 1.*t225*t918;
  p_output1(1)=-1.*t1830*t225 + t1361*t2348;
  p_output1(2)=-1.*t225*t2875*t317 + t1361*t2875*t695;
  p_output1(3)=0.;
  p_output1(4)=t3764;
  p_output1(5)=t4201;
  p_output1(6)=t4474;
  p_output1(7)=0.;
  p_output1(8)=-1.*t3190*t3610 + t286*t2875*t3663;
  p_output1(9)=-1.*t3190*t4114 + t2875*t3663*t672;
  p_output1(10)=-1.*t3190*t4466 - 1.*t3663*t582;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.135*(t3190*t3610 - 1.*t286*t2875*t3663) - 0.049*t3764 + t1358*t4748 + t3610*t4874 + t286*t2875*t4892 + t4784*t918 - 0.09*(-1.*t1358*t1361 + t225*t918) + var1(0);
  p_output1(13)=0. - 0.09*(t1830*t225 - 1.*t1361*t2348) - 0.049*t4201 + t2348*t4748 + t1830*t4784 + t4114*t4874 + t2875*t4892*t672 + 0.135*(t3190*t4114 - 1.*t2875*t3663*t672) + var1(1);
  p_output1(14)=0. - 0.049*t4474 + t2875*t317*t4784 + t4466*t4874 - 1.*t4892*t582 + 0.135*(t3190*t4466 + t3663*t582) + t2875*t4748*t695 - 0.09*(t225*t2875*t317 - 1.*t1361*t2875*t695) + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_hip_rotation_left(const Eigen::Matrix<double,20,1> &var1)
//void H_hip_rotation_left(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



