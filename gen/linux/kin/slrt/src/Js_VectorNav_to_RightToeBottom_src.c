/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:11:27 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_VectorNav_to_RightToeBottom_src.h"

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
  double t566;
  double t144;
  double t281;
  double t437;
  double t637;
  double t1545;
  double t1546;
  double t1560;
  double t694;
  double t745;
  double t823;
  double t1537;
  double t1058;
  double t1768;
  double t1777;
  double t1793;
  double t1830;
  double t1846;
  double t1650;
  double t1696;
  double t1540;
  double t1136;
  double t1767;
  double t2039;
  double t3257;
  double t3352;
  double t3376;
  double t3415;
  double t1866;
  double t3395;
  double t3422;
  double t3448;
  double t3457;
  double t3472;
  double t3492;
  double t2184;
  double t2641;
  double t2212;
  double t2240;
  double t2384;
  double t2423;
  double t2712;
  double t2755;
  double t2762;
  double t3129;
  double t3135;
  double t3585;
  double t3679;
  double t4382;
  double t4423;
  double t4468;
  double t4547;
  double t4567;
  double t4614;
  double t5477;
  double t5481;
  double t5484;
  double t5530;
  double t3453;
  double t3529;
  double t5109;
  double t5114;
  double t5212;
  double t5492;
  double t5557;
  double t5591;
  double t5308;
  double t5425;
  double t5454;
  double t5650;
  double t5662;
  double t5663;
  double t4018;
  double t4202;
  double t4312;
  double t4867;
  double t4940;
  double t4945;
  double t5734;
  double t5748;
  double t6050;
  double t6053;
  double t6055;
  double t6018;
  double t6030;
  double t6032;
  double t6064;
  double t6067;
  double t6073;
  double t6077;
  double t5609;
  double t5664;
  double t5929;
  double t5937;
  double t5950;
  double t6075;
  double t6085;
  double t6087;
  double t5909;
  double t5910;
  double t5914;
  double t6098;
  double t6099;
  double t6114;
  double t5836;
  double t5840;
  double t5842;
  double t5776;
  double t5815;
  double t5820;
  double t5884;
  double t5889;
  double t5893;
  double t5898;
  double t5966;
  double t5968;
  double t5992;
  double t6003;
  double t6127;
  double t6128;
  double t6252;
  double t6256;
  double t6257;
  double t6261;
  double t6262;
  double t6264;
  double t6391;
  double t6392;
  double t6395;
  double t6412;
  double t6092;
  double t6118;
  double t6326;
  double t6337;
  double t6340;
  double t6405;
  double t6414;
  double t6415;
  double t6344;
  double t6352;
  double t6359;
  double t6431;
  double t6432;
  double t6434;
  double t6186;
  double t6187;
  double t6190;
  double t6154;
  double t6162;
  double t6173;
  double t6204;
  double t6215;
  double t6235;
  double t6243;
  double t6272;
  double t6285;
  double t6292;
  double t6301;
  t566 = Cos(var1[7]);
  t144 = Sin(var1[7]);
  t281 = -1.*t144;
  t437 = 0. + t281;
  t637 = 0. + t566;
  t1545 = Cos(var1[8]);
  t1546 = -1.*t566*t1545;
  t1560 = 0. + t1546;
  t694 = -1.*t566;
  t745 = 1. + t694;
  t823 = -0.135*t745;
  t1537 = Sin(var1[8]);
  t1058 = -0.135*t144;
  t1768 = -1.*t1545;
  t1777 = 1. + t1768;
  t1793 = -0.135*t1777;
  t1830 = 0.049*t1537;
  t1846 = 0. + t1793 + t1830;
  t1650 = -1.*t1545*t144;
  t1696 = 0. + t1650;
  t1540 = 0. + t1537;
  t1136 = 0.049*t566;
  t1767 = -0.07996*t1560;
  t2039 = -1.*t144*t1846;
  t3257 = Cos(var1[9]);
  t3352 = -1.*t3257;
  t3376 = 1. + t3352;
  t3415 = Sin(var1[9]);
  t1866 = t566*t1846;
  t3395 = -0.049*t3376;
  t3422 = -0.09*t3415;
  t3448 = 0. + t3395 + t3422;
  t3457 = -0.09*t3376;
  t3472 = 0.049*t3415;
  t3492 = 0. + t3457 + t3472;
  t2184 = 0.03155*t1696;
  t2641 = 0.07996*t1540;
  t2212 = 0.049*t1777;
  t2240 = 0.135*t1537;
  t2384 = 0.135*t144;
  t2423 = t144*t1846;
  t2712 = -0.03155*t1560;
  t2755 = -0.049*t1777;
  t2762 = -0.135*t1537;
  t3129 = 0.135*t745;
  t3135 = -1.*t566*t1846;
  t3585 = t566*t1537*t3448;
  t3679 = -1.*t144*t3492;
  t4382 = t566*t3257*t1537;
  t4423 = -1.*t144*t3415;
  t4468 = t4382 + t4423;
  t4547 = -1.*t3257*t144;
  t4567 = -1.*t566*t1537*t3415;
  t4614 = t4547 + t4567;
  t5477 = Cos(var1[10]);
  t5481 = -1.*t5477;
  t5484 = 1. + t5481;
  t5530 = Sin(var1[10]);
  t3453 = -1.*t144*t1537*t3448;
  t3529 = -1.*t566*t3492;
  t5109 = t3257*t144*t1537;
  t5114 = t566*t3415;
  t5212 = t5109 + t5114;
  t5492 = -0.049*t5484;
  t5557 = -0.21*t5530;
  t5591 = 0. + t5492 + t5557;
  t5308 = t566*t3257;
  t5425 = -1.*t144*t1537*t3415;
  t5454 = t5308 + t5425;
  t5650 = -0.21*t5484;
  t5662 = 0.049*t5530;
  t5663 = 0. + t5650 + t5662;
  t4018 = -1.*t1545*t3448;
  t4202 = t144*t1537*t3448;
  t4312 = t566*t3492;
  t4867 = t1545*t3448;
  t4940 = -1.*t566*t1537*t3448;
  t4945 = t144*t3492;
  t5734 = -1.*t5212*t5591;
  t5748 = -1.*t5454*t5663;
  t6050 = t5477*t5212;
  t6053 = t5454*t5530;
  t6055 = t6050 + t6053;
  t6018 = t5477*t5454;
  t6030 = -1.*t5212*t5530;
  t6032 = t6018 + t6030;
  t6064 = Cos(var1[11]);
  t6067 = -1.*t6064;
  t6073 = 1. + t6067;
  t6077 = Sin(var1[11]);
  t5609 = t4468*t5591;
  t5664 = t4614*t5663;
  t5929 = t5477*t4468;
  t5937 = t4614*t5530;
  t5950 = t5929 + t5937;
  t6075 = -0.0016*t6073;
  t6085 = -0.2707*t6077;
  t6087 = 0. + t6075 + t6085;
  t5909 = t5477*t4614;
  t5910 = -1.*t4468*t5530;
  t5914 = t5909 + t5910;
  t6098 = -0.2707*t6073;
  t6099 = 0.0016*t6077;
  t6114 = 0. + t6098 + t6099;
  t5836 = t1545*t3257*t5477;
  t5840 = -1.*t1545*t3415*t5530;
  t5842 = t5836 + t5840;
  t5776 = -1.*t1545*t5477*t3415;
  t5815 = -1.*t1545*t3257*t5530;
  t5820 = t5776 + t5815;
  t5884 = -1.*t1545*t3257*t5591;
  t5889 = t1545*t3415*t5663;
  t5893 = t5212*t5591;
  t5898 = t5454*t5663;
  t5966 = t1545*t3257*t5591;
  t5968 = -1.*t1545*t3415*t5663;
  t5992 = -1.*t4468*t5591;
  t6003 = -1.*t4614*t5663;
  t6127 = t5950*t6087;
  t6128 = t5914*t6114;
  t6252 = t6064*t5950;
  t6256 = t5914*t6077;
  t6257 = t6252 + t6256;
  t6261 = t6064*t5914;
  t6262 = -1.*t5950*t6077;
  t6264 = t6261 + t6262;
  t6391 = Cos(var1[12]);
  t6392 = -1.*t6391;
  t6395 = 1. + t6392;
  t6412 = Sin(var1[12]);
  t6092 = -1.*t6055*t6087;
  t6118 = -1.*t6032*t6114;
  t6326 = t6064*t6055;
  t6337 = t6032*t6077;
  t6340 = t6326 + t6337;
  t6405 = 0.0184*t6395;
  t6414 = -0.7055*t6412;
  t6415 = 0. + t6405 + t6414;
  t6344 = t6064*t6032;
  t6352 = -1.*t6055*t6077;
  t6359 = t6344 + t6352;
  t6431 = -0.7055*t6395;
  t6432 = -0.0184*t6412;
  t6434 = 0. + t6431 + t6432;
  t6186 = t6064*t5820;
  t6187 = -1.*t5842*t6077;
  t6190 = t6186 + t6187;
  t6154 = t6064*t5842;
  t6162 = t5820*t6077;
  t6173 = t6154 + t6162;
  t6204 = -1.*t5842*t6087;
  t6215 = -1.*t5820*t6114;
  t6235 = t6055*t6087;
  t6243 = t6032*t6114;
  t6272 = t5842*t6087;
  t6285 = t5820*t6114;
  t6292 = -1.*t5950*t6087;
  t6301 = -1.*t5914*t6114;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=1.;
  p_output1[43]=0.;
  p_output1[44]=0.;
  p_output1[45]=0.;
  p_output1[46]=0.07996;
  p_output1[47]=0.135;
  p_output1[48]=0.;
  p_output1[49]=t437;
  p_output1[50]=t637;
  p_output1[51]=-0.135 - 1.*(0. + t1058)*t144 - 0.07996*t437 + t566*(0. + t823);
  p_output1[52]=0. + t1136 + 0.03155*t637;
  p_output1[53]=0. + 0.049*t144 - 0.03155*t437;
  p_output1[54]=t1540;
  p_output1[55]=t1560;
  p_output1[56]=t1696;
  p_output1[57]=0. - 0.09*t1545 + t1767 - 1.*t1545*(0. + t1058 + t2039)*t566 - 1.*t144*t1545*(0. + t1866 + t823);
  p_output1[58]=0. - 0.049*t144 + t2184 - 1.*t144*t1545*(0. + t2212 + t2240) + t1537*(0. + t2384 + t2423) + t2641 - 0.09*t1537*t566;
  p_output1[59]=0. + t1136 - 0.09*t144*t1537 + t2712 + t1537*(0. + t3129 + t3135) - 1.*t1545*(0. + t2755 + t2762)*t566;
  p_output1[60]=t1540;
  p_output1[61]=t1560;
  p_output1[62]=t1696;
  p_output1[63]=0. + t1767 - 0.21*t1545*t3257 - 0.049*t1545*t3415 - 1.*t1545*(0. + t1058 + t2039 + t3453 + t3529)*t566 - 1.*t144*t1545*(0. + t1866 + t3585 + t3679 + t823);
  p_output1[64]=0. + t2184 + t2641 - 1.*t144*t1545*(0. + t2212 + t2240 + t4018) + t1537*(0. + t2384 + t2423 + t4202 + t4312) - 0.21*t4468 + 0.049*t4614;
  p_output1[65]=0. + t2712 + t1537*(0. + t3129 + t3135 + t4940 + t4945) - 0.21*t5212 + 0.049*t5454 - 1.*t1545*(0. + t2755 + t2762 + t4867)*t566;
  p_output1[66]=t1540;
  p_output1[67]=t1560;
  p_output1[68]=t1696;
  p_output1[69]=0. + t1767 - 1.*t1545*t566*(0. + t1058 + t2039 + t3453 + t3529 + t5734 + t5748) + 0.0016*t5820 - 0.2707*t5842 - 1.*t144*t1545*(0. + t1866 + t3585 + t3679 + t5609 + t5664 + t823);
  p_output1[70]=0. + t2184 + t2641 - 1.*t144*t1545*(0. + t2212 + t2240 + t4018 + t5884 + t5889) + t1537*(0. + t2384 + t2423 + t4202 + t4312 + t5893 + t5898) + 0.0016*t5914 - 0.2707*t5950;
  p_output1[71]=0. + t2712 - 1.*t1545*t566*(0. + t2755 + t2762 + t4867 + t5966 + t5968) + t1537*(0. + t3129 + t3135 + t4940 + t4945 + t5992 + t6003) + 0.0016*t6032 - 0.2707*t6055;
  p_output1[72]=t1540;
  p_output1[73]=t1560;
  p_output1[74]=t1696;
  p_output1[75]=0. + t1767 - 1.*t1545*t566*(0. + t1058 + t2039 + t3453 + t3529 + t5734 + t5748 + t6092 + t6118) - 0.7055*t6173 - 0.0184*t6190 - 1.*t144*t1545*(0. + t1866 + t3585 + t3679 + t5609 + t5664 + t6127 + t6128 + t823);
  p_output1[76]=0. + t2184 + t2641 - 1.*t144*t1545*(0. + t2212 + t2240 + t4018 + t5884 + t5889 + t6204 + t6215) + t1537*(0. + t2384 + t2423 + t4202 + t4312 + t5893 + t5898 + t6235 + t6243) - 0.7055*t6257 - 0.0184*t6264;
  p_output1[77]=0. + t2712 - 1.*t1545*t566*(0. + t2755 + t2762 + t4867 + t5966 + t5968 + t6272 + t6285) + t1537*(0. + t3129 + t3135 + t4940 + t4945 + t5992 + t6003 + t6292 + t6301) - 0.7055*t6340 - 0.0184*t6359;
  p_output1[78]=t1540;
  p_output1[79]=t1560;
  p_output1[80]=t1696;
  p_output1[81]=0. + t1767 + 0.0216*(t6190*t6391 - 1.*t6173*t6412) - 1.1135*(t6173*t6391 + t6190*t6412) - 1.*t1545*t566*(0. + t1058 + t2039 + t3453 + t3529 + t5734 + t5748 + t6092 + t6118 - 1.*t6340*t6415 - 1.*t6359*t6434) - 1.*t144*t1545*(0. + t1866 + t3585 + t3679 + t5609 + t5664 + t6127 + t6128 + t6257*t6415 + t6264*t6434 + t823);
  p_output1[82]=0. + t2184 + t2641 + 0.0216*(t6264*t6391 - 1.*t6257*t6412) - 1.1135*(t6257*t6391 + t6264*t6412) - 1.*t144*t1545*(0. + t2212 + t2240 + t4018 + t5884 + t5889 + t6204 + t6215 - 1.*t6173*t6415 - 1.*t6190*t6434) + t1537*(0. + t2384 + t2423 + t4202 + t4312 + t5893 + t5898 + t6235 + t6243 + t6340*t6415 + t6359*t6434);
  p_output1[83]=0. + t2712 + 0.0216*(t6359*t6391 - 1.*t6340*t6412) - 1.1135*(t6340*t6391 + t6359*t6412) - 1.*t1545*t566*(0. + t2755 + t2762 + t4867 + t5966 + t5968 + t6272 + t6285 + t6173*t6415 + t6190*t6434) + t1537*(0. + t3129 + t3135 + t4940 + t4945 + t5992 + t6003 + t6292 + t6301 - 1.*t6257*t6415 - 1.*t6264*t6434);
}



void Js_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
