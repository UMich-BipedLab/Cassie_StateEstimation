/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:11:09 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_RightToeBottom_src.h"

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
  double t436;
  double t1389;
  double t1545;
  double t1367;
  double t1601;
  double t1362;
  double t2649;
  double t2664;
  double t2921;
  double t1531;
  double t1970;
  double t1982;
  double t3023;
  double t1271;
  double t3308;
  double t3630;
  double t3683;
  double t2245;
  double t3063;
  double t3087;
  double t3809;
  double t1207;
  double t4192;
  double t4237;
  double t4312;
  double t3223;
  double t3887;
  double t3954;
  double t4334;
  double t259;
  double t157;
  double t880;
  double t5272;
  double t5307;
  double t5335;
  double t5122;
  double t5189;
  double t5193;
  double t5402;
  double t5432;
  double t5451;
  double t5214;
  double t5336;
  double t5363;
  double t5552;
  double t5558;
  double t5589;
  double t5387;
  double t5460;
  double t5470;
  double t5727;
  double t5731;
  double t5766;
  double t5528;
  double t5615;
  double t5684;
  double t5949;
  double t5998;
  double t6007;
  double t5883;
  double t5917;
  double t5923;
  double t6062;
  double t6063;
  double t6069;
  double t5937;
  double t6022;
  double t6037;
  double t6099;
  double t6119;
  double t6124;
  double t6040;
  double t6074;
  double t6080;
  double t6168;
  double t6173;
  double t6195;
  double t6088;
  double t6137;
  double t6152;
  double t4087;
  double t4371;
  double t4409;
  double t4499;
  double t4841;
  double t4974;
  double t5704;
  double t5784;
  double t5799;
  double t5816;
  double t5824;
  double t5851;
  double t6159;
  double t6196;
  double t6208;
  double t6223;
  double t6230;
  double t6234;
  t436 = Cos(var1[8]);
  t1389 = Cos(var1[10]);
  t1545 = Sin(var1[9]);
  t1367 = Cos(var1[9]);
  t1601 = Sin(var1[10]);
  t1362 = Cos(var1[11]);
  t2649 = -1.*t436*t1389*t1545;
  t2664 = -1.*t436*t1367*t1601;
  t2921 = t2649 + t2664;
  t1531 = t436*t1367*t1389;
  t1970 = -1.*t436*t1545*t1601;
  t1982 = t1531 + t1970;
  t3023 = Sin(var1[11]);
  t1271 = Cos(var1[12]);
  t3308 = t1362*t2921;
  t3630 = -1.*t1982*t3023;
  t3683 = t3308 + t3630;
  t2245 = t1362*t1982;
  t3063 = t2921*t3023;
  t3087 = t2245 + t3063;
  t3809 = Sin(var1[12]);
  t1207 = Cos(var1[13]);
  t4192 = t1271*t3683;
  t4237 = -1.*t3087*t3809;
  t4312 = t4192 + t4237;
  t3223 = t1271*t3087;
  t3887 = t3683*t3809;
  t3954 = t3223 + t3887;
  t4334 = Sin(var1[13]);
  t259 = Cos(var1[7]);
  t157 = Sin(var1[8]);
  t880 = Sin(var1[7]);
  t5272 = -1.*t1367*t880;
  t5307 = -1.*t259*t157*t1545;
  t5335 = t5272 + t5307;
  t5122 = t259*t1367*t157;
  t5189 = -1.*t880*t1545;
  t5193 = t5122 + t5189;
  t5402 = t1389*t5335;
  t5432 = -1.*t5193*t1601;
  t5451 = t5402 + t5432;
  t5214 = t1389*t5193;
  t5336 = t5335*t1601;
  t5363 = t5214 + t5336;
  t5552 = t1362*t5451;
  t5558 = -1.*t5363*t3023;
  t5589 = t5552 + t5558;
  t5387 = t1362*t5363;
  t5460 = t5451*t3023;
  t5470 = t5387 + t5460;
  t5727 = t1271*t5589;
  t5731 = -1.*t5470*t3809;
  t5766 = t5727 + t5731;
  t5528 = t1271*t5470;
  t5615 = t5589*t3809;
  t5684 = t5528 + t5615;
  t5949 = t259*t1367;
  t5998 = -1.*t880*t157*t1545;
  t6007 = t5949 + t5998;
  t5883 = t1367*t880*t157;
  t5917 = t259*t1545;
  t5923 = t5883 + t5917;
  t6062 = t1389*t6007;
  t6063 = -1.*t5923*t1601;
  t6069 = t6062 + t6063;
  t5937 = t1389*t5923;
  t6022 = t6007*t1601;
  t6037 = t5937 + t6022;
  t6099 = t1362*t6069;
  t6119 = -1.*t6037*t3023;
  t6124 = t6099 + t6119;
  t6040 = t1362*t6037;
  t6074 = t6069*t3023;
  t6080 = t6040 + t6074;
  t6168 = t1271*t6124;
  t6173 = -1.*t6080*t3809;
  t6195 = t6168 + t6173;
  t6088 = t1271*t6080;
  t6137 = t6124*t3809;
  t6152 = t6088 + t6137;
  t4087 = t1207*t3954;
  t4371 = t4312*t4334;
  t4409 = t4087 + t4371;
  t4499 = t1207*t4312;
  t4841 = -1.*t3954*t4334;
  t4974 = t4499 + t4841;
  t5704 = t1207*t5684;
  t5784 = t5766*t4334;
  t5799 = t5704 + t5784;
  t5816 = t1207*t5766;
  t5824 = -1.*t5684*t4334;
  t5851 = t5816 + t5824;
  t6159 = t1207*t6152;
  t6196 = t6195*t4334;
  t6208 = t6159 + t6196;
  t6223 = t1207*t6195;
  t6230 = -1.*t6152*t4334;
  t6234 = t6223 + t6230;
  p_output1[0]=0. + t157;
  p_output1[1]=0. - 1.*t259*t436;
  p_output1[2]=0. - 1.*t436*t880;
  p_output1[3]=0. + 0.642788*t4409 + 0.766044*t4974;
  p_output1[4]=0. + 0.642788*t5799 + 0.766044*t5851;
  p_output1[5]=0. + 0.642788*t6208 + 0.766044*t6234;
  p_output1[6]=0. - 0.766044*t4409 + 0.642788*t4974;
  p_output1[7]=0. - 0.766044*t5799 + 0.642788*t5851;
  p_output1[8]=0. - 0.766044*t6208 + 0.642788*t6234;
}



void R_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
