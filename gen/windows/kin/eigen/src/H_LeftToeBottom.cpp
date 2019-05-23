/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:10:14 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_LeftToeBottom.h"

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
  double t495;
  double t426;
  double t503;
  double t450;
  double t508;
  double t45;
  double t310;
  double t747;
  double t819;
  double t836;
  double t476;
  double t571;
  double t581;
  double t582;
  double t659;
  double t673;
  double t692;
  double t766;
  double t815;
  double t1502;
  double t1562;
  double t1567;
  double t1570;
  double t1515;
  double t1528;
  double t1555;
  double t1600;
  double t1675;
  double t1560;
  double t1617;
  double t1659;
  double t1494;
  double t1765;
  double t1794;
  double t1800;
  double t1872;
  double t1666;
  double t1805;
  double t1814;
  double t1487;
  double t1882;
  double t1906;
  double t1915;
  double t2019;
  double t1835;
  double t1918;
  double t1995;
  double t1486;
  double t2035;
  double t2040;
  double t2051;
  double t2112;
  double t2002;
  double t2056;
  double t2077;
  double t1423;
  double t2141;
  double t2174;
  double t2199;
  double t908;
  double t919;
  double t940;
  double t944;
  double t956;
  double t969;
  double t971;
  double t977;
  double t994;
  double t2460;
  double t2470;
  double t2490;
  double t2422;
  double t2432;
  double t2451;
  double t2455;
  double t2491;
  double t2575;
  double t2591;
  double t2610;
  double t2631;
  double t2578;
  double t2656;
  double t2684;
  double t2723;
  double t2749;
  double t2770;
  double t2698;
  double t2781;
  double t2797;
  double t2846;
  double t2878;
  double t2884;
  double t2821;
  double t2907;
  double t2915;
  double t2951;
  double t2954;
  double t2966;
  double t1118;
  double t1132;
  double t1288;
  double t3235;
  double t3241;
  double t3248;
  double t3196;
  double t3200;
  double t3216;
  double t3218;
  double t3271;
  double t3272;
  double t3289;
  double t3303;
  double t3321;
  double t3278;
  double t3326;
  double t3347;
  double t3360;
  double t3364;
  double t3389;
  double t3351;
  double t3392;
  double t3400;
  double t3421;
  double t3448;
  double t3476;
  double t3407;
  double t3493;
  double t3508;
  double t3513;
  double t3521;
  double t3525;
  double t2082;
  double t2237;
  double t2250;
  double t2306;
  double t2337;
  double t2341;
  double t2948;
  double t3020;
  double t3067;
  double t3099;
  double t3122;
  double t3139;
  double t3510;
  double t3533;
  double t3548;
  double t3553;
  double t3556;
  double t3593;
  double t3851;
  double t3852;
  double t4043;
  double t4052;
  double t4172;
  double t4176;
  double t4328;
  double t4342;
  double t4440;
  double t4444;
  double t4578;
  double t4594;
  double t3711;
  double t3732;
  double t3748;
  double t3749;
  double t3769;
  double t3776;
  double t3853;
  double t3865;
  double t3868;
  double t3922;
  double t3951;
  double t3955;
  double t4073;
  double t4084;
  double t4098;
  double t4100;
  double t4103;
  double t4151;
  double t4181;
  double t4200;
  double t4230;
  double t4276;
  double t4298;
  double t4300;
  double t4349;
  double t4374;
  double t4376;
  double t4379;
  double t4387;
  double t4394;
  double t4446;
  double t4447;
  double t4490;
  double t4516;
  double t4534;
  double t4542;
  double t4611;
  double t4661;
  double t4666;
  double t4671;
  double t4674;
  double t4679;
  t495 = Cos(var1[3]);
  t426 = Cos(var1[5]);
  t503 = Sin(var1[4]);
  t450 = Sin(var1[3]);
  t508 = Sin(var1[5]);
  t45 = Cos(var1[7]);
  t310 = Cos(var1[6]);
  t747 = Sin(var1[6]);
  t819 = Cos(var1[4]);
  t836 = Sin(var1[7]);
  t476 = -1.*t426*t450;
  t571 = t495*t503*t508;
  t581 = t476 + t571;
  t582 = t310*t581;
  t659 = t495*t426*t503;
  t673 = t450*t508;
  t692 = t659 + t673;
  t766 = t692*t747;
  t815 = t582 + t766;
  t1502 = Cos(var1[8]);
  t1562 = t310*t692;
  t1567 = -1.*t581*t747;
  t1570 = t1562 + t1567;
  t1515 = t495*t819*t45;
  t1528 = t815*t836;
  t1555 = t1515 + t1528;
  t1600 = Sin(var1[8]);
  t1675 = Cos(var1[9]);
  t1560 = t1502*t1555;
  t1617 = t1570*t1600;
  t1659 = t1560 + t1617;
  t1494 = Sin(var1[9]);
  t1765 = t1502*t1570;
  t1794 = -1.*t1555*t1600;
  t1800 = t1765 + t1794;
  t1872 = Cos(var1[10]);
  t1666 = -1.*t1494*t1659;
  t1805 = t1675*t1800;
  t1814 = t1666 + t1805;
  t1487 = Sin(var1[10]);
  t1882 = t1675*t1659;
  t1906 = t1494*t1800;
  t1915 = t1882 + t1906;
  t2019 = Cos(var1[11]);
  t1835 = t1487*t1814;
  t1918 = t1872*t1915;
  t1995 = t1835 + t1918;
  t1486 = Sin(var1[11]);
  t2035 = t1872*t1814;
  t2040 = -1.*t1487*t1915;
  t2051 = t2035 + t2040;
  t2112 = Cos(var1[12]);
  t2002 = -1.*t1486*t1995;
  t2056 = t2019*t2051;
  t2077 = t2002 + t2056;
  t1423 = Sin(var1[12]);
  t2141 = t2019*t1995;
  t2174 = t1486*t2051;
  t2199 = t2141 + t2174;
  t908 = t495*t426;
  t919 = t450*t503*t508;
  t940 = t908 + t919;
  t944 = t310*t940;
  t956 = t426*t450*t503;
  t969 = -1.*t495*t508;
  t971 = t956 + t969;
  t977 = t971*t747;
  t994 = t944 + t977;
  t2460 = t310*t971;
  t2470 = -1.*t940*t747;
  t2490 = t2460 + t2470;
  t2422 = t819*t45*t450;
  t2432 = t994*t836;
  t2451 = t2422 + t2432;
  t2455 = t1502*t2451;
  t2491 = t2490*t1600;
  t2575 = t2455 + t2491;
  t2591 = t1502*t2490;
  t2610 = -1.*t2451*t1600;
  t2631 = t2591 + t2610;
  t2578 = -1.*t1494*t2575;
  t2656 = t1675*t2631;
  t2684 = t2578 + t2656;
  t2723 = t1675*t2575;
  t2749 = t1494*t2631;
  t2770 = t2723 + t2749;
  t2698 = t1487*t2684;
  t2781 = t1872*t2770;
  t2797 = t2698 + t2781;
  t2846 = t1872*t2684;
  t2878 = -1.*t1487*t2770;
  t2884 = t2846 + t2878;
  t2821 = -1.*t1486*t2797;
  t2907 = t2019*t2884;
  t2915 = t2821 + t2907;
  t2951 = t2019*t2797;
  t2954 = t1486*t2884;
  t2966 = t2951 + t2954;
  t1118 = t819*t310*t508;
  t1132 = t819*t426*t747;
  t1288 = t1118 + t1132;
  t3235 = t819*t426*t310;
  t3241 = -1.*t819*t508*t747;
  t3248 = t3235 + t3241;
  t3196 = -1.*t45*t503;
  t3200 = t1288*t836;
  t3216 = t3196 + t3200;
  t3218 = t1502*t3216;
  t3271 = t3248*t1600;
  t3272 = t3218 + t3271;
  t3289 = t1502*t3248;
  t3303 = -1.*t3216*t1600;
  t3321 = t3289 + t3303;
  t3278 = -1.*t1494*t3272;
  t3326 = t1675*t3321;
  t3347 = t3278 + t3326;
  t3360 = t1675*t3272;
  t3364 = t1494*t3321;
  t3389 = t3360 + t3364;
  t3351 = t1487*t3347;
  t3392 = t1872*t3389;
  t3400 = t3351 + t3392;
  t3421 = t1872*t3347;
  t3448 = -1.*t1487*t3389;
  t3476 = t3421 + t3448;
  t3407 = -1.*t1486*t3400;
  t3493 = t2019*t3476;
  t3508 = t3407 + t3493;
  t3513 = t2019*t3400;
  t3521 = t1486*t3476;
  t3525 = t3513 + t3521;
  t2082 = t1423*t2077;
  t2237 = t2112*t2199;
  t2250 = t2082 + t2237;
  t2306 = t2112*t2077;
  t2337 = -1.*t1423*t2199;
  t2341 = t2306 + t2337;
  t2948 = t1423*t2915;
  t3020 = t2112*t2966;
  t3067 = t2948 + t3020;
  t3099 = t2112*t2915;
  t3122 = -1.*t1423*t2966;
  t3139 = t3099 + t3122;
  t3510 = t1423*t3508;
  t3533 = t2112*t3525;
  t3548 = t3510 + t3533;
  t3553 = t2112*t3508;
  t3556 = -1.*t1423*t3525;
  t3593 = t3553 + t3556;
  t3851 = -1.*t45;
  t3852 = 1. + t3851;
  t4043 = -1.*t1502;
  t4052 = 1. + t4043;
  t4172 = -1.*t1675;
  t4176 = 1. + t4172;
  t4328 = -1.*t1872;
  t4342 = 1. + t4328;
  t4440 = -1.*t2019;
  t4444 = 1. + t4440;
  t4578 = -1.*t2112;
  t4594 = 1. + t4578;
  t3711 = -1.*t310;
  t3732 = 1. + t3711;
  t3748 = 0.135*t3732;
  t3749 = 0. + t3748;
  t3769 = -0.135*t747;
  t3776 = 0. + t3769;
  t3853 = 0.135*t3852;
  t3865 = 0.049*t836;
  t3868 = 0. + t3853 + t3865;
  t3922 = -0.049*t3852;
  t3951 = 0.135*t836;
  t3955 = 0. + t3922 + t3951;
  t4073 = -0.049*t4052;
  t4084 = -0.09*t1600;
  t4098 = 0. + t4073 + t4084;
  t4100 = -0.09*t4052;
  t4103 = 0.049*t1600;
  t4151 = 0. + t4100 + t4103;
  t4181 = -0.049*t4176;
  t4200 = -0.21*t1494;
  t4230 = 0. + t4181 + t4200;
  t4276 = -0.21*t4176;
  t4298 = 0.049*t1494;
  t4300 = 0. + t4276 + t4298;
  t4349 = -0.2707*t4342;
  t4374 = 0.0016*t1487;
  t4376 = 0. + t4349 + t4374;
  t4379 = -0.0016*t4342;
  t4387 = -0.2707*t1487;
  t4394 = 0. + t4379 + t4387;
  t4446 = 0.0184*t4444;
  t4447 = -0.7055*t1486;
  t4490 = 0. + t4446 + t4447;
  t4516 = -0.7055*t4444;
  t4534 = -0.0184*t1486;
  t4542 = 0. + t4516 + t4534;
  t4611 = -1.1135*t4594;
  t4661 = 0.0216*t1423;
  t4666 = 0. + t4611 + t4661;
  t4671 = -0.0216*t4594;
  t4674 = -1.1135*t1423;
  t4679 = 0. + t4671 + t4674;

  p_output1(0)=-1.*t45*t815 + t495*t819*t836;
  p_output1(1)=t450*t819*t836 - 1.*t45*t994;
  p_output1(2)=-1.*t1288*t45 - 1.*t503*t836;
  p_output1(3)=0.;
  p_output1(4)=0.642788*t2250 + 0.766044*t2341;
  p_output1(5)=0.642788*t3067 + 0.766044*t3139;
  p_output1(6)=0.642788*t3548 + 0.766044*t3593;
  p_output1(7)=0.;
  p_output1(8)=-0.766044*t2250 + 0.642788*t2341;
  p_output1(9)=-0.766044*t3067 + 0.642788*t3139;
  p_output1(10)=-0.766044*t3548 + 0.642788*t3593;
  p_output1(11)=0.;
  p_output1(12)=0. + 0.0306*t2250 - 1.1312*t2341 + t1555*t4098 + t1570*t4151 + t1659*t4230 + t1800*t4300 + t1814*t4376 + t1915*t4394 + t1995*t4490 + t2051*t4542 + t2077*t4666 + t2199*t4679 + t3749*t581 + t3776*t692 + t3868*t815 + t3955*t495*t819 + 0.1305*(t45*t815 - 1.*t495*t819*t836) + var1(0);
  p_output1(13)=0. + 0.0306*t3067 - 1.1312*t3139 + t2451*t4098 + t2490*t4151 + t2575*t4230 + t2631*t4300 + t2684*t4376 + t2770*t4394 + t2797*t4490 + t2884*t4542 + t2915*t4666 + t2966*t4679 + t3955*t450*t819 + t3749*t940 + t3776*t971 + t3868*t994 + 0.1305*(-1.*t450*t819*t836 + t45*t994) + var1(1);
  p_output1(14)=0. + 0.0306*t3548 - 1.1312*t3593 + t1288*t3868 + t3216*t4098 + t3248*t4151 + t3272*t4230 + t3321*t4300 + t3347*t4376 + t3389*t4394 + t3400*t4490 + t3476*t4542 + t3508*t4666 + t3525*t4679 - 1.*t3955*t503 + t3776*t426*t819 + t3749*t508*t819 + 0.1305*(t1288*t45 + t503*t836) + var1(2);
  p_output1(15)=1.;
}


       
Eigen::Matrix<double,4,4> H_LeftToeBottom(const Eigen::Matrix<double,20,1> &var1)
//void H_LeftToeBottom(Eigen::Matrix<double,4,4> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,4,4>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



