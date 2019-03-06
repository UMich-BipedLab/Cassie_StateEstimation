function [m,p,J] = generatedCenterOfMassKinematics(in1,in2)
%GENERATEDCENTEROFMASSKINEMATICS
%    [M,P,J] = GENERATEDCENTEROFMASSKINEMATICS(IN1,IN2)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    27-Feb-2018 01:04:11

q_j1 = in2(1,:);
q_j2 = in2(2,:);
q_j3 = in2(3,:);
q_j4 = in2(4,:);
q_m1 = in1(1,:);
q_m2 = in1(2,:);
q_m3 = in1(3,:);
q_m4 = in1(4,:);
q_m5 = in1(5,:);
q_m6 = in1(6,:);
q_m7 = in1(7,:);
q_m8 = in1(8,:);
q_m9 = in1(9,:);
q_m10 = in1(10,:);
m = 3.276139999999999e1;
if nargout > 1
    t2 = cos(q_m2);
    t3 = cos(q_m7);
    t4 = q_j1+q_m3+q_m4;
    t5 = cos(t4);
    t6 = cos(q_j2);
    t7 = q_j3+q_m8+q_m9;
    t8 = cos(t7);
    t9 = cos(q_j4);
    t10 = sin(t4);
    t11 = sin(q_j2);
    t12 = sin(t7);
    t13 = sin(q_j4);
    t14 = q_j1+q_j2+q_m3+q_m4;
    t15 = cos(t14);
    t16 = cos(q_m5);
    t17 = q_j3+q_j4+q_m8+q_m9;
    t18 = cos(t17);
    t19 = cos(q_m10);
    t20 = sin(t14);
    t21 = sin(q_m5);
    t22 = sin(t17);
    t23 = sin(q_m10);
    t24 = q_m3+q_m4;
    t25 = cos(t24);
    t26 = cos(q_j1);
    t27 = q_m8+q_m9;
    t28 = cos(t27);
    t29 = cos(q_j3);
    t30 = sin(t24);
    t31 = sin(q_j1);
    t32 = sin(t27);
    t33 = sin(q_j3);
    t34 = cos(q_m3);
    t35 = cos(q_m8);
    t36 = cos(q_m4);
    t37 = sin(q_m3);
    t38 = cos(q_m9);
    t39 = sin(q_m8);
    t40 = sin(q_m4);
    t41 = sin(q_m9);
    t42 = sin(q_m1);
    t43 = cos(q_m1);
    t44 = sin(q_m2);
    t45 = t34.*t42;
    t46 = t37.*t43.*t44;
    t47 = t45+t46;
    t48 = t37.*t42;
    t59 = t34.*t43.*t44;
    t49 = t48-t59;
    t50 = sin(q_m6);
    t51 = cos(q_m6);
    t52 = sin(q_m7);
    t53 = t35.*t50;
    t54 = t39.*t51.*t52;
    t55 = t53+t54;
    t56 = t39.*t50;
    t66 = t35.*t51.*t52;
    t57 = t56-t66;
    t58 = t36.*t47;
    t64 = t40.*t49;
    t60 = t58-t64;
    t61 = t36.*t49;
    t62 = t40.*t47;
    t63 = t61+t62;
    t65 = t38.*t55;
    t71 = t41.*t57;
    t67 = t65-t71;
    t68 = t38.*t57;
    t69 = t41.*t55;
    t70 = t68+t69;
    t72 = t31.*t60;
    t73 = t26.*t63;
    t74 = t72+t73;
    t75 = t26.*t60;
    t76 = t33.*t67;
    t77 = t29.*t70;
    t78 = t76+t77;
    t79 = t29.*t67;
    t81 = t31.*t63;
    t80 = t75-t81;
    t83 = t33.*t70;
    t82 = t79-t83;
    t84 = t11.*t74;
    t186 = t6.*t80;
    t85 = t84-t186;
    t86 = t6.*t74;
    t87 = t11.*t80;
    t88 = t86+t87;
    t89 = t9.*t82;
    t210 = t13.*t78;
    t90 = t89-t210;
    t91 = t9.*t78;
    t92 = t13.*t82;
    t93 = t91+t92;
    t94 = t34.*t43;
    t104 = t37.*t42.*t44;
    t95 = t94-t104;
    t96 = t37.*t43;
    t97 = t34.*t42.*t44;
    t98 = t96+t97;
    t99 = t35.*t51;
    t111 = t39.*t50.*t52;
    t100 = t99-t111;
    t101 = t39.*t51;
    t102 = t35.*t50.*t52;
    t103 = t101+t102;
    t105 = t36.*t95;
    t110 = t40.*t98;
    t106 = t105-t110;
    t107 = t36.*t98;
    t108 = t40.*t95;
    t109 = t107+t108;
    t112 = t38.*t100;
    t117 = t41.*t103;
    t113 = t112-t117;
    t114 = t38.*t103;
    t115 = t41.*t100;
    t116 = t114+t115;
    t118 = t31.*t106;
    t119 = t26.*t109;
    t120 = t118+t119;
    t121 = t26.*t106;
    t128 = t31.*t109;
    t122 = t121-t128;
    t123 = t33.*t113;
    t124 = t29.*t116;
    t125 = t123+t124;
    t126 = t29.*t113;
    t129 = t33.*t116;
    t127 = t126-t129;
    t130 = t6.*t122;
    t131 = t6.*t120;
    t132 = t11.*(t121-t128);
    t133 = t131+t132;
    t134 = t9.*t127;
    t135 = t9.*t125;
    t136 = t13.*(t126-t129);
    t137 = t135+t136;
    t138 = 1.953196799252965e8;
    t139 = atan(8.188864485116594e-1);
    t140 = q_m3+q_m4+t139;
    t141 = cos(t140);
    t142 = t138.*t141.*7.205759403792794e16;
    t143 = 4.474778746755721e25;
    t144 = atan(3.924516537853098e-2);
    t145 = q_j1+q_m3+q_m4+t144;
    t146 = cos(t145);
    t147 = t143.*t146;
    t148 = 3.327844897891137e22;
    t149 = atan(2.373764912543776e-1);
    t150 = q_j1+q_j2+q_m3+q_m4-t149;
    t151 = cos(t150);
    t152 = t148.*t151.*3.2e2;
    t153 = 4.328956763967619e6;
    t154 = atan(3.233106564513067e-1);
    t155 = q_j1+q_j2+q_m3+q_m4+q_m5-t154;
    t156 = sin(t155);
    t157 = 2.719930243112863e5;
    t158 = atan(4.228049986580537e-4);
    t159 = q_m8+q_m9+t139;
    t160 = cos(t159);
    t161 = t138.*t160.*7.205759403792794e16;
    t162 = q_j3+q_m8+q_m9+t144;
    t163 = cos(t162);
    t164 = t143.*t163;
    t165 = q_j3+q_j4+q_m8+q_m9-t149;
    t166 = cos(t165);
    t167 = t148.*t166.*3.2e2;
    t168 = q_j3+q_j4+q_m8+q_m9+q_m10-t154;
    t169 = sin(t168);
    t170 = t42.*5.555318148797061e-6;
    t171 = t31.*t109.*1.894066260904601e-2;
    t172 = t31.*t106.*7.43329436470969e-4;
    t173 = t2.*t42.*5.646657728697054e-3;
    t174 = t37.*t43.*8.424548401472466e-6;
    t175 = t11.*t120.*4.389018596064809e-3;
    t176 = t36.*t98.*3.777237083885305e-3;
    t177 = t40.*t98.*4.612650619326403e-3;
    t178 = t40.*t95.*3.777237083885305e-3;
    t179 = t16.*t133.*1.257280213910273e-4;
    t242 = t11.*t120;
    t180 = t130-t242;
    t181 = t21.*t180.*1.257280213910273e-4;
    t182 = t21.*t133.*4.064920913025696e-5;
    t183 = t26.*t109.*7.43329436470969e-4;
    t184 = t37.*t42.*t44.*1.992537559444957e-2;
    t185 = t34.*t42.*t44.*8.424548401472466e-6;
    t187 = t31.*t63.*7.43329436470969e-4;
    t188 = t6.*(t75-t81).*1.041849834384079e-3;
    t189 = t40.*t49.*3.777237083885305e-3;
    t190 = t16.*t85.*1.257280213910273e-4;
    t191 = t11.*(t75-t81);
    t192 = t86+t191;
    t193 = t21.*t85.*4.064920913025696e-5;
    t194 = t21.*t192.*1.257280213910273e-4;
    t195 = t50.*5.555318148797061e-6;
    t196 = t33.*t116.*1.894066260904601e-2;
    t197 = t33.*t113.*7.43329436470969e-4;
    t198 = t39.*t51.*8.424548401472466e-6;
    t199 = t13.*t125.*4.389018596064809e-3;
    t200 = t38.*t103.*3.777237083885305e-3;
    t201 = t41.*t103.*4.612650619326403e-3;
    t202 = t41.*t100.*3.777237083885305e-3;
    t203 = t19.*t137.*1.257280213910273e-4;
    t279 = t13.*t125;
    t204 = t134-t279;
    t205 = t23.*t204.*1.257280213910273e-4;
    t206 = t23.*t137.*4.064920913025696e-5;
    t207 = t29.*t116.*7.43329436470969e-4;
    t208 = t39.*t50.*t52.*1.992537559444957e-2;
    t209 = t35.*t50.*t52.*8.424548401472466e-6;
    t211 = t33.*t70.*7.43329436470969e-4;
    t212 = t9.*(t79-t83).*1.041849834384079e-3;
    t213 = t41.*t57.*3.777237083885305e-3;
    t214 = t13.*(t79-t83);
    t215 = t91+t214;
    t216 = t23.*t215.*1.257280213910273e-4;
    t217 = t43.*5.555318148797061e-6;
    t218 = t42.*2.282346807523488e-2;
    t219 = t2.*t43.*5.646657728697054e-3;
    t220 = t34.*t42.*1.992537559444957e-2;
    t221 = t6.*t74.*1.041849834384079e-3;
    t222 = t36.*t47.*4.612650619326403e-3;
    t223 = t21.*t85.*1.257280213910273e-4;
    t224 = t26.*t60.*1.894066260904601e-2;
    t225 = t34.*t43.*t44.*8.424548401472466e-6;
    t226 = t37.*t43.*t44.*1.992537559444957e-2;
    t227 = t2.*t34.*1.591031676357449e23;
    t228 = t2.*t37.*3.763038945630362e26;
    t229 = t2.*t5.*t11.*8.288951860304453e25;
    t230 = t2.*t6.*t10.*8.288951860304453e25;
    t231 = t2.*t10.*t11.*1.967602308775517e25;
    t232 = t2.*t15.*t16.*2.374456826717361e24;
    t233 = t2.*t15.*t21.*7.676871953612766e23;
    t234 = t2.*t16.*t20.*7.676871953612766e23;
    t235 = t2.*t25.*t26.*1.40382679644589e25;
    t236 = t2.*t25.*t31.*3.577069386523344e26;
    t237 = t2.*t26.*t30.*3.577069386523344e26;
    t238 = t2.*t34.*t36.*7.133562018022432e25;
    t239 = t2.*t34.*t40.*8.71129572480752e25;
    t240 = t2.*t36.*t37.*8.71129572480752e25;
    t241 = t44.*-1.066408652876321e26+t227+t228+t229+t230+t231+t232+t233+t234+t235+t236+t237+t238+t239+t240-t2.*t5.*t6.*1.967602308775517e25-t2.*t20.*t21.*2.374456826717361e24-t2.*t30.*t31.*1.40382679644589e25-t2.*t37.*t40.*7.133562018022432e25;
    t243 = t31.*t106.*1.894066260904601e-2;
    t244 = t6.*t120.*4.389018596064809e-3;
    t245 = t11.*t120.*1.041849834384079e-3;
    t246 = t11.*(t121-t128).*4.389018596064809e-3;
    t247 = t36.*t98.*4.612650619326403e-3;
    t248 = t36.*t95.*3.777237083885305e-3;
    t249 = t40.*t95.*4.612650619326403e-3;
    t250 = t16.*(t130-t242).*1.257280213910273e-4;
    t251 = t16.*t133.*4.064920913025696e-5;
    t252 = t21.*(t130-t242).*4.064920913025696e-5;
    t253 = t26.*t109.*1.894066260904601e-2;
    t254 = t26.*t106.*7.43329436470969e-4;
    t255 = t51.*5.555318148797061e-6;
    t256 = t50.*2.282346807523488e-2;
    t257 = t35.*t50.*1.992537559444957e-2;
    t258 = t9.*t78.*1.041849834384079e-3;
    t259 = t38.*t55.*4.612650619326403e-3;
    t260 = t29.*t67.*1.894066260904601e-2;
    t261 = t35.*t51.*t52.*8.424548401472466e-6;
    t262 = t39.*t51.*t52.*1.992537559444957e-2;
    p = [t44.*(-5.646657728697054e-3)+t52.*5.646657728697054e-3+t2.*t34.*8.424548401472466e-6+t3.*t35.*8.424548401472466e-6+t2.*t37.*1.992537559444957e-2+t3.*t39.*1.992537559444957e-2-t2.*t5.*t6.*1.041849834384079e-3+t2.*t5.*t11.*4.389018596064809e-3+t2.*t6.*t10.*4.389018596064809e-3-t3.*t8.*t9.*1.041849834384079e-3+t2.*t10.*t11.*1.041849834384079e-3+t3.*t8.*t13.*4.389018596064809e-3+t3.*t9.*t12.*4.389018596064809e-3+t3.*t12.*t13.*1.041849834384079e-3+t2.*t15.*t16.*1.257280213910273e-4+t2.*t15.*t21.*4.064920913025696e-5+t2.*t16.*t20.*4.064920913025696e-5+t3.*t18.*t19.*1.257280213910273e-4-t2.*t20.*t21.*1.257280213910273e-4+t3.*t18.*t23.*4.064920913025696e-5+t3.*t19.*t22.*4.064920913025696e-5-t3.*t22.*t23.*1.257280213910273e-4+t2.*t25.*t26.*7.43329436470969e-4+t2.*t25.*t31.*1.894066260904601e-2+t2.*t26.*t30.*1.894066260904601e-2+t3.*t28.*t29.*7.43329436470969e-4-t2.*t30.*t31.*7.43329436470969e-4+t3.*t28.*t33.*1.894066260904601e-2+t3.*t29.*t32.*1.894066260904601e-2-t3.*t32.*t33.*7.43329436470969e-4+t2.*t34.*t36.*3.777237083885305e-3+t2.*t36.*t37.*4.612650619326403e-3+t2.*t34.*t40.*4.612650619326403e-3+t3.*t35.*t38.*3.777237083885305e-3-t2.*t37.*t40.*3.777237083885305e-3+t3.*t35.*t41.*4.612650619326403e-3+t3.*t38.*t39.*4.612650619326403e-3-t3.*t39.*t41.*3.777237083885305e-3-1.471854072170298e-2;t217+t218+t219+t220+t221+t222+t223+t224+t225+t226+t255+t256+t257+t258+t259+t260+t261+t262-t3.*t51.*5.646657728697054e-3-t37.*t42.*8.424548401472466e-6-t11.*t74.*4.389018596064809e-3-t36.*t49.*3.777237083885305e-3+t6.*t80.*4.389018596064809e-3-t40.*t47.*3.777237083885305e-3-t26.*t63.*7.43329436470969e-4-t39.*t50.*8.424548401472466e-6-t40.*t49.*4.612650619326403e-3+t9.*t82.*4.389018596064809e-3+t11.*t80.*1.041849834384079e-3-t13.*t78.*4.389018596064809e-3-t31.*t60.*7.43329436470969e-4-t31.*t63.*1.894066260904601e-2+t13.*t82.*1.041849834384079e-3-t38.*t57.*3.777237083885305e-3-t41.*t55.*3.777237083885305e-3-t41.*t57.*4.612650619326403e-3-t29.*t70.*7.43329436470969e-4-t33.*t67.*7.43329436470969e-4-t16.*t85.*4.064920913025696e-5-t33.*t70.*1.894066260904601e-2-t16.*t88.*1.257280213910273e-4+t19.*t90.*4.064920913025696e-5-t21.*t88.*4.064920913025696e-5-t19.*t93.*1.257280213910273e-4-t23.*t90.*1.257280213910273e-4-t23.*t93.*4.064920913025696e-5+1.090972913245466e-4;t43.*(-2.282346807523488e-2)-t51.*2.282346807523488e-2+t170+t171+t172+t173+t174+t175+t176+t177+t178+t179+t181+t182+t183+t184+t185+t195+t196+t197+t198+t199+t200+t201+t202+t203+t205+t206+t207+t208+t209-t3.*t50.*5.646657728697054e-3-t34.*t43.*1.992537559444957e-2-t35.*t51.*1.992537559444957e-2-t6.*t120.*1.041849834384079e-3-t6.*t122.*4.389018596064809e-3-t36.*t95.*4.612650619326403e-3-t26.*t106.*1.894066260904601e-2-t11.*t122.*1.041849834384079e-3-t9.*t125.*1.041849834384079e-3-t9.*t127.*4.389018596064809e-3-t38.*t100.*4.612650619326403e-3-t13.*t127.*1.041849834384079e-3-t29.*t113.*1.894066260904601e-2-t16.*t180.*4.064920913025696e-5-t19.*t204.*4.064920913025696e-5+8.957959672053088e-3];
end
if nargout > 2
    t263 = t52.*1.066408652876321e26;
    t264 = t3.*t35.*1.591031676357449e23;
    t265 = t3.*t39.*3.763038945630362e26;
    t266 = t3.*t8.*t13.*8.288951860304453e25;
    t267 = t3.*t9.*t12.*8.288951860304453e25;
    t268 = t3.*t12.*t13.*1.967602308775517e25;
    t269 = t3.*t18.*t19.*2.374456826717361e24;
    t270 = t3.*t18.*t23.*7.676871953612766e23;
    t271 = t3.*t19.*t22.*7.676871953612766e23;
    t272 = t3.*t28.*t29.*1.40382679644589e25;
    t273 = t3.*t28.*t33.*3.577069386523344e26;
    t274 = t3.*t29.*t32.*3.577069386523344e26;
    t275 = t3.*t35.*t38.*7.133562018022432e25;
    t276 = t3.*t35.*t41.*8.71129572480752e25;
    t277 = t3.*t38.*t39.*8.71129572480752e25;
    t278 = t263+t264+t265+t266+t267+t268+t269+t270+t271+t272+t273+t274+t275+t276+t277-t3.*t8.*t9.*1.967602308775517e25-t3.*t22.*t23.*2.374456826717361e24-t3.*t32.*t33.*1.40382679644589e25-t3.*t39.*t41.*7.133562018022432e25;
    t280 = t33.*t113.*1.894066260904601e-2;
    t281 = t9.*t125.*4.389018596064809e-3;
    t282 = t13.*t125.*1.041849834384079e-3;
    t283 = t13.*(t126-t129).*4.389018596064809e-3;
    t284 = t38.*t103.*4.612650619326403e-3;
    t285 = t38.*t100.*3.777237083885305e-3;
    t286 = t41.*t100.*4.612650619326403e-3;
    t287 = t19.*(t134-t279).*1.257280213910273e-4;
    t288 = t19.*t137.*4.064920913025696e-5;
    t289 = t23.*(t134-t279).*4.064920913025696e-5;
    t290 = t29.*t116.*1.894066260904601e-2;
    t291 = t29.*t113.*7.43329436470969e-4;
    J = reshape([0.0,t43.*2.282346807523488e-2-t170-t171-t172-t173-t174-t175-t176-t177-t178-t179-t181-t182-t183-t184-t185+t34.*t43.*1.992537559444957e-2+t6.*t120.*1.041849834384079e-3+t36.*t95.*4.612650619326403e-3+t26.*t106.*1.894066260904601e-2+t16.*t180.*4.064920913025696e-5+t6.*(t121-t128).*4.389018596064809e-3+t11.*(t121-t128).*1.041849834384079e-3,t217+t218+t219+t220+t221+t222+t223+t224+t225+t226-t37.*t42.*8.424548401472466e-6-t11.*t74.*4.389018596064809e-3-t36.*t49.*3.777237083885305e-3-t40.*t47.*3.777237083885305e-3-t26.*t63.*7.43329436470969e-4-t40.*t49.*4.612650619326403e-3-t31.*t60.*7.43329436470969e-4-t31.*t63.*1.894066260904601e-2-t16.*t85.*4.064920913025696e-5-t16.*t192.*1.257280213910273e-4-t21.*t192.*4.064920913025696e-5+t6.*(t75-t81).*4.389018596064809e-3+t11.*(t75-t81).*1.041849834384079e-3,t2.*(-5.646657728697054e-3)-t34.*t44.*8.424548401472466e-6-t37.*t44.*1.992537559444957e-2+t5.*t6.*t44.*1.041849834384079e-3-t5.*t11.*t44.*4.389018596064809e-3-t6.*t10.*t44.*4.389018596064809e-3-t10.*t11.*t44.*1.041849834384079e-3-t15.*t16.*t44.*1.257280213910273e-4-t15.*t21.*t44.*4.064920913025696e-5-t16.*t20.*t44.*4.064920913025696e-5+t20.*t21.*t44.*1.257280213910273e-4-t25.*t26.*t44.*7.43329436470969e-4-t25.*t31.*t44.*1.894066260904601e-2-t26.*t30.*t44.*1.894066260904601e-2+t30.*t31.*t44.*7.43329436470969e-4-t34.*t36.*t44.*3.777237083885305e-3-t36.*t37.*t44.*4.612650619326403e-3-t34.*t40.*t44.*4.612650619326403e-3+t37.*t40.*t44.*3.777237083885305e-3,t43.*t241.*5.295022422658395e-29,t42.*t241.*5.295022422658395e-29,t2.*(t142+t147+t152-t153.*t156.*7.205759403792794e16+t157.*cos(q_m3+t158).*1.72938225691027e20).*4.236017938126716e-28,t187+t188+t189+t190+t193+t194-t34.*t42.*8.424548401472466e-6-t37.*t42.*1.992537559444957e-2-t6.*t74.*4.389018596064809e-3-t36.*t47.*3.777237083885305e-3-t11.*t74.*1.041849834384079e-3-t36.*t49.*4.612650619326403e-3-t26.*t60.*7.43329436470969e-4-t40.*t47.*4.612650619326403e-3-t26.*t63.*1.894066260904601e-2-t11.*t80.*4.389018596064809e-3-t31.*t60.*1.894066260904601e-2-t16.*t88.*4.064920913025696e-5+t34.*t43.*t44.*1.992537559444957e-2-t37.*t43.*t44.*8.424548401472466e-6,t243+t244+t245+t246+t247+t248+t249+t250+t251+t252+t253+t254+t34.*t43.*8.424548401472466e-6+t37.*t43.*1.992537559444957e-2-t6.*t122.*1.041849834384079e-3-t40.*t98.*3.777237083885305e-3-t31.*t109.*7.43329436470969e-4-t21.*t133.*1.257280213910273e-4+t34.*t42.*t44.*1.992537559444957e-2-t37.*t42.*t44.*8.424548401472466e-6,t2.*(t142+t147+t152-t153.*t156.*7.205759403792794e16).*4.236017938126716e-28,t187+t188+t189+t190+t193+t194-t6.*t74.*4.389018596064809e-3-t36.*t47.*3.777237083885305e-3-t11.*t74.*1.041849834384079e-3-t36.*t49.*4.612650619326403e-3-t26.*t60.*7.43329436470969e-4-t40.*t47.*4.612650619326403e-3-t26.*t63.*1.894066260904601e-2-t11.*t80.*4.389018596064809e-3-t31.*t60.*1.894066260904601e-2-t16.*t192.*4.064920913025696e-5,t243+t244+t245+t246+t247+t248+t249+t250+t251+t252+t253+t254-t6.*t122.*1.041849834384079e-3-t40.*t98.*3.777237083885305e-3-t31.*t109.*7.43329436470969e-4-t21.*t133.*1.257280213910273e-4,t2.*t153.*t156.*(-3.052372609229154e-11),t190+t193+t194-t16.*t192.*4.064920913025696e-5,t250+t251+t252-t21.*t133.*1.257280213910273e-4,0.0,t51.*2.282346807523488e-2-t195-t196-t197-t198-t199-t200-t201-t202-t203-t205-t206-t207-t208-t209+t3.*t50.*5.646657728697054e-3+t35.*t51.*1.992537559444957e-2+t9.*t125.*1.041849834384079e-3+t38.*t100.*4.612650619326403e-3+t29.*t113.*1.894066260904601e-2+t19.*t204.*4.064920913025696e-5+t9.*(t126-t129).*4.389018596064809e-3+t13.*(t126-t129).*1.041849834384079e-3,t255+t256+t257+t258+t259+t260+t261+t262-t3.*t51.*5.646657728697054e-3-t39.*t50.*8.424548401472466e-6-t13.*t78.*4.389018596064809e-3-t38.*t57.*3.777237083885305e-3-t41.*t55.*3.777237083885305e-3-t41.*t57.*4.612650619326403e-3-t29.*t70.*7.43329436470969e-4-t33.*t67.*7.43329436470969e-4-t33.*t70.*1.894066260904601e-2-t23.*t90.*1.257280213910273e-4-t19.*t215.*1.257280213910273e-4-t23.*t215.*4.064920913025696e-5+t9.*(t79-t83).*4.389018596064809e-3+t13.*(t79-t83).*1.041849834384079e-3+t19.*(t89-t210).*4.064920913025696e-5,t3.*5.646657728697054e-3-t35.*t52.*8.424548401472466e-6-t39.*t52.*1.992537559444957e-2+t8.*t9.*t52.*1.041849834384079e-3-t8.*t13.*t52.*4.389018596064809e-3-t9.*t12.*t52.*4.389018596064809e-3-t12.*t13.*t52.*1.041849834384079e-3-t18.*t19.*t52.*1.257280213910273e-4-t18.*t23.*t52.*4.064920913025696e-5-t19.*t22.*t52.*4.064920913025696e-5+t22.*t23.*t52.*1.257280213910273e-4-t28.*t29.*t52.*7.43329436470969e-4-t28.*t33.*t52.*1.894066260904601e-2-t29.*t32.*t52.*1.894066260904601e-2+t32.*t33.*t52.*7.43329436470969e-4-t35.*t38.*t52.*3.777237083885305e-3-t35.*t41.*t52.*4.612650619326403e-3-t38.*t39.*t52.*4.612650619326403e-3+t39.*t41.*t52.*3.777237083885305e-3,t51.*t278.*5.295022422658395e-29,t50.*t278.*5.295022422658395e-29,t3.*(t161+t164+t167-t153.*t169.*7.205759403792794e16+t157.*cos(q_m8+t158).*1.72938225691027e20).*4.236017938126716e-28,t211+t212+t213+t216-t35.*t50.*8.424548401472466e-6-t9.*t78.*4.389018596064809e-3-t39.*t50.*1.992537559444957e-2-t13.*t78.*1.041849834384079e-3-t38.*t55.*3.777237083885305e-3-t13.*t82.*4.389018596064809e-3-t38.*t57.*4.612650619326403e-3-t29.*t67.*7.43329436470969e-4-t41.*t55.*4.612650619326403e-3-t29.*t70.*1.894066260904601e-2-t33.*t67.*1.894066260904601e-2-t19.*t90.*1.257280213910273e-4-t19.*t93.*4.064920913025696e-5-t23.*t90.*4.064920913025696e-5+t35.*t51.*t52.*1.992537559444957e-2-t39.*t51.*t52.*8.424548401472466e-6,t280+t281+t282+t283+t284+t285+t286+t287+t288+t289+t290+t291+t35.*t51.*8.424548401472466e-6+t39.*t51.*1.992537559444957e-2-t9.*t127.*1.041849834384079e-3-t41.*t103.*3.777237083885305e-3-t33.*t116.*7.43329436470969e-4-t23.*t137.*1.257280213910273e-4+t35.*t50.*t52.*1.992537559444957e-2-t39.*t50.*t52.*8.424548401472466e-6,t3.*(t161+t164+t167-t153.*t169.*7.205759403792794e16).*4.236017938126716e-28,t211+t212+t213+t216-t9.*t78.*4.389018596064809e-3-t13.*t78.*1.041849834384079e-3-t38.*t55.*3.777237083885305e-3-t13.*t82.*4.389018596064809e-3-t38.*t57.*4.612650619326403e-3-t29.*t67.*7.43329436470969e-4-t41.*t55.*4.612650619326403e-3-t29.*t70.*1.894066260904601e-2-t33.*t67.*1.894066260904601e-2-t19.*t90.*1.257280213910273e-4-t23.*t90.*4.064920913025696e-5-t19.*t215.*4.064920913025696e-5,t280+t281+t282+t283+t284+t285+t286+t287+t288+t289+t290+t291-t9.*t127.*1.041849834384079e-3-t41.*t103.*3.777237083885305e-3-t33.*t116.*7.43329436470969e-4-t23.*t137.*1.257280213910273e-4,t3.*t153.*t169.*(-3.052372609229154e-11),t216-t19.*t90.*1.257280213910273e-4-t23.*t90.*4.064920913025696e-5-t19.*t215.*4.064920913025696e-5,t287+t288+t289-t23.*t137.*1.257280213910273e-4,t2.*(t147+t152-t153.*t156.*7.205759403792794e16).*4.236017938126716e-28,t187+t188+t190+t193+t194-t6.*t74.*4.389018596064809e-3-t11.*t74.*1.041849834384079e-3-t26.*t60.*7.43329436470969e-4-t26.*t63.*1.894066260904601e-2-t11.*t80.*4.389018596064809e-3-t31.*t60.*1.894066260904601e-2-t16.*t192.*4.064920913025696e-5,t243+t244+t245+t246+t250+t251+t252+t253+t254-t6.*t122.*1.041849834384079e-3-t31.*t109.*7.43329436470969e-4-t21.*t133.*1.257280213910273e-4,t2.*(t148.*t151.*5.0-t153.*t156.*1.125899906842624e15).*2.711051480401098e-26,t188+t190+t193+t194-t6.*t74.*4.389018596064809e-3-t11.*t74.*1.041849834384079e-3-t11.*t80.*4.389018596064809e-3-t16.*t192.*4.064920913025696e-5,t244+t245+t246+t250+t251+t252-t6.*t122.*1.041849834384079e-3-t21.*t133.*1.257280213910273e-4,t3.*(t164+t167-t153.*t169.*7.205759403792794e16).*4.236017938126716e-28,t211+t212+t216-t9.*t78.*4.389018596064809e-3-t13.*t78.*1.041849834384079e-3-t13.*t82.*4.389018596064809e-3-t29.*t67.*7.43329436470969e-4-t29.*t70.*1.894066260904601e-2-t33.*t67.*1.894066260904601e-2-t19.*t90.*1.257280213910273e-4-t23.*t90.*4.064920913025696e-5-t19.*t215.*4.064920913025696e-5,t280+t281+t282+t283+t287+t288+t289+t290+t291-t9.*t127.*1.041849834384079e-3-t33.*t116.*7.43329436470969e-4-t23.*t137.*1.257280213910273e-4,t3.*(t148.*t166.*5.0-t153.*t169.*1.125899906842624e15).*2.711051480401098e-26,t212+t216-t9.*t78.*4.389018596064809e-3-t13.*t78.*1.041849834384079e-3-t13.*t82.*4.389018596064809e-3-t19.*t90.*1.257280213910273e-4-t23.*t90.*4.064920913025696e-5-t19.*t215.*4.064920913025696e-5,t281+t282+t283+t287+t288+t289-t9.*t127.*1.041849834384079e-3-t23.*t137.*1.257280213910273e-4],[3,14]);
end
