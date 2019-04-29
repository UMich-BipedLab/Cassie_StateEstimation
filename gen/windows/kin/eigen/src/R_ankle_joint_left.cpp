/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:22:02 GMT-04:00
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
  double t816;
  double t1538;
  double t1797;
  double t1547;
  double t1813;
  double t1514;
  double t1937;
  double t1939;
  double t2183;
  double t1585;
  double t1888;
  double t1894;
  double t2453;
  double t810;
  double t2854;
  double t3487;
  double t3559;
  double t923;
  double t927;
  double t1174;
  double t1907;
  double t2483;
  double t2582;
  double t2616;
  double t2793;
  double t2795;
  double t3562;
  double t4080;
  double t2808;
  double t3708;
  double t3935;
  double t505;
  double t4094;
  double t4113;
  double t4125;
  double t4154;
  double t4063;
  double t4130;
  double t4134;
  double t219;
  double t4155;
  double t4315;
  double t4320;
  double t70;
  double t4607;
  double t4618;
  double t4620;
  double t4537;
  double t4560;
  double t4572;
  double t4685;
  double t4689;
  double t4702;
  double t4525;
  double t4581;
  double t4640;
  double t4651;
  double t4657;
  double t4661;
  double t4682;
  double t4767;
  double t4816;
  double t4836;
  double t4850;
  double t4863;
  double t4386;
  double t4824;
  double t4865;
  double t4870;
  double t4894;
  double t4911;
  double t4913;
  double t5072;
  double t5078;
  double t5097;
  double t5006;
  double t5019;
  double t5026;
  double t5035;
  double t5037;
  double t5038;
  double t5071;
  double t5115;
  double t5116;
  double t5129;
  double t5133;
  double t5159;
  double t5121;
  double t5189;
  double t5198;
  double t5218;
  double t5222;
  double t5238;
  double t4138;
  double t4323;
  double t4351;
  double t4406;
  double t4421;
  double t4476;
  double t4891;
  double t4938;
  double t4948;
  double t4966;
  double t4973;
  double t4980;
  double t5203;
  double t5247;
  double t5255;
  double t5260;
  double t5270;
  double t5271;
  t816 = Cos(var1[3]);
  t1538 = Cos(var1[5]);
  t1797 = Sin(var1[4]);
  t1547 = Sin(var1[3]);
  t1813 = Sin(var1[5]);
  t1514 = Cos(var1[6]);
  t1937 = t816*t1538*t1797;
  t1939 = t1547*t1813;
  t2183 = t1937 + t1939;
  t1585 = -1.*t1538*t1547;
  t1888 = t816*t1797*t1813;
  t1894 = t1585 + t1888;
  t2453 = Sin(var1[6]);
  t810 = Cos(var1[8]);
  t2854 = t1514*t2183;
  t3487 = -1.*t1894*t2453;
  t3559 = t2854 + t3487;
  t923 = Cos(var1[4]);
  t927 = Cos(var1[7]);
  t1174 = t816*t923*t927;
  t1907 = t1514*t1894;
  t2483 = t2183*t2453;
  t2582 = t1907 + t2483;
  t2616 = Sin(var1[7]);
  t2793 = t2582*t2616;
  t2795 = t1174 + t2793;
  t3562 = Sin(var1[8]);
  t4080 = Cos(var1[9]);
  t2808 = t810*t2795;
  t3708 = t3559*t3562;
  t3935 = t2808 + t3708;
  t505 = Sin(var1[9]);
  t4094 = t810*t3559;
  t4113 = -1.*t2795*t3562;
  t4125 = t4094 + t4113;
  t4154 = Cos(var1[10]);
  t4063 = -1.*t505*t3935;
  t4130 = t4080*t4125;
  t4134 = t4063 + t4130;
  t219 = Sin(var1[10]);
  t4155 = t4080*t3935;
  t4315 = t505*t4125;
  t4320 = t4155 + t4315;
  t70 = Sin(var1[11]);
  t4607 = t1538*t1547*t1797;
  t4618 = -1.*t816*t1813;
  t4620 = t4607 + t4618;
  t4537 = t816*t1538;
  t4560 = t1547*t1797*t1813;
  t4572 = t4537 + t4560;
  t4685 = t1514*t4620;
  t4689 = -1.*t4572*t2453;
  t4702 = t4685 + t4689;
  t4525 = t923*t927*t1547;
  t4581 = t1514*t4572;
  t4640 = t4620*t2453;
  t4651 = t4581 + t4640;
  t4657 = t4651*t2616;
  t4661 = t4525 + t4657;
  t4682 = t810*t4661;
  t4767 = t4702*t3562;
  t4816 = t4682 + t4767;
  t4836 = t810*t4702;
  t4850 = -1.*t4661*t3562;
  t4863 = t4836 + t4850;
  t4386 = Cos(var1[11]);
  t4824 = -1.*t505*t4816;
  t4865 = t4080*t4863;
  t4870 = t4824 + t4865;
  t4894 = t4080*t4816;
  t4911 = t505*t4863;
  t4913 = t4894 + t4911;
  t5072 = t923*t1538*t1514;
  t5078 = -1.*t923*t1813*t2453;
  t5097 = t5072 + t5078;
  t5006 = -1.*t927*t1797;
  t5019 = t923*t1514*t1813;
  t5026 = t923*t1538*t2453;
  t5035 = t5019 + t5026;
  t5037 = t5035*t2616;
  t5038 = t5006 + t5037;
  t5071 = t810*t5038;
  t5115 = t5097*t3562;
  t5116 = t5071 + t5115;
  t5129 = t810*t5097;
  t5133 = -1.*t5038*t3562;
  t5159 = t5129 + t5133;
  t5121 = -1.*t505*t5116;
  t5189 = t4080*t5159;
  t5198 = t5121 + t5189;
  t5218 = t4080*t5116;
  t5222 = t505*t5159;
  t5238 = t5218 + t5222;
  t4138 = t219*t4134;
  t4323 = t4154*t4320;
  t4351 = t4138 + t4323;
  t4406 = t4154*t4134;
  t4421 = -1.*t219*t4320;
  t4476 = t4406 + t4421;
  t4891 = t219*t4870;
  t4938 = t4154*t4913;
  t4948 = t4891 + t4938;
  t4966 = t4154*t4870;
  t4973 = -1.*t219*t4913;
  t4980 = t4966 + t4973;
  t5203 = t219*t5198;
  t5247 = t4154*t5238;
  t5255 = t5203 + t5247;
  t5260 = t4154*t5198;
  t5270 = -1.*t219*t5238;
  t5271 = t5260 + t5270;

  p_output1(0)=-1.*t4386*t4476 + t4351*t70;
  p_output1(1)=-1.*t4386*t4980 + t4948*t70;
  p_output1(2)=-1.*t4386*t5271 + t5255*t70;
  p_output1(3)=t4351*t4386 + t4476*t70;
  p_output1(4)=t4386*t4948 + t4980*t70;
  p_output1(5)=t4386*t5255 + t5271*t70;
  p_output1(6)=t2616*t816*t923 - 1.*t2582*t927;
  p_output1(7)=t1547*t2616*t923 - 1.*t4651*t927;
  p_output1(8)=-1.*t1797*t2616 - 1.*t5035*t927;
}


       
Eigen::Matrix<double,3,3> R_ankle_joint_left(const Eigen::Matrix<double,20,1> &var1)
//void R_ankle_joint_left(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



