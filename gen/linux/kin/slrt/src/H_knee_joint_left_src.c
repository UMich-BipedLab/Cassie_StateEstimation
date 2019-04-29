/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:33 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_joint_left_src.h"

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
  double t242;
  double t719;
  double t911;
  double t816;
  double t926;
  double t536;
  double t1105;
  double t1128;
  double t1156;
  double t860;
  double t940;
  double t985;
  double t1174;
  double t166;
  double t1516;
  double t1545;
  double t1567;
  double t410;
  double t524;
  double t535;
  double t1072;
  double t1271;
  double t1295;
  double t1316;
  double t1348;
  double t1417;
  double t1677;
  double t29;
  double t2071;
  double t2074;
  double t2105;
  double t1916;
  double t1974;
  double t1996;
  double t1764;
  double t2379;
  double t2457;
  double t2549;
  double t1914;
  double t2030;
  double t2149;
  double t2195;
  double t2324;
  double t2327;
  double t3310;
  double t3315;
  double t3327;
  double t2950;
  double t2958;
  double t2993;
  double t3090;
  double t3132;
  double t3169;
  double t1468;
  double t1695;
  double t1716;
  double t1782;
  double t1783;
  double t1840;
  double t2331;
  double t2572;
  double t2611;
  double t2752;
  double t2800;
  double t2877;
  double t3247;
  double t3374;
  double t3407;
  double t3437;
  double t3440;
  double t3533;
  double t4307;
  double t4321;
  double t4713;
  double t4788;
  double t5046;
  double t5117;
  double t3570;
  double t3580;
  double t3588;
  double t3973;
  double t3975;
  double t3978;
  double t4007;
  double t4186;
  double t4261;
  double t4363;
  double t4376;
  double t4425;
  double t4496;
  double t4525;
  double t4543;
  double t4833;
  double t4834;
  double t4917;
  double t4971;
  double t5015;
  double t5028;
  double t5233;
  double t5271;
  double t5277;
  double t5312;
  double t5349;
  double t5360;
  double t3596;
  double t3614;
  double t3615;
  double t3623;
  double t3636;
  double t3642;
  t242 = Cos(var1[3]);
  t719 = Cos(var1[5]);
  t911 = Sin(var1[4]);
  t816 = Sin(var1[3]);
  t926 = Sin(var1[5]);
  t536 = Cos(var1[6]);
  t1105 = t242*t719*t911;
  t1128 = t816*t926;
  t1156 = t1105 + t1128;
  t860 = -1.*t719*t816;
  t940 = t242*t911*t926;
  t985 = t860 + t940;
  t1174 = Sin(var1[6]);
  t166 = Cos(var1[8]);
  t1516 = t536*t1156;
  t1545 = -1.*t985*t1174;
  t1567 = t1516 + t1545;
  t410 = Cos(var1[4]);
  t524 = Cos(var1[7]);
  t535 = t242*t410*t524;
  t1072 = t536*t985;
  t1271 = t1156*t1174;
  t1295 = t1072 + t1271;
  t1316 = Sin(var1[7]);
  t1348 = t1295*t1316;
  t1417 = t535 + t1348;
  t1677 = Sin(var1[8]);
  t29 = Sin(var1[9]);
  t2071 = t719*t816*t911;
  t2074 = -1.*t242*t926;
  t2105 = t2071 + t2074;
  t1916 = t242*t719;
  t1974 = t816*t911*t926;
  t1996 = t1916 + t1974;
  t1764 = Cos(var1[9]);
  t2379 = t536*t2105;
  t2457 = -1.*t1996*t1174;
  t2549 = t2379 + t2457;
  t1914 = t410*t524*t816;
  t2030 = t536*t1996;
  t2149 = t2105*t1174;
  t2195 = t2030 + t2149;
  t2324 = t2195*t1316;
  t2327 = t1914 + t2324;
  t3310 = t410*t719*t536;
  t3315 = -1.*t410*t926*t1174;
  t3327 = t3310 + t3315;
  t2950 = -1.*t524*t911;
  t2958 = t410*t536*t926;
  t2993 = t410*t719*t1174;
  t3090 = t2958 + t2993;
  t3132 = t3090*t1316;
  t3169 = t2950 + t3132;
  t1468 = t166*t1417;
  t1695 = t1567*t1677;
  t1716 = t1468 + t1695;
  t1782 = t166*t1567;
  t1783 = -1.*t1417*t1677;
  t1840 = t1782 + t1783;
  t2331 = t166*t2327;
  t2572 = t2549*t1677;
  t2611 = t2331 + t2572;
  t2752 = t166*t2549;
  t2800 = -1.*t2327*t1677;
  t2877 = t2752 + t2800;
  t3247 = t166*t3169;
  t3374 = t3327*t1677;
  t3407 = t3247 + t3374;
  t3437 = t166*t3327;
  t3440 = -1.*t3169*t1677;
  t3533 = t3437 + t3440;
  t4307 = -1.*t524;
  t4321 = 1. + t4307;
  t4713 = -1.*t166;
  t4788 = 1. + t4713;
  t5046 = -1.*t1764;
  t5117 = 1. + t5046;
  t3570 = t1764*t1716;
  t3580 = t29*t1840;
  t3588 = t3570 + t3580;
  t3973 = -1.*t536;
  t3975 = 1. + t3973;
  t3978 = 0.135*t3975;
  t4007 = 0. + t3978;
  t4186 = -0.135*t1174;
  t4261 = 0. + t4186;
  t4363 = 0.135*t4321;
  t4376 = 0.049*t1316;
  t4425 = 0. + t4363 + t4376;
  t4496 = -0.049*t4321;
  t4525 = 0.135*t1316;
  t4543 = 0. + t4496 + t4525;
  t4833 = -0.049*t4788;
  t4834 = -0.09*t1677;
  t4917 = 0. + t4833 + t4834;
  t4971 = -0.09*t4788;
  t5015 = 0.049*t1677;
  t5028 = 0. + t4971 + t5015;
  t5233 = -0.049*t5117;
  t5271 = -0.21*t29;
  t5277 = 0. + t5233 + t5271;
  t5312 = -0.21*t5117;
  t5349 = 0.049*t29;
  t5360 = 0. + t5312 + t5349;
  t3596 = t1764*t2611;
  t3614 = t29*t2877;
  t3615 = t3596 + t3614;
  t3623 = t1764*t3407;
  t3636 = t29*t3533;
  t3642 = t3623 + t3636;
  p_output1[0]=-1.*t1764*t1840 + t1716*t29;
  p_output1[1]=-1.*t1764*t2877 + t2611*t29;
  p_output1[2]=t29*t3407 - 1.*t1764*t3533;
  p_output1[3]=0.;
  p_output1[4]=t3588;
  p_output1[5]=t3615;
  p_output1[6]=t3642;
  p_output1[7]=0.;
  p_output1[8]=t1316*t242*t410 - 1.*t1295*t524;
  p_output1[9]=-1.*t2195*t524 + t1316*t410*t816;
  p_output1[10]=-1.*t3090*t524 - 1.*t1316*t911;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.21*(t1764*t1840 - 1.*t1716*t29) - 0.049*t3588 + t1156*t4261 + t1295*t4425 + t242*t410*t4543 + t1417*t4917 + t1567*t5028 + 0.1305*(-1.*t1316*t242*t410 + t1295*t524) + t1716*t5277 + t1840*t5360 + t4007*t985 + var1[0];
  p_output1[13]=0. - 0.21*(t1764*t2877 - 1.*t2611*t29) - 0.049*t3615 + t1996*t4007 + t2105*t4261 + t2195*t4425 + t2327*t4917 + t2549*t5028 + t2611*t5277 + t2877*t5360 + t410*t4543*t816 + 0.1305*(t2195*t524 - 1.*t1316*t410*t816) + var1[1];
  p_output1[14]=0. - 0.21*(-1.*t29*t3407 + t1764*t3533) - 0.049*t3642 + t3090*t4425 + t3169*t4917 + t3327*t5028 + t3407*t5277 + t3533*t5360 + t410*t4261*t719 - 1.*t4543*t911 + 0.1305*(t3090*t524 + t1316*t911) + t4007*t410*t926 + var1[2];
  p_output1[15]=1.;
}



void H_knee_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
