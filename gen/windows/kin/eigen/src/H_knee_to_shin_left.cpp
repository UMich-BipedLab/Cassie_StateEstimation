/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:21:56 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_to_shin_left.h"

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
  double t311;
  double t585;
  double t771;
  double t648;
  double t785;
  double t574;
  double t949;
  double t983;
  double t1015;
  double t713;
  double t854;
  double t882;
  double t1077;
  double t221;
  double t1499;
  double t1505;
  double t1531;
  double t524;
  double t535;
  double t566;
  double t944;
  double t1130;
  double t1211;
  double t1316;
  double t1396;
  double t1449;
  double t1579;
  double t1697;
  double t1462;
  double t1614;
  double t1665;
  double t198;
  double t1698;
  double t1716;
  double t1725;
  double t185;
  double t2210;
  double t2219;
  double t2250;
  double t1970;
  double t2031;
  double t2132;
  double t2432;
  double t2442;
  double t2495;
  double t1965;
  double t2173;
  double t2255;
  double t2327;
  double t2380;
  double t2381;
  double t1772;
  double t2399;
  double t2497;
  double t2585;
  double t2629;
  double t2682;
  double t2750;
  double t3190;
  double t3192;
  double t3235;
  double t2979;
  double t3016;
  double t3020;
  double t3032;
  double t3067;
  double t3082;
  double t3176;
  double t3248;
  double t3264;
  double t3326;
  double t3367;
  double t3446;
  double t1695;
  double t1733;
  double t1746;
  double t1805;
  double t1806;
  double t1851;
  double t2624;
  double t2781;
  double t2819;
  double t2846;
  double t2868;
  double t2889;
  double t3292;
  double t3450;
  double t3502;
  double t3533;
  double t3548;
  double t3550;
  double t4293;
  double t4311;
  double t4684;
  double t4687;
  double t4822;
  double t4833;
  double t4872;
  double t4906;
  double t3613;
  double t3636;
  double t3652;
  double t4137;
  double t4139;
  double t4143;
  double t4157;
  double t4181;
  double t4193;
  double t4317;
  double t4352;
  double t4410;
  double t4461;
  double t4622;
  double t4635;
  double t4718;
  double t4736;
  double t4738;
  double t4791;
  double t4792;
  double t4796;
  double t4838;
  double t4839;
  double t4845;
  double t4852;
  double t4854;
  double t4862;
  double t4951;
  double t4956;
  double t5032;
  double t5051;
  double t5114;
  double t5130;
  double t3737;
  double t3748;
  double t3749;
  double t3771;
  double t3788;
  double t3794;
  t311 = Cos(var1[3]);
  t585 = Cos(var1[5]);
  t771 = Sin(var1[4]);
  t648 = Sin(var1[3]);
  t785 = Sin(var1[5]);
  t574 = Cos(var1[6]);
  t949 = t311*t585*t771;
  t983 = t648*t785;
  t1015 = t949 + t983;
  t713 = -1.*t585*t648;
  t854 = t311*t771*t785;
  t882 = t713 + t854;
  t1077 = Sin(var1[6]);
  t221 = Cos(var1[8]);
  t1499 = t574*t1015;
  t1505 = -1.*t882*t1077;
  t1531 = t1499 + t1505;
  t524 = Cos(var1[4]);
  t535 = Cos(var1[7]);
  t566 = t311*t524*t535;
  t944 = t574*t882;
  t1130 = t1015*t1077;
  t1211 = t944 + t1130;
  t1316 = Sin(var1[7]);
  t1396 = t1211*t1316;
  t1449 = t566 + t1396;
  t1579 = Sin(var1[8]);
  t1697 = Cos(var1[9]);
  t1462 = t221*t1449;
  t1614 = t1531*t1579;
  t1665 = t1462 + t1614;
  t198 = Sin(var1[9]);
  t1698 = t221*t1531;
  t1716 = -1.*t1449*t1579;
  t1725 = t1698 + t1716;
  t185 = Cos(var1[10]);
  t2210 = t585*t648*t771;
  t2219 = -1.*t311*t785;
  t2250 = t2210 + t2219;
  t1970 = t311*t585;
  t2031 = t648*t771*t785;
  t2132 = t1970 + t2031;
  t2432 = t574*t2250;
  t2442 = -1.*t2132*t1077;
  t2495 = t2432 + t2442;
  t1965 = t524*t535*t648;
  t2173 = t574*t2132;
  t2255 = t2250*t1077;
  t2327 = t2173 + t2255;
  t2380 = t2327*t1316;
  t2381 = t1965 + t2380;
  t1772 = Sin(var1[10]);
  t2399 = t221*t2381;
  t2497 = t2495*t1579;
  t2585 = t2399 + t2497;
  t2629 = t221*t2495;
  t2682 = -1.*t2381*t1579;
  t2750 = t2629 + t2682;
  t3190 = t524*t585*t574;
  t3192 = -1.*t524*t785*t1077;
  t3235 = t3190 + t3192;
  t2979 = -1.*t535*t771;
  t3016 = t524*t574*t785;
  t3020 = t524*t585*t1077;
  t3032 = t3016 + t3020;
  t3067 = t3032*t1316;
  t3082 = t2979 + t3067;
  t3176 = t221*t3082;
  t3248 = t3235*t1579;
  t3264 = t3176 + t3248;
  t3326 = t221*t3235;
  t3367 = -1.*t3082*t1579;
  t3446 = t3326 + t3367;
  t1695 = -1.*t198*t1665;
  t1733 = t1697*t1725;
  t1746 = t1695 + t1733;
  t1805 = t1697*t1665;
  t1806 = t198*t1725;
  t1851 = t1805 + t1806;
  t2624 = -1.*t198*t2585;
  t2781 = t1697*t2750;
  t2819 = t2624 + t2781;
  t2846 = t1697*t2585;
  t2868 = t198*t2750;
  t2889 = t2846 + t2868;
  t3292 = -1.*t198*t3264;
  t3450 = t1697*t3446;
  t3502 = t3292 + t3450;
  t3533 = t1697*t3264;
  t3548 = t198*t3446;
  t3550 = t3533 + t3548;
  t4293 = -1.*t535;
  t4311 = 1. + t4293;
  t4684 = -1.*t221;
  t4687 = 1. + t4684;
  t4822 = -1.*t1697;
  t4833 = 1. + t4822;
  t4872 = -1.*t185;
  t4906 = 1. + t4872;
  t3613 = t1772*t1746;
  t3636 = t185*t1851;
  t3652 = t3613 + t3636;
  t4137 = -1.*t574;
  t4139 = 1. + t4137;
  t4143 = 0.135*t4139;
  t4157 = 0. + t4143;
  t4181 = -0.135*t1077;
  t4193 = 0. + t4181;
  t4317 = 0.135*t4311;
  t4352 = 0.049*t1316;
  t4410 = 0. + t4317 + t4352;
  t4461 = -0.049*t4311;
  t4622 = 0.135*t1316;
  t4635 = 0. + t4461 + t4622;
  t4718 = -0.049*t4687;
  t4736 = -0.09*t1579;
  t4738 = 0. + t4718 + t4736;
  t4791 = -0.09*t4687;
  t4792 = 0.049*t1579;
  t4796 = 0. + t4791 + t4792;
  t4838 = -0.049*t4833;
  t4839 = -0.21*t198;
  t4845 = 0. + t4838 + t4839;
  t4852 = -0.21*t4833;
  t4854 = 0.049*t198;
  t4862 = 0. + t4852 + t4854;
  t4951 = -0.2707*t4906;
  t4956 = 0.0016*t1772;
  t5032 = 0. + t4951 + t4956;
  t5051 = -0.0016*t4906;
  t5114 = -0.2707*t1772;
  t5130 = 0. + t5051 + t5114;
  t3737 = t1772*t2819;
  t3748 = t185*t2889;
  t3749 = t3737 + t3748;
  t3771 = t1772*t3502;
  t3788 = t185*t3550;
  t3794 = t3771 + t3788;

  p_output1(0)=-1.*t1746*t185 + t1772*t1851;
  p_output1(1)=-1.*t185*t2819 + t1772*t2889;
  p_output1(2)=-1.*t185*t3502 + t1772*t3550;
  p_output1(3)=0.;
  p_output1(4)=t3652;
  p_output1(5)=t3749;
  p_output1(6)=t3794;
  p_output1(7)=0.;
  p_output1(8)=t1316*t311*t524 - 1.*t1211*t535;
  p_output1(9)=-1.*t2327*t535 + t1316*t524*t648;
  p_output1(10)=-1.*t3032*t535 - 1.*t1316*t771;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.2707*(t1746*t185 - 1.*t1772*t1851) - 0.0016*t3652 + t1015*t4193 + t1211*t4410 + t1449*t4738 + t1531*t4796 + t1665*t4845 + t1725*t4862 + t1746*t5032 + t1851*t5130 + t311*t4635*t524 + 0.1305*(-1.*t1316*t311*t524 + t1211*t535) + t4157*t882 + var1(0);
  p_output1(13)=0. - 0.2707*(t185*t2819 - 1.*t1772*t2889) - 0.0016*t3749 + t2132*t4157 + t2250*t4193 + t2327*t4410 + t2381*t4738 + t2495*t4796 + t2585*t4845 + t2750*t4862 + t2819*t5032 + t2889*t5130 + t4635*t524*t648 + 0.1305*(t2327*t535 - 1.*t1316*t524*t648) + var1(1);
  p_output1(14)=0. - 0.2707*(t185*t3502 - 1.*t1772*t3550) - 0.0016*t3794 + t3032*t4410 + t3082*t4738 + t3235*t4796 + t3264*t4845 + t3446*t4862 + t3502*t5032 + t3550*t5130 + t4193*t524*t585 - 1.*t4635*t771 + 0.1305*(t3032*t535 + t1316*t771) + t4157*t524*t785 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_knee_to_shin_left(const Eigen::Matrix<double,20,1> &var1)
//void H_knee_to_shin_left(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



