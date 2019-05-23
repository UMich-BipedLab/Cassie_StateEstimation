/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:24:16 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jws_LeftToeBottom_to_RightToeBottom_src.h"

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
  double t433;
  double t592;
  double t419;
  double t487;
  double t607;
  double t711;
  double t491;
  double t614;
  double t643;
  double t394;
  double t738;
  double t741;
  double t756;
  double t821;
  double t653;
  double t763;
  double t774;
  double t294;
  double t832;
  double t873;
  double t874;
  double t913;
  double t785;
  double t888;
  double t892;
  double t284;
  double t922;
  double t926;
  double t981;
  double t1068;
  double t896;
  double t984;
  double t1025;
  double t91;
  double t1070;
  double t1114;
  double t1142;
  double t1306;
  double t1322;
  double t1334;
  double t1341;
  double t1350;
  double t1371;
  double t1340;
  double t1389;
  double t1420;
  double t1444;
  double t1446;
  double t1447;
  double t1424;
  double t1471;
  double t1475;
  double t1566;
  double t1573;
  double t1577;
  double t1493;
  double t1642;
  double t1683;
  double t1727;
  double t1736;
  double t1747;
  double t1057;
  double t1164;
  double t1176;
  double t1197;
  double t1241;
  double t1257;
  double t1719;
  double t1803;
  double t1814;
  double t1842;
  double t1866;
  double t1875;
  double t2017;
  double t2024;
  double t2032;
  double t2059;
  double t2084;
  double t2105;
  double t2109;
  double t2116;
  double t2133;
  double t2148;
  double t2114;
  double t2156;
  double t2167;
  double t2200;
  double t2206;
  double t2222;
  double t2172;
  double t2230;
  double t2233;
  double t2250;
  double t2251;
  double t2274;
  double t1930;
  double t1961;
  double t2003;
  double t1818;
  double t1879;
  double t1897;
  double t2234;
  double t2279;
  double t2342;
  double t2358;
  double t2374;
  double t2382;
  double t1191;
  double t1270;
  double t1297;
  double t2468;
  double t2469;
  double t2484;
  double t2350;
  double t2415;
  double t2416;
  double t2421;
  double t2428;
  double t2434;
  double t2452;
  double t2519;
  double t2540;
  double t2551;
  double t2556;
  double t2560;
  double t2569;
  double t2572;
  double t2574;
  double t2581;
  double t2594;
  double t2691;
  double t2694;
  double t2726;
  double t2711;
  double t2750;
  double t2773;
  double t2777;
  double t1923;
  double t2050;
  double t2058;
  double t2938;
  double t2941;
  double t2811;
  double t2812;
  double t2823;
  double t2974;
  double t2977;
  double t2623;
  double t2629;
  double t2640;
  double t2956;
  double t2969;
  double t2836;
  double t2844;
  double t2848;
  double t2873;
  double t2674;
  double t2676;
  double t2679;
  double t2876;
  double t2883;
  double t2888;
  double t2942;
  double t2973;
  double t2983;
  double t2989;
  double t3010;
  double t3019;
  double t3020;
  double t3023;
  double t3026;
  double t3032;
  double t3042;
  double t3043;
  double t3078;
  double t3085;
  double t3100;
  double t3102;
  double t3123;
  double t3212;
  double t3214;
  double t3218;
  double t3254;
  double t3257;
  double t3225;
  double t3230;
  double t3221;
  double t3240;
  double t3261;
  double t3269;
  double t3292;
  double t3301;
  double t3303;
  double t3309;
  double t3335;
  double t3344;
  double t3350;
  double t3356;
  t433 = Cos(var1[2]);
  t592 = Sin(var1[0]);
  t419 = Cos(var1[0]);
  t487 = Sin(var1[1]);
  t607 = Sin(var1[2]);
  t711 = Cos(var1[3]);
  t491 = t419*t433*t487;
  t614 = -1.*t592*t607;
  t643 = t491 + t614;
  t394 = Sin(var1[3]);
  t738 = -1.*t433*t592;
  t741 = -1.*t419*t487*t607;
  t756 = t738 + t741;
  t821 = Cos(var1[4]);
  t653 = -1.*t394*t643;
  t763 = t711*t756;
  t774 = t653 + t763;
  t294 = Sin(var1[4]);
  t832 = t711*t643;
  t873 = t394*t756;
  t874 = t832 + t873;
  t913 = Cos(var1[5]);
  t785 = t294*t774;
  t888 = t821*t874;
  t892 = t785 + t888;
  t284 = Sin(var1[5]);
  t922 = t821*t774;
  t926 = -1.*t294*t874;
  t981 = t922 + t926;
  t1068 = Cos(var1[6]);
  t896 = -1.*t284*t892;
  t984 = t913*t981;
  t1025 = t896 + t984;
  t91 = Sin(var1[6]);
  t1070 = t913*t892;
  t1114 = t284*t981;
  t1142 = t1070 + t1114;
  t1306 = t433*t592*t487;
  t1322 = t419*t607;
  t1334 = t1306 + t1322;
  t1341 = t419*t433;
  t1350 = -1.*t592*t487*t607;
  t1371 = t1341 + t1350;
  t1340 = -1.*t394*t1334;
  t1389 = t711*t1371;
  t1420 = t1340 + t1389;
  t1444 = t711*t1334;
  t1446 = t394*t1371;
  t1447 = t1444 + t1446;
  t1424 = t294*t1420;
  t1471 = t821*t1447;
  t1475 = t1424 + t1471;
  t1566 = t821*t1420;
  t1573 = -1.*t294*t1447;
  t1577 = t1566 + t1573;
  t1493 = -1.*t284*t1475;
  t1642 = t913*t1577;
  t1683 = t1493 + t1642;
  t1727 = t913*t1475;
  t1736 = t284*t1577;
  t1747 = t1727 + t1736;
  t1057 = t91*t1025;
  t1164 = t1068*t1142;
  t1176 = t1057 + t1164;
  t1197 = t1068*t1025;
  t1241 = -1.*t91*t1142;
  t1257 = t1197 + t1241;
  t1719 = t91*t1683;
  t1803 = t1068*t1747;
  t1814 = t1719 + t1803;
  t1842 = t1068*t1683;
  t1866 = -1.*t91*t1747;
  t1875 = t1842 + t1866;
  t2017 = 0.642788*t1814;
  t2024 = 0.766044*t1875;
  t2032 = t2017 + t2024;
  t2059 = Cos(var1[1]);
  t2084 = -1.*t2059*t433*t394;
  t2105 = -1.*t711*t2059*t607;
  t2109 = t2084 + t2105;
  t2116 = t711*t2059*t433;
  t2133 = -1.*t2059*t394*t607;
  t2148 = t2116 + t2133;
  t2114 = t294*t2109;
  t2156 = t821*t2148;
  t2167 = t2114 + t2156;
  t2200 = t821*t2109;
  t2206 = -1.*t294*t2148;
  t2222 = t2200 + t2206;
  t2172 = -1.*t284*t2167;
  t2230 = t913*t2222;
  t2233 = t2172 + t2230;
  t2250 = t913*t2167;
  t2251 = t284*t2222;
  t2274 = t2250 + t2251;
  t1930 = -0.766044*t1176;
  t1961 = 0.642788*t1257;
  t2003 = t1930 + t1961;
  t1818 = -0.766044*t1814;
  t1879 = 0.642788*t1875;
  t1897 = t1818 + t1879;
  t2234 = t91*t2233;
  t2279 = t1068*t2274;
  t2342 = t2234 + t2279;
  t2358 = t1068*t2233;
  t2374 = -1.*t91*t2274;
  t2382 = t2358 + t2374;
  t1191 = 0.642788*t1176;
  t1270 = 0.766044*t1257;
  t1297 = t1191 + t1270;
  t2468 = 0.642788*t2342;
  t2469 = 0.766044*t2382;
  t2484 = t2468 + t2469;
  t2350 = -0.766044*t2342;
  t2415 = 0.642788*t2382;
  t2416 = t2350 + t2415;
  t2421 = t419*t2059*t2416;
  t2428 = t487*t2003;
  t2434 = t2421 + t2428;
  t2452 = -1.*t2032*t2434;
  t2519 = t419*t2059*t2484;
  t2540 = t487*t1297;
  t2551 = t2519 + t2540;
  t2556 = t1897*t2551;
  t2560 = t2484*t2003;
  t2569 = -1.*t2416*t1297;
  t2572 = t2560 + t2569;
  t2574 = -1.*t2059*t592*t2572;
  t2581 = 0. + t2452 + t2556 + t2574;
  t2594 = 1/t2581;
  t2691 = -1.*t419;
  t2694 = 0. + t2691;
  t2726 = 0. + t592;
  t2711 = 0. + t2560 + t2569;
  t2750 = -1.*t2484*t1897;
  t2773 = t2416*t2032;
  t2777 = 0. + t2750 + t2773;
  t1923 = t1297*t1897;
  t2050 = -1.*t2003*t2032;
  t2058 = 0. + t1923 + t2050;
  t2938 = t2059*t592;
  t2941 = 0. + t2938;
  t2811 = -1.*t419*t2059*t2416;
  t2812 = -1.*t487*t2003;
  t2823 = 0. + t2811 + t2812;
  t2974 = -1.*t487;
  t2977 = 0. + t2974;
  t2623 = -1.*t2059*t592*t2003;
  t2629 = t419*t2059*t1897;
  t2640 = 0. + t2623 + t2629;
  t2956 = t419*t2059;
  t2969 = 0. + t2956;
  t2836 = t2059*t592*t2416;
  t2844 = t487*t1897;
  t2848 = 0. + t2836 + t2844;
  t2873 = 0. + t2519 + t2540;
  t2674 = t2059*t592*t1297;
  t2676 = -1.*t419*t2059*t2032;
  t2679 = 0. + t2674 + t2676;
  t2876 = -1.*t2059*t592*t2484;
  t2883 = -1.*t487*t2032;
  t2888 = 0. + t2876 + t2883;
  t2942 = t2941*t2711*t2594;
  t2973 = t2969*t2777*t2594;
  t2983 = t2977*t2058*t2594;
  t2989 = t2942 + t2973 + t2983;
  t3010 = t2941*t2823*t2594;
  t3019 = t2977*t2640*t2594;
  t3020 = t2969*t2848*t2594;
  t3023 = t3010 + t3019 + t3020;
  t3026 = t2941*t2873*t2594;
  t3032 = t2977*t2679*t2594;
  t3042 = t2969*t2888*t2594;
  t3043 = t3026 + t3032 + t3042;
  t3078 = Cos(var1[7]);
  t3085 = 0. + t3078;
  t3100 = Sin(var1[7]);
  t3102 = -1.*t3100;
  t3123 = 0. + t3102;
  t3212 = Cos(var1[8]);
  t3214 = -1.*t3212*t3100;
  t3218 = 0. + t3214;
  t3254 = Sin(var1[8]);
  t3257 = 0. + t3254;
  t3225 = -1.*t3078*t3212;
  t3230 = 0. + t3225;
  t3221 = t3218*t2711*t2594;
  t3240 = t3230*t2777*t2594;
  t3261 = t3257*t2058*t2594;
  t3269 = t3221 + t3240 + t3261;
  t3292 = t3218*t2823*t2594;
  t3301 = t3257*t2640*t2594;
  t3303 = t3230*t2848*t2594;
  t3309 = t3292 + t3301 + t3303;
  t3335 = t3218*t2873*t2594;
  t3344 = t3257*t2679*t2594;
  t3350 = t3230*t2888*t2594;
  t3356 = t3335 + t3344 + t3350;
  p_output1[0]=0. - 1.*t2058*t2594;
  p_output1[1]=0. - 1.*t2594*t2640;
  p_output1[2]=0. - 1.*t2594*t2679;
  p_output1[3]=0. + t2594*t2694*t2711 + t2594*t2726*t2777;
  p_output1[4]=0. + t2594*t2694*t2823 + t2594*t2726*t2848;
  p_output1[5]=0. + t2594*t2694*t2873 + t2594*t2726*t2888;
  p_output1[6]=t2989;
  p_output1[7]=t3023;
  p_output1[8]=t3043;
  p_output1[9]=t2989;
  p_output1[10]=t3023;
  p_output1[11]=t3043;
  p_output1[12]=t2989;
  p_output1[13]=t3023;
  p_output1[14]=t3043;
  p_output1[15]=t2989;
  p_output1[16]=t3023;
  p_output1[17]=t3043;
  p_output1[18]=t2989;
  p_output1[19]=t3023;
  p_output1[20]=t3043;
  p_output1[21]=0. + t2058*t2594;
  p_output1[22]=0. + t2594*t2640;
  p_output1[23]=0. + t2594*t2679;
  p_output1[24]=0. + t2594*t2711*t3085 + t2594*t2777*t3123;
  p_output1[25]=0. + t2594*t2823*t3085 + t2594*t2848*t3123;
  p_output1[26]=0. + t2594*t2873*t3085 + t2594*t2888*t3123;
  p_output1[27]=t3269;
  p_output1[28]=t3309;
  p_output1[29]=t3356;
  p_output1[30]=t3269;
  p_output1[31]=t3309;
  p_output1[32]=t3356;
  p_output1[33]=t3269;
  p_output1[34]=t3309;
  p_output1[35]=t3356;
  p_output1[36]=t3269;
  p_output1[37]=t3309;
  p_output1[38]=t3356;
  p_output1[39]=t3269;
  p_output1[40]=t3309;
  p_output1[41]=t3356;
}



void Jws_LeftToeBottom_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
