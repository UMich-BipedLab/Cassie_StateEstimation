/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:20:50 GMT-04:00
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
  double t296;
  double t1642;
  double t1837;
  double t1681;
  double t1842;
  double t365;
  double t992;
  double t996;
  double t1168;
  double t1481;
  double t1807;
  double t1852;
  double t1868;
  double t1960;
  double t2255;
  double t2290;
  double t2295;
  double t305;
  double t2609;
  double t2629;
  double t2666;
  double t2740;
  double t2799;
  double t2800;
  double t2891;
  double t2951;
  double t2952;
  double t2954;
  double t3298;
  double t3319;
  double t3339;
  double t3384;
  double t3423;
  double t3436;
  double t3497;
  double t3610;
  double t3643;
  double t3651;
  double t3698;
  double t3719;
  double t3722;
  double t3739;
  double t3805;
  double t3844;
  double t3865;
  double t3950;
  double t3955;
  double t3964;
  double t4052;
  double t4063;
  double t4108;
  double t4141;
  double t4146;
  double t4161;
  double t4171;
  double t4220;
  double t4229;
  double t4237;
  double t4271;
  double t4273;
  double t4288;
  double t4304;
  double t4350;
  double t4352;
  double t4382;
  double t4392;
  double t4411;
  double t4416;
  double t4448;
  double t4450;
  double t4452;
  double t1162;
  double t1351;
  double t1393;
  double t1486;
  double t1596;
  double t1966;
  double t2010;
  double t2215;
  double t2226;
  double t2392;
  double t2394;
  double t2469;
  double t4574;
  double t4576;
  double t4579;
  double t4586;
  double t4589;
  double t4592;
  double t2863;
  double t2922;
  double t2947;
  double t4612;
  double t4628;
  double t4663;
  double t3203;
  double t3269;
  double t3279;
  double t3481;
  double t3601;
  double t3609;
  double t4685;
  double t4692;
  double t4747;
  double t4831;
  double t4838;
  double t4851;
  double t3676;
  double t3679;
  double t3688;
  double t3848;
  double t3879;
  double t3920;
  double t4857;
  double t4859;
  double t4866;
  double t4872;
  double t4875;
  double t4876;
  double t4007;
  double t4022;
  double t4029;
  double t4166;
  double t4187;
  double t4215;
  double t4889;
  double t4894;
  double t4899;
  double t4908;
  double t4912;
  double t4913;
  double t4244;
  double t4254;
  double t4256;
  double t4355;
  double t4388;
  double t4391;
  double t4927;
  double t4929;
  double t4931;
  double t4941;
  double t4943;
  double t4947;
  double t4436;
  double t4437;
  double t4441;
  double t4993;
  double t4995;
  double t5004;
  double t5030;
  double t5037;
  double t5042;
  double t5162;
  double t5163;
  double t5165;
  double t5174;
  double t5184;
  double t5185;
  double t5222;
  double t5225;
  double t5235;
  double t5245;
  double t5248;
  double t5249;
  double t5262;
  double t5263;
  double t5264;
  double t5284;
  double t5306;
  double t5316;
  double t5327;
  double t5330;
  double t5333;
  double t5345;
  double t5356;
  double t5359;
  double t5366;
  double t5367;
  double t5372;
  double t5386;
  double t5401;
  double t5403;
  double t5408;
  double t5420;
  double t5421;
  t296 = Cos(var1[3]);
  t1642 = Cos(var1[5]);
  t1837 = Sin(var1[3]);
  t1681 = Sin(var1[4]);
  t1842 = Sin(var1[5]);
  t365 = Cos(var1[14]);
  t992 = -1.*t365;
  t996 = 1. + t992;
  t1168 = Sin(var1[14]);
  t1481 = Sin(var1[13]);
  t1807 = t296*t1642*t1681;
  t1852 = t1837*t1842;
  t1868 = t1807 + t1852;
  t1960 = Cos(var1[13]);
  t2255 = -1.*t1642*t1837;
  t2290 = t296*t1681*t1842;
  t2295 = t2255 + t2290;
  t305 = Cos(var1[4]);
  t2609 = t1481*t1868;
  t2629 = t1960*t2295;
  t2666 = t2609 + t2629;
  t2740 = Cos(var1[15]);
  t2799 = -1.*t2740;
  t2800 = 1. + t2799;
  t2891 = Sin(var1[15]);
  t2951 = t1960*t1868;
  t2952 = -1.*t1481*t2295;
  t2954 = t2951 + t2952;
  t3298 = t365*t296*t305;
  t3319 = t1168*t2666;
  t3339 = t3298 + t3319;
  t3384 = Cos(var1[16]);
  t3423 = -1.*t3384;
  t3436 = 1. + t3423;
  t3497 = Sin(var1[16]);
  t3610 = t2891*t2954;
  t3643 = t2740*t3339;
  t3651 = t3610 + t3643;
  t3698 = t2740*t2954;
  t3719 = -1.*t2891*t3339;
  t3722 = t3698 + t3719;
  t3739 = Cos(var1[17]);
  t3805 = -1.*t3739;
  t3844 = 1. + t3805;
  t3865 = Sin(var1[17]);
  t3950 = -1.*t3497*t3651;
  t3955 = t3384*t3722;
  t3964 = t3950 + t3955;
  t4052 = t3384*t3651;
  t4063 = t3497*t3722;
  t4108 = t4052 + t4063;
  t4141 = Cos(var1[18]);
  t4146 = -1.*t4141;
  t4161 = 1. + t4146;
  t4171 = Sin(var1[18]);
  t4220 = t3865*t3964;
  t4229 = t3739*t4108;
  t4237 = t4220 + t4229;
  t4271 = t3739*t3964;
  t4273 = -1.*t3865*t4108;
  t4288 = t4271 + t4273;
  t4304 = Cos(var1[19]);
  t4350 = -1.*t4304;
  t4352 = 1. + t4350;
  t4382 = Sin(var1[19]);
  t4392 = -1.*t4171*t4237;
  t4411 = t4141*t4288;
  t4416 = t4392 + t4411;
  t4448 = t4141*t4237;
  t4450 = t4171*t4288;
  t4452 = t4448 + t4450;
  t1162 = -0.049*t996;
  t1351 = -0.135*t1168;
  t1393 = 0. + t1162 + t1351;
  t1486 = 0.135*t1481;
  t1596 = 0. + t1486;
  t1966 = -1.*t1960;
  t2010 = 1. + t1966;
  t2215 = -0.135*t2010;
  t2226 = 0. + t2215;
  t2392 = -0.135*t996;
  t2394 = 0.049*t1168;
  t2469 = 0. + t2392 + t2394;
  t4574 = t1642*t1837*t1681;
  t4576 = -1.*t296*t1842;
  t4579 = t4574 + t4576;
  t4586 = t296*t1642;
  t4589 = t1837*t1681*t1842;
  t4592 = t4586 + t4589;
  t2863 = -0.09*t2800;
  t2922 = 0.049*t2891;
  t2947 = 0. + t2863 + t2922;
  t4612 = t1481*t4579;
  t4628 = t1960*t4592;
  t4663 = t4612 + t4628;
  t3203 = -0.049*t2800;
  t3269 = -0.09*t2891;
  t3279 = 0. + t3203 + t3269;
  t3481 = -0.049*t3436;
  t3601 = -0.21*t3497;
  t3609 = 0. + t3481 + t3601;
  t4685 = t1960*t4579;
  t4692 = -1.*t1481*t4592;
  t4747 = t4685 + t4692;
  t4831 = t365*t305*t1837;
  t4838 = t1168*t4663;
  t4851 = t4831 + t4838;
  t3676 = -0.21*t3436;
  t3679 = 0.049*t3497;
  t3688 = 0. + t3676 + t3679;
  t3848 = -0.2707*t3844;
  t3879 = 0.0016*t3865;
  t3920 = 0. + t3848 + t3879;
  t4857 = t2891*t4747;
  t4859 = t2740*t4851;
  t4866 = t4857 + t4859;
  t4872 = t2740*t4747;
  t4875 = -1.*t2891*t4851;
  t4876 = t4872 + t4875;
  t4007 = -0.0016*t3844;
  t4022 = -0.2707*t3865;
  t4029 = 0. + t4007 + t4022;
  t4166 = 0.0184*t4161;
  t4187 = -0.7055*t4171;
  t4215 = 0. + t4166 + t4187;
  t4889 = -1.*t3497*t4866;
  t4894 = t3384*t4876;
  t4899 = t4889 + t4894;
  t4908 = t3384*t4866;
  t4912 = t3497*t4876;
  t4913 = t4908 + t4912;
  t4244 = -0.7055*t4161;
  t4254 = -0.0184*t4171;
  t4256 = 0. + t4244 + t4254;
  t4355 = -1.1135*t4352;
  t4388 = 0.0216*t4382;
  t4391 = 0. + t4355 + t4388;
  t4927 = t3865*t4899;
  t4929 = t3739*t4913;
  t4931 = t4927 + t4929;
  t4941 = t3739*t4899;
  t4943 = -1.*t3865*t4913;
  t4947 = t4941 + t4943;
  t4436 = -0.0216*t4352;
  t4437 = -1.1135*t4382;
  t4441 = 0. + t4436 + t4437;
  t4993 = -1.*t4171*t4931;
  t4995 = t4141*t4947;
  t5004 = t4993 + t4995;
  t5030 = t4141*t4931;
  t5037 = t4171*t4947;
  t5042 = t5030 + t5037;
  t5162 = t305*t1642*t1481;
  t5163 = t1960*t305*t1842;
  t5165 = t5162 + t5163;
  t5174 = t1960*t305*t1642;
  t5184 = -1.*t305*t1481*t1842;
  t5185 = t5174 + t5184;
  t5222 = -1.*t365*t1681;
  t5225 = t1168*t5165;
  t5235 = t5222 + t5225;
  t5245 = t2891*t5185;
  t5248 = t2740*t5235;
  t5249 = t5245 + t5248;
  t5262 = t2740*t5185;
  t5263 = -1.*t2891*t5235;
  t5264 = t5262 + t5263;
  t5284 = -1.*t3497*t5249;
  t5306 = t3384*t5264;
  t5316 = t5284 + t5306;
  t5327 = t3384*t5249;
  t5330 = t3497*t5264;
  t5333 = t5327 + t5330;
  t5345 = t3865*t5316;
  t5356 = t3739*t5333;
  t5359 = t5345 + t5356;
  t5366 = t3739*t5316;
  t5367 = -1.*t3865*t5333;
  t5372 = t5366 + t5367;
  t5386 = -1.*t4171*t5359;
  t5401 = t4141*t5372;
  t5403 = t5386 + t5401;
  t5408 = t4141*t5359;
  t5420 = t4171*t5372;
  t5421 = t5408 + t5420;
  p_output1[0]=0. + t1596*t1868 + t2226*t2295 + t2469*t2666 + t2947*t2954 + t1393*t296*t305 + t3279*t3339 - 0.1305*(-1.*t1168*t296*t305 + t2666*t365) + t3609*t3651 + t3688*t3722 + t3920*t3964 + t4029*t4108 + t4215*t4237 + t4256*t4288 + t4391*t4416 + t4441*t4452 + 0.088451*(t4382*t4416 + t4304*t4452) - 1.062256*(t4304*t4416 - 1.*t4382*t4452) + var1[0];
  p_output1[1]=0. + t1393*t1837*t305 + t1596*t4579 + t2226*t4592 + t2469*t4663 - 0.1305*(-1.*t1168*t1837*t305 + t365*t4663) + t2947*t4747 + t3279*t4851 + t3609*t4866 + t3688*t4876 + t3920*t4899 + t4029*t4913 + t4215*t4931 + t4256*t4947 + t4391*t5004 + t4441*t5042 + 0.088451*(t4382*t5004 + t4304*t5042) - 1.062256*(t4304*t5004 - 1.*t4382*t5042) + var1[1];
  p_output1[2]=0. - 1.*t1393*t1681 + t1596*t1642*t305 + t1842*t2226*t305 + t2469*t5165 - 0.1305*(t1168*t1681 + t365*t5165) + t2947*t5185 + t3279*t5235 + t3609*t5249 + t3688*t5264 + t3920*t5316 + t4029*t5333 + t4215*t5359 + t4256*t5372 + t4391*t5403 + t4441*t5421 + 0.088451*(t4382*t5403 + t4304*t5421) - 1.062256*(t4304*t5403 - 1.*t4382*t5421) + var1[2];
}



void p_RightToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
