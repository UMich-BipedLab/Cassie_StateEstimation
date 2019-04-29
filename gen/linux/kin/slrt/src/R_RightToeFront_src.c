/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:58 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeFront_src.h"

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
  double t297;
  double t943;
  double t1135;
  double t1051;
  double t1137;
  double t694;
  double t718;
  double t801;
  double t903;
  double t1469;
  double t1122;
  double t1239;
  double t1306;
  double t1503;
  double t1524;
  double t1527;
  double t1347;
  double t1570;
  double t1704;
  double t2801;
  double t2670;
  double t2683;
  double t2756;
  double t2656;
  double t2863;
  double t2885;
  double t2893;
  double t3097;
  double t2774;
  double t2974;
  double t3014;
  double t2641;
  double t3126;
  double t3130;
  double t3213;
  double t3364;
  double t3047;
  double t3272;
  double t3360;
  double t2638;
  double t3370;
  double t3445;
  double t3482;
  double t3545;
  double t3363;
  double t3487;
  double t3496;
  double t2631;
  double t3547;
  double t3549;
  double t3602;
  double t3792;
  double t3513;
  double t3653;
  double t3722;
  double t2622;
  double t3839;
  double t3840;
  double t3858;
  double t1768;
  double t1894;
  double t1903;
  double t1925;
  double t1950;
  double t2128;
  double t1923;
  double t2198;
  double t2237;
  double t4059;
  double t4071;
  double t4083;
  double t4095;
  double t4102;
  double t4140;
  double t4088;
  double t4142;
  double t4152;
  double t4168;
  double t4170;
  double t4210;
  double t4155;
  double t4228;
  double t4236;
  double t4263;
  double t4277;
  double t4280;
  double t4260;
  double t4285;
  double t4287;
  double t4384;
  double t4409;
  double t4434;
  double t4355;
  double t4453;
  double t4462;
  double t4488;
  double t4506;
  double t4528;
  double t2411;
  double t2413;
  double t2480;
  double t4594;
  double t4624;
  double t4655;
  double t4670;
  double t4672;
  double t4680;
  double t4656;
  double t4700;
  double t4704;
  double t4742;
  double t4745;
  double t4747;
  double t4735;
  double t4752;
  double t4753;
  double t4761;
  double t4765;
  double t4827;
  double t4754;
  double t4845;
  double t4847;
  double t4873;
  double t4885;
  double t4888;
  double t4848;
  double t4890;
  double t4905;
  double t4919;
  double t4920;
  double t4930;
  double t3743;
  double t3881;
  double t3964;
  double t4026;
  double t4035;
  double t4050;
  double t4481;
  double t4529;
  double t4534;
  double t4560;
  double t4564;
  double t4569;
  double t4909;
  double t4934;
  double t4946;
  double t4954;
  double t4955;
  double t4962;
  t297 = Cos(var1[3]);
  t943 = Cos(var1[5]);
  t1135 = Sin(var1[3]);
  t1051 = Sin(var1[4]);
  t1137 = Sin(var1[5]);
  t694 = Cos(var1[4]);
  t718 = Sin(var1[14]);
  t801 = Cos(var1[14]);
  t903 = Sin(var1[13]);
  t1469 = Cos(var1[13]);
  t1122 = t297*t943*t1051;
  t1239 = t1135*t1137;
  t1306 = t1122 + t1239;
  t1503 = -1.*t943*t1135;
  t1524 = t297*t1051*t1137;
  t1527 = t1503 + t1524;
  t1347 = t903*t1306;
  t1570 = t1469*t1527;
  t1704 = t1347 + t1570;
  t2801 = Cos(var1[15]);
  t2670 = t1469*t1306;
  t2683 = -1.*t903*t1527;
  t2756 = t2670 + t2683;
  t2656 = Sin(var1[15]);
  t2863 = t801*t297*t694;
  t2885 = t718*t1704;
  t2893 = t2863 + t2885;
  t3097 = Cos(var1[16]);
  t2774 = t2656*t2756;
  t2974 = t2801*t2893;
  t3014 = t2774 + t2974;
  t2641 = Sin(var1[16]);
  t3126 = t2801*t2756;
  t3130 = -1.*t2656*t2893;
  t3213 = t3126 + t3130;
  t3364 = Cos(var1[17]);
  t3047 = -1.*t2641*t3014;
  t3272 = t3097*t3213;
  t3360 = t3047 + t3272;
  t2638 = Sin(var1[17]);
  t3370 = t3097*t3014;
  t3445 = t2641*t3213;
  t3482 = t3370 + t3445;
  t3545 = Cos(var1[18]);
  t3363 = t2638*t3360;
  t3487 = t3364*t3482;
  t3496 = t3363 + t3487;
  t2631 = Sin(var1[18]);
  t3547 = t3364*t3360;
  t3549 = -1.*t2638*t3482;
  t3602 = t3547 + t3549;
  t3792 = Cos(var1[19]);
  t3513 = -1.*t2631*t3496;
  t3653 = t3545*t3602;
  t3722 = t3513 + t3653;
  t2622 = Sin(var1[19]);
  t3839 = t3545*t3496;
  t3840 = t2631*t3602;
  t3858 = t3839 + t3840;
  t1768 = t943*t1135*t1051;
  t1894 = -1.*t297*t1137;
  t1903 = t1768 + t1894;
  t1925 = t297*t943;
  t1950 = t1135*t1051*t1137;
  t2128 = t1925 + t1950;
  t1923 = t903*t1903;
  t2198 = t1469*t2128;
  t2237 = t1923 + t2198;
  t4059 = t1469*t1903;
  t4071 = -1.*t903*t2128;
  t4083 = t4059 + t4071;
  t4095 = t801*t694*t1135;
  t4102 = t718*t2237;
  t4140 = t4095 + t4102;
  t4088 = t2656*t4083;
  t4142 = t2801*t4140;
  t4152 = t4088 + t4142;
  t4168 = t2801*t4083;
  t4170 = -1.*t2656*t4140;
  t4210 = t4168 + t4170;
  t4155 = -1.*t2641*t4152;
  t4228 = t3097*t4210;
  t4236 = t4155 + t4228;
  t4263 = t3097*t4152;
  t4277 = t2641*t4210;
  t4280 = t4263 + t4277;
  t4260 = t2638*t4236;
  t4285 = t3364*t4280;
  t4287 = t4260 + t4285;
  t4384 = t3364*t4236;
  t4409 = -1.*t2638*t4280;
  t4434 = t4384 + t4409;
  t4355 = -1.*t2631*t4287;
  t4453 = t3545*t4434;
  t4462 = t4355 + t4453;
  t4488 = t3545*t4287;
  t4506 = t2631*t4434;
  t4528 = t4488 + t4506;
  t2411 = t694*t943*t903;
  t2413 = t1469*t694*t1137;
  t2480 = t2411 + t2413;
  t4594 = t1469*t694*t943;
  t4624 = -1.*t694*t903*t1137;
  t4655 = t4594 + t4624;
  t4670 = -1.*t801*t1051;
  t4672 = t718*t2480;
  t4680 = t4670 + t4672;
  t4656 = t2656*t4655;
  t4700 = t2801*t4680;
  t4704 = t4656 + t4700;
  t4742 = t2801*t4655;
  t4745 = -1.*t2656*t4680;
  t4747 = t4742 + t4745;
  t4735 = -1.*t2641*t4704;
  t4752 = t3097*t4747;
  t4753 = t4735 + t4752;
  t4761 = t3097*t4704;
  t4765 = t2641*t4747;
  t4827 = t4761 + t4765;
  t4754 = t2638*t4753;
  t4845 = t3364*t4827;
  t4847 = t4754 + t4845;
  t4873 = t3364*t4753;
  t4885 = -1.*t2638*t4827;
  t4888 = t4873 + t4885;
  t4848 = -1.*t2631*t4847;
  t4890 = t3545*t4888;
  t4905 = t4848 + t4890;
  t4919 = t3545*t4847;
  t4920 = t2631*t4888;
  t4930 = t4919 + t4920;
  t3743 = t2622*t3722;
  t3881 = t3792*t3858;
  t3964 = t3743 + t3881;
  t4026 = t3792*t3722;
  t4035 = -1.*t2622*t3858;
  t4050 = t4026 + t4035;
  t4481 = t2622*t4462;
  t4529 = t3792*t4528;
  t4534 = t4481 + t4529;
  t4560 = t3792*t4462;
  t4564 = -1.*t2622*t4528;
  t4569 = t4560 + t4564;
  t4909 = t2622*t4905;
  t4934 = t3792*t4930;
  t4946 = t4909 + t4934;
  t4954 = t3792*t4905;
  t4955 = -1.*t2622*t4930;
  t4962 = t4954 + t4955;
  p_output1[0]=t297*t694*t718 - 1.*t1704*t801;
  p_output1[1]=t1135*t694*t718 - 1.*t2237*t801;
  p_output1[2]=-1.*t1051*t718 - 1.*t2480*t801;
  p_output1[3]=0.642788*t3964 + 0.766044*t4050;
  p_output1[4]=0.642788*t4534 + 0.766044*t4569;
  p_output1[5]=0.642788*t4946 + 0.766044*t4962;
  p_output1[6]=-0.766044*t3964 + 0.642788*t4050;
  p_output1[7]=-0.766044*t4534 + 0.642788*t4569;
  p_output1[8]=-0.766044*t4946 + 0.642788*t4962;
}



void R_RightToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
