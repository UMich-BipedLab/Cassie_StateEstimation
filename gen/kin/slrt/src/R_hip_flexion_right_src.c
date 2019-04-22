/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:43 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_hip_flexion_right_src.h"

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
  double t2061;
  double t2580;
  double t1956;
  double t2164;
  double t3227;
  double t3751;
  double t2292;
  double t3258;
  double t3689;
  double t1943;
  double t4115;
  double t4135;
  double t4279;
  double t1035;
  double t4433;
  double t4442;
  double t4469;
  double t4505;
  double t4718;
  double t4721;
  double t4801;
  double t4921;
  double t4923;
  double t4936;
  double t3745;
  double t4374;
  double t4404;
  double t4484;
  double t4554;
  double t4562;
  double t4613;
  double t4631;
  double t4674;
  double t4889;
  double t4954;
  double t4981;
  double t4991;
  double t5057;
  double t5063;
  double t5068;
  double t5083;
  double t5084;
  double t5108;
  double t5137;
  double t5140;
  double t5143;
  double t5144;
  double t5202;
  double t5291;
  double t5318;
  double t5340;
  t2061 = Cos(var1[5]);
  t2580 = Sin(var1[3]);
  t1956 = Cos(var1[3]);
  t2164 = Sin(var1[4]);
  t3227 = Sin(var1[5]);
  t3751 = Sin(var1[13]);
  t2292 = t1956*t2061*t2164;
  t3258 = t2580*t3227;
  t3689 = t2292 + t3258;
  t1943 = Cos(var1[13]);
  t4115 = -1.*t2061*t2580;
  t4135 = t1956*t2164*t3227;
  t4279 = t4115 + t4135;
  t1035 = Cos(var1[15]);
  t4433 = Sin(var1[15]);
  t4442 = Cos(var1[14]);
  t4469 = Cos(var1[4]);
  t4505 = Sin(var1[14]);
  t4718 = t2061*t2580*t2164;
  t4721 = -1.*t1956*t3227;
  t4801 = t4718 + t4721;
  t4921 = t1956*t2061;
  t4923 = t2580*t2164*t3227;
  t4936 = t4921 + t4923;
  t3745 = t1943*t3689;
  t4374 = -1.*t3751*t4279;
  t4404 = t3745 + t4374;
  t4484 = t4442*t1956*t4469;
  t4554 = t3751*t3689;
  t4562 = t1943*t4279;
  t4613 = t4554 + t4562;
  t4631 = t4505*t4613;
  t4674 = t4484 + t4631;
  t4889 = t1943*t4801;
  t4954 = -1.*t3751*t4936;
  t4981 = t4889 + t4954;
  t4991 = t4442*t4469*t2580;
  t5057 = t3751*t4801;
  t5063 = t1943*t4936;
  t5068 = t5057 + t5063;
  t5083 = t4505*t5068;
  t5084 = t4991 + t5083;
  t5108 = t1943*t4469*t2061;
  t5137 = -1.*t4469*t3751*t3227;
  t5140 = t5108 + t5137;
  t5143 = -1.*t4442*t2164;
  t5144 = t4469*t2061*t3751;
  t5202 = t1943*t4469*t3227;
  t5291 = t5144 + t5202;
  t5318 = t4505*t5291;
  t5340 = t5143 + t5318;
  p_output1[0]=-1.*t1035*t4404 + t4433*t4674;
  p_output1[1]=-1.*t1035*t4981 + t4433*t5084;
  p_output1[2]=-1.*t1035*t5140 + t4433*t5340;
  p_output1[3]=t4404*t4433 + t1035*t4674;
  p_output1[4]=t4433*t4981 + t1035*t5084;
  p_output1[5]=t4433*t5140 + t1035*t5340;
  p_output1[6]=t1956*t4469*t4505 - 1.*t4442*t4613;
  p_output1[7]=t2580*t4469*t4505 - 1.*t4442*t5068;
  p_output1[8]=-1.*t2164*t4505 - 1.*t4442*t5291;
}



void R_hip_flexion_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
