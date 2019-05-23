/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:32:36 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_VectorNav_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,6,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t250;
  double t50;
  double t74;
  double t236;
  double t288;
  double t1806;
  double t1821;
  double t1823;
  double t371;
  double t373;
  double t546;
  double t1624;
  double t1032;
  double t2013;
  double t2028;
  double t2128;
  double t2198;
  double t2214;
  double t1839;
  double t1860;
  double t1759;
  double t1275;
  double t2002;
  double t2413;
  double t3452;
  double t3496;
  double t3525;
  double t3548;
  double t2294;
  double t3527;
  double t3658;
  double t3668;
  double t3687;
  double t3696;
  double t3700;
  double t2785;
  double t3145;
  double t2808;
  double t2946;
  double t3041;
  double t3047;
  double t3163;
  double t3268;
  double t3281;
  double t3371;
  double t3398;
  double t4464;
  double t4435;
  double t3855;
  double t3860;
  double t4198;
  double t4199;
  double t4204;
  double t4506;
  double t4508;
  double t4220;
  double t4233;
  double t4243;
  double t3685;
  double t3755;
  double t4528;
  double t4531;
  double t4532;
  double t4356;
  double t4359;
  double t4366;
  double t4559;
  double t4561;
  double t4579;
  double t4385;
  double t4386;
  double t4389;
  double t4027;
  double t4146;
  double t4164;
  double t4280;
  double t4307;
  double t4312;
  double t4458;
  double t4471;
  double t4472;
  double t4477;
  double t4481;
  double t4489;
  double t5031;
  double t5018;
  double t4549;
  double t4603;
  double t4679;
  double t4704;
  double t4715;
  double t5070;
  double t5075;
  double t4729;
  double t4730;
  double t4746;
  double t4616;
  double t4618;
  double t5077;
  double t5090;
  double t5097;
  double t4920;
  double t4942;
  double t4953;
  double t5113;
  double t5117;
  double t5119;
  double t4964;
  double t4995;
  double t4996;
  double t4626;
  double t4648;
  double t4781;
  double t4790;
  double t4824;
  double t4835;
  double t4875;
  double t4892;
  double t5019;
  double t5037;
  double t5044;
  double t5055;
  double t5056;
  double t5063;
  double t5528;
  double t5514;
  double t5104;
  double t5125;
  double t5216;
  double t5224;
  double t5226;
  double t5588;
  double t5591;
  double t5255;
  double t5263;
  double t5269;
  double t5156;
  double t5175;
  double t5597;
  double t5622;
  double t5624;
  double t5393;
  double t5401;
  double t5406;
  double t5639;
  double t5649;
  double t5659;
  double t5422;
  double t5451;
  double t5459;
  double t5197;
  double t5200;
  double t5294;
  double t5295;
  double t5335;
  double t5336;
  double t5350;
  double t5355;
  t250 = Cos(var1[0]);
  t50 = Sin(var1[0]);
  t74 = -1.*t50;
  t236 = 0. + t74;
  t288 = 0. + t250;
  t1806 = Cos(var1[1]);
  t1821 = -1.*t250*t1806;
  t1823 = 0. + t1821;
  t371 = -1.*t250;
  t373 = 1. + t371;
  t546 = 0.135*t373;
  t1624 = Sin(var1[1]);
  t1032 = 0.135*t50;
  t2013 = -1.*t1806;
  t2028 = 1. + t2013;
  t2128 = 0.135*t2028;
  t2198 = 0.049*t1624;
  t2214 = 0. + t2128 + t2198;
  t1839 = -1.*t1806*t50;
  t1860 = 0. + t1839;
  t1759 = 0. + t1624;
  t1275 = 0.049*t250;
  t2002 = -0.07996*t1823;
  t2413 = -1.*t50*t2214;
  t3452 = Cos(var1[2]);
  t3496 = -1.*t3452;
  t3525 = 1. + t3496;
  t3548 = Sin(var1[2]);
  t2294 = t250*t2214;
  t3527 = -0.049*t3525;
  t3658 = -0.09*t3548;
  t3668 = 0. + t3527 + t3658;
  t3687 = -0.09*t3525;
  t3696 = 0.049*t3548;
  t3700 = 0. + t3687 + t3696;
  t2785 = 0.03155*t1860;
  t3145 = 0.07996*t1759;
  t2808 = 0.049*t2028;
  t2946 = -0.135*t1624;
  t3041 = -0.135*t50;
  t3047 = t50*t2214;
  t3163 = -0.03155*t1823;
  t3268 = -0.049*t2028;
  t3281 = 0.135*t1624;
  t3371 = -0.135*t373;
  t3398 = -1.*t250*t2214;
  t4464 = Cos(var1[3]);
  t4435 = Sin(var1[3]);
  t3855 = t250*t1624*t3668;
  t3860 = -1.*t50*t3700;
  t4198 = t250*t3452*t1624;
  t4199 = -1.*t50*t3548;
  t4204 = t4198 + t4199;
  t4506 = -1.*t4464;
  t4508 = 1. + t4506;
  t4220 = -1.*t3452*t50;
  t4233 = -1.*t250*t1624*t3548;
  t4243 = t4220 + t4233;
  t3685 = -1.*t50*t1624*t3668;
  t3755 = -1.*t250*t3700;
  t4528 = -0.049*t4508;
  t4531 = -0.21*t4435;
  t4532 = 0. + t4528 + t4531;
  t4356 = t3452*t50*t1624;
  t4359 = t250*t3548;
  t4366 = t4356 + t4359;
  t4559 = -0.21*t4508;
  t4561 = 0.049*t4435;
  t4579 = 0. + t4559 + t4561;
  t4385 = t250*t3452;
  t4386 = -1.*t50*t1624*t3548;
  t4389 = t4385 + t4386;
  t4027 = -1.*t1806*t3668;
  t4146 = t50*t1624*t3668;
  t4164 = t250*t3700;
  t4280 = t1806*t3668;
  t4307 = -1.*t250*t1624*t3668;
  t4312 = t50*t3700;
  t4458 = -1.*t1806*t3452*t4435;
  t4471 = -1.*t4464*t1806*t3548;
  t4472 = t4458 + t4471;
  t4477 = t4464*t1806*t3452;
  t4481 = -1.*t1806*t4435*t3548;
  t4489 = t4477 + t4481;
  t5031 = Cos(var1[4]);
  t5018 = Sin(var1[4]);
  t4549 = t4532*t4204;
  t4603 = t4579*t4243;
  t4679 = -1.*t4435*t4204;
  t4704 = t4464*t4243;
  t4715 = t4679 + t4704;
  t5070 = -1.*t5031;
  t5075 = 1. + t5070;
  t4729 = t4464*t4204;
  t4730 = t4435*t4243;
  t4746 = t4729 + t4730;
  t4616 = -1.*t4532*t4366;
  t4618 = -1.*t4579*t4389;
  t5077 = -0.2707*t5075;
  t5090 = 0.0016*t5018;
  t5097 = 0. + t5077 + t5090;
  t4920 = -1.*t4435*t4366;
  t4942 = t4464*t4389;
  t4953 = t4920 + t4942;
  t5113 = -0.0016*t5075;
  t5117 = -0.2707*t5018;
  t5119 = 0. + t5113 + t5117;
  t4964 = t4464*t4366;
  t4995 = t4435*t4389;
  t4996 = t4964 + t4995;
  t4626 = -1.*t1806*t3452*t4532;
  t4648 = t1806*t4579*t3548;
  t4781 = t4532*t4366;
  t4790 = t4579*t4389;
  t4824 = t1806*t3452*t4532;
  t4835 = -1.*t1806*t4579*t3548;
  t4875 = -1.*t4532*t4204;
  t4892 = -1.*t4579*t4243;
  t5019 = t5018*t4472;
  t5037 = t5031*t4489;
  t5044 = t5019 + t5037;
  t5055 = t5031*t4472;
  t5056 = -1.*t5018*t4489;
  t5063 = t5055 + t5056;
  t5528 = Cos(var1[5]);
  t5514 = Sin(var1[5]);
  t5104 = t5097*t4715;
  t5125 = t5119*t4746;
  t5216 = t5018*t4715;
  t5224 = t5031*t4746;
  t5226 = t5216 + t5224;
  t5588 = -1.*t5528;
  t5591 = 1. + t5588;
  t5255 = t5031*t4715;
  t5263 = -1.*t5018*t4746;
  t5269 = t5255 + t5263;
  t5156 = -1.*t5097*t4953;
  t5175 = -1.*t5119*t4996;
  t5597 = 0.0184*t5591;
  t5622 = -0.7055*t5514;
  t5624 = 0. + t5597 + t5622;
  t5393 = t5018*t4953;
  t5401 = t5031*t4996;
  t5406 = t5393 + t5401;
  t5639 = -0.7055*t5591;
  t5649 = -0.0184*t5514;
  t5659 = 0. + t5639 + t5649;
  t5422 = t5031*t4953;
  t5451 = -1.*t5018*t4996;
  t5459 = t5422 + t5451;
  t5197 = -1.*t5097*t4472;
  t5200 = -1.*t5119*t4489;
  t5294 = t5097*t4953;
  t5295 = t5119*t4996;
  t5335 = t5097*t4472;
  t5336 = t5119*t4489;
  t5350 = -1.*t5097*t4715;
  t5355 = -1.*t5119*t4746;

  p_output1(0)=1.;
  p_output1(1)=0.;
  p_output1(2)=0.;
  p_output1(3)=0.;
  p_output1(4)=0.07996;
  p_output1(5)=-0.135;
  p_output1(6)=0.;
  p_output1(7)=t236;
  p_output1(8)=t288;
  p_output1(9)=0.135 - 0.07996*t236 - 1.*(0. + t1032)*t50 + t250*(0. + t546);
  p_output1(10)=0. + t1275 + 0.03155*t288;
  p_output1(11)=0. - 0.03155*t236 + 0.049*t50;
  p_output1(12)=t1759;
  p_output1(13)=t1823;
  p_output1(14)=t1860;
  p_output1(15)=0. - 0.09*t1806 + t2002 - 1.*t1806*(0. + t1032 + t2413)*t250 - 1.*t1806*t50*(0. + t2294 + t546);
  p_output1(16)=0. - 0.09*t1624*t250 + t2785 + t1624*(0. + t3041 + t3047) + t3145 - 0.049*t50 - 1.*t1806*(0. + t2808 + t2946)*t50;
  p_output1(17)=0. + t1275 + t3163 - 1.*t1806*t250*(0. + t3268 + t3281) + t1624*(0. + t3371 + t3398) - 0.09*t1624*t50;
  p_output1(18)=t1759;
  p_output1(19)=t1823;
  p_output1(20)=t1860;
  p_output1(21)=0. + t2002 - 0.21*t1806*t3452 - 0.049*t1806*t3548 - 1.*t1806*t250*(0. + t1032 + t2413 + t3685 + t3755) - 1.*t1806*t50*(0. + t2294 + t3855 + t3860 + t546);
  p_output1(22)=0. + t2785 + t3145 + t1624*(0. + t3041 + t3047 + t4146 + t4164) - 0.21*t4204 + 0.049*t4243 - 1.*t1806*(0. + t2808 + t2946 + t4027)*t50;
  p_output1(23)=0. + t3163 - 1.*t1806*t250*(0. + t3268 + t3281 + t4280) + t1624*(0. + t3371 + t3398 + t4307 + t4312) - 0.21*t4366 + 0.049*t4389;
  p_output1(24)=t1759;
  p_output1(25)=t1823;
  p_output1(26)=t1860;
  p_output1(27)=0. + t2002 + 0.0016*t4472 - 0.2707*t4489 - 1.*t1806*t250*(0. + t1032 + t2413 + t3685 + t3755 + t4616 + t4618) - 1.*t1806*t50*(0. + t2294 + t3855 + t3860 + t4549 + t4603 + t546);
  p_output1(28)=0. + t2785 + t3145 + 0.0016*t4715 - 0.2707*t4746 + t1624*(0. + t3041 + t3047 + t4146 + t4164 + t4781 + t4790) - 1.*t1806*(0. + t2808 + t2946 + t4027 + t4626 + t4648)*t50;
  p_output1(29)=0. + t3163 - 1.*t1806*t250*(0. + t3268 + t3281 + t4280 + t4824 + t4835) + t1624*(0. + t3371 + t3398 + t4307 + t4312 + t4875 + t4892) + 0.0016*t4953 - 0.2707*t4996;
  p_output1(30)=t1759;
  p_output1(31)=t1823;
  p_output1(32)=t1860;
  p_output1(33)=0. + t2002 - 0.7055*t5044 - 0.0184*t5063 - 1.*t1806*t250*(0. + t1032 + t2413 + t3685 + t3755 + t4616 + t4618 + t5156 + t5175) - 1.*t1806*t50*(0. + t2294 + t3855 + t3860 + t4549 + t4603 + t5104 + t5125 + t546);
  p_output1(34)=0. + t2785 + t3145 - 1.*t1806*t50*(0. + t2808 + t2946 + t4027 + t4626 + t4648 + t5197 + t5200) - 0.7055*t5226 - 0.0184*t5269 + t1624*(0. + t3041 + t3047 + t4146 + t4164 + t4781 + t4790 + t5294 + t5295);
  p_output1(35)=0. + t3163 - 1.*t1806*t250*(0. + t3268 + t3281 + t4280 + t4824 + t4835 + t5335 + t5336) + t1624*(0. + t3371 + t3398 + t4307 + t4312 + t4875 + t4892 + t5350 + t5355) - 0.7055*t5406 - 0.0184*t5459;
  p_output1(36)=t1759;
  p_output1(37)=t1823;
  p_output1(38)=t1860;
  p_output1(39)=0. + t2002 - 1.1135*(t5063*t5514 + t5044*t5528) + 0.0216*(-1.*t5044*t5514 + t5063*t5528) - 1.*t1806*t50*(0. + t2294 + t3855 + t3860 + t4549 + t4603 + t5104 + t5125 + t546 + t5226*t5624 + t5269*t5659) - 1.*t1806*t250*(0. + t1032 + t2413 + t3685 + t3755 + t4616 + t4618 + t5156 + t5175 - 1.*t5406*t5624 - 1.*t5459*t5659);
  p_output1(40)=0. + t2785 + t3145 - 1.1135*(t5269*t5514 + t5226*t5528) + 0.0216*(-1.*t5226*t5514 + t5269*t5528) - 1.*t1806*t50*(0. + t2808 + t2946 + t4027 + t4626 + t4648 + t5197 + t5200 - 1.*t5044*t5624 - 1.*t5063*t5659) + t1624*(0. + t3041 + t3047 + t4146 + t4164 + t4781 + t4790 + t5294 + t5295 + t5406*t5624 + t5459*t5659);
  p_output1(41)=0. + t3163 - 1.1135*(t5459*t5514 + t5406*t5528) + 0.0216*(-1.*t5406*t5514 + t5459*t5528) - 1.*t1806*t250*(0. + t3268 + t3281 + t4280 + t4824 + t4835 + t5335 + t5336 + t5044*t5624 + t5063*t5659) + t1624*(0. + t3371 + t3398 + t4307 + t4312 + t4875 + t4892 + t5350 + t5355 - 1.*t5226*t5624 - 1.*t5269*t5659);
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=0;
  p_output1(46)=0;
  p_output1(47)=0;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
  p_output1(54)=0;
  p_output1(55)=0;
  p_output1(56)=0;
  p_output1(57)=0;
  p_output1(58)=0;
  p_output1(59)=0;
  p_output1(60)=0;
  p_output1(61)=0;
  p_output1(62)=0;
  p_output1(63)=0;
  p_output1(64)=0;
  p_output1(65)=0;
  p_output1(66)=0;
  p_output1(67)=0;
  p_output1(68)=0;
  p_output1(69)=0;
  p_output1(70)=0;
  p_output1(71)=0;
  p_output1(72)=0;
  p_output1(73)=0;
  p_output1(74)=0;
  p_output1(75)=0;
  p_output1(76)=0;
  p_output1(77)=0;
  p_output1(78)=0;
  p_output1(79)=0;
  p_output1(80)=0;
  p_output1(81)=0;
  p_output1(82)=0;
  p_output1(83)=0;
}


       
Eigen::Matrix<double,6,14> Js_VectorNav_to_LeftToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void Js_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,6,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,6,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



