/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:20:39 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeFront_src.h"

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
  double t326;
  double t176;
  double t817;
  double t188;
  double t859;
  double t149;
  double t153;
  double t1404;
  double t1493;
  double t1497;
  double t200;
  double t945;
  double t1028;
  double t1056;
  double t1273;
  double t1345;
  double t1403;
  double t1415;
  double t1467;
  double t2759;
  double t2919;
  double t2953;
  double t2955;
  double t2794;
  double t2796;
  double t2842;
  double t3118;
  double t3356;
  double t2886;
  double t3173;
  double t3217;
  double t2703;
  double t3385;
  double t3395;
  double t3405;
  double t3518;
  double t3349;
  double t3422;
  double t3455;
  double t2698;
  double t3589;
  double t3634;
  double t3681;
  double t3754;
  double t3516;
  double t3689;
  double t3701;
  double t2630;
  double t3755;
  double t3760;
  double t3764;
  double t3914;
  double t3751;
  double t3784;
  double t3804;
  double t2500;
  double t3929;
  double t3978;
  double t4054;
  double t1771;
  double t1775;
  double t1792;
  double t1827;
  double t1857;
  double t1866;
  double t1903;
  double t1942;
  double t2203;
  double t4570;
  double t4610;
  double t4616;
  double t4426;
  double t4431;
  double t4514;
  double t4569;
  double t4619;
  double t4626;
  double t4635;
  double t4639;
  double t4641;
  double t4634;
  double t4650;
  double t4651;
  double t4657;
  double t4661;
  double t4671;
  double t4656;
  double t4672;
  double t4675;
  double t4677;
  double t4688;
  double t4691;
  double t4676;
  double t4698;
  double t4705;
  double t4707;
  double t4708;
  double t4713;
  double t2351;
  double t2396;
  double t2422;
  double t4743;
  double t4750;
  double t4751;
  double t4737;
  double t4738;
  double t4740;
  double t4742;
  double t4757;
  double t4758;
  double t4760;
  double t4761;
  double t4762;
  double t4759;
  double t4765;
  double t4766;
  double t4768;
  double t4771;
  double t4772;
  double t4767;
  double t4773;
  double t4775;
  double t4779;
  double t4780;
  double t4781;
  double t4778;
  double t4783;
  double t4784;
  double t4787;
  double t4789;
  double t4790;
  double t3889;
  double t4066;
  double t4083;
  double t4091;
  double t4093;
  double t4162;
  double t4706;
  double t4714;
  double t4718;
  double t4722;
  double t4726;
  double t4734;
  double t4786;
  double t4791;
  double t4793;
  double t4796;
  double t4817;
  double t4819;
  t326 = Cos(var1[3]);
  t176 = Cos(var1[5]);
  t817 = Sin(var1[4]);
  t188 = Sin(var1[3]);
  t859 = Sin(var1[5]);
  t149 = Cos(var1[7]);
  t153 = Cos(var1[6]);
  t1404 = Sin(var1[6]);
  t1493 = Cos(var1[4]);
  t1497 = Sin(var1[7]);
  t200 = -1.*t176*t188;
  t945 = t326*t817*t859;
  t1028 = t200 + t945;
  t1056 = t153*t1028;
  t1273 = t326*t176*t817;
  t1345 = t188*t859;
  t1403 = t1273 + t1345;
  t1415 = t1403*t1404;
  t1467 = t1056 + t1415;
  t2759 = Cos(var1[8]);
  t2919 = t153*t1403;
  t2953 = -1.*t1028*t1404;
  t2955 = t2919 + t2953;
  t2794 = t326*t1493*t149;
  t2796 = t1467*t1497;
  t2842 = t2794 + t2796;
  t3118 = Sin(var1[8]);
  t3356 = Cos(var1[9]);
  t2886 = t2759*t2842;
  t3173 = t2955*t3118;
  t3217 = t2886 + t3173;
  t2703 = Sin(var1[9]);
  t3385 = t2759*t2955;
  t3395 = -1.*t2842*t3118;
  t3405 = t3385 + t3395;
  t3518 = Cos(var1[10]);
  t3349 = -1.*t2703*t3217;
  t3422 = t3356*t3405;
  t3455 = t3349 + t3422;
  t2698 = Sin(var1[10]);
  t3589 = t3356*t3217;
  t3634 = t2703*t3405;
  t3681 = t3589 + t3634;
  t3754 = Cos(var1[11]);
  t3516 = t2698*t3455;
  t3689 = t3518*t3681;
  t3701 = t3516 + t3689;
  t2630 = Sin(var1[11]);
  t3755 = t3518*t3455;
  t3760 = -1.*t2698*t3681;
  t3764 = t3755 + t3760;
  t3914 = Cos(var1[12]);
  t3751 = -1.*t2630*t3701;
  t3784 = t3754*t3764;
  t3804 = t3751 + t3784;
  t2500 = Sin(var1[12]);
  t3929 = t3754*t3701;
  t3978 = t2630*t3764;
  t4054 = t3929 + t3978;
  t1771 = t326*t176;
  t1775 = t188*t817*t859;
  t1792 = t1771 + t1775;
  t1827 = t153*t1792;
  t1857 = t176*t188*t817;
  t1866 = -1.*t326*t859;
  t1903 = t1857 + t1866;
  t1942 = t1903*t1404;
  t2203 = t1827 + t1942;
  t4570 = t153*t1903;
  t4610 = -1.*t1792*t1404;
  t4616 = t4570 + t4610;
  t4426 = t1493*t149*t188;
  t4431 = t2203*t1497;
  t4514 = t4426 + t4431;
  t4569 = t2759*t4514;
  t4619 = t4616*t3118;
  t4626 = t4569 + t4619;
  t4635 = t2759*t4616;
  t4639 = -1.*t4514*t3118;
  t4641 = t4635 + t4639;
  t4634 = -1.*t2703*t4626;
  t4650 = t3356*t4641;
  t4651 = t4634 + t4650;
  t4657 = t3356*t4626;
  t4661 = t2703*t4641;
  t4671 = t4657 + t4661;
  t4656 = t2698*t4651;
  t4672 = t3518*t4671;
  t4675 = t4656 + t4672;
  t4677 = t3518*t4651;
  t4688 = -1.*t2698*t4671;
  t4691 = t4677 + t4688;
  t4676 = -1.*t2630*t4675;
  t4698 = t3754*t4691;
  t4705 = t4676 + t4698;
  t4707 = t3754*t4675;
  t4708 = t2630*t4691;
  t4713 = t4707 + t4708;
  t2351 = t1493*t153*t859;
  t2396 = t1493*t176*t1404;
  t2422 = t2351 + t2396;
  t4743 = t1493*t176*t153;
  t4750 = -1.*t1493*t859*t1404;
  t4751 = t4743 + t4750;
  t4737 = -1.*t149*t817;
  t4738 = t2422*t1497;
  t4740 = t4737 + t4738;
  t4742 = t2759*t4740;
  t4757 = t4751*t3118;
  t4758 = t4742 + t4757;
  t4760 = t2759*t4751;
  t4761 = -1.*t4740*t3118;
  t4762 = t4760 + t4761;
  t4759 = -1.*t2703*t4758;
  t4765 = t3356*t4762;
  t4766 = t4759 + t4765;
  t4768 = t3356*t4758;
  t4771 = t2703*t4762;
  t4772 = t4768 + t4771;
  t4767 = t2698*t4766;
  t4773 = t3518*t4772;
  t4775 = t4767 + t4773;
  t4779 = t3518*t4766;
  t4780 = -1.*t2698*t4772;
  t4781 = t4779 + t4780;
  t4778 = -1.*t2630*t4775;
  t4783 = t3754*t4781;
  t4784 = t4778 + t4783;
  t4787 = t3754*t4775;
  t4789 = t2630*t4781;
  t4790 = t4787 + t4789;
  t3889 = t2500*t3804;
  t4066 = t3914*t4054;
  t4083 = t3889 + t4066;
  t4091 = t3914*t3804;
  t4093 = -1.*t2500*t4054;
  t4162 = t4091 + t4093;
  t4706 = t2500*t4705;
  t4714 = t3914*t4713;
  t4718 = t4706 + t4714;
  t4722 = t3914*t4705;
  t4726 = -1.*t2500*t4713;
  t4734 = t4722 + t4726;
  t4786 = t2500*t4784;
  t4791 = t3914*t4790;
  t4793 = t4786 + t4791;
  t4796 = t3914*t4784;
  t4817 = -1.*t2500*t4790;
  t4819 = t4796 + t4817;
  p_output1[0]=-1.*t1467*t149 + t1493*t1497*t326;
  p_output1[1]=t1493*t1497*t188 - 1.*t149*t2203;
  p_output1[2]=-1.*t149*t2422 - 1.*t1497*t817;
  p_output1[3]=0.642788*t4083 + 0.766044*t4162;
  p_output1[4]=0.642788*t4718 + 0.766044*t4734;
  p_output1[5]=0.642788*t4793 + 0.766044*t4819;
  p_output1[6]=-0.766044*t4083 + 0.642788*t4162;
  p_output1[7]=-0.766044*t4718 + 0.642788*t4734;
  p_output1[8]=-0.766044*t4793 + 0.642788*t4819;
}



void R_LeftToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
