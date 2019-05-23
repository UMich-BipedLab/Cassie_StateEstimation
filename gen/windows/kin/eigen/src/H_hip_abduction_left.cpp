/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:09:07 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_abduction_left.h"

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
  double t1590;
  double t2137;
  double t1527;
  double t2426;
  double t3305;
  double t4206;
  double t2688;
  double t4498;
  double t4414;
  double t4472;
  double t4497;
  double t3329;
  double t4246;
  double t4278;
  double t4699;
  double t4727;
  double t4744;
  double t4555;
  double t4587;
  double t4675;
  double t4329;
  double t4509;
  double t4539;
  double t4930;
  double t4950;
  double t4954;
  double t4955;
  double t4985;
  double t5003;
  double t4698;
  double t4754;
  double t4771;
  double t4774;
  double t4794;
  double t4798;
  t1590 = Cos(var1[4]);
  t2137 = Sin(var1[3]);
  t1527 = Cos(var1[3]);
  t2426 = Sin(var1[4]);
  t3305 = Cos(var1[5]);
  t4206 = Sin(var1[5]);
  t2688 = Cos(var1[6]);
  t4498 = Sin(var1[6]);
  t4414 = t1527*t3305*t2426;
  t4472 = t2137*t4206;
  t4497 = t4414 + t4472;
  t3329 = -1.*t3305*t2137;
  t4246 = t1527*t2426*t4206;
  t4278 = t3329 + t4246;
  t4699 = t3305*t2137*t2426;
  t4727 = -1.*t1527*t4206;
  t4744 = t4699 + t4727;
  t4555 = t1527*t3305;
  t4587 = t2137*t2426*t4206;
  t4675 = t4555 + t4587;
  t4329 = t2688*t4278;
  t4509 = t4497*t4498;
  t4539 = t4329 + t4509;
  t4930 = -1.*t2688;
  t4950 = 1. + t4930;
  t4954 = 0.135*t4950;
  t4955 = 0. + t4954;
  t4985 = -0.135*t4498;
  t5003 = 0. + t4985;
  t4698 = t2688*t4675;
  t4754 = t4744*t4498;
  t4771 = t4698 + t4754;
  t4774 = t1590*t2688*t4206;
  t4794 = t1590*t3305*t4498;
  t4798 = t4774 + t4794;

  p_output1(0)=t1527*t1590;
  p_output1(1)=t1590*t2137;
  p_output1(2)=-1.*t2426;
  p_output1(3)=0.;
  p_output1(4)=t4539;
  p_output1(5)=t4771;
  p_output1(6)=t4798;
  p_output1(7)=0.;
  p_output1(8)=t2688*t4497 - 1.*t4278*t4498;
  p_output1(9)=-1.*t4498*t4675 + t2688*t4744;
  p_output1(10)=t1590*t2688*t3305 - 1.*t1590*t4206*t4498;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.049*t1527*t1590 + 0.135*t4539 + t4278*t4955 + t4497*t5003 + var1(0);
  p_output1(13)=0. - 0.049*t1590*t2137 + 0.135*t4771 + t4675*t4955 + t4744*t5003 + var1(1);
  p_output1(14)=0. + 0.049*t2426 + 0.135*t4798 + t1590*t4206*t4955 + t1590*t3305*t5003 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_hip_abduction_left(const Eigen::Matrix<double,20,1> &var1)
//void H_hip_abduction_left(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



