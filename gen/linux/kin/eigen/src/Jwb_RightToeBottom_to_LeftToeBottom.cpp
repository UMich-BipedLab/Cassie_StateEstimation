/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:23:12 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jwb_RightToeBottom_to_LeftToeBottom.h"

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
  double t383;
  double t405;
  double t454;
  double t385;
  double t428;
  double t441;
  double t380;
  double t460;
  double t488;
  double t510;
  double t553;
  double t453;
  double t514;
  double t518;
  double t378;
  double t573;
  double t584;
  double t590;
  double t687;
  double t529;
  double t605;
  double t630;
  double t371;
  double t712;
  double t729;
  double t730;
  double t324;
  double t346;
  double t936;
  double t963;
  double t968;
  double t913;
  double t970;
  double t972;
  double t998;
  double t1013;
  double t975;
  double t1023;
  double t1042;
  double t1062;
  double t1073;
  double t1082;
  double t816;
  double t793;
  double t795;
  double t802;
  double t681;
  double t742;
  double t745;
  double t1112;
  double t1113;
  double t1148;
  double t1046;
  double t1095;
  double t1101;
  double t1417;
  double t1563;
  double t1513;
  double t1521;
  double t1569;
  double t1484;
  double t1620;
  double t1621;
  double t1622;
  double t1543;
  double t1582;
  double t1592;
  double t1624;
  double t1459;
  double t1734;
  double t1758;
  double t1788;
  double t1599;
  double t1630;
  double t1668;
  double t1793;
  double t1451;
  double t1845;
  double t1868;
  double t1875;
  double t1669;
  double t1809;
  double t1814;
  double t1909;
  double t1440;
  double t1936;
  double t1937;
  double t1959;
  double t1843;
  double t1910;
  double t1926;
  double t1979;
  double t2102;
  double t2137;
  double t2139;
  double t2157;
  double t2111;
  double t2116;
  double t2126;
  double t2223;
  double t2227;
  double t2247;
  double t2134;
  double t2161;
  double t2183;
  double t2271;
  double t2272;
  double t2279;
  double t2217;
  double t2248;
  double t2249;
  double t2470;
  double t2477;
  double t2486;
  double t2390;
  double t2400;
  double t2412;
  double t2551;
  double t2559;
  double t2564;
  double t2420;
  double t2490;
  double t2515;
  double t2613;
  double t2616;
  double t2617;
  double t2520;
  double t2592;
  double t2605;
  double t2672;
  double t2677;
  double t2693;
  double t2611;
  double t2630;
  double t2643;
  double t1933;
  double t1994;
  double t2007;
  double t2022;
  double t2071;
  double t2081;
  double t2266;
  double t2295;
  double t2303;
  double t2339;
  double t2347;
  double t2348;
  double t2649;
  double t2695;
  double t2710;
  double t2728;
  double t2733;
  double t2736;
  double t2878;
  double t2880;
  double t2924;
  double t2712;
  double t2741;
  double t2759;
  double t2331;
  double t2355;
  double t2367;
  double t2944;
  double t2950;
  double t2957;
  double t2021;
  double t2091;
  double t2096;
  double t2379;
  double t2783;
  double t2830;
  double t2843;
  double t2848;
  double t2870;
  double t2871;
  double t2930;
  double t2962;
  double t2963;
  double t2971;
  double t2988;
  double t2990;
  double t2996;
  double t3001;
  double t3010;
  double t3019;
  double t3059;
  double t3076;
  double t3077;
  double t3092;
  double t3135;
  double t3145;
  double t3080;
  double t3162;
  double t3210;
  double t3222;
  double t3235;
  double t3236;
  double t3217;
  double t3252;
  double t3273;
  double t3292;
  double t3304;
  double t3311;
  double t179;
  double t3419;
  double t3411;
  double t3412;
  double t3420;
  double t3421;
  double t3436;
  double t3441;
  double t3444;
  double t3425;
  double t3464;
  double t3518;
  double t3530;
  double t3551;
  double t3602;
  double t3521;
  double t3646;
  double t3653;
  double t3664;
  double t3677;
  double t3683;
  double t3657;
  double t3690;
  double t3693;
  double t3743;
  double t3745;
  double t3749;
  double t3912;
  double t3925;
  double t3932;
  double t3944;
  double t3946;
  double t3962;
  double t3935;
  double t3966;
  double t3969;
  double t4031;
  double t4060;
  double t4091;
  double t4028;
  double t4102;
  double t4119;
  double t4140;
  double t4159;
  double t4165;
  double t4136;
  double t4166;
  double t4187;
  double t4200;
  double t4202;
  double t4211;
  double t3288;
  double t3332;
  double t3339;
  double t3347;
  double t3350;
  double t3359;
  double t3695;
  double t3756;
  double t3789;
  double t3821;
  double t3837;
  double t3838;
  double t4198;
  double t4213;
  double t4232;
  double t4243;
  double t4249;
  double t4270;
  double t4337;
  double t4353;
  double t4379;
  double t3346;
  double t3360;
  double t3362;
  double t4449;
  double t4455;
  double t4478;
  double t3814;
  double t3850;
  double t3859;
  double t4532;
  double t4537;
  double t4544;
  double t4235;
  double t4272;
  double t4288;
  double t3034;
  double t3040;
  double t3041;
  double t4390;
  double t4395;
  double t4415;
  double t3398;
  double t3403;
  double t3406;
  double t4492;
  double t4498;
  double t4503;
  double t3899;
  double t4553;
  double t4556;
  double t4588;
  double t3009;
  double t3025;
  double t3030;
  double t4756;
  double t4778;
  double t4781;
  double t4791;
  double t4647;
  double t4652;
  double t4697;
  double t4746;
  double t4926;
  double t4930;
  double t4933;
  double t4842;
  double t4843;
  double t4871;
  double t4920;
  double t3391;
  double t3877;
  double t4306;
  double t4328;
  double t4919;
  double t4925;
  double t4934;
  double t4947;
  double t4432;
  double t4531;
  double t4597;
  double t4599;
  double t4959;
  double t4977;
  double t5033;
  double t5036;
  double t5048;
  double t5078;
  double t5082;
  double t5091;
  double t5165;
  double t5209;
  double t5216;
  double t5230;
  double t5426;
  double t5461;
  double t5464;
  double t5485;
  double t5486;
  double t5513;
  double t5481;
  double t5548;
  double t5555;
  double t5563;
  double t5583;
  double t5604;
  double t5558;
  double t5610;
  double t5615;
  double t5643;
  double t5645;
  double t5652;
  double t5323;
  double t5325;
  double t5342;
  double t4953;
  double t5100;
  double t5109;
  double t5121;
  double t5161;
  double t5242;
  double t5269;
  double t5280;
  double t5285;
  double t5293;
  double t5316;
  double t5317;
  double t5346;
  double t5347;
  double t5373;
  double t5389;
  double t5415;
  double t5835;
  double t5836;
  double t5857;
  double t5832;
  double t5860;
  double t5881;
  double t5915;
  double t5916;
  double t5912;
  double t5930;
  double t5935;
  double t5953;
  double t5957;
  double t5963;
  double t1433;
  double t5617;
  double t5658;
  double t5666;
  double t5671;
  double t5680;
  double t5733;
  double t5743;
  double t5745;
  double t5751;
  double t5757;
  double t5770;
  double t5952;
  double t5970;
  double t5979;
  double t5983;
  double t5988;
  double t5995;
  double t6005;
  double t6007;
  double t6012;
  double t6013;
  double t6031;
  double t5797;
  double t5817;
  double t6039;
  double t6047;
  double t6048;
  double t6056;
  double t6057;
  double t6435;
  double t6453;
  double t6476;
  double t6198;
  double t6206;
  double t6488;
  double t6507;
  double t6509;
  double t6215;
  double t6233;
  double t6247;
  double t6261;
  double t6265;
  double t6385;
  double t6386;
  double t6398;
  double t6402;
  double t6407;
  double t6414;
  double t6422;
  double t4634;
  double t4810;
  double t4821;
  double t4823;
  double t4825;
  double t6078;
  double t6148;
  double t6155;
  double t6168;
  double t6174;
  double t6310;
  double t6320;
  double t6327;
  double t6378;
  double t6380;
  double t6638;
  double t6650;
  double t6654;
  double t6664;
  double t6671;
  double t6676;
  t383 = Cos(var1[6]);
  t405 = Sin(var1[6]);
  t454 = Cos(var1[5]);
  t385 = 0.642788*t383;
  t428 = -0.766044*t405;
  t441 = t385 + t428;
  t380 = Sin(var1[5]);
  t460 = 0.766044*t383;
  t488 = 0.642788*t405;
  t510 = t460 + t488;
  t553 = Cos(var1[4]);
  t453 = t380*t441;
  t514 = t454*t510;
  t518 = 0. + t453 + t514;
  t378 = Sin(var1[4]);
  t573 = t454*t441;
  t584 = -1.*t380*t510;
  t590 = 0. + t573 + t584;
  t687 = Sin(var1[3]);
  t529 = -1.*t378*t518;
  t605 = t553*t590;
  t630 = 0. + t529 + t605;
  t371 = Cos(var1[3]);
  t712 = t553*t518;
  t729 = t378*t590;
  t730 = 0. + t712 + t729;
  t324 = Cos(var1[1]);
  t346 = Cos(var1[2]);
  t936 = -0.766044*t383;
  t963 = -0.642788*t405;
  t968 = t936 + t963;
  t913 = -1.*t380*t441;
  t970 = t454*t968;
  t972 = 0. + t913 + t970;
  t998 = t380*t968;
  t1013 = 0. + t573 + t998;
  t975 = t378*t972;
  t1023 = t553*t1013;
  t1042 = 0. + t975 + t1023;
  t1062 = t553*t972;
  t1073 = -1.*t378*t1013;
  t1082 = 0. + t1062 + t1073;
  t816 = Sin(var1[2]);
  t793 = t687*t630;
  t795 = t371*t730;
  t802 = 0. + t793 + t795;
  t681 = t371*t630;
  t742 = -1.*t687*t730;
  t745 = 0. + t681 + t742;
  t1112 = t371*t1042;
  t1113 = t687*t1082;
  t1148 = 0. + t1112 + t1113;
  t1046 = -1.*t687*t1042;
  t1095 = t371*t1082;
  t1101 = 0. + t1046 + t1095;
  t1417 = Sin(var1[8]);
  t1563 = Cos(var1[7]);
  t1513 = Cos(var1[9]);
  t1521 = Sin(var1[7]);
  t1569 = Sin(var1[9]);
  t1484 = Cos(var1[10]);
  t1620 = t1563*t1513;
  t1621 = -1.*t1521*t1417*t1569;
  t1622 = t1620 + t1621;
  t1543 = t1513*t1521*t1417;
  t1582 = t1563*t1569;
  t1592 = t1543 + t1582;
  t1624 = Sin(var1[10]);
  t1459 = Cos(var1[11]);
  t1734 = t1484*t1622;
  t1758 = -1.*t1592*t1624;
  t1788 = t1734 + t1758;
  t1599 = t1484*t1592;
  t1630 = t1622*t1624;
  t1668 = t1599 + t1630;
  t1793 = Sin(var1[11]);
  t1451 = Cos(var1[12]);
  t1845 = t1459*t1788;
  t1868 = -1.*t1668*t1793;
  t1875 = t1845 + t1868;
  t1669 = t1459*t1668;
  t1809 = t1788*t1793;
  t1814 = t1669 + t1809;
  t1909 = Sin(var1[12]);
  t1440 = Cos(var1[13]);
  t1936 = t1451*t1875;
  t1937 = -1.*t1814*t1909;
  t1959 = t1936 + t1937;
  t1843 = t1451*t1814;
  t1910 = t1875*t1909;
  t1926 = t1843 + t1910;
  t1979 = Sin(var1[13]);
  t2102 = Cos(var1[8]);
  t2137 = -1.*t2102*t1484*t1569;
  t2139 = -1.*t2102*t1513*t1624;
  t2157 = t2137 + t2139;
  t2111 = t2102*t1513*t1484;
  t2116 = -1.*t2102*t1569*t1624;
  t2126 = t2111 + t2116;
  t2223 = t1459*t2157;
  t2227 = -1.*t2126*t1793;
  t2247 = t2223 + t2227;
  t2134 = t1459*t2126;
  t2161 = t2157*t1793;
  t2183 = t2134 + t2161;
  t2271 = t1451*t2247;
  t2272 = -1.*t2183*t1909;
  t2279 = t2271 + t2272;
  t2217 = t1451*t2183;
  t2248 = t2247*t1909;
  t2249 = t2217 + t2248;
  t2470 = -1.*t1513*t1521;
  t2477 = -1.*t1563*t1417*t1569;
  t2486 = t2470 + t2477;
  t2390 = t1563*t1513*t1417;
  t2400 = -1.*t1521*t1569;
  t2412 = t2390 + t2400;
  t2551 = t1484*t2486;
  t2559 = -1.*t2412*t1624;
  t2564 = t2551 + t2559;
  t2420 = t1484*t2412;
  t2490 = t2486*t1624;
  t2515 = t2420 + t2490;
  t2613 = t1459*t2564;
  t2616 = -1.*t2515*t1793;
  t2617 = t2613 + t2616;
  t2520 = t1459*t2515;
  t2592 = t2564*t1793;
  t2605 = t2520 + t2592;
  t2672 = t1451*t2617;
  t2677 = -1.*t2605*t1909;
  t2693 = t2672 + t2677;
  t2611 = t1451*t2605;
  t2630 = t2617*t1909;
  t2643 = t2611 + t2630;
  t1933 = t1440*t1926;
  t1994 = t1959*t1979;
  t2007 = t1933 + t1994;
  t2022 = t1440*t1959;
  t2071 = -1.*t1926*t1979;
  t2081 = t2022 + t2071;
  t2266 = t1440*t2249;
  t2295 = t2279*t1979;
  t2303 = t2266 + t2295;
  t2339 = t1440*t2279;
  t2347 = -1.*t2249*t1979;
  t2348 = t2339 + t2347;
  t2649 = t1440*t2643;
  t2695 = t2693*t1979;
  t2710 = t2649 + t2695;
  t2728 = t1440*t2693;
  t2733 = -1.*t2643*t1979;
  t2736 = t2728 + t2733;
  t2878 = 0.642788*t2303;
  t2880 = 0.766044*t2348;
  t2924 = t2878 + t2880;
  t2712 = -0.766044*t2710;
  t2741 = 0.642788*t2736;
  t2759 = t2712 + t2741;
  t2331 = -0.766044*t2303;
  t2355 = 0.642788*t2348;
  t2367 = t2331 + t2355;
  t2944 = 0.642788*t2710;
  t2950 = 0.766044*t2736;
  t2957 = t2944 + t2950;
  t2021 = 0.642788*t2007;
  t2091 = 0.766044*t2081;
  t2096 = t2021 + t2091;
  t2379 = t1563*t2102*t2367;
  t2783 = t1417*t2759;
  t2830 = t2379 + t2783;
  t2843 = -1.*t2096*t2830;
  t2848 = -0.766044*t2007;
  t2870 = 0.642788*t2081;
  t2871 = t2848 + t2870;
  t2930 = t1563*t2102*t2924;
  t2962 = t1417*t2957;
  t2963 = t2930 + t2962;
  t2971 = t2871*t2963;
  t2988 = t2924*t2759;
  t2990 = -1.*t2367*t2957;
  t2996 = t2988 + t2990;
  t3001 = -1.*t2102*t1521*t2996;
  t3010 = 0. + t2843 + t2971 + t3001;
  t3019 = 1/t3010;
  t3059 = -1.*t324*t346*t687;
  t3076 = -1.*t371*t324*t816;
  t3077 = t3059 + t3076;
  t3092 = t371*t324*t346;
  t3135 = -1.*t324*t687*t816;
  t3145 = t3092 + t3135;
  t3080 = t378*t3077;
  t3162 = t553*t3145;
  t3210 = t3080 + t3162;
  t3222 = t553*t3077;
  t3235 = -1.*t378*t3145;
  t3236 = t3222 + t3235;
  t3217 = -1.*t380*t3210;
  t3252 = t454*t3236;
  t3273 = t3217 + t3252;
  t3292 = t454*t3210;
  t3304 = t380*t3236;
  t3311 = t3292 + t3304;
  t179 = Sin(var1[1]);
  t3419 = Sin(var1[0]);
  t3411 = Cos(var1[0]);
  t3412 = t3411*t346*t179;
  t3420 = -1.*t3419*t816;
  t3421 = t3412 + t3420;
  t3436 = -1.*t346*t3419;
  t3441 = -1.*t3411*t179*t816;
  t3444 = t3436 + t3441;
  t3425 = -1.*t687*t3421;
  t3464 = t371*t3444;
  t3518 = t3425 + t3464;
  t3530 = t371*t3421;
  t3551 = t687*t3444;
  t3602 = t3530 + t3551;
  t3521 = t378*t3518;
  t3646 = t553*t3602;
  t3653 = t3521 + t3646;
  t3664 = t553*t3518;
  t3677 = -1.*t378*t3602;
  t3683 = t3664 + t3677;
  t3657 = -1.*t380*t3653;
  t3690 = t454*t3683;
  t3693 = t3657 + t3690;
  t3743 = t454*t3653;
  t3745 = t380*t3683;
  t3749 = t3743 + t3745;
  t3912 = t346*t3419*t179;
  t3925 = t3411*t816;
  t3932 = t3912 + t3925;
  t3944 = t3411*t346;
  t3946 = -1.*t3419*t179*t816;
  t3962 = t3944 + t3946;
  t3935 = -1.*t687*t3932;
  t3966 = t371*t3962;
  t3969 = t3935 + t3966;
  t4031 = t371*t3932;
  t4060 = t687*t3962;
  t4091 = t4031 + t4060;
  t4028 = t378*t3969;
  t4102 = t553*t4091;
  t4119 = t4028 + t4102;
  t4140 = t553*t3969;
  t4159 = -1.*t378*t4091;
  t4165 = t4140 + t4159;
  t4136 = -1.*t380*t4119;
  t4166 = t454*t4165;
  t4187 = t4136 + t4166;
  t4200 = t454*t4119;
  t4202 = t380*t4165;
  t4211 = t4200 + t4202;
  t3288 = t405*t3273;
  t3332 = t383*t3311;
  t3339 = t3288 + t3332;
  t3347 = t383*t3273;
  t3350 = -1.*t405*t3311;
  t3359 = t3347 + t3350;
  t3695 = t405*t3693;
  t3756 = t383*t3749;
  t3789 = t3695 + t3756;
  t3821 = t383*t3693;
  t3837 = -1.*t405*t3749;
  t3838 = t3821 + t3837;
  t4198 = t405*t4187;
  t4213 = t383*t4211;
  t4232 = t4198 + t4213;
  t4243 = t383*t4187;
  t4249 = -1.*t405*t4211;
  t4270 = t4243 + t4249;
  t4337 = -1.*t2102*t1521*t2759;
  t4353 = t1563*t2102*t2871;
  t4379 = 0. + t4337 + t4353;
  t3346 = -0.766044*t3339;
  t3360 = 0.642788*t3359;
  t3362 = t3346 + t3360;
  t4449 = t2102*t1521*t2367;
  t4455 = t1417*t2871;
  t4478 = 0. + t4449 + t4455;
  t3814 = -0.766044*t3789;
  t3850 = 0.642788*t3838;
  t3859 = t3814 + t3850;
  t4532 = -1.*t1563*t2102*t2367;
  t4537 = -1.*t1417*t2759;
  t4544 = 0. + t4532 + t4537;
  t4235 = -0.766044*t4232;
  t4272 = 0.642788*t4270;
  t4288 = t4235 + t4272;
  t3034 = t2102*t1521*t2957;
  t3040 = -1.*t1563*t2102*t2096;
  t3041 = 0. + t3034 + t3040;
  t4390 = 0.642788*t3339;
  t4395 = 0.766044*t3359;
  t4415 = t4390 + t4395;
  t3398 = -1.*t2102*t1521*t2924;
  t3403 = -1.*t1417*t2096;
  t3406 = 0. + t3398 + t3403;
  t4492 = 0.642788*t3789;
  t4498 = 0.766044*t3838;
  t4503 = t4492 + t4498;
  t3899 = 0. + t2930 + t2962;
  t4553 = 0.642788*t4232;
  t4556 = 0.766044*t4270;
  t4588 = t4553 + t4556;
  t3009 = t2843 + t2971 + t3001;
  t3025 = t3009*t3019;
  t3030 = 0. + t3025;
  t4756 = t3041*t3019*t4415;
  t4778 = t3406*t3019*t4503;
  t4781 = t3899*t3019*t4588;
  t4791 = 0. + t4756 + t4778 + t4781;
  t4647 = t4379*t3019*t3362;
  t4652 = t4478*t3019*t3859;
  t4697 = t4544*t3019*t4288;
  t4746 = 0. + t4647 + t4652 + t4697;
  t4926 = t2957*t2871;
  t4930 = -1.*t2759*t2096;
  t4933 = 0. + t4926 + t4930;
  t4842 = -1.*t2924*t2871;
  t4843 = t2367*t2096;
  t4871 = 0. + t4842 + t4843;
  t4920 = 0. + t2988 + t2990;
  t3391 = t3041*t3019*t3362;
  t3877 = t3406*t3019*t3859;
  t4306 = t3899*t3019*t4288;
  t4328 = 0. + t3391 + t3877 + t4306;
  t4919 = -1.*t3411*t324*t4871*t3019;
  t4925 = -1.*t324*t4920*t3019*t3419;
  t4934 = t4933*t3019*t179;
  t4947 = 0. + t4919 + t4925 + t4934;
  t4432 = t4379*t3019*t4415;
  t4531 = t4478*t3019*t4503;
  t4597 = t4544*t3019*t4588;
  t4599 = 0. + t4432 + t4531 + t4597;
  t4959 = -1.*t3411*t324*t4478*t3019;
  t4977 = -1.*t324*t4544*t3019*t3419;
  t5033 = t4379*t3019*t179;
  t5036 = 0. + t4959 + t4977 + t5033;
  t5048 = t4933*t3019*t3362;
  t5078 = t4871*t3019*t3859;
  t5082 = t4920*t3019*t4288;
  t5091 = 0. + t5048 + t5078 + t5082;
  t5165 = t4933*t3019*t4415;
  t5209 = t4871*t3019*t4503;
  t5216 = t4920*t3019*t4588;
  t5230 = 0. + t5165 + t5209 + t5216;
  t5426 = 0.642788*t1440;
  t5461 = -0.766044*t1979;
  t5464 = t5426 + t5461;
  t5485 = -0.766044*t1440;
  t5486 = -0.642788*t1979;
  t5513 = t5485 + t5486;
  t5481 = -1.*t1909*t5464;
  t5548 = t1451*t5513;
  t5555 = 0. + t5481 + t5548;
  t5563 = t1451*t5464;
  t5583 = t1909*t5513;
  t5604 = 0. + t5563 + t5583;
  t5558 = t1793*t5555;
  t5610 = t1459*t5604;
  t5615 = 0. + t5558 + t5610;
  t5643 = t1459*t5555;
  t5645 = -1.*t1793*t5604;
  t5652 = 0. + t5643 + t5645;
  t5323 = -1.*t5091*t4599;
  t5325 = t4746*t5230;
  t5342 = t5323 + t5325;
  t4953 = t4947*t4746;
  t5100 = -1.*t5036*t5091;
  t5109 = t4953 + t5100;
  t5121 = -1.*t4791*t5109;
  t5161 = t4947*t4599;
  t5242 = -1.*t5036*t5230;
  t5269 = t5161 + t5242;
  t5280 = t4328*t5269;
  t5285 = -1.*t3411*t324*t3406*t3019;
  t5293 = -1.*t324*t3899*t3019*t3419;
  t5316 = t3041*t3019*t179;
  t5317 = 0. + t5285 + t5293 + t5316;
  t5346 = t5317*t5342;
  t5347 = t5121 + t5280 + t5346;
  t5373 = t3030*t5347;
  t5389 = 0. + t5373;
  t5415 = 1/t5389;
  t5835 = 0.766044*t1440;
  t5836 = 0.642788*t1979;
  t5857 = t5835 + t5836;
  t5832 = t1909*t5464;
  t5860 = t1451*t5857;
  t5881 = 0. + t5832 + t5860;
  t5915 = -1.*t1909*t5857;
  t5916 = 0. + t5563 + t5915;
  t5912 = -1.*t1793*t5881;
  t5930 = t1459*t5916;
  t5935 = 0. + t5912 + t5930;
  t5953 = t1459*t5881;
  t5957 = t1793*t5916;
  t5963 = 0. + t5953 + t5957;
  t1433 = 0. + t1417;
  t5617 = -1.*t1624*t5615;
  t5658 = t1484*t5652;
  t5666 = 0. + t5617 + t5658;
  t5671 = t1513*t5666;
  t5680 = t1484*t5615;
  t5733 = t1624*t5652;
  t5743 = 0. + t5680 + t5733;
  t5745 = -1.*t1569*t5743;
  t5751 = 0. + t5671 + t5745;
  t5757 = t2102*t5751;
  t5770 = 0. + t5757;
  t5952 = t1624*t5935;
  t5970 = t1484*t5963;
  t5979 = 0. + t5952 + t5970;
  t5983 = -1.*t1569*t5979;
  t5988 = t1484*t5935;
  t5995 = -1.*t1624*t5963;
  t6005 = 0. + t5988 + t5995;
  t6007 = t1513*t6005;
  t6012 = 0. + t5983 + t6007;
  t6013 = t2102*t6012;
  t6031 = 0. + t6013;
  t5797 = t3030*t5342;
  t5817 = 0. + t5797;
  t6039 = -1.*t5091*t4791;
  t6047 = t4328*t5230;
  t6048 = t6039 + t6047;
  t6056 = -1.*t3030*t6048;
  t6057 = 0. + t6056;
  t6435 = t1569*t5666;
  t6453 = t1513*t5743;
  t6476 = 0. + t6435 + t6453;
  t6198 = -1.*t3030*t5109;
  t6206 = 0. + t6198;
  t6488 = t1513*t5979;
  t6507 = t1569*t6005;
  t6509 = 0. + t6488 + t6507;
  t6215 = t4947*t4328;
  t6233 = -1.*t5317*t5091;
  t6247 = t6215 + t6233;
  t6261 = t3030*t6247;
  t6265 = 0. + t6261;
  t6385 = t3030*t5269;
  t6386 = 0. + t6385;
  t6398 = t4947*t4791;
  t6402 = -1.*t5317*t5230;
  t6407 = t6398 + t6402;
  t6414 = -1.*t3030*t6407;
  t6422 = 0. + t6414;
  t4634 = t4328*t4599;
  t4810 = -1.*t4746*t4791;
  t4821 = t4634 + t4810;
  t4823 = t3030*t4821;
  t4825 = 0. + t4823;
  t6078 = -1.*t5317*t4746;
  t6148 = t5036*t4328;
  t6155 = t6078 + t6148;
  t6168 = -1.*t3030*t6155;
  t6174 = 0. + t6168;
  t6310 = -1.*t5317*t4599;
  t6320 = t5036*t4791;
  t6327 = t6310 + t6320;
  t6378 = t3030*t6327;
  t6380 = 0. + t6378;
  t6638 = -1.*t4825*t5415;
  t6650 = 0. + t6638;
  t6654 = -1.*t6174*t5415;
  t6664 = 0. + t6654;
  t6671 = -1.*t6380*t5415;
  t6676 = 0. + t6671;

  p_output1(0)=0. + t179;
  p_output1(1)=0. + t324*(0. + t346*t745 - 1.*t802*t816);
  p_output1(2)=0. + t324*(0. + t1101*t346 - 1.*t1148*t816);
  p_output1(3)=0.;
  p_output1(4)=0. + t346*t802 + t745*t816;
  p_output1(5)=0. + t1148*t346 + t1101*t816;
  p_output1(6)=1.;
  p_output1(7)=0.;
  p_output1(8)=0.;
  p_output1(9)=1.;
  p_output1(10)=0.;
  p_output1(11)=0.;
  p_output1(12)=1.;
  p_output1(13)=0.;
  p_output1(14)=0.;
  p_output1(15)=1.;
  p_output1(16)=0.;
  p_output1(17)=0.;
  p_output1(18)=1.;
  p_output1(19)=0.;
  p_output1(20)=0.;
  p_output1(21)=-1.*t1433*t4825*t5415 - 1.*t5415*t5770*t5817 - 1.*t5415*t6031*t6057;
  p_output1(22)=-1.*t1433*t5415*t6174 - 1.*t5415*t5770*t6206 - 1.*t5415*t6031*t6265;
  p_output1(23)=-1.*t1433*t5415*t6380 - 1.*t5415*t5770*t6386 - 1.*t5415*t6031*t6422;
  p_output1(24)=0. - 1.*t5415*t5817*t6476 - 1.*t5415*t6057*t6509;
  p_output1(25)=0. - 1.*t5415*t6206*t6476 - 1.*t5415*t6265*t6509;
  p_output1(26)=0. - 1.*t5415*t6386*t6476 - 1.*t5415*t6422*t6509;
  p_output1(27)=t6650;
  p_output1(28)=t6664;
  p_output1(29)=t6676;
  p_output1(30)=t6650;
  p_output1(31)=t6664;
  p_output1(32)=t6676;
  p_output1(33)=t6650;
  p_output1(34)=t6664;
  p_output1(35)=t6676;
  p_output1(36)=t6650;
  p_output1(37)=t6664;
  p_output1(38)=t6676;
  p_output1(39)=t6650;
  p_output1(40)=t6664;
  p_output1(41)=t6676;
}


       
Eigen::Matrix<double,3,14> Jwb_RightToeBottom_to_LeftToeBottom(const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}


