/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:02:14 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottom_to_LeftToeBottom_src.h"

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
  double t735;
  double t800;
  double t889;
  double t798;
  double t952;
  double t662;
  double t1083;
  double t1104;
  double t1184;
  double t878;
  double t1026;
  double t1051;
  double t1194;
  double t299;
  double t1338;
  double t1422;
  double t1451;
  double t1065;
  double t1240;
  double t1264;
  double t1460;
  double t223;
  double t1617;
  double t1744;
  double t1893;
  double t1304;
  double t1516;
  double t1544;
  double t1905;
  double t2237;
  double t2182;
  double t2198;
  double t2371;
  double t2372;
  double t2389;
  double t2212;
  double t2252;
  double t2266;
  double t2511;
  double t2569;
  double t2590;
  double t2357;
  double t2411;
  double t2446;
  double t2689;
  double t2704;
  double t2731;
  double t2460;
  double t2621;
  double t2630;
  double t2990;
  double t3014;
  double t3023;
  double t2653;
  double t2764;
  double t2825;
  double t1611;
  double t1919;
  double t1950;
  double t1982;
  double t2059;
  double t2061;
  double t2849;
  double t3098;
  double t3102;
  double t3182;
  double t3217;
  double t3221;
  double t3400;
  double t3410;
  double t3428;
  double t3374;
  double t3377;
  double t3397;
  double t3539;
  double t3546;
  double t3567;
  double t3498;
  double t3499;
  double t3504;
  double t3647;
  double t3680;
  double t3685;
  double t3525;
  double t3574;
  double t3585;
  double t3850;
  double t3902;
  double t3944;
  double t3620;
  double t3756;
  double t3778;
  double t4013;
  double t4062;
  double t4107;
  double t3840;
  double t3971;
  double t3978;
  double t3110;
  double t3279;
  double t3287;
  double t1955;
  double t2109;
  double t2124;
  double t3998;
  double t4152;
  double t4154;
  double t4203;
  double t4274;
  double t4275;
  double t4191;
  double t4280;
  double t4282;
  double t4450;
  double t4532;
  double t4620;
  double t158;
  double t4652;
  double t4665;
  double t3451;
  double t4308;
  double t4344;
  double t4354;
  double t4431;
  double t4621;
  double t4644;
  double t4650;
  double t4698;
  double t4837;
  double t4847;
  double t4848;
  double t154;
  double t4925;
  double t5015;
  double t4972;
  double t5012;
  double t5013;
  double t5478;
  double t5449;
  double t5458;
  double t5487;
  double t5523;
  double t5473;
  double t5500;
  double t5501;
  double t5448;
  double t5542;
  double t5554;
  double t5583;
  double t5674;
  double t5511;
  double t5590;
  double t5599;
  double t5444;
  double t5710;
  double t5734;
  double t5743;
  double t5785;
  double t5635;
  double t5748;
  double t5754;
  double t5424;
  double t5810;
  double t5814;
  double t5824;
  double t3320;
  double t3430;
  double t3444;
  double t5923;
  double t5925;
  double t5932;
  double t5952;
  double t5953;
  double t5964;
  double t5938;
  double t5971;
  double t5973;
  double t5977;
  double t5987;
  double t5988;
  double t5976;
  double t6002;
  double t6004;
  double t6017;
  double t6025;
  double t6031;
  double t6016;
  double t6034;
  double t6069;
  double t6099;
  double t6100;
  double t6121;
  double t4900;
  double t6232;
  double t6239;
  double t6260;
  double t6271;
  double t6278;
  double t6279;
  double t6265;
  double t6297;
  double t6300;
  double t6321;
  double t6326;
  double t6327;
  double t6311;
  double t6346;
  double t6354;
  double t6369;
  double t6371;
  double t6380;
  double t6360;
  double t6389;
  double t6407;
  double t6423;
  double t6424;
  double t6448;
  double t5219;
  double t5228;
  double t5234;
  double t5755;
  double t5839;
  double t5843;
  double t5873;
  double t5878;
  double t5885;
  double t5895;
  double t5901;
  double t5905;
  double t5076;
  double t5108;
  double t5133;
  double t6089;
  double t6135;
  double t6154;
  double t6168;
  double t6176;
  double t6179;
  double t6196;
  double t6204;
  double t6215;
  double t5173;
  double t5174;
  double t5185;
  double t6411;
  double t6454;
  double t6459;
  double t6465;
  double t6470;
  double t6472;
  double t6478;
  double t6505;
  double t6507;
  double t5388;
  double t5399;
  double t5419;
  double t5278;
  double t5295;
  double t5308;
  double t5349;
  double t6678;
  double t6685;
  double t6700;
  double t6740;
  double t6760;
  double t6765;
  double t6779;
  double t6845;
  double t6857;
  t735 = Cos(var1[8]);
  t800 = Cos(var1[10]);
  t889 = Sin(var1[9]);
  t798 = Cos(var1[9]);
  t952 = Sin(var1[10]);
  t662 = Cos(var1[11]);
  t1083 = -1.*t735*t800*t889;
  t1104 = -1.*t735*t798*t952;
  t1184 = t1083 + t1104;
  t878 = t735*t798*t800;
  t1026 = -1.*t735*t889*t952;
  t1051 = t878 + t1026;
  t1194 = Sin(var1[11]);
  t299 = Cos(var1[12]);
  t1338 = t662*t1184;
  t1422 = -1.*t1051*t1194;
  t1451 = t1338 + t1422;
  t1065 = t662*t1051;
  t1240 = t1184*t1194;
  t1264 = t1065 + t1240;
  t1460 = Sin(var1[12]);
  t223 = Cos(var1[13]);
  t1617 = t299*t1451;
  t1744 = -1.*t1264*t1460;
  t1893 = t1617 + t1744;
  t1304 = t299*t1264;
  t1516 = t1451*t1460;
  t1544 = t1304 + t1516;
  t1905 = Sin(var1[13]);
  t2237 = Cos(var1[7]);
  t2182 = Sin(var1[7]);
  t2198 = Sin(var1[8]);
  t2371 = t2237*t798;
  t2372 = -1.*t2182*t2198*t889;
  t2389 = t2371 + t2372;
  t2212 = t798*t2182*t2198;
  t2252 = t2237*t889;
  t2266 = t2212 + t2252;
  t2511 = t800*t2389;
  t2569 = -1.*t2266*t952;
  t2590 = t2511 + t2569;
  t2357 = t800*t2266;
  t2411 = t2389*t952;
  t2446 = t2357 + t2411;
  t2689 = t662*t2590;
  t2704 = -1.*t2446*t1194;
  t2731 = t2689 + t2704;
  t2460 = t662*t2446;
  t2621 = t2590*t1194;
  t2630 = t2460 + t2621;
  t2990 = t299*t2731;
  t3014 = -1.*t2630*t1460;
  t3023 = t2990 + t3014;
  t2653 = t299*t2630;
  t2764 = t2731*t1460;
  t2825 = t2653 + t2764;
  t1611 = t223*t1544;
  t1919 = t1893*t1905;
  t1950 = t1611 + t1919;
  t1982 = t223*t1893;
  t2059 = -1.*t1544*t1905;
  t2061 = t1982 + t2059;
  t2849 = t223*t2825;
  t3098 = t3023*t1905;
  t3102 = t2849 + t3098;
  t3182 = t223*t3023;
  t3217 = -1.*t2825*t1905;
  t3221 = t3182 + t3217;
  t3400 = 0.642788*t3102;
  t3410 = 0.766044*t3221;
  t3428 = t3400 + t3410;
  t3374 = -0.766044*t1950;
  t3377 = 0.642788*t2061;
  t3397 = t3374 + t3377;
  t3539 = -1.*t798*t2182;
  t3546 = -1.*t2237*t2198*t889;
  t3567 = t3539 + t3546;
  t3498 = t2237*t798*t2198;
  t3499 = -1.*t2182*t889;
  t3504 = t3498 + t3499;
  t3647 = t800*t3567;
  t3680 = -1.*t3504*t952;
  t3685 = t3647 + t3680;
  t3525 = t800*t3504;
  t3574 = t3567*t952;
  t3585 = t3525 + t3574;
  t3850 = t662*t3685;
  t3902 = -1.*t3585*t1194;
  t3944 = t3850 + t3902;
  t3620 = t662*t3585;
  t3756 = t3685*t1194;
  t3778 = t3620 + t3756;
  t4013 = t299*t3944;
  t4062 = -1.*t3778*t1460;
  t4107 = t4013 + t4062;
  t3840 = t299*t3778;
  t3971 = t3944*t1460;
  t3978 = t3840 + t3971;
  t3110 = -0.766044*t3102;
  t3279 = 0.642788*t3221;
  t3287 = t3110 + t3279;
  t1955 = 0.642788*t1950;
  t2109 = 0.766044*t2061;
  t2124 = t1955 + t2109;
  t3998 = t223*t3978;
  t4152 = t4107*t1905;
  t4154 = t3998 + t4152;
  t4203 = t223*t4107;
  t4274 = -1.*t3978*t1905;
  t4275 = t4203 + t4274;
  t4191 = -0.766044*t4154;
  t4280 = 0.642788*t4275;
  t4282 = t4191 + t4280;
  t4450 = 0.642788*t4154;
  t4532 = 0.766044*t4275;
  t4620 = t4450 + t4532;
  t158 = Cos(var1[1]);
  t4652 = t2124*t4282;
  t4665 = -1.*t3397*t4620;
  t3451 = t2237*t735*t3397;
  t4308 = t2198*t4282;
  t4344 = t3451 + t4308;
  t4354 = -1.*t3428*t4344;
  t4431 = t2237*t735*t2124;
  t4621 = t2198*t4620;
  t4644 = t4431 + t4621;
  t4650 = t3287*t4644;
  t4698 = t4652 + t4665;
  t4837 = -1.*t735*t2182*t4698;
  t4847 = 0. + t4354 + t4650 + t4837;
  t4848 = 1/t4847;
  t154 = Cos(var1[0]);
  t4925 = Sin(var1[0]);
  t5015 = Sin(var1[1]);
  t4972 = t4620*t3287;
  t5012 = -1.*t4282*t3428;
  t5013 = 0. + t4972 + t5012;
  t5478 = Cos(var1[3]);
  t5449 = Cos(var1[2]);
  t5458 = Sin(var1[3]);
  t5487 = Sin(var1[2]);
  t5523 = Cos(var1[4]);
  t5473 = -1.*t158*t5449*t5458;
  t5500 = -1.*t5478*t158*t5487;
  t5501 = t5473 + t5500;
  t5448 = Sin(var1[4]);
  t5542 = t5478*t158*t5449;
  t5554 = -1.*t158*t5458*t5487;
  t5583 = t5542 + t5554;
  t5674 = Cos(var1[5]);
  t5511 = t5448*t5501;
  t5590 = t5523*t5583;
  t5599 = t5511 + t5590;
  t5444 = Sin(var1[5]);
  t5710 = t5523*t5501;
  t5734 = -1.*t5448*t5583;
  t5743 = t5710 + t5734;
  t5785 = Cos(var1[6]);
  t5635 = -1.*t5444*t5599;
  t5748 = t5674*t5743;
  t5754 = t5635 + t5748;
  t5424 = Sin(var1[6]);
  t5810 = t5674*t5599;
  t5814 = t5444*t5743;
  t5824 = t5810 + t5814;
  t3320 = -1.*t2124*t3287;
  t3430 = t3397*t3428;
  t3444 = 0. + t3320 + t3430;
  t5923 = t154*t5449*t5015;
  t5925 = -1.*t4925*t5487;
  t5932 = t5923 + t5925;
  t5952 = -1.*t5449*t4925;
  t5953 = -1.*t154*t5015*t5487;
  t5964 = t5952 + t5953;
  t5938 = -1.*t5458*t5932;
  t5971 = t5478*t5964;
  t5973 = t5938 + t5971;
  t5977 = t5478*t5932;
  t5987 = t5458*t5964;
  t5988 = t5977 + t5987;
  t5976 = t5448*t5973;
  t6002 = t5523*t5988;
  t6004 = t5976 + t6002;
  t6017 = t5523*t5973;
  t6025 = -1.*t5448*t5988;
  t6031 = t6017 + t6025;
  t6016 = -1.*t5444*t6004;
  t6034 = t5674*t6031;
  t6069 = t6016 + t6034;
  t6099 = t5674*t6004;
  t6100 = t5444*t6031;
  t6121 = t6099 + t6100;
  t4900 = 0. + t4652 + t4665;
  t6232 = t5449*t4925*t5015;
  t6239 = t154*t5487;
  t6260 = t6232 + t6239;
  t6271 = t154*t5449;
  t6278 = -1.*t4925*t5015*t5487;
  t6279 = t6271 + t6278;
  t6265 = -1.*t5458*t6260;
  t6297 = t5478*t6279;
  t6300 = t6265 + t6297;
  t6321 = t5478*t6260;
  t6326 = t5458*t6279;
  t6327 = t6321 + t6326;
  t6311 = t5448*t6300;
  t6346 = t5523*t6327;
  t6354 = t6311 + t6346;
  t6369 = t5523*t6300;
  t6371 = -1.*t5448*t6327;
  t6380 = t6369 + t6371;
  t6360 = -1.*t5444*t6354;
  t6389 = t5674*t6380;
  t6407 = t6360 + t6389;
  t6423 = t5674*t6354;
  t6424 = t5444*t6380;
  t6448 = t6423 + t6424;
  t5219 = -1.*t735*t2182*t4282;
  t5228 = t2237*t735*t3287;
  t5234 = 0. + t5219 + t5228;
  t5755 = t5424*t5754;
  t5839 = t5785*t5824;
  t5843 = t5755 + t5839;
  t5873 = 0.642788*t5843;
  t5878 = t5785*t5754;
  t5885 = -1.*t5424*t5824;
  t5895 = t5878 + t5885;
  t5901 = 0.766044*t5895;
  t5905 = t5873 + t5901;
  t5076 = t735*t2182*t3397;
  t5108 = t2198*t3287;
  t5133 = 0. + t5076 + t5108;
  t6089 = t5424*t6069;
  t6135 = t5785*t6121;
  t6154 = t6089 + t6135;
  t6168 = 0.642788*t6154;
  t6176 = t5785*t6069;
  t6179 = -1.*t5424*t6121;
  t6196 = t6176 + t6179;
  t6204 = 0.766044*t6196;
  t6215 = t6168 + t6204;
  t5173 = -1.*t2237*t735*t3397;
  t5174 = -1.*t2198*t4282;
  t5185 = 0. + t5173 + t5174;
  t6411 = t5424*t6407;
  t6454 = t5785*t6448;
  t6459 = t6411 + t6454;
  t6465 = 0.642788*t6459;
  t6470 = t5785*t6407;
  t6472 = -1.*t5424*t6448;
  t6478 = t6470 + t6472;
  t6505 = 0.766044*t6478;
  t6507 = t6465 + t6505;
  t5388 = t735*t2182*t4620;
  t5399 = -1.*t2237*t735*t3428;
  t5419 = 0. + t5388 + t5399;
  t5278 = -1.*t735*t2182*t2124;
  t5295 = -1.*t2198*t3428;
  t5308 = 0. + t5278 + t5295;
  t5349 = 0. + t4431 + t4621;
  t6678 = -0.766044*t5843;
  t6685 = 0.642788*t5895;
  t6700 = t6678 + t6685;
  t6740 = -0.766044*t6154;
  t6760 = 0.642788*t6196;
  t6765 = t6740 + t6760;
  t6779 = -0.766044*t6459;
  t6845 = 0.642788*t6478;
  t6857 = t6779 + t6845;
  p_output1[0]=0. - 1.*t154*t158*t3444*t4848 - 1.*t158*t4848*t4900*t4925 + t4848*t5013*t5015;
  p_output1[1]=0. - 1.*t154*t158*t4848*t5133 - 1.*t158*t4848*t4925*t5185 + t4848*t5015*t5234;
  p_output1[2]=0. - 1.*t154*t158*t4848*t5308 - 1.*t158*t4848*t4925*t5349 + t4848*t5015*t5419;
  p_output1[3]=0. + t4848*t5013*t5905 + t3444*t4848*t6215 + t4848*t4900*t6507;
  p_output1[4]=0. + t4848*t5234*t5905 + t4848*t5133*t6215 + t4848*t5185*t6507;
  p_output1[5]=0. + t4848*t5419*t5905 + t4848*t5308*t6215 + t4848*t5349*t6507;
  p_output1[6]=0. + t4848*t5013*t6700 + t3444*t4848*t6765 + t4848*t4900*t6857;
  p_output1[7]=0. + t4848*t5234*t6700 + t4848*t5133*t6765 + t4848*t5185*t6857;
  p_output1[8]=0. + t4848*t5419*t6700 + t4848*t5308*t6765 + t4848*t5349*t6857;
}



void R_RightToeBottom_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
