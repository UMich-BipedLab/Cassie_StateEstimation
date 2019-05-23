/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:08:05 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_LeftToeFront_src.h"

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
  double t137;
  double t161;
  double t172;
  double t136;
  double t174;
  double t107;
  double t151;
  double t180;
  double t181;
  double t315;
  double t391;
  double t435;
  double t443;
  double t720;
  double t721;
  double t740;
  double t918;
  double t576;
  double t700;
  double t701;
  double t1006;
  double t1744;
  double t1791;
  double t1816;
  double t1829;
  double t1702;
  double t1733;
  double t1734;
  double t2062;
  double t2064;
  double t2102;
  double t2528;
  double t2582;
  double t2601;
  double t2654;
  double t2698;
  double t2815;
  double t2824;
  double t3127;
  double t3178;
  double t3213;
  double t3299;
  double t3566;
  double t3596;
  double t3699;
  double t3734;
  double t3755;
  double t3766;
  double t3833;
  double t3834;
  double t3892;
  double t3924;
  double t3932;
  double t3938;
  double t3944;
  double t4010;
  double t4019;
  double t4081;
  double t4264;
  double t4296;
  double t4333;
  double t4439;
  double t4537;
  double t4543;
  double t4680;
  double t4752;
  double t4764;
  double t4800;
  double t4967;
  double t4974;
  double t5046;
  double t108;
  double t110;
  double t116;
  double t132;
  double t447;
  double t482;
  double t5169;
  double t5181;
  double t5192;
  double t5205;
  double t5213;
  double t5238;
  double t859;
  double t924;
  double t985;
  double t1088;
  double t1107;
  double t1268;
  double t5243;
  double t5250;
  double t5261;
  double t1821;
  double t1927;
  double t1967;
  double t2153;
  double t2313;
  double t2489;
  double t2630;
  double t2659;
  double t2688;
  double t5337;
  double t5340;
  double t5346;
  double t5365;
  double t5367;
  double t5378;
  double t2987;
  double t3011;
  double t3113;
  double t3634;
  double t3701;
  double t3733;
  double t5400;
  double t5402;
  double t5406;
  double t5453;
  double t5463;
  double t5464;
  double t3782;
  double t3810;
  double t3825;
  double t3942;
  double t3983;
  double t4004;
  double t5485;
  double t5487;
  double t5488;
  double t5503;
  double t5505;
  double t5514;
  double t4117;
  double t4228;
  double t4258;
  double t4675;
  double t4711;
  double t4745;
  double t5526;
  double t5538;
  double t5542;
  double t5569;
  double t5581;
  double t5584;
  double t4880;
  double t4885;
  double t4914;
  double t5596;
  double t5612;
  double t5626;
  double t5630;
  double t5640;
  double t5642;
  double t5720;
  double t5723;
  double t5736;
  double t5775;
  double t5783;
  double t5785;
  double t5792;
  double t5797;
  double t5805;
  double t5807;
  double t5813;
  double t5815;
  double t5829;
  double t5832;
  double t5842;
  double t5850;
  double t5861;
  double t5862;
  double t5874;
  double t5877;
  double t5879;
  double t5899;
  double t5902;
  double t5912;
  double t5920;
  double t5923;
  double t5927;
  double t5937;
  double t5947;
  double t5950;
  double t5962;
  double t5963;
  double t5985;
  double t6099;
  double t6106;
  double t6161;
  double t6225;
  double t6242;
  double t6250;
  double t6268;
  double t6272;
  double t6281;
  double t6292;
  double t6297;
  double t6302;
  double t6309;
  double t6311;
  double t6315;
  double t6325;
  double t6328;
  double t6329;
  double t6340;
  double t6346;
  double t6356;
  double t6372;
  double t6374;
  double t6377;
  double t6380;
  double t6386;
  double t6387;
  double t6393;
  double t6408;
  double t6411;
  double t6418;
  double t6423;
  double t6432;
  double t6533;
  double t6541;
  double t6549;
  double t6576;
  double t6577;
  double t6580;
  double t6587;
  double t6591;
  double t6592;
  double t6614;
  double t6627;
  double t6637;
  double t6658;
  double t6662;
  double t6669;
  double t6687;
  double t6714;
  double t6722;
  double t6735;
  double t6742;
  double t6743;
  double t6750;
  double t6774;
  double t6777;
  double t6784;
  double t6788;
  double t6789;
  double t6812;
  double t6813;
  double t6815;
  double t6833;
  double t6835;
  double t6841;
  double t6922;
  double t6924;
  double t6927;
  double t6941;
  double t6942;
  double t6960;
  double t6971;
  double t6973;
  double t6990;
  double t6998;
  double t6999;
  double t7012;
  double t7013;
  double t7014;
  double t7026;
  double t7033;
  double t7036;
  double t7044;
  double t7045;
  double t7050;
  double t7071;
  double t7072;
  double t7079;
  double t7084;
  double t7097;
  double t7108;
  double t7130;
  double t7135;
  double t7140;
  double t7147;
  double t7165;
  double t7177;
  double t7280;
  double t7281;
  double t7284;
  double t7297;
  double t7298;
  double t7306;
  double t7329;
  double t7330;
  double t7344;
  double t7362;
  double t7373;
  double t7394;
  double t7403;
  double t7408;
  double t7413;
  double t7419;
  double t7423;
  double t7466;
  double t7468;
  double t7473;
  double t7482;
  double t7490;
  double t7493;
  double t7503;
  double t7510;
  double t7532;
  double t7541;
  double t7545;
  double t7547;
  double t7564;
  double t7579;
  double t7603;
  double t7745;
  double t7750;
  double t7766;
  double t7811;
  double t7815;
  double t7836;
  double t7891;
  double t7924;
  double t7933;
  double t7970;
  double t7983;
  double t7984;
  double t8012;
  double t8015;
  double t8029;
  double t8041;
  double t8062;
  double t8087;
  double t8137;
  double t8141;
  double t8153;
  double t8167;
  double t8172;
  double t8175;
  double t8185;
  double t8186;
  double t8192;
  double t8202;
  double t8229;
  double t8239;
  double t8432;
  double t8442;
  double t8462;
  double t8471;
  double t8499;
  double t8509;
  double t8546;
  double t8595;
  double t8651;
  double t8654;
  double t8659;
  double t8685;
  double t8717;
  double t8721;
  double t8728;
  double t8735;
  double t8745;
  double t8753;
  double t8763;
  double t8787;
  double t8809;
  double t8826;
  double t8862;
  double t8878;
  double t8890;
  double t8895;
  double t8982;
  double t9010;
  double t9011;
  double t9054;
  double t9063;
  double t9079;
  double t9097;
  double t9123;
  double t9131;
  double t9132;
  double t9183;
  double t9203;
  double t9211;
  double t9220;
  double t9226;
  double t9258;
  double t9277;
  double t9279;
  double t9319;
  double t9352;
  double t9368;
  double t9384;
  double t9411;
  double t9417;
  double t9418;
  double t9472;
  double t9538;
  double t9563;
  double t9605;
  double t9640;
  double t9647;
  double t7767;
  double t7777;
  double t7794;
  double t7878;
  double t7963;
  double t8002;
  double t8039;
  double t8128;
  double t8157;
  double t8178;
  double t8194;
  double t8244;
  double t8253;
  double t8259;
  double t8261;
  double t8266;
  double t8284;
  double t8311;
  double t8351;
  double t8370;
  double t5305;
  double t5308;
  double t5314;
  double t10009;
  double t10026;
  double t10031;
  double t10042;
  double t10063;
  double t10077;
  double t10094;
  double t10095;
  double t10099;
  double t10106;
  double t10108;
  double t10116;
  double t10132;
  double t10140;
  double t10144;
  double t10162;
  double t10166;
  double t10172;
  double t9840;
  double t9848;
  double t9851;
  double t9887;
  double t9920;
  double t10244;
  double t10251;
  double t10258;
  double t10270;
  double t10275;
  double t10279;
  double t10368;
  double t10378;
  double t10391;
  double t10400;
  double t10408;
  double t10409;
  double t10414;
  double t10424;
  double t10425;
  double t10444;
  double t10450;
  double t10453;
  double t10462;
  double t10464;
  double t10471;
  double t10481;
  double t10482;
  double t10489;
  double t10587;
  double t10591;
  double t10596;
  double t10623;
  double t10625;
  double t10630;
  double t10669;
  double t10673;
  double t10676;
  double t10686;
  double t10692;
  double t10695;
  double t10705;
  double t10710;
  double t10713;
  double t10718;
  double t10719;
  double t10723;
  double t10751;
  double t10757;
  double t10779;
  double t10785;
  double t10799;
  double t10808;
  double t10896;
  double t10897;
  double t10902;
  double t10914;
  double t10915;
  double t10920;
  double t10924;
  double t10936;
  double t10945;
  double t10956;
  double t10957;
  double t10965;
  double t10971;
  double t10978;
  double t10981;
  double t10984;
  double t10991;
  double t10998;
  double t11008;
  double t11011;
  double t10853;
  double t10860;
  double t10871;
  double t10880;
  double t10889;
  double t11058;
  double t11066;
  double t11069;
  double t11077;
  double t11079;
  double t11087;
  double t11089;
  double t11091;
  double t11092;
  double t11096;
  double t11099;
  double t11100;
  double t11102;
  double t11106;
  double t11110;
  double t11115;
  double t11123;
  double t11126;
  double t11129;
  double t11130;
  double t11131;
  double t11133;
  double t11135;
  double t11136;
  double t11144;
  double t11151;
  double t11155;
  double t11199;
  double t11202;
  double t11203;
  double t11206;
  double t11210;
  double t11218;
  double t11223;
  double t11225;
  double t11226;
  double t11232;
  double t11233;
  double t11238;
  double t11243;
  double t11245;
  double t11246;
  double t11251;
  double t11254;
  double t11255;
  double t11257;
  double t11258;
  double t11259;
  double t11261;
  double t11265;
  double t11269;
  double t11277;
  double t11281;
  double t11282;
  double t11338;
  double t11342;
  double t11345;
  double t11347;
  double t11348;
  double t11353;
  double t11355;
  double t11360;
  double t11362;
  double t11368;
  double t11378;
  double t11379;
  double t11380;
  double t11309;
  double t11315;
  double t11320;
  double t11325;
  double t11327;
  double t11398;
  double t11403;
  double t11405;
  double t11409;
  double t11410;
  double t11413;
  double t11418;
  double t11421;
  double t11424;
  double t11425;
  double t11431;
  double t11432;
  double t11433;
  double t11436;
  double t11439;
  double t11441;
  double t11444;
  double t11445;
  double t11446;
  double t11460;
  double t11463;
  double t11464;
  double t11468;
  double t11469;
  double t11471;
  double t11472;
  double t11474;
  double t11475;
  double t11476;
  double t11481;
  double t11482;
  double t11485;
  double t11487;
  double t11489;
  double t11490;
  double t11494;
  double t11495;
  double t11496;
  double t11521;
  double t11522;
  double t11525;
  double t11526;
  double t11528;
  double t11529;
  double t11530;
  double t11509;
  double t11510;
  double t11514;
  double t11515;
  double t11517;
  double t11544;
  double t11545;
  double t11546;
  double t11548;
  double t11549;
  double t11551;
  double t11553;
  double t11557;
  double t11559;
  double t11560;
  double t11563;
  double t11564;
  double t11566;
  double t11583;
  double t11584;
  double t11586;
  double t11588;
  double t11589;
  double t11591;
  double t11592;
  double t11594;
  double t11595;
  double t11596;
  double t11598;
  double t11599;
  double t11600;
  double t11621;
  double t11622;
  double t5677;
  double t11612;
  double t11613;
  double t11614;
  double t11616;
  double t11618;
  double t11632;
  double t11633;
  double t11634;
  double t11637;
  double t11638;
  double t11640;
  double t11641;
  double t11652;
  double t11653;
  double t11654;
  double t11657;
  double t11658;
  double t11660;
  double t11661;
  double t11624;
  double t5678;
  double t5694;
  double t11672;
  double t11673;
  double t11675;
  double t11676;
  double t11677;
  double t11643;
  double t11685;
  double t11686;
  double t11687;
  double t11647;
  double t11663;
  double t11697;
  double t11698;
  double t11699;
  double t11667;
  t137 = Cos(var1[5]);
  t161 = Sin(var1[3]);
  t172 = Sin(var1[4]);
  t136 = Cos(var1[3]);
  t174 = Sin(var1[5]);
  t107 = Cos(var1[6]);
  t151 = -1.*t136*t137;
  t180 = -1.*t161*t172*t174;
  t181 = t151 + t180;
  t315 = -1.*t137*t161*t172;
  t391 = t136*t174;
  t435 = t315 + t391;
  t443 = Sin(var1[6]);
  t720 = Cos(var1[7]);
  t721 = -1.*t720;
  t740 = 1. + t721;
  t918 = Sin(var1[7]);
  t576 = t107*t181;
  t700 = t435*t443;
  t701 = t576 + t700;
  t1006 = Cos(var1[4]);
  t1744 = Cos(var1[8]);
  t1791 = -1.*t1744;
  t1816 = 1. + t1791;
  t1829 = Sin(var1[8]);
  t1702 = -1.*t1006*t720*t161;
  t1733 = t701*t918;
  t1734 = t1702 + t1733;
  t2062 = t107*t435;
  t2064 = -1.*t181*t443;
  t2102 = t2062 + t2064;
  t2528 = Cos(var1[9]);
  t2582 = -1.*t2528;
  t2601 = 1. + t2582;
  t2654 = Sin(var1[9]);
  t2698 = t1744*t1734;
  t2815 = t2102*t1829;
  t2824 = t2698 + t2815;
  t3127 = t1744*t2102;
  t3178 = -1.*t1734*t1829;
  t3213 = t3127 + t3178;
  t3299 = Cos(var1[10]);
  t3566 = -1.*t3299;
  t3596 = 1. + t3566;
  t3699 = Sin(var1[10]);
  t3734 = -1.*t2654*t2824;
  t3755 = t2528*t3213;
  t3766 = t3734 + t3755;
  t3833 = t2528*t2824;
  t3834 = t2654*t3213;
  t3892 = t3833 + t3834;
  t3924 = Cos(var1[11]);
  t3932 = -1.*t3924;
  t3938 = 1. + t3932;
  t3944 = Sin(var1[11]);
  t4010 = t3699*t3766;
  t4019 = t3299*t3892;
  t4081 = t4010 + t4019;
  t4264 = t3299*t3766;
  t4296 = -1.*t3699*t3892;
  t4333 = t4264 + t4296;
  t4439 = Cos(var1[12]);
  t4537 = -1.*t4439;
  t4543 = 1. + t4537;
  t4680 = Sin(var1[12]);
  t4752 = -1.*t3944*t4081;
  t4764 = t3924*t4333;
  t4800 = t4752 + t4764;
  t4967 = t3924*t4081;
  t4974 = t3944*t4333;
  t5046 = t4967 + t4974;
  t108 = -1.*t107;
  t110 = 1. + t108;
  t116 = 0.135*t110;
  t132 = 0. + t116;
  t447 = -0.135*t443;
  t482 = 0. + t447;
  t5169 = -1.*t137*t161;
  t5181 = t136*t172*t174;
  t5192 = t5169 + t5181;
  t5205 = t136*t137*t172;
  t5213 = t161*t174;
  t5238 = t5205 + t5213;
  t859 = 0.135*t740;
  t924 = 0.049*t918;
  t985 = 0. + t859 + t924;
  t1088 = -0.049*t740;
  t1107 = 0.135*t918;
  t1268 = 0. + t1088 + t1107;
  t5243 = t107*t5192;
  t5250 = t5238*t443;
  t5261 = t5243 + t5250;
  t1821 = -0.049*t1816;
  t1927 = -0.09*t1829;
  t1967 = 0. + t1821 + t1927;
  t2153 = -0.09*t1816;
  t2313 = 0.049*t1829;
  t2489 = 0. + t2153 + t2313;
  t2630 = -0.049*t2601;
  t2659 = -0.21*t2654;
  t2688 = 0. + t2630 + t2659;
  t5337 = t136*t1006*t720;
  t5340 = t5261*t918;
  t5346 = t5337 + t5340;
  t5365 = t107*t5238;
  t5367 = -1.*t5192*t443;
  t5378 = t5365 + t5367;
  t2987 = -0.21*t2601;
  t3011 = 0.049*t2654;
  t3113 = 0. + t2987 + t3011;
  t3634 = -0.2707*t3596;
  t3701 = 0.0016*t3699;
  t3733 = 0. + t3634 + t3701;
  t5400 = t1744*t5346;
  t5402 = t5378*t1829;
  t5406 = t5400 + t5402;
  t5453 = t1744*t5378;
  t5463 = -1.*t5346*t1829;
  t5464 = t5453 + t5463;
  t3782 = -0.0016*t3596;
  t3810 = -0.2707*t3699;
  t3825 = 0. + t3782 + t3810;
  t3942 = 0.0184*t3938;
  t3983 = -0.7055*t3944;
  t4004 = 0. + t3942 + t3983;
  t5485 = -1.*t2654*t5406;
  t5487 = t2528*t5464;
  t5488 = t5485 + t5487;
  t5503 = t2528*t5406;
  t5505 = t2654*t5464;
  t5514 = t5503 + t5505;
  t4117 = -0.7055*t3938;
  t4228 = -0.0184*t3944;
  t4258 = 0. + t4117 + t4228;
  t4675 = -1.1135*t4543;
  t4711 = 0.0216*t4680;
  t4745 = 0. + t4675 + t4711;
  t5526 = t3699*t5488;
  t5538 = t3299*t5514;
  t5542 = t5526 + t5538;
  t5569 = t3299*t5488;
  t5581 = -1.*t3699*t5514;
  t5584 = t5569 + t5581;
  t4880 = -0.0216*t4543;
  t4885 = -1.1135*t4680;
  t4914 = 0. + t4880 + t4885;
  t5596 = -1.*t3944*t5542;
  t5612 = t3924*t5584;
  t5626 = t5596 + t5612;
  t5630 = t3924*t5542;
  t5640 = t3944*t5584;
  t5642 = t5630 + t5640;
  t5720 = t136*t1006*t107*t174;
  t5723 = t136*t1006*t137*t443;
  t5736 = t5720 + t5723;
  t5775 = -1.*t136*t720*t172;
  t5783 = t5736*t918;
  t5785 = t5775 + t5783;
  t5792 = t136*t1006*t137*t107;
  t5797 = -1.*t136*t1006*t174*t443;
  t5805 = t5792 + t5797;
  t5807 = t1744*t5785;
  t5813 = t5805*t1829;
  t5815 = t5807 + t5813;
  t5829 = t1744*t5805;
  t5832 = -1.*t5785*t1829;
  t5842 = t5829 + t5832;
  t5850 = -1.*t2654*t5815;
  t5861 = t2528*t5842;
  t5862 = t5850 + t5861;
  t5874 = t2528*t5815;
  t5877 = t2654*t5842;
  t5879 = t5874 + t5877;
  t5899 = t3699*t5862;
  t5902 = t3299*t5879;
  t5912 = t5899 + t5902;
  t5920 = t3299*t5862;
  t5923 = -1.*t3699*t5879;
  t5927 = t5920 + t5923;
  t5937 = -1.*t3944*t5912;
  t5947 = t3924*t5927;
  t5950 = t5937 + t5947;
  t5962 = t3924*t5912;
  t5963 = t3944*t5927;
  t5985 = t5962 + t5963;
  t6099 = t1006*t107*t161*t174;
  t6106 = t1006*t137*t161*t443;
  t6161 = t6099 + t6106;
  t6225 = -1.*t720*t161*t172;
  t6242 = t6161*t918;
  t6250 = t6225 + t6242;
  t6268 = t1006*t137*t107*t161;
  t6272 = -1.*t1006*t161*t174*t443;
  t6281 = t6268 + t6272;
  t6292 = t1744*t6250;
  t6297 = t6281*t1829;
  t6302 = t6292 + t6297;
  t6309 = t1744*t6281;
  t6311 = -1.*t6250*t1829;
  t6315 = t6309 + t6311;
  t6325 = -1.*t2654*t6302;
  t6328 = t2528*t6315;
  t6329 = t6325 + t6328;
  t6340 = t2528*t6302;
  t6346 = t2654*t6315;
  t6356 = t6340 + t6346;
  t6372 = t3699*t6329;
  t6374 = t3299*t6356;
  t6377 = t6372 + t6374;
  t6380 = t3299*t6329;
  t6386 = -1.*t3699*t6356;
  t6387 = t6380 + t6386;
  t6393 = -1.*t3944*t6377;
  t6408 = t3924*t6387;
  t6411 = t6393 + t6408;
  t6418 = t3924*t6377;
  t6423 = t3944*t6387;
  t6432 = t6418 + t6423;
  t6533 = -1.*t107*t172*t174;
  t6541 = -1.*t137*t172*t443;
  t6549 = t6533 + t6541;
  t6576 = -1.*t1006*t720;
  t6577 = t6549*t918;
  t6580 = t6576 + t6577;
  t6587 = -1.*t137*t107*t172;
  t6591 = t172*t174*t443;
  t6592 = t6587 + t6591;
  t6614 = t1744*t6580;
  t6627 = t6592*t1829;
  t6637 = t6614 + t6627;
  t6658 = t1744*t6592;
  t6662 = -1.*t6580*t1829;
  t6669 = t6658 + t6662;
  t6687 = -1.*t2654*t6637;
  t6714 = t2528*t6669;
  t6722 = t6687 + t6714;
  t6735 = t2528*t6637;
  t6742 = t2654*t6669;
  t6743 = t6735 + t6742;
  t6750 = t3699*t6722;
  t6774 = t3299*t6743;
  t6777 = t6750 + t6774;
  t6784 = t3299*t6722;
  t6788 = -1.*t3699*t6743;
  t6789 = t6784 + t6788;
  t6812 = -1.*t3944*t6777;
  t6813 = t3924*t6789;
  t6815 = t6812 + t6813;
  t6833 = t3924*t6777;
  t6835 = t3944*t6789;
  t6841 = t6833 + t6835;
  t6922 = t137*t161;
  t6924 = -1.*t136*t172*t174;
  t6927 = t6922 + t6924;
  t6941 = t6927*t443;
  t6942 = t5365 + t6941;
  t6960 = t107*t6927;
  t6971 = -1.*t5238*t443;
  t6973 = t6960 + t6971;
  t6990 = t1744*t6942*t918;
  t6998 = t6973*t1829;
  t6999 = t6990 + t6998;
  t7012 = t1744*t6973;
  t7013 = -1.*t6942*t918*t1829;
  t7014 = t7012 + t7013;
  t7026 = -1.*t2654*t6999;
  t7033 = t2528*t7014;
  t7036 = t7026 + t7033;
  t7044 = t2528*t6999;
  t7045 = t2654*t7014;
  t7050 = t7044 + t7045;
  t7071 = t3699*t7036;
  t7072 = t3299*t7050;
  t7079 = t7071 + t7072;
  t7084 = t3299*t7036;
  t7097 = -1.*t3699*t7050;
  t7108 = t7084 + t7097;
  t7130 = -1.*t3944*t7079;
  t7135 = t3924*t7108;
  t7140 = t7130 + t7135;
  t7147 = t3924*t7079;
  t7165 = t3944*t7108;
  t7177 = t7147 + t7165;
  t7280 = t137*t161*t172;
  t7281 = -1.*t136*t174;
  t7284 = t7280 + t7281;
  t7297 = t107*t7284;
  t7298 = t181*t443;
  t7306 = t7297 + t7298;
  t7329 = -1.*t7284*t443;
  t7330 = t576 + t7329;
  t7344 = t1744*t7306*t918;
  t7362 = t7330*t1829;
  t7373 = t7344 + t7362;
  t7394 = t1744*t7330;
  t7403 = -1.*t7306*t918*t1829;
  t7408 = t7394 + t7403;
  t7413 = -1.*t2654*t7373;
  t7419 = t2528*t7408;
  t7423 = t7413 + t7419;
  t7466 = t2528*t7373;
  t7468 = t2654*t7408;
  t7473 = t7466 + t7468;
  t7482 = t3699*t7423;
  t7490 = t3299*t7473;
  t7493 = t7482 + t7490;
  t7503 = t3299*t7423;
  t7510 = -1.*t3699*t7473;
  t7532 = t7503 + t7510;
  t7541 = -1.*t3944*t7493;
  t7545 = t3924*t7532;
  t7547 = t7541 + t7545;
  t7564 = t3924*t7493;
  t7579 = t3944*t7532;
  t7603 = t7564 + t7579;
  t7745 = t1006*t137*t107;
  t7750 = -1.*t1006*t174*t443;
  t7766 = t7745 + t7750;
  t7811 = -1.*t1006*t107*t174;
  t7815 = -1.*t1006*t137*t443;
  t7836 = t7811 + t7815;
  t7891 = t1744*t7766*t918;
  t7924 = t7836*t1829;
  t7933 = t7891 + t7924;
  t7970 = t1744*t7836;
  t7983 = -1.*t7766*t918*t1829;
  t7984 = t7970 + t7983;
  t8012 = -1.*t2654*t7933;
  t8015 = t2528*t7984;
  t8029 = t8012 + t8015;
  t8041 = t2528*t7933;
  t8062 = t2654*t7984;
  t8087 = t8041 + t8062;
  t8137 = t3699*t8029;
  t8141 = t3299*t8087;
  t8153 = t8137 + t8141;
  t8167 = t3299*t8029;
  t8172 = -1.*t3699*t8087;
  t8175 = t8167 + t8172;
  t8185 = -1.*t3944*t8153;
  t8186 = t3924*t8175;
  t8192 = t8185 + t8186;
  t8202 = t3924*t8153;
  t8229 = t3944*t8175;
  t8239 = t8202 + t8229;
  t8432 = -1.*t107*t5192;
  t8442 = t8432 + t6971;
  t8462 = t1744*t5378*t918;
  t8471 = t8442*t1829;
  t8499 = t8462 + t8471;
  t8509 = t1744*t8442;
  t8546 = -1.*t5378*t918*t1829;
  t8595 = t8509 + t8546;
  t8651 = -1.*t2654*t8499;
  t8654 = t2528*t8595;
  t8659 = t8651 + t8654;
  t8685 = t2528*t8499;
  t8717 = t2654*t8595;
  t8721 = t8685 + t8717;
  t8728 = t3699*t8659;
  t8735 = t3299*t8721;
  t8745 = t8728 + t8735;
  t8753 = t3299*t8659;
  t8763 = -1.*t3699*t8721;
  t8787 = t8753 + t8763;
  t8809 = -1.*t3944*t8745;
  t8826 = t3924*t8787;
  t8862 = t8809 + t8826;
  t8878 = t3924*t8745;
  t8890 = t3944*t8787;
  t8895 = t8878 + t8890;
  t8982 = t136*t137;
  t9010 = t161*t172*t174;
  t9011 = t8982 + t9010;
  t9054 = -1.*t9011*t443;
  t9063 = t7297 + t9054;
  t9079 = -1.*t107*t9011;
  t9097 = t9079 + t7329;
  t9123 = t1744*t9063*t918;
  t9131 = t9097*t1829;
  t9132 = t9123 + t9131;
  t9183 = t1744*t9097;
  t9203 = -1.*t9063*t918*t1829;
  t9211 = t9183 + t9203;
  t9220 = -1.*t2654*t9132;
  t9226 = t2528*t9211;
  t9258 = t9220 + t9226;
  t9277 = t2528*t9132;
  t9279 = t2654*t9211;
  t9319 = t9277 + t9279;
  t9352 = t3699*t9258;
  t9368 = t3299*t9319;
  t9384 = t9352 + t9368;
  t9411 = t3299*t9258;
  t9417 = -1.*t3699*t9319;
  t9418 = t9411 + t9417;
  t9472 = -1.*t3944*t9384;
  t9538 = t3924*t9418;
  t9563 = t9472 + t9538;
  t9605 = t3924*t9384;
  t9640 = t3944*t9418;
  t9647 = t9605 + t9640;
  t7767 = 0.1305*t720*t7766;
  t7777 = t7766*t985;
  t7794 = t7766*t918*t1967;
  t7878 = t7836*t2489;
  t7963 = t2688*t7933;
  t8002 = t3113*t7984;
  t8039 = t3733*t8029;
  t8128 = t3825*t8087;
  t8157 = t4004*t8153;
  t8178 = t4258*t8175;
  t8194 = t4745*t8192;
  t8244 = t4914*t8239;
  t8253 = t4680*t8192;
  t8259 = t4439*t8239;
  t8261 = t8253 + t8259;
  t8266 = 0.088451*t8261;
  t8284 = t4439*t8192;
  t8311 = -1.*t4680*t8239;
  t8351 = t8284 + t8311;
  t8370 = -1.062256*t8351;
  t5305 = t720*t5261;
  t5308 = -1.*t136*t1006*t918;
  t5314 = t5305 + t5308;
  t10009 = -1.*t1744*t2654*t5314;
  t10026 = -1.*t2528*t5314*t1829;
  t10031 = t10009 + t10026;
  t10042 = t2528*t1744*t5314;
  t10063 = -1.*t2654*t5314*t1829;
  t10077 = t10042 + t10063;
  t10094 = t3699*t10031;
  t10095 = t3299*t10077;
  t10099 = t10094 + t10095;
  t10106 = t3299*t10031;
  t10108 = -1.*t3699*t10077;
  t10116 = t10106 + t10108;
  t10132 = -1.*t3944*t10099;
  t10140 = t3924*t10116;
  t10144 = t10132 + t10140;
  t10162 = t3924*t10099;
  t10166 = t3944*t10116;
  t10172 = t10162 + t10166;
  t9840 = 0.135*t720;
  t9848 = -0.049*t918;
  t9851 = t9840 + t9848;
  t9887 = 0.049*t720;
  t9920 = t9887 + t1107;
  t10244 = t107*t9011;
  t10251 = t7284*t443;
  t10258 = t10244 + t10251;
  t10270 = t720*t10258;
  t10275 = -1.*t1006*t161*t918;
  t10279 = t10270 + t10275;
  t10368 = -1.*t1744*t2654*t10279;
  t10378 = -1.*t2528*t10279*t1829;
  t10391 = t10368 + t10378;
  t10400 = t2528*t1744*t10279;
  t10408 = -1.*t2654*t10279*t1829;
  t10409 = t10400 + t10408;
  t10414 = t3699*t10391;
  t10424 = t3299*t10409;
  t10425 = t10414 + t10424;
  t10444 = t3299*t10391;
  t10450 = -1.*t3699*t10409;
  t10453 = t10444 + t10450;
  t10462 = -1.*t3944*t10425;
  t10464 = t3924*t10453;
  t10471 = t10462 + t10464;
  t10481 = t3924*t10425;
  t10482 = t3944*t10453;
  t10489 = t10481 + t10482;
  t10587 = t1006*t107*t174;
  t10591 = t1006*t137*t443;
  t10596 = t10587 + t10591;
  t10623 = t720*t10596;
  t10625 = t172*t918;
  t10630 = t10623 + t10625;
  t10669 = -1.*t1744*t2654*t10630;
  t10673 = -1.*t2528*t10630*t1829;
  t10676 = t10669 + t10673;
  t10686 = t2528*t1744*t10630;
  t10692 = -1.*t2654*t10630*t1829;
  t10695 = t10686 + t10692;
  t10705 = t3699*t10676;
  t10710 = t3299*t10695;
  t10713 = t10705 + t10710;
  t10718 = t3299*t10676;
  t10719 = -1.*t3699*t10695;
  t10723 = t10718 + t10719;
  t10751 = -1.*t3944*t10713;
  t10757 = t3924*t10723;
  t10779 = t10751 + t10757;
  t10785 = t3924*t10713;
  t10799 = t3944*t10723;
  t10808 = t10785 + t10799;
  t10896 = -1.*t1744*t5346;
  t10897 = -1.*t5378*t1829;
  t10902 = t10896 + t10897;
  t10914 = t2654*t10902;
  t10915 = t10914 + t5487;
  t10920 = t2528*t10902;
  t10924 = -1.*t2654*t5464;
  t10936 = t10920 + t10924;
  t10945 = -1.*t3699*t10915;
  t10956 = t3299*t10936;
  t10957 = t10945 + t10956;
  t10965 = t3299*t10915;
  t10971 = t3699*t10936;
  t10978 = t10965 + t10971;
  t10981 = t3944*t10957;
  t10984 = t3924*t10978;
  t10991 = t10981 + t10984;
  t10998 = t3924*t10957;
  t11008 = -1.*t3944*t10978;
  t11011 = t10998 + t11008;
  t10853 = 0.049*t1744;
  t10860 = t10853 + t1927;
  t10871 = -0.09*t1744;
  t10880 = -0.049*t1829;
  t10889 = t10871 + t10880;
  t11058 = t1006*t720*t161;
  t11066 = t10258*t918;
  t11069 = t11058 + t11066;
  t11077 = -1.*t1744*t11069;
  t11079 = -1.*t9063*t1829;
  t11087 = t11077 + t11079;
  t11089 = t1744*t9063;
  t11091 = -1.*t11069*t1829;
  t11092 = t11089 + t11091;
  t11096 = t2654*t11087;
  t11099 = t2528*t11092;
  t11100 = t11096 + t11099;
  t11102 = t2528*t11087;
  t11106 = -1.*t2654*t11092;
  t11110 = t11102 + t11106;
  t11115 = -1.*t3699*t11100;
  t11123 = t3299*t11110;
  t11126 = t11115 + t11123;
  t11129 = t3299*t11100;
  t11130 = t3699*t11110;
  t11131 = t11129 + t11130;
  t11133 = t3944*t11126;
  t11135 = t3924*t11131;
  t11136 = t11133 + t11135;
  t11144 = t3924*t11126;
  t11151 = -1.*t3944*t11131;
  t11155 = t11144 + t11151;
  t11199 = -1.*t720*t172;
  t11202 = t10596*t918;
  t11203 = t11199 + t11202;
  t11206 = -1.*t1744*t11203;
  t11210 = -1.*t7766*t1829;
  t11218 = t11206 + t11210;
  t11223 = t1744*t7766;
  t11225 = -1.*t11203*t1829;
  t11226 = t11223 + t11225;
  t11232 = t2654*t11218;
  t11233 = t2528*t11226;
  t11238 = t11232 + t11233;
  t11243 = t2528*t11218;
  t11245 = -1.*t2654*t11226;
  t11246 = t11243 + t11245;
  t11251 = -1.*t3699*t11238;
  t11254 = t3299*t11246;
  t11255 = t11251 + t11254;
  t11257 = t3299*t11238;
  t11258 = t3699*t11246;
  t11259 = t11257 + t11258;
  t11261 = t3944*t11255;
  t11265 = t3924*t11259;
  t11269 = t11261 + t11265;
  t11277 = t3924*t11255;
  t11281 = -1.*t3944*t11259;
  t11282 = t11277 + t11281;
  t11338 = -1.*t2528*t5406;
  t11342 = t11338 + t10924;
  t11345 = -1.*t3699*t5488;
  t11347 = t3299*t11342;
  t11348 = t11345 + t11347;
  t11353 = t3699*t11342;
  t11355 = t5569 + t11353;
  t11360 = t3944*t11348;
  t11362 = t3924*t11355;
  t11368 = t11360 + t11362;
  t11378 = t3924*t11348;
  t11379 = -1.*t3944*t11355;
  t11380 = t11378 + t11379;
  t11309 = -0.21*t2528;
  t11315 = -0.049*t2654;
  t11320 = t11309 + t11315;
  t11325 = 0.049*t2528;
  t11327 = t11325 + t2659;
  t11398 = t1744*t11069;
  t11403 = t9063*t1829;
  t11405 = t11398 + t11403;
  t11409 = -1.*t2654*t11405;
  t11410 = t11409 + t11099;
  t11413 = -1.*t2528*t11405;
  t11418 = t11413 + t11106;
  t11421 = -1.*t3699*t11410;
  t11424 = t3299*t11418;
  t11425 = t11421 + t11424;
  t11431 = t3299*t11410;
  t11432 = t3699*t11418;
  t11433 = t11431 + t11432;
  t11436 = t3944*t11425;
  t11439 = t3924*t11433;
  t11441 = t11436 + t11439;
  t11444 = t3924*t11425;
  t11445 = -1.*t3944*t11433;
  t11446 = t11444 + t11445;
  t11460 = t1744*t11203;
  t11463 = t7766*t1829;
  t11464 = t11460 + t11463;
  t11468 = -1.*t2654*t11464;
  t11469 = t11468 + t11233;
  t11471 = -1.*t2528*t11464;
  t11472 = t11471 + t11245;
  t11474 = -1.*t3699*t11469;
  t11475 = t3299*t11472;
  t11476 = t11474 + t11475;
  t11481 = t3299*t11469;
  t11482 = t3699*t11472;
  t11485 = t11481 + t11482;
  t11487 = t3944*t11476;
  t11489 = t3924*t11485;
  t11490 = t11487 + t11489;
  t11494 = t3924*t11476;
  t11495 = -1.*t3944*t11485;
  t11496 = t11494 + t11495;
  t11521 = -1.*t3299*t5514;
  t11522 = t11345 + t11521;
  t11525 = t3944*t11522;
  t11526 = t11525 + t5612;
  t11528 = t3924*t11522;
  t11529 = -1.*t3944*t5584;
  t11530 = t11528 + t11529;
  t11509 = 0.0016*t3299;
  t11510 = t11509 + t3810;
  t11514 = -0.2707*t3299;
  t11515 = -0.0016*t3699;
  t11517 = t11514 + t11515;
  t11544 = t2528*t11405;
  t11545 = t2654*t11092;
  t11546 = t11544 + t11545;
  t11548 = -1.*t3299*t11546;
  t11549 = t11421 + t11548;
  t11551 = -1.*t3699*t11546;
  t11553 = t11431 + t11551;
  t11557 = t3944*t11549;
  t11559 = t3924*t11553;
  t11560 = t11557 + t11559;
  t11563 = t3924*t11549;
  t11564 = -1.*t3944*t11553;
  t11566 = t11563 + t11564;
  t11583 = t2528*t11464;
  t11584 = t2654*t11226;
  t11586 = t11583 + t11584;
  t11588 = -1.*t3299*t11586;
  t11589 = t11474 + t11588;
  t11591 = -1.*t3699*t11586;
  t11592 = t11481 + t11591;
  t11594 = t3944*t11589;
  t11595 = t3924*t11592;
  t11596 = t11594 + t11595;
  t11598 = t3924*t11589;
  t11599 = -1.*t3944*t11592;
  t11600 = t11598 + t11599;
  t11621 = -1.*t3924*t5542;
  t11622 = t11621 + t11529;
  t5677 = t4439*t5626;
  t11612 = -0.7055*t3924;
  t11613 = 0.0184*t3944;
  t11614 = t11612 + t11613;
  t11616 = -0.0184*t3924;
  t11618 = t11616 + t3983;
  t11632 = t3699*t11410;
  t11633 = t3299*t11546;
  t11634 = t11632 + t11633;
  t11637 = -1.*t3944*t11634;
  t11638 = t11637 + t11559;
  t11640 = -1.*t3924*t11634;
  t11641 = t11640 + t11564;
  t11652 = t3699*t11469;
  t11653 = t3299*t11586;
  t11654 = t11652 + t11653;
  t11657 = -1.*t3944*t11654;
  t11658 = t11657 + t11595;
  t11660 = -1.*t3924*t11654;
  t11661 = t11660 + t11599;
  t11624 = -1.*t4680*t5626;
  t5678 = -1.*t4680*t5642;
  t5694 = t5677 + t5678;
  t11672 = 0.0216*t4439;
  t11673 = t11672 + t4885;
  t11675 = -1.1135*t4439;
  t11676 = -0.0216*t4680;
  t11677 = t11675 + t11676;
  t11643 = -1.*t4680*t11638;
  t11685 = t3924*t11634;
  t11686 = t3944*t11553;
  t11687 = t11685 + t11686;
  t11647 = t4439*t11638;
  t11663 = -1.*t4680*t11658;
  t11697 = t3924*t11654;
  t11698 = t3944*t11592;
  t11699 = t11697 + t11698;
  t11667 = t4439*t11658;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1006*t1268*t161 + t132*t181 + t1734*t1967 + t2102*t2489 + t2688*t2824 + t3113*t3213 + t3733*t3766 + t3825*t3892 + t4004*t4081 + t4258*t4333 + t4745*t4800 + t435*t482 + t4914*t5046 + 0.088451*(t4680*t4800 + t4439*t5046) - 1.062256*(t4439*t4800 - 1.*t4680*t5046) + 0.1305*(t701*t720 + t1006*t161*t918) + t701*t985;
  p_output1[10]=t1006*t1268*t136 + t132*t5192 + t482*t5238 + 0.1305*t5314 + t1967*t5346 + t2489*t5378 + t2688*t5406 + t3113*t5464 + t3733*t5488 + t3825*t5514 + t4004*t5542 + t4258*t5584 + t4745*t5626 + t4914*t5642 + 0.088451*(t4680*t5626 + t4439*t5642) - 1.062256*t5694 + t5261*t985;
  p_output1[11]=0;
  p_output1[12]=-1.*t1268*t136*t172 + t1006*t132*t136*t174 + t1006*t136*t137*t482 + t1967*t5785 + t2489*t5805 + t2688*t5815 + t3113*t5842 + t3733*t5862 + t3825*t5879 + t4004*t5912 + t4258*t5927 + t4745*t5950 + t4914*t5985 + 0.088451*(t4680*t5950 + t4439*t5985) - 1.062256*(t4439*t5950 - 1.*t4680*t5985) + 0.1305*(t5736*t720 + t136*t172*t918) + t5736*t985;
  p_output1[13]=-1.*t1268*t161*t172 + t1006*t132*t161*t174 + t1006*t137*t161*t482 + t1967*t6250 + t2489*t6281 + t2688*t6302 + t3113*t6315 + t3733*t6329 + t3825*t6356 + t4004*t6377 + t4258*t6387 + t4745*t6411 + t4914*t6432 + 0.088451*(t4680*t6411 + t4439*t6432) - 1.062256*(t4439*t6411 - 1.*t4680*t6432) + 0.1305*(t6161*t720 + t161*t172*t918) + t6161*t985;
  p_output1[14]=-1.*t1006*t1268 - 1.*t132*t172*t174 - 1.*t137*t172*t482 + t1967*t6580 + t2489*t6592 + t2688*t6637 + t3113*t6669 + t3733*t6722 + t3825*t6743 + t4004*t6777 + t4258*t6789 + t4745*t6815 + t4914*t6841 + 0.088451*(t4680*t6815 + t4439*t6841) - 1.062256*(t4439*t6815 - 1.*t4680*t6841) + 0.1305*(t6549*t720 + t1006*t918) + t6549*t985;
  p_output1[15]=t132*t5238 + t482*t6927 + t2489*t6973 + t2688*t6999 + t3113*t7014 + t3733*t7036 + t3825*t7050 + t4004*t7079 + t4258*t7108 + t4745*t7140 + t4914*t7177 + 0.088451*(t4680*t7140 + t4439*t7177) - 1.062256*(t4439*t7140 - 1.*t4680*t7177) + 0.1305*t6942*t720 + t1967*t6942*t918 + t6942*t985;
  p_output1[16]=t181*t482 + t132*t7284 + 0.1305*t720*t7306 + t2489*t7330 + t2688*t7373 + t3113*t7408 + t3733*t7423 + t3825*t7473 + t4004*t7493 + t4258*t7532 + t4745*t7547 + t4914*t7603 + 0.088451*(t4680*t7547 + t4439*t7603) - 1.062256*(t4439*t7547 - 1.*t4680*t7603) + t1967*t7306*t918 + t7306*t985;
  p_output1[17]=t1006*t132*t137 - 1.*t1006*t174*t482 + t7767 + t7777 + t7794 + t7878 + t7963 + t8002 + t8039 + t8128 + t8157 + t8178 + t8194 + t8244 + t8266 + t8370;
  p_output1[18]=0.135*t443*t5192 - 0.135*t107*t5238 + 0.1305*t5378*t720 + t2489*t8442 + t2688*t8499 + t3113*t8595 + t3733*t8659 + t3825*t8721 + t4004*t8745 + t4258*t8787 + t4745*t8862 + t4914*t8895 + 0.088451*(t4680*t8862 + t4439*t8895) - 1.062256*(t4439*t8862 - 1.*t4680*t8895) + t1967*t5378*t918 + t5378*t985;
  p_output1[19]=-0.135*t107*t7284 + 0.135*t443*t9011 + 0.1305*t720*t9063 + t2489*t9097 + t2688*t9132 + t1967*t9063*t918 + t3113*t9211 + t3733*t9258 + t3825*t9319 + t4004*t9384 + t4258*t9418 + t4745*t9563 + t4914*t9647 + 0.088451*(t4680*t9563 + t4439*t9647) - 1.062256*(t4439*t9563 - 1.*t4680*t9647) + t9063*t985;
  p_output1[20]=-0.135*t1006*t107*t137 + 0.135*t1006*t174*t443 + t7767 + t7777 + t7794 + t7878 + t7963 + t8002 + t8039 + t8128 + t8157 + t8178 + t8194 + t8244 + t8266 + t8370;
  p_output1[21]=t10031*t3733 + t10077*t3825 + t10099*t4004 + t10116*t4258 + 0.088451*(t10172*t4439 + t10144*t4680) - 1.062256*(t10144*t4439 - 1.*t10172*t4680) + t10144*t4745 + t10172*t4914 + t1967*t5314 + t1744*t2688*t5314 - 1.*t1829*t3113*t5314 + 0.1305*(-1.*t1006*t136*t720 - 1.*t5261*t918) + t1006*t136*t9851 + t5261*t9920;
  p_output1[22]=t10279*t1967 + t10279*t1744*t2688 - 1.*t10279*t1829*t3113 + t10391*t3733 + t10409*t3825 + t10425*t4004 + t10453*t4258 + 0.088451*(t10489*t4439 + t10471*t4680) - 1.062256*(t10471*t4439 - 1.*t10489*t4680) + t10471*t4745 + t10489*t4914 + 0.1305*(t1702 - 1.*t10258*t918) + t1006*t161*t9851 + t10258*t9920;
  p_output1[23]=t10630*t1967 + t10630*t1744*t2688 - 1.*t10630*t1829*t3113 + t10676*t3733 + t10695*t3825 + t10713*t4004 + t10723*t4258 + 0.088451*(t10808*t4439 + t10779*t4680) - 1.062256*(t10779*t4439 - 1.*t10808*t4680) + t10779*t4745 + t10808*t4914 + 0.1305*(t172*t720 - 1.*t10596*t918) - 1.*t172*t9851 + t10596*t9920;
  p_output1[24]=t10902*t3113 + t10936*t3733 + t10915*t3825 + t10978*t4004 + t10957*t4258 - 1.062256*(t11011*t4439 - 1.*t10991*t4680) + 0.088451*(t10991*t4439 + t11011*t4680) + t11011*t4745 + t10991*t4914 + t10889*t5346 + t10860*t5378 + t2688*t5464;
  p_output1[25]=t10889*t11069 + t11092*t2688 + t11087*t3113 + t11110*t3733 + t11100*t3825 + t11131*t4004 + t11126*t4258 - 1.062256*(t11155*t4439 - 1.*t11136*t4680) + 0.088451*(t11136*t4439 + t11155*t4680) + t11155*t4745 + t11136*t4914 + t10860*t9063;
  p_output1[26]=t10889*t11203 + t11226*t2688 + t11218*t3113 + t11246*t3733 + t11238*t3825 + t11259*t4004 + t11255*t4258 - 1.062256*(t11282*t4439 - 1.*t11269*t4680) + 0.088451*(t11269*t4439 + t11282*t4680) + t11282*t4745 + t11269*t4914 + t10860*t7766;
  p_output1[27]=t11342*t3733 + t11355*t4004 + t11348*t4258 - 1.062256*(t11380*t4439 - 1.*t11368*t4680) + 0.088451*(t11368*t4439 + t11380*t4680) + t11380*t4745 + t11368*t4914 + t11320*t5406 + t11327*t5464 + t3825*t5488;
  p_output1[28]=t11092*t11327 + t11320*t11405 + t11418*t3733 + t11410*t3825 + t11433*t4004 + t11425*t4258 - 1.062256*(t11446*t4439 - 1.*t11441*t4680) + 0.088451*(t11441*t4439 + t11446*t4680) + t11446*t4745 + t11441*t4914;
  p_output1[29]=t11226*t11327 + t11320*t11464 + t11472*t3733 + t11469*t3825 + t11485*t4004 + t11476*t4258 - 1.062256*(t11496*t4439 - 1.*t11490*t4680) + 0.088451*(t11490*t4439 + t11496*t4680) + t11496*t4745 + t11490*t4914;
  p_output1[30]=t11522*t4258 - 1.062256*(t11530*t4439 - 1.*t11526*t4680) + 0.088451*(t11526*t4439 + t11530*t4680) + t11530*t4745 + t11526*t4914 + t11510*t5488 + t11517*t5514 + t4004*t5584;
  p_output1[31]=t11410*t11510 + t11517*t11546 + t11553*t4004 + t11549*t4258 - 1.062256*(t11566*t4439 - 1.*t11560*t4680) + 0.088451*(t11560*t4439 + t11566*t4680) + t11566*t4745 + t11560*t4914;
  p_output1[32]=t11469*t11510 + t11517*t11586 + t11592*t4004 + t11589*t4258 - 1.062256*(t11600*t4439 - 1.*t11596*t4680) + 0.088451*(t11596*t4439 + t11600*t4680) + t11600*t4745 + t11596*t4914;
  p_output1[33]=-1.062256*(t11624 + t11622*t4439) + t11622*t4745 + t11614*t5542 + t11618*t5584 + t4914*t5626 + 0.088451*(t11622*t4680 + t5677);
  p_output1[34]=t11553*t11618 + t11614*t11634 - 1.062256*(t11643 + t11641*t4439) + 0.088451*(t11647 + t11641*t4680) + t11641*t4745 + t11638*t4914;
  p_output1[35]=t11592*t11618 + t11614*t11654 - 1.062256*(t11663 + t11661*t4439) + 0.088451*(t11667 + t11661*t4680) + t11661*t4745 + t11658*t4914;
  p_output1[36]=t11673*t5626 + t11677*t5642 - 1.062256*(t11624 - 1.*t4439*t5642) + 0.088451*t5694;
  p_output1[37]=t11638*t11673 + t11677*t11687 - 1.062256*(t11643 - 1.*t11687*t4439) + 0.088451*(t11647 - 1.*t11687*t4680);
  p_output1[38]=t11658*t11673 + t11677*t11699 - 1.062256*(t11663 - 1.*t11699*t4439) + 0.088451*(t11667 - 1.*t11699*t4680);
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



void Jp_LeftToeFront_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
