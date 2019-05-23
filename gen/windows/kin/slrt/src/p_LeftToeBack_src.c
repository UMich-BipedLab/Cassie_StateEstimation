/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:08:10 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeBack_src.h"

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
  double t726;
  double t668;
  double t732;
  double t691;
  double t784;
  double t333;
  double t717;
  double t1011;
  double t1060;
  double t1424;
  double t1519;
  double t1628;
  double t1634;
  double t2216;
  double t2297;
  double t2339;
  double t2649;
  double t1857;
  double t2179;
  double t2182;
  double t2919;
  double t3634;
  double t3754;
  double t3883;
  double t4066;
  double t3455;
  double t3516;
  double t3589;
  double t4172;
  double t4369;
  double t4431;
  double t4650;
  double t4651;
  double t4657;
  double t4677;
  double t4706;
  double t4708;
  double t4718;
  double t4766;
  double t4768;
  double t4779;
  double t4784;
  double t4786;
  double t4787;
  double t4820;
  double t4910;
  double t4914;
  double t4963;
  double t5001;
  double t5006;
  double t5021;
  double t5059;
  double t5083;
  double t5088;
  double t5129;
  double t5166;
  double t5167;
  double t5189;
  double t5241;
  double t5243;
  double t5250;
  double t5273;
  double t5278;
  double t5291;
  double t5305;
  double t5337;
  double t5350;
  double t5352;
  double t5390;
  double t5391;
  double t5400;
  double t340;
  double t346;
  double t471;
  double t653;
  double t1775;
  double t1832;
  double t5498;
  double t5505;
  double t5506;
  double t5522;
  double t5526;
  double t5527;
  double t2482;
  double t2794;
  double t2796;
  double t2955;
  double t3022;
  double t3031;
  double t5549;
  double t5557;
  double t5569;
  double t3978;
  double t4083;
  double t4089;
  double t4503;
  double t4570;
  double t4641;
  double t4672;
  double t4698;
  double t4705;
  double t5630;
  double t5640;
  double t5652;
  double t5654;
  double t5657;
  double t5659;
  double t4757;
  double t4760;
  double t4765;
  double t4791;
  double t4889;
  double t4892;
  double t5677;
  double t5690;
  double t5699;
  double t5707;
  double t5708;
  double t5712;
  double t4968;
  double t4971;
  double t4998;
  double t5114;
  double t5147;
  double t5162;
  double t5714;
  double t5719;
  double t5720;
  double t5727;
  double t5731;
  double t5736;
  double t5194;
  double t5213;
  double t5234;
  double t5295;
  double t5312;
  double t5323;
  double t5759;
  double t5764;
  double t5768;
  double t5790;
  double t5793;
  double t5794;
  double t5370;
  double t5381;
  double t5389;
  double t5803;
  double t5806;
  double t5810;
  double t5820;
  double t5828;
  double t5838;
  double t5935;
  double t5947;
  double t5953;
  double t5997;
  double t6001;
  double t6002;
  double t6008;
  double t6037;
  double t6045;
  double t6052;
  double t6053;
  double t6054;
  double t6065;
  double t6079;
  double t6093;
  double t6104;
  double t6106;
  double t6109;
  double t6127;
  double t6133;
  double t6140;
  double t6149;
  double t6155;
  double t6161;
  double t6171;
  double t6174;
  double t6188;
  double t6204;
  double t6206;
  double t6209;
  double t6219;
  double t6242;
  double t6257;
  t726 = Cos(var1[3]);
  t668 = Cos(var1[5]);
  t732 = Sin(var1[4]);
  t691 = Sin(var1[3]);
  t784 = Sin(var1[5]);
  t333 = Cos(var1[6]);
  t717 = -1.*t668*t691;
  t1011 = t726*t732*t784;
  t1060 = t717 + t1011;
  t1424 = t726*t668*t732;
  t1519 = t691*t784;
  t1628 = t1424 + t1519;
  t1634 = Sin(var1[6]);
  t2216 = Cos(var1[7]);
  t2297 = -1.*t2216;
  t2339 = 1. + t2297;
  t2649 = Sin(var1[7]);
  t1857 = t333*t1060;
  t2179 = t1628*t1634;
  t2182 = t1857 + t2179;
  t2919 = Cos(var1[4]);
  t3634 = Cos(var1[8]);
  t3754 = -1.*t3634;
  t3883 = 1. + t3754;
  t4066 = Sin(var1[8]);
  t3455 = t726*t2919*t2216;
  t3516 = t2182*t2649;
  t3589 = t3455 + t3516;
  t4172 = t333*t1628;
  t4369 = -1.*t1060*t1634;
  t4431 = t4172 + t4369;
  t4650 = Cos(var1[9]);
  t4651 = -1.*t4650;
  t4657 = 1. + t4651;
  t4677 = Sin(var1[9]);
  t4706 = t3634*t3589;
  t4708 = t4431*t4066;
  t4718 = t4706 + t4708;
  t4766 = t3634*t4431;
  t4768 = -1.*t3589*t4066;
  t4779 = t4766 + t4768;
  t4784 = Cos(var1[10]);
  t4786 = -1.*t4784;
  t4787 = 1. + t4786;
  t4820 = Sin(var1[10]);
  t4910 = -1.*t4677*t4718;
  t4914 = t4650*t4779;
  t4963 = t4910 + t4914;
  t5001 = t4650*t4718;
  t5006 = t4677*t4779;
  t5021 = t5001 + t5006;
  t5059 = Cos(var1[11]);
  t5083 = -1.*t5059;
  t5088 = 1. + t5083;
  t5129 = Sin(var1[11]);
  t5166 = t4820*t4963;
  t5167 = t4784*t5021;
  t5189 = t5166 + t5167;
  t5241 = t4784*t4963;
  t5243 = -1.*t4820*t5021;
  t5250 = t5241 + t5243;
  t5273 = Cos(var1[12]);
  t5278 = -1.*t5273;
  t5291 = 1. + t5278;
  t5305 = Sin(var1[12]);
  t5337 = -1.*t5129*t5189;
  t5350 = t5059*t5250;
  t5352 = t5337 + t5350;
  t5390 = t5059*t5189;
  t5391 = t5129*t5250;
  t5400 = t5390 + t5391;
  t340 = -1.*t333;
  t346 = 1. + t340;
  t471 = 0.135*t346;
  t653 = 0. + t471;
  t1775 = -0.135*t1634;
  t1832 = 0. + t1775;
  t5498 = t726*t668;
  t5505 = t691*t732*t784;
  t5506 = t5498 + t5505;
  t5522 = t668*t691*t732;
  t5526 = -1.*t726*t784;
  t5527 = t5522 + t5526;
  t2482 = 0.135*t2339;
  t2794 = 0.049*t2649;
  t2796 = 0. + t2482 + t2794;
  t2955 = -0.049*t2339;
  t3022 = 0.135*t2649;
  t3031 = 0. + t2955 + t3022;
  t5549 = t333*t5506;
  t5557 = t5527*t1634;
  t5569 = t5549 + t5557;
  t3978 = -0.049*t3883;
  t4083 = -0.09*t4066;
  t4089 = 0. + t3978 + t4083;
  t4503 = -0.09*t3883;
  t4570 = 0.049*t4066;
  t4641 = 0. + t4503 + t4570;
  t4672 = -0.049*t4657;
  t4698 = -0.21*t4677;
  t4705 = 0. + t4672 + t4698;
  t5630 = t2919*t2216*t691;
  t5640 = t5569*t2649;
  t5652 = t5630 + t5640;
  t5654 = t333*t5527;
  t5657 = -1.*t5506*t1634;
  t5659 = t5654 + t5657;
  t4757 = -0.21*t4657;
  t4760 = 0.049*t4677;
  t4765 = 0. + t4757 + t4760;
  t4791 = -0.2707*t4787;
  t4889 = 0.0016*t4820;
  t4892 = 0. + t4791 + t4889;
  t5677 = t3634*t5652;
  t5690 = t5659*t4066;
  t5699 = t5677 + t5690;
  t5707 = t3634*t5659;
  t5708 = -1.*t5652*t4066;
  t5712 = t5707 + t5708;
  t4968 = -0.0016*t4787;
  t4971 = -0.2707*t4820;
  t4998 = 0. + t4968 + t4971;
  t5114 = 0.0184*t5088;
  t5147 = -0.7055*t5129;
  t5162 = 0. + t5114 + t5147;
  t5714 = -1.*t4677*t5699;
  t5719 = t4650*t5712;
  t5720 = t5714 + t5719;
  t5727 = t4650*t5699;
  t5731 = t4677*t5712;
  t5736 = t5727 + t5731;
  t5194 = -0.7055*t5088;
  t5213 = -0.0184*t5129;
  t5234 = 0. + t5194 + t5213;
  t5295 = -1.1135*t5291;
  t5312 = 0.0216*t5305;
  t5323 = 0. + t5295 + t5312;
  t5759 = t4820*t5720;
  t5764 = t4784*t5736;
  t5768 = t5759 + t5764;
  t5790 = t4784*t5720;
  t5793 = -1.*t4820*t5736;
  t5794 = t5790 + t5793;
  t5370 = -0.0216*t5291;
  t5381 = -1.1135*t5305;
  t5389 = 0. + t5370 + t5381;
  t5803 = -1.*t5129*t5768;
  t5806 = t5059*t5794;
  t5810 = t5803 + t5806;
  t5820 = t5059*t5768;
  t5828 = t5129*t5794;
  t5838 = t5820 + t5828;
  t5935 = t2919*t333*t784;
  t5947 = t2919*t668*t1634;
  t5953 = t5935 + t5947;
  t5997 = -1.*t2216*t732;
  t6001 = t5953*t2649;
  t6002 = t5997 + t6001;
  t6008 = t2919*t668*t333;
  t6037 = -1.*t2919*t784*t1634;
  t6045 = t6008 + t6037;
  t6052 = t3634*t6002;
  t6053 = t6045*t4066;
  t6054 = t6052 + t6053;
  t6065 = t3634*t6045;
  t6079 = -1.*t6002*t4066;
  t6093 = t6065 + t6079;
  t6104 = -1.*t4677*t6054;
  t6106 = t4650*t6093;
  t6109 = t6104 + t6106;
  t6127 = t4650*t6054;
  t6133 = t4677*t6093;
  t6140 = t6127 + t6133;
  t6149 = t4820*t6109;
  t6155 = t4784*t6140;
  t6161 = t6149 + t6155;
  t6171 = t4784*t6109;
  t6174 = -1.*t4820*t6140;
  t6188 = t6171 + t6174;
  t6204 = -1.*t5129*t6161;
  t6206 = t5059*t6188;
  t6209 = t6204 + t6206;
  t6219 = t5059*t6161;
  t6242 = t5129*t6188;
  t6257 = t6219 + t6242;
  p_output1[0]=0. + t1628*t1832 + t2182*t2796 + t3589*t4089 + t4431*t4641 + t4705*t4718 + t4765*t4779 + t4892*t4963 + t4998*t5021 + t5162*t5189 + t5234*t5250 + t5323*t5352 + t5389*t5400 - 0.027251*(t5305*t5352 + t5273*t5400) - 1.200144*(t5273*t5352 - 1.*t5305*t5400) + t1060*t653 + t2919*t3031*t726 + 0.1305*(t2182*t2216 - 1.*t2649*t2919*t726) + var1[0];
  p_output1[1]=0. + t1832*t5527 + t2796*t5569 + t4089*t5652 + t4641*t5659 + t4705*t5699 + t4765*t5712 + t4892*t5720 + t4998*t5736 + t5162*t5768 + t5234*t5794 + t5323*t5810 + t5389*t5838 - 0.027251*(t5305*t5810 + t5273*t5838) - 1.200144*(t5273*t5810 - 1.*t5305*t5838) + t5506*t653 + t2919*t3031*t691 + 0.1305*(t2216*t5569 - 1.*t2649*t2919*t691) + var1[1];
  p_output1[2]=0. + t2796*t5953 + t4089*t6002 + t4641*t6045 + t4705*t6054 + t4765*t6093 + t4892*t6109 + t4998*t6140 + t5162*t6161 + t5234*t6188 + t5323*t6209 + t5389*t6257 - 0.027251*(t5305*t6209 + t5273*t6257) - 1.200144*(t5273*t6209 - 1.*t5305*t6257) + t1832*t2919*t668 - 1.*t3031*t732 + 0.1305*(t2216*t5953 + t2649*t732) + t2919*t653*t784 + var1[2];
}



void p_LeftToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
