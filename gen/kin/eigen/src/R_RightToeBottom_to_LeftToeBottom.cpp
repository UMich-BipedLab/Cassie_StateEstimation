/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:02:44 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottom_to_LeftToeBottom.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t1023;
  double t1326;
  double t1393;
  double t1196;
  double t1397;
  double t715;
  double t1578;
  double t1593;
  double t1598;
  double t1362;
  double t1432;
  double t1473;
  double t1625;
  double t711;
  double t1769;
  double t1809;
  double t1904;
  double t1552;
  double t1646;
  double t1682;
  double t2018;
  double t644;
  double t2118;
  double t2147;
  double t2229;
  double t1728;
  double t2057;
  double t2076;
  double t2284;
  double t2565;
  double t2509;
  double t2525;
  double t2734;
  double t2767;
  double t2802;
  double t2534;
  double t2579;
  double t2646;
  double t2859;
  double t2863;
  double t2884;
  double t2694;
  double t2808;
  double t2844;
  double t3034;
  double t3056;
  double t3138;
  double t2853;
  double t2914;
  double t2946;
  double t3231;
  double t3244;
  double t3336;
  double t3002;
  double t3149;
  double t3203;
  double t2085;
  double t2295;
  double t2364;
  double t2431;
  double t2438;
  double t2439;
  double t3212;
  double t3452;
  double t3464;
  double t3493;
  double t3559;
  double t3609;
  double t3821;
  double t3868;
  double t3880;
  double t3715;
  double t3754;
  double t3807;
  double t4010;
  double t4017;
  double t4060;
  double t3950;
  double t3998;
  double t4005;
  double t4138;
  double t4193;
  double t4281;
  double t4008;
  double t4077;
  double t4114;
  double t4345;
  double t4377;
  double t4379;
  double t4118;
  double t4287;
  double t4310;
  double t4530;
  double t4573;
  double t4642;
  double t4323;
  double t4396;
  double t4461;
  double t3468;
  double t3623;
  double t3627;
  double t2381;
  double t2459;
  double t2464;
  double t4488;
  double t4741;
  double t4752;
  double t4831;
  double t4864;
  double t4906;
  double t4764;
  double t4921;
  double t4949;
  double t5124;
  double t5134;
  double t5141;
  double t580;
  double t5238;
  double t5241;
  double t3918;
  double t4978;
  double t5057;
  double t5064;
  double t5108;
  double t5202;
  double t5217;
  double t5220;
  double t5242;
  double t5245;
  double t5256;
  double t5263;
  double t496;
  double t5447;
  double t5499;
  double t5453;
  double t5471;
  double t5472;
  double t5838;
  double t5826;
  double t5831;
  double t5854;
  double t5875;
  double t5833;
  double t5862;
  double t5868;
  double t5796;
  double t5880;
  double t5883;
  double t5900;
  double t5937;
  double t5870;
  double t5925;
  double t5931;
  double t5786;
  double t5939;
  double t5942;
  double t5953;
  double t5989;
  double t5936;
  double t5959;
  double t5960;
  double t5778;
  double t5994;
  double t5996;
  double t6028;
  double t3655;
  double t3893;
  double t3908;
  double t6102;
  double t6103;
  double t6113;
  double t6125;
  double t6138;
  double t6139;
  double t6115;
  double t6140;
  double t6141;
  double t6148;
  double t6150;
  double t6168;
  double t6147;
  double t6188;
  double t6189;
  double t6192;
  double t6195;
  double t6197;
  double t6191;
  double t6202;
  double t6204;
  double t6214;
  double t6215;
  double t6219;
  double t5426;
  double t6267;
  double t6269;
  double t6273;
  double t6283;
  double t6284;
  double t6288;
  double t6274;
  double t6293;
  double t6294;
  double t6299;
  double t6312;
  double t6321;
  double t6298;
  double t6327;
  double t6329;
  double t6333;
  double t6344;
  double t6348;
  double t6331;
  double t6353;
  double t6355;
  double t6368;
  double t6371;
  double t6372;
  double t5614;
  double t5634;
  double t5636;
  double t5977;
  double t6043;
  double t6052;
  double t6057;
  double t6071;
  double t6074;
  double t6083;
  double t6088;
  double t6093;
  double t5546;
  double t5547;
  double t5551;
  double t6212;
  double t6221;
  double t6229;
  double t6232;
  double t6233;
  double t6238;
  double t6253;
  double t6254;
  double t6264;
  double t5559;
  double t5573;
  double t5582;
  double t6356;
  double t6373;
  double t6374;
  double t6379;
  double t6380;
  double t6394;
  double t6399;
  double t6401;
  double t6404;
  double t5731;
  double t5745;
  double t5749;
  double t5650;
  double t5656;
  double t5659;
  double t5678;
  double t6463;
  double t6469;
  double t6476;
  double t6488;
  double t6493;
  double t6494;
  double t6501;
  double t6511;
  double t6512;
  t1023 = Cos(var1[8]);
  t1326 = Cos(var1[10]);
  t1393 = Sin(var1[9]);
  t1196 = Cos(var1[9]);
  t1397 = Sin(var1[10]);
  t715 = Cos(var1[11]);
  t1578 = -1.*t1023*t1326*t1393;
  t1593 = -1.*t1023*t1196*t1397;
  t1598 = t1578 + t1593;
  t1362 = t1023*t1196*t1326;
  t1432 = -1.*t1023*t1393*t1397;
  t1473 = t1362 + t1432;
  t1625 = Sin(var1[11]);
  t711 = Cos(var1[12]);
  t1769 = t715*t1598;
  t1809 = -1.*t1473*t1625;
  t1904 = t1769 + t1809;
  t1552 = t715*t1473;
  t1646 = t1598*t1625;
  t1682 = t1552 + t1646;
  t2018 = Sin(var1[12]);
  t644 = Cos(var1[13]);
  t2118 = t711*t1904;
  t2147 = -1.*t1682*t2018;
  t2229 = t2118 + t2147;
  t1728 = t711*t1682;
  t2057 = t1904*t2018;
  t2076 = t1728 + t2057;
  t2284 = Sin(var1[13]);
  t2565 = Cos(var1[7]);
  t2509 = Sin(var1[7]);
  t2525 = Sin(var1[8]);
  t2734 = t2565*t1196;
  t2767 = -1.*t2509*t2525*t1393;
  t2802 = t2734 + t2767;
  t2534 = t1196*t2509*t2525;
  t2579 = t2565*t1393;
  t2646 = t2534 + t2579;
  t2859 = t1326*t2802;
  t2863 = -1.*t2646*t1397;
  t2884 = t2859 + t2863;
  t2694 = t1326*t2646;
  t2808 = t2802*t1397;
  t2844 = t2694 + t2808;
  t3034 = t715*t2884;
  t3056 = -1.*t2844*t1625;
  t3138 = t3034 + t3056;
  t2853 = t715*t2844;
  t2914 = t2884*t1625;
  t2946 = t2853 + t2914;
  t3231 = t711*t3138;
  t3244 = -1.*t2946*t2018;
  t3336 = t3231 + t3244;
  t3002 = t711*t2946;
  t3149 = t3138*t2018;
  t3203 = t3002 + t3149;
  t2085 = t644*t2076;
  t2295 = t2229*t2284;
  t2364 = t2085 + t2295;
  t2431 = t644*t2229;
  t2438 = -1.*t2076*t2284;
  t2439 = t2431 + t2438;
  t3212 = t644*t3203;
  t3452 = t3336*t2284;
  t3464 = t3212 + t3452;
  t3493 = t644*t3336;
  t3559 = -1.*t3203*t2284;
  t3609 = t3493 + t3559;
  t3821 = 0.642788*t3464;
  t3868 = 0.766044*t3609;
  t3880 = t3821 + t3868;
  t3715 = -0.766044*t2364;
  t3754 = 0.642788*t2439;
  t3807 = t3715 + t3754;
  t4010 = -1.*t1196*t2509;
  t4017 = -1.*t2565*t2525*t1393;
  t4060 = t4010 + t4017;
  t3950 = t2565*t1196*t2525;
  t3998 = -1.*t2509*t1393;
  t4005 = t3950 + t3998;
  t4138 = t1326*t4060;
  t4193 = -1.*t4005*t1397;
  t4281 = t4138 + t4193;
  t4008 = t1326*t4005;
  t4077 = t4060*t1397;
  t4114 = t4008 + t4077;
  t4345 = t715*t4281;
  t4377 = -1.*t4114*t1625;
  t4379 = t4345 + t4377;
  t4118 = t715*t4114;
  t4287 = t4281*t1625;
  t4310 = t4118 + t4287;
  t4530 = t711*t4379;
  t4573 = -1.*t4310*t2018;
  t4642 = t4530 + t4573;
  t4323 = t711*t4310;
  t4396 = t4379*t2018;
  t4461 = t4323 + t4396;
  t3468 = -0.766044*t3464;
  t3623 = 0.642788*t3609;
  t3627 = t3468 + t3623;
  t2381 = 0.642788*t2364;
  t2459 = 0.766044*t2439;
  t2464 = t2381 + t2459;
  t4488 = t644*t4461;
  t4741 = t4642*t2284;
  t4752 = t4488 + t4741;
  t4831 = t644*t4642;
  t4864 = -1.*t4461*t2284;
  t4906 = t4831 + t4864;
  t4764 = -0.766044*t4752;
  t4921 = 0.642788*t4906;
  t4949 = t4764 + t4921;
  t5124 = 0.642788*t4752;
  t5134 = 0.766044*t4906;
  t5141 = t5124 + t5134;
  t580 = Cos(var1[1]);
  t5238 = t2464*t4949;
  t5241 = -1.*t3807*t5141;
  t3918 = t2565*t1023*t3807;
  t4978 = t2525*t4949;
  t5057 = t3918 + t4978;
  t5064 = -1.*t3880*t5057;
  t5108 = t2565*t1023*t2464;
  t5202 = t2525*t5141;
  t5217 = t5108 + t5202;
  t5220 = t3627*t5217;
  t5242 = t5238 + t5241;
  t5245 = -1.*t1023*t2509*t5242;
  t5256 = 0. + t5064 + t5220 + t5245;
  t5263 = 1/t5256;
  t496 = Cos(var1[0]);
  t5447 = Sin(var1[0]);
  t5499 = Sin(var1[1]);
  t5453 = t5141*t3627;
  t5471 = -1.*t4949*t3880;
  t5472 = 0. + t5453 + t5471;
  t5838 = Cos(var1[3]);
  t5826 = Cos(var1[2]);
  t5831 = Sin(var1[3]);
  t5854 = Sin(var1[2]);
  t5875 = Cos(var1[4]);
  t5833 = -1.*t580*t5826*t5831;
  t5862 = -1.*t5838*t580*t5854;
  t5868 = t5833 + t5862;
  t5796 = Sin(var1[4]);
  t5880 = t5838*t580*t5826;
  t5883 = -1.*t580*t5831*t5854;
  t5900 = t5880 + t5883;
  t5937 = Cos(var1[5]);
  t5870 = t5796*t5868;
  t5925 = t5875*t5900;
  t5931 = t5870 + t5925;
  t5786 = Sin(var1[5]);
  t5939 = t5875*t5868;
  t5942 = -1.*t5796*t5900;
  t5953 = t5939 + t5942;
  t5989 = Cos(var1[6]);
  t5936 = -1.*t5786*t5931;
  t5959 = t5937*t5953;
  t5960 = t5936 + t5959;
  t5778 = Sin(var1[6]);
  t5994 = t5937*t5931;
  t5996 = t5786*t5953;
  t6028 = t5994 + t5996;
  t3655 = -1.*t2464*t3627;
  t3893 = t3807*t3880;
  t3908 = 0. + t3655 + t3893;
  t6102 = t496*t5826*t5499;
  t6103 = -1.*t5447*t5854;
  t6113 = t6102 + t6103;
  t6125 = -1.*t5826*t5447;
  t6138 = -1.*t496*t5499*t5854;
  t6139 = t6125 + t6138;
  t6115 = -1.*t5831*t6113;
  t6140 = t5838*t6139;
  t6141 = t6115 + t6140;
  t6148 = t5838*t6113;
  t6150 = t5831*t6139;
  t6168 = t6148 + t6150;
  t6147 = t5796*t6141;
  t6188 = t5875*t6168;
  t6189 = t6147 + t6188;
  t6192 = t5875*t6141;
  t6195 = -1.*t5796*t6168;
  t6197 = t6192 + t6195;
  t6191 = -1.*t5786*t6189;
  t6202 = t5937*t6197;
  t6204 = t6191 + t6202;
  t6214 = t5937*t6189;
  t6215 = t5786*t6197;
  t6219 = t6214 + t6215;
  t5426 = 0. + t5238 + t5241;
  t6267 = t5826*t5447*t5499;
  t6269 = t496*t5854;
  t6273 = t6267 + t6269;
  t6283 = t496*t5826;
  t6284 = -1.*t5447*t5499*t5854;
  t6288 = t6283 + t6284;
  t6274 = -1.*t5831*t6273;
  t6293 = t5838*t6288;
  t6294 = t6274 + t6293;
  t6299 = t5838*t6273;
  t6312 = t5831*t6288;
  t6321 = t6299 + t6312;
  t6298 = t5796*t6294;
  t6327 = t5875*t6321;
  t6329 = t6298 + t6327;
  t6333 = t5875*t6294;
  t6344 = -1.*t5796*t6321;
  t6348 = t6333 + t6344;
  t6331 = -1.*t5786*t6329;
  t6353 = t5937*t6348;
  t6355 = t6331 + t6353;
  t6368 = t5937*t6329;
  t6371 = t5786*t6348;
  t6372 = t6368 + t6371;
  t5614 = -1.*t1023*t2509*t4949;
  t5634 = t2565*t1023*t3627;
  t5636 = 0. + t5614 + t5634;
  t5977 = t5778*t5960;
  t6043 = t5989*t6028;
  t6052 = t5977 + t6043;
  t6057 = 0.642788*t6052;
  t6071 = t5989*t5960;
  t6074 = -1.*t5778*t6028;
  t6083 = t6071 + t6074;
  t6088 = 0.766044*t6083;
  t6093 = t6057 + t6088;
  t5546 = t1023*t2509*t3807;
  t5547 = t2525*t3627;
  t5551 = 0. + t5546 + t5547;
  t6212 = t5778*t6204;
  t6221 = t5989*t6219;
  t6229 = t6212 + t6221;
  t6232 = 0.642788*t6229;
  t6233 = t5989*t6204;
  t6238 = -1.*t5778*t6219;
  t6253 = t6233 + t6238;
  t6254 = 0.766044*t6253;
  t6264 = t6232 + t6254;
  t5559 = -1.*t2565*t1023*t3807;
  t5573 = -1.*t2525*t4949;
  t5582 = 0. + t5559 + t5573;
  t6356 = t5778*t6355;
  t6373 = t5989*t6372;
  t6374 = t6356 + t6373;
  t6379 = 0.642788*t6374;
  t6380 = t5989*t6355;
  t6394 = -1.*t5778*t6372;
  t6399 = t6380 + t6394;
  t6401 = 0.766044*t6399;
  t6404 = t6379 + t6401;
  t5731 = t1023*t2509*t5141;
  t5745 = -1.*t2565*t1023*t3880;
  t5749 = 0. + t5731 + t5745;
  t5650 = -1.*t1023*t2509*t2464;
  t5656 = -1.*t2525*t3880;
  t5659 = 0. + t5650 + t5656;
  t5678 = 0. + t5108 + t5202;
  t6463 = -0.766044*t6052;
  t6469 = 0.642788*t6083;
  t6476 = t6463 + t6469;
  t6488 = -0.766044*t6229;
  t6493 = 0.642788*t6253;
  t6494 = t6488 + t6493;
  t6501 = -0.766044*t6374;
  t6511 = 0.642788*t6399;
  t6512 = t6501 + t6511;

  p_output1(0)=0. + t5263*t5472*t5499 - 1.*t3908*t496*t5263*t580 - 1.*t5263*t5426*t5447*t580;
  p_output1(1)=0. + t5263*t5499*t5636 - 1.*t496*t5263*t5551*t580 - 1.*t5263*t5447*t5582*t580;
  p_output1(2)=0. + t5263*t5499*t5749 - 1.*t496*t5263*t5659*t580 - 1.*t5263*t5447*t5678*t580;
  p_output1(3)=0. + t5263*t5472*t6093 + t3908*t5263*t6264 + t5263*t5426*t6404;
  p_output1(4)=0. + t5263*t5636*t6093 + t5263*t5551*t6264 + t5263*t5582*t6404;
  p_output1(5)=0. + t5263*t5749*t6093 + t5263*t5659*t6264 + t5263*t5678*t6404;
  p_output1(6)=0. + t5263*t5472*t6476 + t3908*t5263*t6494 + t5263*t5426*t6512;
  p_output1(7)=0. + t5263*t5636*t6476 + t5263*t5551*t6494 + t5263*t5582*t6512;
  p_output1(8)=0. + t5263*t5749*t6476 + t5263*t5659*t6494 + t5263*t5678*t6512;
}


       
Eigen::Matrix<double,3,3> R_RightToeBottom_to_LeftToeBottom(const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



