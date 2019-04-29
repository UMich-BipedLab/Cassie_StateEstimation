/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:21:42 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_rotation_left.h"

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
  double t856;
  double t1529;
  double t842;
  double t876;
  double t1780;
  double t772;
  double t3475;
  double t5240;
  double t3094;
  double t3180;
  double t3425;
  double t1476;
  double t2302;
  double t2477;
  double t5392;
  double t4844;
  double t4917;
  double t4920;
  double t3655;
  double t3913;
  double t4150;
  double t5520;
  double t5429;
  double t5444;
  double t5453;
  double t5561;
  double t5569;
  double t5575;
  double t5637;
  double t5649;
  double t5650;
  t856 = Cos(var1[5]);
  t1529 = Sin(var1[3]);
  t842 = Cos(var1[3]);
  t876 = Sin(var1[4]);
  t1780 = Sin(var1[5]);
  t772 = Cos(var1[6]);
  t3475 = Sin(var1[6]);
  t5240 = Cos(var1[4]);
  t3094 = -1.*t856*t1529;
  t3180 = t842*t876*t1780;
  t3425 = t3094 + t3180;
  t1476 = t842*t856*t876;
  t2302 = t1529*t1780;
  t2477 = t1476 + t2302;
  t5392 = Cos(var1[7]);
  t4844 = t842*t856;
  t4917 = t1529*t876*t1780;
  t4920 = t4844 + t4917;
  t3655 = t856*t1529*t876;
  t3913 = -1.*t842*t1780;
  t4150 = t3655 + t3913;
  t5520 = Sin(var1[7]);
  t5429 = t772*t3425;
  t5444 = t2477*t3475;
  t5453 = t5429 + t5444;
  t5561 = t772*t4920;
  t5569 = t4150*t3475;
  t5575 = t5561 + t5569;
  t5637 = t5240*t772*t1780;
  t5649 = t5240*t856*t3475;
  t5650 = t5637 + t5649;

  p_output1(0)=t3425*t3475 - 1.*t2477*t772;
  p_output1(1)=t3475*t4920 - 1.*t4150*t772;
  p_output1(2)=t1780*t3475*t5240 - 1.*t5240*t772*t856;
  p_output1(3)=t5453*t5520 + t5240*t5392*t842;
  p_output1(4)=t1529*t5240*t5392 + t5520*t5575;
  p_output1(5)=t5520*t5650 - 1.*t5392*t876;
  p_output1(6)=-1.*t5392*t5453 + t5240*t5520*t842;
  p_output1(7)=t1529*t5240*t5520 - 1.*t5392*t5575;
  p_output1(8)=-1.*t5392*t5650 - 1.*t5520*t876;
}


       
Eigen::Matrix<double,3,3> R_hip_rotation_left(const Eigen::Matrix<double,20,1> &var1)
//void R_hip_rotation_left(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



