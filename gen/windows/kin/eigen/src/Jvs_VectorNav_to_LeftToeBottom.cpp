/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:32:38 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jvs_VectorNav_to_LeftToeBottom.h"

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
  double t8;
  double t610;
  double t612;
  double t675;
  double t1362;
  double t377;
  double t391;
  double t409;
  double t965;
  double t1532;
  double t1534;
  double t1561;
  double t1615;
  double t1652;
  double t1754;
  double t1099;
  double t1413;
  double t1504;
  double t1513;
  double t1915;
  double t2988;
  double t2997;
  double t3022;
  double t3041;
  double t1823;
  double t3036;
  double t3047;
  double t3089;
  double t3119;
  double t3145;
  double t3148;
  double t2135;
  double t2139;
  double t2198;
  double t2742;
  double t2761;
  double t2294;
  double t2323;
  double t2535;
  double t2583;
  double t2776;
  double t2785;
  double t2792;
  double t2946;
  double t2953;
  double t4325;
  double t4317;
  double t3305;
  double t3310;
  double t3762;
  double t3763;
  double t3786;
  double t4610;
  double t4613;
  double t3841;
  double t3855;
  double t3936;
  double t3115;
  double t3163;
  double t4621;
  double t4622;
  double t4625;
  double t4169;
  double t4226;
  double t4268;
  double t4661;
  double t4700;
  double t4704;
  double t4280;
  double t4287;
  double t4303;
  double t3464;
  double t3659;
  double t3687;
  double t3971;
  double t4037;
  double t4073;
  double t4324;
  double t4345;
  double t4356;
  double t4390;
  double t4505;
  double t4528;
  double t5342;
  double t5332;
  double t4654;
  double t4729;
  double t4903;
  double t4907;
  double t4917;
  double t5532;
  double t5535;
  double t4948;
  double t4963;
  double t4964;
  double t4790;
  double t4791;
  double t5542;
  double t5545;
  double t5559;
  double t5185;
  double t5208;
  double t5210;
  double t5580;
  double t5585;
  double t5594;
  double t5260;
  double t5291;
  double t5294;
  double t4847;
  double t4863;
  double t5010;
  double t5015;
  double t5065;
  double t5090;
  double t5117;
  double t5125;
  double t5336;
  double t5346;
  double t5393;
  double t5409;
  double t5500;
  double t5520;
  double t5898;
  double t5885;
  double t5571;
  double t5597;
  double t5711;
  double t5714;
  double t5721;
  double t5941;
  double t5942;
  double t5728;
  double t5733;
  double t5734;
  double t5637;
  double t5639;
  double t5944;
  double t5949;
  double t5954;
  double t5840;
  double t5841;
  double t5847;
  double t5958;
  double t5963;
  double t5972;
  double t5868;
  double t5869;
  double t5875;
  double t5676;
  double t5690;
  double t5739;
  double t5741;
  double t5764;
  double t5765;
  double t5802;
  double t5805;
  t8 = Cos(var1[0]);
  t610 = Sin(var1[0]);
  t612 = -1.*t610;
  t675 = 0. + t612;
  t1362 = Cos(var1[1]);
  t377 = -1.*t8;
  t391 = 1. + t377;
  t409 = 0.135*t391;
  t965 = 0.135*t610;
  t1532 = -1.*t1362;
  t1534 = 1. + t1532;
  t1561 = 0.135*t1534;
  t1615 = Sin(var1[1]);
  t1652 = 0.049*t1615;
  t1754 = 0. + t1561 + t1652;
  t1099 = 0.049*t8;
  t1413 = -1.*t8*t1362;
  t1504 = 0. + t1413;
  t1513 = -0.07996*t1504;
  t1915 = -1.*t610*t1754;
  t2988 = Cos(var1[2]);
  t2997 = -1.*t2988;
  t3022 = 1. + t2997;
  t3041 = Sin(var1[2]);
  t1823 = t8*t1754;
  t3036 = -0.049*t3022;
  t3047 = -0.09*t3041;
  t3089 = 0. + t3036 + t3047;
  t3119 = -0.09*t3022;
  t3145 = 0.049*t3041;
  t3148 = 0. + t3119 + t3145;
  t2135 = -1.*t1362*t610;
  t2139 = 0. + t2135;
  t2198 = 0.03155*t2139;
  t2742 = 0. + t1615;
  t2761 = 0.07996*t2742;
  t2294 = 0.049*t1534;
  t2323 = -0.135*t1615;
  t2535 = -0.135*t610;
  t2583 = t610*t1754;
  t2776 = -0.03155*t1504;
  t2785 = -0.049*t1534;
  t2792 = 0.135*t1615;
  t2946 = -0.135*t391;
  t2953 = -1.*t8*t1754;
  t4325 = Cos(var1[3]);
  t4317 = Sin(var1[3]);
  t3305 = t8*t1615*t3089;
  t3310 = -1.*t610*t3148;
  t3762 = t8*t2988*t1615;
  t3763 = -1.*t610*t3041;
  t3786 = t3762 + t3763;
  t4610 = -1.*t4325;
  t4613 = 1. + t4610;
  t3841 = -1.*t2988*t610;
  t3855 = -1.*t8*t1615*t3041;
  t3936 = t3841 + t3855;
  t3115 = -1.*t610*t1615*t3089;
  t3163 = -1.*t8*t3148;
  t4621 = -0.049*t4613;
  t4622 = -0.21*t4317;
  t4625 = 0. + t4621 + t4622;
  t4169 = t2988*t610*t1615;
  t4226 = t8*t3041;
  t4268 = t4169 + t4226;
  t4661 = -0.21*t4613;
  t4700 = 0.049*t4317;
  t4704 = 0. + t4661 + t4700;
  t4280 = t8*t2988;
  t4287 = -1.*t610*t1615*t3041;
  t4303 = t4280 + t4287;
  t3464 = -1.*t1362*t3089;
  t3659 = t610*t1615*t3089;
  t3687 = t8*t3148;
  t3971 = t1362*t3089;
  t4037 = -1.*t8*t1615*t3089;
  t4073 = t610*t3148;
  t4324 = -1.*t1362*t2988*t4317;
  t4345 = -1.*t4325*t1362*t3041;
  t4356 = t4324 + t4345;
  t4390 = t4325*t1362*t2988;
  t4505 = -1.*t1362*t4317*t3041;
  t4528 = t4390 + t4505;
  t5342 = Cos(var1[4]);
  t5332 = Sin(var1[4]);
  t4654 = t4625*t3786;
  t4729 = t4704*t3936;
  t4903 = -1.*t4317*t3786;
  t4907 = t4325*t3936;
  t4917 = t4903 + t4907;
  t5532 = -1.*t5342;
  t5535 = 1. + t5532;
  t4948 = t4325*t3786;
  t4963 = t4317*t3936;
  t4964 = t4948 + t4963;
  t4790 = -1.*t4625*t4268;
  t4791 = -1.*t4704*t4303;
  t5542 = -0.2707*t5535;
  t5545 = 0.0016*t5332;
  t5559 = 0. + t5542 + t5545;
  t5185 = -1.*t4317*t4268;
  t5208 = t4325*t4303;
  t5210 = t5185 + t5208;
  t5580 = -0.0016*t5535;
  t5585 = -0.2707*t5332;
  t5594 = 0. + t5580 + t5585;
  t5260 = t4325*t4268;
  t5291 = t4317*t4303;
  t5294 = t5260 + t5291;
  t4847 = -1.*t1362*t2988*t4625;
  t4863 = t1362*t4704*t3041;
  t5010 = t4625*t4268;
  t5015 = t4704*t4303;
  t5065 = t1362*t2988*t4625;
  t5090 = -1.*t1362*t4704*t3041;
  t5117 = -1.*t4625*t3786;
  t5125 = -1.*t4704*t3936;
  t5336 = t5332*t4356;
  t5346 = t5342*t4528;
  t5393 = t5336 + t5346;
  t5409 = t5342*t4356;
  t5500 = -1.*t5332*t4528;
  t5520 = t5409 + t5500;
  t5898 = Cos(var1[5]);
  t5885 = Sin(var1[5]);
  t5571 = t5559*t4917;
  t5597 = t5594*t4964;
  t5711 = t5332*t4917;
  t5714 = t5342*t4964;
  t5721 = t5711 + t5714;
  t5941 = -1.*t5898;
  t5942 = 1. + t5941;
  t5728 = t5342*t4917;
  t5733 = -1.*t5332*t4964;
  t5734 = t5728 + t5733;
  t5637 = -1.*t5559*t5210;
  t5639 = -1.*t5594*t5294;
  t5944 = 0.0184*t5942;
  t5949 = -0.7055*t5885;
  t5954 = 0. + t5944 + t5949;
  t5840 = t5332*t5210;
  t5841 = t5342*t5294;
  t5847 = t5840 + t5841;
  t5958 = -0.7055*t5942;
  t5963 = -0.0184*t5885;
  t5972 = 0. + t5958 + t5963;
  t5868 = t5342*t5210;
  t5869 = -1.*t5332*t5294;
  t5875 = t5868 + t5869;
  t5676 = -1.*t5559*t4356;
  t5690 = -1.*t5594*t4528;
  t5739 = t5559*t5210;
  t5741 = t5594*t5294;
  t5764 = t5559*t4356;
  t5765 = t5594*t4528;
  t5802 = -1.*t5559*t4917;
  t5805 = -1.*t5594*t4964;

  p_output1(0)=0.;
  p_output1(1)=0.07996;
  p_output1(2)=-0.135;
  p_output1(3)=0.135 - 0.07996*t675 + (0. + t409)*t8 - 1.*t610*(0. + t965);
  p_output1(4)=0. + t1099 + 0.03155*(0. + t8);
  p_output1(5)=0. + 0.049*t610 - 0.03155*t675;
  p_output1(6)=0. - 0.09*t1362 + t1513 - 1.*t1362*(0. + t1823 + t409)*t610 - 1.*t1362*t8*(0. + t1915 + t965);
  p_output1(7)=0. + t2198 + t1615*(0. + t2535 + t2583) + t2761 - 0.049*t610 - 1.*t1362*(0. + t2294 + t2323)*t610 - 0.09*t1615*t8;
  p_output1(8)=0. + t1099 + t2776 + t1615*(0. + t2946 + t2953) - 0.09*t1615*t610 - 1.*t1362*(0. + t2785 + t2792)*t8;
  p_output1(9)=0. + t1513 - 0.21*t1362*t2988 - 0.049*t1362*t3041 - 1.*t1362*(0. + t1823 + t3305 + t3310 + t409)*t610 - 1.*t1362*t8*(0. + t1915 + t3115 + t3163 + t965);
  p_output1(10)=0. + t2198 + t2761 + t1615*(0. + t2535 + t2583 + t3659 + t3687) - 0.21*t3786 + 0.049*t3936 - 1.*t1362*(0. + t2294 + t2323 + t3464)*t610;
  p_output1(11)=0. + t2776 + t1615*(0. + t2946 + t2953 + t4037 + t4073) - 0.21*t4268 + 0.049*t4303 - 1.*t1362*(0. + t2785 + t2792 + t3971)*t8;
  p_output1(12)=0. + t1513 + 0.0016*t4356 - 0.2707*t4528 - 1.*t1362*(0. + t1823 + t3305 + t3310 + t409 + t4654 + t4729)*t610 - 1.*t1362*t8*(0. + t1915 + t3115 + t3163 + t4790 + t4791 + t965);
  p_output1(13)=0. + t2198 + t2761 + 0.0016*t4917 - 0.2707*t4964 + t1615*(0. + t2535 + t2583 + t3659 + t3687 + t5010 + t5015) - 1.*t1362*(0. + t2294 + t2323 + t3464 + t4847 + t4863)*t610;
  p_output1(14)=0. + t2776 + t1615*(0. + t2946 + t2953 + t4037 + t4073 + t5117 + t5125) + 0.0016*t5210 - 0.2707*t5294 - 1.*t1362*(0. + t2785 + t2792 + t3971 + t5065 + t5090)*t8;
  p_output1(15)=0. + t1513 - 0.7055*t5393 - 0.0184*t5520 - 1.*t1362*(0. + t1823 + t3305 + t3310 + t409 + t4654 + t4729 + t5571 + t5597)*t610 - 1.*t1362*t8*(0. + t1915 + t3115 + t3163 + t4790 + t4791 + t5637 + t5639 + t965);
  p_output1(16)=0. + t2198 + t2761 - 0.7055*t5721 - 0.0184*t5734 + t1615*(0. + t2535 + t2583 + t3659 + t3687 + t5010 + t5015 + t5739 + t5741) - 1.*t1362*(0. + t2294 + t2323 + t3464 + t4847 + t4863 + t5676 + t5690)*t610;
  p_output1(17)=0. + t2776 + t1615*(0. + t2946 + t2953 + t4037 + t4073 + t5117 + t5125 + t5802 + t5805) - 0.7055*t5847 - 0.0184*t5875 - 1.*t1362*(0. + t2785 + t2792 + t3971 + t5065 + t5090 + t5764 + t5765)*t8;
  p_output1(18)=0. + t1513 - 1.1135*(t5520*t5885 + t5393*t5898) + 0.0216*(-1.*t5393*t5885 + t5520*t5898) - 1.*t1362*(0. + t1823 + t3305 + t3310 + t409 + t4654 + t4729 + t5571 + t5597 + t5721*t5954 + t5734*t5972)*t610 - 1.*t1362*t8*(0. + t1915 + t3115 + t3163 + t4790 + t4791 + t5637 + t5639 - 1.*t5847*t5954 - 1.*t5875*t5972 + t965);
  p_output1(19)=0. + t2198 + t2761 - 1.1135*(t5734*t5885 + t5721*t5898) + 0.0216*(-1.*t5721*t5885 + t5734*t5898) + t1615*(0. + t2535 + t2583 + t3659 + t3687 + t5010 + t5015 + t5739 + t5741 + t5847*t5954 + t5875*t5972) - 1.*t1362*(0. + t2294 + t2323 + t3464 + t4847 + t4863 + t5676 + t5690 - 1.*t5393*t5954 - 1.*t5520*t5972)*t610;
  p_output1(20)=0. + t2776 - 1.1135*(t5875*t5885 + t5847*t5898) + 0.0216*(-1.*t5847*t5885 + t5875*t5898) + t1615*(0. + t2946 + t2953 + t4037 + t4073 + t5117 + t5125 + t5802 + t5805 - 1.*t5721*t5954 - 1.*t5734*t5972) - 1.*t1362*(0. + t2785 + t2792 + t3971 + t5065 + t5090 + t5764 + t5765 + t5393*t5954 + t5520*t5972)*t8;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
}


       
Eigen::Matrix<double,3,14> Jvs_VectorNav_to_LeftToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void Jvs_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



