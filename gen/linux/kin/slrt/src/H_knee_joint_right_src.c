/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:44 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_joint_right_src.h"

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
  double t769;
  double t903;
  double t612;
  double t863;
  double t1068;
  double t1299;
  double t899;
  double t1145;
  double t1277;
  double t602;
  double t1423;
  double t1443;
  double t1580;
  double t1902;
  double t1286;
  double t1603;
  double t1634;
  double t218;
  double t1964;
  double t1973;
  double t1980;
  double t1990;
  double t1997;
  double t2029;
  double t2143;
  double t2199;
  double t2240;
  double t153;
  double t2428;
  double t2429;
  double t2430;
  double t2464;
  double t2489;
  double t2506;
  double t2288;
  double t2459;
  double t2551;
  double t2616;
  double t2690;
  double t2826;
  double t2827;
  double t2885;
  double t2948;
  double t2951;
  double t3198;
  double t3207;
  double t3226;
  double t3255;
  double t3261;
  double t3265;
  double t3267;
  double t3295;
  double t3304;
  double t1637;
  double t2250;
  double t2257;
  double t2306;
  double t2308;
  double t2324;
  double t2664;
  double t3019;
  double t3081;
  double t3126;
  double t3143;
  double t3144;
  double t3247;
  double t3306;
  double t3331;
  double t3465;
  double t3491;
  double t3533;
  double t4341;
  double t4342;
  double t4646;
  double t4649;
  double t4908;
  double t4922;
  double t3686;
  double t3722;
  double t3762;
  double t4348;
  double t4351;
  double t4352;
  double t4459;
  double t4482;
  double t4493;
  double t4513;
  double t4519;
  double t4564;
  double t4580;
  double t4588;
  double t4615;
  double t4750;
  double t4751;
  double t4780;
  double t4855;
  double t4892;
  double t4895;
  double t4938;
  double t4957;
  double t4974;
  double t5036;
  double t5049;
  double t5058;
  double t3839;
  double t3844;
  double t3924;
  double t3976;
  double t4027;
  double t4029;
  t769 = Cos(var1[5]);
  t903 = Sin(var1[3]);
  t612 = Cos(var1[3]);
  t863 = Sin(var1[4]);
  t1068 = Sin(var1[5]);
  t1299 = Sin(var1[13]);
  t899 = t612*t769*t863;
  t1145 = t903*t1068;
  t1277 = t899 + t1145;
  t602 = Cos(var1[13]);
  t1423 = -1.*t769*t903;
  t1443 = t612*t863*t1068;
  t1580 = t1423 + t1443;
  t1902 = Cos(var1[15]);
  t1286 = t602*t1277;
  t1603 = -1.*t1299*t1580;
  t1634 = t1286 + t1603;
  t218 = Sin(var1[15]);
  t1964 = Cos(var1[14]);
  t1973 = Cos(var1[4]);
  t1980 = t1964*t612*t1973;
  t1990 = Sin(var1[14]);
  t1997 = t1299*t1277;
  t2029 = t602*t1580;
  t2143 = t1997 + t2029;
  t2199 = t1990*t2143;
  t2240 = t1980 + t2199;
  t153 = Sin(var1[16]);
  t2428 = t769*t903*t863;
  t2429 = -1.*t612*t1068;
  t2430 = t2428 + t2429;
  t2464 = t612*t769;
  t2489 = t903*t863*t1068;
  t2506 = t2464 + t2489;
  t2288 = Cos(var1[16]);
  t2459 = t602*t2430;
  t2551 = -1.*t1299*t2506;
  t2616 = t2459 + t2551;
  t2690 = t1964*t1973*t903;
  t2826 = t1299*t2430;
  t2827 = t602*t2506;
  t2885 = t2826 + t2827;
  t2948 = t1990*t2885;
  t2951 = t2690 + t2948;
  t3198 = t602*t1973*t769;
  t3207 = -1.*t1973*t1299*t1068;
  t3226 = t3198 + t3207;
  t3255 = -1.*t1964*t863;
  t3261 = t1973*t769*t1299;
  t3265 = t602*t1973*t1068;
  t3267 = t3261 + t3265;
  t3295 = t1990*t3267;
  t3304 = t3255 + t3295;
  t1637 = t218*t1634;
  t2250 = t1902*t2240;
  t2257 = t1637 + t2250;
  t2306 = t1902*t1634;
  t2308 = -1.*t218*t2240;
  t2324 = t2306 + t2308;
  t2664 = t218*t2616;
  t3019 = t1902*t2951;
  t3081 = t2664 + t3019;
  t3126 = t1902*t2616;
  t3143 = -1.*t218*t2951;
  t3144 = t3126 + t3143;
  t3247 = t218*t3226;
  t3306 = t1902*t3304;
  t3331 = t3247 + t3306;
  t3465 = t1902*t3226;
  t3491 = -1.*t218*t3304;
  t3533 = t3465 + t3491;
  t4341 = -1.*t1964;
  t4342 = 1. + t4341;
  t4646 = -1.*t1902;
  t4649 = 1. + t4646;
  t4908 = -1.*t2288;
  t4922 = 1. + t4908;
  t3686 = t2288*t2257;
  t3722 = t153*t2324;
  t3762 = t3686 + t3722;
  t4348 = -0.049*t4342;
  t4351 = -0.135*t1990;
  t4352 = 0. + t4348 + t4351;
  t4459 = 0.135*t1299;
  t4482 = 0. + t4459;
  t4493 = -1.*t602;
  t4513 = 1. + t4493;
  t4519 = -0.135*t4513;
  t4564 = 0. + t4519;
  t4580 = -0.135*t4342;
  t4588 = 0.049*t1990;
  t4615 = 0. + t4580 + t4588;
  t4750 = -0.09*t4649;
  t4751 = 0.049*t218;
  t4780 = 0. + t4750 + t4751;
  t4855 = -0.049*t4649;
  t4892 = -0.09*t218;
  t4895 = 0. + t4855 + t4892;
  t4938 = -0.049*t4922;
  t4957 = -0.21*t153;
  t4974 = 0. + t4938 + t4957;
  t5036 = -0.21*t4922;
  t5049 = 0.049*t153;
  t5058 = 0. + t5036 + t5049;
  t3839 = t2288*t3081;
  t3844 = t153*t3144;
  t3924 = t3839 + t3844;
  t3976 = t2288*t3331;
  t4027 = t153*t3533;
  t4029 = t3976 + t4027;
  p_output1[0]=t153*t2257 - 1.*t2288*t2324;
  p_output1[1]=t153*t3081 - 1.*t2288*t3144;
  p_output1[2]=t153*t3331 - 1.*t2288*t3533;
  p_output1[3]=0.;
  p_output1[4]=t3762;
  p_output1[5]=t3924;
  p_output1[6]=t4029;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1964*t2143 + t1973*t1990*t612;
  p_output1[9]=-1.*t1964*t2885 + t1973*t1990*t903;
  p_output1[10]=-1.*t1964*t3267 - 1.*t1990*t863;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.21*(-1.*t153*t2257 + t2288*t2324) - 0.049*t3762 + t1277*t4482 + t1580*t4564 + t2143*t4615 + t1634*t4780 + t2240*t4895 + t2257*t4974 + t2324*t5058 + t1973*t4352*t612 - 0.1305*(t1964*t2143 - 1.*t1973*t1990*t612) + var1[0];
  p_output1[13]=0. - 0.21*(-1.*t153*t3081 + t2288*t3144) - 0.049*t3924 + t2430*t4482 + t2506*t4564 + t2885*t4615 + t2616*t4780 + t2951*t4895 + t3081*t4974 + t3144*t5058 + t1973*t4352*t903 - 0.1305*(t1964*t2885 - 1.*t1973*t1990*t903) + var1[1];
  p_output1[14]=0. - 0.21*(-1.*t153*t3331 + t2288*t3533) - 0.049*t4029 + t1068*t1973*t4564 + t3267*t4615 + t3226*t4780 + t3304*t4895 + t3331*t4974 + t3533*t5058 + t1973*t4482*t769 - 1.*t4352*t863 - 0.1305*(t1964*t3267 + t1990*t863) + var1[2];
  p_output1[15]=1.;
}



void H_knee_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
