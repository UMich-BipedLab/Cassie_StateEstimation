/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeFront.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t117;
  double t744;
  double t777;
  double t746;
  double t797;
  double t239;
  double t499;
  double t570;
  double t730;
  double t972;
  double t775;
  double t936;
  double t940;
  double t1019;
  double t1035;
  double t1123;
  double t942;
  double t1184;
  double t1224;
  double t2176;
  double t2040;
  double t2050;
  double t2089;
  double t2025;
  double t2231;
  double t2521;
  double t2681;
  double t2780;
  double t2129;
  double t2692;
  double t2713;
  double t2020;
  double t2830;
  double t2832;
  double t2859;
  double t3011;
  double t2739;
  double t2908;
  double t2941;
  double t1992;
  double t3040;
  double t3066;
  double t3109;
  double t3268;
  double t2953;
  double t3169;
  double t3235;
  double t1976;
  double t3269;
  double t3284;
  double t3292;
  double t3529;
  double t3267;
  double t3306;
  double t3366;
  double t1975;
  double t3533;
  double t3585;
  double t3619;
  double t1476;
  double t1484;
  double t1489;
  double t1559;
  double t1562;
  double t1585;
  double t1507;
  double t1600;
  double t1604;
  double t3787;
  double t3791;
  double t3863;
  double t3869;
  double t3899;
  double t3918;
  double t3865;
  double t3928;
  double t3943;
  double t3956;
  double t3965;
  double t4003;
  double t3954;
  double t4058;
  double t4156;
  double t4214;
  double t4217;
  double t4237;
  double t4210;
  double t4275;
  double t4299;
  double t4408;
  double t4414;
  double t4429;
  double t4390;
  double t4456;
  double t4473;
  double t4490;
  double t4496;
  double t4516;
  double t1841;
  double t1882;
  double t1885;
  double t4649;
  double t4668;
  double t4684;
  double t4730;
  double t4745;
  double t4754;
  double t4719;
  double t4768;
  double t4804;
  double t4838;
  double t4845;
  double t4855;
  double t4816;
  double t4859;
  double t4865;
  double t4886;
  double t4904;
  double t4908;
  double t4877;
  double t4909;
  double t4918;
  double t4921;
  double t4939;
  double t4945;
  double t4919;
  double t4958;
  double t4999;
  double t5025;
  double t5043;
  double t5053;
  double t3501;
  double t3627;
  double t3645;
  double t3681;
  double t3682;
  double t3687;
  double t4483;
  double t4532;
  double t4533;
  double t4593;
  double t4601;
  double t4620;
  double t5023;
  double t5061;
  double t5064;
  double t5078;
  double t5082;
  double t5089;
  t117 = Cos(var1[3]);
  t744 = Cos(var1[5]);
  t777 = Sin(var1[3]);
  t746 = Sin(var1[4]);
  t797 = Sin(var1[5]);
  t239 = Cos(var1[4]);
  t499 = Sin(var1[14]);
  t570 = Cos(var1[14]);
  t730 = Sin(var1[13]);
  t972 = Cos(var1[13]);
  t775 = t117*t744*t746;
  t936 = t777*t797;
  t940 = t775 + t936;
  t1019 = -1.*t744*t777;
  t1035 = t117*t746*t797;
  t1123 = t1019 + t1035;
  t942 = t730*t940;
  t1184 = t972*t1123;
  t1224 = t942 + t1184;
  t2176 = Cos(var1[15]);
  t2040 = t972*t940;
  t2050 = -1.*t730*t1123;
  t2089 = t2040 + t2050;
  t2025 = Sin(var1[15]);
  t2231 = t570*t117*t239;
  t2521 = t499*t1224;
  t2681 = t2231 + t2521;
  t2780 = Cos(var1[16]);
  t2129 = t2025*t2089;
  t2692 = t2176*t2681;
  t2713 = t2129 + t2692;
  t2020 = Sin(var1[16]);
  t2830 = t2176*t2089;
  t2832 = -1.*t2025*t2681;
  t2859 = t2830 + t2832;
  t3011 = Cos(var1[17]);
  t2739 = -1.*t2020*t2713;
  t2908 = t2780*t2859;
  t2941 = t2739 + t2908;
  t1992 = Sin(var1[17]);
  t3040 = t2780*t2713;
  t3066 = t2020*t2859;
  t3109 = t3040 + t3066;
  t3268 = Cos(var1[18]);
  t2953 = t1992*t2941;
  t3169 = t3011*t3109;
  t3235 = t2953 + t3169;
  t1976 = Sin(var1[18]);
  t3269 = t3011*t2941;
  t3284 = -1.*t1992*t3109;
  t3292 = t3269 + t3284;
  t3529 = Cos(var1[19]);
  t3267 = -1.*t1976*t3235;
  t3306 = t3268*t3292;
  t3366 = t3267 + t3306;
  t1975 = Sin(var1[19]);
  t3533 = t3268*t3235;
  t3585 = t1976*t3292;
  t3619 = t3533 + t3585;
  t1476 = t744*t777*t746;
  t1484 = -1.*t117*t797;
  t1489 = t1476 + t1484;
  t1559 = t117*t744;
  t1562 = t777*t746*t797;
  t1585 = t1559 + t1562;
  t1507 = t730*t1489;
  t1600 = t972*t1585;
  t1604 = t1507 + t1600;
  t3787 = t972*t1489;
  t3791 = -1.*t730*t1585;
  t3863 = t3787 + t3791;
  t3869 = t570*t239*t777;
  t3899 = t499*t1604;
  t3918 = t3869 + t3899;
  t3865 = t2025*t3863;
  t3928 = t2176*t3918;
  t3943 = t3865 + t3928;
  t3956 = t2176*t3863;
  t3965 = -1.*t2025*t3918;
  t4003 = t3956 + t3965;
  t3954 = -1.*t2020*t3943;
  t4058 = t2780*t4003;
  t4156 = t3954 + t4058;
  t4214 = t2780*t3943;
  t4217 = t2020*t4003;
  t4237 = t4214 + t4217;
  t4210 = t1992*t4156;
  t4275 = t3011*t4237;
  t4299 = t4210 + t4275;
  t4408 = t3011*t4156;
  t4414 = -1.*t1992*t4237;
  t4429 = t4408 + t4414;
  t4390 = -1.*t1976*t4299;
  t4456 = t3268*t4429;
  t4473 = t4390 + t4456;
  t4490 = t3268*t4299;
  t4496 = t1976*t4429;
  t4516 = t4490 + t4496;
  t1841 = t239*t744*t730;
  t1882 = t972*t239*t797;
  t1885 = t1841 + t1882;
  t4649 = t972*t239*t744;
  t4668 = -1.*t239*t730*t797;
  t4684 = t4649 + t4668;
  t4730 = -1.*t570*t746;
  t4745 = t499*t1885;
  t4754 = t4730 + t4745;
  t4719 = t2025*t4684;
  t4768 = t2176*t4754;
  t4804 = t4719 + t4768;
  t4838 = t2176*t4684;
  t4845 = -1.*t2025*t4754;
  t4855 = t4838 + t4845;
  t4816 = -1.*t2020*t4804;
  t4859 = t2780*t4855;
  t4865 = t4816 + t4859;
  t4886 = t2780*t4804;
  t4904 = t2020*t4855;
  t4908 = t4886 + t4904;
  t4877 = t1992*t4865;
  t4909 = t3011*t4908;
  t4918 = t4877 + t4909;
  t4921 = t3011*t4865;
  t4939 = -1.*t1992*t4908;
  t4945 = t4921 + t4939;
  t4919 = -1.*t1976*t4918;
  t4958 = t3268*t4945;
  t4999 = t4919 + t4958;
  t5025 = t3268*t4918;
  t5043 = t1976*t4945;
  t5053 = t5025 + t5043;
  t3501 = t1975*t3366;
  t3627 = t3529*t3619;
  t3645 = t3501 + t3627;
  t3681 = t3529*t3366;
  t3682 = -1.*t1975*t3619;
  t3687 = t3681 + t3682;
  t4483 = t1975*t4473;
  t4532 = t3529*t4516;
  t4533 = t4483 + t4532;
  t4593 = t3529*t4473;
  t4601 = -1.*t1975*t4516;
  t4620 = t4593 + t4601;
  t5023 = t1975*t4999;
  t5061 = t3529*t5053;
  t5064 = t5023 + t5061;
  t5078 = t3529*t4999;
  t5082 = -1.*t1975*t5053;
  t5089 = t5078 + t5082;

  p_output1(0)=t117*t239*t499 - 1.*t1224*t570;
  p_output1(1)=-1.*t1604*t570 + t239*t499*t777;
  p_output1(2)=-1.*t1885*t570 - 1.*t499*t746;
  p_output1(3)=0.642788*t3645 + 0.766044*t3687;
  p_output1(4)=0.642788*t4533 + 0.766044*t4620;
  p_output1(5)=0.642788*t5064 + 0.766044*t5089;
  p_output1(6)=-0.766044*t3645 + 0.642788*t3687;
  p_output1(7)=-0.766044*t4533 + 0.642788*t4620;
  p_output1(8)=-0.766044*t5064 + 0.642788*t5089;
}


       
Eigen::Matrix<double,3,3> R_RightToeFront(const Eigen::Matrix<double,20,1> &var1)
//void R_RightToeFront(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



