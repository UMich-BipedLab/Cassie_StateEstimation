/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:33 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_ankle_joint_right.h"

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
  double t31;
  double t1910;
  double t2306;
  double t2129;
  double t2395;
  double t239;
  double t315;
  double t636;
  double t1123;
  double t1397;
  double t2236;
  double t2429;
  double t2471;
  double t2588;
  double t3789;
  double t4021;
  double t4158;
  double t192;
  double t4902;
  double t4963;
  double t5095;
  double t5215;
  double t5293;
  double t5360;
  double t5542;
  double t5941;
  double t6071;
  double t6140;
  double t6286;
  double t6287;
  double t6294;
  double t6331;
  double t6344;
  double t6347;
  double t6363;
  double t6412;
  double t6413;
  double t6417;
  double t6596;
  double t6598;
  double t6620;
  double t6738;
  double t6739;
  double t6760;
  double t6839;
  double t6888;
  double t6938;
  double t6987;
  double t7015;
  double t7026;
  double t7027;
  double t7069;
  double t7083;
  double t7099;
  double t7131;
  double t7220;
  double t7266;
  double t7279;
  double t7320;
  double t7338;
  double t7362;
  double t1064;
  double t1230;
  double t1279;
  double t1651;
  double t1661;
  double t2705;
  double t2713;
  double t2861;
  double t2878;
  double t4182;
  double t4380;
  double t4462;
  double t7490;
  double t7494;
  double t7519;
  double t7550;
  double t7570;
  double t7596;
  double t5534;
  double t5722;
  double t5756;
  double t7611;
  double t7643;
  double t7649;
  double t6216;
  double t6229;
  double t6267;
  double t6350;
  double t6370;
  double t6379;
  double t7712;
  double t7742;
  double t7761;
  double t7816;
  double t7837;
  double t7844;
  double t6484;
  double t6565;
  double t6593;
  double t6826;
  double t6874;
  double t6885;
  double t7872;
  double t7895;
  double t7926;
  double t7979;
  double t7996;
  double t8031;
  double t7006;
  double t7008;
  double t7012;
  double t7117;
  double t7181;
  double t7216;
  double t8045;
  double t8056;
  double t8071;
  double t8081;
  double t8099;
  double t8107;
  double t7301;
  double t7307;
  double t7314;
  double t8152;
  double t8156;
  double t8158;
  double t8178;
  double t8182;
  double t8189;
  double t8305;
  double t8306;
  double t8315;
  double t8329;
  double t8331;
  double t8342;
  double t8385;
  double t8388;
  double t8391;
  double t8395;
  double t8400;
  double t8402;
  double t8428;
  double t8433;
  double t8437;
  double t8458;
  double t8461;
  double t8468;
  double t8513;
  double t8553;
  double t8554;
  double t8566;
  double t8568;
  double t8570;
  double t8578;
  double t8581;
  double t8586;
  t31 = Cos(var1[3]);
  t1910 = Cos(var1[5]);
  t2306 = Sin(var1[3]);
  t2129 = Sin(var1[4]);
  t2395 = Sin(var1[5]);
  t239 = Cos(var1[14]);
  t315 = -1.*t239;
  t636 = 1. + t315;
  t1123 = Sin(var1[14]);
  t1397 = Sin(var1[13]);
  t2236 = t31*t1910*t2129;
  t2429 = t2306*t2395;
  t2471 = t2236 + t2429;
  t2588 = Cos(var1[13]);
  t3789 = -1.*t1910*t2306;
  t4021 = t31*t2129*t2395;
  t4158 = t3789 + t4021;
  t192 = Cos(var1[4]);
  t4902 = t1397*t2471;
  t4963 = t2588*t4158;
  t5095 = t4902 + t4963;
  t5215 = Cos(var1[15]);
  t5293 = -1.*t5215;
  t5360 = 1. + t5293;
  t5542 = Sin(var1[15]);
  t5941 = t2588*t2471;
  t6071 = -1.*t1397*t4158;
  t6140 = t5941 + t6071;
  t6286 = t239*t31*t192;
  t6287 = t1123*t5095;
  t6294 = t6286 + t6287;
  t6331 = Cos(var1[16]);
  t6344 = -1.*t6331;
  t6347 = 1. + t6344;
  t6363 = Sin(var1[16]);
  t6412 = t5542*t6140;
  t6413 = t5215*t6294;
  t6417 = t6412 + t6413;
  t6596 = t5215*t6140;
  t6598 = -1.*t5542*t6294;
  t6620 = t6596 + t6598;
  t6738 = Cos(var1[17]);
  t6739 = -1.*t6738;
  t6760 = 1. + t6739;
  t6839 = Sin(var1[17]);
  t6888 = -1.*t6363*t6417;
  t6938 = t6331*t6620;
  t6987 = t6888 + t6938;
  t7015 = t6331*t6417;
  t7026 = t6363*t6620;
  t7027 = t7015 + t7026;
  t7069 = Cos(var1[18]);
  t7083 = -1.*t7069;
  t7099 = 1. + t7083;
  t7131 = Sin(var1[18]);
  t7220 = t6839*t6987;
  t7266 = t6738*t7027;
  t7279 = t7220 + t7266;
  t7320 = t6738*t6987;
  t7338 = -1.*t6839*t7027;
  t7362 = t7320 + t7338;
  t1064 = -0.049*t636;
  t1230 = -0.135*t1123;
  t1279 = 0. + t1064 + t1230;
  t1651 = 0.135*t1397;
  t1661 = 0. + t1651;
  t2705 = -1.*t2588;
  t2713 = 1. + t2705;
  t2861 = -0.135*t2713;
  t2878 = 0. + t2861;
  t4182 = -0.135*t636;
  t4380 = 0.049*t1123;
  t4462 = 0. + t4182 + t4380;
  t7490 = t1910*t2306*t2129;
  t7494 = -1.*t31*t2395;
  t7519 = t7490 + t7494;
  t7550 = t31*t1910;
  t7570 = t2306*t2129*t2395;
  t7596 = t7550 + t7570;
  t5534 = -0.09*t5360;
  t5722 = 0.049*t5542;
  t5756 = 0. + t5534 + t5722;
  t7611 = t1397*t7519;
  t7643 = t2588*t7596;
  t7649 = t7611 + t7643;
  t6216 = -0.049*t5360;
  t6229 = -0.09*t5542;
  t6267 = 0. + t6216 + t6229;
  t6350 = -0.049*t6347;
  t6370 = -0.21*t6363;
  t6379 = 0. + t6350 + t6370;
  t7712 = t2588*t7519;
  t7742 = -1.*t1397*t7596;
  t7761 = t7712 + t7742;
  t7816 = t239*t192*t2306;
  t7837 = t1123*t7649;
  t7844 = t7816 + t7837;
  t6484 = -0.21*t6347;
  t6565 = 0.049*t6363;
  t6593 = 0. + t6484 + t6565;
  t6826 = -0.2707*t6760;
  t6874 = 0.0016*t6839;
  t6885 = 0. + t6826 + t6874;
  t7872 = t5542*t7761;
  t7895 = t5215*t7844;
  t7926 = t7872 + t7895;
  t7979 = t5215*t7761;
  t7996 = -1.*t5542*t7844;
  t8031 = t7979 + t7996;
  t7006 = -0.0016*t6760;
  t7008 = -0.2707*t6839;
  t7012 = 0. + t7006 + t7008;
  t7117 = 0.0184*t7099;
  t7181 = -0.7055*t7131;
  t7216 = 0. + t7117 + t7181;
  t8045 = -1.*t6363*t7926;
  t8056 = t6331*t8031;
  t8071 = t8045 + t8056;
  t8081 = t6331*t7926;
  t8099 = t6363*t8031;
  t8107 = t8081 + t8099;
  t7301 = -0.7055*t7099;
  t7307 = -0.0184*t7131;
  t7314 = 0. + t7301 + t7307;
  t8152 = t6839*t8071;
  t8156 = t6738*t8107;
  t8158 = t8152 + t8156;
  t8178 = t6738*t8071;
  t8182 = -1.*t6839*t8107;
  t8189 = t8178 + t8182;
  t8305 = t192*t1910*t1397;
  t8306 = t2588*t192*t2395;
  t8315 = t8305 + t8306;
  t8329 = t2588*t192*t1910;
  t8331 = -1.*t192*t1397*t2395;
  t8342 = t8329 + t8331;
  t8385 = -1.*t239*t2129;
  t8388 = t1123*t8315;
  t8391 = t8385 + t8388;
  t8395 = t5542*t8342;
  t8400 = t5215*t8391;
  t8402 = t8395 + t8400;
  t8428 = t5215*t8342;
  t8433 = -1.*t5542*t8391;
  t8437 = t8428 + t8433;
  t8458 = -1.*t6363*t8402;
  t8461 = t6331*t8437;
  t8468 = t8458 + t8461;
  t8513 = t6331*t8402;
  t8553 = t6363*t8437;
  t8554 = t8513 + t8553;
  t8566 = t6839*t8468;
  t8568 = t6738*t8554;
  t8570 = t8566 + t8568;
  t8578 = t6738*t8468;
  t8581 = -1.*t6839*t8554;
  t8586 = t8578 + t8581;

  p_output1(0)=0. + t1661*t2471 + t1279*t192*t31 + t2878*t4158 + t4462*t5095 - 0.1305*(-1.*t1123*t192*t31 + t239*t5095) + t5756*t6140 + t6267*t6294 + t6379*t6417 + t6593*t6620 + t6885*t6987 + t7012*t7027 + t7216*t7279 + t7314*t7362 - 0.7055*(-1.*t7131*t7279 + t7069*t7362) + 0.0184*(t7069*t7279 + t7131*t7362) + var1(0);
  p_output1(1)=0. + t1279*t192*t2306 + t1661*t7519 + t2878*t7596 + t4462*t7649 - 0.1305*(-1.*t1123*t192*t2306 + t239*t7649) + t5756*t7761 + t6267*t7844 + t6379*t7926 + t6593*t8031 + t6885*t8071 + t7012*t8107 + t7216*t8158 + t7314*t8189 - 0.7055*(-1.*t7131*t8158 + t7069*t8189) + 0.0184*(t7069*t8158 + t7131*t8189) + var1(1);
  p_output1(2)=0. + t1661*t1910*t192 - 1.*t1279*t2129 + t192*t2395*t2878 + t4462*t8315 - 0.1305*(t1123*t2129 + t239*t8315) + t5756*t8342 + t6267*t8391 + t6379*t8402 + t6593*t8437 + t6885*t8468 + t7012*t8554 + t7216*t8570 + t7314*t8586 - 0.7055*(-1.*t7131*t8570 + t7069*t8586) + 0.0184*(t7069*t8570 + t7131*t8586) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_ankle_joint_right(const Eigen::Matrix<double,20,1> &var1)
//void p_ankle_joint_right(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



