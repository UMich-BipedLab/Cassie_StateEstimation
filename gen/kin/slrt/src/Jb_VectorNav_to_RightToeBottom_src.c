/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:11:26 GMT-05:00
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
  double t825;
  double t918;
  double t1006;
  double t896;
  double t936;
  double t937;
  double t817;
  double t1017;
  double t1068;
  double t1093;
  double t1254;
  double t986;
  double t1201;
  double t1234;
  double t629;
  double t1292;
  double t1300;
  double t1307;
  double t1382;
  double t1250;
  double t1311;
  double t1340;
  double t544;
  double t1450;
  double t1503;
  double t1536;
  double t290;
  double t1842;
  double t2294;
  double t2301;
  double t2388;
  double t2273;
  double t2444;
  double t2536;
  double t2549;
  double t2602;
  double t441;
  double t2546;
  double t2604;
  double t2605;
  double t2638;
  double t2705;
  double t2707;
  double t2624;
  double t2764;
  double t2780;
  double t2948;
  double t2991;
  double t3063;
  double t3080;
  double t3118;
  double t3154;
  double t3200;
  double t3270;
  double t193;
  double t4010;
  double t4098;
  double t3802;
  double t3860;
  double t4127;
  double t4192;
  double t4215;
  double t4228;
  double t4300;
  double t4363;
  double t4378;
  double t4436;
  double t3731;
  double t3769;
  double t3906;
  double t3998;
  double t4286;
  double t4509;
  double t4533;
  double t4780;
  double t4795;
  double t4810;
  double t4825;
  double t4857;
  double t3545;
  double t3561;
  double t3771;
  double t3779;
  double t4643;
  double t4862;
  double t4879;
  double t4923;
  double t4938;
  double t4952;
  double t4954;
  double t4974;
  double t3285;
  double t3293;
  double t3340;
  double t3384;
  double t3398;
  double t3462;
  double t3563;
  double t3614;
  double t4908;
  double t5013;
  double t5025;
  double t5053;
  double t5055;
  double t5056;
  double t5057;
  double t5077;
  double t5154;
  double t5172;
  double t5190;
  double t1344;
  double t1763;
  double t1809;
  double t1824;
  double t1855;
  double t1931;
  double t1983;
  double t1991;
  double t2061;
  double t2169;
  double t2206;
  double t3296;
  double t3312;
  double t5192;
  double t5208;
  double t5235;
  double t5257;
  double t5262;
  double t5279;
  double t5290;
  double t5352;
  double t5355;
  double t5362;
  double t5365;
  double t5373;
  double t267;
  double t5230;
  double t5234;
  double t5299;
  double t5336;
  double t5349;
  double t5430;
  double t5431;
  double t5432;
  double t5473;
  double t5478;
  double t5416;
  double t5419;
  double t5433;
  double t5394;
  t825 = Cos(var1[13]);
  t918 = Sin(var1[13]);
  t1006 = Cos(var1[12]);
  t896 = 0.642788*t825;
  t936 = -0.766044*t918;
  t937 = t896 + t936;
  t817 = Sin(var1[12]);
  t1017 = 0.766044*t825;
  t1068 = 0.642788*t918;
  t1093 = t1017 + t1068;
  t1254 = Cos(var1[11]);
  t986 = t817*t937;
  t1201 = t1006*t1093;
  t1234 = 0. + t986 + t1201;
  t629 = Sin(var1[11]);
  t1292 = t1006*t937;
  t1300 = -1.*t817*t1093;
  t1307 = 0. + t1292 + t1300;
  t1382 = Cos(var1[10]);
  t1250 = -1.*t629*t1234;
  t1311 = t1254*t1307;
  t1340 = 0. + t1250 + t1311;
  t544 = Sin(var1[10]);
  t1450 = t1254*t1234;
  t1503 = t629*t1307;
  t1536 = 0. + t1450 + t1503;
  t290 = Cos(var1[8]);
  t1842 = Cos(var1[9]);
  t2294 = -0.766044*t825;
  t2301 = -0.642788*t918;
  t2388 = t2294 + t2301;
  t2273 = -1.*t817*t937;
  t2444 = t1006*t2388;
  t2536 = 0. + t2273 + t2444;
  t2549 = t817*t2388;
  t2602 = 0. + t1292 + t2549;
  t441 = Sin(var1[9]);
  t2546 = t629*t2536;
  t2604 = t1254*t2602;
  t2605 = 0. + t2546 + t2604;
  t2638 = t1254*t2536;
  t2705 = -1.*t629*t2602;
  t2707 = 0. + t2638 + t2705;
  t2624 = -1.*t544*t2605;
  t2764 = t1382*t2707;
  t2780 = 0. + t2624 + t2764;
  t2948 = t1842*t2780;
  t2991 = t1382*t2605;
  t3063 = t544*t2707;
  t3080 = 0. + t2991 + t3063;
  t3118 = -1.*t441*t3080;
  t3154 = 0. + t2948 + t3118;
  t3200 = t290*t3154;
  t3270 = 0. + t3200;
  t193 = Sin(var1[8]);
  t4010 = -1.*t825;
  t4098 = 1. + t4010;
  t3802 = -1.*t1006;
  t3860 = 1. + t3802;
  t4127 = -0.0216*t4098;
  t4192 = 0.0306*t825;
  t4215 = 0.01770000000000005*t918;
  t4228 = 0. + t4127 + t4192 + t4215;
  t4300 = -1.1135*t4098;
  t4363 = -1.1312*t825;
  t4378 = 0.052199999999999996*t918;
  t4436 = 0. + t4300 + t4363 + t4378;
  t3731 = -1.*t1254;
  t3769 = 1. + t3731;
  t3906 = -0.7055*t3860;
  t3998 = -0.0184*t817;
  t4286 = t817*t4228;
  t4509 = t1006*t4436;
  t4533 = 0. + t3906 + t3998 + t4286 + t4509;
  t4780 = 0.0184*t3860;
  t4795 = -0.7055*t817;
  t4810 = t1006*t4228;
  t4825 = -1.*t817*t4436;
  t4857 = 0. + t4780 + t4795 + t4810 + t4825;
  t3545 = -1.*t1382;
  t3561 = 1. + t3545;
  t3771 = -0.0016*t3769;
  t3779 = -0.2707*t629;
  t4643 = -1.*t629*t4533;
  t4862 = t1254*t4857;
  t4879 = 0. + t3771 + t3779 + t4643 + t4862;
  t4923 = -0.2707*t3769;
  t4938 = 0.0016*t629;
  t4952 = t1254*t4533;
  t4954 = t629*t4857;
  t4974 = 0. + t4923 + t4938 + t4952 + t4954;
  t3285 = -1.*t290;
  t3293 = 1. + t3285;
  t3340 = -1.*t1842;
  t3384 = 1. + t3340;
  t3398 = -0.049*t3384;
  t3462 = -0.09*t441;
  t3563 = -0.21*t3561;
  t3614 = 0.049*t544;
  t4908 = t544*t4879;
  t5013 = t1382*t4974;
  t5025 = 0. + t3563 + t3614 + t4908 + t5013;
  t5053 = -1.*t441*t5025;
  t5055 = -0.049*t3561;
  t5056 = -0.21*t544;
  t5057 = t1382*t4879;
  t5077 = -1.*t544*t4974;
  t5154 = 0. + t5055 + t5056 + t5057 + t5077;
  t5172 = t1842*t5154;
  t5190 = 0. + t3398 + t3462 + t5053 + t5172;
  t1344 = t544*t1340;
  t1763 = t1382*t1536;
  t1809 = 0. + t1344 + t1763;
  t1824 = -1.*t441*t1809;
  t1855 = t1382*t1340;
  t1931 = -1.*t544*t1536;
  t1983 = 0. + t1855 + t1931;
  t1991 = t1842*t1983;
  t2061 = 0. + t1824 + t1991;
  t2169 = t290*t2061;
  t2206 = 0. + t2169;
  t3296 = -0.049*t3293;
  t3312 = -0.004500000000000004*t193;
  t5192 = t290*t5190;
  t5208 = 0. + t3296 + t3312 + t5192;
  t5235 = -0.135*t3293;
  t5257 = -0.1305*t290;
  t5262 = 0.049*t193;
  t5279 = t193*t5190;
  t5290 = 0. + t5235 + t5257 + t5262 + t5279;
  t5352 = -0.09*t3384;
  t5355 = 0.049*t441;
  t5362 = t1842*t5025;
  t5365 = t441*t5154;
  t5373 = 0. + t5352 + t5355 + t5362 + t5365;
  t267 = 0. + t193;
  t5230 = t193*t3154;
  t5234 = 0. + t5230;
  t5299 = t441*t2780;
  t5336 = t1842*t3080;
  t5349 = 0. + t5299 + t5336;
  t5430 = t1842*t1809;
  t5431 = t441*t1983;
  t5432 = 0. + t5430 + t5431;
  t5473 = -1.*t290;
  t5478 = 0. + t5473;
  t5416 = t193*t2061;
  t5419 = 0. + t5416;
  t5433 = -1.*t5373*t5432;
  t5394 = t5349*t5373;
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
  p_output1[42]=t267;
  p_output1[43]=t2206;
  p_output1[44]=t3270;
  p_output1[45]=0. + t2206*(t3270*t5208 + t5234*t5290 + t5394) + t3270*(-1.*t2206*t5208 - 1.*t5290*t5419 + t5433);
  p_output1[46]=t267*(-1.*t3270*t5208 - 1.*t5234*t5290 - 1.*t5349*t5373) + 0.135*t5432 + t3270*(0. + t267*t5208 + t5290*t5478);
  p_output1[47]=0.135*t5349 + t267*(t2206*t5208 + t5290*t5419 + t5373*t5432) + t2206*(0. - 1.*t267*t5208 - 1.*t5290*t5478);
  p_output1[48]=0.;
  p_output1[49]=t5432;
  p_output1[50]=t5349;
  p_output1[51]=-0.049 + (0. + t3154*t5190 + t5394)*t5432 + t5349*(0. - 1.*t2061*t5190 + t5433);
  p_output1[52]=0. - 0.135*t2061 + 0.1305*t5349;
  p_output1[53]=0. - 0.135*t3154 - 0.1305*t5432;
  p_output1[54]=1.;
  p_output1[55]=0.;
  p_output1[56]=0.;
  p_output1[57]=0.;
  p_output1[58]=0. + 0.049*t1809 - 0.09*t1983 - 1.*t3080*t5025 - 1.*t2780*t5154;
  p_output1[59]=0. - 0.09*t2780 + 0.049*t3080 + t1809*t5025 + t1983*t5154;
  p_output1[60]=1.;
  p_output1[61]=0.;
  p_output1[62]=0.;
  p_output1[63]=0.;
  p_output1[64]=0. - 0.21*t1340 + 0.049*t1536 - 1.*t2707*t4879 - 1.*t2605*t4974;
  p_output1[65]=0. + 0.049*t2605 - 0.21*t2707 + t1340*t4879 + t1536*t4974;
  p_output1[66]=1.;
  p_output1[67]=0.;
  p_output1[68]=0.;
  p_output1[69]=0.;
  p_output1[70]=0. + 0.0016*t1234 - 0.2707*t1307 - 1.*t2602*t4533 - 1.*t2536*t4857;
  p_output1[71]=0. - 0.2707*t2536 + 0.0016*t2602 + t1234*t4533 + t1307*t4857;
  p_output1[72]=1.;
  p_output1[73]=0.;
  p_output1[74]=0.;
  p_output1[75]=0.;
  p_output1[76]=0. - 0.0184*t1093 - 1.*t2388*t4228 - 0.7055*t937 - 1.*t4436*t937;
  p_output1[77]=0. - 0.7055*t2388 + t1093*t4436 - 0.0184*t937 + t4228*t937;
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
