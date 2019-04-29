/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:00 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBack_src.h"

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
  double t141;
  double t917;
  double t989;
  double t930;
  double t998;
  double t373;
  double t720;
  double t857;
  double t875;
  double t1042;
  double t947;
  double t1006;
  double t1028;
  double t1144;
  double t1177;
  double t1203;
  double t1030;
  double t1217;
  double t1231;
  double t2300;
  double t2184;
  double t2186;
  double t2256;
  double t2173;
  double t2370;
  double t2388;
  double t2418;
  double t2499;
  double t2299;
  double t2453;
  double t2474;
  double t2159;
  double t2525;
  double t2550;
  double t2597;
  double t2694;
  double t2481;
  double t2600;
  double t2634;
  double t2158;
  double t2710;
  double t2714;
  double t2726;
  double t2778;
  double t2663;
  double t2732;
  double t2751;
  double t2136;
  double t2781;
  double t2828;
  double t2851;
  double t2926;
  double t2776;
  double t2869;
  double t2885;
  double t2131;
  double t2953;
  double t2965;
  double t3009;
  double t1456;
  double t1478;
  double t1551;
  double t1587;
  double t1627;
  double t1679;
  double t1559;
  double t1780;
  double t1793;
  double t3182;
  double t3189;
  double t3191;
  double t3215;
  double t3217;
  double t3227;
  double t3196;
  double t3238;
  double t3255;
  double t3301;
  double t3327;
  double t3386;
  double t3294;
  double t3405;
  double t3421;
  double t3479;
  double t3487;
  double t3488;
  double t3460;
  double t3520;
  double t3553;
  double t3561;
  double t3573;
  double t3575;
  double t3560;
  double t3578;
  double t3579;
  double t3603;
  double t3619;
  double t3631;
  double t1859;
  double t2009;
  double t2073;
  double t3700;
  double t3706;
  double t3707;
  double t3713;
  double t3715;
  double t3720;
  double t3709;
  double t3731;
  double t3735;
  double t3744;
  double t3751;
  double t3754;
  double t3743;
  double t3757;
  double t3766;
  double t3792;
  double t3813;
  double t3821;
  double t3787;
  double t3822;
  double t3823;
  double t3833;
  double t3840;
  double t3842;
  double t3827;
  double t3843;
  double t3846;
  double t3862;
  double t3864;
  double t3896;
  double t2911;
  double t3037;
  double t3063;
  double t3100;
  double t3107;
  double t3109;
  double t3595;
  double t3645;
  double t3650;
  double t3656;
  double t3674;
  double t3680;
  double t3852;
  double t3897;
  double t3903;
  double t3910;
  double t3923;
  double t3928;
  t141 = Cos(var1[3]);
  t917 = Cos(var1[5]);
  t989 = Sin(var1[3]);
  t930 = Sin(var1[4]);
  t998 = Sin(var1[5]);
  t373 = Cos(var1[4]);
  t720 = Sin(var1[14]);
  t857 = Cos(var1[14]);
  t875 = Sin(var1[13]);
  t1042 = Cos(var1[13]);
  t947 = t141*t917*t930;
  t1006 = t989*t998;
  t1028 = t947 + t1006;
  t1144 = -1.*t917*t989;
  t1177 = t141*t930*t998;
  t1203 = t1144 + t1177;
  t1030 = t875*t1028;
  t1217 = t1042*t1203;
  t1231 = t1030 + t1217;
  t2300 = Cos(var1[15]);
  t2184 = t1042*t1028;
  t2186 = -1.*t875*t1203;
  t2256 = t2184 + t2186;
  t2173 = Sin(var1[15]);
  t2370 = t857*t141*t373;
  t2388 = t720*t1231;
  t2418 = t2370 + t2388;
  t2499 = Cos(var1[16]);
  t2299 = t2173*t2256;
  t2453 = t2300*t2418;
  t2474 = t2299 + t2453;
  t2159 = Sin(var1[16]);
  t2525 = t2300*t2256;
  t2550 = -1.*t2173*t2418;
  t2597 = t2525 + t2550;
  t2694 = Cos(var1[17]);
  t2481 = -1.*t2159*t2474;
  t2600 = t2499*t2597;
  t2634 = t2481 + t2600;
  t2158 = Sin(var1[17]);
  t2710 = t2499*t2474;
  t2714 = t2159*t2597;
  t2726 = t2710 + t2714;
  t2778 = Cos(var1[18]);
  t2663 = t2158*t2634;
  t2732 = t2694*t2726;
  t2751 = t2663 + t2732;
  t2136 = Sin(var1[18]);
  t2781 = t2694*t2634;
  t2828 = -1.*t2158*t2726;
  t2851 = t2781 + t2828;
  t2926 = Cos(var1[19]);
  t2776 = -1.*t2136*t2751;
  t2869 = t2778*t2851;
  t2885 = t2776 + t2869;
  t2131 = Sin(var1[19]);
  t2953 = t2778*t2751;
  t2965 = t2136*t2851;
  t3009 = t2953 + t2965;
  t1456 = t917*t989*t930;
  t1478 = -1.*t141*t998;
  t1551 = t1456 + t1478;
  t1587 = t141*t917;
  t1627 = t989*t930*t998;
  t1679 = t1587 + t1627;
  t1559 = t875*t1551;
  t1780 = t1042*t1679;
  t1793 = t1559 + t1780;
  t3182 = t1042*t1551;
  t3189 = -1.*t875*t1679;
  t3191 = t3182 + t3189;
  t3215 = t857*t373*t989;
  t3217 = t720*t1793;
  t3227 = t3215 + t3217;
  t3196 = t2173*t3191;
  t3238 = t2300*t3227;
  t3255 = t3196 + t3238;
  t3301 = t2300*t3191;
  t3327 = -1.*t2173*t3227;
  t3386 = t3301 + t3327;
  t3294 = -1.*t2159*t3255;
  t3405 = t2499*t3386;
  t3421 = t3294 + t3405;
  t3479 = t2499*t3255;
  t3487 = t2159*t3386;
  t3488 = t3479 + t3487;
  t3460 = t2158*t3421;
  t3520 = t2694*t3488;
  t3553 = t3460 + t3520;
  t3561 = t2694*t3421;
  t3573 = -1.*t2158*t3488;
  t3575 = t3561 + t3573;
  t3560 = -1.*t2136*t3553;
  t3578 = t2778*t3575;
  t3579 = t3560 + t3578;
  t3603 = t2778*t3553;
  t3619 = t2136*t3575;
  t3631 = t3603 + t3619;
  t1859 = t373*t917*t875;
  t2009 = t1042*t373*t998;
  t2073 = t1859 + t2009;
  t3700 = t1042*t373*t917;
  t3706 = -1.*t373*t875*t998;
  t3707 = t3700 + t3706;
  t3713 = -1.*t857*t930;
  t3715 = t720*t2073;
  t3720 = t3713 + t3715;
  t3709 = t2173*t3707;
  t3731 = t2300*t3720;
  t3735 = t3709 + t3731;
  t3744 = t2300*t3707;
  t3751 = -1.*t2173*t3720;
  t3754 = t3744 + t3751;
  t3743 = -1.*t2159*t3735;
  t3757 = t2499*t3754;
  t3766 = t3743 + t3757;
  t3792 = t2499*t3735;
  t3813 = t2159*t3754;
  t3821 = t3792 + t3813;
  t3787 = t2158*t3766;
  t3822 = t2694*t3821;
  t3823 = t3787 + t3822;
  t3833 = t2694*t3766;
  t3840 = -1.*t2158*t3821;
  t3842 = t3833 + t3840;
  t3827 = -1.*t2136*t3823;
  t3843 = t2778*t3842;
  t3846 = t3827 + t3843;
  t3862 = t2778*t3823;
  t3864 = t2136*t3842;
  t3896 = t3862 + t3864;
  t2911 = t2131*t2885;
  t3037 = t2926*t3009;
  t3063 = t2911 + t3037;
  t3100 = t2926*t2885;
  t3107 = -1.*t2131*t3009;
  t3109 = t3100 + t3107;
  t3595 = t2131*t3579;
  t3645 = t2926*t3631;
  t3650 = t3595 + t3645;
  t3656 = t2926*t3579;
  t3674 = -1.*t2131*t3631;
  t3680 = t3656 + t3674;
  t3852 = t2131*t3846;
  t3897 = t2926*t3896;
  t3903 = t3852 + t3897;
  t3910 = t2926*t3846;
  t3923 = -1.*t2131*t3896;
  t3928 = t3910 + t3923;
  p_output1[0]=t141*t373*t720 - 1.*t1231*t857;
  p_output1[1]=-1.*t1793*t857 + t373*t720*t989;
  p_output1[2]=-1.*t2073*t857 - 1.*t720*t930;
  p_output1[3]=0.642788*t3063 + 0.766044*t3109;
  p_output1[4]=0.642788*t3650 + 0.766044*t3680;
  p_output1[5]=0.642788*t3903 + 0.766044*t3928;
  p_output1[6]=-0.766044*t3063 + 0.642788*t3109;
  p_output1[7]=-0.766044*t3650 + 0.642788*t3680;
  p_output1[8]=-0.766044*t3903 + 0.642788*t3928;
}



void R_RightToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
