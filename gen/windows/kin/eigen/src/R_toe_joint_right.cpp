/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:10:10 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_toe_joint_right.h"

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
  double t1549;
  double t1849;
  double t1498;
  double t1660;
  double t2188;
  double t2382;
  double t1678;
  double t2195;
  double t2293;
  double t1465;
  double t2400;
  double t2504;
  double t3230;
  double t3492;
  double t2360;
  double t3239;
  double t3298;
  double t1257;
  double t3705;
  double t3725;
  double t3820;
  double t3855;
  double t3902;
  double t3909;
  double t3926;
  double t3930;
  double t3934;
  double t4000;
  double t3305;
  double t3945;
  double t3957;
  double t1134;
  double t4014;
  double t4041;
  double t4080;
  double t4162;
  double t3994;
  double t4097;
  double t4154;
  double t1037;
  double t4174;
  double t4206;
  double t4220;
  double t4252;
  double t4159;
  double t4223;
  double t4224;
  double t880;
  double t4260;
  double t4262;
  double t4263;
  double t302;
  double t4405;
  double t4423;
  double t4433;
  double t4459;
  double t4480;
  double t4506;
  double t4434;
  double t4539;
  double t4548;
  double t4576;
  double t4581;
  double t4591;
  double t4605;
  double t4642;
  double t4652;
  double t4560;
  double t4682;
  double t4683;
  double t4731;
  double t4733;
  double t4743;
  double t4727;
  double t4751;
  double t4758;
  double t4789;
  double t4797;
  double t4800;
  double t4343;
  double t4774;
  double t4816;
  double t4830;
  double t4840;
  double t4865;
  double t4877;
  double t4950;
  double t4959;
  double t4966;
  double t4978;
  double t4980;
  double t4993;
  double t5006;
  double t5013;
  double t5015;
  double t4971;
  double t5019;
  double t5026;
  double t5044;
  double t5046;
  double t5060;
  double t5041;
  double t5073;
  double t5086;
  double t5116;
  double t5129;
  double t5131;
  double t5109;
  double t5162;
  double t5164;
  double t5198;
  double t5218;
  double t5233;
  double t4250;
  double t4320;
  double t4334;
  double t4344;
  double t4367;
  double t4370;
  double t4835;
  double t4891;
  double t4895;
  double t4911;
  double t4923;
  double t4930;
  double t5186;
  double t5245;
  double t5248;
  double t5270;
  double t5273;
  double t5275;
  t1549 = Cos(var1[5]);
  t1849 = Sin(var1[3]);
  t1498 = Cos(var1[3]);
  t1660 = Sin(var1[4]);
  t2188 = Sin(var1[5]);
  t2382 = Sin(var1[13]);
  t1678 = t1498*t1549*t1660;
  t2195 = t1849*t2188;
  t2293 = t1678 + t2195;
  t1465 = Cos(var1[13]);
  t2400 = -1.*t1549*t1849;
  t2504 = t1498*t1660*t2188;
  t3230 = t2400 + t2504;
  t3492 = Cos(var1[15]);
  t2360 = t1465*t2293;
  t3239 = -1.*t2382*t3230;
  t3298 = t2360 + t3239;
  t1257 = Sin(var1[15]);
  t3705 = Cos(var1[14]);
  t3725 = Cos(var1[4]);
  t3820 = t3705*t1498*t3725;
  t3855 = Sin(var1[14]);
  t3902 = t2382*t2293;
  t3909 = t1465*t3230;
  t3926 = t3902 + t3909;
  t3930 = t3855*t3926;
  t3934 = t3820 + t3930;
  t4000 = Cos(var1[16]);
  t3305 = t1257*t3298;
  t3945 = t3492*t3934;
  t3957 = t3305 + t3945;
  t1134 = Sin(var1[16]);
  t4014 = t3492*t3298;
  t4041 = -1.*t1257*t3934;
  t4080 = t4014 + t4041;
  t4162 = Cos(var1[17]);
  t3994 = -1.*t1134*t3957;
  t4097 = t4000*t4080;
  t4154 = t3994 + t4097;
  t1037 = Sin(var1[17]);
  t4174 = t4000*t3957;
  t4206 = t1134*t4080;
  t4220 = t4174 + t4206;
  t4252 = Cos(var1[18]);
  t4159 = t1037*t4154;
  t4223 = t4162*t4220;
  t4224 = t4159 + t4223;
  t880 = Sin(var1[18]);
  t4260 = t4162*t4154;
  t4262 = -1.*t1037*t4220;
  t4263 = t4260 + t4262;
  t302 = Cos(var1[19]);
  t4405 = t1549*t1849*t1660;
  t4423 = -1.*t1498*t2188;
  t4433 = t4405 + t4423;
  t4459 = t1498*t1549;
  t4480 = t1849*t1660*t2188;
  t4506 = t4459 + t4480;
  t4434 = t1465*t4433;
  t4539 = -1.*t2382*t4506;
  t4548 = t4434 + t4539;
  t4576 = t3705*t3725*t1849;
  t4581 = t2382*t4433;
  t4591 = t1465*t4506;
  t4605 = t4581 + t4591;
  t4642 = t3855*t4605;
  t4652 = t4576 + t4642;
  t4560 = t1257*t4548;
  t4682 = t3492*t4652;
  t4683 = t4560 + t4682;
  t4731 = t3492*t4548;
  t4733 = -1.*t1257*t4652;
  t4743 = t4731 + t4733;
  t4727 = -1.*t1134*t4683;
  t4751 = t4000*t4743;
  t4758 = t4727 + t4751;
  t4789 = t4000*t4683;
  t4797 = t1134*t4743;
  t4800 = t4789 + t4797;
  t4343 = Sin(var1[19]);
  t4774 = t1037*t4758;
  t4816 = t4162*t4800;
  t4830 = t4774 + t4816;
  t4840 = t4162*t4758;
  t4865 = -1.*t1037*t4800;
  t4877 = t4840 + t4865;
  t4950 = t1465*t3725*t1549;
  t4959 = -1.*t3725*t2382*t2188;
  t4966 = t4950 + t4959;
  t4978 = -1.*t3705*t1660;
  t4980 = t3725*t1549*t2382;
  t4993 = t1465*t3725*t2188;
  t5006 = t4980 + t4993;
  t5013 = t3855*t5006;
  t5015 = t4978 + t5013;
  t4971 = t1257*t4966;
  t5019 = t3492*t5015;
  t5026 = t4971 + t5019;
  t5044 = t3492*t4966;
  t5046 = -1.*t1257*t5015;
  t5060 = t5044 + t5046;
  t5041 = -1.*t1134*t5026;
  t5073 = t4000*t5060;
  t5086 = t5041 + t5073;
  t5116 = t4000*t5026;
  t5129 = t1134*t5060;
  t5131 = t5116 + t5129;
  t5109 = t1037*t5086;
  t5162 = t4162*t5131;
  t5164 = t5109 + t5162;
  t5198 = t4162*t5086;
  t5218 = -1.*t1037*t5131;
  t5233 = t5198 + t5218;
  t4250 = -1.*t880*t4224;
  t4320 = t4252*t4263;
  t4334 = t4250 + t4320;
  t4344 = t4252*t4224;
  t4367 = t880*t4263;
  t4370 = t4344 + t4367;
  t4835 = -1.*t880*t4830;
  t4891 = t4252*t4877;
  t4895 = t4835 + t4891;
  t4911 = t4252*t4830;
  t4923 = t880*t4877;
  t4930 = t4911 + t4923;
  t5186 = -1.*t880*t5164;
  t5245 = t4252*t5233;
  t5248 = t5186 + t5245;
  t5270 = t4252*t5164;
  t5273 = t880*t5233;
  t5275 = t5270 + t5273;

  p_output1(0)=-1.*t302*t4334 + t4343*t4370;
  p_output1(1)=-1.*t302*t4895 + t4343*t4930;
  p_output1(2)=-1.*t302*t5248 + t4343*t5275;
  p_output1(3)=t4334*t4343 + t302*t4370;
  p_output1(4)=t4343*t4895 + t302*t4930;
  p_output1(5)=t4343*t5248 + t302*t5275;
  p_output1(6)=t1498*t3725*t3855 - 1.*t3705*t3926;
  p_output1(7)=t1849*t3725*t3855 - 1.*t3705*t4605;
  p_output1(8)=-1.*t1660*t3855 - 1.*t3705*t5006;
}


       
Eigen::Matrix<double,3,3> R_toe_joint_right(const Eigen::Matrix<double,20,1> &var1)
//void R_toe_joint_right(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



