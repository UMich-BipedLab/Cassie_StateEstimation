/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:22:13 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_rotation_right.h"

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
  double t282;
  double t4705;
  double t5194;
  double t4729;
  double t5686;
  double t554;
  double t650;
  double t1018;
  double t1645;
  double t3923;
  double t4992;
  double t5697;
  double t5699;
  double t6147;
  double t6422;
  double t6436;
  double t6469;
  double t522;
  double t6520;
  double t6540;
  double t6544;
  double t1280;
  double t2441;
  double t2508;
  double t4398;
  double t4426;
  double t6303;
  double t6335;
  double t6359;
  double t6414;
  double t6497;
  double t6505;
  double t6507;
  double t6644;
  double t6645;
  double t6648;
  double t6654;
  double t6667;
  double t6668;
  double t6671;
  double t6680;
  double t6689;
  double t6858;
  double t6862;
  double t6893;
  t282 = Cos(var1[3]);
  t4705 = Cos(var1[5]);
  t5194 = Sin(var1[3]);
  t4729 = Sin(var1[4]);
  t5686 = Sin(var1[5]);
  t554 = Cos(var1[14]);
  t650 = -1.*t554;
  t1018 = 1. + t650;
  t1645 = Sin(var1[14]);
  t3923 = Sin(var1[13]);
  t4992 = t282*t4705*t4729;
  t5697 = t5194*t5686;
  t5699 = t4992 + t5697;
  t6147 = Cos(var1[13]);
  t6422 = -1.*t4705*t5194;
  t6436 = t282*t4729*t5686;
  t6469 = t6422 + t6436;
  t522 = Cos(var1[4]);
  t6520 = t3923*t5699;
  t6540 = t6147*t6469;
  t6544 = t6520 + t6540;
  t1280 = -0.049*t1018;
  t2441 = -0.135*t1645;
  t2508 = 0. + t1280 + t2441;
  t4398 = 0.135*t3923;
  t4426 = 0. + t4398;
  t6303 = -1.*t6147;
  t6335 = 1. + t6303;
  t6359 = -0.135*t6335;
  t6414 = 0. + t6359;
  t6497 = -0.135*t1018;
  t6505 = 0.049*t1645;
  t6507 = 0. + t6497 + t6505;
  t6644 = t4705*t5194*t4729;
  t6645 = -1.*t282*t5686;
  t6648 = t6644 + t6645;
  t6654 = t282*t4705;
  t6667 = t5194*t4729*t5686;
  t6668 = t6654 + t6667;
  t6671 = t3923*t6648;
  t6680 = t6147*t6668;
  t6689 = t6671 + t6680;
  t6858 = t522*t4705*t3923;
  t6862 = t6147*t522*t5686;
  t6893 = t6858 + t6862;

  p_output1(0)=0. + t2508*t282*t522 + t4426*t5699 + t6414*t6469 - 0.09*(t5699*t6147 - 1.*t3923*t6469) + t6507*t6544 - 0.049*(t282*t522*t554 + t1645*t6544) - 0.135*(-1.*t1645*t282*t522 + t554*t6544) + var1(0);
  p_output1(1)=0. + t2508*t5194*t522 + t4426*t6648 + t6414*t6668 - 0.09*(t6147*t6648 - 1.*t3923*t6668) + t6507*t6689 - 0.049*(t5194*t522*t554 + t1645*t6689) - 0.135*(-1.*t1645*t5194*t522 + t554*t6689) + var1(1);
  p_output1(2)=0. - 1.*t2508*t4729 + t4426*t4705*t522 - 0.09*(-1.*t3923*t522*t5686 + t4705*t522*t6147) + t522*t5686*t6414 + t6507*t6893 - 0.049*(-1.*t4729*t554 + t1645*t6893) - 0.135*(t1645*t4729 + t554*t6893) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_hip_rotation_right(const Eigen::Matrix<double,20,1> &var1)
//void p_hip_rotation_right(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



