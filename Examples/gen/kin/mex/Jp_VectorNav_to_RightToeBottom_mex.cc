/*
 * Automatically Generated from Mathematica.
 * Tue 17 Jul 2018 10:14:14 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t320;
  double t356;
  double t597;
  double t1116;
  double t1117;
  double t1226;
  double t1259;
  double t1436;
  double t1765;
  double t1974;
  double t1991;
  double t2157;
  double t1543;
  double t1552;
  double t1585;
  double t2327;
  double t2463;
  double t2600;
  double t3329;
  double t3330;
  double t3333;
  double t3482;
  double t3044;
  double t3161;
  double t3208;
  double t3706;
  double t3762;
  double t3774;
  double t4231;
  double t4478;
  double t4756;
  double t4911;
  double t3966;
  double t3973;
  double t4052;
  double t5011;
  double t5015;
  double t5022;
  double t5319;
  double t5342;
  double t5349;
  double t5480;
  double t5131;
  double t5215;
  double t5237;
  double t5542;
  double t5543;
  double t5572;
  double t360;
  double t538;
  double t545;
  double t606;
  double t715;
  double t1241;
  double t1375;
  double t1384;
  double t1450;
  double t1506;
  double t1531;
  double t2133;
  double t2217;
  double t2293;
  double t2619;
  double t2710;
  double t2731;
  double t5665;
  double t5679;
  double t5683;
  double t5686;
  double t5691;
  double t5695;
  double t3367;
  double t3535;
  double t3571;
  double t3817;
  double t3868;
  double t3885;
  double t5707;
  double t5717;
  double t5718;
  double t5759;
  double t5761;
  double t5783;
  double t4857;
  double t4928;
  double t4942;
  double t5048;
  double t5075;
  double t5096;
  double t5795;
  double t5797;
  double t5798;
  double t5817;
  double t5828;
  double t5834;
  double t5450;
  double t5524;
  double t5527;
  double t5575;
  double t5576;
  double t5587;
  double t5845;
  double t5847;
  double t5851;
  double t5867;
  double t5868;
  double t5879;
  double t5991;
  double t5992;
  double t6001;
  double t6010;
  double t6011;
  double t6019;
  double t6035;
  double t6039;
  double t6046;
  double t6056;
  double t6063;
  double t6064;
  double t6080;
  double t6083;
  double t6087;
  double t6115;
  double t6122;
  double t6125;
  double t6248;
  double t6251;
  double t6252;
  double t6274;
  double t6276;
  double t6278;
  double t6282;
  double t6283;
  double t6287;
  double t6318;
  double t6324;
  double t6329;
  double t6333;
  double t6336;
  double t6347;
  double t6352;
  double t6363;
  double t6370;
  double t6184;
  double t6191;
  double t6194;
  double t6494;
  double t6499;
  double t6509;
  double t6516;
  double t6517;
  double t6527;
  double t6530;
  double t6531;
  double t6535;
  double t6538;
  double t6546;
  double t6547;
  double t6554;
  double t6558;
  double t6560;
  double t6564;
  double t6567;
  double t6568;
  double t6660;
  double t6661;
  double t6671;
  double t6680;
  double t6685;
  double t6686;
  double t6689;
  double t6702;
  double t6709;
  double t6711;
  double t6712;
  double t6715;
  double t6741;
  double t6744;
  double t6745;
  double t6717;
  double t6720;
  double t6729;
  double t6613;
  double t6615;
  double t6627;
  double t6809;
  double t6811;
  double t6815;
  double t6839;
  double t6840;
  double t6848;
  double t6851;
  double t6852;
  double t6868;
  double t6879;
  double t6883;
  double t6897;
  double t6900;
  double t6907;
  double t6925;
  double t6927;
  double t6928;
  double t6910;
  double t6917;
  double t6918;
  double t6781;
  double t6786;
  double t6968;
  double t6971;
  double t6974;
  double t6984;
  double t6985;
  double t6989;
  double t7000;
  double t7003;
  double t7009;
  double t7010;
  double t7012;
  double t7017;
  double t7018;
  double t7020;
  double t7040;
  double t7041;
  double t7050;
  double t7033;
  double t7034;
  double t7038;
  double t6674;
  double t6687;
  double t6710;
  double t6716;
  double t6730;
  double t6751;
  double t6760;
  double t6763;
  double t6765;
  double t6767;
  double t6770;
  double t6773;
  double t6775;
  double t6777;
  double t7087;
  double t7088;
  double t7098;
  double t7106;
  double t7109;
  double t7133;
  double t7142;
  double t7147;
  double t7151;
  double t7157;
  double t7169;
  double t7172;
  double t7200;
  double t7204;
  double t7209;
  double t7179;
  double t7180;
  double t7194;
  double t7254;
  double t7259;
  double t7262;
  double t7271;
  double t7272;
  double t7274;
  double t7278;
  double t7280;
  double t7283;
  double t7286;
  double t7290;
  double t7291;
  double t7294;
  double t7332;
  double t7333;
  double t7334;
  double t7300;
  double t7312;
  double t7329;
  double t7376;
  double t7384;
  double t7388;
  double t7402;
  double t7406;
  double t7419;
  double t7421;
  double t7466;
  double t7472;
  double t7479;
  double t7444;
  double t7448;
  double t7450;
  double t7365;
  double t7366;
  double t7390;
  double t7397;
  double t7398;
  double t7540;
  double t7544;
  double t7566;
  double t7568;
  double t7578;
  double t7560;
  double t7563;
  double t7610;
  double t7611;
  double t7613;
  double t7620;
  double t7630;
  double t7653;
  double t7655;
  double t7677;
  double t7678;
  double t7679;
  double t7660;
  double t7661;
  double t7669;
  double t7725;
  double t7728;
  double t7730;
  double t7778;
  double t7789;
  double t7763;
  double t7769;
  double t7716;
  double t7719;
  double t7736;
  double t7737;
  double t7740;
  double t7840;
  double t7841;
  double t5956;
  double t7871;
  double t7878;
  double t7879;
  double t7905;
  double t7910;
  double t7892;
  double t7896;
  double t7966;
  double t7976;
  double t7982;
  double t7805;
  double t7811;
  double t7961;
  double t7963;
  double t7984;
  double t7997;
  double t8006;
  double t7856;
  double t5958;
  double t5964;
  double t8089;
  double t8093;
  double t8104;
  double t7919;
  double t7941;
  t320 = Sin(var1[7]);
  t356 = Cos(var1[8]);
  t597 = Sin(var1[8]);
  t1116 = Cos(var1[9]);
  t1117 = -1.*t1116;
  t1226 = 1. + t1117;
  t1259 = Sin(var1[9]);
  t1436 = Cos(var1[7]);
  t1765 = Cos(var1[10]);
  t1974 = -1.*t1765;
  t1991 = 1. + t1974;
  t2157 = Sin(var1[10]);
  t1543 = -1.*t1116*t320*t597;
  t1552 = -1.*t1436*t1259;
  t1585 = t1543 + t1552;
  t2327 = -1.*t1436*t1116;
  t2463 = t320*t597*t1259;
  t2600 = t2327 + t2463;
  t3329 = Cos(var1[11]);
  t3330 = -1.*t3329;
  t3333 = 1. + t3330;
  t3482 = Sin(var1[11]);
  t3044 = t1765*t1585;
  t3161 = t2600*t2157;
  t3208 = t3044 + t3161;
  t3706 = t1765*t2600;
  t3762 = -1.*t1585*t2157;
  t3774 = t3706 + t3762;
  t4231 = Cos(var1[12]);
  t4478 = -1.*t4231;
  t4756 = 1. + t4478;
  t4911 = Sin(var1[12]);
  t3966 = t3329*t3208;
  t3973 = t3774*t3482;
  t4052 = t3966 + t3973;
  t5011 = t3329*t3774;
  t5015 = -1.*t3208*t3482;
  t5022 = t5011 + t5015;
  t5319 = Cos(var1[13]);
  t5342 = -1.*t5319;
  t5349 = 1. + t5342;
  t5480 = Sin(var1[13]);
  t5131 = t4231*t4052;
  t5215 = t5022*t4911;
  t5237 = t5131 + t5215;
  t5542 = t4231*t5022;
  t5543 = -1.*t4052*t4911;
  t5572 = t5542 + t5543;
  t360 = -1.*t356;
  t538 = 1. + t360;
  t545 = -0.135*t538;
  t606 = 0.049*t597;
  t715 = 0. + t545 + t606;
  t1241 = -0.049*t1226;
  t1375 = -0.09*t1259;
  t1384 = 0. + t1241 + t1375;
  t1450 = -0.09*t1226;
  t1506 = 0.049*t1259;
  t1531 = 0. + t1450 + t1506;
  t2133 = -0.049*t1991;
  t2217 = -0.21*t2157;
  t2293 = 0. + t2133 + t2217;
  t2619 = -0.21*t1991;
  t2710 = 0.049*t2157;
  t2731 = 0. + t2619 + t2710;
  t5665 = t1436*t1116*t597;
  t5679 = -1.*t320*t1259;
  t5683 = t5665 + t5679;
  t5686 = -1.*t1116*t320;
  t5691 = -1.*t1436*t597*t1259;
  t5695 = t5686 + t5691;
  t3367 = -0.0016*t3333;
  t3535 = -0.2707*t3482;
  t3571 = 0. + t3367 + t3535;
  t3817 = -0.2707*t3333;
  t3868 = 0.0016*t3482;
  t3885 = 0. + t3817 + t3868;
  t5707 = t1765*t5683;
  t5717 = t5695*t2157;
  t5718 = t5707 + t5717;
  t5759 = t1765*t5695;
  t5761 = -1.*t5683*t2157;
  t5783 = t5759 + t5761;
  t4857 = 0.0184*t4756;
  t4928 = -0.7055*t4911;
  t4942 = 0. + t4857 + t4928;
  t5048 = -0.7055*t4756;
  t5075 = -0.0184*t4911;
  t5096 = 0. + t5048 + t5075;
  t5795 = t3329*t5718;
  t5797 = t5783*t3482;
  t5798 = t5795 + t5797;
  t5817 = t3329*t5783;
  t5828 = -1.*t5718*t3482;
  t5834 = t5817 + t5828;
  t5450 = -0.0216*t5349;
  t5524 = -1.1135*t5480;
  t5527 = 0. + t5450 + t5524;
  t5575 = -1.1135*t5349;
  t5576 = 0.0216*t5480;
  t5587 = 0. + t5575 + t5576;
  t5845 = t4231*t5798;
  t5847 = t5834*t4911;
  t5851 = t5845 + t5847;
  t5867 = t4231*t5834;
  t5868 = -1.*t5798*t4911;
  t5879 = t5867 + t5868;
  t5991 = -1.*t1116*t1765*t597;
  t5992 = t597*t1259*t2157;
  t6001 = t5991 + t5992;
  t6010 = t1765*t597*t1259;
  t6011 = t1116*t597*t2157;
  t6019 = t6010 + t6011;
  t6035 = t3329*t6001;
  t6039 = t6019*t3482;
  t6046 = t6035 + t6039;
  t6056 = t3329*t6019;
  t6063 = -1.*t6001*t3482;
  t6064 = t6056 + t6063;
  t6080 = t4231*t6046;
  t6083 = t6064*t4911;
  t6087 = t6080 + t6083;
  t6115 = t4231*t6064;
  t6122 = -1.*t6046*t4911;
  t6125 = t6115 + t6122;
  t6248 = t1436*t356*t1116*t1765;
  t6251 = -1.*t1436*t356*t1259*t2157;
  t6252 = t6248 + t6251;
  t6274 = -1.*t1436*t356*t1765*t1259;
  t6276 = -1.*t1436*t356*t1116*t2157;
  t6278 = t6274 + t6276;
  t6282 = t3329*t6252;
  t6283 = t6278*t3482;
  t6287 = t6282 + t6283;
  t6318 = t3329*t6278;
  t6324 = -1.*t6252*t3482;
  t6329 = t6318 + t6324;
  t6333 = t4231*t6287;
  t6336 = t6329*t4911;
  t6347 = t6333 + t6336;
  t6352 = t4231*t6329;
  t6363 = -1.*t6287*t4911;
  t6370 = t6352 + t6363;
  t6184 = 0.049*t356;
  t6191 = -0.135*t597;
  t6194 = t6184 + t6191;
  t6494 = t356*t1116*t1765*t320;
  t6499 = -1.*t356*t320*t1259*t2157;
  t6509 = t6494 + t6499;
  t6516 = -1.*t356*t1765*t320*t1259;
  t6517 = -1.*t356*t1116*t320*t2157;
  t6527 = t6516 + t6517;
  t6530 = t3329*t6509;
  t6531 = t6527*t3482;
  t6535 = t6530 + t6531;
  t6538 = t3329*t6527;
  t6546 = -1.*t6509*t3482;
  t6547 = t6538 + t6546;
  t6554 = t4231*t6535;
  t6558 = t6547*t4911;
  t6560 = t6554 + t6558;
  t6564 = t4231*t6547;
  t6567 = -1.*t6535*t4911;
  t6568 = t6564 + t6567;
  t6660 = -1.*t356*t1765*t1259;
  t6661 = -1.*t356*t1116*t2157;
  t6671 = t6660 + t6661;
  t6680 = -1.*t356*t1116*t1765;
  t6685 = t356*t1259*t2157;
  t6686 = t6680 + t6685;
  t6689 = t3329*t6671;
  t6702 = t6686*t3482;
  t6709 = t6689 + t6702;
  t6711 = t3329*t6686;
  t6712 = -1.*t6671*t3482;
  t6715 = t6711 + t6712;
  t6741 = t4231*t6715;
  t6744 = -1.*t6709*t4911;
  t6745 = t6741 + t6744;
  t6717 = t4231*t6709;
  t6720 = t6715*t4911;
  t6729 = t6717 + t6720;
  t6613 = -0.09*t1116;
  t6615 = -0.049*t1259;
  t6627 = t6613 + t6615;
  t6809 = -1.*t1436*t1116*t597;
  t6811 = t320*t1259;
  t6815 = t6809 + t6811;
  t6839 = t6815*t2157;
  t6840 = t5759 + t6839;
  t6848 = t1765*t6815;
  t6851 = -1.*t5695*t2157;
  t6852 = t6848 + t6851;
  t6868 = t3329*t6840;
  t6879 = t6852*t3482;
  t6883 = t6868 + t6879;
  t6897 = t3329*t6852;
  t6900 = -1.*t6840*t3482;
  t6907 = t6897 + t6900;
  t6925 = t4231*t6907;
  t6927 = -1.*t6883*t4911;
  t6928 = t6925 + t6927;
  t6910 = t4231*t6883;
  t6917 = t6907*t4911;
  t6918 = t6910 + t6917;
  t6781 = 0.049*t1116;
  t6786 = t6781 + t1375;
  t6968 = t1436*t1116;
  t6971 = -1.*t320*t597*t1259;
  t6974 = t6968 + t6971;
  t6984 = t1765*t6974;
  t6985 = t1585*t2157;
  t6989 = t6984 + t6985;
  t7000 = -1.*t6974*t2157;
  t7003 = t3044 + t7000;
  t7009 = t3329*t6989;
  t7010 = t7003*t3482;
  t7012 = t7009 + t7010;
  t7017 = t3329*t7003;
  t7018 = -1.*t6989*t3482;
  t7020 = t7017 + t7018;
  t7040 = t4231*t7020;
  t7041 = -1.*t7012*t4911;
  t7050 = t7040 + t7041;
  t7033 = t4231*t7012;
  t7034 = t7020*t4911;
  t7038 = t7033 + t7034;
  t6674 = t6671*t3571;
  t6687 = t6686*t3885;
  t6710 = t6709*t4942;
  t6716 = t6715*t5096;
  t6730 = t6729*t5527;
  t6751 = t6745*t5587;
  t6760 = t5319*t6745;
  t6763 = -1.*t6729*t5480;
  t6765 = t6760 + t6763;
  t6767 = -1.1312*t6765;
  t6770 = t5319*t6729;
  t6773 = t6745*t5480;
  t6775 = t6770 + t6773;
  t6777 = 0.0306*t6775;
  t7087 = 0.049*t1765;
  t7088 = t7087 + t2217;
  t7098 = -0.21*t1765;
  t7106 = -0.049*t2157;
  t7109 = t7098 + t7106;
  t7133 = -1.*t1765*t5683;
  t7142 = t7133 + t6851;
  t7147 = t7142*t3482;
  t7151 = t5817 + t7147;
  t7157 = t3329*t7142;
  t7169 = -1.*t5783*t3482;
  t7172 = t7157 + t7169;
  t7200 = t4231*t7172;
  t7204 = -1.*t7151*t4911;
  t7209 = t7200 + t7204;
  t7179 = t4231*t7151;
  t7180 = t7172*t4911;
  t7194 = t7179 + t7180;
  t7254 = t1116*t320*t597;
  t7259 = t1436*t1259;
  t7262 = t7254 + t7259;
  t7271 = -1.*t7262*t2157;
  t7272 = t6984 + t7271;
  t7274 = -1.*t1765*t7262;
  t7278 = t7274 + t7000;
  t7280 = t3329*t7272;
  t7283 = t7278*t3482;
  t7286 = t7280 + t7283;
  t7290 = t3329*t7278;
  t7291 = -1.*t7272*t3482;
  t7294 = t7290 + t7291;
  t7332 = t4231*t7294;
  t7333 = -1.*t7286*t4911;
  t7334 = t7332 + t7333;
  t7300 = t4231*t7286;
  t7312 = t7294*t4911;
  t7329 = t7300 + t7312;
  t7376 = t356*t1116*t1765;
  t7384 = -1.*t356*t1259*t2157;
  t7388 = t7376 + t7384;
  t7402 = -1.*t7388*t3482;
  t7406 = t6689 + t7402;
  t7419 = -1.*t3329*t7388;
  t7421 = t7419 + t6712;
  t7466 = t4231*t7421;
  t7472 = -1.*t7406*t4911;
  t7479 = t7466 + t7472;
  t7444 = t4231*t7406;
  t7448 = t7421*t4911;
  t7450 = t7444 + t7448;
  t7365 = 0.0016*t3329;
  t7366 = t7365 + t3535;
  t7390 = -0.2707*t3329;
  t7397 = -0.0016*t3482;
  t7398 = t7390 + t7397;
  t7540 = -1.*t3329*t5718;
  t7544 = t7540 + t7169;
  t7566 = t4231*t7544;
  t7568 = -1.*t5834*t4911;
  t7578 = t7566 + t7568;
  t7560 = t7544*t4911;
  t7563 = t5867 + t7560;
  t7610 = t1765*t7262;
  t7611 = t6974*t2157;
  t7613 = t7610 + t7611;
  t7620 = -1.*t7613*t3482;
  t7630 = t7280 + t7620;
  t7653 = -1.*t3329*t7613;
  t7655 = t7653 + t7291;
  t7677 = t4231*t7655;
  t7678 = -1.*t7630*t4911;
  t7679 = t7677 + t7678;
  t7660 = t4231*t7630;
  t7661 = t7655*t4911;
  t7669 = t7660 + t7661;
  t7725 = t3329*t7388;
  t7728 = t6671*t3482;
  t7730 = t7725 + t7728;
  t7778 = -1.*t4231*t7730;
  t7789 = t7778 + t7472;
  t7763 = -1.*t7730*t4911;
  t7769 = t7444 + t7763;
  t7716 = -0.0184*t4231;
  t7719 = t7716 + t4928;
  t7736 = -0.7055*t4231;
  t7737 = 0.0184*t4911;
  t7740 = t7736 + t7737;
  t7840 = -1.*t4231*t5798;
  t7841 = t7840 + t7568;
  t5956 = t5319*t5879;
  t7871 = t3329*t7613;
  t7878 = t7272*t3482;
  t7879 = t7871 + t7878;
  t7905 = -1.*t4231*t7879;
  t7910 = t7905 + t7678;
  t7892 = -1.*t7879*t4911;
  t7896 = t7660 + t7892;
  t7966 = t4231*t7730;
  t7976 = t7406*t4911;
  t7982 = t7966 + t7976;
  t7805 = -1.*t7769*t5480;
  t7811 = t5319*t7769;
  t7961 = 0.0216*t5319;
  t7963 = t7961 + t5524;
  t7984 = -1.1135*t5319;
  t7997 = -0.0216*t5480;
  t8006 = t7984 + t7997;
  t7856 = -1.*t5879*t5480;
  t5958 = -1.*t5851*t5480;
  t5964 = t5956 + t5958;
  t8089 = t4231*t7879;
  t8093 = t7630*t4911;
  t8104 = t8089 + t8093;
  t7919 = -1.*t7896*t5480;
  t7941 = t5319*t7896;
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
  p_output1[21]=0;
  p_output1[22]=-1.*t1436*t1531 + t1585*t2293 + t2600*t2731 - 0.135*t320 + 0.1305*t320*t356 + t3208*t3571 + t3774*t3885 + t4052*t4942 + t5022*t5096 + t5237*t5527 - 1.1312*(-1.*t5237*t5480 + t5319*t5572) + 0.0306*(t5237*t5319 + t5480*t5572) + t5572*t5587 - 1.*t1384*t320*t597 - 1.*t320*t715;
  p_output1[23]=0.135*t1436 - 1.*t1531*t320 - 0.1305*t1436*t356 + t2293*t5683 + t2731*t5695 + t3571*t5718 + t3885*t5783 + t4942*t5798 + t5096*t5834 + t5527*t5851 + t5587*t5879 + 0.0306*(t5319*t5851 + t5480*t5879) - 1.1312*t5964 + t1384*t1436*t597 + t1436*t715;
  p_output1[24]=-0.004500000000000004*t356 - 0.049*t597 - 1.*t1384*t597 - 1.*t1116*t2293*t597 + t1259*t2731*t597 + t3571*t6001 + t3885*t6019 + t4942*t6046 + t5096*t6064 + t5527*t6087 + t5587*t6125 - 1.1312*(-1.*t5480*t6087 + t5319*t6125) + 0.0306*(t5319*t6087 + t5480*t6125);
  p_output1[25]=t1384*t1436*t356 + t1116*t1436*t2293*t356 - 1.*t1259*t1436*t2731*t356 + 0.1305*t1436*t597 + t1436*t6194 + t3571*t6252 + t3885*t6278 + t4942*t6287 + t5096*t6329 + t5527*t6347 + t5587*t6370 - 1.1312*(-1.*t5480*t6347 + t5319*t6370) + 0.0306*(t5319*t6347 + t5480*t6370);
  p_output1[26]=t1384*t320*t356 + t1116*t2293*t320*t356 - 1.*t1259*t2731*t320*t356 + 0.1305*t320*t597 + t320*t6194 + t3571*t6509 + t3885*t6527 + t4942*t6535 + t5096*t6547 + t5527*t6560 + t5587*t6568 - 1.1312*(-1.*t5480*t6560 + t5319*t6568) + 0.0306*(t5319*t6560 + t5480*t6568);
  p_output1[27]=-1.*t1259*t2293*t356 - 1.*t1116*t2731*t356 + t356*t6627 + t6674 + t6687 + t6710 + t6716 + t6730 + t6751 + t6767 + t6777;
  p_output1[28]=t2293*t5695 + t1436*t597*t6627 - 1.*t320*t6786 + t2731*t6815 + t3571*t6840 + t3885*t6852 + t4942*t6883 + t5096*t6907 + t5527*t6918 + t5587*t6928 - 1.1312*(-1.*t5480*t6918 + t5319*t6928) + 0.0306*(t5319*t6918 + t5480*t6928);
  p_output1[29]=t1585*t2731 + t320*t597*t6627 + t1436*t6786 + t2293*t6974 + t3571*t6989 + t3885*t7003 + t4942*t7012 + t5096*t7020 + t5527*t7038 + t5587*t7050 - 1.1312*(-1.*t5480*t7038 + t5319*t7050) + 0.0306*(t5319*t7038 + t5480*t7050);
  p_output1[30]=t6674 + t6687 + t6710 + t6716 + t6730 + t6751 + t6767 + t6777 - 1.*t1259*t356*t7088 + t1116*t356*t7109;
  p_output1[31]=t3571*t5783 + t5695*t7088 + t5683*t7109 + t3885*t7142 + t4942*t7151 + t5096*t7172 + t5527*t7194 + t5587*t7209 - 1.1312*(-1.*t5480*t7194 + t5319*t7209) + 0.0306*(t5319*t7194 + t5480*t7209);
  p_output1[32]=t6974*t7088 + t7109*t7262 + t3571*t7272 + t3885*t7278 + t4942*t7286 + t5096*t7294 + t5527*t7329 + t5587*t7334 - 1.1312*(-1.*t5480*t7329 + t5319*t7334) + 0.0306*(t5319*t7329 + t5480*t7334);
  p_output1[33]=t6671*t7366 + t7388*t7398 + t4942*t7406 + t5096*t7421 + t5527*t7450 + t5587*t7479 - 1.1312*(-1.*t5480*t7450 + t5319*t7479) + 0.0306*(t5319*t7450 + t5480*t7479);
  p_output1[34]=t4942*t5834 + t5783*t7366 + t5718*t7398 + t5096*t7544 + t5527*t7563 + t5587*t7578 - 1.1312*(-1.*t5480*t7563 + t5319*t7578) + 0.0306*(t5319*t7563 + t5480*t7578);
  p_output1[35]=t7272*t7366 + t7398*t7613 + t4942*t7630 + t5096*t7655 + t5527*t7669 + t5587*t7679 - 1.1312*(-1.*t5480*t7669 + t5319*t7679) + 0.0306*(t5319*t7669 + t5480*t7679);
  p_output1[36]=t7406*t7719 + t7730*t7740 + t5527*t7769 + t5587*t7789 - 1.1312*(t5319*t7789 + t7805) + 0.0306*(t5480*t7789 + t7811);
  p_output1[37]=t5527*t5879 + t5834*t7719 + t5798*t7740 + t5587*t7841 + 0.0306*(t5956 + t5480*t7841) - 1.1312*(t5319*t7841 + t7856);
  p_output1[38]=t7630*t7719 + t7740*t7879 + t5527*t7896 + t5587*t7910 - 1.1312*(t5319*t7910 + t7919) + 0.0306*(t5480*t7910 + t7941);
  p_output1[39]=t7769*t7963 - 1.1312*(t7805 - 1.*t5319*t7982) + 0.0306*(t7811 - 1.*t5480*t7982) + t7982*t8006;
  p_output1[40]=0.0306*t5964 - 1.1312*(-1.*t5319*t5851 + t7856) + t5879*t7963 + t5851*t8006;
  p_output1[41]=t7896*t7963 + t8006*t8104 - 1.1312*(t7919 - 1.*t5319*t8104) + 0.0306*(t7941 - 1.*t5480*t8104);
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 14 && ncols == 1) && 
      !(mrows == 1 && ncols == 14))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 14, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jp_VectorNav_to_RightToeBottom_mex.hh"

namespace SymExpression
{

void Jp_VectorNav_to_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
