/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:44:50 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightToeBack.h"

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
  double t176;
  double t1202;
  double t1449;
  double t1255;
  double t1451;
  double t775;
  double t851;
  double t912;
  double t940;
  double t1083;
  double t1288;
  double t1489;
  double t1507;
  double t1766;
  double t1940;
  double t2032;
  double t2040;
  double t455;
  double t2200;
  double t2231;
  double t2499;
  double t2692;
  double t2773;
  double t2806;
  double t2908;
  double t3011;
  double t3040;
  double t3066;
  double t3366;
  double t3375;
  double t3416;
  double t3489;
  double t3529;
  double t3645;
  double t3687;
  double t3863;
  double t3865;
  double t3869;
  double t4214;
  double t4275;
  double t4408;
  double t4473;
  double t4483;
  double t4490;
  double t4532;
  double t4587;
  double t4620;
  double t4635;
  double t4719;
  double t4745;
  double t4764;
  double t4838;
  double t4859;
  double t4860;
  double t4877;
  double t4904;
  double t4921;
  double t4945;
  double t5064;
  double t5078;
  double t5095;
  double t5130;
  double t5135;
  double t5147;
  double t5153;
  double t5184;
  double t5194;
  double t5203;
  double t5242;
  double t5243;
  double t5247;
  double t913;
  double t972;
  double t974;
  double t1146;
  double t1184;
  double t1779;
  double t1786;
  double t1880;
  double t1882;
  double t2107;
  double t2129;
  double t2176;
  double t5315;
  double t5316;
  double t5331;
  double t5334;
  double t5346;
  double t5356;
  double t2898;
  double t2942;
  double t2953;
  double t5364;
  double t5375;
  double t5377;
  double t3293;
  double t3298;
  double t3306;
  double t3681;
  double t3723;
  double t3781;
  double t5381;
  double t5385;
  double t5400;
  double t5453;
  double t5457;
  double t5463;
  double t3928;
  double t4003;
  double t4058;
  double t4496;
  double t4533;
  double t4570;
  double t5468;
  double t5477;
  double t5491;
  double t5510;
  double t5528;
  double t5543;
  double t4684;
  double t4687;
  double t4688;
  double t4865;
  double t4880;
  double t4886;
  double t5551;
  double t5562;
  double t5564;
  double t5575;
  double t5576;
  double t5584;
  double t5025;
  double t5028;
  double t5061;
  double t5151;
  double t5164;
  double t5165;
  double t5586;
  double t5587;
  double t5598;
  double t5602;
  double t5608;
  double t5609;
  double t5225;
  double t5238;
  double t5240;
  double t5627;
  double t5630;
  double t5647;
  double t5665;
  double t5666;
  double t5672;
  double t5771;
  double t5776;
  double t5789;
  double t5796;
  double t5799;
  double t5805;
  double t5837;
  double t5848;
  double t5858;
  double t5868;
  double t5870;
  double t5872;
  double t5888;
  double t5891;
  double t5896;
  double t5902;
  double t5903;
  double t5904;
  double t5915;
  double t5920;
  double t5930;
  double t5935;
  double t5939;
  double t5940;
  double t5949;
  double t5950;
  double t5956;
  double t5966;
  double t5968;
  double t5969;
  double t5981;
  double t5984;
  double t5985;
  t176 = Cos(var1[3]);
  t1202 = Cos(var1[5]);
  t1449 = Sin(var1[3]);
  t1255 = Sin(var1[4]);
  t1451 = Sin(var1[5]);
  t775 = Cos(var1[14]);
  t851 = -1.*t775;
  t912 = 1. + t851;
  t940 = Sin(var1[14]);
  t1083 = Sin(var1[13]);
  t1288 = t176*t1202*t1255;
  t1489 = t1449*t1451;
  t1507 = t1288 + t1489;
  t1766 = Cos(var1[13]);
  t1940 = -1.*t1202*t1449;
  t2032 = t176*t1255*t1451;
  t2040 = t1940 + t2032;
  t455 = Cos(var1[4]);
  t2200 = t1083*t1507;
  t2231 = t1766*t2040;
  t2499 = t2200 + t2231;
  t2692 = Cos(var1[15]);
  t2773 = -1.*t2692;
  t2806 = 1. + t2773;
  t2908 = Sin(var1[15]);
  t3011 = t1766*t1507;
  t3040 = -1.*t1083*t2040;
  t3066 = t3011 + t3040;
  t3366 = t775*t176*t455;
  t3375 = t940*t2499;
  t3416 = t3366 + t3375;
  t3489 = Cos(var1[16]);
  t3529 = -1.*t3489;
  t3645 = 1. + t3529;
  t3687 = Sin(var1[16]);
  t3863 = t2908*t3066;
  t3865 = t2692*t3416;
  t3869 = t3863 + t3865;
  t4214 = t2692*t3066;
  t4275 = -1.*t2908*t3416;
  t4408 = t4214 + t4275;
  t4473 = Cos(var1[17]);
  t4483 = -1.*t4473;
  t4490 = 1. + t4483;
  t4532 = Sin(var1[17]);
  t4587 = -1.*t3687*t3869;
  t4620 = t3489*t4408;
  t4635 = t4587 + t4620;
  t4719 = t3489*t3869;
  t4745 = t3687*t4408;
  t4764 = t4719 + t4745;
  t4838 = Cos(var1[18]);
  t4859 = -1.*t4838;
  t4860 = 1. + t4859;
  t4877 = Sin(var1[18]);
  t4904 = t4532*t4635;
  t4921 = t4473*t4764;
  t4945 = t4904 + t4921;
  t5064 = t4473*t4635;
  t5078 = -1.*t4532*t4764;
  t5095 = t5064 + t5078;
  t5130 = Cos(var1[19]);
  t5135 = -1.*t5130;
  t5147 = 1. + t5135;
  t5153 = Sin(var1[19]);
  t5184 = -1.*t4877*t4945;
  t5194 = t4838*t5095;
  t5203 = t5184 + t5194;
  t5242 = t4838*t4945;
  t5243 = t4877*t5095;
  t5247 = t5242 + t5243;
  t913 = -0.049*t912;
  t972 = -0.135*t940;
  t974 = 0. + t913 + t972;
  t1146 = 0.135*t1083;
  t1184 = 0. + t1146;
  t1779 = -1.*t1766;
  t1786 = 1. + t1779;
  t1880 = -0.135*t1786;
  t1882 = 0. + t1880;
  t2107 = -0.135*t912;
  t2129 = 0.049*t940;
  t2176 = 0. + t2107 + t2129;
  t5315 = t1202*t1449*t1255;
  t5316 = -1.*t176*t1451;
  t5331 = t5315 + t5316;
  t5334 = t176*t1202;
  t5346 = t1449*t1255*t1451;
  t5356 = t5334 + t5346;
  t2898 = -0.09*t2806;
  t2942 = 0.049*t2908;
  t2953 = 0. + t2898 + t2942;
  t5364 = t1083*t5331;
  t5375 = t1766*t5356;
  t5377 = t5364 + t5375;
  t3293 = -0.049*t2806;
  t3298 = -0.09*t2908;
  t3306 = 0. + t3293 + t3298;
  t3681 = -0.049*t3645;
  t3723 = -0.21*t3687;
  t3781 = 0. + t3681 + t3723;
  t5381 = t1766*t5331;
  t5385 = -1.*t1083*t5356;
  t5400 = t5381 + t5385;
  t5453 = t775*t455*t1449;
  t5457 = t940*t5377;
  t5463 = t5453 + t5457;
  t3928 = -0.21*t3645;
  t4003 = 0.049*t3687;
  t4058 = 0. + t3928 + t4003;
  t4496 = -0.2707*t4490;
  t4533 = 0.0016*t4532;
  t4570 = 0. + t4496 + t4533;
  t5468 = t2908*t5400;
  t5477 = t2692*t5463;
  t5491 = t5468 + t5477;
  t5510 = t2692*t5400;
  t5528 = -1.*t2908*t5463;
  t5543 = t5510 + t5528;
  t4684 = -0.0016*t4490;
  t4687 = -0.2707*t4532;
  t4688 = 0. + t4684 + t4687;
  t4865 = 0.0184*t4860;
  t4880 = -0.7055*t4877;
  t4886 = 0. + t4865 + t4880;
  t5551 = -1.*t3687*t5491;
  t5562 = t3489*t5543;
  t5564 = t5551 + t5562;
  t5575 = t3489*t5491;
  t5576 = t3687*t5543;
  t5584 = t5575 + t5576;
  t5025 = -0.7055*t4860;
  t5028 = -0.0184*t4877;
  t5061 = 0. + t5025 + t5028;
  t5151 = -1.1135*t5147;
  t5164 = 0.0216*t5153;
  t5165 = 0. + t5151 + t5164;
  t5586 = t4532*t5564;
  t5587 = t4473*t5584;
  t5598 = t5586 + t5587;
  t5602 = t4473*t5564;
  t5608 = -1.*t4532*t5584;
  t5609 = t5602 + t5608;
  t5225 = -0.0216*t5147;
  t5238 = -1.1135*t5153;
  t5240 = 0. + t5225 + t5238;
  t5627 = -1.*t4877*t5598;
  t5630 = t4838*t5609;
  t5647 = t5627 + t5630;
  t5665 = t4838*t5598;
  t5666 = t4877*t5609;
  t5672 = t5665 + t5666;
  t5771 = t455*t1202*t1083;
  t5776 = t1766*t455*t1451;
  t5789 = t5771 + t5776;
  t5796 = t1766*t455*t1202;
  t5799 = -1.*t455*t1083*t1451;
  t5805 = t5796 + t5799;
  t5837 = -1.*t775*t1255;
  t5848 = t940*t5789;
  t5858 = t5837 + t5848;
  t5868 = t2908*t5805;
  t5870 = t2692*t5858;
  t5872 = t5868 + t5870;
  t5888 = t2692*t5805;
  t5891 = -1.*t2908*t5858;
  t5896 = t5888 + t5891;
  t5902 = -1.*t3687*t5872;
  t5903 = t3489*t5896;
  t5904 = t5902 + t5903;
  t5915 = t3489*t5872;
  t5920 = t3687*t5896;
  t5930 = t5915 + t5920;
  t5935 = t4532*t5904;
  t5939 = t4473*t5930;
  t5940 = t5935 + t5939;
  t5949 = t4473*t5904;
  t5950 = -1.*t4532*t5930;
  t5956 = t5949 + t5950;
  t5966 = -1.*t4877*t5940;
  t5968 = t4838*t5956;
  t5969 = t5966 + t5968;
  t5981 = t4838*t5940;
  t5984 = t4877*t5956;
  t5985 = t5981 + t5984;

  p_output1(0)=0. + t1184*t1507 + t1882*t2040 + t2176*t2499 + t2953*t3066 + t3306*t3416 + t3781*t3869 + t4058*t4408 + t4570*t4635 + t4688*t4764 + t4886*t4945 + t5061*t5095 + t5165*t5203 + t5240*t5247 - 0.027251*(t5153*t5203 + t5130*t5247) - 1.200144*(t5130*t5203 - 1.*t5153*t5247) - 0.1305*(t2499*t775 - 1.*t176*t455*t940) + t176*t455*t974 + var1(0);
  p_output1(1)=0. + t1184*t5331 + t1882*t5356 + t2176*t5377 + t2953*t5400 + t3306*t5463 + t3781*t5491 + t4058*t5543 + t4570*t5564 + t4688*t5584 + t4886*t5598 + t5061*t5609 + t5165*t5647 + t5240*t5672 - 0.027251*(t5153*t5647 + t5130*t5672) - 1.200144*(t5130*t5647 - 1.*t5153*t5672) - 0.1305*(t5377*t775 - 1.*t1449*t455*t940) + t1449*t455*t974 + var1(1);
  p_output1(2)=0. + t1184*t1202*t455 + t1451*t1882*t455 + t2176*t5789 + t2953*t5805 + t3306*t5858 + t3781*t5872 + t4058*t5896 + t4570*t5904 + t4688*t5930 + t4886*t5940 + t5061*t5956 + t5165*t5969 + t5240*t5985 - 0.027251*(t5153*t5969 + t5130*t5985) - 1.200144*(t5130*t5969 - 1.*t5153*t5985) - 0.1305*(t5789*t775 + t1255*t940) - 1.*t1255*t974 + var1(2);
}


       
Eigen::Matrix<double,3,1> p_RightToeBack(const Eigen::Matrix<double,20,1> &var1)
//void p_RightToeBack(Eigen::Matrix<double,3,1> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,1>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



