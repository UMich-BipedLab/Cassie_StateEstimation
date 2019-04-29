/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:12 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_rotation_left.h"

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
  double t1453;
  double t1521;
  double t1829;
  double t932;
  double t1845;
  double t170;
  double t2100;
  double t2348;
  double t2444;
  double t1488;
  double t1909;
  double t2054;
  double t2599;
  double t4346;
  double t4361;
  double t4401;
  double t4434;
  double t3950;
  double t4029;
  double t4114;
  double t4471;
  double t551;
  double t740;
  double t890;
  double t927;
  double t2875;
  double t3054;
  double t4683;
  double t4696;
  double t4719;
  double t4638;
  double t4651;
  double t4675;
  double t4423;
  double t4440;
  double t4466;
  double t4474;
  double t4484;
  double t4511;
  double t4792;
  double t4798;
  double t4808;
  double t4928;
  double t4946;
  double t4957;
  double t5121;
  double t5129;
  double t5135;
  double t5254;
  double t5262;
  double t5295;
  double t5446;
  double t5448;
  double t5449;
  double t4749;
  double t5494;
  double t5496;
  double t5561;
  double t5567;
  double t5579;
  double t5615;
  double t5618;
  double t5620;
  double t5767;
  double t5769;
  double t5772;
  double t5477;
  double t4751;
  double t4764;
  double t5876;
  double t5877;
  double t5899;
  double t5593;
  double t5931;
  double t5937;
  double t5756;
  double t5761;
  double t5765;
  double t5766;
  double t5775;
  double t5789;
  double t5800;
  double t4846;
  double t4855;
  double t4857;
  double t6009;
  double t6015;
  double t6018;
  double t6045;
  double t6048;
  double t6108;
  double t6114;
  double t6116;
  double t4599;
  double t6169;
  double t6175;
  double t6180;
  t1453 = Cos(var1[5]);
  t1521 = Sin(var1[3]);
  t1829 = Sin(var1[4]);
  t932 = Cos(var1[3]);
  t1845 = Sin(var1[5]);
  t170 = Cos(var1[6]);
  t2100 = -1.*t1453*t1521*t1829;
  t2348 = t932*t1845;
  t2444 = t2100 + t2348;
  t1488 = -1.*t932*t1453;
  t1909 = -1.*t1521*t1829*t1845;
  t2054 = t1488 + t1909;
  t2599 = Sin(var1[6]);
  t4346 = Cos(var1[7]);
  t4361 = -1.*t4346;
  t4401 = 1. + t4361;
  t4434 = Sin(var1[7]);
  t3950 = t170*t2054;
  t4029 = t2444*t2599;
  t4114 = t3950 + t4029;
  t4471 = Cos(var1[4]);
  t551 = -1.*t170;
  t740 = 1. + t551;
  t890 = 0.135*t740;
  t927 = 0. + t890;
  t2875 = -0.135*t2599;
  t3054 = 0. + t2875;
  t4683 = t932*t1453*t1829;
  t4696 = t1521*t1845;
  t4719 = t4683 + t4696;
  t4638 = -1.*t1453*t1521;
  t4651 = t932*t1829*t1845;
  t4675 = t4638 + t4651;
  t4423 = 0.135*t4401;
  t4440 = 0.049*t4434;
  t4466 = 0. + t4423 + t4440;
  t4474 = -0.049*t4401;
  t4484 = 0.135*t4434;
  t4511 = 0. + t4474 + t4484;
  t4792 = t170*t4675;
  t4798 = t4719*t2599;
  t4808 = t4792 + t4798;
  t4928 = t932*t4471*t170*t1845;
  t4946 = t932*t4471*t1453*t2599;
  t4957 = t4928 + t4946;
  t5121 = t4471*t170*t1521*t1845;
  t5129 = t4471*t1453*t1521*t2599;
  t5135 = t5121 + t5129;
  t5254 = -1.*t170*t1829*t1845;
  t5262 = -1.*t1453*t1829*t2599;
  t5295 = t5254 + t5262;
  t5446 = t1453*t1521;
  t5448 = -1.*t932*t1829*t1845;
  t5449 = t5446 + t5448;
  t4749 = t170*t4719;
  t5494 = t5449*t2599;
  t5496 = t4749 + t5494;
  t5561 = t1453*t1521*t1829;
  t5567 = -1.*t932*t1845;
  t5579 = t5561 + t5567;
  t5615 = t170*t5579;
  t5618 = t2054*t2599;
  t5620 = t5615 + t5618;
  t5767 = t4471*t1453*t170;
  t5769 = -1.*t4471*t1845*t2599;
  t5772 = t5767 + t5769;
  t5477 = -1.*t4719*t2599;
  t4751 = -1.*t4675*t2599;
  t4764 = t4749 + t4751;
  t5876 = t932*t1453;
  t5877 = t1521*t1829*t1845;
  t5899 = t5876 + t5877;
  t5593 = -1.*t5579*t2599;
  t5931 = -1.*t5899*t2599;
  t5937 = t5615 + t5931;
  t5756 = -1.*t4471*t170*t1845;
  t5761 = -1.*t4471*t1453*t2599;
  t5765 = t5756 + t5761;
  t5766 = -0.09*t5765;
  t5775 = 0.135*t4346*t5772;
  t5789 = t5772*t4466;
  t5800 = -0.049*t5772*t4434;
  t4846 = t4346*t4808;
  t4855 = -1.*t932*t4471*t4434;
  t4857 = t4846 + t4855;
  t6009 = 0.135*t4346;
  t6015 = -0.049*t4434;
  t6018 = t6009 + t6015;
  t6045 = 0.049*t4346;
  t6048 = t6045 + t4484;
  t6108 = t170*t5899;
  t6114 = t5579*t2599;
  t6116 = t6108 + t6114;
  t4599 = -1.*t4471*t4346*t1521;
  t6169 = t4471*t170*t1845;
  t6175 = t4471*t1453*t2599;
  t6180 = t6169 + t6175;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-0.09*(t170*t2444 - 1.*t2054*t2599) + t2444*t3054 + t4114*t4466 + 0.135*(t4114*t4346 + t1521*t4434*t4471) - 1.*t1521*t4471*t4511 - 0.049*(t4114*t4434 + t4599) + t2054*t927;
  p_output1(10)=t3054*t4719 - 0.09*t4764 + t4466*t4808 + 0.135*t4857 + t4675*t927 + t4471*t4511*t932 - 0.049*(t4434*t4808 + t4346*t4471*t932);
  p_output1(11)=0;
  p_output1(12)=t4466*t4957 + t1453*t3054*t4471*t932 - 1.*t1829*t4511*t932 + t1845*t4471*t927*t932 - 0.049*(t4434*t4957 - 1.*t1829*t4346*t932) + 0.135*(t4346*t4957 + t1829*t4434*t932) - 0.09*(t1453*t170*t4471*t932 - 1.*t1845*t2599*t4471*t932);
  p_output1(13)=t1453*t1521*t3054*t4471 - 0.09*(t1453*t1521*t170*t4471 - 1.*t1521*t1845*t2599*t4471) - 1.*t1521*t1829*t4511 + t4466*t5135 + 0.135*(t1521*t1829*t4434 + t4346*t5135) - 0.049*(-1.*t1521*t1829*t4346 + t4434*t5135) + t1521*t1845*t4471*t927;
  p_output1(14)=-0.09*(-1.*t1453*t170*t1829 + t1829*t1845*t2599) - 1.*t1453*t1829*t3054 - 1.*t4471*t4511 + t4466*t5295 + 0.135*(t4434*t4471 + t4346*t5295) - 0.049*(-1.*t4346*t4471 + t4434*t5295) - 1.*t1829*t1845*t927;
  p_output1(15)=t3054*t5449 - 0.09*(t170*t5449 + t5477) + 0.135*t4346*t5496 - 0.049*t4434*t5496 + t4466*t5496 + t4719*t927;
  p_output1(16)=t2054*t3054 - 0.09*(t3950 + t5593) + 0.135*t4346*t5620 - 0.049*t4434*t5620 + t4466*t5620 + t5579*t927;
  p_output1(17)=-1.*t1845*t3054*t4471 + t5766 + t5775 + t5789 + t5800 + t1453*t4471*t927;
  p_output1(18)=0.135*t2599*t4675 - 0.135*t170*t4719 + 0.135*t4346*t4764 - 0.049*t4434*t4764 + t4466*t4764 - 0.09*(-1.*t170*t4675 + t5477);
  p_output1(19)=-0.135*t170*t5579 + 0.135*t2599*t5899 - 0.09*(t5593 - 1.*t170*t5899) + 0.135*t4346*t5937 - 0.049*t4434*t5937 + t4466*t5937;
  p_output1(20)=-0.135*t1453*t170*t4471 + 0.135*t1845*t2599*t4471 + t5766 + t5775 + t5789 + t5800;
  p_output1(21)=-0.049*t4857 + t4808*t6048 + t4471*t6018*t932 + 0.135*(-1.*t4434*t4808 - 1.*t4346*t4471*t932);
  p_output1(22)=t1521*t4471*t6018 + t6048*t6116 - 0.049*(-1.*t1521*t4434*t4471 + t4346*t6116) + 0.135*(t4599 - 1.*t4434*t6116);
  p_output1(23)=-1.*t1829*t6018 + t6048*t6180 - 0.049*(t1829*t4434 + t4346*t6180) + 0.135*(t1829*t4346 - 1.*t4434*t6180);
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


       
Eigen::Matrix<double,3,20> Jp_hip_rotation_left(const Eigen::Matrix<double,20,1> &var1)
//void Jp_hip_rotation_left(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,20>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



