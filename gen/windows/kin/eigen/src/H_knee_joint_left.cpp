/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:09:22 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_joint_left.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t192;
  double t707;
  double t761;
  double t717;
  double t834;
  double t687;
  double t1048;
  double t1068;
  double t1092;
  double t723;
  double t870;
  double t945;
  double t1152;
  double t153;
  double t1452;
  double t1573;
  double t1641;
  double t504;
  double t552;
  double t668;
  double t986;
  double t1235;
  double t1253;
  double t1296;
  double t1319;
  double t1329;
  double t1644;
  double t113;
  double t2363;
  double t2374;
  double t2376;
  double t2251;
  double t2270;
  double t2315;
  double t1886;
  double t2563;
  double t2672;
  double t2711;
  double t2097;
  double t2342;
  double t2431;
  double t2463;
  double t2515;
  double t2523;
  double t3498;
  double t3520;
  double t3538;
  double t3142;
  double t3261;
  double t3265;
  double t3293;
  double t3311;
  double t3387;
  double t1339;
  double t1650;
  double t1812;
  double t1887;
  double t1913;
  double t1962;
  double t2557;
  double t2785;
  double t2810;
  double t2835;
  double t2850;
  double t3025;
  double t3452;
  double t3590;
  double t3642;
  double t3710;
  double t3733;
  double t3751;
  double t4583;
  double t4742;
  double t5125;
  double t5132;
  double t5297;
  double t5298;
  double t3921;
  double t3993;
  double t4010;
  double t4321;
  double t4405;
  double t4440;
  double t4446;
  double t4531;
  double t4532;
  double t4763;
  double t4776;
  double t4777;
  double t4873;
  double t4883;
  double t4946;
  double t5141;
  double t5154;
  double t5199;
  double t5209;
  double t5234;
  double t5292;
  double t5301;
  double t5313;
  double t5327;
  double t5376;
  double t5390;
  double t5391;
  double t4015;
  double t4016;
  double t4054;
  double t4075;
  double t4092;
  double t4093;
  t192 = Cos(var1[3]);
  t707 = Cos(var1[5]);
  t761 = Sin(var1[4]);
  t717 = Sin(var1[3]);
  t834 = Sin(var1[5]);
  t687 = Cos(var1[6]);
  t1048 = t192*t707*t761;
  t1068 = t717*t834;
  t1092 = t1048 + t1068;
  t723 = -1.*t707*t717;
  t870 = t192*t761*t834;
  t945 = t723 + t870;
  t1152 = Sin(var1[6]);
  t153 = Cos(var1[8]);
  t1452 = t687*t1092;
  t1573 = -1.*t945*t1152;
  t1641 = t1452 + t1573;
  t504 = Cos(var1[4]);
  t552 = Cos(var1[7]);
  t668 = t192*t504*t552;
  t986 = t687*t945;
  t1235 = t1092*t1152;
  t1253 = t986 + t1235;
  t1296 = Sin(var1[7]);
  t1319 = t1253*t1296;
  t1329 = t668 + t1319;
  t1644 = Sin(var1[8]);
  t113 = Sin(var1[9]);
  t2363 = t707*t717*t761;
  t2374 = -1.*t192*t834;
  t2376 = t2363 + t2374;
  t2251 = t192*t707;
  t2270 = t717*t761*t834;
  t2315 = t2251 + t2270;
  t1886 = Cos(var1[9]);
  t2563 = t687*t2376;
  t2672 = -1.*t2315*t1152;
  t2711 = t2563 + t2672;
  t2097 = t504*t552*t717;
  t2342 = t687*t2315;
  t2431 = t2376*t1152;
  t2463 = t2342 + t2431;
  t2515 = t2463*t1296;
  t2523 = t2097 + t2515;
  t3498 = t504*t707*t687;
  t3520 = -1.*t504*t834*t1152;
  t3538 = t3498 + t3520;
  t3142 = -1.*t552*t761;
  t3261 = t504*t687*t834;
  t3265 = t504*t707*t1152;
  t3293 = t3261 + t3265;
  t3311 = t3293*t1296;
  t3387 = t3142 + t3311;
  t1339 = t153*t1329;
  t1650 = t1641*t1644;
  t1812 = t1339 + t1650;
  t1887 = t153*t1641;
  t1913 = -1.*t1329*t1644;
  t1962 = t1887 + t1913;
  t2557 = t153*t2523;
  t2785 = t2711*t1644;
  t2810 = t2557 + t2785;
  t2835 = t153*t2711;
  t2850 = -1.*t2523*t1644;
  t3025 = t2835 + t2850;
  t3452 = t153*t3387;
  t3590 = t3538*t1644;
  t3642 = t3452 + t3590;
  t3710 = t153*t3538;
  t3733 = -1.*t3387*t1644;
  t3751 = t3710 + t3733;
  t4583 = -1.*t552;
  t4742 = 1. + t4583;
  t5125 = -1.*t153;
  t5132 = 1. + t5125;
  t5297 = -1.*t1886;
  t5298 = 1. + t5297;
  t3921 = t1886*t1812;
  t3993 = t113*t1962;
  t4010 = t3921 + t3993;
  t4321 = -1.*t687;
  t4405 = 1. + t4321;
  t4440 = 0.135*t4405;
  t4446 = 0. + t4440;
  t4531 = -0.135*t1152;
  t4532 = 0. + t4531;
  t4763 = 0.135*t4742;
  t4776 = 0.049*t1296;
  t4777 = 0. + t4763 + t4776;
  t4873 = -0.049*t4742;
  t4883 = 0.135*t1296;
  t4946 = 0. + t4873 + t4883;
  t5141 = -0.049*t5132;
  t5154 = -0.09*t1644;
  t5199 = 0. + t5141 + t5154;
  t5209 = -0.09*t5132;
  t5234 = 0.049*t1644;
  t5292 = 0. + t5209 + t5234;
  t5301 = -0.049*t5298;
  t5313 = -0.21*t113;
  t5327 = 0. + t5301 + t5313;
  t5376 = -0.21*t5298;
  t5390 = 0.049*t113;
  t5391 = 0. + t5376 + t5390;
  t4015 = t1886*t2810;
  t4016 = t113*t3025;
  t4054 = t4015 + t4016;
  t4075 = t1886*t3642;
  t4092 = t113*t3751;
  t4093 = t4075 + t4092;

  p_output1(0)=t113*t1812 - 1.*t1886*t1962;
  p_output1(1)=t113*t2810 - 1.*t1886*t3025;
  p_output1(2)=t113*t3642 - 1.*t1886*t3751;
  p_output1(3)=0.;
  p_output1(4)=t4010;
  p_output1(5)=t4054;
  p_output1(6)=t4093;
  p_output1(7)=0.;
  p_output1(8)=t1296*t192*t504 - 1.*t1253*t552;
  p_output1(9)=-1.*t2463*t552 + t1296*t504*t717;
  p_output1(10)=-1.*t3293*t552 - 1.*t1296*t761;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.21*(-1.*t113*t1812 + t1886*t1962) - 0.049*t4010 + t1092*t4532 + t1253*t4777 + t192*t4946*t504 + t1329*t5199 + t1641*t5292 + t1812*t5327 + t1962*t5391 + 0.1305*(-1.*t1296*t192*t504 + t1253*t552) + t4446*t945 + var1(0);
  p_output1(13)=0. - 0.21*(-1.*t113*t2810 + t1886*t3025) - 0.049*t4054 + t2315*t4446 + t2376*t4532 + t2463*t4777 + t2523*t5199 + t2711*t5292 + t2810*t5327 + t3025*t5391 + t4946*t504*t717 + 0.1305*(t2463*t552 - 1.*t1296*t504*t717) + var1(1);
  p_output1(14)=0. - 0.21*(-1.*t113*t3642 + t1886*t3751) - 0.049*t4093 + t3293*t4777 + t3387*t5199 + t3538*t5292 + t3642*t5327 + t3751*t5391 + t4532*t504*t707 - 1.*t4946*t761 + 0.1305*(t3293*t552 + t1296*t761) + t4446*t504*t834 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_knee_joint_left(const Eigen::Matrix<double,20,1> &var1)
//void H_knee_joint_left(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



