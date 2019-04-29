/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:21:10 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jvs_VectorNav_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t148;
  double t537;
  double t640;
  double t752;
  double t1334;
  double t338;
  double t439;
  double t445;
  double t808;
  double t1487;
  double t1497;
  double t1574;
  double t1594;
  double t1663;
  double t1664;
  double t1031;
  double t1340;
  double t1429;
  double t1456;
  double t1837;
  double t2713;
  double t2794;
  double t2801;
  double t2895;
  double t1675;
  double t2887;
  double t2901;
  double t2967;
  double t3017;
  double t3038;
  double t3112;
  double t2038;
  double t2062;
  double t2121;
  double t2396;
  double t2417;
  double t2143;
  double t2148;
  double t2352;
  double t2353;
  double t2434;
  double t2438;
  double t2482;
  double t2571;
  double t2584;
  double t4296;
  double t4259;
  double t3239;
  double t3241;
  double t3569;
  double t3588;
  double t3593;
  double t4572;
  double t4591;
  double t3600;
  double t3617;
  double t3646;
  double t3014;
  double t3134;
  double t4598;
  double t4600;
  double t4621;
  double t3963;
  double t3973;
  double t3978;
  double t4633;
  double t4658;
  double t4673;
  double t4127;
  double t4162;
  double t4163;
  double t3383;
  double t3481;
  double t3505;
  double t3789;
  double t3910;
  double t3918;
  double t4287;
  double t4316;
  double t4331;
  double t4479;
  double t4497;
  double t4520;
  double t5290;
  double t5271;
  double t4628;
  double t4683;
  double t4818;
  double t4824;
  double t4831;
  double t5407;
  double t5424;
  double t4849;
  double t4851;
  double t4893;
  double t4735;
  double t4737;
  double t5429;
  double t5437;
  double t5460;
  double t5168;
  double t5174;
  double t5177;
  double t5475;
  double t5514;
  double t5519;
  double t5187;
  double t5207;
  double t5218;
  double t4764;
  double t4784;
  double t4914;
  double t4932;
  double t5031;
  double t5063;
  double t5095;
  double t5109;
  double t5289;
  double t5291;
  double t5313;
  double t5351;
  double t5355;
  double t5363;
  double t5965;
  double t5927;
  double t5469;
  double t5534;
  double t5682;
  double t5691;
  double t5713;
  double t6049;
  double t6055;
  double t5729;
  double t5739;
  double t5748;
  double t5565;
  double t5576;
  double t6060;
  double t6061;
  double t6067;
  double t5895;
  double t5896;
  double t5902;
  double t6080;
  double t6087;
  double t6092;
  double t5912;
  double t5913;
  double t5914;
  double t5633;
  double t5655;
  double t5752;
  double t5766;
  double t5846;
  double t5852;
  double t5875;
  double t5882;
  t148 = Cos(var1[0]);
  t537 = Sin(var1[0]);
  t640 = -1.*t537;
  t752 = 0. + t640;
  t1334 = Cos(var1[1]);
  t338 = -1.*t148;
  t439 = 1. + t338;
  t445 = 0.135*t439;
  t808 = 0.135*t537;
  t1487 = -1.*t1334;
  t1497 = 1. + t1487;
  t1574 = 0.135*t1497;
  t1594 = Sin(var1[1]);
  t1663 = 0.049*t1594;
  t1664 = 0. + t1574 + t1663;
  t1031 = 0.049*t148;
  t1340 = -1.*t148*t1334;
  t1429 = 0. + t1340;
  t1456 = -0.07996*t1429;
  t1837 = -1.*t537*t1664;
  t2713 = Cos(var1[2]);
  t2794 = -1.*t2713;
  t2801 = 1. + t2794;
  t2895 = Sin(var1[2]);
  t1675 = t148*t1664;
  t2887 = -0.049*t2801;
  t2901 = -0.09*t2895;
  t2967 = 0. + t2887 + t2901;
  t3017 = -0.09*t2801;
  t3038 = 0.049*t2895;
  t3112 = 0. + t3017 + t3038;
  t2038 = -1.*t1334*t537;
  t2062 = 0. + t2038;
  t2121 = 0.03155*t2062;
  t2396 = 0. + t1594;
  t2417 = 0.07996*t2396;
  t2143 = 0.049*t1497;
  t2148 = -0.135*t1594;
  t2352 = -0.135*t537;
  t2353 = t537*t1664;
  t2434 = -0.03155*t1429;
  t2438 = -0.049*t1497;
  t2482 = 0.135*t1594;
  t2571 = -0.135*t439;
  t2584 = -1.*t148*t1664;
  t4296 = Cos(var1[3]);
  t4259 = Sin(var1[3]);
  t3239 = t148*t1594*t2967;
  t3241 = -1.*t537*t3112;
  t3569 = t148*t2713*t1594;
  t3588 = -1.*t537*t2895;
  t3593 = t3569 + t3588;
  t4572 = -1.*t4296;
  t4591 = 1. + t4572;
  t3600 = -1.*t2713*t537;
  t3617 = -1.*t148*t1594*t2895;
  t3646 = t3600 + t3617;
  t3014 = -1.*t537*t1594*t2967;
  t3134 = -1.*t148*t3112;
  t4598 = -0.049*t4591;
  t4600 = -0.21*t4259;
  t4621 = 0. + t4598 + t4600;
  t3963 = t2713*t537*t1594;
  t3973 = t148*t2895;
  t3978 = t3963 + t3973;
  t4633 = -0.21*t4591;
  t4658 = 0.049*t4259;
  t4673 = 0. + t4633 + t4658;
  t4127 = t148*t2713;
  t4162 = -1.*t537*t1594*t2895;
  t4163 = t4127 + t4162;
  t3383 = -1.*t1334*t2967;
  t3481 = t537*t1594*t2967;
  t3505 = t148*t3112;
  t3789 = t1334*t2967;
  t3910 = -1.*t148*t1594*t2967;
  t3918 = t537*t3112;
  t4287 = -1.*t1334*t2713*t4259;
  t4316 = -1.*t4296*t1334*t2895;
  t4331 = t4287 + t4316;
  t4479 = t4296*t1334*t2713;
  t4497 = -1.*t1334*t4259*t2895;
  t4520 = t4479 + t4497;
  t5290 = Cos(var1[4]);
  t5271 = Sin(var1[4]);
  t4628 = t4621*t3593;
  t4683 = t4673*t3646;
  t4818 = -1.*t4259*t3593;
  t4824 = t4296*t3646;
  t4831 = t4818 + t4824;
  t5407 = -1.*t5290;
  t5424 = 1. + t5407;
  t4849 = t4296*t3593;
  t4851 = t4259*t3646;
  t4893 = t4849 + t4851;
  t4735 = -1.*t4621*t3978;
  t4737 = -1.*t4673*t4163;
  t5429 = -0.2707*t5424;
  t5437 = 0.0016*t5271;
  t5460 = 0. + t5429 + t5437;
  t5168 = -1.*t4259*t3978;
  t5174 = t4296*t4163;
  t5177 = t5168 + t5174;
  t5475 = -0.0016*t5424;
  t5514 = -0.2707*t5271;
  t5519 = 0. + t5475 + t5514;
  t5187 = t4296*t3978;
  t5207 = t4259*t4163;
  t5218 = t5187 + t5207;
  t4764 = -1.*t1334*t2713*t4621;
  t4784 = t1334*t4673*t2895;
  t4914 = t4621*t3978;
  t4932 = t4673*t4163;
  t5031 = t1334*t2713*t4621;
  t5063 = -1.*t1334*t4673*t2895;
  t5095 = -1.*t4621*t3593;
  t5109 = -1.*t4673*t3646;
  t5289 = t5271*t4331;
  t5291 = t5290*t4520;
  t5313 = t5289 + t5291;
  t5351 = t5290*t4331;
  t5355 = -1.*t5271*t4520;
  t5363 = t5351 + t5355;
  t5965 = Cos(var1[5]);
  t5927 = Sin(var1[5]);
  t5469 = t5460*t4831;
  t5534 = t5519*t4893;
  t5682 = t5271*t4831;
  t5691 = t5290*t4893;
  t5713 = t5682 + t5691;
  t6049 = -1.*t5965;
  t6055 = 1. + t6049;
  t5729 = t5290*t4831;
  t5739 = -1.*t5271*t4893;
  t5748 = t5729 + t5739;
  t5565 = -1.*t5460*t5177;
  t5576 = -1.*t5519*t5218;
  t6060 = 0.0184*t6055;
  t6061 = -0.7055*t5927;
  t6067 = 0. + t6060 + t6061;
  t5895 = t5271*t5177;
  t5896 = t5290*t5218;
  t5902 = t5895 + t5896;
  t6080 = -0.7055*t6055;
  t6087 = -0.0184*t5927;
  t6092 = 0. + t6080 + t6087;
  t5912 = t5290*t5177;
  t5913 = -1.*t5271*t5218;
  t5914 = t5912 + t5913;
  t5633 = -1.*t5460*t4331;
  t5655 = -1.*t5519*t4520;
  t5752 = t5460*t5177;
  t5766 = t5519*t5218;
  t5846 = t5460*t4331;
  t5852 = t5519*t4520;
  t5875 = -1.*t5460*t4831;
  t5882 = -1.*t5519*t4893;

  p_output1(0)=0.;
  p_output1(1)=0.07996;
  p_output1(2)=-0.135;
  p_output1(3)=0.135 + t148*(0. + t445) - 0.07996*t752 - 1.*t537*(0. + t808);
  p_output1(4)=0. + t1031 + 0.03155*(0. + t148);
  p_output1(5)=0. + 0.049*t537 - 0.03155*t752;
  p_output1(6)=0. - 0.09*t1334 + t1456 - 1.*t1334*(0. + t1675 + t445)*t537 - 1.*t1334*t148*(0. + t1837 + t808);
  p_output1(7)=0. - 0.09*t148*t1594 + t2121 + t1594*(0. + t2352 + t2353) + t2417 - 0.049*t537 - 1.*t1334*(0. + t2143 + t2148)*t537;
  p_output1(8)=0. + t1031 + t2434 - 1.*t1334*t148*(0. + t2438 + t2482) + t1594*(0. + t2571 + t2584) - 0.09*t1594*t537;
  p_output1(9)=0. + t1456 - 0.21*t1334*t2713 - 0.049*t1334*t2895 - 1.*t1334*(0. + t1675 + t3239 + t3241 + t445)*t537 - 1.*t1334*t148*(0. + t1837 + t3014 + t3134 + t808);
  p_output1(10)=0. + t2121 + t2417 + t1594*(0. + t2352 + t2353 + t3481 + t3505) - 0.21*t3593 + 0.049*t3646 - 1.*t1334*(0. + t2143 + t2148 + t3383)*t537;
  p_output1(11)=0. + t2434 - 1.*t1334*t148*(0. + t2438 + t2482 + t3789) + t1594*(0. + t2571 + t2584 + t3910 + t3918) - 0.21*t3978 + 0.049*t4163;
  p_output1(12)=0. + t1456 + 0.0016*t4331 - 0.2707*t4520 - 1.*t1334*(0. + t1675 + t3239 + t3241 + t445 + t4628 + t4683)*t537 - 1.*t1334*t148*(0. + t1837 + t3014 + t3134 + t4735 + t4737 + t808);
  p_output1(13)=0. + t2121 + t2417 + 0.0016*t4831 - 0.2707*t4893 + t1594*(0. + t2352 + t2353 + t3481 + t3505 + t4914 + t4932) - 1.*t1334*(0. + t2143 + t2148 + t3383 + t4764 + t4784)*t537;
  p_output1(14)=0. + t2434 - 1.*t1334*t148*(0. + t2438 + t2482 + t3789 + t5031 + t5063) + t1594*(0. + t2571 + t2584 + t3910 + t3918 + t5095 + t5109) + 0.0016*t5177 - 0.2707*t5218;
  p_output1(15)=0. + t1456 - 0.7055*t5313 - 0.0184*t5363 - 1.*t1334*t537*(0. + t1675 + t3239 + t3241 + t445 + t4628 + t4683 + t5469 + t5534) - 1.*t1334*t148*(0. + t1837 + t3014 + t3134 + t4735 + t4737 + t5565 + t5576 + t808);
  p_output1(16)=0. + t2121 + t2417 - 1.*t1334*t537*(0. + t2143 + t2148 + t3383 + t4764 + t4784 + t5633 + t5655) - 0.7055*t5713 - 0.0184*t5748 + t1594*(0. + t2352 + t2353 + t3481 + t3505 + t4914 + t4932 + t5752 + t5766);
  p_output1(17)=0. + t2434 - 1.*t1334*t148*(0. + t2438 + t2482 + t3789 + t5031 + t5063 + t5846 + t5852) + t1594*(0. + t2571 + t2584 + t3910 + t3918 + t5095 + t5109 + t5875 + t5882) - 0.7055*t5902 - 0.0184*t5914;
  p_output1(18)=0. + t1456 - 1.1135*(t5363*t5927 + t5313*t5965) + 0.0216*(-1.*t5313*t5927 + t5363*t5965) - 1.*t1334*t537*(0. + t1675 + t3239 + t3241 + t445 + t4628 + t4683 + t5469 + t5534 + t5713*t6067 + t5748*t6092) - 1.*t1334*t148*(0. + t1837 + t3014 + t3134 + t4735 + t4737 + t5565 + t5576 - 1.*t5902*t6067 - 1.*t5914*t6092 + t808);
  p_output1(19)=0. + t2121 + t2417 - 1.1135*(t5748*t5927 + t5713*t5965) + 0.0216*(-1.*t5713*t5927 + t5748*t5965) - 1.*t1334*t537*(0. + t2143 + t2148 + t3383 + t4764 + t4784 + t5633 + t5655 - 1.*t5313*t6067 - 1.*t5363*t6092) + t1594*(0. + t2352 + t2353 + t3481 + t3505 + t4914 + t4932 + t5752 + t5766 + t5902*t6067 + t5914*t6092);
  p_output1(20)=0. + t2434 - 1.1135*(t5914*t5927 + t5902*t5965) + 0.0216*(-1.*t5902*t5927 + t5914*t5965) - 1.*t1334*t148*(0. + t2438 + t2482 + t3789 + t5031 + t5063 + t5846 + t5852 + t5313*t6067 + t5363*t6092) + t1594*(0. + t2571 + t2584 + t3910 + t3918 + t5095 + t5109 + t5875 + t5882 - 1.*t5713*t6067 - 1.*t5748*t6092);
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
}


       
Eigen::Matrix<double,3,14> Jvs_VectorNav_to_LeftToeBottom(const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



