/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:14:45 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jws_RightToeBottom_to_LeftToeBottom_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
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
static void output1(double *p_output1,const double *var1)
{
  double t332;
  double t516;
  double t208;
  double t387;
  double t532;
  double t84;
  double t610;
  double t634;
  double t656;
  double t457;
  double t564;
  double t574;
  double t693;
  double t77;
  double t738;
  double t741;
  double t749;
  double t604;
  double t695;
  double t703;
  double t757;
  double t66;
  double t792;
  double t818;
  double t824;
  double t718;
  double t773;
  double t783;
  double t853;
  double t65;
  double t973;
  double t1012;
  double t1036;
  double t791;
  double t860;
  double t910;
  double t1040;
  double t1253;
  double t1266;
  double t1278;
  double t1225;
  double t1232;
  double t1237;
  double t1323;
  double t1329;
  double t1354;
  double t1251;
  double t1279;
  double t1308;
  double t1469;
  double t1496;
  double t1546;
  double t1321;
  double t1380;
  double t1414;
  double t1620;
  double t1632;
  double t1634;
  double t1457;
  double t1576;
  double t1578;
  double t925;
  double t1045;
  double t1084;
  double t1147;
  double t1160;
  double t1197;
  double t1597;
  double t1666;
  double t1667;
  double t1682;
  double t1695;
  double t1704;
  double t1745;
  double t1747;
  double t1780;
  double t1848;
  double t1937;
  double t1960;
  double t1975;
  double t1849;
  double t1858;
  double t1872;
  double t2061;
  double t2069;
  double t2086;
  double t1911;
  double t2016;
  double t2043;
  double t2118;
  double t2162;
  double t2167;
  double t2052;
  double t2088;
  double t2105;
  double t1720;
  double t1724;
  double t1731;
  double t1680;
  double t1705;
  double t1710;
  double t2112;
  double t2172;
  double t2195;
  double t2216;
  double t2253;
  double t2267;
  double t1086;
  double t1201;
  double t1212;
  double t2471;
  double t2478;
  double t2498;
  double t2200;
  double t2366;
  double t2429;
  double t2441;
  double t2447;
  double t2460;
  double t2465;
  double t2526;
  double t2532;
  double t2538;
  double t2585;
  double t2586;
  double t2610;
  double t2614;
  double t2621;
  double t2634;
  double t2642;
  double t2772;
  double t2776;
  double t2867;
  double t2868;
  double t2869;
  double t2835;
  double t2855;
  double t2857;
  double t2791;
  double t3027;
  double t1712;
  double t1818;
  double t1828;
  double t3031;
  double t3037;
  double t2902;
  double t2906;
  double t2908;
  double t2879;
  double t2885;
  double t2889;
  double t3066;
  double t3079;
  double t2670;
  double t2672;
  double t2684;
  double t3087;
  double t3089;
  double t2958;
  double t2970;
  double t3002;
  double t2937;
  double t2720;
  double t2723;
  double t2742;
  double t3052;
  double t3081;
  double t3090;
  double t3095;
  double t3140;
  double t3149;
  double t3159;
  double t3163;
  double t3168;
  double t3180;
  double t3192;
  double t3194;
  double t3261;
  double t3263;
  double t3283;
  double t3369;
  double t3378;
  double t3403;
  double t3408;
  double t3382;
  double t3383;
  double t3381;
  double t3387;
  double t3426;
  double t3428;
  double t3442;
  double t3446;
  double t3448;
  double t3451;
  double t3480;
  double t3484;
  double t3485;
  double t3487;
  t332 = Cos(var1[9]);
  t516 = Sin(var1[7]);
  t208 = Cos(var1[7]);
  t387 = Sin(var1[8]);
  t532 = Sin(var1[9]);
  t84 = Cos(var1[10]);
  t610 = -1.*t332*t516;
  t634 = -1.*t208*t387*t532;
  t656 = t610 + t634;
  t457 = t208*t332*t387;
  t564 = -1.*t516*t532;
  t574 = t457 + t564;
  t693 = Sin(var1[10]);
  t77 = Cos(var1[11]);
  t738 = t84*t656;
  t741 = -1.*t574*t693;
  t749 = t738 + t741;
  t604 = t84*t574;
  t695 = t656*t693;
  t703 = t604 + t695;
  t757 = Sin(var1[11]);
  t66 = Cos(var1[12]);
  t792 = t77*t749;
  t818 = -1.*t703*t757;
  t824 = t792 + t818;
  t718 = t77*t703;
  t773 = t749*t757;
  t783 = t718 + t773;
  t853 = Sin(var1[12]);
  t65 = Cos(var1[13]);
  t973 = t66*t824;
  t1012 = -1.*t783*t853;
  t1036 = t973 + t1012;
  t791 = t66*t783;
  t860 = t824*t853;
  t910 = t791 + t860;
  t1040 = Sin(var1[13]);
  t1253 = t208*t332;
  t1266 = -1.*t516*t387*t532;
  t1278 = t1253 + t1266;
  t1225 = t332*t516*t387;
  t1232 = t208*t532;
  t1237 = t1225 + t1232;
  t1323 = t84*t1278;
  t1329 = -1.*t1237*t693;
  t1354 = t1323 + t1329;
  t1251 = t84*t1237;
  t1279 = t1278*t693;
  t1308 = t1251 + t1279;
  t1469 = t77*t1354;
  t1496 = -1.*t1308*t757;
  t1546 = t1469 + t1496;
  t1321 = t77*t1308;
  t1380 = t1354*t757;
  t1414 = t1321 + t1380;
  t1620 = t66*t1546;
  t1632 = -1.*t1414*t853;
  t1634 = t1620 + t1632;
  t1457 = t66*t1414;
  t1576 = t1546*t853;
  t1578 = t1457 + t1576;
  t925 = t65*t910;
  t1045 = t1036*t1040;
  t1084 = t925 + t1045;
  t1147 = t65*t1036;
  t1160 = -1.*t910*t1040;
  t1197 = t1147 + t1160;
  t1597 = t65*t1578;
  t1666 = t1634*t1040;
  t1667 = t1597 + t1666;
  t1682 = t65*t1634;
  t1695 = -1.*t1578*t1040;
  t1704 = t1682 + t1695;
  t1745 = 0.642788*t1667;
  t1747 = 0.766044*t1704;
  t1780 = t1745 + t1747;
  t1848 = Cos(var1[8]);
  t1937 = -1.*t1848*t84*t532;
  t1960 = -1.*t1848*t332*t693;
  t1975 = t1937 + t1960;
  t1849 = t1848*t332*t84;
  t1858 = -1.*t1848*t532*t693;
  t1872 = t1849 + t1858;
  t2061 = t77*t1975;
  t2069 = -1.*t1872*t757;
  t2086 = t2061 + t2069;
  t1911 = t77*t1872;
  t2016 = t1975*t757;
  t2043 = t1911 + t2016;
  t2118 = t66*t2086;
  t2162 = -1.*t2043*t853;
  t2167 = t2118 + t2162;
  t2052 = t66*t2043;
  t2088 = t2086*t853;
  t2105 = t2052 + t2088;
  t1720 = -0.766044*t1084;
  t1724 = 0.642788*t1197;
  t1731 = t1720 + t1724;
  t1680 = -0.766044*t1667;
  t1705 = 0.642788*t1704;
  t1710 = t1680 + t1705;
  t2112 = t65*t2105;
  t2172 = t2167*t1040;
  t2195 = t2112 + t2172;
  t2216 = t65*t2167;
  t2253 = -1.*t2105*t1040;
  t2267 = t2216 + t2253;
  t1086 = 0.642788*t1084;
  t1201 = 0.766044*t1197;
  t1212 = t1086 + t1201;
  t2471 = 0.642788*t2195;
  t2478 = 0.766044*t2267;
  t2498 = t2471 + t2478;
  t2200 = -0.766044*t2195;
  t2366 = 0.642788*t2267;
  t2429 = t2200 + t2366;
  t2441 = t208*t1848*t2429;
  t2447 = t387*t1731;
  t2460 = t2441 + t2447;
  t2465 = -1.*t1780*t2460;
  t2526 = t208*t1848*t2498;
  t2532 = t387*t1212;
  t2538 = t2526 + t2532;
  t2585 = t1710*t2538;
  t2586 = t2498*t1731;
  t2610 = -1.*t2429*t1212;
  t2614 = t2586 + t2610;
  t2621 = -1.*t1848*t516*t2614;
  t2634 = 0. + t2465 + t2585 + t2621;
  t2642 = 1/t2634;
  t2772 = Cos(var1[0]);
  t2776 = 0. + t2772;
  t2867 = Sin(var1[0]);
  t2868 = -1.*t2867;
  t2869 = 0. + t2868;
  t2835 = -1.*t2498*t1710;
  t2855 = t2429*t1780;
  t2857 = 0. + t2835 + t2855;
  t2791 = 0. + t2586 + t2610;
  t3027 = Cos(var1[1]);
  t1712 = t1212*t1710;
  t1818 = -1.*t1731*t1780;
  t1828 = 0. + t1712 + t1818;
  t3031 = -1.*t2772*t3027;
  t3037 = 0. + t3031;
  t2902 = t1848*t516*t2429;
  t2906 = t387*t1710;
  t2908 = 0. + t2902 + t2906;
  t2879 = -1.*t208*t1848*t2429;
  t2885 = -1.*t387*t1731;
  t2889 = 0. + t2879 + t2885;
  t3066 = -1.*t3027*t2867;
  t3079 = 0. + t3066;
  t2670 = -1.*t1848*t516*t1731;
  t2672 = t208*t1848*t1710;
  t2684 = 0. + t2670 + t2672;
  t3087 = Sin(var1[1]);
  t3089 = 0. + t3087;
  t2958 = -1.*t1848*t516*t2498;
  t2970 = -1.*t387*t1780;
  t3002 = 0. + t2958 + t2970;
  t2937 = 0. + t2526 + t2532;
  t2720 = t1848*t516*t1212;
  t2723 = -1.*t208*t1848*t1780;
  t2742 = 0. + t2720 + t2723;
  t3052 = t3037*t2857*t2642;
  t3081 = t2791*t2642*t3079;
  t3090 = t1828*t2642*t3089;
  t3095 = t3052 + t3081 + t3090;
  t3140 = t3037*t2908*t2642;
  t3149 = t2889*t2642*t3079;
  t3159 = t2684*t2642*t3089;
  t3163 = t3140 + t3149 + t3159;
  t3168 = t3037*t3002*t2642;
  t3180 = t2937*t2642*t3079;
  t3192 = t2742*t2642*t3089;
  t3194 = t3168 + t3180 + t3192;
  t3261 = -1.*t208;
  t3263 = 0. + t3261;
  t3283 = 0. + t516;
  t3369 = t1848*t516;
  t3378 = 0. + t3369;
  t3403 = -1.*t387;
  t3408 = 0. + t3403;
  t3382 = t208*t1848;
  t3383 = 0. + t3382;
  t3381 = t3378*t2791*t2642;
  t3387 = t3383*t2857*t2642;
  t3426 = t3408*t1828*t2642;
  t3428 = t3381 + t3387 + t3426;
  t3442 = t3378*t2889*t2642;
  t3446 = t3408*t2684*t2642;
  t3448 = t3383*t2908*t2642;
  t3451 = t3442 + t3446 + t3448;
  t3480 = t3378*t2937*t2642;
  t3484 = t3408*t2742*t2642;
  t3485 = t3383*t3002*t2642;
  t3487 = t3480 + t3484 + t3485;
  p_output1[0]=0. + t1828*t2642;
  p_output1[1]=0. + t2642*t2684;
  p_output1[2]=0. + t2642*t2742;
  p_output1[3]=0. + t2642*t2776*t2791 + t2642*t2857*t2869;
  p_output1[4]=0. + t2642*t2776*t2889 + t2642*t2869*t2908;
  p_output1[5]=0. + t2642*t2776*t2937 + t2642*t2869*t3002;
  p_output1[6]=t3095;
  p_output1[7]=t3163;
  p_output1[8]=t3194;
  p_output1[9]=t3095;
  p_output1[10]=t3163;
  p_output1[11]=t3194;
  p_output1[12]=t3095;
  p_output1[13]=t3163;
  p_output1[14]=t3194;
  p_output1[15]=t3095;
  p_output1[16]=t3163;
  p_output1[17]=t3194;
  p_output1[18]=t3095;
  p_output1[19]=t3163;
  p_output1[20]=t3194;
  p_output1[21]=0. - 1.*t1828*t2642;
  p_output1[22]=0. - 1.*t2642*t2684;
  p_output1[23]=0. - 1.*t2642*t2742;
  p_output1[24]=0. + t2642*t2791*t3263 + t2642*t2857*t3283;
  p_output1[25]=0. + t2642*t2889*t3263 + t2642*t2908*t3283;
  p_output1[26]=0. + t2642*t2937*t3263 + t2642*t3002*t3283;
  p_output1[27]=t3428;
  p_output1[28]=t3451;
  p_output1[29]=t3487;
  p_output1[30]=t3428;
  p_output1[31]=t3451;
  p_output1[32]=t3487;
  p_output1[33]=t3428;
  p_output1[34]=t3451;
  p_output1[35]=t3487;
  p_output1[36]=t3428;
  p_output1[37]=t3451;
  p_output1[38]=t3487;
  p_output1[39]=t3428;
  p_output1[40]=t3451;
  p_output1[41]=t3487;
}



void Jws_RightToeBottom_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
