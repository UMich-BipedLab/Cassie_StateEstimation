/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_ankle_joint_right_src.h"

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
  double t2084;
  double t2494;
  double t1747;
  double t2347;
  double t2740;
  double t3427;
  double t2486;
  double t2775;
  double t2937;
  double t1276;
  double t3434;
  double t3614;
  double t4074;
  double t4176;
  double t3339;
  double t4082;
  double t4151;
  double t1000;
  double t4191;
  double t4205;
  double t4238;
  double t4287;
  double t4327;
  double t4329;
  double t4334;
  double t4337;
  double t4364;
  double t4402;
  double t4153;
  double t4371;
  double t4378;
  double t287;
  double t4414;
  double t4455;
  double t4463;
  double t4531;
  double t4387;
  double t4501;
  double t4510;
  double t268;
  double t4532;
  double t4544;
  double t4552;
  double t223;
  double t4637;
  double t4655;
  double t4671;
  double t4689;
  double t4697;
  double t4704;
  double t4686;
  double t4710;
  double t4713;
  double t4725;
  double t4741;
  double t4756;
  double t4759;
  double t4763;
  double t4766;
  double t4723;
  double t4769;
  double t4774;
  double t4806;
  double t4807;
  double t4812;
  double t4604;
  double t4783;
  double t4820;
  double t4825;
  double t4829;
  double t4830;
  double t4834;
  double t4899;
  double t4912;
  double t4916;
  double t4932;
  double t4942;
  double t4946;
  double t4967;
  double t4972;
  double t4975;
  double t4929;
  double t4982;
  double t5000;
  double t5005;
  double t5021;
  double t5025;
  double t5004;
  double t5034;
  double t5053;
  double t5064;
  double t5072;
  double t5075;
  double t4525;
  double t4556;
  double t4589;
  double t4608;
  double t4612;
  double t4614;
  double t4828;
  double t4841;
  double t4860;
  double t4869;
  double t4872;
  double t4874;
  double t5062;
  double t5079;
  double t5097;
  double t5102;
  double t5111;
  double t5115;
  t2084 = Cos(var1[5]);
  t2494 = Sin(var1[3]);
  t1747 = Cos(var1[3]);
  t2347 = Sin(var1[4]);
  t2740 = Sin(var1[5]);
  t3427 = Sin(var1[13]);
  t2486 = t1747*t2084*t2347;
  t2775 = t2494*t2740;
  t2937 = t2486 + t2775;
  t1276 = Cos(var1[13]);
  t3434 = -1.*t2084*t2494;
  t3614 = t1747*t2347*t2740;
  t4074 = t3434 + t3614;
  t4176 = Cos(var1[15]);
  t3339 = t1276*t2937;
  t4082 = -1.*t3427*t4074;
  t4151 = t3339 + t4082;
  t1000 = Sin(var1[15]);
  t4191 = Cos(var1[14]);
  t4205 = Cos(var1[4]);
  t4238 = t4191*t1747*t4205;
  t4287 = Sin(var1[14]);
  t4327 = t3427*t2937;
  t4329 = t1276*t4074;
  t4334 = t4327 + t4329;
  t4337 = t4287*t4334;
  t4364 = t4238 + t4337;
  t4402 = Cos(var1[16]);
  t4153 = t1000*t4151;
  t4371 = t4176*t4364;
  t4378 = t4153 + t4371;
  t287 = Sin(var1[16]);
  t4414 = t4176*t4151;
  t4455 = -1.*t1000*t4364;
  t4463 = t4414 + t4455;
  t4531 = Cos(var1[17]);
  t4387 = -1.*t287*t4378;
  t4501 = t4402*t4463;
  t4510 = t4387 + t4501;
  t268 = Sin(var1[17]);
  t4532 = t4402*t4378;
  t4544 = t287*t4463;
  t4552 = t4532 + t4544;
  t223 = Sin(var1[18]);
  t4637 = t2084*t2494*t2347;
  t4655 = -1.*t1747*t2740;
  t4671 = t4637 + t4655;
  t4689 = t1747*t2084;
  t4697 = t2494*t2347*t2740;
  t4704 = t4689 + t4697;
  t4686 = t1276*t4671;
  t4710 = -1.*t3427*t4704;
  t4713 = t4686 + t4710;
  t4725 = t4191*t4205*t2494;
  t4741 = t3427*t4671;
  t4756 = t1276*t4704;
  t4759 = t4741 + t4756;
  t4763 = t4287*t4759;
  t4766 = t4725 + t4763;
  t4723 = t1000*t4713;
  t4769 = t4176*t4766;
  t4774 = t4723 + t4769;
  t4806 = t4176*t4713;
  t4807 = -1.*t1000*t4766;
  t4812 = t4806 + t4807;
  t4604 = Cos(var1[18]);
  t4783 = -1.*t287*t4774;
  t4820 = t4402*t4812;
  t4825 = t4783 + t4820;
  t4829 = t4402*t4774;
  t4830 = t287*t4812;
  t4834 = t4829 + t4830;
  t4899 = t1276*t4205*t2084;
  t4912 = -1.*t4205*t3427*t2740;
  t4916 = t4899 + t4912;
  t4932 = -1.*t4191*t2347;
  t4942 = t4205*t2084*t3427;
  t4946 = t1276*t4205*t2740;
  t4967 = t4942 + t4946;
  t4972 = t4287*t4967;
  t4975 = t4932 + t4972;
  t4929 = t1000*t4916;
  t4982 = t4176*t4975;
  t5000 = t4929 + t4982;
  t5005 = t4176*t4916;
  t5021 = -1.*t1000*t4975;
  t5025 = t5005 + t5021;
  t5004 = -1.*t287*t5000;
  t5034 = t4402*t5025;
  t5053 = t5004 + t5034;
  t5064 = t4402*t5000;
  t5072 = t287*t5025;
  t5075 = t5064 + t5072;
  t4525 = t268*t4510;
  t4556 = t4531*t4552;
  t4589 = t4525 + t4556;
  t4608 = t4531*t4510;
  t4612 = -1.*t268*t4552;
  t4614 = t4608 + t4612;
  t4828 = t268*t4825;
  t4841 = t4531*t4834;
  t4860 = t4828 + t4841;
  t4869 = t4531*t4825;
  t4872 = -1.*t268*t4834;
  t4874 = t4869 + t4872;
  t5062 = t268*t5053;
  t5079 = t4531*t5075;
  t5097 = t5062 + t5079;
  t5102 = t4531*t5053;
  t5111 = -1.*t268*t5075;
  t5115 = t5102 + t5111;
  p_output1[0]=t223*t4589 - 1.*t4604*t4614;
  p_output1[1]=t223*t4860 - 1.*t4604*t4874;
  p_output1[2]=t223*t5097 - 1.*t4604*t5115;
  p_output1[3]=t4589*t4604 + t223*t4614;
  p_output1[4]=t4604*t4860 + t223*t4874;
  p_output1[5]=t4604*t5097 + t223*t5115;
  p_output1[6]=t1747*t4205*t4287 - 1.*t4191*t4334;
  p_output1[7]=t2494*t4205*t4287 - 1.*t4191*t4759;
  p_output1[8]=-1.*t2347*t4287 - 1.*t4191*t4967;
}



void R_ankle_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
