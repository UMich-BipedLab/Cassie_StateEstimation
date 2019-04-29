/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeBottom_src.h"

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
  double t661;
  double t374;
  double t664;
  double t568;
  double t709;
  double t116;
  double t620;
  double t1093;
  double t1141;
  double t1321;
  double t1440;
  double t1536;
  double t1628;
  double t2798;
  double t2946;
  double t3311;
  double t3448;
  double t2194;
  double t2307;
  double t2719;
  double t3975;
  double t6342;
  double t6418;
  double t6430;
  double t6496;
  double t6281;
  double t6314;
  double t6317;
  double t6701;
  double t6909;
  double t6944;
  double t7072;
  double t7085;
  double t7088;
  double t7109;
  double t7129;
  double t7131;
  double t7146;
  double t7193;
  double t7199;
  double t7203;
  double t7216;
  double t7220;
  double t7231;
  double t7266;
  double t7272;
  double t7283;
  double t7287;
  double t7340;
  double t7365;
  double t7368;
  double t7404;
  double t7409;
  double t7411;
  double t7425;
  double t7450;
  double t7453;
  double t7455;
  double t7508;
  double t7519;
  double t7531;
  double t7546;
  double t7554;
  double t7563;
  double t7572;
  double t7592;
  double t7622;
  double t7642;
  double t7685;
  double t7686;
  double t7689;
  double t140;
  double t251;
  double t253;
  double t327;
  double t2044;
  double t2065;
  double t7746;
  double t7758;
  double t7759;
  double t7782;
  double t7807;
  double t7823;
  double t3333;
  double t3529;
  double t3531;
  double t4197;
  double t4555;
  double t5568;
  double t7836;
  double t7840;
  double t7854;
  double t6436;
  double t6607;
  double t6623;
  double t6956;
  double t6980;
  double t7049;
  double t7104;
  double t7114;
  double t7124;
  double t7924;
  double t7929;
  double t7950;
  double t7964;
  double t7976;
  double t7987;
  double t7165;
  double t7169;
  double t7183;
  double t7249;
  double t7269;
  double t7270;
  double t8003;
  double t8009;
  double t8022;
  double t8035;
  double t8041;
  double t8050;
  double t7325;
  double t7337;
  double t7338;
  double t7424;
  double t7431;
  double t7439;
  double t8054;
  double t8064;
  double t8073;
  double t8099;
  double t8101;
  double t8104;
  double t7458;
  double t7468;
  double t7483;
  double t7571;
  double t7582;
  double t7584;
  double t8136;
  double t8147;
  double t8154;
  double t8172;
  double t8174;
  double t8179;
  double t7652;
  double t7674;
  double t7676;
  double t8192;
  double t8207;
  double t8212;
  double t8232;
  double t8250;
  double t8254;
  double t8397;
  double t8410;
  double t8415;
  double t8457;
  double t8467;
  double t8468;
  double t8484;
  double t8487;
  double t8516;
  double t8534;
  double t8542;
  double t8543;
  double t8568;
  double t8587;
  double t8595;
  double t8603;
  double t8618;
  double t8620;
  double t8638;
  double t8665;
  double t8669;
  double t8690;
  double t8704;
  double t8721;
  double t8747;
  double t8765;
  double t8775;
  double t8787;
  double t8800;
  double t8801;
  double t8818;
  double t8830;
  double t8836;
  t661 = Cos(var1[3]);
  t374 = Cos(var1[5]);
  t664 = Sin(var1[4]);
  t568 = Sin(var1[3]);
  t709 = Sin(var1[5]);
  t116 = Cos(var1[6]);
  t620 = -1.*t374*t568;
  t1093 = t661*t664*t709;
  t1141 = t620 + t1093;
  t1321 = t661*t374*t664;
  t1440 = t568*t709;
  t1536 = t1321 + t1440;
  t1628 = Sin(var1[6]);
  t2798 = Cos(var1[7]);
  t2946 = -1.*t2798;
  t3311 = 1. + t2946;
  t3448 = Sin(var1[7]);
  t2194 = t116*t1141;
  t2307 = t1536*t1628;
  t2719 = t2194 + t2307;
  t3975 = Cos(var1[4]);
  t6342 = Cos(var1[8]);
  t6418 = -1.*t6342;
  t6430 = 1. + t6418;
  t6496 = Sin(var1[8]);
  t6281 = t661*t3975*t2798;
  t6314 = t2719*t3448;
  t6317 = t6281 + t6314;
  t6701 = t116*t1536;
  t6909 = -1.*t1141*t1628;
  t6944 = t6701 + t6909;
  t7072 = Cos(var1[9]);
  t7085 = -1.*t7072;
  t7088 = 1. + t7085;
  t7109 = Sin(var1[9]);
  t7129 = t6342*t6317;
  t7131 = t6944*t6496;
  t7146 = t7129 + t7131;
  t7193 = t6342*t6944;
  t7199 = -1.*t6317*t6496;
  t7203 = t7193 + t7199;
  t7216 = Cos(var1[10]);
  t7220 = -1.*t7216;
  t7231 = 1. + t7220;
  t7266 = Sin(var1[10]);
  t7272 = -1.*t7109*t7146;
  t7283 = t7072*t7203;
  t7287 = t7272 + t7283;
  t7340 = t7072*t7146;
  t7365 = t7109*t7203;
  t7368 = t7340 + t7365;
  t7404 = Cos(var1[11]);
  t7409 = -1.*t7404;
  t7411 = 1. + t7409;
  t7425 = Sin(var1[11]);
  t7450 = t7266*t7287;
  t7453 = t7216*t7368;
  t7455 = t7450 + t7453;
  t7508 = t7216*t7287;
  t7519 = -1.*t7266*t7368;
  t7531 = t7508 + t7519;
  t7546 = Cos(var1[12]);
  t7554 = -1.*t7546;
  t7563 = 1. + t7554;
  t7572 = Sin(var1[12]);
  t7592 = -1.*t7425*t7455;
  t7622 = t7404*t7531;
  t7642 = t7592 + t7622;
  t7685 = t7404*t7455;
  t7686 = t7425*t7531;
  t7689 = t7685 + t7686;
  t140 = -1.*t116;
  t251 = 1. + t140;
  t253 = 0.135*t251;
  t327 = 0. + t253;
  t2044 = -0.135*t1628;
  t2065 = 0. + t2044;
  t7746 = t661*t374;
  t7758 = t568*t664*t709;
  t7759 = t7746 + t7758;
  t7782 = t374*t568*t664;
  t7807 = -1.*t661*t709;
  t7823 = t7782 + t7807;
  t3333 = 0.135*t3311;
  t3529 = 0.049*t3448;
  t3531 = 0. + t3333 + t3529;
  t4197 = -0.049*t3311;
  t4555 = 0.135*t3448;
  t5568 = 0. + t4197 + t4555;
  t7836 = t116*t7759;
  t7840 = t7823*t1628;
  t7854 = t7836 + t7840;
  t6436 = -0.049*t6430;
  t6607 = -0.09*t6496;
  t6623 = 0. + t6436 + t6607;
  t6956 = -0.09*t6430;
  t6980 = 0.049*t6496;
  t7049 = 0. + t6956 + t6980;
  t7104 = -0.049*t7088;
  t7114 = -0.21*t7109;
  t7124 = 0. + t7104 + t7114;
  t7924 = t3975*t2798*t568;
  t7929 = t7854*t3448;
  t7950 = t7924 + t7929;
  t7964 = t116*t7823;
  t7976 = -1.*t7759*t1628;
  t7987 = t7964 + t7976;
  t7165 = -0.21*t7088;
  t7169 = 0.049*t7109;
  t7183 = 0. + t7165 + t7169;
  t7249 = -0.2707*t7231;
  t7269 = 0.0016*t7266;
  t7270 = 0. + t7249 + t7269;
  t8003 = t6342*t7950;
  t8009 = t7987*t6496;
  t8022 = t8003 + t8009;
  t8035 = t6342*t7987;
  t8041 = -1.*t7950*t6496;
  t8050 = t8035 + t8041;
  t7325 = -0.0016*t7231;
  t7337 = -0.2707*t7266;
  t7338 = 0. + t7325 + t7337;
  t7424 = 0.0184*t7411;
  t7431 = -0.7055*t7425;
  t7439 = 0. + t7424 + t7431;
  t8054 = -1.*t7109*t8022;
  t8064 = t7072*t8050;
  t8073 = t8054 + t8064;
  t8099 = t7072*t8022;
  t8101 = t7109*t8050;
  t8104 = t8099 + t8101;
  t7458 = -0.7055*t7411;
  t7468 = -0.0184*t7425;
  t7483 = 0. + t7458 + t7468;
  t7571 = -1.1135*t7563;
  t7582 = 0.0216*t7572;
  t7584 = 0. + t7571 + t7582;
  t8136 = t7266*t8073;
  t8147 = t7216*t8104;
  t8154 = t8136 + t8147;
  t8172 = t7216*t8073;
  t8174 = -1.*t7266*t8104;
  t8179 = t8172 + t8174;
  t7652 = -0.0216*t7563;
  t7674 = -1.1135*t7572;
  t7676 = 0. + t7652 + t7674;
  t8192 = -1.*t7425*t8154;
  t8207 = t7404*t8179;
  t8212 = t8192 + t8207;
  t8232 = t7404*t8154;
  t8250 = t7425*t8179;
  t8254 = t8232 + t8250;
  t8397 = t3975*t116*t709;
  t8410 = t3975*t374*t1628;
  t8415 = t8397 + t8410;
  t8457 = -1.*t2798*t664;
  t8467 = t8415*t3448;
  t8468 = t8457 + t8467;
  t8484 = t3975*t374*t116;
  t8487 = -1.*t3975*t709*t1628;
  t8516 = t8484 + t8487;
  t8534 = t6342*t8468;
  t8542 = t8516*t6496;
  t8543 = t8534 + t8542;
  t8568 = t6342*t8516;
  t8587 = -1.*t8468*t6496;
  t8595 = t8568 + t8587;
  t8603 = -1.*t7109*t8543;
  t8618 = t7072*t8595;
  t8620 = t8603 + t8618;
  t8638 = t7072*t8543;
  t8665 = t7109*t8595;
  t8669 = t8638 + t8665;
  t8690 = t7266*t8620;
  t8704 = t7216*t8669;
  t8721 = t8690 + t8704;
  t8747 = t7216*t8620;
  t8765 = -1.*t7266*t8669;
  t8775 = t8747 + t8765;
  t8787 = -1.*t7425*t8721;
  t8800 = t7404*t8775;
  t8801 = t8787 + t8800;
  t8818 = t7404*t8721;
  t8830 = t7425*t8775;
  t8836 = t8818 + t8830;
  p_output1[0]=0. + t1536*t2065 + t1141*t327 + t2719*t3531 + t3975*t5568*t661 + 0.1305*(t2719*t2798 - 1.*t3448*t3975*t661) + t6317*t6623 + t6944*t7049 + t7124*t7146 + t7183*t7203 + t7270*t7287 + t7338*t7368 + t7439*t7455 + t7483*t7531 + t7584*t7642 + t7676*t7689 + 0.0306*(t7572*t7642 + t7546*t7689) - 1.1312*(t7546*t7642 - 1.*t7572*t7689) + var1[0];
  p_output1[1]=0. + t3975*t5568*t568 + t327*t7759 + t2065*t7823 + t3531*t7854 + 0.1305*(-1.*t3448*t3975*t568 + t2798*t7854) + t6623*t7950 + t7049*t7987 + t7124*t8022 + t7183*t8050 + t7270*t8073 + t7338*t8104 + t7439*t8154 + t7483*t8179 + t7584*t8212 + t7676*t8254 + 0.0306*(t7572*t8212 + t7546*t8254) - 1.1312*(t7546*t8212 - 1.*t7572*t8254) + var1[1];
  p_output1[2]=0. + t2065*t374*t3975 - 1.*t5568*t664 + t327*t3975*t709 + t3531*t8415 + 0.1305*(t3448*t664 + t2798*t8415) + t6623*t8468 + t7049*t8516 + t7124*t8543 + t7183*t8595 + t7270*t8620 + t7338*t8669 + t7439*t8721 + t7483*t8775 + t7584*t8801 + t7676*t8836 + 0.0306*(t7572*t8801 + t7546*t8836) - 1.1312*(t7546*t8801 - 1.*t7572*t8836) + var1[2];
}



void p_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
