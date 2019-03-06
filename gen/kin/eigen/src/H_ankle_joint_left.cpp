/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:19 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_ankle_joint_left.h"

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
  double t781;
  double t937;
  double t1039;
  double t1016;
  double t1076;
  double t906;
  double t1206;
  double t1262;
  double t1335;
  double t1020;
  double t1079;
  double t1114;
  double t1378;
  double t707;
  double t1561;
  double t1568;
  double t1616;
  double t800;
  double t836;
  double t845;
  double t1174;
  double t1390;
  double t1415;
  double t1467;
  double t1516;
  double t1517;
  double t1624;
  double t1744;
  double t1549;
  double t1649;
  double t1711;
  double t613;
  double t1758;
  double t1816;
  double t1818;
  double t1887;
  double t1730;
  double t1826;
  double t1831;
  double t444;
  double t1926;
  double t1927;
  double t1974;
  double t352;
  double t2229;
  double t2231;
  double t2259;
  double t2154;
  double t2213;
  double t2220;
  double t2414;
  double t2462;
  double t2465;
  double t2137;
  double t2224;
  double t2277;
  double t2308;
  double t2346;
  double t2351;
  double t2412;
  double t2488;
  double t2515;
  double t2555;
  double t2582;
  double t2648;
  double t2048;
  double t2542;
  double t2667;
  double t2707;
  double t2759;
  double t2760;
  double t2857;
  double t3138;
  double t3156;
  double t3170;
  double t3046;
  double t3064;
  double t3075;
  double t3104;
  double t3110;
  double t3119;
  double t3132;
  double t3174;
  double t3176;
  double t3216;
  double t3234;
  double t3235;
  double t3194;
  double t3239;
  double t3240;
  double t3264;
  double t3347;
  double t3359;
  double t1875;
  double t1977;
  double t1995;
  double t2051;
  double t2062;
  double t2068;
  double t2727;
  double t2904;
  double t2908;
  double t2924;
  double t2932;
  double t2962;
  double t3242;
  double t3362;
  double t3388;
  double t3402;
  double t3413;
  double t3451;
  double t3997;
  double t4022;
  double t4253;
  double t4258;
  double t4411;
  double t4419;
  double t4582;
  double t4601;
  double t4870;
  double t4871;
  double t3525;
  double t3560;
  double t3585;
  double t3779;
  double t3782;
  double t3832;
  double t3850;
  double t3915;
  double t3929;
  double t4040;
  double t4056;
  double t4067;
  double t4134;
  double t4160;
  double t4168;
  double t4262;
  double t4266;
  double t4274;
  double t4329;
  double t4350;
  double t4354;
  double t4424;
  double t4429;
  double t4495;
  double t4546;
  double t4556;
  double t4557;
  double t4630;
  double t4644;
  double t4744;
  double t4812;
  double t4825;
  double t4844;
  double t4894;
  double t4903;
  double t4915;
  double t4936;
  double t4937;
  double t4938;
  double t3588;
  double t3589;
  double t3601;
  double t3612;
  double t3618;
  double t3630;
  t781 = Cos(var1[3]);
  t937 = Cos(var1[5]);
  t1039 = Sin(var1[4]);
  t1016 = Sin(var1[3]);
  t1076 = Sin(var1[5]);
  t906 = Cos(var1[6]);
  t1206 = t781*t937*t1039;
  t1262 = t1016*t1076;
  t1335 = t1206 + t1262;
  t1020 = -1.*t937*t1016;
  t1079 = t781*t1039*t1076;
  t1114 = t1020 + t1079;
  t1378 = Sin(var1[6]);
  t707 = Cos(var1[8]);
  t1561 = t906*t1335;
  t1568 = -1.*t1114*t1378;
  t1616 = t1561 + t1568;
  t800 = Cos(var1[4]);
  t836 = Cos(var1[7]);
  t845 = t781*t800*t836;
  t1174 = t906*t1114;
  t1390 = t1335*t1378;
  t1415 = t1174 + t1390;
  t1467 = Sin(var1[7]);
  t1516 = t1415*t1467;
  t1517 = t845 + t1516;
  t1624 = Sin(var1[8]);
  t1744 = Cos(var1[9]);
  t1549 = t707*t1517;
  t1649 = t1616*t1624;
  t1711 = t1549 + t1649;
  t613 = Sin(var1[9]);
  t1758 = t707*t1616;
  t1816 = -1.*t1517*t1624;
  t1818 = t1758 + t1816;
  t1887 = Cos(var1[10]);
  t1730 = -1.*t613*t1711;
  t1826 = t1744*t1818;
  t1831 = t1730 + t1826;
  t444 = Sin(var1[10]);
  t1926 = t1744*t1711;
  t1927 = t613*t1818;
  t1974 = t1926 + t1927;
  t352 = Sin(var1[11]);
  t2229 = t937*t1016*t1039;
  t2231 = -1.*t781*t1076;
  t2259 = t2229 + t2231;
  t2154 = t781*t937;
  t2213 = t1016*t1039*t1076;
  t2220 = t2154 + t2213;
  t2414 = t906*t2259;
  t2462 = -1.*t2220*t1378;
  t2465 = t2414 + t2462;
  t2137 = t800*t836*t1016;
  t2224 = t906*t2220;
  t2277 = t2259*t1378;
  t2308 = t2224 + t2277;
  t2346 = t2308*t1467;
  t2351 = t2137 + t2346;
  t2412 = t707*t2351;
  t2488 = t2465*t1624;
  t2515 = t2412 + t2488;
  t2555 = t707*t2465;
  t2582 = -1.*t2351*t1624;
  t2648 = t2555 + t2582;
  t2048 = Cos(var1[11]);
  t2542 = -1.*t613*t2515;
  t2667 = t1744*t2648;
  t2707 = t2542 + t2667;
  t2759 = t1744*t2515;
  t2760 = t613*t2648;
  t2857 = t2759 + t2760;
  t3138 = t800*t937*t906;
  t3156 = -1.*t800*t1076*t1378;
  t3170 = t3138 + t3156;
  t3046 = -1.*t836*t1039;
  t3064 = t800*t906*t1076;
  t3075 = t800*t937*t1378;
  t3104 = t3064 + t3075;
  t3110 = t3104*t1467;
  t3119 = t3046 + t3110;
  t3132 = t707*t3119;
  t3174 = t3170*t1624;
  t3176 = t3132 + t3174;
  t3216 = t707*t3170;
  t3234 = -1.*t3119*t1624;
  t3235 = t3216 + t3234;
  t3194 = -1.*t613*t3176;
  t3239 = t1744*t3235;
  t3240 = t3194 + t3239;
  t3264 = t1744*t3176;
  t3347 = t613*t3235;
  t3359 = t3264 + t3347;
  t1875 = t444*t1831;
  t1977 = t1887*t1974;
  t1995 = t1875 + t1977;
  t2051 = t1887*t1831;
  t2062 = -1.*t444*t1974;
  t2068 = t2051 + t2062;
  t2727 = t444*t2707;
  t2904 = t1887*t2857;
  t2908 = t2727 + t2904;
  t2924 = t1887*t2707;
  t2932 = -1.*t444*t2857;
  t2962 = t2924 + t2932;
  t3242 = t444*t3240;
  t3362 = t1887*t3359;
  t3388 = t3242 + t3362;
  t3402 = t1887*t3240;
  t3413 = -1.*t444*t3359;
  t3451 = t3402 + t3413;
  t3997 = -1.*t836;
  t4022 = 1. + t3997;
  t4253 = -1.*t707;
  t4258 = 1. + t4253;
  t4411 = -1.*t1744;
  t4419 = 1. + t4411;
  t4582 = -1.*t1887;
  t4601 = 1. + t4582;
  t4870 = -1.*t2048;
  t4871 = 1. + t4870;
  t3525 = t2048*t1995;
  t3560 = t352*t2068;
  t3585 = t3525 + t3560;
  t3779 = -1.*t906;
  t3782 = 1. + t3779;
  t3832 = 0.135*t3782;
  t3850 = 0. + t3832;
  t3915 = -0.135*t1378;
  t3929 = 0. + t3915;
  t4040 = 0.135*t4022;
  t4056 = 0.049*t1467;
  t4067 = 0. + t4040 + t4056;
  t4134 = -0.049*t4022;
  t4160 = 0.135*t1467;
  t4168 = 0. + t4134 + t4160;
  t4262 = -0.049*t4258;
  t4266 = -0.09*t1624;
  t4274 = 0. + t4262 + t4266;
  t4329 = -0.09*t4258;
  t4350 = 0.049*t1624;
  t4354 = 0. + t4329 + t4350;
  t4424 = -0.049*t4419;
  t4429 = -0.21*t613;
  t4495 = 0. + t4424 + t4429;
  t4546 = -0.21*t4419;
  t4556 = 0.049*t613;
  t4557 = 0. + t4546 + t4556;
  t4630 = -0.2707*t4601;
  t4644 = 0.0016*t444;
  t4744 = 0. + t4630 + t4644;
  t4812 = -0.0016*t4601;
  t4825 = -0.2707*t444;
  t4844 = 0. + t4812 + t4825;
  t4894 = 0.0184*t4871;
  t4903 = -0.7055*t352;
  t4915 = 0. + t4894 + t4903;
  t4936 = -0.7055*t4871;
  t4937 = -0.0184*t352;
  t4938 = 0. + t4936 + t4937;
  t3588 = t2048*t2908;
  t3589 = t352*t2962;
  t3601 = t3588 + t3589;
  t3612 = t2048*t3388;
  t3618 = t352*t3451;
  t3630 = t3612 + t3618;

  p_output1(0)=-1.*t2048*t2068 + t1995*t352;
  p_output1(1)=-1.*t2048*t2962 + t2908*t352;
  p_output1(2)=-1.*t2048*t3451 + t3388*t352;
  p_output1(3)=0.;
  p_output1(4)=t3585;
  p_output1(5)=t3601;
  p_output1(6)=t3630;
  p_output1(7)=0.;
  p_output1(8)=t1467*t781*t800 - 1.*t1415*t836;
  p_output1(9)=t1016*t1467*t800 - 1.*t2308*t836;
  p_output1(10)=-1.*t1039*t1467 - 1.*t3104*t836;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.7055*(t2048*t2068 - 1.*t1995*t352) + 0.0184*t3585 + t1114*t3850 + t1335*t3929 + t1415*t4067 + t1517*t4274 + t1616*t4354 + t1711*t4495 + t1818*t4557 + t1831*t4744 + t1974*t4844 + t1995*t4915 + t2068*t4938 + t4168*t781*t800 + 0.1305*(-1.*t1467*t781*t800 + t1415*t836) + var1(0);
  p_output1(13)=0. - 0.7055*(t2048*t2962 - 1.*t2908*t352) + 0.0184*t3601 + t2220*t3850 + t2259*t3929 + t2308*t4067 + t2351*t4274 + t2465*t4354 + t2515*t4495 + t2648*t4557 + t2707*t4744 + t2857*t4844 + t2908*t4915 + t2962*t4938 + t1016*t4168*t800 + 0.1305*(-1.*t1016*t1467*t800 + t2308*t836) + var1(1);
  p_output1(14)=0. - 0.7055*(t2048*t3451 - 1.*t3388*t352) + 0.0184*t3630 + t3104*t4067 - 1.*t1039*t4168 + t3119*t4274 + t3170*t4354 + t3176*t4495 + t3235*t4557 + t3240*t4744 + t3359*t4844 + t3388*t4915 + t3451*t4938 + t1076*t3850*t800 + 0.1305*(t1039*t1467 + t3104*t836) + t3929*t800*t937 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_ankle_joint_left(const Eigen::Matrix<double,20,1> &var1)
//void H_ankle_joint_left(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



