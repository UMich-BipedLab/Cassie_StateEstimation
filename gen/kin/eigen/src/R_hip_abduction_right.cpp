/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:24 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_abduction_right.h"

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
  double t1315;
  double t1204;
  double t3198;
  double t2564;
  double t4306;
  double t4817;
  double t4293;
  double t6285;
  double t4663;
  double t6143;
  double t6209;
  double t6314;
  double t6317;
  double t6351;
  double t6447;
  double t6486;
  double t6490;
  double t6495;
  double t6500;
  double t6507;
  t1315 = Cos(var1[4]);
  t1204 = Cos(var1[3]);
  t3198 = Sin(var1[4]);
  t2564 = Sin(var1[3]);
  t4306 = Cos(var1[5]);
  t4817 = Sin(var1[5]);
  t4293 = Sin(var1[13]);
  t6285 = Cos(var1[13]);
  t4663 = t1204*t4306*t3198;
  t6143 = t2564*t4817;
  t6209 = t4663 + t6143;
  t6314 = -1.*t4306*t2564;
  t6317 = t1204*t3198*t4817;
  t6351 = t6314 + t6317;
  t6447 = t4306*t2564*t3198;
  t6486 = -1.*t1204*t4817;
  t6490 = t6447 + t6486;
  t6495 = t1204*t4306;
  t6500 = t2564*t3198*t4817;
  t6507 = t6495 + t6500;

  p_output1(0)=t1204*t1315;
  p_output1(1)=t1315*t2564;
  p_output1(2)=-1.*t3198;
  p_output1(3)=t4293*t6209 + t6285*t6351;
  p_output1(4)=t4293*t6490 + t6285*t6507;
  p_output1(5)=t1315*t4293*t4306 + t1315*t4817*t6285;
  p_output1(6)=t6209*t6285 - 1.*t4293*t6351;
  p_output1(7)=t6285*t6490 - 1.*t4293*t6507;
  p_output1(8)=-1.*t1315*t4293*t4817 + t1315*t4306*t6285;
}


       
Eigen::Matrix<double,3,3> R_hip_abduction_right(const Eigen::Matrix<double,20,1> &var1)
//void R_hip_abduction_right(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



