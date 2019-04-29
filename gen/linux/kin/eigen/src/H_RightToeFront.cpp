/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:49 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeFront.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t22;
  double t349;
  double t475;
  double t350;
  double t484;
  double t41;
  double t69;
  double t281;
  double t341;
  double t550;
  double t423;
  double t499;
  double t514;
  double t603;
  double t608;
  double t609;
  double t525;
  double t674;
  double t695;
  double t1892;
  double t1841;
  double t1854;
  double t1870;
  double t1759;
  double t1975;
  double t1992;
  double t2019;
  double t2108;
  double t1886;
  double t2020;
  double t2079;
  double t1754;
  double t2152;
  double t2203;
  double t2231;
  double t2372;
  double t2100;
  double t2256;
  double t2268;
  double t1738;
  double t2379;
  double t2386;
  double t2509;
  double t2675;
  double t2321;
  double t2590;
  double t2670;
  double t1715;
  double t2681;
  double t2697;
  double t2713;
  double t2868;
  double t2671;
  double t2739;
  double t2780;
  double t1692;
  double t2908;
  double t2913;
  double t2954;
  double t1019;
  double t1032;
  double t1035;
  double t1123;
  double t1355;
  double t1382;
  double t1093;
  double t1398;
  double t1436;
  double t3269;
  double t3276;
  double t3284;
  double t3306;
  double t3366;
  double t3426;
  double t3292;
  double t3461;
  double t3476;
  double t3492;
  double t3507;
  double t3529;
  double t3482;
  double t3533;
  double t3567;
  double t3619;
  double t3627;
  double t3631;
  double t3585;
  double t3645;
  double t3656;
  double t3670;
  double t3676;
  double t3687;
  double t3661;
  double t3690;
  double t3723;
  double t3787;
  double t3791;
  double t3822;
  double t1489;
  double t1562;
  double t1592;
  double t3965;
  double t3969;
  double t4003;
  double t4086;
  double t4143;
  double t4145;
  double t4058;
  double t4156;
  double t4173;
  double t4194;
  double t4206;
  double t4210;
  double t4192;
  double t4214;
  double t4217;
  double t4275;
  double t4299;
  double t4318;
  double t4237;
  double t4346;
  double t4364;
  double t4390;
  double t4392;
  double t4396;
  double t4387;
  double t4399;
  double t4408;
  double t4414;
  double t4429;
  double t4471;
  double t2830;
  double t2990;
  double t3011;
  double t3220;
  double t3224;
  double t3235;
  double t3781;
  double t3869;
  double t3899;
  double t3928;
  double t3933;
  double t3939;
  double t4413;
  double t4473;
  double t4483;
  double t4496;
  double t4513;
  double t4516;
  double t4715;
  double t4726;
  double t4964;
  double t4973;
  double t5104;
  double t5121;
  double t5215;
  double t5223;
  double t5287;
  double t5288;
  double t5320;
  double t5327;
  double t4730;
  double t4738;
  double t4742;
  double t4804;
  double t4805;
  double t4819;
  double t4833;
  double t4838;
  double t4845;
  double t4877;
  double t4904;
  double t4916;
  double t4980;
  double t4981;
  double t4999;
  double t5080;
  double t5082;
  double t5089;
  double t5130;
  double t5131;
  double t5135;
  double t5153;
  double t5157;
  double t5184;
  double t5225;
  double t5249;
  double t5250;
  double t5260;
  double t5268;
  double t5270;
  double t5291;
  double t5296;
  double t5300;
  double t5303;
  double t5309;
  double t5315;
  double t5333;
  double t5334;
  double t5346;
  double t5366;
  double t5375;
  double t5378;
  t22 = Cos(var1[3]);
  t349 = Cos(var1[5]);
  t475 = Sin(var1[3]);
  t350 = Sin(var1[4]);
  t484 = Sin(var1[5]);
  t41 = Cos(var1[4]);
  t69 = Sin(var1[14]);
  t281 = Cos(var1[14]);
  t341 = Sin(var1[13]);
  t550 = Cos(var1[13]);
  t423 = t22*t349*t350;
  t499 = t475*t484;
  t514 = t423 + t499;
  t603 = -1.*t349*t475;
  t608 = t22*t350*t484;
  t609 = t603 + t608;
  t525 = t341*t514;
  t674 = t550*t609;
  t695 = t525 + t674;
  t1892 = Cos(var1[15]);
  t1841 = t550*t514;
  t1854 = -1.*t341*t609;
  t1870 = t1841 + t1854;
  t1759 = Sin(var1[15]);
  t1975 = t281*t22*t41;
  t1992 = t69*t695;
  t2019 = t1975 + t1992;
  t2108 = Cos(var1[16]);
  t1886 = t1759*t1870;
  t2020 = t1892*t2019;
  t2079 = t1886 + t2020;
  t1754 = Sin(var1[16]);
  t2152 = t1892*t1870;
  t2203 = -1.*t1759*t2019;
  t2231 = t2152 + t2203;
  t2372 = Cos(var1[17]);
  t2100 = -1.*t1754*t2079;
  t2256 = t2108*t2231;
  t2268 = t2100 + t2256;
  t1738 = Sin(var1[17]);
  t2379 = t2108*t2079;
  t2386 = t1754*t2231;
  t2509 = t2379 + t2386;
  t2675 = Cos(var1[18]);
  t2321 = t1738*t2268;
  t2590 = t2372*t2509;
  t2670 = t2321 + t2590;
  t1715 = Sin(var1[18]);
  t2681 = t2372*t2268;
  t2697 = -1.*t1738*t2509;
  t2713 = t2681 + t2697;
  t2868 = Cos(var1[19]);
  t2671 = -1.*t1715*t2670;
  t2739 = t2675*t2713;
  t2780 = t2671 + t2739;
  t1692 = Sin(var1[19]);
  t2908 = t2675*t2670;
  t2913 = t1715*t2713;
  t2954 = t2908 + t2913;
  t1019 = t349*t475*t350;
  t1032 = -1.*t22*t484;
  t1035 = t1019 + t1032;
  t1123 = t22*t349;
  t1355 = t475*t350*t484;
  t1382 = t1123 + t1355;
  t1093 = t341*t1035;
  t1398 = t550*t1382;
  t1436 = t1093 + t1398;
  t3269 = t550*t1035;
  t3276 = -1.*t341*t1382;
  t3284 = t3269 + t3276;
  t3306 = t281*t41*t475;
  t3366 = t69*t1436;
  t3426 = t3306 + t3366;
  t3292 = t1759*t3284;
  t3461 = t1892*t3426;
  t3476 = t3292 + t3461;
  t3492 = t1892*t3284;
  t3507 = -1.*t1759*t3426;
  t3529 = t3492 + t3507;
  t3482 = -1.*t1754*t3476;
  t3533 = t2108*t3529;
  t3567 = t3482 + t3533;
  t3619 = t2108*t3476;
  t3627 = t1754*t3529;
  t3631 = t3619 + t3627;
  t3585 = t1738*t3567;
  t3645 = t2372*t3631;
  t3656 = t3585 + t3645;
  t3670 = t2372*t3567;
  t3676 = -1.*t1738*t3631;
  t3687 = t3670 + t3676;
  t3661 = -1.*t1715*t3656;
  t3690 = t2675*t3687;
  t3723 = t3661 + t3690;
  t3787 = t2675*t3656;
  t3791 = t1715*t3687;
  t3822 = t3787 + t3791;
  t1489 = t41*t349*t341;
  t1562 = t550*t41*t484;
  t1592 = t1489 + t1562;
  t3965 = t550*t41*t349;
  t3969 = -1.*t41*t341*t484;
  t4003 = t3965 + t3969;
  t4086 = -1.*t281*t350;
  t4143 = t69*t1592;
  t4145 = t4086 + t4143;
  t4058 = t1759*t4003;
  t4156 = t1892*t4145;
  t4173 = t4058 + t4156;
  t4194 = t1892*t4003;
  t4206 = -1.*t1759*t4145;
  t4210 = t4194 + t4206;
  t4192 = -1.*t1754*t4173;
  t4214 = t2108*t4210;
  t4217 = t4192 + t4214;
  t4275 = t2108*t4173;
  t4299 = t1754*t4210;
  t4318 = t4275 + t4299;
  t4237 = t1738*t4217;
  t4346 = t2372*t4318;
  t4364 = t4237 + t4346;
  t4390 = t2372*t4217;
  t4392 = -1.*t1738*t4318;
  t4396 = t4390 + t4392;
  t4387 = -1.*t1715*t4364;
  t4399 = t2675*t4396;
  t4408 = t4387 + t4399;
  t4414 = t2675*t4364;
  t4429 = t1715*t4396;
  t4471 = t4414 + t4429;
  t2830 = t1692*t2780;
  t2990 = t2868*t2954;
  t3011 = t2830 + t2990;
  t3220 = t2868*t2780;
  t3224 = -1.*t1692*t2954;
  t3235 = t3220 + t3224;
  t3781 = t1692*t3723;
  t3869 = t2868*t3822;
  t3899 = t3781 + t3869;
  t3928 = t2868*t3723;
  t3933 = -1.*t1692*t3822;
  t3939 = t3928 + t3933;
  t4413 = t1692*t4408;
  t4473 = t2868*t4471;
  t4483 = t4413 + t4473;
  t4496 = t2868*t4408;
  t4513 = -1.*t1692*t4471;
  t4516 = t4496 + t4513;
  t4715 = -1.*t281;
  t4726 = 1. + t4715;
  t4964 = -1.*t1892;
  t4973 = 1. + t4964;
  t5104 = -1.*t2108;
  t5121 = 1. + t5104;
  t5215 = -1.*t2372;
  t5223 = 1. + t5215;
  t5287 = -1.*t2675;
  t5288 = 1. + t5287;
  t5320 = -1.*t2868;
  t5327 = 1. + t5320;
  t4730 = -0.049*t4726;
  t4738 = -0.135*t69;
  t4742 = 0. + t4730 + t4738;
  t4804 = 0.135*t341;
  t4805 = 0. + t4804;
  t4819 = -1.*t550;
  t4833 = 1. + t4819;
  t4838 = -0.135*t4833;
  t4845 = 0. + t4838;
  t4877 = -0.135*t4726;
  t4904 = 0.049*t69;
  t4916 = 0. + t4877 + t4904;
  t4980 = -0.09*t4973;
  t4981 = 0.049*t1759;
  t4999 = 0. + t4980 + t4981;
  t5080 = -0.049*t4973;
  t5082 = -0.09*t1759;
  t5089 = 0. + t5080 + t5082;
  t5130 = -0.049*t5121;
  t5131 = -0.21*t1754;
  t5135 = 0. + t5130 + t5131;
  t5153 = -0.21*t5121;
  t5157 = 0.049*t1754;
  t5184 = 0. + t5153 + t5157;
  t5225 = -0.2707*t5223;
  t5249 = 0.0016*t1738;
  t5250 = 0. + t5225 + t5249;
  t5260 = -0.0016*t5223;
  t5268 = -0.2707*t1738;
  t5270 = 0. + t5260 + t5268;
  t5291 = 0.0184*t5288;
  t5296 = -0.7055*t1715;
  t5300 = 0. + t5291 + t5296;
  t5303 = -0.7055*t5288;
  t5309 = -0.0184*t1715;
  t5315 = 0. + t5303 + t5309;
  t5333 = -1.1135*t5327;
  t5334 = 0.0216*t1692;
  t5346 = 0. + t5333 + t5334;
  t5366 = -0.0216*t5327;
  t5375 = -1.1135*t1692;
  t5378 = 0. + t5366 + t5375;

  p_output1(0)=t22*t41*t69 - 1.*t281*t695;
  p_output1(1)=-1.*t1436*t281 + t41*t475*t69;
  p_output1(2)=-1.*t1592*t281 - 1.*t350*t69;
  p_output1(3)=0.;
  p_output1(4)=0.642788*t3011 + 0.766044*t3235;
  p_output1(5)=0.642788*t3899 + 0.766044*t3939;
  p_output1(6)=0.642788*t4483 + 0.766044*t4516;
  p_output1(7)=0.;
  p_output1(8)=-0.766044*t3011 + 0.642788*t3235;
  p_output1(9)=-0.766044*t3899 + 0.642788*t3939;
  p_output1(10)=-0.766044*t4483 + 0.642788*t4516;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.088451*t3011 - 1.062256*t3235 + t22*t41*t4742 + t1870*t4999 + t2019*t5089 + t2079*t5135 + t4805*t514 + t2231*t5184 + t2268*t5250 + t2509*t5270 + t2670*t5300 + t2713*t5315 + t2780*t5346 + t2954*t5378 + t4845*t609 + t4916*t695 - 0.1305*(-1.*t22*t41*t69 + t281*t695) + var1(0);
  p_output1(13)=0. + 0.088451*t3899 - 1.062256*t3939 + t41*t4742*t475 + t1035*t4805 + t1382*t4845 + t1436*t4916 + t3284*t4999 + t3426*t5089 + t3476*t5135 + t3529*t5184 + t3567*t5250 + t3631*t5270 + t3656*t5300 + t3687*t5315 + t3723*t5346 + t3822*t5378 - 0.1305*(t1436*t281 - 1.*t41*t475*t69) + var1(1);
  p_output1(14)=0. + 0.088451*t4483 - 1.062256*t4516 - 1.*t350*t4742 + t349*t41*t4805 + t41*t484*t4845 + t1592*t4916 + t4003*t4999 + t4145*t5089 + t4173*t5135 + t4210*t5184 + t4217*t5250 + t4318*t5270 + t4364*t5300 + t4396*t5315 + t4408*t5346 + t4471*t5378 - 0.1305*(t1592*t281 + t350*t69) + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RightToeFront(const Eigen::Matrix<double,20,1> &var1)
//void H_RightToeFront(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



