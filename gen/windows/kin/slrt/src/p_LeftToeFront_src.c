/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:08:04 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeFront_src.h"

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
  double t1819;
  double t1329;
  double t1828;
  double t1339;
  double t1872;
  double t349;
  double t1573;
  double t2217;
  double t2225;
  double t2253;
  double t2343;
  double t2520;
  double t2551;
  double t3042;
  double t3177;
  double t3202;
  double t3293;
  double t2656;
  double t2659;
  double t2786;
  double t3493;
  double t4031;
  double t4055;
  double t4061;
  double t4104;
  double t3780;
  double t3810;
  double t4009;
  double t4139;
  double t4171;
  double t4296;
  double t4476;
  double t4555;
  double t4599;
  double t4617;
  double t4711;
  double t4800;
  double t4808;
  double t4906;
  double t4964;
  double t4967;
  double t5100;
  double t5101;
  double t5103;
  double t5117;
  double t5152;
  double t5170;
  double t5211;
  double t5251;
  double t5265;
  double t5275;
  double t5280;
  double t5281;
  double t5285;
  double t5304;
  double t5342;
  double t5350;
  double t5361;
  double t5392;
  double t5399;
  double t5402;
  double t5409;
  double t5410;
  double t5411;
  double t5416;
  double t5420;
  double t5425;
  double t5427;
  double t5447;
  double t5460;
  double t5462;
  double t1034;
  double t1066;
  double t1322;
  double t1324;
  double t2601;
  double t2610;
  double t5507;
  double t5516;
  double t5519;
  double t5526;
  double t5530;
  double t5535;
  double t3215;
  double t3331;
  double t3341;
  double t3494;
  double t3511;
  double t3628;
  double t5542;
  double t5550;
  double t5551;
  double t4092;
  double t4117;
  double t4119;
  double t4363;
  double t4370;
  double t4409;
  double t4603;
  double t4675;
  double t4680;
  double t5593;
  double t5596;
  double t5610;
  double t5626;
  double t5637;
  double t5642;
  double t4837;
  double t4861;
  double t4904;
  double t5114;
  double t5126;
  double t5149;
  double t5652;
  double t5654;
  double t5655;
  double t5659;
  double t5665;
  double t5670;
  double t5219;
  double t5232;
  double t5244;
  double t5303;
  double t5322;
  double t5339;
  double t5675;
  double t5677;
  double t5694;
  double t5698;
  double t5700;
  double t5702;
  double t5378;
  double t5383;
  double t5389;
  double t5413;
  double t5418;
  double t5419;
  double t5711;
  double t5719;
  double t5721;
  double t5723;
  double t5728;
  double t5742;
  double t5440;
  double t5443;
  double t5444;
  double t5756;
  double t5759;
  double t5761;
  double t5774;
  double t5775;
  double t5778;
  double t5817;
  double t5820;
  double t5832;
  double t5852;
  double t5854;
  double t5860;
  double t5869;
  double t5872;
  double t5874;
  double t5877;
  double t5879;
  double t5880;
  double t5886;
  double t5887;
  double t5892;
  double t5897;
  double t5899;
  double t5900;
  double t5908;
  double t5909;
  double t5910;
  double t5920;
  double t5923;
  double t5924;
  double t5930;
  double t5933;
  double t5934;
  double t5940;
  double t5947;
  double t5949;
  double t5953;
  double t5954;
  double t5955;
  t1819 = Cos(var1[3]);
  t1329 = Cos(var1[5]);
  t1828 = Sin(var1[4]);
  t1339 = Sin(var1[3]);
  t1872 = Sin(var1[5]);
  t349 = Cos(var1[6]);
  t1573 = -1.*t1329*t1339;
  t2217 = t1819*t1828*t1872;
  t2225 = t1573 + t2217;
  t2253 = t1819*t1329*t1828;
  t2343 = t1339*t1872;
  t2520 = t2253 + t2343;
  t2551 = Sin(var1[6]);
  t3042 = Cos(var1[7]);
  t3177 = -1.*t3042;
  t3202 = 1. + t3177;
  t3293 = Sin(var1[7]);
  t2656 = t349*t2225;
  t2659 = t2520*t2551;
  t2786 = t2656 + t2659;
  t3493 = Cos(var1[4]);
  t4031 = Cos(var1[8]);
  t4055 = -1.*t4031;
  t4061 = 1. + t4055;
  t4104 = Sin(var1[8]);
  t3780 = t1819*t3493*t3042;
  t3810 = t2786*t3293;
  t4009 = t3780 + t3810;
  t4139 = t349*t2520;
  t4171 = -1.*t2225*t2551;
  t4296 = t4139 + t4171;
  t4476 = Cos(var1[9]);
  t4555 = -1.*t4476;
  t4599 = 1. + t4555;
  t4617 = Sin(var1[9]);
  t4711 = t4031*t4009;
  t4800 = t4296*t4104;
  t4808 = t4711 + t4800;
  t4906 = t4031*t4296;
  t4964 = -1.*t4009*t4104;
  t4967 = t4906 + t4964;
  t5100 = Cos(var1[10]);
  t5101 = -1.*t5100;
  t5103 = 1. + t5101;
  t5117 = Sin(var1[10]);
  t5152 = -1.*t4617*t4808;
  t5170 = t4476*t4967;
  t5211 = t5152 + t5170;
  t5251 = t4476*t4808;
  t5265 = t4617*t4967;
  t5275 = t5251 + t5265;
  t5280 = Cos(var1[11]);
  t5281 = -1.*t5280;
  t5285 = 1. + t5281;
  t5304 = Sin(var1[11]);
  t5342 = t5117*t5211;
  t5350 = t5100*t5275;
  t5361 = t5342 + t5350;
  t5392 = t5100*t5211;
  t5399 = -1.*t5117*t5275;
  t5402 = t5392 + t5399;
  t5409 = Cos(var1[12]);
  t5410 = -1.*t5409;
  t5411 = 1. + t5410;
  t5416 = Sin(var1[12]);
  t5420 = -1.*t5304*t5361;
  t5425 = t5280*t5402;
  t5427 = t5420 + t5425;
  t5447 = t5280*t5361;
  t5460 = t5304*t5402;
  t5462 = t5447 + t5460;
  t1034 = -1.*t349;
  t1066 = 1. + t1034;
  t1322 = 0.135*t1066;
  t1324 = 0. + t1322;
  t2601 = -0.135*t2551;
  t2610 = 0. + t2601;
  t5507 = t1819*t1329;
  t5516 = t1339*t1828*t1872;
  t5519 = t5507 + t5516;
  t5526 = t1329*t1339*t1828;
  t5530 = -1.*t1819*t1872;
  t5535 = t5526 + t5530;
  t3215 = 0.135*t3202;
  t3331 = 0.049*t3293;
  t3341 = 0. + t3215 + t3331;
  t3494 = -0.049*t3202;
  t3511 = 0.135*t3293;
  t3628 = 0. + t3494 + t3511;
  t5542 = t349*t5519;
  t5550 = t5535*t2551;
  t5551 = t5542 + t5550;
  t4092 = -0.049*t4061;
  t4117 = -0.09*t4104;
  t4119 = 0. + t4092 + t4117;
  t4363 = -0.09*t4061;
  t4370 = 0.049*t4104;
  t4409 = 0. + t4363 + t4370;
  t4603 = -0.049*t4599;
  t4675 = -0.21*t4617;
  t4680 = 0. + t4603 + t4675;
  t5593 = t3493*t3042*t1339;
  t5596 = t5551*t3293;
  t5610 = t5593 + t5596;
  t5626 = t349*t5535;
  t5637 = -1.*t5519*t2551;
  t5642 = t5626 + t5637;
  t4837 = -0.21*t4599;
  t4861 = 0.049*t4617;
  t4904 = 0. + t4837 + t4861;
  t5114 = -0.2707*t5103;
  t5126 = 0.0016*t5117;
  t5149 = 0. + t5114 + t5126;
  t5652 = t4031*t5610;
  t5654 = t5642*t4104;
  t5655 = t5652 + t5654;
  t5659 = t4031*t5642;
  t5665 = -1.*t5610*t4104;
  t5670 = t5659 + t5665;
  t5219 = -0.0016*t5103;
  t5232 = -0.2707*t5117;
  t5244 = 0. + t5219 + t5232;
  t5303 = 0.0184*t5285;
  t5322 = -0.7055*t5304;
  t5339 = 0. + t5303 + t5322;
  t5675 = -1.*t4617*t5655;
  t5677 = t4476*t5670;
  t5694 = t5675 + t5677;
  t5698 = t4476*t5655;
  t5700 = t4617*t5670;
  t5702 = t5698 + t5700;
  t5378 = -0.7055*t5285;
  t5383 = -0.0184*t5304;
  t5389 = 0. + t5378 + t5383;
  t5413 = -1.1135*t5411;
  t5418 = 0.0216*t5416;
  t5419 = 0. + t5413 + t5418;
  t5711 = t5117*t5694;
  t5719 = t5100*t5702;
  t5721 = t5711 + t5719;
  t5723 = t5100*t5694;
  t5728 = -1.*t5117*t5702;
  t5742 = t5723 + t5728;
  t5440 = -0.0216*t5411;
  t5443 = -1.1135*t5416;
  t5444 = 0. + t5440 + t5443;
  t5756 = -1.*t5304*t5721;
  t5759 = t5280*t5742;
  t5761 = t5756 + t5759;
  t5774 = t5280*t5721;
  t5775 = t5304*t5742;
  t5778 = t5774 + t5775;
  t5817 = t3493*t349*t1872;
  t5820 = t3493*t1329*t2551;
  t5832 = t5817 + t5820;
  t5852 = -1.*t3042*t1828;
  t5854 = t5832*t3293;
  t5860 = t5852 + t5854;
  t5869 = t3493*t1329*t349;
  t5872 = -1.*t3493*t1872*t2551;
  t5874 = t5869 + t5872;
  t5877 = t4031*t5860;
  t5879 = t5874*t4104;
  t5880 = t5877 + t5879;
  t5886 = t4031*t5874;
  t5887 = -1.*t5860*t4104;
  t5892 = t5886 + t5887;
  t5897 = -1.*t4617*t5880;
  t5899 = t4476*t5892;
  t5900 = t5897 + t5899;
  t5908 = t4476*t5880;
  t5909 = t4617*t5892;
  t5910 = t5908 + t5909;
  t5920 = t5117*t5900;
  t5923 = t5100*t5910;
  t5924 = t5920 + t5923;
  t5930 = t5100*t5900;
  t5933 = -1.*t5117*t5910;
  t5934 = t5930 + t5933;
  t5940 = -1.*t5304*t5924;
  t5947 = t5280*t5934;
  t5949 = t5940 + t5947;
  t5953 = t5280*t5924;
  t5954 = t5304*t5934;
  t5955 = t5953 + t5954;
  p_output1[0]=0. + t1324*t2225 + t2520*t2610 + t2786*t3341 + 0.1305*(t2786*t3042 - 1.*t1819*t3293*t3493) + t1819*t3493*t3628 + t4009*t4119 + t4296*t4409 + t4680*t4808 + t4904*t4967 + t5149*t5211 + t5244*t5275 + t5339*t5361 + t5389*t5402 + t5419*t5427 + t5444*t5462 + 0.088451*(t5416*t5427 + t5409*t5462) - 1.062256*(t5409*t5427 - 1.*t5416*t5462) + var1[0];
  p_output1[1]=0. + t1339*t3493*t3628 + t1324*t5519 + t2610*t5535 + t3341*t5551 + 0.1305*(-1.*t1339*t3293*t3493 + t3042*t5551) + t4119*t5610 + t4409*t5642 + t4680*t5655 + t4904*t5670 + t5149*t5694 + t5244*t5702 + t5339*t5721 + t5389*t5742 + t5419*t5761 + t5444*t5778 + 0.088451*(t5416*t5761 + t5409*t5778) - 1.062256*(t5409*t5761 - 1.*t5416*t5778) + var1[1];
  p_output1[2]=0. + t1324*t1872*t3493 + t1329*t2610*t3493 - 1.*t1828*t3628 + t3341*t5832 + 0.1305*(t1828*t3293 + t3042*t5832) + t4119*t5860 + t4409*t5874 + t4680*t5880 + t4904*t5892 + t5149*t5900 + t5244*t5910 + t5339*t5924 + t5389*t5934 + t5419*t5949 + t5444*t5955 + 0.088451*(t5416*t5949 + t5409*t5955) - 1.062256*(t5409*t5949 - 1.*t5416*t5955) + var1[2];
}



void p_LeftToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
