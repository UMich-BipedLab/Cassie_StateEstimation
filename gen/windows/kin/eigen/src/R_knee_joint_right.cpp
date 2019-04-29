/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:22:26 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_joint_right.h"

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
  double t1621;
  double t2157;
  double t1424;
  double t1631;
  double t2545;
  double t3659;
  double t1863;
  double t3101;
  double t3170;
  double t1231;
  double t3668;
  double t4624;
  double t4813;
  double t5106;
  double t3587;
  double t4843;
  double t4994;
  double t1173;
  double t5145;
  double t5153;
  double t5167;
  double t5171;
  double t5188;
  double t5196;
  double t5204;
  double t5217;
  double t5235;
  double t400;
  double t5580;
  double t5601;
  double t5604;
  double t5611;
  double t5618;
  double t5642;
  double t5330;
  double t5610;
  double t5666;
  double t5691;
  double t5730;
  double t5733;
  double t5744;
  double t5769;
  double t5783;
  double t5791;
  double t6050;
  double t6058;
  double t6090;
  double t6214;
  double t6266;
  double t6295;
  double t6367;
  double t6377;
  double t6380;
  double t5016;
  double t5251;
  double t5269;
  double t5358;
  double t5428;
  double t5486;
  double t5709;
  double t5808;
  double t5828;
  double t5907;
  double t5980;
  double t6013;
  double t6189;
  double t6408;
  double t6409;
  double t6446;
  double t6471;
  double t6504;
  t1621 = Cos(var1[5]);
  t2157 = Sin(var1[3]);
  t1424 = Cos(var1[3]);
  t1631 = Sin(var1[4]);
  t2545 = Sin(var1[5]);
  t3659 = Sin(var1[13]);
  t1863 = t1424*t1621*t1631;
  t3101 = t2157*t2545;
  t3170 = t1863 + t3101;
  t1231 = Cos(var1[13]);
  t3668 = -1.*t1621*t2157;
  t4624 = t1424*t1631*t2545;
  t4813 = t3668 + t4624;
  t5106 = Cos(var1[15]);
  t3587 = t1231*t3170;
  t4843 = -1.*t3659*t4813;
  t4994 = t3587 + t4843;
  t1173 = Sin(var1[15]);
  t5145 = Cos(var1[14]);
  t5153 = Cos(var1[4]);
  t5167 = t5145*t1424*t5153;
  t5171 = Sin(var1[14]);
  t5188 = t3659*t3170;
  t5196 = t1231*t4813;
  t5204 = t5188 + t5196;
  t5217 = t5171*t5204;
  t5235 = t5167 + t5217;
  t400 = Sin(var1[16]);
  t5580 = t1621*t2157*t1631;
  t5601 = -1.*t1424*t2545;
  t5604 = t5580 + t5601;
  t5611 = t1424*t1621;
  t5618 = t2157*t1631*t2545;
  t5642 = t5611 + t5618;
  t5330 = Cos(var1[16]);
  t5610 = t1231*t5604;
  t5666 = -1.*t3659*t5642;
  t5691 = t5610 + t5666;
  t5730 = t5145*t5153*t2157;
  t5733 = t3659*t5604;
  t5744 = t1231*t5642;
  t5769 = t5733 + t5744;
  t5783 = t5171*t5769;
  t5791 = t5730 + t5783;
  t6050 = t1231*t5153*t1621;
  t6058 = -1.*t5153*t3659*t2545;
  t6090 = t6050 + t6058;
  t6214 = -1.*t5145*t1631;
  t6266 = t5153*t1621*t3659;
  t6295 = t1231*t5153*t2545;
  t6367 = t6266 + t6295;
  t6377 = t5171*t6367;
  t6380 = t6214 + t6377;
  t5016 = t1173*t4994;
  t5251 = t5106*t5235;
  t5269 = t5016 + t5251;
  t5358 = t5106*t4994;
  t5428 = -1.*t1173*t5235;
  t5486 = t5358 + t5428;
  t5709 = t1173*t5691;
  t5808 = t5106*t5791;
  t5828 = t5709 + t5808;
  t5907 = t5106*t5691;
  t5980 = -1.*t1173*t5791;
  t6013 = t5907 + t5980;
  t6189 = t1173*t6090;
  t6408 = t5106*t6380;
  t6409 = t6189 + t6408;
  t6446 = t5106*t6090;
  t6471 = -1.*t1173*t6380;
  t6504 = t6446 + t6471;

  p_output1(0)=t400*t5269 - 1.*t5330*t5486;
  p_output1(1)=t400*t5828 - 1.*t5330*t6013;
  p_output1(2)=t400*t6409 - 1.*t5330*t6504;
  p_output1(3)=t5269*t5330 + t400*t5486;
  p_output1(4)=t5330*t5828 + t400*t6013;
  p_output1(5)=t5330*t6409 + t400*t6504;
  p_output1(6)=t1424*t5153*t5171 - 1.*t5145*t5204;
  p_output1(7)=t2157*t5153*t5171 - 1.*t5145*t5769;
  p_output1(8)=-1.*t1631*t5171 - 1.*t5145*t6367;
}


       
Eigen::Matrix<double,3,3> R_knee_joint_right(const Eigen::Matrix<double,20,1> &var1)
//void R_knee_joint_right(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



