/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:43 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeFront.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t383;
  double t218;
  double t470;
  double t262;
  double t487;
  double t68;
  double t134;
  double t654;
  double t801;
  double t806;
  double t271;
  double t511;
  double t562;
  double t585;
  double t597;
  double t599;
  double t647;
  double t688;
  double t728;
  double t1865;
  double t1966;
  double t1993;
  double t2046;
  double t1877;
  double t1908;
  double t1912;
  double t2055;
  double t2146;
  double t1954;
  double t2077;
  double t2113;
  double t1794;
  double t2214;
  double t2218;
  double t2240;
  double t2324;
  double t2124;
  double t2279;
  double t2308;
  double t1729;
  double t2370;
  double t2383;
  double t2390;
  double t2444;
  double t2319;
  double t2403;
  double t2434;
  double t1691;
  double t2463;
  double t2522;
  double t2575;
  double t2732;
  double t2443;
  double t2582;
  double t2690;
  double t1635;
  double t2757;
  double t2778;
  double t2787;
  double t915;
  double t925;
  double t1013;
  double t1080;
  double t1092;
  double t1102;
  double t1140;
  double t1142;
  double t1153;
  double t3129;
  double t3166;
  double t3215;
  double t3088;
  double t3091;
  double t3108;
  double t3115;
  double t3255;
  double t3347;
  double t3421;
  double t3428;
  double t3444;
  double t3386;
  double t3455;
  double t3460;
  double t3540;
  double t3651;
  double t3672;
  double t3509;
  double t3673;
  double t3686;
  double t3713;
  double t3721;
  double t3761;
  double t3689;
  double t3788;
  double t3836;
  double t3932;
  double t3941;
  double t3946;
  double t1248;
  double t1385;
  double t1409;
  double t4148;
  double t4150;
  double t4161;
  double t4089;
  double t4094;
  double t4118;
  double t4126;
  double t4226;
  double t4236;
  double t4253;
  double t4259;
  double t4264;
  double t4245;
  double t4285;
  double t4296;
  double t4326;
  double t4334;
  double t4375;
  double t4312;
  double t4395;
  double t4410;
  double t4435;
  double t4445;
  double t4446;
  double t4416;
  double t4455;
  double t4474;
  double t4500;
  double t4512;
  double t4515;
  double t2702;
  double t2840;
  double t2846;
  double t2885;
  double t2895;
  double t2928;
  double t3892;
  double t3960;
  double t3967;
  double t3985;
  double t4009;
  double t4050;
  double t4488;
  double t4518;
  double t4519;
  double t4574;
  double t4584;
  double t4602;
  t383 = Cos(var1[3]);
  t218 = Cos(var1[5]);
  t470 = Sin(var1[4]);
  t262 = Sin(var1[3]);
  t487 = Sin(var1[5]);
  t68 = Cos(var1[7]);
  t134 = Cos(var1[6]);
  t654 = Sin(var1[6]);
  t801 = Cos(var1[4]);
  t806 = Sin(var1[7]);
  t271 = -1.*t218*t262;
  t511 = t383*t470*t487;
  t562 = t271 + t511;
  t585 = t134*t562;
  t597 = t383*t218*t470;
  t599 = t262*t487;
  t647 = t597 + t599;
  t688 = t647*t654;
  t728 = t585 + t688;
  t1865 = Cos(var1[8]);
  t1966 = t134*t647;
  t1993 = -1.*t562*t654;
  t2046 = t1966 + t1993;
  t1877 = t383*t801*t68;
  t1908 = t728*t806;
  t1912 = t1877 + t1908;
  t2055 = Sin(var1[8]);
  t2146 = Cos(var1[9]);
  t1954 = t1865*t1912;
  t2077 = t2046*t2055;
  t2113 = t1954 + t2077;
  t1794 = Sin(var1[9]);
  t2214 = t1865*t2046;
  t2218 = -1.*t1912*t2055;
  t2240 = t2214 + t2218;
  t2324 = Cos(var1[10]);
  t2124 = -1.*t1794*t2113;
  t2279 = t2146*t2240;
  t2308 = t2124 + t2279;
  t1729 = Sin(var1[10]);
  t2370 = t2146*t2113;
  t2383 = t1794*t2240;
  t2390 = t2370 + t2383;
  t2444 = Cos(var1[11]);
  t2319 = t1729*t2308;
  t2403 = t2324*t2390;
  t2434 = t2319 + t2403;
  t1691 = Sin(var1[11]);
  t2463 = t2324*t2308;
  t2522 = -1.*t1729*t2390;
  t2575 = t2463 + t2522;
  t2732 = Cos(var1[12]);
  t2443 = -1.*t1691*t2434;
  t2582 = t2444*t2575;
  t2690 = t2443 + t2582;
  t1635 = Sin(var1[12]);
  t2757 = t2444*t2434;
  t2778 = t1691*t2575;
  t2787 = t2757 + t2778;
  t915 = t383*t218;
  t925 = t262*t470*t487;
  t1013 = t915 + t925;
  t1080 = t134*t1013;
  t1092 = t218*t262*t470;
  t1102 = -1.*t383*t487;
  t1140 = t1092 + t1102;
  t1142 = t1140*t654;
  t1153 = t1080 + t1142;
  t3129 = t134*t1140;
  t3166 = -1.*t1013*t654;
  t3215 = t3129 + t3166;
  t3088 = t801*t68*t262;
  t3091 = t1153*t806;
  t3108 = t3088 + t3091;
  t3115 = t1865*t3108;
  t3255 = t3215*t2055;
  t3347 = t3115 + t3255;
  t3421 = t1865*t3215;
  t3428 = -1.*t3108*t2055;
  t3444 = t3421 + t3428;
  t3386 = -1.*t1794*t3347;
  t3455 = t2146*t3444;
  t3460 = t3386 + t3455;
  t3540 = t2146*t3347;
  t3651 = t1794*t3444;
  t3672 = t3540 + t3651;
  t3509 = t1729*t3460;
  t3673 = t2324*t3672;
  t3686 = t3509 + t3673;
  t3713 = t2324*t3460;
  t3721 = -1.*t1729*t3672;
  t3761 = t3713 + t3721;
  t3689 = -1.*t1691*t3686;
  t3788 = t2444*t3761;
  t3836 = t3689 + t3788;
  t3932 = t2444*t3686;
  t3941 = t1691*t3761;
  t3946 = t3932 + t3941;
  t1248 = t801*t134*t487;
  t1385 = t801*t218*t654;
  t1409 = t1248 + t1385;
  t4148 = t801*t218*t134;
  t4150 = -1.*t801*t487*t654;
  t4161 = t4148 + t4150;
  t4089 = -1.*t68*t470;
  t4094 = t1409*t806;
  t4118 = t4089 + t4094;
  t4126 = t1865*t4118;
  t4226 = t4161*t2055;
  t4236 = t4126 + t4226;
  t4253 = t1865*t4161;
  t4259 = -1.*t4118*t2055;
  t4264 = t4253 + t4259;
  t4245 = -1.*t1794*t4236;
  t4285 = t2146*t4264;
  t4296 = t4245 + t4285;
  t4326 = t2146*t4236;
  t4334 = t1794*t4264;
  t4375 = t4326 + t4334;
  t4312 = t1729*t4296;
  t4395 = t2324*t4375;
  t4410 = t4312 + t4395;
  t4435 = t2324*t4296;
  t4445 = -1.*t1729*t4375;
  t4446 = t4435 + t4445;
  t4416 = -1.*t1691*t4410;
  t4455 = t2444*t4446;
  t4474 = t4416 + t4455;
  t4500 = t2444*t4410;
  t4512 = t1691*t4446;
  t4515 = t4500 + t4512;
  t2702 = t1635*t2690;
  t2840 = t2732*t2787;
  t2846 = t2702 + t2840;
  t2885 = t2732*t2690;
  t2895 = -1.*t1635*t2787;
  t2928 = t2885 + t2895;
  t3892 = t1635*t3836;
  t3960 = t2732*t3946;
  t3967 = t3892 + t3960;
  t3985 = t2732*t3836;
  t4009 = -1.*t1635*t3946;
  t4050 = t3985 + t4009;
  t4488 = t1635*t4474;
  t4518 = t2732*t4515;
  t4519 = t4488 + t4518;
  t4574 = t2732*t4474;
  t4584 = -1.*t1635*t4515;
  t4602 = t4574 + t4584;

  p_output1(0)=-1.*t68*t728 + t383*t801*t806;
  p_output1(1)=-1.*t1153*t68 + t262*t801*t806;
  p_output1(2)=-1.*t1409*t68 - 1.*t470*t806;
  p_output1(3)=0.642788*t2846 + 0.766044*t2928;
  p_output1(4)=0.642788*t3967 + 0.766044*t4050;
  p_output1(5)=0.642788*t4519 + 0.766044*t4602;
  p_output1(6)=-0.766044*t2846 + 0.642788*t2928;
  p_output1(7)=-0.766044*t3967 + 0.642788*t4050;
  p_output1(8)=-0.766044*t4519 + 0.642788*t4602;
}


       
Eigen::Matrix<double,3,3> R_LeftToeFront(const Eigen::Matrix<double,20,1> &var1)
//void R_LeftToeFront(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



