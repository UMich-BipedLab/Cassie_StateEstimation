/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:35 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_ankle_joint_right.h"

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
  double t891;
  double t1962;
  double t879;
  double t1477;
  double t2217;
  double t2802;
  double t1856;
  double t2703;
  double t2741;
  double t623;
  double t2821;
  double t2854;
  double t3273;
  double t3797;
  double t2795;
  double t3311;
  double t3669;
  double t167;
  double t3866;
  double t3966;
  double t4026;
  double t4409;
  double t4521;
  double t4598;
  double t4639;
  double t4640;
  double t4653;
  double t4750;
  double t3783;
  double t4724;
  double t4727;
  double t160;
  double t4770;
  double t4776;
  double t4793;
  double t4906;
  double t4736;
  double t4807;
  double t4824;
  double t115;
  double t4930;
  double t4932;
  double t4955;
  double t88;
  double t5145;
  double t5207;
  double t5212;
  double t5267;
  double t5391;
  double t5411;
  double t5213;
  double t5451;
  double t5467;
  double t5480;
  double t5483;
  double t5506;
  double t5571;
  double t5594;
  double t5595;
  double t5472;
  double t5604;
  double t5625;
  double t5700;
  double t5706;
  double t5745;
  double t5056;
  double t5687;
  double t5765;
  double t5774;
  double t5798;
  double t5816;
  double t5818;
  double t5936;
  double t5941;
  double t5958;
  double t6018;
  double t6020;
  double t6078;
  double t6079;
  double t6099;
  double t6126;
  double t5982;
  double t6149;
  double t6151;
  double t6188;
  double t6217;
  double t6228;
  double t6179;
  double t6262;
  double t6286;
  double t6296;
  double t6303;
  double t6310;
  double t4862;
  double t4984;
  double t4985;
  double t5067;
  double t5079;
  double t5096;
  double t5782;
  double t5825;
  double t5832;
  double t5879;
  double t5900;
  double t5907;
  double t6287;
  double t6348;
  double t6357;
  double t6412;
  double t6413;
  double t6467;
  t891 = Cos(var1[5]);
  t1962 = Sin(var1[3]);
  t879 = Cos(var1[3]);
  t1477 = Sin(var1[4]);
  t2217 = Sin(var1[5]);
  t2802 = Sin(var1[13]);
  t1856 = t879*t891*t1477;
  t2703 = t1962*t2217;
  t2741 = t1856 + t2703;
  t623 = Cos(var1[13]);
  t2821 = -1.*t891*t1962;
  t2854 = t879*t1477*t2217;
  t3273 = t2821 + t2854;
  t3797 = Cos(var1[15]);
  t2795 = t623*t2741;
  t3311 = -1.*t2802*t3273;
  t3669 = t2795 + t3311;
  t167 = Sin(var1[15]);
  t3866 = Cos(var1[14]);
  t3966 = Cos(var1[4]);
  t4026 = t3866*t879*t3966;
  t4409 = Sin(var1[14]);
  t4521 = t2802*t2741;
  t4598 = t623*t3273;
  t4639 = t4521 + t4598;
  t4640 = t4409*t4639;
  t4653 = t4026 + t4640;
  t4750 = Cos(var1[16]);
  t3783 = t167*t3669;
  t4724 = t3797*t4653;
  t4727 = t3783 + t4724;
  t160 = Sin(var1[16]);
  t4770 = t3797*t3669;
  t4776 = -1.*t167*t4653;
  t4793 = t4770 + t4776;
  t4906 = Cos(var1[17]);
  t4736 = -1.*t160*t4727;
  t4807 = t4750*t4793;
  t4824 = t4736 + t4807;
  t115 = Sin(var1[17]);
  t4930 = t4750*t4727;
  t4932 = t160*t4793;
  t4955 = t4930 + t4932;
  t88 = Sin(var1[18]);
  t5145 = t891*t1962*t1477;
  t5207 = -1.*t879*t2217;
  t5212 = t5145 + t5207;
  t5267 = t879*t891;
  t5391 = t1962*t1477*t2217;
  t5411 = t5267 + t5391;
  t5213 = t623*t5212;
  t5451 = -1.*t2802*t5411;
  t5467 = t5213 + t5451;
  t5480 = t3866*t3966*t1962;
  t5483 = t2802*t5212;
  t5506 = t623*t5411;
  t5571 = t5483 + t5506;
  t5594 = t4409*t5571;
  t5595 = t5480 + t5594;
  t5472 = t167*t5467;
  t5604 = t3797*t5595;
  t5625 = t5472 + t5604;
  t5700 = t3797*t5467;
  t5706 = -1.*t167*t5595;
  t5745 = t5700 + t5706;
  t5056 = Cos(var1[18]);
  t5687 = -1.*t160*t5625;
  t5765 = t4750*t5745;
  t5774 = t5687 + t5765;
  t5798 = t4750*t5625;
  t5816 = t160*t5745;
  t5818 = t5798 + t5816;
  t5936 = t623*t3966*t891;
  t5941 = -1.*t3966*t2802*t2217;
  t5958 = t5936 + t5941;
  t6018 = -1.*t3866*t1477;
  t6020 = t3966*t891*t2802;
  t6078 = t623*t3966*t2217;
  t6079 = t6020 + t6078;
  t6099 = t4409*t6079;
  t6126 = t6018 + t6099;
  t5982 = t167*t5958;
  t6149 = t3797*t6126;
  t6151 = t5982 + t6149;
  t6188 = t3797*t5958;
  t6217 = -1.*t167*t6126;
  t6228 = t6188 + t6217;
  t6179 = -1.*t160*t6151;
  t6262 = t4750*t6228;
  t6286 = t6179 + t6262;
  t6296 = t4750*t6151;
  t6303 = t160*t6228;
  t6310 = t6296 + t6303;
  t4862 = t115*t4824;
  t4984 = t4906*t4955;
  t4985 = t4862 + t4984;
  t5067 = t4906*t4824;
  t5079 = -1.*t115*t4955;
  t5096 = t5067 + t5079;
  t5782 = t115*t5774;
  t5825 = t4906*t5818;
  t5832 = t5782 + t5825;
  t5879 = t4906*t5774;
  t5900 = -1.*t115*t5818;
  t5907 = t5879 + t5900;
  t6287 = t115*t6286;
  t6348 = t4906*t6310;
  t6357 = t6287 + t6348;
  t6412 = t4906*t6286;
  t6413 = -1.*t115*t6310;
  t6467 = t6412 + t6413;

  p_output1(0)=-1.*t5056*t5096 + t4985*t88;
  p_output1(1)=-1.*t5056*t5907 + t5832*t88;
  p_output1(2)=-1.*t5056*t6467 + t6357*t88;
  p_output1(3)=t4985*t5056 + t5096*t88;
  p_output1(4)=t5056*t5832 + t5907*t88;
  p_output1(5)=t5056*t6357 + t6467*t88;
  p_output1(6)=-1.*t3866*t4639 + t3966*t4409*t879;
  p_output1(7)=t1962*t3966*t4409 - 1.*t3866*t5571;
  p_output1(8)=-1.*t1477*t4409 - 1.*t3866*t6079;
}


       
Eigen::Matrix<double,3,3> R_ankle_joint_right(const Eigen::Matrix<double,20,1> &var1)
//void R_ankle_joint_right(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



