/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:39 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_toe_joint_left_src.h"

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
  double t547;
  double t1987;
  double t2085;
  double t2022;
  double t2270;
  double t1835;
  double t2369;
  double t2720;
  double t2776;
  double t2063;
  double t2343;
  double t2357;
  double t2806;
  double t544;
  double t3219;
  double t3236;
  double t3253;
  double t707;
  double t780;
  double t991;
  double t2362;
  double t2995;
  double t3106;
  double t3160;
  double t3167;
  double t3176;
  double t3264;
  double t3300;
  double t3188;
  double t3269;
  double t3270;
  double t515;
  double t3305;
  double t3313;
  double t3322;
  double t3353;
  double t3299;
  double t3328;
  double t3329;
  double t454;
  double t3379;
  double t3384;
  double t3387;
  double t3416;
  double t3338;
  double t3392;
  double t3396;
  double t163;
  double t3426;
  double t3462;
  double t3470;
  double t158;
  double t3606;
  double t3622;
  double t3631;
  double t3587;
  double t3589;
  double t3592;
  double t3670;
  double t3671;
  double t3681;
  double t3584;
  double t3603;
  double t3634;
  double t3653;
  double t3654;
  double t3665;
  double t3669;
  double t3688;
  double t3699;
  double t3724;
  double t3729;
  double t3733;
  double t3708;
  double t3735;
  double t3771;
  double t3793;
  double t3798;
  double t3800;
  double t3523;
  double t3787;
  double t3801;
  double t3806;
  double t3821;
  double t3834;
  double t3835;
  double t3981;
  double t4001;
  double t4009;
  double t3888;
  double t3891;
  double t3898;
  double t3953;
  double t3965;
  double t3967;
  double t3968;
  double t4015;
  double t4022;
  double t4036;
  double t4066;
  double t4084;
  double t4035;
  double t4087;
  double t4089;
  double t4105;
  double t4113;
  double t4124;
  double t4098;
  double t4125;
  double t4129;
  double t4137;
  double t4139;
  double t4147;
  double t3410;
  double t3475;
  double t3485;
  double t3538;
  double t3544;
  double t3546;
  double t3817;
  double t3859;
  double t3863;
  double t3875;
  double t3876;
  double t3878;
  double t4130;
  double t4160;
  double t4169;
  double t4189;
  double t4196;
  double t4201;
  t547 = Cos(var1[3]);
  t1987 = Cos(var1[5]);
  t2085 = Sin(var1[4]);
  t2022 = Sin(var1[3]);
  t2270 = Sin(var1[5]);
  t1835 = Cos(var1[6]);
  t2369 = t547*t1987*t2085;
  t2720 = t2022*t2270;
  t2776 = t2369 + t2720;
  t2063 = -1.*t1987*t2022;
  t2343 = t547*t2085*t2270;
  t2357 = t2063 + t2343;
  t2806 = Sin(var1[6]);
  t544 = Cos(var1[8]);
  t3219 = t1835*t2776;
  t3236 = -1.*t2357*t2806;
  t3253 = t3219 + t3236;
  t707 = Cos(var1[4]);
  t780 = Cos(var1[7]);
  t991 = t547*t707*t780;
  t2362 = t1835*t2357;
  t2995 = t2776*t2806;
  t3106 = t2362 + t2995;
  t3160 = Sin(var1[7]);
  t3167 = t3106*t3160;
  t3176 = t991 + t3167;
  t3264 = Sin(var1[8]);
  t3300 = Cos(var1[9]);
  t3188 = t544*t3176;
  t3269 = t3253*t3264;
  t3270 = t3188 + t3269;
  t515 = Sin(var1[9]);
  t3305 = t544*t3253;
  t3313 = -1.*t3176*t3264;
  t3322 = t3305 + t3313;
  t3353 = Cos(var1[10]);
  t3299 = -1.*t515*t3270;
  t3328 = t3300*t3322;
  t3329 = t3299 + t3328;
  t454 = Sin(var1[10]);
  t3379 = t3300*t3270;
  t3384 = t515*t3322;
  t3387 = t3379 + t3384;
  t3416 = Cos(var1[11]);
  t3338 = t454*t3329;
  t3392 = t3353*t3387;
  t3396 = t3338 + t3392;
  t163 = Sin(var1[11]);
  t3426 = t3353*t3329;
  t3462 = -1.*t454*t3387;
  t3470 = t3426 + t3462;
  t158 = Cos(var1[12]);
  t3606 = t1987*t2022*t2085;
  t3622 = -1.*t547*t2270;
  t3631 = t3606 + t3622;
  t3587 = t547*t1987;
  t3589 = t2022*t2085*t2270;
  t3592 = t3587 + t3589;
  t3670 = t1835*t3631;
  t3671 = -1.*t3592*t2806;
  t3681 = t3670 + t3671;
  t3584 = t707*t780*t2022;
  t3603 = t1835*t3592;
  t3634 = t3631*t2806;
  t3653 = t3603 + t3634;
  t3654 = t3653*t3160;
  t3665 = t3584 + t3654;
  t3669 = t544*t3665;
  t3688 = t3681*t3264;
  t3699 = t3669 + t3688;
  t3724 = t544*t3681;
  t3729 = -1.*t3665*t3264;
  t3733 = t3724 + t3729;
  t3708 = -1.*t515*t3699;
  t3735 = t3300*t3733;
  t3771 = t3708 + t3735;
  t3793 = t3300*t3699;
  t3798 = t515*t3733;
  t3800 = t3793 + t3798;
  t3523 = Sin(var1[12]);
  t3787 = t454*t3771;
  t3801 = t3353*t3800;
  t3806 = t3787 + t3801;
  t3821 = t3353*t3771;
  t3834 = -1.*t454*t3800;
  t3835 = t3821 + t3834;
  t3981 = t707*t1987*t1835;
  t4001 = -1.*t707*t2270*t2806;
  t4009 = t3981 + t4001;
  t3888 = -1.*t780*t2085;
  t3891 = t707*t1835*t2270;
  t3898 = t707*t1987*t2806;
  t3953 = t3891 + t3898;
  t3965 = t3953*t3160;
  t3967 = t3888 + t3965;
  t3968 = t544*t3967;
  t4015 = t4009*t3264;
  t4022 = t3968 + t4015;
  t4036 = t544*t4009;
  t4066 = -1.*t3967*t3264;
  t4084 = t4036 + t4066;
  t4035 = -1.*t515*t4022;
  t4087 = t3300*t4084;
  t4089 = t4035 + t4087;
  t4105 = t3300*t4022;
  t4113 = t515*t4084;
  t4124 = t4105 + t4113;
  t4098 = t454*t4089;
  t4125 = t3353*t4124;
  t4129 = t4098 + t4125;
  t4137 = t3353*t4089;
  t4139 = -1.*t454*t4124;
  t4147 = t4137 + t4139;
  t3410 = -1.*t163*t3396;
  t3475 = t3416*t3470;
  t3485 = t3410 + t3475;
  t3538 = t3416*t3396;
  t3544 = t163*t3470;
  t3546 = t3538 + t3544;
  t3817 = -1.*t163*t3806;
  t3859 = t3416*t3835;
  t3863 = t3817 + t3859;
  t3875 = t3416*t3806;
  t3876 = t163*t3835;
  t3878 = t3875 + t3876;
  t4130 = -1.*t163*t4129;
  t4160 = t3416*t4147;
  t4169 = t4130 + t4160;
  t4189 = t3416*t4129;
  t4196 = t163*t4147;
  t4201 = t4189 + t4196;
  p_output1[0]=-1.*t158*t3485 + t3523*t3546;
  p_output1[1]=-1.*t158*t3863 + t3523*t3878;
  p_output1[2]=-1.*t158*t4169 + t3523*t4201;
  p_output1[3]=t3485*t3523 + t158*t3546;
  p_output1[4]=t3523*t3863 + t158*t3878;
  p_output1[5]=t3523*t4169 + t158*t4201;
  p_output1[6]=t3160*t547*t707 - 1.*t3106*t780;
  p_output1[7]=t2022*t3160*t707 - 1.*t3653*t780;
  p_output1[8]=-1.*t2085*t3160 - 1.*t3953*t780;
}



void R_toe_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
