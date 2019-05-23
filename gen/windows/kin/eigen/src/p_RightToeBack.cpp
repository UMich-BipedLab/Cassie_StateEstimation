/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:10:38 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeBack.h"

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
  double t42;
  double t1733;
  double t2288;
  double t2115;
  double t2310;
  double t414;
  double t829;
  double t933;
  double t1148;
  double t1523;
  double t2150;
  double t2428;
  double t2449;
  double t2613;
  double t2693;
  double t2741;
  double t2866;
  double t100;
  double t3140;
  double t3164;
  double t3185;
  double t3358;
  double t3397;
  double t3419;
  double t3439;
  double t3474;
  double t3504;
  double t3559;
  double t3872;
  double t3983;
  double t4042;
  double t4189;
  double t4265;
  double t4274;
  double t4393;
  double t4488;
  double t4504;
  double t4513;
  double t4566;
  double t4613;
  double t4640;
  double t4706;
  double t4715;
  double t4736;
  double t4811;
  double t4855;
  double t4859;
  double t4860;
  double t4974;
  double t4985;
  double t5014;
  double t5047;
  double t5052;
  double t5055;
  double t5089;
  double t5121;
  double t5129;
  double t5140;
  double t5185;
  double t5187;
  double t5189;
  double t5191;
  double t5192;
  double t5224;
  double t5237;
  double t5257;
  double t5259;
  double t5262;
  double t5295;
  double t5296;
  double t5302;
  double t1088;
  double t1251;
  double t1365;
  double t1705;
  double t1725;
  double t2655;
  double t2660;
  double t2678;
  double t2692;
  double t3040;
  double t3046;
  double t3103;
  double t5413;
  double t5420;
  double t5432;
  double t5450;
  double t5452;
  double t5458;
  double t3433;
  double t3458;
  double t3471;
  double t5476;
  double t5484;
  double t5499;
  double t3762;
  double t3835;
  double t3843;
  double t4323;
  double t4450;
  double t4463;
  double t5519;
  double t5520;
  double t5527;
  double t5573;
  double t5574;
  double t5583;
  double t4519;
  double t4533;
  double t4555;
  double t4780;
  double t4837;
  double t4842;
  double t5591;
  double t5592;
  double t5597;
  double t5600;
  double t5612;
  double t5620;
  double t4909;
  double t4946;
  double t4957;
  double t5074;
  double t5098;
  double t5101;
  double t5658;
  double t5661;
  double t5668;
  double t5684;
  double t5687;
  double t5689;
  double t5166;
  double t5182;
  double t5183;
  double t5229;
  double t5240;
  double t5256;
  double t5703;
  double t5713;
  double t5721;
  double t5727;
  double t5732;
  double t5736;
  double t5268;
  double t5278;
  double t5291;
  double t5742;
  double t5753;
  double t5762;
  double t5767;
  double t5777;
  double t5778;
  double t5880;
  double t5883;
  double t5886;
  double t5890;
  double t5896;
  double t5910;
  double t5941;
  double t5949;
  double t5951;
  double t5965;
  double t5967;
  double t5974;
  double t5990;
  double t5993;
  double t5998;
  double t6011;
  double t6012;
  double t6014;
  double t6022;
  double t6024;
  double t6036;
  double t6049;
  double t6057;
  double t6059;
  double t6062;
  double t6070;
  double t6073;
  double t6093;
  double t6096;
  double t6098;
  double t6110;
  double t6112;
  double t6128;
  t42 = Cos(var1[3]);
  t1733 = Cos(var1[5]);
  t2288 = Sin(var1[3]);
  t2115 = Sin(var1[4]);
  t2310 = Sin(var1[5]);
  t414 = Cos(var1[14]);
  t829 = -1.*t414;
  t933 = 1. + t829;
  t1148 = Sin(var1[14]);
  t1523 = Sin(var1[13]);
  t2150 = t42*t1733*t2115;
  t2428 = t2288*t2310;
  t2449 = t2150 + t2428;
  t2613 = Cos(var1[13]);
  t2693 = -1.*t1733*t2288;
  t2741 = t42*t2115*t2310;
  t2866 = t2693 + t2741;
  t100 = Cos(var1[4]);
  t3140 = t1523*t2449;
  t3164 = t2613*t2866;
  t3185 = t3140 + t3164;
  t3358 = Cos(var1[15]);
  t3397 = -1.*t3358;
  t3419 = 1. + t3397;
  t3439 = Sin(var1[15]);
  t3474 = t2613*t2449;
  t3504 = -1.*t1523*t2866;
  t3559 = t3474 + t3504;
  t3872 = t414*t42*t100;
  t3983 = t1148*t3185;
  t4042 = t3872 + t3983;
  t4189 = Cos(var1[16]);
  t4265 = -1.*t4189;
  t4274 = 1. + t4265;
  t4393 = Sin(var1[16]);
  t4488 = t3439*t3559;
  t4504 = t3358*t4042;
  t4513 = t4488 + t4504;
  t4566 = t3358*t3559;
  t4613 = -1.*t3439*t4042;
  t4640 = t4566 + t4613;
  t4706 = Cos(var1[17]);
  t4715 = -1.*t4706;
  t4736 = 1. + t4715;
  t4811 = Sin(var1[17]);
  t4855 = -1.*t4393*t4513;
  t4859 = t4189*t4640;
  t4860 = t4855 + t4859;
  t4974 = t4189*t4513;
  t4985 = t4393*t4640;
  t5014 = t4974 + t4985;
  t5047 = Cos(var1[18]);
  t5052 = -1.*t5047;
  t5055 = 1. + t5052;
  t5089 = Sin(var1[18]);
  t5121 = t4811*t4860;
  t5129 = t4706*t5014;
  t5140 = t5121 + t5129;
  t5185 = t4706*t4860;
  t5187 = -1.*t4811*t5014;
  t5189 = t5185 + t5187;
  t5191 = Cos(var1[19]);
  t5192 = -1.*t5191;
  t5224 = 1. + t5192;
  t5237 = Sin(var1[19]);
  t5257 = -1.*t5089*t5140;
  t5259 = t5047*t5189;
  t5262 = t5257 + t5259;
  t5295 = t5047*t5140;
  t5296 = t5089*t5189;
  t5302 = t5295 + t5296;
  t1088 = -0.049*t933;
  t1251 = -0.135*t1148;
  t1365 = 0. + t1088 + t1251;
  t1705 = 0.135*t1523;
  t1725 = 0. + t1705;
  t2655 = -1.*t2613;
  t2660 = 1. + t2655;
  t2678 = -0.135*t2660;
  t2692 = 0. + t2678;
  t3040 = -0.135*t933;
  t3046 = 0.049*t1148;
  t3103 = 0. + t3040 + t3046;
  t5413 = t1733*t2288*t2115;
  t5420 = -1.*t42*t2310;
  t5432 = t5413 + t5420;
  t5450 = t42*t1733;
  t5452 = t2288*t2115*t2310;
  t5458 = t5450 + t5452;
  t3433 = -0.09*t3419;
  t3458 = 0.049*t3439;
  t3471 = 0. + t3433 + t3458;
  t5476 = t1523*t5432;
  t5484 = t2613*t5458;
  t5499 = t5476 + t5484;
  t3762 = -0.049*t3419;
  t3835 = -0.09*t3439;
  t3843 = 0. + t3762 + t3835;
  t4323 = -0.049*t4274;
  t4450 = -0.21*t4393;
  t4463 = 0. + t4323 + t4450;
  t5519 = t2613*t5432;
  t5520 = -1.*t1523*t5458;
  t5527 = t5519 + t5520;
  t5573 = t414*t100*t2288;
  t5574 = t1148*t5499;
  t5583 = t5573 + t5574;
  t4519 = -0.21*t4274;
  t4533 = 0.049*t4393;
  t4555 = 0. + t4519 + t4533;
  t4780 = -0.2707*t4736;
  t4837 = 0.0016*t4811;
  t4842 = 0. + t4780 + t4837;
  t5591 = t3439*t5527;
  t5592 = t3358*t5583;
  t5597 = t5591 + t5592;
  t5600 = t3358*t5527;
  t5612 = -1.*t3439*t5583;
  t5620 = t5600 + t5612;
  t4909 = -0.0016*t4736;
  t4946 = -0.2707*t4811;
  t4957 = 0. + t4909 + t4946;
  t5074 = 0.0184*t5055;
  t5098 = -0.7055*t5089;
  t5101 = 0. + t5074 + t5098;
  t5658 = -1.*t4393*t5597;
  t5661 = t4189*t5620;
  t5668 = t5658 + t5661;
  t5684 = t4189*t5597;
  t5687 = t4393*t5620;
  t5689 = t5684 + t5687;
  t5166 = -0.7055*t5055;
  t5182 = -0.0184*t5089;
  t5183 = 0. + t5166 + t5182;
  t5229 = -1.1135*t5224;
  t5240 = 0.0216*t5237;
  t5256 = 0. + t5229 + t5240;
  t5703 = t4811*t5668;
  t5713 = t4706*t5689;
  t5721 = t5703 + t5713;
  t5727 = t4706*t5668;
  t5732 = -1.*t4811*t5689;
  t5736 = t5727 + t5732;
  t5268 = -0.0216*t5224;
  t5278 = -1.1135*t5237;
  t5291 = 0. + t5268 + t5278;
  t5742 = -1.*t5089*t5721;
  t5753 = t5047*t5736;
  t5762 = t5742 + t5753;
  t5767 = t5047*t5721;
  t5777 = t5089*t5736;
  t5778 = t5767 + t5777;
  t5880 = t100*t1733*t1523;
  t5883 = t2613*t100*t2310;
  t5886 = t5880 + t5883;
  t5890 = t2613*t100*t1733;
  t5896 = -1.*t100*t1523*t2310;
  t5910 = t5890 + t5896;
  t5941 = -1.*t414*t2115;
  t5949 = t1148*t5886;
  t5951 = t5941 + t5949;
  t5965 = t3439*t5910;
  t5967 = t3358*t5951;
  t5974 = t5965 + t5967;
  t5990 = t3358*t5910;
  t5993 = -1.*t3439*t5951;
  t5998 = t5990 + t5993;
  t6011 = -1.*t4393*t5974;
  t6012 = t4189*t5998;
  t6014 = t6011 + t6012;
  t6022 = t4189*t5974;
  t6024 = t4393*t5998;
  t6036 = t6022 + t6024;
  t6049 = t4811*t6014;
  t6057 = t4706*t6036;
  t6059 = t6049 + t6057;
  t6062 = t4706*t6014;
  t6070 = -1.*t4811*t6036;
  t6073 = t6062 + t6070;
  t6093 = -1.*t5089*t6059;
  t6096 = t5047*t6073;
  t6098 = t6093 + t6096;
  t6110 = t5047*t6059;
  t6112 = t5089*t6073;
  t6128 = t6110 + t6112;

  p_output1(0)=0. + t1725*t2449 + t2692*t2866 + t3103*t3185 + t3471*t3559 + t3843*t4042 + t100*t1365*t42 - 0.1305*(t3185*t414 - 1.*t100*t1148*t42) + t4463*t4513 + t4555*t4640 + t4842*t4860 + t4957*t5014 + t5101*t5140 + t5183*t5189 + t5256*t5262 + t5291*t5302 - 0.027251*(t5237*t5262 + t5191*t5302) - 1.200144*(t5191*t5262 - 1.*t5237*t5302) + var1(0);
  p_output1(1)=0. + t100*t1365*t2288 + t1725*t5432 + t2692*t5458 + t3103*t5499 - 0.1305*(-1.*t100*t1148*t2288 + t414*t5499) + t3471*t5527 + t3843*t5583 + t4463*t5597 + t4555*t5620 + t4842*t5668 + t4957*t5689 + t5101*t5721 + t5183*t5736 + t5256*t5762 + t5291*t5778 - 0.027251*(t5237*t5762 + t5191*t5778) - 1.200144*(t5191*t5762 - 1.*t5237*t5778) + var1(1);
  p_output1(2)=0. + t100*t1725*t1733 - 1.*t1365*t2115 + t100*t2310*t2692 + t3103*t5886 - 0.1305*(t1148*t2115 + t414*t5886) + t3471*t5910 + t3843*t5951 + t4463*t5974 + t4555*t5998 + t4842*t6014 + t4957*t6036 + t5101*t6059 + t5183*t6073 + t5256*t6098 + t5291*t6128 - 0.027251*(t5237*t6098 + t5191*t6128) - 1.200144*(t5191*t6098 - 1.*t5237*t6128) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RightToeBack(const Eigen::Matrix<double,20,1> &var1)
//void p_RightToeBack(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



