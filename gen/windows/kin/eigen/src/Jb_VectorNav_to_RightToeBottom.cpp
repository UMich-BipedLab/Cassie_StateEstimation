/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:32:40 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_VectorNav_to_RightToeBottom.h"

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
  double t769;
  double t825;
  double t1043;
  double t815;
  double t936;
  double t966;
  double t760;
  double t1099;
  double t1193;
  double t1207;
  double t1275;
  double t1037;
  double t1209;
  double t1232;
  double t727;
  double t1406;
  double t1467;
  double t1504;
  double t1719;
  double t1242;
  double t1561;
  double t1633;
  double t437;
  double t1823;
  double t1824;
  double t1856;
  double t102;
  double t1987;
  double t2386;
  double t2403;
  double t2522;
  double t2323;
  double t2535;
  double t2675;
  double t2697;
  double t2729;
  double t434;
  double t2690;
  double t2751;
  double t2769;
  double t2797;
  double t2808;
  double t2946;
  double t2776;
  double t2960;
  double t2992;
  double t3036;
  double t3119;
  double t3145;
  double t3215;
  double t3247;
  double t3268;
  double t3281;
  double t3305;
  double t62;
  double t4306;
  double t4385;
  double t4143;
  double t4226;
  double t4390;
  double t4559;
  double t4588;
  double t4606;
  double t4654;
  double t4661;
  double t4729;
  double t4730;
  double t4035;
  double t4040;
  double t4275;
  double t4280;
  double t4622;
  double t4769;
  double t4799;
  double t4863;
  double t4873;
  double t4880;
  double t4907;
  double t4911;
  double t3866;
  double t3893;
  double t4067;
  double t4103;
  double t4831;
  double t4948;
  double t4963;
  double t5015;
  double t5019;
  double t5049;
  double t5055;
  double t5064;
  double t3430;
  double t3490;
  double t3659;
  double t3717;
  double t3762;
  double t3838;
  double t3944;
  double t3971;
  double t4989;
  double t5065;
  double t5078;
  double t5111;
  double t5112;
  double t5113;
  double t5130;
  double t5131;
  double t5143;
  double t5178;
  double t5208;
  double t1652;
  double t1899;
  double t1905;
  double t1950;
  double t2074;
  double t2107;
  double t2124;
  double t2198;
  double t2217;
  double t2309;
  double t2320;
  double t3518;
  double t3638;
  double t5224;
  double t5260;
  double t5322;
  double t5329;
  double t5336;
  double t5340;
  double t5346;
  double t5545;
  double t5571;
  double t5580;
  double t5585;
  double t5597;
  double t78;
  double t5291;
  double t5311;
  double t5409;
  double t5529;
  double t5542;
  double t5710;
  double t5711;
  double t5714;
  double t5745;
  double t5748;
  double t5664;
  double t5674;
  double t5727;
  double t5622;
  t769 = Cos(var1[13]);
  t825 = Sin(var1[13]);
  t1043 = Cos(var1[12]);
  t815 = 0.642788*t769;
  t936 = -0.766044*t825;
  t966 = t815 + t936;
  t760 = Sin(var1[12]);
  t1099 = 0.766044*t769;
  t1193 = 0.642788*t825;
  t1207 = t1099 + t1193;
  t1275 = Cos(var1[11]);
  t1037 = t760*t966;
  t1209 = t1043*t1207;
  t1232 = 0. + t1037 + t1209;
  t727 = Sin(var1[11]);
  t1406 = t1043*t966;
  t1467 = -1.*t760*t1207;
  t1504 = 0. + t1406 + t1467;
  t1719 = Cos(var1[10]);
  t1242 = -1.*t727*t1232;
  t1561 = t1275*t1504;
  t1633 = 0. + t1242 + t1561;
  t437 = Sin(var1[10]);
  t1823 = t1275*t1232;
  t1824 = t727*t1504;
  t1856 = 0. + t1823 + t1824;
  t102 = Cos(var1[8]);
  t1987 = Cos(var1[9]);
  t2386 = -0.766044*t769;
  t2403 = -0.642788*t825;
  t2522 = t2386 + t2403;
  t2323 = -1.*t760*t966;
  t2535 = t1043*t2522;
  t2675 = 0. + t2323 + t2535;
  t2697 = t760*t2522;
  t2729 = 0. + t1406 + t2697;
  t434 = Sin(var1[9]);
  t2690 = t727*t2675;
  t2751 = t1275*t2729;
  t2769 = 0. + t2690 + t2751;
  t2797 = t1275*t2675;
  t2808 = -1.*t727*t2729;
  t2946 = 0. + t2797 + t2808;
  t2776 = -1.*t437*t2769;
  t2960 = t1719*t2946;
  t2992 = 0. + t2776 + t2960;
  t3036 = t1987*t2992;
  t3119 = t1719*t2769;
  t3145 = t437*t2946;
  t3215 = 0. + t3119 + t3145;
  t3247 = -1.*t434*t3215;
  t3268 = 0. + t3036 + t3247;
  t3281 = t102*t3268;
  t3305 = 0. + t3281;
  t62 = Sin(var1[8]);
  t4306 = -1.*t769;
  t4385 = 1. + t4306;
  t4143 = -1.*t1043;
  t4226 = 1. + t4143;
  t4390 = -0.0216*t4385;
  t4559 = 0.0306*t769;
  t4588 = 0.01770000000000005*t825;
  t4606 = 0. + t4390 + t4559 + t4588;
  t4654 = -1.1135*t4385;
  t4661 = -1.1312*t769;
  t4729 = 0.052199999999999996*t825;
  t4730 = 0. + t4654 + t4661 + t4729;
  t4035 = -1.*t1275;
  t4040 = 1. + t4035;
  t4275 = -0.7055*t4226;
  t4280 = -0.0184*t760;
  t4622 = t760*t4606;
  t4769 = t1043*t4730;
  t4799 = 0. + t4275 + t4280 + t4622 + t4769;
  t4863 = 0.0184*t4226;
  t4873 = -0.7055*t760;
  t4880 = t1043*t4606;
  t4907 = -1.*t760*t4730;
  t4911 = 0. + t4863 + t4873 + t4880 + t4907;
  t3866 = -1.*t1719;
  t3893 = 1. + t3866;
  t4067 = -0.0016*t4040;
  t4103 = -0.2707*t727;
  t4831 = -1.*t727*t4799;
  t4948 = t1275*t4911;
  t4963 = 0. + t4067 + t4103 + t4831 + t4948;
  t5015 = -0.2707*t4040;
  t5019 = 0.0016*t727;
  t5049 = t1275*t4799;
  t5055 = t727*t4911;
  t5064 = 0. + t5015 + t5019 + t5049 + t5055;
  t3430 = -1.*t102;
  t3490 = 1. + t3430;
  t3659 = -1.*t1987;
  t3717 = 1. + t3659;
  t3762 = -0.049*t3717;
  t3838 = -0.09*t434;
  t3944 = -0.21*t3893;
  t3971 = 0.049*t437;
  t4989 = t437*t4963;
  t5065 = t1719*t5064;
  t5078 = 0. + t3944 + t3971 + t4989 + t5065;
  t5111 = -1.*t434*t5078;
  t5112 = -0.049*t3893;
  t5113 = -0.21*t437;
  t5130 = t1719*t4963;
  t5131 = -1.*t437*t5064;
  t5143 = 0. + t5112 + t5113 + t5130 + t5131;
  t5178 = t1987*t5143;
  t5208 = 0. + t3762 + t3838 + t5111 + t5178;
  t1652 = t437*t1633;
  t1899 = t1719*t1856;
  t1905 = 0. + t1652 + t1899;
  t1950 = -1.*t434*t1905;
  t2074 = t1719*t1633;
  t2107 = -1.*t437*t1856;
  t2124 = 0. + t2074 + t2107;
  t2198 = t1987*t2124;
  t2217 = 0. + t1950 + t2198;
  t2309 = t102*t2217;
  t2320 = 0. + t2309;
  t3518 = -0.049*t3490;
  t3638 = -0.004500000000000004*t62;
  t5224 = t102*t5208;
  t5260 = 0. + t3518 + t3638 + t5224;
  t5322 = -0.135*t3490;
  t5329 = -0.1305*t102;
  t5336 = 0.049*t62;
  t5340 = t62*t5208;
  t5346 = 0. + t5322 + t5329 + t5336 + t5340;
  t5545 = -0.09*t3717;
  t5571 = 0.049*t434;
  t5580 = t1987*t5078;
  t5585 = t434*t5143;
  t5597 = 0. + t5545 + t5571 + t5580 + t5585;
  t78 = 0. + t62;
  t5291 = t62*t3268;
  t5311 = 0. + t5291;
  t5409 = t434*t2992;
  t5529 = t1987*t3215;
  t5542 = 0. + t5409 + t5529;
  t5710 = t1987*t1905;
  t5711 = t434*t2124;
  t5714 = 0. + t5710 + t5711;
  t5745 = -1.*t102;
  t5748 = 0. + t5745;
  t5664 = t62*t2217;
  t5674 = 0. + t5664;
  t5727 = -1.*t5597*t5714;
  t5622 = t5542*t5597;

  p_output1(0)=0;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=0;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=0;
  p_output1(9)=0;
  p_output1(10)=0;
  p_output1(11)=0;
  p_output1(12)=0;
  p_output1(13)=0;
  p_output1(14)=0;
  p_output1(15)=0;
  p_output1(16)=0;
  p_output1(17)=0;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=t78;
  p_output1(43)=t2320;
  p_output1(44)=t3305;
  p_output1(45)=0. + t2320*(t3305*t5260 + t5311*t5346 + t5622) + t3305*(-1.*t2320*t5260 - 1.*t5346*t5674 + t5727);
  p_output1(46)=0.135*t5714 + (-1.*t3305*t5260 - 1.*t5311*t5346 - 1.*t5542*t5597)*t78 + t3305*(0. + t5346*t5748 + t5260*t78);
  p_output1(47)=0.135*t5542 + (t2320*t5260 + t5346*t5674 + t5597*t5714)*t78 + t2320*(0. - 1.*t5346*t5748 - 1.*t5260*t78);
  p_output1(48)=0.;
  p_output1(49)=t5714;
  p_output1(50)=t5542;
  p_output1(51)=-0.049 + (0. + t3268*t5208 + t5622)*t5714 + t5542*(0. - 1.*t2217*t5208 + t5727);
  p_output1(52)=0. - 0.135*t2217 + 0.1305*t5542;
  p_output1(53)=0. - 0.135*t3268 - 0.1305*t5714;
  p_output1(54)=1.;
  p_output1(55)=0.;
  p_output1(56)=0.;
  p_output1(57)=0.;
  p_output1(58)=0. + 0.049*t1905 - 0.09*t2124 - 1.*t3215*t5078 - 1.*t2992*t5143;
  p_output1(59)=0. - 0.09*t2992 + 0.049*t3215 + t1905*t5078 + t2124*t5143;
  p_output1(60)=1.;
  p_output1(61)=0.;
  p_output1(62)=0.;
  p_output1(63)=0.;
  p_output1(64)=0. - 0.21*t1633 + 0.049*t1856 - 1.*t2946*t4963 - 1.*t2769*t5064;
  p_output1(65)=0. + 0.049*t2769 - 0.21*t2946 + t1633*t4963 + t1856*t5064;
  p_output1(66)=1.;
  p_output1(67)=0.;
  p_output1(68)=0.;
  p_output1(69)=0.;
  p_output1(70)=0. + 0.0016*t1232 - 0.2707*t1504 - 1.*t2729*t4799 - 1.*t2675*t4911;
  p_output1(71)=0. - 0.2707*t2675 + 0.0016*t2729 + t1232*t4799 + t1504*t4911;
  p_output1(72)=1.;
  p_output1(73)=0.;
  p_output1(74)=0.;
  p_output1(75)=0.;
  p_output1(76)=0. - 0.0184*t1207 - 1.*t2522*t4606 - 0.7055*t966 - 1.*t4730*t966;
  p_output1(77)=0. - 0.7055*t2522 + t1207*t4730 - 0.0184*t966 + t4606*t966;
  p_output1(78)=1.;
  p_output1(79)=0.;
  p_output1(80)=0.;
  p_output1(81)=0.;
  p_output1(82)=0.05136484440000011;
  p_output1(83)=0.019994554799999897;
}


       
Eigen::Matrix<double,6,14> Jb_VectorNav_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void Jb_VectorNav_to_RightToeBottom(Eigen::Matrix<double,6,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,6,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



