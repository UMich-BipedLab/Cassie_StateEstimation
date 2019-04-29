/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:22:14 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_rotation_right.h"

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
  double t1348;
  double t2561;
  double t2349;
  double t2469;
  double t2807;
  double t148;
  double t371;
  double t377;
  double t460;
  double t2135;
  double t2560;
  double t2990;
  double t3060;
  double t3080;
  double t3840;
  double t3874;
  double t3889;
  double t123;
  double t4417;
  double t4426;
  double t4992;
  double t402;
  double t768;
  double t1082;
  double t2204;
  double t2224;
  double t3371;
  double t3572;
  double t3611;
  double t3757;
  double t3981;
  double t4117;
  double t4292;
  double t6609;
  double t6614;
  double t6624;
  double t6640;
  double t6644;
  double t6649;
  double t6667;
  double t6670;
  double t6671;
  double t6918;
  double t6923;
  double t6930;
  double t7124;
  double t7134;
  double t7146;
  double t7297;
  double t7298;
  double t7313;
  double t7426;
  double t7427;
  double t7429;
  double t6711;
  double t7463;
  double t7490;
  double t7537;
  double t7538;
  double t7545;
  double t7627;
  double t7639;
  double t7646;
  double t7738;
  double t7743;
  double t7764;
  double t7448;
  double t6720;
  double t6728;
  double t7564;
  double t7877;
  double t7878;
  double t7884;
  double t7933;
  double t7935;
  double t7706;
  double t7709;
  double t7710;
  double t7732;
  double t7767;
  double t7777;
  double t7779;
  double t6731;
  double t6733;
  double t6749;
  double t7970;
  double t7972;
  double t7973;
  double t7990;
  double t8002;
  double t8044;
  double t8046;
  double t8054;
  double t6548;
  double t8124;
  double t8126;
  double t8127;
  t1348 = Sin(var1[3]);
  t2561 = Cos(var1[3]);
  t2349 = Cos(var1[5]);
  t2469 = Sin(var1[4]);
  t2807 = Sin(var1[5]);
  t148 = Cos(var1[14]);
  t371 = -1.*t148;
  t377 = 1. + t371;
  t460 = Sin(var1[14]);
  t2135 = Sin(var1[13]);
  t2560 = -1.*t2349*t1348*t2469;
  t2990 = t2561*t2807;
  t3060 = t2560 + t2990;
  t3080 = Cos(var1[13]);
  t3840 = -1.*t2561*t2349;
  t3874 = -1.*t1348*t2469*t2807;
  t3889 = t3840 + t3874;
  t123 = Cos(var1[4]);
  t4417 = t2135*t3060;
  t4426 = t3080*t3889;
  t4992 = t4417 + t4426;
  t402 = -0.049*t377;
  t768 = -0.135*t460;
  t1082 = 0. + t402 + t768;
  t2204 = 0.135*t2135;
  t2224 = 0. + t2204;
  t3371 = -1.*t3080;
  t3572 = 1. + t3371;
  t3611 = -0.135*t3572;
  t3757 = 0. + t3611;
  t3981 = -0.135*t377;
  t4117 = 0.049*t460;
  t4292 = 0. + t3981 + t4117;
  t6609 = t2561*t2349*t2469;
  t6614 = t1348*t2807;
  t6624 = t6609 + t6614;
  t6640 = -1.*t2349*t1348;
  t6644 = t2561*t2469*t2807;
  t6649 = t6640 + t6644;
  t6667 = t2135*t6624;
  t6670 = t3080*t6649;
  t6671 = t6667 + t6670;
  t6918 = t2561*t123*t2349*t2135;
  t6923 = t3080*t2561*t123*t2807;
  t6930 = t6918 + t6923;
  t7124 = t123*t2349*t2135*t1348;
  t7134 = t3080*t123*t1348*t2807;
  t7146 = t7124 + t7134;
  t7297 = -1.*t2349*t2135*t2469;
  t7298 = -1.*t3080*t2469*t2807;
  t7313 = t7297 + t7298;
  t7426 = t2349*t1348;
  t7427 = -1.*t2561*t2469*t2807;
  t7429 = t7426 + t7427;
  t6711 = t3080*t6624;
  t7463 = t2135*t7429;
  t7490 = t6711 + t7463;
  t7537 = t2349*t1348*t2469;
  t7538 = -1.*t2561*t2807;
  t7545 = t7537 + t7538;
  t7627 = t3080*t7545;
  t7639 = t2135*t3889;
  t7646 = t7627 + t7639;
  t7738 = t3080*t123*t2349;
  t7743 = -1.*t123*t2135*t2807;
  t7764 = t7738 + t7743;
  t7448 = -1.*t2135*t6624;
  t6720 = -1.*t2135*t6649;
  t6728 = t6711 + t6720;
  t7564 = -1.*t2135*t7545;
  t7877 = t2561*t2349;
  t7878 = t1348*t2469*t2807;
  t7884 = t7877 + t7878;
  t7933 = -1.*t2135*t7884;
  t7935 = t7627 + t7933;
  t7706 = -1.*t123*t2349*t2135;
  t7709 = -1.*t3080*t123*t2807;
  t7710 = t7706 + t7709;
  t7732 = -0.09*t7710;
  t7767 = -0.135*t148*t7764;
  t7777 = t4292*t7764;
  t7779 = -0.049*t460*t7764;
  t6731 = -1.*t2561*t123*t460;
  t6733 = t148*t6671;
  t6749 = t6731 + t6733;
  t7970 = -0.135*t148;
  t7972 = -0.049*t460;
  t7973 = t7970 + t7972;
  t7990 = 0.049*t148;
  t8002 = t7990 + t768;
  t8044 = t2135*t7545;
  t8046 = t3080*t7884;
  t8054 = t8044 + t8046;
  t6548 = -1.*t148*t123*t1348;
  t8124 = t123*t2349*t2135;
  t8126 = t3080*t123*t2807;
  t8127 = t8124 + t8126;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-1.*t1082*t123*t1348 + t2224*t3060 + t3757*t3889 - 0.09*(t3060*t3080 - 1.*t2135*t3889) + t4292*t4992 - 0.135*(t123*t1348*t460 + t148*t4992) - 0.049*(t460*t4992 + t6548);
  p_output1(10)=t1082*t123*t2561 + t2224*t6624 + t3757*t6649 + t4292*t6671 - 0.049*(t123*t148*t2561 + t460*t6671) - 0.09*t6728 - 0.135*t6749;
  p_output1(11)=0;
  p_output1(12)=t123*t2224*t2349*t2561 - 1.*t1082*t2469*t2561 - 0.09*(-1.*t123*t2135*t2561*t2807 + t123*t2349*t2561*t3080) + t123*t2561*t2807*t3757 + t4292*t6930 - 0.135*(t2469*t2561*t460 + t148*t6930) - 0.049*(-1.*t148*t2469*t2561 + t460*t6930);
  p_output1(13)=t123*t1348*t2224*t2349 - 1.*t1082*t1348*t2469 - 0.09*(-1.*t123*t1348*t2135*t2807 + t123*t1348*t2349*t3080) + t123*t1348*t2807*t3757 + t4292*t7146 - 0.135*(t1348*t2469*t460 + t148*t7146) - 0.049*(-1.*t1348*t148*t2469 + t460*t7146);
  p_output1(14)=-1.*t1082*t123 - 1.*t2224*t2349*t2469 - 0.09*(t2135*t2469*t2807 - 1.*t2349*t2469*t3080) - 1.*t2469*t2807*t3757 + t4292*t7313 - 0.135*(t123*t460 + t148*t7313) - 0.049*(-1.*t123*t148 + t460*t7313);
  p_output1(15)=t3757*t6624 + t2224*t7429 - 0.09*(t3080*t7429 + t7448) - 0.135*t148*t7490 + t4292*t7490 - 0.049*t460*t7490;
  p_output1(16)=t2224*t3889 + t3757*t7545 - 0.09*(t4426 + t7564) - 0.135*t148*t7646 + t4292*t7646 - 0.049*t460*t7646;
  p_output1(17)=-1.*t123*t2224*t2807 + t123*t2349*t3757 + t7732 + t7767 + t7777 + t7779;
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
  p_output1(39)=0.135*t3080*t6624 - 0.135*t2135*t6649 - 0.135*t148*t6728 + t4292*t6728 - 0.049*t460*t6728 - 0.09*(-1.*t3080*t6649 + t7448);
  p_output1(40)=0.135*t3080*t7545 - 0.135*t2135*t7884 - 0.09*(t7564 - 1.*t3080*t7884) - 0.135*t148*t7935 + t4292*t7935 - 0.049*t460*t7935;
  p_output1(41)=-0.135*t123*t2135*t2807 + 0.135*t123*t2349*t3080 + t7732 + t7767 + t7777 + t7779;
  p_output1(42)=-0.135*(-1.*t123*t148*t2561 - 1.*t460*t6671) - 0.049*t6749 + t123*t2561*t7973 + t6671*t8002;
  p_output1(43)=t123*t1348*t7973 + t8002*t8054 - 0.049*(-1.*t123*t1348*t460 + t148*t8054) - 0.135*(t6548 - 1.*t460*t8054);
  p_output1(44)=-1.*t2469*t7973 + t8002*t8127 - 0.049*(t2469*t460 + t148*t8127) - 0.135*(t148*t2469 - 1.*t460*t8127);
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
}


       
Eigen::Matrix<double,3,20> Jp_hip_rotation_right(const Eigen::Matrix<double,20,1> &var1)
//void Jp_hip_rotation_right(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,20>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



