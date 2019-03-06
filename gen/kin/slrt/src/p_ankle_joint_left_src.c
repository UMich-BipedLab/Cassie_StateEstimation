/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:36 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_ankle_joint_left_src.h"

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
  double t1021;
  double t849;
  double t1309;
  double t890;
  double t1433;
  double t59;
  double t997;
  double t1732;
  double t1845;
  double t2668;
  double t2685;
  double t2815;
  double t2997;
  double t4726;
  double t4773;
  double t4907;
  double t5055;
  double t4536;
  double t4561;
  double t4620;
  double t5110;
  double t5415;
  double t5429;
  double t5454;
  double t5471;
  double t5386;
  double t5410;
  double t5412;
  double t5509;
  double t5514;
  double t5548;
  double t5638;
  double t5639;
  double t5644;
  double t5656;
  double t5707;
  double t5710;
  double t5746;
  double t5790;
  double t5817;
  double t5865;
  double t5888;
  double t5894;
  double t5899;
  double t5918;
  double t5974;
  double t5987;
  double t5989;
  double t6015;
  double t6052;
  double t6078;
  double t6131;
  double t6148;
  double t6149;
  double t6172;
  double t6192;
  double t6194;
  double t6205;
  double t6254;
  double t6259;
  double t6278;
  double t675;
  double t680;
  double t683;
  double t791;
  double t3460;
  double t3532;
  double t6364;
  double t6365;
  double t6372;
  double t6403;
  double t6404;
  double t6411;
  double t5045;
  double t5066;
  double t5092;
  double t5242;
  double t5246;
  double t5280;
  double t6422;
  double t6423;
  double t6425;
  double t5465;
  double t5473;
  double t5497;
  double t5577;
  double t5586;
  double t5617;
  double t5647;
  double t5677;
  double t5701;
  double t6488;
  double t6503;
  double t6513;
  double t6520;
  double t6524;
  double t6542;
  double t5760;
  double t5764;
  double t5787;
  double t5906;
  double t5942;
  double t5964;
  double t6552;
  double t6561;
  double t6571;
  double t6582;
  double t6583;
  double t6597;
  double t5997;
  double t6008;
  double t6011;
  double t6163;
  double t6174;
  double t6178;
  double t6634;
  double t6651;
  double t6659;
  double t6690;
  double t6720;
  double t6731;
  double t6236;
  double t6251;
  double t6253;
  double t6741;
  double t6744;
  double t6745;
  double t6779;
  double t6830;
  double t6843;
  double t6965;
  double t6974;
  double t6980;
  double t7101;
  double t7107;
  double t7109;
  double t7151;
  double t7153;
  double t7177;
  double t7196;
  double t7223;
  double t7225;
  double t7271;
  double t7273;
  double t7297;
  double t7312;
  double t7319;
  double t7325;
  double t7334;
  double t7337;
  double t7338;
  double t7353;
  double t7354;
  double t7361;
  double t7367;
  double t7368;
  double t7369;
  t1021 = Cos(var1[3]);
  t849 = Cos(var1[5]);
  t1309 = Sin(var1[4]);
  t890 = Sin(var1[3]);
  t1433 = Sin(var1[5]);
  t59 = Cos(var1[6]);
  t997 = -1.*t849*t890;
  t1732 = t1021*t1309*t1433;
  t1845 = t997 + t1732;
  t2668 = t1021*t849*t1309;
  t2685 = t890*t1433;
  t2815 = t2668 + t2685;
  t2997 = Sin(var1[6]);
  t4726 = Cos(var1[7]);
  t4773 = -1.*t4726;
  t4907 = 1. + t4773;
  t5055 = Sin(var1[7]);
  t4536 = t59*t1845;
  t4561 = t2815*t2997;
  t4620 = t4536 + t4561;
  t5110 = Cos(var1[4]);
  t5415 = Cos(var1[8]);
  t5429 = -1.*t5415;
  t5454 = 1. + t5429;
  t5471 = Sin(var1[8]);
  t5386 = t1021*t5110*t4726;
  t5410 = t4620*t5055;
  t5412 = t5386 + t5410;
  t5509 = t59*t2815;
  t5514 = -1.*t1845*t2997;
  t5548 = t5509 + t5514;
  t5638 = Cos(var1[9]);
  t5639 = -1.*t5638;
  t5644 = 1. + t5639;
  t5656 = Sin(var1[9]);
  t5707 = t5415*t5412;
  t5710 = t5548*t5471;
  t5746 = t5707 + t5710;
  t5790 = t5415*t5548;
  t5817 = -1.*t5412*t5471;
  t5865 = t5790 + t5817;
  t5888 = Cos(var1[10]);
  t5894 = -1.*t5888;
  t5899 = 1. + t5894;
  t5918 = Sin(var1[10]);
  t5974 = -1.*t5656*t5746;
  t5987 = t5638*t5865;
  t5989 = t5974 + t5987;
  t6015 = t5638*t5746;
  t6052 = t5656*t5865;
  t6078 = t6015 + t6052;
  t6131 = Cos(var1[11]);
  t6148 = -1.*t6131;
  t6149 = 1. + t6148;
  t6172 = Sin(var1[11]);
  t6192 = t5918*t5989;
  t6194 = t5888*t6078;
  t6205 = t6192 + t6194;
  t6254 = t5888*t5989;
  t6259 = -1.*t5918*t6078;
  t6278 = t6254 + t6259;
  t675 = -1.*t59;
  t680 = 1. + t675;
  t683 = 0.135*t680;
  t791 = 0. + t683;
  t3460 = -0.135*t2997;
  t3532 = 0. + t3460;
  t6364 = t1021*t849;
  t6365 = t890*t1309*t1433;
  t6372 = t6364 + t6365;
  t6403 = t849*t890*t1309;
  t6404 = -1.*t1021*t1433;
  t6411 = t6403 + t6404;
  t5045 = 0.135*t4907;
  t5066 = 0.049*t5055;
  t5092 = 0. + t5045 + t5066;
  t5242 = -0.049*t4907;
  t5246 = 0.135*t5055;
  t5280 = 0. + t5242 + t5246;
  t6422 = t59*t6372;
  t6423 = t6411*t2997;
  t6425 = t6422 + t6423;
  t5465 = -0.049*t5454;
  t5473 = -0.09*t5471;
  t5497 = 0. + t5465 + t5473;
  t5577 = -0.09*t5454;
  t5586 = 0.049*t5471;
  t5617 = 0. + t5577 + t5586;
  t5647 = -0.049*t5644;
  t5677 = -0.21*t5656;
  t5701 = 0. + t5647 + t5677;
  t6488 = t5110*t4726*t890;
  t6503 = t6425*t5055;
  t6513 = t6488 + t6503;
  t6520 = t59*t6411;
  t6524 = -1.*t6372*t2997;
  t6542 = t6520 + t6524;
  t5760 = -0.21*t5644;
  t5764 = 0.049*t5656;
  t5787 = 0. + t5760 + t5764;
  t5906 = -0.2707*t5899;
  t5942 = 0.0016*t5918;
  t5964 = 0. + t5906 + t5942;
  t6552 = t5415*t6513;
  t6561 = t6542*t5471;
  t6571 = t6552 + t6561;
  t6582 = t5415*t6542;
  t6583 = -1.*t6513*t5471;
  t6597 = t6582 + t6583;
  t5997 = -0.0016*t5899;
  t6008 = -0.2707*t5918;
  t6011 = 0. + t5997 + t6008;
  t6163 = 0.0184*t6149;
  t6174 = -0.7055*t6172;
  t6178 = 0. + t6163 + t6174;
  t6634 = -1.*t5656*t6571;
  t6651 = t5638*t6597;
  t6659 = t6634 + t6651;
  t6690 = t5638*t6571;
  t6720 = t5656*t6597;
  t6731 = t6690 + t6720;
  t6236 = -0.7055*t6149;
  t6251 = -0.0184*t6172;
  t6253 = 0. + t6236 + t6251;
  t6741 = t5918*t6659;
  t6744 = t5888*t6731;
  t6745 = t6741 + t6744;
  t6779 = t5888*t6659;
  t6830 = -1.*t5918*t6731;
  t6843 = t6779 + t6830;
  t6965 = t5110*t59*t1433;
  t6974 = t5110*t849*t2997;
  t6980 = t6965 + t6974;
  t7101 = -1.*t4726*t1309;
  t7107 = t6980*t5055;
  t7109 = t7101 + t7107;
  t7151 = t5110*t849*t59;
  t7153 = -1.*t5110*t1433*t2997;
  t7177 = t7151 + t7153;
  t7196 = t5415*t7109;
  t7223 = t7177*t5471;
  t7225 = t7196 + t7223;
  t7271 = t5415*t7177;
  t7273 = -1.*t7109*t5471;
  t7297 = t7271 + t7273;
  t7312 = -1.*t5656*t7225;
  t7319 = t5638*t7297;
  t7325 = t7312 + t7319;
  t7334 = t5638*t7225;
  t7337 = t5656*t7297;
  t7338 = t7334 + t7337;
  t7353 = t5918*t7325;
  t7354 = t5888*t7338;
  t7361 = t7353 + t7354;
  t7367 = t5888*t7325;
  t7368 = -1.*t5918*t7338;
  t7369 = t7367 + t7368;
  p_output1[0]=0. + t2815*t3532 + t4620*t5092 + 0.1305*(t4620*t4726 - 1.*t1021*t5055*t5110) + t1021*t5110*t5280 + t5412*t5497 + t5548*t5617 + t5701*t5746 + t5787*t5865 + t5964*t5989 + t6011*t6078 + t6178*t6205 + t6253*t6278 - 0.7055*(-1.*t6172*t6205 + t6131*t6278) + 0.0184*(t6131*t6205 + t6172*t6278) + t1845*t791 + var1[0];
  p_output1[1]=0. + t3532*t6411 + t5092*t6425 + t5497*t6513 + t5617*t6542 + t5701*t6571 + t5787*t6597 + t5964*t6659 + t6011*t6731 + t6178*t6745 + t6253*t6843 - 0.7055*(-1.*t6172*t6745 + t6131*t6843) + 0.0184*(t6131*t6745 + t6172*t6843) + t6372*t791 + t5110*t5280*t890 + 0.1305*(t4726*t6425 - 1.*t5055*t5110*t890) + var1[1];
  p_output1[2]=0. - 1.*t1309*t5280 + t5092*t6980 + 0.1305*(t1309*t5055 + t4726*t6980) + t5497*t7109 + t5617*t7177 + t5701*t7225 + t5787*t7297 + t5964*t7325 + t6011*t7338 + t6178*t7361 + t6253*t7369 - 0.7055*(-1.*t6172*t7361 + t6131*t7369) + 0.0184*(t6131*t7361 + t6172*t7369) + t1433*t5110*t791 + t3532*t5110*t849 + var1[2];
}



void p_ankle_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
