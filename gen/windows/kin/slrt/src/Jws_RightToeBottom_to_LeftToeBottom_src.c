/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:24:25 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jws_RightToeBottom_to_LeftToeBottom_src.h"

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
  double t269;
  double t470;
  double t143;
  double t319;
  double t509;
  double t64;
  double t615;
  double t623;
  double t692;
  double t324;
  double t563;
  double t566;
  double t705;
  double t48;
  double t735;
  double t761;
  double t796;
  double t577;
  double t708;
  double t725;
  double t809;
  double t38;
  double t909;
  double t915;
  double t952;
  double t732;
  double t871;
  double t872;
  double t975;
  double t24;
  double t1016;
  double t1019;
  double t1027;
  double t887;
  double t998;
  double t1009;
  double t1055;
  double t1271;
  double t1295;
  double t1314;
  double t1204;
  double t1220;
  double t1222;
  double t1402;
  double t1429;
  double t1432;
  double t1253;
  double t1358;
  double t1366;
  double t1485;
  double t1487;
  double t1516;
  double t1382;
  double t1450;
  double t1451;
  double t1650;
  double t1692;
  double t1748;
  double t1469;
  double t1533;
  double t1547;
  double t1011;
  double t1079;
  double t1081;
  double t1107;
  double t1122;
  double t1127;
  double t1624;
  double t1778;
  double t1838;
  double t1862;
  double t1873;
  double t1885;
  double t2026;
  double t2039;
  double t2072;
  double t2116;
  double t2182;
  double t2203;
  double t2204;
  double t2120;
  double t2140;
  double t2149;
  double t2272;
  double t2285;
  double t2288;
  double t2158;
  double t2205;
  double t2222;
  double t2353;
  double t2363;
  double t2383;
  double t2229;
  double t2300;
  double t2336;
  double t1964;
  double t2008;
  double t2020;
  double t1847;
  double t1889;
  double t1904;
  double t2344;
  double t2399;
  double t2439;
  double t2446;
  double t2454;
  double t2478;
  double t1086;
  double t1175;
  double t1190;
  double t2616;
  double t2645;
  double t2654;
  double t2442;
  double t2499;
  double t2520;
  double t2521;
  double t2532;
  double t2549;
  double t2564;
  double t2660;
  double t2665;
  double t2670;
  double t2709;
  double t2710;
  double t2723;
  double t2781;
  double t2784;
  double t2786;
  double t2807;
  double t2994;
  double t2998;
  double t3060;
  double t3061;
  double t3062;
  double t3043;
  double t3045;
  double t3056;
  double t3006;
  double t3223;
  double t1938;
  double t2075;
  double t2097;
  double t3224;
  double t3227;
  double t3111;
  double t3136;
  double t3138;
  double t3077;
  double t3091;
  double t3093;
  double t3232;
  double t3249;
  double t2818;
  double t2879;
  double t2886;
  double t3270;
  double t3275;
  double t3178;
  double t3199;
  double t3203;
  double t3172;
  double t2934;
  double t2964;
  double t2969;
  double t3230;
  double t3258;
  double t3276;
  double t3281;
  double t3282;
  double t3301;
  double t3320;
  double t3331;
  double t3334;
  double t3344;
  double t3350;
  double t3355;
  double t3384;
  double t3386;
  double t3393;
  double t3524;
  double t3545;
  double t3648;
  double t3662;
  double t3547;
  double t3619;
  double t3546;
  double t3634;
  double t3672;
  double t3700;
  double t3721;
  double t3728;
  double t3771;
  double t3777;
  double t3805;
  double t3806;
  double t3851;
  double t3854;
  t269 = Cos(var1[9]);
  t470 = Sin(var1[7]);
  t143 = Cos(var1[7]);
  t319 = Sin(var1[8]);
  t509 = Sin(var1[9]);
  t64 = Cos(var1[10]);
  t615 = -1.*t269*t470;
  t623 = -1.*t143*t319*t509;
  t692 = t615 + t623;
  t324 = t143*t269*t319;
  t563 = -1.*t470*t509;
  t566 = t324 + t563;
  t705 = Sin(var1[10]);
  t48 = Cos(var1[11]);
  t735 = t64*t692;
  t761 = -1.*t566*t705;
  t796 = t735 + t761;
  t577 = t64*t566;
  t708 = t692*t705;
  t725 = t577 + t708;
  t809 = Sin(var1[11]);
  t38 = Cos(var1[12]);
  t909 = t48*t796;
  t915 = -1.*t725*t809;
  t952 = t909 + t915;
  t732 = t48*t725;
  t871 = t796*t809;
  t872 = t732 + t871;
  t975 = Sin(var1[12]);
  t24 = Cos(var1[13]);
  t1016 = t38*t952;
  t1019 = -1.*t872*t975;
  t1027 = t1016 + t1019;
  t887 = t38*t872;
  t998 = t952*t975;
  t1009 = t887 + t998;
  t1055 = Sin(var1[13]);
  t1271 = t143*t269;
  t1295 = -1.*t470*t319*t509;
  t1314 = t1271 + t1295;
  t1204 = t269*t470*t319;
  t1220 = t143*t509;
  t1222 = t1204 + t1220;
  t1402 = t64*t1314;
  t1429 = -1.*t1222*t705;
  t1432 = t1402 + t1429;
  t1253 = t64*t1222;
  t1358 = t1314*t705;
  t1366 = t1253 + t1358;
  t1485 = t48*t1432;
  t1487 = -1.*t1366*t809;
  t1516 = t1485 + t1487;
  t1382 = t48*t1366;
  t1450 = t1432*t809;
  t1451 = t1382 + t1450;
  t1650 = t38*t1516;
  t1692 = -1.*t1451*t975;
  t1748 = t1650 + t1692;
  t1469 = t38*t1451;
  t1533 = t1516*t975;
  t1547 = t1469 + t1533;
  t1011 = t24*t1009;
  t1079 = t1027*t1055;
  t1081 = t1011 + t1079;
  t1107 = t24*t1027;
  t1122 = -1.*t1009*t1055;
  t1127 = t1107 + t1122;
  t1624 = t24*t1547;
  t1778 = t1748*t1055;
  t1838 = t1624 + t1778;
  t1862 = t24*t1748;
  t1873 = -1.*t1547*t1055;
  t1885 = t1862 + t1873;
  t2026 = 0.642788*t1838;
  t2039 = 0.766044*t1885;
  t2072 = t2026 + t2039;
  t2116 = Cos(var1[8]);
  t2182 = -1.*t2116*t64*t509;
  t2203 = -1.*t2116*t269*t705;
  t2204 = t2182 + t2203;
  t2120 = t2116*t269*t64;
  t2140 = -1.*t2116*t509*t705;
  t2149 = t2120 + t2140;
  t2272 = t48*t2204;
  t2285 = -1.*t2149*t809;
  t2288 = t2272 + t2285;
  t2158 = t48*t2149;
  t2205 = t2204*t809;
  t2222 = t2158 + t2205;
  t2353 = t38*t2288;
  t2363 = -1.*t2222*t975;
  t2383 = t2353 + t2363;
  t2229 = t38*t2222;
  t2300 = t2288*t975;
  t2336 = t2229 + t2300;
  t1964 = -0.766044*t1081;
  t2008 = 0.642788*t1127;
  t2020 = t1964 + t2008;
  t1847 = -0.766044*t1838;
  t1889 = 0.642788*t1885;
  t1904 = t1847 + t1889;
  t2344 = t24*t2336;
  t2399 = t2383*t1055;
  t2439 = t2344 + t2399;
  t2446 = t24*t2383;
  t2454 = -1.*t2336*t1055;
  t2478 = t2446 + t2454;
  t1086 = 0.642788*t1081;
  t1175 = 0.766044*t1127;
  t1190 = t1086 + t1175;
  t2616 = 0.642788*t2439;
  t2645 = 0.766044*t2478;
  t2654 = t2616 + t2645;
  t2442 = -0.766044*t2439;
  t2499 = 0.642788*t2478;
  t2520 = t2442 + t2499;
  t2521 = t143*t2116*t2520;
  t2532 = t319*t2020;
  t2549 = t2521 + t2532;
  t2564 = -1.*t2072*t2549;
  t2660 = t143*t2116*t2654;
  t2665 = t319*t1190;
  t2670 = t2660 + t2665;
  t2709 = t1904*t2670;
  t2710 = t2654*t2020;
  t2723 = -1.*t2520*t1190;
  t2781 = t2710 + t2723;
  t2784 = -1.*t2116*t470*t2781;
  t2786 = 0. + t2564 + t2709 + t2784;
  t2807 = 1/t2786;
  t2994 = Cos(var1[0]);
  t2998 = 0. + t2994;
  t3060 = Sin(var1[0]);
  t3061 = -1.*t3060;
  t3062 = 0. + t3061;
  t3043 = -1.*t2654*t1904;
  t3045 = t2520*t2072;
  t3056 = 0. + t3043 + t3045;
  t3006 = 0. + t2710 + t2723;
  t3223 = Cos(var1[1]);
  t1938 = t1190*t1904;
  t2075 = -1.*t2020*t2072;
  t2097 = 0. + t1938 + t2075;
  t3224 = -1.*t2994*t3223;
  t3227 = 0. + t3224;
  t3111 = t2116*t470*t2520;
  t3136 = t319*t1904;
  t3138 = 0. + t3111 + t3136;
  t3077 = -1.*t143*t2116*t2520;
  t3091 = -1.*t319*t2020;
  t3093 = 0. + t3077 + t3091;
  t3232 = -1.*t3223*t3060;
  t3249 = 0. + t3232;
  t2818 = -1.*t2116*t470*t2020;
  t2879 = t143*t2116*t1904;
  t2886 = 0. + t2818 + t2879;
  t3270 = Sin(var1[1]);
  t3275 = 0. + t3270;
  t3178 = -1.*t2116*t470*t2654;
  t3199 = -1.*t319*t2072;
  t3203 = 0. + t3178 + t3199;
  t3172 = 0. + t2660 + t2665;
  t2934 = t2116*t470*t1190;
  t2964 = -1.*t143*t2116*t2072;
  t2969 = 0. + t2934 + t2964;
  t3230 = t3227*t3056*t2807;
  t3258 = t3006*t2807*t3249;
  t3276 = t2097*t2807*t3275;
  t3281 = t3230 + t3258 + t3276;
  t3282 = t3227*t3138*t2807;
  t3301 = t3093*t2807*t3249;
  t3320 = t2886*t2807*t3275;
  t3331 = t3282 + t3301 + t3320;
  t3334 = t3227*t3203*t2807;
  t3344 = t3172*t2807*t3249;
  t3350 = t2969*t2807*t3275;
  t3355 = t3334 + t3344 + t3350;
  t3384 = -1.*t143;
  t3386 = 0. + t3384;
  t3393 = 0. + t470;
  t3524 = t2116*t470;
  t3545 = 0. + t3524;
  t3648 = -1.*t319;
  t3662 = 0. + t3648;
  t3547 = t143*t2116;
  t3619 = 0. + t3547;
  t3546 = t3545*t3006*t2807;
  t3634 = t3619*t3056*t2807;
  t3672 = t3662*t2097*t2807;
  t3700 = t3546 + t3634 + t3672;
  t3721 = t3545*t3093*t2807;
  t3728 = t3662*t2886*t2807;
  t3771 = t3619*t3138*t2807;
  t3777 = t3721 + t3728 + t3771;
  t3805 = t3545*t3172*t2807;
  t3806 = t3662*t2969*t2807;
  t3851 = t3619*t3203*t2807;
  t3854 = t3805 + t3806 + t3851;
  p_output1[0]=0. + t2097*t2807;
  p_output1[1]=0. + t2807*t2886;
  p_output1[2]=0. + t2807*t2969;
  p_output1[3]=0. + t2807*t2998*t3006 + t2807*t3056*t3062;
  p_output1[4]=0. + t2807*t2998*t3093 + t2807*t3062*t3138;
  p_output1[5]=0. + t2807*t2998*t3172 + t2807*t3062*t3203;
  p_output1[6]=t3281;
  p_output1[7]=t3331;
  p_output1[8]=t3355;
  p_output1[9]=t3281;
  p_output1[10]=t3331;
  p_output1[11]=t3355;
  p_output1[12]=t3281;
  p_output1[13]=t3331;
  p_output1[14]=t3355;
  p_output1[15]=t3281;
  p_output1[16]=t3331;
  p_output1[17]=t3355;
  p_output1[18]=t3281;
  p_output1[19]=t3331;
  p_output1[20]=t3355;
  p_output1[21]=0. - 1.*t2097*t2807;
  p_output1[22]=0. - 1.*t2807*t2886;
  p_output1[23]=0. - 1.*t2807*t2969;
  p_output1[24]=0. + t2807*t3006*t3386 + t2807*t3056*t3393;
  p_output1[25]=0. + t2807*t3093*t3386 + t2807*t3138*t3393;
  p_output1[26]=0. + t2807*t3172*t3386 + t2807*t3203*t3393;
  p_output1[27]=t3700;
  p_output1[28]=t3777;
  p_output1[29]=t3854;
  p_output1[30]=t3700;
  p_output1[31]=t3777;
  p_output1[32]=t3854;
  p_output1[33]=t3700;
  p_output1[34]=t3777;
  p_output1[35]=t3854;
  p_output1[36]=t3700;
  p_output1[37]=t3777;
  p_output1[38]=t3854;
  p_output1[39]=t3700;
  p_output1[40]=t3777;
  p_output1[41]=t3854;
}



void Jws_RightToeBottom_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
