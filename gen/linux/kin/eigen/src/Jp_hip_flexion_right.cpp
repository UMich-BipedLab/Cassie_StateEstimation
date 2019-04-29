/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:27 GMT-05:00
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
  double t1120;
  double t1465;
  double t1431;
  double t1435;
  double t1473;
  double t437;
  double t456;
  double t641;
  double t684;
  double t1233;
  double t1464;
  double t1509;
  double t1570;
  double t1676;
  double t2203;
  double t2210;
  double t2265;
  double t127;
  double t2558;
  double t2647;
  double t2650;
  double t2696;
  double t2812;
  double t2825;
  double t2933;
  double t3178;
  double t3214;
  double t3300;
  double t3548;
  double t3553;
  double t3581;
  double t680;
  double t1058;
  double t1097;
  double t1309;
  double t1385;
  double t1718;
  double t1813;
  double t1898;
  double t2124;
  double t2338;
  double t2391;
  double t2467;
  double t4376;
  double t4520;
  double t4524;
  double t4634;
  double t4694;
  double t4717;
  double t2901;
  double t2947;
  double t3165;
  double t4878;
  double t4899;
  double t4911;
  double t3493;
  double t3526;
  double t3543;
  double t4979;
  double t5030;
  double t5032;
  double t5428;
  double t5607;
  double t5751;
  double t6914;
  double t6949;
  double t7137;
  double t7193;
  double t7198;
  double t7209;
  double t7260;
  double t7262;
  double t7273;
  double t7454;
  double t7457;
  double t7481;
  double t7495;
  double t7501;
  double t7532;
  double t7581;
  double t7588;
  double t7603;
  double t7745;
  double t7754;
  double t7757;
  double t7767;
  double t7771;
  double t7775;
  double t7833;
  double t7850;
  double t7852;
  double t7895;
  double t7898;
  double t7936;
  double t8002;
  double t8009;
  double t7958;
  double t7959;
  double t7961;
  double t8080;
  double t8087;
  double t8093;
  double t8133;
  double t8138;
  double t8141;
  double t8114;
  double t8118;
  double t8240;
  double t8243;
  double t8247;
  double t8204;
  double t8213;
  double t8231;
  double t8297;
  double t8304;
  double t8393;
  double t8400;
  double t8406;
  double t8432;
  double t8434;
  double t8419;
  double t8423;
  double t8232;
  double t8255;
  double t8258;
  double t8261;
  double t8264;
  double t8270;
  double t8272;
  double t8280;
  double t8282;
  double t8284;
  double t8286;
  double t8287;
  double t5078;
  double t5137;
  double t5208;
  double t8556;
  double t8557;
  double t8560;
  double t8567;
  double t8573;
  double t8649;
  double t8655;
  double t8657;
  double t8663;
  double t8665;
  double t8668;
  double t8707;
  double t8709;
  double t8716;
  double t8755;
  double t8763;
  double t8775;
  double t6204;
  double t6236;
  double t6265;
  double t8811;
  double t8813;
  double t8818;
  double t8820;
  double t8831;
  double t8896;
  double t8900;
  double t8901;
  double t8935;
  double t8937;
  double t8938;
  t1120 = Sin(var1[3]);
  t1465 = Cos(var1[3]);
  t1431 = Cos(var1[5]);
  t1435 = Sin(var1[4]);
  t1473 = Sin(var1[5]);
  t437 = Cos(var1[14]);
  t456 = -1.*t437;
  t641 = 1. + t456;
  t684 = Sin(var1[14]);
  t1233 = Sin(var1[13]);
  t1464 = -1.*t1431*t1120*t1435;
  t1509 = t1465*t1473;
  t1570 = t1464 + t1509;
  t1676 = Cos(var1[13]);
  t2203 = -1.*t1465*t1431;
  t2210 = -1.*t1120*t1435*t1473;
  t2265 = t2203 + t2210;
  t127 = Cos(var1[4]);
  t2558 = t1233*t1570;
  t2647 = t1676*t2265;
  t2650 = t2558 + t2647;
  t2696 = Cos(var1[15]);
  t2812 = -1.*t2696;
  t2825 = 1. + t2812;
  t2933 = Sin(var1[15]);
  t3178 = t1676*t1570;
  t3214 = -1.*t1233*t2265;
  t3300 = t3178 + t3214;
  t3548 = -1.*t437*t127*t1120;
  t3553 = t684*t2650;
  t3581 = t3548 + t3553;
  t680 = -0.049*t641;
  t1058 = -0.135*t684;
  t1097 = 0. + t680 + t1058;
  t1309 = 0.135*t1233;
  t1385 = 0. + t1309;
  t1718 = -1.*t1676;
  t1813 = 1. + t1718;
  t1898 = -0.135*t1813;
  t2124 = 0. + t1898;
  t2338 = -0.135*t641;
  t2391 = 0.049*t684;
  t2467 = 0. + t2338 + t2391;
  t4376 = t1465*t1431*t1435;
  t4520 = t1120*t1473;
  t4524 = t4376 + t4520;
  t4634 = -1.*t1431*t1120;
  t4694 = t1465*t1435*t1473;
  t4717 = t4634 + t4694;
  t2901 = -0.09*t2825;
  t2947 = 0.049*t2933;
  t3165 = 0. + t2901 + t2947;
  t4878 = t1233*t4524;
  t4899 = t1676*t4717;
  t4911 = t4878 + t4899;
  t3493 = -0.049*t2825;
  t3526 = -0.09*t2933;
  t3543 = 0. + t3493 + t3526;
  t4979 = t1676*t4524;
  t5030 = -1.*t1233*t4717;
  t5032 = t4979 + t5030;
  t5428 = t437*t1465*t127;
  t5607 = t684*t4911;
  t5751 = t5428 + t5607;
  t6914 = t1465*t127*t1431*t1233;
  t6949 = t1676*t1465*t127*t1473;
  t7137 = t6914 + t6949;
  t7193 = t1676*t1465*t127*t1431;
  t7198 = -1.*t1465*t127*t1233*t1473;
  t7209 = t7193 + t7198;
  t7260 = -1.*t437*t1465*t1435;
  t7262 = t684*t7137;
  t7273 = t7260 + t7262;
  t7454 = t127*t1431*t1233*t1120;
  t7457 = t1676*t127*t1120*t1473;
  t7481 = t7454 + t7457;
  t7495 = t1676*t127*t1431*t1120;
  t7501 = -1.*t127*t1233*t1120*t1473;
  t7532 = t7495 + t7501;
  t7581 = -1.*t437*t1120*t1435;
  t7588 = t684*t7481;
  t7603 = t7581 + t7588;
  t7745 = -1.*t1431*t1233*t1435;
  t7754 = -1.*t1676*t1435*t1473;
  t7757 = t7745 + t7754;
  t7767 = -1.*t1676*t1431*t1435;
  t7771 = t1233*t1435*t1473;
  t7775 = t7767 + t7771;
  t7833 = -1.*t437*t127;
  t7850 = t684*t7757;
  t7852 = t7833 + t7850;
  t7895 = t1431*t1120;
  t7898 = -1.*t1465*t1435*t1473;
  t7936 = t7895 + t7898;
  t8002 = t1233*t7936;
  t8009 = t4979 + t8002;
  t7958 = -1.*t1233*t4524;
  t7959 = t1676*t7936;
  t7961 = t7958 + t7959;
  t8080 = t1431*t1120*t1435;
  t8087 = -1.*t1465*t1473;
  t8093 = t8080 + t8087;
  t8133 = t1676*t8093;
  t8138 = t1233*t2265;
  t8141 = t8133 + t8138;
  t8114 = -1.*t1233*t8093;
  t8118 = t8114 + t2647;
  t8240 = t1676*t127*t1431;
  t8243 = -1.*t127*t1233*t1473;
  t8247 = t8240 + t8243;
  t8204 = -1.*t127*t1431*t1233;
  t8213 = -1.*t1676*t127*t1473;
  t8231 = t8204 + t8213;
  t8297 = -1.*t1676*t4717;
  t8304 = t7958 + t8297;
  t8393 = t1465*t1431;
  t8400 = t1120*t1435*t1473;
  t8406 = t8393 + t8400;
  t8432 = -1.*t1233*t8406;
  t8434 = t8133 + t8432;
  t8419 = -1.*t1676*t8406;
  t8423 = t8114 + t8419;
  t8232 = t3165*t8231;
  t8255 = -0.135*t437*t8247;
  t8258 = t2467*t8247;
  t8261 = t684*t3543*t8247;
  t8264 = t2933*t8231;
  t8270 = t2696*t684*t8247;
  t8272 = t8264 + t8270;
  t8280 = -0.049*t8272;
  t8282 = t2696*t8231;
  t8284 = -1.*t684*t2933*t8247;
  t8286 = t8282 + t8284;
  t8287 = -0.09*t8286;
  t5078 = -1.*t1465*t127*t684;
  t5137 = t437*t4911;
  t5208 = t5078 + t5137;
  t8556 = -0.135*t437;
  t8557 = -0.049*t684;
  t8560 = t8556 + t8557;
  t8567 = 0.049*t437;
  t8573 = t8567 + t1058;
  t8649 = t1233*t8093;
  t8655 = t1676*t8406;
  t8657 = t8649 + t8655;
  t8663 = -1.*t127*t684*t1120;
  t8665 = t437*t8657;
  t8668 = t8663 + t8665;
  t8707 = t127*t1431*t1233;
  t8709 = t1676*t127*t1473;
  t8716 = t8707 + t8709;
  t8755 = t684*t1435;
  t8763 = t437*t8716;
  t8775 = t8755 + t8763;
  t6204 = t2696*t5032;
  t6236 = -1.*t2933*t5751;
  t6265 = t6204 + t6236;
  t8811 = 0.049*t2696;
  t8813 = t8811 + t3526;
  t8818 = -0.09*t2696;
  t8820 = -0.049*t2933;
  t8831 = t8818 + t8820;
  t8896 = t437*t127*t1120;
  t8900 = t684*t8657;
  t8901 = t8896 + t8900;
  t8935 = -1.*t437*t1435;
  t8937 = t684*t8716;
  t8938 = t8935 + t8937;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-1.*t1097*t1120*t127 + t1385*t1570 + t2124*t2265 + t2467*t2650 + t3165*t3300 + t3543*t3581 - 0.049*(t2933*t3300 + t2696*t3581) - 0.09*(t2696*t3300 - 1.*t2933*t3581) - 0.135*(t2650*t437 + t1120*t127*t684);
  p_output1(10)=t1097*t127*t1465 + t1385*t4524 + t2124*t4717 + t2467*t4911 + t3165*t5032 - 0.135*t5208 + t3543*t5751 - 0.049*(t2933*t5032 + t2696*t5751) - 0.09*t6265;
  p_output1(11)=0;
  p_output1(12)=t127*t1385*t1431*t1465 - 1.*t1097*t1435*t1465 + t127*t1465*t1473*t2124 + t2467*t7137 - 0.135*(t1435*t1465*t684 + t437*t7137) + t3165*t7209 + t3543*t7273 - 0.049*(t2933*t7209 + t2696*t7273) - 0.09*(t2696*t7209 - 1.*t2933*t7273);
  p_output1(13)=t1120*t127*t1385*t1431 - 1.*t1097*t1120*t1435 + t1120*t127*t1473*t2124 + t2467*t7481 - 0.135*(t1120*t1435*t684 + t437*t7481) + t3165*t7532 + t3543*t7603 - 0.049*(t2933*t7532 + t2696*t7603) - 0.09*(t2696*t7532 - 1.*t2933*t7603);
  p_output1(14)=-1.*t1097*t127 - 1.*t1385*t1431*t1435 - 1.*t1435*t1473*t2124 + t2467*t7757 - 0.135*(t127*t684 + t437*t7757) + t3165*t7775 + t3543*t7852 - 0.049*(t2933*t7775 + t2696*t7852) - 0.09*(t2696*t7775 - 1.*t2933*t7852);
  p_output1(15)=t2124*t4524 + t1385*t7936 + t3165*t7961 + t2467*t8009 - 0.135*t437*t8009 + t3543*t684*t8009 - 0.049*(t2933*t7961 + t2696*t684*t8009) - 0.09*(t2696*t7961 - 1.*t2933*t684*t8009);
  p_output1(16)=t1385*t2265 + t2124*t8093 + t3165*t8118 + t2467*t8141 - 0.135*t437*t8141 + t3543*t684*t8141 - 0.049*(t2933*t8118 + t2696*t684*t8141) - 0.09*(t2696*t8118 - 1.*t2933*t684*t8141);
  p_output1(17)=-1.*t127*t1385*t1473 + t127*t1431*t2124 + t8232 + t8255 + t8258 + t8261 + t8280 + t8287;
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
  p_output1(39)=0.135*t1676*t4524 - 0.135*t1233*t4717 + t2467*t5032 - 0.135*t437*t5032 + t3543*t5032*t684 + t3165*t8304 - 0.09*(-1.*t2933*t5032*t684 + t2696*t8304) - 0.049*(t2696*t5032*t684 + t2933*t8304);
  p_output1(40)=0.135*t1676*t8093 - 0.135*t1233*t8406 + t3165*t8423 + t2467*t8434 - 0.135*t437*t8434 + t3543*t684*t8434 - 0.049*(t2933*t8423 + t2696*t684*t8434) - 0.09*(t2696*t8423 - 1.*t2933*t684*t8434);
  p_output1(41)=-0.135*t1233*t127*t1473 + 0.135*t127*t1431*t1676 + t8232 + t8255 + t8258 + t8261 + t8280 + t8287;
  p_output1(42)=-0.049*t2696*t5208 + 0.09*t2933*t5208 + t3543*t5208 - 0.135*(-1.*t127*t1465*t437 - 1.*t4911*t684) + t127*t1465*t8560 + t4911*t8573;
  p_output1(43)=t1120*t127*t8560 + t8573*t8657 - 0.135*(t3548 - 1.*t684*t8657) - 0.049*t2696*t8668 + 0.09*t2933*t8668 + t3543*t8668;
  p_output1(44)=-1.*t1435*t8560 + t8573*t8716 - 0.135*(t1435*t437 - 1.*t684*t8716) - 0.049*t2696*t8775 + 0.09*t2933*t8775 + t3543*t8775;
  p_output1(45)=-0.09*(-1.*t2933*t5032 - 1.*t2696*t5751) - 0.049*t6265 + t5032*t8813 + t5751*t8831;
  p_output1(46)=t8434*t8813 + t8831*t8901 - 0.09*(-1.*t2933*t8434 - 1.*t2696*t8901) - 0.049*(t2696*t8434 - 1.*t2933*t8901);
  p_output1(47)=t8247*t8813 + t8831*t8938 - 0.09*(-1.*t2933*t8247 - 1.*t2696*t8938) - 0.049*(t2696*t8247 - 1.*t2933*t8938);
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



