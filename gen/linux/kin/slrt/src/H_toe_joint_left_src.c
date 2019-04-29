/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:38 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_toe_joint_left_src.h"

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
  double t449;
  double t584;
  double t622;
  double t603;
  double t634;
  double t497;
  double t750;
  double t789;
  double t790;
  double t609;
  double t660;
  double t711;
  double t794;
  double t433;
  double t918;
  double t938;
  double t954;
  double t451;
  double t476;
  double t493;
  double t744;
  double t802;
  double t809;
  double t823;
  double t828;
  double t864;
  double t984;
  double t1065;
  double t902;
  double t1030;
  double t1031;
  double t384;
  double t1069;
  double t1083;
  double t1086;
  double t1182;
  double t1039;
  double t1140;
  double t1161;
  double t295;
  double t1185;
  double t1195;
  double t1199;
  double t1259;
  double t1164;
  double t1216;
  double t1227;
  double t160;
  double t1273;
  double t1279;
  double t1285;
  double t57;
  double t1557;
  double t1564;
  double t1594;
  double t1496;
  double t1497;
  double t1538;
  double t1692;
  double t1711;
  double t1713;
  double t1493;
  double t1548;
  double t1598;
  double t1611;
  double t1619;
  double t1624;
  double t1626;
  double t1730;
  double t1743;
  double t1756;
  double t1767;
  double t1775;
  double t1754;
  double t1804;
  double t1837;
  double t1869;
  double t1876;
  double t1878;
  double t1340;
  double t1848;
  double t1913;
  double t1926;
  double t1936;
  double t1938;
  double t1957;
  double t2160;
  double t2172;
  double t2177;
  double t2044;
  double t2051;
  double t2058;
  double t2062;
  double t2063;
  double t2075;
  double t2085;
  double t2202;
  double t2214;
  double t2228;
  double t2243;
  double t2254;
  double t2219;
  double t2265;
  double t2282;
  double t2319;
  double t2334;
  double t2338;
  double t2298;
  double t2339;
  double t2371;
  double t2454;
  double t2485;
  double t2488;
  double t1238;
  double t1287;
  double t1321;
  double t1342;
  double t1379;
  double t1383;
  double t1931;
  double t1963;
  double t1972;
  double t2012;
  double t2017;
  double t2020;
  double t2421;
  double t2496;
  double t2502;
  double t2565;
  double t2584;
  double t2587;
  double t2842;
  double t2843;
  double t2935;
  double t2939;
  double t3007;
  double t3011;
  double t3095;
  double t3117;
  double t3202;
  double t3217;
  double t3281;
  double t3287;
  double t2609;
  double t2613;
  double t2622;
  double t2792;
  double t2798;
  double t2799;
  double t2806;
  double t2822;
  double t2834;
  double t2845;
  double t2865;
  double t2872;
  double t2898;
  double t2902;
  double t2908;
  double t2956;
  double t2959;
  double t2964;
  double t2970;
  double t2983;
  double t2985;
  double t3020;
  double t3026;
  double t3028;
  double t3037;
  double t3040;
  double t3065;
  double t3130;
  double t3135;
  double t3150;
  double t3160;
  double t3167;
  double t3176;
  double t3219;
  double t3236;
  double t3243;
  double t3253;
  double t3264;
  double t3269;
  double t3300;
  double t3313;
  double t3314;
  double t3328;
  double t3329;
  double t3338;
  double t2623;
  double t2625;
  double t2648;
  double t2655;
  double t2662;
  double t2676;
  t449 = Cos(var1[3]);
  t584 = Cos(var1[5]);
  t622 = Sin(var1[4]);
  t603 = Sin(var1[3]);
  t634 = Sin(var1[5]);
  t497 = Cos(var1[6]);
  t750 = t449*t584*t622;
  t789 = t603*t634;
  t790 = t750 + t789;
  t609 = -1.*t584*t603;
  t660 = t449*t622*t634;
  t711 = t609 + t660;
  t794 = Sin(var1[6]);
  t433 = Cos(var1[8]);
  t918 = t497*t790;
  t938 = -1.*t711*t794;
  t954 = t918 + t938;
  t451 = Cos(var1[4]);
  t476 = Cos(var1[7]);
  t493 = t449*t451*t476;
  t744 = t497*t711;
  t802 = t790*t794;
  t809 = t744 + t802;
  t823 = Sin(var1[7]);
  t828 = t809*t823;
  t864 = t493 + t828;
  t984 = Sin(var1[8]);
  t1065 = Cos(var1[9]);
  t902 = t433*t864;
  t1030 = t954*t984;
  t1031 = t902 + t1030;
  t384 = Sin(var1[9]);
  t1069 = t433*t954;
  t1083 = -1.*t864*t984;
  t1086 = t1069 + t1083;
  t1182 = Cos(var1[10]);
  t1039 = -1.*t384*t1031;
  t1140 = t1065*t1086;
  t1161 = t1039 + t1140;
  t295 = Sin(var1[10]);
  t1185 = t1065*t1031;
  t1195 = t384*t1086;
  t1199 = t1185 + t1195;
  t1259 = Cos(var1[11]);
  t1164 = t295*t1161;
  t1216 = t1182*t1199;
  t1227 = t1164 + t1216;
  t160 = Sin(var1[11]);
  t1273 = t1182*t1161;
  t1279 = -1.*t295*t1199;
  t1285 = t1273 + t1279;
  t57 = Cos(var1[12]);
  t1557 = t584*t603*t622;
  t1564 = -1.*t449*t634;
  t1594 = t1557 + t1564;
  t1496 = t449*t584;
  t1497 = t603*t622*t634;
  t1538 = t1496 + t1497;
  t1692 = t497*t1594;
  t1711 = -1.*t1538*t794;
  t1713 = t1692 + t1711;
  t1493 = t451*t476*t603;
  t1548 = t497*t1538;
  t1598 = t1594*t794;
  t1611 = t1548 + t1598;
  t1619 = t1611*t823;
  t1624 = t1493 + t1619;
  t1626 = t433*t1624;
  t1730 = t1713*t984;
  t1743 = t1626 + t1730;
  t1756 = t433*t1713;
  t1767 = -1.*t1624*t984;
  t1775 = t1756 + t1767;
  t1754 = -1.*t384*t1743;
  t1804 = t1065*t1775;
  t1837 = t1754 + t1804;
  t1869 = t1065*t1743;
  t1876 = t384*t1775;
  t1878 = t1869 + t1876;
  t1340 = Sin(var1[12]);
  t1848 = t295*t1837;
  t1913 = t1182*t1878;
  t1926 = t1848 + t1913;
  t1936 = t1182*t1837;
  t1938 = -1.*t295*t1878;
  t1957 = t1936 + t1938;
  t2160 = t451*t584*t497;
  t2172 = -1.*t451*t634*t794;
  t2177 = t2160 + t2172;
  t2044 = -1.*t476*t622;
  t2051 = t451*t497*t634;
  t2058 = t451*t584*t794;
  t2062 = t2051 + t2058;
  t2063 = t2062*t823;
  t2075 = t2044 + t2063;
  t2085 = t433*t2075;
  t2202 = t2177*t984;
  t2214 = t2085 + t2202;
  t2228 = t433*t2177;
  t2243 = -1.*t2075*t984;
  t2254 = t2228 + t2243;
  t2219 = -1.*t384*t2214;
  t2265 = t1065*t2254;
  t2282 = t2219 + t2265;
  t2319 = t1065*t2214;
  t2334 = t384*t2254;
  t2338 = t2319 + t2334;
  t2298 = t295*t2282;
  t2339 = t1182*t2338;
  t2371 = t2298 + t2339;
  t2454 = t1182*t2282;
  t2485 = -1.*t295*t2338;
  t2488 = t2454 + t2485;
  t1238 = -1.*t160*t1227;
  t1287 = t1259*t1285;
  t1321 = t1238 + t1287;
  t1342 = t1259*t1227;
  t1379 = t160*t1285;
  t1383 = t1342 + t1379;
  t1931 = -1.*t160*t1926;
  t1963 = t1259*t1957;
  t1972 = t1931 + t1963;
  t2012 = t1259*t1926;
  t2017 = t160*t1957;
  t2020 = t2012 + t2017;
  t2421 = -1.*t160*t2371;
  t2496 = t1259*t2488;
  t2502 = t2421 + t2496;
  t2565 = t1259*t2371;
  t2584 = t160*t2488;
  t2587 = t2565 + t2584;
  t2842 = -1.*t476;
  t2843 = 1. + t2842;
  t2935 = -1.*t433;
  t2939 = 1. + t2935;
  t3007 = -1.*t1065;
  t3011 = 1. + t3007;
  t3095 = -1.*t1182;
  t3117 = 1. + t3095;
  t3202 = -1.*t1259;
  t3217 = 1. + t3202;
  t3281 = -1.*t57;
  t3287 = 1. + t3281;
  t2609 = t1340*t1321;
  t2613 = t57*t1383;
  t2622 = t2609 + t2613;
  t2792 = -1.*t497;
  t2798 = 1. + t2792;
  t2799 = 0.135*t2798;
  t2806 = 0. + t2799;
  t2822 = -0.135*t794;
  t2834 = 0. + t2822;
  t2845 = 0.135*t2843;
  t2865 = 0.049*t823;
  t2872 = 0. + t2845 + t2865;
  t2898 = -0.049*t2843;
  t2902 = 0.135*t823;
  t2908 = 0. + t2898 + t2902;
  t2956 = -0.049*t2939;
  t2959 = -0.09*t984;
  t2964 = 0. + t2956 + t2959;
  t2970 = -0.09*t2939;
  t2983 = 0.049*t984;
  t2985 = 0. + t2970 + t2983;
  t3020 = -0.049*t3011;
  t3026 = -0.21*t384;
  t3028 = 0. + t3020 + t3026;
  t3037 = -0.21*t3011;
  t3040 = 0.049*t384;
  t3065 = 0. + t3037 + t3040;
  t3130 = -0.2707*t3117;
  t3135 = 0.0016*t295;
  t3150 = 0. + t3130 + t3135;
  t3160 = -0.0016*t3117;
  t3167 = -0.2707*t295;
  t3176 = 0. + t3160 + t3167;
  t3219 = 0.0184*t3217;
  t3236 = -0.7055*t160;
  t3243 = 0. + t3219 + t3236;
  t3253 = -0.7055*t3217;
  t3264 = -0.0184*t160;
  t3269 = 0. + t3253 + t3264;
  t3300 = -1.1135*t3287;
  t3313 = 0.0216*t1340;
  t3314 = 0. + t3300 + t3313;
  t3328 = -0.0216*t3287;
  t3329 = -1.1135*t1340;
  t3338 = 0. + t3328 + t3329;
  t2623 = t1340*t1972;
  t2625 = t57*t2020;
  t2648 = t2623 + t2625;
  t2655 = t1340*t2502;
  t2662 = t57*t2587;
  t2676 = t2655 + t2662;
  p_output1[0]=t1340*t1383 - 1.*t1321*t57;
  p_output1[1]=t1340*t2020 - 1.*t1972*t57;
  p_output1[2]=t1340*t2587 - 1.*t2502*t57;
  p_output1[3]=0.;
  p_output1[4]=t2622;
  p_output1[5]=t2648;
  p_output1[6]=t2676;
  p_output1[7]=0.;
  p_output1[8]=-1.*t476*t809 + t449*t451*t823;
  p_output1[9]=-1.*t1611*t476 + t451*t603*t823;
  p_output1[10]=-1.*t2062*t476 - 1.*t622*t823;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.0216*t2622 + t1031*t3028 + t1086*t3065 + t1161*t3150 + t1199*t3176 + t1227*t3243 + t1285*t3269 + t1321*t3314 + t1383*t3338 + t2908*t449*t451 - 1.1135*(-1.*t1340*t1383 + t1321*t57) + t2806*t711 + t2834*t790 + t2872*t809 + 0.1305*(t476*t809 - 1.*t449*t451*t823) + t2964*t864 + t2985*t954 + var1[0];
  p_output1[13]=0. - 0.0216*t2648 + t1538*t2806 + t1594*t2834 + t1611*t2872 + t1624*t2964 + t1713*t2985 + t1743*t3028 + t1775*t3065 + t1837*t3150 + t1878*t3176 + t1926*t3243 + t1957*t3269 + t1972*t3314 + t2020*t3338 - 1.1135*(-1.*t1340*t2020 + t1972*t57) + t2908*t451*t603 + 0.1305*(t1611*t476 - 1.*t451*t603*t823) + var1[1];
  p_output1[14]=0. - 0.0216*t2676 + t2062*t2872 + t2075*t2964 + t2177*t2985 + t2214*t3028 + t2254*t3065 + t2282*t3150 + t2338*t3176 + t2371*t3243 + t2488*t3269 + t2502*t3314 + t2587*t3338 - 1.1135*(-1.*t1340*t2587 + t2502*t57) + t2834*t451*t584 - 1.*t2908*t622 + t2806*t451*t634 + 0.1305*(t2062*t476 + t622*t823) + var1[2];
  p_output1[15]=1.;
}



void H_toe_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
