/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:22 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_toe_joint_left.h"

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
  double t612;
  double t728;
  double t793;
  double t734;
  double t885;
  double t679;
  double t1090;
  double t1107;
  double t1156;
  double t757;
  double t900;
  double t1031;
  double t1168;
  double t591;
  double t1650;
  double t1662;
  double t1703;
  double t620;
  double t653;
  double t678;
  double t1035;
  double t1336;
  double t1391;
  double t1475;
  double t1510;
  double t1565;
  double t1782;
  double t1868;
  double t1609;
  double t1788;
  double t1799;
  double t568;
  double t1918;
  double t1933;
  double t1955;
  double t2025;
  double t1823;
  double t1994;
  double t2019;
  double t471;
  double t2027;
  double t2120;
  double t2164;
  double t2275;
  double t2023;
  double t2167;
  double t2179;
  double t443;
  double t2278;
  double t2282;
  double t2301;
  double t374;
  double t2659;
  double t2660;
  double t2676;
  double t2593;
  double t2598;
  double t2628;
  double t2834;
  double t2876;
  double t2880;
  double t2572;
  double t2646;
  double t2720;
  double t2723;
  double t2729;
  double t2736;
  double t2786;
  double t2891;
  double t2903;
  double t2992;
  double t2997;
  double t3016;
  double t2987;
  double t3057;
  double t3082;
  double t3116;
  double t3139;
  double t3160;
  double t2385;
  double t3099;
  double t3169;
  double t3201;
  double t3256;
  double t3290;
  double t3299;
  double t3653;
  double t3671;
  double t3677;
  double t3407;
  double t3411;
  double t3434;
  double t3473;
  double t3533;
  double t3558;
  double t3648;
  double t3698;
  double t3716;
  double t3746;
  double t3755;
  double t3781;
  double t3742;
  double t3800;
  double t3801;
  double t3845;
  double t3847;
  double t3869;
  double t3834;
  double t3877;
  double t3881;
  double t3894;
  double t3899;
  double t3908;
  double t2272;
  double t2302;
  double t2320;
  double t2404;
  double t2454;
  double t2477;
  double t3204;
  double t3304;
  double t3306;
  double t3329;
  double t3331;
  double t3334;
  double t3888;
  double t3940;
  double t3953;
  double t3962;
  double t3965;
  double t4024;
  double t4489;
  double t4492;
  double t4940;
  double t4994;
  double t5091;
  double t5128;
  double t5331;
  double t5334;
  double t5415;
  double t5450;
  double t5575;
  double t5587;
  double t4045;
  double t4085;
  double t4086;
  double t4399;
  double t4414;
  double t4417;
  double t4425;
  double t4453;
  double t4454;
  double t4556;
  double t4561;
  double t4575;
  double t4664;
  double t4681;
  double t4735;
  double t4995;
  double t4997;
  double t4998;
  double t5044;
  double t5054;
  double t5059;
  double t5138;
  double t5168;
  double t5175;
  double t5277;
  double t5285;
  double t5308;
  double t5335;
  double t5346;
  double t5362;
  double t5385;
  double t5393;
  double t5397;
  double t5456;
  double t5459;
  double t5463;
  double t5538;
  double t5547;
  double t5549;
  double t5597;
  double t5602;
  double t5609;
  double t5614;
  double t5622;
  double t5626;
  double t4145;
  double t4156;
  double t4173;
  double t4192;
  double t4217;
  double t4222;
  t612 = Cos(var1[3]);
  t728 = Cos(var1[5]);
  t793 = Sin(var1[4]);
  t734 = Sin(var1[3]);
  t885 = Sin(var1[5]);
  t679 = Cos(var1[6]);
  t1090 = t612*t728*t793;
  t1107 = t734*t885;
  t1156 = t1090 + t1107;
  t757 = -1.*t728*t734;
  t900 = t612*t793*t885;
  t1031 = t757 + t900;
  t1168 = Sin(var1[6]);
  t591 = Cos(var1[8]);
  t1650 = t679*t1156;
  t1662 = -1.*t1031*t1168;
  t1703 = t1650 + t1662;
  t620 = Cos(var1[4]);
  t653 = Cos(var1[7]);
  t678 = t612*t620*t653;
  t1035 = t679*t1031;
  t1336 = t1156*t1168;
  t1391 = t1035 + t1336;
  t1475 = Sin(var1[7]);
  t1510 = t1391*t1475;
  t1565 = t678 + t1510;
  t1782 = Sin(var1[8]);
  t1868 = Cos(var1[9]);
  t1609 = t591*t1565;
  t1788 = t1703*t1782;
  t1799 = t1609 + t1788;
  t568 = Sin(var1[9]);
  t1918 = t591*t1703;
  t1933 = -1.*t1565*t1782;
  t1955 = t1918 + t1933;
  t2025 = Cos(var1[10]);
  t1823 = -1.*t568*t1799;
  t1994 = t1868*t1955;
  t2019 = t1823 + t1994;
  t471 = Sin(var1[10]);
  t2027 = t1868*t1799;
  t2120 = t568*t1955;
  t2164 = t2027 + t2120;
  t2275 = Cos(var1[11]);
  t2023 = t471*t2019;
  t2167 = t2025*t2164;
  t2179 = t2023 + t2167;
  t443 = Sin(var1[11]);
  t2278 = t2025*t2019;
  t2282 = -1.*t471*t2164;
  t2301 = t2278 + t2282;
  t374 = Cos(var1[12]);
  t2659 = t728*t734*t793;
  t2660 = -1.*t612*t885;
  t2676 = t2659 + t2660;
  t2593 = t612*t728;
  t2598 = t734*t793*t885;
  t2628 = t2593 + t2598;
  t2834 = t679*t2676;
  t2876 = -1.*t2628*t1168;
  t2880 = t2834 + t2876;
  t2572 = t620*t653*t734;
  t2646 = t679*t2628;
  t2720 = t2676*t1168;
  t2723 = t2646 + t2720;
  t2729 = t2723*t1475;
  t2736 = t2572 + t2729;
  t2786 = t591*t2736;
  t2891 = t2880*t1782;
  t2903 = t2786 + t2891;
  t2992 = t591*t2880;
  t2997 = -1.*t2736*t1782;
  t3016 = t2992 + t2997;
  t2987 = -1.*t568*t2903;
  t3057 = t1868*t3016;
  t3082 = t2987 + t3057;
  t3116 = t1868*t2903;
  t3139 = t568*t3016;
  t3160 = t3116 + t3139;
  t2385 = Sin(var1[12]);
  t3099 = t471*t3082;
  t3169 = t2025*t3160;
  t3201 = t3099 + t3169;
  t3256 = t2025*t3082;
  t3290 = -1.*t471*t3160;
  t3299 = t3256 + t3290;
  t3653 = t620*t728*t679;
  t3671 = -1.*t620*t885*t1168;
  t3677 = t3653 + t3671;
  t3407 = -1.*t653*t793;
  t3411 = t620*t679*t885;
  t3434 = t620*t728*t1168;
  t3473 = t3411 + t3434;
  t3533 = t3473*t1475;
  t3558 = t3407 + t3533;
  t3648 = t591*t3558;
  t3698 = t3677*t1782;
  t3716 = t3648 + t3698;
  t3746 = t591*t3677;
  t3755 = -1.*t3558*t1782;
  t3781 = t3746 + t3755;
  t3742 = -1.*t568*t3716;
  t3800 = t1868*t3781;
  t3801 = t3742 + t3800;
  t3845 = t1868*t3716;
  t3847 = t568*t3781;
  t3869 = t3845 + t3847;
  t3834 = t471*t3801;
  t3877 = t2025*t3869;
  t3881 = t3834 + t3877;
  t3894 = t2025*t3801;
  t3899 = -1.*t471*t3869;
  t3908 = t3894 + t3899;
  t2272 = -1.*t443*t2179;
  t2302 = t2275*t2301;
  t2320 = t2272 + t2302;
  t2404 = t2275*t2179;
  t2454 = t443*t2301;
  t2477 = t2404 + t2454;
  t3204 = -1.*t443*t3201;
  t3304 = t2275*t3299;
  t3306 = t3204 + t3304;
  t3329 = t2275*t3201;
  t3331 = t443*t3299;
  t3334 = t3329 + t3331;
  t3888 = -1.*t443*t3881;
  t3940 = t2275*t3908;
  t3953 = t3888 + t3940;
  t3962 = t2275*t3881;
  t3965 = t443*t3908;
  t4024 = t3962 + t3965;
  t4489 = -1.*t653;
  t4492 = 1. + t4489;
  t4940 = -1.*t591;
  t4994 = 1. + t4940;
  t5091 = -1.*t1868;
  t5128 = 1. + t5091;
  t5331 = -1.*t2025;
  t5334 = 1. + t5331;
  t5415 = -1.*t2275;
  t5450 = 1. + t5415;
  t5575 = -1.*t374;
  t5587 = 1. + t5575;
  t4045 = t2385*t2320;
  t4085 = t374*t2477;
  t4086 = t4045 + t4085;
  t4399 = -1.*t679;
  t4414 = 1. + t4399;
  t4417 = 0.135*t4414;
  t4425 = 0. + t4417;
  t4453 = -0.135*t1168;
  t4454 = 0. + t4453;
  t4556 = 0.135*t4492;
  t4561 = 0.049*t1475;
  t4575 = 0. + t4556 + t4561;
  t4664 = -0.049*t4492;
  t4681 = 0.135*t1475;
  t4735 = 0. + t4664 + t4681;
  t4995 = -0.049*t4994;
  t4997 = -0.09*t1782;
  t4998 = 0. + t4995 + t4997;
  t5044 = -0.09*t4994;
  t5054 = 0.049*t1782;
  t5059 = 0. + t5044 + t5054;
  t5138 = -0.049*t5128;
  t5168 = -0.21*t568;
  t5175 = 0. + t5138 + t5168;
  t5277 = -0.21*t5128;
  t5285 = 0.049*t568;
  t5308 = 0. + t5277 + t5285;
  t5335 = -0.2707*t5334;
  t5346 = 0.0016*t471;
  t5362 = 0. + t5335 + t5346;
  t5385 = -0.0016*t5334;
  t5393 = -0.2707*t471;
  t5397 = 0. + t5385 + t5393;
  t5456 = 0.0184*t5450;
  t5459 = -0.7055*t443;
  t5463 = 0. + t5456 + t5459;
  t5538 = -0.7055*t5450;
  t5547 = -0.0184*t443;
  t5549 = 0. + t5538 + t5547;
  t5597 = -1.1135*t5587;
  t5602 = 0.0216*t2385;
  t5609 = 0. + t5597 + t5602;
  t5614 = -0.0216*t5587;
  t5622 = -1.1135*t2385;
  t5626 = 0. + t5614 + t5622;
  t4145 = t2385*t3306;
  t4156 = t374*t3334;
  t4173 = t4145 + t4156;
  t4192 = t2385*t3953;
  t4217 = t374*t4024;
  t4222 = t4192 + t4217;

  p_output1(0)=t2385*t2477 - 1.*t2320*t374;
  p_output1(1)=t2385*t3334 - 1.*t3306*t374;
  p_output1(2)=-1.*t374*t3953 + t2385*t4024;
  p_output1(3)=0.;
  p_output1(4)=t4086;
  p_output1(5)=t4173;
  p_output1(6)=t4222;
  p_output1(7)=0.;
  p_output1(8)=t1475*t612*t620 - 1.*t1391*t653;
  p_output1(9)=-1.*t2723*t653 + t1475*t620*t734;
  p_output1(10)=-1.*t3473*t653 - 1.*t1475*t793;
  p_output1(11)=0.;
  p_output1(12)=0. - 1.1135*(-1.*t2385*t2477 + t2320*t374) - 0.0216*t4086 + t1031*t4425 + t1156*t4454 + t1391*t4575 + t1565*t4998 + t1703*t5059 + t1799*t5175 + t1955*t5308 + t2019*t5362 + t2164*t5397 + t2179*t5463 + t2301*t5549 + t2320*t5609 + t2477*t5626 + t4735*t612*t620 + 0.1305*(-1.*t1475*t612*t620 + t1391*t653) + var1(0);
  p_output1(13)=0. - 1.1135*(-1.*t2385*t3334 + t3306*t374) - 0.0216*t4173 + t2628*t4425 + t2676*t4454 + t2723*t4575 + t2736*t4998 + t2880*t5059 + t2903*t5175 + t3016*t5308 + t3082*t5362 + t3160*t5397 + t3201*t5463 + t3299*t5549 + t3306*t5609 + t3334*t5626 + t4735*t620*t734 + 0.1305*(t2723*t653 - 1.*t1475*t620*t734) + var1(1);
  p_output1(14)=0. - 1.1135*(t374*t3953 - 1.*t2385*t4024) - 0.0216*t4222 + t3473*t4575 + t3558*t4998 + t3677*t5059 + t3716*t5175 + t3781*t5308 + t3801*t5362 + t3869*t5397 + t3881*t5463 + t3908*t5549 + t3953*t5609 + t4024*t5626 + t4454*t620*t728 - 1.*t4735*t793 + 0.1305*(t3473*t653 + t1475*t793) + t4425*t620*t885 + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_toe_joint_left(const Eigen::Matrix<double,20,1> &var1)
//void H_toe_joint_left(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



