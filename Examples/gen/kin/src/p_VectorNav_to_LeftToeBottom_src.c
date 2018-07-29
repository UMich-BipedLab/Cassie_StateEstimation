/*
 * Automatically Generated from Mathematica.
 * Sun 29 Jul 2018 03:58:22 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_LeftToeBottom_src.h"

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
  double t5;
  double t275;
  double t283;
  double t285;
  double t314;
  double t512;
  double t966;
  double t1981;
  double t1994;
  double t2013;
  double t2070;
  double t2360;
  double t2407;
  double t2408;
  double t2663;
  double t2669;
  double t2675;
  double t2857;
  double t2913;
  double t2936;
  double t2998;
  double t3028;
  double t3054;
  double t3083;
  double t3253;
  double t3257;
  double t3266;
  double t3295;
  double t3300;
  double t3304;
  double t3338;
  double t3353;
  double t3361;
  double t3365;
  double t3409;
  double t3411;
  double t3426;
  double t3578;
  double t132;
  double t173;
  double t639;
  double t826;
  double t885;
  double t957;
  double t1137;
  double t1352;
  double t499;
  double t583;
  double t603;
  double t3721;
  double t1560;
  double t1639;
  double t1729;
  double t2018;
  double t2115;
  double t2252;
  double t3744;
  double t3747;
  double t3762;
  double t3785;
  double t3803;
  double t3804;
  double t2492;
  double t2494;
  double t2506;
  double t2953;
  double t3007;
  double t3027;
  double t3839;
  double t3847;
  double t3861;
  double t3886;
  double t3892;
  double t3895;
  double t3135;
  double t3165;
  double t3179;
  double t3307;
  double t3345;
  double t3348;
  double t3930;
  double t3945;
  double t3947;
  double t3961;
  double t3962;
  double t3978;
  double t3392;
  double t3405;
  double t3408;
  double t3998;
  double t4017;
  double t4026;
  double t4030;
  double t4033;
  double t4035;
  double t3626;
  double t3674;
  double t3686;
  double t3722;
  double t3723;
  double t3726;
  double t4239;
  double t4242;
  double t4246;
  double t4267;
  double t4270;
  double t4271;
  double t4285;
  double t4293;
  double t4296;
  double t4299;
  double t4301;
  double t4314;
  double t4343;
  double t4344;
  double t4352;
  double t4411;
  double t4417;
  double t4422;
  double t4444;
  double t4453;
  double t4466;
  double t4472;
  double t4473;
  double t4480;
  t5 = Cos(var1[1]);
  t275 = Cos(var1[2]);
  t283 = Cos(var1[3]);
  t285 = -1.*t283;
  t314 = 1. + t285;
  t512 = Sin(var1[3]);
  t966 = Sin(var1[2]);
  t1981 = Cos(var1[4]);
  t1994 = -1.*t1981;
  t2013 = 1. + t1994;
  t2070 = Sin(var1[4]);
  t2360 = -1.*t5*t275*t512;
  t2407 = -1.*t283*t5*t966;
  t2408 = t2360 + t2407;
  t2663 = t283*t5*t275;
  t2669 = -1.*t5*t512*t966;
  t2675 = t2663 + t2669;
  t2857 = Cos(var1[5]);
  t2913 = -1.*t2857;
  t2936 = 1. + t2913;
  t2998 = Sin(var1[5]);
  t3028 = t2070*t2408;
  t3054 = t1981*t2675;
  t3083 = t3028 + t3054;
  t3253 = t1981*t2408;
  t3257 = -1.*t2070*t2675;
  t3266 = t3253 + t3257;
  t3295 = Cos(var1[6]);
  t3300 = -1.*t3295;
  t3304 = 1. + t3300;
  t3338 = Sin(var1[6]);
  t3353 = -1.*t2998*t3083;
  t3361 = t2857*t3266;
  t3365 = t3353 + t3361;
  t3409 = t2857*t3083;
  t3411 = t2998*t3266;
  t3426 = t3409 + t3411;
  t3578 = Cos(var1[0]);
  t132 = -1.*t5;
  t173 = 1. + t132;
  t639 = Sin(var1[1]);
  t826 = -1.*t275;
  t885 = 1. + t826;
  t957 = -0.049*t885;
  t1137 = -0.09*t966;
  t1352 = 0. + t957 + t1137;
  t499 = -0.049*t314;
  t583 = -0.21*t512;
  t603 = 0. + t499 + t583;
  t3721 = Sin(var1[0]);
  t1560 = -0.21*t314;
  t1639 = 0.049*t512;
  t1729 = 0. + t1560 + t1639;
  t2018 = -0.2707*t2013;
  t2115 = 0.0016*t2070;
  t2252 = 0. + t2018 + t2115;
  t3744 = t3578*t275*t639;
  t3747 = -1.*t3721*t966;
  t3762 = t3744 + t3747;
  t3785 = -1.*t275*t3721;
  t3803 = -1.*t3578*t639*t966;
  t3804 = t3785 + t3803;
  t2492 = -0.0016*t2013;
  t2494 = -0.2707*t2070;
  t2506 = 0. + t2492 + t2494;
  t2953 = 0.0184*t2936;
  t3007 = -0.7055*t2998;
  t3027 = 0. + t2953 + t3007;
  t3839 = -1.*t512*t3762;
  t3847 = t283*t3804;
  t3861 = t3839 + t3847;
  t3886 = t283*t3762;
  t3892 = t512*t3804;
  t3895 = t3886 + t3892;
  t3135 = -0.7055*t2936;
  t3165 = -0.0184*t2998;
  t3179 = 0. + t3135 + t3165;
  t3307 = -1.1135*t3304;
  t3345 = 0.0216*t3338;
  t3348 = 0. + t3307 + t3345;
  t3930 = t2070*t3861;
  t3945 = t1981*t3895;
  t3947 = t3930 + t3945;
  t3961 = t1981*t3861;
  t3962 = -1.*t2070*t3895;
  t3978 = t3961 + t3962;
  t3392 = -0.0216*t3304;
  t3405 = -1.1135*t3338;
  t3408 = 0. + t3392 + t3405;
  t3998 = -1.*t2998*t3947;
  t4017 = t2857*t3978;
  t4026 = t3998 + t4017;
  t4030 = t2857*t3947;
  t4033 = t2998*t3978;
  t4035 = t4030 + t4033;
  t3626 = 0.135*t173;
  t3674 = 0.049*t639;
  t3686 = 0. + t3626 + t3674;
  t3722 = -0.09*t885;
  t3723 = 0.049*t966;
  t3726 = 0. + t3722 + t3723;
  t4239 = t275*t3721*t639;
  t4242 = t3578*t966;
  t4246 = t4239 + t4242;
  t4267 = t3578*t275;
  t4270 = -1.*t3721*t639*t966;
  t4271 = t4267 + t4270;
  t4285 = -1.*t512*t4246;
  t4293 = t283*t4271;
  t4296 = t4285 + t4293;
  t4299 = t283*t4246;
  t4301 = t512*t4271;
  t4314 = t4299 + t4301;
  t4343 = t2070*t4296;
  t4344 = t1981*t4314;
  t4352 = t4343 + t4344;
  t4411 = t1981*t4296;
  t4417 = -1.*t2070*t4314;
  t4422 = t4411 + t4417;
  t4444 = -1.*t2998*t4352;
  t4453 = t2857*t4422;
  t4466 = t4444 + t4453;
  t4472 = t2857*t4352;
  t4473 = t2998*t4422;
  t4480 = t4472 + t4473;
  p_output1[0]=-0.03155 - 0.049*t173 + t2252*t2408 + t2506*t2675 + t3027*t3083 + t3179*t3266 + t3348*t3365 + t3408*t3426 + 0.0306*(t3338*t3365 + t3295*t3426) - 1.1312*(t3295*t3365 - 1.*t3338*t3426) + t1352*t5 + t275*t5*t603 + 0.004500000000000004*t639 - 1.*t1729*t5*t966;
  p_output1[1]=0. + 0.135*(1. - 1.*t3578) + t3578*t3686 - 1.*t3721*t3726 + t1729*t3804 + t2252*t3861 + t2506*t3895 + t3027*t3947 + t3179*t3978 + t3348*t4026 + t3408*t4035 + 0.0306*(t3338*t4026 + t3295*t4035) - 1.1312*(t3295*t4026 - 1.*t3338*t4035) + 0.1305*t3578*t5 + t3762*t603 + t1352*t3578*t639;
  p_output1[2]=0.07996 - 0.135*t3721 + t3686*t3721 + t3578*t3726 + t1729*t4271 + t2252*t4296 + t2506*t4314 + t3027*t4352 + t3179*t4422 + t3348*t4466 + t3408*t4480 + 0.0306*(t3338*t4466 + t3295*t4480) - 1.1312*(t3295*t4466 - 1.*t3338*t4480) + 0.1305*t3721*t5 + t4246*t603 + t1352*t3721*t639;
}



void p_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
