/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:32 GMT-05:00
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
  double t335;
  double t676;
  double t236;
  double t362;
  double t687;
  double t962;
  double t632;
  double t788;
  double t893;
  double t212;
  double t1010;
  double t1070;
  double t1084;
  double t1346;
  double t935;
  double t1099;
  double t1212;
  double t200;
  double t1581;
  double t1636;
  double t1669;
  double t1687;
  double t1704;
  double t1728;
  double t1760;
  double t1761;
  double t1817;
  double t2021;
  double t1299;
  double t1839;
  double t1851;
  double t193;
  double t2049;
  double t2050;
  double t2061;
  double t108;
  double t2533;
  double t2571;
  double t2583;
  double t2692;
  double t2708;
  double t2721;
  double t2606;
  double t2725;
  double t2791;
  double t2832;
  double t2859;
  double t2887;
  double t2898;
  double t2925;
  double t2942;
  double t2246;
  double t2824;
  double t2989;
  double t2990;
  double t3022;
  double t3030;
  double t3123;
  double t3474;
  double t3494;
  double t3534;
  double t3587;
  double t3600;
  double t3628;
  double t3633;
  double t3691;
  double t3723;
  double t3586;
  double t3793;
  double t3799;
  double t3841;
  double t3856;
  double t3864;
  double t1931;
  double t2103;
  double t2170;
  double t2344;
  double t2352;
  double t2437;
  double t3006;
  double t3142;
  double t3195;
  double t3318;
  double t3349;
  double t3351;
  double t3803;
  double t3870;
  double t3907;
  double t3922;
  double t3956;
  double t3984;
  double t4815;
  double t4840;
  double t5101;
  double t5102;
  double t5486;
  double t5527;
  double t5673;
  double t5678;
  double t4006;
  double t4066;
  double t4183;
  double t4859;
  double t4865;
  double t4869;
  double t4909;
  double t4919;
  double t4931;
  double t4933;
  double t4945;
  double t4976;
  double t5020;
  double t5025;
  double t5055;
  double t5145;
  double t5147;
  double t5165;
  double t5359;
  double t5400;
  double t5445;
  double t5530;
  double t5560;
  double t5567;
  double t5586;
  double t5618;
  double t5665;
  double t5684;
  double t5686;
  double t5694;
  double t5711;
  double t5716;
  double t5722;
  double t4193;
  double t4269;
  double t4302;
  double t4486;
  double t4510;
  double t4538;
  t335 = Cos(var1[5]);
  t676 = Sin(var1[3]);
  t236 = Cos(var1[3]);
  t362 = Sin(var1[4]);
  t687 = Sin(var1[5]);
  t962 = Sin(var1[13]);
  t632 = t236*t335*t362;
  t788 = t676*t687;
  t893 = t632 + t788;
  t212 = Cos(var1[13]);
  t1010 = -1.*t335*t676;
  t1070 = t236*t362*t687;
  t1084 = t1010 + t1070;
  t1346 = Cos(var1[15]);
  t935 = t212*t893;
  t1099 = -1.*t962*t1084;
  t1212 = t935 + t1099;
  t200 = Sin(var1[15]);
  t1581 = Cos(var1[14]);
  t1636 = Cos(var1[4]);
  t1669 = t1581*t236*t1636;
  t1687 = Sin(var1[14]);
  t1704 = t962*t893;
  t1728 = t212*t1084;
  t1760 = t1704 + t1728;
  t1761 = t1687*t1760;
  t1817 = t1669 + t1761;
  t2021 = Cos(var1[16]);
  t1299 = t200*t1212;
  t1839 = t1346*t1817;
  t1851 = t1299 + t1839;
  t193 = Sin(var1[16]);
  t2049 = t1346*t1212;
  t2050 = -1.*t200*t1817;
  t2061 = t2049 + t2050;
  t108 = Cos(var1[17]);
  t2533 = t335*t676*t362;
  t2571 = -1.*t236*t687;
  t2583 = t2533 + t2571;
  t2692 = t236*t335;
  t2708 = t676*t362*t687;
  t2721 = t2692 + t2708;
  t2606 = t212*t2583;
  t2725 = -1.*t962*t2721;
  t2791 = t2606 + t2725;
  t2832 = t1581*t1636*t676;
  t2859 = t962*t2583;
  t2887 = t212*t2721;
  t2898 = t2859 + t2887;
  t2925 = t1687*t2898;
  t2942 = t2832 + t2925;
  t2246 = Sin(var1[17]);
  t2824 = t200*t2791;
  t2989 = t1346*t2942;
  t2990 = t2824 + t2989;
  t3022 = t1346*t2791;
  t3030 = -1.*t200*t2942;
  t3123 = t3022 + t3030;
  t3474 = t212*t1636*t335;
  t3494 = -1.*t1636*t962*t687;
  t3534 = t3474 + t3494;
  t3587 = -1.*t1581*t362;
  t3600 = t1636*t335*t962;
  t3628 = t212*t1636*t687;
  t3633 = t3600 + t3628;
  t3691 = t1687*t3633;
  t3723 = t3587 + t3691;
  t3586 = t200*t3534;
  t3793 = t1346*t3723;
  t3799 = t3586 + t3793;
  t3841 = t1346*t3534;
  t3856 = -1.*t200*t3723;
  t3864 = t3841 + t3856;
  t1931 = -1.*t193*t1851;
  t2103 = t2021*t2061;
  t2170 = t1931 + t2103;
  t2344 = t2021*t1851;
  t2352 = t193*t2061;
  t2437 = t2344 + t2352;
  t3006 = -1.*t193*t2990;
  t3142 = t2021*t3123;
  t3195 = t3006 + t3142;
  t3318 = t2021*t2990;
  t3349 = t193*t3123;
  t3351 = t3318 + t3349;
  t3803 = -1.*t193*t3799;
  t3870 = t2021*t3864;
  t3907 = t3803 + t3870;
  t3922 = t2021*t3799;
  t3956 = t193*t3864;
  t3984 = t3922 + t3956;
  t4815 = -1.*t1581;
  t4840 = 1. + t4815;
  t5101 = -1.*t1346;
  t5102 = 1. + t5101;
  t5486 = -1.*t2021;
  t5527 = 1. + t5486;
  t5673 = -1.*t108;
  t5678 = 1. + t5673;
  t4006 = t2246*t2170;
  t4066 = t108*t2437;
  t4183 = t4006 + t4066;
  t4859 = -0.049*t4840;
  t4865 = -0.135*t1687;
  t4869 = 0. + t4859 + t4865;
  t4909 = 0.135*t962;
  t4919 = 0. + t4909;
  t4931 = -1.*t212;
  t4933 = 1. + t4931;
  t4945 = -0.135*t4933;
  t4976 = 0. + t4945;
  t5020 = -0.135*t4840;
  t5025 = 0.049*t1687;
  t5055 = 0. + t5020 + t5025;
  t5145 = -0.09*t5102;
  t5147 = 0.049*t200;
  t5165 = 0. + t5145 + t5147;
  t5359 = -0.049*t5102;
  t5400 = -0.09*t200;
  t5445 = 0. + t5359 + t5400;
  t5530 = -0.049*t5527;
  t5560 = -0.21*t193;
  t5567 = 0. + t5530 + t5560;
  t5586 = -0.21*t5527;
  t5618 = 0.049*t193;
  t5665 = 0. + t5586 + t5618;
  t5684 = -0.2707*t5678;
  t5686 = 0.0016*t2246;
  t5694 = 0. + t5684 + t5686;
  t5711 = -0.0016*t5678;
  t5716 = -0.2707*t2246;
  t5722 = 0. + t5711 + t5716;
  t4193 = t2246*t3195;
  t4269 = t108*t3351;
  t4302 = t4193 + t4269;
  t4486 = t2246*t3907;
  t4510 = t108*t3984;
  t4538 = t4486 + t4510;

  p_output1(0)=-1.*t108*t2170 + t2246*t2437;
  p_output1(1)=-1.*t108*t3195 + t2246*t3351;
  p_output1(2)=-1.*t108*t3907 + t2246*t3984;
  p_output1(3)=0.;
  p_output1(4)=t4183;
  p_output1(5)=t4302;
  p_output1(6)=t4538;
  p_output1(7)=0.;
  p_output1(8)=-1.*t1581*t1760 + t1636*t1687*t236;
  p_output1(9)=-1.*t1581*t2898 + t1636*t1687*t676;
  p_output1(10)=-1.*t1687*t362 - 1.*t1581*t3633;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.1305*(t1581*t1760 - 1.*t1636*t1687*t236) - 0.2707*(t108*t2170 - 1.*t2246*t2437) - 0.0016*t4183 + t1636*t236*t4869 + t1084*t4976 + t1760*t5055 + t1212*t5165 + t1817*t5445 + t1851*t5567 + t2061*t5665 + t2170*t5694 + t2437*t5722 + t4919*t893 + var1(0);
  p_output1(13)=0. - 0.2707*(t108*t3195 - 1.*t2246*t3351) - 0.0016*t4302 + t2583*t4919 + t2721*t4976 + t2898*t5055 + t2791*t5165 + t2942*t5445 + t2990*t5567 + t3123*t5665 + t3195*t5694 + t3351*t5722 + t1636*t4869*t676 - 0.1305*(t1581*t2898 - 1.*t1636*t1687*t676) + var1(1);
  p_output1(14)=0. - 0.1305*(t1687*t362 + t1581*t3633) - 0.2707*(t108*t3907 - 1.*t2246*t3984) - 0.0016*t4538 - 1.*t362*t4869 + t1636*t335*t4919 + t3633*t5055 + t3534*t5165 + t3723*t5445 + t3799*t5567 + t3864*t5665 + t3907*t5694 + t3984*t5722 + t1636*t4976*t687 + var1(2);
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



