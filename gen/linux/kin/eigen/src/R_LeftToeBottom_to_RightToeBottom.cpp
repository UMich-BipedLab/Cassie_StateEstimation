/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:02:52 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottom_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t667;
  double t829;
  double t714;
  double t812;
  double t838;
  double t878;
  double t827;
  double t842;
  double t850;
  double t660;
  double t898;
  double t922;
  double t924;
  double t950;
  double t855;
  double t939;
  double t944;
  double t655;
  double t978;
  double t995;
  double t1029;
  double t1219;
  double t945;
  double t1164;
  double t1180;
  double t631;
  double t1244;
  double t1283;
  double t1286;
  double t1566;
  double t1481;
  double t1512;
  double t1557;
  double t1582;
  double t1586;
  double t1627;
  double t1653;
  double t1712;
  double t1599;
  double t1716;
  double t1724;
  double t1735;
  double t1747;
  double t1752;
  double t1731;
  double t1775;
  double t1847;
  double t1868;
  double t1895;
  double t1938;
  double t1850;
  double t1952;
  double t1971;
  double t2002;
  double t2009;
  double t2020;
  double t1211;
  double t1322;
  double t1386;
  double t1442;
  double t1443;
  double t1454;
  double t1990;
  double t2024;
  double t2075;
  double t2124;
  double t2141;
  double t2143;
  double t2341;
  double t2355;
  double t2359;
  double t2393;
  double t2425;
  double t2446;
  double t2383;
  double t2457;
  double t2460;
  double t2503;
  double t2511;
  double t2520;
  double t2494;
  double t2551;
  double t2562;
  double t2575;
  double t2610;
  double t2622;
  double t2571;
  double t2629;
  double t2640;
  double t2659;
  double t2701;
  double t2703;
  double t2219;
  double t2226;
  double t2232;
  double t2112;
  double t2176;
  double t2193;
  double t2649;
  double t2721;
  double t2724;
  double t2735;
  double t2737;
  double t2791;
  double t1395;
  double t1456;
  double t1462;
  double t2264;
  double t2292;
  double t2299;
  double t2205;
  double t2335;
  double t508;
  double t2860;
  double t2884;
  double t2902;
  double t2729;
  double t2794;
  double t2797;
  double t2799;
  double t2801;
  double t2806;
  double t2835;
  double t2923;
  double t2938;
  double t2951;
  double t2954;
  double t2982;
  double t2996;
  double t3005;
  double t3010;
  double t613;
  double t3086;
  double t3030;
  double t3423;
  double t3490;
  double t3411;
  double t3570;
  double t3595;
  double t3617;
  double t3440;
  double t3505;
  double t3515;
  double t3620;
  double t3387;
  double t3659;
  double t3686;
  double t3708;
  double t3538;
  double t3642;
  double t3651;
  double t3709;
  double t3361;
  double t3723;
  double t3744;
  double t3751;
  double t3657;
  double t3710;
  double t3716;
  double t3753;
  double t3337;
  double t3780;
  double t3785;
  double t3801;
  double t3717;
  double t3754;
  double t3772;
  double t3809;
  double t2339;
  double t3918;
  double t3929;
  double t3944;
  double t3870;
  double t3885;
  double t3887;
  double t3977;
  double t3987;
  double t3996;
  double t3917;
  double t3954;
  double t3959;
  double t4025;
  double t4026;
  double t4032;
  double t3971;
  double t4012;
  double t4013;
  double t4050;
  double t4052;
  double t4059;
  double t4022;
  double t4035;
  double t4044;
  double t3038;
  double t3044;
  double t3067;
  double t4194;
  double t4203;
  double t4205;
  double t4140;
  double t4141;
  double t4151;
  double t4212;
  double t4223;
  double t4248;
  double t4154;
  double t4207;
  double t4208;
  double t4277;
  double t4278;
  double t4279;
  double t4210;
  double t4253;
  double t4264;
  double t3090;
  double t3091;
  double t3103;
  double t3775;
  double t3816;
  double t3831;
  double t3836;
  double t3841;
  double t3843;
  double t3849;
  double t3859;
  double t3864;
  double t3110;
  double t3114;
  double t3122;
  double t4271;
  double t4280;
  double t4284;
  double t4288;
  double t4291;
  double t4292;
  double t4298;
  double t4313;
  double t4319;
  double t3146;
  double t3152;
  double t3160;
  double t4049;
  double t4069;
  double t4093;
  double t4105;
  double t4112;
  double t4115;
  double t4119;
  double t4126;
  double t4134;
  double t3180;
  double t3186;
  double t3191;
  double t3250;
  double t3272;
  double t3278;
  double t3306;
  double t3317;
  double t3318;
  double t3320;
  double t4386;
  double t4408;
  double t4409;
  double t4459;
  double t4463;
  double t4465;
  double t4425;
  double t4432;
  double t4435;
  t667 = Cos(var1[1]);
  t829 = Cos(var1[3]);
  t714 = Cos(var1[2]);
  t812 = Sin(var1[3]);
  t838 = Sin(var1[2]);
  t878 = Cos(var1[4]);
  t827 = -1.*t667*t714*t812;
  t842 = -1.*t829*t667*t838;
  t850 = t827 + t842;
  t660 = Sin(var1[4]);
  t898 = t829*t667*t714;
  t922 = -1.*t667*t812*t838;
  t924 = t898 + t922;
  t950 = Cos(var1[5]);
  t855 = t660*t850;
  t939 = t878*t924;
  t944 = t855 + t939;
  t655 = Sin(var1[5]);
  t978 = t878*t850;
  t995 = -1.*t660*t924;
  t1029 = t978 + t995;
  t1219 = Cos(var1[6]);
  t945 = -1.*t655*t944;
  t1164 = t950*t1029;
  t1180 = t945 + t1164;
  t631 = Sin(var1[6]);
  t1244 = t950*t944;
  t1283 = t655*t1029;
  t1286 = t1244 + t1283;
  t1566 = Sin(var1[0]);
  t1481 = Cos(var1[0]);
  t1512 = Sin(var1[1]);
  t1557 = t1481*t714*t1512;
  t1582 = -1.*t1566*t838;
  t1586 = t1557 + t1582;
  t1627 = -1.*t714*t1566;
  t1653 = -1.*t1481*t1512*t838;
  t1712 = t1627 + t1653;
  t1599 = -1.*t812*t1586;
  t1716 = t829*t1712;
  t1724 = t1599 + t1716;
  t1735 = t829*t1586;
  t1747 = t812*t1712;
  t1752 = t1735 + t1747;
  t1731 = t660*t1724;
  t1775 = t878*t1752;
  t1847 = t1731 + t1775;
  t1868 = t878*t1724;
  t1895 = -1.*t660*t1752;
  t1938 = t1868 + t1895;
  t1850 = -1.*t655*t1847;
  t1952 = t950*t1938;
  t1971 = t1850 + t1952;
  t2002 = t950*t1847;
  t2009 = t655*t1938;
  t2020 = t2002 + t2009;
  t1211 = t631*t1180;
  t1322 = t1219*t1286;
  t1386 = t1211 + t1322;
  t1442 = t1219*t1180;
  t1443 = -1.*t631*t1286;
  t1454 = t1442 + t1443;
  t1990 = t631*t1971;
  t2024 = t1219*t2020;
  t2075 = t1990 + t2024;
  t2124 = t1219*t1971;
  t2141 = -1.*t631*t2020;
  t2143 = t2124 + t2141;
  t2341 = t714*t1566*t1512;
  t2355 = t1481*t838;
  t2359 = t2341 + t2355;
  t2393 = t1481*t714;
  t2425 = -1.*t1566*t1512*t838;
  t2446 = t2393 + t2425;
  t2383 = -1.*t812*t2359;
  t2457 = t829*t2446;
  t2460 = t2383 + t2457;
  t2503 = t829*t2359;
  t2511 = t812*t2446;
  t2520 = t2503 + t2511;
  t2494 = t660*t2460;
  t2551 = t878*t2520;
  t2562 = t2494 + t2551;
  t2575 = t878*t2460;
  t2610 = -1.*t660*t2520;
  t2622 = t2575 + t2610;
  t2571 = -1.*t655*t2562;
  t2629 = t950*t2622;
  t2640 = t2571 + t2629;
  t2659 = t950*t2562;
  t2701 = t655*t2622;
  t2703 = t2659 + t2701;
  t2219 = -0.766044*t1386;
  t2226 = 0.642788*t1454;
  t2232 = t2219 + t2226;
  t2112 = -0.766044*t2075;
  t2176 = 0.642788*t2143;
  t2193 = t2112 + t2176;
  t2649 = t631*t2640;
  t2721 = t1219*t2703;
  t2724 = t2649 + t2721;
  t2735 = t1219*t2640;
  t2737 = -1.*t631*t2703;
  t2791 = t2735 + t2737;
  t1395 = 0.642788*t1386;
  t1456 = 0.766044*t1454;
  t1462 = t1395 + t1456;
  t2264 = 0.642788*t2075;
  t2292 = 0.766044*t2143;
  t2299 = t2264 + t2292;
  t2205 = t1462*t2193;
  t2335 = -1.*t2232*t2299;
  t508 = Cos(var1[8]);
  t2860 = -0.766044*t2724;
  t2884 = 0.642788*t2791;
  t2902 = t2860 + t2884;
  t2729 = 0.642788*t2724;
  t2794 = 0.766044*t2791;
  t2797 = t2729 + t2794;
  t2799 = t1481*t667*t2232;
  t2801 = t1512*t2193;
  t2806 = t2799 + t2801;
  t2835 = -1.*t2797*t2806;
  t2923 = t1481*t667*t1462;
  t2938 = t1512*t2299;
  t2951 = t2923 + t2938;
  t2954 = t2902*t2951;
  t2982 = t2205 + t2335;
  t2996 = -1.*t667*t1566*t2982;
  t3005 = 0. + t2835 + t2954 + t2996;
  t3010 = 1/t3005;
  t613 = Sin(var1[7]);
  t3086 = Sin(var1[8]);
  t3030 = Cos(var1[7]);
  t3423 = Cos(var1[9]);
  t3490 = Sin(var1[9]);
  t3411 = Cos(var1[10]);
  t3570 = t3030*t3423;
  t3595 = -1.*t613*t3086*t3490;
  t3617 = t3570 + t3595;
  t3440 = t3423*t613*t3086;
  t3505 = t3030*t3490;
  t3515 = t3440 + t3505;
  t3620 = Sin(var1[10]);
  t3387 = Cos(var1[11]);
  t3659 = t3411*t3617;
  t3686 = -1.*t3515*t3620;
  t3708 = t3659 + t3686;
  t3538 = t3411*t3515;
  t3642 = t3617*t3620;
  t3651 = t3538 + t3642;
  t3709 = Sin(var1[11]);
  t3361 = Cos(var1[12]);
  t3723 = t3387*t3708;
  t3744 = -1.*t3651*t3709;
  t3751 = t3723 + t3744;
  t3657 = t3387*t3651;
  t3710 = t3708*t3709;
  t3716 = t3657 + t3710;
  t3753 = Sin(var1[12]);
  t3337 = Cos(var1[13]);
  t3780 = t3361*t3751;
  t3785 = -1.*t3716*t3753;
  t3801 = t3780 + t3785;
  t3717 = t3361*t3716;
  t3754 = t3751*t3753;
  t3772 = t3717 + t3754;
  t3809 = Sin(var1[13]);
  t2339 = 0. + t2205 + t2335;
  t3918 = -1.*t3423*t613;
  t3929 = -1.*t3030*t3086*t3490;
  t3944 = t3918 + t3929;
  t3870 = t3030*t3423*t3086;
  t3885 = -1.*t613*t3490;
  t3887 = t3870 + t3885;
  t3977 = t3411*t3944;
  t3987 = -1.*t3887*t3620;
  t3996 = t3977 + t3987;
  t3917 = t3411*t3887;
  t3954 = t3944*t3620;
  t3959 = t3917 + t3954;
  t4025 = t3387*t3996;
  t4026 = -1.*t3959*t3709;
  t4032 = t4025 + t4026;
  t3971 = t3387*t3959;
  t4012 = t3996*t3709;
  t4013 = t3971 + t4012;
  t4050 = t3361*t4032;
  t4052 = -1.*t4013*t3753;
  t4059 = t4050 + t4052;
  t4022 = t3361*t4013;
  t4035 = t4032*t3753;
  t4044 = t4022 + t4035;
  t3038 = -1.*t1462*t2902;
  t3044 = t2232*t2797;
  t3067 = 0. + t3038 + t3044;
  t4194 = -1.*t508*t3411*t3490;
  t4203 = -1.*t508*t3423*t3620;
  t4205 = t4194 + t4203;
  t4140 = t508*t3423*t3411;
  t4141 = -1.*t508*t3490*t3620;
  t4151 = t4140 + t4141;
  t4212 = t3387*t4205;
  t4223 = -1.*t4151*t3709;
  t4248 = t4212 + t4223;
  t4154 = t3387*t4151;
  t4207 = t4205*t3709;
  t4208 = t4154 + t4207;
  t4277 = t3361*t4248;
  t4278 = -1.*t4208*t3753;
  t4279 = t4277 + t4278;
  t4210 = t3361*t4208;
  t4253 = t4248*t3753;
  t4264 = t4210 + t4253;
  t3090 = t2299*t2902;
  t3091 = -1.*t2193*t2797;
  t3103 = 0. + t3090 + t3091;
  t3775 = t3337*t3772;
  t3816 = t3801*t3809;
  t3831 = t3775 + t3816;
  t3836 = 0.642788*t3831;
  t3841 = t3337*t3801;
  t3843 = -1.*t3772*t3809;
  t3849 = t3841 + t3843;
  t3859 = 0.766044*t3849;
  t3864 = t3836 + t3859;
  t3110 = -1.*t1481*t667*t2232;
  t3114 = -1.*t1512*t2193;
  t3122 = 0. + t3110 + t3114;
  t4271 = t3337*t4264;
  t4280 = t4279*t3809;
  t4284 = t4271 + t4280;
  t4288 = 0.642788*t4284;
  t4291 = t3337*t4279;
  t4292 = -1.*t4264*t3809;
  t4298 = t4291 + t4292;
  t4313 = 0.766044*t4298;
  t4319 = t4288 + t4313;
  t3146 = -1.*t667*t1566*t2193;
  t3152 = t1481*t667*t2902;
  t3160 = 0. + t3146 + t3152;
  t4049 = t3337*t4044;
  t4069 = t4059*t3809;
  t4093 = t4049 + t4069;
  t4105 = 0.642788*t4093;
  t4112 = t3337*t4059;
  t4115 = -1.*t4044*t3809;
  t4119 = t4112 + t4115;
  t4126 = 0.766044*t4119;
  t4134 = t4105 + t4126;
  t3180 = t667*t1566*t2232;
  t3186 = t1512*t2902;
  t3191 = 0. + t3180 + t3186;
  t3250 = 0. + t2923 + t2938;
  t3272 = t667*t1566*t2299;
  t3278 = -1.*t1481*t667*t2797;
  t3306 = 0. + t3272 + t3278;
  t3317 = -1.*t667*t1566*t1462;
  t3318 = -1.*t1512*t2797;
  t3320 = 0. + t3317 + t3318;
  t4386 = -0.766044*t3831;
  t4408 = 0.642788*t3849;
  t4409 = t4386 + t4408;
  t4459 = -0.766044*t4284;
  t4463 = 0.642788*t4298;
  t4465 = t4459 + t4463;
  t4425 = -0.766044*t4093;
  t4432 = 0.642788*t4119;
  t4435 = t4425 + t4432;

  p_output1(0)=0. + t3010*t3086*t3103 - 1.*t3010*t3030*t3067*t508 - 1.*t2339*t3010*t508*t613;
  p_output1(1)=0. + t3010*t3086*t3160 - 1.*t3010*t3030*t3191*t508 - 1.*t3010*t3122*t508*t613;
  p_output1(2)=0. + t3010*t3086*t3306 - 1.*t3010*t3030*t3320*t508 - 1.*t3010*t3250*t508*t613;
  p_output1(3)=0. + t2339*t3010*t3864 + t3010*t3067*t4134 + t3010*t3103*t4319;
  p_output1(4)=0. + t3010*t3122*t3864 + t3010*t3191*t4134 + t3010*t3160*t4319;
  p_output1(5)=0. + t3010*t3250*t3864 + t3010*t3320*t4134 + t3010*t3306*t4319;
  p_output1(6)=0. + t2339*t3010*t4409 + t3010*t3067*t4435 + t3010*t3103*t4465;
  p_output1(7)=0. + t3010*t3122*t4409 + t3010*t3191*t4435 + t3010*t3160*t4465;
  p_output1(8)=0. + t3010*t3250*t4409 + t3010*t3320*t4435 + t3010*t3306*t4465;
}


       
Eigen::Matrix<double,3,3> R_LeftToeBottom_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



