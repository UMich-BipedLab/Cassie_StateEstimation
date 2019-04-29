/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:23:17 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBack.h"

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
  double t412;
  double t850;
  double t1052;
  double t867;
  double t1081;
  double t429;
  double t567;
  double t764;
  double t798;
  double t1320;
  double t962;
  double t1097;
  double t1181;
  double t1333;
  double t1407;
  double t1653;
  double t1209;
  double t1696;
  double t1773;
  double t3023;
  double t2895;
  double t2949;
  double t2977;
  double t2893;
  double t3060;
  double t3105;
  double t3108;
  double t3213;
  double t3006;
  double t3122;
  double t3154;
  double t2854;
  double t3242;
  double t3263;
  double t3273;
  double t3401;
  double t3181;
  double t3304;
  double t3361;
  double t2818;
  double t3411;
  double t3433;
  double t3598;
  double t3817;
  double t3375;
  double t3632;
  double t3689;
  double t2813;
  double t3835;
  double t3861;
  double t3876;
  double t4083;
  double t3745;
  double t3918;
  double t4001;
  double t2796;
  double t4086;
  double t4104;
  double t4117;
  double t1857;
  double t1979;
  double t1983;
  double t2213;
  double t2317;
  double t2333;
  double t2161;
  double t2344;
  double t2371;
  double t4497;
  double t4533;
  double t4563;
  double t4640;
  double t4646;
  double t4648;
  double t4636;
  double t4684;
  double t4727;
  double t4732;
  double t4752;
  double t4803;
  double t4730;
  double t4844;
  double t4863;
  double t4974;
  double t4990;
  double t4996;
  double t4944;
  double t5025;
  double t5026;
  double t5072;
  double t5081;
  double t5170;
  double t5040;
  double t5189;
  double t5256;
  double t5264;
  double t5267;
  double t5268;
  double t2566;
  double t2690;
  double t2763;
  double t5344;
  double t5350;
  double t5361;
  double t5379;
  double t5381;
  double t5395;
  double t5363;
  double t5402;
  double t5403;
  double t5432;
  double t5437;
  double t5450;
  double t5422;
  double t5452;
  double t5460;
  double t5467;
  double t5476;
  double t5496;
  double t5466;
  double t5512;
  double t5517;
  double t5552;
  double t5561;
  double t5572;
  double t5540;
  double t5576;
  double t5581;
  double t5589;
  double t5593;
  double t5598;
  double t4067;
  double t4140;
  double t4224;
  double t4345;
  double t4368;
  double t4369;
  double t5260;
  double t5272;
  double t5307;
  double t5318;
  double t5327;
  double t5335;
  double t5587;
  double t5637;
  double t5641;
  double t5645;
  double t5670;
  double t5684;
  t412 = Cos(var1[3]);
  t850 = Cos(var1[5]);
  t1052 = Sin(var1[3]);
  t867 = Sin(var1[4]);
  t1081 = Sin(var1[5]);
  t429 = Cos(var1[4]);
  t567 = Sin(var1[14]);
  t764 = Cos(var1[14]);
  t798 = Sin(var1[13]);
  t1320 = Cos(var1[13]);
  t962 = t412*t850*t867;
  t1097 = t1052*t1081;
  t1181 = t962 + t1097;
  t1333 = -1.*t850*t1052;
  t1407 = t412*t867*t1081;
  t1653 = t1333 + t1407;
  t1209 = t798*t1181;
  t1696 = t1320*t1653;
  t1773 = t1209 + t1696;
  t3023 = Cos(var1[15]);
  t2895 = t1320*t1181;
  t2949 = -1.*t798*t1653;
  t2977 = t2895 + t2949;
  t2893 = Sin(var1[15]);
  t3060 = t764*t412*t429;
  t3105 = t567*t1773;
  t3108 = t3060 + t3105;
  t3213 = Cos(var1[16]);
  t3006 = t2893*t2977;
  t3122 = t3023*t3108;
  t3154 = t3006 + t3122;
  t2854 = Sin(var1[16]);
  t3242 = t3023*t2977;
  t3263 = -1.*t2893*t3108;
  t3273 = t3242 + t3263;
  t3401 = Cos(var1[17]);
  t3181 = -1.*t2854*t3154;
  t3304 = t3213*t3273;
  t3361 = t3181 + t3304;
  t2818 = Sin(var1[17]);
  t3411 = t3213*t3154;
  t3433 = t2854*t3273;
  t3598 = t3411 + t3433;
  t3817 = Cos(var1[18]);
  t3375 = t2818*t3361;
  t3632 = t3401*t3598;
  t3689 = t3375 + t3632;
  t2813 = Sin(var1[18]);
  t3835 = t3401*t3361;
  t3861 = -1.*t2818*t3598;
  t3876 = t3835 + t3861;
  t4083 = Cos(var1[19]);
  t3745 = -1.*t2813*t3689;
  t3918 = t3817*t3876;
  t4001 = t3745 + t3918;
  t2796 = Sin(var1[19]);
  t4086 = t3817*t3689;
  t4104 = t2813*t3876;
  t4117 = t4086 + t4104;
  t1857 = t850*t1052*t867;
  t1979 = -1.*t412*t1081;
  t1983 = t1857 + t1979;
  t2213 = t412*t850;
  t2317 = t1052*t867*t1081;
  t2333 = t2213 + t2317;
  t2161 = t798*t1983;
  t2344 = t1320*t2333;
  t2371 = t2161 + t2344;
  t4497 = t1320*t1983;
  t4533 = -1.*t798*t2333;
  t4563 = t4497 + t4533;
  t4640 = t764*t429*t1052;
  t4646 = t567*t2371;
  t4648 = t4640 + t4646;
  t4636 = t2893*t4563;
  t4684 = t3023*t4648;
  t4727 = t4636 + t4684;
  t4732 = t3023*t4563;
  t4752 = -1.*t2893*t4648;
  t4803 = t4732 + t4752;
  t4730 = -1.*t2854*t4727;
  t4844 = t3213*t4803;
  t4863 = t4730 + t4844;
  t4974 = t3213*t4727;
  t4990 = t2854*t4803;
  t4996 = t4974 + t4990;
  t4944 = t2818*t4863;
  t5025 = t3401*t4996;
  t5026 = t4944 + t5025;
  t5072 = t3401*t4863;
  t5081 = -1.*t2818*t4996;
  t5170 = t5072 + t5081;
  t5040 = -1.*t2813*t5026;
  t5189 = t3817*t5170;
  t5256 = t5040 + t5189;
  t5264 = t3817*t5026;
  t5267 = t2813*t5170;
  t5268 = t5264 + t5267;
  t2566 = t429*t850*t798;
  t2690 = t1320*t429*t1081;
  t2763 = t2566 + t2690;
  t5344 = t1320*t429*t850;
  t5350 = -1.*t429*t798*t1081;
  t5361 = t5344 + t5350;
  t5379 = -1.*t764*t867;
  t5381 = t567*t2763;
  t5395 = t5379 + t5381;
  t5363 = t2893*t5361;
  t5402 = t3023*t5395;
  t5403 = t5363 + t5402;
  t5432 = t3023*t5361;
  t5437 = -1.*t2893*t5395;
  t5450 = t5432 + t5437;
  t5422 = -1.*t2854*t5403;
  t5452 = t3213*t5450;
  t5460 = t5422 + t5452;
  t5467 = t3213*t5403;
  t5476 = t2854*t5450;
  t5496 = t5467 + t5476;
  t5466 = t2818*t5460;
  t5512 = t3401*t5496;
  t5517 = t5466 + t5512;
  t5552 = t3401*t5460;
  t5561 = -1.*t2818*t5496;
  t5572 = t5552 + t5561;
  t5540 = -1.*t2813*t5517;
  t5576 = t3817*t5572;
  t5581 = t5540 + t5576;
  t5589 = t3817*t5517;
  t5593 = t2813*t5572;
  t5598 = t5589 + t5593;
  t4067 = t2796*t4001;
  t4140 = t4083*t4117;
  t4224 = t4067 + t4140;
  t4345 = t4083*t4001;
  t4368 = -1.*t2796*t4117;
  t4369 = t4345 + t4368;
  t5260 = t2796*t5256;
  t5272 = t4083*t5268;
  t5307 = t5260 + t5272;
  t5318 = t4083*t5256;
  t5327 = -1.*t2796*t5268;
  t5335 = t5318 + t5327;
  t5587 = t2796*t5581;
  t5637 = t4083*t5598;
  t5641 = t5587 + t5637;
  t5645 = t4083*t5581;
  t5670 = -1.*t2796*t5598;
  t5684 = t5645 + t5670;

  p_output1(0)=t412*t429*t567 - 1.*t1773*t764;
  p_output1(1)=t1052*t429*t567 - 1.*t2371*t764;
  p_output1(2)=-1.*t2763*t764 - 1.*t567*t867;
  p_output1(3)=0.642788*t4224 + 0.766044*t4369;
  p_output1(4)=0.642788*t5307 + 0.766044*t5335;
  p_output1(5)=0.642788*t5641 + 0.766044*t5684;
  p_output1(6)=-0.766044*t4224 + 0.642788*t4369;
  p_output1(7)=-0.766044*t5307 + 0.642788*t5335;
  p_output1(8)=-0.766044*t5641 + 0.642788*t5684;
}


       
Eigen::Matrix<double,3,3> R_RightToeBack(const Eigen::Matrix<double,20,1> &var1)
//void R_RightToeBack(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



