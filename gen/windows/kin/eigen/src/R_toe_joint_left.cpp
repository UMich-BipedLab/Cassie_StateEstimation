/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:09:37 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_toe_joint_left.h"

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
  double t1278;
  double t1993;
  double t2370;
  double t2161;
  double t2503;
  double t1768;
  double t3218;
  double t3228;
  double t3237;
  double t2344;
  double t2510;
  double t3193;
  double t3295;
  double t821;
  double t3635;
  double t3799;
  double t3818;
  double t1595;
  double t1671;
  double t1679;
  double t3202;
  double t3355;
  double t3377;
  double t3386;
  double t3400;
  double t3485;
  double t4066;
  double t4298;
  double t3510;
  double t4222;
  double t4233;
  double t613;
  double t4306;
  double t4309;
  double t4322;
  double t4379;
  double t4284;
  double t4342;
  double t4350;
  double t442;
  double t4420;
  double t4447;
  double t4499;
  double t4563;
  double t4375;
  double t4512;
  double t4516;
  double t137;
  double t4578;
  double t4580;
  double t4594;
  double t126;
  double t5012;
  double t5017;
  double t5027;
  double t4831;
  double t4884;
  double t4917;
  double t5110;
  double t5127;
  double t5135;
  double t4804;
  double t4933;
  double t5039;
  double t5062;
  double t5070;
  double t5074;
  double t5088;
  double t5137;
  double t5150;
  double t5170;
  double t5180;
  double t5210;
  double t5157;
  double t5216;
  double t5227;
  double t5261;
  double t5262;
  double t5264;
  double t4676;
  double t5242;
  double t5289;
  double t5300;
  double t5363;
  double t5383;
  double t5423;
  double t5546;
  double t5552;
  double t5559;
  double t5514;
  double t5518;
  double t5523;
  double t5527;
  double t5533;
  double t5536;
  double t5544;
  double t5569;
  double t5582;
  double t5595;
  double t5599;
  double t5607;
  double t5588;
  double t5622;
  double t5637;
  double t5652;
  double t5660;
  double t5676;
  double t5640;
  double t5708;
  double t5712;
  double t5724;
  double t5745;
  double t5749;
  double t4543;
  double t4641;
  double t4666;
  double t4709;
  double t4755;
  double t4761;
  double t5351;
  double t5429;
  double t5430;
  double t5461;
  double t5466;
  double t5474;
  double t5719;
  double t5751;
  double t5762;
  double t5770;
  double t5779;
  double t5787;
  t1278 = Cos(var1[3]);
  t1993 = Cos(var1[5]);
  t2370 = Sin(var1[4]);
  t2161 = Sin(var1[3]);
  t2503 = Sin(var1[5]);
  t1768 = Cos(var1[6]);
  t3218 = t1278*t1993*t2370;
  t3228 = t2161*t2503;
  t3237 = t3218 + t3228;
  t2344 = -1.*t1993*t2161;
  t2510 = t1278*t2370*t2503;
  t3193 = t2344 + t2510;
  t3295 = Sin(var1[6]);
  t821 = Cos(var1[8]);
  t3635 = t1768*t3237;
  t3799 = -1.*t3193*t3295;
  t3818 = t3635 + t3799;
  t1595 = Cos(var1[4]);
  t1671 = Cos(var1[7]);
  t1679 = t1278*t1595*t1671;
  t3202 = t1768*t3193;
  t3355 = t3237*t3295;
  t3377 = t3202 + t3355;
  t3386 = Sin(var1[7]);
  t3400 = t3377*t3386;
  t3485 = t1679 + t3400;
  t4066 = Sin(var1[8]);
  t4298 = Cos(var1[9]);
  t3510 = t821*t3485;
  t4222 = t3818*t4066;
  t4233 = t3510 + t4222;
  t613 = Sin(var1[9]);
  t4306 = t821*t3818;
  t4309 = -1.*t3485*t4066;
  t4322 = t4306 + t4309;
  t4379 = Cos(var1[10]);
  t4284 = -1.*t613*t4233;
  t4342 = t4298*t4322;
  t4350 = t4284 + t4342;
  t442 = Sin(var1[10]);
  t4420 = t4298*t4233;
  t4447 = t613*t4322;
  t4499 = t4420 + t4447;
  t4563 = Cos(var1[11]);
  t4375 = t442*t4350;
  t4512 = t4379*t4499;
  t4516 = t4375 + t4512;
  t137 = Sin(var1[11]);
  t4578 = t4379*t4350;
  t4580 = -1.*t442*t4499;
  t4594 = t4578 + t4580;
  t126 = Cos(var1[12]);
  t5012 = t1993*t2161*t2370;
  t5017 = -1.*t1278*t2503;
  t5027 = t5012 + t5017;
  t4831 = t1278*t1993;
  t4884 = t2161*t2370*t2503;
  t4917 = t4831 + t4884;
  t5110 = t1768*t5027;
  t5127 = -1.*t4917*t3295;
  t5135 = t5110 + t5127;
  t4804 = t1595*t1671*t2161;
  t4933 = t1768*t4917;
  t5039 = t5027*t3295;
  t5062 = t4933 + t5039;
  t5070 = t5062*t3386;
  t5074 = t4804 + t5070;
  t5088 = t821*t5074;
  t5137 = t5135*t4066;
  t5150 = t5088 + t5137;
  t5170 = t821*t5135;
  t5180 = -1.*t5074*t4066;
  t5210 = t5170 + t5180;
  t5157 = -1.*t613*t5150;
  t5216 = t4298*t5210;
  t5227 = t5157 + t5216;
  t5261 = t4298*t5150;
  t5262 = t613*t5210;
  t5264 = t5261 + t5262;
  t4676 = Sin(var1[12]);
  t5242 = t442*t5227;
  t5289 = t4379*t5264;
  t5300 = t5242 + t5289;
  t5363 = t4379*t5227;
  t5383 = -1.*t442*t5264;
  t5423 = t5363 + t5383;
  t5546 = t1595*t1993*t1768;
  t5552 = -1.*t1595*t2503*t3295;
  t5559 = t5546 + t5552;
  t5514 = -1.*t1671*t2370;
  t5518 = t1595*t1768*t2503;
  t5523 = t1595*t1993*t3295;
  t5527 = t5518 + t5523;
  t5533 = t5527*t3386;
  t5536 = t5514 + t5533;
  t5544 = t821*t5536;
  t5569 = t5559*t4066;
  t5582 = t5544 + t5569;
  t5595 = t821*t5559;
  t5599 = -1.*t5536*t4066;
  t5607 = t5595 + t5599;
  t5588 = -1.*t613*t5582;
  t5622 = t4298*t5607;
  t5637 = t5588 + t5622;
  t5652 = t4298*t5582;
  t5660 = t613*t5607;
  t5676 = t5652 + t5660;
  t5640 = t442*t5637;
  t5708 = t4379*t5676;
  t5712 = t5640 + t5708;
  t5724 = t4379*t5637;
  t5745 = -1.*t442*t5676;
  t5749 = t5724 + t5745;
  t4543 = -1.*t137*t4516;
  t4641 = t4563*t4594;
  t4666 = t4543 + t4641;
  t4709 = t4563*t4516;
  t4755 = t137*t4594;
  t4761 = t4709 + t4755;
  t5351 = -1.*t137*t5300;
  t5429 = t4563*t5423;
  t5430 = t5351 + t5429;
  t5461 = t4563*t5300;
  t5466 = t137*t5423;
  t5474 = t5461 + t5466;
  t5719 = -1.*t137*t5712;
  t5751 = t4563*t5749;
  t5762 = t5719 + t5751;
  t5770 = t4563*t5712;
  t5779 = t137*t5749;
  t5787 = t5770 + t5779;

  p_output1(0)=-1.*t126*t4666 + t4676*t4761;
  p_output1(1)=-1.*t126*t5430 + t4676*t5474;
  p_output1(2)=-1.*t126*t5762 + t4676*t5787;
  p_output1(3)=t4666*t4676 + t126*t4761;
  p_output1(4)=t4676*t5430 + t126*t5474;
  p_output1(5)=t4676*t5762 + t126*t5787;
  p_output1(6)=-1.*t1671*t3377 + t1278*t1595*t3386;
  p_output1(7)=t1595*t2161*t3386 - 1.*t1671*t5062;
  p_output1(8)=-1.*t2370*t3386 - 1.*t1671*t5527;
}


       
Eigen::Matrix<double,3,3> R_toe_joint_left(const Eigen::Matrix<double,20,1> &var1)
//void R_toe_joint_left(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



