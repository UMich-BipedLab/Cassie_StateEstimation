/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:15 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_joint_left.h"

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
  double t322;
  double t763;
  double t939;
  double t796;
  double t1037;
  double t761;
  double t1254;
  double t1316;
  double t1501;
  double t841;
  double t1085;
  double t1167;
  double t1505;
  double t264;
  double t1917;
  double t1922;
  double t2110;
  double t447;
  double t492;
  double t726;
  double t1247;
  double t1519;
  double t1545;
  double t1552;
  double t1797;
  double t1864;
  double t2191;
  double t82;
  double t2748;
  double t2768;
  double t2808;
  double t2554;
  double t2587;
  double t2635;
  double t2327;
  double t3059;
  double t3095;
  double t3106;
  double t2543;
  double t2684;
  double t2845;
  double t2881;
  double t2971;
  double t2978;
  double t3406;
  double t3415;
  double t3424;
  double t3254;
  double t3289;
  double t3319;
  double t3336;
  double t3367;
  double t3382;
  double t1889;
  double t2225;
  double t2270;
  double t2335;
  double t2385;
  double t2442;
  double t3000;
  double t3124;
  double t3164;
  double t3183;
  double t3185;
  double t3205;
  double t3396;
  double t3464;
  double t3472;
  double t3490;
  double t3492;
  double t3514;
  double t4602;
  double t4609;
  double t5042;
  double t5076;
  double t5431;
  double t5434;
  double t3598;
  double t3639;
  double t3649;
  double t4343;
  double t4353;
  double t4366;
  double t4379;
  double t4497;
  double t4587;
  double t4647;
  double t4654;
  double t4659;
  double t4723;
  double t4726;
  double t4810;
  double t5118;
  double t5130;
  double t5187;
  double t5205;
  double t5250;
  double t5325;
  double t5436;
  double t5440;
  double t5464;
  double t5474;
  double t5482;
  double t5507;
  double t3702;
  double t3802;
  double t3806;
  double t3819;
  double t3838;
  double t3880;
  t322 = Cos(var1[3]);
  t763 = Cos(var1[5]);
  t939 = Sin(var1[4]);
  t796 = Sin(var1[3]);
  t1037 = Sin(var1[5]);
  t761 = Cos(var1[6]);
  t1254 = t322*t763*t939;
  t1316 = t796*t1037;
  t1501 = t1254 + t1316;
  t841 = -1.*t763*t796;
  t1085 = t322*t939*t1037;
  t1167 = t841 + t1085;
  t1505 = Sin(var1[6]);
  t264 = Cos(var1[8]);
  t1917 = t761*t1501;
  t1922 = -1.*t1167*t1505;
  t2110 = t1917 + t1922;
  t447 = Cos(var1[4]);
  t492 = Cos(var1[7]);
  t726 = t322*t447*t492;
  t1247 = t761*t1167;
  t1519 = t1501*t1505;
  t1545 = t1247 + t1519;
  t1552 = Sin(var1[7]);
  t1797 = t1545*t1552;
  t1864 = t726 + t1797;
  t2191 = Sin(var1[8]);
  t82 = Sin(var1[9]);
  t2748 = t763*t796*t939;
  t2768 = -1.*t322*t1037;
  t2808 = t2748 + t2768;
  t2554 = t322*t763;
  t2587 = t796*t939*t1037;
  t2635 = t2554 + t2587;
  t2327 = Cos(var1[9]);
  t3059 = t761*t2808;
  t3095 = -1.*t2635*t1505;
  t3106 = t3059 + t3095;
  t2543 = t447*t492*t796;
  t2684 = t761*t2635;
  t2845 = t2808*t1505;
  t2881 = t2684 + t2845;
  t2971 = t2881*t1552;
  t2978 = t2543 + t2971;
  t3406 = t447*t763*t761;
  t3415 = -1.*t447*t1037*t1505;
  t3424 = t3406 + t3415;
  t3254 = -1.*t492*t939;
  t3289 = t447*t761*t1037;
  t3319 = t447*t763*t1505;
  t3336 = t3289 + t3319;
  t3367 = t3336*t1552;
  t3382 = t3254 + t3367;
  t1889 = t264*t1864;
  t2225 = t2110*t2191;
  t2270 = t1889 + t2225;
  t2335 = t264*t2110;
  t2385 = -1.*t1864*t2191;
  t2442 = t2335 + t2385;
  t3000 = t264*t2978;
  t3124 = t3106*t2191;
  t3164 = t3000 + t3124;
  t3183 = t264*t3106;
  t3185 = -1.*t2978*t2191;
  t3205 = t3183 + t3185;
  t3396 = t264*t3382;
  t3464 = t3424*t2191;
  t3472 = t3396 + t3464;
  t3490 = t264*t3424;
  t3492 = -1.*t3382*t2191;
  t3514 = t3490 + t3492;
  t4602 = -1.*t492;
  t4609 = 1. + t4602;
  t5042 = -1.*t264;
  t5076 = 1. + t5042;
  t5431 = -1.*t2327;
  t5434 = 1. + t5431;
  t3598 = t2327*t2270;
  t3639 = t82*t2442;
  t3649 = t3598 + t3639;
  t4343 = -1.*t761;
  t4353 = 1. + t4343;
  t4366 = 0.135*t4353;
  t4379 = 0. + t4366;
  t4497 = -0.135*t1505;
  t4587 = 0. + t4497;
  t4647 = 0.135*t4609;
  t4654 = 0.049*t1552;
  t4659 = 0. + t4647 + t4654;
  t4723 = -0.049*t4609;
  t4726 = 0.135*t1552;
  t4810 = 0. + t4723 + t4726;
  t5118 = -0.049*t5076;
  t5130 = -0.09*t2191;
  t5187 = 0. + t5118 + t5130;
  t5205 = -0.09*t5076;
  t5250 = 0.049*t2191;
  t5325 = 0. + t5205 + t5250;
  t5436 = -0.049*t5434;
  t5440 = -0.21*t82;
  t5464 = 0. + t5436 + t5440;
  t5474 = -0.21*t5434;
  t5482 = 0.049*t82;
  t5507 = 0. + t5474 + t5482;
  t3702 = t2327*t3164;
  t3802 = t82*t3205;
  t3806 = t3702 + t3802;
  t3819 = t2327*t3472;
  t3838 = t82*t3514;
  t3880 = t3819 + t3838;

  p_output1(0)=-1.*t2327*t2442 + t2270*t82;
  p_output1(1)=-1.*t2327*t3205 + t3164*t82;
  p_output1(2)=-1.*t2327*t3514 + t3472*t82;
  p_output1(3)=0.;
  p_output1(4)=t3649;
  p_output1(5)=t3806;
  p_output1(6)=t3880;
  p_output1(7)=0.;
  p_output1(8)=t1552*t322*t447 - 1.*t1545*t492;
  p_output1(9)=-1.*t2881*t492 + t1552*t447*t796;
  p_output1(10)=-1.*t3336*t492 - 1.*t1552*t939;
  p_output1(11)=0.;
  p_output1(12)=0. - 0.049*t3649 + t1167*t4379 + t1501*t4587 + t1545*t4659 + t322*t447*t4810 + 0.1305*(-1.*t1552*t322*t447 + t1545*t492) + t1864*t5187 + t2110*t5325 + t2270*t5464 + t2442*t5507 - 0.21*(t2327*t2442 - 1.*t2270*t82) + var1(0);
  p_output1(13)=0. - 0.049*t3806 + t2635*t4379 + t2808*t4587 + t2881*t4659 + t2978*t5187 + t3106*t5325 + t3164*t5464 + t3205*t5507 + t447*t4810*t796 + 0.1305*(t2881*t492 - 1.*t1552*t447*t796) - 0.21*(t2327*t3205 - 1.*t3164*t82) + var1(1);
  p_output1(14)=0. - 0.049*t3880 + t1037*t4379*t447 + t3336*t4659 + t3382*t5187 + t3424*t5325 + t3472*t5464 + t3514*t5507 + t447*t4587*t763 - 0.21*(t2327*t3514 - 1.*t3472*t82) - 1.*t4810*t939 + 0.1305*(t3336*t492 + t1552*t939) + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_knee_joint_left(const Eigen::Matrix<double,20,1> &var1)
//void H_knee_joint_left(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



