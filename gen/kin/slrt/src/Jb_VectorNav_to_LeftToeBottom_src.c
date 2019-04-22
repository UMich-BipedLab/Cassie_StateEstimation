/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:11:24 GMT-05:00
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
  double t142;
  double t179;
  double t257;
  double t149;
  double t184;
  double t228;
  double t134;
  double t260;
  double t310;
  double t322;
  double t381;
  double t234;
  double t327;
  double t331;
  double t119;
  double t385;
  double t413;
  double t444;
  double t507;
  double t365;
  double t454;
  double t461;
  double t116;
  double t518;
  double t535;
  double t541;
  double t64;
  double t114;
  double t700;
  double t719;
  double t724;
  double t697;
  double t784;
  double t799;
  double t832;
  double t856;
  double t821;
  double t870;
  double t882;
  double t894;
  double t897;
  double t902;
  double t626;
  double t491;
  double t542;
  double t549;
  double t563;
  double t606;
  double t612;
  double t621;
  double t649;
  double t651;
  double t681;
  double t685;
  double t1031;
  double t1052;
  double t1053;
  double t890;
  double t904;
  double t931;
  double t1301;
  double t1309;
  double t1243;
  double t1262;
  double t1320;
  double t1328;
  double t1329;
  double t1334;
  double t1378;
  double t1392;
  double t1396;
  double t1411;
  double t1208;
  double t1213;
  double t1275;
  double t1280;
  double t1335;
  double t1419;
  double t1455;
  double t1492;
  double t1494;
  double t1507;
  double t1509;
  double t1510;
  double t1161;
  double t1162;
  double t1230;
  double t1232;
  double t1465;
  double t1515;
  double t1516;
  double t1556;
  double t1558;
  double t1559;
  double t1579;
  double t1588;
  double t961;
  double t1067;
  double t1073;
  double t1086;
  double t1087;
  double t12;
  double t1142;
  double t1143;
  double t1648;
  double t1675;
  double t1676;
  double t1692;
  double t1698;
  double t1177;
  double t1188;
  double t1532;
  double t1589;
  double t1594;
  double t1761;
  double t1807;
  double t1865;
  double t1868;
  double t1875;
  double t1878;
  double t1887;
  double t1156;
  double t1610;
  double t1644;
  double t1706;
  double t1718;
  double t1841;
  double t1857;
  double t1896;
  double t1901;
  double t1945;
  double t1989;
  double t1990;
  double t1994;
  double t1998;
  double t2054;
  double t2056;
  double t2060;
  double t32;
  double t1091;
  double t1098;
  double t1114;
  double t1934;
  double t1944;
  double t2104;
  double t2112;
  double t2083;
  double t2093;
  double t1748;
  double t2064;
  t142 = Cos(var1[6]);
  t179 = Sin(var1[6]);
  t257 = Cos(var1[5]);
  t149 = 0.642788*t142;
  t184 = -0.766044*t179;
  t228 = t149 + t184;
  t134 = Sin(var1[5]);
  t260 = 0.766044*t142;
  t310 = 0.642788*t179;
  t322 = t260 + t310;
  t381 = Cos(var1[4]);
  t234 = t134*t228;
  t327 = t257*t322;
  t331 = 0. + t234 + t327;
  t119 = Sin(var1[4]);
  t385 = t257*t228;
  t413 = -1.*t134*t322;
  t444 = 0. + t385 + t413;
  t507 = Sin(var1[3]);
  t365 = -1.*t119*t331;
  t454 = t381*t444;
  t461 = 0. + t365 + t454;
  t116 = Cos(var1[3]);
  t518 = t381*t331;
  t535 = t119*t444;
  t541 = 0. + t518 + t535;
  t64 = Cos(var1[1]);
  t114 = Cos(var1[2]);
  t700 = -0.766044*t142;
  t719 = -0.642788*t179;
  t724 = t700 + t719;
  t697 = -1.*t134*t228;
  t784 = t257*t724;
  t799 = 0. + t697 + t784;
  t832 = t134*t724;
  t856 = 0. + t385 + t832;
  t821 = t119*t799;
  t870 = t381*t856;
  t882 = 0. + t821 + t870;
  t894 = t381*t799;
  t897 = -1.*t119*t856;
  t902 = 0. + t894 + t897;
  t626 = Sin(var1[2]);
  t491 = t116*t461;
  t542 = -1.*t507*t541;
  t549 = 0. + t491 + t542;
  t563 = t114*t549;
  t606 = t507*t461;
  t612 = t116*t541;
  t621 = 0. + t606 + t612;
  t649 = -1.*t621*t626;
  t651 = 0. + t563 + t649;
  t681 = t64*t651;
  t685 = 0. + t681;
  t1031 = t116*t882;
  t1052 = t507*t902;
  t1053 = 0. + t1031 + t1052;
  t890 = -1.*t507*t882;
  t904 = t116*t902;
  t931 = 0. + t890 + t904;
  t1301 = -1.*t142;
  t1309 = 1. + t1301;
  t1243 = -1.*t257;
  t1262 = 1. + t1243;
  t1320 = -0.0216*t1309;
  t1328 = 0.0306*t142;
  t1329 = 0.01770000000000005*t179;
  t1334 = 0. + t1320 + t1328 + t1329;
  t1378 = -1.1135*t1309;
  t1392 = -1.1312*t142;
  t1396 = 0.052199999999999996*t179;
  t1411 = 0. + t1378 + t1392 + t1396;
  t1208 = -1.*t381;
  t1213 = 1. + t1208;
  t1275 = -0.7055*t1262;
  t1280 = -0.0184*t134;
  t1335 = t134*t1334;
  t1419 = t257*t1411;
  t1455 = 0. + t1275 + t1280 + t1335 + t1419;
  t1492 = 0.0184*t1262;
  t1494 = -0.7055*t134;
  t1507 = t257*t1334;
  t1509 = -1.*t134*t1411;
  t1510 = 0. + t1492 + t1494 + t1507 + t1509;
  t1161 = -1.*t116;
  t1162 = 1. + t1161;
  t1230 = -0.0016*t1213;
  t1232 = -0.2707*t119;
  t1465 = -1.*t119*t1455;
  t1515 = t381*t1510;
  t1516 = 0. + t1230 + t1232 + t1465 + t1515;
  t1556 = -0.2707*t1213;
  t1558 = 0.0016*t119;
  t1559 = t381*t1455;
  t1579 = t119*t1510;
  t1588 = 0. + t1556 + t1558 + t1559 + t1579;
  t961 = t114*t931;
  t1067 = -1.*t1053*t626;
  t1073 = 0. + t961 + t1067;
  t1086 = t64*t1073;
  t1087 = 0. + t1086;
  t12 = Sin(var1[1]);
  t1142 = -1.*t114;
  t1143 = 1. + t1142;
  t1648 = -0.049*t1162;
  t1675 = -0.21*t507;
  t1676 = t116*t1516;
  t1692 = -1.*t507*t1588;
  t1698 = 0. + t1648 + t1675 + t1676 + t1692;
  t1177 = -0.21*t1162;
  t1188 = 0.049*t507;
  t1532 = t507*t1516;
  t1589 = t116*t1588;
  t1594 = 0. + t1177 + t1188 + t1532 + t1589;
  t1761 = -1.*t64;
  t1807 = 1. + t1761;
  t1865 = -0.049*t1143;
  t1868 = t114*t1698;
  t1875 = -0.09*t626;
  t1878 = -1.*t1594*t626;
  t1887 = 0. + t1865 + t1868 + t1875 + t1878;
  t1156 = -0.09*t1143;
  t1610 = t114*t1594;
  t1644 = 0.049*t626;
  t1706 = t1698*t626;
  t1718 = 0. + t1156 + t1610 + t1644 + t1706;
  t1841 = -0.049*t1807;
  t1857 = 0.004500000000000004*t12;
  t1896 = t64*t1887;
  t1901 = 0. + t1841 + t1857 + t1896;
  t1945 = 0.135*t1807;
  t1989 = 0.1305*t64;
  t1990 = 0.049*t12;
  t1994 = t12*t1887;
  t1998 = 0. + t1945 + t1989 + t1990 + t1994;
  t2054 = t114*t621;
  t2056 = t549*t626;
  t2060 = 0. + t2054 + t2056;
  t32 = 0. + t12;
  t1091 = t114*t1053;
  t1098 = t931*t626;
  t1114 = 0. + t1091 + t1098;
  t1934 = t12*t1073;
  t1944 = 0. + t1934;
  t2104 = -1.*t64;
  t2112 = 0. + t2104;
  t2083 = t12*t651;
  t2093 = 0. + t2083;
  t1748 = t1114*t1718;
  t2064 = -1.*t1718*t2060;
  p_output1[0]=t32;
  p_output1[1]=t685;
  p_output1[2]=t1087;
  p_output1[3]=0. + (t1748 + t1087*t1901 + t1944*t1998)*t685 + t1087*(t2064 - 1.*t1998*t2093 - 1.*t1901*t685);
  p_output1[4]=-0.135*t2060 + (-1.*t1114*t1718 - 1.*t1087*t1901 - 1.*t1944*t1998)*t32 + t1087*(0. + t1998*t2112 + t1901*t32);
  p_output1[5]=-0.135*t1114 + (0. - 1.*t1998*t2112 - 1.*t1901*t32)*t685 + t32*(t1718*t2060 + t1998*t2093 + t1901*t685);
  p_output1[6]=0.;
  p_output1[7]=t2060;
  p_output1[8]=t1114;
  p_output1[9]=-0.049 + (0. + t1748 + t1073*t1887)*t2060 + t1114*(0. + t2064 - 1.*t1887*t651);
  p_output1[10]=0. - 0.1305*t1114 + 0.135*t651;
  p_output1[11]=0. + 0.135*t1073 + 0.1305*t2060;
  p_output1[12]=1.;
  p_output1[13]=0.;
  p_output1[14]=0.;
  p_output1[15]=0.;
  p_output1[16]=0. - 1.*t1053*t1594 - 0.09*t549 + 0.049*t621 - 1.*t1698*t931;
  p_output1[17]=0. + 0.049*t1053 + t1698*t549 + t1594*t621 - 0.09*t931;
  p_output1[18]=1.;
  p_output1[19]=0.;
  p_output1[20]=0.;
  p_output1[21]=0.;
  p_output1[22]=0. - 0.21*t461 + 0.049*t541 - 1.*t1588*t882 - 1.*t1516*t902;
  p_output1[23]=0. + t1516*t461 + t1588*t541 + 0.049*t882 - 0.21*t902;
  p_output1[24]=1.;
  p_output1[25]=0.;
  p_output1[26]=0.;
  p_output1[27]=0.;
  p_output1[28]=0. + 0.0016*t331 - 0.2707*t444 - 1.*t1510*t799 - 1.*t1455*t856;
  p_output1[29]=0. + t1455*t331 + t1510*t444 - 0.2707*t799 + 0.0016*t856;
  p_output1[30]=1.;
  p_output1[31]=0.;
  p_output1[32]=0.;
  p_output1[33]=0.;
  p_output1[34]=0. - 0.7055*t228 - 1.*t1411*t228 - 0.0184*t322 - 1.*t1334*t724;
  p_output1[35]=0. - 0.0184*t228 + t1334*t228 + t1411*t322 - 0.7055*t724;
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
