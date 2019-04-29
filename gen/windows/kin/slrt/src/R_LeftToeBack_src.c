/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:20:44 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBack_src.h"

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
  double t714;
  double t403;
  double t731;
  double t464;
  double t773;
  double t362;
  double t400;
  double t1170;
  double t1219;
  double t1227;
  double t581;
  double t829;
  double t872;
  double t893;
  double t988;
  double t1040;
  double t1091;
  double t1173;
  double t1192;
  double t2093;
  double t2152;
  double t2155;
  double t2157;
  double t2132;
  double t2135;
  double t2138;
  double t2159;
  double t2352;
  double t2140;
  double t2161;
  double t2167;
  double t2077;
  double t2359;
  double t2384;
  double t2401;
  double t2518;
  double t2302;
  double t2454;
  double t2485;
  double t2067;
  double t2530;
  double t2533;
  double t2548;
  double t2569;
  double t2513;
  double t2549;
  double t2560;
  double t1983;
  double t2599;
  double t2605;
  double t2646;
  double t2719;
  double t2561;
  double t2665;
  double t2673;
  double t1973;
  double t2721;
  double t2735;
  double t2775;
  double t1246;
  double t1299;
  double t1382;
  double t1419;
  double t1465;
  double t1489;
  double t1531;
  double t1544;
  double t1556;
  double t3047;
  double t3133;
  double t3143;
  double t2991;
  double t2998;
  double t2999;
  double t3040;
  double t3198;
  double t3220;
  double t3245;
  double t3255;
  double t3257;
  double t3241;
  double t3282;
  double t3291;
  double t3352;
  double t3374;
  double t3377;
  double t3292;
  double t3389;
  double t3396;
  double t3399;
  double t3400;
  double t3434;
  double t3398;
  double t3455;
  double t3469;
  double t3479;
  double t3505;
  double t3544;
  double t1678;
  double t1796;
  double t1805;
  double t3893;
  double t3968;
  double t3978;
  double t3839;
  double t3854;
  double t3860;
  double t3886;
  double t3982;
  double t3984;
  double t4016;
  double t4028;
  double t4042;
  double t3988;
  double t4078;
  double t4086;
  double t4091;
  double t4099;
  double t4102;
  double t4089;
  double t4103;
  double t4126;
  double t4160;
  double t4164;
  double t4172;
  double t4132;
  double t4180;
  double t4181;
  double t4201;
  double t4220;
  double t4231;
  double t2705;
  double t2787;
  double t2825;
  double t2900;
  double t2920;
  double t2962;
  double t3478;
  double t3613;
  double t3648;
  double t3677;
  double t3685;
  double t3696;
  double t4185;
  double t4233;
  double t4234;
  double t4241;
  double t4243;
  double t4271;
  t714 = Cos(var1[3]);
  t403 = Cos(var1[5]);
  t731 = Sin(var1[4]);
  t464 = Sin(var1[3]);
  t773 = Sin(var1[5]);
  t362 = Cos(var1[7]);
  t400 = Cos(var1[6]);
  t1170 = Sin(var1[6]);
  t1219 = Cos(var1[4]);
  t1227 = Sin(var1[7]);
  t581 = -1.*t403*t464;
  t829 = t714*t731*t773;
  t872 = t581 + t829;
  t893 = t400*t872;
  t988 = t714*t403*t731;
  t1040 = t464*t773;
  t1091 = t988 + t1040;
  t1173 = t1091*t1170;
  t1192 = t893 + t1173;
  t2093 = Cos(var1[8]);
  t2152 = t400*t1091;
  t2155 = -1.*t872*t1170;
  t2157 = t2152 + t2155;
  t2132 = t714*t1219*t362;
  t2135 = t1192*t1227;
  t2138 = t2132 + t2135;
  t2159 = Sin(var1[8]);
  t2352 = Cos(var1[9]);
  t2140 = t2093*t2138;
  t2161 = t2157*t2159;
  t2167 = t2140 + t2161;
  t2077 = Sin(var1[9]);
  t2359 = t2093*t2157;
  t2384 = -1.*t2138*t2159;
  t2401 = t2359 + t2384;
  t2518 = Cos(var1[10]);
  t2302 = -1.*t2077*t2167;
  t2454 = t2352*t2401;
  t2485 = t2302 + t2454;
  t2067 = Sin(var1[10]);
  t2530 = t2352*t2167;
  t2533 = t2077*t2401;
  t2548 = t2530 + t2533;
  t2569 = Cos(var1[11]);
  t2513 = t2067*t2485;
  t2549 = t2518*t2548;
  t2560 = t2513 + t2549;
  t1983 = Sin(var1[11]);
  t2599 = t2518*t2485;
  t2605 = -1.*t2067*t2548;
  t2646 = t2599 + t2605;
  t2719 = Cos(var1[12]);
  t2561 = -1.*t1983*t2560;
  t2665 = t2569*t2646;
  t2673 = t2561 + t2665;
  t1973 = Sin(var1[12]);
  t2721 = t2569*t2560;
  t2735 = t1983*t2646;
  t2775 = t2721 + t2735;
  t1246 = t714*t403;
  t1299 = t464*t731*t773;
  t1382 = t1246 + t1299;
  t1419 = t400*t1382;
  t1465 = t403*t464*t731;
  t1489 = -1.*t714*t773;
  t1531 = t1465 + t1489;
  t1544 = t1531*t1170;
  t1556 = t1419 + t1544;
  t3047 = t400*t1531;
  t3133 = -1.*t1382*t1170;
  t3143 = t3047 + t3133;
  t2991 = t1219*t362*t464;
  t2998 = t1556*t1227;
  t2999 = t2991 + t2998;
  t3040 = t2093*t2999;
  t3198 = t3143*t2159;
  t3220 = t3040 + t3198;
  t3245 = t2093*t3143;
  t3255 = -1.*t2999*t2159;
  t3257 = t3245 + t3255;
  t3241 = -1.*t2077*t3220;
  t3282 = t2352*t3257;
  t3291 = t3241 + t3282;
  t3352 = t2352*t3220;
  t3374 = t2077*t3257;
  t3377 = t3352 + t3374;
  t3292 = t2067*t3291;
  t3389 = t2518*t3377;
  t3396 = t3292 + t3389;
  t3399 = t2518*t3291;
  t3400 = -1.*t2067*t3377;
  t3434 = t3399 + t3400;
  t3398 = -1.*t1983*t3396;
  t3455 = t2569*t3434;
  t3469 = t3398 + t3455;
  t3479 = t2569*t3396;
  t3505 = t1983*t3434;
  t3544 = t3479 + t3505;
  t1678 = t1219*t400*t773;
  t1796 = t1219*t403*t1170;
  t1805 = t1678 + t1796;
  t3893 = t1219*t403*t400;
  t3968 = -1.*t1219*t773*t1170;
  t3978 = t3893 + t3968;
  t3839 = -1.*t362*t731;
  t3854 = t1805*t1227;
  t3860 = t3839 + t3854;
  t3886 = t2093*t3860;
  t3982 = t3978*t2159;
  t3984 = t3886 + t3982;
  t4016 = t2093*t3978;
  t4028 = -1.*t3860*t2159;
  t4042 = t4016 + t4028;
  t3988 = -1.*t2077*t3984;
  t4078 = t2352*t4042;
  t4086 = t3988 + t4078;
  t4091 = t2352*t3984;
  t4099 = t2077*t4042;
  t4102 = t4091 + t4099;
  t4089 = t2067*t4086;
  t4103 = t2518*t4102;
  t4126 = t4089 + t4103;
  t4160 = t2518*t4086;
  t4164 = -1.*t2067*t4102;
  t4172 = t4160 + t4164;
  t4132 = -1.*t1983*t4126;
  t4180 = t2569*t4172;
  t4181 = t4132 + t4180;
  t4201 = t2569*t4126;
  t4220 = t1983*t4172;
  t4231 = t4201 + t4220;
  t2705 = t1973*t2673;
  t2787 = t2719*t2775;
  t2825 = t2705 + t2787;
  t2900 = t2719*t2673;
  t2920 = -1.*t1973*t2775;
  t2962 = t2900 + t2920;
  t3478 = t1973*t3469;
  t3613 = t2719*t3544;
  t3648 = t3478 + t3613;
  t3677 = t2719*t3469;
  t3685 = -1.*t1973*t3544;
  t3696 = t3677 + t3685;
  t4185 = t1973*t4181;
  t4233 = t2719*t4231;
  t4234 = t4185 + t4233;
  t4241 = t2719*t4181;
  t4243 = -1.*t1973*t4231;
  t4271 = t4241 + t4243;
  p_output1[0]=-1.*t1192*t362 + t1219*t1227*t714;
  p_output1[1]=-1.*t1556*t362 + t1219*t1227*t464;
  p_output1[2]=-1.*t1805*t362 - 1.*t1227*t731;
  p_output1[3]=0.642788*t2825 + 0.766044*t2962;
  p_output1[4]=0.642788*t3648 + 0.766044*t3696;
  p_output1[5]=0.642788*t4234 + 0.766044*t4271;
  p_output1[6]=-0.766044*t2825 + 0.642788*t2962;
  p_output1[7]=-0.766044*t3648 + 0.642788*t3696;
  p_output1[8]=-0.766044*t4234 + 0.642788*t4271;
}



void R_LeftToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
