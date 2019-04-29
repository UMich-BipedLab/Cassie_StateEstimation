/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:21:10 GMT-05:00
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
  double t733;
  double t808;
  double t1056;
  double t752;
  double t815;
  double t903;
  double t638;
  double t1076;
  double t1116;
  double t1187;
  double t1508;
  double t995;
  double t1220;
  double t1267;
  double t593;
  double t1516;
  double t1601;
  double t1623;
  double t1913;
  double t1337;
  double t1633;
  double t1748;
  double t538;
  double t1969;
  double t1971;
  double t1974;
  double t239;
  double t2171;
  double t2417;
  double t2438;
  double t2482;
  double t2396;
  double t2528;
  double t2571;
  double t2751;
  double t2787;
  double t500;
  double t2657;
  double t2876;
  double t3017;
  double t3151;
  double t3239;
  double t3244;
  double t3038;
  double t3260;
  double t3284;
  double t3315;
  double t3345;
  double t3417;
  double t3458;
  double t3481;
  double t3542;
  double t3550;
  double t3557;
  double t10;
  double t4459;
  double t4530;
  double t4072;
  double t4207;
  double t4600;
  double t4633;
  double t4658;
  double t4682;
  double t4705;
  double t4717;
  double t4722;
  double t4749;
  double t3955;
  double t3963;
  double t4254;
  double t4255;
  double t4701;
  double t4761;
  double t4784;
  double t4805;
  double t4824;
  double t4833;
  double t4849;
  double t4851;
  double t3918;
  double t3930;
  double t3968;
  double t4037;
  double t4801;
  double t4856;
  double t4865;
  double t4932;
  double t4969;
  double t4986;
  double t4996;
  double t5009;
  double t3599;
  double t3615;
  double t3747;
  double t3798;
  double t3840;
  double t3846;
  double t3931;
  double t3941;
  double t4914;
  double t5015;
  double t5027;
  double t5031;
  double t5044;
  double t5055;
  double t5066;
  double t5080;
  double t5174;
  double t5185;
  double t5187;
  double t1764;
  double t2008;
  double t2121;
  double t2154;
  double t2203;
  double t2213;
  double t2269;
  double t2283;
  double t2318;
  double t2345;
  double t2352;
  double t3672;
  double t3700;
  double t5207;
  double t5220;
  double t5351;
  double t5374;
  double t5398;
  double t5429;
  double t5437;
  double t5534;
  double t5545;
  double t5562;
  double t5577;
  double t5579;
  double t61;
  double t5291;
  double t5331;
  double t5475;
  double t5476;
  double t5514;
  double t5714;
  double t5729;
  double t5749;
  double t5843;
  double t5846;
  double t5664;
  double t5682;
  double t5752;
  double t5587;
  t733 = Cos(var1[13]);
  t808 = Sin(var1[13]);
  t1056 = Cos(var1[12]);
  t752 = 0.642788*t733;
  t815 = -0.766044*t808;
  t903 = t752 + t815;
  t638 = Sin(var1[12]);
  t1076 = 0.766044*t733;
  t1116 = 0.642788*t808;
  t1187 = t1076 + t1116;
  t1508 = Cos(var1[11]);
  t995 = t638*t903;
  t1220 = t1056*t1187;
  t1267 = 0. + t995 + t1220;
  t593 = Sin(var1[11]);
  t1516 = t1056*t903;
  t1601 = -1.*t638*t1187;
  t1623 = 0. + t1516 + t1601;
  t1913 = Cos(var1[10]);
  t1337 = -1.*t593*t1267;
  t1633 = t1508*t1623;
  t1748 = 0. + t1337 + t1633;
  t538 = Sin(var1[10]);
  t1969 = t1508*t1267;
  t1971 = t593*t1623;
  t1974 = 0. + t1969 + t1971;
  t239 = Cos(var1[8]);
  t2171 = Cos(var1[9]);
  t2417 = -0.766044*t733;
  t2438 = -0.642788*t808;
  t2482 = t2417 + t2438;
  t2396 = -1.*t638*t903;
  t2528 = t1056*t2482;
  t2571 = 0. + t2396 + t2528;
  t2751 = t638*t2482;
  t2787 = 0. + t1516 + t2751;
  t500 = Sin(var1[9]);
  t2657 = t593*t2571;
  t2876 = t1508*t2787;
  t3017 = 0. + t2657 + t2876;
  t3151 = t1508*t2571;
  t3239 = -1.*t593*t2787;
  t3244 = 0. + t3151 + t3239;
  t3038 = -1.*t538*t3017;
  t3260 = t1913*t3244;
  t3284 = 0. + t3038 + t3260;
  t3315 = t2171*t3284;
  t3345 = t1913*t3017;
  t3417 = t538*t3244;
  t3458 = 0. + t3345 + t3417;
  t3481 = -1.*t500*t3458;
  t3542 = 0. + t3315 + t3481;
  t3550 = t239*t3542;
  t3557 = 0. + t3550;
  t10 = Sin(var1[8]);
  t4459 = -1.*t733;
  t4530 = 1. + t4459;
  t4072 = -1.*t1056;
  t4207 = 1. + t4072;
  t4600 = -0.0216*t4530;
  t4633 = 0.0306*t733;
  t4658 = 0.01770000000000005*t808;
  t4682 = 0. + t4600 + t4633 + t4658;
  t4705 = -1.1135*t4530;
  t4717 = -1.1312*t733;
  t4722 = 0.052199999999999996*t808;
  t4749 = 0. + t4705 + t4717 + t4722;
  t3955 = -1.*t1508;
  t3963 = 1. + t3955;
  t4254 = -0.7055*t4207;
  t4255 = -0.0184*t638;
  t4701 = t638*t4682;
  t4761 = t1056*t4749;
  t4784 = 0. + t4254 + t4255 + t4701 + t4761;
  t4805 = 0.0184*t4207;
  t4824 = -0.7055*t638;
  t4833 = t1056*t4682;
  t4849 = -1.*t638*t4749;
  t4851 = 0. + t4805 + t4824 + t4833 + t4849;
  t3918 = -1.*t1913;
  t3930 = 1. + t3918;
  t3968 = -0.0016*t3963;
  t4037 = -0.2707*t593;
  t4801 = -1.*t593*t4784;
  t4856 = t1508*t4851;
  t4865 = 0. + t3968 + t4037 + t4801 + t4856;
  t4932 = -0.2707*t3963;
  t4969 = 0.0016*t593;
  t4986 = t1508*t4784;
  t4996 = t593*t4851;
  t5009 = 0. + t4932 + t4969 + t4986 + t4996;
  t3599 = -1.*t239;
  t3615 = 1. + t3599;
  t3747 = -1.*t2171;
  t3798 = 1. + t3747;
  t3840 = -0.049*t3798;
  t3846 = -0.09*t500;
  t3931 = -0.21*t3930;
  t3941 = 0.049*t538;
  t4914 = t538*t4865;
  t5015 = t1913*t5009;
  t5027 = 0. + t3931 + t3941 + t4914 + t5015;
  t5031 = -1.*t500*t5027;
  t5044 = -0.049*t3930;
  t5055 = -0.21*t538;
  t5066 = t1913*t4865;
  t5080 = -1.*t538*t5009;
  t5174 = 0. + t5044 + t5055 + t5066 + t5080;
  t5185 = t2171*t5174;
  t5187 = 0. + t3840 + t3846 + t5031 + t5185;
  t1764 = t538*t1748;
  t2008 = t1913*t1974;
  t2121 = 0. + t1764 + t2008;
  t2154 = -1.*t500*t2121;
  t2203 = t1913*t1748;
  t2213 = -1.*t538*t1974;
  t2269 = 0. + t2203 + t2213;
  t2283 = t2171*t2269;
  t2318 = 0. + t2154 + t2283;
  t2345 = t239*t2318;
  t2352 = 0. + t2345;
  t3672 = -0.049*t3615;
  t3700 = -0.004500000000000004*t10;
  t5207 = t239*t5187;
  t5220 = 0. + t3672 + t3700 + t5207;
  t5351 = -0.135*t3615;
  t5374 = -0.1305*t239;
  t5398 = 0.049*t10;
  t5429 = t10*t5187;
  t5437 = 0. + t5351 + t5374 + t5398 + t5429;
  t5534 = -0.09*t3798;
  t5545 = 0.049*t500;
  t5562 = t2171*t5027;
  t5577 = t500*t5174;
  t5579 = 0. + t5534 + t5545 + t5562 + t5577;
  t61 = 0. + t10;
  t5291 = t10*t3542;
  t5331 = 0. + t5291;
  t5475 = t500*t3284;
  t5476 = t2171*t3458;
  t5514 = 0. + t5475 + t5476;
  t5714 = t2171*t2121;
  t5729 = t500*t2269;
  t5749 = 0. + t5714 + t5729;
  t5843 = -1.*t239;
  t5846 = 0. + t5843;
  t5664 = t10*t2318;
  t5682 = 0. + t5664;
  t5752 = -1.*t5579*t5749;
  t5587 = t5514*t5579;

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
  p_output1(42)=t61;
  p_output1(43)=t2352;
  p_output1(44)=t3557;
  p_output1(45)=0. + t2352*(t3557*t5220 + t5331*t5437 + t5587) + t3557*(-1.*t2352*t5220 - 1.*t5437*t5682 + t5752);
  p_output1(46)=0.135*t5749 + (-1.*t3557*t5220 - 1.*t5331*t5437 - 1.*t5514*t5579)*t61 + t3557*(0. + t5437*t5846 + t5220*t61);
  p_output1(47)=0.135*t5514 + (t2352*t5220 + t5437*t5682 + t5579*t5749)*t61 + t2352*(0. - 1.*t5437*t5846 - 1.*t5220*t61);
  p_output1(48)=0.;
  p_output1(49)=t5749;
  p_output1(50)=t5514;
  p_output1(51)=-0.049 + (0. + t3542*t5187 + t5587)*t5749 + t5514*(0. - 1.*t2318*t5187 + t5752);
  p_output1(52)=0. - 0.135*t2318 + 0.1305*t5514;
  p_output1(53)=0. - 0.135*t3542 - 0.1305*t5749;
  p_output1(54)=1.;
  p_output1(55)=0.;
  p_output1(56)=0.;
  p_output1(57)=0.;
  p_output1(58)=0. + 0.049*t2121 - 0.09*t2269 - 1.*t3458*t5027 - 1.*t3284*t5174;
  p_output1(59)=0. - 0.09*t3284 + 0.049*t3458 + t2121*t5027 + t2269*t5174;
  p_output1(60)=1.;
  p_output1(61)=0.;
  p_output1(62)=0.;
  p_output1(63)=0.;
  p_output1(64)=0. - 0.21*t1748 + 0.049*t1974 - 1.*t3244*t4865 - 1.*t3017*t5009;
  p_output1(65)=0. + 0.049*t3017 - 0.21*t3244 + t1748*t4865 + t1974*t5009;
  p_output1(66)=1.;
  p_output1(67)=0.;
  p_output1(68)=0.;
  p_output1(69)=0.;
  p_output1(70)=0. + 0.0016*t1267 - 0.2707*t1623 - 1.*t2787*t4784 - 1.*t2571*t4851;
  p_output1(71)=0. - 0.2707*t2571 + 0.0016*t2787 + t1267*t4784 + t1623*t4851;
  p_output1(72)=1.;
  p_output1(73)=0.;
  p_output1(74)=0.;
  p_output1(75)=0.;
  p_output1(76)=0. - 0.0184*t1187 - 1.*t2482*t4682 - 0.7055*t903 - 1.*t4749*t903;
  p_output1(77)=0. - 0.7055*t2482 + t1187*t4749 - 0.0184*t903 + t4682*t903;
  p_output1(78)=1.;
  p_output1(79)=0.;
  p_output1(80)=0.;
  p_output1(81)=0.;
  p_output1(82)=0.05136484440000011;
  p_output1(83)=0.019994554799999897;
}


       
Eigen::Matrix<double,6,14> Jb_VectorNav_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,6,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



