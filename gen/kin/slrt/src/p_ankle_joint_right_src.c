/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:47 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_ankle_joint_right_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
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
static void output1(double *p_output1,const double *var1)
{
  double t368;
  double t1327;
  double t1525;
  double t1516;
  double t1570;
  double t452;
  double t487;
  double t611;
  double t998;
  double t1106;
  double t1522;
  double t1640;
  double t1660;
  double t2454;
  double t2667;
  double t2821;
  double t2884;
  double t399;
  double t3056;
  double t3057;
  double t3177;
  double t3422;
  double t3596;
  double t4239;
  double t4996;
  double t5166;
  double t5264;
  double t5321;
  double t6344;
  double t6421;
  double t6471;
  double t6602;
  double t6632;
  double t6702;
  double t6731;
  double t6739;
  double t6762;
  double t6805;
  double t6862;
  double t6863;
  double t6866;
  double t6911;
  double t6938;
  double t6943;
  double t6963;
  double t6993;
  double t7004;
  double t7025;
  double t7093;
  double t7139;
  double t7156;
  double t7170;
  double t7187;
  double t7215;
  double t7290;
  double t7333;
  double t7343;
  double t7382;
  double t7412;
  double t7426;
  double t7477;
  double t759;
  double t1036;
  double t1079;
  double t1160;
  double t1162;
  double t2455;
  double t2468;
  double t2488;
  double t2525;
  double t3022;
  double t3030;
  double t3047;
  double t7644;
  double t7646;
  double t7653;
  double t7683;
  double t7687;
  double t7688;
  double t4960;
  double t5011;
  double t5081;
  double t7692;
  double t7698;
  double t7724;
  double t5937;
  double t5988;
  double t6035;
  double t6718;
  double t6734;
  double t6736;
  double t7737;
  double t7742;
  double t7761;
  double t7831;
  double t7855;
  double t7861;
  double t6830;
  double t6835;
  double t6855;
  double t6958;
  double t6967;
  double t6973;
  double t7869;
  double t7870;
  double t7883;
  double t7918;
  double t7920;
  double t7921;
  double t7062;
  double t7065;
  double t7078;
  double t7219;
  double t7319;
  double t7328;
  double t7932;
  double t7945;
  double t7949;
  double t7953;
  double t7954;
  double t7969;
  double t7396;
  double t7399;
  double t7401;
  double t7997;
  double t8008;
  double t8028;
  double t8079;
  double t8138;
  double t8153;
  double t8241;
  double t8246;
  double t8249;
  double t8254;
  double t8293;
  double t8312;
  double t8372;
  double t8383;
  double t8385;
  double t8412;
  double t8427;
  double t8449;
  double t8454;
  double t8465;
  double t8467;
  double t8480;
  double t8484;
  double t8495;
  double t8501;
  double t8526;
  double t8529;
  double t8551;
  double t8557;
  double t8584;
  double t8635;
  double t8641;
  double t8647;
  t368 = Cos(var1[3]);
  t1327 = Cos(var1[5]);
  t1525 = Sin(var1[3]);
  t1516 = Sin(var1[4]);
  t1570 = Sin(var1[5]);
  t452 = Cos(var1[14]);
  t487 = -1.*t452;
  t611 = 1. + t487;
  t998 = Sin(var1[14]);
  t1106 = Sin(var1[13]);
  t1522 = t368*t1327*t1516;
  t1640 = t1525*t1570;
  t1660 = t1522 + t1640;
  t2454 = Cos(var1[13]);
  t2667 = -1.*t1327*t1525;
  t2821 = t368*t1516*t1570;
  t2884 = t2667 + t2821;
  t399 = Cos(var1[4]);
  t3056 = t1106*t1660;
  t3057 = t2454*t2884;
  t3177 = t3056 + t3057;
  t3422 = Cos(var1[15]);
  t3596 = -1.*t3422;
  t4239 = 1. + t3596;
  t4996 = Sin(var1[15]);
  t5166 = t2454*t1660;
  t5264 = -1.*t1106*t2884;
  t5321 = t5166 + t5264;
  t6344 = t452*t368*t399;
  t6421 = t998*t3177;
  t6471 = t6344 + t6421;
  t6602 = Cos(var1[16]);
  t6632 = -1.*t6602;
  t6702 = 1. + t6632;
  t6731 = Sin(var1[16]);
  t6739 = t4996*t5321;
  t6762 = t3422*t6471;
  t6805 = t6739 + t6762;
  t6862 = t3422*t5321;
  t6863 = -1.*t4996*t6471;
  t6866 = t6862 + t6863;
  t6911 = Cos(var1[17]);
  t6938 = -1.*t6911;
  t6943 = 1. + t6938;
  t6963 = Sin(var1[17]);
  t6993 = -1.*t6731*t6805;
  t7004 = t6602*t6866;
  t7025 = t6993 + t7004;
  t7093 = t6602*t6805;
  t7139 = t6731*t6866;
  t7156 = t7093 + t7139;
  t7170 = Cos(var1[18]);
  t7187 = -1.*t7170;
  t7215 = 1. + t7187;
  t7290 = Sin(var1[18]);
  t7333 = t6963*t7025;
  t7343 = t6911*t7156;
  t7382 = t7333 + t7343;
  t7412 = t6911*t7025;
  t7426 = -1.*t6963*t7156;
  t7477 = t7412 + t7426;
  t759 = -0.049*t611;
  t1036 = -0.135*t998;
  t1079 = 0. + t759 + t1036;
  t1160 = 0.135*t1106;
  t1162 = 0. + t1160;
  t2455 = -1.*t2454;
  t2468 = 1. + t2455;
  t2488 = -0.135*t2468;
  t2525 = 0. + t2488;
  t3022 = -0.135*t611;
  t3030 = 0.049*t998;
  t3047 = 0. + t3022 + t3030;
  t7644 = t1327*t1525*t1516;
  t7646 = -1.*t368*t1570;
  t7653 = t7644 + t7646;
  t7683 = t368*t1327;
  t7687 = t1525*t1516*t1570;
  t7688 = t7683 + t7687;
  t4960 = -0.09*t4239;
  t5011 = 0.049*t4996;
  t5081 = 0. + t4960 + t5011;
  t7692 = t1106*t7653;
  t7698 = t2454*t7688;
  t7724 = t7692 + t7698;
  t5937 = -0.049*t4239;
  t5988 = -0.09*t4996;
  t6035 = 0. + t5937 + t5988;
  t6718 = -0.049*t6702;
  t6734 = -0.21*t6731;
  t6736 = 0. + t6718 + t6734;
  t7737 = t2454*t7653;
  t7742 = -1.*t1106*t7688;
  t7761 = t7737 + t7742;
  t7831 = t452*t399*t1525;
  t7855 = t998*t7724;
  t7861 = t7831 + t7855;
  t6830 = -0.21*t6702;
  t6835 = 0.049*t6731;
  t6855 = 0. + t6830 + t6835;
  t6958 = -0.2707*t6943;
  t6967 = 0.0016*t6963;
  t6973 = 0. + t6958 + t6967;
  t7869 = t4996*t7761;
  t7870 = t3422*t7861;
  t7883 = t7869 + t7870;
  t7918 = t3422*t7761;
  t7920 = -1.*t4996*t7861;
  t7921 = t7918 + t7920;
  t7062 = -0.0016*t6943;
  t7065 = -0.2707*t6963;
  t7078 = 0. + t7062 + t7065;
  t7219 = 0.0184*t7215;
  t7319 = -0.7055*t7290;
  t7328 = 0. + t7219 + t7319;
  t7932 = -1.*t6731*t7883;
  t7945 = t6602*t7921;
  t7949 = t7932 + t7945;
  t7953 = t6602*t7883;
  t7954 = t6731*t7921;
  t7969 = t7953 + t7954;
  t7396 = -0.7055*t7215;
  t7399 = -0.0184*t7290;
  t7401 = 0. + t7396 + t7399;
  t7997 = t6963*t7949;
  t8008 = t6911*t7969;
  t8028 = t7997 + t8008;
  t8079 = t6911*t7949;
  t8138 = -1.*t6963*t7969;
  t8153 = t8079 + t8138;
  t8241 = t399*t1327*t1106;
  t8246 = t2454*t399*t1570;
  t8249 = t8241 + t8246;
  t8254 = t2454*t399*t1327;
  t8293 = -1.*t399*t1106*t1570;
  t8312 = t8254 + t8293;
  t8372 = -1.*t452*t1516;
  t8383 = t998*t8249;
  t8385 = t8372 + t8383;
  t8412 = t4996*t8312;
  t8427 = t3422*t8385;
  t8449 = t8412 + t8427;
  t8454 = t3422*t8312;
  t8465 = -1.*t4996*t8385;
  t8467 = t8454 + t8465;
  t8480 = -1.*t6731*t8449;
  t8484 = t6602*t8467;
  t8495 = t8480 + t8484;
  t8501 = t6602*t8449;
  t8526 = t6731*t8467;
  t8529 = t8501 + t8526;
  t8551 = t6963*t8495;
  t8557 = t6911*t8529;
  t8584 = t8551 + t8557;
  t8635 = t6911*t8495;
  t8641 = -1.*t6963*t8529;
  t8647 = t8635 + t8641;
  p_output1[0]=0. + t1162*t1660 + t2525*t2884 + t3047*t3177 + t1079*t368*t399 + t5081*t5321 + t6035*t6471 + t6736*t6805 + t6855*t6866 + t6973*t7025 + t7078*t7156 + t7328*t7382 + t7401*t7477 - 0.7055*(-1.*t7290*t7382 + t7170*t7477) + 0.0184*(t7170*t7382 + t7290*t7477) - 0.1305*(t3177*t452 - 1.*t368*t399*t998) + var1[0];
  p_output1[1]=0. + t1079*t1525*t399 + t1162*t7653 + t2525*t7688 + t3047*t7724 + t5081*t7761 + t6035*t7861 + t6736*t7883 + t6855*t7921 + t6973*t7949 + t7078*t7969 + t7328*t8028 + t7401*t8153 - 0.7055*(-1.*t7290*t8028 + t7170*t8153) + 0.0184*(t7170*t8028 + t7290*t8153) - 0.1305*(t452*t7724 - 1.*t1525*t399*t998) + var1[1];
  p_output1[2]=0. - 1.*t1079*t1516 + t1162*t1327*t399 + t1570*t2525*t399 + t3047*t8249 + t5081*t8312 + t6035*t8385 + t6736*t8449 + t6855*t8467 + t6973*t8495 + t7078*t8529 + t7328*t8584 + t7401*t8647 - 0.7055*(-1.*t7290*t8584 + t7170*t8647) + 0.0184*(t7170*t8584 + t7290*t8647) - 0.1305*(t452*t8249 + t1516*t998) + var1[2];
}



void p_ankle_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
