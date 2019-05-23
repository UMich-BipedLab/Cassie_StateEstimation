/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:10:15 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottom.h"

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
  double t807;
  double t695;
  double t817;
  double t698;
  double t851;
  double t366;
  double t378;
  double t1053;
  double t1396;
  double t1410;
  double t765;
  double t907;
  double t908;
  double t919;
  double t956;
  double t1015;
  double t1017;
  double t1106;
  double t1132;
  double t2393;
  double t2455;
  double t2491;
  double t2591;
  double t2401;
  double t2405;
  double t2422;
  double t2656;
  double t2723;
  double t2442;
  double t2684;
  double t2698;
  double t2341;
  double t2724;
  double t2728;
  double t2781;
  double t2907;
  double t2703;
  double t2846;
  double t2883;
  double t2306;
  double t2915;
  double t2925;
  double t2948;
  double t3026;
  double t2884;
  double t2951;
  double t2975;
  double t2272;
  double t3067;
  double t3099;
  double t3139;
  double t3217;
  double t3020;
  double t3167;
  double t3200;
  double t2269;
  double t3218;
  double t3235;
  double t3248;
  double t1562;
  double t1570;
  double t1617;
  double t1765;
  double t1800;
  double t1805;
  double t1898;
  double t1918;
  double t2035;
  double t3508;
  double t3510;
  double t3513;
  double t3437;
  double t3455;
  double t3457;
  double t3476;
  double t3533;
  double t3548;
  double t3567;
  double t3593;
  double t3613;
  double t3552;
  double t3619;
  double t3630;
  double t3666;
  double t3678;
  double t3694;
  double t3635;
  double t3741;
  double t3767;
  double t3815;
  double t3843;
  double t3853;
  double t3776;
  double t3865;
  double t3868;
  double t3951;
  double t3965;
  double t3972;
  double t2077;
  double t2132;
  double t2141;
  double t4165;
  double t4181;
  double t4200;
  double t4100;
  double t4103;
  double t4151;
  double t4161;
  double t4230;
  double t4269;
  double t4298;
  double t4300;
  double t4318;
  double t4276;
  double t4321;
  double t4349;
  double t4374;
  double t4376;
  double t4378;
  double t4354;
  double t4379;
  double t4387;
  double t4430;
  double t4442;
  double t4446;
  double t4394;
  double t4447;
  double t4451;
  double t4505;
  double t4512;
  double t4516;
  double t3201;
  double t3289;
  double t3326;
  double t3351;
  double t3360;
  double t3364;
  double t3922;
  double t4010;
  double t4033;
  double t4073;
  double t4078;
  double t4084;
  double t4490;
  double t4534;
  double t4542;
  double t4588;
  double t4611;
  double t4661;
  t807 = Cos(var1[3]);
  t695 = Cos(var1[5]);
  t817 = Sin(var1[4]);
  t698 = Sin(var1[3]);
  t851 = Sin(var1[5]);
  t366 = Cos(var1[7]);
  t378 = Cos(var1[6]);
  t1053 = Sin(var1[6]);
  t1396 = Cos(var1[4]);
  t1410 = Sin(var1[7]);
  t765 = -1.*t695*t698;
  t907 = t807*t817*t851;
  t908 = t765 + t907;
  t919 = t378*t908;
  t956 = t807*t695*t817;
  t1015 = t698*t851;
  t1017 = t956 + t1015;
  t1106 = t1017*t1053;
  t1132 = t919 + t1106;
  t2393 = Cos(var1[8]);
  t2455 = t378*t1017;
  t2491 = -1.*t908*t1053;
  t2591 = t2455 + t2491;
  t2401 = t807*t1396*t366;
  t2405 = t1132*t1410;
  t2422 = t2401 + t2405;
  t2656 = Sin(var1[8]);
  t2723 = Cos(var1[9]);
  t2442 = t2393*t2422;
  t2684 = t2591*t2656;
  t2698 = t2442 + t2684;
  t2341 = Sin(var1[9]);
  t2724 = t2393*t2591;
  t2728 = -1.*t2422*t2656;
  t2781 = t2724 + t2728;
  t2907 = Cos(var1[10]);
  t2703 = -1.*t2341*t2698;
  t2846 = t2723*t2781;
  t2883 = t2703 + t2846;
  t2306 = Sin(var1[10]);
  t2915 = t2723*t2698;
  t2925 = t2341*t2781;
  t2948 = t2915 + t2925;
  t3026 = Cos(var1[11]);
  t2884 = t2306*t2883;
  t2951 = t2907*t2948;
  t2975 = t2884 + t2951;
  t2272 = Sin(var1[11]);
  t3067 = t2907*t2883;
  t3099 = -1.*t2306*t2948;
  t3139 = t3067 + t3099;
  t3217 = Cos(var1[12]);
  t3020 = -1.*t2272*t2975;
  t3167 = t3026*t3139;
  t3200 = t3020 + t3167;
  t2269 = Sin(var1[12]);
  t3218 = t3026*t2975;
  t3235 = t2272*t3139;
  t3248 = t3218 + t3235;
  t1562 = t807*t695;
  t1570 = t698*t817*t851;
  t1617 = t1562 + t1570;
  t1765 = t378*t1617;
  t1800 = t695*t698*t817;
  t1805 = -1.*t807*t851;
  t1898 = t1800 + t1805;
  t1918 = t1898*t1053;
  t2035 = t1765 + t1918;
  t3508 = t378*t1898;
  t3510 = -1.*t1617*t1053;
  t3513 = t3508 + t3510;
  t3437 = t1396*t366*t698;
  t3455 = t2035*t1410;
  t3457 = t3437 + t3455;
  t3476 = t2393*t3457;
  t3533 = t3513*t2656;
  t3548 = t3476 + t3533;
  t3567 = t2393*t3513;
  t3593 = -1.*t3457*t2656;
  t3613 = t3567 + t3593;
  t3552 = -1.*t2341*t3548;
  t3619 = t2723*t3613;
  t3630 = t3552 + t3619;
  t3666 = t2723*t3548;
  t3678 = t2341*t3613;
  t3694 = t3666 + t3678;
  t3635 = t2306*t3630;
  t3741 = t2907*t3694;
  t3767 = t3635 + t3741;
  t3815 = t2907*t3630;
  t3843 = -1.*t2306*t3694;
  t3853 = t3815 + t3843;
  t3776 = -1.*t2272*t3767;
  t3865 = t3026*t3853;
  t3868 = t3776 + t3865;
  t3951 = t3026*t3767;
  t3965 = t2272*t3853;
  t3972 = t3951 + t3965;
  t2077 = t1396*t378*t851;
  t2132 = t1396*t695*t1053;
  t2141 = t2077 + t2132;
  t4165 = t1396*t695*t378;
  t4181 = -1.*t1396*t851*t1053;
  t4200 = t4165 + t4181;
  t4100 = -1.*t366*t817;
  t4103 = t2141*t1410;
  t4151 = t4100 + t4103;
  t4161 = t2393*t4151;
  t4230 = t4200*t2656;
  t4269 = t4161 + t4230;
  t4298 = t2393*t4200;
  t4300 = -1.*t4151*t2656;
  t4318 = t4298 + t4300;
  t4276 = -1.*t2341*t4269;
  t4321 = t2723*t4318;
  t4349 = t4276 + t4321;
  t4374 = t2723*t4269;
  t4376 = t2341*t4318;
  t4378 = t4374 + t4376;
  t4354 = t2306*t4349;
  t4379 = t2907*t4378;
  t4387 = t4354 + t4379;
  t4430 = t2907*t4349;
  t4442 = -1.*t2306*t4378;
  t4446 = t4430 + t4442;
  t4394 = -1.*t2272*t4387;
  t4447 = t3026*t4446;
  t4451 = t4394 + t4447;
  t4505 = t3026*t4387;
  t4512 = t2272*t4446;
  t4516 = t4505 + t4512;
  t3201 = t2269*t3200;
  t3289 = t3217*t3248;
  t3326 = t3201 + t3289;
  t3351 = t3217*t3200;
  t3360 = -1.*t2269*t3248;
  t3364 = t3351 + t3360;
  t3922 = t2269*t3868;
  t4010 = t3217*t3972;
  t4033 = t3922 + t4010;
  t4073 = t3217*t3868;
  t4078 = -1.*t2269*t3972;
  t4084 = t4073 + t4078;
  t4490 = t2269*t4451;
  t4534 = t3217*t4516;
  t4542 = t4490 + t4534;
  t4588 = t3217*t4451;
  t4611 = -1.*t2269*t4516;
  t4661 = t4588 + t4611;

  p_output1(0)=-1.*t1132*t366 + t1396*t1410*t807;
  p_output1(1)=-1.*t2035*t366 + t1396*t1410*t698;
  p_output1(2)=-1.*t2141*t366 - 1.*t1410*t817;
  p_output1(3)=0.642788*t3326 + 0.766044*t3364;
  p_output1(4)=0.642788*t4033 + 0.766044*t4084;
  p_output1(5)=0.642788*t4542 + 0.766044*t4661;
  p_output1(6)=-0.766044*t3326 + 0.642788*t3364;
  p_output1(7)=-0.766044*t4033 + 0.642788*t4084;
  p_output1(8)=-0.766044*t4542 + 0.642788*t4661;
}


       
Eigen::Matrix<double,3,3> R_LeftToeBottom(const Eigen::Matrix<double,20,1> &var1)
//void R_LeftToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



