/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:35:39 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jws_RightToeBottom_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t216;
  double t557;
  double t190;
  double t485;
  double t629;
  double t140;
  double t746;
  double t759;
  double t769;
  double t512;
  double t650;
  double t681;
  double t772;
  double t96;
  double t870;
  double t874;
  double t883;
  double t702;
  double t783;
  double t803;
  double t924;
  double t89;
  double t1019;
  double t1051;
  double t1071;
  double t837;
  double t938;
  double t981;
  double t1103;
  double t62;
  double t1313;
  double t1317;
  double t1332;
  double t983;
  double t1169;
  double t1252;
  double t1342;
  double t1537;
  double t1545;
  double t1580;
  double t1493;
  double t1504;
  double t1516;
  double t1684;
  double t1694;
  double t1699;
  double t1525;
  double t1621;
  double t1648;
  double t1852;
  double t1876;
  double t1881;
  double t1681;
  double t1744;
  double t1790;
  double t1959;
  double t1966;
  double t1968;
  double t1823;
  double t1917;
  double t1923;
  double t1269;
  double t1356;
  double t1364;
  double t1393;
  double t1402;
  double t1406;
  double t1937;
  double t1971;
  double t1987;
  double t1994;
  double t2018;
  double t2048;
  double t2165;
  double t2191;
  double t2202;
  double t2276;
  double t2342;
  double t2344;
  double t2423;
  double t2306;
  double t2313;
  double t2319;
  double t2490;
  double t2503;
  double t2536;
  double t2338;
  double t2429;
  double t2450;
  double t2574;
  double t2585;
  double t2657;
  double t2459;
  double t2541;
  double t2562;
  double t2141;
  double t2148;
  double t2161;
  double t1992;
  double t2049;
  double t2089;
  double t2568;
  double t2718;
  double t2727;
  double t2749;
  double t2750;
  double t2753;
  double t1389;
  double t1415;
  double t1461;
  double t2896;
  double t2902;
  double t2916;
  double t2747;
  double t2761;
  double t2773;
  double t2780;
  double t2822;
  double t2832;
  double t2844;
  double t2919;
  double t2941;
  double t2942;
  double t2958;
  double t2960;
  double t2962;
  double t2970;
  double t2973;
  double t2982;
  double t2987;
  double t3157;
  double t3161;
  double t3236;
  double t3237;
  double t3245;
  double t3191;
  double t3198;
  double t3229;
  double t3163;
  double t3377;
  double t2114;
  double t2206;
  double t2217;
  double t3382;
  double t3404;
  double t3281;
  double t3291;
  double t3309;
  double t3252;
  double t3254;
  double t3255;
  double t3414;
  double t3436;
  double t3012;
  double t3026;
  double t3047;
  double t3461;
  double t3471;
  double t3350;
  double t3355;
  double t3357;
  double t3322;
  double t3094;
  double t3109;
  double t3140;
  double t3410;
  double t3442;
  double t3472;
  double t3474;
  double t3475;
  double t3477;
  double t3499;
  double t3543;
  double t3555;
  double t3557;
  double t3559;
  double t3565;
  double t3696;
  double t3720;
  double t3742;
  double t3799;
  double t3808;
  double t3866;
  double t3869;
  double t3845;
  double t3857;
  double t3838;
  double t3862;
  double t3874;
  double t3875;
  double t3881;
  double t3893;
  double t3894;
  double t3901;
  double t3907;
  double t3908;
  double t3930;
  double t3948;
  t216 = Cos(var1[9]);
  t557 = Sin(var1[7]);
  t190 = Cos(var1[7]);
  t485 = Sin(var1[8]);
  t629 = Sin(var1[9]);
  t140 = Cos(var1[10]);
  t746 = -1.*t216*t557;
  t759 = -1.*t190*t485*t629;
  t769 = t746 + t759;
  t512 = t190*t216*t485;
  t650 = -1.*t557*t629;
  t681 = t512 + t650;
  t772 = Sin(var1[10]);
  t96 = Cos(var1[11]);
  t870 = t140*t769;
  t874 = -1.*t681*t772;
  t883 = t870 + t874;
  t702 = t140*t681;
  t783 = t769*t772;
  t803 = t702 + t783;
  t924 = Sin(var1[11]);
  t89 = Cos(var1[12]);
  t1019 = t96*t883;
  t1051 = -1.*t803*t924;
  t1071 = t1019 + t1051;
  t837 = t96*t803;
  t938 = t883*t924;
  t981 = t837 + t938;
  t1103 = Sin(var1[12]);
  t62 = Cos(var1[13]);
  t1313 = t89*t1071;
  t1317 = -1.*t981*t1103;
  t1332 = t1313 + t1317;
  t983 = t89*t981;
  t1169 = t1071*t1103;
  t1252 = t983 + t1169;
  t1342 = Sin(var1[13]);
  t1537 = t190*t216;
  t1545 = -1.*t557*t485*t629;
  t1580 = t1537 + t1545;
  t1493 = t216*t557*t485;
  t1504 = t190*t629;
  t1516 = t1493 + t1504;
  t1684 = t140*t1580;
  t1694 = -1.*t1516*t772;
  t1699 = t1684 + t1694;
  t1525 = t140*t1516;
  t1621 = t1580*t772;
  t1648 = t1525 + t1621;
  t1852 = t96*t1699;
  t1876 = -1.*t1648*t924;
  t1881 = t1852 + t1876;
  t1681 = t96*t1648;
  t1744 = t1699*t924;
  t1790 = t1681 + t1744;
  t1959 = t89*t1881;
  t1966 = -1.*t1790*t1103;
  t1968 = t1959 + t1966;
  t1823 = t89*t1790;
  t1917 = t1881*t1103;
  t1923 = t1823 + t1917;
  t1269 = t62*t1252;
  t1356 = t1332*t1342;
  t1364 = t1269 + t1356;
  t1393 = t62*t1332;
  t1402 = -1.*t1252*t1342;
  t1406 = t1393 + t1402;
  t1937 = t62*t1923;
  t1971 = t1968*t1342;
  t1987 = t1937 + t1971;
  t1994 = t62*t1968;
  t2018 = -1.*t1923*t1342;
  t2048 = t1994 + t2018;
  t2165 = 0.642788*t1987;
  t2191 = 0.766044*t2048;
  t2202 = t2165 + t2191;
  t2276 = Cos(var1[8]);
  t2342 = -1.*t2276*t140*t629;
  t2344 = -1.*t2276*t216*t772;
  t2423 = t2342 + t2344;
  t2306 = t2276*t216*t140;
  t2313 = -1.*t2276*t629*t772;
  t2319 = t2306 + t2313;
  t2490 = t96*t2423;
  t2503 = -1.*t2319*t924;
  t2536 = t2490 + t2503;
  t2338 = t96*t2319;
  t2429 = t2423*t924;
  t2450 = t2338 + t2429;
  t2574 = t89*t2536;
  t2585 = -1.*t2450*t1103;
  t2657 = t2574 + t2585;
  t2459 = t89*t2450;
  t2541 = t2536*t1103;
  t2562 = t2459 + t2541;
  t2141 = -0.766044*t1364;
  t2148 = 0.642788*t1406;
  t2161 = t2141 + t2148;
  t1992 = -0.766044*t1987;
  t2049 = 0.642788*t2048;
  t2089 = t1992 + t2049;
  t2568 = t62*t2562;
  t2718 = t2657*t1342;
  t2727 = t2568 + t2718;
  t2749 = t62*t2657;
  t2750 = -1.*t2562*t1342;
  t2753 = t2749 + t2750;
  t1389 = 0.642788*t1364;
  t1415 = 0.766044*t1406;
  t1461 = t1389 + t1415;
  t2896 = 0.642788*t2727;
  t2902 = 0.766044*t2753;
  t2916 = t2896 + t2902;
  t2747 = -0.766044*t2727;
  t2761 = 0.642788*t2753;
  t2773 = t2747 + t2761;
  t2780 = t190*t2276*t2773;
  t2822 = t485*t2161;
  t2832 = t2780 + t2822;
  t2844 = -1.*t2202*t2832;
  t2919 = t190*t2276*t2916;
  t2941 = t485*t1461;
  t2942 = t2919 + t2941;
  t2958 = t2089*t2942;
  t2960 = t2916*t2161;
  t2962 = -1.*t2773*t1461;
  t2970 = t2960 + t2962;
  t2973 = -1.*t2276*t557*t2970;
  t2982 = 0. + t2844 + t2958 + t2973;
  t2987 = 1/t2982;
  t3157 = Cos(var1[0]);
  t3161 = 0. + t3157;
  t3236 = Sin(var1[0]);
  t3237 = -1.*t3236;
  t3245 = 0. + t3237;
  t3191 = -1.*t2916*t2089;
  t3198 = t2773*t2202;
  t3229 = 0. + t3191 + t3198;
  t3163 = 0. + t2960 + t2962;
  t3377 = Cos(var1[1]);
  t2114 = t1461*t2089;
  t2206 = -1.*t2161*t2202;
  t2217 = 0. + t2114 + t2206;
  t3382 = -1.*t3157*t3377;
  t3404 = 0. + t3382;
  t3281 = t2276*t557*t2773;
  t3291 = t485*t2089;
  t3309 = 0. + t3281 + t3291;
  t3252 = -1.*t190*t2276*t2773;
  t3254 = -1.*t485*t2161;
  t3255 = 0. + t3252 + t3254;
  t3414 = -1.*t3377*t3236;
  t3436 = 0. + t3414;
  t3012 = -1.*t2276*t557*t2161;
  t3026 = t190*t2276*t2089;
  t3047 = 0. + t3012 + t3026;
  t3461 = Sin(var1[1]);
  t3471 = 0. + t3461;
  t3350 = -1.*t2276*t557*t2916;
  t3355 = -1.*t485*t2202;
  t3357 = 0. + t3350 + t3355;
  t3322 = 0. + t2919 + t2941;
  t3094 = t2276*t557*t1461;
  t3109 = -1.*t190*t2276*t2202;
  t3140 = 0. + t3094 + t3109;
  t3410 = t3404*t3229*t2987;
  t3442 = t3163*t2987*t3436;
  t3472 = t2217*t2987*t3471;
  t3474 = t3410 + t3442 + t3472;
  t3475 = t3404*t3309*t2987;
  t3477 = t3255*t2987*t3436;
  t3499 = t3047*t2987*t3471;
  t3543 = t3475 + t3477 + t3499;
  t3555 = t3404*t3357*t2987;
  t3557 = t3322*t2987*t3436;
  t3559 = t3140*t2987*t3471;
  t3565 = t3555 + t3557 + t3559;
  t3696 = -1.*t190;
  t3720 = 0. + t3696;
  t3742 = 0. + t557;
  t3799 = t2276*t557;
  t3808 = 0. + t3799;
  t3866 = -1.*t485;
  t3869 = 0. + t3866;
  t3845 = t190*t2276;
  t3857 = 0. + t3845;
  t3838 = t3808*t3163*t2987;
  t3862 = t3857*t3229*t2987;
  t3874 = t3869*t2217*t2987;
  t3875 = t3838 + t3862 + t3874;
  t3881 = t3808*t3255*t2987;
  t3893 = t3869*t3047*t2987;
  t3894 = t3857*t3309*t2987;
  t3901 = t3881 + t3893 + t3894;
  t3907 = t3808*t3322*t2987;
  t3908 = t3869*t3140*t2987;
  t3930 = t3857*t3357*t2987;
  t3948 = t3907 + t3908 + t3930;

  p_output1(0)=0. + t2217*t2987;
  p_output1(1)=0. + t2987*t3047;
  p_output1(2)=0. + t2987*t3140;
  p_output1(3)=0. + t2987*t3161*t3163 + t2987*t3229*t3245;
  p_output1(4)=0. + t2987*t3161*t3255 + t2987*t3245*t3309;
  p_output1(5)=0. + t2987*t3161*t3322 + t2987*t3245*t3357;
  p_output1(6)=t3474;
  p_output1(7)=t3543;
  p_output1(8)=t3565;
  p_output1(9)=t3474;
  p_output1(10)=t3543;
  p_output1(11)=t3565;
  p_output1(12)=t3474;
  p_output1(13)=t3543;
  p_output1(14)=t3565;
  p_output1(15)=t3474;
  p_output1(16)=t3543;
  p_output1(17)=t3565;
  p_output1(18)=t3474;
  p_output1(19)=t3543;
  p_output1(20)=t3565;
  p_output1(21)=0. - 1.*t2217*t2987;
  p_output1(22)=0. - 1.*t2987*t3047;
  p_output1(23)=0. - 1.*t2987*t3140;
  p_output1(24)=0. + t2987*t3163*t3720 + t2987*t3229*t3742;
  p_output1(25)=0. + t2987*t3255*t3720 + t2987*t3309*t3742;
  p_output1(26)=0. + t2987*t3322*t3720 + t2987*t3357*t3742;
  p_output1(27)=t3875;
  p_output1(28)=t3901;
  p_output1(29)=t3948;
  p_output1(30)=t3875;
  p_output1(31)=t3901;
  p_output1(32)=t3948;
  p_output1(33)=t3875;
  p_output1(34)=t3901;
  p_output1(35)=t3948;
  p_output1(36)=t3875;
  p_output1(37)=t3901;
  p_output1(38)=t3948;
  p_output1(39)=t3875;
  p_output1(40)=t3901;
  p_output1(41)=t3948;
}


       
Eigen::Matrix<double,3,14> Jws_RightToeBottom_to_LeftToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void Jws_RightToeBottom_to_LeftToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



