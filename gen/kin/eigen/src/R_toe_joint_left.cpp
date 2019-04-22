/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:22 GMT-05:00
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
  double t759;
  double t1847;
  double t2572;
  double t1902;
  double t2659;
  double t1633;
  double t2963;
  double t3278;
  double t3626;
  double t2328;
  double t2676;
  double t2784;
  double t3748;
  double t724;
  double t4417;
  double t4425;
  double t4427;
  double t835;
  double t1162;
  double t1607;
  double t2959;
  double t3801;
  double t3834;
  double t3961;
  double t4301;
  double t4371;
  double t4433;
  double t4472;
  double t4398;
  double t4443;
  double t4453;
  double t573;
  double t4503;
  double t4513;
  double t4551;
  double t4586;
  double t4454;
  double t4556;
  double t4561;
  double t527;
  double t4606;
  double t4613;
  double t4626;
  double t4785;
  double t4575;
  double t4664;
  double t4681;
  double t356;
  double t4789;
  double t4802;
  double t4806;
  double t157;
  double t5148;
  double t5168;
  double t5175;
  double t5054;
  double t5059;
  double t5066;
  double t5309;
  double t5335;
  double t5346;
  double t5044;
  double t5138;
  double t5209;
  double t5262;
  double t5277;
  double t5285;
  double t5308;
  double t5362;
  double t5377;
  double t5393;
  double t5397;
  double t5408;
  double t5385;
  double t5456;
  double t5459;
  double t5514;
  double t5538;
  double t5547;
  double t4904;
  double t5463;
  double t5549;
  double t5565;
  double t5602;
  double t5609;
  double t5611;
  double t5707;
  double t5737;
  double t5738;
  double t5643;
  double t5646;
  double t5652;
  double t5653;
  double t5655;
  double t5661;
  double t5667;
  double t5777;
  double t5784;
  double t5797;
  double t5799;
  double t5801;
  double t5792;
  double t5819;
  double t5841;
  double t5865;
  double t5869;
  double t5875;
  double t5849;
  double t5882;
  double t5889;
  double t5901;
  double t5908;
  double t5910;
  double t4746;
  double t4853;
  double t4875;
  double t4949;
  double t4995;
  double t4997;
  double t5597;
  double t5614;
  double t5621;
  double t5626;
  double t5630;
  double t5631;
  double t5898;
  double t5920;
  double t5926;
  double t5947;
  double t5948;
  double t5961;
  t759 = Cos(var1[3]);
  t1847 = Cos(var1[5]);
  t2572 = Sin(var1[4]);
  t1902 = Sin(var1[3]);
  t2659 = Sin(var1[5]);
  t1633 = Cos(var1[6]);
  t2963 = t759*t1847*t2572;
  t3278 = t1902*t2659;
  t3626 = t2963 + t3278;
  t2328 = -1.*t1847*t1902;
  t2676 = t759*t2572*t2659;
  t2784 = t2328 + t2676;
  t3748 = Sin(var1[6]);
  t724 = Cos(var1[8]);
  t4417 = t1633*t3626;
  t4425 = -1.*t2784*t3748;
  t4427 = t4417 + t4425;
  t835 = Cos(var1[4]);
  t1162 = Cos(var1[7]);
  t1607 = t759*t835*t1162;
  t2959 = t1633*t2784;
  t3801 = t3626*t3748;
  t3834 = t2959 + t3801;
  t3961 = Sin(var1[7]);
  t4301 = t3834*t3961;
  t4371 = t1607 + t4301;
  t4433 = Sin(var1[8]);
  t4472 = Cos(var1[9]);
  t4398 = t724*t4371;
  t4443 = t4427*t4433;
  t4453 = t4398 + t4443;
  t573 = Sin(var1[9]);
  t4503 = t724*t4427;
  t4513 = -1.*t4371*t4433;
  t4551 = t4503 + t4513;
  t4586 = Cos(var1[10]);
  t4454 = -1.*t573*t4453;
  t4556 = t4472*t4551;
  t4561 = t4454 + t4556;
  t527 = Sin(var1[10]);
  t4606 = t4472*t4453;
  t4613 = t573*t4551;
  t4626 = t4606 + t4613;
  t4785 = Cos(var1[11]);
  t4575 = t527*t4561;
  t4664 = t4586*t4626;
  t4681 = t4575 + t4664;
  t356 = Sin(var1[11]);
  t4789 = t4586*t4561;
  t4802 = -1.*t527*t4626;
  t4806 = t4789 + t4802;
  t157 = Cos(var1[12]);
  t5148 = t1847*t1902*t2572;
  t5168 = -1.*t759*t2659;
  t5175 = t5148 + t5168;
  t5054 = t759*t1847;
  t5059 = t1902*t2572*t2659;
  t5066 = t5054 + t5059;
  t5309 = t1633*t5175;
  t5335 = -1.*t5066*t3748;
  t5346 = t5309 + t5335;
  t5044 = t835*t1162*t1902;
  t5138 = t1633*t5066;
  t5209 = t5175*t3748;
  t5262 = t5138 + t5209;
  t5277 = t5262*t3961;
  t5285 = t5044 + t5277;
  t5308 = t724*t5285;
  t5362 = t5346*t4433;
  t5377 = t5308 + t5362;
  t5393 = t724*t5346;
  t5397 = -1.*t5285*t4433;
  t5408 = t5393 + t5397;
  t5385 = -1.*t573*t5377;
  t5456 = t4472*t5408;
  t5459 = t5385 + t5456;
  t5514 = t4472*t5377;
  t5538 = t573*t5408;
  t5547 = t5514 + t5538;
  t4904 = Sin(var1[12]);
  t5463 = t527*t5459;
  t5549 = t4586*t5547;
  t5565 = t5463 + t5549;
  t5602 = t4586*t5459;
  t5609 = -1.*t527*t5547;
  t5611 = t5602 + t5609;
  t5707 = t835*t1847*t1633;
  t5737 = -1.*t835*t2659*t3748;
  t5738 = t5707 + t5737;
  t5643 = -1.*t1162*t2572;
  t5646 = t835*t1633*t2659;
  t5652 = t835*t1847*t3748;
  t5653 = t5646 + t5652;
  t5655 = t5653*t3961;
  t5661 = t5643 + t5655;
  t5667 = t724*t5661;
  t5777 = t5738*t4433;
  t5784 = t5667 + t5777;
  t5797 = t724*t5738;
  t5799 = -1.*t5661*t4433;
  t5801 = t5797 + t5799;
  t5792 = -1.*t573*t5784;
  t5819 = t4472*t5801;
  t5841 = t5792 + t5819;
  t5865 = t4472*t5784;
  t5869 = t573*t5801;
  t5875 = t5865 + t5869;
  t5849 = t527*t5841;
  t5882 = t4586*t5875;
  t5889 = t5849 + t5882;
  t5901 = t4586*t5841;
  t5908 = -1.*t527*t5875;
  t5910 = t5901 + t5908;
  t4746 = -1.*t356*t4681;
  t4853 = t4785*t4806;
  t4875 = t4746 + t4853;
  t4949 = t4785*t4681;
  t4995 = t356*t4806;
  t4997 = t4949 + t4995;
  t5597 = -1.*t356*t5565;
  t5614 = t4785*t5611;
  t5621 = t5597 + t5614;
  t5626 = t4785*t5565;
  t5630 = t356*t5611;
  t5631 = t5626 + t5630;
  t5898 = -1.*t356*t5889;
  t5920 = t4785*t5910;
  t5926 = t5898 + t5920;
  t5947 = t4785*t5889;
  t5948 = t356*t5910;
  t5961 = t5947 + t5948;

  p_output1(0)=-1.*t157*t4875 + t4904*t4997;
  p_output1(1)=-1.*t157*t5621 + t4904*t5631;
  p_output1(2)=-1.*t157*t5926 + t4904*t5961;
  p_output1(3)=t4875*t4904 + t157*t4997;
  p_output1(4)=t4904*t5621 + t157*t5631;
  p_output1(5)=t4904*t5926 + t157*t5961;
  p_output1(6)=-1.*t1162*t3834 + t3961*t759*t835;
  p_output1(7)=-1.*t1162*t5262 + t1902*t3961*t835;
  p_output1(8)=-1.*t2572*t3961 - 1.*t1162*t5653;
}


       
Eigen::Matrix<double,3,3> R_toe_joint_left(const Eigen::Matrix<double,20,1> &var1)
//void R_toe_joint_left(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



