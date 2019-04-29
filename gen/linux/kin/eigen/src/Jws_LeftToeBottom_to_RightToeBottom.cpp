/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:23:57 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jws_LeftToeBottom_to_RightToeBottom.h"

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
  double t585;
  double t605;
  double t565;
  double t594;
  double t620;
  double t691;
  double t602;
  double t668;
  double t671;
  double t515;
  double t710;
  double t711;
  double t736;
  double t798;
  double t674;
  double t740;
  double t747;
  double t501;
  double t813;
  double t825;
  double t835;
  double t867;
  double t759;
  double t849;
  double t850;
  double t488;
  double t874;
  double t879;
  double t885;
  double t948;
  double t864;
  double t891;
  double t920;
  double t218;
  double t951;
  double t963;
  double t975;
  double t1071;
  double t1088;
  double t1108;
  double t1121;
  double t1122;
  double t1158;
  double t1114;
  double t1162;
  double t1180;
  double t1189;
  double t1198;
  double t1214;
  double t1181;
  double t1255;
  double t1292;
  double t1415;
  double t1419;
  double t1432;
  double t1339;
  double t1511;
  double t1518;
  double t1547;
  double t1561;
  double t1571;
  double t933;
  double t1001;
  double t1038;
  double t1052;
  double t1053;
  double t1060;
  double t1543;
  double t1572;
  double t1574;
  double t1585;
  double t1607;
  double t1609;
  double t1767;
  double t1786;
  double t1794;
  double t1861;
  double t1862;
  double t1866;
  double t1903;
  double t1914;
  double t1920;
  double t1923;
  double t1912;
  double t1933;
  double t1938;
  double t1974;
  double t1977;
  double t1982;
  double t1959;
  double t1987;
  double t2012;
  double t2027;
  double t2048;
  double t2091;
  double t1708;
  double t1718;
  double t1733;
  double t1580;
  double t1639;
  double t1641;
  double t2024;
  double t2099;
  double t2106;
  double t2121;
  double t2204;
  double t2205;
  double t1043;
  double t1066;
  double t1067;
  double t2312;
  double t2335;
  double t2357;
  double t2107;
  double t2240;
  double t2243;
  double t2247;
  double t2271;
  double t2273;
  double t2290;
  double t2376;
  double t2417;
  double t2420;
  double t2421;
  double t2423;
  double t2435;
  double t2471;
  double t2473;
  double t2486;
  double t2505;
  double t2644;
  double t2649;
  double t2708;
  double t2654;
  double t2709;
  double t2712;
  double t2714;
  double t1658;
  double t1813;
  double t1817;
  double t2878;
  double t2890;
  double t2746;
  double t2762;
  double t2766;
  double t2916;
  double t2956;
  double t2562;
  double t2572;
  double t2575;
  double t2894;
  double t2897;
  double t2780;
  double t2808;
  double t2812;
  double t2848;
  double t2601;
  double t2604;
  double t2615;
  double t2855;
  double t2860;
  double t2868;
  double t2891;
  double t2907;
  double t2960;
  double t2962;
  double t2963;
  double t2981;
  double t2985;
  double t2988;
  double t2989;
  double t2992;
  double t3009;
  double t3010;
  double t3063;
  double t3069;
  double t3078;
  double t3080;
  double t3102;
  double t3184;
  double t3200;
  double t3219;
  double t3252;
  double t3259;
  double t3233;
  double t3236;
  double t3232;
  double t3245;
  double t3288;
  double t3292;
  double t3319;
  double t3324;
  double t3330;
  double t3337;
  double t3339;
  double t3346;
  double t3347;
  double t3356;
  t585 = Cos(var1[2]);
  t605 = Sin(var1[0]);
  t565 = Cos(var1[0]);
  t594 = Sin(var1[1]);
  t620 = Sin(var1[2]);
  t691 = Cos(var1[3]);
  t602 = t565*t585*t594;
  t668 = -1.*t605*t620;
  t671 = t602 + t668;
  t515 = Sin(var1[3]);
  t710 = -1.*t585*t605;
  t711 = -1.*t565*t594*t620;
  t736 = t710 + t711;
  t798 = Cos(var1[4]);
  t674 = -1.*t515*t671;
  t740 = t691*t736;
  t747 = t674 + t740;
  t501 = Sin(var1[4]);
  t813 = t691*t671;
  t825 = t515*t736;
  t835 = t813 + t825;
  t867 = Cos(var1[5]);
  t759 = t501*t747;
  t849 = t798*t835;
  t850 = t759 + t849;
  t488 = Sin(var1[5]);
  t874 = t798*t747;
  t879 = -1.*t501*t835;
  t885 = t874 + t879;
  t948 = Cos(var1[6]);
  t864 = -1.*t488*t850;
  t891 = t867*t885;
  t920 = t864 + t891;
  t218 = Sin(var1[6]);
  t951 = t867*t850;
  t963 = t488*t885;
  t975 = t951 + t963;
  t1071 = t585*t605*t594;
  t1088 = t565*t620;
  t1108 = t1071 + t1088;
  t1121 = t565*t585;
  t1122 = -1.*t605*t594*t620;
  t1158 = t1121 + t1122;
  t1114 = -1.*t515*t1108;
  t1162 = t691*t1158;
  t1180 = t1114 + t1162;
  t1189 = t691*t1108;
  t1198 = t515*t1158;
  t1214 = t1189 + t1198;
  t1181 = t501*t1180;
  t1255 = t798*t1214;
  t1292 = t1181 + t1255;
  t1415 = t798*t1180;
  t1419 = -1.*t501*t1214;
  t1432 = t1415 + t1419;
  t1339 = -1.*t488*t1292;
  t1511 = t867*t1432;
  t1518 = t1339 + t1511;
  t1547 = t867*t1292;
  t1561 = t488*t1432;
  t1571 = t1547 + t1561;
  t933 = t218*t920;
  t1001 = t948*t975;
  t1038 = t933 + t1001;
  t1052 = t948*t920;
  t1053 = -1.*t218*t975;
  t1060 = t1052 + t1053;
  t1543 = t218*t1518;
  t1572 = t948*t1571;
  t1574 = t1543 + t1572;
  t1585 = t948*t1518;
  t1607 = -1.*t218*t1571;
  t1609 = t1585 + t1607;
  t1767 = 0.642788*t1574;
  t1786 = 0.766044*t1609;
  t1794 = t1767 + t1786;
  t1861 = Cos(var1[1]);
  t1862 = -1.*t1861*t585*t515;
  t1866 = -1.*t691*t1861*t620;
  t1903 = t1862 + t1866;
  t1914 = t691*t1861*t585;
  t1920 = -1.*t1861*t515*t620;
  t1923 = t1914 + t1920;
  t1912 = t501*t1903;
  t1933 = t798*t1923;
  t1938 = t1912 + t1933;
  t1974 = t798*t1903;
  t1977 = -1.*t501*t1923;
  t1982 = t1974 + t1977;
  t1959 = -1.*t488*t1938;
  t1987 = t867*t1982;
  t2012 = t1959 + t1987;
  t2027 = t867*t1938;
  t2048 = t488*t1982;
  t2091 = t2027 + t2048;
  t1708 = -0.766044*t1038;
  t1718 = 0.642788*t1060;
  t1733 = t1708 + t1718;
  t1580 = -0.766044*t1574;
  t1639 = 0.642788*t1609;
  t1641 = t1580 + t1639;
  t2024 = t218*t2012;
  t2099 = t948*t2091;
  t2106 = t2024 + t2099;
  t2121 = t948*t2012;
  t2204 = -1.*t218*t2091;
  t2205 = t2121 + t2204;
  t1043 = 0.642788*t1038;
  t1066 = 0.766044*t1060;
  t1067 = t1043 + t1066;
  t2312 = 0.642788*t2106;
  t2335 = 0.766044*t2205;
  t2357 = t2312 + t2335;
  t2107 = -0.766044*t2106;
  t2240 = 0.642788*t2205;
  t2243 = t2107 + t2240;
  t2247 = t565*t1861*t2243;
  t2271 = t594*t1733;
  t2273 = t2247 + t2271;
  t2290 = -1.*t1794*t2273;
  t2376 = t565*t1861*t2357;
  t2417 = t594*t1067;
  t2420 = t2376 + t2417;
  t2421 = t1641*t2420;
  t2423 = t2357*t1733;
  t2435 = -1.*t2243*t1067;
  t2471 = t2423 + t2435;
  t2473 = -1.*t1861*t605*t2471;
  t2486 = 0. + t2290 + t2421 + t2473;
  t2505 = 1/t2486;
  t2644 = -1.*t565;
  t2649 = 0. + t2644;
  t2708 = 0. + t605;
  t2654 = 0. + t2423 + t2435;
  t2709 = -1.*t2357*t1641;
  t2712 = t2243*t1794;
  t2714 = 0. + t2709 + t2712;
  t1658 = t1067*t1641;
  t1813 = -1.*t1733*t1794;
  t1817 = 0. + t1658 + t1813;
  t2878 = t1861*t605;
  t2890 = 0. + t2878;
  t2746 = -1.*t565*t1861*t2243;
  t2762 = -1.*t594*t1733;
  t2766 = 0. + t2746 + t2762;
  t2916 = -1.*t594;
  t2956 = 0. + t2916;
  t2562 = -1.*t1861*t605*t1733;
  t2572 = t565*t1861*t1641;
  t2575 = 0. + t2562 + t2572;
  t2894 = t565*t1861;
  t2897 = 0. + t2894;
  t2780 = t1861*t605*t2243;
  t2808 = t594*t1641;
  t2812 = 0. + t2780 + t2808;
  t2848 = 0. + t2376 + t2417;
  t2601 = t1861*t605*t1067;
  t2604 = -1.*t565*t1861*t1794;
  t2615 = 0. + t2601 + t2604;
  t2855 = -1.*t1861*t605*t2357;
  t2860 = -1.*t594*t1794;
  t2868 = 0. + t2855 + t2860;
  t2891 = t2890*t2654*t2505;
  t2907 = t2897*t2714*t2505;
  t2960 = t2956*t1817*t2505;
  t2962 = t2891 + t2907 + t2960;
  t2963 = t2890*t2766*t2505;
  t2981 = t2956*t2575*t2505;
  t2985 = t2897*t2812*t2505;
  t2988 = t2963 + t2981 + t2985;
  t2989 = t2890*t2848*t2505;
  t2992 = t2956*t2615*t2505;
  t3009 = t2897*t2868*t2505;
  t3010 = t2989 + t2992 + t3009;
  t3063 = Cos(var1[7]);
  t3069 = 0. + t3063;
  t3078 = Sin(var1[7]);
  t3080 = -1.*t3078;
  t3102 = 0. + t3080;
  t3184 = Cos(var1[8]);
  t3200 = -1.*t3184*t3078;
  t3219 = 0. + t3200;
  t3252 = Sin(var1[8]);
  t3259 = 0. + t3252;
  t3233 = -1.*t3063*t3184;
  t3236 = 0. + t3233;
  t3232 = t3219*t2654*t2505;
  t3245 = t3236*t2714*t2505;
  t3288 = t3259*t1817*t2505;
  t3292 = t3232 + t3245 + t3288;
  t3319 = t3219*t2766*t2505;
  t3324 = t3259*t2575*t2505;
  t3330 = t3236*t2812*t2505;
  t3337 = t3319 + t3324 + t3330;
  t3339 = t3219*t2848*t2505;
  t3346 = t3259*t2615*t2505;
  t3347 = t3236*t2868*t2505;
  t3356 = t3339 + t3346 + t3347;

  p_output1(0)=0. - 1.*t1817*t2505;
  p_output1(1)=0. - 1.*t2505*t2575;
  p_output1(2)=0. - 1.*t2505*t2615;
  p_output1(3)=0. + t2505*t2649*t2654 + t2505*t2708*t2714;
  p_output1(4)=0. + t2505*t2649*t2766 + t2505*t2708*t2812;
  p_output1(5)=0. + t2505*t2649*t2848 + t2505*t2708*t2868;
  p_output1(6)=t2962;
  p_output1(7)=t2988;
  p_output1(8)=t3010;
  p_output1(9)=t2962;
  p_output1(10)=t2988;
  p_output1(11)=t3010;
  p_output1(12)=t2962;
  p_output1(13)=t2988;
  p_output1(14)=t3010;
  p_output1(15)=t2962;
  p_output1(16)=t2988;
  p_output1(17)=t3010;
  p_output1(18)=t2962;
  p_output1(19)=t2988;
  p_output1(20)=t3010;
  p_output1(21)=0. + t1817*t2505;
  p_output1(22)=0. + t2505*t2575;
  p_output1(23)=0. + t2505*t2615;
  p_output1(24)=0. + t2505*t2654*t3069 + t2505*t2714*t3102;
  p_output1(25)=0. + t2505*t2766*t3069 + t2505*t2812*t3102;
  p_output1(26)=0. + t2505*t2848*t3069 + t2505*t2868*t3102;
  p_output1(27)=t3292;
  p_output1(28)=t3337;
  p_output1(29)=t3356;
  p_output1(30)=t3292;
  p_output1(31)=t3337;
  p_output1(32)=t3356;
  p_output1(33)=t3292;
  p_output1(34)=t3337;
  p_output1(35)=t3356;
  p_output1(36)=t3292;
  p_output1(37)=t3337;
  p_output1(38)=t3356;
  p_output1(39)=t3292;
  p_output1(40)=t3337;
  p_output1(41)=t3356;
}


       
Eigen::Matrix<double,3,14> Jws_LeftToeBottom_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,14>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



