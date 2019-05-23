/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:11:58 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottom_to_RightToeBottom.h"

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
static void output1(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  double t578;
  double t743;
  double t715;
  double t718;
  double t759;
  double t836;
  double t736;
  double t795;
  double t819;
  double t512;
  double t855;
  double t862;
  double t864;
  double t904;
  double t829;
  double t866;
  double t879;
  double t511;
  double t916;
  double t939;
  double t1071;
  double t1121;
  double t897;
  double t1082;
  double t1084;
  double t510;
  double t1125;
  double t1132;
  double t1167;
  double t1425;
  double t1339;
  double t1381;
  double t1395;
  double t1433;
  double t1442;
  double t1518;
  double t1527;
  double t1551;
  double t1517;
  double t1554;
  double t1574;
  double t1643;
  double t1648;
  double t1708;
  double t1582;
  double t1762;
  double t1781;
  double t1849;
  double t1862;
  double t1867;
  double t1830;
  double t1901;
  double t1902;
  double t1929;
  double t1974;
  double t1979;
  double t1091;
  double t1176;
  double t1189;
  double t1277;
  double t1284;
  double t1289;
  double t1913;
  double t2021;
  double t2039;
  double t2058;
  double t2122;
  double t2168;
  double t2339;
  double t2342;
  double t2351;
  double t2358;
  double t2377;
  double t2379;
  double t2352;
  double t2393;
  double t2408;
  double t2421;
  double t2446;
  double t2455;
  double t2410;
  double t2467;
  double t2475;
  double t2514;
  double t2518;
  double t2542;
  double t2485;
  double t2546;
  double t2551;
  double t2561;
  double t2590;
  double t2591;
  double t2237;
  double t2238;
  double t2245;
  double t2052;
  double t2195;
  double t2200;
  double t2553;
  double t2598;
  double t2608;
  double t2620;
  double t2621;
  double t2639;
  double t1219;
  double t1325;
  double t1334;
  double t2270;
  double t2291;
  double t2313;
  double t2214;
  double t2318;
  double t319;
  double t2753;
  double t2757;
  double t2773;
  double t2617;
  double t2647;
  double t2652;
  double t2653;
  double t2705;
  double t2720;
  double t2752;
  double t2799;
  double t2825;
  double t2831;
  double t2841;
  double t2868;
  double t2904;
  double t2933;
  double t2941;
  double t497;
  double t2996;
  double t2959;
  double t3410;
  double t3420;
  double t3387;
  double t3480;
  double t3483;
  double t3486;
  double t3414;
  double t3435;
  double t3440;
  double t3487;
  double t3385;
  double t3563;
  double t3570;
  double t3573;
  double t3449;
  double t3529;
  double t3536;
  double t3575;
  double t3374;
  double t3609;
  double t3617;
  double t3627;
  double t3546;
  double t3589;
  double t3593;
  double t3634;
  double t3353;
  double t3649;
  double t3655;
  double t3658;
  double t3606;
  double t3638;
  double t3639;
  double t3659;
  double t2333;
  double t3781;
  double t3787;
  double t3789;
  double t3738;
  double t3744;
  double t3761;
  double t3804;
  double t3807;
  double t3808;
  double t3775;
  double t3797;
  double t3799;
  double t3837;
  double t3838;
  double t3846;
  double t3802;
  double t3811;
  double t3823;
  double t3879;
  double t3885;
  double t3890;
  double t3825;
  double t3850;
  double t3867;
  double t2977;
  double t2987;
  double t2988;
  double t4003;
  double t4014;
  double t4015;
  double t3969;
  double t3990;
  double t3992;
  double t4055;
  double t4057;
  double t4060;
  double t3993;
  double t4022;
  double t4029;
  double t4076;
  double t4078;
  double t4091;
  double t4051;
  double t4064;
  double t4066;
  double t3019;
  double t3025;
  double t3026;
  double t3648;
  double t3675;
  double t3679;
  double t3680;
  double t3682;
  double t3686;
  double t3693;
  double t3719;
  double t3729;
  double t3077;
  double t3081;
  double t3084;
  double t4072;
  double t4093;
  double t4094;
  double t4101;
  double t4121;
  double t4123;
  double t4125;
  double t4130;
  double t4131;
  double t3102;
  double t3104;
  double t3106;
  double t3869;
  double t3902;
  double t3907;
  double t3920;
  double t3944;
  double t3955;
  double t3956;
  double t3960;
  double t3961;
  double t3138;
  double t3166;
  double t3167;
  double t3213;
  double t3249;
  double t3266;
  double t3274;
  double t3301;
  double t3302;
  double t3311;
  double t4201;
  double t4202;
  double t4205;
  double t4278;
  double t4292;
  double t4296;
  double t4209;
  double t4212;
  double t4255;
  t578 = Cos(var1[1]);
  t743 = Cos(var1[3]);
  t715 = Cos(var1[2]);
  t718 = Sin(var1[3]);
  t759 = Sin(var1[2]);
  t836 = Cos(var1[4]);
  t736 = -1.*t578*t715*t718;
  t795 = -1.*t743*t578*t759;
  t819 = t736 + t795;
  t512 = Sin(var1[4]);
  t855 = t743*t578*t715;
  t862 = -1.*t578*t718*t759;
  t864 = t855 + t862;
  t904 = Cos(var1[5]);
  t829 = t512*t819;
  t866 = t836*t864;
  t879 = t829 + t866;
  t511 = Sin(var1[5]);
  t916 = t836*t819;
  t939 = -1.*t512*t864;
  t1071 = t916 + t939;
  t1121 = Cos(var1[6]);
  t897 = -1.*t511*t879;
  t1082 = t904*t1071;
  t1084 = t897 + t1082;
  t510 = Sin(var1[6]);
  t1125 = t904*t879;
  t1132 = t511*t1071;
  t1167 = t1125 + t1132;
  t1425 = Sin(var1[0]);
  t1339 = Cos(var1[0]);
  t1381 = Sin(var1[1]);
  t1395 = t1339*t715*t1381;
  t1433 = -1.*t1425*t759;
  t1442 = t1395 + t1433;
  t1518 = -1.*t715*t1425;
  t1527 = -1.*t1339*t1381*t759;
  t1551 = t1518 + t1527;
  t1517 = -1.*t718*t1442;
  t1554 = t743*t1551;
  t1574 = t1517 + t1554;
  t1643 = t743*t1442;
  t1648 = t718*t1551;
  t1708 = t1643 + t1648;
  t1582 = t512*t1574;
  t1762 = t836*t1708;
  t1781 = t1582 + t1762;
  t1849 = t836*t1574;
  t1862 = -1.*t512*t1708;
  t1867 = t1849 + t1862;
  t1830 = -1.*t511*t1781;
  t1901 = t904*t1867;
  t1902 = t1830 + t1901;
  t1929 = t904*t1781;
  t1974 = t511*t1867;
  t1979 = t1929 + t1974;
  t1091 = t510*t1084;
  t1176 = t1121*t1167;
  t1189 = t1091 + t1176;
  t1277 = t1121*t1084;
  t1284 = -1.*t510*t1167;
  t1289 = t1277 + t1284;
  t1913 = t510*t1902;
  t2021 = t1121*t1979;
  t2039 = t1913 + t2021;
  t2058 = t1121*t1902;
  t2122 = -1.*t510*t1979;
  t2168 = t2058 + t2122;
  t2339 = t715*t1425*t1381;
  t2342 = t1339*t759;
  t2351 = t2339 + t2342;
  t2358 = t1339*t715;
  t2377 = -1.*t1425*t1381*t759;
  t2379 = t2358 + t2377;
  t2352 = -1.*t718*t2351;
  t2393 = t743*t2379;
  t2408 = t2352 + t2393;
  t2421 = t743*t2351;
  t2446 = t718*t2379;
  t2455 = t2421 + t2446;
  t2410 = t512*t2408;
  t2467 = t836*t2455;
  t2475 = t2410 + t2467;
  t2514 = t836*t2408;
  t2518 = -1.*t512*t2455;
  t2542 = t2514 + t2518;
  t2485 = -1.*t511*t2475;
  t2546 = t904*t2542;
  t2551 = t2485 + t2546;
  t2561 = t904*t2475;
  t2590 = t511*t2542;
  t2591 = t2561 + t2590;
  t2237 = -0.766044*t1189;
  t2238 = 0.642788*t1289;
  t2245 = t2237 + t2238;
  t2052 = -0.766044*t2039;
  t2195 = 0.642788*t2168;
  t2200 = t2052 + t2195;
  t2553 = t510*t2551;
  t2598 = t1121*t2591;
  t2608 = t2553 + t2598;
  t2620 = t1121*t2551;
  t2621 = -1.*t510*t2591;
  t2639 = t2620 + t2621;
  t1219 = 0.642788*t1189;
  t1325 = 0.766044*t1289;
  t1334 = t1219 + t1325;
  t2270 = 0.642788*t2039;
  t2291 = 0.766044*t2168;
  t2313 = t2270 + t2291;
  t2214 = t1334*t2200;
  t2318 = -1.*t2245*t2313;
  t319 = Cos(var1[8]);
  t2753 = -0.766044*t2608;
  t2757 = 0.642788*t2639;
  t2773 = t2753 + t2757;
  t2617 = 0.642788*t2608;
  t2647 = 0.766044*t2639;
  t2652 = t2617 + t2647;
  t2653 = t1339*t578*t2245;
  t2705 = t1381*t2200;
  t2720 = t2653 + t2705;
  t2752 = -1.*t2652*t2720;
  t2799 = t1339*t578*t1334;
  t2825 = t1381*t2313;
  t2831 = t2799 + t2825;
  t2841 = t2773*t2831;
  t2868 = t2214 + t2318;
  t2904 = -1.*t578*t1425*t2868;
  t2933 = 0. + t2752 + t2841 + t2904;
  t2941 = 1/t2933;
  t497 = Sin(var1[7]);
  t2996 = Sin(var1[8]);
  t2959 = Cos(var1[7]);
  t3410 = Cos(var1[9]);
  t3420 = Sin(var1[9]);
  t3387 = Cos(var1[10]);
  t3480 = t2959*t3410;
  t3483 = -1.*t497*t2996*t3420;
  t3486 = t3480 + t3483;
  t3414 = t3410*t497*t2996;
  t3435 = t2959*t3420;
  t3440 = t3414 + t3435;
  t3487 = Sin(var1[10]);
  t3385 = Cos(var1[11]);
  t3563 = t3387*t3486;
  t3570 = -1.*t3440*t3487;
  t3573 = t3563 + t3570;
  t3449 = t3387*t3440;
  t3529 = t3486*t3487;
  t3536 = t3449 + t3529;
  t3575 = Sin(var1[11]);
  t3374 = Cos(var1[12]);
  t3609 = t3385*t3573;
  t3617 = -1.*t3536*t3575;
  t3627 = t3609 + t3617;
  t3546 = t3385*t3536;
  t3589 = t3573*t3575;
  t3593 = t3546 + t3589;
  t3634 = Sin(var1[12]);
  t3353 = Cos(var1[13]);
  t3649 = t3374*t3627;
  t3655 = -1.*t3593*t3634;
  t3658 = t3649 + t3655;
  t3606 = t3374*t3593;
  t3638 = t3627*t3634;
  t3639 = t3606 + t3638;
  t3659 = Sin(var1[13]);
  t2333 = 0. + t2214 + t2318;
  t3781 = -1.*t3410*t497;
  t3787 = -1.*t2959*t2996*t3420;
  t3789 = t3781 + t3787;
  t3738 = t2959*t3410*t2996;
  t3744 = -1.*t497*t3420;
  t3761 = t3738 + t3744;
  t3804 = t3387*t3789;
  t3807 = -1.*t3761*t3487;
  t3808 = t3804 + t3807;
  t3775 = t3387*t3761;
  t3797 = t3789*t3487;
  t3799 = t3775 + t3797;
  t3837 = t3385*t3808;
  t3838 = -1.*t3799*t3575;
  t3846 = t3837 + t3838;
  t3802 = t3385*t3799;
  t3811 = t3808*t3575;
  t3823 = t3802 + t3811;
  t3879 = t3374*t3846;
  t3885 = -1.*t3823*t3634;
  t3890 = t3879 + t3885;
  t3825 = t3374*t3823;
  t3850 = t3846*t3634;
  t3867 = t3825 + t3850;
  t2977 = -1.*t1334*t2773;
  t2987 = t2245*t2652;
  t2988 = 0. + t2977 + t2987;
  t4003 = -1.*t319*t3387*t3420;
  t4014 = -1.*t319*t3410*t3487;
  t4015 = t4003 + t4014;
  t3969 = t319*t3410*t3387;
  t3990 = -1.*t319*t3420*t3487;
  t3992 = t3969 + t3990;
  t4055 = t3385*t4015;
  t4057 = -1.*t3992*t3575;
  t4060 = t4055 + t4057;
  t3993 = t3385*t3992;
  t4022 = t4015*t3575;
  t4029 = t3993 + t4022;
  t4076 = t3374*t4060;
  t4078 = -1.*t4029*t3634;
  t4091 = t4076 + t4078;
  t4051 = t3374*t4029;
  t4064 = t4060*t3634;
  t4066 = t4051 + t4064;
  t3019 = t2313*t2773;
  t3025 = -1.*t2200*t2652;
  t3026 = 0. + t3019 + t3025;
  t3648 = t3353*t3639;
  t3675 = t3658*t3659;
  t3679 = t3648 + t3675;
  t3680 = 0.642788*t3679;
  t3682 = t3353*t3658;
  t3686 = -1.*t3639*t3659;
  t3693 = t3682 + t3686;
  t3719 = 0.766044*t3693;
  t3729 = t3680 + t3719;
  t3077 = -1.*t1339*t578*t2245;
  t3081 = -1.*t1381*t2200;
  t3084 = 0. + t3077 + t3081;
  t4072 = t3353*t4066;
  t4093 = t4091*t3659;
  t4094 = t4072 + t4093;
  t4101 = 0.642788*t4094;
  t4121 = t3353*t4091;
  t4123 = -1.*t4066*t3659;
  t4125 = t4121 + t4123;
  t4130 = 0.766044*t4125;
  t4131 = t4101 + t4130;
  t3102 = -1.*t578*t1425*t2200;
  t3104 = t1339*t578*t2773;
  t3106 = 0. + t3102 + t3104;
  t3869 = t3353*t3867;
  t3902 = t3890*t3659;
  t3907 = t3869 + t3902;
  t3920 = 0.642788*t3907;
  t3944 = t3353*t3890;
  t3955 = -1.*t3867*t3659;
  t3956 = t3944 + t3955;
  t3960 = 0.766044*t3956;
  t3961 = t3920 + t3960;
  t3138 = t578*t1425*t2245;
  t3166 = t1381*t2773;
  t3167 = 0. + t3138 + t3166;
  t3213 = 0. + t2799 + t2825;
  t3249 = t578*t1425*t2313;
  t3266 = -1.*t1339*t578*t2652;
  t3274 = 0. + t3249 + t3266;
  t3301 = -1.*t578*t1425*t1334;
  t3302 = -1.*t1381*t2652;
  t3311 = 0. + t3301 + t3302;
  t4201 = -0.766044*t3679;
  t4202 = 0.642788*t3693;
  t4205 = t4201 + t4202;
  t4278 = -0.766044*t4094;
  t4292 = 0.642788*t4125;
  t4296 = t4278 + t4292;
  t4209 = -0.766044*t3907;
  t4212 = 0.642788*t3956;
  t4255 = t4209 + t4212;

  p_output1(0)=0. + t2941*t2996*t3026 - 1.*t2941*t2959*t2988*t319 - 1.*t2333*t2941*t319*t497;
  p_output1(1)=0. + t2941*t2996*t3106 - 1.*t2941*t2959*t3167*t319 - 1.*t2941*t3084*t319*t497;
  p_output1(2)=0. + t2941*t2996*t3274 - 1.*t2941*t2959*t319*t3311 - 1.*t2941*t319*t3213*t497;
  p_output1(3)=0. + t2333*t2941*t3729 + t2941*t2988*t3961 + t2941*t3026*t4131;
  p_output1(4)=0. + t2941*t3084*t3729 + t2941*t3167*t3961 + t2941*t3106*t4131;
  p_output1(5)=0. + t2941*t3213*t3729 + t2941*t3311*t3961 + t2941*t3274*t4131;
  p_output1(6)=0. + t2333*t2941*t4205 + t2941*t2988*t4255 + t2941*t3026*t4296;
  p_output1(7)=0. + t2941*t3084*t4205 + t2941*t3167*t4255 + t2941*t3106*t4296;
  p_output1(8)=0. + t2941*t3213*t4205 + t2941*t3311*t4255 + t2941*t3274*t4296;
}


       
Eigen::Matrix<double,3,3> R_LeftToeBottom_to_RightToeBottom(const Eigen::Matrix<double,14,1> &var1)
//void R_LeftToeBottom_to_RightToeBottom(Eigen::Matrix<double,3,3> &p_output1, const Eigen::Matrix<double,14,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,3>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



