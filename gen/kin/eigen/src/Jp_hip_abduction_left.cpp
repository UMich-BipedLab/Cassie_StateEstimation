/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:11 GMT-05:00
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
  double t1173;
  double t3535;
  double t3787;
  double t3288;
  double t3813;
  double t1253;
  double t3754;
  double t3822;
  double t3842;
  double t3852;
  double t3864;
  double t3903;
  double t3904;
  double t1102;
  double t1351;
  double t1431;
  double t2496;
  double t2682;
  double t3910;
  double t3928;
  double t4006;
  double t4009;
  double t4019;
  double t4034;
  double t4036;
  double t4037;
  double t4305;
  double t4324;
  double t4338;
  double t4375;
  double t4393;
  double t4396;
  double t4344;
  double t4408;
  double t4494;
  double t4500;
  double t4501;
  double t4442;
  double t4449;
  double t4451;
  double t4459;
  t1173 = Sin(var1[3]);
  t3535 = Cos(var1[5]);
  t3787 = Sin(var1[4]);
  t3288 = Cos(var1[3]);
  t3813 = Sin(var1[5]);
  t1253 = Cos(var1[6]);
  t3754 = -1.*t3288*t3535;
  t3822 = -1.*t1173*t3787*t3813;
  t3842 = t3754 + t3822;
  t3852 = -1.*t3535*t1173*t3787;
  t3864 = t3288*t3813;
  t3903 = t3852 + t3864;
  t3904 = Sin(var1[6]);
  t1102 = Cos(var1[4]);
  t1351 = -1.*t1253;
  t1431 = 1. + t1351;
  t2496 = 0.135*t1431;
  t2682 = 0. + t2496;
  t3910 = -0.135*t3904;
  t3928 = 0. + t3910;
  t4006 = -1.*t3535*t1173;
  t4009 = t3288*t3787*t3813;
  t4019 = t4006 + t4009;
  t4034 = t3288*t3535*t3787;
  t4036 = t1173*t3813;
  t4037 = t4034 + t4036;
  t4305 = t3535*t1173;
  t4324 = -1.*t3288*t3787*t3813;
  t4338 = t4305 + t4324;
  t4375 = t3535*t1173*t3787;
  t4393 = -1.*t3288*t3813;
  t4396 = t4375 + t4393;
  t4344 = t1253*t4037;
  t4408 = t1253*t4396;
  t4494 = t3288*t3535;
  t4500 = t1173*t3787*t3813;
  t4501 = t4494 + t4500;
  t4442 = t1102*t3535*t1253;
  t4449 = -1.*t1102*t3813*t3904;
  t4451 = t4442 + t4449;
  t4459 = 0.135*t4451;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=0.049*t1102*t1173 + t2682*t3842 + 0.135*(t1253*t3842 + t3903*t3904) + t3903*t3928;
  p_output1(10)=-0.049*t1102*t3288 + t2682*t4019 + t3928*t4037 + 0.135*(t1253*t4019 + t3904*t4037);
  p_output1(11)=0;
  p_output1(12)=0.049*t3288*t3787 + t1102*t2682*t3288*t3813 + 0.135*(t1102*t1253*t3288*t3813 + t1102*t3288*t3535*t3904) + t1102*t3288*t3535*t3928;
  p_output1(13)=0.049*t1173*t3787 + t1102*t1173*t2682*t3813 + 0.135*(t1102*t1173*t1253*t3813 + t1102*t1173*t3535*t3904) + t1102*t1173*t3535*t3928;
  p_output1(14)=0.049*t1102 - 1.*t2682*t3787*t3813 + 0.135*(-1.*t1253*t3787*t3813 - 1.*t3535*t3787*t3904) - 1.*t3535*t3787*t3928;
  p_output1(15)=t2682*t4037 + t3928*t4338 + 0.135*(t3904*t4338 + t4344);
  p_output1(16)=t3842*t3928 + t2682*t4396 + 0.135*(t3842*t3904 + t4408);
  p_output1(17)=t1102*t2682*t3535 - 1.*t1102*t3813*t3928 + t4459;
  p_output1(18)=0.135*t3904*t4019 - 0.135*t1253*t4037 + 0.135*(-1.*t3904*t4019 + t4344);
  p_output1(19)=-0.135*t1253*t4396 + 0.135*t3904*t4501 + 0.135*(t4408 - 1.*t3904*t4501);
  p_output1(20)=-0.135*t1102*t1253*t3535 + 0.135*t1102*t3813*t3904 + t4459;
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



