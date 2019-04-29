/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:25 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_rotation_right.h"

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
  double t628;
  double t1602;
  double t1274;
  double t1430;
  double t2001;
  double t209;
  double t224;
  double t316;
  double t460;
  double t736;
  double t1534;
  double t2274;
  double t2297;
  double t2994;
  double t3685;
  double t3900;
  double t4225;
  double t185;
  double t5185;
  double t5286;
  double t5573;
  double t400;
  double t530;
  double t549;
  double t747;
  double t907;
  double t3269;
  double t3284;
  double t3342;
  double t3549;
  double t4403;
  double t5083;
  double t5141;
  double t6834;
  double t6840;
  double t6881;
  double t6911;
  double t6914;
  double t6916;
  double t6942;
  double t6949;
  double t6953;
  double t7152;
  double t7154;
  double t7174;
  double t7262;
  double t7263;
  double t7264;
  double t7380;
  double t7387;
  double t7396;
  double t7533;
  double t7538;
  double t7547;
  double t6974;
  double t7577;
  double t7588;
  double t7645;
  double t7657;
  double t7670;
  double t7739;
  double t7741;
  double t7745;
  double t7808;
  double t7809;
  double t7819;
  double t7558;
  double t6980;
  double t6982;
  double t7728;
  double t7898;
  double t7936;
  double t7944;
  double t7984;
  double t7986;
  double t7772;
  double t7795;
  double t7797;
  double t7801;
  double t7830;
  double t7838;
  double t7846;
  double t7028;
  double t7035;
  double t7046;
  double t8034;
  double t8039;
  double t8041;
  double t8051;
  double t8058;
  double t8105;
  double t8126;
  double t8136;
  double t6433;
  double t8195;
  double t8202;
  double t8208;
  t628 = Sin(var1[3]);
  t1602 = Cos(var1[3]);
  t1274 = Cos(var1[5]);
  t1430 = Sin(var1[4]);
  t2001 = Sin(var1[5]);
  t209 = Cos(var1[14]);
  t224 = -1.*t209;
  t316 = 1. + t224;
  t460 = Sin(var1[14]);
  t736 = Sin(var1[13]);
  t1534 = -1.*t1274*t628*t1430;
  t2274 = t1602*t2001;
  t2297 = t1534 + t2274;
  t2994 = Cos(var1[13]);
  t3685 = -1.*t1602*t1274;
  t3900 = -1.*t628*t1430*t2001;
  t4225 = t3685 + t3900;
  t185 = Cos(var1[4]);
  t5185 = t736*t2297;
  t5286 = t2994*t4225;
  t5573 = t5185 + t5286;
  t400 = -0.049*t316;
  t530 = -0.135*t460;
  t549 = 0. + t400 + t530;
  t747 = 0.135*t736;
  t907 = 0. + t747;
  t3269 = -1.*t2994;
  t3284 = 1. + t3269;
  t3342 = -0.135*t3284;
  t3549 = 0. + t3342;
  t4403 = -0.135*t316;
  t5083 = 0.049*t460;
  t5141 = 0. + t4403 + t5083;
  t6834 = t1602*t1274*t1430;
  t6840 = t628*t2001;
  t6881 = t6834 + t6840;
  t6911 = -1.*t1274*t628;
  t6914 = t1602*t1430*t2001;
  t6916 = t6911 + t6914;
  t6942 = t736*t6881;
  t6949 = t2994*t6916;
  t6953 = t6942 + t6949;
  t7152 = t1602*t185*t1274*t736;
  t7154 = t2994*t1602*t185*t2001;
  t7174 = t7152 + t7154;
  t7262 = t185*t1274*t736*t628;
  t7263 = t2994*t185*t628*t2001;
  t7264 = t7262 + t7263;
  t7380 = -1.*t1274*t736*t1430;
  t7387 = -1.*t2994*t1430*t2001;
  t7396 = t7380 + t7387;
  t7533 = t1274*t628;
  t7538 = -1.*t1602*t1430*t2001;
  t7547 = t7533 + t7538;
  t6974 = t2994*t6881;
  t7577 = t736*t7547;
  t7588 = t6974 + t7577;
  t7645 = t1274*t628*t1430;
  t7657 = -1.*t1602*t2001;
  t7670 = t7645 + t7657;
  t7739 = t2994*t7670;
  t7741 = t736*t4225;
  t7745 = t7739 + t7741;
  t7808 = t2994*t185*t1274;
  t7809 = -1.*t185*t736*t2001;
  t7819 = t7808 + t7809;
  t7558 = -1.*t736*t6881;
  t6980 = -1.*t736*t6916;
  t6982 = t6974 + t6980;
  t7728 = -1.*t736*t7670;
  t7898 = t1602*t1274;
  t7936 = t628*t1430*t2001;
  t7944 = t7898 + t7936;
  t7984 = -1.*t736*t7944;
  t7986 = t7739 + t7984;
  t7772 = -1.*t185*t1274*t736;
  t7795 = -1.*t2994*t185*t2001;
  t7797 = t7772 + t7795;
  t7801 = -0.09*t7797;
  t7830 = -0.135*t209*t7819;
  t7838 = t5141*t7819;
  t7846 = -0.049*t460*t7819;
  t7028 = -1.*t1602*t185*t460;
  t7035 = t209*t6953;
  t7046 = t7028 + t7035;
  t8034 = -0.135*t209;
  t8039 = -0.049*t460;
  t8041 = t8034 + t8039;
  t8051 = 0.049*t209;
  t8058 = t8051 + t530;
  t8105 = t736*t7670;
  t8126 = t2994*t7944;
  t8136 = t8105 + t8126;
  t6433 = -1.*t209*t185*t628;
  t8195 = t185*t1274*t736;
  t8202 = t2994*t185*t2001;
  t8208 = t8195 + t8202;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t3549*t4225 + t5141*t5573 - 1.*t185*t549*t628 - 0.135*(t209*t5573 + t185*t460*t628) - 0.049*(t460*t5573 + t6433) - 0.09*(t2297*t2994 - 1.*t4225*t736) + t2297*t907;
  p_output1(10)=t1602*t185*t549 + t3549*t6916 + t5141*t6953 - 0.049*(t1602*t185*t209 + t460*t6953) - 0.09*t6982 - 0.135*t7046 + t6881*t907;
  p_output1(11)=0;
  p_output1(12)=t1602*t185*t2001*t3549 - 1.*t1430*t1602*t549 + t5141*t7174 - 0.135*(t1430*t1602*t460 + t209*t7174) - 0.049*(-1.*t1430*t1602*t209 + t460*t7174) - 0.09*(t1274*t1602*t185*t2994 - 1.*t1602*t185*t2001*t736) + t1274*t1602*t185*t907;
  p_output1(13)=t185*t2001*t3549*t628 - 1.*t1430*t549*t628 + t5141*t7264 - 0.135*(t1430*t460*t628 + t209*t7264) - 0.049*(-1.*t1430*t209*t628 + t460*t7264) - 0.09*(t1274*t185*t2994*t628 - 1.*t185*t2001*t628*t736) + t1274*t185*t628*t907;
  p_output1(14)=-1.*t1430*t2001*t3549 - 1.*t185*t549 - 0.09*(-1.*t1274*t1430*t2994 + t1430*t2001*t736) + t5141*t7396 - 0.135*(t185*t460 + t209*t7396) - 0.049*(-1.*t185*t209 + t460*t7396) - 1.*t1274*t1430*t907;
  p_output1(15)=t3549*t6881 - 0.09*(t2994*t7547 + t7558) - 0.135*t209*t7588 - 0.049*t460*t7588 + t5141*t7588 + t7547*t907;
  p_output1(16)=t3549*t7670 - 0.09*(t5286 + t7728) - 0.135*t209*t7745 - 0.049*t460*t7745 + t5141*t7745 + t4225*t907;
  p_output1(17)=t1274*t185*t3549 + t7801 + t7830 + t7838 + t7846 - 1.*t185*t2001*t907;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
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
  p_output1(39)=0.135*t2994*t6881 - 0.135*t209*t6982 - 0.049*t460*t6982 + t5141*t6982 - 0.135*t6916*t736 - 0.09*(-1.*t2994*t6916 + t7558);
  p_output1(40)=0.135*t2994*t7670 - 0.135*t736*t7944 - 0.09*(t7728 - 1.*t2994*t7944) - 0.135*t209*t7986 - 0.049*t460*t7986 + t5141*t7986;
  p_output1(41)=0.135*t1274*t185*t2994 - 0.135*t185*t2001*t736 + t7801 + t7830 + t7838 + t7846;
  p_output1(42)=-0.135*(-1.*t1602*t185*t209 - 1.*t460*t6953) - 0.049*t7046 + t1602*t185*t8041 + t6953*t8058;
  p_output1(43)=t185*t628*t8041 + t8058*t8136 - 0.049*(-1.*t185*t460*t628 + t209*t8136) - 0.135*(t6433 - 1.*t460*t8136);
  p_output1(44)=-1.*t1430*t8041 + t8058*t8208 - 0.049*(t1430*t460 + t209*t8208) - 0.135*(t1430*t209 - 1.*t460*t8208);
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


       
Eigen::Matrix<double,3,20> Jp_hip_rotation_right(const Eigen::Matrix<double,20,1> &var1)
//void Jp_hip_rotation_right(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,20>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



