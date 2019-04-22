/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:13 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_flexion_left.h"

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
static void output1(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t705;
  double t1128;
  double t1150;
  double t507;
  double t1154;
  double t41;
  double t871;
  double t1228;
  double t1249;
  double t1289;
  double t1297;
  double t1354;
  double t1444;
  double t1805;
  double t1820;
  double t1843;
  double t2022;
  double t1520;
  double t1676;
  double t1787;
  double t2847;
  double t4141;
  double t4461;
  double t4485;
  double t4709;
  double t3539;
  double t3856;
  double t4091;
  double t4920;
  double t4928;
  double t4946;
  double t227;
  double t379;
  double t426;
  double t455;
  double t1485;
  double t1504;
  double t5234;
  double t5249;
  double t5301;
  double t5399;
  double t5409;
  double t5418;
  double t1873;
  double t2239;
  double t2773;
  double t3159;
  double t3165;
  double t3210;
  double t5429;
  double t5462;
  double t5466;
  double t4559;
  double t4784;
  double t4846;
  double t4992;
  double t5032;
  double t5058;
  double t5521;
  double t5559;
  double t5561;
  double t5588;
  double t5607;
  double t5615;
  double t5868;
  double t5874;
  double t5876;
  double t5976;
  double t5983;
  double t5986;
  double t6045;
  double t6060;
  double t6064;
  double t6139;
  double t6147;
  double t6151;
  double t6215;
  double t6219;
  double t6220;
  double t6223;
  double t6228;
  double t6233;
  double t6306;
  double t6324;
  double t6328;
  double t6367;
  double t6378;
  double t6381;
  double t6394;
  double t6410;
  double t6415;
  double t6480;
  double t6481;
  double t6482;
  double t6485;
  double t6499;
  double t6508;
  double t6522;
  double t6527;
  double t6567;
  double t6568;
  double t6571;
  double t6575;
  double t6591;
  double t6592;
  double t6605;
  double t6606;
  double t6667;
  double t6689;
  double t6699;
  double t6716;
  double t6739;
  double t6741;
  double t6825;
  double t6827;
  double t6917;
  double t6920;
  double t6921;
  double t6940;
  double t6946;
  double t6963;
  double t6964;
  double t6700;
  double t6704;
  double t6714;
  double t6746;
  double t6747;
  double t6752;
  double t6760;
  double t6770;
  double t6786;
  double t6789;
  double t6791;
  double t6794;
  double t5496;
  double t5506;
  double t5510;
  double t7029;
  double t7034;
  double t7044;
  double t7048;
  double t7051;
  double t7098;
  double t7107;
  double t7110;
  double t7115;
  double t7117;
  double t7126;
  double t7176;
  double t7180;
  double t7181;
  double t7189;
  double t7194;
  double t7195;
  double t5690;
  double t5767;
  double t5837;
  double t7234;
  double t7235;
  double t7244;
  double t7253;
  double t7255;
  double t7295;
  double t7302;
  double t7304;
  double t7363;
  double t7365;
  double t7368;
  t705 = Cos(var1[5]);
  t1128 = Sin(var1[3]);
  t1150 = Sin(var1[4]);
  t507 = Cos(var1[3]);
  t1154 = Sin(var1[5]);
  t41 = Cos(var1[6]);
  t871 = -1.*t507*t705;
  t1228 = -1.*t1128*t1150*t1154;
  t1249 = t871 + t1228;
  t1289 = -1.*t705*t1128*t1150;
  t1297 = t507*t1154;
  t1354 = t1289 + t1297;
  t1444 = Sin(var1[6]);
  t1805 = Cos(var1[7]);
  t1820 = -1.*t1805;
  t1843 = 1. + t1820;
  t2022 = Sin(var1[7]);
  t1520 = t41*t1249;
  t1676 = t1354*t1444;
  t1787 = t1520 + t1676;
  t2847 = Cos(var1[4]);
  t4141 = Cos(var1[8]);
  t4461 = -1.*t4141;
  t4485 = 1. + t4461;
  t4709 = Sin(var1[8]);
  t3539 = -1.*t2847*t1805*t1128;
  t3856 = t1787*t2022;
  t4091 = t3539 + t3856;
  t4920 = t41*t1354;
  t4928 = -1.*t1249*t1444;
  t4946 = t4920 + t4928;
  t227 = -1.*t41;
  t379 = 1. + t227;
  t426 = 0.135*t379;
  t455 = 0. + t426;
  t1485 = -0.135*t1444;
  t1504 = 0. + t1485;
  t5234 = -1.*t705*t1128;
  t5249 = t507*t1150*t1154;
  t5301 = t5234 + t5249;
  t5399 = t507*t705*t1150;
  t5409 = t1128*t1154;
  t5418 = t5399 + t5409;
  t1873 = 0.135*t1843;
  t2239 = 0.049*t2022;
  t2773 = 0. + t1873 + t2239;
  t3159 = -0.049*t1843;
  t3165 = 0.135*t2022;
  t3210 = 0. + t3159 + t3165;
  t5429 = t41*t5301;
  t5462 = t5418*t1444;
  t5466 = t5429 + t5462;
  t4559 = -0.049*t4485;
  t4784 = -0.09*t4709;
  t4846 = 0. + t4559 + t4784;
  t4992 = -0.09*t4485;
  t5032 = 0.049*t4709;
  t5058 = 0. + t4992 + t5032;
  t5521 = t507*t2847*t1805;
  t5559 = t5466*t2022;
  t5561 = t5521 + t5559;
  t5588 = t41*t5418;
  t5607 = -1.*t5301*t1444;
  t5615 = t5588 + t5607;
  t5868 = t507*t2847*t41*t1154;
  t5874 = t507*t2847*t705*t1444;
  t5876 = t5868 + t5874;
  t5976 = -1.*t507*t1805*t1150;
  t5983 = t5876*t2022;
  t5986 = t5976 + t5983;
  t6045 = t507*t2847*t705*t41;
  t6060 = -1.*t507*t2847*t1154*t1444;
  t6064 = t6045 + t6060;
  t6139 = t2847*t41*t1128*t1154;
  t6147 = t2847*t705*t1128*t1444;
  t6151 = t6139 + t6147;
  t6215 = -1.*t1805*t1128*t1150;
  t6219 = t6151*t2022;
  t6220 = t6215 + t6219;
  t6223 = t2847*t705*t41*t1128;
  t6228 = -1.*t2847*t1128*t1154*t1444;
  t6233 = t6223 + t6228;
  t6306 = -1.*t41*t1150*t1154;
  t6324 = -1.*t705*t1150*t1444;
  t6328 = t6306 + t6324;
  t6367 = -1.*t2847*t1805;
  t6378 = t6328*t2022;
  t6381 = t6367 + t6378;
  t6394 = -1.*t705*t41*t1150;
  t6410 = t1150*t1154*t1444;
  t6415 = t6394 + t6410;
  t6480 = t705*t1128;
  t6481 = -1.*t507*t1150*t1154;
  t6482 = t6480 + t6481;
  t6485 = t6482*t1444;
  t6499 = t5588 + t6485;
  t6508 = t41*t6482;
  t6522 = -1.*t5418*t1444;
  t6527 = t6508 + t6522;
  t6567 = t705*t1128*t1150;
  t6568 = -1.*t507*t1154;
  t6571 = t6567 + t6568;
  t6575 = t41*t6571;
  t6591 = t1249*t1444;
  t6592 = t6575 + t6591;
  t6605 = -1.*t6571*t1444;
  t6606 = t1520 + t6605;
  t6667 = t2847*t705*t41;
  t6689 = -1.*t2847*t1154*t1444;
  t6699 = t6667 + t6689;
  t6716 = -1.*t2847*t41*t1154;
  t6739 = -1.*t2847*t705*t1444;
  t6741 = t6716 + t6739;
  t6825 = -1.*t41*t5301;
  t6827 = t6825 + t6522;
  t6917 = t507*t705;
  t6920 = t1128*t1150*t1154;
  t6921 = t6917 + t6920;
  t6940 = -1.*t6921*t1444;
  t6946 = t6575 + t6940;
  t6963 = -1.*t41*t6921;
  t6964 = t6963 + t6605;
  t6700 = 0.135*t1805*t6699;
  t6704 = t6699*t2773;
  t6714 = t6699*t2022*t4846;
  t6746 = t6741*t5058;
  t6747 = t4141*t6699*t2022;
  t6752 = t6741*t4709;
  t6760 = t6747 + t6752;
  t6770 = -0.049*t6760;
  t6786 = t4141*t6741;
  t6789 = -1.*t6699*t2022*t4709;
  t6791 = t6786 + t6789;
  t6794 = -0.09*t6791;
  t5496 = t1805*t5466;
  t5506 = -1.*t507*t2847*t2022;
  t5510 = t5496 + t5506;
  t7029 = 0.135*t1805;
  t7034 = -0.049*t2022;
  t7044 = t7029 + t7034;
  t7048 = 0.049*t1805;
  t7051 = t7048 + t3165;
  t7098 = t41*t6921;
  t7107 = t6571*t1444;
  t7110 = t7098 + t7107;
  t7115 = t1805*t7110;
  t7117 = -1.*t2847*t1128*t2022;
  t7126 = t7115 + t7117;
  t7176 = t2847*t41*t1154;
  t7180 = t2847*t705*t1444;
  t7181 = t7176 + t7180;
  t7189 = t1805*t7181;
  t7194 = t1150*t2022;
  t7195 = t7189 + t7194;
  t5690 = t4141*t5615;
  t5767 = -1.*t5561*t4709;
  t5837 = t5690 + t5767;
  t7234 = 0.049*t4141;
  t7235 = t7234 + t4784;
  t7244 = -0.09*t4141;
  t7253 = -0.049*t4709;
  t7255 = t7244 + t7253;
  t7295 = t2847*t1805*t1128;
  t7302 = t7110*t2022;
  t7304 = t7295 + t7302;
  t7363 = -1.*t1805*t1150;
  t7365 = t7181*t2022;
  t7368 = t7363 + t7365;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1354*t1504 + t1787*t2773 + 0.135*(t1787*t1805 + t1128*t2022*t2847) - 1.*t1128*t2847*t3210 + t1249*t455 + t4091*t4846 - 0.09*(-1.*t4091*t4709 + t4141*t4946) - 0.049*(t4091*t4141 + t4709*t4946) + t4946*t5058;
  p_output1(10)=t2847*t3210*t507 + t455*t5301 + t1504*t5418 + t2773*t5466 + 0.135*t5510 + t4846*t5561 + t5058*t5615 - 0.049*(t4141*t5561 + t4709*t5615) - 0.09*t5837;
  p_output1(11)=0;
  p_output1(12)=-1.*t1150*t3210*t507 + t1154*t2847*t455*t507 + t2773*t5876 + 0.135*(t1150*t2022*t507 + t1805*t5876) + t4846*t5986 + t5058*t6064 - 0.09*(-1.*t4709*t5986 + t4141*t6064) - 0.049*(t4141*t5986 + t4709*t6064) + t1504*t2847*t507*t705;
  p_output1(13)=-1.*t1128*t1150*t3210 + t1128*t1154*t2847*t455 + t2773*t6151 + 0.135*(t1128*t1150*t2022 + t1805*t6151) + t4846*t6220 + t5058*t6233 - 0.09*(-1.*t4709*t6220 + t4141*t6233) - 0.049*(t4141*t6220 + t4709*t6233) + t1128*t1504*t2847*t705;
  p_output1(14)=-1.*t2847*t3210 - 1.*t1150*t1154*t455 + t2773*t6328 + 0.135*(t2022*t2847 + t1805*t6328) + t4846*t6381 + t5058*t6415 - 0.09*(-1.*t4709*t6381 + t4141*t6415) - 0.049*(t4141*t6381 + t4709*t6415) - 1.*t1150*t1504*t705;
  p_output1(15)=t455*t5418 + t1504*t6482 + 0.135*t1805*t6499 + t2773*t6499 + t2022*t4846*t6499 + t5058*t6527 - 0.09*(-1.*t2022*t4709*t6499 + t4141*t6527) - 0.049*(t2022*t4141*t6499 + t4709*t6527);
  p_output1(16)=t1249*t1504 + t455*t6571 + 0.135*t1805*t6592 + t2773*t6592 + t2022*t4846*t6592 + t5058*t6606 - 0.09*(-1.*t2022*t4709*t6592 + t4141*t6606) - 0.049*(t2022*t4141*t6592 + t4709*t6606);
  p_output1(17)=-1.*t1154*t1504*t2847 + t6700 + t6704 + t6714 + t6746 + t6770 + t6794 + t2847*t455*t705;
  p_output1(18)=0.135*t1444*t5301 - 0.135*t41*t5418 + 0.135*t1805*t5615 + t2773*t5615 + t2022*t4846*t5615 + t5058*t6827 - 0.09*(-1.*t2022*t4709*t5615 + t4141*t6827) - 0.049*(t2022*t4141*t5615 + t4709*t6827);
  p_output1(19)=-0.135*t41*t6571 + 0.135*t1444*t6921 + 0.135*t1805*t6946 + t2773*t6946 + t2022*t4846*t6946 + t5058*t6964 - 0.09*(-1.*t2022*t4709*t6946 + t4141*t6964) - 0.049*(t2022*t4141*t6946 + t4709*t6964);
  p_output1(20)=0.135*t1154*t1444*t2847 + t6700 + t6704 + t6714 + t6746 + t6770 + t6794 - 0.135*t2847*t41*t705;
  p_output1(21)=0.135*(-1.*t1805*t2847*t507 - 1.*t2022*t5466) - 0.049*t4141*t5510 + 0.09*t4709*t5510 + t4846*t5510 + t2847*t507*t7044 + t5466*t7051;
  p_output1(22)=t1128*t2847*t7044 + t7051*t7110 + 0.135*(t3539 - 1.*t2022*t7110) - 0.049*t4141*t7126 + 0.09*t4709*t7126 + t4846*t7126;
  p_output1(23)=-1.*t1150*t7044 + t7051*t7181 + 0.135*(t1150*t1805 - 1.*t2022*t7181) - 0.049*t4141*t7195 + 0.09*t4709*t7195 + t4846*t7195;
  p_output1(24)=-0.09*(-1.*t4141*t5561 - 1.*t4709*t5615) - 0.049*t5837 + t5615*t7235 + t5561*t7255;
  p_output1(25)=t6946*t7235 + t7255*t7304 - 0.09*(-1.*t4709*t6946 - 1.*t4141*t7304) - 0.049*(t4141*t6946 - 1.*t4709*t7304);
  p_output1(26)=t6699*t7235 + t7255*t7368 - 0.09*(-1.*t4709*t6699 - 1.*t4141*t7368) - 0.049*(t4141*t6699 - 1.*t4709*t7368);
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
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=0;
  p_output1(46)=0;
  p_output1(47)=0;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
  p_output1(54)=0;
  p_output1(55)=0;
  p_output1(56)=0;
  p_output1(57)=0;
  p_output1(58)=0;
  p_output1(59)=0;
}


       
Eigen::Matrix<double,3,20> Jp_hip_flexion_left(const Eigen::Matrix<double,20,1> &var1)
//void Jp_hip_flexion_left(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,20>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



