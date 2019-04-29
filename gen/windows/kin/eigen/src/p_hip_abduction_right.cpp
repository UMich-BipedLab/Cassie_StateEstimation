/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:22:08 GMT-04:00
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
  double t309;
  double t1782;
  double t2299;
  double t1821;
  double t2408;
  double t1548;
  double t2271;
  double t2758;
  double t2999;
  double t3362;
  double t5028;
  double t5029;
  double t5197;
  double t635;
  double t1623;
  double t1670;
  double t3900;
  double t4669;
  double t4766;
  double t4769;
  double t5804;
  double t5805;
  double t5806;
  double t5824;
  double t5825;
  double t5841;
  t309 = Cos(var1[3]);
  t1782 = Cos(var1[5]);
  t2299 = Sin(var1[3]);
  t1821 = Sin(var1[4]);
  t2408 = Sin(var1[5]);
  t1548 = Sin(var1[13]);
  t2271 = t309*t1782*t1821;
  t2758 = t2299*t2408;
  t2999 = t2271 + t2758;
  t3362 = Cos(var1[13]);
  t5028 = -1.*t1782*t2299;
  t5029 = t309*t1821*t2408;
  t5197 = t5028 + t5029;
  t635 = Cos(var1[4]);
  t1623 = 0.135*t1548;
  t1670 = 0. + t1623;
  t3900 = -1.*t3362;
  t4669 = 1. + t3900;
  t4766 = -0.135*t4669;
  t4769 = 0. + t4766;
  t5804 = t1782*t2299*t1821;
  t5805 = -1.*t309*t2408;
  t5806 = t5804 + t5805;
  t5824 = t309*t1782;
  t5825 = t2299*t1821*t2408;
  t5841 = t5824 + t5825;

  p_output1(0)=0. + t1670*t2999 + t4769*t5197 - 0.135*(t1548*t2999 + t3362*t5197) - 0.049*t309*t635 + var1(0);
  p_output1(1)=0. + t1670*t5806 + t4769*t5841 - 0.135*(t1548*t5806 + t3362*t5841) - 0.049*t2299*t635 + var1(1);
  p_output1(2)=0. + 0.049*t1821 + t1670*t1782*t635 + t2408*t4769*t635 - 0.135*(t1548*t1782*t635 + t2408*t3362*t635) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_hip_abduction_right(const Eigen::Matrix<double,20,1> &var1)
//void p_hip_abduction_right(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



