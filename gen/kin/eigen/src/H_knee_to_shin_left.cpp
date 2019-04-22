/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:17 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_to_shin_left.h"

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
  double t478;
  double t770;
  double t868;
  double t771;
  double t909;
  double t677;
  double t1337;
  double t1463;
  double t1495;
  double t816;
  double t1011;
  double t1221;
  double t1563;
  double t376;
  double t1960;
  double t1964;
  double t2066;
  double t519;
  double t529;
  double t555;
  double t1284;
  double t1648;
  double t1691;
  double t1777;
  double t1853;
  double t1871;
  double t2148;
  double t2264;
  double t1929;
  double t2177;
  double t2212;
  double t372;
  double t2276;
  double t2341;
  double t2361;
  double t247;
  double t2811;
  double t2815;
  double t2843;
  double t2677;
  double t2693;
  double t2747;
  double t3093;
  double t3158;
  double t3173;
  double t2632;
  double t2793;
  double t2916;
  double t3007;
  double t3027;
  double t3069;
  double t2468;
  double t3089;
  double t3266;
  double t3281;
  double t3463;
  double t3476;
  double t3505;
  double t3926;
  double t3948;
  double t3951;
  double t3699;
  double t3711;
  double t3728;
  double t3761;
  double t3798;
  double t3836;
  double t3855;
  double t3979;
  double t4011;
  double t4084;
  double t4089;
  double t4096;
  double t2257;
  double t2366;
  double t2425;
  double t2497;
  double t2501;
  double t2601;
  double t3283;
  double t3542;
  double t3564;
  double t3576;
  double t3592;
  double t3629;
  double t4051;
  double t4106;
  double t4113;
  double t4136;
  double t4186;
  double t4207;
  double t4972;
  double t5127;
  double t5495;
  double t5500;
  double t5779;
  double t5793;
  double t6091;
  double t6111;
  double t4233;
  double t4282;
  double t4307;
  double t4780;
  double t4783;
  double t4788;
  double t4818;
  double t4908;
  double t4910;
  double t5133;
  double t5144;
  double t5166;
  double t5174;
  double t5210;
  double t5227;
  double t5507;
  double t5525;
  double t5596;
  double t5691;
  double t5735;
  double t5748;
  double t5804;
  double t5836;
  double t5843;
  double t5951;
  double t6037;
  double t6038;
  double t6129;
  double t6173;
  double t6200;
  double t6222;
  double t6234;
  double t6241;
  double t4317;
  double t4341;
  double t4347;
  double t4381;
  double t4447;
  double t4475;
  t478 = Cos(var1[3]);
  t770 = Cos(var1[5]);
  t868 = Sin(var1[4]);
  t771 = Sin(var1[3]);
  t909 = Sin(var1[5]);
  t677 = Cos(var1[6]);
  t1337 = t478*t770*t868;
  t1463 = t771*t909;
  t1495 = t1337 + t1463;
  t816 = -1.*t770*t771;
  t1011 = t478*t868*t909;
  t1221 = t816 + t1011;
  t1563 = Sin(var1[6]);
  t376 = Cos(var1[8]);
  t1960 = t677*t1495;
  t1964 = -1.*t1221*t1563;
  t2066 = t1960 + t1964;
  t519 = Cos(var1[4]);
  t529 = Cos(var1[7]);
  t555 = t478*t519*t529;
  t1284 = t677*t1221;
  t1648 = t1495*t1563;
  t1691 = t1284 + t1648;
  t1777 = Sin(var1[7]);
  t1853 = t1691*t1777;
  t1871 = t555 + t1853;
  t2148 = Sin(var1[8]);
  t2264 = Cos(var1[9]);
  t1929 = t376*t1871;
  t2177 = t2066*t2148;
  t2212 = t1929 + t2177;
  t372 = Sin(var1[9]);
  t2276 = t376*t2066;
  t2341 = -1.*t1871*t2148;
  t2361 = t2276 + t2341;
  t247 = Cos(var1[10]);
  t2811 = t770*t771*t868;
  t2815 = -1.*t478*t909;
  t2843 = t2811 + t2815;
  t2677 = t478*t770;
  t2693 = t771*t868*t909;
  t2747 = t2677 + t2693;
  t3093 = t677*t2843;
  t3158 = -1.*t2747*t1563;
  t3173 = t3093 + t3158;
  t2632 = t519*t529*t771;
  t2793 = t677*t2747;
  t2916 = t2843*t1563;
  t3007 = t2793 + t2916;
  t3027 = t3007*t1777;
  t3069 = t2632 + t3027;
  t2468 = Sin(var1[10]);
  t3089 = t376*t3069;
  t3266 = t3173*t2148;
  t3281 = t3089 + t3266;
  t3463 = t376*t3173;
  t3476 = -1.*t3069*t2148;
  t3505 = t3463 + t3476;
  t3926 = t519*t770*t677;
  t3948 = -1.*t519*t909*t1563;
  t3951 = t3926 + t3948;
  t3699 = -1.*t529*t868;
  t3711 = t519*t677*t909;
  t3728 = t519*t770*t1563;
  t3761 = t3711 + t3728;
  t3798 = t3761*t1777;
  t3836 = t3699 + t3798;
  t3855 = t376*t3836;
  t3979 = t3951*t2148;
  t4011 = t3855 + t3979;
  t4084 = t376*t3951;
  t4089 = -1.*t3836*t2148;
  t4096 = t4084 + t4089;
  t2257 = -1.*t372*t2212;
  t2366 = t2264*t2361;
  t2425 = t2257 + t2366;
  t2497 = t2264*t2212;
  t2501 = t372*t2361;
  t2601 = t2497 + t2501;
  t3283 = -1.*t372*t3281;
  t3542 = t2264*t3505;
  t3564 = t3283 + t3542;
  t3576 = t2264*t3281;
  t3592 = t372*t3505;
  t3629 = t3576 + t3592;
  t4051 = -1.*t372*t4011;
  t4106 = t2264*t4096;
  t4113 = t4051 + t4106;
  t4136 = t2264*t4011;
  t4186 = t372*t4096;
  t4207 = t4136 + t4186;
  t4972 = -1.*t529;
  t5127 = 1. + t4972;
  t5495 = -1.*t376;
  t5500 = 1. + t5495;
  t5779 = -1.*t2264;
  t5793 = 1. + t5779;
  t6091 = -1.*t247;
  t6111 = 1. + t6091;
  t4233 = t2468*t2425;
  t4282 = t247*t2601;
  t4307 = t4233 + t4282;
  t4780 = -1.*t677;
  t4783 = 1. + t4780;
  t4788 = 0.135*t4783;
  t4818 = 0. + t4788;
  t4908 = -0.135*t1563;
  t4910 = 0. + t4908;
  t5133 = 0.135*t5127;
  t5144 = 0.049*t1777;
  t5166 = 0. + t5133 + t5144;
  t5174 = -0.049*t5127;
  t5210 = 0.135*t1777;
  t5227 = 0. + t5174 + t5210;
  t5507 = -0.049*t5500;
  t5525 = -0.09*t2148;
  t5596 = 0. + t5507 + t5525;
  t5691 = -0.09*t5500;
  t5735 = 0.049*t2148;
  t5748 = 0. + t5691 + t5735;
  t5804 = -0.049*t5793;
  t5836 = -0.21*t372;
  t5843 = 0. + t5804 + t5836;
  t5951 = -0.21*t5793;
  t6037 = 0.049*t372;
  t6038 = 0. + t5951 + t6037;
  t6129 = -0.2707*t6111;
  t6173 = 0.0016*t2468;
  t6200 = 0. + t6129 + t6173;
  t6222 = -0.0016*t6111;
  t6234 = -0.2707*t2468;
  t6241 = 0. + t6222 + t6234;
  t4317 = t2468*t3564;
  t4341 = t247*t3629;
  t4347 = t4317 + t4341;
  t4381 = t2468*t4113;
  t4447 = t247*t4207;
  t4475 = t4381 + t4447;

  p_output1(0)=-1.*t2425*t247 + t2468*t2601;
  p_output1(1)=-1.*t247*t3564 + t2468*t3629;
  p_output1(2)=-1.*t247*t4113 + t2468*t4207;
  p_output1(3)=0.;
  p_output1(4)=t4307;
  p_output1(5)=t4347;
  p_output1(6)=t4475;
  p_output1(7)=0.;
  p_output1(8)=t1777*t478*t519 - 1.*t1691*t529;
  p_output1(9)=-1.*t3007*t529 + t1777*t519*t771;
  p_output1(10)=-1.*t3761*t529 - 1.*t1777*t868;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.2707*(t2425*t247 - 1.*t2468*t2601) - 0.0016*t4307 + t1221*t4818 + t1495*t4910 + t1691*t5166 + t478*t519*t5227 + 0.1305*(-1.*t1777*t478*t519 + t1691*t529) + t1871*t5596 + t2066*t5748 + t2212*t5843 + t2361*t6038 + t2425*t6200 + t2601*t6241 + var1(0);
  p_output1(13)=0. - 0.2707*(t247*t3564 - 1.*t2468*t3629) - 0.0016*t4347 + t2747*t4818 + t2843*t4910 + t3007*t5166 + t3069*t5596 + t3173*t5748 + t3281*t5843 + t3505*t6038 + t3564*t6200 + t3629*t6241 + t519*t5227*t771 + 0.1305*(t3007*t529 - 1.*t1777*t519*t771) + var1(1);
  p_output1(14)=0. - 0.2707*(t247*t4113 - 1.*t2468*t4207) - 0.0016*t4475 + t3761*t5166 + t3836*t5596 + t3951*t5748 + t4011*t5843 + t4096*t6038 + t4113*t6200 + t4207*t6241 + t4910*t519*t770 - 1.*t5227*t868 + 0.1305*(t3761*t529 + t1777*t868) + t4818*t519*t909 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_knee_to_shin_left(const Eigen::Matrix<double,20,1> &var1)
//void H_knee_to_shin_left(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



