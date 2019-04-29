/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:22:27 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_to_shin_right.h"

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
  double t235;
  double t3506;
  double t4192;
  double t4045;
  double t4231;
  double t775;
  double t929;
  double t1121;
  double t1533;
  double t2472;
  double t4057;
  double t4243;
  double t4277;
  double t4416;
  double t5101;
  double t5103;
  double t5541;
  double t667;
  double t6579;
  double t6583;
  double t6589;
  double t6682;
  double t6721;
  double t6771;
  double t6812;
  double t6964;
  double t6982;
  double t6987;
  double t7036;
  double t7044;
  double t7060;
  double t7076;
  double t7098;
  double t7133;
  double t7158;
  double t7215;
  double t7236;
  double t7250;
  double t7362;
  double t7381;
  double t7383;
  double t7401;
  double t7403;
  double t7412;
  double t7436;
  double t7481;
  double t7491;
  double t7504;
  double t7565;
  double t7622;
  double t7624;
  double t1384;
  double t2301;
  double t2468;
  double t2867;
  double t3334;
  double t4452;
  double t4475;
  double t4570;
  double t4573;
  double t6048;
  double t6404;
  double t6418;
  double t7852;
  double t7862;
  double t7868;
  double t7878;
  double t7880;
  double t7889;
  double t6777;
  double t6852;
  double t6894;
  double t7941;
  double t7942;
  double t7949;
  double t7019;
  double t7022;
  double t7023;
  double t7156;
  double t7159;
  double t7187;
  double t7979;
  double t7984;
  double t7990;
  double t8086;
  double t8089;
  double t8096;
  double t7275;
  double t7290;
  double t7336;
  double t7416;
  double t7451;
  double t7467;
  double t8130;
  double t8133;
  double t8151;
  double t8169;
  double t8175;
  double t8183;
  double t7521;
  double t7543;
  double t7557;
  double t8205;
  double t8208;
  double t8211;
  double t8221;
  double t8226;
  double t8227;
  double t8322;
  double t8331;
  double t8342;
  double t8379;
  double t8383;
  double t8391;
  double t8429;
  double t8434;
  double t8435;
  double t8457;
  double t8469;
  double t8482;
  double t8488;
  double t8505;
  double t8506;
  double t8514;
  double t8529;
  double t8532;
  double t8560;
  double t8568;
  double t8571;
  t235 = Cos(var1[3]);
  t3506 = Cos(var1[5]);
  t4192 = Sin(var1[3]);
  t4045 = Sin(var1[4]);
  t4231 = Sin(var1[5]);
  t775 = Cos(var1[14]);
  t929 = -1.*t775;
  t1121 = 1. + t929;
  t1533 = Sin(var1[14]);
  t2472 = Sin(var1[13]);
  t4057 = t235*t3506*t4045;
  t4243 = t4192*t4231;
  t4277 = t4057 + t4243;
  t4416 = Cos(var1[13]);
  t5101 = -1.*t3506*t4192;
  t5103 = t235*t4045*t4231;
  t5541 = t5101 + t5103;
  t667 = Cos(var1[4]);
  t6579 = t2472*t4277;
  t6583 = t4416*t5541;
  t6589 = t6579 + t6583;
  t6682 = Cos(var1[15]);
  t6721 = -1.*t6682;
  t6771 = 1. + t6721;
  t6812 = Sin(var1[15]);
  t6964 = t4416*t4277;
  t6982 = -1.*t2472*t5541;
  t6987 = t6964 + t6982;
  t7036 = t775*t235*t667;
  t7044 = t1533*t6589;
  t7060 = t7036 + t7044;
  t7076 = Cos(var1[16]);
  t7098 = -1.*t7076;
  t7133 = 1. + t7098;
  t7158 = Sin(var1[16]);
  t7215 = t6812*t6987;
  t7236 = t6682*t7060;
  t7250 = t7215 + t7236;
  t7362 = t6682*t6987;
  t7381 = -1.*t6812*t7060;
  t7383 = t7362 + t7381;
  t7401 = Cos(var1[17]);
  t7403 = -1.*t7401;
  t7412 = 1. + t7403;
  t7436 = Sin(var1[17]);
  t7481 = -1.*t7158*t7250;
  t7491 = t7076*t7383;
  t7504 = t7481 + t7491;
  t7565 = t7076*t7250;
  t7622 = t7158*t7383;
  t7624 = t7565 + t7622;
  t1384 = -0.049*t1121;
  t2301 = -0.135*t1533;
  t2468 = 0. + t1384 + t2301;
  t2867 = 0.135*t2472;
  t3334 = 0. + t2867;
  t4452 = -1.*t4416;
  t4475 = 1. + t4452;
  t4570 = -0.135*t4475;
  t4573 = 0. + t4570;
  t6048 = -0.135*t1121;
  t6404 = 0.049*t1533;
  t6418 = 0. + t6048 + t6404;
  t7852 = t3506*t4192*t4045;
  t7862 = -1.*t235*t4231;
  t7868 = t7852 + t7862;
  t7878 = t235*t3506;
  t7880 = t4192*t4045*t4231;
  t7889 = t7878 + t7880;
  t6777 = -0.09*t6771;
  t6852 = 0.049*t6812;
  t6894 = 0. + t6777 + t6852;
  t7941 = t2472*t7868;
  t7942 = t4416*t7889;
  t7949 = t7941 + t7942;
  t7019 = -0.049*t6771;
  t7022 = -0.09*t6812;
  t7023 = 0. + t7019 + t7022;
  t7156 = -0.049*t7133;
  t7159 = -0.21*t7158;
  t7187 = 0. + t7156 + t7159;
  t7979 = t4416*t7868;
  t7984 = -1.*t2472*t7889;
  t7990 = t7979 + t7984;
  t8086 = t775*t667*t4192;
  t8089 = t1533*t7949;
  t8096 = t8086 + t8089;
  t7275 = -0.21*t7133;
  t7290 = 0.049*t7158;
  t7336 = 0. + t7275 + t7290;
  t7416 = -0.2707*t7412;
  t7451 = 0.0016*t7436;
  t7467 = 0. + t7416 + t7451;
  t8130 = t6812*t7990;
  t8133 = t6682*t8096;
  t8151 = t8130 + t8133;
  t8169 = t6682*t7990;
  t8175 = -1.*t6812*t8096;
  t8183 = t8169 + t8175;
  t7521 = -0.0016*t7412;
  t7543 = -0.2707*t7436;
  t7557 = 0. + t7521 + t7543;
  t8205 = -1.*t7158*t8151;
  t8208 = t7076*t8183;
  t8211 = t8205 + t8208;
  t8221 = t7076*t8151;
  t8226 = t7158*t8183;
  t8227 = t8221 + t8226;
  t8322 = t667*t3506*t2472;
  t8331 = t4416*t667*t4231;
  t8342 = t8322 + t8331;
  t8379 = t4416*t667*t3506;
  t8383 = -1.*t667*t2472*t4231;
  t8391 = t8379 + t8383;
  t8429 = -1.*t775*t4045;
  t8434 = t1533*t8342;
  t8435 = t8429 + t8434;
  t8457 = t6812*t8391;
  t8469 = t6682*t8435;
  t8482 = t8457 + t8469;
  t8488 = t6682*t8391;
  t8505 = -1.*t6812*t8435;
  t8506 = t8488 + t8505;
  t8514 = -1.*t7158*t8482;
  t8529 = t7076*t8506;
  t8532 = t8514 + t8529;
  t8560 = t7076*t8482;
  t8568 = t7158*t8506;
  t8571 = t8560 + t8568;

  p_output1(0)=0. + t3334*t4277 + t4573*t5541 + t6418*t6589 + t235*t2468*t667 + t6894*t6987 + t7023*t7060 + t7187*t7250 + t7336*t7383 + t7467*t7504 + t7557*t7624 - 0.0016*(t7436*t7504 + t7401*t7624) - 0.2707*(t7401*t7504 - 1.*t7436*t7624) - 0.1305*(-1.*t1533*t235*t667 + t6589*t775) + var1(0);
  p_output1(1)=0. + t2468*t4192*t667 + t3334*t7868 + t4573*t7889 + t6418*t7949 - 0.1305*(-1.*t1533*t4192*t667 + t775*t7949) + t6894*t7990 + t7023*t8096 + t7187*t8151 + t7336*t8183 + t7467*t8211 + t7557*t8227 - 0.0016*(t7436*t8211 + t7401*t8227) - 0.2707*(t7401*t8211 - 1.*t7436*t8227) + var1(1);
  p_output1(2)=0. - 1.*t2468*t4045 + t3334*t3506*t667 + t4231*t4573*t667 + t6418*t8342 - 0.1305*(t1533*t4045 + t775*t8342) + t6894*t8391 + t7023*t8435 + t7187*t8482 + t7336*t8506 + t7467*t8532 + t7557*t8571 - 0.0016*(t7436*t8532 + t7401*t8571) - 0.2707*(t7401*t8532 - 1.*t7436*t8571) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_knee_to_shin_right(const Eigen::Matrix<double,20,1> &var1)
//void p_knee_to_shin_right(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



