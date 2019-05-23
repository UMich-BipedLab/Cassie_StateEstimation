/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:08:25 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeFront_src.h"

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
  double t667;
  double t1114;
  double t1136;
  double t1121;
  double t1251;
  double t745;
  double t775;
  double t929;
  double t1045;
  double t1379;
  double t1132;
  double t1285;
  double t1286;
  double t1431;
  double t1479;
  double t1507;
  double t1297;
  double t1518;
  double t1533;
  double t2738;
  double t2700;
  double t2712;
  double t2720;
  double t2658;
  double t2754;
  double t2758;
  double t2837;
  double t2928;
  double t2729;
  double t2896;
  double t2899;
  double t2644;
  double t2943;
  double t2970;
  double t2984;
  double t3057;
  double t2910;
  double t2985;
  double t2988;
  double t2615;
  double t3103;
  double t3115;
  double t3167;
  double t3237;
  double t3007;
  double t3172;
  double t3178;
  double t2546;
  double t3238;
  double t3278;
  double t3290;
  double t3553;
  double t3179;
  double t3331;
  double t3485;
  double t2531;
  double t3556;
  double t3559;
  double t3576;
  double t1603;
  double t1691;
  double t1763;
  double t2020;
  double t2084;
  double t2087;
  double t1885;
  double t2261;
  double t2296;
  double t3760;
  double t3808;
  double t3812;
  double t3831;
  double t3838;
  double t3846;
  double t3820;
  double t3848;
  double t3852;
  double t3879;
  double t3925;
  double t3959;
  double t3863;
  double t4023;
  double t4030;
  double t4052;
  double t4121;
  double t4188;
  double t4050;
  double t4200;
  double t4270;
  double t4301;
  double t4338;
  double t4371;
  double t4271;
  double t4373;
  double t4395;
  double t4404;
  double t4476;
  double t4499;
  double t2347;
  double t2443;
  double t2472;
  double t4700;
  double t4701;
  double t4710;
  double t4721;
  double t4725;
  double t4747;
  double t4717;
  double t4769;
  double t4770;
  double t4774;
  double t4785;
  double t4789;
  double t4773;
  double t4795;
  double t4801;
  double t4815;
  double t4857;
  double t4869;
  double t4807;
  double t4918;
  double t4933;
  double t4936;
  double t4937;
  double t4945;
  double t4934;
  double t4961;
  double t4979;
  double t4988;
  double t4990;
  double t4992;
  double t3510;
  double t3607;
  double t3682;
  double t3725;
  double t3728;
  double t3732;
  double t4403;
  double t4502;
  double t4534;
  double t4553;
  double t4558;
  double t4613;
  double t4982;
  double t4995;
  double t5005;
  double t5030;
  double t5045;
  double t5049;
  t667 = Cos(var1[3]);
  t1114 = Cos(var1[5]);
  t1136 = Sin(var1[3]);
  t1121 = Sin(var1[4]);
  t1251 = Sin(var1[5]);
  t745 = Cos(var1[4]);
  t775 = Sin(var1[14]);
  t929 = Cos(var1[14]);
  t1045 = Sin(var1[13]);
  t1379 = Cos(var1[13]);
  t1132 = t667*t1114*t1121;
  t1285 = t1136*t1251;
  t1286 = t1132 + t1285;
  t1431 = -1.*t1114*t1136;
  t1479 = t667*t1121*t1251;
  t1507 = t1431 + t1479;
  t1297 = t1045*t1286;
  t1518 = t1379*t1507;
  t1533 = t1297 + t1518;
  t2738 = Cos(var1[15]);
  t2700 = t1379*t1286;
  t2712 = -1.*t1045*t1507;
  t2720 = t2700 + t2712;
  t2658 = Sin(var1[15]);
  t2754 = t929*t667*t745;
  t2758 = t775*t1533;
  t2837 = t2754 + t2758;
  t2928 = Cos(var1[16]);
  t2729 = t2658*t2720;
  t2896 = t2738*t2837;
  t2899 = t2729 + t2896;
  t2644 = Sin(var1[16]);
  t2943 = t2738*t2720;
  t2970 = -1.*t2658*t2837;
  t2984 = t2943 + t2970;
  t3057 = Cos(var1[17]);
  t2910 = -1.*t2644*t2899;
  t2985 = t2928*t2984;
  t2988 = t2910 + t2985;
  t2615 = Sin(var1[17]);
  t3103 = t2928*t2899;
  t3115 = t2644*t2984;
  t3167 = t3103 + t3115;
  t3237 = Cos(var1[18]);
  t3007 = t2615*t2988;
  t3172 = t3057*t3167;
  t3178 = t3007 + t3172;
  t2546 = Sin(var1[18]);
  t3238 = t3057*t2988;
  t3278 = -1.*t2615*t3167;
  t3290 = t3238 + t3278;
  t3553 = Cos(var1[19]);
  t3179 = -1.*t2546*t3178;
  t3331 = t3237*t3290;
  t3485 = t3179 + t3331;
  t2531 = Sin(var1[19]);
  t3556 = t3237*t3178;
  t3559 = t2546*t3290;
  t3576 = t3556 + t3559;
  t1603 = t1114*t1136*t1121;
  t1691 = -1.*t667*t1251;
  t1763 = t1603 + t1691;
  t2020 = t667*t1114;
  t2084 = t1136*t1121*t1251;
  t2087 = t2020 + t2084;
  t1885 = t1045*t1763;
  t2261 = t1379*t2087;
  t2296 = t1885 + t2261;
  t3760 = t1379*t1763;
  t3808 = -1.*t1045*t2087;
  t3812 = t3760 + t3808;
  t3831 = t929*t745*t1136;
  t3838 = t775*t2296;
  t3846 = t3831 + t3838;
  t3820 = t2658*t3812;
  t3848 = t2738*t3846;
  t3852 = t3820 + t3848;
  t3879 = t2738*t3812;
  t3925 = -1.*t2658*t3846;
  t3959 = t3879 + t3925;
  t3863 = -1.*t2644*t3852;
  t4023 = t2928*t3959;
  t4030 = t3863 + t4023;
  t4052 = t2928*t3852;
  t4121 = t2644*t3959;
  t4188 = t4052 + t4121;
  t4050 = t2615*t4030;
  t4200 = t3057*t4188;
  t4270 = t4050 + t4200;
  t4301 = t3057*t4030;
  t4338 = -1.*t2615*t4188;
  t4371 = t4301 + t4338;
  t4271 = -1.*t2546*t4270;
  t4373 = t3237*t4371;
  t4395 = t4271 + t4373;
  t4404 = t3237*t4270;
  t4476 = t2546*t4371;
  t4499 = t4404 + t4476;
  t2347 = t745*t1114*t1045;
  t2443 = t1379*t745*t1251;
  t2472 = t2347 + t2443;
  t4700 = t1379*t745*t1114;
  t4701 = -1.*t745*t1045*t1251;
  t4710 = t4700 + t4701;
  t4721 = -1.*t929*t1121;
  t4725 = t775*t2472;
  t4747 = t4721 + t4725;
  t4717 = t2658*t4710;
  t4769 = t2738*t4747;
  t4770 = t4717 + t4769;
  t4774 = t2738*t4710;
  t4785 = -1.*t2658*t4747;
  t4789 = t4774 + t4785;
  t4773 = -1.*t2644*t4770;
  t4795 = t2928*t4789;
  t4801 = t4773 + t4795;
  t4815 = t2928*t4770;
  t4857 = t2644*t4789;
  t4869 = t4815 + t4857;
  t4807 = t2615*t4801;
  t4918 = t3057*t4869;
  t4933 = t4807 + t4918;
  t4936 = t3057*t4801;
  t4937 = -1.*t2615*t4869;
  t4945 = t4936 + t4937;
  t4934 = -1.*t2546*t4933;
  t4961 = t3237*t4945;
  t4979 = t4934 + t4961;
  t4988 = t3237*t4933;
  t4990 = t2546*t4945;
  t4992 = t4988 + t4990;
  t3510 = t2531*t3485;
  t3607 = t3553*t3576;
  t3682 = t3510 + t3607;
  t3725 = t3553*t3485;
  t3728 = -1.*t2531*t3576;
  t3732 = t3725 + t3728;
  t4403 = t2531*t4395;
  t4502 = t3553*t4499;
  t4534 = t4403 + t4502;
  t4553 = t3553*t4395;
  t4558 = -1.*t2531*t4499;
  t4613 = t4553 + t4558;
  t4982 = t2531*t4979;
  t4995 = t3553*t4992;
  t5005 = t4982 + t4995;
  t5030 = t3553*t4979;
  t5045 = -1.*t2531*t4992;
  t5049 = t5030 + t5045;
  p_output1[0]=t667*t745*t775 - 1.*t1533*t929;
  p_output1[1]=t1136*t745*t775 - 1.*t2296*t929;
  p_output1[2]=-1.*t1121*t775 - 1.*t2472*t929;
  p_output1[3]=0.642788*t3682 + 0.766044*t3732;
  p_output1[4]=0.642788*t4534 + 0.766044*t4613;
  p_output1[5]=0.642788*t5005 + 0.766044*t5049;
  p_output1[6]=-0.766044*t3682 + 0.642788*t3732;
  p_output1[7]=-0.766044*t4534 + 0.642788*t4613;
  p_output1[8]=-0.766044*t5005 + 0.642788*t5049;
}



void R_RightToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
