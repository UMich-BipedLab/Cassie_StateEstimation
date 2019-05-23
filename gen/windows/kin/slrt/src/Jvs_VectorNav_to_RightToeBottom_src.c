/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:20:13 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jvs_VectorNav_to_RightToeBottom_src.h"

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
  double t495;
  double t747;
  double t756;
  double t786;
  double t1233;
  double t593;
  double t633;
  double t641;
  double t878;
  double t1360;
  double t1406;
  double t1503;
  double t1522;
  double t1580;
  double t1671;
  double t1068;
  double t1251;
  double t1281;
  double t1298;
  double t1969;
  double t2690;
  double t2751;
  double t2772;
  double t2779;
  double t1705;
  double t2775;
  double t2812;
  double t2839;
  double t2864;
  double t2921;
  double t2929;
  double t2224;
  double t2233;
  double t2240;
  double t2383;
  double t2412;
  double t2252;
  double t2258;
  double t2330;
  double t2362;
  double t2418;
  double t2453;
  double t2490;
  double t2573;
  double t2575;
  double t3003;
  double t3015;
  double t3512;
  double t3571;
  double t3628;
  double t3752;
  double t3769;
  double t3792;
  double t4895;
  double t4930;
  double t4951;
  double t5044;
  double t2851;
  double t2957;
  double t4361;
  double t4387;
  double t4432;
  double t4997;
  double t5114;
  double t5148;
  double t4510;
  double t4550;
  double t4577;
  double t5299;
  double t5321;
  double t5330;
  double t3109;
  double t3223;
  double t3381;
  double t4114;
  double t4155;
  double t4174;
  double t5634;
  double t5660;
  double t6484;
  double t6529;
  double t6530;
  double t6449;
  double t6470;
  double t6471;
  double t6578;
  double t6579;
  double t6584;
  double t6592;
  double t5179;
  double t5340;
  double t6315;
  double t6318;
  double t6326;
  double t6590;
  double t6622;
  double t6633;
  double t6228;
  double t6256;
  double t6274;
  double t6647;
  double t6658;
  double t6663;
  double t5771;
  double t5976;
  double t6012;
  double t5718;
  double t5719;
  double t5762;
  double t6091;
  double t6114;
  double t6165;
  double t6178;
  double t6346;
  double t6359;
  double t6385;
  double t6414;
  double t6677;
  double t6683;
  double t6769;
  double t6770;
  double t6771;
  double t6777;
  double t6788;
  double t6792;
  double t6873;
  double t6874;
  double t6876;
  double t6881;
  double t6643;
  double t6666;
  double t6850;
  double t6857;
  double t6858;
  double t6878;
  double t6883;
  double t6886;
  double t6865;
  double t6866;
  double t6869;
  double t6892;
  double t6893;
  double t6895;
  double t6730;
  double t6732;
  double t6733;
  double t6696;
  double t6698;
  double t6710;
  double t6745;
  double t6747;
  double t6755;
  double t6760;
  double t6798;
  double t6799;
  double t6823;
  double t6838;
  t495 = Cos(var1[7]);
  t747 = Sin(var1[7]);
  t756 = -1.*t747;
  t786 = 0. + t756;
  t1233 = Cos(var1[8]);
  t593 = -1.*t495;
  t633 = 1. + t593;
  t641 = -0.135*t633;
  t878 = -0.135*t747;
  t1360 = -1.*t1233;
  t1406 = 1. + t1360;
  t1503 = -0.135*t1406;
  t1522 = Sin(var1[8]);
  t1580 = 0.049*t1522;
  t1671 = 0. + t1503 + t1580;
  t1068 = 0.049*t495;
  t1251 = -1.*t495*t1233;
  t1281 = 0. + t1251;
  t1298 = -0.07996*t1281;
  t1969 = -1.*t747*t1671;
  t2690 = Cos(var1[9]);
  t2751 = -1.*t2690;
  t2772 = 1. + t2751;
  t2779 = Sin(var1[9]);
  t1705 = t495*t1671;
  t2775 = -0.049*t2772;
  t2812 = -0.09*t2779;
  t2839 = 0. + t2775 + t2812;
  t2864 = -0.09*t2772;
  t2921 = 0.049*t2779;
  t2929 = 0. + t2864 + t2921;
  t2224 = -1.*t1233*t747;
  t2233 = 0. + t2224;
  t2240 = 0.03155*t2233;
  t2383 = 0. + t1522;
  t2412 = 0.07996*t2383;
  t2252 = 0.049*t1406;
  t2258 = 0.135*t1522;
  t2330 = 0.135*t747;
  t2362 = t747*t1671;
  t2418 = -0.03155*t1281;
  t2453 = -0.049*t1406;
  t2490 = -0.135*t1522;
  t2573 = 0.135*t633;
  t2575 = -1.*t495*t1671;
  t3003 = t495*t1522*t2839;
  t3015 = -1.*t747*t2929;
  t3512 = t495*t2690*t1522;
  t3571 = -1.*t747*t2779;
  t3628 = t3512 + t3571;
  t3752 = -1.*t2690*t747;
  t3769 = -1.*t495*t1522*t2779;
  t3792 = t3752 + t3769;
  t4895 = Cos(var1[10]);
  t4930 = -1.*t4895;
  t4951 = 1. + t4930;
  t5044 = Sin(var1[10]);
  t2851 = -1.*t747*t1522*t2839;
  t2957 = -1.*t495*t2929;
  t4361 = t2690*t747*t1522;
  t4387 = t495*t2779;
  t4432 = t4361 + t4387;
  t4997 = -0.049*t4951;
  t5114 = -0.21*t5044;
  t5148 = 0. + t4997 + t5114;
  t4510 = t495*t2690;
  t4550 = -1.*t747*t1522*t2779;
  t4577 = t4510 + t4550;
  t5299 = -0.21*t4951;
  t5321 = 0.049*t5044;
  t5330 = 0. + t5299 + t5321;
  t3109 = -1.*t1233*t2839;
  t3223 = t747*t1522*t2839;
  t3381 = t495*t2929;
  t4114 = t1233*t2839;
  t4155 = -1.*t495*t1522*t2839;
  t4174 = t747*t2929;
  t5634 = -1.*t4432*t5148;
  t5660 = -1.*t4577*t5330;
  t6484 = t4895*t4432;
  t6529 = t4577*t5044;
  t6530 = t6484 + t6529;
  t6449 = t4895*t4577;
  t6470 = -1.*t4432*t5044;
  t6471 = t6449 + t6470;
  t6578 = Cos(var1[11]);
  t6579 = -1.*t6578;
  t6584 = 1. + t6579;
  t6592 = Sin(var1[11]);
  t5179 = t3628*t5148;
  t5340 = t3792*t5330;
  t6315 = t4895*t3628;
  t6318 = t3792*t5044;
  t6326 = t6315 + t6318;
  t6590 = -0.0016*t6584;
  t6622 = -0.2707*t6592;
  t6633 = 0. + t6590 + t6622;
  t6228 = t4895*t3792;
  t6256 = -1.*t3628*t5044;
  t6274 = t6228 + t6256;
  t6647 = -0.2707*t6584;
  t6658 = 0.0016*t6592;
  t6663 = 0. + t6647 + t6658;
  t5771 = t1233*t2690*t4895;
  t5976 = -1.*t1233*t2779*t5044;
  t6012 = t5771 + t5976;
  t5718 = -1.*t1233*t4895*t2779;
  t5719 = -1.*t1233*t2690*t5044;
  t5762 = t5718 + t5719;
  t6091 = -1.*t1233*t2690*t5148;
  t6114 = t1233*t2779*t5330;
  t6165 = t4432*t5148;
  t6178 = t4577*t5330;
  t6346 = t1233*t2690*t5148;
  t6359 = -1.*t1233*t2779*t5330;
  t6385 = -1.*t3628*t5148;
  t6414 = -1.*t3792*t5330;
  t6677 = t6326*t6633;
  t6683 = t6274*t6663;
  t6769 = t6578*t6326;
  t6770 = t6274*t6592;
  t6771 = t6769 + t6770;
  t6777 = t6578*t6274;
  t6788 = -1.*t6326*t6592;
  t6792 = t6777 + t6788;
  t6873 = Cos(var1[12]);
  t6874 = -1.*t6873;
  t6876 = 1. + t6874;
  t6881 = Sin(var1[12]);
  t6643 = -1.*t6530*t6633;
  t6666 = -1.*t6471*t6663;
  t6850 = t6578*t6530;
  t6857 = t6471*t6592;
  t6858 = t6850 + t6857;
  t6878 = 0.0184*t6876;
  t6883 = -0.7055*t6881;
  t6886 = 0. + t6878 + t6883;
  t6865 = t6578*t6471;
  t6866 = -1.*t6530*t6592;
  t6869 = t6865 + t6866;
  t6892 = -0.7055*t6876;
  t6893 = -0.0184*t6881;
  t6895 = 0. + t6892 + t6893;
  t6730 = t6578*t5762;
  t6732 = -1.*t6012*t6592;
  t6733 = t6730 + t6732;
  t6696 = t6578*t6012;
  t6698 = t5762*t6592;
  t6710 = t6696 + t6698;
  t6745 = -1.*t6012*t6633;
  t6747 = -1.*t5762*t6663;
  t6755 = t6530*t6633;
  t6760 = t6471*t6663;
  t6798 = t6012*t6633;
  t6799 = t5762*t6663;
  t6823 = -1.*t6326*t6633;
  t6838 = -1.*t6274*t6663;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0.;
  p_output1[22]=0.07996;
  p_output1[23]=0.135;
  p_output1[24]=-0.135 + t495*(0. + t641) - 0.07996*t786 - 1.*t747*(0. + t878);
  p_output1[25]=0. + t1068 + 0.03155*(0. + t495);
  p_output1[26]=0. + 0.049*t747 - 0.03155*t786;
  p_output1[27]=0. - 0.09*t1233 + t1298 - 1.*t1233*(0. + t1705 + t641)*t747 - 1.*t1233*t495*(0. + t1969 + t878);
  p_output1[28]=0. + t2240 + t1522*(0. + t2330 + t2362) + t2412 - 0.09*t1522*t495 - 0.049*t747 - 1.*t1233*(0. + t2252 + t2258)*t747;
  p_output1[29]=0. + t1068 + t2418 + t1522*(0. + t2573 + t2575) - 1.*t1233*(0. + t2453 + t2490)*t495 - 0.09*t1522*t747;
  p_output1[30]=0. + t1298 - 0.21*t1233*t2690 - 0.049*t1233*t2779 - 1.*t1233*(0. + t1705 + t3003 + t3015 + t641)*t747 - 1.*t1233*t495*(0. + t1969 + t2851 + t2957 + t878);
  p_output1[31]=0. + t2240 + t2412 + t1522*(0. + t2330 + t2362 + t3223 + t3381) - 0.21*t3628 + 0.049*t3792 - 1.*t1233*(0. + t2252 + t2258 + t3109)*t747;
  p_output1[32]=0. + t2418 + t1522*(0. + t2573 + t2575 + t4155 + t4174) - 0.21*t4432 + 0.049*t4577 - 1.*t1233*(0. + t2453 + t2490 + t4114)*t495;
  p_output1[33]=0. + t1298 + 0.0016*t5762 - 0.2707*t6012 - 1.*t1233*(0. + t1705 + t3003 + t3015 + t5179 + t5340 + t641)*t747 - 1.*t1233*t495*(0. + t1969 + t2851 + t2957 + t5634 + t5660 + t878);
  p_output1[34]=0. + t2240 + t2412 + t1522*(0. + t2330 + t2362 + t3223 + t3381 + t6165 + t6178) + 0.0016*t6274 - 0.2707*t6326 - 1.*t1233*(0. + t2252 + t2258 + t3109 + t6091 + t6114)*t747;
  p_output1[35]=0. + t2418 - 1.*t1233*t495*(0. + t2453 + t2490 + t4114 + t6346 + t6359) + t1522*(0. + t2573 + t2575 + t4155 + t4174 + t6385 + t6414) + 0.0016*t6471 - 0.2707*t6530;
  p_output1[36]=0. + t1298 - 0.7055*t6710 - 0.0184*t6733 - 1.*t1233*(0. + t1705 + t3003 + t3015 + t5179 + t5340 + t641 + t6677 + t6683)*t747 - 1.*t1233*t495*(0. + t1969 + t2851 + t2957 + t5634 + t5660 + t6643 + t6666 + t878);
  p_output1[37]=0. + t2240 + t2412 + t1522*(0. + t2330 + t2362 + t3223 + t3381 + t6165 + t6178 + t6755 + t6760) - 0.7055*t6771 - 0.0184*t6792 - 1.*t1233*(0. + t2252 + t2258 + t3109 + t6091 + t6114 + t6745 + t6747)*t747;
  p_output1[38]=0. + t2418 - 1.*t1233*t495*(0. + t2453 + t2490 + t4114 + t6346 + t6359 + t6798 + t6799) + t1522*(0. + t2573 + t2575 + t4155 + t4174 + t6385 + t6414 + t6823 + t6838) - 0.7055*t6858 - 0.0184*t6869;
  p_output1[39]=0. + t1298 + 0.0216*(t6733*t6873 - 1.*t6710*t6881) - 1.1135*(t6710*t6873 + t6733*t6881) - 1.*t1233*(0. + t1705 + t3003 + t3015 + t5179 + t5340 + t641 + t6677 + t6683 + t6771*t6886 + t6792*t6895)*t747 - 1.*t1233*t495*(0. + t1969 + t2851 + t2957 + t5634 + t5660 + t6643 + t6666 - 1.*t6858*t6886 - 1.*t6869*t6895 + t878);
  p_output1[40]=0. + t2240 + t2412 + 0.0216*(t6792*t6873 - 1.*t6771*t6881) - 1.1135*(t6771*t6873 + t6792*t6881) + t1522*(0. + t2330 + t2362 + t3223 + t3381 + t6165 + t6178 + t6755 + t6760 + t6858*t6886 + t6869*t6895) - 1.*t1233*(0. + t2252 + t2258 + t3109 + t6091 + t6114 + t6745 + t6747 - 1.*t6710*t6886 - 1.*t6733*t6895)*t747;
  p_output1[41]=0. + t2418 + 0.0216*(t6869*t6873 - 1.*t6858*t6881) - 1.1135*(t6858*t6873 + t6869*t6881) - 1.*t1233*t495*(0. + t2453 + t2490 + t4114 + t6346 + t6359 + t6798 + t6799 + t6710*t6886 + t6733*t6895) + t1522*(0. + t2573 + t2575 + t4155 + t4174 + t6385 + t6414 + t6823 + t6838 - 1.*t6771*t6886 - 1.*t6792*t6895);
}



void Jvs_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
