/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:36 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_toe_joint_right.h"

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
  double t141;
  double t2291;
  double t2632;
  double t2298;
  double t2896;
  double t669;
  double t913;
  double t1051;
  double t1420;
  double t1748;
  double t2427;
  double t3012;
  double t3035;
  double t3375;
  double t3753;
  double t3818;
  double t3855;
  double t354;
  double t4407;
  double t4444;
  double t4595;
  double t4689;
  double t4732;
  double t4739;
  double t4771;
  double t4861;
  double t4908;
  double t4910;
  double t5421;
  double t5430;
  double t5461;
  double t5508;
  double t5525;
  double t5596;
  double t5748;
  double t5836;
  double t5843;
  double t5935;
  double t6085;
  double t6118;
  double t6129;
  double t6241;
  double t6252;
  double t6279;
  double t6319;
  double t6379;
  double t6393;
  double t6402;
  double t6470;
  double t6484;
  double t6496;
  double t6511;
  double t6545;
  double t6556;
  double t6596;
  double t6615;
  double t6628;
  double t6629;
  double t6784;
  double t6796;
  double t6797;
  double t6818;
  double t6824;
  double t6826;
  double t6831;
  double t6862;
  double t6876;
  double t6885;
  double t6971;
  double t6977;
  double t6984;
  double t1063;
  double t1478;
  double t1493;
  double t1899;
  double t2202;
  double t3383;
  double t3544;
  double t3623;
  double t3693;
  double t4096;
  double t4143;
  double t4157;
  double t7180;
  double t7199;
  double t7208;
  double t7215;
  double t7228;
  double t7237;
  double t4761;
  double t4788;
  double t4833;
  double t7301;
  double t7314;
  double t7316;
  double t5174;
  double t5210;
  double t5386;
  double t5691;
  double t5762;
  double t5802;
  double t7327;
  double t7341;
  double t7368;
  double t7393;
  double t7433;
  double t7453;
  double t6004;
  double t6037;
  double t6038;
  double t6308;
  double t6359;
  double t6374;
  double t7471;
  double t7481;
  double t7490;
  double t7498;
  double t7509;
  double t7519;
  double t6457;
  double t6458;
  double t6464;
  double t6559;
  double t6609;
  double t6610;
  double t7543;
  double t7550;
  double t7556;
  double t7566;
  double t7569;
  double t7584;
  double t6636;
  double t6686;
  double t6765;
  double t6827;
  double t6832;
  double t6850;
  double t7590;
  double t7601;
  double t7611;
  double t7619;
  double t7633;
  double t7636;
  double t6938;
  double t6947;
  double t6957;
  double t7655;
  double t7664;
  double t7676;
  double t7712;
  double t7717;
  double t7748;
  double t7911;
  double t7916;
  double t7957;
  double t7967;
  double t7973;
  double t7978;
  double t8073;
  double t8086;
  double t8094;
  double t8111;
  double t8119;
  double t8156;
  double t8180;
  double t8196;
  double t8199;
  double t8210;
  double t8223;
  double t8273;
  double t8290;
  double t8305;
  double t8306;
  double t8319;
  double t8320;
  double t8329;
  double t8347;
  double t8359;
  double t8360;
  double t8381;
  double t8388;
  double t8390;
  double t8396;
  double t8417;
  double t8428;
  t141 = Cos(var1[3]);
  t2291 = Cos(var1[5]);
  t2632 = Sin(var1[3]);
  t2298 = Sin(var1[4]);
  t2896 = Sin(var1[5]);
  t669 = Cos(var1[14]);
  t913 = -1.*t669;
  t1051 = 1. + t913;
  t1420 = Sin(var1[14]);
  t1748 = Sin(var1[13]);
  t2427 = t141*t2291*t2298;
  t3012 = t2632*t2896;
  t3035 = t2427 + t3012;
  t3375 = Cos(var1[13]);
  t3753 = -1.*t2291*t2632;
  t3818 = t141*t2298*t2896;
  t3855 = t3753 + t3818;
  t354 = Cos(var1[4]);
  t4407 = t1748*t3035;
  t4444 = t3375*t3855;
  t4595 = t4407 + t4444;
  t4689 = Cos(var1[15]);
  t4732 = -1.*t4689;
  t4739 = 1. + t4732;
  t4771 = Sin(var1[15]);
  t4861 = t3375*t3035;
  t4908 = -1.*t1748*t3855;
  t4910 = t4861 + t4908;
  t5421 = t669*t141*t354;
  t5430 = t1420*t4595;
  t5461 = t5421 + t5430;
  t5508 = Cos(var1[16]);
  t5525 = -1.*t5508;
  t5596 = 1. + t5525;
  t5748 = Sin(var1[16]);
  t5836 = t4771*t4910;
  t5843 = t4689*t5461;
  t5935 = t5836 + t5843;
  t6085 = t4689*t4910;
  t6118 = -1.*t4771*t5461;
  t6129 = t6085 + t6118;
  t6241 = Cos(var1[17]);
  t6252 = -1.*t6241;
  t6279 = 1. + t6252;
  t6319 = Sin(var1[17]);
  t6379 = -1.*t5748*t5935;
  t6393 = t5508*t6129;
  t6402 = t6379 + t6393;
  t6470 = t5508*t5935;
  t6484 = t5748*t6129;
  t6496 = t6470 + t6484;
  t6511 = Cos(var1[18]);
  t6545 = -1.*t6511;
  t6556 = 1. + t6545;
  t6596 = Sin(var1[18]);
  t6615 = t6319*t6402;
  t6628 = t6241*t6496;
  t6629 = t6615 + t6628;
  t6784 = t6241*t6402;
  t6796 = -1.*t6319*t6496;
  t6797 = t6784 + t6796;
  t6818 = Cos(var1[19]);
  t6824 = -1.*t6818;
  t6826 = 1. + t6824;
  t6831 = Sin(var1[19]);
  t6862 = -1.*t6596*t6629;
  t6876 = t6511*t6797;
  t6885 = t6862 + t6876;
  t6971 = t6511*t6629;
  t6977 = t6596*t6797;
  t6984 = t6971 + t6977;
  t1063 = -0.049*t1051;
  t1478 = -0.135*t1420;
  t1493 = 0. + t1063 + t1478;
  t1899 = 0.135*t1748;
  t2202 = 0. + t1899;
  t3383 = -1.*t3375;
  t3544 = 1. + t3383;
  t3623 = -0.135*t3544;
  t3693 = 0. + t3623;
  t4096 = -0.135*t1051;
  t4143 = 0.049*t1420;
  t4157 = 0. + t4096 + t4143;
  t7180 = t2291*t2632*t2298;
  t7199 = -1.*t141*t2896;
  t7208 = t7180 + t7199;
  t7215 = t141*t2291;
  t7228 = t2632*t2298*t2896;
  t7237 = t7215 + t7228;
  t4761 = -0.09*t4739;
  t4788 = 0.049*t4771;
  t4833 = 0. + t4761 + t4788;
  t7301 = t1748*t7208;
  t7314 = t3375*t7237;
  t7316 = t7301 + t7314;
  t5174 = -0.049*t4739;
  t5210 = -0.09*t4771;
  t5386 = 0. + t5174 + t5210;
  t5691 = -0.049*t5596;
  t5762 = -0.21*t5748;
  t5802 = 0. + t5691 + t5762;
  t7327 = t3375*t7208;
  t7341 = -1.*t1748*t7237;
  t7368 = t7327 + t7341;
  t7393 = t669*t354*t2632;
  t7433 = t1420*t7316;
  t7453 = t7393 + t7433;
  t6004 = -0.21*t5596;
  t6037 = 0.049*t5748;
  t6038 = 0. + t6004 + t6037;
  t6308 = -0.2707*t6279;
  t6359 = 0.0016*t6319;
  t6374 = 0. + t6308 + t6359;
  t7471 = t4771*t7368;
  t7481 = t4689*t7453;
  t7490 = t7471 + t7481;
  t7498 = t4689*t7368;
  t7509 = -1.*t4771*t7453;
  t7519 = t7498 + t7509;
  t6457 = -0.0016*t6279;
  t6458 = -0.2707*t6319;
  t6464 = 0. + t6457 + t6458;
  t6559 = 0.0184*t6556;
  t6609 = -0.7055*t6596;
  t6610 = 0. + t6559 + t6609;
  t7543 = -1.*t5748*t7490;
  t7550 = t5508*t7519;
  t7556 = t7543 + t7550;
  t7566 = t5508*t7490;
  t7569 = t5748*t7519;
  t7584 = t7566 + t7569;
  t6636 = -0.7055*t6556;
  t6686 = -0.0184*t6596;
  t6765 = 0. + t6636 + t6686;
  t6827 = -1.1135*t6826;
  t6832 = 0.0216*t6831;
  t6850 = 0. + t6827 + t6832;
  t7590 = t6319*t7556;
  t7601 = t6241*t7584;
  t7611 = t7590 + t7601;
  t7619 = t6241*t7556;
  t7633 = -1.*t6319*t7584;
  t7636 = t7619 + t7633;
  t6938 = -0.0216*t6826;
  t6947 = -1.1135*t6831;
  t6957 = 0. + t6938 + t6947;
  t7655 = -1.*t6596*t7611;
  t7664 = t6511*t7636;
  t7676 = t7655 + t7664;
  t7712 = t6511*t7611;
  t7717 = t6596*t7636;
  t7748 = t7712 + t7717;
  t7911 = t354*t2291*t1748;
  t7916 = t3375*t354*t2896;
  t7957 = t7911 + t7916;
  t7967 = t3375*t354*t2291;
  t7973 = -1.*t354*t1748*t2896;
  t7978 = t7967 + t7973;
  t8073 = -1.*t669*t2298;
  t8086 = t1420*t7957;
  t8094 = t8073 + t8086;
  t8111 = t4771*t7978;
  t8119 = t4689*t8094;
  t8156 = t8111 + t8119;
  t8180 = t4689*t7978;
  t8196 = -1.*t4771*t8094;
  t8199 = t8180 + t8196;
  t8210 = -1.*t5748*t8156;
  t8223 = t5508*t8199;
  t8273 = t8210 + t8223;
  t8290 = t5508*t8156;
  t8305 = t5748*t8199;
  t8306 = t8290 + t8305;
  t8319 = t6319*t8273;
  t8320 = t6241*t8306;
  t8329 = t8319 + t8320;
  t8347 = t6241*t8273;
  t8359 = -1.*t6319*t8306;
  t8360 = t8347 + t8359;
  t8381 = -1.*t6596*t8329;
  t8388 = t6511*t8360;
  t8390 = t8381 + t8388;
  t8396 = t6511*t8329;
  t8417 = t6596*t8360;
  t8428 = t8396 + t8417;

  p_output1(0)=0. + t2202*t3035 + t141*t1493*t354 + t3693*t3855 + t4157*t4595 + t4833*t4910 + t5386*t5461 + t5802*t5935 + t6038*t6129 + t6374*t6402 + t6464*t6496 + t6610*t6629 - 0.1305*(-1.*t141*t1420*t354 + t4595*t669) + t6765*t6797 + t6850*t6885 + t6957*t6984 - 0.0216*(t6831*t6885 + t6818*t6984) - 1.1135*(t6818*t6885 - 1.*t6831*t6984) + var1(0);
  p_output1(1)=0. + t1493*t2632*t354 + t2202*t7208 + t3693*t7237 + t4157*t7316 - 0.1305*(-1.*t1420*t2632*t354 + t669*t7316) + t4833*t7368 + t5386*t7453 + t5802*t7490 + t6038*t7519 + t6374*t7556 + t6464*t7584 + t6610*t7611 + t6765*t7636 + t6850*t7676 + t6957*t7748 - 0.0216*(t6831*t7676 + t6818*t7748) - 1.1135*(t6818*t7676 - 1.*t6831*t7748) + var1(1);
  p_output1(2)=0. - 1.*t1493*t2298 + t2202*t2291*t354 + t2896*t354*t3693 + t4157*t7957 - 0.1305*(t1420*t2298 + t669*t7957) + t4833*t7978 + t5386*t8094 + t5802*t8156 + t6038*t8199 + t6374*t8273 + t6464*t8306 + t6610*t8329 + t6765*t8360 + t6850*t8390 + t6957*t8428 - 0.0216*(t6831*t8390 + t6818*t8428) - 1.1135*(t6818*t8390 - 1.*t6831*t8428) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_toe_joint_right(const Eigen::Matrix<double,20,1> &var1)
//void p_toe_joint_right(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



