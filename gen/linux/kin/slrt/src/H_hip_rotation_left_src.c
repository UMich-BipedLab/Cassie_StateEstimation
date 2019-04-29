/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:29 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_rotation_left_src.h"

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
  double t698;
  double t1875;
  double t481;
  double t1113;
  double t1969;
  double t74;
  double t2661;
  double t3194;
  double t2578;
  double t2603;
  double t2649;
  double t1141;
  double t2092;
  double t2473;
  double t3451;
  double t2985;
  double t3063;
  double t3067;
  double t2781;
  double t2820;
  double t2830;
  double t3779;
  double t3499;
  double t3517;
  double t3566;
  double t4053;
  double t4106;
  double t4195;
  double t4221;
  double t4234;
  double t4240;
  double t4933;
  double t4959;
  double t3480;
  double t3845;
  double t4031;
  double t4441;
  double t4482;
  double t4609;
  double t4664;
  double t4688;
  double t4770;
  double t4994;
  double t5016;
  double t5106;
  double t5167;
  double t5168;
  double t5169;
  double t4051;
  double t4197;
  double t4198;
  double t4199;
  double t4267;
  double t4338;
  t698 = Cos(var1[5]);
  t1875 = Sin(var1[3]);
  t481 = Cos(var1[3]);
  t1113 = Sin(var1[4]);
  t1969 = Sin(var1[5]);
  t74 = Cos(var1[6]);
  t2661 = Sin(var1[6]);
  t3194 = Cos(var1[4]);
  t2578 = -1.*t698*t1875;
  t2603 = t481*t1113*t1969;
  t2649 = t2578 + t2603;
  t1141 = t481*t698*t1113;
  t2092 = t1875*t1969;
  t2473 = t1141 + t2092;
  t3451 = Cos(var1[7]);
  t2985 = t481*t698;
  t3063 = t1875*t1113*t1969;
  t3067 = t2985 + t3063;
  t2781 = t698*t1875*t1113;
  t2820 = -1.*t481*t1969;
  t2830 = t2781 + t2820;
  t3779 = Sin(var1[7]);
  t3499 = t74*t2649;
  t3517 = t2473*t2661;
  t3566 = t3499 + t3517;
  t4053 = t74*t3067;
  t4106 = t2830*t2661;
  t4195 = t4053 + t4106;
  t4221 = t3194*t74*t1969;
  t4234 = t3194*t698*t2661;
  t4240 = t4221 + t4234;
  t4933 = -1.*t3451;
  t4959 = 1. + t4933;
  t3480 = t481*t3194*t3451;
  t3845 = t3566*t3779;
  t4031 = t3480 + t3845;
  t4441 = -1.*t74;
  t4482 = 1. + t4441;
  t4609 = 0.135*t4482;
  t4664 = 0. + t4609;
  t4688 = -0.135*t2661;
  t4770 = 0. + t4688;
  t4994 = 0.135*t4959;
  t5016 = 0.049*t3779;
  t5106 = 0. + t4994 + t5016;
  t5167 = -0.049*t4959;
  t5168 = 0.135*t3779;
  t5169 = 0. + t5167 + t5168;
  t4051 = t3194*t3451*t1875;
  t4197 = t4195*t3779;
  t4198 = t4051 + t4197;
  t4199 = -1.*t3451*t1113;
  t4267 = t4240*t3779;
  t4338 = t4199 + t4267;
  p_output1[0]=t2649*t2661 - 1.*t2473*t74;
  p_output1[1]=t2661*t3067 - 1.*t2830*t74;
  p_output1[2]=t1969*t2661*t3194 - 1.*t3194*t698*t74;
  p_output1[3]=0.;
  p_output1[4]=t4031;
  p_output1[5]=t4198;
  p_output1[6]=t4338;
  p_output1[7]=0.;
  p_output1[8]=-1.*t3451*t3566 + t3194*t3779*t481;
  p_output1[9]=t1875*t3194*t3779 - 1.*t3451*t4195;
  p_output1[10]=-1.*t1113*t3779 - 1.*t3451*t4240;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t4031 + t2649*t4664 + t2473*t4770 + 0.135*(t3451*t3566 - 1.*t3194*t3779*t481) + t3566*t5106 + t3194*t481*t5169 - 0.09*(-1.*t2649*t2661 + t2473*t74) + var1[0];
  p_output1[13]=0. + 0.135*(-1.*t1875*t3194*t3779 + t3451*t4195) - 0.049*t4198 + t3067*t4664 + t2830*t4770 + t4195*t5106 + t1875*t3194*t5169 - 0.09*(-1.*t2661*t3067 + t2830*t74) + var1[1];
  p_output1[14]=0. + 0.135*(t1113*t3779 + t3451*t4240) - 0.049*t4338 + t1969*t3194*t4664 + t4240*t5106 - 1.*t1113*t5169 + t3194*t4770*t698 - 0.09*(-1.*t1969*t2661*t3194 + t3194*t698*t74) + var1[2];
  p_output1[15]=1.;
}



void H_hip_rotation_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
