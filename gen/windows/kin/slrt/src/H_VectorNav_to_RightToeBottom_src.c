/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:11:08 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_VectorNav_to_RightToeBottom_src.h"

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
  double t1498;
  double t2999;
  double t3122;
  double t2977;
  double t3189;
  double t2950;
  double t3553;
  double t3765;
  double t3817;
  double t3023;
  double t3213;
  double t3256;
  double t3835;
  double t2899;
  double t4001;
  double t4067;
  double t4086;
  double t3401;
  double t3876;
  double t3918;
  double t4100;
  double t2161;
  double t4192;
  double t4224;
  double t4237;
  double t3954;
  double t4140;
  double t4156;
  double t4288;
  double t986;
  double t198;
  double t1741;
  double t4844;
  double t4863;
  double t4905;
  double t4636;
  double t4684;
  double t4732;
  double t5072;
  double t5170;
  double t5189;
  double t4742;
  double t4974;
  double t4990;
  double t5264;
  double t5267;
  double t5272;
  double t5025;
  double t5214;
  double t5218;
  double t5313;
  double t5318;
  double t5335;
  double t5256;
  double t5297;
  double t5298;
  double t5472;
  double t5476;
  double t5552;
  double t5452;
  double t5460;
  double t5467;
  double t5589;
  double t5593;
  double t5615;
  double t5470;
  double t5558;
  double t5576;
  double t5684;
  double t5685;
  double t5704;
  double t5581;
  double t5641;
  double t5643;
  double t5727;
  double t5729;
  double t5731;
  double t5645;
  double t5713;
  double t5723;
  double t4171;
  double t4334;
  double t4345;
  double t4371;
  double t4392;
  double t4423;
  double t5307;
  double t5336;
  double t5339;
  double t5363;
  double t5374;
  double t5392;
  double t5725;
  double t5735;
  double t5740;
  double t5772;
  double t5777;
  double t5784;
  double t5955;
  double t5976;
  double t6024;
  double t6035;
  double t6112;
  double t6118;
  double t6180;
  double t6190;
  double t5870;
  double t5871;
  double t5910;
  double t5916;
  double t5917;
  double t5923;
  double t5937;
  double t5978;
  double t5985;
  double t5998;
  double t6005;
  double t6007;
  double t6017;
  double t6037;
  double t6040;
  double t6057;
  double t6063;
  double t6069;
  double t6074;
  double t6119;
  double t6122;
  double t6124;
  double t6138;
  double t6152;
  double t6159;
  double t6195;
  double t6196;
  double t6208;
  double t6223;
  double t6224;
  double t6226;
  double t6261;
  double t6265;
  double t6271;
  double t6288;
  double t6289;
  double t6292;
  t1498 = Cos(var1[8]);
  t2999 = Cos(var1[10]);
  t3122 = Sin(var1[9]);
  t2977 = Cos(var1[9]);
  t3189 = Sin(var1[10]);
  t2950 = Cos(var1[11]);
  t3553 = -1.*t1498*t2999*t3122;
  t3765 = -1.*t1498*t2977*t3189;
  t3817 = t3553 + t3765;
  t3023 = t1498*t2977*t2999;
  t3213 = -1.*t1498*t3122*t3189;
  t3256 = t3023 + t3213;
  t3835 = Sin(var1[11]);
  t2899 = Cos(var1[12]);
  t4001 = t2950*t3817;
  t4067 = -1.*t3256*t3835;
  t4086 = t4001 + t4067;
  t3401 = t2950*t3256;
  t3876 = t3817*t3835;
  t3918 = t3401 + t3876;
  t4100 = Sin(var1[12]);
  t2161 = Cos(var1[13]);
  t4192 = t2899*t4086;
  t4224 = -1.*t3918*t4100;
  t4237 = t4192 + t4224;
  t3954 = t2899*t3918;
  t4140 = t4086*t4100;
  t4156 = t3954 + t4140;
  t4288 = Sin(var1[13]);
  t986 = Cos(var1[7]);
  t198 = Sin(var1[8]);
  t1741 = Sin(var1[7]);
  t4844 = -1.*t2977*t1741;
  t4863 = -1.*t986*t198*t3122;
  t4905 = t4844 + t4863;
  t4636 = t986*t2977*t198;
  t4684 = -1.*t1741*t3122;
  t4732 = t4636 + t4684;
  t5072 = t2999*t4905;
  t5170 = -1.*t4732*t3189;
  t5189 = t5072 + t5170;
  t4742 = t2999*t4732;
  t4974 = t4905*t3189;
  t4990 = t4742 + t4974;
  t5264 = t2950*t5189;
  t5267 = -1.*t4990*t3835;
  t5272 = t5264 + t5267;
  t5025 = t2950*t4990;
  t5214 = t5189*t3835;
  t5218 = t5025 + t5214;
  t5313 = t2899*t5272;
  t5318 = -1.*t5218*t4100;
  t5335 = t5313 + t5318;
  t5256 = t2899*t5218;
  t5297 = t5272*t4100;
  t5298 = t5256 + t5297;
  t5472 = t986*t2977;
  t5476 = -1.*t1741*t198*t3122;
  t5552 = t5472 + t5476;
  t5452 = t2977*t1741*t198;
  t5460 = t986*t3122;
  t5467 = t5452 + t5460;
  t5589 = t2999*t5552;
  t5593 = -1.*t5467*t3189;
  t5615 = t5589 + t5593;
  t5470 = t2999*t5467;
  t5558 = t5552*t3189;
  t5576 = t5470 + t5558;
  t5684 = t2950*t5615;
  t5685 = -1.*t5576*t3835;
  t5704 = t5684 + t5685;
  t5581 = t2950*t5576;
  t5641 = t5615*t3835;
  t5643 = t5581 + t5641;
  t5727 = t2899*t5704;
  t5729 = -1.*t5643*t4100;
  t5731 = t5727 + t5729;
  t5645 = t2899*t5643;
  t5713 = t5704*t4100;
  t5723 = t5645 + t5713;
  t4171 = t2161*t4156;
  t4334 = t4237*t4288;
  t4345 = t4171 + t4334;
  t4371 = t2161*t4237;
  t4392 = -1.*t4156*t4288;
  t4423 = t4371 + t4392;
  t5307 = t2161*t5298;
  t5336 = t5335*t4288;
  t5339 = t5307 + t5336;
  t5363 = t2161*t5335;
  t5374 = -1.*t5298*t4288;
  t5392 = t5363 + t5374;
  t5725 = t2161*t5723;
  t5735 = t5731*t4288;
  t5740 = t5725 + t5735;
  t5772 = t2161*t5731;
  t5777 = -1.*t5723*t4288;
  t5784 = t5772 + t5777;
  t5955 = -1.*t2999;
  t5976 = 1. + t5955;
  t6024 = -1.*t2950;
  t6035 = 1. + t6024;
  t6112 = -1.*t2899;
  t6118 = 1. + t6112;
  t6180 = -1.*t2161;
  t6190 = 1. + t6180;
  t5870 = -1.*t1498;
  t5871 = 1. + t5870;
  t5910 = -1.*t2977;
  t5916 = 1. + t5910;
  t5917 = -0.049*t5916;
  t5923 = -0.09*t3122;
  t5937 = 0. + t5917 + t5923;
  t5978 = -0.049*t5976;
  t5985 = -0.21*t3189;
  t5998 = 0. + t5978 + t5985;
  t6005 = -0.21*t5976;
  t6007 = 0.049*t3189;
  t6017 = 0. + t6005 + t6007;
  t6037 = -0.0016*t6035;
  t6040 = -0.2707*t3835;
  t6057 = 0. + t6037 + t6040;
  t6063 = -0.2707*t6035;
  t6069 = 0.0016*t3835;
  t6074 = 0. + t6063 + t6069;
  t6119 = 0.0184*t6118;
  t6122 = -0.7055*t4100;
  t6124 = 0. + t6119 + t6122;
  t6138 = -0.7055*t6118;
  t6152 = -0.0184*t4100;
  t6159 = 0. + t6138 + t6152;
  t6195 = -0.0216*t6190;
  t6196 = -1.1135*t4288;
  t6208 = 0. + t6195 + t6196;
  t6223 = -1.1135*t6190;
  t6224 = 0.0216*t4288;
  t6226 = 0. + t6223 + t6224;
  t6261 = -0.135*t5871;
  t6265 = 0.049*t198;
  t6271 = 0. + t6261 + t6265;
  t6288 = -0.09*t5916;
  t6289 = 0.049*t3122;
  t6292 = 0. + t6288 + t6289;
  p_output1[0]=0. + t198;
  p_output1[1]=0. - 1.*t1498*t986;
  p_output1[2]=0. - 1.*t1498*t1741;
  p_output1[3]=0.;
  p_output1[4]=0. + 0.642788*t4345 + 0.766044*t4423;
  p_output1[5]=0. + 0.642788*t5339 + 0.766044*t5392;
  p_output1[6]=0. + 0.642788*t5740 + 0.766044*t5784;
  p_output1[7]=0.;
  p_output1[8]=0. - 0.766044*t4345 + 0.642788*t4423;
  p_output1[9]=0. - 0.766044*t5339 + 0.642788*t5392;
  p_output1[10]=0. - 0.766044*t5740 + 0.642788*t5784;
  p_output1[11]=0.;
  p_output1[12]=-0.03155 - 0.004500000000000004*t198 + 0.0306*t4345 - 1.1312*t4423 - 0.049*t5871 + t1498*t5937 + t1498*t2977*t5998 - 1.*t1498*t3122*t6017 + t3256*t6057 + t3817*t6074 + t3918*t6124 + t4086*t6159 + t4156*t6208 + t4237*t6226;
  p_output1[13]=0. + 0.0306*t5339 - 1.1312*t5392 + t4732*t5998 + t4905*t6017 + t4990*t6057 + t5189*t6074 + t5218*t6124 + t5272*t6159 + t5298*t6208 + t5335*t6226 - 1.*t1741*t6292 - 0.135*(1. - 1.*t986) - 0.1305*t1498*t986 + t198*t5937*t986 + t6271*t986;
  p_output1[14]=0.07996 + 0.135*t1741 - 0.1305*t1498*t1741 + 0.0306*t5740 - 1.1312*t5784 + t1741*t198*t5937 + t5467*t5998 + t5552*t6017 + t5576*t6057 + t5615*t6074 + t5643*t6124 + t5704*t6159 + t5723*t6208 + t5731*t6226 + t1741*t6271 + t6292*t986;
  p_output1[15]=1.;
}



void H_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
