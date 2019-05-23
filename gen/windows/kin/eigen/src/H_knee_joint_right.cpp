/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:09:55 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_joint_right.h"

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
static void output1(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t773;
  double t797;
  double t763;
  double t789;
  double t806;
  double t1108;
  double t796;
  double t861;
  double t1001;
  double t685;
  double t1170;
  double t1204;
  double t1219;
  double t1434;
  double t1060;
  double t1270;
  double t1275;
  double t511;
  double t1566;
  double t1701;
  double t1703;
  double t1751;
  double t1958;
  double t1994;
  double t2143;
  double t2146;
  double t2193;
  double t327;
  double t2652;
  double t2665;
  double t2844;
  double t2982;
  double t2987;
  double t3022;
  double t2308;
  double t2909;
  double t3163;
  double t3178;
  double t3197;
  double t3258;
  double t3348;
  double t3370;
  double t3472;
  double t3571;
  double t3849;
  double t3877;
  double t3919;
  double t3968;
  double t3998;
  double t4079;
  double t4104;
  double t4184;
  double t4191;
  double t1350;
  double t2278;
  double t2281;
  double t2402;
  double t2450;
  double t2521;
  double t3179;
  double t3587;
  double t3598;
  double t3747;
  double t3750;
  double t3759;
  double t3920;
  double t4209;
  double t4225;
  double t4291;
  double t4325;
  double t4369;
  double t5146;
  double t5151;
  double t5651;
  double t5665;
  double t5870;
  double t5889;
  double t4624;
  double t4801;
  double t4813;
  double t5167;
  double t5171;
  double t5193;
  double t5217;
  double t5235;
  double t5263;
  double t5265;
  double t5269;
  double t5428;
  double t5601;
  double t5610;
  double t5611;
  double t5666;
  double t5691;
  double t5709;
  double t5791;
  double t5808;
  double t5828;
  double t5907;
  double t5980;
  double t6013;
  double t6058;
  double t6266;
  double t6295;
  double t4843;
  double t4856;
  double t4880;
  double t4882;
  double t4921;
  double t4936;
  t773 = Cos(var1[5]);
  t797 = Sin(var1[3]);
  t763 = Cos(var1[3]);
  t789 = Sin(var1[4]);
  t806 = Sin(var1[5]);
  t1108 = Sin(var1[13]);
  t796 = t763*t773*t789;
  t861 = t797*t806;
  t1001 = t796 + t861;
  t685 = Cos(var1[13]);
  t1170 = -1.*t773*t797;
  t1204 = t763*t789*t806;
  t1219 = t1170 + t1204;
  t1434 = Cos(var1[15]);
  t1060 = t685*t1001;
  t1270 = -1.*t1108*t1219;
  t1275 = t1060 + t1270;
  t511 = Sin(var1[15]);
  t1566 = Cos(var1[14]);
  t1701 = Cos(var1[4]);
  t1703 = t1566*t763*t1701;
  t1751 = Sin(var1[14]);
  t1958 = t1108*t1001;
  t1994 = t685*t1219;
  t2143 = t1958 + t1994;
  t2146 = t1751*t2143;
  t2193 = t1703 + t2146;
  t327 = Sin(var1[16]);
  t2652 = t773*t797*t789;
  t2665 = -1.*t763*t806;
  t2844 = t2652 + t2665;
  t2982 = t763*t773;
  t2987 = t797*t789*t806;
  t3022 = t2982 + t2987;
  t2308 = Cos(var1[16]);
  t2909 = t685*t2844;
  t3163 = -1.*t1108*t3022;
  t3178 = t2909 + t3163;
  t3197 = t1566*t1701*t797;
  t3258 = t1108*t2844;
  t3348 = t685*t3022;
  t3370 = t3258 + t3348;
  t3472 = t1751*t3370;
  t3571 = t3197 + t3472;
  t3849 = t685*t1701*t773;
  t3877 = -1.*t1701*t1108*t806;
  t3919 = t3849 + t3877;
  t3968 = -1.*t1566*t789;
  t3998 = t1701*t773*t1108;
  t4079 = t685*t1701*t806;
  t4104 = t3998 + t4079;
  t4184 = t1751*t4104;
  t4191 = t3968 + t4184;
  t1350 = t511*t1275;
  t2278 = t1434*t2193;
  t2281 = t1350 + t2278;
  t2402 = t1434*t1275;
  t2450 = -1.*t511*t2193;
  t2521 = t2402 + t2450;
  t3179 = t511*t3178;
  t3587 = t1434*t3571;
  t3598 = t3179 + t3587;
  t3747 = t1434*t3178;
  t3750 = -1.*t511*t3571;
  t3759 = t3747 + t3750;
  t3920 = t511*t3919;
  t4209 = t1434*t4191;
  t4225 = t3920 + t4209;
  t4291 = t1434*t3919;
  t4325 = -1.*t511*t4191;
  t4369 = t4291 + t4325;
  t5146 = -1.*t1566;
  t5151 = 1. + t5146;
  t5651 = -1.*t1434;
  t5665 = 1. + t5651;
  t5870 = -1.*t2308;
  t5889 = 1. + t5870;
  t4624 = t2308*t2281;
  t4801 = t327*t2521;
  t4813 = t4624 + t4801;
  t5167 = -0.049*t5151;
  t5171 = -0.135*t1751;
  t5193 = 0. + t5167 + t5171;
  t5217 = 0.135*t1108;
  t5235 = 0. + t5217;
  t5263 = -1.*t685;
  t5265 = 1. + t5263;
  t5269 = -0.135*t5265;
  t5428 = 0. + t5269;
  t5601 = -0.135*t5151;
  t5610 = 0.049*t1751;
  t5611 = 0. + t5601 + t5610;
  t5666 = -0.09*t5665;
  t5691 = 0.049*t511;
  t5709 = 0. + t5666 + t5691;
  t5791 = -0.049*t5665;
  t5808 = -0.09*t511;
  t5828 = 0. + t5791 + t5808;
  t5907 = -0.049*t5889;
  t5980 = -0.21*t327;
  t6013 = 0. + t5907 + t5980;
  t6058 = -0.21*t5889;
  t6266 = 0.049*t327;
  t6295 = 0. + t6058 + t6266;
  t4843 = t2308*t3598;
  t4856 = t327*t3759;
  t4880 = t4843 + t4856;
  t4882 = t2308*t4225;
  t4921 = t327*t4369;
  t4936 = t4882 + t4921;

  p_output1(0)=-1.*t2308*t2521 + t2281*t327;
  p_output1(1)=t327*t3598 - 1.*t2308*t3759;
  p_output1(2)=t327*t4225 - 1.*t2308*t4369;
  p_output1(3)=0.;
  p_output1(4)=t4813;
  p_output1(5)=t4880;
  p_output1(6)=t4936;
  p_output1(7)=0.;
  p_output1(8)=-1.*t1566*t2143 + t1701*t1751*t763;
  p_output1(9)=-1.*t1566*t3370 + t1701*t1751*t797;
  p_output1(10)=-1.*t1566*t4104 - 1.*t1751*t789;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.21*(t2308*t2521 - 1.*t2281*t327) - 0.049*t4813 + t1001*t5235 + t1219*t5428 + t2143*t5611 + t1275*t5709 + t2193*t5828 + t2281*t6013 + t2521*t6295 + t1701*t5193*t763 - 0.1305*(t1566*t2143 - 1.*t1701*t1751*t763) + var1(0);
  p_output1(13)=0. - 0.21*(-1.*t327*t3598 + t2308*t3759) - 0.049*t4880 + t2844*t5235 + t3022*t5428 + t3370*t5611 + t3178*t5709 + t3571*t5828 + t3598*t6013 + t3759*t6295 + t1701*t5193*t797 - 0.1305*(t1566*t3370 - 1.*t1701*t1751*t797) + var1(1);
  p_output1(14)=0. - 0.21*(-1.*t327*t4225 + t2308*t4369) - 0.049*t4936 + t4104*t5611 + t3919*t5709 + t4191*t5828 + t4225*t6013 + t4369*t6295 + t1701*t5235*t773 - 1.*t5193*t789 - 0.1305*(t1566*t4104 + t1751*t789) + t1701*t5428*t806 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_knee_joint_right(const Eigen::Matrix<double,20,1> &var1)
//void H_knee_joint_right(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



