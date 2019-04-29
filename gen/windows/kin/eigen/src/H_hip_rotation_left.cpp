/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:21:41 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_rotation_left.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t725;
  double t1075;
  double t649;
  double t760;
  double t1104;
  double t246;
  double t1466;
  double t2642;
  double t1370;
  double t1372;
  double t1422;
  double t826;
  double t1196;
  double t1212;
  double t2873;
  double t2236;
  double t2238;
  double t2268;
  double t2055;
  double t2111;
  double t2133;
  double t3467;
  double t3094;
  double t3180;
  double t3330;
  double t4150;
  double t4190;
  double t4268;
  double t4704;
  double t4720;
  double t4840;
  double t5593;
  double t5596;
  double t3058;
  double t3486;
  double t3566;
  double t5396;
  double t5401;
  double t5428;
  double t5429;
  double t5453;
  double t5520;
  double t5620;
  double t5624;
  double t5637;
  double t5650;
  double t5656;
  double t5663;
  double t3625;
  double t4438;
  double t4485;
  double t4569;
  double t4844;
  double t5065;
  t725 = Cos(var1[5]);
  t1075 = Sin(var1[3]);
  t649 = Cos(var1[3]);
  t760 = Sin(var1[4]);
  t1104 = Sin(var1[5]);
  t246 = Cos(var1[6]);
  t1466 = Sin(var1[6]);
  t2642 = Cos(var1[4]);
  t1370 = -1.*t725*t1075;
  t1372 = t649*t760*t1104;
  t1422 = t1370 + t1372;
  t826 = t649*t725*t760;
  t1196 = t1075*t1104;
  t1212 = t826 + t1196;
  t2873 = Cos(var1[7]);
  t2236 = t649*t725;
  t2238 = t1075*t760*t1104;
  t2268 = t2236 + t2238;
  t2055 = t725*t1075*t760;
  t2111 = -1.*t649*t1104;
  t2133 = t2055 + t2111;
  t3467 = Sin(var1[7]);
  t3094 = t246*t1422;
  t3180 = t1212*t1466;
  t3330 = t3094 + t3180;
  t4150 = t246*t2268;
  t4190 = t2133*t1466;
  t4268 = t4150 + t4190;
  t4704 = t2642*t246*t1104;
  t4720 = t2642*t725*t1466;
  t4840 = t4704 + t4720;
  t5593 = -1.*t2873;
  t5596 = 1. + t5593;
  t3058 = t649*t2642*t2873;
  t3486 = t3330*t3467;
  t3566 = t3058 + t3486;
  t5396 = -1.*t246;
  t5401 = 1. + t5396;
  t5428 = 0.135*t5401;
  t5429 = 0. + t5428;
  t5453 = -0.135*t1466;
  t5520 = 0. + t5453;
  t5620 = 0.135*t5596;
  t5624 = 0.049*t3467;
  t5637 = 0. + t5620 + t5624;
  t5650 = -0.049*t5596;
  t5656 = 0.135*t3467;
  t5663 = 0. + t5650 + t5656;
  t3625 = t2642*t2873*t1075;
  t4438 = t4268*t3467;
  t4485 = t3625 + t4438;
  t4569 = -1.*t2873*t760;
  t4844 = t4840*t3467;
  t5065 = t4569 + t4844;

  p_output1(0)=t1422*t1466 - 1.*t1212*t246;
  p_output1(1)=t1466*t2268 - 1.*t2133*t246;
  p_output1(2)=t1104*t1466*t2642 - 1.*t246*t2642*t725;
  p_output1(3)=0.;
  p_output1(4)=t3566;
  p_output1(5)=t4485;
  p_output1(6)=t5065;
  p_output1(7)=0.;
  p_output1(8)=-1.*t2873*t3330 + t2642*t3467*t649;
  p_output1(9)=t1075*t2642*t3467 - 1.*t2873*t4268;
  p_output1(10)=-1.*t2873*t4840 - 1.*t3467*t760;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.09*(-1.*t1422*t1466 + t1212*t246) - 0.049*t3566 + t1422*t5429 + t1212*t5520 + t3330*t5637 + t2642*t5663*t649 + 0.135*(t2873*t3330 - 1.*t2642*t3467*t649) + var1(0);
  p_output1(13)=0. - 0.09*(-1.*t1466*t2268 + t2133*t246) + 0.135*(-1.*t1075*t2642*t3467 + t2873*t4268) - 0.049*t4485 + t2268*t5429 + t2133*t5520 + t4268*t5637 + t1075*t2642*t5663 + var1(1);
  p_output1(14)=0. - 0.049*t5065 + t1104*t2642*t5429 + t4840*t5637 + t2642*t5520*t725 - 0.09*(-1.*t1104*t1466*t2642 + t246*t2642*t725) - 1.*t5663*t760 + 0.135*(t2873*t4840 + t3467*t760) + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_hip_rotation_left(const Eigen::Matrix<double,20,1> &var1)
//void H_hip_rotation_left(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



