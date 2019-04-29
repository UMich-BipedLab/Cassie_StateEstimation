/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:23:00 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeBottom.h"

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
  double t130;
  double t392;
  double t542;
  double t441;
  double t559;
  double t151;
  double t193;
  double t331;
  double t349;
  double t734;
  double t467;
  double t620;
  double t638;
  double t741;
  double t773;
  double t855;
  double t705;
  double t865;
  double t885;
  double t1726;
  double t1677;
  double t1689;
  double t1692;
  double t1644;
  double t1734;
  double t1738;
  double t1776;
  double t1868;
  double t1716;
  double t1816;
  double t1829;
  double t1635;
  double t1896;
  double t1899;
  double t1900;
  double t1949;
  double t1851;
  double t1905;
  double t1930;
  double t1630;
  double t1973;
  double t1987;
  double t2050;
  double t2111;
  double t1943;
  double t2094;
  double t2103;
  double t1563;
  double t2118;
  double t2133;
  double t2153;
  double t2203;
  double t2104;
  double t2164;
  double t2172;
  double t1519;
  double t2274;
  double t2275;
  double t2280;
  double t991;
  double t992;
  double t1007;
  double t1065;
  double t1079;
  double t1104;
  double t1025;
  double t1123;
  double t1170;
  double t2522;
  double t2540;
  double t2549;
  double t2573;
  double t2586;
  double t2592;
  double t2562;
  double t2636;
  double t2654;
  double t2675;
  double t2685;
  double t2716;
  double t2662;
  double t2740;
  double t2801;
  double t2805;
  double t2874;
  double t2885;
  double t2802;
  double t2894;
  double t2922;
  double t2992;
  double t3019;
  double t3069;
  double t2934;
  double t3130;
  double t3136;
  double t3247;
  double t3337;
  double t3374;
  double t1354;
  double t1361;
  double t1414;
  double t3460;
  double t3511;
  double t3532;
  double t3600;
  double t3625;
  double t3641;
  double t3575;
  double t3670;
  double t3671;
  double t3686;
  double t3698;
  double t3718;
  double t3681;
  double t3723;
  double t3744;
  double t3792;
  double t3842;
  double t3844;
  double t3763;
  double t3847;
  double t3855;
  double t3926;
  double t3933;
  double t3936;
  double t3862;
  double t3940;
  double t3958;
  double t3984;
  double t3988;
  double t3992;
  double t2176;
  double t2325;
  double t2326;
  double t2414;
  double t2420;
  double t2429;
  double t3165;
  double t3385;
  double t3389;
  double t3398;
  double t3416;
  double t3427;
  double t3969;
  double t4038;
  double t4054;
  double t4068;
  double t4095;
  double t4102;
  double t4220;
  double t4226;
  double t4428;
  double t4436;
  double t4582;
  double t4586;
  double t4628;
  double t4634;
  double t4680;
  double t4690;
  double t4757;
  double t4760;
  double t4244;
  double t4252;
  double t4268;
  double t4310;
  double t4313;
  double t4325;
  double t4326;
  double t4330;
  double t4356;
  double t4386;
  double t4405;
  double t4412;
  double t4459;
  double t4489;
  double t4493;
  double t4556;
  double t4558;
  double t4565;
  double t4588;
  double t4590;
  double t4594;
  double t4606;
  double t4610;
  double t4611;
  double t4642;
  double t4649;
  double t4655;
  double t4657;
  double t4668;
  double t4673;
  double t4692;
  double t4698;
  double t4703;
  double t4736;
  double t4740;
  double t4751;
  double t4768;
  double t4772;
  double t4774;
  double t4786;
  double t4789;
  double t4790;
  t130 = Cos(var1[3]);
  t392 = Cos(var1[5]);
  t542 = Sin(var1[3]);
  t441 = Sin(var1[4]);
  t559 = Sin(var1[5]);
  t151 = Cos(var1[4]);
  t193 = Sin(var1[14]);
  t331 = Cos(var1[14]);
  t349 = Sin(var1[13]);
  t734 = Cos(var1[13]);
  t467 = t130*t392*t441;
  t620 = t542*t559;
  t638 = t467 + t620;
  t741 = -1.*t392*t542;
  t773 = t130*t441*t559;
  t855 = t741 + t773;
  t705 = t349*t638;
  t865 = t734*t855;
  t885 = t705 + t865;
  t1726 = Cos(var1[15]);
  t1677 = t734*t638;
  t1689 = -1.*t349*t855;
  t1692 = t1677 + t1689;
  t1644 = Sin(var1[15]);
  t1734 = t331*t130*t151;
  t1738 = t193*t885;
  t1776 = t1734 + t1738;
  t1868 = Cos(var1[16]);
  t1716 = t1644*t1692;
  t1816 = t1726*t1776;
  t1829 = t1716 + t1816;
  t1635 = Sin(var1[16]);
  t1896 = t1726*t1692;
  t1899 = -1.*t1644*t1776;
  t1900 = t1896 + t1899;
  t1949 = Cos(var1[17]);
  t1851 = -1.*t1635*t1829;
  t1905 = t1868*t1900;
  t1930 = t1851 + t1905;
  t1630 = Sin(var1[17]);
  t1973 = t1868*t1829;
  t1987 = t1635*t1900;
  t2050 = t1973 + t1987;
  t2111 = Cos(var1[18]);
  t1943 = t1630*t1930;
  t2094 = t1949*t2050;
  t2103 = t1943 + t2094;
  t1563 = Sin(var1[18]);
  t2118 = t1949*t1930;
  t2133 = -1.*t1630*t2050;
  t2153 = t2118 + t2133;
  t2203 = Cos(var1[19]);
  t2104 = -1.*t1563*t2103;
  t2164 = t2111*t2153;
  t2172 = t2104 + t2164;
  t1519 = Sin(var1[19]);
  t2274 = t2111*t2103;
  t2275 = t1563*t2153;
  t2280 = t2274 + t2275;
  t991 = t392*t542*t441;
  t992 = -1.*t130*t559;
  t1007 = t991 + t992;
  t1065 = t130*t392;
  t1079 = t542*t441*t559;
  t1104 = t1065 + t1079;
  t1025 = t349*t1007;
  t1123 = t734*t1104;
  t1170 = t1025 + t1123;
  t2522 = t734*t1007;
  t2540 = -1.*t349*t1104;
  t2549 = t2522 + t2540;
  t2573 = t331*t151*t542;
  t2586 = t193*t1170;
  t2592 = t2573 + t2586;
  t2562 = t1644*t2549;
  t2636 = t1726*t2592;
  t2654 = t2562 + t2636;
  t2675 = t1726*t2549;
  t2685 = -1.*t1644*t2592;
  t2716 = t2675 + t2685;
  t2662 = -1.*t1635*t2654;
  t2740 = t1868*t2716;
  t2801 = t2662 + t2740;
  t2805 = t1868*t2654;
  t2874 = t1635*t2716;
  t2885 = t2805 + t2874;
  t2802 = t1630*t2801;
  t2894 = t1949*t2885;
  t2922 = t2802 + t2894;
  t2992 = t1949*t2801;
  t3019 = -1.*t1630*t2885;
  t3069 = t2992 + t3019;
  t2934 = -1.*t1563*t2922;
  t3130 = t2111*t3069;
  t3136 = t2934 + t3130;
  t3247 = t2111*t2922;
  t3337 = t1563*t3069;
  t3374 = t3247 + t3337;
  t1354 = t151*t392*t349;
  t1361 = t734*t151*t559;
  t1414 = t1354 + t1361;
  t3460 = t734*t151*t392;
  t3511 = -1.*t151*t349*t559;
  t3532 = t3460 + t3511;
  t3600 = -1.*t331*t441;
  t3625 = t193*t1414;
  t3641 = t3600 + t3625;
  t3575 = t1644*t3532;
  t3670 = t1726*t3641;
  t3671 = t3575 + t3670;
  t3686 = t1726*t3532;
  t3698 = -1.*t1644*t3641;
  t3718 = t3686 + t3698;
  t3681 = -1.*t1635*t3671;
  t3723 = t1868*t3718;
  t3744 = t3681 + t3723;
  t3792 = t1868*t3671;
  t3842 = t1635*t3718;
  t3844 = t3792 + t3842;
  t3763 = t1630*t3744;
  t3847 = t1949*t3844;
  t3855 = t3763 + t3847;
  t3926 = t1949*t3744;
  t3933 = -1.*t1630*t3844;
  t3936 = t3926 + t3933;
  t3862 = -1.*t1563*t3855;
  t3940 = t2111*t3936;
  t3958 = t3862 + t3940;
  t3984 = t2111*t3855;
  t3988 = t1563*t3936;
  t3992 = t3984 + t3988;
  t2176 = t1519*t2172;
  t2325 = t2203*t2280;
  t2326 = t2176 + t2325;
  t2414 = t2203*t2172;
  t2420 = -1.*t1519*t2280;
  t2429 = t2414 + t2420;
  t3165 = t1519*t3136;
  t3385 = t2203*t3374;
  t3389 = t3165 + t3385;
  t3398 = t2203*t3136;
  t3416 = -1.*t1519*t3374;
  t3427 = t3398 + t3416;
  t3969 = t1519*t3958;
  t4038 = t2203*t3992;
  t4054 = t3969 + t4038;
  t4068 = t2203*t3958;
  t4095 = -1.*t1519*t3992;
  t4102 = t4068 + t4095;
  t4220 = -1.*t331;
  t4226 = 1. + t4220;
  t4428 = -1.*t1726;
  t4436 = 1. + t4428;
  t4582 = -1.*t1868;
  t4586 = 1. + t4582;
  t4628 = -1.*t1949;
  t4634 = 1. + t4628;
  t4680 = -1.*t2111;
  t4690 = 1. + t4680;
  t4757 = -1.*t2203;
  t4760 = 1. + t4757;
  t4244 = -0.049*t4226;
  t4252 = -0.135*t193;
  t4268 = 0. + t4244 + t4252;
  t4310 = 0.135*t349;
  t4313 = 0. + t4310;
  t4325 = -1.*t734;
  t4326 = 1. + t4325;
  t4330 = -0.135*t4326;
  t4356 = 0. + t4330;
  t4386 = -0.135*t4226;
  t4405 = 0.049*t193;
  t4412 = 0. + t4386 + t4405;
  t4459 = -0.09*t4436;
  t4489 = 0.049*t1644;
  t4493 = 0. + t4459 + t4489;
  t4556 = -0.049*t4436;
  t4558 = -0.09*t1644;
  t4565 = 0. + t4556 + t4558;
  t4588 = -0.049*t4586;
  t4590 = -0.21*t1635;
  t4594 = 0. + t4588 + t4590;
  t4606 = -0.21*t4586;
  t4610 = 0.049*t1635;
  t4611 = 0. + t4606 + t4610;
  t4642 = -0.2707*t4634;
  t4649 = 0.0016*t1630;
  t4655 = 0. + t4642 + t4649;
  t4657 = -0.0016*t4634;
  t4668 = -0.2707*t1630;
  t4673 = 0. + t4657 + t4668;
  t4692 = 0.0184*t4690;
  t4698 = -0.7055*t1563;
  t4703 = 0. + t4692 + t4698;
  t4736 = -0.7055*t4690;
  t4740 = -0.0184*t1563;
  t4751 = 0. + t4736 + t4740;
  t4768 = -1.1135*t4760;
  t4772 = 0.0216*t1519;
  t4774 = 0. + t4768 + t4772;
  t4786 = -0.0216*t4760;
  t4789 = -1.1135*t1519;
  t4790 = 0. + t4786 + t4789;

  p_output1(0)=t130*t151*t193 - 1.*t331*t885;
  p_output1(1)=-1.*t1170*t331 + t151*t193*t542;
  p_output1(2)=-1.*t1414*t331 - 1.*t193*t441;
  p_output1(3)=0.;
  p_output1(4)=0.642788*t2326 + 0.766044*t2429;
  p_output1(5)=0.642788*t3389 + 0.766044*t3427;
  p_output1(6)=0.642788*t4054 + 0.766044*t4102;
  p_output1(7)=0.;
  p_output1(8)=-0.766044*t2326 + 0.642788*t2429;
  p_output1(9)=-0.766044*t3389 + 0.642788*t3427;
  p_output1(10)=-0.766044*t4054 + 0.642788*t4102;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.0306*t2326 - 1.1312*t2429 + t130*t151*t4268 + t1692*t4493 + t1776*t4565 + t1829*t4594 + t1900*t4611 + t1930*t4655 + t2050*t4673 + t2103*t4703 + t2153*t4751 + t2172*t4774 + t2280*t4790 + t4313*t638 + t4356*t855 + t4412*t885 - 0.1305*(-1.*t130*t151*t193 + t331*t885) + var1(0);
  p_output1(13)=0. + 0.0306*t3389 - 1.1312*t3427 + t1007*t4313 + t1104*t4356 + t1170*t4412 + t2549*t4493 + t2592*t4565 + t2654*t4594 + t2716*t4611 + t2801*t4655 + t2885*t4673 + t2922*t4703 + t3069*t4751 + t3136*t4774 + t3374*t4790 + t151*t4268*t542 - 0.1305*(t1170*t331 - 1.*t151*t193*t542) + var1(1);
  p_output1(14)=0. + 0.0306*t4054 - 1.1312*t4102 + t151*t392*t4313 - 1.*t4268*t441 - 0.1305*(t1414*t331 + t193*t441) + t1414*t4412 + t3532*t4493 + t3641*t4565 + t3671*t4594 + t3718*t4611 + t3744*t4655 + t3844*t4673 + t3855*t4703 + t3936*t4751 + t3958*t4774 + t3992*t4790 + t151*t4356*t559 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RightToeBottom(const Eigen::Matrix<double,20,1> &var1)
//void H_RightToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



