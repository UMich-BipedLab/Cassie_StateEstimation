/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:55 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeBottom_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
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
static void output1(double *p_output1,const double *var1)
{
  double t479;
  double t1881;
  double t1927;
  double t1896;
  double t1930;
  double t1364;
  double t1452;
  double t1478;
  double t1607;
  double t1772;
  double t1910;
  double t1955;
  double t1967;
  double t2216;
  double t2372;
  double t2493;
  double t2514;
  double t1291;
  double t2772;
  double t2777;
  double t2784;
  double t2875;
  double t2994;
  double t3002;
  double t3121;
  double t3311;
  double t3313;
  double t3392;
  double t3682;
  double t3721;
  double t3771;
  double t3859;
  double t3861;
  double t3869;
  double t3879;
  double t3990;
  double t4007;
  double t4036;
  double t4167;
  double t4178;
  double t4190;
  double t4206;
  double t4207;
  double t4212;
  double t4216;
  double t4297;
  double t4300;
  double t4301;
  double t4335;
  double t4349;
  double t4365;
  double t4412;
  double t4419;
  double t4424;
  double t4448;
  double t4457;
  double t4466;
  double t4472;
  double t4511;
  double t4512;
  double t4524;
  double t4530;
  double t4538;
  double t4548;
  double t4578;
  double t4587;
  double t4592;
  double t4602;
  double t4626;
  double t4628;
  double t4629;
  double t1523;
  double t1654;
  double t1671;
  double t1801;
  double t1868;
  double t2241;
  double t2252;
  double t2272;
  double t2312;
  double t2644;
  double t2703;
  double t2753;
  double t4715;
  double t4722;
  double t4724;
  double t4728;
  double t4730;
  double t4731;
  double t3057;
  double t3145;
  double t3205;
  double t4743;
  double t4744;
  double t4767;
  double t3587;
  double t3665;
  double t3681;
  double t3877;
  double t3911;
  double t3981;
  double t4777;
  double t4779;
  double t4796;
  double t4840;
  double t4859;
  double t4864;
  double t4101;
  double t4137;
  double t4144;
  double t4213;
  double t4266;
  double t4291;
  double t4868;
  double t4870;
  double t4875;
  double t4883;
  double t4886;
  double t4894;
  double t4319;
  double t4320;
  double t4330;
  double t4439;
  double t4452;
  double t4456;
  double t4904;
  double t4908;
  double t4922;
  double t4933;
  double t4945;
  double t4948;
  double t4487;
  double t4495;
  double t4504;
  double t4567;
  double t4582;
  double t4585;
  double t4964;
  double t4965;
  double t4986;
  double t5002;
  double t5007;
  double t5011;
  double t4605;
  double t4610;
  double t4611;
  double t5019;
  double t5041;
  double t5050;
  double t5059;
  double t5069;
  double t5070;
  double t5162;
  double t5170;
  double t5174;
  double t5177;
  double t5178;
  double t5179;
  double t5216;
  double t5222;
  double t5223;
  double t5229;
  double t5230;
  double t5231;
  double t5243;
  double t5245;
  double t5251;
  double t5255;
  double t5256;
  double t5257;
  double t5262;
  double t5263;
  double t5265;
  double t5268;
  double t5270;
  double t5271;
  double t5274;
  double t5280;
  double t5282;
  double t5287;
  double t5288;
  double t5297;
  double t5299;
  double t5302;
  double t5305;
  t479 = Cos(var1[3]);
  t1881 = Cos(var1[5]);
  t1927 = Sin(var1[3]);
  t1896 = Sin(var1[4]);
  t1930 = Sin(var1[5]);
  t1364 = Cos(var1[14]);
  t1452 = -1.*t1364;
  t1478 = 1. + t1452;
  t1607 = Sin(var1[14]);
  t1772 = Sin(var1[13]);
  t1910 = t479*t1881*t1896;
  t1955 = t1927*t1930;
  t1967 = t1910 + t1955;
  t2216 = Cos(var1[13]);
  t2372 = -1.*t1881*t1927;
  t2493 = t479*t1896*t1930;
  t2514 = t2372 + t2493;
  t1291 = Cos(var1[4]);
  t2772 = t1772*t1967;
  t2777 = t2216*t2514;
  t2784 = t2772 + t2777;
  t2875 = Cos(var1[15]);
  t2994 = -1.*t2875;
  t3002 = 1. + t2994;
  t3121 = Sin(var1[15]);
  t3311 = t2216*t1967;
  t3313 = -1.*t1772*t2514;
  t3392 = t3311 + t3313;
  t3682 = t1364*t479*t1291;
  t3721 = t1607*t2784;
  t3771 = t3682 + t3721;
  t3859 = Cos(var1[16]);
  t3861 = -1.*t3859;
  t3869 = 1. + t3861;
  t3879 = Sin(var1[16]);
  t3990 = t3121*t3392;
  t4007 = t2875*t3771;
  t4036 = t3990 + t4007;
  t4167 = t2875*t3392;
  t4178 = -1.*t3121*t3771;
  t4190 = t4167 + t4178;
  t4206 = Cos(var1[17]);
  t4207 = -1.*t4206;
  t4212 = 1. + t4207;
  t4216 = Sin(var1[17]);
  t4297 = -1.*t3879*t4036;
  t4300 = t3859*t4190;
  t4301 = t4297 + t4300;
  t4335 = t3859*t4036;
  t4349 = t3879*t4190;
  t4365 = t4335 + t4349;
  t4412 = Cos(var1[18]);
  t4419 = -1.*t4412;
  t4424 = 1. + t4419;
  t4448 = Sin(var1[18]);
  t4457 = t4216*t4301;
  t4466 = t4206*t4365;
  t4472 = t4457 + t4466;
  t4511 = t4206*t4301;
  t4512 = -1.*t4216*t4365;
  t4524 = t4511 + t4512;
  t4530 = Cos(var1[19]);
  t4538 = -1.*t4530;
  t4548 = 1. + t4538;
  t4578 = Sin(var1[19]);
  t4587 = -1.*t4448*t4472;
  t4592 = t4412*t4524;
  t4602 = t4587 + t4592;
  t4626 = t4412*t4472;
  t4628 = t4448*t4524;
  t4629 = t4626 + t4628;
  t1523 = -0.049*t1478;
  t1654 = -0.135*t1607;
  t1671 = 0. + t1523 + t1654;
  t1801 = 0.135*t1772;
  t1868 = 0. + t1801;
  t2241 = -1.*t2216;
  t2252 = 1. + t2241;
  t2272 = -0.135*t2252;
  t2312 = 0. + t2272;
  t2644 = -0.135*t1478;
  t2703 = 0.049*t1607;
  t2753 = 0. + t2644 + t2703;
  t4715 = t1881*t1927*t1896;
  t4722 = -1.*t479*t1930;
  t4724 = t4715 + t4722;
  t4728 = t479*t1881;
  t4730 = t1927*t1896*t1930;
  t4731 = t4728 + t4730;
  t3057 = -0.09*t3002;
  t3145 = 0.049*t3121;
  t3205 = 0. + t3057 + t3145;
  t4743 = t1772*t4724;
  t4744 = t2216*t4731;
  t4767 = t4743 + t4744;
  t3587 = -0.049*t3002;
  t3665 = -0.09*t3121;
  t3681 = 0. + t3587 + t3665;
  t3877 = -0.049*t3869;
  t3911 = -0.21*t3879;
  t3981 = 0. + t3877 + t3911;
  t4777 = t2216*t4724;
  t4779 = -1.*t1772*t4731;
  t4796 = t4777 + t4779;
  t4840 = t1364*t1291*t1927;
  t4859 = t1607*t4767;
  t4864 = t4840 + t4859;
  t4101 = -0.21*t3869;
  t4137 = 0.049*t3879;
  t4144 = 0. + t4101 + t4137;
  t4213 = -0.2707*t4212;
  t4266 = 0.0016*t4216;
  t4291 = 0. + t4213 + t4266;
  t4868 = t3121*t4796;
  t4870 = t2875*t4864;
  t4875 = t4868 + t4870;
  t4883 = t2875*t4796;
  t4886 = -1.*t3121*t4864;
  t4894 = t4883 + t4886;
  t4319 = -0.0016*t4212;
  t4320 = -0.2707*t4216;
  t4330 = 0. + t4319 + t4320;
  t4439 = 0.0184*t4424;
  t4452 = -0.7055*t4448;
  t4456 = 0. + t4439 + t4452;
  t4904 = -1.*t3879*t4875;
  t4908 = t3859*t4894;
  t4922 = t4904 + t4908;
  t4933 = t3859*t4875;
  t4945 = t3879*t4894;
  t4948 = t4933 + t4945;
  t4487 = -0.7055*t4424;
  t4495 = -0.0184*t4448;
  t4504 = 0. + t4487 + t4495;
  t4567 = -1.1135*t4548;
  t4582 = 0.0216*t4578;
  t4585 = 0. + t4567 + t4582;
  t4964 = t4216*t4922;
  t4965 = t4206*t4948;
  t4986 = t4964 + t4965;
  t5002 = t4206*t4922;
  t5007 = -1.*t4216*t4948;
  t5011 = t5002 + t5007;
  t4605 = -0.0216*t4548;
  t4610 = -1.1135*t4578;
  t4611 = 0. + t4605 + t4610;
  t5019 = -1.*t4448*t4986;
  t5041 = t4412*t5011;
  t5050 = t5019 + t5041;
  t5059 = t4412*t4986;
  t5069 = t4448*t5011;
  t5070 = t5059 + t5069;
  t5162 = t1291*t1881*t1772;
  t5170 = t2216*t1291*t1930;
  t5174 = t5162 + t5170;
  t5177 = t2216*t1291*t1881;
  t5178 = -1.*t1291*t1772*t1930;
  t5179 = t5177 + t5178;
  t5216 = -1.*t1364*t1896;
  t5222 = t1607*t5174;
  t5223 = t5216 + t5222;
  t5229 = t3121*t5179;
  t5230 = t2875*t5223;
  t5231 = t5229 + t5230;
  t5243 = t2875*t5179;
  t5245 = -1.*t3121*t5223;
  t5251 = t5243 + t5245;
  t5255 = -1.*t3879*t5231;
  t5256 = t3859*t5251;
  t5257 = t5255 + t5256;
  t5262 = t3859*t5231;
  t5263 = t3879*t5251;
  t5265 = t5262 + t5263;
  t5268 = t4216*t5257;
  t5270 = t4206*t5265;
  t5271 = t5268 + t5270;
  t5274 = t4206*t5257;
  t5280 = -1.*t4216*t5265;
  t5282 = t5274 + t5280;
  t5287 = -1.*t4448*t5271;
  t5288 = t4412*t5282;
  t5297 = t5287 + t5288;
  t5299 = t4412*t5271;
  t5302 = t4448*t5282;
  t5305 = t5299 + t5302;
  p_output1[0]=0. + t1868*t1967 + t2312*t2514 + t2753*t2784 + t3205*t3392 + t3681*t3771 + t3981*t4036 + t4144*t4190 + t4291*t4301 + t4330*t4365 + t4456*t4472 + t4504*t4524 + t4585*t4602 + t4611*t4629 + 0.0306*(t4578*t4602 + t4530*t4629) - 1.1312*(t4530*t4602 - 1.*t4578*t4629) + t1291*t1671*t479 - 0.1305*(t1364*t2784 - 1.*t1291*t1607*t479) + var1[0];
  p_output1[1]=0. + t1291*t1671*t1927 + t1868*t4724 + t2312*t4731 + t2753*t4767 - 0.1305*(-1.*t1291*t1607*t1927 + t1364*t4767) + t3205*t4796 + t3681*t4864 + t3981*t4875 + t4144*t4894 + t4291*t4922 + t4330*t4948 + t4456*t4986 + t4504*t5011 + t4585*t5050 + t4611*t5070 + 0.0306*(t4578*t5050 + t4530*t5070) - 1.1312*(t4530*t5050 - 1.*t4578*t5070) + var1[1];
  p_output1[2]=0. + t1291*t1868*t1881 - 1.*t1671*t1896 + t1291*t1930*t2312 + t2753*t5174 - 0.1305*(t1607*t1896 + t1364*t5174) + t3205*t5179 + t3681*t5223 + t3981*t5231 + t4144*t5251 + t4291*t5257 + t4330*t5265 + t4456*t5271 + t4504*t5282 + t4585*t5297 + t4611*t5305 + 0.0306*(t4578*t5297 + t4530*t5305) - 1.1312*(t4530*t5297 - 1.*t4578*t5305) + var1[2];
}



void p_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
