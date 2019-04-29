/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:31 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_flexion_left_src.h"

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
  double t502;
  double t564;
  double t593;
  double t310;
  double t619;
  double t24;
  double t538;
  double t624;
  double t654;
  double t832;
  double t853;
  double t965;
  double t1389;
  double t1554;
  double t1595;
  double t1632;
  double t1674;
  double t1537;
  double t1543;
  double t1552;
  double t2078;
  double t3447;
  double t3496;
  double t3536;
  double t3694;
  double t3295;
  double t3333;
  double t3343;
  double t4166;
  double t4471;
  double t4473;
  double t25;
  double t206;
  double t274;
  double t285;
  double t1401;
  double t1503;
  double t4843;
  double t4847;
  double t4848;
  double t4992;
  double t5031;
  double t5114;
  double t1647;
  double t1787;
  double t1792;
  double t2375;
  double t2452;
  double t2503;
  double t5152;
  double t5154;
  double t5168;
  double t3630;
  double t3711;
  double t3799;
  double t4502;
  double t4507;
  double t4571;
  double t5368;
  double t5387;
  double t5393;
  double t5478;
  double t5482;
  double t5488;
  double t5681;
  double t5781;
  double t5796;
  double t6005;
  double t6019;
  double t6022;
  double t6057;
  double t6058;
  double t6063;
  double t6225;
  double t6234;
  double t6240;
  double t6306;
  double t6310;
  double t6316;
  double t6341;
  double t6361;
  double t6371;
  double t6445;
  double t6446;
  double t6447;
  double t6489;
  double t6496;
  double t6497;
  double t6501;
  double t6514;
  double t6528;
  double t6623;
  double t6633;
  double t6640;
  double t6660;
  double t6661;
  double t6682;
  double t6686;
  double t6689;
  double t6737;
  double t6746;
  double t6747;
  double t6755;
  double t6761;
  double t6764;
  double t6777;
  double t6782;
  double t6823;
  double t6827;
  double t6857;
  double t6866;
  double t6867;
  double t6869;
  double t6973;
  double t6991;
  double t7036;
  double t7040;
  double t7047;
  double t7057;
  double t7058;
  double t7069;
  double t7073;
  double t6858;
  double t6859;
  double t6862;
  double t6884;
  double t6885;
  double t6891;
  double t6896;
  double t6897;
  double t6914;
  double t6915;
  double t6919;
  double t6928;
  double t5201;
  double t5217;
  double t5309;
  double t7139;
  double t7141;
  double t7144;
  double t7146;
  double t7148;
  double t7178;
  double t7180;
  double t7182;
  double t7195;
  double t7196;
  double t7200;
  double t7231;
  double t7235;
  double t7241;
  double t7248;
  double t7252;
  double t7253;
  double t5604;
  double t5610;
  double t5611;
  double t7267;
  double t7270;
  double t7274;
  double t7279;
  double t7284;
  double t7304;
  double t7309;
  double t7310;
  double t7378;
  double t7381;
  double t7385;
  t502 = Cos(var1[5]);
  t564 = Sin(var1[3]);
  t593 = Sin(var1[4]);
  t310 = Cos(var1[3]);
  t619 = Sin(var1[5]);
  t24 = Cos(var1[6]);
  t538 = -1.*t310*t502;
  t624 = -1.*t564*t593*t619;
  t654 = t538 + t624;
  t832 = -1.*t502*t564*t593;
  t853 = t310*t619;
  t965 = t832 + t853;
  t1389 = Sin(var1[6]);
  t1554 = Cos(var1[7]);
  t1595 = -1.*t1554;
  t1632 = 1. + t1595;
  t1674 = Sin(var1[7]);
  t1537 = t24*t654;
  t1543 = t965*t1389;
  t1552 = t1537 + t1543;
  t2078 = Cos(var1[4]);
  t3447 = Cos(var1[8]);
  t3496 = -1.*t3447;
  t3536 = 1. + t3496;
  t3694 = Sin(var1[8]);
  t3295 = -1.*t2078*t1554*t564;
  t3333 = t1552*t1674;
  t3343 = t3295 + t3333;
  t4166 = t24*t965;
  t4471 = -1.*t654*t1389;
  t4473 = t4166 + t4471;
  t25 = -1.*t24;
  t206 = 1. + t25;
  t274 = 0.135*t206;
  t285 = 0. + t274;
  t1401 = -0.135*t1389;
  t1503 = 0. + t1401;
  t4843 = -1.*t502*t564;
  t4847 = t310*t593*t619;
  t4848 = t4843 + t4847;
  t4992 = t310*t502*t593;
  t5031 = t564*t619;
  t5114 = t4992 + t5031;
  t1647 = 0.135*t1632;
  t1787 = 0.049*t1674;
  t1792 = 0. + t1647 + t1787;
  t2375 = -0.049*t1632;
  t2452 = 0.135*t1674;
  t2503 = 0. + t2375 + t2452;
  t5152 = t24*t4848;
  t5154 = t5114*t1389;
  t5168 = t5152 + t5154;
  t3630 = -0.049*t3536;
  t3711 = -0.09*t3694;
  t3799 = 0. + t3630 + t3711;
  t4502 = -0.09*t3536;
  t4507 = 0.049*t3694;
  t4571 = 0. + t4502 + t4507;
  t5368 = t310*t2078*t1554;
  t5387 = t5168*t1674;
  t5393 = t5368 + t5387;
  t5478 = t24*t5114;
  t5482 = -1.*t4848*t1389;
  t5488 = t5478 + t5482;
  t5681 = t310*t2078*t24*t619;
  t5781 = t310*t2078*t502*t1389;
  t5796 = t5681 + t5781;
  t6005 = -1.*t310*t1554*t593;
  t6019 = t5796*t1674;
  t6022 = t6005 + t6019;
  t6057 = t310*t2078*t502*t24;
  t6058 = -1.*t310*t2078*t619*t1389;
  t6063 = t6057 + t6058;
  t6225 = t2078*t24*t564*t619;
  t6234 = t2078*t502*t564*t1389;
  t6240 = t6225 + t6234;
  t6306 = -1.*t1554*t564*t593;
  t6310 = t6240*t1674;
  t6316 = t6306 + t6310;
  t6341 = t2078*t502*t24*t564;
  t6361 = -1.*t2078*t564*t619*t1389;
  t6371 = t6341 + t6361;
  t6445 = -1.*t24*t593*t619;
  t6446 = -1.*t502*t593*t1389;
  t6447 = t6445 + t6446;
  t6489 = -1.*t2078*t1554;
  t6496 = t6447*t1674;
  t6497 = t6489 + t6496;
  t6501 = -1.*t502*t24*t593;
  t6514 = t593*t619*t1389;
  t6528 = t6501 + t6514;
  t6623 = t502*t564;
  t6633 = -1.*t310*t593*t619;
  t6640 = t6623 + t6633;
  t6660 = t6640*t1389;
  t6661 = t5478 + t6660;
  t6682 = t24*t6640;
  t6686 = -1.*t5114*t1389;
  t6689 = t6682 + t6686;
  t6737 = t502*t564*t593;
  t6746 = -1.*t310*t619;
  t6747 = t6737 + t6746;
  t6755 = t24*t6747;
  t6761 = t654*t1389;
  t6764 = t6755 + t6761;
  t6777 = -1.*t6747*t1389;
  t6782 = t1537 + t6777;
  t6823 = t2078*t502*t24;
  t6827 = -1.*t2078*t619*t1389;
  t6857 = t6823 + t6827;
  t6866 = -1.*t2078*t24*t619;
  t6867 = -1.*t2078*t502*t1389;
  t6869 = t6866 + t6867;
  t6973 = -1.*t24*t4848;
  t6991 = t6973 + t6686;
  t7036 = t310*t502;
  t7040 = t564*t593*t619;
  t7047 = t7036 + t7040;
  t7057 = -1.*t7047*t1389;
  t7058 = t6755 + t7057;
  t7069 = -1.*t24*t7047;
  t7073 = t7069 + t6777;
  t6858 = 0.135*t1554*t6857;
  t6859 = t6857*t1792;
  t6862 = t6857*t1674*t3799;
  t6884 = t6869*t4571;
  t6885 = t3447*t6857*t1674;
  t6891 = t6869*t3694;
  t6896 = t6885 + t6891;
  t6897 = -0.049*t6896;
  t6914 = t3447*t6869;
  t6915 = -1.*t6857*t1674*t3694;
  t6919 = t6914 + t6915;
  t6928 = -0.09*t6919;
  t5201 = t1554*t5168;
  t5217 = -1.*t310*t2078*t1674;
  t5309 = t5201 + t5217;
  t7139 = 0.135*t1554;
  t7141 = -0.049*t1674;
  t7144 = t7139 + t7141;
  t7146 = 0.049*t1554;
  t7148 = t7146 + t2452;
  t7178 = t24*t7047;
  t7180 = t6747*t1389;
  t7182 = t7178 + t7180;
  t7195 = t1554*t7182;
  t7196 = -1.*t2078*t564*t1674;
  t7200 = t7195 + t7196;
  t7231 = t2078*t24*t619;
  t7235 = t2078*t502*t1389;
  t7241 = t7231 + t7235;
  t7248 = t1554*t7241;
  t7252 = t593*t1674;
  t7253 = t7248 + t7252;
  t5604 = t3447*t5488;
  t5610 = -1.*t5393*t3694;
  t5611 = t5604 + t5610;
  t7267 = 0.049*t3447;
  t7270 = t7267 + t3711;
  t7274 = -0.09*t3447;
  t7279 = -0.049*t3694;
  t7284 = t7274 + t7279;
  t7304 = t2078*t1554*t564;
  t7309 = t7182*t1674;
  t7310 = t7304 + t7309;
  t7378 = -1.*t1554*t593;
  t7381 = t7241*t1674;
  t7385 = t7378 + t7381;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1552*t1792 + t3343*t3799 - 0.09*(-1.*t3343*t3694 + t3447*t4473) - 0.049*(t3343*t3447 + t3694*t4473) + t4473*t4571 - 1.*t2078*t2503*t564 + 0.135*(t1552*t1554 + t1674*t2078*t564) + t285*t654 + t1503*t965;
  p_output1[10]=t2078*t2503*t310 + t285*t4848 + t1503*t5114 + t1792*t5168 + 0.135*t5309 + t3799*t5393 + t4571*t5488 - 0.049*(t3447*t5393 + t3694*t5488) - 0.09*t5611;
  p_output1[11]=0;
  p_output1[12]=t1503*t2078*t310*t502 + t1792*t5796 - 1.*t2503*t310*t593 + 0.135*(t1554*t5796 + t1674*t310*t593) + t3799*t6022 + t4571*t6063 - 0.09*(-1.*t3694*t6022 + t3447*t6063) - 0.049*(t3447*t6022 + t3694*t6063) + t2078*t285*t310*t619;
  p_output1[13]=t1503*t2078*t502*t564 - 1.*t2503*t564*t593 + t2078*t285*t564*t619 + t1792*t6240 + 0.135*(t1674*t564*t593 + t1554*t6240) + t3799*t6316 + t4571*t6371 - 0.09*(-1.*t3694*t6316 + t3447*t6371) - 0.049*(t3447*t6316 + t3694*t6371);
  p_output1[14]=-1.*t2078*t2503 - 1.*t1503*t502*t593 - 1.*t285*t593*t619 + t1792*t6447 + 0.135*(t1674*t2078 + t1554*t6447) + t3799*t6497 + t4571*t6528 - 0.09*(-1.*t3694*t6497 + t3447*t6528) - 0.049*(t3447*t6497 + t3694*t6528);
  p_output1[15]=t285*t5114 + t1503*t6640 + 0.135*t1554*t6661 + t1792*t6661 + t1674*t3799*t6661 + t4571*t6689 - 0.09*(-1.*t1674*t3694*t6661 + t3447*t6689) - 0.049*(t1674*t3447*t6661 + t3694*t6689);
  p_output1[16]=t1503*t654 + t285*t6747 + 0.135*t1554*t6764 + t1792*t6764 + t1674*t3799*t6764 + t4571*t6782 - 0.09*(-1.*t1674*t3694*t6764 + t3447*t6782) - 0.049*(t1674*t3447*t6764 + t3694*t6782);
  p_output1[17]=t2078*t285*t502 - 1.*t1503*t2078*t619 + t6858 + t6859 + t6862 + t6884 + t6897 + t6928;
  p_output1[18]=0.135*t1389*t4848 - 0.135*t24*t5114 + 0.135*t1554*t5488 + t1792*t5488 + t1674*t3799*t5488 + t4571*t6991 - 0.09*(-1.*t1674*t3694*t5488 + t3447*t6991) - 0.049*(t1674*t3447*t5488 + t3694*t6991);
  p_output1[19]=-0.135*t24*t6747 + 0.135*t1389*t7047 + 0.135*t1554*t7058 + t1792*t7058 + t1674*t3799*t7058 + t4571*t7073 - 0.09*(-1.*t1674*t3694*t7058 + t3447*t7073) - 0.049*(t1674*t3447*t7058 + t3694*t7073);
  p_output1[20]=-0.135*t2078*t24*t502 + 0.135*t1389*t2078*t619 + t6858 + t6859 + t6862 + t6884 + t6897 + t6928;
  p_output1[21]=0.135*(-1.*t1554*t2078*t310 - 1.*t1674*t5168) - 0.049*t3447*t5309 + 0.09*t3694*t5309 + t3799*t5309 + t2078*t310*t7144 + t5168*t7148;
  p_output1[22]=t2078*t564*t7144 + t7148*t7182 + 0.135*(t3295 - 1.*t1674*t7182) - 0.049*t3447*t7200 + 0.09*t3694*t7200 + t3799*t7200;
  p_output1[23]=-1.*t593*t7144 + t7148*t7241 + 0.135*(t1554*t593 - 1.*t1674*t7241) - 0.049*t3447*t7253 + 0.09*t3694*t7253 + t3799*t7253;
  p_output1[24]=-0.09*(-1.*t3447*t5393 - 1.*t3694*t5488) - 0.049*t5611 + t5488*t7270 + t5393*t7284;
  p_output1[25]=t7058*t7270 + t7284*t7310 - 0.09*(-1.*t3694*t7058 - 1.*t3447*t7310) - 0.049*(t3447*t7058 - 1.*t3694*t7310);
  p_output1[26]=t6857*t7270 + t7284*t7385 - 0.09*(-1.*t3694*t6857 - 1.*t3447*t7385) - 0.049*(t3447*t6857 - 1.*t3694*t7385);
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
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
}



void Jp_hip_flexion_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
