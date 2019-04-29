/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:20:49 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottom_src.h"

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
  double t522;
  double t1085;
  double t1264;
  double t1107;
  double t1280;
  double t523;
  double t730;
  double t1023;
  double t1064;
  double t1437;
  double t1169;
  double t1352;
  double t1366;
  double t1454;
  double t1498;
  double t1550;
  double t1393;
  double t1571;
  double t1585;
  double t1956;
  double t1940;
  double t1943;
  double t1944;
  double t1936;
  double t1960;
  double t1966;
  double t1969;
  double t2050;
  double t1950;
  double t1972;
  double t1993;
  double t1922;
  double t2056;
  double t2090;
  double t2186;
  double t2255;
  double t2008;
  double t2195;
  double t2223;
  double t1918;
  double t2290;
  double t2295;
  double t2306;
  double t2394;
  double t2241;
  double t2318;
  double t2328;
  double t1915;
  double t2409;
  double t2416;
  double t2461;
  double t2517;
  double t2354;
  double t2462;
  double t2465;
  double t1904;
  double t2555;
  double t2566;
  double t2568;
  double t1610;
  double t1622;
  double t1681;
  double t1719;
  double t1748;
  double t1757;
  double t1684;
  double t1807;
  double t1817;
  double t2753;
  double t2781;
  double t2799;
  double t2884;
  double t2891;
  double t2912;
  double t2863;
  double t2922;
  double t2940;
  double t2947;
  double t2949;
  double t2959;
  double t2944;
  double t2977;
  double t3001;
  double t3017;
  double t3019;
  double t3033;
  double t3004;
  double t3051;
  double t3088;
  double t3155;
  double t3162;
  double t3170;
  double t3110;
  double t3181;
  double t3183;
  double t3252;
  double t3279;
  double t3303;
  double t1838;
  double t1842;
  double t1848;
  double t3384;
  double t3421;
  double t3423;
  double t3439;
  double t3447;
  double t3463;
  double t3436;
  double t3481;
  double t3484;
  double t3497;
  double t3523;
  double t3528;
  double t3488;
  double t3530;
  double t3537;
  double t3557;
  double t3567;
  double t3570;
  double t3555;
  double t3587;
  double t3591;
  double t3601;
  double t3602;
  double t3608;
  double t3593;
  double t3609;
  double t3610;
  double t3643;
  double t3653;
  double t3660;
  double t2469;
  double t2609;
  double t2621;
  double t2693;
  double t2704;
  double t2723;
  double t3203;
  double t3319;
  double t3327;
  double t3355;
  double t3358;
  double t3361;
  double t3631;
  double t3675;
  double t3676;
  double t3698;
  double t3709;
  double t3714;
  t522 = Cos(var1[3]);
  t1085 = Cos(var1[5]);
  t1264 = Sin(var1[3]);
  t1107 = Sin(var1[4]);
  t1280 = Sin(var1[5]);
  t523 = Cos(var1[4]);
  t730 = Sin(var1[14]);
  t1023 = Cos(var1[14]);
  t1064 = Sin(var1[13]);
  t1437 = Cos(var1[13]);
  t1169 = t522*t1085*t1107;
  t1352 = t1264*t1280;
  t1366 = t1169 + t1352;
  t1454 = -1.*t1085*t1264;
  t1498 = t522*t1107*t1280;
  t1550 = t1454 + t1498;
  t1393 = t1064*t1366;
  t1571 = t1437*t1550;
  t1585 = t1393 + t1571;
  t1956 = Cos(var1[15]);
  t1940 = t1437*t1366;
  t1943 = -1.*t1064*t1550;
  t1944 = t1940 + t1943;
  t1936 = Sin(var1[15]);
  t1960 = t1023*t522*t523;
  t1966 = t730*t1585;
  t1969 = t1960 + t1966;
  t2050 = Cos(var1[16]);
  t1950 = t1936*t1944;
  t1972 = t1956*t1969;
  t1993 = t1950 + t1972;
  t1922 = Sin(var1[16]);
  t2056 = t1956*t1944;
  t2090 = -1.*t1936*t1969;
  t2186 = t2056 + t2090;
  t2255 = Cos(var1[17]);
  t2008 = -1.*t1922*t1993;
  t2195 = t2050*t2186;
  t2223 = t2008 + t2195;
  t1918 = Sin(var1[17]);
  t2290 = t2050*t1993;
  t2295 = t1922*t2186;
  t2306 = t2290 + t2295;
  t2394 = Cos(var1[18]);
  t2241 = t1918*t2223;
  t2318 = t2255*t2306;
  t2328 = t2241 + t2318;
  t1915 = Sin(var1[18]);
  t2409 = t2255*t2223;
  t2416 = -1.*t1918*t2306;
  t2461 = t2409 + t2416;
  t2517 = Cos(var1[19]);
  t2354 = -1.*t1915*t2328;
  t2462 = t2394*t2461;
  t2465 = t2354 + t2462;
  t1904 = Sin(var1[19]);
  t2555 = t2394*t2328;
  t2566 = t1915*t2461;
  t2568 = t2555 + t2566;
  t1610 = t1085*t1264*t1107;
  t1622 = -1.*t522*t1280;
  t1681 = t1610 + t1622;
  t1719 = t522*t1085;
  t1748 = t1264*t1107*t1280;
  t1757 = t1719 + t1748;
  t1684 = t1064*t1681;
  t1807 = t1437*t1757;
  t1817 = t1684 + t1807;
  t2753 = t1437*t1681;
  t2781 = -1.*t1064*t1757;
  t2799 = t2753 + t2781;
  t2884 = t1023*t523*t1264;
  t2891 = t730*t1817;
  t2912 = t2884 + t2891;
  t2863 = t1936*t2799;
  t2922 = t1956*t2912;
  t2940 = t2863 + t2922;
  t2947 = t1956*t2799;
  t2949 = -1.*t1936*t2912;
  t2959 = t2947 + t2949;
  t2944 = -1.*t1922*t2940;
  t2977 = t2050*t2959;
  t3001 = t2944 + t2977;
  t3017 = t2050*t2940;
  t3019 = t1922*t2959;
  t3033 = t3017 + t3019;
  t3004 = t1918*t3001;
  t3051 = t2255*t3033;
  t3088 = t3004 + t3051;
  t3155 = t2255*t3001;
  t3162 = -1.*t1918*t3033;
  t3170 = t3155 + t3162;
  t3110 = -1.*t1915*t3088;
  t3181 = t2394*t3170;
  t3183 = t3110 + t3181;
  t3252 = t2394*t3088;
  t3279 = t1915*t3170;
  t3303 = t3252 + t3279;
  t1838 = t523*t1085*t1064;
  t1842 = t1437*t523*t1280;
  t1848 = t1838 + t1842;
  t3384 = t1437*t523*t1085;
  t3421 = -1.*t523*t1064*t1280;
  t3423 = t3384 + t3421;
  t3439 = -1.*t1023*t1107;
  t3447 = t730*t1848;
  t3463 = t3439 + t3447;
  t3436 = t1936*t3423;
  t3481 = t1956*t3463;
  t3484 = t3436 + t3481;
  t3497 = t1956*t3423;
  t3523 = -1.*t1936*t3463;
  t3528 = t3497 + t3523;
  t3488 = -1.*t1922*t3484;
  t3530 = t2050*t3528;
  t3537 = t3488 + t3530;
  t3557 = t2050*t3484;
  t3567 = t1922*t3528;
  t3570 = t3557 + t3567;
  t3555 = t1918*t3537;
  t3587 = t2255*t3570;
  t3591 = t3555 + t3587;
  t3601 = t2255*t3537;
  t3602 = -1.*t1918*t3570;
  t3608 = t3601 + t3602;
  t3593 = -1.*t1915*t3591;
  t3609 = t2394*t3608;
  t3610 = t3593 + t3609;
  t3643 = t2394*t3591;
  t3653 = t1915*t3608;
  t3660 = t3643 + t3653;
  t2469 = t1904*t2465;
  t2609 = t2517*t2568;
  t2621 = t2469 + t2609;
  t2693 = t2517*t2465;
  t2704 = -1.*t1904*t2568;
  t2723 = t2693 + t2704;
  t3203 = t1904*t3183;
  t3319 = t2517*t3303;
  t3327 = t3203 + t3319;
  t3355 = t2517*t3183;
  t3358 = -1.*t1904*t3303;
  t3361 = t3355 + t3358;
  t3631 = t1904*t3610;
  t3675 = t2517*t3660;
  t3676 = t3631 + t3675;
  t3698 = t2517*t3610;
  t3709 = -1.*t1904*t3660;
  t3714 = t3698 + t3709;
  p_output1[0]=-1.*t1023*t1585 + t522*t523*t730;
  p_output1[1]=-1.*t1023*t1817 + t1264*t523*t730;
  p_output1[2]=-1.*t1023*t1848 - 1.*t1107*t730;
  p_output1[3]=0.642788*t2621 + 0.766044*t2723;
  p_output1[4]=0.642788*t3327 + 0.766044*t3361;
  p_output1[5]=0.642788*t3676 + 0.766044*t3714;
  p_output1[6]=-0.766044*t2621 + 0.642788*t2723;
  p_output1[7]=-0.766044*t3327 + 0.642788*t3361;
  p_output1[8]=-0.766044*t3676 + 0.642788*t3714;
}



void R_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
