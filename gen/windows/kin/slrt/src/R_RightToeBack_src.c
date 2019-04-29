/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:21:00 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBack_src.h"

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
  double t228;
  double t718;
  double t803;
  double t726;
  double t852;
  double t434;
  double t496;
  double t643;
  double t697;
  double t910;
  double t747;
  double t873;
  double t896;
  double t932;
  double t961;
  double t973;
  double t903;
  double t1012;
  double t1024;
  double t2449;
  double t2378;
  double t2384;
  double t2395;
  double t2361;
  double t2492;
  double t2555;
  double t2577;
  double t2751;
  double t2428;
  double t2638;
  double t2685;
  double t2310;
  double t2794;
  double t2805;
  double t2865;
  double t2997;
  double t2710;
  double t2871;
  double t2903;
  double t2293;
  double t3036;
  double t3060;
  double t3069;
  double t3117;
  double t2926;
  double t3083;
  double t3093;
  double t2233;
  double t3128;
  double t3150;
  double t3201;
  double t3380;
  double t3096;
  double t3231;
  double t3287;
  double t2138;
  double t3388;
  double t3395;
  double t3402;
  double t1226;
  double t1248;
  double t1273;
  double t1309;
  double t1317;
  double t1321;
  double t1277;
  double t1325;
  double t1373;
  double t3641;
  double t3647;
  double t3661;
  double t3760;
  double t3762;
  double t3774;
  double t3740;
  double t3827;
  double t3855;
  double t3870;
  double t3905;
  double t3960;
  double t3866;
  double t3962;
  double t3971;
  double t4026;
  double t4037;
  double t4041;
  double t4008;
  double t4043;
  double t4047;
  double t4097;
  double t4136;
  double t4158;
  double t4076;
  double t4159;
  double t4199;
  double t4238;
  double t4253;
  double t4260;
  double t1845;
  double t1947;
  double t1958;
  double t4358;
  double t4367;
  double t4370;
  double t4399;
  double t4402;
  double t4455;
  double t4389;
  double t4472;
  double t4488;
  double t4498;
  double t4503;
  double t4509;
  double t4492;
  double t4513;
  double t4546;
  double t4572;
  double t4587;
  double t4591;
  double t4555;
  double t4599;
  double t4621;
  double t4662;
  double t4668;
  double t4675;
  double t4639;
  double t4679;
  double t4698;
  double t4715;
  double t4727;
  double t4737;
  double t3353;
  double t3410;
  double t3451;
  double t3532;
  double t3578;
  double t3582;
  double t4207;
  double t4269;
  double t4276;
  double t4309;
  double t4314;
  double t4329;
  double t4714;
  double t4743;
  double t4754;
  double t4774;
  double t4784;
  double t4794;
  t228 = Cos(var1[3]);
  t718 = Cos(var1[5]);
  t803 = Sin(var1[3]);
  t726 = Sin(var1[4]);
  t852 = Sin(var1[5]);
  t434 = Cos(var1[4]);
  t496 = Sin(var1[14]);
  t643 = Cos(var1[14]);
  t697 = Sin(var1[13]);
  t910 = Cos(var1[13]);
  t747 = t228*t718*t726;
  t873 = t803*t852;
  t896 = t747 + t873;
  t932 = -1.*t718*t803;
  t961 = t228*t726*t852;
  t973 = t932 + t961;
  t903 = t697*t896;
  t1012 = t910*t973;
  t1024 = t903 + t1012;
  t2449 = Cos(var1[15]);
  t2378 = t910*t896;
  t2384 = -1.*t697*t973;
  t2395 = t2378 + t2384;
  t2361 = Sin(var1[15]);
  t2492 = t643*t228*t434;
  t2555 = t496*t1024;
  t2577 = t2492 + t2555;
  t2751 = Cos(var1[16]);
  t2428 = t2361*t2395;
  t2638 = t2449*t2577;
  t2685 = t2428 + t2638;
  t2310 = Sin(var1[16]);
  t2794 = t2449*t2395;
  t2805 = -1.*t2361*t2577;
  t2865 = t2794 + t2805;
  t2997 = Cos(var1[17]);
  t2710 = -1.*t2310*t2685;
  t2871 = t2751*t2865;
  t2903 = t2710 + t2871;
  t2293 = Sin(var1[17]);
  t3036 = t2751*t2685;
  t3060 = t2310*t2865;
  t3069 = t3036 + t3060;
  t3117 = Cos(var1[18]);
  t2926 = t2293*t2903;
  t3083 = t2997*t3069;
  t3093 = t2926 + t3083;
  t2233 = Sin(var1[18]);
  t3128 = t2997*t2903;
  t3150 = -1.*t2293*t3069;
  t3201 = t3128 + t3150;
  t3380 = Cos(var1[19]);
  t3096 = -1.*t2233*t3093;
  t3231 = t3117*t3201;
  t3287 = t3096 + t3231;
  t2138 = Sin(var1[19]);
  t3388 = t3117*t3093;
  t3395 = t2233*t3201;
  t3402 = t3388 + t3395;
  t1226 = t718*t803*t726;
  t1248 = -1.*t228*t852;
  t1273 = t1226 + t1248;
  t1309 = t228*t718;
  t1317 = t803*t726*t852;
  t1321 = t1309 + t1317;
  t1277 = t697*t1273;
  t1325 = t910*t1321;
  t1373 = t1277 + t1325;
  t3641 = t910*t1273;
  t3647 = -1.*t697*t1321;
  t3661 = t3641 + t3647;
  t3760 = t643*t434*t803;
  t3762 = t496*t1373;
  t3774 = t3760 + t3762;
  t3740 = t2361*t3661;
  t3827 = t2449*t3774;
  t3855 = t3740 + t3827;
  t3870 = t2449*t3661;
  t3905 = -1.*t2361*t3774;
  t3960 = t3870 + t3905;
  t3866 = -1.*t2310*t3855;
  t3962 = t2751*t3960;
  t3971 = t3866 + t3962;
  t4026 = t2751*t3855;
  t4037 = t2310*t3960;
  t4041 = t4026 + t4037;
  t4008 = t2293*t3971;
  t4043 = t2997*t4041;
  t4047 = t4008 + t4043;
  t4097 = t2997*t3971;
  t4136 = -1.*t2293*t4041;
  t4158 = t4097 + t4136;
  t4076 = -1.*t2233*t4047;
  t4159 = t3117*t4158;
  t4199 = t4076 + t4159;
  t4238 = t3117*t4047;
  t4253 = t2233*t4158;
  t4260 = t4238 + t4253;
  t1845 = t434*t718*t697;
  t1947 = t910*t434*t852;
  t1958 = t1845 + t1947;
  t4358 = t910*t434*t718;
  t4367 = -1.*t434*t697*t852;
  t4370 = t4358 + t4367;
  t4399 = -1.*t643*t726;
  t4402 = t496*t1958;
  t4455 = t4399 + t4402;
  t4389 = t2361*t4370;
  t4472 = t2449*t4455;
  t4488 = t4389 + t4472;
  t4498 = t2449*t4370;
  t4503 = -1.*t2361*t4455;
  t4509 = t4498 + t4503;
  t4492 = -1.*t2310*t4488;
  t4513 = t2751*t4509;
  t4546 = t4492 + t4513;
  t4572 = t2751*t4488;
  t4587 = t2310*t4509;
  t4591 = t4572 + t4587;
  t4555 = t2293*t4546;
  t4599 = t2997*t4591;
  t4621 = t4555 + t4599;
  t4662 = t2997*t4546;
  t4668 = -1.*t2293*t4591;
  t4675 = t4662 + t4668;
  t4639 = -1.*t2233*t4621;
  t4679 = t3117*t4675;
  t4698 = t4639 + t4679;
  t4715 = t3117*t4621;
  t4727 = t2233*t4675;
  t4737 = t4715 + t4727;
  t3353 = t2138*t3287;
  t3410 = t3380*t3402;
  t3451 = t3353 + t3410;
  t3532 = t3380*t3287;
  t3578 = -1.*t2138*t3402;
  t3582 = t3532 + t3578;
  t4207 = t2138*t4199;
  t4269 = t3380*t4260;
  t4276 = t4207 + t4269;
  t4309 = t3380*t4199;
  t4314 = -1.*t2138*t4260;
  t4329 = t4309 + t4314;
  t4714 = t2138*t4698;
  t4743 = t3380*t4737;
  t4754 = t4714 + t4743;
  t4774 = t3380*t4698;
  t4784 = -1.*t2138*t4737;
  t4794 = t4774 + t4784;
  p_output1[0]=t228*t434*t496 - 1.*t1024*t643;
  p_output1[1]=-1.*t1373*t643 + t434*t496*t803;
  p_output1[2]=-1.*t1958*t643 - 1.*t496*t726;
  p_output1[3]=0.642788*t3451 + 0.766044*t3582;
  p_output1[4]=0.642788*t4276 + 0.766044*t4329;
  p_output1[5]=0.642788*t4754 + 0.766044*t4794;
  p_output1[6]=-0.766044*t3451 + 0.642788*t3582;
  p_output1[7]=-0.766044*t4276 + 0.642788*t4329;
  p_output1[8]=-0.766044*t4754 + 0.642788*t4794;
}



void R_RightToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
