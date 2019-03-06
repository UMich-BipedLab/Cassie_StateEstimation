/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:14:38 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jws_LeftToeBottom_to_RightToeBottom_src.h"

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
  double t451;
  double t621;
  double t389;
  double t559;
  double t623;
  double t732;
  double t620;
  double t666;
  double t685;
  double t340;
  double t747;
  double t766;
  double t794;
  double t843;
  double t714;
  double t806;
  double t809;
  double t339;
  double t855;
  double t861;
  double t865;
  double t923;
  double t833;
  double t869;
  double t905;
  double t182;
  double t942;
  double t953;
  double t981;
  double t1047;
  double t909;
  double t1002;
  double t1007;
  double t173;
  double t1095;
  double t1118;
  double t1119;
  double t1215;
  double t1221;
  double t1224;
  double t1239;
  double t1261;
  double t1263;
  double t1236;
  double t1287;
  double t1288;
  double t1344;
  double t1359;
  double t1450;
  double t1296;
  double t1474;
  double t1524;
  double t1539;
  double t1542;
  double t1563;
  double t1525;
  double t1584;
  double t1636;
  double t1653;
  double t1750;
  double t1766;
  double t1020;
  double t1124;
  double t1133;
  double t1166;
  double t1172;
  double t1178;
  double t1646;
  double t1787;
  double t1810;
  double t1823;
  double t1837;
  double t1855;
  double t1985;
  double t1991;
  double t2060;
  double t2101;
  double t2115;
  double t2122;
  double t2124;
  double t2145;
  double t2193;
  double t2223;
  double t2129;
  double t2226;
  double t2235;
  double t2338;
  double t2350;
  double t2356;
  double t2292;
  double t2365;
  double t2381;
  double t2398;
  double t2404;
  double t2448;
  double t1921;
  double t1934;
  double t1955;
  double t1812;
  double t1865;
  double t1894;
  double t2394;
  double t2458;
  double t2473;
  double t2491;
  double t2546;
  double t2560;
  double t1148;
  double t1189;
  double t1210;
  double t2639;
  double t2640;
  double t2648;
  double t2488;
  double t2563;
  double t2569;
  double t2587;
  double t2598;
  double t2599;
  double t2611;
  double t2655;
  double t2656;
  double t2663;
  double t2685;
  double t2691;
  double t2718;
  double t2722;
  double t2731;
  double t2735;
  double t2742;
  double t2861;
  double t2883;
  double t2952;
  double t2898;
  double t2954;
  double t2955;
  double t2956;
  double t1916;
  double t2063;
  double t2092;
  double t3278;
  double t3281;
  double t3019;
  double t3028;
  double t3047;
  double t3340;
  double t3353;
  double t2765;
  double t2781;
  double t2799;
  double t3304;
  double t3319;
  double t3055;
  double t3063;
  double t3082;
  double t3131;
  double t2820;
  double t2824;
  double t2829;
  double t3155;
  double t3205;
  double t3227;
  double t3301;
  double t3326;
  double t3362;
  double t3379;
  double t3384;
  double t3385;
  double t3388;
  double t3499;
  double t3510;
  double t3513;
  double t3551;
  double t3558;
  double t3651;
  double t3666;
  double t3685;
  double t3717;
  double t3718;
  double t3782;
  double t3786;
  double t3802;
  double t3851;
  double t3853;
  double t3826;
  double t3831;
  double t3813;
  double t3842;
  double t3855;
  double t3857;
  double t3862;
  double t3876;
  double t3877;
  double t3879;
  double t3914;
  double t3916;
  double t3919;
  double t3926;
  t451 = Cos(var1[2]);
  t621 = Sin(var1[0]);
  t389 = Cos(var1[0]);
  t559 = Sin(var1[1]);
  t623 = Sin(var1[2]);
  t732 = Cos(var1[3]);
  t620 = t389*t451*t559;
  t666 = -1.*t621*t623;
  t685 = t620 + t666;
  t340 = Sin(var1[3]);
  t747 = -1.*t451*t621;
  t766 = -1.*t389*t559*t623;
  t794 = t747 + t766;
  t843 = Cos(var1[4]);
  t714 = -1.*t340*t685;
  t806 = t732*t794;
  t809 = t714 + t806;
  t339 = Sin(var1[4]);
  t855 = t732*t685;
  t861 = t340*t794;
  t865 = t855 + t861;
  t923 = Cos(var1[5]);
  t833 = t339*t809;
  t869 = t843*t865;
  t905 = t833 + t869;
  t182 = Sin(var1[5]);
  t942 = t843*t809;
  t953 = -1.*t339*t865;
  t981 = t942 + t953;
  t1047 = Cos(var1[6]);
  t909 = -1.*t182*t905;
  t1002 = t923*t981;
  t1007 = t909 + t1002;
  t173 = Sin(var1[6]);
  t1095 = t923*t905;
  t1118 = t182*t981;
  t1119 = t1095 + t1118;
  t1215 = t451*t621*t559;
  t1221 = t389*t623;
  t1224 = t1215 + t1221;
  t1239 = t389*t451;
  t1261 = -1.*t621*t559*t623;
  t1263 = t1239 + t1261;
  t1236 = -1.*t340*t1224;
  t1287 = t732*t1263;
  t1288 = t1236 + t1287;
  t1344 = t732*t1224;
  t1359 = t340*t1263;
  t1450 = t1344 + t1359;
  t1296 = t339*t1288;
  t1474 = t843*t1450;
  t1524 = t1296 + t1474;
  t1539 = t843*t1288;
  t1542 = -1.*t339*t1450;
  t1563 = t1539 + t1542;
  t1525 = -1.*t182*t1524;
  t1584 = t923*t1563;
  t1636 = t1525 + t1584;
  t1653 = t923*t1524;
  t1750 = t182*t1563;
  t1766 = t1653 + t1750;
  t1020 = t173*t1007;
  t1124 = t1047*t1119;
  t1133 = t1020 + t1124;
  t1166 = t1047*t1007;
  t1172 = -1.*t173*t1119;
  t1178 = t1166 + t1172;
  t1646 = t173*t1636;
  t1787 = t1047*t1766;
  t1810 = t1646 + t1787;
  t1823 = t1047*t1636;
  t1837 = -1.*t173*t1766;
  t1855 = t1823 + t1837;
  t1985 = 0.642788*t1810;
  t1991 = 0.766044*t1855;
  t2060 = t1985 + t1991;
  t2101 = Cos(var1[1]);
  t2115 = -1.*t2101*t451*t340;
  t2122 = -1.*t732*t2101*t623;
  t2124 = t2115 + t2122;
  t2145 = t732*t2101*t451;
  t2193 = -1.*t2101*t340*t623;
  t2223 = t2145 + t2193;
  t2129 = t339*t2124;
  t2226 = t843*t2223;
  t2235 = t2129 + t2226;
  t2338 = t843*t2124;
  t2350 = -1.*t339*t2223;
  t2356 = t2338 + t2350;
  t2292 = -1.*t182*t2235;
  t2365 = t923*t2356;
  t2381 = t2292 + t2365;
  t2398 = t923*t2235;
  t2404 = t182*t2356;
  t2448 = t2398 + t2404;
  t1921 = -0.766044*t1133;
  t1934 = 0.642788*t1178;
  t1955 = t1921 + t1934;
  t1812 = -0.766044*t1810;
  t1865 = 0.642788*t1855;
  t1894 = t1812 + t1865;
  t2394 = t173*t2381;
  t2458 = t1047*t2448;
  t2473 = t2394 + t2458;
  t2491 = t1047*t2381;
  t2546 = -1.*t173*t2448;
  t2560 = t2491 + t2546;
  t1148 = 0.642788*t1133;
  t1189 = 0.766044*t1178;
  t1210 = t1148 + t1189;
  t2639 = 0.642788*t2473;
  t2640 = 0.766044*t2560;
  t2648 = t2639 + t2640;
  t2488 = -0.766044*t2473;
  t2563 = 0.642788*t2560;
  t2569 = t2488 + t2563;
  t2587 = t389*t2101*t2569;
  t2598 = t559*t1955;
  t2599 = t2587 + t2598;
  t2611 = -1.*t2060*t2599;
  t2655 = t389*t2101*t2648;
  t2656 = t559*t1210;
  t2663 = t2655 + t2656;
  t2685 = t1894*t2663;
  t2691 = t2648*t1955;
  t2718 = -1.*t2569*t1210;
  t2722 = t2691 + t2718;
  t2731 = -1.*t2101*t621*t2722;
  t2735 = 0. + t2611 + t2685 + t2731;
  t2742 = 1/t2735;
  t2861 = -1.*t389;
  t2883 = 0. + t2861;
  t2952 = 0. + t621;
  t2898 = 0. + t2691 + t2718;
  t2954 = -1.*t2648*t1894;
  t2955 = t2569*t2060;
  t2956 = 0. + t2954 + t2955;
  t1916 = t1210*t1894;
  t2063 = -1.*t1955*t2060;
  t2092 = 0. + t1916 + t2063;
  t3278 = t2101*t621;
  t3281 = 0. + t3278;
  t3019 = -1.*t389*t2101*t2569;
  t3028 = -1.*t559*t1955;
  t3047 = 0. + t3019 + t3028;
  t3340 = -1.*t559;
  t3353 = 0. + t3340;
  t2765 = -1.*t2101*t621*t1955;
  t2781 = t389*t2101*t1894;
  t2799 = 0. + t2765 + t2781;
  t3304 = t389*t2101;
  t3319 = 0. + t3304;
  t3055 = t2101*t621*t2569;
  t3063 = t559*t1894;
  t3082 = 0. + t3055 + t3063;
  t3131 = 0. + t2655 + t2656;
  t2820 = t2101*t621*t1210;
  t2824 = -1.*t389*t2101*t2060;
  t2829 = 0. + t2820 + t2824;
  t3155 = -1.*t2101*t621*t2648;
  t3205 = -1.*t559*t2060;
  t3227 = 0. + t3155 + t3205;
  t3301 = t3281*t2898*t2742;
  t3326 = t3319*t2956*t2742;
  t3362 = t3353*t2092*t2742;
  t3379 = t3301 + t3326 + t3362;
  t3384 = t3281*t3047*t2742;
  t3385 = t3353*t2799*t2742;
  t3388 = t3319*t3082*t2742;
  t3499 = t3384 + t3385 + t3388;
  t3510 = t3281*t3131*t2742;
  t3513 = t3353*t2829*t2742;
  t3551 = t3319*t3227*t2742;
  t3558 = t3510 + t3513 + t3551;
  t3651 = Cos(var1[7]);
  t3666 = 0. + t3651;
  t3685 = Sin(var1[7]);
  t3717 = -1.*t3685;
  t3718 = 0. + t3717;
  t3782 = Cos(var1[8]);
  t3786 = -1.*t3782*t3685;
  t3802 = 0. + t3786;
  t3851 = Sin(var1[8]);
  t3853 = 0. + t3851;
  t3826 = -1.*t3651*t3782;
  t3831 = 0. + t3826;
  t3813 = t3802*t2898*t2742;
  t3842 = t3831*t2956*t2742;
  t3855 = t3853*t2092*t2742;
  t3857 = t3813 + t3842 + t3855;
  t3862 = t3802*t3047*t2742;
  t3876 = t3853*t2799*t2742;
  t3877 = t3831*t3082*t2742;
  t3879 = t3862 + t3876 + t3877;
  t3914 = t3802*t3131*t2742;
  t3916 = t3853*t2829*t2742;
  t3919 = t3831*t3227*t2742;
  t3926 = t3914 + t3916 + t3919;
  p_output1[0]=0. - 1.*t2092*t2742;
  p_output1[1]=0. - 1.*t2742*t2799;
  p_output1[2]=0. - 1.*t2742*t2829;
  p_output1[3]=0. + t2742*t2883*t2898 + t2742*t2952*t2956;
  p_output1[4]=0. + t2742*t2883*t3047 + t2742*t2952*t3082;
  p_output1[5]=0. + t2742*t2883*t3131 + t2742*t2952*t3227;
  p_output1[6]=t3379;
  p_output1[7]=t3499;
  p_output1[8]=t3558;
  p_output1[9]=t3379;
  p_output1[10]=t3499;
  p_output1[11]=t3558;
  p_output1[12]=t3379;
  p_output1[13]=t3499;
  p_output1[14]=t3558;
  p_output1[15]=t3379;
  p_output1[16]=t3499;
  p_output1[17]=t3558;
  p_output1[18]=t3379;
  p_output1[19]=t3499;
  p_output1[20]=t3558;
  p_output1[21]=0. + t2092*t2742;
  p_output1[22]=0. + t2742*t2799;
  p_output1[23]=0. + t2742*t2829;
  p_output1[24]=0. + t2742*t2898*t3666 + t2742*t2956*t3718;
  p_output1[25]=0. + t2742*t3047*t3666 + t2742*t3082*t3718;
  p_output1[26]=0. + t2742*t3131*t3666 + t2742*t3227*t3718;
  p_output1[27]=t3857;
  p_output1[28]=t3879;
  p_output1[29]=t3926;
  p_output1[30]=t3857;
  p_output1[31]=t3879;
  p_output1[32]=t3926;
  p_output1[33]=t3857;
  p_output1[34]=t3879;
  p_output1[35]=t3926;
  p_output1[36]=t3857;
  p_output1[37]=t3879;
  p_output1[38]=t3926;
  p_output1[39]=t3857;
  p_output1[40]=t3879;
  p_output1[41]=t3926;
}



void Jws_LeftToeBottom_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
