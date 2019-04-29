/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:34 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_to_shin_left_src.h"

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
  double t1386;
  double t596;
  double t1658;
  double t755;
  double t1737;
  double t17;
  double t988;
  double t1753;
  double t1956;
  double t2403;
  double t2410;
  double t2672;
  double t2760;
  double t3736;
  double t3890;
  double t3912;
  double t5411;
  double t3354;
  double t3581;
  double t3627;
  double t5688;
  double t6811;
  double t6818;
  double t6837;
  double t6845;
  double t6613;
  double t6779;
  double t6804;
  double t6904;
  double t6930;
  double t6943;
  double t7074;
  double t7080;
  double t7089;
  double t7105;
  double t7148;
  double t7153;
  double t7157;
  double t7194;
  double t7195;
  double t7200;
  double t7218;
  double t7219;
  double t7224;
  double t7238;
  double t7249;
  double t7259;
  double t7272;
  double t7320;
  double t7335;
  double t7340;
  double t142;
  double t379;
  double t415;
  double t507;
  double t2879;
  double t3207;
  double t7392;
  double t7402;
  double t7412;
  double t7426;
  double t7431;
  double t7444;
  double t4931;
  double t5483;
  double t5632;
  double t5699;
  double t6135;
  double t6274;
  double t7452;
  double t7457;
  double t7459;
  double t6839;
  double t6851;
  double t6861;
  double t6944;
  double t6974;
  double t7007;
  double t7099;
  double t7115;
  double t7117;
  double t7512;
  double t7528;
  double t7533;
  double t7536;
  double t7545;
  double t7546;
  double t7175;
  double t7184;
  double t7185;
  double t7229;
  double t7245;
  double t7246;
  double t7551;
  double t7555;
  double t7556;
  double t7562;
  double t7564;
  double t7570;
  double t7292;
  double t7299;
  double t7304;
  double t7580;
  double t7585;
  double t7590;
  double t7593;
  double t7601;
  double t7603;
  double t7706;
  double t7719;
  double t7728;
  double t7761;
  double t7769;
  double t7772;
  double t7780;
  double t7808;
  double t7812;
  double t7830;
  double t7839;
  double t7850;
  double t7865;
  double t7879;
  double t7887;
  double t7896;
  double t7901;
  double t7907;
  double t7921;
  double t7926;
  double t7929;
  t1386 = Cos(var1[3]);
  t596 = Cos(var1[5]);
  t1658 = Sin(var1[4]);
  t755 = Sin(var1[3]);
  t1737 = Sin(var1[5]);
  t17 = Cos(var1[6]);
  t988 = -1.*t596*t755;
  t1753 = t1386*t1658*t1737;
  t1956 = t988 + t1753;
  t2403 = t1386*t596*t1658;
  t2410 = t755*t1737;
  t2672 = t2403 + t2410;
  t2760 = Sin(var1[6]);
  t3736 = Cos(var1[7]);
  t3890 = -1.*t3736;
  t3912 = 1. + t3890;
  t5411 = Sin(var1[7]);
  t3354 = t17*t1956;
  t3581 = t2672*t2760;
  t3627 = t3354 + t3581;
  t5688 = Cos(var1[4]);
  t6811 = Cos(var1[8]);
  t6818 = -1.*t6811;
  t6837 = 1. + t6818;
  t6845 = Sin(var1[8]);
  t6613 = t1386*t5688*t3736;
  t6779 = t3627*t5411;
  t6804 = t6613 + t6779;
  t6904 = t17*t2672;
  t6930 = -1.*t1956*t2760;
  t6943 = t6904 + t6930;
  t7074 = Cos(var1[9]);
  t7080 = -1.*t7074;
  t7089 = 1. + t7080;
  t7105 = Sin(var1[9]);
  t7148 = t6811*t6804;
  t7153 = t6943*t6845;
  t7157 = t7148 + t7153;
  t7194 = t6811*t6943;
  t7195 = -1.*t6804*t6845;
  t7200 = t7194 + t7195;
  t7218 = Cos(var1[10]);
  t7219 = -1.*t7218;
  t7224 = 1. + t7219;
  t7238 = Sin(var1[10]);
  t7249 = -1.*t7105*t7157;
  t7259 = t7074*t7200;
  t7272 = t7249 + t7259;
  t7320 = t7074*t7157;
  t7335 = t7105*t7200;
  t7340 = t7320 + t7335;
  t142 = -1.*t17;
  t379 = 1. + t142;
  t415 = 0.135*t379;
  t507 = 0. + t415;
  t2879 = -0.135*t2760;
  t3207 = 0. + t2879;
  t7392 = t1386*t596;
  t7402 = t755*t1658*t1737;
  t7412 = t7392 + t7402;
  t7426 = t596*t755*t1658;
  t7431 = -1.*t1386*t1737;
  t7444 = t7426 + t7431;
  t4931 = 0.135*t3912;
  t5483 = 0.049*t5411;
  t5632 = 0. + t4931 + t5483;
  t5699 = -0.049*t3912;
  t6135 = 0.135*t5411;
  t6274 = 0. + t5699 + t6135;
  t7452 = t17*t7412;
  t7457 = t7444*t2760;
  t7459 = t7452 + t7457;
  t6839 = -0.049*t6837;
  t6851 = -0.09*t6845;
  t6861 = 0. + t6839 + t6851;
  t6944 = -0.09*t6837;
  t6974 = 0.049*t6845;
  t7007 = 0. + t6944 + t6974;
  t7099 = -0.049*t7089;
  t7115 = -0.21*t7105;
  t7117 = 0. + t7099 + t7115;
  t7512 = t5688*t3736*t755;
  t7528 = t7459*t5411;
  t7533 = t7512 + t7528;
  t7536 = t17*t7444;
  t7545 = -1.*t7412*t2760;
  t7546 = t7536 + t7545;
  t7175 = -0.21*t7089;
  t7184 = 0.049*t7105;
  t7185 = 0. + t7175 + t7184;
  t7229 = -0.2707*t7224;
  t7245 = 0.0016*t7238;
  t7246 = 0. + t7229 + t7245;
  t7551 = t6811*t7533;
  t7555 = t7546*t6845;
  t7556 = t7551 + t7555;
  t7562 = t6811*t7546;
  t7564 = -1.*t7533*t6845;
  t7570 = t7562 + t7564;
  t7292 = -0.0016*t7224;
  t7299 = -0.2707*t7238;
  t7304 = 0. + t7292 + t7299;
  t7580 = -1.*t7105*t7556;
  t7585 = t7074*t7570;
  t7590 = t7580 + t7585;
  t7593 = t7074*t7556;
  t7601 = t7105*t7570;
  t7603 = t7593 + t7601;
  t7706 = t5688*t17*t1737;
  t7719 = t5688*t596*t2760;
  t7728 = t7706 + t7719;
  t7761 = -1.*t3736*t1658;
  t7769 = t7728*t5411;
  t7772 = t7761 + t7769;
  t7780 = t5688*t596*t17;
  t7808 = -1.*t5688*t1737*t2760;
  t7812 = t7780 + t7808;
  t7830 = t6811*t7772;
  t7839 = t7812*t6845;
  t7850 = t7830 + t7839;
  t7865 = t6811*t7812;
  t7879 = -1.*t7772*t6845;
  t7887 = t7865 + t7879;
  t7896 = -1.*t7105*t7850;
  t7901 = t7074*t7887;
  t7907 = t7896 + t7901;
  t7921 = t7074*t7850;
  t7926 = t7105*t7887;
  t7929 = t7921 + t7926;
  p_output1[0]=0. + t2672*t3207 + t1956*t507 + t3627*t5632 + 0.1305*(t3627*t3736 - 1.*t1386*t5411*t5688) + t1386*t5688*t6274 + t6804*t6861 + t6943*t7007 + t7117*t7157 + t7185*t7200 + t7246*t7272 + t7304*t7340 - 0.0016*(t7238*t7272 + t7218*t7340) - 0.2707*(t7218*t7272 - 1.*t7238*t7340) + var1[0];
  p_output1[1]=0. + t507*t7412 + t3207*t7444 + t5632*t7459 + t6861*t7533 + t7007*t7546 + t5688*t6274*t755 + 0.1305*(t3736*t7459 - 1.*t5411*t5688*t755) + t7117*t7556 + t7185*t7570 + t7246*t7590 + t7304*t7603 - 0.0016*(t7238*t7590 + t7218*t7603) - 0.2707*(t7218*t7590 - 1.*t7238*t7603) + var1[1];
  p_output1[2]=0. + t1737*t507*t5688 + t3207*t5688*t596 - 1.*t1658*t6274 + t5632*t7728 + 0.1305*(t1658*t5411 + t3736*t7728) + t6861*t7772 + t7007*t7812 + t7117*t7850 + t7185*t7887 + t7246*t7907 + t7304*t7929 - 0.0016*(t7238*t7907 + t7218*t7929) - 0.2707*(t7218*t7907 - 1.*t7238*t7929) + var1[2];
}



void p_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
