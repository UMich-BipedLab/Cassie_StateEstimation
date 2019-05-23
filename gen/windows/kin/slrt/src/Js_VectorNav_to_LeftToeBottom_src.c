/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:20:03 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_VectorNav_to_LeftToeBottom_src.h"

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
  double t375;
  double t80;
  double t160;
  double t330;
  double t403;
  double t1652;
  double t1814;
  double t1820;
  double t454;
  double t579;
  double t625;
  double t1588;
  double t957;
  double t2110;
  double t2175;
  double t2290;
  double t2346;
  double t2360;
  double t1835;
  double t1877;
  double t1620;
  double t1111;
  double t2089;
  double t2572;
  double t3417;
  double t3434;
  double t3438;
  double t3447;
  double t2397;
  double t3439;
  double t3460;
  double t3464;
  double t3489;
  double t3494;
  double t3503;
  double t2956;
  double t3204;
  double t2968;
  double t3005;
  double t3161;
  double t3173;
  double t3219;
  double t3225;
  double t3255;
  double t3343;
  double t3356;
  double t4120;
  double t4070;
  double t3572;
  double t3586;
  double t3773;
  double t3774;
  double t3782;
  double t4183;
  double t4190;
  double t3815;
  double t3819;
  double t3832;
  double t3482;
  double t3511;
  double t4192;
  double t4195;
  double t4201;
  double t3964;
  double t3973;
  double t3987;
  double t4209;
  double t4223;
  double t4231;
  double t4016;
  double t4023;
  double t4033;
  double t3717;
  double t3749;
  double t3756;
  double t3894;
  double t3928;
  double t3934;
  double t4117;
  double t4122;
  double t4133;
  double t4162;
  double t4163;
  double t4175;
  double t4612;
  double t4608;
  double t4204;
  double t4235;
  double t4323;
  double t4329;
  double t4332;
  double t4695;
  double t4698;
  double t4347;
  double t4365;
  double t4375;
  double t4271;
  double t4274;
  double t4714;
  double t4723;
  double t4724;
  double t4522;
  double t4528;
  double t4532;
  double t4739;
  double t4754;
  double t4763;
  double t4540;
  double t4559;
  double t4568;
  double t4301;
  double t4310;
  double t4386;
  double t4390;
  double t4453;
  double t4455;
  double t4479;
  double t4493;
  double t4609;
  double t4636;
  double t4648;
  double t4660;
  double t4664;
  double t4676;
  double t4993;
  double t4986;
  double t4727;
  double t4767;
  double t4843;
  double t4888;
  double t4890;
  double t5011;
  double t5017;
  double t4904;
  double t4908;
  double t4913;
  double t4799;
  double t4803;
  double t5018;
  double t5025;
  double t5026;
  double t4960;
  double t4962;
  double t4964;
  double t5036;
  double t5041;
  double t5046;
  double t4967;
  double t4968;
  double t4974;
  double t4816;
  double t4819;
  double t4919;
  double t4922;
  double t4944;
  double t4946;
  double t4950;
  double t4952;
  t375 = Cos(var1[0]);
  t80 = Sin(var1[0]);
  t160 = -1.*t80;
  t330 = 0. + t160;
  t403 = 0. + t375;
  t1652 = Cos(var1[1]);
  t1814 = -1.*t375*t1652;
  t1820 = 0. + t1814;
  t454 = -1.*t375;
  t579 = 1. + t454;
  t625 = 0.135*t579;
  t1588 = Sin(var1[1]);
  t957 = 0.135*t80;
  t2110 = -1.*t1652;
  t2175 = 1. + t2110;
  t2290 = 0.135*t2175;
  t2346 = 0.049*t1588;
  t2360 = 0. + t2290 + t2346;
  t1835 = -1.*t1652*t80;
  t1877 = 0. + t1835;
  t1620 = 0. + t1588;
  t1111 = 0.049*t375;
  t2089 = -0.07996*t1820;
  t2572 = -1.*t80*t2360;
  t3417 = Cos(var1[2]);
  t3434 = -1.*t3417;
  t3438 = 1. + t3434;
  t3447 = Sin(var1[2]);
  t2397 = t375*t2360;
  t3439 = -0.049*t3438;
  t3460 = -0.09*t3447;
  t3464 = 0. + t3439 + t3460;
  t3489 = -0.09*t3438;
  t3494 = 0.049*t3447;
  t3503 = 0. + t3489 + t3494;
  t2956 = 0.03155*t1877;
  t3204 = 0.07996*t1620;
  t2968 = 0.049*t2175;
  t3005 = -0.135*t1588;
  t3161 = -0.135*t80;
  t3173 = t80*t2360;
  t3219 = -0.03155*t1820;
  t3225 = -0.049*t2175;
  t3255 = 0.135*t1588;
  t3343 = -0.135*t579;
  t3356 = -1.*t375*t2360;
  t4120 = Cos(var1[3]);
  t4070 = Sin(var1[3]);
  t3572 = t375*t1588*t3464;
  t3586 = -1.*t80*t3503;
  t3773 = t375*t3417*t1588;
  t3774 = -1.*t80*t3447;
  t3782 = t3773 + t3774;
  t4183 = -1.*t4120;
  t4190 = 1. + t4183;
  t3815 = -1.*t3417*t80;
  t3819 = -1.*t375*t1588*t3447;
  t3832 = t3815 + t3819;
  t3482 = -1.*t80*t1588*t3464;
  t3511 = -1.*t375*t3503;
  t4192 = -0.049*t4190;
  t4195 = -0.21*t4070;
  t4201 = 0. + t4192 + t4195;
  t3964 = t3417*t80*t1588;
  t3973 = t375*t3447;
  t3987 = t3964 + t3973;
  t4209 = -0.21*t4190;
  t4223 = 0.049*t4070;
  t4231 = 0. + t4209 + t4223;
  t4016 = t375*t3417;
  t4023 = -1.*t80*t1588*t3447;
  t4033 = t4016 + t4023;
  t3717 = -1.*t1652*t3464;
  t3749 = t80*t1588*t3464;
  t3756 = t375*t3503;
  t3894 = t1652*t3464;
  t3928 = -1.*t375*t1588*t3464;
  t3934 = t80*t3503;
  t4117 = -1.*t1652*t3417*t4070;
  t4122 = -1.*t4120*t1652*t3447;
  t4133 = t4117 + t4122;
  t4162 = t4120*t1652*t3417;
  t4163 = -1.*t1652*t4070*t3447;
  t4175 = t4162 + t4163;
  t4612 = Cos(var1[4]);
  t4608 = Sin(var1[4]);
  t4204 = t4201*t3782;
  t4235 = t4231*t3832;
  t4323 = -1.*t4070*t3782;
  t4329 = t4120*t3832;
  t4332 = t4323 + t4329;
  t4695 = -1.*t4612;
  t4698 = 1. + t4695;
  t4347 = t4120*t3782;
  t4365 = t4070*t3832;
  t4375 = t4347 + t4365;
  t4271 = -1.*t4201*t3987;
  t4274 = -1.*t4231*t4033;
  t4714 = -0.2707*t4698;
  t4723 = 0.0016*t4608;
  t4724 = 0. + t4714 + t4723;
  t4522 = -1.*t4070*t3987;
  t4528 = t4120*t4033;
  t4532 = t4522 + t4528;
  t4739 = -0.0016*t4698;
  t4754 = -0.2707*t4608;
  t4763 = 0. + t4739 + t4754;
  t4540 = t4120*t3987;
  t4559 = t4070*t4033;
  t4568 = t4540 + t4559;
  t4301 = -1.*t1652*t3417*t4201;
  t4310 = t1652*t4231*t3447;
  t4386 = t4201*t3987;
  t4390 = t4231*t4033;
  t4453 = t1652*t3417*t4201;
  t4455 = -1.*t1652*t4231*t3447;
  t4479 = -1.*t4201*t3782;
  t4493 = -1.*t4231*t3832;
  t4609 = t4608*t4133;
  t4636 = t4612*t4175;
  t4648 = t4609 + t4636;
  t4660 = t4612*t4133;
  t4664 = -1.*t4608*t4175;
  t4676 = t4660 + t4664;
  t4993 = Cos(var1[5]);
  t4986 = Sin(var1[5]);
  t4727 = t4724*t4332;
  t4767 = t4763*t4375;
  t4843 = t4608*t4332;
  t4888 = t4612*t4375;
  t4890 = t4843 + t4888;
  t5011 = -1.*t4993;
  t5017 = 1. + t5011;
  t4904 = t4612*t4332;
  t4908 = -1.*t4608*t4375;
  t4913 = t4904 + t4908;
  t4799 = -1.*t4724*t4532;
  t4803 = -1.*t4763*t4568;
  t5018 = 0.0184*t5017;
  t5025 = -0.7055*t4986;
  t5026 = 0. + t5018 + t5025;
  t4960 = t4608*t4532;
  t4962 = t4612*t4568;
  t4964 = t4960 + t4962;
  t5036 = -0.7055*t5017;
  t5041 = -0.0184*t4986;
  t5046 = 0. + t5036 + t5041;
  t4967 = t4612*t4532;
  t4968 = -1.*t4608*t4568;
  t4974 = t4967 + t4968;
  t4816 = -1.*t4724*t4133;
  t4819 = -1.*t4763*t4175;
  t4919 = t4724*t4532;
  t4922 = t4763*t4568;
  t4944 = t4724*t4133;
  t4946 = t4763*t4175;
  t4950 = -1.*t4724*t4332;
  t4952 = -1.*t4763*t4375;
  p_output1[0]=1.;
  p_output1[1]=0.;
  p_output1[2]=0.;
  p_output1[3]=0.;
  p_output1[4]=0.07996;
  p_output1[5]=-0.135;
  p_output1[6]=0.;
  p_output1[7]=t330;
  p_output1[8]=t403;
  p_output1[9]=0.135 - 0.07996*t330 + t375*(0. + t625) - 1.*t80*(0. + t957);
  p_output1[10]=0. + t1111 + 0.03155*t403;
  p_output1[11]=0. - 0.03155*t330 + 0.049*t80;
  p_output1[12]=t1620;
  p_output1[13]=t1820;
  p_output1[14]=t1877;
  p_output1[15]=0. - 0.09*t1652 + t2089 - 1.*t1652*(0. + t2397 + t625)*t80 - 1.*t1652*t375*(0. + t2572 + t957);
  p_output1[16]=0. + t2956 + t1588*(0. + t3161 + t3173) + t3204 - 0.09*t1588*t375 - 0.049*t80 - 1.*t1652*(0. + t2968 + t3005)*t80;
  p_output1[17]=0. + t1111 + t3219 + t1588*(0. + t3343 + t3356) - 1.*t1652*(0. + t3225 + t3255)*t375 - 0.09*t1588*t80;
  p_output1[18]=t1620;
  p_output1[19]=t1820;
  p_output1[20]=t1877;
  p_output1[21]=0. + t2089 - 0.21*t1652*t3417 - 0.049*t1652*t3447 - 1.*t1652*(0. + t2397 + t3572 + t3586 + t625)*t80 - 1.*t1652*t375*(0. + t2572 + t3482 + t3511 + t957);
  p_output1[22]=0. + t2956 + t3204 + t1588*(0. + t3161 + t3173 + t3749 + t3756) - 0.21*t3782 + 0.049*t3832 - 1.*t1652*(0. + t2968 + t3005 + t3717)*t80;
  p_output1[23]=0. + t3219 - 1.*t1652*t375*(0. + t3225 + t3255 + t3894) + t1588*(0. + t3343 + t3356 + t3928 + t3934) - 0.21*t3987 + 0.049*t4033;
  p_output1[24]=t1620;
  p_output1[25]=t1820;
  p_output1[26]=t1877;
  p_output1[27]=0. + t2089 + 0.0016*t4133 - 0.2707*t4175 - 1.*t1652*(0. + t2397 + t3572 + t3586 + t4204 + t4235 + t625)*t80 - 1.*t1652*t375*(0. + t2572 + t3482 + t3511 + t4271 + t4274 + t957);
  p_output1[28]=0. + t2956 + t3204 + 0.0016*t4332 - 0.2707*t4375 + t1588*(0. + t3161 + t3173 + t3749 + t3756 + t4386 + t4390) - 1.*t1652*(0. + t2968 + t3005 + t3717 + t4301 + t4310)*t80;
  p_output1[29]=0. + t3219 - 1.*t1652*t375*(0. + t3225 + t3255 + t3894 + t4453 + t4455) + t1588*(0. + t3343 + t3356 + t3928 + t3934 + t4479 + t4493) + 0.0016*t4532 - 0.2707*t4568;
  p_output1[30]=t1620;
  p_output1[31]=t1820;
  p_output1[32]=t1877;
  p_output1[33]=0. + t2089 - 0.7055*t4648 - 0.0184*t4676 - 1.*t1652*(0. + t2397 + t3572 + t3586 + t4204 + t4235 + t4727 + t4767 + t625)*t80 - 1.*t1652*t375*(0. + t2572 + t3482 + t3511 + t4271 + t4274 + t4799 + t4803 + t957);
  p_output1[34]=0. + t2956 + t3204 - 0.7055*t4890 - 0.0184*t4913 + t1588*(0. + t3161 + t3173 + t3749 + t3756 + t4386 + t4390 + t4919 + t4922) - 1.*t1652*(0. + t2968 + t3005 + t3717 + t4301 + t4310 + t4816 + t4819)*t80;
  p_output1[35]=0. + t3219 - 1.*t1652*t375*(0. + t3225 + t3255 + t3894 + t4453 + t4455 + t4944 + t4946) + t1588*(0. + t3343 + t3356 + t3928 + t3934 + t4479 + t4493 + t4950 + t4952) - 0.7055*t4964 - 0.0184*t4974;
  p_output1[36]=t1620;
  p_output1[37]=t1820;
  p_output1[38]=t1877;
  p_output1[39]=0. + t2089 - 1.1135*(t4676*t4986 + t4648*t4993) + 0.0216*(-1.*t4648*t4986 + t4676*t4993) - 1.*t1652*(0. + t2397 + t3572 + t3586 + t4204 + t4235 + t4727 + t4767 + t4890*t5026 + t4913*t5046 + t625)*t80 - 1.*t1652*t375*(0. + t2572 + t3482 + t3511 + t4271 + t4274 + t4799 + t4803 - 1.*t4964*t5026 - 1.*t4974*t5046 + t957);
  p_output1[40]=0. + t2956 + t3204 - 1.1135*(t4913*t4986 + t4890*t4993) + 0.0216*(-1.*t4890*t4986 + t4913*t4993) + t1588*(0. + t3161 + t3173 + t3749 + t3756 + t4386 + t4390 + t4919 + t4922 + t4964*t5026 + t4974*t5046) - 1.*t1652*(0. + t2968 + t3005 + t3717 + t4301 + t4310 + t4816 + t4819 - 1.*t4648*t5026 - 1.*t4676*t5046)*t80;
  p_output1[41]=0. + t3219 - 1.1135*(t4974*t4986 + t4964*t4993) + 0.0216*(-1.*t4964*t4986 + t4974*t4993) - 1.*t1652*t375*(0. + t3225 + t3255 + t3894 + t4453 + t4455 + t4944 + t4946 + t4648*t5026 + t4676*t5046) + t1588*(0. + t3343 + t3356 + t3928 + t3934 + t4479 + t4493 + t4950 + t4952 - 1.*t4890*t5026 - 1.*t4913*t5046);
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
}



void Js_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
