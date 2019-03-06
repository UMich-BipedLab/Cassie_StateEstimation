/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:45 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_to_shin_right_src.h"

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
  double t126;
  double t3629;
  double t3907;
  double t3719;
  double t3969;
  double t1139;
  double t1312;
  double t2142;
  double t2456;
  double t2953;
  double t3786;
  double t4117;
  double t4359;
  double t5401;
  double t5916;
  double t5951;
  double t5954;
  double t486;
  double t6335;
  double t6495;
  double t6523;
  double t6532;
  double t6533;
  double t6535;
  double t6555;
  double t6585;
  double t6587;
  double t6658;
  double t6818;
  double t6836;
  double t6859;
  double t6868;
  double t6914;
  double t6918;
  double t6992;
  double t7025;
  double t7042;
  double t7055;
  double t7103;
  double t7123;
  double t7125;
  double t7155;
  double t7163;
  double t7203;
  double t7221;
  double t7248;
  double t7250;
  double t7270;
  double t7350;
  double t7359;
  double t7360;
  double t2354;
  double t2562;
  double t2635;
  double t3119;
  double t3439;
  double t5418;
  double t5610;
  double t5692;
  double t5831;
  double t6120;
  double t6133;
  double t6206;
  double t7492;
  double t7494;
  double t7503;
  double t7522;
  double t7535;
  double t7550;
  double t6539;
  double t6559;
  double t6584;
  double t7573;
  double t7587;
  double t7602;
  double t6774;
  double t6785;
  double t6792;
  double t6982;
  double t7013;
  double t7021;
  double t7607;
  double t7620;
  double t7624;
  double t7684;
  double t7687;
  double t7694;
  double t7078;
  double t7083;
  double t7095;
  double t7208;
  double t7223;
  double t7247;
  double t7712;
  double t7724;
  double t7726;
  double t7751;
  double t7753;
  double t7766;
  double t7300;
  double t7328;
  double t7339;
  double t7775;
  double t7786;
  double t7791;
  double t7796;
  double t7817;
  double t7818;
  double t8029;
  double t8037;
  double t8053;
  double t8059;
  double t8086;
  double t8087;
  double t8166;
  double t8201;
  double t8205;
  double t8222;
  double t8231;
  double t8247;
  double t8258;
  double t8272;
  double t8273;
  double t8287;
  double t8293;
  double t8304;
  double t8312;
  double t8317;
  double t8321;
  t126 = Cos(var1[3]);
  t3629 = Cos(var1[5]);
  t3907 = Sin(var1[3]);
  t3719 = Sin(var1[4]);
  t3969 = Sin(var1[5]);
  t1139 = Cos(var1[14]);
  t1312 = -1.*t1139;
  t2142 = 1. + t1312;
  t2456 = Sin(var1[14]);
  t2953 = Sin(var1[13]);
  t3786 = t126*t3629*t3719;
  t4117 = t3907*t3969;
  t4359 = t3786 + t4117;
  t5401 = Cos(var1[13]);
  t5916 = -1.*t3629*t3907;
  t5951 = t126*t3719*t3969;
  t5954 = t5916 + t5951;
  t486 = Cos(var1[4]);
  t6335 = t2953*t4359;
  t6495 = t5401*t5954;
  t6523 = t6335 + t6495;
  t6532 = Cos(var1[15]);
  t6533 = -1.*t6532;
  t6535 = 1. + t6533;
  t6555 = Sin(var1[15]);
  t6585 = t5401*t4359;
  t6587 = -1.*t2953*t5954;
  t6658 = t6585 + t6587;
  t6818 = t1139*t126*t486;
  t6836 = t2456*t6523;
  t6859 = t6818 + t6836;
  t6868 = Cos(var1[16]);
  t6914 = -1.*t6868;
  t6918 = 1. + t6914;
  t6992 = Sin(var1[16]);
  t7025 = t6555*t6658;
  t7042 = t6532*t6859;
  t7055 = t7025 + t7042;
  t7103 = t6532*t6658;
  t7123 = -1.*t6555*t6859;
  t7125 = t7103 + t7123;
  t7155 = Cos(var1[17]);
  t7163 = -1.*t7155;
  t7203 = 1. + t7163;
  t7221 = Sin(var1[17]);
  t7248 = -1.*t6992*t7055;
  t7250 = t6868*t7125;
  t7270 = t7248 + t7250;
  t7350 = t6868*t7055;
  t7359 = t6992*t7125;
  t7360 = t7350 + t7359;
  t2354 = -0.049*t2142;
  t2562 = -0.135*t2456;
  t2635 = 0. + t2354 + t2562;
  t3119 = 0.135*t2953;
  t3439 = 0. + t3119;
  t5418 = -1.*t5401;
  t5610 = 1. + t5418;
  t5692 = -0.135*t5610;
  t5831 = 0. + t5692;
  t6120 = -0.135*t2142;
  t6133 = 0.049*t2456;
  t6206 = 0. + t6120 + t6133;
  t7492 = t3629*t3907*t3719;
  t7494 = -1.*t126*t3969;
  t7503 = t7492 + t7494;
  t7522 = t126*t3629;
  t7535 = t3907*t3719*t3969;
  t7550 = t7522 + t7535;
  t6539 = -0.09*t6535;
  t6559 = 0.049*t6555;
  t6584 = 0. + t6539 + t6559;
  t7573 = t2953*t7503;
  t7587 = t5401*t7550;
  t7602 = t7573 + t7587;
  t6774 = -0.049*t6535;
  t6785 = -0.09*t6555;
  t6792 = 0. + t6774 + t6785;
  t6982 = -0.049*t6918;
  t7013 = -0.21*t6992;
  t7021 = 0. + t6982 + t7013;
  t7607 = t5401*t7503;
  t7620 = -1.*t2953*t7550;
  t7624 = t7607 + t7620;
  t7684 = t1139*t486*t3907;
  t7687 = t2456*t7602;
  t7694 = t7684 + t7687;
  t7078 = -0.21*t6918;
  t7083 = 0.049*t6992;
  t7095 = 0. + t7078 + t7083;
  t7208 = -0.2707*t7203;
  t7223 = 0.0016*t7221;
  t7247 = 0. + t7208 + t7223;
  t7712 = t6555*t7624;
  t7724 = t6532*t7694;
  t7726 = t7712 + t7724;
  t7751 = t6532*t7624;
  t7753 = -1.*t6555*t7694;
  t7766 = t7751 + t7753;
  t7300 = -0.0016*t7203;
  t7328 = -0.2707*t7221;
  t7339 = 0. + t7300 + t7328;
  t7775 = -1.*t6992*t7726;
  t7786 = t6868*t7766;
  t7791 = t7775 + t7786;
  t7796 = t6868*t7726;
  t7817 = t6992*t7766;
  t7818 = t7796 + t7817;
  t8029 = t486*t3629*t2953;
  t8037 = t5401*t486*t3969;
  t8053 = t8029 + t8037;
  t8059 = t5401*t486*t3629;
  t8086 = -1.*t486*t2953*t3969;
  t8087 = t8059 + t8086;
  t8166 = -1.*t1139*t3719;
  t8201 = t2456*t8053;
  t8205 = t8166 + t8201;
  t8222 = t6555*t8087;
  t8231 = t6532*t8205;
  t8247 = t8222 + t8231;
  t8258 = t6532*t8087;
  t8272 = -1.*t6555*t8205;
  t8273 = t8258 + t8272;
  t8287 = -1.*t6992*t8247;
  t8293 = t6868*t8273;
  t8304 = t8287 + t8293;
  t8312 = t6868*t8247;
  t8317 = t6992*t8273;
  t8321 = t8312 + t8317;
  p_output1[0]=0. + t3439*t4359 + t126*t2635*t486 + t5831*t5954 + t6206*t6523 - 0.1305*(-1.*t126*t2456*t486 + t1139*t6523) + t6584*t6658 + t6792*t6859 + t7021*t7055 + t7095*t7125 + t7247*t7270 + t7339*t7360 - 0.0016*(t7221*t7270 + t7155*t7360) - 0.2707*(t7155*t7270 - 1.*t7221*t7360) + var1[0];
  p_output1[1]=0. + t2635*t3907*t486 + t3439*t7503 + t5831*t7550 + t6206*t7602 - 0.1305*(-1.*t2456*t3907*t486 + t1139*t7602) + t6584*t7624 + t6792*t7694 + t7021*t7726 + t7095*t7766 + t7247*t7791 + t7339*t7818 - 0.0016*(t7221*t7791 + t7155*t7818) - 0.2707*(t7155*t7791 - 1.*t7221*t7818) + var1[1];
  p_output1[2]=0. - 1.*t2635*t3719 + t3439*t3629*t486 + t3969*t486*t5831 + t6206*t8053 - 0.1305*(t2456*t3719 + t1139*t8053) + t6584*t8087 + t6792*t8205 + t7021*t8247 + t7095*t8273 + t7247*t8304 + t7339*t8321 - 0.0016*(t7221*t8304 + t7155*t8321) - 0.2707*(t7155*t8304 - 1.*t7221*t8321) + var1[2];
}



void p_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
