/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:20:43 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeBack_src.h"

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
  double t406;
  double t343;
  double t409;
  double t374;
  double t411;
  double t144;
  double t243;
  double t686;
  double t764;
  double t798;
  double t376;
  double t419;
  double t461;
  double t512;
  double t577;
  double t623;
  double t681;
  double t695;
  double t698;
  double t1212;
  double t1219;
  double t1220;
  double t1227;
  double t1214;
  double t1215;
  double t1216;
  double t1228;
  double t1239;
  double t1217;
  double t1229;
  double t1232;
  double t1204;
  double t1240;
  double t1242;
  double t1243;
  double t1253;
  double t1238;
  double t1245;
  double t1246;
  double t1202;
  double t1312;
  double t1313;
  double t1315;
  double t1451;
  double t1252;
  double t1347;
  double t1376;
  double t1201;
  double t1466;
  double t1486;
  double t1544;
  double t1564;
  double t1440;
  double t1554;
  double t1556;
  double t1198;
  double t1579;
  double t1687;
  double t1737;
  double t872;
  double t946;
  double t969;
  double t980;
  double t981;
  double t1065;
  double t1091;
  double t1109;
  double t1157;
  double t1878;
  double t1906;
  double t1933;
  double t1830;
  double t1854;
  double t1856;
  double t1875;
  double t1971;
  double t1988;
  double t2051;
  double t2066;
  double t2074;
  double t2030;
  double t2077;
  double t2080;
  double t2097;
  double t2105;
  double t2113;
  double t2093;
  double t2116;
  double t2120;
  double t2128;
  double t2130;
  double t2132;
  double t2123;
  double t2135;
  double t2136;
  double t2140;
  double t2152;
  double t2154;
  double t1174;
  double t1176;
  double t1186;
  double t2242;
  double t2254;
  double t2256;
  double t2175;
  double t2176;
  double t2204;
  double t2214;
  double t2302;
  double t2304;
  double t2334;
  double t2349;
  double t2352;
  double t2308;
  double t2353;
  double t2359;
  double t2401;
  double t2454;
  double t2457;
  double t2384;
  double t2458;
  double t2468;
  double t2485;
  double t2502;
  double t2503;
  double t2471;
  double t2510;
  double t2513;
  double t2518;
  double t2523;
  double t2543;
  double t1557;
  double t1752;
  double t1753;
  double t1764;
  double t1773;
  double t1789;
  double t2138;
  double t2155;
  double t2159;
  double t2162;
  double t2163;
  double t2165;
  double t2514;
  double t2549;
  double t2560;
  double t2569;
  double t2574;
  double t2576;
  double t2859;
  double t2871;
  double t3107;
  double t3129;
  double t3273;
  double t3304;
  double t3416;
  double t3420;
  double t3487;
  double t3500;
  double t3622;
  double t3632;
  double t2761;
  double t2766;
  double t2769;
  double t2775;
  double t2825;
  double t2841;
  double t2890;
  double t2920;
  double t2960;
  double t2998;
  double t2999;
  double t3024;
  double t3133;
  double t3138;
  double t3152;
  double t3245;
  double t3248;
  double t3255;
  double t3352;
  double t3366;
  double t3367;
  double t3396;
  double t3397;
  double t3398;
  double t3426;
  double t3434;
  double t3454;
  double t3469;
  double t3471;
  double t3474;
  double t3505;
  double t3516;
  double t3520;
  double t3574;
  double t3579;
  double t3595;
  double t3648;
  double t3677;
  double t3685;
  double t3720;
  double t3783;
  double t3854;
  t406 = Cos(var1[3]);
  t343 = Cos(var1[5]);
  t409 = Sin(var1[4]);
  t374 = Sin(var1[3]);
  t411 = Sin(var1[5]);
  t144 = Cos(var1[7]);
  t243 = Cos(var1[6]);
  t686 = Sin(var1[6]);
  t764 = Cos(var1[4]);
  t798 = Sin(var1[7]);
  t376 = -1.*t343*t374;
  t419 = t406*t409*t411;
  t461 = t376 + t419;
  t512 = t243*t461;
  t577 = t406*t343*t409;
  t623 = t374*t411;
  t681 = t577 + t623;
  t695 = t681*t686;
  t698 = t512 + t695;
  t1212 = Cos(var1[8]);
  t1219 = t243*t681;
  t1220 = -1.*t461*t686;
  t1227 = t1219 + t1220;
  t1214 = t406*t764*t144;
  t1215 = t698*t798;
  t1216 = t1214 + t1215;
  t1228 = Sin(var1[8]);
  t1239 = Cos(var1[9]);
  t1217 = t1212*t1216;
  t1229 = t1227*t1228;
  t1232 = t1217 + t1229;
  t1204 = Sin(var1[9]);
  t1240 = t1212*t1227;
  t1242 = -1.*t1216*t1228;
  t1243 = t1240 + t1242;
  t1253 = Cos(var1[10]);
  t1238 = -1.*t1204*t1232;
  t1245 = t1239*t1243;
  t1246 = t1238 + t1245;
  t1202 = Sin(var1[10]);
  t1312 = t1239*t1232;
  t1313 = t1204*t1243;
  t1315 = t1312 + t1313;
  t1451 = Cos(var1[11]);
  t1252 = t1202*t1246;
  t1347 = t1253*t1315;
  t1376 = t1252 + t1347;
  t1201 = Sin(var1[11]);
  t1466 = t1253*t1246;
  t1486 = -1.*t1202*t1315;
  t1544 = t1466 + t1486;
  t1564 = Cos(var1[12]);
  t1440 = -1.*t1201*t1376;
  t1554 = t1451*t1544;
  t1556 = t1440 + t1554;
  t1198 = Sin(var1[12]);
  t1579 = t1451*t1376;
  t1687 = t1201*t1544;
  t1737 = t1579 + t1687;
  t872 = t406*t343;
  t946 = t374*t409*t411;
  t969 = t872 + t946;
  t980 = t243*t969;
  t981 = t343*t374*t409;
  t1065 = -1.*t406*t411;
  t1091 = t981 + t1065;
  t1109 = t1091*t686;
  t1157 = t980 + t1109;
  t1878 = t243*t1091;
  t1906 = -1.*t969*t686;
  t1933 = t1878 + t1906;
  t1830 = t764*t144*t374;
  t1854 = t1157*t798;
  t1856 = t1830 + t1854;
  t1875 = t1212*t1856;
  t1971 = t1933*t1228;
  t1988 = t1875 + t1971;
  t2051 = t1212*t1933;
  t2066 = -1.*t1856*t1228;
  t2074 = t2051 + t2066;
  t2030 = -1.*t1204*t1988;
  t2077 = t1239*t2074;
  t2080 = t2030 + t2077;
  t2097 = t1239*t1988;
  t2105 = t1204*t2074;
  t2113 = t2097 + t2105;
  t2093 = t1202*t2080;
  t2116 = t1253*t2113;
  t2120 = t2093 + t2116;
  t2128 = t1253*t2080;
  t2130 = -1.*t1202*t2113;
  t2132 = t2128 + t2130;
  t2123 = -1.*t1201*t2120;
  t2135 = t1451*t2132;
  t2136 = t2123 + t2135;
  t2140 = t1451*t2120;
  t2152 = t1201*t2132;
  t2154 = t2140 + t2152;
  t1174 = t764*t243*t411;
  t1176 = t764*t343*t686;
  t1186 = t1174 + t1176;
  t2242 = t764*t343*t243;
  t2254 = -1.*t764*t411*t686;
  t2256 = t2242 + t2254;
  t2175 = -1.*t144*t409;
  t2176 = t1186*t798;
  t2204 = t2175 + t2176;
  t2214 = t1212*t2204;
  t2302 = t2256*t1228;
  t2304 = t2214 + t2302;
  t2334 = t1212*t2256;
  t2349 = -1.*t2204*t1228;
  t2352 = t2334 + t2349;
  t2308 = -1.*t1204*t2304;
  t2353 = t1239*t2352;
  t2359 = t2308 + t2353;
  t2401 = t1239*t2304;
  t2454 = t1204*t2352;
  t2457 = t2401 + t2454;
  t2384 = t1202*t2359;
  t2458 = t1253*t2457;
  t2468 = t2384 + t2458;
  t2485 = t1253*t2359;
  t2502 = -1.*t1202*t2457;
  t2503 = t2485 + t2502;
  t2471 = -1.*t1201*t2468;
  t2510 = t1451*t2503;
  t2513 = t2471 + t2510;
  t2518 = t1451*t2468;
  t2523 = t1201*t2503;
  t2543 = t2518 + t2523;
  t1557 = t1198*t1556;
  t1752 = t1564*t1737;
  t1753 = t1557 + t1752;
  t1764 = t1564*t1556;
  t1773 = -1.*t1198*t1737;
  t1789 = t1764 + t1773;
  t2138 = t1198*t2136;
  t2155 = t1564*t2154;
  t2159 = t2138 + t2155;
  t2162 = t1564*t2136;
  t2163 = -1.*t1198*t2154;
  t2165 = t2162 + t2163;
  t2514 = t1198*t2513;
  t2549 = t1564*t2543;
  t2560 = t2514 + t2549;
  t2569 = t1564*t2513;
  t2574 = -1.*t1198*t2543;
  t2576 = t2569 + t2574;
  t2859 = -1.*t144;
  t2871 = 1. + t2859;
  t3107 = -1.*t1212;
  t3129 = 1. + t3107;
  t3273 = -1.*t1239;
  t3304 = 1. + t3273;
  t3416 = -1.*t1253;
  t3420 = 1. + t3416;
  t3487 = -1.*t1451;
  t3500 = 1. + t3487;
  t3622 = -1.*t1564;
  t3632 = 1. + t3622;
  t2761 = -1.*t243;
  t2766 = 1. + t2761;
  t2769 = 0.135*t2766;
  t2775 = 0. + t2769;
  t2825 = -0.135*t686;
  t2841 = 0. + t2825;
  t2890 = 0.135*t2871;
  t2920 = 0.049*t798;
  t2960 = 0. + t2890 + t2920;
  t2998 = -0.049*t2871;
  t2999 = 0.135*t798;
  t3024 = 0. + t2998 + t2999;
  t3133 = -0.049*t3129;
  t3138 = -0.09*t1228;
  t3152 = 0. + t3133 + t3138;
  t3245 = -0.09*t3129;
  t3248 = 0.049*t1228;
  t3255 = 0. + t3245 + t3248;
  t3352 = -0.049*t3304;
  t3366 = -0.21*t1204;
  t3367 = 0. + t3352 + t3366;
  t3396 = -0.21*t3304;
  t3397 = 0.049*t1204;
  t3398 = 0. + t3396 + t3397;
  t3426 = -0.2707*t3420;
  t3434 = 0.0016*t1202;
  t3454 = 0. + t3426 + t3434;
  t3469 = -0.0016*t3420;
  t3471 = -0.2707*t1202;
  t3474 = 0. + t3469 + t3471;
  t3505 = 0.0184*t3500;
  t3516 = -0.7055*t1201;
  t3520 = 0. + t3505 + t3516;
  t3574 = -0.7055*t3500;
  t3579 = -0.0184*t1201;
  t3595 = 0. + t3574 + t3579;
  t3648 = -1.1135*t3632;
  t3677 = 0.0216*t1198;
  t3685 = 0. + t3648 + t3677;
  t3720 = -0.0216*t3632;
  t3783 = -1.1135*t1198;
  t3854 = 0. + t3720 + t3783;
  p_output1[0]=-1.*t144*t698 + t406*t764*t798;
  p_output1[1]=-1.*t1157*t144 + t374*t764*t798;
  p_output1[2]=-1.*t1186*t144 - 1.*t409*t798;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1753 + 0.766044*t1789;
  p_output1[5]=0.642788*t2159 + 0.766044*t2165;
  p_output1[6]=0.642788*t2560 + 0.766044*t2576;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1753 + 0.642788*t1789;
  p_output1[9]=-0.766044*t2159 + 0.642788*t2165;
  p_output1[10]=-0.766044*t2560 + 0.642788*t2576;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.027251*t1753 - 1.200144*t1789 + t1216*t3152 + t1227*t3255 + t1232*t3367 + t1243*t3398 + t1246*t3454 + t1315*t3474 + t1376*t3520 + t1544*t3595 + t1556*t3685 + t1737*t3854 + t2775*t461 + t2841*t681 + t2960*t698 + t3024*t406*t764 + 0.1305*(t144*t698 - 1.*t406*t764*t798) + var1[0];
  p_output1[13]=0. - 0.027251*t2159 - 1.200144*t2165 + t1091*t2841 + t1157*t2960 + t1856*t3152 + t1933*t3255 + t1988*t3367 + t2074*t3398 + t2080*t3454 + t2113*t3474 + t2120*t3520 + t2132*t3595 + t2136*t3685 + t2154*t3854 + t3024*t374*t764 + 0.1305*(t1157*t144 - 1.*t374*t764*t798) + t2775*t969 + var1[1];
  p_output1[14]=0. - 0.027251*t2560 - 1.200144*t2576 + t1186*t2960 + t2204*t3152 + t2256*t3255 + t2304*t3367 + t2352*t3398 + t2359*t3454 + t2457*t3474 + t2468*t3520 + t2503*t3595 + t2513*t3685 + t2543*t3854 - 1.*t3024*t409 + t2841*t343*t764 + t2775*t411*t764 + 0.1305*(t1186*t144 + t409*t798) + var1[2];
  p_output1[15]=1.;
}



void H_LeftToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
