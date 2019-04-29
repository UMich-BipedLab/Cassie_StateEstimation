/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:52 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBack.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t157;
  double t653;
  double t742;
  double t710;
  double t789;
  double t410;
  double t474;
  double t582;
  double t586;
  double t923;
  double t734;
  double t816;
  double t849;
  double t983;
  double t1002;
  double t1009;
  double t904;
  double t1017;
  double t1028;
  double t2024;
  double t1987;
  double t1990;
  double t1998;
  double t1968;
  double t2032;
  double t2039;
  double t2217;
  double t2317;
  double t2022;
  double t2237;
  double t2254;
  double t1936;
  double t2355;
  double t2365;
  double t2368;
  double t2445;
  double t2303;
  double t2400;
  double t2401;
  double t1906;
  double t2480;
  double t2488;
  double t2512;
  double t2591;
  double t2440;
  double t2539;
  double t2566;
  double t1860;
  double t2596;
  double t2611;
  double t2625;
  double t2721;
  double t2578;
  double t2633;
  double t2662;
  double t1813;
  double t2723;
  double t2744;
  double t2766;
  double t1164;
  double t1194;
  double t1219;
  double t1259;
  double t1282;
  double t1351;
  double t1236;
  double t1352;
  double t1363;
  double t2986;
  double t2991;
  double t3011;
  double t3066;
  double t3067;
  double t3072;
  double t3065;
  double t3080;
  double t3105;
  double t3145;
  double t3184;
  double t3195;
  double t3131;
  double t3205;
  double t3243;
  double t3310;
  double t3360;
  double t3373;
  double t3296;
  double t3400;
  double t3425;
  double t3450;
  double t3454;
  double t3472;
  double t3435;
  double t3479;
  double t3546;
  double t3599;
  double t3608;
  double t3624;
  double t1644;
  double t1705;
  double t1725;
  double t3853;
  double t3858;
  double t3862;
  double t3890;
  double t3914;
  double t3961;
  double t3874;
  double t3966;
  double t3982;
  double t3993;
  double t3994;
  double t4008;
  double t3988;
  double t4026;
  double t4070;
  double t4119;
  double t4163;
  double t4184;
  double t4111;
  double t4196;
  double t4214;
  double t4242;
  double t4248;
  double t4255;
  double t4224;
  double t4256;
  double t4257;
  double t4280;
  double t4296;
  double t4300;
  double t2678;
  double t2774;
  double t2795;
  double t2814;
  double t2831;
  double t2864;
  double t3564;
  double t3625;
  double t3636;
  double t3758;
  double t3781;
  double t3783;
  double t4271;
  double t4303;
  double t4313;
  double t4342;
  double t4361;
  double t4385;
  t157 = Cos(var1[3]);
  t653 = Cos(var1[5]);
  t742 = Sin(var1[3]);
  t710 = Sin(var1[4]);
  t789 = Sin(var1[5]);
  t410 = Cos(var1[4]);
  t474 = Sin(var1[14]);
  t582 = Cos(var1[14]);
  t586 = Sin(var1[13]);
  t923 = Cos(var1[13]);
  t734 = t157*t653*t710;
  t816 = t742*t789;
  t849 = t734 + t816;
  t983 = -1.*t653*t742;
  t1002 = t157*t710*t789;
  t1009 = t983 + t1002;
  t904 = t586*t849;
  t1017 = t923*t1009;
  t1028 = t904 + t1017;
  t2024 = Cos(var1[15]);
  t1987 = t923*t849;
  t1990 = -1.*t586*t1009;
  t1998 = t1987 + t1990;
  t1968 = Sin(var1[15]);
  t2032 = t582*t157*t410;
  t2039 = t474*t1028;
  t2217 = t2032 + t2039;
  t2317 = Cos(var1[16]);
  t2022 = t1968*t1998;
  t2237 = t2024*t2217;
  t2254 = t2022 + t2237;
  t1936 = Sin(var1[16]);
  t2355 = t2024*t1998;
  t2365 = -1.*t1968*t2217;
  t2368 = t2355 + t2365;
  t2445 = Cos(var1[17]);
  t2303 = -1.*t1936*t2254;
  t2400 = t2317*t2368;
  t2401 = t2303 + t2400;
  t1906 = Sin(var1[17]);
  t2480 = t2317*t2254;
  t2488 = t1936*t2368;
  t2512 = t2480 + t2488;
  t2591 = Cos(var1[18]);
  t2440 = t1906*t2401;
  t2539 = t2445*t2512;
  t2566 = t2440 + t2539;
  t1860 = Sin(var1[18]);
  t2596 = t2445*t2401;
  t2611 = -1.*t1906*t2512;
  t2625 = t2596 + t2611;
  t2721 = Cos(var1[19]);
  t2578 = -1.*t1860*t2566;
  t2633 = t2591*t2625;
  t2662 = t2578 + t2633;
  t1813 = Sin(var1[19]);
  t2723 = t2591*t2566;
  t2744 = t1860*t2625;
  t2766 = t2723 + t2744;
  t1164 = t653*t742*t710;
  t1194 = -1.*t157*t789;
  t1219 = t1164 + t1194;
  t1259 = t157*t653;
  t1282 = t742*t710*t789;
  t1351 = t1259 + t1282;
  t1236 = t586*t1219;
  t1352 = t923*t1351;
  t1363 = t1236 + t1352;
  t2986 = t923*t1219;
  t2991 = -1.*t586*t1351;
  t3011 = t2986 + t2991;
  t3066 = t582*t410*t742;
  t3067 = t474*t1363;
  t3072 = t3066 + t3067;
  t3065 = t1968*t3011;
  t3080 = t2024*t3072;
  t3105 = t3065 + t3080;
  t3145 = t2024*t3011;
  t3184 = -1.*t1968*t3072;
  t3195 = t3145 + t3184;
  t3131 = -1.*t1936*t3105;
  t3205 = t2317*t3195;
  t3243 = t3131 + t3205;
  t3310 = t2317*t3105;
  t3360 = t1936*t3195;
  t3373 = t3310 + t3360;
  t3296 = t1906*t3243;
  t3400 = t2445*t3373;
  t3425 = t3296 + t3400;
  t3450 = t2445*t3243;
  t3454 = -1.*t1906*t3373;
  t3472 = t3450 + t3454;
  t3435 = -1.*t1860*t3425;
  t3479 = t2591*t3472;
  t3546 = t3435 + t3479;
  t3599 = t2591*t3425;
  t3608 = t1860*t3472;
  t3624 = t3599 + t3608;
  t1644 = t410*t653*t586;
  t1705 = t923*t410*t789;
  t1725 = t1644 + t1705;
  t3853 = t923*t410*t653;
  t3858 = -1.*t410*t586*t789;
  t3862 = t3853 + t3858;
  t3890 = -1.*t582*t710;
  t3914 = t474*t1725;
  t3961 = t3890 + t3914;
  t3874 = t1968*t3862;
  t3966 = t2024*t3961;
  t3982 = t3874 + t3966;
  t3993 = t2024*t3862;
  t3994 = -1.*t1968*t3961;
  t4008 = t3993 + t3994;
  t3988 = -1.*t1936*t3982;
  t4026 = t2317*t4008;
  t4070 = t3988 + t4026;
  t4119 = t2317*t3982;
  t4163 = t1936*t4008;
  t4184 = t4119 + t4163;
  t4111 = t1906*t4070;
  t4196 = t2445*t4184;
  t4214 = t4111 + t4196;
  t4242 = t2445*t4070;
  t4248 = -1.*t1906*t4184;
  t4255 = t4242 + t4248;
  t4224 = -1.*t1860*t4214;
  t4256 = t2591*t4255;
  t4257 = t4224 + t4256;
  t4280 = t2591*t4214;
  t4296 = t1860*t4255;
  t4300 = t4280 + t4296;
  t2678 = t1813*t2662;
  t2774 = t2721*t2766;
  t2795 = t2678 + t2774;
  t2814 = t2721*t2662;
  t2831 = -1.*t1813*t2766;
  t2864 = t2814 + t2831;
  t3564 = t1813*t3546;
  t3625 = t2721*t3624;
  t3636 = t3564 + t3625;
  t3758 = t2721*t3546;
  t3781 = -1.*t1813*t3624;
  t3783 = t3758 + t3781;
  t4271 = t1813*t4257;
  t4303 = t2721*t4300;
  t4313 = t4271 + t4303;
  t4342 = t2721*t4257;
  t4361 = -1.*t1813*t4300;
  t4385 = t4342 + t4361;

  p_output1(0)=t157*t410*t474 - 1.*t1028*t582;
  p_output1(1)=-1.*t1363*t582 + t410*t474*t742;
  p_output1(2)=-1.*t1725*t582 - 1.*t474*t710;
  p_output1(3)=0.642788*t2795 + 0.766044*t2864;
  p_output1(4)=0.642788*t3636 + 0.766044*t3783;
  p_output1(5)=0.642788*t4313 + 0.766044*t4385;
  p_output1(6)=-0.766044*t2795 + 0.642788*t2864;
  p_output1(7)=-0.766044*t3636 + 0.642788*t3783;
  p_output1(8)=-0.766044*t4313 + 0.642788*t4385;
}


       
Eigen::Matrix<double,3,3> R_RightToeBack(const Eigen::Matrix<double,20,1> &var1)
//void R_RightToeBack(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



