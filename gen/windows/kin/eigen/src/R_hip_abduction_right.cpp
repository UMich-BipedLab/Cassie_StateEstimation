/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:22:12 GMT-04:00
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
  double t2951;
  double t2451;
  double t3901;
  double t3418;
  double t5945;
  double t6028;
  double t5842;
  double t6093;
  double t5958;
  double t6068;
  double t6085;
  double t6097;
  double t6101;
  double t6127;
  double t6188;
  double t6195;
  double t6209;
  double t6268;
  double t6269;
  double t6285;
  t2951 = Cos(var1[4]);
  t2451 = Cos(var1[3]);
  t3901 = Sin(var1[4]);
  t3418 = Sin(var1[3]);
  t5945 = Cos(var1[5]);
  t6028 = Sin(var1[5]);
  t5842 = Sin(var1[13]);
  t6093 = Cos(var1[13]);
  t5958 = t2451*t5945*t3901;
  t6068 = t3418*t6028;
  t6085 = t5958 + t6068;
  t6097 = -1.*t5945*t3418;
  t6101 = t2451*t3901*t6028;
  t6127 = t6097 + t6101;
  t6188 = t5945*t3418*t3901;
  t6195 = -1.*t2451*t6028;
  t6209 = t6188 + t6195;
  t6268 = t2451*t5945;
  t6269 = t3418*t3901*t6028;
  t6285 = t6268 + t6269;

  p_output1(0)=t2451*t2951;
  p_output1(1)=t2951*t3418;
  p_output1(2)=-1.*t3901;
  p_output1(3)=t5842*t6085 + t6093*t6127;
  p_output1(4)=t5842*t6209 + t6093*t6285;
  p_output1(5)=t2951*t5842*t5945 + t2951*t6028*t6093;
  p_output1(6)=t6085*t6093 - 1.*t5842*t6127;
  p_output1(7)=t6093*t6209 - 1.*t5842*t6285;
  p_output1(8)=-1.*t2951*t5842*t6028 + t2951*t5945*t6093;
}


       
Eigen::Matrix<double,3,3> R_hip_abduction_right(const Eigen::Matrix<double,20,1> &var1)
//void R_hip_abduction_right(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



