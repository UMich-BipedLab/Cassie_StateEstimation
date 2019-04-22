/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:38 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t655;
  double t458;
  double t741;
  double t468;
  double t878;
  double t3;
  double t609;
  double t1227;
  double t1235;
  double t1403;
  double t1422;
  double t1753;
  double t1972;
  double t2764;
  double t2815;
  double t2882;
  double t3024;
  double t2472;
  double t2507;
  double t2638;
  double t3275;
  double t4081;
  double t4090;
  double t4107;
  double t4167;
  double t4038;
  double t4047;
  double t4068;
  double t4214;
  double t4241;
  double t4265;
  double t4342;
  double t4345;
  double t4811;
  double t4885;
  double t5033;
  double t5042;
  double t5085;
  double t5361;
  double t5403;
  double t5413;
  double t5603;
  double t5605;
  double t5709;
  double t5972;
  double t6015;
  double t6038;
  double t6042;
  double t6172;
  double t6173;
  double t6186;
  double t6227;
  double t6239;
  double t6250;
  double t6278;
  double t6300;
  double t6307;
  double t6308;
  double t6374;
  double t6394;
  double t6405;
  double t6432;
  double t6440;
  double t6448;
  double t6460;
  double t6469;
  double t6502;
  double t6535;
  double t6615;
  double t6633;
  double t6636;
  double t229;
  double t292;
  double t324;
  double t339;
  double t1974;
  double t2207;
  double t6771;
  double t6782;
  double t6794;
  double t6807;
  double t6808;
  double t6850;
  double t3004;
  double t3153;
  double t3154;
  double t3391;
  double t3431;
  double t3443;
  double t6873;
  double t6877;
  double t6893;
  double t4148;
  double t4181;
  double t4198;
  double t4271;
  double t4304;
  double t4322;
  double t4827;
  double t4974;
  double t5003;
  double t6956;
  double t6957;
  double t6971;
  double t6988;
  double t6995;
  double t7001;
  double t5119;
  double t5162;
  double t5196;
  double t5772;
  double t5976;
  double t6011;
  double t7007;
  double t7030;
  double t7031;
  double t7071;
  double t7098;
  double t7107;
  double t6097;
  double t6113;
  double t6128;
  double t6263;
  double t6280;
  double t6283;
  double t7109;
  double t7123;
  double t7129;
  double t7159;
  double t7169;
  double t7175;
  double t6336;
  double t6339;
  double t6368;
  double t6458;
  double t6461;
  double t6466;
  double t7212;
  double t7214;
  double t7215;
  double t7228;
  double t7241;
  double t7252;
  double t6568;
  double t6587;
  double t6610;
  double t7265;
  double t7266;
  double t7272;
  double t7297;
  double t7303;
  double t7312;
  double t7422;
  double t7425;
  double t7433;
  double t7503;
  double t7523;
  double t7531;
  double t7556;
  double t7562;
  double t7574;
  double t7590;
  double t7600;
  double t7619;
  double t7681;
  double t7707;
  double t7712;
  double t7744;
  double t7752;
  double t7755;
  double t7784;
  double t7785;
  double t7812;
  double t7832;
  double t7853;
  double t7865;
  double t7879;
  double t7895;
  double t7905;
  double t7910;
  double t7911;
  double t7920;
  double t7929;
  double t7937;
  double t7942;
  t655 = Cos(var1[3]);
  t458 = Cos(var1[5]);
  t741 = Sin(var1[4]);
  t468 = Sin(var1[3]);
  t878 = Sin(var1[5]);
  t3 = Cos(var1[6]);
  t609 = -1.*t458*t468;
  t1227 = t655*t741*t878;
  t1235 = t609 + t1227;
  t1403 = t655*t458*t741;
  t1422 = t468*t878;
  t1753 = t1403 + t1422;
  t1972 = Sin(var1[6]);
  t2764 = Cos(var1[7]);
  t2815 = -1.*t2764;
  t2882 = 1. + t2815;
  t3024 = Sin(var1[7]);
  t2472 = t3*t1235;
  t2507 = t1753*t1972;
  t2638 = t2472 + t2507;
  t3275 = Cos(var1[4]);
  t4081 = Cos(var1[8]);
  t4090 = -1.*t4081;
  t4107 = 1. + t4090;
  t4167 = Sin(var1[8]);
  t4038 = t655*t3275*t2764;
  t4047 = t2638*t3024;
  t4068 = t4038 + t4047;
  t4214 = t3*t1753;
  t4241 = -1.*t1235*t1972;
  t4265 = t4214 + t4241;
  t4342 = Cos(var1[9]);
  t4345 = -1.*t4342;
  t4811 = 1. + t4345;
  t4885 = Sin(var1[9]);
  t5033 = t4081*t4068;
  t5042 = t4265*t4167;
  t5085 = t5033 + t5042;
  t5361 = t4081*t4265;
  t5403 = -1.*t4068*t4167;
  t5413 = t5361 + t5403;
  t5603 = Cos(var1[10]);
  t5605 = -1.*t5603;
  t5709 = 1. + t5605;
  t5972 = Sin(var1[10]);
  t6015 = -1.*t4885*t5085;
  t6038 = t4342*t5413;
  t6042 = t6015 + t6038;
  t6172 = t4342*t5085;
  t6173 = t4885*t5413;
  t6186 = t6172 + t6173;
  t6227 = Cos(var1[11]);
  t6239 = -1.*t6227;
  t6250 = 1. + t6239;
  t6278 = Sin(var1[11]);
  t6300 = t5972*t6042;
  t6307 = t5603*t6186;
  t6308 = t6300 + t6307;
  t6374 = t5603*t6042;
  t6394 = -1.*t5972*t6186;
  t6405 = t6374 + t6394;
  t6432 = Cos(var1[12]);
  t6440 = -1.*t6432;
  t6448 = 1. + t6440;
  t6460 = Sin(var1[12]);
  t6469 = -1.*t6278*t6308;
  t6502 = t6227*t6405;
  t6535 = t6469 + t6502;
  t6615 = t6227*t6308;
  t6633 = t6278*t6405;
  t6636 = t6615 + t6633;
  t229 = -1.*t3;
  t292 = 1. + t229;
  t324 = 0.135*t292;
  t339 = 0. + t324;
  t1974 = -0.135*t1972;
  t2207 = 0. + t1974;
  t6771 = t655*t458;
  t6782 = t468*t741*t878;
  t6794 = t6771 + t6782;
  t6807 = t458*t468*t741;
  t6808 = -1.*t655*t878;
  t6850 = t6807 + t6808;
  t3004 = 0.135*t2882;
  t3153 = 0.049*t3024;
  t3154 = 0. + t3004 + t3153;
  t3391 = -0.049*t2882;
  t3431 = 0.135*t3024;
  t3443 = 0. + t3391 + t3431;
  t6873 = t3*t6794;
  t6877 = t6850*t1972;
  t6893 = t6873 + t6877;
  t4148 = -0.049*t4107;
  t4181 = -0.09*t4167;
  t4198 = 0. + t4148 + t4181;
  t4271 = -0.09*t4107;
  t4304 = 0.049*t4167;
  t4322 = 0. + t4271 + t4304;
  t4827 = -0.049*t4811;
  t4974 = -0.21*t4885;
  t5003 = 0. + t4827 + t4974;
  t6956 = t3275*t2764*t468;
  t6957 = t6893*t3024;
  t6971 = t6956 + t6957;
  t6988 = t3*t6850;
  t6995 = -1.*t6794*t1972;
  t7001 = t6988 + t6995;
  t5119 = -0.21*t4811;
  t5162 = 0.049*t4885;
  t5196 = 0. + t5119 + t5162;
  t5772 = -0.2707*t5709;
  t5976 = 0.0016*t5972;
  t6011 = 0. + t5772 + t5976;
  t7007 = t4081*t6971;
  t7030 = t7001*t4167;
  t7031 = t7007 + t7030;
  t7071 = t4081*t7001;
  t7098 = -1.*t6971*t4167;
  t7107 = t7071 + t7098;
  t6097 = -0.0016*t5709;
  t6113 = -0.2707*t5972;
  t6128 = 0. + t6097 + t6113;
  t6263 = 0.0184*t6250;
  t6280 = -0.7055*t6278;
  t6283 = 0. + t6263 + t6280;
  t7109 = -1.*t4885*t7031;
  t7123 = t4342*t7107;
  t7129 = t7109 + t7123;
  t7159 = t4342*t7031;
  t7169 = t4885*t7107;
  t7175 = t7159 + t7169;
  t6336 = -0.7055*t6250;
  t6339 = -0.0184*t6278;
  t6368 = 0. + t6336 + t6339;
  t6458 = -1.1135*t6448;
  t6461 = 0.0216*t6460;
  t6466 = 0. + t6458 + t6461;
  t7212 = t5972*t7129;
  t7214 = t5603*t7175;
  t7215 = t7212 + t7214;
  t7228 = t5603*t7129;
  t7241 = -1.*t5972*t7175;
  t7252 = t7228 + t7241;
  t6568 = -0.0216*t6448;
  t6587 = -1.1135*t6460;
  t6610 = 0. + t6568 + t6587;
  t7265 = -1.*t6278*t7215;
  t7266 = t6227*t7252;
  t7272 = t7265 + t7266;
  t7297 = t6227*t7215;
  t7303 = t6278*t7252;
  t7312 = t7297 + t7303;
  t7422 = t3275*t3*t878;
  t7425 = t3275*t458*t1972;
  t7433 = t7422 + t7425;
  t7503 = -1.*t2764*t741;
  t7523 = t7433*t3024;
  t7531 = t7503 + t7523;
  t7556 = t3275*t458*t3;
  t7562 = -1.*t3275*t878*t1972;
  t7574 = t7556 + t7562;
  t7590 = t4081*t7531;
  t7600 = t7574*t4167;
  t7619 = t7590 + t7600;
  t7681 = t4081*t7574;
  t7707 = -1.*t7531*t4167;
  t7712 = t7681 + t7707;
  t7744 = -1.*t4885*t7619;
  t7752 = t4342*t7712;
  t7755 = t7744 + t7752;
  t7784 = t4342*t7619;
  t7785 = t4885*t7712;
  t7812 = t7784 + t7785;
  t7832 = t5972*t7755;
  t7853 = t5603*t7812;
  t7865 = t7832 + t7853;
  t7879 = t5603*t7755;
  t7895 = -1.*t5972*t7812;
  t7905 = t7879 + t7895;
  t7910 = -1.*t6278*t7865;
  t7911 = t6227*t7905;
  t7920 = t7910 + t7911;
  t7929 = t6227*t7865;
  t7937 = t6278*t7905;
  t7942 = t7929 + t7937;

  p_output1(0)=0. + t1753*t2207 + t2638*t3154 + t1235*t339 + t4068*t4198 + t4265*t4322 + t5003*t5085 + t5196*t5413 + t6011*t6042 + t6128*t6186 + t6283*t6308 + t6368*t6405 + t6466*t6535 + t3275*t3443*t655 + 0.1305*(t2638*t2764 - 1.*t3024*t3275*t655) + t6610*t6636 + 0.0306*(t6460*t6535 + t6432*t6636) - 1.1312*(t6432*t6535 - 1.*t6460*t6636) + var1(0);
  p_output1(1)=0. + t3275*t3443*t468 + t339*t6794 + t2207*t6850 + t3154*t6893 + 0.1305*(-1.*t3024*t3275*t468 + t2764*t6893) + t4198*t6971 + t4322*t7001 + t5003*t7031 + t5196*t7107 + t6011*t7129 + t6128*t7175 + t6283*t7215 + t6368*t7252 + t6466*t7272 + t6610*t7312 + 0.0306*(t6460*t7272 + t6432*t7312) - 1.1312*(t6432*t7272 - 1.*t6460*t7312) + var1(1);
  p_output1(2)=0. + t2207*t3275*t458 - 1.*t3443*t741 + t3154*t7433 + 0.1305*(t3024*t741 + t2764*t7433) + t4198*t7531 + t4322*t7574 + t5003*t7619 + t5196*t7712 + t6011*t7755 + t6128*t7812 + t6283*t7865 + t6368*t7905 + t6466*t7920 + t6610*t7942 + 0.0306*(t6460*t7920 + t6432*t7942) - 1.1312*(t6432*t7920 - 1.*t6460*t7942) + t3275*t339*t878 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_LeftToeBottom(const Eigen::Matrix<double,20,1> &var1)
//void p_LeftToeBottom(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



