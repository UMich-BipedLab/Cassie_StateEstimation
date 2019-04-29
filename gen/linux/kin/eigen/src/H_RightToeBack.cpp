/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:52 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeBack.h"

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
  double t26;
  double t308;
  double t551;
  double t324;
  double t584;
  double t178;
  double t179;
  double t265;
  double t295;
  double t705;
  double t427;
  double t631;
  double t675;
  double t731;
  double t742;
  double t770;
  double t679;
  double t816;
  double t858;
  double t1812;
  double t1725;
  double t1763;
  double t1789;
  double t1709;
  double t1813;
  double t1852;
  double t1856;
  double t1921;
  double t1802;
  double t1860;
  double t1880;
  double t1695;
  double t1936;
  double t1967;
  double t1990;
  double t2088;
  double t1903;
  double t1998;
  double t2022;
  double t1582;
  double t2217;
  double t2283;
  double t2307;
  double t2420;
  double t2032;
  double t2355;
  double t2366;
  double t1569;
  double t2445;
  double t2449;
  double t2467;
  double t2574;
  double t2412;
  double t2488;
  double t2546;
  double t1535;
  double t2578;
  double t2611;
  double t2627;
  double t1028;
  double t1031;
  double t1048;
  double t1057;
  double t1071;
  double t1155;
  double t1053;
  double t1194;
  double t1214;
  double t2766;
  double t2769;
  double t2774;
  double t2814;
  double t2831;
  double t2835;
  double t2795;
  double t2929;
  double t2947;
  double t2991;
  double t3008;
  double t3011;
  double t2953;
  double t3066;
  double t3078;
  double t3195;
  double t3263;
  double t3292;
  double t3105;
  double t3310;
  double t3311;
  double t3351;
  double t3358;
  double t3360;
  double t3342;
  double t3369;
  double t3373;
  double t3400;
  double t3403;
  double t3404;
  double t1437;
  double t1444;
  double t1469;
  double t3695;
  double t3723;
  double t3781;
  double t3792;
  double t3797;
  double t3839;
  double t3783;
  double t3858;
  double t3863;
  double t3890;
  double t3899;
  double t3914;
  double t3865;
  double t3961;
  double t3966;
  double t4026;
  double t4070;
  double t4115;
  double t4008;
  double t4163;
  double t4174;
  double t4214;
  double t4241;
  double t4271;
  double t4181;
  double t4296;
  double t4300;
  double t4331;
  double t4342;
  double t4372;
  double t2566;
  double t2633;
  double t2662;
  double t2685;
  double t2703;
  double t2721;
  double t3397;
  double t3435;
  double t3454;
  double t3546;
  double t3547;
  double t3554;
  double t4303;
  double t4385;
  double t4417;
  double t4481;
  double t4496;
  double t4553;
  double t4694;
  double t4702;
  double t4834;
  double t4836;
  double t5086;
  double t5096;
  double t5194;
  double t5204;
  double t5291;
  double t5296;
  double t5387;
  double t5389;
  double t4708;
  double t4716;
  double t4721;
  double t4729;
  double t4736;
  double t4750;
  double t4770;
  double t4776;
  double t4790;
  double t4793;
  double t4807;
  double t4808;
  double t4862;
  double t4865;
  double t4880;
  double t4985;
  double t5019;
  double t5061;
  double t5105;
  double t5114;
  double t5140;
  double t5151;
  double t5164;
  double t5165;
  double t5207;
  double t5212;
  double t5213;
  double t5248;
  double t5260;
  double t5267;
  double t5303;
  double t5309;
  double t5318;
  double t5333;
  double t5352;
  double t5364;
  double t5391;
  double t5398;
  double t5409;
  double t5418;
  double t5429;
  double t5439;
  t26 = Cos(var1[3]);
  t308 = Cos(var1[5]);
  t551 = Sin(var1[3]);
  t324 = Sin(var1[4]);
  t584 = Sin(var1[5]);
  t178 = Cos(var1[4]);
  t179 = Sin(var1[14]);
  t265 = Cos(var1[14]);
  t295 = Sin(var1[13]);
  t705 = Cos(var1[13]);
  t427 = t26*t308*t324;
  t631 = t551*t584;
  t675 = t427 + t631;
  t731 = -1.*t308*t551;
  t742 = t26*t324*t584;
  t770 = t731 + t742;
  t679 = t295*t675;
  t816 = t705*t770;
  t858 = t679 + t816;
  t1812 = Cos(var1[15]);
  t1725 = t705*t675;
  t1763 = -1.*t295*t770;
  t1789 = t1725 + t1763;
  t1709 = Sin(var1[15]);
  t1813 = t265*t26*t178;
  t1852 = t179*t858;
  t1856 = t1813 + t1852;
  t1921 = Cos(var1[16]);
  t1802 = t1709*t1789;
  t1860 = t1812*t1856;
  t1880 = t1802 + t1860;
  t1695 = Sin(var1[16]);
  t1936 = t1812*t1789;
  t1967 = -1.*t1709*t1856;
  t1990 = t1936 + t1967;
  t2088 = Cos(var1[17]);
  t1903 = -1.*t1695*t1880;
  t1998 = t1921*t1990;
  t2022 = t1903 + t1998;
  t1582 = Sin(var1[17]);
  t2217 = t1921*t1880;
  t2283 = t1695*t1990;
  t2307 = t2217 + t2283;
  t2420 = Cos(var1[18]);
  t2032 = t1582*t2022;
  t2355 = t2088*t2307;
  t2366 = t2032 + t2355;
  t1569 = Sin(var1[18]);
  t2445 = t2088*t2022;
  t2449 = -1.*t1582*t2307;
  t2467 = t2445 + t2449;
  t2574 = Cos(var1[19]);
  t2412 = -1.*t1569*t2366;
  t2488 = t2420*t2467;
  t2546 = t2412 + t2488;
  t1535 = Sin(var1[19]);
  t2578 = t2420*t2366;
  t2611 = t1569*t2467;
  t2627 = t2578 + t2611;
  t1028 = t308*t551*t324;
  t1031 = -1.*t26*t584;
  t1048 = t1028 + t1031;
  t1057 = t26*t308;
  t1071 = t551*t324*t584;
  t1155 = t1057 + t1071;
  t1053 = t295*t1048;
  t1194 = t705*t1155;
  t1214 = t1053 + t1194;
  t2766 = t705*t1048;
  t2769 = -1.*t295*t1155;
  t2774 = t2766 + t2769;
  t2814 = t265*t178*t551;
  t2831 = t179*t1214;
  t2835 = t2814 + t2831;
  t2795 = t1709*t2774;
  t2929 = t1812*t2835;
  t2947 = t2795 + t2929;
  t2991 = t1812*t2774;
  t3008 = -1.*t1709*t2835;
  t3011 = t2991 + t3008;
  t2953 = -1.*t1695*t2947;
  t3066 = t1921*t3011;
  t3078 = t2953 + t3066;
  t3195 = t1921*t2947;
  t3263 = t1695*t3011;
  t3292 = t3195 + t3263;
  t3105 = t1582*t3078;
  t3310 = t2088*t3292;
  t3311 = t3105 + t3310;
  t3351 = t2088*t3078;
  t3358 = -1.*t1582*t3292;
  t3360 = t3351 + t3358;
  t3342 = -1.*t1569*t3311;
  t3369 = t2420*t3360;
  t3373 = t3342 + t3369;
  t3400 = t2420*t3311;
  t3403 = t1569*t3360;
  t3404 = t3400 + t3403;
  t1437 = t178*t308*t295;
  t1444 = t705*t178*t584;
  t1469 = t1437 + t1444;
  t3695 = t705*t178*t308;
  t3723 = -1.*t178*t295*t584;
  t3781 = t3695 + t3723;
  t3792 = -1.*t265*t324;
  t3797 = t179*t1469;
  t3839 = t3792 + t3797;
  t3783 = t1709*t3781;
  t3858 = t1812*t3839;
  t3863 = t3783 + t3858;
  t3890 = t1812*t3781;
  t3899 = -1.*t1709*t3839;
  t3914 = t3890 + t3899;
  t3865 = -1.*t1695*t3863;
  t3961 = t1921*t3914;
  t3966 = t3865 + t3961;
  t4026 = t1921*t3863;
  t4070 = t1695*t3914;
  t4115 = t4026 + t4070;
  t4008 = t1582*t3966;
  t4163 = t2088*t4115;
  t4174 = t4008 + t4163;
  t4214 = t2088*t3966;
  t4241 = -1.*t1582*t4115;
  t4271 = t4214 + t4241;
  t4181 = -1.*t1569*t4174;
  t4296 = t2420*t4271;
  t4300 = t4181 + t4296;
  t4331 = t2420*t4174;
  t4342 = t1569*t4271;
  t4372 = t4331 + t4342;
  t2566 = t1535*t2546;
  t2633 = t2574*t2627;
  t2662 = t2566 + t2633;
  t2685 = t2574*t2546;
  t2703 = -1.*t1535*t2627;
  t2721 = t2685 + t2703;
  t3397 = t1535*t3373;
  t3435 = t2574*t3404;
  t3454 = t3397 + t3435;
  t3546 = t2574*t3373;
  t3547 = -1.*t1535*t3404;
  t3554 = t3546 + t3547;
  t4303 = t1535*t4300;
  t4385 = t2574*t4372;
  t4417 = t4303 + t4385;
  t4481 = t2574*t4300;
  t4496 = -1.*t1535*t4372;
  t4553 = t4481 + t4496;
  t4694 = -1.*t265;
  t4702 = 1. + t4694;
  t4834 = -1.*t1812;
  t4836 = 1. + t4834;
  t5086 = -1.*t1921;
  t5096 = 1. + t5086;
  t5194 = -1.*t2088;
  t5204 = 1. + t5194;
  t5291 = -1.*t2420;
  t5296 = 1. + t5291;
  t5387 = -1.*t2574;
  t5389 = 1. + t5387;
  t4708 = -0.049*t4702;
  t4716 = -0.135*t179;
  t4721 = 0. + t4708 + t4716;
  t4729 = 0.135*t295;
  t4736 = 0. + t4729;
  t4750 = -1.*t705;
  t4770 = 1. + t4750;
  t4776 = -0.135*t4770;
  t4790 = 0. + t4776;
  t4793 = -0.135*t4702;
  t4807 = 0.049*t179;
  t4808 = 0. + t4793 + t4807;
  t4862 = -0.09*t4836;
  t4865 = 0.049*t1709;
  t4880 = 0. + t4862 + t4865;
  t4985 = -0.049*t4836;
  t5019 = -0.09*t1709;
  t5061 = 0. + t4985 + t5019;
  t5105 = -0.049*t5096;
  t5114 = -0.21*t1695;
  t5140 = 0. + t5105 + t5114;
  t5151 = -0.21*t5096;
  t5164 = 0.049*t1695;
  t5165 = 0. + t5151 + t5164;
  t5207 = -0.2707*t5204;
  t5212 = 0.0016*t1582;
  t5213 = 0. + t5207 + t5212;
  t5248 = -0.0016*t5204;
  t5260 = -0.2707*t1582;
  t5267 = 0. + t5248 + t5260;
  t5303 = 0.0184*t5296;
  t5309 = -0.7055*t1569;
  t5318 = 0. + t5303 + t5309;
  t5333 = -0.7055*t5296;
  t5352 = -0.0184*t1569;
  t5364 = 0. + t5333 + t5352;
  t5391 = -1.1135*t5389;
  t5398 = 0.0216*t1535;
  t5409 = 0. + t5391 + t5398;
  t5418 = -0.0216*t5389;
  t5429 = -1.1135*t1535;
  t5439 = 0. + t5418 + t5429;

  p_output1(0)=t178*t179*t26 - 1.*t265*t858;
  p_output1(1)=-1.*t1214*t265 + t178*t179*t551;
  p_output1(2)=-1.*t1469*t265 - 1.*t179*t324;
  p_output1(3)=0.;
  p_output1(4)=0.642788*t2662 + 0.766044*t2721;
  p_output1(5)=0.642788*t3454 + 0.766044*t3554;
  p_output1(6)=0.642788*t4417 + 0.766044*t4553;
  p_output1(7)=0.;
  p_output1(8)=-0.766044*t2662 + 0.642788*t2721;
  p_output1(9)=-0.766044*t3454 + 0.642788*t3554;
  p_output1(10)=-0.766044*t4417 + 0.642788*t4553;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.027251*t2662 - 1.200144*t2721 + t178*t26*t4721 + t1789*t4880 + t1856*t5061 + t1880*t5140 + t1990*t5165 + t2022*t5213 + t2307*t5267 + t2366*t5318 + t2467*t5364 + t2546*t5409 + t2627*t5439 + t4736*t675 + t4790*t770 + t4808*t858 - 0.1305*(-1.*t178*t179*t26 + t265*t858) + var1(0);
  p_output1(13)=0. - 0.027251*t3454 - 1.200144*t3554 + t1048*t4736 + t1155*t4790 + t1214*t4808 + t2774*t4880 + t2835*t5061 + t2947*t5140 + t3011*t5165 + t3078*t5213 + t3292*t5267 + t3311*t5318 + t3360*t5364 + t3373*t5409 + t3404*t5439 + t178*t4721*t551 - 0.1305*(t1214*t265 - 1.*t178*t179*t551) + var1(1);
  p_output1(14)=0. - 0.1305*(t1469*t265 + t179*t324) - 0.027251*t4417 - 1.200144*t4553 - 1.*t324*t4721 + t178*t308*t4736 + t1469*t4808 + t3781*t4880 + t3839*t5061 + t3863*t5140 + t3914*t5165 + t3966*t5213 + t4115*t5267 + t4174*t5318 + t4271*t5364 + t4300*t5409 + t4372*t5439 + t178*t4790*t584 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RightToeBack(const Eigen::Matrix<double,20,1> &var1)
//void H_RightToeBack(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



