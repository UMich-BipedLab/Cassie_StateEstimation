/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:10:37 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeFront.h"

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
  double t61;
  double t989;
  double t1102;
  double t1045;
  double t1119;
  double t396;
  double t761;
  double t901;
  double t921;
  double t1251;
  double t1088;
  double t1139;
  double t1148;
  double t1293;
  double t1365;
  double t1385;
  double t1154;
  double t1439;
  double t1488;
  double t2678;
  double t2613;
  double t2653;
  double t2655;
  double t2585;
  double t2692;
  double t2693;
  double t2702;
  double t2847;
  double t2660;
  double t2719;
  double t2722;
  double t2543;
  double t2866;
  double t2874;
  double t2882;
  double t3127;
  double t2804;
  double t3040;
  double t3046;
  double t2521;
  double t3164;
  double t3185;
  double t3236;
  double t3358;
  double t3103;
  double t3237;
  double t3313;
  double t2506;
  double t3397;
  double t3405;
  double t3419;
  double t3481;
  double t3328;
  double t3433;
  double t3439;
  double t2495;
  double t3504;
  double t3519;
  double t3578;
  double t1547;
  double t1596;
  double t1712;
  double t2115;
  double t2150;
  double t2155;
  double t1725;
  double t2165;
  double t2182;
  double t3762;
  double t3766;
  double t3800;
  double t3843;
  double t3872;
  double t4027;
  double t3835;
  double t4042;
  double t4077;
  double t4189;
  double t4207;
  double t4256;
  double t4145;
  double t4265;
  double t4292;
  double t4319;
  double t4393;
  double t4413;
  double t4295;
  double t4432;
  double t4452;
  double t4463;
  double t4464;
  double t4488;
  double t4457;
  double t4492;
  double t4504;
  double t4514;
  double t4519;
  double t4565;
  double t2310;
  double t2406;
  double t2418;
  double t4708;
  double t4714;
  double t4715;
  double t4762;
  double t4780;
  double t4781;
  double t4736;
  double t4811;
  double t4822;
  double t4832;
  double t4834;
  double t4837;
  double t4827;
  double t4842;
  double t4855;
  double t4860;
  double t4861;
  double t4872;
  double t4859;
  double t4890;
  double t4895;
  double t4909;
  double t4912;
  double t4915;
  double t4906;
  double t4930;
  double t4934;
  double t4952;
  double t4957;
  double t4960;
  double t3458;
  double t3584;
  double t3642;
  double t3677;
  double t3712;
  double t3723;
  double t4513;
  double t4566;
  double t4640;
  double t4644;
  double t4654;
  double t4658;
  double t4946;
  double t4974;
  double t4984;
  double t5009;
  double t5011;
  double t5014;
  t61 = Cos(var1[3]);
  t989 = Cos(var1[5]);
  t1102 = Sin(var1[3]);
  t1045 = Sin(var1[4]);
  t1119 = Sin(var1[5]);
  t396 = Cos(var1[4]);
  t761 = Sin(var1[14]);
  t901 = Cos(var1[14]);
  t921 = Sin(var1[13]);
  t1251 = Cos(var1[13]);
  t1088 = t61*t989*t1045;
  t1139 = t1102*t1119;
  t1148 = t1088 + t1139;
  t1293 = -1.*t989*t1102;
  t1365 = t61*t1045*t1119;
  t1385 = t1293 + t1365;
  t1154 = t921*t1148;
  t1439 = t1251*t1385;
  t1488 = t1154 + t1439;
  t2678 = Cos(var1[15]);
  t2613 = t1251*t1148;
  t2653 = -1.*t921*t1385;
  t2655 = t2613 + t2653;
  t2585 = Sin(var1[15]);
  t2692 = t901*t61*t396;
  t2693 = t761*t1488;
  t2702 = t2692 + t2693;
  t2847 = Cos(var1[16]);
  t2660 = t2585*t2655;
  t2719 = t2678*t2702;
  t2722 = t2660 + t2719;
  t2543 = Sin(var1[16]);
  t2866 = t2678*t2655;
  t2874 = -1.*t2585*t2702;
  t2882 = t2866 + t2874;
  t3127 = Cos(var1[17]);
  t2804 = -1.*t2543*t2722;
  t3040 = t2847*t2882;
  t3046 = t2804 + t3040;
  t2521 = Sin(var1[17]);
  t3164 = t2847*t2722;
  t3185 = t2543*t2882;
  t3236 = t3164 + t3185;
  t3358 = Cos(var1[18]);
  t3103 = t2521*t3046;
  t3237 = t3127*t3236;
  t3313 = t3103 + t3237;
  t2506 = Sin(var1[18]);
  t3397 = t3127*t3046;
  t3405 = -1.*t2521*t3236;
  t3419 = t3397 + t3405;
  t3481 = Cos(var1[19]);
  t3328 = -1.*t2506*t3313;
  t3433 = t3358*t3419;
  t3439 = t3328 + t3433;
  t2495 = Sin(var1[19]);
  t3504 = t3358*t3313;
  t3519 = t2506*t3419;
  t3578 = t3504 + t3519;
  t1547 = t989*t1102*t1045;
  t1596 = -1.*t61*t1119;
  t1712 = t1547 + t1596;
  t2115 = t61*t989;
  t2150 = t1102*t1045*t1119;
  t2155 = t2115 + t2150;
  t1725 = t921*t1712;
  t2165 = t1251*t2155;
  t2182 = t1725 + t2165;
  t3762 = t1251*t1712;
  t3766 = -1.*t921*t2155;
  t3800 = t3762 + t3766;
  t3843 = t901*t396*t1102;
  t3872 = t761*t2182;
  t4027 = t3843 + t3872;
  t3835 = t2585*t3800;
  t4042 = t2678*t4027;
  t4077 = t3835 + t4042;
  t4189 = t2678*t3800;
  t4207 = -1.*t2585*t4027;
  t4256 = t4189 + t4207;
  t4145 = -1.*t2543*t4077;
  t4265 = t2847*t4256;
  t4292 = t4145 + t4265;
  t4319 = t2847*t4077;
  t4393 = t2543*t4256;
  t4413 = t4319 + t4393;
  t4295 = t2521*t4292;
  t4432 = t3127*t4413;
  t4452 = t4295 + t4432;
  t4463 = t3127*t4292;
  t4464 = -1.*t2521*t4413;
  t4488 = t4463 + t4464;
  t4457 = -1.*t2506*t4452;
  t4492 = t3358*t4488;
  t4504 = t4457 + t4492;
  t4514 = t3358*t4452;
  t4519 = t2506*t4488;
  t4565 = t4514 + t4519;
  t2310 = t396*t989*t921;
  t2406 = t1251*t396*t1119;
  t2418 = t2310 + t2406;
  t4708 = t1251*t396*t989;
  t4714 = -1.*t396*t921*t1119;
  t4715 = t4708 + t4714;
  t4762 = -1.*t901*t1045;
  t4780 = t761*t2418;
  t4781 = t4762 + t4780;
  t4736 = t2585*t4715;
  t4811 = t2678*t4781;
  t4822 = t4736 + t4811;
  t4832 = t2678*t4715;
  t4834 = -1.*t2585*t4781;
  t4837 = t4832 + t4834;
  t4827 = -1.*t2543*t4822;
  t4842 = t2847*t4837;
  t4855 = t4827 + t4842;
  t4860 = t2847*t4822;
  t4861 = t2543*t4837;
  t4872 = t4860 + t4861;
  t4859 = t2521*t4855;
  t4890 = t3127*t4872;
  t4895 = t4859 + t4890;
  t4909 = t3127*t4855;
  t4912 = -1.*t2521*t4872;
  t4915 = t4909 + t4912;
  t4906 = -1.*t2506*t4895;
  t4930 = t3358*t4915;
  t4934 = t4906 + t4930;
  t4952 = t3358*t4895;
  t4957 = t2506*t4915;
  t4960 = t4952 + t4957;
  t3458 = t2495*t3439;
  t3584 = t3481*t3578;
  t3642 = t3458 + t3584;
  t3677 = t3481*t3439;
  t3712 = -1.*t2495*t3578;
  t3723 = t3677 + t3712;
  t4513 = t2495*t4504;
  t4566 = t3481*t4565;
  t4640 = t4513 + t4566;
  t4644 = t3481*t4504;
  t4654 = -1.*t2495*t4565;
  t4658 = t4644 + t4654;
  t4946 = t2495*t4934;
  t4974 = t3481*t4960;
  t4984 = t4946 + t4974;
  t5009 = t3481*t4934;
  t5011 = -1.*t2495*t4960;
  t5014 = t5009 + t5011;

  p_output1(0)=t396*t61*t761 - 1.*t1488*t901;
  p_output1(1)=t1102*t396*t761 - 1.*t2182*t901;
  p_output1(2)=-1.*t1045*t761 - 1.*t2418*t901;
  p_output1(3)=0.642788*t3642 + 0.766044*t3723;
  p_output1(4)=0.642788*t4640 + 0.766044*t4658;
  p_output1(5)=0.642788*t4984 + 0.766044*t5014;
  p_output1(6)=-0.766044*t3642 + 0.642788*t3723;
  p_output1(7)=-0.766044*t4640 + 0.642788*t4658;
  p_output1(8)=-0.766044*t4984 + 0.642788*t5014;
}


       
Eigen::Matrix<double,3,3> R_RightToeFront(const Eigen::Matrix<double,20,1> &var1)
//void R_RightToeFront(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



