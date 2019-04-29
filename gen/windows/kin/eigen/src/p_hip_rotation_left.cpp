/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:21:39 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_rotation_left.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t2359;
  double t1506;
  double t2991;
  double t1511;
  double t3243;
  double t197;
  double t3928;
  double t4485;
  double t4923;
  double t1516;
  double t3285;
  double t3606;
  double t4971;
  double t5181;
  double t5182;
  double t5257;
  double t5299;
  double t5164;
  double t5176;
  double t5180;
  double t5338;
  double t230;
  double t263;
  double t743;
  double t850;
  double t5023;
  double t5056;
  double t5502;
  double t5504;
  double t5511;
  double t5463;
  double t5467;
  double t5486;
  double t5267;
  double t5304;
  double t5310;
  double t5358;
  double t5371;
  double t5373;
  double t5548;
  double t5551;
  double t5556;
  double t5656;
  double t5663;
  double t5667;
  t2359 = Cos(var1[3]);
  t1506 = Cos(var1[5]);
  t2991 = Sin(var1[4]);
  t1511 = Sin(var1[3]);
  t3243 = Sin(var1[5]);
  t197 = Cos(var1[6]);
  t3928 = t2359*t1506*t2991;
  t4485 = t1511*t3243;
  t4923 = t3928 + t4485;
  t1516 = -1.*t1506*t1511;
  t3285 = t2359*t2991*t3243;
  t3606 = t1516 + t3285;
  t4971 = Sin(var1[6]);
  t5181 = Cos(var1[7]);
  t5182 = -1.*t5181;
  t5257 = 1. + t5182;
  t5299 = Sin(var1[7]);
  t5164 = t197*t3606;
  t5176 = t4923*t4971;
  t5180 = t5164 + t5176;
  t5338 = Cos(var1[4]);
  t230 = -1.*t197;
  t263 = 1. + t230;
  t743 = 0.135*t263;
  t850 = 0. + t743;
  t5023 = -0.135*t4971;
  t5056 = 0. + t5023;
  t5502 = t1506*t1511*t2991;
  t5504 = -1.*t2359*t3243;
  t5511 = t5502 + t5504;
  t5463 = t2359*t1506;
  t5467 = t1511*t2991*t3243;
  t5486 = t5463 + t5467;
  t5267 = 0.135*t5257;
  t5304 = 0.049*t5299;
  t5310 = 0. + t5267 + t5304;
  t5358 = -0.049*t5257;
  t5371 = 0.135*t5299;
  t5373 = 0. + t5358 + t5371;
  t5548 = t197*t5486;
  t5551 = t5511*t4971;
  t5556 = t5548 + t5551;
  t5656 = t5338*t197*t3243;
  t5663 = t5338*t1506*t4971;
  t5667 = t5656 + t5663;

  p_output1(0)=0. - 0.09*(t197*t4923 - 1.*t3606*t4971) + t4923*t5056 + t5180*t5310 - 0.049*(t5180*t5299 + t2359*t5181*t5338) + 0.135*(t5180*t5181 - 1.*t2359*t5299*t5338) + t2359*t5338*t5373 + t3606*t850 + var1(0);
  p_output1(1)=0. + t1511*t5338*t5373 + t5056*t5511 - 0.09*(-1.*t4971*t5486 + t197*t5511) + t5310*t5556 + 0.135*(-1.*t1511*t5299*t5338 + t5181*t5556) - 0.049*(t1511*t5181*t5338 + t5299*t5556) + t5486*t850 + var1(1);
  p_output1(2)=0. + t1506*t5056*t5338 - 0.09*(t1506*t197*t5338 - 1.*t3243*t4971*t5338) - 1.*t2991*t5373 + t5310*t5667 + 0.135*(t2991*t5299 + t5181*t5667) - 0.049*(-1.*t2991*t5181 + t5299*t5667) + t3243*t5338*t850 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_hip_rotation_left(const Eigen::Matrix<double,20,1> &var1)
//void p_hip_rotation_left(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



