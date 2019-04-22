/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:55 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeBack_src.h"

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
  double t330;
  double t245;
  double t347;
  double t246;
  double t375;
  double t198;
  double t238;
  double t541;
  double t603;
  double t612;
  double t255;
  double t387;
  double t454;
  double t484;
  double t514;
  double t535;
  double t539;
  double t547;
  double t565;
  double t1187;
  double t1426;
  double t1458;
  double t1461;
  double t1252;
  double t1294;
  double t1337;
  double t1466;
  double t1569;
  double t1413;
  double t1493;
  double t1495;
  double t1180;
  double t1592;
  double t1598;
  double t1604;
  double t1683;
  double t1567;
  double t1611;
  double t1650;
  double t1174;
  double t1702;
  double t1781;
  double t1792;
  double t1844;
  double t1674;
  double t1795;
  double t1800;
  double t1156;
  double t1900;
  double t1925;
  double t1947;
  double t2022;
  double t1841;
  double t1974;
  double t1986;
  double t1099;
  double t2056;
  double t2085;
  double t2101;
  double t634;
  double t646;
  double t668;
  double t710;
  double t766;
  double t815;
  double t822;
  double t824;
  double t831;
  double t2278;
  double t2281;
  double t2285;
  double t2244;
  double t2256;
  double t2270;
  double t2272;
  double t2318;
  double t2330;
  double t2353;
  double t2385;
  double t2427;
  double t2349;
  double t2429;
  double t2436;
  double t2561;
  double t2594;
  double t2620;
  double t2546;
  double t2689;
  double t2699;
  double t2704;
  double t2712;
  double t2716;
  double t2700;
  double t2720;
  double t2752;
  double t2772;
  double t2776;
  double t2791;
  double t936;
  double t942;
  double t985;
  double t2993;
  double t2997;
  double t2998;
  double t2896;
  double t2965;
  double t2976;
  double t2985;
  double t3001;
  double t3005;
  double t3082;
  double t3092;
  double t3106;
  double t3076;
  double t3116;
  double t3121;
  double t3160;
  double t3169;
  double t3170;
  double t3145;
  double t3178;
  double t3230;
  double t3239;
  double t3242;
  double t3247;
  double t3236;
  double t3251;
  double t3253;
  double t3280;
  double t3289;
  double t3291;
  double t2001;
  double t2116;
  double t2121;
  double t2146;
  double t2152;
  double t2205;
  double t2753;
  double t2793;
  double t2807;
  double t2814;
  double t2824;
  double t2865;
  double t3262;
  double t3300;
  double t3311;
  double t3322;
  double t3328;
  double t3340;
  double t3535;
  double t3538;
  double t3622;
  double t3623;
  double t3688;
  double t3695;
  double t3756;
  double t3760;
  double t3800;
  double t3801;
  double t3835;
  double t3837;
  double t3459;
  double t3470;
  double t3475;
  double t3480;
  double t3522;
  double t3527;
  double t3540;
  double t3546;
  double t3557;
  double t3569;
  double t3572;
  double t3584;
  double t3634;
  double t3649;
  double t3664;
  double t3666;
  double t3669;
  double t3681;
  double t3708;
  double t3719;
  double t3721;
  double t3727;
  double t3735;
  double t3739;
  double t3769;
  double t3771;
  double t3785;
  double t3788;
  double t3793;
  double t3796;
  double t3804;
  double t3805;
  double t3807;
  double t3816;
  double t3819;
  double t3821;
  double t3838;
  double t3859;
  double t3860;
  double t3863;
  double t3865;
  double t3869;
  t330 = Cos(var1[3]);
  t245 = Cos(var1[5]);
  t347 = Sin(var1[4]);
  t246 = Sin(var1[3]);
  t375 = Sin(var1[5]);
  t198 = Cos(var1[7]);
  t238 = Cos(var1[6]);
  t541 = Sin(var1[6]);
  t603 = Cos(var1[4]);
  t612 = Sin(var1[7]);
  t255 = -1.*t245*t246;
  t387 = t330*t347*t375;
  t454 = t255 + t387;
  t484 = t238*t454;
  t514 = t330*t245*t347;
  t535 = t246*t375;
  t539 = t514 + t535;
  t547 = t539*t541;
  t565 = t484 + t547;
  t1187 = Cos(var1[8]);
  t1426 = t238*t539;
  t1458 = -1.*t454*t541;
  t1461 = t1426 + t1458;
  t1252 = t330*t603*t198;
  t1294 = t565*t612;
  t1337 = t1252 + t1294;
  t1466 = Sin(var1[8]);
  t1569 = Cos(var1[9]);
  t1413 = t1187*t1337;
  t1493 = t1461*t1466;
  t1495 = t1413 + t1493;
  t1180 = Sin(var1[9]);
  t1592 = t1187*t1461;
  t1598 = -1.*t1337*t1466;
  t1604 = t1592 + t1598;
  t1683 = Cos(var1[10]);
  t1567 = -1.*t1180*t1495;
  t1611 = t1569*t1604;
  t1650 = t1567 + t1611;
  t1174 = Sin(var1[10]);
  t1702 = t1569*t1495;
  t1781 = t1180*t1604;
  t1792 = t1702 + t1781;
  t1844 = Cos(var1[11]);
  t1674 = t1174*t1650;
  t1795 = t1683*t1792;
  t1800 = t1674 + t1795;
  t1156 = Sin(var1[11]);
  t1900 = t1683*t1650;
  t1925 = -1.*t1174*t1792;
  t1947 = t1900 + t1925;
  t2022 = Cos(var1[12]);
  t1841 = -1.*t1156*t1800;
  t1974 = t1844*t1947;
  t1986 = t1841 + t1974;
  t1099 = Sin(var1[12]);
  t2056 = t1844*t1800;
  t2085 = t1156*t1947;
  t2101 = t2056 + t2085;
  t634 = t330*t245;
  t646 = t246*t347*t375;
  t668 = t634 + t646;
  t710 = t238*t668;
  t766 = t245*t246*t347;
  t815 = -1.*t330*t375;
  t822 = t766 + t815;
  t824 = t822*t541;
  t831 = t710 + t824;
  t2278 = t238*t822;
  t2281 = -1.*t668*t541;
  t2285 = t2278 + t2281;
  t2244 = t603*t198*t246;
  t2256 = t831*t612;
  t2270 = t2244 + t2256;
  t2272 = t1187*t2270;
  t2318 = t2285*t1466;
  t2330 = t2272 + t2318;
  t2353 = t1187*t2285;
  t2385 = -1.*t2270*t1466;
  t2427 = t2353 + t2385;
  t2349 = -1.*t1180*t2330;
  t2429 = t1569*t2427;
  t2436 = t2349 + t2429;
  t2561 = t1569*t2330;
  t2594 = t1180*t2427;
  t2620 = t2561 + t2594;
  t2546 = t1174*t2436;
  t2689 = t1683*t2620;
  t2699 = t2546 + t2689;
  t2704 = t1683*t2436;
  t2712 = -1.*t1174*t2620;
  t2716 = t2704 + t2712;
  t2700 = -1.*t1156*t2699;
  t2720 = t1844*t2716;
  t2752 = t2700 + t2720;
  t2772 = t1844*t2699;
  t2776 = t1156*t2716;
  t2791 = t2772 + t2776;
  t936 = t603*t238*t375;
  t942 = t603*t245*t541;
  t985 = t936 + t942;
  t2993 = t603*t245*t238;
  t2997 = -1.*t603*t375*t541;
  t2998 = t2993 + t2997;
  t2896 = -1.*t198*t347;
  t2965 = t985*t612;
  t2976 = t2896 + t2965;
  t2985 = t1187*t2976;
  t3001 = t2998*t1466;
  t3005 = t2985 + t3001;
  t3082 = t1187*t2998;
  t3092 = -1.*t2976*t1466;
  t3106 = t3082 + t3092;
  t3076 = -1.*t1180*t3005;
  t3116 = t1569*t3106;
  t3121 = t3076 + t3116;
  t3160 = t1569*t3005;
  t3169 = t1180*t3106;
  t3170 = t3160 + t3169;
  t3145 = t1174*t3121;
  t3178 = t1683*t3170;
  t3230 = t3145 + t3178;
  t3239 = t1683*t3121;
  t3242 = -1.*t1174*t3170;
  t3247 = t3239 + t3242;
  t3236 = -1.*t1156*t3230;
  t3251 = t1844*t3247;
  t3253 = t3236 + t3251;
  t3280 = t1844*t3230;
  t3289 = t1156*t3247;
  t3291 = t3280 + t3289;
  t2001 = t1099*t1986;
  t2116 = t2022*t2101;
  t2121 = t2001 + t2116;
  t2146 = t2022*t1986;
  t2152 = -1.*t1099*t2101;
  t2205 = t2146 + t2152;
  t2753 = t1099*t2752;
  t2793 = t2022*t2791;
  t2807 = t2753 + t2793;
  t2814 = t2022*t2752;
  t2824 = -1.*t1099*t2791;
  t2865 = t2814 + t2824;
  t3262 = t1099*t3253;
  t3300 = t2022*t3291;
  t3311 = t3262 + t3300;
  t3322 = t2022*t3253;
  t3328 = -1.*t1099*t3291;
  t3340 = t3322 + t3328;
  t3535 = -1.*t198;
  t3538 = 1. + t3535;
  t3622 = -1.*t1187;
  t3623 = 1. + t3622;
  t3688 = -1.*t1569;
  t3695 = 1. + t3688;
  t3756 = -1.*t1683;
  t3760 = 1. + t3756;
  t3800 = -1.*t1844;
  t3801 = 1. + t3800;
  t3835 = -1.*t2022;
  t3837 = 1. + t3835;
  t3459 = -1.*t238;
  t3470 = 1. + t3459;
  t3475 = 0.135*t3470;
  t3480 = 0. + t3475;
  t3522 = -0.135*t541;
  t3527 = 0. + t3522;
  t3540 = 0.135*t3538;
  t3546 = 0.049*t612;
  t3557 = 0. + t3540 + t3546;
  t3569 = -0.049*t3538;
  t3572 = 0.135*t612;
  t3584 = 0. + t3569 + t3572;
  t3634 = -0.049*t3623;
  t3649 = -0.09*t1466;
  t3664 = 0. + t3634 + t3649;
  t3666 = -0.09*t3623;
  t3669 = 0.049*t1466;
  t3681 = 0. + t3666 + t3669;
  t3708 = -0.049*t3695;
  t3719 = -0.21*t1180;
  t3721 = 0. + t3708 + t3719;
  t3727 = -0.21*t3695;
  t3735 = 0.049*t1180;
  t3739 = 0. + t3727 + t3735;
  t3769 = -0.2707*t3760;
  t3771 = 0.0016*t1174;
  t3785 = 0. + t3769 + t3771;
  t3788 = -0.0016*t3760;
  t3793 = -0.2707*t1174;
  t3796 = 0. + t3788 + t3793;
  t3804 = 0.0184*t3801;
  t3805 = -0.7055*t1156;
  t3807 = 0. + t3804 + t3805;
  t3816 = -0.7055*t3801;
  t3819 = -0.0184*t1156;
  t3821 = 0. + t3816 + t3819;
  t3838 = -1.1135*t3837;
  t3859 = 0.0216*t1099;
  t3860 = 0. + t3838 + t3859;
  t3863 = -0.0216*t3837;
  t3865 = -1.1135*t1099;
  t3869 = 0. + t3863 + t3865;
  p_output1[0]=-1.*t198*t565 + t330*t603*t612;
  p_output1[1]=t246*t603*t612 - 1.*t198*t831;
  p_output1[2]=-1.*t347*t612 - 1.*t198*t985;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2121 + 0.766044*t2205;
  p_output1[5]=0.642788*t2807 + 0.766044*t2865;
  p_output1[6]=0.642788*t3311 + 0.766044*t3340;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2121 + 0.642788*t2205;
  p_output1[9]=-0.766044*t2807 + 0.642788*t2865;
  p_output1[10]=-0.766044*t3311 + 0.642788*t3340;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.027251*t2121 - 1.200144*t2205 + t1337*t3664 + t1461*t3681 + t1495*t3721 + t1604*t3739 + t1650*t3785 + t1792*t3796 + t1800*t3807 + t1947*t3821 + t1986*t3860 + t2101*t3869 + t3480*t454 + t3527*t539 + t3557*t565 + t330*t3584*t603 + 0.1305*(t198*t565 - 1.*t330*t603*t612) + var1[0];
  p_output1[13]=0. - 0.027251*t2807 - 1.200144*t2865 + t2270*t3664 + t2285*t3681 + t2330*t3721 + t2427*t3739 + t2436*t3785 + t2620*t3796 + t2699*t3807 + t2716*t3821 + t2752*t3860 + t2791*t3869 + t246*t3584*t603 + t3480*t668 + t3527*t822 + t3557*t831 + 0.1305*(-1.*t246*t603*t612 + t198*t831) + var1[1];
  p_output1[14]=0. - 0.027251*t3311 - 1.200144*t3340 - 1.*t347*t3584 + t2976*t3664 + t2998*t3681 + t3005*t3721 + t3106*t3739 + t3121*t3785 + t3170*t3796 + t3230*t3807 + t3247*t3821 + t3253*t3860 + t3291*t3869 + t245*t3527*t603 + t3480*t375*t603 + t3557*t985 + 0.1305*(t347*t612 + t198*t985) + var1[2];
  p_output1[15]=1.;
}



void H_LeftToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
