/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:09:39 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_abduction_right.h"

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
static void output1(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t347;
  double t3255;
  double t2323;
  double t2734;
  double t3372;
  double t1492;
  double t3131;
  double t3390;
  double t3924;
  double t4686;
  double t5796;
  double t5804;
  double t5806;
  double t112;
  double t1623;
  double t1826;
  double t5197;
  double t5500;
  double t5766;
  double t5789;
  double t5871;
  double t5893;
  double t5915;
  double t5951;
  double t5958;
  double t5960;
  double t6340;
  double t6355;
  double t6359;
  double t6424;
  double t6429;
  double t6436;
  double t6395;
  double t6477;
  double t6609;
  double t6614;
  double t6615;
  double t6540;
  double t6541;
  double t6544;
  double t6549;
  t347 = Sin(var1[3]);
  t3255 = Cos(var1[3]);
  t2323 = Cos(var1[5]);
  t2734 = Sin(var1[4]);
  t3372 = Sin(var1[5]);
  t1492 = Sin(var1[13]);
  t3131 = -1.*t2323*t347*t2734;
  t3390 = t3255*t3372;
  t3924 = t3131 + t3390;
  t4686 = Cos(var1[13]);
  t5796 = -1.*t3255*t2323;
  t5804 = -1.*t347*t2734*t3372;
  t5806 = t5796 + t5804;
  t112 = Cos(var1[4]);
  t1623 = 0.135*t1492;
  t1826 = 0. + t1623;
  t5197 = -1.*t4686;
  t5500 = 1. + t5197;
  t5766 = -0.135*t5500;
  t5789 = 0. + t5766;
  t5871 = t3255*t2323*t2734;
  t5893 = t347*t3372;
  t5915 = t5871 + t5893;
  t5951 = -1.*t2323*t347;
  t5958 = t3255*t2734*t3372;
  t5960 = t5951 + t5958;
  t6340 = t2323*t347;
  t6355 = -1.*t3255*t2734*t3372;
  t6359 = t6340 + t6355;
  t6424 = t2323*t347*t2734;
  t6429 = -1.*t3255*t3372;
  t6436 = t6424 + t6429;
  t6395 = t4686*t5915;
  t6477 = t4686*t6436;
  t6609 = t3255*t2323;
  t6614 = t347*t2734*t3372;
  t6615 = t6609 + t6614;
  t6540 = t4686*t112*t2323;
  t6541 = -1.*t112*t1492*t3372;
  t6544 = t6540 + t6541;
  t6549 = -0.135*t6544;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=0.049*t112*t347 + t1826*t3924 + t5789*t5806 - 0.135*(t1492*t3924 + t4686*t5806);
  p_output1(10)=-0.049*t112*t3255 + t1826*t5915 + t5789*t5960 - 0.135*(t1492*t5915 + t4686*t5960);
  p_output1(11)=0;
  p_output1(12)=t112*t1826*t2323*t3255 + 0.049*t2734*t3255 - 0.135*(t112*t1492*t2323*t3255 + t112*t3255*t3372*t4686) + t112*t3255*t3372*t5789;
  p_output1(13)=t112*t1826*t2323*t347 + 0.049*t2734*t347 - 0.135*(t112*t1492*t2323*t347 + t112*t3372*t347*t4686) + t112*t3372*t347*t5789;
  p_output1(14)=0.049*t112 - 1.*t1826*t2323*t2734 - 0.135*(-1.*t1492*t2323*t2734 - 1.*t2734*t3372*t4686) - 1.*t2734*t3372*t5789;
  p_output1(15)=t5789*t5915 + t1826*t6359 - 0.135*(t1492*t6359 + t6395);
  p_output1(16)=t1826*t5806 + t5789*t6436 - 0.135*(t1492*t5806 + t6477);
  p_output1(17)=-1.*t112*t1826*t3372 + t112*t2323*t5789 + t6549;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0.135*t4686*t5915 - 0.135*t1492*t5960 - 0.135*(-1.*t1492*t5960 + t6395);
  p_output1(40)=0.135*t4686*t6436 - 0.135*t1492*t6615 - 0.135*(t6477 - 1.*t1492*t6615);
  p_output1(41)=-0.135*t112*t1492*t3372 + 0.135*t112*t2323*t4686 + t6549;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=0;
  p_output1(46)=0;
  p_output1(47)=0;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
  p_output1(54)=0;
  p_output1(55)=0;
  p_output1(56)=0;
  p_output1(57)=0;
  p_output1(58)=0;
  p_output1(59)=0;
}


       
Eigen::Matrix<double,3,20> Jp_hip_abduction_right(const Eigen::Matrix<double,20,1> &var1)
//void Jp_hip_abduction_right(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,20>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



