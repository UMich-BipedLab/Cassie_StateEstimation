/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:23:06 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeFront.h"

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
  double t122;
  double t553;
  double t684;
  double t566;
  double t694;
  double t174;
  double t316;
  double t475;
  double t506;
  double t941;
  double t658;
  double t745;
  double t842;
  double t981;
  double t989;
  double t1036;
  double t901;
  double t1045;
  double t1050;
  double t1793;
  double t1712;
  double t1714;
  double t1725;
  double t1668;
  double t1850;
  double t1867;
  double t1870;
  double t2105;
  double t1781;
  double t1908;
  double t1961;
  double t1663;
  double t2115;
  double t2129;
  double t2138;
  double t2177;
  double t2015;
  double t2150;
  double t2155;
  double t1642;
  double t2225;
  double t2248;
  double t2281;
  double t2335;
  double t2165;
  double t2288;
  double t2298;
  double t1619;
  double t2346;
  double t2383;
  double t2406;
  double t2486;
  double t2305;
  double t2418;
  double t2443;
  double t1585;
  double t2495;
  double t2506;
  double t2510;
  double t1110;
  double t1135;
  double t1139;
  double t1251;
  double t1293;
  double t1328;
  double t1154;
  double t1385;
  double t1426;
  double t2693;
  double t2712;
  double t2719;
  double t2847;
  double t2874;
  double t2932;
  double t2804;
  double t3040;
  double t3089;
  double t3103;
  double t3107;
  double t3127;
  double t3102;
  double t3185;
  double t3236;
  double t3341;
  double t3346;
  double t3352;
  double t3328;
  double t3358;
  double t3362;
  double t3397;
  double t3402;
  double t3405;
  double t3396;
  double t3419;
  double t3439;
  double t3478;
  double t3481;
  double t3482;
  double t1507;
  double t1509;
  double t1520;
  double t3642;
  double t3655;
  double t3667;
  double t3680;
  double t3693;
  double t3696;
  double t3677;
  double t3723;
  double t3726;
  double t3751;
  double t3756;
  double t3761;
  double t3749;
  double t3762;
  double t3766;
  double t3840;
  double t3843;
  double t3870;
  double t3835;
  double t3872;
  double t3875;
  double t3932;
  double t3942;
  double t4027;
  double t3898;
  double t4035;
  double t4065;
  double t4096;
  double t4145;
  double t4160;
  double t2484;
  double t2521;
  double t2543;
  double t2613;
  double t2630;
  double t2660;
  double t3458;
  double t3489;
  double t3494;
  double t3505;
  double t3515;
  double t3519;
  double t4077;
  double t4189;
  double t4256;
  double t4292;
  double t4300;
  double t4316;
  double t4516;
  double t4527;
  double t4784;
  double t4809;
  double t4883;
  double t4888;
  double t4948;
  double t4949;
  double t5020;
  double t5033;
  double t5102;
  double t5116;
  double t4565;
  double t4566;
  double t4570;
  double t4640;
  double t4643;
  double t4692;
  double t4698;
  double t4700;
  double t4708;
  double t4715;
  double t4736;
  double t4780;
  double t4811;
  double t4822;
  double t4827;
  double t4859;
  double t4860;
  double t4861;
  double t4890;
  double t4895;
  double t4906;
  double t4912;
  double t4915;
  double t4930;
  double t4952;
  double t4957;
  double t4960;
  double t4985;
  double t5009;
  double t5011;
  double t5041;
  double t5047;
  double t5052;
  double t5074;
  double t5090;
  double t5098;
  double t5129;
  double t5140;
  double t5148;
  double t5183;
  double t5185;
  double t5187;
  t122 = Cos(var1[3]);
  t553 = Cos(var1[5]);
  t684 = Sin(var1[3]);
  t566 = Sin(var1[4]);
  t694 = Sin(var1[5]);
  t174 = Cos(var1[4]);
  t316 = Sin(var1[14]);
  t475 = Cos(var1[14]);
  t506 = Sin(var1[13]);
  t941 = Cos(var1[13]);
  t658 = t122*t553*t566;
  t745 = t684*t694;
  t842 = t658 + t745;
  t981 = -1.*t553*t684;
  t989 = t122*t566*t694;
  t1036 = t981 + t989;
  t901 = t506*t842;
  t1045 = t941*t1036;
  t1050 = t901 + t1045;
  t1793 = Cos(var1[15]);
  t1712 = t941*t842;
  t1714 = -1.*t506*t1036;
  t1725 = t1712 + t1714;
  t1668 = Sin(var1[15]);
  t1850 = t475*t122*t174;
  t1867 = t316*t1050;
  t1870 = t1850 + t1867;
  t2105 = Cos(var1[16]);
  t1781 = t1668*t1725;
  t1908 = t1793*t1870;
  t1961 = t1781 + t1908;
  t1663 = Sin(var1[16]);
  t2115 = t1793*t1725;
  t2129 = -1.*t1668*t1870;
  t2138 = t2115 + t2129;
  t2177 = Cos(var1[17]);
  t2015 = -1.*t1663*t1961;
  t2150 = t2105*t2138;
  t2155 = t2015 + t2150;
  t1642 = Sin(var1[17]);
  t2225 = t2105*t1961;
  t2248 = t1663*t2138;
  t2281 = t2225 + t2248;
  t2335 = Cos(var1[18]);
  t2165 = t1642*t2155;
  t2288 = t2177*t2281;
  t2298 = t2165 + t2288;
  t1619 = Sin(var1[18]);
  t2346 = t2177*t2155;
  t2383 = -1.*t1642*t2281;
  t2406 = t2346 + t2383;
  t2486 = Cos(var1[19]);
  t2305 = -1.*t1619*t2298;
  t2418 = t2335*t2406;
  t2443 = t2305 + t2418;
  t1585 = Sin(var1[19]);
  t2495 = t2335*t2298;
  t2506 = t1619*t2406;
  t2510 = t2495 + t2506;
  t1110 = t553*t684*t566;
  t1135 = -1.*t122*t694;
  t1139 = t1110 + t1135;
  t1251 = t122*t553;
  t1293 = t684*t566*t694;
  t1328 = t1251 + t1293;
  t1154 = t506*t1139;
  t1385 = t941*t1328;
  t1426 = t1154 + t1385;
  t2693 = t941*t1139;
  t2712 = -1.*t506*t1328;
  t2719 = t2693 + t2712;
  t2847 = t475*t174*t684;
  t2874 = t316*t1426;
  t2932 = t2847 + t2874;
  t2804 = t1668*t2719;
  t3040 = t1793*t2932;
  t3089 = t2804 + t3040;
  t3103 = t1793*t2719;
  t3107 = -1.*t1668*t2932;
  t3127 = t3103 + t3107;
  t3102 = -1.*t1663*t3089;
  t3185 = t2105*t3127;
  t3236 = t3102 + t3185;
  t3341 = t2105*t3089;
  t3346 = t1663*t3127;
  t3352 = t3341 + t3346;
  t3328 = t1642*t3236;
  t3358 = t2177*t3352;
  t3362 = t3328 + t3358;
  t3397 = t2177*t3236;
  t3402 = -1.*t1642*t3352;
  t3405 = t3397 + t3402;
  t3396 = -1.*t1619*t3362;
  t3419 = t2335*t3405;
  t3439 = t3396 + t3419;
  t3478 = t2335*t3362;
  t3481 = t1619*t3405;
  t3482 = t3478 + t3481;
  t1507 = t174*t553*t506;
  t1509 = t941*t174*t694;
  t1520 = t1507 + t1509;
  t3642 = t941*t174*t553;
  t3655 = -1.*t174*t506*t694;
  t3667 = t3642 + t3655;
  t3680 = -1.*t475*t566;
  t3693 = t316*t1520;
  t3696 = t3680 + t3693;
  t3677 = t1668*t3667;
  t3723 = t1793*t3696;
  t3726 = t3677 + t3723;
  t3751 = t1793*t3667;
  t3756 = -1.*t1668*t3696;
  t3761 = t3751 + t3756;
  t3749 = -1.*t1663*t3726;
  t3762 = t2105*t3761;
  t3766 = t3749 + t3762;
  t3840 = t2105*t3726;
  t3843 = t1663*t3761;
  t3870 = t3840 + t3843;
  t3835 = t1642*t3766;
  t3872 = t2177*t3870;
  t3875 = t3835 + t3872;
  t3932 = t2177*t3766;
  t3942 = -1.*t1642*t3870;
  t4027 = t3932 + t3942;
  t3898 = -1.*t1619*t3875;
  t4035 = t2335*t4027;
  t4065 = t3898 + t4035;
  t4096 = t2335*t3875;
  t4145 = t1619*t4027;
  t4160 = t4096 + t4145;
  t2484 = t1585*t2443;
  t2521 = t2486*t2510;
  t2543 = t2484 + t2521;
  t2613 = t2486*t2443;
  t2630 = -1.*t1585*t2510;
  t2660 = t2613 + t2630;
  t3458 = t1585*t3439;
  t3489 = t2486*t3482;
  t3494 = t3458 + t3489;
  t3505 = t2486*t3439;
  t3515 = -1.*t1585*t3482;
  t3519 = t3505 + t3515;
  t4077 = t1585*t4065;
  t4189 = t2486*t4160;
  t4256 = t4077 + t4189;
  t4292 = t2486*t4065;
  t4300 = -1.*t1585*t4160;
  t4316 = t4292 + t4300;
  t4516 = -1.*t475;
  t4527 = 1. + t4516;
  t4784 = -1.*t1793;
  t4809 = 1. + t4784;
  t4883 = -1.*t2105;
  t4888 = 1. + t4883;
  t4948 = -1.*t2177;
  t4949 = 1. + t4948;
  t5020 = -1.*t2335;
  t5033 = 1. + t5020;
  t5102 = -1.*t2486;
  t5116 = 1. + t5102;
  t4565 = -0.049*t4527;
  t4566 = -0.135*t316;
  t4570 = 0. + t4565 + t4566;
  t4640 = 0.135*t506;
  t4643 = 0. + t4640;
  t4692 = -1.*t941;
  t4698 = 1. + t4692;
  t4700 = -0.135*t4698;
  t4708 = 0. + t4700;
  t4715 = -0.135*t4527;
  t4736 = 0.049*t316;
  t4780 = 0. + t4715 + t4736;
  t4811 = -0.09*t4809;
  t4822 = 0.049*t1668;
  t4827 = 0. + t4811 + t4822;
  t4859 = -0.049*t4809;
  t4860 = -0.09*t1668;
  t4861 = 0. + t4859 + t4860;
  t4890 = -0.049*t4888;
  t4895 = -0.21*t1663;
  t4906 = 0. + t4890 + t4895;
  t4912 = -0.21*t4888;
  t4915 = 0.049*t1663;
  t4930 = 0. + t4912 + t4915;
  t4952 = -0.2707*t4949;
  t4957 = 0.0016*t1642;
  t4960 = 0. + t4952 + t4957;
  t4985 = -0.0016*t4949;
  t5009 = -0.2707*t1642;
  t5011 = 0. + t4985 + t5009;
  t5041 = 0.0184*t5033;
  t5047 = -0.7055*t1619;
  t5052 = 0. + t5041 + t5047;
  t5074 = -0.7055*t5033;
  t5090 = -0.0184*t1619;
  t5098 = 0. + t5074 + t5090;
  t5129 = -1.1135*t5116;
  t5140 = 0.0216*t1585;
  t5148 = 0. + t5129 + t5140;
  t5183 = -0.0216*t5116;
  t5185 = -1.1135*t1585;
  t5187 = 0. + t5183 + t5185;

  p_output1(0)=t122*t174*t316 - 1.*t1050*t475;
  p_output1(1)=-1.*t1426*t475 + t174*t316*t684;
  p_output1(2)=-1.*t1520*t475 - 1.*t316*t566;
  p_output1(3)=0.;
  p_output1(4)=0.642788*t2543 + 0.766044*t2660;
  p_output1(5)=0.642788*t3494 + 0.766044*t3519;
  p_output1(6)=0.642788*t4256 + 0.766044*t4316;
  p_output1(7)=0.;
  p_output1(8)=-0.766044*t2543 + 0.642788*t2660;
  p_output1(9)=-0.766044*t3494 + 0.642788*t3519;
  p_output1(10)=-0.766044*t4256 + 0.642788*t4316;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.088451*t2543 - 1.062256*t2660 + t122*t174*t4570 + t1036*t4708 - 0.1305*(-1.*t122*t174*t316 + t1050*t475) + t1050*t4780 + t1725*t4827 + t1870*t4861 + t1961*t4906 + t2138*t4930 + t2155*t4960 + t2281*t5011 + t2298*t5052 + t2406*t5098 + t2443*t5148 + t2510*t5187 + t4643*t842 + var1(0);
  p_output1(13)=0. + 0.088451*t3494 - 1.062256*t3519 + t1139*t4643 + t1328*t4708 + t1426*t4780 + t2719*t4827 + t2932*t4861 + t3089*t4906 + t3127*t4930 + t3236*t4960 + t3352*t5011 + t3362*t5052 + t3405*t5098 + t3439*t5148 + t3482*t5187 + t174*t4570*t684 - 0.1305*(t1426*t475 - 1.*t174*t316*t684) + var1(1);
  p_output1(14)=0. + 0.088451*t4256 - 1.062256*t4316 + t1520*t4780 + t3667*t4827 + t3696*t4861 + t3726*t4906 + t3761*t4930 + t3766*t4960 + t3870*t5011 + t3875*t5052 + t4027*t5098 + t4065*t5148 + t4160*t5187 + t174*t4643*t553 - 1.*t4570*t566 - 0.1305*(t1520*t475 + t316*t566) + t174*t4708*t694 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RightToeFront(const Eigen::Matrix<double,20,1> &var1)
//void H_RightToeFront(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



