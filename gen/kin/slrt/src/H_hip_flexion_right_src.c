/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:42 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_hip_flexion_right_src.h"

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
  double t598;
  double t870;
  double t520;
  double t646;
  double t1217;
  double t1463;
  double t715;
  double t1350;
  double t1427;
  double t53;
  double t1503;
  double t1514;
  double t1572;
  double t41;
  double t1897;
  double t1952;
  double t1958;
  double t1985;
  double t2594;
  double t2595;
  double t2605;
  double t2814;
  double t2844;
  double t2909;
  double t1439;
  double t1657;
  double t1698;
  double t1984;
  double t2146;
  double t2222;
  double t2402;
  double t2431;
  double t2477;
  double t2704;
  double t2931;
  double t2982;
  double t3001;
  double t3043;
  double t3044;
  double t3064;
  double t3076;
  double t3178;
  double t3258;
  double t3262;
  double t3374;
  double t3478;
  double t3497;
  double t3505;
  double t3521;
  double t3574;
  double t3585;
  double t4184;
  double t4273;
  double t4559;
  double t4577;
  double t3610;
  double t3613;
  double t3626;
  double t4279;
  double t4286;
  double t4291;
  double t4306;
  double t4314;
  double t4356;
  double t4401;
  double t4404;
  double t4406;
  double t4442;
  double t4484;
  double t4505;
  double t4593;
  double t4613;
  double t4631;
  double t4856;
  double t4880;
  double t4889;
  double t3659;
  double t3721;
  double t3727;
  double t3775;
  double t3803;
  double t3816;
  t598 = Cos(var1[5]);
  t870 = Sin(var1[3]);
  t520 = Cos(var1[3]);
  t646 = Sin(var1[4]);
  t1217 = Sin(var1[5]);
  t1463 = Sin(var1[13]);
  t715 = t520*t598*t646;
  t1350 = t870*t1217;
  t1427 = t715 + t1350;
  t53 = Cos(var1[13]);
  t1503 = -1.*t598*t870;
  t1514 = t520*t646*t1217;
  t1572 = t1503 + t1514;
  t41 = Cos(var1[15]);
  t1897 = Sin(var1[15]);
  t1952 = Cos(var1[14]);
  t1958 = Cos(var1[4]);
  t1985 = Sin(var1[14]);
  t2594 = t598*t870*t646;
  t2595 = -1.*t520*t1217;
  t2605 = t2594 + t2595;
  t2814 = t520*t598;
  t2844 = t870*t646*t1217;
  t2909 = t2814 + t2844;
  t1439 = t53*t1427;
  t1657 = -1.*t1463*t1572;
  t1698 = t1439 + t1657;
  t1984 = t1952*t520*t1958;
  t2146 = t1463*t1427;
  t2222 = t53*t1572;
  t2402 = t2146 + t2222;
  t2431 = t1985*t2402;
  t2477 = t1984 + t2431;
  t2704 = t53*t2605;
  t2931 = -1.*t1463*t2909;
  t2982 = t2704 + t2931;
  t3001 = t1952*t1958*t870;
  t3043 = t1463*t2605;
  t3044 = t53*t2909;
  t3064 = t3043 + t3044;
  t3076 = t1985*t3064;
  t3178 = t3001 + t3076;
  t3258 = t53*t1958*t598;
  t3262 = -1.*t1958*t1463*t1217;
  t3374 = t3258 + t3262;
  t3478 = -1.*t1952*t646;
  t3497 = t1958*t598*t1463;
  t3505 = t53*t1958*t1217;
  t3521 = t3497 + t3505;
  t3574 = t1985*t3521;
  t3585 = t3478 + t3574;
  t4184 = -1.*t1952;
  t4273 = 1. + t4184;
  t4559 = -1.*t41;
  t4577 = 1. + t4559;
  t3610 = t1897*t1698;
  t3613 = t41*t2477;
  t3626 = t3610 + t3613;
  t4279 = -0.049*t4273;
  t4286 = -0.135*t1985;
  t4291 = 0. + t4279 + t4286;
  t4306 = 0.135*t1463;
  t4314 = 0. + t4306;
  t4356 = -1.*t53;
  t4401 = 1. + t4356;
  t4404 = -0.135*t4401;
  t4406 = 0. + t4404;
  t4442 = -0.135*t4273;
  t4484 = 0.049*t1985;
  t4505 = 0. + t4442 + t4484;
  t4593 = -0.09*t4577;
  t4613 = 0.049*t1897;
  t4631 = 0. + t4593 + t4613;
  t4856 = -0.049*t4577;
  t4880 = -0.09*t1897;
  t4889 = 0. + t4856 + t4880;
  t3659 = t1897*t2982;
  t3721 = t41*t3178;
  t3727 = t3659 + t3721;
  t3775 = t1897*t3374;
  t3803 = t41*t3585;
  t3816 = t3775 + t3803;
  p_output1[0]=t1897*t2477 - 1.*t1698*t41;
  p_output1[1]=t1897*t3178 - 1.*t2982*t41;
  p_output1[2]=t1897*t3585 - 1.*t3374*t41;
  p_output1[3]=0.;
  p_output1[4]=t3626;
  p_output1[5]=t3727;
  p_output1[6]=t3816;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1952*t2402 + t1958*t1985*t520;
  p_output1[9]=-1.*t1952*t3064 + t1958*t1985*t870;
  p_output1[10]=-1.*t1952*t3521 - 1.*t1985*t646;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.049*t3626 - 0.09*(-1.*t1897*t2477 + t1698*t41) + t1427*t4314 + t1572*t4406 + t2402*t4505 + t1698*t4631 + t2477*t4889 + t1958*t4291*t520 - 0.135*(t1952*t2402 - 1.*t1958*t1985*t520) + var1[0];
  p_output1[13]=0. - 0.049*t3727 - 0.09*(-1.*t1897*t3178 + t2982*t41) + t2605*t4314 + t2909*t4406 + t3064*t4505 + t2982*t4631 + t3178*t4889 + t1958*t4291*t870 - 0.135*(t1952*t3064 - 1.*t1958*t1985*t870) + var1[1];
  p_output1[14]=0. - 0.049*t3816 - 0.09*(-1.*t1897*t3585 + t3374*t41) + t1217*t1958*t4406 + t3521*t4505 + t3374*t4631 + t3585*t4889 + t1958*t4314*t598 - 1.*t4291*t646 - 0.135*(t1952*t3521 + t1985*t646) + var1[2];
  p_output1[15]=1.;
}



void H_hip_flexion_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
