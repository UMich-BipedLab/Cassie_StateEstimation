/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:52 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottom_src.h"

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
  double t971;
  double t728;
  double t996;
  double t873;
  double t1060;
  double t129;
  double t333;
  double t1695;
  double t1833;
  double t1898;
  double t944;
  double t1227;
  double t1392;
  double t1444;
  double t1489;
  double t1519;
  double t1573;
  double t1723;
  double t1780;
  double t3229;
  double t3317;
  double t3340;
  double t3362;
  double t3274;
  double t3285;
  double t3287;
  double t3377;
  double t3545;
  double t3308;
  double t3383;
  double t3436;
  double t3175;
  double t3632;
  double t3647;
  double t3658;
  double t3783;
  double t3481;
  double t3703;
  double t3741;
  double t3114;
  double t3797;
  double t3808;
  double t3873;
  double t3914;
  double t3758;
  double t3882;
  double t3890;
  double t3021;
  double t3929;
  double t3933;
  double t3982;
  double t4133;
  double t3901;
  double t3998;
  double t4050;
  double t2927;
  double t4181;
  double t4220;
  double t4235;
  double t2016;
  double t2027;
  double t2136;
  double t2150;
  double t2166;
  double t2179;
  double t2310;
  double t2316;
  double t2322;
  double t4781;
  double t4798;
  double t4814;
  double t4733;
  double t4754;
  double t4761;
  double t4775;
  double t4818;
  double t4943;
  double t5008;
  double t5089;
  double t5100;
  double t5001;
  double t5169;
  double t5208;
  double t5251;
  double t5311;
  double t5377;
  double t5250;
  double t5410;
  double t5432;
  double t5490;
  double t5514;
  double t5515;
  double t5483;
  double t5521;
  double t5534;
  double t5556;
  double t5579;
  double t5583;
  double t2622;
  double t2675;
  double t2758;
  double t5912;
  double t5916;
  double t5931;
  double t5769;
  double t5775;
  double t5829;
  double t5831;
  double t5935;
  double t5937;
  double t5948;
  double t5962;
  double t5968;
  double t5943;
  double t5970;
  double t5975;
  double t6027;
  double t6034;
  double t6037;
  double t5978;
  double t6059;
  double t6068;
  double t6077;
  double t6090;
  double t6097;
  double t6069;
  double t6107;
  double t6108;
  double t6159;
  double t6168;
  double t6180;
  double t4131;
  double t4269;
  double t4363;
  double t4545;
  double t4553;
  double t4555;
  double t5542;
  double t5645;
  double t5652;
  double t5691;
  double t5710;
  double t5714;
  double t6156;
  double t6185;
  double t6190;
  double t6224;
  double t6236;
  double t6258;
  t971 = Cos(var1[3]);
  t728 = Cos(var1[5]);
  t996 = Sin(var1[4]);
  t873 = Sin(var1[3]);
  t1060 = Sin(var1[5]);
  t129 = Cos(var1[7]);
  t333 = Cos(var1[6]);
  t1695 = Sin(var1[6]);
  t1833 = Cos(var1[4]);
  t1898 = Sin(var1[7]);
  t944 = -1.*t728*t873;
  t1227 = t971*t996*t1060;
  t1392 = t944 + t1227;
  t1444 = t333*t1392;
  t1489 = t971*t728*t996;
  t1519 = t873*t1060;
  t1573 = t1489 + t1519;
  t1723 = t1573*t1695;
  t1780 = t1444 + t1723;
  t3229 = Cos(var1[8]);
  t3317 = t333*t1573;
  t3340 = -1.*t1392*t1695;
  t3362 = t3317 + t3340;
  t3274 = t971*t1833*t129;
  t3285 = t1780*t1898;
  t3287 = t3274 + t3285;
  t3377 = Sin(var1[8]);
  t3545 = Cos(var1[9]);
  t3308 = t3229*t3287;
  t3383 = t3362*t3377;
  t3436 = t3308 + t3383;
  t3175 = Sin(var1[9]);
  t3632 = t3229*t3362;
  t3647 = -1.*t3287*t3377;
  t3658 = t3632 + t3647;
  t3783 = Cos(var1[10]);
  t3481 = -1.*t3175*t3436;
  t3703 = t3545*t3658;
  t3741 = t3481 + t3703;
  t3114 = Sin(var1[10]);
  t3797 = t3545*t3436;
  t3808 = t3175*t3658;
  t3873 = t3797 + t3808;
  t3914 = Cos(var1[11]);
  t3758 = t3114*t3741;
  t3882 = t3783*t3873;
  t3890 = t3758 + t3882;
  t3021 = Sin(var1[11]);
  t3929 = t3783*t3741;
  t3933 = -1.*t3114*t3873;
  t3982 = t3929 + t3933;
  t4133 = Cos(var1[12]);
  t3901 = -1.*t3021*t3890;
  t3998 = t3914*t3982;
  t4050 = t3901 + t3998;
  t2927 = Sin(var1[12]);
  t4181 = t3914*t3890;
  t4220 = t3021*t3982;
  t4235 = t4181 + t4220;
  t2016 = t971*t728;
  t2027 = t873*t996*t1060;
  t2136 = t2016 + t2027;
  t2150 = t333*t2136;
  t2166 = t728*t873*t996;
  t2179 = -1.*t971*t1060;
  t2310 = t2166 + t2179;
  t2316 = t2310*t1695;
  t2322 = t2150 + t2316;
  t4781 = t333*t2310;
  t4798 = -1.*t2136*t1695;
  t4814 = t4781 + t4798;
  t4733 = t1833*t129*t873;
  t4754 = t2322*t1898;
  t4761 = t4733 + t4754;
  t4775 = t3229*t4761;
  t4818 = t4814*t3377;
  t4943 = t4775 + t4818;
  t5008 = t3229*t4814;
  t5089 = -1.*t4761*t3377;
  t5100 = t5008 + t5089;
  t5001 = -1.*t3175*t4943;
  t5169 = t3545*t5100;
  t5208 = t5001 + t5169;
  t5251 = t3545*t4943;
  t5311 = t3175*t5100;
  t5377 = t5251 + t5311;
  t5250 = t3114*t5208;
  t5410 = t3783*t5377;
  t5432 = t5250 + t5410;
  t5490 = t3783*t5208;
  t5514 = -1.*t3114*t5377;
  t5515 = t5490 + t5514;
  t5483 = -1.*t3021*t5432;
  t5521 = t3914*t5515;
  t5534 = t5483 + t5521;
  t5556 = t3914*t5432;
  t5579 = t3021*t5515;
  t5583 = t5556 + t5579;
  t2622 = t1833*t333*t1060;
  t2675 = t1833*t728*t1695;
  t2758 = t2622 + t2675;
  t5912 = t1833*t728*t333;
  t5916 = -1.*t1833*t1060*t1695;
  t5931 = t5912 + t5916;
  t5769 = -1.*t129*t996;
  t5775 = t2758*t1898;
  t5829 = t5769 + t5775;
  t5831 = t3229*t5829;
  t5935 = t5931*t3377;
  t5937 = t5831 + t5935;
  t5948 = t3229*t5931;
  t5962 = -1.*t5829*t3377;
  t5968 = t5948 + t5962;
  t5943 = -1.*t3175*t5937;
  t5970 = t3545*t5968;
  t5975 = t5943 + t5970;
  t6027 = t3545*t5937;
  t6034 = t3175*t5968;
  t6037 = t6027 + t6034;
  t5978 = t3114*t5975;
  t6059 = t3783*t6037;
  t6068 = t5978 + t6059;
  t6077 = t3783*t5975;
  t6090 = -1.*t3114*t6037;
  t6097 = t6077 + t6090;
  t6069 = -1.*t3021*t6068;
  t6107 = t3914*t6097;
  t6108 = t6069 + t6107;
  t6159 = t3914*t6068;
  t6168 = t3021*t6097;
  t6180 = t6159 + t6168;
  t4131 = t2927*t4050;
  t4269 = t4133*t4235;
  t4363 = t4131 + t4269;
  t4545 = t4133*t4050;
  t4553 = -1.*t2927*t4235;
  t4555 = t4545 + t4553;
  t5542 = t2927*t5534;
  t5645 = t4133*t5583;
  t5652 = t5542 + t5645;
  t5691 = t4133*t5534;
  t5710 = -1.*t2927*t5583;
  t5714 = t5691 + t5710;
  t6156 = t2927*t6108;
  t6185 = t4133*t6180;
  t6190 = t6156 + t6185;
  t6224 = t4133*t6108;
  t6236 = -1.*t2927*t6180;
  t6258 = t6224 + t6236;
  p_output1[0]=-1.*t129*t1780 + t1833*t1898*t971;
  p_output1[1]=-1.*t129*t2322 + t1833*t1898*t873;
  p_output1[2]=-1.*t129*t2758 - 1.*t1898*t996;
  p_output1[3]=0.642788*t4363 + 0.766044*t4555;
  p_output1[4]=0.642788*t5652 + 0.766044*t5714;
  p_output1[5]=0.642788*t6190 + 0.766044*t6258;
  p_output1[6]=-0.766044*t4363 + 0.642788*t4555;
  p_output1[7]=-0.766044*t5652 + 0.642788*t5714;
  p_output1[8]=-0.766044*t6190 + 0.642788*t6258;
}



void R_LeftToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
