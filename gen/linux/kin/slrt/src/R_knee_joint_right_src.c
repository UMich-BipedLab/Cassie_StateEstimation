/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:44 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_joint_right_src.h"

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
  double t1589;
  double t2473;
  double t1430;
  double t1908;
  double t2649;
  double t3019;
  double t2034;
  double t2750;
  double t2826;
  double t1236;
  double t3100;
  double t3762;
  double t3995;
  double t4064;
  double t2869;
  double t4027;
  double t4057;
  double t1084;
  double t4065;
  double t4267;
  double t4358;
  double t4393;
  double t4445;
  double t4459;
  double t4482;
  double t4486;
  double t4566;
  double t907;
  double t4838;
  double t4839;
  double t4846;
  double t4892;
  double t4895;
  double t4957;
  double t4635;
  double t4855;
  double t4974;
  double t4978;
  double t5030;
  double t5036;
  double t5049;
  double t5058;
  double t5065;
  double t5078;
  double t5232;
  double t5276;
  double t5295;
  double t5333;
  double t5359;
  double t5393;
  double t5426;
  double t5447;
  double t5448;
  double t4060;
  double t4568;
  double t4580;
  double t4750;
  double t4751;
  double t4757;
  double t4985;
  double t5085;
  double t5091;
  double t5093;
  double t5104;
  double t5121;
  double t5317;
  double t5476;
  double t5513;
  double t5559;
  double t5567;
  double t5572;
  t1589 = Cos(var1[5]);
  t2473 = Sin(var1[3]);
  t1430 = Cos(var1[3]);
  t1908 = Sin(var1[4]);
  t2649 = Sin(var1[5]);
  t3019 = Sin(var1[13]);
  t2034 = t1430*t1589*t1908;
  t2750 = t2473*t2649;
  t2826 = t2034 + t2750;
  t1236 = Cos(var1[13]);
  t3100 = -1.*t1589*t2473;
  t3762 = t1430*t1908*t2649;
  t3995 = t3100 + t3762;
  t4064 = Cos(var1[15]);
  t2869 = t1236*t2826;
  t4027 = -1.*t3019*t3995;
  t4057 = t2869 + t4027;
  t1084 = Sin(var1[15]);
  t4065 = Cos(var1[14]);
  t4267 = Cos(var1[4]);
  t4358 = t4065*t1430*t4267;
  t4393 = Sin(var1[14]);
  t4445 = t3019*t2826;
  t4459 = t1236*t3995;
  t4482 = t4445 + t4459;
  t4486 = t4393*t4482;
  t4566 = t4358 + t4486;
  t907 = Sin(var1[16]);
  t4838 = t1589*t2473*t1908;
  t4839 = -1.*t1430*t2649;
  t4846 = t4838 + t4839;
  t4892 = t1430*t1589;
  t4895 = t2473*t1908*t2649;
  t4957 = t4892 + t4895;
  t4635 = Cos(var1[16]);
  t4855 = t1236*t4846;
  t4974 = -1.*t3019*t4957;
  t4978 = t4855 + t4974;
  t5030 = t4065*t4267*t2473;
  t5036 = t3019*t4846;
  t5049 = t1236*t4957;
  t5058 = t5036 + t5049;
  t5065 = t4393*t5058;
  t5078 = t5030 + t5065;
  t5232 = t1236*t4267*t1589;
  t5276 = -1.*t4267*t3019*t2649;
  t5295 = t5232 + t5276;
  t5333 = -1.*t4065*t1908;
  t5359 = t4267*t1589*t3019;
  t5393 = t1236*t4267*t2649;
  t5426 = t5359 + t5393;
  t5447 = t4393*t5426;
  t5448 = t5333 + t5447;
  t4060 = t1084*t4057;
  t4568 = t4064*t4566;
  t4580 = t4060 + t4568;
  t4750 = t4064*t4057;
  t4751 = -1.*t1084*t4566;
  t4757 = t4750 + t4751;
  t4985 = t1084*t4978;
  t5085 = t4064*t5078;
  t5091 = t4985 + t5085;
  t5093 = t4064*t4978;
  t5104 = -1.*t1084*t5078;
  t5121 = t5093 + t5104;
  t5317 = t1084*t5295;
  t5476 = t4064*t5448;
  t5513 = t5317 + t5476;
  t5559 = t4064*t5295;
  t5567 = -1.*t1084*t5448;
  t5572 = t5559 + t5567;
  p_output1[0]=-1.*t4635*t4757 + t4580*t907;
  p_output1[1]=-1.*t4635*t5121 + t5091*t907;
  p_output1[2]=-1.*t4635*t5572 + t5513*t907;
  p_output1[3]=t4580*t4635 + t4757*t907;
  p_output1[4]=t4635*t5091 + t5121*t907;
  p_output1[5]=t4635*t5513 + t5572*t907;
  p_output1[6]=t1430*t4267*t4393 - 1.*t4065*t4482;
  p_output1[7]=t2473*t4267*t4393 - 1.*t4065*t5058;
  p_output1[8]=-1.*t1908*t4393 - 1.*t4065*t5426;
}



void R_knee_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
