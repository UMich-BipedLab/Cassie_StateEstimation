/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_joint_right.h"

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
  double t2714;
  double t3076;
  double t2511;
  double t2929;
  double t3193;
  double t3825;
  double t3034;
  double t3750;
  double t3784;
  double t1689;
  double t4063;
  double t4201;
  double t4216;
  double t4249;
  double t3809;
  double t4221;
  double t4232;
  double t708;
  double t4263;
  double t4288;
  double t4326;
  double t4385;
  double t4416;
  double t4446;
  double t4473;
  double t4474;
  double t4477;
  double t416;
  double t4677;
  double t4680;
  double t4687;
  double t4722;
  double t4728;
  double t4737;
  double t4544;
  double t4696;
  double t4740;
  double t4751;
  double t4794;
  double t4798;
  double t4809;
  double t4814;
  double t4826;
  double t4838;
  double t5034;
  double t5041;
  double t5048;
  double t5062;
  double t5063;
  double t5073;
  double t5086;
  double t5094;
  double t5140;
  double t4236;
  double t4519;
  double t4537;
  double t4601;
  double t4623;
  double t4635;
  double t4792;
  double t4839;
  double t4849;
  double t4874;
  double t4977;
  double t4986;
  double t5051;
  double t5150;
  double t5152;
  double t5169;
  double t5255;
  double t5265;
  t2714 = Cos(var1[5]);
  t3076 = Sin(var1[3]);
  t2511 = Cos(var1[3]);
  t2929 = Sin(var1[4]);
  t3193 = Sin(var1[5]);
  t3825 = Sin(var1[13]);
  t3034 = t2511*t2714*t2929;
  t3750 = t3076*t3193;
  t3784 = t3034 + t3750;
  t1689 = Cos(var1[13]);
  t4063 = -1.*t2714*t3076;
  t4201 = t2511*t2929*t3193;
  t4216 = t4063 + t4201;
  t4249 = Cos(var1[15]);
  t3809 = t1689*t3784;
  t4221 = -1.*t3825*t4216;
  t4232 = t3809 + t4221;
  t708 = Sin(var1[15]);
  t4263 = Cos(var1[14]);
  t4288 = Cos(var1[4]);
  t4326 = t4263*t2511*t4288;
  t4385 = Sin(var1[14]);
  t4416 = t3825*t3784;
  t4446 = t1689*t4216;
  t4473 = t4416 + t4446;
  t4474 = t4385*t4473;
  t4477 = t4326 + t4474;
  t416 = Sin(var1[16]);
  t4677 = t2714*t3076*t2929;
  t4680 = -1.*t2511*t3193;
  t4687 = t4677 + t4680;
  t4722 = t2511*t2714;
  t4728 = t3076*t2929*t3193;
  t4737 = t4722 + t4728;
  t4544 = Cos(var1[16]);
  t4696 = t1689*t4687;
  t4740 = -1.*t3825*t4737;
  t4751 = t4696 + t4740;
  t4794 = t4263*t4288*t3076;
  t4798 = t3825*t4687;
  t4809 = t1689*t4737;
  t4814 = t4798 + t4809;
  t4826 = t4385*t4814;
  t4838 = t4794 + t4826;
  t5034 = t1689*t4288*t2714;
  t5041 = -1.*t4288*t3825*t3193;
  t5048 = t5034 + t5041;
  t5062 = -1.*t4263*t2929;
  t5063 = t4288*t2714*t3825;
  t5073 = t1689*t4288*t3193;
  t5086 = t5063 + t5073;
  t5094 = t4385*t5086;
  t5140 = t5062 + t5094;
  t4236 = t708*t4232;
  t4519 = t4249*t4477;
  t4537 = t4236 + t4519;
  t4601 = t4249*t4232;
  t4623 = -1.*t708*t4477;
  t4635 = t4601 + t4623;
  t4792 = t708*t4751;
  t4839 = t4249*t4838;
  t4849 = t4792 + t4839;
  t4874 = t4249*t4751;
  t4977 = -1.*t708*t4838;
  t4986 = t4874 + t4977;
  t5051 = t708*t5048;
  t5150 = t4249*t5140;
  t5152 = t5051 + t5150;
  t5169 = t4249*t5048;
  t5255 = -1.*t708*t5140;
  t5265 = t5169 + t5255;

  p_output1(0)=t416*t4537 - 1.*t4544*t4635;
  p_output1(1)=t416*t4849 - 1.*t4544*t4986;
  p_output1(2)=t416*t5152 - 1.*t4544*t5265;
  p_output1(3)=t4537*t4544 + t416*t4635;
  p_output1(4)=t4544*t4849 + t416*t4986;
  p_output1(5)=t4544*t5152 + t416*t5265;
  p_output1(6)=t2511*t4288*t4385 - 1.*t4263*t4473;
  p_output1(7)=t3076*t4288*t4385 - 1.*t4263*t4814;
  p_output1(8)=-1.*t2929*t4385 - 1.*t4263*t5086;
}


       
Eigen::Matrix<double,3,3> R_knee_joint_right(const Eigen::Matrix<double,20,1> &var1)
//void R_knee_joint_right(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



