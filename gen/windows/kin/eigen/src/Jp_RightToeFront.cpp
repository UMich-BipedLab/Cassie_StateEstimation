/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:23:04 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RightToeFront.h"

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
  double t311;
  double t512;
  double t448;
  double t499;
  double t519;
  double t13;
  double t62;
  double t101;
  double t129;
  double t335;
  double t509;
  double t540;
  double t583;
  double t756;
  double t959;
  double t1000;
  double t1013;
  double t6;
  double t1171;
  double t1189;
  double t1244;
  double t1308;
  double t1356;
  double t1378;
  double t1451;
  double t1523;
  double t1592;
  double t1603;
  double t1832;
  double t1850;
  double t1862;
  double t1917;
  double t1933;
  double t1935;
  double t2006;
  double t2115;
  double t2127;
  double t2201;
  double t2273;
  double t2282;
  double t2288;
  double t2315;
  double t2318;
  double t2350;
  double t2380;
  double t2445;
  double t2484;
  double t2495;
  double t2660;
  double t2692;
  double t2694;
  double t2756;
  double t2767;
  double t2778;
  double t2801;
  double t2932;
  double t2962;
  double t2992;
  double t3187;
  double t3193;
  double t3210;
  double t3245;
  double t3281;
  double t3300;
  double t3320;
  double t3366;
  double t3378;
  double t3389;
  double t3419;
  double t3458;
  double t3462;
  double t122;
  double t228;
  double t292;
  double t396;
  double t428;
  double t785;
  double t852;
  double t941;
  double t950;
  double t1044;
  double t1050;
  double t1102;
  double t3723;
  double t3749;
  double t3755;
  double t3819;
  double t3835;
  double t3865;
  double t1426;
  double t1473;
  double t1477;
  double t3875;
  double t3898;
  double t3915;
  double t1781;
  double t1793;
  double t1820;
  double t1961;
  double t2015;
  double t2105;
  double t3942;
  double t3986;
  double t4009;
  double t4128;
  double t4160;
  double t4233;
  double t2225;
  double t2230;
  double t2232;
  double t2361;
  double t2383;
  double t2436;
  double t4316;
  double t4324;
  double t4362;
  double t4374;
  double t4395;
  double t4416;
  double t2539;
  double t2613;
  double t2630;
  double t2789;
  double t2804;
  double t2874;
  double t4455;
  double t4463;
  double t4495;
  double t4515;
  double t4527;
  double t4556;
  double t3107;
  double t3127;
  double t3153;
  double t3318;
  double t3328;
  double t3341;
  double t4566;
  double t4570;
  double t4593;
  double t4643;
  double t4649;
  double t4653;
  double t3397;
  double t3405;
  double t3408;
  double t4668;
  double t4672;
  double t4673;
  double t4698;
  double t4700;
  double t4701;
  double t4842;
  double t4855;
  double t4859;
  double t4872;
  double t4873;
  double t4883;
  double t4923;
  double t4934;
  double t4947;
  double t4949;
  double t4952;
  double t4955;
  double t4960;
  double t4977;
  double t4984;
  double t4998;
  double t5009;
  double t5011;
  double t5020;
  double t5033;
  double t5045;
  double t5052;
  double t5055;
  double t5060;
  double t5090;
  double t5092;
  double t5098;
  double t5107;
  double t5116;
  double t5126;
  double t5148;
  double t5166;
  double t5198;
  double t5350;
  double t5379;
  double t5395;
  double t5409;
  double t5415;
  double t5420;
  double t5485;
  double t5499;
  double t5515;
  double t5523;
  double t5527;
  double t5530;
  double t5536;
  double t5568;
  double t5572;
  double t5582;
  double t5587;
  double t5591;
  double t5597;
  double t5600;
  double t5602;
  double t5620;
  double t5631;
  double t5635;
  double t5661;
  double t5662;
  double t5673;
  double t5679;
  double t5684;
  double t5686;
  double t5689;
  double t5690;
  double t5695;
  double t5774;
  double t5776;
  double t5777;
  double t5790;
  double t5800;
  double t5801;
  double t5831;
  double t5833;
  double t5835;
  double t5842;
  double t5851;
  double t5853;
  double t5883;
  double t5884;
  double t5890;
  double t5902;
  double t5910;
  double t5914;
  double t5922;
  double t5937;
  double t5945;
  double t5965;
  double t5967;
  double t5970;
  double t5978;
  double t5996;
  double t5998;
  double t6010;
  double t6014;
  double t6016;
  double t6022;
  double t6024;
  double t6033;
  double t6096;
  double t6111;
  double t6112;
  double t6163;
  double t6172;
  double t6131;
  double t6141;
  double t6152;
  double t6190;
  double t6195;
  double t6199;
  double t6210;
  double t6213;
  double t6221;
  double t6260;
  double t6263;
  double t6271;
  double t6289;
  double t6312;
  double t6315;
  double t6350;
  double t6351;
  double t6358;
  double t6373;
  double t6382;
  double t6391;
  double t6397;
  double t6406;
  double t6407;
  double t6430;
  double t6445;
  double t6463;
  double t6537;
  double t6540;
  double t6559;
  double t6590;
  double t6593;
  double t6594;
  double t6575;
  double t6577;
  double t6618;
  double t6631;
  double t6634;
  double t6642;
  double t6645;
  double t6646;
  double t6659;
  double t6660;
  double t6661;
  double t6683;
  double t6689;
  double t6693;
  double t6700;
  double t6704;
  double t6710;
  double t6722;
  double t6727;
  double t6737;
  double t6750;
  double t6751;
  double t6760;
  double t6775;
  double t6786;
  double t6794;
  double t6910;
  double t6913;
  double t6926;
  double t6889;
  double t6890;
  double t6891;
  double t6966;
  double t6970;
  double t6976;
  double t6993;
  double t6995;
  double t6996;
  double t7011;
  double t7015;
  double t7017;
  double t7022;
  double t7024;
  double t7027;
  double t7044;
  double t7047;
  double t7051;
  double t7069;
  double t7070;
  double t7073;
  double t7078;
  double t7080;
  double t7085;
  double t7088;
  double t7091;
  double t7099;
  double t7214;
  double t7219;
  double t7255;
  double t7256;
  double t7261;
  double t7266;
  double t7268;
  double t7270;
  double t7277;
  double t7279;
  double t7285;
  double t7291;
  double t7298;
  double t7301;
  double t7330;
  double t7339;
  double t7373;
  double t7390;
  double t7393;
  double t7402;
  double t7417;
  double t7418;
  double t7425;
  double t7439;
  double t7445;
  double t7451;
  double t7494;
  double t7497;
  double t7499;
  double t7513;
  double t7514;
  double t7501;
  double t7509;
  double t7538;
  double t7542;
  double t7547;
  double t7550;
  double t7551;
  double t7566;
  double t7575;
  double t7595;
  double t7597;
  double t7607;
  double t7609;
  double t7614;
  double t7629;
  double t7631;
  double t7632;
  double t7648;
  double t7653;
  double t7654;
  double t7656;
  double t7657;
  double t7659;
  double t7663;
  double t7665;
  double t7666;
  double t6902;
  double t6933;
  double t6937;
  double t6951;
  double t6986;
  double t6998;
  double t7020;
  double t7037;
  double t7068;
  double t7075;
  double t7086;
  double t7116;
  double t7123;
  double t7140;
  double t7164;
  double t7166;
  double t7168;
  double t7175;
  double t7179;
  double t7188;
  double t4033;
  double t4035;
  double t4039;
  double t7793;
  double t7794;
  double t7803;
  double t7821;
  double t7836;
  double t7847;
  double t7851;
  double t7862;
  double t7867;
  double t7876;
  double t7884;
  double t7895;
  double t7906;
  double t7910;
  double t7913;
  double t7918;
  double t7922;
  double t7933;
  double t7716;
  double t7719;
  double t7720;
  double t7738;
  double t7743;
  double t7971;
  double t7972;
  double t7973;
  double t7976;
  double t7978;
  double t7987;
  double t8022;
  double t8039;
  double t8040;
  double t8046;
  double t8050;
  double t8051;
  double t8067;
  double t8069;
  double t8073;
  double t8088;
  double t8100;
  double t8103;
  double t8112;
  double t8113;
  double t8115;
  double t8125;
  double t8126;
  double t8134;
  double t8207;
  double t8214;
  double t8220;
  double t8228;
  double t8240;
  double t8243;
  double t8302;
  double t8304;
  double t8307;
  double t8311;
  double t8312;
  double t8326;
  double t8335;
  double t8337;
  double t8341;
  double t8356;
  double t8359;
  double t8360;
  double t8362;
  double t8367;
  double t8368;
  double t8371;
  double t8373;
  double t8387;
  double t8450;
  double t8455;
  double t8461;
  double t8492;
  double t8498;
  double t8505;
  double t8507;
  double t8521;
  double t8523;
  double t8524;
  double t8528;
  double t8535;
  double t8543;
  double t8544;
  double t8546;
  double t8550;
  double t8551;
  double t8557;
  double t8559;
  double t8563;
  double t8432;
  double t8435;
  double t8440;
  double t8443;
  double t8444;
  double t8640;
  double t8648;
  double t8652;
  double t8667;
  double t8674;
  double t8681;
  double t8691;
  double t8692;
  double t8696;
  double t8705;
  double t8712;
  double t8713;
  double t8723;
  double t8728;
  double t8733;
  double t8741;
  double t8746;
  double t8747;
  double t8758;
  double t8769;
  double t8774;
  double t8794;
  double t8800;
  double t8801;
  double t8820;
  double t8823;
  double t8836;
  double t8904;
  double t8906;
  double t8915;
  double t8934;
  double t8949;
  double t8952;
  double t8958;
  double t8960;
  double t8961;
  double t8970;
  double t8977;
  double t8982;
  double t8999;
  double t9003;
  double t9005;
  double t9020;
  double t9021;
  double t9027;
  double t9035;
  double t9037;
  double t9038;
  double t9045;
  double t9048;
  double t9050;
  double t9061;
  double t9063;
  double t9065;
  double t9157;
  double t9160;
  double t9165;
  double t9166;
  double t9171;
  double t9174;
  double t9181;
  double t9190;
  double t9192;
  double t9196;
  double t9202;
  double t9203;
  double t9206;
  double t9124;
  double t9127;
  double t9129;
  double t9132;
  double t9133;
  double t9246;
  double t9247;
  double t9249;
  double t9256;
  double t9258;
  double t9282;
  double t9290;
  double t9297;
  double t9302;
  double t9306;
  double t9317;
  double t9319;
  double t9333;
  double t9338;
  double t9340;
  double t9344;
  double t9347;
  double t9351;
  double t9352;
  double t9408;
  double t9409;
  double t9424;
  double t9439;
  double t9442;
  double t9457;
  double t9458;
  double t9469;
  double t9474;
  double t9477;
  double t9485;
  double t9489;
  double t9491;
  double t9512;
  double t9513;
  double t9515;
  double t9520;
  double t9521;
  double t9523;
  double t9608;
  double t9612;
  double t9620;
  double t9624;
  double t9627;
  double t9630;
  double t9636;
  double t9569;
  double t9576;
  double t9586;
  double t9598;
  double t9601;
  double t9691;
  double t9692;
  double t9693;
  double t9696;
  double t9699;
  double t9709;
  double t9710;
  double t9720;
  double t9727;
  double t9738;
  double t9758;
  double t9760;
  double t9767;
  double t9829;
  double t9836;
  double t9837;
  double t9845;
  double t9846;
  double t9856;
  double t9861;
  double t9883;
  double t9891;
  double t9893;
  double t9896;
  double t9906;
  double t9910;
  double t9969;
  double t9983;
  double t4784;
  double t9945;
  double t9948;
  double t9949;
  double t9952;
  double t9955;
  double t10038;
  double t10047;
  double t10048;
  double t10059;
  double t10065;
  double t10075;
  double t10078;
  double t10108;
  double t10110;
  double t10114;
  double t10128;
  double t10131;
  double t10141;
  double t10143;
  double t9991;
  double t4790;
  double t4809;
  double t10167;
  double t10169;
  double t10171;
  double t10177;
  double t10180;
  double t10085;
  double t10217;
  double t10219;
  double t10222;
  double t10096;
  double t10148;
  double t10265;
  double t10266;
  double t10271;
  double t10160;
  t311 = Sin(var1[3]);
  t512 = Cos(var1[3]);
  t448 = Cos(var1[5]);
  t499 = Sin(var1[4]);
  t519 = Sin(var1[5]);
  t13 = Cos(var1[14]);
  t62 = -1.*t13;
  t101 = 1. + t62;
  t129 = Sin(var1[14]);
  t335 = Sin(var1[13]);
  t509 = -1.*t448*t311*t499;
  t540 = t512*t519;
  t583 = t509 + t540;
  t756 = Cos(var1[13]);
  t959 = -1.*t512*t448;
  t1000 = -1.*t311*t499*t519;
  t1013 = t959 + t1000;
  t6 = Cos(var1[4]);
  t1171 = t335*t583;
  t1189 = t756*t1013;
  t1244 = t1171 + t1189;
  t1308 = Cos(var1[15]);
  t1356 = -1.*t1308;
  t1378 = 1. + t1356;
  t1451 = Sin(var1[15]);
  t1523 = t756*t583;
  t1592 = -1.*t335*t1013;
  t1603 = t1523 + t1592;
  t1832 = -1.*t13*t6*t311;
  t1850 = t129*t1244;
  t1862 = t1832 + t1850;
  t1917 = Cos(var1[16]);
  t1933 = -1.*t1917;
  t1935 = 1. + t1933;
  t2006 = Sin(var1[16]);
  t2115 = t1451*t1603;
  t2127 = t1308*t1862;
  t2201 = t2115 + t2127;
  t2273 = t1308*t1603;
  t2282 = -1.*t1451*t1862;
  t2288 = t2273 + t2282;
  t2315 = Cos(var1[17]);
  t2318 = -1.*t2315;
  t2350 = 1. + t2318;
  t2380 = Sin(var1[17]);
  t2445 = -1.*t2006*t2201;
  t2484 = t1917*t2288;
  t2495 = t2445 + t2484;
  t2660 = t1917*t2201;
  t2692 = t2006*t2288;
  t2694 = t2660 + t2692;
  t2756 = Cos(var1[18]);
  t2767 = -1.*t2756;
  t2778 = 1. + t2767;
  t2801 = Sin(var1[18]);
  t2932 = t2380*t2495;
  t2962 = t2315*t2694;
  t2992 = t2932 + t2962;
  t3187 = t2315*t2495;
  t3193 = -1.*t2380*t2694;
  t3210 = t3187 + t3193;
  t3245 = Cos(var1[19]);
  t3281 = -1.*t3245;
  t3300 = 1. + t3281;
  t3320 = Sin(var1[19]);
  t3366 = -1.*t2801*t2992;
  t3378 = t2756*t3210;
  t3389 = t3366 + t3378;
  t3419 = t2756*t2992;
  t3458 = t2801*t3210;
  t3462 = t3419 + t3458;
  t122 = -0.049*t101;
  t228 = -0.135*t129;
  t292 = 0. + t122 + t228;
  t396 = 0.135*t335;
  t428 = 0. + t396;
  t785 = -1.*t756;
  t852 = 1. + t785;
  t941 = -0.135*t852;
  t950 = 0. + t941;
  t1044 = -0.135*t101;
  t1050 = 0.049*t129;
  t1102 = 0. + t1044 + t1050;
  t3723 = t512*t448*t499;
  t3749 = t311*t519;
  t3755 = t3723 + t3749;
  t3819 = -1.*t448*t311;
  t3835 = t512*t499*t519;
  t3865 = t3819 + t3835;
  t1426 = -0.09*t1378;
  t1473 = 0.049*t1451;
  t1477 = 0. + t1426 + t1473;
  t3875 = t335*t3755;
  t3898 = t756*t3865;
  t3915 = t3875 + t3898;
  t1781 = -0.049*t1378;
  t1793 = -0.09*t1451;
  t1820 = 0. + t1781 + t1793;
  t1961 = -0.049*t1935;
  t2015 = -0.21*t2006;
  t2105 = 0. + t1961 + t2015;
  t3942 = t756*t3755;
  t3986 = -1.*t335*t3865;
  t4009 = t3942 + t3986;
  t4128 = t13*t512*t6;
  t4160 = t129*t3915;
  t4233 = t4128 + t4160;
  t2225 = -0.21*t1935;
  t2230 = 0.049*t2006;
  t2232 = 0. + t2225 + t2230;
  t2361 = -0.2707*t2350;
  t2383 = 0.0016*t2380;
  t2436 = 0. + t2361 + t2383;
  t4316 = t1451*t4009;
  t4324 = t1308*t4233;
  t4362 = t4316 + t4324;
  t4374 = t1308*t4009;
  t4395 = -1.*t1451*t4233;
  t4416 = t4374 + t4395;
  t2539 = -0.0016*t2350;
  t2613 = -0.2707*t2380;
  t2630 = 0. + t2539 + t2613;
  t2789 = 0.0184*t2778;
  t2804 = -0.7055*t2801;
  t2874 = 0. + t2789 + t2804;
  t4455 = -1.*t2006*t4362;
  t4463 = t1917*t4416;
  t4495 = t4455 + t4463;
  t4515 = t1917*t4362;
  t4527 = t2006*t4416;
  t4556 = t4515 + t4527;
  t3107 = -0.7055*t2778;
  t3127 = -0.0184*t2801;
  t3153 = 0. + t3107 + t3127;
  t3318 = -1.1135*t3300;
  t3328 = 0.0216*t3320;
  t3341 = 0. + t3318 + t3328;
  t4566 = t2380*t4495;
  t4570 = t2315*t4556;
  t4593 = t4566 + t4570;
  t4643 = t2315*t4495;
  t4649 = -1.*t2380*t4556;
  t4653 = t4643 + t4649;
  t3397 = -0.0216*t3300;
  t3405 = -1.1135*t3320;
  t3408 = 0. + t3397 + t3405;
  t4668 = -1.*t2801*t4593;
  t4672 = t2756*t4653;
  t4673 = t4668 + t4672;
  t4698 = t2756*t4593;
  t4700 = t2801*t4653;
  t4701 = t4698 + t4700;
  t4842 = t512*t6*t448*t335;
  t4855 = t756*t512*t6*t519;
  t4859 = t4842 + t4855;
  t4872 = t756*t512*t6*t448;
  t4873 = -1.*t512*t6*t335*t519;
  t4883 = t4872 + t4873;
  t4923 = -1.*t13*t512*t499;
  t4934 = t129*t4859;
  t4947 = t4923 + t4934;
  t4949 = t1451*t4883;
  t4952 = t1308*t4947;
  t4955 = t4949 + t4952;
  t4960 = t1308*t4883;
  t4977 = -1.*t1451*t4947;
  t4984 = t4960 + t4977;
  t4998 = -1.*t2006*t4955;
  t5009 = t1917*t4984;
  t5011 = t4998 + t5009;
  t5020 = t1917*t4955;
  t5033 = t2006*t4984;
  t5045 = t5020 + t5033;
  t5052 = t2380*t5011;
  t5055 = t2315*t5045;
  t5060 = t5052 + t5055;
  t5090 = t2315*t5011;
  t5092 = -1.*t2380*t5045;
  t5098 = t5090 + t5092;
  t5107 = -1.*t2801*t5060;
  t5116 = t2756*t5098;
  t5126 = t5107 + t5116;
  t5148 = t2756*t5060;
  t5166 = t2801*t5098;
  t5198 = t5148 + t5166;
  t5350 = t6*t448*t335*t311;
  t5379 = t756*t6*t311*t519;
  t5395 = t5350 + t5379;
  t5409 = t756*t6*t448*t311;
  t5415 = -1.*t6*t335*t311*t519;
  t5420 = t5409 + t5415;
  t5485 = -1.*t13*t311*t499;
  t5499 = t129*t5395;
  t5515 = t5485 + t5499;
  t5523 = t1451*t5420;
  t5527 = t1308*t5515;
  t5530 = t5523 + t5527;
  t5536 = t1308*t5420;
  t5568 = -1.*t1451*t5515;
  t5572 = t5536 + t5568;
  t5582 = -1.*t2006*t5530;
  t5587 = t1917*t5572;
  t5591 = t5582 + t5587;
  t5597 = t1917*t5530;
  t5600 = t2006*t5572;
  t5602 = t5597 + t5600;
  t5620 = t2380*t5591;
  t5631 = t2315*t5602;
  t5635 = t5620 + t5631;
  t5661 = t2315*t5591;
  t5662 = -1.*t2380*t5602;
  t5673 = t5661 + t5662;
  t5679 = -1.*t2801*t5635;
  t5684 = t2756*t5673;
  t5686 = t5679 + t5684;
  t5689 = t2756*t5635;
  t5690 = t2801*t5673;
  t5695 = t5689 + t5690;
  t5774 = -1.*t448*t335*t499;
  t5776 = -1.*t756*t499*t519;
  t5777 = t5774 + t5776;
  t5790 = -1.*t756*t448*t499;
  t5800 = t335*t499*t519;
  t5801 = t5790 + t5800;
  t5831 = -1.*t13*t6;
  t5833 = t129*t5777;
  t5835 = t5831 + t5833;
  t5842 = t1451*t5801;
  t5851 = t1308*t5835;
  t5853 = t5842 + t5851;
  t5883 = t1308*t5801;
  t5884 = -1.*t1451*t5835;
  t5890 = t5883 + t5884;
  t5902 = -1.*t2006*t5853;
  t5910 = t1917*t5890;
  t5914 = t5902 + t5910;
  t5922 = t1917*t5853;
  t5937 = t2006*t5890;
  t5945 = t5922 + t5937;
  t5965 = t2380*t5914;
  t5967 = t2315*t5945;
  t5970 = t5965 + t5967;
  t5978 = t2315*t5914;
  t5996 = -1.*t2380*t5945;
  t5998 = t5978 + t5996;
  t6010 = -1.*t2801*t5970;
  t6014 = t2756*t5998;
  t6016 = t6010 + t6014;
  t6022 = t2756*t5970;
  t6024 = t2801*t5998;
  t6033 = t6022 + t6024;
  t6096 = t448*t311;
  t6111 = -1.*t512*t499*t519;
  t6112 = t6096 + t6111;
  t6163 = t335*t6112;
  t6172 = t3942 + t6163;
  t6131 = -1.*t335*t3755;
  t6141 = t756*t6112;
  t6152 = t6131 + t6141;
  t6190 = t1451*t6152;
  t6195 = t1308*t129*t6172;
  t6199 = t6190 + t6195;
  t6210 = t1308*t6152;
  t6213 = -1.*t129*t1451*t6172;
  t6221 = t6210 + t6213;
  t6260 = -1.*t2006*t6199;
  t6263 = t1917*t6221;
  t6271 = t6260 + t6263;
  t6289 = t1917*t6199;
  t6312 = t2006*t6221;
  t6315 = t6289 + t6312;
  t6350 = t2380*t6271;
  t6351 = t2315*t6315;
  t6358 = t6350 + t6351;
  t6373 = t2315*t6271;
  t6382 = -1.*t2380*t6315;
  t6391 = t6373 + t6382;
  t6397 = -1.*t2801*t6358;
  t6406 = t2756*t6391;
  t6407 = t6397 + t6406;
  t6430 = t2756*t6358;
  t6445 = t2801*t6391;
  t6463 = t6430 + t6445;
  t6537 = t448*t311*t499;
  t6540 = -1.*t512*t519;
  t6559 = t6537 + t6540;
  t6590 = t756*t6559;
  t6593 = t335*t1013;
  t6594 = t6590 + t6593;
  t6575 = -1.*t335*t6559;
  t6577 = t6575 + t1189;
  t6618 = t1451*t6577;
  t6631 = t1308*t129*t6594;
  t6634 = t6618 + t6631;
  t6642 = t1308*t6577;
  t6645 = -1.*t129*t1451*t6594;
  t6646 = t6642 + t6645;
  t6659 = -1.*t2006*t6634;
  t6660 = t1917*t6646;
  t6661 = t6659 + t6660;
  t6683 = t1917*t6634;
  t6689 = t2006*t6646;
  t6693 = t6683 + t6689;
  t6700 = t2380*t6661;
  t6704 = t2315*t6693;
  t6710 = t6700 + t6704;
  t6722 = t2315*t6661;
  t6727 = -1.*t2380*t6693;
  t6737 = t6722 + t6727;
  t6750 = -1.*t2801*t6710;
  t6751 = t2756*t6737;
  t6760 = t6750 + t6751;
  t6775 = t2756*t6710;
  t6786 = t2801*t6737;
  t6794 = t6775 + t6786;
  t6910 = t756*t6*t448;
  t6913 = -1.*t6*t335*t519;
  t6926 = t6910 + t6913;
  t6889 = -1.*t6*t448*t335;
  t6890 = -1.*t756*t6*t519;
  t6891 = t6889 + t6890;
  t6966 = t1451*t6891;
  t6970 = t1308*t129*t6926;
  t6976 = t6966 + t6970;
  t6993 = t1308*t6891;
  t6995 = -1.*t129*t1451*t6926;
  t6996 = t6993 + t6995;
  t7011 = -1.*t2006*t6976;
  t7015 = t1917*t6996;
  t7017 = t7011 + t7015;
  t7022 = t1917*t6976;
  t7024 = t2006*t6996;
  t7027 = t7022 + t7024;
  t7044 = t2380*t7017;
  t7047 = t2315*t7027;
  t7051 = t7044 + t7047;
  t7069 = t2315*t7017;
  t7070 = -1.*t2380*t7027;
  t7073 = t7069 + t7070;
  t7078 = -1.*t2801*t7051;
  t7080 = t2756*t7073;
  t7085 = t7078 + t7080;
  t7088 = t2756*t7051;
  t7091 = t2801*t7073;
  t7099 = t7088 + t7091;
  t7214 = -1.*t756*t3865;
  t7219 = t6131 + t7214;
  t7255 = t1451*t7219;
  t7256 = t1308*t129*t4009;
  t7261 = t7255 + t7256;
  t7266 = t1308*t7219;
  t7268 = -1.*t129*t1451*t4009;
  t7270 = t7266 + t7268;
  t7277 = -1.*t2006*t7261;
  t7279 = t1917*t7270;
  t7285 = t7277 + t7279;
  t7291 = t1917*t7261;
  t7298 = t2006*t7270;
  t7301 = t7291 + t7298;
  t7330 = t2380*t7285;
  t7339 = t2315*t7301;
  t7373 = t7330 + t7339;
  t7390 = t2315*t7285;
  t7393 = -1.*t2380*t7301;
  t7402 = t7390 + t7393;
  t7417 = -1.*t2801*t7373;
  t7418 = t2756*t7402;
  t7425 = t7417 + t7418;
  t7439 = t2756*t7373;
  t7445 = t2801*t7402;
  t7451 = t7439 + t7445;
  t7494 = t512*t448;
  t7497 = t311*t499*t519;
  t7499 = t7494 + t7497;
  t7513 = -1.*t335*t7499;
  t7514 = t6590 + t7513;
  t7501 = -1.*t756*t7499;
  t7509 = t6575 + t7501;
  t7538 = t1451*t7509;
  t7542 = t1308*t129*t7514;
  t7547 = t7538 + t7542;
  t7550 = t1308*t7509;
  t7551 = -1.*t129*t1451*t7514;
  t7566 = t7550 + t7551;
  t7575 = -1.*t2006*t7547;
  t7595 = t1917*t7566;
  t7597 = t7575 + t7595;
  t7607 = t1917*t7547;
  t7609 = t2006*t7566;
  t7614 = t7607 + t7609;
  t7629 = t2380*t7597;
  t7631 = t2315*t7614;
  t7632 = t7629 + t7631;
  t7648 = t2315*t7597;
  t7653 = -1.*t2380*t7614;
  t7654 = t7648 + t7653;
  t7656 = -1.*t2801*t7632;
  t7657 = t2756*t7654;
  t7659 = t7656 + t7657;
  t7663 = t2756*t7632;
  t7665 = t2801*t7654;
  t7666 = t7663 + t7665;
  t6902 = t1477*t6891;
  t6933 = -0.1305*t13*t6926;
  t6937 = t1102*t6926;
  t6951 = t129*t1820*t6926;
  t6986 = t2105*t6976;
  t6998 = t2232*t6996;
  t7020 = t2436*t7017;
  t7037 = t2630*t7027;
  t7068 = t2874*t7051;
  t7075 = t3153*t7073;
  t7086 = t3341*t7085;
  t7116 = t3408*t7099;
  t7123 = t3320*t7085;
  t7140 = t3245*t7099;
  t7164 = t7123 + t7140;
  t7166 = 0.088451*t7164;
  t7168 = t3245*t7085;
  t7175 = -1.*t3320*t7099;
  t7179 = t7168 + t7175;
  t7188 = -1.062256*t7179;
  t4033 = -1.*t512*t6*t129;
  t4035 = t13*t3915;
  t4039 = t4033 + t4035;
  t7793 = -1.*t1917*t1451*t4039;
  t7794 = -1.*t1308*t2006*t4039;
  t7803 = t7793 + t7794;
  t7821 = t1308*t1917*t4039;
  t7836 = -1.*t1451*t2006*t4039;
  t7847 = t7821 + t7836;
  t7851 = t2380*t7803;
  t7862 = t2315*t7847;
  t7867 = t7851 + t7862;
  t7876 = t2315*t7803;
  t7884 = -1.*t2380*t7847;
  t7895 = t7876 + t7884;
  t7906 = -1.*t2801*t7867;
  t7910 = t2756*t7895;
  t7913 = t7906 + t7910;
  t7918 = t2756*t7867;
  t7922 = t2801*t7895;
  t7933 = t7918 + t7922;
  t7716 = -0.135*t13;
  t7719 = -0.049*t129;
  t7720 = t7716 + t7719;
  t7738 = 0.049*t13;
  t7743 = t7738 + t228;
  t7971 = t335*t6559;
  t7972 = t756*t7499;
  t7973 = t7971 + t7972;
  t7976 = -1.*t6*t129*t311;
  t7978 = t13*t7973;
  t7987 = t7976 + t7978;
  t8022 = -1.*t1917*t1451*t7987;
  t8039 = -1.*t1308*t2006*t7987;
  t8040 = t8022 + t8039;
  t8046 = t1308*t1917*t7987;
  t8050 = -1.*t1451*t2006*t7987;
  t8051 = t8046 + t8050;
  t8067 = t2380*t8040;
  t8069 = t2315*t8051;
  t8073 = t8067 + t8069;
  t8088 = t2315*t8040;
  t8100 = -1.*t2380*t8051;
  t8103 = t8088 + t8100;
  t8112 = -1.*t2801*t8073;
  t8113 = t2756*t8103;
  t8115 = t8112 + t8113;
  t8125 = t2756*t8073;
  t8126 = t2801*t8103;
  t8134 = t8125 + t8126;
  t8207 = t6*t448*t335;
  t8214 = t756*t6*t519;
  t8220 = t8207 + t8214;
  t8228 = t129*t499;
  t8240 = t13*t8220;
  t8243 = t8228 + t8240;
  t8302 = -1.*t1917*t1451*t8243;
  t8304 = -1.*t1308*t2006*t8243;
  t8307 = t8302 + t8304;
  t8311 = t1308*t1917*t8243;
  t8312 = -1.*t1451*t2006*t8243;
  t8326 = t8311 + t8312;
  t8335 = t2380*t8307;
  t8337 = t2315*t8326;
  t8341 = t8335 + t8337;
  t8356 = t2315*t8307;
  t8359 = -1.*t2380*t8326;
  t8360 = t8356 + t8359;
  t8362 = -1.*t2801*t8341;
  t8367 = t2756*t8360;
  t8368 = t8362 + t8367;
  t8371 = t2756*t8341;
  t8373 = t2801*t8360;
  t8387 = t8371 + t8373;
  t8450 = -1.*t1451*t4009;
  t8455 = -1.*t1308*t4233;
  t8461 = t8450 + t8455;
  t8492 = t2006*t8461;
  t8498 = t8492 + t4463;
  t8505 = t1917*t8461;
  t8507 = -1.*t2006*t4416;
  t8521 = t8505 + t8507;
  t8523 = -1.*t2380*t8498;
  t8524 = t2315*t8521;
  t8528 = t8523 + t8524;
  t8535 = t2315*t8498;
  t8543 = t2380*t8521;
  t8544 = t8535 + t8543;
  t8546 = t2801*t8528;
  t8550 = t2756*t8544;
  t8551 = t8546 + t8550;
  t8557 = t2756*t8528;
  t8559 = -1.*t2801*t8544;
  t8563 = t8557 + t8559;
  t8432 = 0.049*t1308;
  t8435 = t8432 + t1793;
  t8440 = -0.09*t1308;
  t8443 = -0.049*t1451;
  t8444 = t8440 + t8443;
  t8640 = t13*t6*t311;
  t8648 = t129*t7973;
  t8652 = t8640 + t8648;
  t8667 = -1.*t1451*t7514;
  t8674 = -1.*t1308*t8652;
  t8681 = t8667 + t8674;
  t8691 = t1308*t7514;
  t8692 = -1.*t1451*t8652;
  t8696 = t8691 + t8692;
  t8705 = t2006*t8681;
  t8712 = t1917*t8696;
  t8713 = t8705 + t8712;
  t8723 = t1917*t8681;
  t8728 = -1.*t2006*t8696;
  t8733 = t8723 + t8728;
  t8741 = -1.*t2380*t8713;
  t8746 = t2315*t8733;
  t8747 = t8741 + t8746;
  t8758 = t2315*t8713;
  t8769 = t2380*t8733;
  t8774 = t8758 + t8769;
  t8794 = t2801*t8747;
  t8800 = t2756*t8774;
  t8801 = t8794 + t8800;
  t8820 = t2756*t8747;
  t8823 = -1.*t2801*t8774;
  t8836 = t8820 + t8823;
  t8904 = -1.*t13*t499;
  t8906 = t129*t8220;
  t8915 = t8904 + t8906;
  t8934 = -1.*t1451*t6926;
  t8949 = -1.*t1308*t8915;
  t8952 = t8934 + t8949;
  t8958 = t1308*t6926;
  t8960 = -1.*t1451*t8915;
  t8961 = t8958 + t8960;
  t8970 = t2006*t8952;
  t8977 = t1917*t8961;
  t8982 = t8970 + t8977;
  t8999 = t1917*t8952;
  t9003 = -1.*t2006*t8961;
  t9005 = t8999 + t9003;
  t9020 = -1.*t2380*t8982;
  t9021 = t2315*t9005;
  t9027 = t9020 + t9021;
  t9035 = t2315*t8982;
  t9037 = t2380*t9005;
  t9038 = t9035 + t9037;
  t9045 = t2801*t9027;
  t9048 = t2756*t9038;
  t9050 = t9045 + t9048;
  t9061 = t2756*t9027;
  t9063 = -1.*t2801*t9038;
  t9065 = t9061 + t9063;
  t9157 = -1.*t1917*t4362;
  t9160 = t9157 + t8507;
  t9165 = -1.*t2380*t4495;
  t9166 = t2315*t9160;
  t9171 = t9165 + t9166;
  t9174 = t2380*t9160;
  t9181 = t4643 + t9174;
  t9190 = t2801*t9171;
  t9192 = t2756*t9181;
  t9196 = t9190 + t9192;
  t9202 = t2756*t9171;
  t9203 = -1.*t2801*t9181;
  t9206 = t9202 + t9203;
  t9124 = -0.21*t1917;
  t9127 = -0.049*t2006;
  t9129 = t9124 + t9127;
  t9132 = 0.049*t1917;
  t9133 = t9132 + t2015;
  t9246 = t1451*t7514;
  t9247 = t1308*t8652;
  t9249 = t9246 + t9247;
  t9256 = -1.*t2006*t9249;
  t9258 = t9256 + t8712;
  t9282 = -1.*t1917*t9249;
  t9290 = t9282 + t8728;
  t9297 = -1.*t2380*t9258;
  t9302 = t2315*t9290;
  t9306 = t9297 + t9302;
  t9317 = t2315*t9258;
  t9319 = t2380*t9290;
  t9333 = t9317 + t9319;
  t9338 = t2801*t9306;
  t9340 = t2756*t9333;
  t9344 = t9338 + t9340;
  t9347 = t2756*t9306;
  t9351 = -1.*t2801*t9333;
  t9352 = t9347 + t9351;
  t9408 = t1451*t6926;
  t9409 = t1308*t8915;
  t9424 = t9408 + t9409;
  t9439 = -1.*t2006*t9424;
  t9442 = t9439 + t8977;
  t9457 = -1.*t1917*t9424;
  t9458 = t9457 + t9003;
  t9469 = -1.*t2380*t9442;
  t9474 = t2315*t9458;
  t9477 = t9469 + t9474;
  t9485 = t2315*t9442;
  t9489 = t2380*t9458;
  t9491 = t9485 + t9489;
  t9512 = t2801*t9477;
  t9513 = t2756*t9491;
  t9515 = t9512 + t9513;
  t9520 = t2756*t9477;
  t9521 = -1.*t2801*t9491;
  t9523 = t9520 + t9521;
  t9608 = -1.*t2315*t4556;
  t9612 = t9165 + t9608;
  t9620 = t2801*t9612;
  t9624 = t9620 + t4672;
  t9627 = t2756*t9612;
  t9630 = -1.*t2801*t4653;
  t9636 = t9627 + t9630;
  t9569 = 0.0016*t2315;
  t9576 = t9569 + t2613;
  t9586 = -0.2707*t2315;
  t9598 = -0.0016*t2380;
  t9601 = t9586 + t9598;
  t9691 = t1917*t9249;
  t9692 = t2006*t8696;
  t9693 = t9691 + t9692;
  t9696 = -1.*t2315*t9693;
  t9699 = t9297 + t9696;
  t9709 = -1.*t2380*t9693;
  t9710 = t9317 + t9709;
  t9720 = t2801*t9699;
  t9727 = t2756*t9710;
  t9738 = t9720 + t9727;
  t9758 = t2756*t9699;
  t9760 = -1.*t2801*t9710;
  t9767 = t9758 + t9760;
  t9829 = t1917*t9424;
  t9836 = t2006*t8961;
  t9837 = t9829 + t9836;
  t9845 = -1.*t2315*t9837;
  t9846 = t9469 + t9845;
  t9856 = -1.*t2380*t9837;
  t9861 = t9485 + t9856;
  t9883 = t2801*t9846;
  t9891 = t2756*t9861;
  t9893 = t9883 + t9891;
  t9896 = t2756*t9846;
  t9906 = -1.*t2801*t9861;
  t9910 = t9896 + t9906;
  t9969 = -1.*t2756*t4593;
  t9983 = t9969 + t9630;
  t4784 = t3245*t4673;
  t9945 = -0.7055*t2756;
  t9948 = 0.0184*t2801;
  t9949 = t9945 + t9948;
  t9952 = -0.0184*t2756;
  t9955 = t9952 + t2804;
  t10038 = t2380*t9258;
  t10047 = t2315*t9693;
  t10048 = t10038 + t10047;
  t10059 = -1.*t2801*t10048;
  t10065 = t10059 + t9727;
  t10075 = -1.*t2756*t10048;
  t10078 = t10075 + t9760;
  t10108 = t2380*t9442;
  t10110 = t2315*t9837;
  t10114 = t10108 + t10110;
  t10128 = -1.*t2801*t10114;
  t10131 = t10128 + t9891;
  t10141 = -1.*t2756*t10114;
  t10143 = t10141 + t9906;
  t9991 = -1.*t3320*t4673;
  t4790 = -1.*t3320*t4701;
  t4809 = t4784 + t4790;
  t10167 = 0.0216*t3245;
  t10169 = t10167 + t3405;
  t10171 = -1.1135*t3245;
  t10177 = -0.0216*t3320;
  t10180 = t10171 + t10177;
  t10085 = -1.*t3320*t10065;
  t10217 = t2756*t10048;
  t10219 = t2801*t9710;
  t10222 = t10217 + t10219;
  t10096 = t3245*t10065;
  t10148 = -1.*t3320*t10131;
  t10265 = t2756*t10114;
  t10266 = t2801*t9861;
  t10271 = t10265 + t10266;
  t10160 = t3245*t10131;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1102*t1244 + t1477*t1603 + t1820*t1862 + t2105*t2201 + t2232*t2288 + t2436*t2495 + t2630*t2694 + t2874*t2992 + t3153*t3210 + t3341*t3389 + t3408*t3462 + 0.088451*(t3320*t3389 + t3245*t3462) - 1.062256*(t3245*t3389 - 1.*t3320*t3462) + t428*t583 - 1.*t292*t311*t6 - 0.1305*(t1244*t13 + t129*t311*t6) + t1013*t950;
  p_output1(10)=t1102*t3915 + t1477*t4009 - 0.1305*t4039 + t1820*t4233 + t3755*t428 + t2105*t4362 + t2232*t4416 + t2436*t4495 + t2630*t4556 + t2874*t4593 + t3153*t4653 + t3341*t4673 + t3408*t4701 + 0.088451*(t3320*t4673 + t3245*t4701) - 1.062256*t4809 + t292*t512*t6 + t3865*t950;
  p_output1(11)=0;
  p_output1(12)=t1102*t4859 + t1477*t4883 + t1820*t4947 + t2105*t4955 + t2232*t4984 + t2436*t5011 + t2630*t5045 + t2874*t5060 + t3153*t5098 - 1.*t292*t499*t512 - 0.1305*(t13*t4859 + t129*t499*t512) + t3341*t5126 + t3408*t5198 + 0.088451*(t3320*t5126 + t3245*t5198) - 1.062256*(t3245*t5126 - 1.*t3320*t5198) + t428*t448*t512*t6 + t512*t519*t6*t950;
  p_output1(13)=-1.*t292*t311*t499 + t1102*t5395 - 0.1305*(t129*t311*t499 + t13*t5395) + t1477*t5420 + t1820*t5515 + t2105*t5530 + t2232*t5572 + t2436*t5591 + t2630*t5602 + t2874*t5635 + t3153*t5673 + t3341*t5686 + t3408*t5695 + 0.088451*(t3320*t5686 + t3245*t5695) - 1.062256*(t3245*t5686 - 1.*t3320*t5695) + t311*t428*t448*t6 + t311*t519*t6*t950;
  p_output1(14)=-1.*t428*t448*t499 + t1102*t5777 + t1477*t5801 + t1820*t5835 + t2105*t5853 + t2232*t5890 + t2436*t5914 + t2630*t5945 + t2874*t5970 + t3153*t5998 - 1.*t292*t6 - 0.1305*(t13*t5777 + t129*t6) + t3341*t6016 + t3408*t6033 + 0.088451*(t3320*t6016 + t3245*t6033) - 1.062256*(t3245*t6016 - 1.*t3320*t6033) - 1.*t499*t519*t950;
  p_output1(15)=t428*t6112 + t1477*t6152 + t1102*t6172 - 0.1305*t13*t6172 + t129*t1820*t6172 + t2105*t6199 + t2232*t6221 + t2436*t6271 + t2630*t6315 + t2874*t6358 + t3153*t6391 + t3341*t6407 + t3408*t6463 + 0.088451*(t3320*t6407 + t3245*t6463) - 1.062256*(t3245*t6407 - 1.*t3320*t6463) + t3755*t950;
  p_output1(16)=t1013*t428 + t1477*t6577 + t1102*t6594 - 0.1305*t13*t6594 + t129*t1820*t6594 + t2105*t6634 + t2232*t6646 + t2436*t6661 + t2630*t6693 + t2874*t6710 + t3153*t6737 + t3341*t6760 + t3408*t6794 + 0.088451*(t3320*t6760 + t3245*t6794) - 1.062256*(t3245*t6760 - 1.*t3320*t6794) + t6559*t950;
  p_output1(17)=-1.*t428*t519*t6 + t6902 + t6933 + t6937 + t6951 + t6986 + t6998 + t7020 + t7037 + t7068 + t7075 + t7086 + t7116 + t7166 + t7188 + t448*t6*t950;
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
  p_output1(39)=-0.135*t335*t3865 + t1102*t4009 - 0.1305*t13*t4009 + t129*t1820*t4009 + t1477*t7219 + t2105*t7261 + t2232*t7270 + t2436*t7285 + t2630*t7301 + t2874*t7373 + t3153*t7402 + t3341*t7425 + t3408*t7451 + 0.088451*(t3320*t7425 + t3245*t7451) - 1.062256*(t3245*t7425 - 1.*t3320*t7451) + 0.135*t3755*t756;
  p_output1(40)=-0.135*t335*t7499 + t1477*t7509 + t1102*t7514 - 0.1305*t13*t7514 + t129*t1820*t7514 + t2105*t7547 + 0.135*t6559*t756 + t2232*t7566 + t2436*t7597 + t2630*t7614 + t2874*t7632 + t3153*t7654 + t3341*t7659 + t3408*t7666 + 0.088451*(t3320*t7659 + t3245*t7666) - 1.062256*(t3245*t7659 - 1.*t3320*t7666);
  p_output1(41)=-0.135*t335*t519*t6 + t6902 + t6933 + t6937 + t6951 + t6986 + t6998 + t7020 + t7037 + t7068 + t7075 + t7086 + t7116 + t7166 + t7188 + 0.135*t448*t6*t756;
  p_output1(42)=t1820*t4039 + t1308*t2105*t4039 - 1.*t1451*t2232*t4039 - 0.1305*(-1.*t129*t3915 - 1.*t13*t512*t6) + t512*t6*t7720 + t3915*t7743 + t2436*t7803 + t2630*t7847 + t2874*t7867 + t3153*t7895 + t3341*t7913 + t3408*t7933 + 0.088451*(t3320*t7913 + t3245*t7933) - 1.062256*(t3245*t7913 - 1.*t3320*t7933);
  p_output1(43)=t311*t6*t7720 + t7743*t7973 - 0.1305*(t1832 - 1.*t129*t7973) + t1820*t7987 + t1308*t2105*t7987 - 1.*t1451*t2232*t7987 + t2436*t8040 + t2630*t8051 + t2874*t8073 + t3153*t8103 + t3341*t8115 + t3408*t8134 + 0.088451*(t3320*t8115 + t3245*t8134) - 1.062256*(t3245*t8115 - 1.*t3320*t8134);
  p_output1(44)=-1.*t499*t7720 + t7743*t8220 - 0.1305*(t13*t499 - 1.*t129*t8220) + t1820*t8243 + t1308*t2105*t8243 - 1.*t1451*t2232*t8243 + t2436*t8307 + t2630*t8326 + t2874*t8341 + t3153*t8360 + t3341*t8368 + t3408*t8387 + 0.088451*(t3320*t8368 + t3245*t8387) - 1.062256*(t3245*t8368 - 1.*t3320*t8387);
  p_output1(45)=t2105*t4416 + t4009*t8435 + t4233*t8444 + t2232*t8461 + t2630*t8498 + t2436*t8521 + t3153*t8528 + t2874*t8544 + t3408*t8551 + t3341*t8563 - 1.062256*(-1.*t3320*t8551 + t3245*t8563) + 0.088451*(t3245*t8551 + t3320*t8563);
  p_output1(46)=t7514*t8435 + t8444*t8652 + t2232*t8681 + t2105*t8696 + t2630*t8713 + t2436*t8733 + t3153*t8747 + t2874*t8774 + t3408*t8801 + t3341*t8836 - 1.062256*(-1.*t3320*t8801 + t3245*t8836) + 0.088451*(t3245*t8801 + t3320*t8836);
  p_output1(47)=t6926*t8435 + t8444*t8915 + t2232*t8952 + t2105*t8961 + t2630*t8982 + t2436*t9005 + t3153*t9027 + t2874*t9038 + t3408*t9050 + t3341*t9065 - 1.062256*(-1.*t3320*t9050 + t3245*t9065) + 0.088451*(t3245*t9050 + t3320*t9065);
  p_output1(48)=t2630*t4495 + t4362*t9129 + t4416*t9133 + t2436*t9160 + t3153*t9171 + t2874*t9181 + t3408*t9196 + t3341*t9206 - 1.062256*(-1.*t3320*t9196 + t3245*t9206) + 0.088451*(t3245*t9196 + t3320*t9206);
  p_output1(49)=t8696*t9133 + t9129*t9249 + t2630*t9258 + t2436*t9290 + t3153*t9306 + t2874*t9333 + t3408*t9344 + t3341*t9352 - 1.062256*(-1.*t3320*t9344 + t3245*t9352) + 0.088451*(t3245*t9344 + t3320*t9352);
  p_output1(50)=t8961*t9133 + t9129*t9424 + t2630*t9442 + t2436*t9458 + t3153*t9477 + t2874*t9491 + t3408*t9515 + t3341*t9523 - 1.062256*(-1.*t3320*t9515 + t3245*t9523) + 0.088451*(t3245*t9515 + t3320*t9523);
  p_output1(51)=t2874*t4653 + t4495*t9576 + t4556*t9601 + t3153*t9612 + t3408*t9624 + t3341*t9636 - 1.062256*(-1.*t3320*t9624 + t3245*t9636) + 0.088451*(t3245*t9624 + t3320*t9636);
  p_output1(52)=t9258*t9576 + t9601*t9693 + t3153*t9699 + t2874*t9710 + t3408*t9738 + t3341*t9767 - 1.062256*(-1.*t3320*t9738 + t3245*t9767) + 0.088451*(t3245*t9738 + t3320*t9767);
  p_output1(53)=t9442*t9576 + t9601*t9837 + t3153*t9846 + t2874*t9861 + t3408*t9893 + t3341*t9910 - 1.062256*(-1.*t3320*t9893 + t3245*t9910) + 0.088451*(t3245*t9893 + t3320*t9910);
  p_output1(54)=t3408*t4673 + t4593*t9949 + t4653*t9955 + t3341*t9983 + 0.088451*(t4784 + t3320*t9983) - 1.062256*(t3245*t9983 + t9991);
  p_output1(55)=-1.062256*(t10085 + t10078*t3245) + 0.088451*(t10096 + t10078*t3320) + t10078*t3341 + t10065*t3408 + t10048*t9949 + t9710*t9955;
  p_output1(56)=-1.062256*(t10148 + t10143*t3245) + 0.088451*(t10160 + t10143*t3320) + t10143*t3341 + t10131*t3408 + t10114*t9949 + t9861*t9955;
  p_output1(57)=t10169*t4673 + t10180*t4701 + 0.088451*t4809 - 1.062256*(-1.*t3245*t4701 + t9991);
  p_output1(58)=t10065*t10169 + t10180*t10222 - 1.062256*(t10085 - 1.*t10222*t3245) + 0.088451*(t10096 - 1.*t10222*t3320);
  p_output1(59)=t10131*t10169 + t10180*t10271 - 1.062256*(t10148 - 1.*t10271*t3245) + 0.088451*(t10160 - 1.*t10271*t3320);
}


       
Eigen::Matrix<double,3,20> Jp_RightToeFront(const Eigen::Matrix<double,20,1> &var1)
//void Jp_RightToeFront(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,20>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



