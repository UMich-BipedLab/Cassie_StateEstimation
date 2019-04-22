/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:20 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_toe_joint_left.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t1421;
  double t1032;
  double t1489;
  double t1257;
  double t1526;
  double t387;
  double t1400;
  double t1544;
  double t1550;
  double t1849;
  double t1913;
  double t1985;
  double t2013;
  double t2505;
  double t2551;
  double t2571;
  double t2636;
  double t2438;
  double t2464;
  double t2503;
  double t3058;
  double t3759;
  double t3914;
  double t3927;
  double t4010;
  double t3554;
  double t3658;
  double t3741;
  double t4556;
  double t4584;
  double t4660;
  double t5113;
  double t5321;
  double t5326;
  double t5347;
  double t5366;
  double t5378;
  double t5384;
  double t5435;
  double t5442;
  double t5459;
  double t5492;
  double t5535;
  double t5537;
  double t5562;
  double t5577;
  double t5583;
  double t5587;
  double t5631;
  double t5647;
  double t5658;
  double t5676;
  double t5693;
  double t5698;
  double t5712;
  double t5732;
  double t5737;
  double t5780;
  double t5819;
  double t5834;
  double t5841;
  double t5853;
  double t5856;
  double t5870;
  double t5905;
  double t5915;
  double t5926;
  double t5933;
  double t5961;
  double t5967;
  double t5969;
  double t635;
  double t789;
  double t815;
  double t948;
  double t2027;
  double t2115;
  double t6063;
  double t6095;
  double t6137;
  double t6171;
  double t6184;
  double t6192;
  double t2581;
  double t2659;
  double t2688;
  double t3146;
  double t3204;
  double t3276;
  double t6206;
  double t6217;
  double t6221;
  double t3995;
  double t4270;
  double t4387;
  double t4706;
  double t4975;
  double t5052;
  double t5330;
  double t5351;
  double t5357;
  double t6337;
  double t6369;
  double t6391;
  double t6447;
  double t6461;
  double t6468;
  double t5408;
  double t5422;
  double t5424;
  double t5547;
  double t5565;
  double t5571;
  double t6518;
  double t6546;
  double t6548;
  double t6599;
  double t6627;
  double t6630;
  double t5602;
  double t5614;
  double t5630;
  double t5710;
  double t5721;
  double t5729;
  double t6641;
  double t6650;
  double t6651;
  double t6675;
  double t6710;
  double t6732;
  double t5799;
  double t5803;
  double t5813;
  double t5881;
  double t5909;
  double t5910;
  double t6775;
  double t6787;
  double t6833;
  double t6868;
  double t6899;
  double t6906;
  double t5952;
  double t5953;
  double t5957;
  double t6915;
  double t6919;
  double t6924;
  double t6952;
  double t6974;
  double t6986;
  double t7206;
  double t7217;
  double t7226;
  double t7311;
  double t7321;
  double t7327;
  double t7345;
  double t7350;
  double t7352;
  double t7358;
  double t7366;
  double t7376;
  double t7382;
  double t7386;
  double t7387;
  double t7397;
  double t7409;
  double t7416;
  double t7428;
  double t7464;
  double t7476;
  double t7488;
  double t7489;
  double t7492;
  double t7512;
  double t7515;
  double t7520;
  double t7526;
  double t7533;
  double t7535;
  double t7547;
  double t7552;
  double t7559;
  t1421 = Cos(var1[3]);
  t1032 = Cos(var1[5]);
  t1489 = Sin(var1[4]);
  t1257 = Sin(var1[3]);
  t1526 = Sin(var1[5]);
  t387 = Cos(var1[6]);
  t1400 = -1.*t1032*t1257;
  t1544 = t1421*t1489*t1526;
  t1550 = t1400 + t1544;
  t1849 = t1421*t1032*t1489;
  t1913 = t1257*t1526;
  t1985 = t1849 + t1913;
  t2013 = Sin(var1[6]);
  t2505 = Cos(var1[7]);
  t2551 = -1.*t2505;
  t2571 = 1. + t2551;
  t2636 = Sin(var1[7]);
  t2438 = t387*t1550;
  t2464 = t1985*t2013;
  t2503 = t2438 + t2464;
  t3058 = Cos(var1[4]);
  t3759 = Cos(var1[8]);
  t3914 = -1.*t3759;
  t3927 = 1. + t3914;
  t4010 = Sin(var1[8]);
  t3554 = t1421*t3058*t2505;
  t3658 = t2503*t2636;
  t3741 = t3554 + t3658;
  t4556 = t387*t1985;
  t4584 = -1.*t1550*t2013;
  t4660 = t4556 + t4584;
  t5113 = Cos(var1[9]);
  t5321 = -1.*t5113;
  t5326 = 1. + t5321;
  t5347 = Sin(var1[9]);
  t5366 = t3759*t3741;
  t5378 = t4660*t4010;
  t5384 = t5366 + t5378;
  t5435 = t3759*t4660;
  t5442 = -1.*t3741*t4010;
  t5459 = t5435 + t5442;
  t5492 = Cos(var1[10]);
  t5535 = -1.*t5492;
  t5537 = 1. + t5535;
  t5562 = Sin(var1[10]);
  t5577 = -1.*t5347*t5384;
  t5583 = t5113*t5459;
  t5587 = t5577 + t5583;
  t5631 = t5113*t5384;
  t5647 = t5347*t5459;
  t5658 = t5631 + t5647;
  t5676 = Cos(var1[11]);
  t5693 = -1.*t5676;
  t5698 = 1. + t5693;
  t5712 = Sin(var1[11]);
  t5732 = t5562*t5587;
  t5737 = t5492*t5658;
  t5780 = t5732 + t5737;
  t5819 = t5492*t5587;
  t5834 = -1.*t5562*t5658;
  t5841 = t5819 + t5834;
  t5853 = Cos(var1[12]);
  t5856 = -1.*t5853;
  t5870 = 1. + t5856;
  t5905 = Sin(var1[12]);
  t5915 = -1.*t5712*t5780;
  t5926 = t5676*t5841;
  t5933 = t5915 + t5926;
  t5961 = t5676*t5780;
  t5967 = t5712*t5841;
  t5969 = t5961 + t5967;
  t635 = -1.*t387;
  t789 = 1. + t635;
  t815 = 0.135*t789;
  t948 = 0. + t815;
  t2027 = -0.135*t2013;
  t2115 = 0. + t2027;
  t6063 = t1421*t1032;
  t6095 = t1257*t1489*t1526;
  t6137 = t6063 + t6095;
  t6171 = t1032*t1257*t1489;
  t6184 = -1.*t1421*t1526;
  t6192 = t6171 + t6184;
  t2581 = 0.135*t2571;
  t2659 = 0.049*t2636;
  t2688 = 0. + t2581 + t2659;
  t3146 = -0.049*t2571;
  t3204 = 0.135*t2636;
  t3276 = 0. + t3146 + t3204;
  t6206 = t387*t6137;
  t6217 = t6192*t2013;
  t6221 = t6206 + t6217;
  t3995 = -0.049*t3927;
  t4270 = -0.09*t4010;
  t4387 = 0. + t3995 + t4270;
  t4706 = -0.09*t3927;
  t4975 = 0.049*t4010;
  t5052 = 0. + t4706 + t4975;
  t5330 = -0.049*t5326;
  t5351 = -0.21*t5347;
  t5357 = 0. + t5330 + t5351;
  t6337 = t3058*t2505*t1257;
  t6369 = t6221*t2636;
  t6391 = t6337 + t6369;
  t6447 = t387*t6192;
  t6461 = -1.*t6137*t2013;
  t6468 = t6447 + t6461;
  t5408 = -0.21*t5326;
  t5422 = 0.049*t5347;
  t5424 = 0. + t5408 + t5422;
  t5547 = -0.2707*t5537;
  t5565 = 0.0016*t5562;
  t5571 = 0. + t5547 + t5565;
  t6518 = t3759*t6391;
  t6546 = t6468*t4010;
  t6548 = t6518 + t6546;
  t6599 = t3759*t6468;
  t6627 = -1.*t6391*t4010;
  t6630 = t6599 + t6627;
  t5602 = -0.0016*t5537;
  t5614 = -0.2707*t5562;
  t5630 = 0. + t5602 + t5614;
  t5710 = 0.0184*t5698;
  t5721 = -0.7055*t5712;
  t5729 = 0. + t5710 + t5721;
  t6641 = -1.*t5347*t6548;
  t6650 = t5113*t6630;
  t6651 = t6641 + t6650;
  t6675 = t5113*t6548;
  t6710 = t5347*t6630;
  t6732 = t6675 + t6710;
  t5799 = -0.7055*t5698;
  t5803 = -0.0184*t5712;
  t5813 = 0. + t5799 + t5803;
  t5881 = -1.1135*t5870;
  t5909 = 0.0216*t5905;
  t5910 = 0. + t5881 + t5909;
  t6775 = t5562*t6651;
  t6787 = t5492*t6732;
  t6833 = t6775 + t6787;
  t6868 = t5492*t6651;
  t6899 = -1.*t5562*t6732;
  t6906 = t6868 + t6899;
  t5952 = -0.0216*t5870;
  t5953 = -1.1135*t5905;
  t5957 = 0. + t5952 + t5953;
  t6915 = -1.*t5712*t6833;
  t6919 = t5676*t6906;
  t6924 = t6915 + t6919;
  t6952 = t5676*t6833;
  t6974 = t5712*t6906;
  t6986 = t6952 + t6974;
  t7206 = t3058*t387*t1526;
  t7217 = t3058*t1032*t2013;
  t7226 = t7206 + t7217;
  t7311 = -1.*t2505*t1489;
  t7321 = t7226*t2636;
  t7327 = t7311 + t7321;
  t7345 = t3058*t1032*t387;
  t7350 = -1.*t3058*t1526*t2013;
  t7352 = t7345 + t7350;
  t7358 = t3759*t7327;
  t7366 = t7352*t4010;
  t7376 = t7358 + t7366;
  t7382 = t3759*t7352;
  t7386 = -1.*t7327*t4010;
  t7387 = t7382 + t7386;
  t7397 = -1.*t5347*t7376;
  t7409 = t5113*t7387;
  t7416 = t7397 + t7409;
  t7428 = t5113*t7376;
  t7464 = t5347*t7387;
  t7476 = t7428 + t7464;
  t7488 = t5562*t7416;
  t7489 = t5492*t7476;
  t7492 = t7488 + t7489;
  t7512 = t5492*t7416;
  t7515 = -1.*t5562*t7476;
  t7520 = t7512 + t7515;
  t7526 = -1.*t5712*t7492;
  t7533 = t5676*t7520;
  t7535 = t7526 + t7533;
  t7547 = t5676*t7492;
  t7552 = t5712*t7520;
  t7559 = t7547 + t7552;

  p_output1(0)=0. + t1985*t2115 + t2503*t2688 + 0.1305*(t2503*t2505 - 1.*t1421*t2636*t3058) + t1421*t3058*t3276 + t3741*t4387 + t4660*t5052 + t5357*t5384 + t5424*t5459 + t5571*t5587 + t5630*t5658 + t5729*t5780 + t5813*t5841 + t5910*t5933 + t5957*t5969 - 0.0216*(t5905*t5933 + t5853*t5969) - 1.1135*(t5853*t5933 - 1.*t5905*t5969) + t1550*t948 + var1(0);
  p_output1(1)=0. + t1257*t3058*t3276 + t2115*t6192 + t2688*t6221 + 0.1305*(-1.*t1257*t2636*t3058 + t2505*t6221) + t4387*t6391 + t5052*t6468 + t5357*t6548 + t5424*t6630 + t5571*t6651 + t5630*t6732 + t5729*t6833 + t5813*t6906 + t5910*t6924 + t5957*t6986 - 0.0216*(t5905*t6924 + t5853*t6986) - 1.1135*(t5853*t6924 - 1.*t5905*t6986) + t6137*t948 + var1(1);
  p_output1(2)=0. + t1032*t2115*t3058 - 1.*t1489*t3276 + t2688*t7226 + 0.1305*(t1489*t2636 + t2505*t7226) + t4387*t7327 + t5052*t7352 + t5357*t7376 + t5424*t7387 + t5571*t7416 + t5630*t7476 + t5729*t7492 + t5813*t7520 + t5910*t7535 + t5957*t7559 - 0.0216*(t5905*t7535 + t5853*t7559) - 1.1135*(t5853*t7535 - 1.*t5905*t7559) + t1526*t3058*t948 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_toe_joint_left(const Eigen::Matrix<double,20,1> &var1)
//void p_toe_joint_left(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



