/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:46 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "H_knee_to_shin_right_src.h"

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
  double t539;
  double t705;
  double t468;
  double t599;
  double t741;
  double t892;
  double t657;
  double t756;
  double t774;
  double t465;
  double t941;
  double t1069;
  double t1135;
  double t1244;
  double t865;
  double t1148;
  double t1181;
  double t436;
  double t1245;
  double t1289;
  double t1290;
  double t1297;
  double t1365;
  double t1370;
  double t1388;
  double t1436;
  double t1645;
  double t1766;
  double t1240;
  double t1652;
  double t1716;
  double t392;
  double t1781;
  double t1840;
  double t1841;
  double t314;
  double t2367;
  double t2472;
  double t2474;
  double t2535;
  double t2549;
  double t2556;
  double t2527;
  double t2684;
  double t2762;
  double t2795;
  double t2835;
  double t2841;
  double t2847;
  double t2861;
  double t2891;
  double t2091;
  double t2765;
  double t2897;
  double t2901;
  double t2927;
  double t3027;
  double t3031;
  double t3272;
  double t3344;
  double t3371;
  double t3437;
  double t3439;
  double t3441;
  double t3458;
  double t3459;
  double t3461;
  double t3409;
  double t3493;
  double t3512;
  double t3558;
  double t3590;
  double t3662;
  double t1736;
  double t1861;
  double t1991;
  double t2205;
  double t2208;
  double t2210;
  double t2923;
  double t3154;
  double t3161;
  double t3171;
  double t3185;
  double t3232;
  double t3520;
  double t3683;
  double t3684;
  double t3723;
  double t3738;
  double t3761;
  double t4226;
  double t4270;
  double t4592;
  double t4597;
  double t4835;
  double t4849;
  double t4941;
  double t4948;
  double t3845;
  double t3847;
  double t3883;
  double t4317;
  double t4322;
  double t4324;
  double t4359;
  double t4370;
  double t4417;
  double t4427;
  double t4447;
  double t4461;
  double t4478;
  double t4490;
  double t4548;
  double t4606;
  double t4666;
  double t4680;
  double t4738;
  double t4742;
  double t4782;
  double t4873;
  double t4888;
  double t4890;
  double t4917;
  double t4919;
  double t4930;
  double t4949;
  double t4962;
  double t4963;
  double t4969;
  double t5010;
  double t5045;
  double t3893;
  double t3899;
  double t3902;
  double t3908;
  double t3943;
  double t3944;
  t539 = Cos(var1[5]);
  t705 = Sin(var1[3]);
  t468 = Cos(var1[3]);
  t599 = Sin(var1[4]);
  t741 = Sin(var1[5]);
  t892 = Sin(var1[13]);
  t657 = t468*t539*t599;
  t756 = t705*t741;
  t774 = t657 + t756;
  t465 = Cos(var1[13]);
  t941 = -1.*t539*t705;
  t1069 = t468*t599*t741;
  t1135 = t941 + t1069;
  t1244 = Cos(var1[15]);
  t865 = t465*t774;
  t1148 = -1.*t892*t1135;
  t1181 = t865 + t1148;
  t436 = Sin(var1[15]);
  t1245 = Cos(var1[14]);
  t1289 = Cos(var1[4]);
  t1290 = t1245*t468*t1289;
  t1297 = Sin(var1[14]);
  t1365 = t892*t774;
  t1370 = t465*t1135;
  t1388 = t1365 + t1370;
  t1436 = t1297*t1388;
  t1645 = t1290 + t1436;
  t1766 = Cos(var1[16]);
  t1240 = t436*t1181;
  t1652 = t1244*t1645;
  t1716 = t1240 + t1652;
  t392 = Sin(var1[16]);
  t1781 = t1244*t1181;
  t1840 = -1.*t436*t1645;
  t1841 = t1781 + t1840;
  t314 = Cos(var1[17]);
  t2367 = t539*t705*t599;
  t2472 = -1.*t468*t741;
  t2474 = t2367 + t2472;
  t2535 = t468*t539;
  t2549 = t705*t599*t741;
  t2556 = t2535 + t2549;
  t2527 = t465*t2474;
  t2684 = -1.*t892*t2556;
  t2762 = t2527 + t2684;
  t2795 = t1245*t1289*t705;
  t2835 = t892*t2474;
  t2841 = t465*t2556;
  t2847 = t2835 + t2841;
  t2861 = t1297*t2847;
  t2891 = t2795 + t2861;
  t2091 = Sin(var1[17]);
  t2765 = t436*t2762;
  t2897 = t1244*t2891;
  t2901 = t2765 + t2897;
  t2927 = t1244*t2762;
  t3027 = -1.*t436*t2891;
  t3031 = t2927 + t3027;
  t3272 = t465*t1289*t539;
  t3344 = -1.*t1289*t892*t741;
  t3371 = t3272 + t3344;
  t3437 = -1.*t1245*t599;
  t3439 = t1289*t539*t892;
  t3441 = t465*t1289*t741;
  t3458 = t3439 + t3441;
  t3459 = t1297*t3458;
  t3461 = t3437 + t3459;
  t3409 = t436*t3371;
  t3493 = t1244*t3461;
  t3512 = t3409 + t3493;
  t3558 = t1244*t3371;
  t3590 = -1.*t436*t3461;
  t3662 = t3558 + t3590;
  t1736 = -1.*t392*t1716;
  t1861 = t1766*t1841;
  t1991 = t1736 + t1861;
  t2205 = t1766*t1716;
  t2208 = t392*t1841;
  t2210 = t2205 + t2208;
  t2923 = -1.*t392*t2901;
  t3154 = t1766*t3031;
  t3161 = t2923 + t3154;
  t3171 = t1766*t2901;
  t3185 = t392*t3031;
  t3232 = t3171 + t3185;
  t3520 = -1.*t392*t3512;
  t3683 = t1766*t3662;
  t3684 = t3520 + t3683;
  t3723 = t1766*t3512;
  t3738 = t392*t3662;
  t3761 = t3723 + t3738;
  t4226 = -1.*t1245;
  t4270 = 1. + t4226;
  t4592 = -1.*t1244;
  t4597 = 1. + t4592;
  t4835 = -1.*t1766;
  t4849 = 1. + t4835;
  t4941 = -1.*t314;
  t4948 = 1. + t4941;
  t3845 = t2091*t1991;
  t3847 = t314*t2210;
  t3883 = t3845 + t3847;
  t4317 = -0.049*t4270;
  t4322 = -0.135*t1297;
  t4324 = 0. + t4317 + t4322;
  t4359 = 0.135*t892;
  t4370 = 0. + t4359;
  t4417 = -1.*t465;
  t4427 = 1. + t4417;
  t4447 = -0.135*t4427;
  t4461 = 0. + t4447;
  t4478 = -0.135*t4270;
  t4490 = 0.049*t1297;
  t4548 = 0. + t4478 + t4490;
  t4606 = -0.09*t4597;
  t4666 = 0.049*t436;
  t4680 = 0. + t4606 + t4666;
  t4738 = -0.049*t4597;
  t4742 = -0.09*t436;
  t4782 = 0. + t4738 + t4742;
  t4873 = -0.049*t4849;
  t4888 = -0.21*t392;
  t4890 = 0. + t4873 + t4888;
  t4917 = -0.21*t4849;
  t4919 = 0.049*t392;
  t4930 = 0. + t4917 + t4919;
  t4949 = -0.2707*t4948;
  t4962 = 0.0016*t2091;
  t4963 = 0. + t4949 + t4962;
  t4969 = -0.0016*t4948;
  t5010 = -0.2707*t2091;
  t5045 = 0. + t4969 + t5010;
  t3893 = t2091*t3161;
  t3899 = t314*t3232;
  t3902 = t3893 + t3899;
  t3908 = t2091*t3684;
  t3943 = t314*t3761;
  t3944 = t3908 + t3943;
  p_output1[0]=t2091*t2210 - 1.*t1991*t314;
  p_output1[1]=-1.*t314*t3161 + t2091*t3232;
  p_output1[2]=-1.*t314*t3684 + t2091*t3761;
  p_output1[3]=0.;
  p_output1[4]=t3883;
  p_output1[5]=t3902;
  p_output1[6]=t3944;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1245*t1388 + t1289*t1297*t468;
  p_output1[9]=-1.*t1245*t2847 + t1289*t1297*t705;
  p_output1[10]=-1.*t1245*t3458 - 1.*t1297*t599;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.2707*(-1.*t2091*t2210 + t1991*t314) - 0.0016*t3883 + t1135*t4461 + t1388*t4548 + t1289*t4324*t468 - 0.1305*(t1245*t1388 - 1.*t1289*t1297*t468) + t1181*t4680 + t1645*t4782 + t1716*t4890 + t1841*t4930 + t1991*t4963 + t2210*t5045 + t4370*t774 + var1[0];
  p_output1[13]=0. - 0.2707*(t314*t3161 - 1.*t2091*t3232) - 0.0016*t3902 + t2474*t4370 + t2556*t4461 + t2847*t4548 + t2762*t4680 + t2891*t4782 + t2901*t4890 + t3031*t4930 + t3161*t4963 + t3232*t5045 + t1289*t4324*t705 - 0.1305*(t1245*t2847 - 1.*t1289*t1297*t705) + var1[1];
  p_output1[14]=0. - 0.2707*(t314*t3684 - 1.*t2091*t3761) - 0.0016*t3944 + t3458*t4548 + t3371*t4680 + t3461*t4782 + t3512*t4890 + t3662*t4930 + t3684*t4963 + t3761*t5045 + t1289*t4370*t539 - 1.*t4324*t599 - 0.1305*(t1245*t3458 + t1297*t599) + t1289*t4461*t741 + var1[2];
  p_output1[15]=1.;
}



void H_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
