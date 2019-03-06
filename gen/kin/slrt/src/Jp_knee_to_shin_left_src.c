/*
 * Automatically Generated from Mathematica.
 * Tue 8 Jan 2019 22:43:35 GMT-05:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_knee_to_shin_left_src.h"

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
  double t446;
  double t562;
  double t614;
  double t427;
  double t649;
  double t68;
  double t491;
  double t703;
  double t826;
  double t873;
  double t880;
  double t917;
  double t948;
  double t1325;
  double t1369;
  double t1372;
  double t1717;
  double t1179;
  double t1196;
  double t1215;
  double t1873;
  double t2236;
  double t2238;
  double t2245;
  double t2300;
  double t2197;
  double t2223;
  double t2227;
  double t2460;
  double t2487;
  double t2501;
  double t2711;
  double t2726;
  double t2782;
  double t2840;
  double t3014;
  double t3058;
  double t3092;
  double t3195;
  double t3206;
  double t3207;
  double t3330;
  double t3467;
  double t3486;
  double t3554;
  double t3684;
  double t3702;
  double t3832;
  double t3962;
  double t3970;
  double t3971;
  double t109;
  double t247;
  double t258;
  double t341;
  double t995;
  double t1014;
  double t4438;
  double t4448;
  double t4462;
  double t4470;
  double t4485;
  double t4568;
  double t1471;
  double t1735;
  double t1777;
  double t1880;
  double t1963;
  double t2007;
  double t4637;
  double t4638;
  double t4651;
  double t2291;
  double t2378;
  double t2403;
  double t2527;
  double t2598;
  double t2642;
  double t2831;
  double t2873;
  double t2968;
  double t4766;
  double t4807;
  double t4808;
  double t4841;
  double t4858;
  double t4871;
  double t3120;
  double t3148;
  double t3173;
  double t3518;
  double t3645;
  double t3673;
  double t4884;
  double t4916;
  double t4931;
  double t5023;
  double t5038;
  double t5065;
  double t3867;
  double t3900;
  double t3929;
  double t5119;
  double t5135;
  double t5147;
  double t5162;
  double t5163;
  double t5194;
  double t5718;
  double t5746;
  double t5900;
  double t6218;
  double t6281;
  double t6344;
  double t6422;
  double t6482;
  double t6488;
  double t6520;
  double t6601;
  double t6609;
  double t6779;
  double t6805;
  double t6850;
  double t6880;
  double t6881;
  double t6943;
  double t6974;
  double t7007;
  double t7062;
  double t7343;
  double t7349;
  double t7365;
  double t7384;
  double t7392;
  double t7402;
  double t7426;
  double t7444;
  double t7452;
  double t7487;
  double t7505;
  double t7508;
  double t7520;
  double t7528;
  double t7536;
  double t7549;
  double t7555;
  double t7562;
  double t7592;
  double t7593;
  double t7601;
  double t7759;
  double t7773;
  double t7780;
  double t7887;
  double t7889;
  double t7897;
  double t7926;
  double t7928;
  double t7937;
  double t7950;
  double t7961;
  double t7962;
  double t7969;
  double t7979;
  double t7988;
  double t8003;
  double t8004;
  double t8007;
  double t8018;
  double t8021;
  double t8024;
  double t8118;
  double t8122;
  double t8124;
  double t8133;
  double t8135;
  double t8144;
  double t8145;
  double t8148;
  double t8154;
  double t8157;
  double t8159;
  double t8166;
  double t8167;
  double t8168;
  double t8173;
  double t8177;
  double t8179;
  double t8181;
  double t8184;
  double t8187;
  double t8223;
  double t8230;
  double t8231;
  double t8240;
  double t8242;
  double t8244;
  double t8260;
  double t8264;
  double t8266;
  double t8267;
  double t8274;
  double t8285;
  double t8286;
  double t8292;
  double t8303;
  double t8306;
  double t8311;
  double t8314;
  double t8318;
  double t8329;
  double t8391;
  double t8410;
  double t8411;
  double t8434;
  double t8442;
  double t8445;
  double t8463;
  double t8465;
  double t8471;
  double t8481;
  double t8489;
  double t8501;
  double t8511;
  double t8520;
  double t8524;
  double t8534;
  double t8546;
  double t8549;
  double t8601;
  double t8602;
  double t8608;
  double t8609;
  double t8614;
  double t8621;
  double t8622;
  double t8624;
  double t8629;
  double t8630;
  double t8632;
  double t8637;
  double t8640;
  double t8646;
  double t8683;
  double t8687;
  double t8690;
  double t8694;
  double t8695;
  double t8723;
  double t8732;
  double t8744;
  double t8747;
  double t8753;
  double t8760;
  double t8763;
  double t8772;
  double t8776;
  double t8783;
  double t8786;
  double t8792;
  double t8793;
  double t8799;
  double t8426;
  double t8431;
  double t8432;
  double t8451;
  double t8473;
  double t8509;
  double t8533;
  double t8554;
  double t8557;
  double t8562;
  double t8564;
  double t8568;
  double t8571;
  double t8576;
  double t8582;
  double t8583;
  double t4704;
  double t4706;
  double t4720;
  double t8871;
  double t8877;
  double t8885;
  double t8892;
  double t8893;
  double t8895;
  double t8837;
  double t8842;
  double t8843;
  double t8848;
  double t8851;
  double t8935;
  double t8936;
  double t8938;
  double t8940;
  double t8941;
  double t8942;
  double t8955;
  double t8958;
  double t8962;
  double t8967;
  double t8970;
  double t8974;
  double t9015;
  double t9016;
  double t9019;
  double t9022;
  double t9023;
  double t9024;
  double t9052;
  double t9053;
  double t9054;
  double t9060;
  double t9062;
  double t9064;
  double t9122;
  double t9124;
  double t9126;
  double t9135;
  double t9136;
  double t9145;
  double t9146;
  double t9149;
  double t9107;
  double t9108;
  double t9113;
  double t9115;
  double t9116;
  double t9195;
  double t9197;
  double t9198;
  double t9200;
  double t9205;
  double t9207;
  double t9210;
  double t9211;
  double t9214;
  double t9219;
  double t9228;
  double t9231;
  double t9237;
  double t9242;
  double t9244;
  double t9285;
  double t9286;
  double t9288;
  double t9295;
  double t9299;
  double t9300;
  double t9305;
  double t9306;
  double t9308;
  double t9317;
  double t9318;
  double t9319;
  double t9323;
  double t9328;
  double t9334;
  double t9396;
  double t9397;
  double t5319;
  double t9372;
  double t9374;
  double t9378;
  double t9384;
  double t9386;
  double t9419;
  double t9423;
  double t9426;
  double t9432;
  double t9435;
  double t9440;
  double t9445;
  double t9472;
  double t9474;
  double t9475;
  double t9481;
  double t9482;
  double t9487;
  double t9489;
  double t9407;
  double t5359;
  double t5371;
  double t9528;
  double t9529;
  double t9536;
  double t9538;
  double t9540;
  double t9448;
  double t9555;
  double t9557;
  double t9563;
  double t9453;
  double t9495;
  double t9583;
  double t9586;
  double t9589;
  double t9510;
  t446 = Cos(var1[5]);
  t562 = Sin(var1[3]);
  t614 = Sin(var1[4]);
  t427 = Cos(var1[3]);
  t649 = Sin(var1[5]);
  t68 = Cos(var1[6]);
  t491 = -1.*t427*t446;
  t703 = -1.*t562*t614*t649;
  t826 = t491 + t703;
  t873 = -1.*t446*t562*t614;
  t880 = t427*t649;
  t917 = t873 + t880;
  t948 = Sin(var1[6]);
  t1325 = Cos(var1[7]);
  t1369 = -1.*t1325;
  t1372 = 1. + t1369;
  t1717 = Sin(var1[7]);
  t1179 = t68*t826;
  t1196 = t917*t948;
  t1215 = t1179 + t1196;
  t1873 = Cos(var1[4]);
  t2236 = Cos(var1[8]);
  t2238 = -1.*t2236;
  t2245 = 1. + t2238;
  t2300 = Sin(var1[8]);
  t2197 = -1.*t1873*t1325*t562;
  t2223 = t1215*t1717;
  t2227 = t2197 + t2223;
  t2460 = t68*t917;
  t2487 = -1.*t826*t948;
  t2501 = t2460 + t2487;
  t2711 = Cos(var1[9]);
  t2726 = -1.*t2711;
  t2782 = 1. + t2726;
  t2840 = Sin(var1[9]);
  t3014 = t2236*t2227;
  t3058 = t2501*t2300;
  t3092 = t3014 + t3058;
  t3195 = t2236*t2501;
  t3206 = -1.*t2227*t2300;
  t3207 = t3195 + t3206;
  t3330 = Cos(var1[10]);
  t3467 = -1.*t3330;
  t3486 = 1. + t3467;
  t3554 = Sin(var1[10]);
  t3684 = -1.*t2840*t3092;
  t3702 = t2711*t3207;
  t3832 = t3684 + t3702;
  t3962 = t2711*t3092;
  t3970 = t2840*t3207;
  t3971 = t3962 + t3970;
  t109 = -1.*t68;
  t247 = 1. + t109;
  t258 = 0.135*t247;
  t341 = 0. + t258;
  t995 = -0.135*t948;
  t1014 = 0. + t995;
  t4438 = -1.*t446*t562;
  t4448 = t427*t614*t649;
  t4462 = t4438 + t4448;
  t4470 = t427*t446*t614;
  t4485 = t562*t649;
  t4568 = t4470 + t4485;
  t1471 = 0.135*t1372;
  t1735 = 0.049*t1717;
  t1777 = 0. + t1471 + t1735;
  t1880 = -0.049*t1372;
  t1963 = 0.135*t1717;
  t2007 = 0. + t1880 + t1963;
  t4637 = t68*t4462;
  t4638 = t4568*t948;
  t4651 = t4637 + t4638;
  t2291 = -0.049*t2245;
  t2378 = -0.09*t2300;
  t2403 = 0. + t2291 + t2378;
  t2527 = -0.09*t2245;
  t2598 = 0.049*t2300;
  t2642 = 0. + t2527 + t2598;
  t2831 = -0.049*t2782;
  t2873 = -0.21*t2840;
  t2968 = 0. + t2831 + t2873;
  t4766 = t427*t1873*t1325;
  t4807 = t4651*t1717;
  t4808 = t4766 + t4807;
  t4841 = t68*t4568;
  t4858 = -1.*t4462*t948;
  t4871 = t4841 + t4858;
  t3120 = -0.21*t2782;
  t3148 = 0.049*t2840;
  t3173 = 0. + t3120 + t3148;
  t3518 = -0.2707*t3486;
  t3645 = 0.0016*t3554;
  t3673 = 0. + t3518 + t3645;
  t4884 = t2236*t4808;
  t4916 = t4871*t2300;
  t4931 = t4884 + t4916;
  t5023 = t2236*t4871;
  t5038 = -1.*t4808*t2300;
  t5065 = t5023 + t5038;
  t3867 = -0.0016*t3486;
  t3900 = -0.2707*t3554;
  t3929 = 0. + t3867 + t3900;
  t5119 = -1.*t2840*t4931;
  t5135 = t2711*t5065;
  t5147 = t5119 + t5135;
  t5162 = t2711*t4931;
  t5163 = t2840*t5065;
  t5194 = t5162 + t5163;
  t5718 = t427*t1873*t68*t649;
  t5746 = t427*t1873*t446*t948;
  t5900 = t5718 + t5746;
  t6218 = -1.*t427*t1325*t614;
  t6281 = t5900*t1717;
  t6344 = t6218 + t6281;
  t6422 = t427*t1873*t446*t68;
  t6482 = -1.*t427*t1873*t649*t948;
  t6488 = t6422 + t6482;
  t6520 = t2236*t6344;
  t6601 = t6488*t2300;
  t6609 = t6520 + t6601;
  t6779 = t2236*t6488;
  t6805 = -1.*t6344*t2300;
  t6850 = t6779 + t6805;
  t6880 = -1.*t2840*t6609;
  t6881 = t2711*t6850;
  t6943 = t6880 + t6881;
  t6974 = t2711*t6609;
  t7007 = t2840*t6850;
  t7062 = t6974 + t7007;
  t7343 = t1873*t68*t562*t649;
  t7349 = t1873*t446*t562*t948;
  t7365 = t7343 + t7349;
  t7384 = -1.*t1325*t562*t614;
  t7392 = t7365*t1717;
  t7402 = t7384 + t7392;
  t7426 = t1873*t446*t68*t562;
  t7444 = -1.*t1873*t562*t649*t948;
  t7452 = t7426 + t7444;
  t7487 = t2236*t7402;
  t7505 = t7452*t2300;
  t7508 = t7487 + t7505;
  t7520 = t2236*t7452;
  t7528 = -1.*t7402*t2300;
  t7536 = t7520 + t7528;
  t7549 = -1.*t2840*t7508;
  t7555 = t2711*t7536;
  t7562 = t7549 + t7555;
  t7592 = t2711*t7508;
  t7593 = t2840*t7536;
  t7601 = t7592 + t7593;
  t7759 = -1.*t68*t614*t649;
  t7773 = -1.*t446*t614*t948;
  t7780 = t7759 + t7773;
  t7887 = -1.*t1873*t1325;
  t7889 = t7780*t1717;
  t7897 = t7887 + t7889;
  t7926 = -1.*t446*t68*t614;
  t7928 = t614*t649*t948;
  t7937 = t7926 + t7928;
  t7950 = t2236*t7897;
  t7961 = t7937*t2300;
  t7962 = t7950 + t7961;
  t7969 = t2236*t7937;
  t7979 = -1.*t7897*t2300;
  t7988 = t7969 + t7979;
  t8003 = -1.*t2840*t7962;
  t8004 = t2711*t7988;
  t8007 = t8003 + t8004;
  t8018 = t2711*t7962;
  t8021 = t2840*t7988;
  t8024 = t8018 + t8021;
  t8118 = t446*t562;
  t8122 = -1.*t427*t614*t649;
  t8124 = t8118 + t8122;
  t8133 = t8124*t948;
  t8135 = t4841 + t8133;
  t8144 = t68*t8124;
  t8145 = -1.*t4568*t948;
  t8148 = t8144 + t8145;
  t8154 = t2236*t8135*t1717;
  t8157 = t8148*t2300;
  t8159 = t8154 + t8157;
  t8166 = t2236*t8148;
  t8167 = -1.*t8135*t1717*t2300;
  t8168 = t8166 + t8167;
  t8173 = -1.*t2840*t8159;
  t8177 = t2711*t8168;
  t8179 = t8173 + t8177;
  t8181 = t2711*t8159;
  t8184 = t2840*t8168;
  t8187 = t8181 + t8184;
  t8223 = t446*t562*t614;
  t8230 = -1.*t427*t649;
  t8231 = t8223 + t8230;
  t8240 = t68*t8231;
  t8242 = t826*t948;
  t8244 = t8240 + t8242;
  t8260 = -1.*t8231*t948;
  t8264 = t1179 + t8260;
  t8266 = t2236*t8244*t1717;
  t8267 = t8264*t2300;
  t8274 = t8266 + t8267;
  t8285 = t2236*t8264;
  t8286 = -1.*t8244*t1717*t2300;
  t8292 = t8285 + t8286;
  t8303 = -1.*t2840*t8274;
  t8306 = t2711*t8292;
  t8311 = t8303 + t8306;
  t8314 = t2711*t8274;
  t8318 = t2840*t8292;
  t8329 = t8314 + t8318;
  t8391 = t1873*t446*t68;
  t8410 = -1.*t1873*t649*t948;
  t8411 = t8391 + t8410;
  t8434 = -1.*t1873*t68*t649;
  t8442 = -1.*t1873*t446*t948;
  t8445 = t8434 + t8442;
  t8463 = t2236*t8411*t1717;
  t8465 = t8445*t2300;
  t8471 = t8463 + t8465;
  t8481 = t2236*t8445;
  t8489 = -1.*t8411*t1717*t2300;
  t8501 = t8481 + t8489;
  t8511 = -1.*t2840*t8471;
  t8520 = t2711*t8501;
  t8524 = t8511 + t8520;
  t8534 = t2711*t8471;
  t8546 = t2840*t8501;
  t8549 = t8534 + t8546;
  t8601 = -1.*t68*t4462;
  t8602 = t8601 + t8145;
  t8608 = t2236*t4871*t1717;
  t8609 = t8602*t2300;
  t8614 = t8608 + t8609;
  t8621 = t2236*t8602;
  t8622 = -1.*t4871*t1717*t2300;
  t8624 = t8621 + t8622;
  t8629 = -1.*t2840*t8614;
  t8630 = t2711*t8624;
  t8632 = t8629 + t8630;
  t8637 = t2711*t8614;
  t8640 = t2840*t8624;
  t8646 = t8637 + t8640;
  t8683 = t427*t446;
  t8687 = t562*t614*t649;
  t8690 = t8683 + t8687;
  t8694 = -1.*t8690*t948;
  t8695 = t8240 + t8694;
  t8723 = -1.*t68*t8690;
  t8732 = t8723 + t8260;
  t8744 = t2236*t8695*t1717;
  t8747 = t8732*t2300;
  t8753 = t8744 + t8747;
  t8760 = t2236*t8732;
  t8763 = -1.*t8695*t1717*t2300;
  t8772 = t8760 + t8763;
  t8776 = -1.*t2840*t8753;
  t8783 = t2711*t8772;
  t8786 = t8776 + t8783;
  t8792 = t2711*t8753;
  t8793 = t2840*t8772;
  t8799 = t8792 + t8793;
  t8426 = 0.1305*t1325*t8411;
  t8431 = t8411*t1777;
  t8432 = t8411*t1717*t2403;
  t8451 = t8445*t2642;
  t8473 = t2968*t8471;
  t8509 = t3173*t8501;
  t8533 = t3673*t8524;
  t8554 = t3929*t8549;
  t8557 = t3554*t8524;
  t8562 = t3330*t8549;
  t8564 = t8557 + t8562;
  t8568 = -0.0016*t8564;
  t8571 = t3330*t8524;
  t8576 = -1.*t3554*t8549;
  t8582 = t8571 + t8576;
  t8583 = -0.2707*t8582;
  t4704 = t1325*t4651;
  t4706 = -1.*t427*t1873*t1717;
  t4720 = t4704 + t4706;
  t8871 = -1.*t2236*t2840*t4720;
  t8877 = -1.*t2711*t4720*t2300;
  t8885 = t8871 + t8877;
  t8892 = t2711*t2236*t4720;
  t8893 = -1.*t2840*t4720*t2300;
  t8895 = t8892 + t8893;
  t8837 = 0.135*t1325;
  t8842 = -0.049*t1717;
  t8843 = t8837 + t8842;
  t8848 = 0.049*t1325;
  t8851 = t8848 + t1963;
  t8935 = t68*t8690;
  t8936 = t8231*t948;
  t8938 = t8935 + t8936;
  t8940 = t1325*t8938;
  t8941 = -1.*t1873*t562*t1717;
  t8942 = t8940 + t8941;
  t8955 = -1.*t2236*t2840*t8942;
  t8958 = -1.*t2711*t8942*t2300;
  t8962 = t8955 + t8958;
  t8967 = t2711*t2236*t8942;
  t8970 = -1.*t2840*t8942*t2300;
  t8974 = t8967 + t8970;
  t9015 = t1873*t68*t649;
  t9016 = t1873*t446*t948;
  t9019 = t9015 + t9016;
  t9022 = t1325*t9019;
  t9023 = t614*t1717;
  t9024 = t9022 + t9023;
  t9052 = -1.*t2236*t2840*t9024;
  t9053 = -1.*t2711*t9024*t2300;
  t9054 = t9052 + t9053;
  t9060 = t2711*t2236*t9024;
  t9062 = -1.*t2840*t9024*t2300;
  t9064 = t9060 + t9062;
  t9122 = -1.*t2236*t4808;
  t9124 = -1.*t4871*t2300;
  t9126 = t9122 + t9124;
  t9135 = t2840*t9126;
  t9136 = t9135 + t5135;
  t9145 = t2711*t9126;
  t9146 = -1.*t2840*t5065;
  t9149 = t9145 + t9146;
  t9107 = 0.049*t2236;
  t9108 = t9107 + t2378;
  t9113 = -0.09*t2236;
  t9115 = -0.049*t2300;
  t9116 = t9113 + t9115;
  t9195 = t1873*t1325*t562;
  t9197 = t8938*t1717;
  t9198 = t9195 + t9197;
  t9200 = -1.*t2236*t9198;
  t9205 = -1.*t8695*t2300;
  t9207 = t9200 + t9205;
  t9210 = t2236*t8695;
  t9211 = -1.*t9198*t2300;
  t9214 = t9210 + t9211;
  t9219 = t2840*t9207;
  t9228 = t2711*t9214;
  t9231 = t9219 + t9228;
  t9237 = t2711*t9207;
  t9242 = -1.*t2840*t9214;
  t9244 = t9237 + t9242;
  t9285 = -1.*t1325*t614;
  t9286 = t9019*t1717;
  t9288 = t9285 + t9286;
  t9295 = -1.*t2236*t9288;
  t9299 = -1.*t8411*t2300;
  t9300 = t9295 + t9299;
  t9305 = t2236*t8411;
  t9306 = -1.*t9288*t2300;
  t9308 = t9305 + t9306;
  t9317 = t2840*t9300;
  t9318 = t2711*t9308;
  t9319 = t9317 + t9318;
  t9323 = t2711*t9300;
  t9328 = -1.*t2840*t9308;
  t9334 = t9323 + t9328;
  t9396 = -1.*t2711*t4931;
  t9397 = t9396 + t9146;
  t5319 = t3330*t5147;
  t9372 = -0.21*t2711;
  t9374 = -0.049*t2840;
  t9378 = t9372 + t9374;
  t9384 = 0.049*t2711;
  t9386 = t9384 + t2873;
  t9419 = t2236*t9198;
  t9423 = t8695*t2300;
  t9426 = t9419 + t9423;
  t9432 = -1.*t2840*t9426;
  t9435 = t9432 + t9228;
  t9440 = -1.*t2711*t9426;
  t9445 = t9440 + t9242;
  t9472 = t2236*t9288;
  t9474 = t8411*t2300;
  t9475 = t9472 + t9474;
  t9481 = -1.*t2840*t9475;
  t9482 = t9481 + t9318;
  t9487 = -1.*t2711*t9475;
  t9489 = t9487 + t9328;
  t9407 = -1.*t3554*t5147;
  t5359 = -1.*t3554*t5194;
  t5371 = t5319 + t5359;
  t9528 = 0.0016*t3330;
  t9529 = t9528 + t3900;
  t9536 = -0.2707*t3330;
  t9538 = -0.0016*t3554;
  t9540 = t9536 + t9538;
  t9448 = -1.*t3554*t9435;
  t9555 = t2711*t9426;
  t9557 = t2840*t9214;
  t9563 = t9555 + t9557;
  t9453 = t3330*t9435;
  t9495 = -1.*t3554*t9482;
  t9583 = t2711*t9475;
  t9586 = t2840*t9308;
  t9589 = t9583 + t9586;
  t9510 = t3330*t9482;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1215*t1777 + t2227*t2403 + t2501*t2642 + t2968*t3092 + t3173*t3207 + t3673*t3832 + t3929*t3971 - 0.0016*(t3554*t3832 + t3330*t3971) - 0.2707*(t3330*t3832 - 1.*t3554*t3971) - 1.*t1873*t2007*t562 + 0.1305*(t1215*t1325 + t1717*t1873*t562) + t341*t826 + t1014*t917;
  p_output1[10]=t1873*t2007*t427 + t341*t4462 + t1014*t4568 + t1777*t4651 + 0.1305*t4720 + t2403*t4808 + t2642*t4871 + t2968*t4931 + t3173*t5065 + t3673*t5147 + t3929*t5194 - 0.0016*(t3554*t5147 + t3330*t5194) - 0.2707*t5371;
  p_output1[11]=0;
  p_output1[12]=t1014*t1873*t427*t446 + t1777*t5900 - 1.*t2007*t427*t614 + 0.1305*(t1325*t5900 + t1717*t427*t614) + t2403*t6344 + t2642*t6488 + t1873*t341*t427*t649 + t2968*t6609 + t3173*t6850 + t3673*t6943 + t3929*t7062 - 0.0016*(t3554*t6943 + t3330*t7062) - 0.2707*(t3330*t6943 - 1.*t3554*t7062);
  p_output1[13]=t1014*t1873*t446*t562 - 1.*t2007*t562*t614 + t1873*t341*t562*t649 + t1777*t7365 + 0.1305*(t1717*t562*t614 + t1325*t7365) + t2403*t7402 + t2642*t7452 + t2968*t7508 + t3173*t7536 + t3673*t7562 + t3929*t7601 - 0.0016*(t3554*t7562 + t3330*t7601) - 0.2707*(t3330*t7562 - 1.*t3554*t7601);
  p_output1[14]=-1.*t1873*t2007 - 1.*t1014*t446*t614 - 1.*t341*t614*t649 + t1777*t7780 + 0.1305*(t1717*t1873 + t1325*t7780) + t2403*t7897 + t2642*t7937 + t2968*t7962 + t3173*t7988 + t3673*t8007 + t3929*t8024 - 0.0016*(t3554*t8007 + t3330*t8024) - 0.2707*(t3330*t8007 - 1.*t3554*t8024);
  p_output1[15]=t341*t4568 + t1014*t8124 + 0.1305*t1325*t8135 + t1777*t8135 + t1717*t2403*t8135 + t2642*t8148 + t2968*t8159 + t3173*t8168 + t3673*t8179 + t3929*t8187 - 0.0016*(t3554*t8179 + t3330*t8187) - 0.2707*(t3330*t8179 - 1.*t3554*t8187);
  p_output1[16]=t341*t8231 + 0.1305*t1325*t8244 + t1777*t8244 + t1717*t2403*t8244 + t1014*t826 + t2642*t8264 + t2968*t8274 + t3173*t8292 + t3673*t8311 + t3929*t8329 - 0.0016*(t3554*t8311 + t3330*t8329) - 0.2707*(t3330*t8311 - 1.*t3554*t8329);
  p_output1[17]=t1873*t341*t446 - 1.*t1014*t1873*t649 + t8426 + t8431 + t8432 + t8451 + t8473 + t8509 + t8533 + t8554 + t8568 + t8583;
  p_output1[18]=0.1305*t1325*t4871 + t1777*t4871 + t1717*t2403*t4871 - 0.135*t4568*t68 + t2642*t8602 + t2968*t8614 + t3173*t8624 + t3673*t8632 + t3929*t8646 - 0.0016*(t3554*t8632 + t3330*t8646) - 0.2707*(t3330*t8632 - 1.*t3554*t8646) + 0.135*t4462*t948;
  p_output1[19]=-0.135*t68*t8231 + 0.1305*t1325*t8695 + t1777*t8695 + t1717*t2403*t8695 + t2642*t8732 + t2968*t8753 + t3173*t8772 + t3673*t8786 + t3929*t8799 - 0.0016*(t3554*t8786 + t3330*t8799) - 0.2707*(t3330*t8786 - 1.*t3554*t8799) + 0.135*t8690*t948;
  p_output1[20]=-0.135*t1873*t446*t68 + t8426 + t8431 + t8432 + t8451 + t8473 + t8509 + t8533 + t8554 + t8568 + t8583 + 0.135*t1873*t649*t948;
  p_output1[21]=0.1305*(-1.*t1325*t1873*t427 - 1.*t1717*t4651) + t2403*t4720 + t2236*t2968*t4720 - 1.*t2300*t3173*t4720 + t1873*t427*t8843 + t4651*t8851 + t3673*t8885 + t3929*t8895 - 0.0016*(t3554*t8885 + t3330*t8895) - 0.2707*(t3330*t8885 - 1.*t3554*t8895);
  p_output1[22]=t1873*t562*t8843 + t8851*t8938 + 0.1305*(t2197 - 1.*t1717*t8938) + t2403*t8942 + t2236*t2968*t8942 - 1.*t2300*t3173*t8942 + t3673*t8962 + t3929*t8974 - 0.0016*(t3554*t8962 + t3330*t8974) - 0.2707*(t3330*t8962 - 1.*t3554*t8974);
  p_output1[23]=-1.*t614*t8843 + t8851*t9019 + 0.1305*(t1325*t614 - 1.*t1717*t9019) + t2403*t9024 + t2236*t2968*t9024 - 1.*t2300*t3173*t9024 + t3673*t9054 + t3929*t9064 - 0.0016*(t3554*t9054 + t3330*t9064) - 0.2707*(t3330*t9054 - 1.*t3554*t9064);
  p_output1[24]=t2968*t5065 + t4871*t9108 + t4808*t9116 + t3173*t9126 + t3929*t9136 + t3673*t9149 - 0.2707*(-1.*t3554*t9136 + t3330*t9149) - 0.0016*(t3330*t9136 + t3554*t9149);
  p_output1[25]=t8695*t9108 + t9116*t9198 + t3173*t9207 + t2968*t9214 + t3929*t9231 + t3673*t9244 - 0.2707*(-1.*t3554*t9231 + t3330*t9244) - 0.0016*(t3330*t9231 + t3554*t9244);
  p_output1[26]=t8411*t9108 + t9116*t9288 + t3173*t9300 + t2968*t9308 + t3929*t9319 + t3673*t9334 - 0.2707*(-1.*t3554*t9319 + t3330*t9334) - 0.0016*(t3330*t9319 + t3554*t9334);
  p_output1[27]=t3929*t5147 + t4931*t9378 + t5065*t9386 + t3673*t9397 - 0.0016*(t5319 + t3554*t9397) - 0.2707*(t3330*t9397 + t9407);
  p_output1[28]=t9214*t9386 + t9378*t9426 + t3929*t9435 + t3673*t9445 - 0.2707*(t3330*t9445 + t9448) - 0.0016*(t3554*t9445 + t9453);
  p_output1[29]=t9308*t9386 + t9378*t9475 + t3929*t9482 + t3673*t9489 - 0.2707*(t3330*t9489 + t9495) - 0.0016*(t3554*t9489 + t9510);
  p_output1[30]=-0.0016*t5371 - 0.2707*(-1.*t3330*t5194 + t9407) + t5147*t9529 + t5194*t9540;
  p_output1[31]=t9435*t9529 + t9540*t9563 - 0.2707*(t9448 - 1.*t3330*t9563) - 0.0016*(t9453 - 1.*t3554*t9563);
  p_output1[32]=t9482*t9529 + t9540*t9589 - 0.2707*(t9495 - 1.*t3330*t9589) - 0.0016*(t9510 - 1.*t3554*t9589);
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
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



void Jp_knee_to_shin_left_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
