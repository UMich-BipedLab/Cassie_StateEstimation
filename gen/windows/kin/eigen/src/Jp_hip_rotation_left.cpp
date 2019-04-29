/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:21:40 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_rotation_left.h"

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
static void output1(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t850;
  double t1145;
  double t1526;
  double t709;
  double t1576;
  double t237;
  double t1874;
  double t2268;
  double t2285;
  double t998;
  double t1580;
  double t1668;
  double t2533;
  double t4901;
  double t4967;
  double t4991;
  double t5098;
  double t4704;
  double t4840;
  double t4844;
  double t5156;
  double t245;
  double t456;
  double t642;
  double t688;
  double t2873;
  double t3132;
  double t5522;
  double t5534;
  double t5547;
  double t5467;
  double t5495;
  double t5512;
  double t5065;
  double t5118;
  double t5128;
  double t5164;
  double t5176;
  double t5267;
  double t5620;
  double t5624;
  double t5625;
  double t5698;
  double t5704;
  double t5705;
  double t5832;
  double t5839;
  double t5841;
  double t5942;
  double t5954;
  double t5956;
  double t5988;
  double t5996;
  double t6000;
  double t5584;
  double t6015;
  double t6019;
  double t6035;
  double t6036;
  double t6038;
  double t6049;
  double t6060;
  double t6064;
  double t6095;
  double t6096;
  double t6100;
  double t6007;
  double t5589;
  double t5593;
  double t6139;
  double t6140;
  double t6142;
  double t6044;
  double t6148;
  double t6151;
  double t6086;
  double t6088;
  double t6092;
  double t6094;
  double t6102;
  double t6106;
  double t6108;
  double t5637;
  double t5642;
  double t5649;
  double t6184;
  double t6189;
  double t6191;
  double t6193;
  double t6194;
  double t6230;
  double t6231;
  double t6235;
  double t5426;
  double t6258;
  double t6261;
  double t6263;
  t850 = Cos(var1[5]);
  t1145 = Sin(var1[3]);
  t1526 = Sin(var1[4]);
  t709 = Cos(var1[3]);
  t1576 = Sin(var1[5]);
  t237 = Cos(var1[6]);
  t1874 = -1.*t850*t1145*t1526;
  t2268 = t709*t1576;
  t2285 = t1874 + t2268;
  t998 = -1.*t709*t850;
  t1580 = -1.*t1145*t1526*t1576;
  t1668 = t998 + t1580;
  t2533 = Sin(var1[6]);
  t4901 = Cos(var1[7]);
  t4967 = -1.*t4901;
  t4991 = 1. + t4967;
  t5098 = Sin(var1[7]);
  t4704 = t237*t1668;
  t4840 = t2285*t2533;
  t4844 = t4704 + t4840;
  t5156 = Cos(var1[4]);
  t245 = -1.*t237;
  t456 = 1. + t245;
  t642 = 0.135*t456;
  t688 = 0. + t642;
  t2873 = -0.135*t2533;
  t3132 = 0. + t2873;
  t5522 = t709*t850*t1526;
  t5534 = t1145*t1576;
  t5547 = t5522 + t5534;
  t5467 = -1.*t850*t1145;
  t5495 = t709*t1526*t1576;
  t5512 = t5467 + t5495;
  t5065 = 0.135*t4991;
  t5118 = 0.049*t5098;
  t5128 = 0. + t5065 + t5118;
  t5164 = -0.049*t4991;
  t5176 = 0.135*t5098;
  t5267 = 0. + t5164 + t5176;
  t5620 = t237*t5512;
  t5624 = t5547*t2533;
  t5625 = t5620 + t5624;
  t5698 = t709*t5156*t237*t1576;
  t5704 = t709*t5156*t850*t2533;
  t5705 = t5698 + t5704;
  t5832 = t5156*t237*t1145*t1576;
  t5839 = t5156*t850*t1145*t2533;
  t5841 = t5832 + t5839;
  t5942 = -1.*t237*t1526*t1576;
  t5954 = -1.*t850*t1526*t2533;
  t5956 = t5942 + t5954;
  t5988 = t850*t1145;
  t5996 = -1.*t709*t1526*t1576;
  t6000 = t5988 + t5996;
  t5584 = t237*t5547;
  t6015 = t6000*t2533;
  t6019 = t5584 + t6015;
  t6035 = t850*t1145*t1526;
  t6036 = -1.*t709*t1576;
  t6038 = t6035 + t6036;
  t6049 = t237*t6038;
  t6060 = t1668*t2533;
  t6064 = t6049 + t6060;
  t6095 = t5156*t850*t237;
  t6096 = -1.*t5156*t1576*t2533;
  t6100 = t6095 + t6096;
  t6007 = -1.*t5547*t2533;
  t5589 = -1.*t5512*t2533;
  t5593 = t5584 + t5589;
  t6139 = t709*t850;
  t6140 = t1145*t1526*t1576;
  t6142 = t6139 + t6140;
  t6044 = -1.*t6038*t2533;
  t6148 = -1.*t6142*t2533;
  t6151 = t6049 + t6148;
  t6086 = -1.*t5156*t237*t1576;
  t6088 = -1.*t5156*t850*t2533;
  t6092 = t6086 + t6088;
  t6094 = -0.09*t6092;
  t6102 = 0.135*t4901*t6100;
  t6106 = t6100*t5128;
  t6108 = -0.049*t6100*t5098;
  t5637 = t4901*t5625;
  t5642 = -1.*t709*t5156*t5098;
  t5649 = t5637 + t5642;
  t6184 = 0.135*t4901;
  t6189 = -0.049*t5098;
  t6191 = t6184 + t6189;
  t6193 = 0.049*t4901;
  t6194 = t6193 + t5176;
  t6230 = t237*t6142;
  t6231 = t6038*t2533;
  t6235 = t6230 + t6231;
  t5426 = -1.*t5156*t4901*t1145;
  t6258 = t5156*t237*t1576;
  t6261 = t5156*t850*t2533;
  t6263 = t6258 + t6261;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-0.09*(t2285*t237 - 1.*t1668*t2533) + t2285*t3132 + t4844*t5128 + 0.135*(t4844*t4901 + t1145*t5098*t5156) - 1.*t1145*t5156*t5267 - 0.049*(t4844*t5098 + t5426) + t1668*t688;
  p_output1(10)=t3132*t5547 - 0.09*t5593 + t5128*t5625 + 0.135*t5649 + t5512*t688 + t5156*t5267*t709 - 0.049*(t5098*t5625 + t4901*t5156*t709);
  p_output1(11)=0;
  p_output1(12)=t5128*t5705 - 1.*t1526*t5267*t709 + t1576*t5156*t688*t709 - 0.049*(t5098*t5705 - 1.*t1526*t4901*t709) + 0.135*(t4901*t5705 + t1526*t5098*t709) + t3132*t5156*t709*t850 - 0.09*(-1.*t1576*t2533*t5156*t709 + t237*t5156*t709*t850);
  p_output1(13)=-1.*t1145*t1526*t5267 + t5128*t5841 + 0.135*(t1145*t1526*t5098 + t4901*t5841) - 0.049*(-1.*t1145*t1526*t4901 + t5098*t5841) + t1145*t1576*t5156*t688 + t1145*t3132*t5156*t850 - 0.09*(-1.*t1145*t1576*t2533*t5156 + t1145*t237*t5156*t850);
  p_output1(14)=-1.*t5156*t5267 + t5128*t5956 + 0.135*(t5098*t5156 + t4901*t5956) - 0.049*(-1.*t4901*t5156 + t5098*t5956) - 1.*t1526*t1576*t688 - 1.*t1526*t3132*t850 - 0.09*(t1526*t1576*t2533 - 1.*t1526*t237*t850);
  p_output1(15)=t3132*t6000 - 0.09*(t237*t6000 + t6007) + 0.135*t4901*t6019 - 0.049*t5098*t6019 + t5128*t6019 + t5547*t688;
  p_output1(16)=t1668*t3132 - 0.09*(t4704 + t6044) + 0.135*t4901*t6064 - 0.049*t5098*t6064 + t5128*t6064 + t6038*t688;
  p_output1(17)=-1.*t1576*t3132*t5156 + t6094 + t6102 + t6106 + t6108 + t5156*t688*t850;
  p_output1(18)=0.135*t2533*t5512 - 0.135*t237*t5547 + 0.135*t4901*t5593 - 0.049*t5098*t5593 + t5128*t5593 - 0.09*(-1.*t237*t5512 + t6007);
  p_output1(19)=-0.135*t237*t6038 + 0.135*t2533*t6142 - 0.09*(t6044 - 1.*t237*t6142) + 0.135*t4901*t6151 - 0.049*t5098*t6151 + t5128*t6151;
  p_output1(20)=0.135*t1576*t2533*t5156 + t6094 + t6102 + t6106 + t6108 - 0.135*t237*t5156*t850;
  p_output1(21)=-0.049*t5649 + t5625*t6194 + t5156*t6191*t709 + 0.135*(-1.*t5098*t5625 - 1.*t4901*t5156*t709);
  p_output1(22)=t1145*t5156*t6191 + t6194*t6235 - 0.049*(-1.*t1145*t5098*t5156 + t4901*t6235) + 0.135*(t5426 - 1.*t5098*t6235);
  p_output1(23)=-1.*t1526*t6191 + t6194*t6263 - 0.049*(t1526*t5098 + t4901*t6263) + 0.135*(t1526*t4901 - 1.*t5098*t6263);
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=0;
  p_output1(46)=0;
  p_output1(47)=0;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
  p_output1(54)=0;
  p_output1(55)=0;
  p_output1(56)=0;
  p_output1(57)=0;
  p_output1(58)=0;
  p_output1(59)=0;
}


       
Eigen::Matrix<double,3,20> Jp_hip_rotation_left(const Eigen::Matrix<double,20,1> &var1)
//void Jp_hip_rotation_left(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,20>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



