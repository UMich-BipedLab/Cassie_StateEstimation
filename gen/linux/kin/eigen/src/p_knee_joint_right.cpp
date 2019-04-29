/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:29 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_joint_right.h"

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
  double t87;
  double t3380;
  double t3572;
  double t3400;
  double t3751;
  double t514;
  double t592;
  double t597;
  double t869;
  double t2271;
  double t3562;
  double t3857;
  double t3879;
  double t4536;
  double t5509;
  double t5527;
  double t5916;
  double t466;
  double t6595;
  double t6596;
  double t6608;
  double t6617;
  double t6623;
  double t6736;
  double t6884;
  double t7137;
  double t7193;
  double t7218;
  double t7299;
  double t7307;
  double t7308;
  double t7342;
  double t7370;
  double t7413;
  double t7435;
  double t7481;
  double t7486;
  double t7495;
  double t7577;
  double t7588;
  double t7589;
  double t702;
  double t1148;
  double t1426;
  double t2740;
  double t3025;
  double t4694;
  double t5231;
  double t5255;
  double t5499;
  double t5997;
  double t6481;
  double t6514;
  double t7706;
  double t7735;
  double t7739;
  double t7761;
  double t7765;
  double t7771;
  double t6754;
  double t6914;
  double t6949;
  double t7804;
  double t7810;
  double t7818;
  double t7279;
  double t7288;
  double t7294;
  double t7434;
  double t7454;
  double t7480;
  double t7850;
  double t7854;
  double t7861;
  double t7895;
  double t7897;
  double t7936;
  double t7565;
  double t7573;
  double t7576;
  double t7950;
  double t7959;
  double t7960;
  double t8002;
  double t8011;
  double t8023;
  double t8126;
  double t8138;
  double t8146;
  double t8160;
  double t8166;
  double t8178;
  double t8200;
  double t8202;
  double t8231;
  double t8244;
  double t8264;
  double t8270;
  double t8282;
  double t8285;
  double t8286;
  t87 = Cos(var1[3]);
  t3380 = Cos(var1[5]);
  t3572 = Sin(var1[3]);
  t3400 = Sin(var1[4]);
  t3751 = Sin(var1[5]);
  t514 = Cos(var1[14]);
  t592 = -1.*t514;
  t597 = 1. + t592;
  t869 = Sin(var1[14]);
  t2271 = Sin(var1[13]);
  t3562 = t87*t3380*t3400;
  t3857 = t3572*t3751;
  t3879 = t3562 + t3857;
  t4536 = Cos(var1[13]);
  t5509 = -1.*t3380*t3572;
  t5527 = t87*t3400*t3751;
  t5916 = t5509 + t5527;
  t466 = Cos(var1[4]);
  t6595 = t2271*t3879;
  t6596 = t4536*t5916;
  t6608 = t6595 + t6596;
  t6617 = Cos(var1[15]);
  t6623 = -1.*t6617;
  t6736 = 1. + t6623;
  t6884 = Sin(var1[15]);
  t7137 = t4536*t3879;
  t7193 = -1.*t2271*t5916;
  t7218 = t7137 + t7193;
  t7299 = t514*t87*t466;
  t7307 = t869*t6608;
  t7308 = t7299 + t7307;
  t7342 = Cos(var1[16]);
  t7370 = -1.*t7342;
  t7413 = 1. + t7370;
  t7435 = Sin(var1[16]);
  t7481 = t6884*t7218;
  t7486 = t6617*t7308;
  t7495 = t7481 + t7486;
  t7577 = t6617*t7218;
  t7588 = -1.*t6884*t7308;
  t7589 = t7577 + t7588;
  t702 = -0.049*t597;
  t1148 = -0.135*t869;
  t1426 = 0. + t702 + t1148;
  t2740 = 0.135*t2271;
  t3025 = 0. + t2740;
  t4694 = -1.*t4536;
  t5231 = 1. + t4694;
  t5255 = -0.135*t5231;
  t5499 = 0. + t5255;
  t5997 = -0.135*t597;
  t6481 = 0.049*t869;
  t6514 = 0. + t5997 + t6481;
  t7706 = t3380*t3572*t3400;
  t7735 = -1.*t87*t3751;
  t7739 = t7706 + t7735;
  t7761 = t87*t3380;
  t7765 = t3572*t3400*t3751;
  t7771 = t7761 + t7765;
  t6754 = -0.09*t6736;
  t6914 = 0.049*t6884;
  t6949 = 0. + t6754 + t6914;
  t7804 = t2271*t7739;
  t7810 = t4536*t7771;
  t7818 = t7804 + t7810;
  t7279 = -0.049*t6736;
  t7288 = -0.09*t6884;
  t7294 = 0. + t7279 + t7288;
  t7434 = -0.049*t7413;
  t7454 = -0.21*t7435;
  t7480 = 0. + t7434 + t7454;
  t7850 = t4536*t7739;
  t7854 = -1.*t2271*t7771;
  t7861 = t7850 + t7854;
  t7895 = t514*t466*t3572;
  t7897 = t869*t7818;
  t7936 = t7895 + t7897;
  t7565 = -0.21*t7413;
  t7573 = 0.049*t7435;
  t7576 = 0. + t7565 + t7573;
  t7950 = t6884*t7861;
  t7959 = t6617*t7936;
  t7960 = t7950 + t7959;
  t8002 = t6617*t7861;
  t8011 = -1.*t6884*t7936;
  t8023 = t8002 + t8011;
  t8126 = t466*t3380*t2271;
  t8138 = t4536*t466*t3751;
  t8146 = t8126 + t8138;
  t8160 = t4536*t466*t3380;
  t8166 = -1.*t466*t2271*t3751;
  t8178 = t8160 + t8166;
  t8200 = -1.*t514*t3400;
  t8202 = t869*t8146;
  t8231 = t8200 + t8202;
  t8244 = t6884*t8178;
  t8264 = t6617*t8231;
  t8270 = t8244 + t8264;
  t8282 = t6617*t8178;
  t8285 = -1.*t6884*t8231;
  t8286 = t8282 + t8285;

  p_output1(0)=0. + t3025*t3879 + t5499*t5916 + t6514*t6608 + t6949*t7218 + t7294*t7308 + t7480*t7495 + t7576*t7589 - 0.21*(-1.*t7435*t7495 + t7342*t7589) - 0.049*(t7342*t7495 + t7435*t7589) + t1426*t466*t87 - 0.1305*(t514*t6608 - 1.*t466*t869*t87) + var1(0);
  p_output1(1)=0. + t1426*t3572*t466 + t3025*t7739 + t5499*t7771 + t6514*t7818 + t6949*t7861 + t7294*t7936 + t7480*t7960 + t7576*t8023 - 0.21*(-1.*t7435*t7960 + t7342*t8023) - 0.049*(t7342*t7960 + t7435*t8023) - 0.1305*(t514*t7818 - 1.*t3572*t466*t869) + var1(1);
  p_output1(2)=0. - 1.*t1426*t3400 + t3025*t3380*t466 + t3751*t466*t5499 + t6514*t8146 + t6949*t8178 + t7294*t8231 + t7480*t8270 + t7576*t8286 - 0.21*(-1.*t7435*t8270 + t7342*t8286) - 0.049*(t7342*t8270 + t7435*t8286) - 0.1305*(t514*t8146 + t3400*t869) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_knee_joint_right(const Eigen::Matrix<double,20,1> &var1)
//void p_knee_joint_right(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



