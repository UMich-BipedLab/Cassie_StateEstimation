/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:46 GMT-05:00
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
  double t333;
  double t1807;
  double t1977;
  double t1851;
  double t2044;
  double t931;
  double t937;
  double t961;
  double t1016;
  double t1456;
  double t1853;
  double t2063;
  double t2308;
  double t2458;
  double t2607;
  double t2626;
  double t2709;
  double t624;
  double t3054;
  double t3064;
  double t3081;
  double t3115;
  double t3144;
  double t3152;
  double t3262;
  double t3316;
  double t3324;
  double t3363;
  double t3679;
  double t3699;
  double t3775;
  double t3805;
  double t3814;
  double t3836;
  double t4012;
  double t4166;
  double t4172;
  double t4187;
  double t4264;
  double t4307;
  double t4364;
  double t4432;
  double t4443;
  double t4447;
  double t4484;
  double t4575;
  double t4605;
  double t4606;
  double t4722;
  double t4746;
  double t4785;
  double t4789;
  double t4799;
  double t4802;
  double t4832;
  double t4852;
  double t4853;
  double t4854;
  double t4891;
  double t4897;
  double t4907;
  double t4966;
  double t4971;
  double t4988;
  double t4995;
  double t5018;
  double t5037;
  double t5044;
  double t5081;
  double t5082;
  double t5083;
  double t988;
  double t1020;
  double t1252;
  double t1568;
  double t1613;
  double t2459;
  double t2492;
  double t2540;
  double t2604;
  double t2889;
  double t3006;
  double t3051;
  double t5182;
  double t5193;
  double t5194;
  double t5211;
  double t5226;
  double t5231;
  double t3199;
  double t3278;
  double t3292;
  double t5251;
  double t5253;
  double t5265;
  double t3615;
  double t3633;
  double t3640;
  double t3843;
  double t4084;
  double t4098;
  double t5277;
  double t5286;
  double t5288;
  double t5312;
  double t5316;
  double t5319;
  double t4194;
  double t4202;
  double t4213;
  double t4472;
  double t4523;
  double t4528;
  double t5335;
  double t5346;
  double t5348;
  double t5362;
  double t5365;
  double t5372;
  double t4664;
  double t4687;
  double t4692;
  double t4803;
  double t4838;
  double t4845;
  double t5380;
  double t5381;
  double t5393;
  double t5408;
  double t5441;
  double t5450;
  double t4864;
  double t4873;
  double t4875;
  double t4991;
  double t5000;
  double t5014;
  double t5463;
  double t5500;
  double t5515;
  double t5536;
  double t5547;
  double t5549;
  double t5060;
  double t5066;
  double t5074;
  double t5577;
  double t5582;
  double t5597;
  double t5609;
  double t5611;
  double t5614;
  double t5718;
  double t5722;
  double t5726;
  double t5737;
  double t5738;
  double t5740;
  double t5775;
  double t5776;
  double t5777;
  double t5784;
  double t5789;
  double t5792;
  double t5799;
  double t5800;
  double t5804;
  double t5815;
  double t5819;
  double t5820;
  double t5841;
  double t5845;
  double t5849;
  double t5856;
  double t5866;
  double t5869;
  double t5882;
  double t5889;
  double t5891;
  double t5901;
  double t5903;
  double t5908;
  double t5920;
  double t5930;
  double t5933;
  t333 = Cos(var1[3]);
  t1807 = Cos(var1[5]);
  t1977 = Sin(var1[3]);
  t1851 = Sin(var1[4]);
  t2044 = Sin(var1[5]);
  t931 = Cos(var1[14]);
  t937 = -1.*t931;
  t961 = 1. + t937;
  t1016 = Sin(var1[14]);
  t1456 = Sin(var1[13]);
  t1853 = t333*t1807*t1851;
  t2063 = t1977*t2044;
  t2308 = t1853 + t2063;
  t2458 = Cos(var1[13]);
  t2607 = -1.*t1807*t1977;
  t2626 = t333*t1851*t2044;
  t2709 = t2607 + t2626;
  t624 = Cos(var1[4]);
  t3054 = t1456*t2308;
  t3064 = t2458*t2709;
  t3081 = t3054 + t3064;
  t3115 = Cos(var1[15]);
  t3144 = -1.*t3115;
  t3152 = 1. + t3144;
  t3262 = Sin(var1[15]);
  t3316 = t2458*t2308;
  t3324 = -1.*t1456*t2709;
  t3363 = t3316 + t3324;
  t3679 = t931*t333*t624;
  t3699 = t1016*t3081;
  t3775 = t3679 + t3699;
  t3805 = Cos(var1[16]);
  t3814 = -1.*t3805;
  t3836 = 1. + t3814;
  t4012 = Sin(var1[16]);
  t4166 = t3262*t3363;
  t4172 = t3115*t3775;
  t4187 = t4166 + t4172;
  t4264 = t3115*t3363;
  t4307 = -1.*t3262*t3775;
  t4364 = t4264 + t4307;
  t4432 = Cos(var1[17]);
  t4443 = -1.*t4432;
  t4447 = 1. + t4443;
  t4484 = Sin(var1[17]);
  t4575 = -1.*t4012*t4187;
  t4605 = t3805*t4364;
  t4606 = t4575 + t4605;
  t4722 = t3805*t4187;
  t4746 = t4012*t4364;
  t4785 = t4722 + t4746;
  t4789 = Cos(var1[18]);
  t4799 = -1.*t4789;
  t4802 = 1. + t4799;
  t4832 = Sin(var1[18]);
  t4852 = t4484*t4606;
  t4853 = t4432*t4785;
  t4854 = t4852 + t4853;
  t4891 = t4432*t4606;
  t4897 = -1.*t4484*t4785;
  t4907 = t4891 + t4897;
  t4966 = Cos(var1[19]);
  t4971 = -1.*t4966;
  t4988 = 1. + t4971;
  t4995 = Sin(var1[19]);
  t5018 = -1.*t4832*t4854;
  t5037 = t4789*t4907;
  t5044 = t5018 + t5037;
  t5081 = t4789*t4854;
  t5082 = t4832*t4907;
  t5083 = t5081 + t5082;
  t988 = -0.049*t961;
  t1020 = -0.135*t1016;
  t1252 = 0. + t988 + t1020;
  t1568 = 0.135*t1456;
  t1613 = 0. + t1568;
  t2459 = -1.*t2458;
  t2492 = 1. + t2459;
  t2540 = -0.135*t2492;
  t2604 = 0. + t2540;
  t2889 = -0.135*t961;
  t3006 = 0.049*t1016;
  t3051 = 0. + t2889 + t3006;
  t5182 = t1807*t1977*t1851;
  t5193 = -1.*t333*t2044;
  t5194 = t5182 + t5193;
  t5211 = t333*t1807;
  t5226 = t1977*t1851*t2044;
  t5231 = t5211 + t5226;
  t3199 = -0.09*t3152;
  t3278 = 0.049*t3262;
  t3292 = 0. + t3199 + t3278;
  t5251 = t1456*t5194;
  t5253 = t2458*t5231;
  t5265 = t5251 + t5253;
  t3615 = -0.049*t3152;
  t3633 = -0.09*t3262;
  t3640 = 0. + t3615 + t3633;
  t3843 = -0.049*t3836;
  t4084 = -0.21*t4012;
  t4098 = 0. + t3843 + t4084;
  t5277 = t2458*t5194;
  t5286 = -1.*t1456*t5231;
  t5288 = t5277 + t5286;
  t5312 = t931*t624*t1977;
  t5316 = t1016*t5265;
  t5319 = t5312 + t5316;
  t4194 = -0.21*t3836;
  t4202 = 0.049*t4012;
  t4213 = 0. + t4194 + t4202;
  t4472 = -0.2707*t4447;
  t4523 = 0.0016*t4484;
  t4528 = 0. + t4472 + t4523;
  t5335 = t3262*t5288;
  t5346 = t3115*t5319;
  t5348 = t5335 + t5346;
  t5362 = t3115*t5288;
  t5365 = -1.*t3262*t5319;
  t5372 = t5362 + t5365;
  t4664 = -0.0016*t4447;
  t4687 = -0.2707*t4484;
  t4692 = 0. + t4664 + t4687;
  t4803 = 0.0184*t4802;
  t4838 = -0.7055*t4832;
  t4845 = 0. + t4803 + t4838;
  t5380 = -1.*t4012*t5348;
  t5381 = t3805*t5372;
  t5393 = t5380 + t5381;
  t5408 = t3805*t5348;
  t5441 = t4012*t5372;
  t5450 = t5408 + t5441;
  t4864 = -0.7055*t4802;
  t4873 = -0.0184*t4832;
  t4875 = 0. + t4864 + t4873;
  t4991 = -1.1135*t4988;
  t5000 = 0.0216*t4995;
  t5014 = 0. + t4991 + t5000;
  t5463 = t4484*t5393;
  t5500 = t4432*t5450;
  t5515 = t5463 + t5500;
  t5536 = t4432*t5393;
  t5547 = -1.*t4484*t5450;
  t5549 = t5536 + t5547;
  t5060 = -0.0216*t4988;
  t5066 = -1.1135*t4995;
  t5074 = 0. + t5060 + t5066;
  t5577 = -1.*t4832*t5515;
  t5582 = t4789*t5549;
  t5597 = t5577 + t5582;
  t5609 = t4789*t5515;
  t5611 = t4832*t5549;
  t5614 = t5609 + t5611;
  t5718 = t624*t1807*t1456;
  t5722 = t2458*t624*t2044;
  t5726 = t5718 + t5722;
  t5737 = t2458*t624*t1807;
  t5738 = -1.*t624*t1456*t2044;
  t5740 = t5737 + t5738;
  t5775 = -1.*t931*t1851;
  t5776 = t1016*t5726;
  t5777 = t5775 + t5776;
  t5784 = t3262*t5740;
  t5789 = t3115*t5777;
  t5792 = t5784 + t5789;
  t5799 = t3115*t5740;
  t5800 = -1.*t3262*t5777;
  t5804 = t5799 + t5800;
  t5815 = -1.*t4012*t5792;
  t5819 = t3805*t5804;
  t5820 = t5815 + t5819;
  t5841 = t3805*t5792;
  t5845 = t4012*t5804;
  t5849 = t5841 + t5845;
  t5856 = t4484*t5820;
  t5866 = t4432*t5849;
  t5869 = t5856 + t5866;
  t5882 = t4432*t5820;
  t5889 = -1.*t4484*t5849;
  t5891 = t5882 + t5889;
  t5901 = -1.*t4832*t5869;
  t5903 = t4789*t5891;
  t5908 = t5901 + t5903;
  t5920 = t4789*t5869;
  t5930 = t4832*t5891;
  t5933 = t5920 + t5930;

  p_output1(0)=0. + t1613*t2308 + t2604*t2709 + t3051*t3081 + t3292*t3363 + t3640*t3775 + t4098*t4187 + t4213*t4364 + t4528*t4606 + t4692*t4785 + t4845*t4854 + t4875*t4907 + t5014*t5044 + t5074*t5083 + 0.0306*(t4995*t5044 + t4966*t5083) - 1.1312*(t4966*t5044 - 1.*t4995*t5083) + t1252*t333*t624 - 0.1305*(-1.*t1016*t333*t624 + t3081*t931) + var1(0);
  p_output1(1)=0. + t1613*t5194 + t2604*t5231 + t3051*t5265 + t3292*t5288 + t3640*t5319 + t4098*t5348 + t4213*t5372 + t4528*t5393 + t4692*t5450 + t4845*t5515 + t4875*t5549 + t5014*t5597 + t5074*t5614 + 0.0306*(t4995*t5597 + t4966*t5614) - 1.1312*(t4966*t5597 - 1.*t4995*t5614) + t1252*t1977*t624 - 0.1305*(-1.*t1016*t1977*t624 + t5265*t931) + var1(1);
  p_output1(2)=0. - 1.*t1252*t1851 + t3051*t5726 + t3292*t5740 + t3640*t5777 + t4098*t5792 + t4213*t5804 + t4528*t5820 + t4692*t5849 + t4845*t5869 + t4875*t5891 + t5014*t5908 + t5074*t5933 + 0.0306*(t4995*t5908 + t4966*t5933) - 1.1312*(t4966*t5908 - 1.*t4995*t5933) + t1613*t1807*t624 + t2044*t2604*t624 - 0.1305*(t1016*t1851 + t5726*t931) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RightToeBottom(const Eigen::Matrix<double,20,1> &var1)
//void p_RightToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



