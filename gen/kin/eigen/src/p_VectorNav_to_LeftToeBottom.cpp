/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:02:41 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_VectorNav_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t31;
  double t792;
  double t989;
  double t1138;
  double t1253;
  double t1394;
  double t2254;
  double t2750;
  double t2788;
  double t2822;
  double t2869;
  double t3141;
  double t3156;
  double t3193;
  double t3333;
  double t3383;
  double t3386;
  double t3563;
  double t3614;
  double t3638;
  double t3670;
  double t3737;
  double t3742;
  double t3747;
  double t3810;
  double t3817;
  double t3834;
  double t3926;
  double t3935;
  double t3982;
  double t4004;
  double t4034;
  double t4060;
  double t4065;
  double t4128;
  double t4138;
  double t4142;
  double t4222;
  double t383;
  double t451;
  double t1801;
  double t1885;
  double t2052;
  double t2128;
  double t2307;
  double t2399;
  double t1353;
  double t1453;
  double t1599;
  double t4331;
  double t2534;
  double t2602;
  double t2690;
  double t2836;
  double t2979;
  double t3041;
  double t4377;
  double t4387;
  double t4389;
  double t4401;
  double t4407;
  double t4423;
  double t3232;
  double t3259;
  double t3280;
  double t3643;
  double t3679;
  double t3701;
  double t4451;
  double t4453;
  double t4454;
  double t4466;
  double t4488;
  double t4494;
  double t3756;
  double t3793;
  double t3801;
  double t4002;
  double t4028;
  double t4033;
  double t4500;
  double t4502;
  double t4508;
  double t4532;
  double t4535;
  double t4543;
  double t4077;
  double t4091;
  double t4117;
  double t4551;
  double t4556;
  double t4558;
  double t4562;
  double t4573;
  double t4575;
  double t4270;
  double t4293;
  double t4305;
  double t4358;
  double t4361;
  double t4373;
  double t4721;
  double t4729;
  double t4732;
  double t4744;
  double t4761;
  double t4764;
  double t4779;
  double t4780;
  double t4789;
  double t4804;
  double t4805;
  double t4812;
  double t4836;
  double t4850;
  double t4854;
  double t4874;
  double t4878;
  double t4880;
  double t4891;
  double t4893;
  double t4901;
  double t4917;
  double t4919;
  double t4929;
  t31 = Cos(var1[1]);
  t792 = Cos(var1[2]);
  t989 = Cos(var1[3]);
  t1138 = -1.*t989;
  t1253 = 1. + t1138;
  t1394 = Sin(var1[3]);
  t2254 = Sin(var1[2]);
  t2750 = Cos(var1[4]);
  t2788 = -1.*t2750;
  t2822 = 1. + t2788;
  t2869 = Sin(var1[4]);
  t3141 = -1.*t31*t792*t1394;
  t3156 = -1.*t989*t31*t2254;
  t3193 = t3141 + t3156;
  t3333 = t989*t31*t792;
  t3383 = -1.*t31*t1394*t2254;
  t3386 = t3333 + t3383;
  t3563 = Cos(var1[5]);
  t3614 = -1.*t3563;
  t3638 = 1. + t3614;
  t3670 = Sin(var1[5]);
  t3737 = t2869*t3193;
  t3742 = t2750*t3386;
  t3747 = t3737 + t3742;
  t3810 = t2750*t3193;
  t3817 = -1.*t2869*t3386;
  t3834 = t3810 + t3817;
  t3926 = Cos(var1[6]);
  t3935 = -1.*t3926;
  t3982 = 1. + t3935;
  t4004 = Sin(var1[6]);
  t4034 = -1.*t3670*t3747;
  t4060 = t3563*t3834;
  t4065 = t4034 + t4060;
  t4128 = t3563*t3747;
  t4138 = t3670*t3834;
  t4142 = t4128 + t4138;
  t4222 = Cos(var1[0]);
  t383 = -1.*t31;
  t451 = 1. + t383;
  t1801 = Sin(var1[1]);
  t1885 = -1.*t792;
  t2052 = 1. + t1885;
  t2128 = -0.049*t2052;
  t2307 = -0.09*t2254;
  t2399 = 0. + t2128 + t2307;
  t1353 = -0.049*t1253;
  t1453 = -0.21*t1394;
  t1599 = 0. + t1353 + t1453;
  t4331 = Sin(var1[0]);
  t2534 = -0.21*t1253;
  t2602 = 0.049*t1394;
  t2690 = 0. + t2534 + t2602;
  t2836 = -0.2707*t2822;
  t2979 = 0.0016*t2869;
  t3041 = 0. + t2836 + t2979;
  t4377 = t4222*t792*t1801;
  t4387 = -1.*t4331*t2254;
  t4389 = t4377 + t4387;
  t4401 = -1.*t792*t4331;
  t4407 = -1.*t4222*t1801*t2254;
  t4423 = t4401 + t4407;
  t3232 = -0.0016*t2822;
  t3259 = -0.2707*t2869;
  t3280 = 0. + t3232 + t3259;
  t3643 = 0.0184*t3638;
  t3679 = -0.7055*t3670;
  t3701 = 0. + t3643 + t3679;
  t4451 = -1.*t1394*t4389;
  t4453 = t989*t4423;
  t4454 = t4451 + t4453;
  t4466 = t989*t4389;
  t4488 = t1394*t4423;
  t4494 = t4466 + t4488;
  t3756 = -0.7055*t3638;
  t3793 = -0.0184*t3670;
  t3801 = 0. + t3756 + t3793;
  t4002 = -1.1135*t3982;
  t4028 = 0.0216*t4004;
  t4033 = 0. + t4002 + t4028;
  t4500 = t2869*t4454;
  t4502 = t2750*t4494;
  t4508 = t4500 + t4502;
  t4532 = t2750*t4454;
  t4535 = -1.*t2869*t4494;
  t4543 = t4532 + t4535;
  t4077 = -0.0216*t3982;
  t4091 = -1.1135*t4004;
  t4117 = 0. + t4077 + t4091;
  t4551 = -1.*t3670*t4508;
  t4556 = t3563*t4543;
  t4558 = t4551 + t4556;
  t4562 = t3563*t4508;
  t4573 = t3670*t4543;
  t4575 = t4562 + t4573;
  t4270 = 0.135*t451;
  t4293 = 0.049*t1801;
  t4305 = 0. + t4270 + t4293;
  t4358 = -0.09*t2052;
  t4361 = 0.049*t2254;
  t4373 = 0. + t4358 + t4361;
  t4721 = t792*t4331*t1801;
  t4729 = t4222*t2254;
  t4732 = t4721 + t4729;
  t4744 = t4222*t792;
  t4761 = -1.*t4331*t1801*t2254;
  t4764 = t4744 + t4761;
  t4779 = -1.*t1394*t4732;
  t4780 = t989*t4764;
  t4789 = t4779 + t4780;
  t4804 = t989*t4732;
  t4805 = t1394*t4764;
  t4812 = t4804 + t4805;
  t4836 = t2869*t4789;
  t4850 = t2750*t4812;
  t4854 = t4836 + t4850;
  t4874 = t2750*t4789;
  t4878 = -1.*t2869*t4812;
  t4880 = t4874 + t4878;
  t4891 = -1.*t3670*t4854;
  t4893 = t3563*t4880;
  t4901 = t4891 + t4893;
  t4917 = t3563*t4854;
  t4919 = t3670*t4880;
  t4929 = t4917 + t4919;

  p_output1(0)=-0.03155 + 0.004500000000000004*t1801 + t2399*t31 - 1.*t2254*t2690*t31 + t3041*t3193 + t3280*t3386 + t3701*t3747 + t3801*t3834 + t4033*t4065 + t4117*t4142 + 0.0306*(t4004*t4065 + t3926*t4142) - 1.1312*(t3926*t4065 - 1.*t4004*t4142) - 0.049*t451 + t1599*t31*t792;
  p_output1(1)=0. + 0.135*(1. - 1.*t4222) + t1801*t2399*t4222 + 0.1305*t31*t4222 + t4222*t4305 - 1.*t4331*t4373 + t1599*t4389 + t2690*t4423 + t3041*t4454 + t3280*t4494 + t3701*t4508 + t3801*t4543 + t4033*t4558 + t4117*t4575 + 0.0306*(t4004*t4558 + t3926*t4575) - 1.1312*(t3926*t4558 - 1.*t4004*t4575);
  p_output1(2)=0.07996 - 0.135*t4331 + t1801*t2399*t4331 + 0.1305*t31*t4331 + t4305*t4331 + t4222*t4373 + t1599*t4732 + t2690*t4764 + t3041*t4789 + t3280*t4812 + t3701*t4854 + t3801*t4880 + t4033*t4901 + t4117*t4929 + 0.0306*(t4004*t4901 + t3926*t4929) - 1.1312*(t3926*t4901 - 1.*t4004*t4929);
}


       
Eigen::Matrix<double,3,1> p_VectorNav_to_LeftToeBottom(const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



