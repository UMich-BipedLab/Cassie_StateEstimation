/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:34 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_joint_left_src.h"

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
  double t1122;
  double t1623;
  double t1924;
  double t1682;
  double t2084;
  double t1527;
  double t2958;
  double t2993;
  double t3642;
  double t1687;
  double t2607;
  double t2698;
  double t3815;
  double t916;
  double t4595;
  double t4598;
  double t4608;
  double t1276;
  double t1298;
  double t1414;
  double t2859;
  double t3842;
  double t4387;
  double t4525;
  double t4544;
  double t4547;
  double t4670;
  double t239;
  double t5349;
  double t5365;
  double t5366;
  double t5271;
  double t5277;
  double t5311;
  double t4958;
  double t5469;
  double t5500;
  double t5545;
  double t5233;
  double t5312;
  double t5399;
  double t5407;
  double t5416;
  double t5436;
  double t5929;
  double t5934;
  double t5943;
  double t5759;
  double t5804;
  double t5823;
  double t5860;
  double t5867;
  double t5878;
  double t4552;
  double t4834;
  double t4857;
  double t4971;
  double t4984;
  double t5015;
  double t5439;
  double t5625;
  double t5626;
  double t5648;
  double t5651;
  double t5665;
  double t5895;
  double t5947;
  double t5950;
  double t5959;
  double t5961;
  double t5968;
  t1122 = Cos(var1[3]);
  t1623 = Cos(var1[5]);
  t1924 = Sin(var1[4]);
  t1682 = Sin(var1[3]);
  t2084 = Sin(var1[5]);
  t1527 = Cos(var1[6]);
  t2958 = t1122*t1623*t1924;
  t2993 = t1682*t2084;
  t3642 = t2958 + t2993;
  t1687 = -1.*t1623*t1682;
  t2607 = t1122*t1924*t2084;
  t2698 = t1687 + t2607;
  t3815 = Sin(var1[6]);
  t916 = Cos(var1[8]);
  t4595 = t1527*t3642;
  t4598 = -1.*t2698*t3815;
  t4608 = t4595 + t4598;
  t1276 = Cos(var1[4]);
  t1298 = Cos(var1[7]);
  t1414 = t1122*t1276*t1298;
  t2859 = t1527*t2698;
  t3842 = t3642*t3815;
  t4387 = t2859 + t3842;
  t4525 = Sin(var1[7]);
  t4544 = t4387*t4525;
  t4547 = t1414 + t4544;
  t4670 = Sin(var1[8]);
  t239 = Sin(var1[9]);
  t5349 = t1623*t1682*t1924;
  t5365 = -1.*t1122*t2084;
  t5366 = t5349 + t5365;
  t5271 = t1122*t1623;
  t5277 = t1682*t1924*t2084;
  t5311 = t5271 + t5277;
  t4958 = Cos(var1[9]);
  t5469 = t1527*t5366;
  t5500 = -1.*t5311*t3815;
  t5545 = t5469 + t5500;
  t5233 = t1276*t1298*t1682;
  t5312 = t1527*t5311;
  t5399 = t5366*t3815;
  t5407 = t5312 + t5399;
  t5416 = t5407*t4525;
  t5436 = t5233 + t5416;
  t5929 = t1276*t1623*t1527;
  t5934 = -1.*t1276*t2084*t3815;
  t5943 = t5929 + t5934;
  t5759 = -1.*t1298*t1924;
  t5804 = t1276*t1527*t2084;
  t5823 = t1276*t1623*t3815;
  t5860 = t5804 + t5823;
  t5867 = t5860*t4525;
  t5878 = t5759 + t5867;
  t4552 = t916*t4547;
  t4834 = t4608*t4670;
  t4857 = t4552 + t4834;
  t4971 = t916*t4608;
  t4984 = -1.*t4547*t4670;
  t5015 = t4971 + t4984;
  t5439 = t916*t5436;
  t5625 = t5545*t4670;
  t5626 = t5439 + t5625;
  t5648 = t916*t5545;
  t5651 = -1.*t5436*t4670;
  t5665 = t5648 + t5651;
  t5895 = t916*t5878;
  t5947 = t5943*t4670;
  t5950 = t5895 + t5947;
  t5959 = t916*t5943;
  t5961 = -1.*t5878*t4670;
  t5968 = t5959 + t5961;
  p_output1[0]=t239*t4857 - 1.*t4958*t5015;
  p_output1[1]=t239*t5626 - 1.*t4958*t5665;
  p_output1[2]=t239*t5950 - 1.*t4958*t5968;
  p_output1[3]=t4857*t4958 + t239*t5015;
  p_output1[4]=t4958*t5626 + t239*t5665;
  p_output1[5]=t4958*t5950 + t239*t5968;
  p_output1[6]=-1.*t1298*t4387 + t1122*t1276*t4525;
  p_output1[7]=t1276*t1682*t4525 - 1.*t1298*t5407;
  p_output1[8]=-1.*t1924*t4525 - 1.*t1298*t5860;
}



void R_knee_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
