/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:46 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_knee_to_shin_right_src.h"

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
  double t1779;
  double t3213;
  double t1544;
  double t1797;
  double t3240;
  double t4208;
  double t3031;
  double t4062;
  double t4152;
  double t1393;
  double t4409;
  double t4680;
  double t4708;
  double t4848;
  double t4187;
  double t4742;
  double t4752;
  double t855;
  double t4873;
  double t4888;
  double t4890;
  double t4905;
  double t4919;
  double t4930;
  double t4934;
  double t4949;
  double t4962;
  double t5056;
  double t4827;
  double t4963;
  double t4966;
  double t837;
  double t5061;
  double t5067;
  double t5080;
  double t447;
  double t5189;
  double t5192;
  double t5194;
  double t5225;
  double t5238;
  double t5242;
  double t5224;
  double t5246;
  double t5247;
  double t5266;
  double t5285;
  double t5290;
  double t5306;
  double t5324;
  double t5328;
  double t5130;
  double t5252;
  double t5331;
  double t5334;
  double t5355;
  double t5361;
  double t5364;
  double t5473;
  double t5479;
  double t5480;
  double t5489;
  double t5502;
  double t5503;
  double t5510;
  double t5522;
  double t5523;
  double t5482;
  double t5553;
  double t5558;
  double t5569;
  double t5590;
  double t5600;
  double t5045;
  double t5088;
  double t5094;
  double t5164;
  double t5167;
  double t5180;
  double t5352;
  double t5375;
  double t5376;
  double t5394;
  double t5402;
  double t5433;
  double t5564;
  double t5637;
  double t5641;
  double t5704;
  double t5716;
  double t5727;
  t1779 = Cos(var1[5]);
  t3213 = Sin(var1[3]);
  t1544 = Cos(var1[3]);
  t1797 = Sin(var1[4]);
  t3240 = Sin(var1[5]);
  t4208 = Sin(var1[13]);
  t3031 = t1544*t1779*t1797;
  t4062 = t3213*t3240;
  t4152 = t3031 + t4062;
  t1393 = Cos(var1[13]);
  t4409 = -1.*t1779*t3213;
  t4680 = t1544*t1797*t3240;
  t4708 = t4409 + t4680;
  t4848 = Cos(var1[15]);
  t4187 = t1393*t4152;
  t4742 = -1.*t4208*t4708;
  t4752 = t4187 + t4742;
  t855 = Sin(var1[15]);
  t4873 = Cos(var1[14]);
  t4888 = Cos(var1[4]);
  t4890 = t4873*t1544*t4888;
  t4905 = Sin(var1[14]);
  t4919 = t4208*t4152;
  t4930 = t1393*t4708;
  t4934 = t4919 + t4930;
  t4949 = t4905*t4934;
  t4962 = t4890 + t4949;
  t5056 = Cos(var1[16]);
  t4827 = t855*t4752;
  t4963 = t4848*t4962;
  t4966 = t4827 + t4963;
  t837 = Sin(var1[16]);
  t5061 = t4848*t4752;
  t5067 = -1.*t855*t4962;
  t5080 = t5061 + t5067;
  t447 = Cos(var1[17]);
  t5189 = t1779*t3213*t1797;
  t5192 = -1.*t1544*t3240;
  t5194 = t5189 + t5192;
  t5225 = t1544*t1779;
  t5238 = t3213*t1797*t3240;
  t5242 = t5225 + t5238;
  t5224 = t1393*t5194;
  t5246 = -1.*t4208*t5242;
  t5247 = t5224 + t5246;
  t5266 = t4873*t4888*t3213;
  t5285 = t4208*t5194;
  t5290 = t1393*t5242;
  t5306 = t5285 + t5290;
  t5324 = t4905*t5306;
  t5328 = t5266 + t5324;
  t5130 = Sin(var1[17]);
  t5252 = t855*t5247;
  t5331 = t4848*t5328;
  t5334 = t5252 + t5331;
  t5355 = t4848*t5247;
  t5361 = -1.*t855*t5328;
  t5364 = t5355 + t5361;
  t5473 = t1393*t4888*t1779;
  t5479 = -1.*t4888*t4208*t3240;
  t5480 = t5473 + t5479;
  t5489 = -1.*t4873*t1797;
  t5502 = t4888*t1779*t4208;
  t5503 = t1393*t4888*t3240;
  t5510 = t5502 + t5503;
  t5522 = t4905*t5510;
  t5523 = t5489 + t5522;
  t5482 = t855*t5480;
  t5553 = t4848*t5523;
  t5558 = t5482 + t5553;
  t5569 = t4848*t5480;
  t5590 = -1.*t855*t5523;
  t5600 = t5569 + t5590;
  t5045 = -1.*t837*t4966;
  t5088 = t5056*t5080;
  t5094 = t5045 + t5088;
  t5164 = t5056*t4966;
  t5167 = t837*t5080;
  t5180 = t5164 + t5167;
  t5352 = -1.*t837*t5334;
  t5375 = t5056*t5364;
  t5376 = t5352 + t5375;
  t5394 = t5056*t5334;
  t5402 = t837*t5364;
  t5433 = t5394 + t5402;
  t5564 = -1.*t837*t5558;
  t5637 = t5056*t5600;
  t5641 = t5564 + t5637;
  t5704 = t5056*t5558;
  t5716 = t837*t5600;
  t5727 = t5704 + t5716;
  p_output1[0]=-1.*t447*t5094 + t5130*t5180;
  p_output1[1]=-1.*t447*t5376 + t5130*t5433;
  p_output1[2]=-1.*t447*t5641 + t5130*t5727;
  p_output1[3]=t5094*t5130 + t447*t5180;
  p_output1[4]=t5130*t5376 + t447*t5433;
  p_output1[5]=t5130*t5641 + t447*t5727;
  p_output1[6]=t1544*t4888*t4905 - 1.*t4873*t4934;
  p_output1[7]=t3213*t4888*t4905 - 1.*t4873*t5306;
  p_output1[8]=-1.*t1797*t4905 - 1.*t4873*t5510;
}



void R_knee_to_shin_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
