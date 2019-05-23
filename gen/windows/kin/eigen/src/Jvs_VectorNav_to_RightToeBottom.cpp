/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:32:45 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jvs_VectorNav_to_RightToeBottom.h"

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
  double t39;
  double t407;
  double t548;
  double t596;
  double t1113;
  double t123;
  double t132;
  double t168;
  double t666;
  double t1276;
  double t1296;
  double t1343;
  double t1377;
  double t1400;
  double t1421;
  double t830;
  double t1143;
  double t1147;
  double t1206;
  double t1589;
  double t3160;
  double t3329;
  double t3418;
  double t3441;
  double t1452;
  double t3426;
  double t3491;
  double t3494;
  double t3536;
  double t3552;
  double t3555;
  double t1676;
  double t1680;
  double t1902;
  double t2497;
  double t2528;
  double t1979;
  double t2006;
  double t2130;
  double t2332;
  double t2740;
  double t2783;
  double t2893;
  double t3044;
  double t3051;
  double t3624;
  double t3627;
  double t4290;
  double t4333;
  double t4340;
  double t4469;
  double t4488;
  double t4541;
  double t5114;
  double t5281;
  double t5291;
  double t5403;
  double t3500;
  double t3592;
  double t4823;
  double t4863;
  double t4877;
  double t5362;
  double t5414;
  double t5467;
  double t4928;
  double t5034;
  double t5041;
  double t5494;
  double t5496;
  double t5515;
  double t3834;
  double t3909;
  double t3925;
  double t4554;
  double t4654;
  double t4714;
  double t5605;
  double t5672;
  double t6385;
  double t6387;
  double t6389;
  double t6368;
  double t6369;
  double t6377;
  double t6471;
  double t6476;
  double t6499;
  double t6556;
  double t5481;
  double t5522;
  double t6237;
  double t6246;
  double t6266;
  double t6549;
  double t6557;
  double t6572;
  double t6130;
  double t6168;
  double t6172;
  double t6600;
  double t6621;
  double t6692;
  double t5880;
  double t5894;
  double t5912;
  double t5789;
  double t5810;
  double t5841;
  double t5969;
  double t5994;
  double t6051;
  double t6068;
  double t6294;
  double t6308;
  double t6318;
  double t6331;
  double t6785;
  double t6788;
  double t7062;
  double t7064;
  double t7069;
  double t7074;
  double t7076;
  double t7083;
  double t7217;
  double t7226;
  double t7232;
  double t7238;
  double t6573;
  double t6693;
  double t7172;
  double t7174;
  double t7176;
  double t7235;
  double t7250;
  double t7254;
  double t7195;
  double t7197;
  double t7199;
  double t7257;
  double t7263;
  double t7271;
  double t6920;
  double t6927;
  double t6937;
  double t6828;
  double t6829;
  double t6843;
  double t6960;
  double t6975;
  double t7000;
  double t7003;
  double t7108;
  double t7116;
  double t7136;
  double t7138;
  t39 = Cos(var1[7]);
  t407 = Sin(var1[7]);
  t548 = -1.*t407;
  t596 = 0. + t548;
  t1113 = Cos(var1[8]);
  t123 = -1.*t39;
  t132 = 1. + t123;
  t168 = -0.135*t132;
  t666 = -0.135*t407;
  t1276 = -1.*t1113;
  t1296 = 1. + t1276;
  t1343 = -0.135*t1296;
  t1377 = Sin(var1[8]);
  t1400 = 0.049*t1377;
  t1421 = 0. + t1343 + t1400;
  t830 = 0.049*t39;
  t1143 = -1.*t39*t1113;
  t1147 = 0. + t1143;
  t1206 = -0.07996*t1147;
  t1589 = -1.*t407*t1421;
  t3160 = Cos(var1[9]);
  t3329 = -1.*t3160;
  t3418 = 1. + t3329;
  t3441 = Sin(var1[9]);
  t1452 = t39*t1421;
  t3426 = -0.049*t3418;
  t3491 = -0.09*t3441;
  t3494 = 0. + t3426 + t3491;
  t3536 = -0.09*t3418;
  t3552 = 0.049*t3441;
  t3555 = 0. + t3536 + t3552;
  t1676 = -1.*t1113*t407;
  t1680 = 0. + t1676;
  t1902 = 0.03155*t1680;
  t2497 = 0. + t1377;
  t2528 = 0.07996*t2497;
  t1979 = 0.049*t1296;
  t2006 = 0.135*t1377;
  t2130 = 0.135*t407;
  t2332 = t407*t1421;
  t2740 = -0.03155*t1147;
  t2783 = -0.049*t1296;
  t2893 = -0.135*t1377;
  t3044 = 0.135*t132;
  t3051 = -1.*t39*t1421;
  t3624 = t39*t1377*t3494;
  t3627 = -1.*t407*t3555;
  t4290 = t39*t3160*t1377;
  t4333 = -1.*t407*t3441;
  t4340 = t4290 + t4333;
  t4469 = -1.*t3160*t407;
  t4488 = -1.*t39*t1377*t3441;
  t4541 = t4469 + t4488;
  t5114 = Cos(var1[10]);
  t5281 = -1.*t5114;
  t5291 = 1. + t5281;
  t5403 = Sin(var1[10]);
  t3500 = -1.*t407*t1377*t3494;
  t3592 = -1.*t39*t3555;
  t4823 = t3160*t407*t1377;
  t4863 = t39*t3441;
  t4877 = t4823 + t4863;
  t5362 = -0.049*t5291;
  t5414 = -0.21*t5403;
  t5467 = 0. + t5362 + t5414;
  t4928 = t39*t3160;
  t5034 = -1.*t407*t1377*t3441;
  t5041 = t4928 + t5034;
  t5494 = -0.21*t5291;
  t5496 = 0.049*t5403;
  t5515 = 0. + t5494 + t5496;
  t3834 = -1.*t1113*t3494;
  t3909 = t407*t1377*t3494;
  t3925 = t39*t3555;
  t4554 = t1113*t3494;
  t4654 = -1.*t39*t1377*t3494;
  t4714 = t407*t3555;
  t5605 = -1.*t4877*t5467;
  t5672 = -1.*t5041*t5515;
  t6385 = t5114*t4877;
  t6387 = t5041*t5403;
  t6389 = t6385 + t6387;
  t6368 = t5114*t5041;
  t6369 = -1.*t4877*t5403;
  t6377 = t6368 + t6369;
  t6471 = Cos(var1[11]);
  t6476 = -1.*t6471;
  t6499 = 1. + t6476;
  t6556 = Sin(var1[11]);
  t5481 = t4340*t5467;
  t5522 = t4541*t5515;
  t6237 = t5114*t4340;
  t6246 = t4541*t5403;
  t6266 = t6237 + t6246;
  t6549 = -0.0016*t6499;
  t6557 = -0.2707*t6556;
  t6572 = 0. + t6549 + t6557;
  t6130 = t5114*t4541;
  t6168 = -1.*t4340*t5403;
  t6172 = t6130 + t6168;
  t6600 = -0.2707*t6499;
  t6621 = 0.0016*t6556;
  t6692 = 0. + t6600 + t6621;
  t5880 = t1113*t3160*t5114;
  t5894 = -1.*t1113*t3441*t5403;
  t5912 = t5880 + t5894;
  t5789 = -1.*t1113*t5114*t3441;
  t5810 = -1.*t1113*t3160*t5403;
  t5841 = t5789 + t5810;
  t5969 = -1.*t1113*t3160*t5467;
  t5994 = t1113*t3441*t5515;
  t6051 = t4877*t5467;
  t6068 = t5041*t5515;
  t6294 = t1113*t3160*t5467;
  t6308 = -1.*t1113*t3441*t5515;
  t6318 = -1.*t4340*t5467;
  t6331 = -1.*t4541*t5515;
  t6785 = t6266*t6572;
  t6788 = t6172*t6692;
  t7062 = t6471*t6266;
  t7064 = t6172*t6556;
  t7069 = t7062 + t7064;
  t7074 = t6471*t6172;
  t7076 = -1.*t6266*t6556;
  t7083 = t7074 + t7076;
  t7217 = Cos(var1[12]);
  t7226 = -1.*t7217;
  t7232 = 1. + t7226;
  t7238 = Sin(var1[12]);
  t6573 = -1.*t6389*t6572;
  t6693 = -1.*t6377*t6692;
  t7172 = t6471*t6389;
  t7174 = t6377*t6556;
  t7176 = t7172 + t7174;
  t7235 = 0.0184*t7232;
  t7250 = -0.7055*t7238;
  t7254 = 0. + t7235 + t7250;
  t7195 = t6471*t6377;
  t7197 = -1.*t6389*t6556;
  t7199 = t7195 + t7197;
  t7257 = -0.7055*t7232;
  t7263 = -0.0184*t7238;
  t7271 = 0. + t7257 + t7263;
  t6920 = t6471*t5841;
  t6927 = -1.*t5912*t6556;
  t6937 = t6920 + t6927;
  t6828 = t6471*t5912;
  t6829 = t5841*t6556;
  t6843 = t6828 + t6829;
  t6960 = -1.*t5912*t6572;
  t6975 = -1.*t5841*t6692;
  t7000 = t6389*t6572;
  t7003 = t6377*t6692;
  t7108 = t5912*t6572;
  t7116 = t5841*t6692;
  t7136 = -1.*t6266*t6572;
  t7138 = -1.*t6172*t6692;

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
  p_output1(21)=0.;
  p_output1(22)=0.07996;
  p_output1(23)=0.135;
  p_output1(24)=-0.135 + (0. + t168)*t39 - 0.07996*t596 - 1.*t407*(0. + t666);
  p_output1(25)=0. + 0.03155*(0. + t39) + t830;
  p_output1(26)=0. + 0.049*t407 - 0.03155*t596;
  p_output1(27)=0. - 0.09*t1113 + t1206 - 1.*t1113*(0. + t1452 + t168)*t407 - 1.*t1113*t39*(0. + t1589 + t666);
  p_output1(28)=0. + t1902 + t1377*(0. + t2130 + t2332) + t2528 - 0.09*t1377*t39 - 0.049*t407 - 1.*t1113*(0. + t1979 + t2006)*t407;
  p_output1(29)=0. + t2740 + t1377*(0. + t3044 + t3051) - 1.*t1113*(0. + t2783 + t2893)*t39 - 0.09*t1377*t407 + t830;
  p_output1(30)=0. + t1206 - 0.21*t1113*t3160 - 0.049*t1113*t3441 - 1.*t1113*(0. + t1452 + t168 + t3624 + t3627)*t407 - 1.*t1113*t39*(0. + t1589 + t3500 + t3592 + t666);
  p_output1(31)=0. + t1902 + t2528 + t1377*(0. + t2130 + t2332 + t3909 + t3925) - 1.*t1113*(0. + t1979 + t2006 + t3834)*t407 - 0.21*t4340 + 0.049*t4541;
  p_output1(32)=0. + t2740 - 1.*t1113*t39*(0. + t2783 + t2893 + t4554) + t1377*(0. + t3044 + t3051 + t4654 + t4714) - 0.21*t4877 + 0.049*t5041;
  p_output1(33)=0. + t1206 - 1.*t1113*t407*(0. + t1452 + t168 + t3624 + t3627 + t5481 + t5522) + 0.0016*t5841 - 0.2707*t5912 - 1.*t1113*t39*(0. + t1589 + t3500 + t3592 + t5605 + t5672 + t666);
  p_output1(34)=0. + t1902 + t2528 - 1.*t1113*t407*(0. + t1979 + t2006 + t3834 + t5969 + t5994) + t1377*(0. + t2130 + t2332 + t3909 + t3925 + t6051 + t6068) + 0.0016*t6172 - 0.2707*t6266;
  p_output1(35)=0. + t2740 - 1.*t1113*t39*(0. + t2783 + t2893 + t4554 + t6294 + t6308) + t1377*(0. + t3044 + t3051 + t4654 + t4714 + t6318 + t6331) + 0.0016*t6377 - 0.2707*t6389;
  p_output1(36)=0. + t1206 - 1.*t1113*t39*(0. + t1589 + t3500 + t3592 + t5605 + t5672 + t6573 + t666 + t6693) - 1.*t1113*t407*(0. + t1452 + t168 + t3624 + t3627 + t5481 + t5522 + t6785 + t6788) - 0.7055*t6843 - 0.0184*t6937;
  p_output1(37)=0. + t1902 + t2528 - 1.*t1113*t407*(0. + t1979 + t2006 + t3834 + t5969 + t5994 + t6960 + t6975) + t1377*(0. + t2130 + t2332 + t3909 + t3925 + t6051 + t6068 + t7000 + t7003) - 0.7055*t7069 - 0.0184*t7083;
  p_output1(38)=0. + t2740 - 1.*t1113*t39*(0. + t2783 + t2893 + t4554 + t6294 + t6308 + t7108 + t7116) + t1377*(0. + t3044 + t3051 + t4654 + t4714 + t6318 + t6331 + t7136 + t7138) - 0.7055*t7176 - 0.0184*t7199;
  p_output1(39)=0. + t1206 + 0.0216*(t6937*t7217 - 1.*t6843*t7238) - 1.1135*(t6843*t7217 + t6937*t7238) - 1.*t1113*t407*(0. + t1452 + t168 + t3624 + t3627 + t5481 + t5522 + t6785 + t6788 + t7069*t7254 + t7083*t7271) - 1.*t1113*t39*(0. + t1589 + t3500 + t3592 + t5605 + t5672 + t6573 + t666 + t6693 - 1.*t7176*t7254 - 1.*t7199*t7271);
  p_output1(40)=0. + t1902 + t2528 + 0.0216*(t7083*t7217 - 1.*t7069*t7238) - 1.1135*(t7069*t7217 + t7083*t7238) - 1.*t1113*t407*(0. + t1979 + t2006 + t3834 + t5969 + t5994 + t6960 + t6975 - 1.*t6843*t7254 - 1.*t6937*t7271) + t1377*(0. + t2130 + t2332 + t3909 + t3925 + t6051 + t6068 + t7000 + t7003 + t7176*t7254 + t7199*t7271);
  p_output1(41)=0. + t2740 + 0.0216*(t7199*t7217 - 1.*t7176*t7238) - 1.1135*(t7176*t7217 + t7199*t7238) - 1.*t1113*t39*(0. + t2783 + t2893 + t4554 + t6294 + t6308 + t7108 + t7116 + t6843*t7254 + t6937*t7271) + t1377*(0. + t3044 + t3051 + t4654 + t4714 + t6318 + t6331 + t7136 + t7138 - 1.*t7069*t7254 - 1.*t7083*t7271);
}


       
Eigen::Matrix<double,3,14> Jvs_VectorNav_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void Jvs_VectorNav_to_RightToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



