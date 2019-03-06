/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:29 GMT-05:00
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
  double t846;
  double t1377;
  double t1086;
  double t1094;
  double t1454;
  double t72;
  double t453;
  double t571;
  double t686;
  double t943;
  double t1223;
  double t1461;
  double t1483;
  double t1527;
  double t1619;
  double t1631;
  double t1635;
  double t9;
  double t1890;
  double t2014;
  double t2219;
  double t2350;
  double t2353;
  double t2375;
  double t2428;
  double t2683;
  double t2690;
  double t2749;
  double t3063;
  double t3162;
  double t3177;
  double t3302;
  double t3335;
  double t3339;
  double t3374;
  double t3708;
  double t3729;
  double t3747;
  double t3827;
  double t3858;
  double t3879;
  double t673;
  double t756;
  double t844;
  double t977;
  double t1044;
  double t1532;
  double t1540;
  double t1541;
  double t1575;
  double t1686;
  double t1863;
  double t1888;
  double t4474;
  double t4623;
  double t4670;
  double t4692;
  double t4740;
  double t4772;
  double t2405;
  double t2481;
  double t2652;
  double t4814;
  double t4838;
  double t4953;
  double t2970;
  double t2981;
  double t3051;
  double t3355;
  double t3401;
  double t3471;
  double t5041;
  double t5100;
  double t5109;
  double t5356;
  double t5364;
  double t5444;
  double t3772;
  double t3809;
  double t3823;
  double t5490;
  double t5499;
  double t5520;
  double t5539;
  double t5541;
  double t5568;
  double t6224;
  double t6251;
  double t6366;
  double t6400;
  double t6481;
  double t6514;
  double t6754;
  double t6766;
  double t6882;
  double t6926;
  double t6949;
  double t6970;
  double t7006;
  double t7041;
  double t7137;
  double t7481;
  double t7482;
  double t7490;
  double t7565;
  double t7571;
  double t7573;
  double t7627;
  double t7628;
  double t7638;
  double t7649;
  double t7688;
  double t7690;
  double t7702;
  double t7739;
  double t7740;
  double t7882;
  double t7885;
  double t7895;
  double t7950;
  double t7959;
  double t8002;
  double t8058;
  double t8068;
  double t8070;
  double t8080;
  double t8083;
  double t8105;
  double t8126;
  double t8131;
  double t8138;
  double t8202;
  double t8240;
  double t8264;
  double t8296;
  double t8300;
  double t8282;
  double t8288;
  double t8290;
  double t8324;
  double t8331;
  double t8339;
  double t8354;
  double t8361;
  double t8362;
  double t8437;
  double t8442;
  double t8446;
  double t8489;
  double t8499;
  double t8509;
  double t8451;
  double t8461;
  double t8553;
  double t8554;
  double t8556;
  double t8561;
  double t8564;
  double t8567;
  double t8680;
  double t8684;
  double t8685;
  double t8659;
  double t8665;
  double t8668;
  double t8709;
  double t8758;
  double t8763;
  double t8779;
  double t8783;
  double t8785;
  double t8855;
  double t8859;
  double t8881;
  double t8888;
  double t8900;
  double t8908;
  double t8911;
  double t8915;
  double t8971;
  double t8976;
  double t8981;
  double t9013;
  double t9030;
  double t8986;
  double t8993;
  double t9046;
  double t9054;
  double t9057;
  double t9063;
  double t9068;
  double t9073;
  double t8669;
  double t8687;
  double t8704;
  double t8707;
  double t8775;
  double t8791;
  double t8795;
  double t8802;
  double t8806;
  double t8808;
  double t8809;
  double t8811;
  double t8813;
  double t8818;
  double t5167;
  double t5255;
  double t5299;
  double t9206;
  double t9207;
  double t9210;
  double t9217;
  double t9218;
  double t9281;
  double t9283;
  double t9286;
  double t9297;
  double t9298;
  double t9302;
  double t9387;
  double t9396;
  double t9399;
  double t9408;
  double t9414;
  double t9415;
  double t9477;
  double t9480;
  double t9481;
  double t5598;
  double t9451;
  double t9452;
  double t9455;
  double t9459;
  double t9465;
  double t9519;
  double t9524;
  double t9529;
  double t9533;
  double t9541;
  double t9545;
  double t9553;
  double t9556;
  double t9557;
  double t9577;
  double t9578;
  double t9585;
  double t9598;
  double t9607;
  double t9609;
  double t9618;
  double t9625;
  double t9628;
  double t5578;
  double t5656;
  double t9505;
  double t9659;
  double t9661;
  double t9667;
  double t9674;
  double t9682;
  double t9710;
  double t9711;
  double t9713;
  double t9562;
  double t9566;
  double t9756;
  double t9757;
  double t9763;
  double t9640;
  double t9649;
  t846 = Sin(var1[3]);
  t1377 = Cos(var1[3]);
  t1086 = Cos(var1[5]);
  t1094 = Sin(var1[4]);
  t1454 = Sin(var1[5]);
  t72 = Cos(var1[14]);
  t453 = -1.*t72;
  t571 = 1. + t453;
  t686 = Sin(var1[14]);
  t943 = Sin(var1[13]);
  t1223 = -1.*t1086*t846*t1094;
  t1461 = t1377*t1454;
  t1483 = t1223 + t1461;
  t1527 = Cos(var1[13]);
  t1619 = -1.*t1377*t1086;
  t1631 = -1.*t846*t1094*t1454;
  t1635 = t1619 + t1631;
  t9 = Cos(var1[4]);
  t1890 = t943*t1483;
  t2014 = t1527*t1635;
  t2219 = t1890 + t2014;
  t2350 = Cos(var1[15]);
  t2353 = -1.*t2350;
  t2375 = 1. + t2353;
  t2428 = Sin(var1[15]);
  t2683 = t1527*t1483;
  t2690 = -1.*t943*t1635;
  t2749 = t2683 + t2690;
  t3063 = -1.*t72*t9*t846;
  t3162 = t686*t2219;
  t3177 = t3063 + t3162;
  t3302 = Cos(var1[16]);
  t3335 = -1.*t3302;
  t3339 = 1. + t3335;
  t3374 = Sin(var1[16]);
  t3708 = t2428*t2749;
  t3729 = t2350*t3177;
  t3747 = t3708 + t3729;
  t3827 = t2350*t2749;
  t3858 = -1.*t2428*t3177;
  t3879 = t3827 + t3858;
  t673 = -0.049*t571;
  t756 = -0.135*t686;
  t844 = 0. + t673 + t756;
  t977 = 0.135*t943;
  t1044 = 0. + t977;
  t1532 = -1.*t1527;
  t1540 = 1. + t1532;
  t1541 = -0.135*t1540;
  t1575 = 0. + t1541;
  t1686 = -0.135*t571;
  t1863 = 0.049*t686;
  t1888 = 0. + t1686 + t1863;
  t4474 = t1377*t1086*t1094;
  t4623 = t846*t1454;
  t4670 = t4474 + t4623;
  t4692 = -1.*t1086*t846;
  t4740 = t1377*t1094*t1454;
  t4772 = t4692 + t4740;
  t2405 = -0.09*t2375;
  t2481 = 0.049*t2428;
  t2652 = 0. + t2405 + t2481;
  t4814 = t943*t4670;
  t4838 = t1527*t4772;
  t4953 = t4814 + t4838;
  t2970 = -0.049*t2375;
  t2981 = -0.09*t2428;
  t3051 = 0. + t2970 + t2981;
  t3355 = -0.049*t3339;
  t3401 = -0.21*t3374;
  t3471 = 0. + t3355 + t3401;
  t5041 = t1527*t4670;
  t5100 = -1.*t943*t4772;
  t5109 = t5041 + t5100;
  t5356 = t72*t1377*t9;
  t5364 = t686*t4953;
  t5444 = t5356 + t5364;
  t3772 = -0.21*t3339;
  t3809 = 0.049*t3374;
  t3823 = 0. + t3772 + t3809;
  t5490 = t2428*t5109;
  t5499 = t2350*t5444;
  t5520 = t5490 + t5499;
  t5539 = t2350*t5109;
  t5541 = -1.*t2428*t5444;
  t5568 = t5539 + t5541;
  t6224 = t1377*t9*t1086*t943;
  t6251 = t1527*t1377*t9*t1454;
  t6366 = t6224 + t6251;
  t6400 = t1527*t1377*t9*t1086;
  t6481 = -1.*t1377*t9*t943*t1454;
  t6514 = t6400 + t6481;
  t6754 = -1.*t72*t1377*t1094;
  t6766 = t686*t6366;
  t6882 = t6754 + t6766;
  t6926 = t2428*t6514;
  t6949 = t2350*t6882;
  t6970 = t6926 + t6949;
  t7006 = t2350*t6514;
  t7041 = -1.*t2428*t6882;
  t7137 = t7006 + t7041;
  t7481 = t9*t1086*t943*t846;
  t7482 = t1527*t9*t846*t1454;
  t7490 = t7481 + t7482;
  t7565 = t1527*t9*t1086*t846;
  t7571 = -1.*t9*t943*t846*t1454;
  t7573 = t7565 + t7571;
  t7627 = -1.*t72*t846*t1094;
  t7628 = t686*t7490;
  t7638 = t7627 + t7628;
  t7649 = t2428*t7573;
  t7688 = t2350*t7638;
  t7690 = t7649 + t7688;
  t7702 = t2350*t7573;
  t7739 = -1.*t2428*t7638;
  t7740 = t7702 + t7739;
  t7882 = -1.*t1086*t943*t1094;
  t7885 = -1.*t1527*t1094*t1454;
  t7895 = t7882 + t7885;
  t7950 = -1.*t1527*t1086*t1094;
  t7959 = t943*t1094*t1454;
  t8002 = t7950 + t7959;
  t8058 = -1.*t72*t9;
  t8068 = t686*t7895;
  t8070 = t8058 + t8068;
  t8080 = t2428*t8002;
  t8083 = t2350*t8070;
  t8105 = t8080 + t8083;
  t8126 = t2350*t8002;
  t8131 = -1.*t2428*t8070;
  t8138 = t8126 + t8131;
  t8202 = t1086*t846;
  t8240 = -1.*t1377*t1094*t1454;
  t8264 = t8202 + t8240;
  t8296 = t943*t8264;
  t8300 = t5041 + t8296;
  t8282 = -1.*t943*t4670;
  t8288 = t1527*t8264;
  t8290 = t8282 + t8288;
  t8324 = t2428*t8290;
  t8331 = t2350*t686*t8300;
  t8339 = t8324 + t8331;
  t8354 = t2350*t8290;
  t8361 = -1.*t686*t2428*t8300;
  t8362 = t8354 + t8361;
  t8437 = t1086*t846*t1094;
  t8442 = -1.*t1377*t1454;
  t8446 = t8437 + t8442;
  t8489 = t1527*t8446;
  t8499 = t943*t1635;
  t8509 = t8489 + t8499;
  t8451 = -1.*t943*t8446;
  t8461 = t8451 + t2014;
  t8553 = t2428*t8461;
  t8554 = t2350*t686*t8509;
  t8556 = t8553 + t8554;
  t8561 = t2350*t8461;
  t8564 = -1.*t686*t2428*t8509;
  t8567 = t8561 + t8564;
  t8680 = t1527*t9*t1086;
  t8684 = -1.*t9*t943*t1454;
  t8685 = t8680 + t8684;
  t8659 = -1.*t9*t1086*t943;
  t8665 = -1.*t1527*t9*t1454;
  t8668 = t8659 + t8665;
  t8709 = t2428*t8668;
  t8758 = t2350*t686*t8685;
  t8763 = t8709 + t8758;
  t8779 = t2350*t8668;
  t8783 = -1.*t686*t2428*t8685;
  t8785 = t8779 + t8783;
  t8855 = -1.*t1527*t4772;
  t8859 = t8282 + t8855;
  t8881 = t2428*t8859;
  t8888 = t2350*t686*t5109;
  t8900 = t8881 + t8888;
  t8908 = t2350*t8859;
  t8911 = -1.*t686*t2428*t5109;
  t8915 = t8908 + t8911;
  t8971 = t1377*t1086;
  t8976 = t846*t1094*t1454;
  t8981 = t8971 + t8976;
  t9013 = -1.*t943*t8981;
  t9030 = t8489 + t9013;
  t8986 = -1.*t1527*t8981;
  t8993 = t8451 + t8986;
  t9046 = t2428*t8993;
  t9054 = t2350*t686*t9030;
  t9057 = t9046 + t9054;
  t9063 = t2350*t8993;
  t9068 = -1.*t686*t2428*t9030;
  t9073 = t9063 + t9068;
  t8669 = t2652*t8668;
  t8687 = -0.1305*t72*t8685;
  t8704 = t1888*t8685;
  t8707 = t686*t3051*t8685;
  t8775 = t3471*t8763;
  t8791 = t3823*t8785;
  t8795 = -1.*t3374*t8763;
  t8802 = t3302*t8785;
  t8806 = t8795 + t8802;
  t8808 = -0.21*t8806;
  t8809 = t3302*t8763;
  t8811 = t3374*t8785;
  t8813 = t8809 + t8811;
  t8818 = -0.049*t8813;
  t5167 = -1.*t1377*t9*t686;
  t5255 = t72*t4953;
  t5299 = t5167 + t5255;
  t9206 = -0.135*t72;
  t9207 = -0.049*t686;
  t9210 = t9206 + t9207;
  t9217 = 0.049*t72;
  t9218 = t9217 + t756;
  t9281 = t943*t8446;
  t9283 = t1527*t8981;
  t9286 = t9281 + t9283;
  t9297 = -1.*t9*t686*t846;
  t9298 = t72*t9286;
  t9302 = t9297 + t9298;
  t9387 = t9*t1086*t943;
  t9396 = t1527*t9*t1454;
  t9399 = t9387 + t9396;
  t9408 = t686*t1094;
  t9414 = t72*t9399;
  t9415 = t9408 + t9414;
  t9477 = -1.*t2428*t5109;
  t9480 = -1.*t2350*t5444;
  t9481 = t9477 + t9480;
  t5598 = t3302*t5568;
  t9451 = 0.049*t2350;
  t9452 = t9451 + t2981;
  t9455 = -0.09*t2350;
  t9459 = -0.049*t2428;
  t9465 = t9455 + t9459;
  t9519 = t72*t9*t846;
  t9524 = t686*t9286;
  t9529 = t9519 + t9524;
  t9533 = -1.*t2428*t9030;
  t9541 = -1.*t2350*t9529;
  t9545 = t9533 + t9541;
  t9553 = t2350*t9030;
  t9556 = -1.*t2428*t9529;
  t9557 = t9553 + t9556;
  t9577 = -1.*t72*t1094;
  t9578 = t686*t9399;
  t9585 = t9577 + t9578;
  t9598 = -1.*t2428*t8685;
  t9607 = -1.*t2350*t9585;
  t9609 = t9598 + t9607;
  t9618 = t2350*t8685;
  t9625 = -1.*t2428*t9585;
  t9628 = t9618 + t9625;
  t5578 = -1.*t3374*t5520;
  t5656 = t5578 + t5598;
  t9505 = -1.*t3374*t5568;
  t9659 = -0.21*t3302;
  t9661 = -0.049*t3374;
  t9667 = t9659 + t9661;
  t9674 = 0.049*t3302;
  t9682 = t9674 + t3401;
  t9710 = t2428*t9030;
  t9711 = t2350*t9529;
  t9713 = t9710 + t9711;
  t9562 = t3302*t9557;
  t9566 = -1.*t3374*t9557;
  t9756 = t2428*t8685;
  t9757 = t2350*t9585;
  t9763 = t9756 + t9757;
  t9640 = t3302*t9628;
  t9649 = -1.*t3374*t9628;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1044*t1483 + t1575*t1635 + t1888*t2219 + t2652*t2749 + t3051*t3177 + t3471*t3747 + t3823*t3879 - 0.21*(-1.*t3374*t3747 + t3302*t3879) - 0.049*(t3302*t3747 + t3374*t3879) - 1.*t844*t846*t9 - 0.1305*(t2219*t72 + t686*t846*t9);
  p_output1(10)=t1044*t4670 + t1575*t4772 + t1888*t4953 + t2652*t5109 - 0.1305*t5299 + t3051*t5444 + t3471*t5520 + t3823*t5568 - 0.049*(t3302*t5520 + t3374*t5568) - 0.21*t5656 + t1377*t844*t9;
  p_output1(11)=0;
  p_output1(12)=t1888*t6366 + t2652*t6514 + t3051*t6882 + t3471*t6970 + t3823*t7137 - 0.21*(-1.*t3374*t6970 + t3302*t7137) - 0.049*(t3302*t6970 + t3374*t7137) - 0.1305*(t1094*t1377*t686 + t6366*t72) - 1.*t1094*t1377*t844 + t1044*t1086*t1377*t9 + t1377*t1454*t1575*t9;
  p_output1(13)=t1888*t7490 + t2652*t7573 + t3051*t7638 + t3471*t7690 + t3823*t7740 - 0.21*(-1.*t3374*t7690 + t3302*t7740) - 0.049*(t3302*t7690 + t3374*t7740) - 1.*t1094*t844*t846 - 0.1305*(t72*t7490 + t1094*t686*t846) + t1044*t1086*t846*t9 + t1454*t1575*t846*t9;
  p_output1(14)=-1.*t1044*t1086*t1094 - 1.*t1094*t1454*t1575 + t1888*t7895 + t2652*t8002 + t3051*t8070 + t3471*t8105 + t3823*t8138 - 0.21*(-1.*t3374*t8105 + t3302*t8138) - 0.049*(t3302*t8105 + t3374*t8138) - 1.*t844*t9 - 0.1305*(t72*t7895 + t686*t9);
  p_output1(15)=t1575*t4670 + t1044*t8264 + t2652*t8290 + t1888*t8300 + t3051*t686*t8300 - 0.1305*t72*t8300 + t3471*t8339 + t3823*t8362 - 0.21*(-1.*t3374*t8339 + t3302*t8362) - 0.049*(t3302*t8339 + t3374*t8362);
  p_output1(16)=t1044*t1635 + t1575*t8446 + t2652*t8461 + t1888*t8509 + t3051*t686*t8509 - 0.1305*t72*t8509 + t3471*t8556 + t3823*t8567 - 0.21*(-1.*t3374*t8556 + t3302*t8567) - 0.049*(t3302*t8556 + t3374*t8567);
  p_output1(17)=t8669 + t8687 + t8704 + t8707 + t8775 + t8791 + t8808 + t8818 - 1.*t1044*t1454*t9 + t1086*t1575*t9;
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
  p_output1(39)=0.135*t1527*t4670 + t1888*t5109 + t3051*t5109*t686 - 0.1305*t5109*t72 + t2652*t8859 + t3471*t8900 + t3823*t8915 - 0.21*(-1.*t3374*t8900 + t3302*t8915) - 0.049*(t3302*t8900 + t3374*t8915) - 0.135*t4772*t943;
  p_output1(40)=0.135*t1527*t8446 + t2652*t8993 + t1888*t9030 + t3051*t686*t9030 - 0.1305*t72*t9030 + t3471*t9057 + t3823*t9073 - 0.21*(-1.*t3374*t9057 + t3302*t9073) - 0.049*(t3302*t9057 + t3374*t9073) - 0.135*t8981*t943;
  p_output1(41)=t8669 + t8687 + t8704 + t8707 + t8775 + t8791 + t8808 + t8818 + 0.135*t1086*t1527*t9 - 0.135*t1454*t9*t943;
  p_output1(42)=t3051*t5299 + t2350*t3471*t5299 - 1.*t2428*t3823*t5299 - 0.21*(-1.*t2428*t3302*t5299 - 1.*t2350*t3374*t5299) - 0.049*(t2350*t3302*t5299 - 1.*t2428*t3374*t5299) - 0.1305*(-1.*t4953*t686 - 1.*t1377*t72*t9) + t1377*t9*t9210 + t4953*t9218;
  p_output1(43)=t846*t9*t9210 + t9218*t9286 - 0.1305*(t3063 - 1.*t686*t9286) + t3051*t9302 + t2350*t3471*t9302 - 1.*t2428*t3823*t9302 - 0.21*(-1.*t2428*t3302*t9302 - 1.*t2350*t3374*t9302) - 0.049*(t2350*t3302*t9302 - 1.*t2428*t3374*t9302);
  p_output1(44)=-1.*t1094*t9210 + t9218*t9399 - 0.1305*(t1094*t72 - 1.*t686*t9399) + t3051*t9415 + t2350*t3471*t9415 - 1.*t2428*t3823*t9415 - 0.21*(-1.*t2428*t3302*t9415 - 1.*t2350*t3374*t9415) - 0.049*(t2350*t3302*t9415 - 1.*t2428*t3374*t9415);
  p_output1(45)=t3471*t5568 + t5109*t9452 + t5444*t9465 + t3823*t9481 - 0.049*(t5598 + t3374*t9481) - 0.21*(t3302*t9481 + t9505);
  p_output1(46)=t9030*t9452 + t9465*t9529 + t3823*t9545 + t3471*t9557 - 0.049*(t3374*t9545 + t9562) - 0.21*(t3302*t9545 + t9566);
  p_output1(47)=t8685*t9452 + t9465*t9585 + t3823*t9609 + t3471*t9628 - 0.049*(t3374*t9609 + t9640) - 0.21*(t3302*t9609 + t9649);
  p_output1(48)=-0.049*t5656 - 0.21*(-1.*t3302*t5520 + t9505) + t5520*t9667 + t5568*t9682;
  p_output1(49)=t9557*t9682 + t9667*t9713 - 0.21*(t9566 - 1.*t3302*t9713) - 0.049*(t9562 - 1.*t3374*t9713);
  p_output1(50)=t9628*t9682 + t9667*t9763 - 0.21*(t9649 - 1.*t3302*t9763) - 0.049*(t9640 - 1.*t3374*t9763);
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



