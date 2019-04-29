/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:21:47 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_flexion_left.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t1271;
  double t2075;
  double t472;
  double t1272;
  double t3276;
  double t329;
  double t4940;
  double t4989;
  double t5274;
  double t1400;
  double t4049;
  double t4257;
  double t5341;
  double t8;
  double t5698;
  double t5713;
  double t5908;
  double t5909;
  double t5923;
  double t5829;
  double t5887;
  double t5890;
  double t5776;
  double t5800;
  double t5740;
  double t5741;
  double t5746;
  double t5748;
  double t5792;
  double t5798;
  double t4817;
  double t5342;
  double t5483;
  double t5959;
  double t5966;
  double t5967;
  double t6000;
  double t6002;
  double t6003;
  double t5898;
  double t5952;
  double t5955;
  double t6054;
  double t6060;
  double t6071;
  double t6080;
  double t6092;
  double t6095;
  double t6035;
  double t6040;
  double t6042;
  t1271 = Cos(var1[5]);
  t2075 = Sin(var1[3]);
  t472 = Cos(var1[3]);
  t1272 = Sin(var1[4]);
  t3276 = Sin(var1[5]);
  t329 = Cos(var1[6]);
  t4940 = -1.*t1271*t2075;
  t4989 = t472*t1272*t3276;
  t5274 = t4940 + t4989;
  t1400 = t472*t1271*t1272;
  t4049 = t2075*t3276;
  t4257 = t1400 + t4049;
  t5341 = Sin(var1[6]);
  t8 = Cos(var1[8]);
  t5698 = Cos(var1[4]);
  t5713 = Cos(var1[7]);
  t5908 = t472*t1271;
  t5909 = t2075*t1272*t3276;
  t5923 = t5908 + t5909;
  t5829 = t1271*t2075*t1272;
  t5887 = -1.*t472*t3276;
  t5890 = t5829 + t5887;
  t5776 = Sin(var1[7]);
  t5800 = Sin(var1[8]);
  t5740 = t472*t5698*t5713;
  t5741 = t329*t5274;
  t5746 = t4257*t5341;
  t5748 = t5741 + t5746;
  t5792 = t5748*t5776;
  t5798 = t5740 + t5792;
  t4817 = t329*t4257;
  t5342 = -1.*t5274*t5341;
  t5483 = t4817 + t5342;
  t5959 = t5698*t5713*t2075;
  t5966 = t329*t5923;
  t5967 = t5890*t5341;
  t6000 = t5966 + t5967;
  t6002 = t6000*t5776;
  t6003 = t5959 + t6002;
  t5898 = t329*t5890;
  t5952 = -1.*t5923*t5341;
  t5955 = t5898 + t5952;
  t6054 = -1.*t5713*t1272;
  t6060 = t5698*t329*t3276;
  t6071 = t5698*t1271*t5341;
  t6080 = t6060 + t6071;
  t6092 = t6080*t5776;
  t6095 = t6054 + t6092;
  t6035 = t5698*t1271*t329;
  t6040 = -1.*t5698*t3276*t5341;
  t6042 = t6035 + t6040;

  p_output1(0)=t5798*t5800 - 1.*t5483*t8;
  p_output1(1)=t5800*t6003 - 1.*t5955*t8;
  p_output1(2)=t5800*t6095 - 1.*t6042*t8;
  p_output1(3)=t5483*t5800 + t5798*t8;
  p_output1(4)=t5800*t5955 + t6003*t8;
  p_output1(5)=t5800*t6042 + t6095*t8;
  p_output1(6)=-1.*t5713*t5748 + t472*t5698*t5776;
  p_output1(7)=t2075*t5698*t5776 - 1.*t5713*t6000;
  p_output1(8)=-1.*t1272*t5776 - 1.*t5713*t6080;
}


       
Eigen::Matrix<double,3,3> R_hip_flexion_left(const Eigen::Matrix<double,20,1> &var1)
//void R_hip_flexion_left(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



