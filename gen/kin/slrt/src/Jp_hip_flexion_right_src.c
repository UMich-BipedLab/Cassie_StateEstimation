/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:42 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_hip_flexion_right_src.h"

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
  double t590;
  double t1280;
  double t1189;
  double t1232;
  double t1310;
  double t67;
  double t147;
  double t161;
  double t323;
  double t678;
  double t1246;
  double t1322;
  double t1346;
  double t1512;
  double t2310;
  double t2411;
  double t2436;
  double t31;
  double t2683;
  double t2693;
  double t2704;
  double t2735;
  double t2773;
  double t2930;
  double t3071;
  double t3510;
  double t3575;
  double t3658;
  double t5018;
  double t5098;
  double t5101;
  double t265;
  double t430;
  double t443;
  double t906;
  double t996;
  double t1528;
  double t1733;
  double t2156;
  double t2188;
  double t2524;
  double t2557;
  double t2594;
  double t6044;
  double t6086;
  double t6106;
  double t6122;
  double t6123;
  double t6126;
  double t2931;
  double t3262;
  double t3374;
  double t6153;
  double t6202;
  double t6266;
  double t4356;
  double t4991;
  double t4999;
  double t6324;
  double t6333;
  double t6405;
  double t6507;
  double t6535;
  double t6541;
  double t6705;
  double t6749;
  double t6780;
  double t6823;
  double t6825;
  double t6837;
  double t6912;
  double t6941;
  double t6965;
  double t7067;
  double t7069;
  double t7070;
  double t7083;
  double t7089;
  double t7091;
  double t7159;
  double t7174;
  double t7191;
  double t7341;
  double t7348;
  double t7355;
  double t7363;
  double t7373;
  double t7375;
  double t7409;
  double t7414;
  double t7421;
  double t7528;
  double t7529;
  double t7547;
  double t7610;
  double t7629;
  double t7561;
  double t7567;
  double t7575;
  double t7791;
  double t7795;
  double t7802;
  double t7846;
  double t7851;
  double t7857;
  double t7815;
  double t7822;
  double t7948;
  double t7965;
  double t7973;
  double t7931;
  double t7935;
  double t7944;
  double t8050;
  double t8065;
  double t8232;
  double t8234;
  double t8235;
  double t8251;
  double t8256;
  double t8237;
  double t8238;
  double t7946;
  double t7978;
  double t7982;
  double t7983;
  double t7997;
  double t7998;
  double t8009;
  double t8010;
  double t8012;
  double t8013;
  double t8015;
  double t8026;
  double t6417;
  double t6441;
  double t6448;
  double t8376;
  double t8393;
  double t8395;
  double t8402;
  double t8418;
  double t8486;
  double t8488;
  double t8492;
  double t8502;
  double t8506;
  double t8511;
  double t8593;
  double t8596;
  double t8600;
  double t8613;
  double t8619;
  double t8623;
  double t6637;
  double t6639;
  double t6676;
  double t8675;
  double t8685;
  double t8689;
  double t8697;
  double t8700;
  double t8728;
  double t8733;
  double t8737;
  double t8779;
  double t8780;
  double t8788;
  t590 = Sin(var1[3]);
  t1280 = Cos(var1[3]);
  t1189 = Cos(var1[5]);
  t1232 = Sin(var1[4]);
  t1310 = Sin(var1[5]);
  t67 = Cos(var1[14]);
  t147 = -1.*t67;
  t161 = 1. + t147;
  t323 = Sin(var1[14]);
  t678 = Sin(var1[13]);
  t1246 = -1.*t1189*t590*t1232;
  t1322 = t1280*t1310;
  t1346 = t1246 + t1322;
  t1512 = Cos(var1[13]);
  t2310 = -1.*t1280*t1189;
  t2411 = -1.*t590*t1232*t1310;
  t2436 = t2310 + t2411;
  t31 = Cos(var1[4]);
  t2683 = t678*t1346;
  t2693 = t1512*t2436;
  t2704 = t2683 + t2693;
  t2735 = Cos(var1[15]);
  t2773 = -1.*t2735;
  t2930 = 1. + t2773;
  t3071 = Sin(var1[15]);
  t3510 = t1512*t1346;
  t3575 = -1.*t678*t2436;
  t3658 = t3510 + t3575;
  t5018 = -1.*t67*t31*t590;
  t5098 = t323*t2704;
  t5101 = t5018 + t5098;
  t265 = -0.049*t161;
  t430 = -0.135*t323;
  t443 = 0. + t265 + t430;
  t906 = 0.135*t678;
  t996 = 0. + t906;
  t1528 = -1.*t1512;
  t1733 = 1. + t1528;
  t2156 = -0.135*t1733;
  t2188 = 0. + t2156;
  t2524 = -0.135*t161;
  t2557 = 0.049*t323;
  t2594 = 0. + t2524 + t2557;
  t6044 = t1280*t1189*t1232;
  t6086 = t590*t1310;
  t6106 = t6044 + t6086;
  t6122 = -1.*t1189*t590;
  t6123 = t1280*t1232*t1310;
  t6126 = t6122 + t6123;
  t2931 = -0.09*t2930;
  t3262 = 0.049*t3071;
  t3374 = 0. + t2931 + t3262;
  t6153 = t678*t6106;
  t6202 = t1512*t6126;
  t6266 = t6153 + t6202;
  t4356 = -0.049*t2930;
  t4991 = -0.09*t3071;
  t4999 = 0. + t4356 + t4991;
  t6324 = t1512*t6106;
  t6333 = -1.*t678*t6126;
  t6405 = t6324 + t6333;
  t6507 = t67*t1280*t31;
  t6535 = t323*t6266;
  t6541 = t6507 + t6535;
  t6705 = t1280*t31*t1189*t678;
  t6749 = t1512*t1280*t31*t1310;
  t6780 = t6705 + t6749;
  t6823 = t1512*t1280*t31*t1189;
  t6825 = -1.*t1280*t31*t678*t1310;
  t6837 = t6823 + t6825;
  t6912 = -1.*t67*t1280*t1232;
  t6941 = t323*t6780;
  t6965 = t6912 + t6941;
  t7067 = t31*t1189*t678*t590;
  t7069 = t1512*t31*t590*t1310;
  t7070 = t7067 + t7069;
  t7083 = t1512*t31*t1189*t590;
  t7089 = -1.*t31*t678*t590*t1310;
  t7091 = t7083 + t7089;
  t7159 = -1.*t67*t590*t1232;
  t7174 = t323*t7070;
  t7191 = t7159 + t7174;
  t7341 = -1.*t1189*t678*t1232;
  t7348 = -1.*t1512*t1232*t1310;
  t7355 = t7341 + t7348;
  t7363 = -1.*t1512*t1189*t1232;
  t7373 = t678*t1232*t1310;
  t7375 = t7363 + t7373;
  t7409 = -1.*t67*t31;
  t7414 = t323*t7355;
  t7421 = t7409 + t7414;
  t7528 = t1189*t590;
  t7529 = -1.*t1280*t1232*t1310;
  t7547 = t7528 + t7529;
  t7610 = t678*t7547;
  t7629 = t6324 + t7610;
  t7561 = -1.*t678*t6106;
  t7567 = t1512*t7547;
  t7575 = t7561 + t7567;
  t7791 = t1189*t590*t1232;
  t7795 = -1.*t1280*t1310;
  t7802 = t7791 + t7795;
  t7846 = t1512*t7802;
  t7851 = t678*t2436;
  t7857 = t7846 + t7851;
  t7815 = -1.*t678*t7802;
  t7822 = t7815 + t2693;
  t7948 = t1512*t31*t1189;
  t7965 = -1.*t31*t678*t1310;
  t7973 = t7948 + t7965;
  t7931 = -1.*t31*t1189*t678;
  t7935 = -1.*t1512*t31*t1310;
  t7944 = t7931 + t7935;
  t8050 = -1.*t1512*t6126;
  t8065 = t7561 + t8050;
  t8232 = t1280*t1189;
  t8234 = t590*t1232*t1310;
  t8235 = t8232 + t8234;
  t8251 = -1.*t678*t8235;
  t8256 = t7846 + t8251;
  t8237 = -1.*t1512*t8235;
  t8238 = t7815 + t8237;
  t7946 = t3374*t7944;
  t7978 = -0.135*t67*t7973;
  t7982 = t2594*t7973;
  t7983 = t323*t4999*t7973;
  t7997 = t3071*t7944;
  t7998 = t2735*t323*t7973;
  t8009 = t7997 + t7998;
  t8010 = -0.049*t8009;
  t8012 = t2735*t7944;
  t8013 = -1.*t323*t3071*t7973;
  t8015 = t8012 + t8013;
  t8026 = -0.09*t8015;
  t6417 = -1.*t1280*t31*t323;
  t6441 = t67*t6266;
  t6448 = t6417 + t6441;
  t8376 = -0.135*t67;
  t8393 = -0.049*t323;
  t8395 = t8376 + t8393;
  t8402 = 0.049*t67;
  t8418 = t8402 + t430;
  t8486 = t678*t7802;
  t8488 = t1512*t8235;
  t8492 = t8486 + t8488;
  t8502 = -1.*t31*t323*t590;
  t8506 = t67*t8492;
  t8511 = t8502 + t8506;
  t8593 = t31*t1189*t678;
  t8596 = t1512*t31*t1310;
  t8600 = t8593 + t8596;
  t8613 = t323*t1232;
  t8619 = t67*t8600;
  t8623 = t8613 + t8619;
  t6637 = t2735*t6405;
  t6639 = -1.*t3071*t6541;
  t6676 = t6637 + t6639;
  t8675 = 0.049*t2735;
  t8685 = t8675 + t4991;
  t8689 = -0.09*t2735;
  t8697 = -0.049*t3071;
  t8700 = t8689 + t8697;
  t8728 = t67*t31*t590;
  t8733 = t323*t8492;
  t8737 = t8728 + t8733;
  t8779 = -1.*t67*t1232;
  t8780 = t323*t8600;
  t8788 = t8779 + t8780;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2188*t2436 + t2594*t2704 + t3374*t3658 + t4999*t5101 - 0.049*(t3071*t3658 + t2735*t5101) - 0.09*(t2735*t3658 - 1.*t3071*t5101) - 1.*t31*t443*t590 - 0.135*(t31*t323*t590 + t2704*t67) + t1346*t996;
  p_output1[10]=t1280*t31*t443 + t2188*t6126 + t2594*t6266 + t3374*t6405 - 0.135*t6448 + t4999*t6541 - 0.049*(t3071*t6405 + t2735*t6541) - 0.09*t6676 + t6106*t996;
  p_output1[11]=0;
  p_output1[12]=t1280*t1310*t2188*t31 - 1.*t1232*t1280*t443 + t2594*t6780 - 0.135*(t1232*t1280*t323 + t67*t6780) + t3374*t6837 + t4999*t6965 - 0.049*(t3071*t6837 + t2735*t6965) - 0.09*(t2735*t6837 - 1.*t3071*t6965) + t1189*t1280*t31*t996;
  p_output1[13]=t1310*t2188*t31*t590 - 1.*t1232*t443*t590 + t2594*t7070 - 0.135*(t1232*t323*t590 + t67*t7070) + t3374*t7091 + t4999*t7191 - 0.049*(t3071*t7091 + t2735*t7191) - 0.09*(t2735*t7091 - 1.*t3071*t7191) + t1189*t31*t590*t996;
  p_output1[14]=-1.*t1232*t1310*t2188 - 1.*t31*t443 + t2594*t7355 - 0.135*(t31*t323 + t67*t7355) + t3374*t7375 + t4999*t7421 - 0.049*(t3071*t7375 + t2735*t7421) - 0.09*(t2735*t7375 - 1.*t3071*t7421) - 1.*t1189*t1232*t996;
  p_output1[15]=t2188*t6106 + t3374*t7575 + t2594*t7629 + t323*t4999*t7629 - 0.135*t67*t7629 - 0.049*(t3071*t7575 + t2735*t323*t7629) - 0.09*(t2735*t7575 - 1.*t3071*t323*t7629) + t7547*t996;
  p_output1[16]=t2188*t7802 + t3374*t7822 + t2594*t7857 + t323*t4999*t7857 - 0.135*t67*t7857 - 0.049*(t3071*t7822 + t2735*t323*t7857) - 0.09*(t2735*t7822 - 1.*t3071*t323*t7857) + t2436*t996;
  p_output1[17]=t1189*t2188*t31 + t7946 + t7978 + t7982 + t7983 + t8010 + t8026 - 1.*t1310*t31*t996;
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
  p_output1[39]=0.135*t1512*t6106 + t2594*t6405 + t323*t4999*t6405 - 0.135*t6405*t67 - 0.135*t6126*t678 + t3374*t8065 - 0.09*(-1.*t3071*t323*t6405 + t2735*t8065) - 0.049*(t2735*t323*t6405 + t3071*t8065);
  p_output1[40]=0.135*t1512*t7802 - 0.135*t678*t8235 + t3374*t8238 + t2594*t8256 + t323*t4999*t8256 - 0.135*t67*t8256 - 0.049*(t3071*t8238 + t2735*t323*t8256) - 0.09*(t2735*t8238 - 1.*t3071*t323*t8256);
  p_output1[41]=0.135*t1189*t1512*t31 - 0.135*t1310*t31*t678 + t7946 + t7978 + t7982 + t7983 + t8010 + t8026;
  p_output1[42]=-0.049*t2735*t6448 + 0.09*t3071*t6448 + t4999*t6448 - 0.135*(-1.*t323*t6266 - 1.*t1280*t31*t67) + t1280*t31*t8395 + t6266*t8418;
  p_output1[43]=t31*t590*t8395 + t8418*t8492 - 0.135*(t5018 - 1.*t323*t8492) - 0.049*t2735*t8511 + 0.09*t3071*t8511 + t4999*t8511;
  p_output1[44]=-1.*t1232*t8395 + t8418*t8600 - 0.135*(t1232*t67 - 1.*t323*t8600) - 0.049*t2735*t8623 + 0.09*t3071*t8623 + t4999*t8623;
  p_output1[45]=-0.09*(-1.*t3071*t6405 - 1.*t2735*t6541) - 0.049*t6676 + t6405*t8685 + t6541*t8700;
  p_output1[46]=t8256*t8685 + t8700*t8737 - 0.09*(-1.*t3071*t8256 - 1.*t2735*t8737) - 0.049*(t2735*t8256 - 1.*t3071*t8737);
  p_output1[47]=t7973*t8685 + t8700*t8788 - 0.09*(-1.*t3071*t7973 - 1.*t2735*t8788) - 0.049*(t2735*t7973 - 1.*t3071*t8788);
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



void Jp_hip_flexion_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
