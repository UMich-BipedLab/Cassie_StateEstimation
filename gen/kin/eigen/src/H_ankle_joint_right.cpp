/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:35 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_ankle_joint_right.h"

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
  double t640;
  double t814;
  double t639;
  double t689;
  double t848;
  double t1185;
  double t710;
  double t877;
  double t958;
  double t503;
  double t1230;
  double t1259;
  double t1289;
  double t1379;
  double t1056;
  double t1312;
  double t1351;
  double t438;
  double t1399;
  double t1411;
  double t1459;
  double t1488;
  double t1538;
  double t1546;
  double t1573;
  double t1601;
  double t1651;
  double t1743;
  double t1352;
  double t1660;
  double t1730;
  double t366;
  double t1765;
  double t1793;
  double t1873;
  double t2035;
  double t1737;
  double t1911;
  double t1968;
  double t299;
  double t2038;
  double t2039;
  double t2079;
  double t175;
  double t2440;
  double t2445;
  double t2480;
  double t2539;
  double t2617;
  double t2664;
  double t2512;
  double t2681;
  double t2741;
  double t2744;
  double t2765;
  double t2775;
  double t2801;
  double t2802;
  double t2823;
  double t2743;
  double t2884;
  double t2899;
  double t2948;
  double t2966;
  double t2969;
  double t2221;
  double t2946;
  double t2980;
  double t2984;
  double t3067;
  double t3072;
  double t3074;
  double t3243;
  double t3336;
  double t3364;
  double t3418;
  double t3450;
  double t3472;
  double t3486;
  double t3514;
  double t3537;
  double t3409;
  double t3550;
  double t3567;
  double t3599;
  double t3606;
  double t3625;
  double t3595;
  double t3636;
  double t3642;
  double t3758;
  double t3762;
  double t3771;
  double t1987;
  double t2084;
  double t2122;
  double t2254;
  double t2267;
  double t2268;
  double t3065;
  double t3080;
  double t3125;
  double t3145;
  double t3147;
  double t3148;
  double t3669;
  double t3776;
  double t3782;
  double t3797;
  double t3810;
  double t3822;
  double t4462;
  double t4504;
  double t4890;
  double t4902;
  double t5155;
  double t5176;
  double t5484;
  double t5503;
  double t5713;
  double t5724;
  double t3853;
  double t3862;
  double t3874;
  double t4505;
  double t4521;
  double t4534;
  double t4639;
  double t4640;
  double t4658;
  double t4666;
  double t4736;
  double t4750;
  double t4776;
  double t4793;
  double t4807;
  double t4906;
  double t4932;
  double t4984;
  double t5096;
  double t5123;
  double t5134;
  double t5207;
  double t5212;
  double t5213;
  double t5411;
  double t5467;
  double t5480;
  double t5506;
  double t5594;
  double t5595;
  double t5625;
  double t5687;
  double t5700;
  double t5745;
  double t5765;
  double t5774;
  double t5798;
  double t5816;
  double t5818;
  double t3982;
  double t3988;
  double t4179;
  double t4184;
  double t4196;
  double t4224;
  t640 = Cos(var1[5]);
  t814 = Sin(var1[3]);
  t639 = Cos(var1[3]);
  t689 = Sin(var1[4]);
  t848 = Sin(var1[5]);
  t1185 = Sin(var1[13]);
  t710 = t639*t640*t689;
  t877 = t814*t848;
  t958 = t710 + t877;
  t503 = Cos(var1[13]);
  t1230 = -1.*t640*t814;
  t1259 = t639*t689*t848;
  t1289 = t1230 + t1259;
  t1379 = Cos(var1[15]);
  t1056 = t503*t958;
  t1312 = -1.*t1185*t1289;
  t1351 = t1056 + t1312;
  t438 = Sin(var1[15]);
  t1399 = Cos(var1[14]);
  t1411 = Cos(var1[4]);
  t1459 = t1399*t639*t1411;
  t1488 = Sin(var1[14]);
  t1538 = t1185*t958;
  t1546 = t503*t1289;
  t1573 = t1538 + t1546;
  t1601 = t1488*t1573;
  t1651 = t1459 + t1601;
  t1743 = Cos(var1[16]);
  t1352 = t438*t1351;
  t1660 = t1379*t1651;
  t1730 = t1352 + t1660;
  t366 = Sin(var1[16]);
  t1765 = t1379*t1351;
  t1793 = -1.*t438*t1651;
  t1873 = t1765 + t1793;
  t2035 = Cos(var1[17]);
  t1737 = -1.*t366*t1730;
  t1911 = t1743*t1873;
  t1968 = t1737 + t1911;
  t299 = Sin(var1[17]);
  t2038 = t1743*t1730;
  t2039 = t366*t1873;
  t2079 = t2038 + t2039;
  t175 = Sin(var1[18]);
  t2440 = t640*t814*t689;
  t2445 = -1.*t639*t848;
  t2480 = t2440 + t2445;
  t2539 = t639*t640;
  t2617 = t814*t689*t848;
  t2664 = t2539 + t2617;
  t2512 = t503*t2480;
  t2681 = -1.*t1185*t2664;
  t2741 = t2512 + t2681;
  t2744 = t1399*t1411*t814;
  t2765 = t1185*t2480;
  t2775 = t503*t2664;
  t2801 = t2765 + t2775;
  t2802 = t1488*t2801;
  t2823 = t2744 + t2802;
  t2743 = t438*t2741;
  t2884 = t1379*t2823;
  t2899 = t2743 + t2884;
  t2948 = t1379*t2741;
  t2966 = -1.*t438*t2823;
  t2969 = t2948 + t2966;
  t2221 = Cos(var1[18]);
  t2946 = -1.*t366*t2899;
  t2980 = t1743*t2969;
  t2984 = t2946 + t2980;
  t3067 = t1743*t2899;
  t3072 = t366*t2969;
  t3074 = t3067 + t3072;
  t3243 = t503*t1411*t640;
  t3336 = -1.*t1411*t1185*t848;
  t3364 = t3243 + t3336;
  t3418 = -1.*t1399*t689;
  t3450 = t1411*t640*t1185;
  t3472 = t503*t1411*t848;
  t3486 = t3450 + t3472;
  t3514 = t1488*t3486;
  t3537 = t3418 + t3514;
  t3409 = t438*t3364;
  t3550 = t1379*t3537;
  t3567 = t3409 + t3550;
  t3599 = t1379*t3364;
  t3606 = -1.*t438*t3537;
  t3625 = t3599 + t3606;
  t3595 = -1.*t366*t3567;
  t3636 = t1743*t3625;
  t3642 = t3595 + t3636;
  t3758 = t1743*t3567;
  t3762 = t366*t3625;
  t3771 = t3758 + t3762;
  t1987 = t299*t1968;
  t2084 = t2035*t2079;
  t2122 = t1987 + t2084;
  t2254 = t2035*t1968;
  t2267 = -1.*t299*t2079;
  t2268 = t2254 + t2267;
  t3065 = t299*t2984;
  t3080 = t2035*t3074;
  t3125 = t3065 + t3080;
  t3145 = t2035*t2984;
  t3147 = -1.*t299*t3074;
  t3148 = t3145 + t3147;
  t3669 = t299*t3642;
  t3776 = t2035*t3771;
  t3782 = t3669 + t3776;
  t3797 = t2035*t3642;
  t3810 = -1.*t299*t3771;
  t3822 = t3797 + t3810;
  t4462 = -1.*t1399;
  t4504 = 1. + t4462;
  t4890 = -1.*t1379;
  t4902 = 1. + t4890;
  t5155 = -1.*t1743;
  t5176 = 1. + t5155;
  t5484 = -1.*t2035;
  t5503 = 1. + t5484;
  t5713 = -1.*t2221;
  t5724 = 1. + t5713;
  t3853 = t2221*t2122;
  t3862 = t175*t2268;
  t3874 = t3853 + t3862;
  t4505 = -0.049*t4504;
  t4521 = -0.135*t1488;
  t4534 = 0. + t4505 + t4521;
  t4639 = 0.135*t1185;
  t4640 = 0. + t4639;
  t4658 = -1.*t503;
  t4666 = 1. + t4658;
  t4736 = -0.135*t4666;
  t4750 = 0. + t4736;
  t4776 = -0.135*t4504;
  t4793 = 0.049*t1488;
  t4807 = 0. + t4776 + t4793;
  t4906 = -0.09*t4902;
  t4932 = 0.049*t438;
  t4984 = 0. + t4906 + t4932;
  t5096 = -0.049*t4902;
  t5123 = -0.09*t438;
  t5134 = 0. + t5096 + t5123;
  t5207 = -0.049*t5176;
  t5212 = -0.21*t366;
  t5213 = 0. + t5207 + t5212;
  t5411 = -0.21*t5176;
  t5467 = 0.049*t366;
  t5480 = 0. + t5411 + t5467;
  t5506 = -0.2707*t5503;
  t5594 = 0.0016*t299;
  t5595 = 0. + t5506 + t5594;
  t5625 = -0.0016*t5503;
  t5687 = -0.2707*t299;
  t5700 = 0. + t5625 + t5687;
  t5745 = 0.0184*t5724;
  t5765 = -0.7055*t175;
  t5774 = 0. + t5745 + t5765;
  t5798 = -0.7055*t5724;
  t5816 = -0.0184*t175;
  t5818 = 0. + t5798 + t5816;
  t3982 = t2221*t3125;
  t3988 = t175*t3148;
  t4179 = t3982 + t3988;
  t4184 = t2221*t3782;
  t4196 = t175*t3822;
  t4224 = t4184 + t4196;

  p_output1(0)=t175*t2122 - 1.*t2221*t2268;
  p_output1(1)=t175*t3125 - 1.*t2221*t3148;
  p_output1(2)=t175*t3782 - 1.*t2221*t3822;
  p_output1(3)=0.;
  p_output1(4)=t3874;
  p_output1(5)=t4179;
  p_output1(6)=t4224;
  p_output1(7)=0.;
  p_output1(8)=-1.*t1399*t1573 + t1411*t1488*t639;
  p_output1(9)=-1.*t1399*t2801 + t1411*t1488*t814;
  p_output1(10)=-1.*t1399*t3486 - 1.*t1488*t689;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.7055*(-1.*t175*t2122 + t2221*t2268) + 0.0184*t3874 + t1289*t4750 + t1573*t4807 + t1351*t4984 + t1651*t5134 + t1730*t5213 + t1873*t5480 + t1968*t5595 + t2079*t5700 + t2122*t5774 + t2268*t5818 + t1411*t4534*t639 - 0.1305*(t1399*t1573 - 1.*t1411*t1488*t639) + t4640*t958 + var1(0);
  p_output1(13)=0. - 0.7055*(-1.*t175*t3125 + t2221*t3148) + 0.0184*t4179 + t2480*t4640 + t2664*t4750 + t2801*t4807 + t2741*t4984 + t2823*t5134 + t2899*t5213 + t2969*t5480 + t2984*t5595 + t3074*t5700 + t3125*t5774 + t3148*t5818 + t1411*t4534*t814 - 0.1305*(t1399*t2801 - 1.*t1411*t1488*t814) + var1(1);
  p_output1(14)=0. - 0.7055*(-1.*t175*t3782 + t2221*t3822) + 0.0184*t4224 + t3486*t4807 + t3364*t4984 + t3537*t5134 + t3567*t5213 + t3625*t5480 + t3642*t5595 + t3771*t5700 + t3782*t5774 + t3822*t5818 + t1411*t4640*t640 - 1.*t4534*t689 - 0.1305*(t1399*t3486 + t1488*t689) + t1411*t4750*t848 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_ankle_joint_right(const Eigen::Matrix<double,20,1> &var1)
//void H_ankle_joint_right(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



