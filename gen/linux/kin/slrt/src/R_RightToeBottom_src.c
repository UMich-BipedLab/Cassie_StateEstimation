/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottom_src.h"

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
  double t176;
  double t1077;
  double t1241;
  double t1183;
  double t1255;
  double t302;
  double t608;
  double t852;
  double t1043;
  double t1368;
  double t1193;
  double t1259;
  double t1276;
  double t1440;
  double t1462;
  double t1615;
  double t1319;
  double t1638;
  double t1647;
  double t2796;
  double t2685;
  double t2705;
  double t2761;
  double t2644;
  double t2797;
  double t2802;
  double t2848;
  double t2937;
  double t2775;
  double t2858;
  double t2887;
  double t2583;
  double t3012;
  double t3035;
  double t3087;
  double t3179;
  double t2925;
  double t3098;
  double t3117;
  double t2559;
  double t3220;
  double t3258;
  double t3275;
  double t3388;
  double t3162;
  double t3332;
  double t3339;
  double t2552;
  double t3417;
  double t3443;
  double t3514;
  double t3592;
  double t3374;
  double t3555;
  double t3574;
  double t2521;
  double t3597;
  double t3612;
  double t3614;
  double t1863;
  double t1880;
  double t1915;
  double t1940;
  double t2084;
  double t2105;
  double t1918;
  double t2135;
  double t2193;
  double t3964;
  double t4012;
  double t4074;
  double t4085;
  double t4096;
  double t4135;
  double t4082;
  double t4149;
  double t4151;
  double t4238;
  double t4268;
  double t4283;
  double t4153;
  double t4288;
  double t4327;
  double t4356;
  double t4364;
  double t4371;
  double t4337;
  double t4378;
  double t4387;
  double t4413;
  double t4443;
  double t4457;
  double t4402;
  double t4462;
  double t4463;
  double t4480;
  double t4493;
  double t4499;
  double t2326;
  double t2458;
  double t2491;
  double t4554;
  double t4556;
  double t4576;
  double t4589;
  double t4608;
  double t4612;
  double t4579;
  double t4613;
  double t4614;
  double t4639;
  double t4645;
  double t4649;
  double t4637;
  double t4650;
  double t4662;
  double t4674;
  double t4685;
  double t4686;
  double t4671;
  double t4689;
  double t4697;
  double t4710;
  double t4713;
  double t4720;
  double t4699;
  double t4721;
  double t4723;
  double t4728;
  double t4733;
  double t4741;
  double t3585;
  double t3689;
  double t3814;
  double t3911;
  double t3918;
  double t3944;
  double t4464;
  double t4503;
  double t4510;
  double t4531;
  double t4532;
  double t4536;
  double t4725;
  double t4756;
  double t4759;
  double t4766;
  double t4769;
  double t4774;
  t176 = Cos(var1[3]);
  t1077 = Cos(var1[5]);
  t1241 = Sin(var1[3]);
  t1183 = Sin(var1[4]);
  t1255 = Sin(var1[5]);
  t302 = Cos(var1[4]);
  t608 = Sin(var1[14]);
  t852 = Cos(var1[14]);
  t1043 = Sin(var1[13]);
  t1368 = Cos(var1[13]);
  t1193 = t176*t1077*t1183;
  t1259 = t1241*t1255;
  t1276 = t1193 + t1259;
  t1440 = -1.*t1077*t1241;
  t1462 = t176*t1183*t1255;
  t1615 = t1440 + t1462;
  t1319 = t1043*t1276;
  t1638 = t1368*t1615;
  t1647 = t1319 + t1638;
  t2796 = Cos(var1[15]);
  t2685 = t1368*t1276;
  t2705 = -1.*t1043*t1615;
  t2761 = t2685 + t2705;
  t2644 = Sin(var1[15]);
  t2797 = t852*t176*t302;
  t2802 = t608*t1647;
  t2848 = t2797 + t2802;
  t2937 = Cos(var1[16]);
  t2775 = t2644*t2761;
  t2858 = t2796*t2848;
  t2887 = t2775 + t2858;
  t2583 = Sin(var1[16]);
  t3012 = t2796*t2761;
  t3035 = -1.*t2644*t2848;
  t3087 = t3012 + t3035;
  t3179 = Cos(var1[17]);
  t2925 = -1.*t2583*t2887;
  t3098 = t2937*t3087;
  t3117 = t2925 + t3098;
  t2559 = Sin(var1[17]);
  t3220 = t2937*t2887;
  t3258 = t2583*t3087;
  t3275 = t3220 + t3258;
  t3388 = Cos(var1[18]);
  t3162 = t2559*t3117;
  t3332 = t3179*t3275;
  t3339 = t3162 + t3332;
  t2552 = Sin(var1[18]);
  t3417 = t3179*t3117;
  t3443 = -1.*t2559*t3275;
  t3514 = t3417 + t3443;
  t3592 = Cos(var1[19]);
  t3374 = -1.*t2552*t3339;
  t3555 = t3388*t3514;
  t3574 = t3374 + t3555;
  t2521 = Sin(var1[19]);
  t3597 = t3388*t3339;
  t3612 = t2552*t3514;
  t3614 = t3597 + t3612;
  t1863 = t1077*t1241*t1183;
  t1880 = -1.*t176*t1255;
  t1915 = t1863 + t1880;
  t1940 = t176*t1077;
  t2084 = t1241*t1183*t1255;
  t2105 = t1940 + t2084;
  t1918 = t1043*t1915;
  t2135 = t1368*t2105;
  t2193 = t1918 + t2135;
  t3964 = t1368*t1915;
  t4012 = -1.*t1043*t2105;
  t4074 = t3964 + t4012;
  t4085 = t852*t302*t1241;
  t4096 = t608*t2193;
  t4135 = t4085 + t4096;
  t4082 = t2644*t4074;
  t4149 = t2796*t4135;
  t4151 = t4082 + t4149;
  t4238 = t2796*t4074;
  t4268 = -1.*t2644*t4135;
  t4283 = t4238 + t4268;
  t4153 = -1.*t2583*t4151;
  t4288 = t2937*t4283;
  t4327 = t4153 + t4288;
  t4356 = t2937*t4151;
  t4364 = t2583*t4283;
  t4371 = t4356 + t4364;
  t4337 = t2559*t4327;
  t4378 = t3179*t4371;
  t4387 = t4337 + t4378;
  t4413 = t3179*t4327;
  t4443 = -1.*t2559*t4371;
  t4457 = t4413 + t4443;
  t4402 = -1.*t2552*t4387;
  t4462 = t3388*t4457;
  t4463 = t4402 + t4462;
  t4480 = t3388*t4387;
  t4493 = t2552*t4457;
  t4499 = t4480 + t4493;
  t2326 = t302*t1077*t1043;
  t2458 = t1368*t302*t1255;
  t2491 = t2326 + t2458;
  t4554 = t1368*t302*t1077;
  t4556 = -1.*t302*t1043*t1255;
  t4576 = t4554 + t4556;
  t4589 = -1.*t852*t1183;
  t4608 = t608*t2491;
  t4612 = t4589 + t4608;
  t4579 = t2644*t4576;
  t4613 = t2796*t4612;
  t4614 = t4579 + t4613;
  t4639 = t2796*t4576;
  t4645 = -1.*t2644*t4612;
  t4649 = t4639 + t4645;
  t4637 = -1.*t2583*t4614;
  t4650 = t2937*t4649;
  t4662 = t4637 + t4650;
  t4674 = t2937*t4614;
  t4685 = t2583*t4649;
  t4686 = t4674 + t4685;
  t4671 = t2559*t4662;
  t4689 = t3179*t4686;
  t4697 = t4671 + t4689;
  t4710 = t3179*t4662;
  t4713 = -1.*t2559*t4686;
  t4720 = t4710 + t4713;
  t4699 = -1.*t2552*t4697;
  t4721 = t3388*t4720;
  t4723 = t4699 + t4721;
  t4728 = t3388*t4697;
  t4733 = t2552*t4720;
  t4741 = t4728 + t4733;
  t3585 = t2521*t3574;
  t3689 = t3592*t3614;
  t3814 = t3585 + t3689;
  t3911 = t3592*t3574;
  t3918 = -1.*t2521*t3614;
  t3944 = t3911 + t3918;
  t4464 = t2521*t4463;
  t4503 = t3592*t4499;
  t4510 = t4464 + t4503;
  t4531 = t3592*t4463;
  t4532 = -1.*t2521*t4499;
  t4536 = t4531 + t4532;
  t4725 = t2521*t4723;
  t4756 = t3592*t4741;
  t4759 = t4725 + t4756;
  t4766 = t3592*t4723;
  t4769 = -1.*t2521*t4741;
  t4774 = t4766 + t4769;
  p_output1[0]=t176*t302*t608 - 1.*t1647*t852;
  p_output1[1]=t1241*t302*t608 - 1.*t2193*t852;
  p_output1[2]=-1.*t1183*t608 - 1.*t2491*t852;
  p_output1[3]=0.642788*t3814 + 0.766044*t3944;
  p_output1[4]=0.642788*t4510 + 0.766044*t4536;
  p_output1[5]=0.642788*t4759 + 0.766044*t4774;
  p_output1[6]=-0.766044*t3814 + 0.642788*t3944;
  p_output1[7]=-0.766044*t4510 + 0.642788*t4536;
  p_output1[8]=-0.766044*t4759 + 0.642788*t4774;
}



void R_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
