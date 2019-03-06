/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:14 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_knee_joint_left.h"

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
static void output1(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t357;
  double t403;
  double t415;
  double t349;
  double t472;
  double t54;
  double t380;
  double t534;
  double t600;
  double t682;
  double t716;
  double t726;
  double t755;
  double t1104;
  double t1202;
  double t1371;
  double t1578;
  double t915;
  double t939;
  double t1037;
  double t2243;
  double t2655;
  double t2673;
  double t2738;
  double t2807;
  double t2589;
  double t2635;
  double t2652;
  double t2956;
  double t3011;
  double t3106;
  double t3265;
  double t3293;
  double t3298;
  double t3338;
  double t3406;
  double t3415;
  double t3450;
  double t3609;
  double t3750;
  double t3752;
  double t70;
  double t109;
  double t166;
  double t270;
  double t761;
  double t784;
  double t4542;
  double t4602;
  double t4607;
  double t4932;
  double t5118;
  double t5123;
  double t1507;
  double t1595;
  double t1797;
  double t2310;
  double t2327;
  double t2380;
  double t5205;
  double t5250;
  double t5278;
  double t2768;
  double t2845;
  double t2879;
  double t3152;
  double t3164;
  double t3185;
  double t3336;
  double t3382;
  double t3396;
  double t5608;
  double t5660;
  double t5681;
  double t5786;
  double t5787;
  double t5822;
  double t3490;
  double t3492;
  double t3521;
  double t5951;
  double t5959;
  double t5968;
  double t6139;
  double t6146;
  double t6151;
  double t6339;
  double t6378;
  double t6409;
  double t6485;
  double t6501;
  double t6506;
  double t6526;
  double t6528;
  double t6538;
  double t6544;
  double t6550;
  double t6553;
  double t6561;
  double t6562;
  double t6567;
  double t6656;
  double t6658;
  double t6666;
  double t6760;
  double t6801;
  double t6807;
  double t6820;
  double t6842;
  double t6857;
  double t6886;
  double t6898;
  double t6901;
  double t6905;
  double t6909;
  double t6910;
  double t6989;
  double t6992;
  double t7009;
  double t7058;
  double t7060;
  double t7068;
  double t7073;
  double t7077;
  double t7085;
  double t7096;
  double t7097;
  double t7098;
  double t7112;
  double t7115;
  double t7123;
  double t7157;
  double t7171;
  double t7176;
  double t7186;
  double t7189;
  double t7201;
  double t7215;
  double t7225;
  double t7232;
  double t7234;
  double t7235;
  double t7239;
  double t7243;
  double t7244;
  double t7285;
  double t7293;
  double t7296;
  double t7315;
  double t7317;
  double t7319;
  double t7328;
  double t7330;
  double t7346;
  double t7350;
  double t7353;
  double t7369;
  double t7372;
  double t7373;
  double t7434;
  double t7438;
  double t7440;
  double t7452;
  double t7459;
  double t7464;
  double t7472;
  double t7473;
  double t7475;
  double t7479;
  double t7491;
  double t7497;
  double t7561;
  double t7565;
  double t7574;
  double t7576;
  double t7579;
  double t7586;
  double t7594;
  double t7595;
  double t7652;
  double t7655;
  double t7660;
  double t7666;
  double t7672;
  double t7686;
  double t7691;
  double t7697;
  double t7698;
  double t7700;
  double t7705;
  double t7707;
  double t7709;
  double t7442;
  double t7446;
  double t7451;
  double t7466;
  double t7477;
  double t7499;
  double t7503;
  double t7505;
  double t7508;
  double t7518;
  double t7521;
  double t7523;
  double t7525;
  double t7529;
  double t5507;
  double t5512;
  double t5521;
  double t7759;
  double t7760;
  double t7770;
  double t7778;
  double t7782;
  double t7871;
  double t7877;
  double t7879;
  double t7887;
  double t7889;
  double t7896;
  double t7962;
  double t7963;
  double t7969;
  double t7977;
  double t7978;
  double t7981;
  double t8054;
  double t8055;
  double t8058;
  double t6197;
  double t8035;
  double t8036;
  double t8043;
  double t8044;
  double t8048;
  double t8088;
  double t8089;
  double t8090;
  double t8094;
  double t8098;
  double t8099;
  double t8107;
  double t8108;
  double t8110;
  double t8143;
  double t8145;
  double t8147;
  double t8152;
  double t8162;
  double t8163;
  double t8167;
  double t8172;
  double t8176;
  double t6183;
  double t6222;
  double t8070;
  double t8214;
  double t8215;
  double t8216;
  double t8222;
  double t8225;
  double t8248;
  double t8251;
  double t8257;
  double t8121;
  double t8130;
  double t8292;
  double t8294;
  double t8298;
  double t8184;
  double t8193;
  t357 = Cos(var1[5]);
  t403 = Sin(var1[3]);
  t415 = Sin(var1[4]);
  t349 = Cos(var1[3]);
  t472 = Sin(var1[5]);
  t54 = Cos(var1[6]);
  t380 = -1.*t349*t357;
  t534 = -1.*t403*t415*t472;
  t600 = t380 + t534;
  t682 = -1.*t357*t403*t415;
  t716 = t349*t472;
  t726 = t682 + t716;
  t755 = Sin(var1[6]);
  t1104 = Cos(var1[7]);
  t1202 = -1.*t1104;
  t1371 = 1. + t1202;
  t1578 = Sin(var1[7]);
  t915 = t54*t600;
  t939 = t726*t755;
  t1037 = t915 + t939;
  t2243 = Cos(var1[4]);
  t2655 = Cos(var1[8]);
  t2673 = -1.*t2655;
  t2738 = 1. + t2673;
  t2807 = Sin(var1[8]);
  t2589 = -1.*t2243*t1104*t403;
  t2635 = t1037*t1578;
  t2652 = t2589 + t2635;
  t2956 = t54*t726;
  t3011 = -1.*t600*t755;
  t3106 = t2956 + t3011;
  t3265 = Cos(var1[9]);
  t3293 = -1.*t3265;
  t3298 = 1. + t3293;
  t3338 = Sin(var1[9]);
  t3406 = t2655*t2652;
  t3415 = t3106*t2807;
  t3450 = t3406 + t3415;
  t3609 = t2655*t3106;
  t3750 = -1.*t2652*t2807;
  t3752 = t3609 + t3750;
  t70 = -1.*t54;
  t109 = 1. + t70;
  t166 = 0.135*t109;
  t270 = 0. + t166;
  t761 = -0.135*t755;
  t784 = 0. + t761;
  t4542 = -1.*t357*t403;
  t4602 = t349*t415*t472;
  t4607 = t4542 + t4602;
  t4932 = t349*t357*t415;
  t5118 = t403*t472;
  t5123 = t4932 + t5118;
  t1507 = 0.135*t1371;
  t1595 = 0.049*t1578;
  t1797 = 0. + t1507 + t1595;
  t2310 = -0.049*t1371;
  t2327 = 0.135*t1578;
  t2380 = 0. + t2310 + t2327;
  t5205 = t54*t4607;
  t5250 = t5123*t755;
  t5278 = t5205 + t5250;
  t2768 = -0.049*t2738;
  t2845 = -0.09*t2807;
  t2879 = 0. + t2768 + t2845;
  t3152 = -0.09*t2738;
  t3164 = 0.049*t2807;
  t3185 = 0. + t3152 + t3164;
  t3336 = -0.049*t3298;
  t3382 = -0.21*t3338;
  t3396 = 0. + t3336 + t3382;
  t5608 = t349*t2243*t1104;
  t5660 = t5278*t1578;
  t5681 = t5608 + t5660;
  t5786 = t54*t5123;
  t5787 = -1.*t4607*t755;
  t5822 = t5786 + t5787;
  t3490 = -0.21*t3298;
  t3492 = 0.049*t3338;
  t3521 = 0. + t3490 + t3492;
  t5951 = t2655*t5681;
  t5959 = t5822*t2807;
  t5968 = t5951 + t5959;
  t6139 = t2655*t5822;
  t6146 = -1.*t5681*t2807;
  t6151 = t6139 + t6146;
  t6339 = t349*t2243*t54*t472;
  t6378 = t349*t2243*t357*t755;
  t6409 = t6339 + t6378;
  t6485 = -1.*t349*t1104*t415;
  t6501 = t6409*t1578;
  t6506 = t6485 + t6501;
  t6526 = t349*t2243*t357*t54;
  t6528 = -1.*t349*t2243*t472*t755;
  t6538 = t6526 + t6528;
  t6544 = t2655*t6506;
  t6550 = t6538*t2807;
  t6553 = t6544 + t6550;
  t6561 = t2655*t6538;
  t6562 = -1.*t6506*t2807;
  t6567 = t6561 + t6562;
  t6656 = t2243*t54*t403*t472;
  t6658 = t2243*t357*t403*t755;
  t6666 = t6656 + t6658;
  t6760 = -1.*t1104*t403*t415;
  t6801 = t6666*t1578;
  t6807 = t6760 + t6801;
  t6820 = t2243*t357*t54*t403;
  t6842 = -1.*t2243*t403*t472*t755;
  t6857 = t6820 + t6842;
  t6886 = t2655*t6807;
  t6898 = t6857*t2807;
  t6901 = t6886 + t6898;
  t6905 = t2655*t6857;
  t6909 = -1.*t6807*t2807;
  t6910 = t6905 + t6909;
  t6989 = -1.*t54*t415*t472;
  t6992 = -1.*t357*t415*t755;
  t7009 = t6989 + t6992;
  t7058 = -1.*t2243*t1104;
  t7060 = t7009*t1578;
  t7068 = t7058 + t7060;
  t7073 = -1.*t357*t54*t415;
  t7077 = t415*t472*t755;
  t7085 = t7073 + t7077;
  t7096 = t2655*t7068;
  t7097 = t7085*t2807;
  t7098 = t7096 + t7097;
  t7112 = t2655*t7085;
  t7115 = -1.*t7068*t2807;
  t7123 = t7112 + t7115;
  t7157 = t357*t403;
  t7171 = -1.*t349*t415*t472;
  t7176 = t7157 + t7171;
  t7186 = t7176*t755;
  t7189 = t5786 + t7186;
  t7201 = t54*t7176;
  t7215 = -1.*t5123*t755;
  t7225 = t7201 + t7215;
  t7232 = t2655*t7189*t1578;
  t7234 = t7225*t2807;
  t7235 = t7232 + t7234;
  t7239 = t2655*t7225;
  t7243 = -1.*t7189*t1578*t2807;
  t7244 = t7239 + t7243;
  t7285 = t357*t403*t415;
  t7293 = -1.*t349*t472;
  t7296 = t7285 + t7293;
  t7315 = t54*t7296;
  t7317 = t600*t755;
  t7319 = t7315 + t7317;
  t7328 = -1.*t7296*t755;
  t7330 = t915 + t7328;
  t7346 = t2655*t7319*t1578;
  t7350 = t7330*t2807;
  t7353 = t7346 + t7350;
  t7369 = t2655*t7330;
  t7372 = -1.*t7319*t1578*t2807;
  t7373 = t7369 + t7372;
  t7434 = t2243*t357*t54;
  t7438 = -1.*t2243*t472*t755;
  t7440 = t7434 + t7438;
  t7452 = -1.*t2243*t54*t472;
  t7459 = -1.*t2243*t357*t755;
  t7464 = t7452 + t7459;
  t7472 = t2655*t7440*t1578;
  t7473 = t7464*t2807;
  t7475 = t7472 + t7473;
  t7479 = t2655*t7464;
  t7491 = -1.*t7440*t1578*t2807;
  t7497 = t7479 + t7491;
  t7561 = -1.*t54*t4607;
  t7565 = t7561 + t7215;
  t7574 = t2655*t5822*t1578;
  t7576 = t7565*t2807;
  t7579 = t7574 + t7576;
  t7586 = t2655*t7565;
  t7594 = -1.*t5822*t1578*t2807;
  t7595 = t7586 + t7594;
  t7652 = t349*t357;
  t7655 = t403*t415*t472;
  t7660 = t7652 + t7655;
  t7666 = -1.*t7660*t755;
  t7672 = t7315 + t7666;
  t7686 = -1.*t54*t7660;
  t7691 = t7686 + t7328;
  t7697 = t2655*t7672*t1578;
  t7698 = t7691*t2807;
  t7700 = t7697 + t7698;
  t7705 = t2655*t7691;
  t7707 = -1.*t7672*t1578*t2807;
  t7709 = t7705 + t7707;
  t7442 = 0.1305*t1104*t7440;
  t7446 = t7440*t1797;
  t7451 = t7440*t1578*t2879;
  t7466 = t7464*t3185;
  t7477 = t3396*t7475;
  t7499 = t3521*t7497;
  t7503 = -1.*t3338*t7475;
  t7505 = t3265*t7497;
  t7508 = t7503 + t7505;
  t7518 = -0.21*t7508;
  t7521 = t3265*t7475;
  t7523 = t3338*t7497;
  t7525 = t7521 + t7523;
  t7529 = -0.049*t7525;
  t5507 = t1104*t5278;
  t5512 = -1.*t349*t2243*t1578;
  t5521 = t5507 + t5512;
  t7759 = 0.135*t1104;
  t7760 = -0.049*t1578;
  t7770 = t7759 + t7760;
  t7778 = 0.049*t1104;
  t7782 = t7778 + t2327;
  t7871 = t54*t7660;
  t7877 = t7296*t755;
  t7879 = t7871 + t7877;
  t7887 = t1104*t7879;
  t7889 = -1.*t2243*t403*t1578;
  t7896 = t7887 + t7889;
  t7962 = t2243*t54*t472;
  t7963 = t2243*t357*t755;
  t7969 = t7962 + t7963;
  t7977 = t1104*t7969;
  t7978 = t415*t1578;
  t7981 = t7977 + t7978;
  t8054 = -1.*t2655*t5681;
  t8055 = -1.*t5822*t2807;
  t8058 = t8054 + t8055;
  t6197 = t3265*t6151;
  t8035 = 0.049*t2655;
  t8036 = t8035 + t2845;
  t8043 = -0.09*t2655;
  t8044 = -0.049*t2807;
  t8048 = t8043 + t8044;
  t8088 = t2243*t1104*t403;
  t8089 = t7879*t1578;
  t8090 = t8088 + t8089;
  t8094 = -1.*t2655*t8090;
  t8098 = -1.*t7672*t2807;
  t8099 = t8094 + t8098;
  t8107 = t2655*t7672;
  t8108 = -1.*t8090*t2807;
  t8110 = t8107 + t8108;
  t8143 = -1.*t1104*t415;
  t8145 = t7969*t1578;
  t8147 = t8143 + t8145;
  t8152 = -1.*t2655*t8147;
  t8162 = -1.*t7440*t2807;
  t8163 = t8152 + t8162;
  t8167 = t2655*t7440;
  t8172 = -1.*t8147*t2807;
  t8176 = t8167 + t8172;
  t6183 = -1.*t3338*t5968;
  t6222 = t6183 + t6197;
  t8070 = -1.*t3338*t6151;
  t8214 = -0.21*t3265;
  t8215 = -0.049*t3338;
  t8216 = t8214 + t8215;
  t8222 = 0.049*t3265;
  t8225 = t8222 + t3382;
  t8248 = t2655*t8090;
  t8251 = t7672*t2807;
  t8257 = t8248 + t8251;
  t8121 = t3265*t8110;
  t8130 = -1.*t3338*t8110;
  t8292 = t2655*t8147;
  t8294 = t7440*t2807;
  t8298 = t8292 + t8294;
  t8184 = t3265*t8176;
  t8193 = -1.*t3338*t8176;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1037*t1797 + t2652*t2879 + t3106*t3185 + t3396*t3450 + t3521*t3752 - 0.21*(-1.*t3338*t3450 + t3265*t3752) - 0.049*(t3265*t3450 + t3338*t3752) - 1.*t2243*t2380*t403 + 0.1305*(t1037*t1104 + t1578*t2243*t403) + t270*t600 + t726*t784;
  p_output1(10)=t2243*t2380*t349 + t270*t4607 + t1797*t5278 + 0.1305*t5521 + t2879*t5681 + t3185*t5822 + t3396*t5968 + t3521*t6151 - 0.049*(t3265*t5968 + t3338*t6151) - 0.21*t6222 + t5123*t784;
  p_output1(11)=0;
  p_output1(12)=-1.*t2380*t349*t415 + t2243*t270*t349*t472 + t1797*t6409 + 0.1305*(t1578*t349*t415 + t1104*t6409) + t2879*t6506 + t3185*t6538 + t3396*t6553 + t3521*t6567 - 0.21*(-1.*t3338*t6553 + t3265*t6567) - 0.049*(t3265*t6553 + t3338*t6567) + t2243*t349*t357*t784;
  p_output1(13)=-1.*t2380*t403*t415 + t2243*t270*t403*t472 + t1797*t6666 + 0.1305*(t1578*t403*t415 + t1104*t6666) + t2879*t6807 + t3185*t6857 + t3396*t6901 + t3521*t6910 - 0.21*(-1.*t3338*t6901 + t3265*t6910) - 0.049*(t3265*t6901 + t3338*t6910) + t2243*t357*t403*t784;
  p_output1(14)=-1.*t2243*t2380 - 1.*t270*t415*t472 + t1797*t7009 + 0.1305*(t1578*t2243 + t1104*t7009) + t2879*t7068 + t3185*t7085 + t3396*t7098 + t3521*t7123 - 0.21*(-1.*t3338*t7098 + t3265*t7123) - 0.049*(t3265*t7098 + t3338*t7123) - 1.*t357*t415*t784;
  p_output1(15)=t270*t5123 + 0.1305*t1104*t7189 + t1797*t7189 + t1578*t2879*t7189 + t3185*t7225 + t3396*t7235 + t3521*t7244 - 0.21*(-1.*t3338*t7235 + t3265*t7244) - 0.049*(t3265*t7235 + t3338*t7244) + t7176*t784;
  p_output1(16)=t270*t7296 + 0.1305*t1104*t7319 + t1797*t7319 + t1578*t2879*t7319 + t3185*t7330 + t3396*t7353 + t3521*t7373 - 0.21*(-1.*t3338*t7353 + t3265*t7373) - 0.049*(t3265*t7353 + t3338*t7373) + t600*t784;
  p_output1(17)=t2243*t270*t357 + t7442 + t7446 + t7451 + t7466 + t7477 + t7499 + t7518 + t7529 - 1.*t2243*t472*t784;
  p_output1(18)=-0.135*t5123*t54 + 0.1305*t1104*t5822 + t1797*t5822 + t1578*t2879*t5822 + 0.135*t4607*t755 + t3185*t7565 + t3396*t7579 + t3521*t7595 - 0.21*(-1.*t3338*t7579 + t3265*t7595) - 0.049*(t3265*t7579 + t3338*t7595);
  p_output1(19)=-0.135*t54*t7296 + 0.135*t755*t7660 + 0.1305*t1104*t7672 + t1797*t7672 + t1578*t2879*t7672 + t3185*t7691 + t3396*t7700 + t3521*t7709 - 0.21*(-1.*t3338*t7700 + t3265*t7709) - 0.049*(t3265*t7700 + t3338*t7709);
  p_output1(20)=-0.135*t2243*t357*t54 + t7442 + t7446 + t7451 + t7466 + t7477 + t7499 + t7518 + t7529 + 0.135*t2243*t472*t755;
  p_output1(21)=0.1305*(-1.*t1104*t2243*t349 - 1.*t1578*t5278) + t2879*t5521 + t2655*t3396*t5521 - 1.*t2807*t3521*t5521 - 0.21*(-1.*t2807*t3265*t5521 - 1.*t2655*t3338*t5521) - 0.049*(t2655*t3265*t5521 - 1.*t2807*t3338*t5521) + t2243*t349*t7770 + t5278*t7782;
  p_output1(22)=t2243*t403*t7770 + t7782*t7879 + 0.1305*(t2589 - 1.*t1578*t7879) + t2879*t7896 + t2655*t3396*t7896 - 1.*t2807*t3521*t7896 - 0.21*(-1.*t2807*t3265*t7896 - 1.*t2655*t3338*t7896) - 0.049*(t2655*t3265*t7896 - 1.*t2807*t3338*t7896);
  p_output1(23)=-1.*t415*t7770 + t7782*t7969 + 0.1305*(t1104*t415 - 1.*t1578*t7969) + t2879*t7981 + t2655*t3396*t7981 - 1.*t2807*t3521*t7981 - 0.21*(-1.*t2807*t3265*t7981 - 1.*t2655*t3338*t7981) - 0.049*(t2655*t3265*t7981 - 1.*t2807*t3338*t7981);
  p_output1(24)=t3396*t6151 + t5822*t8036 + t5681*t8048 + t3521*t8058 - 0.049*(t6197 + t3338*t8058) - 0.21*(t3265*t8058 + t8070);
  p_output1(25)=t7672*t8036 + t8048*t8090 + t3521*t8099 + t3396*t8110 - 0.049*(t3338*t8099 + t8121) - 0.21*(t3265*t8099 + t8130);
  p_output1(26)=t7440*t8036 + t8048*t8147 + t3521*t8163 + t3396*t8176 - 0.049*(t3338*t8163 + t8184) - 0.21*(t3265*t8163 + t8193);
  p_output1(27)=-0.049*t6222 - 0.21*(-1.*t3265*t5968 + t8070) + t5968*t8216 + t6151*t8225;
  p_output1(28)=t8110*t8225 + t8216*t8257 - 0.21*(t8130 - 1.*t3265*t8257) - 0.049*(t8121 - 1.*t3338*t8257);
  p_output1(29)=t8176*t8225 + t8216*t8298 - 0.21*(t8193 - 1.*t3265*t8298) - 0.049*(t8184 - 1.*t3338*t8298);
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
}


       
Eigen::Matrix<double,3,20> Jp_knee_joint_left(const Eigen::Matrix<double,20,1> &var1)
//void Jp_knee_joint_left(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,20>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



