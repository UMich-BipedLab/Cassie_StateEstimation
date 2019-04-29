/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:56 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeBottom_src.h"

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
  double t60;
  double t439;
  double t513;
  double t465;
  double t517;
  double t193;
  double t200;
  double t296;
  double t309;
  double t698;
  double t467;
  double t594;
  double t608;
  double t717;
  double t722;
  double t730;
  double t669;
  double t778;
  double t832;
  double t1725;
  double t1615;
  double t1622;
  double t1638;
  double t1609;
  double t1734;
  double t1771;
  double t1774;
  double t1876;
  double t1685;
  double t1804;
  double t1811;
  double t1542;
  double t1880;
  double t1893;
  double t1918;
  double t1956;
  double t1847;
  double t1939;
  double t1940;
  double t1477;
  double t1969;
  double t1979;
  double t1985;
  double t2103;
  double t1943;
  double t2041;
  double t2055;
  double t1435;
  double t2104;
  double t2115;
  double t2123;
  double t2242;
  double t2093;
  double t2135;
  double t2211;
  double t1412;
  double t2267;
  double t2279;
  double t2288;
  double t916;
  double t937;
  double t952;
  double t1027;
  double t1039;
  double t1057;
  double t981;
  double t1082;
  double t1090;
  double t2447;
  double t2450;
  double t2455;
  double t2458;
  double t2468;
  double t2471;
  double t2456;
  double t2491;
  double t2506;
  double t2552;
  double t2587;
  double t2637;
  double t2546;
  double t2644;
  double t2645;
  double t2661;
  double t2667;
  double t2703;
  double t2654;
  double t2715;
  double t2727;
  double t2761;
  double t2795;
  double t2796;
  double t2760;
  double t2797;
  double t2802;
  double t2848;
  double t2858;
  double t2867;
  double t1259;
  double t1319;
  double t1327;
  double t3035;
  double t3045;
  double t3075;
  double t3135;
  double t3147;
  double t3150;
  double t3098;
  double t3179;
  double t3180;
  double t3258;
  double t3293;
  double t3304;
  double t3207;
  double t3321;
  double t3332;
  double t3365;
  double t3417;
  double t3440;
  double t3348;
  double t3453;
  double t3466;
  double t3514;
  double t3536;
  double t3555;
  double t3491;
  double t3574;
  double t3576;
  double t3617;
  double t3642;
  double t3671;
  double t2223;
  double t2321;
  double t2326;
  double t2396;
  double t2402;
  double t2424;
  double t2806;
  double t2883;
  double t2887;
  double t2932;
  double t2950;
  double t2972;
  double t3592;
  double t3676;
  double t3677;
  double t3692;
  double t3761;
  double t3770;
  double t4020;
  double t4039;
  double t4400;
  double t4404;
  double t4513;
  double t4520;
  double t4590;
  double t4609;
  double t4701;
  double t4714;
  double t4818;
  double t4819;
  double t4041;
  double t4053;
  double t4073;
  double t4115;
  double t4135;
  double t4255;
  double t4266;
  double t4268;
  double t4279;
  double t4342;
  double t4356;
  double t4374;
  double t4407;
  double t4417;
  double t4443;
  double t4493;
  double t4504;
  double t4505;
  double t4536;
  double t4537;
  double t4551;
  double t4576;
  double t4579;
  double t4581;
  double t4613;
  double t4639;
  double t4645;
  double t4650;
  double t4662;
  double t4674;
  double t4720;
  double t4721;
  double t4728;
  double t4781;
  double t4796;
  double t4801;
  double t4840;
  double t4859;
  double t4865;
  double t4870;
  double t4883;
  double t4889;
  t60 = Cos(var1[3]);
  t439 = Cos(var1[5]);
  t513 = Sin(var1[3]);
  t465 = Sin(var1[4]);
  t517 = Sin(var1[5]);
  t193 = Cos(var1[4]);
  t200 = Sin(var1[14]);
  t296 = Cos(var1[14]);
  t309 = Sin(var1[13]);
  t698 = Cos(var1[13]);
  t467 = t60*t439*t465;
  t594 = t513*t517;
  t608 = t467 + t594;
  t717 = -1.*t439*t513;
  t722 = t60*t465*t517;
  t730 = t717 + t722;
  t669 = t309*t608;
  t778 = t698*t730;
  t832 = t669 + t778;
  t1725 = Cos(var1[15]);
  t1615 = t698*t608;
  t1622 = -1.*t309*t730;
  t1638 = t1615 + t1622;
  t1609 = Sin(var1[15]);
  t1734 = t296*t60*t193;
  t1771 = t200*t832;
  t1774 = t1734 + t1771;
  t1876 = Cos(var1[16]);
  t1685 = t1609*t1638;
  t1804 = t1725*t1774;
  t1811 = t1685 + t1804;
  t1542 = Sin(var1[16]);
  t1880 = t1725*t1638;
  t1893 = -1.*t1609*t1774;
  t1918 = t1880 + t1893;
  t1956 = Cos(var1[17]);
  t1847 = -1.*t1542*t1811;
  t1939 = t1876*t1918;
  t1940 = t1847 + t1939;
  t1477 = Sin(var1[17]);
  t1969 = t1876*t1811;
  t1979 = t1542*t1918;
  t1985 = t1969 + t1979;
  t2103 = Cos(var1[18]);
  t1943 = t1477*t1940;
  t2041 = t1956*t1985;
  t2055 = t1943 + t2041;
  t1435 = Sin(var1[18]);
  t2104 = t1956*t1940;
  t2115 = -1.*t1477*t1985;
  t2123 = t2104 + t2115;
  t2242 = Cos(var1[19]);
  t2093 = -1.*t1435*t2055;
  t2135 = t2103*t2123;
  t2211 = t2093 + t2135;
  t1412 = Sin(var1[19]);
  t2267 = t2103*t2055;
  t2279 = t1435*t2123;
  t2288 = t2267 + t2279;
  t916 = t439*t513*t465;
  t937 = -1.*t60*t517;
  t952 = t916 + t937;
  t1027 = t60*t439;
  t1039 = t513*t465*t517;
  t1057 = t1027 + t1039;
  t981 = t309*t952;
  t1082 = t698*t1057;
  t1090 = t981 + t1082;
  t2447 = t698*t952;
  t2450 = -1.*t309*t1057;
  t2455 = t2447 + t2450;
  t2458 = t296*t193*t513;
  t2468 = t200*t1090;
  t2471 = t2458 + t2468;
  t2456 = t1609*t2455;
  t2491 = t1725*t2471;
  t2506 = t2456 + t2491;
  t2552 = t1725*t2455;
  t2587 = -1.*t1609*t2471;
  t2637 = t2552 + t2587;
  t2546 = -1.*t1542*t2506;
  t2644 = t1876*t2637;
  t2645 = t2546 + t2644;
  t2661 = t1876*t2506;
  t2667 = t1542*t2637;
  t2703 = t2661 + t2667;
  t2654 = t1477*t2645;
  t2715 = t1956*t2703;
  t2727 = t2654 + t2715;
  t2761 = t1956*t2645;
  t2795 = -1.*t1477*t2703;
  t2796 = t2761 + t2795;
  t2760 = -1.*t1435*t2727;
  t2797 = t2103*t2796;
  t2802 = t2760 + t2797;
  t2848 = t2103*t2727;
  t2858 = t1435*t2796;
  t2867 = t2848 + t2858;
  t1259 = t193*t439*t309;
  t1319 = t698*t193*t517;
  t1327 = t1259 + t1319;
  t3035 = t698*t193*t439;
  t3045 = -1.*t193*t309*t517;
  t3075 = t3035 + t3045;
  t3135 = -1.*t296*t465;
  t3147 = t200*t1327;
  t3150 = t3135 + t3147;
  t3098 = t1609*t3075;
  t3179 = t1725*t3150;
  t3180 = t3098 + t3179;
  t3258 = t1725*t3075;
  t3293 = -1.*t1609*t3150;
  t3304 = t3258 + t3293;
  t3207 = -1.*t1542*t3180;
  t3321 = t1876*t3304;
  t3332 = t3207 + t3321;
  t3365 = t1876*t3180;
  t3417 = t1542*t3304;
  t3440 = t3365 + t3417;
  t3348 = t1477*t3332;
  t3453 = t1956*t3440;
  t3466 = t3348 + t3453;
  t3514 = t1956*t3332;
  t3536 = -1.*t1477*t3440;
  t3555 = t3514 + t3536;
  t3491 = -1.*t1435*t3466;
  t3574 = t2103*t3555;
  t3576 = t3491 + t3574;
  t3617 = t2103*t3466;
  t3642 = t1435*t3555;
  t3671 = t3617 + t3642;
  t2223 = t1412*t2211;
  t2321 = t2242*t2288;
  t2326 = t2223 + t2321;
  t2396 = t2242*t2211;
  t2402 = -1.*t1412*t2288;
  t2424 = t2396 + t2402;
  t2806 = t1412*t2802;
  t2883 = t2242*t2867;
  t2887 = t2806 + t2883;
  t2932 = t2242*t2802;
  t2950 = -1.*t1412*t2867;
  t2972 = t2932 + t2950;
  t3592 = t1412*t3576;
  t3676 = t2242*t3671;
  t3677 = t3592 + t3676;
  t3692 = t2242*t3576;
  t3761 = -1.*t1412*t3671;
  t3770 = t3692 + t3761;
  t4020 = -1.*t296;
  t4039 = 1. + t4020;
  t4400 = -1.*t1725;
  t4404 = 1. + t4400;
  t4513 = -1.*t1876;
  t4520 = 1. + t4513;
  t4590 = -1.*t1956;
  t4609 = 1. + t4590;
  t4701 = -1.*t2103;
  t4714 = 1. + t4701;
  t4818 = -1.*t2242;
  t4819 = 1. + t4818;
  t4041 = -0.049*t4039;
  t4053 = -0.135*t200;
  t4073 = 0. + t4041 + t4053;
  t4115 = 0.135*t309;
  t4135 = 0. + t4115;
  t4255 = -1.*t698;
  t4266 = 1. + t4255;
  t4268 = -0.135*t4266;
  t4279 = 0. + t4268;
  t4342 = -0.135*t4039;
  t4356 = 0.049*t200;
  t4374 = 0. + t4342 + t4356;
  t4407 = -0.09*t4404;
  t4417 = 0.049*t1609;
  t4443 = 0. + t4407 + t4417;
  t4493 = -0.049*t4404;
  t4504 = -0.09*t1609;
  t4505 = 0. + t4493 + t4504;
  t4536 = -0.049*t4520;
  t4537 = -0.21*t1542;
  t4551 = 0. + t4536 + t4537;
  t4576 = -0.21*t4520;
  t4579 = 0.049*t1542;
  t4581 = 0. + t4576 + t4579;
  t4613 = -0.2707*t4609;
  t4639 = 0.0016*t1477;
  t4645 = 0. + t4613 + t4639;
  t4650 = -0.0016*t4609;
  t4662 = -0.2707*t1477;
  t4674 = 0. + t4650 + t4662;
  t4720 = 0.0184*t4714;
  t4721 = -0.7055*t1435;
  t4728 = 0. + t4720 + t4721;
  t4781 = -0.7055*t4714;
  t4796 = -0.0184*t1435;
  t4801 = 0. + t4781 + t4796;
  t4840 = -1.1135*t4819;
  t4859 = 0.0216*t1412;
  t4865 = 0. + t4840 + t4859;
  t4870 = -0.0216*t4819;
  t4883 = -1.1135*t1412;
  t4889 = 0. + t4870 + t4883;
  p_output1[0]=t193*t200*t60 - 1.*t296*t832;
  p_output1[1]=-1.*t1090*t296 + t193*t200*t513;
  p_output1[2]=-1.*t1327*t296 - 1.*t200*t465;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t2326 + 0.766044*t2424;
  p_output1[5]=0.642788*t2887 + 0.766044*t2972;
  p_output1[6]=0.642788*t3677 + 0.766044*t3770;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t2326 + 0.642788*t2424;
  p_output1[9]=-0.766044*t2887 + 0.642788*t2972;
  p_output1[10]=-0.766044*t3677 + 0.642788*t3770;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t2326 - 1.1312*t2424 + t1638*t4443 + t1774*t4505 + t1811*t4551 + t1918*t4581 + t1940*t4645 + t1985*t4674 + t2055*t4728 + t2123*t4801 + t2211*t4865 + t2288*t4889 + t193*t4073*t60 + t4135*t608 + t4279*t730 + t4374*t832 - 0.1305*(-1.*t193*t200*t60 + t296*t832) + var1[0];
  p_output1[13]=0. + 0.0306*t2887 - 1.1312*t2972 + t1057*t4279 + t1090*t4374 + t2455*t4443 + t2471*t4505 + t2506*t4551 + t2637*t4581 + t2645*t4645 + t2703*t4674 + t2727*t4728 + t2796*t4801 + t2802*t4865 + t2867*t4889 + t193*t4073*t513 - 0.1305*(t1090*t296 - 1.*t193*t200*t513) + t4135*t952 + var1[1];
  p_output1[14]=0. + 0.0306*t3677 - 1.1312*t3770 + t1327*t4374 + t193*t4135*t439 + t3075*t4443 + t3150*t4505 + t3180*t4551 + t3304*t4581 + t3332*t4645 - 1.*t4073*t465 - 0.1305*(t1327*t296 + t200*t465) + t3440*t4674 + t3466*t4728 + t3555*t4801 + t3576*t4865 + t3671*t4889 + t193*t4279*t517 + var1[2];
  p_output1[15]=1.;
}



void H_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
