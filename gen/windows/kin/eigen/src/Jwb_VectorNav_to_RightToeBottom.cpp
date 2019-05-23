/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:32:41 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jwb_VectorNav_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t1099;
  double t1193;
  double t1531;
  double t1188;
  double t1281;
  double t1406;
  double t1071;
  double t1633;
  double t1676;
  double t1823;
  double t2124;
  double t1504;
  double t1877;
  double t1899;
  double t1037;
  double t2134;
  double t2198;
  double t2258;
  double t2620;
  double t2074;
  double t2291;
  double t2386;
  double t737;
  double t2690;
  double t2751;
  double t2797;
  double t165;
  double t3145;
  double t4103;
  double t4151;
  double t4180;
  double t3971;
  double t4188;
  double t4275;
  double t4354;
  double t4390;
  double t733;
  double t4280;
  double t4559;
  double t4585;
  double t4593;
  double t4622;
  double t4654;
  double t2535;
  double t2950;
  double t2960;
  double t3257;
  double t3268;
  double t3281;
  double t4588;
  double t4659;
  double t4661;
  double t4769;
  double t4863;
  double t4873;
  t1099 = Cos(var1[13]);
  t1193 = Sin(var1[13]);
  t1531 = Cos(var1[12]);
  t1188 = 0.642788*t1099;
  t1281 = -0.766044*t1193;
  t1406 = t1188 + t1281;
  t1071 = Sin(var1[12]);
  t1633 = 0.766044*t1099;
  t1676 = 0.642788*t1193;
  t1823 = t1633 + t1676;
  t2124 = Cos(var1[11]);
  t1504 = t1071*t1406;
  t1877 = t1531*t1823;
  t1899 = 0. + t1504 + t1877;
  t1037 = Sin(var1[11]);
  t2134 = t1531*t1406;
  t2198 = -1.*t1071*t1823;
  t2258 = 0. + t2134 + t2198;
  t2620 = Cos(var1[10]);
  t2074 = -1.*t1037*t1899;
  t2291 = t2124*t2258;
  t2386 = 0. + t2074 + t2291;
  t737 = Sin(var1[10]);
  t2690 = t2124*t1899;
  t2751 = t1037*t2258;
  t2797 = 0. + t2690 + t2751;
  t165 = Cos(var1[8]);
  t3145 = Cos(var1[9]);
  t4103 = -0.766044*t1099;
  t4151 = -0.642788*t1193;
  t4180 = t4103 + t4151;
  t3971 = -1.*t1071*t1406;
  t4188 = t1531*t4180;
  t4275 = 0. + t3971 + t4188;
  t4354 = t1071*t4180;
  t4390 = 0. + t2134 + t4354;
  t733 = Sin(var1[9]);
  t4280 = t1037*t4275;
  t4559 = t2124*t4390;
  t4585 = 0. + t4280 + t4559;
  t4593 = t2124*t4275;
  t4622 = -1.*t1037*t4390;
  t4654 = 0. + t4593 + t4622;
  t2535 = t737*t2386;
  t2950 = t2620*t2797;
  t2960 = 0. + t2535 + t2950;
  t3257 = t2620*t2386;
  t3268 = -1.*t737*t2797;
  t3281 = 0. + t3257 + t3268;
  t4588 = -1.*t737*t4585;
  t4659 = t2620*t4654;
  t4661 = 0. + t4588 + t4659;
  t4769 = t2620*t4585;
  t4863 = t737*t4654;
  t4873 = 0. + t4769 + t4863;

  p_output1(0)=0;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=0;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=0;
  p_output1(9)=0;
  p_output1(10)=0;
  p_output1(11)=0;
  p_output1(12)=0;
  p_output1(13)=0;
  p_output1(14)=0;
  p_output1(15)=0;
  p_output1(16)=0;
  p_output1(17)=0;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0. + Sin(var1(8));
  p_output1(22)=0. + t165*(0. + t3145*t3281 - 1.*t2960*t733);
  p_output1(23)=0. + t165*(0. + t3145*t4661 - 1.*t4873*t733);
  p_output1(24)=0.;
  p_output1(25)=0. + t2960*t3145 + t3281*t733;
  p_output1(26)=0. + t3145*t4873 + t4661*t733;
  p_output1(27)=1.;
  p_output1(28)=0.;
  p_output1(29)=0.;
  p_output1(30)=1.;
  p_output1(31)=0.;
  p_output1(32)=0.;
  p_output1(33)=1.;
  p_output1(34)=0.;
  p_output1(35)=0.;
  p_output1(36)=1.;
  p_output1(37)=0.;
  p_output1(38)=0.;
  p_output1(39)=1.;
  p_output1(40)=0.;
  p_output1(41)=0.;
}


       
Eigen::Matrix<double,3,14> Jwb_VectorNav_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void Jwb_VectorNav_to_RightToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



