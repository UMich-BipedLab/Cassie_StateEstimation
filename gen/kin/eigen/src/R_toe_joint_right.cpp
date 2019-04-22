/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:38 GMT-05:00
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
  double t1338;
  double t1915;
  double t1304;
  double t1599;
  double t1950;
  double t2569;
  double t1858;
  double t2198;
  double t2245;
  double t1240;
  double t2731;
  double t2822;
  double t3279;
  double t3532;
  double t2284;
  double t3287;
  double t3377;
  double t889;
  double t3647;
  double t3703;
  double t3767;
  double t3778;
  double t3837;
  double t3944;
  double t4013;
  double t4110;
  double t4131;
  double t4698;
  double t3430;
  double t4539;
  double t4650;
  double t469;
  double t4752;
  double t4753;
  double t4760;
  double t4831;
  double t4652;
  double t4761;
  double t4777;
  double t320;
  double t4837;
  double t4847;
  double t4848;
  double t4928;
  double t4779;
  double t4851;
  double t4861;
  double t30;
  double t4950;
  double t4968;
  double t5013;
  double t29;
  double t5173;
  double t5174;
  double t5181;
  double t5219;
  double t5228;
  double t5234;
  double t5185;
  double t5239;
  double t5256;
  double t5275;
  double t5276;
  double t5278;
  double t5295;
  double t5317;
  double t5340;
  double t5263;
  double t5374;
  double t5376;
  double t5399;
  double t5419;
  double t5420;
  double t5388;
  double t5423;
  double t5426;
  double t5458;
  double t5471;
  double t5473;
  double t5076;
  double t5448;
  double t5478;
  double t5487;
  double t5511;
  double t5512;
  double t5513;
  double t5635;
  double t5651;
  double t5674;
  double t5704;
  double t5733;
  double t5743;
  double t5754;
  double t5755;
  double t5785;
  double t5691;
  double t5810;
  double t5814;
  double t5839;
  double t5840;
  double t5843;
  double t5824;
  double t5878;
  double t5885;
  double t5912;
  double t5925;
  double t5932;
  double t5895;
  double t5938;
  double t5952;
  double t5964;
  double t5971;
  double t5973;
  double t4900;
  double t5015;
  double t5017;
  double t5108;
  double t5115;
  double t5133;
  double t5501;
  double t5523;
  double t5529;
  double t5583;
  double t5590;
  double t5599;
  double t5953;
  double t5988;
  double t6004;
  double t6016;
  double t6025;
  double t6034;
  t1338 = Cos(var1[5]);
  t1915 = Sin(var1[3]);
  t1304 = Cos(var1[3]);
  t1599 = Sin(var1[4]);
  t1950 = Sin(var1[5]);
  t2569 = Sin(var1[13]);
  t1858 = t1304*t1338*t1599;
  t2198 = t1915*t1950;
  t2245 = t1858 + t2198;
  t1240 = Cos(var1[13]);
  t2731 = -1.*t1338*t1915;
  t2822 = t1304*t1599*t1950;
  t3279 = t2731 + t2822;
  t3532 = Cos(var1[15]);
  t2284 = t1240*t2245;
  t3287 = -1.*t2569*t3279;
  t3377 = t2284 + t3287;
  t889 = Sin(var1[15]);
  t3647 = Cos(var1[14]);
  t3703 = Cos(var1[4]);
  t3767 = t3647*t1304*t3703;
  t3778 = Sin(var1[14]);
  t3837 = t2569*t2245;
  t3944 = t1240*t3279;
  t4013 = t3837 + t3944;
  t4110 = t3778*t4013;
  t4131 = t3767 + t4110;
  t4698 = Cos(var1[16]);
  t3430 = t889*t3377;
  t4539 = t3532*t4131;
  t4650 = t3430 + t4539;
  t469 = Sin(var1[16]);
  t4752 = t3532*t3377;
  t4753 = -1.*t889*t4131;
  t4760 = t4752 + t4753;
  t4831 = Cos(var1[17]);
  t4652 = -1.*t469*t4650;
  t4761 = t4698*t4760;
  t4777 = t4652 + t4761;
  t320 = Sin(var1[17]);
  t4837 = t4698*t4650;
  t4847 = t469*t4760;
  t4848 = t4837 + t4847;
  t4928 = Cos(var1[18]);
  t4779 = t320*t4777;
  t4851 = t4831*t4848;
  t4861 = t4779 + t4851;
  t30 = Sin(var1[18]);
  t4950 = t4831*t4777;
  t4968 = -1.*t320*t4848;
  t5013 = t4950 + t4968;
  t29 = Cos(var1[19]);
  t5173 = t1338*t1915*t1599;
  t5174 = -1.*t1304*t1950;
  t5181 = t5173 + t5174;
  t5219 = t1304*t1338;
  t5228 = t1915*t1599*t1950;
  t5234 = t5219 + t5228;
  t5185 = t1240*t5181;
  t5239 = -1.*t2569*t5234;
  t5256 = t5185 + t5239;
  t5275 = t3647*t3703*t1915;
  t5276 = t2569*t5181;
  t5278 = t1240*t5234;
  t5295 = t5276 + t5278;
  t5317 = t3778*t5295;
  t5340 = t5275 + t5317;
  t5263 = t889*t5256;
  t5374 = t3532*t5340;
  t5376 = t5263 + t5374;
  t5399 = t3532*t5256;
  t5419 = -1.*t889*t5340;
  t5420 = t5399 + t5419;
  t5388 = -1.*t469*t5376;
  t5423 = t4698*t5420;
  t5426 = t5388 + t5423;
  t5458 = t4698*t5376;
  t5471 = t469*t5420;
  t5473 = t5458 + t5471;
  t5076 = Sin(var1[19]);
  t5448 = t320*t5426;
  t5478 = t4831*t5473;
  t5487 = t5448 + t5478;
  t5511 = t4831*t5426;
  t5512 = -1.*t320*t5473;
  t5513 = t5511 + t5512;
  t5635 = t1240*t3703*t1338;
  t5651 = -1.*t3703*t2569*t1950;
  t5674 = t5635 + t5651;
  t5704 = -1.*t3647*t1599;
  t5733 = t3703*t1338*t2569;
  t5743 = t1240*t3703*t1950;
  t5754 = t5733 + t5743;
  t5755 = t3778*t5754;
  t5785 = t5704 + t5755;
  t5691 = t889*t5674;
  t5810 = t3532*t5785;
  t5814 = t5691 + t5810;
  t5839 = t3532*t5674;
  t5840 = -1.*t889*t5785;
  t5843 = t5839 + t5840;
  t5824 = -1.*t469*t5814;
  t5878 = t4698*t5843;
  t5885 = t5824 + t5878;
  t5912 = t4698*t5814;
  t5925 = t469*t5843;
  t5932 = t5912 + t5925;
  t5895 = t320*t5885;
  t5938 = t4831*t5932;
  t5952 = t5895 + t5938;
  t5964 = t4831*t5885;
  t5971 = -1.*t320*t5932;
  t5973 = t5964 + t5971;
  t4900 = -1.*t30*t4861;
  t5015 = t4928*t5013;
  t5017 = t4900 + t5015;
  t5108 = t4928*t4861;
  t5115 = t30*t5013;
  t5133 = t5108 + t5115;
  t5501 = -1.*t30*t5487;
  t5523 = t4928*t5513;
  t5529 = t5501 + t5523;
  t5583 = t4928*t5487;
  t5590 = t30*t5513;
  t5599 = t5583 + t5590;
  t5953 = -1.*t30*t5952;
  t5988 = t4928*t5973;
  t6004 = t5953 + t5988;
  t6016 = t4928*t5952;
  t6025 = t30*t5973;
  t6034 = t6016 + t6025;

  p_output1(0)=-1.*t29*t5017 + t5076*t5133;
  p_output1(1)=-1.*t29*t5529 + t5076*t5599;
  p_output1(2)=-1.*t29*t6004 + t5076*t6034;
  p_output1(3)=t5017*t5076 + t29*t5133;
  p_output1(4)=t5076*t5529 + t29*t5599;
  p_output1(5)=t5076*t6004 + t29*t6034;
  p_output1(6)=t1304*t3703*t3778 - 1.*t3647*t4013;
  p_output1(7)=t1915*t3703*t3778 - 1.*t3647*t5295;
  p_output1(8)=-1.*t1599*t3778 - 1.*t3647*t5754;
}


       
Eigen::Matrix<double,3,3> R_toe_joint_right(const Eigen::Matrix<double,20,1> &var1)
//void R_toe_joint_right(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



