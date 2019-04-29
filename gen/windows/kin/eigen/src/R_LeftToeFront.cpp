/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:22:50 GMT-04:00
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
  double t474;
  double t245;
  double t510;
  double t260;
  double t516;
  double t137;
  double t206;
  double t928;
  double t1090;
  double t1091;
  double t417;
  double t528;
  double t533;
  double t560;
  double t676;
  double t781;
  double t913;
  double t942;
  double t952;
  double t2007;
  double t2100;
  double t2145;
  double t2163;
  double t2052;
  double t2053;
  double t2080;
  double t2211;
  double t2339;
  double t2099;
  double t2218;
  double t2295;
  double t1977;
  double t2343;
  double t2356;
  double t2357;
  double t2390;
  double t2324;
  double t2370;
  double t2373;
  double t1960;
  double t2423;
  double t2549;
  double t2572;
  double t2706;
  double t2389;
  double t2644;
  double t2688;
  double t1941;
  double t2709;
  double t2710;
  double t2731;
  double t2880;
  double t2701;
  double t2754;
  double t2780;
  double t1890;
  double t2902;
  double t2910;
  double t2928;
  double t1201;
  double t1210;
  double t1229;
  double t1236;
  double t1304;
  double t1332;
  double t1380;
  double t1386;
  double t1412;
  double t3229;
  double t3267;
  double t3274;
  double t3087;
  double t3121;
  double t3157;
  double t3167;
  double t3319;
  double t3327;
  double t3371;
  double t3431;
  double t3459;
  double t3340;
  double t3469;
  double t3516;
  double t3534;
  double t3619;
  double t3623;
  double t3526;
  double t3640;
  double t3673;
  double t3702;
  double t3704;
  double t3734;
  double t3684;
  double t3735;
  double t3754;
  double t3778;
  double t3841;
  double t3854;
  double t1637;
  double t1697;
  double t1762;
  double t4085;
  double t4088;
  double t4095;
  double t4024;
  double t4044;
  double t4047;
  double t4076;
  double t4099;
  double t4114;
  double t4141;
  double t4142;
  double t4165;
  double t4116;
  double t4195;
  double t4200;
  double t4238;
  double t4246;
  double t4247;
  double t4235;
  double t4259;
  double t4277;
  double t4304;
  double t4318;
  double t4327;
  double t4280;
  double t4335;
  double t4346;
  double t4366;
  double t4382;
  double t4453;
  double t2875;
  double t2944;
  double t2945;
  double t2960;
  double t2976;
  double t2988;
  double t3773;
  double t3860;
  double t3868;
  double t3946;
  double t3964;
  double t3967;
  double t4353;
  double t4474;
  double t4484;
  double t4547;
  double t4553;
  double t4588;
  t474 = Cos(var1[3]);
  t245 = Cos(var1[5]);
  t510 = Sin(var1[4]);
  t260 = Sin(var1[3]);
  t516 = Sin(var1[5]);
  t137 = Cos(var1[7]);
  t206 = Cos(var1[6]);
  t928 = Sin(var1[6]);
  t1090 = Cos(var1[4]);
  t1091 = Sin(var1[7]);
  t417 = -1.*t245*t260;
  t528 = t474*t510*t516;
  t533 = t417 + t528;
  t560 = t206*t533;
  t676 = t474*t245*t510;
  t781 = t260*t516;
  t913 = t676 + t781;
  t942 = t913*t928;
  t952 = t560 + t942;
  t2007 = Cos(var1[8]);
  t2100 = t206*t913;
  t2145 = -1.*t533*t928;
  t2163 = t2100 + t2145;
  t2052 = t474*t1090*t137;
  t2053 = t952*t1091;
  t2080 = t2052 + t2053;
  t2211 = Sin(var1[8]);
  t2339 = Cos(var1[9]);
  t2099 = t2007*t2080;
  t2218 = t2163*t2211;
  t2295 = t2099 + t2218;
  t1977 = Sin(var1[9]);
  t2343 = t2007*t2163;
  t2356 = -1.*t2080*t2211;
  t2357 = t2343 + t2356;
  t2390 = Cos(var1[10]);
  t2324 = -1.*t1977*t2295;
  t2370 = t2339*t2357;
  t2373 = t2324 + t2370;
  t1960 = Sin(var1[10]);
  t2423 = t2339*t2295;
  t2549 = t1977*t2357;
  t2572 = t2423 + t2549;
  t2706 = Cos(var1[11]);
  t2389 = t1960*t2373;
  t2644 = t2390*t2572;
  t2688 = t2389 + t2644;
  t1941 = Sin(var1[11]);
  t2709 = t2390*t2373;
  t2710 = -1.*t1960*t2572;
  t2731 = t2709 + t2710;
  t2880 = Cos(var1[12]);
  t2701 = -1.*t1941*t2688;
  t2754 = t2706*t2731;
  t2780 = t2701 + t2754;
  t1890 = Sin(var1[12]);
  t2902 = t2706*t2688;
  t2910 = t1941*t2731;
  t2928 = t2902 + t2910;
  t1201 = t474*t245;
  t1210 = t260*t510*t516;
  t1229 = t1201 + t1210;
  t1236 = t206*t1229;
  t1304 = t245*t260*t510;
  t1332 = -1.*t474*t516;
  t1380 = t1304 + t1332;
  t1386 = t1380*t928;
  t1412 = t1236 + t1386;
  t3229 = t206*t1380;
  t3267 = -1.*t1229*t928;
  t3274 = t3229 + t3267;
  t3087 = t1090*t137*t260;
  t3121 = t1412*t1091;
  t3157 = t3087 + t3121;
  t3167 = t2007*t3157;
  t3319 = t3274*t2211;
  t3327 = t3167 + t3319;
  t3371 = t2007*t3274;
  t3431 = -1.*t3157*t2211;
  t3459 = t3371 + t3431;
  t3340 = -1.*t1977*t3327;
  t3469 = t2339*t3459;
  t3516 = t3340 + t3469;
  t3534 = t2339*t3327;
  t3619 = t1977*t3459;
  t3623 = t3534 + t3619;
  t3526 = t1960*t3516;
  t3640 = t2390*t3623;
  t3673 = t3526 + t3640;
  t3702 = t2390*t3516;
  t3704 = -1.*t1960*t3623;
  t3734 = t3702 + t3704;
  t3684 = -1.*t1941*t3673;
  t3735 = t2706*t3734;
  t3754 = t3684 + t3735;
  t3778 = t2706*t3673;
  t3841 = t1941*t3734;
  t3854 = t3778 + t3841;
  t1637 = t1090*t206*t516;
  t1697 = t1090*t245*t928;
  t1762 = t1637 + t1697;
  t4085 = t1090*t245*t206;
  t4088 = -1.*t1090*t516*t928;
  t4095 = t4085 + t4088;
  t4024 = -1.*t137*t510;
  t4044 = t1762*t1091;
  t4047 = t4024 + t4044;
  t4076 = t2007*t4047;
  t4099 = t4095*t2211;
  t4114 = t4076 + t4099;
  t4141 = t2007*t4095;
  t4142 = -1.*t4047*t2211;
  t4165 = t4141 + t4142;
  t4116 = -1.*t1977*t4114;
  t4195 = t2339*t4165;
  t4200 = t4116 + t4195;
  t4238 = t2339*t4114;
  t4246 = t1977*t4165;
  t4247 = t4238 + t4246;
  t4235 = t1960*t4200;
  t4259 = t2390*t4247;
  t4277 = t4235 + t4259;
  t4304 = t2390*t4200;
  t4318 = -1.*t1960*t4247;
  t4327 = t4304 + t4318;
  t4280 = -1.*t1941*t4277;
  t4335 = t2706*t4327;
  t4346 = t4280 + t4335;
  t4366 = t2706*t4277;
  t4382 = t1941*t4327;
  t4453 = t4366 + t4382;
  t2875 = t1890*t2780;
  t2944 = t2880*t2928;
  t2945 = t2875 + t2944;
  t2960 = t2880*t2780;
  t2976 = -1.*t1890*t2928;
  t2988 = t2960 + t2976;
  t3773 = t1890*t3754;
  t3860 = t2880*t3854;
  t3868 = t3773 + t3860;
  t3946 = t2880*t3754;
  t3964 = -1.*t1890*t3854;
  t3967 = t3946 + t3964;
  t4353 = t1890*t4346;
  t4474 = t2880*t4453;
  t4484 = t4353 + t4474;
  t4547 = t2880*t4346;
  t4553 = -1.*t1890*t4453;
  t4588 = t4547 + t4553;

  p_output1(0)=t1090*t1091*t474 - 1.*t137*t952;
  p_output1(1)=-1.*t137*t1412 + t1090*t1091*t260;
  p_output1(2)=-1.*t137*t1762 - 1.*t1091*t510;
  p_output1(3)=0.642788*t2945 + 0.766044*t2988;
  p_output1(4)=0.642788*t3868 + 0.766044*t3967;
  p_output1(5)=0.642788*t4484 + 0.766044*t4588;
  p_output1(6)=-0.766044*t2945 + 0.642788*t2988;
  p_output1(7)=-0.766044*t3868 + 0.642788*t3967;
  p_output1(8)=-0.766044*t4484 + 0.642788*t4588;
}


       
Eigen::Matrix<double,3,3> R_LeftToeFront(const Eigen::Matrix<double,20,1> &var1)
//void R_LeftToeFront(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



