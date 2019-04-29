/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:36 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_to_shin_left_src.h"

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
  double t1661;
  double t2474;
  double t2920;
  double t2527;
  double t2974;
  double t2370;
  double t3442;
  double t3502;
  double t3509;
  double t2542;
  double t3139;
  double t3162;
  double t3518;
  double t928;
  double t3591;
  double t3626;
  double t3637;
  double t1829;
  double t1851;
  double t2145;
  double t3163;
  double t3522;
  double t3539;
  double t3545;
  double t3556;
  double t3560;
  double t3645;
  double t3673;
  double t3579;
  double t3650;
  double t3651;
  double t662;
  double t3702;
  double t3707;
  double t3715;
  double t533;
  double t3880;
  double t3882;
  double t3892;
  double t3825;
  double t3827;
  double t3858;
  double t3970;
  double t3974;
  double t3985;
  double t3823;
  double t3867;
  double t3896;
  double t3909;
  double t3910;
  double t3911;
  double t3753;
  double t3913;
  double t3987;
  double t3995;
  double t4006;
  double t4008;
  double t4030;
  double t4375;
  double t4391;
  double t4428;
  double t4275;
  double t4294;
  double t4305;
  double t4318;
  double t4344;
  double t4357;
  double t4361;
  double t4436;
  double t4448;
  double t4515;
  double t4564;
  double t4579;
  double t3658;
  double t3717;
  double t3719;
  double t3754;
  double t3757;
  double t3786;
  double t3997;
  double t4041;
  double t4043;
  double t4126;
  double t4158;
  double t4247;
  double t4466;
  double t4591;
  double t4594;
  double t4638;
  double t4662;
  double t4663;
  t1661 = Cos(var1[3]);
  t2474 = Cos(var1[5]);
  t2920 = Sin(var1[4]);
  t2527 = Sin(var1[3]);
  t2974 = Sin(var1[5]);
  t2370 = Cos(var1[6]);
  t3442 = t1661*t2474*t2920;
  t3502 = t2527*t2974;
  t3509 = t3442 + t3502;
  t2542 = -1.*t2474*t2527;
  t3139 = t1661*t2920*t2974;
  t3162 = t2542 + t3139;
  t3518 = Sin(var1[6]);
  t928 = Cos(var1[8]);
  t3591 = t2370*t3509;
  t3626 = -1.*t3162*t3518;
  t3637 = t3591 + t3626;
  t1829 = Cos(var1[4]);
  t1851 = Cos(var1[7]);
  t2145 = t1661*t1829*t1851;
  t3163 = t2370*t3162;
  t3522 = t3509*t3518;
  t3539 = t3163 + t3522;
  t3545 = Sin(var1[7]);
  t3556 = t3539*t3545;
  t3560 = t2145 + t3556;
  t3645 = Sin(var1[8]);
  t3673 = Cos(var1[9]);
  t3579 = t928*t3560;
  t3650 = t3637*t3645;
  t3651 = t3579 + t3650;
  t662 = Sin(var1[9]);
  t3702 = t928*t3637;
  t3707 = -1.*t3560*t3645;
  t3715 = t3702 + t3707;
  t533 = Cos(var1[10]);
  t3880 = t2474*t2527*t2920;
  t3882 = -1.*t1661*t2974;
  t3892 = t3880 + t3882;
  t3825 = t1661*t2474;
  t3827 = t2527*t2920*t2974;
  t3858 = t3825 + t3827;
  t3970 = t2370*t3892;
  t3974 = -1.*t3858*t3518;
  t3985 = t3970 + t3974;
  t3823 = t1829*t1851*t2527;
  t3867 = t2370*t3858;
  t3896 = t3892*t3518;
  t3909 = t3867 + t3896;
  t3910 = t3909*t3545;
  t3911 = t3823 + t3910;
  t3753 = Sin(var1[10]);
  t3913 = t928*t3911;
  t3987 = t3985*t3645;
  t3995 = t3913 + t3987;
  t4006 = t928*t3985;
  t4008 = -1.*t3911*t3645;
  t4030 = t4006 + t4008;
  t4375 = t1829*t2474*t2370;
  t4391 = -1.*t1829*t2974*t3518;
  t4428 = t4375 + t4391;
  t4275 = -1.*t1851*t2920;
  t4294 = t1829*t2370*t2974;
  t4305 = t1829*t2474*t3518;
  t4318 = t4294 + t4305;
  t4344 = t4318*t3545;
  t4357 = t4275 + t4344;
  t4361 = t928*t4357;
  t4436 = t4428*t3645;
  t4448 = t4361 + t4436;
  t4515 = t928*t4428;
  t4564 = -1.*t4357*t3645;
  t4579 = t4515 + t4564;
  t3658 = -1.*t662*t3651;
  t3717 = t3673*t3715;
  t3719 = t3658 + t3717;
  t3754 = t3673*t3651;
  t3757 = t662*t3715;
  t3786 = t3754 + t3757;
  t3997 = -1.*t662*t3995;
  t4041 = t3673*t4030;
  t4043 = t3997 + t4041;
  t4126 = t3673*t3995;
  t4158 = t662*t4030;
  t4247 = t4126 + t4158;
  t4466 = -1.*t662*t4448;
  t4591 = t3673*t4579;
  t4594 = t4466 + t4591;
  t4638 = t3673*t4448;
  t4662 = t662*t4579;
  t4663 = t4638 + t4662;
  p_output1[0]=t3753*t3786 - 1.*t3719*t533;
  p_output1[1]=t3753*t4247 - 1.*t4043*t533;
  p_output1[2]=t3753*t4663 - 1.*t4594*t533;
  p_output1[3]=t3719*t3753 + t3786*t533;
  p_output1[4]=t3753*t4043 + t4247*t533;
  p_output1[5]=t3753*t4594 + t4663*t533;
  p_output1[6]=-1.*t1851*t3539 + t1661*t1829*t3545;
  p_output1[7]=t1829*t2527*t3545 - 1.*t1851*t3909;
  p_output1[8]=-1.*t2920*t3545 - 1.*t1851*t4318;
}



void R_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
