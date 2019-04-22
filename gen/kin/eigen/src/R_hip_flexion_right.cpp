/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_flexion_right.h"

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
  double t821;
  double t2573;
  double t817;
  double t1614;
  double t2595;
  double t3911;
  double t2315;
  double t3206;
  double t3314;
  double t616;
  double t4149;
  double t4208;
  double t4247;
  double t56;
  double t4868;
  double t4878;
  double t4887;
  double t4912;
  double t5269;
  double t5314;
  double t5332;
  double t5410;
  double t5556;
  double t5607;
  double t3325;
  double t4355;
  double t4645;
  double t4899;
  double t4941;
  double t4979;
  double t5007;
  double t5183;
  double t5221;
  double t5368;
  double t5664;
  double t5759;
  double t5778;
  double t5884;
  double t5978;
  double t6052;
  double t6053;
  double t6054;
  double t6142;
  double t6218;
  double t6265;
  double t6311;
  double t6321;
  double t6338;
  double t6435;
  double t6450;
  double t6463;
  t821 = Cos(var1[5]);
  t2573 = Sin(var1[3]);
  t817 = Cos(var1[3]);
  t1614 = Sin(var1[4]);
  t2595 = Sin(var1[5]);
  t3911 = Sin(var1[13]);
  t2315 = t817*t821*t1614;
  t3206 = t2573*t2595;
  t3314 = t2315 + t3206;
  t616 = Cos(var1[13]);
  t4149 = -1.*t821*t2573;
  t4208 = t817*t1614*t2595;
  t4247 = t4149 + t4208;
  t56 = Cos(var1[15]);
  t4868 = Sin(var1[15]);
  t4878 = Cos(var1[14]);
  t4887 = Cos(var1[4]);
  t4912 = Sin(var1[14]);
  t5269 = t821*t2573*t1614;
  t5314 = -1.*t817*t2595;
  t5332 = t5269 + t5314;
  t5410 = t817*t821;
  t5556 = t2573*t1614*t2595;
  t5607 = t5410 + t5556;
  t3325 = t616*t3314;
  t4355 = -1.*t3911*t4247;
  t4645 = t3325 + t4355;
  t4899 = t4878*t817*t4887;
  t4941 = t3911*t3314;
  t4979 = t616*t4247;
  t5007 = t4941 + t4979;
  t5183 = t4912*t5007;
  t5221 = t4899 + t5183;
  t5368 = t616*t5332;
  t5664 = -1.*t3911*t5607;
  t5759 = t5368 + t5664;
  t5778 = t4878*t4887*t2573;
  t5884 = t3911*t5332;
  t5978 = t616*t5607;
  t6052 = t5884 + t5978;
  t6053 = t4912*t6052;
  t6054 = t5778 + t6053;
  t6142 = t616*t4887*t821;
  t6218 = -1.*t4887*t3911*t2595;
  t6265 = t6142 + t6218;
  t6311 = -1.*t4878*t1614;
  t6321 = t4887*t821*t3911;
  t6338 = t616*t4887*t2595;
  t6435 = t6321 + t6338;
  t6450 = t4912*t6435;
  t6463 = t6311 + t6450;

  p_output1(0)=t4868*t5221 - 1.*t4645*t56;
  p_output1(1)=-1.*t56*t5759 + t4868*t6054;
  p_output1(2)=-1.*t56*t6265 + t4868*t6463;
  p_output1(3)=t4645*t4868 + t5221*t56;
  p_output1(4)=t4868*t5759 + t56*t6054;
  p_output1(5)=t4868*t6265 + t56*t6463;
  p_output1(6)=-1.*t4878*t5007 + t4887*t4912*t817;
  p_output1(7)=t2573*t4887*t4912 - 1.*t4878*t6052;
  p_output1(8)=-1.*t1614*t4912 - 1.*t4878*t6435;
}


       
Eigen::Matrix<double,3,3> R_hip_flexion_right(const Eigen::Matrix<double,20,1> &var1)
//void R_hip_flexion_right(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



