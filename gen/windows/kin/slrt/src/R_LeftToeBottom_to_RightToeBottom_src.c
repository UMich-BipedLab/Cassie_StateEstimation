/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:11:29 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottom_to_RightToeBottom_src.h"

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
  double t388;
  double t672;
  double t626;
  double t641;
  double t714;
  double t877;
  double t647;
  double t751;
  double t777;
  double t351;
  double t898;
  double t920;
  double t930;
  double t1024;
  double t841;
  double t977;
  double t983;
  double t332;
  double t1083;
  double t1089;
  double t1099;
  double t1257;
  double t1019;
  double t1103;
  double t1107;
  double t278;
  double t1295;
  double t1328;
  double t1334;
  double t1487;
  double t1461;
  double t1465;
  double t1482;
  double t1510;
  double t1526;
  double t1583;
  double t1617;
  double t1620;
  double t1571;
  double t1654;
  double t1657;
  double t1690;
  double t1718;
  double t1732;
  double t1677;
  double t1752;
  double t1766;
  double t1819;
  double t1828;
  double t1830;
  double t1796;
  double t1865;
  double t1868;
  double t1876;
  double t1893;
  double t1900;
  double t1142;
  double t1339;
  double t1347;
  double t1404;
  double t1432;
  double t1433;
  double t1875;
  double t1901;
  double t1924;
  double t1965;
  double t1989;
  double t2009;
  double t2276;
  double t2282;
  double t2317;
  double t2324;
  double t2333;
  double t2337;
  double t2319;
  double t2352;
  double t2356;
  double t2438;
  double t2448;
  double t2473;
  double t2408;
  double t2536;
  double t2556;
  double t2570;
  double t2586;
  double t2601;
  double t2557;
  double t2630;
  double t2638;
  double t2718;
  double t2750;
  double t2765;
  double t2120;
  double t2129;
  double t2151;
  double t1940;
  double t2084;
  double t2099;
  double t2707;
  double t2770;
  double t2787;
  double t2825;
  double t2833;
  double t2835;
  double t1397;
  double t1437;
  double t1447;
  double t2192;
  double t2200;
  double t2215;
  double t2119;
  double t2239;
  double t104;
  double t2907;
  double t2911;
  double t2923;
  double t2789;
  double t2849;
  double t2855;
  double t2860;
  double t2868;
  double t2878;
  double t2906;
  double t2944;
  double t2950;
  double t3002;
  double t3004;
  double t3016;
  double t3029;
  double t3030;
  double t3067;
  double t117;
  double t3185;
  double t3107;
  double t3526;
  double t3544;
  double t3519;
  double t3561;
  double t3574;
  double t3581;
  double t3530;
  double t3546;
  double t3553;
  double t3594;
  double t3517;
  double t3673;
  double t3678;
  double t3702;
  double t3558;
  double t3599;
  double t3609;
  double t3706;
  double t3513;
  double t3736;
  double t3741;
  double t3752;
  double t3649;
  double t3721;
  double t3727;
  double t3768;
  double t3509;
  double t3791;
  double t3795;
  double t3797;
  double t3732;
  double t3776;
  double t3777;
  double t3806;
  double t2248;
  double t3923;
  double t3924;
  double t3925;
  double t3875;
  double t3898;
  double t3902;
  double t3959;
  double t3961;
  double t3964;
  double t3910;
  double t3928;
  double t3941;
  double t3987;
  double t3988;
  double t3993;
  double t3949;
  double t3965;
  double t3981;
  double t4002;
  double t4003;
  double t4007;
  double t3982;
  double t3996;
  double t3998;
  double t3125;
  double t3140;
  double t3159;
  double t4087;
  double t4089;
  double t4091;
  double t4066;
  double t4076;
  double t4077;
  double t4118;
  double t4119;
  double t4124;
  double t4084;
  double t4092;
  double t4103;
  double t4151;
  double t4153;
  double t4157;
  double t4105;
  double t4126;
  double t4148;
  double t3191;
  double t3214;
  double t3217;
  double t3785;
  double t3817;
  double t3820;
  double t3846;
  double t3848;
  double t3851;
  double t3854;
  double t3857;
  double t3859;
  double t3244;
  double t3259;
  double t3267;
  double t4149;
  double t4170;
  double t4172;
  double t4173;
  double t4181;
  double t4205;
  double t4208;
  double t4211;
  double t4214;
  double t3286;
  double t3319;
  double t3324;
  double t4001;
  double t4014;
  double t4015;
  double t4016;
  double t4020;
  double t4023;
  double t4025;
  double t4030;
  double t4036;
  double t3339;
  double t3367;
  double t3383;
  double t3399;
  double t3450;
  double t3453;
  double t3464;
  double t3476;
  double t3485;
  double t3494;
  double t4264;
  double t4269;
  double t4274;
  double t4298;
  double t4311;
  double t4312;
  double t4278;
  double t4279;
  double t4291;
  t388 = Cos(var1[1]);
  t672 = Cos(var1[3]);
  t626 = Cos(var1[2]);
  t641 = Sin(var1[3]);
  t714 = Sin(var1[2]);
  t877 = Cos(var1[4]);
  t647 = -1.*t388*t626*t641;
  t751 = -1.*t672*t388*t714;
  t777 = t647 + t751;
  t351 = Sin(var1[4]);
  t898 = t672*t388*t626;
  t920 = -1.*t388*t641*t714;
  t930 = t898 + t920;
  t1024 = Cos(var1[5]);
  t841 = t351*t777;
  t977 = t877*t930;
  t983 = t841 + t977;
  t332 = Sin(var1[5]);
  t1083 = t877*t777;
  t1089 = -1.*t351*t930;
  t1099 = t1083 + t1089;
  t1257 = Cos(var1[6]);
  t1019 = -1.*t332*t983;
  t1103 = t1024*t1099;
  t1107 = t1019 + t1103;
  t278 = Sin(var1[6]);
  t1295 = t1024*t983;
  t1328 = t332*t1099;
  t1334 = t1295 + t1328;
  t1487 = Sin(var1[0]);
  t1461 = Cos(var1[0]);
  t1465 = Sin(var1[1]);
  t1482 = t1461*t626*t1465;
  t1510 = -1.*t1487*t714;
  t1526 = t1482 + t1510;
  t1583 = -1.*t626*t1487;
  t1617 = -1.*t1461*t1465*t714;
  t1620 = t1583 + t1617;
  t1571 = -1.*t641*t1526;
  t1654 = t672*t1620;
  t1657 = t1571 + t1654;
  t1690 = t672*t1526;
  t1718 = t641*t1620;
  t1732 = t1690 + t1718;
  t1677 = t351*t1657;
  t1752 = t877*t1732;
  t1766 = t1677 + t1752;
  t1819 = t877*t1657;
  t1828 = -1.*t351*t1732;
  t1830 = t1819 + t1828;
  t1796 = -1.*t332*t1766;
  t1865 = t1024*t1830;
  t1868 = t1796 + t1865;
  t1876 = t1024*t1766;
  t1893 = t332*t1830;
  t1900 = t1876 + t1893;
  t1142 = t278*t1107;
  t1339 = t1257*t1334;
  t1347 = t1142 + t1339;
  t1404 = t1257*t1107;
  t1432 = -1.*t278*t1334;
  t1433 = t1404 + t1432;
  t1875 = t278*t1868;
  t1901 = t1257*t1900;
  t1924 = t1875 + t1901;
  t1965 = t1257*t1868;
  t1989 = -1.*t278*t1900;
  t2009 = t1965 + t1989;
  t2276 = t626*t1487*t1465;
  t2282 = t1461*t714;
  t2317 = t2276 + t2282;
  t2324 = t1461*t626;
  t2333 = -1.*t1487*t1465*t714;
  t2337 = t2324 + t2333;
  t2319 = -1.*t641*t2317;
  t2352 = t672*t2337;
  t2356 = t2319 + t2352;
  t2438 = t672*t2317;
  t2448 = t641*t2337;
  t2473 = t2438 + t2448;
  t2408 = t351*t2356;
  t2536 = t877*t2473;
  t2556 = t2408 + t2536;
  t2570 = t877*t2356;
  t2586 = -1.*t351*t2473;
  t2601 = t2570 + t2586;
  t2557 = -1.*t332*t2556;
  t2630 = t1024*t2601;
  t2638 = t2557 + t2630;
  t2718 = t1024*t2556;
  t2750 = t332*t2601;
  t2765 = t2718 + t2750;
  t2120 = -0.766044*t1347;
  t2129 = 0.642788*t1433;
  t2151 = t2120 + t2129;
  t1940 = -0.766044*t1924;
  t2084 = 0.642788*t2009;
  t2099 = t1940 + t2084;
  t2707 = t278*t2638;
  t2770 = t1257*t2765;
  t2787 = t2707 + t2770;
  t2825 = t1257*t2638;
  t2833 = -1.*t278*t2765;
  t2835 = t2825 + t2833;
  t1397 = 0.642788*t1347;
  t1437 = 0.766044*t1433;
  t1447 = t1397 + t1437;
  t2192 = 0.642788*t1924;
  t2200 = 0.766044*t2009;
  t2215 = t2192 + t2200;
  t2119 = t1447*t2099;
  t2239 = -1.*t2151*t2215;
  t104 = Cos(var1[8]);
  t2907 = -0.766044*t2787;
  t2911 = 0.642788*t2835;
  t2923 = t2907 + t2911;
  t2789 = 0.642788*t2787;
  t2849 = 0.766044*t2835;
  t2855 = t2789 + t2849;
  t2860 = t1461*t388*t2151;
  t2868 = t1465*t2099;
  t2878 = t2860 + t2868;
  t2906 = -1.*t2855*t2878;
  t2944 = t1461*t388*t1447;
  t2950 = t1465*t2215;
  t3002 = t2944 + t2950;
  t3004 = t2923*t3002;
  t3016 = t2119 + t2239;
  t3029 = -1.*t388*t1487*t3016;
  t3030 = 0. + t2906 + t3004 + t3029;
  t3067 = 1/t3030;
  t117 = Sin(var1[7]);
  t3185 = Sin(var1[8]);
  t3107 = Cos(var1[7]);
  t3526 = Cos(var1[9]);
  t3544 = Sin(var1[9]);
  t3519 = Cos(var1[10]);
  t3561 = t3107*t3526;
  t3574 = -1.*t117*t3185*t3544;
  t3581 = t3561 + t3574;
  t3530 = t3526*t117*t3185;
  t3546 = t3107*t3544;
  t3553 = t3530 + t3546;
  t3594 = Sin(var1[10]);
  t3517 = Cos(var1[11]);
  t3673 = t3519*t3581;
  t3678 = -1.*t3553*t3594;
  t3702 = t3673 + t3678;
  t3558 = t3519*t3553;
  t3599 = t3581*t3594;
  t3609 = t3558 + t3599;
  t3706 = Sin(var1[11]);
  t3513 = Cos(var1[12]);
  t3736 = t3517*t3702;
  t3741 = -1.*t3609*t3706;
  t3752 = t3736 + t3741;
  t3649 = t3517*t3609;
  t3721 = t3702*t3706;
  t3727 = t3649 + t3721;
  t3768 = Sin(var1[12]);
  t3509 = Cos(var1[13]);
  t3791 = t3513*t3752;
  t3795 = -1.*t3727*t3768;
  t3797 = t3791 + t3795;
  t3732 = t3513*t3727;
  t3776 = t3752*t3768;
  t3777 = t3732 + t3776;
  t3806 = Sin(var1[13]);
  t2248 = 0. + t2119 + t2239;
  t3923 = -1.*t3526*t117;
  t3924 = -1.*t3107*t3185*t3544;
  t3925 = t3923 + t3924;
  t3875 = t3107*t3526*t3185;
  t3898 = -1.*t117*t3544;
  t3902 = t3875 + t3898;
  t3959 = t3519*t3925;
  t3961 = -1.*t3902*t3594;
  t3964 = t3959 + t3961;
  t3910 = t3519*t3902;
  t3928 = t3925*t3594;
  t3941 = t3910 + t3928;
  t3987 = t3517*t3964;
  t3988 = -1.*t3941*t3706;
  t3993 = t3987 + t3988;
  t3949 = t3517*t3941;
  t3965 = t3964*t3706;
  t3981 = t3949 + t3965;
  t4002 = t3513*t3993;
  t4003 = -1.*t3981*t3768;
  t4007 = t4002 + t4003;
  t3982 = t3513*t3981;
  t3996 = t3993*t3768;
  t3998 = t3982 + t3996;
  t3125 = -1.*t1447*t2923;
  t3140 = t2151*t2855;
  t3159 = 0. + t3125 + t3140;
  t4087 = -1.*t104*t3519*t3544;
  t4089 = -1.*t104*t3526*t3594;
  t4091 = t4087 + t4089;
  t4066 = t104*t3526*t3519;
  t4076 = -1.*t104*t3544*t3594;
  t4077 = t4066 + t4076;
  t4118 = t3517*t4091;
  t4119 = -1.*t4077*t3706;
  t4124 = t4118 + t4119;
  t4084 = t3517*t4077;
  t4092 = t4091*t3706;
  t4103 = t4084 + t4092;
  t4151 = t3513*t4124;
  t4153 = -1.*t4103*t3768;
  t4157 = t4151 + t4153;
  t4105 = t3513*t4103;
  t4126 = t4124*t3768;
  t4148 = t4105 + t4126;
  t3191 = t2215*t2923;
  t3214 = -1.*t2099*t2855;
  t3217 = 0. + t3191 + t3214;
  t3785 = t3509*t3777;
  t3817 = t3797*t3806;
  t3820 = t3785 + t3817;
  t3846 = 0.642788*t3820;
  t3848 = t3509*t3797;
  t3851 = -1.*t3777*t3806;
  t3854 = t3848 + t3851;
  t3857 = 0.766044*t3854;
  t3859 = t3846 + t3857;
  t3244 = -1.*t1461*t388*t2151;
  t3259 = -1.*t1465*t2099;
  t3267 = 0. + t3244 + t3259;
  t4149 = t3509*t4148;
  t4170 = t4157*t3806;
  t4172 = t4149 + t4170;
  t4173 = 0.642788*t4172;
  t4181 = t3509*t4157;
  t4205 = -1.*t4148*t3806;
  t4208 = t4181 + t4205;
  t4211 = 0.766044*t4208;
  t4214 = t4173 + t4211;
  t3286 = -1.*t388*t1487*t2099;
  t3319 = t1461*t388*t2923;
  t3324 = 0. + t3286 + t3319;
  t4001 = t3509*t3998;
  t4014 = t4007*t3806;
  t4015 = t4001 + t4014;
  t4016 = 0.642788*t4015;
  t4020 = t3509*t4007;
  t4023 = -1.*t3998*t3806;
  t4025 = t4020 + t4023;
  t4030 = 0.766044*t4025;
  t4036 = t4016 + t4030;
  t3339 = t388*t1487*t2151;
  t3367 = t1465*t2923;
  t3383 = 0. + t3339 + t3367;
  t3399 = 0. + t2944 + t2950;
  t3450 = t388*t1487*t2215;
  t3453 = -1.*t1461*t388*t2855;
  t3464 = 0. + t3450 + t3453;
  t3476 = -1.*t388*t1487*t1447;
  t3485 = -1.*t1465*t2855;
  t3494 = 0. + t3476 + t3485;
  t4264 = -0.766044*t3820;
  t4269 = 0.642788*t3854;
  t4274 = t4264 + t4269;
  t4298 = -0.766044*t4172;
  t4311 = 0.642788*t4208;
  t4312 = t4298 + t4311;
  t4278 = -0.766044*t4015;
  t4279 = 0.642788*t4025;
  t4291 = t4278 + t4279;
  p_output1[0]=0. - 1.*t104*t117*t2248*t3067 - 1.*t104*t3067*t3107*t3159 + t3067*t3185*t3217;
  p_output1[1]=0. - 1.*t104*t117*t3067*t3267 + t3067*t3185*t3324 - 1.*t104*t3067*t3107*t3383;
  p_output1[2]=0. - 1.*t104*t117*t3067*t3399 + t3067*t3185*t3464 - 1.*t104*t3067*t3107*t3494;
  p_output1[3]=0. + t2248*t3067*t3859 + t3067*t3159*t4036 + t3067*t3217*t4214;
  p_output1[4]=0. + t3067*t3267*t3859 + t3067*t3383*t4036 + t3067*t3324*t4214;
  p_output1[5]=0. + t3067*t3399*t3859 + t3067*t3494*t4036 + t3067*t3464*t4214;
  p_output1[6]=0. + t2248*t3067*t4274 + t3067*t3159*t4291 + t3067*t3217*t4312;
  p_output1[7]=0. + t3067*t3267*t4274 + t3067*t3383*t4291 + t3067*t3324*t4312;
  p_output1[8]=0. + t3067*t3399*t4274 + t3067*t3494*t4291 + t3067*t3464*t4312;
}



void R_LeftToeBottom_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
