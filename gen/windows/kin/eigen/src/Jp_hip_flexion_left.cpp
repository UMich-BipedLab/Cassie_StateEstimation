/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:21:45 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_flexion_left.h"

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
  double t253;
  double t776;
  double t824;
  double t170;
  double t1133;
  double t10;
  double t324;
  double t1194;
  double t1254;
  double t1594;
  double t1999;
  double t2072;
  double t2122;
  double t2963;
  double t3089;
  double t3106;
  double t3116;
  double t2717;
  double t2756;
  double t2760;
  double t3531;
  double t4549;
  double t4614;
  double t4667;
  double t4712;
  double t4310;
  double t4422;
  double t4432;
  double t5164;
  double t5183;
  double t5187;
  double t32;
  double t37;
  double t139;
  double t159;
  double t2305;
  double t2554;
  double t5780;
  double t5781;
  double t5784;
  double t5800;
  double t5826;
  double t5832;
  double t3107;
  double t3129;
  double t3210;
  double t3543;
  double t3713;
  double t3781;
  double t5878;
  double t5887;
  double t5889;
  double t4672;
  double t4858;
  double t4957;
  double t5224;
  double t5256;
  double t5266;
  double t5957;
  double t5959;
  double t5961;
  double t5967;
  double t5973;
  double t5975;
  double t6054;
  double t6060;
  double t6071;
  double t6116;
  double t6128;
  double t6130;
  double t6134;
  double t6135;
  double t6137;
  double t6189;
  double t6192;
  double t6193;
  double t6230;
  double t6231;
  double t6239;
  double t6243;
  double t6244;
  double t6247;
  double t6295;
  double t6299;
  double t6301;
  double t6322;
  double t6325;
  double t6326;
  double t6343;
  double t6351;
  double t6371;
  double t6445;
  double t6448;
  double t6451;
  double t6455;
  double t6460;
  double t6473;
  double t6478;
  double t6479;
  double t6522;
  double t6526;
  double t6527;
  double t6539;
  double t6542;
  double t6561;
  double t6578;
  double t6583;
  double t6635;
  double t6636;
  double t6639;
  double t6699;
  double t6701;
  double t6703;
  double t6742;
  double t6748;
  double t6799;
  double t6802;
  double t6803;
  double t6805;
  double t6806;
  double t6820;
  double t6822;
  double t6643;
  double t6686;
  double t6696;
  double t6705;
  double t6708;
  double t6709;
  double t6710;
  double t6712;
  double t6716;
  double t6717;
  double t6724;
  double t6725;
  double t5916;
  double t5926;
  double t5949;
  double t6872;
  double t6874;
  double t6880;
  double t6885;
  double t6892;
  double t6923;
  double t6924;
  double t6929;
  double t6946;
  double t6954;
  double t6955;
  double t6999;
  double t7005;
  double t7014;
  double t7017;
  double t7026;
  double t7027;
  double t6024;
  double t6026;
  double t6030;
  double t7077;
  double t7081;
  double t7106;
  double t7107;
  double t7109;
  double t7161;
  double t7169;
  double t7180;
  double t7243;
  double t7247;
  double t7254;
  t253 = Cos(var1[5]);
  t776 = Sin(var1[3]);
  t824 = Sin(var1[4]);
  t170 = Cos(var1[3]);
  t1133 = Sin(var1[5]);
  t10 = Cos(var1[6]);
  t324 = -1.*t170*t253;
  t1194 = -1.*t776*t824*t1133;
  t1254 = t324 + t1194;
  t1594 = -1.*t253*t776*t824;
  t1999 = t170*t1133;
  t2072 = t1594 + t1999;
  t2122 = Sin(var1[6]);
  t2963 = Cos(var1[7]);
  t3089 = -1.*t2963;
  t3106 = 1. + t3089;
  t3116 = Sin(var1[7]);
  t2717 = t10*t1254;
  t2756 = t2072*t2122;
  t2760 = t2717 + t2756;
  t3531 = Cos(var1[4]);
  t4549 = Cos(var1[8]);
  t4614 = -1.*t4549;
  t4667 = 1. + t4614;
  t4712 = Sin(var1[8]);
  t4310 = -1.*t3531*t2963*t776;
  t4422 = t2760*t3116;
  t4432 = t4310 + t4422;
  t5164 = t10*t2072;
  t5183 = -1.*t1254*t2122;
  t5187 = t5164 + t5183;
  t32 = -1.*t10;
  t37 = 1. + t32;
  t139 = 0.135*t37;
  t159 = 0. + t139;
  t2305 = -0.135*t2122;
  t2554 = 0. + t2305;
  t5780 = -1.*t253*t776;
  t5781 = t170*t824*t1133;
  t5784 = t5780 + t5781;
  t5800 = t170*t253*t824;
  t5826 = t776*t1133;
  t5832 = t5800 + t5826;
  t3107 = 0.135*t3106;
  t3129 = 0.049*t3116;
  t3210 = 0. + t3107 + t3129;
  t3543 = -0.049*t3106;
  t3713 = 0.135*t3116;
  t3781 = 0. + t3543 + t3713;
  t5878 = t10*t5784;
  t5887 = t5832*t2122;
  t5889 = t5878 + t5887;
  t4672 = -0.049*t4667;
  t4858 = -0.09*t4712;
  t4957 = 0. + t4672 + t4858;
  t5224 = -0.09*t4667;
  t5256 = 0.049*t4712;
  t5266 = 0. + t5224 + t5256;
  t5957 = t170*t3531*t2963;
  t5959 = t5889*t3116;
  t5961 = t5957 + t5959;
  t5967 = t10*t5832;
  t5973 = -1.*t5784*t2122;
  t5975 = t5967 + t5973;
  t6054 = t170*t3531*t10*t1133;
  t6060 = t170*t3531*t253*t2122;
  t6071 = t6054 + t6060;
  t6116 = -1.*t170*t2963*t824;
  t6128 = t6071*t3116;
  t6130 = t6116 + t6128;
  t6134 = t170*t3531*t253*t10;
  t6135 = -1.*t170*t3531*t1133*t2122;
  t6137 = t6134 + t6135;
  t6189 = t3531*t10*t776*t1133;
  t6192 = t3531*t253*t776*t2122;
  t6193 = t6189 + t6192;
  t6230 = -1.*t2963*t776*t824;
  t6231 = t6193*t3116;
  t6239 = t6230 + t6231;
  t6243 = t3531*t253*t10*t776;
  t6244 = -1.*t3531*t776*t1133*t2122;
  t6247 = t6243 + t6244;
  t6295 = -1.*t10*t824*t1133;
  t6299 = -1.*t253*t824*t2122;
  t6301 = t6295 + t6299;
  t6322 = -1.*t3531*t2963;
  t6325 = t6301*t3116;
  t6326 = t6322 + t6325;
  t6343 = -1.*t253*t10*t824;
  t6351 = t824*t1133*t2122;
  t6371 = t6343 + t6351;
  t6445 = t253*t776;
  t6448 = -1.*t170*t824*t1133;
  t6451 = t6445 + t6448;
  t6455 = t6451*t2122;
  t6460 = t5967 + t6455;
  t6473 = t10*t6451;
  t6478 = -1.*t5832*t2122;
  t6479 = t6473 + t6478;
  t6522 = t253*t776*t824;
  t6526 = -1.*t170*t1133;
  t6527 = t6522 + t6526;
  t6539 = t10*t6527;
  t6542 = t1254*t2122;
  t6561 = t6539 + t6542;
  t6578 = -1.*t6527*t2122;
  t6583 = t2717 + t6578;
  t6635 = t3531*t253*t10;
  t6636 = -1.*t3531*t1133*t2122;
  t6639 = t6635 + t6636;
  t6699 = -1.*t3531*t10*t1133;
  t6701 = -1.*t3531*t253*t2122;
  t6703 = t6699 + t6701;
  t6742 = -1.*t10*t5784;
  t6748 = t6742 + t6478;
  t6799 = t170*t253;
  t6802 = t776*t824*t1133;
  t6803 = t6799 + t6802;
  t6805 = -1.*t6803*t2122;
  t6806 = t6539 + t6805;
  t6820 = -1.*t10*t6803;
  t6822 = t6820 + t6578;
  t6643 = 0.135*t2963*t6639;
  t6686 = t6639*t3210;
  t6696 = t6639*t3116*t4957;
  t6705 = t6703*t5266;
  t6708 = t4549*t6639*t3116;
  t6709 = t6703*t4712;
  t6710 = t6708 + t6709;
  t6712 = -0.049*t6710;
  t6716 = t4549*t6703;
  t6717 = -1.*t6639*t3116*t4712;
  t6724 = t6716 + t6717;
  t6725 = -0.09*t6724;
  t5916 = t2963*t5889;
  t5926 = -1.*t170*t3531*t3116;
  t5949 = t5916 + t5926;
  t6872 = 0.135*t2963;
  t6874 = -0.049*t3116;
  t6880 = t6872 + t6874;
  t6885 = 0.049*t2963;
  t6892 = t6885 + t3713;
  t6923 = t10*t6803;
  t6924 = t6527*t2122;
  t6929 = t6923 + t6924;
  t6946 = t2963*t6929;
  t6954 = -1.*t3531*t776*t3116;
  t6955 = t6946 + t6954;
  t6999 = t3531*t10*t1133;
  t7005 = t3531*t253*t2122;
  t7014 = t6999 + t7005;
  t7017 = t2963*t7014;
  t7026 = t824*t3116;
  t7027 = t7017 + t7026;
  t6024 = t4549*t5975;
  t6026 = -1.*t5961*t4712;
  t6030 = t6024 + t6026;
  t7077 = 0.049*t4549;
  t7081 = t7077 + t4858;
  t7106 = -0.09*t4549;
  t7107 = -0.049*t4712;
  t7109 = t7106 + t7107;
  t7161 = t3531*t2963*t776;
  t7169 = t6929*t3116;
  t7180 = t7161 + t7169;
  t7243 = -1.*t2963*t824;
  t7247 = t7014*t3116;
  t7254 = t7243 + t7247;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1254*t159 + t2072*t2554 + t2760*t3210 + t4432*t4957 - 0.09*(-1.*t4432*t4712 + t4549*t5187) - 0.049*(t4432*t4549 + t4712*t5187) + t5187*t5266 - 1.*t3531*t3781*t776 + 0.135*(t2760*t2963 + t3116*t3531*t776);
  p_output1(10)=t170*t3531*t3781 + t159*t5784 + t2554*t5832 + t3210*t5889 + 0.135*t5949 + t4957*t5961 + t5266*t5975 - 0.049*(t4549*t5961 + t4712*t5975) - 0.09*t6030;
  p_output1(11)=0;
  p_output1(12)=t1133*t159*t170*t3531 + t170*t253*t2554*t3531 + t3210*t6071 + t4957*t6130 + t5266*t6137 - 0.09*(-1.*t4712*t6130 + t4549*t6137) - 0.049*(t4549*t6130 + t4712*t6137) - 1.*t170*t3781*t824 + 0.135*(t2963*t6071 + t170*t3116*t824);
  p_output1(13)=t3210*t6193 + t4957*t6239 + t5266*t6247 - 0.09*(-1.*t4712*t6239 + t4549*t6247) - 0.049*(t4549*t6239 + t4712*t6247) + t1133*t159*t3531*t776 + t253*t2554*t3531*t776 - 1.*t3781*t776*t824 + 0.135*(t2963*t6193 + t3116*t776*t824);
  p_output1(14)=-1.*t3531*t3781 + t3210*t6301 + 0.135*(t3116*t3531 + t2963*t6301) + t4957*t6326 + t5266*t6371 - 0.09*(-1.*t4712*t6326 + t4549*t6371) - 0.049*(t4549*t6326 + t4712*t6371) - 1.*t1133*t159*t824 - 1.*t253*t2554*t824;
  p_output1(15)=t159*t5832 + t2554*t6451 + 0.135*t2963*t6460 + t3210*t6460 + t3116*t4957*t6460 + t5266*t6479 - 0.09*(-1.*t3116*t4712*t6460 + t4549*t6479) - 0.049*(t3116*t4549*t6460 + t4712*t6479);
  p_output1(16)=t1254*t2554 + t159*t6527 + 0.135*t2963*t6561 + t3210*t6561 + t3116*t4957*t6561 + t5266*t6583 - 0.09*(-1.*t3116*t4712*t6561 + t4549*t6583) - 0.049*(t3116*t4549*t6561 + t4712*t6583);
  p_output1(17)=t159*t253*t3531 - 1.*t1133*t2554*t3531 + t6643 + t6686 + t6696 + t6705 + t6712 + t6725;
  p_output1(18)=0.135*t2122*t5784 - 0.135*t10*t5832 + 0.135*t2963*t5975 + t3210*t5975 + t3116*t4957*t5975 + t5266*t6748 - 0.09*(-1.*t3116*t4712*t5975 + t4549*t6748) - 0.049*(t3116*t4549*t5975 + t4712*t6748);
  p_output1(19)=-0.135*t10*t6527 + 0.135*t2122*t6803 + 0.135*t2963*t6806 + t3210*t6806 + t3116*t4957*t6806 + t5266*t6822 - 0.09*(-1.*t3116*t4712*t6806 + t4549*t6822) - 0.049*(t3116*t4549*t6806 + t4712*t6822);
  p_output1(20)=0.135*t1133*t2122*t3531 - 0.135*t10*t253*t3531 + t6643 + t6686 + t6696 + t6705 + t6712 + t6725;
  p_output1(21)=0.135*(-1.*t170*t2963*t3531 - 1.*t3116*t5889) - 0.049*t4549*t5949 + 0.09*t4712*t5949 + t4957*t5949 + t170*t3531*t6880 + t5889*t6892;
  p_output1(22)=t6892*t6929 + 0.135*(t4310 - 1.*t3116*t6929) - 0.049*t4549*t6955 + 0.09*t4712*t6955 + t4957*t6955 + t3531*t6880*t776;
  p_output1(23)=t6892*t7014 - 0.049*t4549*t7027 + 0.09*t4712*t7027 + t4957*t7027 - 1.*t6880*t824 + 0.135*(-1.*t3116*t7014 + t2963*t824);
  p_output1(24)=-0.09*(-1.*t4549*t5961 - 1.*t4712*t5975) - 0.049*t6030 + t5975*t7081 + t5961*t7109;
  p_output1(25)=t6806*t7081 + t7109*t7180 - 0.09*(-1.*t4712*t6806 - 1.*t4549*t7180) - 0.049*(t4549*t6806 - 1.*t4712*t7180);
  p_output1(26)=t6639*t7081 + t7109*t7254 - 0.09*(-1.*t4712*t6639 - 1.*t4549*t7254) - 0.049*(t4549*t6639 - 1.*t4712*t7254);
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


       
Eigen::Matrix<double,3,20> Jp_hip_flexion_left(const Eigen::Matrix<double,20,1> &var1)
//void Jp_hip_flexion_left(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,20>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



