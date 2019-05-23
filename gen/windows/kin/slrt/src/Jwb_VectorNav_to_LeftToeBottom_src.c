/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:20:01 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jwb_VectorNav_to_LeftToeBottom_src.h"

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
  double t612;
  double t826;
  double t917;
  double t702;
  double t854;
  double t861;
  double t609;
  double t931;
  double t1012;
  double t1057;
  double t1303;
  double t868;
  double t1150;
  double t1202;
  double t565;
  double t1323;
  double t1375;
  double t1389;
  double t1574;
  double t1269;
  double t1401;
  double t1483;
  double t423;
  double t1588;
  double t1615;
  double t1653;
  double t364;
  double t385;
  double t1953;
  double t2039;
  double t2089;
  double t1923;
  double t2100;
  double t2115;
  double t2131;
  double t2136;
  double t2123;
  double t2143;
  double t2149;
  double t2160;
  double t2161;
  double t2175;
  double t1823;
  double t1787;
  double t1811;
  double t1821;
  double t1542;
  double t1680;
  double t1683;
  double t2209;
  double t2215;
  double t2241;
  double t2155;
  double t2176;
  double t2187;
  t612 = Cos(var1[6]);
  t826 = Sin(var1[6]);
  t917 = Cos(var1[5]);
  t702 = 0.642788*t612;
  t854 = -0.766044*t826;
  t861 = t702 + t854;
  t609 = Sin(var1[5]);
  t931 = 0.766044*t612;
  t1012 = 0.642788*t826;
  t1057 = t931 + t1012;
  t1303 = Cos(var1[4]);
  t868 = t609*t861;
  t1150 = t917*t1057;
  t1202 = 0. + t868 + t1150;
  t565 = Sin(var1[4]);
  t1323 = t917*t861;
  t1375 = -1.*t609*t1057;
  t1389 = 0. + t1323 + t1375;
  t1574 = Sin(var1[3]);
  t1269 = -1.*t565*t1202;
  t1401 = t1303*t1389;
  t1483 = 0. + t1269 + t1401;
  t423 = Cos(var1[3]);
  t1588 = t1303*t1202;
  t1615 = t565*t1389;
  t1653 = 0. + t1588 + t1615;
  t364 = Cos(var1[1]);
  t385 = Cos(var1[2]);
  t1953 = -0.766044*t612;
  t2039 = -0.642788*t826;
  t2089 = t1953 + t2039;
  t1923 = -1.*t609*t861;
  t2100 = t917*t2089;
  t2115 = 0. + t1923 + t2100;
  t2131 = t609*t2089;
  t2136 = 0. + t1323 + t2131;
  t2123 = t565*t2115;
  t2143 = t1303*t2136;
  t2149 = 0. + t2123 + t2143;
  t2160 = t1303*t2115;
  t2161 = -1.*t565*t2136;
  t2175 = 0. + t2160 + t2161;
  t1823 = Sin(var1[2]);
  t1787 = t1574*t1483;
  t1811 = t423*t1653;
  t1821 = 0. + t1787 + t1811;
  t1542 = t423*t1483;
  t1680 = -1.*t1574*t1653;
  t1683 = 0. + t1542 + t1680;
  t2209 = t423*t2149;
  t2215 = t1574*t2175;
  t2241 = 0. + t2209 + t2215;
  t2155 = -1.*t1574*t2149;
  t2176 = t423*t2175;
  t2187 = 0. + t2155 + t2176;
  p_output1[0]=0. + Sin(var1[1]);
  p_output1[1]=0. + t364*(0. - 1.*t1821*t1823 + t1683*t385);
  p_output1[2]=0. + t364*(0. - 1.*t1823*t2241 + t2187*t385);
  p_output1[3]=0.;
  p_output1[4]=0. + t1683*t1823 + t1821*t385;
  p_output1[5]=0. + t1823*t2187 + t2241*t385;
  p_output1[6]=1.;
  p_output1[7]=0.;
  p_output1[8]=0.;
  p_output1[9]=1.;
  p_output1[10]=0.;
  p_output1[11]=0.;
  p_output1[12]=1.;
  p_output1[13]=0.;
  p_output1[14]=0.;
  p_output1[15]=1.;
  p_output1[16]=0.;
  p_output1[17]=0.;
  p_output1[18]=1.;
  p_output1[19]=0.;
  p_output1[20]=0.;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
}



void Jwb_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
