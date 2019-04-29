/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:55 GMT-05:00
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
  double t844;
  double t420;
  double t894;
  double t433;
  double t912;
  double t53;
  double t328;
  double t1413;
  double t1592;
  double t1604;
  double t710;
  double t934;
  double t936;
  double t949;
  double t1061;
  double t1310;
  double t1402;
  double t1421;
  double t1461;
  double t2753;
  double t2808;
  double t2865;
  double t2899;
  double t2772;
  double t2793;
  double t2804;
  double t2985;
  double t3121;
  double t2807;
  double t3051;
  double t3082;
  double t2752;
  double t3145;
  double t3160;
  double t3169;
  double t3289;
  double t3116;
  double t3247;
  double t3249;
  double t2716;
  double t3311;
  double t3313;
  double t3322;
  double t3392;
  double t3262;
  double t3340;
  double t3357;
  double t2704;
  double t3440;
  double t3442;
  double t3519;
  double t3569;
  double t3387;
  double t3533;
  double t3557;
  double t2564;
  double t3572;
  double t3587;
  double t3603;
  double t1766;
  double t1930;
  double t1934;
  double t1947;
  double t1986;
  double t2001;
  double t2083;
  double t2116;
  double t2157;
  double t3788;
  double t3793;
  double t3796;
  double t3755;
  double t3771;
  double t3782;
  double t3785;
  double t3804;
  double t3807;
  double t3834;
  double t3838;
  double t3859;
  double t3812;
  double t3861;
  double t3869;
  double t3877;
  double t3879;
  double t3884;
  double t3876;
  double t3911;
  double t3939;
  double t3965;
  double t3968;
  double t3981;
  double t3941;
  double t4001;
  double t4007;
  double t4036;
  double t4068;
  double t4084;
  double t2318;
  double t2372;
  double t2429;
  double t4154;
  double t4160;
  double t4167;
  double t4141;
  double t4144;
  double t4146;
  double t4147;
  double t4175;
  double t4179;
  double t4190;
  double t4196;
  double t4199;
  double t4182;
  double t4206;
  double t4207;
  double t4213;
  double t4214;
  double t4215;
  double t4212;
  double t4216;
  double t4223;
  double t4250;
  double t4257;
  double t4264;
  double t4242;
  double t4265;
  double t4266;
  double t4286;
  double t4291;
  double t4293;
  double t3562;
  double t3665;
  double t3681;
  double t3708;
  double t3719;
  double t3721;
  double t4035;
  double t4090;
  double t4091;
  double t4105;
  double t4113;
  double t4129;
  double t4278;
  double t4294;
  double t4298;
  double t4301;
  double t4306;
  double t4314;
  t844 = Cos(var1[3]);
  t420 = Cos(var1[5]);
  t894 = Sin(var1[4]);
  t433 = Sin(var1[3]);
  t912 = Sin(var1[5]);
  t53 = Cos(var1[7]);
  t328 = Cos(var1[6]);
  t1413 = Sin(var1[6]);
  t1592 = Cos(var1[4]);
  t1604 = Sin(var1[7]);
  t710 = -1.*t420*t433;
  t934 = t844*t894*t912;
  t936 = t710 + t934;
  t949 = t328*t936;
  t1061 = t844*t420*t894;
  t1310 = t433*t912;
  t1402 = t1061 + t1310;
  t1421 = t1402*t1413;
  t1461 = t949 + t1421;
  t2753 = Cos(var1[8]);
  t2808 = t328*t1402;
  t2865 = -1.*t936*t1413;
  t2899 = t2808 + t2865;
  t2772 = t844*t1592*t53;
  t2793 = t1461*t1604;
  t2804 = t2772 + t2793;
  t2985 = Sin(var1[8]);
  t3121 = Cos(var1[9]);
  t2807 = t2753*t2804;
  t3051 = t2899*t2985;
  t3082 = t2807 + t3051;
  t2752 = Sin(var1[9]);
  t3145 = t2753*t2899;
  t3160 = -1.*t2804*t2985;
  t3169 = t3145 + t3160;
  t3289 = Cos(var1[10]);
  t3116 = -1.*t2752*t3082;
  t3247 = t3121*t3169;
  t3249 = t3116 + t3247;
  t2716 = Sin(var1[10]);
  t3311 = t3121*t3082;
  t3313 = t2752*t3169;
  t3322 = t3311 + t3313;
  t3392 = Cos(var1[11]);
  t3262 = t2716*t3249;
  t3340 = t3289*t3322;
  t3357 = t3262 + t3340;
  t2704 = Sin(var1[11]);
  t3440 = t3289*t3249;
  t3442 = -1.*t2716*t3322;
  t3519 = t3440 + t3442;
  t3569 = Cos(var1[12]);
  t3387 = -1.*t2704*t3357;
  t3533 = t3392*t3519;
  t3557 = t3387 + t3533;
  t2564 = Sin(var1[12]);
  t3572 = t3392*t3357;
  t3587 = t2704*t3519;
  t3603 = t3572 + t3587;
  t1766 = t844*t420;
  t1930 = t433*t894*t912;
  t1934 = t1766 + t1930;
  t1947 = t328*t1934;
  t1986 = t420*t433*t894;
  t2001 = -1.*t844*t912;
  t2083 = t1986 + t2001;
  t2116 = t2083*t1413;
  t2157 = t1947 + t2116;
  t3788 = t328*t2083;
  t3793 = -1.*t1934*t1413;
  t3796 = t3788 + t3793;
  t3755 = t1592*t53*t433;
  t3771 = t2157*t1604;
  t3782 = t3755 + t3771;
  t3785 = t2753*t3782;
  t3804 = t3796*t2985;
  t3807 = t3785 + t3804;
  t3834 = t2753*t3796;
  t3838 = -1.*t3782*t2985;
  t3859 = t3834 + t3838;
  t3812 = -1.*t2752*t3807;
  t3861 = t3121*t3859;
  t3869 = t3812 + t3861;
  t3877 = t3121*t3807;
  t3879 = t2752*t3859;
  t3884 = t3877 + t3879;
  t3876 = t2716*t3869;
  t3911 = t3289*t3884;
  t3939 = t3876 + t3911;
  t3965 = t3289*t3869;
  t3968 = -1.*t2716*t3884;
  t3981 = t3965 + t3968;
  t3941 = -1.*t2704*t3939;
  t4001 = t3392*t3981;
  t4007 = t3941 + t4001;
  t4036 = t3392*t3939;
  t4068 = t2704*t3981;
  t4084 = t4036 + t4068;
  t2318 = t1592*t328*t912;
  t2372 = t1592*t420*t1413;
  t2429 = t2318 + t2372;
  t4154 = t1592*t420*t328;
  t4160 = -1.*t1592*t912*t1413;
  t4167 = t4154 + t4160;
  t4141 = -1.*t53*t894;
  t4144 = t2429*t1604;
  t4146 = t4141 + t4144;
  t4147 = t2753*t4146;
  t4175 = t4167*t2985;
  t4179 = t4147 + t4175;
  t4190 = t2753*t4167;
  t4196 = -1.*t4146*t2985;
  t4199 = t4190 + t4196;
  t4182 = -1.*t2752*t4179;
  t4206 = t3121*t4199;
  t4207 = t4182 + t4206;
  t4213 = t3121*t4179;
  t4214 = t2752*t4199;
  t4215 = t4213 + t4214;
  t4212 = t2716*t4207;
  t4216 = t3289*t4215;
  t4223 = t4212 + t4216;
  t4250 = t3289*t4207;
  t4257 = -1.*t2716*t4215;
  t4264 = t4250 + t4257;
  t4242 = -1.*t2704*t4223;
  t4265 = t3392*t4264;
  t4266 = t4242 + t4265;
  t4286 = t3392*t4223;
  t4291 = t2704*t4264;
  t4293 = t4286 + t4291;
  t3562 = t2564*t3557;
  t3665 = t3569*t3603;
  t3681 = t3562 + t3665;
  t3708 = t3569*t3557;
  t3719 = -1.*t2564*t3603;
  t3721 = t3708 + t3719;
  t4035 = t2564*t4007;
  t4090 = t3569*t4084;
  t4091 = t4035 + t4090;
  t4105 = t3569*t4007;
  t4113 = -1.*t2564*t4084;
  t4129 = t4105 + t4113;
  t4278 = t2564*t4266;
  t4294 = t3569*t4293;
  t4298 = t4278 + t4294;
  t4301 = t3569*t4266;
  t4306 = -1.*t2564*t4293;
  t4314 = t4301 + t4306;
  p_output1[0]=-1.*t1461*t53 + t1592*t1604*t844;
  p_output1[1]=t1592*t1604*t433 - 1.*t2157*t53;
  p_output1[2]=-1.*t2429*t53 - 1.*t1604*t894;
  p_output1[3]=0.642788*t3681 + 0.766044*t3721;
  p_output1[4]=0.642788*t4091 + 0.766044*t4129;
  p_output1[5]=0.642788*t4298 + 0.766044*t4314;
  p_output1[6]=-0.766044*t3681 + 0.642788*t3721;
  p_output1[7]=-0.766044*t4091 + 0.642788*t4129;
  p_output1[8]=-0.766044*t4298 + 0.642788*t4314;
}



void R_LeftToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
