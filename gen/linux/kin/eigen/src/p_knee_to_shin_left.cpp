/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:16 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_to_shin_left.h"

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
  double t1591;
  double t1053;
  double t1615;
  double t1245;
  double t1701;
  double t303;
  double t1479;
  double t2531;
  double t2570;
  double t3467;
  double t3471;
  double t3476;
  double t3519;
  double t4177;
  double t4226;
  double t4622;
  double t5464;
  double t4100;
  double t4113;
  double t4117;
  double t5921;
  double t6290;
  double t6298;
  double t6303;
  double t6333;
  double t6222;
  double t6246;
  double t6274;
  double t6410;
  double t6428;
  double t6478;
  double t6526;
  double t6538;
  double t6543;
  double t6574;
  double t6594;
  double t6611;
  double t6616;
  double t6656;
  double t6667;
  double t6697;
  double t6720;
  double t6747;
  double t6761;
  double t6801;
  double t6820;
  double t6826;
  double t6857;
  double t6893;
  double t6898;
  double t6900;
  double t333;
  double t624;
  double t717;
  double t795;
  double t3567;
  double t3604;
  double t6974;
  double t6983;
  double t7002;
  double t7026;
  double t7029;
  double t7037;
  double t4914;
  double t5495;
  double t5507;
  double t5951;
  double t5959;
  double t5964;
  double t7048;
  double t7051;
  double t7072;
  double t6328;
  double t6335;
  double t6339;
  double t6480;
  double t6482;
  double t6511;
  double t6561;
  double t6575;
  double t6591;
  double t7112;
  double t7121;
  double t7129;
  double t7138;
  double t7140;
  double t7144;
  double t6642;
  double t6643;
  double t6653;
  double t6799;
  double t6808;
  double t6816;
  double t7151;
  double t7153;
  double t7156;
  double t7161;
  double t7165;
  double t7167;
  double t6861;
  double t6871;
  double t6886;
  double t7176;
  double t7179;
  double t7180;
  double t7194;
  double t7195;
  double t7199;
  double t7271;
  double t7274;
  double t7285;
  double t7330;
  double t7332;
  double t7346;
  double t7361;
  double t7365;
  double t7369;
  double t7380;
  double t7385;
  double t7389;
  double t7397;
  double t7399;
  double t7405;
  double t7410;
  double t7419;
  double t7425;
  double t7432;
  double t7434;
  double t7455;
  t1591 = Cos(var1[3]);
  t1053 = Cos(var1[5]);
  t1615 = Sin(var1[4]);
  t1245 = Sin(var1[3]);
  t1701 = Sin(var1[5]);
  t303 = Cos(var1[6]);
  t1479 = -1.*t1053*t1245;
  t2531 = t1591*t1615*t1701;
  t2570 = t1479 + t2531;
  t3467 = t1591*t1053*t1615;
  t3471 = t1245*t1701;
  t3476 = t3467 + t3471;
  t3519 = Sin(var1[6]);
  t4177 = Cos(var1[7]);
  t4226 = -1.*t4177;
  t4622 = 1. + t4226;
  t5464 = Sin(var1[7]);
  t4100 = t303*t2570;
  t4113 = t3476*t3519;
  t4117 = t4100 + t4113;
  t5921 = Cos(var1[4]);
  t6290 = Cos(var1[8]);
  t6298 = -1.*t6290;
  t6303 = 1. + t6298;
  t6333 = Sin(var1[8]);
  t6222 = t1591*t5921*t4177;
  t6246 = t4117*t5464;
  t6274 = t6222 + t6246;
  t6410 = t303*t3476;
  t6428 = -1.*t2570*t3519;
  t6478 = t6410 + t6428;
  t6526 = Cos(var1[9]);
  t6538 = -1.*t6526;
  t6543 = 1. + t6538;
  t6574 = Sin(var1[9]);
  t6594 = t6290*t6274;
  t6611 = t6478*t6333;
  t6616 = t6594 + t6611;
  t6656 = t6290*t6478;
  t6667 = -1.*t6274*t6333;
  t6697 = t6656 + t6667;
  t6720 = Cos(var1[10]);
  t6747 = -1.*t6720;
  t6761 = 1. + t6747;
  t6801 = Sin(var1[10]);
  t6820 = -1.*t6574*t6616;
  t6826 = t6526*t6697;
  t6857 = t6820 + t6826;
  t6893 = t6526*t6616;
  t6898 = t6574*t6697;
  t6900 = t6893 + t6898;
  t333 = -1.*t303;
  t624 = 1. + t333;
  t717 = 0.135*t624;
  t795 = 0. + t717;
  t3567 = -0.135*t3519;
  t3604 = 0. + t3567;
  t6974 = t1591*t1053;
  t6983 = t1245*t1615*t1701;
  t7002 = t6974 + t6983;
  t7026 = t1053*t1245*t1615;
  t7029 = -1.*t1591*t1701;
  t7037 = t7026 + t7029;
  t4914 = 0.135*t4622;
  t5495 = 0.049*t5464;
  t5507 = 0. + t4914 + t5495;
  t5951 = -0.049*t4622;
  t5959 = 0.135*t5464;
  t5964 = 0. + t5951 + t5959;
  t7048 = t303*t7002;
  t7051 = t7037*t3519;
  t7072 = t7048 + t7051;
  t6328 = -0.049*t6303;
  t6335 = -0.09*t6333;
  t6339 = 0. + t6328 + t6335;
  t6480 = -0.09*t6303;
  t6482 = 0.049*t6333;
  t6511 = 0. + t6480 + t6482;
  t6561 = -0.049*t6543;
  t6575 = -0.21*t6574;
  t6591 = 0. + t6561 + t6575;
  t7112 = t5921*t4177*t1245;
  t7121 = t7072*t5464;
  t7129 = t7112 + t7121;
  t7138 = t303*t7037;
  t7140 = -1.*t7002*t3519;
  t7144 = t7138 + t7140;
  t6642 = -0.21*t6543;
  t6643 = 0.049*t6574;
  t6653 = 0. + t6642 + t6643;
  t6799 = -0.2707*t6761;
  t6808 = 0.0016*t6801;
  t6816 = 0. + t6799 + t6808;
  t7151 = t6290*t7129;
  t7153 = t7144*t6333;
  t7156 = t7151 + t7153;
  t7161 = t6290*t7144;
  t7165 = -1.*t7129*t6333;
  t7167 = t7161 + t7165;
  t6861 = -0.0016*t6761;
  t6871 = -0.2707*t6801;
  t6886 = 0. + t6861 + t6871;
  t7176 = -1.*t6574*t7156;
  t7179 = t6526*t7167;
  t7180 = t7176 + t7179;
  t7194 = t6526*t7156;
  t7195 = t6574*t7167;
  t7199 = t7194 + t7195;
  t7271 = t5921*t303*t1701;
  t7274 = t5921*t1053*t3519;
  t7285 = t7271 + t7274;
  t7330 = -1.*t4177*t1615;
  t7332 = t7285*t5464;
  t7346 = t7330 + t7332;
  t7361 = t5921*t1053*t303;
  t7365 = -1.*t5921*t1701*t3519;
  t7369 = t7361 + t7365;
  t7380 = t6290*t7346;
  t7385 = t7369*t6333;
  t7389 = t7380 + t7385;
  t7397 = t6290*t7369;
  t7399 = -1.*t7346*t6333;
  t7405 = t7397 + t7399;
  t7410 = -1.*t6574*t7389;
  t7419 = t6526*t7405;
  t7425 = t7410 + t7419;
  t7432 = t6526*t7389;
  t7434 = t6574*t7405;
  t7455 = t7432 + t7434;

  p_output1(0)=0. + t3476*t3604 + t4117*t5507 + 0.1305*(t4117*t4177 - 1.*t1591*t5464*t5921) + t1591*t5921*t5964 + t6274*t6339 + t6478*t6511 + t6591*t6616 + t6653*t6697 + t6816*t6857 + t6886*t6900 - 0.0016*(t6801*t6857 + t6720*t6900) - 0.2707*(t6720*t6857 - 1.*t6801*t6900) + t2570*t795 + var1(0);
  p_output1(1)=0. + t1245*t5921*t5964 + t3604*t7037 + t5507*t7072 + 0.1305*(-1.*t1245*t5464*t5921 + t4177*t7072) + t6339*t7129 + t6511*t7144 + t6591*t7156 + t6653*t7167 + t6816*t7180 + t6886*t7199 - 0.0016*(t6801*t7180 + t6720*t7199) - 0.2707*(t6720*t7180 - 1.*t6801*t7199) + t7002*t795 + var1(1);
  p_output1(2)=0. + t1053*t3604*t5921 - 1.*t1615*t5964 + t5507*t7285 + 0.1305*(t1615*t5464 + t4177*t7285) + t6339*t7346 + t6511*t7369 + t6591*t7389 + t6653*t7405 + t6816*t7425 + t6886*t7455 - 0.0016*(t6801*t7425 + t6720*t7455) - 0.2707*(t6720*t7425 - 1.*t6801*t7455) + t1701*t5921*t795 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_knee_to_shin_left(const Eigen::Matrix<double,20,1> &var1)
//void p_knee_to_shin_left(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



