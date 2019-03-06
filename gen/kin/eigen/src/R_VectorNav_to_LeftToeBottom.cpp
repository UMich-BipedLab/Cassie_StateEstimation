/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:02:40 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_VectorNav_to_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t465;
  double t2405;
  double t2195;
  double t2318;
  double t2454;
  double t2602;
  double t2332;
  double t2522;
  double t2557;
  double t2084;
  double t2616;
  double t2625;
  double t2651;
  double t2788;
  double t2583;
  double t2690;
  double t2740;
  double t2063;
  double t2822;
  double t2834;
  double t2836;
  double t3003;
  double t2743;
  double t2846;
  double t2979;
  double t2046;
  double t3036;
  double t3041;
  double t3062;
  double t318;
  double t219;
  double t1435;
  double t3280;
  double t3296;
  double t3300;
  double t3343;
  double t3381;
  double t3383;
  double t3329;
  double t3386;
  double t3398;
  double t3458;
  double t3516;
  double t3528;
  double t3434;
  double t3531;
  double t3532;
  double t3543;
  double t3555;
  double t3563;
  double t3539;
  double t3610;
  double t3614;
  double t3670;
  double t3679;
  double t3726;
  double t3817;
  double t3834;
  double t3840;
  double t3851;
  double t3863;
  double t3879;
  double t3846;
  double t3881;
  double t3896;
  double t3926;
  double t3935;
  double t3938;
  double t3925;
  double t3951;
  double t3974;
  double t3982;
  double t3991;
  double t3994;
  double t3980;
  double t4002;
  double t4004;
  double t4033;
  double t4034;
  double t4045;
  double t2982;
  double t3127;
  double t3141;
  double t3195;
  double t3202;
  double t3206;
  double t3643;
  double t3730;
  double t3737;
  double t3756;
  double t3759;
  double t3801;
  double t4028;
  double t4060;
  double t4064;
  double t4076;
  double t4079;
  double t4091;
  t465 = Cos(var1[1]);
  t2405 = Cos(var1[3]);
  t2195 = Cos(var1[2]);
  t2318 = Sin(var1[3]);
  t2454 = Sin(var1[2]);
  t2602 = Cos(var1[4]);
  t2332 = -1.*t465*t2195*t2318;
  t2522 = -1.*t2405*t465*t2454;
  t2557 = t2332 + t2522;
  t2084 = Sin(var1[4]);
  t2616 = t2405*t465*t2195;
  t2625 = -1.*t465*t2318*t2454;
  t2651 = t2616 + t2625;
  t2788 = Cos(var1[5]);
  t2583 = t2084*t2557;
  t2690 = t2602*t2651;
  t2740 = t2583 + t2690;
  t2063 = Sin(var1[5]);
  t2822 = t2602*t2557;
  t2834 = -1.*t2084*t2651;
  t2836 = t2822 + t2834;
  t3003 = Cos(var1[6]);
  t2743 = -1.*t2063*t2740;
  t2846 = t2788*t2836;
  t2979 = t2743 + t2846;
  t2046 = Sin(var1[6]);
  t3036 = t2788*t2740;
  t3041 = t2063*t2836;
  t3062 = t3036 + t3041;
  t318 = Cos(var1[0]);
  t219 = Sin(var1[1]);
  t1435 = Sin(var1[0]);
  t3280 = t318*t2195*t219;
  t3296 = -1.*t1435*t2454;
  t3300 = t3280 + t3296;
  t3343 = -1.*t2195*t1435;
  t3381 = -1.*t318*t219*t2454;
  t3383 = t3343 + t3381;
  t3329 = -1.*t2318*t3300;
  t3386 = t2405*t3383;
  t3398 = t3329 + t3386;
  t3458 = t2405*t3300;
  t3516 = t2318*t3383;
  t3528 = t3458 + t3516;
  t3434 = t2084*t3398;
  t3531 = t2602*t3528;
  t3532 = t3434 + t3531;
  t3543 = t2602*t3398;
  t3555 = -1.*t2084*t3528;
  t3563 = t3543 + t3555;
  t3539 = -1.*t2063*t3532;
  t3610 = t2788*t3563;
  t3614 = t3539 + t3610;
  t3670 = t2788*t3532;
  t3679 = t2063*t3563;
  t3726 = t3670 + t3679;
  t3817 = t2195*t1435*t219;
  t3834 = t318*t2454;
  t3840 = t3817 + t3834;
  t3851 = t318*t2195;
  t3863 = -1.*t1435*t219*t2454;
  t3879 = t3851 + t3863;
  t3846 = -1.*t2318*t3840;
  t3881 = t2405*t3879;
  t3896 = t3846 + t3881;
  t3926 = t2405*t3840;
  t3935 = t2318*t3879;
  t3938 = t3926 + t3935;
  t3925 = t2084*t3896;
  t3951 = t2602*t3938;
  t3974 = t3925 + t3951;
  t3982 = t2602*t3896;
  t3991 = -1.*t2084*t3938;
  t3994 = t3982 + t3991;
  t3980 = -1.*t2063*t3974;
  t4002 = t2788*t3994;
  t4004 = t3980 + t4002;
  t4033 = t2788*t3974;
  t4034 = t2063*t3994;
  t4045 = t4033 + t4034;
  t2982 = t2046*t2979;
  t3127 = t3003*t3062;
  t3141 = t2982 + t3127;
  t3195 = t3003*t2979;
  t3202 = -1.*t2046*t3062;
  t3206 = t3195 + t3202;
  t3643 = t2046*t3614;
  t3730 = t3003*t3726;
  t3737 = t3643 + t3730;
  t3756 = t3003*t3614;
  t3759 = -1.*t2046*t3726;
  t3801 = t3756 + t3759;
  t4028 = t2046*t4004;
  t4060 = t3003*t4045;
  t4064 = t4028 + t4060;
  t4076 = t3003*t4004;
  t4079 = -1.*t2046*t4045;
  t4091 = t4076 + t4079;

  p_output1(0)=0. + t219;
  p_output1(1)=0. - 1.*t318*t465;
  p_output1(2)=0. - 1.*t1435*t465;
  p_output1(3)=0. + 0.642788*t3141 + 0.766044*t3206;
  p_output1(4)=0. + 0.642788*t3737 + 0.766044*t3801;
  p_output1(5)=0. + 0.642788*t4064 + 0.766044*t4091;
  p_output1(6)=0. - 0.766044*t3141 + 0.642788*t3206;
  p_output1(7)=0. - 0.766044*t3737 + 0.642788*t3801;
  p_output1(8)=0. - 0.766044*t4064 + 0.642788*t4091;
}


       
Eigen::Matrix<double,3,3> R_VectorNav_to_LeftToeBottom(const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



