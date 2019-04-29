/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:21:12 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jvs_VectorNav_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,14> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t128;
  double t959;
  double t983;
  double t1075;
  double t1464;
  double t366;
  double t658;
  double t729;
  double t1107;
  double t1618;
  double t1619;
  double t1661;
  double t1673;
  double t1732;
  double t1800;
  double t1147;
  double t1510;
  double t1534;
  double t1602;
  double t1847;
  double t2699;
  double t2756;
  double t2804;
  double t2859;
  double t1806;
  double t2840;
  double t2863;
  double t2914;
  double t3003;
  double t3010;
  double t3075;
  double t2083;
  double t2117;
  double t2149;
  double t2407;
  double t2424;
  double t2178;
  double t2184;
  double t2307;
  double t2313;
  double t2472;
  double t2480;
  double t2497;
  double t2578;
  double t2628;
  double t3214;
  double t3399;
  double t3669;
  double t3706;
  double t3716;
  double t3873;
  double t3886;
  double t3950;
  double t4381;
  double t4487;
  double t4500;
  double t4508;
  double t2917;
  double t3185;
  double t4133;
  double t4201;
  double t4204;
  double t4502;
  double t4513;
  double t4600;
  double t4253;
  double t4268;
  double t4304;
  double t4677;
  double t4697;
  double t4724;
  double t3536;
  double t3606;
  double t3608;
  double t4001;
  double t4039;
  double t4040;
  double t4875;
  double t4918;
  double t6159;
  double t6173;
  double t6186;
  double t6097;
  double t6101;
  double t6126;
  double t6232;
  double t6240;
  double t6244;
  double t6324;
  double t4605;
  double t4745;
  double t5638;
  double t5659;
  double t5714;
  double t6279;
  double t6335;
  double t6364;
  double t5563;
  double t5599;
  double t5620;
  double t6415;
  double t6423;
  double t6469;
  double t5013;
  double t5021;
  double t5057;
  double t4938;
  double t4946;
  double t4989;
  double t5145;
  double t5151;
  double t5404;
  double t5412;
  double t5732;
  double t5808;
  double t5996;
  double t6024;
  double t6508;
  double t6521;
  double t6858;
  double t6860;
  double t6862;
  double t6866;
  double t6908;
  double t6921;
  double t7134;
  double t7139;
  double t7147;
  double t7154;
  double t6373;
  double t6494;
  double t7090;
  double t7100;
  double t7102;
  double t7148;
  double t7155;
  double t7168;
  double t7125;
  double t7130;
  double t7131;
  double t7177;
  double t7181;
  double t7185;
  double t6631;
  double t6686;
  double t6720;
  double t6577;
  double t6606;
  double t6609;
  double t6746;
  double t6752;
  double t6783;
  double t6805;
  double t6945;
  double t6965;
  double t7019;
  double t7049;
  t128 = Cos(var1[7]);
  t959 = Sin(var1[7]);
  t983 = -1.*t959;
  t1075 = 0. + t983;
  t1464 = Cos(var1[8]);
  t366 = -1.*t128;
  t658 = 1. + t366;
  t729 = -0.135*t658;
  t1107 = -0.135*t959;
  t1618 = -1.*t1464;
  t1619 = 1. + t1618;
  t1661 = -0.135*t1619;
  t1673 = Sin(var1[8]);
  t1732 = 0.049*t1673;
  t1800 = 0. + t1661 + t1732;
  t1147 = 0.049*t128;
  t1510 = -1.*t128*t1464;
  t1534 = 0. + t1510;
  t1602 = -0.07996*t1534;
  t1847 = -1.*t959*t1800;
  t2699 = Cos(var1[9]);
  t2756 = -1.*t2699;
  t2804 = 1. + t2756;
  t2859 = Sin(var1[9]);
  t1806 = t128*t1800;
  t2840 = -0.049*t2804;
  t2863 = -0.09*t2859;
  t2914 = 0. + t2840 + t2863;
  t3003 = -0.09*t2804;
  t3010 = 0.049*t2859;
  t3075 = 0. + t3003 + t3010;
  t2083 = -1.*t1464*t959;
  t2117 = 0. + t2083;
  t2149 = 0.03155*t2117;
  t2407 = 0. + t1673;
  t2424 = 0.07996*t2407;
  t2178 = 0.049*t1619;
  t2184 = 0.135*t1673;
  t2307 = 0.135*t959;
  t2313 = t959*t1800;
  t2472 = -0.03155*t1534;
  t2480 = -0.049*t1619;
  t2497 = -0.135*t1673;
  t2578 = 0.135*t658;
  t2628 = -1.*t128*t1800;
  t3214 = t128*t1673*t2914;
  t3399 = -1.*t959*t3075;
  t3669 = t128*t2699*t1673;
  t3706 = -1.*t959*t2859;
  t3716 = t3669 + t3706;
  t3873 = -1.*t2699*t959;
  t3886 = -1.*t128*t1673*t2859;
  t3950 = t3873 + t3886;
  t4381 = Cos(var1[10]);
  t4487 = -1.*t4381;
  t4500 = 1. + t4487;
  t4508 = Sin(var1[10]);
  t2917 = -1.*t959*t1673*t2914;
  t3185 = -1.*t128*t3075;
  t4133 = t2699*t959*t1673;
  t4201 = t128*t2859;
  t4204 = t4133 + t4201;
  t4502 = -0.049*t4500;
  t4513 = -0.21*t4508;
  t4600 = 0. + t4502 + t4513;
  t4253 = t128*t2699;
  t4268 = -1.*t959*t1673*t2859;
  t4304 = t4253 + t4268;
  t4677 = -0.21*t4500;
  t4697 = 0.049*t4508;
  t4724 = 0. + t4677 + t4697;
  t3536 = -1.*t1464*t2914;
  t3606 = t959*t1673*t2914;
  t3608 = t128*t3075;
  t4001 = t1464*t2914;
  t4039 = -1.*t128*t1673*t2914;
  t4040 = t959*t3075;
  t4875 = -1.*t4204*t4600;
  t4918 = -1.*t4304*t4724;
  t6159 = t4381*t4204;
  t6173 = t4304*t4508;
  t6186 = t6159 + t6173;
  t6097 = t4381*t4304;
  t6101 = -1.*t4204*t4508;
  t6126 = t6097 + t6101;
  t6232 = Cos(var1[11]);
  t6240 = -1.*t6232;
  t6244 = 1. + t6240;
  t6324 = Sin(var1[11]);
  t4605 = t3716*t4600;
  t4745 = t3950*t4724;
  t5638 = t4381*t3716;
  t5659 = t3950*t4508;
  t5714 = t5638 + t5659;
  t6279 = -0.0016*t6244;
  t6335 = -0.2707*t6324;
  t6364 = 0. + t6279 + t6335;
  t5563 = t4381*t3950;
  t5599 = -1.*t3716*t4508;
  t5620 = t5563 + t5599;
  t6415 = -0.2707*t6244;
  t6423 = 0.0016*t6324;
  t6469 = 0. + t6415 + t6423;
  t5013 = t1464*t2699*t4381;
  t5021 = -1.*t1464*t2859*t4508;
  t5057 = t5013 + t5021;
  t4938 = -1.*t1464*t4381*t2859;
  t4946 = -1.*t1464*t2699*t4508;
  t4989 = t4938 + t4946;
  t5145 = -1.*t1464*t2699*t4600;
  t5151 = t1464*t2859*t4724;
  t5404 = t4204*t4600;
  t5412 = t4304*t4724;
  t5732 = t1464*t2699*t4600;
  t5808 = -1.*t1464*t2859*t4724;
  t5996 = -1.*t3716*t4600;
  t6024 = -1.*t3950*t4724;
  t6508 = t5714*t6364;
  t6521 = t5620*t6469;
  t6858 = t6232*t5714;
  t6860 = t5620*t6324;
  t6862 = t6858 + t6860;
  t6866 = t6232*t5620;
  t6908 = -1.*t5714*t6324;
  t6921 = t6866 + t6908;
  t7134 = Cos(var1[12]);
  t7139 = -1.*t7134;
  t7147 = 1. + t7139;
  t7154 = Sin(var1[12]);
  t6373 = -1.*t6186*t6364;
  t6494 = -1.*t6126*t6469;
  t7090 = t6232*t6186;
  t7100 = t6126*t6324;
  t7102 = t7090 + t7100;
  t7148 = 0.0184*t7147;
  t7155 = -0.7055*t7154;
  t7168 = 0. + t7148 + t7155;
  t7125 = t6232*t6126;
  t7130 = -1.*t6186*t6324;
  t7131 = t7125 + t7130;
  t7177 = -0.7055*t7147;
  t7181 = -0.0184*t7154;
  t7185 = 0. + t7177 + t7181;
  t6631 = t6232*t4989;
  t6686 = -1.*t5057*t6324;
  t6720 = t6631 + t6686;
  t6577 = t6232*t5057;
  t6606 = t4989*t6324;
  t6609 = t6577 + t6606;
  t6746 = -1.*t5057*t6364;
  t6752 = -1.*t4989*t6469;
  t6783 = t6186*t6364;
  t6805 = t6126*t6469;
  t6945 = t5057*t6364;
  t6965 = t4989*t6469;
  t7019 = -1.*t5714*t6364;
  t7049 = -1.*t5620*t6469;

  p_output1(0)=0;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=0;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=0;
  p_output1(9)=0;
  p_output1(10)=0;
  p_output1(11)=0;
  p_output1(12)=0;
  p_output1(13)=0;
  p_output1(14)=0;
  p_output1(15)=0;
  p_output1(16)=0;
  p_output1(17)=0;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0.;
  p_output1(22)=0.07996;
  p_output1(23)=0.135;
  p_output1(24)=-0.135 - 0.07996*t1075 + t128*(0. + t729) - 1.*(0. + t1107)*t959;
  p_output1(25)=0. + t1147 + 0.03155*(0. + t128);
  p_output1(26)=0. - 0.03155*t1075 + 0.049*t959;
  p_output1(27)=0. - 0.09*t1464 + t1602 - 1.*t128*t1464*(0. + t1107 + t1847) - 1.*t1464*(0. + t1806 + t729)*t959;
  p_output1(28)=0. - 0.09*t128*t1673 + t2149 + t1673*(0. + t2307 + t2313) + t2424 - 0.049*t959 - 1.*t1464*(0. + t2178 + t2184)*t959;
  p_output1(29)=0. + t1147 + t2472 - 1.*t128*t1464*(0. + t2480 + t2497) + t1673*(0. + t2578 + t2628) - 0.09*t1673*t959;
  p_output1(30)=0. + t1602 - 0.21*t1464*t2699 - 0.049*t1464*t2859 - 1.*t128*t1464*(0. + t1107 + t1847 + t2917 + t3185) - 1.*t1464*(0. + t1806 + t3214 + t3399 + t729)*t959;
  p_output1(31)=0. + t2149 + t2424 + t1673*(0. + t2307 + t2313 + t3606 + t3608) - 0.21*t3716 + 0.049*t3950 - 1.*t1464*(0. + t2178 + t2184 + t3536)*t959;
  p_output1(32)=0. + t2472 - 1.*t128*t1464*(0. + t2480 + t2497 + t4001) + t1673*(0. + t2578 + t2628 + t4039 + t4040) - 0.21*t4204 + 0.049*t4304;
  p_output1(33)=0. + t1602 - 1.*t128*t1464*(0. + t1107 + t1847 + t2917 + t3185 + t4875 + t4918) + 0.0016*t4989 - 0.2707*t5057 - 1.*t1464*(0. + t1806 + t3214 + t3399 + t4605 + t4745 + t729)*t959;
  p_output1(34)=0. + t2149 + t2424 + t1673*(0. + t2307 + t2313 + t3606 + t3608 + t5404 + t5412) + 0.0016*t5620 - 0.2707*t5714 - 1.*t1464*(0. + t2178 + t2184 + t3536 + t5145 + t5151)*t959;
  p_output1(35)=0. + t2472 - 1.*t128*t1464*(0. + t2480 + t2497 + t4001 + t5732 + t5808) + t1673*(0. + t2578 + t2628 + t4039 + t4040 + t5996 + t6024) + 0.0016*t6126 - 0.2707*t6186;
  p_output1(36)=0. + t1602 - 1.*t128*t1464*(0. + t1107 + t1847 + t2917 + t3185 + t4875 + t4918 + t6373 + t6494) - 0.7055*t6609 - 0.0184*t6720 - 1.*t1464*(0. + t1806 + t3214 + t3399 + t4605 + t4745 + t6508 + t6521 + t729)*t959;
  p_output1(37)=0. + t2149 + t2424 + t1673*(0. + t2307 + t2313 + t3606 + t3608 + t5404 + t5412 + t6783 + t6805) - 0.7055*t6862 - 0.0184*t6921 - 1.*t1464*(0. + t2178 + t2184 + t3536 + t5145 + t5151 + t6746 + t6752)*t959;
  p_output1(38)=0. + t2472 - 1.*t128*t1464*(0. + t2480 + t2497 + t4001 + t5732 + t5808 + t6945 + t6965) + t1673*(0. + t2578 + t2628 + t4039 + t4040 + t5996 + t6024 + t7019 + t7049) - 0.7055*t7102 - 0.0184*t7131;
  p_output1(39)=0. + t1602 + 0.0216*(t6720*t7134 - 1.*t6609*t7154) - 1.1135*(t6609*t7134 + t6720*t7154) - 1.*t128*t1464*(0. + t1107 + t1847 + t2917 + t3185 + t4875 + t4918 + t6373 + t6494 - 1.*t7102*t7168 - 1.*t7131*t7185) - 1.*t1464*(0. + t1806 + t3214 + t3399 + t4605 + t4745 + t6508 + t6521 + t6862*t7168 + t6921*t7185 + t729)*t959;
  p_output1(40)=0. + t2149 + t2424 + 0.0216*(t6921*t7134 - 1.*t6862*t7154) - 1.1135*(t6862*t7134 + t6921*t7154) + t1673*(0. + t2307 + t2313 + t3606 + t3608 + t5404 + t5412 + t6783 + t6805 + t7102*t7168 + t7131*t7185) - 1.*t1464*(0. + t2178 + t2184 + t3536 + t5145 + t5151 + t6746 + t6752 - 1.*t6609*t7168 - 1.*t6720*t7185)*t959;
  p_output1(41)=0. + t2472 + 0.0216*(t7131*t7134 - 1.*t7102*t7154) - 1.1135*(t7102*t7134 + t7131*t7154) - 1.*t128*t1464*(0. + t2480 + t2497 + t4001 + t5732 + t5808 + t6945 + t6965 + t6609*t7168 + t6720*t7185) + t1673*(0. + t2578 + t2628 + t4039 + t4040 + t5996 + t6024 + t7019 + t7049 - 1.*t6862*t7168 - 1.*t6921*t7185);
}


       
Eigen::Matrix<double,3,14> Jvs_VectorNav_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



