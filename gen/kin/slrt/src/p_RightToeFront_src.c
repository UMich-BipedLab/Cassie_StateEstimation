/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeFront_src.h"

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
  double t820;
  double t2084;
  double t2135;
  double t2091;
  double t2211;
  double t988;
  double t1193;
  double t1319;
  double t1572;
  double t1734;
  double t2099;
  double t2235;
  double t2326;
  double t2366;
  double t2539;
  double t2775;
  double t2802;
  double t967;
  double t3218;
  double t3220;
  double t3232;
  double t3286;
  double t3303;
  double t3330;
  double t3355;
  double t3532;
  double t3554;
  double t3555;
  double t3964;
  double t4026;
  double t4074;
  double t4096;
  double t4205;
  double t4238;
  double t4288;
  double t4360;
  double t4398;
  double t4431;
  double t4525;
  double t4536;
  double t4554;
  double t4579;
  double t4608;
  double t4613;
  double t4650;
  double t4721;
  double t4723;
  double t4725;
  double t4783;
  double t4796;
  double t4806;
  double t4840;
  double t4859;
  double t4865;
  double t4889;
  double t4921;
  double t4923;
  double t4929;
  double t4961;
  double t4972;
  double t4981;
  double t4990;
  double t4991;
  double t5000;
  double t5011;
  double t5021;
  double t5025;
  double t5040;
  double t5064;
  double t5072;
  double t5075;
  double t1463;
  double t1617;
  double t1657;
  double t1825;
  double t1854;
  double t2379;
  double t2382;
  double t2389;
  double t2452;
  double t2889;
  double t3117;
  double t3184;
  double t5119;
  double t5143;
  double t5149;
  double t5162;
  double t5169;
  double t5173;
  double t3332;
  double t3371;
  double t3417;
  double t5185;
  double t5202;
  double t5215;
  double t3697;
  double t3749;
  double t3944;
  double t4283;
  double t4327;
  double t4356;
  double t5233;
  double t5239;
  double t5241;
  double t5291;
  double t5296;
  double t5299;
  double t4464;
  double t4493;
  double t4510;
  double t4639;
  double t4655;
  double t4710;
  double t5304;
  double t5313;
  double t5329;
  double t5340;
  double t5347;
  double t5349;
  double t4759;
  double t4763;
  double t4766;
  double t4869;
  double t4908;
  double t4916;
  double t5356;
  double t5369;
  double t5380;
  double t5398;
  double t5413;
  double t5419;
  double t4942;
  double t4946;
  double t4954;
  double t5004;
  double t5015;
  double t5020;
  double t5423;
  double t5439;
  double t5441;
  double t5471;
  double t5478;
  double t5486;
  double t5051;
  double t5055;
  double t5062;
  double t5500;
  double t5505;
  double t5508;
  double t5530;
  double t5531;
  double t5547;
  double t5671;
  double t5685;
  double t5686;
  double t5702;
  double t5708;
  double t5728;
  double t5745;
  double t5757;
  double t5758;
  double t5764;
  double t5771;
  double t5777;
  double t5785;
  double t5792;
  double t5793;
  double t5801;
  double t5802;
  double t5810;
  double t5828;
  double t5829;
  double t5833;
  double t5840;
  double t5844;
  double t5845;
  double t5848;
  double t5849;
  double t5874;
  double t5886;
  double t5909;
  double t5910;
  double t5921;
  double t5925;
  double t5926;
  t820 = Cos(var1[3]);
  t2084 = Cos(var1[5]);
  t2135 = Sin(var1[3]);
  t2091 = Sin(var1[4]);
  t2211 = Sin(var1[5]);
  t988 = Cos(var1[14]);
  t1193 = -1.*t988;
  t1319 = 1. + t1193;
  t1572 = Sin(var1[14]);
  t1734 = Sin(var1[13]);
  t2099 = t820*t2084*t2091;
  t2235 = t2135*t2211;
  t2326 = t2099 + t2235;
  t2366 = Cos(var1[13]);
  t2539 = -1.*t2084*t2135;
  t2775 = t820*t2091*t2211;
  t2802 = t2539 + t2775;
  t967 = Cos(var1[4]);
  t3218 = t1734*t2326;
  t3220 = t2366*t2802;
  t3232 = t3218 + t3220;
  t3286 = Cos(var1[15]);
  t3303 = -1.*t3286;
  t3330 = 1. + t3303;
  t3355 = Sin(var1[15]);
  t3532 = t2366*t2326;
  t3554 = -1.*t1734*t2802;
  t3555 = t3532 + t3554;
  t3964 = t988*t820*t967;
  t4026 = t1572*t3232;
  t4074 = t3964 + t4026;
  t4096 = Cos(var1[16]);
  t4205 = -1.*t4096;
  t4238 = 1. + t4205;
  t4288 = Sin(var1[16]);
  t4360 = t3355*t3555;
  t4398 = t3286*t4074;
  t4431 = t4360 + t4398;
  t4525 = t3286*t3555;
  t4536 = -1.*t3355*t4074;
  t4554 = t4525 + t4536;
  t4579 = Cos(var1[17]);
  t4608 = -1.*t4579;
  t4613 = 1. + t4608;
  t4650 = Sin(var1[17]);
  t4721 = -1.*t4288*t4431;
  t4723 = t4096*t4554;
  t4725 = t4721 + t4723;
  t4783 = t4096*t4431;
  t4796 = t4288*t4554;
  t4806 = t4783 + t4796;
  t4840 = Cos(var1[18]);
  t4859 = -1.*t4840;
  t4865 = 1. + t4859;
  t4889 = Sin(var1[18]);
  t4921 = t4650*t4725;
  t4923 = t4579*t4806;
  t4929 = t4921 + t4923;
  t4961 = t4579*t4725;
  t4972 = -1.*t4650*t4806;
  t4981 = t4961 + t4972;
  t4990 = Cos(var1[19]);
  t4991 = -1.*t4990;
  t5000 = 1. + t4991;
  t5011 = Sin(var1[19]);
  t5021 = -1.*t4889*t4929;
  t5025 = t4840*t4981;
  t5040 = t5021 + t5025;
  t5064 = t4840*t4929;
  t5072 = t4889*t4981;
  t5075 = t5064 + t5072;
  t1463 = -0.049*t1319;
  t1617 = -0.135*t1572;
  t1657 = 0. + t1463 + t1617;
  t1825 = 0.135*t1734;
  t1854 = 0. + t1825;
  t2379 = -1.*t2366;
  t2382 = 1. + t2379;
  t2389 = -0.135*t2382;
  t2452 = 0. + t2389;
  t2889 = -0.135*t1319;
  t3117 = 0.049*t1572;
  t3184 = 0. + t2889 + t3117;
  t5119 = t2084*t2135*t2091;
  t5143 = -1.*t820*t2211;
  t5149 = t5119 + t5143;
  t5162 = t820*t2084;
  t5169 = t2135*t2091*t2211;
  t5173 = t5162 + t5169;
  t3332 = -0.09*t3330;
  t3371 = 0.049*t3355;
  t3417 = 0. + t3332 + t3371;
  t5185 = t1734*t5149;
  t5202 = t2366*t5173;
  t5215 = t5185 + t5202;
  t3697 = -0.049*t3330;
  t3749 = -0.09*t3355;
  t3944 = 0. + t3697 + t3749;
  t4283 = -0.049*t4238;
  t4327 = -0.21*t4288;
  t4356 = 0. + t4283 + t4327;
  t5233 = t2366*t5149;
  t5239 = -1.*t1734*t5173;
  t5241 = t5233 + t5239;
  t5291 = t988*t967*t2135;
  t5296 = t1572*t5215;
  t5299 = t5291 + t5296;
  t4464 = -0.21*t4238;
  t4493 = 0.049*t4288;
  t4510 = 0. + t4464 + t4493;
  t4639 = -0.2707*t4613;
  t4655 = 0.0016*t4650;
  t4710 = 0. + t4639 + t4655;
  t5304 = t3355*t5241;
  t5313 = t3286*t5299;
  t5329 = t5304 + t5313;
  t5340 = t3286*t5241;
  t5347 = -1.*t3355*t5299;
  t5349 = t5340 + t5347;
  t4759 = -0.0016*t4613;
  t4763 = -0.2707*t4650;
  t4766 = 0. + t4759 + t4763;
  t4869 = 0.0184*t4865;
  t4908 = -0.7055*t4889;
  t4916 = 0. + t4869 + t4908;
  t5356 = -1.*t4288*t5329;
  t5369 = t4096*t5349;
  t5380 = t5356 + t5369;
  t5398 = t4096*t5329;
  t5413 = t4288*t5349;
  t5419 = t5398 + t5413;
  t4942 = -0.7055*t4865;
  t4946 = -0.0184*t4889;
  t4954 = 0. + t4942 + t4946;
  t5004 = -1.1135*t5000;
  t5015 = 0.0216*t5011;
  t5020 = 0. + t5004 + t5015;
  t5423 = t4650*t5380;
  t5439 = t4579*t5419;
  t5441 = t5423 + t5439;
  t5471 = t4579*t5380;
  t5478 = -1.*t4650*t5419;
  t5486 = t5471 + t5478;
  t5051 = -0.0216*t5000;
  t5055 = -1.1135*t5011;
  t5062 = 0. + t5051 + t5055;
  t5500 = -1.*t4889*t5441;
  t5505 = t4840*t5486;
  t5508 = t5500 + t5505;
  t5530 = t4840*t5441;
  t5531 = t4889*t5486;
  t5547 = t5530 + t5531;
  t5671 = t967*t2084*t1734;
  t5685 = t2366*t967*t2211;
  t5686 = t5671 + t5685;
  t5702 = t2366*t967*t2084;
  t5708 = -1.*t967*t1734*t2211;
  t5728 = t5702 + t5708;
  t5745 = -1.*t988*t2091;
  t5757 = t1572*t5686;
  t5758 = t5745 + t5757;
  t5764 = t3355*t5728;
  t5771 = t3286*t5758;
  t5777 = t5764 + t5771;
  t5785 = t3286*t5728;
  t5792 = -1.*t3355*t5758;
  t5793 = t5785 + t5792;
  t5801 = -1.*t4288*t5777;
  t5802 = t4096*t5793;
  t5810 = t5801 + t5802;
  t5828 = t4096*t5777;
  t5829 = t4288*t5793;
  t5833 = t5828 + t5829;
  t5840 = t4650*t5810;
  t5844 = t4579*t5833;
  t5845 = t5840 + t5844;
  t5848 = t4579*t5810;
  t5849 = -1.*t4650*t5833;
  t5874 = t5848 + t5849;
  t5886 = -1.*t4889*t5845;
  t5909 = t4840*t5874;
  t5910 = t5886 + t5909;
  t5921 = t4840*t5845;
  t5925 = t4889*t5874;
  t5926 = t5921 + t5925;
  p_output1[0]=0. + t1854*t2326 + t2452*t2802 + t3184*t3232 + t3417*t3555 + t3944*t4074 + t4356*t4431 + t4510*t4554 + t4710*t4725 + t4766*t4806 + t4916*t4929 + t4954*t4981 + t5020*t5040 + t5062*t5075 + 0.088451*(t5011*t5040 + t4990*t5075) - 1.062256*(t4990*t5040 - 1.*t5011*t5075) + t1657*t820*t967 - 0.1305*(-1.*t1572*t820*t967 + t3232*t988) + var1[0];
  p_output1[1]=0. + t1854*t5149 + t2452*t5173 + t3184*t5215 + t3417*t5241 + t3944*t5299 + t4356*t5329 + t4510*t5349 + t4710*t5380 + t4766*t5419 + t4916*t5441 + t4954*t5486 + t5020*t5508 + t5062*t5547 + 0.088451*(t5011*t5508 + t4990*t5547) - 1.062256*(t4990*t5508 - 1.*t5011*t5547) + t1657*t2135*t967 - 0.1305*(-1.*t1572*t2135*t967 + t5215*t988) + var1[1];
  p_output1[2]=0. - 1.*t1657*t2091 + t3184*t5686 + t3417*t5728 + t3944*t5758 + t4356*t5777 + t4510*t5793 + t4710*t5810 + t4766*t5833 + t4916*t5845 + t4954*t5874 + t5020*t5910 + t5062*t5926 + 0.088451*(t5011*t5910 + t4990*t5926) - 1.062256*(t4990*t5910 - 1.*t5011*t5926) + t1854*t2084*t967 + t2211*t2452*t967 - 0.1305*(t1572*t2091 + t5686*t988) + var1[2];
}



void p_RightToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
