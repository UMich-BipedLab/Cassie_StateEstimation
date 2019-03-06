/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_abduction_left_src.h"

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
  double t376;
  double t2134;
  double t2537;
  double t2004;
  double t3746;
  double t831;
  double t2149;
  double t3758;
  double t4011;
  double t4037;
  double t4574;
  double t5267;
  double t5272;
  double t235;
  double t844;
  double t1096;
  double t1178;
  double t1533;
  double t5298;
  double t5307;
  double t5381;
  double t5392;
  double t5450;
  double t5466;
  double t5467;
  double t5476;
  double t5784;
  double t5794;
  double t5799;
  double t5829;
  double t5843;
  double t5851;
  double t5810;
  double t5871;
  double t6005;
  double t6007;
  double t6017;
  double t5917;
  double t5923;
  double t5937;
  double t5949;
  t376 = Sin(var1[3]);
  t2134 = Cos(var1[5]);
  t2537 = Sin(var1[4]);
  t2004 = Cos(var1[3]);
  t3746 = Sin(var1[5]);
  t831 = Cos(var1[6]);
  t2149 = -1.*t2004*t2134;
  t3758 = -1.*t376*t2537*t3746;
  t4011 = t2149 + t3758;
  t4037 = -1.*t2134*t376*t2537;
  t4574 = t2004*t3746;
  t5267 = t4037 + t4574;
  t5272 = Sin(var1[6]);
  t235 = Cos(var1[4]);
  t844 = -1.*t831;
  t1096 = 1. + t844;
  t1178 = 0.135*t1096;
  t1533 = 0. + t1178;
  t5298 = -0.135*t5272;
  t5307 = 0. + t5298;
  t5381 = -1.*t2134*t376;
  t5392 = t2004*t2537*t3746;
  t5450 = t5381 + t5392;
  t5466 = t2004*t2134*t2537;
  t5467 = t376*t3746;
  t5476 = t5466 + t5467;
  t5784 = t2134*t376;
  t5794 = -1.*t2004*t2537*t3746;
  t5799 = t5784 + t5794;
  t5829 = t2134*t376*t2537;
  t5843 = -1.*t2004*t3746;
  t5851 = t5829 + t5843;
  t5810 = t831*t5476;
  t5871 = t831*t5851;
  t6005 = t2004*t2134;
  t6007 = t376*t2537*t3746;
  t6017 = t6005 + t6007;
  t5917 = t235*t2134*t831;
  t5923 = -1.*t235*t3746*t5272;
  t5937 = t5917 + t5923;
  t5949 = 0.135*t5937;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.049*t235*t376 + t1533*t4011 + t5267*t5307 + 0.135*(t5267*t5272 + t4011*t831);
  p_output1[10]=-0.049*t2004*t235 + t1533*t5450 + t5307*t5476 + 0.135*(t5272*t5476 + t5450*t831);
  p_output1[11]=0;
  p_output1[12]=0.049*t2004*t2537 + t1533*t2004*t235*t3746 + t2004*t2134*t235*t5307 + 0.135*(t2004*t2134*t235*t5272 + t2004*t235*t3746*t831);
  p_output1[13]=0.049*t2537*t376 + t1533*t235*t3746*t376 + t2134*t235*t376*t5307 + 0.135*(t2134*t235*t376*t5272 + t235*t3746*t376*t831);
  p_output1[14]=0.049*t235 - 1.*t1533*t2537*t3746 - 1.*t2134*t2537*t5307 + 0.135*(-1.*t2134*t2537*t5272 - 1.*t2537*t3746*t831);
  p_output1[15]=t1533*t5476 + t5307*t5799 + 0.135*(t5272*t5799 + t5810);
  p_output1[16]=t4011*t5307 + t1533*t5851 + 0.135*(t4011*t5272 + t5871);
  p_output1[17]=t1533*t2134*t235 - 1.*t235*t3746*t5307 + t5949;
  p_output1[18]=0.135*t5272*t5450 + 0.135*(-1.*t5272*t5450 + t5810) - 0.135*t5476*t831;
  p_output1[19]=0.135*t5272*t6017 + 0.135*(t5871 - 1.*t5272*t6017) - 0.135*t5851*t831;
  p_output1[20]=0.135*t235*t3746*t5272 + t5949 - 0.135*t2134*t235*t831;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
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



void Jp_hip_abduction_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
