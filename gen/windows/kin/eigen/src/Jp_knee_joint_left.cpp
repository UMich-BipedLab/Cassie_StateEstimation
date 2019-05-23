/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:09:21 GMT-04:00
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
  double t352;
  double t401;
  double t532;
  double t338;
  double t575;
  double t3;
  double t353;
  double t634;
  double t664;
  double t689;
  double t707;
  double t717;
  double t831;
  double t1262;
  double t1292;
  double t1377;
  double t1574;
  double t1152;
  double t1224;
  double t1253;
  double t1840;
  double t2726;
  double t2800;
  double t2806;
  double t3055;
  double t2573;
  double t2672;
  double t2714;
  double t3152;
  double t3193;
  double t3261;
  double t3554;
  double t3616;
  double t3617;
  double t3645;
  double t3733;
  double t3751;
  double t3897;
  double t4092;
  double t4118;
  double t4123;
  double t65;
  double t130;
  double t164;
  double t227;
  double t986;
  double t1046;
  double t4857;
  double t4910;
  double t4935;
  double t5125;
  double t5232;
  double t5276;
  double t1452;
  double t1641;
  double t1644;
  double t1913;
  double t1964;
  double t2486;
  double t5294;
  double t5327;
  double t5383;
  double t3000;
  double t3079;
  double t3124;
  double t3265;
  double t3452;
  double t3498;
  double t3642;
  double t3701;
  double t3710;
  double t5875;
  double t5896;
  double t5928;
  double t5957;
  double t6024;
  double t6168;
  double t3993;
  double t4010;
  double t4064;
  double t6192;
  double t6193;
  double t6196;
  double t6205;
  double t6254;
  double t6267;
  double t6473;
  double t6481;
  double t6487;
  double t6531;
  double t6542;
  double t6567;
  double t6600;
  double t6601;
  double t6618;
  double t6631;
  double t6703;
  double t6708;
  double t6726;
  double t6732;
  double t6738;
  double t6831;
  double t6832;
  double t6846;
  double t6874;
  double t6885;
  double t6892;
  double t6907;
  double t6915;
  double t6916;
  double t6924;
  double t6938;
  double t6943;
  double t6955;
  double t6959;
  double t6963;
  double t7026;
  double t7027;
  double t7032;
  double t7077;
  double t7103;
  double t7106;
  double t7109;
  double t7113;
  double t7116;
  double t7128;
  double t7129;
  double t7140;
  double t7159;
  double t7161;
  double t7162;
  double t7239;
  double t7242;
  double t7247;
  double t7265;
  double t7271;
  double t7285;
  double t7287;
  double t7295;
  double t7319;
  double t7320;
  double t7325;
  double t7332;
  double t7334;
  double t7335;
  double t7375;
  double t7386;
  double t7393;
  double t7408;
  double t7411;
  double t7416;
  double t7447;
  double t7462;
  double t7470;
  double t7473;
  double t7477;
  double t7490;
  double t7491;
  double t7493;
  double t7547;
  double t7549;
  double t7550;
  double t7571;
  double t7572;
  double t7573;
  double t7576;
  double t7578;
  double t7580;
  double t7584;
  double t7588;
  double t7589;
  double t7715;
  double t7724;
  double t7728;
  double t7729;
  double t7733;
  double t7740;
  double t7744;
  double t7747;
  double t7810;
  double t7816;
  double t7817;
  double t7825;
  double t7828;
  double t7853;
  double t7858;
  double t7873;
  double t7875;
  double t7894;
  double t7910;
  double t7912;
  double t7914;
  double t7554;
  double t7558;
  double t7563;
  double t7574;
  double t7582;
  double t7590;
  double t7591;
  double t7594;
  double t7627;
  double t7635;
  double t7650;
  double t7656;
  double t7663;
  double t7674;
  double t5586;
  double t5668;
  double t5700;
  double t7982;
  double t7993;
  double t7995;
  double t8005;
  double t8006;
  double t8058;
  double t8067;
  double t8069;
  double t8079;
  double t8080;
  double t8082;
  double t8139;
  double t8145;
  double t8147;
  double t8162;
  double t8164;
  double t8166;
  double t8265;
  double t8267;
  double t8268;
  double t6321;
  double t8243;
  double t8246;
  double t8249;
  double t8258;
  double t8261;
  double t8320;
  double t8324;
  double t8325;
  double t8337;
  double t8338;
  double t8342;
  double t8345;
  double t8346;
  double t8353;
  double t8396;
  double t8405;
  double t8408;
  double t8410;
  double t8420;
  double t8427;
  double t8434;
  double t8441;
  double t8446;
  double t6316;
  double t6325;
  double t8293;
  double t8474;
  double t8481;
  double t8489;
  double t8492;
  double t8496;
  double t8522;
  double t8523;
  double t8524;
  double t8369;
  double t8385;
  double t8550;
  double t8552;
  double t8555;
  double t8458;
  double t8467;
  t352 = Cos(var1[5]);
  t401 = Sin(var1[3]);
  t532 = Sin(var1[4]);
  t338 = Cos(var1[3]);
  t575 = Sin(var1[5]);
  t3 = Cos(var1[6]);
  t353 = -1.*t338*t352;
  t634 = -1.*t401*t532*t575;
  t664 = t353 + t634;
  t689 = -1.*t352*t401*t532;
  t707 = t338*t575;
  t717 = t689 + t707;
  t831 = Sin(var1[6]);
  t1262 = Cos(var1[7]);
  t1292 = -1.*t1262;
  t1377 = 1. + t1292;
  t1574 = Sin(var1[7]);
  t1152 = t3*t664;
  t1224 = t717*t831;
  t1253 = t1152 + t1224;
  t1840 = Cos(var1[4]);
  t2726 = Cos(var1[8]);
  t2800 = -1.*t2726;
  t2806 = 1. + t2800;
  t3055 = Sin(var1[8]);
  t2573 = -1.*t1840*t1262*t401;
  t2672 = t1253*t1574;
  t2714 = t2573 + t2672;
  t3152 = t3*t717;
  t3193 = -1.*t664*t831;
  t3261 = t3152 + t3193;
  t3554 = Cos(var1[9]);
  t3616 = -1.*t3554;
  t3617 = 1. + t3616;
  t3645 = Sin(var1[9]);
  t3733 = t2726*t2714;
  t3751 = t3261*t3055;
  t3897 = t3733 + t3751;
  t4092 = t2726*t3261;
  t4118 = -1.*t2714*t3055;
  t4123 = t4092 + t4118;
  t65 = -1.*t3;
  t130 = 1. + t65;
  t164 = 0.135*t130;
  t227 = 0. + t164;
  t986 = -0.135*t831;
  t1046 = 0. + t986;
  t4857 = -1.*t352*t401;
  t4910 = t338*t532*t575;
  t4935 = t4857 + t4910;
  t5125 = t338*t352*t532;
  t5232 = t401*t575;
  t5276 = t5125 + t5232;
  t1452 = 0.135*t1377;
  t1641 = 0.049*t1574;
  t1644 = 0. + t1452 + t1641;
  t1913 = -0.049*t1377;
  t1964 = 0.135*t1574;
  t2486 = 0. + t1913 + t1964;
  t5294 = t3*t4935;
  t5327 = t5276*t831;
  t5383 = t5294 + t5327;
  t3000 = -0.049*t2806;
  t3079 = -0.09*t3055;
  t3124 = 0. + t3000 + t3079;
  t3265 = -0.09*t2806;
  t3452 = 0.049*t3055;
  t3498 = 0. + t3265 + t3452;
  t3642 = -0.049*t3617;
  t3701 = -0.21*t3645;
  t3710 = 0. + t3642 + t3701;
  t5875 = t338*t1840*t1262;
  t5896 = t5383*t1574;
  t5928 = t5875 + t5896;
  t5957 = t3*t5276;
  t6024 = -1.*t4935*t831;
  t6168 = t5957 + t6024;
  t3993 = -0.21*t3617;
  t4010 = 0.049*t3645;
  t4064 = 0. + t3993 + t4010;
  t6192 = t2726*t5928;
  t6193 = t6168*t3055;
  t6196 = t6192 + t6193;
  t6205 = t2726*t6168;
  t6254 = -1.*t5928*t3055;
  t6267 = t6205 + t6254;
  t6473 = t338*t1840*t3*t575;
  t6481 = t338*t1840*t352*t831;
  t6487 = t6473 + t6481;
  t6531 = -1.*t338*t1262*t532;
  t6542 = t6487*t1574;
  t6567 = t6531 + t6542;
  t6600 = t338*t1840*t352*t3;
  t6601 = -1.*t338*t1840*t575*t831;
  t6618 = t6600 + t6601;
  t6631 = t2726*t6567;
  t6703 = t6618*t3055;
  t6708 = t6631 + t6703;
  t6726 = t2726*t6618;
  t6732 = -1.*t6567*t3055;
  t6738 = t6726 + t6732;
  t6831 = t1840*t3*t401*t575;
  t6832 = t1840*t352*t401*t831;
  t6846 = t6831 + t6832;
  t6874 = -1.*t1262*t401*t532;
  t6885 = t6846*t1574;
  t6892 = t6874 + t6885;
  t6907 = t1840*t352*t3*t401;
  t6915 = -1.*t1840*t401*t575*t831;
  t6916 = t6907 + t6915;
  t6924 = t2726*t6892;
  t6938 = t6916*t3055;
  t6943 = t6924 + t6938;
  t6955 = t2726*t6916;
  t6959 = -1.*t6892*t3055;
  t6963 = t6955 + t6959;
  t7026 = -1.*t3*t532*t575;
  t7027 = -1.*t352*t532*t831;
  t7032 = t7026 + t7027;
  t7077 = -1.*t1840*t1262;
  t7103 = t7032*t1574;
  t7106 = t7077 + t7103;
  t7109 = -1.*t352*t3*t532;
  t7113 = t532*t575*t831;
  t7116 = t7109 + t7113;
  t7128 = t2726*t7106;
  t7129 = t7116*t3055;
  t7140 = t7128 + t7129;
  t7159 = t2726*t7116;
  t7161 = -1.*t7106*t3055;
  t7162 = t7159 + t7161;
  t7239 = t352*t401;
  t7242 = -1.*t338*t532*t575;
  t7247 = t7239 + t7242;
  t7265 = t7247*t831;
  t7271 = t5957 + t7265;
  t7285 = t3*t7247;
  t7287 = -1.*t5276*t831;
  t7295 = t7285 + t7287;
  t7319 = t2726*t7271*t1574;
  t7320 = t7295*t3055;
  t7325 = t7319 + t7320;
  t7332 = t2726*t7295;
  t7334 = -1.*t7271*t1574*t3055;
  t7335 = t7332 + t7334;
  t7375 = t352*t401*t532;
  t7386 = -1.*t338*t575;
  t7393 = t7375 + t7386;
  t7408 = t3*t7393;
  t7411 = t664*t831;
  t7416 = t7408 + t7411;
  t7447 = -1.*t7393*t831;
  t7462 = t1152 + t7447;
  t7470 = t2726*t7416*t1574;
  t7473 = t7462*t3055;
  t7477 = t7470 + t7473;
  t7490 = t2726*t7462;
  t7491 = -1.*t7416*t1574*t3055;
  t7493 = t7490 + t7491;
  t7547 = t1840*t352*t3;
  t7549 = -1.*t1840*t575*t831;
  t7550 = t7547 + t7549;
  t7571 = -1.*t1840*t3*t575;
  t7572 = -1.*t1840*t352*t831;
  t7573 = t7571 + t7572;
  t7576 = t2726*t7550*t1574;
  t7578 = t7573*t3055;
  t7580 = t7576 + t7578;
  t7584 = t2726*t7573;
  t7588 = -1.*t7550*t1574*t3055;
  t7589 = t7584 + t7588;
  t7715 = -1.*t3*t4935;
  t7724 = t7715 + t7287;
  t7728 = t2726*t6168*t1574;
  t7729 = t7724*t3055;
  t7733 = t7728 + t7729;
  t7740 = t2726*t7724;
  t7744 = -1.*t6168*t1574*t3055;
  t7747 = t7740 + t7744;
  t7810 = t338*t352;
  t7816 = t401*t532*t575;
  t7817 = t7810 + t7816;
  t7825 = -1.*t7817*t831;
  t7828 = t7408 + t7825;
  t7853 = -1.*t3*t7817;
  t7858 = t7853 + t7447;
  t7873 = t2726*t7828*t1574;
  t7875 = t7858*t3055;
  t7894 = t7873 + t7875;
  t7910 = t2726*t7858;
  t7912 = -1.*t7828*t1574*t3055;
  t7914 = t7910 + t7912;
  t7554 = 0.1305*t1262*t7550;
  t7558 = t7550*t1644;
  t7563 = t7550*t1574*t3124;
  t7574 = t7573*t3498;
  t7582 = t3710*t7580;
  t7590 = t4064*t7589;
  t7591 = -1.*t3645*t7580;
  t7594 = t3554*t7589;
  t7627 = t7591 + t7594;
  t7635 = -0.21*t7627;
  t7650 = t3554*t7580;
  t7656 = t3645*t7589;
  t7663 = t7650 + t7656;
  t7674 = -0.049*t7663;
  t5586 = t1262*t5383;
  t5668 = -1.*t338*t1840*t1574;
  t5700 = t5586 + t5668;
  t7982 = 0.135*t1262;
  t7993 = -0.049*t1574;
  t7995 = t7982 + t7993;
  t8005 = 0.049*t1262;
  t8006 = t8005 + t1964;
  t8058 = t3*t7817;
  t8067 = t7393*t831;
  t8069 = t8058 + t8067;
  t8079 = t1262*t8069;
  t8080 = -1.*t1840*t401*t1574;
  t8082 = t8079 + t8080;
  t8139 = t1840*t3*t575;
  t8145 = t1840*t352*t831;
  t8147 = t8139 + t8145;
  t8162 = t1262*t8147;
  t8164 = t532*t1574;
  t8166 = t8162 + t8164;
  t8265 = -1.*t2726*t5928;
  t8267 = -1.*t6168*t3055;
  t8268 = t8265 + t8267;
  t6321 = t3554*t6267;
  t8243 = 0.049*t2726;
  t8246 = t8243 + t3079;
  t8249 = -0.09*t2726;
  t8258 = -0.049*t3055;
  t8261 = t8249 + t8258;
  t8320 = t1840*t1262*t401;
  t8324 = t8069*t1574;
  t8325 = t8320 + t8324;
  t8337 = -1.*t2726*t8325;
  t8338 = -1.*t7828*t3055;
  t8342 = t8337 + t8338;
  t8345 = t2726*t7828;
  t8346 = -1.*t8325*t3055;
  t8353 = t8345 + t8346;
  t8396 = -1.*t1262*t532;
  t8405 = t8147*t1574;
  t8408 = t8396 + t8405;
  t8410 = -1.*t2726*t8408;
  t8420 = -1.*t7550*t3055;
  t8427 = t8410 + t8420;
  t8434 = t2726*t7550;
  t8441 = -1.*t8408*t3055;
  t8446 = t8434 + t8441;
  t6316 = -1.*t3645*t6196;
  t6325 = t6316 + t6321;
  t8293 = -1.*t3645*t6267;
  t8474 = -0.21*t3554;
  t8481 = -0.049*t3645;
  t8489 = t8474 + t8481;
  t8492 = 0.049*t3554;
  t8496 = t8492 + t3701;
  t8522 = t2726*t8325;
  t8523 = t7828*t3055;
  t8524 = t8522 + t8523;
  t8369 = t3554*t8353;
  t8385 = -1.*t3645*t8353;
  t8550 = t2726*t8408;
  t8552 = t7550*t3055;
  t8555 = t8550 + t8552;
  t8458 = t3554*t8446;
  t8467 = -1.*t3645*t8446;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1253*t1644 + t2714*t3124 + t3261*t3498 + t3710*t3897 - 1.*t1840*t2486*t401 + 0.1305*(t1253*t1262 + t1574*t1840*t401) + t4064*t4123 - 0.21*(-1.*t3645*t3897 + t3554*t4123) - 0.049*(t3554*t3897 + t3645*t4123) + t227*t664 + t1046*t717;
  p_output1(10)=t1840*t2486*t338 + t227*t4935 + t1046*t5276 + t1644*t5383 + 0.1305*t5700 + t3124*t5928 + t3498*t6168 + t3710*t6196 + t4064*t6267 - 0.049*(t3554*t6196 + t3645*t6267) - 0.21*t6325;
  p_output1(11)=0;
  p_output1(12)=t1046*t1840*t338*t352 - 1.*t2486*t338*t532 + t1840*t227*t338*t575 + t1644*t6487 + 0.1305*(t1574*t338*t532 + t1262*t6487) + t3124*t6567 + t3498*t6618 + t3710*t6708 + t4064*t6738 - 0.21*(-1.*t3645*t6708 + t3554*t6738) - 0.049*(t3554*t6708 + t3645*t6738);
  p_output1(13)=t1046*t1840*t352*t401 - 1.*t2486*t401*t532 + t1840*t227*t401*t575 + t1644*t6846 + 0.1305*(t1574*t401*t532 + t1262*t6846) + t3124*t6892 + t3498*t6916 + t3710*t6943 + t4064*t6963 - 0.21*(-1.*t3645*t6943 + t3554*t6963) - 0.049*(t3554*t6943 + t3645*t6963);
  p_output1(14)=-1.*t1840*t2486 - 1.*t1046*t352*t532 - 1.*t227*t532*t575 + t1644*t7032 + 0.1305*(t1574*t1840 + t1262*t7032) + t3124*t7106 + t3498*t7116 + t3710*t7140 + t4064*t7162 - 0.21*(-1.*t3645*t7140 + t3554*t7162) - 0.049*(t3554*t7140 + t3645*t7162);
  p_output1(15)=t227*t5276 + t1046*t7247 + 0.1305*t1262*t7271 + t1644*t7271 + t1574*t3124*t7271 + t3498*t7295 + t3710*t7325 + t4064*t7335 - 0.21*(-1.*t3645*t7325 + t3554*t7335) - 0.049*(t3554*t7325 + t3645*t7335);
  p_output1(16)=t1046*t664 + t227*t7393 + 0.1305*t1262*t7416 + t1644*t7416 + t1574*t3124*t7416 + t3498*t7462 + t3710*t7477 + t4064*t7493 - 0.21*(-1.*t3645*t7477 + t3554*t7493) - 0.049*(t3554*t7477 + t3645*t7493);
  p_output1(17)=t1840*t227*t352 - 1.*t1046*t1840*t575 + t7554 + t7558 + t7563 + t7574 + t7582 + t7590 + t7635 + t7674;
  p_output1(18)=-0.135*t3*t5276 + 0.1305*t1262*t6168 + t1644*t6168 + t1574*t3124*t6168 + t3498*t7724 + t3710*t7733 + t4064*t7747 - 0.21*(-1.*t3645*t7733 + t3554*t7747) - 0.049*(t3554*t7733 + t3645*t7747) + 0.135*t4935*t831;
  p_output1(19)=-0.135*t3*t7393 + 0.1305*t1262*t7828 + t1644*t7828 + t1574*t3124*t7828 + t3498*t7858 + t3710*t7894 + t4064*t7914 - 0.21*(-1.*t3645*t7894 + t3554*t7914) - 0.049*(t3554*t7894 + t3645*t7914) + 0.135*t7817*t831;
  p_output1(20)=-0.135*t1840*t3*t352 + t7554 + t7558 + t7563 + t7574 + t7582 + t7590 + t7635 + t7674 + 0.135*t1840*t575*t831;
  p_output1(21)=0.1305*(-1.*t1262*t1840*t338 - 1.*t1574*t5383) + t3124*t5700 + t2726*t3710*t5700 - 1.*t3055*t4064*t5700 - 0.21*(-1.*t3055*t3554*t5700 - 1.*t2726*t3645*t5700) - 0.049*(t2726*t3554*t5700 - 1.*t3055*t3645*t5700) + t1840*t338*t7995 + t5383*t8006;
  p_output1(22)=t1840*t401*t7995 + t8006*t8069 + 0.1305*(t2573 - 1.*t1574*t8069) + t3124*t8082 + t2726*t3710*t8082 - 1.*t3055*t4064*t8082 - 0.21*(-1.*t3055*t3554*t8082 - 1.*t2726*t3645*t8082) - 0.049*(t2726*t3554*t8082 - 1.*t3055*t3645*t8082);
  p_output1(23)=-1.*t532*t7995 + t8006*t8147 + 0.1305*(t1262*t532 - 1.*t1574*t8147) + t3124*t8166 + t2726*t3710*t8166 - 1.*t3055*t4064*t8166 - 0.21*(-1.*t3055*t3554*t8166 - 1.*t2726*t3645*t8166) - 0.049*(t2726*t3554*t8166 - 1.*t3055*t3645*t8166);
  p_output1(24)=t3710*t6267 + t6168*t8246 + t5928*t8261 + t4064*t8268 - 0.049*(t6321 + t3645*t8268) - 0.21*(t3554*t8268 + t8293);
  p_output1(25)=t7828*t8246 + t8261*t8325 + t4064*t8342 + t3710*t8353 - 0.049*(t3645*t8342 + t8369) - 0.21*(t3554*t8342 + t8385);
  p_output1(26)=t7550*t8246 + t8261*t8408 + t4064*t8427 + t3710*t8446 - 0.049*(t3645*t8427 + t8458) - 0.21*(t3554*t8427 + t8467);
  p_output1(27)=-0.049*t6325 - 0.21*(-1.*t3554*t6196 + t8293) + t6196*t8489 + t6267*t8496;
  p_output1(28)=t8353*t8496 + t8489*t8524 - 0.21*(t8385 - 1.*t3554*t8524) - 0.049*(t8369 - 1.*t3645*t8524);
  p_output1(29)=t8446*t8496 + t8489*t8555 - 0.21*(t8467 - 1.*t3554*t8555) - 0.049*(t8458 - 1.*t3645*t8555);
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



