/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:11:28 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jvs_VectorNav_to_RightToeBottom_src.h"

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
  double t117;
  double t323;
  double t366;
  double t527;
  double t1376;
  double t201;
  double t210;
  double t239;
  double t590;
  double t1603;
  double t1696;
  double t1702;
  double t1767;
  double t1832;
  double t1866;
  double t725;
  double t1534;
  double t1541;
  double t1543;
  double t1948;
  double t2711;
  double t2773;
  double t2812;
  double t2841;
  double t1867;
  double t2823;
  double t2862;
  double t2872;
  double t2920;
  double t2965;
  double t3034;
  double t2062;
  double t2105;
  double t2122;
  double t2359;
  double t2384;
  double t2132;
  double t2184;
  double t2241;
  double t2257;
  double t2467;
  double t2482;
  double t2491;
  double t2627;
  double t2641;
  double t3202;
  double t3229;
  double t3749;
  double t3750;
  double t3758;
  double t3794;
  double t3798;
  double t3857;
  double t4537;
  double t4666;
  double t4688;
  double t4733;
  double t2891;
  double t3059;
  double t4143;
  double t4308;
  double t4352;
  double t4698;
  double t4738;
  double t4775;
  double t4410;
  double t4444;
  double t4480;
  double t4835;
  double t4837;
  double t4889;
  double t3480;
  double t3583;
  double t3625;
  double t3896;
  double t4033;
  double t4061;
  double t5018;
  double t5047;
  double t6132;
  double t6153;
  double t6156;
  double t6109;
  double t6120;
  double t6126;
  double t6227;
  double t6237;
  double t6252;
  double t6267;
  double t4817;
  double t4909;
  double t5908;
  double t5909;
  double t5945;
  double t6256;
  double t6270;
  double t6285;
  double t5889;
  double t5890;
  double t5892;
  double t6299;
  double t6306;
  double t6314;
  double t5270;
  double t5309;
  double t5492;
  double t5070;
  double t5084;
  double t5093;
  double t5600;
  double t5609;
  double t5768;
  double t5836;
  double t5967;
  double t5984;
  double t6029;
  double t6053;
  double t6344;
  double t6369;
  double t6518;
  double t6528;
  double t6535;
  double t6541;
  double t6546;
  double t6549;
  double t6628;
  double t6629;
  double t6631;
  double t6635;
  double t6288;
  double t6318;
  double t6601;
  double t6602;
  double t6604;
  double t6634;
  double t6637;
  double t6638;
  double t6613;
  double t6615;
  double t6623;
  double t6644;
  double t6645;
  double t6646;
  double t6456;
  double t6459;
  double t6460;
  double t6425;
  double t6436;
  double t6440;
  double t6475;
  double t6477;
  double t6489;
  double t6507;
  double t6558;
  double t6559;
  double t6583;
  double t6585;
  t117 = Cos(var1[7]);
  t323 = Sin(var1[7]);
  t366 = -1.*t323;
  t527 = 0. + t366;
  t1376 = Cos(var1[8]);
  t201 = -1.*t117;
  t210 = 1. + t201;
  t239 = -0.135*t210;
  t590 = -0.135*t323;
  t1603 = -1.*t1376;
  t1696 = 1. + t1603;
  t1702 = -0.135*t1696;
  t1767 = Sin(var1[8]);
  t1832 = 0.049*t1767;
  t1866 = 0. + t1702 + t1832;
  t725 = 0.049*t117;
  t1534 = -1.*t117*t1376;
  t1541 = 0. + t1534;
  t1543 = -0.07996*t1541;
  t1948 = -1.*t323*t1866;
  t2711 = Cos(var1[9]);
  t2773 = -1.*t2711;
  t2812 = 1. + t2773;
  t2841 = Sin(var1[9]);
  t1867 = t117*t1866;
  t2823 = -0.049*t2812;
  t2862 = -0.09*t2841;
  t2872 = 0. + t2823 + t2862;
  t2920 = -0.09*t2812;
  t2965 = 0.049*t2841;
  t3034 = 0. + t2920 + t2965;
  t2062 = -1.*t1376*t323;
  t2105 = 0. + t2062;
  t2122 = 0.03155*t2105;
  t2359 = 0. + t1767;
  t2384 = 0.07996*t2359;
  t2132 = 0.049*t1696;
  t2184 = 0.135*t1767;
  t2241 = 0.135*t323;
  t2257 = t323*t1866;
  t2467 = -0.03155*t1541;
  t2482 = -0.049*t1696;
  t2491 = -0.135*t1767;
  t2627 = 0.135*t210;
  t2641 = -1.*t117*t1866;
  t3202 = t117*t1767*t2872;
  t3229 = -1.*t323*t3034;
  t3749 = t117*t2711*t1767;
  t3750 = -1.*t323*t2841;
  t3758 = t3749 + t3750;
  t3794 = -1.*t2711*t323;
  t3798 = -1.*t117*t1767*t2841;
  t3857 = t3794 + t3798;
  t4537 = Cos(var1[10]);
  t4666 = -1.*t4537;
  t4688 = 1. + t4666;
  t4733 = Sin(var1[10]);
  t2891 = -1.*t323*t1767*t2872;
  t3059 = -1.*t117*t3034;
  t4143 = t2711*t323*t1767;
  t4308 = t117*t2841;
  t4352 = t4143 + t4308;
  t4698 = -0.049*t4688;
  t4738 = -0.21*t4733;
  t4775 = 0. + t4698 + t4738;
  t4410 = t117*t2711;
  t4444 = -1.*t323*t1767*t2841;
  t4480 = t4410 + t4444;
  t4835 = -0.21*t4688;
  t4837 = 0.049*t4733;
  t4889 = 0. + t4835 + t4837;
  t3480 = -1.*t1376*t2872;
  t3583 = t323*t1767*t2872;
  t3625 = t117*t3034;
  t3896 = t1376*t2872;
  t4033 = -1.*t117*t1767*t2872;
  t4061 = t323*t3034;
  t5018 = -1.*t4352*t4775;
  t5047 = -1.*t4480*t4889;
  t6132 = t4537*t4352;
  t6153 = t4480*t4733;
  t6156 = t6132 + t6153;
  t6109 = t4537*t4480;
  t6120 = -1.*t4352*t4733;
  t6126 = t6109 + t6120;
  t6227 = Cos(var1[11]);
  t6237 = -1.*t6227;
  t6252 = 1. + t6237;
  t6267 = Sin(var1[11]);
  t4817 = t3758*t4775;
  t4909 = t3857*t4889;
  t5908 = t4537*t3758;
  t5909 = t3857*t4733;
  t5945 = t5908 + t5909;
  t6256 = -0.0016*t6252;
  t6270 = -0.2707*t6267;
  t6285 = 0. + t6256 + t6270;
  t5889 = t4537*t3857;
  t5890 = -1.*t3758*t4733;
  t5892 = t5889 + t5890;
  t6299 = -0.2707*t6252;
  t6306 = 0.0016*t6267;
  t6314 = 0. + t6299 + t6306;
  t5270 = t1376*t2711*t4537;
  t5309 = -1.*t1376*t2841*t4733;
  t5492 = t5270 + t5309;
  t5070 = -1.*t1376*t4537*t2841;
  t5084 = -1.*t1376*t2711*t4733;
  t5093 = t5070 + t5084;
  t5600 = -1.*t1376*t2711*t4775;
  t5609 = t1376*t2841*t4889;
  t5768 = t4352*t4775;
  t5836 = t4480*t4889;
  t5967 = t1376*t2711*t4775;
  t5984 = -1.*t1376*t2841*t4889;
  t6029 = -1.*t3758*t4775;
  t6053 = -1.*t3857*t4889;
  t6344 = t5945*t6285;
  t6369 = t5892*t6314;
  t6518 = t6227*t5945;
  t6528 = t5892*t6267;
  t6535 = t6518 + t6528;
  t6541 = t6227*t5892;
  t6546 = -1.*t5945*t6267;
  t6549 = t6541 + t6546;
  t6628 = Cos(var1[12]);
  t6629 = -1.*t6628;
  t6631 = 1. + t6629;
  t6635 = Sin(var1[12]);
  t6288 = -1.*t6156*t6285;
  t6318 = -1.*t6126*t6314;
  t6601 = t6227*t6156;
  t6602 = t6126*t6267;
  t6604 = t6601 + t6602;
  t6634 = 0.0184*t6631;
  t6637 = -0.7055*t6635;
  t6638 = 0. + t6634 + t6637;
  t6613 = t6227*t6126;
  t6615 = -1.*t6156*t6267;
  t6623 = t6613 + t6615;
  t6644 = -0.7055*t6631;
  t6645 = -0.0184*t6635;
  t6646 = 0. + t6644 + t6645;
  t6456 = t6227*t5093;
  t6459 = -1.*t5492*t6267;
  t6460 = t6456 + t6459;
  t6425 = t6227*t5492;
  t6436 = t5093*t6267;
  t6440 = t6425 + t6436;
  t6475 = -1.*t5492*t6285;
  t6477 = -1.*t5093*t6314;
  t6489 = t6156*t6285;
  t6507 = t6126*t6314;
  t6558 = t5492*t6285;
  t6559 = t5093*t6314;
  t6583 = -1.*t5945*t6285;
  t6585 = -1.*t5892*t6314;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0.;
  p_output1[22]=0.07996;
  p_output1[23]=0.135;
  p_output1[24]=-0.135 + t117*(0. + t239) - 0.07996*t527 - 1.*t323*(0. + t590);
  p_output1[25]=0. + 0.03155*(0. + t117) + t725;
  p_output1[26]=0. + 0.049*t323 - 0.03155*t527;
  p_output1[27]=0. - 0.09*t1376 + t1543 - 1.*t1376*(0. + t1867 + t239)*t323 - 1.*t117*t1376*(0. + t1948 + t590);
  p_output1[28]=0. - 0.09*t117*t1767 + t2122 + t1767*(0. + t2241 + t2257) + t2384 - 0.049*t323 - 1.*t1376*(0. + t2132 + t2184)*t323;
  p_output1[29]=0. + t2467 - 1.*t117*t1376*(0. + t2482 + t2491) + t1767*(0. + t2627 + t2641) - 0.09*t1767*t323 + t725;
  p_output1[30]=0. + t1543 - 0.21*t1376*t2711 - 0.049*t1376*t2841 - 1.*t1376*(0. + t1867 + t239 + t3202 + t3229)*t323 - 1.*t117*t1376*(0. + t1948 + t2891 + t3059 + t590);
  p_output1[31]=0. + t2122 + t2384 - 1.*t1376*t323*(0. + t2132 + t2184 + t3480) + t1767*(0. + t2241 + t2257 + t3583 + t3625) - 0.21*t3758 + 0.049*t3857;
  p_output1[32]=0. + t2467 - 1.*t117*t1376*(0. + t2482 + t2491 + t3896) + t1767*(0. + t2627 + t2641 + t4033 + t4061) - 0.21*t4352 + 0.049*t4480;
  p_output1[33]=0. + t1543 - 1.*t1376*t323*(0. + t1867 + t239 + t3202 + t3229 + t4817 + t4909) + 0.0016*t5093 - 0.2707*t5492 - 1.*t117*t1376*(0. + t1948 + t2891 + t3059 + t5018 + t5047 + t590);
  p_output1[34]=0. + t2122 + t2384 - 1.*t1376*t323*(0. + t2132 + t2184 + t3480 + t5600 + t5609) + t1767*(0. + t2241 + t2257 + t3583 + t3625 + t5768 + t5836) + 0.0016*t5892 - 0.2707*t5945;
  p_output1[35]=0. + t2467 - 1.*t117*t1376*(0. + t2482 + t2491 + t3896 + t5967 + t5984) + t1767*(0. + t2627 + t2641 + t4033 + t4061 + t6029 + t6053) + 0.0016*t6126 - 0.2707*t6156;
  p_output1[36]=0. + t1543 - 1.*t117*t1376*(0. + t1948 + t2891 + t3059 + t5018 + t5047 + t590 + t6288 + t6318) - 1.*t1376*t323*(0. + t1867 + t239 + t3202 + t3229 + t4817 + t4909 + t6344 + t6369) - 0.7055*t6440 - 0.0184*t6460;
  p_output1[37]=0. + t2122 + t2384 - 1.*t1376*t323*(0. + t2132 + t2184 + t3480 + t5600 + t5609 + t6475 + t6477) + t1767*(0. + t2241 + t2257 + t3583 + t3625 + t5768 + t5836 + t6489 + t6507) - 0.7055*t6535 - 0.0184*t6549;
  p_output1[38]=0. + t2467 - 1.*t117*t1376*(0. + t2482 + t2491 + t3896 + t5967 + t5984 + t6558 + t6559) + t1767*(0. + t2627 + t2641 + t4033 + t4061 + t6029 + t6053 + t6583 + t6585) - 0.7055*t6604 - 0.0184*t6623;
  p_output1[39]=0. + t1543 + 0.0216*(t6460*t6628 - 1.*t6440*t6635) - 1.1135*(t6440*t6628 + t6460*t6635) - 1.*t1376*t323*(0. + t1867 + t239 + t3202 + t3229 + t4817 + t4909 + t6344 + t6369 + t6535*t6638 + t6549*t6646) - 1.*t117*t1376*(0. + t1948 + t2891 + t3059 + t5018 + t5047 + t590 + t6288 + t6318 - 1.*t6604*t6638 - 1.*t6623*t6646);
  p_output1[40]=0. + t2122 + t2384 + 0.0216*(t6549*t6628 - 1.*t6535*t6635) - 1.1135*(t6535*t6628 + t6549*t6635) - 1.*t1376*t323*(0. + t2132 + t2184 + t3480 + t5600 + t5609 + t6475 + t6477 - 1.*t6440*t6638 - 1.*t6460*t6646) + t1767*(0. + t2241 + t2257 + t3583 + t3625 + t5768 + t5836 + t6489 + t6507 + t6604*t6638 + t6623*t6646);
  p_output1[41]=0. + t2467 + 0.0216*(t6623*t6628 - 1.*t6604*t6635) - 1.1135*(t6604*t6628 + t6623*t6635) - 1.*t117*t1376*(0. + t2482 + t2491 + t3896 + t5967 + t5984 + t6558 + t6559 + t6440*t6638 + t6460*t6646) + t1767*(0. + t2627 + t2641 + t4033 + t4061 + t6029 + t6053 + t6583 + t6585 - 1.*t6535*t6638 - 1.*t6549*t6646);
}



void Jvs_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
