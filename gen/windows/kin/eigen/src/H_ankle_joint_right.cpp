/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:10:04 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_ankle_joint_right.h"

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
  double t588;
  double t792;
  double t587;
  double t629;
  double t823;
  double t1073;
  double t737;
  double t966;
  double t1002;
  double t561;
  double t1103;
  double t1131;
  double t1163;
  double t1225;
  double t1059;
  double t1188;
  double t1205;
  double t329;
  double t1230;
  double t1254;
  double t1256;
  double t1261;
  double t1297;
  double t1387;
  double t1392;
  double t1415;
  double t1592;
  double t1649;
  double t1206;
  double t1607;
  double t1639;
  double t283;
  double t1664;
  double t1689;
  double t1789;
  double t1833;
  double t1648;
  double t1811;
  double t1822;
  double t261;
  double t1879;
  double t1944;
  double t2050;
  double t173;
  double t2307;
  double t2429;
  double t2456;
  double t2477;
  double t2593;
  double t2596;
  double t2473;
  double t2693;
  double t2730;
  double t2775;
  double t2832;
  double t2847;
  double t2888;
  double t2905;
  double t2913;
  double t2762;
  double t2933;
  double t2938;
  double t2943;
  double t2961;
  double t2984;
  double t2202;
  double t2942;
  double t3018;
  double t3078;
  double t3104;
  double t3147;
  double t3152;
  double t3383;
  double t3385;
  double t3399;
  double t3449;
  double t3451;
  double t3480;
  double t3482;
  double t3484;
  double t3488;
  double t3425;
  double t3629;
  double t3693;
  double t3742;
  double t3774;
  double t3779;
  double t3726;
  double t3780;
  double t3795;
  double t3866;
  double t3871;
  double t3882;
  double t1828;
  double t2079;
  double t2166;
  double t2205;
  double t2222;
  double t2266;
  double t3083;
  double t3168;
  double t3171;
  double t3208;
  double t3209;
  double t3223;
  double t3857;
  double t3906;
  double t3916;
  double t3992;
  double t4030;
  double t4049;
  double t4529;
  double t4553;
  double t4885;
  double t4888;
  double t4989;
  double t5003;
  double t5061;
  double t5067;
  double t5241;
  double t5252;
  double t4069;
  double t4074;
  double t4082;
  double t4571;
  double t4617;
  double t4621;
  double t4633;
  double t4634;
  double t4710;
  double t4723;
  double t4772;
  double t4776;
  double t4817;
  double t4827;
  double t4855;
  double t4890;
  double t4907;
  double t4916;
  double t4952;
  double t4954;
  double t4955;
  double t5009;
  double t5011;
  double t5018;
  double t5033;
  double t5049;
  double t5054;
  double t5077;
  double t5100;
  double t5104;
  double t5172;
  double t5206;
  double t5226;
  double t5274;
  double t5276;
  double t5280;
  double t5306;
  double t5321;
  double t5328;
  double t4106;
  double t4129;
  double t4133;
  double t4198;
  double t4211;
  double t4331;
  t588 = Cos(var1[5]);
  t792 = Sin(var1[3]);
  t587 = Cos(var1[3]);
  t629 = Sin(var1[4]);
  t823 = Sin(var1[5]);
  t1073 = Sin(var1[13]);
  t737 = t587*t588*t629;
  t966 = t792*t823;
  t1002 = t737 + t966;
  t561 = Cos(var1[13]);
  t1103 = -1.*t588*t792;
  t1131 = t587*t629*t823;
  t1163 = t1103 + t1131;
  t1225 = Cos(var1[15]);
  t1059 = t561*t1002;
  t1188 = -1.*t1073*t1163;
  t1205 = t1059 + t1188;
  t329 = Sin(var1[15]);
  t1230 = Cos(var1[14]);
  t1254 = Cos(var1[4]);
  t1256 = t1230*t587*t1254;
  t1261 = Sin(var1[14]);
  t1297 = t1073*t1002;
  t1387 = t561*t1163;
  t1392 = t1297 + t1387;
  t1415 = t1261*t1392;
  t1592 = t1256 + t1415;
  t1649 = Cos(var1[16]);
  t1206 = t329*t1205;
  t1607 = t1225*t1592;
  t1639 = t1206 + t1607;
  t283 = Sin(var1[16]);
  t1664 = t1225*t1205;
  t1689 = -1.*t329*t1592;
  t1789 = t1664 + t1689;
  t1833 = Cos(var1[17]);
  t1648 = -1.*t283*t1639;
  t1811 = t1649*t1789;
  t1822 = t1648 + t1811;
  t261 = Sin(var1[17]);
  t1879 = t1649*t1639;
  t1944 = t283*t1789;
  t2050 = t1879 + t1944;
  t173 = Sin(var1[18]);
  t2307 = t588*t792*t629;
  t2429 = -1.*t587*t823;
  t2456 = t2307 + t2429;
  t2477 = t587*t588;
  t2593 = t792*t629*t823;
  t2596 = t2477 + t2593;
  t2473 = t561*t2456;
  t2693 = -1.*t1073*t2596;
  t2730 = t2473 + t2693;
  t2775 = t1230*t1254*t792;
  t2832 = t1073*t2456;
  t2847 = t561*t2596;
  t2888 = t2832 + t2847;
  t2905 = t1261*t2888;
  t2913 = t2775 + t2905;
  t2762 = t329*t2730;
  t2933 = t1225*t2913;
  t2938 = t2762 + t2933;
  t2943 = t1225*t2730;
  t2961 = -1.*t329*t2913;
  t2984 = t2943 + t2961;
  t2202 = Cos(var1[18]);
  t2942 = -1.*t283*t2938;
  t3018 = t1649*t2984;
  t3078 = t2942 + t3018;
  t3104 = t1649*t2938;
  t3147 = t283*t2984;
  t3152 = t3104 + t3147;
  t3383 = t561*t1254*t588;
  t3385 = -1.*t1254*t1073*t823;
  t3399 = t3383 + t3385;
  t3449 = -1.*t1230*t629;
  t3451 = t1254*t588*t1073;
  t3480 = t561*t1254*t823;
  t3482 = t3451 + t3480;
  t3484 = t1261*t3482;
  t3488 = t3449 + t3484;
  t3425 = t329*t3399;
  t3629 = t1225*t3488;
  t3693 = t3425 + t3629;
  t3742 = t1225*t3399;
  t3774 = -1.*t329*t3488;
  t3779 = t3742 + t3774;
  t3726 = -1.*t283*t3693;
  t3780 = t1649*t3779;
  t3795 = t3726 + t3780;
  t3866 = t1649*t3693;
  t3871 = t283*t3779;
  t3882 = t3866 + t3871;
  t1828 = t261*t1822;
  t2079 = t1833*t2050;
  t2166 = t1828 + t2079;
  t2205 = t1833*t1822;
  t2222 = -1.*t261*t2050;
  t2266 = t2205 + t2222;
  t3083 = t261*t3078;
  t3168 = t1833*t3152;
  t3171 = t3083 + t3168;
  t3208 = t1833*t3078;
  t3209 = -1.*t261*t3152;
  t3223 = t3208 + t3209;
  t3857 = t261*t3795;
  t3906 = t1833*t3882;
  t3916 = t3857 + t3906;
  t3992 = t1833*t3795;
  t4030 = -1.*t261*t3882;
  t4049 = t3992 + t4030;
  t4529 = -1.*t1230;
  t4553 = 1. + t4529;
  t4885 = -1.*t1225;
  t4888 = 1. + t4885;
  t4989 = -1.*t1649;
  t5003 = 1. + t4989;
  t5061 = -1.*t1833;
  t5067 = 1. + t5061;
  t5241 = -1.*t2202;
  t5252 = 1. + t5241;
  t4069 = t2202*t2166;
  t4074 = t173*t2266;
  t4082 = t4069 + t4074;
  t4571 = -0.049*t4553;
  t4617 = -0.135*t1261;
  t4621 = 0. + t4571 + t4617;
  t4633 = 0.135*t1073;
  t4634 = 0. + t4633;
  t4710 = -1.*t561;
  t4723 = 1. + t4710;
  t4772 = -0.135*t4723;
  t4776 = 0. + t4772;
  t4817 = -0.135*t4553;
  t4827 = 0.049*t1261;
  t4855 = 0. + t4817 + t4827;
  t4890 = -0.09*t4888;
  t4907 = 0.049*t329;
  t4916 = 0. + t4890 + t4907;
  t4952 = -0.049*t4888;
  t4954 = -0.09*t329;
  t4955 = 0. + t4952 + t4954;
  t5009 = -0.049*t5003;
  t5011 = -0.21*t283;
  t5018 = 0. + t5009 + t5011;
  t5033 = -0.21*t5003;
  t5049 = 0.049*t283;
  t5054 = 0. + t5033 + t5049;
  t5077 = -0.2707*t5067;
  t5100 = 0.0016*t261;
  t5104 = 0. + t5077 + t5100;
  t5172 = -0.0016*t5067;
  t5206 = -0.2707*t261;
  t5226 = 0. + t5172 + t5206;
  t5274 = 0.0184*t5252;
  t5276 = -0.7055*t173;
  t5280 = 0. + t5274 + t5276;
  t5306 = -0.7055*t5252;
  t5321 = -0.0184*t173;
  t5328 = 0. + t5306 + t5321;
  t4106 = t2202*t3171;
  t4129 = t173*t3223;
  t4133 = t4106 + t4129;
  t4198 = t2202*t3916;
  t4211 = t173*t4049;
  t4331 = t4198 + t4211;

  p_output1(0)=t173*t2166 - 1.*t2202*t2266;
  p_output1(1)=t173*t3171 - 1.*t2202*t3223;
  p_output1(2)=t173*t3916 - 1.*t2202*t4049;
  p_output1(3)=0.;
  p_output1(4)=t4082;
  p_output1(5)=t4133;
  p_output1(6)=t4331;
  p_output1(7)=0.;
  p_output1(8)=-1.*t1230*t1392 + t1254*t1261*t587;
  p_output1(9)=-1.*t1230*t2888 + t1254*t1261*t792;
  p_output1(10)=-1.*t1230*t3482 - 1.*t1261*t629;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.7055*(-1.*t173*t2166 + t2202*t2266) + 0.0184*t4082 + t1002*t4634 + t1163*t4776 + t1392*t4855 + t1205*t4916 + t1592*t4955 + t1639*t5018 + t1789*t5054 + t1822*t5104 + t2050*t5226 + t2166*t5280 + t2266*t5328 + t1254*t4621*t587 - 0.1305*(t1230*t1392 - 1.*t1254*t1261*t587) + var1(0);
  p_output1(13)=0. - 0.7055*(-1.*t173*t3171 + t2202*t3223) + 0.0184*t4133 + t2456*t4634 + t2596*t4776 + t2888*t4855 + t2730*t4916 + t2913*t4955 + t2938*t5018 + t2984*t5054 + t3078*t5104 + t3152*t5226 + t3171*t5280 + t3223*t5328 + t1254*t4621*t792 - 0.1305*(t1230*t2888 - 1.*t1254*t1261*t792) + var1(1);
  p_output1(14)=0. - 0.7055*(-1.*t173*t3916 + t2202*t4049) + 0.0184*t4331 + t3482*t4855 + t3399*t4916 + t3488*t4955 + t3693*t5018 + t3779*t5054 + t3795*t5104 + t3882*t5226 + t3916*t5280 + t4049*t5328 + t1254*t4634*t588 - 1.*t4621*t629 - 0.1305*(t1230*t3482 + t1261*t629) + t1254*t4776*t823 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_ankle_joint_right(const Eigen::Matrix<double,20,1> &var1)
//void H_ankle_joint_right(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



