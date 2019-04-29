/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_ankle_joint_right_src.h"

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
  double t382;
  double t643;
  double t353;
  double t533;
  double t701;
  double t803;
  double t584;
  double t702;
  double t718;
  double t344;
  double t916;
  double t917;
  double t929;
  double t1056;
  double t738;
  double t962;
  double t1009;
  double t342;
  double t1081;
  double t1108;
  double t1110;
  double t1115;
  double t1198;
  double t1203;
  double t1209;
  double t1243;
  double t1264;
  double t1435;
  double t1028;
  double t1292;
  double t1367;
  double t338;
  double t1445;
  double t1448;
  double t1457;
  double t1533;
  double t1424;
  double t1466;
  double t1508;
  double t280;
  double t1562;
  double t1579;
  double t1623;
  double t86;
  double t1774;
  double t1792;
  double t1803;
  double t1828;
  double t1838;
  double t1866;
  double t1821;
  double t1900;
  double t1911;
  double t1950;
  double t1959;
  double t2037;
  double t2040;
  double t2079;
  double t2118;
  double t1928;
  double t2125;
  double t2129;
  double t2195;
  double t2258;
  double t2273;
  double t1687;
  double t2136;
  double t2285;
  double t2341;
  double t2415;
  double t2433;
  double t2435;
  double t2583;
  double t2612;
  double t2621;
  double t2629;
  double t2634;
  double t2639;
  double t2641;
  double t2654;
  double t2718;
  double t2628;
  double t2729;
  double t2751;
  double t2779;
  double t2789;
  double t2859;
  double t2772;
  double t2895;
  double t2950;
  double t2958;
  double t2980;
  double t2993;
  double t1511;
  double t1668;
  double t1670;
  double t1688;
  double t1689;
  double t1694;
  double t2347;
  double t2439;
  double t2449;
  double t2509;
  double t2515;
  double t2518;
  double t2954;
  double t3074;
  double t3078;
  double t3109;
  double t3120;
  double t3140;
  double t3635;
  double t3677;
  double t4148;
  double t4170;
  double t4407;
  double t4415;
  double t4584;
  double t4594;
  double t4651;
  double t4653;
  double t3159;
  double t3165;
  double t3199;
  double t3685;
  double t3709;
  double t3732;
  double t3842;
  double t3904;
  double t3925;
  double t3994;
  double t4018;
  double t4026;
  double t4046;
  double t4070;
  double t4072;
  double t4191;
  double t4205;
  double t4238;
  double t4371;
  double t4378;
  double t4387;
  double t4455;
  double t4463;
  double t4488;
  double t4510;
  double t4544;
  double t4552;
  double t4595;
  double t4598;
  double t4603;
  double t4608;
  double t4612;
  double t4616;
  double t4655;
  double t4656;
  double t4657;
  double t4710;
  double t4713;
  double t4723;
  double t3204;
  double t3301;
  double t3302;
  double t3325;
  double t3391;
  double t3394;
  t382 = Cos(var1[5]);
  t643 = Sin(var1[3]);
  t353 = Cos(var1[3]);
  t533 = Sin(var1[4]);
  t701 = Sin(var1[5]);
  t803 = Sin(var1[13]);
  t584 = t353*t382*t533;
  t702 = t643*t701;
  t718 = t584 + t702;
  t344 = Cos(var1[13]);
  t916 = -1.*t382*t643;
  t917 = t353*t533*t701;
  t929 = t916 + t917;
  t1056 = Cos(var1[15]);
  t738 = t344*t718;
  t962 = -1.*t803*t929;
  t1009 = t738 + t962;
  t342 = Sin(var1[15]);
  t1081 = Cos(var1[14]);
  t1108 = Cos(var1[4]);
  t1110 = t1081*t353*t1108;
  t1115 = Sin(var1[14]);
  t1198 = t803*t718;
  t1203 = t344*t929;
  t1209 = t1198 + t1203;
  t1243 = t1115*t1209;
  t1264 = t1110 + t1243;
  t1435 = Cos(var1[16]);
  t1028 = t342*t1009;
  t1292 = t1056*t1264;
  t1367 = t1028 + t1292;
  t338 = Sin(var1[16]);
  t1445 = t1056*t1009;
  t1448 = -1.*t342*t1264;
  t1457 = t1445 + t1448;
  t1533 = Cos(var1[17]);
  t1424 = -1.*t338*t1367;
  t1466 = t1435*t1457;
  t1508 = t1424 + t1466;
  t280 = Sin(var1[17]);
  t1562 = t1435*t1367;
  t1579 = t338*t1457;
  t1623 = t1562 + t1579;
  t86 = Sin(var1[18]);
  t1774 = t382*t643*t533;
  t1792 = -1.*t353*t701;
  t1803 = t1774 + t1792;
  t1828 = t353*t382;
  t1838 = t643*t533*t701;
  t1866 = t1828 + t1838;
  t1821 = t344*t1803;
  t1900 = -1.*t803*t1866;
  t1911 = t1821 + t1900;
  t1950 = t1081*t1108*t643;
  t1959 = t803*t1803;
  t2037 = t344*t1866;
  t2040 = t1959 + t2037;
  t2079 = t1115*t2040;
  t2118 = t1950 + t2079;
  t1928 = t342*t1911;
  t2125 = t1056*t2118;
  t2129 = t1928 + t2125;
  t2195 = t1056*t1911;
  t2258 = -1.*t342*t2118;
  t2273 = t2195 + t2258;
  t1687 = Cos(var1[18]);
  t2136 = -1.*t338*t2129;
  t2285 = t1435*t2273;
  t2341 = t2136 + t2285;
  t2415 = t1435*t2129;
  t2433 = t338*t2273;
  t2435 = t2415 + t2433;
  t2583 = t344*t1108*t382;
  t2612 = -1.*t1108*t803*t701;
  t2621 = t2583 + t2612;
  t2629 = -1.*t1081*t533;
  t2634 = t1108*t382*t803;
  t2639 = t344*t1108*t701;
  t2641 = t2634 + t2639;
  t2654 = t1115*t2641;
  t2718 = t2629 + t2654;
  t2628 = t342*t2621;
  t2729 = t1056*t2718;
  t2751 = t2628 + t2729;
  t2779 = t1056*t2621;
  t2789 = -1.*t342*t2718;
  t2859 = t2779 + t2789;
  t2772 = -1.*t338*t2751;
  t2895 = t1435*t2859;
  t2950 = t2772 + t2895;
  t2958 = t1435*t2751;
  t2980 = t338*t2859;
  t2993 = t2958 + t2980;
  t1511 = t280*t1508;
  t1668 = t1533*t1623;
  t1670 = t1511 + t1668;
  t1688 = t1533*t1508;
  t1689 = -1.*t280*t1623;
  t1694 = t1688 + t1689;
  t2347 = t280*t2341;
  t2439 = t1533*t2435;
  t2449 = t2347 + t2439;
  t2509 = t1533*t2341;
  t2515 = -1.*t280*t2435;
  t2518 = t2509 + t2515;
  t2954 = t280*t2950;
  t3074 = t1533*t2993;
  t3078 = t2954 + t3074;
  t3109 = t1533*t2950;
  t3120 = -1.*t280*t2993;
  t3140 = t3109 + t3120;
  t3635 = -1.*t1081;
  t3677 = 1. + t3635;
  t4148 = -1.*t1056;
  t4170 = 1. + t4148;
  t4407 = -1.*t1435;
  t4415 = 1. + t4407;
  t4584 = -1.*t1533;
  t4594 = 1. + t4584;
  t4651 = -1.*t1687;
  t4653 = 1. + t4651;
  t3159 = t1687*t1670;
  t3165 = t86*t1694;
  t3199 = t3159 + t3165;
  t3685 = -0.049*t3677;
  t3709 = -0.135*t1115;
  t3732 = 0. + t3685 + t3709;
  t3842 = 0.135*t803;
  t3904 = 0. + t3842;
  t3925 = -1.*t344;
  t3994 = 1. + t3925;
  t4018 = -0.135*t3994;
  t4026 = 0. + t4018;
  t4046 = -0.135*t3677;
  t4070 = 0.049*t1115;
  t4072 = 0. + t4046 + t4070;
  t4191 = -0.09*t4170;
  t4205 = 0.049*t342;
  t4238 = 0. + t4191 + t4205;
  t4371 = -0.049*t4170;
  t4378 = -0.09*t342;
  t4387 = 0. + t4371 + t4378;
  t4455 = -0.049*t4415;
  t4463 = -0.21*t338;
  t4488 = 0. + t4455 + t4463;
  t4510 = -0.21*t4415;
  t4544 = 0.049*t338;
  t4552 = 0. + t4510 + t4544;
  t4595 = -0.2707*t4594;
  t4598 = 0.0016*t280;
  t4603 = 0. + t4595 + t4598;
  t4608 = -0.0016*t4594;
  t4612 = -0.2707*t280;
  t4616 = 0. + t4608 + t4612;
  t4655 = 0.0184*t4653;
  t4656 = -0.7055*t86;
  t4657 = 0. + t4655 + t4656;
  t4710 = -0.7055*t4653;
  t4713 = -0.0184*t86;
  t4723 = 0. + t4710 + t4713;
  t3204 = t1687*t2449;
  t3301 = t86*t2518;
  t3302 = t3204 + t3301;
  t3325 = t1687*t3078;
  t3391 = t86*t3140;
  t3394 = t3325 + t3391;
  p_output1[0]=-1.*t1687*t1694 + t1670*t86;
  p_output1[1]=-1.*t1687*t2518 + t2449*t86;
  p_output1[2]=-1.*t1687*t3140 + t3078*t86;
  p_output1[3]=0.;
  p_output1[4]=t3199;
  p_output1[5]=t3302;
  p_output1[6]=t3394;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1081*t1209 + t1108*t1115*t353;
  p_output1[9]=-1.*t1081*t2040 + t1108*t1115*t643;
  p_output1[10]=-1.*t1081*t2641 - 1.*t1115*t533;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0184*t3199 - 0.1305*(t1081*t1209 - 1.*t1108*t1115*t353) + t1108*t353*t3732 + t1209*t4072 + t1009*t4238 + t1264*t4387 + t1367*t4488 + t1457*t4552 + t1508*t4603 + t1623*t4616 + t1670*t4657 + t1694*t4723 + t3904*t718 - 0.7055*(t1687*t1694 - 1.*t1670*t86) + t4026*t929 + var1[0];
  p_output1[13]=0. + 0.0184*t3302 + t1803*t3904 + t1866*t4026 + t2040*t4072 + t1911*t4238 + t2118*t4387 + t2129*t4488 + t2273*t4552 + t2341*t4603 + t2435*t4616 + t2449*t4657 + t2518*t4723 + t1108*t3732*t643 - 0.1305*(t1081*t2040 - 1.*t1108*t1115*t643) - 0.7055*(t1687*t2518 - 1.*t2449*t86) + var1[1];
  p_output1[14]=0. + 0.0184*t3394 + t1108*t382*t3904 + t2641*t4072 + t2621*t4238 + t2718*t4387 + t2751*t4488 + t2859*t4552 + t2950*t4603 + t2993*t4616 + t3078*t4657 + t3140*t4723 - 1.*t3732*t533 - 0.1305*(t1081*t2641 + t1115*t533) + t1108*t4026*t701 - 0.7055*(t1687*t3140 - 1.*t3078*t86) + var1[2];
  p_output1[15]=1.;
}



void H_ankle_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
