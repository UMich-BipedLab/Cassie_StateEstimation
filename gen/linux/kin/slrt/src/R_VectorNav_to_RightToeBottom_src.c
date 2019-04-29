/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:02:09 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_RightToeBottom_src.h"

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
  double t707;
  double t1298;
  double t1379;
  double t1270;
  double t1424;
  double t1252;
  double t1573;
  double t1591;
  double t1638;
  double t1337;
  double t1462;
  double t1488;
  double t1656;
  double t1212;
  double t1756;
  double t1798;
  double t1813;
  double t1491;
  double t1715;
  double t1740;
  double t1859;
  double t1181;
  double t1968;
  double t1978;
  double t2013;
  double t1750;
  double t1860;
  double t1937;
  double t2033;
  double t557;
  double t324;
  double t966;
  double t2236;
  double t2242;
  double t2246;
  double t2210;
  double t2225;
  double t2227;
  double t2324;
  double t2327;
  double t2359;
  double t2233;
  double t2279;
  double t2299;
  double t2427;
  double t2434;
  double t2476;
  double t2303;
  double t2380;
  double t2410;
  double t2503;
  double t2504;
  double t2505;
  double t2413;
  double t2484;
  double t2491;
  double t2592;
  double t2596;
  double t2598;
  double t2572;
  double t2579;
  double t2580;
  double t2613;
  double t2615;
  double t2616;
  double t2588;
  double t2603;
  double t2605;
  double t2637;
  double t2641;
  double t2643;
  double t2610;
  double t2617;
  double t2624;
  double t2654;
  double t2668;
  double t2674;
  double t2626;
  double t2647;
  double t2650;
  double t1956;
  double t2056;
  double t2066;
  double t2135;
  double t2160;
  double t2161;
  double t2492;
  double t2524;
  double t2532;
  double t2540;
  double t2542;
  double t2543;
  double t2651;
  double t2679;
  double t2683;
  double t2695;
  double t2697;
  double t2706;
  t707 = Cos(var1[8]);
  t1298 = Cos(var1[10]);
  t1379 = Sin(var1[9]);
  t1270 = Cos(var1[9]);
  t1424 = Sin(var1[10]);
  t1252 = Cos(var1[11]);
  t1573 = -1.*t707*t1298*t1379;
  t1591 = -1.*t707*t1270*t1424;
  t1638 = t1573 + t1591;
  t1337 = t707*t1270*t1298;
  t1462 = -1.*t707*t1379*t1424;
  t1488 = t1337 + t1462;
  t1656 = Sin(var1[11]);
  t1212 = Cos(var1[12]);
  t1756 = t1252*t1638;
  t1798 = -1.*t1488*t1656;
  t1813 = t1756 + t1798;
  t1491 = t1252*t1488;
  t1715 = t1638*t1656;
  t1740 = t1491 + t1715;
  t1859 = Sin(var1[12]);
  t1181 = Cos(var1[13]);
  t1968 = t1212*t1813;
  t1978 = -1.*t1740*t1859;
  t2013 = t1968 + t1978;
  t1750 = t1212*t1740;
  t1860 = t1813*t1859;
  t1937 = t1750 + t1860;
  t2033 = Sin(var1[13]);
  t557 = Cos(var1[7]);
  t324 = Sin(var1[8]);
  t966 = Sin(var1[7]);
  t2236 = -1.*t1270*t966;
  t2242 = -1.*t557*t324*t1379;
  t2246 = t2236 + t2242;
  t2210 = t557*t1270*t324;
  t2225 = -1.*t966*t1379;
  t2227 = t2210 + t2225;
  t2324 = t1298*t2246;
  t2327 = -1.*t2227*t1424;
  t2359 = t2324 + t2327;
  t2233 = t1298*t2227;
  t2279 = t2246*t1424;
  t2299 = t2233 + t2279;
  t2427 = t1252*t2359;
  t2434 = -1.*t2299*t1656;
  t2476 = t2427 + t2434;
  t2303 = t1252*t2299;
  t2380 = t2359*t1656;
  t2410 = t2303 + t2380;
  t2503 = t1212*t2476;
  t2504 = -1.*t2410*t1859;
  t2505 = t2503 + t2504;
  t2413 = t1212*t2410;
  t2484 = t2476*t1859;
  t2491 = t2413 + t2484;
  t2592 = t557*t1270;
  t2596 = -1.*t966*t324*t1379;
  t2598 = t2592 + t2596;
  t2572 = t1270*t966*t324;
  t2579 = t557*t1379;
  t2580 = t2572 + t2579;
  t2613 = t1298*t2598;
  t2615 = -1.*t2580*t1424;
  t2616 = t2613 + t2615;
  t2588 = t1298*t2580;
  t2603 = t2598*t1424;
  t2605 = t2588 + t2603;
  t2637 = t1252*t2616;
  t2641 = -1.*t2605*t1656;
  t2643 = t2637 + t2641;
  t2610 = t1252*t2605;
  t2617 = t2616*t1656;
  t2624 = t2610 + t2617;
  t2654 = t1212*t2643;
  t2668 = -1.*t2624*t1859;
  t2674 = t2654 + t2668;
  t2626 = t1212*t2624;
  t2647 = t2643*t1859;
  t2650 = t2626 + t2647;
  t1956 = t1181*t1937;
  t2056 = t2013*t2033;
  t2066 = t1956 + t2056;
  t2135 = t1181*t2013;
  t2160 = -1.*t1937*t2033;
  t2161 = t2135 + t2160;
  t2492 = t1181*t2491;
  t2524 = t2505*t2033;
  t2532 = t2492 + t2524;
  t2540 = t1181*t2505;
  t2542 = -1.*t2491*t2033;
  t2543 = t2540 + t2542;
  t2651 = t1181*t2650;
  t2679 = t2674*t2033;
  t2683 = t2651 + t2679;
  t2695 = t1181*t2674;
  t2697 = -1.*t2650*t2033;
  t2706 = t2695 + t2697;
  p_output1[0]=0. + t324;
  p_output1[1]=0. - 1.*t557*t707;
  p_output1[2]=0. - 1.*t707*t966;
  p_output1[3]=0. + 0.642788*t2066 + 0.766044*t2161;
  p_output1[4]=0. + 0.642788*t2532 + 0.766044*t2543;
  p_output1[5]=0. + 0.642788*t2683 + 0.766044*t2706;
  p_output1[6]=0. - 0.766044*t2066 + 0.642788*t2161;
  p_output1[7]=0. - 0.766044*t2532 + 0.642788*t2543;
  p_output1[8]=0. - 0.766044*t2683 + 0.642788*t2706;
}



void R_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
