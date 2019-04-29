/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 23:11:27 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jvb_VectorNav_to_RightToeBottom_src.h"

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
  double t1129;
  double t1194;
  double t1680;
  double t1136;
  double t1523;
  double t1582;
  double t1120;
  double t1702;
  double t1793;
  double t1923;
  double t2259;
  double t1605;
  double t2039;
  double t2080;
  double t1118;
  double t2444;
  double t2549;
  double t2638;
  double t2991;
  double t2209;
  double t2826;
  double t2890;
  double t932;
  double t3061;
  double t3153;
  double t3256;
  double t351;
  double t742;
  double t3451;
  double t5217;
  double t5257;
  double t4954;
  double t5056;
  double t5281;
  double t5298;
  double t5308;
  double t5347;
  double t5365;
  double t5400;
  double t5425;
  double t5438;
  double t4683;
  double t4890;
  double t5080;
  double t5212;
  double t5355;
  double t5454;
  double t5487;
  double t5531;
  double t5532;
  double t5535;
  double t5541;
  double t5551;
  double t4456;
  double t4516;
  double t4940;
  double t4945;
  double t5501;
  double t5557;
  double t5567;
  double t5575;
  double t5581;
  double t5591;
  double t5599;
  double t5603;
  double t4043;
  double t2967;
  double t3258;
  double t3330;
  double t3352;
  double t3492;
  double t3510;
  double t3514;
  double t3532;
  double t3539;
  double t3854;
  double t3902;
  double t4252;
  double t4309;
  double t4357;
  double t4423;
  double t4538;
  double t4635;
  double t5568;
  double t5609;
  double t5613;
  double t5620;
  double t5624;
  double t5632;
  double t5635;
  double t5639;
  double t5641;
  double t5643;
  double t5644;
  double t5768;
  double t5776;
  double t5777;
  double t5764;
  double t5781;
  double t5785;
  double t5798;
  double t5799;
  double t5787;
  double t5808;
  double t5812;
  double t5819;
  double t5820;
  double t5821;
  double t3585;
  double t3690;
  double t3941;
  double t4206;
  double t5653;
  double t5656;
  double t5815;
  double t5822;
  double t5825;
  double t5827;
  double t5830;
  double t5832;
  double t5836;
  double t5840;
  double t5841;
  double t5842;
  double t5849;
  double t5670;
  double t5684;
  double t5688;
  double t5693;
  double t5695;
  double t5734;
  double t5735;
  double t5744;
  double t5748;
  double t5754;
  double t5879;
  double t5664;
  double t5665;
  double t5709;
  double t5718;
  double t5727;
  double t5868;
  double t5869;
  double t5871;
  double t5886;
  double t5888;
  double t5859;
  double t5863;
  double t5874;
  double t5756;
  t1129 = Cos(var1[13]);
  t1194 = Sin(var1[13]);
  t1680 = Cos(var1[12]);
  t1136 = 0.642788*t1129;
  t1523 = -0.766044*t1194;
  t1582 = t1136 + t1523;
  t1120 = Sin(var1[12]);
  t1702 = -0.766044*t1129;
  t1793 = -0.642788*t1194;
  t1923 = t1702 + t1793;
  t2259 = Cos(var1[11]);
  t1605 = -1.*t1120*t1582;
  t2039 = t1680*t1923;
  t2080 = 0. + t1605 + t2039;
  t1118 = Sin(var1[11]);
  t2444 = t1680*t1582;
  t2549 = t1120*t1923;
  t2638 = 0. + t2444 + t2549;
  t2991 = Cos(var1[10]);
  t2209 = t1118*t2080;
  t2826 = t2259*t2638;
  t2890 = 0. + t2209 + t2826;
  t932 = Sin(var1[10]);
  t3061 = t2259*t2080;
  t3153 = -1.*t1118*t2638;
  t3256 = 0. + t3061 + t3153;
  t351 = Cos(var1[8]);
  t742 = Cos(var1[9]);
  t3451 = Sin(var1[9]);
  t5217 = -1.*t1129;
  t5257 = 1. + t5217;
  t4954 = -1.*t1680;
  t5056 = 1. + t4954;
  t5281 = -0.0216*t5257;
  t5298 = 0.0306*t1129;
  t5308 = 0.01770000000000005*t1194;
  t5347 = 0. + t5281 + t5298 + t5308;
  t5365 = -1.1135*t5257;
  t5400 = -1.1312*t1129;
  t5425 = 0.052199999999999996*t1194;
  t5438 = 0. + t5365 + t5400 + t5425;
  t4683 = -1.*t2259;
  t4890 = 1. + t4683;
  t5080 = -0.7055*t5056;
  t5212 = -0.0184*t1120;
  t5355 = t1120*t5347;
  t5454 = t1680*t5438;
  t5487 = 0. + t5080 + t5212 + t5355 + t5454;
  t5531 = 0.0184*t5056;
  t5532 = -0.7055*t1120;
  t5535 = t1680*t5347;
  t5541 = -1.*t1120*t5438;
  t5551 = 0. + t5531 + t5532 + t5535 + t5541;
  t4456 = -1.*t2991;
  t4516 = 1. + t4456;
  t4940 = -0.0016*t4890;
  t4945 = -0.2707*t1118;
  t5501 = -1.*t1118*t5487;
  t5557 = t2259*t5551;
  t5567 = 0. + t4940 + t4945 + t5501 + t5557;
  t5575 = -0.2707*t4890;
  t5581 = 0.0016*t1118;
  t5591 = t2259*t5487;
  t5599 = t1118*t5551;
  t5603 = 0. + t5575 + t5581 + t5591 + t5599;
  t4043 = Sin(var1[8]);
  t2967 = -1.*t932*t2890;
  t3258 = t2991*t3256;
  t3330 = 0. + t2967 + t3258;
  t3352 = t742*t3330;
  t3492 = t2991*t2890;
  t3510 = t932*t3256;
  t3514 = 0. + t3492 + t3510;
  t3532 = -1.*t3451*t3514;
  t3539 = 0. + t3352 + t3532;
  t3854 = -1.*t351;
  t3902 = 1. + t3854;
  t4252 = -1.*t742;
  t4309 = 1. + t4252;
  t4357 = -0.049*t4309;
  t4423 = -0.09*t3451;
  t4538 = -0.21*t4516;
  t4635 = 0.049*t932;
  t5568 = t932*t5567;
  t5609 = t2991*t5603;
  t5613 = 0. + t4538 + t4635 + t5568 + t5609;
  t5620 = -1.*t3451*t5613;
  t5624 = -0.049*t4516;
  t5632 = -0.21*t932;
  t5635 = t2991*t5567;
  t5639 = -1.*t932*t5603;
  t5641 = 0. + t5624 + t5632 + t5635 + t5639;
  t5643 = t742*t5641;
  t5644 = 0. + t4357 + t4423 + t5620 + t5643;
  t5768 = 0.766044*t1129;
  t5776 = 0.642788*t1194;
  t5777 = t5768 + t5776;
  t5764 = t1120*t1582;
  t5781 = t1680*t5777;
  t5785 = 0. + t5764 + t5781;
  t5798 = -1.*t1120*t5777;
  t5799 = 0. + t2444 + t5798;
  t5787 = -1.*t1118*t5785;
  t5808 = t2259*t5799;
  t5812 = 0. + t5787 + t5808;
  t5819 = t2259*t5785;
  t5820 = t1118*t5799;
  t5821 = 0. + t5819 + t5820;
  t3585 = t351*t3539;
  t3690 = 0. + t3585;
  t3941 = -0.049*t3902;
  t4206 = -0.004500000000000004*t4043;
  t5653 = t351*t5644;
  t5656 = 0. + t3941 + t4206 + t5653;
  t5815 = t932*t5812;
  t5822 = t2991*t5821;
  t5825 = 0. + t5815 + t5822;
  t5827 = -1.*t3451*t5825;
  t5830 = t2991*t5812;
  t5832 = -1.*t932*t5821;
  t5836 = 0. + t5830 + t5832;
  t5840 = t742*t5836;
  t5841 = 0. + t5827 + t5840;
  t5842 = t351*t5841;
  t5849 = 0. + t5842;
  t5670 = -0.135*t3902;
  t5684 = -0.1305*t351;
  t5688 = 0.049*t4043;
  t5693 = t4043*t5644;
  t5695 = 0. + t5670 + t5684 + t5688 + t5693;
  t5734 = -0.09*t4309;
  t5735 = 0.049*t3451;
  t5744 = t742*t5613;
  t5748 = t3451*t5641;
  t5754 = 0. + t5734 + t5735 + t5744 + t5748;
  t5879 = 0. + t4043;
  t5664 = t4043*t3539;
  t5665 = 0. + t5664;
  t5709 = t3451*t3330;
  t5718 = t742*t3514;
  t5727 = 0. + t5709 + t5718;
  t5868 = t742*t5825;
  t5869 = t3451*t5836;
  t5871 = 0. + t5868 + t5869;
  t5886 = -1.*t351;
  t5888 = 0. + t5886;
  t5859 = t4043*t5841;
  t5863 = 0. + t5859;
  t5874 = -1.*t5754*t5871;
  t5756 = t5727*t5754;
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
  p_output1[21]=0. + (t3690*t5656 + t5665*t5695 + t5756)*t5849 + t3690*(-1.*t5656*t5849 - 1.*t5695*t5863 + t5874);
  p_output1[22]=0.135*t5871 + (-1.*t3690*t5656 - 1.*t5665*t5695 - 1.*t5727*t5754)*t5879 + t3690*(0. + t5656*t5879 + t5695*t5888);
  p_output1[23]=0.135*t5727 + (t5656*t5849 + t5695*t5863 + t5754*t5871)*t5879 + t5849*(0. - 1.*t5656*t5879 - 1.*t5695*t5888);
  p_output1[24]=-0.049 + (0. + t3539*t5644 + t5756)*t5871 + t5727*(0. - 1.*t5644*t5841 + t5874);
  p_output1[25]=0. + 0.1305*t5727 - 0.135*t5841;
  p_output1[26]=0. - 0.135*t3539 - 0.1305*t5871;
  p_output1[27]=0.;
  p_output1[28]=0. - 1.*t3514*t5613 - 1.*t3330*t5641 + 0.049*t5825 - 0.09*t5836;
  p_output1[29]=0. - 0.09*t3330 + 0.049*t3514 + t5613*t5825 + t5641*t5836;
  p_output1[30]=0.;
  p_output1[31]=0. - 1.*t3256*t5567 - 1.*t2890*t5603 - 0.21*t5812 + 0.049*t5821;
  p_output1[32]=0. + 0.049*t2890 - 0.21*t3256 + t5567*t5812 + t5603*t5821;
  p_output1[33]=0.;
  p_output1[34]=0. - 1.*t2638*t5487 - 1.*t2080*t5551 + 0.0016*t5785 - 0.2707*t5799;
  p_output1[35]=0. - 0.2707*t2080 + 0.0016*t2638 + t5487*t5785 + t5551*t5799;
  p_output1[36]=0.;
  p_output1[37]=0. - 0.7055*t1582 - 1.*t1923*t5347 - 1.*t1582*t5438 - 0.0184*t5777;
  p_output1[38]=0. - 0.0184*t1582 - 0.7055*t1923 + t1582*t5347 + t5438*t5777;
  p_output1[39]=0.;
  p_output1[40]=0.05136484440000011;
  p_output1[41]=0.019994554799999897;
}



void Jvb_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
