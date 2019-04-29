/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:52 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeFront_src.h"

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
  double t1240;
  double t1004;
  double t1290;
  double t1118;
  double t1338;
  double t35;
  double t1190;
  double t1444;
  double t1471;
  double t1652;
  double t1692;
  double t1723;
  double t1861;
  double t2119;
  double t2274;
  double t2297;
  double t2316;
  double t2016;
  double t2027;
  double t2031;
  double t2457;
  double t2922;
  double t2959;
  double t2963;
  double t2989;
  double t2897;
  double t2905;
  double t2918;
  double t3119;
  double t3122;
  double t3171;
  double t3272;
  double t3284;
  double t3342;
  double t3407;
  double t3484;
  double t3545;
  double t3558;
  double t3723;
  double t3738;
  double t3739;
  double t3784;
  double t3883;
  double t3902;
  double t3936;
  double t3982;
  double t3996;
  double t4017;
  double t4131;
  double t4133;
  double t4204;
  double t4332;
  double t4359;
  double t4400;
  double t4432;
  double t4471;
  double t4490;
  double t4491;
  double t4588;
  double t4621;
  double t4648;
  double t4692;
  double t4716;
  double t4748;
  double t4814;
  double t4988;
  double t5008;
  double t5100;
  double t5280;
  double t5428;
  double t5490;
  double t141;
  double t262;
  double t493;
  double t914;
  double t1929;
  double t1970;
  double t5892;
  double t5912;
  double t5924;
  double t5968;
  double t6034;
  double t6077;
  double t2310;
  double t2367;
  double t2407;
  double t2566;
  double t2568;
  double t2622;
  double t6108;
  double t6156;
  double t6176;
  double t2971;
  double t3011;
  double t3054;
  double t3185;
  double t3203;
  double t3229;
  double t3383;
  double t3409;
  double t3452;
  double t6302;
  double t6305;
  double t6336;
  double t6391;
  double t6434;
  double t6447;
  double t3662;
  double t3693;
  double t3703;
  double t3908;
  double t3956;
  double t3959;
  double t6469;
  double t6473;
  double t6477;
  double t6520;
  double t6529;
  double t6533;
  double t4093;
  double t4109;
  double t4110;
  double t4401;
  double t4447;
  double t4461;
  double t6544;
  double t6545;
  double t6560;
  double t6562;
  double t6565;
  double t6578;
  double t4521;
  double t4555;
  double t4576;
  double t4754;
  double t4818;
  double t4940;
  double t6589;
  double t6594;
  double t6613;
  double t6629;
  double t6633;
  double t6645;
  double t5208;
  double t5250;
  double t5251;
  double t6654;
  double t6669;
  double t6681;
  double t6689;
  double t6698;
  double t6711;
  double t6913;
  double t6923;
  double t6932;
  double t6964;
  double t6986;
  double t6987;
  double t7021;
  double t7037;
  double t7042;
  double t7068;
  double t7075;
  double t7080;
  double t7089;
  double t7092;
  double t7094;
  double t7106;
  double t7111;
  double t7114;
  double t7117;
  double t7125;
  double t7129;
  double t7162;
  double t7165;
  double t7166;
  double t7183;
  double t7186;
  double t7189;
  double t7209;
  double t7217;
  double t7225;
  double t7239;
  double t7249;
  double t7253;
  t1240 = Cos(var1[3]);
  t1004 = Cos(var1[5]);
  t1290 = Sin(var1[4]);
  t1118 = Sin(var1[3]);
  t1338 = Sin(var1[5]);
  t35 = Cos(var1[6]);
  t1190 = -1.*t1004*t1118;
  t1444 = t1240*t1290*t1338;
  t1471 = t1190 + t1444;
  t1652 = t1240*t1004*t1290;
  t1692 = t1118*t1338;
  t1723 = t1652 + t1692;
  t1861 = Sin(var1[6]);
  t2119 = Cos(var1[7]);
  t2274 = -1.*t2119;
  t2297 = 1. + t2274;
  t2316 = Sin(var1[7]);
  t2016 = t35*t1471;
  t2027 = t1723*t1861;
  t2031 = t2016 + t2027;
  t2457 = Cos(var1[4]);
  t2922 = Cos(var1[8]);
  t2959 = -1.*t2922;
  t2963 = 1. + t2959;
  t2989 = Sin(var1[8]);
  t2897 = t1240*t2457*t2119;
  t2905 = t2031*t2316;
  t2918 = t2897 + t2905;
  t3119 = t35*t1723;
  t3122 = -1.*t1471*t1861;
  t3171 = t3119 + t3122;
  t3272 = Cos(var1[9]);
  t3284 = -1.*t3272;
  t3342 = 1. + t3284;
  t3407 = Sin(var1[9]);
  t3484 = t2922*t2918;
  t3545 = t3171*t2989;
  t3558 = t3484 + t3545;
  t3723 = t2922*t3171;
  t3738 = -1.*t2918*t2989;
  t3739 = t3723 + t3738;
  t3784 = Cos(var1[10]);
  t3883 = -1.*t3784;
  t3902 = 1. + t3883;
  t3936 = Sin(var1[10]);
  t3982 = -1.*t3407*t3558;
  t3996 = t3272*t3739;
  t4017 = t3982 + t3996;
  t4131 = t3272*t3558;
  t4133 = t3407*t3739;
  t4204 = t4131 + t4133;
  t4332 = Cos(var1[11]);
  t4359 = -1.*t4332;
  t4400 = 1. + t4359;
  t4432 = Sin(var1[11]);
  t4471 = t3936*t4017;
  t4490 = t3784*t4204;
  t4491 = t4471 + t4490;
  t4588 = t3784*t4017;
  t4621 = -1.*t3936*t4204;
  t4648 = t4588 + t4621;
  t4692 = Cos(var1[12]);
  t4716 = -1.*t4692;
  t4748 = 1. + t4716;
  t4814 = Sin(var1[12]);
  t4988 = -1.*t4432*t4491;
  t5008 = t4332*t4648;
  t5100 = t4988 + t5008;
  t5280 = t4332*t4491;
  t5428 = t4432*t4648;
  t5490 = t5280 + t5428;
  t141 = -1.*t35;
  t262 = 1. + t141;
  t493 = 0.135*t262;
  t914 = 0. + t493;
  t1929 = -0.135*t1861;
  t1970 = 0. + t1929;
  t5892 = t1240*t1004;
  t5912 = t1118*t1290*t1338;
  t5924 = t5892 + t5912;
  t5968 = t1004*t1118*t1290;
  t6034 = -1.*t1240*t1338;
  t6077 = t5968 + t6034;
  t2310 = 0.135*t2297;
  t2367 = 0.049*t2316;
  t2407 = 0. + t2310 + t2367;
  t2566 = -0.049*t2297;
  t2568 = 0.135*t2316;
  t2622 = 0. + t2566 + t2568;
  t6108 = t35*t5924;
  t6156 = t6077*t1861;
  t6176 = t6108 + t6156;
  t2971 = -0.049*t2963;
  t3011 = -0.09*t2989;
  t3054 = 0. + t2971 + t3011;
  t3185 = -0.09*t2963;
  t3203 = 0.049*t2989;
  t3229 = 0. + t3185 + t3203;
  t3383 = -0.049*t3342;
  t3409 = -0.21*t3407;
  t3452 = 0. + t3383 + t3409;
  t6302 = t2457*t2119*t1118;
  t6305 = t6176*t2316;
  t6336 = t6302 + t6305;
  t6391 = t35*t6077;
  t6434 = -1.*t5924*t1861;
  t6447 = t6391 + t6434;
  t3662 = -0.21*t3342;
  t3693 = 0.049*t3407;
  t3703 = 0. + t3662 + t3693;
  t3908 = -0.2707*t3902;
  t3956 = 0.0016*t3936;
  t3959 = 0. + t3908 + t3956;
  t6469 = t2922*t6336;
  t6473 = t6447*t2989;
  t6477 = t6469 + t6473;
  t6520 = t2922*t6447;
  t6529 = -1.*t6336*t2989;
  t6533 = t6520 + t6529;
  t4093 = -0.0016*t3902;
  t4109 = -0.2707*t3936;
  t4110 = 0. + t4093 + t4109;
  t4401 = 0.0184*t4400;
  t4447 = -0.7055*t4432;
  t4461 = 0. + t4401 + t4447;
  t6544 = -1.*t3407*t6477;
  t6545 = t3272*t6533;
  t6560 = t6544 + t6545;
  t6562 = t3272*t6477;
  t6565 = t3407*t6533;
  t6578 = t6562 + t6565;
  t4521 = -0.7055*t4400;
  t4555 = -0.0184*t4432;
  t4576 = 0. + t4521 + t4555;
  t4754 = -1.1135*t4748;
  t4818 = 0.0216*t4814;
  t4940 = 0. + t4754 + t4818;
  t6589 = t3936*t6560;
  t6594 = t3784*t6578;
  t6613 = t6589 + t6594;
  t6629 = t3784*t6560;
  t6633 = -1.*t3936*t6578;
  t6645 = t6629 + t6633;
  t5208 = -0.0216*t4748;
  t5250 = -1.1135*t4814;
  t5251 = 0. + t5208 + t5250;
  t6654 = -1.*t4432*t6613;
  t6669 = t4332*t6645;
  t6681 = t6654 + t6669;
  t6689 = t4332*t6613;
  t6698 = t4432*t6645;
  t6711 = t6689 + t6698;
  t6913 = t2457*t35*t1338;
  t6923 = t2457*t1004*t1861;
  t6932 = t6913 + t6923;
  t6964 = -1.*t2119*t1290;
  t6986 = t6932*t2316;
  t6987 = t6964 + t6986;
  t7021 = t2457*t1004*t35;
  t7037 = -1.*t2457*t1338*t1861;
  t7042 = t7021 + t7037;
  t7068 = t2922*t6987;
  t7075 = t7042*t2989;
  t7080 = t7068 + t7075;
  t7089 = t2922*t7042;
  t7092 = -1.*t6987*t2989;
  t7094 = t7089 + t7092;
  t7106 = -1.*t3407*t7080;
  t7111 = t3272*t7094;
  t7114 = t7106 + t7111;
  t7117 = t3272*t7080;
  t7125 = t3407*t7094;
  t7129 = t7117 + t7125;
  t7162 = t3936*t7114;
  t7165 = t3784*t7129;
  t7166 = t7162 + t7165;
  t7183 = t3784*t7114;
  t7186 = -1.*t3936*t7129;
  t7189 = t7183 + t7186;
  t7209 = -1.*t4432*t7166;
  t7217 = t4332*t7189;
  t7225 = t7209 + t7217;
  t7239 = t4332*t7166;
  t7249 = t4432*t7189;
  t7253 = t7239 + t7249;
  p_output1[0]=0. + t1723*t1970 + t2031*t2407 + 0.1305*(t2031*t2119 - 1.*t1240*t2316*t2457) + t1240*t2457*t2622 + t2918*t3054 + t3171*t3229 + t3452*t3558 + t3703*t3739 + t3959*t4017 + t4110*t4204 + t4461*t4491 + t4576*t4648 + t4940*t5100 + t5251*t5490 + 0.088451*(t4814*t5100 + t4692*t5490) - 1.062256*(t4692*t5100 - 1.*t4814*t5490) + t1471*t914 + var1[0];
  p_output1[1]=0. + t1118*t2457*t2622 + t1970*t6077 + t2407*t6176 + 0.1305*(-1.*t1118*t2316*t2457 + t2119*t6176) + t3054*t6336 + t3229*t6447 + t3452*t6477 + t3703*t6533 + t3959*t6560 + t4110*t6578 + t4461*t6613 + t4576*t6645 + t4940*t6681 + t5251*t6711 + 0.088451*(t4814*t6681 + t4692*t6711) - 1.062256*(t4692*t6681 - 1.*t4814*t6711) + t5924*t914 + var1[1];
  p_output1[2]=0. + t1004*t1970*t2457 - 1.*t1290*t2622 + t2407*t6932 + 0.1305*(t1290*t2316 + t2119*t6932) + t3054*t6987 + t3229*t7042 + t3452*t7080 + t3703*t7094 + t3959*t7114 + t4110*t7129 + t4461*t7166 + t4576*t7189 + t4940*t7225 + t5251*t7253 + 0.088451*(t4814*t7225 + t4692*t7253) - 1.062256*(t4692*t7225 - 1.*t4814*t7253) + t1338*t2457*t914 + var1[2];
}



void p_LeftToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
