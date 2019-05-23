/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:20:10 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_VectorNav_to_RightToeBottom_src.h"

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
  double t273;
  double t16;
  double t133;
  double t139;
  double t448;
  double t2056;
  double t2059;
  double t2090;
  double t608;
  double t675;
  double t691;
  double t1646;
  double t763;
  double t2191;
  double t2208;
  double t2224;
  double t2240;
  double t2319;
  double t2140;
  double t2165;
  double t1770;
  double t1298;
  double t2185;
  double t2557;
  double t4759;
  double t4861;
  double t4917;
  double t4998;
  double t2330;
  double t4930;
  double t5044;
  double t5083;
  double t5215;
  double t5224;
  double t5353;
  double t2779;
  double t3872;
  double t2998;
  double t3043;
  double t3381;
  double t3400;
  double t4011;
  double t4174;
  double t4181;
  double t4432;
  double t4501;
  double t5610;
  double t5633;
  double t5774;
  double t5838;
  double t5843;
  double t5888;
  double t5889;
  double t5899;
  double t6137;
  double t6148;
  double t6157;
  double t6168;
  double t5111;
  double t5487;
  double t6091;
  double t6095;
  double t6099;
  double t6158;
  double t6172;
  double t6173;
  double t6115;
  double t6118;
  double t6121;
  double t6185;
  double t6188;
  double t6200;
  double t5715;
  double t5763;
  double t5764;
  double t5976;
  double t6058;
  double t6066;
  double t6234;
  double t6236;
  double t6414;
  double t6415;
  double t6423;
  double t6390;
  double t6394;
  double t6406;
  double t6432;
  double t6434;
  double t6439;
  double t6446;
  double t6181;
  double t6206;
  double t6346;
  double t6348;
  double t6350;
  double t6441;
  double t6449;
  double t6452;
  double t6327;
  double t6329;
  double t6334;
  double t6461;
  double t6465;
  double t6467;
  double t6275;
  double t6277;
  double t6288;
  double t6251;
  double t6255;
  double t6265;
  double t6301;
  double t6308;
  double t6315;
  double t6318;
  double t6368;
  double t6371;
  double t6378;
  double t6383;
  double t6472;
  double t6473;
  double t6555;
  double t6556;
  double t6558;
  double t6573;
  double t6576;
  double t6577;
  double t6623;
  double t6624;
  double t6625;
  double t6629;
  double t6459;
  double t6468;
  double t6606;
  double t6607;
  double t6609;
  double t6628;
  double t6633;
  double t6634;
  double t6614;
  double t6615;
  double t6620;
  double t6642;
  double t6643;
  double t6645;
  double t6496;
  double t6499;
  double t6500;
  double t6485;
  double t6490;
  double t6491;
  double t6509;
  double t6510;
  double t6529;
  double t6530;
  double t6583;
  double t6584;
  double t6594;
  double t6597;
  t273 = Cos(var1[7]);
  t16 = Sin(var1[7]);
  t133 = -1.*t16;
  t139 = 0. + t133;
  t448 = 0. + t273;
  t2056 = Cos(var1[8]);
  t2059 = -1.*t273*t2056;
  t2090 = 0. + t2059;
  t608 = -1.*t273;
  t675 = 1. + t608;
  t691 = -0.135*t675;
  t1646 = Sin(var1[8]);
  t763 = -0.135*t16;
  t2191 = -1.*t2056;
  t2208 = 1. + t2191;
  t2224 = -0.135*t2208;
  t2240 = 0.049*t1646;
  t2319 = 0. + t2224 + t2240;
  t2140 = -1.*t2056*t16;
  t2165 = 0. + t2140;
  t1770 = 0. + t1646;
  t1298 = 0.049*t273;
  t2185 = -0.07996*t2090;
  t2557 = -1.*t16*t2319;
  t4759 = Cos(var1[9]);
  t4861 = -1.*t4759;
  t4917 = 1. + t4861;
  t4998 = Sin(var1[9]);
  t2330 = t273*t2319;
  t4930 = -0.049*t4917;
  t5044 = -0.09*t4998;
  t5083 = 0. + t4930 + t5044;
  t5215 = -0.09*t4917;
  t5224 = 0.049*t4998;
  t5353 = 0. + t5215 + t5224;
  t2779 = 0.03155*t2165;
  t3872 = 0.07996*t1770;
  t2998 = 0.049*t2208;
  t3043 = 0.135*t1646;
  t3381 = 0.135*t16;
  t3400 = t16*t2319;
  t4011 = -0.03155*t2090;
  t4174 = -0.049*t2208;
  t4181 = -0.135*t1646;
  t4432 = 0.135*t675;
  t4501 = -1.*t273*t2319;
  t5610 = t273*t1646*t5083;
  t5633 = -1.*t16*t5353;
  t5774 = t273*t4759*t1646;
  t5838 = -1.*t16*t4998;
  t5843 = t5774 + t5838;
  t5888 = -1.*t4759*t16;
  t5889 = -1.*t273*t1646*t4998;
  t5899 = t5888 + t5889;
  t6137 = Cos(var1[10]);
  t6148 = -1.*t6137;
  t6157 = 1. + t6148;
  t6168 = Sin(var1[10]);
  t5111 = -1.*t16*t1646*t5083;
  t5487 = -1.*t273*t5353;
  t6091 = t4759*t16*t1646;
  t6095 = t273*t4998;
  t6099 = t6091 + t6095;
  t6158 = -0.049*t6157;
  t6172 = -0.21*t6168;
  t6173 = 0. + t6158 + t6172;
  t6115 = t273*t4759;
  t6118 = -1.*t16*t1646*t4998;
  t6121 = t6115 + t6118;
  t6185 = -0.21*t6157;
  t6188 = 0.049*t6168;
  t6200 = 0. + t6185 + t6188;
  t5715 = -1.*t2056*t5083;
  t5763 = t16*t1646*t5083;
  t5764 = t273*t5353;
  t5976 = t2056*t5083;
  t6058 = -1.*t273*t1646*t5083;
  t6066 = t16*t5353;
  t6234 = -1.*t6099*t6173;
  t6236 = -1.*t6121*t6200;
  t6414 = t6137*t6099;
  t6415 = t6121*t6168;
  t6423 = t6414 + t6415;
  t6390 = t6137*t6121;
  t6394 = -1.*t6099*t6168;
  t6406 = t6390 + t6394;
  t6432 = Cos(var1[11]);
  t6434 = -1.*t6432;
  t6439 = 1. + t6434;
  t6446 = Sin(var1[11]);
  t6181 = t5843*t6173;
  t6206 = t5899*t6200;
  t6346 = t6137*t5843;
  t6348 = t5899*t6168;
  t6350 = t6346 + t6348;
  t6441 = -0.0016*t6439;
  t6449 = -0.2707*t6446;
  t6452 = 0. + t6441 + t6449;
  t6327 = t6137*t5899;
  t6329 = -1.*t5843*t6168;
  t6334 = t6327 + t6329;
  t6461 = -0.2707*t6439;
  t6465 = 0.0016*t6446;
  t6467 = 0. + t6461 + t6465;
  t6275 = t2056*t4759*t6137;
  t6277 = -1.*t2056*t4998*t6168;
  t6288 = t6275 + t6277;
  t6251 = -1.*t2056*t6137*t4998;
  t6255 = -1.*t2056*t4759*t6168;
  t6265 = t6251 + t6255;
  t6301 = -1.*t2056*t4759*t6173;
  t6308 = t2056*t4998*t6200;
  t6315 = t6099*t6173;
  t6318 = t6121*t6200;
  t6368 = t2056*t4759*t6173;
  t6371 = -1.*t2056*t4998*t6200;
  t6378 = -1.*t5843*t6173;
  t6383 = -1.*t5899*t6200;
  t6472 = t6350*t6452;
  t6473 = t6334*t6467;
  t6555 = t6432*t6350;
  t6556 = t6334*t6446;
  t6558 = t6555 + t6556;
  t6573 = t6432*t6334;
  t6576 = -1.*t6350*t6446;
  t6577 = t6573 + t6576;
  t6623 = Cos(var1[12]);
  t6624 = -1.*t6623;
  t6625 = 1. + t6624;
  t6629 = Sin(var1[12]);
  t6459 = -1.*t6423*t6452;
  t6468 = -1.*t6406*t6467;
  t6606 = t6432*t6423;
  t6607 = t6406*t6446;
  t6609 = t6606 + t6607;
  t6628 = 0.0184*t6625;
  t6633 = -0.7055*t6629;
  t6634 = 0. + t6628 + t6633;
  t6614 = t6432*t6406;
  t6615 = -1.*t6423*t6446;
  t6620 = t6614 + t6615;
  t6642 = -0.7055*t6625;
  t6643 = -0.0184*t6629;
  t6645 = 0. + t6642 + t6643;
  t6496 = t6432*t6265;
  t6499 = -1.*t6288*t6446;
  t6500 = t6496 + t6499;
  t6485 = t6432*t6288;
  t6490 = t6265*t6446;
  t6491 = t6485 + t6490;
  t6509 = -1.*t6288*t6452;
  t6510 = -1.*t6265*t6467;
  t6529 = t6423*t6452;
  t6530 = t6406*t6467;
  t6583 = t6288*t6452;
  t6584 = t6265*t6467;
  t6594 = -1.*t6350*t6452;
  t6597 = -1.*t6334*t6467;
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
  p_output1[42]=1.;
  p_output1[43]=0.;
  p_output1[44]=0.;
  p_output1[45]=0.;
  p_output1[46]=0.07996;
  p_output1[47]=0.135;
  p_output1[48]=0.;
  p_output1[49]=t139;
  p_output1[50]=t448;
  p_output1[51]=-0.135 - 0.07996*t139 + t273*(0. + t691) - 1.*t16*(0. + t763);
  p_output1[52]=0. + t1298 + 0.03155*t448;
  p_output1[53]=0. - 0.03155*t139 + 0.049*t16;
  p_output1[54]=t1770;
  p_output1[55]=t2090;
  p_output1[56]=t2165;
  p_output1[57]=0. - 0.09*t2056 + t2185 - 1.*t16*t2056*(0. + t2330 + t691) - 1.*t2056*t273*(0. + t2557 + t763);
  p_output1[58]=0. - 0.049*t16 - 0.09*t1646*t273 + t2779 - 1.*t16*t2056*(0. + t2998 + t3043) + t1646*(0. + t3381 + t3400) + t3872;
  p_output1[59]=0. + t1298 - 0.09*t16*t1646 + t4011 - 1.*t2056*t273*(0. + t4174 + t4181) + t1646*(0. + t4432 + t4501);
  p_output1[60]=t1770;
  p_output1[61]=t2090;
  p_output1[62]=t2165;
  p_output1[63]=0. + t2185 - 0.21*t2056*t4759 - 0.049*t2056*t4998 - 1.*t16*t2056*(0. + t2330 + t5610 + t5633 + t691) - 1.*t2056*t273*(0. + t2557 + t5111 + t5487 + t763);
  p_output1[64]=0. + t2779 + t3872 - 1.*t16*t2056*(0. + t2998 + t3043 + t5715) + t1646*(0. + t3381 + t3400 + t5763 + t5764) - 0.21*t5843 + 0.049*t5899;
  p_output1[65]=0. + t4011 - 1.*t2056*t273*(0. + t4174 + t4181 + t5976) + t1646*(0. + t4432 + t4501 + t6058 + t6066) - 0.21*t6099 + 0.049*t6121;
  p_output1[66]=t1770;
  p_output1[67]=t2090;
  p_output1[68]=t2165;
  p_output1[69]=0. + t2185 + 0.0016*t6265 - 0.2707*t6288 - 1.*t16*t2056*(0. + t2330 + t5610 + t5633 + t6181 + t6206 + t691) - 1.*t2056*t273*(0. + t2557 + t5111 + t5487 + t6234 + t6236 + t763);
  p_output1[70]=0. + t2779 + t3872 - 1.*t16*t2056*(0. + t2998 + t3043 + t5715 + t6301 + t6308) + t1646*(0. + t3381 + t3400 + t5763 + t5764 + t6315 + t6318) + 0.0016*t6334 - 0.2707*t6350;
  p_output1[71]=0. + t4011 - 1.*t2056*t273*(0. + t4174 + t4181 + t5976 + t6368 + t6371) + t1646*(0. + t4432 + t4501 + t6058 + t6066 + t6378 + t6383) + 0.0016*t6406 - 0.2707*t6423;
  p_output1[72]=t1770;
  p_output1[73]=t2090;
  p_output1[74]=t2165;
  p_output1[75]=0. + t2185 - 0.7055*t6491 - 0.0184*t6500 - 1.*t16*t2056*(0. + t2330 + t5610 + t5633 + t6181 + t6206 + t6472 + t6473 + t691) - 1.*t2056*t273*(0. + t2557 + t5111 + t5487 + t6234 + t6236 + t6459 + t6468 + t763);
  p_output1[76]=0. + t2779 + t3872 - 1.*t16*t2056*(0. + t2998 + t3043 + t5715 + t6301 + t6308 + t6509 + t6510) + t1646*(0. + t3381 + t3400 + t5763 + t5764 + t6315 + t6318 + t6529 + t6530) - 0.7055*t6558 - 0.0184*t6577;
  p_output1[77]=0. + t4011 - 1.*t2056*t273*(0. + t4174 + t4181 + t5976 + t6368 + t6371 + t6583 + t6584) + t1646*(0. + t4432 + t4501 + t6058 + t6066 + t6378 + t6383 + t6594 + t6597) - 0.7055*t6609 - 0.0184*t6620;
  p_output1[78]=t1770;
  p_output1[79]=t2090;
  p_output1[80]=t2165;
  p_output1[81]=0. + t2185 + 0.0216*(t6500*t6623 - 1.*t6491*t6629) - 1.1135*(t6491*t6623 + t6500*t6629) - 1.*t16*t2056*(0. + t2330 + t5610 + t5633 + t6181 + t6206 + t6472 + t6473 + t6558*t6634 + t6577*t6645 + t691) - 1.*t2056*t273*(0. + t2557 + t5111 + t5487 + t6234 + t6236 + t6459 + t6468 - 1.*t6609*t6634 - 1.*t6620*t6645 + t763);
  p_output1[82]=0. + t2779 + t3872 + 0.0216*(t6577*t6623 - 1.*t6558*t6629) - 1.1135*(t6558*t6623 + t6577*t6629) - 1.*t16*t2056*(0. + t2998 + t3043 + t5715 + t6301 + t6308 + t6509 + t6510 - 1.*t6491*t6634 - 1.*t6500*t6645) + t1646*(0. + t3381 + t3400 + t5763 + t5764 + t6315 + t6318 + t6529 + t6530 + t6609*t6634 + t6620*t6645);
  p_output1[83]=0. + t4011 + 0.0216*(t6620*t6623 - 1.*t6609*t6629) - 1.1135*(t6609*t6623 + t6620*t6629) - 1.*t2056*t273*(0. + t4174 + t4181 + t5976 + t6368 + t6371 + t6583 + t6584 + t6491*t6634 + t6500*t6645) + t1646*(0. + t4432 + t4501 + t6058 + t6066 + t6378 + t6383 + t6594 + t6597 - 1.*t6558*t6634 - 1.*t6577*t6645);
}



void Js_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
