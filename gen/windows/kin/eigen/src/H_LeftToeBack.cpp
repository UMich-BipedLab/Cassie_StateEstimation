/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:22:54 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeBack.h"

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
  double t430;
  double t199;
  double t438;
  double t407;
  double t444;
  double t9;
  double t72;
  double t646;
  double t715;
  double t730;
  double t422;
  double t523;
  double t573;
  double t576;
  double t612;
  double t623;
  double t631;
  double t668;
  double t678;
  double t1382;
  double t1416;
  double t1436;
  double t1446;
  double t1388;
  double t1390;
  double t1397;
  double t1452;
  double t1495;
  double t1411;
  double t1458;
  double t1466;
  double t1339;
  double t1505;
  double t1510;
  double t1525;
  double t1643;
  double t1481;
  double t1598;
  double t1609;
  double t1302;
  double t1650;
  double t1693;
  double t1708;
  double t1798;
  double t1638;
  double t1727;
  double t1730;
  double t1273;
  double t1804;
  double t1809;
  double t1817;
  double t1887;
  double t1771;
  double t1834;
  double t1842;
  double t1268;
  double t1894;
  double t1927;
  double t1931;
  double t863;
  double t870;
  double t882;
  double t888;
  double t893;
  double t910;
  double t931;
  double t1008;
  double t1032;
  double t2184;
  double t2187;
  double t2196;
  double t2085;
  double t2099;
  double t2128;
  double t2152;
  double t2212;
  double t2227;
  double t2246;
  double t2251;
  double t2261;
  double t2235;
  double t2270;
  double t2275;
  double t2363;
  double t2423;
  double t2427;
  double t2309;
  double t2431;
  double t2454;
  double t2480;
  double t2512;
  double t2515;
  double t2459;
  double t2522;
  double t2529;
  double t2544;
  double t2549;
  double t2583;
  double t1122;
  double t1212;
  double t1224;
  double t2791;
  double t2814;
  double t2819;
  double t2739;
  double t2755;
  double t2758;
  double t2785;
  double t2834;
  double t2835;
  double t2877;
  double t2891;
  double t2918;
  double t2876;
  double t2947;
  double t2964;
  double t3031;
  double t3047;
  double t3057;
  double t2998;
  double t3059;
  double t3086;
  double t3093;
  double t3100;
  double t3112;
  double t3090;
  double t3121;
  double t3124;
  double t3133;
  double t3186;
  double t3195;
  double t1859;
  double t1948;
  double t1962;
  double t2005;
  double t2017;
  double t2031;
  double t2532;
  double t2615;
  double t2636;
  double t2670;
  double t2680;
  double t2695;
  double t3132;
  double t3224;
  double t3239;
  double t3261;
  double t3265;
  double t3280;
  double t3487;
  double t3492;
  double t3674;
  double t3701;
  double t3774;
  double t3784;
  double t3830;
  double t3832;
  double t3941;
  double t3945;
  double t3999;
  double t4002;
  double t3434;
  double t3438;
  double t3441;
  double t3444;
  double t3452;
  double t3454;
  double t3495;
  double t3498;
  double t3502;
  double t3530;
  double t3538;
  double t3540;
  double t3710;
  double t3713;
  double t3729;
  double t3735;
  double t3739;
  double t3752;
  double t3789;
  double t3794;
  double t3804;
  double t3809;
  double t3820;
  double t3824;
  double t3859;
  double t3895;
  double t3904;
  double t3907;
  double t3917;
  double t3921;
  double t3949;
  double t3952;
  double t3961;
  double t3967;
  double t3969;
  double t3988;
  double t4005;
  double t4014;
  double t4015;
  double t4040;
  double t4054;
  double t4063;
  t430 = Cos(var1[3]);
  t199 = Cos(var1[5]);
  t438 = Sin(var1[4]);
  t407 = Sin(var1[3]);
  t444 = Sin(var1[5]);
  t9 = Cos(var1[7]);
  t72 = Cos(var1[6]);
  t646 = Sin(var1[6]);
  t715 = Cos(var1[4]);
  t730 = Sin(var1[7]);
  t422 = -1.*t199*t407;
  t523 = t430*t438*t444;
  t573 = t422 + t523;
  t576 = t72*t573;
  t612 = t430*t199*t438;
  t623 = t407*t444;
  t631 = t612 + t623;
  t668 = t631*t646;
  t678 = t576 + t668;
  t1382 = Cos(var1[8]);
  t1416 = t72*t631;
  t1436 = -1.*t573*t646;
  t1446 = t1416 + t1436;
  t1388 = t430*t715*t9;
  t1390 = t678*t730;
  t1397 = t1388 + t1390;
  t1452 = Sin(var1[8]);
  t1495 = Cos(var1[9]);
  t1411 = t1382*t1397;
  t1458 = t1446*t1452;
  t1466 = t1411 + t1458;
  t1339 = Sin(var1[9]);
  t1505 = t1382*t1446;
  t1510 = -1.*t1397*t1452;
  t1525 = t1505 + t1510;
  t1643 = Cos(var1[10]);
  t1481 = -1.*t1339*t1466;
  t1598 = t1495*t1525;
  t1609 = t1481 + t1598;
  t1302 = Sin(var1[10]);
  t1650 = t1495*t1466;
  t1693 = t1339*t1525;
  t1708 = t1650 + t1693;
  t1798 = Cos(var1[11]);
  t1638 = t1302*t1609;
  t1727 = t1643*t1708;
  t1730 = t1638 + t1727;
  t1273 = Sin(var1[11]);
  t1804 = t1643*t1609;
  t1809 = -1.*t1302*t1708;
  t1817 = t1804 + t1809;
  t1887 = Cos(var1[12]);
  t1771 = -1.*t1273*t1730;
  t1834 = t1798*t1817;
  t1842 = t1771 + t1834;
  t1268 = Sin(var1[12]);
  t1894 = t1798*t1730;
  t1927 = t1273*t1817;
  t1931 = t1894 + t1927;
  t863 = t430*t199;
  t870 = t407*t438*t444;
  t882 = t863 + t870;
  t888 = t72*t882;
  t893 = t199*t407*t438;
  t910 = -1.*t430*t444;
  t931 = t893 + t910;
  t1008 = t931*t646;
  t1032 = t888 + t1008;
  t2184 = t72*t931;
  t2187 = -1.*t882*t646;
  t2196 = t2184 + t2187;
  t2085 = t715*t9*t407;
  t2099 = t1032*t730;
  t2128 = t2085 + t2099;
  t2152 = t1382*t2128;
  t2212 = t2196*t1452;
  t2227 = t2152 + t2212;
  t2246 = t1382*t2196;
  t2251 = -1.*t2128*t1452;
  t2261 = t2246 + t2251;
  t2235 = -1.*t1339*t2227;
  t2270 = t1495*t2261;
  t2275 = t2235 + t2270;
  t2363 = t1495*t2227;
  t2423 = t1339*t2261;
  t2427 = t2363 + t2423;
  t2309 = t1302*t2275;
  t2431 = t1643*t2427;
  t2454 = t2309 + t2431;
  t2480 = t1643*t2275;
  t2512 = -1.*t1302*t2427;
  t2515 = t2480 + t2512;
  t2459 = -1.*t1273*t2454;
  t2522 = t1798*t2515;
  t2529 = t2459 + t2522;
  t2544 = t1798*t2454;
  t2549 = t1273*t2515;
  t2583 = t2544 + t2549;
  t1122 = t715*t72*t444;
  t1212 = t715*t199*t646;
  t1224 = t1122 + t1212;
  t2791 = t715*t199*t72;
  t2814 = -1.*t715*t444*t646;
  t2819 = t2791 + t2814;
  t2739 = -1.*t9*t438;
  t2755 = t1224*t730;
  t2758 = t2739 + t2755;
  t2785 = t1382*t2758;
  t2834 = t2819*t1452;
  t2835 = t2785 + t2834;
  t2877 = t1382*t2819;
  t2891 = -1.*t2758*t1452;
  t2918 = t2877 + t2891;
  t2876 = -1.*t1339*t2835;
  t2947 = t1495*t2918;
  t2964 = t2876 + t2947;
  t3031 = t1495*t2835;
  t3047 = t1339*t2918;
  t3057 = t3031 + t3047;
  t2998 = t1302*t2964;
  t3059 = t1643*t3057;
  t3086 = t2998 + t3059;
  t3093 = t1643*t2964;
  t3100 = -1.*t1302*t3057;
  t3112 = t3093 + t3100;
  t3090 = -1.*t1273*t3086;
  t3121 = t1798*t3112;
  t3124 = t3090 + t3121;
  t3133 = t1798*t3086;
  t3186 = t1273*t3112;
  t3195 = t3133 + t3186;
  t1859 = t1268*t1842;
  t1948 = t1887*t1931;
  t1962 = t1859 + t1948;
  t2005 = t1887*t1842;
  t2017 = -1.*t1268*t1931;
  t2031 = t2005 + t2017;
  t2532 = t1268*t2529;
  t2615 = t1887*t2583;
  t2636 = t2532 + t2615;
  t2670 = t1887*t2529;
  t2680 = -1.*t1268*t2583;
  t2695 = t2670 + t2680;
  t3132 = t1268*t3124;
  t3224 = t1887*t3195;
  t3239 = t3132 + t3224;
  t3261 = t1887*t3124;
  t3265 = -1.*t1268*t3195;
  t3280 = t3261 + t3265;
  t3487 = -1.*t9;
  t3492 = 1. + t3487;
  t3674 = -1.*t1382;
  t3701 = 1. + t3674;
  t3774 = -1.*t1495;
  t3784 = 1. + t3774;
  t3830 = -1.*t1643;
  t3832 = 1. + t3830;
  t3941 = -1.*t1798;
  t3945 = 1. + t3941;
  t3999 = -1.*t1887;
  t4002 = 1. + t3999;
  t3434 = -1.*t72;
  t3438 = 1. + t3434;
  t3441 = 0.135*t3438;
  t3444 = 0. + t3441;
  t3452 = -0.135*t646;
  t3454 = 0. + t3452;
  t3495 = 0.135*t3492;
  t3498 = 0.049*t730;
  t3502 = 0. + t3495 + t3498;
  t3530 = -0.049*t3492;
  t3538 = 0.135*t730;
  t3540 = 0. + t3530 + t3538;
  t3710 = -0.049*t3701;
  t3713 = -0.09*t1452;
  t3729 = 0. + t3710 + t3713;
  t3735 = -0.09*t3701;
  t3739 = 0.049*t1452;
  t3752 = 0. + t3735 + t3739;
  t3789 = -0.049*t3784;
  t3794 = -0.21*t1339;
  t3804 = 0. + t3789 + t3794;
  t3809 = -0.21*t3784;
  t3820 = 0.049*t1339;
  t3824 = 0. + t3809 + t3820;
  t3859 = -0.2707*t3832;
  t3895 = 0.0016*t1302;
  t3904 = 0. + t3859 + t3895;
  t3907 = -0.0016*t3832;
  t3917 = -0.2707*t1302;
  t3921 = 0. + t3907 + t3917;
  t3949 = 0.0184*t3945;
  t3952 = -0.7055*t1273;
  t3961 = 0. + t3949 + t3952;
  t3967 = -0.7055*t3945;
  t3969 = -0.0184*t1273;
  t3988 = 0. + t3967 + t3969;
  t4005 = -1.1135*t4002;
  t4014 = 0.0216*t1268;
  t4015 = 0. + t4005 + t4014;
  t4040 = -0.0216*t4002;
  t4054 = -1.1135*t1268;
  t4063 = 0. + t4040 + t4054;

  p_output1(0)=t430*t715*t730 - 1.*t678*t9;
  p_output1(1)=t407*t715*t730 - 1.*t1032*t9;
  p_output1(2)=-1.*t438*t730 - 1.*t1224*t9;
  p_output1(3)=0.;
  p_output1(4)=0.642788*t1962 + 0.766044*t2031;
  p_output1(5)=0.642788*t2636 + 0.766044*t2695;
  p_output1(6)=0.642788*t3239 + 0.766044*t3280;
  p_output1(7)=0.;
  p_output1(8)=-0.766044*t1962 + 0.642788*t2031;
  p_output1(9)=-0.766044*t2636 + 0.642788*t2695;
  p_output1(10)=-0.766044*t3239 + 0.642788*t3280;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.027251*t1962 - 1.200144*t2031 + t1397*t3729 + t1446*t3752 + t1466*t3804 + t1525*t3824 + t1609*t3904 + t1708*t3921 + t1730*t3961 + t1817*t3988 + t1842*t4015 + t1931*t4063 + t3444*t573 + t3454*t631 + t3502*t678 + t3540*t430*t715 + 0.1305*(-1.*t430*t715*t730 + t678*t9) + var1(0);
  p_output1(13)=0. - 0.027251*t2636 - 1.200144*t2695 + t1032*t3502 + t2128*t3729 + t2196*t3752 + t2227*t3804 + t2261*t3824 + t2275*t3904 + t2427*t3921 + t2454*t3961 + t2515*t3988 + t2529*t4015 + t2583*t4063 + t3540*t407*t715 + t3444*t882 + 0.1305*(-1.*t407*t715*t730 + t1032*t9) + t3454*t931 + var1(1);
  p_output1(14)=0. - 0.027251*t3239 - 1.200144*t3280 + t1224*t3502 + t2758*t3729 + t2819*t3752 + t2835*t3804 + t2918*t3824 + t2964*t3904 + t3057*t3921 + t3086*t3961 + t3112*t3988 + t3124*t4015 + t3195*t4063 - 1.*t3540*t438 + t199*t3454*t715 + t3444*t444*t715 + 0.1305*(t438*t730 + t1224*t9) + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_LeftToeBack(const Eigen::Matrix<double,20,1> &var1)
//void H_LeftToeBack(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



