/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:29 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_rotation_left_src.h"

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
  double t621;
  double t740;
  double t793;
  double t607;
  double t966;
  double t30;
  double t1633;
  double t1863;
  double t2095;
  double t635;
  double t1043;
  double t1305;
  double t2189;
  double t2919;
  double t2921;
  double t2936;
  double t3048;
  double t2649;
  double t2664;
  double t2881;
  double t3128;
  double t96;
  double t157;
  double t197;
  double t230;
  double t2307;
  double t2456;
  double t3845;
  double t3871;
  double t4020;
  double t3569;
  double t3587;
  double t3668;
  double t2999;
  double t3063;
  double t3087;
  double t3168;
  double t3194;
  double t3208;
  double t4195;
  double t4198;
  double t4211;
  double t4441;
  double t4482;
  double t4560;
  double t5169;
  double t5188;
  double t5196;
  double t5678;
  double t5691;
  double t5709;
  double t6037;
  double t6040;
  double t6050;
  double t4053;
  double t6069;
  double t6082;
  double t6130;
  double t6136;
  double t6138;
  double t6180;
  double t6183;
  double t6189;
  double t6249;
  double t6256;
  double t6258;
  double t6062;
  double t4056;
  double t4069;
  double t6359;
  double t6373;
  double t6374;
  double t6158;
  double t6391;
  double t6393;
  double t6226;
  double t6230;
  double t6234;
  double t6243;
  double t6261;
  double t6271;
  double t6275;
  double t4240;
  double t4249;
  double t4298;
  double t6446;
  double t6460;
  double t6461;
  double t6471;
  double t6474;
  double t6528;
  double t6533;
  double t6550;
  double t3425;
  double t6623;
  double t6640;
  double t6641;
  t621 = Cos(var1[5]);
  t740 = Sin(var1[3]);
  t793 = Sin(var1[4]);
  t607 = Cos(var1[3]);
  t966 = Sin(var1[5]);
  t30 = Cos(var1[6]);
  t1633 = -1.*t621*t740*t793;
  t1863 = t607*t966;
  t2095 = t1633 + t1863;
  t635 = -1.*t607*t621;
  t1043 = -1.*t740*t793*t966;
  t1305 = t635 + t1043;
  t2189 = Sin(var1[6]);
  t2919 = Cos(var1[7]);
  t2921 = -1.*t2919;
  t2936 = 1. + t2921;
  t3048 = Sin(var1[7]);
  t2649 = t30*t1305;
  t2664 = t2095*t2189;
  t2881 = t2649 + t2664;
  t3128 = Cos(var1[4]);
  t96 = -1.*t30;
  t157 = 1. + t96;
  t197 = 0.135*t157;
  t230 = 0. + t197;
  t2307 = -0.135*t2189;
  t2456 = 0. + t2307;
  t3845 = t607*t621*t793;
  t3871 = t740*t966;
  t4020 = t3845 + t3871;
  t3569 = -1.*t621*t740;
  t3587 = t607*t793*t966;
  t3668 = t3569 + t3587;
  t2999 = 0.135*t2936;
  t3063 = 0.049*t3048;
  t3087 = 0. + t2999 + t3063;
  t3168 = -0.049*t2936;
  t3194 = 0.135*t3048;
  t3208 = 0. + t3168 + t3194;
  t4195 = t30*t3668;
  t4198 = t4020*t2189;
  t4211 = t4195 + t4198;
  t4441 = t607*t3128*t30*t966;
  t4482 = t607*t3128*t621*t2189;
  t4560 = t4441 + t4482;
  t5169 = t3128*t30*t740*t966;
  t5188 = t3128*t621*t740*t2189;
  t5196 = t5169 + t5188;
  t5678 = -1.*t30*t793*t966;
  t5691 = -1.*t621*t793*t2189;
  t5709 = t5678 + t5691;
  t6037 = t621*t740;
  t6040 = -1.*t607*t793*t966;
  t6050 = t6037 + t6040;
  t4053 = t30*t4020;
  t6069 = t6050*t2189;
  t6082 = t4053 + t6069;
  t6130 = t621*t740*t793;
  t6136 = -1.*t607*t966;
  t6138 = t6130 + t6136;
  t6180 = t30*t6138;
  t6183 = t1305*t2189;
  t6189 = t6180 + t6183;
  t6249 = t3128*t621*t30;
  t6256 = -1.*t3128*t966*t2189;
  t6258 = t6249 + t6256;
  t6062 = -1.*t4020*t2189;
  t4056 = -1.*t3668*t2189;
  t4069 = t4053 + t4056;
  t6359 = t607*t621;
  t6373 = t740*t793*t966;
  t6374 = t6359 + t6373;
  t6158 = -1.*t6138*t2189;
  t6391 = -1.*t6374*t2189;
  t6393 = t6180 + t6391;
  t6226 = -1.*t3128*t30*t966;
  t6230 = -1.*t3128*t621*t2189;
  t6234 = t6226 + t6230;
  t6243 = -0.09*t6234;
  t6261 = 0.135*t2919*t6258;
  t6271 = t6258*t3087;
  t6275 = -0.049*t6258*t3048;
  t4240 = t2919*t4211;
  t4249 = -1.*t607*t3128*t3048;
  t4298 = t4240 + t4249;
  t6446 = 0.135*t2919;
  t6460 = -0.049*t3048;
  t6461 = t6446 + t6460;
  t6471 = 0.049*t2919;
  t6474 = t6471 + t3194;
  t6528 = t30*t6374;
  t6533 = t6138*t2189;
  t6550 = t6528 + t6533;
  t3425 = -1.*t3128*t2919*t740;
  t6623 = t3128*t30*t966;
  t6640 = t3128*t621*t2189;
  t6641 = t6623 + t6640;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1305*t230 + t2095*t2456 - 0.09*(-1.*t1305*t2189 + t2095*t30) + t2881*t3087 - 0.049*(t2881*t3048 + t3425) - 1.*t3128*t3208*t740 + 0.135*(t2881*t2919 + t3048*t3128*t740);
  p_output1[10]=t230*t3668 + t2456*t4020 - 0.09*t4069 + t3087*t4211 + 0.135*t4298 + t3128*t3208*t607 - 0.049*(t3048*t4211 + t2919*t3128*t607);
  p_output1[11]=0;
  p_output1[12]=t3087*t4560 + t2456*t3128*t607*t621 - 1.*t3208*t607*t793 - 0.049*(t3048*t4560 - 1.*t2919*t607*t793) + 0.135*(t2919*t4560 + t3048*t607*t793) + t230*t3128*t607*t966 - 0.09*(t30*t3128*t607*t621 - 1.*t2189*t3128*t607*t966);
  p_output1[13]=t3087*t5196 + t2456*t3128*t621*t740 - 1.*t3208*t740*t793 - 0.049*(t3048*t5196 - 1.*t2919*t740*t793) + 0.135*(t2919*t5196 + t3048*t740*t793) + t230*t3128*t740*t966 - 0.09*(t30*t3128*t621*t740 - 1.*t2189*t3128*t740*t966);
  p_output1[14]=-1.*t3128*t3208 + t3087*t5709 + 0.135*(t3048*t3128 + t2919*t5709) - 0.049*(-1.*t2919*t3128 + t3048*t5709) - 1.*t2456*t621*t793 - 1.*t230*t793*t966 - 0.09*(-1.*t30*t621*t793 + t2189*t793*t966);
  p_output1[15]=t230*t4020 + t2456*t6050 - 0.09*(t30*t6050 + t6062) + 0.135*t2919*t6082 - 0.049*t3048*t6082 + t3087*t6082;
  p_output1[16]=t1305*t2456 + t230*t6138 - 0.09*(t2649 + t6158) + 0.135*t2919*t6189 - 0.049*t3048*t6189 + t3087*t6189;
  p_output1[17]=t230*t3128*t621 + t6243 + t6261 + t6271 + t6275 - 1.*t2456*t3128*t966;
  p_output1[18]=0.135*t2189*t3668 - 0.135*t30*t4020 + 0.135*t2919*t4069 - 0.049*t3048*t4069 + t3087*t4069 - 0.09*(-1.*t30*t3668 + t6062);
  p_output1[19]=-0.135*t30*t6138 + 0.135*t2189*t6374 - 0.09*(t6158 - 1.*t30*t6374) + 0.135*t2919*t6393 - 0.049*t3048*t6393 + t3087*t6393;
  p_output1[20]=-0.135*t30*t3128*t621 + t6243 + t6261 + t6271 + t6275 + 0.135*t2189*t3128*t966;
  p_output1[21]=-0.049*t4298 + 0.135*(-1.*t3048*t4211 - 1.*t2919*t3128*t607) + t3128*t607*t6461 + t4211*t6474;
  p_output1[22]=t6474*t6550 + 0.135*(t3425 - 1.*t3048*t6550) + t3128*t6461*t740 - 0.049*(t2919*t6550 - 1.*t3048*t3128*t740);
  p_output1[23]=t6474*t6641 - 1.*t6461*t793 + 0.135*(-1.*t3048*t6641 + t2919*t793) - 0.049*(t2919*t6641 + t3048*t793);
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jp_hip_rotation_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
