/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:30 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_flexion_left_src.h"

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
  double t1447;
  double t1073;
  double t1589;
  double t1184;
  double t2169;
  double t86;
  double t1239;
  double t2500;
  double t2601;
  double t2683;
  double t3356;
  double t3536;
  double t4071;
  double t4410;
  double t4478;
  double t4616;
  double t4622;
  double t4397;
  double t4402;
  double t4409;
  double t4796;
  double t4862;
  double t4903;
  double t4951;
  double t4970;
  double t4848;
  double t4852;
  double t4854;
  double t5043;
  double t5051;
  double t5097;
  double t436;
  double t605;
  double t749;
  double t823;
  double t4110;
  double t4187;
  double t5249;
  double t5284;
  double t5289;
  double t5329;
  double t5357;
  double t5368;
  double t4619;
  double t4664;
  double t4770;
  double t4813;
  double t4814;
  double t4824;
  double t5393;
  double t5397;
  double t5405;
  double t4956;
  double t4994;
  double t5032;
  double t5106;
  double t5114;
  double t5130;
  double t5488;
  double t5489;
  double t5493;
  double t5580;
  double t5594;
  double t5601;
  double t5791;
  double t5796;
  double t5841;
  double t5980;
  double t6005;
  double t6018;
  double t6037;
  double t6043;
  double t6050;
  t1447 = Cos(var1[3]);
  t1073 = Cos(var1[5]);
  t1589 = Sin(var1[4]);
  t1184 = Sin(var1[3]);
  t2169 = Sin(var1[5]);
  t86 = Cos(var1[6]);
  t1239 = -1.*t1073*t1184;
  t2500 = t1447*t1589*t2169;
  t2601 = t1239 + t2500;
  t2683 = t1447*t1073*t1589;
  t3356 = t1184*t2169;
  t3536 = t2683 + t3356;
  t4071 = Sin(var1[6]);
  t4410 = Cos(var1[7]);
  t4478 = -1.*t4410;
  t4616 = 1. + t4478;
  t4622 = Sin(var1[7]);
  t4397 = t86*t2601;
  t4402 = t3536*t4071;
  t4409 = t4397 + t4402;
  t4796 = Cos(var1[4]);
  t4862 = Cos(var1[8]);
  t4903 = -1.*t4862;
  t4951 = 1. + t4903;
  t4970 = Sin(var1[8]);
  t4848 = t1447*t4796*t4410;
  t4852 = t4409*t4622;
  t4854 = t4848 + t4852;
  t5043 = t86*t3536;
  t5051 = -1.*t2601*t4071;
  t5097 = t5043 + t5051;
  t436 = -1.*t86;
  t605 = 1. + t436;
  t749 = 0.135*t605;
  t823 = 0. + t749;
  t4110 = -0.135*t4071;
  t4187 = 0. + t4110;
  t5249 = t1447*t1073;
  t5284 = t1184*t1589*t2169;
  t5289 = t5249 + t5284;
  t5329 = t1073*t1184*t1589;
  t5357 = -1.*t1447*t2169;
  t5368 = t5329 + t5357;
  t4619 = 0.135*t4616;
  t4664 = 0.049*t4622;
  t4770 = 0. + t4619 + t4664;
  t4813 = -0.049*t4616;
  t4814 = 0.135*t4622;
  t4824 = 0. + t4813 + t4814;
  t5393 = t86*t5289;
  t5397 = t5368*t4071;
  t5405 = t5393 + t5397;
  t4956 = -0.049*t4951;
  t4994 = -0.09*t4970;
  t5032 = 0. + t4956 + t4994;
  t5106 = -0.09*t4951;
  t5114 = 0.049*t4970;
  t5130 = 0. + t5106 + t5114;
  t5488 = t4796*t4410*t1184;
  t5489 = t5405*t4622;
  t5493 = t5488 + t5489;
  t5580 = t86*t5368;
  t5594 = -1.*t5289*t4071;
  t5601 = t5580 + t5594;
  t5791 = t4796*t86*t2169;
  t5796 = t4796*t1073*t4071;
  t5841 = t5791 + t5796;
  t5980 = -1.*t4410*t1589;
  t6005 = t5841*t4622;
  t6018 = t5980 + t6005;
  t6037 = t4796*t1073*t86;
  t6043 = -1.*t4796*t2169*t4071;
  t6050 = t6037 + t6043;
  p_output1[0]=0. + t3536*t4187 + t4409*t4770 + 0.135*(t4409*t4410 - 1.*t1447*t4622*t4796) + t1447*t4796*t4824 + t4854*t5032 - 0.09*(-1.*t4854*t4970 + t4862*t5097) - 0.049*(t4854*t4862 + t4970*t5097) + t5097*t5130 + t2601*t823 + var1[0];
  p_output1[1]=0. + t1184*t4796*t4824 + t4187*t5368 + t4770*t5405 + 0.135*(-1.*t1184*t4622*t4796 + t4410*t5405) + t5032*t5493 + t5130*t5601 - 0.09*(-1.*t4970*t5493 + t4862*t5601) - 0.049*(t4862*t5493 + t4970*t5601) + t5289*t823 + var1[1];
  p_output1[2]=0. + t1073*t4187*t4796 - 1.*t1589*t4824 + t4770*t5841 + 0.135*(t1589*t4622 + t4410*t5841) + t5032*t6018 + t5130*t6050 - 0.09*(-1.*t4970*t6018 + t4862*t6050) - 0.049*(t4862*t6018 + t4970*t6050) + t2169*t4796*t823 + var1[2];
}



void p_hip_flexion_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
