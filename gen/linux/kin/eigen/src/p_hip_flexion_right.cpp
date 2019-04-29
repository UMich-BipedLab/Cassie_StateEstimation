/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:27 GMT-05:00
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
  double t1082;
  double t2937;
  double t3958;
  double t3492;
  double t3973;
  double t1375;
  double t1715;
  double t1992;
  double t2140;
  double t2788;
  double t3777;
  double t4349;
  double t4360;
  double t4391;
  double t5573;
  double t5954;
  double t6003;
  double t1268;
  double t6914;
  double t6949;
  double t7035;
  double t7070;
  double t7081;
  double t7084;
  double t7127;
  double t7152;
  double t7177;
  double t7185;
  double t7225;
  double t7226;
  double t7227;
  double t2124;
  double t2185;
  double t2386;
  double t2789;
  double t2841;
  double t4490;
  double t4583;
  double t4899;
  double t4926;
  double t6053;
  double t6059;
  double t6089;
  double t7308;
  double t7322;
  double t7331;
  double t7342;
  double t7344;
  double t7352;
  double t7114;
  double t7128;
  double t7137;
  double t7366;
  double t7370;
  double t7416;
  double t7209;
  double t7218;
  double t7223;
  double t7454;
  double t7461;
  double t7464;
  double t7501;
  double t7507;
  double t7512;
  double t7606;
  double t7638;
  double t7642;
  double t7646;
  double t7666;
  double t7678;
  double t7729;
  double t7735;
  double t7737;
  t1082 = Cos(var1[3]);
  t2937 = Cos(var1[5]);
  t3958 = Sin(var1[3]);
  t3492 = Sin(var1[4]);
  t3973 = Sin(var1[5]);
  t1375 = Cos(var1[14]);
  t1715 = -1.*t1375;
  t1992 = 1. + t1715;
  t2140 = Sin(var1[14]);
  t2788 = Sin(var1[13]);
  t3777 = t1082*t2937*t3492;
  t4349 = t3958*t3973;
  t4360 = t3777 + t4349;
  t4391 = Cos(var1[13]);
  t5573 = -1.*t2937*t3958;
  t5954 = t1082*t3492*t3973;
  t6003 = t5573 + t5954;
  t1268 = Cos(var1[4]);
  t6914 = t2788*t4360;
  t6949 = t4391*t6003;
  t7035 = t6914 + t6949;
  t7070 = Cos(var1[15]);
  t7081 = -1.*t7070;
  t7084 = 1. + t7081;
  t7127 = Sin(var1[15]);
  t7152 = t4391*t4360;
  t7177 = -1.*t2788*t6003;
  t7185 = t7152 + t7177;
  t7225 = t1375*t1082*t1268;
  t7226 = t2140*t7035;
  t7227 = t7225 + t7226;
  t2124 = -0.049*t1992;
  t2185 = -0.135*t2140;
  t2386 = 0. + t2124 + t2185;
  t2789 = 0.135*t2788;
  t2841 = 0. + t2789;
  t4490 = -1.*t4391;
  t4583 = 1. + t4490;
  t4899 = -0.135*t4583;
  t4926 = 0. + t4899;
  t6053 = -0.135*t1992;
  t6059 = 0.049*t2140;
  t6089 = 0. + t6053 + t6059;
  t7308 = t2937*t3958*t3492;
  t7322 = -1.*t1082*t3973;
  t7331 = t7308 + t7322;
  t7342 = t1082*t2937;
  t7344 = t3958*t3492*t3973;
  t7352 = t7342 + t7344;
  t7114 = -0.09*t7084;
  t7128 = 0.049*t7127;
  t7137 = 0. + t7114 + t7128;
  t7366 = t2788*t7331;
  t7370 = t4391*t7352;
  t7416 = t7366 + t7370;
  t7209 = -0.049*t7084;
  t7218 = -0.09*t7127;
  t7223 = 0. + t7209 + t7218;
  t7454 = t4391*t7331;
  t7461 = -1.*t2788*t7352;
  t7464 = t7454 + t7461;
  t7501 = t1375*t1268*t3958;
  t7507 = t2140*t7416;
  t7512 = t7501 + t7507;
  t7606 = t1268*t2937*t2788;
  t7638 = t4391*t1268*t3973;
  t7642 = t7606 + t7638;
  t7646 = t4391*t1268*t2937;
  t7666 = -1.*t1268*t2788*t3973;
  t7678 = t7646 + t7666;
  t7729 = -1.*t1375*t3492;
  t7735 = t2140*t7642;
  t7737 = t7729 + t7735;

  p_output1(0)=0. + t1082*t1268*t2386 + t2841*t4360 + t4926*t6003 + t6089*t7035 - 0.135*(-1.*t1082*t1268*t2140 + t1375*t7035) + t7137*t7185 + t7223*t7227 - 0.049*(t7127*t7185 + t7070*t7227) - 0.09*(t7070*t7185 - 1.*t7127*t7227) + var1(0);
  p_output1(1)=0. + t1268*t2386*t3958 + t2841*t7331 + t4926*t7352 + t6089*t7416 - 0.135*(-1.*t1268*t2140*t3958 + t1375*t7416) + t7137*t7464 + t7223*t7512 - 0.049*(t7127*t7464 + t7070*t7512) - 0.09*(t7070*t7464 - 1.*t7127*t7512) + var1(1);
  p_output1(2)=0. + t1268*t2841*t2937 - 1.*t2386*t3492 + t1268*t3973*t4926 + t6089*t7642 - 0.135*(t2140*t3492 + t1375*t7642) + t7137*t7678 + t7223*t7737 - 0.049*(t7127*t7678 + t7070*t7737) - 0.09*(t7070*t7678 - 1.*t7127*t7737) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_hip_flexion_right(const Eigen::Matrix<double,20,1> &var1)
//void p_hip_flexion_right(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



