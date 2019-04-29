/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:21:48 GMT-04:00
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
  double t1151;
  double t766;
  double t2964;
  double t940;
  double t2966;
  double t158;
  double t1072;
  double t3152;
  double t3314;
  double t3743;
  double t4353;
  double t5383;
  double t5439;
  double t6100;
  double t6111;
  double t6128;
  double t6134;
  double t5957;
  double t6024;
  double t6045;
  double t6166;
  double t6248;
  double t6250;
  double t6252;
  double t6258;
  double t6204;
  double t6205;
  double t6223;
  double t6278;
  double t6279;
  double t6313;
  double t6351;
  double t6364;
  double t6372;
  double t6382;
  double t6419;
  double t6430;
  double t6443;
  double t6455;
  double t6465;
  double t6470;
  double t163;
  double t169;
  double t171;
  double t620;
  double t5759;
  double t5928;
  double t6530;
  double t6531;
  double t6539;
  double t6567;
  double t6571;
  double t6574;
  double t6131;
  double t6140;
  double t6145;
  double t6168;
  double t6169;
  double t6183;
  double t6600;
  double t6601;
  double t6602;
  double t6254;
  double t6267;
  double t6270;
  double t6316;
  double t6319;
  double t6321;
  double t6376;
  double t6398;
  double t6405;
  double t6703;
  double t6708;
  double t6709;
  double t6716;
  double t6724;
  double t6726;
  double t6445;
  double t6451;
  double t6454;
  double t6733;
  double t6735;
  double t6737;
  double t6740;
  double t6746;
  double t6750;
  double t6826;
  double t6828;
  double t6831;
  double t6862;
  double t6864;
  double t6865;
  double t6874;
  double t6882;
  double t6885;
  double t6899;
  double t6900;
  double t6902;
  double t6910;
  double t6911;
  double t6913;
  t1151 = Cos(var1[3]);
  t766 = Cos(var1[5]);
  t2964 = Sin(var1[4]);
  t940 = Sin(var1[3]);
  t2966 = Sin(var1[5]);
  t158 = Cos(var1[6]);
  t1072 = -1.*t766*t940;
  t3152 = t1151*t2964*t2966;
  t3314 = t1072 + t3152;
  t3743 = t1151*t766*t2964;
  t4353 = t940*t2966;
  t5383 = t3743 + t4353;
  t5439 = Sin(var1[6]);
  t6100 = Cos(var1[7]);
  t6111 = -1.*t6100;
  t6128 = 1. + t6111;
  t6134 = Sin(var1[7]);
  t5957 = t158*t3314;
  t6024 = t5383*t5439;
  t6045 = t5957 + t6024;
  t6166 = Cos(var1[4]);
  t6248 = Cos(var1[8]);
  t6250 = -1.*t6248;
  t6252 = 1. + t6250;
  t6258 = Sin(var1[8]);
  t6204 = t1151*t6166*t6100;
  t6205 = t6045*t6134;
  t6223 = t6204 + t6205;
  t6278 = t158*t5383;
  t6279 = -1.*t3314*t5439;
  t6313 = t6278 + t6279;
  t6351 = Cos(var1[9]);
  t6364 = -1.*t6351;
  t6372 = 1. + t6364;
  t6382 = Sin(var1[9]);
  t6419 = t6248*t6223;
  t6430 = t6313*t6258;
  t6443 = t6419 + t6430;
  t6455 = t6248*t6313;
  t6465 = -1.*t6223*t6258;
  t6470 = t6455 + t6465;
  t163 = -1.*t158;
  t169 = 1. + t163;
  t171 = 0.135*t169;
  t620 = 0. + t171;
  t5759 = -0.135*t5439;
  t5928 = 0. + t5759;
  t6530 = t1151*t766;
  t6531 = t940*t2964*t2966;
  t6539 = t6530 + t6531;
  t6567 = t766*t940*t2964;
  t6571 = -1.*t1151*t2966;
  t6574 = t6567 + t6571;
  t6131 = 0.135*t6128;
  t6140 = 0.049*t6134;
  t6145 = 0. + t6131 + t6140;
  t6168 = -0.049*t6128;
  t6169 = 0.135*t6134;
  t6183 = 0. + t6168 + t6169;
  t6600 = t158*t6539;
  t6601 = t6574*t5439;
  t6602 = t6600 + t6601;
  t6254 = -0.049*t6252;
  t6267 = -0.09*t6258;
  t6270 = 0. + t6254 + t6267;
  t6316 = -0.09*t6252;
  t6319 = 0.049*t6258;
  t6321 = 0. + t6316 + t6319;
  t6376 = -0.049*t6372;
  t6398 = -0.21*t6382;
  t6405 = 0. + t6376 + t6398;
  t6703 = t6166*t6100*t940;
  t6708 = t6602*t6134;
  t6709 = t6703 + t6708;
  t6716 = t158*t6574;
  t6724 = -1.*t6539*t5439;
  t6726 = t6716 + t6724;
  t6445 = -0.21*t6372;
  t6451 = 0.049*t6382;
  t6454 = 0. + t6445 + t6451;
  t6733 = t6248*t6709;
  t6735 = t6726*t6258;
  t6737 = t6733 + t6735;
  t6740 = t6248*t6726;
  t6746 = -1.*t6709*t6258;
  t6750 = t6740 + t6746;
  t6826 = t6166*t158*t2966;
  t6828 = t6166*t766*t5439;
  t6831 = t6826 + t6828;
  t6862 = -1.*t6100*t2964;
  t6864 = t6831*t6134;
  t6865 = t6862 + t6864;
  t6874 = t6166*t766*t158;
  t6882 = -1.*t6166*t2966*t5439;
  t6885 = t6874 + t6882;
  t6899 = t6248*t6865;
  t6900 = t6885*t6258;
  t6902 = t6899 + t6900;
  t6910 = t6248*t6885;
  t6911 = -1.*t6865*t6258;
  t6913 = t6910 + t6911;

  p_output1(0)=0. + t5383*t5928 + t6045*t6145 + 0.1305*(t6045*t6100 - 1.*t1151*t6134*t6166) + t1151*t6166*t6183 + t3314*t620 + t6223*t6270 + t6313*t6321 + t6405*t6443 + t6454*t6470 - 0.21*(-1.*t6382*t6443 + t6351*t6470) - 0.049*(t6351*t6443 + t6382*t6470) + var1(0);
  p_output1(1)=0. + t620*t6539 + t5928*t6574 + t6145*t6602 + t6270*t6709 + t6321*t6726 + t6405*t6737 + t6454*t6750 - 0.21*(-1.*t6382*t6737 + t6351*t6750) - 0.049*(t6351*t6737 + t6382*t6750) + t6166*t6183*t940 + 0.1305*(t6100*t6602 - 1.*t6134*t6166*t940) + var1(1);
  p_output1(2)=0. - 1.*t2964*t6183 + t2966*t6166*t620 + t6145*t6831 + 0.1305*(t2964*t6134 + t6100*t6831) + t6270*t6865 + t6321*t6885 + t6405*t6902 + t6454*t6913 - 0.21*(-1.*t6382*t6902 + t6351*t6913) - 0.049*(t6351*t6902 + t6382*t6913) + t5928*t6166*t766 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_knee_joint_left(const Eigen::Matrix<double,20,1> &var1)
//void p_knee_joint_left(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



