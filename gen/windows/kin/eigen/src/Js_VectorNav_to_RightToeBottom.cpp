/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:32:43 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_VectorNav_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,6,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t175;
  double t33;
  double t97;
  double t149;
  double t228;
  double t1412;
  double t1418;
  double t1452;
  double t291;
  double t363;
  double t379;
  double t1367;
  double t724;
  double t1755;
  double t1761;
  double t1902;
  double t1951;
  double t1972;
  double t1535;
  double t1589;
  double t1377;
  double t1078;
  double t1676;
  double t2122;
  double t3905;
  double t3954;
  double t4133;
  double t4275;
  double t1979;
  double t4151;
  double t4340;
  double t4449;
  double t4540;
  double t4547;
  double t4550;
  double t2737;
  double t3441;
  double t2740;
  double t2783;
  double t3044;
  double t3051;
  double t3494;
  double t3536;
  double t3552;
  double t3694;
  double t3716;
  double t4654;
  double t4659;
  double t5065;
  double t5068;
  double t5086;
  double t5188;
  double t5196;
  double t5276;
  double t5914;
  double t5932;
  double t5934;
  double t5966;
  double t4526;
  double t4563;
  double t5726;
  double t5765;
  double t5783;
  double t5956;
  double t5969;
  double t5985;
  double t5841;
  double t5846;
  double t5878;
  double t5994;
  double t5997;
  double t6021;
  double t4872;
  double t4928;
  double t4950;
  double t5489;
  double t5546;
  double t5571;
  double t6056;
  double t6065;
  double t6417;
  double t6421;
  double t6426;
  double t6389;
  double t6392;
  double t6402;
  double t6447;
  double t6456;
  double t6464;
  double t6480;
  double t5993;
  double t6040;
  double t6337;
  double t6350;
  double t6355;
  double t6471;
  double t6499;
  double t6507;
  double t6308;
  double t6319;
  double t6320;
  double t6517;
  double t6524;
  double t6526;
  double t6120;
  double t6161;
  double t6163;
  double t6075;
  double t6100;
  double t6102;
  double t6200;
  double t6206;
  double t6255;
  double t6266;
  double t6369;
  double t6375;
  double t6380;
  double t6381;
  double t6557;
  double t6568;
  double t6785;
  double t6788;
  double t6790;
  double t6806;
  double t6809;
  double t6817;
  double t6994;
  double t6995;
  double t6997;
  double t6999;
  double t6515;
  double t6541;
  double t6932;
  double t6935;
  double t6943;
  double t6998;
  double t7000;
  double t7001;
  double t6954;
  double t6956;
  double t6958;
  double t7017;
  double t7036;
  double t7039;
  double t6600;
  double t6633;
  double t6649;
  double t6582;
  double t6587;
  double t6590;
  double t6688;
  double t6690;
  double t6722;
  double t6735;
  double t6842;
  double t6843;
  double t6864;
  double t6868;
  t175 = Cos(var1[7]);
  t33 = Sin(var1[7]);
  t97 = -1.*t33;
  t149 = 0. + t97;
  t228 = 0. + t175;
  t1412 = Cos(var1[8]);
  t1418 = -1.*t175*t1412;
  t1452 = 0. + t1418;
  t291 = -1.*t175;
  t363 = 1. + t291;
  t379 = -0.135*t363;
  t1367 = Sin(var1[8]);
  t724 = -0.135*t33;
  t1755 = -1.*t1412;
  t1761 = 1. + t1755;
  t1902 = -0.135*t1761;
  t1951 = 0.049*t1367;
  t1972 = 0. + t1902 + t1951;
  t1535 = -1.*t1412*t33;
  t1589 = 0. + t1535;
  t1377 = 0. + t1367;
  t1078 = 0.049*t175;
  t1676 = -0.07996*t1452;
  t2122 = -1.*t33*t1972;
  t3905 = Cos(var1[9]);
  t3954 = -1.*t3905;
  t4133 = 1. + t3954;
  t4275 = Sin(var1[9]);
  t1979 = t175*t1972;
  t4151 = -0.049*t4133;
  t4340 = -0.09*t4275;
  t4449 = 0. + t4151 + t4340;
  t4540 = -0.09*t4133;
  t4547 = 0.049*t4275;
  t4550 = 0. + t4540 + t4547;
  t2737 = 0.03155*t1589;
  t3441 = 0.07996*t1377;
  t2740 = 0.049*t1761;
  t2783 = 0.135*t1367;
  t3044 = 0.135*t33;
  t3051 = t33*t1972;
  t3494 = -0.03155*t1452;
  t3536 = -0.049*t1761;
  t3552 = -0.135*t1367;
  t3694 = 0.135*t363;
  t3716 = -1.*t175*t1972;
  t4654 = t175*t1367*t4449;
  t4659 = -1.*t33*t4550;
  t5065 = t175*t3905*t1367;
  t5068 = -1.*t33*t4275;
  t5086 = t5065 + t5068;
  t5188 = -1.*t3905*t33;
  t5196 = -1.*t175*t1367*t4275;
  t5276 = t5188 + t5196;
  t5914 = Cos(var1[10]);
  t5932 = -1.*t5914;
  t5934 = 1. + t5932;
  t5966 = Sin(var1[10]);
  t4526 = -1.*t33*t1367*t4449;
  t4563 = -1.*t175*t4550;
  t5726 = t3905*t33*t1367;
  t5765 = t175*t4275;
  t5783 = t5726 + t5765;
  t5956 = -0.049*t5934;
  t5969 = -0.21*t5966;
  t5985 = 0. + t5956 + t5969;
  t5841 = t175*t3905;
  t5846 = -1.*t33*t1367*t4275;
  t5878 = t5841 + t5846;
  t5994 = -0.21*t5934;
  t5997 = 0.049*t5966;
  t6021 = 0. + t5994 + t5997;
  t4872 = -1.*t1412*t4449;
  t4928 = t33*t1367*t4449;
  t4950 = t175*t4550;
  t5489 = t1412*t4449;
  t5546 = -1.*t175*t1367*t4449;
  t5571 = t33*t4550;
  t6056 = -1.*t5783*t5985;
  t6065 = -1.*t5878*t6021;
  t6417 = t5914*t5783;
  t6421 = t5878*t5966;
  t6426 = t6417 + t6421;
  t6389 = t5914*t5878;
  t6392 = -1.*t5783*t5966;
  t6402 = t6389 + t6392;
  t6447 = Cos(var1[11]);
  t6456 = -1.*t6447;
  t6464 = 1. + t6456;
  t6480 = Sin(var1[11]);
  t5993 = t5086*t5985;
  t6040 = t5276*t6021;
  t6337 = t5914*t5086;
  t6350 = t5276*t5966;
  t6355 = t6337 + t6350;
  t6471 = -0.0016*t6464;
  t6499 = -0.2707*t6480;
  t6507 = 0. + t6471 + t6499;
  t6308 = t5914*t5276;
  t6319 = -1.*t5086*t5966;
  t6320 = t6308 + t6319;
  t6517 = -0.2707*t6464;
  t6524 = 0.0016*t6480;
  t6526 = 0. + t6517 + t6524;
  t6120 = t1412*t3905*t5914;
  t6161 = -1.*t1412*t4275*t5966;
  t6163 = t6120 + t6161;
  t6075 = -1.*t1412*t5914*t4275;
  t6100 = -1.*t1412*t3905*t5966;
  t6102 = t6075 + t6100;
  t6200 = -1.*t1412*t3905*t5985;
  t6206 = t1412*t4275*t6021;
  t6255 = t5783*t5985;
  t6266 = t5878*t6021;
  t6369 = t1412*t3905*t5985;
  t6375 = -1.*t1412*t4275*t6021;
  t6380 = -1.*t5086*t5985;
  t6381 = -1.*t5276*t6021;
  t6557 = t6355*t6507;
  t6568 = t6320*t6526;
  t6785 = t6447*t6355;
  t6788 = t6320*t6480;
  t6790 = t6785 + t6788;
  t6806 = t6447*t6320;
  t6809 = -1.*t6355*t6480;
  t6817 = t6806 + t6809;
  t6994 = Cos(var1[12]);
  t6995 = -1.*t6994;
  t6997 = 1. + t6995;
  t6999 = Sin(var1[12]);
  t6515 = -1.*t6426*t6507;
  t6541 = -1.*t6402*t6526;
  t6932 = t6447*t6426;
  t6935 = t6402*t6480;
  t6943 = t6932 + t6935;
  t6998 = 0.0184*t6997;
  t7000 = -0.7055*t6999;
  t7001 = 0. + t6998 + t7000;
  t6954 = t6447*t6402;
  t6956 = -1.*t6426*t6480;
  t6958 = t6954 + t6956;
  t7017 = -0.7055*t6997;
  t7036 = -0.0184*t6999;
  t7039 = 0. + t7017 + t7036;
  t6600 = t6447*t6102;
  t6633 = -1.*t6163*t6480;
  t6649 = t6600 + t6633;
  t6582 = t6447*t6163;
  t6587 = t6102*t6480;
  t6590 = t6582 + t6587;
  t6688 = -1.*t6163*t6507;
  t6690 = -1.*t6102*t6526;
  t6722 = t6426*t6507;
  t6735 = t6402*t6526;
  t6842 = t6163*t6507;
  t6843 = t6102*t6526;
  t6864 = -1.*t6355*t6507;
  t6868 = -1.*t6320*t6526;

  p_output1(0)=0;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=0;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=0;
  p_output1(9)=0;
  p_output1(10)=0;
  p_output1(11)=0;
  p_output1(12)=0;
  p_output1(13)=0;
  p_output1(14)=0;
  p_output1(15)=0;
  p_output1(16)=0;
  p_output1(17)=0;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=1.;
  p_output1(43)=0.;
  p_output1(44)=0.;
  p_output1(45)=0.;
  p_output1(46)=0.07996;
  p_output1(47)=0.135;
  p_output1(48)=0.;
  p_output1(49)=t149;
  p_output1(50)=t228;
  p_output1(51)=-0.135 - 0.07996*t149 + t175*(0. + t379) - 1.*t33*(0. + t724);
  p_output1(52)=0. + t1078 + 0.03155*t228;
  p_output1(53)=0. - 0.03155*t149 + 0.049*t33;
  p_output1(54)=t1377;
  p_output1(55)=t1452;
  p_output1(56)=t1589;
  p_output1(57)=0. - 0.09*t1412 + t1676 - 1.*t1412*t33*(0. + t1979 + t379) - 1.*t1412*t175*(0. + t2122 + t724);
  p_output1(58)=0. - 0.09*t1367*t175 + t2737 + t1367*(0. + t3044 + t3051) - 0.049*t33 - 1.*t1412*(0. + t2740 + t2783)*t33 + t3441;
  p_output1(59)=0. + t1078 - 0.09*t1367*t33 + t3494 - 1.*t1412*t175*(0. + t3536 + t3552) + t1367*(0. + t3694 + t3716);
  p_output1(60)=t1377;
  p_output1(61)=t1452;
  p_output1(62)=t1589;
  p_output1(63)=0. + t1676 - 0.21*t1412*t3905 - 0.049*t1412*t4275 - 1.*t1412*t33*(0. + t1979 + t379 + t4654 + t4659) - 1.*t1412*t175*(0. + t2122 + t4526 + t4563 + t724);
  p_output1(64)=0. + t2737 + t3441 - 1.*t1412*t33*(0. + t2740 + t2783 + t4872) + t1367*(0. + t3044 + t3051 + t4928 + t4950) - 0.21*t5086 + 0.049*t5276;
  p_output1(65)=0. + t3494 - 1.*t1412*t175*(0. + t3536 + t3552 + t5489) + t1367*(0. + t3694 + t3716 + t5546 + t5571) - 0.21*t5783 + 0.049*t5878;
  p_output1(66)=t1377;
  p_output1(67)=t1452;
  p_output1(68)=t1589;
  p_output1(69)=0. + t1676 - 1.*t1412*t33*(0. + t1979 + t379 + t4654 + t4659 + t5993 + t6040) + 0.0016*t6102 - 0.2707*t6163 - 1.*t1412*t175*(0. + t2122 + t4526 + t4563 + t6056 + t6065 + t724);
  p_output1(70)=0. + t2737 + t3441 - 1.*t1412*t33*(0. + t2740 + t2783 + t4872 + t6200 + t6206) + t1367*(0. + t3044 + t3051 + t4928 + t4950 + t6255 + t6266) + 0.0016*t6320 - 0.2707*t6355;
  p_output1(71)=0. + t3494 - 1.*t1412*t175*(0. + t3536 + t3552 + t5489 + t6369 + t6375) + t1367*(0. + t3694 + t3716 + t5546 + t5571 + t6380 + t6381) + 0.0016*t6402 - 0.2707*t6426;
  p_output1(72)=t1377;
  p_output1(73)=t1452;
  p_output1(74)=t1589;
  p_output1(75)=0. + t1676 - 1.*t1412*t33*(0. + t1979 + t379 + t4654 + t4659 + t5993 + t6040 + t6557 + t6568) - 0.7055*t6590 - 0.0184*t6649 - 1.*t1412*t175*(0. + t2122 + t4526 + t4563 + t6056 + t6065 + t6515 + t6541 + t724);
  p_output1(76)=0. + t2737 + t3441 - 1.*t1412*t33*(0. + t2740 + t2783 + t4872 + t6200 + t6206 + t6688 + t6690) + t1367*(0. + t3044 + t3051 + t4928 + t4950 + t6255 + t6266 + t6722 + t6735) - 0.7055*t6790 - 0.0184*t6817;
  p_output1(77)=0. + t3494 - 1.*t1412*t175*(0. + t3536 + t3552 + t5489 + t6369 + t6375 + t6842 + t6843) + t1367*(0. + t3694 + t3716 + t5546 + t5571 + t6380 + t6381 + t6864 + t6868) - 0.7055*t6943 - 0.0184*t6958;
  p_output1(78)=t1377;
  p_output1(79)=t1452;
  p_output1(80)=t1589;
  p_output1(81)=0. + t1676 + 0.0216*(t6649*t6994 - 1.*t6590*t6999) - 1.1135*(t6590*t6994 + t6649*t6999) - 1.*t1412*t33*(0. + t1979 + t379 + t4654 + t4659 + t5993 + t6040 + t6557 + t6568 + t6790*t7001 + t6817*t7039) - 1.*t1412*t175*(0. + t2122 + t4526 + t4563 + t6056 + t6065 + t6515 + t6541 - 1.*t6943*t7001 - 1.*t6958*t7039 + t724);
  p_output1(82)=0. + t2737 + t3441 + 0.0216*(t6817*t6994 - 1.*t6790*t6999) - 1.1135*(t6790*t6994 + t6817*t6999) - 1.*t1412*t33*(0. + t2740 + t2783 + t4872 + t6200 + t6206 + t6688 + t6690 - 1.*t6590*t7001 - 1.*t6649*t7039) + t1367*(0. + t3044 + t3051 + t4928 + t4950 + t6255 + t6266 + t6722 + t6735 + t6943*t7001 + t6958*t7039);
  p_output1(83)=0. + t3494 + 0.0216*(t6958*t6994 - 1.*t6943*t6999) - 1.1135*(t6943*t6994 + t6958*t6999) - 1.*t1412*t175*(0. + t3536 + t3552 + t5489 + t6369 + t6375 + t6842 + t6843 + t6590*t7001 + t6649*t7039) + t1367*(0. + t3694 + t3716 + t5546 + t5571 + t6380 + t6381 + t6864 + t6868 - 1.*t6790*t7001 - 1.*t6817*t7039);
}


       
Eigen::Matrix<double,6,14> Js_VectorNav_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void Js_VectorNav_to_RightToeBottom(Eigen::Matrix<double,6,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,6,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



