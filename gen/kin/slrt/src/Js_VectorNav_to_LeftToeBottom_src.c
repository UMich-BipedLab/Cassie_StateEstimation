/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:11:25 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_VectorNav_to_LeftToeBottom_src.h"

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
  double t230;
  double t23;
  double t155;
  double t174;
  double t342;
  double t1622;
  double t1636;
  double t1676;
  double t513;
  double t526;
  double t586;
  double t1379;
  double t954;
  double t1979;
  double t2042;
  double t2189;
  double t2311;
  double t2331;
  double t1678;
  double t1764;
  double t1544;
  double t1272;
  double t1905;
  double t2539;
  double t3226;
  double t3271;
  double t3281;
  double t3327;
  double t2368;
  double t3324;
  double t3341;
  double t3344;
  double t3360;
  double t3380;
  double t3382;
  double t2727;
  double t2922;
  double t2728;
  double t2733;
  double t2833;
  double t2871;
  double t2986;
  double t2991;
  double t3020;
  double t3126;
  double t3139;
  double t4023;
  double t3995;
  double t3438;
  double t3485;
  double t3713;
  double t3729;
  double t3732;
  double t4102;
  double t4103;
  double t3745;
  double t3755;
  double t3757;
  double t3348;
  double t3396;
  double t4121;
  double t4123;
  double t4133;
  double t3916;
  double t3924;
  double t3930;
  double t4145;
  double t4152;
  double t4161;
  double t3946;
  double t3949;
  double t3956;
  double t3631;
  double t3660;
  double t3663;
  double t3802;
  double t3872;
  double t3904;
  double t4016;
  double t4050;
  double t4059;
  double t4082;
  double t4083;
  double t4086;
  double t4587;
  double t4581;
  double t4139;
  double t4165;
  double t4257;
  double t4258;
  double t4275;
  double t4622;
  double t4625;
  double t4300;
  double t4317;
  double t4326;
  double t4175;
  double t4182;
  double t4628;
  double t4629;
  double t4653;
  double t4490;
  double t4510;
  double t4512;
  double t4670;
  double t4673;
  double t4687;
  double t4525;
  double t4530;
  double t4534;
  double t4204;
  double t4211;
  double t4343;
  double t4380;
  double t4419;
  double t4440;
  double t4455;
  double t4460;
  double t4582;
  double t4594;
  double t4598;
  double t4602;
  double t4611;
  double t4617;
  double t4946;
  double t4937;
  double t4654;
  double t4693;
  double t4778;
  double t4792;
  double t4797;
  double t4990;
  double t4992;
  double t4800;
  double t4803;
  double t4805;
  double t4722;
  double t4731;
  double t4993;
  double t4998;
  double t5007;
  double t4899;
  double t4900;
  double t4901;
  double t5016;
  double t5019;
  double t5027;
  double t4908;
  double t4929;
  double t4931;
  double t4742;
  double t4751;
  double t4809;
  double t4810;
  double t4823;
  double t4844;
  double t4892;
  double t4893;
  t230 = Cos(var1[0]);
  t23 = Sin(var1[0]);
  t155 = -1.*t23;
  t174 = 0. + t155;
  t342 = 0. + t230;
  t1622 = Cos(var1[1]);
  t1636 = -1.*t230*t1622;
  t1676 = 0. + t1636;
  t513 = -1.*t230;
  t526 = 1. + t513;
  t586 = 0.135*t526;
  t1379 = Sin(var1[1]);
  t954 = 0.135*t23;
  t1979 = -1.*t1622;
  t2042 = 1. + t1979;
  t2189 = 0.135*t2042;
  t2311 = 0.049*t1379;
  t2331 = 0. + t2189 + t2311;
  t1678 = -1.*t1622*t23;
  t1764 = 0. + t1678;
  t1544 = 0. + t1379;
  t1272 = 0.049*t230;
  t1905 = -0.07996*t1676;
  t2539 = -1.*t23*t2331;
  t3226 = Cos(var1[2]);
  t3271 = -1.*t3226;
  t3281 = 1. + t3271;
  t3327 = Sin(var1[2]);
  t2368 = t230*t2331;
  t3324 = -0.049*t3281;
  t3341 = -0.09*t3327;
  t3344 = 0. + t3324 + t3341;
  t3360 = -0.09*t3281;
  t3380 = 0.049*t3327;
  t3382 = 0. + t3360 + t3380;
  t2727 = 0.03155*t1764;
  t2922 = 0.07996*t1544;
  t2728 = 0.049*t2042;
  t2733 = -0.135*t1379;
  t2833 = -0.135*t23;
  t2871 = t23*t2331;
  t2986 = -0.03155*t1676;
  t2991 = -0.049*t2042;
  t3020 = 0.135*t1379;
  t3126 = -0.135*t526;
  t3139 = -1.*t230*t2331;
  t4023 = Cos(var1[3]);
  t3995 = Sin(var1[3]);
  t3438 = t230*t1379*t3344;
  t3485 = -1.*t23*t3382;
  t3713 = t230*t3226*t1379;
  t3729 = -1.*t23*t3327;
  t3732 = t3713 + t3729;
  t4102 = -1.*t4023;
  t4103 = 1. + t4102;
  t3745 = -1.*t3226*t23;
  t3755 = -1.*t230*t1379*t3327;
  t3757 = t3745 + t3755;
  t3348 = -1.*t23*t1379*t3344;
  t3396 = -1.*t230*t3382;
  t4121 = -0.049*t4103;
  t4123 = -0.21*t3995;
  t4133 = 0. + t4121 + t4123;
  t3916 = t3226*t23*t1379;
  t3924 = t230*t3327;
  t3930 = t3916 + t3924;
  t4145 = -0.21*t4103;
  t4152 = 0.049*t3995;
  t4161 = 0. + t4145 + t4152;
  t3946 = t230*t3226;
  t3949 = -1.*t23*t1379*t3327;
  t3956 = t3946 + t3949;
  t3631 = -1.*t1622*t3344;
  t3660 = t23*t1379*t3344;
  t3663 = t230*t3382;
  t3802 = t1622*t3344;
  t3872 = -1.*t230*t1379*t3344;
  t3904 = t23*t3382;
  t4016 = -1.*t1622*t3226*t3995;
  t4050 = -1.*t4023*t1622*t3327;
  t4059 = t4016 + t4050;
  t4082 = t4023*t1622*t3226;
  t4083 = -1.*t1622*t3995*t3327;
  t4086 = t4082 + t4083;
  t4587 = Cos(var1[4]);
  t4581 = Sin(var1[4]);
  t4139 = t4133*t3732;
  t4165 = t4161*t3757;
  t4257 = -1.*t3995*t3732;
  t4258 = t4023*t3757;
  t4275 = t4257 + t4258;
  t4622 = -1.*t4587;
  t4625 = 1. + t4622;
  t4300 = t4023*t3732;
  t4317 = t3995*t3757;
  t4326 = t4300 + t4317;
  t4175 = -1.*t4133*t3930;
  t4182 = -1.*t4161*t3956;
  t4628 = -0.2707*t4625;
  t4629 = 0.0016*t4581;
  t4653 = 0. + t4628 + t4629;
  t4490 = -1.*t3995*t3930;
  t4510 = t4023*t3956;
  t4512 = t4490 + t4510;
  t4670 = -0.0016*t4625;
  t4673 = -0.2707*t4581;
  t4687 = 0. + t4670 + t4673;
  t4525 = t4023*t3930;
  t4530 = t3995*t3956;
  t4534 = t4525 + t4530;
  t4204 = -1.*t1622*t3226*t4133;
  t4211 = t1622*t4161*t3327;
  t4343 = t4133*t3930;
  t4380 = t4161*t3956;
  t4419 = t1622*t3226*t4133;
  t4440 = -1.*t1622*t4161*t3327;
  t4455 = -1.*t4133*t3732;
  t4460 = -1.*t4161*t3757;
  t4582 = t4581*t4059;
  t4594 = t4587*t4086;
  t4598 = t4582 + t4594;
  t4602 = t4587*t4059;
  t4611 = -1.*t4581*t4086;
  t4617 = t4602 + t4611;
  t4946 = Cos(var1[5]);
  t4937 = Sin(var1[5]);
  t4654 = t4653*t4275;
  t4693 = t4687*t4326;
  t4778 = t4581*t4275;
  t4792 = t4587*t4326;
  t4797 = t4778 + t4792;
  t4990 = -1.*t4946;
  t4992 = 1. + t4990;
  t4800 = t4587*t4275;
  t4803 = -1.*t4581*t4326;
  t4805 = t4800 + t4803;
  t4722 = -1.*t4653*t4512;
  t4731 = -1.*t4687*t4534;
  t4993 = 0.0184*t4992;
  t4998 = -0.7055*t4937;
  t5007 = 0. + t4993 + t4998;
  t4899 = t4581*t4512;
  t4900 = t4587*t4534;
  t4901 = t4899 + t4900;
  t5016 = -0.7055*t4992;
  t5019 = -0.0184*t4937;
  t5027 = 0. + t5016 + t5019;
  t4908 = t4587*t4512;
  t4929 = -1.*t4581*t4534;
  t4931 = t4908 + t4929;
  t4742 = -1.*t4653*t4059;
  t4751 = -1.*t4687*t4086;
  t4809 = t4653*t4512;
  t4810 = t4687*t4534;
  t4823 = t4653*t4059;
  t4844 = t4687*t4086;
  t4892 = -1.*t4653*t4275;
  t4893 = -1.*t4687*t4326;
  p_output1[0]=1.;
  p_output1[1]=0.;
  p_output1[2]=0.;
  p_output1[3]=0.;
  p_output1[4]=0.07996;
  p_output1[5]=-0.135;
  p_output1[6]=0.;
  p_output1[7]=t174;
  p_output1[8]=t342;
  p_output1[9]=0.135 - 0.07996*t174 + t230*(0. + t586) - 1.*t23*(0. + t954);
  p_output1[10]=0. + t1272 + 0.03155*t342;
  p_output1[11]=0. - 0.03155*t174 + 0.049*t23;
  p_output1[12]=t1544;
  p_output1[13]=t1676;
  p_output1[14]=t1764;
  p_output1[15]=0. - 0.09*t1622 + t1905 - 1.*t1622*t23*(0. + t2368 + t586) - 1.*t1622*t230*(0. + t2539 + t954);
  p_output1[16]=0. - 0.049*t23 - 0.09*t1379*t230 + t2727 - 1.*t1622*t23*(0. + t2728 + t2733) + t1379*(0. + t2833 + t2871) + t2922;
  p_output1[17]=0. + t1272 - 0.09*t1379*t23 + t2986 - 1.*t1622*t230*(0. + t2991 + t3020) + t1379*(0. + t3126 + t3139);
  p_output1[18]=t1544;
  p_output1[19]=t1676;
  p_output1[20]=t1764;
  p_output1[21]=0. + t1905 - 0.21*t1622*t3226 - 0.049*t1622*t3327 - 1.*t1622*t23*(0. + t2368 + t3438 + t3485 + t586) - 1.*t1622*t230*(0. + t2539 + t3348 + t3396 + t954);
  p_output1[22]=0. + t2727 + t2922 - 1.*t1622*t23*(0. + t2728 + t2733 + t3631) + t1379*(0. + t2833 + t2871 + t3660 + t3663) - 0.21*t3732 + 0.049*t3757;
  p_output1[23]=0. + t2986 - 1.*t1622*t230*(0. + t2991 + t3020 + t3802) + t1379*(0. + t3126 + t3139 + t3872 + t3904) - 0.21*t3930 + 0.049*t3956;
  p_output1[24]=t1544;
  p_output1[25]=t1676;
  p_output1[26]=t1764;
  p_output1[27]=0. + t1905 + 0.0016*t4059 - 0.2707*t4086 - 1.*t1622*t23*(0. + t2368 + t3438 + t3485 + t4139 + t4165 + t586) - 1.*t1622*t230*(0. + t2539 + t3348 + t3396 + t4175 + t4182 + t954);
  p_output1[28]=0. + t2727 + t2922 - 1.*t1622*t23*(0. + t2728 + t2733 + t3631 + t4204 + t4211) + 0.0016*t4275 - 0.2707*t4326 + t1379*(0. + t2833 + t2871 + t3660 + t3663 + t4343 + t4380);
  p_output1[29]=0. + t2986 - 1.*t1622*t230*(0. + t2991 + t3020 + t3802 + t4419 + t4440) + t1379*(0. + t3126 + t3139 + t3872 + t3904 + t4455 + t4460) + 0.0016*t4512 - 0.2707*t4534;
  p_output1[30]=t1544;
  p_output1[31]=t1676;
  p_output1[32]=t1764;
  p_output1[33]=0. + t1905 - 0.7055*t4598 - 0.0184*t4617 - 1.*t1622*t23*(0. + t2368 + t3438 + t3485 + t4139 + t4165 + t4654 + t4693 + t586) - 1.*t1622*t230*(0. + t2539 + t3348 + t3396 + t4175 + t4182 + t4722 + t4731 + t954);
  p_output1[34]=0. + t2727 + t2922 - 1.*t1622*t23*(0. + t2728 + t2733 + t3631 + t4204 + t4211 + t4742 + t4751) - 0.7055*t4797 - 0.0184*t4805 + t1379*(0. + t2833 + t2871 + t3660 + t3663 + t4343 + t4380 + t4809 + t4810);
  p_output1[35]=0. + t2986 - 1.*t1622*t230*(0. + t2991 + t3020 + t3802 + t4419 + t4440 + t4823 + t4844) + t1379*(0. + t3126 + t3139 + t3872 + t3904 + t4455 + t4460 + t4892 + t4893) - 0.7055*t4901 - 0.0184*t4931;
  p_output1[36]=t1544;
  p_output1[37]=t1676;
  p_output1[38]=t1764;
  p_output1[39]=0. + t1905 - 1.1135*(t4617*t4937 + t4598*t4946) + 0.0216*(-1.*t4598*t4937 + t4617*t4946) - 1.*t1622*t23*(0. + t2368 + t3438 + t3485 + t4139 + t4165 + t4654 + t4693 + t4797*t5007 + t4805*t5027 + t586) - 1.*t1622*t230*(0. + t2539 + t3348 + t3396 + t4175 + t4182 + t4722 + t4731 - 1.*t4901*t5007 - 1.*t4931*t5027 + t954);
  p_output1[40]=0. + t2727 + t2922 - 1.1135*(t4805*t4937 + t4797*t4946) + 0.0216*(-1.*t4797*t4937 + t4805*t4946) - 1.*t1622*t23*(0. + t2728 + t2733 + t3631 + t4204 + t4211 + t4742 + t4751 - 1.*t4598*t5007 - 1.*t4617*t5027) + t1379*(0. + t2833 + t2871 + t3660 + t3663 + t4343 + t4380 + t4809 + t4810 + t4901*t5007 + t4931*t5027);
  p_output1[41]=0. + t2986 - 1.1135*(t4931*t4937 + t4901*t4946) + 0.0216*(-1.*t4901*t4937 + t4931*t4946) - 1.*t1622*t230*(0. + t2991 + t3020 + t3802 + t4419 + t4440 + t4823 + t4844 + t4598*t5007 + t4617*t5027) + t1379*(0. + t3126 + t3139 + t3872 + t3904 + t4455 + t4460 + t4892 + t4893 - 1.*t4797*t5007 - 1.*t4805*t5027);
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



void Js_VectorNav_to_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
