/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:44 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeBack.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t782;
  double t707;
  double t813;
  double t735;
  double t828;
  double t206;
  double t757;
  double t881;
  double t915;
  double t1080;
  double t1092;
  double t1195;
  double t1221;
  double t1471;
  double t1595;
  double t1664;
  double t1861;
  double t1414;
  double t1438;
  double t1470;
  double t1964;
  double t2575;
  double t2582;
  double t2690;
  double t2840;
  double t2383;
  double t2403;
  double t2463;
  double t2928;
  double t3032;
  double t3053;
  double t3129;
  double t3255;
  double t3371;
  double t3427;
  double t3540;
  double t3545;
  double t3673;
  double t3892;
  double t3932;
  double t3941;
  double t4051;
  double t4055;
  double t4094;
  double t4148;
  double t4226;
  double t4253;
  double t4264;
  double t4395;
  double t4446;
  double t4455;
  double t4512;
  double t4518;
  double t4519;
  double t4574;
  double t4614;
  double t4618;
  double t4622;
  double t4722;
  double t4728;
  double t4733;
  double t4748;
  double t4751;
  double t4792;
  double t4798;
  double t4835;
  double t4838;
  double t4842;
  double t4871;
  double t4874;
  double t4901;
  double t278;
  double t386;
  double t647;
  double t688;
  double t1349;
  double t1371;
  double t5051;
  double t5062;
  double t5073;
  double t5084;
  double t5093;
  double t5097;
  double t1855;
  double t1877;
  double t1908;
  double t1966;
  double t2046;
  double t2077;
  double t5124;
  double t5127;
  double t5144;
  double t2702;
  double t2846;
  double t2858;
  double t3088;
  double t3091;
  double t3115;
  double t3421;
  double t3449;
  double t3509;
  double t5199;
  double t5216;
  double t5222;
  double t5255;
  double t5261;
  double t5265;
  double t3761;
  double t3788;
  double t3836;
  double t4126;
  double t4161;
  double t4221;
  double t5286;
  double t5300;
  double t5323;
  double t5344;
  double t5347;
  double t5352;
  double t4285;
  double t4297;
  double t4312;
  double t4559;
  double t4602;
  double t4609;
  double t5384;
  double t5387;
  double t5407;
  double t5438;
  double t5492;
  double t5497;
  double t4677;
  double t4687;
  double t4692;
  double t4794;
  double t4803;
  double t4826;
  double t5515;
  double t5516;
  double t5517;
  double t5536;
  double t5550;
  double t5563;
  double t4852;
  double t4854;
  double t4857;
  double t5573;
  double t5577;
  double t5589;
  double t5592;
  double t5620;
  double t5629;
  double t5815;
  double t5820;
  double t5821;
  double t5886;
  double t5891;
  double t5894;
  double t5919;
  double t5922;
  double t5930;
  double t5976;
  double t5990;
  double t5998;
  double t6026;
  double t6038;
  double t6039;
  double t6042;
  double t6056;
  double t6061;
  double t6067;
  double t6072;
  double t6081;
  double t6086;
  double t6094;
  double t6103;
  double t6107;
  double t6109;
  double t6112;
  double t6124;
  double t6130;
  double t6135;
  double t6139;
  double t6148;
  double t6152;
  t782 = Cos(var1[3]);
  t707 = Cos(var1[5]);
  t813 = Sin(var1[4]);
  t735 = Sin(var1[3]);
  t828 = Sin(var1[5]);
  t206 = Cos(var1[6]);
  t757 = -1.*t707*t735;
  t881 = t782*t813*t828;
  t915 = t757 + t881;
  t1080 = t782*t707*t813;
  t1092 = t735*t828;
  t1195 = t1080 + t1092;
  t1221 = Sin(var1[6]);
  t1471 = Cos(var1[7]);
  t1595 = -1.*t1471;
  t1664 = 1. + t1595;
  t1861 = Sin(var1[7]);
  t1414 = t206*t915;
  t1438 = t1195*t1221;
  t1470 = t1414 + t1438;
  t1964 = Cos(var1[4]);
  t2575 = Cos(var1[8]);
  t2582 = -1.*t2575;
  t2690 = 1. + t2582;
  t2840 = Sin(var1[8]);
  t2383 = t782*t1964*t1471;
  t2403 = t1470*t1861;
  t2463 = t2383 + t2403;
  t2928 = t206*t1195;
  t3032 = -1.*t915*t1221;
  t3053 = t2928 + t3032;
  t3129 = Cos(var1[9]);
  t3255 = -1.*t3129;
  t3371 = 1. + t3255;
  t3427 = Sin(var1[9]);
  t3540 = t2575*t2463;
  t3545 = t3053*t2840;
  t3673 = t3540 + t3545;
  t3892 = t2575*t3053;
  t3932 = -1.*t2463*t2840;
  t3941 = t3892 + t3932;
  t4051 = Cos(var1[10]);
  t4055 = -1.*t4051;
  t4094 = 1. + t4055;
  t4148 = Sin(var1[10]);
  t4226 = -1.*t3427*t3673;
  t4253 = t3129*t3941;
  t4264 = t4226 + t4253;
  t4395 = t3129*t3673;
  t4446 = t3427*t3941;
  t4455 = t4395 + t4446;
  t4512 = Cos(var1[11]);
  t4518 = -1.*t4512;
  t4519 = 1. + t4518;
  t4574 = Sin(var1[11]);
  t4614 = t4148*t4264;
  t4618 = t4051*t4455;
  t4622 = t4614 + t4618;
  t4722 = t4051*t4264;
  t4728 = -1.*t4148*t4455;
  t4733 = t4722 + t4728;
  t4748 = Cos(var1[12]);
  t4751 = -1.*t4748;
  t4792 = 1. + t4751;
  t4798 = Sin(var1[12]);
  t4835 = -1.*t4574*t4622;
  t4838 = t4512*t4733;
  t4842 = t4835 + t4838;
  t4871 = t4512*t4622;
  t4874 = t4574*t4733;
  t4901 = t4871 + t4874;
  t278 = -1.*t206;
  t386 = 1. + t278;
  t647 = 0.135*t386;
  t688 = 0. + t647;
  t1349 = -0.135*t1221;
  t1371 = 0. + t1349;
  t5051 = t782*t707;
  t5062 = t735*t813*t828;
  t5073 = t5051 + t5062;
  t5084 = t707*t735*t813;
  t5093 = -1.*t782*t828;
  t5097 = t5084 + t5093;
  t1855 = 0.135*t1664;
  t1877 = 0.049*t1861;
  t1908 = 0. + t1855 + t1877;
  t1966 = -0.049*t1664;
  t2046 = 0.135*t1861;
  t2077 = 0. + t1966 + t2046;
  t5124 = t206*t5073;
  t5127 = t5097*t1221;
  t5144 = t5124 + t5127;
  t2702 = -0.049*t2690;
  t2846 = -0.09*t2840;
  t2858 = 0. + t2702 + t2846;
  t3088 = -0.09*t2690;
  t3091 = 0.049*t2840;
  t3115 = 0. + t3088 + t3091;
  t3421 = -0.049*t3371;
  t3449 = -0.21*t3427;
  t3509 = 0. + t3421 + t3449;
  t5199 = t1964*t1471*t735;
  t5216 = t5144*t1861;
  t5222 = t5199 + t5216;
  t5255 = t206*t5097;
  t5261 = -1.*t5073*t1221;
  t5265 = t5255 + t5261;
  t3761 = -0.21*t3371;
  t3788 = 0.049*t3427;
  t3836 = 0. + t3761 + t3788;
  t4126 = -0.2707*t4094;
  t4161 = 0.0016*t4148;
  t4221 = 0. + t4126 + t4161;
  t5286 = t2575*t5222;
  t5300 = t5265*t2840;
  t5323 = t5286 + t5300;
  t5344 = t2575*t5265;
  t5347 = -1.*t5222*t2840;
  t5352 = t5344 + t5347;
  t4285 = -0.0016*t4094;
  t4297 = -0.2707*t4148;
  t4312 = 0. + t4285 + t4297;
  t4559 = 0.0184*t4519;
  t4602 = -0.7055*t4574;
  t4609 = 0. + t4559 + t4602;
  t5384 = -1.*t3427*t5323;
  t5387 = t3129*t5352;
  t5407 = t5384 + t5387;
  t5438 = t3129*t5323;
  t5492 = t3427*t5352;
  t5497 = t5438 + t5492;
  t4677 = -0.7055*t4519;
  t4687 = -0.0184*t4574;
  t4692 = 0. + t4677 + t4687;
  t4794 = -1.1135*t4792;
  t4803 = 0.0216*t4798;
  t4826 = 0. + t4794 + t4803;
  t5515 = t4148*t5407;
  t5516 = t4051*t5497;
  t5517 = t5515 + t5516;
  t5536 = t4051*t5407;
  t5550 = -1.*t4148*t5497;
  t5563 = t5536 + t5550;
  t4852 = -0.0216*t4792;
  t4854 = -1.1135*t4798;
  t4857 = 0. + t4852 + t4854;
  t5573 = -1.*t4574*t5517;
  t5577 = t4512*t5563;
  t5589 = t5573 + t5577;
  t5592 = t4512*t5517;
  t5620 = t4574*t5563;
  t5629 = t5592 + t5620;
  t5815 = t1964*t206*t828;
  t5820 = t1964*t707*t1221;
  t5821 = t5815 + t5820;
  t5886 = -1.*t1471*t813;
  t5891 = t5821*t1861;
  t5894 = t5886 + t5891;
  t5919 = t1964*t707*t206;
  t5922 = -1.*t1964*t828*t1221;
  t5930 = t5919 + t5922;
  t5976 = t2575*t5894;
  t5990 = t5930*t2840;
  t5998 = t5976 + t5990;
  t6026 = t2575*t5930;
  t6038 = -1.*t5894*t2840;
  t6039 = t6026 + t6038;
  t6042 = -1.*t3427*t5998;
  t6056 = t3129*t6039;
  t6061 = t6042 + t6056;
  t6067 = t3129*t5998;
  t6072 = t3427*t6039;
  t6081 = t6067 + t6072;
  t6086 = t4148*t6061;
  t6094 = t4051*t6081;
  t6103 = t6086 + t6094;
  t6107 = t4051*t6061;
  t6109 = -1.*t4148*t6081;
  t6112 = t6107 + t6109;
  t6124 = -1.*t4574*t6103;
  t6130 = t4512*t6112;
  t6135 = t6124 + t6130;
  t6139 = t4512*t6103;
  t6148 = t4574*t6112;
  t6152 = t6139 + t6148;

  p_output1(0)=0. + t1195*t1371 + t1470*t1908 + t2463*t2858 + t3053*t3115 + t3509*t3673 + t3836*t3941 + t4221*t4264 + t4312*t4455 + t4609*t4622 + t4692*t4733 + t4826*t4842 + t4857*t4901 - 0.027251*(t4798*t4842 + t4748*t4901) - 1.200144*(t4748*t4842 - 1.*t4798*t4901) + t1964*t2077*t782 + 0.1305*(t1470*t1471 - 1.*t1861*t1964*t782) + t688*t915 + var1(0);
  p_output1(1)=0. + t1371*t5097 + t1908*t5144 + t2858*t5222 + t3115*t5265 + t3509*t5323 + t3836*t5352 + t4221*t5407 + t4312*t5497 + t4609*t5517 + t4692*t5563 + t4826*t5589 + t4857*t5629 - 0.027251*(t4798*t5589 + t4748*t5629) - 1.200144*(t4748*t5589 - 1.*t4798*t5629) + t5073*t688 + t1964*t2077*t735 + 0.1305*(t1471*t5144 - 1.*t1861*t1964*t735) + var1(1);
  p_output1(2)=0. + t1908*t5821 + t2858*t5894 + t3115*t5930 + t3509*t5998 + t3836*t6039 + t4221*t6061 + t4312*t6081 + t4609*t6103 + t4692*t6112 + t4826*t6135 + t4857*t6152 - 0.027251*(t4798*t6135 + t4748*t6152) - 1.200144*(t4748*t6135 - 1.*t4798*t6152) + t1371*t1964*t707 - 1.*t2077*t813 + 0.1305*(t1471*t5821 + t1861*t813) + t1964*t688*t828 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_LeftToeBack(const Eigen::Matrix<double,20,1> &var1)
//void p_LeftToeBack(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



