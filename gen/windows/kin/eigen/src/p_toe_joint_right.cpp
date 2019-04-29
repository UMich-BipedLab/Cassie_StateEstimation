/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:22:37 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_toe_joint_right.h"

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
  double t172;
  double t1228;
  double t1514;
  double t1242;
  double t1888;
  double t419;
  double t453;
  double t512;
  double t777;
  double t1174;
  double t1340;
  double t1907;
  double t1937;
  double t2015;
  double t2483;
  double t2484;
  double t2535;
  double t289;
  double t2795;
  double t2808;
  double t2837;
  double t2854;
  double t2896;
  double t2955;
  double t2997;
  double t3535;
  double t3559;
  double t3708;
  double t4154;
  double t4155;
  double t4187;
  double t4323;
  double t4406;
  double t4421;
  double t4537;
  double t4607;
  double t4618;
  double t4620;
  double t4702;
  double t4767;
  double t4779;
  double t4824;
  double t4836;
  double t4863;
  double t4870;
  double t4907;
  double t4911;
  double t4938;
  double t5019;
  double t5026;
  double t5035;
  double t5050;
  double t5071;
  double t5072;
  double t5097;
  double t5159;
  double t5186;
  double t5189;
  double t5245;
  double t5247;
  double t5260;
  double t5274;
  double t5306;
  double t5731;
  double t5741;
  double t5829;
  double t5837;
  double t5849;
  double t5913;
  double t5923;
  double t5938;
  double t567;
  double t810;
  double t1109;
  double t1216;
  double t1217;
  double t2183;
  double t2240;
  double t2379;
  double t2482;
  double t2672;
  double t2713;
  double t2793;
  double t6006;
  double t6024;
  double t6064;
  double t6092;
  double t6115;
  double t6126;
  double t2970;
  double t3008;
  double t3247;
  double t6149;
  double t6150;
  double t6158;
  double t4130;
  double t4134;
  double t4138;
  double t4525;
  double t4560;
  double t4581;
  double t6182;
  double t6202;
  double t6208;
  double t6307;
  double t6320;
  double t6321;
  double t4657;
  double t4682;
  double t4685;
  double t4865;
  double t4891;
  double t4894;
  double t6394;
  double t6400;
  double t6425;
  double t6461;
  double t6480;
  double t6531;
  double t4966;
  double t4980;
  double t5006;
  double t5078;
  double t5115;
  double t5129;
  double t6544;
  double t6555;
  double t6557;
  double t6568;
  double t6571;
  double t6577;
  double t5203;
  double t5218;
  double t5222;
  double t5740;
  double t5792;
  double t5821;
  double t6616;
  double t6647;
  double t6747;
  double t6774;
  double t6786;
  double t6816;
  double t5869;
  double t5877;
  double t5898;
  double t6847;
  double t6852;
  double t6865;
  double t6881;
  double t6886;
  double t6900;
  double t7046;
  double t7084;
  double t7102;
  double t7154;
  double t7189;
  double t7202;
  double t7282;
  double t7283;
  double t7287;
  double t7312;
  double t7352;
  double t7358;
  double t7368;
  double t7389;
  double t7398;
  double t7437;
  double t7443;
  double t7482;
  double t7511;
  double t7557;
  double t7604;
  double t7634;
  double t7638;
  double t7651;
  double t7662;
  double t7668;
  double t7678;
  double t7687;
  double t7711;
  double t7723;
  double t7773;
  double t7774;
  double t7783;
  t172 = Cos(var1[3]);
  t1228 = Cos(var1[5]);
  t1514 = Sin(var1[3]);
  t1242 = Sin(var1[4]);
  t1888 = Sin(var1[5]);
  t419 = Cos(var1[14]);
  t453 = -1.*t419;
  t512 = 1. + t453;
  t777 = Sin(var1[14]);
  t1174 = Sin(var1[13]);
  t1340 = t172*t1228*t1242;
  t1907 = t1514*t1888;
  t1937 = t1340 + t1907;
  t2015 = Cos(var1[13]);
  t2483 = -1.*t1228*t1514;
  t2484 = t172*t1242*t1888;
  t2535 = t2483 + t2484;
  t289 = Cos(var1[4]);
  t2795 = t1174*t1937;
  t2808 = t2015*t2535;
  t2837 = t2795 + t2808;
  t2854 = Cos(var1[15]);
  t2896 = -1.*t2854;
  t2955 = 1. + t2896;
  t2997 = Sin(var1[15]);
  t3535 = t2015*t1937;
  t3559 = -1.*t1174*t2535;
  t3708 = t3535 + t3559;
  t4154 = t419*t172*t289;
  t4155 = t777*t2837;
  t4187 = t4154 + t4155;
  t4323 = Cos(var1[16]);
  t4406 = -1.*t4323;
  t4421 = 1. + t4406;
  t4537 = Sin(var1[16]);
  t4607 = t2997*t3708;
  t4618 = t2854*t4187;
  t4620 = t4607 + t4618;
  t4702 = t2854*t3708;
  t4767 = -1.*t2997*t4187;
  t4779 = t4702 + t4767;
  t4824 = Cos(var1[17]);
  t4836 = -1.*t4824;
  t4863 = 1. + t4836;
  t4870 = Sin(var1[17]);
  t4907 = -1.*t4537*t4620;
  t4911 = t4323*t4779;
  t4938 = t4907 + t4911;
  t5019 = t4323*t4620;
  t5026 = t4537*t4779;
  t5035 = t5019 + t5026;
  t5050 = Cos(var1[18]);
  t5071 = -1.*t5050;
  t5072 = 1. + t5071;
  t5097 = Sin(var1[18]);
  t5159 = t4870*t4938;
  t5186 = t4824*t5035;
  t5189 = t5159 + t5186;
  t5245 = t4824*t4938;
  t5247 = -1.*t4870*t5035;
  t5260 = t5245 + t5247;
  t5274 = Cos(var1[19]);
  t5306 = -1.*t5274;
  t5731 = 1. + t5306;
  t5741 = Sin(var1[19]);
  t5829 = -1.*t5097*t5189;
  t5837 = t5050*t5260;
  t5849 = t5829 + t5837;
  t5913 = t5050*t5189;
  t5923 = t5097*t5260;
  t5938 = t5913 + t5923;
  t567 = -0.049*t512;
  t810 = -0.135*t777;
  t1109 = 0. + t567 + t810;
  t1216 = 0.135*t1174;
  t1217 = 0. + t1216;
  t2183 = -1.*t2015;
  t2240 = 1. + t2183;
  t2379 = -0.135*t2240;
  t2482 = 0. + t2379;
  t2672 = -0.135*t512;
  t2713 = 0.049*t777;
  t2793 = 0. + t2672 + t2713;
  t6006 = t1228*t1514*t1242;
  t6024 = -1.*t172*t1888;
  t6064 = t6006 + t6024;
  t6092 = t172*t1228;
  t6115 = t1514*t1242*t1888;
  t6126 = t6092 + t6115;
  t2970 = -0.09*t2955;
  t3008 = 0.049*t2997;
  t3247 = 0. + t2970 + t3008;
  t6149 = t1174*t6064;
  t6150 = t2015*t6126;
  t6158 = t6149 + t6150;
  t4130 = -0.049*t2955;
  t4134 = -0.09*t2997;
  t4138 = 0. + t4130 + t4134;
  t4525 = -0.049*t4421;
  t4560 = -0.21*t4537;
  t4581 = 0. + t4525 + t4560;
  t6182 = t2015*t6064;
  t6202 = -1.*t1174*t6126;
  t6208 = t6182 + t6202;
  t6307 = t419*t289*t1514;
  t6320 = t777*t6158;
  t6321 = t6307 + t6320;
  t4657 = -0.21*t4421;
  t4682 = 0.049*t4537;
  t4685 = 0. + t4657 + t4682;
  t4865 = -0.2707*t4863;
  t4891 = 0.0016*t4870;
  t4894 = 0. + t4865 + t4891;
  t6394 = t2997*t6208;
  t6400 = t2854*t6321;
  t6425 = t6394 + t6400;
  t6461 = t2854*t6208;
  t6480 = -1.*t2997*t6321;
  t6531 = t6461 + t6480;
  t4966 = -0.0016*t4863;
  t4980 = -0.2707*t4870;
  t5006 = 0. + t4966 + t4980;
  t5078 = 0.0184*t5072;
  t5115 = -0.7055*t5097;
  t5129 = 0. + t5078 + t5115;
  t6544 = -1.*t4537*t6425;
  t6555 = t4323*t6531;
  t6557 = t6544 + t6555;
  t6568 = t4323*t6425;
  t6571 = t4537*t6531;
  t6577 = t6568 + t6571;
  t5203 = -0.7055*t5072;
  t5218 = -0.0184*t5097;
  t5222 = 0. + t5203 + t5218;
  t5740 = -1.1135*t5731;
  t5792 = 0.0216*t5741;
  t5821 = 0. + t5740 + t5792;
  t6616 = t4870*t6557;
  t6647 = t4824*t6577;
  t6747 = t6616 + t6647;
  t6774 = t4824*t6557;
  t6786 = -1.*t4870*t6577;
  t6816 = t6774 + t6786;
  t5869 = -0.0216*t5731;
  t5877 = -1.1135*t5741;
  t5898 = 0. + t5869 + t5877;
  t6847 = -1.*t5097*t6747;
  t6852 = t5050*t6816;
  t6865 = t6847 + t6852;
  t6881 = t5050*t6747;
  t6886 = t5097*t6816;
  t6900 = t6881 + t6886;
  t7046 = t289*t1228*t1174;
  t7084 = t2015*t289*t1888;
  t7102 = t7046 + t7084;
  t7154 = t2015*t289*t1228;
  t7189 = -1.*t289*t1174*t1888;
  t7202 = t7154 + t7189;
  t7282 = -1.*t419*t1242;
  t7283 = t777*t7102;
  t7287 = t7282 + t7283;
  t7312 = t2997*t7202;
  t7352 = t2854*t7287;
  t7358 = t7312 + t7352;
  t7368 = t2854*t7202;
  t7389 = -1.*t2997*t7287;
  t7398 = t7368 + t7389;
  t7437 = -1.*t4537*t7358;
  t7443 = t4323*t7398;
  t7482 = t7437 + t7443;
  t7511 = t4323*t7358;
  t7557 = t4537*t7398;
  t7604 = t7511 + t7557;
  t7634 = t4870*t7482;
  t7638 = t4824*t7604;
  t7651 = t7634 + t7638;
  t7662 = t4824*t7482;
  t7668 = -1.*t4870*t7604;
  t7678 = t7662 + t7668;
  t7687 = -1.*t5097*t7651;
  t7711 = t5050*t7678;
  t7723 = t7687 + t7711;
  t7773 = t5050*t7651;
  t7774 = t5097*t7678;
  t7783 = t7773 + t7774;

  p_output1(0)=0. + t1217*t1937 + t2482*t2535 + t2793*t2837 + t1109*t172*t289 + t3247*t3708 + t4138*t4187 + t4581*t4620 + t4685*t4779 + t4894*t4938 + t5006*t5035 + t5129*t5189 + t5222*t5260 + t5821*t5849 + t5898*t5938 - 0.0216*(t5741*t5849 + t5274*t5938) - 1.1135*(t5274*t5849 - 1.*t5741*t5938) - 0.1305*(t2837*t419 - 1.*t172*t289*t777) + var1(0);
  p_output1(1)=0. + t1109*t1514*t289 + t1217*t6064 + t2482*t6126 + t2793*t6158 + t3247*t6208 + t4138*t6321 + t4581*t6425 + t4685*t6531 + t4894*t6557 + t5006*t6577 + t5129*t6747 + t5222*t6816 + t5821*t6865 + t5898*t6900 - 0.0216*(t5741*t6865 + t5274*t6900) - 1.1135*(t5274*t6865 - 1.*t5741*t6900) - 0.1305*(t419*t6158 - 1.*t1514*t289*t777) + var1(1);
  p_output1(2)=0. - 1.*t1109*t1242 + t1217*t1228*t289 + t1888*t2482*t289 + t2793*t7102 + t3247*t7202 + t4138*t7287 + t4581*t7358 + t4685*t7398 + t4894*t7482 + t5006*t7604 + t5129*t7651 + t5222*t7678 + t5821*t7723 - 0.1305*(t419*t7102 + t1242*t777) + t5898*t7783 - 0.0216*(t5741*t7723 + t5274*t7783) - 1.1135*(t5274*t7723 - 1.*t5741*t7783) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_toe_joint_right(const Eigen::Matrix<double,20,1> &var1)
//void p_toe_joint_right(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



