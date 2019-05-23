/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:10:17 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeFront.h"

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
  double t907;
  double t664;
  double t1069;
  double t801;
  double t1084;
  double t216;
  double t897;
  double t1160;
  double t1182;
  double t1277;
  double t1330;
  double t1363;
  double t1383;
  double t1898;
  double t1904;
  double t1918;
  double t2136;
  double t1570;
  double t1745;
  double t1800;
  double t2279;
  double t2704;
  double t2723;
  double t2724;
  double t2907;
  double t2568;
  double t2591;
  double t2684;
  double t3015;
  double t3026;
  double t3036;
  double t3201;
  double t3217;
  double t3254;
  double t3351;
  double t3392;
  double t3455;
  double t3476;
  double t3619;
  double t3678;
  double t3741;
  double t3848;
  double t3853;
  double t3865;
  double t3922;
  double t3975;
  double t4004;
  double t4010;
  double t4200;
  double t4230;
  double t4309;
  double t4321;
  double t4349;
  double t4354;
  double t4379;
  double t4512;
  double t4542;
  double t4572;
  double t4671;
  double t4674;
  double t4687;
  double t4689;
  double t4697;
  double t4726;
  double t4746;
  double t4777;
  double t4782;
  double t4795;
  double t4887;
  double t4931;
  double t4938;
  double t303;
  double t396;
  double t637;
  double t651;
  double t1524;
  double t1560;
  double t5069;
  double t5091;
  double t5094;
  double t5122;
  double t5124;
  double t5136;
  double t2051;
  double t2163;
  double t2237;
  double t2324;
  double t2334;
  double t2393;
  double t5157;
  double t5209;
  double t5210;
  double t2754;
  double t2925;
  double t2951;
  double t3084;
  double t3139;
  double t3167;
  double t3326;
  double t3364;
  double t3388;
  double t5308;
  double t5316;
  double t5320;
  double t5350;
  double t5363;
  double t5366;
  double t3513;
  double t3533;
  double t3613;
  double t3868;
  double t3951;
  double t3965;
  double t5383;
  double t5384;
  double t5385;
  double t5390;
  double t5400;
  double t5407;
  double t4099;
  double t4161;
  double t4165;
  double t4376;
  double t4451;
  double t4505;
  double t5430;
  double t5439;
  double t5445;
  double t5461;
  double t5462;
  double t5468;
  double t4661;
  double t4666;
  double t4667;
  double t4739;
  double t4755;
  double t4764;
  double t5503;
  double t5504;
  double t5507;
  double t5518;
  double t5524;
  double t5531;
  double t4831;
  double t4850;
  double t4884;
  double t5544;
  double t5547;
  double t5552;
  double t5556;
  double t5560;
  double t5561;
  double t5663;
  double t5664;
  double t5672;
  double t5761;
  double t5767;
  double t5807;
  double t5815;
  double t5816;
  double t5824;
  double t5844;
  double t5850;
  double t5851;
  double t5877;
  double t5887;
  double t5888;
  double t5903;
  double t5905;
  double t5914;
  double t5931;
  double t5936;
  double t5939;
  double t5944;
  double t5947;
  double t5948;
  double t5956;
  double t5957;
  double t5958;
  double t5963;
  double t5968;
  double t5969;
  double t5971;
  double t5977;
  double t5983;
  t907 = Cos(var1[3]);
  t664 = Cos(var1[5]);
  t1069 = Sin(var1[4]);
  t801 = Sin(var1[3]);
  t1084 = Sin(var1[5]);
  t216 = Cos(var1[6]);
  t897 = -1.*t664*t801;
  t1160 = t907*t1069*t1084;
  t1182 = t897 + t1160;
  t1277 = t907*t664*t1069;
  t1330 = t801*t1084;
  t1363 = t1277 + t1330;
  t1383 = Sin(var1[6]);
  t1898 = Cos(var1[7]);
  t1904 = -1.*t1898;
  t1918 = 1. + t1904;
  t2136 = Sin(var1[7]);
  t1570 = t216*t1182;
  t1745 = t1363*t1383;
  t1800 = t1570 + t1745;
  t2279 = Cos(var1[4]);
  t2704 = Cos(var1[8]);
  t2723 = -1.*t2704;
  t2724 = 1. + t2723;
  t2907 = Sin(var1[8]);
  t2568 = t907*t2279*t1898;
  t2591 = t1800*t2136;
  t2684 = t2568 + t2591;
  t3015 = t216*t1363;
  t3026 = -1.*t1182*t1383;
  t3036 = t3015 + t3026;
  t3201 = Cos(var1[9]);
  t3217 = -1.*t3201;
  t3254 = 1. + t3217;
  t3351 = Sin(var1[9]);
  t3392 = t2704*t2684;
  t3455 = t3036*t2907;
  t3476 = t3392 + t3455;
  t3619 = t2704*t3036;
  t3678 = -1.*t2684*t2907;
  t3741 = t3619 + t3678;
  t3848 = Cos(var1[10]);
  t3853 = -1.*t3848;
  t3865 = 1. + t3853;
  t3922 = Sin(var1[10]);
  t3975 = -1.*t3351*t3476;
  t4004 = t3201*t3741;
  t4010 = t3975 + t4004;
  t4200 = t3201*t3476;
  t4230 = t3351*t3741;
  t4309 = t4200 + t4230;
  t4321 = Cos(var1[11]);
  t4349 = -1.*t4321;
  t4354 = 1. + t4349;
  t4379 = Sin(var1[11]);
  t4512 = t3922*t4010;
  t4542 = t3848*t4309;
  t4572 = t4512 + t4542;
  t4671 = t3848*t4010;
  t4674 = -1.*t3922*t4309;
  t4687 = t4671 + t4674;
  t4689 = Cos(var1[12]);
  t4697 = -1.*t4689;
  t4726 = 1. + t4697;
  t4746 = Sin(var1[12]);
  t4777 = -1.*t4379*t4572;
  t4782 = t4321*t4687;
  t4795 = t4777 + t4782;
  t4887 = t4321*t4572;
  t4931 = t4379*t4687;
  t4938 = t4887 + t4931;
  t303 = -1.*t216;
  t396 = 1. + t303;
  t637 = 0.135*t396;
  t651 = 0. + t637;
  t1524 = -0.135*t1383;
  t1560 = 0. + t1524;
  t5069 = t907*t664;
  t5091 = t801*t1069*t1084;
  t5094 = t5069 + t5091;
  t5122 = t664*t801*t1069;
  t5124 = -1.*t907*t1084;
  t5136 = t5122 + t5124;
  t2051 = 0.135*t1918;
  t2163 = 0.049*t2136;
  t2237 = 0. + t2051 + t2163;
  t2324 = -0.049*t1918;
  t2334 = 0.135*t2136;
  t2393 = 0. + t2324 + t2334;
  t5157 = t216*t5094;
  t5209 = t5136*t1383;
  t5210 = t5157 + t5209;
  t2754 = -0.049*t2724;
  t2925 = -0.09*t2907;
  t2951 = 0. + t2754 + t2925;
  t3084 = -0.09*t2724;
  t3139 = 0.049*t2907;
  t3167 = 0. + t3084 + t3139;
  t3326 = -0.049*t3254;
  t3364 = -0.21*t3351;
  t3388 = 0. + t3326 + t3364;
  t5308 = t2279*t1898*t801;
  t5316 = t5210*t2136;
  t5320 = t5308 + t5316;
  t5350 = t216*t5136;
  t5363 = -1.*t5094*t1383;
  t5366 = t5350 + t5363;
  t3513 = -0.21*t3254;
  t3533 = 0.049*t3351;
  t3613 = 0. + t3513 + t3533;
  t3868 = -0.2707*t3865;
  t3951 = 0.0016*t3922;
  t3965 = 0. + t3868 + t3951;
  t5383 = t2704*t5320;
  t5384 = t5366*t2907;
  t5385 = t5383 + t5384;
  t5390 = t2704*t5366;
  t5400 = -1.*t5320*t2907;
  t5407 = t5390 + t5400;
  t4099 = -0.0016*t3865;
  t4161 = -0.2707*t3922;
  t4165 = 0. + t4099 + t4161;
  t4376 = 0.0184*t4354;
  t4451 = -0.7055*t4379;
  t4505 = 0. + t4376 + t4451;
  t5430 = -1.*t3351*t5385;
  t5439 = t3201*t5407;
  t5445 = t5430 + t5439;
  t5461 = t3201*t5385;
  t5462 = t3351*t5407;
  t5468 = t5461 + t5462;
  t4661 = -0.7055*t4354;
  t4666 = -0.0184*t4379;
  t4667 = 0. + t4661 + t4666;
  t4739 = -1.1135*t4726;
  t4755 = 0.0216*t4746;
  t4764 = 0. + t4739 + t4755;
  t5503 = t3922*t5445;
  t5504 = t3848*t5468;
  t5507 = t5503 + t5504;
  t5518 = t3848*t5445;
  t5524 = -1.*t3922*t5468;
  t5531 = t5518 + t5524;
  t4831 = -0.0216*t4726;
  t4850 = -1.1135*t4746;
  t4884 = 0. + t4831 + t4850;
  t5544 = -1.*t4379*t5507;
  t5547 = t4321*t5531;
  t5552 = t5544 + t5547;
  t5556 = t4321*t5507;
  t5560 = t4379*t5531;
  t5561 = t5556 + t5560;
  t5663 = t2279*t216*t1084;
  t5664 = t2279*t664*t1383;
  t5672 = t5663 + t5664;
  t5761 = -1.*t1898*t1069;
  t5767 = t5672*t2136;
  t5807 = t5761 + t5767;
  t5815 = t2279*t664*t216;
  t5816 = -1.*t2279*t1084*t1383;
  t5824 = t5815 + t5816;
  t5844 = t2704*t5807;
  t5850 = t5824*t2907;
  t5851 = t5844 + t5850;
  t5877 = t2704*t5824;
  t5887 = -1.*t5807*t2907;
  t5888 = t5877 + t5887;
  t5903 = -1.*t3351*t5851;
  t5905 = t3201*t5888;
  t5914 = t5903 + t5905;
  t5931 = t3201*t5851;
  t5936 = t3351*t5888;
  t5939 = t5931 + t5936;
  t5944 = t3922*t5914;
  t5947 = t3848*t5939;
  t5948 = t5944 + t5947;
  t5956 = t3848*t5914;
  t5957 = -1.*t3922*t5939;
  t5958 = t5956 + t5957;
  t5963 = -1.*t4379*t5948;
  t5968 = t4321*t5958;
  t5969 = t5963 + t5968;
  t5971 = t4321*t5948;
  t5977 = t4379*t5958;
  t5983 = t5971 + t5977;

  p_output1(0)=0. + t1363*t1560 + t1800*t2237 + t2684*t2951 + t3036*t3167 + t3388*t3476 + t3613*t3741 + t3965*t4010 + t4165*t4309 + t4505*t4572 + t4667*t4687 + t4764*t4795 + t4884*t4938 + 0.088451*(t4746*t4795 + t4689*t4938) - 1.062256*(t4689*t4795 - 1.*t4746*t4938) + t1182*t651 + t2279*t2393*t907 + 0.1305*(t1800*t1898 - 1.*t2136*t2279*t907) + var1(0);
  p_output1(1)=0. + t1560*t5136 + t2237*t5210 + t2951*t5320 + t3167*t5366 + t3388*t5385 + t3613*t5407 + t3965*t5445 + t4165*t5468 + t4505*t5507 + t4667*t5531 + t4764*t5552 + t4884*t5561 + 0.088451*(t4746*t5552 + t4689*t5561) - 1.062256*(t4689*t5552 - 1.*t4746*t5561) + t5094*t651 + t2279*t2393*t801 + 0.1305*(t1898*t5210 - 1.*t2136*t2279*t801) + var1(1);
  p_output1(2)=0. - 1.*t1069*t2393 + t2237*t5672 + 0.1305*(t1069*t2136 + t1898*t5672) + t2951*t5807 + t3167*t5824 + t3388*t5851 + t3613*t5888 + t3965*t5914 + t4165*t5939 + t4505*t5948 + t4667*t5958 + t4764*t5969 + t4884*t5983 + 0.088451*(t4746*t5969 + t4689*t5983) - 1.062256*(t4689*t5969 - 1.*t4746*t5983) + t1084*t2279*t651 + t1560*t2279*t664 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_LeftToeFront(const Eigen::Matrix<double,20,1> &var1)
//void p_LeftToeFront(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



