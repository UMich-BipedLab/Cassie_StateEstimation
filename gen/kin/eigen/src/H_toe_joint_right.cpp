/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:37 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_toe_joint_right.h"

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
  double t589;
  double t666;
  double t587;
  double t619;
  double t682;
  double t855;
  double t660;
  double t719;
  double t799;
  double t455;
  double t890;
  double t911;
  double t947;
  double t1018;
  double t807;
  double t983;
  double t998;
  double t428;
  double t1027;
  double t1030;
  double t1046;
  double t1052;
  double t1077;
  double t1135;
  double t1199;
  double t1241;
  double t1250;
  double t1407;
  double t1001;
  double t1302;
  double t1343;
  double t401;
  double t1417;
  double t1482;
  double t1514;
  double t1643;
  double t1357;
  double t1539;
  double t1640;
  double t303;
  double t1672;
  double t1706;
  double t1708;
  double t1827;
  double t1642;
  double t1724;
  double t1732;
  double t123;
  double t1840;
  double t1857;
  double t1899;
  double t27;
  double t2204;
  double t2326;
  double t2399;
  double t2418;
  double t2427;
  double t2475;
  double t2406;
  double t2492;
  double t2516;
  double t2569;
  double t2579;
  double t2644;
  double t2660;
  double t2706;
  double t2716;
  double t2542;
  double t2728;
  double t2752;
  double t2822;
  double t2855;
  double t2860;
  double t2761;
  double t2869;
  double t2871;
  double t2926;
  double t2956;
  double t2967;
  double t2067;
  double t2900;
  double t3069;
  double t3083;
  double t3196;
  double t3211;
  double t3228;
  double t3433;
  double t3437;
  double t3456;
  double t3476;
  double t3485;
  double t3488;
  double t3515;
  double t3555;
  double t3564;
  double t3469;
  double t3573;
  double t3582;
  double t3635;
  double t3670;
  double t3674;
  double t3631;
  double t3680;
  double t3706;
  double t3742;
  double t3744;
  double t3807;
  double t3733;
  double t3812;
  double t3816;
  double t3837;
  double t3859;
  double t3893;
  double t1772;
  double t1985;
  double t2010;
  double t2095;
  double t2097;
  double t2114;
  double t3113;
  double t3238;
  double t3268;
  double t3322;
  double t3333;
  double t3341;
  double t3835;
  double t3904;
  double t3906;
  double t3944;
  double t4013;
  double t4018;
  double t4382;
  double t4383;
  double t4725;
  double t4731;
  double t4957;
  double t4960;
  double t5229;
  double t5230;
  double t5342;
  double t5367;
  double t5432;
  double t5449;
  double t4027;
  double t4031;
  double t4033;
  double t4384;
  double t4419;
  double t4444;
  double t4470;
  double t4501;
  double t4541;
  double t4545;
  double t4572;
  double t4611;
  double t4650;
  double t4662;
  double t4678;
  double t4752;
  double t4753;
  double t4761;
  double t4848;
  double t4861;
  double t4928;
  double t5115;
  double t5133;
  double t5136;
  double t5174;
  double t5181;
  double t5185;
  double t5234;
  double t5256;
  double t5263;
  double t5278;
  double t5295;
  double t5317;
  double t5374;
  double t5376;
  double t5388;
  double t5419;
  double t5420;
  double t5423;
  double t5458;
  double t5471;
  double t5473;
  double t5487;
  double t5501;
  double t5512;
  double t4054;
  double t4088;
  double t4101;
  double t4102;
  double t4109;
  double t4117;
  t589 = Cos(var1[5]);
  t666 = Sin(var1[3]);
  t587 = Cos(var1[3]);
  t619 = Sin(var1[4]);
  t682 = Sin(var1[5]);
  t855 = Sin(var1[13]);
  t660 = t587*t589*t619;
  t719 = t666*t682;
  t799 = t660 + t719;
  t455 = Cos(var1[13]);
  t890 = -1.*t589*t666;
  t911 = t587*t619*t682;
  t947 = t890 + t911;
  t1018 = Cos(var1[15]);
  t807 = t455*t799;
  t983 = -1.*t855*t947;
  t998 = t807 + t983;
  t428 = Sin(var1[15]);
  t1027 = Cos(var1[14]);
  t1030 = Cos(var1[4]);
  t1046 = t1027*t587*t1030;
  t1052 = Sin(var1[14]);
  t1077 = t855*t799;
  t1135 = t455*t947;
  t1199 = t1077 + t1135;
  t1241 = t1052*t1199;
  t1250 = t1046 + t1241;
  t1407 = Cos(var1[16]);
  t1001 = t428*t998;
  t1302 = t1018*t1250;
  t1343 = t1001 + t1302;
  t401 = Sin(var1[16]);
  t1417 = t1018*t998;
  t1482 = -1.*t428*t1250;
  t1514 = t1417 + t1482;
  t1643 = Cos(var1[17]);
  t1357 = -1.*t401*t1343;
  t1539 = t1407*t1514;
  t1640 = t1357 + t1539;
  t303 = Sin(var1[17]);
  t1672 = t1407*t1343;
  t1706 = t401*t1514;
  t1708 = t1672 + t1706;
  t1827 = Cos(var1[18]);
  t1642 = t303*t1640;
  t1724 = t1643*t1708;
  t1732 = t1642 + t1724;
  t123 = Sin(var1[18]);
  t1840 = t1643*t1640;
  t1857 = -1.*t303*t1708;
  t1899 = t1840 + t1857;
  t27 = Cos(var1[19]);
  t2204 = t589*t666*t619;
  t2326 = -1.*t587*t682;
  t2399 = t2204 + t2326;
  t2418 = t587*t589;
  t2427 = t666*t619*t682;
  t2475 = t2418 + t2427;
  t2406 = t455*t2399;
  t2492 = -1.*t855*t2475;
  t2516 = t2406 + t2492;
  t2569 = t1027*t1030*t666;
  t2579 = t855*t2399;
  t2644 = t455*t2475;
  t2660 = t2579 + t2644;
  t2706 = t1052*t2660;
  t2716 = t2569 + t2706;
  t2542 = t428*t2516;
  t2728 = t1018*t2716;
  t2752 = t2542 + t2728;
  t2822 = t1018*t2516;
  t2855 = -1.*t428*t2716;
  t2860 = t2822 + t2855;
  t2761 = -1.*t401*t2752;
  t2869 = t1407*t2860;
  t2871 = t2761 + t2869;
  t2926 = t1407*t2752;
  t2956 = t401*t2860;
  t2967 = t2926 + t2956;
  t2067 = Sin(var1[19]);
  t2900 = t303*t2871;
  t3069 = t1643*t2967;
  t3083 = t2900 + t3069;
  t3196 = t1643*t2871;
  t3211 = -1.*t303*t2967;
  t3228 = t3196 + t3211;
  t3433 = t455*t1030*t589;
  t3437 = -1.*t1030*t855*t682;
  t3456 = t3433 + t3437;
  t3476 = -1.*t1027*t619;
  t3485 = t1030*t589*t855;
  t3488 = t455*t1030*t682;
  t3515 = t3485 + t3488;
  t3555 = t1052*t3515;
  t3564 = t3476 + t3555;
  t3469 = t428*t3456;
  t3573 = t1018*t3564;
  t3582 = t3469 + t3573;
  t3635 = t1018*t3456;
  t3670 = -1.*t428*t3564;
  t3674 = t3635 + t3670;
  t3631 = -1.*t401*t3582;
  t3680 = t1407*t3674;
  t3706 = t3631 + t3680;
  t3742 = t1407*t3582;
  t3744 = t401*t3674;
  t3807 = t3742 + t3744;
  t3733 = t303*t3706;
  t3812 = t1643*t3807;
  t3816 = t3733 + t3812;
  t3837 = t1643*t3706;
  t3859 = -1.*t303*t3807;
  t3893 = t3837 + t3859;
  t1772 = -1.*t123*t1732;
  t1985 = t1827*t1899;
  t2010 = t1772 + t1985;
  t2095 = t1827*t1732;
  t2097 = t123*t1899;
  t2114 = t2095 + t2097;
  t3113 = -1.*t123*t3083;
  t3238 = t1827*t3228;
  t3268 = t3113 + t3238;
  t3322 = t1827*t3083;
  t3333 = t123*t3228;
  t3341 = t3322 + t3333;
  t3835 = -1.*t123*t3816;
  t3904 = t1827*t3893;
  t3906 = t3835 + t3904;
  t3944 = t1827*t3816;
  t4013 = t123*t3893;
  t4018 = t3944 + t4013;
  t4382 = -1.*t1027;
  t4383 = 1. + t4382;
  t4725 = -1.*t1018;
  t4731 = 1. + t4725;
  t4957 = -1.*t1407;
  t4960 = 1. + t4957;
  t5229 = -1.*t1643;
  t5230 = 1. + t5229;
  t5342 = -1.*t1827;
  t5367 = 1. + t5342;
  t5432 = -1.*t27;
  t5449 = 1. + t5432;
  t4027 = t2067*t2010;
  t4031 = t27*t2114;
  t4033 = t4027 + t4031;
  t4384 = -0.049*t4383;
  t4419 = -0.135*t1052;
  t4444 = 0. + t4384 + t4419;
  t4470 = 0.135*t855;
  t4501 = 0. + t4470;
  t4541 = -1.*t455;
  t4545 = 1. + t4541;
  t4572 = -0.135*t4545;
  t4611 = 0. + t4572;
  t4650 = -0.135*t4383;
  t4662 = 0.049*t1052;
  t4678 = 0. + t4650 + t4662;
  t4752 = -0.09*t4731;
  t4753 = 0.049*t428;
  t4761 = 0. + t4752 + t4753;
  t4848 = -0.049*t4731;
  t4861 = -0.09*t428;
  t4928 = 0. + t4848 + t4861;
  t5115 = -0.049*t4960;
  t5133 = -0.21*t401;
  t5136 = 0. + t5115 + t5133;
  t5174 = -0.21*t4960;
  t5181 = 0.049*t401;
  t5185 = 0. + t5174 + t5181;
  t5234 = -0.2707*t5230;
  t5256 = 0.0016*t303;
  t5263 = 0. + t5234 + t5256;
  t5278 = -0.0016*t5230;
  t5295 = -0.2707*t303;
  t5317 = 0. + t5278 + t5295;
  t5374 = 0.0184*t5367;
  t5376 = -0.7055*t123;
  t5388 = 0. + t5374 + t5376;
  t5419 = -0.7055*t5367;
  t5420 = -0.0184*t123;
  t5423 = 0. + t5419 + t5420;
  t5458 = -1.1135*t5449;
  t5471 = 0.0216*t2067;
  t5473 = 0. + t5458 + t5471;
  t5487 = -0.0216*t5449;
  t5501 = -1.1135*t2067;
  t5512 = 0. + t5487 + t5501;
  t4054 = t2067*t3268;
  t4088 = t27*t3341;
  t4101 = t4054 + t4088;
  t4102 = t2067*t3906;
  t4109 = t27*t4018;
  t4117 = t4102 + t4109;

  p_output1(0)=t2067*t2114 - 1.*t2010*t27;
  p_output1(1)=-1.*t27*t3268 + t2067*t3341;
  p_output1(2)=-1.*t27*t3906 + t2067*t4018;
  p_output1(3)=0.;
  p_output1(4)=t4033;
  p_output1(5)=t4101;
  p_output1(6)=t4117;
  p_output1(7)=0.;
  p_output1(8)=-1.*t1027*t1199 + t1030*t1052*t587;
  p_output1(9)=-1.*t1027*t2660 + t1030*t1052*t666;
  p_output1(10)=-1.*t1027*t3515 - 1.*t1052*t619;
  p_output1(11)=0.;
  p_output1(12)=0. - 1.1135*(-1.*t2067*t2114 + t2010*t27) - 0.0216*t4033 + t1199*t4678 + t1250*t4928 + t1343*t5136 + t1514*t5185 + t1640*t5263 + t1708*t5317 + t1732*t5388 + t1899*t5423 + t2010*t5473 + t2114*t5512 + t1030*t4444*t587 - 0.1305*(t1027*t1199 - 1.*t1030*t1052*t587) + t4501*t799 + t4611*t947 + t4761*t998 + var1(0);
  p_output1(13)=0. - 1.1135*(t27*t3268 - 1.*t2067*t3341) - 0.0216*t4101 + t2399*t4501 + t2475*t4611 + t2660*t4678 + t2516*t4761 + t2716*t4928 + t2752*t5136 + t2860*t5185 + t2871*t5263 + t2967*t5317 + t3083*t5388 + t3228*t5423 + t3268*t5473 + t3341*t5512 + t1030*t4444*t666 - 0.1305*(t1027*t2660 - 1.*t1030*t1052*t666) + var1(1);
  p_output1(14)=0. - 1.1135*(t27*t3906 - 1.*t2067*t4018) - 0.0216*t4117 + t3515*t4678 + t3456*t4761 + t3564*t4928 + t3582*t5136 + t3674*t5185 + t3706*t5263 + t3807*t5317 + t3816*t5388 + t3893*t5423 + t3906*t5473 + t4018*t5512 + t1030*t4501*t589 - 1.*t4444*t619 - 0.1305*(t1027*t3515 + t1052*t619) + t1030*t4611*t682 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_toe_joint_right(const Eigen::Matrix<double,20,1> &var1)
//void H_toe_joint_right(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



