/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:02:10 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_VectorNav_to_RightToeBottom_src.h"

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
  double t16;
  double t143;
  double t448;
  double t825;
  double t926;
  double t1046;
  double t1209;
  double t1662;
  double t2075;
  double t2102;
  double t2103;
  double t2144;
  double t1851;
  double t1891;
  double t2058;
  double t2321;
  double t2375;
  double t2381;
  double t2836;
  double t2844;
  double t2853;
  double t2896;
  double t2766;
  double t2795;
  double t2833;
  double t2916;
  double t2926;
  double t2928;
  double t3069;
  double t3071;
  double t3072;
  double t3089;
  double t3018;
  double t3053;
  double t3067;
  double t3124;
  double t3126;
  double t3143;
  double t3222;
  double t3240;
  double t3250;
  double t3284;
  double t3205;
  double t3209;
  double t3211;
  double t3405;
  double t3409;
  double t3413;
  double t271;
  double t322;
  double t427;
  double t739;
  double t770;
  double t1137;
  double t1263;
  double t1583;
  double t1769;
  double t1771;
  double t1803;
  double t2139;
  double t2178;
  double t2278;
  double t2415;
  double t2606;
  double t2637;
  double t3649;
  double t3652;
  double t3657;
  double t3666;
  double t3670;
  double t3671;
  double t2868;
  double t2898;
  double t2913;
  double t2934;
  double t2938;
  double t2953;
  double t3693;
  double t3706;
  double t3744;
  double t3758;
  double t3790;
  double t3792;
  double t3073;
  double t3090;
  double t3116;
  double t3156;
  double t3163;
  double t3178;
  double t3822;
  double t3832;
  double t3838;
  double t3866;
  double t3887;
  double t3908;
  double t3263;
  double t3314;
  double t3322;
  double t3445;
  double t3459;
  double t3482;
  double t3930;
  double t3934;
  double t3955;
  double t3967;
  double t3973;
  double t3983;
  double t4103;
  double t4118;
  double t4128;
  double t4139;
  double t4145;
  double t4148;
  double t4151;
  double t4153;
  double t4162;
  double t4174;
  double t4175;
  double t4177;
  double t4211;
  double t4215;
  double t4218;
  double t4222;
  double t4227;
  double t4228;
  double t4357;
  double t4358;
  double t4359;
  double t4368;
  double t4381;
  double t4382;
  double t4392;
  double t4395;
  double t4400;
  double t4402;
  double t4403;
  double t4411;
  double t4418;
  double t4425;
  double t4428;
  double t4435;
  double t4438;
  double t4441;
  double t4295;
  double t4312;
  double t4317;
  double t4525;
  double t4526;
  double t4531;
  double t4543;
  double t4549;
  double t4569;
  double t4581;
  double t4584;
  double t4587;
  double t4595;
  double t4600;
  double t4608;
  double t4617;
  double t4620;
  double t4632;
  double t4640;
  double t4662;
  double t4670;
  double t4814;
  double t4822;
  double t4824;
  double t4833;
  double t4841;
  double t4842;
  double t4853;
  double t4857;
  double t4858;
  double t4870;
  double t4875;
  double t4877;
  double t4906;
  double t4914;
  double t4918;
  double t4889;
  double t4891;
  double t4901;
  double t4774;
  double t4788;
  double t4795;
  double t4994;
  double t5000;
  double t5011;
  double t5022;
  double t5024;
  double t5031;
  double t5033;
  double t5035;
  double t5047;
  double t5051;
  double t5056;
  double t5072;
  double t5075;
  double t5103;
  double t5146;
  double t5148;
  double t5152;
  double t5122;
  double t5125;
  double t5130;
  double t4966;
  double t4974;
  double t5208;
  double t5226;
  double t5231;
  double t5254;
  double t5261;
  double t5265;
  double t5274;
  double t5279;
  double t5286;
  double t5289;
  double t5291;
  double t5299;
  double t5300;
  double t5301;
  double t5331;
  double t5332;
  double t5334;
  double t5312;
  double t5324;
  double t5327;
  double t4825;
  double t4852;
  double t4862;
  double t4879;
  double t4903;
  double t4923;
  double t4924;
  double t4932;
  double t4935;
  double t4938;
  double t4945;
  double t4958;
  double t4959;
  double t4961;
  double t5381;
  double t5402;
  double t5408;
  double t5410;
  double t5415;
  double t5466;
  double t5467;
  double t5486;
  double t5489;
  double t5500;
  double t5502;
  double t5503;
  double t5546;
  double t5548;
  double t5552;
  double t5519;
  double t5527;
  double t5535;
  double t5625;
  double t5630;
  double t5636;
  double t5643;
  double t5646;
  double t5657;
  double t5661;
  double t5668;
  double t5676;
  double t5681;
  double t5699;
  double t5703;
  double t5713;
  double t5742;
  double t5744;
  double t5751;
  double t5719;
  double t5724;
  double t5726;
  double t5817;
  double t5818;
  double t5825;
  double t5851;
  double t5854;
  double t5867;
  double t5869;
  double t5890;
  double t5897;
  double t5898;
  double t5874;
  double t5875;
  double t5880;
  double t5783;
  double t5784;
  double t5834;
  double t5837;
  double t5842;
  double t6006;
  double t6007;
  double t6033;
  double t6041;
  double t6059;
  double t6011;
  double t6027;
  double t6131;
  double t6134;
  double t6141;
  double t6145;
  double t6148;
  double t6153;
  double t6160;
  double t6195;
  double t6203;
  double t6205;
  double t6171;
  double t6176;
  double t6177;
  double t6270;
  double t6271;
  double t6272;
  double t6301;
  double t6304;
  double t6289;
  double t6298;
  double t6263;
  double t6265;
  double t6278;
  double t6280;
  double t6282;
  double t6359;
  double t6362;
  double t4019;
  double t6406;
  double t6408;
  double t6409;
  double t6420;
  double t6432;
  double t6412;
  double t6418;
  double t6462;
  double t6465;
  double t6471;
  double t6313;
  double t6322;
  double t6457;
  double t6459;
  double t6476;
  double t6477;
  double t6478;
  double t6373;
  double t4037;
  double t4043;
  double t6566;
  double t6577;
  double t6580;
  double t6439;
  double t6444;
  t16 = Sin(var1[7]);
  t143 = Cos(var1[8]);
  t448 = Sin(var1[8]);
  t825 = Cos(var1[9]);
  t926 = -1.*t825;
  t1046 = 1. + t926;
  t1209 = Sin(var1[9]);
  t1662 = Cos(var1[7]);
  t2075 = Cos(var1[10]);
  t2102 = -1.*t2075;
  t2103 = 1. + t2102;
  t2144 = Sin(var1[10]);
  t1851 = -1.*t825*t16*t448;
  t1891 = -1.*t1662*t1209;
  t2058 = t1851 + t1891;
  t2321 = -1.*t1662*t825;
  t2375 = t16*t448*t1209;
  t2381 = t2321 + t2375;
  t2836 = Cos(var1[11]);
  t2844 = -1.*t2836;
  t2853 = 1. + t2844;
  t2896 = Sin(var1[11]);
  t2766 = t2075*t2058;
  t2795 = t2381*t2144;
  t2833 = t2766 + t2795;
  t2916 = t2075*t2381;
  t2926 = -1.*t2058*t2144;
  t2928 = t2916 + t2926;
  t3069 = Cos(var1[12]);
  t3071 = -1.*t3069;
  t3072 = 1. + t3071;
  t3089 = Sin(var1[12]);
  t3018 = t2836*t2833;
  t3053 = t2928*t2896;
  t3067 = t3018 + t3053;
  t3124 = t2836*t2928;
  t3126 = -1.*t2833*t2896;
  t3143 = t3124 + t3126;
  t3222 = Cos(var1[13]);
  t3240 = -1.*t3222;
  t3250 = 1. + t3240;
  t3284 = Sin(var1[13]);
  t3205 = t3069*t3067;
  t3209 = t3143*t3089;
  t3211 = t3205 + t3209;
  t3405 = t3069*t3143;
  t3409 = -1.*t3067*t3089;
  t3413 = t3405 + t3409;
  t271 = -1.*t143;
  t322 = 1. + t271;
  t427 = -0.135*t322;
  t739 = 0.049*t448;
  t770 = 0. + t427 + t739;
  t1137 = -0.049*t1046;
  t1263 = -0.09*t1209;
  t1583 = 0. + t1137 + t1263;
  t1769 = -0.09*t1046;
  t1771 = 0.049*t1209;
  t1803 = 0. + t1769 + t1771;
  t2139 = -0.049*t2103;
  t2178 = -0.21*t2144;
  t2278 = 0. + t2139 + t2178;
  t2415 = -0.21*t2103;
  t2606 = 0.049*t2144;
  t2637 = 0. + t2415 + t2606;
  t3649 = t1662*t825*t448;
  t3652 = -1.*t16*t1209;
  t3657 = t3649 + t3652;
  t3666 = -1.*t825*t16;
  t3670 = -1.*t1662*t448*t1209;
  t3671 = t3666 + t3670;
  t2868 = -0.0016*t2853;
  t2898 = -0.2707*t2896;
  t2913 = 0. + t2868 + t2898;
  t2934 = -0.2707*t2853;
  t2938 = 0.0016*t2896;
  t2953 = 0. + t2934 + t2938;
  t3693 = t2075*t3657;
  t3706 = t3671*t2144;
  t3744 = t3693 + t3706;
  t3758 = t2075*t3671;
  t3790 = -1.*t3657*t2144;
  t3792 = t3758 + t3790;
  t3073 = 0.0184*t3072;
  t3090 = -0.7055*t3089;
  t3116 = 0. + t3073 + t3090;
  t3156 = -0.7055*t3072;
  t3163 = -0.0184*t3089;
  t3178 = 0. + t3156 + t3163;
  t3822 = t2836*t3744;
  t3832 = t3792*t2896;
  t3838 = t3822 + t3832;
  t3866 = t2836*t3792;
  t3887 = -1.*t3744*t2896;
  t3908 = t3866 + t3887;
  t3263 = -0.0216*t3250;
  t3314 = -1.1135*t3284;
  t3322 = 0. + t3263 + t3314;
  t3445 = -1.1135*t3250;
  t3459 = 0.0216*t3284;
  t3482 = 0. + t3445 + t3459;
  t3930 = t3069*t3838;
  t3934 = t3908*t3089;
  t3955 = t3930 + t3934;
  t3967 = t3069*t3908;
  t3973 = -1.*t3838*t3089;
  t3983 = t3967 + t3973;
  t4103 = -1.*t825*t2075*t448;
  t4118 = t448*t1209*t2144;
  t4128 = t4103 + t4118;
  t4139 = t2075*t448*t1209;
  t4145 = t825*t448*t2144;
  t4148 = t4139 + t4145;
  t4151 = t2836*t4128;
  t4153 = t4148*t2896;
  t4162 = t4151 + t4153;
  t4174 = t2836*t4148;
  t4175 = -1.*t4128*t2896;
  t4177 = t4174 + t4175;
  t4211 = t3069*t4162;
  t4215 = t4177*t3089;
  t4218 = t4211 + t4215;
  t4222 = t3069*t4177;
  t4227 = -1.*t4162*t3089;
  t4228 = t4222 + t4227;
  t4357 = t1662*t143*t825*t2075;
  t4358 = -1.*t1662*t143*t1209*t2144;
  t4359 = t4357 + t4358;
  t4368 = -1.*t1662*t143*t2075*t1209;
  t4381 = -1.*t1662*t143*t825*t2144;
  t4382 = t4368 + t4381;
  t4392 = t2836*t4359;
  t4395 = t4382*t2896;
  t4400 = t4392 + t4395;
  t4402 = t2836*t4382;
  t4403 = -1.*t4359*t2896;
  t4411 = t4402 + t4403;
  t4418 = t3069*t4400;
  t4425 = t4411*t3089;
  t4428 = t4418 + t4425;
  t4435 = t3069*t4411;
  t4438 = -1.*t4400*t3089;
  t4441 = t4435 + t4438;
  t4295 = 0.049*t143;
  t4312 = -0.135*t448;
  t4317 = t4295 + t4312;
  t4525 = t143*t825*t2075*t16;
  t4526 = -1.*t143*t16*t1209*t2144;
  t4531 = t4525 + t4526;
  t4543 = -1.*t143*t2075*t16*t1209;
  t4549 = -1.*t143*t825*t16*t2144;
  t4569 = t4543 + t4549;
  t4581 = t2836*t4531;
  t4584 = t4569*t2896;
  t4587 = t4581 + t4584;
  t4595 = t2836*t4569;
  t4600 = -1.*t4531*t2896;
  t4608 = t4595 + t4600;
  t4617 = t3069*t4587;
  t4620 = t4608*t3089;
  t4632 = t4617 + t4620;
  t4640 = t3069*t4608;
  t4662 = -1.*t4587*t3089;
  t4670 = t4640 + t4662;
  t4814 = -1.*t143*t2075*t1209;
  t4822 = -1.*t143*t825*t2144;
  t4824 = t4814 + t4822;
  t4833 = -1.*t143*t825*t2075;
  t4841 = t143*t1209*t2144;
  t4842 = t4833 + t4841;
  t4853 = t2836*t4824;
  t4857 = t4842*t2896;
  t4858 = t4853 + t4857;
  t4870 = t2836*t4842;
  t4875 = -1.*t4824*t2896;
  t4877 = t4870 + t4875;
  t4906 = t3069*t4877;
  t4914 = -1.*t4858*t3089;
  t4918 = t4906 + t4914;
  t4889 = t3069*t4858;
  t4891 = t4877*t3089;
  t4901 = t4889 + t4891;
  t4774 = -0.09*t825;
  t4788 = -0.049*t1209;
  t4795 = t4774 + t4788;
  t4994 = -1.*t1662*t825*t448;
  t5000 = t16*t1209;
  t5011 = t4994 + t5000;
  t5022 = t5011*t2144;
  t5024 = t3758 + t5022;
  t5031 = t2075*t5011;
  t5033 = -1.*t3671*t2144;
  t5035 = t5031 + t5033;
  t5047 = t2836*t5024;
  t5051 = t5035*t2896;
  t5056 = t5047 + t5051;
  t5072 = t2836*t5035;
  t5075 = -1.*t5024*t2896;
  t5103 = t5072 + t5075;
  t5146 = t3069*t5103;
  t5148 = -1.*t5056*t3089;
  t5152 = t5146 + t5148;
  t5122 = t3069*t5056;
  t5125 = t5103*t3089;
  t5130 = t5122 + t5125;
  t4966 = 0.049*t825;
  t4974 = t4966 + t1263;
  t5208 = t1662*t825;
  t5226 = -1.*t16*t448*t1209;
  t5231 = t5208 + t5226;
  t5254 = t2075*t5231;
  t5261 = t2058*t2144;
  t5265 = t5254 + t5261;
  t5274 = -1.*t5231*t2144;
  t5279 = t2766 + t5274;
  t5286 = t2836*t5265;
  t5289 = t5279*t2896;
  t5291 = t5286 + t5289;
  t5299 = t2836*t5279;
  t5300 = -1.*t5265*t2896;
  t5301 = t5299 + t5300;
  t5331 = t3069*t5301;
  t5332 = -1.*t5291*t3089;
  t5334 = t5331 + t5332;
  t5312 = t3069*t5291;
  t5324 = t5301*t3089;
  t5327 = t5312 + t5324;
  t4825 = t4824*t2913;
  t4852 = t4842*t2953;
  t4862 = t4858*t3116;
  t4879 = t4877*t3178;
  t4903 = t4901*t3322;
  t4923 = t4918*t3482;
  t4924 = t3222*t4918;
  t4932 = -1.*t4901*t3284;
  t4935 = t4924 + t4932;
  t4938 = -1.1312*t4935;
  t4945 = t3222*t4901;
  t4958 = t4918*t3284;
  t4959 = t4945 + t4958;
  t4961 = 0.0306*t4959;
  t5381 = 0.049*t2075;
  t5402 = t5381 + t2178;
  t5408 = -0.21*t2075;
  t5410 = -0.049*t2144;
  t5415 = t5408 + t5410;
  t5466 = -1.*t2075*t3657;
  t5467 = t5466 + t5033;
  t5486 = t5467*t2896;
  t5489 = t3866 + t5486;
  t5500 = t2836*t5467;
  t5502 = -1.*t3792*t2896;
  t5503 = t5500 + t5502;
  t5546 = t3069*t5503;
  t5548 = -1.*t5489*t3089;
  t5552 = t5546 + t5548;
  t5519 = t3069*t5489;
  t5527 = t5503*t3089;
  t5535 = t5519 + t5527;
  t5625 = t825*t16*t448;
  t5630 = t1662*t1209;
  t5636 = t5625 + t5630;
  t5643 = -1.*t5636*t2144;
  t5646 = t5254 + t5643;
  t5657 = -1.*t2075*t5636;
  t5661 = t5657 + t5274;
  t5668 = t2836*t5646;
  t5676 = t5661*t2896;
  t5681 = t5668 + t5676;
  t5699 = t2836*t5661;
  t5703 = -1.*t5646*t2896;
  t5713 = t5699 + t5703;
  t5742 = t3069*t5713;
  t5744 = -1.*t5681*t3089;
  t5751 = t5742 + t5744;
  t5719 = t3069*t5681;
  t5724 = t5713*t3089;
  t5726 = t5719 + t5724;
  t5817 = t143*t825*t2075;
  t5818 = -1.*t143*t1209*t2144;
  t5825 = t5817 + t5818;
  t5851 = -1.*t5825*t2896;
  t5854 = t4853 + t5851;
  t5867 = -1.*t2836*t5825;
  t5869 = t5867 + t4875;
  t5890 = t3069*t5869;
  t5897 = -1.*t5854*t3089;
  t5898 = t5890 + t5897;
  t5874 = t3069*t5854;
  t5875 = t5869*t3089;
  t5880 = t5874 + t5875;
  t5783 = 0.0016*t2836;
  t5784 = t5783 + t2898;
  t5834 = -0.2707*t2836;
  t5837 = -0.0016*t2896;
  t5842 = t5834 + t5837;
  t6006 = -1.*t2836*t3744;
  t6007 = t6006 + t5502;
  t6033 = t3069*t6007;
  t6041 = -1.*t3908*t3089;
  t6059 = t6033 + t6041;
  t6011 = t6007*t3089;
  t6027 = t3967 + t6011;
  t6131 = t2075*t5636;
  t6134 = t5231*t2144;
  t6141 = t6131 + t6134;
  t6145 = -1.*t6141*t2896;
  t6148 = t5668 + t6145;
  t6153 = -1.*t2836*t6141;
  t6160 = t6153 + t5703;
  t6195 = t3069*t6160;
  t6203 = -1.*t6148*t3089;
  t6205 = t6195 + t6203;
  t6171 = t3069*t6148;
  t6176 = t6160*t3089;
  t6177 = t6171 + t6176;
  t6270 = t2836*t5825;
  t6271 = t4824*t2896;
  t6272 = t6270 + t6271;
  t6301 = -1.*t3069*t6272;
  t6304 = t6301 + t5897;
  t6289 = -1.*t6272*t3089;
  t6298 = t5874 + t6289;
  t6263 = -0.0184*t3069;
  t6265 = t6263 + t3090;
  t6278 = -0.7055*t3069;
  t6280 = 0.0184*t3089;
  t6282 = t6278 + t6280;
  t6359 = -1.*t3069*t3838;
  t6362 = t6359 + t6041;
  t4019 = t3222*t3983;
  t6406 = t2836*t6141;
  t6408 = t5646*t2896;
  t6409 = t6406 + t6408;
  t6420 = -1.*t3069*t6409;
  t6432 = t6420 + t6203;
  t6412 = -1.*t6409*t3089;
  t6418 = t6171 + t6412;
  t6462 = t3069*t6272;
  t6465 = t5854*t3089;
  t6471 = t6462 + t6465;
  t6313 = -1.*t6298*t3284;
  t6322 = t3222*t6298;
  t6457 = 0.0216*t3222;
  t6459 = t6457 + t3314;
  t6476 = -1.1135*t3222;
  t6477 = -0.0216*t3284;
  t6478 = t6476 + t6477;
  t6373 = -1.*t3983*t3284;
  t4037 = -1.*t3955*t3284;
  t4043 = t4019 + t4037;
  t6566 = t3069*t6409;
  t6577 = t6148*t3089;
  t6580 = t6566 + t6577;
  t6439 = -1.*t6418*t3284;
  t6444 = t3222*t6418;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=-0.135*t16 + 0.1305*t143*t16 - 1.*t1662*t1803 + t2058*t2278 + t2381*t2637 + t2833*t2913 + t2928*t2953 + t3067*t3116 + t3143*t3178 + t3211*t3322 - 1.1312*(-1.*t3211*t3284 + t3222*t3413) + 0.0306*(t3211*t3222 + t3284*t3413) + t3413*t3482 - 1.*t1583*t16*t448 - 1.*t16*t770;
  p_output1[23]=0.135*t1662 - 0.1305*t143*t1662 - 1.*t16*t1803 + t2278*t3657 + t2637*t3671 + t2913*t3744 + t2953*t3792 + t3116*t3838 + t3178*t3908 + t3322*t3955 + t3482*t3983 + 0.0306*(t3222*t3955 + t3284*t3983) - 1.1312*t4043 + t1583*t1662*t448 + t1662*t770;
  p_output1[24]=-0.004500000000000004*t143 + t2913*t4128 + t2953*t4148 + t3116*t4162 + t3178*t4177 + t3322*t4218 + t3482*t4228 - 1.1312*(-1.*t3284*t4218 + t3222*t4228) + 0.0306*(t3222*t4218 + t3284*t4228) - 0.049*t448 - 1.*t1583*t448 + t1209*t2637*t448 - 1.*t2278*t448*t825;
  p_output1[25]=t143*t1583*t1662 - 1.*t1209*t143*t1662*t2637 + t1662*t4317 + t2913*t4359 + t2953*t4382 + t3116*t4400 + t3178*t4411 + t3322*t4428 + t3482*t4441 - 1.1312*(-1.*t3284*t4428 + t3222*t4441) + 0.0306*(t3222*t4428 + t3284*t4441) + 0.1305*t1662*t448 + t143*t1662*t2278*t825;
  p_output1[26]=t143*t1583*t16 - 1.*t1209*t143*t16*t2637 + t16*t4317 + 0.1305*t16*t448 + t2913*t4531 + t2953*t4569 + t3116*t4587 + t3178*t4608 + t3322*t4632 + t3482*t4670 - 1.1312*(-1.*t3284*t4632 + t3222*t4670) + 0.0306*(t3222*t4632 + t3284*t4670) + t143*t16*t2278*t825;
  p_output1[27]=-1.*t1209*t143*t2278 + t143*t4795 + t4825 + t4852 + t4862 + t4879 + t4903 + t4923 + t4938 + t4961 - 1.*t143*t2637*t825;
  p_output1[28]=t2278*t3671 + t1662*t448*t4795 - 1.*t16*t4974 + t2637*t5011 + t2913*t5024 + t2953*t5035 + t3116*t5056 + t3178*t5103 + t3322*t5130 + t3482*t5152 - 1.1312*(-1.*t3284*t5130 + t3222*t5152) + 0.0306*(t3222*t5130 + t3284*t5152);
  p_output1[29]=t2058*t2637 + t16*t448*t4795 + t1662*t4974 + t2278*t5231 + t2913*t5265 + t2953*t5279 + t3116*t5291 + t3178*t5301 + t3322*t5327 + t3482*t5334 - 1.1312*(-1.*t3284*t5327 + t3222*t5334) + 0.0306*(t3222*t5327 + t3284*t5334);
  p_output1[30]=t4825 + t4852 + t4862 + t4879 + t4903 + t4923 + t4938 + t4961 - 1.*t1209*t143*t5402 + t143*t5415*t825;
  p_output1[31]=t2913*t3792 + t3671*t5402 + t3657*t5415 + t2953*t5467 + t3116*t5489 + t3178*t5503 + t3322*t5535 + t3482*t5552 - 1.1312*(-1.*t3284*t5535 + t3222*t5552) + 0.0306*(t3222*t5535 + t3284*t5552);
  p_output1[32]=t5231*t5402 + t5415*t5636 + t2913*t5646 + t2953*t5661 + t3116*t5681 + t3178*t5713 + t3322*t5726 + t3482*t5751 - 1.1312*(-1.*t3284*t5726 + t3222*t5751) + 0.0306*(t3222*t5726 + t3284*t5751);
  p_output1[33]=t4824*t5784 + t5825*t5842 + t3116*t5854 + t3178*t5869 + t3322*t5880 + t3482*t5898 - 1.1312*(-1.*t3284*t5880 + t3222*t5898) + 0.0306*(t3222*t5880 + t3284*t5898);
  p_output1[34]=t3116*t3908 + t3792*t5784 + t3744*t5842 + t3178*t6007 + t3322*t6027 + t3482*t6059 - 1.1312*(-1.*t3284*t6027 + t3222*t6059) + 0.0306*(t3222*t6027 + t3284*t6059);
  p_output1[35]=t5646*t5784 + t5842*t6141 + t3116*t6148 + t3178*t6160 + t3322*t6177 + t3482*t6205 - 1.1312*(-1.*t3284*t6177 + t3222*t6205) + 0.0306*(t3222*t6177 + t3284*t6205);
  p_output1[36]=t5854*t6265 + t6272*t6282 + t3322*t6298 + t3482*t6304 - 1.1312*(t3222*t6304 + t6313) + 0.0306*(t3284*t6304 + t6322);
  p_output1[37]=t3322*t3983 + t3908*t6265 + t3838*t6282 + t3482*t6362 + 0.0306*(t4019 + t3284*t6362) - 1.1312*(t3222*t6362 + t6373);
  p_output1[38]=t6148*t6265 + t6282*t6409 + t3322*t6418 + t3482*t6432 - 1.1312*(t3222*t6432 + t6439) + 0.0306*(t3284*t6432 + t6444);
  p_output1[39]=t6298*t6459 - 1.1312*(t6313 - 1.*t3222*t6471) + 0.0306*(t6322 - 1.*t3284*t6471) + t6471*t6478;
  p_output1[40]=0.0306*t4043 - 1.1312*(-1.*t3222*t3955 + t6373) + t3983*t6459 + t3955*t6478;
  p_output1[41]=t6418*t6459 + t6478*t6580 - 1.1312*(t6439 - 1.*t3222*t6580) + 0.0306*(t6444 - 1.*t3284*t6580);
}



void Jp_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}