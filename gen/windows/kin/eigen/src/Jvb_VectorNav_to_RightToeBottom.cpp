/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:32:42 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jvb_VectorNav_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t899;
  double t1026;
  double t1335;
  double t987;
  double t1111;
  double t1281;
  double t824;
  double t1377;
  double t1452;
  double t1504;
  double t2016;
  double t1315;
  double t1676;
  double t1721;
  double t553;
  double t2124;
  double t2170;
  double t2258;
  double t2839;
  double t1761;
  double t2386;
  double t2535;
  double t440;
  double t3005;
  double t3109;
  double t3145;
  double t82;
  double t421;
  double t3518;
  double t5322;
  double t5336;
  double t5206;
  double t5243;
  double t5409;
  double t5489;
  double t5515;
  double t5529;
  double t5585;
  double t5622;
  double t5632;
  double t5642;
  double t5113;
  double t5130;
  double t5276;
  double t5291;
  double t5571;
  double t5649;
  double t5664;
  double t5701;
  double t5711;
  double t5726;
  double t5728;
  double t5736;
  double t5015;
  double t5019;
  double t5188;
  double t5196;
  double t5697;
  double t5740;
  double t5745;
  double t5765;
  double t5783;
  double t5821;
  double t5824;
  double t5840;
  double t4654;
  double t2690;
  double t3418;
  double t3425;
  double t3441;
  double t3592;
  double t3900;
  double t4016;
  double t4103;
  double t4151;
  double t4416;
  double t4493;
  double t4661;
  double t4738;
  double t4863;
  double t4880;
  double t5065;
  double t5086;
  double t5755;
  double t5841;
  double t5849;
  double t5859;
  double t5868;
  double t5878;
  double t5881;
  double t5897;
  double t5899;
  double t5900;
  double t5910;
  double t6086;
  double t6103;
  double t6113;
  double t6069;
  double t6120;
  double t6121;
  double t6154;
  double t6161;
  double t6151;
  double t6163;
  double t6164;
  double t6172;
  double t6173;
  double t6176;
  double t4275;
  double t4280;
  double t4563;
  double t4659;
  double t5914;
  double t5928;
  double t6168;
  double t6181;
  double t6189;
  double t6190;
  double t6200;
  double t6209;
  double t6211;
  double t6213;
  double t6215;
  double t6225;
  double t6229;
  double t5966;
  double t5985;
  double t5994;
  double t5997;
  double t6002;
  double t6039;
  double t6044;
  double t6050;
  double t6056;
  double t6063;
  double t6310;
  double t5934;
  double t5949;
  double t6015;
  double t6021;
  double t6031;
  double t6264;
  double t6266;
  double t6277;
  double t6321;
  double t6326;
  double t6239;
  double t6247;
  double t6290;
  double t6065;
  t899 = Cos(var1[13]);
  t1026 = Sin(var1[13]);
  t1335 = Cos(var1[12]);
  t987 = 0.642788*t899;
  t1111 = -0.766044*t1026;
  t1281 = t987 + t1111;
  t824 = Sin(var1[12]);
  t1377 = -0.766044*t899;
  t1452 = -0.642788*t1026;
  t1504 = t1377 + t1452;
  t2016 = Cos(var1[11]);
  t1315 = -1.*t824*t1281;
  t1676 = t1335*t1504;
  t1721 = 0. + t1315 + t1676;
  t553 = Sin(var1[11]);
  t2124 = t1335*t1281;
  t2170 = t824*t1504;
  t2258 = 0. + t2124 + t2170;
  t2839 = Cos(var1[10]);
  t1761 = t553*t1721;
  t2386 = t2016*t2258;
  t2535 = 0. + t1761 + t2386;
  t440 = Sin(var1[10]);
  t3005 = t2016*t1721;
  t3109 = -1.*t553*t2258;
  t3145 = 0. + t3005 + t3109;
  t82 = Cos(var1[8]);
  t421 = Cos(var1[9]);
  t3518 = Sin(var1[9]);
  t5322 = -1.*t899;
  t5336 = 1. + t5322;
  t5206 = -1.*t1335;
  t5243 = 1. + t5206;
  t5409 = -0.0216*t5336;
  t5489 = 0.0306*t899;
  t5515 = 0.01770000000000005*t1026;
  t5529 = 0. + t5409 + t5489 + t5515;
  t5585 = -1.1135*t5336;
  t5622 = -1.1312*t899;
  t5632 = 0.052199999999999996*t1026;
  t5642 = 0. + t5585 + t5622 + t5632;
  t5113 = -1.*t2016;
  t5130 = 1. + t5113;
  t5276 = -0.7055*t5243;
  t5291 = -0.0184*t824;
  t5571 = t824*t5529;
  t5649 = t1335*t5642;
  t5664 = 0. + t5276 + t5291 + t5571 + t5649;
  t5701 = 0.0184*t5243;
  t5711 = -0.7055*t824;
  t5726 = t1335*t5529;
  t5728 = -1.*t824*t5642;
  t5736 = 0. + t5701 + t5711 + t5726 + t5728;
  t5015 = -1.*t2839;
  t5019 = 1. + t5015;
  t5188 = -0.0016*t5130;
  t5196 = -0.2707*t553;
  t5697 = -1.*t553*t5664;
  t5740 = t2016*t5736;
  t5745 = 0. + t5188 + t5196 + t5697 + t5740;
  t5765 = -0.2707*t5130;
  t5783 = 0.0016*t553;
  t5821 = t2016*t5664;
  t5824 = t553*t5736;
  t5840 = 0. + t5765 + t5783 + t5821 + t5824;
  t4654 = Sin(var1[8]);
  t2690 = -1.*t440*t2535;
  t3418 = t2839*t3145;
  t3425 = 0. + t2690 + t3418;
  t3441 = t421*t3425;
  t3592 = t2839*t2535;
  t3900 = t440*t3145;
  t4016 = 0. + t3592 + t3900;
  t4103 = -1.*t3518*t4016;
  t4151 = 0. + t3441 + t4103;
  t4416 = -1.*t82;
  t4493 = 1. + t4416;
  t4661 = -1.*t421;
  t4738 = 1. + t4661;
  t4863 = -0.049*t4738;
  t4880 = -0.09*t3518;
  t5065 = -0.21*t5019;
  t5086 = 0.049*t440;
  t5755 = t440*t5745;
  t5841 = t2839*t5840;
  t5849 = 0. + t5065 + t5086 + t5755 + t5841;
  t5859 = -1.*t3518*t5849;
  t5868 = -0.049*t5019;
  t5878 = -0.21*t440;
  t5881 = t2839*t5745;
  t5897 = -1.*t440*t5840;
  t5899 = 0. + t5868 + t5878 + t5881 + t5897;
  t5900 = t421*t5899;
  t5910 = 0. + t4863 + t4880 + t5859 + t5900;
  t6086 = 0.766044*t899;
  t6103 = 0.642788*t1026;
  t6113 = t6086 + t6103;
  t6069 = t824*t1281;
  t6120 = t1335*t6113;
  t6121 = 0. + t6069 + t6120;
  t6154 = -1.*t824*t6113;
  t6161 = 0. + t2124 + t6154;
  t6151 = -1.*t553*t6121;
  t6163 = t2016*t6161;
  t6164 = 0. + t6151 + t6163;
  t6172 = t2016*t6121;
  t6173 = t553*t6161;
  t6176 = 0. + t6172 + t6173;
  t4275 = t82*t4151;
  t4280 = 0. + t4275;
  t4563 = -0.049*t4493;
  t4659 = -0.004500000000000004*t4654;
  t5914 = t82*t5910;
  t5928 = 0. + t4563 + t4659 + t5914;
  t6168 = t440*t6164;
  t6181 = t2839*t6176;
  t6189 = 0. + t6168 + t6181;
  t6190 = -1.*t3518*t6189;
  t6200 = t2839*t6164;
  t6209 = -1.*t440*t6176;
  t6211 = 0. + t6200 + t6209;
  t6213 = t421*t6211;
  t6215 = 0. + t6190 + t6213;
  t6225 = t82*t6215;
  t6229 = 0. + t6225;
  t5966 = -0.135*t4493;
  t5985 = -0.1305*t82;
  t5994 = 0.049*t4654;
  t5997 = t4654*t5910;
  t6002 = 0. + t5966 + t5985 + t5994 + t5997;
  t6039 = -0.09*t4738;
  t6044 = 0.049*t3518;
  t6050 = t421*t5849;
  t6056 = t3518*t5899;
  t6063 = 0. + t6039 + t6044 + t6050 + t6056;
  t6310 = 0. + t4654;
  t5934 = t4654*t4151;
  t5949 = 0. + t5934;
  t6015 = t3518*t3425;
  t6021 = t421*t4016;
  t6031 = 0. + t6015 + t6021;
  t6264 = t421*t6189;
  t6266 = t3518*t6211;
  t6277 = 0. + t6264 + t6266;
  t6321 = -1.*t82;
  t6326 = 0. + t6321;
  t6239 = t4654*t6215;
  t6247 = 0. + t6239;
  t6290 = -1.*t6063*t6277;
  t6065 = t6031*t6063;

  p_output1(0)=0;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=0;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=0;
  p_output1(9)=0;
  p_output1(10)=0;
  p_output1(11)=0;
  p_output1(12)=0;
  p_output1(13)=0;
  p_output1(14)=0;
  p_output1(15)=0;
  p_output1(16)=0;
  p_output1(17)=0;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0. + (t4280*t5928 + t5949*t6002 + t6065)*t6229 + t4280*(-1.*t5928*t6229 - 1.*t6002*t6247 + t6290);
  p_output1(22)=0.135*t6277 + (-1.*t4280*t5928 - 1.*t5949*t6002 - 1.*t6031*t6063)*t6310 + t4280*(0. + t5928*t6310 + t6002*t6326);
  p_output1(23)=0.135*t6031 + (t5928*t6229 + t6002*t6247 + t6063*t6277)*t6310 + t6229*(0. - 1.*t5928*t6310 - 1.*t6002*t6326);
  p_output1(24)=-0.049 + (0. + t4151*t5910 + t6065)*t6277 + t6031*(0. - 1.*t5910*t6215 + t6290);
  p_output1(25)=0. + 0.1305*t6031 - 0.135*t6215;
  p_output1(26)=0. - 0.135*t4151 - 0.1305*t6277;
  p_output1(27)=0.;
  p_output1(28)=0. - 1.*t4016*t5849 - 1.*t3425*t5899 + 0.049*t6189 - 0.09*t6211;
  p_output1(29)=0. - 0.09*t3425 + 0.049*t4016 + t5849*t6189 + t5899*t6211;
  p_output1(30)=0.;
  p_output1(31)=0. - 1.*t3145*t5745 - 1.*t2535*t5840 - 0.21*t6164 + 0.049*t6176;
  p_output1(32)=0. + 0.049*t2535 - 0.21*t3145 + t5745*t6164 + t5840*t6176;
  p_output1(33)=0.;
  p_output1(34)=0. - 1.*t2258*t5664 - 1.*t1721*t5736 + 0.0016*t6121 - 0.2707*t6161;
  p_output1(35)=0. - 0.2707*t1721 + 0.0016*t2258 + t5664*t6121 + t5736*t6161;
  p_output1(36)=0.;
  p_output1(37)=0. - 0.7055*t1281 - 1.*t1504*t5529 - 1.*t1281*t5642 - 0.0184*t6113;
  p_output1(38)=0. - 0.0184*t1281 - 0.7055*t1504 + t1281*t5529 + t5642*t6113;
  p_output1(39)=0.;
  p_output1(40)=0.05136484440000011;
  p_output1(41)=0.019994554799999897;
}


       
Eigen::Matrix<double,3,14> Jvb_VectorNav_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void Jvb_VectorNav_to_RightToeBottom(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



