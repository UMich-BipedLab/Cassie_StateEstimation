/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:13 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_flexion_left.h"

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
  double t791;
  double t1116;
  double t642;
  double t851;
  double t1281;
  double t640;
  double t1787;
  double t1873;
  double t1916;
  double t1083;
  double t1465;
  double t1509;
  double t2144;
  double t294;
  double t2680;
  double t2773;
  double t3581;
  double t3763;
  double t3799;
  double t3435;
  double t3504;
  double t3526;
  double t3105;
  double t3297;
  double t2812;
  double t2825;
  double t3002;
  double t3068;
  double t3165;
  double t3166;
  double t1676;
  double t2239;
  double t2367;
  double t4004;
  double t4008;
  double t4058;
  double t4132;
  double t4309;
  double t4340;
  double t3543;
  double t3856;
  double t3936;
  double t4826;
  double t4846;
  double t4876;
  double t4880;
  double t4911;
  double t4920;
  double t4559;
  double t4768;
  double t4784;
  double t5559;
  double t5620;
  double t5876;
  double t5877;
  double t5032;
  double t5058;
  double t5078;
  double t5488;
  double t5493;
  double t5496;
  double t5510;
  double t5521;
  double t5532;
  double t5623;
  double t5627;
  double t5677;
  double t5690;
  double t5837;
  double t5847;
  double t5904;
  double t5913;
  double t5918;
  double t5959;
  double t5983;
  double t5984;
  double t5093;
  double t5137;
  double t5139;
  double t5146;
  double t5171;
  double t5184;
  t791 = Cos(var1[5]);
  t1116 = Sin(var1[3]);
  t642 = Cos(var1[3]);
  t851 = Sin(var1[4]);
  t1281 = Sin(var1[5]);
  t640 = Cos(var1[6]);
  t1787 = -1.*t791*t1116;
  t1873 = t642*t851*t1281;
  t1916 = t1787 + t1873;
  t1083 = t642*t791*t851;
  t1465 = t1116*t1281;
  t1509 = t1083 + t1465;
  t2144 = Sin(var1[6]);
  t294 = Cos(var1[8]);
  t2680 = Cos(var1[4]);
  t2773 = Cos(var1[7]);
  t3581 = t642*t791;
  t3763 = t1116*t851*t1281;
  t3799 = t3581 + t3763;
  t3435 = t791*t1116*t851;
  t3504 = -1.*t642*t1281;
  t3526 = t3435 + t3504;
  t3105 = Sin(var1[7]);
  t3297 = Sin(var1[8]);
  t2812 = t642*t2680*t2773;
  t2825 = t640*t1916;
  t3002 = t1509*t2144;
  t3068 = t2825 + t3002;
  t3165 = t3068*t3105;
  t3166 = t2812 + t3165;
  t1676 = t640*t1509;
  t2239 = -1.*t1916*t2144;
  t2367 = t1676 + t2239;
  t4004 = t2680*t2773*t1116;
  t4008 = t640*t3799;
  t4058 = t3526*t2144;
  t4132 = t4008 + t4058;
  t4309 = t4132*t3105;
  t4340 = t4004 + t4309;
  t3543 = t640*t3526;
  t3856 = -1.*t3799*t2144;
  t3936 = t3543 + t3856;
  t4826 = -1.*t2773*t851;
  t4846 = t2680*t640*t1281;
  t4876 = t2680*t791*t2144;
  t4880 = t4846 + t4876;
  t4911 = t4880*t3105;
  t4920 = t4826 + t4911;
  t4559 = t2680*t791*t640;
  t4768 = -1.*t2680*t1281*t2144;
  t4784 = t4559 + t4768;
  t5559 = -1.*t2773;
  t5620 = 1. + t5559;
  t5876 = -1.*t294;
  t5877 = 1. + t5876;
  t5032 = t294*t3166;
  t5058 = t2367*t3297;
  t5078 = t5032 + t5058;
  t5488 = -1.*t640;
  t5493 = 1. + t5488;
  t5496 = 0.135*t5493;
  t5510 = 0. + t5496;
  t5521 = -0.135*t2144;
  t5532 = 0. + t5521;
  t5623 = 0.135*t5620;
  t5627 = 0.049*t3105;
  t5677 = 0. + t5623 + t5627;
  t5690 = -0.049*t5620;
  t5837 = 0.135*t3105;
  t5847 = 0. + t5690 + t5837;
  t5904 = -0.049*t5877;
  t5913 = -0.09*t3297;
  t5918 = 0. + t5904 + t5913;
  t5959 = -0.09*t5877;
  t5983 = 0.049*t3297;
  t5984 = 0. + t5959 + t5983;
  t5093 = t294*t4340;
  t5137 = t3936*t3297;
  t5139 = t5093 + t5137;
  t5146 = t294*t4920;
  t5171 = t4784*t3297;
  t5184 = t5146 + t5171;

  p_output1(0)=-1.*t2367*t294 + t3166*t3297;
  p_output1(1)=-1.*t294*t3936 + t3297*t4340;
  p_output1(2)=-1.*t294*t4784 + t3297*t4920;
  p_output1(3)=0.;
  p_output1(4)=t5078;
  p_output1(5)=t5139;
  p_output1(6)=t5184;
  p_output1(7)=0.;
  p_output1(8)=-1.*t2773*t3068 + t2680*t3105*t642;
  p_output1(9)=t1116*t2680*t3105 - 1.*t2773*t4132;
  p_output1(10)=-1.*t2773*t4880 - 1.*t3105*t851;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.09*(t2367*t294 - 1.*t3166*t3297) - 0.049*t5078 + t1916*t5510 + t1509*t5532 + t3068*t5677 + t3166*t5918 + t2367*t5984 + t2680*t5847*t642 + 0.135*(t2773*t3068 - 1.*t2680*t3105*t642) + var1(0);
  p_output1(13)=0. + 0.135*(-1.*t1116*t2680*t3105 + t2773*t4132) - 0.09*(t294*t3936 - 1.*t3297*t4340) - 0.049*t5139 + t3799*t5510 + t3526*t5532 + t4132*t5677 + t1116*t2680*t5847 + t4340*t5918 + t3936*t5984 + var1(1);
  p_output1(14)=0. - 0.09*(t294*t4784 - 1.*t3297*t4920) - 0.049*t5184 + t1281*t2680*t5510 + t4880*t5677 + t4920*t5918 + t4784*t5984 + t2680*t5532*t791 - 1.*t5847*t851 + 0.135*(t2773*t4880 + t3105*t851) + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_hip_flexion_left(const Eigen::Matrix<double,20,1> &var1)
//void H_hip_flexion_left(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



