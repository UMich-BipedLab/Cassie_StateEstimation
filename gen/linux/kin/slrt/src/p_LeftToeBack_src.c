/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:54 GMT-05:00
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
  double t1560;
  double t1427;
  double t1656;
  double t1497;
  double t1746;
  double t924;
  double t1533;
  double t1775;
  double t1806;
  double t1826;
  double t1916;
  double t2036;
  double t2143;
  double t2461;
  double t2541;
  double t2556;
  double t2574;
  double t2359;
  double t2377;
  double t2417;
  double t2721;
  double t3018;
  double t3034;
  double t3036;
  double t3144;
  double t2956;
  double t2985;
  double t3015;
  double t3307;
  double t3314;
  double t3415;
  double t3604;
  double t3648;
  double t3716;
  double t3753;
  double t3788;
  double t3796;
  double t3818;
  double t3880;
  double t3905;
  double t3915;
  double t3949;
  double t3952;
  double t3963;
  double t3979;
  double t4005;
  double t4054;
  double t4068;
  double t4107;
  double t4118;
  double t4136;
  double t4145;
  double t4150;
  double t4168;
  double t4209;
  double t4223;
  double t4231;
  double t4233;
  double t4281;
  double t4307;
  double t4313;
  double t4323;
  double t4333;
  double t4353;
  double t4389;
  double t4401;
  double t4406;
  double t4450;
  double t4506;
  double t4508;
  double t4541;
  double t1116;
  double t1138;
  double t1278;
  double t1397;
  double t2202;
  double t2230;
  double t4663;
  double t4669;
  double t4684;
  double t4695;
  double t4700;
  double t4702;
  double t2572;
  double t2592;
  double t2614;
  double t2725;
  double t2743;
  double t2749;
  double t4792;
  double t4794;
  double t4803;
  double t3104;
  double t3168;
  double t3209;
  double t3428;
  double t3477;
  double t3478;
  double t3739;
  double t3768;
  double t3774;
  double t4883;
  double t4885;
  double t4897;
  double t4913;
  double t4918;
  double t4924;
  double t3825;
  double t3849;
  double t3850;
  double t3972;
  double t3991;
  double t3993;
  double t4933;
  double t4937;
  double t4939;
  double t4960;
  double t4971;
  double t4986;
  double t4092;
  double t4099;
  double t4101;
  double t4192;
  double t4217;
  double t4222;
  double t4992;
  double t4993;
  double t5016;
  double t5027;
  double t5028;
  double t5033;
  double t4273;
  double t4277;
  double t4278;
  double t4365;
  double t4394;
  double t4395;
  double t5044;
  double t5070;
  double t5082;
  double t5133;
  double t5145;
  double t5151;
  double t4478;
  double t4497;
  double t4498;
  double t5191;
  double t5204;
  double t5236;
  double t5248;
  double t5251;
  double t5278;
  double t5463;
  double t5464;
  double t5466;
  double t5525;
  double t5550;
  double t5566;
  double t5602;
  double t5607;
  double t5609;
  double t5628;
  double t5653;
  double t5654;
  double t5667;
  double t5669;
  double t5694;
  double t5733;
  double t5735;
  double t5742;
  double t5790;
  double t5813;
  double t5822;
  double t5837;
  double t5853;
  double t5855;
  double t5858;
  double t5877;
  double t5884;
  double t5899;
  double t5949;
  double t5960;
  double t5980;
  double t5981;
  double t5993;
  t1560 = Cos(var1[3]);
  t1427 = Cos(var1[5]);
  t1656 = Sin(var1[4]);
  t1497 = Sin(var1[3]);
  t1746 = Sin(var1[5]);
  t924 = Cos(var1[6]);
  t1533 = -1.*t1427*t1497;
  t1775 = t1560*t1656*t1746;
  t1806 = t1533 + t1775;
  t1826 = t1560*t1427*t1656;
  t1916 = t1497*t1746;
  t2036 = t1826 + t1916;
  t2143 = Sin(var1[6]);
  t2461 = Cos(var1[7]);
  t2541 = -1.*t2461;
  t2556 = 1. + t2541;
  t2574 = Sin(var1[7]);
  t2359 = t924*t1806;
  t2377 = t2036*t2143;
  t2417 = t2359 + t2377;
  t2721 = Cos(var1[4]);
  t3018 = Cos(var1[8]);
  t3034 = -1.*t3018;
  t3036 = 1. + t3034;
  t3144 = Sin(var1[8]);
  t2956 = t1560*t2721*t2461;
  t2985 = t2417*t2574;
  t3015 = t2956 + t2985;
  t3307 = t924*t2036;
  t3314 = -1.*t1806*t2143;
  t3415 = t3307 + t3314;
  t3604 = Cos(var1[9]);
  t3648 = -1.*t3604;
  t3716 = 1. + t3648;
  t3753 = Sin(var1[9]);
  t3788 = t3018*t3015;
  t3796 = t3415*t3144;
  t3818 = t3788 + t3796;
  t3880 = t3018*t3415;
  t3905 = -1.*t3015*t3144;
  t3915 = t3880 + t3905;
  t3949 = Cos(var1[10]);
  t3952 = -1.*t3949;
  t3963 = 1. + t3952;
  t3979 = Sin(var1[10]);
  t4005 = -1.*t3753*t3818;
  t4054 = t3604*t3915;
  t4068 = t4005 + t4054;
  t4107 = t3604*t3818;
  t4118 = t3753*t3915;
  t4136 = t4107 + t4118;
  t4145 = Cos(var1[11]);
  t4150 = -1.*t4145;
  t4168 = 1. + t4150;
  t4209 = Sin(var1[11]);
  t4223 = t3979*t4068;
  t4231 = t3949*t4136;
  t4233 = t4223 + t4231;
  t4281 = t3949*t4068;
  t4307 = -1.*t3979*t4136;
  t4313 = t4281 + t4307;
  t4323 = Cos(var1[12]);
  t4333 = -1.*t4323;
  t4353 = 1. + t4333;
  t4389 = Sin(var1[12]);
  t4401 = -1.*t4209*t4233;
  t4406 = t4145*t4313;
  t4450 = t4401 + t4406;
  t4506 = t4145*t4233;
  t4508 = t4209*t4313;
  t4541 = t4506 + t4508;
  t1116 = -1.*t924;
  t1138 = 1. + t1116;
  t1278 = 0.135*t1138;
  t1397 = 0. + t1278;
  t2202 = -0.135*t2143;
  t2230 = 0. + t2202;
  t4663 = t1560*t1427;
  t4669 = t1497*t1656*t1746;
  t4684 = t4663 + t4669;
  t4695 = t1427*t1497*t1656;
  t4700 = -1.*t1560*t1746;
  t4702 = t4695 + t4700;
  t2572 = 0.135*t2556;
  t2592 = 0.049*t2574;
  t2614 = 0. + t2572 + t2592;
  t2725 = -0.049*t2556;
  t2743 = 0.135*t2574;
  t2749 = 0. + t2725 + t2743;
  t4792 = t924*t4684;
  t4794 = t4702*t2143;
  t4803 = t4792 + t4794;
  t3104 = -0.049*t3036;
  t3168 = -0.09*t3144;
  t3209 = 0. + t3104 + t3168;
  t3428 = -0.09*t3036;
  t3477 = 0.049*t3144;
  t3478 = 0. + t3428 + t3477;
  t3739 = -0.049*t3716;
  t3768 = -0.21*t3753;
  t3774 = 0. + t3739 + t3768;
  t4883 = t2721*t2461*t1497;
  t4885 = t4803*t2574;
  t4897 = t4883 + t4885;
  t4913 = t924*t4702;
  t4918 = -1.*t4684*t2143;
  t4924 = t4913 + t4918;
  t3825 = -0.21*t3716;
  t3849 = 0.049*t3753;
  t3850 = 0. + t3825 + t3849;
  t3972 = -0.2707*t3963;
  t3991 = 0.0016*t3979;
  t3993 = 0. + t3972 + t3991;
  t4933 = t3018*t4897;
  t4937 = t4924*t3144;
  t4939 = t4933 + t4937;
  t4960 = t3018*t4924;
  t4971 = -1.*t4897*t3144;
  t4986 = t4960 + t4971;
  t4092 = -0.0016*t3963;
  t4099 = -0.2707*t3979;
  t4101 = 0. + t4092 + t4099;
  t4192 = 0.0184*t4168;
  t4217 = -0.7055*t4209;
  t4222 = 0. + t4192 + t4217;
  t4992 = -1.*t3753*t4939;
  t4993 = t3604*t4986;
  t5016 = t4992 + t4993;
  t5027 = t3604*t4939;
  t5028 = t3753*t4986;
  t5033 = t5027 + t5028;
  t4273 = -0.7055*t4168;
  t4277 = -0.0184*t4209;
  t4278 = 0. + t4273 + t4277;
  t4365 = -1.1135*t4353;
  t4394 = 0.0216*t4389;
  t4395 = 0. + t4365 + t4394;
  t5044 = t3979*t5016;
  t5070 = t3949*t5033;
  t5082 = t5044 + t5070;
  t5133 = t3949*t5016;
  t5145 = -1.*t3979*t5033;
  t5151 = t5133 + t5145;
  t4478 = -0.0216*t4353;
  t4497 = -1.1135*t4389;
  t4498 = 0. + t4478 + t4497;
  t5191 = -1.*t4209*t5082;
  t5204 = t4145*t5151;
  t5236 = t5191 + t5204;
  t5248 = t4145*t5082;
  t5251 = t4209*t5151;
  t5278 = t5248 + t5251;
  t5463 = t2721*t924*t1746;
  t5464 = t2721*t1427*t2143;
  t5466 = t5463 + t5464;
  t5525 = -1.*t2461*t1656;
  t5550 = t5466*t2574;
  t5566 = t5525 + t5550;
  t5602 = t2721*t1427*t924;
  t5607 = -1.*t2721*t1746*t2143;
  t5609 = t5602 + t5607;
  t5628 = t3018*t5566;
  t5653 = t5609*t3144;
  t5654 = t5628 + t5653;
  t5667 = t3018*t5609;
  t5669 = -1.*t5566*t3144;
  t5694 = t5667 + t5669;
  t5733 = -1.*t3753*t5654;
  t5735 = t3604*t5694;
  t5742 = t5733 + t5735;
  t5790 = t3604*t5654;
  t5813 = t3753*t5694;
  t5822 = t5790 + t5813;
  t5837 = t3979*t5742;
  t5853 = t3949*t5822;
  t5855 = t5837 + t5853;
  t5858 = t3949*t5742;
  t5877 = -1.*t3979*t5822;
  t5884 = t5858 + t5877;
  t5899 = -1.*t4209*t5855;
  t5949 = t4145*t5884;
  t5960 = t5899 + t5949;
  t5980 = t4145*t5855;
  t5981 = t4209*t5884;
  t5993 = t5980 + t5981;
  p_output1[0]=0. + t1397*t1806 + t2036*t2230 + t2417*t2614 + 0.1305*(t2417*t2461 - 1.*t1560*t2574*t2721) + t1560*t2721*t2749 + t3015*t3209 + t3415*t3478 + t3774*t3818 + t3850*t3915 + t3993*t4068 + t4101*t4136 + t4222*t4233 + t4278*t4313 + t4395*t4450 + t4498*t4541 - 0.027251*(t4389*t4450 + t4323*t4541) - 1.200144*(t4323*t4450 - 1.*t4389*t4541) + var1[0];
  p_output1[1]=0. + t1497*t2721*t2749 + t1397*t4684 + t2230*t4702 + t2614*t4803 + 0.1305*(-1.*t1497*t2574*t2721 + t2461*t4803) + t3209*t4897 + t3478*t4924 + t3774*t4939 + t3850*t4986 + t3993*t5016 + t4101*t5033 + t4222*t5082 + t4278*t5151 + t4395*t5236 + t4498*t5278 - 0.027251*(t4389*t5236 + t4323*t5278) - 1.200144*(t4323*t5236 - 1.*t4389*t5278) + var1[1];
  p_output1[2]=0. + t1397*t1746*t2721 + t1427*t2230*t2721 - 1.*t1656*t2749 + t2614*t5466 + 0.1305*(t1656*t2574 + t2461*t5466) + t3209*t5566 + t3478*t5609 + t3774*t5654 + t3850*t5694 + t3993*t5742 + t4101*t5822 + t4222*t5855 + t4278*t5884 + t4395*t5960 + t4498*t5993 - 0.027251*(t4389*t5960 + t4323*t5993) - 1.200144*(t4323*t5960 - 1.*t4389*t5993) + var1[2];
}



void p_LeftToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
