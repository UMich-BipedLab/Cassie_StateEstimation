/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:11:20 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottom_to_LeftToeBottom_src.h"

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
  double t683;
  double t866;
  double t916;
  double t807;
  double t965;
  double t492;
  double t1132;
  double t1183;
  double t1301;
  double t882;
  double t976;
  double t1086;
  double t1303;
  double t346;
  double t1453;
  double t1486;
  double t1625;
  double t1122;
  double t1345;
  double t1365;
  double t1626;
  double t325;
  double t1831;
  double t1834;
  double t1847;
  double t1394;
  double t1672;
  double t1754;
  double t1864;
  double t2224;
  double t2179;
  double t2206;
  double t2269;
  double t2340;
  double t2355;
  double t2216;
  double t2235;
  double t2267;
  double t2542;
  double t2606;
  double t2611;
  double t2268;
  double t2378;
  double t2438;
  double t2837;
  double t2849;
  double t2903;
  double t2450;
  double t2752;
  double t2753;
  double t3009;
  double t3072;
  double t3080;
  double t2782;
  double t2940;
  double t2967;
  double t1768;
  double t1873;
  double t1895;
  double t1957;
  double t2065;
  double t2092;
  double t2980;
  double t3148;
  double t3169;
  double t3225;
  double t3238;
  double t3254;
  double t3407;
  double t3409;
  double t3456;
  double t3360;
  double t3380;
  double t3395;
  double t3555;
  double t3586;
  double t3590;
  double t3533;
  double t3541;
  double t3543;
  double t3757;
  double t3822;
  double t3826;
  double t3545;
  double t3612;
  double t3618;
  double t3922;
  double t3948;
  double t4011;
  double t3701;
  double t3829;
  double t3864;
  double t4166;
  double t4290;
  double t4321;
  double t3897;
  double t4028;
  double t4131;
  double t3195;
  double t3285;
  double t3327;
  double t1919;
  double t2123;
  double t2168;
  double t4137;
  double t4329;
  double t4413;
  double t4431;
  double t4464;
  double t4515;
  double t4420;
  double t4525;
  double t4583;
  double t4926;
  double t4940;
  double t4975;
  double t289;
  double t5099;
  double t5103;
  double t3502;
  double t4620;
  double t4649;
  double t4833;
  double t4894;
  double t4989;
  double t5003;
  double t5064;
  double t5139;
  double t5158;
  double t5173;
  double t5343;
  double t273;
  double t5348;
  double t5465;
  double t5408;
  double t5419;
  double t5425;
  double t5964;
  double t5925;
  double t5948;
  double t5971;
  double t5997;
  double t5963;
  double t5986;
  double t5989;
  double t5918;
  double t6000;
  double t6008;
  double t6032;
  double t6070;
  double t5995;
  double t6052;
  double t6061;
  double t5914;
  double t6076;
  double t6078;
  double t6081;
  double t6200;
  double t6067;
  double t6107;
  double t6144;
  double t5913;
  double t6206;
  double t6215;
  double t6233;
  double t3357;
  double t3495;
  double t3501;
  double t6366;
  double t6368;
  double t6371;
  double t6376;
  double t6383;
  double t6394;
  double t6374;
  double t6399;
  double t6404;
  double t6414;
  double t6423;
  double t6426;
  double t6412;
  double t6428;
  double t6436;
  double t6447;
  double t6451;
  double t6455;
  double t6437;
  double t6459;
  double t6468;
  double t6482;
  double t6485;
  double t6490;
  double t5346;
  double t6561;
  double t6579;
  double t6582;
  double t6597;
  double t6615;
  double t6627;
  double t6583;
  double t6636;
  double t6651;
  double t6668;
  double t6675;
  double t6679;
  double t6653;
  double t6680;
  double t6683;
  double t6704;
  double t6706;
  double t6719;
  double t6698;
  double t6733;
  double t6734;
  double t6736;
  double t6739;
  double t6746;
  double t5630;
  double t5638;
  double t5644;
  double t6194;
  double t6237;
  double t6255;
  double t6257;
  double t6258;
  double t6279;
  double t6290;
  double t6303;
  double t6341;
  double t5491;
  double t5497;
  double t5498;
  double t6476;
  double t6510;
  double t6513;
  double t6517;
  double t6524;
  double t6531;
  double t6541;
  double t6542;
  double t6552;
  double t5532;
  double t5566;
  double t5592;
  double t6735;
  double t6749;
  double t6755;
  double t6758;
  double t6765;
  double t6768;
  double t6769;
  double t6782;
  double t6785;
  double t5845;
  double t5858;
  double t5866;
  double t5750;
  double t5751;
  double t5764;
  double t5779;
  double t6874;
  double t6883;
  double t6887;
  double t6892;
  double t6896;
  double t6899;
  double t6903;
  double t6906;
  double t6908;
  t683 = Cos(var1[8]);
  t866 = Cos(var1[10]);
  t916 = Sin(var1[9]);
  t807 = Cos(var1[9]);
  t965 = Sin(var1[10]);
  t492 = Cos(var1[11]);
  t1132 = -1.*t683*t866*t916;
  t1183 = -1.*t683*t807*t965;
  t1301 = t1132 + t1183;
  t882 = t683*t807*t866;
  t976 = -1.*t683*t916*t965;
  t1086 = t882 + t976;
  t1303 = Sin(var1[11]);
  t346 = Cos(var1[12]);
  t1453 = t492*t1301;
  t1486 = -1.*t1086*t1303;
  t1625 = t1453 + t1486;
  t1122 = t492*t1086;
  t1345 = t1301*t1303;
  t1365 = t1122 + t1345;
  t1626 = Sin(var1[12]);
  t325 = Cos(var1[13]);
  t1831 = t346*t1625;
  t1834 = -1.*t1365*t1626;
  t1847 = t1831 + t1834;
  t1394 = t346*t1365;
  t1672 = t1625*t1626;
  t1754 = t1394 + t1672;
  t1864 = Sin(var1[13]);
  t2224 = Cos(var1[7]);
  t2179 = Sin(var1[7]);
  t2206 = Sin(var1[8]);
  t2269 = t2224*t807;
  t2340 = -1.*t2179*t2206*t916;
  t2355 = t2269 + t2340;
  t2216 = t807*t2179*t2206;
  t2235 = t2224*t916;
  t2267 = t2216 + t2235;
  t2542 = t866*t2355;
  t2606 = -1.*t2267*t965;
  t2611 = t2542 + t2606;
  t2268 = t866*t2267;
  t2378 = t2355*t965;
  t2438 = t2268 + t2378;
  t2837 = t492*t2611;
  t2849 = -1.*t2438*t1303;
  t2903 = t2837 + t2849;
  t2450 = t492*t2438;
  t2752 = t2611*t1303;
  t2753 = t2450 + t2752;
  t3009 = t346*t2903;
  t3072 = -1.*t2753*t1626;
  t3080 = t3009 + t3072;
  t2782 = t346*t2753;
  t2940 = t2903*t1626;
  t2967 = t2782 + t2940;
  t1768 = t325*t1754;
  t1873 = t1847*t1864;
  t1895 = t1768 + t1873;
  t1957 = t325*t1847;
  t2065 = -1.*t1754*t1864;
  t2092 = t1957 + t2065;
  t2980 = t325*t2967;
  t3148 = t3080*t1864;
  t3169 = t2980 + t3148;
  t3225 = t325*t3080;
  t3238 = -1.*t2967*t1864;
  t3254 = t3225 + t3238;
  t3407 = 0.642788*t3169;
  t3409 = 0.766044*t3254;
  t3456 = t3407 + t3409;
  t3360 = -0.766044*t1895;
  t3380 = 0.642788*t2092;
  t3395 = t3360 + t3380;
  t3555 = -1.*t807*t2179;
  t3586 = -1.*t2224*t2206*t916;
  t3590 = t3555 + t3586;
  t3533 = t2224*t807*t2206;
  t3541 = -1.*t2179*t916;
  t3543 = t3533 + t3541;
  t3757 = t866*t3590;
  t3822 = -1.*t3543*t965;
  t3826 = t3757 + t3822;
  t3545 = t866*t3543;
  t3612 = t3590*t965;
  t3618 = t3545 + t3612;
  t3922 = t492*t3826;
  t3948 = -1.*t3618*t1303;
  t4011 = t3922 + t3948;
  t3701 = t492*t3618;
  t3829 = t3826*t1303;
  t3864 = t3701 + t3829;
  t4166 = t346*t4011;
  t4290 = -1.*t3864*t1626;
  t4321 = t4166 + t4290;
  t3897 = t346*t3864;
  t4028 = t4011*t1626;
  t4131 = t3897 + t4028;
  t3195 = -0.766044*t3169;
  t3285 = 0.642788*t3254;
  t3327 = t3195 + t3285;
  t1919 = 0.642788*t1895;
  t2123 = 0.766044*t2092;
  t2168 = t1919 + t2123;
  t4137 = t325*t4131;
  t4329 = t4321*t1864;
  t4413 = t4137 + t4329;
  t4431 = t325*t4321;
  t4464 = -1.*t4131*t1864;
  t4515 = t4431 + t4464;
  t4420 = -0.766044*t4413;
  t4525 = 0.642788*t4515;
  t4583 = t4420 + t4525;
  t4926 = 0.642788*t4413;
  t4940 = 0.766044*t4515;
  t4975 = t4926 + t4940;
  t289 = Cos(var1[1]);
  t5099 = t2168*t4583;
  t5103 = -1.*t3395*t4975;
  t3502 = t2224*t683*t3395;
  t4620 = t2206*t4583;
  t4649 = t3502 + t4620;
  t4833 = -1.*t3456*t4649;
  t4894 = t2224*t683*t2168;
  t4989 = t2206*t4975;
  t5003 = t4894 + t4989;
  t5064 = t3327*t5003;
  t5139 = t5099 + t5103;
  t5158 = -1.*t683*t2179*t5139;
  t5173 = 0. + t4833 + t5064 + t5158;
  t5343 = 1/t5173;
  t273 = Cos(var1[0]);
  t5348 = Sin(var1[0]);
  t5465 = Sin(var1[1]);
  t5408 = t4975*t3327;
  t5419 = -1.*t4583*t3456;
  t5425 = 0. + t5408 + t5419;
  t5964 = Cos(var1[3]);
  t5925 = Cos(var1[2]);
  t5948 = Sin(var1[3]);
  t5971 = Sin(var1[2]);
  t5997 = Cos(var1[4]);
  t5963 = -1.*t289*t5925*t5948;
  t5986 = -1.*t5964*t289*t5971;
  t5989 = t5963 + t5986;
  t5918 = Sin(var1[4]);
  t6000 = t5964*t289*t5925;
  t6008 = -1.*t289*t5948*t5971;
  t6032 = t6000 + t6008;
  t6070 = Cos(var1[5]);
  t5995 = t5918*t5989;
  t6052 = t5997*t6032;
  t6061 = t5995 + t6052;
  t5914 = Sin(var1[5]);
  t6076 = t5997*t5989;
  t6078 = -1.*t5918*t6032;
  t6081 = t6076 + t6078;
  t6200 = Cos(var1[6]);
  t6067 = -1.*t5914*t6061;
  t6107 = t6070*t6081;
  t6144 = t6067 + t6107;
  t5913 = Sin(var1[6]);
  t6206 = t6070*t6061;
  t6215 = t5914*t6081;
  t6233 = t6206 + t6215;
  t3357 = -1.*t2168*t3327;
  t3495 = t3395*t3456;
  t3501 = 0. + t3357 + t3495;
  t6366 = t273*t5925*t5465;
  t6368 = -1.*t5348*t5971;
  t6371 = t6366 + t6368;
  t6376 = -1.*t5925*t5348;
  t6383 = -1.*t273*t5465*t5971;
  t6394 = t6376 + t6383;
  t6374 = -1.*t5948*t6371;
  t6399 = t5964*t6394;
  t6404 = t6374 + t6399;
  t6414 = t5964*t6371;
  t6423 = t5948*t6394;
  t6426 = t6414 + t6423;
  t6412 = t5918*t6404;
  t6428 = t5997*t6426;
  t6436 = t6412 + t6428;
  t6447 = t5997*t6404;
  t6451 = -1.*t5918*t6426;
  t6455 = t6447 + t6451;
  t6437 = -1.*t5914*t6436;
  t6459 = t6070*t6455;
  t6468 = t6437 + t6459;
  t6482 = t6070*t6436;
  t6485 = t5914*t6455;
  t6490 = t6482 + t6485;
  t5346 = 0. + t5099 + t5103;
  t6561 = t5925*t5348*t5465;
  t6579 = t273*t5971;
  t6582 = t6561 + t6579;
  t6597 = t273*t5925;
  t6615 = -1.*t5348*t5465*t5971;
  t6627 = t6597 + t6615;
  t6583 = -1.*t5948*t6582;
  t6636 = t5964*t6627;
  t6651 = t6583 + t6636;
  t6668 = t5964*t6582;
  t6675 = t5948*t6627;
  t6679 = t6668 + t6675;
  t6653 = t5918*t6651;
  t6680 = t5997*t6679;
  t6683 = t6653 + t6680;
  t6704 = t5997*t6651;
  t6706 = -1.*t5918*t6679;
  t6719 = t6704 + t6706;
  t6698 = -1.*t5914*t6683;
  t6733 = t6070*t6719;
  t6734 = t6698 + t6733;
  t6736 = t6070*t6683;
  t6739 = t5914*t6719;
  t6746 = t6736 + t6739;
  t5630 = -1.*t683*t2179*t4583;
  t5638 = t2224*t683*t3327;
  t5644 = 0. + t5630 + t5638;
  t6194 = t5913*t6144;
  t6237 = t6200*t6233;
  t6255 = t6194 + t6237;
  t6257 = 0.642788*t6255;
  t6258 = t6200*t6144;
  t6279 = -1.*t5913*t6233;
  t6290 = t6258 + t6279;
  t6303 = 0.766044*t6290;
  t6341 = t6257 + t6303;
  t5491 = t683*t2179*t3395;
  t5497 = t2206*t3327;
  t5498 = 0. + t5491 + t5497;
  t6476 = t5913*t6468;
  t6510 = t6200*t6490;
  t6513 = t6476 + t6510;
  t6517 = 0.642788*t6513;
  t6524 = t6200*t6468;
  t6531 = -1.*t5913*t6490;
  t6541 = t6524 + t6531;
  t6542 = 0.766044*t6541;
  t6552 = t6517 + t6542;
  t5532 = -1.*t2224*t683*t3395;
  t5566 = -1.*t2206*t4583;
  t5592 = 0. + t5532 + t5566;
  t6735 = t5913*t6734;
  t6749 = t6200*t6746;
  t6755 = t6735 + t6749;
  t6758 = 0.642788*t6755;
  t6765 = t6200*t6734;
  t6768 = -1.*t5913*t6746;
  t6769 = t6765 + t6768;
  t6782 = 0.766044*t6769;
  t6785 = t6758 + t6782;
  t5845 = t683*t2179*t4975;
  t5858 = -1.*t2224*t683*t3456;
  t5866 = 0. + t5845 + t5858;
  t5750 = -1.*t683*t2179*t2168;
  t5751 = -1.*t2206*t3456;
  t5764 = 0. + t5750 + t5751;
  t5779 = 0. + t4894 + t4989;
  t6874 = -0.766044*t6255;
  t6883 = 0.642788*t6290;
  t6887 = t6874 + t6883;
  t6892 = -0.766044*t6513;
  t6896 = 0.642788*t6541;
  t6899 = t6892 + t6896;
  t6903 = -0.766044*t6755;
  t6906 = 0.642788*t6769;
  t6908 = t6903 + t6906;
  p_output1[0]=0. - 1.*t273*t289*t3501*t5343 - 1.*t289*t5343*t5346*t5348 + t5343*t5425*t5465;
  p_output1[1]=0. - 1.*t273*t289*t5343*t5498 - 1.*t289*t5343*t5348*t5592 + t5343*t5465*t5644;
  p_output1[2]=0. - 1.*t273*t289*t5343*t5764 - 1.*t289*t5343*t5348*t5779 + t5343*t5465*t5866;
  p_output1[3]=0. + t5343*t5425*t6341 + t3501*t5343*t6552 + t5343*t5346*t6785;
  p_output1[4]=0. + t5343*t5644*t6341 + t5343*t5498*t6552 + t5343*t5592*t6785;
  p_output1[5]=0. + t5343*t5866*t6341 + t5343*t5764*t6552 + t5343*t5779*t6785;
  p_output1[6]=0. + t5343*t5425*t6887 + t3501*t5343*t6899 + t5343*t5346*t6908;
  p_output1[7]=0. + t5343*t5644*t6887 + t5343*t5498*t6899 + t5343*t5592*t6908;
  p_output1[8]=0. + t5343*t5866*t6887 + t5343*t5764*t6899 + t5343*t5779*t6908;
}



void R_RightToeBottom_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
