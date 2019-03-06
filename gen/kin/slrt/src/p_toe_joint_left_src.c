/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:38 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_toe_joint_left_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
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
static void output1(double *p_output1,const double *var1)
{
  double t1406;
  double t1237;
  double t1420;
  double t1257;
  double t1460;
  double t123;
  double t1385;
  double t1551;
  double t1671;
  double t2377;
  double t2413;
  double t2433;
  double t2804;
  double t3656;
  double t3661;
  double t3840;
  double t3852;
  double t3338;
  double t3501;
  double t3542;
  double t4418;
  double t5606;
  double t5635;
  double t5679;
  double t5924;
  double t5310;
  double t5419;
  double t5582;
  double t6370;
  double t6461;
  double t6480;
  double t6537;
  double t6542;
  double t6573;
  double t6578;
  double t6642;
  double t6651;
  double t6656;
  double t6710;
  double t6724;
  double t6735;
  double t6750;
  double t6765;
  double t6768;
  double t6786;
  double t6813;
  double t6828;
  double t6849;
  double t6882;
  double t6890;
  double t6893;
  double t6917;
  double t6920;
  double t6949;
  double t6979;
  double t7018;
  double t7035;
  double t7045;
  double t7084;
  double t7111;
  double t7141;
  double t7178;
  double t7186;
  double t7197;
  double t7212;
  double t7247;
  double t7258;
  double t7261;
  double t7281;
  double t7287;
  double t7289;
  double t868;
  double t964;
  double t969;
  double t1037;
  double t2807;
  double t3080;
  double t7394;
  double t7395;
  double t7404;
  double t7413;
  double t7420;
  double t7427;
  double t3851;
  double t3934;
  double t4068;
  double t4657;
  double t4701;
  double t4719;
  double t7466;
  double t7470;
  double t7481;
  double t5903;
  double t6239;
  double t6267;
  double t6483;
  double t6490;
  double t6516;
  double t6577;
  double t6625;
  double t6633;
  double t7569;
  double t7586;
  double t7592;
  double t7619;
  double t7622;
  double t7662;
  double t6685;
  double t6697;
  double t6708;
  double t6773;
  double t6787;
  double t6796;
  double t7701;
  double t7709;
  double t7727;
  double t7748;
  double t7757;
  double t7760;
  double t6853;
  double t6877;
  double t6881;
  double t6965;
  double t6999;
  double t7016;
  double t7779;
  double t7792;
  double t7797;
  double t7801;
  double t7811;
  double t7813;
  double t7056;
  double t7069;
  double t7077;
  double t7199;
  double t7227;
  double t7233;
  double t7822;
  double t7824;
  double t7839;
  double t7853;
  double t7854;
  double t7867;
  double t7269;
  double t7276;
  double t7277;
  double t7906;
  double t7909;
  double t7911;
  double t7917;
  double t7928;
  double t7930;
  double t8048;
  double t8066;
  double t8068;
  double t8115;
  double t8124;
  double t8132;
  double t8150;
  double t8155;
  double t8157;
  double t8174;
  double t8178;
  double t8180;
  double t8191;
  double t8194;
  double t8195;
  double t8198;
  double t8210;
  double t8237;
  double t8250;
  double t8251;
  double t8263;
  double t8265;
  double t8283;
  double t8291;
  double t8298;
  double t8301;
  double t8308;
  double t8310;
  double t8315;
  double t8318;
  double t8326;
  double t8333;
  double t8334;
  t1406 = Cos(var1[3]);
  t1237 = Cos(var1[5]);
  t1420 = Sin(var1[4]);
  t1257 = Sin(var1[3]);
  t1460 = Sin(var1[5]);
  t123 = Cos(var1[6]);
  t1385 = -1.*t1237*t1257;
  t1551 = t1406*t1420*t1460;
  t1671 = t1385 + t1551;
  t2377 = t1406*t1237*t1420;
  t2413 = t1257*t1460;
  t2433 = t2377 + t2413;
  t2804 = Sin(var1[6]);
  t3656 = Cos(var1[7]);
  t3661 = -1.*t3656;
  t3840 = 1. + t3661;
  t3852 = Sin(var1[7]);
  t3338 = t123*t1671;
  t3501 = t2433*t2804;
  t3542 = t3338 + t3501;
  t4418 = Cos(var1[4]);
  t5606 = Cos(var1[8]);
  t5635 = -1.*t5606;
  t5679 = 1. + t5635;
  t5924 = Sin(var1[8]);
  t5310 = t1406*t4418*t3656;
  t5419 = t3542*t3852;
  t5582 = t5310 + t5419;
  t6370 = t123*t2433;
  t6461 = -1.*t1671*t2804;
  t6480 = t6370 + t6461;
  t6537 = Cos(var1[9]);
  t6542 = -1.*t6537;
  t6573 = 1. + t6542;
  t6578 = Sin(var1[9]);
  t6642 = t5606*t5582;
  t6651 = t6480*t5924;
  t6656 = t6642 + t6651;
  t6710 = t5606*t6480;
  t6724 = -1.*t5582*t5924;
  t6735 = t6710 + t6724;
  t6750 = Cos(var1[10]);
  t6765 = -1.*t6750;
  t6768 = 1. + t6765;
  t6786 = Sin(var1[10]);
  t6813 = -1.*t6578*t6656;
  t6828 = t6537*t6735;
  t6849 = t6813 + t6828;
  t6882 = t6537*t6656;
  t6890 = t6578*t6735;
  t6893 = t6882 + t6890;
  t6917 = Cos(var1[11]);
  t6920 = -1.*t6917;
  t6949 = 1. + t6920;
  t6979 = Sin(var1[11]);
  t7018 = t6786*t6849;
  t7035 = t6750*t6893;
  t7045 = t7018 + t7035;
  t7084 = t6750*t6849;
  t7111 = -1.*t6786*t6893;
  t7141 = t7084 + t7111;
  t7178 = Cos(var1[12]);
  t7186 = -1.*t7178;
  t7197 = 1. + t7186;
  t7212 = Sin(var1[12]);
  t7247 = -1.*t6979*t7045;
  t7258 = t6917*t7141;
  t7261 = t7247 + t7258;
  t7281 = t6917*t7045;
  t7287 = t6979*t7141;
  t7289 = t7281 + t7287;
  t868 = -1.*t123;
  t964 = 1. + t868;
  t969 = 0.135*t964;
  t1037 = 0. + t969;
  t2807 = -0.135*t2804;
  t3080 = 0. + t2807;
  t7394 = t1406*t1237;
  t7395 = t1257*t1420*t1460;
  t7404 = t7394 + t7395;
  t7413 = t1237*t1257*t1420;
  t7420 = -1.*t1406*t1460;
  t7427 = t7413 + t7420;
  t3851 = 0.135*t3840;
  t3934 = 0.049*t3852;
  t4068 = 0. + t3851 + t3934;
  t4657 = -0.049*t3840;
  t4701 = 0.135*t3852;
  t4719 = 0. + t4657 + t4701;
  t7466 = t123*t7404;
  t7470 = t7427*t2804;
  t7481 = t7466 + t7470;
  t5903 = -0.049*t5679;
  t6239 = -0.09*t5924;
  t6267 = 0. + t5903 + t6239;
  t6483 = -0.09*t5679;
  t6490 = 0.049*t5924;
  t6516 = 0. + t6483 + t6490;
  t6577 = -0.049*t6573;
  t6625 = -0.21*t6578;
  t6633 = 0. + t6577 + t6625;
  t7569 = t4418*t3656*t1257;
  t7586 = t7481*t3852;
  t7592 = t7569 + t7586;
  t7619 = t123*t7427;
  t7622 = -1.*t7404*t2804;
  t7662 = t7619 + t7622;
  t6685 = -0.21*t6573;
  t6697 = 0.049*t6578;
  t6708 = 0. + t6685 + t6697;
  t6773 = -0.2707*t6768;
  t6787 = 0.0016*t6786;
  t6796 = 0. + t6773 + t6787;
  t7701 = t5606*t7592;
  t7709 = t7662*t5924;
  t7727 = t7701 + t7709;
  t7748 = t5606*t7662;
  t7757 = -1.*t7592*t5924;
  t7760 = t7748 + t7757;
  t6853 = -0.0016*t6768;
  t6877 = -0.2707*t6786;
  t6881 = 0. + t6853 + t6877;
  t6965 = 0.0184*t6949;
  t6999 = -0.7055*t6979;
  t7016 = 0. + t6965 + t6999;
  t7779 = -1.*t6578*t7727;
  t7792 = t6537*t7760;
  t7797 = t7779 + t7792;
  t7801 = t6537*t7727;
  t7811 = t6578*t7760;
  t7813 = t7801 + t7811;
  t7056 = -0.7055*t6949;
  t7069 = -0.0184*t6979;
  t7077 = 0. + t7056 + t7069;
  t7199 = -1.1135*t7197;
  t7227 = 0.0216*t7212;
  t7233 = 0. + t7199 + t7227;
  t7822 = t6786*t7797;
  t7824 = t6750*t7813;
  t7839 = t7822 + t7824;
  t7853 = t6750*t7797;
  t7854 = -1.*t6786*t7813;
  t7867 = t7853 + t7854;
  t7269 = -0.0216*t7197;
  t7276 = -1.1135*t7212;
  t7277 = 0. + t7269 + t7276;
  t7906 = -1.*t6979*t7839;
  t7909 = t6917*t7867;
  t7911 = t7906 + t7909;
  t7917 = t6917*t7839;
  t7928 = t6979*t7867;
  t7930 = t7917 + t7928;
  t8048 = t4418*t123*t1460;
  t8066 = t4418*t1237*t2804;
  t8068 = t8048 + t8066;
  t8115 = -1.*t3656*t1420;
  t8124 = t8068*t3852;
  t8132 = t8115 + t8124;
  t8150 = t4418*t1237*t123;
  t8155 = -1.*t4418*t1460*t2804;
  t8157 = t8150 + t8155;
  t8174 = t5606*t8132;
  t8178 = t8157*t5924;
  t8180 = t8174 + t8178;
  t8191 = t5606*t8157;
  t8194 = -1.*t8132*t5924;
  t8195 = t8191 + t8194;
  t8198 = -1.*t6578*t8180;
  t8210 = t6537*t8195;
  t8237 = t8198 + t8210;
  t8250 = t6537*t8180;
  t8251 = t6578*t8195;
  t8263 = t8250 + t8251;
  t8265 = t6786*t8237;
  t8283 = t6750*t8263;
  t8291 = t8265 + t8283;
  t8298 = t6750*t8237;
  t8301 = -1.*t6786*t8263;
  t8308 = t8298 + t8301;
  t8310 = -1.*t6979*t8291;
  t8315 = t6917*t8308;
  t8318 = t8310 + t8315;
  t8326 = t6917*t8291;
  t8333 = t6979*t8308;
  t8334 = t8326 + t8333;
  p_output1[0]=0. + t1037*t1671 + t2433*t3080 + t3542*t4068 + 0.1305*(t3542*t3656 - 1.*t1406*t3852*t4418) + t1406*t4418*t4719 + t5582*t6267 + t6480*t6516 + t6633*t6656 + t6708*t6735 + t6796*t6849 + t6881*t6893 + t7016*t7045 + t7077*t7141 + t7233*t7261 + t7277*t7289 - 0.0216*(t7212*t7261 + t7178*t7289) - 1.1135*(t7178*t7261 - 1.*t7212*t7289) + var1[0];
  p_output1[1]=0. + t1257*t4418*t4719 + t1037*t7404 + t3080*t7427 + t4068*t7481 + 0.1305*(-1.*t1257*t3852*t4418 + t3656*t7481) + t6267*t7592 + t6516*t7662 + t6633*t7727 + t6708*t7760 + t6796*t7797 + t6881*t7813 + t7016*t7839 + t7077*t7867 + t7233*t7911 + t7277*t7930 - 0.0216*(t7212*t7911 + t7178*t7930) - 1.1135*(t7178*t7911 - 1.*t7212*t7930) + var1[1];
  p_output1[2]=0. + t1037*t1460*t4418 + t1237*t3080*t4418 - 1.*t1420*t4719 + t4068*t8068 + 0.1305*(t1420*t3852 + t3656*t8068) + t6267*t8132 + t6516*t8157 + t6633*t8180 + t6708*t8195 + t6796*t8237 + t6881*t8263 + t7016*t8291 + t7077*t8308 + t7233*t8318 + t7277*t8334 - 0.0216*(t7212*t8318 + t7178*t8334) - 1.1135*(t7178*t8318 - 1.*t7212*t8334) + var1[2];
}



void p_toe_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
