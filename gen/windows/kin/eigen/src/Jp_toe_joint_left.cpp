/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:22:05 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_toe_joint_left.h"

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
static void output1(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  double t128;
  double t132;
  double t138;
  double t125;
  double t167;
  double t35;
  double t129;
  double t174;
  double t262;
  double t414;
  double t482;
  double t513;
  double t517;
  double t975;
  double t980;
  double t991;
  double t1034;
  double t759;
  double t884;
  double t928;
  double t1220;
  double t1513;
  double t1539;
  double t1546;
  double t1606;
  double t1403;
  double t1406;
  double t1464;
  double t1683;
  double t1688;
  double t1726;
  double t1903;
  double t1933;
  double t1935;
  double t2039;
  double t2107;
  double t2112;
  double t2252;
  double t2296;
  double t2340;
  double t2344;
  double t2466;
  double t2507;
  double t2526;
  double t2748;
  double t2887;
  double t2901;
  double t2916;
  double t3118;
  double t3121;
  double t3122;
  double t3183;
  double t3203;
  double t3208;
  double t3221;
  double t3301;
  double t3319;
  double t3327;
  double t3516;
  double t3525;
  double t3534;
  double t3558;
  double t3596;
  double t3609;
  double t3649;
  double t3684;
  double t3695;
  double t3700;
  double t3845;
  double t3853;
  double t3883;
  double t81;
  double t94;
  double t105;
  double t115;
  double t599;
  double t677;
  double t4152;
  double t4158;
  double t4219;
  double t4234;
  double t4309;
  double t4319;
  double t995;
  double t1111;
  double t1182;
  double t1227;
  double t1232;
  double t1238;
  double t4342;
  double t4350;
  double t4371;
  double t1588;
  double t1626;
  double t1646;
  double t1764;
  double t1771;
  double t1783;
  double t1960;
  double t2074;
  double t2102;
  double t4594;
  double t4709;
  double t4711;
  double t4746;
  double t4749;
  double t4752;
  double t2259;
  double t2279;
  double t2286;
  double t2643;
  double t2753;
  double t2823;
  double t4766;
  double t4804;
  double t4844;
  double t4933;
  double t4934;
  double t4963;
  double t3068;
  double t3088;
  double t3110;
  double t3211;
  double t3295;
  double t3296;
  double t5024;
  double t5039;
  double t5045;
  double t5092;
  double t5110;
  double t5123;
  double t3386;
  double t3478;
  double t3514;
  double t3646;
  double t3655;
  double t3667;
  double t5157;
  double t5170;
  double t5211;
  double t5262;
  double t5288;
  double t5323;
  double t3727;
  double t3754;
  double t3798;
  double t5369;
  double t5383;
  double t5416;
  double t5431;
  double t5474;
  double t5478;
  double t5724;
  double t5745;
  double t5751;
  double t5814;
  double t5824;
  double t5835;
  double t5842;
  double t5851;
  double t5866;
  double t5960;
  double t5985;
  double t6005;
  double t6028;
  double t6033;
  double t6065;
  double t6075;
  double t6093;
  double t6101;
  double t6119;
  double t6127;
  double t6132;
  double t6209;
  double t6217;
  double t6257;
  double t6269;
  double t6300;
  double t6335;
  double t6361;
  double t6374;
  double t6375;
  double t6401;
  double t6429;
  double t6434;
  double t6654;
  double t6663;
  double t6667;
  double t6741;
  double t6754;
  double t6793;
  double t6834;
  double t6839;
  double t6841;
  double t6858;
  double t6862;
  double t6871;
  double t6923;
  double t6947;
  double t6961;
  double t6969;
  double t6971;
  double t6974;
  double t7005;
  double t7025;
  double t7031;
  double t7068;
  double t7069;
  double t7087;
  double t7099;
  double t7138;
  double t7146;
  double t7183;
  double t7204;
  double t7226;
  double t7261;
  double t7268;
  double t7286;
  double t7476;
  double t7486;
  double t7497;
  double t7593;
  double t7615;
  double t7626;
  double t7631;
  double t7637;
  double t7639;
  double t7650;
  double t7660;
  double t7661;
  double t7689;
  double t7695;
  double t7706;
  double t7716;
  double t7720;
  double t7736;
  double t7748;
  double t7757;
  double t7761;
  double t7767;
  double t7777;
  double t7794;
  double t7810;
  double t7831;
  double t7832;
  double t7869;
  double t7878;
  double t7892;
  double t7898;
  double t7905;
  double t7913;
  double t8002;
  double t8009;
  double t8018;
  double t8027;
  double t8030;
  double t8046;
  double t8058;
  double t8066;
  double t8084;
  double t8089;
  double t8097;
  double t8102;
  double t8103;
  double t8105;
  double t8112;
  double t8124;
  double t8126;
  double t8128;
  double t8141;
  double t8142;
  double t8151;
  double t8153;
  double t8156;
  double t8158;
  double t8159;
  double t8160;
  double t8168;
  double t8169;
  double t8170;
  double t8178;
  double t8182;
  double t8192;
  double t8244;
  double t8246;
  double t8250;
  double t8266;
  double t8270;
  double t8281;
  double t8301;
  double t8304;
  double t8312;
  double t8319;
  double t8320;
  double t8330;
  double t8348;
  double t8361;
  double t8387;
  double t8404;
  double t8405;
  double t8418;
  double t8426;
  double t8428;
  double t8436;
  double t8437;
  double t8438;
  double t8451;
  double t8463;
  double t8484;
  double t8503;
  double t8505;
  double t8510;
  double t8521;
  double t8529;
  double t8541;
  double t8613;
  double t8618;
  double t8622;
  double t8642;
  double t8645;
  double t8648;
  double t8653;
  double t8657;
  double t8658;
  double t8668;
  double t8669;
  double t8678;
  double t8687;
  double t8701;
  double t8711;
  double t8717;
  double t8725;
  double t8726;
  double t8731;
  double t8740;
  double t8741;
  double t8755;
  double t8756;
  double t8757;
  double t8771;
  double t8779;
  double t8784;
  double t8792;
  double t8802;
  double t8803;
  double t8897;
  double t8900;
  double t8906;
  double t8910;
  double t8922;
  double t8940;
  double t8942;
  double t8952;
  double t8960;
  double t8963;
  double t8968;
  double t8973;
  double t8974;
  double t8977;
  double t8984;
  double t8986;
  double t8987;
  double t8991;
  double t8992;
  double t9000;
  double t9006;
  double t9011;
  double t9012;
  double t9023;
  double t9034;
  double t9041;
  double t9097;
  double t9100;
  double t9105;
  double t9112;
  double t9117;
  double t9133;
  double t9140;
  double t9147;
  double t9150;
  double t9153;
  double t9164;
  double t9165;
  double t9167;
  double t9177;
  double t9178;
  double t9180;
  double t9184;
  double t9186;
  double t9187;
  double t9190;
  double t9193;
  double t9195;
  double t9202;
  double t9204;
  double t9236;
  double t9244;
  double t9249;
  double t9252;
  double t9265;
  double t9266;
  double t9270;
  double t8629;
  double t8630;
  double t8639;
  double t8651;
  double t8661;
  double t8686;
  double t8714;
  double t8727;
  double t8745;
  double t8765;
  double t8785;
  double t8805;
  double t8807;
  double t8813;
  double t8815;
  double t8821;
  double t8822;
  double t8835;
  double t8840;
  double t8843;
  double t4462;
  double t4464;
  double t4487;
  double t9405;
  double t9406;
  double t9409;
  double t9418;
  double t9422;
  double t9423;
  double t9436;
  double t9438;
  double t9439;
  double t9444;
  double t9450;
  double t9453;
  double t9458;
  double t9463;
  double t9471;
  double t9480;
  double t9483;
  double t9486;
  double t9353;
  double t9356;
  double t9357;
  double t9369;
  double t9375;
  double t9514;
  double t9515;
  double t9516;
  double t9522;
  double t9537;
  double t9538;
  double t9569;
  double t9572;
  double t9578;
  double t9585;
  double t9586;
  double t9592;
  double t9602;
  double t9603;
  double t9605;
  double t9613;
  double t9615;
  double t9618;
  double t9622;
  double t9624;
  double t9625;
  double t9634;
  double t9635;
  double t9637;
  double t9695;
  double t9697;
  double t9699;
  double t9702;
  double t9703;
  double t9704;
  double t9720;
  double t9724;
  double t9729;
  double t9732;
  double t9741;
  double t9744;
  double t9750;
  double t9752;
  double t9766;
  double t9769;
  double t9773;
  double t9782;
  double t9787;
  double t9790;
  double t9791;
  double t9797;
  double t9800;
  double t9803;
  double t9863;
  double t9868;
  double t9870;
  double t9884;
  double t9888;
  double t9893;
  double t9896;
  double t9904;
  double t9908;
  double t9910;
  double t9912;
  double t9926;
  double t9932;
  double t9935;
  double t9939;
  double t9945;
  double t9946;
  double t9959;
  double t9961;
  double t9962;
  double t9841;
  double t9843;
  double t9845;
  double t9849;
  double t9850;
  double t9990;
  double t9993;
  double t9994;
  double t9999;
  double t10000;
  double t10001;
  double t10013;
  double t10017;
  double t10027;
  double t10035;
  double t10036;
  double t10041;
  double t10047;
  double t10055;
  double t10059;
  double t10061;
  double t10066;
  double t10070;
  double t10079;
  double t10084;
  double t10086;
  double t10088;
  double t10092;
  double t10095;
  double t10097;
  double t10102;
  double t10103;
  double t10123;
  double t10127;
  double t10129;
  double t10133;
  double t10137;
  double t10138;
  double t10142;
  double t10145;
  double t10146;
  double t10149;
  double t10150;
  double t10153;
  double t10155;
  double t10159;
  double t10160;
  double t10164;
  double t10166;
  double t10167;
  double t10171;
  double t10173;
  double t10174;
  double t10178;
  double t10180;
  double t10181;
  double t10184;
  double t10187;
  double t10190;
  double t10221;
  double t10224;
  double t10226;
  double t10227;
  double t10228;
  double t10230;
  double t10231;
  double t10233;
  double t10234;
  double t10238;
  double t10245;
  double t10246;
  double t10247;
  double t10210;
  double t10212;
  double t10213;
  double t10216;
  double t10217;
  double t10268;
  double t10269;
  double t10272;
  double t10276;
  double t10278;
  double t10288;
  double t10291;
  double t10294;
  double t10295;
  double t10296;
  double t10298;
  double t10299;
  double t10300;
  double t10306;
  double t10308;
  double t10309;
  double t10311;
  double t10312;
  double t10314;
  double t10330;
  double t10333;
  double t10334;
  double t10339;
  double t10341;
  double t10343;
  double t10344;
  double t10346;
  double t10347;
  double t10349;
  double t10353;
  double t10354;
  double t10357;
  double t10361;
  double t10362;
  double t10364;
  double t10367;
  double t10368;
  double t10369;
  double t10398;
  double t10399;
  double t10405;
  double t10409;
  double t10411;
  double t10412;
  double t10413;
  double t10388;
  double t10389;
  double t10392;
  double t10393;
  double t10395;
  double t10433;
  double t10434;
  double t10436;
  double t10439;
  double t10440;
  double t10442;
  double t10443;
  double t10445;
  double t10446;
  double t10448;
  double t10450;
  double t10451;
  double t10454;
  double t10474;
  double t10475;
  double t10477;
  double t10480;
  double t10482;
  double t10486;
  double t10487;
  double t10490;
  double t10491;
  double t10494;
  double t10496;
  double t10497;
  double t10498;
  double t10530;
  double t10531;
  double t5552;
  double t10511;
  double t10515;
  double t10516;
  double t10522;
  double t10523;
  double t10543;
  double t10544;
  double t10545;
  double t10550;
  double t10553;
  double t10556;
  double t10558;
  double t10576;
  double t10578;
  double t10582;
  double t10587;
  double t10588;
  double t10590;
  double t10591;
  double t10535;
  double t5557;
  double t5559;
  double t10610;
  double t10611;
  double t10613;
  double t10614;
  double t10615;
  double t10560;
  double t10625;
  double t10626;
  double t10627;
  double t10565;
  double t10594;
  double t10640;
  double t10641;
  double t10642;
  double t10603;
  t128 = Cos(var1[5]);
  t132 = Sin(var1[3]);
  t138 = Sin(var1[4]);
  t125 = Cos(var1[3]);
  t167 = Sin(var1[5]);
  t35 = Cos(var1[6]);
  t129 = -1.*t125*t128;
  t174 = -1.*t132*t138*t167;
  t262 = t129 + t174;
  t414 = -1.*t128*t132*t138;
  t482 = t125*t167;
  t513 = t414 + t482;
  t517 = Sin(var1[6]);
  t975 = Cos(var1[7]);
  t980 = -1.*t975;
  t991 = 1. + t980;
  t1034 = Sin(var1[7]);
  t759 = t35*t262;
  t884 = t513*t517;
  t928 = t759 + t884;
  t1220 = Cos(var1[4]);
  t1513 = Cos(var1[8]);
  t1539 = -1.*t1513;
  t1546 = 1. + t1539;
  t1606 = Sin(var1[8]);
  t1403 = -1.*t1220*t975*t132;
  t1406 = t928*t1034;
  t1464 = t1403 + t1406;
  t1683 = t35*t513;
  t1688 = -1.*t262*t517;
  t1726 = t1683 + t1688;
  t1903 = Cos(var1[9]);
  t1933 = -1.*t1903;
  t1935 = 1. + t1933;
  t2039 = Sin(var1[9]);
  t2107 = t1513*t1464;
  t2112 = t1726*t1606;
  t2252 = t2107 + t2112;
  t2296 = t1513*t1726;
  t2340 = -1.*t1464*t1606;
  t2344 = t2296 + t2340;
  t2466 = Cos(var1[10]);
  t2507 = -1.*t2466;
  t2526 = 1. + t2507;
  t2748 = Sin(var1[10]);
  t2887 = -1.*t2039*t2252;
  t2901 = t1903*t2344;
  t2916 = t2887 + t2901;
  t3118 = t1903*t2252;
  t3121 = t2039*t2344;
  t3122 = t3118 + t3121;
  t3183 = Cos(var1[11]);
  t3203 = -1.*t3183;
  t3208 = 1. + t3203;
  t3221 = Sin(var1[11]);
  t3301 = t2748*t2916;
  t3319 = t2466*t3122;
  t3327 = t3301 + t3319;
  t3516 = t2466*t2916;
  t3525 = -1.*t2748*t3122;
  t3534 = t3516 + t3525;
  t3558 = Cos(var1[12]);
  t3596 = -1.*t3558;
  t3609 = 1. + t3596;
  t3649 = Sin(var1[12]);
  t3684 = -1.*t3221*t3327;
  t3695 = t3183*t3534;
  t3700 = t3684 + t3695;
  t3845 = t3183*t3327;
  t3853 = t3221*t3534;
  t3883 = t3845 + t3853;
  t81 = -1.*t35;
  t94 = 1. + t81;
  t105 = 0.135*t94;
  t115 = 0. + t105;
  t599 = -0.135*t517;
  t677 = 0. + t599;
  t4152 = -1.*t128*t132;
  t4158 = t125*t138*t167;
  t4219 = t4152 + t4158;
  t4234 = t125*t128*t138;
  t4309 = t132*t167;
  t4319 = t4234 + t4309;
  t995 = 0.135*t991;
  t1111 = 0.049*t1034;
  t1182 = 0. + t995 + t1111;
  t1227 = -0.049*t991;
  t1232 = 0.135*t1034;
  t1238 = 0. + t1227 + t1232;
  t4342 = t35*t4219;
  t4350 = t4319*t517;
  t4371 = t4342 + t4350;
  t1588 = -0.049*t1546;
  t1626 = -0.09*t1606;
  t1646 = 0. + t1588 + t1626;
  t1764 = -0.09*t1546;
  t1771 = 0.049*t1606;
  t1783 = 0. + t1764 + t1771;
  t1960 = -0.049*t1935;
  t2074 = -0.21*t2039;
  t2102 = 0. + t1960 + t2074;
  t4594 = t125*t1220*t975;
  t4709 = t4371*t1034;
  t4711 = t4594 + t4709;
  t4746 = t35*t4319;
  t4749 = -1.*t4219*t517;
  t4752 = t4746 + t4749;
  t2259 = -0.21*t1935;
  t2279 = 0.049*t2039;
  t2286 = 0. + t2259 + t2279;
  t2643 = -0.2707*t2526;
  t2753 = 0.0016*t2748;
  t2823 = 0. + t2643 + t2753;
  t4766 = t1513*t4711;
  t4804 = t4752*t1606;
  t4844 = t4766 + t4804;
  t4933 = t1513*t4752;
  t4934 = -1.*t4711*t1606;
  t4963 = t4933 + t4934;
  t3068 = -0.0016*t2526;
  t3088 = -0.2707*t2748;
  t3110 = 0. + t3068 + t3088;
  t3211 = 0.0184*t3208;
  t3295 = -0.7055*t3221;
  t3296 = 0. + t3211 + t3295;
  t5024 = -1.*t2039*t4844;
  t5039 = t1903*t4963;
  t5045 = t5024 + t5039;
  t5092 = t1903*t4844;
  t5110 = t2039*t4963;
  t5123 = t5092 + t5110;
  t3386 = -0.7055*t3208;
  t3478 = -0.0184*t3221;
  t3514 = 0. + t3386 + t3478;
  t3646 = -1.1135*t3609;
  t3655 = 0.0216*t3649;
  t3667 = 0. + t3646 + t3655;
  t5157 = t2748*t5045;
  t5170 = t2466*t5123;
  t5211 = t5157 + t5170;
  t5262 = t2466*t5045;
  t5288 = -1.*t2748*t5123;
  t5323 = t5262 + t5288;
  t3727 = -0.0216*t3609;
  t3754 = -1.1135*t3649;
  t3798 = 0. + t3727 + t3754;
  t5369 = -1.*t3221*t5211;
  t5383 = t3183*t5323;
  t5416 = t5369 + t5383;
  t5431 = t3183*t5211;
  t5474 = t3221*t5323;
  t5478 = t5431 + t5474;
  t5724 = t125*t1220*t35*t167;
  t5745 = t125*t1220*t128*t517;
  t5751 = t5724 + t5745;
  t5814 = -1.*t125*t975*t138;
  t5824 = t5751*t1034;
  t5835 = t5814 + t5824;
  t5842 = t125*t1220*t128*t35;
  t5851 = -1.*t125*t1220*t167*t517;
  t5866 = t5842 + t5851;
  t5960 = t1513*t5835;
  t5985 = t5866*t1606;
  t6005 = t5960 + t5985;
  t6028 = t1513*t5866;
  t6033 = -1.*t5835*t1606;
  t6065 = t6028 + t6033;
  t6075 = -1.*t2039*t6005;
  t6093 = t1903*t6065;
  t6101 = t6075 + t6093;
  t6119 = t1903*t6005;
  t6127 = t2039*t6065;
  t6132 = t6119 + t6127;
  t6209 = t2748*t6101;
  t6217 = t2466*t6132;
  t6257 = t6209 + t6217;
  t6269 = t2466*t6101;
  t6300 = -1.*t2748*t6132;
  t6335 = t6269 + t6300;
  t6361 = -1.*t3221*t6257;
  t6374 = t3183*t6335;
  t6375 = t6361 + t6374;
  t6401 = t3183*t6257;
  t6429 = t3221*t6335;
  t6434 = t6401 + t6429;
  t6654 = t1220*t35*t132*t167;
  t6663 = t1220*t128*t132*t517;
  t6667 = t6654 + t6663;
  t6741 = -1.*t975*t132*t138;
  t6754 = t6667*t1034;
  t6793 = t6741 + t6754;
  t6834 = t1220*t128*t35*t132;
  t6839 = -1.*t1220*t132*t167*t517;
  t6841 = t6834 + t6839;
  t6858 = t1513*t6793;
  t6862 = t6841*t1606;
  t6871 = t6858 + t6862;
  t6923 = t1513*t6841;
  t6947 = -1.*t6793*t1606;
  t6961 = t6923 + t6947;
  t6969 = -1.*t2039*t6871;
  t6971 = t1903*t6961;
  t6974 = t6969 + t6971;
  t7005 = t1903*t6871;
  t7025 = t2039*t6961;
  t7031 = t7005 + t7025;
  t7068 = t2748*t6974;
  t7069 = t2466*t7031;
  t7087 = t7068 + t7069;
  t7099 = t2466*t6974;
  t7138 = -1.*t2748*t7031;
  t7146 = t7099 + t7138;
  t7183 = -1.*t3221*t7087;
  t7204 = t3183*t7146;
  t7226 = t7183 + t7204;
  t7261 = t3183*t7087;
  t7268 = t3221*t7146;
  t7286 = t7261 + t7268;
  t7476 = -1.*t35*t138*t167;
  t7486 = -1.*t128*t138*t517;
  t7497 = t7476 + t7486;
  t7593 = -1.*t1220*t975;
  t7615 = t7497*t1034;
  t7626 = t7593 + t7615;
  t7631 = -1.*t128*t35*t138;
  t7637 = t138*t167*t517;
  t7639 = t7631 + t7637;
  t7650 = t1513*t7626;
  t7660 = t7639*t1606;
  t7661 = t7650 + t7660;
  t7689 = t1513*t7639;
  t7695 = -1.*t7626*t1606;
  t7706 = t7689 + t7695;
  t7716 = -1.*t2039*t7661;
  t7720 = t1903*t7706;
  t7736 = t7716 + t7720;
  t7748 = t1903*t7661;
  t7757 = t2039*t7706;
  t7761 = t7748 + t7757;
  t7767 = t2748*t7736;
  t7777 = t2466*t7761;
  t7794 = t7767 + t7777;
  t7810 = t2466*t7736;
  t7831 = -1.*t2748*t7761;
  t7832 = t7810 + t7831;
  t7869 = -1.*t3221*t7794;
  t7878 = t3183*t7832;
  t7892 = t7869 + t7878;
  t7898 = t3183*t7794;
  t7905 = t3221*t7832;
  t7913 = t7898 + t7905;
  t8002 = t128*t132;
  t8009 = -1.*t125*t138*t167;
  t8018 = t8002 + t8009;
  t8027 = t8018*t517;
  t8030 = t4746 + t8027;
  t8046 = t35*t8018;
  t8058 = -1.*t4319*t517;
  t8066 = t8046 + t8058;
  t8084 = t1513*t8030*t1034;
  t8089 = t8066*t1606;
  t8097 = t8084 + t8089;
  t8102 = t1513*t8066;
  t8103 = -1.*t8030*t1034*t1606;
  t8105 = t8102 + t8103;
  t8112 = -1.*t2039*t8097;
  t8124 = t1903*t8105;
  t8126 = t8112 + t8124;
  t8128 = t1903*t8097;
  t8141 = t2039*t8105;
  t8142 = t8128 + t8141;
  t8151 = t2748*t8126;
  t8153 = t2466*t8142;
  t8156 = t8151 + t8153;
  t8158 = t2466*t8126;
  t8159 = -1.*t2748*t8142;
  t8160 = t8158 + t8159;
  t8168 = -1.*t3221*t8156;
  t8169 = t3183*t8160;
  t8170 = t8168 + t8169;
  t8178 = t3183*t8156;
  t8182 = t3221*t8160;
  t8192 = t8178 + t8182;
  t8244 = t128*t132*t138;
  t8246 = -1.*t125*t167;
  t8250 = t8244 + t8246;
  t8266 = t35*t8250;
  t8270 = t262*t517;
  t8281 = t8266 + t8270;
  t8301 = -1.*t8250*t517;
  t8304 = t759 + t8301;
  t8312 = t1513*t8281*t1034;
  t8319 = t8304*t1606;
  t8320 = t8312 + t8319;
  t8330 = t1513*t8304;
  t8348 = -1.*t8281*t1034*t1606;
  t8361 = t8330 + t8348;
  t8387 = -1.*t2039*t8320;
  t8404 = t1903*t8361;
  t8405 = t8387 + t8404;
  t8418 = t1903*t8320;
  t8426 = t2039*t8361;
  t8428 = t8418 + t8426;
  t8436 = t2748*t8405;
  t8437 = t2466*t8428;
  t8438 = t8436 + t8437;
  t8451 = t2466*t8405;
  t8463 = -1.*t2748*t8428;
  t8484 = t8451 + t8463;
  t8503 = -1.*t3221*t8438;
  t8505 = t3183*t8484;
  t8510 = t8503 + t8505;
  t8521 = t3183*t8438;
  t8529 = t3221*t8484;
  t8541 = t8521 + t8529;
  t8613 = t1220*t128*t35;
  t8618 = -1.*t1220*t167*t517;
  t8622 = t8613 + t8618;
  t8642 = -1.*t1220*t35*t167;
  t8645 = -1.*t1220*t128*t517;
  t8648 = t8642 + t8645;
  t8653 = t1513*t8622*t1034;
  t8657 = t8648*t1606;
  t8658 = t8653 + t8657;
  t8668 = t1513*t8648;
  t8669 = -1.*t8622*t1034*t1606;
  t8678 = t8668 + t8669;
  t8687 = -1.*t2039*t8658;
  t8701 = t1903*t8678;
  t8711 = t8687 + t8701;
  t8717 = t1903*t8658;
  t8725 = t2039*t8678;
  t8726 = t8717 + t8725;
  t8731 = t2748*t8711;
  t8740 = t2466*t8726;
  t8741 = t8731 + t8740;
  t8755 = t2466*t8711;
  t8756 = -1.*t2748*t8726;
  t8757 = t8755 + t8756;
  t8771 = -1.*t3221*t8741;
  t8779 = t3183*t8757;
  t8784 = t8771 + t8779;
  t8792 = t3183*t8741;
  t8802 = t3221*t8757;
  t8803 = t8792 + t8802;
  t8897 = -1.*t35*t4219;
  t8900 = t8897 + t8058;
  t8906 = t1513*t4752*t1034;
  t8910 = t8900*t1606;
  t8922 = t8906 + t8910;
  t8940 = t1513*t8900;
  t8942 = -1.*t4752*t1034*t1606;
  t8952 = t8940 + t8942;
  t8960 = -1.*t2039*t8922;
  t8963 = t1903*t8952;
  t8968 = t8960 + t8963;
  t8973 = t1903*t8922;
  t8974 = t2039*t8952;
  t8977 = t8973 + t8974;
  t8984 = t2748*t8968;
  t8986 = t2466*t8977;
  t8987 = t8984 + t8986;
  t8991 = t2466*t8968;
  t8992 = -1.*t2748*t8977;
  t9000 = t8991 + t8992;
  t9006 = -1.*t3221*t8987;
  t9011 = t3183*t9000;
  t9012 = t9006 + t9011;
  t9023 = t3183*t8987;
  t9034 = t3221*t9000;
  t9041 = t9023 + t9034;
  t9097 = t125*t128;
  t9100 = t132*t138*t167;
  t9105 = t9097 + t9100;
  t9112 = -1.*t9105*t517;
  t9117 = t8266 + t9112;
  t9133 = -1.*t35*t9105;
  t9140 = t9133 + t8301;
  t9147 = t1513*t9117*t1034;
  t9150 = t9140*t1606;
  t9153 = t9147 + t9150;
  t9164 = t1513*t9140;
  t9165 = -1.*t9117*t1034*t1606;
  t9167 = t9164 + t9165;
  t9177 = -1.*t2039*t9153;
  t9178 = t1903*t9167;
  t9180 = t9177 + t9178;
  t9184 = t1903*t9153;
  t9186 = t2039*t9167;
  t9187 = t9184 + t9186;
  t9190 = t2748*t9180;
  t9193 = t2466*t9187;
  t9195 = t9190 + t9193;
  t9202 = t2466*t9180;
  t9204 = -1.*t2748*t9187;
  t9236 = t9202 + t9204;
  t9244 = -1.*t3221*t9195;
  t9249 = t3183*t9236;
  t9252 = t9244 + t9249;
  t9265 = t3183*t9195;
  t9266 = t3221*t9236;
  t9270 = t9265 + t9266;
  t8629 = 0.1305*t975*t8622;
  t8630 = t8622*t1182;
  t8639 = t8622*t1034*t1646;
  t8651 = t8648*t1783;
  t8661 = t2102*t8658;
  t8686 = t2286*t8678;
  t8714 = t2823*t8711;
  t8727 = t3110*t8726;
  t8745 = t3296*t8741;
  t8765 = t3514*t8757;
  t8785 = t3667*t8784;
  t8805 = t3798*t8803;
  t8807 = t3649*t8784;
  t8813 = t3558*t8803;
  t8815 = t8807 + t8813;
  t8821 = -0.0216*t8815;
  t8822 = t3558*t8784;
  t8835 = -1.*t3649*t8803;
  t8840 = t8822 + t8835;
  t8843 = -1.1135*t8840;
  t4462 = t975*t4371;
  t4464 = -1.*t125*t1220*t1034;
  t4487 = t4462 + t4464;
  t9405 = -1.*t1513*t2039*t4487;
  t9406 = -1.*t1903*t4487*t1606;
  t9409 = t9405 + t9406;
  t9418 = t1903*t1513*t4487;
  t9422 = -1.*t2039*t4487*t1606;
  t9423 = t9418 + t9422;
  t9436 = t2748*t9409;
  t9438 = t2466*t9423;
  t9439 = t9436 + t9438;
  t9444 = t2466*t9409;
  t9450 = -1.*t2748*t9423;
  t9453 = t9444 + t9450;
  t9458 = -1.*t3221*t9439;
  t9463 = t3183*t9453;
  t9471 = t9458 + t9463;
  t9480 = t3183*t9439;
  t9483 = t3221*t9453;
  t9486 = t9480 + t9483;
  t9353 = 0.135*t975;
  t9356 = -0.049*t1034;
  t9357 = t9353 + t9356;
  t9369 = 0.049*t975;
  t9375 = t9369 + t1232;
  t9514 = t35*t9105;
  t9515 = t8250*t517;
  t9516 = t9514 + t9515;
  t9522 = t975*t9516;
  t9537 = -1.*t1220*t132*t1034;
  t9538 = t9522 + t9537;
  t9569 = -1.*t1513*t2039*t9538;
  t9572 = -1.*t1903*t9538*t1606;
  t9578 = t9569 + t9572;
  t9585 = t1903*t1513*t9538;
  t9586 = -1.*t2039*t9538*t1606;
  t9592 = t9585 + t9586;
  t9602 = t2748*t9578;
  t9603 = t2466*t9592;
  t9605 = t9602 + t9603;
  t9613 = t2466*t9578;
  t9615 = -1.*t2748*t9592;
  t9618 = t9613 + t9615;
  t9622 = -1.*t3221*t9605;
  t9624 = t3183*t9618;
  t9625 = t9622 + t9624;
  t9634 = t3183*t9605;
  t9635 = t3221*t9618;
  t9637 = t9634 + t9635;
  t9695 = t1220*t35*t167;
  t9697 = t1220*t128*t517;
  t9699 = t9695 + t9697;
  t9702 = t975*t9699;
  t9703 = t138*t1034;
  t9704 = t9702 + t9703;
  t9720 = -1.*t1513*t2039*t9704;
  t9724 = -1.*t1903*t9704*t1606;
  t9729 = t9720 + t9724;
  t9732 = t1903*t1513*t9704;
  t9741 = -1.*t2039*t9704*t1606;
  t9744 = t9732 + t9741;
  t9750 = t2748*t9729;
  t9752 = t2466*t9744;
  t9766 = t9750 + t9752;
  t9769 = t2466*t9729;
  t9773 = -1.*t2748*t9744;
  t9782 = t9769 + t9773;
  t9787 = -1.*t3221*t9766;
  t9790 = t3183*t9782;
  t9791 = t9787 + t9790;
  t9797 = t3183*t9766;
  t9800 = t3221*t9782;
  t9803 = t9797 + t9800;
  t9863 = -1.*t1513*t4711;
  t9868 = -1.*t4752*t1606;
  t9870 = t9863 + t9868;
  t9884 = t2039*t9870;
  t9888 = t9884 + t5039;
  t9893 = t1903*t9870;
  t9896 = -1.*t2039*t4963;
  t9904 = t9893 + t9896;
  t9908 = -1.*t2748*t9888;
  t9910 = t2466*t9904;
  t9912 = t9908 + t9910;
  t9926 = t2466*t9888;
  t9932 = t2748*t9904;
  t9935 = t9926 + t9932;
  t9939 = t3221*t9912;
  t9945 = t3183*t9935;
  t9946 = t9939 + t9945;
  t9959 = t3183*t9912;
  t9961 = -1.*t3221*t9935;
  t9962 = t9959 + t9961;
  t9841 = 0.049*t1513;
  t9843 = t9841 + t1626;
  t9845 = -0.09*t1513;
  t9849 = -0.049*t1606;
  t9850 = t9845 + t9849;
  t9990 = t1220*t975*t132;
  t9993 = t9516*t1034;
  t9994 = t9990 + t9993;
  t9999 = -1.*t1513*t9994;
  t10000 = -1.*t9117*t1606;
  t10001 = t9999 + t10000;
  t10013 = t1513*t9117;
  t10017 = -1.*t9994*t1606;
  t10027 = t10013 + t10017;
  t10035 = t2039*t10001;
  t10036 = t1903*t10027;
  t10041 = t10035 + t10036;
  t10047 = t1903*t10001;
  t10055 = -1.*t2039*t10027;
  t10059 = t10047 + t10055;
  t10061 = -1.*t2748*t10041;
  t10066 = t2466*t10059;
  t10070 = t10061 + t10066;
  t10079 = t2466*t10041;
  t10084 = t2748*t10059;
  t10086 = t10079 + t10084;
  t10088 = t3221*t10070;
  t10092 = t3183*t10086;
  t10095 = t10088 + t10092;
  t10097 = t3183*t10070;
  t10102 = -1.*t3221*t10086;
  t10103 = t10097 + t10102;
  t10123 = -1.*t975*t138;
  t10127 = t9699*t1034;
  t10129 = t10123 + t10127;
  t10133 = -1.*t1513*t10129;
  t10137 = -1.*t8622*t1606;
  t10138 = t10133 + t10137;
  t10142 = t1513*t8622;
  t10145 = -1.*t10129*t1606;
  t10146 = t10142 + t10145;
  t10149 = t2039*t10138;
  t10150 = t1903*t10146;
  t10153 = t10149 + t10150;
  t10155 = t1903*t10138;
  t10159 = -1.*t2039*t10146;
  t10160 = t10155 + t10159;
  t10164 = -1.*t2748*t10153;
  t10166 = t2466*t10160;
  t10167 = t10164 + t10166;
  t10171 = t2466*t10153;
  t10173 = t2748*t10160;
  t10174 = t10171 + t10173;
  t10178 = t3221*t10167;
  t10180 = t3183*t10174;
  t10181 = t10178 + t10180;
  t10184 = t3183*t10167;
  t10187 = -1.*t3221*t10174;
  t10190 = t10184 + t10187;
  t10221 = -1.*t1903*t4844;
  t10224 = t10221 + t9896;
  t10226 = -1.*t2748*t5045;
  t10227 = t2466*t10224;
  t10228 = t10226 + t10227;
  t10230 = t2748*t10224;
  t10231 = t5262 + t10230;
  t10233 = t3221*t10228;
  t10234 = t3183*t10231;
  t10238 = t10233 + t10234;
  t10245 = t3183*t10228;
  t10246 = -1.*t3221*t10231;
  t10247 = t10245 + t10246;
  t10210 = -0.21*t1903;
  t10212 = -0.049*t2039;
  t10213 = t10210 + t10212;
  t10216 = 0.049*t1903;
  t10217 = t10216 + t2074;
  t10268 = t1513*t9994;
  t10269 = t9117*t1606;
  t10272 = t10268 + t10269;
  t10276 = -1.*t2039*t10272;
  t10278 = t10276 + t10036;
  t10288 = -1.*t1903*t10272;
  t10291 = t10288 + t10055;
  t10294 = -1.*t2748*t10278;
  t10295 = t2466*t10291;
  t10296 = t10294 + t10295;
  t10298 = t2466*t10278;
  t10299 = t2748*t10291;
  t10300 = t10298 + t10299;
  t10306 = t3221*t10296;
  t10308 = t3183*t10300;
  t10309 = t10306 + t10308;
  t10311 = t3183*t10296;
  t10312 = -1.*t3221*t10300;
  t10314 = t10311 + t10312;
  t10330 = t1513*t10129;
  t10333 = t8622*t1606;
  t10334 = t10330 + t10333;
  t10339 = -1.*t2039*t10334;
  t10341 = t10339 + t10150;
  t10343 = -1.*t1903*t10334;
  t10344 = t10343 + t10159;
  t10346 = -1.*t2748*t10341;
  t10347 = t2466*t10344;
  t10349 = t10346 + t10347;
  t10353 = t2466*t10341;
  t10354 = t2748*t10344;
  t10357 = t10353 + t10354;
  t10361 = t3221*t10349;
  t10362 = t3183*t10357;
  t10364 = t10361 + t10362;
  t10367 = t3183*t10349;
  t10368 = -1.*t3221*t10357;
  t10369 = t10367 + t10368;
  t10398 = -1.*t2466*t5123;
  t10399 = t10226 + t10398;
  t10405 = t3221*t10399;
  t10409 = t10405 + t5383;
  t10411 = t3183*t10399;
  t10412 = -1.*t3221*t5323;
  t10413 = t10411 + t10412;
  t10388 = 0.0016*t2466;
  t10389 = t10388 + t3088;
  t10392 = -0.2707*t2466;
  t10393 = -0.0016*t2748;
  t10395 = t10392 + t10393;
  t10433 = t1903*t10272;
  t10434 = t2039*t10027;
  t10436 = t10433 + t10434;
  t10439 = -1.*t2466*t10436;
  t10440 = t10294 + t10439;
  t10442 = -1.*t2748*t10436;
  t10443 = t10298 + t10442;
  t10445 = t3221*t10440;
  t10446 = t3183*t10443;
  t10448 = t10445 + t10446;
  t10450 = t3183*t10440;
  t10451 = -1.*t3221*t10443;
  t10454 = t10450 + t10451;
  t10474 = t1903*t10334;
  t10475 = t2039*t10146;
  t10477 = t10474 + t10475;
  t10480 = -1.*t2466*t10477;
  t10482 = t10346 + t10480;
  t10486 = -1.*t2748*t10477;
  t10487 = t10353 + t10486;
  t10490 = t3221*t10482;
  t10491 = t3183*t10487;
  t10494 = t10490 + t10491;
  t10496 = t3183*t10482;
  t10497 = -1.*t3221*t10487;
  t10498 = t10496 + t10497;
  t10530 = -1.*t3183*t5211;
  t10531 = t10530 + t10412;
  t5552 = t3558*t5416;
  t10511 = -0.7055*t3183;
  t10515 = 0.0184*t3221;
  t10516 = t10511 + t10515;
  t10522 = -0.0184*t3183;
  t10523 = t10522 + t3295;
  t10543 = t2748*t10278;
  t10544 = t2466*t10436;
  t10545 = t10543 + t10544;
  t10550 = -1.*t3221*t10545;
  t10553 = t10550 + t10446;
  t10556 = -1.*t3183*t10545;
  t10558 = t10556 + t10451;
  t10576 = t2748*t10341;
  t10578 = t2466*t10477;
  t10582 = t10576 + t10578;
  t10587 = -1.*t3221*t10582;
  t10588 = t10587 + t10491;
  t10590 = -1.*t3183*t10582;
  t10591 = t10590 + t10497;
  t10535 = -1.*t3649*t5416;
  t5557 = -1.*t3649*t5478;
  t5559 = t5552 + t5557;
  t10610 = 0.0216*t3558;
  t10611 = t10610 + t3754;
  t10613 = -1.1135*t3558;
  t10614 = -0.0216*t3649;
  t10615 = t10613 + t10614;
  t10560 = -1.*t3649*t10553;
  t10625 = t3183*t10545;
  t10626 = t3221*t10443;
  t10627 = t10625 + t10626;
  t10565 = t3558*t10553;
  t10594 = -1.*t3649*t10588;
  t10640 = t3183*t10582;
  t10641 = t3221*t10487;
  t10642 = t10640 + t10641;
  t10603 = t3558*t10588;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=-1.*t1220*t1238*t132 + t1464*t1646 + t1726*t1783 + t2102*t2252 + t2286*t2344 + t115*t262 + t2823*t2916 + t3110*t3122 + t3296*t3327 + t3514*t3534 + t3667*t3700 + t3798*t3883 - 0.0216*(t3649*t3700 + t3558*t3883) - 1.1135*(t3558*t3700 - 1.*t3649*t3883) + t513*t677 + t1182*t928 + 0.1305*(t1034*t1220*t132 + t928*t975);
  p_output1(10)=t1220*t1238*t125 + t115*t4219 + t1182*t4371 + 0.1305*t4487 + t1646*t4711 + t1783*t4752 + t2102*t4844 + t2286*t4963 + t2823*t5045 + t3110*t5123 + t3296*t5211 + t3514*t5323 + t3667*t5416 + t3798*t5478 - 0.0216*(t3649*t5416 + t3558*t5478) - 1.1135*t5559 + t4319*t677;
  p_output1(11)=0;
  p_output1(12)=-1.*t1238*t125*t138 + t115*t1220*t125*t167 + t1182*t5751 + t1646*t5835 + t1783*t5866 + t2102*t6005 + t2286*t6065 + t2823*t6101 + t3110*t6132 + t3296*t6257 + t3514*t6335 + t3667*t6375 + t3798*t6434 - 0.0216*(t3649*t6375 + t3558*t6434) - 1.1135*(t3558*t6375 - 1.*t3649*t6434) + t1220*t125*t128*t677 + 0.1305*(t1034*t125*t138 + t5751*t975);
  p_output1(13)=-1.*t1238*t132*t138 + t115*t1220*t132*t167 + t1182*t6667 + t1220*t128*t132*t677 + t1646*t6793 + t1783*t6841 + t2102*t6871 + t2286*t6961 + t2823*t6974 + t3110*t7031 + t3296*t7087 + t3514*t7146 + t3667*t7226 + t3798*t7286 - 0.0216*(t3649*t7226 + t3558*t7286) - 1.1135*(t3558*t7226 - 1.*t3649*t7286) + 0.1305*(t1034*t132*t138 + t6667*t975);
  p_output1(14)=-1.*t1220*t1238 - 1.*t115*t138*t167 - 1.*t128*t138*t677 + t1182*t7497 + t1646*t7626 + t1783*t7639 + t2102*t7661 + t2286*t7706 + t2823*t7736 + t3110*t7761 + t3296*t7794 + t3514*t7832 + t3667*t7892 + t3798*t7913 - 0.0216*(t3649*t7892 + t3558*t7913) - 1.1135*(t3558*t7892 - 1.*t3649*t7913) + 0.1305*(t1034*t1220 + t7497*t975);
  p_output1(15)=t115*t4319 + t677*t8018 + t1182*t8030 + t1034*t1646*t8030 + t1783*t8066 + t2102*t8097 + t2286*t8105 + t2823*t8126 + t3110*t8142 + t3296*t8156 + t3514*t8160 + t3667*t8170 + t3798*t8192 - 0.0216*(t3649*t8170 + t3558*t8192) - 1.1135*(t3558*t8170 - 1.*t3649*t8192) + 0.1305*t8030*t975;
  p_output1(16)=t262*t677 + t115*t8250 + t1182*t8281 + t1034*t1646*t8281 + t1783*t8304 + t2102*t8320 + t2286*t8361 + t2823*t8405 + t3110*t8428 + t3296*t8438 + t3514*t8484 + t3667*t8510 + t3798*t8541 - 0.0216*(t3649*t8510 + t3558*t8541) - 1.1135*(t3558*t8510 - 1.*t3649*t8541) + 0.1305*t8281*t975;
  p_output1(17)=t115*t1220*t128 - 1.*t1220*t167*t677 + t8629 + t8630 + t8639 + t8651 + t8661 + t8686 + t8714 + t8727 + t8745 + t8765 + t8785 + t8805 + t8821 + t8843;
  p_output1(18)=-0.135*t35*t4319 + t1182*t4752 + t1034*t1646*t4752 + 0.135*t4219*t517 + t1783*t8900 + t2102*t8922 + t2286*t8952 + t2823*t8968 + t3110*t8977 + t3296*t8987 + t3514*t9000 + t3667*t9012 + t3798*t9041 - 0.0216*(t3649*t9012 + t3558*t9041) - 1.1135*(t3558*t9012 - 1.*t3649*t9041) + 0.1305*t4752*t975;
  p_output1(19)=-0.135*t35*t8250 + 0.135*t517*t9105 + t1182*t9117 + t1034*t1646*t9117 + t1783*t9140 + t2102*t9153 + t2286*t9167 + t2823*t9180 + t3110*t9187 + t3296*t9195 + t3514*t9236 + t3667*t9252 + t3798*t9270 - 0.0216*(t3649*t9252 + t3558*t9270) - 1.1135*(t3558*t9252 - 1.*t3649*t9270) + 0.1305*t9117*t975;
  p_output1(20)=-0.135*t1220*t128*t35 + 0.135*t1220*t167*t517 + t8629 + t8630 + t8639 + t8651 + t8661 + t8686 + t8714 + t8727 + t8745 + t8765 + t8785 + t8805 + t8821 + t8843;
  p_output1(21)=t1646*t4487 + t1513*t2102*t4487 - 1.*t1606*t2286*t4487 + t1220*t125*t9357 + t4371*t9375 + t2823*t9409 + t3110*t9423 + t3296*t9439 + t3514*t9453 + t3667*t9471 + t3798*t9486 - 0.0216*(t3649*t9471 + t3558*t9486) - 1.1135*(t3558*t9471 - 1.*t3649*t9486) + 0.1305*(-1.*t1034*t4371 - 1.*t1220*t125*t975);
  p_output1(22)=t1220*t132*t9357 + t9375*t9516 + 0.1305*(t1403 - 1.*t1034*t9516) + t1646*t9538 + t1513*t2102*t9538 - 1.*t1606*t2286*t9538 + t2823*t9578 + t3110*t9592 + t3296*t9605 + t3514*t9618 + t3667*t9625 + t3798*t9637 - 0.0216*(t3649*t9625 + t3558*t9637) - 1.1135*(t3558*t9625 - 1.*t3649*t9637);
  p_output1(23)=-1.*t138*t9357 + t9375*t9699 + t1646*t9704 + t1513*t2102*t9704 - 1.*t1606*t2286*t9704 + t2823*t9729 + t3110*t9744 + 0.1305*(-1.*t1034*t9699 + t138*t975) + t3296*t9766 + t3514*t9782 + t3667*t9791 + t3798*t9803 - 0.0216*(t3649*t9791 + t3558*t9803) - 1.1135*(t3558*t9791 - 1.*t3649*t9803);
  p_output1(24)=t2102*t4963 + t4752*t9843 + t4711*t9850 + t2286*t9870 + t3110*t9888 + t2823*t9904 + t3514*t9912 + t3296*t9935 + t3798*t9946 + t3667*t9962 - 1.1135*(-1.*t3649*t9946 + t3558*t9962) - 0.0216*(t3558*t9946 + t3649*t9962);
  p_output1(25)=t10027*t2102 + t10001*t2286 + t10059*t2823 + t10041*t3110 + t10086*t3296 + t10070*t3514 - 1.1135*(t10103*t3558 - 1.*t10095*t3649) - 0.0216*(t10095*t3558 + t10103*t3649) + t10103*t3667 + t10095*t3798 + t9117*t9843 + t9850*t9994;
  p_output1(26)=t10146*t2102 + t10138*t2286 + t10160*t2823 + t10153*t3110 + t10174*t3296 + t10167*t3514 - 1.1135*(t10190*t3558 - 1.*t10181*t3649) - 0.0216*(t10181*t3558 + t10190*t3649) + t10190*t3667 + t10181*t3798 + t8622*t9843 + t10129*t9850;
  p_output1(27)=t10224*t2823 + t10231*t3296 + t10228*t3514 - 1.1135*(t10247*t3558 - 1.*t10238*t3649) - 0.0216*(t10238*t3558 + t10247*t3649) + t10247*t3667 + t10238*t3798 + t10213*t4844 + t10217*t4963 + t3110*t5045;
  p_output1(28)=t10027*t10217 + t10213*t10272 + t10291*t2823 + t10278*t3110 + t10300*t3296 + t10296*t3514 - 1.1135*(t10314*t3558 - 1.*t10309*t3649) - 0.0216*(t10309*t3558 + t10314*t3649) + t10314*t3667 + t10309*t3798;
  p_output1(29)=t10146*t10217 + t10213*t10334 + t10344*t2823 + t10341*t3110 + t10357*t3296 + t10349*t3514 - 1.1135*(t10369*t3558 - 1.*t10364*t3649) - 0.0216*(t10364*t3558 + t10369*t3649) + t10369*t3667 + t10364*t3798;
  p_output1(30)=t10399*t3514 - 1.1135*(t10413*t3558 - 1.*t10409*t3649) - 0.0216*(t10409*t3558 + t10413*t3649) + t10413*t3667 + t10409*t3798 + t10389*t5045 + t10395*t5123 + t3296*t5323;
  p_output1(31)=t10278*t10389 + t10395*t10436 + t10443*t3296 + t10440*t3514 - 1.1135*(t10454*t3558 - 1.*t10448*t3649) - 0.0216*(t10448*t3558 + t10454*t3649) + t10454*t3667 + t10448*t3798;
  p_output1(32)=t10341*t10389 + t10395*t10477 + t10487*t3296 + t10482*t3514 - 1.1135*(t10498*t3558 - 1.*t10494*t3649) - 0.0216*(t10494*t3558 + t10498*t3649) + t10498*t3667 + t10494*t3798;
  p_output1(33)=-1.1135*(t10535 + t10531*t3558) + t10531*t3667 + t10516*t5211 + t10523*t5323 + t3798*t5416 - 0.0216*(t10531*t3649 + t5552);
  p_output1(34)=t10443*t10523 + t10516*t10545 - 1.1135*(t10560 + t10558*t3558) - 0.0216*(t10565 + t10558*t3649) + t10558*t3667 + t10553*t3798;
  p_output1(35)=t10487*t10523 + t10516*t10582 - 1.1135*(t10594 + t10591*t3558) - 0.0216*(t10603 + t10591*t3649) + t10591*t3667 + t10588*t3798;
  p_output1(36)=t10611*t5416 + t10615*t5478 - 1.1135*(t10535 - 1.*t3558*t5478) - 0.0216*t5559;
  p_output1(37)=t10553*t10611 + t10615*t10627 - 1.1135*(t10560 - 1.*t10627*t3558) - 0.0216*(t10565 - 1.*t10627*t3649);
  p_output1(38)=t10588*t10611 + t10615*t10642 - 1.1135*(t10594 - 1.*t10642*t3558) - 0.0216*(t10603 - 1.*t10642*t3649);
  p_output1(39)=0;
  p_output1(40)=0;
  p_output1(41)=0;
  p_output1(42)=0;
  p_output1(43)=0;
  p_output1(44)=0;
  p_output1(45)=0;
  p_output1(46)=0;
  p_output1(47)=0;
  p_output1(48)=0;
  p_output1(49)=0;
  p_output1(50)=0;
  p_output1(51)=0;
  p_output1(52)=0;
  p_output1(53)=0;
  p_output1(54)=0;
  p_output1(55)=0;
  p_output1(56)=0;
  p_output1(57)=0;
  p_output1(58)=0;
  p_output1(59)=0;
}


       
Eigen::Matrix<double,3,20> Jp_toe_joint_left(const Eigen::Matrix<double,20,1> &var1)
//void Jp_toe_joint_left(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,20>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



