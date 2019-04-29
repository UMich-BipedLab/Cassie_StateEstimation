/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:18 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_ankle_joint_left.h"

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
  double t1754;
  double t1582;
  double t1790;
  double t1720;
  double t1869;
  double t245;
  double t1732;
  double t1975;
  double t1993;
  double t2346;
  double t2642;
  double t2697;
  double t3277;
  double t3602;
  double t3815;
  double t3820;
  double t4483;
  double t3393;
  double t3459;
  double t3470;
  double t5157;
  double t6357;
  double t6362;
  double t6601;
  double t6642;
  double t6232;
  double t6330;
  double t6347;
  double t6672;
  double t6681;
  double t6709;
  double t6782;
  double t6792;
  double t6803;
  double t6886;
  double t6898;
  double t6899;
  double t6913;
  double t6974;
  double t7026;
  double t7047;
  double t7049;
  double t7061;
  double t7086;
  double t7097;
  double t7147;
  double t7153;
  double t7186;
  double t7239;
  double t7242;
  double t7251;
  double t7253;
  double t7258;
  double t7267;
  double t7274;
  double t7288;
  double t7300;
  double t7302;
  double t7327;
  double t7334;
  double t7343;
  double t246;
  double t630;
  double t804;
  double t1525;
  double t3310;
  double t3347;
  double t7385;
  double t7386;
  double t7390;
  double t7397;
  double t7405;
  double t7408;
  double t4092;
  double t4506;
  double t4775;
  double t5166;
  double t5214;
  double t5253;
  double t7414;
  double t7428;
  double t7434;
  double t6627;
  double t6647;
  double t6649;
  double t6710;
  double t6711;
  double t6740;
  double t6863;
  double t6894;
  double t6895;
  double t7493;
  double t7517;
  double t7523;
  double t7539;
  double t7541;
  double t7544;
  double t6924;
  double t6933;
  double t6952;
  double t7087;
  double t7112;
  double t7116;
  double t7549;
  double t7552;
  double t7564;
  double t7572;
  double t7574;
  double t7576;
  double t7206;
  double t7226;
  double t7232;
  double t7271;
  double t7276;
  double t7277;
  double t7586;
  double t7592;
  double t7600;
  double t7609;
  double t7610;
  double t7611;
  double t7317;
  double t7318;
  double t7321;
  double t7637;
  double t7659;
  double t7663;
  double t7682;
  double t7684;
  double t7704;
  double t7754;
  double t7755;
  double t7759;
  double t7796;
  double t7809;
  double t7813;
  double t7822;
  double t7824;
  double t7841;
  double t7858;
  double t7864;
  double t7866;
  double t7887;
  double t7891;
  double t7900;
  double t7914;
  double t7917;
  double t7919;
  double t7925;
  double t7940;
  double t7942;
  double t7945;
  double t7950;
  double t7956;
  double t7974;
  double t7977;
  double t7978;
  t1754 = Cos(var1[3]);
  t1582 = Cos(var1[5]);
  t1790 = Sin(var1[4]);
  t1720 = Sin(var1[3]);
  t1869 = Sin(var1[5]);
  t245 = Cos(var1[6]);
  t1732 = -1.*t1582*t1720;
  t1975 = t1754*t1790*t1869;
  t1993 = t1732 + t1975;
  t2346 = t1754*t1582*t1790;
  t2642 = t1720*t1869;
  t2697 = t2346 + t2642;
  t3277 = Sin(var1[6]);
  t3602 = Cos(var1[7]);
  t3815 = -1.*t3602;
  t3820 = 1. + t3815;
  t4483 = Sin(var1[7]);
  t3393 = t245*t1993;
  t3459 = t2697*t3277;
  t3470 = t3393 + t3459;
  t5157 = Cos(var1[4]);
  t6357 = Cos(var1[8]);
  t6362 = -1.*t6357;
  t6601 = 1. + t6362;
  t6642 = Sin(var1[8]);
  t6232 = t1754*t5157*t3602;
  t6330 = t3470*t4483;
  t6347 = t6232 + t6330;
  t6672 = t245*t2697;
  t6681 = -1.*t1993*t3277;
  t6709 = t6672 + t6681;
  t6782 = Cos(var1[9]);
  t6792 = -1.*t6782;
  t6803 = 1. + t6792;
  t6886 = Sin(var1[9]);
  t6898 = t6357*t6347;
  t6899 = t6709*t6642;
  t6913 = t6898 + t6899;
  t6974 = t6357*t6709;
  t7026 = -1.*t6347*t6642;
  t7047 = t6974 + t7026;
  t7049 = Cos(var1[10]);
  t7061 = -1.*t7049;
  t7086 = 1. + t7061;
  t7097 = Sin(var1[10]);
  t7147 = -1.*t6886*t6913;
  t7153 = t6782*t7047;
  t7186 = t7147 + t7153;
  t7239 = t6782*t6913;
  t7242 = t6886*t7047;
  t7251 = t7239 + t7242;
  t7253 = Cos(var1[11]);
  t7258 = -1.*t7253;
  t7267 = 1. + t7258;
  t7274 = Sin(var1[11]);
  t7288 = t7097*t7186;
  t7300 = t7049*t7251;
  t7302 = t7288 + t7300;
  t7327 = t7049*t7186;
  t7334 = -1.*t7097*t7251;
  t7343 = t7327 + t7334;
  t246 = -1.*t245;
  t630 = 1. + t246;
  t804 = 0.135*t630;
  t1525 = 0. + t804;
  t3310 = -0.135*t3277;
  t3347 = 0. + t3310;
  t7385 = t1754*t1582;
  t7386 = t1720*t1790*t1869;
  t7390 = t7385 + t7386;
  t7397 = t1582*t1720*t1790;
  t7405 = -1.*t1754*t1869;
  t7408 = t7397 + t7405;
  t4092 = 0.135*t3820;
  t4506 = 0.049*t4483;
  t4775 = 0. + t4092 + t4506;
  t5166 = -0.049*t3820;
  t5214 = 0.135*t4483;
  t5253 = 0. + t5166 + t5214;
  t7414 = t245*t7390;
  t7428 = t7408*t3277;
  t7434 = t7414 + t7428;
  t6627 = -0.049*t6601;
  t6647 = -0.09*t6642;
  t6649 = 0. + t6627 + t6647;
  t6710 = -0.09*t6601;
  t6711 = 0.049*t6642;
  t6740 = 0. + t6710 + t6711;
  t6863 = -0.049*t6803;
  t6894 = -0.21*t6886;
  t6895 = 0. + t6863 + t6894;
  t7493 = t5157*t3602*t1720;
  t7517 = t7434*t4483;
  t7523 = t7493 + t7517;
  t7539 = t245*t7408;
  t7541 = -1.*t7390*t3277;
  t7544 = t7539 + t7541;
  t6924 = -0.21*t6803;
  t6933 = 0.049*t6886;
  t6952 = 0. + t6924 + t6933;
  t7087 = -0.2707*t7086;
  t7112 = 0.0016*t7097;
  t7116 = 0. + t7087 + t7112;
  t7549 = t6357*t7523;
  t7552 = t7544*t6642;
  t7564 = t7549 + t7552;
  t7572 = t6357*t7544;
  t7574 = -1.*t7523*t6642;
  t7576 = t7572 + t7574;
  t7206 = -0.0016*t7086;
  t7226 = -0.2707*t7097;
  t7232 = 0. + t7206 + t7226;
  t7271 = 0.0184*t7267;
  t7276 = -0.7055*t7274;
  t7277 = 0. + t7271 + t7276;
  t7586 = -1.*t6886*t7564;
  t7592 = t6782*t7576;
  t7600 = t7586 + t7592;
  t7609 = t6782*t7564;
  t7610 = t6886*t7576;
  t7611 = t7609 + t7610;
  t7317 = -0.7055*t7267;
  t7318 = -0.0184*t7274;
  t7321 = 0. + t7317 + t7318;
  t7637 = t7097*t7600;
  t7659 = t7049*t7611;
  t7663 = t7637 + t7659;
  t7682 = t7049*t7600;
  t7684 = -1.*t7097*t7611;
  t7704 = t7682 + t7684;
  t7754 = t5157*t245*t1869;
  t7755 = t5157*t1582*t3277;
  t7759 = t7754 + t7755;
  t7796 = -1.*t3602*t1790;
  t7809 = t7759*t4483;
  t7813 = t7796 + t7809;
  t7822 = t5157*t1582*t245;
  t7824 = -1.*t5157*t1869*t3277;
  t7841 = t7822 + t7824;
  t7858 = t6357*t7813;
  t7864 = t7841*t6642;
  t7866 = t7858 + t7864;
  t7887 = t6357*t7841;
  t7891 = -1.*t7813*t6642;
  t7900 = t7887 + t7891;
  t7914 = -1.*t6886*t7866;
  t7917 = t6782*t7900;
  t7919 = t7914 + t7917;
  t7925 = t6782*t7866;
  t7940 = t6886*t7900;
  t7942 = t7925 + t7940;
  t7945 = t7097*t7919;
  t7950 = t7049*t7942;
  t7956 = t7945 + t7950;
  t7974 = t7049*t7919;
  t7977 = -1.*t7097*t7942;
  t7978 = t7974 + t7977;

  p_output1(0)=0. + t1525*t1993 + t2697*t3347 + t3470*t4775 + 0.1305*(t3470*t3602 - 1.*t1754*t4483*t5157) + t1754*t5157*t5253 + t6347*t6649 + t6709*t6740 + t6895*t6913 + t6952*t7047 + t7116*t7186 + t7232*t7251 + t7277*t7302 + t7321*t7343 - 0.7055*(-1.*t7274*t7302 + t7253*t7343) + 0.0184*(t7253*t7302 + t7274*t7343) + var1(0);
  p_output1(1)=0. + t1720*t5157*t5253 + t1525*t7390 + t3347*t7408 + t4775*t7434 + 0.1305*(-1.*t1720*t4483*t5157 + t3602*t7434) + t6649*t7523 + t6740*t7544 + t6895*t7564 + t6952*t7576 + t7116*t7600 + t7232*t7611 + t7277*t7663 + t7321*t7704 - 0.7055*(-1.*t7274*t7663 + t7253*t7704) + 0.0184*(t7253*t7663 + t7274*t7704) + var1(1);
  p_output1(2)=0. + t1525*t1869*t5157 + t1582*t3347*t5157 - 1.*t1790*t5253 + t4775*t7759 + 0.1305*(t1790*t4483 + t3602*t7759) + t6649*t7813 + t6740*t7841 + t6895*t7866 + t6952*t7900 + t7116*t7919 + t7232*t7942 + t7277*t7956 + t7321*t7978 - 0.7055*(-1.*t7274*t7956 + t7253*t7978) + 0.0184*(t7253*t7956 + t7274*t7978) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_ankle_joint_left(const Eigen::Matrix<double,20,1> &var1)
//void p_ankle_joint_left(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



