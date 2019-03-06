/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:21:11 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jvb_VectorNav_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t392;
  double t540;
  double t1116;
  double t472;
  double t838;
  double t863;
  double t318;
  double t1129;
  double t1146;
  double t1293;
  double t1590;
  double t982;
  double t1512;
  double t1516;
  double t249;
  double t1658;
  double t1661;
  double t1689;
  double t2007;
  double t1566;
  double t1697;
  double t1764;
  double t169;
  double t2008;
  double t2050;
  double t2209;
  double t21;
  double t74;
  double t2310;
  double t3895;
  double t3915;
  double t3781;
  double t3803;
  double t3931;
  double t4009;
  double t4014;
  double t4192;
  double t4204;
  double t4393;
  double t4513;
  double t4554;
  double t3523;
  double t3542;
  double t3804;
  double t3882;
  double t4201;
  double t4600;
  double t4633;
  double t4677;
  double t4697;
  double t4701;
  double t4708;
  double t4722;
  double t3315;
  double t3337;
  double t3630;
  double t3669;
  double t4671;
  double t4761;
  double t4762;
  double t4833;
  double t4914;
  double t4932;
  double t4969;
  double t4986;
  double t2704;
  double t1973;
  double t2258;
  double t2260;
  double t2307;
  double t2313;
  double t2401;
  double t2425;
  double t2436;
  double t2497;
  double t2645;
  double t2654;
  double t2893;
  double t2987;
  double t3010;
  double t3274;
  double t3409;
  double t3418;
  double t4795;
  double t4996;
  double t5044;
  double t5156;
  double t5159;
  double t5185;
  double t5207;
  double t5289;
  double t5367;
  double t5384;
  double t5429;
  double t5859;
  double t5869;
  double t5877;
  double t5819;
  double t5886;
  double t5888;
  double t5907;
  double t5922;
  double t5895;
  double t5948;
  double t5951;
  double t5996;
  double t6015;
  double t6016;
  double t2528;
  double t2570;
  double t2691;
  double t2886;
  double t5469;
  double t5476;
  double t5968;
  double t6024;
  double t6026;
  double t6060;
  double t6080;
  double t6087;
  double t6101;
  double t6113;
  double t6120;
  double t6126;
  double t6128;
  double t5545;
  double t5577;
  double t5587;
  double t5599;
  double t5632;
  double t5714;
  double t5729;
  double t5745;
  double t5766;
  double t5775;
  double t6208;
  double t5503;
  double t5534;
  double t5659;
  double t5664;
  double t5672;
  double t6166;
  double t6167;
  double t6171;
  double t6218;
  double t6219;
  double t6134;
  double t6136;
  double t6183;
  double t5803;
  t392 = Cos(var1[13]);
  t540 = Sin(var1[13]);
  t1116 = Cos(var1[12]);
  t472 = 0.642788*t392;
  t838 = -0.766044*t540;
  t863 = t472 + t838;
  t318 = Sin(var1[12]);
  t1129 = -0.766044*t392;
  t1146 = -0.642788*t540;
  t1293 = t1129 + t1146;
  t1590 = Cos(var1[11]);
  t982 = -1.*t318*t863;
  t1512 = t1116*t1293;
  t1516 = 0. + t982 + t1512;
  t249 = Sin(var1[11]);
  t1658 = t1116*t863;
  t1661 = t318*t1293;
  t1689 = 0. + t1658 + t1661;
  t2007 = Cos(var1[10]);
  t1566 = t249*t1516;
  t1697 = t1590*t1689;
  t1764 = 0. + t1566 + t1697;
  t169 = Sin(var1[10]);
  t2008 = t1590*t1516;
  t2050 = -1.*t249*t1689;
  t2209 = 0. + t2008 + t2050;
  t21 = Cos(var1[8]);
  t74 = Cos(var1[9]);
  t2310 = Sin(var1[9]);
  t3895 = -1.*t392;
  t3915 = 1. + t3895;
  t3781 = -1.*t1116;
  t3803 = 1. + t3781;
  t3931 = -0.0216*t3915;
  t4009 = 0.0306*t392;
  t4014 = 0.01770000000000005*t540;
  t4192 = 0. + t3931 + t4009 + t4014;
  t4204 = -1.1135*t3915;
  t4393 = -1.1312*t392;
  t4513 = 0.052199999999999996*t540;
  t4554 = 0. + t4204 + t4393 + t4513;
  t3523 = -1.*t1590;
  t3542 = 1. + t3523;
  t3804 = -0.7055*t3803;
  t3882 = -0.0184*t318;
  t4201 = t318*t4192;
  t4600 = t1116*t4554;
  t4633 = 0. + t3804 + t3882 + t4201 + t4600;
  t4677 = 0.0184*t3803;
  t4697 = -0.7055*t318;
  t4701 = t1116*t4192;
  t4708 = -1.*t318*t4554;
  t4722 = 0. + t4677 + t4697 + t4701 + t4708;
  t3315 = -1.*t2007;
  t3337 = 1. + t3315;
  t3630 = -0.0016*t3542;
  t3669 = -0.2707*t249;
  t4671 = -1.*t249*t4633;
  t4761 = t1590*t4722;
  t4762 = 0. + t3630 + t3669 + t4671 + t4761;
  t4833 = -0.2707*t3542;
  t4914 = 0.0016*t249;
  t4932 = t1590*t4633;
  t4969 = t249*t4722;
  t4986 = 0. + t4833 + t4914 + t4932 + t4969;
  t2704 = Sin(var1[8]);
  t1973 = -1.*t169*t1764;
  t2258 = t2007*t2209;
  t2260 = 0. + t1973 + t2258;
  t2307 = t74*t2260;
  t2313 = t2007*t1764;
  t2401 = t169*t2209;
  t2425 = 0. + t2313 + t2401;
  t2436 = -1.*t2310*t2425;
  t2497 = 0. + t2307 + t2436;
  t2645 = -1.*t21;
  t2654 = 1. + t2645;
  t2893 = -1.*t74;
  t2987 = 1. + t2893;
  t3010 = -0.049*t2987;
  t3274 = -0.09*t2310;
  t3409 = -0.21*t3337;
  t3418 = 0.049*t169;
  t4795 = t169*t4762;
  t4996 = t2007*t4986;
  t5044 = 0. + t3409 + t3418 + t4795 + t4996;
  t5156 = -1.*t2310*t5044;
  t5159 = -0.049*t3337;
  t5185 = -0.21*t169;
  t5207 = t2007*t4762;
  t5289 = -1.*t169*t4986;
  t5367 = 0. + t5159 + t5185 + t5207 + t5289;
  t5384 = t74*t5367;
  t5429 = 0. + t3010 + t3274 + t5156 + t5384;
  t5859 = 0.766044*t392;
  t5869 = 0.642788*t540;
  t5877 = t5859 + t5869;
  t5819 = t318*t863;
  t5886 = t1116*t5877;
  t5888 = 0. + t5819 + t5886;
  t5907 = -1.*t318*t5877;
  t5922 = 0. + t1658 + t5907;
  t5895 = -1.*t249*t5888;
  t5948 = t1590*t5922;
  t5951 = 0. + t5895 + t5948;
  t5996 = t1590*t5888;
  t6015 = t249*t5922;
  t6016 = 0. + t5996 + t6015;
  t2528 = t21*t2497;
  t2570 = 0. + t2528;
  t2691 = -0.049*t2654;
  t2886 = -0.004500000000000004*t2704;
  t5469 = t21*t5429;
  t5476 = 0. + t2691 + t2886 + t5469;
  t5968 = t169*t5951;
  t6024 = t2007*t6016;
  t6026 = 0. + t5968 + t6024;
  t6060 = -1.*t2310*t6026;
  t6080 = t2007*t5951;
  t6087 = -1.*t169*t6016;
  t6101 = 0. + t6080 + t6087;
  t6113 = t74*t6101;
  t6120 = 0. + t6060 + t6113;
  t6126 = t21*t6120;
  t6128 = 0. + t6126;
  t5545 = -0.135*t2654;
  t5577 = -0.1305*t21;
  t5587 = 0.049*t2704;
  t5599 = t2704*t5429;
  t5632 = 0. + t5545 + t5577 + t5587 + t5599;
  t5714 = -0.09*t2987;
  t5729 = 0.049*t2310;
  t5745 = t74*t5044;
  t5766 = t2310*t5367;
  t5775 = 0. + t5714 + t5729 + t5745 + t5766;
  t6208 = 0. + t2704;
  t5503 = t2704*t2497;
  t5534 = 0. + t5503;
  t5659 = t2310*t2260;
  t5664 = t74*t2425;
  t5672 = 0. + t5659 + t5664;
  t6166 = t74*t6026;
  t6167 = t2310*t6101;
  t6171 = 0. + t6166 + t6167;
  t6218 = -1.*t21;
  t6219 = 0. + t6218;
  t6134 = t2704*t6120;
  t6136 = 0. + t6134;
  t6183 = -1.*t5775*t6171;
  t5803 = t5672*t5775;

  p_output1(0)=0;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=0;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=0;
  p_output1(9)=0;
  p_output1(10)=0;
  p_output1(11)=0;
  p_output1(12)=0;
  p_output1(13)=0;
  p_output1(14)=0;
  p_output1(15)=0;
  p_output1(16)=0;
  p_output1(17)=0;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0. + (t2570*t5476 + t5534*t5632 + t5803)*t6128 + t2570*(-1.*t5476*t6128 - 1.*t5632*t6136 + t6183);
  p_output1(22)=0.135*t6171 + (-1.*t2570*t5476 - 1.*t5534*t5632 - 1.*t5672*t5775)*t6208 + t2570*(0. + t5476*t6208 + t5632*t6219);
  p_output1(23)=0.135*t5672 + (t5476*t6128 + t5632*t6136 + t5775*t6171)*t6208 + t6128*(0. - 1.*t5476*t6208 - 1.*t5632*t6219);
  p_output1(24)=-0.049 + (0. + t2497*t5429 + t5803)*t6171 + t5672*(0. - 1.*t5429*t6120 + t6183);
  p_output1(25)=0. + 0.1305*t5672 - 0.135*t6120;
  p_output1(26)=0. - 0.135*t2497 - 0.1305*t6171;
  p_output1(27)=0.;
  p_output1(28)=0. - 1.*t2425*t5044 - 1.*t2260*t5367 + 0.049*t6026 - 0.09*t6101;
  p_output1(29)=0. - 0.09*t2260 + 0.049*t2425 + t5044*t6026 + t5367*t6101;
  p_output1(30)=0.;
  p_output1(31)=0. - 1.*t2209*t4762 - 1.*t1764*t4986 - 0.21*t5951 + 0.049*t6016;
  p_output1(32)=0. + 0.049*t1764 - 0.21*t2209 + t4762*t5951 + t4986*t6016;
  p_output1(33)=0.;
  p_output1(34)=0. - 1.*t1689*t4633 - 1.*t1516*t4722 + 0.0016*t5888 - 0.2707*t5922;
  p_output1(35)=0. - 0.2707*t1516 + 0.0016*t1689 + t4633*t5888 + t4722*t5922;
  p_output1(36)=0.;
  p_output1(37)=0. - 1.*t1293*t4192 - 0.0184*t5877 - 0.7055*t863 - 1.*t4554*t863;
  p_output1(38)=0. - 0.7055*t1293 + t4554*t5877 - 0.0184*t863 + t4192*t863;
  p_output1(39)=0.;
  p_output1(40)=0.05136484440000011;
  p_output1(41)=0.019994554799999897;
}


       
Eigen::Matrix<double,3,14> Jvb_VectorNav_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



