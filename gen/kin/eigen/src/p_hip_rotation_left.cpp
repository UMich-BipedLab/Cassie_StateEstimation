/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:11 GMT-05:00
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
  double t4244;
  double t2376;
  double t4305;
  double t3758;
  double t4352;
  double t739;
  double t4401;
  double t4403;
  double t4410;
  double t3994;
  double t4361;
  double t4375;
  double t4415;
  double t4500;
  double t4507;
  double t4509;
  double t4515;
  double t4474;
  double t4484;
  double t4486;
  double t4523;
  double t1263;
  double t1659;
  double t2192;
  double t2271;
  double t4421;
  double t4423;
  double t4653;
  double t4658;
  double t4668;
  double t4633;
  double t4638;
  double t4643;
  double t4511;
  double t4516;
  double t4518;
  double t4540;
  double t4545;
  double t4549;
  double t4719;
  double t4729;
  double t4747;
  double t4874;
  double t4877;
  double t4883;
  t4244 = Cos(var1[3]);
  t2376 = Cos(var1[5]);
  t4305 = Sin(var1[4]);
  t3758 = Sin(var1[3]);
  t4352 = Sin(var1[5]);
  t739 = Cos(var1[6]);
  t4401 = t4244*t2376*t4305;
  t4403 = t3758*t4352;
  t4410 = t4401 + t4403;
  t3994 = -1.*t2376*t3758;
  t4361 = t4244*t4305*t4352;
  t4375 = t3994 + t4361;
  t4415 = Sin(var1[6]);
  t4500 = Cos(var1[7]);
  t4507 = -1.*t4500;
  t4509 = 1. + t4507;
  t4515 = Sin(var1[7]);
  t4474 = t739*t4375;
  t4484 = t4410*t4415;
  t4486 = t4474 + t4484;
  t4523 = Cos(var1[4]);
  t1263 = -1.*t739;
  t1659 = 1. + t1263;
  t2192 = 0.135*t1659;
  t2271 = 0. + t2192;
  t4421 = -0.135*t4415;
  t4423 = 0. + t4421;
  t4653 = t2376*t3758*t4305;
  t4658 = -1.*t4244*t4352;
  t4668 = t4653 + t4658;
  t4633 = t4244*t2376;
  t4638 = t3758*t4305*t4352;
  t4643 = t4633 + t4638;
  t4511 = 0.135*t4509;
  t4516 = 0.049*t4515;
  t4518 = 0. + t4511 + t4516;
  t4540 = -0.049*t4509;
  t4545 = 0.135*t4515;
  t4549 = 0. + t4540 + t4545;
  t4719 = t739*t4643;
  t4729 = t4668*t4415;
  t4747 = t4719 + t4729;
  t4874 = t4523*t739*t4352;
  t4877 = t4523*t2376*t4415;
  t4883 = t4874 + t4877;

  p_output1(0)=0. + t2271*t4375 + t4410*t4423 + t4486*t4518 - 0.049*(t4486*t4515 + t4244*t4500*t4523) + 0.135*(t4486*t4500 - 1.*t4244*t4515*t4523) + t4244*t4523*t4549 - 0.09*(-1.*t4375*t4415 + t4410*t739) + var1(0);
  p_output1(1)=0. + t3758*t4523*t4549 + t2271*t4643 + t4423*t4668 + t4518*t4747 + 0.135*(-1.*t3758*t4515*t4523 + t4500*t4747) - 0.049*(t3758*t4500*t4523 + t4515*t4747) - 0.09*(-1.*t4415*t4643 + t4668*t739) + var1(1);
  p_output1(2)=0. + t2271*t4352*t4523 + t2376*t4423*t4523 - 1.*t4305*t4549 + t4518*t4883 + 0.135*(t4305*t4515 + t4500*t4883) - 0.049*(-1.*t4305*t4500 + t4515*t4883) - 0.09*(-1.*t4352*t4415*t4523 + t2376*t4523*t739) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_hip_rotation_left(const Eigen::Matrix<double,20,1> &var1)
//void p_hip_rotation_left(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



