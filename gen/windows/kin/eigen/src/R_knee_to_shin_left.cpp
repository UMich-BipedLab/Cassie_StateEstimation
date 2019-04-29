/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:21:57 GMT-04:00
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
  double t1047;
  double t2320;
  double t2430;
  double t2398;
  double t2497;
  double t2091;
  double t3491;
  double t3557;
  double t3592;
  double t2419;
  double t2581;
  double t2629;
  double t3652;
  double t783;
  double t4352;
  double t4397;
  double t4410;
  double t1100;
  double t1112;
  double t1669;
  double t2969;
  double t3675;
  double t4143;
  double t4193;
  double t4285;
  double t4317;
  double t4449;
  double t4494;
  double t4340;
  double t4461;
  double t4478;
  double t226;
  double t4575;
  double t4616;
  double t4619;
  double t165;
  double t4796;
  double t4819;
  double t4838;
  double t4745;
  double t4765;
  double t4791;
  double t4862;
  double t4867;
  double t4893;
  double t4738;
  double t4792;
  double t4839;
  double t4845;
  double t4848;
  double t4852;
  double t4659;
  double t4854;
  double t4902;
  double t4928;
  double t4956;
  double t4970;
  double t5032;
  double t5329;
  double t5357;
  double t5368;
  double t5179;
  double t5207;
  double t5215;
  double t5228;
  double t5249;
  double t5284;
  double t5309;
  double t5393;
  double t5397;
  double t5417;
  double t5441;
  double t5443;
  double t4483;
  double t4622;
  double t4647;
  double t4660;
  double t4677;
  double t4696;
  double t4951;
  double t5036;
  double t5043;
  double t5051;
  double t5114;
  double t5130;
  double t5405;
  double t5448;
  double t5456;
  double t5482;
  double t5489;
  double t5493;
  t1047 = Cos(var1[3]);
  t2320 = Cos(var1[5]);
  t2430 = Sin(var1[4]);
  t2398 = Sin(var1[3]);
  t2497 = Sin(var1[5]);
  t2091 = Cos(var1[6]);
  t3491 = t1047*t2320*t2430;
  t3557 = t2398*t2497;
  t3592 = t3491 + t3557;
  t2419 = -1.*t2320*t2398;
  t2581 = t1047*t2430*t2497;
  t2629 = t2419 + t2581;
  t3652 = Sin(var1[6]);
  t783 = Cos(var1[8]);
  t4352 = t2091*t3592;
  t4397 = -1.*t2629*t3652;
  t4410 = t4352 + t4397;
  t1100 = Cos(var1[4]);
  t1112 = Cos(var1[7]);
  t1669 = t1047*t1100*t1112;
  t2969 = t2091*t2629;
  t3675 = t3592*t3652;
  t4143 = t2969 + t3675;
  t4193 = Sin(var1[7]);
  t4285 = t4143*t4193;
  t4317 = t1669 + t4285;
  t4449 = Sin(var1[8]);
  t4494 = Cos(var1[9]);
  t4340 = t783*t4317;
  t4461 = t4410*t4449;
  t4478 = t4340 + t4461;
  t226 = Sin(var1[9]);
  t4575 = t783*t4410;
  t4616 = -1.*t4317*t4449;
  t4619 = t4575 + t4616;
  t165 = Cos(var1[10]);
  t4796 = t2320*t2398*t2430;
  t4819 = -1.*t1047*t2497;
  t4838 = t4796 + t4819;
  t4745 = t1047*t2320;
  t4765 = t2398*t2430*t2497;
  t4791 = t4745 + t4765;
  t4862 = t2091*t4838;
  t4867 = -1.*t4791*t3652;
  t4893 = t4862 + t4867;
  t4738 = t1100*t1112*t2398;
  t4792 = t2091*t4791;
  t4839 = t4838*t3652;
  t4845 = t4792 + t4839;
  t4848 = t4845*t4193;
  t4852 = t4738 + t4848;
  t4659 = Sin(var1[10]);
  t4854 = t783*t4852;
  t4902 = t4893*t4449;
  t4928 = t4854 + t4902;
  t4956 = t783*t4893;
  t4970 = -1.*t4852*t4449;
  t5032 = t4956 + t4970;
  t5329 = t1100*t2320*t2091;
  t5357 = -1.*t1100*t2497*t3652;
  t5368 = t5329 + t5357;
  t5179 = -1.*t1112*t2430;
  t5207 = t1100*t2091*t2497;
  t5215 = t1100*t2320*t3652;
  t5228 = t5207 + t5215;
  t5249 = t5228*t4193;
  t5284 = t5179 + t5249;
  t5309 = t783*t5284;
  t5393 = t5368*t4449;
  t5397 = t5309 + t5393;
  t5417 = t783*t5368;
  t5441 = -1.*t5284*t4449;
  t5443 = t5417 + t5441;
  t4483 = -1.*t226*t4478;
  t4622 = t4494*t4619;
  t4647 = t4483 + t4622;
  t4660 = t4494*t4478;
  t4677 = t226*t4619;
  t4696 = t4660 + t4677;
  t4951 = -1.*t226*t4928;
  t5036 = t4494*t5032;
  t5043 = t4951 + t5036;
  t5051 = t4494*t4928;
  t5114 = t226*t5032;
  t5130 = t5051 + t5114;
  t5405 = -1.*t226*t5397;
  t5448 = t4494*t5443;
  t5456 = t5405 + t5448;
  t5482 = t4494*t5397;
  t5489 = t226*t5443;
  t5493 = t5482 + t5489;

  p_output1(0)=-1.*t165*t4647 + t4659*t4696;
  p_output1(1)=-1.*t165*t5043 + t4659*t5130;
  p_output1(2)=-1.*t165*t5456 + t4659*t5493;
  p_output1(3)=t4647*t4659 + t165*t4696;
  p_output1(4)=t4659*t5043 + t165*t5130;
  p_output1(5)=t4659*t5456 + t165*t5493;
  p_output1(6)=-1.*t1112*t4143 + t1047*t1100*t4193;
  p_output1(7)=t1100*t2398*t4193 - 1.*t1112*t4845;
  p_output1(8)=-1.*t2430*t4193 - 1.*t1112*t5228;
}


       
Eigen::Matrix<double,3,3> R_knee_to_shin_left(const Eigen::Matrix<double,20,1> &var1)
//void R_knee_to_shin_left(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



