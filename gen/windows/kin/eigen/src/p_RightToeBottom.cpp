/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:22:56 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t89;
  double t999;
  double t1183;
  double t1055;
  double t1212;
  double t513;
  double t577;
  double t623;
  double t710;
  double t934;
  double t1120;
  double t1266;
  double t1300;
  double t1360;
  double t1458;
  double t1472;
  double t1479;
  double t423;
  double t1646;
  double t1652;
  double t1687;
  double t1797;
  double t1884;
  double t1910;
  double t1948;
  double t2005;
  double t2066;
  double t2153;
  double t2270;
  double t2275;
  double t2303;
  double t2362;
  double t2369;
  double t2409;
  double t2483;
  double t2549;
  double t2586;
  double t2611;
  double t2729;
  double t2736;
  double t2738;
  double t2752;
  double t2755;
  double t2772;
  double t2799;
  double t2877;
  double t2885;
  double t2886;
  double t3081;
  double t3115;
  double t3133;
  double t3172;
  double t3226;
  double t3249;
  double t3259;
  double t3311;
  double t3337;
  double t3338;
  double t3416;
  double t3420;
  double t3427;
  double t3461;
  double t3479;
  double t3495;
  double t3520;
  double t3542;
  double t3546;
  double t3577;
  double t3671;
  double t3692;
  double t3729;
  double t705;
  double t772;
  double t870;
  double t963;
  double t964;
  double t1390;
  double t1411;
  double t1428;
  double t1446;
  double t1588;
  double t1610;
  double t1638;
  double t3895;
  double t3897;
  double t3905;
  double t3908;
  double t3921;
  double t3929;
  double t1930;
  double t1962;
  double t1973;
  double t3936;
  double t3939;
  double t3949;
  double t2246;
  double t2260;
  double t2261;
  double t2423;
  double t2498;
  double t2522;
  double t3961;
  double t3962;
  double t3967;
  double t4014;
  double t4015;
  double t4040;
  double t2662;
  double t2695;
  double t2718;
  double t2791;
  double t2819;
  double t2864;
  double t4062;
  double t4068;
  double t4075;
  double t4095;
  double t4101;
  double t4102;
  double t2930;
  double t2974;
  double t2992;
  double t3257;
  double t3280;
  double t3291;
  double t4107;
  double t4109;
  double t4112;
  double t4127;
  double t4141;
  double t4147;
  double t3363;
  double t3369;
  double t3390;
  double t3511;
  double t3530;
  double t3532;
  double t4150;
  double t4154;
  double t4158;
  double t4162;
  double t4166;
  double t4174;
  double t3602;
  double t3621;
  double t3643;
  double t4183;
  double t4185;
  double t4187;
  double t4201;
  double t4210;
  double t4215;
  double t4266;
  double t4268;
  double t4283;
  double t4297;
  double t4299;
  double t4305;
  double t4347;
  double t4355;
  double t4367;
  double t4405;
  double t4412;
  double t4414;
  double t4428;
  double t4431;
  double t4436;
  double t4454;
  double t4456;
  double t4459;
  double t4468;
  double t4479;
  double t4480;
  double t4496;
  double t4522;
  double t4526;
  double t4541;
  double t4544;
  double t4548;
  double t4560;
  double t4565;
  double t4576;
  double t4588;
  double t4589;
  double t4592;
  t89 = Cos(var1[3]);
  t999 = Cos(var1[5]);
  t1183 = Sin(var1[3]);
  t1055 = Sin(var1[4]);
  t1212 = Sin(var1[5]);
  t513 = Cos(var1[14]);
  t577 = -1.*t513;
  t623 = 1. + t577;
  t710 = Sin(var1[14]);
  t934 = Sin(var1[13]);
  t1120 = t89*t999*t1055;
  t1266 = t1183*t1212;
  t1300 = t1120 + t1266;
  t1360 = Cos(var1[13]);
  t1458 = -1.*t999*t1183;
  t1472 = t89*t1055*t1212;
  t1479 = t1458 + t1472;
  t423 = Cos(var1[4]);
  t1646 = t934*t1300;
  t1652 = t1360*t1479;
  t1687 = t1646 + t1652;
  t1797 = Cos(var1[15]);
  t1884 = -1.*t1797;
  t1910 = 1. + t1884;
  t1948 = Sin(var1[15]);
  t2005 = t1360*t1300;
  t2066 = -1.*t934*t1479;
  t2153 = t2005 + t2066;
  t2270 = t513*t89*t423;
  t2275 = t710*t1687;
  t2303 = t2270 + t2275;
  t2362 = Cos(var1[16]);
  t2369 = -1.*t2362;
  t2409 = 1. + t2369;
  t2483 = Sin(var1[16]);
  t2549 = t1948*t2153;
  t2586 = t1797*t2303;
  t2611 = t2549 + t2586;
  t2729 = t1797*t2153;
  t2736 = -1.*t1948*t2303;
  t2738 = t2729 + t2736;
  t2752 = Cos(var1[17]);
  t2755 = -1.*t2752;
  t2772 = 1. + t2755;
  t2799 = Sin(var1[17]);
  t2877 = -1.*t2483*t2611;
  t2885 = t2362*t2738;
  t2886 = t2877 + t2885;
  t3081 = t2362*t2611;
  t3115 = t2483*t2738;
  t3133 = t3081 + t3115;
  t3172 = Cos(var1[18]);
  t3226 = -1.*t3172;
  t3249 = 1. + t3226;
  t3259 = Sin(var1[18]);
  t3311 = t2799*t2886;
  t3337 = t2752*t3133;
  t3338 = t3311 + t3337;
  t3416 = t2752*t2886;
  t3420 = -1.*t2799*t3133;
  t3427 = t3416 + t3420;
  t3461 = Cos(var1[19]);
  t3479 = -1.*t3461;
  t3495 = 1. + t3479;
  t3520 = Sin(var1[19]);
  t3542 = -1.*t3259*t3338;
  t3546 = t3172*t3427;
  t3577 = t3542 + t3546;
  t3671 = t3172*t3338;
  t3692 = t3259*t3427;
  t3729 = t3671 + t3692;
  t705 = -0.049*t623;
  t772 = -0.135*t710;
  t870 = 0. + t705 + t772;
  t963 = 0.135*t934;
  t964 = 0. + t963;
  t1390 = -1.*t1360;
  t1411 = 1. + t1390;
  t1428 = -0.135*t1411;
  t1446 = 0. + t1428;
  t1588 = -0.135*t623;
  t1610 = 0.049*t710;
  t1638 = 0. + t1588 + t1610;
  t3895 = t999*t1183*t1055;
  t3897 = -1.*t89*t1212;
  t3905 = t3895 + t3897;
  t3908 = t89*t999;
  t3921 = t1183*t1055*t1212;
  t3929 = t3908 + t3921;
  t1930 = -0.09*t1910;
  t1962 = 0.049*t1948;
  t1973 = 0. + t1930 + t1962;
  t3936 = t934*t3905;
  t3939 = t1360*t3929;
  t3949 = t3936 + t3939;
  t2246 = -0.049*t1910;
  t2260 = -0.09*t1948;
  t2261 = 0. + t2246 + t2260;
  t2423 = -0.049*t2409;
  t2498 = -0.21*t2483;
  t2522 = 0. + t2423 + t2498;
  t3961 = t1360*t3905;
  t3962 = -1.*t934*t3929;
  t3967 = t3961 + t3962;
  t4014 = t513*t423*t1183;
  t4015 = t710*t3949;
  t4040 = t4014 + t4015;
  t2662 = -0.21*t2409;
  t2695 = 0.049*t2483;
  t2718 = 0. + t2662 + t2695;
  t2791 = -0.2707*t2772;
  t2819 = 0.0016*t2799;
  t2864 = 0. + t2791 + t2819;
  t4062 = t1948*t3967;
  t4068 = t1797*t4040;
  t4075 = t4062 + t4068;
  t4095 = t1797*t3967;
  t4101 = -1.*t1948*t4040;
  t4102 = t4095 + t4101;
  t2930 = -0.0016*t2772;
  t2974 = -0.2707*t2799;
  t2992 = 0. + t2930 + t2974;
  t3257 = 0.0184*t3249;
  t3280 = -0.7055*t3259;
  t3291 = 0. + t3257 + t3280;
  t4107 = -1.*t2483*t4075;
  t4109 = t2362*t4102;
  t4112 = t4107 + t4109;
  t4127 = t2362*t4075;
  t4141 = t2483*t4102;
  t4147 = t4127 + t4141;
  t3363 = -0.7055*t3249;
  t3369 = -0.0184*t3259;
  t3390 = 0. + t3363 + t3369;
  t3511 = -1.1135*t3495;
  t3530 = 0.0216*t3520;
  t3532 = 0. + t3511 + t3530;
  t4150 = t2799*t4112;
  t4154 = t2752*t4147;
  t4158 = t4150 + t4154;
  t4162 = t2752*t4112;
  t4166 = -1.*t2799*t4147;
  t4174 = t4162 + t4166;
  t3602 = -0.0216*t3495;
  t3621 = -1.1135*t3520;
  t3643 = 0. + t3602 + t3621;
  t4183 = -1.*t3259*t4158;
  t4185 = t3172*t4174;
  t4187 = t4183 + t4185;
  t4201 = t3172*t4158;
  t4210 = t3259*t4174;
  t4215 = t4201 + t4210;
  t4266 = t423*t999*t934;
  t4268 = t1360*t423*t1212;
  t4283 = t4266 + t4268;
  t4297 = t1360*t423*t999;
  t4299 = -1.*t423*t934*t1212;
  t4305 = t4297 + t4299;
  t4347 = -1.*t513*t1055;
  t4355 = t710*t4283;
  t4367 = t4347 + t4355;
  t4405 = t1948*t4305;
  t4412 = t1797*t4367;
  t4414 = t4405 + t4412;
  t4428 = t1797*t4305;
  t4431 = -1.*t1948*t4367;
  t4436 = t4428 + t4431;
  t4454 = -1.*t2483*t4414;
  t4456 = t2362*t4436;
  t4459 = t4454 + t4456;
  t4468 = t2362*t4414;
  t4479 = t2483*t4436;
  t4480 = t4468 + t4479;
  t4496 = t2799*t4459;
  t4522 = t2752*t4480;
  t4526 = t4496 + t4522;
  t4541 = t2752*t4459;
  t4544 = -1.*t2799*t4480;
  t4548 = t4541 + t4544;
  t4560 = -1.*t3259*t4526;
  t4565 = t3172*t4548;
  t4576 = t4560 + t4565;
  t4588 = t3172*t4526;
  t4589 = t3259*t4548;
  t4592 = t4588 + t4589;

  p_output1(0)=0. + t1446*t1479 + t1638*t1687 + t1973*t2153 + t2261*t2303 + t2522*t2611 + t2718*t2738 + t2864*t2886 + t2992*t3133 + t3291*t3338 + t3390*t3427 + t3532*t3577 + t3643*t3729 + 0.0306*(t3520*t3577 + t3461*t3729) - 1.1312*(t3461*t3577 - 1.*t3520*t3729) + t423*t870*t89 - 0.1305*(t1687*t513 - 1.*t423*t710*t89) + t1300*t964 + var1(0);
  p_output1(1)=0. + t1446*t3929 + t1638*t3949 + t1973*t3967 + t2261*t4040 + t2522*t4075 + t2718*t4102 + t2864*t4112 + t2992*t4147 + t3291*t4158 + t3390*t4174 + t3532*t4187 + t3643*t4215 + 0.0306*(t3520*t4187 + t3461*t4215) - 1.1312*(t3461*t4187 - 1.*t3520*t4215) - 0.1305*(t3949*t513 - 1.*t1183*t423*t710) + t1183*t423*t870 + t3905*t964 + var1(1);
  p_output1(2)=0. + t1212*t1446*t423 + t1638*t4283 + t1973*t4305 + t2261*t4367 + t2522*t4414 + t2718*t4436 + t2864*t4459 + t2992*t4480 + t3291*t4526 + t3390*t4548 + t3532*t4576 + t3643*t4592 + 0.0306*(t3520*t4576 + t3461*t4592) - 1.1312*(t3461*t4576 - 1.*t3520*t4592) - 0.1305*(t4283*t513 + t1055*t710) - 1.*t1055*t870 + t423*t964*t999 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RightToeBottom(const Eigen::Matrix<double,20,1> &var1)
//void p_RightToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



