/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:41 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftToeFront.h"

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
  double t1062;
  double t902;
  double t1179;
  double t904;
  double t1296;
  double t142;
  double t905;
  double t1383;
  double t1490;
  double t1591;
  double t1619;
  double t1776;
  double t1781;
  double t2092;
  double t2153;
  double t2304;
  double t2364;
  double t1872;
  double t1898;
  double t1907;
  double t2600;
  double t2949;
  double t3004;
  double t3075;
  double t3128;
  double t2895;
  double t2912;
  double t2913;
  double t3282;
  double t3343;
  double t3347;
  double t3522;
  double t3588;
  double t3620;
  double t3796;
  double t3945;
  double t4042;
  double t4059;
  double t4212;
  double t4214;
  double t4258;
  double t4287;
  double t4348;
  double t4390;
  double t4466;
  double t4553;
  double t4559;
  double t4574;
  double t4795;
  double t4854;
  double t4895;
  double t4962;
  double t4974;
  double t5011;
  double t5042;
  double t5097;
  double t5178;
  double t5196;
  double t5290;
  double t5307;
  double t5321;
  double t5361;
  double t5395;
  double t5435;
  double t5443;
  double t5553;
  double t5613;
  double t5617;
  double t5668;
  double t5693;
  double t5698;
  double t389;
  double t761;
  double t766;
  double t804;
  double t1811;
  double t1812;
  double t5976;
  double t5990;
  double t6033;
  double t6042;
  double t6050;
  double t6080;
  double t2351;
  double t2436;
  double t2464;
  double t2620;
  double t2635;
  double t2667;
  double t6088;
  double t6094;
  double t6104;
  double t3095;
  double t3135;
  double t3138;
  double t3362;
  double t3444;
  double t3453;
  double t3644;
  double t3892;
  double t3941;
  double t6200;
  double t6237;
  double t6259;
  double t6273;
  double t6289;
  double t6300;
  double t4083;
  double t4148;
  double t4211;
  double t4455;
  double t4512;
  double t4542;
  double t6339;
  double t6341;
  double t6350;
  double t6358;
  double t6373;
  double t6374;
  double t4656;
  double t4686;
  double t4741;
  double t5036;
  double t5068;
  double t5081;
  double t6405;
  double t6419;
  double t6421;
  double t6437;
  double t6444;
  double t6452;
  double t5216;
  double t5257;
  double t5286;
  double t5437;
  double t5517;
  double t5536;
  double t6461;
  double t6462;
  double t6466;
  double t6482;
  double t6487;
  double t6501;
  double t5624;
  double t5636;
  double t5650;
  double t6517;
  double t6537;
  double t6553;
  double t6561;
  double t6567;
  double t6576;
  double t6715;
  double t6737;
  double t6740;
  double t6844;
  double t6850;
  double t6852;
  double t6861;
  double t6864;
  double t6868;
  double t6877;
  double t6900;
  double t6903;
  double t6908;
  double t6920;
  double t6926;
  double t6948;
  double t6954;
  double t6957;
  double t6977;
  double t7001;
  double t7007;
  double t7048;
  double t7085;
  double t7093;
  double t7102;
  double t7103;
  double t7110;
  double t7129;
  double t7132;
  double t7143;
  double t7158;
  double t7160;
  double t7169;
  t1062 = Cos(var1[3]);
  t902 = Cos(var1[5]);
  t1179 = Sin(var1[4]);
  t904 = Sin(var1[3]);
  t1296 = Sin(var1[5]);
  t142 = Cos(var1[6]);
  t905 = -1.*t902*t904;
  t1383 = t1062*t1179*t1296;
  t1490 = t905 + t1383;
  t1591 = t1062*t902*t1179;
  t1619 = t904*t1296;
  t1776 = t1591 + t1619;
  t1781 = Sin(var1[6]);
  t2092 = Cos(var1[7]);
  t2153 = -1.*t2092;
  t2304 = 1. + t2153;
  t2364 = Sin(var1[7]);
  t1872 = t142*t1490;
  t1898 = t1776*t1781;
  t1907 = t1872 + t1898;
  t2600 = Cos(var1[4]);
  t2949 = Cos(var1[8]);
  t3004 = -1.*t2949;
  t3075 = 1. + t3004;
  t3128 = Sin(var1[8]);
  t2895 = t1062*t2600*t2092;
  t2912 = t1907*t2364;
  t2913 = t2895 + t2912;
  t3282 = t142*t1776;
  t3343 = -1.*t1490*t1781;
  t3347 = t3282 + t3343;
  t3522 = Cos(var1[9]);
  t3588 = -1.*t3522;
  t3620 = 1. + t3588;
  t3796 = Sin(var1[9]);
  t3945 = t2949*t2913;
  t4042 = t3347*t3128;
  t4059 = t3945 + t4042;
  t4212 = t2949*t3347;
  t4214 = -1.*t2913*t3128;
  t4258 = t4212 + t4214;
  t4287 = Cos(var1[10]);
  t4348 = -1.*t4287;
  t4390 = 1. + t4348;
  t4466 = Sin(var1[10]);
  t4553 = -1.*t3796*t4059;
  t4559 = t3522*t4258;
  t4574 = t4553 + t4559;
  t4795 = t3522*t4059;
  t4854 = t3796*t4258;
  t4895 = t4795 + t4854;
  t4962 = Cos(var1[11]);
  t4974 = -1.*t4962;
  t5011 = 1. + t4974;
  t5042 = Sin(var1[11]);
  t5097 = t4466*t4574;
  t5178 = t4287*t4895;
  t5196 = t5097 + t5178;
  t5290 = t4287*t4574;
  t5307 = -1.*t4466*t4895;
  t5321 = t5290 + t5307;
  t5361 = Cos(var1[12]);
  t5395 = -1.*t5361;
  t5435 = 1. + t5395;
  t5443 = Sin(var1[12]);
  t5553 = -1.*t5042*t5196;
  t5613 = t4962*t5321;
  t5617 = t5553 + t5613;
  t5668 = t4962*t5196;
  t5693 = t5042*t5321;
  t5698 = t5668 + t5693;
  t389 = -1.*t142;
  t761 = 1. + t389;
  t766 = 0.135*t761;
  t804 = 0. + t766;
  t1811 = -0.135*t1781;
  t1812 = 0. + t1811;
  t5976 = t1062*t902;
  t5990 = t904*t1179*t1296;
  t6033 = t5976 + t5990;
  t6042 = t902*t904*t1179;
  t6050 = -1.*t1062*t1296;
  t6080 = t6042 + t6050;
  t2351 = 0.135*t2304;
  t2436 = 0.049*t2364;
  t2464 = 0. + t2351 + t2436;
  t2620 = -0.049*t2304;
  t2635 = 0.135*t2364;
  t2667 = 0. + t2620 + t2635;
  t6088 = t142*t6033;
  t6094 = t6080*t1781;
  t6104 = t6088 + t6094;
  t3095 = -0.049*t3075;
  t3135 = -0.09*t3128;
  t3138 = 0. + t3095 + t3135;
  t3362 = -0.09*t3075;
  t3444 = 0.049*t3128;
  t3453 = 0. + t3362 + t3444;
  t3644 = -0.049*t3620;
  t3892 = -0.21*t3796;
  t3941 = 0. + t3644 + t3892;
  t6200 = t2600*t2092*t904;
  t6237 = t6104*t2364;
  t6259 = t6200 + t6237;
  t6273 = t142*t6080;
  t6289 = -1.*t6033*t1781;
  t6300 = t6273 + t6289;
  t4083 = -0.21*t3620;
  t4148 = 0.049*t3796;
  t4211 = 0. + t4083 + t4148;
  t4455 = -0.2707*t4390;
  t4512 = 0.0016*t4466;
  t4542 = 0. + t4455 + t4512;
  t6339 = t2949*t6259;
  t6341 = t6300*t3128;
  t6350 = t6339 + t6341;
  t6358 = t2949*t6300;
  t6373 = -1.*t6259*t3128;
  t6374 = t6358 + t6373;
  t4656 = -0.0016*t4390;
  t4686 = -0.2707*t4466;
  t4741 = 0. + t4656 + t4686;
  t5036 = 0.0184*t5011;
  t5068 = -0.7055*t5042;
  t5081 = 0. + t5036 + t5068;
  t6405 = -1.*t3796*t6350;
  t6419 = t3522*t6374;
  t6421 = t6405 + t6419;
  t6437 = t3522*t6350;
  t6444 = t3796*t6374;
  t6452 = t6437 + t6444;
  t5216 = -0.7055*t5011;
  t5257 = -0.0184*t5042;
  t5286 = 0. + t5216 + t5257;
  t5437 = -1.1135*t5435;
  t5517 = 0.0216*t5443;
  t5536 = 0. + t5437 + t5517;
  t6461 = t4466*t6421;
  t6462 = t4287*t6452;
  t6466 = t6461 + t6462;
  t6482 = t4287*t6421;
  t6487 = -1.*t4466*t6452;
  t6501 = t6482 + t6487;
  t5624 = -0.0216*t5435;
  t5636 = -1.1135*t5443;
  t5650 = 0. + t5624 + t5636;
  t6517 = -1.*t5042*t6466;
  t6537 = t4962*t6501;
  t6553 = t6517 + t6537;
  t6561 = t4962*t6466;
  t6567 = t5042*t6501;
  t6576 = t6561 + t6567;
  t6715 = t2600*t142*t1296;
  t6737 = t2600*t902*t1781;
  t6740 = t6715 + t6737;
  t6844 = -1.*t2092*t1179;
  t6850 = t6740*t2364;
  t6852 = t6844 + t6850;
  t6861 = t2600*t902*t142;
  t6864 = -1.*t2600*t1296*t1781;
  t6868 = t6861 + t6864;
  t6877 = t2949*t6852;
  t6900 = t6868*t3128;
  t6903 = t6877 + t6900;
  t6908 = t2949*t6868;
  t6920 = -1.*t6852*t3128;
  t6926 = t6908 + t6920;
  t6948 = -1.*t3796*t6903;
  t6954 = t3522*t6926;
  t6957 = t6948 + t6954;
  t6977 = t3522*t6903;
  t7001 = t3796*t6926;
  t7007 = t6977 + t7001;
  t7048 = t4466*t6957;
  t7085 = t4287*t7007;
  t7093 = t7048 + t7085;
  t7102 = t4287*t6957;
  t7103 = -1.*t4466*t7007;
  t7110 = t7102 + t7103;
  t7129 = -1.*t5042*t7093;
  t7132 = t4962*t7110;
  t7143 = t7129 + t7132;
  t7158 = t4962*t7093;
  t7160 = t5042*t7110;
  t7169 = t7158 + t7160;

  p_output1(0)=0. + t1776*t1812 + t1907*t2464 + 0.1305*(t1907*t2092 - 1.*t1062*t2364*t2600) + t1062*t2600*t2667 + t2913*t3138 + t3347*t3453 + t3941*t4059 + t4211*t4258 + t4542*t4574 + t4741*t4895 + t5081*t5196 + t5286*t5321 + t5536*t5617 + t5650*t5698 + 0.088451*(t5443*t5617 + t5361*t5698) - 1.062256*(t5361*t5617 - 1.*t5443*t5698) + t1490*t804 + var1(0);
  p_output1(1)=0. + t1812*t6080 + t2464*t6104 + t3138*t6259 + t3453*t6300 + t3941*t6350 + t4211*t6374 + t4542*t6421 + t4741*t6452 + t5081*t6466 + t5286*t6501 + t5536*t6553 + t5650*t6576 + 0.088451*(t5443*t6553 + t5361*t6576) - 1.062256*(t5361*t6553 - 1.*t5443*t6576) + t6033*t804 + t2600*t2667*t904 + 0.1305*(t2092*t6104 - 1.*t2364*t2600*t904) + var1(1);
  p_output1(2)=0. - 1.*t1179*t2667 + t2464*t6740 + 0.1305*(t1179*t2364 + t2092*t6740) + t3138*t6852 + t3453*t6868 + t3941*t6903 + t4211*t6926 + t4542*t6957 + t4741*t7007 + t5081*t7093 + t5286*t7110 + t5536*t7143 + t5650*t7169 + 0.088451*(t5443*t7143 + t5361*t7169) - 1.062256*(t5361*t7143 - 1.*t5443*t7169) + t1296*t2600*t804 + t1812*t2600*t902 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_LeftToeFront(const Eigen::Matrix<double,20,1> &var1)
//void p_LeftToeFront(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



