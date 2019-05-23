/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:09:51 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_flexion_right.h"

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
  double t904;
  double t1302;
  double t486;
  double t1083;
  double t1691;
  double t3242;
  double t1294;
  double t1747;
  double t2996;
  double t459;
  double t3447;
  double t3688;
  double t3698;
  double t360;
  double t4005;
  double t4083;
  double t4435;
  double t4456;
  double t4904;
  double t4908;
  double t4964;
  double t5093;
  double t5119;
  double t5140;
  double t3138;
  double t3984;
  double t3988;
  double t4453;
  double t4524;
  double t4612;
  double t4668;
  double t4802;
  double t4834;
  double t5076;
  double t5185;
  double t5322;
  double t5410;
  double t5457;
  double t5477;
  double t5519;
  double t5542;
  double t5543;
  double t5949;
  double t5994;
  double t6037;
  double t6173;
  double t6207;
  double t6281;
  double t6289;
  double t6349;
  double t6373;
  t904 = Cos(var1[5]);
  t1302 = Sin(var1[3]);
  t486 = Cos(var1[3]);
  t1083 = Sin(var1[4]);
  t1691 = Sin(var1[5]);
  t3242 = Sin(var1[13]);
  t1294 = t486*t904*t1083;
  t1747 = t1302*t1691;
  t2996 = t1294 + t1747;
  t459 = Cos(var1[13]);
  t3447 = -1.*t904*t1302;
  t3688 = t486*t1083*t1691;
  t3698 = t3447 + t3688;
  t360 = Cos(var1[15]);
  t4005 = Sin(var1[15]);
  t4083 = Cos(var1[14]);
  t4435 = Cos(var1[4]);
  t4456 = Sin(var1[14]);
  t4904 = t904*t1302*t1083;
  t4908 = -1.*t486*t1691;
  t4964 = t4904 + t4908;
  t5093 = t486*t904;
  t5119 = t1302*t1083*t1691;
  t5140 = t5093 + t5119;
  t3138 = t459*t2996;
  t3984 = -1.*t3242*t3698;
  t3988 = t3138 + t3984;
  t4453 = t4083*t486*t4435;
  t4524 = t3242*t2996;
  t4612 = t459*t3698;
  t4668 = t4524 + t4612;
  t4802 = t4456*t4668;
  t4834 = t4453 + t4802;
  t5076 = t459*t4964;
  t5185 = -1.*t3242*t5140;
  t5322 = t5076 + t5185;
  t5410 = t4083*t4435*t1302;
  t5457 = t3242*t4964;
  t5477 = t459*t5140;
  t5519 = t5457 + t5477;
  t5542 = t4456*t5519;
  t5543 = t5410 + t5542;
  t5949 = t459*t4435*t904;
  t5994 = -1.*t4435*t3242*t1691;
  t6037 = t5949 + t5994;
  t6173 = -1.*t4083*t1083;
  t6207 = t4435*t904*t3242;
  t6281 = t459*t4435*t1691;
  t6289 = t6207 + t6281;
  t6349 = t4456*t6289;
  t6373 = t6173 + t6349;

  p_output1(0)=-1.*t360*t3988 + t4005*t4834;
  p_output1(1)=-1.*t360*t5322 + t4005*t5543;
  p_output1(2)=-1.*t360*t6037 + t4005*t6373;
  p_output1(3)=t3988*t4005 + t360*t4834;
  p_output1(4)=t4005*t5322 + t360*t5543;
  p_output1(5)=t4005*t6037 + t360*t6373;
  p_output1(6)=-1.*t4083*t4668 + t4435*t4456*t486;
  p_output1(7)=t1302*t4435*t4456 - 1.*t4083*t5519;
  p_output1(8)=-1.*t1083*t4456 - 1.*t4083*t6289;
}


       
Eigen::Matrix<double,3,3> R_hip_flexion_right(const Eigen::Matrix<double,20,1> &var1)
//void R_hip_flexion_right(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



