/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:35 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_to_shin_left_src.h"

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
  double t286;
  double t585;
  double t713;
  double t648;
  double t805;
  double t568;
  double t946;
  double t976;
  double t979;
  double t674;
  double t872;
  double t882;
  double t993;
  double t263;
  double t1159;
  double t1215;
  double t1222;
  double t313;
  double t339;
  double t565;
  double t917;
  double t995;
  double t1033;
  double t1085;
  double t1111;
  double t1115;
  double t1225;
  double t1344;
  double t1138;
  double t1284;
  double t1331;
  double t222;
  double t1381;
  double t1393;
  double t1454;
  double t133;
  double t1673;
  double t1681;
  double t1686;
  double t1568;
  double t1574;
  double t1617;
  double t1847;
  double t1854;
  double t1855;
  double t1559;
  double t1648;
  double t1719;
  double t1749;
  double t1752;
  double t1823;
  double t1502;
  double t1835;
  double t1880;
  double t1928;
  double t1951;
  double t1954;
  double t1964;
  double t2173;
  double t2174;
  double t2175;
  double t2087;
  double t2090;
  double t2116;
  double t2126;
  double t2140;
  double t2144;
  double t2170;
  double t2193;
  double t2263;
  double t2322;
  double t2323;
  double t2336;
  double t1336;
  double t1476;
  double t1483;
  double t1517;
  double t1532;
  double t1540;
  double t1950;
  double t1971;
  double t1979;
  double t1988;
  double t2013;
  double t2014;
  double t2308;
  double t2347;
  double t2378;
  double t2405;
  double t2415;
  double t2426;
  double t3056;
  double t3057;
  double t3148;
  double t3161;
  double t3235;
  double t3248;
  double t3360;
  double t3372;
  double t2464;
  double t2475;
  double t2518;
  double t2946;
  double t2951;
  double t2968;
  double t2973;
  double t3033;
  double t3051;
  double t3058;
  double t3074;
  double t3077;
  double t3100;
  double t3110;
  double t3123;
  double t3162;
  double t3163;
  double t3171;
  double t3195;
  double t3198;
  double t3207;
  double t3251;
  double t3265;
  double t3284;
  double t3306;
  double t3307;
  double t3325;
  double t3382;
  double t3412;
  double t3413;
  double t3435;
  double t3442;
  double t3477;
  double t2527;
  double t2542;
  double t2559;
  double t2616;
  double t2618;
  double t2630;
  t286 = Cos(var1[3]);
  t585 = Cos(var1[5]);
  t713 = Sin(var1[4]);
  t648 = Sin(var1[3]);
  t805 = Sin(var1[5]);
  t568 = Cos(var1[6]);
  t946 = t286*t585*t713;
  t976 = t648*t805;
  t979 = t946 + t976;
  t674 = -1.*t585*t648;
  t872 = t286*t713*t805;
  t882 = t674 + t872;
  t993 = Sin(var1[6]);
  t263 = Cos(var1[8]);
  t1159 = t568*t979;
  t1215 = -1.*t882*t993;
  t1222 = t1159 + t1215;
  t313 = Cos(var1[4]);
  t339 = Cos(var1[7]);
  t565 = t286*t313*t339;
  t917 = t568*t882;
  t995 = t979*t993;
  t1033 = t917 + t995;
  t1085 = Sin(var1[7]);
  t1111 = t1033*t1085;
  t1115 = t565 + t1111;
  t1225 = Sin(var1[8]);
  t1344 = Cos(var1[9]);
  t1138 = t263*t1115;
  t1284 = t1222*t1225;
  t1331 = t1138 + t1284;
  t222 = Sin(var1[9]);
  t1381 = t263*t1222;
  t1393 = -1.*t1115*t1225;
  t1454 = t1381 + t1393;
  t133 = Cos(var1[10]);
  t1673 = t585*t648*t713;
  t1681 = -1.*t286*t805;
  t1686 = t1673 + t1681;
  t1568 = t286*t585;
  t1574 = t648*t713*t805;
  t1617 = t1568 + t1574;
  t1847 = t568*t1686;
  t1854 = -1.*t1617*t993;
  t1855 = t1847 + t1854;
  t1559 = t313*t339*t648;
  t1648 = t568*t1617;
  t1719 = t1686*t993;
  t1749 = t1648 + t1719;
  t1752 = t1749*t1085;
  t1823 = t1559 + t1752;
  t1502 = Sin(var1[10]);
  t1835 = t263*t1823;
  t1880 = t1855*t1225;
  t1928 = t1835 + t1880;
  t1951 = t263*t1855;
  t1954 = -1.*t1823*t1225;
  t1964 = t1951 + t1954;
  t2173 = t313*t585*t568;
  t2174 = -1.*t313*t805*t993;
  t2175 = t2173 + t2174;
  t2087 = -1.*t339*t713;
  t2090 = t313*t568*t805;
  t2116 = t313*t585*t993;
  t2126 = t2090 + t2116;
  t2140 = t2126*t1085;
  t2144 = t2087 + t2140;
  t2170 = t263*t2144;
  t2193 = t2175*t1225;
  t2263 = t2170 + t2193;
  t2322 = t263*t2175;
  t2323 = -1.*t2144*t1225;
  t2336 = t2322 + t2323;
  t1336 = -1.*t222*t1331;
  t1476 = t1344*t1454;
  t1483 = t1336 + t1476;
  t1517 = t1344*t1331;
  t1532 = t222*t1454;
  t1540 = t1517 + t1532;
  t1950 = -1.*t222*t1928;
  t1971 = t1344*t1964;
  t1979 = t1950 + t1971;
  t1988 = t1344*t1928;
  t2013 = t222*t1964;
  t2014 = t1988 + t2013;
  t2308 = -1.*t222*t2263;
  t2347 = t1344*t2336;
  t2378 = t2308 + t2347;
  t2405 = t1344*t2263;
  t2415 = t222*t2336;
  t2426 = t2405 + t2415;
  t3056 = -1.*t339;
  t3057 = 1. + t3056;
  t3148 = -1.*t263;
  t3161 = 1. + t3148;
  t3235 = -1.*t1344;
  t3248 = 1. + t3235;
  t3360 = -1.*t133;
  t3372 = 1. + t3360;
  t2464 = t1502*t1483;
  t2475 = t133*t1540;
  t2518 = t2464 + t2475;
  t2946 = -1.*t568;
  t2951 = 1. + t2946;
  t2968 = 0.135*t2951;
  t2973 = 0. + t2968;
  t3033 = -0.135*t993;
  t3051 = 0. + t3033;
  t3058 = 0.135*t3057;
  t3074 = 0.049*t1085;
  t3077 = 0. + t3058 + t3074;
  t3100 = -0.049*t3057;
  t3110 = 0.135*t1085;
  t3123 = 0. + t3100 + t3110;
  t3162 = -0.049*t3161;
  t3163 = -0.09*t1225;
  t3171 = 0. + t3162 + t3163;
  t3195 = -0.09*t3161;
  t3198 = 0.049*t1225;
  t3207 = 0. + t3195 + t3198;
  t3251 = -0.049*t3248;
  t3265 = -0.21*t222;
  t3284 = 0. + t3251 + t3265;
  t3306 = -0.21*t3248;
  t3307 = 0.049*t222;
  t3325 = 0. + t3306 + t3307;
  t3382 = -0.2707*t3372;
  t3412 = 0.0016*t1502;
  t3413 = 0. + t3382 + t3412;
  t3435 = -0.0016*t3372;
  t3442 = -0.2707*t1502;
  t3477 = 0. + t3435 + t3442;
  t2527 = t1502*t1979;
  t2542 = t133*t2014;
  t2559 = t2527 + t2542;
  t2616 = t1502*t2378;
  t2618 = t133*t2426;
  t2630 = t2616 + t2618;
  p_output1[0]=-1.*t133*t1483 + t1502*t1540;
  p_output1[1]=-1.*t133*t1979 + t1502*t2014;
  p_output1[2]=-1.*t133*t2378 + t1502*t2426;
  p_output1[3]=0.;
  p_output1[4]=t2518;
  p_output1[5]=t2559;
  p_output1[6]=t2630;
  p_output1[7]=0.;
  p_output1[8]=t1085*t286*t313 - 1.*t1033*t339;
  p_output1[9]=-1.*t1749*t339 + t1085*t313*t648;
  p_output1[10]=-1.*t2126*t339 - 1.*t1085*t713;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.2707*(t133*t1483 - 1.*t1502*t1540) - 0.0016*t2518 + t1033*t3077 + t286*t3123*t313 + t1115*t3171 + t1222*t3207 + t1331*t3284 + t1454*t3325 + 0.1305*(-1.*t1085*t286*t313 + t1033*t339) + t1483*t3413 + t1540*t3477 + t2973*t882 + t3051*t979 + var1[0];
  p_output1[13]=0. - 0.2707*(t133*t1979 - 1.*t1502*t2014) - 0.0016*t2559 + t1617*t2973 + t1686*t3051 + t1749*t3077 + t1823*t3171 + t1855*t3207 + t1928*t3284 + t1964*t3325 + t1979*t3413 + t2014*t3477 + t3123*t313*t648 + 0.1305*(t1749*t339 - 1.*t1085*t313*t648) + var1[1];
  p_output1[14]=0. - 0.2707*(t133*t2378 - 1.*t1502*t2426) - 0.0016*t2630 + t2126*t3077 + t2144*t3171 + t2175*t3207 + t2263*t3284 + t2336*t3325 + t2378*t3413 + t2426*t3477 + t3051*t313*t585 - 1.*t3123*t713 + 0.1305*(t2126*t339 + t1085*t713) + t2973*t313*t805 + var1[2];
  p_output1[15]=1.;
}



void H_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
