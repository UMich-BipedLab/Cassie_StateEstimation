/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:37 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_ankle_joint_left_src.h"

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
  double t833;
  double t1702;
  double t1772;
  double t1736;
  double t1911;
  double t1645;
  double t2297;
  double t2707;
  double t2762;
  double t1766;
  double t2210;
  double t2217;
  double t2802;
  double t687;
  double t3069;
  double t3324;
  double t3371;
  double t1056;
  double t1203;
  double t1339;
  double t2234;
  double t2825;
  double t2835;
  double t2853;
  double t2876;
  double t2906;
  double t3390;
  double t3784;
  double t2923;
  double t3409;
  double t3414;
  double t679;
  double t3847;
  double t3857;
  double t3899;
  double t4226;
  double t3744;
  double t3921;
  double t3944;
  double t554;
  double t4328;
  double t4400;
  double t4407;
  double t252;
  double t4754;
  double t4827;
  double t4873;
  double t4668;
  double t4682;
  double t4685;
  double t4919;
  double t4945;
  double t4966;
  double t4666;
  double t4729;
  double t4888;
  double t4890;
  double t4896;
  double t4897;
  double t4918;
  double t4987;
  double t5010;
  double t5045;
  double t5054;
  double t5080;
  double t4573;
  double t5017;
  double t5112;
  double t5213;
  double t5246;
  double t5252;
  double t5261;
  double t5376;
  double t5383;
  double t5390;
  double t5347;
  double t5352;
  double t5353;
  double t5354;
  double t5355;
  double t5362;
  double t5375;
  double t5394;
  double t5396;
  double t5410;
  double t5430;
  double t5433;
  double t5404;
  double t5445;
  double t5455;
  double t5473;
  double t5494;
  double t5499;
  double t4172;
  double t4490;
  double t4517;
  double t4606;
  double t4627;
  double t4630;
  double t5242;
  double t5266;
  double t5270;
  double t5281;
  double t5285;
  double t5337;
  double t5461;
  double t5503;
  double t5512;
  double t5536;
  double t5542;
  double t5543;
  t833 = Cos(var1[3]);
  t1702 = Cos(var1[5]);
  t1772 = Sin(var1[4]);
  t1736 = Sin(var1[3]);
  t1911 = Sin(var1[5]);
  t1645 = Cos(var1[6]);
  t2297 = t833*t1702*t1772;
  t2707 = t1736*t1911;
  t2762 = t2297 + t2707;
  t1766 = -1.*t1702*t1736;
  t2210 = t833*t1772*t1911;
  t2217 = t1766 + t2210;
  t2802 = Sin(var1[6]);
  t687 = Cos(var1[8]);
  t3069 = t1645*t2762;
  t3324 = -1.*t2217*t2802;
  t3371 = t3069 + t3324;
  t1056 = Cos(var1[4]);
  t1203 = Cos(var1[7]);
  t1339 = t833*t1056*t1203;
  t2234 = t1645*t2217;
  t2825 = t2762*t2802;
  t2835 = t2234 + t2825;
  t2853 = Sin(var1[7]);
  t2876 = t2835*t2853;
  t2906 = t1339 + t2876;
  t3390 = Sin(var1[8]);
  t3784 = Cos(var1[9]);
  t2923 = t687*t2906;
  t3409 = t3371*t3390;
  t3414 = t2923 + t3409;
  t679 = Sin(var1[9]);
  t3847 = t687*t3371;
  t3857 = -1.*t2906*t3390;
  t3899 = t3847 + t3857;
  t4226 = Cos(var1[10]);
  t3744 = -1.*t679*t3414;
  t3921 = t3784*t3899;
  t3944 = t3744 + t3921;
  t554 = Sin(var1[10]);
  t4328 = t3784*t3414;
  t4400 = t679*t3899;
  t4407 = t4328 + t4400;
  t252 = Sin(var1[11]);
  t4754 = t1702*t1736*t1772;
  t4827 = -1.*t833*t1911;
  t4873 = t4754 + t4827;
  t4668 = t833*t1702;
  t4682 = t1736*t1772*t1911;
  t4685 = t4668 + t4682;
  t4919 = t1645*t4873;
  t4945 = -1.*t4685*t2802;
  t4966 = t4919 + t4945;
  t4666 = t1056*t1203*t1736;
  t4729 = t1645*t4685;
  t4888 = t4873*t2802;
  t4890 = t4729 + t4888;
  t4896 = t4890*t2853;
  t4897 = t4666 + t4896;
  t4918 = t687*t4897;
  t4987 = t4966*t3390;
  t5010 = t4918 + t4987;
  t5045 = t687*t4966;
  t5054 = -1.*t4897*t3390;
  t5080 = t5045 + t5054;
  t4573 = Cos(var1[11]);
  t5017 = -1.*t679*t5010;
  t5112 = t3784*t5080;
  t5213 = t5017 + t5112;
  t5246 = t3784*t5010;
  t5252 = t679*t5080;
  t5261 = t5246 + t5252;
  t5376 = t1056*t1702*t1645;
  t5383 = -1.*t1056*t1911*t2802;
  t5390 = t5376 + t5383;
  t5347 = -1.*t1203*t1772;
  t5352 = t1056*t1645*t1911;
  t5353 = t1056*t1702*t2802;
  t5354 = t5352 + t5353;
  t5355 = t5354*t2853;
  t5362 = t5347 + t5355;
  t5375 = t687*t5362;
  t5394 = t5390*t3390;
  t5396 = t5375 + t5394;
  t5410 = t687*t5390;
  t5430 = -1.*t5362*t3390;
  t5433 = t5410 + t5430;
  t5404 = -1.*t679*t5396;
  t5445 = t3784*t5433;
  t5455 = t5404 + t5445;
  t5473 = t3784*t5396;
  t5494 = t679*t5433;
  t5499 = t5473 + t5494;
  t4172 = t554*t3944;
  t4490 = t4226*t4407;
  t4517 = t4172 + t4490;
  t4606 = t4226*t3944;
  t4627 = -1.*t554*t4407;
  t4630 = t4606 + t4627;
  t5242 = t554*t5213;
  t5266 = t4226*t5261;
  t5270 = t5242 + t5266;
  t5281 = t4226*t5213;
  t5285 = -1.*t554*t5261;
  t5337 = t5281 + t5285;
  t5461 = t554*t5455;
  t5503 = t4226*t5499;
  t5512 = t5461 + t5503;
  t5536 = t4226*t5455;
  t5542 = -1.*t554*t5499;
  t5543 = t5536 + t5542;
  p_output1[0]=t252*t4517 - 1.*t4573*t4630;
  p_output1[1]=t252*t5270 - 1.*t4573*t5337;
  p_output1[2]=t252*t5512 - 1.*t4573*t5543;
  p_output1[3]=t4517*t4573 + t252*t4630;
  p_output1[4]=t4573*t5270 + t252*t5337;
  p_output1[5]=t4573*t5512 + t252*t5543;
  p_output1[6]=-1.*t1203*t2835 + t1056*t2853*t833;
  p_output1[7]=t1056*t1736*t2853 - 1.*t1203*t4890;
  p_output1[8]=-1.*t1772*t2853 - 1.*t1203*t5354;
}



void R_ankle_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
