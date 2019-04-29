/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:21:44 GMT-04:00
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
  double t2221;
  double t1948;
  double t2859;
  double t1974;
  double t3625;
  double t61;
  double t2005;
  double t4142;
  double t4151;
  double t4610;
  double t5164;
  double t5187;
  double t5268;
  double t5669;
  double t5674;
  double t5685;
  double t5692;
  double t5620;
  double t5645;
  double t5656;
  double t5706;
  double t5823;
  double t5827;
  double t5830;
  double t5839;
  double t5800;
  double t5802;
  double t5803;
  double t5857;
  double t5859;
  double t5860;
  double t1596;
  double t1646;
  double t1792;
  double t1855;
  double t5304;
  double t5315;
  double t5966;
  double t5967;
  double t5970;
  double t5975;
  double t5986;
  double t5988;
  double t5687;
  double t5695;
  double t5698;
  double t5740;
  double t5746;
  double t5768;
  double t6002;
  double t6003;
  double t6009;
  double t5832;
  double t5853;
  double t5855;
  double t5863;
  double t5868;
  double t5887;
  double t6033;
  double t6035;
  double t6039;
  double t6045;
  double t6046;
  double t6049;
  double t6123;
  double t6128;
  double t6130;
  double t6144;
  double t6145;
  double t6146;
  double t6151;
  double t6152;
  double t6153;
  t2221 = Cos(var1[3]);
  t1948 = Cos(var1[5]);
  t2859 = Sin(var1[4]);
  t1974 = Sin(var1[3]);
  t3625 = Sin(var1[5]);
  t61 = Cos(var1[6]);
  t2005 = -1.*t1948*t1974;
  t4142 = t2221*t2859*t3625;
  t4151 = t2005 + t4142;
  t4610 = t2221*t1948*t2859;
  t5164 = t1974*t3625;
  t5187 = t4610 + t5164;
  t5268 = Sin(var1[6]);
  t5669 = Cos(var1[7]);
  t5674 = -1.*t5669;
  t5685 = 1. + t5674;
  t5692 = Sin(var1[7]);
  t5620 = t61*t4151;
  t5645 = t5187*t5268;
  t5656 = t5620 + t5645;
  t5706 = Cos(var1[4]);
  t5823 = Cos(var1[8]);
  t5827 = -1.*t5823;
  t5830 = 1. + t5827;
  t5839 = Sin(var1[8]);
  t5800 = t2221*t5706*t5669;
  t5802 = t5656*t5692;
  t5803 = t5800 + t5802;
  t5857 = t61*t5187;
  t5859 = -1.*t4151*t5268;
  t5860 = t5857 + t5859;
  t1596 = -1.*t61;
  t1646 = 1. + t1596;
  t1792 = 0.135*t1646;
  t1855 = 0. + t1792;
  t5304 = -0.135*t5268;
  t5315 = 0. + t5304;
  t5966 = t2221*t1948;
  t5967 = t1974*t2859*t3625;
  t5970 = t5966 + t5967;
  t5975 = t1948*t1974*t2859;
  t5986 = -1.*t2221*t3625;
  t5988 = t5975 + t5986;
  t5687 = 0.135*t5685;
  t5695 = 0.049*t5692;
  t5698 = 0. + t5687 + t5695;
  t5740 = -0.049*t5685;
  t5746 = 0.135*t5692;
  t5768 = 0. + t5740 + t5746;
  t6002 = t61*t5970;
  t6003 = t5988*t5268;
  t6009 = t6002 + t6003;
  t5832 = -0.049*t5830;
  t5853 = -0.09*t5839;
  t5855 = 0. + t5832 + t5853;
  t5863 = -0.09*t5830;
  t5868 = 0.049*t5839;
  t5887 = 0. + t5863 + t5868;
  t6033 = t5706*t5669*t1974;
  t6035 = t6009*t5692;
  t6039 = t6033 + t6035;
  t6045 = t61*t5988;
  t6046 = -1.*t5970*t5268;
  t6049 = t6045 + t6046;
  t6123 = t5706*t61*t3625;
  t6128 = t5706*t1948*t5268;
  t6130 = t6123 + t6128;
  t6144 = -1.*t5669*t2859;
  t6145 = t6130*t5692;
  t6146 = t6144 + t6145;
  t6151 = t5706*t1948*t61;
  t6152 = -1.*t5706*t3625*t5268;
  t6153 = t6151 + t6152;

  p_output1(0)=0. + t1855*t4151 + t5187*t5315 + t5656*t5698 + 0.135*(t5656*t5669 - 1.*t2221*t5692*t5706) + t2221*t5706*t5768 + t5803*t5855 - 0.09*(-1.*t5803*t5839 + t5823*t5860) - 0.049*(t5803*t5823 + t5839*t5860) + t5860*t5887 + var1(0);
  p_output1(1)=0. + t1974*t5706*t5768 + t1855*t5970 + t5315*t5988 + t5698*t6009 + 0.135*(-1.*t1974*t5692*t5706 + t5669*t6009) + t5855*t6039 + t5887*t6049 - 0.09*(-1.*t5839*t6039 + t5823*t6049) - 0.049*(t5823*t6039 + t5839*t6049) + var1(1);
  p_output1(2)=0. + t1855*t3625*t5706 + t1948*t5315*t5706 - 1.*t2859*t5768 + t5698*t6130 + 0.135*(t2859*t5692 + t5669*t6130) + t5855*t6146 + t5887*t6153 - 0.09*(-1.*t5839*t6146 + t5823*t6153) - 0.049*(t5823*t6146 + t5839*t6153) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_hip_flexion_left(const Eigen::Matrix<double,20,1> &var1)
//void p_hip_flexion_left(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



