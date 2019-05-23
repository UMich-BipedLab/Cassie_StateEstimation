/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:11:47 GMT-04:00
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
  double t652;
  double t2570;
  double t2360;
  double t2435;
  double t2585;
  double t2740;
  double t2515;
  double t2592;
  double t2606;
  double t2280;
  double t2741;
  double t2749;
  double t2763;
  double t2927;
  double t2650;
  double t2795;
  double t2811;
  double t2105;
  double t2957;
  double t3001;
  double t3017;
  double t3054;
  double t2823;
  double t3031;
  double t3042;
  double t2101;
  double t3105;
  double t3112;
  double t3116;
  double t545;
  double t150;
  double t1411;
  double t3328;
  double t3362;
  double t3427;
  double t3464;
  double t3490;
  double t3504;
  double t3446;
  double t3506;
  double t3535;
  double t3583;
  double t3585;
  double t3586;
  double t3559;
  double t3613;
  double t3616;
  double t3630;
  double t3640;
  double t3642;
  double t3620;
  double t3665;
  double t3730;
  double t3789;
  double t3835;
  double t3841;
  double t3947;
  double t3950;
  double t3952;
  double t4000;
  double t4013;
  double t4017;
  double t3968;
  double t4032;
  double t4033;
  double t4065;
  double t4067;
  double t4081;
  double t4040;
  double t4087;
  double t4102;
  double t4111;
  double t4112;
  double t4127;
  double t4106;
  double t4164;
  double t4165;
  double t4179;
  double t4182;
  double t4185;
  double t3053;
  double t3118;
  double t3121;
  double t3238;
  double t3281;
  double t3282;
  double t3762;
  double t3853;
  double t3855;
  double t3876;
  double t3903;
  double t3920;
  double t4167;
  double t4187;
  double t4191;
  double t4207;
  double t4213;
  double t4217;
  t652 = Cos(var1[1]);
  t2570 = Cos(var1[3]);
  t2360 = Cos(var1[2]);
  t2435 = Sin(var1[3]);
  t2585 = Sin(var1[2]);
  t2740 = Cos(var1[4]);
  t2515 = -1.*t652*t2360*t2435;
  t2592 = -1.*t2570*t652*t2585;
  t2606 = t2515 + t2592;
  t2280 = Sin(var1[4]);
  t2741 = t2570*t652*t2360;
  t2749 = -1.*t652*t2435*t2585;
  t2763 = t2741 + t2749;
  t2927 = Cos(var1[5]);
  t2650 = t2280*t2606;
  t2795 = t2740*t2763;
  t2811 = t2650 + t2795;
  t2105 = Sin(var1[5]);
  t2957 = t2740*t2606;
  t3001 = -1.*t2280*t2763;
  t3017 = t2957 + t3001;
  t3054 = Cos(var1[6]);
  t2823 = -1.*t2105*t2811;
  t3031 = t2927*t3017;
  t3042 = t2823 + t3031;
  t2101 = Sin(var1[6]);
  t3105 = t2927*t2811;
  t3112 = t2105*t3017;
  t3116 = t3105 + t3112;
  t545 = Cos(var1[0]);
  t150 = Sin(var1[1]);
  t1411 = Sin(var1[0]);
  t3328 = t545*t2360*t150;
  t3362 = -1.*t1411*t2585;
  t3427 = t3328 + t3362;
  t3464 = -1.*t2360*t1411;
  t3490 = -1.*t545*t150*t2585;
  t3504 = t3464 + t3490;
  t3446 = -1.*t2435*t3427;
  t3506 = t2570*t3504;
  t3535 = t3446 + t3506;
  t3583 = t2570*t3427;
  t3585 = t2435*t3504;
  t3586 = t3583 + t3585;
  t3559 = t2280*t3535;
  t3613 = t2740*t3586;
  t3616 = t3559 + t3613;
  t3630 = t2740*t3535;
  t3640 = -1.*t2280*t3586;
  t3642 = t3630 + t3640;
  t3620 = -1.*t2105*t3616;
  t3665 = t2927*t3642;
  t3730 = t3620 + t3665;
  t3789 = t2927*t3616;
  t3835 = t2105*t3642;
  t3841 = t3789 + t3835;
  t3947 = t2360*t1411*t150;
  t3950 = t545*t2585;
  t3952 = t3947 + t3950;
  t4000 = t545*t2360;
  t4013 = -1.*t1411*t150*t2585;
  t4017 = t4000 + t4013;
  t3968 = -1.*t2435*t3952;
  t4032 = t2570*t4017;
  t4033 = t3968 + t4032;
  t4065 = t2570*t3952;
  t4067 = t2435*t4017;
  t4081 = t4065 + t4067;
  t4040 = t2280*t4033;
  t4087 = t2740*t4081;
  t4102 = t4040 + t4087;
  t4111 = t2740*t4033;
  t4112 = -1.*t2280*t4081;
  t4127 = t4111 + t4112;
  t4106 = -1.*t2105*t4102;
  t4164 = t2927*t4127;
  t4165 = t4106 + t4164;
  t4179 = t2927*t4102;
  t4182 = t2105*t4127;
  t4185 = t4179 + t4182;
  t3053 = t2101*t3042;
  t3118 = t3054*t3116;
  t3121 = t3053 + t3118;
  t3238 = t3054*t3042;
  t3281 = -1.*t2101*t3116;
  t3282 = t3238 + t3281;
  t3762 = t2101*t3730;
  t3853 = t3054*t3841;
  t3855 = t3762 + t3853;
  t3876 = t3054*t3730;
  t3903 = -1.*t2101*t3841;
  t3920 = t3876 + t3903;
  t4167 = t2101*t4165;
  t4187 = t3054*t4185;
  t4191 = t4167 + t4187;
  t4207 = t3054*t4165;
  t4213 = -1.*t2101*t4185;
  t4217 = t4207 + t4213;

  p_output1(0)=0. + t150;
  p_output1(1)=0. - 1.*t545*t652;
  p_output1(2)=0. - 1.*t1411*t652;
  p_output1(3)=0. + 0.642788*t3121 + 0.766044*t3282;
  p_output1(4)=0. + 0.642788*t3855 + 0.766044*t3920;
  p_output1(5)=0. + 0.642788*t4191 + 0.766044*t4217;
  p_output1(6)=0. - 0.766044*t3121 + 0.642788*t3282;
  p_output1(7)=0. - 0.766044*t3855 + 0.642788*t3920;
  p_output1(8)=0. - 0.766044*t4191 + 0.642788*t4217;
}


       
Eigen::Matrix<double,3,3> R_VectorNav_to_LeftToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void R_VectorNav_to_LeftToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



