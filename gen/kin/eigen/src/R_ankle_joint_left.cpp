/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:20 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_ankle_joint_left.h"

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
  double t1530;
  double t2286;
  double t2500;
  double t2393;
  double t2502;
  double t2261;
  double t3239;
  double t3313;
  double t3321;
  double t2414;
  double t3098;
  double t3150;
  double t3756;
  double t596;
  double t4056;
  double t4067;
  double t4125;
  double t1693;
  double t1971;
  double t1983;
  double t3161;
  double t3850;
  double t3873;
  double t3915;
  double t3929;
  double t3935;
  double t4134;
  double t4203;
  double t4040;
  double t4160;
  double t4195;
  double t576;
  double t4215;
  double t4250;
  double t4262;
  double t4329;
  double t4197;
  double t4266;
  double t4274;
  double t565;
  double t4350;
  double t4354;
  double t4369;
  double t314;
  double t4665;
  double t4690;
  double t4744;
  double t4573;
  double t4576;
  double t4630;
  double t4844;
  double t4850;
  double t4894;
  double t4557;
  double t4644;
  double t4775;
  double t4812;
  double t4813;
  double t4822;
  double t4825;
  double t4903;
  double t4915;
  double t4924;
  double t4936;
  double t4937;
  double t4465;
  double t4923;
  double t4938;
  double t4948;
  double t4952;
  double t4959;
  double t4961;
  double t5126;
  double t5149;
  double t5154;
  double t5069;
  double t5090;
  double t5098;
  double t5099;
  double t5106;
  double t5107;
  double t5120;
  double t5159;
  double t5188;
  double t5195;
  double t5198;
  double t5200;
  double t5190;
  double t5201;
  double t5202;
  double t5214;
  double t5259;
  double t5273;
  double t4310;
  double t4422;
  double t4424;
  double t4495;
  double t4502;
  double t4531;
  double t4951;
  double t4965;
  double t4970;
  double t5009;
  double t5029;
  double t5038;
  double t5206;
  double t5283;
  double t5284;
  double t5297;
  double t5305;
  double t5322;
  t1530 = Cos(var1[3]);
  t2286 = Cos(var1[5]);
  t2500 = Sin(var1[4]);
  t2393 = Sin(var1[3]);
  t2502 = Sin(var1[5]);
  t2261 = Cos(var1[6]);
  t3239 = t1530*t2286*t2500;
  t3313 = t2393*t2502;
  t3321 = t3239 + t3313;
  t2414 = -1.*t2286*t2393;
  t3098 = t1530*t2500*t2502;
  t3150 = t2414 + t3098;
  t3756 = Sin(var1[6]);
  t596 = Cos(var1[8]);
  t4056 = t2261*t3321;
  t4067 = -1.*t3150*t3756;
  t4125 = t4056 + t4067;
  t1693 = Cos(var1[4]);
  t1971 = Cos(var1[7]);
  t1983 = t1530*t1693*t1971;
  t3161 = t2261*t3150;
  t3850 = t3321*t3756;
  t3873 = t3161 + t3850;
  t3915 = Sin(var1[7]);
  t3929 = t3873*t3915;
  t3935 = t1983 + t3929;
  t4134 = Sin(var1[8]);
  t4203 = Cos(var1[9]);
  t4040 = t596*t3935;
  t4160 = t4125*t4134;
  t4195 = t4040 + t4160;
  t576 = Sin(var1[9]);
  t4215 = t596*t4125;
  t4250 = -1.*t3935*t4134;
  t4262 = t4215 + t4250;
  t4329 = Cos(var1[10]);
  t4197 = -1.*t576*t4195;
  t4266 = t4203*t4262;
  t4274 = t4197 + t4266;
  t565 = Sin(var1[10]);
  t4350 = t4203*t4195;
  t4354 = t576*t4262;
  t4369 = t4350 + t4354;
  t314 = Sin(var1[11]);
  t4665 = t2286*t2393*t2500;
  t4690 = -1.*t1530*t2502;
  t4744 = t4665 + t4690;
  t4573 = t1530*t2286;
  t4576 = t2393*t2500*t2502;
  t4630 = t4573 + t4576;
  t4844 = t2261*t4744;
  t4850 = -1.*t4630*t3756;
  t4894 = t4844 + t4850;
  t4557 = t1693*t1971*t2393;
  t4644 = t2261*t4630;
  t4775 = t4744*t3756;
  t4812 = t4644 + t4775;
  t4813 = t4812*t3915;
  t4822 = t4557 + t4813;
  t4825 = t596*t4822;
  t4903 = t4894*t4134;
  t4915 = t4825 + t4903;
  t4924 = t596*t4894;
  t4936 = -1.*t4822*t4134;
  t4937 = t4924 + t4936;
  t4465 = Cos(var1[11]);
  t4923 = -1.*t576*t4915;
  t4938 = t4203*t4937;
  t4948 = t4923 + t4938;
  t4952 = t4203*t4915;
  t4959 = t576*t4937;
  t4961 = t4952 + t4959;
  t5126 = t1693*t2286*t2261;
  t5149 = -1.*t1693*t2502*t3756;
  t5154 = t5126 + t5149;
  t5069 = -1.*t1971*t2500;
  t5090 = t1693*t2261*t2502;
  t5098 = t1693*t2286*t3756;
  t5099 = t5090 + t5098;
  t5106 = t5099*t3915;
  t5107 = t5069 + t5106;
  t5120 = t596*t5107;
  t5159 = t5154*t4134;
  t5188 = t5120 + t5159;
  t5195 = t596*t5154;
  t5198 = -1.*t5107*t4134;
  t5200 = t5195 + t5198;
  t5190 = -1.*t576*t5188;
  t5201 = t4203*t5200;
  t5202 = t5190 + t5201;
  t5214 = t4203*t5188;
  t5259 = t576*t5200;
  t5273 = t5214 + t5259;
  t4310 = t565*t4274;
  t4422 = t4329*t4369;
  t4424 = t4310 + t4422;
  t4495 = t4329*t4274;
  t4502 = -1.*t565*t4369;
  t4531 = t4495 + t4502;
  t4951 = t565*t4948;
  t4965 = t4329*t4961;
  t4970 = t4951 + t4965;
  t5009 = t4329*t4948;
  t5029 = -1.*t565*t4961;
  t5038 = t5009 + t5029;
  t5206 = t565*t5202;
  t5283 = t4329*t5273;
  t5284 = t5206 + t5283;
  t5297 = t4329*t5202;
  t5305 = -1.*t565*t5273;
  t5322 = t5297 + t5305;

  p_output1(0)=t314*t4424 - 1.*t4465*t4531;
  p_output1(1)=t314*t4970 - 1.*t4465*t5038;
  p_output1(2)=t314*t5284 - 1.*t4465*t5322;
  p_output1(3)=t4424*t4465 + t314*t4531;
  p_output1(4)=t4465*t4970 + t314*t5038;
  p_output1(5)=t4465*t5284 + t314*t5322;
  p_output1(6)=-1.*t1971*t3873 + t1530*t1693*t3915;
  p_output1(7)=t1693*t2393*t3915 - 1.*t1971*t4812;
  p_output1(8)=-1.*t2500*t3915 - 1.*t1971*t5099;
}


       
Eigen::Matrix<double,3,3> R_ankle_joint_left(const Eigen::Matrix<double,20,1> &var1)
//void R_ankle_joint_left(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



