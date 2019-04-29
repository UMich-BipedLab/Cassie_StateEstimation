/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:37 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_ankle_joint_left_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
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
static void output1(double *p_output1,const double *var1)
{
  double t628;
  double t824;
  double t949;
  double t937;
  double t971;
  double t812;
  double t1058;
  double t1094;
  double t1223;
  double t942;
  double t1005;
  double t1040;
  double t1235;
  double t569;
  double t1465;
  double t1487;
  double t1495;
  double t665;
  double t676;
  double t735;
  double t1046;
  double t1265;
  double t1345;
  double t1394;
  double t1457;
  double t1461;
  double t1549;
  double t1583;
  double t1464;
  double t1555;
  double t1561;
  double t534;
  double t1616;
  double t1650;
  double t1659;
  double t1761;
  double t1575;
  double t1700;
  double t1721;
  double t249;
  double t1803;
  double t1806;
  double t1844;
  double t43;
  double t2253;
  double t2280;
  double t2325;
  double t2162;
  double t2165;
  double t2230;
  double t2434;
  double t2435;
  double t2438;
  double t2132;
  double t2251;
  double t2382;
  double t2394;
  double t2400;
  double t2418;
  double t2420;
  double t2498;
  double t2589;
  double t2674;
  double t2689;
  double t2707;
  double t1903;
  double t2667;
  double t2733;
  double t2736;
  double t2769;
  double t2770;
  double t2772;
  double t2947;
  double t2952;
  double t2955;
  double t2878;
  double t2880;
  double t2886;
  double t2899;
  double t2904;
  double t2912;
  double t2928;
  double t2976;
  double t3042;
  double t3093;
  double t3099;
  double t3112;
  double t3062;
  double t3140;
  double t3234;
  double t3347;
  double t3378;
  double t3385;
  double t1726;
  double t1846;
  double t1872;
  double t1948;
  double t2001;
  double t2035;
  double t2748;
  double t2778;
  double t2787;
  double t2837;
  double t2839;
  double t2860;
  double t3346;
  double t3398;
  double t3449;
  double t3503;
  double t3507;
  double t3513;
  double t4019;
  double t4070;
  double t4259;
  double t4260;
  double t4367;
  double t4384;
  double t4581;
  double t4596;
  double t4790;
  double t4812;
  double t3564;
  double t3604;
  double t3618;
  double t3926;
  double t3946;
  double t3954;
  double t3972;
  double t3991;
  double t4004;
  double t4076;
  double t4077;
  double t4092;
  double t4102;
  double t4103;
  double t4122;
  double t4277;
  double t4278;
  double t4301;
  double t4323;
  double t4328;
  double t4333;
  double t4395;
  double t4407;
  double t4422;
  double t4490;
  double t4517;
  double t4539;
  double t4634;
  double t4661;
  double t4666;
  double t4685;
  double t4754;
  double t4761;
  double t4827;
  double t4888;
  double t4890;
  double t4897;
  double t4918;
  double t4919;
  double t3633;
  double t3667;
  double t3672;
  double t3680;
  double t3713;
  double t3752;
  t628 = Cos(var1[3]);
  t824 = Cos(var1[5]);
  t949 = Sin(var1[4]);
  t937 = Sin(var1[3]);
  t971 = Sin(var1[5]);
  t812 = Cos(var1[6]);
  t1058 = t628*t824*t949;
  t1094 = t937*t971;
  t1223 = t1058 + t1094;
  t942 = -1.*t824*t937;
  t1005 = t628*t949*t971;
  t1040 = t942 + t1005;
  t1235 = Sin(var1[6]);
  t569 = Cos(var1[8]);
  t1465 = t812*t1223;
  t1487 = -1.*t1040*t1235;
  t1495 = t1465 + t1487;
  t665 = Cos(var1[4]);
  t676 = Cos(var1[7]);
  t735 = t628*t665*t676;
  t1046 = t812*t1040;
  t1265 = t1223*t1235;
  t1345 = t1046 + t1265;
  t1394 = Sin(var1[7]);
  t1457 = t1345*t1394;
  t1461 = t735 + t1457;
  t1549 = Sin(var1[8]);
  t1583 = Cos(var1[9]);
  t1464 = t569*t1461;
  t1555 = t1495*t1549;
  t1561 = t1464 + t1555;
  t534 = Sin(var1[9]);
  t1616 = t569*t1495;
  t1650 = -1.*t1461*t1549;
  t1659 = t1616 + t1650;
  t1761 = Cos(var1[10]);
  t1575 = -1.*t534*t1561;
  t1700 = t1583*t1659;
  t1721 = t1575 + t1700;
  t249 = Sin(var1[10]);
  t1803 = t1583*t1561;
  t1806 = t534*t1659;
  t1844 = t1803 + t1806;
  t43 = Sin(var1[11]);
  t2253 = t824*t937*t949;
  t2280 = -1.*t628*t971;
  t2325 = t2253 + t2280;
  t2162 = t628*t824;
  t2165 = t937*t949*t971;
  t2230 = t2162 + t2165;
  t2434 = t812*t2325;
  t2435 = -1.*t2230*t1235;
  t2438 = t2434 + t2435;
  t2132 = t665*t676*t937;
  t2251 = t812*t2230;
  t2382 = t2325*t1235;
  t2394 = t2251 + t2382;
  t2400 = t2394*t1394;
  t2418 = t2132 + t2400;
  t2420 = t569*t2418;
  t2498 = t2438*t1549;
  t2589 = t2420 + t2498;
  t2674 = t569*t2438;
  t2689 = -1.*t2418*t1549;
  t2707 = t2674 + t2689;
  t1903 = Cos(var1[11]);
  t2667 = -1.*t534*t2589;
  t2733 = t1583*t2707;
  t2736 = t2667 + t2733;
  t2769 = t1583*t2589;
  t2770 = t534*t2707;
  t2772 = t2769 + t2770;
  t2947 = t665*t824*t812;
  t2952 = -1.*t665*t971*t1235;
  t2955 = t2947 + t2952;
  t2878 = -1.*t676*t949;
  t2880 = t665*t812*t971;
  t2886 = t665*t824*t1235;
  t2899 = t2880 + t2886;
  t2904 = t2899*t1394;
  t2912 = t2878 + t2904;
  t2928 = t569*t2912;
  t2976 = t2955*t1549;
  t3042 = t2928 + t2976;
  t3093 = t569*t2955;
  t3099 = -1.*t2912*t1549;
  t3112 = t3093 + t3099;
  t3062 = -1.*t534*t3042;
  t3140 = t1583*t3112;
  t3234 = t3062 + t3140;
  t3347 = t1583*t3042;
  t3378 = t534*t3112;
  t3385 = t3347 + t3378;
  t1726 = t249*t1721;
  t1846 = t1761*t1844;
  t1872 = t1726 + t1846;
  t1948 = t1761*t1721;
  t2001 = -1.*t249*t1844;
  t2035 = t1948 + t2001;
  t2748 = t249*t2736;
  t2778 = t1761*t2772;
  t2787 = t2748 + t2778;
  t2837 = t1761*t2736;
  t2839 = -1.*t249*t2772;
  t2860 = t2837 + t2839;
  t3346 = t249*t3234;
  t3398 = t1761*t3385;
  t3449 = t3346 + t3398;
  t3503 = t1761*t3234;
  t3507 = -1.*t249*t3385;
  t3513 = t3503 + t3507;
  t4019 = -1.*t676;
  t4070 = 1. + t4019;
  t4259 = -1.*t569;
  t4260 = 1. + t4259;
  t4367 = -1.*t1583;
  t4384 = 1. + t4367;
  t4581 = -1.*t1761;
  t4596 = 1. + t4581;
  t4790 = -1.*t1903;
  t4812 = 1. + t4790;
  t3564 = t1903*t1872;
  t3604 = t43*t2035;
  t3618 = t3564 + t3604;
  t3926 = -1.*t812;
  t3946 = 1. + t3926;
  t3954 = 0.135*t3946;
  t3972 = 0. + t3954;
  t3991 = -0.135*t1235;
  t4004 = 0. + t3991;
  t4076 = 0.135*t4070;
  t4077 = 0.049*t1394;
  t4092 = 0. + t4076 + t4077;
  t4102 = -0.049*t4070;
  t4103 = 0.135*t1394;
  t4122 = 0. + t4102 + t4103;
  t4277 = -0.049*t4260;
  t4278 = -0.09*t1549;
  t4301 = 0. + t4277 + t4278;
  t4323 = -0.09*t4260;
  t4328 = 0.049*t1549;
  t4333 = 0. + t4323 + t4328;
  t4395 = -0.049*t4384;
  t4407 = -0.21*t534;
  t4422 = 0. + t4395 + t4407;
  t4490 = -0.21*t4384;
  t4517 = 0.049*t534;
  t4539 = 0. + t4490 + t4517;
  t4634 = -0.2707*t4596;
  t4661 = 0.0016*t249;
  t4666 = 0. + t4634 + t4661;
  t4685 = -0.0016*t4596;
  t4754 = -0.2707*t249;
  t4761 = 0. + t4685 + t4754;
  t4827 = 0.0184*t4812;
  t4888 = -0.7055*t43;
  t4890 = 0. + t4827 + t4888;
  t4897 = -0.7055*t4812;
  t4918 = -0.0184*t43;
  t4919 = 0. + t4897 + t4918;
  t3633 = t1903*t2787;
  t3667 = t43*t2860;
  t3672 = t3633 + t3667;
  t3680 = t1903*t3449;
  t3713 = t43*t3513;
  t3752 = t3680 + t3713;
  p_output1[0]=-1.*t1903*t2035 + t1872*t43;
  p_output1[1]=-1.*t1903*t2860 + t2787*t43;
  p_output1[2]=-1.*t1903*t3513 + t3449*t43;
  p_output1[3]=0.;
  p_output1[4]=t3618;
  p_output1[5]=t3672;
  p_output1[6]=t3752;
  p_output1[7]=0.;
  p_output1[8]=t1394*t628*t665 - 1.*t1345*t676;
  p_output1[9]=-1.*t2394*t676 + t1394*t665*t937;
  p_output1[10]=-1.*t2899*t676 - 1.*t1394*t949;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0184*t3618 + t1040*t3972 + t1223*t4004 + t1345*t4092 - 0.7055*(t1903*t2035 - 1.*t1872*t43) + t1461*t4301 + t1495*t4333 + t1561*t4422 + t1659*t4539 + t1721*t4666 + t1844*t4761 + t1872*t4890 + t2035*t4919 + t4122*t628*t665 + 0.1305*(-1.*t1394*t628*t665 + t1345*t676) + var1[0];
  p_output1[13]=0. + 0.0184*t3672 + t2230*t3972 + t2325*t4004 + t2394*t4092 - 0.7055*(t1903*t2860 - 1.*t2787*t43) + t2418*t4301 + t2438*t4333 + t2589*t4422 + t2707*t4539 + t2736*t4666 + t2772*t4761 + t2787*t4890 + t2860*t4919 + t4122*t665*t937 + 0.1305*(t2394*t676 - 1.*t1394*t665*t937) + var1[1];
  p_output1[14]=0. + 0.0184*t3752 + t2899*t4092 - 0.7055*(t1903*t3513 - 1.*t3449*t43) + t2912*t4301 + t2955*t4333 + t3042*t4422 + t3112*t4539 + t3234*t4666 + t3385*t4761 + t3449*t4890 + t3513*t4919 + t4004*t665*t824 - 1.*t4122*t949 + 0.1305*(t2899*t676 + t1394*t949) + t3972*t665*t971 + var1[2];
  p_output1[15]=1.;
}



void H_ankle_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
