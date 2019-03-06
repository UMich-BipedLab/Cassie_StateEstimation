/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:49 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_toe_joint_right_src.h"

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
  double t136;
  double t1091;
  double t2004;
  double t1371;
  double t2423;
  double t343;
  double t474;
  double t480;
  double t579;
  double t952;
  double t1925;
  double t2588;
  double t2589;
  double t2725;
  double t3228;
  double t3355;
  double t3368;
  double t137;
  double t4303;
  double t4574;
  double t4799;
  double t4990;
  double t5241;
  double t5269;
  double t5486;
  double t5736;
  double t5737;
  double t5741;
  double t5800;
  double t5803;
  double t5804;
  double t5824;
  double t5826;
  double t5828;
  double t5851;
  double t5860;
  double t5864;
  double t5867;
  double t5917;
  double t5921;
  double t5929;
  double t5934;
  double t5936;
  double t5939;
  double t5945;
  double t5967;
  double t5969;
  double t5991;
  double t6024;
  double t6026;
  double t6029;
  double t6074;
  double t6100;
  double t6134;
  double t6151;
  double t6171;
  double t6175;
  double t6179;
  double t6265;
  double t6312;
  double t6347;
  double t6374;
  double t6379;
  double t6383;
  double t6385;
  double t6448;
  double t6456;
  double t6457;
  double t6528;
  double t6531;
  double t6547;
  double t540;
  double t670;
  double t748;
  double t974;
  double t1090;
  double t2903;
  double t3024;
  double t3115;
  double t3147;
  double t3843;
  double t4246;
  double t4296;
  double t6725;
  double t6762;
  double t6779;
  double t6800;
  double t6813;
  double t6820;
  double t5315;
  double t5520;
  double t5545;
  double t6822;
  double t6835;
  double t6839;
  double t5793;
  double t5794;
  double t5796;
  double t5834;
  double t5855;
  double t5856;
  double t6856;
  double t6857;
  double t6865;
  double t6892;
  double t6898;
  double t6900;
  double t5883;
  double t5893;
  double t5915;
  double t5940;
  double t5946;
  double t5961;
  double t6958;
  double t6971;
  double t6974;
  double t7000;
  double t7019;
  double t7028;
  double t6007;
  double t6013;
  double t6014;
  double t6135;
  double t6167;
  double t6170;
  double t7045;
  double t7049;
  double t7076;
  double t7124;
  double t7142;
  double t7172;
  double t6211;
  double t6213;
  double t6220;
  double t6384;
  double t6398;
  double t6433;
  double t7179;
  double t7181;
  double t7182;
  double t7232;
  double t7240;
  double t7245;
  double t6498;
  double t6504;
  double t6509;
  double t7261;
  double t7262;
  double t7267;
  double t7305;
  double t7327;
  double t7347;
  double t7493;
  double t7499;
  double t7506;
  double t7533;
  double t7534;
  double t7537;
  double t7574;
  double t7579;
  double t7589;
  double t7603;
  double t7614;
  double t7628;
  double t7644;
  double t7659;
  double t7664;
  double t7683;
  double t7691;
  double t7697;
  double t7718;
  double t7746;
  double t7747;
  double t7759;
  double t7761;
  double t7763;
  double t7787;
  double t7805;
  double t7807;
  double t7819;
  double t7823;
  double t7830;
  double t7878;
  double t7887;
  double t7899;
  t136 = Cos(var1[3]);
  t1091 = Cos(var1[5]);
  t2004 = Sin(var1[3]);
  t1371 = Sin(var1[4]);
  t2423 = Sin(var1[5]);
  t343 = Cos(var1[14]);
  t474 = -1.*t343;
  t480 = 1. + t474;
  t579 = Sin(var1[14]);
  t952 = Sin(var1[13]);
  t1925 = t136*t1091*t1371;
  t2588 = t2004*t2423;
  t2589 = t1925 + t2588;
  t2725 = Cos(var1[13]);
  t3228 = -1.*t1091*t2004;
  t3355 = t136*t1371*t2423;
  t3368 = t3228 + t3355;
  t137 = Cos(var1[4]);
  t4303 = t952*t2589;
  t4574 = t2725*t3368;
  t4799 = t4303 + t4574;
  t4990 = Cos(var1[15]);
  t5241 = -1.*t4990;
  t5269 = 1. + t5241;
  t5486 = Sin(var1[15]);
  t5736 = t2725*t2589;
  t5737 = -1.*t952*t3368;
  t5741 = t5736 + t5737;
  t5800 = t343*t136*t137;
  t5803 = t579*t4799;
  t5804 = t5800 + t5803;
  t5824 = Cos(var1[16]);
  t5826 = -1.*t5824;
  t5828 = 1. + t5826;
  t5851 = Sin(var1[16]);
  t5860 = t5486*t5741;
  t5864 = t4990*t5804;
  t5867 = t5860 + t5864;
  t5917 = t4990*t5741;
  t5921 = -1.*t5486*t5804;
  t5929 = t5917 + t5921;
  t5934 = Cos(var1[17]);
  t5936 = -1.*t5934;
  t5939 = 1. + t5936;
  t5945 = Sin(var1[17]);
  t5967 = -1.*t5851*t5867;
  t5969 = t5824*t5929;
  t5991 = t5967 + t5969;
  t6024 = t5824*t5867;
  t6026 = t5851*t5929;
  t6029 = t6024 + t6026;
  t6074 = Cos(var1[18]);
  t6100 = -1.*t6074;
  t6134 = 1. + t6100;
  t6151 = Sin(var1[18]);
  t6171 = t5945*t5991;
  t6175 = t5934*t6029;
  t6179 = t6171 + t6175;
  t6265 = t5934*t5991;
  t6312 = -1.*t5945*t6029;
  t6347 = t6265 + t6312;
  t6374 = Cos(var1[19]);
  t6379 = -1.*t6374;
  t6383 = 1. + t6379;
  t6385 = Sin(var1[19]);
  t6448 = -1.*t6151*t6179;
  t6456 = t6074*t6347;
  t6457 = t6448 + t6456;
  t6528 = t6074*t6179;
  t6531 = t6151*t6347;
  t6547 = t6528 + t6531;
  t540 = -0.049*t480;
  t670 = -0.135*t579;
  t748 = 0. + t540 + t670;
  t974 = 0.135*t952;
  t1090 = 0. + t974;
  t2903 = -1.*t2725;
  t3024 = 1. + t2903;
  t3115 = -0.135*t3024;
  t3147 = 0. + t3115;
  t3843 = -0.135*t480;
  t4246 = 0.049*t579;
  t4296 = 0. + t3843 + t4246;
  t6725 = t1091*t2004*t1371;
  t6762 = -1.*t136*t2423;
  t6779 = t6725 + t6762;
  t6800 = t136*t1091;
  t6813 = t2004*t1371*t2423;
  t6820 = t6800 + t6813;
  t5315 = -0.09*t5269;
  t5520 = 0.049*t5486;
  t5545 = 0. + t5315 + t5520;
  t6822 = t952*t6779;
  t6835 = t2725*t6820;
  t6839 = t6822 + t6835;
  t5793 = -0.049*t5269;
  t5794 = -0.09*t5486;
  t5796 = 0. + t5793 + t5794;
  t5834 = -0.049*t5828;
  t5855 = -0.21*t5851;
  t5856 = 0. + t5834 + t5855;
  t6856 = t2725*t6779;
  t6857 = -1.*t952*t6820;
  t6865 = t6856 + t6857;
  t6892 = t343*t137*t2004;
  t6898 = t579*t6839;
  t6900 = t6892 + t6898;
  t5883 = -0.21*t5828;
  t5893 = 0.049*t5851;
  t5915 = 0. + t5883 + t5893;
  t5940 = -0.2707*t5939;
  t5946 = 0.0016*t5945;
  t5961 = 0. + t5940 + t5946;
  t6958 = t5486*t6865;
  t6971 = t4990*t6900;
  t6974 = t6958 + t6971;
  t7000 = t4990*t6865;
  t7019 = -1.*t5486*t6900;
  t7028 = t7000 + t7019;
  t6007 = -0.0016*t5939;
  t6013 = -0.2707*t5945;
  t6014 = 0. + t6007 + t6013;
  t6135 = 0.0184*t6134;
  t6167 = -0.7055*t6151;
  t6170 = 0. + t6135 + t6167;
  t7045 = -1.*t5851*t6974;
  t7049 = t5824*t7028;
  t7076 = t7045 + t7049;
  t7124 = t5824*t6974;
  t7142 = t5851*t7028;
  t7172 = t7124 + t7142;
  t6211 = -0.7055*t6134;
  t6213 = -0.0184*t6151;
  t6220 = 0. + t6211 + t6213;
  t6384 = -1.1135*t6383;
  t6398 = 0.0216*t6385;
  t6433 = 0. + t6384 + t6398;
  t7179 = t5945*t7076;
  t7181 = t5934*t7172;
  t7182 = t7179 + t7181;
  t7232 = t5934*t7076;
  t7240 = -1.*t5945*t7172;
  t7245 = t7232 + t7240;
  t6498 = -0.0216*t6383;
  t6504 = -1.1135*t6385;
  t6509 = 0. + t6498 + t6504;
  t7261 = -1.*t6151*t7182;
  t7262 = t6074*t7245;
  t7267 = t7261 + t7262;
  t7305 = t6074*t7182;
  t7327 = t6151*t7245;
  t7347 = t7305 + t7327;
  t7493 = t137*t1091*t952;
  t7499 = t2725*t137*t2423;
  t7506 = t7493 + t7499;
  t7533 = t2725*t137*t1091;
  t7534 = -1.*t137*t952*t2423;
  t7537 = t7533 + t7534;
  t7574 = -1.*t343*t1371;
  t7579 = t579*t7506;
  t7589 = t7574 + t7579;
  t7603 = t5486*t7537;
  t7614 = t4990*t7589;
  t7628 = t7603 + t7614;
  t7644 = t4990*t7537;
  t7659 = -1.*t5486*t7589;
  t7664 = t7644 + t7659;
  t7683 = -1.*t5851*t7628;
  t7691 = t5824*t7664;
  t7697 = t7683 + t7691;
  t7718 = t5824*t7628;
  t7746 = t5851*t7664;
  t7747 = t7718 + t7746;
  t7759 = t5945*t7697;
  t7761 = t5934*t7747;
  t7763 = t7759 + t7761;
  t7787 = t5934*t7697;
  t7805 = -1.*t5945*t7747;
  t7807 = t7787 + t7805;
  t7819 = -1.*t6151*t7763;
  t7823 = t6074*t7807;
  t7830 = t7819 + t7823;
  t7878 = t6074*t7763;
  t7887 = t6151*t7807;
  t7899 = t7878 + t7887;
  p_output1[0]=0. + t1090*t2589 + t3147*t3368 + t4296*t4799 + t5545*t5741 - 0.1305*(t343*t4799 - 1.*t136*t137*t579) + t5796*t5804 + t5856*t5867 + t5915*t5929 + t5961*t5991 + t6014*t6029 + t6170*t6179 + t6220*t6347 + t6433*t6457 + t6509*t6547 - 0.0216*(t6385*t6457 + t6374*t6547) - 1.1135*(t6374*t6457 - 1.*t6385*t6547) + t136*t137*t748 + var1[0];
  p_output1[1]=0. + t1090*t6779 + t3147*t6820 + t4296*t6839 - 0.1305*(-1.*t137*t2004*t579 + t343*t6839) + t5545*t6865 + t5796*t6900 + t5856*t6974 + t5915*t7028 + t5961*t7076 + t6014*t7172 + t6170*t7182 + t6220*t7245 + t6433*t7267 + t6509*t7347 - 0.0216*(t6385*t7267 + t6374*t7347) - 1.1135*(t6374*t7267 - 1.*t6385*t7347) + t137*t2004*t748 + var1[1];
  p_output1[2]=0. + t1090*t1091*t137 + t137*t2423*t3147 - 1.*t1371*t748 + t4296*t7506 - 0.1305*(t1371*t579 + t343*t7506) + t5545*t7537 + t5796*t7589 + t5856*t7628 + t5915*t7664 + t5961*t7697 + t6014*t7747 + t6170*t7763 + t6220*t7807 + t6433*t7830 + t6509*t7899 - 0.0216*(t6385*t7830 + t6374*t7899) - 1.1135*(t6374*t7830 - 1.*t6385*t7899) + var1[2];
}



void p_toe_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
