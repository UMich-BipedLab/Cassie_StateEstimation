/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:24 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_abduction_right.h"

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
  double t880;
  double t732;
  double t2117;
  double t1637;
  double t3749;
  double t4661;
  double t2827;
  double t5161;
  double t3775;
  double t4663;
  double t4669;
  double t5382;
  double t5937;
  double t6028;
  double t6143;
  double t6162;
  double t6176;
  double t6192;
  double t6205;
  double t6206;
  double t4964;
  double t6095;
  double t6136;
  double t6486;
  double t6490;
  double t6492;
  double t6494;
  double t6495;
  double t6500;
  double t6190;
  double t6209;
  double t6227;
  double t6240;
  double t6275;
  double t6281;
  t880 = Cos(var1[4]);
  t732 = Cos(var1[3]);
  t2117 = Sin(var1[4]);
  t1637 = Sin(var1[3]);
  t3749 = Cos(var1[5]);
  t4661 = Sin(var1[5]);
  t2827 = Sin(var1[13]);
  t5161 = Cos(var1[13]);
  t3775 = t732*t3749*t2117;
  t4663 = t1637*t4661;
  t4669 = t3775 + t4663;
  t5382 = -1.*t3749*t1637;
  t5937 = t732*t2117*t4661;
  t6028 = t5382 + t5937;
  t6143 = t3749*t1637*t2117;
  t6162 = -1.*t732*t4661;
  t6176 = t6143 + t6162;
  t6192 = t732*t3749;
  t6205 = t1637*t2117*t4661;
  t6206 = t6192 + t6205;
  t4964 = t2827*t4669;
  t6095 = t5161*t6028;
  t6136 = t4964 + t6095;
  t6486 = 0.135*t2827;
  t6490 = 0. + t6486;
  t6492 = -1.*t5161;
  t6494 = 1. + t6492;
  t6495 = -0.135*t6494;
  t6500 = 0. + t6495;
  t6190 = t2827*t6176;
  t6209 = t5161*t6206;
  t6227 = t6190 + t6209;
  t6240 = t880*t3749*t2827;
  t6275 = t5161*t880*t4661;
  t6281 = t6240 + t6275;

  p_output1(0)=t732*t880;
  p_output1(1)=t1637*t880;
  p_output1(2)=-1.*t2117;
  p_output1(3)=0.;
  p_output1(4)=t6136;
  p_output1(5)=t6227;
  p_output1(6)=t6281;
  p_output1(7)=0.;
  p_output1(8)=t4669*t5161 - 1.*t2827*t6028;
  p_output1(9)=t5161*t6176 - 1.*t2827*t6206;
  p_output1(10)=-1.*t2827*t4661*t880 + t3749*t5161*t880;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.135*t6136 + t4669*t6490 + t6028*t6500 - 0.049*t732*t880 + var1(0);
  p_output1(13)=0. - 0.135*t6227 + t6176*t6490 + t6206*t6500 - 0.049*t1637*t880 + var1(1);
  p_output1(14)=0. + 0.049*t2117 - 0.135*t6281 + t3749*t6490*t880 + t4661*t6500*t880 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_hip_abduction_right(const Eigen::Matrix<double,20,1> &var1)
//void H_hip_abduction_right(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



