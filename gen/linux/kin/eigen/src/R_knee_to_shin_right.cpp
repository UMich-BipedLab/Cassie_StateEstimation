/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:33 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_to_shin_right.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t777;
  double t1184;
  double t775;
  double t794;
  double t1294;
  double t2355;
  double t936;
  double t1484;
  double t1940;
  double t744;
  double t2692;
  double t2832;
  double t2859;
  double t3501;
  double t2089;
  double t2941;
  double t2953;
  double t627;
  double t3511;
  double t3890;
  double t3956;
  double t3991;
  double t4456;
  double t4668;
  double t4719;
  double t4754;
  double t4768;
  double t4909;
  double t3109;
  double t4859;
  double t4865;
  double t570;
  double t4919;
  double t4921;
  double t4945;
  double t215;
  double t5147;
  double t5165;
  double t5203;
  double t5238;
  double t5240;
  double t5243;
  double t5204;
  double t5247;
  double t5274;
  double t5359;
  double t5400;
  double t5445;
  double t5454;
  double t5477;
  double t5530;
  double t5020;
  double t5311;
  double t5560;
  double t5567;
  double t5586;
  double t5618;
  double t5665;
  double t5752;
  double t5763;
  double t5793;
  double t5807;
  double t5812;
  double t5817;
  double t5835;
  double t5858;
  double t5864;
  double t5796;
  double t5872;
  double t5880;
  double t5939;
  double t6002;
  double t6014;
  double t4886;
  double t4958;
  double t4976;
  double t5025;
  double t5053;
  double t5055;
  double t5585;
  double t5666;
  double t5684;
  double t5694;
  double t5705;
  double t5711;
  double t5902;
  double t6035;
  double t6036;
  double t6076;
  double t6093;
  double t6102;
  t777 = Cos(var1[5]);
  t1184 = Sin(var1[3]);
  t775 = Cos(var1[3]);
  t794 = Sin(var1[4]);
  t1294 = Sin(var1[5]);
  t2355 = Sin(var1[13]);
  t936 = t775*t777*t794;
  t1484 = t1184*t1294;
  t1940 = t936 + t1484;
  t744 = Cos(var1[13]);
  t2692 = -1.*t777*t1184;
  t2832 = t775*t794*t1294;
  t2859 = t2692 + t2832;
  t3501 = Cos(var1[15]);
  t2089 = t744*t1940;
  t2941 = -1.*t2355*t2859;
  t2953 = t2089 + t2941;
  t627 = Sin(var1[15]);
  t3511 = Cos(var1[14]);
  t3890 = Cos(var1[4]);
  t3956 = t3511*t775*t3890;
  t3991 = Sin(var1[14]);
  t4456 = t2355*t1940;
  t4668 = t744*t2859;
  t4719 = t4456 + t4668;
  t4754 = t3991*t4719;
  t4768 = t3956 + t4754;
  t4909 = Cos(var1[16]);
  t3109 = t627*t2953;
  t4859 = t3501*t4768;
  t4865 = t3109 + t4859;
  t570 = Sin(var1[16]);
  t4919 = t3501*t2953;
  t4921 = -1.*t627*t4768;
  t4945 = t4919 + t4921;
  t215 = Cos(var1[17]);
  t5147 = t777*t1184*t794;
  t5165 = -1.*t775*t1294;
  t5203 = t5147 + t5165;
  t5238 = t775*t777;
  t5240 = t1184*t794*t1294;
  t5243 = t5238 + t5240;
  t5204 = t744*t5203;
  t5247 = -1.*t2355*t5243;
  t5274 = t5204 + t5247;
  t5359 = t3511*t3890*t1184;
  t5400 = t2355*t5203;
  t5445 = t744*t5243;
  t5454 = t5400 + t5445;
  t5477 = t3991*t5454;
  t5530 = t5359 + t5477;
  t5020 = Sin(var1[17]);
  t5311 = t627*t5274;
  t5560 = t3501*t5530;
  t5567 = t5311 + t5560;
  t5586 = t3501*t5274;
  t5618 = -1.*t627*t5530;
  t5665 = t5586 + t5618;
  t5752 = t744*t3890*t777;
  t5763 = -1.*t3890*t2355*t1294;
  t5793 = t5752 + t5763;
  t5807 = -1.*t3511*t794;
  t5812 = t3890*t777*t2355;
  t5817 = t744*t3890*t1294;
  t5835 = t5812 + t5817;
  t5858 = t3991*t5835;
  t5864 = t5807 + t5858;
  t5796 = t627*t5793;
  t5872 = t3501*t5864;
  t5880 = t5796 + t5872;
  t5939 = t3501*t5793;
  t6002 = -1.*t627*t5864;
  t6014 = t5939 + t6002;
  t4886 = -1.*t570*t4865;
  t4958 = t4909*t4945;
  t4976 = t4886 + t4958;
  t5025 = t4909*t4865;
  t5053 = t570*t4945;
  t5055 = t5025 + t5053;
  t5585 = -1.*t570*t5567;
  t5666 = t4909*t5665;
  t5684 = t5585 + t5666;
  t5694 = t4909*t5567;
  t5705 = t570*t5665;
  t5711 = t5694 + t5705;
  t5902 = -1.*t570*t5880;
  t6035 = t4909*t6014;
  t6036 = t5902 + t6035;
  t6076 = t4909*t5880;
  t6093 = t570*t6014;
  t6102 = t6076 + t6093;

  p_output1(0)=-1.*t215*t4976 + t5020*t5055;
  p_output1(1)=-1.*t215*t5684 + t5020*t5711;
  p_output1(2)=-1.*t215*t6036 + t5020*t6102;
  p_output1(3)=t4976*t5020 + t215*t5055;
  p_output1(4)=t5020*t5684 + t215*t5711;
  p_output1(5)=t5020*t6036 + t215*t6102;
  p_output1(6)=-1.*t3511*t4719 + t3890*t3991*t775;
  p_output1(7)=t1184*t3890*t3991 - 1.*t3511*t5454;
  p_output1(8)=-1.*t3511*t5835 - 1.*t3991*t794;
}


       
Eigen::Matrix<double,3,3> R_knee_to_shin_right(const Eigen::Matrix<double,20,1> &var1)
//void R_knee_to_shin_right(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



