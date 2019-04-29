/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:22:20 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_flexion_right.h"

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
  double t687;
  double t833;
  double t605;
  double t714;
  double t858;
  double t1128;
  double t733;
  double t863;
  double t891;
  double t64;
  double t1203;
  double t1213;
  double t1417;
  double t59;
  double t1845;
  double t1942;
  double t2169;
  double t2500;
  double t3242;
  double t3384;
  double t3441;
  double t3570;
  double t3602;
  double t3734;
  double t997;
  double t1468;
  double t1489;
  double t2406;
  double t2542;
  double t2583;
  double t2645;
  double t2694;
  double t2696;
  double t3483;
  double t3860;
  double t3959;
  double t4109;
  double t4112;
  double t4120;
  double t4178;
  double t4266;
  double t4365;
  double t4504;
  double t4533;
  double t4536;
  double t4606;
  double t4637;
  double t4638;
  double t4717;
  double t4756;
  double t4773;
  double t6222;
  double t6256;
  double t6711;
  double t6778;
  double t4802;
  double t4892;
  double t4908;
  double t6281;
  double t6289;
  double t6336;
  double t6373;
  double t6384;
  double t6402;
  double t6410;
  double t6418;
  double t6435;
  double t6488;
  double t6620;
  double t6623;
  double t6867;
  double t6870;
  double t6875;
  double t6923;
  double t6931;
  double t6935;
  double t5076;
  double t5185;
  double t5322;
  double t5339;
  double t5410;
  double t5457;
  t687 = Cos(var1[5]);
  t833 = Sin(var1[3]);
  t605 = Cos(var1[3]);
  t714 = Sin(var1[4]);
  t858 = Sin(var1[5]);
  t1128 = Sin(var1[13]);
  t733 = t605*t687*t714;
  t863 = t833*t858;
  t891 = t733 + t863;
  t64 = Cos(var1[13]);
  t1203 = -1.*t687*t833;
  t1213 = t605*t714*t858;
  t1417 = t1203 + t1213;
  t59 = Cos(var1[15]);
  t1845 = Sin(var1[15]);
  t1942 = Cos(var1[14]);
  t2169 = Cos(var1[4]);
  t2500 = Sin(var1[14]);
  t3242 = t687*t833*t714;
  t3384 = -1.*t605*t858;
  t3441 = t3242 + t3384;
  t3570 = t605*t687;
  t3602 = t833*t714*t858;
  t3734 = t3570 + t3602;
  t997 = t64*t891;
  t1468 = -1.*t1128*t1417;
  t1489 = t997 + t1468;
  t2406 = t1942*t605*t2169;
  t2542 = t1128*t891;
  t2583 = t64*t1417;
  t2645 = t2542 + t2583;
  t2694 = t2500*t2645;
  t2696 = t2406 + t2694;
  t3483 = t64*t3441;
  t3860 = -1.*t1128*t3734;
  t3959 = t3483 + t3860;
  t4109 = t1942*t2169*t833;
  t4112 = t1128*t3441;
  t4120 = t64*t3734;
  t4178 = t4112 + t4120;
  t4266 = t2500*t4178;
  t4365 = t4109 + t4266;
  t4504 = t64*t2169*t687;
  t4533 = -1.*t2169*t1128*t858;
  t4536 = t4504 + t4533;
  t4606 = -1.*t1942*t714;
  t4637 = t2169*t687*t1128;
  t4638 = t64*t2169*t858;
  t4717 = t4637 + t4638;
  t4756 = t2500*t4717;
  t4773 = t4606 + t4756;
  t6222 = -1.*t1942;
  t6256 = 1. + t6222;
  t6711 = -1.*t59;
  t6778 = 1. + t6711;
  t4802 = t1845*t1489;
  t4892 = t59*t2696;
  t4908 = t4802 + t4892;
  t6281 = -0.049*t6256;
  t6289 = -0.135*t2500;
  t6336 = 0. + t6281 + t6289;
  t6373 = 0.135*t1128;
  t6384 = 0. + t6373;
  t6402 = -1.*t64;
  t6410 = 1. + t6402;
  t6418 = -0.135*t6410;
  t6435 = 0. + t6418;
  t6488 = -0.135*t6256;
  t6620 = 0.049*t2500;
  t6623 = 0. + t6488 + t6620;
  t6867 = -0.09*t6778;
  t6870 = 0.049*t1845;
  t6875 = 0. + t6867 + t6870;
  t6923 = -0.049*t6778;
  t6931 = -0.09*t1845;
  t6935 = 0. + t6923 + t6931;
  t5076 = t1845*t3959;
  t5185 = t59*t4365;
  t5322 = t5076 + t5185;
  t5339 = t1845*t4536;
  t5410 = t59*t4773;
  t5457 = t5339 + t5410;

  p_output1(0)=t1845*t2696 - 1.*t1489*t59;
  p_output1(1)=t1845*t4365 - 1.*t3959*t59;
  p_output1(2)=t1845*t4773 - 1.*t4536*t59;
  p_output1(3)=0.;
  p_output1(4)=t4908;
  p_output1(5)=t5322;
  p_output1(6)=t5457;
  p_output1(7)=0.;
  p_output1(8)=-1.*t1942*t2645 + t2169*t2500*t605;
  p_output1(9)=-1.*t1942*t4178 + t2169*t2500*t833;
  p_output1(10)=-1.*t1942*t4717 - 1.*t2500*t714;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.049*t4908 - 0.09*(-1.*t1845*t2696 + t1489*t59) - 0.135*(t1942*t2645 - 1.*t2169*t2500*t605) + t2169*t605*t6336 + t1417*t6435 + t2645*t6623 + t1489*t6875 + t2696*t6935 + t6384*t891 + var1(0);
  p_output1(13)=0. - 0.049*t5322 - 0.09*(-1.*t1845*t4365 + t3959*t59) + t3441*t6384 + t3734*t6435 + t4178*t6623 + t3959*t6875 + t4365*t6935 + t2169*t6336*t833 - 0.135*(t1942*t4178 - 1.*t2169*t2500*t833) + var1(1);
  p_output1(14)=0. - 0.049*t5457 - 0.09*(-1.*t1845*t4773 + t4536*t59) + t4717*t6623 + t2169*t6384*t687 + t4536*t6875 + t4773*t6935 - 1.*t6336*t714 - 0.135*(t1942*t4717 + t2500*t714) + t2169*t6435*t858 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_hip_flexion_right(const Eigen::Matrix<double,20,1> &var1)
//void H_hip_flexion_right(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



