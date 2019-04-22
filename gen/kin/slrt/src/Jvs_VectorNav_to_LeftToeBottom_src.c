/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:11:26 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jvs_VectorNav_to_LeftToeBottom_src.h"

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
  double t4;
  double t706;
  double t888;
  double t901;
  double t1544;
  double t135;
  double t329;
  double t543;
  double t937;
  double t1800;
  double t1806;
  double t1836;
  double t1905;
  double t1958;
  double t2052;
  double t1307;
  double t1708;
  double t1763;
  double t1770;
  double t2311;
  double t2961;
  double t2998;
  double t3017;
  double t3069;
  double t2061;
  double t3063;
  double t3080;
  double t3206;
  double t3285;
  double t3296;
  double t3325;
  double t2481;
  double t2536;
  double t2546;
  double t2707;
  double t2727;
  double t2549;
  double t2556;
  double t2624;
  double t2638;
  double t2733;
  double t2764;
  double t2780;
  double t2833;
  double t2851;
  double t4572;
  double t4549;
  double t3442;
  double t3496;
  double t3860;
  double t3893;
  double t3904;
  double t4745;
  double t4755;
  double t3911;
  double t3916;
  double t4017;
  double t3210;
  double t3342;
  double t4778;
  double t4780;
  double t4802;
  double t4317;
  double t4338;
  double t4380;
  double t4810;
  double t4823;
  double t4855;
  double t4419;
  double t4443;
  double t4486;
  double t3660;
  double t3735;
  double t3799;
  double t4167;
  double t4217;
  double t4224;
  double t4568;
  double t4577;
  double t4599;
  double t4654;
  double t4693;
  double t4705;
  double t5232;
  double t5228;
  double t4808;
  double t4857;
  double t4971;
  double t4974;
  double t4989;
  double t5267;
  double t5269;
  double t5025;
  double t5031;
  double t5045;
  double t4899;
  double t4905;
  double t5273;
  double t5279;
  double t5280;
  double t5164;
  double t5172;
  double t5178;
  double t5290;
  double t5294;
  double t5295;
  double t5191;
  double t5192;
  double t5204;
  double t4953;
  double t4954;
  double t5051;
  double t5053;
  double t5077;
  double t5088;
  double t5107;
  double t5132;
  double t5230;
  double t5234;
  double t5244;
  double t5257;
  double t5259;
  double t5261;
  double t5462;
  double t5459;
  double t5284;
  double t5298;
  double t5355;
  double t5365;
  double t5367;
  double t5494;
  double t5496;
  double t5376;
  double t5381;
  double t5390;
  double t5325;
  double t5326;
  double t5498;
  double t5501;
  double t5503;
  double t5432;
  double t5433;
  double t5434;
  double t5509;
  double t5511;
  double t5529;
  double t5438;
  double t5440;
  double t5452;
  double t5340;
  double t5345;
  double t5400;
  double t5403;
  double t5416;
  double t5419;
  double t5428;
  double t5429;
  t4 = Cos(var1[0]);
  t706 = Sin(var1[0]);
  t888 = -1.*t706;
  t901 = 0. + t888;
  t1544 = Cos(var1[1]);
  t135 = -1.*t4;
  t329 = 1. + t135;
  t543 = 0.135*t329;
  t937 = 0.135*t706;
  t1800 = -1.*t1544;
  t1806 = 1. + t1800;
  t1836 = 0.135*t1806;
  t1905 = Sin(var1[1]);
  t1958 = 0.049*t1905;
  t2052 = 0. + t1836 + t1958;
  t1307 = 0.049*t4;
  t1708 = -1.*t4*t1544;
  t1763 = 0. + t1708;
  t1770 = -0.07996*t1763;
  t2311 = -1.*t706*t2052;
  t2961 = Cos(var1[2]);
  t2998 = -1.*t2961;
  t3017 = 1. + t2998;
  t3069 = Sin(var1[2]);
  t2061 = t4*t2052;
  t3063 = -0.049*t3017;
  t3080 = -0.09*t3069;
  t3206 = 0. + t3063 + t3080;
  t3285 = -0.09*t3017;
  t3296 = 0.049*t3069;
  t3325 = 0. + t3285 + t3296;
  t2481 = -1.*t1544*t706;
  t2536 = 0. + t2481;
  t2546 = 0.03155*t2536;
  t2707 = 0. + t1905;
  t2727 = 0.07996*t2707;
  t2549 = 0.049*t1806;
  t2556 = -0.135*t1905;
  t2624 = -0.135*t706;
  t2638 = t706*t2052;
  t2733 = -0.03155*t1763;
  t2764 = -0.049*t1806;
  t2780 = 0.135*t1905;
  t2833 = -0.135*t329;
  t2851 = -1.*t4*t2052;
  t4572 = Cos(var1[3]);
  t4549 = Sin(var1[3]);
  t3442 = t4*t1905*t3206;
  t3496 = -1.*t706*t3325;
  t3860 = t4*t2961*t1905;
  t3893 = -1.*t706*t3069;
  t3904 = t3860 + t3893;
  t4745 = -1.*t4572;
  t4755 = 1. + t4745;
  t3911 = -1.*t2961*t706;
  t3916 = -1.*t4*t1905*t3069;
  t4017 = t3911 + t3916;
  t3210 = -1.*t706*t1905*t3206;
  t3342 = -1.*t4*t3325;
  t4778 = -0.049*t4755;
  t4780 = -0.21*t4549;
  t4802 = 0. + t4778 + t4780;
  t4317 = t2961*t706*t1905;
  t4338 = t4*t3069;
  t4380 = t4317 + t4338;
  t4810 = -0.21*t4755;
  t4823 = 0.049*t4549;
  t4855 = 0. + t4810 + t4823;
  t4419 = t4*t2961;
  t4443 = -1.*t706*t1905*t3069;
  t4486 = t4419 + t4443;
  t3660 = -1.*t1544*t3206;
  t3735 = t706*t1905*t3206;
  t3799 = t4*t3325;
  t4167 = t1544*t3206;
  t4217 = -1.*t4*t1905*t3206;
  t4224 = t706*t3325;
  t4568 = -1.*t1544*t2961*t4549;
  t4577 = -1.*t4572*t1544*t3069;
  t4599 = t4568 + t4577;
  t4654 = t4572*t1544*t2961;
  t4693 = -1.*t1544*t4549*t3069;
  t4705 = t4654 + t4693;
  t5232 = Cos(var1[4]);
  t5228 = Sin(var1[4]);
  t4808 = t4802*t3904;
  t4857 = t4855*t4017;
  t4971 = -1.*t4549*t3904;
  t4974 = t4572*t4017;
  t4989 = t4971 + t4974;
  t5267 = -1.*t5232;
  t5269 = 1. + t5267;
  t5025 = t4572*t3904;
  t5031 = t4549*t4017;
  t5045 = t5025 + t5031;
  t4899 = -1.*t4802*t4380;
  t4905 = -1.*t4855*t4486;
  t5273 = -0.2707*t5269;
  t5279 = 0.0016*t5228;
  t5280 = 0. + t5273 + t5279;
  t5164 = -1.*t4549*t4380;
  t5172 = t4572*t4486;
  t5178 = t5164 + t5172;
  t5290 = -0.0016*t5269;
  t5294 = -0.2707*t5228;
  t5295 = 0. + t5290 + t5294;
  t5191 = t4572*t4380;
  t5192 = t4549*t4486;
  t5204 = t5191 + t5192;
  t4953 = -1.*t1544*t2961*t4802;
  t4954 = t1544*t4855*t3069;
  t5051 = t4802*t4380;
  t5053 = t4855*t4486;
  t5077 = t1544*t2961*t4802;
  t5088 = -1.*t1544*t4855*t3069;
  t5107 = -1.*t4802*t3904;
  t5132 = -1.*t4855*t4017;
  t5230 = t5228*t4599;
  t5234 = t5232*t4705;
  t5244 = t5230 + t5234;
  t5257 = t5232*t4599;
  t5259 = -1.*t5228*t4705;
  t5261 = t5257 + t5259;
  t5462 = Cos(var1[5]);
  t5459 = Sin(var1[5]);
  t5284 = t5280*t4989;
  t5298 = t5295*t5045;
  t5355 = t5228*t4989;
  t5365 = t5232*t5045;
  t5367 = t5355 + t5365;
  t5494 = -1.*t5462;
  t5496 = 1. + t5494;
  t5376 = t5232*t4989;
  t5381 = -1.*t5228*t5045;
  t5390 = t5376 + t5381;
  t5325 = -1.*t5280*t5178;
  t5326 = -1.*t5295*t5204;
  t5498 = 0.0184*t5496;
  t5501 = -0.7055*t5459;
  t5503 = 0. + t5498 + t5501;
  t5432 = t5228*t5178;
  t5433 = t5232*t5204;
  t5434 = t5432 + t5433;
  t5509 = -0.7055*t5496;
  t5511 = -0.0184*t5459;
  t5529 = 0. + t5509 + t5511;
  t5438 = t5232*t5178;
  t5440 = -1.*t5228*t5204;
  t5452 = t5438 + t5440;
  t5340 = -1.*t5280*t4599;
  t5345 = -1.*t5295*t4705;
  t5400 = t5280*t5178;
  t5403 = t5295*t5204;
  t5416 = t5280*t4599;
  t5419 = t5295*t4705;
  t5428 = -1.*t5280*t4989;
  t5429 = -1.*t5295*t5045;
  p_output1[0]=0.;
  p_output1[1]=0.07996;
  p_output1[2]=-0.135;
  p_output1[3]=0.135 + t4*(0. + t543) - 0.07996*t901 - 1.*t706*(0. + t937);
  p_output1[4]=0. + t1307 + 0.03155*(0. + t4);
  p_output1[5]=0. + 0.049*t706 - 0.03155*t901;
  p_output1[6]=0. - 0.09*t1544 + t1770 - 1.*t1544*(0. + t2061 + t543)*t706 - 1.*t1544*t4*(0. + t2311 + t937);
  p_output1[7]=0. + t2546 + t1905*(0. + t2624 + t2638) + t2727 - 0.09*t1905*t4 - 0.049*t706 - 1.*t1544*(0. + t2549 + t2556)*t706;
  p_output1[8]=0. + t1307 + t2733 + t1905*(0. + t2833 + t2851) - 1.*t1544*(0. + t2764 + t2780)*t4 - 0.09*t1905*t706;
  p_output1[9]=0. + t1770 - 0.21*t1544*t2961 - 0.049*t1544*t3069 - 1.*t1544*(0. + t2061 + t3442 + t3496 + t543)*t706 - 1.*t1544*t4*(0. + t2311 + t3210 + t3342 + t937);
  p_output1[10]=0. + t2546 + t2727 + t1905*(0. + t2624 + t2638 + t3735 + t3799) - 0.21*t3904 + 0.049*t4017 - 1.*t1544*(0. + t2549 + t2556 + t3660)*t706;
  p_output1[11]=0. + t2733 - 1.*t1544*t4*(0. + t2764 + t2780 + t4167) + t1905*(0. + t2833 + t2851 + t4217 + t4224) - 0.21*t4380 + 0.049*t4486;
  p_output1[12]=0. + t1770 + 0.0016*t4599 - 0.2707*t4705 - 1.*t1544*(0. + t2061 + t3442 + t3496 + t4808 + t4857 + t543)*t706 - 1.*t1544*t4*(0. + t2311 + t3210 + t3342 + t4899 + t4905 + t937);
  p_output1[13]=0. + t2546 + t2727 + 0.0016*t4989 - 0.2707*t5045 + t1905*(0. + t2624 + t2638 + t3735 + t3799 + t5051 + t5053) - 1.*t1544*(0. + t2549 + t2556 + t3660 + t4953 + t4954)*t706;
  p_output1[14]=0. + t2733 - 1.*t1544*t4*(0. + t2764 + t2780 + t4167 + t5077 + t5088) + t1905*(0. + t2833 + t2851 + t4217 + t4224 + t5107 + t5132) + 0.0016*t5178 - 0.2707*t5204;
  p_output1[15]=0. + t1770 - 0.7055*t5244 - 0.0184*t5261 - 1.*t1544*(0. + t2061 + t3442 + t3496 + t4808 + t4857 + t5284 + t5298 + t543)*t706 - 1.*t1544*t4*(0. + t2311 + t3210 + t3342 + t4899 + t4905 + t5325 + t5326 + t937);
  p_output1[16]=0. + t2546 + t2727 - 0.7055*t5367 - 0.0184*t5390 + t1905*(0. + t2624 + t2638 + t3735 + t3799 + t5051 + t5053 + t5400 + t5403) - 1.*t1544*(0. + t2549 + t2556 + t3660 + t4953 + t4954 + t5340 + t5345)*t706;
  p_output1[17]=0. + t2733 - 1.*t1544*t4*(0. + t2764 + t2780 + t4167 + t5077 + t5088 + t5416 + t5419) + t1905*(0. + t2833 + t2851 + t4217 + t4224 + t5107 + t5132 + t5428 + t5429) - 0.7055*t5434 - 0.0184*t5452;
  p_output1[18]=0. + t1770 - 1.1135*(t5261*t5459 + t5244*t5462) + 0.0216*(-1.*t5244*t5459 + t5261*t5462) - 1.*t1544*(0. + t2061 + t3442 + t3496 + t4808 + t4857 + t5284 + t5298 + t543 + t5367*t5503 + t5390*t5529)*t706 - 1.*t1544*t4*(0. + t2311 + t3210 + t3342 + t4899 + t4905 + t5325 + t5326 - 1.*t5434*t5503 - 1.*t5452*t5529 + t937);
  p_output1[19]=0. + t2546 + t2727 - 1.1135*(t5390*t5459 + t5367*t5462) + 0.0216*(-1.*t5367*t5459 + t5390*t5462) + t1905*(0. + t2624 + t2638 + t3735 + t3799 + t5051 + t5053 + t5400 + t5403 + t5434*t5503 + t5452*t5529) - 1.*t1544*(0. + t2549 + t2556 + t3660 + t4953 + t4954 + t5340 + t5345 - 1.*t5244*t5503 - 1.*t5261*t5529)*t706;
  p_output1[20]=0. + t2733 - 1.1135*(t5452*t5459 + t5434*t5462) + 0.0216*(-1.*t5434*t5459 + t5452*t5462) - 1.*t1544*t4*(0. + t2764 + t2780 + t4167 + t5077 + t5088 + t5416 + t5419 + t5244*t5503 + t5261*t5529) + t1905*(0. + t2833 + t2851 + t4217 + t4224 + t5107 + t5132 + t5428 + t5429 - 1.*t5367*t5503 - 1.*t5390*t5529);
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
}



void Jvs_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
