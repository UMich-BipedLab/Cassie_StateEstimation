/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:10:27 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBack.h"

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
  double t204;
  double t140;
  double t298;
  double t152;
  double t548;
  double t34;
  double t135;
  double t840;
  double t1048;
  double t1051;
  double t185;
  double t623;
  double t668;
  double t679;
  double t710;
  double t738;
  double t772;
  double t870;
  double t893;
  double t1834;
  double t1962;
  double t1964;
  double t2005;
  double t1884;
  double t1894;
  double t1901;
  double t2031;
  double t2153;
  double t1948;
  double t2037;
  double t2044;
  double t1804;
  double t2164;
  double t2168;
  double t2172;
  double t2261;
  double t2085;
  double t2196;
  double t2212;
  double t1739;
  double t2270;
  double t2275;
  double t2309;
  double t2515;
  double t2246;
  double t2423;
  double t2431;
  double t1729;
  double t2522;
  double t2529;
  double t2531;
  double t2615;
  double t2480;
  double t2532;
  double t2544;
  double t1693;
  double t2636;
  double t2662;
  double t2667;
  double t1077;
  double t1212;
  double t1226;
  double t1235;
  double t1247;
  double t1274;
  double t1282;
  double t1300;
  double t1388;
  double t3022;
  double t3031;
  double t3047;
  double t2947;
  double t2974;
  double t2998;
  double t3002;
  double t3081;
  double t3093;
  double t3121;
  double t3132;
  double t3133;
  double t3112;
  double t3163;
  double t3224;
  double t3257;
  double t3280;
  double t3282;
  double t3249;
  double t3291;
  double t3302;
  double t3311;
  double t3335;
  double t3337;
  double t3309;
  double t3338;
  double t3363;
  double t3390;
  double t3441;
  double t3450;
  double t1446;
  double t1458;
  double t1469;
  double t3621;
  double t3637;
  double t3643;
  double t3536;
  double t3538;
  double t3576;
  double t3602;
  double t3671;
  double t3687;
  double t3713;
  double t3728;
  double t3729;
  double t3710;
  double t3730;
  double t3735;
  double t3752;
  double t3770;
  double t3773;
  double t3739;
  double t3789;
  double t3794;
  double t3806;
  double t3809;
  double t3820;
  double t3804;
  double t3824;
  double t3827;
  double t3895;
  double t3897;
  double t3904;
  double t2549;
  double t2695;
  double t2729;
  double t2755;
  double t2785;
  double t2791;
  double t3384;
  double t3452;
  double t3454;
  double t3495;
  double t3498;
  double t3511;
  double t3859;
  double t3905;
  double t3907;
  double t3921;
  double t3925;
  double t3935;
  t204 = Cos(var1[3]);
  t140 = Cos(var1[5]);
  t298 = Sin(var1[4]);
  t152 = Sin(var1[3]);
  t548 = Sin(var1[5]);
  t34 = Cos(var1[7]);
  t135 = Cos(var1[6]);
  t840 = Sin(var1[6]);
  t1048 = Cos(var1[4]);
  t1051 = Sin(var1[7]);
  t185 = -1.*t140*t152;
  t623 = t204*t298*t548;
  t668 = t185 + t623;
  t679 = t135*t668;
  t710 = t204*t140*t298;
  t738 = t152*t548;
  t772 = t710 + t738;
  t870 = t772*t840;
  t893 = t679 + t870;
  t1834 = Cos(var1[8]);
  t1962 = t135*t772;
  t1964 = -1.*t668*t840;
  t2005 = t1962 + t1964;
  t1884 = t204*t1048*t34;
  t1894 = t893*t1051;
  t1901 = t1884 + t1894;
  t2031 = Sin(var1[8]);
  t2153 = Cos(var1[9]);
  t1948 = t1834*t1901;
  t2037 = t2005*t2031;
  t2044 = t1948 + t2037;
  t1804 = Sin(var1[9]);
  t2164 = t1834*t2005;
  t2168 = -1.*t1901*t2031;
  t2172 = t2164 + t2168;
  t2261 = Cos(var1[10]);
  t2085 = -1.*t1804*t2044;
  t2196 = t2153*t2172;
  t2212 = t2085 + t2196;
  t1739 = Sin(var1[10]);
  t2270 = t2153*t2044;
  t2275 = t1804*t2172;
  t2309 = t2270 + t2275;
  t2515 = Cos(var1[11]);
  t2246 = t1739*t2212;
  t2423 = t2261*t2309;
  t2431 = t2246 + t2423;
  t1729 = Sin(var1[11]);
  t2522 = t2261*t2212;
  t2529 = -1.*t1739*t2309;
  t2531 = t2522 + t2529;
  t2615 = Cos(var1[12]);
  t2480 = -1.*t1729*t2431;
  t2532 = t2515*t2531;
  t2544 = t2480 + t2532;
  t1693 = Sin(var1[12]);
  t2636 = t2515*t2431;
  t2662 = t1729*t2531;
  t2667 = t2636 + t2662;
  t1077 = t204*t140;
  t1212 = t152*t298*t548;
  t1226 = t1077 + t1212;
  t1235 = t135*t1226;
  t1247 = t140*t152*t298;
  t1274 = -1.*t204*t548;
  t1282 = t1247 + t1274;
  t1300 = t1282*t840;
  t1388 = t1235 + t1300;
  t3022 = t135*t1282;
  t3031 = -1.*t1226*t840;
  t3047 = t3022 + t3031;
  t2947 = t1048*t34*t152;
  t2974 = t1388*t1051;
  t2998 = t2947 + t2974;
  t3002 = t1834*t2998;
  t3081 = t3047*t2031;
  t3093 = t3002 + t3081;
  t3121 = t1834*t3047;
  t3132 = -1.*t2998*t2031;
  t3133 = t3121 + t3132;
  t3112 = -1.*t1804*t3093;
  t3163 = t2153*t3133;
  t3224 = t3112 + t3163;
  t3257 = t2153*t3093;
  t3280 = t1804*t3133;
  t3282 = t3257 + t3280;
  t3249 = t1739*t3224;
  t3291 = t2261*t3282;
  t3302 = t3249 + t3291;
  t3311 = t2261*t3224;
  t3335 = -1.*t1739*t3282;
  t3337 = t3311 + t3335;
  t3309 = -1.*t1729*t3302;
  t3338 = t2515*t3337;
  t3363 = t3309 + t3338;
  t3390 = t2515*t3302;
  t3441 = t1729*t3337;
  t3450 = t3390 + t3441;
  t1446 = t1048*t135*t548;
  t1458 = t1048*t140*t840;
  t1469 = t1446 + t1458;
  t3621 = t1048*t140*t135;
  t3637 = -1.*t1048*t548*t840;
  t3643 = t3621 + t3637;
  t3536 = -1.*t34*t298;
  t3538 = t1469*t1051;
  t3576 = t3536 + t3538;
  t3602 = t1834*t3576;
  t3671 = t3643*t2031;
  t3687 = t3602 + t3671;
  t3713 = t1834*t3643;
  t3728 = -1.*t3576*t2031;
  t3729 = t3713 + t3728;
  t3710 = -1.*t1804*t3687;
  t3730 = t2153*t3729;
  t3735 = t3710 + t3730;
  t3752 = t2153*t3687;
  t3770 = t1804*t3729;
  t3773 = t3752 + t3770;
  t3739 = t1739*t3735;
  t3789 = t2261*t3773;
  t3794 = t3739 + t3789;
  t3806 = t2261*t3735;
  t3809 = -1.*t1739*t3773;
  t3820 = t3806 + t3809;
  t3804 = -1.*t1729*t3794;
  t3824 = t2515*t3820;
  t3827 = t3804 + t3824;
  t3895 = t2515*t3794;
  t3897 = t1729*t3820;
  t3904 = t3895 + t3897;
  t2549 = t1693*t2544;
  t2695 = t2615*t2667;
  t2729 = t2549 + t2695;
  t2755 = t2615*t2544;
  t2785 = -1.*t1693*t2667;
  t2791 = t2755 + t2785;
  t3384 = t1693*t3363;
  t3452 = t2615*t3450;
  t3454 = t3384 + t3452;
  t3495 = t2615*t3363;
  t3498 = -1.*t1693*t3450;
  t3511 = t3495 + t3498;
  t3859 = t1693*t3827;
  t3905 = t2615*t3904;
  t3907 = t3859 + t3905;
  t3921 = t2615*t3827;
  t3925 = -1.*t1693*t3904;
  t3935 = t3921 + t3925;

  p_output1(0)=t1048*t1051*t204 - 1.*t34*t893;
  p_output1(1)=t1048*t1051*t152 - 1.*t1388*t34;
  p_output1(2)=-1.*t1051*t298 - 1.*t1469*t34;
  p_output1(3)=0.642788*t2729 + 0.766044*t2791;
  p_output1(4)=0.642788*t3454 + 0.766044*t3511;
  p_output1(5)=0.642788*t3907 + 0.766044*t3935;
  p_output1(6)=-0.766044*t2729 + 0.642788*t2791;
  p_output1(7)=-0.766044*t3454 + 0.642788*t3511;
  p_output1(8)=-0.766044*t3907 + 0.642788*t3935;
}


       
Eigen::Matrix<double,3,3> R_LeftToeBack(const Eigen::Matrix<double,20,1> &var1)
//void R_LeftToeBack(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



