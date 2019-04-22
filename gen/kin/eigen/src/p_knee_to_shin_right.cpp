/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_knee_to_shin_right.h"

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
  double t604;
  double t2704;
  double t3387;
  double t2753;
  double t3556;
  double t1172;
  double t1197;
  double t1210;
  double t1307;
  double t1712;
  double t3357;
  double t3628;
  double t4153;
  double t4254;
  double t4816;
  double t4933;
  double t4990;
  double t946;
  double t5164;
  double t5165;
  double t5217;
  double t5329;
  double t5345;
  double t5364;
  double t5406;
  double t5490;
  double t5499;
  double t5527;
  double t5728;
  double t5731;
  double t5734;
  double t5764;
  double t5783;
  double t5790;
  double t5806;
  double t5863;
  double t6014;
  double t6103;
  double t6216;
  double t6224;
  double t6251;
  double t6332;
  double t6366;
  double t6400;
  double t6564;
  double t6766;
  double t6769;
  double t6791;
  double t6914;
  double t6926;
  double t6927;
  double t1287;
  double t1308;
  double t1321;
  double t2123;
  double t2413;
  double t4328;
  double t4517;
  double t4538;
  double t4642;
  double t5025;
  double t5110;
  double t5163;
  double t7279;
  double t7282;
  double t7287;
  double t7307;
  double t7314;
  double t7377;
  double t5390;
  double t5454;
  double t5486;
  double t7433;
  double t7437;
  double t7449;
  double t5684;
  double t5686;
  double t5705;
  double t5795;
  double t5807;
  double t5809;
  double t7454;
  double t7465;
  double t7473;
  double t7565;
  double t7570;
  double t7575;
  double t6155;
  double t6179;
  double t6194;
  double t6514;
  double t6596;
  double t6668;
  double t7606;
  double t7614;
  double t7623;
  double t7649;
  double t7662;
  double t7688;
  double t6875;
  double t6890;
  double t6902;
  double t7702;
  double t7727;
  double t7733;
  double t7761;
  double t7765;
  double t7766;
  double t7895;
  double t7938;
  double t7953;
  double t8002;
  double t8038;
  double t8042;
  double t8104;
  double t8107;
  double t8126;
  double t8156;
  double t8162;
  double t8165;
  double t8178;
  double t8179;
  double t8182;
  double t8195;
  double t8196;
  double t8197;
  double t8202;
  double t8206;
  double t8221;
  t604 = Cos(var1[3]);
  t2704 = Cos(var1[5]);
  t3387 = Sin(var1[3]);
  t2753 = Sin(var1[4]);
  t3556 = Sin(var1[5]);
  t1172 = Cos(var1[14]);
  t1197 = -1.*t1172;
  t1210 = 1. + t1197;
  t1307 = Sin(var1[14]);
  t1712 = Sin(var1[13]);
  t3357 = t604*t2704*t2753;
  t3628 = t3387*t3556;
  t4153 = t3357 + t3628;
  t4254 = Cos(var1[13]);
  t4816 = -1.*t2704*t3387;
  t4933 = t604*t2753*t3556;
  t4990 = t4816 + t4933;
  t946 = Cos(var1[4]);
  t5164 = t1712*t4153;
  t5165 = t4254*t4990;
  t5217 = t5164 + t5165;
  t5329 = Cos(var1[15]);
  t5345 = -1.*t5329;
  t5364 = 1. + t5345;
  t5406 = Sin(var1[15]);
  t5490 = t4254*t4153;
  t5499 = -1.*t1712*t4990;
  t5527 = t5490 + t5499;
  t5728 = t1172*t604*t946;
  t5731 = t1307*t5217;
  t5734 = t5728 + t5731;
  t5764 = Cos(var1[16]);
  t5783 = -1.*t5764;
  t5790 = 1. + t5783;
  t5806 = Sin(var1[16]);
  t5863 = t5406*t5527;
  t6014 = t5329*t5734;
  t6103 = t5863 + t6014;
  t6216 = t5329*t5527;
  t6224 = -1.*t5406*t5734;
  t6251 = t6216 + t6224;
  t6332 = Cos(var1[17]);
  t6366 = -1.*t6332;
  t6400 = 1. + t6366;
  t6564 = Sin(var1[17]);
  t6766 = -1.*t5806*t6103;
  t6769 = t5764*t6251;
  t6791 = t6766 + t6769;
  t6914 = t5764*t6103;
  t6926 = t5806*t6251;
  t6927 = t6914 + t6926;
  t1287 = -0.049*t1210;
  t1308 = -0.135*t1307;
  t1321 = 0. + t1287 + t1308;
  t2123 = 0.135*t1712;
  t2413 = 0. + t2123;
  t4328 = -1.*t4254;
  t4517 = 1. + t4328;
  t4538 = -0.135*t4517;
  t4642 = 0. + t4538;
  t5025 = -0.135*t1210;
  t5110 = 0.049*t1307;
  t5163 = 0. + t5025 + t5110;
  t7279 = t2704*t3387*t2753;
  t7282 = -1.*t604*t3556;
  t7287 = t7279 + t7282;
  t7307 = t604*t2704;
  t7314 = t3387*t2753*t3556;
  t7377 = t7307 + t7314;
  t5390 = -0.09*t5364;
  t5454 = 0.049*t5406;
  t5486 = 0. + t5390 + t5454;
  t7433 = t1712*t7287;
  t7437 = t4254*t7377;
  t7449 = t7433 + t7437;
  t5684 = -0.049*t5364;
  t5686 = -0.09*t5406;
  t5705 = 0. + t5684 + t5686;
  t5795 = -0.049*t5790;
  t5807 = -0.21*t5806;
  t5809 = 0. + t5795 + t5807;
  t7454 = t4254*t7287;
  t7465 = -1.*t1712*t7377;
  t7473 = t7454 + t7465;
  t7565 = t1172*t946*t3387;
  t7570 = t1307*t7449;
  t7575 = t7565 + t7570;
  t6155 = -0.21*t5790;
  t6179 = 0.049*t5806;
  t6194 = 0. + t6155 + t6179;
  t6514 = -0.2707*t6400;
  t6596 = 0.0016*t6564;
  t6668 = 0. + t6514 + t6596;
  t7606 = t5406*t7473;
  t7614 = t5329*t7575;
  t7623 = t7606 + t7614;
  t7649 = t5329*t7473;
  t7662 = -1.*t5406*t7575;
  t7688 = t7649 + t7662;
  t6875 = -0.0016*t6400;
  t6890 = -0.2707*t6564;
  t6902 = 0. + t6875 + t6890;
  t7702 = -1.*t5806*t7623;
  t7727 = t5764*t7688;
  t7733 = t7702 + t7727;
  t7761 = t5764*t7623;
  t7765 = t5806*t7688;
  t7766 = t7761 + t7765;
  t7895 = t946*t2704*t1712;
  t7938 = t4254*t946*t3556;
  t7953 = t7895 + t7938;
  t8002 = t4254*t946*t2704;
  t8038 = -1.*t946*t1712*t3556;
  t8042 = t8002 + t8038;
  t8104 = -1.*t1172*t2753;
  t8107 = t1307*t7953;
  t8126 = t8104 + t8107;
  t8156 = t5406*t8042;
  t8162 = t5329*t8126;
  t8165 = t8156 + t8162;
  t8178 = t5329*t8042;
  t8179 = -1.*t5406*t8126;
  t8182 = t8178 + t8179;
  t8195 = -1.*t5806*t8165;
  t8196 = t5764*t8182;
  t8197 = t8195 + t8196;
  t8202 = t5764*t8165;
  t8206 = t5806*t8182;
  t8221 = t8202 + t8206;

  p_output1(0)=0. + t2413*t4153 + t4642*t4990 + t5163*t5217 + t5486*t5527 + t5705*t5734 + t5809*t6103 + t6194*t6251 + t6668*t6791 + t6902*t6927 - 0.0016*(t6564*t6791 + t6332*t6927) - 0.2707*(t6332*t6791 - 1.*t6564*t6927) + t1321*t604*t946 - 0.1305*(t1172*t5217 - 1.*t1307*t604*t946) + var1(0);
  p_output1(1)=0. + t2413*t7287 + t4642*t7377 + t5163*t7449 + t5486*t7473 + t5705*t7575 + t5809*t7623 + t6194*t7688 + t6668*t7733 + t6902*t7766 - 0.0016*(t6564*t7733 + t6332*t7766) - 0.2707*(t6332*t7733 - 1.*t6564*t7766) + t1321*t3387*t946 - 0.1305*(t1172*t7449 - 1.*t1307*t3387*t946) + var1(1);
  p_output1(2)=0. - 1.*t1321*t2753 + t5163*t7953 - 0.1305*(t1307*t2753 + t1172*t7953) + t5486*t8042 + t5705*t8126 + t5809*t8165 + t6194*t8182 + t6668*t8197 + t6902*t8221 - 0.0016*(t6564*t8197 + t6332*t8221) - 0.2707*(t6332*t8197 - 1.*t6564*t8221) + t2413*t2704*t946 + t3556*t4642*t946 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_knee_to_shin_right(const Eigen::Matrix<double,20,1> &var1)
//void p_knee_to_shin_right(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



