/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:48 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeFront.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
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
static void output1(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t561;
  double t1675;
  double t1875;
  double t1788;
  double t1979;
  double t964;
  double t1040;
  double t1055;
  double t1158;
  double t1455;
  double t1818;
  double t2019;
  double t2033;
  double t2105;
  double t2215;
  double t2244;
  double t2264;
  double t701;
  double t2301;
  double t2345;
  double t2380;
  double t2476;
  double t2511;
  double t2544;
  double t2567;
  double t2704;
  double t2714;
  double t2715;
  double t2908;
  double t2978;
  double t3002;
  double t3054;
  double t3061;
  double t3076;
  double t3199;
  double t3277;
  double t3292;
  double t3341;
  double t3533;
  double t3541;
  double t3544;
  double t3595;
  double t3598;
  double t3617;
  double t3640;
  double t3692;
  double t3698;
  double t3729;
  double t3843;
  double t3847;
  double t3852;
  double t3908;
  double t3916;
  double t3920;
  double t3940;
  double t3962;
  double t3965;
  double t3977;
  double t4043;
  double t4045;
  double t4052;
  double t4063;
  double t4071;
  double t4074;
  double t4085;
  double t4099;
  double t4124;
  double t4130;
  double t4192;
  double t4194;
  double t4205;
  double t1139;
  double t1290;
  double t1390;
  double t1533;
  double t1673;
  double t2156;
  double t2189;
  double t2195;
  double t2197;
  double t2275;
  double t2278;
  double t2281;
  double t4281;
  double t4298;
  double t4315;
  double t4320;
  double t4335;
  double t4343;
  double t2557;
  double t2670;
  double t2698;
  double t4364;
  double t4366;
  double t4371;
  double t2834;
  double t2845;
  double t2865;
  double t3169;
  double t3261;
  double t3267;
  double t4396;
  double t4423;
  double t4427;
  double t4482;
  double t4507;
  double t4509;
  double t3439;
  double t3482;
  double t3507;
  double t3631;
  double t3676;
  double t3690;
  double t4513;
  double t4516;
  double t4517;
  double t4529;
  double t4530;
  double t4543;
  double t3781;
  double t3815;
  double t3830;
  double t3933;
  double t3943;
  double t3954;
  double t4565;
  double t4578;
  double t4587;
  double t4591;
  double t4593;
  double t4606;
  double t4025;
  double t4029;
  double t4039;
  double t4078;
  double t4086;
  double t4098;
  double t4633;
  double t4637;
  double t4646;
  double t4669;
  double t4675;
  double t4684;
  double t4145;
  double t4156;
  double t4173;
  double t4731;
  double t4738;
  double t4746;
  double t4762;
  double t4778;
  double t4782;
  double t4904;
  double t4916;
  double t4939;
  double t4964;
  double t4967;
  double t4973;
  double t5026;
  double t5031;
  double t5037;
  double t5045;
  double t5050;
  double t5059;
  double t5071;
  double t5074;
  double t5080;
  double t5113;
  double t5118;
  double t5123;
  double t5130;
  double t5131;
  double t5146;
  double t5160;
  double t5170;
  double t5171;
  double t5184;
  double t5186;
  double t5187;
  double t5205;
  double t5209;
  double t5211;
  double t5224;
  double t5235;
  double t5245;
  t561 = Cos(var1[3]);
  t1675 = Cos(var1[5]);
  t1875 = Sin(var1[3]);
  t1788 = Sin(var1[4]);
  t1979 = Sin(var1[5]);
  t964 = Cos(var1[14]);
  t1040 = -1.*t964;
  t1055 = 1. + t1040;
  t1158 = Sin(var1[14]);
  t1455 = Sin(var1[13]);
  t1818 = t561*t1675*t1788;
  t2019 = t1875*t1979;
  t2033 = t1818 + t2019;
  t2105 = Cos(var1[13]);
  t2215 = -1.*t1675*t1875;
  t2244 = t561*t1788*t1979;
  t2264 = t2215 + t2244;
  t701 = Cos(var1[4]);
  t2301 = t1455*t2033;
  t2345 = t2105*t2264;
  t2380 = t2301 + t2345;
  t2476 = Cos(var1[15]);
  t2511 = -1.*t2476;
  t2544 = 1. + t2511;
  t2567 = Sin(var1[15]);
  t2704 = t2105*t2033;
  t2714 = -1.*t1455*t2264;
  t2715 = t2704 + t2714;
  t2908 = t964*t561*t701;
  t2978 = t1158*t2380;
  t3002 = t2908 + t2978;
  t3054 = Cos(var1[16]);
  t3061 = -1.*t3054;
  t3076 = 1. + t3061;
  t3199 = Sin(var1[16]);
  t3277 = t2567*t2715;
  t3292 = t2476*t3002;
  t3341 = t3277 + t3292;
  t3533 = t2476*t2715;
  t3541 = -1.*t2567*t3002;
  t3544 = t3533 + t3541;
  t3595 = Cos(var1[17]);
  t3598 = -1.*t3595;
  t3617 = 1. + t3598;
  t3640 = Sin(var1[17]);
  t3692 = -1.*t3199*t3341;
  t3698 = t3054*t3544;
  t3729 = t3692 + t3698;
  t3843 = t3054*t3341;
  t3847 = t3199*t3544;
  t3852 = t3843 + t3847;
  t3908 = Cos(var1[18]);
  t3916 = -1.*t3908;
  t3920 = 1. + t3916;
  t3940 = Sin(var1[18]);
  t3962 = t3640*t3729;
  t3965 = t3595*t3852;
  t3977 = t3962 + t3965;
  t4043 = t3595*t3729;
  t4045 = -1.*t3640*t3852;
  t4052 = t4043 + t4045;
  t4063 = Cos(var1[19]);
  t4071 = -1.*t4063;
  t4074 = 1. + t4071;
  t4085 = Sin(var1[19]);
  t4099 = -1.*t3940*t3977;
  t4124 = t3908*t4052;
  t4130 = t4099 + t4124;
  t4192 = t3908*t3977;
  t4194 = t3940*t4052;
  t4205 = t4192 + t4194;
  t1139 = -0.049*t1055;
  t1290 = -0.135*t1158;
  t1390 = 0. + t1139 + t1290;
  t1533 = 0.135*t1455;
  t1673 = 0. + t1533;
  t2156 = -1.*t2105;
  t2189 = 1. + t2156;
  t2195 = -0.135*t2189;
  t2197 = 0. + t2195;
  t2275 = -0.135*t1055;
  t2278 = 0.049*t1158;
  t2281 = 0. + t2275 + t2278;
  t4281 = t1675*t1875*t1788;
  t4298 = -1.*t561*t1979;
  t4315 = t4281 + t4298;
  t4320 = t561*t1675;
  t4335 = t1875*t1788*t1979;
  t4343 = t4320 + t4335;
  t2557 = -0.09*t2544;
  t2670 = 0.049*t2567;
  t2698 = 0. + t2557 + t2670;
  t4364 = t1455*t4315;
  t4366 = t2105*t4343;
  t4371 = t4364 + t4366;
  t2834 = -0.049*t2544;
  t2845 = -0.09*t2567;
  t2865 = 0. + t2834 + t2845;
  t3169 = -0.049*t3076;
  t3261 = -0.21*t3199;
  t3267 = 0. + t3169 + t3261;
  t4396 = t2105*t4315;
  t4423 = -1.*t1455*t4343;
  t4427 = t4396 + t4423;
  t4482 = t964*t701*t1875;
  t4507 = t1158*t4371;
  t4509 = t4482 + t4507;
  t3439 = -0.21*t3076;
  t3482 = 0.049*t3199;
  t3507 = 0. + t3439 + t3482;
  t3631 = -0.2707*t3617;
  t3676 = 0.0016*t3640;
  t3690 = 0. + t3631 + t3676;
  t4513 = t2567*t4427;
  t4516 = t2476*t4509;
  t4517 = t4513 + t4516;
  t4529 = t2476*t4427;
  t4530 = -1.*t2567*t4509;
  t4543 = t4529 + t4530;
  t3781 = -0.0016*t3617;
  t3815 = -0.2707*t3640;
  t3830 = 0. + t3781 + t3815;
  t3933 = 0.0184*t3920;
  t3943 = -0.7055*t3940;
  t3954 = 0. + t3933 + t3943;
  t4565 = -1.*t3199*t4517;
  t4578 = t3054*t4543;
  t4587 = t4565 + t4578;
  t4591 = t3054*t4517;
  t4593 = t3199*t4543;
  t4606 = t4591 + t4593;
  t4025 = -0.7055*t3920;
  t4029 = -0.0184*t3940;
  t4039 = 0. + t4025 + t4029;
  t4078 = -1.1135*t4074;
  t4086 = 0.0216*t4085;
  t4098 = 0. + t4078 + t4086;
  t4633 = t3640*t4587;
  t4637 = t3595*t4606;
  t4646 = t4633 + t4637;
  t4669 = t3595*t4587;
  t4675 = -1.*t3640*t4606;
  t4684 = t4669 + t4675;
  t4145 = -0.0216*t4074;
  t4156 = -1.1135*t4085;
  t4173 = 0. + t4145 + t4156;
  t4731 = -1.*t3940*t4646;
  t4738 = t3908*t4684;
  t4746 = t4731 + t4738;
  t4762 = t3908*t4646;
  t4778 = t3940*t4684;
  t4782 = t4762 + t4778;
  t4904 = t701*t1675*t1455;
  t4916 = t2105*t701*t1979;
  t4939 = t4904 + t4916;
  t4964 = t2105*t701*t1675;
  t4967 = -1.*t701*t1455*t1979;
  t4973 = t4964 + t4967;
  t5026 = -1.*t964*t1788;
  t5031 = t1158*t4939;
  t5037 = t5026 + t5031;
  t5045 = t2567*t4973;
  t5050 = t2476*t5037;
  t5059 = t5045 + t5050;
  t5071 = t2476*t4973;
  t5074 = -1.*t2567*t5037;
  t5080 = t5071 + t5074;
  t5113 = -1.*t3199*t5059;
  t5118 = t3054*t5080;
  t5123 = t5113 + t5118;
  t5130 = t3054*t5059;
  t5131 = t3199*t5080;
  t5146 = t5130 + t5131;
  t5160 = t3640*t5123;
  t5170 = t3595*t5146;
  t5171 = t5160 + t5170;
  t5184 = t3595*t5123;
  t5186 = -1.*t3640*t5146;
  t5187 = t5184 + t5186;
  t5205 = -1.*t3940*t5171;
  t5209 = t3908*t5187;
  t5211 = t5205 + t5209;
  t5224 = t3908*t5171;
  t5235 = t3940*t5187;
  t5245 = t5224 + t5235;

  p_output1(0)=0. + t1673*t2033 + t2197*t2264 + t2281*t2380 + t2698*t2715 + t2865*t3002 + t3267*t3341 + t3507*t3544 + t3690*t3729 + t3830*t3852 + t3954*t3977 + t4039*t4052 + t4098*t4130 + t4173*t4205 + 0.088451*(t4085*t4130 + t4063*t4205) - 1.062256*(t4063*t4130 - 1.*t4085*t4205) + t1390*t561*t701 - 0.1305*(-1.*t1158*t561*t701 + t2380*t964) + var1(0);
  p_output1(1)=0. + t1673*t4315 + t2197*t4343 + t2281*t4371 + t2698*t4427 + t2865*t4509 + t3267*t4517 + t3507*t4543 + t3690*t4587 + t3830*t4606 + t3954*t4646 + t4039*t4684 + t4098*t4746 + t4173*t4782 + 0.088451*(t4085*t4746 + t4063*t4782) - 1.062256*(t4063*t4746 - 1.*t4085*t4782) + t1390*t1875*t701 - 0.1305*(-1.*t1158*t1875*t701 + t4371*t964) + var1(1);
  p_output1(2)=0. - 1.*t1390*t1788 + t2281*t4939 + t2698*t4973 + t2865*t5037 + t3267*t5059 + t3507*t5080 + t3690*t5123 + t3830*t5146 + t3954*t5171 + t4039*t5187 + t4098*t5211 + t4173*t5245 + 0.088451*(t4085*t5211 + t4063*t5245) - 1.062256*(t4063*t5211 - 1.*t4085*t5245) + t1673*t1675*t701 + t1979*t2197*t701 - 0.1305*(t1158*t1788 + t4939*t964) + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RightToeFront(const Eigen::Matrix<double,20,1> &var1)
//void p_RightToeFront(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



