/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:23:13 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RightToeBack.h"

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
  double t343;
  double t652;
  double t431;
  double t461;
  double t693;
  double t95;
  double t99;
  double t118;
  double t200;
  double t393;
  double t480;
  double t712;
  double t716;
  double t733;
  double t871;
  double t886;
  double t912;
  double t73;
  double t1097;
  double t1177;
  double t1181;
  double t1252;
  double t1269;
  double t1287;
  double t1343;
  double t1536;
  double t1602;
  double t1605;
  double t2026;
  double t2028;
  double t2041;
  double t2102;
  double t2110;
  double t2121;
  double t2209;
  double t2330;
  double t2338;
  double t2366;
  double t2489;
  double t2509;
  double t2520;
  double t2620;
  double t2626;
  double t2677;
  double t2728;
  double t2776;
  double t2779;
  double t2795;
  double t3000;
  double t3023;
  double t3034;
  double t3046;
  double t3061;
  double t3079;
  double t3237;
  double t3276;
  double t3292;
  double t3336;
  double t3471;
  double t3474;
  double t3559;
  double t3657;
  double t3666;
  double t3667;
  double t3705;
  double t3740;
  double t3745;
  double t3750;
  double t3835;
  double t3876;
  double t3891;
  double t176;
  double t251;
  double t321;
  double t398;
  double t425;
  double t742;
  double t791;
  double t837;
  double t858;
  double t1030;
  double t1078;
  double t1081;
  double t4144;
  double t4204;
  double t4214;
  double t4250;
  double t4253;
  double t4282;
  double t1320;
  double t1407;
  double t1508;
  double t4323;
  double t4368;
  double t4450;
  double t1860;
  double t1959;
  double t1967;
  double t2130;
  double t2239;
  double t2284;
  double t4488;
  double t4514;
  double t4519;
  double t4648;
  double t4678;
  double t4780;
  double t2397;
  double t2404;
  double t2422;
  double t2692;
  double t2741;
  double t2774;
  double t4844;
  double t4846;
  double t4860;
  double t4890;
  double t4909;
  double t4922;
  double t2978;
  double t2981;
  double t2986;
  double t3125;
  double t3264;
  double t3269;
  double t4946;
  double t4957;
  double t4968;
  double t4978;
  double t4985;
  double t5021;
  double t3393;
  double t3430;
  double t3433;
  double t3672;
  double t3710;
  double t3723;
  double t5041;
  double t5072;
  double t5082;
  double t5121;
  double t5148;
  double t5166;
  double t3752;
  double t3811;
  double t3817;
  double t5183;
  double t5189;
  double t5190;
  double t5229;
  double t5232;
  double t5240;
  double t5370;
  double t5379;
  double t5395;
  double t5403;
  double t5413;
  double t5432;
  double t5475;
  double t5476;
  double t5484;
  double t5519;
  double t5527;
  double t5536;
  double t5572;
  double t5574;
  double t5576;
  double t5591;
  double t5598;
  double t5600;
  double t5641;
  double t5645;
  double t5668;
  double t5684;
  double t5685;
  double t5687;
  double t5713;
  double t5717;
  double t5725;
  double t5737;
  double t5740;
  double t5747;
  double t5777;
  double t5784;
  double t5786;
  double t5883;
  double t5886;
  double t5890;
  double t5910;
  double t5914;
  double t5916;
  double t5962;
  double t5965;
  double t5967;
  double t5978;
  double t5985;
  double t5990;
  double t6005;
  double t6014;
  double t6017;
  double t6020;
  double t6021;
  double t6022;
  double t6035;
  double t6040;
  double t6049;
  double t6062;
  double t6063;
  double t6073;
  double t6099;
  double t6110;
  double t6112;
  double t6141;
  double t6152;
  double t6163;
  double t6180;
  double t6183;
  double t6184;
  double t6262;
  double t6263;
  double t6271;
  double t6283;
  double t6284;
  double t6288;
  double t6326;
  double t6328;
  double t6350;
  double t6354;
  double t6359;
  double t6362;
  double t6386;
  double t6389;
  double t6391;
  double t6415;
  double t6417;
  double t6430;
  double t6467;
  double t6475;
  double t6480;
  double t6498;
  double t6511;
  double t6523;
  double t6533;
  double t6537;
  double t6572;
  double t6577;
  double t6588;
  double t6590;
  double t6603;
  double t6613;
  double t6631;
  double t6691;
  double t6699;
  double t6700;
  double t6761;
  double t6775;
  double t6722;
  double t6737;
  double t6751;
  double t6791;
  double t6809;
  double t6821;
  double t6827;
  double t6834;
  double t6835;
  double t6844;
  double t6857;
  double t6864;
  double t6867;
  double t6869;
  double t6873;
  double t6878;
  double t6891;
  double t6910;
  double t6932;
  double t6940;
  double t6944;
  double t6970;
  double t6973;
  double t6988;
  double t6996;
  double t6997;
  double t7006;
  double t7031;
  double t7032;
  double t7035;
  double t7058;
  double t7061;
  double t7062;
  double t7045;
  double t7047;
  double t7080;
  double t7085;
  double t7091;
  double t7110;
  double t7117;
  double t7121;
  double t7126;
  double t7128;
  double t7131;
  double t7138;
  double t7139;
  double t7147;
  double t7152;
  double t7157;
  double t7163;
  double t7173;
  double t7179;
  double t7195;
  double t7203;
  double t7204;
  double t7218;
  double t7231;
  double t7235;
  double t7243;
  double t7309;
  double t7314;
  double t7322;
  double t7291;
  double t7298;
  double t7300;
  double t7362;
  double t7376;
  double t7383;
  double t7402;
  double t7408;
  double t7418;
  double t7439;
  double t7445;
  double t7453;
  double t7459;
  double t7461;
  double t7462;
  double t7473;
  double t7477;
  double t7484;
  double t7487;
  double t7494;
  double t7495;
  double t7500;
  double t7512;
  double t7517;
  double t7531;
  double t7536;
  double t7537;
  double t7643;
  double t7648;
  double t7673;
  double t7678;
  double t7689;
  double t7706;
  double t7708;
  double t7716;
  double t7726;
  double t7728;
  double t7738;
  double t7752;
  double t7758;
  double t7762;
  double t7774;
  double t7780;
  double t7782;
  double t7785;
  double t7786;
  double t7788;
  double t7802;
  double t7804;
  double t7807;
  double t7825;
  double t7827;
  double t7835;
  double t7918;
  double t7919;
  double t7922;
  double t7948;
  double t7957;
  double t7938;
  double t7943;
  double t7964;
  double t7966;
  double t7968;
  double t7975;
  double t7981;
  double t7984;
  double t7993;
  double t8001;
  double t8002;
  double t8006;
  double t8012;
  double t8014;
  double t8020;
  double t8024;
  double t8031;
  double t8040;
  double t8044;
  double t8046;
  double t8055;
  double t8062;
  double t8067;
  double t8079;
  double t8088;
  double t8103;
  double t7308;
  double t7326;
  double t7330;
  double t7339;
  double t7390;
  double t7430;
  double t7458;
  double t7469;
  double t7485;
  double t7497;
  double t7527;
  double t7538;
  double t7542;
  double t7548;
  double t7550;
  double t7553;
  double t7557;
  double t7565;
  double t7573;
  double t7595;
  double t4555;
  double t4577;
  double t4625;
  double t8228;
  double t8236;
  double t8240;
  double t8249;
  double t8258;
  double t8262;
  double t8267;
  double t8268;
  double t8270;
  double t8282;
  double t8284;
  double t8287;
  double t8308;
  double t8311;
  double t8315;
  double t8320;
  double t8329;
  double t8335;
  double t8172;
  double t8181;
  double t8183;
  double t8193;
  double t8201;
  double t8390;
  double t8391;
  double t8400;
  double t8405;
  double t8406;
  double t8407;
  double t8435;
  double t8436;
  double t8438;
  double t8449;
  double t8458;
  double t8472;
  double t8483;
  double t8492;
  double t8494;
  double t8503;
  double t8504;
  double t8508;
  double t8522;
  double t8524;
  double t8527;
  double t8532;
  double t8533;
  double t8535;
  double t8571;
  double t8574;
  double t8580;
  double t8590;
  double t8598;
  double t8606;
  double t8648;
  double t8651;
  double t8654;
  double t8666;
  double t8672;
  double t8681;
  double t8687;
  double t8691;
  double t8703;
  double t8712;
  double t8715;
  double t8717;
  double t8727;
  double t8732;
  double t8733;
  double t8741;
  double t8745;
  double t8746;
  double t8834;
  double t8838;
  double t8842;
  double t8856;
  double t8858;
  double t8860;
  double t8872;
  double t8877;
  double t8879;
  double t8884;
  double t8885;
  double t8901;
  double t8903;
  double t8906;
  double t8919;
  double t8921;
  double t8925;
  double t8939;
  double t8944;
  double t8945;
  double t8783;
  double t8785;
  double t8817;
  double t8819;
  double t8820;
  double t9021;
  double t9028;
  double t9035;
  double t9044;
  double t9045;
  double t9048;
  double t9058;
  double t9060;
  double t9061;
  double t9074;
  double t9079;
  double t9092;
  double t9097;
  double t9106;
  double t9107;
  double t9111;
  double t9115;
  double t9116;
  double t9122;
  double t9124;
  double t9125;
  double t9132;
  double t9135;
  double t9143;
  double t9146;
  double t9151;
  double t9156;
  double t9202;
  double t9207;
  double t9218;
  double t9226;
  double t9236;
  double t9237;
  double t9244;
  double t9246;
  double t9247;
  double t9252;
  double t9261;
  double t9272;
  double t9289;
  double t9290;
  double t9294;
  double t9302;
  double t9306;
  double t9310;
  double t9317;
  double t9319;
  double t9320;
  double t9336;
  double t9338;
  double t9339;
  double t9347;
  double t9361;
  double t9362;
  double t9462;
  double t9463;
  double t9476;
  double t9477;
  double t9478;
  double t9497;
  double t9499;
  double t9513;
  double t9514;
  double t9520;
  double t9531;
  double t9534;
  double t9535;
  double t9423;
  double t9428;
  double t9435;
  double t9450;
  double t9453;
  double t9599;
  double t9601;
  double t9602;
  double t9607;
  double t9608;
  double t9613;
  double t9619;
  double t9621;
  double t9625;
  double t9627;
  double t9645;
  double t9646;
  double t9651;
  double t9658;
  double t9662;
  double t9665;
  double t9691;
  double t9692;
  double t9695;
  double t9753;
  double t9758;
  double t9774;
  double t9783;
  double t9784;
  double t9791;
  double t9800;
  double t9810;
  double t9819;
  double t9824;
  double t9828;
  double t9833;
  double t9834;
  double t9839;
  double t9846;
  double t9848;
  double t9851;
  double t9852;
  double t9860;
  double t9933;
  double t9936;
  double t9949;
  double t9950;
  double t9954;
  double t9955;
  double t9958;
  double t9911;
  double t9914;
  double t9927;
  double t9928;
  double t9930;
  double t10030;
  double t10047;
  double t10049;
  double t10051;
  double t10052;
  double t10068;
  double t10072;
  double t10093;
  double t10095;
  double t10097;
  double t10104;
  double t10106;
  double t10107;
  double t10153;
  double t10154;
  double t10158;
  double t10162;
  double t10163;
  double t10166;
  double t10167;
  double t10170;
  double t10177;
  double t10180;
  double t10186;
  double t10190;
  double t10193;
  double t10300;
  double t10301;
  double t5318;
  double t10248;
  double t10249;
  double t10263;
  double t10269;
  double t10286;
  double t10320;
  double t10324;
  double t10325;
  double t10330;
  double t10331;
  double t10338;
  double t10341;
  double t10370;
  double t10371;
  double t10373;
  double t10383;
  double t10384;
  double t10386;
  double t10387;
  double t10306;
  double t5326;
  double t5328;
  double t10412;
  double t10414;
  double t10424;
  double t10428;
  double t10431;
  double t10347;
  double t10445;
  double t10446;
  double t10447;
  double t10354;
  double t10390;
  double t10463;
  double t10464;
  double t10466;
  double t10401;
  t343 = Sin(var1[3]);
  t652 = Cos(var1[3]);
  t431 = Cos(var1[5]);
  t461 = Sin(var1[4]);
  t693 = Sin(var1[5]);
  t95 = Cos(var1[14]);
  t99 = -1.*t95;
  t118 = 1. + t99;
  t200 = Sin(var1[14]);
  t393 = Sin(var1[13]);
  t480 = -1.*t431*t343*t461;
  t712 = t652*t693;
  t716 = t480 + t712;
  t733 = Cos(var1[13]);
  t871 = -1.*t652*t431;
  t886 = -1.*t343*t461*t693;
  t912 = t871 + t886;
  t73 = Cos(var1[4]);
  t1097 = t393*t716;
  t1177 = t733*t912;
  t1181 = t1097 + t1177;
  t1252 = Cos(var1[15]);
  t1269 = -1.*t1252;
  t1287 = 1. + t1269;
  t1343 = Sin(var1[15]);
  t1536 = t733*t716;
  t1602 = -1.*t393*t912;
  t1605 = t1536 + t1602;
  t2026 = -1.*t95*t73*t343;
  t2028 = t200*t1181;
  t2041 = t2026 + t2028;
  t2102 = Cos(var1[16]);
  t2110 = -1.*t2102;
  t2121 = 1. + t2110;
  t2209 = Sin(var1[16]);
  t2330 = t1343*t1605;
  t2338 = t1252*t2041;
  t2366 = t2330 + t2338;
  t2489 = t1252*t1605;
  t2509 = -1.*t1343*t2041;
  t2520 = t2489 + t2509;
  t2620 = Cos(var1[17]);
  t2626 = -1.*t2620;
  t2677 = 1. + t2626;
  t2728 = Sin(var1[17]);
  t2776 = -1.*t2209*t2366;
  t2779 = t2102*t2520;
  t2795 = t2776 + t2779;
  t3000 = t2102*t2366;
  t3023 = t2209*t2520;
  t3034 = t3000 + t3023;
  t3046 = Cos(var1[18]);
  t3061 = -1.*t3046;
  t3079 = 1. + t3061;
  t3237 = Sin(var1[18]);
  t3276 = t2728*t2795;
  t3292 = t2620*t3034;
  t3336 = t3276 + t3292;
  t3471 = t2620*t2795;
  t3474 = -1.*t2728*t3034;
  t3559 = t3471 + t3474;
  t3657 = Cos(var1[19]);
  t3666 = -1.*t3657;
  t3667 = 1. + t3666;
  t3705 = Sin(var1[19]);
  t3740 = -1.*t3237*t3336;
  t3745 = t3046*t3559;
  t3750 = t3740 + t3745;
  t3835 = t3046*t3336;
  t3876 = t3237*t3559;
  t3891 = t3835 + t3876;
  t176 = -0.049*t118;
  t251 = -0.135*t200;
  t321 = 0. + t176 + t251;
  t398 = 0.135*t393;
  t425 = 0. + t398;
  t742 = -1.*t733;
  t791 = 1. + t742;
  t837 = -0.135*t791;
  t858 = 0. + t837;
  t1030 = -0.135*t118;
  t1078 = 0.049*t200;
  t1081 = 0. + t1030 + t1078;
  t4144 = t652*t431*t461;
  t4204 = t343*t693;
  t4214 = t4144 + t4204;
  t4250 = -1.*t431*t343;
  t4253 = t652*t461*t693;
  t4282 = t4250 + t4253;
  t1320 = -0.09*t1287;
  t1407 = 0.049*t1343;
  t1508 = 0. + t1320 + t1407;
  t4323 = t393*t4214;
  t4368 = t733*t4282;
  t4450 = t4323 + t4368;
  t1860 = -0.049*t1287;
  t1959 = -0.09*t1343;
  t1967 = 0. + t1860 + t1959;
  t2130 = -0.049*t2121;
  t2239 = -0.21*t2209;
  t2284 = 0. + t2130 + t2239;
  t4488 = t733*t4214;
  t4514 = -1.*t393*t4282;
  t4519 = t4488 + t4514;
  t4648 = t95*t652*t73;
  t4678 = t200*t4450;
  t4780 = t4648 + t4678;
  t2397 = -0.21*t2121;
  t2404 = 0.049*t2209;
  t2422 = 0. + t2397 + t2404;
  t2692 = -0.2707*t2677;
  t2741 = 0.0016*t2728;
  t2774 = 0. + t2692 + t2741;
  t4844 = t1343*t4519;
  t4846 = t1252*t4780;
  t4860 = t4844 + t4846;
  t4890 = t1252*t4519;
  t4909 = -1.*t1343*t4780;
  t4922 = t4890 + t4909;
  t2978 = -0.0016*t2677;
  t2981 = -0.2707*t2728;
  t2986 = 0. + t2978 + t2981;
  t3125 = 0.0184*t3079;
  t3264 = -0.7055*t3237;
  t3269 = 0. + t3125 + t3264;
  t4946 = -1.*t2209*t4860;
  t4957 = t2102*t4922;
  t4968 = t4946 + t4957;
  t4978 = t2102*t4860;
  t4985 = t2209*t4922;
  t5021 = t4978 + t4985;
  t3393 = -0.7055*t3079;
  t3430 = -0.0184*t3237;
  t3433 = 0. + t3393 + t3430;
  t3672 = -1.1135*t3667;
  t3710 = 0.0216*t3705;
  t3723 = 0. + t3672 + t3710;
  t5041 = t2728*t4968;
  t5072 = t2620*t5021;
  t5082 = t5041 + t5072;
  t5121 = t2620*t4968;
  t5148 = -1.*t2728*t5021;
  t5166 = t5121 + t5148;
  t3752 = -0.0216*t3667;
  t3811 = -1.1135*t3705;
  t3817 = 0. + t3752 + t3811;
  t5183 = -1.*t3237*t5082;
  t5189 = t3046*t5166;
  t5190 = t5183 + t5189;
  t5229 = t3046*t5082;
  t5232 = t3237*t5166;
  t5240 = t5229 + t5232;
  t5370 = t652*t73*t431*t393;
  t5379 = t733*t652*t73*t693;
  t5395 = t5370 + t5379;
  t5403 = t733*t652*t73*t431;
  t5413 = -1.*t652*t73*t393*t693;
  t5432 = t5403 + t5413;
  t5475 = -1.*t95*t652*t461;
  t5476 = t200*t5395;
  t5484 = t5475 + t5476;
  t5519 = t1343*t5432;
  t5527 = t1252*t5484;
  t5536 = t5519 + t5527;
  t5572 = t1252*t5432;
  t5574 = -1.*t1343*t5484;
  t5576 = t5572 + t5574;
  t5591 = -1.*t2209*t5536;
  t5598 = t2102*t5576;
  t5600 = t5591 + t5598;
  t5641 = t2102*t5536;
  t5645 = t2209*t5576;
  t5668 = t5641 + t5645;
  t5684 = t2728*t5600;
  t5685 = t2620*t5668;
  t5687 = t5684 + t5685;
  t5713 = t2620*t5600;
  t5717 = -1.*t2728*t5668;
  t5725 = t5713 + t5717;
  t5737 = -1.*t3237*t5687;
  t5740 = t3046*t5725;
  t5747 = t5737 + t5740;
  t5777 = t3046*t5687;
  t5784 = t3237*t5725;
  t5786 = t5777 + t5784;
  t5883 = t73*t431*t393*t343;
  t5886 = t733*t73*t343*t693;
  t5890 = t5883 + t5886;
  t5910 = t733*t73*t431*t343;
  t5914 = -1.*t73*t393*t343*t693;
  t5916 = t5910 + t5914;
  t5962 = -1.*t95*t343*t461;
  t5965 = t200*t5890;
  t5967 = t5962 + t5965;
  t5978 = t1343*t5916;
  t5985 = t1252*t5967;
  t5990 = t5978 + t5985;
  t6005 = t1252*t5916;
  t6014 = -1.*t1343*t5967;
  t6017 = t6005 + t6014;
  t6020 = -1.*t2209*t5990;
  t6021 = t2102*t6017;
  t6022 = t6020 + t6021;
  t6035 = t2102*t5990;
  t6040 = t2209*t6017;
  t6049 = t6035 + t6040;
  t6062 = t2728*t6022;
  t6063 = t2620*t6049;
  t6073 = t6062 + t6063;
  t6099 = t2620*t6022;
  t6110 = -1.*t2728*t6049;
  t6112 = t6099 + t6110;
  t6141 = -1.*t3237*t6073;
  t6152 = t3046*t6112;
  t6163 = t6141 + t6152;
  t6180 = t3046*t6073;
  t6183 = t3237*t6112;
  t6184 = t6180 + t6183;
  t6262 = -1.*t431*t393*t461;
  t6263 = -1.*t733*t461*t693;
  t6271 = t6262 + t6263;
  t6283 = -1.*t733*t431*t461;
  t6284 = t393*t461*t693;
  t6288 = t6283 + t6284;
  t6326 = -1.*t95*t73;
  t6328 = t200*t6271;
  t6350 = t6326 + t6328;
  t6354 = t1343*t6288;
  t6359 = t1252*t6350;
  t6362 = t6354 + t6359;
  t6386 = t1252*t6288;
  t6389 = -1.*t1343*t6350;
  t6391 = t6386 + t6389;
  t6415 = -1.*t2209*t6362;
  t6417 = t2102*t6391;
  t6430 = t6415 + t6417;
  t6467 = t2102*t6362;
  t6475 = t2209*t6391;
  t6480 = t6467 + t6475;
  t6498 = t2728*t6430;
  t6511 = t2620*t6480;
  t6523 = t6498 + t6511;
  t6533 = t2620*t6430;
  t6537 = -1.*t2728*t6480;
  t6572 = t6533 + t6537;
  t6577 = -1.*t3237*t6523;
  t6588 = t3046*t6572;
  t6590 = t6577 + t6588;
  t6603 = t3046*t6523;
  t6613 = t3237*t6572;
  t6631 = t6603 + t6613;
  t6691 = t431*t343;
  t6699 = -1.*t652*t461*t693;
  t6700 = t6691 + t6699;
  t6761 = t393*t6700;
  t6775 = t4488 + t6761;
  t6722 = -1.*t393*t4214;
  t6737 = t733*t6700;
  t6751 = t6722 + t6737;
  t6791 = t1343*t6751;
  t6809 = t1252*t200*t6775;
  t6821 = t6791 + t6809;
  t6827 = t1252*t6751;
  t6834 = -1.*t200*t1343*t6775;
  t6835 = t6827 + t6834;
  t6844 = -1.*t2209*t6821;
  t6857 = t2102*t6835;
  t6864 = t6844 + t6857;
  t6867 = t2102*t6821;
  t6869 = t2209*t6835;
  t6873 = t6867 + t6869;
  t6878 = t2728*t6864;
  t6891 = t2620*t6873;
  t6910 = t6878 + t6891;
  t6932 = t2620*t6864;
  t6940 = -1.*t2728*t6873;
  t6944 = t6932 + t6940;
  t6970 = -1.*t3237*t6910;
  t6973 = t3046*t6944;
  t6988 = t6970 + t6973;
  t6996 = t3046*t6910;
  t6997 = t3237*t6944;
  t7006 = t6996 + t6997;
  t7031 = t431*t343*t461;
  t7032 = -1.*t652*t693;
  t7035 = t7031 + t7032;
  t7058 = t733*t7035;
  t7061 = t393*t912;
  t7062 = t7058 + t7061;
  t7045 = -1.*t393*t7035;
  t7047 = t7045 + t1177;
  t7080 = t1343*t7047;
  t7085 = t1252*t200*t7062;
  t7091 = t7080 + t7085;
  t7110 = t1252*t7047;
  t7117 = -1.*t200*t1343*t7062;
  t7121 = t7110 + t7117;
  t7126 = -1.*t2209*t7091;
  t7128 = t2102*t7121;
  t7131 = t7126 + t7128;
  t7138 = t2102*t7091;
  t7139 = t2209*t7121;
  t7147 = t7138 + t7139;
  t7152 = t2728*t7131;
  t7157 = t2620*t7147;
  t7163 = t7152 + t7157;
  t7173 = t2620*t7131;
  t7179 = -1.*t2728*t7147;
  t7195 = t7173 + t7179;
  t7203 = -1.*t3237*t7163;
  t7204 = t3046*t7195;
  t7218 = t7203 + t7204;
  t7231 = t3046*t7163;
  t7235 = t3237*t7195;
  t7243 = t7231 + t7235;
  t7309 = t733*t73*t431;
  t7314 = -1.*t73*t393*t693;
  t7322 = t7309 + t7314;
  t7291 = -1.*t73*t431*t393;
  t7298 = -1.*t733*t73*t693;
  t7300 = t7291 + t7298;
  t7362 = t1343*t7300;
  t7376 = t1252*t200*t7322;
  t7383 = t7362 + t7376;
  t7402 = t1252*t7300;
  t7408 = -1.*t200*t1343*t7322;
  t7418 = t7402 + t7408;
  t7439 = -1.*t2209*t7383;
  t7445 = t2102*t7418;
  t7453 = t7439 + t7445;
  t7459 = t2102*t7383;
  t7461 = t2209*t7418;
  t7462 = t7459 + t7461;
  t7473 = t2728*t7453;
  t7477 = t2620*t7462;
  t7484 = t7473 + t7477;
  t7487 = t2620*t7453;
  t7494 = -1.*t2728*t7462;
  t7495 = t7487 + t7494;
  t7500 = -1.*t3237*t7484;
  t7512 = t3046*t7495;
  t7517 = t7500 + t7512;
  t7531 = t3046*t7484;
  t7536 = t3237*t7495;
  t7537 = t7531 + t7536;
  t7643 = -1.*t733*t4282;
  t7648 = t6722 + t7643;
  t7673 = t1343*t7648;
  t7678 = t1252*t200*t4519;
  t7689 = t7673 + t7678;
  t7706 = t1252*t7648;
  t7708 = -1.*t200*t1343*t4519;
  t7716 = t7706 + t7708;
  t7726 = -1.*t2209*t7689;
  t7728 = t2102*t7716;
  t7738 = t7726 + t7728;
  t7752 = t2102*t7689;
  t7758 = t2209*t7716;
  t7762 = t7752 + t7758;
  t7774 = t2728*t7738;
  t7780 = t2620*t7762;
  t7782 = t7774 + t7780;
  t7785 = t2620*t7738;
  t7786 = -1.*t2728*t7762;
  t7788 = t7785 + t7786;
  t7802 = -1.*t3237*t7782;
  t7804 = t3046*t7788;
  t7807 = t7802 + t7804;
  t7825 = t3046*t7782;
  t7827 = t3237*t7788;
  t7835 = t7825 + t7827;
  t7918 = t652*t431;
  t7919 = t343*t461*t693;
  t7922 = t7918 + t7919;
  t7948 = -1.*t393*t7922;
  t7957 = t7058 + t7948;
  t7938 = -1.*t733*t7922;
  t7943 = t7045 + t7938;
  t7964 = t1343*t7943;
  t7966 = t1252*t200*t7957;
  t7968 = t7964 + t7966;
  t7975 = t1252*t7943;
  t7981 = -1.*t200*t1343*t7957;
  t7984 = t7975 + t7981;
  t7993 = -1.*t2209*t7968;
  t8001 = t2102*t7984;
  t8002 = t7993 + t8001;
  t8006 = t2102*t7968;
  t8012 = t2209*t7984;
  t8014 = t8006 + t8012;
  t8020 = t2728*t8002;
  t8024 = t2620*t8014;
  t8031 = t8020 + t8024;
  t8040 = t2620*t8002;
  t8044 = -1.*t2728*t8014;
  t8046 = t8040 + t8044;
  t8055 = -1.*t3237*t8031;
  t8062 = t3046*t8046;
  t8067 = t8055 + t8062;
  t8079 = t3046*t8031;
  t8088 = t3237*t8046;
  t8103 = t8079 + t8088;
  t7308 = t1508*t7300;
  t7326 = -0.1305*t95*t7322;
  t7330 = t1081*t7322;
  t7339 = t200*t1967*t7322;
  t7390 = t2284*t7383;
  t7430 = t2422*t7418;
  t7458 = t2774*t7453;
  t7469 = t2986*t7462;
  t7485 = t3269*t7484;
  t7497 = t3433*t7495;
  t7527 = t3723*t7517;
  t7538 = t3817*t7537;
  t7542 = t3705*t7517;
  t7548 = t3657*t7537;
  t7550 = t7542 + t7548;
  t7553 = -0.027251*t7550;
  t7557 = t3657*t7517;
  t7565 = -1.*t3705*t7537;
  t7573 = t7557 + t7565;
  t7595 = -1.200144*t7573;
  t4555 = -1.*t652*t73*t200;
  t4577 = t95*t4450;
  t4625 = t4555 + t4577;
  t8228 = -1.*t2102*t1343*t4625;
  t8236 = -1.*t1252*t2209*t4625;
  t8240 = t8228 + t8236;
  t8249 = t1252*t2102*t4625;
  t8258 = -1.*t1343*t2209*t4625;
  t8262 = t8249 + t8258;
  t8267 = t2728*t8240;
  t8268 = t2620*t8262;
  t8270 = t8267 + t8268;
  t8282 = t2620*t8240;
  t8284 = -1.*t2728*t8262;
  t8287 = t8282 + t8284;
  t8308 = -1.*t3237*t8270;
  t8311 = t3046*t8287;
  t8315 = t8308 + t8311;
  t8320 = t3046*t8270;
  t8329 = t3237*t8287;
  t8335 = t8320 + t8329;
  t8172 = -0.135*t95;
  t8181 = -0.049*t200;
  t8183 = t8172 + t8181;
  t8193 = 0.049*t95;
  t8201 = t8193 + t251;
  t8390 = t393*t7035;
  t8391 = t733*t7922;
  t8400 = t8390 + t8391;
  t8405 = -1.*t73*t200*t343;
  t8406 = t95*t8400;
  t8407 = t8405 + t8406;
  t8435 = -1.*t2102*t1343*t8407;
  t8436 = -1.*t1252*t2209*t8407;
  t8438 = t8435 + t8436;
  t8449 = t1252*t2102*t8407;
  t8458 = -1.*t1343*t2209*t8407;
  t8472 = t8449 + t8458;
  t8483 = t2728*t8438;
  t8492 = t2620*t8472;
  t8494 = t8483 + t8492;
  t8503 = t2620*t8438;
  t8504 = -1.*t2728*t8472;
  t8508 = t8503 + t8504;
  t8522 = -1.*t3237*t8494;
  t8524 = t3046*t8508;
  t8527 = t8522 + t8524;
  t8532 = t3046*t8494;
  t8533 = t3237*t8508;
  t8535 = t8532 + t8533;
  t8571 = t73*t431*t393;
  t8574 = t733*t73*t693;
  t8580 = t8571 + t8574;
  t8590 = t200*t461;
  t8598 = t95*t8580;
  t8606 = t8590 + t8598;
  t8648 = -1.*t2102*t1343*t8606;
  t8651 = -1.*t1252*t2209*t8606;
  t8654 = t8648 + t8651;
  t8666 = t1252*t2102*t8606;
  t8672 = -1.*t1343*t2209*t8606;
  t8681 = t8666 + t8672;
  t8687 = t2728*t8654;
  t8691 = t2620*t8681;
  t8703 = t8687 + t8691;
  t8712 = t2620*t8654;
  t8715 = -1.*t2728*t8681;
  t8717 = t8712 + t8715;
  t8727 = -1.*t3237*t8703;
  t8732 = t3046*t8717;
  t8733 = t8727 + t8732;
  t8741 = t3046*t8703;
  t8745 = t3237*t8717;
  t8746 = t8741 + t8745;
  t8834 = -1.*t1343*t4519;
  t8838 = -1.*t1252*t4780;
  t8842 = t8834 + t8838;
  t8856 = t2209*t8842;
  t8858 = t8856 + t4957;
  t8860 = t2102*t8842;
  t8872 = -1.*t2209*t4922;
  t8877 = t8860 + t8872;
  t8879 = -1.*t2728*t8858;
  t8884 = t2620*t8877;
  t8885 = t8879 + t8884;
  t8901 = t2620*t8858;
  t8903 = t2728*t8877;
  t8906 = t8901 + t8903;
  t8919 = t3237*t8885;
  t8921 = t3046*t8906;
  t8925 = t8919 + t8921;
  t8939 = t3046*t8885;
  t8944 = -1.*t3237*t8906;
  t8945 = t8939 + t8944;
  t8783 = 0.049*t1252;
  t8785 = t8783 + t1959;
  t8817 = -0.09*t1252;
  t8819 = -0.049*t1343;
  t8820 = t8817 + t8819;
  t9021 = t95*t73*t343;
  t9028 = t200*t8400;
  t9035 = t9021 + t9028;
  t9044 = -1.*t1343*t7957;
  t9045 = -1.*t1252*t9035;
  t9048 = t9044 + t9045;
  t9058 = t1252*t7957;
  t9060 = -1.*t1343*t9035;
  t9061 = t9058 + t9060;
  t9074 = t2209*t9048;
  t9079 = t2102*t9061;
  t9092 = t9074 + t9079;
  t9097 = t2102*t9048;
  t9106 = -1.*t2209*t9061;
  t9107 = t9097 + t9106;
  t9111 = -1.*t2728*t9092;
  t9115 = t2620*t9107;
  t9116 = t9111 + t9115;
  t9122 = t2620*t9092;
  t9124 = t2728*t9107;
  t9125 = t9122 + t9124;
  t9132 = t3237*t9116;
  t9135 = t3046*t9125;
  t9143 = t9132 + t9135;
  t9146 = t3046*t9116;
  t9151 = -1.*t3237*t9125;
  t9156 = t9146 + t9151;
  t9202 = -1.*t95*t461;
  t9207 = t200*t8580;
  t9218 = t9202 + t9207;
  t9226 = -1.*t1343*t7322;
  t9236 = -1.*t1252*t9218;
  t9237 = t9226 + t9236;
  t9244 = t1252*t7322;
  t9246 = -1.*t1343*t9218;
  t9247 = t9244 + t9246;
  t9252 = t2209*t9237;
  t9261 = t2102*t9247;
  t9272 = t9252 + t9261;
  t9289 = t2102*t9237;
  t9290 = -1.*t2209*t9247;
  t9294 = t9289 + t9290;
  t9302 = -1.*t2728*t9272;
  t9306 = t2620*t9294;
  t9310 = t9302 + t9306;
  t9317 = t2620*t9272;
  t9319 = t2728*t9294;
  t9320 = t9317 + t9319;
  t9336 = t3237*t9310;
  t9338 = t3046*t9320;
  t9339 = t9336 + t9338;
  t9347 = t3046*t9310;
  t9361 = -1.*t3237*t9320;
  t9362 = t9347 + t9361;
  t9462 = -1.*t2102*t4860;
  t9463 = t9462 + t8872;
  t9476 = -1.*t2728*t4968;
  t9477 = t2620*t9463;
  t9478 = t9476 + t9477;
  t9497 = t2728*t9463;
  t9499 = t5121 + t9497;
  t9513 = t3237*t9478;
  t9514 = t3046*t9499;
  t9520 = t9513 + t9514;
  t9531 = t3046*t9478;
  t9534 = -1.*t3237*t9499;
  t9535 = t9531 + t9534;
  t9423 = -0.21*t2102;
  t9428 = -0.049*t2209;
  t9435 = t9423 + t9428;
  t9450 = 0.049*t2102;
  t9453 = t9450 + t2239;
  t9599 = t1343*t7957;
  t9601 = t1252*t9035;
  t9602 = t9599 + t9601;
  t9607 = -1.*t2209*t9602;
  t9608 = t9607 + t9079;
  t9613 = -1.*t2102*t9602;
  t9619 = t9613 + t9106;
  t9621 = -1.*t2728*t9608;
  t9625 = t2620*t9619;
  t9627 = t9621 + t9625;
  t9645 = t2620*t9608;
  t9646 = t2728*t9619;
  t9651 = t9645 + t9646;
  t9658 = t3237*t9627;
  t9662 = t3046*t9651;
  t9665 = t9658 + t9662;
  t9691 = t3046*t9627;
  t9692 = -1.*t3237*t9651;
  t9695 = t9691 + t9692;
  t9753 = t1343*t7322;
  t9758 = t1252*t9218;
  t9774 = t9753 + t9758;
  t9783 = -1.*t2209*t9774;
  t9784 = t9783 + t9261;
  t9791 = -1.*t2102*t9774;
  t9800 = t9791 + t9290;
  t9810 = -1.*t2728*t9784;
  t9819 = t2620*t9800;
  t9824 = t9810 + t9819;
  t9828 = t2620*t9784;
  t9833 = t2728*t9800;
  t9834 = t9828 + t9833;
  t9839 = t3237*t9824;
  t9846 = t3046*t9834;
  t9848 = t9839 + t9846;
  t9851 = t3046*t9824;
  t9852 = -1.*t3237*t9834;
  t9860 = t9851 + t9852;
  t9933 = -1.*t2620*t5021;
  t9936 = t9476 + t9933;
  t9949 = t3237*t9936;
  t9950 = t9949 + t5189;
  t9954 = t3046*t9936;
  t9955 = -1.*t3237*t5166;
  t9958 = t9954 + t9955;
  t9911 = 0.0016*t2620;
  t9914 = t9911 + t2981;
  t9927 = -0.2707*t2620;
  t9928 = -0.0016*t2728;
  t9930 = t9927 + t9928;
  t10030 = t2102*t9602;
  t10047 = t2209*t9061;
  t10049 = t10030 + t10047;
  t10051 = -1.*t2620*t10049;
  t10052 = t9621 + t10051;
  t10068 = -1.*t2728*t10049;
  t10072 = t9645 + t10068;
  t10093 = t3237*t10052;
  t10095 = t3046*t10072;
  t10097 = t10093 + t10095;
  t10104 = t3046*t10052;
  t10106 = -1.*t3237*t10072;
  t10107 = t10104 + t10106;
  t10153 = t2102*t9774;
  t10154 = t2209*t9247;
  t10158 = t10153 + t10154;
  t10162 = -1.*t2620*t10158;
  t10163 = t9810 + t10162;
  t10166 = -1.*t2728*t10158;
  t10167 = t9828 + t10166;
  t10170 = t3237*t10163;
  t10177 = t3046*t10167;
  t10180 = t10170 + t10177;
  t10186 = t3046*t10163;
  t10190 = -1.*t3237*t10167;
  t10193 = t10186 + t10190;
  t10300 = -1.*t3046*t5082;
  t10301 = t10300 + t9955;
  t5318 = t3657*t5190;
  t10248 = -0.7055*t3046;
  t10249 = 0.0184*t3237;
  t10263 = t10248 + t10249;
  t10269 = -0.0184*t3046;
  t10286 = t10269 + t3264;
  t10320 = t2728*t9608;
  t10324 = t2620*t10049;
  t10325 = t10320 + t10324;
  t10330 = -1.*t3237*t10325;
  t10331 = t10330 + t10095;
  t10338 = -1.*t3046*t10325;
  t10341 = t10338 + t10106;
  t10370 = t2728*t9784;
  t10371 = t2620*t10158;
  t10373 = t10370 + t10371;
  t10383 = -1.*t3237*t10373;
  t10384 = t10383 + t10177;
  t10386 = -1.*t3046*t10373;
  t10387 = t10386 + t10190;
  t10306 = -1.*t3705*t5190;
  t5326 = -1.*t3705*t5240;
  t5328 = t5318 + t5326;
  t10412 = 0.0216*t3657;
  t10414 = t10412 + t3811;
  t10424 = -1.1135*t3657;
  t10428 = -0.0216*t3705;
  t10431 = t10424 + t10428;
  t10347 = -1.*t3705*t10331;
  t10445 = t3046*t10325;
  t10446 = t3237*t10072;
  t10447 = t10445 + t10446;
  t10354 = t3657*t10331;
  t10390 = -1.*t3705*t10384;
  t10463 = t3046*t10373;
  t10464 = t3237*t10167;
  t10466 = t10463 + t10464;
  t10401 = t3657*t10384;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1081*t1181 + t1508*t1605 + t1967*t2041 + t2284*t2366 + t2422*t2520 + t2774*t2795 + t2986*t3034 + t3269*t3336 + t3433*t3559 + t3723*t3750 + t3817*t3891 - 0.027251*(t3705*t3750 + t3657*t3891) - 1.200144*(t3657*t3750 - 1.*t3705*t3891) + t425*t716 - 1.*t321*t343*t73 + t858*t912 - 0.1305*(t200*t343*t73 + t1181*t95);
  p_output1(10)=t4214*t425 + t1081*t4450 + t1508*t4519 - 0.1305*t4625 + t1967*t4780 + t2284*t4860 + t2422*t4922 + t2774*t4968 + t2986*t5021 + t3269*t5082 + t3433*t5166 + t3723*t5190 + t3817*t5240 - 0.027251*(t3705*t5190 + t3657*t5240) - 1.200144*t5328 + t321*t652*t73 + t4282*t858;
  p_output1(11)=0;
  p_output1(12)=t1081*t5395 + t1508*t5432 + t1967*t5484 + t2284*t5536 + t2422*t5576 + t2774*t5600 + t2986*t5668 + t3269*t5687 + t3433*t5725 + t3723*t5747 + t3817*t5786 - 0.027251*(t3705*t5747 + t3657*t5786) - 1.200144*(t3657*t5747 - 1.*t3705*t5786) - 1.*t321*t461*t652 + t425*t431*t652*t73 + t652*t693*t73*t858 - 0.1305*(t200*t461*t652 + t5395*t95);
  p_output1(13)=-1.*t321*t343*t461 + t1081*t5890 + t1508*t5916 + t1967*t5967 + t2284*t5990 + t2422*t6017 + t2774*t6022 + t2986*t6049 + t3269*t6073 + t3433*t6112 + t3723*t6163 + t3817*t6184 - 0.027251*(t3705*t6163 + t3657*t6184) - 1.200144*(t3657*t6163 - 1.*t3705*t6184) + t343*t425*t431*t73 + t343*t693*t73*t858 - 0.1305*(t200*t343*t461 + t5890*t95);
  p_output1(14)=-1.*t425*t431*t461 + t1081*t6271 + t1508*t6288 + t1967*t6350 + t2284*t6362 + t2422*t6391 + t2774*t6430 + t2986*t6480 + t3269*t6523 + t3433*t6572 + t3723*t6590 + t3817*t6631 - 0.027251*(t3705*t6590 + t3657*t6631) - 1.200144*(t3657*t6590 - 1.*t3705*t6631) - 1.*t321*t73 - 1.*t461*t693*t858 - 0.1305*(t200*t73 + t6271*t95);
  p_output1(15)=t425*t6700 + t1508*t6751 + t1081*t6775 + t1967*t200*t6775 + t2284*t6821 + t2422*t6835 + t2774*t6864 + t2986*t6873 + t3269*t6910 + t3433*t6944 + t3723*t6988 + t3817*t7006 - 0.027251*(t3705*t6988 + t3657*t7006) - 1.200144*(t3657*t6988 - 1.*t3705*t7006) + t4214*t858 - 0.1305*t6775*t95;
  p_output1(16)=t1508*t7047 + t1081*t7062 + t1967*t200*t7062 + t2284*t7091 + t2422*t7121 + t2774*t7131 + t2986*t7147 + t3269*t7163 + t3433*t7195 + t3723*t7218 + t3817*t7243 - 0.027251*(t3705*t7218 + t3657*t7243) - 1.200144*(t3657*t7218 - 1.*t3705*t7243) + t7035*t858 + t425*t912 - 0.1305*t7062*t95;
  p_output1(17)=-1.*t425*t693*t73 + t7308 + t7326 + t7330 + t7339 + t7390 + t7430 + t7458 + t7469 + t7485 + t7497 + t7527 + t7538 + t7553 + t7595 + t431*t73*t858;
  p_output1(18)=0;
  p_output1(19)=0;
  p_output1(20)=0;
  p_output1(21)=0;
  p_output1(22)=0;
  p_output1(23)=0;
  p_output1(24)=0;
  p_output1(25)=0;
  p_output1(26)=0;
  p_output1(27)=0;
  p_output1(28)=0;
  p_output1(29)=0;
  p_output1(30)=0;
  p_output1(31)=0;
  p_output1(32)=0;
  p_output1(33)=0;
  p_output1(34)=0;
  p_output1(35)=0;
  p_output1(36)=0;
  p_output1(37)=0;
  p_output1(38)=0;
  p_output1(39)=-0.135*t393*t4282 + t1081*t4519 + t1967*t200*t4519 + 0.135*t4214*t733 + t1508*t7648 + t2284*t7689 + t2422*t7716 + t2774*t7738 + t2986*t7762 + t3269*t7782 + t3433*t7788 + t3723*t7807 + t3817*t7835 - 0.027251*(t3705*t7807 + t3657*t7835) - 1.200144*(t3657*t7807 - 1.*t3705*t7835) - 0.1305*t4519*t95;
  p_output1(40)=0.135*t7035*t733 - 0.135*t393*t7922 + t1508*t7943 + t1081*t7957 + t1967*t200*t7957 + t2284*t7968 + t2422*t7984 + t2774*t8002 + t2986*t8014 + t3269*t8031 + t3433*t8046 + t3723*t8067 + t3817*t8103 - 0.027251*(t3705*t8067 + t3657*t8103) - 1.200144*(t3657*t8067 - 1.*t3705*t8103) - 0.1305*t7957*t95;
  p_output1(41)=-0.135*t393*t693*t73 + t7308 + t7326 + 0.135*t431*t73*t733 + t7330 + t7339 + t7390 + t7430 + t7458 + t7469 + t7485 + t7497 + t7527 + t7538 + t7553 + t7595;
  p_output1(42)=t1967*t4625 + t1252*t2284*t4625 - 1.*t1343*t2422*t4625 + t652*t73*t8183 + t4450*t8201 + t2774*t8240 + t2986*t8262 + t3269*t8270 + t3433*t8287 + t3723*t8315 + t3817*t8335 - 0.027251*(t3705*t8315 + t3657*t8335) - 1.200144*(t3657*t8315 - 1.*t3705*t8335) - 0.1305*(-1.*t200*t4450 - 1.*t652*t73*t95);
  p_output1(43)=t343*t73*t8183 + t8201*t8400 - 0.1305*(t2026 - 1.*t200*t8400) + t1967*t8407 + t1252*t2284*t8407 - 1.*t1343*t2422*t8407 + t2774*t8438 + t2986*t8472 + t3269*t8494 + t3433*t8508 + t3723*t8527 + t3817*t8535 - 0.027251*(t3705*t8527 + t3657*t8535) - 1.200144*(t3657*t8527 - 1.*t3705*t8535);
  p_output1(44)=-1.*t461*t8183 + t8201*t8580 + t1967*t8606 + t1252*t2284*t8606 - 1.*t1343*t2422*t8606 + t2774*t8654 + t2986*t8681 + t3269*t8703 + t3433*t8717 + t3723*t8733 + t3817*t8746 - 0.027251*(t3705*t8733 + t3657*t8746) - 1.200144*(t3657*t8733 - 1.*t3705*t8746) - 0.1305*(-1.*t200*t8580 + t461*t95);
  p_output1(45)=t2284*t4922 + t4519*t8785 + t4780*t8820 + t2422*t8842 + t2986*t8858 + t2774*t8877 + t3433*t8885 + t3269*t8906 + t3817*t8925 + t3723*t8945 - 1.200144*(-1.*t3705*t8925 + t3657*t8945) - 0.027251*(t3657*t8925 + t3705*t8945);
  p_output1(46)=t7957*t8785 + t8820*t9035 + t2422*t9048 + t2284*t9061 + t2986*t9092 + t2774*t9107 + t3433*t9116 + t3269*t9125 + t3817*t9143 + t3723*t9156 - 1.200144*(-1.*t3705*t9143 + t3657*t9156) - 0.027251*(t3657*t9143 + t3705*t9156);
  p_output1(47)=t7322*t8785 + t8820*t9218 + t2422*t9237 + t2284*t9247 + t2986*t9272 + t2774*t9294 + t3433*t9310 + t3269*t9320 + t3817*t9339 + t3723*t9362 - 1.200144*(-1.*t3705*t9339 + t3657*t9362) - 0.027251*(t3657*t9339 + t3705*t9362);
  p_output1(48)=t2986*t4968 + t4860*t9435 + t4922*t9453 + t2774*t9463 + t3433*t9478 + t3269*t9499 + t3817*t9520 + t3723*t9535 - 1.200144*(-1.*t3705*t9520 + t3657*t9535) - 0.027251*(t3657*t9520 + t3705*t9535);
  p_output1(49)=t9061*t9453 + t9435*t9602 + t2986*t9608 + t2774*t9619 + t3433*t9627 + t3269*t9651 + t3817*t9665 + t3723*t9695 - 1.200144*(-1.*t3705*t9665 + t3657*t9695) - 0.027251*(t3657*t9665 + t3705*t9695);
  p_output1(50)=t9247*t9453 + t9435*t9774 + t2986*t9784 + t2774*t9800 + t3433*t9824 + t3269*t9834 + t3817*t9848 + t3723*t9860 - 1.200144*(-1.*t3705*t9848 + t3657*t9860) - 0.027251*(t3657*t9848 + t3705*t9860);
  p_output1(51)=t3269*t5166 + t4968*t9914 + t5021*t9930 + t3433*t9936 + t3817*t9950 + t3723*t9958 - 1.200144*(-1.*t3705*t9950 + t3657*t9958) - 0.027251*(t3657*t9950 + t3705*t9958);
  p_output1(52)=t10072*t3269 + t10052*t3433 - 1.200144*(t10107*t3657 - 1.*t10097*t3705) - 0.027251*(t10097*t3657 + t10107*t3705) + t10107*t3723 + t10097*t3817 + t9608*t9914 + t10049*t9930;
  p_output1(53)=t10167*t3269 + t10163*t3433 - 1.200144*(t10193*t3657 - 1.*t10180*t3705) - 0.027251*(t10180*t3657 + t10193*t3705) + t10193*t3723 + t10180*t3817 + t9784*t9914 + t10158*t9930;
  p_output1(54)=-1.200144*(t10306 + t10301*t3657) + t10301*t3723 + t10263*t5082 + t10286*t5166 + t3817*t5190 - 0.027251*(t10301*t3705 + t5318);
  p_output1(55)=t10072*t10286 + t10263*t10325 - 1.200144*(t10347 + t10341*t3657) - 0.027251*(t10354 + t10341*t3705) + t10341*t3723 + t10331*t3817;
  p_output1(56)=t10167*t10286 + t10263*t10373 - 1.200144*(t10390 + t10387*t3657) - 0.027251*(t10401 + t10387*t3705) + t10387*t3723 + t10384*t3817;
  p_output1(57)=t10414*t5190 + t10431*t5240 - 1.200144*(t10306 - 1.*t3657*t5240) - 0.027251*t5328;
  p_output1(58)=t10331*t10414 + t10431*t10447 - 1.200144*(t10347 - 1.*t10447*t3657) - 0.027251*(t10354 - 1.*t10447*t3705);
  p_output1(59)=t10384*t10414 + t10431*t10466 - 1.200144*(t10390 - 1.*t10466*t3657) - 0.027251*(t10401 - 1.*t10466*t3705);
}


       
Eigen::Matrix<double,3,20> Jp_RightToeBack(const Eigen::Matrix<double,20,1> &var1)
//void Jp_RightToeBack(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,20>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



