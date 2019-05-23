/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:09:24 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_to_shin_left.h"

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
  double t1795;
  double t1368;
  double t2070;
  double t1478;
  double t2208;
  double t208;
  double t1699;
  double t2356;
  double t2481;
  double t3235;
  double t3348;
  double t3771;
  double t3772;
  double t5335;
  double t5391;
  double t5398;
  double t5734;
  double t4951;
  double t4953;
  double t4988;
  double t5822;
  double t6205;
  double t6237;
  double t6270;
  double t6292;
  double t6192;
  double t6193;
  double t6204;
  double t6365;
  double t6385;
  double t6405;
  double t6455;
  double t6481;
  double t6487;
  double t6493;
  double t6513;
  double t6516;
  double t6522;
  double t6631;
  double t6693;
  double t6703;
  double t6726;
  double t6740;
  double t6745;
  double t6764;
  double t6797;
  double t6802;
  double t6804;
  double t6830;
  double t6831;
  double t6846;
  double t514;
  double t580;
  double t1322;
  double t1324;
  double t3860;
  double t4811;
  double t6924;
  double t6927;
  double t6938;
  double t6956;
  double t6960;
  double t6974;
  double t5612;
  double t5758;
  double t5773;
  double t5920;
  double t5946;
  double t5947;
  double t6983;
  double t6986;
  double t6989;
  double t6272;
  double t6337;
  double t6353;
  double t6411;
  double t6415;
  double t6419;
  double t6490;
  double t6503;
  double t6512;
  double t7033;
  double t7035;
  double t7045;
  double t7052;
  double t7057;
  double t7065;
  double t6542;
  double t6600;
  double t6625;
  double t6747;
  double t6770;
  double t6772;
  double t7103;
  double t7107;
  double t7113;
  double t7125;
  double t7128;
  double t7129;
  double t6817;
  double t6826;
  double t6828;
  double t7159;
  double t7168;
  double t7169;
  double t7184;
  double t7193;
  double t7194;
  double t7296;
  double t7319;
  double t7320;
  double t7359;
  double t7361;
  double t7370;
  double t7373;
  double t7375;
  double t7394;
  double t7406;
  double t7408;
  double t7409;
  double t7415;
  double t7417;
  double t7428;
  double t7443;
  double t7454;
  double t7462;
  double t7470;
  double t7473;
  double t7474;
  t1795 = Cos(var1[3]);
  t1368 = Cos(var1[5]);
  t2070 = Sin(var1[4]);
  t1478 = Sin(var1[3]);
  t2208 = Sin(var1[5]);
  t208 = Cos(var1[6]);
  t1699 = -1.*t1368*t1478;
  t2356 = t1795*t2070*t2208;
  t2481 = t1699 + t2356;
  t3235 = t1795*t1368*t2070;
  t3348 = t1478*t2208;
  t3771 = t3235 + t3348;
  t3772 = Sin(var1[6]);
  t5335 = Cos(var1[7]);
  t5391 = -1.*t5335;
  t5398 = 1. + t5391;
  t5734 = Sin(var1[7]);
  t4951 = t208*t2481;
  t4953 = t3771*t3772;
  t4988 = t4951 + t4953;
  t5822 = Cos(var1[4]);
  t6205 = Cos(var1[8]);
  t6237 = -1.*t6205;
  t6270 = 1. + t6237;
  t6292 = Sin(var1[8]);
  t6192 = t1795*t5822*t5335;
  t6193 = t4988*t5734;
  t6204 = t6192 + t6193;
  t6365 = t208*t3771;
  t6385 = -1.*t2481*t3772;
  t6405 = t6365 + t6385;
  t6455 = Cos(var1[9]);
  t6481 = -1.*t6455;
  t6487 = 1. + t6481;
  t6493 = Sin(var1[9]);
  t6513 = t6205*t6204;
  t6516 = t6405*t6292;
  t6522 = t6513 + t6516;
  t6631 = t6205*t6405;
  t6693 = -1.*t6204*t6292;
  t6703 = t6631 + t6693;
  t6726 = Cos(var1[10]);
  t6740 = -1.*t6726;
  t6745 = 1. + t6740;
  t6764 = Sin(var1[10]);
  t6797 = -1.*t6493*t6522;
  t6802 = t6455*t6703;
  t6804 = t6797 + t6802;
  t6830 = t6455*t6522;
  t6831 = t6493*t6703;
  t6846 = t6830 + t6831;
  t514 = -1.*t208;
  t580 = 1. + t514;
  t1322 = 0.135*t580;
  t1324 = 0. + t1322;
  t3860 = -0.135*t3772;
  t4811 = 0. + t3860;
  t6924 = t1795*t1368;
  t6927 = t1478*t2070*t2208;
  t6938 = t6924 + t6927;
  t6956 = t1368*t1478*t2070;
  t6960 = -1.*t1795*t2208;
  t6974 = t6956 + t6960;
  t5612 = 0.135*t5398;
  t5758 = 0.049*t5734;
  t5773 = 0. + t5612 + t5758;
  t5920 = -0.049*t5398;
  t5946 = 0.135*t5734;
  t5947 = 0. + t5920 + t5946;
  t6983 = t208*t6938;
  t6986 = t6974*t3772;
  t6989 = t6983 + t6986;
  t6272 = -0.049*t6270;
  t6337 = -0.09*t6292;
  t6353 = 0. + t6272 + t6337;
  t6411 = -0.09*t6270;
  t6415 = 0.049*t6292;
  t6419 = 0. + t6411 + t6415;
  t6490 = -0.049*t6487;
  t6503 = -0.21*t6493;
  t6512 = 0. + t6490 + t6503;
  t7033 = t5822*t5335*t1478;
  t7035 = t6989*t5734;
  t7045 = t7033 + t7035;
  t7052 = t208*t6974;
  t7057 = -1.*t6938*t3772;
  t7065 = t7052 + t7057;
  t6542 = -0.21*t6487;
  t6600 = 0.049*t6493;
  t6625 = 0. + t6542 + t6600;
  t6747 = -0.2707*t6745;
  t6770 = 0.0016*t6764;
  t6772 = 0. + t6747 + t6770;
  t7103 = t6205*t7045;
  t7107 = t7065*t6292;
  t7113 = t7103 + t7107;
  t7125 = t6205*t7065;
  t7128 = -1.*t7045*t6292;
  t7129 = t7125 + t7128;
  t6817 = -0.0016*t6745;
  t6826 = -0.2707*t6764;
  t6828 = 0. + t6817 + t6826;
  t7159 = -1.*t6493*t7113;
  t7168 = t6455*t7129;
  t7169 = t7159 + t7168;
  t7184 = t6455*t7113;
  t7193 = t6493*t7129;
  t7194 = t7184 + t7193;
  t7296 = t5822*t208*t2208;
  t7319 = t5822*t1368*t3772;
  t7320 = t7296 + t7319;
  t7359 = -1.*t5335*t2070;
  t7361 = t7320*t5734;
  t7370 = t7359 + t7361;
  t7373 = t5822*t1368*t208;
  t7375 = -1.*t5822*t2208*t3772;
  t7394 = t7373 + t7375;
  t7406 = t6205*t7370;
  t7408 = t7394*t6292;
  t7409 = t7406 + t7408;
  t7415 = t6205*t7394;
  t7417 = -1.*t7370*t6292;
  t7428 = t7415 + t7417;
  t7443 = -1.*t6493*t7409;
  t7454 = t6455*t7428;
  t7462 = t7443 + t7454;
  t7470 = t6455*t7409;
  t7473 = t6493*t7428;
  t7474 = t7470 + t7473;

  p_output1(0)=0. + t1324*t2481 + t3771*t4811 + t4988*t5773 + 0.1305*(t4988*t5335 - 1.*t1795*t5734*t5822) + t1795*t5822*t5947 + t6204*t6353 + t6405*t6419 + t6512*t6522 + t6625*t6703 + t6772*t6804 + t6828*t6846 - 0.0016*(t6764*t6804 + t6726*t6846) - 0.2707*(t6726*t6804 - 1.*t6764*t6846) + var1(0);
  p_output1(1)=0. + t1478*t5822*t5947 + t1324*t6938 + t4811*t6974 + t5773*t6989 + 0.1305*(-1.*t1478*t5734*t5822 + t5335*t6989) + t6353*t7045 + t6419*t7065 + t6512*t7113 + t6625*t7129 + t6772*t7169 + t6828*t7194 - 0.0016*(t6764*t7169 + t6726*t7194) - 0.2707*(t6726*t7169 - 1.*t6764*t7194) + var1(1);
  p_output1(2)=0. + t1324*t2208*t5822 + t1368*t4811*t5822 - 1.*t2070*t5947 + t5773*t7320 + 0.1305*(t2070*t5734 + t5335*t7320) + t6353*t7370 + t6419*t7394 + t6512*t7409 + t6625*t7428 + t6772*t7462 + t6828*t7474 - 0.0016*(t6764*t7462 + t6726*t7474) - 0.2707*(t6726*t7462 - 1.*t6764*t7474) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_knee_to_shin_left(const Eigen::Matrix<double,20,1> &var1)
//void p_knee_to_shin_left(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



