/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:10:18 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_LeftToeFront.h"

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
  double t365;
  double t514;
  double t701;
  double t336;
  double t879;
  double t81;
  double t468;
  double t983;
  double t988;
  double t1056;
  double t1091;
  double t1116;
  double t1140;
  double t1277;
  double t1330;
  double t1363;
  double t1462;
  double t1229;
  double t1237;
  double t1267;
  double t1522;
  double t1837;
  double t1854;
  double t1908;
  double t1923;
  double t1719;
  double t1745;
  double t1796;
  double t2010;
  double t2051;
  double t2071;
  double t2237;
  double t2250;
  double t2257;
  double t2296;
  double t2324;
  double t2333;
  double t2334;
  double t2452;
  double t2519;
  double t2568;
  double t2591;
  double t2616;
  double t2635;
  double t2699;
  double t2737;
  double t2754;
  double t2783;
  double t2903;
  double t2910;
  double t2951;
  double t2996;
  double t3010;
  double t3015;
  double t3085;
  double t3301;
  double t3319;
  double t3326;
  double t3455;
  double t3508;
  double t3513;
  double t3572;
  double t3585;
  double t3613;
  double t3664;
  double t3715;
  double t3734;
  double t3772;
  double t3868;
  double t3965;
  double t4004;
  double t158;
  double t163;
  double t189;
  double t208;
  double t1144;
  double t1160;
  double t4197;
  double t4200;
  double t4230;
  double t4277;
  double t4280;
  double t4301;
  double t1412;
  double t1506;
  double t1511;
  double t1524;
  double t1551;
  double t1561;
  double t4318;
  double t4346;
  double t4376;
  double t1917;
  double t1941;
  double t1966;
  double t2163;
  double t2179;
  double t2208;
  double t2295;
  double t2297;
  double t2316;
  double t4612;
  double t4651;
  double t4661;
  double t4667;
  double t4671;
  double t4687;
  double t2357;
  double t2390;
  double t2439;
  double t2644;
  double t2701;
  double t2731;
  double t4691;
  double t4739;
  double t4749;
  double t4782;
  double t4806;
  double t4820;
  double t2880;
  double t2899;
  double t2901;
  double t3036;
  double t3120;
  double t3167;
  double t4850;
  double t4868;
  double t4884;
  double t4904;
  double t4931;
  double t4945;
  double t3371;
  double t3388;
  double t3392;
  double t3619;
  double t3676;
  double t3702;
  double t4964;
  double t4967;
  double t4982;
  double t4997;
  double t5007;
  double t5008;
  double t3828;
  double t3850;
  double t3860;
  double t5021;
  double t5029;
  double t5031;
  double t5059;
  double t5069;
  double t5076;
  double t5264;
  double t5271;
  double t5282;
  double t5367;
  double t5377;
  double t5383;
  double t5398;
  double t5403;
  double t5407;
  double t5421;
  double t5427;
  double t5431;
  double t5449;
  double t5461;
  double t5469;
  double t5481;
  double t5494;
  double t5503;
  double t5514;
  double t5518;
  double t5531;
  double t5542;
  double t5547;
  double t5548;
  double t5570;
  double t5588;
  double t5591;
  double t5614;
  double t5622;
  double t5625;
  double t5639;
  double t5640;
  double t5648;
  double t5813;
  double t5815;
  double t5824;
  double t5888;
  double t5891;
  double t5900;
  double t5917;
  double t5931;
  double t5936;
  double t5947;
  double t5953;
  double t5954;
  double t5961;
  double t5968;
  double t5970;
  double t5977;
  double t5994;
  double t5999;
  double t6002;
  double t6023;
  double t6029;
  double t6068;
  double t6084;
  double t6085;
  double t6094;
  double t6101;
  double t6102;
  double t6104;
  double t6106;
  double t6107;
  double t6121;
  double t6125;
  double t6129;
  double t6177;
  double t6179;
  double t6182;
  double t6204;
  double t6207;
  double t6209;
  double t6211;
  double t6212;
  double t6213;
  double t6220;
  double t6229;
  double t6233;
  double t6241;
  double t6246;
  double t6248;
  double t6255;
  double t6257;
  double t6259;
  double t6265;
  double t6269;
  double t6281;
  double t6293;
  double t6301;
  double t6305;
  double t6326;
  double t6333;
  double t6347;
  double t6352;
  double t6357;
  double t6358;
  double t6368;
  double t6385;
  double t6387;
  double t6527;
  double t6530;
  double t6536;
  double t6543;
  double t6549;
  double t6570;
  double t6578;
  double t6584;
  double t6596;
  double t6598;
  double t6600;
  double t6641;
  double t6652;
  double t6655;
  double t6672;
  double t6676;
  double t6678;
  double t6699;
  double t6718;
  double t6724;
  double t6731;
  double t6732;
  double t6735;
  double t6742;
  double t6755;
  double t6760;
  double t6768;
  double t6774;
  double t6781;
  double t6795;
  double t6796;
  double t6803;
  double t6838;
  double t6843;
  double t6848;
  double t6860;
  double t6867;
  double t6868;
  double t6882;
  double t6886;
  double t6892;
  double t6895;
  double t6906;
  double t6908;
  double t6911;
  double t6912;
  double t6920;
  double t6921;
  double t6927;
  double t6939;
  double t6941;
  double t6945;
  double t6950;
  double t6951;
  double t6956;
  double t6959;
  double t6965;
  double t6968;
  double t6975;
  double t6981;
  double t6984;
  double t6999;
  double t7003;
  double t7008;
  double t7079;
  double t7083;
  double t7093;
  double t7115;
  double t7120;
  double t7130;
  double t7143;
  double t7145;
  double t7151;
  double t7161;
  double t7171;
  double t7175;
  double t7181;
  double t7195;
  double t7197;
  double t7206;
  double t7207;
  double t7213;
  double t7227;
  double t7230;
  double t7233;
  double t7255;
  double t7265;
  double t7269;
  double t7276;
  double t7291;
  double t7293;
  double t7301;
  double t7307;
  double t7311;
  double t7407;
  double t7418;
  double t7429;
  double t7431;
  double t7433;
  double t7442;
  double t7443;
  double t7457;
  double t7464;
  double t7472;
  double t7476;
  double t7482;
  double t7507;
  double t7533;
  double t7548;
  double t7553;
  double t7568;
  double t7588;
  double t7592;
  double t7605;
  double t7623;
  double t7628;
  double t7634;
  double t7660;
  double t7664;
  double t7681;
  double t7778;
  double t7796;
  double t7798;
  double t7800;
  double t7801;
  double t7833;
  double t7837;
  double t7845;
  double t7847;
  double t7853;
  double t7862;
  double t7870;
  double t7871;
  double t7875;
  double t7881;
  double t7886;
  double t7891;
  double t7901;
  double t7903;
  double t7910;
  double t7915;
  double t7920;
  double t7932;
  double t7937;
  double t7948;
  double t7954;
  double t7958;
  double t7959;
  double t7976;
  double t7977;
  double t7980;
  double t7097;
  double t7102;
  double t7114;
  double t7141;
  double t7155;
  double t7180;
  double t7200;
  double t7220;
  double t7252;
  double t7274;
  double t7299;
  double t7316;
  double t7317;
  double t7318;
  double t7324;
  double t7331;
  double t7332;
  double t7338;
  double t7341;
  double t7342;
  double t4453;
  double t4524;
  double t4569;
  double t8118;
  double t8119;
  double t8120;
  double t8125;
  double t8130;
  double t8137;
  double t8144;
  double t8152;
  double t8155;
  double t8168;
  double t8177;
  double t8186;
  double t8194;
  double t8207;
  double t8233;
  double t8251;
  double t8256;
  double t8271;
  double t8032;
  double t8041;
  double t8047;
  double t8059;
  double t8060;
  double t8363;
  double t8378;
  double t8384;
  double t8401;
  double t8402;
  double t8404;
  double t8466;
  double t8476;
  double t8478;
  double t8485;
  double t8486;
  double t8488;
  double t8510;
  double t8513;
  double t8531;
  double t8540;
  double t8549;
  double t8573;
  double t8592;
  double t8596;
  double t8600;
  double t8611;
  double t8612;
  double t8619;
  double t8688;
  double t8708;
  double t8709;
  double t8716;
  double t8718;
  double t8734;
  double t8783;
  double t8799;
  double t8801;
  double t8811;
  double t8818;
  double t8825;
  double t8828;
  double t8842;
  double t8844;
  double t8852;
  double t8860;
  double t8864;
  double t8875;
  double t8890;
  double t8898;
  double t8917;
  double t8919;
  double t8931;
  double t9046;
  double t9053;
  double t9078;
  double t9089;
  double t9091;
  double t9103;
  double t9104;
  double t9108;
  double t9118;
  double t9121;
  double t9130;
  double t9140;
  double t9141;
  double t9142;
  double t9150;
  double t9157;
  double t9164;
  double t9178;
  double t9184;
  double t9191;
  double t8980;
  double t8981;
  double t8992;
  double t9021;
  double t9032;
  double t9255;
  double t9260;
  double t9263;
  double t9268;
  double t9272;
  double t9275;
  double t9278;
  double t9281;
  double t9283;
  double t9290;
  double t9306;
  double t9315;
  double t9322;
  double t9331;
  double t9332;
  double t9350;
  double t9352;
  double t9359;
  double t9369;
  double t9370;
  double t9376;
  double t9402;
  double t9404;
  double t9415;
  double t9430;
  double t9443;
  double t9460;
  double t9555;
  double t9557;
  double t9558;
  double t9566;
  double t9573;
  double t9586;
  double t9594;
  double t9596;
  double t9611;
  double t9630;
  double t9639;
  double t9642;
  double t9658;
  double t9660;
  double t9662;
  double t9669;
  double t9683;
  double t9687;
  double t9698;
  double t9718;
  double t9721;
  double t9738;
  double t9752;
  double t9765;
  double t9777;
  double t9778;
  double t9779;
  double t9895;
  double t9896;
  double t9908;
  double t9910;
  double t9920;
  double t9926;
  double t9927;
  double t9941;
  double t9942;
  double t9957;
  double t9980;
  double t9981;
  double t9982;
  double t9858;
  double t9861;
  double t9862;
  double t9872;
  double t9877;
  double t10082;
  double t10090;
  double t10092;
  double t10100;
  double t10123;
  double t10130;
  double t10144;
  double t10149;
  double t10157;
  double t10166;
  double t10171;
  double t10182;
  double t10185;
  double t10208;
  double t10219;
  double t10221;
  double t10228;
  double t10242;
  double t10245;
  double t10330;
  double t10331;
  double t10336;
  double t10346;
  double t10352;
  double t10360;
  double t10364;
  double t10372;
  double t10379;
  double t10390;
  double t10407;
  double t10417;
  double t10421;
  double t10435;
  double t10444;
  double t10453;
  double t10467;
  double t10471;
  double t10476;
  double t10555;
  double t10569;
  double t10597;
  double t10610;
  double t10624;
  double t10626;
  double t10628;
  double t10526;
  double t10527;
  double t10533;
  double t10541;
  double t10543;
  double t10695;
  double t10696;
  double t10704;
  double t10720;
  double t10726;
  double t10742;
  double t10745;
  double t10749;
  double t10753;
  double t10757;
  double t10773;
  double t10794;
  double t10796;
  double t10843;
  double t10849;
  double t10854;
  double t10865;
  double t10878;
  double t10903;
  double t10908;
  double t10917;
  double t10918;
  double t10941;
  double t10951;
  double t10954;
  double t10956;
  double t11028;
  double t11029;
  double t5157;
  double t10992;
  double t11003;
  double t11004;
  double t11012;
  double t11016;
  double t11061;
  double t11062;
  double t11064;
  double t11071;
  double t11072;
  double t11082;
  double t11086;
  double t11135;
  double t11141;
  double t11142;
  double t11148;
  double t11150;
  double t11152;
  double t11154;
  double t11035;
  double t5160;
  double t5209;
  double t11207;
  double t11210;
  double t11214;
  double t11216;
  double t11220;
  double t11092;
  double t11236;
  double t11241;
  double t11244;
  double t11107;
  double t11158;
  double t11278;
  double t11282;
  double t11283;
  double t11182;
  t365 = Cos(var1[5]);
  t514 = Sin(var1[3]);
  t701 = Sin(var1[4]);
  t336 = Cos(var1[3]);
  t879 = Sin(var1[5]);
  t81 = Cos(var1[6]);
  t468 = -1.*t336*t365;
  t983 = -1.*t514*t701*t879;
  t988 = t468 + t983;
  t1056 = -1.*t365*t514*t701;
  t1091 = t336*t879;
  t1116 = t1056 + t1091;
  t1140 = Sin(var1[6]);
  t1277 = Cos(var1[7]);
  t1330 = -1.*t1277;
  t1363 = 1. + t1330;
  t1462 = Sin(var1[7]);
  t1229 = t81*t988;
  t1237 = t1116*t1140;
  t1267 = t1229 + t1237;
  t1522 = Cos(var1[4]);
  t1837 = Cos(var1[8]);
  t1854 = -1.*t1837;
  t1908 = 1. + t1854;
  t1923 = Sin(var1[8]);
  t1719 = -1.*t1522*t1277*t514;
  t1745 = t1267*t1462;
  t1796 = t1719 + t1745;
  t2010 = t81*t1116;
  t2051 = -1.*t988*t1140;
  t2071 = t2010 + t2051;
  t2237 = Cos(var1[9]);
  t2250 = -1.*t2237;
  t2257 = 1. + t2250;
  t2296 = Sin(var1[9]);
  t2324 = t1837*t1796;
  t2333 = t2071*t1923;
  t2334 = t2324 + t2333;
  t2452 = t1837*t2071;
  t2519 = -1.*t1796*t1923;
  t2568 = t2452 + t2519;
  t2591 = Cos(var1[10]);
  t2616 = -1.*t2591;
  t2635 = 1. + t2616;
  t2699 = Sin(var1[10]);
  t2737 = -1.*t2296*t2334;
  t2754 = t2237*t2568;
  t2783 = t2737 + t2754;
  t2903 = t2237*t2334;
  t2910 = t2296*t2568;
  t2951 = t2903 + t2910;
  t2996 = Cos(var1[11]);
  t3010 = -1.*t2996;
  t3015 = 1. + t3010;
  t3085 = Sin(var1[11]);
  t3301 = t2699*t2783;
  t3319 = t2591*t2951;
  t3326 = t3301 + t3319;
  t3455 = t2591*t2783;
  t3508 = -1.*t2699*t2951;
  t3513 = t3455 + t3508;
  t3572 = Cos(var1[12]);
  t3585 = -1.*t3572;
  t3613 = 1. + t3585;
  t3664 = Sin(var1[12]);
  t3715 = -1.*t3085*t3326;
  t3734 = t2996*t3513;
  t3772 = t3715 + t3734;
  t3868 = t2996*t3326;
  t3965 = t3085*t3513;
  t4004 = t3868 + t3965;
  t158 = -1.*t81;
  t163 = 1. + t158;
  t189 = 0.135*t163;
  t208 = 0. + t189;
  t1144 = -0.135*t1140;
  t1160 = 0. + t1144;
  t4197 = -1.*t365*t514;
  t4200 = t336*t701*t879;
  t4230 = t4197 + t4200;
  t4277 = t336*t365*t701;
  t4280 = t514*t879;
  t4301 = t4277 + t4280;
  t1412 = 0.135*t1363;
  t1506 = 0.049*t1462;
  t1511 = 0. + t1412 + t1506;
  t1524 = -0.049*t1363;
  t1551 = 0.135*t1462;
  t1561 = 0. + t1524 + t1551;
  t4318 = t81*t4230;
  t4346 = t4301*t1140;
  t4376 = t4318 + t4346;
  t1917 = -0.049*t1908;
  t1941 = -0.09*t1923;
  t1966 = 0. + t1917 + t1941;
  t2163 = -0.09*t1908;
  t2179 = 0.049*t1923;
  t2208 = 0. + t2163 + t2179;
  t2295 = -0.049*t2257;
  t2297 = -0.21*t2296;
  t2316 = 0. + t2295 + t2297;
  t4612 = t336*t1522*t1277;
  t4651 = t4376*t1462;
  t4661 = t4612 + t4651;
  t4667 = t81*t4301;
  t4671 = -1.*t4230*t1140;
  t4687 = t4667 + t4671;
  t2357 = -0.21*t2257;
  t2390 = 0.049*t2296;
  t2439 = 0. + t2357 + t2390;
  t2644 = -0.2707*t2635;
  t2701 = 0.0016*t2699;
  t2731 = 0. + t2644 + t2701;
  t4691 = t1837*t4661;
  t4739 = t4687*t1923;
  t4749 = t4691 + t4739;
  t4782 = t1837*t4687;
  t4806 = -1.*t4661*t1923;
  t4820 = t4782 + t4806;
  t2880 = -0.0016*t2635;
  t2899 = -0.2707*t2699;
  t2901 = 0. + t2880 + t2899;
  t3036 = 0.0184*t3015;
  t3120 = -0.7055*t3085;
  t3167 = 0. + t3036 + t3120;
  t4850 = -1.*t2296*t4749;
  t4868 = t2237*t4820;
  t4884 = t4850 + t4868;
  t4904 = t2237*t4749;
  t4931 = t2296*t4820;
  t4945 = t4904 + t4931;
  t3371 = -0.7055*t3015;
  t3388 = -0.0184*t3085;
  t3392 = 0. + t3371 + t3388;
  t3619 = -1.1135*t3613;
  t3676 = 0.0216*t3664;
  t3702 = 0. + t3619 + t3676;
  t4964 = t2699*t4884;
  t4967 = t2591*t4945;
  t4982 = t4964 + t4967;
  t4997 = t2591*t4884;
  t5007 = -1.*t2699*t4945;
  t5008 = t4997 + t5007;
  t3828 = -0.0216*t3613;
  t3850 = -1.1135*t3664;
  t3860 = 0. + t3828 + t3850;
  t5021 = -1.*t3085*t4982;
  t5029 = t2996*t5008;
  t5031 = t5021 + t5029;
  t5059 = t2996*t4982;
  t5069 = t3085*t5008;
  t5076 = t5059 + t5069;
  t5264 = t336*t1522*t81*t879;
  t5271 = t336*t1522*t365*t1140;
  t5282 = t5264 + t5271;
  t5367 = -1.*t336*t1277*t701;
  t5377 = t5282*t1462;
  t5383 = t5367 + t5377;
  t5398 = t336*t1522*t365*t81;
  t5403 = -1.*t336*t1522*t879*t1140;
  t5407 = t5398 + t5403;
  t5421 = t1837*t5383;
  t5427 = t5407*t1923;
  t5431 = t5421 + t5427;
  t5449 = t1837*t5407;
  t5461 = -1.*t5383*t1923;
  t5469 = t5449 + t5461;
  t5481 = -1.*t2296*t5431;
  t5494 = t2237*t5469;
  t5503 = t5481 + t5494;
  t5514 = t2237*t5431;
  t5518 = t2296*t5469;
  t5531 = t5514 + t5518;
  t5542 = t2699*t5503;
  t5547 = t2591*t5531;
  t5548 = t5542 + t5547;
  t5570 = t2591*t5503;
  t5588 = -1.*t2699*t5531;
  t5591 = t5570 + t5588;
  t5614 = -1.*t3085*t5548;
  t5622 = t2996*t5591;
  t5625 = t5614 + t5622;
  t5639 = t2996*t5548;
  t5640 = t3085*t5591;
  t5648 = t5639 + t5640;
  t5813 = t1522*t81*t514*t879;
  t5815 = t1522*t365*t514*t1140;
  t5824 = t5813 + t5815;
  t5888 = -1.*t1277*t514*t701;
  t5891 = t5824*t1462;
  t5900 = t5888 + t5891;
  t5917 = t1522*t365*t81*t514;
  t5931 = -1.*t1522*t514*t879*t1140;
  t5936 = t5917 + t5931;
  t5947 = t1837*t5900;
  t5953 = t5936*t1923;
  t5954 = t5947 + t5953;
  t5961 = t1837*t5936;
  t5968 = -1.*t5900*t1923;
  t5970 = t5961 + t5968;
  t5977 = -1.*t2296*t5954;
  t5994 = t2237*t5970;
  t5999 = t5977 + t5994;
  t6002 = t2237*t5954;
  t6023 = t2296*t5970;
  t6029 = t6002 + t6023;
  t6068 = t2699*t5999;
  t6084 = t2591*t6029;
  t6085 = t6068 + t6084;
  t6094 = t2591*t5999;
  t6101 = -1.*t2699*t6029;
  t6102 = t6094 + t6101;
  t6104 = -1.*t3085*t6085;
  t6106 = t2996*t6102;
  t6107 = t6104 + t6106;
  t6121 = t2996*t6085;
  t6125 = t3085*t6102;
  t6129 = t6121 + t6125;
  t6177 = -1.*t81*t701*t879;
  t6179 = -1.*t365*t701*t1140;
  t6182 = t6177 + t6179;
  t6204 = -1.*t1522*t1277;
  t6207 = t6182*t1462;
  t6209 = t6204 + t6207;
  t6211 = -1.*t365*t81*t701;
  t6212 = t701*t879*t1140;
  t6213 = t6211 + t6212;
  t6220 = t1837*t6209;
  t6229 = t6213*t1923;
  t6233 = t6220 + t6229;
  t6241 = t1837*t6213;
  t6246 = -1.*t6209*t1923;
  t6248 = t6241 + t6246;
  t6255 = -1.*t2296*t6233;
  t6257 = t2237*t6248;
  t6259 = t6255 + t6257;
  t6265 = t2237*t6233;
  t6269 = t2296*t6248;
  t6281 = t6265 + t6269;
  t6293 = t2699*t6259;
  t6301 = t2591*t6281;
  t6305 = t6293 + t6301;
  t6326 = t2591*t6259;
  t6333 = -1.*t2699*t6281;
  t6347 = t6326 + t6333;
  t6352 = -1.*t3085*t6305;
  t6357 = t2996*t6347;
  t6358 = t6352 + t6357;
  t6368 = t2996*t6305;
  t6385 = t3085*t6347;
  t6387 = t6368 + t6385;
  t6527 = t365*t514;
  t6530 = -1.*t336*t701*t879;
  t6536 = t6527 + t6530;
  t6543 = t6536*t1140;
  t6549 = t4667 + t6543;
  t6570 = t81*t6536;
  t6578 = -1.*t4301*t1140;
  t6584 = t6570 + t6578;
  t6596 = t1837*t6549*t1462;
  t6598 = t6584*t1923;
  t6600 = t6596 + t6598;
  t6641 = t1837*t6584;
  t6652 = -1.*t6549*t1462*t1923;
  t6655 = t6641 + t6652;
  t6672 = -1.*t2296*t6600;
  t6676 = t2237*t6655;
  t6678 = t6672 + t6676;
  t6699 = t2237*t6600;
  t6718 = t2296*t6655;
  t6724 = t6699 + t6718;
  t6731 = t2699*t6678;
  t6732 = t2591*t6724;
  t6735 = t6731 + t6732;
  t6742 = t2591*t6678;
  t6755 = -1.*t2699*t6724;
  t6760 = t6742 + t6755;
  t6768 = -1.*t3085*t6735;
  t6774 = t2996*t6760;
  t6781 = t6768 + t6774;
  t6795 = t2996*t6735;
  t6796 = t3085*t6760;
  t6803 = t6795 + t6796;
  t6838 = t365*t514*t701;
  t6843 = -1.*t336*t879;
  t6848 = t6838 + t6843;
  t6860 = t81*t6848;
  t6867 = t988*t1140;
  t6868 = t6860 + t6867;
  t6882 = -1.*t6848*t1140;
  t6886 = t1229 + t6882;
  t6892 = t1837*t6868*t1462;
  t6895 = t6886*t1923;
  t6906 = t6892 + t6895;
  t6908 = t1837*t6886;
  t6911 = -1.*t6868*t1462*t1923;
  t6912 = t6908 + t6911;
  t6920 = -1.*t2296*t6906;
  t6921 = t2237*t6912;
  t6927 = t6920 + t6921;
  t6939 = t2237*t6906;
  t6941 = t2296*t6912;
  t6945 = t6939 + t6941;
  t6950 = t2699*t6927;
  t6951 = t2591*t6945;
  t6956 = t6950 + t6951;
  t6959 = t2591*t6927;
  t6965 = -1.*t2699*t6945;
  t6968 = t6959 + t6965;
  t6975 = -1.*t3085*t6956;
  t6981 = t2996*t6968;
  t6984 = t6975 + t6981;
  t6999 = t2996*t6956;
  t7003 = t3085*t6968;
  t7008 = t6999 + t7003;
  t7079 = t1522*t365*t81;
  t7083 = -1.*t1522*t879*t1140;
  t7093 = t7079 + t7083;
  t7115 = -1.*t1522*t81*t879;
  t7120 = -1.*t1522*t365*t1140;
  t7130 = t7115 + t7120;
  t7143 = t1837*t7093*t1462;
  t7145 = t7130*t1923;
  t7151 = t7143 + t7145;
  t7161 = t1837*t7130;
  t7171 = -1.*t7093*t1462*t1923;
  t7175 = t7161 + t7171;
  t7181 = -1.*t2296*t7151;
  t7195 = t2237*t7175;
  t7197 = t7181 + t7195;
  t7206 = t2237*t7151;
  t7207 = t2296*t7175;
  t7213 = t7206 + t7207;
  t7227 = t2699*t7197;
  t7230 = t2591*t7213;
  t7233 = t7227 + t7230;
  t7255 = t2591*t7197;
  t7265 = -1.*t2699*t7213;
  t7269 = t7255 + t7265;
  t7276 = -1.*t3085*t7233;
  t7291 = t2996*t7269;
  t7293 = t7276 + t7291;
  t7301 = t2996*t7233;
  t7307 = t3085*t7269;
  t7311 = t7301 + t7307;
  t7407 = -1.*t81*t4230;
  t7418 = t7407 + t6578;
  t7429 = t1837*t4687*t1462;
  t7431 = t7418*t1923;
  t7433 = t7429 + t7431;
  t7442 = t1837*t7418;
  t7443 = -1.*t4687*t1462*t1923;
  t7457 = t7442 + t7443;
  t7464 = -1.*t2296*t7433;
  t7472 = t2237*t7457;
  t7476 = t7464 + t7472;
  t7482 = t2237*t7433;
  t7507 = t2296*t7457;
  t7533 = t7482 + t7507;
  t7548 = t2699*t7476;
  t7553 = t2591*t7533;
  t7568 = t7548 + t7553;
  t7588 = t2591*t7476;
  t7592 = -1.*t2699*t7533;
  t7605 = t7588 + t7592;
  t7623 = -1.*t3085*t7568;
  t7628 = t2996*t7605;
  t7634 = t7623 + t7628;
  t7660 = t2996*t7568;
  t7664 = t3085*t7605;
  t7681 = t7660 + t7664;
  t7778 = t336*t365;
  t7796 = t514*t701*t879;
  t7798 = t7778 + t7796;
  t7800 = -1.*t7798*t1140;
  t7801 = t6860 + t7800;
  t7833 = -1.*t81*t7798;
  t7837 = t7833 + t6882;
  t7845 = t1837*t7801*t1462;
  t7847 = t7837*t1923;
  t7853 = t7845 + t7847;
  t7862 = t1837*t7837;
  t7870 = -1.*t7801*t1462*t1923;
  t7871 = t7862 + t7870;
  t7875 = -1.*t2296*t7853;
  t7881 = t2237*t7871;
  t7886 = t7875 + t7881;
  t7891 = t2237*t7853;
  t7901 = t2296*t7871;
  t7903 = t7891 + t7901;
  t7910 = t2699*t7886;
  t7915 = t2591*t7903;
  t7920 = t7910 + t7915;
  t7932 = t2591*t7886;
  t7937 = -1.*t2699*t7903;
  t7948 = t7932 + t7937;
  t7954 = -1.*t3085*t7920;
  t7958 = t2996*t7948;
  t7959 = t7954 + t7958;
  t7976 = t2996*t7920;
  t7977 = t3085*t7948;
  t7980 = t7976 + t7977;
  t7097 = 0.1305*t1277*t7093;
  t7102 = t7093*t1511;
  t7114 = t7093*t1462*t1966;
  t7141 = t7130*t2208;
  t7155 = t2316*t7151;
  t7180 = t2439*t7175;
  t7200 = t2731*t7197;
  t7220 = t2901*t7213;
  t7252 = t3167*t7233;
  t7274 = t3392*t7269;
  t7299 = t3702*t7293;
  t7316 = t3860*t7311;
  t7317 = t3664*t7293;
  t7318 = t3572*t7311;
  t7324 = t7317 + t7318;
  t7331 = 0.088451*t7324;
  t7332 = t3572*t7293;
  t7338 = -1.*t3664*t7311;
  t7341 = t7332 + t7338;
  t7342 = -1.062256*t7341;
  t4453 = t1277*t4376;
  t4524 = -1.*t336*t1522*t1462;
  t4569 = t4453 + t4524;
  t8118 = -1.*t1837*t2296*t4569;
  t8119 = -1.*t2237*t4569*t1923;
  t8120 = t8118 + t8119;
  t8125 = t2237*t1837*t4569;
  t8130 = -1.*t2296*t4569*t1923;
  t8137 = t8125 + t8130;
  t8144 = t2699*t8120;
  t8152 = t2591*t8137;
  t8155 = t8144 + t8152;
  t8168 = t2591*t8120;
  t8177 = -1.*t2699*t8137;
  t8186 = t8168 + t8177;
  t8194 = -1.*t3085*t8155;
  t8207 = t2996*t8186;
  t8233 = t8194 + t8207;
  t8251 = t2996*t8155;
  t8256 = t3085*t8186;
  t8271 = t8251 + t8256;
  t8032 = 0.135*t1277;
  t8041 = -0.049*t1462;
  t8047 = t8032 + t8041;
  t8059 = 0.049*t1277;
  t8060 = t8059 + t1551;
  t8363 = t81*t7798;
  t8378 = t6848*t1140;
  t8384 = t8363 + t8378;
  t8401 = t1277*t8384;
  t8402 = -1.*t1522*t514*t1462;
  t8404 = t8401 + t8402;
  t8466 = -1.*t1837*t2296*t8404;
  t8476 = -1.*t2237*t8404*t1923;
  t8478 = t8466 + t8476;
  t8485 = t2237*t1837*t8404;
  t8486 = -1.*t2296*t8404*t1923;
  t8488 = t8485 + t8486;
  t8510 = t2699*t8478;
  t8513 = t2591*t8488;
  t8531 = t8510 + t8513;
  t8540 = t2591*t8478;
  t8549 = -1.*t2699*t8488;
  t8573 = t8540 + t8549;
  t8592 = -1.*t3085*t8531;
  t8596 = t2996*t8573;
  t8600 = t8592 + t8596;
  t8611 = t2996*t8531;
  t8612 = t3085*t8573;
  t8619 = t8611 + t8612;
  t8688 = t1522*t81*t879;
  t8708 = t1522*t365*t1140;
  t8709 = t8688 + t8708;
  t8716 = t1277*t8709;
  t8718 = t701*t1462;
  t8734 = t8716 + t8718;
  t8783 = -1.*t1837*t2296*t8734;
  t8799 = -1.*t2237*t8734*t1923;
  t8801 = t8783 + t8799;
  t8811 = t2237*t1837*t8734;
  t8818 = -1.*t2296*t8734*t1923;
  t8825 = t8811 + t8818;
  t8828 = t2699*t8801;
  t8842 = t2591*t8825;
  t8844 = t8828 + t8842;
  t8852 = t2591*t8801;
  t8860 = -1.*t2699*t8825;
  t8864 = t8852 + t8860;
  t8875 = -1.*t3085*t8844;
  t8890 = t2996*t8864;
  t8898 = t8875 + t8890;
  t8917 = t2996*t8844;
  t8919 = t3085*t8864;
  t8931 = t8917 + t8919;
  t9046 = -1.*t1837*t4661;
  t9053 = -1.*t4687*t1923;
  t9078 = t9046 + t9053;
  t9089 = t2296*t9078;
  t9091 = t9089 + t4868;
  t9103 = t2237*t9078;
  t9104 = -1.*t2296*t4820;
  t9108 = t9103 + t9104;
  t9118 = -1.*t2699*t9091;
  t9121 = t2591*t9108;
  t9130 = t9118 + t9121;
  t9140 = t2591*t9091;
  t9141 = t2699*t9108;
  t9142 = t9140 + t9141;
  t9150 = t3085*t9130;
  t9157 = t2996*t9142;
  t9164 = t9150 + t9157;
  t9178 = t2996*t9130;
  t9184 = -1.*t3085*t9142;
  t9191 = t9178 + t9184;
  t8980 = 0.049*t1837;
  t8981 = t8980 + t1941;
  t8992 = -0.09*t1837;
  t9021 = -0.049*t1923;
  t9032 = t8992 + t9021;
  t9255 = t1522*t1277*t514;
  t9260 = t8384*t1462;
  t9263 = t9255 + t9260;
  t9268 = -1.*t1837*t9263;
  t9272 = -1.*t7801*t1923;
  t9275 = t9268 + t9272;
  t9278 = t1837*t7801;
  t9281 = -1.*t9263*t1923;
  t9283 = t9278 + t9281;
  t9290 = t2296*t9275;
  t9306 = t2237*t9283;
  t9315 = t9290 + t9306;
  t9322 = t2237*t9275;
  t9331 = -1.*t2296*t9283;
  t9332 = t9322 + t9331;
  t9350 = -1.*t2699*t9315;
  t9352 = t2591*t9332;
  t9359 = t9350 + t9352;
  t9369 = t2591*t9315;
  t9370 = t2699*t9332;
  t9376 = t9369 + t9370;
  t9402 = t3085*t9359;
  t9404 = t2996*t9376;
  t9415 = t9402 + t9404;
  t9430 = t2996*t9359;
  t9443 = -1.*t3085*t9376;
  t9460 = t9430 + t9443;
  t9555 = -1.*t1277*t701;
  t9557 = t8709*t1462;
  t9558 = t9555 + t9557;
  t9566 = -1.*t1837*t9558;
  t9573 = -1.*t7093*t1923;
  t9586 = t9566 + t9573;
  t9594 = t1837*t7093;
  t9596 = -1.*t9558*t1923;
  t9611 = t9594 + t9596;
  t9630 = t2296*t9586;
  t9639 = t2237*t9611;
  t9642 = t9630 + t9639;
  t9658 = t2237*t9586;
  t9660 = -1.*t2296*t9611;
  t9662 = t9658 + t9660;
  t9669 = -1.*t2699*t9642;
  t9683 = t2591*t9662;
  t9687 = t9669 + t9683;
  t9698 = t2591*t9642;
  t9718 = t2699*t9662;
  t9721 = t9698 + t9718;
  t9738 = t3085*t9687;
  t9752 = t2996*t9721;
  t9765 = t9738 + t9752;
  t9777 = t2996*t9687;
  t9778 = -1.*t3085*t9721;
  t9779 = t9777 + t9778;
  t9895 = -1.*t2237*t4749;
  t9896 = t9895 + t9104;
  t9908 = -1.*t2699*t4884;
  t9910 = t2591*t9896;
  t9920 = t9908 + t9910;
  t9926 = t2699*t9896;
  t9927 = t4997 + t9926;
  t9941 = t3085*t9920;
  t9942 = t2996*t9927;
  t9957 = t9941 + t9942;
  t9980 = t2996*t9920;
  t9981 = -1.*t3085*t9927;
  t9982 = t9980 + t9981;
  t9858 = -0.21*t2237;
  t9861 = -0.049*t2296;
  t9862 = t9858 + t9861;
  t9872 = 0.049*t2237;
  t9877 = t9872 + t2297;
  t10082 = t1837*t9263;
  t10090 = t7801*t1923;
  t10092 = t10082 + t10090;
  t10100 = -1.*t2296*t10092;
  t10123 = t10100 + t9306;
  t10130 = -1.*t2237*t10092;
  t10144 = t10130 + t9331;
  t10149 = -1.*t2699*t10123;
  t10157 = t2591*t10144;
  t10166 = t10149 + t10157;
  t10171 = t2591*t10123;
  t10182 = t2699*t10144;
  t10185 = t10171 + t10182;
  t10208 = t3085*t10166;
  t10219 = t2996*t10185;
  t10221 = t10208 + t10219;
  t10228 = t2996*t10166;
  t10242 = -1.*t3085*t10185;
  t10245 = t10228 + t10242;
  t10330 = t1837*t9558;
  t10331 = t7093*t1923;
  t10336 = t10330 + t10331;
  t10346 = -1.*t2296*t10336;
  t10352 = t10346 + t9639;
  t10360 = -1.*t2237*t10336;
  t10364 = t10360 + t9660;
  t10372 = -1.*t2699*t10352;
  t10379 = t2591*t10364;
  t10390 = t10372 + t10379;
  t10407 = t2591*t10352;
  t10417 = t2699*t10364;
  t10421 = t10407 + t10417;
  t10435 = t3085*t10390;
  t10444 = t2996*t10421;
  t10453 = t10435 + t10444;
  t10467 = t2996*t10390;
  t10471 = -1.*t3085*t10421;
  t10476 = t10467 + t10471;
  t10555 = -1.*t2591*t4945;
  t10569 = t9908 + t10555;
  t10597 = t3085*t10569;
  t10610 = t10597 + t5029;
  t10624 = t2996*t10569;
  t10626 = -1.*t3085*t5008;
  t10628 = t10624 + t10626;
  t10526 = 0.0016*t2591;
  t10527 = t10526 + t2899;
  t10533 = -0.2707*t2591;
  t10541 = -0.0016*t2699;
  t10543 = t10533 + t10541;
  t10695 = t2237*t10092;
  t10696 = t2296*t9283;
  t10704 = t10695 + t10696;
  t10720 = -1.*t2591*t10704;
  t10726 = t10149 + t10720;
  t10742 = -1.*t2699*t10704;
  t10745 = t10171 + t10742;
  t10749 = t3085*t10726;
  t10753 = t2996*t10745;
  t10757 = t10749 + t10753;
  t10773 = t2996*t10726;
  t10794 = -1.*t3085*t10745;
  t10796 = t10773 + t10794;
  t10843 = t2237*t10336;
  t10849 = t2296*t9611;
  t10854 = t10843 + t10849;
  t10865 = -1.*t2591*t10854;
  t10878 = t10372 + t10865;
  t10903 = -1.*t2699*t10854;
  t10908 = t10407 + t10903;
  t10917 = t3085*t10878;
  t10918 = t2996*t10908;
  t10941 = t10917 + t10918;
  t10951 = t2996*t10878;
  t10954 = -1.*t3085*t10908;
  t10956 = t10951 + t10954;
  t11028 = -1.*t2996*t4982;
  t11029 = t11028 + t10626;
  t5157 = t3572*t5031;
  t10992 = -0.7055*t2996;
  t11003 = 0.0184*t3085;
  t11004 = t10992 + t11003;
  t11012 = -0.0184*t2996;
  t11016 = t11012 + t3120;
  t11061 = t2699*t10123;
  t11062 = t2591*t10704;
  t11064 = t11061 + t11062;
  t11071 = -1.*t3085*t11064;
  t11072 = t11071 + t10753;
  t11082 = -1.*t2996*t11064;
  t11086 = t11082 + t10794;
  t11135 = t2699*t10352;
  t11141 = t2591*t10854;
  t11142 = t11135 + t11141;
  t11148 = -1.*t3085*t11142;
  t11150 = t11148 + t10918;
  t11152 = -1.*t2996*t11142;
  t11154 = t11152 + t10954;
  t11035 = -1.*t3664*t5031;
  t5160 = -1.*t3664*t5076;
  t5209 = t5157 + t5160;
  t11207 = 0.0216*t3572;
  t11210 = t11207 + t3850;
  t11214 = -1.1135*t3572;
  t11216 = -0.0216*t3664;
  t11220 = t11214 + t11216;
  t11092 = -1.*t3664*t11072;
  t11236 = t2996*t11064;
  t11241 = t3085*t10745;
  t11244 = t11236 + t11241;
  t11107 = t3572*t11072;
  t11158 = -1.*t3664*t11150;
  t11278 = t2996*t11142;
  t11282 = t3085*t10908;
  t11283 = t11278 + t11282;
  t11182 = t3572*t11150;

  p_output1(0)=1.;
  p_output1(1)=0;
  p_output1(2)=0;
  p_output1(3)=0;
  p_output1(4)=1.;
  p_output1(5)=0;
  p_output1(6)=0;
  p_output1(7)=0;
  p_output1(8)=1.;
  p_output1(9)=t1116*t1160 + t1267*t1511 + t1796*t1966 + t2071*t2208 + t2316*t2334 + t2439*t2568 + t2731*t2783 + t2901*t2951 + t3167*t3326 + t3392*t3513 + t3702*t3772 + t3860*t4004 + 0.088451*(t3664*t3772 + t3572*t4004) - 1.062256*(t3572*t3772 - 1.*t3664*t4004) - 1.*t1522*t1561*t514 + 0.1305*(t1267*t1277 + t1462*t1522*t514) + t208*t988;
  p_output1(10)=t1522*t1561*t336 + t208*t4230 + t1160*t4301 + t1511*t4376 + 0.1305*t4569 + t1966*t4661 + t2208*t4687 + t2316*t4749 + t2439*t4820 + t2731*t4884 + t2901*t4945 + t3167*t4982 + t3392*t5008 + t3702*t5031 + t3860*t5076 + 0.088451*(t3664*t5031 + t3572*t5076) - 1.062256*t5209;
  p_output1(11)=0;
  p_output1(12)=t1160*t1522*t336*t365 + t1511*t5282 + t1966*t5383 + t2208*t5407 + t2316*t5431 + t2439*t5469 + t2731*t5503 + t2901*t5531 + t3167*t5548 + t3392*t5591 + t3702*t5625 + t3860*t5648 + 0.088451*(t3664*t5625 + t3572*t5648) - 1.062256*(t3572*t5625 - 1.*t3664*t5648) - 1.*t1561*t336*t701 + 0.1305*(t1277*t5282 + t1462*t336*t701) + t1522*t208*t336*t879;
  p_output1(13)=t1160*t1522*t365*t514 + t1511*t5824 + t1966*t5900 + t2208*t5936 + t2316*t5954 + t2439*t5970 + t2731*t5999 + t2901*t6029 + t3167*t6085 + t3392*t6102 + t3702*t6107 + t3860*t6129 + 0.088451*(t3664*t6107 + t3572*t6129) - 1.062256*(t3572*t6107 - 1.*t3664*t6129) - 1.*t1561*t514*t701 + 0.1305*(t1277*t5824 + t1462*t514*t701) + t1522*t208*t514*t879;
  p_output1(14)=-1.*t1522*t1561 + t1511*t6182 + 0.1305*(t1462*t1522 + t1277*t6182) + t1966*t6209 + t2208*t6213 + t2316*t6233 + t2439*t6248 + t2731*t6259 + t2901*t6281 + t3167*t6305 + t3392*t6347 + t3702*t6358 + t3860*t6387 + 0.088451*(t3664*t6358 + t3572*t6387) - 1.062256*(t3572*t6358 - 1.*t3664*t6387) - 1.*t1160*t365*t701 - 1.*t208*t701*t879;
  p_output1(15)=t208*t4301 + t1160*t6536 + 0.1305*t1277*t6549 + t1511*t6549 + t1462*t1966*t6549 + t2208*t6584 + t2316*t6600 + t2439*t6655 + t2731*t6678 + t2901*t6724 + t3167*t6735 + t3392*t6760 + t3702*t6781 + t3860*t6803 + 0.088451*(t3664*t6781 + t3572*t6803) - 1.062256*(t3572*t6781 - 1.*t3664*t6803);
  p_output1(16)=t208*t6848 + 0.1305*t1277*t6868 + t1511*t6868 + t1462*t1966*t6868 + t2208*t6886 + t2316*t6906 + t2439*t6912 + t2731*t6927 + t2901*t6945 + t3167*t6956 + t3392*t6968 + t3702*t6984 + t3860*t7008 + 0.088451*(t3664*t6984 + t3572*t7008) - 1.062256*(t3572*t6984 - 1.*t3664*t7008) + t1160*t988;
  p_output1(17)=t1522*t208*t365 + t7097 + t7102 + t7114 + t7141 + t7155 + t7180 + t7200 + t7220 + t7252 + t7274 + t7299 + t7316 + t7331 + t7342 - 1.*t1160*t1522*t879;
  p_output1(18)=0.135*t1140*t4230 + 0.1305*t1277*t4687 + t1511*t4687 + t1462*t1966*t4687 + t2208*t7418 + t2316*t7433 + t2439*t7457 + t2731*t7476 + t2901*t7533 + t3167*t7568 + t3392*t7605 + t3702*t7634 + t3860*t7681 + 0.088451*(t3664*t7634 + t3572*t7681) - 1.062256*(t3572*t7634 - 1.*t3664*t7681) - 0.135*t4301*t81;
  p_output1(19)=0.135*t1140*t7798 + 0.1305*t1277*t7801 + t1511*t7801 + t1462*t1966*t7801 + t2208*t7837 + t2316*t7853 + t2439*t7871 + t2731*t7886 + t2901*t7903 + t3167*t7920 + t3392*t7948 + t3702*t7959 + t3860*t7980 + 0.088451*(t3664*t7959 + t3572*t7980) - 1.062256*(t3572*t7959 - 1.*t3664*t7980) - 0.135*t6848*t81;
  p_output1(20)=t7097 + t7102 + t7114 + t7141 + t7155 + t7180 + t7200 + t7220 + t7252 + t7274 + t7299 + t7316 + t7331 + t7342 - 0.135*t1522*t365*t81 + 0.135*t1140*t1522*t879;
  p_output1(21)=0.1305*(-1.*t1277*t1522*t336 - 1.*t1462*t4376) + t1966*t4569 + t1837*t2316*t4569 - 1.*t1923*t2439*t4569 + t1522*t336*t8047 + t4376*t8060 + t2731*t8120 + t2901*t8137 + t3167*t8155 + t3392*t8186 + t3702*t8233 + t3860*t8271 + 0.088451*(t3664*t8233 + t3572*t8271) - 1.062256*(t3572*t8233 - 1.*t3664*t8271);
  p_output1(22)=t1522*t514*t8047 + t8060*t8384 + 0.1305*(t1719 - 1.*t1462*t8384) + t1966*t8404 + t1837*t2316*t8404 - 1.*t1923*t2439*t8404 + t2731*t8478 + t2901*t8488 + t3167*t8531 + t3392*t8573 + t3702*t8600 + t3860*t8619 + 0.088451*(t3664*t8600 + t3572*t8619) - 1.062256*(t3572*t8600 - 1.*t3664*t8619);
  p_output1(23)=-1.*t701*t8047 + t8060*t8709 + 0.1305*(t1277*t701 - 1.*t1462*t8709) + t1966*t8734 + t1837*t2316*t8734 - 1.*t1923*t2439*t8734 + t2731*t8801 + t2901*t8825 + t3167*t8844 + t3392*t8864 + t3702*t8898 + t3860*t8931 + 0.088451*(t3664*t8898 + t3572*t8931) - 1.062256*(t3572*t8898 - 1.*t3664*t8931);
  p_output1(24)=t2316*t4820 + t4687*t8981 + t4661*t9032 + t2439*t9078 + t2901*t9091 + t2731*t9108 + t3392*t9130 + t3167*t9142 + t3860*t9164 + t3702*t9191 - 1.062256*(-1.*t3664*t9164 + t3572*t9191) + 0.088451*(t3572*t9164 + t3664*t9191);
  p_output1(25)=t7801*t8981 + t9032*t9263 + t2439*t9275 + t2316*t9283 + t2901*t9315 + t2731*t9332 + t3392*t9359 + t3167*t9376 + t3860*t9415 + t3702*t9460 - 1.062256*(-1.*t3664*t9415 + t3572*t9460) + 0.088451*(t3572*t9415 + t3664*t9460);
  p_output1(26)=t7093*t8981 + t9032*t9558 + t2439*t9586 + t2316*t9611 + t2901*t9642 + t2731*t9662 + t3392*t9687 + t3167*t9721 + t3860*t9765 + t3702*t9779 - 1.062256*(-1.*t3664*t9765 + t3572*t9779) + 0.088451*(t3572*t9765 + t3664*t9779);
  p_output1(27)=t2901*t4884 + t4749*t9862 + t4820*t9877 + t2731*t9896 + t3392*t9920 + t3167*t9927 + t3860*t9957 + t3702*t9982 - 1.062256*(-1.*t3664*t9957 + t3572*t9982) + 0.088451*(t3572*t9957 + t3664*t9982);
  p_output1(28)=t10144*t2731 + t10123*t2901 + t10185*t3167 + t10166*t3392 - 1.062256*(t10245*t3572 - 1.*t10221*t3664) + 0.088451*(t10221*t3572 + t10245*t3664) + t10245*t3702 + t10221*t3860 + t10092*t9862 + t9283*t9877;
  p_output1(29)=t10364*t2731 + t10352*t2901 + t10421*t3167 + t10390*t3392 - 1.062256*(t10476*t3572 - 1.*t10453*t3664) + 0.088451*(t10453*t3572 + t10476*t3664) + t10476*t3702 + t10453*t3860 + t10336*t9862 + t9611*t9877;
  p_output1(30)=t10569*t3392 - 1.062256*(t10628*t3572 - 1.*t10610*t3664) + 0.088451*(t10610*t3572 + t10628*t3664) + t10628*t3702 + t10610*t3860 + t10527*t4884 + t10543*t4945 + t3167*t5008;
  p_output1(31)=t10123*t10527 + t10543*t10704 + t10745*t3167 + t10726*t3392 - 1.062256*(t10796*t3572 - 1.*t10757*t3664) + 0.088451*(t10757*t3572 + t10796*t3664) + t10796*t3702 + t10757*t3860;
  p_output1(32)=t10352*t10527 + t10543*t10854 + t10908*t3167 + t10878*t3392 - 1.062256*(t10956*t3572 - 1.*t10941*t3664) + 0.088451*(t10941*t3572 + t10956*t3664) + t10956*t3702 + t10941*t3860;
  p_output1(33)=-1.062256*(t11035 + t11029*t3572) + t11029*t3702 + t11004*t4982 + t11016*t5008 + t3860*t5031 + 0.088451*(t11029*t3664 + t5157);
  p_output1(34)=t10745*t11016 + t11004*t11064 - 1.062256*(t11092 + t11086*t3572) + 0.088451*(t11107 + t11086*t3664) + t11086*t3702 + t11072*t3860;
  p_output1(35)=t10908*t11016 + t11004*t11142 - 1.062256*(t11158 + t11154*t3572) + 0.088451*(t11182 + t11154*t3664) + t11154*t3702 + t11150*t3860;
  p_output1(36)=t11210*t5031 + t11220*t5076 - 1.062256*(t11035 - 1.*t3572*t5076) + 0.088451*t5209;
  p_output1(37)=t11072*t11210 + t11220*t11244 - 1.062256*(t11092 - 1.*t11244*t3572) + 0.088451*(t11107 - 1.*t11244*t3664);
  p_output1(38)=t11150*t11210 + t11220*t11283 - 1.062256*(t11158 - 1.*t11283*t3572) + 0.088451*(t11182 - 1.*t11283*t3664);
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


       
Eigen::Matrix<double,3,20> Jp_LeftToeFront(const Eigen::Matrix<double,20,1> &var1)
//void Jp_LeftToeFront(Eigen::Matrix<double,3,20> &p_output1, const Eigen::Matrix<double,20,1> &var1)
{
  /* Call Subroutines */
  Eigen::Matrix<double,3,20>  p_output1;
  
  output1(p_output1, var1);

  return p_output1;
}



