/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:41 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_rotation_right_src.h"

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
  double t1830;
  double t3189;
  double t2466;
  double t2794;
  double t3406;
  double t288;
  double t334;
  double t1519;
  double t1627;
  double t2107;
  double t3021;
  double t3464;
  double t3543;
  double t3795;
  double t4095;
  double t4235;
  double t4340;
  double t168;
  double t4660;
  double t4667;
  double t4688;
  double t1547;
  double t1636;
  double t1759;
  double t2133;
  double t2442;
  double t3992;
  double t4010;
  double t4037;
  double t4055;
  double t4494;
  double t4549;
  double t4659;
  double t6371;
  double t6379;
  double t6415;
  double t6521;
  double t6535;
  double t6562;
  double t6570;
  double t6612;
  double t6635;
  double t6875;
  double t6882;
  double t6890;
  double t7009;
  double t7011;
  double t7016;
  double t7158;
  double t7165;
  double t7168;
  double t7363;
  double t7364;
  double t7373;
  double t6639;
  double t7400;
  double t7405;
  double t7438;
  double t7439;
  double t7456;
  double t7494;
  double t7501;
  double t7518;
  double t7637;
  double t7641;
  double t7645;
  double t7376;
  double t6641;
  double t6651;
  double t7470;
  double t7791;
  double t7802;
  double t7810;
  double t7838;
  double t7846;
  double t7626;
  double t7627;
  double t7629;
  double t7632;
  double t7655;
  double t7677;
  double t7682;
  double t6687;
  double t6699;
  double t6716;
  double t7884;
  double t7885;
  double t7895;
  double t7921;
  double t7931;
  double t7982;
  double t7983;
  double t7985;
  double t5711;
  double t8050;
  double t8056;
  double t8076;
  t1830 = Sin(var1[3]);
  t3189 = Cos(var1[3]);
  t2466 = Cos(var1[5]);
  t2794 = Sin(var1[4]);
  t3406 = Sin(var1[5]);
  t288 = Cos(var1[14]);
  t334 = -1.*t288;
  t1519 = 1. + t334;
  t1627 = Sin(var1[14]);
  t2107 = Sin(var1[13]);
  t3021 = -1.*t2466*t1830*t2794;
  t3464 = t3189*t3406;
  t3543 = t3021 + t3464;
  t3795 = Cos(var1[13]);
  t4095 = -1.*t3189*t2466;
  t4235 = -1.*t1830*t2794*t3406;
  t4340 = t4095 + t4235;
  t168 = Cos(var1[4]);
  t4660 = t2107*t3543;
  t4667 = t3795*t4340;
  t4688 = t4660 + t4667;
  t1547 = -0.049*t1519;
  t1636 = -0.135*t1627;
  t1759 = 0. + t1547 + t1636;
  t2133 = 0.135*t2107;
  t2442 = 0. + t2133;
  t3992 = -1.*t3795;
  t4010 = 1. + t3992;
  t4037 = -0.135*t4010;
  t4055 = 0. + t4037;
  t4494 = -0.135*t1519;
  t4549 = 0.049*t1627;
  t4659 = 0. + t4494 + t4549;
  t6371 = t3189*t2466*t2794;
  t6379 = t1830*t3406;
  t6415 = t6371 + t6379;
  t6521 = -1.*t2466*t1830;
  t6535 = t3189*t2794*t3406;
  t6562 = t6521 + t6535;
  t6570 = t2107*t6415;
  t6612 = t3795*t6562;
  t6635 = t6570 + t6612;
  t6875 = t3189*t168*t2466*t2107;
  t6882 = t3795*t3189*t168*t3406;
  t6890 = t6875 + t6882;
  t7009 = t168*t2466*t2107*t1830;
  t7011 = t3795*t168*t1830*t3406;
  t7016 = t7009 + t7011;
  t7158 = -1.*t2466*t2107*t2794;
  t7165 = -1.*t3795*t2794*t3406;
  t7168 = t7158 + t7165;
  t7363 = t2466*t1830;
  t7364 = -1.*t3189*t2794*t3406;
  t7373 = t7363 + t7364;
  t6639 = t3795*t6415;
  t7400 = t2107*t7373;
  t7405 = t6639 + t7400;
  t7438 = t2466*t1830*t2794;
  t7439 = -1.*t3189*t3406;
  t7456 = t7438 + t7439;
  t7494 = t3795*t7456;
  t7501 = t2107*t4340;
  t7518 = t7494 + t7501;
  t7637 = t3795*t168*t2466;
  t7641 = -1.*t168*t2107*t3406;
  t7645 = t7637 + t7641;
  t7376 = -1.*t2107*t6415;
  t6641 = -1.*t2107*t6562;
  t6651 = t6639 + t6641;
  t7470 = -1.*t2107*t7456;
  t7791 = t3189*t2466;
  t7802 = t1830*t2794*t3406;
  t7810 = t7791 + t7802;
  t7838 = -1.*t2107*t7810;
  t7846 = t7494 + t7838;
  t7626 = -1.*t168*t2466*t2107;
  t7627 = -1.*t3795*t168*t3406;
  t7629 = t7626 + t7627;
  t7632 = -0.09*t7629;
  t7655 = -0.135*t288*t7645;
  t7677 = t4659*t7645;
  t7682 = -0.049*t1627*t7645;
  t6687 = -1.*t3189*t168*t1627;
  t6699 = t288*t6635;
  t6716 = t6687 + t6699;
  t7884 = -0.135*t288;
  t7885 = -0.049*t1627;
  t7895 = t7884 + t7885;
  t7921 = 0.049*t288;
  t7931 = t7921 + t1636;
  t7982 = t2107*t7456;
  t7983 = t3795*t7810;
  t7985 = t7982 + t7983;
  t5711 = -1.*t288*t168*t1830;
  t8050 = t168*t2466*t2107;
  t8056 = t3795*t168*t3406;
  t8076 = t8050 + t8056;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t168*t1759*t1830 + t2442*t3543 + t4055*t4340 - 0.09*(t3543*t3795 - 1.*t2107*t4340) + t4659*t4688 - 0.135*(t1627*t168*t1830 + t288*t4688) - 0.049*(t1627*t4688 + t5711);
  p_output1[10]=t168*t1759*t3189 + t2442*t6415 + t4055*t6562 + t4659*t6635 - 0.049*(t168*t288*t3189 + t1627*t6635) - 0.09*t6651 - 0.135*t6716;
  p_output1[11]=0;
  p_output1[12]=t168*t2442*t2466*t3189 - 1.*t1759*t2794*t3189 - 0.09*(-1.*t168*t2107*t3189*t3406 + t168*t2466*t3189*t3795) + t168*t3189*t3406*t4055 + t4659*t6890 - 0.049*(-1.*t2794*t288*t3189 + t1627*t6890) - 0.135*(t1627*t2794*t3189 + t288*t6890);
  p_output1[13]=t168*t1830*t2442*t2466 - 1.*t1759*t1830*t2794 - 0.09*(-1.*t168*t1830*t2107*t3406 + t168*t1830*t2466*t3795) + t168*t1830*t3406*t4055 + t4659*t7016 - 0.049*(-1.*t1830*t2794*t288 + t1627*t7016) - 0.135*(t1627*t1830*t2794 + t288*t7016);
  p_output1[14]=-1.*t168*t1759 - 1.*t2442*t2466*t2794 - 0.09*(t2107*t2794*t3406 - 1.*t2466*t2794*t3795) - 1.*t2794*t3406*t4055 + t4659*t7168 - 0.049*(-1.*t168*t288 + t1627*t7168) - 0.135*(t1627*t168 + t288*t7168);
  p_output1[15]=t4055*t6415 + t2442*t7373 - 0.09*(t3795*t7373 + t7376) - 0.049*t1627*t7405 - 0.135*t288*t7405 + t4659*t7405;
  p_output1[16]=t2442*t4340 + t4055*t7456 - 0.09*(t4667 + t7470) - 0.049*t1627*t7518 - 0.135*t288*t7518 + t4659*t7518;
  p_output1[17]=-1.*t168*t2442*t3406 + t168*t2466*t4055 + t7632 + t7655 + t7677 + t7682;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
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
  p_output1[39]=0.135*t3795*t6415 - 0.135*t2107*t6562 - 0.049*t1627*t6651 - 0.135*t288*t6651 + t4659*t6651 - 0.09*(-1.*t3795*t6562 + t7376);
  p_output1[40]=0.135*t3795*t7456 - 0.135*t2107*t7810 - 0.09*(t7470 - 1.*t3795*t7810) - 0.049*t1627*t7846 - 0.135*t288*t7846 + t4659*t7846;
  p_output1[41]=-0.135*t168*t2107*t3406 + 0.135*t168*t2466*t3795 + t7632 + t7655 + t7677 + t7682;
  p_output1[42]=-0.135*(-1.*t168*t288*t3189 - 1.*t1627*t6635) - 0.049*t6716 + t168*t3189*t7895 + t6635*t7931;
  p_output1[43]=t168*t1830*t7895 + t7931*t7985 - 0.135*(t5711 - 1.*t1627*t7985) - 0.049*(-1.*t1627*t168*t1830 + t288*t7985);
  p_output1[44]=-1.*t2794*t7895 + t7931*t8076 - 0.135*(t2794*t288 - 1.*t1627*t8076) - 0.049*(t1627*t2794 + t288*t8076);
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



void Jp_hip_rotation_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
