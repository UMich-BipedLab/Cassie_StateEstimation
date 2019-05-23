/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:08:07 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeFront_src.h"

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
  double t473;
  double t420;
  double t474;
  double t429;
  double t479;
  double t260;
  double t393;
  double t710;
  double t796;
  double t804;
  double t462;
  double t487;
  double t571;
  double t601;
  double t659;
  double t661;
  double t700;
  double t735;
  double t761;
  double t1699;
  double t1792;
  double t1804;
  double t1827;
  double t1701;
  double t1733;
  double t1738;
  double t1900;
  double t1932;
  double t1772;
  double t1903;
  double t1912;
  double t1659;
  double t1942;
  double t1949;
  double t1994;
  double t2062;
  double t1928;
  double t1999;
  double t2007;
  double t1607;
  double t2102;
  double t2203;
  double t2205;
  double t2261;
  double t2035;
  double t2230;
  double t2237;
  double t1604;
  double t2262;
  double t2283;
  double t2313;
  double t2397;
  double t2245;
  double t2351;
  double t2373;
  double t1525;
  double t2420;
  double t2422;
  double t2459;
  double t859;
  double t870;
  double t931;
  double t945;
  double t948;
  double t1009;
  double t1028;
  double t1108;
  double t1129;
  double t2759;
  double t2777;
  double t2790;
  double t2688;
  double t2698;
  double t2716;
  double t2730;
  double t2796;
  double t2797;
  double t2842;
  double t2876;
  double t2886;
  double t2830;
  double t2953;
  double t2955;
  double t3114;
  double t3118;
  double t3120;
  double t3016;
  double t3127;
  double t3185;
  double t3217;
  double t3295;
  double t3330;
  double t3213;
  double t3379;
  double t3385;
  double t3404;
  double t3405;
  double t3419;
  double t1404;
  double t1412;
  double t1413;
  double t3634;
  double t3682;
  double t3701;
  double t3526;
  double t3536;
  double t3550;
  double t3589;
  double t3708;
  double t3710;
  double t3744;
  double t3749;
  double t3751;
  double t3733;
  double t3753;
  double t3755;
  double t3784;
  double t3799;
  double t3801;
  double t3764;
  double t3804;
  double t3810;
  double t3831;
  double t3834;
  double t3889;
  double t3825;
  double t3913;
  double t3914;
  double t3933;
  double t3935;
  double t3946;
  double t2396;
  double t2507;
  double t2556;
  double t2655;
  double t2661;
  double t2667;
  double t3395;
  double t3422;
  double t3431;
  double t3455;
  double t3512;
  double t3514;
  double t3929;
  double t3965;
  double t3978;
  double t4030;
  double t4036;
  double t4051;
  double t4470;
  double t4472;
  double t4631;
  double t4632;
  double t4644;
  double t4648;
  double t4664;
  double t4665;
  double t4678;
  double t4683;
  double t4699;
  double t4700;
  double t4333;
  double t4342;
  double t4369;
  double t4386;
  double t4420;
  double t4431;
  double t4505;
  double t4514;
  double t4563;
  double t4570;
  double t4571;
  double t4573;
  double t4633;
  double t4634;
  double t4635;
  double t4639;
  double t4640;
  double t4641;
  double t4650;
  double t4651;
  double t4655;
  double t4657;
  double t4659;
  double t4660;
  double t4666;
  double t4669;
  double t4670;
  double t4672;
  double t4675;
  double t4676;
  double t4684;
  double t4687;
  double t4688;
  double t4691;
  double t4693;
  double t4696;
  double t4702;
  double t4703;
  double t4705;
  double t4707;
  double t4708;
  double t4709;
  t473 = Cos(var1[3]);
  t420 = Cos(var1[5]);
  t474 = Sin(var1[4]);
  t429 = Sin(var1[3]);
  t479 = Sin(var1[5]);
  t260 = Cos(var1[7]);
  t393 = Cos(var1[6]);
  t710 = Sin(var1[6]);
  t796 = Cos(var1[4]);
  t804 = Sin(var1[7]);
  t462 = -1.*t420*t429;
  t487 = t473*t474*t479;
  t571 = t462 + t487;
  t601 = t393*t571;
  t659 = t473*t420*t474;
  t661 = t429*t479;
  t700 = t659 + t661;
  t735 = t700*t710;
  t761 = t601 + t735;
  t1699 = Cos(var1[8]);
  t1792 = t393*t700;
  t1804 = -1.*t571*t710;
  t1827 = t1792 + t1804;
  t1701 = t473*t796*t260;
  t1733 = t761*t804;
  t1738 = t1701 + t1733;
  t1900 = Sin(var1[8]);
  t1932 = Cos(var1[9]);
  t1772 = t1699*t1738;
  t1903 = t1827*t1900;
  t1912 = t1772 + t1903;
  t1659 = Sin(var1[9]);
  t1942 = t1699*t1827;
  t1949 = -1.*t1738*t1900;
  t1994 = t1942 + t1949;
  t2062 = Cos(var1[10]);
  t1928 = -1.*t1659*t1912;
  t1999 = t1932*t1994;
  t2007 = t1928 + t1999;
  t1607 = Sin(var1[10]);
  t2102 = t1932*t1912;
  t2203 = t1659*t1994;
  t2205 = t2102 + t2203;
  t2261 = Cos(var1[11]);
  t2035 = t1607*t2007;
  t2230 = t2062*t2205;
  t2237 = t2035 + t2230;
  t1604 = Sin(var1[11]);
  t2262 = t2062*t2007;
  t2283 = -1.*t1607*t2205;
  t2313 = t2262 + t2283;
  t2397 = Cos(var1[12]);
  t2245 = -1.*t1604*t2237;
  t2351 = t2261*t2313;
  t2373 = t2245 + t2351;
  t1525 = Sin(var1[12]);
  t2420 = t2261*t2237;
  t2422 = t1604*t2313;
  t2459 = t2420 + t2422;
  t859 = t473*t420;
  t870 = t429*t474*t479;
  t931 = t859 + t870;
  t945 = t393*t931;
  t948 = t420*t429*t474;
  t1009 = -1.*t473*t479;
  t1028 = t948 + t1009;
  t1108 = t1028*t710;
  t1129 = t945 + t1108;
  t2759 = t393*t1028;
  t2777 = -1.*t931*t710;
  t2790 = t2759 + t2777;
  t2688 = t796*t260*t429;
  t2698 = t1129*t804;
  t2716 = t2688 + t2698;
  t2730 = t1699*t2716;
  t2796 = t2790*t1900;
  t2797 = t2730 + t2796;
  t2842 = t1699*t2790;
  t2876 = -1.*t2716*t1900;
  t2886 = t2842 + t2876;
  t2830 = -1.*t1659*t2797;
  t2953 = t1932*t2886;
  t2955 = t2830 + t2953;
  t3114 = t1932*t2797;
  t3118 = t1659*t2886;
  t3120 = t3114 + t3118;
  t3016 = t1607*t2955;
  t3127 = t2062*t3120;
  t3185 = t3016 + t3127;
  t3217 = t2062*t2955;
  t3295 = -1.*t1607*t3120;
  t3330 = t3217 + t3295;
  t3213 = -1.*t1604*t3185;
  t3379 = t2261*t3330;
  t3385 = t3213 + t3379;
  t3404 = t2261*t3185;
  t3405 = t1604*t3330;
  t3419 = t3404 + t3405;
  t1404 = t796*t393*t479;
  t1412 = t796*t420*t710;
  t1413 = t1404 + t1412;
  t3634 = t796*t420*t393;
  t3682 = -1.*t796*t479*t710;
  t3701 = t3634 + t3682;
  t3526 = -1.*t260*t474;
  t3536 = t1413*t804;
  t3550 = t3526 + t3536;
  t3589 = t1699*t3550;
  t3708 = t3701*t1900;
  t3710 = t3589 + t3708;
  t3744 = t1699*t3701;
  t3749 = -1.*t3550*t1900;
  t3751 = t3744 + t3749;
  t3733 = -1.*t1659*t3710;
  t3753 = t1932*t3751;
  t3755 = t3733 + t3753;
  t3784 = t1932*t3710;
  t3799 = t1659*t3751;
  t3801 = t3784 + t3799;
  t3764 = t1607*t3755;
  t3804 = t2062*t3801;
  t3810 = t3764 + t3804;
  t3831 = t2062*t3755;
  t3834 = -1.*t1607*t3801;
  t3889 = t3831 + t3834;
  t3825 = -1.*t1604*t3810;
  t3913 = t2261*t3889;
  t3914 = t3825 + t3913;
  t3933 = t2261*t3810;
  t3935 = t1604*t3889;
  t3946 = t3933 + t3935;
  t2396 = t1525*t2373;
  t2507 = t2397*t2459;
  t2556 = t2396 + t2507;
  t2655 = t2397*t2373;
  t2661 = -1.*t1525*t2459;
  t2667 = t2655 + t2661;
  t3395 = t1525*t3385;
  t3422 = t2397*t3419;
  t3431 = t3395 + t3422;
  t3455 = t2397*t3385;
  t3512 = -1.*t1525*t3419;
  t3514 = t3455 + t3512;
  t3929 = t1525*t3914;
  t3965 = t2397*t3946;
  t3978 = t3929 + t3965;
  t4030 = t2397*t3914;
  t4036 = -1.*t1525*t3946;
  t4051 = t4030 + t4036;
  t4470 = -1.*t260;
  t4472 = 1. + t4470;
  t4631 = -1.*t1699;
  t4632 = 1. + t4631;
  t4644 = -1.*t1932;
  t4648 = 1. + t4644;
  t4664 = -1.*t2062;
  t4665 = 1. + t4664;
  t4678 = -1.*t2261;
  t4683 = 1. + t4678;
  t4699 = -1.*t2397;
  t4700 = 1. + t4699;
  t4333 = -1.*t393;
  t4342 = 1. + t4333;
  t4369 = 0.135*t4342;
  t4386 = 0. + t4369;
  t4420 = -0.135*t710;
  t4431 = 0. + t4420;
  t4505 = 0.135*t4472;
  t4514 = 0.049*t804;
  t4563 = 0. + t4505 + t4514;
  t4570 = -0.049*t4472;
  t4571 = 0.135*t804;
  t4573 = 0. + t4570 + t4571;
  t4633 = -0.049*t4632;
  t4634 = -0.09*t1900;
  t4635 = 0. + t4633 + t4634;
  t4639 = -0.09*t4632;
  t4640 = 0.049*t1900;
  t4641 = 0. + t4639 + t4640;
  t4650 = -0.049*t4648;
  t4651 = -0.21*t1659;
  t4655 = 0. + t4650 + t4651;
  t4657 = -0.21*t4648;
  t4659 = 0.049*t1659;
  t4660 = 0. + t4657 + t4659;
  t4666 = -0.2707*t4665;
  t4669 = 0.0016*t1607;
  t4670 = 0. + t4666 + t4669;
  t4672 = -0.0016*t4665;
  t4675 = -0.2707*t1607;
  t4676 = 0. + t4672 + t4675;
  t4684 = 0.0184*t4683;
  t4687 = -0.7055*t1604;
  t4688 = 0. + t4684 + t4687;
  t4691 = -0.7055*t4683;
  t4693 = -0.0184*t1604;
  t4696 = 0. + t4691 + t4693;
  t4702 = -1.1135*t4700;
  t4703 = 0.0216*t1525;
  t4705 = 0. + t4702 + t4703;
  t4707 = -0.0216*t4700;
  t4708 = -1.1135*t1525;
  t4709 = 0. + t4707 + t4708;
  p_output1[0]=-1.*t260*t761 + t473*t796*t804;
  p_output1[1]=-1.*t1129*t260 + t429*t796*t804;
  p_output1[2]=-1.*t1413*t260 - 1.*t474*t804;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2556 + 0.766044*t2667;
  p_output1[5]=0.642788*t3431 + 0.766044*t3514;
  p_output1[6]=0.642788*t3978 + 0.766044*t4051;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2556 + 0.642788*t2667;
  p_output1[9]=-0.766044*t3431 + 0.642788*t3514;
  p_output1[10]=-0.766044*t3978 + 0.642788*t4051;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.088451*t2556 - 1.062256*t2667 + t1738*t4635 + t1827*t4641 + t1912*t4655 + t1994*t4660 + t2007*t4670 + t2205*t4676 + t2237*t4688 + t2313*t4696 + t2373*t4705 + t2459*t4709 + t4386*t571 + t4431*t700 + t4563*t761 + t4573*t473*t796 + 0.1305*(t260*t761 - 1.*t473*t796*t804) + var1[0];
  p_output1[13]=0. + 0.088451*t3431 - 1.062256*t3514 + t1028*t4431 + t1129*t4563 + t2716*t4635 + t2790*t4641 + t2797*t4655 + t2886*t4660 + t2955*t4670 + t3120*t4676 + t3185*t4688 + t3330*t4696 + t3385*t4705 + t3419*t4709 + t429*t4573*t796 + 0.1305*(t1129*t260 - 1.*t429*t796*t804) + t4386*t931 + var1[1];
  p_output1[14]=0. + 0.088451*t3978 - 1.062256*t4051 + t1413*t4563 + t3550*t4635 + t3701*t4641 + t3710*t4655 + t3751*t4660 + t3755*t4670 + t3801*t4676 + t3810*t4688 + t3889*t4696 + t3914*t4705 + t3946*t4709 - 1.*t4573*t474 + t420*t4431*t796 + t4386*t479*t796 + 0.1305*(t1413*t260 + t474*t804) + var1[2];
  p_output1[15]=1.;
}



void H_LeftToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
