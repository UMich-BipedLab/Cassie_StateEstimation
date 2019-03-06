/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:13 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_flexion_left.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t4688;
  double t3664;
  double t4707;
  double t4042;
  double t4764;
  double t1674;
  double t4632;
  double t4784;
  double t4816;
  double t4846;
  double t4860;
  double t4880;
  double t4900;
  double t5014;
  double t5016;
  double t5030;
  double t5033;
  double t4978;
  double t4983;
  double t5003;
  double t5085;
  double t5211;
  double t5220;
  double t5232;
  double t5235;
  double t5171;
  double t5189;
  double t5193;
  double t5336;
  double t5345;
  double t5348;
  double t2609;
  double t2678;
  double t3084;
  double t3090;
  double t4920;
  double t4928;
  double t5496;
  double t5510;
  double t5511;
  double t5521;
  double t5528;
  double t5559;
  double t5032;
  double t5035;
  double t5058;
  double t5093;
  double t5116;
  double t5136;
  double t5580;
  double t5588;
  double t5595;
  double t5234;
  double t5242;
  double t5249;
  double t5352;
  double t5393;
  double t5399;
  double t5685;
  double t5690;
  double t5733;
  double t5767;
  double t5820;
  double t5824;
  double t5913;
  double t5918;
  double t5937;
  double t5991;
  double t6009;
  double t6015;
  double t6045;
  double t6048;
  double t6057;
  t4688 = Cos(var1[3]);
  t3664 = Cos(var1[5]);
  t4707 = Sin(var1[4]);
  t4042 = Sin(var1[3]);
  t4764 = Sin(var1[5]);
  t1674 = Cos(var1[6]);
  t4632 = -1.*t3664*t4042;
  t4784 = t4688*t4707*t4764;
  t4816 = t4632 + t4784;
  t4846 = t4688*t3664*t4707;
  t4860 = t4042*t4764;
  t4880 = t4846 + t4860;
  t4900 = Sin(var1[6]);
  t5014 = Cos(var1[7]);
  t5016 = -1.*t5014;
  t5030 = 1. + t5016;
  t5033 = Sin(var1[7]);
  t4978 = t1674*t4816;
  t4983 = t4880*t4900;
  t5003 = t4978 + t4983;
  t5085 = Cos(var1[4]);
  t5211 = Cos(var1[8]);
  t5220 = -1.*t5211;
  t5232 = 1. + t5220;
  t5235 = Sin(var1[8]);
  t5171 = t4688*t5085*t5014;
  t5189 = t5003*t5033;
  t5193 = t5171 + t5189;
  t5336 = t1674*t4880;
  t5345 = -1.*t4816*t4900;
  t5348 = t5336 + t5345;
  t2609 = -1.*t1674;
  t2678 = 1. + t2609;
  t3084 = 0.135*t2678;
  t3090 = 0. + t3084;
  t4920 = -0.135*t4900;
  t4928 = 0. + t4920;
  t5496 = t4688*t3664;
  t5510 = t4042*t4707*t4764;
  t5511 = t5496 + t5510;
  t5521 = t3664*t4042*t4707;
  t5528 = -1.*t4688*t4764;
  t5559 = t5521 + t5528;
  t5032 = 0.135*t5030;
  t5035 = 0.049*t5033;
  t5058 = 0. + t5032 + t5035;
  t5093 = -0.049*t5030;
  t5116 = 0.135*t5033;
  t5136 = 0. + t5093 + t5116;
  t5580 = t1674*t5511;
  t5588 = t5559*t4900;
  t5595 = t5580 + t5588;
  t5234 = -0.049*t5232;
  t5242 = -0.09*t5235;
  t5249 = 0. + t5234 + t5242;
  t5352 = -0.09*t5232;
  t5393 = 0.049*t5235;
  t5399 = 0. + t5352 + t5393;
  t5685 = t5085*t5014*t4042;
  t5690 = t5595*t5033;
  t5733 = t5685 + t5690;
  t5767 = t1674*t5559;
  t5820 = -1.*t5511*t4900;
  t5824 = t5767 + t5820;
  t5913 = t5085*t1674*t4764;
  t5918 = t5085*t3664*t4900;
  t5937 = t5913 + t5918;
  t5991 = -1.*t5014*t4707;
  t6009 = t5937*t5033;
  t6015 = t5991 + t6009;
  t6045 = t5085*t3664*t1674;
  t6048 = -1.*t5085*t4764*t4900;
  t6057 = t6045 + t6048;

  p_output1(0)=0. + t3090*t4816 + t4880*t4928 + t5003*t5058 + 0.135*(t5003*t5014 - 1.*t4688*t5033*t5085) + t4688*t5085*t5136 + t5193*t5249 - 0.09*(-1.*t5193*t5235 + t5211*t5348) - 0.049*(t5193*t5211 + t5235*t5348) + t5348*t5399 + var1(0);
  p_output1(1)=0. + t4042*t5085*t5136 + t3090*t5511 + t4928*t5559 + t5058*t5595 + 0.135*(-1.*t4042*t5033*t5085 + t5014*t5595) + t5249*t5733 + t5399*t5824 - 0.09*(-1.*t5235*t5733 + t5211*t5824) - 0.049*(t5211*t5733 + t5235*t5824) + var1(1);
  p_output1(2)=0. + t3090*t4764*t5085 + t3664*t4928*t5085 - 1.*t4707*t5136 + t5058*t5937 + 0.135*(t4707*t5033 + t5014*t5937) + t5249*t6015 + t5399*t6057 - 0.09*(-1.*t5235*t6015 + t5211*t6057) - 0.049*(t5211*t6015 + t5235*t6057) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_hip_flexion_left(const Eigen::Matrix<double,20,1> &var1)
//void p_hip_flexion_left(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



