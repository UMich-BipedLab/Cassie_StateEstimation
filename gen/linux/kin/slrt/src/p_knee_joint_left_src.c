/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:32 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_joint_left_src.h"

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
  double t2352;
  double t827;
  double t2425;
  double t1355;
  double t2671;
  double t136;
  double t1542;
  double t2993;
  double t3134;
  double t3166;
  double t3182;
  double t3272;
  double t3278;
  double t5389;
  double t5511;
  double t5564;
  double t6101;
  double t4899;
  double t4924;
  double t5305;
  double t6216;
  double t6581;
  double t6596;
  double t6600;
  double t6603;
  double t6504;
  double t6514;
  double t6576;
  double t6660;
  double t6673;
  double t6681;
  double t6706;
  double t6707;
  double t6709;
  double t6737;
  double t6753;
  double t6770;
  double t6771;
  double t6789;
  double t6800;
  double t6801;
  double t272;
  double t337;
  double t445;
  double t610;
  double t4109;
  double t4540;
  double t6888;
  double t6907;
  double t6918;
  double t6929;
  double t6932;
  double t6935;
  double t6091;
  double t6113;
  double t6123;
  double t6324;
  double t6326;
  double t6380;
  double t6944;
  double t6947;
  double t6969;
  double t6601;
  double t6613;
  double t6614;
  double t6682;
  double t6684;
  double t6700;
  double t6733;
  double t6749;
  double t6751;
  double t7022;
  double t7031;
  double t7036;
  double t7060;
  double t7061;
  double t7076;
  double t6780;
  double t6783;
  double t6788;
  double t7089;
  double t7093;
  double t7102;
  double t7115;
  double t7121;
  double t7131;
  double t7171;
  double t7173;
  double t7175;
  double t7222;
  double t7224;
  double t7231;
  double t7246;
  double t7248;
  double t7253;
  double t7257;
  double t7259;
  double t7262;
  double t7265;
  double t7266;
  double t7267;
  t2352 = Cos(var1[3]);
  t827 = Cos(var1[5]);
  t2425 = Sin(var1[4]);
  t1355 = Sin(var1[3]);
  t2671 = Sin(var1[5]);
  t136 = Cos(var1[6]);
  t1542 = -1.*t827*t1355;
  t2993 = t2352*t2425*t2671;
  t3134 = t1542 + t2993;
  t3166 = t2352*t827*t2425;
  t3182 = t1355*t2671;
  t3272 = t3166 + t3182;
  t3278 = Sin(var1[6]);
  t5389 = Cos(var1[7]);
  t5511 = -1.*t5389;
  t5564 = 1. + t5511;
  t6101 = Sin(var1[7]);
  t4899 = t136*t3134;
  t4924 = t3272*t3278;
  t5305 = t4899 + t4924;
  t6216 = Cos(var1[4]);
  t6581 = Cos(var1[8]);
  t6596 = -1.*t6581;
  t6600 = 1. + t6596;
  t6603 = Sin(var1[8]);
  t6504 = t2352*t6216*t5389;
  t6514 = t5305*t6101;
  t6576 = t6504 + t6514;
  t6660 = t136*t3272;
  t6673 = -1.*t3134*t3278;
  t6681 = t6660 + t6673;
  t6706 = Cos(var1[9]);
  t6707 = -1.*t6706;
  t6709 = 1. + t6707;
  t6737 = Sin(var1[9]);
  t6753 = t6581*t6576;
  t6770 = t6681*t6603;
  t6771 = t6753 + t6770;
  t6789 = t6581*t6681;
  t6800 = -1.*t6576*t6603;
  t6801 = t6789 + t6800;
  t272 = -1.*t136;
  t337 = 1. + t272;
  t445 = 0.135*t337;
  t610 = 0. + t445;
  t4109 = -0.135*t3278;
  t4540 = 0. + t4109;
  t6888 = t2352*t827;
  t6907 = t1355*t2425*t2671;
  t6918 = t6888 + t6907;
  t6929 = t827*t1355*t2425;
  t6932 = -1.*t2352*t2671;
  t6935 = t6929 + t6932;
  t6091 = 0.135*t5564;
  t6113 = 0.049*t6101;
  t6123 = 0. + t6091 + t6113;
  t6324 = -0.049*t5564;
  t6326 = 0.135*t6101;
  t6380 = 0. + t6324 + t6326;
  t6944 = t136*t6918;
  t6947 = t6935*t3278;
  t6969 = t6944 + t6947;
  t6601 = -0.049*t6600;
  t6613 = -0.09*t6603;
  t6614 = 0. + t6601 + t6613;
  t6682 = -0.09*t6600;
  t6684 = 0.049*t6603;
  t6700 = 0. + t6682 + t6684;
  t6733 = -0.049*t6709;
  t6749 = -0.21*t6737;
  t6751 = 0. + t6733 + t6749;
  t7022 = t6216*t5389*t1355;
  t7031 = t6969*t6101;
  t7036 = t7022 + t7031;
  t7060 = t136*t6935;
  t7061 = -1.*t6918*t3278;
  t7076 = t7060 + t7061;
  t6780 = -0.21*t6709;
  t6783 = 0.049*t6737;
  t6788 = 0. + t6780 + t6783;
  t7089 = t6581*t7036;
  t7093 = t7076*t6603;
  t7102 = t7089 + t7093;
  t7115 = t6581*t7076;
  t7121 = -1.*t7036*t6603;
  t7131 = t7115 + t7121;
  t7171 = t6216*t136*t2671;
  t7173 = t6216*t827*t3278;
  t7175 = t7171 + t7173;
  t7222 = -1.*t5389*t2425;
  t7224 = t7175*t6101;
  t7231 = t7222 + t7224;
  t7246 = t6216*t827*t136;
  t7248 = -1.*t6216*t2671*t3278;
  t7253 = t7246 + t7248;
  t7257 = t6581*t7231;
  t7259 = t7253*t6603;
  t7262 = t7257 + t7259;
  t7265 = t6581*t7253;
  t7266 = -1.*t7231*t6603;
  t7267 = t7265 + t7266;
  p_output1[0]=0. + t3272*t4540 + t3134*t610 + t5305*t6123 + 0.1305*(t5305*t5389 - 1.*t2352*t6101*t6216) + t2352*t6216*t6380 + t6576*t6614 + t6681*t6700 + t6751*t6771 + t6788*t6801 - 0.21*(-1.*t6737*t6771 + t6706*t6801) - 0.049*(t6706*t6771 + t6737*t6801) + var1[0];
  p_output1[1]=0. + t1355*t6216*t6380 + t610*t6918 + t4540*t6935 + t6123*t6969 + 0.1305*(-1.*t1355*t6101*t6216 + t5389*t6969) + t6614*t7036 + t6700*t7076 + t6751*t7102 + t6788*t7131 - 0.21*(-1.*t6737*t7102 + t6706*t7131) - 0.049*(t6706*t7102 + t6737*t7131) + var1[1];
  p_output1[2]=0. + t2671*t610*t6216 - 1.*t2425*t6380 + t6123*t7175 + 0.1305*(t2425*t6101 + t5389*t7175) + t6614*t7231 + t6700*t7253 + t6751*t7262 + t6788*t7267 - 0.21*(-1.*t6737*t7262 + t6706*t7267) - 0.049*(t6706*t7262 + t6737*t7267) + t4540*t6216*t827 + var1[2];
}



void p_knee_joint_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
