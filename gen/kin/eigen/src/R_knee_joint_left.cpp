/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:15 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_joint_left.h"

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
  double t1533;
  double t2845;
  double t3085;
  double t2850;
  double t3464;
  double t2711;
  double t4268;
  double t4339;
  double t4357;
  double t2977;
  double t3580;
  double t3598;
  double t4366;
  double t1427;
  double t4587;
  double t4588;
  double t4647;
  double t2665;
  double t2686;
  double t2698;
  double t4099;
  double t4379;
  double t4406;
  double t4412;
  double t4430;
  double t4497;
  double t4654;
  double t1305;
  double t5118;
  double t5130;
  double t5143;
  double t4980;
  double t4987;
  double t5004;
  double t4726;
  double t5325;
  double t5427;
  double t5436;
  double t4866;
  double t5040;
  double t5187;
  double t5189;
  double t5205;
  double t5250;
  double t5641;
  double t5660;
  double t5672;
  double t5519;
  double t5544;
  double t5546;
  double t5576;
  double t5584;
  double t5608;
  double t4543;
  double t4659;
  double t4684;
  double t4734;
  double t4738;
  double t4782;
  double t5282;
  double t5440;
  double t5457;
  double t5468;
  double t5474;
  double t5482;
  double t5612;
  double t5727;
  double t5742;
  double t5786;
  double t5888;
  double t5934;
  t1533 = Cos(var1[3]);
  t2845 = Cos(var1[5]);
  t3085 = Sin(var1[4]);
  t2850 = Sin(var1[3]);
  t3464 = Sin(var1[5]);
  t2711 = Cos(var1[6]);
  t4268 = t1533*t2845*t3085;
  t4339 = t2850*t3464;
  t4357 = t4268 + t4339;
  t2977 = -1.*t2845*t2850;
  t3580 = t1533*t3085*t3464;
  t3598 = t2977 + t3580;
  t4366 = Sin(var1[6]);
  t1427 = Cos(var1[8]);
  t4587 = t2711*t4357;
  t4588 = -1.*t3598*t4366;
  t4647 = t4587 + t4588;
  t2665 = Cos(var1[4]);
  t2686 = Cos(var1[7]);
  t2698 = t1533*t2665*t2686;
  t4099 = t2711*t3598;
  t4379 = t4357*t4366;
  t4406 = t4099 + t4379;
  t4412 = Sin(var1[7]);
  t4430 = t4406*t4412;
  t4497 = t2698 + t4430;
  t4654 = Sin(var1[8]);
  t1305 = Sin(var1[9]);
  t5118 = t2845*t2850*t3085;
  t5130 = -1.*t1533*t3464;
  t5143 = t5118 + t5130;
  t4980 = t1533*t2845;
  t4987 = t2850*t3085*t3464;
  t5004 = t4980 + t4987;
  t4726 = Cos(var1[9]);
  t5325 = t2711*t5143;
  t5427 = -1.*t5004*t4366;
  t5436 = t5325 + t5427;
  t4866 = t2665*t2686*t2850;
  t5040 = t2711*t5004;
  t5187 = t5143*t4366;
  t5189 = t5040 + t5187;
  t5205 = t5189*t4412;
  t5250 = t4866 + t5205;
  t5641 = t2665*t2845*t2711;
  t5660 = -1.*t2665*t3464*t4366;
  t5672 = t5641 + t5660;
  t5519 = -1.*t2686*t3085;
  t5544 = t2665*t2711*t3464;
  t5546 = t2665*t2845*t4366;
  t5576 = t5544 + t5546;
  t5584 = t5576*t4412;
  t5608 = t5519 + t5584;
  t4543 = t1427*t4497;
  t4659 = t4647*t4654;
  t4684 = t4543 + t4659;
  t4734 = t1427*t4647;
  t4738 = -1.*t4497*t4654;
  t4782 = t4734 + t4738;
  t5282 = t1427*t5250;
  t5440 = t5436*t4654;
  t5457 = t5282 + t5440;
  t5468 = t1427*t5436;
  t5474 = -1.*t5250*t4654;
  t5482 = t5468 + t5474;
  t5612 = t1427*t5608;
  t5727 = t5672*t4654;
  t5742 = t5612 + t5727;
  t5786 = t1427*t5672;
  t5888 = -1.*t5608*t4654;
  t5934 = t5786 + t5888;

  p_output1(0)=t1305*t4684 - 1.*t4726*t4782;
  p_output1(1)=t1305*t5457 - 1.*t4726*t5482;
  p_output1(2)=t1305*t5742 - 1.*t4726*t5934;
  p_output1(3)=t4684*t4726 + t1305*t4782;
  p_output1(4)=t4726*t5457 + t1305*t5482;
  p_output1(5)=t4726*t5742 + t1305*t5934;
  p_output1(6)=-1.*t2686*t4406 + t1533*t2665*t4412;
  p_output1(7)=t2665*t2850*t4412 - 1.*t2686*t5189;
  p_output1(8)=-1.*t3085*t4412 - 1.*t2686*t5576;
}


       
Eigen::Matrix<double,3,3> R_knee_joint_left(const Eigen::Matrix<double,20,1> &var1)
//void R_knee_joint_left(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



