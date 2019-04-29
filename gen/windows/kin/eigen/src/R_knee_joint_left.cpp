/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:21:52 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_joint_left.h"

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
  double t2341;
  double t3005;
  double t3397;
  double t3027;
  double t3712;
  double t2563;
  double t4164;
  double t4307;
  double t4440;
  double t3250;
  double t3858;
  double t3993;
  double t4446;
  double t2220;
  double t4645;
  double t4719;
  double t4724;
  double t2342;
  double t2365;
  double t2557;
  double t4010;
  double t4490;
  double t4495;
  double t4515;
  double t4531;
  double t4532;
  double t4734;
  double t2199;
  double t5141;
  double t5154;
  double t5199;
  double t5005;
  double t5058;
  double t5069;
  double t4777;
  double t5292;
  double t5294;
  double t5301;
  double t4958;
  double t5082;
  double t5202;
  double t5209;
  double t5212;
  double t5234;
  double t5567;
  double t5570;
  double t5573;
  double t5407;
  double t5414;
  double t5434;
  double t5442;
  double t5447;
  double t5464;
  double t4540;
  double t4735;
  double t4763;
  double t4799;
  double t4841;
  double t4864;
  double t5253;
  double t5313;
  double t5327;
  double t5347;
  double t5376;
  double t5390;
  double t5554;
  double t5578;
  double t5586;
  double t5643;
  double t5664;
  double t5671;
  t2341 = Cos(var1[3]);
  t3005 = Cos(var1[5]);
  t3397 = Sin(var1[4]);
  t3027 = Sin(var1[3]);
  t3712 = Sin(var1[5]);
  t2563 = Cos(var1[6]);
  t4164 = t2341*t3005*t3397;
  t4307 = t3027*t3712;
  t4440 = t4164 + t4307;
  t3250 = -1.*t3005*t3027;
  t3858 = t2341*t3397*t3712;
  t3993 = t3250 + t3858;
  t4446 = Sin(var1[6]);
  t2220 = Cos(var1[8]);
  t4645 = t2563*t4440;
  t4719 = -1.*t3993*t4446;
  t4724 = t4645 + t4719;
  t2342 = Cos(var1[4]);
  t2365 = Cos(var1[7]);
  t2557 = t2341*t2342*t2365;
  t4010 = t2563*t3993;
  t4490 = t4440*t4446;
  t4495 = t4010 + t4490;
  t4515 = Sin(var1[7]);
  t4531 = t4495*t4515;
  t4532 = t2557 + t4531;
  t4734 = Sin(var1[8]);
  t2199 = Sin(var1[9]);
  t5141 = t3005*t3027*t3397;
  t5154 = -1.*t2341*t3712;
  t5199 = t5141 + t5154;
  t5005 = t2341*t3005;
  t5058 = t3027*t3397*t3712;
  t5069 = t5005 + t5058;
  t4777 = Cos(var1[9]);
  t5292 = t2563*t5199;
  t5294 = -1.*t5069*t4446;
  t5301 = t5292 + t5294;
  t4958 = t2342*t2365*t3027;
  t5082 = t2563*t5069;
  t5202 = t5199*t4446;
  t5209 = t5082 + t5202;
  t5212 = t5209*t4515;
  t5234 = t4958 + t5212;
  t5567 = t2342*t3005*t2563;
  t5570 = -1.*t2342*t3712*t4446;
  t5573 = t5567 + t5570;
  t5407 = -1.*t2365*t3397;
  t5414 = t2342*t2563*t3712;
  t5434 = t2342*t3005*t4446;
  t5442 = t5414 + t5434;
  t5447 = t5442*t4515;
  t5464 = t5407 + t5447;
  t4540 = t2220*t4532;
  t4735 = t4724*t4734;
  t4763 = t4540 + t4735;
  t4799 = t2220*t4724;
  t4841 = -1.*t4532*t4734;
  t4864 = t4799 + t4841;
  t5253 = t2220*t5234;
  t5313 = t5301*t4734;
  t5327 = t5253 + t5313;
  t5347 = t2220*t5301;
  t5376 = -1.*t5234*t4734;
  t5390 = t5347 + t5376;
  t5554 = t2220*t5464;
  t5578 = t5573*t4734;
  t5586 = t5554 + t5578;
  t5643 = t2220*t5573;
  t5664 = -1.*t5464*t4734;
  t5671 = t5643 + t5664;

  p_output1(0)=t2199*t4763 - 1.*t4777*t4864;
  p_output1(1)=t2199*t5327 - 1.*t4777*t5390;
  p_output1(2)=t2199*t5586 - 1.*t4777*t5671;
  p_output1(3)=t4763*t4777 + t2199*t4864;
  p_output1(4)=t4777*t5327 + t2199*t5390;
  p_output1(5)=t4777*t5586 + t2199*t5671;
  p_output1(6)=-1.*t2365*t4495 + t2341*t2342*t4515;
  p_output1(7)=t2342*t3027*t4515 - 1.*t2365*t5209;
  p_output1(8)=-1.*t3397*t4515 - 1.*t2365*t5442;
}


       
Eigen::Matrix<double,3,3> R_knee_joint_left(const Eigen::Matrix<double,20,1> &var1)
//void R_knee_joint_left(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



