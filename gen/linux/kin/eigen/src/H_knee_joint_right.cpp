/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:30 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_joint_right.h"

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
  double t548;
  double t914;
  double t479;
  double t850;
  double t1024;
  double t1429;
  double t886;
  double t1095;
  double t1105;
  double t359;
  double t1470;
  double t1483;
  double t1541;
  double t1653;
  double t1329;
  double t1543;
  double t1598;
  double t177;
  double t1686;
  double t1792;
  double t1888;
  double t1959;
  double t1965;
  double t2017;
  double t2024;
  double t2082;
  double t2125;
  double t150;
  double t2409;
  double t2443;
  double t2481;
  double t2652;
  double t2683;
  double t2813;
  double t2228;
  double t2513;
  double t2868;
  double t2917;
  double t2944;
  double t2970;
  double t3009;
  double t3018;
  double t3034;
  double t3061;
  double t3447;
  double t3458;
  double t3465;
  double t3482;
  double t3530;
  double t3609;
  double t3655;
  double t3675;
  double t3688;
  double t1632;
  double t2145;
  double t2160;
  double t2359;
  double t2371;
  double t2377;
  double t2929;
  double t3107;
  double t3162;
  double t3381;
  double t3394;
  double t3398;
  double t3471;
  double t3694;
  double t3708;
  double t3727;
  double t3729;
  double t3737;
  double t4163;
  double t4174;
  double t4548;
  double t4594;
  double t4745;
  double t4748;
  double t3772;
  double t3780;
  double t3784;
  double t4201;
  double t4221;
  double t4234;
  double t4249;
  double t4263;
  double t4319;
  double t4324;
  double t4326;
  double t4473;
  double t4519;
  double t4537;
  double t4538;
  double t4601;
  double t4623;
  double t4635;
  double t4722;
  double t4728;
  double t4737;
  double t4751;
  double t4792;
  double t4794;
  double t4809;
  double t4814;
  double t4826;
  double t3809;
  double t3811;
  double t3817;
  double t3875;
  double t3883;
  double t3921;
  t548 = Cos(var1[5]);
  t914 = Sin(var1[3]);
  t479 = Cos(var1[3]);
  t850 = Sin(var1[4]);
  t1024 = Sin(var1[5]);
  t1429 = Sin(var1[13]);
  t886 = t479*t548*t850;
  t1095 = t914*t1024;
  t1105 = t886 + t1095;
  t359 = Cos(var1[13]);
  t1470 = -1.*t548*t914;
  t1483 = t479*t850*t1024;
  t1541 = t1470 + t1483;
  t1653 = Cos(var1[15]);
  t1329 = t359*t1105;
  t1543 = -1.*t1429*t1541;
  t1598 = t1329 + t1543;
  t177 = Sin(var1[15]);
  t1686 = Cos(var1[14]);
  t1792 = Cos(var1[4]);
  t1888 = t1686*t479*t1792;
  t1959 = Sin(var1[14]);
  t1965 = t1429*t1105;
  t2017 = t359*t1541;
  t2024 = t1965 + t2017;
  t2082 = t1959*t2024;
  t2125 = t1888 + t2082;
  t150 = Sin(var1[16]);
  t2409 = t548*t914*t850;
  t2443 = -1.*t479*t1024;
  t2481 = t2409 + t2443;
  t2652 = t479*t548;
  t2683 = t914*t850*t1024;
  t2813 = t2652 + t2683;
  t2228 = Cos(var1[16]);
  t2513 = t359*t2481;
  t2868 = -1.*t1429*t2813;
  t2917 = t2513 + t2868;
  t2944 = t1686*t1792*t914;
  t2970 = t1429*t2481;
  t3009 = t359*t2813;
  t3018 = t2970 + t3009;
  t3034 = t1959*t3018;
  t3061 = t2944 + t3034;
  t3447 = t359*t1792*t548;
  t3458 = -1.*t1792*t1429*t1024;
  t3465 = t3447 + t3458;
  t3482 = -1.*t1686*t850;
  t3530 = t1792*t548*t1429;
  t3609 = t359*t1792*t1024;
  t3655 = t3530 + t3609;
  t3675 = t1959*t3655;
  t3688 = t3482 + t3675;
  t1632 = t177*t1598;
  t2145 = t1653*t2125;
  t2160 = t1632 + t2145;
  t2359 = t1653*t1598;
  t2371 = -1.*t177*t2125;
  t2377 = t2359 + t2371;
  t2929 = t177*t2917;
  t3107 = t1653*t3061;
  t3162 = t2929 + t3107;
  t3381 = t1653*t2917;
  t3394 = -1.*t177*t3061;
  t3398 = t3381 + t3394;
  t3471 = t177*t3465;
  t3694 = t1653*t3688;
  t3708 = t3471 + t3694;
  t3727 = t1653*t3465;
  t3729 = -1.*t177*t3688;
  t3737 = t3727 + t3729;
  t4163 = -1.*t1686;
  t4174 = 1. + t4163;
  t4548 = -1.*t1653;
  t4594 = 1. + t4548;
  t4745 = -1.*t2228;
  t4748 = 1. + t4745;
  t3772 = t2228*t2160;
  t3780 = t150*t2377;
  t3784 = t3772 + t3780;
  t4201 = -0.049*t4174;
  t4221 = -0.135*t1959;
  t4234 = 0. + t4201 + t4221;
  t4249 = 0.135*t1429;
  t4263 = 0. + t4249;
  t4319 = -1.*t359;
  t4324 = 1. + t4319;
  t4326 = -0.135*t4324;
  t4473 = 0. + t4326;
  t4519 = -0.135*t4174;
  t4537 = 0.049*t1959;
  t4538 = 0. + t4519 + t4537;
  t4601 = -0.09*t4594;
  t4623 = 0.049*t177;
  t4635 = 0. + t4601 + t4623;
  t4722 = -0.049*t4594;
  t4728 = -0.09*t177;
  t4737 = 0. + t4722 + t4728;
  t4751 = -0.049*t4748;
  t4792 = -0.21*t150;
  t4794 = 0. + t4751 + t4792;
  t4809 = -0.21*t4748;
  t4814 = 0.049*t150;
  t4826 = 0. + t4809 + t4814;
  t3809 = t2228*t3162;
  t3811 = t150*t3398;
  t3817 = t3809 + t3811;
  t3875 = t2228*t3708;
  t3883 = t150*t3737;
  t3921 = t3875 + t3883;

  p_output1(0)=t150*t2160 - 1.*t2228*t2377;
  p_output1(1)=t150*t3162 - 1.*t2228*t3398;
  p_output1(2)=t150*t3708 - 1.*t2228*t3737;
  p_output1(3)=0.;
  p_output1(4)=t3784;
  p_output1(5)=t3817;
  p_output1(6)=t3921;
  p_output1(7)=0.;
  p_output1(8)=-1.*t1686*t2024 + t1792*t1959*t479;
  p_output1(9)=-1.*t1686*t3018 + t1792*t1959*t914;
  p_output1(10)=-1.*t1686*t3655 - 1.*t1959*t850;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.21*(-1.*t150*t2160 + t2228*t2377) - 0.049*t3784 + t1105*t4263 + t1541*t4473 + t2024*t4538 + t1598*t4635 + t2125*t4737 + t1792*t4234*t479 - 0.1305*(t1686*t2024 - 1.*t1792*t1959*t479) + t2160*t4794 + t2377*t4826 + var1(0);
  p_output1(13)=0. - 0.21*(-1.*t150*t3162 + t2228*t3398) - 0.049*t3817 + t2481*t4263 + t2813*t4473 + t3018*t4538 + t2917*t4635 + t3061*t4737 + t3162*t4794 + t3398*t4826 + t1792*t4234*t914 - 0.1305*(t1686*t3018 - 1.*t1792*t1959*t914) + var1(1);
  p_output1(14)=0. - 0.21*(-1.*t150*t3708 + t2228*t3737) - 0.049*t3921 + t1024*t1792*t4473 + t3655*t4538 + t3465*t4635 + t3688*t4737 + t3708*t4794 + t3737*t4826 + t1792*t4263*t548 - 1.*t4234*t850 - 0.1305*(t1686*t3655 + t1959*t850) + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_knee_joint_right(const Eigen::Matrix<double,20,1> &var1)
//void H_knee_joint_right(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



