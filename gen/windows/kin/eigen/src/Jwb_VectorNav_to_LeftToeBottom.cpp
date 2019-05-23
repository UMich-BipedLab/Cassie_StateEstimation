/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:32:34 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jwb_VectorNav_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t693;
  double t722;
  double t905;
  double t702;
  double t742;
  double t778;
  double t676;
  double t931;
  double t970;
  double t1008;
  double t1132;
  double t881;
  double t1032;
  double t1033;
  double t603;
  double t1162;
  double t1238;
  double t1246;
  double t1449;
  double t1124;
  double t1252;
  double t1299;
  double t387;
  double t1453;
  double t1455;
  double t1571;
  double t61;
  double t223;
  double t2198;
  double t2205;
  double t2249;
  double t2175;
  double t2323;
  double t2337;
  double t2396;
  double t2432;
  double t2375;
  double t2448;
  double t2493;
  double t2502;
  double t2504;
  double t2516;
  double t1848;
  double t1626;
  double t1689;
  double t1742;
  double t1406;
  double t1603;
  double t1615;
  double t2556;
  double t2566;
  double t2580;
  double t2498;
  double t2522;
  double t2535;
  t693 = Cos(var1[6]);
  t722 = Sin(var1[6]);
  t905 = Cos(var1[5]);
  t702 = 0.642788*t693;
  t742 = -0.766044*t722;
  t778 = t702 + t742;
  t676 = Sin(var1[5]);
  t931 = 0.766044*t693;
  t970 = 0.642788*t722;
  t1008 = t931 + t970;
  t1132 = Cos(var1[4]);
  t881 = t676*t778;
  t1032 = t905*t1008;
  t1033 = 0. + t881 + t1032;
  t603 = Sin(var1[4]);
  t1162 = t905*t778;
  t1238 = -1.*t676*t1008;
  t1246 = 0. + t1162 + t1238;
  t1449 = Sin(var1[3]);
  t1124 = -1.*t603*t1033;
  t1252 = t1132*t1246;
  t1299 = 0. + t1124 + t1252;
  t387 = Cos(var1[3]);
  t1453 = t1132*t1033;
  t1455 = t603*t1246;
  t1571 = 0. + t1453 + t1455;
  t61 = Cos(var1[1]);
  t223 = Cos(var1[2]);
  t2198 = -0.766044*t693;
  t2205 = -0.642788*t722;
  t2249 = t2198 + t2205;
  t2175 = -1.*t676*t778;
  t2323 = t905*t2249;
  t2337 = 0. + t2175 + t2323;
  t2396 = t676*t2249;
  t2432 = 0. + t1162 + t2396;
  t2375 = t603*t2337;
  t2448 = t1132*t2432;
  t2493 = 0. + t2375 + t2448;
  t2502 = t1132*t2337;
  t2504 = -1.*t603*t2432;
  t2516 = 0. + t2502 + t2504;
  t1848 = Sin(var1[2]);
  t1626 = t1449*t1299;
  t1689 = t387*t1571;
  t1742 = 0. + t1626 + t1689;
  t1406 = t387*t1299;
  t1603 = -1.*t1449*t1571;
  t1615 = 0. + t1406 + t1603;
  t2556 = t387*t2493;
  t2566 = t1449*t2516;
  t2580 = 0. + t2556 + t2566;
  t2498 = -1.*t1449*t2493;
  t2522 = t387*t2516;
  t2535 = 0. + t2498 + t2522;

  p_output1(0)=0. + Sin(var1(1));
  p_output1(1)=0. + (0. - 1.*t1742*t1848 + t1615*t223)*t61;
  p_output1(2)=0. + (0. + t223*t2535 - 1.*t1848*t2580)*t61;
  p_output1(3)=0.;
  p_output1(4)=0. + t1615*t1848 + t1742*t223;
  p_output1(5)=0. + t1848*t2535 + t223*t2580;
  p_output1(6)=1.;
  p_output1(7)=0.;
  p_output1(8)=0.;
  p_output1(9)=1.;
  p_output1(10)=0.;
  p_output1(11)=0.;
  p_output1(12)=1.;
  p_output1(13)=0.;
  p_output1(14)=0.;
  p_output1(15)=1.;
  p_output1(16)=0.;
  p_output1(17)=0.;
  p_output1(18)=1.;
  p_output1(19)=0.;
  p_output1(20)=0.;
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
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
}


       
Eigen::Matrix<double,3,14> Jwb_VectorNav_to_LeftToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void Jwb_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



