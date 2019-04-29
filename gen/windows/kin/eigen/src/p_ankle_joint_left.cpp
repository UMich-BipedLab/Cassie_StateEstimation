/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:21:58 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_ankle_joint_left.h"

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
  double t1700;
  double t999;
  double t2367;
  double t1301;
  double t2434;
  double t46;
  double t1360;
  double t2453;
  double t2458;
  double t2705;
  double t2829;
  double t3396;
  double t3398;
  double t4425;
  double t4558;
  double t4650;
  double t4788;
  double t3850;
  double t4138;
  double t4363;
  double t5349;
  double t5703;
  double t5718;
  double t5738;
  double t5773;
  double t5635;
  double t5659;
  double t5661;
  double t5841;
  double t5901;
  double t5911;
  double t5990;
  double t6011;
  double t6052;
  double t6066;
  double t6330;
  double t6337;
  double t6348;
  double t6405;
  double t6411;
  double t6419;
  double t6494;
  double t6511;
  double t6529;
  double t6542;
  double t6622;
  double t6625;
  double t6631;
  double t6672;
  double t6689;
  double t6690;
  double t6730;
  double t6772;
  double t6791;
  double t6828;
  double t6855;
  double t6856;
  double t6857;
  double t6891;
  double t6899;
  double t6907;
  double t403;
  double t464;
  double t581;
  double t624;
  double t3651;
  double t3810;
  double t6982;
  double t6986;
  double t6995;
  double t7017;
  double t7018;
  double t7031;
  double t4736;
  double t5138;
  double t5159;
  double t5501;
  double t5510;
  double t5525;
  double t7042;
  double t7048;
  double t7065;
  double t5763;
  double t5775;
  double t5794;
  double t5920;
  double t5927;
  double t5946;
  double t6053;
  double t6199;
  double t6259;
  double t7112;
  double t7125;
  double t7129;
  double t7157;
  double t7168;
  double t7188;
  double t6370;
  double t6381;
  double t6401;
  double t6538;
  double t6570;
  double t6576;
  double t7217;
  double t7225;
  double t7239;
  double t7247;
  double t7252;
  double t7257;
  double t6651;
  double t6665;
  double t6668;
  double t6813;
  double t6834;
  double t6849;
  double t7262;
  double t7273;
  double t7285;
  double t7303;
  double t7319;
  double t7345;
  double t6869;
  double t6877;
  double t6885;
  double t7351;
  double t7355;
  double t7356;
  double t7371;
  double t7373;
  double t7394;
  double t7520;
  double t7529;
  double t7532;
  double t7584;
  double t7589;
  double t7598;
  double t7627;
  double t7629;
  double t7645;
  double t7650;
  double t7656;
  double t7657;
  double t7663;
  double t7664;
  double t7706;
  double t7728;
  double t7736;
  double t7740;
  double t7757;
  double t7763;
  double t7788;
  double t7801;
  double t7802;
  double t7803;
  double t7810;
  double t7813;
  double t7816;
  t1700 = Cos(var1[3]);
  t999 = Cos(var1[5]);
  t2367 = Sin(var1[4]);
  t1301 = Sin(var1[3]);
  t2434 = Sin(var1[5]);
  t46 = Cos(var1[6]);
  t1360 = -1.*t999*t1301;
  t2453 = t1700*t2367*t2434;
  t2458 = t1360 + t2453;
  t2705 = t1700*t999*t2367;
  t2829 = t1301*t2434;
  t3396 = t2705 + t2829;
  t3398 = Sin(var1[6]);
  t4425 = Cos(var1[7]);
  t4558 = -1.*t4425;
  t4650 = 1. + t4558;
  t4788 = Sin(var1[7]);
  t3850 = t46*t2458;
  t4138 = t3396*t3398;
  t4363 = t3850 + t4138;
  t5349 = Cos(var1[4]);
  t5703 = Cos(var1[8]);
  t5718 = -1.*t5703;
  t5738 = 1. + t5718;
  t5773 = Sin(var1[8]);
  t5635 = t1700*t5349*t4425;
  t5659 = t4363*t4788;
  t5661 = t5635 + t5659;
  t5841 = t46*t3396;
  t5901 = -1.*t2458*t3398;
  t5911 = t5841 + t5901;
  t5990 = Cos(var1[9]);
  t6011 = -1.*t5990;
  t6052 = 1. + t6011;
  t6066 = Sin(var1[9]);
  t6330 = t5703*t5661;
  t6337 = t5911*t5773;
  t6348 = t6330 + t6337;
  t6405 = t5703*t5911;
  t6411 = -1.*t5661*t5773;
  t6419 = t6405 + t6411;
  t6494 = Cos(var1[10]);
  t6511 = -1.*t6494;
  t6529 = 1. + t6511;
  t6542 = Sin(var1[10]);
  t6622 = -1.*t6066*t6348;
  t6625 = t5990*t6419;
  t6631 = t6622 + t6625;
  t6672 = t5990*t6348;
  t6689 = t6066*t6419;
  t6690 = t6672 + t6689;
  t6730 = Cos(var1[11]);
  t6772 = -1.*t6730;
  t6791 = 1. + t6772;
  t6828 = Sin(var1[11]);
  t6855 = t6542*t6631;
  t6856 = t6494*t6690;
  t6857 = t6855 + t6856;
  t6891 = t6494*t6631;
  t6899 = -1.*t6542*t6690;
  t6907 = t6891 + t6899;
  t403 = -1.*t46;
  t464 = 1. + t403;
  t581 = 0.135*t464;
  t624 = 0. + t581;
  t3651 = -0.135*t3398;
  t3810 = 0. + t3651;
  t6982 = t1700*t999;
  t6986 = t1301*t2367*t2434;
  t6995 = t6982 + t6986;
  t7017 = t999*t1301*t2367;
  t7018 = -1.*t1700*t2434;
  t7031 = t7017 + t7018;
  t4736 = 0.135*t4650;
  t5138 = 0.049*t4788;
  t5159 = 0. + t4736 + t5138;
  t5501 = -0.049*t4650;
  t5510 = 0.135*t4788;
  t5525 = 0. + t5501 + t5510;
  t7042 = t46*t6995;
  t7048 = t7031*t3398;
  t7065 = t7042 + t7048;
  t5763 = -0.049*t5738;
  t5775 = -0.09*t5773;
  t5794 = 0. + t5763 + t5775;
  t5920 = -0.09*t5738;
  t5927 = 0.049*t5773;
  t5946 = 0. + t5920 + t5927;
  t6053 = -0.049*t6052;
  t6199 = -0.21*t6066;
  t6259 = 0. + t6053 + t6199;
  t7112 = t5349*t4425*t1301;
  t7125 = t7065*t4788;
  t7129 = t7112 + t7125;
  t7157 = t46*t7031;
  t7168 = -1.*t6995*t3398;
  t7188 = t7157 + t7168;
  t6370 = -0.21*t6052;
  t6381 = 0.049*t6066;
  t6401 = 0. + t6370 + t6381;
  t6538 = -0.2707*t6529;
  t6570 = 0.0016*t6542;
  t6576 = 0. + t6538 + t6570;
  t7217 = t5703*t7129;
  t7225 = t7188*t5773;
  t7239 = t7217 + t7225;
  t7247 = t5703*t7188;
  t7252 = -1.*t7129*t5773;
  t7257 = t7247 + t7252;
  t6651 = -0.0016*t6529;
  t6665 = -0.2707*t6542;
  t6668 = 0. + t6651 + t6665;
  t6813 = 0.0184*t6791;
  t6834 = -0.7055*t6828;
  t6849 = 0. + t6813 + t6834;
  t7262 = -1.*t6066*t7239;
  t7273 = t5990*t7257;
  t7285 = t7262 + t7273;
  t7303 = t5990*t7239;
  t7319 = t6066*t7257;
  t7345 = t7303 + t7319;
  t6869 = -0.7055*t6791;
  t6877 = -0.0184*t6828;
  t6885 = 0. + t6869 + t6877;
  t7351 = t6542*t7285;
  t7355 = t6494*t7345;
  t7356 = t7351 + t7355;
  t7371 = t6494*t7285;
  t7373 = -1.*t6542*t7345;
  t7394 = t7371 + t7373;
  t7520 = t5349*t46*t2434;
  t7529 = t5349*t999*t3398;
  t7532 = t7520 + t7529;
  t7584 = -1.*t4425*t2367;
  t7589 = t7532*t4788;
  t7598 = t7584 + t7589;
  t7627 = t5349*t999*t46;
  t7629 = -1.*t5349*t2434*t3398;
  t7645 = t7627 + t7629;
  t7650 = t5703*t7598;
  t7656 = t7645*t5773;
  t7657 = t7650 + t7656;
  t7663 = t5703*t7645;
  t7664 = -1.*t7598*t5773;
  t7706 = t7663 + t7664;
  t7728 = -1.*t6066*t7657;
  t7736 = t5990*t7706;
  t7740 = t7728 + t7736;
  t7757 = t5990*t7657;
  t7763 = t6066*t7706;
  t7788 = t7757 + t7763;
  t7801 = t6542*t7740;
  t7802 = t6494*t7788;
  t7803 = t7801 + t7802;
  t7810 = t6494*t7740;
  t7813 = -1.*t6542*t7788;
  t7816 = t7810 + t7813;

  p_output1(0)=0. + t3396*t3810 + t4363*t5159 + 0.1305*(t4363*t4425 - 1.*t1700*t4788*t5349) + t1700*t5349*t5525 + t5661*t5794 + t5911*t5946 + t2458*t624 + t6259*t6348 + t6401*t6419 + t6576*t6631 + t6668*t6690 + t6849*t6857 + t6885*t6907 - 0.7055*(-1.*t6828*t6857 + t6730*t6907) + 0.0184*(t6730*t6857 + t6828*t6907) + var1(0);
  p_output1(1)=0. + t1301*t5349*t5525 + t624*t6995 + t3810*t7031 + t5159*t7065 + 0.1305*(-1.*t1301*t4788*t5349 + t4425*t7065) + t5794*t7129 + t5946*t7188 + t6259*t7239 + t6401*t7257 + t6576*t7285 + t6668*t7345 + t6849*t7356 + t6885*t7394 - 0.7055*(-1.*t6828*t7356 + t6730*t7394) + 0.0184*(t6730*t7356 + t6828*t7394) + var1(1);
  p_output1(2)=0. - 1.*t2367*t5525 + t2434*t5349*t624 + t5159*t7532 + 0.1305*(t2367*t4788 + t4425*t7532) + t5794*t7598 + t5946*t7645 + t6259*t7657 + t6401*t7706 + t6576*t7740 + t6668*t7788 + t6849*t7803 + t6885*t7816 - 0.7055*(-1.*t6828*t7803 + t6730*t7816) + 0.0184*(t6730*t7803 + t6828*t7816) + t3810*t5349*t999 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_ankle_joint_left(const Eigen::Matrix<double,20,1> &var1)
//void p_ankle_joint_left(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



