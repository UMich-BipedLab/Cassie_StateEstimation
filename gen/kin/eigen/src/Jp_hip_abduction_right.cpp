/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:23 GMT-05:00
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
  double t577;
  double t4394;
  double t2549;
  double t3577;
  double t4464;
  double t1288;
  double t4127;
  double t4703;
  double t4988;
  double t6000;
  double t6063;
  double t6069;
  double t6095;
  double t543;
  double t1637;
  double t1746;
  double t6006;
  double t6022;
  double t6028;
  double t6030;
  double t6192;
  double t6205;
  double t6206;
  double t6217;
  double t6227;
  double t6232;
  double t6701;
  double t6703;
  double t6718;
  double t6779;
  double t6817;
  double t6828;
  double t6756;
  double t6851;
  double t7011;
  double t7021;
  double t7022;
  double t6942;
  double t6943;
  double t6949;
  double t6951;
  t577 = Sin(var1[3]);
  t4394 = Cos(var1[3]);
  t2549 = Cos(var1[5]);
  t3577 = Sin(var1[4]);
  t4464 = Sin(var1[5]);
  t1288 = Sin(var1[13]);
  t4127 = -1.*t2549*t577*t3577;
  t4703 = t4394*t4464;
  t4988 = t4127 + t4703;
  t6000 = Cos(var1[13]);
  t6063 = -1.*t4394*t2549;
  t6069 = -1.*t577*t3577*t4464;
  t6095 = t6063 + t6069;
  t543 = Cos(var1[4]);
  t1637 = 0.135*t1288;
  t1746 = 0. + t1637;
  t6006 = -1.*t6000;
  t6022 = 1. + t6006;
  t6028 = -0.135*t6022;
  t6030 = 0. + t6028;
  t6192 = t4394*t2549*t3577;
  t6205 = t577*t4464;
  t6206 = t6192 + t6205;
  t6217 = -1.*t2549*t577;
  t6227 = t4394*t3577*t4464;
  t6232 = t6217 + t6227;
  t6701 = t2549*t577;
  t6703 = -1.*t4394*t3577*t4464;
  t6718 = t6701 + t6703;
  t6779 = t2549*t577*t3577;
  t6817 = -1.*t4394*t4464;
  t6828 = t6779 + t6817;
  t6756 = t6000*t6206;
  t6851 = t6000*t6828;
  t7011 = t4394*t2549;
  t7021 = t577*t3577*t4464;
  t7022 = t7011 + t7021;
  t6942 = t6000*t543*t2549;
  t6943 = -1.*t543*t1288*t4464;
  t6949 = t6942 + t6943;
  t6951 = -0.135*t6949;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1746*t4988 + 0.049*t543*t577 + t6030*t6095 - 0.135*(t1288*t4988 + t6000*t6095);
  p_output1(10)=-0.049*t4394*t543 + t1746*t6206 + t6030*t6232 - 0.135*(t1288*t6206 + t6000*t6232);
  p_output1(11)=0;
  p_output1(12)=0.049*t3577*t4394 + t1746*t2549*t4394*t543 - 0.135*(t1288*t2549*t4394*t543 + t4394*t4464*t543*t6000) + t4394*t4464*t543*t6030;
  p_output1(13)=0.049*t3577*t577 + t1746*t2549*t543*t577 - 0.135*(t1288*t2549*t543*t577 + t4464*t543*t577*t6000) + t4464*t543*t577*t6030;
  p_output1(14)=-1.*t1746*t2549*t3577 + 0.049*t543 - 0.135*(-1.*t1288*t2549*t3577 - 1.*t3577*t4464*t6000) - 1.*t3577*t4464*t6030;
  p_output1(15)=t6030*t6206 + t1746*t6718 - 0.135*(t1288*t6718 + t6756);
  p_output1(16)=t1746*t6095 + t6030*t6828 - 0.135*(t1288*t6095 + t6851);
  p_output1(17)=-1.*t1746*t4464*t543 + t2549*t543*t6030 + t6951;
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
  p_output1(39)=0.135*t6000*t6206 - 0.135*t1288*t6232 - 0.135*(-1.*t1288*t6232 + t6756);
  p_output1(40)=0.135*t6000*t6828 - 0.135*t1288*t7022 - 0.135*(t6851 - 1.*t1288*t7022);
  p_output1(41)=-0.135*t1288*t4464*t543 + 0.135*t2549*t543*t6000 + t6951;
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



