/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:09:54 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_knee_joint_right.h"

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
  double t869;
  double t1394;
  double t1345;
  double t1347;
  double t1433;
  double t30;
  double t102;
  double t330;
  double t660;
  double t1070;
  double t1353;
  double t1434;
  double t1480;
  double t1613;
  double t1844;
  double t1850;
  double t1991;
  double t27;
  double t2685;
  double t2909;
  double t2982;
  double t3011;
  double t3017;
  double t3019;
  double t3117;
  double t3179;
  double t3251;
  double t3258;
  double t3936;
  double t3998;
  double t4217;
  double t4279;
  double t4302;
  double t4318;
  double t4559;
  double t4813;
  double t4843;
  double t4859;
  double t4936;
  double t4947;
  double t4962;
  double t381;
  double t685;
  double t841;
  double t1207;
  double t1221;
  double t1629;
  double t1630;
  double t1682;
  double t1732;
  double t2193;
  double t2278;
  double t2281;
  double t5428;
  double t5486;
  double t5511;
  double t5670;
  double t5691;
  double t5702;
  double t3105;
  double t3163;
  double t3178;
  double t5791;
  double t5889;
  double t5906;
  double t3747;
  double t3760;
  double t3919;
  double t4325;
  double t4695;
  double t4801;
  double t6058;
  double t6061;
  double t6261;
  double t6553;
  double t6583;
  double t6597;
  double t4882;
  double t4897;
  double t4922;
  double t6621;
  double t6623;
  double t6684;
  double t6867;
  double t6884;
  double t6896;
  double t7160;
  double t7187;
  double t7215;
  double t7256;
  double t7321;
  double t7323;
  double t7391;
  double t7395;
  double t7397;
  double t7412;
  double t7416;
  double t7421;
  double t7439;
  double t7450;
  double t7454;
  double t7807;
  double t7808;
  double t7812;
  double t7852;
  double t7858;
  double t7868;
  double t7943;
  double t7949;
  double t7957;
  double t7984;
  double t7985;
  double t7988;
  double t8018;
  double t8046;
  double t8071;
  double t8195;
  double t8197;
  double t8208;
  double t8217;
  double t8219;
  double t8226;
  double t8238;
  double t8244;
  double t8245;
  double t8270;
  double t8280;
  double t8284;
  double t8290;
  double t8302;
  double t8315;
  double t8402;
  double t8404;
  double t8416;
  double t8484;
  double t8494;
  double t8442;
  double t8451;
  double t8457;
  double t8529;
  double t8532;
  double t8543;
  double t8560;
  double t8562;
  double t8567;
  double t8656;
  double t8665;
  double t8678;
  double t8725;
  double t8731;
  double t8740;
  double t8695;
  double t8710;
  double t8779;
  double t8784;
  double t8789;
  double t8792;
  double t8802;
  double t8804;
  double t8916;
  double t8918;
  double t8940;
  double t8889;
  double t8893;
  double t8896;
  double t8956;
  double t8963;
  double t8968;
  double t8973;
  double t8974;
  double t8975;
  double t9019;
  double t9029;
  double t9051;
  double t9054;
  double t9055;
  double t9062;
  double t9067;
  double t9075;
  double t9180;
  double t9181;
  double t9183;
  double t9196;
  double t9198;
  double t9188;
  double t9189;
  double t9208;
  double t9215;
  double t9224;
  double t9239;
  double t9242;
  double t9249;
  double t8900;
  double t8947;
  double t8952;
  double t8955;
  double t8971;
  double t8986;
  double t8988;
  double t8993;
  double t9000;
  double t9001;
  double t9005;
  double t9009;
  double t9011;
  double t9014;
  double t6393;
  double t6418;
  double t6435;
  double t9300;
  double t9307;
  double t9309;
  double t9314;
  double t9317;
  double t9384;
  double t9388;
  double t9391;
  double t9395;
  double t9397;
  double t9398;
  double t9446;
  double t9451;
  double t9456;
  double t9463;
  double t9464;
  double t9465;
  double t9521;
  double t9522;
  double t9523;
  double t6931;
  double t9502;
  double t9505;
  double t9510;
  double t9514;
  double t9515;
  double t9578;
  double t9580;
  double t9585;
  double t9593;
  double t9598;
  double t9603;
  double t9609;
  double t9610;
  double t9613;
  double t9666;
  double t9670;
  double t9684;
  double t9693;
  double t9694;
  double t9695;
  double t9700;
  double t9701;
  double t9702;
  double t6914;
  double t6948;
  double t9554;
  double t9748;
  double t9750;
  double t9751;
  double t9757;
  double t9760;
  double t9790;
  double t9796;
  double t9797;
  double t9619;
  double t9631;
  double t9830;
  double t9832;
  double t9835;
  double t9712;
  double t9729;
  t869 = Sin(var1[3]);
  t1394 = Cos(var1[3]);
  t1345 = Cos(var1[5]);
  t1347 = Sin(var1[4]);
  t1433 = Sin(var1[5]);
  t30 = Cos(var1[14]);
  t102 = -1.*t30;
  t330 = 1. + t102;
  t660 = Sin(var1[14]);
  t1070 = Sin(var1[13]);
  t1353 = -1.*t1345*t869*t1347;
  t1434 = t1394*t1433;
  t1480 = t1353 + t1434;
  t1613 = Cos(var1[13]);
  t1844 = -1.*t1394*t1345;
  t1850 = -1.*t869*t1347*t1433;
  t1991 = t1844 + t1850;
  t27 = Cos(var1[4]);
  t2685 = t1070*t1480;
  t2909 = t1613*t1991;
  t2982 = t2685 + t2909;
  t3011 = Cos(var1[15]);
  t3017 = -1.*t3011;
  t3019 = 1. + t3017;
  t3117 = Sin(var1[15]);
  t3179 = t1613*t1480;
  t3251 = -1.*t1070*t1991;
  t3258 = t3179 + t3251;
  t3936 = -1.*t30*t27*t869;
  t3998 = t660*t2982;
  t4217 = t3936 + t3998;
  t4279 = Cos(var1[16]);
  t4302 = -1.*t4279;
  t4318 = 1. + t4302;
  t4559 = Sin(var1[16]);
  t4813 = t3117*t3258;
  t4843 = t3011*t4217;
  t4859 = t4813 + t4843;
  t4936 = t3011*t3258;
  t4947 = -1.*t3117*t4217;
  t4962 = t4936 + t4947;
  t381 = -0.049*t330;
  t685 = -0.135*t660;
  t841 = 0. + t381 + t685;
  t1207 = 0.135*t1070;
  t1221 = 0. + t1207;
  t1629 = -1.*t1613;
  t1630 = 1. + t1629;
  t1682 = -0.135*t1630;
  t1732 = 0. + t1682;
  t2193 = -0.135*t330;
  t2278 = 0.049*t660;
  t2281 = 0. + t2193 + t2278;
  t5428 = t1394*t1345*t1347;
  t5486 = t869*t1433;
  t5511 = t5428 + t5486;
  t5670 = -1.*t1345*t869;
  t5691 = t1394*t1347*t1433;
  t5702 = t5670 + t5691;
  t3105 = -0.09*t3019;
  t3163 = 0.049*t3117;
  t3178 = 0. + t3105 + t3163;
  t5791 = t1070*t5511;
  t5889 = t1613*t5702;
  t5906 = t5791 + t5889;
  t3747 = -0.049*t3019;
  t3760 = -0.09*t3117;
  t3919 = 0. + t3747 + t3760;
  t4325 = -0.049*t4318;
  t4695 = -0.21*t4559;
  t4801 = 0. + t4325 + t4695;
  t6058 = t1613*t5511;
  t6061 = -1.*t1070*t5702;
  t6261 = t6058 + t6061;
  t6553 = t30*t1394*t27;
  t6583 = t660*t5906;
  t6597 = t6553 + t6583;
  t4882 = -0.21*t4318;
  t4897 = 0.049*t4559;
  t4922 = 0. + t4882 + t4897;
  t6621 = t3117*t6261;
  t6623 = t3011*t6597;
  t6684 = t6621 + t6623;
  t6867 = t3011*t6261;
  t6884 = -1.*t3117*t6597;
  t6896 = t6867 + t6884;
  t7160 = t1394*t27*t1345*t1070;
  t7187 = t1613*t1394*t27*t1433;
  t7215 = t7160 + t7187;
  t7256 = t1613*t1394*t27*t1345;
  t7321 = -1.*t1394*t27*t1070*t1433;
  t7323 = t7256 + t7321;
  t7391 = -1.*t30*t1394*t1347;
  t7395 = t660*t7215;
  t7397 = t7391 + t7395;
  t7412 = t3117*t7323;
  t7416 = t3011*t7397;
  t7421 = t7412 + t7416;
  t7439 = t3011*t7323;
  t7450 = -1.*t3117*t7397;
  t7454 = t7439 + t7450;
  t7807 = t27*t1345*t1070*t869;
  t7808 = t1613*t27*t869*t1433;
  t7812 = t7807 + t7808;
  t7852 = t1613*t27*t1345*t869;
  t7858 = -1.*t27*t1070*t869*t1433;
  t7868 = t7852 + t7858;
  t7943 = -1.*t30*t869*t1347;
  t7949 = t660*t7812;
  t7957 = t7943 + t7949;
  t7984 = t3117*t7868;
  t7985 = t3011*t7957;
  t7988 = t7984 + t7985;
  t8018 = t3011*t7868;
  t8046 = -1.*t3117*t7957;
  t8071 = t8018 + t8046;
  t8195 = -1.*t1345*t1070*t1347;
  t8197 = -1.*t1613*t1347*t1433;
  t8208 = t8195 + t8197;
  t8217 = -1.*t1613*t1345*t1347;
  t8219 = t1070*t1347*t1433;
  t8226 = t8217 + t8219;
  t8238 = -1.*t30*t27;
  t8244 = t660*t8208;
  t8245 = t8238 + t8244;
  t8270 = t3117*t8226;
  t8280 = t3011*t8245;
  t8284 = t8270 + t8280;
  t8290 = t3011*t8226;
  t8302 = -1.*t3117*t8245;
  t8315 = t8290 + t8302;
  t8402 = t1345*t869;
  t8404 = -1.*t1394*t1347*t1433;
  t8416 = t8402 + t8404;
  t8484 = t1070*t8416;
  t8494 = t6058 + t8484;
  t8442 = -1.*t1070*t5511;
  t8451 = t1613*t8416;
  t8457 = t8442 + t8451;
  t8529 = t3117*t8457;
  t8532 = t3011*t660*t8494;
  t8543 = t8529 + t8532;
  t8560 = t3011*t8457;
  t8562 = -1.*t660*t3117*t8494;
  t8567 = t8560 + t8562;
  t8656 = t1345*t869*t1347;
  t8665 = -1.*t1394*t1433;
  t8678 = t8656 + t8665;
  t8725 = t1613*t8678;
  t8731 = t1070*t1991;
  t8740 = t8725 + t8731;
  t8695 = -1.*t1070*t8678;
  t8710 = t8695 + t2909;
  t8779 = t3117*t8710;
  t8784 = t3011*t660*t8740;
  t8789 = t8779 + t8784;
  t8792 = t3011*t8710;
  t8802 = -1.*t660*t3117*t8740;
  t8804 = t8792 + t8802;
  t8916 = t1613*t27*t1345;
  t8918 = -1.*t27*t1070*t1433;
  t8940 = t8916 + t8918;
  t8889 = -1.*t27*t1345*t1070;
  t8893 = -1.*t1613*t27*t1433;
  t8896 = t8889 + t8893;
  t8956 = t3117*t8896;
  t8963 = t3011*t660*t8940;
  t8968 = t8956 + t8963;
  t8973 = t3011*t8896;
  t8974 = -1.*t660*t3117*t8940;
  t8975 = t8973 + t8974;
  t9019 = -1.*t1613*t5702;
  t9029 = t8442 + t9019;
  t9051 = t3117*t9029;
  t9054 = t3011*t660*t6261;
  t9055 = t9051 + t9054;
  t9062 = t3011*t9029;
  t9067 = -1.*t660*t3117*t6261;
  t9075 = t9062 + t9067;
  t9180 = t1394*t1345;
  t9181 = t869*t1347*t1433;
  t9183 = t9180 + t9181;
  t9196 = -1.*t1070*t9183;
  t9198 = t8725 + t9196;
  t9188 = -1.*t1613*t9183;
  t9189 = t8695 + t9188;
  t9208 = t3117*t9189;
  t9215 = t3011*t660*t9198;
  t9224 = t9208 + t9215;
  t9239 = t3011*t9189;
  t9242 = -1.*t660*t3117*t9198;
  t9249 = t9239 + t9242;
  t8900 = t3178*t8896;
  t8947 = -0.1305*t30*t8940;
  t8952 = t2281*t8940;
  t8955 = t660*t3919*t8940;
  t8971 = t4801*t8968;
  t8986 = t4922*t8975;
  t8988 = -1.*t4559*t8968;
  t8993 = t4279*t8975;
  t9000 = t8988 + t8993;
  t9001 = -0.21*t9000;
  t9005 = t4279*t8968;
  t9009 = t4559*t8975;
  t9011 = t9005 + t9009;
  t9014 = -0.049*t9011;
  t6393 = -1.*t1394*t27*t660;
  t6418 = t30*t5906;
  t6435 = t6393 + t6418;
  t9300 = -0.135*t30;
  t9307 = -0.049*t660;
  t9309 = t9300 + t9307;
  t9314 = 0.049*t30;
  t9317 = t9314 + t685;
  t9384 = t1070*t8678;
  t9388 = t1613*t9183;
  t9391 = t9384 + t9388;
  t9395 = -1.*t27*t660*t869;
  t9397 = t30*t9391;
  t9398 = t9395 + t9397;
  t9446 = t27*t1345*t1070;
  t9451 = t1613*t27*t1433;
  t9456 = t9446 + t9451;
  t9463 = t660*t1347;
  t9464 = t30*t9456;
  t9465 = t9463 + t9464;
  t9521 = -1.*t3117*t6261;
  t9522 = -1.*t3011*t6597;
  t9523 = t9521 + t9522;
  t6931 = t4279*t6896;
  t9502 = 0.049*t3011;
  t9505 = t9502 + t3760;
  t9510 = -0.09*t3011;
  t9514 = -0.049*t3117;
  t9515 = t9510 + t9514;
  t9578 = t30*t27*t869;
  t9580 = t660*t9391;
  t9585 = t9578 + t9580;
  t9593 = -1.*t3117*t9198;
  t9598 = -1.*t3011*t9585;
  t9603 = t9593 + t9598;
  t9609 = t3011*t9198;
  t9610 = -1.*t3117*t9585;
  t9613 = t9609 + t9610;
  t9666 = -1.*t30*t1347;
  t9670 = t660*t9456;
  t9684 = t9666 + t9670;
  t9693 = -1.*t3117*t8940;
  t9694 = -1.*t3011*t9684;
  t9695 = t9693 + t9694;
  t9700 = t3011*t8940;
  t9701 = -1.*t3117*t9684;
  t9702 = t9700 + t9701;
  t6914 = -1.*t4559*t6684;
  t6948 = t6914 + t6931;
  t9554 = -1.*t4559*t6896;
  t9748 = -0.21*t4279;
  t9750 = -0.049*t4559;
  t9751 = t9748 + t9750;
  t9757 = 0.049*t4279;
  t9760 = t9757 + t4695;
  t9790 = t3117*t9198;
  t9796 = t3011*t9585;
  t9797 = t9790 + t9796;
  t9619 = t4279*t9613;
  t9631 = -1.*t4559*t9613;
  t9830 = t3117*t8940;
  t9832 = t3011*t9684;
  t9835 = t9830 + t9832;
  t9712 = t4279*t9702;
  t9729 = -1.*t4559*t9702;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1221*t1480 + t1732*t1991 + t2281*t2982 + t3178*t3258 + t3919*t4217 + t4801*t4859 + t4922*t4962 - 0.21*(-1.*t4559*t4859 + t4279*t4962) - 0.049*(t4279*t4859 + t4559*t4962) - 1.*t27*t841*t869 - 0.1305*(t2982*t30 + t27*t660*t869);
  p_output1(10)=t1221*t5511 + t1732*t5702 + t2281*t5906 + t3178*t6261 - 0.1305*t6435 + t3919*t6597 + t4801*t6684 + t4922*t6896 - 0.049*(t4279*t6684 + t4559*t6896) - 0.21*t6948 + t1394*t27*t841;
  p_output1(11)=0;
  p_output1(12)=t1221*t1345*t1394*t27 + t1394*t1433*t1732*t27 + t2281*t7215 - 0.1305*(t1347*t1394*t660 + t30*t7215) + t3178*t7323 + t3919*t7397 + t4801*t7421 + t4922*t7454 - 0.21*(-1.*t4559*t7421 + t4279*t7454) - 0.049*(t4279*t7421 + t4559*t7454) - 1.*t1347*t1394*t841;
  p_output1(13)=t2281*t7812 + t3178*t7868 + t3919*t7957 + t4801*t7988 + t4922*t8071 - 0.21*(-1.*t4559*t7988 + t4279*t8071) - 0.049*(t4279*t7988 + t4559*t8071) + t1221*t1345*t27*t869 + t1433*t1732*t27*t869 - 1.*t1347*t841*t869 - 0.1305*(t30*t7812 + t1347*t660*t869);
  p_output1(14)=-1.*t1221*t1345*t1347 - 1.*t1347*t1433*t1732 + t2281*t8208 - 0.1305*(t27*t660 + t30*t8208) + t3178*t8226 + t3919*t8245 + t4801*t8284 + t4922*t8315 - 0.21*(-1.*t4559*t8284 + t4279*t8315) - 0.049*(t4279*t8284 + t4559*t8315) - 1.*t27*t841;
  p_output1(15)=t1732*t5511 + t1221*t8416 + t3178*t8457 + t2281*t8494 - 0.1305*t30*t8494 + t3919*t660*t8494 + t4801*t8543 + t4922*t8567 - 0.21*(-1.*t4559*t8543 + t4279*t8567) - 0.049*(t4279*t8543 + t4559*t8567);
  p_output1(16)=t1221*t1991 + t1732*t8678 + t3178*t8710 + t2281*t8740 - 0.1305*t30*t8740 + t3919*t660*t8740 + t4801*t8789 + t4922*t8804 - 0.21*(-1.*t4559*t8789 + t4279*t8804) - 0.049*(t4279*t8789 + t4559*t8804);
  p_output1(17)=-1.*t1221*t1433*t27 + t1345*t1732*t27 + t8900 + t8947 + t8952 + t8955 + t8971 + t8986 + t9001 + t9014;
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
  p_output1(39)=0.135*t1613*t5511 - 0.135*t1070*t5702 + t2281*t6261 - 0.1305*t30*t6261 + t3919*t6261*t660 + t3178*t9029 + t4801*t9055 + t4922*t9075 - 0.21*(-1.*t4559*t9055 + t4279*t9075) - 0.049*(t4279*t9055 + t4559*t9075);
  p_output1(40)=0.135*t1613*t8678 - 0.135*t1070*t9183 + t3178*t9189 + t2281*t9198 - 0.1305*t30*t9198 + t3919*t660*t9198 + t4801*t9224 + t4922*t9249 - 0.21*(-1.*t4559*t9224 + t4279*t9249) - 0.049*(t4279*t9224 + t4559*t9249);
  p_output1(41)=-0.135*t1070*t1433*t27 + 0.135*t1345*t1613*t27 + t8900 + t8947 + t8952 + t8955 + t8971 + t8986 + t9001 + t9014;
  p_output1(42)=t3919*t6435 + t3011*t4801*t6435 - 1.*t3117*t4922*t6435 - 0.21*(-1.*t3117*t4279*t6435 - 1.*t3011*t4559*t6435) - 0.049*(t3011*t4279*t6435 - 1.*t3117*t4559*t6435) - 0.1305*(-1.*t1394*t27*t30 - 1.*t5906*t660) + t1394*t27*t9309 + t5906*t9317;
  p_output1(43)=t27*t869*t9309 + t9317*t9391 - 0.1305*(t3936 - 1.*t660*t9391) + t3919*t9398 + t3011*t4801*t9398 - 1.*t3117*t4922*t9398 - 0.21*(-1.*t3117*t4279*t9398 - 1.*t3011*t4559*t9398) - 0.049*(t3011*t4279*t9398 - 1.*t3117*t4559*t9398);
  p_output1(44)=-1.*t1347*t9309 + t9317*t9456 - 0.1305*(t1347*t30 - 1.*t660*t9456) + t3919*t9465 + t3011*t4801*t9465 - 1.*t3117*t4922*t9465 - 0.21*(-1.*t3117*t4279*t9465 - 1.*t3011*t4559*t9465) - 0.049*(t3011*t4279*t9465 - 1.*t3117*t4559*t9465);
  p_output1(45)=t4801*t6896 + t6261*t9505 + t6597*t9515 + t4922*t9523 - 0.049*(t6931 + t4559*t9523) - 0.21*(t4279*t9523 + t9554);
  p_output1(46)=t9198*t9505 + t9515*t9585 + t4922*t9603 + t4801*t9613 - 0.049*(t4559*t9603 + t9619) - 0.21*(t4279*t9603 + t9631);
  p_output1(47)=t8940*t9505 + t9515*t9684 + t4922*t9695 + t4801*t9702 - 0.049*(t4559*t9695 + t9712) - 0.21*(t4279*t9695 + t9729);
  p_output1(48)=-0.049*t6948 - 0.21*(-1.*t4279*t6684 + t9554) + t6684*t9751 + t6896*t9760;
  p_output1(49)=t9613*t9760 + t9751*t9797 - 0.21*(t9631 - 1.*t4279*t9797) - 0.049*(t9619 - 1.*t4559*t9797);
  p_output1(50)=t9702*t9760 + t9751*t9835 - 0.21*(t9729 - 1.*t4279*t9835) - 0.049*(t9712 - 1.*t4559*t9835);
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


       
Eigen::Matrix<double,3,20> Jp_knee_joint_right(const Eigen::Matrix<double,20,1> &var1)
//void Jp_knee_joint_right(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,20>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



