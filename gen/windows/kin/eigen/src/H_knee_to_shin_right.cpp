/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:09:59 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_to_shin_right.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t734;
  double t811;
  double t464;
  double t735;
  double t1088;
  double t1284;
  double t804;
  double t1147;
  double t1266;
  double t384;
  double t1323;
  double t1428;
  double t1432;
  double t1722;
  double t1283;
  double t1509;
  double t1610;
  double t370;
  double t1779;
  double t1801;
  double t1857;
  double t1909;
  double t1910;
  double t1973;
  double t2027;
  double t2066;
  double t2176;
  double t2215;
  double t1715;
  double t2200;
  double t2201;
  double t317;
  double t2303;
  double t2325;
  double t2332;
  double t255;
  double t2718;
  double t2719;
  double t2722;
  double t2738;
  double t2740;
  double t2752;
  double t2736;
  double t2772;
  double t2799;
  double t2866;
  double t2923;
  double t2927;
  double t2941;
  double t3009;
  double t3057;
  double t2485;
  double t2864;
  double t3098;
  double t3102;
  double t3115;
  double t3155;
  double t3172;
  double t3369;
  double t3406;
  double t3427;
  double t3503;
  double t3520;
  double t3542;
  double t3544;
  double t3546;
  double t3561;
  double t3479;
  double t3577;
  double t3583;
  double t3648;
  double t3685;
  double t3692;
  double t2214;
  double t2362;
  double t2366;
  double t2498;
  double t2586;
  double t2609;
  double t3103;
  double t3185;
  double t3207;
  double t3225;
  double t3226;
  double t3286;
  double t3620;
  double t3723;
  double t3731;
  double t3738;
  double t3813;
  double t3826;
  double t4570;
  double t4573;
  double t5042;
  double t5053;
  double t5244;
  double t5246;
  double t5452;
  double t5458;
  double t3908;
  double t3980;
  double t4013;
  double t4589;
  double t4592;
  double t4604;
  double t4655;
  double t4673;
  double t4716;
  double t4748;
  double t4759;
  double t4809;
  double t4974;
  double t4975;
  double t5004;
  double t5064;
  double t5075;
  double t5099;
  double t5175;
  double t5176;
  double t5200;
  double t5293;
  double t5324;
  double t5346;
  double t5356;
  double t5412;
  double t5425;
  double t5473;
  double t5497;
  double t5509;
  double t5603;
  double t5638;
  double t5656;
  double t4028;
  double t4122;
  double t4215;
  double t4281;
  double t4287;
  double t4290;
  t734 = Cos(var1[5]);
  t811 = Sin(var1[3]);
  t464 = Cos(var1[3]);
  t735 = Sin(var1[4]);
  t1088 = Sin(var1[5]);
  t1284 = Sin(var1[13]);
  t804 = t464*t734*t735;
  t1147 = t811*t1088;
  t1266 = t804 + t1147;
  t384 = Cos(var1[13]);
  t1323 = -1.*t734*t811;
  t1428 = t464*t735*t1088;
  t1432 = t1323 + t1428;
  t1722 = Cos(var1[15]);
  t1283 = t384*t1266;
  t1509 = -1.*t1284*t1432;
  t1610 = t1283 + t1509;
  t370 = Sin(var1[15]);
  t1779 = Cos(var1[14]);
  t1801 = Cos(var1[4]);
  t1857 = t1779*t464*t1801;
  t1909 = Sin(var1[14]);
  t1910 = t1284*t1266;
  t1973 = t384*t1432;
  t2027 = t1910 + t1973;
  t2066 = t1909*t2027;
  t2176 = t1857 + t2066;
  t2215 = Cos(var1[16]);
  t1715 = t370*t1610;
  t2200 = t1722*t2176;
  t2201 = t1715 + t2200;
  t317 = Sin(var1[16]);
  t2303 = t1722*t1610;
  t2325 = -1.*t370*t2176;
  t2332 = t2303 + t2325;
  t255 = Cos(var1[17]);
  t2718 = t734*t811*t735;
  t2719 = -1.*t464*t1088;
  t2722 = t2718 + t2719;
  t2738 = t464*t734;
  t2740 = t811*t735*t1088;
  t2752 = t2738 + t2740;
  t2736 = t384*t2722;
  t2772 = -1.*t1284*t2752;
  t2799 = t2736 + t2772;
  t2866 = t1779*t1801*t811;
  t2923 = t1284*t2722;
  t2927 = t384*t2752;
  t2941 = t2923 + t2927;
  t3009 = t1909*t2941;
  t3057 = t2866 + t3009;
  t2485 = Sin(var1[17]);
  t2864 = t370*t2799;
  t3098 = t1722*t3057;
  t3102 = t2864 + t3098;
  t3115 = t1722*t2799;
  t3155 = -1.*t370*t3057;
  t3172 = t3115 + t3155;
  t3369 = t384*t1801*t734;
  t3406 = -1.*t1801*t1284*t1088;
  t3427 = t3369 + t3406;
  t3503 = -1.*t1779*t735;
  t3520 = t1801*t734*t1284;
  t3542 = t384*t1801*t1088;
  t3544 = t3520 + t3542;
  t3546 = t1909*t3544;
  t3561 = t3503 + t3546;
  t3479 = t370*t3427;
  t3577 = t1722*t3561;
  t3583 = t3479 + t3577;
  t3648 = t1722*t3427;
  t3685 = -1.*t370*t3561;
  t3692 = t3648 + t3685;
  t2214 = -1.*t317*t2201;
  t2362 = t2215*t2332;
  t2366 = t2214 + t2362;
  t2498 = t2215*t2201;
  t2586 = t317*t2332;
  t2609 = t2498 + t2586;
  t3103 = -1.*t317*t3102;
  t3185 = t2215*t3172;
  t3207 = t3103 + t3185;
  t3225 = t2215*t3102;
  t3226 = t317*t3172;
  t3286 = t3225 + t3226;
  t3620 = -1.*t317*t3583;
  t3723 = t2215*t3692;
  t3731 = t3620 + t3723;
  t3738 = t2215*t3583;
  t3813 = t317*t3692;
  t3826 = t3738 + t3813;
  t4570 = -1.*t1779;
  t4573 = 1. + t4570;
  t5042 = -1.*t1722;
  t5053 = 1. + t5042;
  t5244 = -1.*t2215;
  t5246 = 1. + t5244;
  t5452 = -1.*t255;
  t5458 = 1. + t5452;
  t3908 = t2485*t2366;
  t3980 = t255*t2609;
  t4013 = t3908 + t3980;
  t4589 = -0.049*t4573;
  t4592 = -0.135*t1909;
  t4604 = 0. + t4589 + t4592;
  t4655 = 0.135*t1284;
  t4673 = 0. + t4655;
  t4716 = -1.*t384;
  t4748 = 1. + t4716;
  t4759 = -0.135*t4748;
  t4809 = 0. + t4759;
  t4974 = -0.135*t4573;
  t4975 = 0.049*t1909;
  t5004 = 0. + t4974 + t4975;
  t5064 = -0.09*t5053;
  t5075 = 0.049*t370;
  t5099 = 0. + t5064 + t5075;
  t5175 = -0.049*t5053;
  t5176 = -0.09*t370;
  t5200 = 0. + t5175 + t5176;
  t5293 = -0.049*t5246;
  t5324 = -0.21*t317;
  t5346 = 0. + t5293 + t5324;
  t5356 = -0.21*t5246;
  t5412 = 0.049*t317;
  t5425 = 0. + t5356 + t5412;
  t5473 = -0.2707*t5458;
  t5497 = 0.0016*t2485;
  t5509 = 0. + t5473 + t5497;
  t5603 = -0.0016*t5458;
  t5638 = -0.2707*t2485;
  t5656 = 0. + t5603 + t5638;
  t4028 = t2485*t3207;
  t4122 = t255*t3286;
  t4215 = t4028 + t4122;
  t4281 = t2485*t3731;
  t4287 = t255*t3826;
  t4290 = t4281 + t4287;

  p_output1(0)=-1.*t2366*t255 + t2485*t2609;
  p_output1(1)=-1.*t255*t3207 + t2485*t3286;
  p_output1(2)=-1.*t255*t3731 + t2485*t3826;
  p_output1(3)=0.;
  p_output1(4)=t4013;
  p_output1(5)=t4215;
  p_output1(6)=t4290;
  p_output1(7)=0.;
  p_output1(8)=-1.*t1779*t2027 + t1801*t1909*t464;
  p_output1(9)=-1.*t1779*t2941 + t1801*t1909*t811;
  p_output1(10)=-1.*t1779*t3544 - 1.*t1909*t735;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.2707*(t2366*t255 - 1.*t2485*t2609) - 0.0016*t4013 + t1801*t4604*t464 - 0.1305*(t1779*t2027 - 1.*t1801*t1909*t464) + t1266*t4673 + t1432*t4809 + t2027*t5004 + t1610*t5099 + t2176*t5200 + t2201*t5346 + t2332*t5425 + t2366*t5509 + t2609*t5656 + var1(0);
  p_output1(13)=0. - 0.2707*(t255*t3207 - 1.*t2485*t3286) - 0.0016*t4215 + t2722*t4673 + t2752*t4809 + t2941*t5004 + t2799*t5099 + t3057*t5200 + t3102*t5346 + t3172*t5425 + t3207*t5509 + t3286*t5656 + t1801*t4604*t811 - 0.1305*(t1779*t2941 - 1.*t1801*t1909*t811) + var1(1);
  p_output1(14)=0. - 0.2707*(t255*t3731 - 1.*t2485*t3826) - 0.0016*t4290 + t1088*t1801*t4809 + t3544*t5004 + t3427*t5099 + t3561*t5200 + t3583*t5346 + t3692*t5425 + t3731*t5509 + t3826*t5656 + t1801*t4673*t734 - 1.*t4604*t735 - 0.1305*(t1779*t3544 + t1909*t735) + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_knee_to_shin_right(const Eigen::Matrix<double,20,1> &var1)
//void H_knee_to_shin_right(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



