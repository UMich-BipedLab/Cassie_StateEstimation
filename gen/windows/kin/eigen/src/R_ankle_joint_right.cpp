/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:10:05 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_ankle_joint_right.h"

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
  double t1181;
  double t1349;
  double t1180;
  double t1233;
  double t1351;
  double t2847;
  double t1325;
  double t1739;
  double t2516;
  double t903;
  double t2882;
  double t2905;
  double t2930;
  double t3335;
  double t2730;
  double t2974;
  double t3002;
  double t608;
  double t3866;
  double t3963;
  double t3992;
  double t4108;
  double t4221;
  double t4414;
  double t4429;
  double t4481;
  double t4509;
  double t4617;
  double t3081;
  double t4521;
  double t4571;
  double t531;
  double t4626;
  double t4633;
  double t4634;
  double t4776;
  double t4587;
  double t4639;
  double t4698;
  double t341;
  double t4794;
  double t4798;
  double t4808;
  double t82;
  double t4920;
  double t4926;
  double t4927;
  double t4940;
  double t4941;
  double t4952;
  double t4935;
  double t4954;
  double t4955;
  double t5009;
  double t5011;
  double t5018;
  double t5030;
  double t5033;
  double t5049;
  double t4979;
  double t5054;
  double t5055;
  double t5100;
  double t5104;
  double t5113;
  double t4827;
  double t5077;
  double t5144;
  double t5172;
  double t5225;
  double t5226;
  double t5229;
  double t5328;
  double t5340;
  double t5341;
  double t5344;
  double t5373;
  double t5379;
  double t5404;
  double t5420;
  double t5453;
  double t5342;
  double t5460;
  double t5470;
  double t5484;
  double t5498;
  double t5520;
  double t5472;
  double t5521;
  double t5530;
  double t5568;
  double t5577;
  double t5600;
  double t4772;
  double t4817;
  double t4818;
  double t4855;
  double t4874;
  double t4890;
  double t5206;
  double t5230;
  double t5240;
  double t5276;
  double t5280;
  double t5281;
  double t5537;
  double t5603;
  double t5616;
  double t5650;
  double t5673;
  double t5689;
  t1181 = Cos(var1[5]);
  t1349 = Sin(var1[3]);
  t1180 = Cos(var1[3]);
  t1233 = Sin(var1[4]);
  t1351 = Sin(var1[5]);
  t2847 = Sin(var1[13]);
  t1325 = t1180*t1181*t1233;
  t1739 = t1349*t1351;
  t2516 = t1325 + t1739;
  t903 = Cos(var1[13]);
  t2882 = -1.*t1181*t1349;
  t2905 = t1180*t1233*t1351;
  t2930 = t2882 + t2905;
  t3335 = Cos(var1[15]);
  t2730 = t903*t2516;
  t2974 = -1.*t2847*t2930;
  t3002 = t2730 + t2974;
  t608 = Sin(var1[15]);
  t3866 = Cos(var1[14]);
  t3963 = Cos(var1[4]);
  t3992 = t3866*t1180*t3963;
  t4108 = Sin(var1[14]);
  t4221 = t2847*t2516;
  t4414 = t903*t2930;
  t4429 = t4221 + t4414;
  t4481 = t4108*t4429;
  t4509 = t3992 + t4481;
  t4617 = Cos(var1[16]);
  t3081 = t608*t3002;
  t4521 = t3335*t4509;
  t4571 = t3081 + t4521;
  t531 = Sin(var1[16]);
  t4626 = t3335*t3002;
  t4633 = -1.*t608*t4509;
  t4634 = t4626 + t4633;
  t4776 = Cos(var1[17]);
  t4587 = -1.*t531*t4571;
  t4639 = t4617*t4634;
  t4698 = t4587 + t4639;
  t341 = Sin(var1[17]);
  t4794 = t4617*t4571;
  t4798 = t531*t4634;
  t4808 = t4794 + t4798;
  t82 = Sin(var1[18]);
  t4920 = t1181*t1349*t1233;
  t4926 = -1.*t1180*t1351;
  t4927 = t4920 + t4926;
  t4940 = t1180*t1181;
  t4941 = t1349*t1233*t1351;
  t4952 = t4940 + t4941;
  t4935 = t903*t4927;
  t4954 = -1.*t2847*t4952;
  t4955 = t4935 + t4954;
  t5009 = t3866*t3963*t1349;
  t5011 = t2847*t4927;
  t5018 = t903*t4952;
  t5030 = t5011 + t5018;
  t5033 = t4108*t5030;
  t5049 = t5009 + t5033;
  t4979 = t608*t4955;
  t5054 = t3335*t5049;
  t5055 = t4979 + t5054;
  t5100 = t3335*t4955;
  t5104 = -1.*t608*t5049;
  t5113 = t5100 + t5104;
  t4827 = Cos(var1[18]);
  t5077 = -1.*t531*t5055;
  t5144 = t4617*t5113;
  t5172 = t5077 + t5144;
  t5225 = t4617*t5055;
  t5226 = t531*t5113;
  t5229 = t5225 + t5226;
  t5328 = t903*t3963*t1181;
  t5340 = -1.*t3963*t2847*t1351;
  t5341 = t5328 + t5340;
  t5344 = -1.*t3866*t1233;
  t5373 = t3963*t1181*t2847;
  t5379 = t903*t3963*t1351;
  t5404 = t5373 + t5379;
  t5420 = t4108*t5404;
  t5453 = t5344 + t5420;
  t5342 = t608*t5341;
  t5460 = t3335*t5453;
  t5470 = t5342 + t5460;
  t5484 = t3335*t5341;
  t5498 = -1.*t608*t5453;
  t5520 = t5484 + t5498;
  t5472 = -1.*t531*t5470;
  t5521 = t4617*t5520;
  t5530 = t5472 + t5521;
  t5568 = t4617*t5470;
  t5577 = t531*t5520;
  t5600 = t5568 + t5577;
  t4772 = t341*t4698;
  t4817 = t4776*t4808;
  t4818 = t4772 + t4817;
  t4855 = t4776*t4698;
  t4874 = -1.*t341*t4808;
  t4890 = t4855 + t4874;
  t5206 = t341*t5172;
  t5230 = t4776*t5229;
  t5240 = t5206 + t5230;
  t5276 = t4776*t5172;
  t5280 = -1.*t341*t5229;
  t5281 = t5276 + t5280;
  t5537 = t341*t5530;
  t5603 = t4776*t5600;
  t5616 = t5537 + t5603;
  t5650 = t4776*t5530;
  t5673 = -1.*t341*t5600;
  t5689 = t5650 + t5673;

  p_output1(0)=-1.*t4827*t4890 + t4818*t82;
  p_output1(1)=-1.*t4827*t5281 + t5240*t82;
  p_output1(2)=-1.*t4827*t5689 + t5616*t82;
  p_output1(3)=t4818*t4827 + t4890*t82;
  p_output1(4)=t4827*t5240 + t5281*t82;
  p_output1(5)=t4827*t5616 + t5689*t82;
  p_output1(6)=t1180*t3963*t4108 - 1.*t3866*t4429;
  p_output1(7)=t1349*t3963*t4108 - 1.*t3866*t5030;
  p_output1(8)=-1.*t1233*t4108 - 1.*t3866*t5404;
}


       
Eigen::Matrix<double,3,3> R_ankle_joint_right(const Eigen::Matrix<double,20,1> &var1)
//void R_ankle_joint_right(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



