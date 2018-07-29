/*
 * Automatically Generated from Mathematica.
 * Sun 29 Jul 2018 03:58:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_RightToeBottom_src.h"

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
  double t67;
  double t227;
  double t255;
  double t214;
  double t269;
  double t207;
  double t406;
  double t410;
  double t423;
  double t242;
  double t320;
  double t328;
  double t424;
  double t179;
  double t454;
  double t487;
  double t525;
  double t364;
  double t439;
  double t449;
  double t526;
  double t161;
  double t550;
  double t567;
  double t569;
  double t450;
  double t527;
  double t543;
  double t584;
  double t48;
  double t29;
  double t75;
  double t712;
  double t719;
  double t720;
  double t681;
  double t684;
  double t689;
  double t798;
  double t805;
  double t810;
  double t698;
  double t727;
  double t736;
  double t839;
  double t844;
  double t856;
  double t764;
  double t820;
  double t822;
  double t917;
  double t930;
  double t947;
  double t838;
  double t861;
  double t864;
  double t1033;
  double t1036;
  double t1039;
  double t1005;
  double t1006;
  double t1009;
  double t1070;
  double t1075;
  double t1077;
  double t1029;
  double t1056;
  double t1062;
  double t1112;
  double t1116;
  double t1119;
  double t1064;
  double t1083;
  double t1089;
  double t1188;
  double t1200;
  double t1208;
  double t1110;
  double t1129;
  double t1135;
  double t547;
  double t590;
  double t596;
  double t643;
  double t659;
  double t664;
  double t868;
  double t951;
  double t965;
  double t976;
  double t988;
  double t989;
  double t1187;
  double t1228;
  double t1240;
  double t1256;
  double t1274;
  double t1276;
  t67 = Cos(var1[8]);
  t227 = Cos(var1[10]);
  t255 = Sin(var1[9]);
  t214 = Cos(var1[9]);
  t269 = Sin(var1[10]);
  t207 = Cos(var1[11]);
  t406 = -1.*t67*t227*t255;
  t410 = -1.*t67*t214*t269;
  t423 = t406 + t410;
  t242 = t67*t214*t227;
  t320 = -1.*t67*t255*t269;
  t328 = t242 + t320;
  t424 = Sin(var1[11]);
  t179 = Cos(var1[12]);
  t454 = t207*t423;
  t487 = -1.*t328*t424;
  t525 = t454 + t487;
  t364 = t207*t328;
  t439 = t423*t424;
  t449 = t364 + t439;
  t526 = Sin(var1[12]);
  t161 = Cos(var1[13]);
  t550 = t179*t525;
  t567 = -1.*t449*t526;
  t569 = t550 + t567;
  t450 = t179*t449;
  t527 = t525*t526;
  t543 = t450 + t527;
  t584 = Sin(var1[13]);
  t48 = Cos(var1[7]);
  t29 = Sin(var1[8]);
  t75 = Sin(var1[7]);
  t712 = -1.*t214*t75;
  t719 = -1.*t48*t29*t255;
  t720 = t712 + t719;
  t681 = t48*t214*t29;
  t684 = -1.*t75*t255;
  t689 = t681 + t684;
  t798 = t227*t720;
  t805 = -1.*t689*t269;
  t810 = t798 + t805;
  t698 = t227*t689;
  t727 = t720*t269;
  t736 = t698 + t727;
  t839 = t207*t810;
  t844 = -1.*t736*t424;
  t856 = t839 + t844;
  t764 = t207*t736;
  t820 = t810*t424;
  t822 = t764 + t820;
  t917 = t179*t856;
  t930 = -1.*t822*t526;
  t947 = t917 + t930;
  t838 = t179*t822;
  t861 = t856*t526;
  t864 = t838 + t861;
  t1033 = t48*t214;
  t1036 = -1.*t75*t29*t255;
  t1039 = t1033 + t1036;
  t1005 = t214*t75*t29;
  t1006 = t48*t255;
  t1009 = t1005 + t1006;
  t1070 = t227*t1039;
  t1075 = -1.*t1009*t269;
  t1077 = t1070 + t1075;
  t1029 = t227*t1009;
  t1056 = t1039*t269;
  t1062 = t1029 + t1056;
  t1112 = t207*t1077;
  t1116 = -1.*t1062*t424;
  t1119 = t1112 + t1116;
  t1064 = t207*t1062;
  t1083 = t1077*t424;
  t1089 = t1064 + t1083;
  t1188 = t179*t1119;
  t1200 = -1.*t1089*t526;
  t1208 = t1188 + t1200;
  t1110 = t179*t1089;
  t1129 = t1119*t526;
  t1135 = t1110 + t1129;
  t547 = t161*t543;
  t590 = t569*t584;
  t596 = t547 + t590;
  t643 = t161*t569;
  t659 = -1.*t543*t584;
  t664 = t643 + t659;
  t868 = t161*t864;
  t951 = t947*t584;
  t965 = t868 + t951;
  t976 = t161*t947;
  t988 = -1.*t864*t584;
  t989 = t976 + t988;
  t1187 = t161*t1135;
  t1228 = t1208*t584;
  t1240 = t1187 + t1228;
  t1256 = t161*t1208;
  t1274 = -1.*t1135*t584;
  t1276 = t1256 + t1274;
  p_output1[0]=0. + t29;
  p_output1[1]=0. - 1.*t48*t67;
  p_output1[2]=0. - 1.*t67*t75;
  p_output1[3]=0. + 0.642788*t596 + 0.766044*t664;
  p_output1[4]=0. + 0.642788*t965 + 0.766044*t989;
  p_output1[5]=0. + 0.642788*t1240 + 0.766044*t1276;
  p_output1[6]=0. - 0.766044*t596 + 0.642788*t664;
  p_output1[7]=0. - 0.766044*t965 + 0.642788*t989;
  p_output1[8]=0. - 0.766044*t1240 + 0.642788*t1276;
}



void R_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
