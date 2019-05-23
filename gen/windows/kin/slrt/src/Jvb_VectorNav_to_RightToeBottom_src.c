/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:20:09 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jvb_VectorNav_to_RightToeBottom_src.h"

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
  double t595;
  double t687;
  double t1144;
  double t632;
  double t900;
  double t1074;
  double t581;
  double t1281;
  double t1298;
  double t1352;
  double t1609;
  double t1129;
  double t1396;
  double t1492;
  double t541;
  double t1770;
  double t1839;
  double t1880;
  double t2378;
  double t1608;
  double t2059;
  double t2069;
  double t524;
  double t2484;
  double t2493;
  double t2731;
  double t361;
  double t373;
  double t2911;
  double t5561;
  double t5572;
  double t5497;
  double t5508;
  double t5610;
  double t5614;
  double t5639;
  double t5644;
  double t5661;
  double t5665;
  double t5678;
  double t5689;
  double t5273;
  double t5279;
  double t5527;
  double t5554;
  double t5660;
  double t5694;
  double t5712;
  double t5715;
  double t5719;
  double t5726;
  double t5730;
  double t5740;
  double t4574;
  double t4701;
  double t5353;
  double t5487;
  double t5714;
  double t5742;
  double t5754;
  double t5767;
  double t5771;
  double t5772;
  double t5774;
  double t5783;
  double t4174;
  double t2369;
  double t2745;
  double t2834;
  double t2900;
  double t2952;
  double t3013;
  double t3097;
  double t3127;
  double t3381;
  double t3527;
  double t3622;
  double t4237;
  double t4242;
  double t4310;
  double t4325;
  double t5090;
  double t5136;
  double t5763;
  double t5803;
  double t5806;
  double t5808;
  double t5826;
  double t5838;
  double t5843;
  double t5847;
  double t5854;
  double t5859;
  double t5863;
  double t5976;
  double t5978;
  double t5985;
  double t5963;
  double t5993;
  double t6000;
  double t6011;
  double t6017;
  double t6005;
  double t6021;
  double t6026;
  double t6030;
  double t6034;
  double t6035;
  double t3468;
  double t3478;
  double t3688;
  double t4181;
  double t5866;
  double t5873;
  double t6029;
  double t6042;
  double t6049;
  double t6055;
  double t6058;
  double t6060;
  double t6062;
  double t6074;
  double t6077;
  double t6081;
  double t6084;
  double t5886;
  double t5888;
  double t5889;
  double t5899;
  double t5906;
  double t5931;
  double t5933;
  double t5937;
  double t5941;
  double t5943;
  double t6116;
  double t5881;
  double t5883;
  double t5909;
  double t5913;
  double t5922;
  double t6099;
  double t6100;
  double t6104;
  double t6121;
  double t6124;
  double t6091;
  double t6093;
  double t6109;
  double t5944;
  t595 = Cos(var1[13]);
  t687 = Sin(var1[13]);
  t1144 = Cos(var1[12]);
  t632 = 0.642788*t595;
  t900 = -0.766044*t687;
  t1074 = t632 + t900;
  t581 = Sin(var1[12]);
  t1281 = -0.766044*t595;
  t1298 = -0.642788*t687;
  t1352 = t1281 + t1298;
  t1609 = Cos(var1[11]);
  t1129 = -1.*t581*t1074;
  t1396 = t1144*t1352;
  t1492 = 0. + t1129 + t1396;
  t541 = Sin(var1[11]);
  t1770 = t1144*t1074;
  t1839 = t581*t1352;
  t1880 = 0. + t1770 + t1839;
  t2378 = Cos(var1[10]);
  t1608 = t541*t1492;
  t2059 = t1609*t1880;
  t2069 = 0. + t1608 + t2059;
  t524 = Sin(var1[10]);
  t2484 = t1609*t1492;
  t2493 = -1.*t541*t1880;
  t2731 = 0. + t2484 + t2493;
  t361 = Cos(var1[8]);
  t373 = Cos(var1[9]);
  t2911 = Sin(var1[9]);
  t5561 = -1.*t595;
  t5572 = 1. + t5561;
  t5497 = -1.*t1144;
  t5508 = 1. + t5497;
  t5610 = -0.0216*t5572;
  t5614 = 0.0306*t595;
  t5639 = 0.01770000000000005*t687;
  t5644 = 0. + t5610 + t5614 + t5639;
  t5661 = -1.1135*t5572;
  t5665 = -1.1312*t595;
  t5678 = 0.052199999999999996*t687;
  t5689 = 0. + t5661 + t5665 + t5678;
  t5273 = -1.*t1609;
  t5279 = 1. + t5273;
  t5527 = -0.7055*t5508;
  t5554 = -0.0184*t581;
  t5660 = t581*t5644;
  t5694 = t1144*t5689;
  t5712 = 0. + t5527 + t5554 + t5660 + t5694;
  t5715 = 0.0184*t5508;
  t5719 = -0.7055*t581;
  t5726 = t1144*t5644;
  t5730 = -1.*t581*t5689;
  t5740 = 0. + t5715 + t5719 + t5726 + t5730;
  t4574 = -1.*t2378;
  t4701 = 1. + t4574;
  t5353 = -0.0016*t5279;
  t5487 = -0.2707*t541;
  t5714 = -1.*t541*t5712;
  t5742 = t1609*t5740;
  t5754 = 0. + t5353 + t5487 + t5714 + t5742;
  t5767 = -0.2707*t5279;
  t5771 = 0.0016*t541;
  t5772 = t1609*t5712;
  t5774 = t541*t5740;
  t5783 = 0. + t5767 + t5771 + t5772 + t5774;
  t4174 = Sin(var1[8]);
  t2369 = -1.*t524*t2069;
  t2745 = t2378*t2731;
  t2834 = 0. + t2369 + t2745;
  t2900 = t373*t2834;
  t2952 = t2378*t2069;
  t3013 = t524*t2731;
  t3097 = 0. + t2952 + t3013;
  t3127 = -1.*t2911*t3097;
  t3381 = 0. + t2900 + t3127;
  t3527 = -1.*t361;
  t3622 = 1. + t3527;
  t4237 = -1.*t373;
  t4242 = 1. + t4237;
  t4310 = -0.049*t4242;
  t4325 = -0.09*t2911;
  t5090 = -0.21*t4701;
  t5136 = 0.049*t524;
  t5763 = t524*t5754;
  t5803 = t2378*t5783;
  t5806 = 0. + t5090 + t5136 + t5763 + t5803;
  t5808 = -1.*t2911*t5806;
  t5826 = -0.049*t4701;
  t5838 = -0.21*t524;
  t5843 = t2378*t5754;
  t5847 = -1.*t524*t5783;
  t5854 = 0. + t5826 + t5838 + t5843 + t5847;
  t5859 = t373*t5854;
  t5863 = 0. + t4310 + t4325 + t5808 + t5859;
  t5976 = 0.766044*t595;
  t5978 = 0.642788*t687;
  t5985 = t5976 + t5978;
  t5963 = t581*t1074;
  t5993 = t1144*t5985;
  t6000 = 0. + t5963 + t5993;
  t6011 = -1.*t581*t5985;
  t6017 = 0. + t1770 + t6011;
  t6005 = -1.*t541*t6000;
  t6021 = t1609*t6017;
  t6026 = 0. + t6005 + t6021;
  t6030 = t1609*t6000;
  t6034 = t541*t6017;
  t6035 = 0. + t6030 + t6034;
  t3468 = t361*t3381;
  t3478 = 0. + t3468;
  t3688 = -0.049*t3622;
  t4181 = -0.004500000000000004*t4174;
  t5866 = t361*t5863;
  t5873 = 0. + t3688 + t4181 + t5866;
  t6029 = t524*t6026;
  t6042 = t2378*t6035;
  t6049 = 0. + t6029 + t6042;
  t6055 = -1.*t2911*t6049;
  t6058 = t2378*t6026;
  t6060 = -1.*t524*t6035;
  t6062 = 0. + t6058 + t6060;
  t6074 = t373*t6062;
  t6077 = 0. + t6055 + t6074;
  t6081 = t361*t6077;
  t6084 = 0. + t6081;
  t5886 = -0.135*t3622;
  t5888 = -0.1305*t361;
  t5889 = 0.049*t4174;
  t5899 = t4174*t5863;
  t5906 = 0. + t5886 + t5888 + t5889 + t5899;
  t5931 = -0.09*t4242;
  t5933 = 0.049*t2911;
  t5937 = t373*t5806;
  t5941 = t2911*t5854;
  t5943 = 0. + t5931 + t5933 + t5937 + t5941;
  t6116 = 0. + t4174;
  t5881 = t4174*t3381;
  t5883 = 0. + t5881;
  t5909 = t2911*t2834;
  t5913 = t373*t3097;
  t5922 = 0. + t5909 + t5913;
  t6099 = t373*t6049;
  t6100 = t2911*t6062;
  t6104 = 0. + t6099 + t6100;
  t6121 = -1.*t361;
  t6124 = 0. + t6121;
  t6091 = t4174*t6077;
  t6093 = 0. + t6091;
  t6109 = -1.*t5943*t6104;
  t5944 = t5922*t5943;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0. + (t3478*t5873 + t5883*t5906 + t5944)*t6084 + t3478*(-1.*t5873*t6084 - 1.*t5906*t6093 + t6109);
  p_output1[22]=0.135*t6104 + (-1.*t3478*t5873 - 1.*t5883*t5906 - 1.*t5922*t5943)*t6116 + t3478*(0. + t5873*t6116 + t5906*t6124);
  p_output1[23]=0.135*t5922 + (t5873*t6084 + t5906*t6093 + t5943*t6104)*t6116 + t6084*(0. - 1.*t5873*t6116 - 1.*t5906*t6124);
  p_output1[24]=-0.049 + (0. + t3381*t5863 + t5944)*t6104 + t5922*(0. - 1.*t5863*t6077 + t6109);
  p_output1[25]=0. + 0.1305*t5922 - 0.135*t6077;
  p_output1[26]=0. - 0.135*t3381 - 0.1305*t6104;
  p_output1[27]=0.;
  p_output1[28]=0. - 1.*t3097*t5806 - 1.*t2834*t5854 + 0.049*t6049 - 0.09*t6062;
  p_output1[29]=0. - 0.09*t2834 + 0.049*t3097 + t5806*t6049 + t5854*t6062;
  p_output1[30]=0.;
  p_output1[31]=0. - 1.*t2731*t5754 - 1.*t2069*t5783 - 0.21*t6026 + 0.049*t6035;
  p_output1[32]=0. + 0.049*t2069 - 0.21*t2731 + t5754*t6026 + t5783*t6035;
  p_output1[33]=0.;
  p_output1[34]=0. - 1.*t1880*t5712 - 1.*t1492*t5740 + 0.0016*t6000 - 0.2707*t6017;
  p_output1[35]=0. - 0.2707*t1492 + 0.0016*t1880 + t5712*t6000 + t5740*t6017;
  p_output1[36]=0.;
  p_output1[37]=0. - 0.7055*t1074 - 1.*t1352*t5644 - 1.*t1074*t5689 - 0.0184*t5985;
  p_output1[38]=0. - 0.0184*t1074 - 0.7055*t1352 + t1074*t5644 + t5689*t5985;
  p_output1[39]=0.;
  p_output1[40]=0.05136484440000011;
  p_output1[41]=0.019994554799999897;
}



void Jvb_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
