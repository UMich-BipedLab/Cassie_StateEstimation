/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:22:39 GMT-04:00
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
  double t497;
  double t603;
  double t492;
  double t580;
  double t617;
  double t835;
  double t584;
  double t711;
  double t794;
  double t475;
  double t862;
  double t954;
  double t961;
  double t1054;
  double t809;
  double t1012;
  double t1031;
  double t445;
  double t1087;
  double t1124;
  double t1185;
  double t1217;
  double t1255;
  double t1259;
  double t1306;
  double t1321;
  double t1355;
  double t1450;
  double t1039;
  double t1373;
  double t1395;
  double t435;
  double t1493;
  double t1542;
  double t1564;
  double t1620;
  double t1409;
  double t1578;
  double t1594;
  double t432;
  double t1622;
  double t1624;
  double t1696;
  double t1750;
  double t1597;
  double t1713;
  double t1717;
  double t301;
  double t1767;
  double t1773;
  double t1790;
  double t207;
  double t1972;
  double t2026;
  double t2042;
  double t2075;
  double t2124;
  double t2130;
  double t2058;
  double t2190;
  double t2228;
  double t2254;
  double t2265;
  double t2360;
  double t2378;
  double t2382;
  double t2385;
  double t2243;
  double t2417;
  double t2445;
  double t2496;
  double t2569;
  double t2571;
  double t2458;
  double t2584;
  double t2587;
  double t2623;
  double t2625;
  double t2659;
  double t1877;
  double t2600;
  double t2676;
  double t2715;
  double t2746;
  double t2747;
  double t2757;
  double t2845;
  double t2863;
  double t2917;
  double t2965;
  double t2983;
  double t3028;
  double t3037;
  double t3065;
  double t3070;
  double t2935;
  double t3095;
  double t3149;
  double t3219;
  double t3233;
  double t3239;
  double t3192;
  double t3253;
  double t3270;
  double t3298;
  double t3322;
  double t3341;
  double t3287;
  double t3353;
  double t3391;
  double t3410;
  double t3419;
  double t3463;
  double t1735;
  double t1802;
  double t1839;
  double t1878;
  double t1885;
  double t1891;
  double t2725;
  double t2771;
  double t2793;
  double t2808;
  double t2817;
  double t2824;
  double t3408;
  double t3466;
  double t3501;
  double t3568;
  double t3582;
  double t3586;
  double t4019;
  double t4038;
  double t4265;
  double t4275;
  double t4518;
  double t4528;
  double t4670;
  double t4678;
  double t4779;
  double t4812;
  double t4900;
  double t4909;
  double t3622;
  double t3639;
  double t3647;
  double t4080;
  double t4097;
  double t4113;
  double t4159;
  double t4162;
  double t4186;
  double t4202;
  double t4206;
  double t4220;
  double t4224;
  double t4252;
  double t4260;
  double t4334;
  double t4337;
  double t4343;
  double t4423;
  double t4434;
  double t4480;
  double t4539;
  double t4548;
  double t4560;
  double t4591;
  double t4605;
  double t4642;
  double t4682;
  double t4683;
  double t4727;
  double t4733;
  double t4743;
  double t4758;
  double t4816;
  double t4830;
  double t4835;
  double t4865;
  double t4877;
  double t4891;
  double t4911;
  double t4923;
  double t4930;
  double t4948;
  double t4950;
  double t4959;
  double t3653;
  double t3654;
  double t3699;
  double t3708;
  double t3714;
  double t3821;
  t497 = Cos(var1[5]);
  t603 = Sin(var1[3]);
  t492 = Cos(var1[3]);
  t580 = Sin(var1[4]);
  t617 = Sin(var1[5]);
  t835 = Sin(var1[13]);
  t584 = t492*t497*t580;
  t711 = t603*t617;
  t794 = t584 + t711;
  t475 = Cos(var1[13]);
  t862 = -1.*t497*t603;
  t954 = t492*t580*t617;
  t961 = t862 + t954;
  t1054 = Cos(var1[15]);
  t809 = t475*t794;
  t1012 = -1.*t835*t961;
  t1031 = t809 + t1012;
  t445 = Sin(var1[15]);
  t1087 = Cos(var1[14]);
  t1124 = Cos(var1[4]);
  t1185 = t1087*t492*t1124;
  t1217 = Sin(var1[14]);
  t1255 = t835*t794;
  t1259 = t475*t961;
  t1306 = t1255 + t1259;
  t1321 = t1217*t1306;
  t1355 = t1185 + t1321;
  t1450 = Cos(var1[16]);
  t1039 = t445*t1031;
  t1373 = t1054*t1355;
  t1395 = t1039 + t1373;
  t435 = Sin(var1[16]);
  t1493 = t1054*t1031;
  t1542 = -1.*t445*t1355;
  t1564 = t1493 + t1542;
  t1620 = Cos(var1[17]);
  t1409 = -1.*t435*t1395;
  t1578 = t1450*t1564;
  t1594 = t1409 + t1578;
  t432 = Sin(var1[17]);
  t1622 = t1450*t1395;
  t1624 = t435*t1564;
  t1696 = t1622 + t1624;
  t1750 = Cos(var1[18]);
  t1597 = t432*t1594;
  t1713 = t1620*t1696;
  t1717 = t1597 + t1713;
  t301 = Sin(var1[18]);
  t1767 = t1620*t1594;
  t1773 = -1.*t432*t1696;
  t1790 = t1767 + t1773;
  t207 = Cos(var1[19]);
  t1972 = t497*t603*t580;
  t2026 = -1.*t492*t617;
  t2042 = t1972 + t2026;
  t2075 = t492*t497;
  t2124 = t603*t580*t617;
  t2130 = t2075 + t2124;
  t2058 = t475*t2042;
  t2190 = -1.*t835*t2130;
  t2228 = t2058 + t2190;
  t2254 = t1087*t1124*t603;
  t2265 = t835*t2042;
  t2360 = t475*t2130;
  t2378 = t2265 + t2360;
  t2382 = t1217*t2378;
  t2385 = t2254 + t2382;
  t2243 = t445*t2228;
  t2417 = t1054*t2385;
  t2445 = t2243 + t2417;
  t2496 = t1054*t2228;
  t2569 = -1.*t445*t2385;
  t2571 = t2496 + t2569;
  t2458 = -1.*t435*t2445;
  t2584 = t1450*t2571;
  t2587 = t2458 + t2584;
  t2623 = t1450*t2445;
  t2625 = t435*t2571;
  t2659 = t2623 + t2625;
  t1877 = Sin(var1[19]);
  t2600 = t432*t2587;
  t2676 = t1620*t2659;
  t2715 = t2600 + t2676;
  t2746 = t1620*t2587;
  t2747 = -1.*t432*t2659;
  t2757 = t2746 + t2747;
  t2845 = t475*t1124*t497;
  t2863 = -1.*t1124*t835*t617;
  t2917 = t2845 + t2863;
  t2965 = -1.*t1087*t580;
  t2983 = t1124*t497*t835;
  t3028 = t475*t1124*t617;
  t3037 = t2983 + t3028;
  t3065 = t1217*t3037;
  t3070 = t2965 + t3065;
  t2935 = t445*t2917;
  t3095 = t1054*t3070;
  t3149 = t2935 + t3095;
  t3219 = t1054*t2917;
  t3233 = -1.*t445*t3070;
  t3239 = t3219 + t3233;
  t3192 = -1.*t435*t3149;
  t3253 = t1450*t3239;
  t3270 = t3192 + t3253;
  t3298 = t1450*t3149;
  t3322 = t435*t3239;
  t3341 = t3298 + t3322;
  t3287 = t432*t3270;
  t3353 = t1620*t3341;
  t3391 = t3287 + t3353;
  t3410 = t1620*t3270;
  t3419 = -1.*t432*t3341;
  t3463 = t3410 + t3419;
  t1735 = -1.*t301*t1717;
  t1802 = t1750*t1790;
  t1839 = t1735 + t1802;
  t1878 = t1750*t1717;
  t1885 = t301*t1790;
  t1891 = t1878 + t1885;
  t2725 = -1.*t301*t2715;
  t2771 = t1750*t2757;
  t2793 = t2725 + t2771;
  t2808 = t1750*t2715;
  t2817 = t301*t2757;
  t2824 = t2808 + t2817;
  t3408 = -1.*t301*t3391;
  t3466 = t1750*t3463;
  t3501 = t3408 + t3466;
  t3568 = t1750*t3391;
  t3582 = t301*t3463;
  t3586 = t3568 + t3582;
  t4019 = -1.*t1087;
  t4038 = 1. + t4019;
  t4265 = -1.*t1054;
  t4275 = 1. + t4265;
  t4518 = -1.*t1450;
  t4528 = 1. + t4518;
  t4670 = -1.*t1620;
  t4678 = 1. + t4670;
  t4779 = -1.*t1750;
  t4812 = 1. + t4779;
  t4900 = -1.*t207;
  t4909 = 1. + t4900;
  t3622 = t1877*t1839;
  t3639 = t207*t1891;
  t3647 = t3622 + t3639;
  t4080 = -0.049*t4038;
  t4097 = -0.135*t1217;
  t4113 = 0. + t4080 + t4097;
  t4159 = 0.135*t835;
  t4162 = 0. + t4159;
  t4186 = -1.*t475;
  t4202 = 1. + t4186;
  t4206 = -0.135*t4202;
  t4220 = 0. + t4206;
  t4224 = -0.135*t4038;
  t4252 = 0.049*t1217;
  t4260 = 0. + t4224 + t4252;
  t4334 = -0.09*t4275;
  t4337 = 0.049*t445;
  t4343 = 0. + t4334 + t4337;
  t4423 = -0.049*t4275;
  t4434 = -0.09*t445;
  t4480 = 0. + t4423 + t4434;
  t4539 = -0.049*t4528;
  t4548 = -0.21*t435;
  t4560 = 0. + t4539 + t4548;
  t4591 = -0.21*t4528;
  t4605 = 0.049*t435;
  t4642 = 0. + t4591 + t4605;
  t4682 = -0.2707*t4678;
  t4683 = 0.0016*t432;
  t4727 = 0. + t4682 + t4683;
  t4733 = -0.0016*t4678;
  t4743 = -0.2707*t432;
  t4758 = 0. + t4733 + t4743;
  t4816 = 0.0184*t4812;
  t4830 = -0.7055*t301;
  t4835 = 0. + t4816 + t4830;
  t4865 = -0.7055*t4812;
  t4877 = -0.0184*t301;
  t4891 = 0. + t4865 + t4877;
  t4911 = -1.1135*t4909;
  t4923 = 0.0216*t1877;
  t4930 = 0. + t4911 + t4923;
  t4948 = -0.0216*t4909;
  t4950 = -1.1135*t1877;
  t4959 = 0. + t4948 + t4950;
  t3653 = t1877*t2793;
  t3654 = t207*t2824;
  t3699 = t3653 + t3654;
  t3708 = t1877*t3501;
  t3714 = t207*t3586;
  t3821 = t3708 + t3714;

  p_output1(0)=t1877*t1891 - 1.*t1839*t207;
  p_output1(1)=-1.*t207*t2793 + t1877*t2824;
  p_output1(2)=-1.*t207*t3501 + t1877*t3586;
  p_output1(3)=0.;
  p_output1(4)=t3647;
  p_output1(5)=t3699;
  p_output1(6)=t3821;
  p_output1(7)=0.;
  p_output1(8)=-1.*t1087*t1306 + t1124*t1217*t492;
  p_output1(9)=-1.*t1087*t2378 + t1124*t1217*t603;
  p_output1(10)=-1.*t1087*t3037 - 1.*t1217*t580;
  p_output1(11)=0.;
  p_output1(12)=0. - 1.1135*(-1.*t1877*t1891 + t1839*t207) - 0.0216*t3647 + t1306*t4260 + t1031*t4343 + t1355*t4480 + t1395*t4560 + t1564*t4642 + t1594*t4727 + t1696*t4758 + t1717*t4835 + t1790*t4891 + t1124*t4113*t492 - 0.1305*(t1087*t1306 - 1.*t1124*t1217*t492) + t1839*t4930 + t1891*t4959 + t4162*t794 + t4220*t961 + var1(0);
  p_output1(13)=0. - 1.1135*(t207*t2793 - 1.*t1877*t2824) - 0.0216*t3699 + t2042*t4162 + t2130*t4220 + t2378*t4260 + t2228*t4343 + t2385*t4480 + t2445*t4560 + t2571*t4642 + t2587*t4727 + t2659*t4758 + t2715*t4835 + t2757*t4891 + t2793*t4930 + t2824*t4959 + t1124*t4113*t603 - 0.1305*(t1087*t2378 - 1.*t1124*t1217*t603) + var1(1);
  p_output1(14)=0. - 1.1135*(t207*t3501 - 1.*t1877*t3586) - 0.0216*t3821 + t3037*t4260 + t2917*t4343 + t3070*t4480 + t3149*t4560 + t3239*t4642 + t3270*t4727 + t3341*t4758 + t3391*t4835 + t3463*t4891 + t3501*t4930 + t3586*t4959 + t1124*t4162*t497 - 1.*t4113*t580 - 0.1305*(t1087*t3037 + t1217*t580) + t1124*t4220*t617 + var1(2);
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



