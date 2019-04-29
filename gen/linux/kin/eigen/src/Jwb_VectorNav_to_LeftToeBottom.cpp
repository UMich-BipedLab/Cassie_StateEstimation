/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:21:09 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jwb_VectorNav_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t650;
  double t755;
  double t987;
  double t659;
  double t781;
  double t817;
  double t603;
  double t1097;
  double t1100;
  double t1169;
  double t1301;
  double t932;
  double t1182;
  double t1242;
  double t575;
  double t1304;
  double t1486;
  double t1587;
  double t1765;
  double t1262;
  double t1604;
  double t1663;
  double t391;
  double t1798;
  double t1850;
  double t1857;
  double t121;
  double t382;
  double t2438;
  double t2482;
  double t2499;
  double t2333;
  double t2590;
  double t2601;
  double t2626;
  double t2636;
  double t2606;
  double t2694;
  double t2724;
  double t2839;
  double t2853;
  double t2890;
  double t2049;
  double t1974;
  double t2020;
  double t2028;
  double t1690;
  double t1886;
  double t1895;
  double t2928;
  double t2931;
  double t2942;
  double t2742;
  double t2906;
  double t2911;
  t650 = Cos(var1[6]);
  t755 = Sin(var1[6]);
  t987 = Cos(var1[5]);
  t659 = 0.642788*t650;
  t781 = -0.766044*t755;
  t817 = t659 + t781;
  t603 = Sin(var1[5]);
  t1097 = 0.766044*t650;
  t1100 = 0.642788*t755;
  t1169 = t1097 + t1100;
  t1301 = Cos(var1[4]);
  t932 = t603*t817;
  t1182 = t987*t1169;
  t1242 = 0. + t932 + t1182;
  t575 = Sin(var1[4]);
  t1304 = t987*t817;
  t1486 = -1.*t603*t1169;
  t1587 = 0. + t1304 + t1486;
  t1765 = Sin(var1[3]);
  t1262 = -1.*t575*t1242;
  t1604 = t1301*t1587;
  t1663 = 0. + t1262 + t1604;
  t391 = Cos(var1[3]);
  t1798 = t1301*t1242;
  t1850 = t575*t1587;
  t1857 = 0. + t1798 + t1850;
  t121 = Cos(var1[1]);
  t382 = Cos(var1[2]);
  t2438 = -0.766044*t650;
  t2482 = -0.642788*t755;
  t2499 = t2438 + t2482;
  t2333 = -1.*t603*t817;
  t2590 = t987*t2499;
  t2601 = 0. + t2333 + t2590;
  t2626 = t603*t2499;
  t2636 = 0. + t1304 + t2626;
  t2606 = t575*t2601;
  t2694 = t1301*t2636;
  t2724 = 0. + t2606 + t2694;
  t2839 = t1301*t2601;
  t2853 = -1.*t575*t2636;
  t2890 = 0. + t2839 + t2853;
  t2049 = Sin(var1[2]);
  t1974 = t1765*t1663;
  t2020 = t391*t1857;
  t2028 = 0. + t1974 + t2020;
  t1690 = t391*t1663;
  t1886 = -1.*t1765*t1857;
  t1895 = 0. + t1690 + t1886;
  t2928 = t391*t2724;
  t2931 = t1765*t2890;
  t2942 = 0. + t2928 + t2931;
  t2742 = -1.*t1765*t2724;
  t2906 = t391*t2890;
  t2911 = 0. + t2742 + t2906;

  p_output1(0)=0. + Sin(var1(1));
  p_output1(1)=0. + t121*(0. - 1.*t2028*t2049 + t1895*t382);
  p_output1(2)=0. + t121*(0. - 1.*t2049*t2942 + t2911*t382);
  p_output1(3)=0.;
  p_output1(4)=0. + t1895*t2049 + t2028*t382;
  p_output1(5)=0. + t2049*t2911 + t2942*t382;
  p_output1(6)=1.;
  p_output1(7)=0.;
  p_output1(8)=0.;
  p_output1(9)=1.;
  p_output1(10)=0.;
  p_output1(11)=0.;
  p_output1(12)=1.;
  p_output1(13)=0.;
  p_output1(14)=0.;
  p_output1(15)=1.;
  p_output1(16)=0.;
  p_output1(17)=0.;
  p_output1(18)=1.;
  p_output1(19)=0.;
  p_output1(20)=0.;
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
}


       
Eigen::Matrix<double,3,14> Jwb_VectorNav_to_LeftToeBottom(const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



