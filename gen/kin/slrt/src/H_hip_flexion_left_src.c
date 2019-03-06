/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_flexion_left_src.h"

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
  double t848;
  double t1424;
  double t737;
  double t957;
  double t1531;
  double t266;
  double t1670;
  double t1881;
  double t1895;
  double t1367;
  double t1537;
  double t1539;
  double t2082;
  double t196;
  double t2375;
  double t2476;
  double t3683;
  double t3799;
  double t3887;
  double t3098;
  double t3180;
  double t3303;
  double t2783;
  double t3010;
  double t2492;
  double t2536;
  double t2560;
  double t2646;
  double t2855;
  double t2972;
  double t1552;
  double t2097;
  double t2123;
  double t4088;
  double t4151;
  double t4281;
  double t4302;
  double t4313;
  double t4389;
  double t3679;
  double t3989;
  double t4013;
  double t4529;
  double t4571;
  double t4587;
  double t4619;
  double t4652;
  double t4669;
  double t4502;
  double t4507;
  double t4508;
  double t5368;
  double t5387;
  double t5623;
  double t5627;
  double t4702;
  double t4733;
  double t4755;
  double t5204;
  double t5248;
  double t5263;
  double t5265;
  double t5275;
  double t5320;
  double t5400;
  double t5478;
  double t5486;
  double t5505;
  double t5557;
  double t5580;
  double t5666;
  double t5683;
  double t5708;
  double t5769;
  double t5781;
  double t5828;
  double t4792;
  double t4802;
  double t4826;
  double t4847;
  double t4852;
  double t4868;
  t848 = Cos(var1[5]);
  t1424 = Sin(var1[3]);
  t737 = Cos(var1[3]);
  t957 = Sin(var1[4]);
  t1531 = Sin(var1[5]);
  t266 = Cos(var1[6]);
  t1670 = -1.*t848*t1424;
  t1881 = t737*t957*t1531;
  t1895 = t1670 + t1881;
  t1367 = t737*t848*t957;
  t1537 = t1424*t1531;
  t1539 = t1367 + t1537;
  t2082 = Sin(var1[6]);
  t196 = Cos(var1[8]);
  t2375 = Cos(var1[4]);
  t2476 = Cos(var1[7]);
  t3683 = t737*t848;
  t3799 = t1424*t957*t1531;
  t3887 = t3683 + t3799;
  t3098 = t848*t1424*t957;
  t3180 = -1.*t737*t1531;
  t3303 = t3098 + t3180;
  t2783 = Sin(var1[7]);
  t3010 = Sin(var1[8]);
  t2492 = t737*t2375*t2476;
  t2536 = t266*t1895;
  t2560 = t1539*t2082;
  t2646 = t2536 + t2560;
  t2855 = t2646*t2783;
  t2972 = t2492 + t2855;
  t1552 = t266*t1539;
  t2097 = -1.*t1895*t2082;
  t2123 = t1552 + t2097;
  t4088 = t2375*t2476*t1424;
  t4151 = t266*t3887;
  t4281 = t3303*t2082;
  t4302 = t4151 + t4281;
  t4313 = t4302*t2783;
  t4389 = t4088 + t4313;
  t3679 = t266*t3303;
  t3989 = -1.*t3887*t2082;
  t4013 = t3679 + t3989;
  t4529 = -1.*t2476*t957;
  t4571 = t2375*t266*t1531;
  t4587 = t2375*t848*t2082;
  t4619 = t4571 + t4587;
  t4652 = t4619*t2783;
  t4669 = t4529 + t4652;
  t4502 = t2375*t848*t266;
  t4507 = -1.*t2375*t1531*t2082;
  t4508 = t4502 + t4507;
  t5368 = -1.*t2476;
  t5387 = 1. + t5368;
  t5623 = -1.*t196;
  t5627 = 1. + t5623;
  t4702 = t196*t2972;
  t4733 = t2123*t3010;
  t4755 = t4702 + t4733;
  t5204 = -1.*t266;
  t5248 = 1. + t5204;
  t5263 = 0.135*t5248;
  t5265 = 0. + t5263;
  t5275 = -0.135*t2082;
  t5320 = 0. + t5275;
  t5400 = 0.135*t5387;
  t5478 = 0.049*t2783;
  t5486 = 0. + t5400 + t5478;
  t5505 = -0.049*t5387;
  t5557 = 0.135*t2783;
  t5580 = 0. + t5505 + t5557;
  t5666 = -0.049*t5627;
  t5683 = -0.09*t3010;
  t5708 = 0. + t5666 + t5683;
  t5769 = -0.09*t5627;
  t5781 = 0.049*t3010;
  t5828 = 0. + t5769 + t5781;
  t4792 = t196*t4389;
  t4802 = t4013*t3010;
  t4826 = t4792 + t4802;
  t4847 = t196*t4669;
  t4852 = t4508*t3010;
  t4868 = t4847 + t4852;
  p_output1[0]=-1.*t196*t2123 + t2972*t3010;
  p_output1[1]=-1.*t196*t4013 + t3010*t4389;
  p_output1[2]=-1.*t196*t4508 + t3010*t4669;
  p_output1[3]=0.;
  p_output1[4]=t4755;
  p_output1[5]=t4826;
  p_output1[6]=t4868;
  p_output1[7]=0.;
  p_output1[8]=-1.*t2476*t2646 + t2375*t2783*t737;
  p_output1[9]=t1424*t2375*t2783 - 1.*t2476*t4302;
  p_output1[10]=-1.*t2476*t4619 - 1.*t2783*t957;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.09*(t196*t2123 - 1.*t2972*t3010) - 0.049*t4755 + t1895*t5265 + t1539*t5320 + t2646*t5486 + t2972*t5708 + t2123*t5828 + t2375*t5580*t737 + 0.135*(t2476*t2646 - 1.*t2375*t2783*t737) + var1[0];
  p_output1[13]=0. + 0.135*(-1.*t1424*t2375*t2783 + t2476*t4302) - 0.09*(t196*t4013 - 1.*t3010*t4389) - 0.049*t4826 + t3887*t5265 + t3303*t5320 + t4302*t5486 + t1424*t2375*t5580 + t4389*t5708 + t4013*t5828 + var1[1];
  p_output1[14]=0. - 0.09*(t196*t4508 - 1.*t3010*t4669) - 0.049*t4868 + t1531*t2375*t5265 + t4619*t5486 + t4669*t5708 + t4508*t5828 + t2375*t5320*t848 - 1.*t5580*t957 + 0.135*(t2476*t4619 + t2783*t957) + var1[2];
  p_output1[15]=1.;
}



void H_hip_flexion_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
