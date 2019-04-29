/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:22:32 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_ankle_joint_right.h"

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
  double t500;
  double t4613;
  double t4821;
  double t4741;
  double t5161;
  double t767;
  double t895;
  double t899;
  double t3150;
  double t3549;
  double t4753;
  double t5172;
  double t5306;
  double t5475;
  double t5721;
  double t5875;
  double t5986;
  double t755;
  double t6739;
  double t6752;
  double t6777;
  double t6789;
  double t6818;
  double t6851;
  double t6894;
  double t6942;
  double t6967;
  double t6978;
  double t7038;
  double t7044;
  double t7057;
  double t7113;
  double t7132;
  double t7161;
  double t7223;
  double t7266;
  double t7312;
  double t7320;
  double t7482;
  double t7491;
  double t7492;
  double t7513;
  double t7525;
  double t7543;
  double t7546;
  double t7602;
  double t7638;
  double t7647;
  double t7735;
  double t7749;
  double t7752;
  double t7797;
  double t7808;
  double t7812;
  double t7824;
  double t7863;
  double t7868;
  double t7878;
  double t7953;
  double t7960;
  double t7989;
  double t3069;
  double t3342;
  double t3354;
  double t4136;
  double t4437;
  double t5496;
  double t5589;
  double t5600;
  double t5603;
  double t6124;
  double t6637;
  double t6697;
  double t8147;
  double t8150;
  double t8161;
  double t8188;
  double t8191;
  double t8222;
  double t6852;
  double t6903;
  double t6922;
  double t8234;
  double t8244;
  double t8261;
  double t7026;
  double t7033;
  double t7036;
  double t7194;
  double t7227;
  double t7233;
  double t8268;
  double t8270;
  double t8272;
  double t8331;
  double t8336;
  double t8379;
  double t7380;
  double t7435;
  double t7451;
  double t7544;
  double t7556;
  double t7557;
  double t8398;
  double t8402;
  double t8410;
  double t8431;
  double t8451;
  double t8457;
  double t7682;
  double t7710;
  double t7718;
  double t7815;
  double t7841;
  double t7843;
  double t8487;
  double t8488;
  double t8493;
  double t8534;
  double t8547;
  double t8559;
  double t7893;
  double t7923;
  double t7944;
  double t8572;
  double t8587;
  double t8589;
  double t8608;
  double t8632;
  double t8637;
  double t8784;
  double t8790;
  double t8791;
  double t8808;
  double t8822;
  double t8861;
  double t8916;
  double t8923;
  double t8927;
  double t8963;
  double t8965;
  double t8966;
  double t8993;
  double t8994;
  double t8997;
  double t9005;
  double t9009;
  double t9017;
  double t9027;
  double t9029;
  double t9031;
  double t9039;
  double t9045;
  double t9051;
  double t9056;
  double t9060;
  double t9062;
  t500 = Cos(var1[3]);
  t4613 = Cos(var1[5]);
  t4821 = Sin(var1[3]);
  t4741 = Sin(var1[4]);
  t5161 = Sin(var1[5]);
  t767 = Cos(var1[14]);
  t895 = -1.*t767;
  t899 = 1. + t895;
  t3150 = Sin(var1[14]);
  t3549 = Sin(var1[13]);
  t4753 = t500*t4613*t4741;
  t5172 = t4821*t5161;
  t5306 = t4753 + t5172;
  t5475 = Cos(var1[13]);
  t5721 = -1.*t4613*t4821;
  t5875 = t500*t4741*t5161;
  t5986 = t5721 + t5875;
  t755 = Cos(var1[4]);
  t6739 = t3549*t5306;
  t6752 = t5475*t5986;
  t6777 = t6739 + t6752;
  t6789 = Cos(var1[15]);
  t6818 = -1.*t6789;
  t6851 = 1. + t6818;
  t6894 = Sin(var1[15]);
  t6942 = t5475*t5306;
  t6967 = -1.*t3549*t5986;
  t6978 = t6942 + t6967;
  t7038 = t767*t500*t755;
  t7044 = t3150*t6777;
  t7057 = t7038 + t7044;
  t7113 = Cos(var1[16]);
  t7132 = -1.*t7113;
  t7161 = 1. + t7132;
  t7223 = Sin(var1[16]);
  t7266 = t6894*t6978;
  t7312 = t6789*t7057;
  t7320 = t7266 + t7312;
  t7482 = t6789*t6978;
  t7491 = -1.*t6894*t7057;
  t7492 = t7482 + t7491;
  t7513 = Cos(var1[17]);
  t7525 = -1.*t7513;
  t7543 = 1. + t7525;
  t7546 = Sin(var1[17]);
  t7602 = -1.*t7223*t7320;
  t7638 = t7113*t7492;
  t7647 = t7602 + t7638;
  t7735 = t7113*t7320;
  t7749 = t7223*t7492;
  t7752 = t7735 + t7749;
  t7797 = Cos(var1[18]);
  t7808 = -1.*t7797;
  t7812 = 1. + t7808;
  t7824 = Sin(var1[18]);
  t7863 = t7546*t7647;
  t7868 = t7513*t7752;
  t7878 = t7863 + t7868;
  t7953 = t7513*t7647;
  t7960 = -1.*t7546*t7752;
  t7989 = t7953 + t7960;
  t3069 = -0.049*t899;
  t3342 = -0.135*t3150;
  t3354 = 0. + t3069 + t3342;
  t4136 = 0.135*t3549;
  t4437 = 0. + t4136;
  t5496 = -1.*t5475;
  t5589 = 1. + t5496;
  t5600 = -0.135*t5589;
  t5603 = 0. + t5600;
  t6124 = -0.135*t899;
  t6637 = 0.049*t3150;
  t6697 = 0. + t6124 + t6637;
  t8147 = t4613*t4821*t4741;
  t8150 = -1.*t500*t5161;
  t8161 = t8147 + t8150;
  t8188 = t500*t4613;
  t8191 = t4821*t4741*t5161;
  t8222 = t8188 + t8191;
  t6852 = -0.09*t6851;
  t6903 = 0.049*t6894;
  t6922 = 0. + t6852 + t6903;
  t8234 = t3549*t8161;
  t8244 = t5475*t8222;
  t8261 = t8234 + t8244;
  t7026 = -0.049*t6851;
  t7033 = -0.09*t6894;
  t7036 = 0. + t7026 + t7033;
  t7194 = -0.049*t7161;
  t7227 = -0.21*t7223;
  t7233 = 0. + t7194 + t7227;
  t8268 = t5475*t8161;
  t8270 = -1.*t3549*t8222;
  t8272 = t8268 + t8270;
  t8331 = t767*t755*t4821;
  t8336 = t3150*t8261;
  t8379 = t8331 + t8336;
  t7380 = -0.21*t7161;
  t7435 = 0.049*t7223;
  t7451 = 0. + t7380 + t7435;
  t7544 = -0.2707*t7543;
  t7556 = 0.0016*t7546;
  t7557 = 0. + t7544 + t7556;
  t8398 = t6894*t8272;
  t8402 = t6789*t8379;
  t8410 = t8398 + t8402;
  t8431 = t6789*t8272;
  t8451 = -1.*t6894*t8379;
  t8457 = t8431 + t8451;
  t7682 = -0.0016*t7543;
  t7710 = -0.2707*t7546;
  t7718 = 0. + t7682 + t7710;
  t7815 = 0.0184*t7812;
  t7841 = -0.7055*t7824;
  t7843 = 0. + t7815 + t7841;
  t8487 = -1.*t7223*t8410;
  t8488 = t7113*t8457;
  t8493 = t8487 + t8488;
  t8534 = t7113*t8410;
  t8547 = t7223*t8457;
  t8559 = t8534 + t8547;
  t7893 = -0.7055*t7812;
  t7923 = -0.0184*t7824;
  t7944 = 0. + t7893 + t7923;
  t8572 = t7546*t8493;
  t8587 = t7513*t8559;
  t8589 = t8572 + t8587;
  t8608 = t7513*t8493;
  t8632 = -1.*t7546*t8559;
  t8637 = t8608 + t8632;
  t8784 = t755*t4613*t3549;
  t8790 = t5475*t755*t5161;
  t8791 = t8784 + t8790;
  t8808 = t5475*t755*t4613;
  t8822 = -1.*t755*t3549*t5161;
  t8861 = t8808 + t8822;
  t8916 = -1.*t767*t4741;
  t8923 = t3150*t8791;
  t8927 = t8916 + t8923;
  t8963 = t6894*t8861;
  t8965 = t6789*t8927;
  t8966 = t8963 + t8965;
  t8993 = t6789*t8861;
  t8994 = -1.*t6894*t8927;
  t8997 = t8993 + t8994;
  t9005 = -1.*t7223*t8966;
  t9009 = t7113*t8997;
  t9017 = t9005 + t9009;
  t9027 = t7113*t8966;
  t9029 = t7223*t8997;
  t9031 = t9027 + t9029;
  t9039 = t7546*t9017;
  t9045 = t7513*t9031;
  t9051 = t9039 + t9045;
  t9056 = t7513*t9017;
  t9060 = -1.*t7546*t9031;
  t9062 = t9056 + t9060;

  p_output1(0)=0. + t4437*t5306 + t5603*t5986 + t6697*t6777 + t6922*t6978 + t7036*t7057 + t7233*t7320 + t7451*t7492 + t3354*t500*t755 + t7557*t7647 - 0.1305*(-1.*t3150*t500*t755 + t6777*t767) + t7718*t7752 + t7843*t7878 + t7944*t7989 - 0.7055*(-1.*t7824*t7878 + t7797*t7989) + 0.0184*(t7797*t7878 + t7824*t7989) + var1(0);
  p_output1(1)=0. + t3354*t4821*t755 + t4437*t8161 + t5603*t8222 + t6697*t8261 - 0.1305*(-1.*t3150*t4821*t755 + t767*t8261) + t6922*t8272 + t7036*t8379 + t7233*t8410 + t7451*t8457 + t7557*t8493 + t7718*t8559 + t7843*t8589 + t7944*t8637 - 0.7055*(-1.*t7824*t8589 + t7797*t8637) + 0.0184*(t7797*t8589 + t7824*t8637) + var1(1);
  p_output1(2)=0. - 1.*t3354*t4741 + t4437*t4613*t755 + t5161*t5603*t755 + t6697*t8791 - 0.1305*(t3150*t4741 + t767*t8791) + t6922*t8861 + t7036*t8927 + t7233*t8966 + t7451*t8997 + t7557*t9017 + t7718*t9031 + t7843*t9051 + t7944*t9062 - 0.7055*(-1.*t7824*t9051 + t7797*t9062) + 0.0184*(t7797*t9051 + t7824*t9062) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_ankle_joint_right(const Eigen::Matrix<double,20,1> &var1)
//void p_ankle_joint_right(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



