/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:08:18 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_RightToeBottom_src.h"

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
  double t182;
  double t364;
  double t402;
  double t388;
  double t404;
  double t274;
  double t332;
  double t351;
  double t357;
  double t650;
  double t397;
  double t516;
  double t523;
  double t679;
  double t682;
  double t685;
  double t550;
  double t783;
  double t862;
  double t1575;
  double t1454;
  double t1480;
  double t1498;
  double t1448;
  double t1589;
  double t1591;
  double t1613;
  double t1661;
  double t1532;
  double t1622;
  double t1632;
  double t1445;
  double t1674;
  double t1682;
  double t1684;
  double t1696;
  double t1635;
  double t1685;
  double t1688;
  double t1442;
  double t1704;
  double t1709;
  double t1710;
  double t1727;
  double t1692;
  double t1719;
  double t1723;
  double t1433;
  double t1735;
  double t1740;
  double t1748;
  double t1768;
  double t1725;
  double t1757;
  double t1761;
  double t1423;
  double t1769;
  double t1776;
  double t1778;
  double t892;
  double t907;
  double t914;
  double t1033;
  double t1047;
  double t1062;
  double t1023;
  double t1064;
  double t1082;
  double t1817;
  double t1818;
  double t1822;
  double t1831;
  double t1837;
  double t1839;
  double t1823;
  double t1842;
  double t1860;
  double t1876;
  double t1877;
  double t1883;
  double t1871;
  double t1886;
  double t1887;
  double t1892;
  double t1893;
  double t1894;
  double t1890;
  double t1895;
  double t1901;
  double t1904;
  double t1907;
  double t1913;
  double t1902;
  double t1915;
  double t1917;
  double t1922;
  double t1925;
  double t1926;
  double t1280;
  double t1319;
  double t1334;
  double t1956;
  double t1957;
  double t1959;
  double t1964;
  double t1966;
  double t1968;
  double t1960;
  double t1969;
  double t1984;
  double t1993;
  double t1997;
  double t2002;
  double t1985;
  double t2008;
  double t2019;
  double t2090;
  double t2186;
  double t2189;
  double t2033;
  double t2191;
  double t2193;
  double t2195;
  double t2225;
  double t2306;
  double t2194;
  double t2318;
  double t2354;
  double t2404;
  double t2409;
  double t2446;
  double t1765;
  double t1790;
  double t1795;
  double t1799;
  double t1800;
  double t1807;
  double t1918;
  double t1936;
  double t1940;
  double t1944;
  double t1946;
  double t1948;
  double t2394;
  double t2465;
  double t2467;
  double t2480;
  double t2491;
  double t2517;
  double t2818;
  double t2838;
  double t2967;
  double t2972;
  double t3071;
  double t3076;
  double t3191;
  double t3200;
  double t3288;
  double t3291;
  double t3372;
  double t3374;
  double t2863;
  double t2864;
  double t2873;
  double t2912;
  double t2915;
  double t2935;
  double t2939;
  double t2940;
  double t2944;
  double t2947;
  double t2948;
  double t2949;
  double t2973;
  double t3001;
  double t3004;
  double t3039;
  double t3051;
  double t3053;
  double t3110;
  double t3137;
  double t3141;
  double t3162;
  double t3165;
  double t3170;
  double t3203;
  double t3206;
  double t3208;
  double t3252;
  double t3253;
  double t3270;
  double t3296;
  double t3319;
  double t3322;
  double t3339;
  double t3358;
  double t3360;
  double t3375;
  double t3378;
  double t3384;
  double t3421;
  double t3423;
  double t3429;
  t182 = Cos(var1[3]);
  t364 = Cos(var1[5]);
  t402 = Sin(var1[3]);
  t388 = Sin(var1[4]);
  t404 = Sin(var1[5]);
  t274 = Cos(var1[4]);
  t332 = Sin(var1[14]);
  t351 = Cos(var1[14]);
  t357 = Sin(var1[13]);
  t650 = Cos(var1[13]);
  t397 = t182*t364*t388;
  t516 = t402*t404;
  t523 = t397 + t516;
  t679 = -1.*t364*t402;
  t682 = t182*t388*t404;
  t685 = t679 + t682;
  t550 = t357*t523;
  t783 = t650*t685;
  t862 = t550 + t783;
  t1575 = Cos(var1[15]);
  t1454 = t650*t523;
  t1480 = -1.*t357*t685;
  t1498 = t1454 + t1480;
  t1448 = Sin(var1[15]);
  t1589 = t351*t182*t274;
  t1591 = t332*t862;
  t1613 = t1589 + t1591;
  t1661 = Cos(var1[16]);
  t1532 = t1448*t1498;
  t1622 = t1575*t1613;
  t1632 = t1532 + t1622;
  t1445 = Sin(var1[16]);
  t1674 = t1575*t1498;
  t1682 = -1.*t1448*t1613;
  t1684 = t1674 + t1682;
  t1696 = Cos(var1[17]);
  t1635 = -1.*t1445*t1632;
  t1685 = t1661*t1684;
  t1688 = t1635 + t1685;
  t1442 = Sin(var1[17]);
  t1704 = t1661*t1632;
  t1709 = t1445*t1684;
  t1710 = t1704 + t1709;
  t1727 = Cos(var1[18]);
  t1692 = t1442*t1688;
  t1719 = t1696*t1710;
  t1723 = t1692 + t1719;
  t1433 = Sin(var1[18]);
  t1735 = t1696*t1688;
  t1740 = -1.*t1442*t1710;
  t1748 = t1735 + t1740;
  t1768 = Cos(var1[19]);
  t1725 = -1.*t1433*t1723;
  t1757 = t1727*t1748;
  t1761 = t1725 + t1757;
  t1423 = Sin(var1[19]);
  t1769 = t1727*t1723;
  t1776 = t1433*t1748;
  t1778 = t1769 + t1776;
  t892 = t364*t402*t388;
  t907 = -1.*t182*t404;
  t914 = t892 + t907;
  t1033 = t182*t364;
  t1047 = t402*t388*t404;
  t1062 = t1033 + t1047;
  t1023 = t357*t914;
  t1064 = t650*t1062;
  t1082 = t1023 + t1064;
  t1817 = t650*t914;
  t1818 = -1.*t357*t1062;
  t1822 = t1817 + t1818;
  t1831 = t351*t274*t402;
  t1837 = t332*t1082;
  t1839 = t1831 + t1837;
  t1823 = t1448*t1822;
  t1842 = t1575*t1839;
  t1860 = t1823 + t1842;
  t1876 = t1575*t1822;
  t1877 = -1.*t1448*t1839;
  t1883 = t1876 + t1877;
  t1871 = -1.*t1445*t1860;
  t1886 = t1661*t1883;
  t1887 = t1871 + t1886;
  t1892 = t1661*t1860;
  t1893 = t1445*t1883;
  t1894 = t1892 + t1893;
  t1890 = t1442*t1887;
  t1895 = t1696*t1894;
  t1901 = t1890 + t1895;
  t1904 = t1696*t1887;
  t1907 = -1.*t1442*t1894;
  t1913 = t1904 + t1907;
  t1902 = -1.*t1433*t1901;
  t1915 = t1727*t1913;
  t1917 = t1902 + t1915;
  t1922 = t1727*t1901;
  t1925 = t1433*t1913;
  t1926 = t1922 + t1925;
  t1280 = t274*t364*t357;
  t1319 = t650*t274*t404;
  t1334 = t1280 + t1319;
  t1956 = t650*t274*t364;
  t1957 = -1.*t274*t357*t404;
  t1959 = t1956 + t1957;
  t1964 = -1.*t351*t388;
  t1966 = t332*t1334;
  t1968 = t1964 + t1966;
  t1960 = t1448*t1959;
  t1969 = t1575*t1968;
  t1984 = t1960 + t1969;
  t1993 = t1575*t1959;
  t1997 = -1.*t1448*t1968;
  t2002 = t1993 + t1997;
  t1985 = -1.*t1445*t1984;
  t2008 = t1661*t2002;
  t2019 = t1985 + t2008;
  t2090 = t1661*t1984;
  t2186 = t1445*t2002;
  t2189 = t2090 + t2186;
  t2033 = t1442*t2019;
  t2191 = t1696*t2189;
  t2193 = t2033 + t2191;
  t2195 = t1696*t2019;
  t2225 = -1.*t1442*t2189;
  t2306 = t2195 + t2225;
  t2194 = -1.*t1433*t2193;
  t2318 = t1727*t2306;
  t2354 = t2194 + t2318;
  t2404 = t1727*t2193;
  t2409 = t1433*t2306;
  t2446 = t2404 + t2409;
  t1765 = t1423*t1761;
  t1790 = t1768*t1778;
  t1795 = t1765 + t1790;
  t1799 = t1768*t1761;
  t1800 = -1.*t1423*t1778;
  t1807 = t1799 + t1800;
  t1918 = t1423*t1917;
  t1936 = t1768*t1926;
  t1940 = t1918 + t1936;
  t1944 = t1768*t1917;
  t1946 = -1.*t1423*t1926;
  t1948 = t1944 + t1946;
  t2394 = t1423*t2354;
  t2465 = t1768*t2446;
  t2467 = t2394 + t2465;
  t2480 = t1768*t2354;
  t2491 = -1.*t1423*t2446;
  t2517 = t2480 + t2491;
  t2818 = -1.*t351;
  t2838 = 1. + t2818;
  t2967 = -1.*t1575;
  t2972 = 1. + t2967;
  t3071 = -1.*t1661;
  t3076 = 1. + t3071;
  t3191 = -1.*t1696;
  t3200 = 1. + t3191;
  t3288 = -1.*t1727;
  t3291 = 1. + t3288;
  t3372 = -1.*t1768;
  t3374 = 1. + t3372;
  t2863 = -0.049*t2838;
  t2864 = -0.135*t332;
  t2873 = 0. + t2863 + t2864;
  t2912 = 0.135*t357;
  t2915 = 0. + t2912;
  t2935 = -1.*t650;
  t2939 = 1. + t2935;
  t2940 = -0.135*t2939;
  t2944 = 0. + t2940;
  t2947 = -0.135*t2838;
  t2948 = 0.049*t332;
  t2949 = 0. + t2947 + t2948;
  t2973 = -0.09*t2972;
  t3001 = 0.049*t1448;
  t3004 = 0. + t2973 + t3001;
  t3039 = -0.049*t2972;
  t3051 = -0.09*t1448;
  t3053 = 0. + t3039 + t3051;
  t3110 = -0.049*t3076;
  t3137 = -0.21*t1445;
  t3141 = 0. + t3110 + t3137;
  t3162 = -0.21*t3076;
  t3165 = 0.049*t1445;
  t3170 = 0. + t3162 + t3165;
  t3203 = -0.2707*t3200;
  t3206 = 0.0016*t1442;
  t3208 = 0. + t3203 + t3206;
  t3252 = -0.0016*t3200;
  t3253 = -0.2707*t1442;
  t3270 = 0. + t3252 + t3253;
  t3296 = 0.0184*t3291;
  t3319 = -0.7055*t1433;
  t3322 = 0. + t3296 + t3319;
  t3339 = -0.7055*t3291;
  t3358 = -0.0184*t1433;
  t3360 = 0. + t3339 + t3358;
  t3375 = -1.1135*t3374;
  t3378 = 0.0216*t1423;
  t3384 = 0. + t3375 + t3378;
  t3421 = -0.0216*t3374;
  t3423 = -1.1135*t1423;
  t3429 = 0. + t3421 + t3423;
  p_output1[0]=t182*t274*t332 - 1.*t351*t862;
  p_output1[1]=-1.*t1082*t351 + t274*t332*t402;
  p_output1[2]=-1.*t1334*t351 - 1.*t332*t388;
  p_output1[3]=0.;
  p_output1[4]=0.642788*t1795 + 0.766044*t1807;
  p_output1[5]=0.642788*t1940 + 0.766044*t1948;
  p_output1[6]=0.642788*t2467 + 0.766044*t2517;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t1795 + 0.642788*t1807;
  p_output1[9]=-0.766044*t1940 + 0.642788*t1948;
  p_output1[10]=-0.766044*t2467 + 0.642788*t2517;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.0306*t1795 - 1.1312*t1807 + t182*t274*t2873 + t1498*t3004 + t1613*t3053 + t1632*t3141 + t1684*t3170 + t1688*t3208 + t1710*t3270 + t1723*t3322 + t1748*t3360 + t1761*t3384 + t1778*t3429 + t2915*t523 + t2944*t685 + t2949*t862 - 0.1305*(-1.*t182*t274*t332 + t351*t862) + var1[0];
  p_output1[13]=0. + 0.0306*t1940 - 1.1312*t1948 + t1062*t2944 + t1082*t2949 + t1822*t3004 + t1839*t3053 + t1860*t3141 + t1883*t3170 + t1887*t3208 + t1894*t3270 + t1901*t3322 + t1913*t3360 + t1917*t3384 + t1926*t3429 + t274*t2873*t402 - 0.1305*(t1082*t351 - 1.*t274*t332*t402) + t2915*t914 + var1[1];
  p_output1[14]=0. + 0.0306*t2467 - 1.1312*t2517 + t1334*t2949 + t1959*t3004 + t1968*t3053 + t1984*t3141 + t2002*t3170 + t2019*t3208 + t2189*t3270 + t2193*t3322 + t2306*t3360 + t2354*t3384 + t2446*t3429 + t274*t2915*t364 - 1.*t2873*t388 - 0.1305*(t1334*t351 + t332*t388) + t274*t2944*t404 + var1[2];
  p_output1[15]=1.;
}



void H_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
