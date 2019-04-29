/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:22:06 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_toe_joint_left.h"

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
  double t376;
  double t536;
  double t694;
  double t594;
  double t715;
  double t509;
  double t928;
  double t995;
  double t1028;
  double t691;
  double t749;
  double t884;
  double t1058;
  double t362;
  double t1295;
  double t1299;
  double t1304;
  double t406;
  double t410;
  double t482;
  double t909;
  double t1064;
  double t1096;
  double t1178;
  double t1192;
  double t1227;
  double t1315;
  double t1382;
  double t1243;
  double t1328;
  double t1331;
  double t248;
  double t1406;
  double t1419;
  double t1427;
  double t1550;
  double t1335;
  double t1459;
  double t1460;
  double t179;
  double t1575;
  double t1586;
  double t1626;
  double t1726;
  double t1510;
  double t1637;
  double t1676;
  double t157;
  double t1729;
  double t1754;
  double t1764;
  double t66;
  double t2053;
  double t2054;
  double t2074;
  double t2008;
  double t2028;
  double t2046;
  double t2191;
  double t2253;
  double t2258;
  double t2007;
  double t2047;
  double t2089;
  double t2107;
  double t2108;
  double t2112;
  double t2161;
  double t2259;
  double t2279;
  double t2344;
  double t2352;
  double t2370;
  double t2324;
  double t2389;
  double t2407;
  double t2423;
  double t2549;
  double t2604;
  double t1824;
  double t2410;
  double t2606;
  double t2649;
  double t2666;
  double t2687;
  double t2707;
  double t2994;
  double t2998;
  double t3003;
  double t2901;
  double t2916;
  double t2945;
  double t2950;
  double t2953;
  double t2954;
  double t2967;
  double t3029;
  double t3068;
  double t3110;
  double t3118;
  double t3121;
  double t3088;
  double t3133;
  double t3134;
  double t3291;
  double t3295;
  double t3296;
  double t3274;
  double t3299;
  double t3301;
  double t3308;
  double t3338;
  double t3340;
  double t1702;
  double t1771;
  double t1776;
  double t1841;
  double t1880;
  double t1943;
  double t2664;
  double t2710;
  double t2745;
  double t2768;
  double t2780;
  double t2823;
  double t3303;
  double t3355;
  double t3358;
  double t3403;
  double t3469;
  double t3478;
  double t4119;
  double t4140;
  double t4448;
  double t4462;
  double t4740;
  double t4746;
  double t4939;
  double t4976;
  double t5092;
  double t5102;
  double t5195;
  double t5201;
  double t3534;
  double t3536;
  double t3574;
  double t3942;
  double t3956;
  double t3976;
  double t3978;
  double t4066;
  double t4114;
  double t4158;
  double t4222;
  double t4284;
  double t4306;
  double t4309;
  double t4336;
  double t4563;
  double t4580;
  double t4594;
  double t4666;
  double t4669;
  double t4676;
  double t4755;
  double t4761;
  double t4766;
  double t4804;
  double t4884;
  double t4917;
  double t5012;
  double t5017;
  double t5027;
  double t5062;
  double t5070;
  double t5074;
  double t5110;
  double t5127;
  double t5135;
  double t5150;
  double t5157;
  double t5170;
  double t5210;
  double t5216;
  double t5242;
  double t5262;
  double t5264;
  double t5289;
  double t3623;
  double t3646;
  double t3679;
  double t3695;
  double t3721;
  double t3727;
  t376 = Cos(var1[3]);
  t536 = Cos(var1[5]);
  t694 = Sin(var1[4]);
  t594 = Sin(var1[3]);
  t715 = Sin(var1[5]);
  t509 = Cos(var1[6]);
  t928 = t376*t536*t694;
  t995 = t594*t715;
  t1028 = t928 + t995;
  t691 = -1.*t536*t594;
  t749 = t376*t694*t715;
  t884 = t691 + t749;
  t1058 = Sin(var1[6]);
  t362 = Cos(var1[8]);
  t1295 = t509*t1028;
  t1299 = -1.*t884*t1058;
  t1304 = t1295 + t1299;
  t406 = Cos(var1[4]);
  t410 = Cos(var1[7]);
  t482 = t376*t406*t410;
  t909 = t509*t884;
  t1064 = t1028*t1058;
  t1096 = t909 + t1064;
  t1178 = Sin(var1[7]);
  t1192 = t1096*t1178;
  t1227 = t482 + t1192;
  t1315 = Sin(var1[8]);
  t1382 = Cos(var1[9]);
  t1243 = t362*t1227;
  t1328 = t1304*t1315;
  t1331 = t1243 + t1328;
  t248 = Sin(var1[9]);
  t1406 = t362*t1304;
  t1419 = -1.*t1227*t1315;
  t1427 = t1406 + t1419;
  t1550 = Cos(var1[10]);
  t1335 = -1.*t248*t1331;
  t1459 = t1382*t1427;
  t1460 = t1335 + t1459;
  t179 = Sin(var1[10]);
  t1575 = t1382*t1331;
  t1586 = t248*t1427;
  t1626 = t1575 + t1586;
  t1726 = Cos(var1[11]);
  t1510 = t179*t1460;
  t1637 = t1550*t1626;
  t1676 = t1510 + t1637;
  t157 = Sin(var1[11]);
  t1729 = t1550*t1460;
  t1754 = -1.*t179*t1626;
  t1764 = t1729 + t1754;
  t66 = Cos(var1[12]);
  t2053 = t536*t594*t694;
  t2054 = -1.*t376*t715;
  t2074 = t2053 + t2054;
  t2008 = t376*t536;
  t2028 = t594*t694*t715;
  t2046 = t2008 + t2028;
  t2191 = t509*t2074;
  t2253 = -1.*t2046*t1058;
  t2258 = t2191 + t2253;
  t2007 = t406*t410*t594;
  t2047 = t509*t2046;
  t2089 = t2074*t1058;
  t2107 = t2047 + t2089;
  t2108 = t2107*t1178;
  t2112 = t2007 + t2108;
  t2161 = t362*t2112;
  t2259 = t2258*t1315;
  t2279 = t2161 + t2259;
  t2344 = t362*t2258;
  t2352 = -1.*t2112*t1315;
  t2370 = t2344 + t2352;
  t2324 = -1.*t248*t2279;
  t2389 = t1382*t2370;
  t2407 = t2324 + t2389;
  t2423 = t1382*t2279;
  t2549 = t248*t2370;
  t2604 = t2423 + t2549;
  t1824 = Sin(var1[12]);
  t2410 = t179*t2407;
  t2606 = t1550*t2604;
  t2649 = t2410 + t2606;
  t2666 = t1550*t2407;
  t2687 = -1.*t179*t2604;
  t2707 = t2666 + t2687;
  t2994 = t406*t536*t509;
  t2998 = -1.*t406*t715*t1058;
  t3003 = t2994 + t2998;
  t2901 = -1.*t410*t694;
  t2916 = t406*t509*t715;
  t2945 = t406*t536*t1058;
  t2950 = t2916 + t2945;
  t2953 = t2950*t1178;
  t2954 = t2901 + t2953;
  t2967 = t362*t2954;
  t3029 = t3003*t1315;
  t3068 = t2967 + t3029;
  t3110 = t362*t3003;
  t3118 = -1.*t2954*t1315;
  t3121 = t3110 + t3118;
  t3088 = -1.*t248*t3068;
  t3133 = t1382*t3121;
  t3134 = t3088 + t3133;
  t3291 = t1382*t3068;
  t3295 = t248*t3121;
  t3296 = t3291 + t3295;
  t3274 = t179*t3134;
  t3299 = t1550*t3296;
  t3301 = t3274 + t3299;
  t3308 = t1550*t3134;
  t3338 = -1.*t179*t3296;
  t3340 = t3308 + t3338;
  t1702 = -1.*t157*t1676;
  t1771 = t1726*t1764;
  t1776 = t1702 + t1771;
  t1841 = t1726*t1676;
  t1880 = t157*t1764;
  t1943 = t1841 + t1880;
  t2664 = -1.*t157*t2649;
  t2710 = t1726*t2707;
  t2745 = t2664 + t2710;
  t2768 = t1726*t2649;
  t2780 = t157*t2707;
  t2823 = t2768 + t2780;
  t3303 = -1.*t157*t3301;
  t3355 = t1726*t3340;
  t3358 = t3303 + t3355;
  t3403 = t1726*t3301;
  t3469 = t157*t3340;
  t3478 = t3403 + t3469;
  t4119 = -1.*t410;
  t4140 = 1. + t4119;
  t4448 = -1.*t362;
  t4462 = 1. + t4448;
  t4740 = -1.*t1382;
  t4746 = 1. + t4740;
  t4939 = -1.*t1550;
  t4976 = 1. + t4939;
  t5092 = -1.*t1726;
  t5102 = 1. + t5092;
  t5195 = -1.*t66;
  t5201 = 1. + t5195;
  t3534 = t1824*t1776;
  t3536 = t66*t1943;
  t3574 = t3534 + t3536;
  t3942 = -1.*t509;
  t3956 = 1. + t3942;
  t3976 = 0.135*t3956;
  t3978 = 0. + t3976;
  t4066 = -0.135*t1058;
  t4114 = 0. + t4066;
  t4158 = 0.135*t4140;
  t4222 = 0.049*t1178;
  t4284 = 0. + t4158 + t4222;
  t4306 = -0.049*t4140;
  t4309 = 0.135*t1178;
  t4336 = 0. + t4306 + t4309;
  t4563 = -0.049*t4462;
  t4580 = -0.09*t1315;
  t4594 = 0. + t4563 + t4580;
  t4666 = -0.09*t4462;
  t4669 = 0.049*t1315;
  t4676 = 0. + t4666 + t4669;
  t4755 = -0.049*t4746;
  t4761 = -0.21*t248;
  t4766 = 0. + t4755 + t4761;
  t4804 = -0.21*t4746;
  t4884 = 0.049*t248;
  t4917 = 0. + t4804 + t4884;
  t5012 = -0.2707*t4976;
  t5017 = 0.0016*t179;
  t5027 = 0. + t5012 + t5017;
  t5062 = -0.0016*t4976;
  t5070 = -0.2707*t179;
  t5074 = 0. + t5062 + t5070;
  t5110 = 0.0184*t5102;
  t5127 = -0.7055*t157;
  t5135 = 0. + t5110 + t5127;
  t5150 = -0.7055*t5102;
  t5157 = -0.0184*t157;
  t5170 = 0. + t5150 + t5157;
  t5210 = -1.1135*t5201;
  t5216 = 0.0216*t1824;
  t5242 = 0. + t5210 + t5216;
  t5262 = -0.0216*t5201;
  t5264 = -1.1135*t1824;
  t5289 = 0. + t5262 + t5264;
  t3623 = t1824*t2745;
  t3646 = t66*t2823;
  t3679 = t3623 + t3646;
  t3695 = t1824*t3358;
  t3721 = t66*t3478;
  t3727 = t3695 + t3721;

  p_output1(0)=t1824*t1943 - 1.*t1776*t66;
  p_output1(1)=t1824*t2823 - 1.*t2745*t66;
  p_output1(2)=t1824*t3478 - 1.*t3358*t66;
  p_output1(3)=0.;
  p_output1(4)=t3574;
  p_output1(5)=t3679;
  p_output1(6)=t3727;
  p_output1(7)=0.;
  p_output1(8)=t1178*t376*t406 - 1.*t1096*t410;
  p_output1(9)=-1.*t2107*t410 + t1178*t406*t594;
  p_output1(10)=-1.*t2950*t410 - 1.*t1178*t694;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.0216*t3574 + 0.1305*(-1.*t1178*t376*t406 + t1096*t410) + t1028*t4114 + t1096*t4284 + t376*t406*t4336 + t1227*t4594 + t1304*t4676 + t1331*t4766 + t1427*t4917 + t1460*t5027 + t1626*t5074 + t1676*t5135 + t1764*t5170 + t1776*t5242 + t1943*t5289 - 1.1135*(-1.*t1824*t1943 + t1776*t66) + t3978*t884 + var1(0);
  p_output1(13)=0. - 0.0216*t3679 + t2046*t3978 + t2074*t4114 + t2107*t4284 + t2112*t4594 + t2258*t4676 + t2279*t4766 + t2370*t4917 + t2407*t5027 + t2604*t5074 + t2649*t5135 + t2707*t5170 + t2745*t5242 + t2823*t5289 + t406*t4336*t594 + 0.1305*(t2107*t410 - 1.*t1178*t406*t594) - 1.1135*(-1.*t1824*t2823 + t2745*t66) + var1(1);
  p_output1(14)=0. - 0.0216*t3727 + t2950*t4284 + t2954*t4594 + t3003*t4676 + t3068*t4766 + t3121*t4917 + t3134*t5027 + t3296*t5074 + t3301*t5135 + t3340*t5170 + t3358*t5242 + t3478*t5289 + t406*t4114*t536 - 1.1135*(-1.*t1824*t3478 + t3358*t66) - 1.*t4336*t694 + 0.1305*(t2950*t410 + t1178*t694) + t3978*t406*t715 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_toe_joint_left(const Eigen::Matrix<double,20,1> &var1)
//void H_toe_joint_left(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



