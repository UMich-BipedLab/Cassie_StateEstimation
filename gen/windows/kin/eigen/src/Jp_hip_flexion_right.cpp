/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:09:49 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_flexion_right.h"

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
static void output1(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t683;
  double t1072;
  double t844;
  double t890;
  double t1156;
  double t491;
  double t518;
  double t625;
  double t665;
  double t727;
  double t894;
  double t1417;
  double t1468;
  double t1611;
  double t2174;
  double t2285;
  double t2371;
  double t427;
  double t2694;
  double t2696;
  double t2755;
  double t3234;
  double t3244;
  double t3428;
  double t3551;
  double t3860;
  double t3903;
  double t3999;
  double t4585;
  double t4606;
  double t4692;
  double t628;
  double t672;
  double t675;
  double t733;
  double t756;
  double t1615;
  double t1654;
  double t1668;
  double t1714;
  double t2583;
  double t2603;
  double t2645;
  double t5747;
  double t5772;
  double t5843;
  double t6029;
  double t6037;
  double t6113;
  double t3441;
  double t3570;
  double t3602;
  double t6402;
  double t6418;
  double t6455;
  double t4365;
  double t4384;
  double t4435;
  double t6711;
  double t6729;
  double t6773;
  double t6935;
  double t6954;
  double t6971;
  double t7137;
  double t7165;
  double t7174;
  double t7190;
  double t7219;
  double t7235;
  double t7337;
  double t7339;
  double t7346;
  double t7484;
  double t7501;
  double t7519;
  double t7537;
  double t7551;
  double t7569;
  double t7660;
  double t7682;
  double t7697;
  double t7814;
  double t7830;
  double t7832;
  double t7850;
  double t7852;
  double t7857;
  double t7897;
  double t7898;
  double t7906;
  double t7990;
  double t7991;
  double t8002;
  double t8028;
  double t8044;
  double t8020;
  double t8022;
  double t8024;
  double t8141;
  double t8143;
  double t8148;
  double t8169;
  double t8175;
  double t8182;
  double t8157;
  double t8158;
  double t8285;
  double t8287;
  double t8288;
  double t8253;
  double t8266;
  double t8270;
  double t8405;
  double t8421;
  double t8572;
  double t8582;
  double t8586;
  double t8603;
  double t8604;
  double t8593;
  double t8595;
  double t8282;
  double t8304;
  double t8308;
  double t8312;
  double t8315;
  double t8316;
  double t8319;
  double t8329;
  double t8330;
  double t8340;
  double t8361;
  double t8370;
  double t6847;
  double t6889;
  double t6923;
  double t8740;
  double t8755;
  double t8757;
  double t8777;
  double t8779;
  double t8820;
  double t8822;
  double t8838;
  double t8846;
  double t8858;
  double t8861;
  double t8900;
  double t8903;
  double t8906;
  double t8916;
  double t8918;
  double t8940;
  double t7014;
  double t7025;
  double t7066;
  double t8981;
  double t8984;
  double t8988;
  double t8991;
  double t8993;
  double t9023;
  double t9029;
  double t9034;
  double t9076;
  double t9079;
  double t9083;
  t683 = Sin(var1[3]);
  t1072 = Cos(var1[3]);
  t844 = Cos(var1[5]);
  t890 = Sin(var1[4]);
  t1156 = Sin(var1[5]);
  t491 = Cos(var1[14]);
  t518 = -1.*t491;
  t625 = 1. + t518;
  t665 = Sin(var1[14]);
  t727 = Sin(var1[13]);
  t894 = -1.*t844*t683*t890;
  t1417 = t1072*t1156;
  t1468 = t894 + t1417;
  t1611 = Cos(var1[13]);
  t2174 = -1.*t1072*t844;
  t2285 = -1.*t683*t890*t1156;
  t2371 = t2174 + t2285;
  t427 = Cos(var1[4]);
  t2694 = t727*t1468;
  t2696 = t1611*t2371;
  t2755 = t2694 + t2696;
  t3234 = Cos(var1[15]);
  t3244 = -1.*t3234;
  t3428 = 1. + t3244;
  t3551 = Sin(var1[15]);
  t3860 = t1611*t1468;
  t3903 = -1.*t727*t2371;
  t3999 = t3860 + t3903;
  t4585 = -1.*t491*t427*t683;
  t4606 = t665*t2755;
  t4692 = t4585 + t4606;
  t628 = -0.049*t625;
  t672 = -0.135*t665;
  t675 = 0. + t628 + t672;
  t733 = 0.135*t727;
  t756 = 0. + t733;
  t1615 = -1.*t1611;
  t1654 = 1. + t1615;
  t1668 = -0.135*t1654;
  t1714 = 0. + t1668;
  t2583 = -0.135*t625;
  t2603 = 0.049*t665;
  t2645 = 0. + t2583 + t2603;
  t5747 = t1072*t844*t890;
  t5772 = t683*t1156;
  t5843 = t5747 + t5772;
  t6029 = -1.*t844*t683;
  t6037 = t1072*t890*t1156;
  t6113 = t6029 + t6037;
  t3441 = -0.09*t3428;
  t3570 = 0.049*t3551;
  t3602 = 0. + t3441 + t3570;
  t6402 = t727*t5843;
  t6418 = t1611*t6113;
  t6455 = t6402 + t6418;
  t4365 = -0.049*t3428;
  t4384 = -0.09*t3551;
  t4435 = 0. + t4365 + t4384;
  t6711 = t1611*t5843;
  t6729 = -1.*t727*t6113;
  t6773 = t6711 + t6729;
  t6935 = t491*t1072*t427;
  t6954 = t665*t6455;
  t6971 = t6935 + t6954;
  t7137 = t1072*t427*t844*t727;
  t7165 = t1611*t1072*t427*t1156;
  t7174 = t7137 + t7165;
  t7190 = t1611*t1072*t427*t844;
  t7219 = -1.*t1072*t427*t727*t1156;
  t7235 = t7190 + t7219;
  t7337 = -1.*t491*t1072*t890;
  t7339 = t665*t7174;
  t7346 = t7337 + t7339;
  t7484 = t427*t844*t727*t683;
  t7501 = t1611*t427*t683*t1156;
  t7519 = t7484 + t7501;
  t7537 = t1611*t427*t844*t683;
  t7551 = -1.*t427*t727*t683*t1156;
  t7569 = t7537 + t7551;
  t7660 = -1.*t491*t683*t890;
  t7682 = t665*t7519;
  t7697 = t7660 + t7682;
  t7814 = -1.*t844*t727*t890;
  t7830 = -1.*t1611*t890*t1156;
  t7832 = t7814 + t7830;
  t7850 = -1.*t1611*t844*t890;
  t7852 = t727*t890*t1156;
  t7857 = t7850 + t7852;
  t7897 = -1.*t491*t427;
  t7898 = t665*t7832;
  t7906 = t7897 + t7898;
  t7990 = t844*t683;
  t7991 = -1.*t1072*t890*t1156;
  t8002 = t7990 + t7991;
  t8028 = t727*t8002;
  t8044 = t6711 + t8028;
  t8020 = -1.*t727*t5843;
  t8022 = t1611*t8002;
  t8024 = t8020 + t8022;
  t8141 = t844*t683*t890;
  t8143 = -1.*t1072*t1156;
  t8148 = t8141 + t8143;
  t8169 = t1611*t8148;
  t8175 = t727*t2371;
  t8182 = t8169 + t8175;
  t8157 = -1.*t727*t8148;
  t8158 = t8157 + t2696;
  t8285 = t1611*t427*t844;
  t8287 = -1.*t427*t727*t1156;
  t8288 = t8285 + t8287;
  t8253 = -1.*t427*t844*t727;
  t8266 = -1.*t1611*t427*t1156;
  t8270 = t8253 + t8266;
  t8405 = -1.*t1611*t6113;
  t8421 = t8020 + t8405;
  t8572 = t1072*t844;
  t8582 = t683*t890*t1156;
  t8586 = t8572 + t8582;
  t8603 = -1.*t727*t8586;
  t8604 = t8169 + t8603;
  t8593 = -1.*t1611*t8586;
  t8595 = t8157 + t8593;
  t8282 = t3602*t8270;
  t8304 = -0.135*t491*t8288;
  t8308 = t2645*t8288;
  t8312 = t665*t4435*t8288;
  t8315 = t3551*t8270;
  t8316 = t3234*t665*t8288;
  t8319 = t8315 + t8316;
  t8329 = -0.049*t8319;
  t8330 = t3234*t8270;
  t8340 = -1.*t665*t3551*t8288;
  t8361 = t8330 + t8340;
  t8370 = -0.09*t8361;
  t6847 = -1.*t1072*t427*t665;
  t6889 = t491*t6455;
  t6923 = t6847 + t6889;
  t8740 = -0.135*t491;
  t8755 = -0.049*t665;
  t8757 = t8740 + t8755;
  t8777 = 0.049*t491;
  t8779 = t8777 + t672;
  t8820 = t727*t8148;
  t8822 = t1611*t8586;
  t8838 = t8820 + t8822;
  t8846 = -1.*t427*t665*t683;
  t8858 = t491*t8838;
  t8861 = t8846 + t8858;
  t8900 = t427*t844*t727;
  t8903 = t1611*t427*t1156;
  t8906 = t8900 + t8903;
  t8916 = t665*t890;
  t8918 = t491*t8906;
  t8940 = t8916 + t8918;
  t7014 = t3234*t6773;
  t7025 = -1.*t3551*t6971;
  t7066 = t7014 + t7025;
  t8981 = 0.049*t3234;
  t8984 = t8981 + t4384;
  t8988 = -0.09*t3234;
  t8991 = -0.049*t3551;
  t8993 = t8988 + t8991;
  t9023 = t491*t427*t683;
  t9029 = t665*t8838;
  t9034 = t9023 + t9029;
  t9076 = -1.*t491*t890;
  t9079 = t665*t8906;
  t9083 = t9076 + t9079;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1714*t2371 + t2645*t2755 + t3602*t3999 + t4435*t4692 - 0.049*(t3551*t3999 + t3234*t4692) - 0.09*(t3234*t3999 - 1.*t3551*t4692) - 1.*t427*t675*t683 - 0.135*(t2755*t491 + t427*t665*t683) + t1468*t756;
  p_output1(10)=t1714*t6113 + t2645*t6455 + t1072*t427*t675 + t3602*t6773 - 0.135*t6923 + t4435*t6971 - 0.049*(t3551*t6773 + t3234*t6971) - 0.09*t7066 + t5843*t756;
  p_output1(11)=0;
  p_output1(12)=t1072*t1156*t1714*t427 + t2645*t7174 + t3602*t7235 + t4435*t7346 - 0.049*(t3551*t7235 + t3234*t7346) - 0.09*(t3234*t7235 - 1.*t3551*t7346) + t1072*t427*t756*t844 - 1.*t1072*t675*t890 - 0.135*(t491*t7174 + t1072*t665*t890);
  p_output1(13)=t1156*t1714*t427*t683 + t2645*t7519 + t3602*t7569 + t4435*t7697 - 0.049*(t3551*t7569 + t3234*t7697) - 0.09*(t3234*t7569 - 1.*t3551*t7697) + t427*t683*t756*t844 - 1.*t675*t683*t890 - 0.135*(t491*t7519 + t665*t683*t890);
  p_output1(14)=-1.*t427*t675 + t2645*t7832 - 0.135*(t427*t665 + t491*t7832) + t3602*t7857 + t4435*t7906 - 0.049*(t3551*t7857 + t3234*t7906) - 0.09*(t3234*t7857 - 1.*t3551*t7906) - 1.*t1156*t1714*t890 - 1.*t756*t844*t890;
  p_output1(15)=t1714*t5843 + t756*t8002 + t3602*t8024 + t2645*t8044 - 0.135*t491*t8044 + t4435*t665*t8044 - 0.049*(t3551*t8024 + t3234*t665*t8044) - 0.09*(t3234*t8024 - 1.*t3551*t665*t8044);
  p_output1(16)=t2371*t756 + t1714*t8148 + t3602*t8158 + t2645*t8182 - 0.135*t491*t8182 + t4435*t665*t8182 - 0.049*(t3551*t8158 + t3234*t665*t8182) - 0.09*(t3234*t8158 - 1.*t3551*t665*t8182);
  p_output1(17)=-1.*t1156*t427*t756 + t8282 + t8304 + t8308 + t8312 + t8329 + t8370 + t1714*t427*t844;
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
  p_output1(39)=0.135*t1611*t5843 + t2645*t6773 - 0.135*t491*t6773 + t4435*t665*t6773 - 0.135*t6113*t727 + t3602*t8421 - 0.09*(-1.*t3551*t665*t6773 + t3234*t8421) - 0.049*(t3234*t665*t6773 + t3551*t8421);
  p_output1(40)=0.135*t1611*t8148 - 0.135*t727*t8586 + t3602*t8595 + t2645*t8604 - 0.135*t491*t8604 + t4435*t665*t8604 - 0.049*(t3551*t8595 + t3234*t665*t8604) - 0.09*(t3234*t8595 - 1.*t3551*t665*t8604);
  p_output1(41)=-0.135*t1156*t427*t727 + t8282 + t8304 + t8308 + t8312 + t8329 + t8370 + 0.135*t1611*t427*t844;
  p_output1(42)=-0.135*(-1.*t1072*t427*t491 - 1.*t6455*t665) - 0.049*t3234*t6923 + 0.09*t3551*t6923 + t4435*t6923 + t1072*t427*t8757 + t6455*t8779;
  p_output1(43)=t427*t683*t8757 + t8779*t8838 - 0.135*(t4585 - 1.*t665*t8838) - 0.049*t3234*t8861 + 0.09*t3551*t8861 + t4435*t8861;
  p_output1(44)=-1.*t8757*t890 + t8779*t8906 - 0.135*(t491*t890 - 1.*t665*t8906) - 0.049*t3234*t8940 + 0.09*t3551*t8940 + t4435*t8940;
  p_output1(45)=-0.09*(-1.*t3551*t6773 - 1.*t3234*t6971) - 0.049*t7066 + t6773*t8984 + t6971*t8993;
  p_output1(46)=t8604*t8984 + t8993*t9034 - 0.09*(-1.*t3551*t8604 - 1.*t3234*t9034) - 0.049*(t3234*t8604 - 1.*t3551*t9034);
  p_output1(47)=t8288*t8984 + t8993*t9083 - 0.09*(-1.*t3551*t8288 - 1.*t3234*t9083) - 0.049*(t3234*t8288 - 1.*t3551*t9083);
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
}


       
Eigen::Matrix<double,3,20> Jp_hip_flexion_right(const Eigen::Matrix<double,20,1> &var1)
//void Jp_hip_flexion_right(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,20>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



