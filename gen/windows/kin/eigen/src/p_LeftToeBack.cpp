/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:10:22 GMT-04:00
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
  double t924;
  double t699;
  double t942;
  double t830;
  double t990;
  double t315;
  double t913;
  double t1093;
  double t1162;
  double t1210;
  double t1236;
  double t1304;
  double t1518;
  double t1841;
  double t1889;
  double t2007;
  double t2053;
  double t1697;
  double t1723;
  double t1763;
  double t2218;
  double t2731;
  double t2754;
  double t2780;
  double t2944;
  double t2670;
  double t2706;
  double t2709;
  double t3014;
  double t3038;
  double t3064;
  double t3135;
  double t3229;
  double t3274;
  double t3418;
  double t3495;
  double t3516;
  double t3534;
  double t3735;
  double t3754;
  double t3773;
  double t3886;
  double t3893;
  double t3900;
  double t3950;
  double t3983;
  double t4044;
  double t4085;
  double t4200;
  double t4235;
  double t4302;
  double t4335;
  double t4346;
  double t4366;
  double t4474;
  double t4498;
  double t4530;
  double t4535;
  double t4663;
  double t4669;
  double t4675;
  double t4691;
  double t4694;
  double t4722;
  double t4744;
  double t4764;
  double t4782;
  double t4825;
  double t4913;
  double t4917;
  double t4942;
  double t367;
  double t385;
  double t563;
  double t680;
  double t1581;
  double t1634;
  double t5029;
  double t5057;
  double t5069;
  double t5093;
  double t5119;
  double t5136;
  double t2052;
  double t2099;
  double t2100;
  double t2372;
  double t2373;
  double t2390;
  double t5174;
  double t5177;
  double t5209;
  double t2902;
  double t2945;
  double t2953;
  double t3079;
  double t3082;
  double t3087;
  double t3417;
  double t3454;
  double t3469;
  double t5271;
  double t5289;
  double t5300;
  double t5316;
  double t5325;
  double t5350;
  double t3640;
  double t3702;
  double t3734;
  double t3941;
  double t3967;
  double t3969;
  double t5377;
  double t5398;
  double t5407;
  double t5421;
  double t5427;
  double t5446;
  double t4099;
  double t4141;
  double t4165;
  double t4415;
  double t4484;
  double t4496;
  double t5469;
  double t5477;
  double t5494;
  double t5506;
  double t5514;
  double t5518;
  double t4573;
  double t4588;
  double t4612;
  double t4739;
  double t4753;
  double t4754;
  double t5542;
  double t5547;
  double t5560;
  double t5591;
  double t5599;
  double t5628;
  double t4881;
  double t4898;
  double t4904;
  double t5640;
  double t5663;
  double t5672;
  double t5694;
  double t5700;
  double t5711;
  double t5848;
  double t5853;
  double t5873;
  double t5933;
  double t5936;
  double t5944;
  double t5947;
  double t5950;
  double t5953;
  double t5961;
  double t5970;
  double t5971;
  double t5978;
  double t5988;
  double t5994;
  double t6000;
  double t6002;
  double t6005;
  double t6024;
  double t6041;
  double t6042;
  double t6054;
  double t6068;
  double t6083;
  double t6093;
  double t6094;
  double t6095;
  double t6102;
  double t6103;
  double t6106;
  double t6121;
  double t6123;
  double t6125;
  t924 = Cos(var1[3]);
  t699 = Cos(var1[5]);
  t942 = Sin(var1[4]);
  t830 = Sin(var1[3]);
  t990 = Sin(var1[5]);
  t315 = Cos(var1[6]);
  t913 = -1.*t699*t830;
  t1093 = t924*t942*t990;
  t1162 = t913 + t1093;
  t1210 = t924*t699*t942;
  t1236 = t830*t990;
  t1304 = t1210 + t1236;
  t1518 = Sin(var1[6]);
  t1841 = Cos(var1[7]);
  t1889 = -1.*t1841;
  t2007 = 1. + t1889;
  t2053 = Sin(var1[7]);
  t1697 = t315*t1162;
  t1723 = t1304*t1518;
  t1763 = t1697 + t1723;
  t2218 = Cos(var1[4]);
  t2731 = Cos(var1[8]);
  t2754 = -1.*t2731;
  t2780 = 1. + t2754;
  t2944 = Sin(var1[8]);
  t2670 = t924*t2218*t1841;
  t2706 = t1763*t2053;
  t2709 = t2670 + t2706;
  t3014 = t315*t1304;
  t3038 = -1.*t1162*t1518;
  t3064 = t3014 + t3038;
  t3135 = Cos(var1[9]);
  t3229 = -1.*t3135;
  t3274 = 1. + t3229;
  t3418 = Sin(var1[9]);
  t3495 = t2731*t2709;
  t3516 = t3064*t2944;
  t3534 = t3495 + t3516;
  t3735 = t2731*t3064;
  t3754 = -1.*t2709*t2944;
  t3773 = t3735 + t3754;
  t3886 = Cos(var1[10]);
  t3893 = -1.*t3886;
  t3900 = 1. + t3893;
  t3950 = Sin(var1[10]);
  t3983 = -1.*t3418*t3534;
  t4044 = t3135*t3773;
  t4085 = t3983 + t4044;
  t4200 = t3135*t3534;
  t4235 = t3418*t3773;
  t4302 = t4200 + t4235;
  t4335 = Cos(var1[11]);
  t4346 = -1.*t4335;
  t4366 = 1. + t4346;
  t4474 = Sin(var1[11]);
  t4498 = t3950*t4085;
  t4530 = t3886*t4302;
  t4535 = t4498 + t4530;
  t4663 = t3886*t4085;
  t4669 = -1.*t3950*t4302;
  t4675 = t4663 + t4669;
  t4691 = Cos(var1[12]);
  t4694 = -1.*t4691;
  t4722 = 1. + t4694;
  t4744 = Sin(var1[12]);
  t4764 = -1.*t4474*t4535;
  t4782 = t4335*t4675;
  t4825 = t4764 + t4782;
  t4913 = t4335*t4535;
  t4917 = t4474*t4675;
  t4942 = t4913 + t4917;
  t367 = -1.*t315;
  t385 = 1. + t367;
  t563 = 0.135*t385;
  t680 = 0. + t563;
  t1581 = -0.135*t1518;
  t1634 = 0. + t1581;
  t5029 = t924*t699;
  t5057 = t830*t942*t990;
  t5069 = t5029 + t5057;
  t5093 = t699*t830*t942;
  t5119 = -1.*t924*t990;
  t5136 = t5093 + t5119;
  t2052 = 0.135*t2007;
  t2099 = 0.049*t2053;
  t2100 = 0. + t2052 + t2099;
  t2372 = -0.049*t2007;
  t2373 = 0.135*t2053;
  t2390 = 0. + t2372 + t2373;
  t5174 = t315*t5069;
  t5177 = t5136*t1518;
  t5209 = t5174 + t5177;
  t2902 = -0.049*t2780;
  t2945 = -0.09*t2944;
  t2953 = 0. + t2902 + t2945;
  t3079 = -0.09*t2780;
  t3082 = 0.049*t2944;
  t3087 = 0. + t3079 + t3082;
  t3417 = -0.049*t3274;
  t3454 = -0.21*t3418;
  t3469 = 0. + t3417 + t3454;
  t5271 = t2218*t1841*t830;
  t5289 = t5209*t2053;
  t5300 = t5271 + t5289;
  t5316 = t315*t5136;
  t5325 = -1.*t5069*t1518;
  t5350 = t5316 + t5325;
  t3640 = -0.21*t3274;
  t3702 = 0.049*t3418;
  t3734 = 0. + t3640 + t3702;
  t3941 = -0.2707*t3900;
  t3967 = 0.0016*t3950;
  t3969 = 0. + t3941 + t3967;
  t5377 = t2731*t5300;
  t5398 = t5350*t2944;
  t5407 = t5377 + t5398;
  t5421 = t2731*t5350;
  t5427 = -1.*t5300*t2944;
  t5446 = t5421 + t5427;
  t4099 = -0.0016*t3900;
  t4141 = -0.2707*t3950;
  t4165 = 0. + t4099 + t4141;
  t4415 = 0.0184*t4366;
  t4484 = -0.7055*t4474;
  t4496 = 0. + t4415 + t4484;
  t5469 = -1.*t3418*t5407;
  t5477 = t3135*t5446;
  t5494 = t5469 + t5477;
  t5506 = t3135*t5407;
  t5514 = t3418*t5446;
  t5518 = t5506 + t5514;
  t4573 = -0.7055*t4366;
  t4588 = -0.0184*t4474;
  t4612 = 0. + t4573 + t4588;
  t4739 = -1.1135*t4722;
  t4753 = 0.0216*t4744;
  t4754 = 0. + t4739 + t4753;
  t5542 = t3950*t5494;
  t5547 = t3886*t5518;
  t5560 = t5542 + t5547;
  t5591 = t3886*t5494;
  t5599 = -1.*t3950*t5518;
  t5628 = t5591 + t5599;
  t4881 = -0.0216*t4722;
  t4898 = -1.1135*t4744;
  t4904 = 0. + t4881 + t4898;
  t5640 = -1.*t4474*t5560;
  t5663 = t4335*t5628;
  t5672 = t5640 + t5663;
  t5694 = t4335*t5560;
  t5700 = t4474*t5628;
  t5711 = t5694 + t5700;
  t5848 = t2218*t315*t990;
  t5853 = t2218*t699*t1518;
  t5873 = t5848 + t5853;
  t5933 = -1.*t1841*t942;
  t5936 = t5873*t2053;
  t5944 = t5933 + t5936;
  t5947 = t2218*t699*t315;
  t5950 = -1.*t2218*t990*t1518;
  t5953 = t5947 + t5950;
  t5961 = t2731*t5944;
  t5970 = t5953*t2944;
  t5971 = t5961 + t5970;
  t5978 = t2731*t5953;
  t5988 = -1.*t5944*t2944;
  t5994 = t5978 + t5988;
  t6000 = -1.*t3418*t5971;
  t6002 = t3135*t5994;
  t6005 = t6000 + t6002;
  t6024 = t3135*t5971;
  t6041 = t3418*t5994;
  t6042 = t6024 + t6041;
  t6054 = t3950*t6005;
  t6068 = t3886*t6042;
  t6083 = t6054 + t6068;
  t6093 = t3886*t6005;
  t6094 = -1.*t3950*t6042;
  t6095 = t6093 + t6094;
  t6102 = -1.*t4474*t6083;
  t6103 = t4335*t6095;
  t6106 = t6102 + t6103;
  t6121 = t4335*t6083;
  t6123 = t4474*t6095;
  t6125 = t6121 + t6123;

  p_output1(0)=0. + t1304*t1634 + t1763*t2100 + t2709*t2953 + t3064*t3087 + t3469*t3534 + t3734*t3773 + t3969*t4085 + t4165*t4302 + t4496*t4535 + t4612*t4675 + t4754*t4825 + t4904*t4942 - 0.027251*(t4744*t4825 + t4691*t4942) - 1.200144*(t4691*t4825 - 1.*t4744*t4942) + t1162*t680 + t2218*t2390*t924 + 0.1305*(t1763*t1841 - 1.*t2053*t2218*t924) + var1(0);
  p_output1(1)=0. + t1634*t5136 + t2100*t5209 + t2953*t5300 + t3087*t5350 + t3469*t5407 + t3734*t5446 + t3969*t5494 + t4165*t5518 + t4496*t5560 + t4612*t5628 + t4754*t5672 + t4904*t5711 - 0.027251*(t4744*t5672 + t4691*t5711) - 1.200144*(t4691*t5672 - 1.*t4744*t5711) + t5069*t680 + t2218*t2390*t830 + 0.1305*(t1841*t5209 - 1.*t2053*t2218*t830) + var1(1);
  p_output1(2)=0. + t2100*t5873 + t2953*t5944 + t3087*t5953 + t3469*t5971 + t3734*t5994 + t3969*t6005 + t4165*t6042 + t4496*t6083 + t4612*t6095 + t4754*t6106 + t4904*t6125 - 0.027251*(t4744*t6106 + t4691*t6125) - 1.200144*(t4691*t6106 - 1.*t4744*t6125) + t1634*t2218*t699 - 1.*t2390*t942 + 0.1305*(t1841*t5873 + t2053*t942) + t2218*t680*t990 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_LeftToeBack(const Eigen::Matrix<double,20,1> &var1)
//void p_LeftToeBack(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



