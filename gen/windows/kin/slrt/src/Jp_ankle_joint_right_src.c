/*
 * Automatically Generated from Mathematica.
 * Mon 29 Apr 2019 13:20:20 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_ankle_joint_right_src.h"

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
  double t595;
  double t934;
  double t900;
  double t910;
  double t964;
  double t111;
  double t122;
  double t351;
  double t453;
  double t705;
  double t930;
  double t1056;
  double t1077;
  double t1096;
  double t1444;
  double t1535;
  double t1538;
  double t89;
  double t1762;
  double t1810;
  double t1836;
  double t1845;
  double t1865;
  double t1881;
  double t2015;
  double t2053;
  double t2057;
  double t2083;
  double t2629;
  double t2657;
  double t2725;
  double t2743;
  double t2770;
  double t2775;
  double t2833;
  double t2886;
  double t2961;
  double t2968;
  double t3222;
  double t3226;
  double t3232;
  double t3237;
  double t3239;
  double t3240;
  double t3243;
  double t3256;
  double t3257;
  double t3262;
  double t3271;
  double t3272;
  double t3273;
  double t3275;
  double t3276;
  double t3281;
  double t3283;
  double t3289;
  double t3291;
  double t3292;
  double t3303;
  double t3304;
  double t3305;
  double t404;
  double t539;
  double t554;
  double t817;
  double t834;
  double t1097;
  double t1173;
  double t1408;
  double t1411;
  double t1686;
  double t1690;
  double t1723;
  double t3321;
  double t3328;
  double t3329;
  double t3332;
  double t3333;
  double t3334;
  double t1977;
  double t2020;
  double t2045;
  double t3337;
  double t3338;
  double t3340;
  double t2404;
  double t2524;
  double t2605;
  double t2830;
  double t2878;
  double t2880;
  double t3345;
  double t3346;
  double t3347;
  double t3377;
  double t3402;
  double t3461;
  double t3027;
  double t3138;
  double t3219;
  double t3241;
  double t3250;
  double t3255;
  double t3532;
  double t3538;
  double t3576;
  double t3697;
  double t3762;
  double t3861;
  double t3266;
  double t3267;
  double t3268;
  double t3282;
  double t3287;
  double t3288;
  double t3946;
  double t3960;
  double t3972;
  double t3998;
  double t4075;
  double t4105;
  double t3297;
  double t3300;
  double t3301;
  double t4120;
  double t4136;
  double t4154;
  double t4237;
  double t4280;
  double t4381;
  double t6054;
  double t6118;
  double t6330;
  double t6564;
  double t6628;
  double t6656;
  double t7100;
  double t7163;
  double t7424;
  double t7999;
  double t8171;
  double t8771;
  double t8784;
  double t8785;
  double t8800;
  double t8850;
  double t8853;
  double t8859;
  double t8887;
  double t8891;
  double t8900;
  double t8926;
  double t8931;
  double t8940;
  double t8944;
  double t8946;
  double t8948;
  double t9056;
  double t9057;
  double t9060;
  double t9065;
  double t9066;
  double t9070;
  double t9095;
  double t9101;
  double t9102;
  double t9112;
  double t9115;
  double t9127;
  double t9140;
  double t9142;
  double t9145;
  double t9158;
  double t9160;
  double t9163;
  double t9171;
  double t9174;
  double t9181;
  double t9185;
  double t9189;
  double t9191;
  double t9198;
  double t9200;
  double t9204;
  double t9226;
  double t9227;
  double t9229;
  double t9235;
  double t9236;
  double t9238;
  double t9247;
  double t9250;
  double t9253;
  double t9258;
  double t9260;
  double t9262;
  double t9264;
  double t9265;
  double t9267;
  double t9269;
  double t9271;
  double t9272;
  double t9276;
  double t9277;
  double t9278;
  double t9280;
  double t9282;
  double t9283;
  double t9285;
  double t9286;
  double t9287;
  double t9301;
  double t9303;
  double t9305;
  double t9313;
  double t9315;
  double t9307;
  double t9309;
  double t9310;
  double t9319;
  double t9321;
  double t9322;
  double t9325;
  double t9326;
  double t9329;
  double t9331;
  double t9332;
  double t9333;
  double t9335;
  double t9336;
  double t9337;
  double t9339;
  double t9340;
  double t9341;
  double t9345;
  double t9347;
  double t9348;
  double t9362;
  double t9364;
  double t9365;
  double t9373;
  double t9374;
  double t9375;
  double t9369;
  double t9370;
  double t9382;
  double t9383;
  double t9384;
  double t9386;
  double t9387;
  double t9388;
  double t9390;
  double t9391;
  double t9392;
  double t9395;
  double t9397;
  double t9398;
  double t9400;
  double t9402;
  double t9403;
  double t9405;
  double t9406;
  double t9408;
  double t9431;
  double t9432;
  double t9433;
  double t9425;
  double t9428;
  double t9429;
  double t9437;
  double t9438;
  double t9441;
  double t9444;
  double t9445;
  double t9446;
  double t9449;
  double t9450;
  double t9451;
  double t9453;
  double t9455;
  double t9456;
  double t9459;
  double t9461;
  double t9462;
  double t9464;
  double t9465;
  double t9467;
  double t9483;
  double t9484;
  double t9497;
  double t9498;
  double t9501;
  double t9506;
  double t9507;
  double t9509;
  double t9513;
  double t9514;
  double t9517;
  double t9522;
  double t9523;
  double t9525;
  double t9527;
  double t9529;
  double t9530;
  double t9533;
  double t9534;
  double t9535;
  double t9550;
  double t9551;
  double t9553;
  double t9561;
  double t9562;
  double t9555;
  double t9557;
  double t9566;
  double t9567;
  double t9568;
  double t9570;
  double t9571;
  double t9572;
  double t9575;
  double t9577;
  double t9578;
  double t9582;
  double t9583;
  double t9584;
  double t9587;
  double t9588;
  double t9590;
  double t9593;
  double t9594;
  double t9595;
  double t9430;
  double t9434;
  double t9435;
  double t9436;
  double t9442;
  double t9447;
  double t9452;
  double t9458;
  double t9463;
  double t9468;
  double t9469;
  double t9471;
  double t9472;
  double t9475;
  double t9476;
  double t9477;
  double t9478;
  double t9479;
  double t3352;
  double t3354;
  double t3355;
  double t9628;
  double t9629;
  double t9630;
  double t9632;
  double t9633;
  double t9636;
  double t9638;
  double t9641;
  double t9642;
  double t9645;
  double t9646;
  double t9649;
  double t9613;
  double t9614;
  double t9615;
  double t9617;
  double t9618;
  double t9661;
  double t9663;
  double t9665;
  double t9668;
  double t9669;
  double t9670;
  double t9681;
  double t9682;
  double t9684;
  double t9688;
  double t9689;
  double t9690;
  double t9692;
  double t9693;
  double t9694;
  double t9696;
  double t9697;
  double t9698;
  double t9712;
  double t9715;
  double t9716;
  double t9720;
  double t9721;
  double t9722;
  double t9733;
  double t9734;
  double t9735;
  double t9737;
  double t9738;
  double t9739;
  double t9741;
  double t9742;
  double t9743;
  double t9747;
  double t9748;
  double t9749;
  double t9772;
  double t9773;
  double t9774;
  double t9778;
  double t9781;
  double t9783;
  double t9786;
  double t9787;
  double t9790;
  double t9791;
  double t9793;
  double t9796;
  double t9798;
  double t9799;
  double t9765;
  double t9766;
  double t9768;
  double t9769;
  double t9770;
  double t9812;
  double t9814;
  double t9816;
  double t9820;
  double t9821;
  double t9824;
  double t9826;
  double t9828;
  double t9829;
  double t9832;
  double t9834;
  double t9836;
  double t9838;
  double t9840;
  double t9841;
  double t9843;
  double t9844;
  double t9845;
  double t9847;
  double t9848;
  double t9849;
  double t9864;
  double t9865;
  double t9867;
  double t9869;
  double t9870;
  double t9871;
  double t9873;
  double t9874;
  double t9875;
  double t9877;
  double t9878;
  double t9880;
  double t9884;
  double t9886;
  double t9887;
  double t9891;
  double t9892;
  double t9893;
  double t9896;
  double t9897;
  double t9898;
  double t9924;
  double t9925;
  double t9927;
  double t9928;
  double t9929;
  double t9931;
  double t9932;
  double t9912;
  double t9914;
  double t9915;
  double t9919;
  double t9920;
  double t9944;
  double t9945;
  double t9946;
  double t9950;
  double t9951;
  double t9953;
  double t9954;
  double t9958;
  double t9959;
  double t9962;
  double t9965;
  double t9966;
  double t9967;
  double t9983;
  double t9985;
  double t9986;
  double t9990;
  double t9991;
  double t9993;
  double t9994;
  double t9996;
  double t9997;
  double t9998;
  double t10000;
  double t10001;
  double t10002;
  double t10022;
  double t10023;
  double t4618;
  double t10014;
  double t10015;
  double t10017;
  double t10019;
  double t10020;
  double t10035;
  double t10036;
  double t10037;
  double t10039;
  double t10040;
  double t10042;
  double t10043;
  double t10055;
  double t10056;
  double t10057;
  double t10059;
  double t10060;
  double t10062;
  double t10063;
  double t4581;
  double t4628;
  double t10030;
  double t10074;
  double t10075;
  double t10076;
  double t10078;
  double t10079;
  double t10086;
  double t10087;
  double t10088;
  double t10046;
  double t10050;
  double t10098;
  double t10099;
  double t10100;
  double t10066;
  double t10070;
  t595 = Sin(var1[3]);
  t934 = Cos(var1[3]);
  t900 = Cos(var1[5]);
  t910 = Sin(var1[4]);
  t964 = Sin(var1[5]);
  t111 = Cos(var1[14]);
  t122 = -1.*t111;
  t351 = 1. + t122;
  t453 = Sin(var1[14]);
  t705 = Sin(var1[13]);
  t930 = -1.*t900*t595*t910;
  t1056 = t934*t964;
  t1077 = t930 + t1056;
  t1096 = Cos(var1[13]);
  t1444 = -1.*t934*t900;
  t1535 = -1.*t595*t910*t964;
  t1538 = t1444 + t1535;
  t89 = Cos(var1[4]);
  t1762 = t705*t1077;
  t1810 = t1096*t1538;
  t1836 = t1762 + t1810;
  t1845 = Cos(var1[15]);
  t1865 = -1.*t1845;
  t1881 = 1. + t1865;
  t2015 = Sin(var1[15]);
  t2053 = t1096*t1077;
  t2057 = -1.*t705*t1538;
  t2083 = t2053 + t2057;
  t2629 = -1.*t111*t89*t595;
  t2657 = t453*t1836;
  t2725 = t2629 + t2657;
  t2743 = Cos(var1[16]);
  t2770 = -1.*t2743;
  t2775 = 1. + t2770;
  t2833 = Sin(var1[16]);
  t2886 = t2015*t2083;
  t2961 = t1845*t2725;
  t2968 = t2886 + t2961;
  t3222 = t1845*t2083;
  t3226 = -1.*t2015*t2725;
  t3232 = t3222 + t3226;
  t3237 = Cos(var1[17]);
  t3239 = -1.*t3237;
  t3240 = 1. + t3239;
  t3243 = Sin(var1[17]);
  t3256 = -1.*t2833*t2968;
  t3257 = t2743*t3232;
  t3262 = t3256 + t3257;
  t3271 = t2743*t2968;
  t3272 = t2833*t3232;
  t3273 = t3271 + t3272;
  t3275 = Cos(var1[18]);
  t3276 = -1.*t3275;
  t3281 = 1. + t3276;
  t3283 = Sin(var1[18]);
  t3289 = t3243*t3262;
  t3291 = t3237*t3273;
  t3292 = t3289 + t3291;
  t3303 = t3237*t3262;
  t3304 = -1.*t3243*t3273;
  t3305 = t3303 + t3304;
  t404 = -0.049*t351;
  t539 = -0.135*t453;
  t554 = 0. + t404 + t539;
  t817 = 0.135*t705;
  t834 = 0. + t817;
  t1097 = -1.*t1096;
  t1173 = 1. + t1097;
  t1408 = -0.135*t1173;
  t1411 = 0. + t1408;
  t1686 = -0.135*t351;
  t1690 = 0.049*t453;
  t1723 = 0. + t1686 + t1690;
  t3321 = t934*t900*t910;
  t3328 = t595*t964;
  t3329 = t3321 + t3328;
  t3332 = -1.*t900*t595;
  t3333 = t934*t910*t964;
  t3334 = t3332 + t3333;
  t1977 = -0.09*t1881;
  t2020 = 0.049*t2015;
  t2045 = 0. + t1977 + t2020;
  t3337 = t705*t3329;
  t3338 = t1096*t3334;
  t3340 = t3337 + t3338;
  t2404 = -0.049*t1881;
  t2524 = -0.09*t2015;
  t2605 = 0. + t2404 + t2524;
  t2830 = -0.049*t2775;
  t2878 = -0.21*t2833;
  t2880 = 0. + t2830 + t2878;
  t3345 = t1096*t3329;
  t3346 = -1.*t705*t3334;
  t3347 = t3345 + t3346;
  t3377 = t111*t934*t89;
  t3402 = t453*t3340;
  t3461 = t3377 + t3402;
  t3027 = -0.21*t2775;
  t3138 = 0.049*t2833;
  t3219 = 0. + t3027 + t3138;
  t3241 = -0.2707*t3240;
  t3250 = 0.0016*t3243;
  t3255 = 0. + t3241 + t3250;
  t3532 = t2015*t3347;
  t3538 = t1845*t3461;
  t3576 = t3532 + t3538;
  t3697 = t1845*t3347;
  t3762 = -1.*t2015*t3461;
  t3861 = t3697 + t3762;
  t3266 = -0.0016*t3240;
  t3267 = -0.2707*t3243;
  t3268 = 0. + t3266 + t3267;
  t3282 = 0.0184*t3281;
  t3287 = -0.7055*t3283;
  t3288 = 0. + t3282 + t3287;
  t3946 = -1.*t2833*t3576;
  t3960 = t2743*t3861;
  t3972 = t3946 + t3960;
  t3998 = t2743*t3576;
  t4075 = t2833*t3861;
  t4105 = t3998 + t4075;
  t3297 = -0.7055*t3281;
  t3300 = -0.0184*t3283;
  t3301 = 0. + t3297 + t3300;
  t4120 = t3243*t3972;
  t4136 = t3237*t4105;
  t4154 = t4120 + t4136;
  t4237 = t3237*t3972;
  t4280 = -1.*t3243*t4105;
  t4381 = t4237 + t4280;
  t6054 = t934*t89*t900*t705;
  t6118 = t1096*t934*t89*t964;
  t6330 = t6054 + t6118;
  t6564 = t1096*t934*t89*t900;
  t6628 = -1.*t934*t89*t705*t964;
  t6656 = t6564 + t6628;
  t7100 = -1.*t111*t934*t910;
  t7163 = t453*t6330;
  t7424 = t7100 + t7163;
  t7999 = t2015*t6656;
  t8171 = t1845*t7424;
  t8771 = t7999 + t8171;
  t8784 = t1845*t6656;
  t8785 = -1.*t2015*t7424;
  t8800 = t8784 + t8785;
  t8850 = -1.*t2833*t8771;
  t8853 = t2743*t8800;
  t8859 = t8850 + t8853;
  t8887 = t2743*t8771;
  t8891 = t2833*t8800;
  t8900 = t8887 + t8891;
  t8926 = t3243*t8859;
  t8931 = t3237*t8900;
  t8940 = t8926 + t8931;
  t8944 = t3237*t8859;
  t8946 = -1.*t3243*t8900;
  t8948 = t8944 + t8946;
  t9056 = t89*t900*t705*t595;
  t9057 = t1096*t89*t595*t964;
  t9060 = t9056 + t9057;
  t9065 = t1096*t89*t900*t595;
  t9066 = -1.*t89*t705*t595*t964;
  t9070 = t9065 + t9066;
  t9095 = -1.*t111*t595*t910;
  t9101 = t453*t9060;
  t9102 = t9095 + t9101;
  t9112 = t2015*t9070;
  t9115 = t1845*t9102;
  t9127 = t9112 + t9115;
  t9140 = t1845*t9070;
  t9142 = -1.*t2015*t9102;
  t9145 = t9140 + t9142;
  t9158 = -1.*t2833*t9127;
  t9160 = t2743*t9145;
  t9163 = t9158 + t9160;
  t9171 = t2743*t9127;
  t9174 = t2833*t9145;
  t9181 = t9171 + t9174;
  t9185 = t3243*t9163;
  t9189 = t3237*t9181;
  t9191 = t9185 + t9189;
  t9198 = t3237*t9163;
  t9200 = -1.*t3243*t9181;
  t9204 = t9198 + t9200;
  t9226 = -1.*t900*t705*t910;
  t9227 = -1.*t1096*t910*t964;
  t9229 = t9226 + t9227;
  t9235 = -1.*t1096*t900*t910;
  t9236 = t705*t910*t964;
  t9238 = t9235 + t9236;
  t9247 = -1.*t111*t89;
  t9250 = t453*t9229;
  t9253 = t9247 + t9250;
  t9258 = t2015*t9238;
  t9260 = t1845*t9253;
  t9262 = t9258 + t9260;
  t9264 = t1845*t9238;
  t9265 = -1.*t2015*t9253;
  t9267 = t9264 + t9265;
  t9269 = -1.*t2833*t9262;
  t9271 = t2743*t9267;
  t9272 = t9269 + t9271;
  t9276 = t2743*t9262;
  t9277 = t2833*t9267;
  t9278 = t9276 + t9277;
  t9280 = t3243*t9272;
  t9282 = t3237*t9278;
  t9283 = t9280 + t9282;
  t9285 = t3237*t9272;
  t9286 = -1.*t3243*t9278;
  t9287 = t9285 + t9286;
  t9301 = t900*t595;
  t9303 = -1.*t934*t910*t964;
  t9305 = t9301 + t9303;
  t9313 = t705*t9305;
  t9315 = t3345 + t9313;
  t9307 = -1.*t705*t3329;
  t9309 = t1096*t9305;
  t9310 = t9307 + t9309;
  t9319 = t2015*t9310;
  t9321 = t1845*t453*t9315;
  t9322 = t9319 + t9321;
  t9325 = t1845*t9310;
  t9326 = -1.*t453*t2015*t9315;
  t9329 = t9325 + t9326;
  t9331 = -1.*t2833*t9322;
  t9332 = t2743*t9329;
  t9333 = t9331 + t9332;
  t9335 = t2743*t9322;
  t9336 = t2833*t9329;
  t9337 = t9335 + t9336;
  t9339 = t3243*t9333;
  t9340 = t3237*t9337;
  t9341 = t9339 + t9340;
  t9345 = t3237*t9333;
  t9347 = -1.*t3243*t9337;
  t9348 = t9345 + t9347;
  t9362 = t900*t595*t910;
  t9364 = -1.*t934*t964;
  t9365 = t9362 + t9364;
  t9373 = t1096*t9365;
  t9374 = t705*t1538;
  t9375 = t9373 + t9374;
  t9369 = -1.*t705*t9365;
  t9370 = t9369 + t1810;
  t9382 = t2015*t9370;
  t9383 = t1845*t453*t9375;
  t9384 = t9382 + t9383;
  t9386 = t1845*t9370;
  t9387 = -1.*t453*t2015*t9375;
  t9388 = t9386 + t9387;
  t9390 = -1.*t2833*t9384;
  t9391 = t2743*t9388;
  t9392 = t9390 + t9391;
  t9395 = t2743*t9384;
  t9397 = t2833*t9388;
  t9398 = t9395 + t9397;
  t9400 = t3243*t9392;
  t9402 = t3237*t9398;
  t9403 = t9400 + t9402;
  t9405 = t3237*t9392;
  t9406 = -1.*t3243*t9398;
  t9408 = t9405 + t9406;
  t9431 = t1096*t89*t900;
  t9432 = -1.*t89*t705*t964;
  t9433 = t9431 + t9432;
  t9425 = -1.*t89*t900*t705;
  t9428 = -1.*t1096*t89*t964;
  t9429 = t9425 + t9428;
  t9437 = t2015*t9429;
  t9438 = t1845*t453*t9433;
  t9441 = t9437 + t9438;
  t9444 = t1845*t9429;
  t9445 = -1.*t453*t2015*t9433;
  t9446 = t9444 + t9445;
  t9449 = -1.*t2833*t9441;
  t9450 = t2743*t9446;
  t9451 = t9449 + t9450;
  t9453 = t2743*t9441;
  t9455 = t2833*t9446;
  t9456 = t9453 + t9455;
  t9459 = t3243*t9451;
  t9461 = t3237*t9456;
  t9462 = t9459 + t9461;
  t9464 = t3237*t9451;
  t9465 = -1.*t3243*t9456;
  t9467 = t9464 + t9465;
  t9483 = -1.*t1096*t3334;
  t9484 = t9307 + t9483;
  t9497 = t2015*t9484;
  t9498 = t1845*t453*t3347;
  t9501 = t9497 + t9498;
  t9506 = t1845*t9484;
  t9507 = -1.*t453*t2015*t3347;
  t9509 = t9506 + t9507;
  t9513 = -1.*t2833*t9501;
  t9514 = t2743*t9509;
  t9517 = t9513 + t9514;
  t9522 = t2743*t9501;
  t9523 = t2833*t9509;
  t9525 = t9522 + t9523;
  t9527 = t3243*t9517;
  t9529 = t3237*t9525;
  t9530 = t9527 + t9529;
  t9533 = t3237*t9517;
  t9534 = -1.*t3243*t9525;
  t9535 = t9533 + t9534;
  t9550 = t934*t900;
  t9551 = t595*t910*t964;
  t9553 = t9550 + t9551;
  t9561 = -1.*t705*t9553;
  t9562 = t9373 + t9561;
  t9555 = -1.*t1096*t9553;
  t9557 = t9369 + t9555;
  t9566 = t2015*t9557;
  t9567 = t1845*t453*t9562;
  t9568 = t9566 + t9567;
  t9570 = t1845*t9557;
  t9571 = -1.*t453*t2015*t9562;
  t9572 = t9570 + t9571;
  t9575 = -1.*t2833*t9568;
  t9577 = t2743*t9572;
  t9578 = t9575 + t9577;
  t9582 = t2743*t9568;
  t9583 = t2833*t9572;
  t9584 = t9582 + t9583;
  t9587 = t3243*t9578;
  t9588 = t3237*t9584;
  t9590 = t9587 + t9588;
  t9593 = t3237*t9578;
  t9594 = -1.*t3243*t9584;
  t9595 = t9593 + t9594;
  t9430 = t2045*t9429;
  t9434 = -0.1305*t111*t9433;
  t9435 = t1723*t9433;
  t9436 = t453*t2605*t9433;
  t9442 = t2880*t9441;
  t9447 = t3219*t9446;
  t9452 = t3255*t9451;
  t9458 = t3268*t9456;
  t9463 = t3288*t9462;
  t9468 = t3301*t9467;
  t9469 = -1.*t3283*t9462;
  t9471 = t3275*t9467;
  t9472 = t9469 + t9471;
  t9475 = -0.7055*t9472;
  t9476 = t3275*t9462;
  t9477 = t3283*t9467;
  t9478 = t9476 + t9477;
  t9479 = 0.0184*t9478;
  t3352 = -1.*t934*t89*t453;
  t3354 = t111*t3340;
  t3355 = t3352 + t3354;
  t9628 = -1.*t2743*t2015*t3355;
  t9629 = -1.*t1845*t2833*t3355;
  t9630 = t9628 + t9629;
  t9632 = t1845*t2743*t3355;
  t9633 = -1.*t2015*t2833*t3355;
  t9636 = t9632 + t9633;
  t9638 = t3243*t9630;
  t9641 = t3237*t9636;
  t9642 = t9638 + t9641;
  t9645 = t3237*t9630;
  t9646 = -1.*t3243*t9636;
  t9649 = t9645 + t9646;
  t9613 = -0.135*t111;
  t9614 = -0.049*t453;
  t9615 = t9613 + t9614;
  t9617 = 0.049*t111;
  t9618 = t9617 + t539;
  t9661 = t705*t9365;
  t9663 = t1096*t9553;
  t9665 = t9661 + t9663;
  t9668 = -1.*t89*t453*t595;
  t9669 = t111*t9665;
  t9670 = t9668 + t9669;
  t9681 = -1.*t2743*t2015*t9670;
  t9682 = -1.*t1845*t2833*t9670;
  t9684 = t9681 + t9682;
  t9688 = t1845*t2743*t9670;
  t9689 = -1.*t2015*t2833*t9670;
  t9690 = t9688 + t9689;
  t9692 = t3243*t9684;
  t9693 = t3237*t9690;
  t9694 = t9692 + t9693;
  t9696 = t3237*t9684;
  t9697 = -1.*t3243*t9690;
  t9698 = t9696 + t9697;
  t9712 = t89*t900*t705;
  t9715 = t1096*t89*t964;
  t9716 = t9712 + t9715;
  t9720 = t453*t910;
  t9721 = t111*t9716;
  t9722 = t9720 + t9721;
  t9733 = -1.*t2743*t2015*t9722;
  t9734 = -1.*t1845*t2833*t9722;
  t9735 = t9733 + t9734;
  t9737 = t1845*t2743*t9722;
  t9738 = -1.*t2015*t2833*t9722;
  t9739 = t9737 + t9738;
  t9741 = t3243*t9735;
  t9742 = t3237*t9739;
  t9743 = t9741 + t9742;
  t9747 = t3237*t9735;
  t9748 = -1.*t3243*t9739;
  t9749 = t9747 + t9748;
  t9772 = -1.*t2015*t3347;
  t9773 = -1.*t1845*t3461;
  t9774 = t9772 + t9773;
  t9778 = t2833*t9774;
  t9781 = t9778 + t3960;
  t9783 = t2743*t9774;
  t9786 = -1.*t2833*t3861;
  t9787 = t9783 + t9786;
  t9790 = -1.*t3243*t9781;
  t9791 = t3237*t9787;
  t9793 = t9790 + t9791;
  t9796 = t3237*t9781;
  t9798 = t3243*t9787;
  t9799 = t9796 + t9798;
  t9765 = 0.049*t1845;
  t9766 = t9765 + t2524;
  t9768 = -0.09*t1845;
  t9769 = -0.049*t2015;
  t9770 = t9768 + t9769;
  t9812 = t111*t89*t595;
  t9814 = t453*t9665;
  t9816 = t9812 + t9814;
  t9820 = -1.*t2015*t9562;
  t9821 = -1.*t1845*t9816;
  t9824 = t9820 + t9821;
  t9826 = t1845*t9562;
  t9828 = -1.*t2015*t9816;
  t9829 = t9826 + t9828;
  t9832 = t2833*t9824;
  t9834 = t2743*t9829;
  t9836 = t9832 + t9834;
  t9838 = t2743*t9824;
  t9840 = -1.*t2833*t9829;
  t9841 = t9838 + t9840;
  t9843 = -1.*t3243*t9836;
  t9844 = t3237*t9841;
  t9845 = t9843 + t9844;
  t9847 = t3237*t9836;
  t9848 = t3243*t9841;
  t9849 = t9847 + t9848;
  t9864 = -1.*t111*t910;
  t9865 = t453*t9716;
  t9867 = t9864 + t9865;
  t9869 = -1.*t2015*t9433;
  t9870 = -1.*t1845*t9867;
  t9871 = t9869 + t9870;
  t9873 = t1845*t9433;
  t9874 = -1.*t2015*t9867;
  t9875 = t9873 + t9874;
  t9877 = t2833*t9871;
  t9878 = t2743*t9875;
  t9880 = t9877 + t9878;
  t9884 = t2743*t9871;
  t9886 = -1.*t2833*t9875;
  t9887 = t9884 + t9886;
  t9891 = -1.*t3243*t9880;
  t9892 = t3237*t9887;
  t9893 = t9891 + t9892;
  t9896 = t3237*t9880;
  t9897 = t3243*t9887;
  t9898 = t9896 + t9897;
  t9924 = -1.*t2743*t3576;
  t9925 = t9924 + t9786;
  t9927 = -1.*t3243*t3972;
  t9928 = t3237*t9925;
  t9929 = t9927 + t9928;
  t9931 = t3243*t9925;
  t9932 = t4237 + t9931;
  t9912 = -0.21*t2743;
  t9914 = -0.049*t2833;
  t9915 = t9912 + t9914;
  t9919 = 0.049*t2743;
  t9920 = t9919 + t2878;
  t9944 = t2015*t9562;
  t9945 = t1845*t9816;
  t9946 = t9944 + t9945;
  t9950 = -1.*t2833*t9946;
  t9951 = t9950 + t9834;
  t9953 = -1.*t2743*t9946;
  t9954 = t9953 + t9840;
  t9958 = -1.*t3243*t9951;
  t9959 = t3237*t9954;
  t9962 = t9958 + t9959;
  t9965 = t3237*t9951;
  t9966 = t3243*t9954;
  t9967 = t9965 + t9966;
  t9983 = t2015*t9433;
  t9985 = t1845*t9867;
  t9986 = t9983 + t9985;
  t9990 = -1.*t2833*t9986;
  t9991 = t9990 + t9878;
  t9993 = -1.*t2743*t9986;
  t9994 = t9993 + t9886;
  t9996 = -1.*t3243*t9991;
  t9997 = t3237*t9994;
  t9998 = t9996 + t9997;
  t10000 = t3237*t9991;
  t10001 = t3243*t9994;
  t10002 = t10000 + t10001;
  t10022 = -1.*t3237*t4105;
  t10023 = t9927 + t10022;
  t4618 = t3275*t4381;
  t10014 = 0.0016*t3237;
  t10015 = t10014 + t3267;
  t10017 = -0.2707*t3237;
  t10019 = -0.0016*t3243;
  t10020 = t10017 + t10019;
  t10035 = t2743*t9946;
  t10036 = t2833*t9829;
  t10037 = t10035 + t10036;
  t10039 = -1.*t3237*t10037;
  t10040 = t9958 + t10039;
  t10042 = -1.*t3243*t10037;
  t10043 = t9965 + t10042;
  t10055 = t2743*t9986;
  t10056 = t2833*t9875;
  t10057 = t10055 + t10056;
  t10059 = -1.*t3237*t10057;
  t10060 = t9996 + t10059;
  t10062 = -1.*t3243*t10057;
  t10063 = t10000 + t10062;
  t4581 = -1.*t3283*t4154;
  t4628 = t4581 + t4618;
  t10030 = -1.*t3283*t4381;
  t10074 = -0.7055*t3275;
  t10075 = 0.0184*t3283;
  t10076 = t10074 + t10075;
  t10078 = -0.0184*t3275;
  t10079 = t10078 + t3287;
  t10086 = t3243*t9951;
  t10087 = t3237*t10037;
  t10088 = t10086 + t10087;
  t10046 = t3275*t10043;
  t10050 = -1.*t3283*t10043;
  t10098 = t3243*t9991;
  t10099 = t3237*t10057;
  t10100 = t10098 + t10099;
  t10066 = t3275*t10063;
  t10070 = -1.*t3283*t10063;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1411*t1538 + t1723*t1836 + t2045*t2083 + t2605*t2725 + t2880*t2968 + t3219*t3232 + t3255*t3262 + t3268*t3273 + t3288*t3292 + t3301*t3305 - 0.7055*(-1.*t3283*t3292 + t3275*t3305) + 0.0184*(t3275*t3292 + t3283*t3305) + t1077*t834 - 1.*t554*t595*t89 - 0.1305*(t111*t1836 + t453*t595*t89);
  p_output1[10]=t1411*t3334 + t1723*t3340 + t2045*t3347 - 0.1305*t3355 + t2605*t3461 + t2880*t3576 + t3219*t3861 + t3255*t3972 + t3268*t4105 + t3288*t4154 + t3301*t4381 + 0.0184*(t3275*t4154 + t3283*t4381) - 0.7055*t4628 + t3329*t834 + t554*t89*t934;
  p_output1[11]=0;
  p_output1[12]=t1723*t6330 + t2045*t6656 + t2605*t7424 + t2880*t8771 + t3219*t8800 + t3255*t8859 + t3268*t8900 + t3288*t8940 + t3301*t8948 - 0.7055*(-1.*t3283*t8940 + t3275*t8948) + 0.0184*(t3275*t8940 + t3283*t8948) + t834*t89*t900*t934 - 1.*t554*t910*t934 - 0.1305*(t111*t6330 + t453*t910*t934) + t1411*t89*t934*t964;
  p_output1[13]=t595*t834*t89*t900 + t1723*t9060 + t2045*t9070 - 1.*t554*t595*t910 - 0.1305*(t111*t9060 + t453*t595*t910) + t2605*t9102 + t2880*t9127 + t3219*t9145 + t3255*t9163 + t3268*t9181 + t3288*t9191 + t3301*t9204 - 0.7055*(-1.*t3283*t9191 + t3275*t9204) + 0.0184*(t3275*t9191 + t3283*t9204) + t1411*t595*t89*t964;
  p_output1[14]=-1.*t554*t89 - 1.*t834*t900*t910 + t1723*t9229 - 0.1305*(t453*t89 + t111*t9229) + t2045*t9238 + t2605*t9253 + t2880*t9262 + t3219*t9267 + t3255*t9272 + t3268*t9278 + t3288*t9283 + t3301*t9287 - 0.7055*(-1.*t3283*t9283 + t3275*t9287) + 0.0184*(t3275*t9283 + t3283*t9287) - 1.*t1411*t910*t964;
  p_output1[15]=t1411*t3329 + t834*t9305 + t2045*t9310 - 0.1305*t111*t9315 + t1723*t9315 + t2605*t453*t9315 + t2880*t9322 + t3219*t9329 + t3255*t9333 + t3268*t9337 + t3288*t9341 + t3301*t9348 - 0.7055*(-1.*t3283*t9341 + t3275*t9348) + 0.0184*(t3275*t9341 + t3283*t9348);
  p_output1[16]=t1538*t834 + t1411*t9365 + t2045*t9370 - 0.1305*t111*t9375 + t1723*t9375 + t2605*t453*t9375 + t2880*t9384 + t3219*t9388 + t3255*t9392 + t3268*t9398 + t3288*t9403 + t3301*t9408 - 0.7055*(-1.*t3283*t9403 + t3275*t9408) + 0.0184*(t3275*t9403 + t3283*t9408);
  p_output1[17]=t1411*t89*t900 + t9430 + t9434 + t9435 + t9436 + t9442 + t9447 + t9452 + t9458 + t9463 + t9468 + t9475 + t9479 - 1.*t834*t89*t964;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0.135*t1096*t3329 - 0.1305*t111*t3347 + t1723*t3347 + t2605*t3347*t453 - 0.135*t3334*t705 + t2045*t9484 + t2880*t9501 + t3219*t9509 + t3255*t9517 + t3268*t9525 + t3288*t9530 + t3301*t9535 - 0.7055*(-1.*t3283*t9530 + t3275*t9535) + 0.0184*(t3275*t9530 + t3283*t9535);
  p_output1[40]=0.135*t1096*t9365 - 0.135*t705*t9553 + t2045*t9557 - 0.1305*t111*t9562 + t1723*t9562 + t2605*t453*t9562 + t2880*t9568 + t3219*t9572 + t3255*t9578 + t3268*t9584 + t3288*t9590 + t3301*t9595 - 0.7055*(-1.*t3283*t9590 + t3275*t9595) + 0.0184*(t3275*t9590 + t3283*t9595);
  p_output1[41]=0.135*t1096*t89*t900 + t9430 + t9434 + t9435 + t9436 + t9442 + t9447 + t9452 + t9458 + t9463 + t9468 + t9475 + t9479 - 0.135*t705*t89*t964;
  p_output1[42]=t2605*t3355 + t1845*t2880*t3355 - 1.*t2015*t3219*t3355 - 0.1305*(-1.*t3340*t453 - 1.*t111*t89*t934) + t89*t934*t9615 + t3340*t9618 + t3255*t9630 + t3268*t9636 + t3288*t9642 + t3301*t9649 - 0.7055*(-1.*t3283*t9642 + t3275*t9649) + 0.0184*(t3275*t9642 + t3283*t9649);
  p_output1[43]=t595*t89*t9615 + t9618*t9665 - 0.1305*(t2629 - 1.*t453*t9665) + t2605*t9670 + t1845*t2880*t9670 - 1.*t2015*t3219*t9670 + t3255*t9684 + t3268*t9690 + t3288*t9694 + t3301*t9698 - 0.7055*(-1.*t3283*t9694 + t3275*t9698) + 0.0184*(t3275*t9694 + t3283*t9698);
  p_output1[44]=-1.*t910*t9615 + t9618*t9716 - 0.1305*(t111*t910 - 1.*t453*t9716) + t2605*t9722 + t1845*t2880*t9722 - 1.*t2015*t3219*t9722 + t3255*t9735 + t3268*t9739 + t3288*t9743 + t3301*t9749 - 0.7055*(-1.*t3283*t9743 + t3275*t9749) + 0.0184*(t3275*t9743 + t3283*t9749);
  p_output1[45]=t2880*t3861 + t3347*t9766 + t3461*t9770 + t3219*t9774 + t3268*t9781 + t3255*t9787 + t3301*t9793 + t3288*t9799 + 0.0184*(t3283*t9793 + t3275*t9799) - 0.7055*(t3275*t9793 - 1.*t3283*t9799);
  p_output1[46]=t9562*t9766 + t9770*t9816 + t3219*t9824 + t2880*t9829 + t3268*t9836 + t3255*t9841 + t3301*t9845 + t3288*t9849 + 0.0184*(t3283*t9845 + t3275*t9849) - 0.7055*(t3275*t9845 - 1.*t3283*t9849);
  p_output1[47]=t9433*t9766 + t9770*t9867 + t3219*t9871 + t2880*t9875 + t3268*t9880 + t3255*t9887 + t3301*t9893 + t3288*t9898 + 0.0184*(t3283*t9893 + t3275*t9898) - 0.7055*(t3275*t9893 - 1.*t3283*t9898);
  p_output1[48]=t3268*t3972 + t3576*t9915 + t3861*t9920 + t3255*t9925 + t3301*t9929 + t3288*t9932 + 0.0184*(t3283*t9929 + t3275*t9932) - 0.7055*(t3275*t9929 - 1.*t3283*t9932);
  p_output1[49]=t9829*t9920 + t9915*t9946 + t3268*t9951 + t3255*t9954 + t3301*t9962 + t3288*t9967 + 0.0184*(t3283*t9962 + t3275*t9967) - 0.7055*(t3275*t9962 - 1.*t3283*t9967);
  p_output1[50]=t10002*t3288 + t9875*t9920 + t9915*t9986 + t3268*t9991 + t3255*t9994 + t3301*t9998 - 0.7055*(-1.*t10002*t3283 + t3275*t9998) + 0.0184*(t10002*t3275 + t3283*t9998);
  p_output1[51]=-0.7055*(t10030 + t10023*t3275) + t10023*t3301 + t10015*t3972 + t10020*t4105 + t3288*t4381 + 0.0184*(t10023*t3283 + t4618);
  p_output1[52]=t10020*t10037 - 0.7055*(t10050 + t10040*t3275) + 0.0184*(t10046 + t10040*t3283) + t10043*t3288 + t10040*t3301 + t10015*t9951;
  p_output1[53]=t10020*t10057 - 0.7055*(t10070 + t10060*t3275) + 0.0184*(t10066 + t10060*t3283) + t10063*t3288 + t10060*t3301 + t10015*t9991;
  p_output1[54]=t10076*t4154 - 0.7055*(t10030 - 1.*t3275*t4154) + t10079*t4381 + 0.0184*t4628;
  p_output1[55]=t10043*t10079 + t10076*t10088 - 0.7055*(t10050 - 1.*t10088*t3275) + 0.0184*(t10046 - 1.*t10088*t3283);
  p_output1[56]=t10063*t10079 + t10076*t10100 - 0.7055*(t10070 - 1.*t10100*t3275) + 0.0184*(t10066 - 1.*t10100*t3283);
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jp_ankle_joint_right_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
