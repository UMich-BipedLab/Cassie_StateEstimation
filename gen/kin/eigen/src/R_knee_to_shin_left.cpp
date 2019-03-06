/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:17 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_to_shin_left.h"

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
  double t384;
  double t1899;
  double t2699;
  double t2629;
  double t2843;
  double t1688;
  double t3818;
  double t3855;
  double t4005;
  double t2632;
  double t2896;
  double t3412;
  double t4084;
  double t354;
  double t4771;
  double t4777;
  double t4788;
  double t386;
  double t938;
  double t1493;
  double t3753;
  double t4096;
  double t4407;
  double t4455;
  double t4595;
  double t4631;
  double t4818;
  double t4861;
  double t4732;
  double t4833;
  double t4835;
  double t271;
  double t4908;
  double t4910;
  double t4917;
  double t130;
  double t5507;
  double t5508;
  double t5525;
  double t5421;
  double t5430;
  double t5441;
  double t5762;
  double t5804;
  double t5836;
  double t5386;
  double t5461;
  double t5596;
  double t5659;
  double t5691;
  double t5735;
  double t5172;
  double t5748;
  double t5843;
  double t5878;
  double t6004;
  double t6027;
  double t6037;
  double t6319;
  double t6349;
  double t6359;
  double t6234;
  double t6241;
  double t6252;
  double t6273;
  double t6279;
  double t6302;
  double t6308;
  double t6374;
  double t6385;
  double t6402;
  double t6457;
  double t6458;
  double t4842;
  double t5133;
  double t5144;
  double t5174;
  double t5210;
  double t5222;
  double t5951;
  double t6038;
  double t6083;
  double t6129;
  double t6173;
  double t6200;
  double t6393;
  double t6470;
  double t6478;
  double t6496;
  double t6511;
  double t6591;
  t384 = Cos(var1[3]);
  t1899 = Cos(var1[5]);
  t2699 = Sin(var1[4]);
  t2629 = Sin(var1[3]);
  t2843 = Sin(var1[5]);
  t1688 = Cos(var1[6]);
  t3818 = t384*t1899*t2699;
  t3855 = t2629*t2843;
  t4005 = t3818 + t3855;
  t2632 = -1.*t1899*t2629;
  t2896 = t384*t2699*t2843;
  t3412 = t2632 + t2896;
  t4084 = Sin(var1[6]);
  t354 = Cos(var1[8]);
  t4771 = t1688*t4005;
  t4777 = -1.*t3412*t4084;
  t4788 = t4771 + t4777;
  t386 = Cos(var1[4]);
  t938 = Cos(var1[7]);
  t1493 = t384*t386*t938;
  t3753 = t1688*t3412;
  t4096 = t4005*t4084;
  t4407 = t3753 + t4096;
  t4455 = Sin(var1[7]);
  t4595 = t4407*t4455;
  t4631 = t1493 + t4595;
  t4818 = Sin(var1[8]);
  t4861 = Cos(var1[9]);
  t4732 = t354*t4631;
  t4833 = t4788*t4818;
  t4835 = t4732 + t4833;
  t271 = Sin(var1[9]);
  t4908 = t354*t4788;
  t4910 = -1.*t4631*t4818;
  t4917 = t4908 + t4910;
  t130 = Cos(var1[10]);
  t5507 = t1899*t2629*t2699;
  t5508 = -1.*t384*t2843;
  t5525 = t5507 + t5508;
  t5421 = t384*t1899;
  t5430 = t2629*t2699*t2843;
  t5441 = t5421 + t5430;
  t5762 = t1688*t5525;
  t5804 = -1.*t5441*t4084;
  t5836 = t5762 + t5804;
  t5386 = t386*t938*t2629;
  t5461 = t1688*t5441;
  t5596 = t5525*t4084;
  t5659 = t5461 + t5596;
  t5691 = t5659*t4455;
  t5735 = t5386 + t5691;
  t5172 = Sin(var1[10]);
  t5748 = t354*t5735;
  t5843 = t5836*t4818;
  t5878 = t5748 + t5843;
  t6004 = t354*t5836;
  t6027 = -1.*t5735*t4818;
  t6037 = t6004 + t6027;
  t6319 = t386*t1899*t1688;
  t6349 = -1.*t386*t2843*t4084;
  t6359 = t6319 + t6349;
  t6234 = -1.*t938*t2699;
  t6241 = t386*t1688*t2843;
  t6252 = t386*t1899*t4084;
  t6273 = t6241 + t6252;
  t6279 = t6273*t4455;
  t6302 = t6234 + t6279;
  t6308 = t354*t6302;
  t6374 = t6359*t4818;
  t6385 = t6308 + t6374;
  t6402 = t354*t6359;
  t6457 = -1.*t6302*t4818;
  t6458 = t6402 + t6457;
  t4842 = -1.*t271*t4835;
  t5133 = t4861*t4917;
  t5144 = t4842 + t5133;
  t5174 = t4861*t4835;
  t5210 = t271*t4917;
  t5222 = t5174 + t5210;
  t5951 = -1.*t271*t5878;
  t6038 = t4861*t6037;
  t6083 = t5951 + t6038;
  t6129 = t4861*t5878;
  t6173 = t271*t6037;
  t6200 = t6129 + t6173;
  t6393 = -1.*t271*t6385;
  t6470 = t4861*t6458;
  t6478 = t6393 + t6470;
  t6496 = t4861*t6385;
  t6511 = t271*t6458;
  t6591 = t6496 + t6511;

  p_output1(0)=-1.*t130*t5144 + t5172*t5222;
  p_output1(1)=-1.*t130*t6083 + t5172*t6200;
  p_output1(2)=-1.*t130*t6478 + t5172*t6591;
  p_output1(3)=t5144*t5172 + t130*t5222;
  p_output1(4)=t5172*t6083 + t130*t6200;
  p_output1(5)=t5172*t6478 + t130*t6591;
  p_output1(6)=t384*t386*t4455 - 1.*t4407*t938;
  p_output1(7)=t2629*t386*t4455 - 1.*t5659*t938;
  p_output1(8)=-1.*t2699*t4455 - 1.*t6273*t938;
}


       
Eigen::Matrix<double,3,3> R_knee_to_shin_left(const Eigen::Matrix<double,20,1> &var1)
//void R_knee_to_shin_left(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



