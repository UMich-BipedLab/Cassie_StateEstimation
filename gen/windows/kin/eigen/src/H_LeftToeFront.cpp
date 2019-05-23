/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:10:19 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeFront.h"

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
  double t326;
  double t223;
  double t334;
  double t268;
  double t344;
  double t44;
  double t219;
  double t596;
  double t904;
  double t905;
  double t287;
  double t375;
  double t379;
  double t382;
  double t417;
  double t516;
  double t569;
  double t676;
  double t688;
  double t1571;
  double t1637;
  double t1658;
  double t1697;
  double t1572;
  double t1575;
  double t1586;
  double t1720;
  double t1827;
  double t1634;
  double t1764;
  double t1806;
  double t1524;
  double t1841;
  double t1860;
  double t1866;
  double t1953;
  double t1823;
  double t1897;
  double t1917;
  double t1500;
  double t1966;
  double t1977;
  double t1996;
  double t2022;
  double t1941;
  double t2007;
  double t2008;
  double t1442;
  double t2053;
  double t2054;
  double t2080;
  double t2179;
  double t2021;
  double t2099;
  double t2108;
  double t1427;
  double t2191;
  double t2208;
  double t2213;
  double t942;
  double t952;
  double t965;
  double t990;
  double t1021;
  double t1064;
  double t1091;
  double t1116;
  double t1144;
  double t2423;
  double t2452;
  double t2549;
  double t2389;
  double t2390;
  double t2407;
  double t2410;
  double t2572;
  double t2606;
  double t2644;
  double t2666;
  double t2701;
  double t2608;
  double t2709;
  double t2710;
  double t2753;
  double t2754;
  double t2760;
  double t2731;
  double t2780;
  double t2825;
  double t2875;
  double t2879;
  double t2880;
  double t2856;
  double t2899;
  double t2901;
  double t2903;
  double t2910;
  double t2940;
  double t1229;
  double t1236;
  double t1245;
  double t3040;
  double t3045;
  double t3079;
  double t3021;
  double t3029;
  double t3036;
  double t3038;
  double t3121;
  double t3134;
  double t3157;
  double t3158;
  double t3167;
  double t3155;
  double t3274;
  double t3299;
  double t3327;
  double t3340;
  double t3364;
  double t3319;
  double t3371;
  double t3381;
  double t3401;
  double t3455;
  double t3459;
  double t3392;
  double t3469;
  double t3516;
  double t3534;
  double t3550;
  double t3574;
  double t2163;
  double t2218;
  double t2295;
  double t2324;
  double t2333;
  double t2339;
  double t2902;
  double t2944;
  double t2945;
  double t2960;
  double t2967;
  double t2976;
  double t3533;
  double t3619;
  double t3623;
  double t3640;
  double t3663;
  double t3673;
  double t3881;
  double t3913;
  double t4060;
  double t4064;
  double t4146;
  double t4161;
  double t4289;
  double t4294;
  double t4388;
  double t4439;
  double t4667;
  double t4688;
  double t3798;
  double t3808;
  double t3828;
  double t3839;
  double t3854;
  double t3860;
  double t3915;
  double t3946;
  double t3964;
  double t3967;
  double t3969;
  double t3979;
  double t4076;
  double t4085;
  double t4088;
  double t4099;
  double t4114;
  double t4116;
  double t4165;
  double t4200;
  double t4235;
  double t4247;
  double t4259;
  double t4277;
  double t4304;
  double t4318;
  double t4327;
  double t4346;
  double t4353;
  double t4366;
  double t4453;
  double t4484;
  double t4547;
  double t4588;
  double t4612;
  double t4651;
  double t4691;
  double t4739;
  double t4764;
  double t4825;
  double t4868;
  double t4881;
  t326 = Cos(var1[3]);
  t223 = Cos(var1[5]);
  t334 = Sin(var1[4]);
  t268 = Sin(var1[3]);
  t344 = Sin(var1[5]);
  t44 = Cos(var1[7]);
  t219 = Cos(var1[6]);
  t596 = Sin(var1[6]);
  t904 = Cos(var1[4]);
  t905 = Sin(var1[7]);
  t287 = -1.*t223*t268;
  t375 = t326*t334*t344;
  t379 = t287 + t375;
  t382 = t219*t379;
  t417 = t326*t223*t334;
  t516 = t268*t344;
  t569 = t417 + t516;
  t676 = t569*t596;
  t688 = t382 + t676;
  t1571 = Cos(var1[8]);
  t1637 = t219*t569;
  t1658 = -1.*t379*t596;
  t1697 = t1637 + t1658;
  t1572 = t326*t904*t44;
  t1575 = t688*t905;
  t1586 = t1572 + t1575;
  t1720 = Sin(var1[8]);
  t1827 = Cos(var1[9]);
  t1634 = t1571*t1586;
  t1764 = t1697*t1720;
  t1806 = t1634 + t1764;
  t1524 = Sin(var1[9]);
  t1841 = t1571*t1697;
  t1860 = -1.*t1586*t1720;
  t1866 = t1841 + t1860;
  t1953 = Cos(var1[10]);
  t1823 = -1.*t1524*t1806;
  t1897 = t1827*t1866;
  t1917 = t1823 + t1897;
  t1500 = Sin(var1[10]);
  t1966 = t1827*t1806;
  t1977 = t1524*t1866;
  t1996 = t1966 + t1977;
  t2022 = Cos(var1[11]);
  t1941 = t1500*t1917;
  t2007 = t1953*t1996;
  t2008 = t1941 + t2007;
  t1442 = Sin(var1[11]);
  t2053 = t1953*t1917;
  t2054 = -1.*t1500*t1996;
  t2080 = t2053 + t2054;
  t2179 = Cos(var1[12]);
  t2021 = -1.*t1442*t2008;
  t2099 = t2022*t2080;
  t2108 = t2021 + t2099;
  t1427 = Sin(var1[12]);
  t2191 = t2022*t2008;
  t2208 = t1442*t2080;
  t2213 = t2191 + t2208;
  t942 = t326*t223;
  t952 = t268*t334*t344;
  t965 = t942 + t952;
  t990 = t219*t965;
  t1021 = t223*t268*t334;
  t1064 = -1.*t326*t344;
  t1091 = t1021 + t1064;
  t1116 = t1091*t596;
  t1144 = t990 + t1116;
  t2423 = t219*t1091;
  t2452 = -1.*t965*t596;
  t2549 = t2423 + t2452;
  t2389 = t904*t44*t268;
  t2390 = t1144*t905;
  t2407 = t2389 + t2390;
  t2410 = t1571*t2407;
  t2572 = t2549*t1720;
  t2606 = t2410 + t2572;
  t2644 = t1571*t2549;
  t2666 = -1.*t2407*t1720;
  t2701 = t2644 + t2666;
  t2608 = -1.*t1524*t2606;
  t2709 = t1827*t2701;
  t2710 = t2608 + t2709;
  t2753 = t1827*t2606;
  t2754 = t1524*t2701;
  t2760 = t2753 + t2754;
  t2731 = t1500*t2710;
  t2780 = t1953*t2760;
  t2825 = t2731 + t2780;
  t2875 = t1953*t2710;
  t2879 = -1.*t1500*t2760;
  t2880 = t2875 + t2879;
  t2856 = -1.*t1442*t2825;
  t2899 = t2022*t2880;
  t2901 = t2856 + t2899;
  t2903 = t2022*t2825;
  t2910 = t1442*t2880;
  t2940 = t2903 + t2910;
  t1229 = t904*t219*t344;
  t1236 = t904*t223*t596;
  t1245 = t1229 + t1236;
  t3040 = t904*t223*t219;
  t3045 = -1.*t904*t344*t596;
  t3079 = t3040 + t3045;
  t3021 = -1.*t44*t334;
  t3029 = t1245*t905;
  t3036 = t3021 + t3029;
  t3038 = t1571*t3036;
  t3121 = t3079*t1720;
  t3134 = t3038 + t3121;
  t3157 = t1571*t3079;
  t3158 = -1.*t3036*t1720;
  t3167 = t3157 + t3158;
  t3155 = -1.*t1524*t3134;
  t3274 = t1827*t3167;
  t3299 = t3155 + t3274;
  t3327 = t1827*t3134;
  t3340 = t1524*t3167;
  t3364 = t3327 + t3340;
  t3319 = t1500*t3299;
  t3371 = t1953*t3364;
  t3381 = t3319 + t3371;
  t3401 = t1953*t3299;
  t3455 = -1.*t1500*t3364;
  t3459 = t3401 + t3455;
  t3392 = -1.*t1442*t3381;
  t3469 = t2022*t3459;
  t3516 = t3392 + t3469;
  t3534 = t2022*t3381;
  t3550 = t1442*t3459;
  t3574 = t3534 + t3550;
  t2163 = t1427*t2108;
  t2218 = t2179*t2213;
  t2295 = t2163 + t2218;
  t2324 = t2179*t2108;
  t2333 = -1.*t1427*t2213;
  t2339 = t2324 + t2333;
  t2902 = t1427*t2901;
  t2944 = t2179*t2940;
  t2945 = t2902 + t2944;
  t2960 = t2179*t2901;
  t2967 = -1.*t1427*t2940;
  t2976 = t2960 + t2967;
  t3533 = t1427*t3516;
  t3619 = t2179*t3574;
  t3623 = t3533 + t3619;
  t3640 = t2179*t3516;
  t3663 = -1.*t1427*t3574;
  t3673 = t3640 + t3663;
  t3881 = -1.*t44;
  t3913 = 1. + t3881;
  t4060 = -1.*t1571;
  t4064 = 1. + t4060;
  t4146 = -1.*t1827;
  t4161 = 1. + t4146;
  t4289 = -1.*t1953;
  t4294 = 1. + t4289;
  t4388 = -1.*t2022;
  t4439 = 1. + t4388;
  t4667 = -1.*t2179;
  t4688 = 1. + t4667;
  t3798 = -1.*t219;
  t3808 = 1. + t3798;
  t3828 = 0.135*t3808;
  t3839 = 0. + t3828;
  t3854 = -0.135*t596;
  t3860 = 0. + t3854;
  t3915 = 0.135*t3913;
  t3946 = 0.049*t905;
  t3964 = 0. + t3915 + t3946;
  t3967 = -0.049*t3913;
  t3969 = 0.135*t905;
  t3979 = 0. + t3967 + t3969;
  t4076 = -0.049*t4064;
  t4085 = -0.09*t1720;
  t4088 = 0. + t4076 + t4085;
  t4099 = -0.09*t4064;
  t4114 = 0.049*t1720;
  t4116 = 0. + t4099 + t4114;
  t4165 = -0.049*t4161;
  t4200 = -0.21*t1524;
  t4235 = 0. + t4165 + t4200;
  t4247 = -0.21*t4161;
  t4259 = 0.049*t1524;
  t4277 = 0. + t4247 + t4259;
  t4304 = -0.2707*t4294;
  t4318 = 0.0016*t1500;
  t4327 = 0. + t4304 + t4318;
  t4346 = -0.0016*t4294;
  t4353 = -0.2707*t1500;
  t4366 = 0. + t4346 + t4353;
  t4453 = 0.0184*t4439;
  t4484 = -0.7055*t1442;
  t4547 = 0. + t4453 + t4484;
  t4588 = -0.7055*t4439;
  t4612 = -0.0184*t1442;
  t4651 = 0. + t4588 + t4612;
  t4691 = -1.1135*t4688;
  t4739 = 0.0216*t1427;
  t4764 = 0. + t4691 + t4739;
  t4825 = -0.0216*t4688;
  t4868 = -1.1135*t1427;
  t4881 = 0. + t4825 + t4868;

  p_output1(0)=-1.*t44*t688 + t326*t904*t905;
  p_output1(1)=-1.*t1144*t44 + t268*t904*t905;
  p_output1(2)=-1.*t1245*t44 - 1.*t334*t905;
  p_output1(3)=0.;
  p_output1(4)=0.642788*t2295 + 0.766044*t2339;
  p_output1(5)=0.642788*t2945 + 0.766044*t2976;
  p_output1(6)=0.642788*t3623 + 0.766044*t3673;
  p_output1(7)=0.;
  p_output1(8)=-0.766044*t2295 + 0.642788*t2339;
  p_output1(9)=-0.766044*t2945 + 0.642788*t2976;
  p_output1(10)=-0.766044*t3623 + 0.642788*t3673;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.088451*t2295 - 1.062256*t2339 + t379*t3839 + t1586*t4088 + t1697*t4116 + t1806*t4235 + t1866*t4277 + t1917*t4327 + t1996*t4366 + t2008*t4547 + t2080*t4651 + t2108*t4764 + t2213*t4881 + t3860*t569 + t3964*t688 + t326*t3979*t904 + 0.1305*(t44*t688 - 1.*t326*t904*t905) + var1(0);
  p_output1(13)=0. + 0.088451*t2945 - 1.062256*t2976 + t1091*t3860 + t1144*t3964 + t2407*t4088 + t2549*t4116 + t2606*t4235 + t2701*t4277 + t2710*t4327 + t2760*t4366 + t2825*t4547 + t2880*t4651 + t2901*t4764 + t2940*t4881 + t268*t3979*t904 + 0.1305*(t1144*t44 - 1.*t268*t904*t905) + t3839*t965 + var1(1);
  p_output1(14)=0. + 0.088451*t3623 - 1.062256*t3673 + t1245*t3964 - 1.*t334*t3979 + t3036*t4088 + t3079*t4116 + t3134*t4235 + t3167*t4277 + t3299*t4327 + t3364*t4366 + t3381*t4547 + t3459*t4651 + t3516*t4764 + t3574*t4881 + t344*t3839*t904 + t223*t3860*t904 + 0.1305*(t1245*t44 + t334*t905) + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_LeftToeFront(const Eigen::Matrix<double,20,1> &var1)
//void H_LeftToeFront(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



