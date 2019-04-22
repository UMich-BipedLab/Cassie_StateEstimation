/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:26 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_rotation_right.h"

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
  double t593;
  double t1528;
  double t321;
  double t651;
  double t1554;
  double t310;
  double t1956;
  double t3568;
  double t1382;
  double t1620;
  double t1808;
  double t1958;
  double t2097;
  double t2147;
  double t4403;
  double t4590;
  double t2374;
  double t2536;
  double t2668;
  double t3342;
  double t3456;
  double t3480;
  double t4821;
  double t5083;
  double t5132;
  double t5286;
  double t5291;
  double t5349;
  double t5840;
  double t6005;
  double t6049;
  double t6696;
  double t6719;
  double t4413;
  double t5141;
  double t5185;
  double t6834;
  double t6840;
  double t6883;
  double t6949;
  double t6959;
  double t6982;
  double t6991;
  double t7000;
  double t7035;
  double t7053;
  double t7057;
  double t7062;
  double t5228;
  double t5573;
  double t5689;
  double t5785;
  double t6052;
  double t6089;
  t593 = Cos(var1[5]);
  t1528 = Sin(var1[3]);
  t321 = Cos(var1[3]);
  t651 = Sin(var1[4]);
  t1554 = Sin(var1[5]);
  t310 = Cos(var1[13]);
  t1956 = Sin(var1[13]);
  t3568 = Cos(var1[4]);
  t1382 = t321*t593*t651;
  t1620 = t1528*t1554;
  t1808 = t1382 + t1620;
  t1958 = -1.*t593*t1528;
  t2097 = t321*t651*t1554;
  t2147 = t1958 + t2097;
  t4403 = Cos(var1[14]);
  t4590 = Sin(var1[14]);
  t2374 = t593*t1528*t651;
  t2536 = -1.*t321*t1554;
  t2668 = t2374 + t2536;
  t3342 = t321*t593;
  t3456 = t1528*t651*t1554;
  t3480 = t3342 + t3456;
  t4821 = t1956*t1808;
  t5083 = t310*t2147;
  t5132 = t4821 + t5083;
  t5286 = t1956*t2668;
  t5291 = t310*t3480;
  t5349 = t5286 + t5291;
  t5840 = t3568*t593*t1956;
  t6005 = t310*t3568*t1554;
  t6049 = t5840 + t6005;
  t6696 = -1.*t4403;
  t6719 = 1. + t6696;
  t4413 = t4403*t321*t3568;
  t5141 = t4590*t5132;
  t5185 = t4413 + t5141;
  t6834 = -0.049*t6719;
  t6840 = -0.135*t4590;
  t6883 = 0. + t6834 + t6840;
  t6949 = 0.135*t1956;
  t6959 = 0. + t6949;
  t6982 = -1.*t310;
  t6991 = 1. + t6982;
  t7000 = -0.135*t6991;
  t7035 = 0. + t7000;
  t7053 = -0.135*t6719;
  t7057 = 0.049*t4590;
  t7062 = 0. + t7053 + t7057;
  t5228 = t4403*t3568*t1528;
  t5573 = t4590*t5349;
  t5689 = t5228 + t5573;
  t5785 = -1.*t4403*t651;
  t6052 = t4590*t6049;
  t6089 = t5785 + t6052;

  p_output1(0)=t1956*t2147 - 1.*t1808*t310;
  p_output1(1)=-1.*t2668*t310 + t1956*t3480;
  p_output1(2)=t1554*t1956*t3568 - 1.*t310*t3568*t593;
  p_output1(3)=0.;
  p_output1(4)=t5185;
  p_output1(5)=t5689;
  p_output1(6)=t6089;
  p_output1(7)=0.;
  p_output1(8)=t321*t3568*t4590 - 1.*t4403*t5132;
  p_output1(9)=t1528*t3568*t4590 - 1.*t4403*t5349;
  p_output1(10)=-1.*t4403*t6049 - 1.*t4590*t651;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.09*(-1.*t1956*t2147 + t1808*t310) - 0.135*(-1.*t321*t3568*t4590 + t4403*t5132) - 0.049*t5185 + t321*t3568*t6883 + t1808*t6959 + t2147*t7035 + t5132*t7062 + var1(0);
  p_output1(13)=0. - 0.09*(t2668*t310 - 1.*t1956*t3480) - 0.135*(-1.*t1528*t3568*t4590 + t4403*t5349) - 0.049*t5689 + t1528*t3568*t6883 + t2668*t6959 + t3480*t7035 + t5349*t7062 + var1(1);
  p_output1(14)=0. - 0.09*(-1.*t1554*t1956*t3568 + t310*t3568*t593) - 0.049*t6089 - 0.135*(t4403*t6049 + t4590*t651) - 1.*t651*t6883 + t3568*t593*t6959 + t1554*t3568*t7035 + t6049*t7062 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_hip_rotation_right(const Eigen::Matrix<double,20,1> &var1)
//void H_hip_rotation_right(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



