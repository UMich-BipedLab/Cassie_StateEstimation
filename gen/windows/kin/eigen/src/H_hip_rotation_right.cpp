/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:09:45 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_rotation_right.h"

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
  double t640;
  double t853;
  double t527;
  double t655;
  double t962;
  double t405;
  double t1107;
  double t3004;
  double t837;
  double t967;
  double t1004;
  double t1135;
  double t1148;
  double t1223;
  double t3706;
  double t3981;
  double t1774;
  double t1848;
  double t1983;
  double t2319;
  double t2509;
  double t2532;
  double t4058;
  double t4117;
  double t4132;
  double t4648;
  double t4721;
  double t4992;
  double t5476;
  double t5803;
  double t5860;
  double t6644;
  double t6654;
  double t3891;
  double t4168;
  double t4292;
  double t6667;
  double t6670;
  double t6675;
  double t6711;
  double t6728;
  double t6733;
  double t6749;
  double t6778;
  double t6781;
  double t6798;
  double t6799;
  double t6834;
  double t4417;
  double t5087;
  double t5105;
  double t5378;
  double t6017;
  double t6056;
  t640 = Cos(var1[5]);
  t853 = Sin(var1[3]);
  t527 = Cos(var1[3]);
  t655 = Sin(var1[4]);
  t962 = Sin(var1[5]);
  t405 = Cos(var1[13]);
  t1107 = Sin(var1[13]);
  t3004 = Cos(var1[4]);
  t837 = t527*t640*t655;
  t967 = t853*t962;
  t1004 = t837 + t967;
  t1135 = -1.*t640*t853;
  t1148 = t527*t655*t962;
  t1223 = t1135 + t1148;
  t3706 = Cos(var1[14]);
  t3981 = Sin(var1[14]);
  t1774 = t640*t853*t655;
  t1848 = -1.*t527*t962;
  t1983 = t1774 + t1848;
  t2319 = t527*t640;
  t2509 = t853*t655*t962;
  t2532 = t2319 + t2509;
  t4058 = t1107*t1004;
  t4117 = t405*t1223;
  t4132 = t4058 + t4117;
  t4648 = t1107*t1983;
  t4721 = t405*t2532;
  t4992 = t4648 + t4721;
  t5476 = t3004*t640*t1107;
  t5803 = t405*t3004*t962;
  t5860 = t5476 + t5803;
  t6644 = -1.*t3706;
  t6654 = 1. + t6644;
  t3891 = t3706*t527*t3004;
  t4168 = t3981*t4132;
  t4292 = t3891 + t4168;
  t6667 = -0.049*t6654;
  t6670 = -0.135*t3981;
  t6675 = 0. + t6667 + t6670;
  t6711 = 0.135*t1107;
  t6728 = 0. + t6711;
  t6733 = -1.*t405;
  t6749 = 1. + t6733;
  t6778 = -0.135*t6749;
  t6781 = 0. + t6778;
  t6798 = -0.135*t6654;
  t6799 = 0.049*t3981;
  t6834 = 0. + t6798 + t6799;
  t4417 = t3706*t3004*t853;
  t5087 = t3981*t4992;
  t5105 = t4417 + t5087;
  t5378 = -1.*t3706*t655;
  t6017 = t3981*t5860;
  t6056 = t5378 + t6017;

  p_output1(0)=t1107*t1223 - 1.*t1004*t405;
  p_output1(1)=t1107*t2532 - 1.*t1983*t405;
  p_output1(2)=-1.*t3004*t405*t640 + t1107*t3004*t962;
  p_output1(3)=0.;
  p_output1(4)=t4292;
  p_output1(5)=t5105;
  p_output1(6)=t6056;
  p_output1(7)=0.;
  p_output1(8)=-1.*t3706*t4132 + t3004*t3981*t527;
  p_output1(9)=-1.*t3706*t4992 + t3004*t3981*t853;
  p_output1(10)=-1.*t3706*t5860 - 1.*t3981*t655;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.09*(-1.*t1107*t1223 + t1004*t405) - 0.049*t4292 - 0.135*(t3706*t4132 - 1.*t3004*t3981*t527) + t3004*t527*t6675 + t1004*t6728 + t1223*t6781 + t4132*t6834 + var1(0);
  p_output1(13)=0. - 0.09*(-1.*t1107*t2532 + t1983*t405) - 0.049*t5105 + t1983*t6728 + t2532*t6781 + t4992*t6834 + t3004*t6675*t853 - 0.135*(t3706*t4992 - 1.*t3004*t3981*t853) + var1(1);
  p_output1(14)=0. - 0.049*t6056 - 0.135*(t3706*t5860 + t3981*t655) - 1.*t655*t6675 + t3004*t640*t6728 + t5860*t6834 + t3004*t6781*t962 - 0.09*(t3004*t405*t640 - 1.*t1107*t3004*t962) + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_hip_rotation_right(const Eigen::Matrix<double,20,1> &var1)
//void H_hip_rotation_right(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



