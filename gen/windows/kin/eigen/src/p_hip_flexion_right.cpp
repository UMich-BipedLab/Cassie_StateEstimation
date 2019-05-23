/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:09:47 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_hip_flexion_right.h"

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
  double t96;
  double t2424;
  double t2809;
  double t2613;
  double t3048;
  double t448;
  double t857;
  double t1172;
  double t1832;
  double t2353;
  double t2755;
  double t3169;
  double t3234;
  double t3528;
  double t4482;
  double t4721;
  double t4732;
  double t398;
  double t5723;
  double t6113;
  double t6391;
  double t6608;
  double t6670;
  double t6695;
  double t6728;
  double t6778;
  double t6788;
  double t6837;
  double t6966;
  double t6971;
  double t6974;
  double t1756;
  double t2125;
  double t2127;
  double t2371;
  double t2388;
  double t3612;
  double t3640;
  double t4058;
  double t4168;
  double t4775;
  double t5105;
  double t5479;
  double t7088;
  double t7099;
  double t7100;
  double t7134;
  double t7165;
  double t7170;
  double t6711;
  double t6729;
  double t6773;
  double t7179;
  double t7190;
  double t7204;
  double t6931;
  double t6935;
  double t6961;
  double t7235;
  double t7244;
  double t7249;
  double t7289;
  double t7327;
  double t7329;
  double t7401;
  double t7439;
  double t7450;
  double t7460;
  double t7462;
  double t7490;
  double t7552;
  double t7569;
  double t7621;
  t96 = Cos(var1[3]);
  t2424 = Cos(var1[5]);
  t2809 = Sin(var1[3]);
  t2613 = Sin(var1[4]);
  t3048 = Sin(var1[5]);
  t448 = Cos(var1[14]);
  t857 = -1.*t448;
  t1172 = 1. + t857;
  t1832 = Sin(var1[14]);
  t2353 = Sin(var1[13]);
  t2755 = t96*t2424*t2613;
  t3169 = t2809*t3048;
  t3234 = t2755 + t3169;
  t3528 = Cos(var1[13]);
  t4482 = -1.*t2424*t2809;
  t4721 = t96*t2613*t3048;
  t4732 = t4482 + t4721;
  t398 = Cos(var1[4]);
  t5723 = t2353*t3234;
  t6113 = t3528*t4732;
  t6391 = t5723 + t6113;
  t6608 = Cos(var1[15]);
  t6670 = -1.*t6608;
  t6695 = 1. + t6670;
  t6728 = Sin(var1[15]);
  t6778 = t3528*t3234;
  t6788 = -1.*t2353*t4732;
  t6837 = t6778 + t6788;
  t6966 = t448*t96*t398;
  t6971 = t1832*t6391;
  t6974 = t6966 + t6971;
  t1756 = -0.049*t1172;
  t2125 = -0.135*t1832;
  t2127 = 0. + t1756 + t2125;
  t2371 = 0.135*t2353;
  t2388 = 0. + t2371;
  t3612 = -1.*t3528;
  t3640 = 1. + t3612;
  t4058 = -0.135*t3640;
  t4168 = 0. + t4058;
  t4775 = -0.135*t1172;
  t5105 = 0.049*t1832;
  t5479 = 0. + t4775 + t5105;
  t7088 = t2424*t2809*t2613;
  t7099 = -1.*t96*t3048;
  t7100 = t7088 + t7099;
  t7134 = t96*t2424;
  t7165 = t2809*t2613*t3048;
  t7170 = t7134 + t7165;
  t6711 = -0.09*t6695;
  t6729 = 0.049*t6728;
  t6773 = 0. + t6711 + t6729;
  t7179 = t2353*t7100;
  t7190 = t3528*t7170;
  t7204 = t7179 + t7190;
  t6931 = -0.049*t6695;
  t6935 = -0.09*t6728;
  t6961 = 0. + t6931 + t6935;
  t7235 = t3528*t7100;
  t7244 = -1.*t2353*t7170;
  t7249 = t7235 + t7244;
  t7289 = t448*t398*t2809;
  t7327 = t1832*t7204;
  t7329 = t7289 + t7327;
  t7401 = t398*t2424*t2353;
  t7439 = t3528*t398*t3048;
  t7450 = t7401 + t7439;
  t7460 = t3528*t398*t2424;
  t7462 = -1.*t398*t2353*t3048;
  t7490 = t7460 + t7462;
  t7552 = -1.*t448*t2613;
  t7569 = t1832*t7450;
  t7621 = t7552 + t7569;

  p_output1(0)=0. + t2388*t3234 + t4168*t4732 + t5479*t6391 + t6773*t6837 + t6961*t6974 - 0.049*(t6728*t6837 + t6608*t6974) - 0.09*(t6608*t6837 - 1.*t6728*t6974) + t2127*t398*t96 - 0.135*(t448*t6391 - 1.*t1832*t398*t96) + var1(0);
  p_output1(1)=0. + t2127*t2809*t398 + t2388*t7100 + t4168*t7170 + t5479*t7204 - 0.135*(-1.*t1832*t2809*t398 + t448*t7204) + t6773*t7249 + t6961*t7329 - 0.049*(t6728*t7249 + t6608*t7329) - 0.09*(t6608*t7249 - 1.*t6728*t7329) + var1(1);
  p_output1(2)=0. - 1.*t2127*t2613 + t2388*t2424*t398 + t3048*t398*t4168 + t5479*t7450 - 0.135*(t1832*t2613 + t448*t7450) + t6773*t7490 + t6961*t7621 - 0.049*(t6728*t7490 + t6608*t7621) - 0.09*(t6608*t7490 - 1.*t6728*t7621) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_hip_flexion_right(const Eigen::Matrix<double,20,1> &var1)
//void p_hip_flexion_right(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



