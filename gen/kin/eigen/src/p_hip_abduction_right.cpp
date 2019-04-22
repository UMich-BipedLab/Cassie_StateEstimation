/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:23 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_abduction_right.h"

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
  double t163;
  double t808;
  double t2734;
  double t1072;
  double t3120;
  double t699;
  double t1457;
  double t3577;
  double t4394;
  double t4998;
  double t5632;
  double t5638;
  double t5937;
  double t445;
  double t778;
  double t798;
  double t5027;
  double t5279;
  double t5337;
  double t5622;
  double t6030;
  double t6032;
  double t6063;
  double t6095;
  double t6115;
  double t6117;
  t163 = Cos(var1[3]);
  t808 = Cos(var1[5]);
  t2734 = Sin(var1[3]);
  t1072 = Sin(var1[4]);
  t3120 = Sin(var1[5]);
  t699 = Sin(var1[13]);
  t1457 = t163*t808*t1072;
  t3577 = t2734*t3120;
  t4394 = t1457 + t3577;
  t4998 = Cos(var1[13]);
  t5632 = -1.*t808*t2734;
  t5638 = t163*t1072*t3120;
  t5937 = t5632 + t5638;
  t445 = Cos(var1[4]);
  t778 = 0.135*t699;
  t798 = 0. + t778;
  t5027 = -1.*t4998;
  t5279 = 1. + t5027;
  t5337 = -0.135*t5279;
  t5622 = 0. + t5337;
  t6030 = t808*t2734*t1072;
  t6032 = -1.*t163*t3120;
  t6063 = t6030 + t6032;
  t6095 = t163*t808;
  t6115 = t2734*t1072*t3120;
  t6117 = t6095 + t6115;

  p_output1(0)=0. - 0.049*t163*t445 + t5622*t5937 - 0.135*(t4998*t5937 + t4394*t699) + t4394*t798 + var1(0);
  p_output1(1)=0. - 0.049*t2734*t445 + t5622*t6117 - 0.135*(t4998*t6117 + t6063*t699) + t6063*t798 + var1(1);
  p_output1(2)=0. + 0.049*t1072 + t3120*t445*t5622 + t445*t798*t808 - 0.135*(t3120*t445*t4998 + t445*t699*t808) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_hip_abduction_right(const Eigen::Matrix<double,20,1> &var1)
//void p_hip_abduction_right(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



