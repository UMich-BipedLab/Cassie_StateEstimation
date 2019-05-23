/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:09:33 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_toe_joint_left.h"

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
  double t1628;
  double t1066;
  double t1705;
  double t1187;
  double t1757;
  double t43;
  double t1193;
  double t2074;
  double t2207;
  double t2643;
  double t3296;
  double t3301;
  double t3429;
  double t3785;
  double t4189;
  double t4291;
  double t4408;
  double t3609;
  double t3649;
  double t3664;
  double t4653;
  double t5337;
  double t5350;
  double t5408;
  double t5449;
  double t5290;
  double t5323;
  double t5325;
  double t5572;
  double t5574;
  double t5595;
  double t5717;
  double t5737;
  double t5782;
  double t5801;
  double t5814;
  double t5835;
  double t5838;
  double t5867;
  double t5884;
  double t5892;
  double t5932;
  double t5940;
  double t5950;
  double t5965;
  double t6008;
  double t6028;
  double t6068;
  double t6195;
  double t6217;
  double t6227;
  double t6271;
  double t6283;
  double t6290;
  double t6309;
  double t6335;
  double t6346;
  double t6356;
  double t6416;
  double t6419;
  double t6429;
  double t6449;
  double t6467;
  double t6483;
  double t6556;
  double t6617;
  double t6631;
  double t6634;
  double t6689;
  double t6754;
  double t6761;
  double t241;
  double t658;
  double t980;
  double t1034;
  double t3432;
  double t3514;
  double t6871;
  double t6891;
  double t6919;
  double t6923;
  double t6934;
  double t6947;
  double t4295;
  double t4413;
  double t4487;
  double t4990;
  double t5017;
  double t5089;
  double t6971;
  double t6974;
  double t6986;
  double t5416;
  double t5533;
  double t5546;
  double t5599;
  double t5602;
  double t5612;
  double t5799;
  double t5804;
  double t5806;
  double t7078;
  double t7088;
  double t7094;
  double t7112;
  double t7123;
  double t7131;
  double t5842;
  double t5852;
  double t5866;
  double t5960;
  double t5984;
  double t5985;
  double t7146;
  double t7170;
  double t7192;
  double t7226;
  double t7233;
  double t7238;
  double t6098;
  double t6118;
  double t6119;
  double t6304;
  double t6317;
  double t6330;
  double t7245;
  double t7247;
  double t7261;
  double t7297;
  double t7303;
  double t7319;
  double t6374;
  double t6386;
  double t6401;
  double t6544;
  double t6573;
  double t6576;
  double t7355;
  double t7426;
  double t7432;
  double t7454;
  double t7455;
  double t7475;
  double t6663;
  double t6667;
  double t6668;
  double t7499;
  double t7537;
  double t7540;
  double t7569;
  double t7578;
  double t7589;
  double t7736;
  double t7740;
  double t7757;
  double t7842;
  double t7858;
  double t7871;
  double t7913;
  double t7917;
  double t7922;
  double t7933;
  double t7936;
  double t7939;
  double t7957;
  double t7976;
  double t7990;
  double t8011;
  double t8018;
  double t8019;
  double t8030;
  double t8033;
  double t8034;
  double t8040;
  double t8041;
  double t8042;
  double t8058;
  double t8060;
  double t8065;
  double t8068;
  double t8076;
  double t8078;
  double t8084;
  double t8089;
  double t8091;
  t1628 = Cos(var1[3]);
  t1066 = Cos(var1[5]);
  t1705 = Sin(var1[4]);
  t1187 = Sin(var1[3]);
  t1757 = Sin(var1[5]);
  t43 = Cos(var1[6]);
  t1193 = -1.*t1066*t1187;
  t2074 = t1628*t1705*t1757;
  t2207 = t1193 + t2074;
  t2643 = t1628*t1066*t1705;
  t3296 = t1187*t1757;
  t3301 = t2643 + t3296;
  t3429 = Sin(var1[6]);
  t3785 = Cos(var1[7]);
  t4189 = -1.*t3785;
  t4291 = 1. + t4189;
  t4408 = Sin(var1[7]);
  t3609 = t43*t2207;
  t3649 = t3301*t3429;
  t3664 = t3609 + t3649;
  t4653 = Cos(var1[4]);
  t5337 = Cos(var1[8]);
  t5350 = -1.*t5337;
  t5408 = 1. + t5350;
  t5449 = Sin(var1[8]);
  t5290 = t1628*t4653*t3785;
  t5323 = t3664*t4408;
  t5325 = t5290 + t5323;
  t5572 = t43*t3301;
  t5574 = -1.*t2207*t3429;
  t5595 = t5572 + t5574;
  t5717 = Cos(var1[9]);
  t5737 = -1.*t5717;
  t5782 = 1. + t5737;
  t5801 = Sin(var1[9]);
  t5814 = t5337*t5325;
  t5835 = t5595*t5449;
  t5838 = t5814 + t5835;
  t5867 = t5337*t5595;
  t5884 = -1.*t5325*t5449;
  t5892 = t5867 + t5884;
  t5932 = Cos(var1[10]);
  t5940 = -1.*t5932;
  t5950 = 1. + t5940;
  t5965 = Sin(var1[10]);
  t6008 = -1.*t5801*t5838;
  t6028 = t5717*t5892;
  t6068 = t6008 + t6028;
  t6195 = t5717*t5838;
  t6217 = t5801*t5892;
  t6227 = t6195 + t6217;
  t6271 = Cos(var1[11]);
  t6283 = -1.*t6271;
  t6290 = 1. + t6283;
  t6309 = Sin(var1[11]);
  t6335 = t5965*t6068;
  t6346 = t5932*t6227;
  t6356 = t6335 + t6346;
  t6416 = t5932*t6068;
  t6419 = -1.*t5965*t6227;
  t6429 = t6416 + t6419;
  t6449 = Cos(var1[12]);
  t6467 = -1.*t6449;
  t6483 = 1. + t6467;
  t6556 = Sin(var1[12]);
  t6617 = -1.*t6309*t6356;
  t6631 = t6271*t6429;
  t6634 = t6617 + t6631;
  t6689 = t6271*t6356;
  t6754 = t6309*t6429;
  t6761 = t6689 + t6754;
  t241 = -1.*t43;
  t658 = 1. + t241;
  t980 = 0.135*t658;
  t1034 = 0. + t980;
  t3432 = -0.135*t3429;
  t3514 = 0. + t3432;
  t6871 = t1628*t1066;
  t6891 = t1187*t1705*t1757;
  t6919 = t6871 + t6891;
  t6923 = t1066*t1187*t1705;
  t6934 = -1.*t1628*t1757;
  t6947 = t6923 + t6934;
  t4295 = 0.135*t4291;
  t4413 = 0.049*t4408;
  t4487 = 0. + t4295 + t4413;
  t4990 = -0.049*t4291;
  t5017 = 0.135*t4408;
  t5089 = 0. + t4990 + t5017;
  t6971 = t43*t6919;
  t6974 = t6947*t3429;
  t6986 = t6971 + t6974;
  t5416 = -0.049*t5408;
  t5533 = -0.09*t5449;
  t5546 = 0. + t5416 + t5533;
  t5599 = -0.09*t5408;
  t5602 = 0.049*t5449;
  t5612 = 0. + t5599 + t5602;
  t5799 = -0.049*t5782;
  t5804 = -0.21*t5801;
  t5806 = 0. + t5799 + t5804;
  t7078 = t4653*t3785*t1187;
  t7088 = t6986*t4408;
  t7094 = t7078 + t7088;
  t7112 = t43*t6947;
  t7123 = -1.*t6919*t3429;
  t7131 = t7112 + t7123;
  t5842 = -0.21*t5782;
  t5852 = 0.049*t5801;
  t5866 = 0. + t5842 + t5852;
  t5960 = -0.2707*t5950;
  t5984 = 0.0016*t5965;
  t5985 = 0. + t5960 + t5984;
  t7146 = t5337*t7094;
  t7170 = t7131*t5449;
  t7192 = t7146 + t7170;
  t7226 = t5337*t7131;
  t7233 = -1.*t7094*t5449;
  t7238 = t7226 + t7233;
  t6098 = -0.0016*t5950;
  t6118 = -0.2707*t5965;
  t6119 = 0. + t6098 + t6118;
  t6304 = 0.0184*t6290;
  t6317 = -0.7055*t6309;
  t6330 = 0. + t6304 + t6317;
  t7245 = -1.*t5801*t7192;
  t7247 = t5717*t7238;
  t7261 = t7245 + t7247;
  t7297 = t5717*t7192;
  t7303 = t5801*t7238;
  t7319 = t7297 + t7303;
  t6374 = -0.7055*t6290;
  t6386 = -0.0184*t6309;
  t6401 = 0. + t6374 + t6386;
  t6544 = -1.1135*t6483;
  t6573 = 0.0216*t6556;
  t6576 = 0. + t6544 + t6573;
  t7355 = t5965*t7261;
  t7426 = t5932*t7319;
  t7432 = t7355 + t7426;
  t7454 = t5932*t7261;
  t7455 = -1.*t5965*t7319;
  t7475 = t7454 + t7455;
  t6663 = -0.0216*t6483;
  t6667 = -1.1135*t6556;
  t6668 = 0. + t6663 + t6667;
  t7499 = -1.*t6309*t7432;
  t7537 = t6271*t7475;
  t7540 = t7499 + t7537;
  t7569 = t6271*t7432;
  t7578 = t6309*t7475;
  t7589 = t7569 + t7578;
  t7736 = t4653*t43*t1757;
  t7740 = t4653*t1066*t3429;
  t7757 = t7736 + t7740;
  t7842 = -1.*t3785*t1705;
  t7858 = t7757*t4408;
  t7871 = t7842 + t7858;
  t7913 = t4653*t1066*t43;
  t7917 = -1.*t4653*t1757*t3429;
  t7922 = t7913 + t7917;
  t7933 = t5337*t7871;
  t7936 = t7922*t5449;
  t7939 = t7933 + t7936;
  t7957 = t5337*t7922;
  t7976 = -1.*t7871*t5449;
  t7990 = t7957 + t7976;
  t8011 = -1.*t5801*t7939;
  t8018 = t5717*t7990;
  t8019 = t8011 + t8018;
  t8030 = t5717*t7939;
  t8033 = t5801*t7990;
  t8034 = t8030 + t8033;
  t8040 = t5965*t8019;
  t8041 = t5932*t8034;
  t8042 = t8040 + t8041;
  t8058 = t5932*t8019;
  t8060 = -1.*t5965*t8034;
  t8065 = t8058 + t8060;
  t8068 = -1.*t6309*t8042;
  t8076 = t6271*t8065;
  t8078 = t8068 + t8076;
  t8084 = t6271*t8042;
  t8089 = t6309*t8065;
  t8091 = t8084 + t8089;

  p_output1(0)=0. + t1034*t2207 + t3301*t3514 + t3664*t4487 + 0.1305*(t3664*t3785 - 1.*t1628*t4408*t4653) + t1628*t4653*t5089 + t5325*t5546 + t5595*t5612 + t5806*t5838 + t5866*t5892 + t5985*t6068 + t6119*t6227 + t6330*t6356 + t6401*t6429 + t6576*t6634 + t6668*t6761 - 0.0216*(t6556*t6634 + t6449*t6761) - 1.1135*(t6449*t6634 - 1.*t6556*t6761) + var1(0);
  p_output1(1)=0. + t1187*t4653*t5089 + t1034*t6919 + t3514*t6947 + t4487*t6986 + 0.1305*(-1.*t1187*t4408*t4653 + t3785*t6986) + t5546*t7094 + t5612*t7131 + t5806*t7192 + t5866*t7238 + t5985*t7261 + t6119*t7319 + t6330*t7432 + t6401*t7475 + t6576*t7540 + t6668*t7589 - 0.0216*(t6556*t7540 + t6449*t7589) - 1.1135*(t6449*t7540 - 1.*t6556*t7589) + var1(1);
  p_output1(2)=0. + t1034*t1757*t4653 + t1066*t3514*t4653 - 1.*t1705*t5089 + t4487*t7757 + 0.1305*(t1705*t4408 + t3785*t7757) + t5546*t7871 + t5612*t7922 + t5806*t7939 + t5866*t7990 + t5985*t8019 + t6119*t8034 + t6330*t8042 + t6401*t8065 + t6576*t8078 + t6668*t8091 - 0.0216*(t6556*t8078 + t6449*t8091) - 1.1135*(t6449*t8078 - 1.*t6556*t8091) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_toe_joint_left(const Eigen::Matrix<double,20,1> &var1)
//void p_toe_joint_left(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



