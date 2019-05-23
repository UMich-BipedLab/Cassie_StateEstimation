/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:20:07 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_VectorNav_to_RightToeBottom_src.h"

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
  double t960;
  double t981;
  double t1070;
  double t969;
  double t985;
  double t1020;
  double t944;
  double t1075;
  double t1146;
  double t1174;
  double t1433;
  double t1040;
  double t1240;
  double t1255;
  double t938;
  double t1437;
  double t1441;
  double t1499;
  double t1706;
  double t1358;
  double t1595;
  double t1666;
  double t875;
  double t1831;
  double t1880;
  double t1939;
  double t686;
  double t2116;
  double t2463;
  double t2494;
  double t2506;
  double t2400;
  double t2542;
  double t2682;
  double t2956;
  double t2968;
  double t791;
  double t2698;
  double t3013;
  double t3065;
  double t3113;
  double t3165;
  double t3260;
  double t3087;
  double t3269;
  double t3306;
  double t3321;
  double t3425;
  double t3523;
  double t3532;
  double t3550;
  double t3591;
  double t3624;
  double t3625;
  double t105;
  double t4452;
  double t4636;
  double t4372;
  double t4394;
  double t4729;
  double t4798;
  double t4822;
  double t4846;
  double t4949;
  double t4956;
  double t4984;
  double t5007;
  double t4245;
  double t4260;
  double t4418;
  double t4427;
  double t4879;
  double t5029;
  double t5041;
  double t5090;
  double t5096;
  double t5103;
  double t5120;
  double t5132;
  double t3997;
  double t4010;
  double t4310;
  double t4315;
  double t5042;
  double t5136;
  double t5139;
  double t5206;
  double t5210;
  double t5269;
  double t5273;
  double t5287;
  double t3695;
  double t3728;
  double t3839;
  double t3938;
  double t3943;
  double t3985;
  double t4061;
  double t4105;
  double t5168;
  double t5294;
  double t5297;
  double t5320;
  double t5337;
  double t5341;
  double t5353;
  double t5354;
  double t5360;
  double t5386;
  double t5388;
  double t1681;
  double t1940;
  double t1971;
  double t2033;
  double t2144;
  double t2184;
  double t2202;
  double t2218;
  double t2256;
  double t2273;
  double t2346;
  double t3749;
  double t3773;
  double t5395;
  double t5397;
  double t5417;
  double t5421;
  double t5424;
  double t5428;
  double t5446;
  double t5487;
  double t5497;
  double t5508;
  double t5509;
  double t5513;
  double t561;
  double t5411;
  double t5415;
  double t5458;
  double t5465;
  double t5482;
  double t5561;
  double t5568;
  double t5589;
  double t5614;
  double t5617;
  double t5543;
  double t5553;
  double t5592;
  double t5515;
  t960 = Cos(var1[13]);
  t981 = Sin(var1[13]);
  t1070 = Cos(var1[12]);
  t969 = 0.642788*t960;
  t985 = -0.766044*t981;
  t1020 = t969 + t985;
  t944 = Sin(var1[12]);
  t1075 = 0.766044*t960;
  t1146 = 0.642788*t981;
  t1174 = t1075 + t1146;
  t1433 = Cos(var1[11]);
  t1040 = t944*t1020;
  t1240 = t1070*t1174;
  t1255 = 0. + t1040 + t1240;
  t938 = Sin(var1[11]);
  t1437 = t1070*t1020;
  t1441 = -1.*t944*t1174;
  t1499 = 0. + t1437 + t1441;
  t1706 = Cos(var1[10]);
  t1358 = -1.*t938*t1255;
  t1595 = t1433*t1499;
  t1666 = 0. + t1358 + t1595;
  t875 = Sin(var1[10]);
  t1831 = t1433*t1255;
  t1880 = t938*t1499;
  t1939 = 0. + t1831 + t1880;
  t686 = Cos(var1[8]);
  t2116 = Cos(var1[9]);
  t2463 = -0.766044*t960;
  t2494 = -0.642788*t981;
  t2506 = t2463 + t2494;
  t2400 = -1.*t944*t1020;
  t2542 = t1070*t2506;
  t2682 = 0. + t2400 + t2542;
  t2956 = t944*t2506;
  t2968 = 0. + t1437 + t2956;
  t791 = Sin(var1[9]);
  t2698 = t938*t2682;
  t3013 = t1433*t2968;
  t3065 = 0. + t2698 + t3013;
  t3113 = t1433*t2682;
  t3165 = -1.*t938*t2968;
  t3260 = 0. + t3113 + t3165;
  t3087 = -1.*t875*t3065;
  t3269 = t1706*t3260;
  t3306 = 0. + t3087 + t3269;
  t3321 = t2116*t3306;
  t3425 = t1706*t3065;
  t3523 = t875*t3260;
  t3532 = 0. + t3425 + t3523;
  t3550 = -1.*t791*t3532;
  t3591 = 0. + t3321 + t3550;
  t3624 = t686*t3591;
  t3625 = 0. + t3624;
  t105 = Sin(var1[8]);
  t4452 = -1.*t960;
  t4636 = 1. + t4452;
  t4372 = -1.*t1070;
  t4394 = 1. + t4372;
  t4729 = -0.0216*t4636;
  t4798 = 0.0306*t960;
  t4822 = 0.01770000000000005*t981;
  t4846 = 0. + t4729 + t4798 + t4822;
  t4949 = -1.1135*t4636;
  t4956 = -1.1312*t960;
  t4984 = 0.052199999999999996*t981;
  t5007 = 0. + t4949 + t4956 + t4984;
  t4245 = -1.*t1433;
  t4260 = 1. + t4245;
  t4418 = -0.7055*t4394;
  t4427 = -0.0184*t944;
  t4879 = t944*t4846;
  t5029 = t1070*t5007;
  t5041 = 0. + t4418 + t4427 + t4879 + t5029;
  t5090 = 0.0184*t4394;
  t5096 = -0.7055*t944;
  t5103 = t1070*t4846;
  t5120 = -1.*t944*t5007;
  t5132 = 0. + t5090 + t5096 + t5103 + t5120;
  t3997 = -1.*t1706;
  t4010 = 1. + t3997;
  t4310 = -0.0016*t4260;
  t4315 = -0.2707*t938;
  t5042 = -1.*t938*t5041;
  t5136 = t1433*t5132;
  t5139 = 0. + t4310 + t4315 + t5042 + t5136;
  t5206 = -0.2707*t4260;
  t5210 = 0.0016*t938;
  t5269 = t1433*t5041;
  t5273 = t938*t5132;
  t5287 = 0. + t5206 + t5210 + t5269 + t5273;
  t3695 = -1.*t686;
  t3728 = 1. + t3695;
  t3839 = -1.*t2116;
  t3938 = 1. + t3839;
  t3943 = -0.049*t3938;
  t3985 = -0.09*t791;
  t4061 = -0.21*t4010;
  t4105 = 0.049*t875;
  t5168 = t875*t5139;
  t5294 = t1706*t5287;
  t5297 = 0. + t4061 + t4105 + t5168 + t5294;
  t5320 = -1.*t791*t5297;
  t5337 = -0.049*t4010;
  t5341 = -0.21*t875;
  t5353 = t1706*t5139;
  t5354 = -1.*t875*t5287;
  t5360 = 0. + t5337 + t5341 + t5353 + t5354;
  t5386 = t2116*t5360;
  t5388 = 0. + t3943 + t3985 + t5320 + t5386;
  t1681 = t875*t1666;
  t1940 = t1706*t1939;
  t1971 = 0. + t1681 + t1940;
  t2033 = -1.*t791*t1971;
  t2144 = t1706*t1666;
  t2184 = -1.*t875*t1939;
  t2202 = 0. + t2144 + t2184;
  t2218 = t2116*t2202;
  t2256 = 0. + t2033 + t2218;
  t2273 = t686*t2256;
  t2346 = 0. + t2273;
  t3749 = -0.049*t3728;
  t3773 = -0.004500000000000004*t105;
  t5395 = t686*t5388;
  t5397 = 0. + t3749 + t3773 + t5395;
  t5417 = -0.135*t3728;
  t5421 = -0.1305*t686;
  t5424 = 0.049*t105;
  t5428 = t105*t5388;
  t5446 = 0. + t5417 + t5421 + t5424 + t5428;
  t5487 = -0.09*t3938;
  t5497 = 0.049*t791;
  t5508 = t2116*t5297;
  t5509 = t791*t5360;
  t5513 = 0. + t5487 + t5497 + t5508 + t5509;
  t561 = 0. + t105;
  t5411 = t105*t3591;
  t5415 = 0. + t5411;
  t5458 = t791*t3306;
  t5465 = t2116*t3532;
  t5482 = 0. + t5458 + t5465;
  t5561 = t2116*t1971;
  t5568 = t791*t2202;
  t5589 = 0. + t5561 + t5568;
  t5614 = -1.*t686;
  t5617 = 0. + t5614;
  t5543 = t105*t2256;
  t5553 = 0. + t5543;
  t5592 = -1.*t5513*t5589;
  t5515 = t5482*t5513;
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
  p_output1[42]=t561;
  p_output1[43]=t2346;
  p_output1[44]=t3625;
  p_output1[45]=0. + t2346*(t3625*t5397 + t5415*t5446 + t5515) + t3625*(-1.*t2346*t5397 - 1.*t5446*t5553 + t5592);
  p_output1[46]=0.135*t5589 + (-1.*t3625*t5397 - 1.*t5415*t5446 - 1.*t5482*t5513)*t561 + t3625*(0. + t5397*t561 + t5446*t5617);
  p_output1[47]=0.135*t5482 + (t2346*t5397 + t5446*t5553 + t5513*t5589)*t561 + t2346*(0. - 1.*t5397*t561 - 1.*t5446*t5617);
  p_output1[48]=0.;
  p_output1[49]=t5589;
  p_output1[50]=t5482;
  p_output1[51]=-0.049 + (0. + t3591*t5388 + t5515)*t5589 + t5482*(0. - 1.*t2256*t5388 + t5592);
  p_output1[52]=0. - 0.135*t2256 + 0.1305*t5482;
  p_output1[53]=0. - 0.135*t3591 - 0.1305*t5589;
  p_output1[54]=1.;
  p_output1[55]=0.;
  p_output1[56]=0.;
  p_output1[57]=0.;
  p_output1[58]=0. + 0.049*t1971 - 0.09*t2202 - 1.*t3532*t5297 - 1.*t3306*t5360;
  p_output1[59]=0. - 0.09*t3306 + 0.049*t3532 + t1971*t5297 + t2202*t5360;
  p_output1[60]=1.;
  p_output1[61]=0.;
  p_output1[62]=0.;
  p_output1[63]=0.;
  p_output1[64]=0. - 0.21*t1666 + 0.049*t1939 - 1.*t3260*t5139 - 1.*t3065*t5287;
  p_output1[65]=0. + 0.049*t3065 - 0.21*t3260 + t1666*t5139 + t1939*t5287;
  p_output1[66]=1.;
  p_output1[67]=0.;
  p_output1[68]=0.;
  p_output1[69]=0.;
  p_output1[70]=0. + 0.0016*t1255 - 0.2707*t1499 - 1.*t2968*t5041 - 1.*t2682*t5132;
  p_output1[71]=0. - 0.2707*t2682 + 0.0016*t2968 + t1255*t5041 + t1499*t5132;
  p_output1[72]=1.;
  p_output1[73]=0.;
  p_output1[74]=0.;
  p_output1[75]=0.;
  p_output1[76]=0. - 0.7055*t1020 - 0.0184*t1174 - 1.*t2506*t4846 - 1.*t1020*t5007;
  p_output1[77]=0. - 0.0184*t1020 - 0.7055*t2506 + t1020*t4846 + t1174*t5007;
  p_output1[78]=1.;
  p_output1[79]=0.;
  p_output1[80]=0.;
  p_output1[81]=0.;
  p_output1[82]=0.05136484440000011;
  p_output1[83]=0.019994554799999897;
}



void Jb_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
