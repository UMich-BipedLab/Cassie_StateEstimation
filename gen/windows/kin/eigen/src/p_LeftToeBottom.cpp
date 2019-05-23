/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:10:11 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t717;
  double t515;
  double t821;
  double t544;
  double t1584;
  double t87;
  double t707;
  double t1587;
  double t1679;
  double t1872;
  double t2105;
  double t2199;
  double t2220;
  double t2551;
  double t2557;
  double t2563;
  double t2993;
  double t2461;
  double t2481;
  double t2510;
  double t3202;
  double t3799;
  double t3818;
  double t3858;
  double t3993;
  double t3510;
  double t3635;
  double t3768;
  double t4222;
  double t4236;
  double t4298;
  double t4350;
  double t4373;
  double t4375;
  double t4396;
  double t4447;
  double t4490;
  double t4510;
  double t4578;
  double t4579;
  double t4580;
  double t4641;
  double t4709;
  double t4734;
  double t4761;
  double t4804;
  double t4831;
  double t4841;
  double t4948;
  double t4958;
  double t5005;
  double t5027;
  double t5039;
  double t5058;
  double t5088;
  double t5135;
  double t5137;
  double t5170;
  double t5216;
  double t5227;
  double t5234;
  double t5253;
  double t5261;
  double t5262;
  double t5287;
  double t5292;
  double t5301;
  double t5313;
  double t5365;
  double t5367;
  double t5374;
  double t93;
  double t333;
  double t377;
  double t424;
  double t2341;
  double t2342;
  double t5430;
  double t5434;
  double t5447;
  double t5466;
  double t5474;
  double t5490;
  double t2860;
  double t3005;
  double t3131;
  double t3218;
  double t3228;
  double t3237;
  double t5507;
  double t5518;
  double t5523;
  double t3865;
  double t4010;
  double t4199;
  double t4306;
  double t4307;
  double t4322;
  double t4379;
  double t4420;
  double t4440;
  double t5552;
  double t5553;
  double t5554;
  double t5562;
  double t5567;
  double t5569;
  double t4531;
  double t4532;
  double t4563;
  double t4755;
  double t4763;
  double t4799;
  double t5571;
  double t5575;
  double t5576;
  double t5599;
  double t5607;
  double t5613;
  double t4884;
  double t4933;
  double t4938;
  double t5070;
  double t5110;
  double t5127;
  double t5637;
  double t5639;
  double t5640;
  double t5652;
  double t5655;
  double t5660;
  double t5209;
  double t5210;
  double t5212;
  double t5283;
  double t5288;
  double t5289;
  double t5708;
  double t5712;
  double t5716;
  double t5724;
  double t5740;
  double t5749;
  double t5333;
  double t5353;
  double t5363;
  double t5757;
  double t5770;
  double t5779;
  double t5825;
  double t5853;
  double t5858;
  double t5931;
  double t5934;
  double t5943;
  double t5979;
  double t5982;
  double t5995;
  double t6003;
  double t6006;
  double t6023;
  double t6051;
  double t6069;
  double t6072;
  double t6084;
  double t6088;
  double t6089;
  double t6105;
  double t6116;
  double t6117;
  double t6135;
  double t6137;
  double t6142;
  double t6157;
  double t6182;
  double t6201;
  double t6219;
  double t6235;
  double t6244;
  double t6264;
  double t6280;
  double t6298;
  double t6316;
  double t6320;
  double t6334;
  t717 = Cos(var1[3]);
  t515 = Cos(var1[5]);
  t821 = Sin(var1[4]);
  t544 = Sin(var1[3]);
  t1584 = Sin(var1[5]);
  t87 = Cos(var1[6]);
  t707 = -1.*t515*t544;
  t1587 = t717*t821*t1584;
  t1679 = t707 + t1587;
  t1872 = t717*t515*t821;
  t2105 = t544*t1584;
  t2199 = t1872 + t2105;
  t2220 = Sin(var1[6]);
  t2551 = Cos(var1[7]);
  t2557 = -1.*t2551;
  t2563 = 1. + t2557;
  t2993 = Sin(var1[7]);
  t2461 = t87*t1679;
  t2481 = t2199*t2220;
  t2510 = t2461 + t2481;
  t3202 = Cos(var1[4]);
  t3799 = Cos(var1[8]);
  t3818 = -1.*t3799;
  t3858 = 1. + t3818;
  t3993 = Sin(var1[8]);
  t3510 = t717*t3202*t2551;
  t3635 = t2510*t2993;
  t3768 = t3510 + t3635;
  t4222 = t87*t2199;
  t4236 = -1.*t1679*t2220;
  t4298 = t4222 + t4236;
  t4350 = Cos(var1[9]);
  t4373 = -1.*t4350;
  t4375 = 1. + t4373;
  t4396 = Sin(var1[9]);
  t4447 = t3799*t3768;
  t4490 = t4298*t3993;
  t4510 = t4447 + t4490;
  t4578 = t3799*t4298;
  t4579 = -1.*t3768*t3993;
  t4580 = t4578 + t4579;
  t4641 = Cos(var1[10]);
  t4709 = -1.*t4641;
  t4734 = 1. + t4709;
  t4761 = Sin(var1[10]);
  t4804 = -1.*t4396*t4510;
  t4831 = t4350*t4580;
  t4841 = t4804 + t4831;
  t4948 = t4350*t4510;
  t4958 = t4396*t4580;
  t5005 = t4948 + t4958;
  t5027 = Cos(var1[11]);
  t5039 = -1.*t5027;
  t5058 = 1. + t5039;
  t5088 = Sin(var1[11]);
  t5135 = t4761*t4841;
  t5137 = t4641*t5005;
  t5170 = t5135 + t5137;
  t5216 = t4641*t4841;
  t5227 = -1.*t4761*t5005;
  t5234 = t5216 + t5227;
  t5253 = Cos(var1[12]);
  t5261 = -1.*t5253;
  t5262 = 1. + t5261;
  t5287 = Sin(var1[12]);
  t5292 = -1.*t5088*t5170;
  t5301 = t5027*t5234;
  t5313 = t5292 + t5301;
  t5365 = t5027*t5170;
  t5367 = t5088*t5234;
  t5374 = t5365 + t5367;
  t93 = -1.*t87;
  t333 = 1. + t93;
  t377 = 0.135*t333;
  t424 = 0. + t377;
  t2341 = -0.135*t2220;
  t2342 = 0. + t2341;
  t5430 = t717*t515;
  t5434 = t544*t821*t1584;
  t5447 = t5430 + t5434;
  t5466 = t515*t544*t821;
  t5474 = -1.*t717*t1584;
  t5490 = t5466 + t5474;
  t2860 = 0.135*t2563;
  t3005 = 0.049*t2993;
  t3131 = 0. + t2860 + t3005;
  t3218 = -0.049*t2563;
  t3228 = 0.135*t2993;
  t3237 = 0. + t3218 + t3228;
  t5507 = t87*t5447;
  t5518 = t5490*t2220;
  t5523 = t5507 + t5518;
  t3865 = -0.049*t3858;
  t4010 = -0.09*t3993;
  t4199 = 0. + t3865 + t4010;
  t4306 = -0.09*t3858;
  t4307 = 0.049*t3993;
  t4322 = 0. + t4306 + t4307;
  t4379 = -0.049*t4375;
  t4420 = -0.21*t4396;
  t4440 = 0. + t4379 + t4420;
  t5552 = t3202*t2551*t544;
  t5553 = t5523*t2993;
  t5554 = t5552 + t5553;
  t5562 = t87*t5490;
  t5567 = -1.*t5447*t2220;
  t5569 = t5562 + t5567;
  t4531 = -0.21*t4375;
  t4532 = 0.049*t4396;
  t4563 = 0. + t4531 + t4532;
  t4755 = -0.2707*t4734;
  t4763 = 0.0016*t4761;
  t4799 = 0. + t4755 + t4763;
  t5571 = t3799*t5554;
  t5575 = t5569*t3993;
  t5576 = t5571 + t5575;
  t5599 = t3799*t5569;
  t5607 = -1.*t5554*t3993;
  t5613 = t5599 + t5607;
  t4884 = -0.0016*t4734;
  t4933 = -0.2707*t4761;
  t4938 = 0. + t4884 + t4933;
  t5070 = 0.0184*t5058;
  t5110 = -0.7055*t5088;
  t5127 = 0. + t5070 + t5110;
  t5637 = -1.*t4396*t5576;
  t5639 = t4350*t5613;
  t5640 = t5637 + t5639;
  t5652 = t4350*t5576;
  t5655 = t4396*t5613;
  t5660 = t5652 + t5655;
  t5209 = -0.7055*t5058;
  t5210 = -0.0184*t5088;
  t5212 = 0. + t5209 + t5210;
  t5283 = -1.1135*t5262;
  t5288 = 0.0216*t5287;
  t5289 = 0. + t5283 + t5288;
  t5708 = t4761*t5640;
  t5712 = t4641*t5660;
  t5716 = t5708 + t5712;
  t5724 = t4641*t5640;
  t5740 = -1.*t4761*t5660;
  t5749 = t5724 + t5740;
  t5333 = -0.0216*t5262;
  t5353 = -1.1135*t5287;
  t5363 = 0. + t5333 + t5353;
  t5757 = -1.*t5088*t5716;
  t5770 = t5027*t5749;
  t5779 = t5757 + t5770;
  t5825 = t5027*t5716;
  t5853 = t5088*t5749;
  t5858 = t5825 + t5853;
  t5931 = t3202*t87*t1584;
  t5934 = t3202*t515*t2220;
  t5943 = t5931 + t5934;
  t5979 = -1.*t2551*t821;
  t5982 = t5943*t2993;
  t5995 = t5979 + t5982;
  t6003 = t3202*t515*t87;
  t6006 = -1.*t3202*t1584*t2220;
  t6023 = t6003 + t6006;
  t6051 = t3799*t5995;
  t6069 = t6023*t3993;
  t6072 = t6051 + t6069;
  t6084 = t3799*t6023;
  t6088 = -1.*t5995*t3993;
  t6089 = t6084 + t6088;
  t6105 = -1.*t4396*t6072;
  t6116 = t4350*t6089;
  t6117 = t6105 + t6116;
  t6135 = t4350*t6072;
  t6137 = t4396*t6089;
  t6142 = t6135 + t6137;
  t6157 = t4761*t6117;
  t6182 = t4641*t6142;
  t6201 = t6157 + t6182;
  t6219 = t4641*t6117;
  t6235 = -1.*t4761*t6142;
  t6244 = t6219 + t6235;
  t6264 = -1.*t5088*t6201;
  t6280 = t5027*t6244;
  t6298 = t6264 + t6280;
  t6316 = t5027*t6201;
  t6320 = t5088*t6244;
  t6334 = t6316 + t6320;

  p_output1(0)=0. + t2199*t2342 + t2510*t3131 + t3768*t4199 + t1679*t424 + t4298*t4322 + t4440*t4510 + t4563*t4580 + t4799*t4841 + t4938*t5005 + t5127*t5170 + t5212*t5234 + t5289*t5313 + t5363*t5374 + 0.0306*(t5287*t5313 + t5253*t5374) - 1.1312*(t5253*t5313 - 1.*t5287*t5374) + t3202*t3237*t717 + 0.1305*(t2510*t2551 - 1.*t2993*t3202*t717) + var1(0);
  p_output1(1)=0. + t3202*t3237*t544 + t424*t5447 + t2342*t5490 + t3131*t5523 + 0.1305*(-1.*t2993*t3202*t544 + t2551*t5523) + t4199*t5554 + t4322*t5569 + t4440*t5576 + t4563*t5613 + t4799*t5640 + t4938*t5660 + t5127*t5716 + t5212*t5749 + t5289*t5779 + t5363*t5858 + 0.0306*(t5287*t5779 + t5253*t5858) - 1.1312*(t5253*t5779 - 1.*t5287*t5858) + var1(1);
  p_output1(2)=0. + t1584*t3202*t424 + t2342*t3202*t515 + t3131*t5943 + t4199*t5995 + t4322*t6023 + t4440*t6072 + t4563*t6089 + t4799*t6117 + t4938*t6142 + t5127*t6201 + t5212*t6244 + t5289*t6298 + t5363*t6334 + 0.0306*(t5287*t6298 + t5253*t6334) - 1.1312*(t5253*t6298 - 1.*t5287*t6334) - 1.*t3237*t821 + 0.1305*(t2551*t5943 + t2993*t821) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_LeftToeBottom(const Eigen::Matrix<double,20,1> &var1)
//void p_LeftToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



