/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:23:15 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeBack.h"

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
  double t144;
  double t440;
  double t709;
  double t529;
  double t712;
  double t251;
  double t327;
  double t374;
  double t384;
  double t813;
  double t546;
  double t716;
  double t764;
  double t822;
  double t947;
  double t1030;
  double t798;
  double t1035;
  double t1049;
  double t2107;
  double t1983;
  double t2051;
  double t2067;
  double t1967;
  double t2130;
  double t2141;
  double t2151;
  double t2330;
  double t2106;
  double t2231;
  double t2239;
  double t1966;
  double t2371;
  double t2393;
  double t2395;
  double t2541;
  double t2284;
  double t2397;
  double t2489;
  double t1959;
  double t2566;
  double t2580;
  double t2609;
  double t2633;
  double t2520;
  double t2617;
  double t2627;
  double t1946;
  double t2690;
  double t2741;
  double t2763;
  double t2795;
  double t2632;
  double t2774;
  double t2779;
  double t1860;
  double t2818;
  double t2854;
  double t2898;
  double t1097;
  double t1157;
  double t1181;
  double t1283;
  double t1320;
  double t1342;
  double t1209;
  double t1407;
  double t1536;
  double t3060;
  double t3150;
  double t3154;
  double t3242;
  double t3263;
  double t3276;
  double t3213;
  double t3292;
  double t3339;
  double t3361;
  double t3393;
  double t3401;
  double t3350;
  double t3411;
  double t3433;
  double t3598;
  double t3632;
  double t3672;
  double t3559;
  double t3689;
  double t3710;
  double t3745;
  double t3752;
  double t3811;
  double t3723;
  double t3817;
  double t3835;
  double t3876;
  double t3889;
  double t3903;
  double t1702;
  double t1773;
  double t1774;
  double t4086;
  double t4089;
  double t4104;
  double t4139;
  double t4140;
  double t4204;
  double t4117;
  double t4224;
  double t4253;
  double t4311;
  double t4322;
  double t4323;
  double t4293;
  double t4342;
  double t4368;
  double t4371;
  double t4463;
  double t4488;
  double t4369;
  double t4533;
  double t4545;
  double t4577;
  double t4603;
  double t4636;
  double t4546;
  double t4640;
  double t4646;
  double t4674;
  double t4684;
  double t4717;
  double t2780;
  double t2939;
  double t2977;
  double t2981;
  double t3000;
  double t3006;
  double t3861;
  double t3918;
  double t3949;
  double t4001;
  double t4032;
  double t4048;
  double t4648;
  double t4727;
  double t4730;
  double t4752;
  double t4771;
  double t4803;
  double t5041;
  double t5059;
  double t5292;
  double t5295;
  double t5370;
  double t5376;
  double t5440;
  double t5444;
  double t5519;
  double t5527;
  double t5600;
  double t5622;
  double t5072;
  double t5081;
  double t5094;
  double t5170;
  double t5186;
  double t5203;
  double t5229;
  double t5232;
  double t5256;
  double t5264;
  double t5267;
  double t5268;
  double t5306;
  double t5307;
  double t5314;
  double t5344;
  double t5350;
  double t5361;
  double t5379;
  double t5381;
  double t5395;
  double t5403;
  double t5422;
  double t5432;
  double t5450;
  double t5452;
  double t5460;
  double t5476;
  double t5496;
  double t5512;
  double t5540;
  double t5572;
  double t5576;
  double t5587;
  double t5589;
  double t5593;
  double t5637;
  double t5641;
  double t5645;
  double t5684;
  double t5685;
  double t5690;
  t144 = Cos(var1[3]);
  t440 = Cos(var1[5]);
  t709 = Sin(var1[3]);
  t529 = Sin(var1[4]);
  t712 = Sin(var1[5]);
  t251 = Cos(var1[4]);
  t327 = Sin(var1[14]);
  t374 = Cos(var1[14]);
  t384 = Sin(var1[13]);
  t813 = Cos(var1[13]);
  t546 = t144*t440*t529;
  t716 = t709*t712;
  t764 = t546 + t716;
  t822 = -1.*t440*t709;
  t947 = t144*t529*t712;
  t1030 = t822 + t947;
  t798 = t384*t764;
  t1035 = t813*t1030;
  t1049 = t798 + t1035;
  t2107 = Cos(var1[15]);
  t1983 = t813*t764;
  t2051 = -1.*t384*t1030;
  t2067 = t1983 + t2051;
  t1967 = Sin(var1[15]);
  t2130 = t374*t144*t251;
  t2141 = t327*t1049;
  t2151 = t2130 + t2141;
  t2330 = Cos(var1[16]);
  t2106 = t1967*t2067;
  t2231 = t2107*t2151;
  t2239 = t2106 + t2231;
  t1966 = Sin(var1[16]);
  t2371 = t2107*t2067;
  t2393 = -1.*t1967*t2151;
  t2395 = t2371 + t2393;
  t2541 = Cos(var1[17]);
  t2284 = -1.*t1966*t2239;
  t2397 = t2330*t2395;
  t2489 = t2284 + t2397;
  t1959 = Sin(var1[17]);
  t2566 = t2330*t2239;
  t2580 = t1966*t2395;
  t2609 = t2566 + t2580;
  t2633 = Cos(var1[18]);
  t2520 = t1959*t2489;
  t2617 = t2541*t2609;
  t2627 = t2520 + t2617;
  t1946 = Sin(var1[18]);
  t2690 = t2541*t2489;
  t2741 = -1.*t1959*t2609;
  t2763 = t2690 + t2741;
  t2795 = Cos(var1[19]);
  t2632 = -1.*t1946*t2627;
  t2774 = t2633*t2763;
  t2779 = t2632 + t2774;
  t1860 = Sin(var1[19]);
  t2818 = t2633*t2627;
  t2854 = t1946*t2763;
  t2898 = t2818 + t2854;
  t1097 = t440*t709*t529;
  t1157 = -1.*t144*t712;
  t1181 = t1097 + t1157;
  t1283 = t144*t440;
  t1320 = t709*t529*t712;
  t1342 = t1283 + t1320;
  t1209 = t384*t1181;
  t1407 = t813*t1342;
  t1536 = t1209 + t1407;
  t3060 = t813*t1181;
  t3150 = -1.*t384*t1342;
  t3154 = t3060 + t3150;
  t3242 = t374*t251*t709;
  t3263 = t327*t1536;
  t3276 = t3242 + t3263;
  t3213 = t1967*t3154;
  t3292 = t2107*t3276;
  t3339 = t3213 + t3292;
  t3361 = t2107*t3154;
  t3393 = -1.*t1967*t3276;
  t3401 = t3361 + t3393;
  t3350 = -1.*t1966*t3339;
  t3411 = t2330*t3401;
  t3433 = t3350 + t3411;
  t3598 = t2330*t3339;
  t3632 = t1966*t3401;
  t3672 = t3598 + t3632;
  t3559 = t1959*t3433;
  t3689 = t2541*t3672;
  t3710 = t3559 + t3689;
  t3745 = t2541*t3433;
  t3752 = -1.*t1959*t3672;
  t3811 = t3745 + t3752;
  t3723 = -1.*t1946*t3710;
  t3817 = t2633*t3811;
  t3835 = t3723 + t3817;
  t3876 = t2633*t3710;
  t3889 = t1946*t3811;
  t3903 = t3876 + t3889;
  t1702 = t251*t440*t384;
  t1773 = t813*t251*t712;
  t1774 = t1702 + t1773;
  t4086 = t813*t251*t440;
  t4089 = -1.*t251*t384*t712;
  t4104 = t4086 + t4089;
  t4139 = -1.*t374*t529;
  t4140 = t327*t1774;
  t4204 = t4139 + t4140;
  t4117 = t1967*t4104;
  t4224 = t2107*t4204;
  t4253 = t4117 + t4224;
  t4311 = t2107*t4104;
  t4322 = -1.*t1967*t4204;
  t4323 = t4311 + t4322;
  t4293 = -1.*t1966*t4253;
  t4342 = t2330*t4323;
  t4368 = t4293 + t4342;
  t4371 = t2330*t4253;
  t4463 = t1966*t4323;
  t4488 = t4371 + t4463;
  t4369 = t1959*t4368;
  t4533 = t2541*t4488;
  t4545 = t4369 + t4533;
  t4577 = t2541*t4368;
  t4603 = -1.*t1959*t4488;
  t4636 = t4577 + t4603;
  t4546 = -1.*t1946*t4545;
  t4640 = t2633*t4636;
  t4646 = t4546 + t4640;
  t4674 = t2633*t4545;
  t4684 = t1946*t4636;
  t4717 = t4674 + t4684;
  t2780 = t1860*t2779;
  t2939 = t2795*t2898;
  t2977 = t2780 + t2939;
  t2981 = t2795*t2779;
  t3000 = -1.*t1860*t2898;
  t3006 = t2981 + t3000;
  t3861 = t1860*t3835;
  t3918 = t2795*t3903;
  t3949 = t3861 + t3918;
  t4001 = t2795*t3835;
  t4032 = -1.*t1860*t3903;
  t4048 = t4001 + t4032;
  t4648 = t1860*t4646;
  t4727 = t2795*t4717;
  t4730 = t4648 + t4727;
  t4752 = t2795*t4646;
  t4771 = -1.*t1860*t4717;
  t4803 = t4752 + t4771;
  t5041 = -1.*t374;
  t5059 = 1. + t5041;
  t5292 = -1.*t2107;
  t5295 = 1. + t5292;
  t5370 = -1.*t2330;
  t5376 = 1. + t5370;
  t5440 = -1.*t2541;
  t5444 = 1. + t5440;
  t5519 = -1.*t2633;
  t5527 = 1. + t5519;
  t5600 = -1.*t2795;
  t5622 = 1. + t5600;
  t5072 = -0.049*t5059;
  t5081 = -0.135*t327;
  t5094 = 0. + t5072 + t5081;
  t5170 = 0.135*t384;
  t5186 = 0. + t5170;
  t5203 = -1.*t813;
  t5229 = 1. + t5203;
  t5232 = -0.135*t5229;
  t5256 = 0. + t5232;
  t5264 = -0.135*t5059;
  t5267 = 0.049*t327;
  t5268 = 0. + t5264 + t5267;
  t5306 = -0.09*t5295;
  t5307 = 0.049*t1967;
  t5314 = 0. + t5306 + t5307;
  t5344 = -0.049*t5295;
  t5350 = -0.09*t1967;
  t5361 = 0. + t5344 + t5350;
  t5379 = -0.049*t5376;
  t5381 = -0.21*t1966;
  t5395 = 0. + t5379 + t5381;
  t5403 = -0.21*t5376;
  t5422 = 0.049*t1966;
  t5432 = 0. + t5403 + t5422;
  t5450 = -0.2707*t5444;
  t5452 = 0.0016*t1959;
  t5460 = 0. + t5450 + t5452;
  t5476 = -0.0016*t5444;
  t5496 = -0.2707*t1959;
  t5512 = 0. + t5476 + t5496;
  t5540 = 0.0184*t5527;
  t5572 = -0.7055*t1946;
  t5576 = 0. + t5540 + t5572;
  t5587 = -0.7055*t5527;
  t5589 = -0.0184*t1946;
  t5593 = 0. + t5587 + t5589;
  t5637 = -1.1135*t5622;
  t5641 = 0.0216*t1860;
  t5645 = 0. + t5637 + t5641;
  t5684 = -0.0216*t5622;
  t5685 = -1.1135*t1860;
  t5690 = 0. + t5684 + t5685;

  p_output1(0)=t144*t251*t327 - 1.*t1049*t374;
  p_output1(1)=-1.*t1536*t374 + t251*t327*t709;
  p_output1(2)=-1.*t1774*t374 - 1.*t327*t529;
  p_output1(3)=0.;
  p_output1(4)=0.642788*t2977 + 0.766044*t3006;
  p_output1(5)=0.642788*t3949 + 0.766044*t4048;
  p_output1(6)=0.642788*t4730 + 0.766044*t4803;
  p_output1(7)=0.;
  p_output1(8)=-0.766044*t2977 + 0.642788*t3006;
  p_output1(9)=-0.766044*t3949 + 0.642788*t4048;
  p_output1(10)=-0.766044*t4730 + 0.642788*t4803;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.027251*t2977 - 1.200144*t3006 - 0.1305*(-1.*t144*t251*t327 + t1049*t374) + t144*t251*t5094 + t1030*t5256 + t1049*t5268 + t2067*t5314 + t2151*t5361 + t2239*t5395 + t2395*t5432 + t2489*t5460 + t2609*t5512 + t2627*t5576 + t2763*t5593 + t2779*t5645 + t2898*t5690 + t5186*t764 + var1(0);
  p_output1(13)=0. - 0.027251*t3949 - 1.200144*t4048 + t1181*t5186 + t1342*t5256 + t1536*t5268 + t3154*t5314 + t3276*t5361 + t3339*t5395 + t3401*t5432 + t3433*t5460 + t3672*t5512 + t3710*t5576 + t3811*t5593 + t3835*t5645 + t3903*t5690 + t251*t5094*t709 - 0.1305*(t1536*t374 - 1.*t251*t327*t709) + var1(1);
  p_output1(14)=0. - 0.027251*t4730 - 1.200144*t4803 + t251*t440*t5186 + t1774*t5268 - 1.*t5094*t529 - 0.1305*(t1774*t374 + t327*t529) + t4104*t5314 + t4204*t5361 + t4253*t5395 + t4323*t5432 + t4368*t5460 + t4488*t5512 + t4545*t5576 + t4636*t5593 + t4646*t5645 + t4717*t5690 + t251*t5256*t712 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_RightToeBack(const Eigen::Matrix<double,20,1> &var1)
//void H_RightToeBack(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



