/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:21:36 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_abduction_left.h"

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
static void output1(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t546;
  double t3861;
  double t4128;
  double t3414;
  double t4175;
  double t1056;
  double t4043;
  double t4199;
  double t4206;
  double t4236;
  double t4246;
  double t4278;
  double t4312;
  double t433;
  double t1706;
  double t2368;
  double t2489;
  double t3140;
  double t4329;
  double t4335;
  double t4546;
  double t4555;
  double t4564;
  double t4599;
  double t4654;
  double t4675;
  double t5049;
  double t5052;
  double t5054;
  double t5128;
  double t5143;
  double t5149;
  double t5060;
  double t5168;
  double t5371;
  double t5373;
  double t5387;
  double t5226;
  double t5231;
  double t5244;
  double t5252;
  t546 = Sin(var1[3]);
  t3861 = Cos(var1[5]);
  t4128 = Sin(var1[4]);
  t3414 = Cos(var1[3]);
  t4175 = Sin(var1[5]);
  t1056 = Cos(var1[6]);
  t4043 = -1.*t3414*t3861;
  t4199 = -1.*t546*t4128*t4175;
  t4206 = t4043 + t4199;
  t4236 = -1.*t3861*t546*t4128;
  t4246 = t3414*t4175;
  t4278 = t4236 + t4246;
  t4312 = Sin(var1[6]);
  t433 = Cos(var1[4]);
  t1706 = -1.*t1056;
  t2368 = 1. + t1706;
  t2489 = 0.135*t2368;
  t3140 = 0. + t2489;
  t4329 = -0.135*t4312;
  t4335 = 0. + t4329;
  t4546 = -1.*t3861*t546;
  t4555 = t3414*t4128*t4175;
  t4564 = t4546 + t4555;
  t4599 = t3414*t3861*t4128;
  t4654 = t546*t4175;
  t4675 = t4599 + t4654;
  t5049 = t3861*t546;
  t5052 = -1.*t3414*t4128*t4175;
  t5054 = t5049 + t5052;
  t5128 = t3861*t546*t4128;
  t5143 = -1.*t3414*t4175;
  t5149 = t5128 + t5143;
  t5060 = t1056*t4675;
  t5168 = t1056*t5149;
  t5371 = t3414*t3861;
  t5373 = t546*t4128*t4175;
  t5387 = t5371 + t5373;
  t5226 = t433*t3861*t1056;
  t5231 = -1.*t433*t4175*t4312;
  t5244 = t5226 + t5231;
  t5252 = 0.135*t5244;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t3140*t4206 + 0.135*(t1056*t4206 + t4278*t4312) + t4278*t4335 + 0.049*t433*t546;
  p_output1(10)=-0.049*t3414*t433 + t3140*t4564 + t4335*t4675 + 0.135*(t1056*t4564 + t4312*t4675);
  p_output1(11)=0;
  p_output1(12)=0.049*t3414*t4128 + t3140*t3414*t4175*t433 + 0.135*(t1056*t3414*t4175*t433 + t3414*t3861*t4312*t433) + t3414*t3861*t433*t4335;
  p_output1(13)=0.049*t4128*t546 + t3140*t4175*t433*t546 + t3861*t433*t4335*t546 + 0.135*(t1056*t4175*t433*t546 + t3861*t4312*t433*t546);
  p_output1(14)=-1.*t3140*t4128*t4175 + 0.135*(-1.*t1056*t4128*t4175 - 1.*t3861*t4128*t4312) + 0.049*t433 - 1.*t3861*t4128*t4335;
  p_output1(15)=t3140*t4675 + t4335*t5054 + 0.135*(t4312*t5054 + t5060);
  p_output1(16)=t4206*t4335 + t3140*t5149 + 0.135*(t4206*t4312 + t5168);
  p_output1(17)=t3140*t3861*t433 - 1.*t4175*t433*t4335 + t5252;
  p_output1(18)=0.135*t4312*t4564 - 0.135*t1056*t4675 + 0.135*(-1.*t4312*t4564 + t5060);
  p_output1(19)=-0.135*t1056*t5149 + 0.135*t4312*t5387 + 0.135*(t5168 - 1.*t4312*t5387);
  p_output1(20)=-0.135*t1056*t3861*t433 + 0.135*t4175*t4312*t433 + t5252;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=0;
  p_output1(46)=0;
  p_output1(47)=0;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
  p_output1(54)=0;
  p_output1(55)=0;
  p_output1(56)=0;
  p_output1(57)=0;
  p_output1(58)=0;
  p_output1(59)=0;
}


       
Eigen::Matrix<double,3,20> Jp_hip_abduction_left(const Eigen::Matrix<double,20,1> &var1)
//void Jp_hip_abduction_left(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,20>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



