/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 13:07:06 GMT-04:00
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
  double t2292;
  double t2296;
  double t2315;
  double t2291;
  double t2318;
  double t2239;
  double t2295;
  double t2321;
  double t2323;
  double t2329;
  double t2336;
  double t2337;
  double t2338;
  double t2370;
  double t2372;
  double t2376;
  double t2379;
  double t2357;
  double t2362;
  double t2367;
  double t2391;
  double t2417;
  double t2422;
  double t2425;
  double t2429;
  double t2406;
  double t2412;
  double t2415;
  double t2438;
  double t2439;
  double t2440;
  double t2446;
  double t2447;
  double t2448;
  double t2452;
  double t2456;
  double t2457;
  double t2458;
  double t2469;
  double t2470;
  double t2472;
  double t2478;
  double t2480;
  double t2482;
  double t2486;
  double t2493;
  double t2494;
  double t2495;
  double t2501;
  double t2502;
  double t2504;
  double t2276;
  double t2279;
  double t2282;
  double t2289;
  double t2339;
  double t2342;
  double t2515;
  double t2516;
  double t2517;
  double t2521;
  double t2522;
  double t2524;
  double t2378;
  double t2383;
  double t2384;
  double t2392;
  double t2393;
  double t2394;
  double t2526;
  double t2527;
  double t2529;
  double t2427;
  double t2431;
  double t2433;
  double t2442;
  double t2443;
  double t2444;
  double t2450;
  double t2453;
  double t2454;
  double t2539;
  double t2541;
  double t2542;
  double t2544;
  double t2545;
  double t2546;
  double t2461;
  double t2462;
  double t2467;
  double t2484;
  double t2489;
  double t2491;
  double t2548;
  double t2549;
  double t2550;
  double t2552;
  double t2553;
  double t2554;
  double t2498;
  double t2499;
  double t2500;
  double t2556;
  double t2557;
  double t2558;
  double t2560;
  double t2561;
  double t2563;
  double t2582;
  double t2583;
  double t2585;
  double t2592;
  double t2593;
  double t2594;
  double t2596;
  double t2599;
  double t2600;
  double t2602;
  double t2603;
  double t2604;
  double t2607;
  double t2609;
  double t2611;
  double t2613;
  double t2614;
  double t2615;
  double t2618;
  double t2620;
  double t2621;
  double t2637;
  double t2638;
  double t2639;
  double t2648;
  double t2649;
  double t2651;
  double t2653;
  double t2654;
  double t2656;
  double t2659;
  double t2660;
  double t2662;
  double t2665;
  double t2666;
  double t2668;
  double t2670;
  double t2671;
  double t2672;
  double t2674;
  double t2675;
  double t2676;
  double t2693;
  double t2695;
  double t2696;
  double t2707;
  double t2708;
  double t2709;
  double t2711;
  double t2712;
  double t2713;
  double t2715;
  double t2716;
  double t2717;
  double t2719;
  double t2727;
  double t2729;
  double t2733;
  double t2735;
  double t2738;
  double t2741;
  double t2742;
  double t2745;
  double t2761;
  double t2762;
  double t2763;
  double t2766;
  double t2768;
  double t2774;
  double t2775;
  double t2777;
  double t2779;
  double t2780;
  double t2781;
  double t2783;
  double t2784;
  double t2785;
  double t2787;
  double t2788;
  double t2789;
  double t2794;
  double t2795;
  double t2796;
  double t2812;
  double t2813;
  double t2815;
  double t2818;
  double t2819;
  double t2820;
  double t2824;
  double t2825;
  double t2827;
  double t2828;
  double t2829;
  double t2832;
  double t2833;
  double t2834;
  double t2836;
  double t2837;
  double t2838;
  double t2840;
  double t2841;
  double t2845;
  double t2860;
  double t2861;
  double t2863;
  double t2869;
  double t2870;
  double t2871;
  double t2876;
  double t2877;
  double t2880;
  double t2882;
  double t2883;
  double t2884;
  double t2886;
  double t2887;
  double t2888;
  double t2890;
  double t2891;
  double t2892;
  double t2915;
  double t2916;
  double t2918;
  double t2919;
  double t2920;
  double t2922;
  double t2923;
  double t2924;
  double t2926;
  double t2927;
  double t2928;
  double t2932;
  double t2933;
  double t2934;
  double t2949;
  double t2950;
  double t2951;
  double t2954;
  double t2957;
  double t2963;
  double t2964;
  double t2967;
  double t2970;
  double t2971;
  double t2973;
  double t2974;
  double t2975;
  double t2977;
  double t2978;
  double t2979;
  double t2982;
  double t2984;
  double t2987;
  double t2864;
  double t2867;
  double t2868;
  double t2872;
  double t2881;
  double t2885;
  double t2889;
  double t2894;
  double t2895;
  double t2896;
  double t2898;
  double t2899;
  double t2900;
  double t2901;
  double t2902;
  double t2903;
  double t2533;
  double t2535;
  double t2537;
  double t3022;
  double t3023;
  double t3024;
  double t3026;
  double t3027;
  double t3028;
  double t3006;
  double t3007;
  double t3008;
  double t3010;
  double t3011;
  double t3046;
  double t3047;
  double t3048;
  double t3050;
  double t3052;
  double t3053;
  double t3065;
  double t3066;
  double t3067;
  double t3069;
  double t3070;
  double t3071;
  double t3083;
  double t3085;
  double t3086;
  double t3088;
  double t3089;
  double t3090;
  double t3099;
  double t3100;
  double t3101;
  double t3103;
  double t3104;
  double t3105;
  double t3123;
  double t3124;
  double t3125;
  double t3128;
  double t3129;
  double t3131;
  double t3132;
  double t3133;
  double t3116;
  double t3117;
  double t3119;
  double t3120;
  double t3121;
  double t3145;
  double t3146;
  double t3147;
  double t3149;
  double t3150;
  double t3151;
  double t3153;
  double t3154;
  double t3155;
  double t3157;
  double t3158;
  double t3159;
  double t3161;
  double t3162;
  double t3163;
  double t3175;
  double t3176;
  double t3177;
  double t3179;
  double t3180;
  double t3181;
  double t3183;
  double t3184;
  double t3185;
  double t3187;
  double t3188;
  double t3189;
  double t3191;
  double t3192;
  double t3193;
  double t3212;
  double t3213;
  double t2571;
  double t3204;
  double t3205;
  double t3206;
  double t3208;
  double t3209;
  double t3223;
  double t3224;
  double t3225;
  double t3228;
  double t3229;
  double t3231;
  double t3232;
  double t3243;
  double t3244;
  double t3245;
  double t3248;
  double t3249;
  double t3251;
  double t3252;
  double t3215;
  double t2573;
  double t2574;
  double t3263;
  double t3264;
  double t3266;
  double t3267;
  double t3268;
  double t3234;
  double t3276;
  double t3277;
  double t3278;
  double t3238;
  double t3254;
  double t3288;
  double t3289;
  double t3290;
  double t3258;
  t2292 = Cos(var1[5]);
  t2296 = Sin(var1[3]);
  t2315 = Sin(var1[4]);
  t2291 = Cos(var1[3]);
  t2318 = Sin(var1[5]);
  t2239 = Cos(var1[6]);
  t2295 = -1.*t2291*t2292;
  t2321 = -1.*t2296*t2315*t2318;
  t2323 = t2295 + t2321;
  t2329 = -1.*t2292*t2296*t2315;
  t2336 = t2291*t2318;
  t2337 = t2329 + t2336;
  t2338 = Sin(var1[6]);
  t2370 = Cos(var1[7]);
  t2372 = -1.*t2370;
  t2376 = 1. + t2372;
  t2379 = Sin(var1[7]);
  t2357 = t2239*t2323;
  t2362 = t2337*t2338;
  t2367 = t2357 + t2362;
  t2391 = Cos(var1[4]);
  t2417 = Cos(var1[8]);
  t2422 = -1.*t2417;
  t2425 = 1. + t2422;
  t2429 = Sin(var1[8]);
  t2406 = -1.*t2391*t2370*t2296;
  t2412 = t2367*t2379;
  t2415 = t2406 + t2412;
  t2438 = t2239*t2337;
  t2439 = -1.*t2323*t2338;
  t2440 = t2438 + t2439;
  t2446 = Cos(var1[9]);
  t2447 = -1.*t2446;
  t2448 = 1. + t2447;
  t2452 = Sin(var1[9]);
  t2456 = t2417*t2415;
  t2457 = t2440*t2429;
  t2458 = t2456 + t2457;
  t2469 = t2417*t2440;
  t2470 = -1.*t2415*t2429;
  t2472 = t2469 + t2470;
  t2478 = Cos(var1[10]);
  t2480 = -1.*t2478;
  t2482 = 1. + t2480;
  t2486 = Sin(var1[10]);
  t2493 = -1.*t2452*t2458;
  t2494 = t2446*t2472;
  t2495 = t2493 + t2494;
  t2501 = t2446*t2458;
  t2502 = t2452*t2472;
  t2504 = t2501 + t2502;
  t2276 = -1.*t2239;
  t2279 = 1. + t2276;
  t2282 = 0.135*t2279;
  t2289 = 0. + t2282;
  t2339 = -0.135*t2338;
  t2342 = 0. + t2339;
  t2515 = -1.*t2292*t2296;
  t2516 = t2291*t2315*t2318;
  t2517 = t2515 + t2516;
  t2521 = t2291*t2292*t2315;
  t2522 = t2296*t2318;
  t2524 = t2521 + t2522;
  t2378 = 0.135*t2376;
  t2383 = 0.049*t2379;
  t2384 = 0. + t2378 + t2383;
  t2392 = -0.049*t2376;
  t2393 = 0.135*t2379;
  t2394 = 0. + t2392 + t2393;
  t2526 = t2239*t2517;
  t2527 = t2524*t2338;
  t2529 = t2526 + t2527;
  t2427 = -0.049*t2425;
  t2431 = -0.09*t2429;
  t2433 = 0. + t2427 + t2431;
  t2442 = -0.09*t2425;
  t2443 = 0.049*t2429;
  t2444 = 0. + t2442 + t2443;
  t2450 = -0.049*t2448;
  t2453 = -0.21*t2452;
  t2454 = 0. + t2450 + t2453;
  t2539 = t2291*t2391*t2370;
  t2541 = t2529*t2379;
  t2542 = t2539 + t2541;
  t2544 = t2239*t2524;
  t2545 = -1.*t2517*t2338;
  t2546 = t2544 + t2545;
  t2461 = -0.21*t2448;
  t2462 = 0.049*t2452;
  t2467 = 0. + t2461 + t2462;
  t2484 = -0.2707*t2482;
  t2489 = 0.0016*t2486;
  t2491 = 0. + t2484 + t2489;
  t2548 = t2417*t2542;
  t2549 = t2546*t2429;
  t2550 = t2548 + t2549;
  t2552 = t2417*t2546;
  t2553 = -1.*t2542*t2429;
  t2554 = t2552 + t2553;
  t2498 = -0.0016*t2482;
  t2499 = -0.2707*t2486;
  t2500 = 0. + t2498 + t2499;
  t2556 = -1.*t2452*t2550;
  t2557 = t2446*t2554;
  t2558 = t2556 + t2557;
  t2560 = t2446*t2550;
  t2561 = t2452*t2554;
  t2563 = t2560 + t2561;
  t2582 = t2291*t2391*t2239*t2318;
  t2583 = t2291*t2391*t2292*t2338;
  t2585 = t2582 + t2583;
  t2592 = -1.*t2291*t2370*t2315;
  t2593 = t2585*t2379;
  t2594 = t2592 + t2593;
  t2596 = t2291*t2391*t2292*t2239;
  t2599 = -1.*t2291*t2391*t2318*t2338;
  t2600 = t2596 + t2599;
  t2602 = t2417*t2594;
  t2603 = t2600*t2429;
  t2604 = t2602 + t2603;
  t2607 = t2417*t2600;
  t2609 = -1.*t2594*t2429;
  t2611 = t2607 + t2609;
  t2613 = -1.*t2452*t2604;
  t2614 = t2446*t2611;
  t2615 = t2613 + t2614;
  t2618 = t2446*t2604;
  t2620 = t2452*t2611;
  t2621 = t2618 + t2620;
  t2637 = t2391*t2239*t2296*t2318;
  t2638 = t2391*t2292*t2296*t2338;
  t2639 = t2637 + t2638;
  t2648 = -1.*t2370*t2296*t2315;
  t2649 = t2639*t2379;
  t2651 = t2648 + t2649;
  t2653 = t2391*t2292*t2239*t2296;
  t2654 = -1.*t2391*t2296*t2318*t2338;
  t2656 = t2653 + t2654;
  t2659 = t2417*t2651;
  t2660 = t2656*t2429;
  t2662 = t2659 + t2660;
  t2665 = t2417*t2656;
  t2666 = -1.*t2651*t2429;
  t2668 = t2665 + t2666;
  t2670 = -1.*t2452*t2662;
  t2671 = t2446*t2668;
  t2672 = t2670 + t2671;
  t2674 = t2446*t2662;
  t2675 = t2452*t2668;
  t2676 = t2674 + t2675;
  t2693 = -1.*t2239*t2315*t2318;
  t2695 = -1.*t2292*t2315*t2338;
  t2696 = t2693 + t2695;
  t2707 = -1.*t2391*t2370;
  t2708 = t2696*t2379;
  t2709 = t2707 + t2708;
  t2711 = -1.*t2292*t2239*t2315;
  t2712 = t2315*t2318*t2338;
  t2713 = t2711 + t2712;
  t2715 = t2417*t2709;
  t2716 = t2713*t2429;
  t2717 = t2715 + t2716;
  t2719 = t2417*t2713;
  t2727 = -1.*t2709*t2429;
  t2729 = t2719 + t2727;
  t2733 = -1.*t2452*t2717;
  t2735 = t2446*t2729;
  t2738 = t2733 + t2735;
  t2741 = t2446*t2717;
  t2742 = t2452*t2729;
  t2745 = t2741 + t2742;
  t2761 = t2292*t2296;
  t2762 = -1.*t2291*t2315*t2318;
  t2763 = t2761 + t2762;
  t2766 = t2763*t2338;
  t2768 = t2544 + t2766;
  t2774 = t2239*t2763;
  t2775 = -1.*t2524*t2338;
  t2777 = t2774 + t2775;
  t2779 = t2417*t2768*t2379;
  t2780 = t2777*t2429;
  t2781 = t2779 + t2780;
  t2783 = t2417*t2777;
  t2784 = -1.*t2768*t2379*t2429;
  t2785 = t2783 + t2784;
  t2787 = -1.*t2452*t2781;
  t2788 = t2446*t2785;
  t2789 = t2787 + t2788;
  t2794 = t2446*t2781;
  t2795 = t2452*t2785;
  t2796 = t2794 + t2795;
  t2812 = t2292*t2296*t2315;
  t2813 = -1.*t2291*t2318;
  t2815 = t2812 + t2813;
  t2818 = t2239*t2815;
  t2819 = t2323*t2338;
  t2820 = t2818 + t2819;
  t2824 = -1.*t2815*t2338;
  t2825 = t2357 + t2824;
  t2827 = t2417*t2820*t2379;
  t2828 = t2825*t2429;
  t2829 = t2827 + t2828;
  t2832 = t2417*t2825;
  t2833 = -1.*t2820*t2379*t2429;
  t2834 = t2832 + t2833;
  t2836 = -1.*t2452*t2829;
  t2837 = t2446*t2834;
  t2838 = t2836 + t2837;
  t2840 = t2446*t2829;
  t2841 = t2452*t2834;
  t2845 = t2840 + t2841;
  t2860 = t2391*t2292*t2239;
  t2861 = -1.*t2391*t2318*t2338;
  t2863 = t2860 + t2861;
  t2869 = -1.*t2391*t2239*t2318;
  t2870 = -1.*t2391*t2292*t2338;
  t2871 = t2869 + t2870;
  t2876 = t2417*t2863*t2379;
  t2877 = t2871*t2429;
  t2880 = t2876 + t2877;
  t2882 = t2417*t2871;
  t2883 = -1.*t2863*t2379*t2429;
  t2884 = t2882 + t2883;
  t2886 = -1.*t2452*t2880;
  t2887 = t2446*t2884;
  t2888 = t2886 + t2887;
  t2890 = t2446*t2880;
  t2891 = t2452*t2884;
  t2892 = t2890 + t2891;
  t2915 = -1.*t2239*t2517;
  t2916 = t2915 + t2775;
  t2918 = t2417*t2546*t2379;
  t2919 = t2916*t2429;
  t2920 = t2918 + t2919;
  t2922 = t2417*t2916;
  t2923 = -1.*t2546*t2379*t2429;
  t2924 = t2922 + t2923;
  t2926 = -1.*t2452*t2920;
  t2927 = t2446*t2924;
  t2928 = t2926 + t2927;
  t2932 = t2446*t2920;
  t2933 = t2452*t2924;
  t2934 = t2932 + t2933;
  t2949 = t2291*t2292;
  t2950 = t2296*t2315*t2318;
  t2951 = t2949 + t2950;
  t2954 = -1.*t2951*t2338;
  t2957 = t2818 + t2954;
  t2963 = -1.*t2239*t2951;
  t2964 = t2963 + t2824;
  t2967 = t2417*t2957*t2379;
  t2970 = t2964*t2429;
  t2971 = t2967 + t2970;
  t2973 = t2417*t2964;
  t2974 = -1.*t2957*t2379*t2429;
  t2975 = t2973 + t2974;
  t2977 = -1.*t2452*t2971;
  t2978 = t2446*t2975;
  t2979 = t2977 + t2978;
  t2982 = t2446*t2971;
  t2984 = t2452*t2975;
  t2987 = t2982 + t2984;
  t2864 = 0.1305*t2370*t2863;
  t2867 = t2863*t2384;
  t2868 = t2863*t2379*t2433;
  t2872 = t2871*t2444;
  t2881 = t2454*t2880;
  t2885 = t2467*t2884;
  t2889 = t2491*t2888;
  t2894 = t2500*t2892;
  t2895 = t2486*t2888;
  t2896 = t2478*t2892;
  t2898 = t2895 + t2896;
  t2899 = -0.0016*t2898;
  t2900 = t2478*t2888;
  t2901 = -1.*t2486*t2892;
  t2902 = t2900 + t2901;
  t2903 = -0.2707*t2902;
  t2533 = t2370*t2529;
  t2535 = -1.*t2291*t2391*t2379;
  t2537 = t2533 + t2535;
  t3022 = -1.*t2417*t2452*t2537;
  t3023 = -1.*t2446*t2537*t2429;
  t3024 = t3022 + t3023;
  t3026 = t2446*t2417*t2537;
  t3027 = -1.*t2452*t2537*t2429;
  t3028 = t3026 + t3027;
  t3006 = 0.135*t2370;
  t3007 = -0.049*t2379;
  t3008 = t3006 + t3007;
  t3010 = 0.049*t2370;
  t3011 = t3010 + t2393;
  t3046 = t2239*t2951;
  t3047 = t2815*t2338;
  t3048 = t3046 + t3047;
  t3050 = t2370*t3048;
  t3052 = -1.*t2391*t2296*t2379;
  t3053 = t3050 + t3052;
  t3065 = -1.*t2417*t2452*t3053;
  t3066 = -1.*t2446*t3053*t2429;
  t3067 = t3065 + t3066;
  t3069 = t2446*t2417*t3053;
  t3070 = -1.*t2452*t3053*t2429;
  t3071 = t3069 + t3070;
  t3083 = t2391*t2239*t2318;
  t3085 = t2391*t2292*t2338;
  t3086 = t3083 + t3085;
  t3088 = t2370*t3086;
  t3089 = t2315*t2379;
  t3090 = t3088 + t3089;
  t3099 = -1.*t2417*t2452*t3090;
  t3100 = -1.*t2446*t3090*t2429;
  t3101 = t3099 + t3100;
  t3103 = t2446*t2417*t3090;
  t3104 = -1.*t2452*t3090*t2429;
  t3105 = t3103 + t3104;
  t3123 = -1.*t2417*t2542;
  t3124 = -1.*t2546*t2429;
  t3125 = t3123 + t3124;
  t3128 = t2452*t3125;
  t3129 = t3128 + t2557;
  t3131 = t2446*t3125;
  t3132 = -1.*t2452*t2554;
  t3133 = t3131 + t3132;
  t3116 = 0.049*t2417;
  t3117 = t3116 + t2431;
  t3119 = -0.09*t2417;
  t3120 = -0.049*t2429;
  t3121 = t3119 + t3120;
  t3145 = t2391*t2370*t2296;
  t3146 = t3048*t2379;
  t3147 = t3145 + t3146;
  t3149 = -1.*t2417*t3147;
  t3150 = -1.*t2957*t2429;
  t3151 = t3149 + t3150;
  t3153 = t2417*t2957;
  t3154 = -1.*t3147*t2429;
  t3155 = t3153 + t3154;
  t3157 = t2452*t3151;
  t3158 = t2446*t3155;
  t3159 = t3157 + t3158;
  t3161 = t2446*t3151;
  t3162 = -1.*t2452*t3155;
  t3163 = t3161 + t3162;
  t3175 = -1.*t2370*t2315;
  t3176 = t3086*t2379;
  t3177 = t3175 + t3176;
  t3179 = -1.*t2417*t3177;
  t3180 = -1.*t2863*t2429;
  t3181 = t3179 + t3180;
  t3183 = t2417*t2863;
  t3184 = -1.*t3177*t2429;
  t3185 = t3183 + t3184;
  t3187 = t2452*t3181;
  t3188 = t2446*t3185;
  t3189 = t3187 + t3188;
  t3191 = t2446*t3181;
  t3192 = -1.*t2452*t3185;
  t3193 = t3191 + t3192;
  t3212 = -1.*t2446*t2550;
  t3213 = t3212 + t3132;
  t2571 = t2478*t2558;
  t3204 = -0.21*t2446;
  t3205 = -0.049*t2452;
  t3206 = t3204 + t3205;
  t3208 = 0.049*t2446;
  t3209 = t3208 + t2453;
  t3223 = t2417*t3147;
  t3224 = t2957*t2429;
  t3225 = t3223 + t3224;
  t3228 = -1.*t2452*t3225;
  t3229 = t3228 + t3158;
  t3231 = -1.*t2446*t3225;
  t3232 = t3231 + t3162;
  t3243 = t2417*t3177;
  t3244 = t2863*t2429;
  t3245 = t3243 + t3244;
  t3248 = -1.*t2452*t3245;
  t3249 = t3248 + t3188;
  t3251 = -1.*t2446*t3245;
  t3252 = t3251 + t3192;
  t3215 = -1.*t2486*t2558;
  t2573 = -1.*t2486*t2563;
  t2574 = t2571 + t2573;
  t3263 = 0.0016*t2478;
  t3264 = t3263 + t2499;
  t3266 = -0.2707*t2478;
  t3267 = -0.0016*t2486;
  t3268 = t3266 + t3267;
  t3234 = -1.*t2486*t3229;
  t3276 = t2446*t3225;
  t3277 = t2452*t3155;
  t3278 = t3276 + t3277;
  t3238 = t2478*t3229;
  t3254 = -1.*t2486*t3249;
  t3288 = t2446*t3245;
  t3289 = t2452*t3185;
  t3290 = t3288 + t3289;
  t3258 = t2478*t3249;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2289*t2323 + t2337*t2342 + t2367*t2384 + 0.1305*(t2367*t2370 + t2296*t2379*t2391) - 1.*t2296*t2391*t2394 + t2415*t2433 + t2440*t2444 + t2454*t2458 + t2467*t2472 + t2491*t2495 + t2500*t2504 - 0.0016*(t2486*t2495 + t2478*t2504) - 0.2707*(t2478*t2495 - 1.*t2486*t2504);
  p_output1[10]=t2291*t2391*t2394 + t2289*t2517 + t2342*t2524 + t2384*t2529 + 0.1305*t2537 + t2433*t2542 + t2444*t2546 + t2454*t2550 + t2467*t2554 + t2491*t2558 + t2500*t2563 - 0.0016*(t2486*t2558 + t2478*t2563) - 0.2707*t2574;
  p_output1[11]=0;
  p_output1[12]=t2289*t2291*t2318*t2391 + t2291*t2292*t2342*t2391 - 1.*t2291*t2315*t2394 + t2384*t2585 + 0.1305*(t2291*t2315*t2379 + t2370*t2585) + t2433*t2594 + t2444*t2600 + t2454*t2604 + t2467*t2611 + t2491*t2615 + t2500*t2621 - 0.0016*(t2486*t2615 + t2478*t2621) - 0.2707*(t2478*t2615 - 1.*t2486*t2621);
  p_output1[13]=t2289*t2296*t2318*t2391 + t2292*t2296*t2342*t2391 - 1.*t2296*t2315*t2394 + t2384*t2639 + 0.1305*(t2296*t2315*t2379 + t2370*t2639) + t2433*t2651 + t2444*t2656 + t2454*t2662 + t2467*t2668 + t2491*t2672 + t2500*t2676 - 0.0016*(t2486*t2672 + t2478*t2676) - 0.2707*(t2478*t2672 - 1.*t2486*t2676);
  p_output1[14]=-1.*t2289*t2315*t2318 - 1.*t2292*t2315*t2342 - 1.*t2391*t2394 + t2384*t2696 + 0.1305*(t2379*t2391 + t2370*t2696) + t2433*t2709 + t2444*t2713 + t2454*t2717 + t2467*t2729 + t2491*t2738 + t2500*t2745 - 0.0016*(t2486*t2738 + t2478*t2745) - 0.2707*(t2478*t2738 - 1.*t2486*t2745);
  p_output1[15]=t2289*t2524 + t2342*t2763 + 0.1305*t2370*t2768 + t2384*t2768 + t2379*t2433*t2768 + t2444*t2777 + t2454*t2781 + t2467*t2785 + t2491*t2789 + t2500*t2796 - 0.0016*(t2486*t2789 + t2478*t2796) - 0.2707*(t2478*t2789 - 1.*t2486*t2796);
  p_output1[16]=t2323*t2342 + t2289*t2815 + 0.1305*t2370*t2820 + t2384*t2820 + t2379*t2433*t2820 + t2444*t2825 + t2454*t2829 + t2467*t2834 + t2491*t2838 + t2500*t2845 - 0.0016*(t2486*t2838 + t2478*t2845) - 0.2707*(t2478*t2838 - 1.*t2486*t2845);
  p_output1[17]=t2289*t2292*t2391 - 1.*t2318*t2342*t2391 + t2864 + t2867 + t2868 + t2872 + t2881 + t2885 + t2889 + t2894 + t2899 + t2903;
  p_output1[18]=0.135*t2338*t2517 - 0.135*t2239*t2524 + 0.1305*t2370*t2546 + t2384*t2546 + t2379*t2433*t2546 + t2444*t2916 + t2454*t2920 + t2467*t2924 + t2491*t2928 + t2500*t2934 - 0.0016*(t2486*t2928 + t2478*t2934) - 0.2707*(t2478*t2928 - 1.*t2486*t2934);
  p_output1[19]=-0.135*t2239*t2815 + 0.135*t2338*t2951 + 0.1305*t2370*t2957 + t2384*t2957 + t2379*t2433*t2957 + t2444*t2964 + t2454*t2971 + t2467*t2975 + t2491*t2979 + t2500*t2987 - 0.0016*(t2486*t2979 + t2478*t2987) - 0.2707*(t2478*t2979 - 1.*t2486*t2987);
  p_output1[20]=-0.135*t2239*t2292*t2391 + 0.135*t2318*t2338*t2391 + t2864 + t2867 + t2868 + t2872 + t2881 + t2885 + t2889 + t2894 + t2899 + t2903;
  p_output1[21]=0.1305*(-1.*t2291*t2370*t2391 - 1.*t2379*t2529) + t2433*t2537 + t2417*t2454*t2537 - 1.*t2429*t2467*t2537 + t2291*t2391*t3008 + t2529*t3011 + t2491*t3024 + t2500*t3028 - 0.0016*(t2486*t3024 + t2478*t3028) - 0.2707*(t2478*t3024 - 1.*t2486*t3028);
  p_output1[22]=t2296*t2391*t3008 + t3011*t3048 + 0.1305*(t2406 - 1.*t2379*t3048) + t2433*t3053 + t2417*t2454*t3053 - 1.*t2429*t2467*t3053 + t2491*t3067 + t2500*t3071 - 0.0016*(t2486*t3067 + t2478*t3071) - 0.2707*(t2478*t3067 - 1.*t2486*t3071);
  p_output1[23]=-1.*t2315*t3008 + t3011*t3086 + 0.1305*(t2315*t2370 - 1.*t2379*t3086) + t2433*t3090 + t2417*t2454*t3090 - 1.*t2429*t2467*t3090 + t2491*t3101 + t2500*t3105 - 0.0016*(t2486*t3101 + t2478*t3105) - 0.2707*(t2478*t3101 - 1.*t2486*t3105);
  p_output1[24]=t2454*t2554 + t2546*t3117 + t2542*t3121 + t2467*t3125 + t2500*t3129 + t2491*t3133 - 0.2707*(-1.*t2486*t3129 + t2478*t3133) - 0.0016*(t2478*t3129 + t2486*t3133);
  p_output1[25]=t2957*t3117 + t3121*t3147 + t2467*t3151 + t2454*t3155 + t2500*t3159 + t2491*t3163 - 0.2707*(-1.*t2486*t3159 + t2478*t3163) - 0.0016*(t2478*t3159 + t2486*t3163);
  p_output1[26]=t2863*t3117 + t3121*t3177 + t2467*t3181 + t2454*t3185 + t2500*t3189 + t2491*t3193 - 0.2707*(-1.*t2486*t3189 + t2478*t3193) - 0.0016*(t2478*t3189 + t2486*t3193);
  p_output1[27]=t2500*t2558 + t2550*t3206 + t2554*t3209 + t2491*t3213 - 0.0016*(t2571 + t2486*t3213) - 0.2707*(t2478*t3213 + t3215);
  p_output1[28]=t3155*t3209 + t3206*t3225 + t2500*t3229 + t2491*t3232 - 0.2707*(t2478*t3232 + t3234) - 0.0016*(t2486*t3232 + t3238);
  p_output1[29]=t3185*t3209 + t3206*t3245 + t2500*t3249 + t2491*t3252 - 0.2707*(t2478*t3252 + t3254) - 0.0016*(t2486*t3252 + t3258);
  p_output1[30]=-0.0016*t2574 - 0.2707*(-1.*t2478*t2563 + t3215) + t2558*t3264 + t2563*t3268;
  p_output1[31]=t3229*t3264 + t3268*t3278 - 0.2707*(t3234 - 1.*t2478*t3278) - 0.0016*(t3238 - 1.*t2486*t3278);
  p_output1[32]=t3249*t3264 + t3268*t3290 - 0.2707*(t3254 - 1.*t2478*t3290) - 0.0016*(t3258 - 1.*t2486*t3290);
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
