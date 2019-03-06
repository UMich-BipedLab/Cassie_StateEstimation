/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:02:21 GMT-05:00
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
  double t393;
  double t574;
  double t446;
  double t512;
  double t603;
  double t650;
  double t553;
  double t616;
  double t621;
  double t386;
  double t695;
  double t767;
  double t768;
  double t850;
  double t649;
  double t804;
  double t817;
  double t335;
  double t852;
  double t880;
  double t881;
  double t962;
  double t849;
  double t944;
  double t959;
  double t327;
  double t967;
  double t986;
  double t1031;
  double t1365;
  double t1314;
  double t1328;
  double t1345;
  double t1380;
  double t1393;
  double t1418;
  double t1437;
  double t1455;
  double t1397;
  double t1463;
  double t1522;
  double t1577;
  double t1651;
  double t1708;
  double t1527;
  double t1710;
  double t1737;
  double t1743;
  double t1751;
  double t1766;
  double t1742;
  double t1782;
  double t1813;
  double t1879;
  double t1903;
  double t1907;
  double t960;
  double t1038;
  double t1098;
  double t1180;
  double t1205;
  double t1206;
  double t1820;
  double t1936;
  double t1938;
  double t1998;
  double t2015;
  double t2019;
  double t2180;
  double t2203;
  double t2216;
  double t2236;
  double t2256;
  double t2300;
  double t2219;
  double t2343;
  double t2379;
  double t2441;
  double t2448;
  double t2462;
  double t2415;
  double t2466;
  double t2470;
  double t2480;
  double t2484;
  double t2493;
  double t2471;
  double t2572;
  double t2586;
  double t2631;
  double t2649;
  double t2651;
  double t2045;
  double t2062;
  double t2088;
  double t1962;
  double t2026;
  double t2029;
  double t2613;
  double t2678;
  double t2682;
  double t2733;
  double t2743;
  double t2748;
  double t1126;
  double t1267;
  double t1302;
  double t2091;
  double t2098;
  double t2110;
  double t2037;
  double t2123;
  double t91;
  double t2831;
  double t2837;
  double t2842;
  double t2695;
  double t2751;
  double t2787;
  double t2807;
  double t2814;
  double t2821;
  double t2827;
  double t2866;
  double t2871;
  double t2875;
  double t2897;
  double t2913;
  double t2926;
  double t2927;
  double t2933;
  double t306;
  double t3030;
  double t2944;
  double t3370;
  double t3380;
  double t3360;
  double t3412;
  double t3416;
  double t3417;
  double t3378;
  double t3388;
  double t3389;
  double t3425;
  double t3357;
  double t3449;
  double t3453;
  double t3460;
  double t3410;
  double t3429;
  double t3431;
  double t3462;
  double t3356;
  double t3508;
  double t3515;
  double t3526;
  double t3446;
  double t3470;
  double t3496;
  double t3530;
  double t3331;
  double t3600;
  double t3606;
  double t3625;
  double t3501;
  double t3537;
  double t3547;
  double t3628;
  double t2126;
  double t3717;
  double t3723;
  double t3724;
  double t3692;
  double t3699;
  double t3709;
  double t3766;
  double t3770;
  double t3772;
  double t3712;
  double t3736;
  double t3738;
  double t3784;
  double t3791;
  double t3804;
  double t3748;
  double t3775;
  double t3782;
  double t3820;
  double t3825;
  double t3828;
  double t3783;
  double t3806;
  double t3808;
  double t2954;
  double t2973;
  double t3003;
  double t3910;
  double t3917;
  double t3922;
  double t3897;
  double t3901;
  double t3906;
  double t3946;
  double t3953;
  double t3954;
  double t3909;
  double t3924;
  double t3940;
  double t3981;
  double t3990;
  double t3995;
  double t3945;
  double t3956;
  double t3964;
  double t3047;
  double t3083;
  double t3092;
  double t3552;
  double t3630;
  double t3656;
  double t3666;
  double t3667;
  double t3668;
  double t3681;
  double t3682;
  double t3684;
  double t3107;
  double t3122;
  double t3131;
  double t3965;
  double t4003;
  double t4007;
  double t4009;
  double t4014;
  double t4029;
  double t4030;
  double t4033;
  double t4048;
  double t3144;
  double t3147;
  double t3154;
  double t3814;
  double t3844;
  double t3847;
  double t3852;
  double t3858;
  double t3872;
  double t3873;
  double t3884;
  double t3888;
  double t3161;
  double t3178;
  double t3179;
  double t3215;
  double t3249;
  double t3251;
  double t3254;
  double t3261;
  double t3282;
  double t3298;
  double t4106;
  double t4121;
  double t4123;
  double t4159;
  double t4165;
  double t4168;
  double t4137;
  double t4146;
  double t4153;
  t393 = Cos(var1[1]);
  t574 = Cos(var1[3]);
  t446 = Cos(var1[2]);
  t512 = Sin(var1[3]);
  t603 = Sin(var1[2]);
  t650 = Cos(var1[4]);
  t553 = -1.*t393*t446*t512;
  t616 = -1.*t574*t393*t603;
  t621 = t553 + t616;
  t386 = Sin(var1[4]);
  t695 = t574*t393*t446;
  t767 = -1.*t393*t512*t603;
  t768 = t695 + t767;
  t850 = Cos(var1[5]);
  t649 = t386*t621;
  t804 = t650*t768;
  t817 = t649 + t804;
  t335 = Sin(var1[5]);
  t852 = t650*t621;
  t880 = -1.*t386*t768;
  t881 = t852 + t880;
  t962 = Cos(var1[6]);
  t849 = -1.*t335*t817;
  t944 = t850*t881;
  t959 = t849 + t944;
  t327 = Sin(var1[6]);
  t967 = t850*t817;
  t986 = t335*t881;
  t1031 = t967 + t986;
  t1365 = Sin(var1[0]);
  t1314 = Cos(var1[0]);
  t1328 = Sin(var1[1]);
  t1345 = t1314*t446*t1328;
  t1380 = -1.*t1365*t603;
  t1393 = t1345 + t1380;
  t1418 = -1.*t446*t1365;
  t1437 = -1.*t1314*t1328*t603;
  t1455 = t1418 + t1437;
  t1397 = -1.*t512*t1393;
  t1463 = t574*t1455;
  t1522 = t1397 + t1463;
  t1577 = t574*t1393;
  t1651 = t512*t1455;
  t1708 = t1577 + t1651;
  t1527 = t386*t1522;
  t1710 = t650*t1708;
  t1737 = t1527 + t1710;
  t1743 = t650*t1522;
  t1751 = -1.*t386*t1708;
  t1766 = t1743 + t1751;
  t1742 = -1.*t335*t1737;
  t1782 = t850*t1766;
  t1813 = t1742 + t1782;
  t1879 = t850*t1737;
  t1903 = t335*t1766;
  t1907 = t1879 + t1903;
  t960 = t327*t959;
  t1038 = t962*t1031;
  t1098 = t960 + t1038;
  t1180 = t962*t959;
  t1205 = -1.*t327*t1031;
  t1206 = t1180 + t1205;
  t1820 = t327*t1813;
  t1936 = t962*t1907;
  t1938 = t1820 + t1936;
  t1998 = t962*t1813;
  t2015 = -1.*t327*t1907;
  t2019 = t1998 + t2015;
  t2180 = t446*t1365*t1328;
  t2203 = t1314*t603;
  t2216 = t2180 + t2203;
  t2236 = t1314*t446;
  t2256 = -1.*t1365*t1328*t603;
  t2300 = t2236 + t2256;
  t2219 = -1.*t512*t2216;
  t2343 = t574*t2300;
  t2379 = t2219 + t2343;
  t2441 = t574*t2216;
  t2448 = t512*t2300;
  t2462 = t2441 + t2448;
  t2415 = t386*t2379;
  t2466 = t650*t2462;
  t2470 = t2415 + t2466;
  t2480 = t650*t2379;
  t2484 = -1.*t386*t2462;
  t2493 = t2480 + t2484;
  t2471 = -1.*t335*t2470;
  t2572 = t850*t2493;
  t2586 = t2471 + t2572;
  t2631 = t850*t2470;
  t2649 = t335*t2493;
  t2651 = t2631 + t2649;
  t2045 = -0.766044*t1098;
  t2062 = 0.642788*t1206;
  t2088 = t2045 + t2062;
  t1962 = -0.766044*t1938;
  t2026 = 0.642788*t2019;
  t2029 = t1962 + t2026;
  t2613 = t327*t2586;
  t2678 = t962*t2651;
  t2682 = t2613 + t2678;
  t2733 = t962*t2586;
  t2743 = -1.*t327*t2651;
  t2748 = t2733 + t2743;
  t1126 = 0.642788*t1098;
  t1267 = 0.766044*t1206;
  t1302 = t1126 + t1267;
  t2091 = 0.642788*t1938;
  t2098 = 0.766044*t2019;
  t2110 = t2091 + t2098;
  t2037 = t1302*t2029;
  t2123 = -1.*t2088*t2110;
  t91 = Cos(var1[8]);
  t2831 = -0.766044*t2682;
  t2837 = 0.642788*t2748;
  t2842 = t2831 + t2837;
  t2695 = 0.642788*t2682;
  t2751 = 0.766044*t2748;
  t2787 = t2695 + t2751;
  t2807 = t1314*t393*t2088;
  t2814 = t1328*t2029;
  t2821 = t2807 + t2814;
  t2827 = -1.*t2787*t2821;
  t2866 = t1314*t393*t1302;
  t2871 = t1328*t2110;
  t2875 = t2866 + t2871;
  t2897 = t2842*t2875;
  t2913 = t2037 + t2123;
  t2926 = -1.*t393*t1365*t2913;
  t2927 = 0. + t2827 + t2897 + t2926;
  t2933 = 1/t2927;
  t306 = Sin(var1[7]);
  t3030 = Sin(var1[8]);
  t2944 = Cos(var1[7]);
  t3370 = Cos(var1[9]);
  t3380 = Sin(var1[9]);
  t3360 = Cos(var1[10]);
  t3412 = t2944*t3370;
  t3416 = -1.*t306*t3030*t3380;
  t3417 = t3412 + t3416;
  t3378 = t3370*t306*t3030;
  t3388 = t2944*t3380;
  t3389 = t3378 + t3388;
  t3425 = Sin(var1[10]);
  t3357 = Cos(var1[11]);
  t3449 = t3360*t3417;
  t3453 = -1.*t3389*t3425;
  t3460 = t3449 + t3453;
  t3410 = t3360*t3389;
  t3429 = t3417*t3425;
  t3431 = t3410 + t3429;
  t3462 = Sin(var1[11]);
  t3356 = Cos(var1[12]);
  t3508 = t3357*t3460;
  t3515 = -1.*t3431*t3462;
  t3526 = t3508 + t3515;
  t3446 = t3357*t3431;
  t3470 = t3460*t3462;
  t3496 = t3446 + t3470;
  t3530 = Sin(var1[12]);
  t3331 = Cos(var1[13]);
  t3600 = t3356*t3526;
  t3606 = -1.*t3496*t3530;
  t3625 = t3600 + t3606;
  t3501 = t3356*t3496;
  t3537 = t3526*t3530;
  t3547 = t3501 + t3537;
  t3628 = Sin(var1[13]);
  t2126 = 0. + t2037 + t2123;
  t3717 = -1.*t3370*t306;
  t3723 = -1.*t2944*t3030*t3380;
  t3724 = t3717 + t3723;
  t3692 = t2944*t3370*t3030;
  t3699 = -1.*t306*t3380;
  t3709 = t3692 + t3699;
  t3766 = t3360*t3724;
  t3770 = -1.*t3709*t3425;
  t3772 = t3766 + t3770;
  t3712 = t3360*t3709;
  t3736 = t3724*t3425;
  t3738 = t3712 + t3736;
  t3784 = t3357*t3772;
  t3791 = -1.*t3738*t3462;
  t3804 = t3784 + t3791;
  t3748 = t3357*t3738;
  t3775 = t3772*t3462;
  t3782 = t3748 + t3775;
  t3820 = t3356*t3804;
  t3825 = -1.*t3782*t3530;
  t3828 = t3820 + t3825;
  t3783 = t3356*t3782;
  t3806 = t3804*t3530;
  t3808 = t3783 + t3806;
  t2954 = -1.*t1302*t2842;
  t2973 = t2088*t2787;
  t3003 = 0. + t2954 + t2973;
  t3910 = -1.*t91*t3360*t3380;
  t3917 = -1.*t91*t3370*t3425;
  t3922 = t3910 + t3917;
  t3897 = t91*t3370*t3360;
  t3901 = -1.*t91*t3380*t3425;
  t3906 = t3897 + t3901;
  t3946 = t3357*t3922;
  t3953 = -1.*t3906*t3462;
  t3954 = t3946 + t3953;
  t3909 = t3357*t3906;
  t3924 = t3922*t3462;
  t3940 = t3909 + t3924;
  t3981 = t3356*t3954;
  t3990 = -1.*t3940*t3530;
  t3995 = t3981 + t3990;
  t3945 = t3356*t3940;
  t3956 = t3954*t3530;
  t3964 = t3945 + t3956;
  t3047 = t2110*t2842;
  t3083 = -1.*t2029*t2787;
  t3092 = 0. + t3047 + t3083;
  t3552 = t3331*t3547;
  t3630 = t3625*t3628;
  t3656 = t3552 + t3630;
  t3666 = 0.642788*t3656;
  t3667 = t3331*t3625;
  t3668 = -1.*t3547*t3628;
  t3681 = t3667 + t3668;
  t3682 = 0.766044*t3681;
  t3684 = t3666 + t3682;
  t3107 = -1.*t1314*t393*t2088;
  t3122 = -1.*t1328*t2029;
  t3131 = 0. + t3107 + t3122;
  t3965 = t3331*t3964;
  t4003 = t3995*t3628;
  t4007 = t3965 + t4003;
  t4009 = 0.642788*t4007;
  t4014 = t3331*t3995;
  t4029 = -1.*t3964*t3628;
  t4030 = t4014 + t4029;
  t4033 = 0.766044*t4030;
  t4048 = t4009 + t4033;
  t3144 = -1.*t393*t1365*t2029;
  t3147 = t1314*t393*t2842;
  t3154 = 0. + t3144 + t3147;
  t3814 = t3331*t3808;
  t3844 = t3828*t3628;
  t3847 = t3814 + t3844;
  t3852 = 0.642788*t3847;
  t3858 = t3331*t3828;
  t3872 = -1.*t3808*t3628;
  t3873 = t3858 + t3872;
  t3884 = 0.766044*t3873;
  t3888 = t3852 + t3884;
  t3161 = t393*t1365*t2088;
  t3178 = t1328*t2842;
  t3179 = 0. + t3161 + t3178;
  t3215 = 0. + t2866 + t2871;
  t3249 = t393*t1365*t2110;
  t3251 = -1.*t1314*t393*t2787;
  t3254 = 0. + t3249 + t3251;
  t3261 = -1.*t393*t1365*t1302;
  t3282 = -1.*t1328*t2787;
  t3298 = 0. + t3261 + t3282;
  t4106 = -0.766044*t3656;
  t4121 = 0.642788*t3681;
  t4123 = t4106 + t4121;
  t4159 = -0.766044*t4007;
  t4165 = 0.642788*t4030;
  t4168 = t4159 + t4165;
  t4137 = -0.766044*t3847;
  t4146 = 0.642788*t3873;
  t4153 = t4137 + t4146;
  p_output1[0]=0. + t2933*t3030*t3092 - 1.*t2933*t2944*t3003*t91 - 1.*t2126*t2933*t306*t91;
  p_output1[1]=0. + t2933*t3030*t3154 - 1.*t2933*t306*t3131*t91 - 1.*t2933*t2944*t3179*t91;
  p_output1[2]=0. + t2933*t3030*t3254 - 1.*t2933*t306*t3215*t91 - 1.*t2933*t2944*t3298*t91;
  p_output1[3]=0. + t2126*t2933*t3684 + t2933*t3003*t3888 + t2933*t3092*t4048;
  p_output1[4]=0. + t2933*t3131*t3684 + t2933*t3179*t3888 + t2933*t3154*t4048;
  p_output1[5]=0. + t2933*t3215*t3684 + t2933*t3298*t3888 + t2933*t3254*t4048;
  p_output1[6]=0. + t2126*t2933*t4123 + t2933*t3003*t4153 + t2933*t3092*t4168;
  p_output1[7]=0. + t2933*t3131*t4123 + t2933*t3179*t4153 + t2933*t3154*t4168;
  p_output1[8]=0. + t2933*t3215*t4123 + t2933*t3298*t4153 + t2933*t3254*t4168;
}



void R_LeftToeBottom_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
