/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:21:09 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_VectorNav_to_LeftToeBottom.h"

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
  double t676;
  double t417;
  double t418;
  double t624;
  double t699;
  double t1766;
  double t1781;
  double t1801;
  double t756;
  double t800;
  double t813;
  double t1727;
  double t989;
  double t1947;
  double t1954;
  double t1971;
  double t1974;
  double t2020;
  double t1833;
  double t1837;
  double t1748;
  double t1497;
  double t1913;
  double t2237;
  double t3439;
  double t3463;
  double t3480;
  double t3535;
  double t2062;
  double t3505;
  double t3550;
  double t3553;
  double t3569;
  double t3593;
  double t3605;
  double t2482;
  double t3134;
  double t2571;
  double t2626;
  double t2976;
  double t3079;
  double t3183;
  double t3231;
  double t3232;
  double t3335;
  double t3349;
  double t4409;
  double t4351;
  double t3687;
  double t3710;
  double t3978;
  double t4005;
  double t4020;
  double t4523;
  double t4534;
  double t4081;
  double t4099;
  double t4147;
  double t3565;
  double t3631;
  double t4569;
  double t4572;
  double t4576;
  double t4255;
  double t4259;
  double t4271;
  double t4600;
  double t4613;
  double t4619;
  double t4290;
  double t4301;
  double t4307;
  double t3890;
  double t3931;
  double t3941;
  double t4163;
  double t4229;
  double t4230;
  double t4406;
  double t4471;
  double t4473;
  double t4497;
  double t4514;
  double t4517;
  double t5106;
  double t5061;
  double t4598;
  double t4628;
  double t4731;
  double t4737;
  double t4742;
  double t5162;
  double t5164;
  double t4749;
  double t4761;
  double t4783;
  double t4665;
  double t4668;
  double t5168;
  double t5173;
  double t5175;
  double t4942;
  double t4969;
  double t4980;
  double t5187;
  double t5188;
  double t5193;
  double t5009;
  double t5018;
  double t5019;
  double t4716;
  double t4717;
  double t4801;
  double t4817;
  double t4849;
  double t4866;
  double t4890;
  double t4898;
  double t5080;
  double t5109;
  double t5114;
  double t5127;
  double t5129;
  double t5137;
  double t5540;
  double t5521;
  double t5185;
  double t5208;
  double t5290;
  double t5291;
  double t5295;
  double t5603;
  double t5611;
  double t5313;
  double t5316;
  double t5344;
  double t5226;
  double t5241;
  double t5618;
  double t5627;
  double t5636;
  double t5469;
  double t5475;
  double t5492;
  double t5659;
  double t5664;
  double t5674;
  double t5496;
  double t5508;
  double t5509;
  double t5276;
  double t5279;
  double t5360;
  double t5362;
  double t5414;
  double t5424;
  double t5439;
  double t5454;
  t676 = Cos(var1[0]);
  t417 = Sin(var1[0]);
  t418 = -1.*t417;
  t624 = 0. + t418;
  t699 = 0. + t676;
  t1766 = Cos(var1[1]);
  t1781 = -1.*t676*t1766;
  t1801 = 0. + t1781;
  t756 = -1.*t676;
  t800 = 1. + t756;
  t813 = 0.135*t800;
  t1727 = Sin(var1[1]);
  t989 = 0.135*t417;
  t1947 = -1.*t1766;
  t1954 = 1. + t1947;
  t1971 = 0.135*t1954;
  t1974 = 0.049*t1727;
  t2020 = 0. + t1971 + t1974;
  t1833 = -1.*t1766*t417;
  t1837 = 0. + t1833;
  t1748 = 0. + t1727;
  t1497 = 0.049*t676;
  t1913 = -0.07996*t1801;
  t2237 = -1.*t417*t2020;
  t3439 = Cos(var1[2]);
  t3463 = -1.*t3439;
  t3480 = 1. + t3463;
  t3535 = Sin(var1[2]);
  t2062 = t676*t2020;
  t3505 = -0.049*t3480;
  t3550 = -0.09*t3535;
  t3553 = 0. + t3505 + t3550;
  t3569 = -0.09*t3480;
  t3593 = 0.049*t3535;
  t3605 = 0. + t3569 + t3593;
  t2482 = 0.03155*t1837;
  t3134 = 0.07996*t1748;
  t2571 = 0.049*t1954;
  t2626 = -0.135*t1727;
  t2976 = -0.135*t417;
  t3079 = t417*t2020;
  t3183 = -0.03155*t1801;
  t3231 = -0.049*t1954;
  t3232 = 0.135*t1727;
  t3335 = -0.135*t800;
  t3349 = -1.*t676*t2020;
  t4409 = Cos(var1[3]);
  t4351 = Sin(var1[3]);
  t3687 = t676*t1727*t3553;
  t3710 = -1.*t417*t3605;
  t3978 = t676*t3439*t1727;
  t4005 = -1.*t417*t3535;
  t4020 = t3978 + t4005;
  t4523 = -1.*t4409;
  t4534 = 1. + t4523;
  t4081 = -1.*t3439*t417;
  t4099 = -1.*t676*t1727*t3535;
  t4147 = t4081 + t4099;
  t3565 = -1.*t417*t1727*t3553;
  t3631 = -1.*t676*t3605;
  t4569 = -0.049*t4534;
  t4572 = -0.21*t4351;
  t4576 = 0. + t4569 + t4572;
  t4255 = t3439*t417*t1727;
  t4259 = t676*t3535;
  t4271 = t4255 + t4259;
  t4600 = -0.21*t4534;
  t4613 = 0.049*t4351;
  t4619 = 0. + t4600 + t4613;
  t4290 = t676*t3439;
  t4301 = -1.*t417*t1727*t3535;
  t4307 = t4290 + t4301;
  t3890 = -1.*t1766*t3553;
  t3931 = t417*t1727*t3553;
  t3941 = t676*t3605;
  t4163 = t1766*t3553;
  t4229 = -1.*t676*t1727*t3553;
  t4230 = t417*t3605;
  t4406 = -1.*t1766*t3439*t4351;
  t4471 = -1.*t4409*t1766*t3535;
  t4473 = t4406 + t4471;
  t4497 = t4409*t1766*t3439;
  t4514 = -1.*t1766*t4351*t3535;
  t4517 = t4497 + t4514;
  t5106 = Cos(var1[4]);
  t5061 = Sin(var1[4]);
  t4598 = t4576*t4020;
  t4628 = t4619*t4147;
  t4731 = -1.*t4351*t4020;
  t4737 = t4409*t4147;
  t4742 = t4731 + t4737;
  t5162 = -1.*t5106;
  t5164 = 1. + t5162;
  t4749 = t4409*t4020;
  t4761 = t4351*t4147;
  t4783 = t4749 + t4761;
  t4665 = -1.*t4576*t4271;
  t4668 = -1.*t4619*t4307;
  t5168 = -0.2707*t5164;
  t5173 = 0.0016*t5061;
  t5175 = 0. + t5168 + t5173;
  t4942 = -1.*t4351*t4271;
  t4969 = t4409*t4307;
  t4980 = t4942 + t4969;
  t5187 = -0.0016*t5164;
  t5188 = -0.2707*t5061;
  t5193 = 0. + t5187 + t5188;
  t5009 = t4409*t4271;
  t5018 = t4351*t4307;
  t5019 = t5009 + t5018;
  t4716 = -1.*t1766*t3439*t4576;
  t4717 = t1766*t4619*t3535;
  t4801 = t4576*t4271;
  t4817 = t4619*t4307;
  t4849 = t1766*t3439*t4576;
  t4866 = -1.*t1766*t4619*t3535;
  t4890 = -1.*t4576*t4020;
  t4898 = -1.*t4619*t4147;
  t5080 = t5061*t4473;
  t5109 = t5106*t4517;
  t5114 = t5080 + t5109;
  t5127 = t5106*t4473;
  t5129 = -1.*t5061*t4517;
  t5137 = t5127 + t5129;
  t5540 = Cos(var1[5]);
  t5521 = Sin(var1[5]);
  t5185 = t5175*t4742;
  t5208 = t5193*t4783;
  t5290 = t5061*t4742;
  t5291 = t5106*t4783;
  t5295 = t5290 + t5291;
  t5603 = -1.*t5540;
  t5611 = 1. + t5603;
  t5313 = t5106*t4742;
  t5316 = -1.*t5061*t4783;
  t5344 = t5313 + t5316;
  t5226 = -1.*t5175*t4980;
  t5241 = -1.*t5193*t5019;
  t5618 = 0.0184*t5611;
  t5627 = -0.7055*t5521;
  t5636 = 0. + t5618 + t5627;
  t5469 = t5061*t4980;
  t5475 = t5106*t5019;
  t5492 = t5469 + t5475;
  t5659 = -0.7055*t5611;
  t5664 = -0.0184*t5521;
  t5674 = 0. + t5659 + t5664;
  t5496 = t5106*t4980;
  t5508 = -1.*t5061*t5019;
  t5509 = t5496 + t5508;
  t5276 = -1.*t5175*t4473;
  t5279 = -1.*t5193*t4517;
  t5360 = t5175*t4980;
  t5362 = t5193*t5019;
  t5414 = t5175*t4473;
  t5424 = t5193*t4517;
  t5439 = -1.*t5175*t4742;
  t5454 = -1.*t5193*t4783;

  p_output1(0)=1.;
  p_output1(1)=0.;
  p_output1(2)=0.;
  p_output1(3)=0.;
  p_output1(4)=0.07996;
  p_output1(5)=-0.135;
  p_output1(6)=0.;
  p_output1(7)=t624;
  p_output1(8)=t699;
  p_output1(9)=0.135 - 0.07996*t624 + t676*(0. + t813) - 1.*t417*(0. + t989);
  p_output1(10)=0. + t1497 + 0.03155*t699;
  p_output1(11)=0. + 0.049*t417 - 0.03155*t624;
  p_output1(12)=t1748;
  p_output1(13)=t1801;
  p_output1(14)=t1837;
  p_output1(15)=0. - 0.09*t1766 + t1913 - 1.*t1766*t417*(0. + t2062 + t813) - 1.*t1766*t676*(0. + t2237 + t989);
  p_output1(16)=0. + t2482 + t1727*(0. + t2976 + t3079) + t3134 - 0.049*t417 - 1.*t1766*(0. + t2571 + t2626)*t417 - 0.09*t1727*t676;
  p_output1(17)=0. + t1497 + t3183 + t1727*(0. + t3335 + t3349) - 0.09*t1727*t417 - 1.*t1766*(0. + t3231 + t3232)*t676;
  p_output1(18)=t1748;
  p_output1(19)=t1801;
  p_output1(20)=t1837;
  p_output1(21)=0. + t1913 - 0.21*t1766*t3439 - 0.049*t1766*t3535 - 1.*t1766*t417*(0. + t2062 + t3687 + t3710 + t813) - 1.*t1766*t676*(0. + t2237 + t3565 + t3631 + t989);
  p_output1(22)=0. + t2482 + t3134 + t1727*(0. + t2976 + t3079 + t3931 + t3941) - 0.21*t4020 + 0.049*t4147 - 1.*t1766*(0. + t2571 + t2626 + t3890)*t417;
  p_output1(23)=0. + t3183 + t1727*(0. + t3335 + t3349 + t4229 + t4230) - 0.21*t4271 + 0.049*t4307 - 1.*t1766*(0. + t3231 + t3232 + t4163)*t676;
  p_output1(24)=t1748;
  p_output1(25)=t1801;
  p_output1(26)=t1837;
  p_output1(27)=0. + t1913 + 0.0016*t4473 - 0.2707*t4517 - 1.*t1766*t417*(0. + t2062 + t3687 + t3710 + t4598 + t4628 + t813) - 1.*t1766*t676*(0. + t2237 + t3565 + t3631 + t4665 + t4668 + t989);
  p_output1(28)=0. + t2482 + t3134 - 1.*t1766*t417*(0. + t2571 + t2626 + t3890 + t4716 + t4717) + 0.0016*t4742 - 0.2707*t4783 + t1727*(0. + t2976 + t3079 + t3931 + t3941 + t4801 + t4817);
  p_output1(29)=0. + t3183 + t1727*(0. + t3335 + t3349 + t4229 + t4230 + t4890 + t4898) + 0.0016*t4980 - 0.2707*t5019 - 1.*t1766*(0. + t3231 + t3232 + t4163 + t4849 + t4866)*t676;
  p_output1(30)=t1748;
  p_output1(31)=t1801;
  p_output1(32)=t1837;
  p_output1(33)=0. + t1913 - 0.7055*t5114 - 0.0184*t5137 - 1.*t1766*t417*(0. + t2062 + t3687 + t3710 + t4598 + t4628 + t5185 + t5208 + t813) - 1.*t1766*t676*(0. + t2237 + t3565 + t3631 + t4665 + t4668 + t5226 + t5241 + t989);
  p_output1(34)=0. + t2482 + t3134 - 1.*t1766*t417*(0. + t2571 + t2626 + t3890 + t4716 + t4717 + t5276 + t5279) - 0.7055*t5295 - 0.0184*t5344 + t1727*(0. + t2976 + t3079 + t3931 + t3941 + t4801 + t4817 + t5360 + t5362);
  p_output1(35)=0. + t3183 + t1727*(0. + t3335 + t3349 + t4229 + t4230 + t4890 + t4898 + t5439 + t5454) - 0.7055*t5492 - 0.0184*t5509 - 1.*t1766*(0. + t3231 + t3232 + t4163 + t4849 + t4866 + t5414 + t5424)*t676;
  p_output1(36)=t1748;
  p_output1(37)=t1801;
  p_output1(38)=t1837;
  p_output1(39)=0. + t1913 - 1.1135*(t5137*t5521 + t5114*t5540) + 0.0216*(-1.*t5114*t5521 + t5137*t5540) - 1.*t1766*t417*(0. + t2062 + t3687 + t3710 + t4598 + t4628 + t5185 + t5208 + t5295*t5636 + t5344*t5674 + t813) - 1.*t1766*t676*(0. + t2237 + t3565 + t3631 + t4665 + t4668 + t5226 + t5241 - 1.*t5492*t5636 - 1.*t5509*t5674 + t989);
  p_output1(40)=0. + t2482 + t3134 - 1.1135*(t5344*t5521 + t5295*t5540) + 0.0216*(-1.*t5295*t5521 + t5344*t5540) - 1.*t1766*t417*(0. + t2571 + t2626 + t3890 + t4716 + t4717 + t5276 + t5279 - 1.*t5114*t5636 - 1.*t5137*t5674) + t1727*(0. + t2976 + t3079 + t3931 + t3941 + t4801 + t4817 + t5360 + t5362 + t5492*t5636 + t5509*t5674);
  p_output1(41)=0. + t3183 - 1.1135*(t5509*t5521 + t5492*t5540) + 0.0216*(-1.*t5492*t5521 + t5509*t5540) + t1727*(0. + t3335 + t3349 + t4229 + t4230 + t4890 + t4898 + t5439 + t5454 - 1.*t5295*t5636 - 1.*t5344*t5674) - 1.*t1766*(0. + t3231 + t3232 + t4163 + t4849 + t4866 + t5414 + t5424 + t5114*t5636 + t5137*t5674)*t676;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=0;
  p_output1(46)=0;
  p_output1(47)=0;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
  p_output1(54)=0;
  p_output1(55)=0;
  p_output1(56)=0;
  p_output1(57)=0;
  p_output1(58)=0;
  p_output1(59)=0;
  p_output1(60)=0;
  p_output1(61)=0;
  p_output1(62)=0;
  p_output1(63)=0;
  p_output1(64)=0;
  p_output1(65)=0;
  p_output1(66)=0;
  p_output1(67)=0;
  p_output1(68)=0;
  p_output1(69)=0;
  p_output1(70)=0;
  p_output1(71)=0;
  p_output1(72)=0;
  p_output1(73)=0;
  p_output1(74)=0;
  p_output1(75)=0;
  p_output1(76)=0;
  p_output1(77)=0;
  p_output1(78)=0;
  p_output1(79)=0;
  p_output1(80)=0;
  p_output1(81)=0;
  p_output1(82)=0;
  p_output1(83)=0;
}


       
Eigen::Matrix<double,6,14> Js_VectorNav_to_LeftToeBottom(const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,6,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



