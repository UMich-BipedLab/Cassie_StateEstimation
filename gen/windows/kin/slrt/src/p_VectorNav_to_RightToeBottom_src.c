/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:11:10 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_RightToeBottom_src.h"

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
  double t302;
  double t820;
  double t1129;
  double t1531;
  double t1550;
  double t1810;
  double t2117;
  double t4066;
  double t4087;
  double t4192;
  double t4343;
  double t3668;
  double t3683;
  double t3845;
  double t4421;
  double t4813;
  double t4878;
  double t5217;
  double t5248;
  double t5251;
  double t5317;
  double t5066;
  double t5196;
  double t5216;
  double t5595;
  double t5601;
  double t5604;
  double t5727;
  double t5730;
  double t5800;
  double t5857;
  double t5681;
  double t5691;
  double t5704;
  double t6007;
  double t6022;
  double t6050;
  double t6208;
  double t489;
  double t521;
  double t632;
  double t832;
  double t948;
  double t1075;
  double t1207;
  double t1370;
  double t6288;
  double t1986;
  double t2242;
  double t2245;
  double t2313;
  double t3485;
  double t3573;
  double t6323;
  double t6328;
  double t6351;
  double t6359;
  double t6377;
  double t6380;
  double t4194;
  double t4371;
  double t4406;
  double t4892;
  double t4992;
  double t4994;
  double t6391;
  double t6393;
  double t6398;
  double t6430;
  double t6446;
  double t6460;
  double t5275;
  double t5336;
  double t5358;
  double t5611;
  double t5618;
  double t5642;
  double t6467;
  double t6471;
  double t6474;
  double t6476;
  double t6479;
  double t6486;
  double t5851;
  double t5883;
  double t5907;
  double t6058;
  double t6062;
  double t6069;
  double t6497;
  double t6498;
  double t6499;
  double t6528;
  double t6533;
  double t6560;
  double t6243;
  double t6249;
  double t6252;
  double t6289;
  double t6295;
  double t6296;
  double t6673;
  double t6679;
  double t6682;
  double t6684;
  double t6689;
  double t6691;
  double t6700;
  double t6704;
  double t6705;
  double t6712;
  double t6725;
  double t6737;
  double t6751;
  double t6753;
  double t6759;
  double t6769;
  double t6770;
  double t6772;
  double t6777;
  double t6782;
  double t6783;
  double t6791;
  double t6793;
  double t6801;
  t302 = Cos(var1[8]);
  t820 = Cos(var1[9]);
  t1129 = Sin(var1[9]);
  t1531 = Cos(var1[10]);
  t1550 = -1.*t1531;
  t1810 = 1. + t1550;
  t2117 = Sin(var1[10]);
  t4066 = Cos(var1[11]);
  t4087 = -1.*t4066;
  t4192 = 1. + t4087;
  t4343 = Sin(var1[11]);
  t3668 = t302*t820*t1531;
  t3683 = -1.*t302*t1129*t2117;
  t3845 = t3668 + t3683;
  t4421 = -1.*t302*t1531*t1129;
  t4813 = -1.*t302*t820*t2117;
  t4878 = t4421 + t4813;
  t5217 = Cos(var1[12]);
  t5248 = -1.*t5217;
  t5251 = 1. + t5248;
  t5317 = Sin(var1[12]);
  t5066 = t4066*t3845;
  t5196 = t4878*t4343;
  t5216 = t5066 + t5196;
  t5595 = t4066*t4878;
  t5601 = -1.*t3845*t4343;
  t5604 = t5595 + t5601;
  t5727 = Cos(var1[13]);
  t5730 = -1.*t5727;
  t5800 = 1. + t5730;
  t5857 = Sin(var1[13]);
  t5681 = t5217*t5216;
  t5691 = t5604*t5317;
  t5704 = t5681 + t5691;
  t6007 = t5217*t5604;
  t6022 = -1.*t5216*t5317;
  t6050 = t6007 + t6022;
  t6208 = Cos(var1[7]);
  t489 = -1.*t302;
  t521 = 1. + t489;
  t632 = Sin(var1[8]);
  t832 = -1.*t820;
  t948 = 1. + t832;
  t1075 = -0.049*t948;
  t1207 = -0.09*t1129;
  t1370 = 0. + t1075 + t1207;
  t6288 = Sin(var1[7]);
  t1986 = -0.049*t1810;
  t2242 = -0.21*t2117;
  t2245 = 0. + t1986 + t2242;
  t2313 = -0.21*t1810;
  t3485 = 0.049*t2117;
  t3573 = 0. + t2313 + t3485;
  t6323 = t6208*t820*t632;
  t6328 = -1.*t6288*t1129;
  t6351 = t6323 + t6328;
  t6359 = -1.*t820*t6288;
  t6377 = -1.*t6208*t632*t1129;
  t6380 = t6359 + t6377;
  t4194 = -0.0016*t4192;
  t4371 = -0.2707*t4343;
  t4406 = 0. + t4194 + t4371;
  t4892 = -0.2707*t4192;
  t4992 = 0.0016*t4343;
  t4994 = 0. + t4892 + t4992;
  t6391 = t1531*t6351;
  t6393 = t6380*t2117;
  t6398 = t6391 + t6393;
  t6430 = t1531*t6380;
  t6446 = -1.*t6351*t2117;
  t6460 = t6430 + t6446;
  t5275 = 0.0184*t5251;
  t5336 = -0.7055*t5317;
  t5358 = 0. + t5275 + t5336;
  t5611 = -0.7055*t5251;
  t5618 = -0.0184*t5317;
  t5642 = 0. + t5611 + t5618;
  t6467 = t4066*t6398;
  t6471 = t6460*t4343;
  t6474 = t6467 + t6471;
  t6476 = t4066*t6460;
  t6479 = -1.*t6398*t4343;
  t6486 = t6476 + t6479;
  t5851 = -0.0216*t5800;
  t5883 = -1.1135*t5857;
  t5907 = 0. + t5851 + t5883;
  t6058 = -1.1135*t5800;
  t6062 = 0.0216*t5857;
  t6069 = 0. + t6058 + t6062;
  t6497 = t5217*t6474;
  t6498 = t6486*t5317;
  t6499 = t6497 + t6498;
  t6528 = t5217*t6486;
  t6533 = -1.*t6474*t5317;
  t6560 = t6528 + t6533;
  t6243 = -0.135*t521;
  t6249 = 0.049*t632;
  t6252 = 0. + t6243 + t6249;
  t6289 = -0.09*t948;
  t6295 = 0.049*t1129;
  t6296 = 0. + t6289 + t6295;
  t6673 = t820*t6288*t632;
  t6679 = t6208*t1129;
  t6682 = t6673 + t6679;
  t6684 = t6208*t820;
  t6689 = -1.*t6288*t632*t1129;
  t6691 = t6684 + t6689;
  t6700 = t1531*t6682;
  t6704 = t6691*t2117;
  t6705 = t6700 + t6704;
  t6712 = t1531*t6691;
  t6725 = -1.*t6682*t2117;
  t6737 = t6712 + t6725;
  t6751 = t4066*t6705;
  t6753 = t6737*t4343;
  t6759 = t6751 + t6753;
  t6769 = t4066*t6737;
  t6770 = -1.*t6705*t4343;
  t6772 = t6769 + t6770;
  t6777 = t5217*t6759;
  t6782 = t6772*t5317;
  t6783 = t6777 + t6782;
  t6791 = t5217*t6772;
  t6793 = -1.*t6759*t5317;
  t6801 = t6791 + t6793;
  p_output1[0]=-0.03155 + t1370*t302 - 1.*t1129*t302*t3573 + t3845*t4406 + t4878*t4994 - 0.049*t521 + t5216*t5358 + t5604*t5642 + t5704*t5907 - 1.1312*(-1.*t5704*t5857 + t5727*t6050) + 0.0306*(t5704*t5727 + t5857*t6050) + t6050*t6069 - 0.004500000000000004*t632 + t2245*t302*t820;
  p_output1[1]=0. - 0.135*(1. - 1.*t6208) - 0.1305*t302*t6208 + t6208*t6252 - 1.*t6288*t6296 + t1370*t6208*t632 + t2245*t6351 + t3573*t6380 + t4406*t6398 + t4994*t6460 + t5358*t6474 + t5642*t6486 + t5907*t6499 + t6069*t6560 - 1.1312*(-1.*t5857*t6499 + t5727*t6560) + 0.0306*(t5727*t6499 + t5857*t6560);
  p_output1[2]=0.07996 + 0.135*t6288 - 0.1305*t302*t6288 + t6252*t6288 + t6208*t6296 + t1370*t6288*t632 + t2245*t6682 + t3573*t6691 + t4406*t6705 + t4994*t6737 + t5358*t6759 + t5642*t6772 + t5907*t6783 + t6069*t6801 - 1.1312*(-1.*t5857*t6783 + t5727*t6801) + 0.0306*(t5727*t6783 + t5857*t6801);
}



void p_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
