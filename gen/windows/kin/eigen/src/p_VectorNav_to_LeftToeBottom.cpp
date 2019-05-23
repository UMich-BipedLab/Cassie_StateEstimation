/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:11:48 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t719;
  double t1986;
  double t2046;
  double t2253;
  double t2328;
  double t2368;
  double t3031;
  double t3325;
  double t3328;
  double t3332;
  double t3506;
  double t3669;
  double t3730;
  double t3762;
  double t3876;
  double t3920;
  double t3931;
  double t3950;
  double t3986;
  double t4033;
  double t4065;
  double t4164;
  double t4165;
  double t4167;
  double t4207;
  double t4217;
  double t4218;
  double t4234;
  double t4247;
  double t4249;
  double t4267;
  double t4304;
  double t4307;
  double t4308;
  double t4357;
  double t4363;
  double t4397;
  double t4538;
  double t1278;
  double t1383;
  double t2930;
  double t2937;
  double t2957;
  double t3017;
  double t3042;
  double t3050;
  double t2365;
  double t2650;
  double t2792;
  double t4708;
  double t3121;
  double t3234;
  double t3238;
  double t3504;
  double t3583;
  double t3642;
  double t4742;
  double t4759;
  double t4770;
  double t4794;
  double t4806;
  double t4815;
  double t3835;
  double t3855;
  double t3866;
  double t4047;
  double t4067;
  double t4111;
  double t4829;
  double t4832;
  double t4840;
  double t4860;
  double t4863;
  double t4883;
  double t4182;
  double t4187;
  double t4206;
  double t4263;
  double t4297;
  double t4301;
  double t4906;
  double t4917;
  double t4928;
  double t4958;
  double t4963;
  double t4966;
  double t4326;
  double t4328;
  double t4334;
  double t4990;
  double t4994;
  double t5002;
  double t5015;
  double t5020;
  double t5035;
  double t4627;
  double t4657;
  double t4678;
  double t4713;
  double t4715;
  double t4734;
  double t5166;
  double t5170;
  double t5171;
  double t5177;
  double t5189;
  double t5192;
  double t5202;
  double t5222;
  double t5223;
  double t5229;
  double t5232;
  double t5237;
  double t5247;
  double t5248;
  double t5251;
  double t5256;
  double t5257;
  double t5270;
  double t5276;
  double t5280;
  double t5282;
  double t5284;
  double t5286;
  double t5294;
  t719 = Cos(var1[1]);
  t1986 = Cos(var1[2]);
  t2046 = Cos(var1[3]);
  t2253 = -1.*t2046;
  t2328 = 1. + t2253;
  t2368 = Sin(var1[3]);
  t3031 = Sin(var1[2]);
  t3325 = Cos(var1[4]);
  t3328 = -1.*t3325;
  t3332 = 1. + t3328;
  t3506 = Sin(var1[4]);
  t3669 = -1.*t719*t1986*t2368;
  t3730 = -1.*t2046*t719*t3031;
  t3762 = t3669 + t3730;
  t3876 = t2046*t719*t1986;
  t3920 = -1.*t719*t2368*t3031;
  t3931 = t3876 + t3920;
  t3950 = Cos(var1[5]);
  t3986 = -1.*t3950;
  t4033 = 1. + t3986;
  t4065 = Sin(var1[5]);
  t4164 = t3506*t3762;
  t4165 = t3325*t3931;
  t4167 = t4164 + t4165;
  t4207 = t3325*t3762;
  t4217 = -1.*t3506*t3931;
  t4218 = t4207 + t4217;
  t4234 = Cos(var1[6]);
  t4247 = -1.*t4234;
  t4249 = 1. + t4247;
  t4267 = Sin(var1[6]);
  t4304 = -1.*t4065*t4167;
  t4307 = t3950*t4218;
  t4308 = t4304 + t4307;
  t4357 = t3950*t4167;
  t4363 = t4065*t4218;
  t4397 = t4357 + t4363;
  t4538 = Cos(var1[0]);
  t1278 = -1.*t719;
  t1383 = 1. + t1278;
  t2930 = Sin(var1[1]);
  t2937 = -1.*t1986;
  t2957 = 1. + t2937;
  t3017 = -0.049*t2957;
  t3042 = -0.09*t3031;
  t3050 = 0. + t3017 + t3042;
  t2365 = -0.049*t2328;
  t2650 = -0.21*t2368;
  t2792 = 0. + t2365 + t2650;
  t4708 = Sin(var1[0]);
  t3121 = -0.21*t2328;
  t3234 = 0.049*t2368;
  t3238 = 0. + t3121 + t3234;
  t3504 = -0.2707*t3332;
  t3583 = 0.0016*t3506;
  t3642 = 0. + t3504 + t3583;
  t4742 = t4538*t1986*t2930;
  t4759 = -1.*t4708*t3031;
  t4770 = t4742 + t4759;
  t4794 = -1.*t1986*t4708;
  t4806 = -1.*t4538*t2930*t3031;
  t4815 = t4794 + t4806;
  t3835 = -0.0016*t3332;
  t3855 = -0.2707*t3506;
  t3866 = 0. + t3835 + t3855;
  t4047 = 0.0184*t4033;
  t4067 = -0.7055*t4065;
  t4111 = 0. + t4047 + t4067;
  t4829 = -1.*t2368*t4770;
  t4832 = t2046*t4815;
  t4840 = t4829 + t4832;
  t4860 = t2046*t4770;
  t4863 = t2368*t4815;
  t4883 = t4860 + t4863;
  t4182 = -0.7055*t4033;
  t4187 = -0.0184*t4065;
  t4206 = 0. + t4182 + t4187;
  t4263 = -1.1135*t4249;
  t4297 = 0.0216*t4267;
  t4301 = 0. + t4263 + t4297;
  t4906 = t3506*t4840;
  t4917 = t3325*t4883;
  t4928 = t4906 + t4917;
  t4958 = t3325*t4840;
  t4963 = -1.*t3506*t4883;
  t4966 = t4958 + t4963;
  t4326 = -0.0216*t4249;
  t4328 = -1.1135*t4267;
  t4334 = 0. + t4326 + t4328;
  t4990 = -1.*t4065*t4928;
  t4994 = t3950*t4966;
  t5002 = t4990 + t4994;
  t5015 = t3950*t4928;
  t5020 = t4065*t4966;
  t5035 = t5015 + t5020;
  t4627 = 0.135*t1383;
  t4657 = 0.049*t2930;
  t4678 = 0. + t4627 + t4657;
  t4713 = -0.09*t2957;
  t4715 = 0.049*t3031;
  t4734 = 0. + t4713 + t4715;
  t5166 = t1986*t4708*t2930;
  t5170 = t4538*t3031;
  t5171 = t5166 + t5170;
  t5177 = t4538*t1986;
  t5189 = -1.*t4708*t2930*t3031;
  t5192 = t5177 + t5189;
  t5202 = -1.*t2368*t5171;
  t5222 = t2046*t5192;
  t5223 = t5202 + t5222;
  t5229 = t2046*t5171;
  t5232 = t2368*t5192;
  t5237 = t5229 + t5232;
  t5247 = t3506*t5223;
  t5248 = t3325*t5237;
  t5251 = t5247 + t5248;
  t5256 = t3325*t5223;
  t5257 = -1.*t3506*t5237;
  t5270 = t5256 + t5257;
  t5276 = -1.*t4065*t5251;
  t5280 = t3950*t5270;
  t5282 = t5276 + t5280;
  t5284 = t3950*t5251;
  t5286 = t4065*t5270;
  t5294 = t5284 + t5286;

  p_output1(0)=-0.03155 - 0.049*t1383 + 0.004500000000000004*t2930 + t3642*t3762 + t3866*t3931 + t4111*t4167 + t4206*t4218 + t4301*t4308 + t4334*t4397 + 0.0306*(t4267*t4308 + t4234*t4397) - 1.1312*(t4234*t4308 - 1.*t4267*t4397) + t1986*t2792*t719 + t3050*t719 - 1.*t3031*t3238*t719;
  p_output1(1)=0. + 0.135*(1. - 1.*t4538) + t2930*t3050*t4538 + t4538*t4678 - 1.*t4708*t4734 + t2792*t4770 + t3238*t4815 + t3642*t4840 + t3866*t4883 + t4111*t4928 + t4206*t4966 + t4301*t5002 + t4334*t5035 + 0.0306*(t4267*t5002 + t4234*t5035) - 1.1312*(t4234*t5002 - 1.*t4267*t5035) + 0.1305*t4538*t719;
  p_output1(2)=0.07996 - 0.135*t4708 + t2930*t3050*t4708 + t4678*t4708 + t4538*t4734 + t2792*t5171 + t3238*t5192 + t3642*t5223 + t3866*t5237 + t4111*t5251 + t4206*t5270 + t4301*t5282 + t4334*t5294 + 0.0306*(t4267*t5282 + t4234*t5294) - 1.1312*(t4234*t5282 - 1.*t4267*t5294) + 0.1305*t4708*t719;
}


       
Eigen::Matrix<double,3,1> p_VectorNav_to_LeftToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void p_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



