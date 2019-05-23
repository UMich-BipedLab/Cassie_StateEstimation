/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:09:40 GMT-04:00
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
  double t782;
  double t418;
  double t2231;
  double t1766;
  double t2906;
  double t3186;
  double t2702;
  double t4567;
  double t2981;
  double t3924;
  double t3940;
  double t5213;
  double t5370;
  double t5517;
  double t5811;
  double t5824;
  double t5825;
  double t5842;
  double t5845;
  double t5858;
  double t4051;
  double t5766;
  double t5806;
  double t6093;
  double t6097;
  double t6118;
  double t6119;
  double t6127;
  double t6147;
  double t5841;
  double t5871;
  double t5893;
  double t5915;
  double t5945;
  double t5958;
  t782 = Cos(var1[4]);
  t418 = Cos(var1[3]);
  t2231 = Sin(var1[4]);
  t1766 = Sin(var1[3]);
  t2906 = Cos(var1[5]);
  t3186 = Sin(var1[5]);
  t2702 = Sin(var1[13]);
  t4567 = Cos(var1[13]);
  t2981 = t418*t2906*t2231;
  t3924 = t1766*t3186;
  t3940 = t2981 + t3924;
  t5213 = -1.*t2906*t1766;
  t5370 = t418*t2231*t3186;
  t5517 = t5213 + t5370;
  t5811 = t2906*t1766*t2231;
  t5824 = -1.*t418*t3186;
  t5825 = t5811 + t5824;
  t5842 = t418*t2906;
  t5845 = t1766*t2231*t3186;
  t5858 = t5842 + t5845;
  t4051 = t2702*t3940;
  t5766 = t4567*t5517;
  t5806 = t4051 + t5766;
  t6093 = 0.135*t2702;
  t6097 = 0. + t6093;
  t6118 = -1.*t4567;
  t6119 = 1. + t6118;
  t6127 = -0.135*t6119;
  t6147 = 0. + t6127;
  t5841 = t2702*t5825;
  t5871 = t4567*t5858;
  t5893 = t5841 + t5871;
  t5915 = t782*t2906*t2702;
  t5945 = t4567*t782*t3186;
  t5958 = t5915 + t5945;

  p_output1(0)=t418*t782;
  p_output1(1)=t1766*t782;
  p_output1(2)=-1.*t2231;
  p_output1(3)=0.;
  p_output1(4)=t5806;
  p_output1(5)=t5893;
  p_output1(6)=t5958;
  p_output1(7)=0.;
  p_output1(8)=t3940*t4567 - 1.*t2702*t5517;
  p_output1(9)=t4567*t5825 - 1.*t2702*t5858;
  p_output1(10)=-1.*t2702*t3186*t782 + t2906*t4567*t782;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.135*t5806 + t3940*t6097 + t5517*t6147 - 0.049*t418*t782 + var1(0);
  p_output1(13)=0. - 0.135*t5893 + t5825*t6097 + t5858*t6147 - 0.049*t1766*t782 + var1(1);
  p_output1(14)=0. + 0.049*t2231 - 0.135*t5958 + t2906*t6097*t782 + t3186*t6147*t782 + var1(2);
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



