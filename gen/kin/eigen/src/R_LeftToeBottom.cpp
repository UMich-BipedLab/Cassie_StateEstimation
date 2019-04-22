/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:40 GMT-05:00
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
  double t637;
  double t482;
  double t662;
  double t491;
  double t706;
  double t248;
  double t327;
  double t909;
  double t999;
  double t1008;
  double t607;
  double t720;
  double t737;
  double t766;
  double t804;
  double t876;
  double t892;
  double t918;
  double t945;
  double t2304;
  double t2464;
  double t2479;
  double t2546;
  double t2364;
  double t2373;
  double t2417;
  double t2565;
  double t2667;
  double t2436;
  double t2600;
  double t2629;
  double t2292;
  double t2687;
  double t2771;
  double t2819;
  double t2910;
  double t2631;
  double t2867;
  double t2879;
  double t2277;
  double t2912;
  double t2913;
  double t2919;
  double t3004;
  double t2895;
  double t2949;
  double t2964;
  double t2259;
  double t3042;
  double t3071;
  double t3075;
  double t3170;
  double t2986;
  double t3128;
  double t3135;
  double t2182;
  double t3207;
  double t3230;
  double t3251;
  double t1206;
  double t1383;
  double t1443;
  double t1490;
  double t1516;
  double t1542;
  double t1591;
  double t1755;
  double t1757;
  double t3590;
  double t3618;
  double t3620;
  double t3468;
  double t3522;
  double t3525;
  double t3588;
  double t3644;
  double t3652;
  double t3734;
  double t3735;
  double t3743;
  double t3682;
  double t3760;
  double t3796;
  double t3986;
  double t4042;
  double t4062;
  double t3945;
  double t4065;
  double t4080;
  double t4148;
  double t4164;
  double t4211;
  double t4123;
  double t4214;
  double t4258;
  double t4277;
  double t4287;
  double t4304;
  double t1875;
  double t1980;
  double t2047;
  double t4542;
  double t4550;
  double t4553;
  double t4461;
  double t4466;
  double t4524;
  double t4527;
  double t4559;
  double t4563;
  double t4574;
  double t4632;
  double t4656;
  double t4571;
  double t4686;
  double t4705;
  double t4741;
  double t4756;
  double t4769;
  double t4720;
  double t4795;
  double t4856;
  double t4892;
  double t4893;
  double t4895;
  double t4888;
  double t4916;
  double t4922;
  double t4974;
  double t5011;
  double t5022;
  double t3138;
  double t3282;
  double t3343;
  double t3362;
  double t3393;
  double t3423;
  double t4259;
  double t4327;
  double t4330;
  double t4348;
  double t4351;
  double t4370;
  double t4962;
  double t5036;
  double t5042;
  double t5068;
  double t5075;
  double t5081;
  t637 = Cos(var1[3]);
  t482 = Cos(var1[5]);
  t662 = Sin(var1[4]);
  t491 = Sin(var1[3]);
  t706 = Sin(var1[5]);
  t248 = Cos(var1[7]);
  t327 = Cos(var1[6]);
  t909 = Sin(var1[6]);
  t999 = Cos(var1[4]);
  t1008 = Sin(var1[7]);
  t607 = -1.*t482*t491;
  t720 = t637*t662*t706;
  t737 = t607 + t720;
  t766 = t327*t737;
  t804 = t637*t482*t662;
  t876 = t491*t706;
  t892 = t804 + t876;
  t918 = t892*t909;
  t945 = t766 + t918;
  t2304 = Cos(var1[8]);
  t2464 = t327*t892;
  t2479 = -1.*t737*t909;
  t2546 = t2464 + t2479;
  t2364 = t637*t999*t248;
  t2373 = t945*t1008;
  t2417 = t2364 + t2373;
  t2565 = Sin(var1[8]);
  t2667 = Cos(var1[9]);
  t2436 = t2304*t2417;
  t2600 = t2546*t2565;
  t2629 = t2436 + t2600;
  t2292 = Sin(var1[9]);
  t2687 = t2304*t2546;
  t2771 = -1.*t2417*t2565;
  t2819 = t2687 + t2771;
  t2910 = Cos(var1[10]);
  t2631 = -1.*t2292*t2629;
  t2867 = t2667*t2819;
  t2879 = t2631 + t2867;
  t2277 = Sin(var1[10]);
  t2912 = t2667*t2629;
  t2913 = t2292*t2819;
  t2919 = t2912 + t2913;
  t3004 = Cos(var1[11]);
  t2895 = t2277*t2879;
  t2949 = t2910*t2919;
  t2964 = t2895 + t2949;
  t2259 = Sin(var1[11]);
  t3042 = t2910*t2879;
  t3071 = -1.*t2277*t2919;
  t3075 = t3042 + t3071;
  t3170 = Cos(var1[12]);
  t2986 = -1.*t2259*t2964;
  t3128 = t3004*t3075;
  t3135 = t2986 + t3128;
  t2182 = Sin(var1[12]);
  t3207 = t3004*t2964;
  t3230 = t2259*t3075;
  t3251 = t3207 + t3230;
  t1206 = t637*t482;
  t1383 = t491*t662*t706;
  t1443 = t1206 + t1383;
  t1490 = t327*t1443;
  t1516 = t482*t491*t662;
  t1542 = -1.*t637*t706;
  t1591 = t1516 + t1542;
  t1755 = t1591*t909;
  t1757 = t1490 + t1755;
  t3590 = t327*t1591;
  t3618 = -1.*t1443*t909;
  t3620 = t3590 + t3618;
  t3468 = t999*t248*t491;
  t3522 = t1757*t1008;
  t3525 = t3468 + t3522;
  t3588 = t2304*t3525;
  t3644 = t3620*t2565;
  t3652 = t3588 + t3644;
  t3734 = t2304*t3620;
  t3735 = -1.*t3525*t2565;
  t3743 = t3734 + t3735;
  t3682 = -1.*t2292*t3652;
  t3760 = t2667*t3743;
  t3796 = t3682 + t3760;
  t3986 = t2667*t3652;
  t4042 = t2292*t3743;
  t4062 = t3986 + t4042;
  t3945 = t2277*t3796;
  t4065 = t2910*t4062;
  t4080 = t3945 + t4065;
  t4148 = t2910*t3796;
  t4164 = -1.*t2277*t4062;
  t4211 = t4148 + t4164;
  t4123 = -1.*t2259*t4080;
  t4214 = t3004*t4211;
  t4258 = t4123 + t4214;
  t4277 = t3004*t4080;
  t4287 = t2259*t4211;
  t4304 = t4277 + t4287;
  t1875 = t999*t327*t706;
  t1980 = t999*t482*t909;
  t2047 = t1875 + t1980;
  t4542 = t999*t482*t327;
  t4550 = -1.*t999*t706*t909;
  t4553 = t4542 + t4550;
  t4461 = -1.*t248*t662;
  t4466 = t2047*t1008;
  t4524 = t4461 + t4466;
  t4527 = t2304*t4524;
  t4559 = t4553*t2565;
  t4563 = t4527 + t4559;
  t4574 = t2304*t4553;
  t4632 = -1.*t4524*t2565;
  t4656 = t4574 + t4632;
  t4571 = -1.*t2292*t4563;
  t4686 = t2667*t4656;
  t4705 = t4571 + t4686;
  t4741 = t2667*t4563;
  t4756 = t2292*t4656;
  t4769 = t4741 + t4756;
  t4720 = t2277*t4705;
  t4795 = t2910*t4769;
  t4856 = t4720 + t4795;
  t4892 = t2910*t4705;
  t4893 = -1.*t2277*t4769;
  t4895 = t4892 + t4893;
  t4888 = -1.*t2259*t4856;
  t4916 = t3004*t4895;
  t4922 = t4888 + t4916;
  t4974 = t3004*t4856;
  t5011 = t2259*t4895;
  t5022 = t4974 + t5011;
  t3138 = t2182*t3135;
  t3282 = t3170*t3251;
  t3343 = t3138 + t3282;
  t3362 = t3170*t3135;
  t3393 = -1.*t2182*t3251;
  t3423 = t3362 + t3393;
  t4259 = t2182*t4258;
  t4327 = t3170*t4304;
  t4330 = t4259 + t4327;
  t4348 = t3170*t4258;
  t4351 = -1.*t2182*t4304;
  t4370 = t4348 + t4351;
  t4962 = t2182*t4922;
  t5036 = t3170*t5022;
  t5042 = t4962 + t5036;
  t5068 = t3170*t4922;
  t5075 = -1.*t2182*t5022;
  t5081 = t5068 + t5075;

  p_output1(0)=-1.*t248*t945 + t1008*t637*t999;
  p_output1(1)=-1.*t1757*t248 + t1008*t491*t999;
  p_output1(2)=-1.*t2047*t248 - 1.*t1008*t662;
  p_output1(3)=0.642788*t3343 + 0.766044*t3423;
  p_output1(4)=0.642788*t4330 + 0.766044*t4370;
  p_output1(5)=0.642788*t5042 + 0.766044*t5081;
  p_output1(6)=-0.766044*t3343 + 0.642788*t3423;
  p_output1(7)=-0.766044*t4330 + 0.642788*t4370;
  p_output1(8)=-0.766044*t5042 + 0.642788*t5081;
}


       
Eigen::Matrix<double,3,3> R_LeftToeBottom(const Eigen::Matrix<double,20,1> &var1)
//void R_LeftToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



