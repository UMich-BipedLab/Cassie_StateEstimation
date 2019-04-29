/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:42 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeFront.h"

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
  double t424;
  double t326;
  double t478;
  double t345;
  double t510;
  double t272;
  double t277;
  double t680;
  double t804;
  double t805;
  double t417;
  double t545;
  double t554;
  double t562;
  double t585;
  double t597;
  double t599;
  double t688;
  double t767;
  double t1384;
  double t1681;
  double t1685;
  double t1691;
  double t1409;
  double t1487;
  double t1531;
  double t1714;
  double t1778;
  double t1595;
  double t1717;
  double t1721;
  double t1359;
  double t1828;
  double t1837;
  double t1844;
  double t1923;
  double t1769;
  double t1865;
  double t1898;
  double t1356;
  double t1954;
  double t1966;
  double t1989;
  double t2054;
  double t1908;
  double t1993;
  double t2003;
  double t1330;
  double t2077;
  double t2094;
  double t2112;
  double t2163;
  double t2009;
  double t2124;
  double t2141;
  double t1324;
  double t2214;
  double t2279;
  double t2299;
  double t825;
  double t856;
  double t906;
  double t925;
  double t971;
  double t1043;
  double t1081;
  double t1102;
  double t1136;
  double t2525;
  double t2538;
  double t2575;
  double t2444;
  double t2463;
  double t2491;
  double t2522;
  double t2582;
  double t2597;
  double t2634;
  double t2712;
  double t2732;
  double t2621;
  double t2737;
  double t2754;
  double t2767;
  double t2778;
  double t2779;
  double t2757;
  double t2787;
  double t2814;
  double t2840;
  double t2851;
  double t2885;
  double t2831;
  double t2895;
  double t2897;
  double t2973;
  double t3003;
  double t3036;
  double t1176;
  double t1195;
  double t1237;
  double t3255;
  double t3328;
  double t3347;
  double t3133;
  double t3135;
  double t3191;
  double t3215;
  double t3348;
  double t3356;
  double t3386;
  double t3394;
  double t3421;
  double t3365;
  double t3428;
  double t3442;
  double t3453;
  double t3460;
  double t3487;
  double t3444;
  double t3509;
  double t3517;
  double t3540;
  double t3561;
  double t3591;
  double t3518;
  double t3637;
  double t3651;
  double t3686;
  double t3689;
  double t3695;
  double t2146;
  double t2319;
  double t2324;
  double t2383;
  double t2394;
  double t2403;
  double t2928;
  double t3037;
  double t3053;
  double t3091;
  double t3103;
  double t3108;
  double t3671;
  double t3713;
  double t3721;
  double t3788;
  double t3792;
  double t3808;
  double t4108;
  double t4116;
  double t4305;
  double t4311;
  double t4487;
  double t4491;
  double t4592;
  double t4601;
  double t4680;
  double t4683;
  double t4767;
  double t4784;
  double t4011;
  double t4037;
  double t4042;
  double t4050;
  double t4060;
  double t4089;
  double t4118;
  double t4126;
  double t4148;
  double t4161;
  double t4226;
  double t4231;
  double t4312;
  double t4326;
  double t4334;
  double t4416;
  double t4446;
  double t4455;
  double t4500;
  double t4512;
  double t4515;
  double t4519;
  double t4559;
  double t4574;
  double t4602;
  double t4603;
  double t4609;
  double t4618;
  double t4622;
  double t4634;
  double t4687;
  double t4692;
  double t4722;
  double t4737;
  double t4740;
  double t4748;
  double t4792;
  double t4794;
  double t4798;
  double t4809;
  double t4826;
  double t4838;
  t424 = Cos(var1[3]);
  t326 = Cos(var1[5]);
  t478 = Sin(var1[4]);
  t345 = Sin(var1[3]);
  t510 = Sin(var1[5]);
  t272 = Cos(var1[7]);
  t277 = Cos(var1[6]);
  t680 = Sin(var1[6]);
  t804 = Cos(var1[4]);
  t805 = Sin(var1[7]);
  t417 = -1.*t326*t345;
  t545 = t424*t478*t510;
  t554 = t417 + t545;
  t562 = t277*t554;
  t585 = t424*t326*t478;
  t597 = t345*t510;
  t599 = t585 + t597;
  t688 = t599*t680;
  t767 = t562 + t688;
  t1384 = Cos(var1[8]);
  t1681 = t277*t599;
  t1685 = -1.*t554*t680;
  t1691 = t1681 + t1685;
  t1409 = t424*t804*t272;
  t1487 = t767*t805;
  t1531 = t1409 + t1487;
  t1714 = Sin(var1[8]);
  t1778 = Cos(var1[9]);
  t1595 = t1384*t1531;
  t1717 = t1691*t1714;
  t1721 = t1595 + t1717;
  t1359 = Sin(var1[9]);
  t1828 = t1384*t1691;
  t1837 = -1.*t1531*t1714;
  t1844 = t1828 + t1837;
  t1923 = Cos(var1[10]);
  t1769 = -1.*t1359*t1721;
  t1865 = t1778*t1844;
  t1898 = t1769 + t1865;
  t1356 = Sin(var1[10]);
  t1954 = t1778*t1721;
  t1966 = t1359*t1844;
  t1989 = t1954 + t1966;
  t2054 = Cos(var1[11]);
  t1908 = t1356*t1898;
  t1993 = t1923*t1989;
  t2003 = t1908 + t1993;
  t1330 = Sin(var1[11]);
  t2077 = t1923*t1898;
  t2094 = -1.*t1356*t1989;
  t2112 = t2077 + t2094;
  t2163 = Cos(var1[12]);
  t2009 = -1.*t1330*t2003;
  t2124 = t2054*t2112;
  t2141 = t2009 + t2124;
  t1324 = Sin(var1[12]);
  t2214 = t2054*t2003;
  t2279 = t1330*t2112;
  t2299 = t2214 + t2279;
  t825 = t424*t326;
  t856 = t345*t478*t510;
  t906 = t825 + t856;
  t925 = t277*t906;
  t971 = t326*t345*t478;
  t1043 = -1.*t424*t510;
  t1081 = t971 + t1043;
  t1102 = t1081*t680;
  t1136 = t925 + t1102;
  t2525 = t277*t1081;
  t2538 = -1.*t906*t680;
  t2575 = t2525 + t2538;
  t2444 = t804*t272*t345;
  t2463 = t1136*t805;
  t2491 = t2444 + t2463;
  t2522 = t1384*t2491;
  t2582 = t2575*t1714;
  t2597 = t2522 + t2582;
  t2634 = t1384*t2575;
  t2712 = -1.*t2491*t1714;
  t2732 = t2634 + t2712;
  t2621 = -1.*t1359*t2597;
  t2737 = t1778*t2732;
  t2754 = t2621 + t2737;
  t2767 = t1778*t2597;
  t2778 = t1359*t2732;
  t2779 = t2767 + t2778;
  t2757 = t1356*t2754;
  t2787 = t1923*t2779;
  t2814 = t2757 + t2787;
  t2840 = t1923*t2754;
  t2851 = -1.*t1356*t2779;
  t2885 = t2840 + t2851;
  t2831 = -1.*t1330*t2814;
  t2895 = t2054*t2885;
  t2897 = t2831 + t2895;
  t2973 = t2054*t2814;
  t3003 = t1330*t2885;
  t3036 = t2973 + t3003;
  t1176 = t804*t277*t510;
  t1195 = t804*t326*t680;
  t1237 = t1176 + t1195;
  t3255 = t804*t326*t277;
  t3328 = -1.*t804*t510*t680;
  t3347 = t3255 + t3328;
  t3133 = -1.*t272*t478;
  t3135 = t1237*t805;
  t3191 = t3133 + t3135;
  t3215 = t1384*t3191;
  t3348 = t3347*t1714;
  t3356 = t3215 + t3348;
  t3386 = t1384*t3347;
  t3394 = -1.*t3191*t1714;
  t3421 = t3386 + t3394;
  t3365 = -1.*t1359*t3356;
  t3428 = t1778*t3421;
  t3442 = t3365 + t3428;
  t3453 = t1778*t3356;
  t3460 = t1359*t3421;
  t3487 = t3453 + t3460;
  t3444 = t1356*t3442;
  t3509 = t1923*t3487;
  t3517 = t3444 + t3509;
  t3540 = t1923*t3442;
  t3561 = -1.*t1356*t3487;
  t3591 = t3540 + t3561;
  t3518 = -1.*t1330*t3517;
  t3637 = t2054*t3591;
  t3651 = t3518 + t3637;
  t3686 = t2054*t3517;
  t3689 = t1330*t3591;
  t3695 = t3686 + t3689;
  t2146 = t1324*t2141;
  t2319 = t2163*t2299;
  t2324 = t2146 + t2319;
  t2383 = t2163*t2141;
  t2394 = -1.*t1324*t2299;
  t2403 = t2383 + t2394;
  t2928 = t1324*t2897;
  t3037 = t2163*t3036;
  t3053 = t2928 + t3037;
  t3091 = t2163*t2897;
  t3103 = -1.*t1324*t3036;
  t3108 = t3091 + t3103;
  t3671 = t1324*t3651;
  t3713 = t2163*t3695;
  t3721 = t3671 + t3713;
  t3788 = t2163*t3651;
  t3792 = -1.*t1324*t3695;
  t3808 = t3788 + t3792;
  t4108 = -1.*t272;
  t4116 = 1. + t4108;
  t4305 = -1.*t1384;
  t4311 = 1. + t4305;
  t4487 = -1.*t1778;
  t4491 = 1. + t4487;
  t4592 = -1.*t1923;
  t4601 = 1. + t4592;
  t4680 = -1.*t2054;
  t4683 = 1. + t4680;
  t4767 = -1.*t2163;
  t4784 = 1. + t4767;
  t4011 = -1.*t277;
  t4037 = 1. + t4011;
  t4042 = 0.135*t4037;
  t4050 = 0. + t4042;
  t4060 = -0.135*t680;
  t4089 = 0. + t4060;
  t4118 = 0.135*t4116;
  t4126 = 0.049*t805;
  t4148 = 0. + t4118 + t4126;
  t4161 = -0.049*t4116;
  t4226 = 0.135*t805;
  t4231 = 0. + t4161 + t4226;
  t4312 = -0.049*t4311;
  t4326 = -0.09*t1714;
  t4334 = 0. + t4312 + t4326;
  t4416 = -0.09*t4311;
  t4446 = 0.049*t1714;
  t4455 = 0. + t4416 + t4446;
  t4500 = -0.049*t4491;
  t4512 = -0.21*t1359;
  t4515 = 0. + t4500 + t4512;
  t4519 = -0.21*t4491;
  t4559 = 0.049*t1359;
  t4574 = 0. + t4519 + t4559;
  t4602 = -0.2707*t4601;
  t4603 = 0.0016*t1356;
  t4609 = 0. + t4602 + t4603;
  t4618 = -0.0016*t4601;
  t4622 = -0.2707*t1356;
  t4634 = 0. + t4618 + t4622;
  t4687 = 0.0184*t4683;
  t4692 = -0.7055*t1330;
  t4722 = 0. + t4687 + t4692;
  t4737 = -0.7055*t4683;
  t4740 = -0.0184*t1330;
  t4748 = 0. + t4737 + t4740;
  t4792 = -1.1135*t4784;
  t4794 = 0.0216*t1324;
  t4798 = 0. + t4792 + t4794;
  t4809 = -0.0216*t4784;
  t4826 = -1.1135*t1324;
  t4838 = 0. + t4809 + t4826;

  p_output1(0)=-1.*t272*t767 + t424*t804*t805;
  p_output1(1)=-1.*t1136*t272 + t345*t804*t805;
  p_output1(2)=-1.*t1237*t272 - 1.*t478*t805;
  p_output1(3)=0.;
  p_output1(4)=0.642788*t2324 + 0.766044*t2403;
  p_output1(5)=0.642788*t3053 + 0.766044*t3108;
  p_output1(6)=0.642788*t3721 + 0.766044*t3808;
  p_output1(7)=0.;
  p_output1(8)=-0.766044*t2324 + 0.642788*t2403;
  p_output1(9)=-0.766044*t3053 + 0.642788*t3108;
  p_output1(10)=-0.766044*t3721 + 0.642788*t3808;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.088451*t2324 - 1.062256*t2403 + t1531*t4334 + t1691*t4455 + t1721*t4515 + t1844*t4574 + t1898*t4609 + t1989*t4634 + t2003*t4722 + t2112*t4748 + t2141*t4798 + t2299*t4838 + t4050*t554 + t4089*t599 + t4148*t767 + t4231*t424*t804 + 0.1305*(t272*t767 - 1.*t424*t804*t805) + var1(0);
  p_output1(13)=0. + 0.088451*t3053 - 1.062256*t3108 + t1081*t4089 + t1136*t4148 + t2491*t4334 + t2575*t4455 + t2597*t4515 + t2732*t4574 + t2754*t4609 + t2779*t4634 + t2814*t4722 + t2885*t4748 + t2897*t4798 + t3036*t4838 + t345*t4231*t804 + 0.1305*(t1136*t272 - 1.*t345*t804*t805) + t4050*t906 + var1(1);
  p_output1(14)=0. + 0.088451*t3721 - 1.062256*t3808 + t1237*t4148 + t3191*t4334 + t3347*t4455 + t3356*t4515 + t3421*t4574 + t3442*t4609 + t3487*t4634 + t3517*t4722 + t3591*t4748 - 1.*t4231*t478 + t3651*t4798 + t3695*t4838 + t326*t4089*t804 + t4050*t510*t804 + 0.1305*(t1237*t272 + t478*t805) + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_LeftToeFront(const Eigen::Matrix<double,20,1> &var1)
//void H_LeftToeFront(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



