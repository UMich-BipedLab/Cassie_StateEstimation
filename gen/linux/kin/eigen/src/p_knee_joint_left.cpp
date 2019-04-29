/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:14 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_joint_left.h"

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
  double t3414;
  double t2620;
  double t3430;
  double t2712;
  double t4374;
  double t274;
  double t2964;
  double t4430;
  double t4714;
  double t5189;
  double t5236;
  double t5278;
  double t5491;
  double t6094;
  double t6100;
  double t6127;
  double t6134;
  double t5944;
  double t5959;
  double t6033;
  double t6159;
  double t6278;
  double t6283;
  double t6295;
  double t6315;
  double t6264;
  double t6274;
  double t6276;
  double t6378;
  double t6389;
  double t6409;
  double t6439;
  double t6441;
  double t6467;
  double t6477;
  double t6480;
  double t6482;
  double t6484;
  double t6528;
  double t6532;
  double t6536;
  double t719;
  double t886;
  double t1680;
  double t2384;
  double t5512;
  double t5521;
  double t6574;
  double t6575;
  double t6587;
  double t6594;
  double t6598;
  double t6600;
  double t6132;
  double t6139;
  double t6146;
  double t6175;
  double t6183;
  double t6188;
  double t6619;
  double t6629;
  double t6638;
  double t6298;
  double t6328;
  double t6335;
  double t6410;
  double t6428;
  double t6436;
  double t6469;
  double t6478;
  double t6479;
  double t6664;
  double t6667;
  double t6690;
  double t6713;
  double t6717;
  double t6721;
  double t6501;
  double t6504;
  double t6506;
  double t6741;
  double t6747;
  double t6752;
  double t6776;
  double t6786;
  double t6793;
  double t6886;
  double t6897;
  double t6898;
  double t6920;
  double t6924;
  double t6929;
  double t6936;
  double t6947;
  double t6952;
  double t6962;
  double t6967;
  double t6968;
  double t6974;
  double t6975;
  double t6979;
  t3414 = Cos(var1[3]);
  t2620 = Cos(var1[5]);
  t3430 = Sin(var1[4]);
  t2712 = Sin(var1[3]);
  t4374 = Sin(var1[5]);
  t274 = Cos(var1[6]);
  t2964 = -1.*t2620*t2712;
  t4430 = t3414*t3430*t4374;
  t4714 = t2964 + t4430;
  t5189 = t3414*t2620*t3430;
  t5236 = t2712*t4374;
  t5278 = t5189 + t5236;
  t5491 = Sin(var1[6]);
  t6094 = Cos(var1[7]);
  t6100 = -1.*t6094;
  t6127 = 1. + t6100;
  t6134 = Sin(var1[7]);
  t5944 = t274*t4714;
  t5959 = t5278*t5491;
  t6033 = t5944 + t5959;
  t6159 = Cos(var1[4]);
  t6278 = Cos(var1[8]);
  t6283 = -1.*t6278;
  t6295 = 1. + t6283;
  t6315 = Sin(var1[8]);
  t6264 = t3414*t6159*t6094;
  t6274 = t6033*t6134;
  t6276 = t6264 + t6274;
  t6378 = t274*t5278;
  t6389 = -1.*t4714*t5491;
  t6409 = t6378 + t6389;
  t6439 = Cos(var1[9]);
  t6441 = -1.*t6439;
  t6467 = 1. + t6441;
  t6477 = Sin(var1[9]);
  t6480 = t6278*t6276;
  t6482 = t6409*t6315;
  t6484 = t6480 + t6482;
  t6528 = t6278*t6409;
  t6532 = -1.*t6276*t6315;
  t6536 = t6528 + t6532;
  t719 = -1.*t274;
  t886 = 1. + t719;
  t1680 = 0.135*t886;
  t2384 = 0. + t1680;
  t5512 = -0.135*t5491;
  t5521 = 0. + t5512;
  t6574 = t3414*t2620;
  t6575 = t2712*t3430*t4374;
  t6587 = t6574 + t6575;
  t6594 = t2620*t2712*t3430;
  t6598 = -1.*t3414*t4374;
  t6600 = t6594 + t6598;
  t6132 = 0.135*t6127;
  t6139 = 0.049*t6134;
  t6146 = 0. + t6132 + t6139;
  t6175 = -0.049*t6127;
  t6183 = 0.135*t6134;
  t6188 = 0. + t6175 + t6183;
  t6619 = t274*t6587;
  t6629 = t6600*t5491;
  t6638 = t6619 + t6629;
  t6298 = -0.049*t6295;
  t6328 = -0.09*t6315;
  t6335 = 0. + t6298 + t6328;
  t6410 = -0.09*t6295;
  t6428 = 0.049*t6315;
  t6436 = 0. + t6410 + t6428;
  t6469 = -0.049*t6467;
  t6478 = -0.21*t6477;
  t6479 = 0. + t6469 + t6478;
  t6664 = t6159*t6094*t2712;
  t6667 = t6638*t6134;
  t6690 = t6664 + t6667;
  t6713 = t274*t6600;
  t6717 = -1.*t6587*t5491;
  t6721 = t6713 + t6717;
  t6501 = -0.21*t6467;
  t6504 = 0.049*t6477;
  t6506 = 0. + t6501 + t6504;
  t6741 = t6278*t6690;
  t6747 = t6721*t6315;
  t6752 = t6741 + t6747;
  t6776 = t6278*t6721;
  t6786 = -1.*t6690*t6315;
  t6793 = t6776 + t6786;
  t6886 = t6159*t274*t4374;
  t6897 = t6159*t2620*t5491;
  t6898 = t6886 + t6897;
  t6920 = -1.*t6094*t3430;
  t6924 = t6898*t6134;
  t6929 = t6920 + t6924;
  t6936 = t6159*t2620*t274;
  t6947 = -1.*t6159*t4374*t5491;
  t6952 = t6936 + t6947;
  t6962 = t6278*t6929;
  t6967 = t6952*t6315;
  t6968 = t6962 + t6967;
  t6974 = t6278*t6952;
  t6975 = -1.*t6929*t6315;
  t6979 = t6974 + t6975;

  p_output1(0)=0. + t2384*t4714 + t5278*t5521 + t6033*t6146 + 0.1305*(t6033*t6094 - 1.*t3414*t6134*t6159) + t3414*t6159*t6188 + t6276*t6335 + t6409*t6436 + t6479*t6484 + t6506*t6536 - 0.21*(-1.*t6477*t6484 + t6439*t6536) - 0.049*(t6439*t6484 + t6477*t6536) + var1(0);
  p_output1(1)=0. + t2712*t6159*t6188 + t2384*t6587 + t5521*t6600 + t6146*t6638 + 0.1305*(-1.*t2712*t6134*t6159 + t6094*t6638) + t6335*t6690 + t6436*t6721 + t6479*t6752 + t6506*t6793 - 0.21*(-1.*t6477*t6752 + t6439*t6793) - 0.049*(t6439*t6752 + t6477*t6793) + var1(1);
  p_output1(2)=0. + t2384*t4374*t6159 + t2620*t5521*t6159 - 1.*t3430*t6188 + t6146*t6898 + 0.1305*(t3430*t6134 + t6094*t6898) + t6335*t6929 + t6436*t6952 + t6479*t6968 + t6506*t6979 - 0.21*(-1.*t6477*t6968 + t6439*t6979) - 0.049*(t6439*t6968 + t6477*t6979) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_knee_joint_left(const Eigen::Matrix<double,20,1> &var1)
//void p_knee_joint_left(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



