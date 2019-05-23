/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:19:59 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_VectorNav_to_LeftToeBottom_src.h"

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
  double t162;
  double t189;
  double t318;
  double t177;
  double t212;
  double t215;
  double t157;
  double t324;
  double t333;
  double t341;
  double t360;
  double t266;
  double t347;
  double t351;
  double t147;
  double t364;
  double t416;
  double t423;
  double t550;
  double t352;
  double t426;
  double t471;
  double t89;
  double t565;
  double t577;
  double t592;
  double t70;
  double t75;
  double t802;
  double t826;
  double t850;
  double t801;
  double t854;
  double t880;
  double t918;
  double t921;
  double t917;
  double t931;
  double t940;
  double t963;
  double t978;
  double t983;
  double t721;
  double t513;
  double t598;
  double t612;
  double t630;
  double t642;
  double t653;
  double t710;
  double t741;
  double t758;
  double t784;
  double t785;
  double t1013;
  double t1025;
  double t1030;
  double t958;
  double t987;
  double t1006;
  double t1309;
  double t1345;
  double t1291;
  double t1296;
  double t1353;
  double t1375;
  double t1389;
  double t1397;
  double t1426;
  double t1454;
  double t1469;
  double t1482;
  double t1221;
  double t1228;
  double t1297;
  double t1303;
  double t1412;
  double t1483;
  double t1486;
  double t1521;
  double t1554;
  double t1555;
  double t1559;
  double t1562;
  double t1173;
  double t1193;
  double t1257;
  double t1269;
  double t1514;
  double t1565;
  double t1570;
  double t1574;
  double t1599;
  double t1642;
  double t1653;
  double t1665;
  double t1012;
  double t1046;
  double t1072;
  double t1079;
  double t1086;
  double t22;
  double t1120;
  double t1142;
  double t1687;
  double t1688;
  double t1700;
  double t1707;
  double t1718;
  double t1218;
  double t1220;
  double t1573;
  double t1672;
  double t1674;
  double t1745;
  double t1762;
  double t1798;
  double t1811;
  double t1823;
  double t1825;
  double t1841;
  double t1150;
  double t1675;
  double t1683;
  double t1720;
  double t1733;
  double t1787;
  double t1789;
  double t1847;
  double t1848;
  double t1890;
  double t1891;
  double t1892;
  double t1898;
  double t1918;
  double t1952;
  double t1953;
  double t1955;
  double t55;
  double t1095;
  double t1110;
  double t1119;
  double t1874;
  double t1886;
  double t2123;
  double t2126;
  double t2008;
  double t2032;
  double t1734;
  double t2001;
  t162 = Cos(var1[6]);
  t189 = Sin(var1[6]);
  t318 = Cos(var1[5]);
  t177 = 0.642788*t162;
  t212 = -0.766044*t189;
  t215 = t177 + t212;
  t157 = Sin(var1[5]);
  t324 = 0.766044*t162;
  t333 = 0.642788*t189;
  t341 = t324 + t333;
  t360 = Cos(var1[4]);
  t266 = t157*t215;
  t347 = t318*t341;
  t351 = 0. + t266 + t347;
  t147 = Sin(var1[4]);
  t364 = t318*t215;
  t416 = -1.*t157*t341;
  t423 = 0. + t364 + t416;
  t550 = Sin(var1[3]);
  t352 = -1.*t147*t351;
  t426 = t360*t423;
  t471 = 0. + t352 + t426;
  t89 = Cos(var1[3]);
  t565 = t360*t351;
  t577 = t147*t423;
  t592 = 0. + t565 + t577;
  t70 = Cos(var1[1]);
  t75 = Cos(var1[2]);
  t802 = -0.766044*t162;
  t826 = -0.642788*t189;
  t850 = t802 + t826;
  t801 = -1.*t157*t215;
  t854 = t318*t850;
  t880 = 0. + t801 + t854;
  t918 = t157*t850;
  t921 = 0. + t364 + t918;
  t917 = t147*t880;
  t931 = t360*t921;
  t940 = 0. + t917 + t931;
  t963 = t360*t880;
  t978 = -1.*t147*t921;
  t983 = 0. + t963 + t978;
  t721 = Sin(var1[2]);
  t513 = t89*t471;
  t598 = -1.*t550*t592;
  t612 = 0. + t513 + t598;
  t630 = t75*t612;
  t642 = t550*t471;
  t653 = t89*t592;
  t710 = 0. + t642 + t653;
  t741 = -1.*t710*t721;
  t758 = 0. + t630 + t741;
  t784 = t70*t758;
  t785 = 0. + t784;
  t1013 = t89*t940;
  t1025 = t550*t983;
  t1030 = 0. + t1013 + t1025;
  t958 = -1.*t550*t940;
  t987 = t89*t983;
  t1006 = 0. + t958 + t987;
  t1309 = -1.*t162;
  t1345 = 1. + t1309;
  t1291 = -1.*t318;
  t1296 = 1. + t1291;
  t1353 = -0.0216*t1345;
  t1375 = 0.0306*t162;
  t1389 = 0.01770000000000005*t189;
  t1397 = 0. + t1353 + t1375 + t1389;
  t1426 = -1.1135*t1345;
  t1454 = -1.1312*t162;
  t1469 = 0.052199999999999996*t189;
  t1482 = 0. + t1426 + t1454 + t1469;
  t1221 = -1.*t360;
  t1228 = 1. + t1221;
  t1297 = -0.7055*t1296;
  t1303 = -0.0184*t157;
  t1412 = t157*t1397;
  t1483 = t318*t1482;
  t1486 = 0. + t1297 + t1303 + t1412 + t1483;
  t1521 = 0.0184*t1296;
  t1554 = -0.7055*t157;
  t1555 = t318*t1397;
  t1559 = -1.*t157*t1482;
  t1562 = 0. + t1521 + t1554 + t1555 + t1559;
  t1173 = -1.*t89;
  t1193 = 1. + t1173;
  t1257 = -0.0016*t1228;
  t1269 = -0.2707*t147;
  t1514 = -1.*t147*t1486;
  t1565 = t360*t1562;
  t1570 = 0. + t1257 + t1269 + t1514 + t1565;
  t1574 = -0.2707*t1228;
  t1599 = 0.0016*t147;
  t1642 = t360*t1486;
  t1653 = t147*t1562;
  t1665 = 0. + t1574 + t1599 + t1642 + t1653;
  t1012 = t75*t1006;
  t1046 = -1.*t1030*t721;
  t1072 = 0. + t1012 + t1046;
  t1079 = t70*t1072;
  t1086 = 0. + t1079;
  t22 = Sin(var1[1]);
  t1120 = -1.*t75;
  t1142 = 1. + t1120;
  t1687 = -0.049*t1193;
  t1688 = -0.21*t550;
  t1700 = t89*t1570;
  t1707 = -1.*t550*t1665;
  t1718 = 0. + t1687 + t1688 + t1700 + t1707;
  t1218 = -0.21*t1193;
  t1220 = 0.049*t550;
  t1573 = t550*t1570;
  t1672 = t89*t1665;
  t1674 = 0. + t1218 + t1220 + t1573 + t1672;
  t1745 = -1.*t70;
  t1762 = 1. + t1745;
  t1798 = -0.049*t1142;
  t1811 = t75*t1718;
  t1823 = -0.09*t721;
  t1825 = -1.*t1674*t721;
  t1841 = 0. + t1798 + t1811 + t1823 + t1825;
  t1150 = -0.09*t1142;
  t1675 = t75*t1674;
  t1683 = 0.049*t721;
  t1720 = t1718*t721;
  t1733 = 0. + t1150 + t1675 + t1683 + t1720;
  t1787 = -0.049*t1762;
  t1789 = 0.004500000000000004*t22;
  t1847 = t70*t1841;
  t1848 = 0. + t1787 + t1789 + t1847;
  t1890 = 0.135*t1762;
  t1891 = 0.1305*t70;
  t1892 = 0.049*t22;
  t1898 = t22*t1841;
  t1918 = 0. + t1890 + t1891 + t1892 + t1898;
  t1952 = t75*t710;
  t1953 = t612*t721;
  t1955 = 0. + t1952 + t1953;
  t55 = 0. + t22;
  t1095 = t75*t1030;
  t1110 = t1006*t721;
  t1119 = 0. + t1095 + t1110;
  t1874 = t22*t1072;
  t1886 = 0. + t1874;
  t2123 = -1.*t70;
  t2126 = 0. + t2123;
  t2008 = t22*t758;
  t2032 = 0. + t2008;
  t1734 = t1119*t1733;
  t2001 = -1.*t1733*t1955;
  p_output1[0]=t55;
  p_output1[1]=t785;
  p_output1[2]=t1086;
  p_output1[3]=0. + (t1734 + t1086*t1848 + t1886*t1918)*t785 + t1086*(t2001 - 1.*t1918*t2032 - 1.*t1848*t785);
  p_output1[4]=-0.135*t1955 + (-1.*t1119*t1733 - 1.*t1086*t1848 - 1.*t1886*t1918)*t55 + t1086*(0. + t1918*t2126 + t1848*t55);
  p_output1[5]=-0.135*t1119 + (0. - 1.*t1918*t2126 - 1.*t1848*t55)*t785 + t55*(t1733*t1955 + t1918*t2032 + t1848*t785);
  p_output1[6]=0.;
  p_output1[7]=t1955;
  p_output1[8]=t1119;
  p_output1[9]=-0.049 + (0. + t1734 + t1072*t1841)*t1955 + t1119*(0. + t2001 - 1.*t1841*t758);
  p_output1[10]=0. - 0.1305*t1119 + 0.135*t758;
  p_output1[11]=0. + 0.135*t1072 + 0.1305*t1955;
  p_output1[12]=1.;
  p_output1[13]=0.;
  p_output1[14]=0.;
  p_output1[15]=0.;
  p_output1[16]=0. - 1.*t1030*t1674 - 1.*t1006*t1718 - 0.09*t612 + 0.049*t710;
  p_output1[17]=0. - 0.09*t1006 + 0.049*t1030 + t1718*t612 + t1674*t710;
  p_output1[18]=1.;
  p_output1[19]=0.;
  p_output1[20]=0.;
  p_output1[21]=0.;
  p_output1[22]=0. - 0.21*t471 + 0.049*t592 - 1.*t1665*t940 - 1.*t1570*t983;
  p_output1[23]=0. + t1570*t471 + t1665*t592 + 0.049*t940 - 0.21*t983;
  p_output1[24]=1.;
  p_output1[25]=0.;
  p_output1[26]=0.;
  p_output1[27]=0.;
  p_output1[28]=0. + 0.0016*t351 - 0.2707*t423 - 1.*t1562*t880 - 1.*t1486*t921;
  p_output1[29]=0. + t1486*t351 + t1562*t423 - 0.2707*t880 + 0.0016*t921;
  p_output1[30]=1.;
  p_output1[31]=0.;
  p_output1[32]=0.;
  p_output1[33]=0.;
  p_output1[34]=0. - 0.7055*t215 - 1.*t1482*t215 - 0.0184*t341 - 1.*t1397*t850;
  p_output1[35]=0. - 0.0184*t215 + t1397*t215 + t1482*t341 - 0.7055*t850;
  p_output1[36]=1.;
  p_output1[37]=0.;
  p_output1[38]=0.;
  p_output1[39]=0.;
  p_output1[40]=0.05136484440000011;
  p_output1[41]=0.019994554799999897;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
}



void Jb_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
