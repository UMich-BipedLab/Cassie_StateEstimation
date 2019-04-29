/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:23:02 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeFront.h"

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
  double t40;
  double t1315;
  double t1731;
  double t1425;
  double t1738;
  double t232;
  double t267;
  double t498;
  double t669;
  double t1169;
  double t1712;
  double t1816;
  double t1973;
  double t2061;
  double t2275;
  double t2315;
  double t2325;
  double t84;
  double t2399;
  double t2433;
  double t2438;
  double t2555;
  double t2612;
  double t2641;
  double t2675;
  double t2809;
  double t2811;
  double t2812;
  double t3245;
  double t3389;
  double t3394;
  double t3403;
  double t3575;
  double t3670;
  double t3718;
  double t3819;
  double t3842;
  double t3878;
  double t4065;
  double t4072;
  double t4128;
  double t4177;
  double t4196;
  double t4201;
  double t4244;
  double t4330;
  double t4380;
  double t4495;
  double t4556;
  double t4565;
  double t4588;
  double t4595;
  double t4599;
  double t4602;
  double t4633;
  double t4668;
  double t4673;
  double t4675;
  double t4740;
  double t4751;
  double t4753;
  double t4772;
  double t4774;
  double t4778;
  double t4786;
  double t4797;
  double t4809;
  double t4810;
  double t4834;
  double t4837;
  double t4840;
  double t613;
  double t887;
  double t1007;
  double t1171;
  double t1240;
  double t2114;
  double t2181;
  double t2259;
  double t2262;
  double t2328;
  double t2365;
  double t2380;
  double t4890;
  double t4891;
  double t4918;
  double t4927;
  double t4934;
  double t4941;
  double t2660;
  double t2801;
  double t2804;
  double t4949;
  double t4952;
  double t4953;
  double t2992;
  double t3030;
  double t3089;
  double t3686;
  double t3723;
  double t3743;
  double t4960;
  double t4963;
  double t4971;
  double t5011;
  double t5014;
  double t5019;
  double t3936;
  double t4018;
  double t4054;
  double t4233;
  double t4292;
  double t4324;
  double t5045;
  double t5052;
  double t5054;
  double t5060;
  double t5073;
  double t5074;
  double t4522;
  double t4523;
  double t4539;
  double t4611;
  double t4649;
  double t4656;
  double t5080;
  double t5092;
  double t5093;
  double t5100;
  double t5102;
  double t5105;
  double t4698;
  double t4703;
  double t4736;
  double t4784;
  double t4789;
  double t4790;
  double t5116;
  double t5120;
  double t5128;
  double t5148;
  double t5155;
  double t5162;
  double t4822;
  double t4823;
  double t4832;
  double t5197;
  double t5198;
  double t5211;
  double t5229;
  double t5231;
  double t5238;
  double t5401;
  double t5404;
  double t5415;
  double t5442;
  double t5459;
  double t5460;
  double t5508;
  double t5520;
  double t5521;
  double t5523;
  double t5525;
  double t5526;
  double t5530;
  double t5534;
  double t5536;
  double t5547;
  double t5568;
  double t5572;
  double t5582;
  double t5591;
  double t5596;
  double t5616;
  double t5631;
  double t5634;
  double t5658;
  double t5659;
  double t5661;
  double t5675;
  double t5676;
  double t5682;
  double t5689;
  double t5690;
  double t5698;
  t40 = Cos(var1[3]);
  t1315 = Cos(var1[5]);
  t1731 = Sin(var1[3]);
  t1425 = Sin(var1[4]);
  t1738 = Sin(var1[5]);
  t232 = Cos(var1[14]);
  t267 = -1.*t232;
  t498 = 1. + t267;
  t669 = Sin(var1[14]);
  t1169 = Sin(var1[13]);
  t1712 = t40*t1315*t1425;
  t1816 = t1731*t1738;
  t1973 = t1712 + t1816;
  t2061 = Cos(var1[13]);
  t2275 = -1.*t1315*t1731;
  t2315 = t40*t1425*t1738;
  t2325 = t2275 + t2315;
  t84 = Cos(var1[4]);
  t2399 = t1169*t1973;
  t2433 = t2061*t2325;
  t2438 = t2399 + t2433;
  t2555 = Cos(var1[15]);
  t2612 = -1.*t2555;
  t2641 = 1. + t2612;
  t2675 = Sin(var1[15]);
  t2809 = t2061*t1973;
  t2811 = -1.*t1169*t2325;
  t2812 = t2809 + t2811;
  t3245 = t232*t40*t84;
  t3389 = t669*t2438;
  t3394 = t3245 + t3389;
  t3403 = Cos(var1[16]);
  t3575 = -1.*t3403;
  t3670 = 1. + t3575;
  t3718 = Sin(var1[16]);
  t3819 = t2675*t2812;
  t3842 = t2555*t3394;
  t3878 = t3819 + t3842;
  t4065 = t2555*t2812;
  t4072 = -1.*t2675*t3394;
  t4128 = t4065 + t4072;
  t4177 = Cos(var1[17]);
  t4196 = -1.*t4177;
  t4201 = 1. + t4196;
  t4244 = Sin(var1[17]);
  t4330 = -1.*t3718*t3878;
  t4380 = t3403*t4128;
  t4495 = t4330 + t4380;
  t4556 = t3403*t3878;
  t4565 = t3718*t4128;
  t4588 = t4556 + t4565;
  t4595 = Cos(var1[18]);
  t4599 = -1.*t4595;
  t4602 = 1. + t4599;
  t4633 = Sin(var1[18]);
  t4668 = t4244*t4495;
  t4673 = t4177*t4588;
  t4675 = t4668 + t4673;
  t4740 = t4177*t4495;
  t4751 = -1.*t4244*t4588;
  t4753 = t4740 + t4751;
  t4772 = Cos(var1[19]);
  t4774 = -1.*t4772;
  t4778 = 1. + t4774;
  t4786 = Sin(var1[19]);
  t4797 = -1.*t4633*t4675;
  t4809 = t4595*t4753;
  t4810 = t4797 + t4809;
  t4834 = t4595*t4675;
  t4837 = t4633*t4753;
  t4840 = t4834 + t4837;
  t613 = -0.049*t498;
  t887 = -0.135*t669;
  t1007 = 0. + t613 + t887;
  t1171 = 0.135*t1169;
  t1240 = 0. + t1171;
  t2114 = -1.*t2061;
  t2181 = 1. + t2114;
  t2259 = -0.135*t2181;
  t2262 = 0. + t2259;
  t2328 = -0.135*t498;
  t2365 = 0.049*t669;
  t2380 = 0. + t2328 + t2365;
  t4890 = t1315*t1731*t1425;
  t4891 = -1.*t40*t1738;
  t4918 = t4890 + t4891;
  t4927 = t40*t1315;
  t4934 = t1731*t1425*t1738;
  t4941 = t4927 + t4934;
  t2660 = -0.09*t2641;
  t2801 = 0.049*t2675;
  t2804 = 0. + t2660 + t2801;
  t4949 = t1169*t4918;
  t4952 = t2061*t4941;
  t4953 = t4949 + t4952;
  t2992 = -0.049*t2641;
  t3030 = -0.09*t2675;
  t3089 = 0. + t2992 + t3030;
  t3686 = -0.049*t3670;
  t3723 = -0.21*t3718;
  t3743 = 0. + t3686 + t3723;
  t4960 = t2061*t4918;
  t4963 = -1.*t1169*t4941;
  t4971 = t4960 + t4963;
  t5011 = t232*t84*t1731;
  t5014 = t669*t4953;
  t5019 = t5011 + t5014;
  t3936 = -0.21*t3670;
  t4018 = 0.049*t3718;
  t4054 = 0. + t3936 + t4018;
  t4233 = -0.2707*t4201;
  t4292 = 0.0016*t4244;
  t4324 = 0. + t4233 + t4292;
  t5045 = t2675*t4971;
  t5052 = t2555*t5019;
  t5054 = t5045 + t5052;
  t5060 = t2555*t4971;
  t5073 = -1.*t2675*t5019;
  t5074 = t5060 + t5073;
  t4522 = -0.0016*t4201;
  t4523 = -0.2707*t4244;
  t4539 = 0. + t4522 + t4523;
  t4611 = 0.0184*t4602;
  t4649 = -0.7055*t4633;
  t4656 = 0. + t4611 + t4649;
  t5080 = -1.*t3718*t5054;
  t5092 = t3403*t5074;
  t5093 = t5080 + t5092;
  t5100 = t3403*t5054;
  t5102 = t3718*t5074;
  t5105 = t5100 + t5102;
  t4698 = -0.7055*t4602;
  t4703 = -0.0184*t4633;
  t4736 = 0. + t4698 + t4703;
  t4784 = -1.1135*t4778;
  t4789 = 0.0216*t4786;
  t4790 = 0. + t4784 + t4789;
  t5116 = t4244*t5093;
  t5120 = t4177*t5105;
  t5128 = t5116 + t5120;
  t5148 = t4177*t5093;
  t5155 = -1.*t4244*t5105;
  t5162 = t5148 + t5155;
  t4822 = -0.0216*t4778;
  t4823 = -1.1135*t4786;
  t4832 = 0. + t4822 + t4823;
  t5197 = -1.*t4633*t5128;
  t5198 = t4595*t5162;
  t5211 = t5197 + t5198;
  t5229 = t4595*t5128;
  t5231 = t4633*t5162;
  t5238 = t5229 + t5231;
  t5401 = t84*t1315*t1169;
  t5404 = t2061*t84*t1738;
  t5415 = t5401 + t5404;
  t5442 = t2061*t84*t1315;
  t5459 = -1.*t84*t1169*t1738;
  t5460 = t5442 + t5459;
  t5508 = -1.*t232*t1425;
  t5520 = t669*t5415;
  t5521 = t5508 + t5520;
  t5523 = t2675*t5460;
  t5525 = t2555*t5521;
  t5526 = t5523 + t5525;
  t5530 = t2555*t5460;
  t5534 = -1.*t2675*t5521;
  t5536 = t5530 + t5534;
  t5547 = -1.*t3718*t5526;
  t5568 = t3403*t5536;
  t5572 = t5547 + t5568;
  t5582 = t3403*t5526;
  t5591 = t3718*t5536;
  t5596 = t5582 + t5591;
  t5616 = t4244*t5572;
  t5631 = t4177*t5596;
  t5634 = t5616 + t5631;
  t5658 = t4177*t5572;
  t5659 = -1.*t4244*t5596;
  t5661 = t5658 + t5659;
  t5675 = -1.*t4633*t5634;
  t5676 = t4595*t5661;
  t5682 = t5675 + t5676;
  t5689 = t4595*t5634;
  t5690 = t4633*t5661;
  t5698 = t5689 + t5690;

  p_output1(0)=0. + t1240*t1973 + t2262*t2325 + t2380*t2438 + t2804*t2812 + t3089*t3394 + t3743*t3878 + t4054*t4128 + t4324*t4495 + t4539*t4588 + t4656*t4675 + t4736*t4753 + t4790*t4810 + t4832*t4840 + 0.088451*(t4786*t4810 + t4772*t4840) - 1.062256*(t4772*t4810 - 1.*t4786*t4840) + t1007*t40*t84 - 0.1305*(t232*t2438 - 1.*t40*t669*t84) + var1(0);
  p_output1(1)=0. + t1240*t4918 + t2262*t4941 + t2380*t4953 + t2804*t4971 + t3089*t5019 + t3743*t5054 + t4054*t5074 + t4324*t5093 + t4539*t5105 + t4656*t5128 + t4736*t5162 + t4790*t5211 + t4832*t5238 + 0.088451*(t4786*t5211 + t4772*t5238) - 1.062256*(t4772*t5211 - 1.*t4786*t5238) + t1007*t1731*t84 - 0.1305*(t232*t4953 - 1.*t1731*t669*t84) + var1(1);
  p_output1(2)=0. - 1.*t1007*t1425 + t2380*t5415 + t2804*t5460 + t3089*t5521 + t3743*t5526 + t4054*t5536 + t4324*t5572 + t4539*t5596 + t4656*t5634 + t4736*t5661 + t4790*t5682 + t4832*t5698 + 0.088451*(t4786*t5682 + t4772*t5698) - 1.062256*(t4772*t5682 - 1.*t4786*t5698) - 0.1305*(t232*t5415 + t1425*t669) + t1240*t1315*t84 + t1738*t2262*t84 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RightToeFront(const Eigen::Matrix<double,20,1> &var1)
//void p_RightToeFront(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



