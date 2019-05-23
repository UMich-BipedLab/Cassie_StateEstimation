/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:10:00 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_to_shin_right.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t2348;
  double t3222;
  double t2268;
  double t2355;
  double t3225;
  double t4131;
  double t3009;
  double t3238;
  double t3864;
  double t2216;
  double t4287;
  double t4290;
  double t4759;
  double t5064;
  double t4028;
  double t4975;
  double t5004;
  double t1919;
  double t5075;
  double t5099;
  double t5103;
  double t5111;
  double t5139;
  double t5158;
  double t5173;
  double t5175;
  double t5176;
  double t5324;
  double t5034;
  double t5200;
  double t5223;
  double t1453;
  double t5346;
  double t5348;
  double t5356;
  double t732;
  double t5630;
  double t5638;
  double t5644;
  double t5656;
  double t5677;
  double t5707;
  double t5653;
  double t5710;
  double t5743;
  double t5764;
  double t5865;
  double t5894;
  double t5918;
  double t5925;
  double t5964;
  double t5473;
  double t5750;
  double t5981;
  double t5989;
  double t6008;
  double t6015;
  double t6052;
  double t6279;
  double t6343;
  double t6360;
  double t6404;
  double t6423;
  double t6426;
  double t6437;
  double t6451;
  double t6459;
  double t6376;
  double t6468;
  double t6485;
  double t6524;
  double t6552;
  double t6561;
  double t5293;
  double t5412;
  double t5425;
  double t5497;
  double t5509;
  double t5566;
  double t5997;
  double t6078;
  double t6081;
  double t6148;
  double t6170;
  double t6206;
  double t6510;
  double t6579;
  double t6583;
  double t6636;
  double t6651;
  double t6734;
  t2348 = Cos(var1[5]);
  t3222 = Sin(var1[3]);
  t2268 = Cos(var1[3]);
  t2355 = Sin(var1[4]);
  t3225 = Sin(var1[5]);
  t4131 = Sin(var1[13]);
  t3009 = t2268*t2348*t2355;
  t3238 = t3222*t3225;
  t3864 = t3009 + t3238;
  t2216 = Cos(var1[13]);
  t4287 = -1.*t2348*t3222;
  t4290 = t2268*t2355*t3225;
  t4759 = t4287 + t4290;
  t5064 = Cos(var1[15]);
  t4028 = t2216*t3864;
  t4975 = -1.*t4131*t4759;
  t5004 = t4028 + t4975;
  t1919 = Sin(var1[15]);
  t5075 = Cos(var1[14]);
  t5099 = Cos(var1[4]);
  t5103 = t5075*t2268*t5099;
  t5111 = Sin(var1[14]);
  t5139 = t4131*t3864;
  t5158 = t2216*t4759;
  t5173 = t5139 + t5158;
  t5175 = t5111*t5173;
  t5176 = t5103 + t5175;
  t5324 = Cos(var1[16]);
  t5034 = t1919*t5004;
  t5200 = t5064*t5176;
  t5223 = t5034 + t5200;
  t1453 = Sin(var1[16]);
  t5346 = t5064*t5004;
  t5348 = -1.*t1919*t5176;
  t5356 = t5346 + t5348;
  t732 = Cos(var1[17]);
  t5630 = t2348*t3222*t2355;
  t5638 = -1.*t2268*t3225;
  t5644 = t5630 + t5638;
  t5656 = t2268*t2348;
  t5677 = t3222*t2355*t3225;
  t5707 = t5656 + t5677;
  t5653 = t2216*t5644;
  t5710 = -1.*t4131*t5707;
  t5743 = t5653 + t5710;
  t5764 = t5075*t5099*t3222;
  t5865 = t4131*t5644;
  t5894 = t2216*t5707;
  t5918 = t5865 + t5894;
  t5925 = t5111*t5918;
  t5964 = t5764 + t5925;
  t5473 = Sin(var1[17]);
  t5750 = t1919*t5743;
  t5981 = t5064*t5964;
  t5989 = t5750 + t5981;
  t6008 = t5064*t5743;
  t6015 = -1.*t1919*t5964;
  t6052 = t6008 + t6015;
  t6279 = t2216*t5099*t2348;
  t6343 = -1.*t5099*t4131*t3225;
  t6360 = t6279 + t6343;
  t6404 = -1.*t5075*t2355;
  t6423 = t5099*t2348*t4131;
  t6426 = t2216*t5099*t3225;
  t6437 = t6423 + t6426;
  t6451 = t5111*t6437;
  t6459 = t6404 + t6451;
  t6376 = t1919*t6360;
  t6468 = t5064*t6459;
  t6485 = t6376 + t6468;
  t6524 = t5064*t6360;
  t6552 = -1.*t1919*t6459;
  t6561 = t6524 + t6552;
  t5293 = -1.*t1453*t5223;
  t5412 = t5324*t5356;
  t5425 = t5293 + t5412;
  t5497 = t5324*t5223;
  t5509 = t1453*t5356;
  t5566 = t5497 + t5509;
  t5997 = -1.*t1453*t5989;
  t6078 = t5324*t6052;
  t6081 = t5997 + t6078;
  t6148 = t5324*t5989;
  t6170 = t1453*t6052;
  t6206 = t6148 + t6170;
  t6510 = -1.*t1453*t6485;
  t6579 = t5324*t6561;
  t6583 = t6510 + t6579;
  t6636 = t5324*t6485;
  t6651 = t1453*t6561;
  t6734 = t6636 + t6651;

  p_output1(0)=t5473*t5566 - 1.*t5425*t732;
  p_output1(1)=t5473*t6206 - 1.*t6081*t732;
  p_output1(2)=t5473*t6734 - 1.*t6583*t732;
  p_output1(3)=t5425*t5473 + t5566*t732;
  p_output1(4)=t5473*t6081 + t6206*t732;
  p_output1(5)=t5473*t6583 + t6734*t732;
  p_output1(6)=t2268*t5099*t5111 - 1.*t5075*t5173;
  p_output1(7)=t3222*t5099*t5111 - 1.*t5075*t5918;
  p_output1(8)=-1.*t2355*t5111 - 1.*t5075*t6437;
}


       
Eigen::Matrix<double,3,3> R_knee_to_shin_right(const Eigen::Matrix<double,20,1> &var1)
//void R_knee_to_shin_right(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



