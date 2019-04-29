/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:21:11 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_VectorNav_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,6,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t336;
  double t5;
  double t111;
  double t235;
  double t341;
  double t1512;
  double t1552;
  double t1566;
  double t507;
  double t540;
  double t657;
  double t1390;
  double t912;
  double t1691;
  double t1697;
  double t1815;
  double t1827;
  double t1906;
  double t1569;
  double t1602;
  double t1468;
  double t1129;
  double t1661;
  double t2155;
  double t3552;
  double t3618;
  double t3630;
  double t3804;
  double t2001;
  double t3669;
  double t3873;
  double t3882;
  double t4009;
  double t4014;
  double t4030;
  double t2407;
  double t2726;
  double t2459;
  double t2480;
  double t2578;
  double t2628;
  double t2840;
  double t2882;
  double t3010;
  double t3274;
  double t3409;
  double t4133;
  double t4167;
  double t4701;
  double t4738;
  double t4739;
  double t4754;
  double t4761;
  double t4767;
  double t5163;
  double t5185;
  double t5195;
  double t5384;
  double t3931;
  double t4043;
  double t4932;
  double t4938;
  double t4952;
  double t5358;
  double t5443;
  double t5445;
  double t5060;
  double t5077;
  double t5144;
  double t5545;
  double t5546;
  double t5577;
  double t4360;
  double t4513;
  double t4600;
  double t4822;
  double t4896;
  double t4914;
  double t5664;
  double t5669;
  double t6364;
  double t6369;
  double t6372;
  double t6344;
  double t6347;
  double t6359;
  double t6403;
  double t6412;
  double t6413;
  double t6458;
  double t5503;
  double t5599;
  double t6199;
  double t6218;
  double t6226;
  double t6434;
  double t6497;
  double t6503;
  double t6133;
  double t6141;
  double t6144;
  double t6508;
  double t6521;
  double t6543;
  double t5819;
  double t5886;
  double t5937;
  double t5745;
  double t5766;
  double t5803;
  double t5987;
  double t5996;
  double t6101;
  double t6113;
  double t6244;
  double t6246;
  double t6293;
  double t6294;
  double t6577;
  double t6606;
  double t6792;
  double t6805;
  double t6808;
  double t6823;
  double t6830;
  double t6856;
  double t6985;
  double t6993;
  double t6994;
  double t7018;
  double t6504;
  double t6550;
  double t6915;
  double t6921;
  double t6922;
  double t7006;
  double t7025;
  double t7032;
  double t6945;
  double t6951;
  double t6962;
  double t7049;
  double t7075;
  double t7079;
  double t6694;
  double t6698;
  double t6709;
  double t6620;
  double t6631;
  double t6648;
  double t6732;
  double t6734;
  double t6752;
  double t6757;
  double t6860;
  double t6862;
  double t6890;
  double t6907;
  t336 = Cos(var1[7]);
  t5 = Sin(var1[7]);
  t111 = -1.*t5;
  t235 = 0. + t111;
  t341 = 0. + t336;
  t1512 = Cos(var1[8]);
  t1552 = -1.*t336*t1512;
  t1566 = 0. + t1552;
  t507 = -1.*t336;
  t540 = 1. + t507;
  t657 = -0.135*t540;
  t1390 = Sin(var1[8]);
  t912 = -0.135*t5;
  t1691 = -1.*t1512;
  t1697 = 1. + t1691;
  t1815 = -0.135*t1697;
  t1827 = 0.049*t1390;
  t1906 = 0. + t1815 + t1827;
  t1569 = -1.*t1512*t5;
  t1602 = 0. + t1569;
  t1468 = 0. + t1390;
  t1129 = 0.049*t336;
  t1661 = -0.07996*t1566;
  t2155 = -1.*t5*t1906;
  t3552 = Cos(var1[9]);
  t3618 = -1.*t3552;
  t3630 = 1. + t3618;
  t3804 = Sin(var1[9]);
  t2001 = t336*t1906;
  t3669 = -0.049*t3630;
  t3873 = -0.09*t3804;
  t3882 = 0. + t3669 + t3873;
  t4009 = -0.09*t3630;
  t4014 = 0.049*t3804;
  t4030 = 0. + t4009 + t4014;
  t2407 = 0.03155*t1602;
  t2726 = 0.07996*t1468;
  t2459 = 0.049*t1697;
  t2480 = 0.135*t1390;
  t2578 = 0.135*t5;
  t2628 = t5*t1906;
  t2840 = -0.03155*t1566;
  t2882 = -0.049*t1697;
  t3010 = -0.135*t1390;
  t3274 = 0.135*t540;
  t3409 = -1.*t336*t1906;
  t4133 = t336*t1390*t3882;
  t4167 = -1.*t5*t4030;
  t4701 = t336*t3552*t1390;
  t4738 = -1.*t5*t3804;
  t4739 = t4701 + t4738;
  t4754 = -1.*t3552*t5;
  t4761 = -1.*t336*t1390*t3804;
  t4767 = t4754 + t4761;
  t5163 = Cos(var1[10]);
  t5185 = -1.*t5163;
  t5195 = 1. + t5185;
  t5384 = Sin(var1[10]);
  t3931 = -1.*t5*t1390*t3882;
  t4043 = -1.*t336*t4030;
  t4932 = t3552*t5*t1390;
  t4938 = t336*t3804;
  t4952 = t4932 + t4938;
  t5358 = -0.049*t5195;
  t5443 = -0.21*t5384;
  t5445 = 0. + t5358 + t5443;
  t5060 = t336*t3552;
  t5077 = -1.*t5*t1390*t3804;
  t5144 = t5060 + t5077;
  t5545 = -0.21*t5195;
  t5546 = 0.049*t5384;
  t5577 = 0. + t5545 + t5546;
  t4360 = -1.*t1512*t3882;
  t4513 = t5*t1390*t3882;
  t4600 = t336*t4030;
  t4822 = t1512*t3882;
  t4896 = -1.*t336*t1390*t3882;
  t4914 = t5*t4030;
  t5664 = -1.*t4952*t5445;
  t5669 = -1.*t5144*t5577;
  t6364 = t5163*t4952;
  t6369 = t5144*t5384;
  t6372 = t6364 + t6369;
  t6344 = t5163*t5144;
  t6347 = -1.*t4952*t5384;
  t6359 = t6344 + t6347;
  t6403 = Cos(var1[11]);
  t6412 = -1.*t6403;
  t6413 = 1. + t6412;
  t6458 = Sin(var1[11]);
  t5503 = t4739*t5445;
  t5599 = t4767*t5577;
  t6199 = t5163*t4739;
  t6218 = t4767*t5384;
  t6226 = t6199 + t6218;
  t6434 = -0.0016*t6413;
  t6497 = -0.2707*t6458;
  t6503 = 0. + t6434 + t6497;
  t6133 = t5163*t4767;
  t6141 = -1.*t4739*t5384;
  t6144 = t6133 + t6141;
  t6508 = -0.2707*t6413;
  t6521 = 0.0016*t6458;
  t6543 = 0. + t6508 + t6521;
  t5819 = t1512*t3552*t5163;
  t5886 = -1.*t1512*t3804*t5384;
  t5937 = t5819 + t5886;
  t5745 = -1.*t1512*t5163*t3804;
  t5766 = -1.*t1512*t3552*t5384;
  t5803 = t5745 + t5766;
  t5987 = -1.*t1512*t3552*t5445;
  t5996 = t1512*t3804*t5577;
  t6101 = t4952*t5445;
  t6113 = t5144*t5577;
  t6244 = t1512*t3552*t5445;
  t6246 = -1.*t1512*t3804*t5577;
  t6293 = -1.*t4739*t5445;
  t6294 = -1.*t4767*t5577;
  t6577 = t6226*t6503;
  t6606 = t6144*t6543;
  t6792 = t6403*t6226;
  t6805 = t6144*t6458;
  t6808 = t6792 + t6805;
  t6823 = t6403*t6144;
  t6830 = -1.*t6226*t6458;
  t6856 = t6823 + t6830;
  t6985 = Cos(var1[12]);
  t6993 = -1.*t6985;
  t6994 = 1. + t6993;
  t7018 = Sin(var1[12]);
  t6504 = -1.*t6372*t6503;
  t6550 = -1.*t6359*t6543;
  t6915 = t6403*t6372;
  t6921 = t6359*t6458;
  t6922 = t6915 + t6921;
  t7006 = 0.0184*t6994;
  t7025 = -0.7055*t7018;
  t7032 = 0. + t7006 + t7025;
  t6945 = t6403*t6359;
  t6951 = -1.*t6372*t6458;
  t6962 = t6945 + t6951;
  t7049 = -0.7055*t6994;
  t7075 = -0.0184*t7018;
  t7079 = 0. + t7049 + t7075;
  t6694 = t6403*t5803;
  t6698 = -1.*t5937*t6458;
  t6709 = t6694 + t6698;
  t6620 = t6403*t5937;
  t6631 = t5803*t6458;
  t6648 = t6620 + t6631;
  t6732 = -1.*t5937*t6503;
  t6734 = -1.*t5803*t6543;
  t6752 = t6372*t6503;
  t6757 = t6359*t6543;
  t6860 = t5937*t6503;
  t6862 = t5803*t6543;
  t6890 = -1.*t6226*t6503;
  t6907 = -1.*t6144*t6543;

  p_output1(0)=0;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=0;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=0;
  p_output1(9)=0;
  p_output1(10)=0;
  p_output1(11)=0;
  p_output1(12)=0;
  p_output1(13)=0;
  p_output1(14)=0;
  p_output1(15)=0;
  p_output1(16)=0;
  p_output1(17)=0;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
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
  p_output1(42)=1.;
  p_output1(43)=0.;
  p_output1(44)=0.;
  p_output1(45)=0.;
  p_output1(46)=0.07996;
  p_output1(47)=0.135;
  p_output1(48)=0.;
  p_output1(49)=t235;
  p_output1(50)=t341;
  p_output1(51)=-0.135 - 0.07996*t235 + t336*(0. + t657) - 1.*t5*(0. + t912);
  p_output1(52)=0. + t1129 + 0.03155*t341;
  p_output1(53)=0. - 0.03155*t235 + 0.049*t5;
  p_output1(54)=t1468;
  p_output1(55)=t1566;
  p_output1(56)=t1602;
  p_output1(57)=0. - 0.09*t1512 + t1661 - 1.*t1512*t5*(0. + t2001 + t657) - 1.*t1512*t336*(0. + t2155 + t912);
  p_output1(58)=0. + t2407 + t1390*(0. + t2578 + t2628) + t2726 - 0.09*t1390*t336 - 0.049*t5 - 1.*t1512*(0. + t2459 + t2480)*t5;
  p_output1(59)=0. + t1129 + t2840 - 1.*t1512*(0. + t2882 + t3010)*t336 + t1390*(0. + t3274 + t3409) - 0.09*t1390*t5;
  p_output1(60)=t1468;
  p_output1(61)=t1566;
  p_output1(62)=t1602;
  p_output1(63)=0. + t1661 - 0.21*t1512*t3552 - 0.049*t1512*t3804 - 1.*t1512*t5*(0. + t2001 + t4133 + t4167 + t657) - 1.*t1512*t336*(0. + t2155 + t3931 + t4043 + t912);
  p_output1(64)=0. + t2407 + t2726 + t1390*(0. + t2578 + t2628 + t4513 + t4600) - 0.21*t4739 + 0.049*t4767 - 1.*t1512*(0. + t2459 + t2480 + t4360)*t5;
  p_output1(65)=0. + t2840 - 1.*t1512*t336*(0. + t2882 + t3010 + t4822) + t1390*(0. + t3274 + t3409 + t4896 + t4914) - 0.21*t4952 + 0.049*t5144;
  p_output1(66)=t1468;
  p_output1(67)=t1566;
  p_output1(68)=t1602;
  p_output1(69)=0. + t1661 + 0.0016*t5803 - 0.2707*t5937 - 1.*t1512*t5*(0. + t2001 + t4133 + t4167 + t5503 + t5599 + t657) - 1.*t1512*t336*(0. + t2155 + t3931 + t4043 + t5664 + t5669 + t912);
  p_output1(70)=0. + t2407 + t2726 - 1.*t1512*t5*(0. + t2459 + t2480 + t4360 + t5987 + t5996) + t1390*(0. + t2578 + t2628 + t4513 + t4600 + t6101 + t6113) + 0.0016*t6144 - 0.2707*t6226;
  p_output1(71)=0. + t2840 - 1.*t1512*t336*(0. + t2882 + t3010 + t4822 + t6244 + t6246) + t1390*(0. + t3274 + t3409 + t4896 + t4914 + t6293 + t6294) + 0.0016*t6359 - 0.2707*t6372;
  p_output1(72)=t1468;
  p_output1(73)=t1566;
  p_output1(74)=t1602;
  p_output1(75)=0. + t1661 - 1.*t1512*t5*(0. + t2001 + t4133 + t4167 + t5503 + t5599 + t657 + t6577 + t6606) - 0.7055*t6648 - 0.0184*t6709 - 1.*t1512*t336*(0. + t2155 + t3931 + t4043 + t5664 + t5669 + t6504 + t6550 + t912);
  p_output1(76)=0. + t2407 + t2726 - 1.*t1512*t5*(0. + t2459 + t2480 + t4360 + t5987 + t5996 + t6732 + t6734) + t1390*(0. + t2578 + t2628 + t4513 + t4600 + t6101 + t6113 + t6752 + t6757) - 0.7055*t6808 - 0.0184*t6856;
  p_output1(77)=0. + t2840 - 1.*t1512*t336*(0. + t2882 + t3010 + t4822 + t6244 + t6246 + t6860 + t6862) + t1390*(0. + t3274 + t3409 + t4896 + t4914 + t6293 + t6294 + t6890 + t6907) - 0.7055*t6922 - 0.0184*t6962;
  p_output1(78)=t1468;
  p_output1(79)=t1566;
  p_output1(80)=t1602;
  p_output1(81)=0. + t1661 + 0.0216*(t6709*t6985 - 1.*t6648*t7018) - 1.1135*(t6648*t6985 + t6709*t7018) - 1.*t1512*t5*(0. + t2001 + t4133 + t4167 + t5503 + t5599 + t657 + t6577 + t6606 + t6808*t7032 + t6856*t7079) - 1.*t1512*t336*(0. + t2155 + t3931 + t4043 + t5664 + t5669 + t6504 + t6550 - 1.*t6922*t7032 - 1.*t6962*t7079 + t912);
  p_output1(82)=0. + t2407 + t2726 + 0.0216*(t6856*t6985 - 1.*t6808*t7018) - 1.1135*(t6808*t6985 + t6856*t7018) - 1.*t1512*t5*(0. + t2459 + t2480 + t4360 + t5987 + t5996 + t6732 + t6734 - 1.*t6648*t7032 - 1.*t6709*t7079) + t1390*(0. + t2578 + t2628 + t4513 + t4600 + t6101 + t6113 + t6752 + t6757 + t6922*t7032 + t6962*t7079);
  p_output1(83)=0. + t2840 + 0.0216*(t6962*t6985 - 1.*t6922*t7018) - 1.1135*(t6922*t6985 + t6962*t7018) - 1.*t1512*t336*(0. + t2882 + t3010 + t4822 + t6244 + t6246 + t6860 + t6862 + t6648*t7032 + t6709*t7079) + t1390*(0. + t3274 + t3409 + t4896 + t4914 + t6293 + t6294 + t6890 + t6907 - 1.*t6808*t7032 - 1.*t6856*t7079);
}


       
Eigen::Matrix<double,6,14> Js_VectorNav_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,6,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



