/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:20:56 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeBack_src.h"

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
  double t55;
  double t1651;
  double t1835;
  double t1672;
  double t1885;
  double t346;
  double t360;
  double t459;
  double t744;
  double t1549;
  double t1718;
  double t2059;
  double t2141;
  double t2286;
  double t2415;
  double t2428;
  double t2429;
  double t212;
  double t2700;
  double t2729;
  double t2758;
  double t2862;
  double t2924;
  double t2985;
  double t3026;
  double t3103;
  double t3104;
  double t3115;
  double t3437;
  double t3440;
  double t3490;
  double t3525;
  double t3553;
  double t3559;
  double t3580;
  double t3683;
  double t3703;
  double t3716;
  double t3800;
  double t3812;
  double t3813;
  double t3837;
  double t3838;
  double t3841;
  double t3862;
  double t3881;
  double t3885;
  double t3900;
  double t3945;
  double t3947;
  double t3959;
  double t3974;
  double t3987;
  double t3993;
  double t4012;
  double t4025;
  double t4030;
  double t4056;
  double t4099;
  double t4109;
  double t4121;
  double t4174;
  double t4180;
  double t4182;
  double t4186;
  double t4198;
  double t4199;
  double t4202;
  double t4218;
  double t4221;
  double t4223;
  double t507;
  double t905;
  double t1394;
  double t1627;
  double t1639;
  double t2294;
  double t2307;
  double t2323;
  double t2325;
  double t2534;
  double t2622;
  double t2669;
  double t4308;
  double t4315;
  double t4317;
  double t4337;
  double t4360;
  double t4373;
  double t3007;
  double t3057;
  double t3090;
  double t4401;
  double t4403;
  double t4404;
  double t3266;
  double t3302;
  double t3410;
  double t3569;
  double t3605;
  double t3607;
  double t4458;
  double t4459;
  double t4466;
  double t4507;
  double t4509;
  double t4516;
  double t3740;
  double t3759;
  double t3760;
  double t3848;
  double t3875;
  double t3879;
  double t4546;
  double t4561;
  double t4565;
  double t4572;
  double t4578;
  double t4588;
  double t3905;
  double t3906;
  double t3915;
  double t3999;
  double t4023;
  double t4024;
  double t4615;
  double t4653;
  double t4662;
  double t4717;
  double t4725;
  double t4728;
  double t4059;
  double t4073;
  double t4077;
  double t4183;
  double t4191;
  double t4192;
  double t4753;
  double t4754;
  double t4769;
  double t4802;
  double t4823;
  double t4855;
  double t4205;
  double t4209;
  double t4213;
  double t4884;
  double t4888;
  double t4891;
  double t4919;
  double t4935;
  double t4938;
  double t5147;
  double t5156;
  double t5165;
  double t5191;
  double t5217;
  double t5221;
  double t5345;
  double t5354;
  double t5366;
  double t5377;
  double t5379;
  double t5399;
  double t5424;
  double t5427;
  double t5431;
  double t5436;
  double t5444;
  double t5446;
  double t5463;
  double t5467;
  double t5471;
  double t5486;
  double t5503;
  double t5516;
  double t5525;
  double t5526;
  double t5553;
  double t5564;
  double t5568;
  double t5582;
  double t5593;
  double t5606;
  double t5607;
  t55 = Cos(var1[3]);
  t1651 = Cos(var1[5]);
  t1835 = Sin(var1[3]);
  t1672 = Sin(var1[4]);
  t1885 = Sin(var1[5]);
  t346 = Cos(var1[14]);
  t360 = -1.*t346;
  t459 = 1. + t360;
  t744 = Sin(var1[14]);
  t1549 = Sin(var1[13]);
  t1718 = t55*t1651*t1672;
  t2059 = t1835*t1885;
  t2141 = t1718 + t2059;
  t2286 = Cos(var1[13]);
  t2415 = -1.*t1651*t1835;
  t2428 = t55*t1672*t1885;
  t2429 = t2415 + t2428;
  t212 = Cos(var1[4]);
  t2700 = t1549*t2141;
  t2729 = t2286*t2429;
  t2758 = t2700 + t2729;
  t2862 = Cos(var1[15]);
  t2924 = -1.*t2862;
  t2985 = 1. + t2924;
  t3026 = Sin(var1[15]);
  t3103 = t2286*t2141;
  t3104 = -1.*t1549*t2429;
  t3115 = t3103 + t3104;
  t3437 = t346*t55*t212;
  t3440 = t744*t2758;
  t3490 = t3437 + t3440;
  t3525 = Cos(var1[16]);
  t3553 = -1.*t3525;
  t3559 = 1. + t3553;
  t3580 = Sin(var1[16]);
  t3683 = t3026*t3115;
  t3703 = t2862*t3490;
  t3716 = t3683 + t3703;
  t3800 = t2862*t3115;
  t3812 = -1.*t3026*t3490;
  t3813 = t3800 + t3812;
  t3837 = Cos(var1[17]);
  t3838 = -1.*t3837;
  t3841 = 1. + t3838;
  t3862 = Sin(var1[17]);
  t3881 = -1.*t3580*t3716;
  t3885 = t3525*t3813;
  t3900 = t3881 + t3885;
  t3945 = t3525*t3716;
  t3947 = t3580*t3813;
  t3959 = t3945 + t3947;
  t3974 = Cos(var1[18]);
  t3987 = -1.*t3974;
  t3993 = 1. + t3987;
  t4012 = Sin(var1[18]);
  t4025 = t3862*t3900;
  t4030 = t3837*t3959;
  t4056 = t4025 + t4030;
  t4099 = t3837*t3900;
  t4109 = -1.*t3862*t3959;
  t4121 = t4099 + t4109;
  t4174 = Cos(var1[19]);
  t4180 = -1.*t4174;
  t4182 = 1. + t4180;
  t4186 = Sin(var1[19]);
  t4198 = -1.*t4012*t4056;
  t4199 = t3974*t4121;
  t4202 = t4198 + t4199;
  t4218 = t3974*t4056;
  t4221 = t4012*t4121;
  t4223 = t4218 + t4221;
  t507 = -0.049*t459;
  t905 = -0.135*t744;
  t1394 = 0. + t507 + t905;
  t1627 = 0.135*t1549;
  t1639 = 0. + t1627;
  t2294 = -1.*t2286;
  t2307 = 1. + t2294;
  t2323 = -0.135*t2307;
  t2325 = 0. + t2323;
  t2534 = -0.135*t459;
  t2622 = 0.049*t744;
  t2669 = 0. + t2534 + t2622;
  t4308 = t1651*t1835*t1672;
  t4315 = -1.*t55*t1885;
  t4317 = t4308 + t4315;
  t4337 = t55*t1651;
  t4360 = t1835*t1672*t1885;
  t4373 = t4337 + t4360;
  t3007 = -0.09*t2985;
  t3057 = 0.049*t3026;
  t3090 = 0. + t3007 + t3057;
  t4401 = t1549*t4317;
  t4403 = t2286*t4373;
  t4404 = t4401 + t4403;
  t3266 = -0.049*t2985;
  t3302 = -0.09*t3026;
  t3410 = 0. + t3266 + t3302;
  t3569 = -0.049*t3559;
  t3605 = -0.21*t3580;
  t3607 = 0. + t3569 + t3605;
  t4458 = t2286*t4317;
  t4459 = -1.*t1549*t4373;
  t4466 = t4458 + t4459;
  t4507 = t346*t212*t1835;
  t4509 = t744*t4404;
  t4516 = t4507 + t4509;
  t3740 = -0.21*t3559;
  t3759 = 0.049*t3580;
  t3760 = 0. + t3740 + t3759;
  t3848 = -0.2707*t3841;
  t3875 = 0.0016*t3862;
  t3879 = 0. + t3848 + t3875;
  t4546 = t3026*t4466;
  t4561 = t2862*t4516;
  t4565 = t4546 + t4561;
  t4572 = t2862*t4466;
  t4578 = -1.*t3026*t4516;
  t4588 = t4572 + t4578;
  t3905 = -0.0016*t3841;
  t3906 = -0.2707*t3862;
  t3915 = 0. + t3905 + t3906;
  t3999 = 0.0184*t3993;
  t4023 = -0.7055*t4012;
  t4024 = 0. + t3999 + t4023;
  t4615 = -1.*t3580*t4565;
  t4653 = t3525*t4588;
  t4662 = t4615 + t4653;
  t4717 = t3525*t4565;
  t4725 = t3580*t4588;
  t4728 = t4717 + t4725;
  t4059 = -0.7055*t3993;
  t4073 = -0.0184*t4012;
  t4077 = 0. + t4059 + t4073;
  t4183 = -1.1135*t4182;
  t4191 = 0.0216*t4186;
  t4192 = 0. + t4183 + t4191;
  t4753 = t3862*t4662;
  t4754 = t3837*t4728;
  t4769 = t4753 + t4754;
  t4802 = t3837*t4662;
  t4823 = -1.*t3862*t4728;
  t4855 = t4802 + t4823;
  t4205 = -0.0216*t4182;
  t4209 = -1.1135*t4186;
  t4213 = 0. + t4205 + t4209;
  t4884 = -1.*t4012*t4769;
  t4888 = t3974*t4855;
  t4891 = t4884 + t4888;
  t4919 = t3974*t4769;
  t4935 = t4012*t4855;
  t4938 = t4919 + t4935;
  t5147 = t212*t1651*t1549;
  t5156 = t2286*t212*t1885;
  t5165 = t5147 + t5156;
  t5191 = t2286*t212*t1651;
  t5217 = -1.*t212*t1549*t1885;
  t5221 = t5191 + t5217;
  t5345 = -1.*t346*t1672;
  t5354 = t744*t5165;
  t5366 = t5345 + t5354;
  t5377 = t3026*t5221;
  t5379 = t2862*t5366;
  t5399 = t5377 + t5379;
  t5424 = t2862*t5221;
  t5427 = -1.*t3026*t5366;
  t5431 = t5424 + t5427;
  t5436 = -1.*t3580*t5399;
  t5444 = t3525*t5431;
  t5446 = t5436 + t5444;
  t5463 = t3525*t5399;
  t5467 = t3580*t5431;
  t5471 = t5463 + t5467;
  t5486 = t3862*t5446;
  t5503 = t3837*t5471;
  t5516 = t5486 + t5503;
  t5525 = t3837*t5446;
  t5526 = -1.*t3862*t5471;
  t5553 = t5525 + t5526;
  t5564 = -1.*t4012*t5516;
  t5568 = t3974*t5553;
  t5582 = t5564 + t5568;
  t5593 = t3974*t5516;
  t5606 = t4012*t5553;
  t5607 = t5593 + t5606;
  p_output1[0]=0. + t1639*t2141 + t2325*t2429 + t2669*t2758 + t3090*t3115 + t3410*t3490 + t3607*t3716 + t3760*t3813 + t3879*t3900 + t3915*t3959 + t4024*t4056 + t4077*t4121 + t4192*t4202 + t4213*t4223 - 0.027251*(t4186*t4202 + t4174*t4223) - 1.200144*(t4174*t4202 - 1.*t4186*t4223) + t1394*t212*t55 - 0.1305*(t2758*t346 - 1.*t212*t55*t744) + var1[0];
  p_output1[1]=0. + t1394*t1835*t212 + t1639*t4317 + t2325*t4373 + t2669*t4404 + t3090*t4466 + t3410*t4516 + t3607*t4565 + t3760*t4588 + t3879*t4662 + t3915*t4728 + t4024*t4769 + t4077*t4855 + t4192*t4891 + t4213*t4938 - 0.027251*(t4186*t4891 + t4174*t4938) - 1.200144*(t4174*t4891 - 1.*t4186*t4938) - 0.1305*(t346*t4404 - 1.*t1835*t212*t744) + var1[1];
  p_output1[2]=0. - 1.*t1394*t1672 + t1639*t1651*t212 + t1885*t212*t2325 + t2669*t5165 + t3090*t5221 + t3410*t5366 + t3607*t5399 + t3760*t5431 + t3879*t5446 + t3915*t5471 + t4024*t5516 + t4077*t5553 + t4192*t5582 + t4213*t5607 - 0.027251*(t4186*t5582 + t4174*t5607) - 1.200144*(t4174*t5582 - 1.*t4186*t5607) - 0.1305*(t346*t5165 + t1672*t744) + var1[2];
}



void p_RightToeBack_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
