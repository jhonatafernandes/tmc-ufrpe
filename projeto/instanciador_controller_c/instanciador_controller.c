/* --- Generated the 11/11/2019 at 8:47 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c instanciador_controller.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "instanciador_controller.h"

void Instanciador_controller__instanciador_controller_instanciador_ca_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_c_alarm, int instanciador_cg,
  int instanciador_c_gela, int instanciador_cp, int instanciador_c_proj,
  int instanciador_cmp, int instanciador_c_microP, int instanciador_cml,
  int instanciador_c_microL, int instanciador_csl, int instanciador_c_somL,
  int instanciador_csp, int instanciador_c_somP, int instanciador_c_vent,
  int instanciador_cv, int instanciador_cx, int instanciador_c4,
  int instanciador_c3, int instanciador_c2, int instanciador_c1,
  int instanciador_c_lampExt, int instanciador_c4_lamp,
  int instanciador_c3_lamp, int instanciador_c2_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_ca_out* _out) {
  
  int v_364;
  int v_363;
  int v_362;
  int v_361;
  int v_360;
  int v_359;
  int v_358;
  int v_357;
  int v_356;
  int v_355;
  int v_354;
  int v_353;
  int v_352;
  int v_351;
  int v_350;
  int v_349;
  int v_348;
  int v_347;
  int v_346;
  int v_345;
  int v_344;
  int v_343;
  int v_342;
  int v_341;
  int v_340;
  int v_339;
  int v_338;
  int v_337;
  int v_336;
  int v_335;
  int v_334;
  int v_333;
  int v_332;
  int v_331;
  int v_330;
  int v_329;
  int v_328;
  int v_327;
  int v_326;
  int v_325;
  int v_324;
  int v_323;
  int v_322;
  int v_321;
  int v_320;
  int v_319;
  int v_318;
  int v_317;
  int v_316;
  int v_315;
  int v_314;
  int v_313;
  int v_312;
  int v_311;
  int v_310;
  int v_309;
  int v_308;
  int v_307;
  int v_306;
  int v_305;
  int v_304;
  int v_303;
  int v_302;
  int v_301;
  int v_300;
  int v_299;
  int v_298;
  int v_297;
  int v_296;
  int v_295;
  int v_294;
  int v_293;
  int v_292;
  int v_291;
  int v_290;
  int v_289;
  int v_288;
  int v_287;
  int v_286;
  int v_285;
  int v_284;
  int v_283;
  int v_282;
  int v_281;
  int v_280;
  int v_279;
  int v_278;
  int v_277;
  int v_276;
  int v_275;
  int v_274;
  int v_273;
  int v_272;
  int v_271;
  int v_270;
  int v_269;
  int v_268;
  int v_267;
  int v_266;
  int v_265;
  int v_264;
  int v_263;
  int v_262;
  int v_261;
  int v_260;
  int v_259;
  int v_258;
  int v_257;
  int v_256;
  int v_255;
  int v_254;
  int v_253;
  int v_252;
  int v_251;
  int v_250;
  int v_249;
  int v_248;
  int v_247;
  int v_246;
  int v_245;
  int v_244;
  int v_243;
  int v_242;
  int v_241;
  int v_240;
  int v_239;
  int v_238;
  int v_237;
  int v_236;
  int v_235;
  int v_234;
  int v_233;
  int v_232;
  int v_231;
  int v_230;
  int v_229;
  int v_228;
  int v_227;
  int v_226;
  int v_225;
  int v_224;
  int v_223;
  int v_222;
  int v_221;
  int v_220;
  int v_219;
  int v_218;
  int v_217;
  int v_216;
  int v_215;
  int v_214;
  int v_213;
  int v_212;
  int v_211;
  int v_210;
  int v_209;
  int v_208;
  int v_207;
  int v_206;
  int v_205;
  int v_204;
  int v_203;
  int v_202;
  int v_201;
  int v_200;
  int v_199;
  int v_198;
  int v_197;
  int v_196;
  int v_195;
  int v_194;
  int v_193;
  int v_192;
  int v_191;
  int v_190;
  int v_189;
  int v_188;
  int v_187;
  int v_186;
  int v_185;
  int v_184;
  int v_183;
  int v_182;
  int v_181;
  int v_180;
  int v_179;
  int v_178;
  int v_177;
  int v_176;
  int v_175;
  int v_174;
  int v_173;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int v_168;
  int v_167;
  int v_166;
  int v_165;
  int v_164;
  int v_163;
  int v_162;
  int v_161;
  int v_160;
  int v_159;
  int v_158;
  int v_157;
  int v_156;
  int v_155;
  int v_154;
  int v_153;
  int v_152;
  int v_151;
  int v_150;
  int v_149;
  int v_148;
  int v_147;
  int v_146;
  int v_145;
  int v_144;
  int v_143;
  int v_142;
  int v_141;
  int v_140;
  int v_139;
  int v_138;
  int v_137;
  int v_136;
  int v_135;
  int v_134;
  int v_133;
  int v_132;
  int v_131;
  int v_130;
  int v_129;
  int v_128;
  int v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_123;
  int v_122;
  int v_121;
  int v_120;
  int v_119;
  int v_118;
  int v_117;
  int v_116;
  int v_115;
  int v_114;
  int v_113;
  int v_112;
  int v_111;
  int v_110;
  int v_109;
  int v_108;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int v_98;
  int v_97;
  int v_96;
  int v_95;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_59;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int v_40;
  int v_39;
  int v_38;
  int v_37;
  int v_36;
  int v_35;
  int v_34;
  int v_33;
  int v_32;
  int v_31;
  int v_30;
  int v_29;
  int v_28;
  int v_27;
  int v_26;
  int v_25;
  int v_24;
  int v_23;
  int v_22;
  int v_21;
  int v_20;
  int v_19;
  int v_18;
  int v_17;
  int v_16;
  int v_15;
  int v_14;
  int v_13;
  int v_12;
  int v_11;
  int v_10;
  int v_9;
  int v_8;
  int v_7;
  int v_6;
  int v_5;
  int v_4;
  int v_3;
  int v_2;
  int v_1;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  int sub_246;
  int sub_247;
  int sub_248;
  int sub_249;
  int sub_250;
  int sub_251;
  int sub_252;
  int sub_253;
  int sub_254;
  int sub_255;
  int sub_256;
  int sub_257;
  int sub_258;
  int sub_259;
  int sub_260;
  int sub_261;
  int sub_262;
  int sub_263;
  int sub_264;
  int sub_265;
  int sub_266;
  int sub_267;
  int sub_268;
  int sub_269;
  int sub_270;
  int sub_271;
  int sub_272;
  int sub_273;
  int sub_274;
  int sub_275;
  int sub_276;
  int sub_277;
  int sub_278;
  int sub_279;
  int sub_280;
  int sub_281;
  int sub_282;
  int sub_283;
  int sub_284;
  int sub_285;
  int sub_286;
  int sub_287;
  int sub_288;
  int sub_289;
  int sub_290;
  int sub_291;
  int sub_292;
  int sub_293;
  int sub_294;
  int sub_295;
  int sub_296;
  int sub_297;
  int sub_298;
  int sub_299;
  int sub_300;
  int sub_301;
  int sub_302;
  sub_27 = (instanciador_inpSl&&false);
  if (instanciador_c_somL) {
    v_306 = false;
  } else {
    v_306 = sub_27;
  };
  if (instanciador_ck_27_1) {
    v_307 = v_306;
  } else {
    v_307 = false;
  };
  sub_29 = false;
  if (instanciador_c_somL) {
    sub_28 = sub_27;
  } else {
    sub_28 = sub_29;
  };
  sub_30 = sub_29;
  if (instanciador_ck_27_1) {
    v_308 = sub_30;
  } else {
    v_308 = sub_28;
  };
  if (instanciador_csl) {
    sub_26 = v_307;
  } else {
    sub_26 = v_308;
  };
  if (instanciador_ck_33_1) {
    v_309 = sub_26;
  } else {
    v_309 = false;
  };
  if (instanciador_inpAlarm) {
    sub_25 = v_309;
  } else {
    sub_25 = sub_26;
  };
  if (instanciador_c_alarm) {
    sub_24 = sub_25;
  } else {
    sub_24 = sub_26;
  };
  if (instanciador_ck_23_1) {
    sub_31 = false;
  } else {
    sub_31 = sub_24;
  };
  if (instanciador_inpMp) {
    v_312 = sub_31;
  } else {
    v_312 = false;
  };
  if (instanciador_c_microP) {
    v_313 = v_312;
  } else {
    v_313 = false;
  };
  if (instanciador_inpMp) {
    v_310 = sub_24;
  } else {
    v_310 = sub_31;
  };
  if (instanciador_c_microP) {
    v_311 = sub_24;
  } else {
    v_311 = v_310;
  };
  if (instanciador_cmp) {
    sub_23 = v_311;
  } else {
    sub_23 = v_313;
  };
  if (instanciador_ck_31_1) {
    sub_32 = false;
  } else {
    sub_32 = sub_23;
  };
  if (instanciador_inpGela) {
    v_316 = sub_32;
  } else {
    v_316 = false;
  };
  if (instanciador_c_gela) {
    v_317 = v_316;
  } else {
    v_317 = false;
  };
  if (instanciador_inpGela) {
    v_314 = sub_23;
  } else {
    v_314 = sub_32;
  };
  if (instanciador_c_gela) {
    v_315 = sub_23;
  } else {
    v_315 = v_314;
  };
  if (instanciador_cg) {
    sub_22 = v_315;
  } else {
    sub_22 = v_317;
  };
  if (instanciador_ck_29_1) {
    sub_21 = sub_22;
  } else {
    sub_21 = false;
  };
  if (instanciador_inpProj) {
    v_320 = sub_21;
  } else {
    v_320 = sub_22;
  };
  if (instanciador_c_proj) {
    v_321 = v_320;
  } else {
    v_321 = sub_22;
  };
  if (instanciador_inpProj) {
    v_318 = false;
  } else {
    v_318 = sub_21;
  };
  if (instanciador_c_proj) {
    v_319 = false;
  } else {
    v_319 = v_318;
  };
  if (instanciador_cp) {
    sub_20 = v_319;
  } else {
    sub_20 = v_321;
  };
  if (instanciador_ck_25_1) {
    sub_33 = false;
  } else {
    sub_33 = sub_20;
  };
  if (instanciador_inpSp) {
    v_324 = sub_33;
  } else {
    v_324 = false;
  };
  if (instanciador_c_somP) {
    v_325 = v_324;
  } else {
    v_325 = false;
  };
  if (instanciador_inpSp) {
    v_322 = sub_20;
  } else {
    v_322 = sub_33;
  };
  if (instanciador_c_somP) {
    v_323 = sub_20;
  } else {
    v_323 = v_322;
  };
  if (instanciador_csp) {
    sub_19 = v_323;
  } else {
    sub_19 = v_325;
  };
  if (instanciador_ck_21_1) {
    sub_18 = sub_19;
  } else {
    sub_18 = false;
  };
  if (instanciador_inpMl) {
    v_328 = sub_18;
  } else {
    v_328 = sub_19;
  };
  if (instanciador_c_microL) {
    v_329 = v_328;
  } else {
    v_329 = sub_19;
  };
  if (instanciador_inpMl) {
    v_326 = false;
  } else {
    v_326 = sub_18;
  };
  if (instanciador_c_microL) {
    v_327 = false;
  } else {
    v_327 = v_326;
  };
  if (instanciador_cml) {
    sub_17 = v_327;
  } else {
    sub_17 = v_329;
  };
  if (instanciador_ck_19_1) {
    sub_34 = false;
  } else {
    sub_34 = sub_17;
  };
  if (instanciador_lv) {
    v_332 = sub_17;
  } else {
    v_332 = sub_34;
  };
  if (instanciador_cv) {
    v_333 = v_332;
  } else {
    v_333 = false;
  };
  if (instanciador_lv) {
    v_330 = sub_34;
  } else {
    v_330 = false;
  };
  if (instanciador_cv) {
    v_331 = sub_17;
  } else {
    v_331 = v_330;
  };
  if (instanciador_c_vent) {
    sub_16 = v_331;
  } else {
    sub_16 = v_333;
  };
  if (instanciador_ck_17_1) {
    sub_15 = sub_16;
  } else {
    sub_15 = false;
  };
  if (instanciador_lx) {
    v_336 = sub_15;
    v_334 = false;
  } else {
    v_336 = sub_16;
    v_334 = sub_15;
  };
  if (instanciador_c_lampExt) {
    v_335 = false;
  } else {
    v_335 = v_334;
  };
  sub_35 = sub_16;
  if (instanciador_c_lampExt) {
    v_337 = v_336;
  } else {
    v_337 = sub_35;
  };
  if (instanciador_cx) {
    sub_14 = v_335;
  } else {
    sub_14 = v_337;
  };
  if (instanciador_ck_15_1) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (instanciador_l4) {
    v_340 = sub_13;
  } else {
    v_340 = sub_14;
  };
  if (instanciador_c4_lamp) {
    v_341 = v_340;
  } else {
    v_341 = sub_14;
  };
  if (instanciador_l4) {
    v_338 = false;
  } else {
    v_338 = sub_13;
  };
  if (instanciador_c4_lamp) {
    v_339 = false;
  } else {
    v_339 = v_338;
  };
  if (instanciador_c4) {
    sub_12 = v_339;
  } else {
    sub_12 = v_341;
  };
  if (instanciador_ck_13_1) {
    sub_36 = false;
  } else {
    sub_36 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_344 = sub_36;
  } else {
    v_344 = false;
  };
  if (instanciador_l3) {
    v_345 = v_344;
  } else {
    v_345 = false;
  };
  if (instanciador_c3_lamp) {
    v_342 = sub_12;
  } else {
    v_342 = sub_36;
  };
  if (instanciador_l3) {
    v_343 = sub_12;
  } else {
    v_343 = v_342;
  };
  if (instanciador_c3) {
    sub_11 = v_343;
  } else {
    sub_11 = v_345;
  };
  if (instanciador_ck_11_1) {
    sub_37 = false;
  } else {
    sub_37 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_348 = sub_37;
  } else {
    v_348 = false;
  };
  if (instanciador_l2) {
    v_349 = v_348;
  } else {
    v_349 = false;
  };
  if (instanciador_c2_lamp) {
    v_346 = sub_11;
  } else {
    v_346 = sub_37;
  };
  if (instanciador_l2) {
    v_347 = sub_11;
  } else {
    v_347 = v_346;
  };
  if (instanciador_c2) {
    sub_10 = v_347;
  } else {
    sub_10 = v_349;
  };
  if (instanciador_ck_9_1) {
    sub_38 = false;
  } else {
    sub_38 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_352 = sub_38;
  } else {
    v_352 = false;
  };
  if (instanciador_l1) {
    v_353 = v_352;
  } else {
    v_353 = false;
  };
  if (instanciador_c1_lamp) {
    v_350 = sub_10;
  } else {
    v_350 = sub_38;
  };
  if (instanciador_l1) {
    v_351 = sub_10;
  } else {
    v_351 = v_350;
  };
  if (instanciador_c1) {
    sub_9 = v_351;
  } else {
    sub_9 = v_353;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (instanciador_ck_17_1) {
    sub_48 = false;
  } else {
    sub_48 = sub_16;
  };
  if (instanciador_lx) {
    v_288 = sub_48;
  } else {
    v_288 = false;
  };
  if (instanciador_c_lampExt) {
    v_289 = v_288;
  } else {
    v_289 = false;
  };
  if (instanciador_lx) {
    v_286 = sub_16;
  } else {
    v_286 = sub_48;
  };
  if (instanciador_c_lampExt) {
    v_287 = sub_35;
  } else {
    v_287 = v_286;
  };
  if (instanciador_cx) {
    sub_47 = v_287;
  } else {
    sub_47 = v_289;
  };
  if (instanciador_ck_15_1) {
    sub_49 = false;
  } else {
    sub_49 = sub_47;
  };
  if (instanciador_l4) {
    v_292 = sub_49;
  } else {
    v_292 = false;
  };
  if (instanciador_c4_lamp) {
    v_293 = v_292;
  } else {
    v_293 = false;
  };
  if (instanciador_l4) {
    v_290 = sub_47;
  } else {
    v_290 = sub_49;
  };
  if (instanciador_c4_lamp) {
    v_291 = sub_47;
  } else {
    v_291 = v_290;
  };
  if (instanciador_c4) {
    sub_46 = v_291;
  } else {
    sub_46 = v_293;
  };
  if (instanciador_ck_13_1) {
    sub_50 = false;
  } else {
    sub_50 = sub_46;
  };
  if (instanciador_c3_lamp) {
    v_296 = sub_50;
  } else {
    v_296 = false;
  };
  if (instanciador_l3) {
    v_297 = v_296;
  } else {
    v_297 = false;
  };
  if (instanciador_c3_lamp) {
    v_294 = sub_46;
  } else {
    v_294 = sub_50;
  };
  if (instanciador_l3) {
    v_295 = sub_46;
  } else {
    v_295 = v_294;
  };
  if (instanciador_c3) {
    sub_45 = v_295;
  } else {
    sub_45 = v_297;
  };
  if (instanciador_ck_11_1) {
    sub_51 = false;
  } else {
    sub_51 = sub_45;
  };
  if (instanciador_c2_lamp) {
    v_300 = sub_51;
  } else {
    v_300 = false;
  };
  if (instanciador_l2) {
    v_301 = v_300;
  } else {
    v_301 = false;
  };
  if (instanciador_c2_lamp) {
    v_298 = sub_45;
  } else {
    v_298 = sub_51;
  };
  if (instanciador_l2) {
    v_299 = sub_45;
  } else {
    v_299 = v_298;
  };
  if (instanciador_c2) {
    sub_44 = v_299;
  } else {
    sub_44 = v_301;
  };
  if (instanciador_ck_9_1) {
    sub_52 = false;
  } else {
    sub_52 = sub_44;
  };
  if (instanciador_c1_lamp) {
    v_304 = sub_52;
  } else {
    v_304 = false;
  };
  if (instanciador_l1) {
    v_305 = v_304;
  } else {
    v_305 = false;
  };
  if (instanciador_c1_lamp) {
    v_302 = sub_44;
  } else {
    v_302 = sub_52;
  };
  if (instanciador_l1) {
    v_303 = sub_44;
  } else {
    v_303 = v_302;
  };
  if (instanciador_c1) {
    sub_43 = v_303;
  } else {
    sub_43 = v_305;
  };
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (instanciador_v_341) {
    sub_4 = sub_39;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  v_233 = !(instanciador_inpSl);
  sub_76 = (v_233&&false);
  if (instanciador_c_somL) {
    v_234 = sub_29;
  } else {
    v_234 = sub_76;
  };
  if (instanciador_ck_27_1) {
    v_235 = v_234;
  } else {
    v_235 = sub_30;
  };
  if (instanciador_c_somL) {
    sub_77 = sub_76;
  } else {
    sub_77 = false;
  };
  if (instanciador_ck_27_1) {
    v_236 = false;
  } else {
    v_236 = sub_77;
  };
  if (instanciador_csl) {
    sub_75 = v_235;
  } else {
    sub_75 = v_236;
  };
  if (instanciador_ck_33_1) {
    v_237 = sub_75;
  } else {
    v_237 = false;
  };
  if (instanciador_inpAlarm) {
    sub_74 = v_237;
  } else {
    sub_74 = sub_75;
  };
  if (instanciador_c_alarm) {
    sub_73 = sub_74;
  } else {
    sub_73 = sub_75;
  };
  if (instanciador_ck_23_1) {
    sub_72 = sub_73;
  } else {
    sub_72 = false;
  };
  if (instanciador_inpMp) {
    v_240 = sub_72;
  } else {
    v_240 = sub_73;
  };
  if (instanciador_c_microP) {
    v_241 = v_240;
  } else {
    v_241 = sub_73;
  };
  if (instanciador_inpMp) {
    v_238 = false;
  } else {
    v_238 = sub_72;
  };
  if (instanciador_c_microP) {
    v_239 = false;
  } else {
    v_239 = v_238;
  };
  if (instanciador_cmp) {
    sub_71 = v_239;
  } else {
    sub_71 = v_241;
  };
  if (instanciador_ck_31_1) {
    sub_78 = false;
  } else {
    sub_78 = sub_71;
  };
  if (instanciador_inpGela) {
    v_244 = sub_78;
  } else {
    v_244 = false;
  };
  if (instanciador_c_gela) {
    v_245 = v_244;
  } else {
    v_245 = false;
  };
  if (instanciador_inpGela) {
    v_242 = sub_71;
  } else {
    v_242 = sub_78;
  };
  if (instanciador_c_gela) {
    v_243 = sub_71;
  } else {
    v_243 = v_242;
  };
  if (instanciador_cg) {
    sub_70 = v_243;
  } else {
    sub_70 = v_245;
  };
  if (instanciador_ck_29_1) {
    sub_79 = false;
  } else {
    sub_79 = sub_70;
  };
  if (instanciador_inpProj) {
    v_248 = sub_79;
  } else {
    v_248 = false;
  };
  if (instanciador_c_proj) {
    v_249 = v_248;
  } else {
    v_249 = false;
  };
  if (instanciador_inpProj) {
    v_246 = sub_70;
  } else {
    v_246 = sub_79;
  };
  if (instanciador_c_proj) {
    v_247 = sub_70;
  } else {
    v_247 = v_246;
  };
  if (instanciador_cp) {
    sub_69 = v_247;
  } else {
    sub_69 = v_249;
  };
  if (instanciador_ck_25_1) {
    sub_68 = sub_69;
  } else {
    sub_68 = false;
  };
  if (instanciador_inpSp) {
    v_252 = sub_68;
  } else {
    v_252 = sub_69;
  };
  if (instanciador_c_somP) {
    v_253 = v_252;
  } else {
    v_253 = sub_69;
  };
  if (instanciador_inpSp) {
    v_250 = false;
  } else {
    v_250 = sub_68;
  };
  if (instanciador_c_somP) {
    v_251 = false;
  } else {
    v_251 = v_250;
  };
  if (instanciador_csp) {
    sub_67 = v_251;
  } else {
    sub_67 = v_253;
  };
  if (instanciador_ck_21_1) {
    sub_80 = false;
  } else {
    sub_80 = sub_67;
  };
  if (instanciador_inpMl) {
    v_256 = sub_80;
  } else {
    v_256 = false;
  };
  if (instanciador_c_microL) {
    v_257 = v_256;
  } else {
    v_257 = false;
  };
  if (instanciador_inpMl) {
    v_254 = sub_67;
  } else {
    v_254 = sub_80;
  };
  if (instanciador_c_microL) {
    v_255 = sub_67;
  } else {
    v_255 = v_254;
  };
  if (instanciador_cml) {
    sub_66 = v_255;
  } else {
    sub_66 = v_257;
  };
  if (instanciador_ck_19_1) {
    sub_81 = false;
  } else {
    sub_81 = sub_66;
  };
  if (instanciador_lv) {
    v_260 = sub_66;
  } else {
    v_260 = sub_81;
  };
  if (instanciador_cv) {
    v_261 = v_260;
  } else {
    v_261 = false;
  };
  if (instanciador_lv) {
    v_258 = sub_81;
  } else {
    v_258 = false;
  };
  if (instanciador_cv) {
    v_259 = sub_66;
  } else {
    v_259 = v_258;
  };
  if (instanciador_c_vent) {
    sub_65 = v_259;
  } else {
    sub_65 = v_261;
  };
  if (instanciador_ck_17_1) {
    sub_82 = false;
  } else {
    sub_82 = sub_65;
  };
  if (instanciador_lx) {
    v_264 = sub_82;
  } else {
    v_264 = false;
  };
  if (instanciador_c_lampExt) {
    v_265 = v_264;
  } else {
    v_265 = false;
  };
  if (instanciador_lx) {
    v_262 = sub_65;
  } else {
    v_262 = sub_82;
  };
  if (instanciador_c_lampExt) {
    v_263 = sub_65;
  } else {
    v_263 = v_262;
  };
  if (instanciador_cx) {
    sub_64 = v_263;
  } else {
    sub_64 = v_265;
  };
  if (instanciador_ck_15_1) {
    sub_63 = sub_64;
  } else {
    sub_63 = false;
  };
  if (instanciador_l4) {
    v_268 = sub_63;
  } else {
    v_268 = sub_64;
  };
  if (instanciador_c4_lamp) {
    v_269 = v_268;
  } else {
    v_269 = sub_64;
  };
  if (instanciador_l4) {
    v_266 = false;
  } else {
    v_266 = sub_63;
  };
  if (instanciador_c4_lamp) {
    v_267 = false;
  } else {
    v_267 = v_266;
  };
  if (instanciador_c4) {
    sub_62 = v_267;
  } else {
    sub_62 = v_269;
  };
  if (instanciador_ck_13_1) {
    sub_83 = false;
  } else {
    sub_83 = sub_62;
  };
  if (instanciador_c3_lamp) {
    v_272 = sub_83;
  } else {
    v_272 = false;
  };
  if (instanciador_l3) {
    v_273 = v_272;
  } else {
    v_273 = false;
  };
  if (instanciador_c3_lamp) {
    v_270 = sub_62;
  } else {
    v_270 = sub_83;
  };
  if (instanciador_l3) {
    v_271 = sub_62;
  } else {
    v_271 = v_270;
  };
  if (instanciador_c3) {
    sub_61 = v_271;
  } else {
    sub_61 = v_273;
  };
  if (instanciador_ck_11_1) {
    sub_60 = sub_61;
  } else {
    sub_60 = false;
  };
  if (instanciador_c2_lamp) {
    v_276 = sub_60;
  } else {
    v_276 = sub_61;
  };
  if (instanciador_l2) {
    v_277 = v_276;
  } else {
    v_277 = sub_61;
  };
  if (instanciador_c2_lamp) {
    v_274 = false;
  } else {
    v_274 = sub_60;
  };
  if (instanciador_l2) {
    v_275 = false;
  } else {
    v_275 = v_274;
  };
  if (instanciador_c2) {
    sub_59 = v_275;
  } else {
    sub_59 = v_277;
  };
  if (instanciador_ck_9_1) {
    sub_58 = sub_59;
  } else {
    sub_58 = false;
  };
  if (instanciador_c1_lamp) {
    v_280 = sub_58;
  } else {
    v_280 = sub_59;
  };
  if (instanciador_l1) {
    v_281 = v_280;
  } else {
    v_281 = sub_59;
  };
  if (instanciador_c1_lamp) {
    v_278 = false;
  } else {
    v_278 = sub_58;
  };
  if (instanciador_l1) {
    v_279 = false;
  } else {
    v_279 = v_278;
  };
  if (instanciador_c1) {
    sub_57 = v_279;
  } else {
    sub_57 = v_281;
  };
  sub_56 = sub_57;
  sub_55 = sub_56;
  sub_120 = sub_30;
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_117 = sub_118;
  sub_116 = sub_117;
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  sub_90 = sub_91;
  sub_89 = sub_90;
  sub_88 = sub_89;
  sub_87 = sub_88;
  sub_86 = sub_87;
  sub_85 = sub_86;
  if (instanciador_neutro_input) {
    v_282 = sub_85;
  } else {
    v_282 = sub_9;
  };
  v_184 = !(instanciador_inpSl);
  sub_146 = (v_184||false);
  if (instanciador_c_somL) {
    v_185 = false;
  } else {
    v_185 = sub_146;
  };
  if (instanciador_ck_27_1) {
    v_186 = v_185;
  } else {
    v_186 = false;
  };
  sub_148 = true;
  if (instanciador_c_somL) {
    sub_147 = sub_146;
  } else {
    sub_147 = sub_148;
  };
  sub_149 = sub_148;
  if (instanciador_ck_27_1) {
    v_187 = sub_149;
  } else {
    v_187 = sub_147;
  };
  if (instanciador_csl) {
    sub_145 = v_186;
  } else {
    sub_145 = v_187;
  };
  if (instanciador_ck_33_1) {
    sub_144 = sub_145;
  } else {
    sub_144 = sub_26;
  };
  if (instanciador_inpAlarm) {
    v_188 = sub_144;
  } else {
    v_188 = sub_145;
  };
  if (instanciador_ck_33_1) {
    v_183 = false;
  } else {
    v_183 = sub_145;
  };
  if (instanciador_inpAlarm) {
    sub_150 = sub_145;
  } else {
    sub_150 = v_183;
  };
  if (instanciador_c_alarm) {
    sub_143 = v_188;
  } else {
    sub_143 = sub_150;
  };
  if (instanciador_ck_23_1) {
    sub_142 = sub_143;
  } else {
    sub_142 = false;
  };
  if (instanciador_inpMp) {
    v_191 = sub_142;
  } else {
    v_191 = sub_143;
  };
  if (instanciador_c_microP) {
    v_192 = v_191;
  } else {
    v_192 = sub_143;
  };
  if (instanciador_inpMp) {
    v_189 = false;
  } else {
    v_189 = sub_142;
  };
  if (instanciador_c_microP) {
    v_190 = false;
  } else {
    v_190 = v_189;
  };
  if (instanciador_cmp) {
    sub_141 = v_190;
  } else {
    sub_141 = v_192;
  };
  if (instanciador_ck_31_1) {
    sub_140 = sub_141;
  } else {
    sub_140 = false;
  };
  if (instanciador_inpGela) {
    v_195 = sub_140;
  } else {
    v_195 = sub_141;
  };
  if (instanciador_c_gela) {
    v_196 = v_195;
  } else {
    v_196 = sub_141;
  };
  if (instanciador_inpGela) {
    v_193 = false;
  } else {
    v_193 = sub_140;
  };
  if (instanciador_c_gela) {
    v_194 = false;
  } else {
    v_194 = v_193;
  };
  if (instanciador_cg) {
    sub_139 = v_194;
  } else {
    sub_139 = v_196;
  };
  if (instanciador_ck_29_1) {
    sub_138 = sub_139;
  } else {
    sub_138 = false;
  };
  if (instanciador_inpProj) {
    v_199 = sub_138;
  } else {
    v_199 = sub_139;
  };
  if (instanciador_c_proj) {
    v_200 = v_199;
  } else {
    v_200 = sub_139;
  };
  if (instanciador_inpProj) {
    v_197 = false;
  } else {
    v_197 = sub_138;
  };
  if (instanciador_c_proj) {
    v_198 = false;
  } else {
    v_198 = v_197;
  };
  if (instanciador_cp) {
    sub_137 = v_198;
  } else {
    sub_137 = v_200;
  };
  if (instanciador_ck_25_1) {
    sub_136 = sub_137;
  } else {
    sub_136 = false;
  };
  if (instanciador_inpSp) {
    v_203 = sub_136;
  } else {
    v_203 = sub_137;
  };
  if (instanciador_c_somP) {
    v_204 = v_203;
  } else {
    v_204 = sub_137;
  };
  if (instanciador_inpSp) {
    v_201 = false;
  } else {
    v_201 = sub_136;
  };
  if (instanciador_c_somP) {
    v_202 = false;
  } else {
    v_202 = v_201;
  };
  if (instanciador_csp) {
    sub_135 = v_202;
  } else {
    sub_135 = v_204;
  };
  if (instanciador_ck_21_1) {
    sub_134 = sub_135;
  } else {
    sub_134 = false;
  };
  if (instanciador_inpMl) {
    v_207 = sub_134;
  } else {
    v_207 = sub_135;
  };
  if (instanciador_c_microL) {
    v_208 = v_207;
  } else {
    v_208 = sub_135;
  };
  if (instanciador_inpMl) {
    v_205 = false;
  } else {
    v_205 = sub_134;
  };
  if (instanciador_c_microL) {
    v_206 = false;
  } else {
    v_206 = v_205;
  };
  if (instanciador_cml) {
    sub_133 = v_206;
  } else {
    sub_133 = v_208;
  };
  if (instanciador_ck_19_1) {
    sub_132 = sub_133;
  } else {
    sub_132 = false;
  };
  if (instanciador_lv) {
    v_211 = false;
  } else {
    v_211 = sub_132;
  };
  if (instanciador_cv) {
    v_212 = v_211;
  } else {
    v_212 = sub_133;
  };
  if (instanciador_lv) {
    v_209 = sub_132;
  } else {
    v_209 = sub_133;
  };
  if (instanciador_cv) {
    v_210 = false;
  } else {
    v_210 = v_209;
  };
  if (instanciador_c_vent) {
    sub_131 = v_210;
  } else {
    sub_131 = v_212;
  };
  if (instanciador_ck_17_1) {
    sub_130 = sub_131;
  } else {
    sub_130 = false;
  };
  if (instanciador_lx) {
    v_215 = sub_130;
  } else {
    v_215 = sub_131;
  };
  if (instanciador_c_lampExt) {
    v_216 = v_215;
  } else {
    v_216 = sub_131;
  };
  if (instanciador_lx) {
    v_213 = false;
  } else {
    v_213 = sub_130;
  };
  if (instanciador_c_lampExt) {
    v_214 = false;
  } else {
    v_214 = v_213;
  };
  if (instanciador_cx) {
    sub_129 = v_214;
  } else {
    sub_129 = v_216;
  };
  if (instanciador_ck_15_1) {
    sub_128 = sub_129;
  } else {
    sub_128 = false;
  };
  if (instanciador_l4) {
    v_219 = sub_128;
  } else {
    v_219 = sub_129;
  };
  if (instanciador_c4_lamp) {
    v_220 = v_219;
  } else {
    v_220 = sub_129;
  };
  if (instanciador_l4) {
    v_217 = false;
  } else {
    v_217 = sub_128;
  };
  if (instanciador_c4_lamp) {
    v_218 = false;
  } else {
    v_218 = v_217;
  };
  if (instanciador_c4) {
    sub_127 = v_218;
  } else {
    sub_127 = v_220;
  };
  if (instanciador_ck_13_1) {
    sub_126 = sub_127;
  } else {
    sub_126 = false;
  };
  if (instanciador_c3_lamp) {
    v_223 = sub_126;
  } else {
    v_223 = sub_127;
  };
  if (instanciador_l3) {
    v_224 = v_223;
  } else {
    v_224 = sub_127;
  };
  if (instanciador_c3_lamp) {
    v_221 = false;
  } else {
    v_221 = sub_126;
  };
  if (instanciador_l3) {
    v_222 = false;
  } else {
    v_222 = v_221;
  };
  if (instanciador_c3) {
    sub_125 = v_222;
  } else {
    sub_125 = v_224;
  };
  if (instanciador_ck_11_1) {
    sub_124 = sub_125;
  } else {
    sub_124 = false;
  };
  if (instanciador_c2_lamp) {
    v_227 = sub_124;
  } else {
    v_227 = sub_125;
  };
  if (instanciador_l2) {
    v_228 = v_227;
  } else {
    v_228 = sub_125;
  };
  if (instanciador_c2_lamp) {
    v_225 = false;
  } else {
    v_225 = sub_124;
  };
  if (instanciador_l2) {
    v_226 = false;
  } else {
    v_226 = v_225;
  };
  if (instanciador_c2) {
    sub_123 = v_226;
  } else {
    sub_123 = v_228;
  };
  if (instanciador_ck_9_1) {
    sub_122 = sub_123;
  } else {
    sub_122 = false;
  };
  if (instanciador_c1_lamp) {
    v_231 = sub_122;
  } else {
    v_231 = sub_123;
  };
  if (instanciador_l1) {
    v_232 = v_231;
  } else {
    v_232 = sub_123;
  };
  if (instanciador_c1_lamp) {
    v_229 = false;
  } else {
    v_229 = sub_122;
  };
  if (instanciador_l1) {
    v_230 = false;
  } else {
    v_230 = v_229;
  };
  if (instanciador_c1) {
    sub_121 = v_230;
  } else {
    sub_121 = v_232;
  };
  if (instanciador_neutro_input) {
    sub_84 = sub_85;
  } else {
    sub_84 = sub_121;
  };
  if (instanciador_seguranca_input) {
    v_283 = sub_84;
  } else {
    v_283 = v_282;
  };
  if (instanciador_domingol_input) {
    v_284 = sub_55;
  } else {
    v_284 = v_283;
  };
  if (instanciador_domingo_input) {
    sub_54 = sub_40;
  } else {
    sub_54 = v_284;
  };
  if (instanciador_v_341) {
    v_285 = sub_39;
  } else {
    v_285 = sub_54;
  };
  if (instanciador_sexta_input) {
    sub_53 = sub_39;
  } else {
    sub_53 = v_285;
  };
  if (instanciador_v_339) {
    v_354 = sub_53;
  } else {
    v_354 = sub_3;
  };
  if (instanciador_neutro_input) {
    sub_155 = sub_85;
  } else {
    sub_155 = sub_43;
  };
  if (instanciador_seguranca_input) {
    v_182 = sub_84;
  } else {
    v_182 = sub_155;
  };
  if (instanciador_domingol_input) {
    sub_154 = sub_55;
  } else {
    sub_154 = v_182;
  };
  if (instanciador_domingo_input) {
    sub_153 = sub_40;
  } else {
    sub_153 = sub_154;
  };
  if (instanciador_v_341) {
    sub_152 = sub_39;
  } else {
    sub_152 = sub_153;
  };
  sub_151 = sub_152;
  if (instanciador_v_339) {
    v_355 = sub_53;
  } else {
    v_355 = sub_151;
  };
  if (instanciador_ebd_input) {
    sub_2 = v_354;
  } else {
    sub_2 = v_355;
  };
  if (instanciador_seguranca_input) {
    v_178 = sub_121;
  } else {
    v_178 = sub_85;
  };
  if (instanciador_domingol_input) {
    v_179 = sub_55;
    v_177 = sub_55;
  } else {
    v_179 = v_178;
    v_177 = sub_41;
  };
  if (instanciador_domingo_input) {
    v_180 = v_177;
  } else {
    v_180 = v_179;
  };
  if (instanciador_domingol_input) {
    v_176 = sub_55;
    v_175 = sub_55;
  } else {
    v_176 = sub_84;
    v_175 = sub_155;
  };
  if (instanciador_domingo_input) {
    sub_157 = v_175;
  } else {
    sub_157 = v_176;
  };
  if (instanciador_v_341) {
    v_181 = v_180;
  } else {
    v_181 = sub_157;
  };
  if (instanciador_sexta_input) {
    sub_156 = sub_39;
  } else {
    sub_156 = v_181;
  };
  if (instanciador_neutro_input) {
    v_174 = sub_85;
  } else {
    v_174 = sub_57;
  };
  if (instanciador_seguranca_input) {
    sub_159 = sub_84;
  } else {
    sub_159 = v_174;
  };
  if (instanciador_domingo_input) {
    sub_158 = sub_40;
  } else {
    sub_158 = sub_159;
  };
  if (instanciador_v_341) {
    v_356 = sub_154;
  } else {
    v_356 = sub_158;
  };
  if (instanciador_sexta_input) {
    v_357 = sub_39;
  } else {
    v_357 = v_356;
  };
  if (instanciador_v_339) {
    v_358 = v_357;
  } else {
    v_358 = sub_156;
  };
  if (instanciador_ebd_input) {
    v_359 = sub_5;
  } else {
    v_359 = v_358;
  };
  if (instanciador_v_340) {
    sub_1 = v_359;
  } else {
    sub_1 = sub_2;
  };
  if (instanciador_inpAlarm) {
    v_127 = sub_26;
  } else {
    v_127 = sub_144;
  };
  if (instanciador_c_alarm) {
    sub_182 = sub_25;
  } else {
    sub_182 = v_127;
  };
  if (instanciador_ck_23_1) {
    sub_183 = false;
  } else {
    sub_183 = sub_182;
  };
  if (instanciador_inpMp) {
    v_130 = sub_183;
  } else {
    v_130 = false;
  };
  if (instanciador_c_microP) {
    v_131 = v_130;
  } else {
    v_131 = false;
  };
  if (instanciador_inpMp) {
    v_128 = sub_182;
  } else {
    v_128 = sub_183;
  };
  if (instanciador_c_microP) {
    v_129 = sub_182;
  } else {
    v_129 = v_128;
  };
  if (instanciador_cmp) {
    sub_181 = v_129;
  } else {
    sub_181 = v_131;
  };
  if (instanciador_ck_31_1) {
    sub_184 = false;
  } else {
    sub_184 = sub_181;
  };
  if (instanciador_inpGela) {
    v_134 = sub_184;
  } else {
    v_134 = false;
  };
  if (instanciador_c_gela) {
    v_135 = v_134;
  } else {
    v_135 = false;
  };
  if (instanciador_inpGela) {
    v_132 = sub_181;
  } else {
    v_132 = sub_184;
  };
  if (instanciador_c_gela) {
    v_133 = sub_181;
  } else {
    v_133 = v_132;
  };
  if (instanciador_cg) {
    sub_180 = v_133;
  } else {
    sub_180 = v_135;
  };
  if (instanciador_ck_29_1) {
    sub_179 = sub_180;
  } else {
    sub_179 = false;
  };
  if (instanciador_inpProj) {
    v_138 = sub_179;
  } else {
    v_138 = sub_180;
  };
  if (instanciador_c_proj) {
    v_139 = v_138;
  } else {
    v_139 = sub_180;
  };
  if (instanciador_inpProj) {
    v_136 = false;
  } else {
    v_136 = sub_179;
  };
  if (instanciador_c_proj) {
    v_137 = false;
  } else {
    v_137 = v_136;
  };
  if (instanciador_cp) {
    sub_178 = v_137;
  } else {
    sub_178 = v_139;
  };
  if (instanciador_ck_25_1) {
    sub_185 = false;
  } else {
    sub_185 = sub_178;
  };
  if (instanciador_inpSp) {
    v_142 = sub_185;
  } else {
    v_142 = false;
  };
  if (instanciador_c_somP) {
    v_143 = v_142;
  } else {
    v_143 = false;
  };
  if (instanciador_inpSp) {
    v_140 = sub_178;
  } else {
    v_140 = sub_185;
  };
  if (instanciador_c_somP) {
    v_141 = sub_178;
  } else {
    v_141 = v_140;
  };
  if (instanciador_csp) {
    sub_177 = v_141;
  } else {
    sub_177 = v_143;
  };
  if (instanciador_ck_21_1) {
    sub_176 = sub_177;
  } else {
    sub_176 = false;
  };
  if (instanciador_inpMl) {
    v_146 = sub_176;
  } else {
    v_146 = sub_177;
  };
  if (instanciador_c_microL) {
    v_147 = v_146;
  } else {
    v_147 = sub_177;
  };
  if (instanciador_inpMl) {
    v_144 = false;
  } else {
    v_144 = sub_176;
  };
  if (instanciador_c_microL) {
    v_145 = false;
  } else {
    v_145 = v_144;
  };
  if (instanciador_cml) {
    sub_175 = v_145;
  } else {
    sub_175 = v_147;
  };
  if (instanciador_ck_19_1) {
    sub_186 = false;
  } else {
    sub_186 = sub_175;
  };
  if (instanciador_lv) {
    v_150 = sub_175;
  } else {
    v_150 = sub_186;
  };
  if (instanciador_cv) {
    v_151 = v_150;
  } else {
    v_151 = false;
  };
  if (instanciador_lv) {
    v_148 = sub_186;
  } else {
    v_148 = false;
  };
  if (instanciador_cv) {
    v_149 = sub_175;
  } else {
    v_149 = v_148;
  };
  if (instanciador_c_vent) {
    sub_174 = v_149;
  } else {
    sub_174 = v_151;
  };
  if (instanciador_ck_17_1) {
    sub_173 = sub_174;
  } else {
    sub_173 = false;
  };
  if (instanciador_lx) {
    v_154 = sub_173;
    v_152 = false;
  } else {
    v_154 = sub_174;
    v_152 = sub_173;
  };
  if (instanciador_c_lampExt) {
    v_153 = false;
  } else {
    v_153 = v_152;
  };
  sub_187 = sub_174;
  if (instanciador_c_lampExt) {
    v_155 = v_154;
  } else {
    v_155 = sub_187;
  };
  if (instanciador_cx) {
    sub_172 = v_153;
  } else {
    sub_172 = v_155;
  };
  if (instanciador_ck_15_1) {
    sub_171 = sub_172;
  } else {
    sub_171 = false;
  };
  if (instanciador_l4) {
    v_158 = sub_171;
  } else {
    v_158 = sub_172;
  };
  if (instanciador_c4_lamp) {
    v_159 = v_158;
  } else {
    v_159 = sub_172;
  };
  if (instanciador_l4) {
    v_156 = false;
  } else {
    v_156 = sub_171;
  };
  if (instanciador_c4_lamp) {
    v_157 = false;
  } else {
    v_157 = v_156;
  };
  if (instanciador_c4) {
    sub_170 = v_157;
  } else {
    sub_170 = v_159;
  };
  if (instanciador_ck_13_1) {
    sub_188 = false;
  } else {
    sub_188 = sub_170;
  };
  if (instanciador_c3_lamp) {
    v_162 = sub_188;
  } else {
    v_162 = false;
  };
  if (instanciador_l3) {
    v_163 = v_162;
  } else {
    v_163 = false;
  };
  if (instanciador_c3_lamp) {
    v_160 = sub_170;
  } else {
    v_160 = sub_188;
  };
  if (instanciador_l3) {
    v_161 = sub_170;
  } else {
    v_161 = v_160;
  };
  if (instanciador_c3) {
    sub_169 = v_161;
  } else {
    sub_169 = v_163;
  };
  if (instanciador_ck_11_1) {
    sub_189 = false;
  } else {
    sub_189 = sub_169;
  };
  if (instanciador_c2_lamp) {
    v_166 = sub_189;
  } else {
    v_166 = false;
  };
  if (instanciador_l2) {
    v_167 = v_166;
  } else {
    v_167 = false;
  };
  if (instanciador_c2_lamp) {
    v_164 = sub_169;
  } else {
    v_164 = sub_189;
  };
  if (instanciador_l2) {
    v_165 = sub_169;
  } else {
    v_165 = v_164;
  };
  if (instanciador_c2) {
    sub_168 = v_165;
  } else {
    sub_168 = v_167;
  };
  if (instanciador_ck_9_1) {
    sub_190 = false;
  } else {
    sub_190 = sub_168;
  };
  if (instanciador_c1_lamp) {
    v_170 = sub_190;
  } else {
    v_170 = false;
  };
  if (instanciador_l1) {
    v_171 = v_170;
  } else {
    v_171 = false;
  };
  if (instanciador_c1_lamp) {
    v_168 = sub_168;
  } else {
    v_168 = sub_190;
  };
  if (instanciador_l1) {
    v_169 = sub_168;
  } else {
    v_169 = v_168;
  };
  if (instanciador_c1) {
    sub_167 = v_169;
  } else {
    sub_167 = v_171;
  };
  sub_166 = sub_167;
  sub_165 = sub_166;
  sub_164 = sub_165;
  sub_163 = sub_164;
  if (instanciador_ck_17_1) {
    sub_200 = false;
  } else {
    sub_200 = sub_174;
  };
  if (instanciador_lx) {
    v_109 = sub_200;
  } else {
    v_109 = false;
  };
  if (instanciador_c_lampExt) {
    v_110 = v_109;
  } else {
    v_110 = false;
  };
  if (instanciador_lx) {
    v_107 = sub_174;
  } else {
    v_107 = sub_200;
  };
  if (instanciador_c_lampExt) {
    v_108 = sub_187;
  } else {
    v_108 = v_107;
  };
  if (instanciador_cx) {
    sub_199 = v_108;
  } else {
    sub_199 = v_110;
  };
  if (instanciador_ck_15_1) {
    sub_201 = false;
  } else {
    sub_201 = sub_199;
  };
  if (instanciador_l4) {
    v_113 = sub_201;
  } else {
    v_113 = false;
  };
  if (instanciador_c4_lamp) {
    v_114 = v_113;
  } else {
    v_114 = false;
  };
  if (instanciador_l4) {
    v_111 = sub_199;
  } else {
    v_111 = sub_201;
  };
  if (instanciador_c4_lamp) {
    v_112 = sub_199;
  } else {
    v_112 = v_111;
  };
  if (instanciador_c4) {
    sub_198 = v_112;
  } else {
    sub_198 = v_114;
  };
  if (instanciador_ck_13_1) {
    sub_202 = false;
  } else {
    sub_202 = sub_198;
  };
  if (instanciador_c3_lamp) {
    v_117 = sub_202;
  } else {
    v_117 = false;
  };
  if (instanciador_l3) {
    v_118 = v_117;
  } else {
    v_118 = false;
  };
  if (instanciador_c3_lamp) {
    v_115 = sub_198;
  } else {
    v_115 = sub_202;
  };
  if (instanciador_l3) {
    v_116 = sub_198;
  } else {
    v_116 = v_115;
  };
  if (instanciador_c3) {
    sub_197 = v_116;
  } else {
    sub_197 = v_118;
  };
  if (instanciador_ck_11_1) {
    sub_203 = false;
  } else {
    sub_203 = sub_197;
  };
  if (instanciador_c2_lamp) {
    v_121 = sub_203;
  } else {
    v_121 = false;
  };
  if (instanciador_l2) {
    v_122 = v_121;
  } else {
    v_122 = false;
  };
  if (instanciador_c2_lamp) {
    v_119 = sub_197;
  } else {
    v_119 = sub_203;
  };
  if (instanciador_l2) {
    v_120 = sub_197;
  } else {
    v_120 = v_119;
  };
  if (instanciador_c2) {
    sub_196 = v_120;
  } else {
    sub_196 = v_122;
  };
  if (instanciador_ck_9_1) {
    sub_204 = false;
  } else {
    sub_204 = sub_196;
  };
  if (instanciador_c1_lamp) {
    v_125 = sub_204;
  } else {
    v_125 = false;
  };
  if (instanciador_l1) {
    v_126 = v_125;
  } else {
    v_126 = false;
  };
  if (instanciador_c1_lamp) {
    v_123 = sub_196;
  } else {
    v_123 = sub_204;
  };
  if (instanciador_l1) {
    v_124 = sub_196;
  } else {
    v_124 = v_123;
  };
  if (instanciador_c1) {
    sub_195 = v_124;
  } else {
    sub_195 = v_126;
  };
  sub_194 = sub_195;
  sub_193 = sub_194;
  sub_192 = sub_193;
  sub_191 = sub_192;
  if (instanciador_v_341) {
    sub_162 = sub_191;
  } else {
    sub_162 = sub_163;
  };
  sub_161 = sub_162;
  sub_226 = (instanciador_inpSl||false);
  if (instanciador_c_somL) {
    v_53 = sub_148;
  } else {
    v_53 = sub_226;
  };
  if (instanciador_ck_27_1) {
    v_54 = v_53;
  } else {
    v_54 = sub_149;
  };
  if (instanciador_c_somL) {
    sub_227 = sub_226;
  } else {
    sub_227 = false;
  };
  if (instanciador_ck_27_1) {
    v_55 = false;
  } else {
    v_55 = sub_227;
  };
  if (instanciador_csl) {
    v_56 = v_54;
  } else {
    v_56 = v_55;
  };
  if (instanciador_ck_33_1) {
    v_57 = v_56;
  } else {
    v_57 = sub_75;
  };
  if (instanciador_inpAlarm) {
    v_58 = sub_75;
  } else {
    v_58 = v_57;
  };
  if (instanciador_c_alarm) {
    sub_225 = sub_74;
  } else {
    sub_225 = v_58;
  };
  if (instanciador_ck_23_1) {
    sub_224 = sub_225;
  } else {
    sub_224 = false;
  };
  if (instanciador_inpMp) {
    v_61 = sub_224;
  } else {
    v_61 = sub_225;
  };
  if (instanciador_c_microP) {
    v_62 = v_61;
  } else {
    v_62 = sub_225;
  };
  if (instanciador_inpMp) {
    v_59 = false;
  } else {
    v_59 = sub_224;
  };
  if (instanciador_c_microP) {
    v_60 = false;
  } else {
    v_60 = v_59;
  };
  if (instanciador_cmp) {
    sub_223 = v_60;
  } else {
    sub_223 = v_62;
  };
  if (instanciador_ck_31_1) {
    sub_228 = false;
  } else {
    sub_228 = sub_223;
  };
  if (instanciador_inpGela) {
    v_65 = sub_228;
  } else {
    v_65 = false;
  };
  if (instanciador_c_gela) {
    v_66 = v_65;
  } else {
    v_66 = false;
  };
  if (instanciador_inpGela) {
    v_63 = sub_223;
  } else {
    v_63 = sub_228;
  };
  if (instanciador_c_gela) {
    v_64 = sub_223;
  } else {
    v_64 = v_63;
  };
  if (instanciador_cg) {
    sub_222 = v_64;
  } else {
    sub_222 = v_66;
  };
  if (instanciador_ck_29_1) {
    sub_229 = false;
  } else {
    sub_229 = sub_222;
  };
  if (instanciador_inpProj) {
    v_69 = sub_229;
  } else {
    v_69 = false;
  };
  if (instanciador_c_proj) {
    v_70 = v_69;
  } else {
    v_70 = false;
  };
  if (instanciador_inpProj) {
    v_67 = sub_222;
  } else {
    v_67 = sub_229;
  };
  if (instanciador_c_proj) {
    v_68 = sub_222;
  } else {
    v_68 = v_67;
  };
  if (instanciador_cp) {
    sub_221 = v_68;
  } else {
    sub_221 = v_70;
  };
  if (instanciador_ck_25_1) {
    sub_220 = sub_221;
  } else {
    sub_220 = false;
  };
  if (instanciador_inpSp) {
    v_73 = sub_220;
  } else {
    v_73 = sub_221;
  };
  if (instanciador_c_somP) {
    v_74 = v_73;
  } else {
    v_74 = sub_221;
  };
  if (instanciador_inpSp) {
    v_71 = false;
  } else {
    v_71 = sub_220;
  };
  if (instanciador_c_somP) {
    v_72 = false;
  } else {
    v_72 = v_71;
  };
  if (instanciador_csp) {
    sub_219 = v_72;
  } else {
    sub_219 = v_74;
  };
  if (instanciador_ck_21_1) {
    sub_230 = false;
  } else {
    sub_230 = sub_219;
  };
  if (instanciador_inpMl) {
    v_77 = sub_230;
  } else {
    v_77 = false;
  };
  if (instanciador_c_microL) {
    v_78 = v_77;
  } else {
    v_78 = false;
  };
  if (instanciador_inpMl) {
    v_75 = sub_219;
  } else {
    v_75 = sub_230;
  };
  if (instanciador_c_microL) {
    v_76 = sub_219;
  } else {
    v_76 = v_75;
  };
  if (instanciador_cml) {
    sub_218 = v_76;
  } else {
    sub_218 = v_78;
  };
  if (instanciador_ck_19_1) {
    sub_231 = false;
  } else {
    sub_231 = sub_218;
  };
  if (instanciador_lv) {
    v_81 = sub_218;
  } else {
    v_81 = sub_231;
  };
  if (instanciador_cv) {
    v_82 = v_81;
  } else {
    v_82 = false;
  };
  if (instanciador_lv) {
    v_79 = sub_231;
  } else {
    v_79 = false;
  };
  if (instanciador_cv) {
    v_80 = sub_218;
  } else {
    v_80 = v_79;
  };
  if (instanciador_c_vent) {
    sub_217 = v_80;
  } else {
    sub_217 = v_82;
  };
  if (instanciador_ck_17_1) {
    sub_232 = false;
  } else {
    sub_232 = sub_217;
  };
  if (instanciador_lx) {
    v_85 = sub_232;
  } else {
    v_85 = false;
  };
  if (instanciador_c_lampExt) {
    v_86 = v_85;
  } else {
    v_86 = false;
  };
  if (instanciador_lx) {
    v_83 = sub_217;
  } else {
    v_83 = sub_232;
  };
  if (instanciador_c_lampExt) {
    v_84 = sub_217;
  } else {
    v_84 = v_83;
  };
  if (instanciador_cx) {
    sub_216 = v_84;
  } else {
    sub_216 = v_86;
  };
  if (instanciador_ck_15_1) {
    sub_215 = sub_216;
  } else {
    sub_215 = false;
  };
  if (instanciador_l4) {
    v_89 = sub_215;
  } else {
    v_89 = sub_216;
  };
  if (instanciador_c4_lamp) {
    v_90 = v_89;
  } else {
    v_90 = sub_216;
  };
  if (instanciador_l4) {
    v_87 = false;
  } else {
    v_87 = sub_215;
  };
  if (instanciador_c4_lamp) {
    v_88 = false;
  } else {
    v_88 = v_87;
  };
  if (instanciador_c4) {
    sub_214 = v_88;
  } else {
    sub_214 = v_90;
  };
  if (instanciador_ck_13_1) {
    sub_233 = false;
  } else {
    sub_233 = sub_214;
  };
  if (instanciador_c3_lamp) {
    v_93 = sub_233;
  } else {
    v_93 = false;
  };
  if (instanciador_l3) {
    v_94 = v_93;
  } else {
    v_94 = false;
  };
  if (instanciador_c3_lamp) {
    v_91 = sub_214;
  } else {
    v_91 = sub_233;
  };
  if (instanciador_l3) {
    v_92 = sub_214;
  } else {
    v_92 = v_91;
  };
  if (instanciador_c3) {
    sub_213 = v_92;
  } else {
    sub_213 = v_94;
  };
  if (instanciador_ck_11_1) {
    sub_212 = sub_213;
  } else {
    sub_212 = false;
  };
  if (instanciador_c2_lamp) {
    v_97 = sub_212;
  } else {
    v_97 = sub_213;
  };
  if (instanciador_l2) {
    v_98 = v_97;
  } else {
    v_98 = sub_213;
  };
  if (instanciador_c2_lamp) {
    v_95 = false;
  } else {
    v_95 = sub_212;
  };
  if (instanciador_l2) {
    v_96 = false;
  } else {
    v_96 = v_95;
  };
  if (instanciador_c2) {
    sub_211 = v_96;
  } else {
    sub_211 = v_98;
  };
  if (instanciador_ck_9_1) {
    sub_210 = sub_211;
  } else {
    sub_210 = false;
  };
  if (instanciador_c1_lamp) {
    v_101 = sub_210;
  } else {
    v_101 = sub_211;
  };
  if (instanciador_l1) {
    v_102 = v_101;
  } else {
    v_102 = sub_211;
  };
  if (instanciador_c1_lamp) {
    v_99 = false;
  } else {
    v_99 = sub_210;
  };
  if (instanciador_l1) {
    v_100 = false;
  } else {
    v_100 = v_99;
  };
  if (instanciador_c1) {
    sub_209 = v_100;
  } else {
    sub_209 = v_102;
  };
  sub_208 = sub_209;
  sub_207 = sub_208;
  sub_270 = sub_149;
  sub_269 = sub_270;
  sub_268 = sub_269;
  sub_267 = sub_268;
  sub_266 = sub_267;
  sub_265 = sub_266;
  sub_264 = sub_265;
  sub_263 = sub_264;
  sub_262 = sub_263;
  sub_261 = sub_262;
  sub_260 = sub_261;
  sub_259 = sub_260;
  sub_258 = sub_259;
  sub_257 = sub_258;
  sub_256 = sub_257;
  sub_255 = sub_256;
  sub_254 = sub_255;
  sub_253 = sub_254;
  sub_252 = sub_253;
  sub_251 = sub_252;
  sub_250 = sub_251;
  sub_249 = sub_250;
  sub_248 = sub_249;
  sub_247 = sub_248;
  sub_246 = sub_247;
  sub_245 = sub_246;
  sub_244 = sub_245;
  sub_243 = sub_244;
  sub_242 = sub_243;
  sub_241 = sub_242;
  sub_240 = sub_241;
  sub_239 = sub_240;
  sub_238 = sub_239;
  sub_237 = sub_238;
  sub_236 = sub_237;
  sub_235 = sub_236;
  if (instanciador_neutro_input) {
    v_103 = sub_235;
  } else {
    v_103 = sub_167;
  };
  if (instanciador_c_alarm) {
    sub_293 = sub_145;
  } else {
    sub_293 = sub_150;
  };
  if (instanciador_ck_23_1) {
    sub_292 = sub_293;
  } else {
    sub_292 = false;
  };
  if (instanciador_inpMp) {
    v_11 = sub_292;
  } else {
    v_11 = sub_293;
  };
  if (instanciador_c_microP) {
    v_12 = v_11;
  } else {
    v_12 = sub_293;
  };
  if (instanciador_inpMp) {
    v_9 = false;
  } else {
    v_9 = sub_292;
  };
  if (instanciador_c_microP) {
    v_10 = false;
  } else {
    v_10 = v_9;
  };
  if (instanciador_cmp) {
    sub_291 = v_10;
  } else {
    sub_291 = v_12;
  };
  if (instanciador_ck_31_1) {
    sub_290 = sub_291;
  } else {
    sub_290 = false;
  };
  if (instanciador_inpGela) {
    v_15 = sub_290;
  } else {
    v_15 = sub_291;
  };
  if (instanciador_c_gela) {
    v_16 = v_15;
  } else {
    v_16 = sub_291;
  };
  if (instanciador_inpGela) {
    v_13 = false;
  } else {
    v_13 = sub_290;
  };
  if (instanciador_c_gela) {
    v_14 = false;
  } else {
    v_14 = v_13;
  };
  if (instanciador_cg) {
    sub_289 = v_14;
  } else {
    sub_289 = v_16;
  };
  if (instanciador_ck_29_1) {
    sub_288 = sub_289;
  } else {
    sub_288 = false;
  };
  if (instanciador_inpProj) {
    v_19 = sub_288;
  } else {
    v_19 = sub_289;
  };
  if (instanciador_c_proj) {
    v_20 = v_19;
  } else {
    v_20 = sub_289;
  };
  if (instanciador_inpProj) {
    v_17 = false;
  } else {
    v_17 = sub_288;
  };
  if (instanciador_c_proj) {
    v_18 = false;
  } else {
    v_18 = v_17;
  };
  if (instanciador_cp) {
    sub_287 = v_18;
  } else {
    sub_287 = v_20;
  };
  if (instanciador_ck_25_1) {
    sub_286 = sub_287;
  } else {
    sub_286 = false;
  };
  if (instanciador_inpSp) {
    v_23 = sub_286;
  } else {
    v_23 = sub_287;
  };
  if (instanciador_c_somP) {
    v_24 = v_23;
  } else {
    v_24 = sub_287;
  };
  if (instanciador_inpSp) {
    v_21 = false;
  } else {
    v_21 = sub_286;
  };
  if (instanciador_c_somP) {
    v_22 = false;
  } else {
    v_22 = v_21;
  };
  if (instanciador_csp) {
    sub_285 = v_22;
  } else {
    sub_285 = v_24;
  };
  if (instanciador_ck_21_1) {
    sub_284 = sub_285;
  } else {
    sub_284 = false;
  };
  if (instanciador_inpMl) {
    v_27 = sub_284;
  } else {
    v_27 = sub_285;
  };
  if (instanciador_c_microL) {
    v_28 = v_27;
  } else {
    v_28 = sub_285;
  };
  if (instanciador_inpMl) {
    v_25 = false;
  } else {
    v_25 = sub_284;
  };
  if (instanciador_c_microL) {
    v_26 = false;
  } else {
    v_26 = v_25;
  };
  if (instanciador_cml) {
    sub_283 = v_26;
  } else {
    sub_283 = v_28;
  };
  if (instanciador_ck_19_1) {
    sub_282 = sub_283;
  } else {
    sub_282 = false;
  };
  if (instanciador_lv) {
    v_31 = false;
  } else {
    v_31 = sub_282;
  };
  if (instanciador_cv) {
    v_32 = v_31;
  } else {
    v_32 = sub_283;
  };
  if (instanciador_lv) {
    v_29 = sub_282;
  } else {
    v_29 = sub_283;
  };
  if (instanciador_cv) {
    v_30 = false;
  } else {
    v_30 = v_29;
  };
  if (instanciador_c_vent) {
    sub_281 = v_30;
  } else {
    sub_281 = v_32;
  };
  if (instanciador_ck_17_1) {
    sub_280 = sub_281;
  } else {
    sub_280 = false;
  };
  if (instanciador_lx) {
    v_35 = sub_280;
  } else {
    v_35 = sub_281;
  };
  if (instanciador_c_lampExt) {
    v_36 = v_35;
  } else {
    v_36 = sub_281;
  };
  if (instanciador_lx) {
    v_33 = false;
  } else {
    v_33 = sub_280;
  };
  if (instanciador_c_lampExt) {
    v_34 = false;
  } else {
    v_34 = v_33;
  };
  if (instanciador_cx) {
    sub_279 = v_34;
  } else {
    sub_279 = v_36;
  };
  if (instanciador_ck_15_1) {
    sub_278 = sub_279;
  } else {
    sub_278 = false;
  };
  if (instanciador_l4) {
    v_39 = sub_278;
  } else {
    v_39 = sub_279;
  };
  if (instanciador_c4_lamp) {
    v_40 = v_39;
  } else {
    v_40 = sub_279;
  };
  if (instanciador_l4) {
    v_37 = false;
  } else {
    v_37 = sub_278;
  };
  if (instanciador_c4_lamp) {
    v_38 = false;
  } else {
    v_38 = v_37;
  };
  if (instanciador_c4) {
    sub_277 = v_38;
  } else {
    sub_277 = v_40;
  };
  if (instanciador_ck_13_1) {
    sub_276 = sub_277;
  } else {
    sub_276 = false;
  };
  if (instanciador_c3_lamp) {
    v_43 = sub_276;
  } else {
    v_43 = sub_277;
  };
  if (instanciador_l3) {
    v_44 = v_43;
  } else {
    v_44 = sub_277;
  };
  if (instanciador_c3_lamp) {
    v_41 = false;
  } else {
    v_41 = sub_276;
  };
  if (instanciador_l3) {
    v_42 = false;
  } else {
    v_42 = v_41;
  };
  if (instanciador_c3) {
    sub_275 = v_42;
  } else {
    sub_275 = v_44;
  };
  if (instanciador_ck_11_1) {
    sub_274 = sub_275;
  } else {
    sub_274 = false;
  };
  if (instanciador_c2_lamp) {
    v_47 = sub_274;
  } else {
    v_47 = sub_275;
  };
  if (instanciador_l2) {
    v_48 = v_47;
  } else {
    v_48 = sub_275;
  };
  if (instanciador_c2_lamp) {
    v_45 = false;
  } else {
    v_45 = sub_274;
  };
  if (instanciador_l2) {
    v_46 = false;
  } else {
    v_46 = v_45;
  };
  if (instanciador_c2) {
    sub_273 = v_46;
  } else {
    sub_273 = v_48;
  };
  if (instanciador_ck_9_1) {
    sub_272 = sub_273;
  } else {
    sub_272 = false;
  };
  if (instanciador_c1_lamp) {
    v_51 = sub_272;
  } else {
    v_51 = sub_273;
  };
  if (instanciador_l1) {
    v_52 = v_51;
  } else {
    v_52 = sub_273;
  };
  if (instanciador_c1_lamp) {
    v_49 = false;
  } else {
    v_49 = sub_272;
  };
  if (instanciador_l1) {
    v_50 = false;
  } else {
    v_50 = v_49;
  };
  if (instanciador_c1) {
    sub_271 = v_50;
  } else {
    sub_271 = v_52;
  };
  if (instanciador_neutro_input) {
    sub_234 = sub_235;
  } else {
    sub_234 = sub_271;
  };
  if (instanciador_seguranca_input) {
    v_104 = sub_234;
  } else {
    v_104 = v_103;
  };
  if (instanciador_domingol_input) {
    v_105 = sub_207;
  } else {
    v_105 = v_104;
  };
  if (instanciador_domingo_input) {
    sub_206 = sub_192;
  } else {
    sub_206 = v_105;
  };
  if (instanciador_v_341) {
    v_106 = sub_191;
  } else {
    v_106 = sub_206;
  };
  if (instanciador_sexta_input) {
    sub_205 = sub_191;
  } else {
    sub_205 = v_106;
  };
  if (instanciador_v_339) {
    v_172 = sub_205;
  } else {
    v_172 = sub_161;
  };
  if (instanciador_neutro_input) {
    sub_298 = sub_235;
  } else {
    sub_298 = sub_195;
  };
  if (instanciador_seguranca_input) {
    v_8 = sub_234;
  } else {
    v_8 = sub_298;
  };
  if (instanciador_domingol_input) {
    sub_297 = sub_207;
  } else {
    sub_297 = v_8;
  };
  if (instanciador_domingo_input) {
    sub_296 = sub_192;
  } else {
    sub_296 = sub_297;
  };
  if (instanciador_v_341) {
    sub_295 = sub_191;
  } else {
    sub_295 = sub_296;
  };
  sub_294 = sub_295;
  if (instanciador_v_339) {
    v_173 = sub_205;
  } else {
    v_173 = sub_294;
  };
  if (instanciador_ebd_input) {
    sub_160 = v_172;
  } else {
    sub_160 = v_173;
  };
  if (instanciador_seguranca_input) {
    v_4 = sub_271;
  } else {
    v_4 = sub_235;
  };
  if (instanciador_domingol_input) {
    v_5 = sub_207;
    v_3 = sub_207;
  } else {
    v_5 = v_4;
    v_3 = sub_193;
  };
  if (instanciador_domingo_input) {
    v_6 = v_3;
  } else {
    v_6 = v_5;
  };
  if (instanciador_domingol_input) {
    v_2 = sub_207;
    v_1 = sub_207;
  } else {
    v_2 = sub_234;
    v_1 = sub_298;
  };
  if (instanciador_domingo_input) {
    sub_300 = v_1;
  } else {
    sub_300 = v_2;
  };
  if (instanciador_v_341) {
    v_7 = v_6;
  } else {
    v_7 = sub_300;
  };
  if (instanciador_sexta_input) {
    sub_299 = sub_191;
  } else {
    sub_299 = v_7;
  };
  if (instanciador_neutro_input) {
    v = sub_235;
  } else {
    v = sub_209;
  };
  if (instanciador_seguranca_input) {
    sub_302 = sub_234;
  } else {
    sub_302 = v;
  };
  if (instanciador_domingo_input) {
    sub_301 = sub_192;
  } else {
    sub_301 = sub_302;
  };
  if (instanciador_v_341) {
    v_360 = sub_297;
  } else {
    v_360 = sub_301;
  };
  if (instanciador_sexta_input) {
    v_361 = sub_191;
  } else {
    v_361 = v_360;
  };
  if (instanciador_v_339) {
    v_362 = v_361;
  } else {
    v_362 = sub_299;
  };
  if (instanciador_ebd_input) {
    v_363 = sub_163;
  } else {
    v_363 = v_362;
  };
  if (instanciador_v_340) {
    v_364 = v_363;
  } else {
    v_364 = sub_160;
  };
  if (p_instanciador_ca) {
    sub_0 = v_364;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_ca = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c_alarm_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_cg, int instanciador_c_gela,
  int instanciador_cp, int instanciador_c_proj, int instanciador_cmp,
  int instanciador_c_microP, int instanciador_cml, int instanciador_c_microL,
  int instanciador_csl, int instanciador_c_somL, int instanciador_csp,
  int instanciador_c_somP, int instanciador_c_vent, int instanciador_cv,
  int instanciador_cx, int instanciador_c4, int instanciador_c3,
  int instanciador_c2, int instanciador_c1, int instanciador_c_lampExt,
  int instanciador_c4_lamp, int instanciador_c3_lamp,
  int instanciador_c2_lamp, int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c_alarm_out* _out) {
  
  int v_721;
  int v_720;
  int v_719;
  int v_718;
  int v_717;
  int v_716;
  int v_715;
  int v_714;
  int v_713;
  int v_712;
  int v_711;
  int v_710;
  int v_709;
  int v_708;
  int v_707;
  int v_706;
  int v_705;
  int v_704;
  int v_703;
  int v_702;
  int v_701;
  int v_700;
  int v_699;
  int v_698;
  int v_697;
  int v_696;
  int v_695;
  int v_694;
  int v_693;
  int v_692;
  int v_691;
  int v_690;
  int v_689;
  int v_688;
  int v_687;
  int v_686;
  int v_685;
  int v_684;
  int v_683;
  int v_682;
  int v_681;
  int v_680;
  int v_679;
  int v_678;
  int v_677;
  int v_676;
  int v_675;
  int v_674;
  int v_673;
  int v_672;
  int v_671;
  int v_670;
  int v_669;
  int v_668;
  int v_667;
  int v_666;
  int v_665;
  int v_664;
  int v_663;
  int v_662;
  int v_661;
  int v_660;
  int v_659;
  int v_658;
  int v_657;
  int v_656;
  int v_655;
  int v_654;
  int v_653;
  int v_652;
  int v_651;
  int v_650;
  int v_649;
  int v_648;
  int v_647;
  int v_646;
  int v_645;
  int v_644;
  int v_643;
  int v_642;
  int v_641;
  int v_640;
  int v_639;
  int v_638;
  int v_637;
  int v_636;
  int v_635;
  int v_634;
  int v_633;
  int v_632;
  int v_631;
  int v_630;
  int v_629;
  int v_628;
  int v_627;
  int v_626;
  int v_625;
  int v_624;
  int v_623;
  int v_622;
  int v_621;
  int v_620;
  int v_619;
  int v_618;
  int v_617;
  int v_616;
  int v_615;
  int v_614;
  int v_613;
  int v_612;
  int v_611;
  int v_610;
  int v_609;
  int v_608;
  int v_607;
  int v_606;
  int v_605;
  int v_604;
  int v_603;
  int v_602;
  int v_601;
  int v_600;
  int v_599;
  int v_598;
  int v_597;
  int v_596;
  int v_595;
  int v_594;
  int v_593;
  int v_592;
  int v_591;
  int v_590;
  int v_589;
  int v_588;
  int v_587;
  int v_586;
  int v_585;
  int v_584;
  int v_583;
  int v_582;
  int v_581;
  int v_580;
  int v_579;
  int v_578;
  int v_577;
  int v_576;
  int v_575;
  int v_574;
  int v_573;
  int v_572;
  int v_571;
  int v_570;
  int v_569;
  int v_568;
  int v_567;
  int v_566;
  int v_565;
  int v_564;
  int v_563;
  int v_562;
  int v_561;
  int v_560;
  int v_559;
  int v_558;
  int v_557;
  int v_556;
  int v_555;
  int v_554;
  int v_553;
  int v_552;
  int v_551;
  int v_550;
  int v_549;
  int v_548;
  int v_547;
  int v_546;
  int v_545;
  int v_544;
  int v_543;
  int v_542;
  int v_541;
  int v_540;
  int v_539;
  int v_538;
  int v_537;
  int v_536;
  int v_535;
  int v_534;
  int v_533;
  int v_532;
  int v_531;
  int v_530;
  int v_529;
  int v_528;
  int v_527;
  int v_526;
  int v_525;
  int v_524;
  int v_523;
  int v_522;
  int v_521;
  int v_520;
  int v_519;
  int v_518;
  int v_517;
  int v_516;
  int v_515;
  int v_514;
  int v_513;
  int v_512;
  int v_511;
  int v_510;
  int v_509;
  int v_508;
  int v_507;
  int v_506;
  int v_505;
  int v_504;
  int v_503;
  int v_502;
  int v_501;
  int v_500;
  int v_499;
  int v_498;
  int v_497;
  int v_496;
  int v_495;
  int v_494;
  int v_493;
  int v_492;
  int v_491;
  int v_490;
  int v_489;
  int v_488;
  int v_487;
  int v_486;
  int v_485;
  int v_484;
  int v_483;
  int v_482;
  int v_481;
  int v_480;
  int v_479;
  int v_478;
  int v_477;
  int v_476;
  int v_475;
  int v_474;
  int v_473;
  int v_472;
  int v_471;
  int v_470;
  int v_469;
  int v_468;
  int v_467;
  int v_466;
  int v_465;
  int v_464;
  int v_463;
  int v_462;
  int v_461;
  int v_460;
  int v_459;
  int v_458;
  int v_457;
  int v_456;
  int v_455;
  int v_454;
  int v_453;
  int v_452;
  int v_451;
  int v_450;
  int v_449;
  int v_448;
  int v_447;
  int v_446;
  int v_445;
  int v_444;
  int v_443;
  int v_442;
  int v_441;
  int v_440;
  int v_439;
  int v_438;
  int v_437;
  int v_436;
  int v_435;
  int v_434;
  int v_433;
  int v_432;
  int v_431;
  int v_430;
  int v_429;
  int v_428;
  int v_427;
  int v_426;
  int v_425;
  int v_424;
  int v_423;
  int v_422;
  int v_421;
  int v_420;
  int v_419;
  int v_418;
  int v_417;
  int v_416;
  int v_415;
  int v_414;
  int v_413;
  int v_412;
  int v_411;
  int v_410;
  int v_409;
  int v_408;
  int v_407;
  int v_406;
  int v_405;
  int v_404;
  int v_403;
  int v_402;
  int v_401;
  int v_400;
  int v_399;
  int v_398;
  int v_397;
  int v_396;
  int v_395;
  int v_394;
  int v_393;
  int v_392;
  int v_391;
  int v_390;
  int v_389;
  int v_388;
  int v_387;
  int v_386;
  int v_385;
  int v_384;
  int v_383;
  int v_382;
  int v_381;
  int v_380;
  int v_379;
  int v_378;
  int v_377;
  int v_376;
  int v_375;
  int v_374;
  int v_373;
  int v_372;
  int v_371;
  int v_370;
  int v_369;
  int v_368;
  int v_367;
  int v_366;
  int v_365;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  int sub_246;
  int sub_247;
  int sub_248;
  int sub_249;
  int sub_250;
  int sub_251;
  int sub_252;
  int sub_253;
  int sub_254;
  int sub_255;
  int sub_256;
  int sub_257;
  int sub_258;
  int sub_259;
  int sub_260;
  int sub_261;
  int sub_262;
  int sub_263;
  int sub_264;
  int sub_265;
  int sub_266;
  int sub_267;
  int sub_268;
  int sub_269;
  int sub_270;
  int sub_271;
  int sub_272;
  int sub_273;
  int sub_274;
  int sub_275;
  int sub_276;
  int sub_277;
  int sub_278;
  int sub_279;
  int sub_280;
  int sub_281;
  int sub_282;
  int sub_283;
  int sub_284;
  int sub_285;
  int sub_286;
  int sub_287;
  int sub_288;
  int sub_289;
  int sub_290;
  int sub_291;
  int sub_292;
  int sub_293;
  int sub_294;
  int sub_295;
  int sub_296;
  int sub_297;
  int sub_298;
  sub_26 = (instanciador_inpSl&&false);
  if (instanciador_c_somL) {
    v_664 = false;
  } else {
    v_664 = sub_26;
  };
  if (instanciador_ck_27_1) {
    v_665 = v_664;
  } else {
    v_665 = false;
  };
  sub_28 = false;
  if (instanciador_c_somL) {
    sub_27 = sub_26;
  } else {
    sub_27 = sub_28;
  };
  sub_29 = sub_28;
  if (instanciador_ck_27_1) {
    v_666 = sub_29;
  } else {
    v_666 = sub_27;
  };
  if (instanciador_csl) {
    sub_25 = v_665;
  } else {
    sub_25 = v_666;
  };
  sub_24 = sub_25;
  if (instanciador_ck_23_1) {
    sub_30 = false;
  } else {
    sub_30 = sub_24;
  };
  if (instanciador_inpMp) {
    v_669 = sub_30;
  } else {
    v_669 = false;
  };
  if (instanciador_c_microP) {
    v_670 = v_669;
  } else {
    v_670 = false;
  };
  if (instanciador_inpMp) {
    v_667 = sub_24;
  } else {
    v_667 = sub_30;
  };
  if (instanciador_c_microP) {
    v_668 = sub_24;
  } else {
    v_668 = v_667;
  };
  if (instanciador_cmp) {
    sub_23 = v_668;
  } else {
    sub_23 = v_670;
  };
  if (instanciador_ck_31_1) {
    sub_31 = false;
  } else {
    sub_31 = sub_23;
  };
  if (instanciador_inpGela) {
    v_673 = sub_31;
  } else {
    v_673 = false;
  };
  if (instanciador_c_gela) {
    v_674 = v_673;
  } else {
    v_674 = false;
  };
  if (instanciador_inpGela) {
    v_671 = sub_23;
  } else {
    v_671 = sub_31;
  };
  if (instanciador_c_gela) {
    v_672 = sub_23;
  } else {
    v_672 = v_671;
  };
  if (instanciador_cg) {
    sub_22 = v_672;
  } else {
    sub_22 = v_674;
  };
  if (instanciador_ck_29_1) {
    sub_21 = sub_22;
  } else {
    sub_21 = false;
  };
  if (instanciador_inpProj) {
    v_677 = sub_21;
  } else {
    v_677 = sub_22;
  };
  if (instanciador_c_proj) {
    v_678 = v_677;
  } else {
    v_678 = sub_22;
  };
  if (instanciador_inpProj) {
    v_675 = false;
  } else {
    v_675 = sub_21;
  };
  if (instanciador_c_proj) {
    v_676 = false;
  } else {
    v_676 = v_675;
  };
  if (instanciador_cp) {
    sub_20 = v_676;
  } else {
    sub_20 = v_678;
  };
  if (instanciador_ck_25_1) {
    sub_32 = false;
  } else {
    sub_32 = sub_20;
  };
  if (instanciador_inpSp) {
    v_681 = sub_32;
  } else {
    v_681 = false;
  };
  if (instanciador_c_somP) {
    v_682 = v_681;
  } else {
    v_682 = false;
  };
  if (instanciador_inpSp) {
    v_679 = sub_20;
  } else {
    v_679 = sub_32;
  };
  if (instanciador_c_somP) {
    v_680 = sub_20;
  } else {
    v_680 = v_679;
  };
  if (instanciador_csp) {
    sub_19 = v_680;
  } else {
    sub_19 = v_682;
  };
  if (instanciador_ck_21_1) {
    sub_18 = sub_19;
  } else {
    sub_18 = false;
  };
  if (instanciador_inpMl) {
    v_685 = sub_18;
  } else {
    v_685 = sub_19;
  };
  if (instanciador_c_microL) {
    v_686 = v_685;
  } else {
    v_686 = sub_19;
  };
  if (instanciador_inpMl) {
    v_683 = false;
  } else {
    v_683 = sub_18;
  };
  if (instanciador_c_microL) {
    v_684 = false;
  } else {
    v_684 = v_683;
  };
  if (instanciador_cml) {
    sub_17 = v_684;
  } else {
    sub_17 = v_686;
  };
  if (instanciador_ck_19_1) {
    sub_33 = false;
  } else {
    sub_33 = sub_17;
  };
  if (instanciador_lv) {
    v_689 = sub_17;
  } else {
    v_689 = sub_33;
  };
  if (instanciador_cv) {
    v_690 = v_689;
  } else {
    v_690 = false;
  };
  if (instanciador_lv) {
    v_687 = sub_33;
  } else {
    v_687 = false;
  };
  if (instanciador_cv) {
    v_688 = sub_17;
  } else {
    v_688 = v_687;
  };
  if (instanciador_c_vent) {
    sub_16 = v_688;
  } else {
    sub_16 = v_690;
  };
  if (instanciador_ck_17_1) {
    sub_15 = sub_16;
  } else {
    sub_15 = false;
  };
  if (instanciador_lx) {
    v_693 = sub_15;
    v_691 = false;
  } else {
    v_693 = sub_16;
    v_691 = sub_15;
  };
  if (instanciador_c_lampExt) {
    v_692 = false;
  } else {
    v_692 = v_691;
  };
  sub_34 = sub_16;
  if (instanciador_c_lampExt) {
    v_694 = v_693;
  } else {
    v_694 = sub_34;
  };
  if (instanciador_cx) {
    sub_14 = v_692;
  } else {
    sub_14 = v_694;
  };
  if (instanciador_ck_15_1) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (instanciador_l4) {
    v_697 = sub_13;
  } else {
    v_697 = sub_14;
  };
  if (instanciador_c4_lamp) {
    v_698 = v_697;
  } else {
    v_698 = sub_14;
  };
  if (instanciador_l4) {
    v_695 = false;
  } else {
    v_695 = sub_13;
  };
  if (instanciador_c4_lamp) {
    v_696 = false;
  } else {
    v_696 = v_695;
  };
  if (instanciador_c4) {
    sub_12 = v_696;
  } else {
    sub_12 = v_698;
  };
  if (instanciador_ck_13_1) {
    sub_35 = false;
  } else {
    sub_35 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_701 = sub_35;
  } else {
    v_701 = false;
  };
  if (instanciador_l3) {
    v_702 = v_701;
  } else {
    v_702 = false;
  };
  if (instanciador_c3_lamp) {
    v_699 = sub_12;
  } else {
    v_699 = sub_35;
  };
  if (instanciador_l3) {
    v_700 = sub_12;
  } else {
    v_700 = v_699;
  };
  if (instanciador_c3) {
    sub_11 = v_700;
  } else {
    sub_11 = v_702;
  };
  if (instanciador_ck_11_1) {
    sub_36 = false;
  } else {
    sub_36 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_705 = sub_36;
  } else {
    v_705 = false;
  };
  if (instanciador_l2) {
    v_706 = v_705;
  } else {
    v_706 = false;
  };
  if (instanciador_c2_lamp) {
    v_703 = sub_11;
  } else {
    v_703 = sub_36;
  };
  if (instanciador_l2) {
    v_704 = sub_11;
  } else {
    v_704 = v_703;
  };
  if (instanciador_c2) {
    sub_10 = v_704;
  } else {
    sub_10 = v_706;
  };
  if (instanciador_ck_9_1) {
    sub_37 = false;
  } else {
    sub_37 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_709 = sub_37;
  } else {
    v_709 = false;
  };
  if (instanciador_l1) {
    v_710 = v_709;
  } else {
    v_710 = false;
  };
  if (instanciador_c1_lamp) {
    v_707 = sub_10;
  } else {
    v_707 = sub_37;
  };
  if (instanciador_l1) {
    v_708 = sub_10;
  } else {
    v_708 = v_707;
  };
  if (instanciador_c1) {
    sub_9 = v_708;
  } else {
    sub_9 = v_710;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (instanciador_ck_17_1) {
    sub_47 = false;
  } else {
    sub_47 = sub_16;
  };
  if (instanciador_lx) {
    v_646 = sub_47;
  } else {
    v_646 = false;
  };
  if (instanciador_c_lampExt) {
    v_647 = v_646;
  } else {
    v_647 = false;
  };
  if (instanciador_lx) {
    v_644 = sub_16;
  } else {
    v_644 = sub_47;
  };
  if (instanciador_c_lampExt) {
    v_645 = sub_34;
  } else {
    v_645 = v_644;
  };
  if (instanciador_cx) {
    sub_46 = v_645;
  } else {
    sub_46 = v_647;
  };
  if (instanciador_ck_15_1) {
    sub_48 = false;
  } else {
    sub_48 = sub_46;
  };
  if (instanciador_l4) {
    v_650 = sub_48;
  } else {
    v_650 = false;
  };
  if (instanciador_c4_lamp) {
    v_651 = v_650;
  } else {
    v_651 = false;
  };
  if (instanciador_l4) {
    v_648 = sub_46;
  } else {
    v_648 = sub_48;
  };
  if (instanciador_c4_lamp) {
    v_649 = sub_46;
  } else {
    v_649 = v_648;
  };
  if (instanciador_c4) {
    sub_45 = v_649;
  } else {
    sub_45 = v_651;
  };
  if (instanciador_ck_13_1) {
    sub_49 = false;
  } else {
    sub_49 = sub_45;
  };
  if (instanciador_c3_lamp) {
    v_654 = sub_49;
  } else {
    v_654 = false;
  };
  if (instanciador_l3) {
    v_655 = v_654;
  } else {
    v_655 = false;
  };
  if (instanciador_c3_lamp) {
    v_652 = sub_45;
  } else {
    v_652 = sub_49;
  };
  if (instanciador_l3) {
    v_653 = sub_45;
  } else {
    v_653 = v_652;
  };
  if (instanciador_c3) {
    sub_44 = v_653;
  } else {
    sub_44 = v_655;
  };
  if (instanciador_ck_11_1) {
    sub_50 = false;
  } else {
    sub_50 = sub_44;
  };
  if (instanciador_c2_lamp) {
    v_658 = sub_50;
  } else {
    v_658 = false;
  };
  if (instanciador_l2) {
    v_659 = v_658;
  } else {
    v_659 = false;
  };
  if (instanciador_c2_lamp) {
    v_656 = sub_44;
  } else {
    v_656 = sub_50;
  };
  if (instanciador_l2) {
    v_657 = sub_44;
  } else {
    v_657 = v_656;
  };
  if (instanciador_c2) {
    sub_43 = v_657;
  } else {
    sub_43 = v_659;
  };
  if (instanciador_ck_9_1) {
    sub_51 = false;
  } else {
    sub_51 = sub_43;
  };
  if (instanciador_c1_lamp) {
    v_662 = sub_51;
  } else {
    v_662 = false;
  };
  if (instanciador_l1) {
    v_663 = v_662;
  } else {
    v_663 = false;
  };
  if (instanciador_c1_lamp) {
    v_660 = sub_43;
  } else {
    v_660 = sub_51;
  };
  if (instanciador_l1) {
    v_661 = sub_43;
  } else {
    v_661 = v_660;
  };
  if (instanciador_c1) {
    sub_42 = v_661;
  } else {
    sub_42 = v_663;
  };
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (instanciador_v_341) {
    sub_4 = sub_38;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  v_592 = !(instanciador_inpSl);
  sub_74 = (v_592&&false);
  if (instanciador_c_somL) {
    v_593 = sub_28;
  } else {
    v_593 = sub_74;
  };
  if (instanciador_ck_27_1) {
    v_594 = v_593;
  } else {
    v_594 = sub_29;
  };
  if (instanciador_c_somL) {
    sub_75 = sub_74;
  } else {
    sub_75 = false;
  };
  if (instanciador_ck_27_1) {
    v_595 = false;
  } else {
    v_595 = sub_75;
  };
  if (instanciador_csl) {
    sub_73 = v_594;
  } else {
    sub_73 = v_595;
  };
  sub_72 = sub_73;
  if (instanciador_ck_23_1) {
    sub_71 = sub_72;
  } else {
    sub_71 = false;
  };
  if (instanciador_inpMp) {
    v_598 = sub_71;
  } else {
    v_598 = sub_72;
  };
  if (instanciador_c_microP) {
    v_599 = v_598;
  } else {
    v_599 = sub_72;
  };
  if (instanciador_inpMp) {
    v_596 = false;
  } else {
    v_596 = sub_71;
  };
  if (instanciador_c_microP) {
    v_597 = false;
  } else {
    v_597 = v_596;
  };
  if (instanciador_cmp) {
    sub_70 = v_597;
  } else {
    sub_70 = v_599;
  };
  if (instanciador_ck_31_1) {
    sub_76 = false;
  } else {
    sub_76 = sub_70;
  };
  if (instanciador_inpGela) {
    v_602 = sub_76;
  } else {
    v_602 = false;
  };
  if (instanciador_c_gela) {
    v_603 = v_602;
  } else {
    v_603 = false;
  };
  if (instanciador_inpGela) {
    v_600 = sub_70;
  } else {
    v_600 = sub_76;
  };
  if (instanciador_c_gela) {
    v_601 = sub_70;
  } else {
    v_601 = v_600;
  };
  if (instanciador_cg) {
    sub_69 = v_601;
  } else {
    sub_69 = v_603;
  };
  if (instanciador_ck_29_1) {
    sub_77 = false;
  } else {
    sub_77 = sub_69;
  };
  if (instanciador_inpProj) {
    v_606 = sub_77;
  } else {
    v_606 = false;
  };
  if (instanciador_c_proj) {
    v_607 = v_606;
  } else {
    v_607 = false;
  };
  if (instanciador_inpProj) {
    v_604 = sub_69;
  } else {
    v_604 = sub_77;
  };
  if (instanciador_c_proj) {
    v_605 = sub_69;
  } else {
    v_605 = v_604;
  };
  if (instanciador_cp) {
    sub_68 = v_605;
  } else {
    sub_68 = v_607;
  };
  if (instanciador_ck_25_1) {
    sub_67 = sub_68;
  } else {
    sub_67 = false;
  };
  if (instanciador_inpSp) {
    v_610 = sub_67;
  } else {
    v_610 = sub_68;
  };
  if (instanciador_c_somP) {
    v_611 = v_610;
  } else {
    v_611 = sub_68;
  };
  if (instanciador_inpSp) {
    v_608 = false;
  } else {
    v_608 = sub_67;
  };
  if (instanciador_c_somP) {
    v_609 = false;
  } else {
    v_609 = v_608;
  };
  if (instanciador_csp) {
    sub_66 = v_609;
  } else {
    sub_66 = v_611;
  };
  if (instanciador_ck_21_1) {
    sub_78 = false;
  } else {
    sub_78 = sub_66;
  };
  if (instanciador_inpMl) {
    v_614 = sub_78;
  } else {
    v_614 = false;
  };
  if (instanciador_c_microL) {
    v_615 = v_614;
  } else {
    v_615 = false;
  };
  if (instanciador_inpMl) {
    v_612 = sub_66;
  } else {
    v_612 = sub_78;
  };
  if (instanciador_c_microL) {
    v_613 = sub_66;
  } else {
    v_613 = v_612;
  };
  if (instanciador_cml) {
    sub_65 = v_613;
  } else {
    sub_65 = v_615;
  };
  if (instanciador_ck_19_1) {
    sub_79 = false;
  } else {
    sub_79 = sub_65;
  };
  if (instanciador_lv) {
    v_618 = sub_65;
  } else {
    v_618 = sub_79;
  };
  if (instanciador_cv) {
    v_619 = v_618;
  } else {
    v_619 = false;
  };
  if (instanciador_lv) {
    v_616 = sub_79;
  } else {
    v_616 = false;
  };
  if (instanciador_cv) {
    v_617 = sub_65;
  } else {
    v_617 = v_616;
  };
  if (instanciador_c_vent) {
    sub_64 = v_617;
  } else {
    sub_64 = v_619;
  };
  if (instanciador_ck_17_1) {
    sub_80 = false;
  } else {
    sub_80 = sub_64;
  };
  if (instanciador_lx) {
    v_622 = sub_80;
  } else {
    v_622 = false;
  };
  if (instanciador_c_lampExt) {
    v_623 = v_622;
  } else {
    v_623 = false;
  };
  if (instanciador_lx) {
    v_620 = sub_64;
  } else {
    v_620 = sub_80;
  };
  if (instanciador_c_lampExt) {
    v_621 = sub_64;
  } else {
    v_621 = v_620;
  };
  if (instanciador_cx) {
    sub_63 = v_621;
  } else {
    sub_63 = v_623;
  };
  if (instanciador_ck_15_1) {
    sub_62 = sub_63;
  } else {
    sub_62 = false;
  };
  if (instanciador_l4) {
    v_626 = sub_62;
  } else {
    v_626 = sub_63;
  };
  if (instanciador_c4_lamp) {
    v_627 = v_626;
  } else {
    v_627 = sub_63;
  };
  if (instanciador_l4) {
    v_624 = false;
  } else {
    v_624 = sub_62;
  };
  if (instanciador_c4_lamp) {
    v_625 = false;
  } else {
    v_625 = v_624;
  };
  if (instanciador_c4) {
    sub_61 = v_625;
  } else {
    sub_61 = v_627;
  };
  if (instanciador_ck_13_1) {
    sub_81 = false;
  } else {
    sub_81 = sub_61;
  };
  if (instanciador_c3_lamp) {
    v_630 = sub_81;
  } else {
    v_630 = false;
  };
  if (instanciador_l3) {
    v_631 = v_630;
  } else {
    v_631 = false;
  };
  if (instanciador_c3_lamp) {
    v_628 = sub_61;
  } else {
    v_628 = sub_81;
  };
  if (instanciador_l3) {
    v_629 = sub_61;
  } else {
    v_629 = v_628;
  };
  if (instanciador_c3) {
    sub_60 = v_629;
  } else {
    sub_60 = v_631;
  };
  if (instanciador_ck_11_1) {
    sub_59 = sub_60;
  } else {
    sub_59 = false;
  };
  if (instanciador_c2_lamp) {
    v_634 = sub_59;
  } else {
    v_634 = sub_60;
  };
  if (instanciador_l2) {
    v_635 = v_634;
  } else {
    v_635 = sub_60;
  };
  if (instanciador_c2_lamp) {
    v_632 = false;
  } else {
    v_632 = sub_59;
  };
  if (instanciador_l2) {
    v_633 = false;
  } else {
    v_633 = v_632;
  };
  if (instanciador_c2) {
    sub_58 = v_633;
  } else {
    sub_58 = v_635;
  };
  if (instanciador_ck_9_1) {
    sub_57 = sub_58;
  } else {
    sub_57 = false;
  };
  if (instanciador_c1_lamp) {
    v_638 = sub_57;
  } else {
    v_638 = sub_58;
  };
  if (instanciador_l1) {
    v_639 = v_638;
  } else {
    v_639 = sub_58;
  };
  if (instanciador_c1_lamp) {
    v_636 = false;
  } else {
    v_636 = sub_57;
  };
  if (instanciador_l1) {
    v_637 = false;
  } else {
    v_637 = v_636;
  };
  if (instanciador_c1) {
    sub_56 = v_637;
  } else {
    sub_56 = v_639;
  };
  sub_55 = sub_56;
  sub_54 = sub_55;
  sub_117 = sub_29;
  sub_116 = sub_117;
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  sub_90 = sub_91;
  sub_89 = sub_90;
  sub_88 = sub_89;
  sub_87 = sub_88;
  sub_86 = sub_87;
  sub_85 = sub_86;
  sub_84 = sub_85;
  sub_83 = sub_84;
  if (instanciador_neutro_input) {
    v_640 = sub_83;
  } else {
    v_640 = sub_9;
  };
  v_544 = !(instanciador_inpSl);
  sub_143 = (v_544||false);
  if (instanciador_c_somL) {
    v_545 = false;
  } else {
    v_545 = sub_143;
  };
  if (instanciador_ck_27_1) {
    v_546 = v_545;
  } else {
    v_546 = false;
  };
  sub_145 = true;
  if (instanciador_c_somL) {
    sub_144 = sub_143;
  } else {
    sub_144 = sub_145;
  };
  sub_146 = sub_145;
  if (instanciador_ck_27_1) {
    v_547 = sub_146;
  } else {
    v_547 = sub_144;
  };
  if (instanciador_csl) {
    sub_142 = v_546;
  } else {
    sub_142 = v_547;
  };
  if (instanciador_ck_33_1) {
    sub_141 = sub_142;
  } else {
    sub_141 = sub_25;
  };
  if (instanciador_inpAlarm) {
    sub_140 = sub_25;
  } else {
    sub_140 = sub_141;
  };
  if (instanciador_ck_23_1) {
    sub_139 = sub_140;
  } else {
    sub_139 = false;
  };
  if (instanciador_inpMp) {
    v_550 = sub_139;
  } else {
    v_550 = sub_140;
  };
  if (instanciador_c_microP) {
    v_551 = v_550;
  } else {
    v_551 = sub_140;
  };
  if (instanciador_inpMp) {
    v_548 = false;
  } else {
    v_548 = sub_139;
  };
  if (instanciador_c_microP) {
    v_549 = false;
  } else {
    v_549 = v_548;
  };
  if (instanciador_cmp) {
    sub_138 = v_549;
  } else {
    sub_138 = v_551;
  };
  if (instanciador_ck_31_1) {
    sub_137 = sub_138;
  } else {
    sub_137 = false;
  };
  if (instanciador_inpGela) {
    v_554 = sub_137;
  } else {
    v_554 = sub_138;
  };
  if (instanciador_c_gela) {
    v_555 = v_554;
  } else {
    v_555 = sub_138;
  };
  if (instanciador_inpGela) {
    v_552 = false;
  } else {
    v_552 = sub_137;
  };
  if (instanciador_c_gela) {
    v_553 = false;
  } else {
    v_553 = v_552;
  };
  if (instanciador_cg) {
    sub_136 = v_553;
  } else {
    sub_136 = v_555;
  };
  if (instanciador_ck_29_1) {
    sub_135 = sub_136;
  } else {
    sub_135 = false;
  };
  if (instanciador_inpProj) {
    v_558 = sub_135;
  } else {
    v_558 = sub_136;
  };
  if (instanciador_c_proj) {
    v_559 = v_558;
  } else {
    v_559 = sub_136;
  };
  if (instanciador_inpProj) {
    v_556 = false;
  } else {
    v_556 = sub_135;
  };
  if (instanciador_c_proj) {
    v_557 = false;
  } else {
    v_557 = v_556;
  };
  if (instanciador_cp) {
    sub_134 = v_557;
  } else {
    sub_134 = v_559;
  };
  if (instanciador_ck_25_1) {
    sub_133 = sub_134;
  } else {
    sub_133 = false;
  };
  if (instanciador_inpSp) {
    v_562 = sub_133;
  } else {
    v_562 = sub_134;
  };
  if (instanciador_c_somP) {
    v_563 = v_562;
  } else {
    v_563 = sub_134;
  };
  if (instanciador_inpSp) {
    v_560 = false;
  } else {
    v_560 = sub_133;
  };
  if (instanciador_c_somP) {
    v_561 = false;
  } else {
    v_561 = v_560;
  };
  if (instanciador_csp) {
    sub_132 = v_561;
  } else {
    sub_132 = v_563;
  };
  if (instanciador_ck_21_1) {
    sub_131 = sub_132;
  } else {
    sub_131 = false;
  };
  if (instanciador_inpMl) {
    v_566 = sub_131;
  } else {
    v_566 = sub_132;
  };
  if (instanciador_c_microL) {
    v_567 = v_566;
  } else {
    v_567 = sub_132;
  };
  if (instanciador_inpMl) {
    v_564 = false;
  } else {
    v_564 = sub_131;
  };
  if (instanciador_c_microL) {
    v_565 = false;
  } else {
    v_565 = v_564;
  };
  if (instanciador_cml) {
    sub_130 = v_565;
  } else {
    sub_130 = v_567;
  };
  if (instanciador_ck_19_1) {
    sub_129 = sub_130;
  } else {
    sub_129 = false;
  };
  if (instanciador_lv) {
    v_570 = false;
  } else {
    v_570 = sub_129;
  };
  if (instanciador_cv) {
    v_571 = v_570;
  } else {
    v_571 = sub_130;
  };
  if (instanciador_lv) {
    v_568 = sub_129;
  } else {
    v_568 = sub_130;
  };
  if (instanciador_cv) {
    v_569 = false;
  } else {
    v_569 = v_568;
  };
  if (instanciador_c_vent) {
    sub_128 = v_569;
  } else {
    sub_128 = v_571;
  };
  if (instanciador_ck_17_1) {
    sub_127 = sub_128;
  } else {
    sub_127 = false;
  };
  if (instanciador_lx) {
    v_574 = sub_127;
  } else {
    v_574 = sub_128;
  };
  if (instanciador_c_lampExt) {
    v_575 = v_574;
  } else {
    v_575 = sub_128;
  };
  if (instanciador_lx) {
    v_572 = false;
  } else {
    v_572 = sub_127;
  };
  if (instanciador_c_lampExt) {
    v_573 = false;
  } else {
    v_573 = v_572;
  };
  if (instanciador_cx) {
    sub_126 = v_573;
  } else {
    sub_126 = v_575;
  };
  if (instanciador_ck_15_1) {
    sub_125 = sub_126;
  } else {
    sub_125 = false;
  };
  if (instanciador_l4) {
    v_578 = sub_125;
  } else {
    v_578 = sub_126;
  };
  if (instanciador_c4_lamp) {
    v_579 = v_578;
  } else {
    v_579 = sub_126;
  };
  if (instanciador_l4) {
    v_576 = false;
  } else {
    v_576 = sub_125;
  };
  if (instanciador_c4_lamp) {
    v_577 = false;
  } else {
    v_577 = v_576;
  };
  if (instanciador_c4) {
    sub_124 = v_577;
  } else {
    sub_124 = v_579;
  };
  if (instanciador_ck_13_1) {
    sub_123 = sub_124;
  } else {
    sub_123 = false;
  };
  if (instanciador_c3_lamp) {
    v_582 = sub_123;
  } else {
    v_582 = sub_124;
  };
  if (instanciador_l3) {
    v_583 = v_582;
  } else {
    v_583 = sub_124;
  };
  if (instanciador_c3_lamp) {
    v_580 = false;
  } else {
    v_580 = sub_123;
  };
  if (instanciador_l3) {
    v_581 = false;
  } else {
    v_581 = v_580;
  };
  if (instanciador_c3) {
    sub_122 = v_581;
  } else {
    sub_122 = v_583;
  };
  if (instanciador_ck_11_1) {
    sub_121 = sub_122;
  } else {
    sub_121 = false;
  };
  if (instanciador_c2_lamp) {
    v_586 = sub_121;
  } else {
    v_586 = sub_122;
  };
  if (instanciador_l2) {
    v_587 = v_586;
  } else {
    v_587 = sub_122;
  };
  if (instanciador_c2_lamp) {
    v_584 = false;
  } else {
    v_584 = sub_121;
  };
  if (instanciador_l2) {
    v_585 = false;
  } else {
    v_585 = v_584;
  };
  if (instanciador_c2) {
    sub_120 = v_585;
  } else {
    sub_120 = v_587;
  };
  if (instanciador_ck_9_1) {
    sub_119 = sub_120;
  } else {
    sub_119 = false;
  };
  if (instanciador_c1_lamp) {
    v_590 = sub_119;
  } else {
    v_590 = sub_120;
  };
  if (instanciador_l1) {
    v_591 = v_590;
  } else {
    v_591 = sub_120;
  };
  if (instanciador_c1_lamp) {
    v_588 = false;
  } else {
    v_588 = sub_119;
  };
  if (instanciador_l1) {
    v_589 = false;
  } else {
    v_589 = v_588;
  };
  if (instanciador_c1) {
    sub_118 = v_589;
  } else {
    sub_118 = v_591;
  };
  if (instanciador_neutro_input) {
    sub_82 = sub_83;
  } else {
    sub_82 = sub_118;
  };
  if (instanciador_seguranca_input) {
    v_641 = sub_82;
  } else {
    v_641 = v_640;
  };
  if (instanciador_domingol_input) {
    v_642 = sub_54;
  } else {
    v_642 = v_641;
  };
  if (instanciador_domingo_input) {
    sub_53 = sub_39;
  } else {
    sub_53 = v_642;
  };
  if (instanciador_v_341) {
    v_643 = sub_38;
  } else {
    v_643 = sub_53;
  };
  if (instanciador_sexta_input) {
    sub_52 = sub_38;
  } else {
    sub_52 = v_643;
  };
  if (instanciador_v_339) {
    v_711 = sub_52;
  } else {
    v_711 = sub_3;
  };
  if (instanciador_neutro_input) {
    sub_151 = sub_83;
  } else {
    sub_151 = sub_42;
  };
  if (instanciador_seguranca_input) {
    v_543 = sub_82;
  } else {
    v_543 = sub_151;
  };
  if (instanciador_domingol_input) {
    sub_150 = sub_54;
  } else {
    sub_150 = v_543;
  };
  if (instanciador_domingo_input) {
    sub_149 = sub_39;
  } else {
    sub_149 = sub_150;
  };
  if (instanciador_v_341) {
    sub_148 = sub_38;
  } else {
    sub_148 = sub_149;
  };
  sub_147 = sub_148;
  if (instanciador_v_339) {
    v_712 = sub_52;
  } else {
    v_712 = sub_147;
  };
  if (instanciador_ebd_input) {
    sub_2 = v_711;
  } else {
    sub_2 = v_712;
  };
  if (instanciador_seguranca_input) {
    v_539 = sub_118;
  } else {
    v_539 = sub_83;
  };
  if (instanciador_domingol_input) {
    v_540 = sub_54;
    v_538 = sub_54;
  } else {
    v_540 = v_539;
    v_538 = sub_40;
  };
  if (instanciador_domingo_input) {
    v_541 = v_538;
  } else {
    v_541 = v_540;
  };
  if (instanciador_domingol_input) {
    v_537 = sub_54;
    v_536 = sub_54;
  } else {
    v_537 = sub_82;
    v_536 = sub_151;
  };
  if (instanciador_domingo_input) {
    sub_153 = v_536;
  } else {
    sub_153 = v_537;
  };
  if (instanciador_v_341) {
    v_542 = v_541;
  } else {
    v_542 = sub_153;
  };
  if (instanciador_sexta_input) {
    sub_152 = sub_38;
  } else {
    sub_152 = v_542;
  };
  if (instanciador_neutro_input) {
    v_535 = sub_83;
  } else {
    v_535 = sub_56;
  };
  if (instanciador_seguranca_input) {
    sub_155 = sub_82;
  } else {
    sub_155 = v_535;
  };
  if (instanciador_domingo_input) {
    sub_154 = sub_39;
  } else {
    sub_154 = sub_155;
  };
  if (instanciador_v_341) {
    v_713 = sub_150;
  } else {
    v_713 = sub_154;
  };
  if (instanciador_sexta_input) {
    v_714 = sub_38;
  } else {
    v_714 = v_713;
  };
  if (instanciador_v_339) {
    v_715 = v_714;
  } else {
    v_715 = sub_152;
  };
  if (instanciador_ebd_input) {
    v_716 = sub_5;
  } else {
    v_716 = v_715;
  };
  if (instanciador_v_340) {
    sub_1 = v_716;
  } else {
    sub_1 = sub_2;
  };
  if (instanciador_inpAlarm) {
    sub_178 = sub_141;
  } else {
    sub_178 = sub_142;
  };
  if (instanciador_ck_23_1) {
    sub_179 = false;
  } else {
    sub_179 = sub_178;
  };
  if (instanciador_inpMp) {
    v_491 = sub_179;
  } else {
    v_491 = false;
  };
  if (instanciador_c_microP) {
    v_492 = v_491;
  } else {
    v_492 = false;
  };
  if (instanciador_inpMp) {
    v_489 = sub_178;
  } else {
    v_489 = sub_179;
  };
  if (instanciador_c_microP) {
    v_490 = sub_178;
  } else {
    v_490 = v_489;
  };
  if (instanciador_cmp) {
    sub_177 = v_490;
  } else {
    sub_177 = v_492;
  };
  if (instanciador_ck_31_1) {
    sub_180 = false;
  } else {
    sub_180 = sub_177;
  };
  if (instanciador_inpGela) {
    v_495 = sub_180;
  } else {
    v_495 = false;
  };
  if (instanciador_c_gela) {
    v_496 = v_495;
  } else {
    v_496 = false;
  };
  if (instanciador_inpGela) {
    v_493 = sub_177;
  } else {
    v_493 = sub_180;
  };
  if (instanciador_c_gela) {
    v_494 = sub_177;
  } else {
    v_494 = v_493;
  };
  if (instanciador_cg) {
    sub_176 = v_494;
  } else {
    sub_176 = v_496;
  };
  if (instanciador_ck_29_1) {
    sub_175 = sub_176;
  } else {
    sub_175 = false;
  };
  if (instanciador_inpProj) {
    v_499 = sub_175;
  } else {
    v_499 = sub_176;
  };
  if (instanciador_c_proj) {
    v_500 = v_499;
  } else {
    v_500 = sub_176;
  };
  if (instanciador_inpProj) {
    v_497 = false;
  } else {
    v_497 = sub_175;
  };
  if (instanciador_c_proj) {
    v_498 = false;
  } else {
    v_498 = v_497;
  };
  if (instanciador_cp) {
    sub_174 = v_498;
  } else {
    sub_174 = v_500;
  };
  if (instanciador_ck_25_1) {
    sub_181 = false;
  } else {
    sub_181 = sub_174;
  };
  if (instanciador_inpSp) {
    v_503 = sub_181;
  } else {
    v_503 = false;
  };
  if (instanciador_c_somP) {
    v_504 = v_503;
  } else {
    v_504 = false;
  };
  if (instanciador_inpSp) {
    v_501 = sub_174;
  } else {
    v_501 = sub_181;
  };
  if (instanciador_c_somP) {
    v_502 = sub_174;
  } else {
    v_502 = v_501;
  };
  if (instanciador_csp) {
    sub_173 = v_502;
  } else {
    sub_173 = v_504;
  };
  if (instanciador_ck_21_1) {
    sub_172 = sub_173;
  } else {
    sub_172 = false;
  };
  if (instanciador_inpMl) {
    v_507 = sub_172;
  } else {
    v_507 = sub_173;
  };
  if (instanciador_c_microL) {
    v_508 = v_507;
  } else {
    v_508 = sub_173;
  };
  if (instanciador_inpMl) {
    v_505 = false;
  } else {
    v_505 = sub_172;
  };
  if (instanciador_c_microL) {
    v_506 = false;
  } else {
    v_506 = v_505;
  };
  if (instanciador_cml) {
    sub_171 = v_506;
  } else {
    sub_171 = v_508;
  };
  if (instanciador_ck_19_1) {
    sub_182 = false;
  } else {
    sub_182 = sub_171;
  };
  if (instanciador_lv) {
    v_511 = sub_171;
  } else {
    v_511 = sub_182;
  };
  if (instanciador_cv) {
    v_512 = v_511;
  } else {
    v_512 = false;
  };
  if (instanciador_lv) {
    v_509 = sub_182;
  } else {
    v_509 = false;
  };
  if (instanciador_cv) {
    v_510 = sub_171;
  } else {
    v_510 = v_509;
  };
  if (instanciador_c_vent) {
    sub_170 = v_510;
  } else {
    sub_170 = v_512;
  };
  if (instanciador_ck_17_1) {
    sub_169 = sub_170;
  } else {
    sub_169 = false;
  };
  if (instanciador_lx) {
    v_515 = sub_169;
    v_513 = false;
  } else {
    v_515 = sub_170;
    v_513 = sub_169;
  };
  if (instanciador_c_lampExt) {
    v_514 = false;
  } else {
    v_514 = v_513;
  };
  sub_183 = sub_170;
  if (instanciador_c_lampExt) {
    v_516 = v_515;
  } else {
    v_516 = sub_183;
  };
  if (instanciador_cx) {
    sub_168 = v_514;
  } else {
    sub_168 = v_516;
  };
  if (instanciador_ck_15_1) {
    sub_167 = sub_168;
  } else {
    sub_167 = false;
  };
  if (instanciador_l4) {
    v_519 = sub_167;
  } else {
    v_519 = sub_168;
  };
  if (instanciador_c4_lamp) {
    v_520 = v_519;
  } else {
    v_520 = sub_168;
  };
  if (instanciador_l4) {
    v_517 = false;
  } else {
    v_517 = sub_167;
  };
  if (instanciador_c4_lamp) {
    v_518 = false;
  } else {
    v_518 = v_517;
  };
  if (instanciador_c4) {
    sub_166 = v_518;
  } else {
    sub_166 = v_520;
  };
  if (instanciador_ck_13_1) {
    sub_184 = false;
  } else {
    sub_184 = sub_166;
  };
  if (instanciador_c3_lamp) {
    v_523 = sub_184;
  } else {
    v_523 = false;
  };
  if (instanciador_l3) {
    v_524 = v_523;
  } else {
    v_524 = false;
  };
  if (instanciador_c3_lamp) {
    v_521 = sub_166;
  } else {
    v_521 = sub_184;
  };
  if (instanciador_l3) {
    v_522 = sub_166;
  } else {
    v_522 = v_521;
  };
  if (instanciador_c3) {
    sub_165 = v_522;
  } else {
    sub_165 = v_524;
  };
  if (instanciador_ck_11_1) {
    sub_185 = false;
  } else {
    sub_185 = sub_165;
  };
  if (instanciador_c2_lamp) {
    v_527 = sub_185;
  } else {
    v_527 = false;
  };
  if (instanciador_l2) {
    v_528 = v_527;
  } else {
    v_528 = false;
  };
  if (instanciador_c2_lamp) {
    v_525 = sub_165;
  } else {
    v_525 = sub_185;
  };
  if (instanciador_l2) {
    v_526 = sub_165;
  } else {
    v_526 = v_525;
  };
  if (instanciador_c2) {
    sub_164 = v_526;
  } else {
    sub_164 = v_528;
  };
  if (instanciador_ck_9_1) {
    sub_186 = false;
  } else {
    sub_186 = sub_164;
  };
  if (instanciador_c1_lamp) {
    v_531 = sub_186;
  } else {
    v_531 = false;
  };
  if (instanciador_l1) {
    v_532 = v_531;
  } else {
    v_532 = false;
  };
  if (instanciador_c1_lamp) {
    v_529 = sub_164;
  } else {
    v_529 = sub_186;
  };
  if (instanciador_l1) {
    v_530 = sub_164;
  } else {
    v_530 = v_529;
  };
  if (instanciador_c1) {
    sub_163 = v_530;
  } else {
    sub_163 = v_532;
  };
  sub_162 = sub_163;
  sub_161 = sub_162;
  sub_160 = sub_161;
  sub_159 = sub_160;
  if (instanciador_ck_17_1) {
    sub_196 = false;
  } else {
    sub_196 = sub_170;
  };
  if (instanciador_lx) {
    v_471 = sub_196;
  } else {
    v_471 = false;
  };
  if (instanciador_c_lampExt) {
    v_472 = v_471;
  } else {
    v_472 = false;
  };
  if (instanciador_lx) {
    v_469 = sub_170;
  } else {
    v_469 = sub_196;
  };
  if (instanciador_c_lampExt) {
    v_470 = sub_183;
  } else {
    v_470 = v_469;
  };
  if (instanciador_cx) {
    sub_195 = v_470;
  } else {
    sub_195 = v_472;
  };
  if (instanciador_ck_15_1) {
    sub_197 = false;
  } else {
    sub_197 = sub_195;
  };
  if (instanciador_l4) {
    v_475 = sub_197;
  } else {
    v_475 = false;
  };
  if (instanciador_c4_lamp) {
    v_476 = v_475;
  } else {
    v_476 = false;
  };
  if (instanciador_l4) {
    v_473 = sub_195;
  } else {
    v_473 = sub_197;
  };
  if (instanciador_c4_lamp) {
    v_474 = sub_195;
  } else {
    v_474 = v_473;
  };
  if (instanciador_c4) {
    sub_194 = v_474;
  } else {
    sub_194 = v_476;
  };
  if (instanciador_ck_13_1) {
    sub_198 = false;
  } else {
    sub_198 = sub_194;
  };
  if (instanciador_c3_lamp) {
    v_479 = sub_198;
  } else {
    v_479 = false;
  };
  if (instanciador_l3) {
    v_480 = v_479;
  } else {
    v_480 = false;
  };
  if (instanciador_c3_lamp) {
    v_477 = sub_194;
  } else {
    v_477 = sub_198;
  };
  if (instanciador_l3) {
    v_478 = sub_194;
  } else {
    v_478 = v_477;
  };
  if (instanciador_c3) {
    sub_193 = v_478;
  } else {
    sub_193 = v_480;
  };
  if (instanciador_ck_11_1) {
    sub_199 = false;
  } else {
    sub_199 = sub_193;
  };
  if (instanciador_c2_lamp) {
    v_483 = sub_199;
  } else {
    v_483 = false;
  };
  if (instanciador_l2) {
    v_484 = v_483;
  } else {
    v_484 = false;
  };
  if (instanciador_c2_lamp) {
    v_481 = sub_193;
  } else {
    v_481 = sub_199;
  };
  if (instanciador_l2) {
    v_482 = sub_193;
  } else {
    v_482 = v_481;
  };
  if (instanciador_c2) {
    sub_192 = v_482;
  } else {
    sub_192 = v_484;
  };
  if (instanciador_ck_9_1) {
    sub_200 = false;
  } else {
    sub_200 = sub_192;
  };
  if (instanciador_c1_lamp) {
    v_487 = sub_200;
  } else {
    v_487 = false;
  };
  if (instanciador_l1) {
    v_488 = v_487;
  } else {
    v_488 = false;
  };
  if (instanciador_c1_lamp) {
    v_485 = sub_192;
  } else {
    v_485 = sub_200;
  };
  if (instanciador_l1) {
    v_486 = sub_192;
  } else {
    v_486 = v_485;
  };
  if (instanciador_c1) {
    sub_191 = v_486;
  } else {
    sub_191 = v_488;
  };
  sub_190 = sub_191;
  sub_189 = sub_190;
  sub_188 = sub_189;
  sub_187 = sub_188;
  if (instanciador_v_341) {
    sub_158 = sub_187;
  } else {
    sub_158 = sub_159;
  };
  sub_157 = sub_158;
  sub_223 = (instanciador_inpSl||false);
  if (instanciador_c_somL) {
    v_417 = sub_145;
  } else {
    v_417 = sub_223;
  };
  if (instanciador_ck_27_1) {
    v_418 = v_417;
  } else {
    v_418 = sub_146;
  };
  if (instanciador_c_somL) {
    sub_224 = sub_223;
  } else {
    sub_224 = false;
  };
  if (instanciador_ck_27_1) {
    v_419 = false;
  } else {
    v_419 = sub_224;
  };
  if (instanciador_csl) {
    sub_222 = v_418;
  } else {
    sub_222 = v_419;
  };
  if (instanciador_ck_33_1) {
    v_420 = sub_222;
  } else {
    v_420 = sub_73;
  };
  if (instanciador_inpAlarm) {
    sub_221 = v_420;
  } else {
    sub_221 = sub_222;
  };
  if (instanciador_ck_23_1) {
    sub_220 = sub_221;
  } else {
    sub_220 = false;
  };
  if (instanciador_inpMp) {
    v_423 = sub_220;
  } else {
    v_423 = sub_221;
  };
  if (instanciador_c_microP) {
    v_424 = v_423;
  } else {
    v_424 = sub_221;
  };
  if (instanciador_inpMp) {
    v_421 = false;
  } else {
    v_421 = sub_220;
  };
  if (instanciador_c_microP) {
    v_422 = false;
  } else {
    v_422 = v_421;
  };
  if (instanciador_cmp) {
    sub_219 = v_422;
  } else {
    sub_219 = v_424;
  };
  if (instanciador_ck_31_1) {
    sub_225 = false;
  } else {
    sub_225 = sub_219;
  };
  if (instanciador_inpGela) {
    v_427 = sub_225;
  } else {
    v_427 = false;
  };
  if (instanciador_c_gela) {
    v_428 = v_427;
  } else {
    v_428 = false;
  };
  if (instanciador_inpGela) {
    v_425 = sub_219;
  } else {
    v_425 = sub_225;
  };
  if (instanciador_c_gela) {
    v_426 = sub_219;
  } else {
    v_426 = v_425;
  };
  if (instanciador_cg) {
    sub_218 = v_426;
  } else {
    sub_218 = v_428;
  };
  if (instanciador_ck_29_1) {
    sub_226 = false;
  } else {
    sub_226 = sub_218;
  };
  if (instanciador_inpProj) {
    v_431 = sub_226;
  } else {
    v_431 = false;
  };
  if (instanciador_c_proj) {
    v_432 = v_431;
  } else {
    v_432 = false;
  };
  if (instanciador_inpProj) {
    v_429 = sub_218;
  } else {
    v_429 = sub_226;
  };
  if (instanciador_c_proj) {
    v_430 = sub_218;
  } else {
    v_430 = v_429;
  };
  if (instanciador_cp) {
    sub_217 = v_430;
  } else {
    sub_217 = v_432;
  };
  if (instanciador_ck_25_1) {
    sub_216 = sub_217;
  } else {
    sub_216 = false;
  };
  if (instanciador_inpSp) {
    v_435 = sub_216;
  } else {
    v_435 = sub_217;
  };
  if (instanciador_c_somP) {
    v_436 = v_435;
  } else {
    v_436 = sub_217;
  };
  if (instanciador_inpSp) {
    v_433 = false;
  } else {
    v_433 = sub_216;
  };
  if (instanciador_c_somP) {
    v_434 = false;
  } else {
    v_434 = v_433;
  };
  if (instanciador_csp) {
    sub_215 = v_434;
  } else {
    sub_215 = v_436;
  };
  if (instanciador_ck_21_1) {
    sub_227 = false;
  } else {
    sub_227 = sub_215;
  };
  if (instanciador_inpMl) {
    v_439 = sub_227;
  } else {
    v_439 = false;
  };
  if (instanciador_c_microL) {
    v_440 = v_439;
  } else {
    v_440 = false;
  };
  if (instanciador_inpMl) {
    v_437 = sub_215;
  } else {
    v_437 = sub_227;
  };
  if (instanciador_c_microL) {
    v_438 = sub_215;
  } else {
    v_438 = v_437;
  };
  if (instanciador_cml) {
    sub_214 = v_438;
  } else {
    sub_214 = v_440;
  };
  if (instanciador_ck_19_1) {
    sub_228 = false;
  } else {
    sub_228 = sub_214;
  };
  if (instanciador_lv) {
    v_443 = sub_214;
  } else {
    v_443 = sub_228;
  };
  if (instanciador_cv) {
    v_444 = v_443;
  } else {
    v_444 = false;
  };
  if (instanciador_lv) {
    v_441 = sub_228;
  } else {
    v_441 = false;
  };
  if (instanciador_cv) {
    v_442 = sub_214;
  } else {
    v_442 = v_441;
  };
  if (instanciador_c_vent) {
    sub_213 = v_442;
  } else {
    sub_213 = v_444;
  };
  if (instanciador_ck_17_1) {
    sub_229 = false;
  } else {
    sub_229 = sub_213;
  };
  if (instanciador_lx) {
    v_447 = sub_229;
  } else {
    v_447 = false;
  };
  if (instanciador_c_lampExt) {
    v_448 = v_447;
  } else {
    v_448 = false;
  };
  if (instanciador_lx) {
    v_445 = sub_213;
  } else {
    v_445 = sub_229;
  };
  if (instanciador_c_lampExt) {
    v_446 = sub_213;
  } else {
    v_446 = v_445;
  };
  if (instanciador_cx) {
    sub_212 = v_446;
  } else {
    sub_212 = v_448;
  };
  if (instanciador_ck_15_1) {
    sub_211 = sub_212;
  } else {
    sub_211 = false;
  };
  if (instanciador_l4) {
    v_451 = sub_211;
  } else {
    v_451 = sub_212;
  };
  if (instanciador_c4_lamp) {
    v_452 = v_451;
  } else {
    v_452 = sub_212;
  };
  if (instanciador_l4) {
    v_449 = false;
  } else {
    v_449 = sub_211;
  };
  if (instanciador_c4_lamp) {
    v_450 = false;
  } else {
    v_450 = v_449;
  };
  if (instanciador_c4) {
    sub_210 = v_450;
  } else {
    sub_210 = v_452;
  };
  if (instanciador_ck_13_1) {
    sub_230 = false;
  } else {
    sub_230 = sub_210;
  };
  if (instanciador_c3_lamp) {
    v_455 = sub_230;
  } else {
    v_455 = false;
  };
  if (instanciador_l3) {
    v_456 = v_455;
  } else {
    v_456 = false;
  };
  if (instanciador_c3_lamp) {
    v_453 = sub_210;
  } else {
    v_453 = sub_230;
  };
  if (instanciador_l3) {
    v_454 = sub_210;
  } else {
    v_454 = v_453;
  };
  if (instanciador_c3) {
    sub_209 = v_454;
  } else {
    sub_209 = v_456;
  };
  if (instanciador_ck_11_1) {
    sub_208 = sub_209;
  } else {
    sub_208 = false;
  };
  if (instanciador_c2_lamp) {
    v_459 = sub_208;
  } else {
    v_459 = sub_209;
  };
  if (instanciador_l2) {
    v_460 = v_459;
  } else {
    v_460 = sub_209;
  };
  if (instanciador_c2_lamp) {
    v_457 = false;
  } else {
    v_457 = sub_208;
  };
  if (instanciador_l2) {
    v_458 = false;
  } else {
    v_458 = v_457;
  };
  if (instanciador_c2) {
    sub_207 = v_458;
  } else {
    sub_207 = v_460;
  };
  if (instanciador_ck_9_1) {
    sub_206 = sub_207;
  } else {
    sub_206 = false;
  };
  if (instanciador_c1_lamp) {
    v_463 = sub_206;
  } else {
    v_463 = sub_207;
  };
  if (instanciador_l1) {
    v_464 = v_463;
  } else {
    v_464 = sub_207;
  };
  if (instanciador_c1_lamp) {
    v_461 = false;
  } else {
    v_461 = sub_206;
  };
  if (instanciador_l1) {
    v_462 = false;
  } else {
    v_462 = v_461;
  };
  if (instanciador_c1) {
    sub_205 = v_462;
  } else {
    sub_205 = v_464;
  };
  sub_204 = sub_205;
  sub_203 = sub_204;
  sub_266 = sub_146;
  sub_265 = sub_266;
  sub_264 = sub_265;
  sub_263 = sub_264;
  sub_262 = sub_263;
  sub_261 = sub_262;
  sub_260 = sub_261;
  sub_259 = sub_260;
  sub_258 = sub_259;
  sub_257 = sub_258;
  sub_256 = sub_257;
  sub_255 = sub_256;
  sub_254 = sub_255;
  sub_253 = sub_254;
  sub_252 = sub_253;
  sub_251 = sub_252;
  sub_250 = sub_251;
  sub_249 = sub_250;
  sub_248 = sub_249;
  sub_247 = sub_248;
  sub_246 = sub_247;
  sub_245 = sub_246;
  sub_244 = sub_245;
  sub_243 = sub_244;
  sub_242 = sub_243;
  sub_241 = sub_242;
  sub_240 = sub_241;
  sub_239 = sub_240;
  sub_238 = sub_239;
  sub_237 = sub_238;
  sub_236 = sub_237;
  sub_235 = sub_236;
  sub_234 = sub_235;
  sub_233 = sub_234;
  sub_232 = sub_233;
  if (instanciador_neutro_input) {
    v_465 = sub_232;
  } else {
    v_465 = sub_163;
  };
  sub_289 = sub_142;
  if (instanciador_ck_23_1) {
    sub_288 = sub_289;
  } else {
    sub_288 = false;
  };
  if (instanciador_inpMp) {
    v_375 = sub_288;
  } else {
    v_375 = sub_289;
  };
  if (instanciador_c_microP) {
    v_376 = v_375;
  } else {
    v_376 = sub_289;
  };
  if (instanciador_inpMp) {
    v_373 = false;
  } else {
    v_373 = sub_288;
  };
  if (instanciador_c_microP) {
    v_374 = false;
  } else {
    v_374 = v_373;
  };
  if (instanciador_cmp) {
    sub_287 = v_374;
  } else {
    sub_287 = v_376;
  };
  if (instanciador_ck_31_1) {
    sub_286 = sub_287;
  } else {
    sub_286 = false;
  };
  if (instanciador_inpGela) {
    v_379 = sub_286;
  } else {
    v_379 = sub_287;
  };
  if (instanciador_c_gela) {
    v_380 = v_379;
  } else {
    v_380 = sub_287;
  };
  if (instanciador_inpGela) {
    v_377 = false;
  } else {
    v_377 = sub_286;
  };
  if (instanciador_c_gela) {
    v_378 = false;
  } else {
    v_378 = v_377;
  };
  if (instanciador_cg) {
    sub_285 = v_378;
  } else {
    sub_285 = v_380;
  };
  if (instanciador_ck_29_1) {
    sub_284 = sub_285;
  } else {
    sub_284 = false;
  };
  if (instanciador_inpProj) {
    v_383 = sub_284;
  } else {
    v_383 = sub_285;
  };
  if (instanciador_c_proj) {
    v_384 = v_383;
  } else {
    v_384 = sub_285;
  };
  if (instanciador_inpProj) {
    v_381 = false;
  } else {
    v_381 = sub_284;
  };
  if (instanciador_c_proj) {
    v_382 = false;
  } else {
    v_382 = v_381;
  };
  if (instanciador_cp) {
    sub_283 = v_382;
  } else {
    sub_283 = v_384;
  };
  if (instanciador_ck_25_1) {
    sub_282 = sub_283;
  } else {
    sub_282 = false;
  };
  if (instanciador_inpSp) {
    v_387 = sub_282;
  } else {
    v_387 = sub_283;
  };
  if (instanciador_c_somP) {
    v_388 = v_387;
  } else {
    v_388 = sub_283;
  };
  if (instanciador_inpSp) {
    v_385 = false;
  } else {
    v_385 = sub_282;
  };
  if (instanciador_c_somP) {
    v_386 = false;
  } else {
    v_386 = v_385;
  };
  if (instanciador_csp) {
    sub_281 = v_386;
  } else {
    sub_281 = v_388;
  };
  if (instanciador_ck_21_1) {
    sub_280 = sub_281;
  } else {
    sub_280 = false;
  };
  if (instanciador_inpMl) {
    v_391 = sub_280;
  } else {
    v_391 = sub_281;
  };
  if (instanciador_c_microL) {
    v_392 = v_391;
  } else {
    v_392 = sub_281;
  };
  if (instanciador_inpMl) {
    v_389 = false;
  } else {
    v_389 = sub_280;
  };
  if (instanciador_c_microL) {
    v_390 = false;
  } else {
    v_390 = v_389;
  };
  if (instanciador_cml) {
    sub_279 = v_390;
  } else {
    sub_279 = v_392;
  };
  if (instanciador_ck_19_1) {
    sub_278 = sub_279;
  } else {
    sub_278 = false;
  };
  if (instanciador_lv) {
    v_395 = false;
  } else {
    v_395 = sub_278;
  };
  if (instanciador_cv) {
    v_396 = v_395;
  } else {
    v_396 = sub_279;
  };
  if (instanciador_lv) {
    v_393 = sub_278;
  } else {
    v_393 = sub_279;
  };
  if (instanciador_cv) {
    v_394 = false;
  } else {
    v_394 = v_393;
  };
  if (instanciador_c_vent) {
    sub_277 = v_394;
  } else {
    sub_277 = v_396;
  };
  if (instanciador_ck_17_1) {
    sub_276 = sub_277;
  } else {
    sub_276 = false;
  };
  if (instanciador_lx) {
    v_399 = sub_276;
  } else {
    v_399 = sub_277;
  };
  if (instanciador_c_lampExt) {
    v_400 = v_399;
  } else {
    v_400 = sub_277;
  };
  if (instanciador_lx) {
    v_397 = false;
  } else {
    v_397 = sub_276;
  };
  if (instanciador_c_lampExt) {
    v_398 = false;
  } else {
    v_398 = v_397;
  };
  if (instanciador_cx) {
    sub_275 = v_398;
  } else {
    sub_275 = v_400;
  };
  if (instanciador_ck_15_1) {
    sub_274 = sub_275;
  } else {
    sub_274 = false;
  };
  if (instanciador_l4) {
    v_403 = sub_274;
  } else {
    v_403 = sub_275;
  };
  if (instanciador_c4_lamp) {
    v_404 = v_403;
  } else {
    v_404 = sub_275;
  };
  if (instanciador_l4) {
    v_401 = false;
  } else {
    v_401 = sub_274;
  };
  if (instanciador_c4_lamp) {
    v_402 = false;
  } else {
    v_402 = v_401;
  };
  if (instanciador_c4) {
    sub_273 = v_402;
  } else {
    sub_273 = v_404;
  };
  if (instanciador_ck_13_1) {
    sub_272 = sub_273;
  } else {
    sub_272 = false;
  };
  if (instanciador_c3_lamp) {
    v_407 = sub_272;
  } else {
    v_407 = sub_273;
  };
  if (instanciador_l3) {
    v_408 = v_407;
  } else {
    v_408 = sub_273;
  };
  if (instanciador_c3_lamp) {
    v_405 = false;
  } else {
    v_405 = sub_272;
  };
  if (instanciador_l3) {
    v_406 = false;
  } else {
    v_406 = v_405;
  };
  if (instanciador_c3) {
    sub_271 = v_406;
  } else {
    sub_271 = v_408;
  };
  if (instanciador_ck_11_1) {
    sub_270 = sub_271;
  } else {
    sub_270 = false;
  };
  if (instanciador_c2_lamp) {
    v_411 = sub_270;
  } else {
    v_411 = sub_271;
  };
  if (instanciador_l2) {
    v_412 = v_411;
  } else {
    v_412 = sub_271;
  };
  if (instanciador_c2_lamp) {
    v_409 = false;
  } else {
    v_409 = sub_270;
  };
  if (instanciador_l2) {
    v_410 = false;
  } else {
    v_410 = v_409;
  };
  if (instanciador_c2) {
    sub_269 = v_410;
  } else {
    sub_269 = v_412;
  };
  if (instanciador_ck_9_1) {
    sub_268 = sub_269;
  } else {
    sub_268 = false;
  };
  if (instanciador_c1_lamp) {
    v_415 = sub_268;
  } else {
    v_415 = sub_269;
  };
  if (instanciador_l1) {
    v_416 = v_415;
  } else {
    v_416 = sub_269;
  };
  if (instanciador_c1_lamp) {
    v_413 = false;
  } else {
    v_413 = sub_268;
  };
  if (instanciador_l1) {
    v_414 = false;
  } else {
    v_414 = v_413;
  };
  if (instanciador_c1) {
    sub_267 = v_414;
  } else {
    sub_267 = v_416;
  };
  if (instanciador_neutro_input) {
    sub_231 = sub_232;
  } else {
    sub_231 = sub_267;
  };
  if (instanciador_seguranca_input) {
    v_466 = sub_231;
  } else {
    v_466 = v_465;
  };
  if (instanciador_domingol_input) {
    v_467 = sub_203;
  } else {
    v_467 = v_466;
  };
  if (instanciador_domingo_input) {
    sub_202 = sub_188;
  } else {
    sub_202 = v_467;
  };
  if (instanciador_v_341) {
    v_468 = sub_187;
  } else {
    v_468 = sub_202;
  };
  if (instanciador_sexta_input) {
    sub_201 = sub_187;
  } else {
    sub_201 = v_468;
  };
  if (instanciador_v_339) {
    v_533 = sub_201;
  } else {
    v_533 = sub_157;
  };
  if (instanciador_neutro_input) {
    sub_294 = sub_232;
  } else {
    sub_294 = sub_191;
  };
  if (instanciador_seguranca_input) {
    v_372 = sub_231;
  } else {
    v_372 = sub_294;
  };
  if (instanciador_domingol_input) {
    sub_293 = sub_203;
  } else {
    sub_293 = v_372;
  };
  if (instanciador_domingo_input) {
    sub_292 = sub_188;
  } else {
    sub_292 = sub_293;
  };
  if (instanciador_v_341) {
    sub_291 = sub_187;
  } else {
    sub_291 = sub_292;
  };
  sub_290 = sub_291;
  if (instanciador_v_339) {
    v_534 = sub_201;
  } else {
    v_534 = sub_290;
  };
  if (instanciador_ebd_input) {
    sub_156 = v_533;
  } else {
    sub_156 = v_534;
  };
  if (instanciador_seguranca_input) {
    v_368 = sub_267;
  } else {
    v_368 = sub_232;
  };
  if (instanciador_domingol_input) {
    v_369 = sub_203;
    v_367 = sub_203;
  } else {
    v_369 = v_368;
    v_367 = sub_189;
  };
  if (instanciador_domingo_input) {
    v_370 = v_367;
  } else {
    v_370 = v_369;
  };
  if (instanciador_domingol_input) {
    v_366 = sub_203;
    v_365 = sub_203;
  } else {
    v_366 = sub_231;
    v_365 = sub_294;
  };
  if (instanciador_domingo_input) {
    sub_296 = v_365;
  } else {
    sub_296 = v_366;
  };
  if (instanciador_v_341) {
    v_371 = v_370;
  } else {
    v_371 = sub_296;
  };
  if (instanciador_sexta_input) {
    sub_295 = sub_187;
  } else {
    sub_295 = v_371;
  };
  if (instanciador_neutro_input) {
    v = sub_232;
  } else {
    v = sub_205;
  };
  if (instanciador_seguranca_input) {
    sub_298 = sub_231;
  } else {
    sub_298 = v;
  };
  if (instanciador_domingo_input) {
    sub_297 = sub_188;
  } else {
    sub_297 = sub_298;
  };
  if (instanciador_v_341) {
    v_717 = sub_293;
  } else {
    v_717 = sub_297;
  };
  if (instanciador_sexta_input) {
    v_718 = sub_187;
  } else {
    v_718 = v_717;
  };
  if (instanciador_v_339) {
    v_719 = v_718;
  } else {
    v_719 = sub_295;
  };
  if (instanciador_ebd_input) {
    v_720 = sub_159;
  } else {
    v_720 = v_719;
  };
  if (instanciador_v_340) {
    v_721 = v_720;
  } else {
    v_721 = sub_156;
  };
  if (p_instanciador_c_alarm) {
    sub_0 = v_721;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c_alarm = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_cg_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_c_gela, int instanciador_cp,
  int instanciador_c_proj, int instanciador_cmp, int instanciador_c_microP,
  int instanciador_cml, int instanciador_c_microL, int instanciador_csl,
  int instanciador_c_somL, int instanciador_csp, int instanciador_c_somP,
  int instanciador_c_vent, int instanciador_cv, int instanciador_cx,
  int instanciador_c4, int instanciador_c3, int instanciador_c2,
  int instanciador_c1, int instanciador_c_lampExt, int instanciador_c4_lamp,
  int instanciador_c3_lamp, int instanciador_c2_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_cg_out* _out) {
  
  int v_1063;
  int v_1062;
  int v_1061;
  int v_1060;
  int v_1059;
  int v_1058;
  int v_1057;
  int v_1056;
  int v_1055;
  int v_1054;
  int v_1053;
  int v_1052;
  int v_1051;
  int v_1050;
  int v_1049;
  int v_1048;
  int v_1047;
  int v_1046;
  int v_1045;
  int v_1044;
  int v_1043;
  int v_1042;
  int v_1041;
  int v_1040;
  int v_1039;
  int v_1038;
  int v_1037;
  int v_1036;
  int v_1035;
  int v_1034;
  int v_1033;
  int v_1032;
  int v_1031;
  int v_1030;
  int v_1029;
  int v_1028;
  int v_1027;
  int v_1026;
  int v_1025;
  int v_1024;
  int v_1023;
  int v_1022;
  int v_1021;
  int v_1020;
  int v_1019;
  int v_1018;
  int v_1017;
  int v_1016;
  int v_1015;
  int v_1014;
  int v_1013;
  int v_1012;
  int v_1011;
  int v_1010;
  int v_1009;
  int v_1008;
  int v_1007;
  int v_1006;
  int v_1005;
  int v_1004;
  int v_1003;
  int v_1002;
  int v_1001;
  int v_1000;
  int v_999;
  int v_998;
  int v_997;
  int v_996;
  int v_995;
  int v_994;
  int v_993;
  int v_992;
  int v_991;
  int v_990;
  int v_989;
  int v_988;
  int v_987;
  int v_986;
  int v_985;
  int v_984;
  int v_983;
  int v_982;
  int v_981;
  int v_980;
  int v_979;
  int v_978;
  int v_977;
  int v_976;
  int v_975;
  int v_974;
  int v_973;
  int v_972;
  int v_971;
  int v_970;
  int v_969;
  int v_968;
  int v_967;
  int v_966;
  int v_965;
  int v_964;
  int v_963;
  int v_962;
  int v_961;
  int v_960;
  int v_959;
  int v_958;
  int v_957;
  int v_956;
  int v_955;
  int v_954;
  int v_953;
  int v_952;
  int v_951;
  int v_950;
  int v_949;
  int v_948;
  int v_947;
  int v_946;
  int v_945;
  int v_944;
  int v_943;
  int v_942;
  int v_941;
  int v_940;
  int v_939;
  int v_938;
  int v_937;
  int v_936;
  int v_935;
  int v_934;
  int v_933;
  int v_932;
  int v_931;
  int v_930;
  int v_929;
  int v_928;
  int v_927;
  int v_926;
  int v_925;
  int v_924;
  int v_923;
  int v_922;
  int v_921;
  int v_920;
  int v_919;
  int v_918;
  int v_917;
  int v_916;
  int v_915;
  int v_914;
  int v_913;
  int v_912;
  int v_911;
  int v_910;
  int v_909;
  int v_908;
  int v_907;
  int v_906;
  int v_905;
  int v_904;
  int v_903;
  int v_902;
  int v_901;
  int v_900;
  int v_899;
  int v_898;
  int v_897;
  int v_896;
  int v_895;
  int v_894;
  int v_893;
  int v_892;
  int v_891;
  int v_890;
  int v_889;
  int v_888;
  int v_887;
  int v_886;
  int v_885;
  int v_884;
  int v_883;
  int v_882;
  int v_881;
  int v_880;
  int v_879;
  int v_878;
  int v_877;
  int v_876;
  int v_875;
  int v_874;
  int v_873;
  int v_872;
  int v_871;
  int v_870;
  int v_869;
  int v_868;
  int v_867;
  int v_866;
  int v_865;
  int v_864;
  int v_863;
  int v_862;
  int v_861;
  int v_860;
  int v_859;
  int v_858;
  int v_857;
  int v_856;
  int v_855;
  int v_854;
  int v_853;
  int v_852;
  int v_851;
  int v_850;
  int v_849;
  int v_848;
  int v_847;
  int v_846;
  int v_845;
  int v_844;
  int v_843;
  int v_842;
  int v_841;
  int v_840;
  int v_839;
  int v_838;
  int v_837;
  int v_836;
  int v_835;
  int v_834;
  int v_833;
  int v_832;
  int v_831;
  int v_830;
  int v_829;
  int v_828;
  int v_827;
  int v_826;
  int v_825;
  int v_824;
  int v_823;
  int v_822;
  int v_821;
  int v_820;
  int v_819;
  int v_818;
  int v_817;
  int v_816;
  int v_815;
  int v_814;
  int v_813;
  int v_812;
  int v_811;
  int v_810;
  int v_809;
  int v_808;
  int v_807;
  int v_806;
  int v_805;
  int v_804;
  int v_803;
  int v_802;
  int v_801;
  int v_800;
  int v_799;
  int v_798;
  int v_797;
  int v_796;
  int v_795;
  int v_794;
  int v_793;
  int v_792;
  int v_791;
  int v_790;
  int v_789;
  int v_788;
  int v_787;
  int v_786;
  int v_785;
  int v_784;
  int v_783;
  int v_782;
  int v_781;
  int v_780;
  int v_779;
  int v_778;
  int v_777;
  int v_776;
  int v_775;
  int v_774;
  int v_773;
  int v_772;
  int v_771;
  int v_770;
  int v_769;
  int v_768;
  int v_767;
  int v_766;
  int v_765;
  int v_764;
  int v_763;
  int v_762;
  int v_761;
  int v_760;
  int v_759;
  int v_758;
  int v_757;
  int v_756;
  int v_755;
  int v_754;
  int v_753;
  int v_752;
  int v_751;
  int v_750;
  int v_749;
  int v_748;
  int v_747;
  int v_746;
  int v_745;
  int v_744;
  int v_743;
  int v_742;
  int v_741;
  int v_740;
  int v_739;
  int v_738;
  int v_737;
  int v_736;
  int v_735;
  int v_734;
  int v_733;
  int v_732;
  int v_731;
  int v_730;
  int v_729;
  int v_728;
  int v_727;
  int v_726;
  int v_725;
  int v_724;
  int v_723;
  int v_722;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  int sub_246;
  int sub_247;
  int sub_248;
  int sub_249;
  int sub_250;
  int sub_251;
  int sub_252;
  int sub_253;
  int sub_254;
  int sub_255;
  int sub_256;
  int sub_257;
  int sub_258;
  int sub_259;
  int sub_260;
  int sub_261;
  int sub_262;
  int sub_263;
  int sub_264;
  int sub_265;
  int sub_266;
  int sub_267;
  int sub_268;
  int sub_269;
  int sub_270;
  int sub_271;
  int sub_272;
  int sub_273;
  int sub_274;
  int sub_275;
  int sub_276;
  int sub_277;
  int sub_278;
  int sub_279;
  int sub_280;
  int sub_281;
  int sub_282;
  int sub_283;
  int sub_284;
  int sub_285;
  int sub_286;
  int sub_287;
  int sub_288;
  int sub_289;
  int sub_290;
  int sub_291;
  sub_27 = (instanciador_inpSl&&false);
  if (instanciador_c_somL) {
    v_1008 = false;
  } else {
    v_1008 = sub_27;
  };
  if (instanciador_ck_27_1) {
    v_1009 = v_1008;
  } else {
    v_1009 = false;
  };
  sub_29 = false;
  if (instanciador_c_somL) {
    sub_28 = sub_27;
  } else {
    sub_28 = sub_29;
  };
  sub_30 = sub_29;
  if (instanciador_ck_27_1) {
    v_1010 = sub_30;
  } else {
    v_1010 = sub_28;
  };
  if (instanciador_csl) {
    sub_26 = v_1009;
  } else {
    sub_26 = v_1010;
  };
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (instanciador_ck_23_1) {
    sub_31 = false;
  } else {
    sub_31 = sub_25;
  };
  if (instanciador_inpMp) {
    v_1013 = sub_31;
  } else {
    v_1013 = false;
  };
  if (instanciador_c_microP) {
    v_1014 = v_1013;
  } else {
    v_1014 = false;
  };
  if (instanciador_inpMp) {
    v_1011 = sub_25;
  } else {
    v_1011 = sub_31;
  };
  if (instanciador_c_microP) {
    v_1012 = sub_24;
  } else {
    v_1012 = v_1011;
  };
  if (instanciador_cmp) {
    sub_23 = v_1012;
  } else {
    sub_23 = v_1014;
  };
  v_1000 = !(instanciador_inpSl);
  sub_36 = (v_1000||false);
  if (instanciador_c_somL) {
    v_1001 = false;
  } else {
    v_1001 = sub_36;
  };
  if (instanciador_ck_27_1) {
    v_1002 = v_1001;
  } else {
    v_1002 = false;
  };
  sub_38 = true;
  if (instanciador_c_somL) {
    sub_37 = sub_36;
  } else {
    sub_37 = sub_38;
  };
  sub_39 = sub_38;
  if (instanciador_ck_27_1) {
    v_1003 = sub_39;
  } else {
    v_1003 = sub_37;
  };
  if (instanciador_csl) {
    sub_35 = v_1002;
  } else {
    sub_35 = v_1003;
  };
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (instanciador_ck_23_1) {
    sub_40 = false;
  } else {
    sub_40 = sub_34;
  };
  if (instanciador_inpMp) {
    v_1006 = sub_40;
  } else {
    v_1006 = false;
  };
  if (instanciador_c_microP) {
    v_1007 = v_1006;
  } else {
    v_1007 = false;
  };
  if (instanciador_inpMp) {
    v_1004 = sub_34;
  } else {
    v_1004 = sub_40;
  };
  if (instanciador_c_microP) {
    v_1005 = sub_33;
  } else {
    v_1005 = v_1004;
  };
  if (instanciador_cmp) {
    sub_32 = v_1005;
  } else {
    sub_32 = v_1007;
  };
  if (instanciador_ck_31_1) {
    v_1015 = sub_32;
  } else {
    v_1015 = sub_23;
  };
  if (instanciador_inpGela) {
    v_1016 = v_1015;
  } else {
    v_1016 = sub_32;
  };
  if (instanciador_ck_31_1) {
    v_999 = false;
  } else {
    v_999 = sub_32;
  };
  if (instanciador_inpGela) {
    sub_41 = sub_32;
  } else {
    sub_41 = v_999;
  };
  if (instanciador_c_gela) {
    sub_22 = v_1016;
  } else {
    sub_22 = sub_41;
  };
  if (instanciador_ck_29_1) {
    sub_21 = sub_22;
  } else {
    sub_21 = false;
  };
  if (instanciador_inpProj) {
    v_1019 = sub_21;
  } else {
    v_1019 = sub_22;
  };
  if (instanciador_c_proj) {
    v_1020 = v_1019;
  } else {
    v_1020 = sub_22;
  };
  if (instanciador_inpProj) {
    v_1017 = false;
  } else {
    v_1017 = sub_21;
  };
  if (instanciador_c_proj) {
    v_1018 = false;
  } else {
    v_1018 = v_1017;
  };
  if (instanciador_cp) {
    sub_20 = v_1018;
  } else {
    sub_20 = v_1020;
  };
  if (instanciador_ck_25_1) {
    sub_42 = false;
  } else {
    sub_42 = sub_20;
  };
  if (instanciador_inpSp) {
    v_1023 = sub_42;
  } else {
    v_1023 = false;
  };
  if (instanciador_c_somP) {
    v_1024 = v_1023;
  } else {
    v_1024 = false;
  };
  if (instanciador_inpSp) {
    v_1021 = sub_20;
  } else {
    v_1021 = sub_42;
  };
  if (instanciador_c_somP) {
    v_1022 = sub_20;
  } else {
    v_1022 = v_1021;
  };
  if (instanciador_csp) {
    sub_19 = v_1022;
  } else {
    sub_19 = v_1024;
  };
  if (instanciador_ck_21_1) {
    sub_18 = sub_19;
  } else {
    sub_18 = false;
  };
  if (instanciador_inpMl) {
    v_1027 = sub_18;
  } else {
    v_1027 = sub_19;
  };
  if (instanciador_c_microL) {
    v_1028 = v_1027;
  } else {
    v_1028 = sub_19;
  };
  if (instanciador_inpMl) {
    v_1025 = false;
  } else {
    v_1025 = sub_18;
  };
  if (instanciador_c_microL) {
    v_1026 = false;
  } else {
    v_1026 = v_1025;
  };
  if (instanciador_cml) {
    sub_17 = v_1026;
  } else {
    sub_17 = v_1028;
  };
  if (instanciador_ck_19_1) {
    sub_43 = false;
  } else {
    sub_43 = sub_17;
  };
  if (instanciador_lv) {
    v_1031 = sub_17;
  } else {
    v_1031 = sub_43;
  };
  if (instanciador_cv) {
    v_1032 = v_1031;
  } else {
    v_1032 = false;
  };
  if (instanciador_lv) {
    v_1029 = sub_43;
  } else {
    v_1029 = false;
  };
  if (instanciador_cv) {
    v_1030 = sub_17;
  } else {
    v_1030 = v_1029;
  };
  if (instanciador_c_vent) {
    sub_16 = v_1030;
  } else {
    sub_16 = v_1032;
  };
  if (instanciador_ck_17_1) {
    sub_15 = sub_16;
  } else {
    sub_15 = false;
  };
  if (instanciador_lx) {
    v_1035 = sub_15;
    v_1033 = false;
  } else {
    v_1035 = sub_16;
    v_1033 = sub_15;
  };
  if (instanciador_c_lampExt) {
    v_1034 = false;
  } else {
    v_1034 = v_1033;
  };
  sub_44 = sub_16;
  if (instanciador_c_lampExt) {
    v_1036 = v_1035;
  } else {
    v_1036 = sub_44;
  };
  if (instanciador_cx) {
    sub_14 = v_1034;
  } else {
    sub_14 = v_1036;
  };
  if (instanciador_ck_15_1) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (instanciador_l4) {
    v_1039 = sub_13;
  } else {
    v_1039 = sub_14;
  };
  if (instanciador_c4_lamp) {
    v_1040 = v_1039;
  } else {
    v_1040 = sub_14;
  };
  if (instanciador_l4) {
    v_1037 = false;
  } else {
    v_1037 = sub_13;
  };
  if (instanciador_c4_lamp) {
    v_1038 = false;
  } else {
    v_1038 = v_1037;
  };
  if (instanciador_c4) {
    sub_12 = v_1038;
  } else {
    sub_12 = v_1040;
  };
  if (instanciador_ck_13_1) {
    sub_45 = false;
  } else {
    sub_45 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_1043 = sub_45;
  } else {
    v_1043 = false;
  };
  if (instanciador_l3) {
    v_1044 = v_1043;
  } else {
    v_1044 = false;
  };
  if (instanciador_c3_lamp) {
    v_1041 = sub_12;
  } else {
    v_1041 = sub_45;
  };
  if (instanciador_l3) {
    v_1042 = sub_12;
  } else {
    v_1042 = v_1041;
  };
  if (instanciador_c3) {
    sub_11 = v_1042;
  } else {
    sub_11 = v_1044;
  };
  if (instanciador_ck_11_1) {
    sub_46 = false;
  } else {
    sub_46 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_1047 = sub_46;
  } else {
    v_1047 = false;
  };
  if (instanciador_l2) {
    v_1048 = v_1047;
  } else {
    v_1048 = false;
  };
  if (instanciador_c2_lamp) {
    v_1045 = sub_11;
  } else {
    v_1045 = sub_46;
  };
  if (instanciador_l2) {
    v_1046 = sub_11;
  } else {
    v_1046 = v_1045;
  };
  if (instanciador_c2) {
    sub_10 = v_1046;
  } else {
    sub_10 = v_1048;
  };
  if (instanciador_ck_9_1) {
    sub_47 = false;
  } else {
    sub_47 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_1051 = sub_47;
  } else {
    v_1051 = false;
  };
  if (instanciador_l1) {
    v_1052 = v_1051;
  } else {
    v_1052 = false;
  };
  if (instanciador_c1_lamp) {
    v_1049 = sub_10;
  } else {
    v_1049 = sub_47;
  };
  if (instanciador_l1) {
    v_1050 = sub_10;
  } else {
    v_1050 = v_1049;
  };
  if (instanciador_c1) {
    sub_9 = v_1050;
  } else {
    sub_9 = v_1052;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (instanciador_ck_17_1) {
    sub_57 = false;
  } else {
    sub_57 = sub_16;
  };
  if (instanciador_lx) {
    v_981 = sub_57;
  } else {
    v_981 = false;
  };
  if (instanciador_c_lampExt) {
    v_982 = v_981;
  } else {
    v_982 = false;
  };
  if (instanciador_lx) {
    v_979 = sub_16;
  } else {
    v_979 = sub_57;
  };
  if (instanciador_c_lampExt) {
    v_980 = sub_44;
  } else {
    v_980 = v_979;
  };
  if (instanciador_cx) {
    sub_56 = v_980;
  } else {
    sub_56 = v_982;
  };
  if (instanciador_ck_15_1) {
    sub_58 = false;
  } else {
    sub_58 = sub_56;
  };
  if (instanciador_l4) {
    v_985 = sub_58;
  } else {
    v_985 = false;
  };
  if (instanciador_c4_lamp) {
    v_986 = v_985;
  } else {
    v_986 = false;
  };
  if (instanciador_l4) {
    v_983 = sub_56;
  } else {
    v_983 = sub_58;
  };
  if (instanciador_c4_lamp) {
    v_984 = sub_56;
  } else {
    v_984 = v_983;
  };
  if (instanciador_c4) {
    sub_55 = v_984;
  } else {
    sub_55 = v_986;
  };
  if (instanciador_ck_13_1) {
    sub_59 = false;
  } else {
    sub_59 = sub_55;
  };
  if (instanciador_c3_lamp) {
    v_989 = sub_59;
  } else {
    v_989 = false;
  };
  if (instanciador_l3) {
    v_990 = v_989;
  } else {
    v_990 = false;
  };
  if (instanciador_c3_lamp) {
    v_987 = sub_55;
  } else {
    v_987 = sub_59;
  };
  if (instanciador_l3) {
    v_988 = sub_55;
  } else {
    v_988 = v_987;
  };
  if (instanciador_c3) {
    sub_54 = v_988;
  } else {
    sub_54 = v_990;
  };
  if (instanciador_ck_11_1) {
    sub_60 = false;
  } else {
    sub_60 = sub_54;
  };
  if (instanciador_c2_lamp) {
    v_993 = sub_60;
  } else {
    v_993 = false;
  };
  if (instanciador_l2) {
    v_994 = v_993;
  } else {
    v_994 = false;
  };
  if (instanciador_c2_lamp) {
    v_991 = sub_54;
  } else {
    v_991 = sub_60;
  };
  if (instanciador_l2) {
    v_992 = sub_54;
  } else {
    v_992 = v_991;
  };
  if (instanciador_c2) {
    sub_53 = v_992;
  } else {
    sub_53 = v_994;
  };
  if (instanciador_ck_9_1) {
    sub_61 = false;
  } else {
    sub_61 = sub_53;
  };
  if (instanciador_c1_lamp) {
    v_997 = sub_61;
  } else {
    v_997 = false;
  };
  if (instanciador_l1) {
    v_998 = v_997;
  } else {
    v_998 = false;
  };
  if (instanciador_c1_lamp) {
    v_995 = sub_53;
  } else {
    v_995 = sub_61;
  };
  if (instanciador_l1) {
    v_996 = sub_53;
  } else {
    v_996 = v_995;
  };
  if (instanciador_c1) {
    sub_52 = v_996;
  } else {
    sub_52 = v_998;
  };
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  if (instanciador_v_341) {
    sub_4 = sub_48;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  v_929 = !(instanciador_inpSl);
  sub_84 = (v_929&&false);
  if (instanciador_c_somL) {
    v_930 = sub_29;
  } else {
    v_930 = sub_84;
  };
  if (instanciador_ck_27_1) {
    v_931 = v_930;
  } else {
    v_931 = sub_30;
  };
  if (instanciador_c_somL) {
    sub_85 = sub_84;
  } else {
    sub_85 = false;
  };
  if (instanciador_ck_27_1) {
    v_932 = false;
  } else {
    v_932 = sub_85;
  };
  if (instanciador_csl) {
    sub_83 = v_931;
  } else {
    sub_83 = v_932;
  };
  sub_82 = sub_83;
  if (instanciador_ck_23_1) {
    sub_81 = sub_82;
  } else {
    sub_81 = false;
  };
  if (instanciador_inpMp) {
    v_935 = sub_81;
  } else {
    v_935 = sub_82;
  };
  if (instanciador_c_microP) {
    v_936 = v_935;
  } else {
    v_936 = sub_82;
  };
  if (instanciador_inpMp) {
    v_933 = false;
  } else {
    v_933 = sub_81;
  };
  if (instanciador_c_microP) {
    v_934 = false;
  } else {
    v_934 = v_933;
  };
  if (instanciador_cmp) {
    sub_80 = v_934;
  } else {
    sub_80 = v_936;
  };
  sub_90 = (instanciador_inpSl||false);
  if (instanciador_c_somL) {
    v_922 = sub_38;
  } else {
    v_922 = sub_90;
  };
  if (instanciador_ck_27_1) {
    v_923 = v_922;
  } else {
    v_923 = sub_39;
  };
  if (instanciador_c_somL) {
    sub_91 = sub_90;
  } else {
    sub_91 = false;
  };
  if (instanciador_ck_27_1) {
    v_924 = false;
  } else {
    v_924 = sub_91;
  };
  if (instanciador_csl) {
    sub_89 = v_923;
  } else {
    sub_89 = v_924;
  };
  sub_88 = sub_89;
  if (instanciador_ck_23_1) {
    sub_87 = sub_88;
  } else {
    sub_87 = false;
  };
  if (instanciador_inpMp) {
    v_927 = sub_87;
  } else {
    v_927 = sub_88;
  };
  if (instanciador_c_microP) {
    v_928 = v_927;
  } else {
    v_928 = sub_88;
  };
  if (instanciador_inpMp) {
    v_925 = false;
  } else {
    v_925 = sub_87;
  };
  if (instanciador_c_microP) {
    v_926 = false;
  } else {
    v_926 = v_925;
  };
  if (instanciador_cmp) {
    sub_86 = v_926;
  } else {
    sub_86 = v_928;
  };
  if (instanciador_ck_31_1) {
    v_937 = sub_86;
  } else {
    v_937 = sub_80;
  };
  if (instanciador_inpGela) {
    v_938 = v_937;
  } else {
    v_938 = sub_86;
  };
  if (instanciador_ck_31_1) {
    v_921 = false;
  } else {
    v_921 = sub_86;
  };
  if (instanciador_inpGela) {
    sub_92 = sub_86;
  } else {
    sub_92 = v_921;
  };
  if (instanciador_c_gela) {
    sub_79 = v_938;
  } else {
    sub_79 = sub_92;
  };
  if (instanciador_ck_29_1) {
    sub_93 = false;
  } else {
    sub_93 = sub_79;
  };
  if (instanciador_inpProj) {
    v_941 = sub_93;
  } else {
    v_941 = false;
  };
  if (instanciador_c_proj) {
    v_942 = v_941;
  } else {
    v_942 = false;
  };
  if (instanciador_inpProj) {
    v_939 = sub_79;
  } else {
    v_939 = sub_93;
  };
  if (instanciador_c_proj) {
    v_940 = sub_79;
  } else {
    v_940 = v_939;
  };
  if (instanciador_cp) {
    sub_78 = v_940;
  } else {
    sub_78 = v_942;
  };
  if (instanciador_ck_25_1) {
    sub_77 = sub_78;
  } else {
    sub_77 = false;
  };
  if (instanciador_inpSp) {
    v_945 = sub_77;
  } else {
    v_945 = sub_78;
  };
  if (instanciador_c_somP) {
    v_946 = v_945;
  } else {
    v_946 = sub_78;
  };
  if (instanciador_inpSp) {
    v_943 = false;
  } else {
    v_943 = sub_77;
  };
  if (instanciador_c_somP) {
    v_944 = false;
  } else {
    v_944 = v_943;
  };
  if (instanciador_csp) {
    sub_76 = v_944;
  } else {
    sub_76 = v_946;
  };
  if (instanciador_ck_21_1) {
    sub_94 = false;
  } else {
    sub_94 = sub_76;
  };
  if (instanciador_inpMl) {
    v_949 = sub_94;
  } else {
    v_949 = false;
  };
  if (instanciador_c_microL) {
    v_950 = v_949;
  } else {
    v_950 = false;
  };
  if (instanciador_inpMl) {
    v_947 = sub_76;
  } else {
    v_947 = sub_94;
  };
  if (instanciador_c_microL) {
    v_948 = sub_76;
  } else {
    v_948 = v_947;
  };
  if (instanciador_cml) {
    sub_75 = v_948;
  } else {
    sub_75 = v_950;
  };
  if (instanciador_ck_19_1) {
    sub_95 = false;
  } else {
    sub_95 = sub_75;
  };
  if (instanciador_lv) {
    v_953 = sub_75;
  } else {
    v_953 = sub_95;
  };
  if (instanciador_cv) {
    v_954 = v_953;
  } else {
    v_954 = false;
  };
  if (instanciador_lv) {
    v_951 = sub_95;
  } else {
    v_951 = false;
  };
  if (instanciador_cv) {
    v_952 = sub_75;
  } else {
    v_952 = v_951;
  };
  if (instanciador_c_vent) {
    sub_74 = v_952;
  } else {
    sub_74 = v_954;
  };
  if (instanciador_ck_17_1) {
    sub_96 = false;
  } else {
    sub_96 = sub_74;
  };
  if (instanciador_lx) {
    v_957 = sub_96;
  } else {
    v_957 = false;
  };
  if (instanciador_c_lampExt) {
    v_958 = v_957;
  } else {
    v_958 = false;
  };
  if (instanciador_lx) {
    v_955 = sub_74;
  } else {
    v_955 = sub_96;
  };
  if (instanciador_c_lampExt) {
    v_956 = sub_74;
  } else {
    v_956 = v_955;
  };
  if (instanciador_cx) {
    sub_73 = v_956;
  } else {
    sub_73 = v_958;
  };
  if (instanciador_ck_15_1) {
    sub_72 = sub_73;
  } else {
    sub_72 = false;
  };
  if (instanciador_l4) {
    v_961 = sub_72;
  } else {
    v_961 = sub_73;
  };
  if (instanciador_c4_lamp) {
    v_962 = v_961;
  } else {
    v_962 = sub_73;
  };
  if (instanciador_l4) {
    v_959 = false;
  } else {
    v_959 = sub_72;
  };
  if (instanciador_c4_lamp) {
    v_960 = false;
  } else {
    v_960 = v_959;
  };
  if (instanciador_c4) {
    sub_71 = v_960;
  } else {
    sub_71 = v_962;
  };
  if (instanciador_ck_13_1) {
    sub_97 = false;
  } else {
    sub_97 = sub_71;
  };
  if (instanciador_c3_lamp) {
    v_965 = sub_97;
  } else {
    v_965 = false;
  };
  if (instanciador_l3) {
    v_966 = v_965;
  } else {
    v_966 = false;
  };
  if (instanciador_c3_lamp) {
    v_963 = sub_71;
  } else {
    v_963 = sub_97;
  };
  if (instanciador_l3) {
    v_964 = sub_71;
  } else {
    v_964 = v_963;
  };
  if (instanciador_c3) {
    sub_70 = v_964;
  } else {
    sub_70 = v_966;
  };
  if (instanciador_ck_11_1) {
    sub_69 = sub_70;
  } else {
    sub_69 = false;
  };
  if (instanciador_c2_lamp) {
    v_969 = sub_69;
  } else {
    v_969 = sub_70;
  };
  if (instanciador_l2) {
    v_970 = v_969;
  } else {
    v_970 = sub_70;
  };
  if (instanciador_c2_lamp) {
    v_967 = false;
  } else {
    v_967 = sub_69;
  };
  if (instanciador_l2) {
    v_968 = false;
  } else {
    v_968 = v_967;
  };
  if (instanciador_c2) {
    sub_68 = v_968;
  } else {
    sub_68 = v_970;
  };
  if (instanciador_ck_9_1) {
    sub_67 = sub_68;
  } else {
    sub_67 = false;
  };
  if (instanciador_c1_lamp) {
    v_973 = sub_67;
  } else {
    v_973 = sub_68;
  };
  if (instanciador_l1) {
    v_974 = v_973;
  } else {
    v_974 = sub_68;
  };
  if (instanciador_c1_lamp) {
    v_971 = false;
  } else {
    v_971 = sub_67;
  };
  if (instanciador_l1) {
    v_972 = false;
  } else {
    v_972 = v_971;
  };
  if (instanciador_c1) {
    sub_66 = v_972;
  } else {
    sub_66 = v_974;
  };
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_132 = sub_30;
  sub_131 = sub_132;
  sub_130 = sub_131;
  sub_129 = sub_130;
  sub_128 = sub_129;
  sub_127 = sub_128;
  sub_126 = sub_127;
  sub_125 = sub_126;
  sub_124 = sub_125;
  sub_123 = sub_124;
  sub_122 = sub_123;
  sub_121 = sub_122;
  sub_120 = sub_121;
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_117 = sub_118;
  sub_116 = sub_117;
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  sub_100 = sub_101;
  sub_99 = sub_100;
  if (instanciador_neutro_input) {
    v_975 = sub_99;
  } else {
    v_975 = sub_9;
  };
  if (instanciador_ck_23_1) {
    sub_154 = sub_25;
  } else {
    sub_154 = false;
  };
  if (instanciador_inpMp) {
    v_882 = sub_154;
  } else {
    v_882 = sub_25;
  };
  if (instanciador_c_microP) {
    v_883 = v_882;
  } else {
    v_883 = sub_24;
  };
  if (instanciador_inpMp) {
    v_880 = false;
  } else {
    v_880 = sub_154;
  };
  if (instanciador_c_microP) {
    v_881 = false;
  } else {
    v_881 = v_880;
  };
  if (instanciador_cmp) {
    sub_153 = v_881;
  } else {
    sub_153 = v_883;
  };
  if (instanciador_ck_31_1) {
    v_884 = sub_153;
  } else {
    v_884 = false;
  };
  if (instanciador_inpGela) {
    sub_152 = v_884;
  } else {
    sub_152 = sub_153;
  };
  if (instanciador_c_gela) {
    sub_151 = sub_152;
  } else {
    sub_151 = sub_153;
  };
  if (instanciador_ck_29_1) {
    sub_150 = sub_151;
  } else {
    sub_150 = false;
  };
  if (instanciador_inpProj) {
    v_887 = sub_150;
  } else {
    v_887 = sub_151;
  };
  if (instanciador_c_proj) {
    v_888 = v_887;
  } else {
    v_888 = sub_151;
  };
  if (instanciador_inpProj) {
    v_885 = false;
  } else {
    v_885 = sub_150;
  };
  if (instanciador_c_proj) {
    v_886 = false;
  } else {
    v_886 = v_885;
  };
  if (instanciador_cp) {
    sub_149 = v_886;
  } else {
    sub_149 = v_888;
  };
  if (instanciador_ck_25_1) {
    sub_148 = sub_149;
  } else {
    sub_148 = false;
  };
  if (instanciador_inpSp) {
    v_891 = sub_148;
  } else {
    v_891 = sub_149;
  };
  if (instanciador_c_somP) {
    v_892 = v_891;
  } else {
    v_892 = sub_149;
  };
  if (instanciador_inpSp) {
    v_889 = false;
  } else {
    v_889 = sub_148;
  };
  if (instanciador_c_somP) {
    v_890 = false;
  } else {
    v_890 = v_889;
  };
  if (instanciador_csp) {
    sub_147 = v_890;
  } else {
    sub_147 = v_892;
  };
  if (instanciador_ck_21_1) {
    sub_146 = sub_147;
  } else {
    sub_146 = false;
  };
  if (instanciador_inpMl) {
    v_895 = sub_146;
  } else {
    v_895 = sub_147;
  };
  if (instanciador_c_microL) {
    v_896 = v_895;
  } else {
    v_896 = sub_147;
  };
  if (instanciador_inpMl) {
    v_893 = false;
  } else {
    v_893 = sub_146;
  };
  if (instanciador_c_microL) {
    v_894 = false;
  } else {
    v_894 = v_893;
  };
  if (instanciador_cml) {
    sub_145 = v_894;
  } else {
    sub_145 = v_896;
  };
  if (instanciador_ck_19_1) {
    sub_144 = sub_145;
  } else {
    sub_144 = false;
  };
  if (instanciador_lv) {
    v_899 = false;
  } else {
    v_899 = sub_144;
  };
  if (instanciador_cv) {
    v_900 = v_899;
  } else {
    v_900 = sub_145;
  };
  if (instanciador_lv) {
    v_897 = sub_144;
  } else {
    v_897 = sub_145;
  };
  if (instanciador_cv) {
    v_898 = false;
  } else {
    v_898 = v_897;
  };
  if (instanciador_c_vent) {
    sub_143 = v_898;
  } else {
    sub_143 = v_900;
  };
  if (instanciador_ck_17_1) {
    sub_142 = sub_143;
  } else {
    sub_142 = false;
  };
  if (instanciador_lx) {
    v_903 = sub_142;
  } else {
    v_903 = sub_143;
  };
  if (instanciador_c_lampExt) {
    v_904 = v_903;
  } else {
    v_904 = sub_143;
  };
  if (instanciador_lx) {
    v_901 = false;
  } else {
    v_901 = sub_142;
  };
  if (instanciador_c_lampExt) {
    v_902 = false;
  } else {
    v_902 = v_901;
  };
  if (instanciador_cx) {
    sub_141 = v_902;
  } else {
    sub_141 = v_904;
  };
  if (instanciador_ck_15_1) {
    sub_140 = sub_141;
  } else {
    sub_140 = false;
  };
  if (instanciador_l4) {
    v_907 = sub_140;
  } else {
    v_907 = sub_141;
  };
  if (instanciador_c4_lamp) {
    v_908 = v_907;
  } else {
    v_908 = sub_141;
  };
  if (instanciador_l4) {
    v_905 = false;
  } else {
    v_905 = sub_140;
  };
  if (instanciador_c4_lamp) {
    v_906 = false;
  } else {
    v_906 = v_905;
  };
  if (instanciador_c4) {
    sub_139 = v_906;
  } else {
    sub_139 = v_908;
  };
  if (instanciador_ck_13_1) {
    sub_138 = sub_139;
  } else {
    sub_138 = false;
  };
  if (instanciador_c3_lamp) {
    v_911 = sub_138;
  } else {
    v_911 = sub_139;
  };
  if (instanciador_l3) {
    v_912 = v_911;
  } else {
    v_912 = sub_139;
  };
  if (instanciador_c3_lamp) {
    v_909 = false;
  } else {
    v_909 = sub_138;
  };
  if (instanciador_l3) {
    v_910 = false;
  } else {
    v_910 = v_909;
  };
  if (instanciador_c3) {
    sub_137 = v_910;
  } else {
    sub_137 = v_912;
  };
  if (instanciador_ck_11_1) {
    sub_136 = sub_137;
  } else {
    sub_136 = false;
  };
  if (instanciador_c2_lamp) {
    v_915 = sub_136;
  } else {
    v_915 = sub_137;
  };
  if (instanciador_l2) {
    v_916 = v_915;
  } else {
    v_916 = sub_137;
  };
  if (instanciador_c2_lamp) {
    v_913 = false;
  } else {
    v_913 = sub_136;
  };
  if (instanciador_l2) {
    v_914 = false;
  } else {
    v_914 = v_913;
  };
  if (instanciador_c2) {
    sub_135 = v_914;
  } else {
    sub_135 = v_916;
  };
  if (instanciador_ck_9_1) {
    sub_134 = sub_135;
  } else {
    sub_134 = false;
  };
  if (instanciador_c1_lamp) {
    v_919 = sub_134;
  } else {
    v_919 = sub_135;
  };
  if (instanciador_l1) {
    v_920 = v_919;
  } else {
    v_920 = sub_135;
  };
  if (instanciador_c1_lamp) {
    v_917 = false;
  } else {
    v_917 = sub_134;
  };
  if (instanciador_l1) {
    v_918 = false;
  } else {
    v_918 = v_917;
  };
  if (instanciador_c1) {
    sub_133 = v_918;
  } else {
    sub_133 = v_920;
  };
  if (instanciador_neutro_input) {
    sub_98 = sub_99;
  } else {
    sub_98 = sub_133;
  };
  if (instanciador_seguranca_input) {
    v_976 = sub_98;
  } else {
    v_976 = v_975;
  };
  if (instanciador_domingol_input) {
    v_977 = sub_64;
  } else {
    v_977 = v_976;
  };
  if (instanciador_domingo_input) {
    sub_63 = sub_49;
  } else {
    sub_63 = v_977;
  };
  if (instanciador_v_341) {
    v_978 = sub_48;
  } else {
    v_978 = sub_63;
  };
  if (instanciador_sexta_input) {
    sub_62 = sub_48;
  } else {
    sub_62 = v_978;
  };
  if (instanciador_v_339) {
    v_1053 = sub_62;
  } else {
    v_1053 = sub_3;
  };
  if (instanciador_neutro_input) {
    sub_159 = sub_99;
  } else {
    sub_159 = sub_52;
  };
  if (instanciador_seguranca_input) {
    v_879 = sub_98;
  } else {
    v_879 = sub_159;
  };
  if (instanciador_domingol_input) {
    sub_158 = sub_64;
  } else {
    sub_158 = v_879;
  };
  if (instanciador_domingo_input) {
    sub_157 = sub_49;
  } else {
    sub_157 = sub_158;
  };
  if (instanciador_v_341) {
    sub_156 = sub_48;
  } else {
    sub_156 = sub_157;
  };
  sub_155 = sub_156;
  if (instanciador_v_339) {
    v_1054 = sub_62;
  } else {
    v_1054 = sub_155;
  };
  if (instanciador_ebd_input) {
    sub_2 = v_1053;
  } else {
    sub_2 = v_1054;
  };
  if (instanciador_seguranca_input) {
    v_875 = sub_133;
  } else {
    v_875 = sub_99;
  };
  if (instanciador_domingol_input) {
    v_876 = sub_64;
    v_874 = sub_64;
  } else {
    v_876 = v_875;
    v_874 = sub_50;
  };
  if (instanciador_domingo_input) {
    v_877 = v_874;
  } else {
    v_877 = v_876;
  };
  if (instanciador_domingol_input) {
    v_873 = sub_64;
    v_872 = sub_64;
  } else {
    v_873 = sub_98;
    v_872 = sub_159;
  };
  if (instanciador_domingo_input) {
    sub_161 = v_872;
  } else {
    sub_161 = v_873;
  };
  if (instanciador_v_341) {
    v_878 = v_877;
  } else {
    v_878 = sub_161;
  };
  if (instanciador_sexta_input) {
    sub_160 = sub_48;
  } else {
    sub_160 = v_878;
  };
  if (instanciador_neutro_input) {
    v_871 = sub_99;
  } else {
    v_871 = sub_66;
  };
  if (instanciador_seguranca_input) {
    sub_163 = sub_98;
  } else {
    sub_163 = v_871;
  };
  if (instanciador_domingo_input) {
    sub_162 = sub_49;
  } else {
    sub_162 = sub_163;
  };
  if (instanciador_v_341) {
    v_1055 = sub_158;
  } else {
    v_1055 = sub_162;
  };
  if (instanciador_sexta_input) {
    v_1056 = sub_48;
  } else {
    v_1056 = v_1055;
  };
  if (instanciador_v_339) {
    v_1057 = v_1056;
  } else {
    v_1057 = sub_160;
  };
  if (instanciador_ebd_input) {
    v_1058 = sub_5;
  } else {
    v_1058 = v_1057;
  };
  if (instanciador_v_340) {
    sub_1 = v_1058;
  } else {
    sub_1 = sub_2;
  };
  if (instanciador_c_gela) {
    sub_184 = sub_32;
  } else {
    sub_184 = sub_41;
  };
  if (instanciador_ck_29_1) {
    sub_183 = sub_184;
  } else {
    sub_183 = false;
  };
  if (instanciador_inpProj) {
    v_835 = sub_183;
  } else {
    v_835 = sub_184;
  };
  if (instanciador_c_proj) {
    v_836 = v_835;
  } else {
    v_836 = sub_184;
  };
  if (instanciador_inpProj) {
    v_833 = false;
  } else {
    v_833 = sub_183;
  };
  if (instanciador_c_proj) {
    v_834 = false;
  } else {
    v_834 = v_833;
  };
  if (instanciador_cp) {
    sub_182 = v_834;
  } else {
    sub_182 = v_836;
  };
  if (instanciador_ck_25_1) {
    sub_185 = false;
  } else {
    sub_185 = sub_182;
  };
  if (instanciador_inpSp) {
    v_839 = sub_185;
  } else {
    v_839 = false;
  };
  if (instanciador_c_somP) {
    v_840 = v_839;
  } else {
    v_840 = false;
  };
  if (instanciador_inpSp) {
    v_837 = sub_182;
  } else {
    v_837 = sub_185;
  };
  if (instanciador_c_somP) {
    v_838 = sub_182;
  } else {
    v_838 = v_837;
  };
  if (instanciador_csp) {
    sub_181 = v_838;
  } else {
    sub_181 = v_840;
  };
  if (instanciador_ck_21_1) {
    sub_180 = sub_181;
  } else {
    sub_180 = false;
  };
  if (instanciador_inpMl) {
    v_843 = sub_180;
  } else {
    v_843 = sub_181;
  };
  if (instanciador_c_microL) {
    v_844 = v_843;
  } else {
    v_844 = sub_181;
  };
  if (instanciador_inpMl) {
    v_841 = false;
  } else {
    v_841 = sub_180;
  };
  if (instanciador_c_microL) {
    v_842 = false;
  } else {
    v_842 = v_841;
  };
  if (instanciador_cml) {
    sub_179 = v_842;
  } else {
    sub_179 = v_844;
  };
  if (instanciador_ck_19_1) {
    sub_186 = false;
  } else {
    sub_186 = sub_179;
  };
  if (instanciador_lv) {
    v_847 = sub_179;
  } else {
    v_847 = sub_186;
  };
  if (instanciador_cv) {
    v_848 = v_847;
  } else {
    v_848 = false;
  };
  if (instanciador_lv) {
    v_845 = sub_186;
  } else {
    v_845 = false;
  };
  if (instanciador_cv) {
    v_846 = sub_179;
  } else {
    v_846 = v_845;
  };
  if (instanciador_c_vent) {
    sub_178 = v_846;
  } else {
    sub_178 = v_848;
  };
  if (instanciador_ck_17_1) {
    sub_177 = sub_178;
  } else {
    sub_177 = false;
  };
  if (instanciador_lx) {
    v_851 = sub_177;
    v_849 = false;
  } else {
    v_851 = sub_178;
    v_849 = sub_177;
  };
  if (instanciador_c_lampExt) {
    v_850 = false;
  } else {
    v_850 = v_849;
  };
  sub_187 = sub_178;
  if (instanciador_c_lampExt) {
    v_852 = v_851;
  } else {
    v_852 = sub_187;
  };
  if (instanciador_cx) {
    sub_176 = v_850;
  } else {
    sub_176 = v_852;
  };
  if (instanciador_ck_15_1) {
    sub_175 = sub_176;
  } else {
    sub_175 = false;
  };
  if (instanciador_l4) {
    v_855 = sub_175;
  } else {
    v_855 = sub_176;
  };
  if (instanciador_c4_lamp) {
    v_856 = v_855;
  } else {
    v_856 = sub_176;
  };
  if (instanciador_l4) {
    v_853 = false;
  } else {
    v_853 = sub_175;
  };
  if (instanciador_c4_lamp) {
    v_854 = false;
  } else {
    v_854 = v_853;
  };
  if (instanciador_c4) {
    sub_174 = v_854;
  } else {
    sub_174 = v_856;
  };
  if (instanciador_ck_13_1) {
    sub_188 = false;
  } else {
    sub_188 = sub_174;
  };
  if (instanciador_c3_lamp) {
    v_859 = sub_188;
  } else {
    v_859 = false;
  };
  if (instanciador_l3) {
    v_860 = v_859;
  } else {
    v_860 = false;
  };
  if (instanciador_c3_lamp) {
    v_857 = sub_174;
  } else {
    v_857 = sub_188;
  };
  if (instanciador_l3) {
    v_858 = sub_174;
  } else {
    v_858 = v_857;
  };
  if (instanciador_c3) {
    sub_173 = v_858;
  } else {
    sub_173 = v_860;
  };
  if (instanciador_ck_11_1) {
    sub_189 = false;
  } else {
    sub_189 = sub_173;
  };
  if (instanciador_c2_lamp) {
    v_863 = sub_189;
  } else {
    v_863 = false;
  };
  if (instanciador_l2) {
    v_864 = v_863;
  } else {
    v_864 = false;
  };
  if (instanciador_c2_lamp) {
    v_861 = sub_173;
  } else {
    v_861 = sub_189;
  };
  if (instanciador_l2) {
    v_862 = sub_173;
  } else {
    v_862 = v_861;
  };
  if (instanciador_c2) {
    sub_172 = v_862;
  } else {
    sub_172 = v_864;
  };
  if (instanciador_ck_9_1) {
    sub_190 = false;
  } else {
    sub_190 = sub_172;
  };
  if (instanciador_c1_lamp) {
    v_867 = sub_190;
  } else {
    v_867 = false;
  };
  if (instanciador_l1) {
    v_868 = v_867;
  } else {
    v_868 = false;
  };
  if (instanciador_c1_lamp) {
    v_865 = sub_172;
  } else {
    v_865 = sub_190;
  };
  if (instanciador_l1) {
    v_866 = sub_172;
  } else {
    v_866 = v_865;
  };
  if (instanciador_c1) {
    sub_171 = v_866;
  } else {
    sub_171 = v_868;
  };
  sub_170 = sub_171;
  sub_169 = sub_170;
  sub_168 = sub_169;
  sub_167 = sub_168;
  if (instanciador_ck_17_1) {
    sub_200 = false;
  } else {
    sub_200 = sub_178;
  };
  if (instanciador_lx) {
    v_815 = sub_200;
  } else {
    v_815 = false;
  };
  if (instanciador_c_lampExt) {
    v_816 = v_815;
  } else {
    v_816 = false;
  };
  if (instanciador_lx) {
    v_813 = sub_178;
  } else {
    v_813 = sub_200;
  };
  if (instanciador_c_lampExt) {
    v_814 = sub_187;
  } else {
    v_814 = v_813;
  };
  if (instanciador_cx) {
    sub_199 = v_814;
  } else {
    sub_199 = v_816;
  };
  if (instanciador_ck_15_1) {
    sub_201 = false;
  } else {
    sub_201 = sub_199;
  };
  if (instanciador_l4) {
    v_819 = sub_201;
  } else {
    v_819 = false;
  };
  if (instanciador_c4_lamp) {
    v_820 = v_819;
  } else {
    v_820 = false;
  };
  if (instanciador_l4) {
    v_817 = sub_199;
  } else {
    v_817 = sub_201;
  };
  if (instanciador_c4_lamp) {
    v_818 = sub_199;
  } else {
    v_818 = v_817;
  };
  if (instanciador_c4) {
    sub_198 = v_818;
  } else {
    sub_198 = v_820;
  };
  if (instanciador_ck_13_1) {
    sub_202 = false;
  } else {
    sub_202 = sub_198;
  };
  if (instanciador_c3_lamp) {
    v_823 = sub_202;
  } else {
    v_823 = false;
  };
  if (instanciador_l3) {
    v_824 = v_823;
  } else {
    v_824 = false;
  };
  if (instanciador_c3_lamp) {
    v_821 = sub_198;
  } else {
    v_821 = sub_202;
  };
  if (instanciador_l3) {
    v_822 = sub_198;
  } else {
    v_822 = v_821;
  };
  if (instanciador_c3) {
    sub_197 = v_822;
  } else {
    sub_197 = v_824;
  };
  if (instanciador_ck_11_1) {
    sub_203 = false;
  } else {
    sub_203 = sub_197;
  };
  if (instanciador_c2_lamp) {
    v_827 = sub_203;
  } else {
    v_827 = false;
  };
  if (instanciador_l2) {
    v_828 = v_827;
  } else {
    v_828 = false;
  };
  if (instanciador_c2_lamp) {
    v_825 = sub_197;
  } else {
    v_825 = sub_203;
  };
  if (instanciador_l2) {
    v_826 = sub_197;
  } else {
    v_826 = v_825;
  };
  if (instanciador_c2) {
    sub_196 = v_826;
  } else {
    sub_196 = v_828;
  };
  if (instanciador_ck_9_1) {
    sub_204 = false;
  } else {
    sub_204 = sub_196;
  };
  if (instanciador_c1_lamp) {
    v_831 = sub_204;
  } else {
    v_831 = false;
  };
  if (instanciador_l1) {
    v_832 = v_831;
  } else {
    v_832 = false;
  };
  if (instanciador_c1_lamp) {
    v_829 = sub_196;
  } else {
    v_829 = sub_204;
  };
  if (instanciador_l1) {
    v_830 = sub_196;
  } else {
    v_830 = v_829;
  };
  if (instanciador_c1) {
    sub_195 = v_830;
  } else {
    sub_195 = v_832;
  };
  sub_194 = sub_195;
  sub_193 = sub_194;
  sub_192 = sub_193;
  sub_191 = sub_192;
  if (instanciador_v_341) {
    sub_166 = sub_191;
  } else {
    sub_166 = sub_167;
  };
  sub_165 = sub_166;
  if (instanciador_c_gela) {
    sub_222 = sub_86;
  } else {
    sub_222 = sub_92;
  };
  if (instanciador_ck_29_1) {
    sub_223 = false;
  } else {
    sub_223 = sub_222;
  };
  if (instanciador_inpProj) {
    v_775 = sub_223;
  } else {
    v_775 = false;
  };
  if (instanciador_c_proj) {
    v_776 = v_775;
  } else {
    v_776 = false;
  };
  if (instanciador_inpProj) {
    v_773 = sub_222;
  } else {
    v_773 = sub_223;
  };
  if (instanciador_c_proj) {
    v_774 = sub_222;
  } else {
    v_774 = v_773;
  };
  if (instanciador_cp) {
    sub_221 = v_774;
  } else {
    sub_221 = v_776;
  };
  if (instanciador_ck_25_1) {
    sub_220 = sub_221;
  } else {
    sub_220 = false;
  };
  if (instanciador_inpSp) {
    v_779 = sub_220;
  } else {
    v_779 = sub_221;
  };
  if (instanciador_c_somP) {
    v_780 = v_779;
  } else {
    v_780 = sub_221;
  };
  if (instanciador_inpSp) {
    v_777 = false;
  } else {
    v_777 = sub_220;
  };
  if (instanciador_c_somP) {
    v_778 = false;
  } else {
    v_778 = v_777;
  };
  if (instanciador_csp) {
    sub_219 = v_778;
  } else {
    sub_219 = v_780;
  };
  if (instanciador_ck_21_1) {
    sub_224 = false;
  } else {
    sub_224 = sub_219;
  };
  if (instanciador_inpMl) {
    v_783 = sub_224;
  } else {
    v_783 = false;
  };
  if (instanciador_c_microL) {
    v_784 = v_783;
  } else {
    v_784 = false;
  };
  if (instanciador_inpMl) {
    v_781 = sub_219;
  } else {
    v_781 = sub_224;
  };
  if (instanciador_c_microL) {
    v_782 = sub_219;
  } else {
    v_782 = v_781;
  };
  if (instanciador_cml) {
    sub_218 = v_782;
  } else {
    sub_218 = v_784;
  };
  if (instanciador_ck_19_1) {
    sub_225 = false;
  } else {
    sub_225 = sub_218;
  };
  if (instanciador_lv) {
    v_787 = sub_218;
  } else {
    v_787 = sub_225;
  };
  if (instanciador_cv) {
    v_788 = v_787;
  } else {
    v_788 = false;
  };
  if (instanciador_lv) {
    v_785 = sub_225;
  } else {
    v_785 = false;
  };
  if (instanciador_cv) {
    v_786 = sub_218;
  } else {
    v_786 = v_785;
  };
  if (instanciador_c_vent) {
    sub_217 = v_786;
  } else {
    sub_217 = v_788;
  };
  if (instanciador_ck_17_1) {
    sub_226 = false;
  } else {
    sub_226 = sub_217;
  };
  if (instanciador_lx) {
    v_791 = sub_226;
  } else {
    v_791 = false;
  };
  if (instanciador_c_lampExt) {
    v_792 = v_791;
  } else {
    v_792 = false;
  };
  if (instanciador_lx) {
    v_789 = sub_217;
  } else {
    v_789 = sub_226;
  };
  if (instanciador_c_lampExt) {
    v_790 = sub_217;
  } else {
    v_790 = v_789;
  };
  if (instanciador_cx) {
    sub_216 = v_790;
  } else {
    sub_216 = v_792;
  };
  if (instanciador_ck_15_1) {
    sub_215 = sub_216;
  } else {
    sub_215 = false;
  };
  if (instanciador_l4) {
    v_795 = sub_215;
  } else {
    v_795 = sub_216;
  };
  if (instanciador_c4_lamp) {
    v_796 = v_795;
  } else {
    v_796 = sub_216;
  };
  if (instanciador_l4) {
    v_793 = false;
  } else {
    v_793 = sub_215;
  };
  if (instanciador_c4_lamp) {
    v_794 = false;
  } else {
    v_794 = v_793;
  };
  if (instanciador_c4) {
    sub_214 = v_794;
  } else {
    sub_214 = v_796;
  };
  if (instanciador_ck_13_1) {
    sub_227 = false;
  } else {
    sub_227 = sub_214;
  };
  if (instanciador_c3_lamp) {
    v_799 = sub_227;
  } else {
    v_799 = false;
  };
  if (instanciador_l3) {
    v_800 = v_799;
  } else {
    v_800 = false;
  };
  if (instanciador_c3_lamp) {
    v_797 = sub_214;
  } else {
    v_797 = sub_227;
  };
  if (instanciador_l3) {
    v_798 = sub_214;
  } else {
    v_798 = v_797;
  };
  if (instanciador_c3) {
    sub_213 = v_798;
  } else {
    sub_213 = v_800;
  };
  if (instanciador_ck_11_1) {
    sub_212 = sub_213;
  } else {
    sub_212 = false;
  };
  if (instanciador_c2_lamp) {
    v_803 = sub_212;
  } else {
    v_803 = sub_213;
  };
  if (instanciador_l2) {
    v_804 = v_803;
  } else {
    v_804 = sub_213;
  };
  if (instanciador_c2_lamp) {
    v_801 = false;
  } else {
    v_801 = sub_212;
  };
  if (instanciador_l2) {
    v_802 = false;
  } else {
    v_802 = v_801;
  };
  if (instanciador_c2) {
    sub_211 = v_802;
  } else {
    sub_211 = v_804;
  };
  if (instanciador_ck_9_1) {
    sub_210 = sub_211;
  } else {
    sub_210 = false;
  };
  if (instanciador_c1_lamp) {
    v_807 = sub_210;
  } else {
    v_807 = sub_211;
  };
  if (instanciador_l1) {
    v_808 = v_807;
  } else {
    v_808 = sub_211;
  };
  if (instanciador_c1_lamp) {
    v_805 = false;
  } else {
    v_805 = sub_210;
  };
  if (instanciador_l1) {
    v_806 = false;
  } else {
    v_806 = v_805;
  };
  if (instanciador_c1) {
    sub_209 = v_806;
  } else {
    sub_209 = v_808;
  };
  sub_208 = sub_209;
  sub_207 = sub_208;
  sub_262 = sub_39;
  sub_261 = sub_262;
  sub_260 = sub_261;
  sub_259 = sub_260;
  sub_258 = sub_259;
  sub_257 = sub_258;
  sub_256 = sub_257;
  sub_255 = sub_256;
  sub_254 = sub_255;
  sub_253 = sub_254;
  sub_252 = sub_253;
  sub_251 = sub_252;
  sub_250 = sub_251;
  sub_249 = sub_250;
  sub_248 = sub_249;
  sub_247 = sub_248;
  sub_246 = sub_247;
  sub_245 = sub_246;
  sub_244 = sub_245;
  sub_243 = sub_244;
  sub_242 = sub_243;
  sub_241 = sub_242;
  sub_240 = sub_241;
  sub_239 = sub_240;
  sub_238 = sub_239;
  sub_237 = sub_238;
  sub_236 = sub_237;
  sub_235 = sub_236;
  sub_234 = sub_235;
  sub_233 = sub_234;
  sub_232 = sub_233;
  sub_231 = sub_232;
  sub_230 = sub_231;
  sub_229 = sub_230;
  if (instanciador_neutro_input) {
    v_809 = sub_229;
  } else {
    v_809 = sub_171;
  };
  if (instanciador_ck_23_1) {
    sub_282 = sub_34;
  } else {
    sub_282 = false;
  };
  if (instanciador_inpMp) {
    v_732 = sub_282;
  } else {
    v_732 = sub_34;
  };
  if (instanciador_c_microP) {
    v_733 = v_732;
  } else {
    v_733 = sub_33;
  };
  if (instanciador_inpMp) {
    v_730 = false;
  } else {
    v_730 = sub_282;
  };
  if (instanciador_c_microP) {
    v_731 = false;
  } else {
    v_731 = v_730;
  };
  if (instanciador_cmp) {
    v_734 = v_731;
  } else {
    v_734 = v_733;
  };
  if (instanciador_ck_31_1) {
    v_735 = v_734;
  } else {
    v_735 = sub_153;
  };
  if (instanciador_inpGela) {
    v_736 = sub_153;
  } else {
    v_736 = v_735;
  };
  if (instanciador_c_gela) {
    sub_281 = sub_152;
  } else {
    sub_281 = v_736;
  };
  if (instanciador_ck_29_1) {
    sub_280 = sub_281;
  } else {
    sub_280 = false;
  };
  if (instanciador_inpProj) {
    v_739 = sub_280;
  } else {
    v_739 = sub_281;
  };
  if (instanciador_c_proj) {
    v_740 = v_739;
  } else {
    v_740 = sub_281;
  };
  if (instanciador_inpProj) {
    v_737 = false;
  } else {
    v_737 = sub_280;
  };
  if (instanciador_c_proj) {
    v_738 = false;
  } else {
    v_738 = v_737;
  };
  if (instanciador_cp) {
    sub_279 = v_738;
  } else {
    sub_279 = v_740;
  };
  if (instanciador_ck_25_1) {
    sub_278 = sub_279;
  } else {
    sub_278 = false;
  };
  if (instanciador_inpSp) {
    v_743 = sub_278;
  } else {
    v_743 = sub_279;
  };
  if (instanciador_c_somP) {
    v_744 = v_743;
  } else {
    v_744 = sub_279;
  };
  if (instanciador_inpSp) {
    v_741 = false;
  } else {
    v_741 = sub_278;
  };
  if (instanciador_c_somP) {
    v_742 = false;
  } else {
    v_742 = v_741;
  };
  if (instanciador_csp) {
    sub_277 = v_742;
  } else {
    sub_277 = v_744;
  };
  if (instanciador_ck_21_1) {
    sub_276 = sub_277;
  } else {
    sub_276 = false;
  };
  if (instanciador_inpMl) {
    v_747 = sub_276;
  } else {
    v_747 = sub_277;
  };
  if (instanciador_c_microL) {
    v_748 = v_747;
  } else {
    v_748 = sub_277;
  };
  if (instanciador_inpMl) {
    v_745 = false;
  } else {
    v_745 = sub_276;
  };
  if (instanciador_c_microL) {
    v_746 = false;
  } else {
    v_746 = v_745;
  };
  if (instanciador_cml) {
    sub_275 = v_746;
  } else {
    sub_275 = v_748;
  };
  if (instanciador_ck_19_1) {
    sub_274 = sub_275;
  } else {
    sub_274 = false;
  };
  if (instanciador_lv) {
    v_751 = false;
  } else {
    v_751 = sub_274;
  };
  if (instanciador_cv) {
    v_752 = v_751;
  } else {
    v_752 = sub_275;
  };
  if (instanciador_lv) {
    v_749 = sub_274;
  } else {
    v_749 = sub_275;
  };
  if (instanciador_cv) {
    v_750 = false;
  } else {
    v_750 = v_749;
  };
  if (instanciador_c_vent) {
    sub_273 = v_750;
  } else {
    sub_273 = v_752;
  };
  if (instanciador_ck_17_1) {
    sub_272 = sub_273;
  } else {
    sub_272 = false;
  };
  if (instanciador_lx) {
    v_755 = sub_272;
  } else {
    v_755 = sub_273;
  };
  if (instanciador_c_lampExt) {
    v_756 = v_755;
  } else {
    v_756 = sub_273;
  };
  if (instanciador_lx) {
    v_753 = false;
  } else {
    v_753 = sub_272;
  };
  if (instanciador_c_lampExt) {
    v_754 = false;
  } else {
    v_754 = v_753;
  };
  if (instanciador_cx) {
    sub_271 = v_754;
  } else {
    sub_271 = v_756;
  };
  if (instanciador_ck_15_1) {
    sub_270 = sub_271;
  } else {
    sub_270 = false;
  };
  if (instanciador_l4) {
    v_759 = sub_270;
  } else {
    v_759 = sub_271;
  };
  if (instanciador_c4_lamp) {
    v_760 = v_759;
  } else {
    v_760 = sub_271;
  };
  if (instanciador_l4) {
    v_757 = false;
  } else {
    v_757 = sub_270;
  };
  if (instanciador_c4_lamp) {
    v_758 = false;
  } else {
    v_758 = v_757;
  };
  if (instanciador_c4) {
    sub_269 = v_758;
  } else {
    sub_269 = v_760;
  };
  if (instanciador_ck_13_1) {
    sub_268 = sub_269;
  } else {
    sub_268 = false;
  };
  if (instanciador_c3_lamp) {
    v_763 = sub_268;
  } else {
    v_763 = sub_269;
  };
  if (instanciador_l3) {
    v_764 = v_763;
  } else {
    v_764 = sub_269;
  };
  if (instanciador_c3_lamp) {
    v_761 = false;
  } else {
    v_761 = sub_268;
  };
  if (instanciador_l3) {
    v_762 = false;
  } else {
    v_762 = v_761;
  };
  if (instanciador_c3) {
    sub_267 = v_762;
  } else {
    sub_267 = v_764;
  };
  if (instanciador_ck_11_1) {
    sub_266 = sub_267;
  } else {
    sub_266 = false;
  };
  if (instanciador_c2_lamp) {
    v_767 = sub_266;
  } else {
    v_767 = sub_267;
  };
  if (instanciador_l2) {
    v_768 = v_767;
  } else {
    v_768 = sub_267;
  };
  if (instanciador_c2_lamp) {
    v_765 = false;
  } else {
    v_765 = sub_266;
  };
  if (instanciador_l2) {
    v_766 = false;
  } else {
    v_766 = v_765;
  };
  if (instanciador_c2) {
    sub_265 = v_766;
  } else {
    sub_265 = v_768;
  };
  if (instanciador_ck_9_1) {
    sub_264 = sub_265;
  } else {
    sub_264 = false;
  };
  if (instanciador_c1_lamp) {
    v_771 = sub_264;
  } else {
    v_771 = sub_265;
  };
  if (instanciador_l1) {
    v_772 = v_771;
  } else {
    v_772 = sub_265;
  };
  if (instanciador_c1_lamp) {
    v_769 = false;
  } else {
    v_769 = sub_264;
  };
  if (instanciador_l1) {
    v_770 = false;
  } else {
    v_770 = v_769;
  };
  if (instanciador_c1) {
    sub_263 = v_770;
  } else {
    sub_263 = v_772;
  };
  if (instanciador_neutro_input) {
    sub_228 = sub_229;
  } else {
    sub_228 = sub_263;
  };
  if (instanciador_seguranca_input) {
    v_810 = sub_228;
  } else {
    v_810 = v_809;
  };
  if (instanciador_domingol_input) {
    v_811 = sub_207;
  } else {
    v_811 = v_810;
  };
  if (instanciador_domingo_input) {
    sub_206 = sub_192;
  } else {
    sub_206 = v_811;
  };
  if (instanciador_v_341) {
    v_812 = sub_191;
  } else {
    v_812 = sub_206;
  };
  if (instanciador_sexta_input) {
    sub_205 = sub_191;
  } else {
    sub_205 = v_812;
  };
  if (instanciador_v_339) {
    v_869 = sub_205;
  } else {
    v_869 = sub_165;
  };
  if (instanciador_neutro_input) {
    sub_287 = sub_229;
  } else {
    sub_287 = sub_195;
  };
  if (instanciador_seguranca_input) {
    v_729 = sub_228;
  } else {
    v_729 = sub_287;
  };
  if (instanciador_domingol_input) {
    sub_286 = sub_207;
  } else {
    sub_286 = v_729;
  };
  if (instanciador_domingo_input) {
    sub_285 = sub_192;
  } else {
    sub_285 = sub_286;
  };
  if (instanciador_v_341) {
    sub_284 = sub_191;
  } else {
    sub_284 = sub_285;
  };
  sub_283 = sub_284;
  if (instanciador_v_339) {
    v_870 = sub_205;
  } else {
    v_870 = sub_283;
  };
  if (instanciador_ebd_input) {
    sub_164 = v_869;
  } else {
    sub_164 = v_870;
  };
  if (instanciador_seguranca_input) {
    v_725 = sub_263;
  } else {
    v_725 = sub_229;
  };
  if (instanciador_domingol_input) {
    v_726 = sub_207;
    v_724 = sub_207;
  } else {
    v_726 = v_725;
    v_724 = sub_193;
  };
  if (instanciador_domingo_input) {
    v_727 = v_724;
  } else {
    v_727 = v_726;
  };
  if (instanciador_domingol_input) {
    v_723 = sub_207;
    v_722 = sub_207;
  } else {
    v_723 = sub_228;
    v_722 = sub_287;
  };
  if (instanciador_domingo_input) {
    sub_289 = v_722;
  } else {
    sub_289 = v_723;
  };
  if (instanciador_v_341) {
    v_728 = v_727;
  } else {
    v_728 = sub_289;
  };
  if (instanciador_sexta_input) {
    sub_288 = sub_191;
  } else {
    sub_288 = v_728;
  };
  if (instanciador_neutro_input) {
    v = sub_229;
  } else {
    v = sub_209;
  };
  if (instanciador_seguranca_input) {
    sub_291 = sub_228;
  } else {
    sub_291 = v;
  };
  if (instanciador_domingo_input) {
    sub_290 = sub_192;
  } else {
    sub_290 = sub_291;
  };
  if (instanciador_v_341) {
    v_1059 = sub_286;
  } else {
    v_1059 = sub_290;
  };
  if (instanciador_sexta_input) {
    v_1060 = sub_191;
  } else {
    v_1060 = v_1059;
  };
  if (instanciador_v_339) {
    v_1061 = v_1060;
  } else {
    v_1061 = sub_288;
  };
  if (instanciador_ebd_input) {
    v_1062 = sub_167;
  } else {
    v_1062 = v_1061;
  };
  if (instanciador_v_340) {
    v_1063 = v_1062;
  } else {
    v_1063 = sub_164;
  };
  if (p_instanciador_cg) {
    sub_0 = v_1063;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_cg = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c_gela_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_cp, int instanciador_c_proj,
  int instanciador_cmp, int instanciador_c_microP, int instanciador_cml,
  int instanciador_c_microL, int instanciador_csl, int instanciador_c_somL,
  int instanciador_csp, int instanciador_c_somP, int instanciador_c_vent,
  int instanciador_cv, int instanciador_cx, int instanciador_c4,
  int instanciador_c3, int instanciador_c2, int instanciador_c1,
  int instanciador_c_lampExt, int instanciador_c4_lamp,
  int instanciador_c3_lamp, int instanciador_c2_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c_gela_out* _out) {
  
  int v_1398;
  int v_1397;
  int v_1396;
  int v_1395;
  int v_1394;
  int v_1393;
  int v_1392;
  int v_1391;
  int v_1390;
  int v_1389;
  int v_1388;
  int v_1387;
  int v_1386;
  int v_1385;
  int v_1384;
  int v_1383;
  int v_1382;
  int v_1381;
  int v_1380;
  int v_1379;
  int v_1378;
  int v_1377;
  int v_1376;
  int v_1375;
  int v_1374;
  int v_1373;
  int v_1372;
  int v_1371;
  int v_1370;
  int v_1369;
  int v_1368;
  int v_1367;
  int v_1366;
  int v_1365;
  int v_1364;
  int v_1363;
  int v_1362;
  int v_1361;
  int v_1360;
  int v_1359;
  int v_1358;
  int v_1357;
  int v_1356;
  int v_1355;
  int v_1354;
  int v_1353;
  int v_1352;
  int v_1351;
  int v_1350;
  int v_1349;
  int v_1348;
  int v_1347;
  int v_1346;
  int v_1345;
  int v_1344;
  int v_1343;
  int v_1342;
  int v_1341;
  int v_1340;
  int v_1339;
  int v_1338;
  int v_1337;
  int v_1336;
  int v_1335;
  int v_1334;
  int v_1333;
  int v_1332;
  int v_1331;
  int v_1330;
  int v_1329;
  int v_1328;
  int v_1327;
  int v_1326;
  int v_1325;
  int v_1324;
  int v_1323;
  int v_1322;
  int v_1321;
  int v_1320;
  int v_1319;
  int v_1318;
  int v_1317;
  int v_1316;
  int v_1315;
  int v_1314;
  int v_1313;
  int v_1312;
  int v_1311;
  int v_1310;
  int v_1309;
  int v_1308;
  int v_1307;
  int v_1306;
  int v_1305;
  int v_1304;
  int v_1303;
  int v_1302;
  int v_1301;
  int v_1300;
  int v_1299;
  int v_1298;
  int v_1297;
  int v_1296;
  int v_1295;
  int v_1294;
  int v_1293;
  int v_1292;
  int v_1291;
  int v_1290;
  int v_1289;
  int v_1288;
  int v_1287;
  int v_1286;
  int v_1285;
  int v_1284;
  int v_1283;
  int v_1282;
  int v_1281;
  int v_1280;
  int v_1279;
  int v_1278;
  int v_1277;
  int v_1276;
  int v_1275;
  int v_1274;
  int v_1273;
  int v_1272;
  int v_1271;
  int v_1270;
  int v_1269;
  int v_1268;
  int v_1267;
  int v_1266;
  int v_1265;
  int v_1264;
  int v_1263;
  int v_1262;
  int v_1261;
  int v_1260;
  int v_1259;
  int v_1258;
  int v_1257;
  int v_1256;
  int v_1255;
  int v_1254;
  int v_1253;
  int v_1252;
  int v_1251;
  int v_1250;
  int v_1249;
  int v_1248;
  int v_1247;
  int v_1246;
  int v_1245;
  int v_1244;
  int v_1243;
  int v_1242;
  int v_1241;
  int v_1240;
  int v_1239;
  int v_1238;
  int v_1237;
  int v_1236;
  int v_1235;
  int v_1234;
  int v_1233;
  int v_1232;
  int v_1231;
  int v_1230;
  int v_1229;
  int v_1228;
  int v_1227;
  int v_1226;
  int v_1225;
  int v_1224;
  int v_1223;
  int v_1222;
  int v_1221;
  int v_1220;
  int v_1219;
  int v_1218;
  int v_1217;
  int v_1216;
  int v_1215;
  int v_1214;
  int v_1213;
  int v_1212;
  int v_1211;
  int v_1210;
  int v_1209;
  int v_1208;
  int v_1207;
  int v_1206;
  int v_1205;
  int v_1204;
  int v_1203;
  int v_1202;
  int v_1201;
  int v_1200;
  int v_1199;
  int v_1198;
  int v_1197;
  int v_1196;
  int v_1195;
  int v_1194;
  int v_1193;
  int v_1192;
  int v_1191;
  int v_1190;
  int v_1189;
  int v_1188;
  int v_1187;
  int v_1186;
  int v_1185;
  int v_1184;
  int v_1183;
  int v_1182;
  int v_1181;
  int v_1180;
  int v_1179;
  int v_1178;
  int v_1177;
  int v_1176;
  int v_1175;
  int v_1174;
  int v_1173;
  int v_1172;
  int v_1171;
  int v_1170;
  int v_1169;
  int v_1168;
  int v_1167;
  int v_1166;
  int v_1165;
  int v_1164;
  int v_1163;
  int v_1162;
  int v_1161;
  int v_1160;
  int v_1159;
  int v_1158;
  int v_1157;
  int v_1156;
  int v_1155;
  int v_1154;
  int v_1153;
  int v_1152;
  int v_1151;
  int v_1150;
  int v_1149;
  int v_1148;
  int v_1147;
  int v_1146;
  int v_1145;
  int v_1144;
  int v_1143;
  int v_1142;
  int v_1141;
  int v_1140;
  int v_1139;
  int v_1138;
  int v_1137;
  int v_1136;
  int v_1135;
  int v_1134;
  int v_1133;
  int v_1132;
  int v_1131;
  int v_1130;
  int v_1129;
  int v_1128;
  int v_1127;
  int v_1126;
  int v_1125;
  int v_1124;
  int v_1123;
  int v_1122;
  int v_1121;
  int v_1120;
  int v_1119;
  int v_1118;
  int v_1117;
  int v_1116;
  int v_1115;
  int v_1114;
  int v_1113;
  int v_1112;
  int v_1111;
  int v_1110;
  int v_1109;
  int v_1108;
  int v_1107;
  int v_1106;
  int v_1105;
  int v_1104;
  int v_1103;
  int v_1102;
  int v_1101;
  int v_1100;
  int v_1099;
  int v_1098;
  int v_1097;
  int v_1096;
  int v_1095;
  int v_1094;
  int v_1093;
  int v_1092;
  int v_1091;
  int v_1090;
  int v_1089;
  int v_1088;
  int v_1087;
  int v_1086;
  int v_1085;
  int v_1084;
  int v_1083;
  int v_1082;
  int v_1081;
  int v_1080;
  int v_1079;
  int v_1078;
  int v_1077;
  int v_1076;
  int v_1075;
  int v_1074;
  int v_1073;
  int v_1072;
  int v_1071;
  int v_1070;
  int v_1069;
  int v_1068;
  int v_1067;
  int v_1066;
  int v_1065;
  int v_1064;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  int sub_246;
  int sub_247;
  int sub_248;
  int sub_249;
  int sub_250;
  int sub_251;
  int sub_252;
  int sub_253;
  int sub_254;
  int sub_255;
  int sub_256;
  int sub_257;
  int sub_258;
  int sub_259;
  int sub_260;
  int sub_261;
  int sub_262;
  int sub_263;
  int sub_264;
  int sub_265;
  int sub_266;
  int sub_267;
  int sub_268;
  int sub_269;
  int sub_270;
  int sub_271;
  int sub_272;
  int sub_273;
  int sub_274;
  int sub_275;
  int sub_276;
  int sub_277;
  int sub_278;
  int sub_279;
  int sub_280;
  int sub_281;
  int sub_282;
  int sub_283;
  int sub_284;
  int sub_285;
  int sub_286;
  int sub_287;
  sub_27 = (instanciador_inpSl&&false);
  if (instanciador_c_somL) {
    v_1344 = false;
  } else {
    v_1344 = sub_27;
  };
  if (instanciador_ck_27_1) {
    v_1345 = v_1344;
  } else {
    v_1345 = false;
  };
  sub_29 = false;
  if (instanciador_c_somL) {
    sub_28 = sub_27;
  } else {
    sub_28 = sub_29;
  };
  sub_30 = sub_29;
  if (instanciador_ck_27_1) {
    v_1346 = sub_30;
  } else {
    v_1346 = sub_28;
  };
  if (instanciador_csl) {
    sub_26 = v_1345;
  } else {
    sub_26 = v_1346;
  };
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (instanciador_ck_23_1) {
    sub_31 = false;
  } else {
    sub_31 = sub_25;
  };
  if (instanciador_inpMp) {
    v_1349 = sub_31;
  } else {
    v_1349 = false;
  };
  if (instanciador_c_microP) {
    v_1350 = v_1349;
  } else {
    v_1350 = false;
  };
  if (instanciador_inpMp) {
    v_1347 = sub_25;
  } else {
    v_1347 = sub_31;
  };
  if (instanciador_c_microP) {
    v_1348 = sub_24;
  } else {
    v_1348 = v_1347;
  };
  if (instanciador_cmp) {
    sub_23 = v_1348;
  } else {
    sub_23 = v_1350;
  };
  v_1336 = !(instanciador_inpSl);
  sub_36 = (v_1336||false);
  if (instanciador_c_somL) {
    v_1337 = false;
  } else {
    v_1337 = sub_36;
  };
  if (instanciador_ck_27_1) {
    v_1338 = v_1337;
  } else {
    v_1338 = false;
  };
  sub_38 = true;
  if (instanciador_c_somL) {
    sub_37 = sub_36;
  } else {
    sub_37 = sub_38;
  };
  sub_39 = sub_38;
  if (instanciador_ck_27_1) {
    v_1339 = sub_39;
  } else {
    v_1339 = sub_37;
  };
  if (instanciador_csl) {
    sub_35 = v_1338;
  } else {
    sub_35 = v_1339;
  };
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (instanciador_ck_23_1) {
    sub_40 = false;
  } else {
    sub_40 = sub_34;
  };
  if (instanciador_inpMp) {
    v_1342 = sub_40;
  } else {
    v_1342 = false;
  };
  if (instanciador_c_microP) {
    v_1343 = v_1342;
  } else {
    v_1343 = false;
  };
  if (instanciador_inpMp) {
    v_1340 = sub_34;
  } else {
    v_1340 = sub_40;
  };
  if (instanciador_c_microP) {
    v_1341 = sub_33;
  } else {
    v_1341 = v_1340;
  };
  if (instanciador_cmp) {
    sub_32 = v_1341;
  } else {
    sub_32 = v_1343;
  };
  if (instanciador_ck_31_1) {
    v_1351 = sub_32;
  } else {
    v_1351 = sub_23;
  };
  if (instanciador_inpGela) {
    sub_22 = sub_23;
  } else {
    sub_22 = v_1351;
  };
  if (instanciador_ck_29_1) {
    sub_21 = sub_22;
  } else {
    sub_21 = false;
  };
  if (instanciador_inpProj) {
    v_1354 = sub_21;
  } else {
    v_1354 = sub_22;
  };
  if (instanciador_c_proj) {
    v_1355 = v_1354;
  } else {
    v_1355 = sub_22;
  };
  if (instanciador_inpProj) {
    v_1352 = false;
  } else {
    v_1352 = sub_21;
  };
  if (instanciador_c_proj) {
    v_1353 = false;
  } else {
    v_1353 = v_1352;
  };
  if (instanciador_cp) {
    sub_20 = v_1353;
  } else {
    sub_20 = v_1355;
  };
  if (instanciador_ck_25_1) {
    sub_41 = false;
  } else {
    sub_41 = sub_20;
  };
  if (instanciador_inpSp) {
    v_1358 = sub_41;
  } else {
    v_1358 = false;
  };
  if (instanciador_c_somP) {
    v_1359 = v_1358;
  } else {
    v_1359 = false;
  };
  if (instanciador_inpSp) {
    v_1356 = sub_20;
  } else {
    v_1356 = sub_41;
  };
  if (instanciador_c_somP) {
    v_1357 = sub_20;
  } else {
    v_1357 = v_1356;
  };
  if (instanciador_csp) {
    sub_19 = v_1357;
  } else {
    sub_19 = v_1359;
  };
  if (instanciador_ck_21_1) {
    sub_18 = sub_19;
  } else {
    sub_18 = false;
  };
  if (instanciador_inpMl) {
    v_1362 = sub_18;
  } else {
    v_1362 = sub_19;
  };
  if (instanciador_c_microL) {
    v_1363 = v_1362;
  } else {
    v_1363 = sub_19;
  };
  if (instanciador_inpMl) {
    v_1360 = false;
  } else {
    v_1360 = sub_18;
  };
  if (instanciador_c_microL) {
    v_1361 = false;
  } else {
    v_1361 = v_1360;
  };
  if (instanciador_cml) {
    sub_17 = v_1361;
  } else {
    sub_17 = v_1363;
  };
  if (instanciador_ck_19_1) {
    sub_42 = false;
  } else {
    sub_42 = sub_17;
  };
  if (instanciador_lv) {
    v_1366 = sub_17;
  } else {
    v_1366 = sub_42;
  };
  if (instanciador_cv) {
    v_1367 = v_1366;
  } else {
    v_1367 = false;
  };
  if (instanciador_lv) {
    v_1364 = sub_42;
  } else {
    v_1364 = false;
  };
  if (instanciador_cv) {
    v_1365 = sub_17;
  } else {
    v_1365 = v_1364;
  };
  if (instanciador_c_vent) {
    sub_16 = v_1365;
  } else {
    sub_16 = v_1367;
  };
  if (instanciador_ck_17_1) {
    sub_15 = sub_16;
  } else {
    sub_15 = false;
  };
  if (instanciador_lx) {
    v_1370 = sub_15;
    v_1368 = false;
  } else {
    v_1370 = sub_16;
    v_1368 = sub_15;
  };
  if (instanciador_c_lampExt) {
    v_1369 = false;
  } else {
    v_1369 = v_1368;
  };
  sub_43 = sub_16;
  if (instanciador_c_lampExt) {
    v_1371 = v_1370;
  } else {
    v_1371 = sub_43;
  };
  if (instanciador_cx) {
    sub_14 = v_1369;
  } else {
    sub_14 = v_1371;
  };
  if (instanciador_ck_15_1) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (instanciador_l4) {
    v_1374 = sub_13;
  } else {
    v_1374 = sub_14;
  };
  if (instanciador_c4_lamp) {
    v_1375 = v_1374;
  } else {
    v_1375 = sub_14;
  };
  if (instanciador_l4) {
    v_1372 = false;
  } else {
    v_1372 = sub_13;
  };
  if (instanciador_c4_lamp) {
    v_1373 = false;
  } else {
    v_1373 = v_1372;
  };
  if (instanciador_c4) {
    sub_12 = v_1373;
  } else {
    sub_12 = v_1375;
  };
  if (instanciador_ck_13_1) {
    sub_44 = false;
  } else {
    sub_44 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_1378 = sub_44;
  } else {
    v_1378 = false;
  };
  if (instanciador_l3) {
    v_1379 = v_1378;
  } else {
    v_1379 = false;
  };
  if (instanciador_c3_lamp) {
    v_1376 = sub_12;
  } else {
    v_1376 = sub_44;
  };
  if (instanciador_l3) {
    v_1377 = sub_12;
  } else {
    v_1377 = v_1376;
  };
  if (instanciador_c3) {
    sub_11 = v_1377;
  } else {
    sub_11 = v_1379;
  };
  if (instanciador_ck_11_1) {
    sub_45 = false;
  } else {
    sub_45 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_1382 = sub_45;
  } else {
    v_1382 = false;
  };
  if (instanciador_l2) {
    v_1383 = v_1382;
  } else {
    v_1383 = false;
  };
  if (instanciador_c2_lamp) {
    v_1380 = sub_11;
  } else {
    v_1380 = sub_45;
  };
  if (instanciador_l2) {
    v_1381 = sub_11;
  } else {
    v_1381 = v_1380;
  };
  if (instanciador_c2) {
    sub_10 = v_1381;
  } else {
    sub_10 = v_1383;
  };
  if (instanciador_ck_9_1) {
    sub_46 = false;
  } else {
    sub_46 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_1386 = sub_46;
  } else {
    v_1386 = false;
  };
  if (instanciador_l1) {
    v_1387 = v_1386;
  } else {
    v_1387 = false;
  };
  if (instanciador_c1_lamp) {
    v_1384 = sub_10;
  } else {
    v_1384 = sub_46;
  };
  if (instanciador_l1) {
    v_1385 = sub_10;
  } else {
    v_1385 = v_1384;
  };
  if (instanciador_c1) {
    sub_9 = v_1385;
  } else {
    sub_9 = v_1387;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (instanciador_ck_17_1) {
    sub_56 = false;
  } else {
    sub_56 = sub_16;
  };
  if (instanciador_lx) {
    v_1318 = sub_56;
  } else {
    v_1318 = false;
  };
  if (instanciador_c_lampExt) {
    v_1319 = v_1318;
  } else {
    v_1319 = false;
  };
  if (instanciador_lx) {
    v_1316 = sub_16;
  } else {
    v_1316 = sub_56;
  };
  if (instanciador_c_lampExt) {
    v_1317 = sub_43;
  } else {
    v_1317 = v_1316;
  };
  if (instanciador_cx) {
    sub_55 = v_1317;
  } else {
    sub_55 = v_1319;
  };
  if (instanciador_ck_15_1) {
    sub_57 = false;
  } else {
    sub_57 = sub_55;
  };
  if (instanciador_l4) {
    v_1322 = sub_57;
  } else {
    v_1322 = false;
  };
  if (instanciador_c4_lamp) {
    v_1323 = v_1322;
  } else {
    v_1323 = false;
  };
  if (instanciador_l4) {
    v_1320 = sub_55;
  } else {
    v_1320 = sub_57;
  };
  if (instanciador_c4_lamp) {
    v_1321 = sub_55;
  } else {
    v_1321 = v_1320;
  };
  if (instanciador_c4) {
    sub_54 = v_1321;
  } else {
    sub_54 = v_1323;
  };
  if (instanciador_ck_13_1) {
    sub_58 = false;
  } else {
    sub_58 = sub_54;
  };
  if (instanciador_c3_lamp) {
    v_1326 = sub_58;
  } else {
    v_1326 = false;
  };
  if (instanciador_l3) {
    v_1327 = v_1326;
  } else {
    v_1327 = false;
  };
  if (instanciador_c3_lamp) {
    v_1324 = sub_54;
  } else {
    v_1324 = sub_58;
  };
  if (instanciador_l3) {
    v_1325 = sub_54;
  } else {
    v_1325 = v_1324;
  };
  if (instanciador_c3) {
    sub_53 = v_1325;
  } else {
    sub_53 = v_1327;
  };
  if (instanciador_ck_11_1) {
    sub_59 = false;
  } else {
    sub_59 = sub_53;
  };
  if (instanciador_c2_lamp) {
    v_1330 = sub_59;
  } else {
    v_1330 = false;
  };
  if (instanciador_l2) {
    v_1331 = v_1330;
  } else {
    v_1331 = false;
  };
  if (instanciador_c2_lamp) {
    v_1328 = sub_53;
  } else {
    v_1328 = sub_59;
  };
  if (instanciador_l2) {
    v_1329 = sub_53;
  } else {
    v_1329 = v_1328;
  };
  if (instanciador_c2) {
    sub_52 = v_1329;
  } else {
    sub_52 = v_1331;
  };
  if (instanciador_ck_9_1) {
    sub_60 = false;
  } else {
    sub_60 = sub_52;
  };
  if (instanciador_c1_lamp) {
    v_1334 = sub_60;
  } else {
    v_1334 = false;
  };
  if (instanciador_l1) {
    v_1335 = v_1334;
  } else {
    v_1335 = false;
  };
  if (instanciador_c1_lamp) {
    v_1332 = sub_52;
  } else {
    v_1332 = sub_60;
  };
  if (instanciador_l1) {
    v_1333 = sub_52;
  } else {
    v_1333 = v_1332;
  };
  if (instanciador_c1) {
    sub_51 = v_1333;
  } else {
    sub_51 = v_1335;
  };
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  if (instanciador_v_341) {
    sub_4 = sub_47;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  v_1267 = !(instanciador_inpSl);
  sub_83 = (v_1267&&false);
  if (instanciador_c_somL) {
    v_1268 = sub_29;
  } else {
    v_1268 = sub_83;
  };
  if (instanciador_ck_27_1) {
    v_1269 = v_1268;
  } else {
    v_1269 = sub_30;
  };
  if (instanciador_c_somL) {
    sub_84 = sub_83;
  } else {
    sub_84 = false;
  };
  if (instanciador_ck_27_1) {
    v_1270 = false;
  } else {
    v_1270 = sub_84;
  };
  if (instanciador_csl) {
    sub_82 = v_1269;
  } else {
    sub_82 = v_1270;
  };
  sub_81 = sub_82;
  if (instanciador_ck_23_1) {
    sub_80 = sub_81;
  } else {
    sub_80 = false;
  };
  if (instanciador_inpMp) {
    v_1273 = sub_80;
  } else {
    v_1273 = sub_81;
  };
  if (instanciador_c_microP) {
    v_1274 = v_1273;
  } else {
    v_1274 = sub_81;
  };
  if (instanciador_inpMp) {
    v_1271 = false;
  } else {
    v_1271 = sub_80;
  };
  if (instanciador_c_microP) {
    v_1272 = false;
  } else {
    v_1272 = v_1271;
  };
  if (instanciador_cmp) {
    sub_79 = v_1272;
  } else {
    sub_79 = v_1274;
  };
  sub_89 = (instanciador_inpSl||false);
  if (instanciador_c_somL) {
    v_1260 = sub_38;
  } else {
    v_1260 = sub_89;
  };
  if (instanciador_ck_27_1) {
    v_1261 = v_1260;
  } else {
    v_1261 = sub_39;
  };
  if (instanciador_c_somL) {
    sub_90 = sub_89;
  } else {
    sub_90 = false;
  };
  if (instanciador_ck_27_1) {
    v_1262 = false;
  } else {
    v_1262 = sub_90;
  };
  if (instanciador_csl) {
    sub_88 = v_1261;
  } else {
    sub_88 = v_1262;
  };
  sub_87 = sub_88;
  if (instanciador_ck_23_1) {
    sub_86 = sub_87;
  } else {
    sub_86 = false;
  };
  if (instanciador_inpMp) {
    v_1265 = sub_86;
  } else {
    v_1265 = sub_87;
  };
  if (instanciador_c_microP) {
    v_1266 = v_1265;
  } else {
    v_1266 = sub_87;
  };
  if (instanciador_inpMp) {
    v_1263 = false;
  } else {
    v_1263 = sub_86;
  };
  if (instanciador_c_microP) {
    v_1264 = false;
  } else {
    v_1264 = v_1263;
  };
  if (instanciador_cmp) {
    sub_85 = v_1264;
  } else {
    sub_85 = v_1266;
  };
  if (instanciador_ck_31_1) {
    v_1275 = sub_85;
  } else {
    v_1275 = sub_79;
  };
  if (instanciador_inpGela) {
    sub_78 = sub_79;
  } else {
    sub_78 = v_1275;
  };
  if (instanciador_ck_29_1) {
    sub_91 = false;
  } else {
    sub_91 = sub_78;
  };
  if (instanciador_inpProj) {
    v_1278 = sub_91;
  } else {
    v_1278 = false;
  };
  if (instanciador_c_proj) {
    v_1279 = v_1278;
  } else {
    v_1279 = false;
  };
  if (instanciador_inpProj) {
    v_1276 = sub_78;
  } else {
    v_1276 = sub_91;
  };
  if (instanciador_c_proj) {
    v_1277 = sub_78;
  } else {
    v_1277 = v_1276;
  };
  if (instanciador_cp) {
    sub_77 = v_1277;
  } else {
    sub_77 = v_1279;
  };
  if (instanciador_ck_25_1) {
    sub_76 = sub_77;
  } else {
    sub_76 = false;
  };
  if (instanciador_inpSp) {
    v_1282 = sub_76;
  } else {
    v_1282 = sub_77;
  };
  if (instanciador_c_somP) {
    v_1283 = v_1282;
  } else {
    v_1283 = sub_77;
  };
  if (instanciador_inpSp) {
    v_1280 = false;
  } else {
    v_1280 = sub_76;
  };
  if (instanciador_c_somP) {
    v_1281 = false;
  } else {
    v_1281 = v_1280;
  };
  if (instanciador_csp) {
    sub_75 = v_1281;
  } else {
    sub_75 = v_1283;
  };
  if (instanciador_ck_21_1) {
    sub_92 = false;
  } else {
    sub_92 = sub_75;
  };
  if (instanciador_inpMl) {
    v_1286 = sub_92;
  } else {
    v_1286 = false;
  };
  if (instanciador_c_microL) {
    v_1287 = v_1286;
  } else {
    v_1287 = false;
  };
  if (instanciador_inpMl) {
    v_1284 = sub_75;
  } else {
    v_1284 = sub_92;
  };
  if (instanciador_c_microL) {
    v_1285 = sub_75;
  } else {
    v_1285 = v_1284;
  };
  if (instanciador_cml) {
    sub_74 = v_1285;
  } else {
    sub_74 = v_1287;
  };
  if (instanciador_ck_19_1) {
    sub_93 = false;
  } else {
    sub_93 = sub_74;
  };
  if (instanciador_lv) {
    v_1290 = sub_74;
  } else {
    v_1290 = sub_93;
  };
  if (instanciador_cv) {
    v_1291 = v_1290;
  } else {
    v_1291 = false;
  };
  if (instanciador_lv) {
    v_1288 = sub_93;
  } else {
    v_1288 = false;
  };
  if (instanciador_cv) {
    v_1289 = sub_74;
  } else {
    v_1289 = v_1288;
  };
  if (instanciador_c_vent) {
    sub_73 = v_1289;
  } else {
    sub_73 = v_1291;
  };
  if (instanciador_ck_17_1) {
    sub_94 = false;
  } else {
    sub_94 = sub_73;
  };
  if (instanciador_lx) {
    v_1294 = sub_94;
  } else {
    v_1294 = false;
  };
  if (instanciador_c_lampExt) {
    v_1295 = v_1294;
  } else {
    v_1295 = false;
  };
  if (instanciador_lx) {
    v_1292 = sub_73;
  } else {
    v_1292 = sub_94;
  };
  if (instanciador_c_lampExt) {
    v_1293 = sub_73;
  } else {
    v_1293 = v_1292;
  };
  if (instanciador_cx) {
    sub_72 = v_1293;
  } else {
    sub_72 = v_1295;
  };
  if (instanciador_ck_15_1) {
    sub_71 = sub_72;
  } else {
    sub_71 = false;
  };
  if (instanciador_l4) {
    v_1298 = sub_71;
  } else {
    v_1298 = sub_72;
  };
  if (instanciador_c4_lamp) {
    v_1299 = v_1298;
  } else {
    v_1299 = sub_72;
  };
  if (instanciador_l4) {
    v_1296 = false;
  } else {
    v_1296 = sub_71;
  };
  if (instanciador_c4_lamp) {
    v_1297 = false;
  } else {
    v_1297 = v_1296;
  };
  if (instanciador_c4) {
    sub_70 = v_1297;
  } else {
    sub_70 = v_1299;
  };
  if (instanciador_ck_13_1) {
    sub_95 = false;
  } else {
    sub_95 = sub_70;
  };
  if (instanciador_c3_lamp) {
    v_1302 = sub_95;
  } else {
    v_1302 = false;
  };
  if (instanciador_l3) {
    v_1303 = v_1302;
  } else {
    v_1303 = false;
  };
  if (instanciador_c3_lamp) {
    v_1300 = sub_70;
  } else {
    v_1300 = sub_95;
  };
  if (instanciador_l3) {
    v_1301 = sub_70;
  } else {
    v_1301 = v_1300;
  };
  if (instanciador_c3) {
    sub_69 = v_1301;
  } else {
    sub_69 = v_1303;
  };
  if (instanciador_ck_11_1) {
    sub_68 = sub_69;
  } else {
    sub_68 = false;
  };
  if (instanciador_c2_lamp) {
    v_1306 = sub_68;
  } else {
    v_1306 = sub_69;
  };
  if (instanciador_l2) {
    v_1307 = v_1306;
  } else {
    v_1307 = sub_69;
  };
  if (instanciador_c2_lamp) {
    v_1304 = false;
  } else {
    v_1304 = sub_68;
  };
  if (instanciador_l2) {
    v_1305 = false;
  } else {
    v_1305 = v_1304;
  };
  if (instanciador_c2) {
    sub_67 = v_1305;
  } else {
    sub_67 = v_1307;
  };
  if (instanciador_ck_9_1) {
    sub_66 = sub_67;
  } else {
    sub_66 = false;
  };
  if (instanciador_c1_lamp) {
    v_1310 = sub_66;
  } else {
    v_1310 = sub_67;
  };
  if (instanciador_l1) {
    v_1311 = v_1310;
  } else {
    v_1311 = sub_67;
  };
  if (instanciador_c1_lamp) {
    v_1308 = false;
  } else {
    v_1308 = sub_66;
  };
  if (instanciador_l1) {
    v_1309 = false;
  } else {
    v_1309 = v_1308;
  };
  if (instanciador_c1) {
    sub_65 = v_1309;
  } else {
    sub_65 = v_1311;
  };
  sub_64 = sub_65;
  sub_63 = sub_64;
  sub_129 = sub_30;
  sub_128 = sub_129;
  sub_127 = sub_128;
  sub_126 = sub_127;
  sub_125 = sub_126;
  sub_124 = sub_125;
  sub_123 = sub_124;
  sub_122 = sub_123;
  sub_121 = sub_122;
  sub_120 = sub_121;
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_117 = sub_118;
  sub_116 = sub_117;
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  if (instanciador_neutro_input) {
    v_1312 = sub_97;
  } else {
    v_1312 = sub_9;
  };
  if (instanciador_ck_23_1) {
    sub_150 = sub_25;
  } else {
    sub_150 = false;
  };
  if (instanciador_inpMp) {
    v_1222 = sub_150;
  } else {
    v_1222 = sub_25;
  };
  if (instanciador_c_microP) {
    v_1223 = v_1222;
  } else {
    v_1223 = sub_24;
  };
  if (instanciador_inpMp) {
    v_1220 = false;
  } else {
    v_1220 = sub_150;
  };
  if (instanciador_c_microP) {
    v_1221 = false;
  } else {
    v_1221 = v_1220;
  };
  if (instanciador_cmp) {
    sub_149 = v_1221;
  } else {
    sub_149 = v_1223;
  };
  sub_148 = sub_149;
  if (instanciador_ck_29_1) {
    sub_147 = sub_148;
  } else {
    sub_147 = false;
  };
  if (instanciador_inpProj) {
    v_1226 = sub_147;
  } else {
    v_1226 = sub_148;
  };
  if (instanciador_c_proj) {
    v_1227 = v_1226;
  } else {
    v_1227 = sub_148;
  };
  if (instanciador_inpProj) {
    v_1224 = false;
  } else {
    v_1224 = sub_147;
  };
  if (instanciador_c_proj) {
    v_1225 = false;
  } else {
    v_1225 = v_1224;
  };
  if (instanciador_cp) {
    sub_146 = v_1225;
  } else {
    sub_146 = v_1227;
  };
  if (instanciador_ck_25_1) {
    sub_145 = sub_146;
  } else {
    sub_145 = false;
  };
  if (instanciador_inpSp) {
    v_1230 = sub_145;
  } else {
    v_1230 = sub_146;
  };
  if (instanciador_c_somP) {
    v_1231 = v_1230;
  } else {
    v_1231 = sub_146;
  };
  if (instanciador_inpSp) {
    v_1228 = false;
  } else {
    v_1228 = sub_145;
  };
  if (instanciador_c_somP) {
    v_1229 = false;
  } else {
    v_1229 = v_1228;
  };
  if (instanciador_csp) {
    sub_144 = v_1229;
  } else {
    sub_144 = v_1231;
  };
  if (instanciador_ck_21_1) {
    sub_143 = sub_144;
  } else {
    sub_143 = false;
  };
  if (instanciador_inpMl) {
    v_1234 = sub_143;
  } else {
    v_1234 = sub_144;
  };
  if (instanciador_c_microL) {
    v_1235 = v_1234;
  } else {
    v_1235 = sub_144;
  };
  if (instanciador_inpMl) {
    v_1232 = false;
  } else {
    v_1232 = sub_143;
  };
  if (instanciador_c_microL) {
    v_1233 = false;
  } else {
    v_1233 = v_1232;
  };
  if (instanciador_cml) {
    sub_142 = v_1233;
  } else {
    sub_142 = v_1235;
  };
  if (instanciador_ck_19_1) {
    sub_141 = sub_142;
  } else {
    sub_141 = false;
  };
  if (instanciador_lv) {
    v_1238 = false;
  } else {
    v_1238 = sub_141;
  };
  if (instanciador_cv) {
    v_1239 = v_1238;
  } else {
    v_1239 = sub_142;
  };
  if (instanciador_lv) {
    v_1236 = sub_141;
  } else {
    v_1236 = sub_142;
  };
  if (instanciador_cv) {
    v_1237 = false;
  } else {
    v_1237 = v_1236;
  };
  if (instanciador_c_vent) {
    sub_140 = v_1237;
  } else {
    sub_140 = v_1239;
  };
  if (instanciador_ck_17_1) {
    sub_139 = sub_140;
  } else {
    sub_139 = false;
  };
  if (instanciador_lx) {
    v_1242 = sub_139;
  } else {
    v_1242 = sub_140;
  };
  if (instanciador_c_lampExt) {
    v_1243 = v_1242;
  } else {
    v_1243 = sub_140;
  };
  if (instanciador_lx) {
    v_1240 = false;
  } else {
    v_1240 = sub_139;
  };
  if (instanciador_c_lampExt) {
    v_1241 = false;
  } else {
    v_1241 = v_1240;
  };
  if (instanciador_cx) {
    sub_138 = v_1241;
  } else {
    sub_138 = v_1243;
  };
  if (instanciador_ck_15_1) {
    sub_137 = sub_138;
  } else {
    sub_137 = false;
  };
  if (instanciador_l4) {
    v_1246 = sub_137;
  } else {
    v_1246 = sub_138;
  };
  if (instanciador_c4_lamp) {
    v_1247 = v_1246;
  } else {
    v_1247 = sub_138;
  };
  if (instanciador_l4) {
    v_1244 = false;
  } else {
    v_1244 = sub_137;
  };
  if (instanciador_c4_lamp) {
    v_1245 = false;
  } else {
    v_1245 = v_1244;
  };
  if (instanciador_c4) {
    sub_136 = v_1245;
  } else {
    sub_136 = v_1247;
  };
  if (instanciador_ck_13_1) {
    sub_135 = sub_136;
  } else {
    sub_135 = false;
  };
  if (instanciador_c3_lamp) {
    v_1250 = sub_135;
  } else {
    v_1250 = sub_136;
  };
  if (instanciador_l3) {
    v_1251 = v_1250;
  } else {
    v_1251 = sub_136;
  };
  if (instanciador_c3_lamp) {
    v_1248 = false;
  } else {
    v_1248 = sub_135;
  };
  if (instanciador_l3) {
    v_1249 = false;
  } else {
    v_1249 = v_1248;
  };
  if (instanciador_c3) {
    sub_134 = v_1249;
  } else {
    sub_134 = v_1251;
  };
  if (instanciador_ck_11_1) {
    sub_133 = sub_134;
  } else {
    sub_133 = false;
  };
  if (instanciador_c2_lamp) {
    v_1254 = sub_133;
  } else {
    v_1254 = sub_134;
  };
  if (instanciador_l2) {
    v_1255 = v_1254;
  } else {
    v_1255 = sub_134;
  };
  if (instanciador_c2_lamp) {
    v_1252 = false;
  } else {
    v_1252 = sub_133;
  };
  if (instanciador_l2) {
    v_1253 = false;
  } else {
    v_1253 = v_1252;
  };
  if (instanciador_c2) {
    sub_132 = v_1253;
  } else {
    sub_132 = v_1255;
  };
  if (instanciador_ck_9_1) {
    sub_131 = sub_132;
  } else {
    sub_131 = false;
  };
  if (instanciador_c1_lamp) {
    v_1258 = sub_131;
  } else {
    v_1258 = sub_132;
  };
  if (instanciador_l1) {
    v_1259 = v_1258;
  } else {
    v_1259 = sub_132;
  };
  if (instanciador_c1_lamp) {
    v_1256 = false;
  } else {
    v_1256 = sub_131;
  };
  if (instanciador_l1) {
    v_1257 = false;
  } else {
    v_1257 = v_1256;
  };
  if (instanciador_c1) {
    sub_130 = v_1257;
  } else {
    sub_130 = v_1259;
  };
  if (instanciador_neutro_input) {
    sub_96 = sub_97;
  } else {
    sub_96 = sub_130;
  };
  if (instanciador_seguranca_input) {
    v_1313 = sub_96;
  } else {
    v_1313 = v_1312;
  };
  if (instanciador_domingol_input) {
    v_1314 = sub_63;
  } else {
    v_1314 = v_1313;
  };
  if (instanciador_domingo_input) {
    sub_62 = sub_48;
  } else {
    sub_62 = v_1314;
  };
  if (instanciador_v_341) {
    v_1315 = sub_47;
  } else {
    v_1315 = sub_62;
  };
  if (instanciador_sexta_input) {
    sub_61 = sub_47;
  } else {
    sub_61 = v_1315;
  };
  if (instanciador_v_339) {
    v_1388 = sub_61;
  } else {
    v_1388 = sub_3;
  };
  if (instanciador_neutro_input) {
    sub_155 = sub_97;
  } else {
    sub_155 = sub_51;
  };
  if (instanciador_seguranca_input) {
    v_1219 = sub_96;
  } else {
    v_1219 = sub_155;
  };
  if (instanciador_domingol_input) {
    sub_154 = sub_63;
  } else {
    sub_154 = v_1219;
  };
  if (instanciador_domingo_input) {
    sub_153 = sub_48;
  } else {
    sub_153 = sub_154;
  };
  if (instanciador_v_341) {
    sub_152 = sub_47;
  } else {
    sub_152 = sub_153;
  };
  sub_151 = sub_152;
  if (instanciador_v_339) {
    v_1389 = sub_61;
  } else {
    v_1389 = sub_151;
  };
  if (instanciador_ebd_input) {
    sub_2 = v_1388;
  } else {
    sub_2 = v_1389;
  };
  if (instanciador_seguranca_input) {
    v_1215 = sub_130;
  } else {
    v_1215 = sub_97;
  };
  if (instanciador_domingol_input) {
    v_1216 = sub_63;
    v_1214 = sub_63;
  } else {
    v_1216 = v_1215;
    v_1214 = sub_49;
  };
  if (instanciador_domingo_input) {
    v_1217 = v_1214;
  } else {
    v_1217 = v_1216;
  };
  if (instanciador_domingol_input) {
    v_1213 = sub_63;
    v_1212 = sub_63;
  } else {
    v_1213 = sub_96;
    v_1212 = sub_155;
  };
  if (instanciador_domingo_input) {
    sub_157 = v_1212;
  } else {
    sub_157 = v_1213;
  };
  if (instanciador_v_341) {
    v_1218 = v_1217;
  } else {
    v_1218 = sub_157;
  };
  if (instanciador_sexta_input) {
    sub_156 = sub_47;
  } else {
    sub_156 = v_1218;
  };
  if (instanciador_neutro_input) {
    v_1211 = sub_97;
  } else {
    v_1211 = sub_65;
  };
  if (instanciador_seguranca_input) {
    sub_159 = sub_96;
  } else {
    sub_159 = v_1211;
  };
  if (instanciador_domingo_input) {
    sub_158 = sub_48;
  } else {
    sub_158 = sub_159;
  };
  if (instanciador_v_341) {
    v_1390 = sub_154;
  } else {
    v_1390 = sub_158;
  };
  if (instanciador_sexta_input) {
    v_1391 = sub_47;
  } else {
    v_1391 = v_1390;
  };
  if (instanciador_v_339) {
    v_1392 = v_1391;
  } else {
    v_1392 = sub_156;
  };
  if (instanciador_ebd_input) {
    v_1393 = sub_5;
  } else {
    v_1393 = v_1392;
  };
  if (instanciador_v_340) {
    sub_1 = v_1393;
  } else {
    sub_1 = sub_2;
  };
  sub_180 = sub_32;
  if (instanciador_ck_29_1) {
    sub_179 = sub_180;
  } else {
    sub_179 = false;
  };
  if (instanciador_inpProj) {
    v_1175 = sub_179;
  } else {
    v_1175 = sub_180;
  };
  if (instanciador_c_proj) {
    v_1176 = v_1175;
  } else {
    v_1176 = sub_180;
  };
  if (instanciador_inpProj) {
    v_1173 = false;
  } else {
    v_1173 = sub_179;
  };
  if (instanciador_c_proj) {
    v_1174 = false;
  } else {
    v_1174 = v_1173;
  };
  if (instanciador_cp) {
    sub_178 = v_1174;
  } else {
    sub_178 = v_1176;
  };
  if (instanciador_ck_25_1) {
    sub_181 = false;
  } else {
    sub_181 = sub_178;
  };
  if (instanciador_inpSp) {
    v_1179 = sub_181;
  } else {
    v_1179 = false;
  };
  if (instanciador_c_somP) {
    v_1180 = v_1179;
  } else {
    v_1180 = false;
  };
  if (instanciador_inpSp) {
    v_1177 = sub_178;
  } else {
    v_1177 = sub_181;
  };
  if (instanciador_c_somP) {
    v_1178 = sub_178;
  } else {
    v_1178 = v_1177;
  };
  if (instanciador_csp) {
    sub_177 = v_1178;
  } else {
    sub_177 = v_1180;
  };
  if (instanciador_ck_21_1) {
    sub_176 = sub_177;
  } else {
    sub_176 = false;
  };
  if (instanciador_inpMl) {
    v_1183 = sub_176;
  } else {
    v_1183 = sub_177;
  };
  if (instanciador_c_microL) {
    v_1184 = v_1183;
  } else {
    v_1184 = sub_177;
  };
  if (instanciador_inpMl) {
    v_1181 = false;
  } else {
    v_1181 = sub_176;
  };
  if (instanciador_c_microL) {
    v_1182 = false;
  } else {
    v_1182 = v_1181;
  };
  if (instanciador_cml) {
    sub_175 = v_1182;
  } else {
    sub_175 = v_1184;
  };
  if (instanciador_ck_19_1) {
    sub_182 = false;
  } else {
    sub_182 = sub_175;
  };
  if (instanciador_lv) {
    v_1187 = sub_175;
  } else {
    v_1187 = sub_182;
  };
  if (instanciador_cv) {
    v_1188 = v_1187;
  } else {
    v_1188 = false;
  };
  if (instanciador_lv) {
    v_1185 = sub_182;
  } else {
    v_1185 = false;
  };
  if (instanciador_cv) {
    v_1186 = sub_175;
  } else {
    v_1186 = v_1185;
  };
  if (instanciador_c_vent) {
    sub_174 = v_1186;
  } else {
    sub_174 = v_1188;
  };
  if (instanciador_ck_17_1) {
    sub_173 = sub_174;
  } else {
    sub_173 = false;
  };
  if (instanciador_lx) {
    v_1191 = sub_173;
    v_1189 = false;
  } else {
    v_1191 = sub_174;
    v_1189 = sub_173;
  };
  if (instanciador_c_lampExt) {
    v_1190 = false;
  } else {
    v_1190 = v_1189;
  };
  sub_183 = sub_174;
  if (instanciador_c_lampExt) {
    v_1192 = v_1191;
  } else {
    v_1192 = sub_183;
  };
  if (instanciador_cx) {
    sub_172 = v_1190;
  } else {
    sub_172 = v_1192;
  };
  if (instanciador_ck_15_1) {
    sub_171 = sub_172;
  } else {
    sub_171 = false;
  };
  if (instanciador_l4) {
    v_1195 = sub_171;
  } else {
    v_1195 = sub_172;
  };
  if (instanciador_c4_lamp) {
    v_1196 = v_1195;
  } else {
    v_1196 = sub_172;
  };
  if (instanciador_l4) {
    v_1193 = false;
  } else {
    v_1193 = sub_171;
  };
  if (instanciador_c4_lamp) {
    v_1194 = false;
  } else {
    v_1194 = v_1193;
  };
  if (instanciador_c4) {
    sub_170 = v_1194;
  } else {
    sub_170 = v_1196;
  };
  if (instanciador_ck_13_1) {
    sub_184 = false;
  } else {
    sub_184 = sub_170;
  };
  if (instanciador_c3_lamp) {
    v_1199 = sub_184;
  } else {
    v_1199 = false;
  };
  if (instanciador_l3) {
    v_1200 = v_1199;
  } else {
    v_1200 = false;
  };
  if (instanciador_c3_lamp) {
    v_1197 = sub_170;
  } else {
    v_1197 = sub_184;
  };
  if (instanciador_l3) {
    v_1198 = sub_170;
  } else {
    v_1198 = v_1197;
  };
  if (instanciador_c3) {
    sub_169 = v_1198;
  } else {
    sub_169 = v_1200;
  };
  if (instanciador_ck_11_1) {
    sub_185 = false;
  } else {
    sub_185 = sub_169;
  };
  if (instanciador_c2_lamp) {
    v_1203 = sub_185;
  } else {
    v_1203 = false;
  };
  if (instanciador_l2) {
    v_1204 = v_1203;
  } else {
    v_1204 = false;
  };
  if (instanciador_c2_lamp) {
    v_1201 = sub_169;
  } else {
    v_1201 = sub_185;
  };
  if (instanciador_l2) {
    v_1202 = sub_169;
  } else {
    v_1202 = v_1201;
  };
  if (instanciador_c2) {
    sub_168 = v_1202;
  } else {
    sub_168 = v_1204;
  };
  if (instanciador_ck_9_1) {
    sub_186 = false;
  } else {
    sub_186 = sub_168;
  };
  if (instanciador_c1_lamp) {
    v_1207 = sub_186;
  } else {
    v_1207 = false;
  };
  if (instanciador_l1) {
    v_1208 = v_1207;
  } else {
    v_1208 = false;
  };
  if (instanciador_c1_lamp) {
    v_1205 = sub_168;
  } else {
    v_1205 = sub_186;
  };
  if (instanciador_l1) {
    v_1206 = sub_168;
  } else {
    v_1206 = v_1205;
  };
  if (instanciador_c1) {
    sub_167 = v_1206;
  } else {
    sub_167 = v_1208;
  };
  sub_166 = sub_167;
  sub_165 = sub_166;
  sub_164 = sub_165;
  sub_163 = sub_164;
  if (instanciador_ck_17_1) {
    sub_196 = false;
  } else {
    sub_196 = sub_174;
  };
  if (instanciador_lx) {
    v_1155 = sub_196;
  } else {
    v_1155 = false;
  };
  if (instanciador_c_lampExt) {
    v_1156 = v_1155;
  } else {
    v_1156 = false;
  };
  if (instanciador_lx) {
    v_1153 = sub_174;
  } else {
    v_1153 = sub_196;
  };
  if (instanciador_c_lampExt) {
    v_1154 = sub_183;
  } else {
    v_1154 = v_1153;
  };
  if (instanciador_cx) {
    sub_195 = v_1154;
  } else {
    sub_195 = v_1156;
  };
  if (instanciador_ck_15_1) {
    sub_197 = false;
  } else {
    sub_197 = sub_195;
  };
  if (instanciador_l4) {
    v_1159 = sub_197;
  } else {
    v_1159 = false;
  };
  if (instanciador_c4_lamp) {
    v_1160 = v_1159;
  } else {
    v_1160 = false;
  };
  if (instanciador_l4) {
    v_1157 = sub_195;
  } else {
    v_1157 = sub_197;
  };
  if (instanciador_c4_lamp) {
    v_1158 = sub_195;
  } else {
    v_1158 = v_1157;
  };
  if (instanciador_c4) {
    sub_194 = v_1158;
  } else {
    sub_194 = v_1160;
  };
  if (instanciador_ck_13_1) {
    sub_198 = false;
  } else {
    sub_198 = sub_194;
  };
  if (instanciador_c3_lamp) {
    v_1163 = sub_198;
  } else {
    v_1163 = false;
  };
  if (instanciador_l3) {
    v_1164 = v_1163;
  } else {
    v_1164 = false;
  };
  if (instanciador_c3_lamp) {
    v_1161 = sub_194;
  } else {
    v_1161 = sub_198;
  };
  if (instanciador_l3) {
    v_1162 = sub_194;
  } else {
    v_1162 = v_1161;
  };
  if (instanciador_c3) {
    sub_193 = v_1162;
  } else {
    sub_193 = v_1164;
  };
  if (instanciador_ck_11_1) {
    sub_199 = false;
  } else {
    sub_199 = sub_193;
  };
  if (instanciador_c2_lamp) {
    v_1167 = sub_199;
  } else {
    v_1167 = false;
  };
  if (instanciador_l2) {
    v_1168 = v_1167;
  } else {
    v_1168 = false;
  };
  if (instanciador_c2_lamp) {
    v_1165 = sub_193;
  } else {
    v_1165 = sub_199;
  };
  if (instanciador_l2) {
    v_1166 = sub_193;
  } else {
    v_1166 = v_1165;
  };
  if (instanciador_c2) {
    sub_192 = v_1166;
  } else {
    sub_192 = v_1168;
  };
  if (instanciador_ck_9_1) {
    sub_200 = false;
  } else {
    sub_200 = sub_192;
  };
  if (instanciador_c1_lamp) {
    v_1171 = sub_200;
  } else {
    v_1171 = false;
  };
  if (instanciador_l1) {
    v_1172 = v_1171;
  } else {
    v_1172 = false;
  };
  if (instanciador_c1_lamp) {
    v_1169 = sub_192;
  } else {
    v_1169 = sub_200;
  };
  if (instanciador_l1) {
    v_1170 = sub_192;
  } else {
    v_1170 = v_1169;
  };
  if (instanciador_c1) {
    sub_191 = v_1170;
  } else {
    sub_191 = v_1172;
  };
  sub_190 = sub_191;
  sub_189 = sub_190;
  sub_188 = sub_189;
  sub_187 = sub_188;
  if (instanciador_v_341) {
    sub_162 = sub_187;
  } else {
    sub_162 = sub_163;
  };
  sub_161 = sub_162;
  sub_218 = sub_85;
  if (instanciador_ck_29_1) {
    sub_219 = false;
  } else {
    sub_219 = sub_218;
  };
  if (instanciador_inpProj) {
    v_1115 = sub_219;
  } else {
    v_1115 = false;
  };
  if (instanciador_c_proj) {
    v_1116 = v_1115;
  } else {
    v_1116 = false;
  };
  if (instanciador_inpProj) {
    v_1113 = sub_218;
  } else {
    v_1113 = sub_219;
  };
  if (instanciador_c_proj) {
    v_1114 = sub_218;
  } else {
    v_1114 = v_1113;
  };
  if (instanciador_cp) {
    sub_217 = v_1114;
  } else {
    sub_217 = v_1116;
  };
  if (instanciador_ck_25_1) {
    sub_216 = sub_217;
  } else {
    sub_216 = false;
  };
  if (instanciador_inpSp) {
    v_1119 = sub_216;
  } else {
    v_1119 = sub_217;
  };
  if (instanciador_c_somP) {
    v_1120 = v_1119;
  } else {
    v_1120 = sub_217;
  };
  if (instanciador_inpSp) {
    v_1117 = false;
  } else {
    v_1117 = sub_216;
  };
  if (instanciador_c_somP) {
    v_1118 = false;
  } else {
    v_1118 = v_1117;
  };
  if (instanciador_csp) {
    sub_215 = v_1118;
  } else {
    sub_215 = v_1120;
  };
  if (instanciador_ck_21_1) {
    sub_220 = false;
  } else {
    sub_220 = sub_215;
  };
  if (instanciador_inpMl) {
    v_1123 = sub_220;
  } else {
    v_1123 = false;
  };
  if (instanciador_c_microL) {
    v_1124 = v_1123;
  } else {
    v_1124 = false;
  };
  if (instanciador_inpMl) {
    v_1121 = sub_215;
  } else {
    v_1121 = sub_220;
  };
  if (instanciador_c_microL) {
    v_1122 = sub_215;
  } else {
    v_1122 = v_1121;
  };
  if (instanciador_cml) {
    sub_214 = v_1122;
  } else {
    sub_214 = v_1124;
  };
  if (instanciador_ck_19_1) {
    sub_221 = false;
  } else {
    sub_221 = sub_214;
  };
  if (instanciador_lv) {
    v_1127 = sub_214;
  } else {
    v_1127 = sub_221;
  };
  if (instanciador_cv) {
    v_1128 = v_1127;
  } else {
    v_1128 = false;
  };
  if (instanciador_lv) {
    v_1125 = sub_221;
  } else {
    v_1125 = false;
  };
  if (instanciador_cv) {
    v_1126 = sub_214;
  } else {
    v_1126 = v_1125;
  };
  if (instanciador_c_vent) {
    sub_213 = v_1126;
  } else {
    sub_213 = v_1128;
  };
  if (instanciador_ck_17_1) {
    sub_222 = false;
  } else {
    sub_222 = sub_213;
  };
  if (instanciador_lx) {
    v_1131 = sub_222;
  } else {
    v_1131 = false;
  };
  if (instanciador_c_lampExt) {
    v_1132 = v_1131;
  } else {
    v_1132 = false;
  };
  if (instanciador_lx) {
    v_1129 = sub_213;
  } else {
    v_1129 = sub_222;
  };
  if (instanciador_c_lampExt) {
    v_1130 = sub_213;
  } else {
    v_1130 = v_1129;
  };
  if (instanciador_cx) {
    sub_212 = v_1130;
  } else {
    sub_212 = v_1132;
  };
  if (instanciador_ck_15_1) {
    sub_211 = sub_212;
  } else {
    sub_211 = false;
  };
  if (instanciador_l4) {
    v_1135 = sub_211;
  } else {
    v_1135 = sub_212;
  };
  if (instanciador_c4_lamp) {
    v_1136 = v_1135;
  } else {
    v_1136 = sub_212;
  };
  if (instanciador_l4) {
    v_1133 = false;
  } else {
    v_1133 = sub_211;
  };
  if (instanciador_c4_lamp) {
    v_1134 = false;
  } else {
    v_1134 = v_1133;
  };
  if (instanciador_c4) {
    sub_210 = v_1134;
  } else {
    sub_210 = v_1136;
  };
  if (instanciador_ck_13_1) {
    sub_223 = false;
  } else {
    sub_223 = sub_210;
  };
  if (instanciador_c3_lamp) {
    v_1139 = sub_223;
  } else {
    v_1139 = false;
  };
  if (instanciador_l3) {
    v_1140 = v_1139;
  } else {
    v_1140 = false;
  };
  if (instanciador_c3_lamp) {
    v_1137 = sub_210;
  } else {
    v_1137 = sub_223;
  };
  if (instanciador_l3) {
    v_1138 = sub_210;
  } else {
    v_1138 = v_1137;
  };
  if (instanciador_c3) {
    sub_209 = v_1138;
  } else {
    sub_209 = v_1140;
  };
  if (instanciador_ck_11_1) {
    sub_208 = sub_209;
  } else {
    sub_208 = false;
  };
  if (instanciador_c2_lamp) {
    v_1143 = sub_208;
  } else {
    v_1143 = sub_209;
  };
  if (instanciador_l2) {
    v_1144 = v_1143;
  } else {
    v_1144 = sub_209;
  };
  if (instanciador_c2_lamp) {
    v_1141 = false;
  } else {
    v_1141 = sub_208;
  };
  if (instanciador_l2) {
    v_1142 = false;
  } else {
    v_1142 = v_1141;
  };
  if (instanciador_c2) {
    sub_207 = v_1142;
  } else {
    sub_207 = v_1144;
  };
  if (instanciador_ck_9_1) {
    sub_206 = sub_207;
  } else {
    sub_206 = false;
  };
  if (instanciador_c1_lamp) {
    v_1147 = sub_206;
  } else {
    v_1147 = sub_207;
  };
  if (instanciador_l1) {
    v_1148 = v_1147;
  } else {
    v_1148 = sub_207;
  };
  if (instanciador_c1_lamp) {
    v_1145 = false;
  } else {
    v_1145 = sub_206;
  };
  if (instanciador_l1) {
    v_1146 = false;
  } else {
    v_1146 = v_1145;
  };
  if (instanciador_c1) {
    sub_205 = v_1146;
  } else {
    sub_205 = v_1148;
  };
  sub_204 = sub_205;
  sub_203 = sub_204;
  sub_257 = sub_39;
  sub_256 = sub_257;
  sub_255 = sub_256;
  sub_254 = sub_255;
  sub_253 = sub_254;
  sub_252 = sub_253;
  sub_251 = sub_252;
  sub_250 = sub_251;
  sub_249 = sub_250;
  sub_248 = sub_249;
  sub_247 = sub_248;
  sub_246 = sub_247;
  sub_245 = sub_246;
  sub_244 = sub_245;
  sub_243 = sub_244;
  sub_242 = sub_243;
  sub_241 = sub_242;
  sub_240 = sub_241;
  sub_239 = sub_240;
  sub_238 = sub_239;
  sub_237 = sub_238;
  sub_236 = sub_237;
  sub_235 = sub_236;
  sub_234 = sub_235;
  sub_233 = sub_234;
  sub_232 = sub_233;
  sub_231 = sub_232;
  sub_230 = sub_231;
  sub_229 = sub_230;
  sub_228 = sub_229;
  sub_227 = sub_228;
  sub_226 = sub_227;
  sub_225 = sub_226;
  if (instanciador_neutro_input) {
    v_1149 = sub_225;
  } else {
    v_1149 = sub_167;
  };
  if (instanciador_ck_23_1) {
    sub_278 = sub_34;
  } else {
    sub_278 = false;
  };
  if (instanciador_inpMp) {
    v_1074 = sub_278;
  } else {
    v_1074 = sub_34;
  };
  if (instanciador_c_microP) {
    v_1075 = v_1074;
  } else {
    v_1075 = sub_33;
  };
  if (instanciador_inpMp) {
    v_1072 = false;
  } else {
    v_1072 = sub_278;
  };
  if (instanciador_c_microP) {
    v_1073 = false;
  } else {
    v_1073 = v_1072;
  };
  if (instanciador_cmp) {
    sub_277 = v_1073;
  } else {
    sub_277 = v_1075;
  };
  if (instanciador_ck_31_1) {
    v_1076 = sub_277;
  } else {
    v_1076 = sub_149;
  };
  if (instanciador_inpGela) {
    sub_276 = v_1076;
  } else {
    sub_276 = sub_277;
  };
  if (instanciador_ck_29_1) {
    sub_275 = sub_276;
  } else {
    sub_275 = false;
  };
  if (instanciador_inpProj) {
    v_1079 = sub_275;
  } else {
    v_1079 = sub_276;
  };
  if (instanciador_c_proj) {
    v_1080 = v_1079;
  } else {
    v_1080 = sub_276;
  };
  if (instanciador_inpProj) {
    v_1077 = false;
  } else {
    v_1077 = sub_275;
  };
  if (instanciador_c_proj) {
    v_1078 = false;
  } else {
    v_1078 = v_1077;
  };
  if (instanciador_cp) {
    sub_274 = v_1078;
  } else {
    sub_274 = v_1080;
  };
  if (instanciador_ck_25_1) {
    sub_273 = sub_274;
  } else {
    sub_273 = false;
  };
  if (instanciador_inpSp) {
    v_1083 = sub_273;
  } else {
    v_1083 = sub_274;
  };
  if (instanciador_c_somP) {
    v_1084 = v_1083;
  } else {
    v_1084 = sub_274;
  };
  if (instanciador_inpSp) {
    v_1081 = false;
  } else {
    v_1081 = sub_273;
  };
  if (instanciador_c_somP) {
    v_1082 = false;
  } else {
    v_1082 = v_1081;
  };
  if (instanciador_csp) {
    sub_272 = v_1082;
  } else {
    sub_272 = v_1084;
  };
  if (instanciador_ck_21_1) {
    sub_271 = sub_272;
  } else {
    sub_271 = false;
  };
  if (instanciador_inpMl) {
    v_1087 = sub_271;
  } else {
    v_1087 = sub_272;
  };
  if (instanciador_c_microL) {
    v_1088 = v_1087;
  } else {
    v_1088 = sub_272;
  };
  if (instanciador_inpMl) {
    v_1085 = false;
  } else {
    v_1085 = sub_271;
  };
  if (instanciador_c_microL) {
    v_1086 = false;
  } else {
    v_1086 = v_1085;
  };
  if (instanciador_cml) {
    sub_270 = v_1086;
  } else {
    sub_270 = v_1088;
  };
  if (instanciador_ck_19_1) {
    sub_269 = sub_270;
  } else {
    sub_269 = false;
  };
  if (instanciador_lv) {
    v_1091 = false;
  } else {
    v_1091 = sub_269;
  };
  if (instanciador_cv) {
    v_1092 = v_1091;
  } else {
    v_1092 = sub_270;
  };
  if (instanciador_lv) {
    v_1089 = sub_269;
  } else {
    v_1089 = sub_270;
  };
  if (instanciador_cv) {
    v_1090 = false;
  } else {
    v_1090 = v_1089;
  };
  if (instanciador_c_vent) {
    sub_268 = v_1090;
  } else {
    sub_268 = v_1092;
  };
  if (instanciador_ck_17_1) {
    sub_267 = sub_268;
  } else {
    sub_267 = false;
  };
  if (instanciador_lx) {
    v_1095 = sub_267;
  } else {
    v_1095 = sub_268;
  };
  if (instanciador_c_lampExt) {
    v_1096 = v_1095;
  } else {
    v_1096 = sub_268;
  };
  if (instanciador_lx) {
    v_1093 = false;
  } else {
    v_1093 = sub_267;
  };
  if (instanciador_c_lampExt) {
    v_1094 = false;
  } else {
    v_1094 = v_1093;
  };
  if (instanciador_cx) {
    sub_266 = v_1094;
  } else {
    sub_266 = v_1096;
  };
  if (instanciador_ck_15_1) {
    sub_265 = sub_266;
  } else {
    sub_265 = false;
  };
  if (instanciador_l4) {
    v_1099 = sub_265;
  } else {
    v_1099 = sub_266;
  };
  if (instanciador_c4_lamp) {
    v_1100 = v_1099;
  } else {
    v_1100 = sub_266;
  };
  if (instanciador_l4) {
    v_1097 = false;
  } else {
    v_1097 = sub_265;
  };
  if (instanciador_c4_lamp) {
    v_1098 = false;
  } else {
    v_1098 = v_1097;
  };
  if (instanciador_c4) {
    sub_264 = v_1098;
  } else {
    sub_264 = v_1100;
  };
  if (instanciador_ck_13_1) {
    sub_263 = sub_264;
  } else {
    sub_263 = false;
  };
  if (instanciador_c3_lamp) {
    v_1103 = sub_263;
  } else {
    v_1103 = sub_264;
  };
  if (instanciador_l3) {
    v_1104 = v_1103;
  } else {
    v_1104 = sub_264;
  };
  if (instanciador_c3_lamp) {
    v_1101 = false;
  } else {
    v_1101 = sub_263;
  };
  if (instanciador_l3) {
    v_1102 = false;
  } else {
    v_1102 = v_1101;
  };
  if (instanciador_c3) {
    sub_262 = v_1102;
  } else {
    sub_262 = v_1104;
  };
  if (instanciador_ck_11_1) {
    sub_261 = sub_262;
  } else {
    sub_261 = false;
  };
  if (instanciador_c2_lamp) {
    v_1107 = sub_261;
  } else {
    v_1107 = sub_262;
  };
  if (instanciador_l2) {
    v_1108 = v_1107;
  } else {
    v_1108 = sub_262;
  };
  if (instanciador_c2_lamp) {
    v_1105 = false;
  } else {
    v_1105 = sub_261;
  };
  if (instanciador_l2) {
    v_1106 = false;
  } else {
    v_1106 = v_1105;
  };
  if (instanciador_c2) {
    sub_260 = v_1106;
  } else {
    sub_260 = v_1108;
  };
  if (instanciador_ck_9_1) {
    sub_259 = sub_260;
  } else {
    sub_259 = false;
  };
  if (instanciador_c1_lamp) {
    v_1111 = sub_259;
  } else {
    v_1111 = sub_260;
  };
  if (instanciador_l1) {
    v_1112 = v_1111;
  } else {
    v_1112 = sub_260;
  };
  if (instanciador_c1_lamp) {
    v_1109 = false;
  } else {
    v_1109 = sub_259;
  };
  if (instanciador_l1) {
    v_1110 = false;
  } else {
    v_1110 = v_1109;
  };
  if (instanciador_c1) {
    sub_258 = v_1110;
  } else {
    sub_258 = v_1112;
  };
  if (instanciador_neutro_input) {
    sub_224 = sub_225;
  } else {
    sub_224 = sub_258;
  };
  if (instanciador_seguranca_input) {
    v_1150 = sub_224;
  } else {
    v_1150 = v_1149;
  };
  if (instanciador_domingol_input) {
    v_1151 = sub_203;
  } else {
    v_1151 = v_1150;
  };
  if (instanciador_domingo_input) {
    sub_202 = sub_188;
  } else {
    sub_202 = v_1151;
  };
  if (instanciador_v_341) {
    v_1152 = sub_187;
  } else {
    v_1152 = sub_202;
  };
  if (instanciador_sexta_input) {
    sub_201 = sub_187;
  } else {
    sub_201 = v_1152;
  };
  if (instanciador_v_339) {
    v_1209 = sub_201;
  } else {
    v_1209 = sub_161;
  };
  if (instanciador_neutro_input) {
    sub_283 = sub_225;
  } else {
    sub_283 = sub_191;
  };
  if (instanciador_seguranca_input) {
    v_1071 = sub_224;
  } else {
    v_1071 = sub_283;
  };
  if (instanciador_domingol_input) {
    sub_282 = sub_203;
  } else {
    sub_282 = v_1071;
  };
  if (instanciador_domingo_input) {
    sub_281 = sub_188;
  } else {
    sub_281 = sub_282;
  };
  if (instanciador_v_341) {
    sub_280 = sub_187;
  } else {
    sub_280 = sub_281;
  };
  sub_279 = sub_280;
  if (instanciador_v_339) {
    v_1210 = sub_201;
  } else {
    v_1210 = sub_279;
  };
  if (instanciador_ebd_input) {
    sub_160 = v_1209;
  } else {
    sub_160 = v_1210;
  };
  if (instanciador_seguranca_input) {
    v_1067 = sub_258;
  } else {
    v_1067 = sub_225;
  };
  if (instanciador_domingol_input) {
    v_1068 = sub_203;
    v_1066 = sub_203;
  } else {
    v_1068 = v_1067;
    v_1066 = sub_189;
  };
  if (instanciador_domingo_input) {
    v_1069 = v_1066;
  } else {
    v_1069 = v_1068;
  };
  if (instanciador_domingol_input) {
    v_1065 = sub_203;
    v_1064 = sub_203;
  } else {
    v_1065 = sub_224;
    v_1064 = sub_283;
  };
  if (instanciador_domingo_input) {
    sub_285 = v_1064;
  } else {
    sub_285 = v_1065;
  };
  if (instanciador_v_341) {
    v_1070 = v_1069;
  } else {
    v_1070 = sub_285;
  };
  if (instanciador_sexta_input) {
    sub_284 = sub_187;
  } else {
    sub_284 = v_1070;
  };
  if (instanciador_neutro_input) {
    v = sub_225;
  } else {
    v = sub_205;
  };
  if (instanciador_seguranca_input) {
    sub_287 = sub_224;
  } else {
    sub_287 = v;
  };
  if (instanciador_domingo_input) {
    sub_286 = sub_188;
  } else {
    sub_286 = sub_287;
  };
  if (instanciador_v_341) {
    v_1394 = sub_282;
  } else {
    v_1394 = sub_286;
  };
  if (instanciador_sexta_input) {
    v_1395 = sub_187;
  } else {
    v_1395 = v_1394;
  };
  if (instanciador_v_339) {
    v_1396 = v_1395;
  } else {
    v_1396 = sub_284;
  };
  if (instanciador_ebd_input) {
    v_1397 = sub_163;
  } else {
    v_1397 = v_1396;
  };
  if (instanciador_v_340) {
    v_1398 = v_1397;
  } else {
    v_1398 = sub_160;
  };
  if (p_instanciador_c_gela) {
    sub_0 = v_1398;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c_gela = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_cp_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_c_proj, int instanciador_cmp,
  int instanciador_c_microP, int instanciador_cml, int instanciador_c_microL,
  int instanciador_csl, int instanciador_c_somL, int instanciador_csp,
  int instanciador_c_somP, int instanciador_c_vent, int instanciador_cv,
  int instanciador_cx, int instanciador_c4, int instanciador_c3,
  int instanciador_c2, int instanciador_c1, int instanciador_c_lampExt,
  int instanciador_c4_lamp, int instanciador_c3_lamp,
  int instanciador_c2_lamp, int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_cp_out* _out) {
  
  int v_1715;
  int v_1714;
  int v_1713;
  int v_1712;
  int v_1711;
  int v_1710;
  int v_1709;
  int v_1708;
  int v_1707;
  int v_1706;
  int v_1705;
  int v_1704;
  int v_1703;
  int v_1702;
  int v_1701;
  int v_1700;
  int v_1699;
  int v_1698;
  int v_1697;
  int v_1696;
  int v_1695;
  int v_1694;
  int v_1693;
  int v_1692;
  int v_1691;
  int v_1690;
  int v_1689;
  int v_1688;
  int v_1687;
  int v_1686;
  int v_1685;
  int v_1684;
  int v_1683;
  int v_1682;
  int v_1681;
  int v_1680;
  int v_1679;
  int v_1678;
  int v_1677;
  int v_1676;
  int v_1675;
  int v_1674;
  int v_1673;
  int v_1672;
  int v_1671;
  int v_1670;
  int v_1669;
  int v_1668;
  int v_1667;
  int v_1666;
  int v_1665;
  int v_1664;
  int v_1663;
  int v_1662;
  int v_1661;
  int v_1660;
  int v_1659;
  int v_1658;
  int v_1657;
  int v_1656;
  int v_1655;
  int v_1654;
  int v_1653;
  int v_1652;
  int v_1651;
  int v_1650;
  int v_1649;
  int v_1648;
  int v_1647;
  int v_1646;
  int v_1645;
  int v_1644;
  int v_1643;
  int v_1642;
  int v_1641;
  int v_1640;
  int v_1639;
  int v_1638;
  int v_1637;
  int v_1636;
  int v_1635;
  int v_1634;
  int v_1633;
  int v_1632;
  int v_1631;
  int v_1630;
  int v_1629;
  int v_1628;
  int v_1627;
  int v_1626;
  int v_1625;
  int v_1624;
  int v_1623;
  int v_1622;
  int v_1621;
  int v_1620;
  int v_1619;
  int v_1618;
  int v_1617;
  int v_1616;
  int v_1615;
  int v_1614;
  int v_1613;
  int v_1612;
  int v_1611;
  int v_1610;
  int v_1609;
  int v_1608;
  int v_1607;
  int v_1606;
  int v_1605;
  int v_1604;
  int v_1603;
  int v_1602;
  int v_1601;
  int v_1600;
  int v_1599;
  int v_1598;
  int v_1597;
  int v_1596;
  int v_1595;
  int v_1594;
  int v_1593;
  int v_1592;
  int v_1591;
  int v_1590;
  int v_1589;
  int v_1588;
  int v_1587;
  int v_1586;
  int v_1585;
  int v_1584;
  int v_1583;
  int v_1582;
  int v_1581;
  int v_1580;
  int v_1579;
  int v_1578;
  int v_1577;
  int v_1576;
  int v_1575;
  int v_1574;
  int v_1573;
  int v_1572;
  int v_1571;
  int v_1570;
  int v_1569;
  int v_1568;
  int v_1567;
  int v_1566;
  int v_1565;
  int v_1564;
  int v_1563;
  int v_1562;
  int v_1561;
  int v_1560;
  int v_1559;
  int v_1558;
  int v_1557;
  int v_1556;
  int v_1555;
  int v_1554;
  int v_1553;
  int v_1552;
  int v_1551;
  int v_1550;
  int v_1549;
  int v_1548;
  int v_1547;
  int v_1546;
  int v_1545;
  int v_1544;
  int v_1543;
  int v_1542;
  int v_1541;
  int v_1540;
  int v_1539;
  int v_1538;
  int v_1537;
  int v_1536;
  int v_1535;
  int v_1534;
  int v_1533;
  int v_1532;
  int v_1531;
  int v_1530;
  int v_1529;
  int v_1528;
  int v_1527;
  int v_1526;
  int v_1525;
  int v_1524;
  int v_1523;
  int v_1522;
  int v_1521;
  int v_1520;
  int v_1519;
  int v_1518;
  int v_1517;
  int v_1516;
  int v_1515;
  int v_1514;
  int v_1513;
  int v_1512;
  int v_1511;
  int v_1510;
  int v_1509;
  int v_1508;
  int v_1507;
  int v_1506;
  int v_1505;
  int v_1504;
  int v_1503;
  int v_1502;
  int v_1501;
  int v_1500;
  int v_1499;
  int v_1498;
  int v_1497;
  int v_1496;
  int v_1495;
  int v_1494;
  int v_1493;
  int v_1492;
  int v_1491;
  int v_1490;
  int v_1489;
  int v_1488;
  int v_1487;
  int v_1486;
  int v_1485;
  int v_1484;
  int v_1483;
  int v_1482;
  int v_1481;
  int v_1480;
  int v_1479;
  int v_1478;
  int v_1477;
  int v_1476;
  int v_1475;
  int v_1474;
  int v_1473;
  int v_1472;
  int v_1471;
  int v_1470;
  int v_1469;
  int v_1468;
  int v_1467;
  int v_1466;
  int v_1465;
  int v_1464;
  int v_1463;
  int v_1462;
  int v_1461;
  int v_1460;
  int v_1459;
  int v_1458;
  int v_1457;
  int v_1456;
  int v_1455;
  int v_1454;
  int v_1453;
  int v_1452;
  int v_1451;
  int v_1450;
  int v_1449;
  int v_1448;
  int v_1447;
  int v_1446;
  int v_1445;
  int v_1444;
  int v_1443;
  int v_1442;
  int v_1441;
  int v_1440;
  int v_1439;
  int v_1438;
  int v_1437;
  int v_1436;
  int v_1435;
  int v_1434;
  int v_1433;
  int v_1432;
  int v_1431;
  int v_1430;
  int v_1429;
  int v_1428;
  int v_1427;
  int v_1426;
  int v_1425;
  int v_1424;
  int v_1423;
  int v_1422;
  int v_1421;
  int v_1420;
  int v_1419;
  int v_1418;
  int v_1417;
  int v_1416;
  int v_1415;
  int v_1414;
  int v_1413;
  int v_1412;
  int v_1411;
  int v_1410;
  int v_1409;
  int v_1408;
  int v_1407;
  int v_1406;
  int v_1405;
  int v_1404;
  int v_1403;
  int v_1402;
  int v_1401;
  int v_1400;
  int v_1399;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  int sub_246;
  int sub_247;
  int sub_248;
  int sub_249;
  int sub_250;
  int sub_251;
  int sub_252;
  int sub_253;
  int sub_254;
  int sub_255;
  int sub_256;
  int sub_257;
  int sub_258;
  int sub_259;
  int sub_260;
  int sub_261;
  int sub_262;
  int sub_263;
  int sub_264;
  int sub_265;
  int sub_266;
  int sub_267;
  int sub_268;
  int sub_269;
  int sub_270;
  int sub_271;
  int sub_272;
  int sub_273;
  int sub_274;
  int sub_275;
  int sub_276;
  int sub_277;
  int sub_278;
  int sub_279;
  int sub_280;
  sub_27 = (instanciador_inpSl&&false);
  if (instanciador_c_somL) {
    v_1665 = false;
  } else {
    v_1665 = sub_27;
  };
  if (instanciador_ck_27_1) {
    v_1666 = v_1665;
  } else {
    v_1666 = false;
  };
  sub_29 = false;
  if (instanciador_c_somL) {
    sub_28 = sub_27;
  } else {
    sub_28 = sub_29;
  };
  sub_30 = sub_29;
  if (instanciador_ck_27_1) {
    v_1667 = sub_30;
  } else {
    v_1667 = sub_28;
  };
  if (instanciador_csl) {
    sub_26 = v_1666;
  } else {
    sub_26 = v_1667;
  };
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (instanciador_ck_23_1) {
    sub_31 = false;
  } else {
    sub_31 = sub_25;
  };
  if (instanciador_inpMp) {
    v_1670 = sub_31;
  } else {
    v_1670 = false;
  };
  if (instanciador_c_microP) {
    v_1671 = v_1670;
  } else {
    v_1671 = false;
  };
  if (instanciador_inpMp) {
    v_1668 = sub_25;
  } else {
    v_1668 = sub_31;
  };
  if (instanciador_c_microP) {
    v_1669 = sub_24;
  } else {
    v_1669 = v_1668;
  };
  if (instanciador_cmp) {
    sub_23 = v_1669;
  } else {
    sub_23 = v_1671;
  };
  sub_22 = sub_23;
  if (instanciador_ck_29_1) {
    v_1672 = sub_22;
  } else {
    v_1672 = false;
  };
  if (instanciador_inpProj) {
    sub_21 = v_1672;
  } else {
    sub_21 = sub_22;
  };
  if (instanciador_c_proj) {
    sub_20 = sub_21;
  } else {
    sub_20 = sub_22;
  };
  if (instanciador_ck_25_1) {
    sub_32 = false;
  } else {
    sub_32 = sub_20;
  };
  if (instanciador_inpSp) {
    v_1675 = sub_32;
  } else {
    v_1675 = false;
  };
  if (instanciador_c_somP) {
    v_1676 = v_1675;
  } else {
    v_1676 = false;
  };
  if (instanciador_inpSp) {
    v_1673 = sub_20;
  } else {
    v_1673 = sub_32;
  };
  if (instanciador_c_somP) {
    v_1674 = sub_20;
  } else {
    v_1674 = v_1673;
  };
  if (instanciador_csp) {
    sub_19 = v_1674;
  } else {
    sub_19 = v_1676;
  };
  if (instanciador_ck_21_1) {
    sub_18 = sub_19;
  } else {
    sub_18 = false;
  };
  if (instanciador_inpMl) {
    v_1679 = sub_18;
  } else {
    v_1679 = sub_19;
  };
  if (instanciador_c_microL) {
    v_1680 = v_1679;
  } else {
    v_1680 = sub_19;
  };
  if (instanciador_inpMl) {
    v_1677 = false;
  } else {
    v_1677 = sub_18;
  };
  if (instanciador_c_microL) {
    v_1678 = false;
  } else {
    v_1678 = v_1677;
  };
  if (instanciador_cml) {
    sub_17 = v_1678;
  } else {
    sub_17 = v_1680;
  };
  if (instanciador_ck_19_1) {
    sub_33 = false;
  } else {
    sub_33 = sub_17;
  };
  if (instanciador_lv) {
    v_1683 = sub_17;
  } else {
    v_1683 = sub_33;
  };
  if (instanciador_cv) {
    v_1684 = v_1683;
  } else {
    v_1684 = false;
  };
  if (instanciador_lv) {
    v_1681 = sub_33;
  } else {
    v_1681 = false;
  };
  if (instanciador_cv) {
    v_1682 = sub_17;
  } else {
    v_1682 = v_1681;
  };
  if (instanciador_c_vent) {
    sub_16 = v_1682;
  } else {
    sub_16 = v_1684;
  };
  if (instanciador_ck_17_1) {
    sub_15 = sub_16;
  } else {
    sub_15 = false;
  };
  if (instanciador_lx) {
    v_1687 = sub_15;
    v_1685 = false;
  } else {
    v_1687 = sub_16;
    v_1685 = sub_15;
  };
  if (instanciador_c_lampExt) {
    v_1686 = false;
  } else {
    v_1686 = v_1685;
  };
  sub_34 = sub_16;
  if (instanciador_c_lampExt) {
    v_1688 = v_1687;
  } else {
    v_1688 = sub_34;
  };
  if (instanciador_cx) {
    sub_14 = v_1686;
  } else {
    sub_14 = v_1688;
  };
  if (instanciador_ck_15_1) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (instanciador_l4) {
    v_1691 = sub_13;
  } else {
    v_1691 = sub_14;
  };
  if (instanciador_c4_lamp) {
    v_1692 = v_1691;
  } else {
    v_1692 = sub_14;
  };
  if (instanciador_l4) {
    v_1689 = false;
  } else {
    v_1689 = sub_13;
  };
  if (instanciador_c4_lamp) {
    v_1690 = false;
  } else {
    v_1690 = v_1689;
  };
  if (instanciador_c4) {
    sub_12 = v_1690;
  } else {
    sub_12 = v_1692;
  };
  if (instanciador_ck_13_1) {
    sub_35 = false;
  } else {
    sub_35 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_1695 = sub_35;
  } else {
    v_1695 = false;
  };
  if (instanciador_l3) {
    v_1696 = v_1695;
  } else {
    v_1696 = false;
  };
  if (instanciador_c3_lamp) {
    v_1693 = sub_12;
  } else {
    v_1693 = sub_35;
  };
  if (instanciador_l3) {
    v_1694 = sub_12;
  } else {
    v_1694 = v_1693;
  };
  if (instanciador_c3) {
    sub_11 = v_1694;
  } else {
    sub_11 = v_1696;
  };
  if (instanciador_ck_11_1) {
    sub_36 = false;
  } else {
    sub_36 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_1699 = sub_36;
  } else {
    v_1699 = false;
  };
  if (instanciador_l2) {
    v_1700 = v_1699;
  } else {
    v_1700 = false;
  };
  if (instanciador_c2_lamp) {
    v_1697 = sub_11;
  } else {
    v_1697 = sub_36;
  };
  if (instanciador_l2) {
    v_1698 = sub_11;
  } else {
    v_1698 = v_1697;
  };
  if (instanciador_c2) {
    sub_10 = v_1698;
  } else {
    sub_10 = v_1700;
  };
  if (instanciador_ck_9_1) {
    sub_37 = false;
  } else {
    sub_37 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_1703 = sub_37;
  } else {
    v_1703 = false;
  };
  if (instanciador_l1) {
    v_1704 = v_1703;
  } else {
    v_1704 = false;
  };
  if (instanciador_c1_lamp) {
    v_1701 = sub_10;
  } else {
    v_1701 = sub_37;
  };
  if (instanciador_l1) {
    v_1702 = sub_10;
  } else {
    v_1702 = v_1701;
  };
  if (instanciador_c1) {
    sub_9 = v_1702;
  } else {
    sub_9 = v_1704;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (instanciador_ck_17_1) {
    sub_47 = false;
  } else {
    sub_47 = sub_16;
  };
  if (instanciador_lx) {
    v_1647 = sub_47;
  } else {
    v_1647 = false;
  };
  if (instanciador_c_lampExt) {
    v_1648 = v_1647;
  } else {
    v_1648 = false;
  };
  if (instanciador_lx) {
    v_1645 = sub_16;
  } else {
    v_1645 = sub_47;
  };
  if (instanciador_c_lampExt) {
    v_1646 = sub_34;
  } else {
    v_1646 = v_1645;
  };
  if (instanciador_cx) {
    sub_46 = v_1646;
  } else {
    sub_46 = v_1648;
  };
  if (instanciador_ck_15_1) {
    sub_48 = false;
  } else {
    sub_48 = sub_46;
  };
  if (instanciador_l4) {
    v_1651 = sub_48;
  } else {
    v_1651 = false;
  };
  if (instanciador_c4_lamp) {
    v_1652 = v_1651;
  } else {
    v_1652 = false;
  };
  if (instanciador_l4) {
    v_1649 = sub_46;
  } else {
    v_1649 = sub_48;
  };
  if (instanciador_c4_lamp) {
    v_1650 = sub_46;
  } else {
    v_1650 = v_1649;
  };
  if (instanciador_c4) {
    sub_45 = v_1650;
  } else {
    sub_45 = v_1652;
  };
  if (instanciador_ck_13_1) {
    sub_49 = false;
  } else {
    sub_49 = sub_45;
  };
  if (instanciador_c3_lamp) {
    v_1655 = sub_49;
  } else {
    v_1655 = false;
  };
  if (instanciador_l3) {
    v_1656 = v_1655;
  } else {
    v_1656 = false;
  };
  if (instanciador_c3_lamp) {
    v_1653 = sub_45;
  } else {
    v_1653 = sub_49;
  };
  if (instanciador_l3) {
    v_1654 = sub_45;
  } else {
    v_1654 = v_1653;
  };
  if (instanciador_c3) {
    sub_44 = v_1654;
  } else {
    sub_44 = v_1656;
  };
  if (instanciador_ck_11_1) {
    sub_50 = false;
  } else {
    sub_50 = sub_44;
  };
  if (instanciador_c2_lamp) {
    v_1659 = sub_50;
  } else {
    v_1659 = false;
  };
  if (instanciador_l2) {
    v_1660 = v_1659;
  } else {
    v_1660 = false;
  };
  if (instanciador_c2_lamp) {
    v_1657 = sub_44;
  } else {
    v_1657 = sub_50;
  };
  if (instanciador_l2) {
    v_1658 = sub_44;
  } else {
    v_1658 = v_1657;
  };
  if (instanciador_c2) {
    sub_43 = v_1658;
  } else {
    sub_43 = v_1660;
  };
  if (instanciador_ck_9_1) {
    sub_51 = false;
  } else {
    sub_51 = sub_43;
  };
  if (instanciador_c1_lamp) {
    v_1663 = sub_51;
  } else {
    v_1663 = false;
  };
  if (instanciador_l1) {
    v_1664 = v_1663;
  } else {
    v_1664 = false;
  };
  if (instanciador_c1_lamp) {
    v_1661 = sub_43;
  } else {
    v_1661 = sub_51;
  };
  if (instanciador_l1) {
    v_1662 = sub_43;
  } else {
    v_1662 = v_1661;
  };
  if (instanciador_c1) {
    sub_42 = v_1662;
  } else {
    sub_42 = v_1664;
  };
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (instanciador_v_341) {
    sub_4 = sub_38;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  v_1599 = !(instanciador_inpSl);
  sub_74 = (v_1599&&false);
  if (instanciador_c_somL) {
    v_1600 = sub_29;
  } else {
    v_1600 = sub_74;
  };
  if (instanciador_ck_27_1) {
    v_1601 = v_1600;
  } else {
    v_1601 = sub_30;
  };
  if (instanciador_c_somL) {
    sub_75 = sub_74;
  } else {
    sub_75 = false;
  };
  if (instanciador_ck_27_1) {
    v_1602 = false;
  } else {
    v_1602 = sub_75;
  };
  if (instanciador_csl) {
    sub_73 = v_1601;
  } else {
    sub_73 = v_1602;
  };
  sub_72 = sub_73;
  if (instanciador_ck_23_1) {
    sub_71 = sub_72;
  } else {
    sub_71 = false;
  };
  if (instanciador_inpMp) {
    v_1605 = sub_71;
  } else {
    v_1605 = sub_72;
  };
  if (instanciador_c_microP) {
    v_1606 = v_1605;
  } else {
    v_1606 = sub_72;
  };
  if (instanciador_inpMp) {
    v_1603 = false;
  } else {
    v_1603 = sub_71;
  };
  if (instanciador_c_microP) {
    v_1604 = false;
  } else {
    v_1604 = v_1603;
  };
  if (instanciador_cmp) {
    sub_70 = v_1604;
  } else {
    sub_70 = v_1606;
  };
  sub_69 = sub_70;
  sub_82 = true;
  sub_81 = sub_82;
  sub_83 = (instanciador_inpSl||false);
  if (instanciador_c_somL) {
    v_1592 = sub_82;
  } else {
    v_1592 = sub_83;
  };
  if (instanciador_ck_27_1) {
    v_1593 = v_1592;
  } else {
    v_1593 = sub_81;
  };
  if (instanciador_c_somL) {
    sub_84 = sub_83;
  } else {
    sub_84 = false;
  };
  if (instanciador_ck_27_1) {
    v_1594 = false;
  } else {
    v_1594 = sub_84;
  };
  if (instanciador_csl) {
    sub_80 = v_1593;
  } else {
    sub_80 = v_1594;
  };
  sub_79 = sub_80;
  if (instanciador_ck_23_1) {
    sub_78 = sub_79;
  } else {
    sub_78 = false;
  };
  if (instanciador_inpMp) {
    v_1597 = sub_78;
  } else {
    v_1597 = sub_79;
  };
  if (instanciador_c_microP) {
    v_1598 = v_1597;
  } else {
    v_1598 = sub_79;
  };
  if (instanciador_inpMp) {
    v_1595 = false;
  } else {
    v_1595 = sub_78;
  };
  if (instanciador_c_microP) {
    v_1596 = false;
  } else {
    v_1596 = v_1595;
  };
  if (instanciador_cmp) {
    sub_77 = v_1596;
  } else {
    sub_77 = v_1598;
  };
  sub_76 = sub_77;
  if (instanciador_ck_29_1) {
    v_1607 = sub_76;
  } else {
    v_1607 = sub_69;
  };
  if (instanciador_inpProj) {
    v_1608 = v_1607;
  } else {
    v_1608 = sub_76;
  };
  if (instanciador_ck_29_1) {
    v_1591 = false;
  } else {
    v_1591 = sub_76;
  };
  if (instanciador_inpProj) {
    sub_85 = sub_76;
  } else {
    sub_85 = v_1591;
  };
  if (instanciador_c_proj) {
    sub_68 = v_1608;
  } else {
    sub_68 = sub_85;
  };
  if (instanciador_ck_25_1) {
    sub_67 = sub_68;
  } else {
    sub_67 = false;
  };
  if (instanciador_inpSp) {
    v_1611 = sub_67;
  } else {
    v_1611 = sub_68;
  };
  if (instanciador_c_somP) {
    v_1612 = v_1611;
  } else {
    v_1612 = sub_68;
  };
  if (instanciador_inpSp) {
    v_1609 = false;
  } else {
    v_1609 = sub_67;
  };
  if (instanciador_c_somP) {
    v_1610 = false;
  } else {
    v_1610 = v_1609;
  };
  if (instanciador_csp) {
    sub_66 = v_1610;
  } else {
    sub_66 = v_1612;
  };
  if (instanciador_ck_21_1) {
    sub_86 = false;
  } else {
    sub_86 = sub_66;
  };
  if (instanciador_inpMl) {
    v_1615 = sub_86;
  } else {
    v_1615 = false;
  };
  if (instanciador_c_microL) {
    v_1616 = v_1615;
  } else {
    v_1616 = false;
  };
  if (instanciador_inpMl) {
    v_1613 = sub_66;
  } else {
    v_1613 = sub_86;
  };
  if (instanciador_c_microL) {
    v_1614 = sub_66;
  } else {
    v_1614 = v_1613;
  };
  if (instanciador_cml) {
    sub_65 = v_1614;
  } else {
    sub_65 = v_1616;
  };
  if (instanciador_ck_19_1) {
    sub_87 = false;
  } else {
    sub_87 = sub_65;
  };
  if (instanciador_lv) {
    v_1619 = sub_65;
  } else {
    v_1619 = sub_87;
  };
  if (instanciador_cv) {
    v_1620 = v_1619;
  } else {
    v_1620 = false;
  };
  if (instanciador_lv) {
    v_1617 = sub_87;
  } else {
    v_1617 = false;
  };
  if (instanciador_cv) {
    v_1618 = sub_65;
  } else {
    v_1618 = v_1617;
  };
  if (instanciador_c_vent) {
    sub_64 = v_1618;
  } else {
    sub_64 = v_1620;
  };
  if (instanciador_ck_17_1) {
    sub_88 = false;
  } else {
    sub_88 = sub_64;
  };
  if (instanciador_lx) {
    v_1623 = sub_88;
  } else {
    v_1623 = false;
  };
  if (instanciador_c_lampExt) {
    v_1624 = v_1623;
  } else {
    v_1624 = false;
  };
  if (instanciador_lx) {
    v_1621 = sub_64;
  } else {
    v_1621 = sub_88;
  };
  if (instanciador_c_lampExt) {
    v_1622 = sub_64;
  } else {
    v_1622 = v_1621;
  };
  if (instanciador_cx) {
    sub_63 = v_1622;
  } else {
    sub_63 = v_1624;
  };
  if (instanciador_ck_15_1) {
    sub_62 = sub_63;
  } else {
    sub_62 = false;
  };
  if (instanciador_l4) {
    v_1627 = sub_62;
  } else {
    v_1627 = sub_63;
  };
  if (instanciador_c4_lamp) {
    v_1628 = v_1627;
  } else {
    v_1628 = sub_63;
  };
  if (instanciador_l4) {
    v_1625 = false;
  } else {
    v_1625 = sub_62;
  };
  if (instanciador_c4_lamp) {
    v_1626 = false;
  } else {
    v_1626 = v_1625;
  };
  if (instanciador_c4) {
    sub_61 = v_1626;
  } else {
    sub_61 = v_1628;
  };
  if (instanciador_ck_13_1) {
    sub_89 = false;
  } else {
    sub_89 = sub_61;
  };
  if (instanciador_c3_lamp) {
    v_1631 = sub_89;
  } else {
    v_1631 = false;
  };
  if (instanciador_l3) {
    v_1632 = v_1631;
  } else {
    v_1632 = false;
  };
  if (instanciador_c3_lamp) {
    v_1629 = sub_61;
  } else {
    v_1629 = sub_89;
  };
  if (instanciador_l3) {
    v_1630 = sub_61;
  } else {
    v_1630 = v_1629;
  };
  if (instanciador_c3) {
    sub_60 = v_1630;
  } else {
    sub_60 = v_1632;
  };
  if (instanciador_ck_11_1) {
    sub_59 = sub_60;
  } else {
    sub_59 = false;
  };
  if (instanciador_c2_lamp) {
    v_1635 = sub_59;
  } else {
    v_1635 = sub_60;
  };
  if (instanciador_l2) {
    v_1636 = v_1635;
  } else {
    v_1636 = sub_60;
  };
  if (instanciador_c2_lamp) {
    v_1633 = false;
  } else {
    v_1633 = sub_59;
  };
  if (instanciador_l2) {
    v_1634 = false;
  } else {
    v_1634 = v_1633;
  };
  if (instanciador_c2) {
    sub_58 = v_1634;
  } else {
    sub_58 = v_1636;
  };
  if (instanciador_ck_9_1) {
    sub_57 = sub_58;
  } else {
    sub_57 = false;
  };
  if (instanciador_c1_lamp) {
    v_1639 = sub_57;
  } else {
    v_1639 = sub_58;
  };
  if (instanciador_l1) {
    v_1640 = v_1639;
  } else {
    v_1640 = sub_58;
  };
  if (instanciador_c1_lamp) {
    v_1637 = false;
  } else {
    v_1637 = sub_57;
  };
  if (instanciador_l1) {
    v_1638 = false;
  } else {
    v_1638 = v_1637;
  };
  if (instanciador_c1) {
    sub_56 = v_1638;
  } else {
    sub_56 = v_1640;
  };
  sub_55 = sub_56;
  sub_54 = sub_55;
  sub_122 = sub_30;
  sub_121 = sub_122;
  sub_120 = sub_121;
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_117 = sub_118;
  sub_116 = sub_117;
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  if (instanciador_neutro_input) {
    v_1641 = sub_91;
  } else {
    v_1641 = sub_9;
  };
  if (instanciador_ck_23_1) {
    sub_143 = sub_25;
  } else {
    sub_143 = false;
  };
  if (instanciador_inpMp) {
    v_1556 = sub_143;
  } else {
    v_1556 = sub_25;
  };
  if (instanciador_c_microP) {
    v_1557 = v_1556;
  } else {
    v_1557 = sub_24;
  };
  if (instanciador_inpMp) {
    v_1554 = false;
  } else {
    v_1554 = sub_143;
  };
  if (instanciador_c_microP) {
    v_1555 = false;
  } else {
    v_1555 = v_1554;
  };
  if (instanciador_cmp) {
    sub_142 = v_1555;
  } else {
    sub_142 = v_1557;
  };
  sub_141 = sub_142;
  if (instanciador_ck_29_1) {
    v_1558 = sub_141;
  } else {
    v_1558 = false;
  };
  if (instanciador_inpProj) {
    sub_140 = v_1558;
  } else {
    sub_140 = sub_141;
  };
  if (instanciador_c_proj) {
    sub_139 = sub_140;
  } else {
    sub_139 = sub_141;
  };
  if (instanciador_ck_25_1) {
    sub_138 = sub_139;
  } else {
    sub_138 = false;
  };
  if (instanciador_inpSp) {
    v_1561 = sub_138;
  } else {
    v_1561 = sub_139;
  };
  if (instanciador_c_somP) {
    v_1562 = v_1561;
  } else {
    v_1562 = sub_139;
  };
  if (instanciador_inpSp) {
    v_1559 = false;
  } else {
    v_1559 = sub_138;
  };
  if (instanciador_c_somP) {
    v_1560 = false;
  } else {
    v_1560 = v_1559;
  };
  if (instanciador_csp) {
    sub_137 = v_1560;
  } else {
    sub_137 = v_1562;
  };
  if (instanciador_ck_21_1) {
    sub_136 = sub_137;
  } else {
    sub_136 = false;
  };
  if (instanciador_inpMl) {
    v_1565 = sub_136;
  } else {
    v_1565 = sub_137;
  };
  if (instanciador_c_microL) {
    v_1566 = v_1565;
  } else {
    v_1566 = sub_137;
  };
  if (instanciador_inpMl) {
    v_1563 = false;
  } else {
    v_1563 = sub_136;
  };
  if (instanciador_c_microL) {
    v_1564 = false;
  } else {
    v_1564 = v_1563;
  };
  if (instanciador_cml) {
    sub_135 = v_1564;
  } else {
    sub_135 = v_1566;
  };
  if (instanciador_ck_19_1) {
    sub_134 = sub_135;
  } else {
    sub_134 = false;
  };
  if (instanciador_lv) {
    v_1569 = false;
  } else {
    v_1569 = sub_134;
  };
  if (instanciador_cv) {
    v_1570 = v_1569;
  } else {
    v_1570 = sub_135;
  };
  if (instanciador_lv) {
    v_1567 = sub_134;
  } else {
    v_1567 = sub_135;
  };
  if (instanciador_cv) {
    v_1568 = false;
  } else {
    v_1568 = v_1567;
  };
  if (instanciador_c_vent) {
    sub_133 = v_1568;
  } else {
    sub_133 = v_1570;
  };
  if (instanciador_ck_17_1) {
    sub_132 = sub_133;
  } else {
    sub_132 = false;
  };
  if (instanciador_lx) {
    v_1573 = sub_132;
  } else {
    v_1573 = sub_133;
  };
  if (instanciador_c_lampExt) {
    v_1574 = v_1573;
  } else {
    v_1574 = sub_133;
  };
  if (instanciador_lx) {
    v_1571 = false;
  } else {
    v_1571 = sub_132;
  };
  if (instanciador_c_lampExt) {
    v_1572 = false;
  } else {
    v_1572 = v_1571;
  };
  if (instanciador_cx) {
    sub_131 = v_1572;
  } else {
    sub_131 = v_1574;
  };
  if (instanciador_ck_15_1) {
    sub_130 = sub_131;
  } else {
    sub_130 = false;
  };
  if (instanciador_l4) {
    v_1577 = sub_130;
  } else {
    v_1577 = sub_131;
  };
  if (instanciador_c4_lamp) {
    v_1578 = v_1577;
  } else {
    v_1578 = sub_131;
  };
  if (instanciador_l4) {
    v_1575 = false;
  } else {
    v_1575 = sub_130;
  };
  if (instanciador_c4_lamp) {
    v_1576 = false;
  } else {
    v_1576 = v_1575;
  };
  if (instanciador_c4) {
    sub_129 = v_1576;
  } else {
    sub_129 = v_1578;
  };
  if (instanciador_ck_13_1) {
    sub_128 = sub_129;
  } else {
    sub_128 = false;
  };
  if (instanciador_c3_lamp) {
    v_1581 = sub_128;
  } else {
    v_1581 = sub_129;
  };
  if (instanciador_l3) {
    v_1582 = v_1581;
  } else {
    v_1582 = sub_129;
  };
  if (instanciador_c3_lamp) {
    v_1579 = false;
  } else {
    v_1579 = sub_128;
  };
  if (instanciador_l3) {
    v_1580 = false;
  } else {
    v_1580 = v_1579;
  };
  if (instanciador_c3) {
    sub_127 = v_1580;
  } else {
    sub_127 = v_1582;
  };
  if (instanciador_ck_11_1) {
    sub_126 = sub_127;
  } else {
    sub_126 = false;
  };
  if (instanciador_c2_lamp) {
    v_1585 = sub_126;
  } else {
    v_1585 = sub_127;
  };
  if (instanciador_l2) {
    v_1586 = v_1585;
  } else {
    v_1586 = sub_127;
  };
  if (instanciador_c2_lamp) {
    v_1583 = false;
  } else {
    v_1583 = sub_126;
  };
  if (instanciador_l2) {
    v_1584 = false;
  } else {
    v_1584 = v_1583;
  };
  if (instanciador_c2) {
    sub_125 = v_1584;
  } else {
    sub_125 = v_1586;
  };
  if (instanciador_ck_9_1) {
    sub_124 = sub_125;
  } else {
    sub_124 = false;
  };
  if (instanciador_c1_lamp) {
    v_1589 = sub_124;
  } else {
    v_1589 = sub_125;
  };
  if (instanciador_l1) {
    v_1590 = v_1589;
  } else {
    v_1590 = sub_125;
  };
  if (instanciador_c1_lamp) {
    v_1587 = false;
  } else {
    v_1587 = sub_124;
  };
  if (instanciador_l1) {
    v_1588 = false;
  } else {
    v_1588 = v_1587;
  };
  if (instanciador_c1) {
    sub_123 = v_1588;
  } else {
    sub_123 = v_1590;
  };
  if (instanciador_neutro_input) {
    sub_90 = sub_91;
  } else {
    sub_90 = sub_123;
  };
  if (instanciador_seguranca_input) {
    v_1642 = sub_90;
  } else {
    v_1642 = v_1641;
  };
  if (instanciador_domingol_input) {
    v_1643 = sub_54;
  } else {
    v_1643 = v_1642;
  };
  if (instanciador_domingo_input) {
    sub_53 = sub_39;
  } else {
    sub_53 = v_1643;
  };
  if (instanciador_v_341) {
    v_1644 = sub_38;
  } else {
    v_1644 = sub_53;
  };
  if (instanciador_sexta_input) {
    sub_52 = sub_38;
  } else {
    sub_52 = v_1644;
  };
  if (instanciador_v_339) {
    v_1705 = sub_52;
  } else {
    v_1705 = sub_3;
  };
  if (instanciador_neutro_input) {
    sub_148 = sub_91;
  } else {
    sub_148 = sub_42;
  };
  if (instanciador_seguranca_input) {
    v_1553 = sub_90;
  } else {
    v_1553 = sub_148;
  };
  if (instanciador_domingol_input) {
    sub_147 = sub_54;
  } else {
    sub_147 = v_1553;
  };
  if (instanciador_domingo_input) {
    sub_146 = sub_39;
  } else {
    sub_146 = sub_147;
  };
  if (instanciador_v_341) {
    sub_145 = sub_38;
  } else {
    sub_145 = sub_146;
  };
  sub_144 = sub_145;
  if (instanciador_v_339) {
    v_1706 = sub_52;
  } else {
    v_1706 = sub_144;
  };
  if (instanciador_ebd_input) {
    sub_2 = v_1705;
  } else {
    sub_2 = v_1706;
  };
  if (instanciador_seguranca_input) {
    v_1549 = sub_123;
  } else {
    v_1549 = sub_91;
  };
  if (instanciador_domingol_input) {
    v_1550 = sub_54;
    v_1548 = sub_54;
  } else {
    v_1550 = v_1549;
    v_1548 = sub_40;
  };
  if (instanciador_domingo_input) {
    v_1551 = v_1548;
  } else {
    v_1551 = v_1550;
  };
  if (instanciador_domingol_input) {
    v_1547 = sub_54;
    v_1546 = sub_54;
  } else {
    v_1547 = sub_90;
    v_1546 = sub_148;
  };
  if (instanciador_domingo_input) {
    sub_150 = v_1546;
  } else {
    sub_150 = v_1547;
  };
  if (instanciador_v_341) {
    v_1552 = v_1551;
  } else {
    v_1552 = sub_150;
  };
  if (instanciador_sexta_input) {
    sub_149 = sub_38;
  } else {
    sub_149 = v_1552;
  };
  if (instanciador_neutro_input) {
    v_1545 = sub_91;
  } else {
    v_1545 = sub_56;
  };
  if (instanciador_seguranca_input) {
    sub_152 = sub_90;
  } else {
    sub_152 = v_1545;
  };
  if (instanciador_domingo_input) {
    sub_151 = sub_39;
  } else {
    sub_151 = sub_152;
  };
  if (instanciador_v_341) {
    v_1707 = sub_147;
  } else {
    v_1707 = sub_151;
  };
  if (instanciador_sexta_input) {
    v_1708 = sub_38;
  } else {
    v_1708 = v_1707;
  };
  if (instanciador_v_339) {
    v_1709 = v_1708;
  } else {
    v_1709 = sub_149;
  };
  if (instanciador_ebd_input) {
    v_1710 = sub_5;
  } else {
    v_1710 = v_1709;
  };
  if (instanciador_v_340) {
    sub_1 = v_1710;
  } else {
    sub_1 = sub_2;
  };
  v_1501 = !(instanciador_inpSl);
  sub_176 = (v_1501||false);
  if (instanciador_c_somL) {
    v_1502 = false;
  } else {
    v_1502 = sub_176;
  };
  if (instanciador_ck_27_1) {
    v_1503 = v_1502;
  } else {
    v_1503 = false;
  };
  if (instanciador_c_somL) {
    sub_177 = sub_176;
  } else {
    sub_177 = sub_82;
  };
  if (instanciador_ck_27_1) {
    v_1504 = sub_81;
  } else {
    v_1504 = sub_177;
  };
  if (instanciador_csl) {
    sub_175 = v_1503;
  } else {
    sub_175 = v_1504;
  };
  sub_174 = sub_175;
  sub_173 = sub_174;
  if (instanciador_ck_23_1) {
    sub_178 = false;
  } else {
    sub_178 = sub_174;
  };
  if (instanciador_inpMp) {
    v_1507 = sub_178;
  } else {
    v_1507 = false;
  };
  if (instanciador_c_microP) {
    v_1508 = v_1507;
  } else {
    v_1508 = false;
  };
  if (instanciador_inpMp) {
    v_1505 = sub_174;
  } else {
    v_1505 = sub_178;
  };
  if (instanciador_c_microP) {
    v_1506 = sub_173;
  } else {
    v_1506 = v_1505;
  };
  if (instanciador_cmp) {
    sub_172 = v_1506;
  } else {
    sub_172 = v_1508;
  };
  if (instanciador_ck_29_1) {
    v_1509 = sub_172;
  } else {
    v_1509 = sub_22;
  };
  if (instanciador_inpProj) {
    v_1510 = sub_22;
  } else {
    v_1510 = v_1509;
  };
  if (instanciador_c_proj) {
    sub_171 = sub_21;
  } else {
    sub_171 = v_1510;
  };
  if (instanciador_ck_25_1) {
    sub_179 = false;
  } else {
    sub_179 = sub_171;
  };
  if (instanciador_inpSp) {
    v_1513 = sub_179;
  } else {
    v_1513 = false;
  };
  if (instanciador_c_somP) {
    v_1514 = v_1513;
  } else {
    v_1514 = false;
  };
  if (instanciador_inpSp) {
    v_1511 = sub_171;
  } else {
    v_1511 = sub_179;
  };
  if (instanciador_c_somP) {
    v_1512 = sub_171;
  } else {
    v_1512 = v_1511;
  };
  if (instanciador_csp) {
    sub_170 = v_1512;
  } else {
    sub_170 = v_1514;
  };
  if (instanciador_ck_21_1) {
    sub_169 = sub_170;
  } else {
    sub_169 = false;
  };
  if (instanciador_inpMl) {
    v_1517 = sub_169;
  } else {
    v_1517 = sub_170;
  };
  if (instanciador_c_microL) {
    v_1518 = v_1517;
  } else {
    v_1518 = sub_170;
  };
  if (instanciador_inpMl) {
    v_1515 = false;
  } else {
    v_1515 = sub_169;
  };
  if (instanciador_c_microL) {
    v_1516 = false;
  } else {
    v_1516 = v_1515;
  };
  if (instanciador_cml) {
    sub_168 = v_1516;
  } else {
    sub_168 = v_1518;
  };
  if (instanciador_ck_19_1) {
    sub_180 = false;
  } else {
    sub_180 = sub_168;
  };
  if (instanciador_lv) {
    v_1521 = sub_168;
  } else {
    v_1521 = sub_180;
  };
  if (instanciador_cv) {
    v_1522 = v_1521;
  } else {
    v_1522 = false;
  };
  if (instanciador_lv) {
    v_1519 = sub_180;
  } else {
    v_1519 = false;
  };
  if (instanciador_cv) {
    v_1520 = sub_168;
  } else {
    v_1520 = v_1519;
  };
  if (instanciador_c_vent) {
    sub_167 = v_1520;
  } else {
    sub_167 = v_1522;
  };
  if (instanciador_ck_17_1) {
    sub_166 = sub_167;
  } else {
    sub_166 = false;
  };
  if (instanciador_lx) {
    v_1525 = sub_166;
    v_1523 = false;
  } else {
    v_1525 = sub_167;
    v_1523 = sub_166;
  };
  if (instanciador_c_lampExt) {
    v_1524 = false;
  } else {
    v_1524 = v_1523;
  };
  sub_181 = sub_167;
  if (instanciador_c_lampExt) {
    v_1526 = v_1525;
  } else {
    v_1526 = sub_181;
  };
  if (instanciador_cx) {
    sub_165 = v_1524;
  } else {
    sub_165 = v_1526;
  };
  if (instanciador_ck_15_1) {
    sub_164 = sub_165;
  } else {
    sub_164 = false;
  };
  if (instanciador_l4) {
    v_1529 = sub_164;
  } else {
    v_1529 = sub_165;
  };
  if (instanciador_c4_lamp) {
    v_1530 = v_1529;
  } else {
    v_1530 = sub_165;
  };
  if (instanciador_l4) {
    v_1527 = false;
  } else {
    v_1527 = sub_164;
  };
  if (instanciador_c4_lamp) {
    v_1528 = false;
  } else {
    v_1528 = v_1527;
  };
  if (instanciador_c4) {
    sub_163 = v_1528;
  } else {
    sub_163 = v_1530;
  };
  if (instanciador_ck_13_1) {
    sub_182 = false;
  } else {
    sub_182 = sub_163;
  };
  if (instanciador_c3_lamp) {
    v_1533 = sub_182;
  } else {
    v_1533 = false;
  };
  if (instanciador_l3) {
    v_1534 = v_1533;
  } else {
    v_1534 = false;
  };
  if (instanciador_c3_lamp) {
    v_1531 = sub_163;
  } else {
    v_1531 = sub_182;
  };
  if (instanciador_l3) {
    v_1532 = sub_163;
  } else {
    v_1532 = v_1531;
  };
  if (instanciador_c3) {
    sub_162 = v_1532;
  } else {
    sub_162 = v_1534;
  };
  if (instanciador_ck_11_1) {
    sub_183 = false;
  } else {
    sub_183 = sub_162;
  };
  if (instanciador_c2_lamp) {
    v_1537 = sub_183;
  } else {
    v_1537 = false;
  };
  if (instanciador_l2) {
    v_1538 = v_1537;
  } else {
    v_1538 = false;
  };
  if (instanciador_c2_lamp) {
    v_1535 = sub_162;
  } else {
    v_1535 = sub_183;
  };
  if (instanciador_l2) {
    v_1536 = sub_162;
  } else {
    v_1536 = v_1535;
  };
  if (instanciador_c2) {
    sub_161 = v_1536;
  } else {
    sub_161 = v_1538;
  };
  if (instanciador_ck_9_1) {
    sub_184 = false;
  } else {
    sub_184 = sub_161;
  };
  if (instanciador_c1_lamp) {
    v_1541 = sub_184;
  } else {
    v_1541 = false;
  };
  if (instanciador_l1) {
    v_1542 = v_1541;
  } else {
    v_1542 = false;
  };
  if (instanciador_c1_lamp) {
    v_1539 = sub_161;
  } else {
    v_1539 = sub_184;
  };
  if (instanciador_l1) {
    v_1540 = sub_161;
  } else {
    v_1540 = v_1539;
  };
  if (instanciador_c1) {
    sub_160 = v_1540;
  } else {
    sub_160 = v_1542;
  };
  sub_159 = sub_160;
  sub_158 = sub_159;
  sub_157 = sub_158;
  sub_156 = sub_157;
  if (instanciador_ck_17_1) {
    sub_194 = false;
  } else {
    sub_194 = sub_167;
  };
  if (instanciador_lx) {
    v_1483 = sub_194;
  } else {
    v_1483 = false;
  };
  if (instanciador_c_lampExt) {
    v_1484 = v_1483;
  } else {
    v_1484 = false;
  };
  if (instanciador_lx) {
    v_1481 = sub_167;
  } else {
    v_1481 = sub_194;
  };
  if (instanciador_c_lampExt) {
    v_1482 = sub_181;
  } else {
    v_1482 = v_1481;
  };
  if (instanciador_cx) {
    sub_193 = v_1482;
  } else {
    sub_193 = v_1484;
  };
  if (instanciador_ck_15_1) {
    sub_195 = false;
  } else {
    sub_195 = sub_193;
  };
  if (instanciador_l4) {
    v_1487 = sub_195;
  } else {
    v_1487 = false;
  };
  if (instanciador_c4_lamp) {
    v_1488 = v_1487;
  } else {
    v_1488 = false;
  };
  if (instanciador_l4) {
    v_1485 = sub_193;
  } else {
    v_1485 = sub_195;
  };
  if (instanciador_c4_lamp) {
    v_1486 = sub_193;
  } else {
    v_1486 = v_1485;
  };
  if (instanciador_c4) {
    sub_192 = v_1486;
  } else {
    sub_192 = v_1488;
  };
  if (instanciador_ck_13_1) {
    sub_196 = false;
  } else {
    sub_196 = sub_192;
  };
  if (instanciador_c3_lamp) {
    v_1491 = sub_196;
  } else {
    v_1491 = false;
  };
  if (instanciador_l3) {
    v_1492 = v_1491;
  } else {
    v_1492 = false;
  };
  if (instanciador_c3_lamp) {
    v_1489 = sub_192;
  } else {
    v_1489 = sub_196;
  };
  if (instanciador_l3) {
    v_1490 = sub_192;
  } else {
    v_1490 = v_1489;
  };
  if (instanciador_c3) {
    sub_191 = v_1490;
  } else {
    sub_191 = v_1492;
  };
  if (instanciador_ck_11_1) {
    sub_197 = false;
  } else {
    sub_197 = sub_191;
  };
  if (instanciador_c2_lamp) {
    v_1495 = sub_197;
  } else {
    v_1495 = false;
  };
  if (instanciador_l2) {
    v_1496 = v_1495;
  } else {
    v_1496 = false;
  };
  if (instanciador_c2_lamp) {
    v_1493 = sub_191;
  } else {
    v_1493 = sub_197;
  };
  if (instanciador_l2) {
    v_1494 = sub_191;
  } else {
    v_1494 = v_1493;
  };
  if (instanciador_c2) {
    sub_190 = v_1494;
  } else {
    sub_190 = v_1496;
  };
  if (instanciador_ck_9_1) {
    sub_198 = false;
  } else {
    sub_198 = sub_190;
  };
  if (instanciador_c1_lamp) {
    v_1499 = sub_198;
  } else {
    v_1499 = false;
  };
  if (instanciador_l1) {
    v_1500 = v_1499;
  } else {
    v_1500 = false;
  };
  if (instanciador_c1_lamp) {
    v_1497 = sub_190;
  } else {
    v_1497 = sub_198;
  };
  if (instanciador_l1) {
    v_1498 = sub_190;
  } else {
    v_1498 = v_1497;
  };
  if (instanciador_c1) {
    sub_189 = v_1498;
  } else {
    sub_189 = v_1500;
  };
  sub_188 = sub_189;
  sub_187 = sub_188;
  sub_186 = sub_187;
  sub_185 = sub_186;
  if (instanciador_v_341) {
    sub_155 = sub_185;
  } else {
    sub_155 = sub_156;
  };
  sub_154 = sub_155;
  if (instanciador_c_proj) {
    sub_215 = sub_76;
  } else {
    sub_215 = sub_85;
  };
  if (instanciador_ck_25_1) {
    sub_214 = sub_215;
  } else {
    sub_214 = false;
  };
  if (instanciador_inpSp) {
    v_1447 = sub_214;
  } else {
    v_1447 = sub_215;
  };
  if (instanciador_c_somP) {
    v_1448 = v_1447;
  } else {
    v_1448 = sub_215;
  };
  if (instanciador_inpSp) {
    v_1445 = false;
  } else {
    v_1445 = sub_214;
  };
  if (instanciador_c_somP) {
    v_1446 = false;
  } else {
    v_1446 = v_1445;
  };
  if (instanciador_csp) {
    sub_213 = v_1446;
  } else {
    sub_213 = v_1448;
  };
  if (instanciador_ck_21_1) {
    sub_216 = false;
  } else {
    sub_216 = sub_213;
  };
  if (instanciador_inpMl) {
    v_1451 = sub_216;
  } else {
    v_1451 = false;
  };
  if (instanciador_c_microL) {
    v_1452 = v_1451;
  } else {
    v_1452 = false;
  };
  if (instanciador_inpMl) {
    v_1449 = sub_213;
  } else {
    v_1449 = sub_216;
  };
  if (instanciador_c_microL) {
    v_1450 = sub_213;
  } else {
    v_1450 = v_1449;
  };
  if (instanciador_cml) {
    sub_212 = v_1450;
  } else {
    sub_212 = v_1452;
  };
  if (instanciador_ck_19_1) {
    sub_217 = false;
  } else {
    sub_217 = sub_212;
  };
  if (instanciador_lv) {
    v_1455 = sub_212;
  } else {
    v_1455 = sub_217;
  };
  if (instanciador_cv) {
    v_1456 = v_1455;
  } else {
    v_1456 = false;
  };
  if (instanciador_lv) {
    v_1453 = sub_217;
  } else {
    v_1453 = false;
  };
  if (instanciador_cv) {
    v_1454 = sub_212;
  } else {
    v_1454 = v_1453;
  };
  if (instanciador_c_vent) {
    sub_211 = v_1454;
  } else {
    sub_211 = v_1456;
  };
  if (instanciador_ck_17_1) {
    sub_218 = false;
  } else {
    sub_218 = sub_211;
  };
  if (instanciador_lx) {
    v_1459 = sub_218;
  } else {
    v_1459 = false;
  };
  if (instanciador_c_lampExt) {
    v_1460 = v_1459;
  } else {
    v_1460 = false;
  };
  if (instanciador_lx) {
    v_1457 = sub_211;
  } else {
    v_1457 = sub_218;
  };
  if (instanciador_c_lampExt) {
    v_1458 = sub_211;
  } else {
    v_1458 = v_1457;
  };
  if (instanciador_cx) {
    sub_210 = v_1458;
  } else {
    sub_210 = v_1460;
  };
  if (instanciador_ck_15_1) {
    sub_209 = sub_210;
  } else {
    sub_209 = false;
  };
  if (instanciador_l4) {
    v_1463 = sub_209;
  } else {
    v_1463 = sub_210;
  };
  if (instanciador_c4_lamp) {
    v_1464 = v_1463;
  } else {
    v_1464 = sub_210;
  };
  if (instanciador_l4) {
    v_1461 = false;
  } else {
    v_1461 = sub_209;
  };
  if (instanciador_c4_lamp) {
    v_1462 = false;
  } else {
    v_1462 = v_1461;
  };
  if (instanciador_c4) {
    sub_208 = v_1462;
  } else {
    sub_208 = v_1464;
  };
  if (instanciador_ck_13_1) {
    sub_219 = false;
  } else {
    sub_219 = sub_208;
  };
  if (instanciador_c3_lamp) {
    v_1467 = sub_219;
  } else {
    v_1467 = false;
  };
  if (instanciador_l3) {
    v_1468 = v_1467;
  } else {
    v_1468 = false;
  };
  if (instanciador_c3_lamp) {
    v_1465 = sub_208;
  } else {
    v_1465 = sub_219;
  };
  if (instanciador_l3) {
    v_1466 = sub_208;
  } else {
    v_1466 = v_1465;
  };
  if (instanciador_c3) {
    sub_207 = v_1466;
  } else {
    sub_207 = v_1468;
  };
  if (instanciador_ck_11_1) {
    sub_206 = sub_207;
  } else {
    sub_206 = false;
  };
  if (instanciador_c2_lamp) {
    v_1471 = sub_206;
  } else {
    v_1471 = sub_207;
  };
  if (instanciador_l2) {
    v_1472 = v_1471;
  } else {
    v_1472 = sub_207;
  };
  if (instanciador_c2_lamp) {
    v_1469 = false;
  } else {
    v_1469 = sub_206;
  };
  if (instanciador_l2) {
    v_1470 = false;
  } else {
    v_1470 = v_1469;
  };
  if (instanciador_c2) {
    sub_205 = v_1470;
  } else {
    sub_205 = v_1472;
  };
  if (instanciador_ck_9_1) {
    sub_204 = sub_205;
  } else {
    sub_204 = false;
  };
  if (instanciador_c1_lamp) {
    v_1475 = sub_204;
  } else {
    v_1475 = sub_205;
  };
  if (instanciador_l1) {
    v_1476 = v_1475;
  } else {
    v_1476 = sub_205;
  };
  if (instanciador_c1_lamp) {
    v_1473 = false;
  } else {
    v_1473 = sub_204;
  };
  if (instanciador_l1) {
    v_1474 = false;
  } else {
    v_1474 = v_1473;
  };
  if (instanciador_c1) {
    sub_203 = v_1474;
  } else {
    sub_203 = v_1476;
  };
  sub_202 = sub_203;
  sub_201 = sub_202;
  sub_252 = sub_81;
  sub_251 = sub_252;
  sub_250 = sub_251;
  sub_249 = sub_250;
  sub_248 = sub_249;
  sub_247 = sub_248;
  sub_246 = sub_247;
  sub_245 = sub_246;
  sub_244 = sub_245;
  sub_243 = sub_244;
  sub_242 = sub_243;
  sub_241 = sub_242;
  sub_240 = sub_241;
  sub_239 = sub_240;
  sub_238 = sub_239;
  sub_237 = sub_238;
  sub_236 = sub_237;
  sub_235 = sub_236;
  sub_234 = sub_235;
  sub_233 = sub_234;
  sub_232 = sub_233;
  sub_231 = sub_232;
  sub_230 = sub_231;
  sub_229 = sub_230;
  sub_228 = sub_229;
  sub_227 = sub_228;
  sub_226 = sub_227;
  sub_225 = sub_226;
  sub_224 = sub_225;
  sub_223 = sub_224;
  sub_222 = sub_223;
  sub_221 = sub_222;
  if (instanciador_neutro_input) {
    v_1477 = sub_221;
  } else {
    v_1477 = sub_160;
  };
  if (instanciador_ck_23_1) {
    sub_271 = sub_174;
  } else {
    sub_271 = false;
  };
  if (instanciador_inpMp) {
    v_1409 = sub_271;
  } else {
    v_1409 = sub_174;
  };
  if (instanciador_c_microP) {
    v_1410 = v_1409;
  } else {
    v_1410 = sub_173;
  };
  if (instanciador_inpMp) {
    v_1407 = false;
  } else {
    v_1407 = sub_271;
  };
  if (instanciador_c_microP) {
    v_1408 = false;
  } else {
    v_1408 = v_1407;
  };
  if (instanciador_cmp) {
    sub_270 = v_1408;
  } else {
    sub_270 = v_1410;
  };
  if (instanciador_ck_29_1) {
    v_1411 = sub_270;
  } else {
    v_1411 = sub_141;
  };
  if (instanciador_inpProj) {
    v_1412 = sub_141;
  } else {
    v_1412 = v_1411;
  };
  if (instanciador_c_proj) {
    sub_269 = sub_140;
  } else {
    sub_269 = v_1412;
  };
  if (instanciador_ck_25_1) {
    sub_268 = sub_269;
  } else {
    sub_268 = false;
  };
  if (instanciador_inpSp) {
    v_1415 = sub_268;
  } else {
    v_1415 = sub_269;
  };
  if (instanciador_c_somP) {
    v_1416 = v_1415;
  } else {
    v_1416 = sub_269;
  };
  if (instanciador_inpSp) {
    v_1413 = false;
  } else {
    v_1413 = sub_268;
  };
  if (instanciador_c_somP) {
    v_1414 = false;
  } else {
    v_1414 = v_1413;
  };
  if (instanciador_csp) {
    sub_267 = v_1414;
  } else {
    sub_267 = v_1416;
  };
  if (instanciador_ck_21_1) {
    sub_266 = sub_267;
  } else {
    sub_266 = false;
  };
  if (instanciador_inpMl) {
    v_1419 = sub_266;
  } else {
    v_1419 = sub_267;
  };
  if (instanciador_c_microL) {
    v_1420 = v_1419;
  } else {
    v_1420 = sub_267;
  };
  if (instanciador_inpMl) {
    v_1417 = false;
  } else {
    v_1417 = sub_266;
  };
  if (instanciador_c_microL) {
    v_1418 = false;
  } else {
    v_1418 = v_1417;
  };
  if (instanciador_cml) {
    sub_265 = v_1418;
  } else {
    sub_265 = v_1420;
  };
  if (instanciador_ck_19_1) {
    sub_264 = sub_265;
  } else {
    sub_264 = false;
  };
  if (instanciador_lv) {
    v_1423 = false;
  } else {
    v_1423 = sub_264;
  };
  if (instanciador_cv) {
    v_1424 = v_1423;
  } else {
    v_1424 = sub_265;
  };
  if (instanciador_lv) {
    v_1421 = sub_264;
  } else {
    v_1421 = sub_265;
  };
  if (instanciador_cv) {
    v_1422 = false;
  } else {
    v_1422 = v_1421;
  };
  if (instanciador_c_vent) {
    sub_263 = v_1422;
  } else {
    sub_263 = v_1424;
  };
  if (instanciador_ck_17_1) {
    sub_262 = sub_263;
  } else {
    sub_262 = false;
  };
  if (instanciador_lx) {
    v_1427 = sub_262;
  } else {
    v_1427 = sub_263;
  };
  if (instanciador_c_lampExt) {
    v_1428 = v_1427;
  } else {
    v_1428 = sub_263;
  };
  if (instanciador_lx) {
    v_1425 = false;
  } else {
    v_1425 = sub_262;
  };
  if (instanciador_c_lampExt) {
    v_1426 = false;
  } else {
    v_1426 = v_1425;
  };
  if (instanciador_cx) {
    sub_261 = v_1426;
  } else {
    sub_261 = v_1428;
  };
  if (instanciador_ck_15_1) {
    sub_260 = sub_261;
  } else {
    sub_260 = false;
  };
  if (instanciador_l4) {
    v_1431 = sub_260;
  } else {
    v_1431 = sub_261;
  };
  if (instanciador_c4_lamp) {
    v_1432 = v_1431;
  } else {
    v_1432 = sub_261;
  };
  if (instanciador_l4) {
    v_1429 = false;
  } else {
    v_1429 = sub_260;
  };
  if (instanciador_c4_lamp) {
    v_1430 = false;
  } else {
    v_1430 = v_1429;
  };
  if (instanciador_c4) {
    sub_259 = v_1430;
  } else {
    sub_259 = v_1432;
  };
  if (instanciador_ck_13_1) {
    sub_258 = sub_259;
  } else {
    sub_258 = false;
  };
  if (instanciador_c3_lamp) {
    v_1435 = sub_258;
  } else {
    v_1435 = sub_259;
  };
  if (instanciador_l3) {
    v_1436 = v_1435;
  } else {
    v_1436 = sub_259;
  };
  if (instanciador_c3_lamp) {
    v_1433 = false;
  } else {
    v_1433 = sub_258;
  };
  if (instanciador_l3) {
    v_1434 = false;
  } else {
    v_1434 = v_1433;
  };
  if (instanciador_c3) {
    sub_257 = v_1434;
  } else {
    sub_257 = v_1436;
  };
  if (instanciador_ck_11_1) {
    sub_256 = sub_257;
  } else {
    sub_256 = false;
  };
  if (instanciador_c2_lamp) {
    v_1439 = sub_256;
  } else {
    v_1439 = sub_257;
  };
  if (instanciador_l2) {
    v_1440 = v_1439;
  } else {
    v_1440 = sub_257;
  };
  if (instanciador_c2_lamp) {
    v_1437 = false;
  } else {
    v_1437 = sub_256;
  };
  if (instanciador_l2) {
    v_1438 = false;
  } else {
    v_1438 = v_1437;
  };
  if (instanciador_c2) {
    sub_255 = v_1438;
  } else {
    sub_255 = v_1440;
  };
  if (instanciador_ck_9_1) {
    sub_254 = sub_255;
  } else {
    sub_254 = false;
  };
  if (instanciador_c1_lamp) {
    v_1443 = sub_254;
  } else {
    v_1443 = sub_255;
  };
  if (instanciador_l1) {
    v_1444 = v_1443;
  } else {
    v_1444 = sub_255;
  };
  if (instanciador_c1_lamp) {
    v_1441 = false;
  } else {
    v_1441 = sub_254;
  };
  if (instanciador_l1) {
    v_1442 = false;
  } else {
    v_1442 = v_1441;
  };
  if (instanciador_c1) {
    sub_253 = v_1442;
  } else {
    sub_253 = v_1444;
  };
  if (instanciador_neutro_input) {
    sub_220 = sub_221;
  } else {
    sub_220 = sub_253;
  };
  if (instanciador_seguranca_input) {
    v_1478 = sub_220;
  } else {
    v_1478 = v_1477;
  };
  if (instanciador_domingol_input) {
    v_1479 = sub_201;
  } else {
    v_1479 = v_1478;
  };
  if (instanciador_domingo_input) {
    sub_200 = sub_186;
  } else {
    sub_200 = v_1479;
  };
  if (instanciador_v_341) {
    v_1480 = sub_185;
  } else {
    v_1480 = sub_200;
  };
  if (instanciador_sexta_input) {
    sub_199 = sub_185;
  } else {
    sub_199 = v_1480;
  };
  if (instanciador_v_339) {
    v_1543 = sub_199;
  } else {
    v_1543 = sub_154;
  };
  if (instanciador_neutro_input) {
    sub_276 = sub_221;
  } else {
    sub_276 = sub_189;
  };
  if (instanciador_seguranca_input) {
    v_1406 = sub_220;
  } else {
    v_1406 = sub_276;
  };
  if (instanciador_domingol_input) {
    sub_275 = sub_201;
  } else {
    sub_275 = v_1406;
  };
  if (instanciador_domingo_input) {
    sub_274 = sub_186;
  } else {
    sub_274 = sub_275;
  };
  if (instanciador_v_341) {
    sub_273 = sub_185;
  } else {
    sub_273 = sub_274;
  };
  sub_272 = sub_273;
  if (instanciador_v_339) {
    v_1544 = sub_199;
  } else {
    v_1544 = sub_272;
  };
  if (instanciador_ebd_input) {
    sub_153 = v_1543;
  } else {
    sub_153 = v_1544;
  };
  if (instanciador_seguranca_input) {
    v_1402 = sub_253;
  } else {
    v_1402 = sub_221;
  };
  if (instanciador_domingol_input) {
    v_1403 = sub_201;
    v_1401 = sub_201;
  } else {
    v_1403 = v_1402;
    v_1401 = sub_187;
  };
  if (instanciador_domingo_input) {
    v_1404 = v_1401;
  } else {
    v_1404 = v_1403;
  };
  if (instanciador_domingol_input) {
    v_1400 = sub_201;
    v_1399 = sub_201;
  } else {
    v_1400 = sub_220;
    v_1399 = sub_276;
  };
  if (instanciador_domingo_input) {
    sub_278 = v_1399;
  } else {
    sub_278 = v_1400;
  };
  if (instanciador_v_341) {
    v_1405 = v_1404;
  } else {
    v_1405 = sub_278;
  };
  if (instanciador_sexta_input) {
    sub_277 = sub_185;
  } else {
    sub_277 = v_1405;
  };
  if (instanciador_neutro_input) {
    v = sub_221;
  } else {
    v = sub_203;
  };
  if (instanciador_seguranca_input) {
    sub_280 = sub_220;
  } else {
    sub_280 = v;
  };
  if (instanciador_domingo_input) {
    sub_279 = sub_186;
  } else {
    sub_279 = sub_280;
  };
  if (instanciador_v_341) {
    v_1711 = sub_275;
  } else {
    v_1711 = sub_279;
  };
  if (instanciador_sexta_input) {
    v_1712 = sub_185;
  } else {
    v_1712 = v_1711;
  };
  if (instanciador_v_339) {
    v_1713 = v_1712;
  } else {
    v_1713 = sub_277;
  };
  if (instanciador_ebd_input) {
    v_1714 = sub_156;
  } else {
    v_1714 = v_1713;
  };
  if (instanciador_v_340) {
    v_1715 = v_1714;
  } else {
    v_1715 = sub_153;
  };
  if (p_instanciador_cp) {
    sub_0 = v_1715;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_cp = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c_proj_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_cmp,
  int instanciador_c_microP, int instanciador_cml, int instanciador_c_microL,
  int instanciador_csl, int instanciador_c_somL, int instanciador_csp,
  int instanciador_c_somP, int instanciador_c_vent, int instanciador_cv,
  int instanciador_cx, int instanciador_c4, int instanciador_c3,
  int instanciador_c2, int instanciador_c1, int instanciador_c_lampExt,
  int instanciador_c4_lamp, int instanciador_c3_lamp,
  int instanciador_c2_lamp, int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c_proj_out* _out) {
  
  int v_2026;
  int v_2025;
  int v_2024;
  int v_2023;
  int v_2022;
  int v_2021;
  int v_2020;
  int v_2019;
  int v_2018;
  int v_2017;
  int v_2016;
  int v_2015;
  int v_2014;
  int v_2013;
  int v_2012;
  int v_2011;
  int v_2010;
  int v_2009;
  int v_2008;
  int v_2007;
  int v_2006;
  int v_2005;
  int v_2004;
  int v_2003;
  int v_2002;
  int v_2001;
  int v_2000;
  int v_1999;
  int v_1998;
  int v_1997;
  int v_1996;
  int v_1995;
  int v_1994;
  int v_1993;
  int v_1992;
  int v_1991;
  int v_1990;
  int v_1989;
  int v_1988;
  int v_1987;
  int v_1986;
  int v_1985;
  int v_1984;
  int v_1983;
  int v_1982;
  int v_1981;
  int v_1980;
  int v_1979;
  int v_1978;
  int v_1977;
  int v_1976;
  int v_1975;
  int v_1974;
  int v_1973;
  int v_1972;
  int v_1971;
  int v_1970;
  int v_1969;
  int v_1968;
  int v_1967;
  int v_1966;
  int v_1965;
  int v_1964;
  int v_1963;
  int v_1962;
  int v_1961;
  int v_1960;
  int v_1959;
  int v_1958;
  int v_1957;
  int v_1956;
  int v_1955;
  int v_1954;
  int v_1953;
  int v_1952;
  int v_1951;
  int v_1950;
  int v_1949;
  int v_1948;
  int v_1947;
  int v_1946;
  int v_1945;
  int v_1944;
  int v_1943;
  int v_1942;
  int v_1941;
  int v_1940;
  int v_1939;
  int v_1938;
  int v_1937;
  int v_1936;
  int v_1935;
  int v_1934;
  int v_1933;
  int v_1932;
  int v_1931;
  int v_1930;
  int v_1929;
  int v_1928;
  int v_1927;
  int v_1926;
  int v_1925;
  int v_1924;
  int v_1923;
  int v_1922;
  int v_1921;
  int v_1920;
  int v_1919;
  int v_1918;
  int v_1917;
  int v_1916;
  int v_1915;
  int v_1914;
  int v_1913;
  int v_1912;
  int v_1911;
  int v_1910;
  int v_1909;
  int v_1908;
  int v_1907;
  int v_1906;
  int v_1905;
  int v_1904;
  int v_1903;
  int v_1902;
  int v_1901;
  int v_1900;
  int v_1899;
  int v_1898;
  int v_1897;
  int v_1896;
  int v_1895;
  int v_1894;
  int v_1893;
  int v_1892;
  int v_1891;
  int v_1890;
  int v_1889;
  int v_1888;
  int v_1887;
  int v_1886;
  int v_1885;
  int v_1884;
  int v_1883;
  int v_1882;
  int v_1881;
  int v_1880;
  int v_1879;
  int v_1878;
  int v_1877;
  int v_1876;
  int v_1875;
  int v_1874;
  int v_1873;
  int v_1872;
  int v_1871;
  int v_1870;
  int v_1869;
  int v_1868;
  int v_1867;
  int v_1866;
  int v_1865;
  int v_1864;
  int v_1863;
  int v_1862;
  int v_1861;
  int v_1860;
  int v_1859;
  int v_1858;
  int v_1857;
  int v_1856;
  int v_1855;
  int v_1854;
  int v_1853;
  int v_1852;
  int v_1851;
  int v_1850;
  int v_1849;
  int v_1848;
  int v_1847;
  int v_1846;
  int v_1845;
  int v_1844;
  int v_1843;
  int v_1842;
  int v_1841;
  int v_1840;
  int v_1839;
  int v_1838;
  int v_1837;
  int v_1836;
  int v_1835;
  int v_1834;
  int v_1833;
  int v_1832;
  int v_1831;
  int v_1830;
  int v_1829;
  int v_1828;
  int v_1827;
  int v_1826;
  int v_1825;
  int v_1824;
  int v_1823;
  int v_1822;
  int v_1821;
  int v_1820;
  int v_1819;
  int v_1818;
  int v_1817;
  int v_1816;
  int v_1815;
  int v_1814;
  int v_1813;
  int v_1812;
  int v_1811;
  int v_1810;
  int v_1809;
  int v_1808;
  int v_1807;
  int v_1806;
  int v_1805;
  int v_1804;
  int v_1803;
  int v_1802;
  int v_1801;
  int v_1800;
  int v_1799;
  int v_1798;
  int v_1797;
  int v_1796;
  int v_1795;
  int v_1794;
  int v_1793;
  int v_1792;
  int v_1791;
  int v_1790;
  int v_1789;
  int v_1788;
  int v_1787;
  int v_1786;
  int v_1785;
  int v_1784;
  int v_1783;
  int v_1782;
  int v_1781;
  int v_1780;
  int v_1779;
  int v_1778;
  int v_1777;
  int v_1776;
  int v_1775;
  int v_1774;
  int v_1773;
  int v_1772;
  int v_1771;
  int v_1770;
  int v_1769;
  int v_1768;
  int v_1767;
  int v_1766;
  int v_1765;
  int v_1764;
  int v_1763;
  int v_1762;
  int v_1761;
  int v_1760;
  int v_1759;
  int v_1758;
  int v_1757;
  int v_1756;
  int v_1755;
  int v_1754;
  int v_1753;
  int v_1752;
  int v_1751;
  int v_1750;
  int v_1749;
  int v_1748;
  int v_1747;
  int v_1746;
  int v_1745;
  int v_1744;
  int v_1743;
  int v_1742;
  int v_1741;
  int v_1740;
  int v_1739;
  int v_1738;
  int v_1737;
  int v_1736;
  int v_1735;
  int v_1734;
  int v_1733;
  int v_1732;
  int v_1731;
  int v_1730;
  int v_1729;
  int v_1728;
  int v_1727;
  int v_1726;
  int v_1725;
  int v_1724;
  int v_1723;
  int v_1722;
  int v_1721;
  int v_1720;
  int v_1719;
  int v_1718;
  int v_1717;
  int v_1716;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  int sub_246;
  int sub_247;
  int sub_248;
  int sub_249;
  int sub_250;
  int sub_251;
  int sub_252;
  int sub_253;
  int sub_254;
  int sub_255;
  int sub_256;
  int sub_257;
  int sub_258;
  int sub_259;
  int sub_260;
  int sub_261;
  int sub_262;
  int sub_263;
  int sub_264;
  int sub_265;
  int sub_266;
  int sub_267;
  int sub_268;
  int sub_269;
  int sub_270;
  int sub_271;
  int sub_272;
  int sub_273;
  int sub_274;
  int sub_275;
  int sub_276;
  int sub_277;
  sub_26 = (instanciador_inpSl&&false);
  if (instanciador_c_somL) {
    v_1977 = false;
  } else {
    v_1977 = sub_26;
  };
  if (instanciador_ck_27_1) {
    v_1978 = v_1977;
  } else {
    v_1978 = false;
  };
  sub_28 = false;
  if (instanciador_c_somL) {
    sub_27 = sub_26;
  } else {
    sub_27 = sub_28;
  };
  sub_29 = sub_28;
  if (instanciador_ck_27_1) {
    v_1979 = sub_29;
  } else {
    v_1979 = sub_27;
  };
  if (instanciador_csl) {
    sub_25 = v_1978;
  } else {
    sub_25 = v_1979;
  };
  sub_24 = sub_25;
  sub_23 = sub_24;
  if (instanciador_ck_23_1) {
    sub_30 = false;
  } else {
    sub_30 = sub_24;
  };
  if (instanciador_inpMp) {
    v_1982 = sub_30;
  } else {
    v_1982 = false;
  };
  if (instanciador_c_microP) {
    v_1983 = v_1982;
  } else {
    v_1983 = false;
  };
  if (instanciador_inpMp) {
    v_1980 = sub_24;
  } else {
    v_1980 = sub_30;
  };
  if (instanciador_c_microP) {
    v_1981 = sub_23;
  } else {
    v_1981 = v_1980;
  };
  if (instanciador_cmp) {
    sub_22 = v_1981;
  } else {
    sub_22 = v_1983;
  };
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (instanciador_ck_25_1) {
    sub_31 = false;
  } else {
    sub_31 = sub_20;
  };
  if (instanciador_inpSp) {
    v_1986 = sub_31;
  } else {
    v_1986 = false;
  };
  if (instanciador_c_somP) {
    v_1987 = v_1986;
  } else {
    v_1987 = false;
  };
  if (instanciador_inpSp) {
    v_1984 = sub_20;
  } else {
    v_1984 = sub_31;
  };
  if (instanciador_c_somP) {
    v_1985 = sub_20;
  } else {
    v_1985 = v_1984;
  };
  if (instanciador_csp) {
    sub_19 = v_1985;
  } else {
    sub_19 = v_1987;
  };
  if (instanciador_ck_21_1) {
    sub_18 = sub_19;
  } else {
    sub_18 = false;
  };
  if (instanciador_inpMl) {
    v_1990 = sub_18;
  } else {
    v_1990 = sub_19;
  };
  if (instanciador_c_microL) {
    v_1991 = v_1990;
  } else {
    v_1991 = sub_19;
  };
  if (instanciador_inpMl) {
    v_1988 = false;
  } else {
    v_1988 = sub_18;
  };
  if (instanciador_c_microL) {
    v_1989 = false;
  } else {
    v_1989 = v_1988;
  };
  if (instanciador_cml) {
    sub_17 = v_1989;
  } else {
    sub_17 = v_1991;
  };
  if (instanciador_ck_19_1) {
    sub_32 = false;
  } else {
    sub_32 = sub_17;
  };
  if (instanciador_lv) {
    v_1994 = sub_17;
  } else {
    v_1994 = sub_32;
  };
  if (instanciador_cv) {
    v_1995 = v_1994;
  } else {
    v_1995 = false;
  };
  if (instanciador_lv) {
    v_1992 = sub_32;
  } else {
    v_1992 = false;
  };
  if (instanciador_cv) {
    v_1993 = sub_17;
  } else {
    v_1993 = v_1992;
  };
  if (instanciador_c_vent) {
    sub_16 = v_1993;
  } else {
    sub_16 = v_1995;
  };
  if (instanciador_ck_17_1) {
    sub_15 = sub_16;
  } else {
    sub_15 = false;
  };
  if (instanciador_lx) {
    v_1998 = sub_15;
    v_1996 = false;
  } else {
    v_1998 = sub_16;
    v_1996 = sub_15;
  };
  if (instanciador_c_lampExt) {
    v_1997 = false;
  } else {
    v_1997 = v_1996;
  };
  sub_33 = sub_16;
  if (instanciador_c_lampExt) {
    v_1999 = v_1998;
  } else {
    v_1999 = sub_33;
  };
  if (instanciador_cx) {
    sub_14 = v_1997;
  } else {
    sub_14 = v_1999;
  };
  if (instanciador_ck_15_1) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (instanciador_l4) {
    v_2002 = sub_13;
  } else {
    v_2002 = sub_14;
  };
  if (instanciador_c4_lamp) {
    v_2003 = v_2002;
  } else {
    v_2003 = sub_14;
  };
  if (instanciador_l4) {
    v_2000 = false;
  } else {
    v_2000 = sub_13;
  };
  if (instanciador_c4_lamp) {
    v_2001 = false;
  } else {
    v_2001 = v_2000;
  };
  if (instanciador_c4) {
    sub_12 = v_2001;
  } else {
    sub_12 = v_2003;
  };
  if (instanciador_ck_13_1) {
    sub_34 = false;
  } else {
    sub_34 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_2006 = sub_34;
  } else {
    v_2006 = false;
  };
  if (instanciador_l3) {
    v_2007 = v_2006;
  } else {
    v_2007 = false;
  };
  if (instanciador_c3_lamp) {
    v_2004 = sub_12;
  } else {
    v_2004 = sub_34;
  };
  if (instanciador_l3) {
    v_2005 = sub_12;
  } else {
    v_2005 = v_2004;
  };
  if (instanciador_c3) {
    sub_11 = v_2005;
  } else {
    sub_11 = v_2007;
  };
  if (instanciador_ck_11_1) {
    sub_35 = false;
  } else {
    sub_35 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_2010 = sub_35;
  } else {
    v_2010 = false;
  };
  if (instanciador_l2) {
    v_2011 = v_2010;
  } else {
    v_2011 = false;
  };
  if (instanciador_c2_lamp) {
    v_2008 = sub_11;
  } else {
    v_2008 = sub_35;
  };
  if (instanciador_l2) {
    v_2009 = sub_11;
  } else {
    v_2009 = v_2008;
  };
  if (instanciador_c2) {
    sub_10 = v_2009;
  } else {
    sub_10 = v_2011;
  };
  if (instanciador_ck_9_1) {
    sub_36 = false;
  } else {
    sub_36 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_2014 = sub_36;
  } else {
    v_2014 = false;
  };
  if (instanciador_l1) {
    v_2015 = v_2014;
  } else {
    v_2015 = false;
  };
  if (instanciador_c1_lamp) {
    v_2012 = sub_10;
  } else {
    v_2012 = sub_36;
  };
  if (instanciador_l1) {
    v_2013 = sub_10;
  } else {
    v_2013 = v_2012;
  };
  if (instanciador_c1) {
    sub_9 = v_2013;
  } else {
    sub_9 = v_2015;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (instanciador_ck_17_1) {
    sub_46 = false;
  } else {
    sub_46 = sub_16;
  };
  if (instanciador_lx) {
    v_1959 = sub_46;
  } else {
    v_1959 = false;
  };
  if (instanciador_c_lampExt) {
    v_1960 = v_1959;
  } else {
    v_1960 = false;
  };
  if (instanciador_lx) {
    v_1957 = sub_16;
  } else {
    v_1957 = sub_46;
  };
  if (instanciador_c_lampExt) {
    v_1958 = sub_33;
  } else {
    v_1958 = v_1957;
  };
  if (instanciador_cx) {
    sub_45 = v_1958;
  } else {
    sub_45 = v_1960;
  };
  if (instanciador_ck_15_1) {
    sub_47 = false;
  } else {
    sub_47 = sub_45;
  };
  if (instanciador_l4) {
    v_1963 = sub_47;
  } else {
    v_1963 = false;
  };
  if (instanciador_c4_lamp) {
    v_1964 = v_1963;
  } else {
    v_1964 = false;
  };
  if (instanciador_l4) {
    v_1961 = sub_45;
  } else {
    v_1961 = sub_47;
  };
  if (instanciador_c4_lamp) {
    v_1962 = sub_45;
  } else {
    v_1962 = v_1961;
  };
  if (instanciador_c4) {
    sub_44 = v_1962;
  } else {
    sub_44 = v_1964;
  };
  if (instanciador_ck_13_1) {
    sub_48 = false;
  } else {
    sub_48 = sub_44;
  };
  if (instanciador_c3_lamp) {
    v_1967 = sub_48;
  } else {
    v_1967 = false;
  };
  if (instanciador_l3) {
    v_1968 = v_1967;
  } else {
    v_1968 = false;
  };
  if (instanciador_c3_lamp) {
    v_1965 = sub_44;
  } else {
    v_1965 = sub_48;
  };
  if (instanciador_l3) {
    v_1966 = sub_44;
  } else {
    v_1966 = v_1965;
  };
  if (instanciador_c3) {
    sub_43 = v_1966;
  } else {
    sub_43 = v_1968;
  };
  if (instanciador_ck_11_1) {
    sub_49 = false;
  } else {
    sub_49 = sub_43;
  };
  if (instanciador_c2_lamp) {
    v_1971 = sub_49;
  } else {
    v_1971 = false;
  };
  if (instanciador_l2) {
    v_1972 = v_1971;
  } else {
    v_1972 = false;
  };
  if (instanciador_c2_lamp) {
    v_1969 = sub_43;
  } else {
    v_1969 = sub_49;
  };
  if (instanciador_l2) {
    v_1970 = sub_43;
  } else {
    v_1970 = v_1969;
  };
  if (instanciador_c2) {
    sub_42 = v_1970;
  } else {
    sub_42 = v_1972;
  };
  if (instanciador_ck_9_1) {
    sub_50 = false;
  } else {
    sub_50 = sub_42;
  };
  if (instanciador_c1_lamp) {
    v_1975 = sub_50;
  } else {
    v_1975 = false;
  };
  if (instanciador_l1) {
    v_1976 = v_1975;
  } else {
    v_1976 = false;
  };
  if (instanciador_c1_lamp) {
    v_1973 = sub_42;
  } else {
    v_1973 = sub_50;
  };
  if (instanciador_l1) {
    v_1974 = sub_42;
  } else {
    v_1974 = v_1973;
  };
  if (instanciador_c1) {
    sub_41 = v_1974;
  } else {
    sub_41 = v_1976;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (instanciador_v_341) {
    sub_4 = sub_37;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  v_1912 = !(instanciador_inpSl);
  sub_73 = (v_1912&&false);
  if (instanciador_c_somL) {
    v_1913 = sub_28;
  } else {
    v_1913 = sub_73;
  };
  if (instanciador_ck_27_1) {
    v_1914 = v_1913;
  } else {
    v_1914 = sub_29;
  };
  if (instanciador_c_somL) {
    sub_74 = sub_73;
  } else {
    sub_74 = false;
  };
  if (instanciador_ck_27_1) {
    v_1915 = false;
  } else {
    v_1915 = sub_74;
  };
  if (instanciador_csl) {
    sub_72 = v_1914;
  } else {
    sub_72 = v_1915;
  };
  sub_71 = sub_72;
  if (instanciador_ck_23_1) {
    sub_70 = sub_71;
  } else {
    sub_70 = false;
  };
  if (instanciador_inpMp) {
    v_1918 = sub_70;
  } else {
    v_1918 = sub_71;
  };
  if (instanciador_c_microP) {
    v_1919 = v_1918;
  } else {
    v_1919 = sub_71;
  };
  if (instanciador_inpMp) {
    v_1916 = false;
  } else {
    v_1916 = sub_70;
  };
  if (instanciador_c_microP) {
    v_1917 = false;
  } else {
    v_1917 = v_1916;
  };
  if (instanciador_cmp) {
    sub_69 = v_1917;
  } else {
    sub_69 = v_1919;
  };
  sub_68 = sub_69;
  sub_81 = true;
  sub_80 = sub_81;
  sub_82 = (instanciador_inpSl||false);
  if (instanciador_c_somL) {
    v_1905 = sub_81;
  } else {
    v_1905 = sub_82;
  };
  if (instanciador_ck_27_1) {
    v_1906 = v_1905;
  } else {
    v_1906 = sub_80;
  };
  if (instanciador_c_somL) {
    sub_83 = sub_82;
  } else {
    sub_83 = false;
  };
  if (instanciador_ck_27_1) {
    v_1907 = false;
  } else {
    v_1907 = sub_83;
  };
  if (instanciador_csl) {
    sub_79 = v_1906;
  } else {
    sub_79 = v_1907;
  };
  sub_78 = sub_79;
  if (instanciador_ck_23_1) {
    sub_77 = sub_78;
  } else {
    sub_77 = false;
  };
  if (instanciador_inpMp) {
    v_1910 = sub_77;
  } else {
    v_1910 = sub_78;
  };
  if (instanciador_c_microP) {
    v_1911 = v_1910;
  } else {
    v_1911 = sub_78;
  };
  if (instanciador_inpMp) {
    v_1908 = false;
  } else {
    v_1908 = sub_77;
  };
  if (instanciador_c_microP) {
    v_1909 = false;
  } else {
    v_1909 = v_1908;
  };
  if (instanciador_cmp) {
    sub_76 = v_1909;
  } else {
    sub_76 = v_1911;
  };
  sub_75 = sub_76;
  if (instanciador_ck_29_1) {
    v_1920 = sub_75;
  } else {
    v_1920 = sub_68;
  };
  if (instanciador_inpProj) {
    sub_67 = sub_68;
  } else {
    sub_67 = v_1920;
  };
  if (instanciador_ck_25_1) {
    sub_66 = sub_67;
  } else {
    sub_66 = false;
  };
  if (instanciador_inpSp) {
    v_1923 = sub_66;
  } else {
    v_1923 = sub_67;
  };
  if (instanciador_c_somP) {
    v_1924 = v_1923;
  } else {
    v_1924 = sub_67;
  };
  if (instanciador_inpSp) {
    v_1921 = false;
  } else {
    v_1921 = sub_66;
  };
  if (instanciador_c_somP) {
    v_1922 = false;
  } else {
    v_1922 = v_1921;
  };
  if (instanciador_csp) {
    sub_65 = v_1922;
  } else {
    sub_65 = v_1924;
  };
  if (instanciador_ck_21_1) {
    sub_84 = false;
  } else {
    sub_84 = sub_65;
  };
  if (instanciador_inpMl) {
    v_1927 = sub_84;
  } else {
    v_1927 = false;
  };
  if (instanciador_c_microL) {
    v_1928 = v_1927;
  } else {
    v_1928 = false;
  };
  if (instanciador_inpMl) {
    v_1925 = sub_65;
  } else {
    v_1925 = sub_84;
  };
  if (instanciador_c_microL) {
    v_1926 = sub_65;
  } else {
    v_1926 = v_1925;
  };
  if (instanciador_cml) {
    sub_64 = v_1926;
  } else {
    sub_64 = v_1928;
  };
  if (instanciador_ck_19_1) {
    sub_85 = false;
  } else {
    sub_85 = sub_64;
  };
  if (instanciador_lv) {
    v_1931 = sub_64;
  } else {
    v_1931 = sub_85;
  };
  if (instanciador_cv) {
    v_1932 = v_1931;
  } else {
    v_1932 = false;
  };
  if (instanciador_lv) {
    v_1929 = sub_85;
  } else {
    v_1929 = false;
  };
  if (instanciador_cv) {
    v_1930 = sub_64;
  } else {
    v_1930 = v_1929;
  };
  if (instanciador_c_vent) {
    sub_63 = v_1930;
  } else {
    sub_63 = v_1932;
  };
  if (instanciador_ck_17_1) {
    sub_86 = false;
  } else {
    sub_86 = sub_63;
  };
  if (instanciador_lx) {
    v_1935 = sub_86;
  } else {
    v_1935 = false;
  };
  if (instanciador_c_lampExt) {
    v_1936 = v_1935;
  } else {
    v_1936 = false;
  };
  if (instanciador_lx) {
    v_1933 = sub_63;
  } else {
    v_1933 = sub_86;
  };
  if (instanciador_c_lampExt) {
    v_1934 = sub_63;
  } else {
    v_1934 = v_1933;
  };
  if (instanciador_cx) {
    sub_62 = v_1934;
  } else {
    sub_62 = v_1936;
  };
  if (instanciador_ck_15_1) {
    sub_61 = sub_62;
  } else {
    sub_61 = false;
  };
  if (instanciador_l4) {
    v_1939 = sub_61;
  } else {
    v_1939 = sub_62;
  };
  if (instanciador_c4_lamp) {
    v_1940 = v_1939;
  } else {
    v_1940 = sub_62;
  };
  if (instanciador_l4) {
    v_1937 = false;
  } else {
    v_1937 = sub_61;
  };
  if (instanciador_c4_lamp) {
    v_1938 = false;
  } else {
    v_1938 = v_1937;
  };
  if (instanciador_c4) {
    sub_60 = v_1938;
  } else {
    sub_60 = v_1940;
  };
  if (instanciador_ck_13_1) {
    sub_87 = false;
  } else {
    sub_87 = sub_60;
  };
  if (instanciador_c3_lamp) {
    v_1943 = sub_87;
  } else {
    v_1943 = false;
  };
  if (instanciador_l3) {
    v_1944 = v_1943;
  } else {
    v_1944 = false;
  };
  if (instanciador_c3_lamp) {
    v_1941 = sub_60;
  } else {
    v_1941 = sub_87;
  };
  if (instanciador_l3) {
    v_1942 = sub_60;
  } else {
    v_1942 = v_1941;
  };
  if (instanciador_c3) {
    sub_59 = v_1942;
  } else {
    sub_59 = v_1944;
  };
  if (instanciador_ck_11_1) {
    sub_58 = sub_59;
  } else {
    sub_58 = false;
  };
  if (instanciador_c2_lamp) {
    v_1947 = sub_58;
  } else {
    v_1947 = sub_59;
  };
  if (instanciador_l2) {
    v_1948 = v_1947;
  } else {
    v_1948 = sub_59;
  };
  if (instanciador_c2_lamp) {
    v_1945 = false;
  } else {
    v_1945 = sub_58;
  };
  if (instanciador_l2) {
    v_1946 = false;
  } else {
    v_1946 = v_1945;
  };
  if (instanciador_c2) {
    sub_57 = v_1946;
  } else {
    sub_57 = v_1948;
  };
  if (instanciador_ck_9_1) {
    sub_56 = sub_57;
  } else {
    sub_56 = false;
  };
  if (instanciador_c1_lamp) {
    v_1951 = sub_56;
  } else {
    v_1951 = sub_57;
  };
  if (instanciador_l1) {
    v_1952 = v_1951;
  } else {
    v_1952 = sub_57;
  };
  if (instanciador_c1_lamp) {
    v_1949 = false;
  } else {
    v_1949 = sub_56;
  };
  if (instanciador_l1) {
    v_1950 = false;
  } else {
    v_1950 = v_1949;
  };
  if (instanciador_c1) {
    sub_55 = v_1950;
  } else {
    sub_55 = v_1952;
  };
  sub_54 = sub_55;
  sub_53 = sub_54;
  sub_119 = sub_29;
  sub_118 = sub_119;
  sub_117 = sub_118;
  sub_116 = sub_117;
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  sub_90 = sub_91;
  sub_89 = sub_90;
  if (instanciador_neutro_input) {
    v_1953 = sub_89;
  } else {
    v_1953 = sub_9;
  };
  if (instanciador_ck_23_1) {
    sub_139 = sub_24;
  } else {
    sub_139 = false;
  };
  if (instanciador_inpMp) {
    v_1871 = sub_139;
  } else {
    v_1871 = sub_24;
  };
  if (instanciador_c_microP) {
    v_1872 = v_1871;
  } else {
    v_1872 = sub_23;
  };
  if (instanciador_inpMp) {
    v_1869 = false;
  } else {
    v_1869 = sub_139;
  };
  if (instanciador_c_microP) {
    v_1870 = false;
  } else {
    v_1870 = v_1869;
  };
  if (instanciador_cmp) {
    sub_138 = v_1870;
  } else {
    sub_138 = v_1872;
  };
  sub_137 = sub_138;
  sub_136 = sub_137;
  if (instanciador_ck_25_1) {
    sub_135 = sub_136;
  } else {
    sub_135 = false;
  };
  if (instanciador_inpSp) {
    v_1875 = sub_135;
  } else {
    v_1875 = sub_136;
  };
  if (instanciador_c_somP) {
    v_1876 = v_1875;
  } else {
    v_1876 = sub_136;
  };
  if (instanciador_inpSp) {
    v_1873 = false;
  } else {
    v_1873 = sub_135;
  };
  if (instanciador_c_somP) {
    v_1874 = false;
  } else {
    v_1874 = v_1873;
  };
  if (instanciador_csp) {
    sub_134 = v_1874;
  } else {
    sub_134 = v_1876;
  };
  if (instanciador_ck_21_1) {
    sub_133 = sub_134;
  } else {
    sub_133 = false;
  };
  if (instanciador_inpMl) {
    v_1879 = sub_133;
  } else {
    v_1879 = sub_134;
  };
  if (instanciador_c_microL) {
    v_1880 = v_1879;
  } else {
    v_1880 = sub_134;
  };
  if (instanciador_inpMl) {
    v_1877 = false;
  } else {
    v_1877 = sub_133;
  };
  if (instanciador_c_microL) {
    v_1878 = false;
  } else {
    v_1878 = v_1877;
  };
  if (instanciador_cml) {
    sub_132 = v_1878;
  } else {
    sub_132 = v_1880;
  };
  if (instanciador_ck_19_1) {
    sub_131 = sub_132;
  } else {
    sub_131 = false;
  };
  if (instanciador_lv) {
    v_1883 = false;
  } else {
    v_1883 = sub_131;
  };
  if (instanciador_cv) {
    v_1884 = v_1883;
  } else {
    v_1884 = sub_132;
  };
  if (instanciador_lv) {
    v_1881 = sub_131;
  } else {
    v_1881 = sub_132;
  };
  if (instanciador_cv) {
    v_1882 = false;
  } else {
    v_1882 = v_1881;
  };
  if (instanciador_c_vent) {
    sub_130 = v_1882;
  } else {
    sub_130 = v_1884;
  };
  if (instanciador_ck_17_1) {
    sub_129 = sub_130;
  } else {
    sub_129 = false;
  };
  if (instanciador_lx) {
    v_1887 = sub_129;
  } else {
    v_1887 = sub_130;
  };
  if (instanciador_c_lampExt) {
    v_1888 = v_1887;
  } else {
    v_1888 = sub_130;
  };
  if (instanciador_lx) {
    v_1885 = false;
  } else {
    v_1885 = sub_129;
  };
  if (instanciador_c_lampExt) {
    v_1886 = false;
  } else {
    v_1886 = v_1885;
  };
  if (instanciador_cx) {
    sub_128 = v_1886;
  } else {
    sub_128 = v_1888;
  };
  if (instanciador_ck_15_1) {
    sub_127 = sub_128;
  } else {
    sub_127 = false;
  };
  if (instanciador_l4) {
    v_1891 = sub_127;
  } else {
    v_1891 = sub_128;
  };
  if (instanciador_c4_lamp) {
    v_1892 = v_1891;
  } else {
    v_1892 = sub_128;
  };
  if (instanciador_l4) {
    v_1889 = false;
  } else {
    v_1889 = sub_127;
  };
  if (instanciador_c4_lamp) {
    v_1890 = false;
  } else {
    v_1890 = v_1889;
  };
  if (instanciador_c4) {
    sub_126 = v_1890;
  } else {
    sub_126 = v_1892;
  };
  if (instanciador_ck_13_1) {
    sub_125 = sub_126;
  } else {
    sub_125 = false;
  };
  if (instanciador_c3_lamp) {
    v_1895 = sub_125;
  } else {
    v_1895 = sub_126;
  };
  if (instanciador_l3) {
    v_1896 = v_1895;
  } else {
    v_1896 = sub_126;
  };
  if (instanciador_c3_lamp) {
    v_1893 = false;
  } else {
    v_1893 = sub_125;
  };
  if (instanciador_l3) {
    v_1894 = false;
  } else {
    v_1894 = v_1893;
  };
  if (instanciador_c3) {
    sub_124 = v_1894;
  } else {
    sub_124 = v_1896;
  };
  if (instanciador_ck_11_1) {
    sub_123 = sub_124;
  } else {
    sub_123 = false;
  };
  if (instanciador_c2_lamp) {
    v_1899 = sub_123;
  } else {
    v_1899 = sub_124;
  };
  if (instanciador_l2) {
    v_1900 = v_1899;
  } else {
    v_1900 = sub_124;
  };
  if (instanciador_c2_lamp) {
    v_1897 = false;
  } else {
    v_1897 = sub_123;
  };
  if (instanciador_l2) {
    v_1898 = false;
  } else {
    v_1898 = v_1897;
  };
  if (instanciador_c2) {
    sub_122 = v_1898;
  } else {
    sub_122 = v_1900;
  };
  if (instanciador_ck_9_1) {
    sub_121 = sub_122;
  } else {
    sub_121 = false;
  };
  if (instanciador_c1_lamp) {
    v_1903 = sub_121;
  } else {
    v_1903 = sub_122;
  };
  if (instanciador_l1) {
    v_1904 = v_1903;
  } else {
    v_1904 = sub_122;
  };
  if (instanciador_c1_lamp) {
    v_1901 = false;
  } else {
    v_1901 = sub_121;
  };
  if (instanciador_l1) {
    v_1902 = false;
  } else {
    v_1902 = v_1901;
  };
  if (instanciador_c1) {
    sub_120 = v_1902;
  } else {
    sub_120 = v_1904;
  };
  if (instanciador_neutro_input) {
    sub_88 = sub_89;
  } else {
    sub_88 = sub_120;
  };
  if (instanciador_seguranca_input) {
    v_1954 = sub_88;
  } else {
    v_1954 = v_1953;
  };
  if (instanciador_domingol_input) {
    v_1955 = sub_53;
  } else {
    v_1955 = v_1954;
  };
  if (instanciador_domingo_input) {
    sub_52 = sub_38;
  } else {
    sub_52 = v_1955;
  };
  if (instanciador_v_341) {
    v_1956 = sub_37;
  } else {
    v_1956 = sub_52;
  };
  if (instanciador_sexta_input) {
    sub_51 = sub_37;
  } else {
    sub_51 = v_1956;
  };
  if (instanciador_v_339) {
    v_2016 = sub_51;
  } else {
    v_2016 = sub_3;
  };
  if (instanciador_neutro_input) {
    sub_144 = sub_89;
  } else {
    sub_144 = sub_41;
  };
  if (instanciador_seguranca_input) {
    v_1868 = sub_88;
  } else {
    v_1868 = sub_144;
  };
  if (instanciador_domingol_input) {
    sub_143 = sub_53;
  } else {
    sub_143 = v_1868;
  };
  if (instanciador_domingo_input) {
    sub_142 = sub_38;
  } else {
    sub_142 = sub_143;
  };
  if (instanciador_v_341) {
    sub_141 = sub_37;
  } else {
    sub_141 = sub_142;
  };
  sub_140 = sub_141;
  if (instanciador_v_339) {
    v_2017 = sub_51;
  } else {
    v_2017 = sub_140;
  };
  if (instanciador_ebd_input) {
    sub_2 = v_2016;
  } else {
    sub_2 = v_2017;
  };
  if (instanciador_seguranca_input) {
    v_1864 = sub_120;
  } else {
    v_1864 = sub_89;
  };
  if (instanciador_domingol_input) {
    v_1865 = sub_53;
    v_1863 = sub_53;
  } else {
    v_1865 = v_1864;
    v_1863 = sub_39;
  };
  if (instanciador_domingo_input) {
    v_1866 = v_1863;
  } else {
    v_1866 = v_1865;
  };
  if (instanciador_domingol_input) {
    v_1862 = sub_53;
    v_1861 = sub_53;
  } else {
    v_1862 = sub_88;
    v_1861 = sub_144;
  };
  if (instanciador_domingo_input) {
    sub_146 = v_1861;
  } else {
    sub_146 = v_1862;
  };
  if (instanciador_v_341) {
    v_1867 = v_1866;
  } else {
    v_1867 = sub_146;
  };
  if (instanciador_sexta_input) {
    sub_145 = sub_37;
  } else {
    sub_145 = v_1867;
  };
  if (instanciador_neutro_input) {
    v_1860 = sub_89;
  } else {
    v_1860 = sub_55;
  };
  if (instanciador_seguranca_input) {
    sub_148 = sub_88;
  } else {
    sub_148 = v_1860;
  };
  if (instanciador_domingo_input) {
    sub_147 = sub_38;
  } else {
    sub_147 = sub_148;
  };
  if (instanciador_v_341) {
    v_2018 = sub_143;
  } else {
    v_2018 = sub_147;
  };
  if (instanciador_sexta_input) {
    v_2019 = sub_37;
  } else {
    v_2019 = v_2018;
  };
  if (instanciador_v_339) {
    v_2020 = v_2019;
  } else {
    v_2020 = sub_145;
  };
  if (instanciador_ebd_input) {
    v_2021 = sub_5;
  } else {
    v_2021 = v_2020;
  };
  if (instanciador_v_340) {
    sub_1 = v_2021;
  } else {
    sub_1 = sub_2;
  };
  v_1817 = !(instanciador_inpSl);
  sub_173 = (v_1817||false);
  if (instanciador_c_somL) {
    v_1818 = false;
  } else {
    v_1818 = sub_173;
  };
  if (instanciador_ck_27_1) {
    v_1819 = v_1818;
  } else {
    v_1819 = false;
  };
  if (instanciador_c_somL) {
    sub_174 = sub_173;
  } else {
    sub_174 = sub_81;
  };
  if (instanciador_ck_27_1) {
    v_1820 = sub_80;
  } else {
    v_1820 = sub_174;
  };
  if (instanciador_csl) {
    sub_172 = v_1819;
  } else {
    sub_172 = v_1820;
  };
  sub_171 = sub_172;
  sub_170 = sub_171;
  if (instanciador_ck_23_1) {
    sub_175 = false;
  } else {
    sub_175 = sub_171;
  };
  if (instanciador_inpMp) {
    v_1823 = sub_175;
  } else {
    v_1823 = false;
  };
  if (instanciador_c_microP) {
    v_1824 = v_1823;
  } else {
    v_1824 = false;
  };
  if (instanciador_inpMp) {
    v_1821 = sub_171;
  } else {
    v_1821 = sub_175;
  };
  if (instanciador_c_microP) {
    v_1822 = sub_170;
  } else {
    v_1822 = v_1821;
  };
  if (instanciador_cmp) {
    sub_169 = v_1822;
  } else {
    sub_169 = v_1824;
  };
  sub_168 = sub_169;
  if (instanciador_ck_29_1) {
    v_1825 = sub_168;
  } else {
    v_1825 = sub_21;
  };
  if (instanciador_inpProj) {
    sub_167 = v_1825;
  } else {
    sub_167 = sub_168;
  };
  if (instanciador_ck_25_1) {
    sub_176 = false;
  } else {
    sub_176 = sub_167;
  };
  if (instanciador_inpSp) {
    v_1828 = sub_176;
  } else {
    v_1828 = false;
  };
  if (instanciador_c_somP) {
    v_1829 = v_1828;
  } else {
    v_1829 = false;
  };
  if (instanciador_inpSp) {
    v_1826 = sub_167;
  } else {
    v_1826 = sub_176;
  };
  if (instanciador_c_somP) {
    v_1827 = sub_167;
  } else {
    v_1827 = v_1826;
  };
  if (instanciador_csp) {
    sub_166 = v_1827;
  } else {
    sub_166 = v_1829;
  };
  if (instanciador_ck_21_1) {
    sub_165 = sub_166;
  } else {
    sub_165 = false;
  };
  if (instanciador_inpMl) {
    v_1832 = sub_165;
  } else {
    v_1832 = sub_166;
  };
  if (instanciador_c_microL) {
    v_1833 = v_1832;
  } else {
    v_1833 = sub_166;
  };
  if (instanciador_inpMl) {
    v_1830 = false;
  } else {
    v_1830 = sub_165;
  };
  if (instanciador_c_microL) {
    v_1831 = false;
  } else {
    v_1831 = v_1830;
  };
  if (instanciador_cml) {
    sub_164 = v_1831;
  } else {
    sub_164 = v_1833;
  };
  if (instanciador_ck_19_1) {
    sub_177 = false;
  } else {
    sub_177 = sub_164;
  };
  if (instanciador_lv) {
    v_1836 = sub_164;
  } else {
    v_1836 = sub_177;
  };
  if (instanciador_cv) {
    v_1837 = v_1836;
  } else {
    v_1837 = false;
  };
  if (instanciador_lv) {
    v_1834 = sub_177;
  } else {
    v_1834 = false;
  };
  if (instanciador_cv) {
    v_1835 = sub_164;
  } else {
    v_1835 = v_1834;
  };
  if (instanciador_c_vent) {
    sub_163 = v_1835;
  } else {
    sub_163 = v_1837;
  };
  if (instanciador_ck_17_1) {
    sub_162 = sub_163;
  } else {
    sub_162 = false;
  };
  if (instanciador_lx) {
    v_1840 = sub_162;
    v_1838 = false;
  } else {
    v_1840 = sub_163;
    v_1838 = sub_162;
  };
  if (instanciador_c_lampExt) {
    v_1839 = false;
  } else {
    v_1839 = v_1838;
  };
  sub_178 = sub_163;
  if (instanciador_c_lampExt) {
    v_1841 = v_1840;
  } else {
    v_1841 = sub_178;
  };
  if (instanciador_cx) {
    sub_161 = v_1839;
  } else {
    sub_161 = v_1841;
  };
  if (instanciador_ck_15_1) {
    sub_160 = sub_161;
  } else {
    sub_160 = false;
  };
  if (instanciador_l4) {
    v_1844 = sub_160;
  } else {
    v_1844 = sub_161;
  };
  if (instanciador_c4_lamp) {
    v_1845 = v_1844;
  } else {
    v_1845 = sub_161;
  };
  if (instanciador_l4) {
    v_1842 = false;
  } else {
    v_1842 = sub_160;
  };
  if (instanciador_c4_lamp) {
    v_1843 = false;
  } else {
    v_1843 = v_1842;
  };
  if (instanciador_c4) {
    sub_159 = v_1843;
  } else {
    sub_159 = v_1845;
  };
  if (instanciador_ck_13_1) {
    sub_179 = false;
  } else {
    sub_179 = sub_159;
  };
  if (instanciador_c3_lamp) {
    v_1848 = sub_179;
  } else {
    v_1848 = false;
  };
  if (instanciador_l3) {
    v_1849 = v_1848;
  } else {
    v_1849 = false;
  };
  if (instanciador_c3_lamp) {
    v_1846 = sub_159;
  } else {
    v_1846 = sub_179;
  };
  if (instanciador_l3) {
    v_1847 = sub_159;
  } else {
    v_1847 = v_1846;
  };
  if (instanciador_c3) {
    sub_158 = v_1847;
  } else {
    sub_158 = v_1849;
  };
  if (instanciador_ck_11_1) {
    sub_180 = false;
  } else {
    sub_180 = sub_158;
  };
  if (instanciador_c2_lamp) {
    v_1852 = sub_180;
  } else {
    v_1852 = false;
  };
  if (instanciador_l2) {
    v_1853 = v_1852;
  } else {
    v_1853 = false;
  };
  if (instanciador_c2_lamp) {
    v_1850 = sub_158;
  } else {
    v_1850 = sub_180;
  };
  if (instanciador_l2) {
    v_1851 = sub_158;
  } else {
    v_1851 = v_1850;
  };
  if (instanciador_c2) {
    sub_157 = v_1851;
  } else {
    sub_157 = v_1853;
  };
  if (instanciador_ck_9_1) {
    sub_181 = false;
  } else {
    sub_181 = sub_157;
  };
  if (instanciador_c1_lamp) {
    v_1856 = sub_181;
  } else {
    v_1856 = false;
  };
  if (instanciador_l1) {
    v_1857 = v_1856;
  } else {
    v_1857 = false;
  };
  if (instanciador_c1_lamp) {
    v_1854 = sub_157;
  } else {
    v_1854 = sub_181;
  };
  if (instanciador_l1) {
    v_1855 = sub_157;
  } else {
    v_1855 = v_1854;
  };
  if (instanciador_c1) {
    sub_156 = v_1855;
  } else {
    sub_156 = v_1857;
  };
  sub_155 = sub_156;
  sub_154 = sub_155;
  sub_153 = sub_154;
  sub_152 = sub_153;
  if (instanciador_ck_17_1) {
    sub_191 = false;
  } else {
    sub_191 = sub_163;
  };
  if (instanciador_lx) {
    v_1799 = sub_191;
  } else {
    v_1799 = false;
  };
  if (instanciador_c_lampExt) {
    v_1800 = v_1799;
  } else {
    v_1800 = false;
  };
  if (instanciador_lx) {
    v_1797 = sub_163;
  } else {
    v_1797 = sub_191;
  };
  if (instanciador_c_lampExt) {
    v_1798 = sub_178;
  } else {
    v_1798 = v_1797;
  };
  if (instanciador_cx) {
    sub_190 = v_1798;
  } else {
    sub_190 = v_1800;
  };
  if (instanciador_ck_15_1) {
    sub_192 = false;
  } else {
    sub_192 = sub_190;
  };
  if (instanciador_l4) {
    v_1803 = sub_192;
  } else {
    v_1803 = false;
  };
  if (instanciador_c4_lamp) {
    v_1804 = v_1803;
  } else {
    v_1804 = false;
  };
  if (instanciador_l4) {
    v_1801 = sub_190;
  } else {
    v_1801 = sub_192;
  };
  if (instanciador_c4_lamp) {
    v_1802 = sub_190;
  } else {
    v_1802 = v_1801;
  };
  if (instanciador_c4) {
    sub_189 = v_1802;
  } else {
    sub_189 = v_1804;
  };
  if (instanciador_ck_13_1) {
    sub_193 = false;
  } else {
    sub_193 = sub_189;
  };
  if (instanciador_c3_lamp) {
    v_1807 = sub_193;
  } else {
    v_1807 = false;
  };
  if (instanciador_l3) {
    v_1808 = v_1807;
  } else {
    v_1808 = false;
  };
  if (instanciador_c3_lamp) {
    v_1805 = sub_189;
  } else {
    v_1805 = sub_193;
  };
  if (instanciador_l3) {
    v_1806 = sub_189;
  } else {
    v_1806 = v_1805;
  };
  if (instanciador_c3) {
    sub_188 = v_1806;
  } else {
    sub_188 = v_1808;
  };
  if (instanciador_ck_11_1) {
    sub_194 = false;
  } else {
    sub_194 = sub_188;
  };
  if (instanciador_c2_lamp) {
    v_1811 = sub_194;
  } else {
    v_1811 = false;
  };
  if (instanciador_l2) {
    v_1812 = v_1811;
  } else {
    v_1812 = false;
  };
  if (instanciador_c2_lamp) {
    v_1809 = sub_188;
  } else {
    v_1809 = sub_194;
  };
  if (instanciador_l2) {
    v_1810 = sub_188;
  } else {
    v_1810 = v_1809;
  };
  if (instanciador_c2) {
    sub_187 = v_1810;
  } else {
    sub_187 = v_1812;
  };
  if (instanciador_ck_9_1) {
    sub_195 = false;
  } else {
    sub_195 = sub_187;
  };
  if (instanciador_c1_lamp) {
    v_1815 = sub_195;
  } else {
    v_1815 = false;
  };
  if (instanciador_l1) {
    v_1816 = v_1815;
  } else {
    v_1816 = false;
  };
  if (instanciador_c1_lamp) {
    v_1813 = sub_187;
  } else {
    v_1813 = sub_195;
  };
  if (instanciador_l1) {
    v_1814 = sub_187;
  } else {
    v_1814 = v_1813;
  };
  if (instanciador_c1) {
    sub_186 = v_1814;
  } else {
    sub_186 = v_1816;
  };
  sub_185 = sub_186;
  sub_184 = sub_185;
  sub_183 = sub_184;
  sub_182 = sub_183;
  if (instanciador_v_341) {
    sub_151 = sub_182;
  } else {
    sub_151 = sub_152;
  };
  sub_150 = sub_151;
  sub_212 = sub_75;
  if (instanciador_ck_25_1) {
    sub_211 = sub_212;
  } else {
    sub_211 = false;
  };
  if (instanciador_inpSp) {
    v_1763 = sub_211;
  } else {
    v_1763 = sub_212;
  };
  if (instanciador_c_somP) {
    v_1764 = v_1763;
  } else {
    v_1764 = sub_212;
  };
  if (instanciador_inpSp) {
    v_1761 = false;
  } else {
    v_1761 = sub_211;
  };
  if (instanciador_c_somP) {
    v_1762 = false;
  } else {
    v_1762 = v_1761;
  };
  if (instanciador_csp) {
    sub_210 = v_1762;
  } else {
    sub_210 = v_1764;
  };
  if (instanciador_ck_21_1) {
    sub_213 = false;
  } else {
    sub_213 = sub_210;
  };
  if (instanciador_inpMl) {
    v_1767 = sub_213;
  } else {
    v_1767 = false;
  };
  if (instanciador_c_microL) {
    v_1768 = v_1767;
  } else {
    v_1768 = false;
  };
  if (instanciador_inpMl) {
    v_1765 = sub_210;
  } else {
    v_1765 = sub_213;
  };
  if (instanciador_c_microL) {
    v_1766 = sub_210;
  } else {
    v_1766 = v_1765;
  };
  if (instanciador_cml) {
    sub_209 = v_1766;
  } else {
    sub_209 = v_1768;
  };
  if (instanciador_ck_19_1) {
    sub_214 = false;
  } else {
    sub_214 = sub_209;
  };
  if (instanciador_lv) {
    v_1771 = sub_209;
  } else {
    v_1771 = sub_214;
  };
  if (instanciador_cv) {
    v_1772 = v_1771;
  } else {
    v_1772 = false;
  };
  if (instanciador_lv) {
    v_1769 = sub_214;
  } else {
    v_1769 = false;
  };
  if (instanciador_cv) {
    v_1770 = sub_209;
  } else {
    v_1770 = v_1769;
  };
  if (instanciador_c_vent) {
    sub_208 = v_1770;
  } else {
    sub_208 = v_1772;
  };
  if (instanciador_ck_17_1) {
    sub_215 = false;
  } else {
    sub_215 = sub_208;
  };
  if (instanciador_lx) {
    v_1775 = sub_215;
  } else {
    v_1775 = false;
  };
  if (instanciador_c_lampExt) {
    v_1776 = v_1775;
  } else {
    v_1776 = false;
  };
  if (instanciador_lx) {
    v_1773 = sub_208;
  } else {
    v_1773 = sub_215;
  };
  if (instanciador_c_lampExt) {
    v_1774 = sub_208;
  } else {
    v_1774 = v_1773;
  };
  if (instanciador_cx) {
    sub_207 = v_1774;
  } else {
    sub_207 = v_1776;
  };
  if (instanciador_ck_15_1) {
    sub_206 = sub_207;
  } else {
    sub_206 = false;
  };
  if (instanciador_l4) {
    v_1779 = sub_206;
  } else {
    v_1779 = sub_207;
  };
  if (instanciador_c4_lamp) {
    v_1780 = v_1779;
  } else {
    v_1780 = sub_207;
  };
  if (instanciador_l4) {
    v_1777 = false;
  } else {
    v_1777 = sub_206;
  };
  if (instanciador_c4_lamp) {
    v_1778 = false;
  } else {
    v_1778 = v_1777;
  };
  if (instanciador_c4) {
    sub_205 = v_1778;
  } else {
    sub_205 = v_1780;
  };
  if (instanciador_ck_13_1) {
    sub_216 = false;
  } else {
    sub_216 = sub_205;
  };
  if (instanciador_c3_lamp) {
    v_1783 = sub_216;
  } else {
    v_1783 = false;
  };
  if (instanciador_l3) {
    v_1784 = v_1783;
  } else {
    v_1784 = false;
  };
  if (instanciador_c3_lamp) {
    v_1781 = sub_205;
  } else {
    v_1781 = sub_216;
  };
  if (instanciador_l3) {
    v_1782 = sub_205;
  } else {
    v_1782 = v_1781;
  };
  if (instanciador_c3) {
    sub_204 = v_1782;
  } else {
    sub_204 = v_1784;
  };
  if (instanciador_ck_11_1) {
    sub_203 = sub_204;
  } else {
    sub_203 = false;
  };
  if (instanciador_c2_lamp) {
    v_1787 = sub_203;
  } else {
    v_1787 = sub_204;
  };
  if (instanciador_l2) {
    v_1788 = v_1787;
  } else {
    v_1788 = sub_204;
  };
  if (instanciador_c2_lamp) {
    v_1785 = false;
  } else {
    v_1785 = sub_203;
  };
  if (instanciador_l2) {
    v_1786 = false;
  } else {
    v_1786 = v_1785;
  };
  if (instanciador_c2) {
    sub_202 = v_1786;
  } else {
    sub_202 = v_1788;
  };
  if (instanciador_ck_9_1) {
    sub_201 = sub_202;
  } else {
    sub_201 = false;
  };
  if (instanciador_c1_lamp) {
    v_1791 = sub_201;
  } else {
    v_1791 = sub_202;
  };
  if (instanciador_l1) {
    v_1792 = v_1791;
  } else {
    v_1792 = sub_202;
  };
  if (instanciador_c1_lamp) {
    v_1789 = false;
  } else {
    v_1789 = sub_201;
  };
  if (instanciador_l1) {
    v_1790 = false;
  } else {
    v_1790 = v_1789;
  };
  if (instanciador_c1) {
    sub_200 = v_1790;
  } else {
    sub_200 = v_1792;
  };
  sub_199 = sub_200;
  sub_198 = sub_199;
  sub_248 = sub_80;
  sub_247 = sub_248;
  sub_246 = sub_247;
  sub_245 = sub_246;
  sub_244 = sub_245;
  sub_243 = sub_244;
  sub_242 = sub_243;
  sub_241 = sub_242;
  sub_240 = sub_241;
  sub_239 = sub_240;
  sub_238 = sub_239;
  sub_237 = sub_238;
  sub_236 = sub_237;
  sub_235 = sub_236;
  sub_234 = sub_235;
  sub_233 = sub_234;
  sub_232 = sub_233;
  sub_231 = sub_232;
  sub_230 = sub_231;
  sub_229 = sub_230;
  sub_228 = sub_229;
  sub_227 = sub_228;
  sub_226 = sub_227;
  sub_225 = sub_226;
  sub_224 = sub_225;
  sub_223 = sub_224;
  sub_222 = sub_223;
  sub_221 = sub_222;
  sub_220 = sub_221;
  sub_219 = sub_220;
  sub_218 = sub_219;
  if (instanciador_neutro_input) {
    v_1793 = sub_218;
  } else {
    v_1793 = sub_156;
  };
  if (instanciador_ck_23_1) {
    sub_268 = sub_171;
  } else {
    sub_268 = false;
  };
  if (instanciador_inpMp) {
    v_1726 = sub_268;
  } else {
    v_1726 = sub_171;
  };
  if (instanciador_c_microP) {
    v_1727 = v_1726;
  } else {
    v_1727 = sub_170;
  };
  if (instanciador_inpMp) {
    v_1724 = false;
  } else {
    v_1724 = sub_268;
  };
  if (instanciador_c_microP) {
    v_1725 = false;
  } else {
    v_1725 = v_1724;
  };
  if (instanciador_cmp) {
    sub_267 = v_1725;
  } else {
    sub_267 = v_1727;
  };
  sub_266 = sub_267;
  if (instanciador_ck_29_1) {
    v_1728 = sub_266;
  } else {
    v_1728 = sub_137;
  };
  if (instanciador_inpProj) {
    sub_265 = v_1728;
  } else {
    sub_265 = sub_266;
  };
  if (instanciador_ck_25_1) {
    sub_264 = sub_265;
  } else {
    sub_264 = false;
  };
  if (instanciador_inpSp) {
    v_1731 = sub_264;
  } else {
    v_1731 = sub_265;
  };
  if (instanciador_c_somP) {
    v_1732 = v_1731;
  } else {
    v_1732 = sub_265;
  };
  if (instanciador_inpSp) {
    v_1729 = false;
  } else {
    v_1729 = sub_264;
  };
  if (instanciador_c_somP) {
    v_1730 = false;
  } else {
    v_1730 = v_1729;
  };
  if (instanciador_csp) {
    sub_263 = v_1730;
  } else {
    sub_263 = v_1732;
  };
  if (instanciador_ck_21_1) {
    sub_262 = sub_263;
  } else {
    sub_262 = false;
  };
  if (instanciador_inpMl) {
    v_1735 = sub_262;
  } else {
    v_1735 = sub_263;
  };
  if (instanciador_c_microL) {
    v_1736 = v_1735;
  } else {
    v_1736 = sub_263;
  };
  if (instanciador_inpMl) {
    v_1733 = false;
  } else {
    v_1733 = sub_262;
  };
  if (instanciador_c_microL) {
    v_1734 = false;
  } else {
    v_1734 = v_1733;
  };
  if (instanciador_cml) {
    sub_261 = v_1734;
  } else {
    sub_261 = v_1736;
  };
  if (instanciador_ck_19_1) {
    sub_260 = sub_261;
  } else {
    sub_260 = false;
  };
  if (instanciador_lv) {
    v_1739 = false;
  } else {
    v_1739 = sub_260;
  };
  if (instanciador_cv) {
    v_1740 = v_1739;
  } else {
    v_1740 = sub_261;
  };
  if (instanciador_lv) {
    v_1737 = sub_260;
  } else {
    v_1737 = sub_261;
  };
  if (instanciador_cv) {
    v_1738 = false;
  } else {
    v_1738 = v_1737;
  };
  if (instanciador_c_vent) {
    sub_259 = v_1738;
  } else {
    sub_259 = v_1740;
  };
  if (instanciador_ck_17_1) {
    sub_258 = sub_259;
  } else {
    sub_258 = false;
  };
  if (instanciador_lx) {
    v_1743 = sub_258;
  } else {
    v_1743 = sub_259;
  };
  if (instanciador_c_lampExt) {
    v_1744 = v_1743;
  } else {
    v_1744 = sub_259;
  };
  if (instanciador_lx) {
    v_1741 = false;
  } else {
    v_1741 = sub_258;
  };
  if (instanciador_c_lampExt) {
    v_1742 = false;
  } else {
    v_1742 = v_1741;
  };
  if (instanciador_cx) {
    sub_257 = v_1742;
  } else {
    sub_257 = v_1744;
  };
  if (instanciador_ck_15_1) {
    sub_256 = sub_257;
  } else {
    sub_256 = false;
  };
  if (instanciador_l4) {
    v_1747 = sub_256;
  } else {
    v_1747 = sub_257;
  };
  if (instanciador_c4_lamp) {
    v_1748 = v_1747;
  } else {
    v_1748 = sub_257;
  };
  if (instanciador_l4) {
    v_1745 = false;
  } else {
    v_1745 = sub_256;
  };
  if (instanciador_c4_lamp) {
    v_1746 = false;
  } else {
    v_1746 = v_1745;
  };
  if (instanciador_c4) {
    sub_255 = v_1746;
  } else {
    sub_255 = v_1748;
  };
  if (instanciador_ck_13_1) {
    sub_254 = sub_255;
  } else {
    sub_254 = false;
  };
  if (instanciador_c3_lamp) {
    v_1751 = sub_254;
  } else {
    v_1751 = sub_255;
  };
  if (instanciador_l3) {
    v_1752 = v_1751;
  } else {
    v_1752 = sub_255;
  };
  if (instanciador_c3_lamp) {
    v_1749 = false;
  } else {
    v_1749 = sub_254;
  };
  if (instanciador_l3) {
    v_1750 = false;
  } else {
    v_1750 = v_1749;
  };
  if (instanciador_c3) {
    sub_253 = v_1750;
  } else {
    sub_253 = v_1752;
  };
  if (instanciador_ck_11_1) {
    sub_252 = sub_253;
  } else {
    sub_252 = false;
  };
  if (instanciador_c2_lamp) {
    v_1755 = sub_252;
  } else {
    v_1755 = sub_253;
  };
  if (instanciador_l2) {
    v_1756 = v_1755;
  } else {
    v_1756 = sub_253;
  };
  if (instanciador_c2_lamp) {
    v_1753 = false;
  } else {
    v_1753 = sub_252;
  };
  if (instanciador_l2) {
    v_1754 = false;
  } else {
    v_1754 = v_1753;
  };
  if (instanciador_c2) {
    sub_251 = v_1754;
  } else {
    sub_251 = v_1756;
  };
  if (instanciador_ck_9_1) {
    sub_250 = sub_251;
  } else {
    sub_250 = false;
  };
  if (instanciador_c1_lamp) {
    v_1759 = sub_250;
  } else {
    v_1759 = sub_251;
  };
  if (instanciador_l1) {
    v_1760 = v_1759;
  } else {
    v_1760 = sub_251;
  };
  if (instanciador_c1_lamp) {
    v_1757 = false;
  } else {
    v_1757 = sub_250;
  };
  if (instanciador_l1) {
    v_1758 = false;
  } else {
    v_1758 = v_1757;
  };
  if (instanciador_c1) {
    sub_249 = v_1758;
  } else {
    sub_249 = v_1760;
  };
  if (instanciador_neutro_input) {
    sub_217 = sub_218;
  } else {
    sub_217 = sub_249;
  };
  if (instanciador_seguranca_input) {
    v_1794 = sub_217;
  } else {
    v_1794 = v_1793;
  };
  if (instanciador_domingol_input) {
    v_1795 = sub_198;
  } else {
    v_1795 = v_1794;
  };
  if (instanciador_domingo_input) {
    sub_197 = sub_183;
  } else {
    sub_197 = v_1795;
  };
  if (instanciador_v_341) {
    v_1796 = sub_182;
  } else {
    v_1796 = sub_197;
  };
  if (instanciador_sexta_input) {
    sub_196 = sub_182;
  } else {
    sub_196 = v_1796;
  };
  if (instanciador_v_339) {
    v_1858 = sub_196;
  } else {
    v_1858 = sub_150;
  };
  if (instanciador_neutro_input) {
    sub_273 = sub_218;
  } else {
    sub_273 = sub_186;
  };
  if (instanciador_seguranca_input) {
    v_1723 = sub_217;
  } else {
    v_1723 = sub_273;
  };
  if (instanciador_domingol_input) {
    sub_272 = sub_198;
  } else {
    sub_272 = v_1723;
  };
  if (instanciador_domingo_input) {
    sub_271 = sub_183;
  } else {
    sub_271 = sub_272;
  };
  if (instanciador_v_341) {
    sub_270 = sub_182;
  } else {
    sub_270 = sub_271;
  };
  sub_269 = sub_270;
  if (instanciador_v_339) {
    v_1859 = sub_196;
  } else {
    v_1859 = sub_269;
  };
  if (instanciador_ebd_input) {
    sub_149 = v_1858;
  } else {
    sub_149 = v_1859;
  };
  if (instanciador_seguranca_input) {
    v_1719 = sub_249;
  } else {
    v_1719 = sub_218;
  };
  if (instanciador_domingol_input) {
    v_1720 = sub_198;
    v_1718 = sub_198;
  } else {
    v_1720 = v_1719;
    v_1718 = sub_184;
  };
  if (instanciador_domingo_input) {
    v_1721 = v_1718;
  } else {
    v_1721 = v_1720;
  };
  if (instanciador_domingol_input) {
    v_1717 = sub_198;
    v_1716 = sub_198;
  } else {
    v_1717 = sub_217;
    v_1716 = sub_273;
  };
  if (instanciador_domingo_input) {
    sub_275 = v_1716;
  } else {
    sub_275 = v_1717;
  };
  if (instanciador_v_341) {
    v_1722 = v_1721;
  } else {
    v_1722 = sub_275;
  };
  if (instanciador_sexta_input) {
    sub_274 = sub_182;
  } else {
    sub_274 = v_1722;
  };
  if (instanciador_neutro_input) {
    v = sub_218;
  } else {
    v = sub_200;
  };
  if (instanciador_seguranca_input) {
    sub_277 = sub_217;
  } else {
    sub_277 = v;
  };
  if (instanciador_domingo_input) {
    sub_276 = sub_183;
  } else {
    sub_276 = sub_277;
  };
  if (instanciador_v_341) {
    v_2022 = sub_272;
  } else {
    v_2022 = sub_276;
  };
  if (instanciador_sexta_input) {
    v_2023 = sub_182;
  } else {
    v_2023 = v_2022;
  };
  if (instanciador_v_339) {
    v_2024 = v_2023;
  } else {
    v_2024 = sub_274;
  };
  if (instanciador_ebd_input) {
    v_2025 = sub_152;
  } else {
    v_2025 = v_2024;
  };
  if (instanciador_v_340) {
    v_2026 = v_2025;
  } else {
    v_2026 = sub_149;
  };
  if (p_instanciador_c_proj) {
    sub_0 = v_2026;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c_proj = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_cmp_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_c_microP,
  int instanciador_cml, int instanciador_c_microL, int instanciador_csl,
  int instanciador_c_somL, int instanciador_csp, int instanciador_c_somP,
  int instanciador_c_vent, int instanciador_cv, int instanciador_cx,
  int instanciador_c4, int instanciador_c3, int instanciador_c2,
  int instanciador_c1, int instanciador_c_lampExt, int instanciador_c4_lamp,
  int instanciador_c3_lamp, int instanciador_c2_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_cmp_out* _out) {
  
  int v_2317;
  int v_2316;
  int v_2315;
  int v_2314;
  int v_2313;
  int v_2312;
  int v_2311;
  int v_2310;
  int v_2309;
  int v_2308;
  int v_2307;
  int v_2306;
  int v_2305;
  int v_2304;
  int v_2303;
  int v_2302;
  int v_2301;
  int v_2300;
  int v_2299;
  int v_2298;
  int v_2297;
  int v_2296;
  int v_2295;
  int v_2294;
  int v_2293;
  int v_2292;
  int v_2291;
  int v_2290;
  int v_2289;
  int v_2288;
  int v_2287;
  int v_2286;
  int v_2285;
  int v_2284;
  int v_2283;
  int v_2282;
  int v_2281;
  int v_2280;
  int v_2279;
  int v_2278;
  int v_2277;
  int v_2276;
  int v_2275;
  int v_2274;
  int v_2273;
  int v_2272;
  int v_2271;
  int v_2270;
  int v_2269;
  int v_2268;
  int v_2267;
  int v_2266;
  int v_2265;
  int v_2264;
  int v_2263;
  int v_2262;
  int v_2261;
  int v_2260;
  int v_2259;
  int v_2258;
  int v_2257;
  int v_2256;
  int v_2255;
  int v_2254;
  int v_2253;
  int v_2252;
  int v_2251;
  int v_2250;
  int v_2249;
  int v_2248;
  int v_2247;
  int v_2246;
  int v_2245;
  int v_2244;
  int v_2243;
  int v_2242;
  int v_2241;
  int v_2240;
  int v_2239;
  int v_2238;
  int v_2237;
  int v_2236;
  int v_2235;
  int v_2234;
  int v_2233;
  int v_2232;
  int v_2231;
  int v_2230;
  int v_2229;
  int v_2228;
  int v_2227;
  int v_2226;
  int v_2225;
  int v_2224;
  int v_2223;
  int v_2222;
  int v_2221;
  int v_2220;
  int v_2219;
  int v_2218;
  int v_2217;
  int v_2216;
  int v_2215;
  int v_2214;
  int v_2213;
  int v_2212;
  int v_2211;
  int v_2210;
  int v_2209;
  int v_2208;
  int v_2207;
  int v_2206;
  int v_2205;
  int v_2204;
  int v_2203;
  int v_2202;
  int v_2201;
  int v_2200;
  int v_2199;
  int v_2198;
  int v_2197;
  int v_2196;
  int v_2195;
  int v_2194;
  int v_2193;
  int v_2192;
  int v_2191;
  int v_2190;
  int v_2189;
  int v_2188;
  int v_2187;
  int v_2186;
  int v_2185;
  int v_2184;
  int v_2183;
  int v_2182;
  int v_2181;
  int v_2180;
  int v_2179;
  int v_2178;
  int v_2177;
  int v_2176;
  int v_2175;
  int v_2174;
  int v_2173;
  int v_2172;
  int v_2171;
  int v_2170;
  int v_2169;
  int v_2168;
  int v_2167;
  int v_2166;
  int v_2165;
  int v_2164;
  int v_2163;
  int v_2162;
  int v_2161;
  int v_2160;
  int v_2159;
  int v_2158;
  int v_2157;
  int v_2156;
  int v_2155;
  int v_2154;
  int v_2153;
  int v_2152;
  int v_2151;
  int v_2150;
  int v_2149;
  int v_2148;
  int v_2147;
  int v_2146;
  int v_2145;
  int v_2144;
  int v_2143;
  int v_2142;
  int v_2141;
  int v_2140;
  int v_2139;
  int v_2138;
  int v_2137;
  int v_2136;
  int v_2135;
  int v_2134;
  int v_2133;
  int v_2132;
  int v_2131;
  int v_2130;
  int v_2129;
  int v_2128;
  int v_2127;
  int v_2126;
  int v_2125;
  int v_2124;
  int v_2123;
  int v_2122;
  int v_2121;
  int v_2120;
  int v_2119;
  int v_2118;
  int v_2117;
  int v_2116;
  int v_2115;
  int v_2114;
  int v_2113;
  int v_2112;
  int v_2111;
  int v_2110;
  int v_2109;
  int v_2108;
  int v_2107;
  int v_2106;
  int v_2105;
  int v_2104;
  int v_2103;
  int v_2102;
  int v_2101;
  int v_2100;
  int v_2099;
  int v_2098;
  int v_2097;
  int v_2096;
  int v_2095;
  int v_2094;
  int v_2093;
  int v_2092;
  int v_2091;
  int v_2090;
  int v_2089;
  int v_2088;
  int v_2087;
  int v_2086;
  int v_2085;
  int v_2084;
  int v_2083;
  int v_2082;
  int v_2081;
  int v_2080;
  int v_2079;
  int v_2078;
  int v_2077;
  int v_2076;
  int v_2075;
  int v_2074;
  int v_2073;
  int v_2072;
  int v_2071;
  int v_2070;
  int v_2069;
  int v_2068;
  int v_2067;
  int v_2066;
  int v_2065;
  int v_2064;
  int v_2063;
  int v_2062;
  int v_2061;
  int v_2060;
  int v_2059;
  int v_2058;
  int v_2057;
  int v_2056;
  int v_2055;
  int v_2054;
  int v_2053;
  int v_2052;
  int v_2051;
  int v_2050;
  int v_2049;
  int v_2048;
  int v_2047;
  int v_2046;
  int v_2045;
  int v_2044;
  int v_2043;
  int v_2042;
  int v_2041;
  int v_2040;
  int v_2039;
  int v_2038;
  int v_2037;
  int v_2036;
  int v_2035;
  int v_2034;
  int v_2033;
  int v_2032;
  int v_2031;
  int v_2030;
  int v_2029;
  int v_2028;
  int v_2027;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  int sub_246;
  int sub_247;
  int sub_248;
  int sub_249;
  int sub_250;
  int sub_251;
  int sub_252;
  int sub_253;
  int sub_254;
  int sub_255;
  int sub_256;
  int sub_257;
  int sub_258;
  int sub_259;
  int sub_260;
  int sub_261;
  int sub_262;
  int sub_263;
  int sub_264;
  int sub_265;
  int sub_266;
  int sub_267;
  int sub_268;
  int sub_269;
  int sub_270;
  sub_26 = (instanciador_inpSl&&false);
  if (instanciador_c_somL) {
    v_2271 = false;
  } else {
    v_2271 = sub_26;
  };
  if (instanciador_ck_27_1) {
    v_2272 = v_2271;
  } else {
    v_2272 = false;
  };
  sub_28 = false;
  if (instanciador_c_somL) {
    sub_27 = sub_26;
  } else {
    sub_27 = sub_28;
  };
  sub_29 = sub_28;
  if (instanciador_ck_27_1) {
    v_2273 = sub_29;
  } else {
    v_2273 = sub_27;
  };
  if (instanciador_csl) {
    sub_25 = v_2272;
  } else {
    sub_25 = v_2273;
  };
  sub_24 = sub_25;
  v_2267 = !(instanciador_inpSl);
  sub_32 = (v_2267||false);
  if (instanciador_c_somL) {
    v_2268 = false;
  } else {
    v_2268 = sub_32;
  };
  if (instanciador_ck_27_1) {
    v_2269 = v_2268;
  } else {
    v_2269 = false;
  };
  sub_34 = true;
  if (instanciador_c_somL) {
    sub_33 = sub_32;
  } else {
    sub_33 = sub_34;
  };
  sub_35 = sub_34;
  if (instanciador_ck_27_1) {
    v_2270 = sub_35;
  } else {
    v_2270 = sub_33;
  };
  if (instanciador_csl) {
    sub_31 = v_2269;
  } else {
    sub_31 = v_2270;
  };
  sub_30 = sub_31;
  if (instanciador_ck_23_1) {
    sub_23 = sub_30;
  } else {
    sub_23 = sub_24;
  };
  if (instanciador_inpMp) {
    v_2274 = sub_23;
  } else {
    v_2274 = sub_30;
  };
  if (instanciador_ck_23_1) {
    v_2266 = false;
  } else {
    v_2266 = sub_30;
  };
  if (instanciador_inpMp) {
    sub_36 = sub_30;
  } else {
    sub_36 = v_2266;
  };
  if (instanciador_c_microP) {
    sub_22 = v_2274;
  } else {
    sub_22 = sub_36;
  };
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (instanciador_ck_25_1) {
    sub_37 = false;
  } else {
    sub_37 = sub_20;
  };
  if (instanciador_inpSp) {
    v_2277 = sub_37;
  } else {
    v_2277 = false;
  };
  if (instanciador_c_somP) {
    v_2278 = v_2277;
  } else {
    v_2278 = false;
  };
  if (instanciador_inpSp) {
    v_2275 = sub_20;
  } else {
    v_2275 = sub_37;
  };
  if (instanciador_c_somP) {
    v_2276 = sub_20;
  } else {
    v_2276 = v_2275;
  };
  if (instanciador_csp) {
    sub_19 = v_2276;
  } else {
    sub_19 = v_2278;
  };
  if (instanciador_ck_21_1) {
    sub_18 = sub_19;
  } else {
    sub_18 = false;
  };
  if (instanciador_inpMl) {
    v_2281 = sub_18;
  } else {
    v_2281 = sub_19;
  };
  if (instanciador_c_microL) {
    v_2282 = v_2281;
  } else {
    v_2282 = sub_19;
  };
  if (instanciador_inpMl) {
    v_2279 = false;
  } else {
    v_2279 = sub_18;
  };
  if (instanciador_c_microL) {
    v_2280 = false;
  } else {
    v_2280 = v_2279;
  };
  if (instanciador_cml) {
    sub_17 = v_2280;
  } else {
    sub_17 = v_2282;
  };
  if (instanciador_ck_19_1) {
    sub_38 = false;
  } else {
    sub_38 = sub_17;
  };
  if (instanciador_lv) {
    v_2285 = sub_17;
  } else {
    v_2285 = sub_38;
  };
  if (instanciador_cv) {
    v_2286 = v_2285;
  } else {
    v_2286 = false;
  };
  if (instanciador_lv) {
    v_2283 = sub_38;
  } else {
    v_2283 = false;
  };
  if (instanciador_cv) {
    v_2284 = sub_17;
  } else {
    v_2284 = v_2283;
  };
  if (instanciador_c_vent) {
    sub_16 = v_2284;
  } else {
    sub_16 = v_2286;
  };
  if (instanciador_ck_17_1) {
    sub_15 = sub_16;
  } else {
    sub_15 = false;
  };
  if (instanciador_lx) {
    v_2289 = sub_15;
    v_2287 = false;
  } else {
    v_2289 = sub_16;
    v_2287 = sub_15;
  };
  if (instanciador_c_lampExt) {
    v_2288 = false;
  } else {
    v_2288 = v_2287;
  };
  sub_39 = sub_16;
  if (instanciador_c_lampExt) {
    v_2290 = v_2289;
  } else {
    v_2290 = sub_39;
  };
  if (instanciador_cx) {
    sub_14 = v_2288;
  } else {
    sub_14 = v_2290;
  };
  if (instanciador_ck_15_1) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (instanciador_l4) {
    v_2293 = sub_13;
  } else {
    v_2293 = sub_14;
  };
  if (instanciador_c4_lamp) {
    v_2294 = v_2293;
  } else {
    v_2294 = sub_14;
  };
  if (instanciador_l4) {
    v_2291 = false;
  } else {
    v_2291 = sub_13;
  };
  if (instanciador_c4_lamp) {
    v_2292 = false;
  } else {
    v_2292 = v_2291;
  };
  if (instanciador_c4) {
    sub_12 = v_2292;
  } else {
    sub_12 = v_2294;
  };
  if (instanciador_ck_13_1) {
    sub_40 = false;
  } else {
    sub_40 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_2297 = sub_40;
  } else {
    v_2297 = false;
  };
  if (instanciador_l3) {
    v_2298 = v_2297;
  } else {
    v_2298 = false;
  };
  if (instanciador_c3_lamp) {
    v_2295 = sub_12;
  } else {
    v_2295 = sub_40;
  };
  if (instanciador_l3) {
    v_2296 = sub_12;
  } else {
    v_2296 = v_2295;
  };
  if (instanciador_c3) {
    sub_11 = v_2296;
  } else {
    sub_11 = v_2298;
  };
  if (instanciador_ck_11_1) {
    sub_41 = false;
  } else {
    sub_41 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_2301 = sub_41;
  } else {
    v_2301 = false;
  };
  if (instanciador_l2) {
    v_2302 = v_2301;
  } else {
    v_2302 = false;
  };
  if (instanciador_c2_lamp) {
    v_2299 = sub_11;
  } else {
    v_2299 = sub_41;
  };
  if (instanciador_l2) {
    v_2300 = sub_11;
  } else {
    v_2300 = v_2299;
  };
  if (instanciador_c2) {
    sub_10 = v_2300;
  } else {
    sub_10 = v_2302;
  };
  if (instanciador_ck_9_1) {
    sub_42 = false;
  } else {
    sub_42 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_2305 = sub_42;
  } else {
    v_2305 = false;
  };
  if (instanciador_l1) {
    v_2306 = v_2305;
  } else {
    v_2306 = false;
  };
  if (instanciador_c1_lamp) {
    v_2303 = sub_10;
  } else {
    v_2303 = sub_42;
  };
  if (instanciador_l1) {
    v_2304 = sub_10;
  } else {
    v_2304 = v_2303;
  };
  if (instanciador_c1) {
    sub_9 = v_2304;
  } else {
    sub_9 = v_2306;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (instanciador_ck_17_1) {
    sub_52 = false;
  } else {
    sub_52 = sub_16;
  };
  if (instanciador_lx) {
    v_2248 = sub_52;
  } else {
    v_2248 = false;
  };
  if (instanciador_c_lampExt) {
    v_2249 = v_2248;
  } else {
    v_2249 = false;
  };
  if (instanciador_lx) {
    v_2246 = sub_16;
  } else {
    v_2246 = sub_52;
  };
  if (instanciador_c_lampExt) {
    v_2247 = sub_39;
  } else {
    v_2247 = v_2246;
  };
  if (instanciador_cx) {
    sub_51 = v_2247;
  } else {
    sub_51 = v_2249;
  };
  if (instanciador_ck_15_1) {
    sub_53 = false;
  } else {
    sub_53 = sub_51;
  };
  if (instanciador_l4) {
    v_2252 = sub_53;
  } else {
    v_2252 = false;
  };
  if (instanciador_c4_lamp) {
    v_2253 = v_2252;
  } else {
    v_2253 = false;
  };
  if (instanciador_l4) {
    v_2250 = sub_51;
  } else {
    v_2250 = sub_53;
  };
  if (instanciador_c4_lamp) {
    v_2251 = sub_51;
  } else {
    v_2251 = v_2250;
  };
  if (instanciador_c4) {
    sub_50 = v_2251;
  } else {
    sub_50 = v_2253;
  };
  if (instanciador_ck_13_1) {
    sub_54 = false;
  } else {
    sub_54 = sub_50;
  };
  if (instanciador_c3_lamp) {
    v_2256 = sub_54;
  } else {
    v_2256 = false;
  };
  if (instanciador_l3) {
    v_2257 = v_2256;
  } else {
    v_2257 = false;
  };
  if (instanciador_c3_lamp) {
    v_2254 = sub_50;
  } else {
    v_2254 = sub_54;
  };
  if (instanciador_l3) {
    v_2255 = sub_50;
  } else {
    v_2255 = v_2254;
  };
  if (instanciador_c3) {
    sub_49 = v_2255;
  } else {
    sub_49 = v_2257;
  };
  if (instanciador_ck_11_1) {
    sub_55 = false;
  } else {
    sub_55 = sub_49;
  };
  if (instanciador_c2_lamp) {
    v_2260 = sub_55;
  } else {
    v_2260 = false;
  };
  if (instanciador_l2) {
    v_2261 = v_2260;
  } else {
    v_2261 = false;
  };
  if (instanciador_c2_lamp) {
    v_2258 = sub_49;
  } else {
    v_2258 = sub_55;
  };
  if (instanciador_l2) {
    v_2259 = sub_49;
  } else {
    v_2259 = v_2258;
  };
  if (instanciador_c2) {
    sub_48 = v_2259;
  } else {
    sub_48 = v_2261;
  };
  if (instanciador_ck_9_1) {
    sub_56 = false;
  } else {
    sub_56 = sub_48;
  };
  if (instanciador_c1_lamp) {
    v_2264 = sub_56;
  } else {
    v_2264 = false;
  };
  if (instanciador_l1) {
    v_2265 = v_2264;
  } else {
    v_2265 = false;
  };
  if (instanciador_c1_lamp) {
    v_2262 = sub_48;
  } else {
    v_2262 = sub_56;
  };
  if (instanciador_l1) {
    v_2263 = sub_48;
  } else {
    v_2263 = v_2262;
  };
  if (instanciador_c1) {
    sub_47 = v_2263;
  } else {
    sub_47 = v_2265;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  if (instanciador_v_341) {
    sub_4 = sub_43;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  v_2205 = !(instanciador_inpSl);
  sub_79 = (v_2205&&false);
  if (instanciador_c_somL) {
    v_2206 = sub_28;
  } else {
    v_2206 = sub_79;
  };
  if (instanciador_ck_27_1) {
    v_2207 = v_2206;
  } else {
    v_2207 = sub_29;
  };
  if (instanciador_c_somL) {
    sub_80 = sub_79;
  } else {
    sub_80 = false;
  };
  if (instanciador_ck_27_1) {
    v_2208 = false;
  } else {
    v_2208 = sub_80;
  };
  if (instanciador_csl) {
    sub_78 = v_2207;
  } else {
    sub_78 = v_2208;
  };
  sub_77 = sub_78;
  if (instanciador_ck_23_1) {
    v_2209 = sub_77;
  } else {
    v_2209 = false;
  };
  if (instanciador_inpMp) {
    sub_76 = v_2209;
  } else {
    sub_76 = sub_77;
  };
  if (instanciador_c_microP) {
    sub_75 = sub_76;
  } else {
    sub_75 = sub_77;
  };
  sub_74 = sub_75;
  sub_73 = sub_74;
  if (instanciador_ck_25_1) {
    sub_72 = sub_73;
  } else {
    sub_72 = false;
  };
  if (instanciador_inpSp) {
    v_2212 = sub_72;
  } else {
    v_2212 = sub_73;
  };
  if (instanciador_c_somP) {
    v_2213 = v_2212;
  } else {
    v_2213 = sub_73;
  };
  if (instanciador_inpSp) {
    v_2210 = false;
  } else {
    v_2210 = sub_72;
  };
  if (instanciador_c_somP) {
    v_2211 = false;
  } else {
    v_2211 = v_2210;
  };
  if (instanciador_csp) {
    sub_71 = v_2211;
  } else {
    sub_71 = v_2213;
  };
  if (instanciador_ck_21_1) {
    sub_81 = false;
  } else {
    sub_81 = sub_71;
  };
  if (instanciador_inpMl) {
    v_2216 = sub_81;
  } else {
    v_2216 = false;
  };
  if (instanciador_c_microL) {
    v_2217 = v_2216;
  } else {
    v_2217 = false;
  };
  if (instanciador_inpMl) {
    v_2214 = sub_71;
  } else {
    v_2214 = sub_81;
  };
  if (instanciador_c_microL) {
    v_2215 = sub_71;
  } else {
    v_2215 = v_2214;
  };
  if (instanciador_cml) {
    sub_70 = v_2215;
  } else {
    sub_70 = v_2217;
  };
  if (instanciador_ck_19_1) {
    sub_82 = false;
  } else {
    sub_82 = sub_70;
  };
  if (instanciador_lv) {
    v_2220 = sub_70;
  } else {
    v_2220 = sub_82;
  };
  if (instanciador_cv) {
    v_2221 = v_2220;
  } else {
    v_2221 = false;
  };
  if (instanciador_lv) {
    v_2218 = sub_82;
  } else {
    v_2218 = false;
  };
  if (instanciador_cv) {
    v_2219 = sub_70;
  } else {
    v_2219 = v_2218;
  };
  if (instanciador_c_vent) {
    sub_69 = v_2219;
  } else {
    sub_69 = v_2221;
  };
  if (instanciador_ck_17_1) {
    sub_83 = false;
  } else {
    sub_83 = sub_69;
  };
  if (instanciador_lx) {
    v_2224 = sub_83;
  } else {
    v_2224 = false;
  };
  if (instanciador_c_lampExt) {
    v_2225 = v_2224;
  } else {
    v_2225 = false;
  };
  if (instanciador_lx) {
    v_2222 = sub_69;
  } else {
    v_2222 = sub_83;
  };
  if (instanciador_c_lampExt) {
    v_2223 = sub_69;
  } else {
    v_2223 = v_2222;
  };
  if (instanciador_cx) {
    sub_68 = v_2223;
  } else {
    sub_68 = v_2225;
  };
  if (instanciador_ck_15_1) {
    sub_67 = sub_68;
  } else {
    sub_67 = false;
  };
  if (instanciador_l4) {
    v_2228 = sub_67;
  } else {
    v_2228 = sub_68;
  };
  if (instanciador_c4_lamp) {
    v_2229 = v_2228;
  } else {
    v_2229 = sub_68;
  };
  if (instanciador_l4) {
    v_2226 = false;
  } else {
    v_2226 = sub_67;
  };
  if (instanciador_c4_lamp) {
    v_2227 = false;
  } else {
    v_2227 = v_2226;
  };
  if (instanciador_c4) {
    sub_66 = v_2227;
  } else {
    sub_66 = v_2229;
  };
  if (instanciador_ck_13_1) {
    sub_84 = false;
  } else {
    sub_84 = sub_66;
  };
  if (instanciador_c3_lamp) {
    v_2232 = sub_84;
  } else {
    v_2232 = false;
  };
  if (instanciador_l3) {
    v_2233 = v_2232;
  } else {
    v_2233 = false;
  };
  if (instanciador_c3_lamp) {
    v_2230 = sub_66;
  } else {
    v_2230 = sub_84;
  };
  if (instanciador_l3) {
    v_2231 = sub_66;
  } else {
    v_2231 = v_2230;
  };
  if (instanciador_c3) {
    sub_65 = v_2231;
  } else {
    sub_65 = v_2233;
  };
  if (instanciador_ck_11_1) {
    sub_64 = sub_65;
  } else {
    sub_64 = false;
  };
  if (instanciador_c2_lamp) {
    v_2236 = sub_64;
  } else {
    v_2236 = sub_65;
  };
  if (instanciador_l2) {
    v_2237 = v_2236;
  } else {
    v_2237 = sub_65;
  };
  if (instanciador_c2_lamp) {
    v_2234 = false;
  } else {
    v_2234 = sub_64;
  };
  if (instanciador_l2) {
    v_2235 = false;
  } else {
    v_2235 = v_2234;
  };
  if (instanciador_c2) {
    sub_63 = v_2235;
  } else {
    sub_63 = v_2237;
  };
  if (instanciador_ck_9_1) {
    sub_62 = sub_63;
  } else {
    sub_62 = false;
  };
  if (instanciador_c1_lamp) {
    v_2240 = sub_62;
  } else {
    v_2240 = sub_63;
  };
  if (instanciador_l1) {
    v_2241 = v_2240;
  } else {
    v_2241 = sub_63;
  };
  if (instanciador_c1_lamp) {
    v_2238 = false;
  } else {
    v_2238 = sub_62;
  };
  if (instanciador_l1) {
    v_2239 = false;
  } else {
    v_2239 = v_2238;
  };
  if (instanciador_c1) {
    sub_61 = v_2239;
  } else {
    sub_61 = v_2241;
  };
  sub_60 = sub_61;
  sub_59 = sub_60;
  sub_115 = sub_29;
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  sub_90 = sub_91;
  sub_89 = sub_90;
  sub_88 = sub_89;
  sub_87 = sub_88;
  sub_86 = sub_87;
  if (instanciador_neutro_input) {
    v_2242 = sub_86;
  } else {
    v_2242 = sub_9;
  };
  if (instanciador_ck_23_1) {
    v_2172 = sub_24;
  } else {
    v_2172 = false;
  };
  if (instanciador_inpMp) {
    sub_135 = v_2172;
  } else {
    sub_135 = sub_24;
  };
  if (instanciador_c_microP) {
    sub_134 = sub_135;
  } else {
    sub_134 = sub_24;
  };
  sub_133 = sub_134;
  sub_132 = sub_133;
  if (instanciador_ck_25_1) {
    sub_131 = sub_132;
  } else {
    sub_131 = false;
  };
  if (instanciador_inpSp) {
    v_2175 = sub_131;
  } else {
    v_2175 = sub_132;
  };
  if (instanciador_c_somP) {
    v_2176 = v_2175;
  } else {
    v_2176 = sub_132;
  };
  if (instanciador_inpSp) {
    v_2173 = false;
  } else {
    v_2173 = sub_131;
  };
  if (instanciador_c_somP) {
    v_2174 = false;
  } else {
    v_2174 = v_2173;
  };
  if (instanciador_csp) {
    sub_130 = v_2174;
  } else {
    sub_130 = v_2176;
  };
  if (instanciador_ck_21_1) {
    sub_129 = sub_130;
  } else {
    sub_129 = false;
  };
  if (instanciador_inpMl) {
    v_2179 = sub_129;
  } else {
    v_2179 = sub_130;
  };
  if (instanciador_c_microL) {
    v_2180 = v_2179;
  } else {
    v_2180 = sub_130;
  };
  if (instanciador_inpMl) {
    v_2177 = false;
  } else {
    v_2177 = sub_129;
  };
  if (instanciador_c_microL) {
    v_2178 = false;
  } else {
    v_2178 = v_2177;
  };
  if (instanciador_cml) {
    sub_128 = v_2178;
  } else {
    sub_128 = v_2180;
  };
  if (instanciador_ck_19_1) {
    sub_127 = sub_128;
  } else {
    sub_127 = false;
  };
  if (instanciador_lv) {
    v_2183 = false;
  } else {
    v_2183 = sub_127;
  };
  if (instanciador_cv) {
    v_2184 = v_2183;
  } else {
    v_2184 = sub_128;
  };
  if (instanciador_lv) {
    v_2181 = sub_127;
  } else {
    v_2181 = sub_128;
  };
  if (instanciador_cv) {
    v_2182 = false;
  } else {
    v_2182 = v_2181;
  };
  if (instanciador_c_vent) {
    sub_126 = v_2182;
  } else {
    sub_126 = v_2184;
  };
  if (instanciador_ck_17_1) {
    sub_125 = sub_126;
  } else {
    sub_125 = false;
  };
  if (instanciador_lx) {
    v_2187 = sub_125;
  } else {
    v_2187 = sub_126;
  };
  if (instanciador_c_lampExt) {
    v_2188 = v_2187;
  } else {
    v_2188 = sub_126;
  };
  if (instanciador_lx) {
    v_2185 = false;
  } else {
    v_2185 = sub_125;
  };
  if (instanciador_c_lampExt) {
    v_2186 = false;
  } else {
    v_2186 = v_2185;
  };
  if (instanciador_cx) {
    sub_124 = v_2186;
  } else {
    sub_124 = v_2188;
  };
  if (instanciador_ck_15_1) {
    sub_123 = sub_124;
  } else {
    sub_123 = false;
  };
  if (instanciador_l4) {
    v_2191 = sub_123;
  } else {
    v_2191 = sub_124;
  };
  if (instanciador_c4_lamp) {
    v_2192 = v_2191;
  } else {
    v_2192 = sub_124;
  };
  if (instanciador_l4) {
    v_2189 = false;
  } else {
    v_2189 = sub_123;
  };
  if (instanciador_c4_lamp) {
    v_2190 = false;
  } else {
    v_2190 = v_2189;
  };
  if (instanciador_c4) {
    sub_122 = v_2190;
  } else {
    sub_122 = v_2192;
  };
  if (instanciador_ck_13_1) {
    sub_121 = sub_122;
  } else {
    sub_121 = false;
  };
  if (instanciador_c3_lamp) {
    v_2195 = sub_121;
  } else {
    v_2195 = sub_122;
  };
  if (instanciador_l3) {
    v_2196 = v_2195;
  } else {
    v_2196 = sub_122;
  };
  if (instanciador_c3_lamp) {
    v_2193 = false;
  } else {
    v_2193 = sub_121;
  };
  if (instanciador_l3) {
    v_2194 = false;
  } else {
    v_2194 = v_2193;
  };
  if (instanciador_c3) {
    sub_120 = v_2194;
  } else {
    sub_120 = v_2196;
  };
  if (instanciador_ck_11_1) {
    sub_119 = sub_120;
  } else {
    sub_119 = false;
  };
  if (instanciador_c2_lamp) {
    v_2199 = sub_119;
  } else {
    v_2199 = sub_120;
  };
  if (instanciador_l2) {
    v_2200 = v_2199;
  } else {
    v_2200 = sub_120;
  };
  if (instanciador_c2_lamp) {
    v_2197 = false;
  } else {
    v_2197 = sub_119;
  };
  if (instanciador_l2) {
    v_2198 = false;
  } else {
    v_2198 = v_2197;
  };
  if (instanciador_c2) {
    sub_118 = v_2198;
  } else {
    sub_118 = v_2200;
  };
  if (instanciador_ck_9_1) {
    sub_117 = sub_118;
  } else {
    sub_117 = false;
  };
  if (instanciador_c1_lamp) {
    v_2203 = sub_117;
  } else {
    v_2203 = sub_118;
  };
  if (instanciador_l1) {
    v_2204 = v_2203;
  } else {
    v_2204 = sub_118;
  };
  if (instanciador_c1_lamp) {
    v_2201 = false;
  } else {
    v_2201 = sub_117;
  };
  if (instanciador_l1) {
    v_2202 = false;
  } else {
    v_2202 = v_2201;
  };
  if (instanciador_c1) {
    sub_116 = v_2202;
  } else {
    sub_116 = v_2204;
  };
  if (instanciador_neutro_input) {
    sub_85 = sub_86;
  } else {
    sub_85 = sub_116;
  };
  if (instanciador_seguranca_input) {
    v_2243 = sub_85;
  } else {
    v_2243 = v_2242;
  };
  if (instanciador_domingol_input) {
    v_2244 = sub_59;
  } else {
    v_2244 = v_2243;
  };
  if (instanciador_domingo_input) {
    sub_58 = sub_44;
  } else {
    sub_58 = v_2244;
  };
  if (instanciador_v_341) {
    v_2245 = sub_43;
  } else {
    v_2245 = sub_58;
  };
  if (instanciador_sexta_input) {
    sub_57 = sub_43;
  } else {
    sub_57 = v_2245;
  };
  if (instanciador_v_339) {
    v_2307 = sub_57;
  } else {
    v_2307 = sub_3;
  };
  if (instanciador_neutro_input) {
    sub_140 = sub_86;
  } else {
    sub_140 = sub_47;
  };
  if (instanciador_seguranca_input) {
    v_2171 = sub_85;
  } else {
    v_2171 = sub_140;
  };
  if (instanciador_domingol_input) {
    sub_139 = sub_59;
  } else {
    sub_139 = v_2171;
  };
  if (instanciador_domingo_input) {
    sub_138 = sub_44;
  } else {
    sub_138 = sub_139;
  };
  if (instanciador_v_341) {
    sub_137 = sub_43;
  } else {
    sub_137 = sub_138;
  };
  sub_136 = sub_137;
  if (instanciador_v_339) {
    v_2308 = sub_57;
  } else {
    v_2308 = sub_136;
  };
  if (instanciador_ebd_input) {
    sub_2 = v_2307;
  } else {
    sub_2 = v_2308;
  };
  if (instanciador_seguranca_input) {
    v_2167 = sub_116;
  } else {
    v_2167 = sub_86;
  };
  if (instanciador_domingol_input) {
    v_2168 = sub_59;
    v_2166 = sub_59;
  } else {
    v_2168 = v_2167;
    v_2166 = sub_45;
  };
  if (instanciador_domingo_input) {
    v_2169 = v_2166;
  } else {
    v_2169 = v_2168;
  };
  if (instanciador_domingol_input) {
    v_2165 = sub_59;
    v_2164 = sub_59;
  } else {
    v_2165 = sub_85;
    v_2164 = sub_140;
  };
  if (instanciador_domingo_input) {
    sub_142 = v_2164;
  } else {
    sub_142 = v_2165;
  };
  if (instanciador_v_341) {
    v_2170 = v_2169;
  } else {
    v_2170 = sub_142;
  };
  if (instanciador_sexta_input) {
    sub_141 = sub_43;
  } else {
    sub_141 = v_2170;
  };
  if (instanciador_neutro_input) {
    v_2163 = sub_86;
  } else {
    v_2163 = sub_61;
  };
  if (instanciador_seguranca_input) {
    sub_144 = sub_85;
  } else {
    sub_144 = v_2163;
  };
  if (instanciador_domingo_input) {
    sub_143 = sub_44;
  } else {
    sub_143 = sub_144;
  };
  if (instanciador_v_341) {
    v_2309 = sub_139;
  } else {
    v_2309 = sub_143;
  };
  if (instanciador_sexta_input) {
    v_2310 = sub_43;
  } else {
    v_2310 = v_2309;
  };
  if (instanciador_v_339) {
    v_2311 = v_2310;
  } else {
    v_2311 = sub_141;
  };
  if (instanciador_ebd_input) {
    v_2312 = sub_5;
  } else {
    v_2312 = v_2311;
  };
  if (instanciador_v_340) {
    sub_1 = v_2312;
  } else {
    sub_1 = sub_2;
  };
  if (instanciador_c_microP) {
    sub_165 = sub_30;
  } else {
    sub_165 = sub_36;
  };
  sub_164 = sub_165;
  sub_163 = sub_164;
  if (instanciador_ck_25_1) {
    sub_166 = false;
  } else {
    sub_166 = sub_163;
  };
  if (instanciador_inpSp) {
    v_2131 = sub_166;
  } else {
    v_2131 = false;
  };
  if (instanciador_c_somP) {
    v_2132 = v_2131;
  } else {
    v_2132 = false;
  };
  if (instanciador_inpSp) {
    v_2129 = sub_163;
  } else {
    v_2129 = sub_166;
  };
  if (instanciador_c_somP) {
    v_2130 = sub_163;
  } else {
    v_2130 = v_2129;
  };
  if (instanciador_csp) {
    sub_162 = v_2130;
  } else {
    sub_162 = v_2132;
  };
  if (instanciador_ck_21_1) {
    sub_161 = sub_162;
  } else {
    sub_161 = false;
  };
  if (instanciador_inpMl) {
    v_2135 = sub_161;
  } else {
    v_2135 = sub_162;
  };
  if (instanciador_c_microL) {
    v_2136 = v_2135;
  } else {
    v_2136 = sub_162;
  };
  if (instanciador_inpMl) {
    v_2133 = false;
  } else {
    v_2133 = sub_161;
  };
  if (instanciador_c_microL) {
    v_2134 = false;
  } else {
    v_2134 = v_2133;
  };
  if (instanciador_cml) {
    sub_160 = v_2134;
  } else {
    sub_160 = v_2136;
  };
  if (instanciador_ck_19_1) {
    sub_167 = false;
  } else {
    sub_167 = sub_160;
  };
  if (instanciador_lv) {
    v_2139 = sub_160;
  } else {
    v_2139 = sub_167;
  };
  if (instanciador_cv) {
    v_2140 = v_2139;
  } else {
    v_2140 = false;
  };
  if (instanciador_lv) {
    v_2137 = sub_167;
  } else {
    v_2137 = false;
  };
  if (instanciador_cv) {
    v_2138 = sub_160;
  } else {
    v_2138 = v_2137;
  };
  if (instanciador_c_vent) {
    sub_159 = v_2138;
  } else {
    sub_159 = v_2140;
  };
  if (instanciador_ck_17_1) {
    sub_158 = sub_159;
  } else {
    sub_158 = false;
  };
  if (instanciador_lx) {
    v_2143 = sub_158;
    v_2141 = false;
  } else {
    v_2143 = sub_159;
    v_2141 = sub_158;
  };
  if (instanciador_c_lampExt) {
    v_2142 = false;
  } else {
    v_2142 = v_2141;
  };
  sub_168 = sub_159;
  if (instanciador_c_lampExt) {
    v_2144 = v_2143;
  } else {
    v_2144 = sub_168;
  };
  if (instanciador_cx) {
    sub_157 = v_2142;
  } else {
    sub_157 = v_2144;
  };
  if (instanciador_ck_15_1) {
    sub_156 = sub_157;
  } else {
    sub_156 = false;
  };
  if (instanciador_l4) {
    v_2147 = sub_156;
  } else {
    v_2147 = sub_157;
  };
  if (instanciador_c4_lamp) {
    v_2148 = v_2147;
  } else {
    v_2148 = sub_157;
  };
  if (instanciador_l4) {
    v_2145 = false;
  } else {
    v_2145 = sub_156;
  };
  if (instanciador_c4_lamp) {
    v_2146 = false;
  } else {
    v_2146 = v_2145;
  };
  if (instanciador_c4) {
    sub_155 = v_2146;
  } else {
    sub_155 = v_2148;
  };
  if (instanciador_ck_13_1) {
    sub_169 = false;
  } else {
    sub_169 = sub_155;
  };
  if (instanciador_c3_lamp) {
    v_2151 = sub_169;
  } else {
    v_2151 = false;
  };
  if (instanciador_l3) {
    v_2152 = v_2151;
  } else {
    v_2152 = false;
  };
  if (instanciador_c3_lamp) {
    v_2149 = sub_155;
  } else {
    v_2149 = sub_169;
  };
  if (instanciador_l3) {
    v_2150 = sub_155;
  } else {
    v_2150 = v_2149;
  };
  if (instanciador_c3) {
    sub_154 = v_2150;
  } else {
    sub_154 = v_2152;
  };
  if (instanciador_ck_11_1) {
    sub_170 = false;
  } else {
    sub_170 = sub_154;
  };
  if (instanciador_c2_lamp) {
    v_2155 = sub_170;
  } else {
    v_2155 = false;
  };
  if (instanciador_l2) {
    v_2156 = v_2155;
  } else {
    v_2156 = false;
  };
  if (instanciador_c2_lamp) {
    v_2153 = sub_154;
  } else {
    v_2153 = sub_170;
  };
  if (instanciador_l2) {
    v_2154 = sub_154;
  } else {
    v_2154 = v_2153;
  };
  if (instanciador_c2) {
    sub_153 = v_2154;
  } else {
    sub_153 = v_2156;
  };
  if (instanciador_ck_9_1) {
    sub_171 = false;
  } else {
    sub_171 = sub_153;
  };
  if (instanciador_c1_lamp) {
    v_2159 = sub_171;
  } else {
    v_2159 = false;
  };
  if (instanciador_l1) {
    v_2160 = v_2159;
  } else {
    v_2160 = false;
  };
  if (instanciador_c1_lamp) {
    v_2157 = sub_153;
  } else {
    v_2157 = sub_171;
  };
  if (instanciador_l1) {
    v_2158 = sub_153;
  } else {
    v_2158 = v_2157;
  };
  if (instanciador_c1) {
    sub_152 = v_2158;
  } else {
    sub_152 = v_2160;
  };
  sub_151 = sub_152;
  sub_150 = sub_151;
  sub_149 = sub_150;
  sub_148 = sub_149;
  if (instanciador_ck_17_1) {
    sub_181 = false;
  } else {
    sub_181 = sub_159;
  };
  if (instanciador_lx) {
    v_2111 = sub_181;
  } else {
    v_2111 = false;
  };
  if (instanciador_c_lampExt) {
    v_2112 = v_2111;
  } else {
    v_2112 = false;
  };
  if (instanciador_lx) {
    v_2109 = sub_159;
  } else {
    v_2109 = sub_181;
  };
  if (instanciador_c_lampExt) {
    v_2110 = sub_168;
  } else {
    v_2110 = v_2109;
  };
  if (instanciador_cx) {
    sub_180 = v_2110;
  } else {
    sub_180 = v_2112;
  };
  if (instanciador_ck_15_1) {
    sub_182 = false;
  } else {
    sub_182 = sub_180;
  };
  if (instanciador_l4) {
    v_2115 = sub_182;
  } else {
    v_2115 = false;
  };
  if (instanciador_c4_lamp) {
    v_2116 = v_2115;
  } else {
    v_2116 = false;
  };
  if (instanciador_l4) {
    v_2113 = sub_180;
  } else {
    v_2113 = sub_182;
  };
  if (instanciador_c4_lamp) {
    v_2114 = sub_180;
  } else {
    v_2114 = v_2113;
  };
  if (instanciador_c4) {
    sub_179 = v_2114;
  } else {
    sub_179 = v_2116;
  };
  if (instanciador_ck_13_1) {
    sub_183 = false;
  } else {
    sub_183 = sub_179;
  };
  if (instanciador_c3_lamp) {
    v_2119 = sub_183;
  } else {
    v_2119 = false;
  };
  if (instanciador_l3) {
    v_2120 = v_2119;
  } else {
    v_2120 = false;
  };
  if (instanciador_c3_lamp) {
    v_2117 = sub_179;
  } else {
    v_2117 = sub_183;
  };
  if (instanciador_l3) {
    v_2118 = sub_179;
  } else {
    v_2118 = v_2117;
  };
  if (instanciador_c3) {
    sub_178 = v_2118;
  } else {
    sub_178 = v_2120;
  };
  if (instanciador_ck_11_1) {
    sub_184 = false;
  } else {
    sub_184 = sub_178;
  };
  if (instanciador_c2_lamp) {
    v_2123 = sub_184;
  } else {
    v_2123 = false;
  };
  if (instanciador_l2) {
    v_2124 = v_2123;
  } else {
    v_2124 = false;
  };
  if (instanciador_c2_lamp) {
    v_2121 = sub_178;
  } else {
    v_2121 = sub_184;
  };
  if (instanciador_l2) {
    v_2122 = sub_178;
  } else {
    v_2122 = v_2121;
  };
  if (instanciador_c2) {
    sub_177 = v_2122;
  } else {
    sub_177 = v_2124;
  };
  if (instanciador_ck_9_1) {
    sub_185 = false;
  } else {
    sub_185 = sub_177;
  };
  if (instanciador_c1_lamp) {
    v_2127 = sub_185;
  } else {
    v_2127 = false;
  };
  if (instanciador_l1) {
    v_2128 = v_2127;
  } else {
    v_2128 = false;
  };
  if (instanciador_c1_lamp) {
    v_2125 = sub_177;
  } else {
    v_2125 = sub_185;
  };
  if (instanciador_l1) {
    v_2126 = sub_177;
  } else {
    v_2126 = v_2125;
  };
  if (instanciador_c1) {
    sub_176 = v_2126;
  } else {
    sub_176 = v_2128;
  };
  sub_175 = sub_176;
  sub_174 = sub_175;
  sub_173 = sub_174;
  sub_172 = sub_173;
  if (instanciador_v_341) {
    sub_147 = sub_172;
  } else {
    sub_147 = sub_148;
  };
  sub_146 = sub_147;
  sub_206 = (instanciador_inpSl||false);
  if (instanciador_c_somL) {
    v_2068 = sub_34;
  } else {
    v_2068 = sub_206;
  };
  if (instanciador_ck_27_1) {
    v_2069 = v_2068;
  } else {
    v_2069 = sub_35;
  };
  if (instanciador_c_somL) {
    sub_207 = sub_206;
  } else {
    sub_207 = false;
  };
  if (instanciador_ck_27_1) {
    v_2070 = false;
  } else {
    v_2070 = sub_207;
  };
  if (instanciador_csl) {
    sub_205 = v_2069;
  } else {
    sub_205 = v_2070;
  };
  if (instanciador_ck_23_1) {
    v_2071 = sub_205;
  } else {
    v_2071 = sub_77;
  };
  if (instanciador_inpMp) {
    v_2072 = sub_77;
  } else {
    v_2072 = v_2071;
  };
  if (instanciador_c_microP) {
    sub_204 = sub_76;
  } else {
    sub_204 = v_2072;
  };
  sub_203 = sub_204;
  sub_202 = sub_203;
  if (instanciador_ck_25_1) {
    sub_201 = sub_202;
  } else {
    sub_201 = false;
  };
  if (instanciador_inpSp) {
    v_2075 = sub_201;
  } else {
    v_2075 = sub_202;
  };
  if (instanciador_c_somP) {
    v_2076 = v_2075;
  } else {
    v_2076 = sub_202;
  };
  if (instanciador_inpSp) {
    v_2073 = false;
  } else {
    v_2073 = sub_201;
  };
  if (instanciador_c_somP) {
    v_2074 = false;
  } else {
    v_2074 = v_2073;
  };
  if (instanciador_csp) {
    sub_200 = v_2074;
  } else {
    sub_200 = v_2076;
  };
  if (instanciador_ck_21_1) {
    sub_208 = false;
  } else {
    sub_208 = sub_200;
  };
  if (instanciador_inpMl) {
    v_2079 = sub_208;
  } else {
    v_2079 = false;
  };
  if (instanciador_c_microL) {
    v_2080 = v_2079;
  } else {
    v_2080 = false;
  };
  if (instanciador_inpMl) {
    v_2077 = sub_200;
  } else {
    v_2077 = sub_208;
  };
  if (instanciador_c_microL) {
    v_2078 = sub_200;
  } else {
    v_2078 = v_2077;
  };
  if (instanciador_cml) {
    sub_199 = v_2078;
  } else {
    sub_199 = v_2080;
  };
  if (instanciador_ck_19_1) {
    sub_209 = false;
  } else {
    sub_209 = sub_199;
  };
  if (instanciador_lv) {
    v_2083 = sub_199;
  } else {
    v_2083 = sub_209;
  };
  if (instanciador_cv) {
    v_2084 = v_2083;
  } else {
    v_2084 = false;
  };
  if (instanciador_lv) {
    v_2081 = sub_209;
  } else {
    v_2081 = false;
  };
  if (instanciador_cv) {
    v_2082 = sub_199;
  } else {
    v_2082 = v_2081;
  };
  if (instanciador_c_vent) {
    sub_198 = v_2082;
  } else {
    sub_198 = v_2084;
  };
  if (instanciador_ck_17_1) {
    sub_210 = false;
  } else {
    sub_210 = sub_198;
  };
  if (instanciador_lx) {
    v_2087 = sub_210;
  } else {
    v_2087 = false;
  };
  if (instanciador_c_lampExt) {
    v_2088 = v_2087;
  } else {
    v_2088 = false;
  };
  if (instanciador_lx) {
    v_2085 = sub_198;
  } else {
    v_2085 = sub_210;
  };
  if (instanciador_c_lampExt) {
    v_2086 = sub_198;
  } else {
    v_2086 = v_2085;
  };
  if (instanciador_cx) {
    sub_197 = v_2086;
  } else {
    sub_197 = v_2088;
  };
  if (instanciador_ck_15_1) {
    sub_196 = sub_197;
  } else {
    sub_196 = false;
  };
  if (instanciador_l4) {
    v_2091 = sub_196;
  } else {
    v_2091 = sub_197;
  };
  if (instanciador_c4_lamp) {
    v_2092 = v_2091;
  } else {
    v_2092 = sub_197;
  };
  if (instanciador_l4) {
    v_2089 = false;
  } else {
    v_2089 = sub_196;
  };
  if (instanciador_c4_lamp) {
    v_2090 = false;
  } else {
    v_2090 = v_2089;
  };
  if (instanciador_c4) {
    sub_195 = v_2090;
  } else {
    sub_195 = v_2092;
  };
  if (instanciador_ck_13_1) {
    sub_211 = false;
  } else {
    sub_211 = sub_195;
  };
  if (instanciador_c3_lamp) {
    v_2095 = sub_211;
  } else {
    v_2095 = false;
  };
  if (instanciador_l3) {
    v_2096 = v_2095;
  } else {
    v_2096 = false;
  };
  if (instanciador_c3_lamp) {
    v_2093 = sub_195;
  } else {
    v_2093 = sub_211;
  };
  if (instanciador_l3) {
    v_2094 = sub_195;
  } else {
    v_2094 = v_2093;
  };
  if (instanciador_c3) {
    sub_194 = v_2094;
  } else {
    sub_194 = v_2096;
  };
  if (instanciador_ck_11_1) {
    sub_193 = sub_194;
  } else {
    sub_193 = false;
  };
  if (instanciador_c2_lamp) {
    v_2099 = sub_193;
  } else {
    v_2099 = sub_194;
  };
  if (instanciador_l2) {
    v_2100 = v_2099;
  } else {
    v_2100 = sub_194;
  };
  if (instanciador_c2_lamp) {
    v_2097 = false;
  } else {
    v_2097 = sub_193;
  };
  if (instanciador_l2) {
    v_2098 = false;
  } else {
    v_2098 = v_2097;
  };
  if (instanciador_c2) {
    sub_192 = v_2098;
  } else {
    sub_192 = v_2100;
  };
  if (instanciador_ck_9_1) {
    sub_191 = sub_192;
  } else {
    sub_191 = false;
  };
  if (instanciador_c1_lamp) {
    v_2103 = sub_191;
  } else {
    v_2103 = sub_192;
  };
  if (instanciador_l1) {
    v_2104 = v_2103;
  } else {
    v_2104 = sub_192;
  };
  if (instanciador_c1_lamp) {
    v_2101 = false;
  } else {
    v_2101 = sub_191;
  };
  if (instanciador_l1) {
    v_2102 = false;
  } else {
    v_2102 = v_2101;
  };
  if (instanciador_c1) {
    sub_190 = v_2102;
  } else {
    sub_190 = v_2104;
  };
  sub_189 = sub_190;
  sub_188 = sub_189;
  sub_242 = sub_35;
  sub_241 = sub_242;
  sub_240 = sub_241;
  sub_239 = sub_240;
  sub_238 = sub_239;
  sub_237 = sub_238;
  sub_236 = sub_237;
  sub_235 = sub_236;
  sub_234 = sub_235;
  sub_233 = sub_234;
  sub_232 = sub_233;
  sub_231 = sub_232;
  sub_230 = sub_231;
  sub_229 = sub_230;
  sub_228 = sub_229;
  sub_227 = sub_228;
  sub_226 = sub_227;
  sub_225 = sub_226;
  sub_224 = sub_225;
  sub_223 = sub_224;
  sub_222 = sub_223;
  sub_221 = sub_222;
  sub_220 = sub_221;
  sub_219 = sub_220;
  sub_218 = sub_219;
  sub_217 = sub_218;
  sub_216 = sub_217;
  sub_215 = sub_216;
  sub_214 = sub_215;
  sub_213 = sub_214;
  if (instanciador_neutro_input) {
    v_2105 = sub_213;
  } else {
    v_2105 = sub_152;
  };
  if (instanciador_inpMp) {
    v_2035 = sub_24;
  } else {
    v_2035 = sub_23;
  };
  if (instanciador_c_microP) {
    sub_261 = sub_135;
  } else {
    sub_261 = v_2035;
  };
  sub_260 = sub_261;
  sub_259 = sub_260;
  if (instanciador_ck_25_1) {
    sub_258 = sub_259;
  } else {
    sub_258 = false;
  };
  if (instanciador_inpSp) {
    v_2038 = sub_258;
  } else {
    v_2038 = sub_259;
  };
  if (instanciador_c_somP) {
    v_2039 = v_2038;
  } else {
    v_2039 = sub_259;
  };
  if (instanciador_inpSp) {
    v_2036 = false;
  } else {
    v_2036 = sub_258;
  };
  if (instanciador_c_somP) {
    v_2037 = false;
  } else {
    v_2037 = v_2036;
  };
  if (instanciador_csp) {
    sub_257 = v_2037;
  } else {
    sub_257 = v_2039;
  };
  if (instanciador_ck_21_1) {
    sub_256 = sub_257;
  } else {
    sub_256 = false;
  };
  if (instanciador_inpMl) {
    v_2042 = sub_256;
  } else {
    v_2042 = sub_257;
  };
  if (instanciador_c_microL) {
    v_2043 = v_2042;
  } else {
    v_2043 = sub_257;
  };
  if (instanciador_inpMl) {
    v_2040 = false;
  } else {
    v_2040 = sub_256;
  };
  if (instanciador_c_microL) {
    v_2041 = false;
  } else {
    v_2041 = v_2040;
  };
  if (instanciador_cml) {
    sub_255 = v_2041;
  } else {
    sub_255 = v_2043;
  };
  if (instanciador_ck_19_1) {
    sub_254 = sub_255;
  } else {
    sub_254 = false;
  };
  if (instanciador_lv) {
    v_2046 = false;
  } else {
    v_2046 = sub_254;
  };
  if (instanciador_cv) {
    v_2047 = v_2046;
  } else {
    v_2047 = sub_255;
  };
  if (instanciador_lv) {
    v_2044 = sub_254;
  } else {
    v_2044 = sub_255;
  };
  if (instanciador_cv) {
    v_2045 = false;
  } else {
    v_2045 = v_2044;
  };
  if (instanciador_c_vent) {
    sub_253 = v_2045;
  } else {
    sub_253 = v_2047;
  };
  if (instanciador_ck_17_1) {
    sub_252 = sub_253;
  } else {
    sub_252 = false;
  };
  if (instanciador_lx) {
    v_2050 = sub_252;
  } else {
    v_2050 = sub_253;
  };
  if (instanciador_c_lampExt) {
    v_2051 = v_2050;
  } else {
    v_2051 = sub_253;
  };
  if (instanciador_lx) {
    v_2048 = false;
  } else {
    v_2048 = sub_252;
  };
  if (instanciador_c_lampExt) {
    v_2049 = false;
  } else {
    v_2049 = v_2048;
  };
  if (instanciador_cx) {
    sub_251 = v_2049;
  } else {
    sub_251 = v_2051;
  };
  if (instanciador_ck_15_1) {
    sub_250 = sub_251;
  } else {
    sub_250 = false;
  };
  if (instanciador_l4) {
    v_2054 = sub_250;
  } else {
    v_2054 = sub_251;
  };
  if (instanciador_c4_lamp) {
    v_2055 = v_2054;
  } else {
    v_2055 = sub_251;
  };
  if (instanciador_l4) {
    v_2052 = false;
  } else {
    v_2052 = sub_250;
  };
  if (instanciador_c4_lamp) {
    v_2053 = false;
  } else {
    v_2053 = v_2052;
  };
  if (instanciador_c4) {
    sub_249 = v_2053;
  } else {
    sub_249 = v_2055;
  };
  if (instanciador_ck_13_1) {
    sub_248 = sub_249;
  } else {
    sub_248 = false;
  };
  if (instanciador_c3_lamp) {
    v_2058 = sub_248;
  } else {
    v_2058 = sub_249;
  };
  if (instanciador_l3) {
    v_2059 = v_2058;
  } else {
    v_2059 = sub_249;
  };
  if (instanciador_c3_lamp) {
    v_2056 = false;
  } else {
    v_2056 = sub_248;
  };
  if (instanciador_l3) {
    v_2057 = false;
  } else {
    v_2057 = v_2056;
  };
  if (instanciador_c3) {
    sub_247 = v_2057;
  } else {
    sub_247 = v_2059;
  };
  if (instanciador_ck_11_1) {
    sub_246 = sub_247;
  } else {
    sub_246 = false;
  };
  if (instanciador_c2_lamp) {
    v_2062 = sub_246;
  } else {
    v_2062 = sub_247;
  };
  if (instanciador_l2) {
    v_2063 = v_2062;
  } else {
    v_2063 = sub_247;
  };
  if (instanciador_c2_lamp) {
    v_2060 = false;
  } else {
    v_2060 = sub_246;
  };
  if (instanciador_l2) {
    v_2061 = false;
  } else {
    v_2061 = v_2060;
  };
  if (instanciador_c2) {
    sub_245 = v_2061;
  } else {
    sub_245 = v_2063;
  };
  if (instanciador_ck_9_1) {
    sub_244 = sub_245;
  } else {
    sub_244 = false;
  };
  if (instanciador_c1_lamp) {
    v_2066 = sub_244;
  } else {
    v_2066 = sub_245;
  };
  if (instanciador_l1) {
    v_2067 = v_2066;
  } else {
    v_2067 = sub_245;
  };
  if (instanciador_c1_lamp) {
    v_2064 = false;
  } else {
    v_2064 = sub_244;
  };
  if (instanciador_l1) {
    v_2065 = false;
  } else {
    v_2065 = v_2064;
  };
  if (instanciador_c1) {
    sub_243 = v_2065;
  } else {
    sub_243 = v_2067;
  };
  if (instanciador_neutro_input) {
    sub_212 = sub_213;
  } else {
    sub_212 = sub_243;
  };
  if (instanciador_seguranca_input) {
    v_2106 = sub_212;
  } else {
    v_2106 = v_2105;
  };
  if (instanciador_domingol_input) {
    v_2107 = sub_188;
  } else {
    v_2107 = v_2106;
  };
  if (instanciador_domingo_input) {
    sub_187 = sub_173;
  } else {
    sub_187 = v_2107;
  };
  if (instanciador_v_341) {
    v_2108 = sub_172;
  } else {
    v_2108 = sub_187;
  };
  if (instanciador_sexta_input) {
    sub_186 = sub_172;
  } else {
    sub_186 = v_2108;
  };
  if (instanciador_v_339) {
    v_2161 = sub_186;
  } else {
    v_2161 = sub_146;
  };
  if (instanciador_neutro_input) {
    sub_266 = sub_213;
  } else {
    sub_266 = sub_176;
  };
  if (instanciador_seguranca_input) {
    v_2034 = sub_212;
  } else {
    v_2034 = sub_266;
  };
  if (instanciador_domingol_input) {
    sub_265 = sub_188;
  } else {
    sub_265 = v_2034;
  };
  if (instanciador_domingo_input) {
    sub_264 = sub_173;
  } else {
    sub_264 = sub_265;
  };
  if (instanciador_v_341) {
    sub_263 = sub_172;
  } else {
    sub_263 = sub_264;
  };
  sub_262 = sub_263;
  if (instanciador_v_339) {
    v_2162 = sub_186;
  } else {
    v_2162 = sub_262;
  };
  if (instanciador_ebd_input) {
    sub_145 = v_2161;
  } else {
    sub_145 = v_2162;
  };
  if (instanciador_seguranca_input) {
    v_2030 = sub_243;
  } else {
    v_2030 = sub_213;
  };
  if (instanciador_domingol_input) {
    v_2031 = sub_188;
    v_2029 = sub_188;
  } else {
    v_2031 = v_2030;
    v_2029 = sub_174;
  };
  if (instanciador_domingo_input) {
    v_2032 = v_2029;
  } else {
    v_2032 = v_2031;
  };
  if (instanciador_domingol_input) {
    v_2028 = sub_188;
    v_2027 = sub_188;
  } else {
    v_2028 = sub_212;
    v_2027 = sub_266;
  };
  if (instanciador_domingo_input) {
    sub_268 = v_2027;
  } else {
    sub_268 = v_2028;
  };
  if (instanciador_v_341) {
    v_2033 = v_2032;
  } else {
    v_2033 = sub_268;
  };
  if (instanciador_sexta_input) {
    sub_267 = sub_172;
  } else {
    sub_267 = v_2033;
  };
  if (instanciador_neutro_input) {
    v = sub_213;
  } else {
    v = sub_190;
  };
  if (instanciador_seguranca_input) {
    sub_270 = sub_212;
  } else {
    sub_270 = v;
  };
  if (instanciador_domingo_input) {
    sub_269 = sub_173;
  } else {
    sub_269 = sub_270;
  };
  if (instanciador_v_341) {
    v_2313 = sub_265;
  } else {
    v_2313 = sub_269;
  };
  if (instanciador_sexta_input) {
    v_2314 = sub_172;
  } else {
    v_2314 = v_2313;
  };
  if (instanciador_v_339) {
    v_2315 = v_2314;
  } else {
    v_2315 = sub_267;
  };
  if (instanciador_ebd_input) {
    v_2316 = sub_148;
  } else {
    v_2316 = v_2315;
  };
  if (instanciador_v_340) {
    v_2317 = v_2316;
  } else {
    v_2317 = sub_145;
  };
  if (p_instanciador_cmp) {
    sub_0 = v_2317;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_cmp = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c_microP_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_cml,
  int instanciador_c_microL, int instanciador_csl, int instanciador_c_somL,
  int instanciador_csp, int instanciador_c_somP, int instanciador_c_vent,
  int instanciador_cv, int instanciador_cx, int instanciador_c4,
  int instanciador_c3, int instanciador_c2, int instanciador_c1,
  int instanciador_c_lampExt, int instanciador_c4_lamp,
  int instanciador_c3_lamp, int instanciador_c2_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c_microP_out* _out) {
  
  int v_2602;
  int v_2601;
  int v_2600;
  int v_2599;
  int v_2598;
  int v_2597;
  int v_2596;
  int v_2595;
  int v_2594;
  int v_2593;
  int v_2592;
  int v_2591;
  int v_2590;
  int v_2589;
  int v_2588;
  int v_2587;
  int v_2586;
  int v_2585;
  int v_2584;
  int v_2583;
  int v_2582;
  int v_2581;
  int v_2580;
  int v_2579;
  int v_2578;
  int v_2577;
  int v_2576;
  int v_2575;
  int v_2574;
  int v_2573;
  int v_2572;
  int v_2571;
  int v_2570;
  int v_2569;
  int v_2568;
  int v_2567;
  int v_2566;
  int v_2565;
  int v_2564;
  int v_2563;
  int v_2562;
  int v_2561;
  int v_2560;
  int v_2559;
  int v_2558;
  int v_2557;
  int v_2556;
  int v_2555;
  int v_2554;
  int v_2553;
  int v_2552;
  int v_2551;
  int v_2550;
  int v_2549;
  int v_2548;
  int v_2547;
  int v_2546;
  int v_2545;
  int v_2544;
  int v_2543;
  int v_2542;
  int v_2541;
  int v_2540;
  int v_2539;
  int v_2538;
  int v_2537;
  int v_2536;
  int v_2535;
  int v_2534;
  int v_2533;
  int v_2532;
  int v_2531;
  int v_2530;
  int v_2529;
  int v_2528;
  int v_2527;
  int v_2526;
  int v_2525;
  int v_2524;
  int v_2523;
  int v_2522;
  int v_2521;
  int v_2520;
  int v_2519;
  int v_2518;
  int v_2517;
  int v_2516;
  int v_2515;
  int v_2514;
  int v_2513;
  int v_2512;
  int v_2511;
  int v_2510;
  int v_2509;
  int v_2508;
  int v_2507;
  int v_2506;
  int v_2505;
  int v_2504;
  int v_2503;
  int v_2502;
  int v_2501;
  int v_2500;
  int v_2499;
  int v_2498;
  int v_2497;
  int v_2496;
  int v_2495;
  int v_2494;
  int v_2493;
  int v_2492;
  int v_2491;
  int v_2490;
  int v_2489;
  int v_2488;
  int v_2487;
  int v_2486;
  int v_2485;
  int v_2484;
  int v_2483;
  int v_2482;
  int v_2481;
  int v_2480;
  int v_2479;
  int v_2478;
  int v_2477;
  int v_2476;
  int v_2475;
  int v_2474;
  int v_2473;
  int v_2472;
  int v_2471;
  int v_2470;
  int v_2469;
  int v_2468;
  int v_2467;
  int v_2466;
  int v_2465;
  int v_2464;
  int v_2463;
  int v_2462;
  int v_2461;
  int v_2460;
  int v_2459;
  int v_2458;
  int v_2457;
  int v_2456;
  int v_2455;
  int v_2454;
  int v_2453;
  int v_2452;
  int v_2451;
  int v_2450;
  int v_2449;
  int v_2448;
  int v_2447;
  int v_2446;
  int v_2445;
  int v_2444;
  int v_2443;
  int v_2442;
  int v_2441;
  int v_2440;
  int v_2439;
  int v_2438;
  int v_2437;
  int v_2436;
  int v_2435;
  int v_2434;
  int v_2433;
  int v_2432;
  int v_2431;
  int v_2430;
  int v_2429;
  int v_2428;
  int v_2427;
  int v_2426;
  int v_2425;
  int v_2424;
  int v_2423;
  int v_2422;
  int v_2421;
  int v_2420;
  int v_2419;
  int v_2418;
  int v_2417;
  int v_2416;
  int v_2415;
  int v_2414;
  int v_2413;
  int v_2412;
  int v_2411;
  int v_2410;
  int v_2409;
  int v_2408;
  int v_2407;
  int v_2406;
  int v_2405;
  int v_2404;
  int v_2403;
  int v_2402;
  int v_2401;
  int v_2400;
  int v_2399;
  int v_2398;
  int v_2397;
  int v_2396;
  int v_2395;
  int v_2394;
  int v_2393;
  int v_2392;
  int v_2391;
  int v_2390;
  int v_2389;
  int v_2388;
  int v_2387;
  int v_2386;
  int v_2385;
  int v_2384;
  int v_2383;
  int v_2382;
  int v_2381;
  int v_2380;
  int v_2379;
  int v_2378;
  int v_2377;
  int v_2376;
  int v_2375;
  int v_2374;
  int v_2373;
  int v_2372;
  int v_2371;
  int v_2370;
  int v_2369;
  int v_2368;
  int v_2367;
  int v_2366;
  int v_2365;
  int v_2364;
  int v_2363;
  int v_2362;
  int v_2361;
  int v_2360;
  int v_2359;
  int v_2358;
  int v_2357;
  int v_2356;
  int v_2355;
  int v_2354;
  int v_2353;
  int v_2352;
  int v_2351;
  int v_2350;
  int v_2349;
  int v_2348;
  int v_2347;
  int v_2346;
  int v_2345;
  int v_2344;
  int v_2343;
  int v_2342;
  int v_2341;
  int v_2340;
  int v_2339;
  int v_2338;
  int v_2337;
  int v_2336;
  int v_2335;
  int v_2334;
  int v_2333;
  int v_2332;
  int v_2331;
  int v_2330;
  int v_2329;
  int v_2328;
  int v_2327;
  int v_2326;
  int v_2325;
  int v_2324;
  int v_2323;
  int v_2322;
  int v_2321;
  int v_2320;
  int v_2319;
  int v_2318;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  int sub_246;
  int sub_247;
  int sub_248;
  int sub_249;
  int sub_250;
  int sub_251;
  int sub_252;
  int sub_253;
  int sub_254;
  int sub_255;
  int sub_256;
  int sub_257;
  int sub_258;
  int sub_259;
  int sub_260;
  int sub_261;
  int sub_262;
  int sub_263;
  int sub_264;
  int sub_265;
  int sub_266;
  sub_25 = (instanciador_inpSl&&false);
  if (instanciador_c_somL) {
    v_2557 = false;
  } else {
    v_2557 = sub_25;
  };
  if (instanciador_ck_27_1) {
    v_2558 = v_2557;
  } else {
    v_2558 = false;
  };
  sub_27 = false;
  if (instanciador_c_somL) {
    sub_26 = sub_25;
  } else {
    sub_26 = sub_27;
  };
  sub_28 = sub_27;
  if (instanciador_ck_27_1) {
    v_2559 = sub_28;
  } else {
    v_2559 = sub_26;
  };
  if (instanciador_csl) {
    sub_24 = v_2558;
  } else {
    sub_24 = v_2559;
  };
  sub_23 = sub_24;
  v_2553 = !(instanciador_inpSl);
  sub_32 = (v_2553||false);
  if (instanciador_c_somL) {
    v_2554 = false;
  } else {
    v_2554 = sub_32;
  };
  if (instanciador_ck_27_1) {
    v_2555 = v_2554;
  } else {
    v_2555 = false;
  };
  sub_34 = true;
  if (instanciador_c_somL) {
    sub_33 = sub_32;
  } else {
    sub_33 = sub_34;
  };
  sub_35 = sub_34;
  if (instanciador_ck_27_1) {
    v_2556 = sub_35;
  } else {
    v_2556 = sub_33;
  };
  if (instanciador_csl) {
    sub_31 = v_2555;
  } else {
    sub_31 = v_2556;
  };
  sub_30 = sub_31;
  if (instanciador_ck_23_1) {
    sub_29 = sub_30;
  } else {
    sub_29 = sub_23;
  };
  if (instanciador_inpMp) {
    sub_22 = sub_23;
  } else {
    sub_22 = sub_29;
  };
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (instanciador_ck_25_1) {
    sub_36 = false;
  } else {
    sub_36 = sub_20;
  };
  if (instanciador_inpSp) {
    v_2562 = sub_36;
  } else {
    v_2562 = false;
  };
  if (instanciador_c_somP) {
    v_2563 = v_2562;
  } else {
    v_2563 = false;
  };
  if (instanciador_inpSp) {
    v_2560 = sub_20;
  } else {
    v_2560 = sub_36;
  };
  if (instanciador_c_somP) {
    v_2561 = sub_20;
  } else {
    v_2561 = v_2560;
  };
  if (instanciador_csp) {
    sub_19 = v_2561;
  } else {
    sub_19 = v_2563;
  };
  if (instanciador_ck_21_1) {
    sub_18 = sub_19;
  } else {
    sub_18 = false;
  };
  if (instanciador_inpMl) {
    v_2566 = sub_18;
  } else {
    v_2566 = sub_19;
  };
  if (instanciador_c_microL) {
    v_2567 = v_2566;
  } else {
    v_2567 = sub_19;
  };
  if (instanciador_inpMl) {
    v_2564 = false;
  } else {
    v_2564 = sub_18;
  };
  if (instanciador_c_microL) {
    v_2565 = false;
  } else {
    v_2565 = v_2564;
  };
  if (instanciador_cml) {
    sub_17 = v_2565;
  } else {
    sub_17 = v_2567;
  };
  if (instanciador_ck_19_1) {
    sub_37 = false;
  } else {
    sub_37 = sub_17;
  };
  if (instanciador_lv) {
    v_2570 = sub_17;
  } else {
    v_2570 = sub_37;
  };
  if (instanciador_cv) {
    v_2571 = v_2570;
  } else {
    v_2571 = false;
  };
  if (instanciador_lv) {
    v_2568 = sub_37;
  } else {
    v_2568 = false;
  };
  if (instanciador_cv) {
    v_2569 = sub_17;
  } else {
    v_2569 = v_2568;
  };
  if (instanciador_c_vent) {
    sub_16 = v_2569;
  } else {
    sub_16 = v_2571;
  };
  if (instanciador_ck_17_1) {
    sub_15 = sub_16;
  } else {
    sub_15 = false;
  };
  if (instanciador_lx) {
    v_2574 = sub_15;
    v_2572 = false;
  } else {
    v_2574 = sub_16;
    v_2572 = sub_15;
  };
  if (instanciador_c_lampExt) {
    v_2573 = false;
  } else {
    v_2573 = v_2572;
  };
  sub_38 = sub_16;
  if (instanciador_c_lampExt) {
    v_2575 = v_2574;
  } else {
    v_2575 = sub_38;
  };
  if (instanciador_cx) {
    sub_14 = v_2573;
  } else {
    sub_14 = v_2575;
  };
  if (instanciador_ck_15_1) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (instanciador_l4) {
    v_2578 = sub_13;
  } else {
    v_2578 = sub_14;
  };
  if (instanciador_c4_lamp) {
    v_2579 = v_2578;
  } else {
    v_2579 = sub_14;
  };
  if (instanciador_l4) {
    v_2576 = false;
  } else {
    v_2576 = sub_13;
  };
  if (instanciador_c4_lamp) {
    v_2577 = false;
  } else {
    v_2577 = v_2576;
  };
  if (instanciador_c4) {
    sub_12 = v_2577;
  } else {
    sub_12 = v_2579;
  };
  if (instanciador_ck_13_1) {
    sub_39 = false;
  } else {
    sub_39 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_2582 = sub_39;
  } else {
    v_2582 = false;
  };
  if (instanciador_l3) {
    v_2583 = v_2582;
  } else {
    v_2583 = false;
  };
  if (instanciador_c3_lamp) {
    v_2580 = sub_12;
  } else {
    v_2580 = sub_39;
  };
  if (instanciador_l3) {
    v_2581 = sub_12;
  } else {
    v_2581 = v_2580;
  };
  if (instanciador_c3) {
    sub_11 = v_2581;
  } else {
    sub_11 = v_2583;
  };
  if (instanciador_ck_11_1) {
    sub_40 = false;
  } else {
    sub_40 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_2586 = sub_40;
  } else {
    v_2586 = false;
  };
  if (instanciador_l2) {
    v_2587 = v_2586;
  } else {
    v_2587 = false;
  };
  if (instanciador_c2_lamp) {
    v_2584 = sub_11;
  } else {
    v_2584 = sub_40;
  };
  if (instanciador_l2) {
    v_2585 = sub_11;
  } else {
    v_2585 = v_2584;
  };
  if (instanciador_c2) {
    sub_10 = v_2585;
  } else {
    sub_10 = v_2587;
  };
  if (instanciador_ck_9_1) {
    sub_41 = false;
  } else {
    sub_41 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_2590 = sub_41;
  } else {
    v_2590 = false;
  };
  if (instanciador_l1) {
    v_2591 = v_2590;
  } else {
    v_2591 = false;
  };
  if (instanciador_c1_lamp) {
    v_2588 = sub_10;
  } else {
    v_2588 = sub_41;
  };
  if (instanciador_l1) {
    v_2589 = sub_10;
  } else {
    v_2589 = v_2588;
  };
  if (instanciador_c1) {
    sub_9 = v_2589;
  } else {
    sub_9 = v_2591;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (instanciador_ck_17_1) {
    sub_51 = false;
  } else {
    sub_51 = sub_16;
  };
  if (instanciador_lx) {
    v_2535 = sub_51;
  } else {
    v_2535 = false;
  };
  if (instanciador_c_lampExt) {
    v_2536 = v_2535;
  } else {
    v_2536 = false;
  };
  if (instanciador_lx) {
    v_2533 = sub_16;
  } else {
    v_2533 = sub_51;
  };
  if (instanciador_c_lampExt) {
    v_2534 = sub_38;
  } else {
    v_2534 = v_2533;
  };
  if (instanciador_cx) {
    sub_50 = v_2534;
  } else {
    sub_50 = v_2536;
  };
  if (instanciador_ck_15_1) {
    sub_52 = false;
  } else {
    sub_52 = sub_50;
  };
  if (instanciador_l4) {
    v_2539 = sub_52;
  } else {
    v_2539 = false;
  };
  if (instanciador_c4_lamp) {
    v_2540 = v_2539;
  } else {
    v_2540 = false;
  };
  if (instanciador_l4) {
    v_2537 = sub_50;
  } else {
    v_2537 = sub_52;
  };
  if (instanciador_c4_lamp) {
    v_2538 = sub_50;
  } else {
    v_2538 = v_2537;
  };
  if (instanciador_c4) {
    sub_49 = v_2538;
  } else {
    sub_49 = v_2540;
  };
  if (instanciador_ck_13_1) {
    sub_53 = false;
  } else {
    sub_53 = sub_49;
  };
  if (instanciador_c3_lamp) {
    v_2543 = sub_53;
  } else {
    v_2543 = false;
  };
  if (instanciador_l3) {
    v_2544 = v_2543;
  } else {
    v_2544 = false;
  };
  if (instanciador_c3_lamp) {
    v_2541 = sub_49;
  } else {
    v_2541 = sub_53;
  };
  if (instanciador_l3) {
    v_2542 = sub_49;
  } else {
    v_2542 = v_2541;
  };
  if (instanciador_c3) {
    sub_48 = v_2542;
  } else {
    sub_48 = v_2544;
  };
  if (instanciador_ck_11_1) {
    sub_54 = false;
  } else {
    sub_54 = sub_48;
  };
  if (instanciador_c2_lamp) {
    v_2547 = sub_54;
  } else {
    v_2547 = false;
  };
  if (instanciador_l2) {
    v_2548 = v_2547;
  } else {
    v_2548 = false;
  };
  if (instanciador_c2_lamp) {
    v_2545 = sub_48;
  } else {
    v_2545 = sub_54;
  };
  if (instanciador_l2) {
    v_2546 = sub_48;
  } else {
    v_2546 = v_2545;
  };
  if (instanciador_c2) {
    sub_47 = v_2546;
  } else {
    sub_47 = v_2548;
  };
  if (instanciador_ck_9_1) {
    sub_55 = false;
  } else {
    sub_55 = sub_47;
  };
  if (instanciador_c1_lamp) {
    v_2551 = sub_55;
  } else {
    v_2551 = false;
  };
  if (instanciador_l1) {
    v_2552 = v_2551;
  } else {
    v_2552 = false;
  };
  if (instanciador_c1_lamp) {
    v_2549 = sub_47;
  } else {
    v_2549 = sub_55;
  };
  if (instanciador_l1) {
    v_2550 = sub_47;
  } else {
    v_2550 = v_2549;
  };
  if (instanciador_c1) {
    sub_46 = v_2550;
  } else {
    sub_46 = v_2552;
  };
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  if (instanciador_v_341) {
    sub_4 = sub_42;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  v_2493 = !(instanciador_inpSl);
  sub_77 = (v_2493&&false);
  if (instanciador_c_somL) {
    v_2494 = sub_27;
  } else {
    v_2494 = sub_77;
  };
  if (instanciador_ck_27_1) {
    v_2495 = v_2494;
  } else {
    v_2495 = sub_28;
  };
  if (instanciador_c_somL) {
    sub_78 = sub_77;
  } else {
    sub_78 = false;
  };
  if (instanciador_ck_27_1) {
    v_2496 = false;
  } else {
    v_2496 = sub_78;
  };
  if (instanciador_csl) {
    sub_76 = v_2495;
  } else {
    sub_76 = v_2496;
  };
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  if (instanciador_ck_25_1) {
    sub_71 = sub_72;
  } else {
    sub_71 = false;
  };
  if (instanciador_inpSp) {
    v_2499 = sub_71;
  } else {
    v_2499 = sub_72;
  };
  if (instanciador_c_somP) {
    v_2500 = v_2499;
  } else {
    v_2500 = sub_72;
  };
  if (instanciador_inpSp) {
    v_2497 = false;
  } else {
    v_2497 = sub_71;
  };
  if (instanciador_c_somP) {
    v_2498 = false;
  } else {
    v_2498 = v_2497;
  };
  if (instanciador_csp) {
    sub_70 = v_2498;
  } else {
    sub_70 = v_2500;
  };
  if (instanciador_ck_21_1) {
    sub_79 = false;
  } else {
    sub_79 = sub_70;
  };
  if (instanciador_inpMl) {
    v_2503 = sub_79;
  } else {
    v_2503 = false;
  };
  if (instanciador_c_microL) {
    v_2504 = v_2503;
  } else {
    v_2504 = false;
  };
  if (instanciador_inpMl) {
    v_2501 = sub_70;
  } else {
    v_2501 = sub_79;
  };
  if (instanciador_c_microL) {
    v_2502 = sub_70;
  } else {
    v_2502 = v_2501;
  };
  if (instanciador_cml) {
    sub_69 = v_2502;
  } else {
    sub_69 = v_2504;
  };
  if (instanciador_ck_19_1) {
    sub_80 = false;
  } else {
    sub_80 = sub_69;
  };
  if (instanciador_lv) {
    v_2507 = sub_69;
  } else {
    v_2507 = sub_80;
  };
  if (instanciador_cv) {
    v_2508 = v_2507;
  } else {
    v_2508 = false;
  };
  if (instanciador_lv) {
    v_2505 = sub_80;
  } else {
    v_2505 = false;
  };
  if (instanciador_cv) {
    v_2506 = sub_69;
  } else {
    v_2506 = v_2505;
  };
  if (instanciador_c_vent) {
    sub_68 = v_2506;
  } else {
    sub_68 = v_2508;
  };
  if (instanciador_ck_17_1) {
    sub_81 = false;
  } else {
    sub_81 = sub_68;
  };
  if (instanciador_lx) {
    v_2511 = sub_81;
  } else {
    v_2511 = false;
  };
  if (instanciador_c_lampExt) {
    v_2512 = v_2511;
  } else {
    v_2512 = false;
  };
  if (instanciador_lx) {
    v_2509 = sub_68;
  } else {
    v_2509 = sub_81;
  };
  if (instanciador_c_lampExt) {
    v_2510 = sub_68;
  } else {
    v_2510 = v_2509;
  };
  if (instanciador_cx) {
    sub_67 = v_2510;
  } else {
    sub_67 = v_2512;
  };
  if (instanciador_ck_15_1) {
    sub_66 = sub_67;
  } else {
    sub_66 = false;
  };
  if (instanciador_l4) {
    v_2515 = sub_66;
  } else {
    v_2515 = sub_67;
  };
  if (instanciador_c4_lamp) {
    v_2516 = v_2515;
  } else {
    v_2516 = sub_67;
  };
  if (instanciador_l4) {
    v_2513 = false;
  } else {
    v_2513 = sub_66;
  };
  if (instanciador_c4_lamp) {
    v_2514 = false;
  } else {
    v_2514 = v_2513;
  };
  if (instanciador_c4) {
    sub_65 = v_2514;
  } else {
    sub_65 = v_2516;
  };
  if (instanciador_ck_13_1) {
    sub_82 = false;
  } else {
    sub_82 = sub_65;
  };
  if (instanciador_c3_lamp) {
    v_2519 = sub_82;
  } else {
    v_2519 = false;
  };
  if (instanciador_l3) {
    v_2520 = v_2519;
  } else {
    v_2520 = false;
  };
  if (instanciador_c3_lamp) {
    v_2517 = sub_65;
  } else {
    v_2517 = sub_82;
  };
  if (instanciador_l3) {
    v_2518 = sub_65;
  } else {
    v_2518 = v_2517;
  };
  if (instanciador_c3) {
    sub_64 = v_2518;
  } else {
    sub_64 = v_2520;
  };
  if (instanciador_ck_11_1) {
    sub_63 = sub_64;
  } else {
    sub_63 = false;
  };
  if (instanciador_c2_lamp) {
    v_2523 = sub_63;
  } else {
    v_2523 = sub_64;
  };
  if (instanciador_l2) {
    v_2524 = v_2523;
  } else {
    v_2524 = sub_64;
  };
  if (instanciador_c2_lamp) {
    v_2521 = false;
  } else {
    v_2521 = sub_63;
  };
  if (instanciador_l2) {
    v_2522 = false;
  } else {
    v_2522 = v_2521;
  };
  if (instanciador_c2) {
    sub_62 = v_2522;
  } else {
    sub_62 = v_2524;
  };
  if (instanciador_ck_9_1) {
    sub_61 = sub_62;
  } else {
    sub_61 = false;
  };
  if (instanciador_c1_lamp) {
    v_2527 = sub_61;
  } else {
    v_2527 = sub_62;
  };
  if (instanciador_l1) {
    v_2528 = v_2527;
  } else {
    v_2528 = sub_62;
  };
  if (instanciador_c1_lamp) {
    v_2525 = false;
  } else {
    v_2525 = sub_61;
  };
  if (instanciador_l1) {
    v_2526 = false;
  } else {
    v_2526 = v_2525;
  };
  if (instanciador_c1) {
    sub_60 = v_2526;
  } else {
    sub_60 = v_2528;
  };
  sub_59 = sub_60;
  sub_58 = sub_59;
  sub_112 = sub_28;
  sub_111 = sub_112;
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  sub_90 = sub_91;
  sub_89 = sub_90;
  sub_88 = sub_89;
  sub_87 = sub_88;
  sub_86 = sub_87;
  sub_85 = sub_86;
  sub_84 = sub_85;
  if (instanciador_neutro_input) {
    v_2529 = sub_84;
  } else {
    v_2529 = sub_9;
  };
  sub_131 = sub_23;
  sub_130 = sub_131;
  sub_129 = sub_130;
  if (instanciador_ck_25_1) {
    sub_128 = sub_129;
  } else {
    sub_128 = false;
  };
  if (instanciador_inpSp) {
    v_2463 = sub_128;
  } else {
    v_2463 = sub_129;
  };
  if (instanciador_c_somP) {
    v_2464 = v_2463;
  } else {
    v_2464 = sub_129;
  };
  if (instanciador_inpSp) {
    v_2461 = false;
  } else {
    v_2461 = sub_128;
  };
  if (instanciador_c_somP) {
    v_2462 = false;
  } else {
    v_2462 = v_2461;
  };
  if (instanciador_csp) {
    sub_127 = v_2462;
  } else {
    sub_127 = v_2464;
  };
  if (instanciador_ck_21_1) {
    sub_126 = sub_127;
  } else {
    sub_126 = false;
  };
  if (instanciador_inpMl) {
    v_2467 = sub_126;
  } else {
    v_2467 = sub_127;
  };
  if (instanciador_c_microL) {
    v_2468 = v_2467;
  } else {
    v_2468 = sub_127;
  };
  if (instanciador_inpMl) {
    v_2465 = false;
  } else {
    v_2465 = sub_126;
  };
  if (instanciador_c_microL) {
    v_2466 = false;
  } else {
    v_2466 = v_2465;
  };
  if (instanciador_cml) {
    sub_125 = v_2466;
  } else {
    sub_125 = v_2468;
  };
  if (instanciador_ck_19_1) {
    sub_124 = sub_125;
  } else {
    sub_124 = false;
  };
  if (instanciador_lv) {
    v_2471 = false;
  } else {
    v_2471 = sub_124;
  };
  if (instanciador_cv) {
    v_2472 = v_2471;
  } else {
    v_2472 = sub_125;
  };
  if (instanciador_lv) {
    v_2469 = sub_124;
  } else {
    v_2469 = sub_125;
  };
  if (instanciador_cv) {
    v_2470 = false;
  } else {
    v_2470 = v_2469;
  };
  if (instanciador_c_vent) {
    sub_123 = v_2470;
  } else {
    sub_123 = v_2472;
  };
  if (instanciador_ck_17_1) {
    sub_122 = sub_123;
  } else {
    sub_122 = false;
  };
  if (instanciador_lx) {
    v_2475 = sub_122;
  } else {
    v_2475 = sub_123;
  };
  if (instanciador_c_lampExt) {
    v_2476 = v_2475;
  } else {
    v_2476 = sub_123;
  };
  if (instanciador_lx) {
    v_2473 = false;
  } else {
    v_2473 = sub_122;
  };
  if (instanciador_c_lampExt) {
    v_2474 = false;
  } else {
    v_2474 = v_2473;
  };
  if (instanciador_cx) {
    sub_121 = v_2474;
  } else {
    sub_121 = v_2476;
  };
  if (instanciador_ck_15_1) {
    sub_120 = sub_121;
  } else {
    sub_120 = false;
  };
  if (instanciador_l4) {
    v_2479 = sub_120;
  } else {
    v_2479 = sub_121;
  };
  if (instanciador_c4_lamp) {
    v_2480 = v_2479;
  } else {
    v_2480 = sub_121;
  };
  if (instanciador_l4) {
    v_2477 = false;
  } else {
    v_2477 = sub_120;
  };
  if (instanciador_c4_lamp) {
    v_2478 = false;
  } else {
    v_2478 = v_2477;
  };
  if (instanciador_c4) {
    sub_119 = v_2478;
  } else {
    sub_119 = v_2480;
  };
  if (instanciador_ck_13_1) {
    sub_118 = sub_119;
  } else {
    sub_118 = false;
  };
  if (instanciador_c3_lamp) {
    v_2483 = sub_118;
  } else {
    v_2483 = sub_119;
  };
  if (instanciador_l3) {
    v_2484 = v_2483;
  } else {
    v_2484 = sub_119;
  };
  if (instanciador_c3_lamp) {
    v_2481 = false;
  } else {
    v_2481 = sub_118;
  };
  if (instanciador_l3) {
    v_2482 = false;
  } else {
    v_2482 = v_2481;
  };
  if (instanciador_c3) {
    sub_117 = v_2482;
  } else {
    sub_117 = v_2484;
  };
  if (instanciador_ck_11_1) {
    sub_116 = sub_117;
  } else {
    sub_116 = false;
  };
  if (instanciador_c2_lamp) {
    v_2487 = sub_116;
  } else {
    v_2487 = sub_117;
  };
  if (instanciador_l2) {
    v_2488 = v_2487;
  } else {
    v_2488 = sub_117;
  };
  if (instanciador_c2_lamp) {
    v_2485 = false;
  } else {
    v_2485 = sub_116;
  };
  if (instanciador_l2) {
    v_2486 = false;
  } else {
    v_2486 = v_2485;
  };
  if (instanciador_c2) {
    sub_115 = v_2486;
  } else {
    sub_115 = v_2488;
  };
  if (instanciador_ck_9_1) {
    sub_114 = sub_115;
  } else {
    sub_114 = false;
  };
  if (instanciador_c1_lamp) {
    v_2491 = sub_114;
  } else {
    v_2491 = sub_115;
  };
  if (instanciador_l1) {
    v_2492 = v_2491;
  } else {
    v_2492 = sub_115;
  };
  if (instanciador_c1_lamp) {
    v_2489 = false;
  } else {
    v_2489 = sub_114;
  };
  if (instanciador_l1) {
    v_2490 = false;
  } else {
    v_2490 = v_2489;
  };
  if (instanciador_c1) {
    sub_113 = v_2490;
  } else {
    sub_113 = v_2492;
  };
  if (instanciador_neutro_input) {
    sub_83 = sub_84;
  } else {
    sub_83 = sub_113;
  };
  if (instanciador_seguranca_input) {
    v_2530 = sub_83;
  } else {
    v_2530 = v_2529;
  };
  if (instanciador_domingol_input) {
    v_2531 = sub_58;
  } else {
    v_2531 = v_2530;
  };
  if (instanciador_domingo_input) {
    sub_57 = sub_43;
  } else {
    sub_57 = v_2531;
  };
  if (instanciador_v_341) {
    v_2532 = sub_42;
  } else {
    v_2532 = sub_57;
  };
  if (instanciador_sexta_input) {
    sub_56 = sub_42;
  } else {
    sub_56 = v_2532;
  };
  if (instanciador_v_339) {
    v_2592 = sub_56;
  } else {
    v_2592 = sub_3;
  };
  if (instanciador_neutro_input) {
    sub_136 = sub_84;
  } else {
    sub_136 = sub_46;
  };
  if (instanciador_seguranca_input) {
    v_2460 = sub_83;
  } else {
    v_2460 = sub_136;
  };
  if (instanciador_domingol_input) {
    sub_135 = sub_58;
  } else {
    sub_135 = v_2460;
  };
  if (instanciador_domingo_input) {
    sub_134 = sub_43;
  } else {
    sub_134 = sub_135;
  };
  if (instanciador_v_341) {
    sub_133 = sub_42;
  } else {
    sub_133 = sub_134;
  };
  sub_132 = sub_133;
  if (instanciador_v_339) {
    v_2593 = sub_56;
  } else {
    v_2593 = sub_132;
  };
  if (instanciador_ebd_input) {
    sub_2 = v_2592;
  } else {
    sub_2 = v_2593;
  };
  if (instanciador_seguranca_input) {
    v_2456 = sub_113;
  } else {
    v_2456 = sub_84;
  };
  if (instanciador_domingol_input) {
    v_2457 = sub_58;
    v_2455 = sub_58;
  } else {
    v_2457 = v_2456;
    v_2455 = sub_44;
  };
  if (instanciador_domingo_input) {
    v_2458 = v_2455;
  } else {
    v_2458 = v_2457;
  };
  if (instanciador_domingol_input) {
    v_2454 = sub_58;
    v_2453 = sub_58;
  } else {
    v_2454 = sub_83;
    v_2453 = sub_136;
  };
  if (instanciador_domingo_input) {
    sub_138 = v_2453;
  } else {
    sub_138 = v_2454;
  };
  if (instanciador_v_341) {
    v_2459 = v_2458;
  } else {
    v_2459 = sub_138;
  };
  if (instanciador_sexta_input) {
    sub_137 = sub_42;
  } else {
    sub_137 = v_2459;
  };
  if (instanciador_neutro_input) {
    v_2452 = sub_84;
  } else {
    v_2452 = sub_60;
  };
  if (instanciador_seguranca_input) {
    sub_140 = sub_83;
  } else {
    sub_140 = v_2452;
  };
  if (instanciador_domingo_input) {
    sub_139 = sub_43;
  } else {
    sub_139 = sub_140;
  };
  if (instanciador_v_341) {
    v_2594 = sub_135;
  } else {
    v_2594 = sub_139;
  };
  if (instanciador_sexta_input) {
    v_2595 = sub_42;
  } else {
    v_2595 = v_2594;
  };
  if (instanciador_v_339) {
    v_2596 = v_2595;
  } else {
    v_2596 = sub_137;
  };
  if (instanciador_ebd_input) {
    v_2597 = sub_5;
  } else {
    v_2597 = v_2596;
  };
  if (instanciador_v_340) {
    sub_1 = v_2597;
  } else {
    sub_1 = sub_2;
  };
  sub_161 = sub_30;
  sub_160 = sub_161;
  sub_159 = sub_160;
  if (instanciador_ck_25_1) {
    sub_162 = false;
  } else {
    sub_162 = sub_159;
  };
  if (instanciador_inpSp) {
    v_2420 = sub_162;
  } else {
    v_2420 = false;
  };
  if (instanciador_c_somP) {
    v_2421 = v_2420;
  } else {
    v_2421 = false;
  };
  if (instanciador_inpSp) {
    v_2418 = sub_159;
  } else {
    v_2418 = sub_162;
  };
  if (instanciador_c_somP) {
    v_2419 = sub_159;
  } else {
    v_2419 = v_2418;
  };
  if (instanciador_csp) {
    sub_158 = v_2419;
  } else {
    sub_158 = v_2421;
  };
  if (instanciador_ck_21_1) {
    sub_157 = sub_158;
  } else {
    sub_157 = false;
  };
  if (instanciador_inpMl) {
    v_2424 = sub_157;
  } else {
    v_2424 = sub_158;
  };
  if (instanciador_c_microL) {
    v_2425 = v_2424;
  } else {
    v_2425 = sub_158;
  };
  if (instanciador_inpMl) {
    v_2422 = false;
  } else {
    v_2422 = sub_157;
  };
  if (instanciador_c_microL) {
    v_2423 = false;
  } else {
    v_2423 = v_2422;
  };
  if (instanciador_cml) {
    sub_156 = v_2423;
  } else {
    sub_156 = v_2425;
  };
  if (instanciador_ck_19_1) {
    sub_163 = false;
  } else {
    sub_163 = sub_156;
  };
  if (instanciador_lv) {
    v_2428 = sub_156;
  } else {
    v_2428 = sub_163;
  };
  if (instanciador_cv) {
    v_2429 = v_2428;
  } else {
    v_2429 = false;
  };
  if (instanciador_lv) {
    v_2426 = sub_163;
  } else {
    v_2426 = false;
  };
  if (instanciador_cv) {
    v_2427 = sub_156;
  } else {
    v_2427 = v_2426;
  };
  if (instanciador_c_vent) {
    sub_155 = v_2427;
  } else {
    sub_155 = v_2429;
  };
  if (instanciador_ck_17_1) {
    sub_154 = sub_155;
  } else {
    sub_154 = false;
  };
  if (instanciador_lx) {
    v_2432 = sub_154;
    v_2430 = false;
  } else {
    v_2432 = sub_155;
    v_2430 = sub_154;
  };
  if (instanciador_c_lampExt) {
    v_2431 = false;
  } else {
    v_2431 = v_2430;
  };
  sub_164 = sub_155;
  if (instanciador_c_lampExt) {
    v_2433 = v_2432;
  } else {
    v_2433 = sub_164;
  };
  if (instanciador_cx) {
    sub_153 = v_2431;
  } else {
    sub_153 = v_2433;
  };
  if (instanciador_ck_15_1) {
    sub_152 = sub_153;
  } else {
    sub_152 = false;
  };
  if (instanciador_l4) {
    v_2436 = sub_152;
  } else {
    v_2436 = sub_153;
  };
  if (instanciador_c4_lamp) {
    v_2437 = v_2436;
  } else {
    v_2437 = sub_153;
  };
  if (instanciador_l4) {
    v_2434 = false;
  } else {
    v_2434 = sub_152;
  };
  if (instanciador_c4_lamp) {
    v_2435 = false;
  } else {
    v_2435 = v_2434;
  };
  if (instanciador_c4) {
    sub_151 = v_2435;
  } else {
    sub_151 = v_2437;
  };
  if (instanciador_ck_13_1) {
    sub_165 = false;
  } else {
    sub_165 = sub_151;
  };
  if (instanciador_c3_lamp) {
    v_2440 = sub_165;
  } else {
    v_2440 = false;
  };
  if (instanciador_l3) {
    v_2441 = v_2440;
  } else {
    v_2441 = false;
  };
  if (instanciador_c3_lamp) {
    v_2438 = sub_151;
  } else {
    v_2438 = sub_165;
  };
  if (instanciador_l3) {
    v_2439 = sub_151;
  } else {
    v_2439 = v_2438;
  };
  if (instanciador_c3) {
    sub_150 = v_2439;
  } else {
    sub_150 = v_2441;
  };
  if (instanciador_ck_11_1) {
    sub_166 = false;
  } else {
    sub_166 = sub_150;
  };
  if (instanciador_c2_lamp) {
    v_2444 = sub_166;
  } else {
    v_2444 = false;
  };
  if (instanciador_l2) {
    v_2445 = v_2444;
  } else {
    v_2445 = false;
  };
  if (instanciador_c2_lamp) {
    v_2442 = sub_150;
  } else {
    v_2442 = sub_166;
  };
  if (instanciador_l2) {
    v_2443 = sub_150;
  } else {
    v_2443 = v_2442;
  };
  if (instanciador_c2) {
    sub_149 = v_2443;
  } else {
    sub_149 = v_2445;
  };
  if (instanciador_ck_9_1) {
    sub_167 = false;
  } else {
    sub_167 = sub_149;
  };
  if (instanciador_c1_lamp) {
    v_2448 = sub_167;
  } else {
    v_2448 = false;
  };
  if (instanciador_l1) {
    v_2449 = v_2448;
  } else {
    v_2449 = false;
  };
  if (instanciador_c1_lamp) {
    v_2446 = sub_149;
  } else {
    v_2446 = sub_167;
  };
  if (instanciador_l1) {
    v_2447 = sub_149;
  } else {
    v_2447 = v_2446;
  };
  if (instanciador_c1) {
    sub_148 = v_2447;
  } else {
    sub_148 = v_2449;
  };
  sub_147 = sub_148;
  sub_146 = sub_147;
  sub_145 = sub_146;
  sub_144 = sub_145;
  if (instanciador_ck_17_1) {
    sub_177 = false;
  } else {
    sub_177 = sub_155;
  };
  if (instanciador_lx) {
    v_2400 = sub_177;
  } else {
    v_2400 = false;
  };
  if (instanciador_c_lampExt) {
    v_2401 = v_2400;
  } else {
    v_2401 = false;
  };
  if (instanciador_lx) {
    v_2398 = sub_155;
  } else {
    v_2398 = sub_177;
  };
  if (instanciador_c_lampExt) {
    v_2399 = sub_164;
  } else {
    v_2399 = v_2398;
  };
  if (instanciador_cx) {
    sub_176 = v_2399;
  } else {
    sub_176 = v_2401;
  };
  if (instanciador_ck_15_1) {
    sub_178 = false;
  } else {
    sub_178 = sub_176;
  };
  if (instanciador_l4) {
    v_2404 = sub_178;
  } else {
    v_2404 = false;
  };
  if (instanciador_c4_lamp) {
    v_2405 = v_2404;
  } else {
    v_2405 = false;
  };
  if (instanciador_l4) {
    v_2402 = sub_176;
  } else {
    v_2402 = sub_178;
  };
  if (instanciador_c4_lamp) {
    v_2403 = sub_176;
  } else {
    v_2403 = v_2402;
  };
  if (instanciador_c4) {
    sub_175 = v_2403;
  } else {
    sub_175 = v_2405;
  };
  if (instanciador_ck_13_1) {
    sub_179 = false;
  } else {
    sub_179 = sub_175;
  };
  if (instanciador_c3_lamp) {
    v_2408 = sub_179;
  } else {
    v_2408 = false;
  };
  if (instanciador_l3) {
    v_2409 = v_2408;
  } else {
    v_2409 = false;
  };
  if (instanciador_c3_lamp) {
    v_2406 = sub_175;
  } else {
    v_2406 = sub_179;
  };
  if (instanciador_l3) {
    v_2407 = sub_175;
  } else {
    v_2407 = v_2406;
  };
  if (instanciador_c3) {
    sub_174 = v_2407;
  } else {
    sub_174 = v_2409;
  };
  if (instanciador_ck_11_1) {
    sub_180 = false;
  } else {
    sub_180 = sub_174;
  };
  if (instanciador_c2_lamp) {
    v_2412 = sub_180;
  } else {
    v_2412 = false;
  };
  if (instanciador_l2) {
    v_2413 = v_2412;
  } else {
    v_2413 = false;
  };
  if (instanciador_c2_lamp) {
    v_2410 = sub_174;
  } else {
    v_2410 = sub_180;
  };
  if (instanciador_l2) {
    v_2411 = sub_174;
  } else {
    v_2411 = v_2410;
  };
  if (instanciador_c2) {
    sub_173 = v_2411;
  } else {
    sub_173 = v_2413;
  };
  if (instanciador_ck_9_1) {
    sub_181 = false;
  } else {
    sub_181 = sub_173;
  };
  if (instanciador_c1_lamp) {
    v_2416 = sub_181;
  } else {
    v_2416 = false;
  };
  if (instanciador_l1) {
    v_2417 = v_2416;
  } else {
    v_2417 = false;
  };
  if (instanciador_c1_lamp) {
    v_2414 = sub_173;
  } else {
    v_2414 = sub_181;
  };
  if (instanciador_l1) {
    v_2415 = sub_173;
  } else {
    v_2415 = v_2414;
  };
  if (instanciador_c1) {
    sub_172 = v_2415;
  } else {
    sub_172 = v_2417;
  };
  sub_171 = sub_172;
  sub_170 = sub_171;
  sub_169 = sub_170;
  sub_168 = sub_169;
  if (instanciador_v_341) {
    sub_143 = sub_168;
  } else {
    sub_143 = sub_144;
  };
  sub_142 = sub_143;
  sub_203 = (instanciador_inpSl||false);
  if (instanciador_c_somL) {
    v_2358 = sub_34;
  } else {
    v_2358 = sub_203;
  };
  if (instanciador_ck_27_1) {
    v_2359 = v_2358;
  } else {
    v_2359 = sub_35;
  };
  if (instanciador_c_somL) {
    sub_204 = sub_203;
  } else {
    sub_204 = false;
  };
  if (instanciador_ck_27_1) {
    v_2360 = false;
  } else {
    v_2360 = sub_204;
  };
  if (instanciador_csl) {
    sub_202 = v_2359;
  } else {
    sub_202 = v_2360;
  };
  sub_201 = sub_202;
  if (instanciador_ck_23_1) {
    v_2361 = sub_201;
  } else {
    v_2361 = sub_75;
  };
  if (instanciador_inpMp) {
    sub_200 = v_2361;
  } else {
    sub_200 = sub_201;
  };
  sub_199 = sub_200;
  sub_198 = sub_199;
  if (instanciador_ck_25_1) {
    sub_197 = sub_198;
  } else {
    sub_197 = false;
  };
  if (instanciador_inpSp) {
    v_2364 = sub_197;
  } else {
    v_2364 = sub_198;
  };
  if (instanciador_c_somP) {
    v_2365 = v_2364;
  } else {
    v_2365 = sub_198;
  };
  if (instanciador_inpSp) {
    v_2362 = false;
  } else {
    v_2362 = sub_197;
  };
  if (instanciador_c_somP) {
    v_2363 = false;
  } else {
    v_2363 = v_2362;
  };
  if (instanciador_csp) {
    sub_196 = v_2363;
  } else {
    sub_196 = v_2365;
  };
  if (instanciador_ck_21_1) {
    sub_205 = false;
  } else {
    sub_205 = sub_196;
  };
  if (instanciador_inpMl) {
    v_2368 = sub_205;
  } else {
    v_2368 = false;
  };
  if (instanciador_c_microL) {
    v_2369 = v_2368;
  } else {
    v_2369 = false;
  };
  if (instanciador_inpMl) {
    v_2366 = sub_196;
  } else {
    v_2366 = sub_205;
  };
  if (instanciador_c_microL) {
    v_2367 = sub_196;
  } else {
    v_2367 = v_2366;
  };
  if (instanciador_cml) {
    sub_195 = v_2367;
  } else {
    sub_195 = v_2369;
  };
  if (instanciador_ck_19_1) {
    sub_206 = false;
  } else {
    sub_206 = sub_195;
  };
  if (instanciador_lv) {
    v_2372 = sub_195;
  } else {
    v_2372 = sub_206;
  };
  if (instanciador_cv) {
    v_2373 = v_2372;
  } else {
    v_2373 = false;
  };
  if (instanciador_lv) {
    v_2370 = sub_206;
  } else {
    v_2370 = false;
  };
  if (instanciador_cv) {
    v_2371 = sub_195;
  } else {
    v_2371 = v_2370;
  };
  if (instanciador_c_vent) {
    sub_194 = v_2371;
  } else {
    sub_194 = v_2373;
  };
  if (instanciador_ck_17_1) {
    sub_207 = false;
  } else {
    sub_207 = sub_194;
  };
  if (instanciador_lx) {
    v_2376 = sub_207;
  } else {
    v_2376 = false;
  };
  if (instanciador_c_lampExt) {
    v_2377 = v_2376;
  } else {
    v_2377 = false;
  };
  if (instanciador_lx) {
    v_2374 = sub_194;
  } else {
    v_2374 = sub_207;
  };
  if (instanciador_c_lampExt) {
    v_2375 = sub_194;
  } else {
    v_2375 = v_2374;
  };
  if (instanciador_cx) {
    sub_193 = v_2375;
  } else {
    sub_193 = v_2377;
  };
  if (instanciador_ck_15_1) {
    sub_192 = sub_193;
  } else {
    sub_192 = false;
  };
  if (instanciador_l4) {
    v_2380 = sub_192;
  } else {
    v_2380 = sub_193;
  };
  if (instanciador_c4_lamp) {
    v_2381 = v_2380;
  } else {
    v_2381 = sub_193;
  };
  if (instanciador_l4) {
    v_2378 = false;
  } else {
    v_2378 = sub_192;
  };
  if (instanciador_c4_lamp) {
    v_2379 = false;
  } else {
    v_2379 = v_2378;
  };
  if (instanciador_c4) {
    sub_191 = v_2379;
  } else {
    sub_191 = v_2381;
  };
  if (instanciador_ck_13_1) {
    sub_208 = false;
  } else {
    sub_208 = sub_191;
  };
  if (instanciador_c3_lamp) {
    v_2384 = sub_208;
  } else {
    v_2384 = false;
  };
  if (instanciador_l3) {
    v_2385 = v_2384;
  } else {
    v_2385 = false;
  };
  if (instanciador_c3_lamp) {
    v_2382 = sub_191;
  } else {
    v_2382 = sub_208;
  };
  if (instanciador_l3) {
    v_2383 = sub_191;
  } else {
    v_2383 = v_2382;
  };
  if (instanciador_c3) {
    sub_190 = v_2383;
  } else {
    sub_190 = v_2385;
  };
  if (instanciador_ck_11_1) {
    sub_189 = sub_190;
  } else {
    sub_189 = false;
  };
  if (instanciador_c2_lamp) {
    v_2388 = sub_189;
  } else {
    v_2388 = sub_190;
  };
  if (instanciador_l2) {
    v_2389 = v_2388;
  } else {
    v_2389 = sub_190;
  };
  if (instanciador_c2_lamp) {
    v_2386 = false;
  } else {
    v_2386 = sub_189;
  };
  if (instanciador_l2) {
    v_2387 = false;
  } else {
    v_2387 = v_2386;
  };
  if (instanciador_c2) {
    sub_188 = v_2387;
  } else {
    sub_188 = v_2389;
  };
  if (instanciador_ck_9_1) {
    sub_187 = sub_188;
  } else {
    sub_187 = false;
  };
  if (instanciador_c1_lamp) {
    v_2392 = sub_187;
  } else {
    v_2392 = sub_188;
  };
  if (instanciador_l1) {
    v_2393 = v_2392;
  } else {
    v_2393 = sub_188;
  };
  if (instanciador_c1_lamp) {
    v_2390 = false;
  } else {
    v_2390 = sub_187;
  };
  if (instanciador_l1) {
    v_2391 = false;
  } else {
    v_2391 = v_2390;
  };
  if (instanciador_c1) {
    sub_186 = v_2391;
  } else {
    sub_186 = v_2393;
  };
  sub_185 = sub_186;
  sub_184 = sub_185;
  sub_238 = sub_35;
  sub_237 = sub_238;
  sub_236 = sub_237;
  sub_235 = sub_236;
  sub_234 = sub_235;
  sub_233 = sub_234;
  sub_232 = sub_233;
  sub_231 = sub_232;
  sub_230 = sub_231;
  sub_229 = sub_230;
  sub_228 = sub_229;
  sub_227 = sub_228;
  sub_226 = sub_227;
  sub_225 = sub_226;
  sub_224 = sub_225;
  sub_223 = sub_224;
  sub_222 = sub_223;
  sub_221 = sub_222;
  sub_220 = sub_221;
  sub_219 = sub_220;
  sub_218 = sub_219;
  sub_217 = sub_218;
  sub_216 = sub_217;
  sub_215 = sub_216;
  sub_214 = sub_215;
  sub_213 = sub_214;
  sub_212 = sub_213;
  sub_211 = sub_212;
  sub_210 = sub_211;
  if (instanciador_neutro_input) {
    v_2394 = sub_210;
  } else {
    v_2394 = sub_148;
  };
  if (instanciador_inpMp) {
    sub_257 = sub_29;
  } else {
    sub_257 = sub_30;
  };
  sub_256 = sub_257;
  sub_255 = sub_256;
  if (instanciador_ck_25_1) {
    sub_254 = sub_255;
  } else {
    sub_254 = false;
  };
  if (instanciador_inpSp) {
    v_2328 = sub_254;
  } else {
    v_2328 = sub_255;
  };
  if (instanciador_c_somP) {
    v_2329 = v_2328;
  } else {
    v_2329 = sub_255;
  };
  if (instanciador_inpSp) {
    v_2326 = false;
  } else {
    v_2326 = sub_254;
  };
  if (instanciador_c_somP) {
    v_2327 = false;
  } else {
    v_2327 = v_2326;
  };
  if (instanciador_csp) {
    sub_253 = v_2327;
  } else {
    sub_253 = v_2329;
  };
  if (instanciador_ck_21_1) {
    sub_252 = sub_253;
  } else {
    sub_252 = false;
  };
  if (instanciador_inpMl) {
    v_2332 = sub_252;
  } else {
    v_2332 = sub_253;
  };
  if (instanciador_c_microL) {
    v_2333 = v_2332;
  } else {
    v_2333 = sub_253;
  };
  if (instanciador_inpMl) {
    v_2330 = false;
  } else {
    v_2330 = sub_252;
  };
  if (instanciador_c_microL) {
    v_2331 = false;
  } else {
    v_2331 = v_2330;
  };
  if (instanciador_cml) {
    sub_251 = v_2331;
  } else {
    sub_251 = v_2333;
  };
  if (instanciador_ck_19_1) {
    sub_250 = sub_251;
  } else {
    sub_250 = false;
  };
  if (instanciador_lv) {
    v_2336 = false;
  } else {
    v_2336 = sub_250;
  };
  if (instanciador_cv) {
    v_2337 = v_2336;
  } else {
    v_2337 = sub_251;
  };
  if (instanciador_lv) {
    v_2334 = sub_250;
  } else {
    v_2334 = sub_251;
  };
  if (instanciador_cv) {
    v_2335 = false;
  } else {
    v_2335 = v_2334;
  };
  if (instanciador_c_vent) {
    sub_249 = v_2335;
  } else {
    sub_249 = v_2337;
  };
  if (instanciador_ck_17_1) {
    sub_248 = sub_249;
  } else {
    sub_248 = false;
  };
  if (instanciador_lx) {
    v_2340 = sub_248;
  } else {
    v_2340 = sub_249;
  };
  if (instanciador_c_lampExt) {
    v_2341 = v_2340;
  } else {
    v_2341 = sub_249;
  };
  if (instanciador_lx) {
    v_2338 = false;
  } else {
    v_2338 = sub_248;
  };
  if (instanciador_c_lampExt) {
    v_2339 = false;
  } else {
    v_2339 = v_2338;
  };
  if (instanciador_cx) {
    sub_247 = v_2339;
  } else {
    sub_247 = v_2341;
  };
  if (instanciador_ck_15_1) {
    sub_246 = sub_247;
  } else {
    sub_246 = false;
  };
  if (instanciador_l4) {
    v_2344 = sub_246;
  } else {
    v_2344 = sub_247;
  };
  if (instanciador_c4_lamp) {
    v_2345 = v_2344;
  } else {
    v_2345 = sub_247;
  };
  if (instanciador_l4) {
    v_2342 = false;
  } else {
    v_2342 = sub_246;
  };
  if (instanciador_c4_lamp) {
    v_2343 = false;
  } else {
    v_2343 = v_2342;
  };
  if (instanciador_c4) {
    sub_245 = v_2343;
  } else {
    sub_245 = v_2345;
  };
  if (instanciador_ck_13_1) {
    sub_244 = sub_245;
  } else {
    sub_244 = false;
  };
  if (instanciador_c3_lamp) {
    v_2348 = sub_244;
  } else {
    v_2348 = sub_245;
  };
  if (instanciador_l3) {
    v_2349 = v_2348;
  } else {
    v_2349 = sub_245;
  };
  if (instanciador_c3_lamp) {
    v_2346 = false;
  } else {
    v_2346 = sub_244;
  };
  if (instanciador_l3) {
    v_2347 = false;
  } else {
    v_2347 = v_2346;
  };
  if (instanciador_c3) {
    sub_243 = v_2347;
  } else {
    sub_243 = v_2349;
  };
  if (instanciador_ck_11_1) {
    sub_242 = sub_243;
  } else {
    sub_242 = false;
  };
  if (instanciador_c2_lamp) {
    v_2352 = sub_242;
  } else {
    v_2352 = sub_243;
  };
  if (instanciador_l2) {
    v_2353 = v_2352;
  } else {
    v_2353 = sub_243;
  };
  if (instanciador_c2_lamp) {
    v_2350 = false;
  } else {
    v_2350 = sub_242;
  };
  if (instanciador_l2) {
    v_2351 = false;
  } else {
    v_2351 = v_2350;
  };
  if (instanciador_c2) {
    sub_241 = v_2351;
  } else {
    sub_241 = v_2353;
  };
  if (instanciador_ck_9_1) {
    sub_240 = sub_241;
  } else {
    sub_240 = false;
  };
  if (instanciador_c1_lamp) {
    v_2356 = sub_240;
  } else {
    v_2356 = sub_241;
  };
  if (instanciador_l1) {
    v_2357 = v_2356;
  } else {
    v_2357 = sub_241;
  };
  if (instanciador_c1_lamp) {
    v_2354 = false;
  } else {
    v_2354 = sub_240;
  };
  if (instanciador_l1) {
    v_2355 = false;
  } else {
    v_2355 = v_2354;
  };
  if (instanciador_c1) {
    sub_239 = v_2355;
  } else {
    sub_239 = v_2357;
  };
  if (instanciador_neutro_input) {
    sub_209 = sub_210;
  } else {
    sub_209 = sub_239;
  };
  if (instanciador_seguranca_input) {
    v_2395 = sub_209;
  } else {
    v_2395 = v_2394;
  };
  if (instanciador_domingol_input) {
    v_2396 = sub_184;
  } else {
    v_2396 = v_2395;
  };
  if (instanciador_domingo_input) {
    sub_183 = sub_169;
  } else {
    sub_183 = v_2396;
  };
  if (instanciador_v_341) {
    v_2397 = sub_168;
  } else {
    v_2397 = sub_183;
  };
  if (instanciador_sexta_input) {
    sub_182 = sub_168;
  } else {
    sub_182 = v_2397;
  };
  if (instanciador_v_339) {
    v_2450 = sub_182;
  } else {
    v_2450 = sub_142;
  };
  if (instanciador_neutro_input) {
    sub_262 = sub_210;
  } else {
    sub_262 = sub_172;
  };
  if (instanciador_seguranca_input) {
    v_2325 = sub_209;
  } else {
    v_2325 = sub_262;
  };
  if (instanciador_domingol_input) {
    sub_261 = sub_184;
  } else {
    sub_261 = v_2325;
  };
  if (instanciador_domingo_input) {
    sub_260 = sub_169;
  } else {
    sub_260 = sub_261;
  };
  if (instanciador_v_341) {
    sub_259 = sub_168;
  } else {
    sub_259 = sub_260;
  };
  sub_258 = sub_259;
  if (instanciador_v_339) {
    v_2451 = sub_182;
  } else {
    v_2451 = sub_258;
  };
  if (instanciador_ebd_input) {
    sub_141 = v_2450;
  } else {
    sub_141 = v_2451;
  };
  if (instanciador_seguranca_input) {
    v_2321 = sub_239;
  } else {
    v_2321 = sub_210;
  };
  if (instanciador_domingol_input) {
    v_2322 = sub_184;
    v_2320 = sub_184;
  } else {
    v_2322 = v_2321;
    v_2320 = sub_170;
  };
  if (instanciador_domingo_input) {
    v_2323 = v_2320;
  } else {
    v_2323 = v_2322;
  };
  if (instanciador_domingol_input) {
    v_2319 = sub_184;
    v_2318 = sub_184;
  } else {
    v_2319 = sub_209;
    v_2318 = sub_262;
  };
  if (instanciador_domingo_input) {
    sub_264 = v_2318;
  } else {
    sub_264 = v_2319;
  };
  if (instanciador_v_341) {
    v_2324 = v_2323;
  } else {
    v_2324 = sub_264;
  };
  if (instanciador_sexta_input) {
    sub_263 = sub_168;
  } else {
    sub_263 = v_2324;
  };
  if (instanciador_neutro_input) {
    v = sub_210;
  } else {
    v = sub_186;
  };
  if (instanciador_seguranca_input) {
    sub_266 = sub_209;
  } else {
    sub_266 = v;
  };
  if (instanciador_domingo_input) {
    sub_265 = sub_169;
  } else {
    sub_265 = sub_266;
  };
  if (instanciador_v_341) {
    v_2598 = sub_261;
  } else {
    v_2598 = sub_265;
  };
  if (instanciador_sexta_input) {
    v_2599 = sub_168;
  } else {
    v_2599 = v_2598;
  };
  if (instanciador_v_339) {
    v_2600 = v_2599;
  } else {
    v_2600 = sub_263;
  };
  if (instanciador_ebd_input) {
    v_2601 = sub_144;
  } else {
    v_2601 = v_2600;
  };
  if (instanciador_v_340) {
    v_2602 = v_2601;
  } else {
    v_2602 = sub_141;
  };
  if (p_instanciador_c_microP) {
    sub_0 = v_2602;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c_microP = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_cml_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_c_microL,
  int instanciador_csl, int instanciador_c_somL, int instanciador_csp,
  int instanciador_c_somP, int instanciador_c_vent, int instanciador_cv,
  int instanciador_cx, int instanciador_c4, int instanciador_c3,
  int instanciador_c2, int instanciador_c1, int instanciador_c_lampExt,
  int instanciador_c4_lamp, int instanciador_c3_lamp,
  int instanciador_c2_lamp, int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_cml_out* _out) {
  
  int v_2873;
  int v_2872;
  int v_2871;
  int v_2870;
  int v_2869;
  int v_2868;
  int v_2867;
  int v_2866;
  int v_2865;
  int v_2864;
  int v_2863;
  int v_2862;
  int v_2861;
  int v_2860;
  int v_2859;
  int v_2858;
  int v_2857;
  int v_2856;
  int v_2855;
  int v_2854;
  int v_2853;
  int v_2852;
  int v_2851;
  int v_2850;
  int v_2849;
  int v_2848;
  int v_2847;
  int v_2846;
  int v_2845;
  int v_2844;
  int v_2843;
  int v_2842;
  int v_2841;
  int v_2840;
  int v_2839;
  int v_2838;
  int v_2837;
  int v_2836;
  int v_2835;
  int v_2834;
  int v_2833;
  int v_2832;
  int v_2831;
  int v_2830;
  int v_2829;
  int v_2828;
  int v_2827;
  int v_2826;
  int v_2825;
  int v_2824;
  int v_2823;
  int v_2822;
  int v_2821;
  int v_2820;
  int v_2819;
  int v_2818;
  int v_2817;
  int v_2816;
  int v_2815;
  int v_2814;
  int v_2813;
  int v_2812;
  int v_2811;
  int v_2810;
  int v_2809;
  int v_2808;
  int v_2807;
  int v_2806;
  int v_2805;
  int v_2804;
  int v_2803;
  int v_2802;
  int v_2801;
  int v_2800;
  int v_2799;
  int v_2798;
  int v_2797;
  int v_2796;
  int v_2795;
  int v_2794;
  int v_2793;
  int v_2792;
  int v_2791;
  int v_2790;
  int v_2789;
  int v_2788;
  int v_2787;
  int v_2786;
  int v_2785;
  int v_2784;
  int v_2783;
  int v_2782;
  int v_2781;
  int v_2780;
  int v_2779;
  int v_2778;
  int v_2777;
  int v_2776;
  int v_2775;
  int v_2774;
  int v_2773;
  int v_2772;
  int v_2771;
  int v_2770;
  int v_2769;
  int v_2768;
  int v_2767;
  int v_2766;
  int v_2765;
  int v_2764;
  int v_2763;
  int v_2762;
  int v_2761;
  int v_2760;
  int v_2759;
  int v_2758;
  int v_2757;
  int v_2756;
  int v_2755;
  int v_2754;
  int v_2753;
  int v_2752;
  int v_2751;
  int v_2750;
  int v_2749;
  int v_2748;
  int v_2747;
  int v_2746;
  int v_2745;
  int v_2744;
  int v_2743;
  int v_2742;
  int v_2741;
  int v_2740;
  int v_2739;
  int v_2738;
  int v_2737;
  int v_2736;
  int v_2735;
  int v_2734;
  int v_2733;
  int v_2732;
  int v_2731;
  int v_2730;
  int v_2729;
  int v_2728;
  int v_2727;
  int v_2726;
  int v_2725;
  int v_2724;
  int v_2723;
  int v_2722;
  int v_2721;
  int v_2720;
  int v_2719;
  int v_2718;
  int v_2717;
  int v_2716;
  int v_2715;
  int v_2714;
  int v_2713;
  int v_2712;
  int v_2711;
  int v_2710;
  int v_2709;
  int v_2708;
  int v_2707;
  int v_2706;
  int v_2705;
  int v_2704;
  int v_2703;
  int v_2702;
  int v_2701;
  int v_2700;
  int v_2699;
  int v_2698;
  int v_2697;
  int v_2696;
  int v_2695;
  int v_2694;
  int v_2693;
  int v_2692;
  int v_2691;
  int v_2690;
  int v_2689;
  int v_2688;
  int v_2687;
  int v_2686;
  int v_2685;
  int v_2684;
  int v_2683;
  int v_2682;
  int v_2681;
  int v_2680;
  int v_2679;
  int v_2678;
  int v_2677;
  int v_2676;
  int v_2675;
  int v_2674;
  int v_2673;
  int v_2672;
  int v_2671;
  int v_2670;
  int v_2669;
  int v_2668;
  int v_2667;
  int v_2666;
  int v_2665;
  int v_2664;
  int v_2663;
  int v_2662;
  int v_2661;
  int v_2660;
  int v_2659;
  int v_2658;
  int v_2657;
  int v_2656;
  int v_2655;
  int v_2654;
  int v_2653;
  int v_2652;
  int v_2651;
  int v_2650;
  int v_2649;
  int v_2648;
  int v_2647;
  int v_2646;
  int v_2645;
  int v_2644;
  int v_2643;
  int v_2642;
  int v_2641;
  int v_2640;
  int v_2639;
  int v_2638;
  int v_2637;
  int v_2636;
  int v_2635;
  int v_2634;
  int v_2633;
  int v_2632;
  int v_2631;
  int v_2630;
  int v_2629;
  int v_2628;
  int v_2627;
  int v_2626;
  int v_2625;
  int v_2624;
  int v_2623;
  int v_2622;
  int v_2621;
  int v_2620;
  int v_2619;
  int v_2618;
  int v_2617;
  int v_2616;
  int v_2615;
  int v_2614;
  int v_2613;
  int v_2612;
  int v_2611;
  int v_2610;
  int v_2609;
  int v_2608;
  int v_2607;
  int v_2606;
  int v_2605;
  int v_2604;
  int v_2603;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  int sub_246;
  int sub_247;
  int sub_248;
  int sub_249;
  int sub_250;
  int sub_251;
  int sub_252;
  int sub_253;
  int sub_254;
  sub_26 = (instanciador_inpSl&&false);
  if (instanciador_c_somL) {
    v_2831 = false;
  } else {
    v_2831 = sub_26;
  };
  if (instanciador_ck_27_1) {
    v_2832 = v_2831;
  } else {
    v_2832 = false;
  };
  sub_28 = false;
  if (instanciador_c_somL) {
    sub_27 = sub_26;
  } else {
    sub_27 = sub_28;
  };
  sub_29 = sub_28;
  if (instanciador_ck_27_1) {
    v_2833 = sub_29;
  } else {
    v_2833 = sub_27;
  };
  if (instanciador_csl) {
    sub_25 = v_2832;
  } else {
    sub_25 = v_2833;
  };
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  if (instanciador_ck_25_1) {
    sub_30 = false;
  } else {
    sub_30 = sub_21;
  };
  if (instanciador_inpSp) {
    v_2836 = sub_30;
  } else {
    v_2836 = false;
  };
  if (instanciador_c_somP) {
    v_2837 = v_2836;
  } else {
    v_2837 = false;
  };
  if (instanciador_inpSp) {
    v_2834 = sub_21;
  } else {
    v_2834 = sub_30;
  };
  if (instanciador_c_somP) {
    v_2835 = sub_20;
  } else {
    v_2835 = v_2834;
  };
  if (instanciador_csp) {
    sub_19 = v_2835;
  } else {
    sub_19 = v_2837;
  };
  if (instanciador_ck_21_1) {
    v_2838 = sub_19;
  } else {
    v_2838 = false;
  };
  if (instanciador_inpMl) {
    sub_18 = v_2838;
  } else {
    sub_18 = sub_19;
  };
  if (instanciador_c_microL) {
    sub_17 = sub_18;
  } else {
    sub_17 = sub_19;
  };
  if (instanciador_ck_19_1) {
    sub_31 = false;
  } else {
    sub_31 = sub_17;
  };
  if (instanciador_lv) {
    v_2841 = sub_17;
  } else {
    v_2841 = sub_31;
  };
  if (instanciador_cv) {
    v_2842 = v_2841;
  } else {
    v_2842 = false;
  };
  if (instanciador_lv) {
    v_2839 = sub_31;
  } else {
    v_2839 = false;
  };
  if (instanciador_cv) {
    v_2840 = sub_17;
  } else {
    v_2840 = v_2839;
  };
  if (instanciador_c_vent) {
    sub_16 = v_2840;
  } else {
    sub_16 = v_2842;
  };
  if (instanciador_ck_17_1) {
    sub_15 = sub_16;
  } else {
    sub_15 = false;
  };
  if (instanciador_lx) {
    v_2845 = sub_15;
    v_2843 = false;
  } else {
    v_2845 = sub_16;
    v_2843 = sub_15;
  };
  if (instanciador_c_lampExt) {
    v_2844 = false;
  } else {
    v_2844 = v_2843;
  };
  sub_32 = sub_16;
  if (instanciador_c_lampExt) {
    v_2846 = v_2845;
  } else {
    v_2846 = sub_32;
  };
  if (instanciador_cx) {
    sub_14 = v_2844;
  } else {
    sub_14 = v_2846;
  };
  if (instanciador_ck_15_1) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (instanciador_l4) {
    v_2849 = sub_13;
  } else {
    v_2849 = sub_14;
  };
  if (instanciador_c4_lamp) {
    v_2850 = v_2849;
  } else {
    v_2850 = sub_14;
  };
  if (instanciador_l4) {
    v_2847 = false;
  } else {
    v_2847 = sub_13;
  };
  if (instanciador_c4_lamp) {
    v_2848 = false;
  } else {
    v_2848 = v_2847;
  };
  if (instanciador_c4) {
    sub_12 = v_2848;
  } else {
    sub_12 = v_2850;
  };
  if (instanciador_ck_13_1) {
    sub_33 = false;
  } else {
    sub_33 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_2853 = sub_33;
  } else {
    v_2853 = false;
  };
  if (instanciador_l3) {
    v_2854 = v_2853;
  } else {
    v_2854 = false;
  };
  if (instanciador_c3_lamp) {
    v_2851 = sub_12;
  } else {
    v_2851 = sub_33;
  };
  if (instanciador_l3) {
    v_2852 = sub_12;
  } else {
    v_2852 = v_2851;
  };
  if (instanciador_c3) {
    sub_11 = v_2852;
  } else {
    sub_11 = v_2854;
  };
  if (instanciador_ck_11_1) {
    sub_34 = false;
  } else {
    sub_34 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_2857 = sub_34;
  } else {
    v_2857 = false;
  };
  if (instanciador_l2) {
    v_2858 = v_2857;
  } else {
    v_2858 = false;
  };
  if (instanciador_c2_lamp) {
    v_2855 = sub_11;
  } else {
    v_2855 = sub_34;
  };
  if (instanciador_l2) {
    v_2856 = sub_11;
  } else {
    v_2856 = v_2855;
  };
  if (instanciador_c2) {
    sub_10 = v_2856;
  } else {
    sub_10 = v_2858;
  };
  if (instanciador_ck_9_1) {
    sub_35 = false;
  } else {
    sub_35 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_2861 = sub_35;
  } else {
    v_2861 = false;
  };
  if (instanciador_l1) {
    v_2862 = v_2861;
  } else {
    v_2862 = false;
  };
  if (instanciador_c1_lamp) {
    v_2859 = sub_10;
  } else {
    v_2859 = sub_35;
  };
  if (instanciador_l1) {
    v_2860 = sub_10;
  } else {
    v_2860 = v_2859;
  };
  if (instanciador_c1) {
    sub_9 = v_2860;
  } else {
    sub_9 = v_2862;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (instanciador_ck_17_1) {
    sub_45 = false;
  } else {
    sub_45 = sub_16;
  };
  if (instanciador_lx) {
    v_2813 = sub_45;
  } else {
    v_2813 = false;
  };
  if (instanciador_c_lampExt) {
    v_2814 = v_2813;
  } else {
    v_2814 = false;
  };
  if (instanciador_lx) {
    v_2811 = sub_16;
  } else {
    v_2811 = sub_45;
  };
  if (instanciador_c_lampExt) {
    v_2812 = sub_32;
  } else {
    v_2812 = v_2811;
  };
  if (instanciador_cx) {
    sub_44 = v_2812;
  } else {
    sub_44 = v_2814;
  };
  if (instanciador_ck_15_1) {
    sub_46 = false;
  } else {
    sub_46 = sub_44;
  };
  if (instanciador_l4) {
    v_2817 = sub_46;
  } else {
    v_2817 = false;
  };
  if (instanciador_c4_lamp) {
    v_2818 = v_2817;
  } else {
    v_2818 = false;
  };
  if (instanciador_l4) {
    v_2815 = sub_44;
  } else {
    v_2815 = sub_46;
  };
  if (instanciador_c4_lamp) {
    v_2816 = sub_44;
  } else {
    v_2816 = v_2815;
  };
  if (instanciador_c4) {
    sub_43 = v_2816;
  } else {
    sub_43 = v_2818;
  };
  if (instanciador_ck_13_1) {
    sub_47 = false;
  } else {
    sub_47 = sub_43;
  };
  if (instanciador_c3_lamp) {
    v_2821 = sub_47;
  } else {
    v_2821 = false;
  };
  if (instanciador_l3) {
    v_2822 = v_2821;
  } else {
    v_2822 = false;
  };
  if (instanciador_c3_lamp) {
    v_2819 = sub_43;
  } else {
    v_2819 = sub_47;
  };
  if (instanciador_l3) {
    v_2820 = sub_43;
  } else {
    v_2820 = v_2819;
  };
  if (instanciador_c3) {
    sub_42 = v_2820;
  } else {
    sub_42 = v_2822;
  };
  if (instanciador_ck_11_1) {
    sub_48 = false;
  } else {
    sub_48 = sub_42;
  };
  if (instanciador_c2_lamp) {
    v_2825 = sub_48;
  } else {
    v_2825 = false;
  };
  if (instanciador_l2) {
    v_2826 = v_2825;
  } else {
    v_2826 = false;
  };
  if (instanciador_c2_lamp) {
    v_2823 = sub_42;
  } else {
    v_2823 = sub_48;
  };
  if (instanciador_l2) {
    v_2824 = sub_42;
  } else {
    v_2824 = v_2823;
  };
  if (instanciador_c2) {
    sub_41 = v_2824;
  } else {
    sub_41 = v_2826;
  };
  if (instanciador_ck_9_1) {
    sub_49 = false;
  } else {
    sub_49 = sub_41;
  };
  if (instanciador_c1_lamp) {
    v_2829 = sub_49;
  } else {
    v_2829 = false;
  };
  if (instanciador_l1) {
    v_2830 = v_2829;
  } else {
    v_2830 = false;
  };
  if (instanciador_c1_lamp) {
    v_2827 = sub_41;
  } else {
    v_2827 = sub_49;
  };
  if (instanciador_l1) {
    v_2828 = sub_41;
  } else {
    v_2828 = v_2827;
  };
  if (instanciador_c1) {
    sub_40 = v_2828;
  } else {
    sub_40 = v_2830;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  if (instanciador_v_341) {
    sub_4 = sub_36;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  v_2773 = !(instanciador_inpSl);
  sub_71 = (v_2773&&false);
  if (instanciador_c_somL) {
    v_2774 = sub_28;
  } else {
    v_2774 = sub_71;
  };
  if (instanciador_ck_27_1) {
    v_2775 = v_2774;
  } else {
    v_2775 = sub_29;
  };
  if (instanciador_c_somL) {
    sub_72 = sub_71;
  } else {
    sub_72 = false;
  };
  if (instanciador_ck_27_1) {
    v_2776 = false;
  } else {
    v_2776 = sub_72;
  };
  if (instanciador_csl) {
    sub_70 = v_2775;
  } else {
    sub_70 = v_2776;
  };
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  if (instanciador_ck_25_1) {
    sub_65 = sub_66;
  } else {
    sub_65 = false;
  };
  if (instanciador_inpSp) {
    v_2779 = sub_65;
  } else {
    v_2779 = sub_66;
  };
  if (instanciador_c_somP) {
    v_2780 = v_2779;
  } else {
    v_2780 = sub_66;
  };
  if (instanciador_inpSp) {
    v_2777 = false;
  } else {
    v_2777 = sub_65;
  };
  if (instanciador_c_somP) {
    v_2778 = false;
  } else {
    v_2778 = v_2777;
  };
  if (instanciador_csp) {
    sub_64 = v_2778;
  } else {
    sub_64 = v_2780;
  };
  sub_81 = true;
  sub_80 = sub_81;
  sub_82 = (instanciador_inpSl||false);
  if (instanciador_c_somL) {
    v_2766 = sub_81;
  } else {
    v_2766 = sub_82;
  };
  if (instanciador_ck_27_1) {
    v_2767 = v_2766;
  } else {
    v_2767 = sub_80;
  };
  if (instanciador_c_somL) {
    sub_83 = sub_82;
  } else {
    sub_83 = false;
  };
  if (instanciador_ck_27_1) {
    v_2768 = false;
  } else {
    v_2768 = sub_83;
  };
  if (instanciador_csl) {
    sub_79 = v_2767;
  } else {
    sub_79 = v_2768;
  };
  sub_78 = sub_79;
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  if (instanciador_ck_25_1) {
    sub_74 = sub_75;
  } else {
    sub_74 = false;
  };
  if (instanciador_inpSp) {
    v_2771 = sub_74;
  } else {
    v_2771 = sub_75;
  };
  if (instanciador_c_somP) {
    v_2772 = v_2771;
  } else {
    v_2772 = sub_75;
  };
  if (instanciador_inpSp) {
    v_2769 = false;
  } else {
    v_2769 = sub_74;
  };
  if (instanciador_c_somP) {
    v_2770 = false;
  } else {
    v_2770 = v_2769;
  };
  if (instanciador_csp) {
    sub_73 = v_2770;
  } else {
    sub_73 = v_2772;
  };
  if (instanciador_ck_21_1) {
    v_2781 = sub_73;
  } else {
    v_2781 = sub_64;
  };
  if (instanciador_inpMl) {
    v_2782 = v_2781;
  } else {
    v_2782 = sub_73;
  };
  if (instanciador_ck_21_1) {
    v_2765 = false;
  } else {
    v_2765 = sub_73;
  };
  if (instanciador_inpMl) {
    sub_84 = sub_73;
  } else {
    sub_84 = v_2765;
  };
  if (instanciador_c_microL) {
    sub_63 = v_2782;
  } else {
    sub_63 = sub_84;
  };
  if (instanciador_ck_19_1) {
    sub_85 = false;
  } else {
    sub_85 = sub_63;
  };
  if (instanciador_lv) {
    v_2785 = sub_63;
  } else {
    v_2785 = sub_85;
  };
  if (instanciador_cv) {
    v_2786 = v_2785;
  } else {
    v_2786 = false;
  };
  if (instanciador_lv) {
    v_2783 = sub_85;
  } else {
    v_2783 = false;
  };
  if (instanciador_cv) {
    v_2784 = sub_63;
  } else {
    v_2784 = v_2783;
  };
  if (instanciador_c_vent) {
    sub_62 = v_2784;
  } else {
    sub_62 = v_2786;
  };
  if (instanciador_ck_17_1) {
    sub_86 = false;
  } else {
    sub_86 = sub_62;
  };
  if (instanciador_lx) {
    v_2789 = sub_86;
  } else {
    v_2789 = false;
  };
  if (instanciador_c_lampExt) {
    v_2790 = v_2789;
  } else {
    v_2790 = false;
  };
  if (instanciador_lx) {
    v_2787 = sub_62;
  } else {
    v_2787 = sub_86;
  };
  if (instanciador_c_lampExt) {
    v_2788 = sub_62;
  } else {
    v_2788 = v_2787;
  };
  if (instanciador_cx) {
    sub_61 = v_2788;
  } else {
    sub_61 = v_2790;
  };
  if (instanciador_ck_15_1) {
    sub_60 = sub_61;
  } else {
    sub_60 = false;
  };
  if (instanciador_l4) {
    v_2793 = sub_60;
  } else {
    v_2793 = sub_61;
  };
  if (instanciador_c4_lamp) {
    v_2794 = v_2793;
  } else {
    v_2794 = sub_61;
  };
  if (instanciador_l4) {
    v_2791 = false;
  } else {
    v_2791 = sub_60;
  };
  if (instanciador_c4_lamp) {
    v_2792 = false;
  } else {
    v_2792 = v_2791;
  };
  if (instanciador_c4) {
    sub_59 = v_2792;
  } else {
    sub_59 = v_2794;
  };
  if (instanciador_ck_13_1) {
    sub_87 = false;
  } else {
    sub_87 = sub_59;
  };
  if (instanciador_c3_lamp) {
    v_2797 = sub_87;
  } else {
    v_2797 = false;
  };
  if (instanciador_l3) {
    v_2798 = v_2797;
  } else {
    v_2798 = false;
  };
  if (instanciador_c3_lamp) {
    v_2795 = sub_59;
  } else {
    v_2795 = sub_87;
  };
  if (instanciador_l3) {
    v_2796 = sub_59;
  } else {
    v_2796 = v_2795;
  };
  if (instanciador_c3) {
    sub_58 = v_2796;
  } else {
    sub_58 = v_2798;
  };
  if (instanciador_ck_11_1) {
    sub_57 = sub_58;
  } else {
    sub_57 = false;
  };
  if (instanciador_c2_lamp) {
    v_2801 = sub_57;
  } else {
    v_2801 = sub_58;
  };
  if (instanciador_l2) {
    v_2802 = v_2801;
  } else {
    v_2802 = sub_58;
  };
  if (instanciador_c2_lamp) {
    v_2799 = false;
  } else {
    v_2799 = sub_57;
  };
  if (instanciador_l2) {
    v_2800 = false;
  } else {
    v_2800 = v_2799;
  };
  if (instanciador_c2) {
    sub_56 = v_2800;
  } else {
    sub_56 = v_2802;
  };
  if (instanciador_ck_9_1) {
    sub_55 = sub_56;
  } else {
    sub_55 = false;
  };
  if (instanciador_c1_lamp) {
    v_2805 = sub_55;
  } else {
    v_2805 = sub_56;
  };
  if (instanciador_l1) {
    v_2806 = v_2805;
  } else {
    v_2806 = sub_56;
  };
  if (instanciador_c1_lamp) {
    v_2803 = false;
  } else {
    v_2803 = sub_55;
  };
  if (instanciador_l1) {
    v_2804 = false;
  } else {
    v_2804 = v_2803;
  };
  if (instanciador_c1) {
    sub_54 = v_2804;
  } else {
    sub_54 = v_2806;
  };
  sub_53 = sub_54;
  sub_52 = sub_53;
  sub_116 = sub_29;
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  sub_90 = sub_91;
  sub_89 = sub_90;
  if (instanciador_neutro_input) {
    v_2807 = sub_89;
  } else {
    v_2807 = sub_9;
  };
  if (instanciador_ck_25_1) {
    sub_132 = sub_21;
  } else {
    sub_132 = false;
  };
  if (instanciador_inpSp) {
    v_2738 = sub_132;
  } else {
    v_2738 = sub_21;
  };
  if (instanciador_c_somP) {
    v_2739 = v_2738;
  } else {
    v_2739 = sub_20;
  };
  if (instanciador_inpSp) {
    v_2736 = false;
  } else {
    v_2736 = sub_132;
  };
  if (instanciador_c_somP) {
    v_2737 = false;
  } else {
    v_2737 = v_2736;
  };
  if (instanciador_csp) {
    sub_131 = v_2737;
  } else {
    sub_131 = v_2739;
  };
  if (instanciador_ck_21_1) {
    v_2740 = sub_131;
  } else {
    v_2740 = false;
  };
  if (instanciador_inpMl) {
    sub_130 = v_2740;
  } else {
    sub_130 = sub_131;
  };
  if (instanciador_c_microL) {
    sub_129 = sub_130;
  } else {
    sub_129 = sub_131;
  };
  if (instanciador_ck_19_1) {
    sub_128 = sub_129;
  } else {
    sub_128 = false;
  };
  if (instanciador_lv) {
    v_2743 = false;
  } else {
    v_2743 = sub_128;
  };
  if (instanciador_cv) {
    v_2744 = v_2743;
  } else {
    v_2744 = sub_129;
  };
  if (instanciador_lv) {
    v_2741 = sub_128;
  } else {
    v_2741 = sub_129;
  };
  if (instanciador_cv) {
    v_2742 = false;
  } else {
    v_2742 = v_2741;
  };
  if (instanciador_c_vent) {
    sub_127 = v_2742;
  } else {
    sub_127 = v_2744;
  };
  if (instanciador_ck_17_1) {
    sub_126 = sub_127;
  } else {
    sub_126 = false;
  };
  if (instanciador_lx) {
    v_2747 = sub_126;
  } else {
    v_2747 = sub_127;
  };
  if (instanciador_c_lampExt) {
    v_2748 = v_2747;
  } else {
    v_2748 = sub_127;
  };
  if (instanciador_lx) {
    v_2745 = false;
  } else {
    v_2745 = sub_126;
  };
  if (instanciador_c_lampExt) {
    v_2746 = false;
  } else {
    v_2746 = v_2745;
  };
  if (instanciador_cx) {
    sub_125 = v_2746;
  } else {
    sub_125 = v_2748;
  };
  if (instanciador_ck_15_1) {
    sub_124 = sub_125;
  } else {
    sub_124 = false;
  };
  if (instanciador_l4) {
    v_2751 = sub_124;
  } else {
    v_2751 = sub_125;
  };
  if (instanciador_c4_lamp) {
    v_2752 = v_2751;
  } else {
    v_2752 = sub_125;
  };
  if (instanciador_l4) {
    v_2749 = false;
  } else {
    v_2749 = sub_124;
  };
  if (instanciador_c4_lamp) {
    v_2750 = false;
  } else {
    v_2750 = v_2749;
  };
  if (instanciador_c4) {
    sub_123 = v_2750;
  } else {
    sub_123 = v_2752;
  };
  if (instanciador_ck_13_1) {
    sub_122 = sub_123;
  } else {
    sub_122 = false;
  };
  if (instanciador_c3_lamp) {
    v_2755 = sub_122;
  } else {
    v_2755 = sub_123;
  };
  if (instanciador_l3) {
    v_2756 = v_2755;
  } else {
    v_2756 = sub_123;
  };
  if (instanciador_c3_lamp) {
    v_2753 = false;
  } else {
    v_2753 = sub_122;
  };
  if (instanciador_l3) {
    v_2754 = false;
  } else {
    v_2754 = v_2753;
  };
  if (instanciador_c3) {
    sub_121 = v_2754;
  } else {
    sub_121 = v_2756;
  };
  if (instanciador_ck_11_1) {
    sub_120 = sub_121;
  } else {
    sub_120 = false;
  };
  if (instanciador_c2_lamp) {
    v_2759 = sub_120;
  } else {
    v_2759 = sub_121;
  };
  if (instanciador_l2) {
    v_2760 = v_2759;
  } else {
    v_2760 = sub_121;
  };
  if (instanciador_c2_lamp) {
    v_2757 = false;
  } else {
    v_2757 = sub_120;
  };
  if (instanciador_l2) {
    v_2758 = false;
  } else {
    v_2758 = v_2757;
  };
  if (instanciador_c2) {
    sub_119 = v_2758;
  } else {
    sub_119 = v_2760;
  };
  if (instanciador_ck_9_1) {
    sub_118 = sub_119;
  } else {
    sub_118 = false;
  };
  if (instanciador_c1_lamp) {
    v_2763 = sub_118;
  } else {
    v_2763 = sub_119;
  };
  if (instanciador_l1) {
    v_2764 = v_2763;
  } else {
    v_2764 = sub_119;
  };
  if (instanciador_c1_lamp) {
    v_2761 = false;
  } else {
    v_2761 = sub_118;
  };
  if (instanciador_l1) {
    v_2762 = false;
  } else {
    v_2762 = v_2761;
  };
  if (instanciador_c1) {
    sub_117 = v_2762;
  } else {
    sub_117 = v_2764;
  };
  if (instanciador_neutro_input) {
    sub_88 = sub_89;
  } else {
    sub_88 = sub_117;
  };
  if (instanciador_seguranca_input) {
    v_2808 = sub_88;
  } else {
    v_2808 = v_2807;
  };
  if (instanciador_domingol_input) {
    v_2809 = sub_52;
  } else {
    v_2809 = v_2808;
  };
  if (instanciador_domingo_input) {
    sub_51 = sub_37;
  } else {
    sub_51 = v_2809;
  };
  if (instanciador_v_341) {
    v_2810 = sub_36;
  } else {
    v_2810 = sub_51;
  };
  if (instanciador_sexta_input) {
    sub_50 = sub_36;
  } else {
    sub_50 = v_2810;
  };
  if (instanciador_v_339) {
    v_2863 = sub_50;
  } else {
    v_2863 = sub_3;
  };
  if (instanciador_neutro_input) {
    sub_137 = sub_89;
  } else {
    sub_137 = sub_40;
  };
  if (instanciador_seguranca_input) {
    v_2735 = sub_88;
  } else {
    v_2735 = sub_137;
  };
  if (instanciador_domingol_input) {
    sub_136 = sub_52;
  } else {
    sub_136 = v_2735;
  };
  if (instanciador_domingo_input) {
    sub_135 = sub_37;
  } else {
    sub_135 = sub_136;
  };
  if (instanciador_v_341) {
    sub_134 = sub_36;
  } else {
    sub_134 = sub_135;
  };
  sub_133 = sub_134;
  if (instanciador_v_339) {
    v_2864 = sub_50;
  } else {
    v_2864 = sub_133;
  };
  if (instanciador_ebd_input) {
    sub_2 = v_2863;
  } else {
    sub_2 = v_2864;
  };
  if (instanciador_seguranca_input) {
    v_2731 = sub_117;
  } else {
    v_2731 = sub_89;
  };
  if (instanciador_domingol_input) {
    v_2732 = sub_52;
    v_2730 = sub_52;
  } else {
    v_2732 = v_2731;
    v_2730 = sub_38;
  };
  if (instanciador_domingo_input) {
    v_2733 = v_2730;
  } else {
    v_2733 = v_2732;
  };
  if (instanciador_domingol_input) {
    v_2729 = sub_52;
    v_2728 = sub_52;
  } else {
    v_2729 = sub_88;
    v_2728 = sub_137;
  };
  if (instanciador_domingo_input) {
    sub_139 = v_2728;
  } else {
    sub_139 = v_2729;
  };
  if (instanciador_v_341) {
    v_2734 = v_2733;
  } else {
    v_2734 = sub_139;
  };
  if (instanciador_sexta_input) {
    sub_138 = sub_36;
  } else {
    sub_138 = v_2734;
  };
  if (instanciador_neutro_input) {
    v_2727 = sub_89;
  } else {
    v_2727 = sub_54;
  };
  if (instanciador_seguranca_input) {
    sub_141 = sub_88;
  } else {
    sub_141 = v_2727;
  };
  if (instanciador_domingo_input) {
    sub_140 = sub_37;
  } else {
    sub_140 = sub_141;
  };
  if (instanciador_v_341) {
    v_2865 = sub_136;
  } else {
    v_2865 = sub_140;
  };
  if (instanciador_sexta_input) {
    v_2866 = sub_36;
  } else {
    v_2866 = v_2865;
  };
  if (instanciador_v_339) {
    v_2867 = v_2866;
  } else {
    v_2867 = sub_138;
  };
  if (instanciador_ebd_input) {
    v_2868 = sub_5;
  } else {
    v_2868 = v_2867;
  };
  if (instanciador_v_340) {
    sub_1 = v_2868;
  } else {
    sub_1 = sub_2;
  };
  v_2690 = !(instanciador_inpSl);
  sub_164 = (v_2690||false);
  if (instanciador_c_somL) {
    v_2691 = false;
  } else {
    v_2691 = sub_164;
  };
  if (instanciador_ck_27_1) {
    v_2692 = v_2691;
  } else {
    v_2692 = false;
  };
  if (instanciador_c_somL) {
    sub_165 = sub_164;
  } else {
    sub_165 = sub_81;
  };
  if (instanciador_ck_27_1) {
    v_2693 = sub_80;
  } else {
    v_2693 = sub_165;
  };
  if (instanciador_csl) {
    sub_163 = v_2692;
  } else {
    sub_163 = v_2693;
  };
  sub_162 = sub_163;
  sub_161 = sub_162;
  sub_160 = sub_161;
  sub_159 = sub_160;
  sub_158 = sub_159;
  if (instanciador_ck_25_1) {
    sub_166 = false;
  } else {
    sub_166 = sub_159;
  };
  if (instanciador_inpSp) {
    v_2696 = sub_166;
  } else {
    v_2696 = false;
  };
  if (instanciador_c_somP) {
    v_2697 = v_2696;
  } else {
    v_2697 = false;
  };
  if (instanciador_inpSp) {
    v_2694 = sub_159;
  } else {
    v_2694 = sub_166;
  };
  if (instanciador_c_somP) {
    v_2695 = sub_158;
  } else {
    v_2695 = v_2694;
  };
  if (instanciador_csp) {
    v_2698 = v_2695;
  } else {
    v_2698 = v_2697;
  };
  if (instanciador_ck_21_1) {
    v_2699 = v_2698;
  } else {
    v_2699 = sub_19;
  };
  if (instanciador_inpMl) {
    v_2700 = sub_19;
  } else {
    v_2700 = v_2699;
  };
  if (instanciador_c_microL) {
    sub_157 = sub_18;
  } else {
    sub_157 = v_2700;
  };
  if (instanciador_ck_19_1) {
    sub_167 = false;
  } else {
    sub_167 = sub_157;
  };
  if (instanciador_lv) {
    v_2703 = sub_157;
  } else {
    v_2703 = sub_167;
  };
  if (instanciador_cv) {
    v_2704 = v_2703;
  } else {
    v_2704 = false;
  };
  if (instanciador_lv) {
    v_2701 = sub_167;
  } else {
    v_2701 = false;
  };
  if (instanciador_cv) {
    v_2702 = sub_157;
  } else {
    v_2702 = v_2701;
  };
  if (instanciador_c_vent) {
    sub_156 = v_2702;
  } else {
    sub_156 = v_2704;
  };
  if (instanciador_ck_17_1) {
    sub_155 = sub_156;
  } else {
    sub_155 = false;
  };
  if (instanciador_lx) {
    v_2707 = sub_155;
    v_2705 = false;
  } else {
    v_2707 = sub_156;
    v_2705 = sub_155;
  };
  if (instanciador_c_lampExt) {
    v_2706 = false;
  } else {
    v_2706 = v_2705;
  };
  sub_168 = sub_156;
  if (instanciador_c_lampExt) {
    v_2708 = v_2707;
  } else {
    v_2708 = sub_168;
  };
  if (instanciador_cx) {
    sub_154 = v_2706;
  } else {
    sub_154 = v_2708;
  };
  if (instanciador_ck_15_1) {
    sub_153 = sub_154;
  } else {
    sub_153 = false;
  };
  if (instanciador_l4) {
    v_2711 = sub_153;
  } else {
    v_2711 = sub_154;
  };
  if (instanciador_c4_lamp) {
    v_2712 = v_2711;
  } else {
    v_2712 = sub_154;
  };
  if (instanciador_l4) {
    v_2709 = false;
  } else {
    v_2709 = sub_153;
  };
  if (instanciador_c4_lamp) {
    v_2710 = false;
  } else {
    v_2710 = v_2709;
  };
  if (instanciador_c4) {
    sub_152 = v_2710;
  } else {
    sub_152 = v_2712;
  };
  if (instanciador_ck_13_1) {
    sub_169 = false;
  } else {
    sub_169 = sub_152;
  };
  if (instanciador_c3_lamp) {
    v_2715 = sub_169;
  } else {
    v_2715 = false;
  };
  if (instanciador_l3) {
    v_2716 = v_2715;
  } else {
    v_2716 = false;
  };
  if (instanciador_c3_lamp) {
    v_2713 = sub_152;
  } else {
    v_2713 = sub_169;
  };
  if (instanciador_l3) {
    v_2714 = sub_152;
  } else {
    v_2714 = v_2713;
  };
  if (instanciador_c3) {
    sub_151 = v_2714;
  } else {
    sub_151 = v_2716;
  };
  if (instanciador_ck_11_1) {
    sub_170 = false;
  } else {
    sub_170 = sub_151;
  };
  if (instanciador_c2_lamp) {
    v_2719 = sub_170;
  } else {
    v_2719 = false;
  };
  if (instanciador_l2) {
    v_2720 = v_2719;
  } else {
    v_2720 = false;
  };
  if (instanciador_c2_lamp) {
    v_2717 = sub_151;
  } else {
    v_2717 = sub_170;
  };
  if (instanciador_l2) {
    v_2718 = sub_151;
  } else {
    v_2718 = v_2717;
  };
  if (instanciador_c2) {
    sub_150 = v_2718;
  } else {
    sub_150 = v_2720;
  };
  if (instanciador_ck_9_1) {
    sub_171 = false;
  } else {
    sub_171 = sub_150;
  };
  if (instanciador_c1_lamp) {
    v_2723 = sub_171;
  } else {
    v_2723 = false;
  };
  if (instanciador_l1) {
    v_2724 = v_2723;
  } else {
    v_2724 = false;
  };
  if (instanciador_c1_lamp) {
    v_2721 = sub_150;
  } else {
    v_2721 = sub_171;
  };
  if (instanciador_l1) {
    v_2722 = sub_150;
  } else {
    v_2722 = v_2721;
  };
  if (instanciador_c1) {
    sub_149 = v_2722;
  } else {
    sub_149 = v_2724;
  };
  sub_148 = sub_149;
  sub_147 = sub_148;
  sub_146 = sub_147;
  sub_145 = sub_146;
  if (instanciador_ck_17_1) {
    sub_181 = false;
  } else {
    sub_181 = sub_156;
  };
  if (instanciador_lx) {
    v_2672 = sub_181;
  } else {
    v_2672 = false;
  };
  if (instanciador_c_lampExt) {
    v_2673 = v_2672;
  } else {
    v_2673 = false;
  };
  if (instanciador_lx) {
    v_2670 = sub_156;
  } else {
    v_2670 = sub_181;
  };
  if (instanciador_c_lampExt) {
    v_2671 = sub_168;
  } else {
    v_2671 = v_2670;
  };
  if (instanciador_cx) {
    sub_180 = v_2671;
  } else {
    sub_180 = v_2673;
  };
  if (instanciador_ck_15_1) {
    sub_182 = false;
  } else {
    sub_182 = sub_180;
  };
  if (instanciador_l4) {
    v_2676 = sub_182;
  } else {
    v_2676 = false;
  };
  if (instanciador_c4_lamp) {
    v_2677 = v_2676;
  } else {
    v_2677 = false;
  };
  if (instanciador_l4) {
    v_2674 = sub_180;
  } else {
    v_2674 = sub_182;
  };
  if (instanciador_c4_lamp) {
    v_2675 = sub_180;
  } else {
    v_2675 = v_2674;
  };
  if (instanciador_c4) {
    sub_179 = v_2675;
  } else {
    sub_179 = v_2677;
  };
  if (instanciador_ck_13_1) {
    sub_183 = false;
  } else {
    sub_183 = sub_179;
  };
  if (instanciador_c3_lamp) {
    v_2680 = sub_183;
  } else {
    v_2680 = false;
  };
  if (instanciador_l3) {
    v_2681 = v_2680;
  } else {
    v_2681 = false;
  };
  if (instanciador_c3_lamp) {
    v_2678 = sub_179;
  } else {
    v_2678 = sub_183;
  };
  if (instanciador_l3) {
    v_2679 = sub_179;
  } else {
    v_2679 = v_2678;
  };
  if (instanciador_c3) {
    sub_178 = v_2679;
  } else {
    sub_178 = v_2681;
  };
  if (instanciador_ck_11_1) {
    sub_184 = false;
  } else {
    sub_184 = sub_178;
  };
  if (instanciador_c2_lamp) {
    v_2684 = sub_184;
  } else {
    v_2684 = false;
  };
  if (instanciador_l2) {
    v_2685 = v_2684;
  } else {
    v_2685 = false;
  };
  if (instanciador_c2_lamp) {
    v_2682 = sub_178;
  } else {
    v_2682 = sub_184;
  };
  if (instanciador_l2) {
    v_2683 = sub_178;
  } else {
    v_2683 = v_2682;
  };
  if (instanciador_c2) {
    sub_177 = v_2683;
  } else {
    sub_177 = v_2685;
  };
  if (instanciador_ck_9_1) {
    sub_185 = false;
  } else {
    sub_185 = sub_177;
  };
  if (instanciador_c1_lamp) {
    v_2688 = sub_185;
  } else {
    v_2688 = false;
  };
  if (instanciador_l1) {
    v_2689 = v_2688;
  } else {
    v_2689 = false;
  };
  if (instanciador_c1_lamp) {
    v_2686 = sub_177;
  } else {
    v_2686 = sub_185;
  };
  if (instanciador_l1) {
    v_2687 = sub_177;
  } else {
    v_2687 = v_2686;
  };
  if (instanciador_c1) {
    sub_176 = v_2687;
  } else {
    sub_176 = v_2689;
  };
  sub_175 = sub_176;
  sub_174 = sub_175;
  sub_173 = sub_174;
  sub_172 = sub_173;
  if (instanciador_v_341) {
    sub_144 = sub_172;
  } else {
    sub_144 = sub_145;
  };
  sub_143 = sub_144;
  if (instanciador_c_microL) {
    sub_199 = sub_73;
  } else {
    sub_199 = sub_84;
  };
  if (instanciador_ck_19_1) {
    sub_200 = false;
  } else {
    sub_200 = sub_199;
  };
  if (instanciador_lv) {
    v_2644 = sub_199;
  } else {
    v_2644 = sub_200;
  };
  if (instanciador_cv) {
    v_2645 = v_2644;
  } else {
    v_2645 = false;
  };
  if (instanciador_lv) {
    v_2642 = sub_200;
  } else {
    v_2642 = false;
  };
  if (instanciador_cv) {
    v_2643 = sub_199;
  } else {
    v_2643 = v_2642;
  };
  if (instanciador_c_vent) {
    sub_198 = v_2643;
  } else {
    sub_198 = v_2645;
  };
  if (instanciador_ck_17_1) {
    sub_201 = false;
  } else {
    sub_201 = sub_198;
  };
  if (instanciador_lx) {
    v_2648 = sub_201;
  } else {
    v_2648 = false;
  };
  if (instanciador_c_lampExt) {
    v_2649 = v_2648;
  } else {
    v_2649 = false;
  };
  if (instanciador_lx) {
    v_2646 = sub_198;
  } else {
    v_2646 = sub_201;
  };
  if (instanciador_c_lampExt) {
    v_2647 = sub_198;
  } else {
    v_2647 = v_2646;
  };
  if (instanciador_cx) {
    sub_197 = v_2647;
  } else {
    sub_197 = v_2649;
  };
  if (instanciador_ck_15_1) {
    sub_196 = sub_197;
  } else {
    sub_196 = false;
  };
  if (instanciador_l4) {
    v_2652 = sub_196;
  } else {
    v_2652 = sub_197;
  };
  if (instanciador_c4_lamp) {
    v_2653 = v_2652;
  } else {
    v_2653 = sub_197;
  };
  if (instanciador_l4) {
    v_2650 = false;
  } else {
    v_2650 = sub_196;
  };
  if (instanciador_c4_lamp) {
    v_2651 = false;
  } else {
    v_2651 = v_2650;
  };
  if (instanciador_c4) {
    sub_195 = v_2651;
  } else {
    sub_195 = v_2653;
  };
  if (instanciador_ck_13_1) {
    sub_202 = false;
  } else {
    sub_202 = sub_195;
  };
  if (instanciador_c3_lamp) {
    v_2656 = sub_202;
  } else {
    v_2656 = false;
  };
  if (instanciador_l3) {
    v_2657 = v_2656;
  } else {
    v_2657 = false;
  };
  if (instanciador_c3_lamp) {
    v_2654 = sub_195;
  } else {
    v_2654 = sub_202;
  };
  if (instanciador_l3) {
    v_2655 = sub_195;
  } else {
    v_2655 = v_2654;
  };
  if (instanciador_c3) {
    sub_194 = v_2655;
  } else {
    sub_194 = v_2657;
  };
  if (instanciador_ck_11_1) {
    sub_193 = sub_194;
  } else {
    sub_193 = false;
  };
  if (instanciador_c2_lamp) {
    v_2660 = sub_193;
  } else {
    v_2660 = sub_194;
  };
  if (instanciador_l2) {
    v_2661 = v_2660;
  } else {
    v_2661 = sub_194;
  };
  if (instanciador_c2_lamp) {
    v_2658 = false;
  } else {
    v_2658 = sub_193;
  };
  if (instanciador_l2) {
    v_2659 = false;
  } else {
    v_2659 = v_2658;
  };
  if (instanciador_c2) {
    sub_192 = v_2659;
  } else {
    sub_192 = v_2661;
  };
  if (instanciador_ck_9_1) {
    sub_191 = sub_192;
  } else {
    sub_191 = false;
  };
  if (instanciador_c1_lamp) {
    v_2664 = sub_191;
  } else {
    v_2664 = sub_192;
  };
  if (instanciador_l1) {
    v_2665 = v_2664;
  } else {
    v_2665 = sub_192;
  };
  if (instanciador_c1_lamp) {
    v_2662 = false;
  } else {
    v_2662 = sub_191;
  };
  if (instanciador_l1) {
    v_2663 = false;
  } else {
    v_2663 = v_2662;
  };
  if (instanciador_c1) {
    sub_190 = v_2663;
  } else {
    sub_190 = v_2665;
  };
  sub_189 = sub_190;
  sub_188 = sub_189;
  sub_231 = sub_80;
  sub_230 = sub_231;
  sub_229 = sub_230;
  sub_228 = sub_229;
  sub_227 = sub_228;
  sub_226 = sub_227;
  sub_225 = sub_226;
  sub_224 = sub_225;
  sub_223 = sub_224;
  sub_222 = sub_223;
  sub_221 = sub_222;
  sub_220 = sub_221;
  sub_219 = sub_220;
  sub_218 = sub_219;
  sub_217 = sub_218;
  sub_216 = sub_217;
  sub_215 = sub_216;
  sub_214 = sub_215;
  sub_213 = sub_214;
  sub_212 = sub_213;
  sub_211 = sub_212;
  sub_210 = sub_211;
  sub_209 = sub_210;
  sub_208 = sub_209;
  sub_207 = sub_208;
  sub_206 = sub_207;
  sub_205 = sub_206;
  sub_204 = sub_205;
  if (instanciador_neutro_input) {
    v_2666 = sub_204;
  } else {
    v_2666 = sub_149;
  };
  if (instanciador_ck_25_1) {
    sub_245 = sub_159;
  } else {
    sub_245 = false;
  };
  if (instanciador_inpSp) {
    v_2613 = sub_245;
  } else {
    v_2613 = sub_159;
  };
  if (instanciador_c_somP) {
    v_2614 = v_2613;
  } else {
    v_2614 = sub_158;
  };
  if (instanciador_inpSp) {
    v_2611 = false;
  } else {
    v_2611 = sub_245;
  };
  if (instanciador_c_somP) {
    v_2612 = false;
  } else {
    v_2612 = v_2611;
  };
  if (instanciador_csp) {
    v_2615 = v_2612;
  } else {
    v_2615 = v_2614;
  };
  if (instanciador_ck_21_1) {
    v_2616 = v_2615;
  } else {
    v_2616 = sub_131;
  };
  if (instanciador_inpMl) {
    v_2617 = sub_131;
  } else {
    v_2617 = v_2616;
  };
  if (instanciador_c_microL) {
    sub_244 = sub_130;
  } else {
    sub_244 = v_2617;
  };
  if (instanciador_ck_19_1) {
    sub_243 = sub_244;
  } else {
    sub_243 = false;
  };
  if (instanciador_lv) {
    v_2620 = false;
  } else {
    v_2620 = sub_243;
  };
  if (instanciador_cv) {
    v_2621 = v_2620;
  } else {
    v_2621 = sub_244;
  };
  if (instanciador_lv) {
    v_2618 = sub_243;
  } else {
    v_2618 = sub_244;
  };
  if (instanciador_cv) {
    v_2619 = false;
  } else {
    v_2619 = v_2618;
  };
  if (instanciador_c_vent) {
    sub_242 = v_2619;
  } else {
    sub_242 = v_2621;
  };
  if (instanciador_ck_17_1) {
    sub_241 = sub_242;
  } else {
    sub_241 = false;
  };
  if (instanciador_lx) {
    v_2624 = sub_241;
  } else {
    v_2624 = sub_242;
  };
  if (instanciador_c_lampExt) {
    v_2625 = v_2624;
  } else {
    v_2625 = sub_242;
  };
  if (instanciador_lx) {
    v_2622 = false;
  } else {
    v_2622 = sub_241;
  };
  if (instanciador_c_lampExt) {
    v_2623 = false;
  } else {
    v_2623 = v_2622;
  };
  if (instanciador_cx) {
    sub_240 = v_2623;
  } else {
    sub_240 = v_2625;
  };
  if (instanciador_ck_15_1) {
    sub_239 = sub_240;
  } else {
    sub_239 = false;
  };
  if (instanciador_l4) {
    v_2628 = sub_239;
  } else {
    v_2628 = sub_240;
  };
  if (instanciador_c4_lamp) {
    v_2629 = v_2628;
  } else {
    v_2629 = sub_240;
  };
  if (instanciador_l4) {
    v_2626 = false;
  } else {
    v_2626 = sub_239;
  };
  if (instanciador_c4_lamp) {
    v_2627 = false;
  } else {
    v_2627 = v_2626;
  };
  if (instanciador_c4) {
    sub_238 = v_2627;
  } else {
    sub_238 = v_2629;
  };
  if (instanciador_ck_13_1) {
    sub_237 = sub_238;
  } else {
    sub_237 = false;
  };
  if (instanciador_c3_lamp) {
    v_2632 = sub_237;
  } else {
    v_2632 = sub_238;
  };
  if (instanciador_l3) {
    v_2633 = v_2632;
  } else {
    v_2633 = sub_238;
  };
  if (instanciador_c3_lamp) {
    v_2630 = false;
  } else {
    v_2630 = sub_237;
  };
  if (instanciador_l3) {
    v_2631 = false;
  } else {
    v_2631 = v_2630;
  };
  if (instanciador_c3) {
    sub_236 = v_2631;
  } else {
    sub_236 = v_2633;
  };
  if (instanciador_ck_11_1) {
    sub_235 = sub_236;
  } else {
    sub_235 = false;
  };
  if (instanciador_c2_lamp) {
    v_2636 = sub_235;
  } else {
    v_2636 = sub_236;
  };
  if (instanciador_l2) {
    v_2637 = v_2636;
  } else {
    v_2637 = sub_236;
  };
  if (instanciador_c2_lamp) {
    v_2634 = false;
  } else {
    v_2634 = sub_235;
  };
  if (instanciador_l2) {
    v_2635 = false;
  } else {
    v_2635 = v_2634;
  };
  if (instanciador_c2) {
    sub_234 = v_2635;
  } else {
    sub_234 = v_2637;
  };
  if (instanciador_ck_9_1) {
    sub_233 = sub_234;
  } else {
    sub_233 = false;
  };
  if (instanciador_c1_lamp) {
    v_2640 = sub_233;
  } else {
    v_2640 = sub_234;
  };
  if (instanciador_l1) {
    v_2641 = v_2640;
  } else {
    v_2641 = sub_234;
  };
  if (instanciador_c1_lamp) {
    v_2638 = false;
  } else {
    v_2638 = sub_233;
  };
  if (instanciador_l1) {
    v_2639 = false;
  } else {
    v_2639 = v_2638;
  };
  if (instanciador_c1) {
    sub_232 = v_2639;
  } else {
    sub_232 = v_2641;
  };
  if (instanciador_neutro_input) {
    sub_203 = sub_204;
  } else {
    sub_203 = sub_232;
  };
  if (instanciador_seguranca_input) {
    v_2667 = sub_203;
  } else {
    v_2667 = v_2666;
  };
  if (instanciador_domingol_input) {
    v_2668 = sub_188;
  } else {
    v_2668 = v_2667;
  };
  if (instanciador_domingo_input) {
    sub_187 = sub_173;
  } else {
    sub_187 = v_2668;
  };
  if (instanciador_v_341) {
    v_2669 = sub_172;
  } else {
    v_2669 = sub_187;
  };
  if (instanciador_sexta_input) {
    sub_186 = sub_172;
  } else {
    sub_186 = v_2669;
  };
  if (instanciador_v_339) {
    v_2725 = sub_186;
  } else {
    v_2725 = sub_143;
  };
  if (instanciador_neutro_input) {
    sub_250 = sub_204;
  } else {
    sub_250 = sub_176;
  };
  if (instanciador_seguranca_input) {
    v_2610 = sub_203;
  } else {
    v_2610 = sub_250;
  };
  if (instanciador_domingol_input) {
    sub_249 = sub_188;
  } else {
    sub_249 = v_2610;
  };
  if (instanciador_domingo_input) {
    sub_248 = sub_173;
  } else {
    sub_248 = sub_249;
  };
  if (instanciador_v_341) {
    sub_247 = sub_172;
  } else {
    sub_247 = sub_248;
  };
  sub_246 = sub_247;
  if (instanciador_v_339) {
    v_2726 = sub_186;
  } else {
    v_2726 = sub_246;
  };
  if (instanciador_ebd_input) {
    sub_142 = v_2725;
  } else {
    sub_142 = v_2726;
  };
  if (instanciador_seguranca_input) {
    v_2606 = sub_232;
  } else {
    v_2606 = sub_204;
  };
  if (instanciador_domingol_input) {
    v_2607 = sub_188;
    v_2605 = sub_188;
  } else {
    v_2607 = v_2606;
    v_2605 = sub_174;
  };
  if (instanciador_domingo_input) {
    v_2608 = v_2605;
  } else {
    v_2608 = v_2607;
  };
  if (instanciador_domingol_input) {
    v_2604 = sub_188;
    v_2603 = sub_188;
  } else {
    v_2604 = sub_203;
    v_2603 = sub_250;
  };
  if (instanciador_domingo_input) {
    sub_252 = v_2603;
  } else {
    sub_252 = v_2604;
  };
  if (instanciador_v_341) {
    v_2609 = v_2608;
  } else {
    v_2609 = sub_252;
  };
  if (instanciador_sexta_input) {
    sub_251 = sub_172;
  } else {
    sub_251 = v_2609;
  };
  if (instanciador_neutro_input) {
    v = sub_204;
  } else {
    v = sub_190;
  };
  if (instanciador_seguranca_input) {
    sub_254 = sub_203;
  } else {
    sub_254 = v;
  };
  if (instanciador_domingo_input) {
    sub_253 = sub_173;
  } else {
    sub_253 = sub_254;
  };
  if (instanciador_v_341) {
    v_2869 = sub_249;
  } else {
    v_2869 = sub_253;
  };
  if (instanciador_sexta_input) {
    v_2870 = sub_172;
  } else {
    v_2870 = v_2869;
  };
  if (instanciador_v_339) {
    v_2871 = v_2870;
  } else {
    v_2871 = sub_251;
  };
  if (instanciador_ebd_input) {
    v_2872 = sub_145;
  } else {
    v_2872 = v_2871;
  };
  if (instanciador_v_340) {
    v_2873 = v_2872;
  } else {
    v_2873 = sub_142;
  };
  if (p_instanciador_cml) {
    sub_0 = v_2873;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_cml = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c_microL_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_csl, int instanciador_c_somL,
  int instanciador_csp, int instanciador_c_somP, int instanciador_c_vent,
  int instanciador_cv, int instanciador_cx, int instanciador_c4,
  int instanciador_c3, int instanciador_c2, int instanciador_c1,
  int instanciador_c_lampExt, int instanciador_c4_lamp,
  int instanciador_c3_lamp, int instanciador_c2_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c_microL_out* _out) {
  
  int v_3136;
  int v_3135;
  int v_3134;
  int v_3133;
  int v_3132;
  int v_3131;
  int v_3130;
  int v_3129;
  int v_3128;
  int v_3127;
  int v_3126;
  int v_3125;
  int v_3124;
  int v_3123;
  int v_3122;
  int v_3121;
  int v_3120;
  int v_3119;
  int v_3118;
  int v_3117;
  int v_3116;
  int v_3115;
  int v_3114;
  int v_3113;
  int v_3112;
  int v_3111;
  int v_3110;
  int v_3109;
  int v_3108;
  int v_3107;
  int v_3106;
  int v_3105;
  int v_3104;
  int v_3103;
  int v_3102;
  int v_3101;
  int v_3100;
  int v_3099;
  int v_3098;
  int v_3097;
  int v_3096;
  int v_3095;
  int v_3094;
  int v_3093;
  int v_3092;
  int v_3091;
  int v_3090;
  int v_3089;
  int v_3088;
  int v_3087;
  int v_3086;
  int v_3085;
  int v_3084;
  int v_3083;
  int v_3082;
  int v_3081;
  int v_3080;
  int v_3079;
  int v_3078;
  int v_3077;
  int v_3076;
  int v_3075;
  int v_3074;
  int v_3073;
  int v_3072;
  int v_3071;
  int v_3070;
  int v_3069;
  int v_3068;
  int v_3067;
  int v_3066;
  int v_3065;
  int v_3064;
  int v_3063;
  int v_3062;
  int v_3061;
  int v_3060;
  int v_3059;
  int v_3058;
  int v_3057;
  int v_3056;
  int v_3055;
  int v_3054;
  int v_3053;
  int v_3052;
  int v_3051;
  int v_3050;
  int v_3049;
  int v_3048;
  int v_3047;
  int v_3046;
  int v_3045;
  int v_3044;
  int v_3043;
  int v_3042;
  int v_3041;
  int v_3040;
  int v_3039;
  int v_3038;
  int v_3037;
  int v_3036;
  int v_3035;
  int v_3034;
  int v_3033;
  int v_3032;
  int v_3031;
  int v_3030;
  int v_3029;
  int v_3028;
  int v_3027;
  int v_3026;
  int v_3025;
  int v_3024;
  int v_3023;
  int v_3022;
  int v_3021;
  int v_3020;
  int v_3019;
  int v_3018;
  int v_3017;
  int v_3016;
  int v_3015;
  int v_3014;
  int v_3013;
  int v_3012;
  int v_3011;
  int v_3010;
  int v_3009;
  int v_3008;
  int v_3007;
  int v_3006;
  int v_3005;
  int v_3004;
  int v_3003;
  int v_3002;
  int v_3001;
  int v_3000;
  int v_2999;
  int v_2998;
  int v_2997;
  int v_2996;
  int v_2995;
  int v_2994;
  int v_2993;
  int v_2992;
  int v_2991;
  int v_2990;
  int v_2989;
  int v_2988;
  int v_2987;
  int v_2986;
  int v_2985;
  int v_2984;
  int v_2983;
  int v_2982;
  int v_2981;
  int v_2980;
  int v_2979;
  int v_2978;
  int v_2977;
  int v_2976;
  int v_2975;
  int v_2974;
  int v_2973;
  int v_2972;
  int v_2971;
  int v_2970;
  int v_2969;
  int v_2968;
  int v_2967;
  int v_2966;
  int v_2965;
  int v_2964;
  int v_2963;
  int v_2962;
  int v_2961;
  int v_2960;
  int v_2959;
  int v_2958;
  int v_2957;
  int v_2956;
  int v_2955;
  int v_2954;
  int v_2953;
  int v_2952;
  int v_2951;
  int v_2950;
  int v_2949;
  int v_2948;
  int v_2947;
  int v_2946;
  int v_2945;
  int v_2944;
  int v_2943;
  int v_2942;
  int v_2941;
  int v_2940;
  int v_2939;
  int v_2938;
  int v_2937;
  int v_2936;
  int v_2935;
  int v_2934;
  int v_2933;
  int v_2932;
  int v_2931;
  int v_2930;
  int v_2929;
  int v_2928;
  int v_2927;
  int v_2926;
  int v_2925;
  int v_2924;
  int v_2923;
  int v_2922;
  int v_2921;
  int v_2920;
  int v_2919;
  int v_2918;
  int v_2917;
  int v_2916;
  int v_2915;
  int v_2914;
  int v_2913;
  int v_2912;
  int v_2911;
  int v_2910;
  int v_2909;
  int v_2908;
  int v_2907;
  int v_2906;
  int v_2905;
  int v_2904;
  int v_2903;
  int v_2902;
  int v_2901;
  int v_2900;
  int v_2899;
  int v_2898;
  int v_2897;
  int v_2896;
  int v_2895;
  int v_2894;
  int v_2893;
  int v_2892;
  int v_2891;
  int v_2890;
  int v_2889;
  int v_2888;
  int v_2887;
  int v_2886;
  int v_2885;
  int v_2884;
  int v_2883;
  int v_2882;
  int v_2881;
  int v_2880;
  int v_2879;
  int v_2878;
  int v_2877;
  int v_2876;
  int v_2875;
  int v_2874;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  int sub_246;
  int sub_247;
  int sub_248;
  int sub_249;
  int sub_250;
  int sub_251;
  sub_25 = (instanciador_inpSl&&false);
  if (instanciador_c_somL) {
    v_3095 = false;
  } else {
    v_3095 = sub_25;
  };
  if (instanciador_ck_27_1) {
    v_3096 = v_3095;
  } else {
    v_3096 = false;
  };
  sub_27 = false;
  if (instanciador_c_somL) {
    sub_26 = sub_25;
  } else {
    sub_26 = sub_27;
  };
  sub_28 = sub_27;
  if (instanciador_ck_27_1) {
    v_3097 = sub_28;
  } else {
    v_3097 = sub_26;
  };
  if (instanciador_csl) {
    sub_24 = v_3096;
  } else {
    sub_24 = v_3097;
  };
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  if (instanciador_ck_25_1) {
    sub_29 = false;
  } else {
    sub_29 = sub_20;
  };
  if (instanciador_inpSp) {
    v_3100 = sub_29;
  } else {
    v_3100 = false;
  };
  if (instanciador_c_somP) {
    v_3101 = v_3100;
  } else {
    v_3101 = false;
  };
  if (instanciador_inpSp) {
    v_3098 = sub_20;
  } else {
    v_3098 = sub_29;
  };
  if (instanciador_c_somP) {
    v_3099 = sub_19;
  } else {
    v_3099 = v_3098;
  };
  if (instanciador_csp) {
    sub_18 = v_3099;
  } else {
    sub_18 = v_3101;
  };
  sub_17 = sub_18;
  if (instanciador_ck_19_1) {
    sub_30 = false;
  } else {
    sub_30 = sub_17;
  };
  if (instanciador_lv) {
    v_3104 = sub_17;
  } else {
    v_3104 = sub_30;
  };
  if (instanciador_cv) {
    v_3105 = v_3104;
  } else {
    v_3105 = false;
  };
  if (instanciador_lv) {
    v_3102 = sub_30;
  } else {
    v_3102 = false;
  };
  if (instanciador_cv) {
    v_3103 = sub_17;
  } else {
    v_3103 = v_3102;
  };
  if (instanciador_c_vent) {
    sub_16 = v_3103;
  } else {
    sub_16 = v_3105;
  };
  if (instanciador_ck_17_1) {
    sub_15 = sub_16;
  } else {
    sub_15 = false;
  };
  if (instanciador_lx) {
    v_3108 = sub_15;
    v_3106 = false;
  } else {
    v_3108 = sub_16;
    v_3106 = sub_15;
  };
  if (instanciador_c_lampExt) {
    v_3107 = false;
  } else {
    v_3107 = v_3106;
  };
  sub_31 = sub_16;
  if (instanciador_c_lampExt) {
    v_3109 = v_3108;
  } else {
    v_3109 = sub_31;
  };
  if (instanciador_cx) {
    sub_14 = v_3107;
  } else {
    sub_14 = v_3109;
  };
  if (instanciador_ck_15_1) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (instanciador_l4) {
    v_3112 = sub_13;
  } else {
    v_3112 = sub_14;
  };
  if (instanciador_c4_lamp) {
    v_3113 = v_3112;
  } else {
    v_3113 = sub_14;
  };
  if (instanciador_l4) {
    v_3110 = false;
  } else {
    v_3110 = sub_13;
  };
  if (instanciador_c4_lamp) {
    v_3111 = false;
  } else {
    v_3111 = v_3110;
  };
  if (instanciador_c4) {
    sub_12 = v_3111;
  } else {
    sub_12 = v_3113;
  };
  if (instanciador_ck_13_1) {
    sub_32 = false;
  } else {
    sub_32 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_3116 = sub_32;
  } else {
    v_3116 = false;
  };
  if (instanciador_l3) {
    v_3117 = v_3116;
  } else {
    v_3117 = false;
  };
  if (instanciador_c3_lamp) {
    v_3114 = sub_12;
  } else {
    v_3114 = sub_32;
  };
  if (instanciador_l3) {
    v_3115 = sub_12;
  } else {
    v_3115 = v_3114;
  };
  if (instanciador_c3) {
    sub_11 = v_3115;
  } else {
    sub_11 = v_3117;
  };
  if (instanciador_ck_11_1) {
    sub_33 = false;
  } else {
    sub_33 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_3120 = sub_33;
  } else {
    v_3120 = false;
  };
  if (instanciador_l2) {
    v_3121 = v_3120;
  } else {
    v_3121 = false;
  };
  if (instanciador_c2_lamp) {
    v_3118 = sub_11;
  } else {
    v_3118 = sub_33;
  };
  if (instanciador_l2) {
    v_3119 = sub_11;
  } else {
    v_3119 = v_3118;
  };
  if (instanciador_c2) {
    sub_10 = v_3119;
  } else {
    sub_10 = v_3121;
  };
  if (instanciador_ck_9_1) {
    sub_34 = false;
  } else {
    sub_34 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_3124 = sub_34;
  } else {
    v_3124 = false;
  };
  if (instanciador_l1) {
    v_3125 = v_3124;
  } else {
    v_3125 = false;
  };
  if (instanciador_c1_lamp) {
    v_3122 = sub_10;
  } else {
    v_3122 = sub_34;
  };
  if (instanciador_l1) {
    v_3123 = sub_10;
  } else {
    v_3123 = v_3122;
  };
  if (instanciador_c1) {
    sub_9 = v_3123;
  } else {
    sub_9 = v_3125;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (instanciador_ck_17_1) {
    sub_44 = false;
  } else {
    sub_44 = sub_16;
  };
  if (instanciador_lx) {
    v_3077 = sub_44;
  } else {
    v_3077 = false;
  };
  if (instanciador_c_lampExt) {
    v_3078 = v_3077;
  } else {
    v_3078 = false;
  };
  if (instanciador_lx) {
    v_3075 = sub_16;
  } else {
    v_3075 = sub_44;
  };
  if (instanciador_c_lampExt) {
    v_3076 = sub_31;
  } else {
    v_3076 = v_3075;
  };
  if (instanciador_cx) {
    sub_43 = v_3076;
  } else {
    sub_43 = v_3078;
  };
  if (instanciador_ck_15_1) {
    sub_45 = false;
  } else {
    sub_45 = sub_43;
  };
  if (instanciador_l4) {
    v_3081 = sub_45;
  } else {
    v_3081 = false;
  };
  if (instanciador_c4_lamp) {
    v_3082 = v_3081;
  } else {
    v_3082 = false;
  };
  if (instanciador_l4) {
    v_3079 = sub_43;
  } else {
    v_3079 = sub_45;
  };
  if (instanciador_c4_lamp) {
    v_3080 = sub_43;
  } else {
    v_3080 = v_3079;
  };
  if (instanciador_c4) {
    sub_42 = v_3080;
  } else {
    sub_42 = v_3082;
  };
  if (instanciador_ck_13_1) {
    sub_46 = false;
  } else {
    sub_46 = sub_42;
  };
  if (instanciador_c3_lamp) {
    v_3085 = sub_46;
  } else {
    v_3085 = false;
  };
  if (instanciador_l3) {
    v_3086 = v_3085;
  } else {
    v_3086 = false;
  };
  if (instanciador_c3_lamp) {
    v_3083 = sub_42;
  } else {
    v_3083 = sub_46;
  };
  if (instanciador_l3) {
    v_3084 = sub_42;
  } else {
    v_3084 = v_3083;
  };
  if (instanciador_c3) {
    sub_41 = v_3084;
  } else {
    sub_41 = v_3086;
  };
  if (instanciador_ck_11_1) {
    sub_47 = false;
  } else {
    sub_47 = sub_41;
  };
  if (instanciador_c2_lamp) {
    v_3089 = sub_47;
  } else {
    v_3089 = false;
  };
  if (instanciador_l2) {
    v_3090 = v_3089;
  } else {
    v_3090 = false;
  };
  if (instanciador_c2_lamp) {
    v_3087 = sub_41;
  } else {
    v_3087 = sub_47;
  };
  if (instanciador_l2) {
    v_3088 = sub_41;
  } else {
    v_3088 = v_3087;
  };
  if (instanciador_c2) {
    sub_40 = v_3088;
  } else {
    sub_40 = v_3090;
  };
  if (instanciador_ck_9_1) {
    sub_48 = false;
  } else {
    sub_48 = sub_40;
  };
  if (instanciador_c1_lamp) {
    v_3093 = sub_48;
  } else {
    v_3093 = false;
  };
  if (instanciador_l1) {
    v_3094 = v_3093;
  } else {
    v_3094 = false;
  };
  if (instanciador_c1_lamp) {
    v_3091 = sub_40;
  } else {
    v_3091 = sub_48;
  };
  if (instanciador_l1) {
    v_3092 = sub_40;
  } else {
    v_3092 = v_3091;
  };
  if (instanciador_c1) {
    sub_39 = v_3092;
  } else {
    sub_39 = v_3094;
  };
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  if (instanciador_v_341) {
    sub_4 = sub_35;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  v_3038 = !(instanciador_inpSl);
  sub_70 = (v_3038&&false);
  if (instanciador_c_somL) {
    v_3039 = sub_27;
  } else {
    v_3039 = sub_70;
  };
  if (instanciador_ck_27_1) {
    v_3040 = v_3039;
  } else {
    v_3040 = sub_28;
  };
  if (instanciador_c_somL) {
    sub_71 = sub_70;
  } else {
    sub_71 = false;
  };
  if (instanciador_ck_27_1) {
    v_3041 = false;
  } else {
    v_3041 = sub_71;
  };
  if (instanciador_csl) {
    sub_69 = v_3040;
  } else {
    sub_69 = v_3041;
  };
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  sub_65 = sub_66;
  if (instanciador_ck_25_1) {
    sub_64 = sub_65;
  } else {
    sub_64 = false;
  };
  if (instanciador_inpSp) {
    v_3044 = sub_64;
  } else {
    v_3044 = sub_65;
  };
  if (instanciador_c_somP) {
    v_3045 = v_3044;
  } else {
    v_3045 = sub_65;
  };
  if (instanciador_inpSp) {
    v_3042 = false;
  } else {
    v_3042 = sub_64;
  };
  if (instanciador_c_somP) {
    v_3043 = false;
  } else {
    v_3043 = v_3042;
  };
  if (instanciador_csp) {
    sub_63 = v_3043;
  } else {
    sub_63 = v_3045;
  };
  sub_80 = true;
  sub_79 = sub_80;
  sub_81 = (instanciador_inpSl||false);
  if (instanciador_c_somL) {
    v_3031 = sub_80;
  } else {
    v_3031 = sub_81;
  };
  if (instanciador_ck_27_1) {
    v_3032 = v_3031;
  } else {
    v_3032 = sub_79;
  };
  if (instanciador_c_somL) {
    sub_82 = sub_81;
  } else {
    sub_82 = false;
  };
  if (instanciador_ck_27_1) {
    v_3033 = false;
  } else {
    v_3033 = sub_82;
  };
  if (instanciador_csl) {
    sub_78 = v_3032;
  } else {
    sub_78 = v_3033;
  };
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  sub_74 = sub_75;
  if (instanciador_ck_25_1) {
    sub_73 = sub_74;
  } else {
    sub_73 = false;
  };
  if (instanciador_inpSp) {
    v_3036 = sub_73;
  } else {
    v_3036 = sub_74;
  };
  if (instanciador_c_somP) {
    v_3037 = v_3036;
  } else {
    v_3037 = sub_74;
  };
  if (instanciador_inpSp) {
    v_3034 = false;
  } else {
    v_3034 = sub_73;
  };
  if (instanciador_c_somP) {
    v_3035 = false;
  } else {
    v_3035 = v_3034;
  };
  if (instanciador_csp) {
    sub_72 = v_3035;
  } else {
    sub_72 = v_3037;
  };
  if (instanciador_ck_21_1) {
    v_3046 = sub_72;
  } else {
    v_3046 = sub_63;
  };
  if (instanciador_inpMl) {
    sub_62 = sub_63;
  } else {
    sub_62 = v_3046;
  };
  if (instanciador_ck_19_1) {
    sub_83 = false;
  } else {
    sub_83 = sub_62;
  };
  if (instanciador_lv) {
    v_3049 = sub_62;
  } else {
    v_3049 = sub_83;
  };
  if (instanciador_cv) {
    v_3050 = v_3049;
  } else {
    v_3050 = false;
  };
  if (instanciador_lv) {
    v_3047 = sub_83;
  } else {
    v_3047 = false;
  };
  if (instanciador_cv) {
    v_3048 = sub_62;
  } else {
    v_3048 = v_3047;
  };
  if (instanciador_c_vent) {
    sub_61 = v_3048;
  } else {
    sub_61 = v_3050;
  };
  if (instanciador_ck_17_1) {
    sub_84 = false;
  } else {
    sub_84 = sub_61;
  };
  if (instanciador_lx) {
    v_3053 = sub_84;
  } else {
    v_3053 = false;
  };
  if (instanciador_c_lampExt) {
    v_3054 = v_3053;
  } else {
    v_3054 = false;
  };
  if (instanciador_lx) {
    v_3051 = sub_61;
  } else {
    v_3051 = sub_84;
  };
  if (instanciador_c_lampExt) {
    v_3052 = sub_61;
  } else {
    v_3052 = v_3051;
  };
  if (instanciador_cx) {
    sub_60 = v_3052;
  } else {
    sub_60 = v_3054;
  };
  if (instanciador_ck_15_1) {
    sub_59 = sub_60;
  } else {
    sub_59 = false;
  };
  if (instanciador_l4) {
    v_3057 = sub_59;
  } else {
    v_3057 = sub_60;
  };
  if (instanciador_c4_lamp) {
    v_3058 = v_3057;
  } else {
    v_3058 = sub_60;
  };
  if (instanciador_l4) {
    v_3055 = false;
  } else {
    v_3055 = sub_59;
  };
  if (instanciador_c4_lamp) {
    v_3056 = false;
  } else {
    v_3056 = v_3055;
  };
  if (instanciador_c4) {
    sub_58 = v_3056;
  } else {
    sub_58 = v_3058;
  };
  if (instanciador_ck_13_1) {
    sub_85 = false;
  } else {
    sub_85 = sub_58;
  };
  if (instanciador_c3_lamp) {
    v_3061 = sub_85;
  } else {
    v_3061 = false;
  };
  if (instanciador_l3) {
    v_3062 = v_3061;
  } else {
    v_3062 = false;
  };
  if (instanciador_c3_lamp) {
    v_3059 = sub_58;
  } else {
    v_3059 = sub_85;
  };
  if (instanciador_l3) {
    v_3060 = sub_58;
  } else {
    v_3060 = v_3059;
  };
  if (instanciador_c3) {
    sub_57 = v_3060;
  } else {
    sub_57 = v_3062;
  };
  if (instanciador_ck_11_1) {
    sub_56 = sub_57;
  } else {
    sub_56 = false;
  };
  if (instanciador_c2_lamp) {
    v_3065 = sub_56;
  } else {
    v_3065 = sub_57;
  };
  if (instanciador_l2) {
    v_3066 = v_3065;
  } else {
    v_3066 = sub_57;
  };
  if (instanciador_c2_lamp) {
    v_3063 = false;
  } else {
    v_3063 = sub_56;
  };
  if (instanciador_l2) {
    v_3064 = false;
  } else {
    v_3064 = v_3063;
  };
  if (instanciador_c2) {
    sub_55 = v_3064;
  } else {
    sub_55 = v_3066;
  };
  if (instanciador_ck_9_1) {
    sub_54 = sub_55;
  } else {
    sub_54 = false;
  };
  if (instanciador_c1_lamp) {
    v_3069 = sub_54;
  } else {
    v_3069 = sub_55;
  };
  if (instanciador_l1) {
    v_3070 = v_3069;
  } else {
    v_3070 = sub_55;
  };
  if (instanciador_c1_lamp) {
    v_3067 = false;
  } else {
    v_3067 = sub_54;
  };
  if (instanciador_l1) {
    v_3068 = false;
  } else {
    v_3068 = v_3067;
  };
  if (instanciador_c1) {
    sub_53 = v_3068;
  } else {
    sub_53 = v_3070;
  };
  sub_52 = sub_53;
  sub_51 = sub_52;
  sub_113 = sub_28;
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_101 = sub_102;
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  sub_90 = sub_91;
  sub_89 = sub_90;
  sub_88 = sub_89;
  sub_87 = sub_88;
  if (instanciador_neutro_input) {
    v_3071 = sub_87;
  } else {
    v_3071 = sub_9;
  };
  if (instanciador_ck_25_1) {
    sub_128 = sub_20;
  } else {
    sub_128 = false;
  };
  if (instanciador_inpSp) {
    v_3005 = sub_128;
  } else {
    v_3005 = sub_20;
  };
  if (instanciador_c_somP) {
    v_3006 = v_3005;
  } else {
    v_3006 = sub_19;
  };
  if (instanciador_inpSp) {
    v_3003 = false;
  } else {
    v_3003 = sub_128;
  };
  if (instanciador_c_somP) {
    v_3004 = false;
  } else {
    v_3004 = v_3003;
  };
  if (instanciador_csp) {
    sub_127 = v_3004;
  } else {
    sub_127 = v_3006;
  };
  sub_126 = sub_127;
  if (instanciador_ck_19_1) {
    sub_125 = sub_126;
  } else {
    sub_125 = false;
  };
  if (instanciador_lv) {
    v_3009 = false;
  } else {
    v_3009 = sub_125;
  };
  if (instanciador_cv) {
    v_3010 = v_3009;
  } else {
    v_3010 = sub_126;
  };
  if (instanciador_lv) {
    v_3007 = sub_125;
  } else {
    v_3007 = sub_126;
  };
  if (instanciador_cv) {
    v_3008 = false;
  } else {
    v_3008 = v_3007;
  };
  if (instanciador_c_vent) {
    sub_124 = v_3008;
  } else {
    sub_124 = v_3010;
  };
  if (instanciador_ck_17_1) {
    sub_123 = sub_124;
  } else {
    sub_123 = false;
  };
  if (instanciador_lx) {
    v_3013 = sub_123;
  } else {
    v_3013 = sub_124;
  };
  if (instanciador_c_lampExt) {
    v_3014 = v_3013;
  } else {
    v_3014 = sub_124;
  };
  if (instanciador_lx) {
    v_3011 = false;
  } else {
    v_3011 = sub_123;
  };
  if (instanciador_c_lampExt) {
    v_3012 = false;
  } else {
    v_3012 = v_3011;
  };
  if (instanciador_cx) {
    sub_122 = v_3012;
  } else {
    sub_122 = v_3014;
  };
  if (instanciador_ck_15_1) {
    sub_121 = sub_122;
  } else {
    sub_121 = false;
  };
  if (instanciador_l4) {
    v_3017 = sub_121;
  } else {
    v_3017 = sub_122;
  };
  if (instanciador_c4_lamp) {
    v_3018 = v_3017;
  } else {
    v_3018 = sub_122;
  };
  if (instanciador_l4) {
    v_3015 = false;
  } else {
    v_3015 = sub_121;
  };
  if (instanciador_c4_lamp) {
    v_3016 = false;
  } else {
    v_3016 = v_3015;
  };
  if (instanciador_c4) {
    sub_120 = v_3016;
  } else {
    sub_120 = v_3018;
  };
  if (instanciador_ck_13_1) {
    sub_119 = sub_120;
  } else {
    sub_119 = false;
  };
  if (instanciador_c3_lamp) {
    v_3021 = sub_119;
  } else {
    v_3021 = sub_120;
  };
  if (instanciador_l3) {
    v_3022 = v_3021;
  } else {
    v_3022 = sub_120;
  };
  if (instanciador_c3_lamp) {
    v_3019 = false;
  } else {
    v_3019 = sub_119;
  };
  if (instanciador_l3) {
    v_3020 = false;
  } else {
    v_3020 = v_3019;
  };
  if (instanciador_c3) {
    sub_118 = v_3020;
  } else {
    sub_118 = v_3022;
  };
  if (instanciador_ck_11_1) {
    sub_117 = sub_118;
  } else {
    sub_117 = false;
  };
  if (instanciador_c2_lamp) {
    v_3025 = sub_117;
  } else {
    v_3025 = sub_118;
  };
  if (instanciador_l2) {
    v_3026 = v_3025;
  } else {
    v_3026 = sub_118;
  };
  if (instanciador_c2_lamp) {
    v_3023 = false;
  } else {
    v_3023 = sub_117;
  };
  if (instanciador_l2) {
    v_3024 = false;
  } else {
    v_3024 = v_3023;
  };
  if (instanciador_c2) {
    sub_116 = v_3024;
  } else {
    sub_116 = v_3026;
  };
  if (instanciador_ck_9_1) {
    sub_115 = sub_116;
  } else {
    sub_115 = false;
  };
  if (instanciador_c1_lamp) {
    v_3029 = sub_115;
  } else {
    v_3029 = sub_116;
  };
  if (instanciador_l1) {
    v_3030 = v_3029;
  } else {
    v_3030 = sub_116;
  };
  if (instanciador_c1_lamp) {
    v_3027 = false;
  } else {
    v_3027 = sub_115;
  };
  if (instanciador_l1) {
    v_3028 = false;
  } else {
    v_3028 = v_3027;
  };
  if (instanciador_c1) {
    sub_114 = v_3028;
  } else {
    sub_114 = v_3030;
  };
  if (instanciador_neutro_input) {
    sub_86 = sub_87;
  } else {
    sub_86 = sub_114;
  };
  if (instanciador_seguranca_input) {
    v_3072 = sub_86;
  } else {
    v_3072 = v_3071;
  };
  if (instanciador_domingol_input) {
    v_3073 = sub_51;
  } else {
    v_3073 = v_3072;
  };
  if (instanciador_domingo_input) {
    sub_50 = sub_36;
  } else {
    sub_50 = v_3073;
  };
  if (instanciador_v_341) {
    v_3074 = sub_35;
  } else {
    v_3074 = sub_50;
  };
  if (instanciador_sexta_input) {
    sub_49 = sub_35;
  } else {
    sub_49 = v_3074;
  };
  if (instanciador_v_339) {
    v_3126 = sub_49;
  } else {
    v_3126 = sub_3;
  };
  if (instanciador_neutro_input) {
    sub_133 = sub_87;
  } else {
    sub_133 = sub_39;
  };
  if (instanciador_seguranca_input) {
    v_3002 = sub_86;
  } else {
    v_3002 = sub_133;
  };
  if (instanciador_domingol_input) {
    sub_132 = sub_51;
  } else {
    sub_132 = v_3002;
  };
  if (instanciador_domingo_input) {
    sub_131 = sub_36;
  } else {
    sub_131 = sub_132;
  };
  if (instanciador_v_341) {
    sub_130 = sub_35;
  } else {
    sub_130 = sub_131;
  };
  sub_129 = sub_130;
  if (instanciador_v_339) {
    v_3127 = sub_49;
  } else {
    v_3127 = sub_129;
  };
  if (instanciador_ebd_input) {
    sub_2 = v_3126;
  } else {
    sub_2 = v_3127;
  };
  if (instanciador_seguranca_input) {
    v_2998 = sub_114;
  } else {
    v_2998 = sub_87;
  };
  if (instanciador_domingol_input) {
    v_2999 = sub_51;
    v_2997 = sub_51;
  } else {
    v_2999 = v_2998;
    v_2997 = sub_37;
  };
  if (instanciador_domingo_input) {
    v_3000 = v_2997;
  } else {
    v_3000 = v_2999;
  };
  if (instanciador_domingol_input) {
    v_2996 = sub_51;
    v_2995 = sub_51;
  } else {
    v_2996 = sub_86;
    v_2995 = sub_133;
  };
  if (instanciador_domingo_input) {
    sub_135 = v_2995;
  } else {
    sub_135 = v_2996;
  };
  if (instanciador_v_341) {
    v_3001 = v_3000;
  } else {
    v_3001 = sub_135;
  };
  if (instanciador_sexta_input) {
    sub_134 = sub_35;
  } else {
    sub_134 = v_3001;
  };
  if (instanciador_neutro_input) {
    v_2994 = sub_87;
  } else {
    v_2994 = sub_53;
  };
  if (instanciador_seguranca_input) {
    sub_137 = sub_86;
  } else {
    sub_137 = v_2994;
  };
  if (instanciador_domingo_input) {
    sub_136 = sub_36;
  } else {
    sub_136 = sub_137;
  };
  if (instanciador_v_341) {
    v_3128 = sub_132;
  } else {
    v_3128 = sub_136;
  };
  if (instanciador_sexta_input) {
    v_3129 = sub_35;
  } else {
    v_3129 = v_3128;
  };
  if (instanciador_v_339) {
    v_3130 = v_3129;
  } else {
    v_3130 = sub_134;
  };
  if (instanciador_ebd_input) {
    v_3131 = sub_5;
  } else {
    v_3131 = v_3130;
  };
  if (instanciador_v_340) {
    sub_1 = v_3131;
  } else {
    sub_1 = sub_2;
  };
  v_2959 = !(instanciador_inpSl);
  sub_161 = (v_2959||false);
  if (instanciador_c_somL) {
    v_2960 = false;
  } else {
    v_2960 = sub_161;
  };
  if (instanciador_ck_27_1) {
    v_2961 = v_2960;
  } else {
    v_2961 = false;
  };
  if (instanciador_c_somL) {
    sub_162 = sub_161;
  } else {
    sub_162 = sub_80;
  };
  if (instanciador_ck_27_1) {
    v_2962 = sub_79;
  } else {
    v_2962 = sub_162;
  };
  if (instanciador_csl) {
    sub_160 = v_2961;
  } else {
    sub_160 = v_2962;
  };
  sub_159 = sub_160;
  sub_158 = sub_159;
  sub_157 = sub_158;
  sub_156 = sub_157;
  sub_155 = sub_156;
  if (instanciador_ck_25_1) {
    sub_163 = false;
  } else {
    sub_163 = sub_156;
  };
  if (instanciador_inpSp) {
    v_2965 = sub_163;
  } else {
    v_2965 = false;
  };
  if (instanciador_c_somP) {
    v_2966 = v_2965;
  } else {
    v_2966 = false;
  };
  if (instanciador_inpSp) {
    v_2963 = sub_156;
  } else {
    v_2963 = sub_163;
  };
  if (instanciador_c_somP) {
    v_2964 = sub_155;
  } else {
    v_2964 = v_2963;
  };
  if (instanciador_csp) {
    sub_154 = v_2964;
  } else {
    sub_154 = v_2966;
  };
  if (instanciador_ck_21_1) {
    v_2967 = sub_154;
  } else {
    v_2967 = sub_18;
  };
  if (instanciador_inpMl) {
    sub_153 = v_2967;
  } else {
    sub_153 = sub_154;
  };
  if (instanciador_ck_19_1) {
    sub_164 = false;
  } else {
    sub_164 = sub_153;
  };
  if (instanciador_lv) {
    v_2970 = sub_153;
  } else {
    v_2970 = sub_164;
  };
  if (instanciador_cv) {
    v_2971 = v_2970;
  } else {
    v_2971 = false;
  };
  if (instanciador_lv) {
    v_2968 = sub_164;
  } else {
    v_2968 = false;
  };
  if (instanciador_cv) {
    v_2969 = sub_153;
  } else {
    v_2969 = v_2968;
  };
  if (instanciador_c_vent) {
    sub_152 = v_2969;
  } else {
    sub_152 = v_2971;
  };
  if (instanciador_ck_17_1) {
    sub_151 = sub_152;
  } else {
    sub_151 = false;
  };
  if (instanciador_lx) {
    v_2974 = sub_151;
    v_2972 = false;
  } else {
    v_2974 = sub_152;
    v_2972 = sub_151;
  };
  if (instanciador_c_lampExt) {
    v_2973 = false;
  } else {
    v_2973 = v_2972;
  };
  sub_165 = sub_152;
  if (instanciador_c_lampExt) {
    v_2975 = v_2974;
  } else {
    v_2975 = sub_165;
  };
  if (instanciador_cx) {
    sub_150 = v_2973;
  } else {
    sub_150 = v_2975;
  };
  if (instanciador_ck_15_1) {
    sub_149 = sub_150;
  } else {
    sub_149 = false;
  };
  if (instanciador_l4) {
    v_2978 = sub_149;
  } else {
    v_2978 = sub_150;
  };
  if (instanciador_c4_lamp) {
    v_2979 = v_2978;
  } else {
    v_2979 = sub_150;
  };
  if (instanciador_l4) {
    v_2976 = false;
  } else {
    v_2976 = sub_149;
  };
  if (instanciador_c4_lamp) {
    v_2977 = false;
  } else {
    v_2977 = v_2976;
  };
  if (instanciador_c4) {
    sub_148 = v_2977;
  } else {
    sub_148 = v_2979;
  };
  if (instanciador_ck_13_1) {
    sub_166 = false;
  } else {
    sub_166 = sub_148;
  };
  if (instanciador_c3_lamp) {
    v_2982 = sub_166;
  } else {
    v_2982 = false;
  };
  if (instanciador_l3) {
    v_2983 = v_2982;
  } else {
    v_2983 = false;
  };
  if (instanciador_c3_lamp) {
    v_2980 = sub_148;
  } else {
    v_2980 = sub_166;
  };
  if (instanciador_l3) {
    v_2981 = sub_148;
  } else {
    v_2981 = v_2980;
  };
  if (instanciador_c3) {
    sub_147 = v_2981;
  } else {
    sub_147 = v_2983;
  };
  if (instanciador_ck_11_1) {
    sub_167 = false;
  } else {
    sub_167 = sub_147;
  };
  if (instanciador_c2_lamp) {
    v_2986 = sub_167;
  } else {
    v_2986 = false;
  };
  if (instanciador_l2) {
    v_2987 = v_2986;
  } else {
    v_2987 = false;
  };
  if (instanciador_c2_lamp) {
    v_2984 = sub_147;
  } else {
    v_2984 = sub_167;
  };
  if (instanciador_l2) {
    v_2985 = sub_147;
  } else {
    v_2985 = v_2984;
  };
  if (instanciador_c2) {
    sub_146 = v_2985;
  } else {
    sub_146 = v_2987;
  };
  if (instanciador_ck_9_1) {
    sub_168 = false;
  } else {
    sub_168 = sub_146;
  };
  if (instanciador_c1_lamp) {
    v_2990 = sub_168;
  } else {
    v_2990 = false;
  };
  if (instanciador_l1) {
    v_2991 = v_2990;
  } else {
    v_2991 = false;
  };
  if (instanciador_c1_lamp) {
    v_2988 = sub_146;
  } else {
    v_2988 = sub_168;
  };
  if (instanciador_l1) {
    v_2989 = sub_146;
  } else {
    v_2989 = v_2988;
  };
  if (instanciador_c1) {
    sub_145 = v_2989;
  } else {
    sub_145 = v_2991;
  };
  sub_144 = sub_145;
  sub_143 = sub_144;
  sub_142 = sub_143;
  sub_141 = sub_142;
  if (instanciador_ck_17_1) {
    sub_178 = false;
  } else {
    sub_178 = sub_152;
  };
  if (instanciador_lx) {
    v_2941 = sub_178;
  } else {
    v_2941 = false;
  };
  if (instanciador_c_lampExt) {
    v_2942 = v_2941;
  } else {
    v_2942 = false;
  };
  if (instanciador_lx) {
    v_2939 = sub_152;
  } else {
    v_2939 = sub_178;
  };
  if (instanciador_c_lampExt) {
    v_2940 = sub_165;
  } else {
    v_2940 = v_2939;
  };
  if (instanciador_cx) {
    sub_177 = v_2940;
  } else {
    sub_177 = v_2942;
  };
  if (instanciador_ck_15_1) {
    sub_179 = false;
  } else {
    sub_179 = sub_177;
  };
  if (instanciador_l4) {
    v_2945 = sub_179;
  } else {
    v_2945 = false;
  };
  if (instanciador_c4_lamp) {
    v_2946 = v_2945;
  } else {
    v_2946 = false;
  };
  if (instanciador_l4) {
    v_2943 = sub_177;
  } else {
    v_2943 = sub_179;
  };
  if (instanciador_c4_lamp) {
    v_2944 = sub_177;
  } else {
    v_2944 = v_2943;
  };
  if (instanciador_c4) {
    sub_176 = v_2944;
  } else {
    sub_176 = v_2946;
  };
  if (instanciador_ck_13_1) {
    sub_180 = false;
  } else {
    sub_180 = sub_176;
  };
  if (instanciador_c3_lamp) {
    v_2949 = sub_180;
  } else {
    v_2949 = false;
  };
  if (instanciador_l3) {
    v_2950 = v_2949;
  } else {
    v_2950 = false;
  };
  if (instanciador_c3_lamp) {
    v_2947 = sub_176;
  } else {
    v_2947 = sub_180;
  };
  if (instanciador_l3) {
    v_2948 = sub_176;
  } else {
    v_2948 = v_2947;
  };
  if (instanciador_c3) {
    sub_175 = v_2948;
  } else {
    sub_175 = v_2950;
  };
  if (instanciador_ck_11_1) {
    sub_181 = false;
  } else {
    sub_181 = sub_175;
  };
  if (instanciador_c2_lamp) {
    v_2953 = sub_181;
  } else {
    v_2953 = false;
  };
  if (instanciador_l2) {
    v_2954 = v_2953;
  } else {
    v_2954 = false;
  };
  if (instanciador_c2_lamp) {
    v_2951 = sub_175;
  } else {
    v_2951 = sub_181;
  };
  if (instanciador_l2) {
    v_2952 = sub_175;
  } else {
    v_2952 = v_2951;
  };
  if (instanciador_c2) {
    sub_174 = v_2952;
  } else {
    sub_174 = v_2954;
  };
  if (instanciador_ck_9_1) {
    sub_182 = false;
  } else {
    sub_182 = sub_174;
  };
  if (instanciador_c1_lamp) {
    v_2957 = sub_182;
  } else {
    v_2957 = false;
  };
  if (instanciador_l1) {
    v_2958 = v_2957;
  } else {
    v_2958 = false;
  };
  if (instanciador_c1_lamp) {
    v_2955 = sub_174;
  } else {
    v_2955 = sub_182;
  };
  if (instanciador_l1) {
    v_2956 = sub_174;
  } else {
    v_2956 = v_2955;
  };
  if (instanciador_c1) {
    sub_173 = v_2956;
  } else {
    sub_173 = v_2958;
  };
  sub_172 = sub_173;
  sub_171 = sub_172;
  sub_170 = sub_171;
  sub_169 = sub_170;
  if (instanciador_v_341) {
    sub_140 = sub_169;
  } else {
    sub_140 = sub_141;
  };
  sub_139 = sub_140;
  sub_196 = sub_72;
  if (instanciador_ck_19_1) {
    sub_197 = false;
  } else {
    sub_197 = sub_196;
  };
  if (instanciador_lv) {
    v_2913 = sub_196;
  } else {
    v_2913 = sub_197;
  };
  if (instanciador_cv) {
    v_2914 = v_2913;
  } else {
    v_2914 = false;
  };
  if (instanciador_lv) {
    v_2911 = sub_197;
  } else {
    v_2911 = false;
  };
  if (instanciador_cv) {
    v_2912 = sub_196;
  } else {
    v_2912 = v_2911;
  };
  if (instanciador_c_vent) {
    sub_195 = v_2912;
  } else {
    sub_195 = v_2914;
  };
  if (instanciador_ck_17_1) {
    sub_198 = false;
  } else {
    sub_198 = sub_195;
  };
  if (instanciador_lx) {
    v_2917 = sub_198;
  } else {
    v_2917 = false;
  };
  if (instanciador_c_lampExt) {
    v_2918 = v_2917;
  } else {
    v_2918 = false;
  };
  if (instanciador_lx) {
    v_2915 = sub_195;
  } else {
    v_2915 = sub_198;
  };
  if (instanciador_c_lampExt) {
    v_2916 = sub_195;
  } else {
    v_2916 = v_2915;
  };
  if (instanciador_cx) {
    sub_194 = v_2916;
  } else {
    sub_194 = v_2918;
  };
  if (instanciador_ck_15_1) {
    sub_193 = sub_194;
  } else {
    sub_193 = false;
  };
  if (instanciador_l4) {
    v_2921 = sub_193;
  } else {
    v_2921 = sub_194;
  };
  if (instanciador_c4_lamp) {
    v_2922 = v_2921;
  } else {
    v_2922 = sub_194;
  };
  if (instanciador_l4) {
    v_2919 = false;
  } else {
    v_2919 = sub_193;
  };
  if (instanciador_c4_lamp) {
    v_2920 = false;
  } else {
    v_2920 = v_2919;
  };
  if (instanciador_c4) {
    sub_192 = v_2920;
  } else {
    sub_192 = v_2922;
  };
  if (instanciador_ck_13_1) {
    sub_199 = false;
  } else {
    sub_199 = sub_192;
  };
  if (instanciador_c3_lamp) {
    v_2925 = sub_199;
  } else {
    v_2925 = false;
  };
  if (instanciador_l3) {
    v_2926 = v_2925;
  } else {
    v_2926 = false;
  };
  if (instanciador_c3_lamp) {
    v_2923 = sub_192;
  } else {
    v_2923 = sub_199;
  };
  if (instanciador_l3) {
    v_2924 = sub_192;
  } else {
    v_2924 = v_2923;
  };
  if (instanciador_c3) {
    sub_191 = v_2924;
  } else {
    sub_191 = v_2926;
  };
  if (instanciador_ck_11_1) {
    sub_190 = sub_191;
  } else {
    sub_190 = false;
  };
  if (instanciador_c2_lamp) {
    v_2929 = sub_190;
  } else {
    v_2929 = sub_191;
  };
  if (instanciador_l2) {
    v_2930 = v_2929;
  } else {
    v_2930 = sub_191;
  };
  if (instanciador_c2_lamp) {
    v_2927 = false;
  } else {
    v_2927 = sub_190;
  };
  if (instanciador_l2) {
    v_2928 = false;
  } else {
    v_2928 = v_2927;
  };
  if (instanciador_c2) {
    sub_189 = v_2928;
  } else {
    sub_189 = v_2930;
  };
  if (instanciador_ck_9_1) {
    sub_188 = sub_189;
  } else {
    sub_188 = false;
  };
  if (instanciador_c1_lamp) {
    v_2933 = sub_188;
  } else {
    v_2933 = sub_189;
  };
  if (instanciador_l1) {
    v_2934 = v_2933;
  } else {
    v_2934 = sub_189;
  };
  if (instanciador_c1_lamp) {
    v_2931 = false;
  } else {
    v_2931 = sub_188;
  };
  if (instanciador_l1) {
    v_2932 = false;
  } else {
    v_2932 = v_2931;
  };
  if (instanciador_c1) {
    sub_187 = v_2932;
  } else {
    sub_187 = v_2934;
  };
  sub_186 = sub_187;
  sub_185 = sub_186;
  sub_227 = sub_79;
  sub_226 = sub_227;
  sub_225 = sub_226;
  sub_224 = sub_225;
  sub_223 = sub_224;
  sub_222 = sub_223;
  sub_221 = sub_222;
  sub_220 = sub_221;
  sub_219 = sub_220;
  sub_218 = sub_219;
  sub_217 = sub_218;
  sub_216 = sub_217;
  sub_215 = sub_216;
  sub_214 = sub_215;
  sub_213 = sub_214;
  sub_212 = sub_213;
  sub_211 = sub_212;
  sub_210 = sub_211;
  sub_209 = sub_210;
  sub_208 = sub_209;
  sub_207 = sub_208;
  sub_206 = sub_207;
  sub_205 = sub_206;
  sub_204 = sub_205;
  sub_203 = sub_204;
  sub_202 = sub_203;
  sub_201 = sub_202;
  if (instanciador_neutro_input) {
    v_2935 = sub_201;
  } else {
    v_2935 = sub_145;
  };
  if (instanciador_ck_25_1) {
    sub_242 = sub_156;
  } else {
    sub_242 = false;
  };
  if (instanciador_inpSp) {
    v_2884 = sub_242;
  } else {
    v_2884 = sub_156;
  };
  if (instanciador_c_somP) {
    v_2885 = v_2884;
  } else {
    v_2885 = sub_155;
  };
  if (instanciador_inpSp) {
    v_2882 = false;
  } else {
    v_2882 = sub_242;
  };
  if (instanciador_c_somP) {
    v_2883 = false;
  } else {
    v_2883 = v_2882;
  };
  if (instanciador_csp) {
    sub_241 = v_2883;
  } else {
    sub_241 = v_2885;
  };
  if (instanciador_ck_21_1) {
    v_2886 = sub_241;
  } else {
    v_2886 = sub_127;
  };
  if (instanciador_inpMl) {
    sub_240 = v_2886;
  } else {
    sub_240 = sub_241;
  };
  if (instanciador_ck_19_1) {
    sub_239 = sub_240;
  } else {
    sub_239 = false;
  };
  if (instanciador_lv) {
    v_2889 = false;
  } else {
    v_2889 = sub_239;
  };
  if (instanciador_cv) {
    v_2890 = v_2889;
  } else {
    v_2890 = sub_240;
  };
  if (instanciador_lv) {
    v_2887 = sub_239;
  } else {
    v_2887 = sub_240;
  };
  if (instanciador_cv) {
    v_2888 = false;
  } else {
    v_2888 = v_2887;
  };
  if (instanciador_c_vent) {
    sub_238 = v_2888;
  } else {
    sub_238 = v_2890;
  };
  if (instanciador_ck_17_1) {
    sub_237 = sub_238;
  } else {
    sub_237 = false;
  };
  if (instanciador_lx) {
    v_2893 = sub_237;
  } else {
    v_2893 = sub_238;
  };
  if (instanciador_c_lampExt) {
    v_2894 = v_2893;
  } else {
    v_2894 = sub_238;
  };
  if (instanciador_lx) {
    v_2891 = false;
  } else {
    v_2891 = sub_237;
  };
  if (instanciador_c_lampExt) {
    v_2892 = false;
  } else {
    v_2892 = v_2891;
  };
  if (instanciador_cx) {
    sub_236 = v_2892;
  } else {
    sub_236 = v_2894;
  };
  if (instanciador_ck_15_1) {
    sub_235 = sub_236;
  } else {
    sub_235 = false;
  };
  if (instanciador_l4) {
    v_2897 = sub_235;
  } else {
    v_2897 = sub_236;
  };
  if (instanciador_c4_lamp) {
    v_2898 = v_2897;
  } else {
    v_2898 = sub_236;
  };
  if (instanciador_l4) {
    v_2895 = false;
  } else {
    v_2895 = sub_235;
  };
  if (instanciador_c4_lamp) {
    v_2896 = false;
  } else {
    v_2896 = v_2895;
  };
  if (instanciador_c4) {
    sub_234 = v_2896;
  } else {
    sub_234 = v_2898;
  };
  if (instanciador_ck_13_1) {
    sub_233 = sub_234;
  } else {
    sub_233 = false;
  };
  if (instanciador_c3_lamp) {
    v_2901 = sub_233;
  } else {
    v_2901 = sub_234;
  };
  if (instanciador_l3) {
    v_2902 = v_2901;
  } else {
    v_2902 = sub_234;
  };
  if (instanciador_c3_lamp) {
    v_2899 = false;
  } else {
    v_2899 = sub_233;
  };
  if (instanciador_l3) {
    v_2900 = false;
  } else {
    v_2900 = v_2899;
  };
  if (instanciador_c3) {
    sub_232 = v_2900;
  } else {
    sub_232 = v_2902;
  };
  if (instanciador_ck_11_1) {
    sub_231 = sub_232;
  } else {
    sub_231 = false;
  };
  if (instanciador_c2_lamp) {
    v_2905 = sub_231;
  } else {
    v_2905 = sub_232;
  };
  if (instanciador_l2) {
    v_2906 = v_2905;
  } else {
    v_2906 = sub_232;
  };
  if (instanciador_c2_lamp) {
    v_2903 = false;
  } else {
    v_2903 = sub_231;
  };
  if (instanciador_l2) {
    v_2904 = false;
  } else {
    v_2904 = v_2903;
  };
  if (instanciador_c2) {
    sub_230 = v_2904;
  } else {
    sub_230 = v_2906;
  };
  if (instanciador_ck_9_1) {
    sub_229 = sub_230;
  } else {
    sub_229 = false;
  };
  if (instanciador_c1_lamp) {
    v_2909 = sub_229;
  } else {
    v_2909 = sub_230;
  };
  if (instanciador_l1) {
    v_2910 = v_2909;
  } else {
    v_2910 = sub_230;
  };
  if (instanciador_c1_lamp) {
    v_2907 = false;
  } else {
    v_2907 = sub_229;
  };
  if (instanciador_l1) {
    v_2908 = false;
  } else {
    v_2908 = v_2907;
  };
  if (instanciador_c1) {
    sub_228 = v_2908;
  } else {
    sub_228 = v_2910;
  };
  if (instanciador_neutro_input) {
    sub_200 = sub_201;
  } else {
    sub_200 = sub_228;
  };
  if (instanciador_seguranca_input) {
    v_2936 = sub_200;
  } else {
    v_2936 = v_2935;
  };
  if (instanciador_domingol_input) {
    v_2937 = sub_185;
  } else {
    v_2937 = v_2936;
  };
  if (instanciador_domingo_input) {
    sub_184 = sub_170;
  } else {
    sub_184 = v_2937;
  };
  if (instanciador_v_341) {
    v_2938 = sub_169;
  } else {
    v_2938 = sub_184;
  };
  if (instanciador_sexta_input) {
    sub_183 = sub_169;
  } else {
    sub_183 = v_2938;
  };
  if (instanciador_v_339) {
    v_2992 = sub_183;
  } else {
    v_2992 = sub_139;
  };
  if (instanciador_neutro_input) {
    sub_247 = sub_201;
  } else {
    sub_247 = sub_173;
  };
  if (instanciador_seguranca_input) {
    v_2881 = sub_200;
  } else {
    v_2881 = sub_247;
  };
  if (instanciador_domingol_input) {
    sub_246 = sub_185;
  } else {
    sub_246 = v_2881;
  };
  if (instanciador_domingo_input) {
    sub_245 = sub_170;
  } else {
    sub_245 = sub_246;
  };
  if (instanciador_v_341) {
    sub_244 = sub_169;
  } else {
    sub_244 = sub_245;
  };
  sub_243 = sub_244;
  if (instanciador_v_339) {
    v_2993 = sub_183;
  } else {
    v_2993 = sub_243;
  };
  if (instanciador_ebd_input) {
    sub_138 = v_2992;
  } else {
    sub_138 = v_2993;
  };
  if (instanciador_seguranca_input) {
    v_2877 = sub_228;
  } else {
    v_2877 = sub_201;
  };
  if (instanciador_domingol_input) {
    v_2878 = sub_185;
    v_2876 = sub_185;
  } else {
    v_2878 = v_2877;
    v_2876 = sub_171;
  };
  if (instanciador_domingo_input) {
    v_2879 = v_2876;
  } else {
    v_2879 = v_2878;
  };
  if (instanciador_domingol_input) {
    v_2875 = sub_185;
    v_2874 = sub_185;
  } else {
    v_2875 = sub_200;
    v_2874 = sub_247;
  };
  if (instanciador_domingo_input) {
    sub_249 = v_2874;
  } else {
    sub_249 = v_2875;
  };
  if (instanciador_v_341) {
    v_2880 = v_2879;
  } else {
    v_2880 = sub_249;
  };
  if (instanciador_sexta_input) {
    sub_248 = sub_169;
  } else {
    sub_248 = v_2880;
  };
  if (instanciador_neutro_input) {
    v = sub_201;
  } else {
    v = sub_187;
  };
  if (instanciador_seguranca_input) {
    sub_251 = sub_200;
  } else {
    sub_251 = v;
  };
  if (instanciador_domingo_input) {
    sub_250 = sub_170;
  } else {
    sub_250 = sub_251;
  };
  if (instanciador_v_341) {
    v_3132 = sub_246;
  } else {
    v_3132 = sub_250;
  };
  if (instanciador_sexta_input) {
    v_3133 = sub_169;
  } else {
    v_3133 = v_3132;
  };
  if (instanciador_v_339) {
    v_3134 = v_3133;
  } else {
    v_3134 = sub_248;
  };
  if (instanciador_ebd_input) {
    v_3135 = sub_141;
  } else {
    v_3135 = v_3134;
  };
  if (instanciador_v_340) {
    v_3136 = v_3135;
  } else {
    v_3136 = sub_138;
  };
  if (p_instanciador_c_microL) {
    sub_0 = v_3136;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c_microL = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_csl_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_c_somL, int instanciador_csp,
  int instanciador_c_somP, int instanciador_c_vent, int instanciador_cv,
  int instanciador_cx, int instanciador_c4, int instanciador_c3,
  int instanciador_c2, int instanciador_c1, int instanciador_c_lampExt,
  int instanciador_c4_lamp, int instanciador_c3_lamp,
  int instanciador_c2_lamp, int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_csl_out* _out) {
  
  int v_3385;
  int v_3384;
  int v_3383;
  int v_3382;
  int v_3381;
  int v_3380;
  int v_3379;
  int v_3378;
  int v_3377;
  int v_3376;
  int v_3375;
  int v_3374;
  int v_3373;
  int v_3372;
  int v_3371;
  int v_3370;
  int v_3369;
  int v_3368;
  int v_3367;
  int v_3366;
  int v_3365;
  int v_3364;
  int v_3363;
  int v_3362;
  int v_3361;
  int v_3360;
  int v_3359;
  int v_3358;
  int v_3357;
  int v_3356;
  int v_3355;
  int v_3354;
  int v_3353;
  int v_3352;
  int v_3351;
  int v_3350;
  int v_3349;
  int v_3348;
  int v_3347;
  int v_3346;
  int v_3345;
  int v_3344;
  int v_3343;
  int v_3342;
  int v_3341;
  int v_3340;
  int v_3339;
  int v_3338;
  int v_3337;
  int v_3336;
  int v_3335;
  int v_3334;
  int v_3333;
  int v_3332;
  int v_3331;
  int v_3330;
  int v_3329;
  int v_3328;
  int v_3327;
  int v_3326;
  int v_3325;
  int v_3324;
  int v_3323;
  int v_3322;
  int v_3321;
  int v_3320;
  int v_3319;
  int v_3318;
  int v_3317;
  int v_3316;
  int v_3315;
  int v_3314;
  int v_3313;
  int v_3312;
  int v_3311;
  int v_3310;
  int v_3309;
  int v_3308;
  int v_3307;
  int v_3306;
  int v_3305;
  int v_3304;
  int v_3303;
  int v_3302;
  int v_3301;
  int v_3300;
  int v_3299;
  int v_3298;
  int v_3297;
  int v_3296;
  int v_3295;
  int v_3294;
  int v_3293;
  int v_3292;
  int v_3291;
  int v_3290;
  int v_3289;
  int v_3288;
  int v_3287;
  int v_3286;
  int v_3285;
  int v_3284;
  int v_3283;
  int v_3282;
  int v_3281;
  int v_3280;
  int v_3279;
  int v_3278;
  int v_3277;
  int v_3276;
  int v_3275;
  int v_3274;
  int v_3273;
  int v_3272;
  int v_3271;
  int v_3270;
  int v_3269;
  int v_3268;
  int v_3267;
  int v_3266;
  int v_3265;
  int v_3264;
  int v_3263;
  int v_3262;
  int v_3261;
  int v_3260;
  int v_3259;
  int v_3258;
  int v_3257;
  int v_3256;
  int v_3255;
  int v_3254;
  int v_3253;
  int v_3252;
  int v_3251;
  int v_3250;
  int v_3249;
  int v_3248;
  int v_3247;
  int v_3246;
  int v_3245;
  int v_3244;
  int v_3243;
  int v_3242;
  int v_3241;
  int v_3240;
  int v_3239;
  int v_3238;
  int v_3237;
  int v_3236;
  int v_3235;
  int v_3234;
  int v_3233;
  int v_3232;
  int v_3231;
  int v_3230;
  int v_3229;
  int v_3228;
  int v_3227;
  int v_3226;
  int v_3225;
  int v_3224;
  int v_3223;
  int v_3222;
  int v_3221;
  int v_3220;
  int v_3219;
  int v_3218;
  int v_3217;
  int v_3216;
  int v_3215;
  int v_3214;
  int v_3213;
  int v_3212;
  int v_3211;
  int v_3210;
  int v_3209;
  int v_3208;
  int v_3207;
  int v_3206;
  int v_3205;
  int v_3204;
  int v_3203;
  int v_3202;
  int v_3201;
  int v_3200;
  int v_3199;
  int v_3198;
  int v_3197;
  int v_3196;
  int v_3195;
  int v_3194;
  int v_3193;
  int v_3192;
  int v_3191;
  int v_3190;
  int v_3189;
  int v_3188;
  int v_3187;
  int v_3186;
  int v_3185;
  int v_3184;
  int v_3183;
  int v_3182;
  int v_3181;
  int v_3180;
  int v_3179;
  int v_3178;
  int v_3177;
  int v_3176;
  int v_3175;
  int v_3174;
  int v_3173;
  int v_3172;
  int v_3171;
  int v_3170;
  int v_3169;
  int v_3168;
  int v_3167;
  int v_3166;
  int v_3165;
  int v_3164;
  int v_3163;
  int v_3162;
  int v_3161;
  int v_3160;
  int v_3159;
  int v_3158;
  int v_3157;
  int v_3156;
  int v_3155;
  int v_3154;
  int v_3153;
  int v_3152;
  int v_3151;
  int v_3150;
  int v_3149;
  int v_3148;
  int v_3147;
  int v_3146;
  int v_3145;
  int v_3144;
  int v_3143;
  int v_3142;
  int v_3141;
  int v_3140;
  int v_3139;
  int v_3138;
  int v_3137;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  int sub_230;
  int sub_231;
  int sub_232;
  int sub_233;
  int sub_234;
  int sub_235;
  int sub_236;
  int sub_237;
  int sub_238;
  int sub_239;
  int sub_240;
  int sub_241;
  int sub_242;
  int sub_243;
  int sub_244;
  int sub_245;
  v_3346 = (instanciador_inpSl&&false);
  sub_26 = false;
  if (instanciador_c_somL) {
    sub_25 = v_3346;
  } else {
    sub_25 = sub_26;
  };
  sub_27 = sub_26;
  if (instanciador_ck_27_1) {
    sub_24 = sub_27;
  } else {
    sub_24 = sub_25;
  };
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  if (instanciador_ck_25_1) {
    sub_28 = false;
  } else {
    sub_28 = sub_20;
  };
  if (instanciador_inpSp) {
    v_3349 = sub_28;
  } else {
    v_3349 = false;
  };
  if (instanciador_c_somP) {
    v_3350 = v_3349;
  } else {
    v_3350 = false;
  };
  if (instanciador_inpSp) {
    v_3347 = sub_20;
  } else {
    v_3347 = sub_28;
  };
  if (instanciador_c_somP) {
    v_3348 = sub_19;
  } else {
    v_3348 = v_3347;
  };
  if (instanciador_csp) {
    sub_18 = v_3348;
  } else {
    sub_18 = v_3350;
  };
  sub_17 = sub_18;
  if (instanciador_ck_19_1) {
    sub_29 = false;
  } else {
    sub_29 = sub_17;
  };
  if (instanciador_lv) {
    v_3353 = sub_17;
  } else {
    v_3353 = sub_29;
  };
  if (instanciador_cv) {
    v_3354 = v_3353;
  } else {
    v_3354 = false;
  };
  if (instanciador_lv) {
    v_3351 = sub_29;
  } else {
    v_3351 = false;
  };
  if (instanciador_cv) {
    v_3352 = sub_17;
  } else {
    v_3352 = v_3351;
  };
  if (instanciador_c_vent) {
    sub_16 = v_3352;
  } else {
    sub_16 = v_3354;
  };
  if (instanciador_ck_17_1) {
    sub_15 = sub_16;
  } else {
    sub_15 = false;
  };
  if (instanciador_lx) {
    v_3357 = sub_15;
    v_3355 = false;
  } else {
    v_3357 = sub_16;
    v_3355 = sub_15;
  };
  if (instanciador_c_lampExt) {
    v_3356 = false;
  } else {
    v_3356 = v_3355;
  };
  sub_30 = sub_16;
  if (instanciador_c_lampExt) {
    v_3358 = v_3357;
  } else {
    v_3358 = sub_30;
  };
  if (instanciador_cx) {
    sub_14 = v_3356;
  } else {
    sub_14 = v_3358;
  };
  if (instanciador_ck_15_1) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (instanciador_l4) {
    v_3361 = sub_13;
  } else {
    v_3361 = sub_14;
  };
  if (instanciador_c4_lamp) {
    v_3362 = v_3361;
  } else {
    v_3362 = sub_14;
  };
  if (instanciador_l4) {
    v_3359 = false;
  } else {
    v_3359 = sub_13;
  };
  if (instanciador_c4_lamp) {
    v_3360 = false;
  } else {
    v_3360 = v_3359;
  };
  if (instanciador_c4) {
    sub_12 = v_3360;
  } else {
    sub_12 = v_3362;
  };
  if (instanciador_ck_13_1) {
    sub_31 = false;
  } else {
    sub_31 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_3365 = sub_31;
  } else {
    v_3365 = false;
  };
  if (instanciador_l3) {
    v_3366 = v_3365;
  } else {
    v_3366 = false;
  };
  if (instanciador_c3_lamp) {
    v_3363 = sub_12;
  } else {
    v_3363 = sub_31;
  };
  if (instanciador_l3) {
    v_3364 = sub_12;
  } else {
    v_3364 = v_3363;
  };
  if (instanciador_c3) {
    sub_11 = v_3364;
  } else {
    sub_11 = v_3366;
  };
  if (instanciador_ck_11_1) {
    sub_32 = false;
  } else {
    sub_32 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_3369 = sub_32;
  } else {
    v_3369 = false;
  };
  if (instanciador_l2) {
    v_3370 = v_3369;
  } else {
    v_3370 = false;
  };
  if (instanciador_c2_lamp) {
    v_3367 = sub_11;
  } else {
    v_3367 = sub_32;
  };
  if (instanciador_l2) {
    v_3368 = sub_11;
  } else {
    v_3368 = v_3367;
  };
  if (instanciador_c2) {
    sub_10 = v_3368;
  } else {
    sub_10 = v_3370;
  };
  if (instanciador_ck_9_1) {
    sub_33 = false;
  } else {
    sub_33 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_3373 = sub_33;
  } else {
    v_3373 = false;
  };
  if (instanciador_l1) {
    v_3374 = v_3373;
  } else {
    v_3374 = false;
  };
  if (instanciador_c1_lamp) {
    v_3371 = sub_10;
  } else {
    v_3371 = sub_33;
  };
  if (instanciador_l1) {
    v_3372 = sub_10;
  } else {
    v_3372 = v_3371;
  };
  if (instanciador_c1) {
    sub_9 = v_3372;
  } else {
    sub_9 = v_3374;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (instanciador_ck_17_1) {
    sub_43 = false;
  } else {
    sub_43 = sub_16;
  };
  if (instanciador_lx) {
    v_3328 = sub_43;
  } else {
    v_3328 = false;
  };
  if (instanciador_c_lampExt) {
    v_3329 = v_3328;
  } else {
    v_3329 = false;
  };
  if (instanciador_lx) {
    v_3326 = sub_16;
  } else {
    v_3326 = sub_43;
  };
  if (instanciador_c_lampExt) {
    v_3327 = sub_30;
  } else {
    v_3327 = v_3326;
  };
  if (instanciador_cx) {
    sub_42 = v_3327;
  } else {
    sub_42 = v_3329;
  };
  if (instanciador_ck_15_1) {
    sub_44 = false;
  } else {
    sub_44 = sub_42;
  };
  if (instanciador_l4) {
    v_3332 = sub_44;
  } else {
    v_3332 = false;
  };
  if (instanciador_c4_lamp) {
    v_3333 = v_3332;
  } else {
    v_3333 = false;
  };
  if (instanciador_l4) {
    v_3330 = sub_42;
  } else {
    v_3330 = sub_44;
  };
  if (instanciador_c4_lamp) {
    v_3331 = sub_42;
  } else {
    v_3331 = v_3330;
  };
  if (instanciador_c4) {
    sub_41 = v_3331;
  } else {
    sub_41 = v_3333;
  };
  if (instanciador_ck_13_1) {
    sub_45 = false;
  } else {
    sub_45 = sub_41;
  };
  if (instanciador_c3_lamp) {
    v_3336 = sub_45;
  } else {
    v_3336 = false;
  };
  if (instanciador_l3) {
    v_3337 = v_3336;
  } else {
    v_3337 = false;
  };
  if (instanciador_c3_lamp) {
    v_3334 = sub_41;
  } else {
    v_3334 = sub_45;
  };
  if (instanciador_l3) {
    v_3335 = sub_41;
  } else {
    v_3335 = v_3334;
  };
  if (instanciador_c3) {
    sub_40 = v_3335;
  } else {
    sub_40 = v_3337;
  };
  if (instanciador_ck_11_1) {
    sub_46 = false;
  } else {
    sub_46 = sub_40;
  };
  if (instanciador_c2_lamp) {
    v_3340 = sub_46;
  } else {
    v_3340 = false;
  };
  if (instanciador_l2) {
    v_3341 = v_3340;
  } else {
    v_3341 = false;
  };
  if (instanciador_c2_lamp) {
    v_3338 = sub_40;
  } else {
    v_3338 = sub_46;
  };
  if (instanciador_l2) {
    v_3339 = sub_40;
  } else {
    v_3339 = v_3338;
  };
  if (instanciador_c2) {
    sub_39 = v_3339;
  } else {
    sub_39 = v_3341;
  };
  if (instanciador_ck_9_1) {
    sub_47 = false;
  } else {
    sub_47 = sub_39;
  };
  if (instanciador_c1_lamp) {
    v_3344 = sub_47;
  } else {
    v_3344 = false;
  };
  if (instanciador_l1) {
    v_3345 = v_3344;
  } else {
    v_3345 = false;
  };
  if (instanciador_c1_lamp) {
    v_3342 = sub_39;
  } else {
    v_3342 = sub_47;
  };
  if (instanciador_l1) {
    v_3343 = sub_39;
  } else {
    v_3343 = v_3342;
  };
  if (instanciador_c1) {
    sub_38 = v_3343;
  } else {
    sub_38 = v_3345;
  };
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  if (instanciador_v_341) {
    sub_4 = sub_34;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  sub_70 = !(instanciador_inpSl);
  sub_71 = true;
  if (instanciador_c_somL) {
    sub_69 = sub_70;
  } else {
    sub_69 = sub_71;
  };
  v_3293 = (instanciador_inpSl||false);
  if (instanciador_c_somL) {
    sub_72 = sub_71;
  } else {
    sub_72 = v_3293;
  };
  if (instanciador_ck_27_1) {
    sub_68 = sub_72;
  } else {
    sub_68 = sub_69;
  };
  sub_67 = sub_68;
  sub_66 = sub_67;
  sub_65 = sub_66;
  sub_64 = sub_65;
  if (instanciador_ck_25_1) {
    sub_63 = sub_64;
  } else {
    sub_63 = false;
  };
  if (instanciador_inpSp) {
    v_3296 = sub_63;
  } else {
    v_3296 = sub_64;
  };
  if (instanciador_c_somP) {
    v_3297 = v_3296;
  } else {
    v_3297 = sub_64;
  };
  if (instanciador_inpSp) {
    v_3294 = false;
  } else {
    v_3294 = sub_63;
  };
  if (instanciador_c_somP) {
    v_3295 = false;
  } else {
    v_3295 = v_3294;
  };
  if (instanciador_csp) {
    sub_62 = v_3295;
  } else {
    sub_62 = v_3297;
  };
  sub_61 = sub_62;
  if (instanciador_ck_19_1) {
    sub_73 = false;
  } else {
    sub_73 = sub_61;
  };
  if (instanciador_lv) {
    v_3300 = sub_61;
  } else {
    v_3300 = sub_73;
  };
  if (instanciador_cv) {
    v_3301 = v_3300;
  } else {
    v_3301 = false;
  };
  if (instanciador_lv) {
    v_3298 = sub_73;
  } else {
    v_3298 = false;
  };
  if (instanciador_cv) {
    v_3299 = sub_61;
  } else {
    v_3299 = v_3298;
  };
  if (instanciador_c_vent) {
    sub_60 = v_3299;
  } else {
    sub_60 = v_3301;
  };
  if (instanciador_ck_17_1) {
    sub_74 = false;
  } else {
    sub_74 = sub_60;
  };
  if (instanciador_lx) {
    v_3304 = sub_74;
  } else {
    v_3304 = false;
  };
  if (instanciador_c_lampExt) {
    v_3305 = v_3304;
  } else {
    v_3305 = false;
  };
  if (instanciador_lx) {
    v_3302 = sub_60;
  } else {
    v_3302 = sub_74;
  };
  if (instanciador_c_lampExt) {
    v_3303 = sub_60;
  } else {
    v_3303 = v_3302;
  };
  if (instanciador_cx) {
    sub_59 = v_3303;
  } else {
    sub_59 = v_3305;
  };
  if (instanciador_ck_15_1) {
    sub_58 = sub_59;
  } else {
    sub_58 = false;
  };
  if (instanciador_l4) {
    v_3308 = sub_58;
  } else {
    v_3308 = sub_59;
  };
  if (instanciador_c4_lamp) {
    v_3309 = v_3308;
  } else {
    v_3309 = sub_59;
  };
  if (instanciador_l4) {
    v_3306 = false;
  } else {
    v_3306 = sub_58;
  };
  if (instanciador_c4_lamp) {
    v_3307 = false;
  } else {
    v_3307 = v_3306;
  };
  if (instanciador_c4) {
    sub_57 = v_3307;
  } else {
    sub_57 = v_3309;
  };
  if (instanciador_ck_13_1) {
    sub_75 = false;
  } else {
    sub_75 = sub_57;
  };
  if (instanciador_c3_lamp) {
    v_3312 = sub_75;
  } else {
    v_3312 = false;
  };
  if (instanciador_l3) {
    v_3313 = v_3312;
  } else {
    v_3313 = false;
  };
  if (instanciador_c3_lamp) {
    v_3310 = sub_57;
  } else {
    v_3310 = sub_75;
  };
  if (instanciador_l3) {
    v_3311 = sub_57;
  } else {
    v_3311 = v_3310;
  };
  if (instanciador_c3) {
    sub_56 = v_3311;
  } else {
    sub_56 = v_3313;
  };
  if (instanciador_ck_11_1) {
    sub_55 = sub_56;
  } else {
    sub_55 = false;
  };
  if (instanciador_c2_lamp) {
    v_3316 = sub_55;
  } else {
    v_3316 = sub_56;
  };
  if (instanciador_l2) {
    v_3317 = v_3316;
  } else {
    v_3317 = sub_56;
  };
  if (instanciador_c2_lamp) {
    v_3314 = false;
  } else {
    v_3314 = sub_55;
  };
  if (instanciador_l2) {
    v_3315 = false;
  } else {
    v_3315 = v_3314;
  };
  if (instanciador_c2) {
    sub_54 = v_3315;
  } else {
    sub_54 = v_3317;
  };
  if (instanciador_ck_9_1) {
    sub_53 = sub_54;
  } else {
    sub_53 = false;
  };
  if (instanciador_c1_lamp) {
    v_3320 = sub_53;
  } else {
    v_3320 = sub_54;
  };
  if (instanciador_l1) {
    v_3321 = v_3320;
  } else {
    v_3321 = sub_54;
  };
  if (instanciador_c1_lamp) {
    v_3318 = false;
  } else {
    v_3318 = sub_53;
  };
  if (instanciador_l1) {
    v_3319 = false;
  } else {
    v_3319 = v_3318;
  };
  if (instanciador_c1) {
    sub_52 = v_3319;
  } else {
    sub_52 = v_3321;
  };
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_102 = sub_27;
  sub_101 = sub_102;
  sub_100 = sub_101;
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  sub_94 = sub_95;
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  sub_90 = sub_91;
  sub_89 = sub_90;
  sub_88 = sub_89;
  sub_87 = sub_88;
  sub_86 = sub_87;
  sub_85 = sub_86;
  sub_84 = sub_85;
  sub_83 = sub_84;
  sub_82 = sub_83;
  sub_81 = sub_82;
  sub_80 = sub_81;
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_77 = sub_78;
  if (instanciador_neutro_input) {
    v_3322 = sub_77;
  } else {
    v_3322 = sub_9;
  };
  if (instanciador_ck_25_1) {
    sub_117 = sub_20;
  } else {
    sub_117 = false;
  };
  if (instanciador_inpSp) {
    v_3267 = sub_117;
  } else {
    v_3267 = sub_20;
  };
  if (instanciador_c_somP) {
    v_3268 = v_3267;
  } else {
    v_3268 = sub_19;
  };
  if (instanciador_inpSp) {
    v_3265 = false;
  } else {
    v_3265 = sub_117;
  };
  if (instanciador_c_somP) {
    v_3266 = false;
  } else {
    v_3266 = v_3265;
  };
  if (instanciador_csp) {
    sub_116 = v_3266;
  } else {
    sub_116 = v_3268;
  };
  sub_115 = sub_116;
  if (instanciador_ck_19_1) {
    sub_114 = sub_115;
  } else {
    sub_114 = false;
  };
  if (instanciador_lv) {
    v_3271 = false;
  } else {
    v_3271 = sub_114;
  };
  if (instanciador_cv) {
    v_3272 = v_3271;
  } else {
    v_3272 = sub_115;
  };
  if (instanciador_lv) {
    v_3269 = sub_114;
  } else {
    v_3269 = sub_115;
  };
  if (instanciador_cv) {
    v_3270 = false;
  } else {
    v_3270 = v_3269;
  };
  if (instanciador_c_vent) {
    sub_113 = v_3270;
  } else {
    sub_113 = v_3272;
  };
  if (instanciador_ck_17_1) {
    sub_112 = sub_113;
  } else {
    sub_112 = false;
  };
  if (instanciador_lx) {
    v_3275 = sub_112;
  } else {
    v_3275 = sub_113;
  };
  if (instanciador_c_lampExt) {
    v_3276 = v_3275;
  } else {
    v_3276 = sub_113;
  };
  if (instanciador_lx) {
    v_3273 = false;
  } else {
    v_3273 = sub_112;
  };
  if (instanciador_c_lampExt) {
    v_3274 = false;
  } else {
    v_3274 = v_3273;
  };
  if (instanciador_cx) {
    sub_111 = v_3274;
  } else {
    sub_111 = v_3276;
  };
  if (instanciador_ck_15_1) {
    sub_110 = sub_111;
  } else {
    sub_110 = false;
  };
  if (instanciador_l4) {
    v_3279 = sub_110;
  } else {
    v_3279 = sub_111;
  };
  if (instanciador_c4_lamp) {
    v_3280 = v_3279;
  } else {
    v_3280 = sub_111;
  };
  if (instanciador_l4) {
    v_3277 = false;
  } else {
    v_3277 = sub_110;
  };
  if (instanciador_c4_lamp) {
    v_3278 = false;
  } else {
    v_3278 = v_3277;
  };
  if (instanciador_c4) {
    sub_109 = v_3278;
  } else {
    sub_109 = v_3280;
  };
  if (instanciador_ck_13_1) {
    sub_108 = sub_109;
  } else {
    sub_108 = false;
  };
  if (instanciador_c3_lamp) {
    v_3283 = sub_108;
  } else {
    v_3283 = sub_109;
  };
  if (instanciador_l3) {
    v_3284 = v_3283;
  } else {
    v_3284 = sub_109;
  };
  if (instanciador_c3_lamp) {
    v_3281 = false;
  } else {
    v_3281 = sub_108;
  };
  if (instanciador_l3) {
    v_3282 = false;
  } else {
    v_3282 = v_3281;
  };
  if (instanciador_c3) {
    sub_107 = v_3282;
  } else {
    sub_107 = v_3284;
  };
  if (instanciador_ck_11_1) {
    sub_106 = sub_107;
  } else {
    sub_106 = false;
  };
  if (instanciador_c2_lamp) {
    v_3287 = sub_106;
  } else {
    v_3287 = sub_107;
  };
  if (instanciador_l2) {
    v_3288 = v_3287;
  } else {
    v_3288 = sub_107;
  };
  if (instanciador_c2_lamp) {
    v_3285 = false;
  } else {
    v_3285 = sub_106;
  };
  if (instanciador_l2) {
    v_3286 = false;
  } else {
    v_3286 = v_3285;
  };
  if (instanciador_c2) {
    sub_105 = v_3286;
  } else {
    sub_105 = v_3288;
  };
  if (instanciador_ck_9_1) {
    sub_104 = sub_105;
  } else {
    sub_104 = false;
  };
  if (instanciador_c1_lamp) {
    v_3291 = sub_104;
  } else {
    v_3291 = sub_105;
  };
  if (instanciador_l1) {
    v_3292 = v_3291;
  } else {
    v_3292 = sub_105;
  };
  if (instanciador_c1_lamp) {
    v_3289 = false;
  } else {
    v_3289 = sub_104;
  };
  if (instanciador_l1) {
    v_3290 = false;
  } else {
    v_3290 = v_3289;
  };
  if (instanciador_c1) {
    sub_103 = v_3290;
  } else {
    sub_103 = v_3292;
  };
  if (instanciador_neutro_input) {
    sub_76 = sub_77;
  } else {
    sub_76 = sub_103;
  };
  if (instanciador_seguranca_input) {
    v_3323 = sub_76;
  } else {
    v_3323 = v_3322;
  };
  if (instanciador_domingol_input) {
    v_3324 = sub_50;
  } else {
    v_3324 = v_3323;
  };
  if (instanciador_domingo_input) {
    sub_49 = sub_35;
  } else {
    sub_49 = v_3324;
  };
  if (instanciador_v_341) {
    v_3325 = sub_34;
  } else {
    v_3325 = sub_49;
  };
  if (instanciador_sexta_input) {
    sub_48 = sub_34;
  } else {
    sub_48 = v_3325;
  };
  if (instanciador_v_339) {
    v_3375 = sub_48;
  } else {
    v_3375 = sub_3;
  };
  if (instanciador_neutro_input) {
    sub_122 = sub_77;
  } else {
    sub_122 = sub_38;
  };
  if (instanciador_seguranca_input) {
    v_3264 = sub_76;
  } else {
    v_3264 = sub_122;
  };
  if (instanciador_domingol_input) {
    sub_121 = sub_50;
  } else {
    sub_121 = v_3264;
  };
  if (instanciador_domingo_input) {
    sub_120 = sub_35;
  } else {
    sub_120 = sub_121;
  };
  if (instanciador_v_341) {
    sub_119 = sub_34;
  } else {
    sub_119 = sub_120;
  };
  sub_118 = sub_119;
  if (instanciador_v_339) {
    v_3376 = sub_48;
  } else {
    v_3376 = sub_118;
  };
  if (instanciador_ebd_input) {
    sub_2 = v_3375;
  } else {
    sub_2 = v_3376;
  };
  if (instanciador_seguranca_input) {
    v_3260 = sub_103;
  } else {
    v_3260 = sub_77;
  };
  if (instanciador_domingol_input) {
    v_3261 = sub_50;
    v_3259 = sub_50;
  } else {
    v_3261 = v_3260;
    v_3259 = sub_36;
  };
  if (instanciador_domingo_input) {
    v_3262 = v_3259;
  } else {
    v_3262 = v_3261;
  };
  if (instanciador_domingol_input) {
    v_3258 = sub_50;
    v_3257 = sub_50;
  } else {
    v_3258 = sub_76;
    v_3257 = sub_122;
  };
  if (instanciador_domingo_input) {
    sub_124 = v_3257;
  } else {
    sub_124 = v_3258;
  };
  if (instanciador_v_341) {
    v_3263 = v_3262;
  } else {
    v_3263 = sub_124;
  };
  if (instanciador_sexta_input) {
    sub_123 = sub_34;
  } else {
    sub_123 = v_3263;
  };
  if (instanciador_neutro_input) {
    v_3256 = sub_77;
  } else {
    v_3256 = sub_52;
  };
  if (instanciador_seguranca_input) {
    sub_126 = sub_76;
  } else {
    sub_126 = v_3256;
  };
  if (instanciador_domingo_input) {
    sub_125 = sub_35;
  } else {
    sub_125 = sub_126;
  };
  if (instanciador_v_341) {
    v_3377 = sub_121;
  } else {
    v_3377 = sub_125;
  };
  if (instanciador_sexta_input) {
    v_3378 = sub_34;
  } else {
    v_3378 = v_3377;
  };
  if (instanciador_v_339) {
    v_3379 = v_3378;
  } else {
    v_3379 = sub_123;
  };
  if (instanciador_ebd_input) {
    v_3380 = sub_5;
  } else {
    v_3380 = v_3379;
  };
  if (instanciador_v_340) {
    sub_1 = v_3380;
  } else {
    sub_1 = sub_2;
  };
  if (instanciador_c_somL) {
    v_3225 = sub_26;
  } else {
    v_3225 = sub_70;
  };
  if (instanciador_ck_27_1) {
    sub_149 = v_3225;
  } else {
    sub_149 = sub_25;
  };
  sub_148 = sub_149;
  sub_147 = sub_148;
  sub_146 = sub_147;
  sub_145 = sub_146;
  sub_144 = sub_145;
  if (instanciador_ck_25_1) {
    sub_150 = false;
  } else {
    sub_150 = sub_145;
  };
  if (instanciador_inpSp) {
    v_3228 = sub_150;
  } else {
    v_3228 = false;
  };
  if (instanciador_c_somP) {
    v_3229 = v_3228;
  } else {
    v_3229 = false;
  };
  if (instanciador_inpSp) {
    v_3226 = sub_145;
  } else {
    v_3226 = sub_150;
  };
  if (instanciador_c_somP) {
    v_3227 = sub_144;
  } else {
    v_3227 = v_3226;
  };
  if (instanciador_csp) {
    sub_143 = v_3227;
  } else {
    sub_143 = v_3229;
  };
  sub_142 = sub_143;
  if (instanciador_ck_19_1) {
    sub_151 = false;
  } else {
    sub_151 = sub_142;
  };
  if (instanciador_lv) {
    v_3232 = sub_142;
  } else {
    v_3232 = sub_151;
  };
  if (instanciador_cv) {
    v_3233 = v_3232;
  } else {
    v_3233 = false;
  };
  if (instanciador_lv) {
    v_3230 = sub_151;
  } else {
    v_3230 = false;
  };
  if (instanciador_cv) {
    v_3231 = sub_142;
  } else {
    v_3231 = v_3230;
  };
  if (instanciador_c_vent) {
    sub_141 = v_3231;
  } else {
    sub_141 = v_3233;
  };
  if (instanciador_ck_17_1) {
    sub_140 = sub_141;
  } else {
    sub_140 = false;
  };
  if (instanciador_lx) {
    v_3236 = sub_140;
    v_3234 = false;
  } else {
    v_3236 = sub_141;
    v_3234 = sub_140;
  };
  if (instanciador_c_lampExt) {
    v_3235 = false;
  } else {
    v_3235 = v_3234;
  };
  sub_152 = sub_141;
  if (instanciador_c_lampExt) {
    v_3237 = v_3236;
  } else {
    v_3237 = sub_152;
  };
  if (instanciador_cx) {
    sub_139 = v_3235;
  } else {
    sub_139 = v_3237;
  };
  if (instanciador_ck_15_1) {
    sub_138 = sub_139;
  } else {
    sub_138 = false;
  };
  if (instanciador_l4) {
    v_3240 = sub_138;
  } else {
    v_3240 = sub_139;
  };
  if (instanciador_c4_lamp) {
    v_3241 = v_3240;
  } else {
    v_3241 = sub_139;
  };
  if (instanciador_l4) {
    v_3238 = false;
  } else {
    v_3238 = sub_138;
  };
  if (instanciador_c4_lamp) {
    v_3239 = false;
  } else {
    v_3239 = v_3238;
  };
  if (instanciador_c4) {
    sub_137 = v_3239;
  } else {
    sub_137 = v_3241;
  };
  if (instanciador_ck_13_1) {
    sub_153 = false;
  } else {
    sub_153 = sub_137;
  };
  if (instanciador_c3_lamp) {
    v_3244 = sub_153;
  } else {
    v_3244 = false;
  };
  if (instanciador_l3) {
    v_3245 = v_3244;
  } else {
    v_3245 = false;
  };
  if (instanciador_c3_lamp) {
    v_3242 = sub_137;
  } else {
    v_3242 = sub_153;
  };
  if (instanciador_l3) {
    v_3243 = sub_137;
  } else {
    v_3243 = v_3242;
  };
  if (instanciador_c3) {
    sub_136 = v_3243;
  } else {
    sub_136 = v_3245;
  };
  if (instanciador_ck_11_1) {
    sub_154 = false;
  } else {
    sub_154 = sub_136;
  };
  if (instanciador_c2_lamp) {
    v_3248 = sub_154;
  } else {
    v_3248 = false;
  };
  if (instanciador_l2) {
    v_3249 = v_3248;
  } else {
    v_3249 = false;
  };
  if (instanciador_c2_lamp) {
    v_3246 = sub_136;
  } else {
    v_3246 = sub_154;
  };
  if (instanciador_l2) {
    v_3247 = sub_136;
  } else {
    v_3247 = v_3246;
  };
  if (instanciador_c2) {
    sub_135 = v_3247;
  } else {
    sub_135 = v_3249;
  };
  if (instanciador_ck_9_1) {
    sub_155 = false;
  } else {
    sub_155 = sub_135;
  };
  if (instanciador_c1_lamp) {
    v_3252 = sub_155;
  } else {
    v_3252 = false;
  };
  if (instanciador_l1) {
    v_3253 = v_3252;
  } else {
    v_3253 = false;
  };
  if (instanciador_c1_lamp) {
    v_3250 = sub_135;
  } else {
    v_3250 = sub_155;
  };
  if (instanciador_l1) {
    v_3251 = sub_135;
  } else {
    v_3251 = v_3250;
  };
  if (instanciador_c1) {
    sub_134 = v_3251;
  } else {
    sub_134 = v_3253;
  };
  sub_133 = sub_134;
  sub_132 = sub_133;
  sub_131 = sub_132;
  sub_130 = sub_131;
  if (instanciador_ck_17_1) {
    sub_165 = false;
  } else {
    sub_165 = sub_141;
  };
  if (instanciador_lx) {
    v_3207 = sub_165;
  } else {
    v_3207 = false;
  };
  if (instanciador_c_lampExt) {
    v_3208 = v_3207;
  } else {
    v_3208 = false;
  };
  if (instanciador_lx) {
    v_3205 = sub_141;
  } else {
    v_3205 = sub_165;
  };
  if (instanciador_c_lampExt) {
    v_3206 = sub_152;
  } else {
    v_3206 = v_3205;
  };
  if (instanciador_cx) {
    sub_164 = v_3206;
  } else {
    sub_164 = v_3208;
  };
  if (instanciador_ck_15_1) {
    sub_166 = false;
  } else {
    sub_166 = sub_164;
  };
  if (instanciador_l4) {
    v_3211 = sub_166;
  } else {
    v_3211 = false;
  };
  if (instanciador_c4_lamp) {
    v_3212 = v_3211;
  } else {
    v_3212 = false;
  };
  if (instanciador_l4) {
    v_3209 = sub_164;
  } else {
    v_3209 = sub_166;
  };
  if (instanciador_c4_lamp) {
    v_3210 = sub_164;
  } else {
    v_3210 = v_3209;
  };
  if (instanciador_c4) {
    sub_163 = v_3210;
  } else {
    sub_163 = v_3212;
  };
  if (instanciador_ck_13_1) {
    sub_167 = false;
  } else {
    sub_167 = sub_163;
  };
  if (instanciador_c3_lamp) {
    v_3215 = sub_167;
  } else {
    v_3215 = false;
  };
  if (instanciador_l3) {
    v_3216 = v_3215;
  } else {
    v_3216 = false;
  };
  if (instanciador_c3_lamp) {
    v_3213 = sub_163;
  } else {
    v_3213 = sub_167;
  };
  if (instanciador_l3) {
    v_3214 = sub_163;
  } else {
    v_3214 = v_3213;
  };
  if (instanciador_c3) {
    sub_162 = v_3214;
  } else {
    sub_162 = v_3216;
  };
  if (instanciador_ck_11_1) {
    sub_168 = false;
  } else {
    sub_168 = sub_162;
  };
  if (instanciador_c2_lamp) {
    v_3219 = sub_168;
  } else {
    v_3219 = false;
  };
  if (instanciador_l2) {
    v_3220 = v_3219;
  } else {
    v_3220 = false;
  };
  if (instanciador_c2_lamp) {
    v_3217 = sub_162;
  } else {
    v_3217 = sub_168;
  };
  if (instanciador_l2) {
    v_3218 = sub_162;
  } else {
    v_3218 = v_3217;
  };
  if (instanciador_c2) {
    sub_161 = v_3218;
  } else {
    sub_161 = v_3220;
  };
  if (instanciador_ck_9_1) {
    sub_169 = false;
  } else {
    sub_169 = sub_161;
  };
  if (instanciador_c1_lamp) {
    v_3223 = sub_169;
  } else {
    v_3223 = false;
  };
  if (instanciador_l1) {
    v_3224 = v_3223;
  } else {
    v_3224 = false;
  };
  if (instanciador_c1_lamp) {
    v_3221 = sub_161;
  } else {
    v_3221 = sub_169;
  };
  if (instanciador_l1) {
    v_3222 = sub_161;
  } else {
    v_3222 = v_3221;
  };
  if (instanciador_c1) {
    sub_160 = v_3222;
  } else {
    sub_160 = v_3224;
  };
  sub_159 = sub_160;
  sub_158 = sub_159;
  sub_157 = sub_158;
  sub_156 = sub_157;
  if (instanciador_v_341) {
    sub_129 = sub_156;
  } else {
    sub_129 = sub_130;
  };
  sub_128 = sub_129;
  sub_191 = sub_71;
  if (instanciador_ck_27_1) {
    sub_190 = sub_72;
  } else {
    sub_190 = sub_191;
  };
  sub_189 = sub_190;
  sub_188 = sub_189;
  sub_187 = sub_188;
  sub_186 = sub_187;
  if (instanciador_ck_25_1) {
    sub_185 = sub_186;
  } else {
    sub_185 = false;
  };
  if (instanciador_inpSp) {
    v_3175 = sub_185;
  } else {
    v_3175 = sub_186;
  };
  if (instanciador_c_somP) {
    v_3176 = v_3175;
  } else {
    v_3176 = sub_186;
  };
  if (instanciador_inpSp) {
    v_3173 = false;
  } else {
    v_3173 = sub_185;
  };
  if (instanciador_c_somP) {
    v_3174 = false;
  } else {
    v_3174 = v_3173;
  };
  if (instanciador_csp) {
    sub_184 = v_3174;
  } else {
    sub_184 = v_3176;
  };
  sub_183 = sub_184;
  if (instanciador_ck_19_1) {
    sub_192 = false;
  } else {
    sub_192 = sub_183;
  };
  if (instanciador_lv) {
    v_3179 = sub_183;
  } else {
    v_3179 = sub_192;
  };
  if (instanciador_cv) {
    v_3180 = v_3179;
  } else {
    v_3180 = false;
  };
  if (instanciador_lv) {
    v_3177 = sub_192;
  } else {
    v_3177 = false;
  };
  if (instanciador_cv) {
    v_3178 = sub_183;
  } else {
    v_3178 = v_3177;
  };
  if (instanciador_c_vent) {
    sub_182 = v_3178;
  } else {
    sub_182 = v_3180;
  };
  if (instanciador_ck_17_1) {
    sub_193 = false;
  } else {
    sub_193 = sub_182;
  };
  if (instanciador_lx) {
    v_3183 = sub_193;
  } else {
    v_3183 = false;
  };
  if (instanciador_c_lampExt) {
    v_3184 = v_3183;
  } else {
    v_3184 = false;
  };
  if (instanciador_lx) {
    v_3181 = sub_182;
  } else {
    v_3181 = sub_193;
  };
  if (instanciador_c_lampExt) {
    v_3182 = sub_182;
  } else {
    v_3182 = v_3181;
  };
  if (instanciador_cx) {
    sub_181 = v_3182;
  } else {
    sub_181 = v_3184;
  };
  if (instanciador_ck_15_1) {
    sub_180 = sub_181;
  } else {
    sub_180 = false;
  };
  if (instanciador_l4) {
    v_3187 = sub_180;
  } else {
    v_3187 = sub_181;
  };
  if (instanciador_c4_lamp) {
    v_3188 = v_3187;
  } else {
    v_3188 = sub_181;
  };
  if (instanciador_l4) {
    v_3185 = false;
  } else {
    v_3185 = sub_180;
  };
  if (instanciador_c4_lamp) {
    v_3186 = false;
  } else {
    v_3186 = v_3185;
  };
  if (instanciador_c4) {
    sub_179 = v_3186;
  } else {
    sub_179 = v_3188;
  };
  if (instanciador_ck_13_1) {
    sub_194 = false;
  } else {
    sub_194 = sub_179;
  };
  if (instanciador_c3_lamp) {
    v_3191 = sub_194;
  } else {
    v_3191 = false;
  };
  if (instanciador_l3) {
    v_3192 = v_3191;
  } else {
    v_3192 = false;
  };
  if (instanciador_c3_lamp) {
    v_3189 = sub_179;
  } else {
    v_3189 = sub_194;
  };
  if (instanciador_l3) {
    v_3190 = sub_179;
  } else {
    v_3190 = v_3189;
  };
  if (instanciador_c3) {
    sub_178 = v_3190;
  } else {
    sub_178 = v_3192;
  };
  if (instanciador_ck_11_1) {
    sub_177 = sub_178;
  } else {
    sub_177 = false;
  };
  if (instanciador_c2_lamp) {
    v_3195 = sub_177;
  } else {
    v_3195 = sub_178;
  };
  if (instanciador_l2) {
    v_3196 = v_3195;
  } else {
    v_3196 = sub_178;
  };
  if (instanciador_c2_lamp) {
    v_3193 = false;
  } else {
    v_3193 = sub_177;
  };
  if (instanciador_l2) {
    v_3194 = false;
  } else {
    v_3194 = v_3193;
  };
  if (instanciador_c2) {
    sub_176 = v_3194;
  } else {
    sub_176 = v_3196;
  };
  if (instanciador_ck_9_1) {
    sub_175 = sub_176;
  } else {
    sub_175 = false;
  };
  if (instanciador_c1_lamp) {
    v_3199 = sub_175;
  } else {
    v_3199 = sub_176;
  };
  if (instanciador_l1) {
    v_3200 = v_3199;
  } else {
    v_3200 = sub_176;
  };
  if (instanciador_c1_lamp) {
    v_3197 = false;
  } else {
    v_3197 = sub_175;
  };
  if (instanciador_l1) {
    v_3198 = false;
  } else {
    v_3198 = v_3197;
  };
  if (instanciador_c1) {
    sub_174 = v_3198;
  } else {
    sub_174 = v_3200;
  };
  sub_173 = sub_174;
  sub_172 = sub_173;
  sub_221 = sub_191;
  sub_220 = sub_221;
  sub_219 = sub_220;
  sub_218 = sub_219;
  sub_217 = sub_218;
  sub_216 = sub_217;
  sub_215 = sub_216;
  sub_214 = sub_215;
  sub_213 = sub_214;
  sub_212 = sub_213;
  sub_211 = sub_212;
  sub_210 = sub_211;
  sub_209 = sub_210;
  sub_208 = sub_209;
  sub_207 = sub_208;
  sub_206 = sub_207;
  sub_205 = sub_206;
  sub_204 = sub_205;
  sub_203 = sub_204;
  sub_202 = sub_203;
  sub_201 = sub_202;
  sub_200 = sub_201;
  sub_199 = sub_200;
  sub_198 = sub_199;
  sub_197 = sub_198;
  sub_196 = sub_197;
  if (instanciador_neutro_input) {
    v_3201 = sub_196;
  } else {
    v_3201 = sub_134;
  };
  if (instanciador_ck_25_1) {
    sub_236 = sub_145;
  } else {
    sub_236 = false;
  };
  if (instanciador_inpSp) {
    v_3147 = sub_236;
  } else {
    v_3147 = sub_145;
  };
  if (instanciador_c_somP) {
    v_3148 = v_3147;
  } else {
    v_3148 = sub_144;
  };
  if (instanciador_inpSp) {
    v_3145 = false;
  } else {
    v_3145 = sub_236;
  };
  if (instanciador_c_somP) {
    v_3146 = false;
  } else {
    v_3146 = v_3145;
  };
  if (instanciador_csp) {
    sub_235 = v_3146;
  } else {
    sub_235 = v_3148;
  };
  sub_234 = sub_235;
  if (instanciador_ck_19_1) {
    sub_233 = sub_234;
  } else {
    sub_233 = false;
  };
  if (instanciador_lv) {
    v_3151 = false;
  } else {
    v_3151 = sub_233;
  };
  if (instanciador_cv) {
    v_3152 = v_3151;
  } else {
    v_3152 = sub_234;
  };
  if (instanciador_lv) {
    v_3149 = sub_233;
  } else {
    v_3149 = sub_234;
  };
  if (instanciador_cv) {
    v_3150 = false;
  } else {
    v_3150 = v_3149;
  };
  if (instanciador_c_vent) {
    sub_232 = v_3150;
  } else {
    sub_232 = v_3152;
  };
  if (instanciador_ck_17_1) {
    sub_231 = sub_232;
  } else {
    sub_231 = false;
  };
  if (instanciador_lx) {
    v_3155 = sub_231;
  } else {
    v_3155 = sub_232;
  };
  if (instanciador_c_lampExt) {
    v_3156 = v_3155;
  } else {
    v_3156 = sub_232;
  };
  if (instanciador_lx) {
    v_3153 = false;
  } else {
    v_3153 = sub_231;
  };
  if (instanciador_c_lampExt) {
    v_3154 = false;
  } else {
    v_3154 = v_3153;
  };
  if (instanciador_cx) {
    sub_230 = v_3154;
  } else {
    sub_230 = v_3156;
  };
  if (instanciador_ck_15_1) {
    sub_229 = sub_230;
  } else {
    sub_229 = false;
  };
  if (instanciador_l4) {
    v_3159 = sub_229;
  } else {
    v_3159 = sub_230;
  };
  if (instanciador_c4_lamp) {
    v_3160 = v_3159;
  } else {
    v_3160 = sub_230;
  };
  if (instanciador_l4) {
    v_3157 = false;
  } else {
    v_3157 = sub_229;
  };
  if (instanciador_c4_lamp) {
    v_3158 = false;
  } else {
    v_3158 = v_3157;
  };
  if (instanciador_c4) {
    sub_228 = v_3158;
  } else {
    sub_228 = v_3160;
  };
  if (instanciador_ck_13_1) {
    sub_227 = sub_228;
  } else {
    sub_227 = false;
  };
  if (instanciador_c3_lamp) {
    v_3163 = sub_227;
  } else {
    v_3163 = sub_228;
  };
  if (instanciador_l3) {
    v_3164 = v_3163;
  } else {
    v_3164 = sub_228;
  };
  if (instanciador_c3_lamp) {
    v_3161 = false;
  } else {
    v_3161 = sub_227;
  };
  if (instanciador_l3) {
    v_3162 = false;
  } else {
    v_3162 = v_3161;
  };
  if (instanciador_c3) {
    sub_226 = v_3162;
  } else {
    sub_226 = v_3164;
  };
  if (instanciador_ck_11_1) {
    sub_225 = sub_226;
  } else {
    sub_225 = false;
  };
  if (instanciador_c2_lamp) {
    v_3167 = sub_225;
  } else {
    v_3167 = sub_226;
  };
  if (instanciador_l2) {
    v_3168 = v_3167;
  } else {
    v_3168 = sub_226;
  };
  if (instanciador_c2_lamp) {
    v_3165 = false;
  } else {
    v_3165 = sub_225;
  };
  if (instanciador_l2) {
    v_3166 = false;
  } else {
    v_3166 = v_3165;
  };
  if (instanciador_c2) {
    sub_224 = v_3166;
  } else {
    sub_224 = v_3168;
  };
  if (instanciador_ck_9_1) {
    sub_223 = sub_224;
  } else {
    sub_223 = false;
  };
  if (instanciador_c1_lamp) {
    v_3171 = sub_223;
  } else {
    v_3171 = sub_224;
  };
  if (instanciador_l1) {
    v_3172 = v_3171;
  } else {
    v_3172 = sub_224;
  };
  if (instanciador_c1_lamp) {
    v_3169 = false;
  } else {
    v_3169 = sub_223;
  };
  if (instanciador_l1) {
    v_3170 = false;
  } else {
    v_3170 = v_3169;
  };
  if (instanciador_c1) {
    sub_222 = v_3170;
  } else {
    sub_222 = v_3172;
  };
  if (instanciador_neutro_input) {
    sub_195 = sub_196;
  } else {
    sub_195 = sub_222;
  };
  if (instanciador_seguranca_input) {
    v_3202 = sub_195;
  } else {
    v_3202 = v_3201;
  };
  if (instanciador_domingol_input) {
    v_3203 = sub_172;
  } else {
    v_3203 = v_3202;
  };
  if (instanciador_domingo_input) {
    sub_171 = sub_157;
  } else {
    sub_171 = v_3203;
  };
  if (instanciador_v_341) {
    v_3204 = sub_156;
  } else {
    v_3204 = sub_171;
  };
  if (instanciador_sexta_input) {
    sub_170 = sub_156;
  } else {
    sub_170 = v_3204;
  };
  if (instanciador_v_339) {
    v_3254 = sub_170;
  } else {
    v_3254 = sub_128;
  };
  if (instanciador_neutro_input) {
    sub_241 = sub_196;
  } else {
    sub_241 = sub_160;
  };
  if (instanciador_seguranca_input) {
    v_3144 = sub_195;
  } else {
    v_3144 = sub_241;
  };
  if (instanciador_domingol_input) {
    sub_240 = sub_172;
  } else {
    sub_240 = v_3144;
  };
  if (instanciador_domingo_input) {
    sub_239 = sub_157;
  } else {
    sub_239 = sub_240;
  };
  if (instanciador_v_341) {
    sub_238 = sub_156;
  } else {
    sub_238 = sub_239;
  };
  sub_237 = sub_238;
  if (instanciador_v_339) {
    v_3255 = sub_170;
  } else {
    v_3255 = sub_237;
  };
  if (instanciador_ebd_input) {
    sub_127 = v_3254;
  } else {
    sub_127 = v_3255;
  };
  if (instanciador_seguranca_input) {
    v_3140 = sub_222;
  } else {
    v_3140 = sub_196;
  };
  if (instanciador_domingol_input) {
    v_3141 = sub_172;
    v_3139 = sub_172;
  } else {
    v_3141 = v_3140;
    v_3139 = sub_158;
  };
  if (instanciador_domingo_input) {
    v_3142 = v_3139;
  } else {
    v_3142 = v_3141;
  };
  if (instanciador_domingol_input) {
    v_3138 = sub_172;
    v_3137 = sub_172;
  } else {
    v_3138 = sub_195;
    v_3137 = sub_241;
  };
  if (instanciador_domingo_input) {
    sub_243 = v_3137;
  } else {
    sub_243 = v_3138;
  };
  if (instanciador_v_341) {
    v_3143 = v_3142;
  } else {
    v_3143 = sub_243;
  };
  if (instanciador_sexta_input) {
    sub_242 = sub_156;
  } else {
    sub_242 = v_3143;
  };
  if (instanciador_neutro_input) {
    v = sub_196;
  } else {
    v = sub_174;
  };
  if (instanciador_seguranca_input) {
    sub_245 = sub_195;
  } else {
    sub_245 = v;
  };
  if (instanciador_domingo_input) {
    sub_244 = sub_157;
  } else {
    sub_244 = sub_245;
  };
  if (instanciador_v_341) {
    v_3381 = sub_240;
  } else {
    v_3381 = sub_244;
  };
  if (instanciador_sexta_input) {
    v_3382 = sub_156;
  } else {
    v_3382 = v_3381;
  };
  if (instanciador_v_339) {
    v_3383 = v_3382;
  } else {
    v_3383 = sub_242;
  };
  if (instanciador_ebd_input) {
    v_3384 = sub_130;
  } else {
    v_3384 = v_3383;
  };
  if (instanciador_v_340) {
    v_3385 = v_3384;
  } else {
    v_3385 = sub_127;
  };
  if (p_instanciador_csl) {
    sub_0 = v_3385;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_csl = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c_somL_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_csp, int instanciador_c_somP,
  int instanciador_c_vent, int instanciador_cv, int instanciador_cx,
  int instanciador_c4, int instanciador_c3, int instanciador_c2,
  int instanciador_c1, int instanciador_c_lampExt, int instanciador_c4_lamp,
  int instanciador_c3_lamp, int instanciador_c2_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c_somL_out* _out) {
  
  int v_3631;
  int v_3630;
  int v_3629;
  int v_3628;
  int v_3627;
  int v_3626;
  int v_3625;
  int v_3624;
  int v_3623;
  int v_3622;
  int v_3621;
  int v_3620;
  int v_3619;
  int v_3618;
  int v_3617;
  int v_3616;
  int v_3615;
  int v_3614;
  int v_3613;
  int v_3612;
  int v_3611;
  int v_3610;
  int v_3609;
  int v_3608;
  int v_3607;
  int v_3606;
  int v_3605;
  int v_3604;
  int v_3603;
  int v_3602;
  int v_3601;
  int v_3600;
  int v_3599;
  int v_3598;
  int v_3597;
  int v_3596;
  int v_3595;
  int v_3594;
  int v_3593;
  int v_3592;
  int v_3591;
  int v_3590;
  int v_3589;
  int v_3588;
  int v_3587;
  int v_3586;
  int v_3585;
  int v_3584;
  int v_3583;
  int v_3582;
  int v_3581;
  int v_3580;
  int v_3579;
  int v_3578;
  int v_3577;
  int v_3576;
  int v_3575;
  int v_3574;
  int v_3573;
  int v_3572;
  int v_3571;
  int v_3570;
  int v_3569;
  int v_3568;
  int v_3567;
  int v_3566;
  int v_3565;
  int v_3564;
  int v_3563;
  int v_3562;
  int v_3561;
  int v_3560;
  int v_3559;
  int v_3558;
  int v_3557;
  int v_3556;
  int v_3555;
  int v_3554;
  int v_3553;
  int v_3552;
  int v_3551;
  int v_3550;
  int v_3549;
  int v_3548;
  int v_3547;
  int v_3546;
  int v_3545;
  int v_3544;
  int v_3543;
  int v_3542;
  int v_3541;
  int v_3540;
  int v_3539;
  int v_3538;
  int v_3537;
  int v_3536;
  int v_3535;
  int v_3534;
  int v_3533;
  int v_3532;
  int v_3531;
  int v_3530;
  int v_3529;
  int v_3528;
  int v_3527;
  int v_3526;
  int v_3525;
  int v_3524;
  int v_3523;
  int v_3522;
  int v_3521;
  int v_3520;
  int v_3519;
  int v_3518;
  int v_3517;
  int v_3516;
  int v_3515;
  int v_3514;
  int v_3513;
  int v_3512;
  int v_3511;
  int v_3510;
  int v_3509;
  int v_3508;
  int v_3507;
  int v_3506;
  int v_3505;
  int v_3504;
  int v_3503;
  int v_3502;
  int v_3501;
  int v_3500;
  int v_3499;
  int v_3498;
  int v_3497;
  int v_3496;
  int v_3495;
  int v_3494;
  int v_3493;
  int v_3492;
  int v_3491;
  int v_3490;
  int v_3489;
  int v_3488;
  int v_3487;
  int v_3486;
  int v_3485;
  int v_3484;
  int v_3483;
  int v_3482;
  int v_3481;
  int v_3480;
  int v_3479;
  int v_3478;
  int v_3477;
  int v_3476;
  int v_3475;
  int v_3474;
  int v_3473;
  int v_3472;
  int v_3471;
  int v_3470;
  int v_3469;
  int v_3468;
  int v_3467;
  int v_3466;
  int v_3465;
  int v_3464;
  int v_3463;
  int v_3462;
  int v_3461;
  int v_3460;
  int v_3459;
  int v_3458;
  int v_3457;
  int v_3456;
  int v_3455;
  int v_3454;
  int v_3453;
  int v_3452;
  int v_3451;
  int v_3450;
  int v_3449;
  int v_3448;
  int v_3447;
  int v_3446;
  int v_3445;
  int v_3444;
  int v_3443;
  int v_3442;
  int v_3441;
  int v_3440;
  int v_3439;
  int v_3438;
  int v_3437;
  int v_3436;
  int v_3435;
  int v_3434;
  int v_3433;
  int v_3432;
  int v_3431;
  int v_3430;
  int v_3429;
  int v_3428;
  int v_3427;
  int v_3426;
  int v_3425;
  int v_3424;
  int v_3423;
  int v_3422;
  int v_3421;
  int v_3420;
  int v_3419;
  int v_3418;
  int v_3417;
  int v_3416;
  int v_3415;
  int v_3414;
  int v_3413;
  int v_3412;
  int v_3411;
  int v_3410;
  int v_3409;
  int v_3408;
  int v_3407;
  int v_3406;
  int v_3405;
  int v_3404;
  int v_3403;
  int v_3402;
  int v_3401;
  int v_3400;
  int v_3399;
  int v_3398;
  int v_3397;
  int v_3396;
  int v_3395;
  int v_3394;
  int v_3393;
  int v_3392;
  int v_3391;
  int v_3390;
  int v_3389;
  int v_3388;
  int v_3387;
  int v_3386;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  int sub_211;
  int sub_212;
  int sub_213;
  int sub_214;
  int sub_215;
  int sub_216;
  int sub_217;
  int sub_218;
  int sub_219;
  int sub_220;
  int sub_221;
  int sub_222;
  int sub_223;
  int sub_224;
  int sub_225;
  int sub_226;
  int sub_227;
  int sub_228;
  int sub_229;
  sub_24 = false;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  if (instanciador_ck_25_1) {
    sub_25 = false;
  } else {
    sub_25 = sub_20;
  };
  if (instanciador_inpSp) {
    v_3595 = sub_25;
  } else {
    v_3595 = false;
  };
  if (instanciador_c_somP) {
    v_3596 = v_3595;
  } else {
    v_3596 = false;
  };
  if (instanciador_inpSp) {
    v_3593 = sub_20;
  } else {
    v_3593 = sub_25;
  };
  if (instanciador_c_somP) {
    v_3594 = sub_19;
  } else {
    v_3594 = v_3593;
  };
  if (instanciador_csp) {
    sub_18 = v_3594;
  } else {
    sub_18 = v_3596;
  };
  sub_17 = sub_18;
  if (instanciador_ck_19_1) {
    sub_26 = false;
  } else {
    sub_26 = sub_17;
  };
  if (instanciador_lv) {
    v_3599 = sub_17;
  } else {
    v_3599 = sub_26;
  };
  if (instanciador_cv) {
    v_3600 = v_3599;
  } else {
    v_3600 = false;
  };
  if (instanciador_lv) {
    v_3597 = sub_26;
  } else {
    v_3597 = false;
  };
  if (instanciador_cv) {
    v_3598 = sub_17;
  } else {
    v_3598 = v_3597;
  };
  if (instanciador_c_vent) {
    sub_16 = v_3598;
  } else {
    sub_16 = v_3600;
  };
  if (instanciador_ck_17_1) {
    sub_15 = sub_16;
  } else {
    sub_15 = false;
  };
  if (instanciador_lx) {
    v_3603 = sub_15;
    v_3601 = false;
  } else {
    v_3603 = sub_16;
    v_3601 = sub_15;
  };
  if (instanciador_c_lampExt) {
    v_3602 = false;
  } else {
    v_3602 = v_3601;
  };
  sub_27 = sub_16;
  if (instanciador_c_lampExt) {
    v_3604 = v_3603;
  } else {
    v_3604 = sub_27;
  };
  if (instanciador_cx) {
    sub_14 = v_3602;
  } else {
    sub_14 = v_3604;
  };
  if (instanciador_ck_15_1) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (instanciador_l4) {
    v_3607 = sub_13;
  } else {
    v_3607 = sub_14;
  };
  if (instanciador_c4_lamp) {
    v_3608 = v_3607;
  } else {
    v_3608 = sub_14;
  };
  if (instanciador_l4) {
    v_3605 = false;
  } else {
    v_3605 = sub_13;
  };
  if (instanciador_c4_lamp) {
    v_3606 = false;
  } else {
    v_3606 = v_3605;
  };
  if (instanciador_c4) {
    sub_12 = v_3606;
  } else {
    sub_12 = v_3608;
  };
  if (instanciador_ck_13_1) {
    sub_28 = false;
  } else {
    sub_28 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_3611 = sub_28;
  } else {
    v_3611 = false;
  };
  if (instanciador_l3) {
    v_3612 = v_3611;
  } else {
    v_3612 = false;
  };
  if (instanciador_c3_lamp) {
    v_3609 = sub_12;
  } else {
    v_3609 = sub_28;
  };
  if (instanciador_l3) {
    v_3610 = sub_12;
  } else {
    v_3610 = v_3609;
  };
  if (instanciador_c3) {
    sub_11 = v_3610;
  } else {
    sub_11 = v_3612;
  };
  if (instanciador_ck_11_1) {
    sub_29 = false;
  } else {
    sub_29 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_3615 = sub_29;
  } else {
    v_3615 = false;
  };
  if (instanciador_l2) {
    v_3616 = v_3615;
  } else {
    v_3616 = false;
  };
  if (instanciador_c2_lamp) {
    v_3613 = sub_11;
  } else {
    v_3613 = sub_29;
  };
  if (instanciador_l2) {
    v_3614 = sub_11;
  } else {
    v_3614 = v_3613;
  };
  if (instanciador_c2) {
    sub_10 = v_3614;
  } else {
    sub_10 = v_3616;
  };
  if (instanciador_ck_9_1) {
    sub_30 = false;
  } else {
    sub_30 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_3619 = sub_30;
  } else {
    v_3619 = false;
  };
  if (instanciador_l1) {
    v_3620 = v_3619;
  } else {
    v_3620 = false;
  };
  if (instanciador_c1_lamp) {
    v_3617 = sub_10;
  } else {
    v_3617 = sub_30;
  };
  if (instanciador_l1) {
    v_3618 = sub_10;
  } else {
    v_3618 = v_3617;
  };
  if (instanciador_c1) {
    sub_9 = v_3618;
  } else {
    sub_9 = v_3620;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (instanciador_ck_17_1) {
    sub_40 = false;
  } else {
    sub_40 = sub_16;
  };
  if (instanciador_lx) {
    v_3575 = sub_40;
  } else {
    v_3575 = false;
  };
  if (instanciador_c_lampExt) {
    v_3576 = v_3575;
  } else {
    v_3576 = false;
  };
  if (instanciador_lx) {
    v_3573 = sub_16;
  } else {
    v_3573 = sub_40;
  };
  if (instanciador_c_lampExt) {
    v_3574 = sub_27;
  } else {
    v_3574 = v_3573;
  };
  if (instanciador_cx) {
    sub_39 = v_3574;
  } else {
    sub_39 = v_3576;
  };
  if (instanciador_ck_15_1) {
    sub_41 = false;
  } else {
    sub_41 = sub_39;
  };
  if (instanciador_l4) {
    v_3579 = sub_41;
  } else {
    v_3579 = false;
  };
  if (instanciador_c4_lamp) {
    v_3580 = v_3579;
  } else {
    v_3580 = false;
  };
  if (instanciador_l4) {
    v_3577 = sub_39;
  } else {
    v_3577 = sub_41;
  };
  if (instanciador_c4_lamp) {
    v_3578 = sub_39;
  } else {
    v_3578 = v_3577;
  };
  if (instanciador_c4) {
    sub_38 = v_3578;
  } else {
    sub_38 = v_3580;
  };
  if (instanciador_ck_13_1) {
    sub_42 = false;
  } else {
    sub_42 = sub_38;
  };
  if (instanciador_c3_lamp) {
    v_3583 = sub_42;
  } else {
    v_3583 = false;
  };
  if (instanciador_l3) {
    v_3584 = v_3583;
  } else {
    v_3584 = false;
  };
  if (instanciador_c3_lamp) {
    v_3581 = sub_38;
  } else {
    v_3581 = sub_42;
  };
  if (instanciador_l3) {
    v_3582 = sub_38;
  } else {
    v_3582 = v_3581;
  };
  if (instanciador_c3) {
    sub_37 = v_3582;
  } else {
    sub_37 = v_3584;
  };
  if (instanciador_ck_11_1) {
    sub_43 = false;
  } else {
    sub_43 = sub_37;
  };
  if (instanciador_c2_lamp) {
    v_3587 = sub_43;
  } else {
    v_3587 = false;
  };
  if (instanciador_l2) {
    v_3588 = v_3587;
  } else {
    v_3588 = false;
  };
  if (instanciador_c2_lamp) {
    v_3585 = sub_37;
  } else {
    v_3585 = sub_43;
  };
  if (instanciador_l2) {
    v_3586 = sub_37;
  } else {
    v_3586 = v_3585;
  };
  if (instanciador_c2) {
    sub_36 = v_3586;
  } else {
    sub_36 = v_3588;
  };
  if (instanciador_ck_9_1) {
    sub_44 = false;
  } else {
    sub_44 = sub_36;
  };
  if (instanciador_c1_lamp) {
    v_3591 = sub_44;
  } else {
    v_3591 = false;
  };
  if (instanciador_l1) {
    v_3592 = v_3591;
  } else {
    v_3592 = false;
  };
  if (instanciador_c1_lamp) {
    v_3589 = sub_36;
  } else {
    v_3589 = sub_44;
  };
  if (instanciador_l1) {
    v_3590 = sub_36;
  } else {
    v_3590 = v_3589;
  };
  if (instanciador_c1) {
    sub_35 = v_3590;
  } else {
    sub_35 = v_3592;
  };
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  if (instanciador_v_341) {
    sub_4 = sub_31;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  sub_66 = !(instanciador_inpSl);
  if (instanciador_ck_27_1) {
    sub_65 = sub_66;
  } else {
    sub_65 = sub_24;
  };
  sub_64 = sub_65;
  sub_63 = sub_64;
  sub_62 = sub_63;
  sub_61 = sub_62;
  if (instanciador_ck_25_1) {
    sub_60 = sub_61;
  } else {
    sub_60 = false;
  };
  if (instanciador_inpSp) {
    v_3543 = sub_60;
  } else {
    v_3543 = sub_61;
  };
  if (instanciador_c_somP) {
    v_3544 = v_3543;
  } else {
    v_3544 = sub_61;
  };
  if (instanciador_inpSp) {
    v_3541 = false;
  } else {
    v_3541 = sub_60;
  };
  if (instanciador_c_somP) {
    v_3542 = false;
  } else {
    v_3542 = v_3541;
  };
  if (instanciador_csp) {
    sub_59 = v_3542;
  } else {
    sub_59 = v_3544;
  };
  sub_58 = sub_59;
  if (instanciador_ck_19_1) {
    sub_67 = false;
  } else {
    sub_67 = sub_58;
  };
  if (instanciador_lv) {
    v_3547 = sub_58;
  } else {
    v_3547 = sub_67;
  };
  if (instanciador_cv) {
    v_3548 = v_3547;
  } else {
    v_3548 = false;
  };
  if (instanciador_lv) {
    v_3545 = sub_67;
  } else {
    v_3545 = false;
  };
  if (instanciador_cv) {
    v_3546 = sub_58;
  } else {
    v_3546 = v_3545;
  };
  if (instanciador_c_vent) {
    sub_57 = v_3546;
  } else {
    sub_57 = v_3548;
  };
  if (instanciador_ck_17_1) {
    sub_68 = false;
  } else {
    sub_68 = sub_57;
  };
  if (instanciador_lx) {
    v_3551 = sub_68;
  } else {
    v_3551 = false;
  };
  if (instanciador_c_lampExt) {
    v_3552 = v_3551;
  } else {
    v_3552 = false;
  };
  if (instanciador_lx) {
    v_3549 = sub_57;
  } else {
    v_3549 = sub_68;
  };
  if (instanciador_c_lampExt) {
    v_3550 = sub_57;
  } else {
    v_3550 = v_3549;
  };
  if (instanciador_cx) {
    sub_56 = v_3550;
  } else {
    sub_56 = v_3552;
  };
  if (instanciador_ck_15_1) {
    sub_55 = sub_56;
  } else {
    sub_55 = false;
  };
  if (instanciador_l4) {
    v_3555 = sub_55;
  } else {
    v_3555 = sub_56;
  };
  if (instanciador_c4_lamp) {
    v_3556 = v_3555;
  } else {
    v_3556 = sub_56;
  };
  if (instanciador_l4) {
    v_3553 = false;
  } else {
    v_3553 = sub_55;
  };
  if (instanciador_c4_lamp) {
    v_3554 = false;
  } else {
    v_3554 = v_3553;
  };
  if (instanciador_c4) {
    sub_54 = v_3554;
  } else {
    sub_54 = v_3556;
  };
  if (instanciador_ck_13_1) {
    sub_69 = false;
  } else {
    sub_69 = sub_54;
  };
  if (instanciador_c3_lamp) {
    v_3559 = sub_69;
  } else {
    v_3559 = false;
  };
  if (instanciador_l3) {
    v_3560 = v_3559;
  } else {
    v_3560 = false;
  };
  if (instanciador_c3_lamp) {
    v_3557 = sub_54;
  } else {
    v_3557 = sub_69;
  };
  if (instanciador_l3) {
    v_3558 = sub_54;
  } else {
    v_3558 = v_3557;
  };
  if (instanciador_c3) {
    sub_53 = v_3558;
  } else {
    sub_53 = v_3560;
  };
  if (instanciador_ck_11_1) {
    sub_52 = sub_53;
  } else {
    sub_52 = false;
  };
  if (instanciador_c2_lamp) {
    v_3563 = sub_52;
  } else {
    v_3563 = sub_53;
  };
  if (instanciador_l2) {
    v_3564 = v_3563;
  } else {
    v_3564 = sub_53;
  };
  if (instanciador_c2_lamp) {
    v_3561 = false;
  } else {
    v_3561 = sub_52;
  };
  if (instanciador_l2) {
    v_3562 = false;
  } else {
    v_3562 = v_3561;
  };
  if (instanciador_c2) {
    sub_51 = v_3562;
  } else {
    sub_51 = v_3564;
  };
  if (instanciador_ck_9_1) {
    sub_50 = sub_51;
  } else {
    sub_50 = false;
  };
  if (instanciador_c1_lamp) {
    v_3567 = sub_50;
  } else {
    v_3567 = sub_51;
  };
  if (instanciador_l1) {
    v_3568 = v_3567;
  } else {
    v_3568 = sub_51;
  };
  if (instanciador_c1_lamp) {
    v_3565 = false;
  } else {
    v_3565 = sub_50;
  };
  if (instanciador_l1) {
    v_3566 = false;
  } else {
    v_3566 = v_3565;
  };
  if (instanciador_c1) {
    sub_49 = v_3566;
  } else {
    sub_49 = v_3568;
  };
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_91 = sub_19;
  sub_90 = sub_91;
  sub_89 = sub_90;
  sub_88 = sub_89;
  sub_87 = sub_88;
  sub_86 = sub_87;
  sub_85 = sub_86;
  sub_84 = sub_85;
  sub_83 = sub_84;
  sub_82 = sub_83;
  sub_81 = sub_82;
  sub_80 = sub_81;
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  if (instanciador_neutro_input) {
    v_3569 = sub_71;
  } else {
    v_3569 = sub_9;
  };
  if (instanciador_ck_25_1) {
    sub_106 = sub_20;
  } else {
    sub_106 = false;
  };
  if (instanciador_inpSp) {
    v_3515 = sub_106;
  } else {
    v_3515 = sub_20;
  };
  if (instanciador_c_somP) {
    v_3516 = v_3515;
  } else {
    v_3516 = sub_19;
  };
  if (instanciador_inpSp) {
    v_3513 = false;
  } else {
    v_3513 = sub_106;
  };
  if (instanciador_c_somP) {
    v_3514 = false;
  } else {
    v_3514 = v_3513;
  };
  if (instanciador_csp) {
    sub_105 = v_3514;
  } else {
    sub_105 = v_3516;
  };
  sub_104 = sub_105;
  if (instanciador_ck_19_1) {
    sub_103 = sub_104;
  } else {
    sub_103 = false;
  };
  if (instanciador_lv) {
    v_3519 = false;
  } else {
    v_3519 = sub_103;
  };
  if (instanciador_cv) {
    v_3520 = v_3519;
  } else {
    v_3520 = sub_104;
  };
  if (instanciador_lv) {
    v_3517 = sub_103;
  } else {
    v_3517 = sub_104;
  };
  if (instanciador_cv) {
    v_3518 = false;
  } else {
    v_3518 = v_3517;
  };
  if (instanciador_c_vent) {
    sub_102 = v_3518;
  } else {
    sub_102 = v_3520;
  };
  if (instanciador_ck_17_1) {
    sub_101 = sub_102;
  } else {
    sub_101 = false;
  };
  if (instanciador_lx) {
    v_3523 = sub_101;
  } else {
    v_3523 = sub_102;
  };
  if (instanciador_c_lampExt) {
    v_3524 = v_3523;
  } else {
    v_3524 = sub_102;
  };
  if (instanciador_lx) {
    v_3521 = false;
  } else {
    v_3521 = sub_101;
  };
  if (instanciador_c_lampExt) {
    v_3522 = false;
  } else {
    v_3522 = v_3521;
  };
  if (instanciador_cx) {
    sub_100 = v_3522;
  } else {
    sub_100 = v_3524;
  };
  if (instanciador_ck_15_1) {
    sub_99 = sub_100;
  } else {
    sub_99 = false;
  };
  if (instanciador_l4) {
    v_3527 = sub_99;
  } else {
    v_3527 = sub_100;
  };
  if (instanciador_c4_lamp) {
    v_3528 = v_3527;
  } else {
    v_3528 = sub_100;
  };
  if (instanciador_l4) {
    v_3525 = false;
  } else {
    v_3525 = sub_99;
  };
  if (instanciador_c4_lamp) {
    v_3526 = false;
  } else {
    v_3526 = v_3525;
  };
  if (instanciador_c4) {
    sub_98 = v_3526;
  } else {
    sub_98 = v_3528;
  };
  if (instanciador_ck_13_1) {
    sub_97 = sub_98;
  } else {
    sub_97 = false;
  };
  if (instanciador_c3_lamp) {
    v_3531 = sub_97;
  } else {
    v_3531 = sub_98;
  };
  if (instanciador_l3) {
    v_3532 = v_3531;
  } else {
    v_3532 = sub_98;
  };
  if (instanciador_c3_lamp) {
    v_3529 = false;
  } else {
    v_3529 = sub_97;
  };
  if (instanciador_l3) {
    v_3530 = false;
  } else {
    v_3530 = v_3529;
  };
  if (instanciador_c3) {
    sub_96 = v_3530;
  } else {
    sub_96 = v_3532;
  };
  if (instanciador_ck_11_1) {
    sub_95 = sub_96;
  } else {
    sub_95 = false;
  };
  if (instanciador_c2_lamp) {
    v_3535 = sub_95;
  } else {
    v_3535 = sub_96;
  };
  if (instanciador_l2) {
    v_3536 = v_3535;
  } else {
    v_3536 = sub_96;
  };
  if (instanciador_c2_lamp) {
    v_3533 = false;
  } else {
    v_3533 = sub_95;
  };
  if (instanciador_l2) {
    v_3534 = false;
  } else {
    v_3534 = v_3533;
  };
  if (instanciador_c2) {
    sub_94 = v_3534;
  } else {
    sub_94 = v_3536;
  };
  if (instanciador_ck_9_1) {
    sub_93 = sub_94;
  } else {
    sub_93 = false;
  };
  if (instanciador_c1_lamp) {
    v_3539 = sub_93;
  } else {
    v_3539 = sub_94;
  };
  if (instanciador_l1) {
    v_3540 = v_3539;
  } else {
    v_3540 = sub_94;
  };
  if (instanciador_c1_lamp) {
    v_3537 = false;
  } else {
    v_3537 = sub_93;
  };
  if (instanciador_l1) {
    v_3538 = false;
  } else {
    v_3538 = v_3537;
  };
  if (instanciador_c1) {
    sub_92 = v_3538;
  } else {
    sub_92 = v_3540;
  };
  if (instanciador_neutro_input) {
    sub_70 = sub_71;
  } else {
    sub_70 = sub_92;
  };
  if (instanciador_seguranca_input) {
    v_3570 = sub_70;
  } else {
    v_3570 = v_3569;
  };
  if (instanciador_domingol_input) {
    v_3571 = sub_47;
  } else {
    v_3571 = v_3570;
  };
  if (instanciador_domingo_input) {
    sub_46 = sub_32;
  } else {
    sub_46 = v_3571;
  };
  if (instanciador_v_341) {
    v_3572 = sub_31;
  } else {
    v_3572 = sub_46;
  };
  if (instanciador_sexta_input) {
    sub_45 = sub_31;
  } else {
    sub_45 = v_3572;
  };
  if (instanciador_v_339) {
    v_3621 = sub_45;
  } else {
    v_3621 = sub_3;
  };
  if (instanciador_neutro_input) {
    sub_111 = sub_71;
  } else {
    sub_111 = sub_35;
  };
  if (instanciador_seguranca_input) {
    v_3512 = sub_70;
  } else {
    v_3512 = sub_111;
  };
  if (instanciador_domingol_input) {
    sub_110 = sub_47;
  } else {
    sub_110 = v_3512;
  };
  if (instanciador_domingo_input) {
    sub_109 = sub_32;
  } else {
    sub_109 = sub_110;
  };
  if (instanciador_v_341) {
    sub_108 = sub_31;
  } else {
    sub_108 = sub_109;
  };
  sub_107 = sub_108;
  if (instanciador_v_339) {
    v_3622 = sub_45;
  } else {
    v_3622 = sub_107;
  };
  if (instanciador_ebd_input) {
    sub_2 = v_3621;
  } else {
    sub_2 = v_3622;
  };
  if (instanciador_seguranca_input) {
    v_3508 = sub_92;
  } else {
    v_3508 = sub_71;
  };
  if (instanciador_domingol_input) {
    v_3509 = sub_47;
    v_3507 = sub_47;
  } else {
    v_3509 = v_3508;
    v_3507 = sub_33;
  };
  if (instanciador_domingo_input) {
    v_3510 = v_3507;
  } else {
    v_3510 = v_3509;
  };
  if (instanciador_domingol_input) {
    v_3506 = sub_47;
    v_3505 = sub_47;
  } else {
    v_3506 = sub_70;
    v_3505 = sub_111;
  };
  if (instanciador_domingo_input) {
    sub_113 = v_3505;
  } else {
    sub_113 = v_3506;
  };
  if (instanciador_v_341) {
    v_3511 = v_3510;
  } else {
    v_3511 = sub_113;
  };
  if (instanciador_sexta_input) {
    sub_112 = sub_31;
  } else {
    sub_112 = v_3511;
  };
  if (instanciador_neutro_input) {
    v_3504 = sub_71;
  } else {
    v_3504 = sub_49;
  };
  if (instanciador_seguranca_input) {
    sub_115 = sub_70;
  } else {
    sub_115 = v_3504;
  };
  if (instanciador_domingo_input) {
    sub_114 = sub_32;
  } else {
    sub_114 = sub_115;
  };
  if (instanciador_v_341) {
    v_3623 = sub_110;
  } else {
    v_3623 = sub_114;
  };
  if (instanciador_sexta_input) {
    v_3624 = sub_31;
  } else {
    v_3624 = v_3623;
  };
  if (instanciador_v_339) {
    v_3625 = v_3624;
  } else {
    v_3625 = sub_112;
  };
  if (instanciador_ebd_input) {
    v_3626 = sub_5;
  } else {
    v_3626 = v_3625;
  };
  if (instanciador_v_340) {
    sub_1 = v_3626;
  } else {
    sub_1 = sub_2;
  };
  sub_139 = true;
  if (instanciador_ck_27_1) {
    sub_138 = sub_139;
  } else {
    sub_138 = sub_66;
  };
  sub_137 = sub_138;
  sub_136 = sub_137;
  sub_135 = sub_136;
  sub_134 = sub_135;
  sub_133 = sub_134;
  if (instanciador_ck_25_1) {
    sub_140 = false;
  } else {
    sub_140 = sub_134;
  };
  if (instanciador_inpSp) {
    v_3476 = sub_140;
  } else {
    v_3476 = false;
  };
  if (instanciador_c_somP) {
    v_3477 = v_3476;
  } else {
    v_3477 = false;
  };
  if (instanciador_inpSp) {
    v_3474 = sub_134;
  } else {
    v_3474 = sub_140;
  };
  if (instanciador_c_somP) {
    v_3475 = sub_133;
  } else {
    v_3475 = v_3474;
  };
  if (instanciador_csp) {
    sub_132 = v_3475;
  } else {
    sub_132 = v_3477;
  };
  sub_131 = sub_132;
  if (instanciador_ck_19_1) {
    sub_141 = false;
  } else {
    sub_141 = sub_131;
  };
  if (instanciador_lv) {
    v_3480 = sub_131;
  } else {
    v_3480 = sub_141;
  };
  if (instanciador_cv) {
    v_3481 = v_3480;
  } else {
    v_3481 = false;
  };
  if (instanciador_lv) {
    v_3478 = sub_141;
  } else {
    v_3478 = false;
  };
  if (instanciador_cv) {
    v_3479 = sub_131;
  } else {
    v_3479 = v_3478;
  };
  if (instanciador_c_vent) {
    sub_130 = v_3479;
  } else {
    sub_130 = v_3481;
  };
  if (instanciador_ck_17_1) {
    sub_129 = sub_130;
  } else {
    sub_129 = false;
  };
  if (instanciador_lx) {
    v_3484 = sub_129;
    v_3482 = false;
  } else {
    v_3484 = sub_130;
    v_3482 = sub_129;
  };
  if (instanciador_c_lampExt) {
    v_3483 = false;
  } else {
    v_3483 = v_3482;
  };
  sub_142 = sub_130;
  if (instanciador_c_lampExt) {
    v_3485 = v_3484;
  } else {
    v_3485 = sub_142;
  };
  if (instanciador_cx) {
    sub_128 = v_3483;
  } else {
    sub_128 = v_3485;
  };
  if (instanciador_ck_15_1) {
    sub_127 = sub_128;
  } else {
    sub_127 = false;
  };
  if (instanciador_l4) {
    v_3488 = sub_127;
  } else {
    v_3488 = sub_128;
  };
  if (instanciador_c4_lamp) {
    v_3489 = v_3488;
  } else {
    v_3489 = sub_128;
  };
  if (instanciador_l4) {
    v_3486 = false;
  } else {
    v_3486 = sub_127;
  };
  if (instanciador_c4_lamp) {
    v_3487 = false;
  } else {
    v_3487 = v_3486;
  };
  if (instanciador_c4) {
    sub_126 = v_3487;
  } else {
    sub_126 = v_3489;
  };
  if (instanciador_ck_13_1) {
    sub_143 = false;
  } else {
    sub_143 = sub_126;
  };
  if (instanciador_c3_lamp) {
    v_3492 = sub_143;
  } else {
    v_3492 = false;
  };
  if (instanciador_l3) {
    v_3493 = v_3492;
  } else {
    v_3493 = false;
  };
  if (instanciador_c3_lamp) {
    v_3490 = sub_126;
  } else {
    v_3490 = sub_143;
  };
  if (instanciador_l3) {
    v_3491 = sub_126;
  } else {
    v_3491 = v_3490;
  };
  if (instanciador_c3) {
    sub_125 = v_3491;
  } else {
    sub_125 = v_3493;
  };
  if (instanciador_ck_11_1) {
    sub_144 = false;
  } else {
    sub_144 = sub_125;
  };
  if (instanciador_c2_lamp) {
    v_3496 = sub_144;
  } else {
    v_3496 = false;
  };
  if (instanciador_l2) {
    v_3497 = v_3496;
  } else {
    v_3497 = false;
  };
  if (instanciador_c2_lamp) {
    v_3494 = sub_125;
  } else {
    v_3494 = sub_144;
  };
  if (instanciador_l2) {
    v_3495 = sub_125;
  } else {
    v_3495 = v_3494;
  };
  if (instanciador_c2) {
    sub_124 = v_3495;
  } else {
    sub_124 = v_3497;
  };
  if (instanciador_ck_9_1) {
    sub_145 = false;
  } else {
    sub_145 = sub_124;
  };
  if (instanciador_c1_lamp) {
    v_3500 = sub_145;
  } else {
    v_3500 = false;
  };
  if (instanciador_l1) {
    v_3501 = v_3500;
  } else {
    v_3501 = false;
  };
  if (instanciador_c1_lamp) {
    v_3498 = sub_124;
  } else {
    v_3498 = sub_145;
  };
  if (instanciador_l1) {
    v_3499 = sub_124;
  } else {
    v_3499 = v_3498;
  };
  if (instanciador_c1) {
    sub_123 = v_3499;
  } else {
    sub_123 = v_3501;
  };
  sub_122 = sub_123;
  sub_121 = sub_122;
  sub_120 = sub_121;
  sub_119 = sub_120;
  if (instanciador_ck_17_1) {
    sub_155 = false;
  } else {
    sub_155 = sub_130;
  };
  if (instanciador_lx) {
    v_3456 = sub_155;
  } else {
    v_3456 = false;
  };
  if (instanciador_c_lampExt) {
    v_3457 = v_3456;
  } else {
    v_3457 = false;
  };
  if (instanciador_lx) {
    v_3454 = sub_130;
  } else {
    v_3454 = sub_155;
  };
  if (instanciador_c_lampExt) {
    v_3455 = sub_142;
  } else {
    v_3455 = v_3454;
  };
  if (instanciador_cx) {
    sub_154 = v_3455;
  } else {
    sub_154 = v_3457;
  };
  if (instanciador_ck_15_1) {
    sub_156 = false;
  } else {
    sub_156 = sub_154;
  };
  if (instanciador_l4) {
    v_3460 = sub_156;
  } else {
    v_3460 = false;
  };
  if (instanciador_c4_lamp) {
    v_3461 = v_3460;
  } else {
    v_3461 = false;
  };
  if (instanciador_l4) {
    v_3458 = sub_154;
  } else {
    v_3458 = sub_156;
  };
  if (instanciador_c4_lamp) {
    v_3459 = sub_154;
  } else {
    v_3459 = v_3458;
  };
  if (instanciador_c4) {
    sub_153 = v_3459;
  } else {
    sub_153 = v_3461;
  };
  if (instanciador_ck_13_1) {
    sub_157 = false;
  } else {
    sub_157 = sub_153;
  };
  if (instanciador_c3_lamp) {
    v_3464 = sub_157;
  } else {
    v_3464 = false;
  };
  if (instanciador_l3) {
    v_3465 = v_3464;
  } else {
    v_3465 = false;
  };
  if (instanciador_c3_lamp) {
    v_3462 = sub_153;
  } else {
    v_3462 = sub_157;
  };
  if (instanciador_l3) {
    v_3463 = sub_153;
  } else {
    v_3463 = v_3462;
  };
  if (instanciador_c3) {
    sub_152 = v_3463;
  } else {
    sub_152 = v_3465;
  };
  if (instanciador_ck_11_1) {
    sub_158 = false;
  } else {
    sub_158 = sub_152;
  };
  if (instanciador_c2_lamp) {
    v_3468 = sub_158;
  } else {
    v_3468 = false;
  };
  if (instanciador_l2) {
    v_3469 = v_3468;
  } else {
    v_3469 = false;
  };
  if (instanciador_c2_lamp) {
    v_3466 = sub_152;
  } else {
    v_3466 = sub_158;
  };
  if (instanciador_l2) {
    v_3467 = sub_152;
  } else {
    v_3467 = v_3466;
  };
  if (instanciador_c2) {
    sub_151 = v_3467;
  } else {
    sub_151 = v_3469;
  };
  if (instanciador_ck_9_1) {
    sub_159 = false;
  } else {
    sub_159 = sub_151;
  };
  if (instanciador_c1_lamp) {
    v_3472 = sub_159;
  } else {
    v_3472 = false;
  };
  if (instanciador_l1) {
    v_3473 = v_3472;
  } else {
    v_3473 = false;
  };
  if (instanciador_c1_lamp) {
    v_3470 = sub_151;
  } else {
    v_3470 = sub_159;
  };
  if (instanciador_l1) {
    v_3471 = sub_151;
  } else {
    v_3471 = v_3470;
  };
  if (instanciador_c1) {
    sub_150 = v_3471;
  } else {
    sub_150 = v_3473;
  };
  sub_149 = sub_150;
  sub_148 = sub_149;
  sub_147 = sub_148;
  sub_146 = sub_147;
  if (instanciador_v_341) {
    sub_118 = sub_146;
  } else {
    sub_118 = sub_119;
  };
  sub_117 = sub_118;
  sub_179 = sub_139;
  sub_178 = sub_179;
  sub_177 = sub_178;
  sub_176 = sub_177;
  if (instanciador_ck_25_1) {
    sub_175 = sub_176;
  } else {
    sub_175 = false;
  };
  if (instanciador_inpSp) {
    v_3424 = sub_175;
    v_3422 = false;
  } else {
    v_3424 = sub_176;
    v_3422 = sub_175;
  };
  if (instanciador_c_somP) {
    v_3423 = false;
  } else {
    v_3423 = v_3422;
  };
  sub_180 = sub_176;
  if (instanciador_c_somP) {
    v_3425 = v_3424;
  } else {
    v_3425 = sub_180;
  };
  if (instanciador_csp) {
    sub_174 = v_3423;
  } else {
    sub_174 = v_3425;
  };
  sub_173 = sub_174;
  if (instanciador_ck_19_1) {
    sub_181 = false;
  } else {
    sub_181 = sub_173;
  };
  if (instanciador_lv) {
    v_3428 = sub_173;
  } else {
    v_3428 = sub_181;
  };
  if (instanciador_cv) {
    v_3429 = v_3428;
  } else {
    v_3429 = false;
  };
  if (instanciador_lv) {
    v_3426 = sub_181;
  } else {
    v_3426 = false;
  };
  if (instanciador_cv) {
    v_3427 = sub_173;
  } else {
    v_3427 = v_3426;
  };
  if (instanciador_c_vent) {
    sub_172 = v_3427;
  } else {
    sub_172 = v_3429;
  };
  if (instanciador_ck_17_1) {
    sub_182 = false;
  } else {
    sub_182 = sub_172;
  };
  if (instanciador_lx) {
    v_3432 = sub_182;
  } else {
    v_3432 = false;
  };
  if (instanciador_c_lampExt) {
    v_3433 = v_3432;
  } else {
    v_3433 = false;
  };
  if (instanciador_lx) {
    v_3430 = sub_172;
  } else {
    v_3430 = sub_182;
  };
  if (instanciador_c_lampExt) {
    v_3431 = sub_172;
  } else {
    v_3431 = v_3430;
  };
  if (instanciador_cx) {
    sub_171 = v_3431;
  } else {
    sub_171 = v_3433;
  };
  if (instanciador_ck_15_1) {
    sub_170 = sub_171;
  } else {
    sub_170 = false;
  };
  if (instanciador_l4) {
    v_3436 = sub_170;
  } else {
    v_3436 = sub_171;
  };
  if (instanciador_c4_lamp) {
    v_3437 = v_3436;
  } else {
    v_3437 = sub_171;
  };
  if (instanciador_l4) {
    v_3434 = false;
  } else {
    v_3434 = sub_170;
  };
  if (instanciador_c4_lamp) {
    v_3435 = false;
  } else {
    v_3435 = v_3434;
  };
  if (instanciador_c4) {
    sub_169 = v_3435;
  } else {
    sub_169 = v_3437;
  };
  if (instanciador_ck_13_1) {
    sub_183 = false;
  } else {
    sub_183 = sub_169;
  };
  if (instanciador_c3_lamp) {
    v_3440 = sub_183;
  } else {
    v_3440 = false;
  };
  if (instanciador_l3) {
    v_3441 = v_3440;
  } else {
    v_3441 = false;
  };
  if (instanciador_c3_lamp) {
    v_3438 = sub_169;
  } else {
    v_3438 = sub_183;
  };
  if (instanciador_l3) {
    v_3439 = sub_169;
  } else {
    v_3439 = v_3438;
  };
  if (instanciador_c3) {
    sub_168 = v_3439;
  } else {
    sub_168 = v_3441;
  };
  if (instanciador_ck_11_1) {
    sub_167 = sub_168;
  } else {
    sub_167 = false;
  };
  if (instanciador_c2_lamp) {
    v_3444 = sub_167;
  } else {
    v_3444 = sub_168;
  };
  if (instanciador_l2) {
    v_3445 = v_3444;
  } else {
    v_3445 = sub_168;
  };
  if (instanciador_c2_lamp) {
    v_3442 = false;
  } else {
    v_3442 = sub_167;
  };
  if (instanciador_l2) {
    v_3443 = false;
  } else {
    v_3443 = v_3442;
  };
  if (instanciador_c2) {
    sub_166 = v_3443;
  } else {
    sub_166 = v_3445;
  };
  if (instanciador_ck_9_1) {
    sub_165 = sub_166;
  } else {
    sub_165 = false;
  };
  if (instanciador_c1_lamp) {
    v_3448 = sub_165;
  } else {
    v_3448 = sub_166;
  };
  if (instanciador_l1) {
    v_3449 = v_3448;
  } else {
    v_3449 = sub_166;
  };
  if (instanciador_c1_lamp) {
    v_3446 = false;
  } else {
    v_3446 = sub_165;
  };
  if (instanciador_l1) {
    v_3447 = false;
  } else {
    v_3447 = v_3446;
  };
  if (instanciador_c1) {
    sub_164 = v_3447;
  } else {
    sub_164 = v_3449;
  };
  sub_163 = sub_164;
  sub_162 = sub_163;
  sub_205 = sub_180;
  sub_204 = sub_205;
  sub_203 = sub_204;
  sub_202 = sub_203;
  sub_201 = sub_202;
  sub_200 = sub_201;
  sub_199 = sub_200;
  sub_198 = sub_199;
  sub_197 = sub_198;
  sub_196 = sub_197;
  sub_195 = sub_196;
  sub_194 = sub_195;
  sub_193 = sub_194;
  sub_192 = sub_193;
  sub_191 = sub_192;
  sub_190 = sub_191;
  sub_189 = sub_190;
  sub_188 = sub_189;
  sub_187 = sub_188;
  sub_186 = sub_187;
  sub_185 = sub_186;
  if (instanciador_neutro_input) {
    v_3450 = sub_185;
  } else {
    v_3450 = sub_123;
  };
  if (instanciador_ck_25_1) {
    sub_220 = sub_134;
  } else {
    sub_220 = false;
  };
  if (instanciador_inpSp) {
    v_3396 = sub_220;
  } else {
    v_3396 = sub_134;
  };
  if (instanciador_c_somP) {
    v_3397 = v_3396;
  } else {
    v_3397 = sub_133;
  };
  if (instanciador_inpSp) {
    v_3394 = false;
  } else {
    v_3394 = sub_220;
  };
  if (instanciador_c_somP) {
    v_3395 = false;
  } else {
    v_3395 = v_3394;
  };
  if (instanciador_csp) {
    sub_219 = v_3395;
  } else {
    sub_219 = v_3397;
  };
  sub_218 = sub_219;
  if (instanciador_ck_19_1) {
    sub_217 = sub_218;
  } else {
    sub_217 = false;
  };
  if (instanciador_lv) {
    v_3400 = false;
  } else {
    v_3400 = sub_217;
  };
  if (instanciador_cv) {
    v_3401 = v_3400;
  } else {
    v_3401 = sub_218;
  };
  if (instanciador_lv) {
    v_3398 = sub_217;
  } else {
    v_3398 = sub_218;
  };
  if (instanciador_cv) {
    v_3399 = false;
  } else {
    v_3399 = v_3398;
  };
  if (instanciador_c_vent) {
    sub_216 = v_3399;
  } else {
    sub_216 = v_3401;
  };
  if (instanciador_ck_17_1) {
    sub_215 = sub_216;
  } else {
    sub_215 = false;
  };
  if (instanciador_lx) {
    v_3404 = sub_215;
  } else {
    v_3404 = sub_216;
  };
  if (instanciador_c_lampExt) {
    v_3405 = v_3404;
  } else {
    v_3405 = sub_216;
  };
  if (instanciador_lx) {
    v_3402 = false;
  } else {
    v_3402 = sub_215;
  };
  if (instanciador_c_lampExt) {
    v_3403 = false;
  } else {
    v_3403 = v_3402;
  };
  if (instanciador_cx) {
    sub_214 = v_3403;
  } else {
    sub_214 = v_3405;
  };
  if (instanciador_ck_15_1) {
    sub_213 = sub_214;
  } else {
    sub_213 = false;
  };
  if (instanciador_l4) {
    v_3408 = sub_213;
  } else {
    v_3408 = sub_214;
  };
  if (instanciador_c4_lamp) {
    v_3409 = v_3408;
  } else {
    v_3409 = sub_214;
  };
  if (instanciador_l4) {
    v_3406 = false;
  } else {
    v_3406 = sub_213;
  };
  if (instanciador_c4_lamp) {
    v_3407 = false;
  } else {
    v_3407 = v_3406;
  };
  if (instanciador_c4) {
    sub_212 = v_3407;
  } else {
    sub_212 = v_3409;
  };
  if (instanciador_ck_13_1) {
    sub_211 = sub_212;
  } else {
    sub_211 = false;
  };
  if (instanciador_c3_lamp) {
    v_3412 = sub_211;
  } else {
    v_3412 = sub_212;
  };
  if (instanciador_l3) {
    v_3413 = v_3412;
  } else {
    v_3413 = sub_212;
  };
  if (instanciador_c3_lamp) {
    v_3410 = false;
  } else {
    v_3410 = sub_211;
  };
  if (instanciador_l3) {
    v_3411 = false;
  } else {
    v_3411 = v_3410;
  };
  if (instanciador_c3) {
    sub_210 = v_3411;
  } else {
    sub_210 = v_3413;
  };
  if (instanciador_ck_11_1) {
    sub_209 = sub_210;
  } else {
    sub_209 = false;
  };
  if (instanciador_c2_lamp) {
    v_3416 = sub_209;
  } else {
    v_3416 = sub_210;
  };
  if (instanciador_l2) {
    v_3417 = v_3416;
  } else {
    v_3417 = sub_210;
  };
  if (instanciador_c2_lamp) {
    v_3414 = false;
  } else {
    v_3414 = sub_209;
  };
  if (instanciador_l2) {
    v_3415 = false;
  } else {
    v_3415 = v_3414;
  };
  if (instanciador_c2) {
    sub_208 = v_3415;
  } else {
    sub_208 = v_3417;
  };
  if (instanciador_ck_9_1) {
    sub_207 = sub_208;
  } else {
    sub_207 = false;
  };
  if (instanciador_c1_lamp) {
    v_3420 = sub_207;
  } else {
    v_3420 = sub_208;
  };
  if (instanciador_l1) {
    v_3421 = v_3420;
  } else {
    v_3421 = sub_208;
  };
  if (instanciador_c1_lamp) {
    v_3418 = false;
  } else {
    v_3418 = sub_207;
  };
  if (instanciador_l1) {
    v_3419 = false;
  } else {
    v_3419 = v_3418;
  };
  if (instanciador_c1) {
    sub_206 = v_3419;
  } else {
    sub_206 = v_3421;
  };
  if (instanciador_neutro_input) {
    sub_184 = sub_185;
  } else {
    sub_184 = sub_206;
  };
  if (instanciador_seguranca_input) {
    v_3451 = sub_184;
  } else {
    v_3451 = v_3450;
  };
  if (instanciador_domingol_input) {
    v_3452 = sub_162;
  } else {
    v_3452 = v_3451;
  };
  if (instanciador_domingo_input) {
    sub_161 = sub_147;
  } else {
    sub_161 = v_3452;
  };
  if (instanciador_v_341) {
    v_3453 = sub_146;
  } else {
    v_3453 = sub_161;
  };
  if (instanciador_sexta_input) {
    sub_160 = sub_146;
  } else {
    sub_160 = v_3453;
  };
  if (instanciador_v_339) {
    v_3502 = sub_160;
  } else {
    v_3502 = sub_117;
  };
  if (instanciador_neutro_input) {
    sub_225 = sub_185;
  } else {
    sub_225 = sub_150;
  };
  if (instanciador_seguranca_input) {
    v_3393 = sub_184;
  } else {
    v_3393 = sub_225;
  };
  if (instanciador_domingol_input) {
    sub_224 = sub_162;
  } else {
    sub_224 = v_3393;
  };
  if (instanciador_domingo_input) {
    sub_223 = sub_147;
  } else {
    sub_223 = sub_224;
  };
  if (instanciador_v_341) {
    sub_222 = sub_146;
  } else {
    sub_222 = sub_223;
  };
  sub_221 = sub_222;
  if (instanciador_v_339) {
    v_3503 = sub_160;
  } else {
    v_3503 = sub_221;
  };
  if (instanciador_ebd_input) {
    sub_116 = v_3502;
  } else {
    sub_116 = v_3503;
  };
  if (instanciador_seguranca_input) {
    v_3389 = sub_206;
  } else {
    v_3389 = sub_185;
  };
  if (instanciador_domingol_input) {
    v_3390 = sub_162;
    v_3388 = sub_162;
  } else {
    v_3390 = v_3389;
    v_3388 = sub_148;
  };
  if (instanciador_domingo_input) {
    v_3391 = v_3388;
  } else {
    v_3391 = v_3390;
  };
  if (instanciador_domingol_input) {
    v_3387 = sub_162;
    v_3386 = sub_162;
  } else {
    v_3387 = sub_184;
    v_3386 = sub_225;
  };
  if (instanciador_domingo_input) {
    sub_227 = v_3386;
  } else {
    sub_227 = v_3387;
  };
  if (instanciador_v_341) {
    v_3392 = v_3391;
  } else {
    v_3392 = sub_227;
  };
  if (instanciador_sexta_input) {
    sub_226 = sub_146;
  } else {
    sub_226 = v_3392;
  };
  if (instanciador_neutro_input) {
    v = sub_185;
  } else {
    v = sub_164;
  };
  if (instanciador_seguranca_input) {
    sub_229 = sub_184;
  } else {
    sub_229 = v;
  };
  if (instanciador_domingo_input) {
    sub_228 = sub_147;
  } else {
    sub_228 = sub_229;
  };
  if (instanciador_v_341) {
    v_3627 = sub_224;
  } else {
    v_3627 = sub_228;
  };
  if (instanciador_sexta_input) {
    v_3628 = sub_146;
  } else {
    v_3628 = v_3627;
  };
  if (instanciador_v_339) {
    v_3629 = v_3628;
  } else {
    v_3629 = sub_226;
  };
  if (instanciador_ebd_input) {
    v_3630 = sub_119;
  } else {
    v_3630 = v_3629;
  };
  if (instanciador_v_340) {
    v_3631 = v_3630;
  } else {
    v_3631 = sub_116;
  };
  if (p_instanciador_c_somL) {
    sub_0 = v_3631;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c_somL = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_csp_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_c_somP,
  int instanciador_c_vent, int instanciador_cv, int instanciador_cx,
  int instanciador_c4, int instanciador_c3, int instanciador_c2,
  int instanciador_c1, int instanciador_c_lampExt, int instanciador_c4_lamp,
  int instanciador_c3_lamp, int instanciador_c2_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_csp_out* _out) {
  
  int v_3857;
  int v_3856;
  int v_3855;
  int v_3854;
  int v_3853;
  int v_3852;
  int v_3851;
  int v_3850;
  int v_3849;
  int v_3848;
  int v_3847;
  int v_3846;
  int v_3845;
  int v_3844;
  int v_3843;
  int v_3842;
  int v_3841;
  int v_3840;
  int v_3839;
  int v_3838;
  int v_3837;
  int v_3836;
  int v_3835;
  int v_3834;
  int v_3833;
  int v_3832;
  int v_3831;
  int v_3830;
  int v_3829;
  int v_3828;
  int v_3827;
  int v_3826;
  int v_3825;
  int v_3824;
  int v_3823;
  int v_3822;
  int v_3821;
  int v_3820;
  int v_3819;
  int v_3818;
  int v_3817;
  int v_3816;
  int v_3815;
  int v_3814;
  int v_3813;
  int v_3812;
  int v_3811;
  int v_3810;
  int v_3809;
  int v_3808;
  int v_3807;
  int v_3806;
  int v_3805;
  int v_3804;
  int v_3803;
  int v_3802;
  int v_3801;
  int v_3800;
  int v_3799;
  int v_3798;
  int v_3797;
  int v_3796;
  int v_3795;
  int v_3794;
  int v_3793;
  int v_3792;
  int v_3791;
  int v_3790;
  int v_3789;
  int v_3788;
  int v_3787;
  int v_3786;
  int v_3785;
  int v_3784;
  int v_3783;
  int v_3782;
  int v_3781;
  int v_3780;
  int v_3779;
  int v_3778;
  int v_3777;
  int v_3776;
  int v_3775;
  int v_3774;
  int v_3773;
  int v_3772;
  int v_3771;
  int v_3770;
  int v_3769;
  int v_3768;
  int v_3767;
  int v_3766;
  int v_3765;
  int v_3764;
  int v_3763;
  int v_3762;
  int v_3761;
  int v_3760;
  int v_3759;
  int v_3758;
  int v_3757;
  int v_3756;
  int v_3755;
  int v_3754;
  int v_3753;
  int v_3752;
  int v_3751;
  int v_3750;
  int v_3749;
  int v_3748;
  int v_3747;
  int v_3746;
  int v_3745;
  int v_3744;
  int v_3743;
  int v_3742;
  int v_3741;
  int v_3740;
  int v_3739;
  int v_3738;
  int v_3737;
  int v_3736;
  int v_3735;
  int v_3734;
  int v_3733;
  int v_3732;
  int v_3731;
  int v_3730;
  int v_3729;
  int v_3728;
  int v_3727;
  int v_3726;
  int v_3725;
  int v_3724;
  int v_3723;
  int v_3722;
  int v_3721;
  int v_3720;
  int v_3719;
  int v_3718;
  int v_3717;
  int v_3716;
  int v_3715;
  int v_3714;
  int v_3713;
  int v_3712;
  int v_3711;
  int v_3710;
  int v_3709;
  int v_3708;
  int v_3707;
  int v_3706;
  int v_3705;
  int v_3704;
  int v_3703;
  int v_3702;
  int v_3701;
  int v_3700;
  int v_3699;
  int v_3698;
  int v_3697;
  int v_3696;
  int v_3695;
  int v_3694;
  int v_3693;
  int v_3692;
  int v_3691;
  int v_3690;
  int v_3689;
  int v_3688;
  int v_3687;
  int v_3686;
  int v_3685;
  int v_3684;
  int v_3683;
  int v_3682;
  int v_3681;
  int v_3680;
  int v_3679;
  int v_3678;
  int v_3677;
  int v_3676;
  int v_3675;
  int v_3674;
  int v_3673;
  int v_3672;
  int v_3671;
  int v_3670;
  int v_3669;
  int v_3668;
  int v_3667;
  int v_3666;
  int v_3665;
  int v_3664;
  int v_3663;
  int v_3662;
  int v_3661;
  int v_3660;
  int v_3659;
  int v_3658;
  int v_3657;
  int v_3656;
  int v_3655;
  int v_3654;
  int v_3653;
  int v_3652;
  int v_3651;
  int v_3650;
  int v_3649;
  int v_3648;
  int v_3647;
  int v_3646;
  int v_3645;
  int v_3644;
  int v_3643;
  int v_3642;
  int v_3641;
  int v_3640;
  int v_3639;
  int v_3638;
  int v_3637;
  int v_3636;
  int v_3635;
  int v_3634;
  int v_3633;
  int v_3632;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  int sub_202;
  int sub_203;
  int sub_204;
  int sub_205;
  int sub_206;
  int sub_207;
  int sub_208;
  int sub_209;
  int sub_210;
  sub_24 = false;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_29 = true;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  if (instanciador_ck_25_1) {
    sub_19 = sub_25;
  } else {
    sub_19 = sub_20;
  };
  if (instanciador_inpSp) {
    v_3822 = sub_19;
  } else {
    v_3822 = sub_25;
  };
  if (instanciador_ck_25_1) {
    v_3821 = false;
  } else {
    v_3821 = sub_25;
  };
  if (instanciador_inpSp) {
    sub_30 = sub_25;
  } else {
    sub_30 = v_3821;
  };
  if (instanciador_c_somP) {
    sub_18 = v_3822;
  } else {
    sub_18 = sub_30;
  };
  sub_17 = sub_18;
  if (instanciador_ck_19_1) {
    sub_31 = false;
  } else {
    sub_31 = sub_17;
  };
  if (instanciador_lv) {
    v_3825 = sub_17;
  } else {
    v_3825 = sub_31;
  };
  if (instanciador_cv) {
    v_3826 = v_3825;
  } else {
    v_3826 = false;
  };
  if (instanciador_lv) {
    v_3823 = sub_31;
  } else {
    v_3823 = false;
  };
  if (instanciador_cv) {
    v_3824 = sub_17;
  } else {
    v_3824 = v_3823;
  };
  if (instanciador_c_vent) {
    sub_16 = v_3824;
  } else {
    sub_16 = v_3826;
  };
  if (instanciador_ck_17_1) {
    sub_15 = sub_16;
  } else {
    sub_15 = false;
  };
  if (instanciador_lx) {
    v_3829 = sub_15;
    v_3827 = false;
  } else {
    v_3829 = sub_16;
    v_3827 = sub_15;
  };
  if (instanciador_c_lampExt) {
    v_3828 = false;
  } else {
    v_3828 = v_3827;
  };
  sub_32 = sub_16;
  if (instanciador_c_lampExt) {
    v_3830 = v_3829;
  } else {
    v_3830 = sub_32;
  };
  if (instanciador_cx) {
    sub_14 = v_3828;
  } else {
    sub_14 = v_3830;
  };
  if (instanciador_ck_15_1) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (instanciador_l4) {
    v_3833 = sub_13;
  } else {
    v_3833 = sub_14;
  };
  if (instanciador_c4_lamp) {
    v_3834 = v_3833;
  } else {
    v_3834 = sub_14;
  };
  if (instanciador_l4) {
    v_3831 = false;
  } else {
    v_3831 = sub_13;
  };
  if (instanciador_c4_lamp) {
    v_3832 = false;
  } else {
    v_3832 = v_3831;
  };
  if (instanciador_c4) {
    sub_12 = v_3832;
  } else {
    sub_12 = v_3834;
  };
  if (instanciador_ck_13_1) {
    sub_33 = false;
  } else {
    sub_33 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_3837 = sub_33;
  } else {
    v_3837 = false;
  };
  if (instanciador_l3) {
    v_3838 = v_3837;
  } else {
    v_3838 = false;
  };
  if (instanciador_c3_lamp) {
    v_3835 = sub_12;
  } else {
    v_3835 = sub_33;
  };
  if (instanciador_l3) {
    v_3836 = sub_12;
  } else {
    v_3836 = v_3835;
  };
  if (instanciador_c3) {
    sub_11 = v_3836;
  } else {
    sub_11 = v_3838;
  };
  if (instanciador_ck_11_1) {
    sub_34 = false;
  } else {
    sub_34 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_3841 = sub_34;
  } else {
    v_3841 = false;
  };
  if (instanciador_l2) {
    v_3842 = v_3841;
  } else {
    v_3842 = false;
  };
  if (instanciador_c2_lamp) {
    v_3839 = sub_11;
  } else {
    v_3839 = sub_34;
  };
  if (instanciador_l2) {
    v_3840 = sub_11;
  } else {
    v_3840 = v_3839;
  };
  if (instanciador_c2) {
    sub_10 = v_3840;
  } else {
    sub_10 = v_3842;
  };
  if (instanciador_ck_9_1) {
    sub_35 = false;
  } else {
    sub_35 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_3845 = sub_35;
  } else {
    v_3845 = false;
  };
  if (instanciador_l1) {
    v_3846 = v_3845;
  } else {
    v_3846 = false;
  };
  if (instanciador_c1_lamp) {
    v_3843 = sub_10;
  } else {
    v_3843 = sub_35;
  };
  if (instanciador_l1) {
    v_3844 = sub_10;
  } else {
    v_3844 = v_3843;
  };
  if (instanciador_c1) {
    sub_9 = v_3844;
  } else {
    sub_9 = v_3846;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (instanciador_ck_17_1) {
    sub_45 = false;
  } else {
    sub_45 = sub_16;
  };
  if (instanciador_lx) {
    v_3803 = sub_45;
  } else {
    v_3803 = false;
  };
  if (instanciador_c_lampExt) {
    v_3804 = v_3803;
  } else {
    v_3804 = false;
  };
  if (instanciador_lx) {
    v_3801 = sub_16;
  } else {
    v_3801 = sub_45;
  };
  if (instanciador_c_lampExt) {
    v_3802 = sub_32;
  } else {
    v_3802 = v_3801;
  };
  if (instanciador_cx) {
    sub_44 = v_3802;
  } else {
    sub_44 = v_3804;
  };
  if (instanciador_ck_15_1) {
    sub_46 = false;
  } else {
    sub_46 = sub_44;
  };
  if (instanciador_l4) {
    v_3807 = sub_46;
  } else {
    v_3807 = false;
  };
  if (instanciador_c4_lamp) {
    v_3808 = v_3807;
  } else {
    v_3808 = false;
  };
  if (instanciador_l4) {
    v_3805 = sub_44;
  } else {
    v_3805 = sub_46;
  };
  if (instanciador_c4_lamp) {
    v_3806 = sub_44;
  } else {
    v_3806 = v_3805;
  };
  if (instanciador_c4) {
    sub_43 = v_3806;
  } else {
    sub_43 = v_3808;
  };
  if (instanciador_ck_13_1) {
    sub_47 = false;
  } else {
    sub_47 = sub_43;
  };
  if (instanciador_c3_lamp) {
    v_3811 = sub_47;
  } else {
    v_3811 = false;
  };
  if (instanciador_l3) {
    v_3812 = v_3811;
  } else {
    v_3812 = false;
  };
  if (instanciador_c3_lamp) {
    v_3809 = sub_43;
  } else {
    v_3809 = sub_47;
  };
  if (instanciador_l3) {
    v_3810 = sub_43;
  } else {
    v_3810 = v_3809;
  };
  if (instanciador_c3) {
    sub_42 = v_3810;
  } else {
    sub_42 = v_3812;
  };
  if (instanciador_ck_11_1) {
    sub_48 = false;
  } else {
    sub_48 = sub_42;
  };
  if (instanciador_c2_lamp) {
    v_3815 = sub_48;
  } else {
    v_3815 = false;
  };
  if (instanciador_l2) {
    v_3816 = v_3815;
  } else {
    v_3816 = false;
  };
  if (instanciador_c2_lamp) {
    v_3813 = sub_42;
  } else {
    v_3813 = sub_48;
  };
  if (instanciador_l2) {
    v_3814 = sub_42;
  } else {
    v_3814 = v_3813;
  };
  if (instanciador_c2) {
    sub_41 = v_3814;
  } else {
    sub_41 = v_3816;
  };
  if (instanciador_ck_9_1) {
    sub_49 = false;
  } else {
    sub_49 = sub_41;
  };
  if (instanciador_c1_lamp) {
    v_3819 = sub_49;
  } else {
    v_3819 = false;
  };
  if (instanciador_l1) {
    v_3820 = v_3819;
  } else {
    v_3820 = false;
  };
  if (instanciador_c1_lamp) {
    v_3817 = sub_41;
  } else {
    v_3817 = sub_49;
  };
  if (instanciador_l1) {
    v_3818 = sub_41;
  } else {
    v_3818 = v_3817;
  };
  if (instanciador_c1) {
    sub_40 = v_3818;
  } else {
    sub_40 = v_3820;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  if (instanciador_v_341) {
    sub_4 = sub_36;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (instanciador_ck_25_1) {
    v_3772 = sub_20;
  } else {
    v_3772 = false;
  };
  if (instanciador_inpSp) {
    sub_66 = v_3772;
  } else {
    sub_66 = sub_20;
  };
  sub_67 = sub_20;
  if (instanciador_c_somP) {
    sub_65 = sub_66;
  } else {
    sub_65 = sub_67;
  };
  sub_64 = sub_65;
  sub_63 = sub_64;
  if (instanciador_ck_19_1) {
    sub_68 = false;
  } else {
    sub_68 = sub_64;
  };
  if (instanciador_lv) {
    v_3775 = sub_64;
  } else {
    v_3775 = sub_68;
  };
  if (instanciador_cv) {
    v_3776 = v_3775;
  } else {
    v_3776 = false;
  };
  if (instanciador_lv) {
    v_3773 = sub_68;
  } else {
    v_3773 = false;
  };
  if (instanciador_cv) {
    v_3774 = sub_63;
  } else {
    v_3774 = v_3773;
  };
  if (instanciador_c_vent) {
    sub_62 = v_3774;
  } else {
    sub_62 = v_3776;
  };
  if (instanciador_ck_17_1) {
    sub_69 = false;
  } else {
    sub_69 = sub_62;
  };
  if (instanciador_lx) {
    v_3779 = sub_69;
  } else {
    v_3779 = false;
  };
  if (instanciador_c_lampExt) {
    v_3780 = v_3779;
  } else {
    v_3780 = false;
  };
  if (instanciador_lx) {
    v_3777 = sub_62;
  } else {
    v_3777 = sub_69;
  };
  if (instanciador_c_lampExt) {
    v_3778 = sub_62;
  } else {
    v_3778 = v_3777;
  };
  if (instanciador_cx) {
    sub_61 = v_3778;
  } else {
    sub_61 = v_3780;
  };
  if (instanciador_ck_15_1) {
    sub_60 = sub_61;
  } else {
    sub_60 = false;
  };
  if (instanciador_l4) {
    v_3783 = sub_60;
  } else {
    v_3783 = sub_61;
  };
  if (instanciador_c4_lamp) {
    v_3784 = v_3783;
  } else {
    v_3784 = sub_61;
  };
  if (instanciador_l4) {
    v_3781 = false;
  } else {
    v_3781 = sub_60;
  };
  if (instanciador_c4_lamp) {
    v_3782 = false;
  } else {
    v_3782 = v_3781;
  };
  if (instanciador_c4) {
    sub_59 = v_3782;
  } else {
    sub_59 = v_3784;
  };
  if (instanciador_ck_13_1) {
    sub_70 = false;
  } else {
    sub_70 = sub_59;
  };
  if (instanciador_c3_lamp) {
    v_3787 = sub_70;
  } else {
    v_3787 = false;
  };
  if (instanciador_l3) {
    v_3788 = v_3787;
  } else {
    v_3788 = false;
  };
  if (instanciador_c3_lamp) {
    v_3785 = sub_59;
  } else {
    v_3785 = sub_70;
  };
  if (instanciador_l3) {
    v_3786 = sub_59;
  } else {
    v_3786 = v_3785;
  };
  if (instanciador_c3) {
    sub_58 = v_3786;
  } else {
    sub_58 = v_3788;
  };
  if (instanciador_ck_11_1) {
    sub_57 = sub_58;
  } else {
    sub_57 = false;
  };
  if (instanciador_c2_lamp) {
    v_3791 = sub_57;
  } else {
    v_3791 = sub_58;
  };
  if (instanciador_l2) {
    v_3792 = v_3791;
  } else {
    v_3792 = sub_58;
  };
  if (instanciador_c2_lamp) {
    v_3789 = false;
  } else {
    v_3789 = sub_57;
  };
  if (instanciador_l2) {
    v_3790 = false;
  } else {
    v_3790 = v_3789;
  };
  if (instanciador_c2) {
    sub_56 = v_3790;
  } else {
    sub_56 = v_3792;
  };
  if (instanciador_ck_9_1) {
    sub_55 = sub_56;
  } else {
    sub_55 = false;
  };
  if (instanciador_c1_lamp) {
    v_3795 = sub_55;
  } else {
    v_3795 = sub_56;
  };
  if (instanciador_l1) {
    v_3796 = v_3795;
  } else {
    v_3796 = sub_56;
  };
  if (instanciador_c1_lamp) {
    v_3793 = false;
  } else {
    v_3793 = sub_55;
  };
  if (instanciador_l1) {
    v_3794 = false;
  } else {
    v_3794 = v_3793;
  };
  if (instanciador_c1) {
    sub_54 = v_3794;
  } else {
    sub_54 = v_3796;
  };
  sub_53 = sub_54;
  sub_52 = sub_53;
  sub_91 = sub_67;
  sub_90 = sub_91;
  sub_89 = sub_90;
  sub_88 = sub_89;
  sub_87 = sub_88;
  sub_86 = sub_87;
  sub_85 = sub_86;
  sub_84 = sub_85;
  sub_83 = sub_84;
  sub_82 = sub_83;
  sub_81 = sub_82;
  sub_80 = sub_81;
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  if (instanciador_neutro_input) {
    v_3797 = sub_72;
  } else {
    v_3797 = sub_9;
  };
  if (instanciador_ck_19_1) {
    sub_103 = sub_64;
  } else {
    sub_103 = false;
  };
  if (instanciador_lv) {
    v_3750 = false;
  } else {
    v_3750 = sub_103;
  };
  if (instanciador_cv) {
    v_3751 = v_3750;
  } else {
    v_3751 = sub_63;
  };
  if (instanciador_lv) {
    v_3748 = sub_103;
  } else {
    v_3748 = sub_64;
  };
  if (instanciador_cv) {
    v_3749 = false;
  } else {
    v_3749 = v_3748;
  };
  if (instanciador_c_vent) {
    sub_102 = v_3749;
  } else {
    sub_102 = v_3751;
  };
  if (instanciador_ck_17_1) {
    sub_101 = sub_102;
  } else {
    sub_101 = false;
  };
  if (instanciador_lx) {
    v_3754 = sub_101;
  } else {
    v_3754 = sub_102;
  };
  if (instanciador_c_lampExt) {
    v_3755 = v_3754;
  } else {
    v_3755 = sub_102;
  };
  if (instanciador_lx) {
    v_3752 = false;
  } else {
    v_3752 = sub_101;
  };
  if (instanciador_c_lampExt) {
    v_3753 = false;
  } else {
    v_3753 = v_3752;
  };
  if (instanciador_cx) {
    sub_100 = v_3753;
  } else {
    sub_100 = v_3755;
  };
  if (instanciador_ck_15_1) {
    sub_99 = sub_100;
  } else {
    sub_99 = false;
  };
  if (instanciador_l4) {
    v_3758 = sub_99;
  } else {
    v_3758 = sub_100;
  };
  if (instanciador_c4_lamp) {
    v_3759 = v_3758;
  } else {
    v_3759 = sub_100;
  };
  if (instanciador_l4) {
    v_3756 = false;
  } else {
    v_3756 = sub_99;
  };
  if (instanciador_c4_lamp) {
    v_3757 = false;
  } else {
    v_3757 = v_3756;
  };
  if (instanciador_c4) {
    sub_98 = v_3757;
  } else {
    sub_98 = v_3759;
  };
  if (instanciador_ck_13_1) {
    sub_97 = sub_98;
  } else {
    sub_97 = false;
  };
  if (instanciador_c3_lamp) {
    v_3762 = sub_97;
  } else {
    v_3762 = sub_98;
  };
  if (instanciador_l3) {
    v_3763 = v_3762;
  } else {
    v_3763 = sub_98;
  };
  if (instanciador_c3_lamp) {
    v_3760 = false;
  } else {
    v_3760 = sub_97;
  };
  if (instanciador_l3) {
    v_3761 = false;
  } else {
    v_3761 = v_3760;
  };
  if (instanciador_c3) {
    sub_96 = v_3761;
  } else {
    sub_96 = v_3763;
  };
  if (instanciador_ck_11_1) {
    sub_95 = sub_96;
  } else {
    sub_95 = false;
  };
  if (instanciador_c2_lamp) {
    v_3766 = sub_95;
  } else {
    v_3766 = sub_96;
  };
  if (instanciador_l2) {
    v_3767 = v_3766;
  } else {
    v_3767 = sub_96;
  };
  if (instanciador_c2_lamp) {
    v_3764 = false;
  } else {
    v_3764 = sub_95;
  };
  if (instanciador_l2) {
    v_3765 = false;
  } else {
    v_3765 = v_3764;
  };
  if (instanciador_c2) {
    sub_94 = v_3765;
  } else {
    sub_94 = v_3767;
  };
  if (instanciador_ck_9_1) {
    sub_93 = sub_94;
  } else {
    sub_93 = false;
  };
  if (instanciador_c1_lamp) {
    v_3770 = sub_93;
  } else {
    v_3770 = sub_94;
  };
  if (instanciador_l1) {
    v_3771 = v_3770;
  } else {
    v_3771 = sub_94;
  };
  if (instanciador_c1_lamp) {
    v_3768 = false;
  } else {
    v_3768 = sub_93;
  };
  if (instanciador_l1) {
    v_3769 = false;
  } else {
    v_3769 = v_3768;
  };
  if (instanciador_c1) {
    sub_92 = v_3769;
  } else {
    sub_92 = v_3771;
  };
  if (instanciador_neutro_input) {
    sub_71 = sub_72;
  } else {
    sub_71 = sub_92;
  };
  if (instanciador_seguranca_input) {
    v_3798 = sub_71;
  } else {
    v_3798 = v_3797;
  };
  if (instanciador_domingol_input) {
    v_3799 = sub_52;
  } else {
    v_3799 = v_3798;
  };
  if (instanciador_domingo_input) {
    sub_51 = sub_37;
  } else {
    sub_51 = v_3799;
  };
  if (instanciador_v_341) {
    v_3800 = sub_36;
  } else {
    v_3800 = sub_51;
  };
  if (instanciador_sexta_input) {
    sub_50 = sub_36;
  } else {
    sub_50 = v_3800;
  };
  if (instanciador_v_339) {
    v_3847 = sub_50;
  } else {
    v_3847 = sub_3;
  };
  if (instanciador_neutro_input) {
    sub_108 = sub_72;
  } else {
    sub_108 = sub_40;
  };
  if (instanciador_seguranca_input) {
    v_3747 = sub_71;
  } else {
    v_3747 = sub_108;
  };
  if (instanciador_domingol_input) {
    sub_107 = sub_52;
  } else {
    sub_107 = v_3747;
  };
  if (instanciador_domingo_input) {
    sub_106 = sub_37;
  } else {
    sub_106 = sub_107;
  };
  if (instanciador_v_341) {
    sub_105 = sub_36;
  } else {
    sub_105 = sub_106;
  };
  sub_104 = sub_105;
  if (instanciador_v_339) {
    v_3848 = sub_50;
  } else {
    v_3848 = sub_104;
  };
  if (instanciador_ebd_input) {
    sub_2 = v_3847;
  } else {
    sub_2 = v_3848;
  };
  if (instanciador_seguranca_input) {
    v_3743 = sub_92;
  } else {
    v_3743 = sub_72;
  };
  if (instanciador_domingol_input) {
    v_3744 = sub_52;
    v_3742 = sub_52;
  } else {
    v_3744 = v_3743;
    v_3742 = sub_38;
  };
  if (instanciador_domingo_input) {
    v_3745 = v_3742;
  } else {
    v_3745 = v_3744;
  };
  if (instanciador_domingol_input) {
    v_3741 = sub_52;
    v_3740 = sub_52;
  } else {
    v_3741 = sub_71;
    v_3740 = sub_108;
  };
  if (instanciador_domingo_input) {
    sub_110 = v_3740;
  } else {
    sub_110 = v_3741;
  };
  if (instanciador_v_341) {
    v_3746 = v_3745;
  } else {
    v_3746 = sub_110;
  };
  if (instanciador_sexta_input) {
    sub_109 = sub_36;
  } else {
    sub_109 = v_3746;
  };
  if (instanciador_neutro_input) {
    v_3739 = sub_72;
  } else {
    v_3739 = sub_54;
  };
  if (instanciador_seguranca_input) {
    sub_112 = sub_71;
  } else {
    sub_112 = v_3739;
  };
  if (instanciador_domingo_input) {
    sub_111 = sub_37;
  } else {
    sub_111 = sub_112;
  };
  if (instanciador_v_341) {
    v_3849 = sub_107;
  } else {
    v_3849 = sub_111;
  };
  if (instanciador_sexta_input) {
    v_3850 = sub_36;
  } else {
    v_3850 = v_3849;
  };
  if (instanciador_v_339) {
    v_3851 = v_3850;
  } else {
    v_3851 = sub_109;
  };
  if (instanciador_ebd_input) {
    v_3852 = sub_5;
  } else {
    v_3852 = v_3851;
  };
  if (instanciador_v_340) {
    sub_1 = v_3852;
  } else {
    sub_1 = sub_2;
  };
  sub_130 = sub_25;
  if (instanciador_c_somP) {
    sub_129 = sub_130;
  } else {
    sub_129 = sub_30;
  };
  sub_128 = sub_129;
  if (instanciador_ck_19_1) {
    sub_131 = false;
  } else {
    sub_131 = sub_128;
  };
  if (instanciador_lv) {
    v_3715 = sub_128;
  } else {
    v_3715 = sub_131;
  };
  if (instanciador_cv) {
    v_3716 = v_3715;
  } else {
    v_3716 = false;
  };
  if (instanciador_lv) {
    v_3713 = sub_131;
  } else {
    v_3713 = false;
  };
  if (instanciador_cv) {
    v_3714 = sub_128;
  } else {
    v_3714 = v_3713;
  };
  if (instanciador_c_vent) {
    sub_127 = v_3714;
  } else {
    sub_127 = v_3716;
  };
  if (instanciador_ck_17_1) {
    sub_126 = sub_127;
  } else {
    sub_126 = false;
  };
  if (instanciador_lx) {
    v_3719 = sub_126;
    v_3717 = false;
  } else {
    v_3719 = sub_127;
    v_3717 = sub_126;
  };
  if (instanciador_c_lampExt) {
    v_3718 = false;
  } else {
    v_3718 = v_3717;
  };
  sub_132 = sub_127;
  if (instanciador_c_lampExt) {
    v_3720 = v_3719;
  } else {
    v_3720 = sub_132;
  };
  if (instanciador_cx) {
    sub_125 = v_3718;
  } else {
    sub_125 = v_3720;
  };
  if (instanciador_ck_15_1) {
    sub_124 = sub_125;
  } else {
    sub_124 = false;
  };
  if (instanciador_l4) {
    v_3723 = sub_124;
  } else {
    v_3723 = sub_125;
  };
  if (instanciador_c4_lamp) {
    v_3724 = v_3723;
  } else {
    v_3724 = sub_125;
  };
  if (instanciador_l4) {
    v_3721 = false;
  } else {
    v_3721 = sub_124;
  };
  if (instanciador_c4_lamp) {
    v_3722 = false;
  } else {
    v_3722 = v_3721;
  };
  if (instanciador_c4) {
    sub_123 = v_3722;
  } else {
    sub_123 = v_3724;
  };
  if (instanciador_ck_13_1) {
    sub_133 = false;
  } else {
    sub_133 = sub_123;
  };
  if (instanciador_c3_lamp) {
    v_3727 = sub_133;
  } else {
    v_3727 = false;
  };
  if (instanciador_l3) {
    v_3728 = v_3727;
  } else {
    v_3728 = false;
  };
  if (instanciador_c3_lamp) {
    v_3725 = sub_123;
  } else {
    v_3725 = sub_133;
  };
  if (instanciador_l3) {
    v_3726 = sub_123;
  } else {
    v_3726 = v_3725;
  };
  if (instanciador_c3) {
    sub_122 = v_3726;
  } else {
    sub_122 = v_3728;
  };
  if (instanciador_ck_11_1) {
    sub_134 = false;
  } else {
    sub_134 = sub_122;
  };
  if (instanciador_c2_lamp) {
    v_3731 = sub_134;
  } else {
    v_3731 = false;
  };
  if (instanciador_l2) {
    v_3732 = v_3731;
  } else {
    v_3732 = false;
  };
  if (instanciador_c2_lamp) {
    v_3729 = sub_122;
  } else {
    v_3729 = sub_134;
  };
  if (instanciador_l2) {
    v_3730 = sub_122;
  } else {
    v_3730 = v_3729;
  };
  if (instanciador_c2) {
    sub_121 = v_3730;
  } else {
    sub_121 = v_3732;
  };
  if (instanciador_ck_9_1) {
    sub_135 = false;
  } else {
    sub_135 = sub_121;
  };
  if (instanciador_c1_lamp) {
    v_3735 = sub_135;
  } else {
    v_3735 = false;
  };
  if (instanciador_l1) {
    v_3736 = v_3735;
  } else {
    v_3736 = false;
  };
  if (instanciador_c1_lamp) {
    v_3733 = sub_121;
  } else {
    v_3733 = sub_135;
  };
  if (instanciador_l1) {
    v_3734 = sub_121;
  } else {
    v_3734 = v_3733;
  };
  if (instanciador_c1) {
    sub_120 = v_3734;
  } else {
    sub_120 = v_3736;
  };
  sub_119 = sub_120;
  sub_118 = sub_119;
  sub_117 = sub_118;
  sub_116 = sub_117;
  if (instanciador_ck_17_1) {
    sub_145 = false;
  } else {
    sub_145 = sub_127;
  };
  if (instanciador_lx) {
    v_3695 = sub_145;
  } else {
    v_3695 = false;
  };
  if (instanciador_c_lampExt) {
    v_3696 = v_3695;
  } else {
    v_3696 = false;
  };
  if (instanciador_lx) {
    v_3693 = sub_127;
  } else {
    v_3693 = sub_145;
  };
  if (instanciador_c_lampExt) {
    v_3694 = sub_132;
  } else {
    v_3694 = v_3693;
  };
  if (instanciador_cx) {
    sub_144 = v_3694;
  } else {
    sub_144 = v_3696;
  };
  if (instanciador_ck_15_1) {
    sub_146 = false;
  } else {
    sub_146 = sub_144;
  };
  if (instanciador_l4) {
    v_3699 = sub_146;
  } else {
    v_3699 = false;
  };
  if (instanciador_c4_lamp) {
    v_3700 = v_3699;
  } else {
    v_3700 = false;
  };
  if (instanciador_l4) {
    v_3697 = sub_144;
  } else {
    v_3697 = sub_146;
  };
  if (instanciador_c4_lamp) {
    v_3698 = sub_144;
  } else {
    v_3698 = v_3697;
  };
  if (instanciador_c4) {
    sub_143 = v_3698;
  } else {
    sub_143 = v_3700;
  };
  if (instanciador_ck_13_1) {
    sub_147 = false;
  } else {
    sub_147 = sub_143;
  };
  if (instanciador_c3_lamp) {
    v_3703 = sub_147;
  } else {
    v_3703 = false;
  };
  if (instanciador_l3) {
    v_3704 = v_3703;
  } else {
    v_3704 = false;
  };
  if (instanciador_c3_lamp) {
    v_3701 = sub_143;
  } else {
    v_3701 = sub_147;
  };
  if (instanciador_l3) {
    v_3702 = sub_143;
  } else {
    v_3702 = v_3701;
  };
  if (instanciador_c3) {
    sub_142 = v_3702;
  } else {
    sub_142 = v_3704;
  };
  if (instanciador_ck_11_1) {
    sub_148 = false;
  } else {
    sub_148 = sub_142;
  };
  if (instanciador_c2_lamp) {
    v_3707 = sub_148;
  } else {
    v_3707 = false;
  };
  if (instanciador_l2) {
    v_3708 = v_3707;
  } else {
    v_3708 = false;
  };
  if (instanciador_c2_lamp) {
    v_3705 = sub_142;
  } else {
    v_3705 = sub_148;
  };
  if (instanciador_l2) {
    v_3706 = sub_142;
  } else {
    v_3706 = v_3705;
  };
  if (instanciador_c2) {
    sub_141 = v_3706;
  } else {
    sub_141 = v_3708;
  };
  if (instanciador_ck_9_1) {
    sub_149 = false;
  } else {
    sub_149 = sub_141;
  };
  if (instanciador_c1_lamp) {
    v_3711 = sub_149;
  } else {
    v_3711 = false;
  };
  if (instanciador_l1) {
    v_3712 = v_3711;
  } else {
    v_3712 = false;
  };
  if (instanciador_c1_lamp) {
    v_3709 = sub_141;
  } else {
    v_3709 = sub_149;
  };
  if (instanciador_l1) {
    v_3710 = sub_141;
  } else {
    v_3710 = v_3709;
  };
  if (instanciador_c1) {
    sub_140 = v_3710;
  } else {
    sub_140 = v_3712;
  };
  sub_139 = sub_140;
  sub_138 = sub_139;
  sub_137 = sub_138;
  sub_136 = sub_137;
  if (instanciador_v_341) {
    sub_115 = sub_136;
  } else {
    sub_115 = sub_116;
  };
  sub_114 = sub_115;
  if (instanciador_inpSp) {
    v_3664 = sub_20;
  } else {
    v_3664 = sub_19;
  };
  if (instanciador_c_somP) {
    sub_165 = sub_66;
  } else {
    sub_165 = v_3664;
  };
  sub_164 = sub_165;
  sub_163 = sub_164;
  if (instanciador_ck_19_1) {
    sub_166 = false;
  } else {
    sub_166 = sub_164;
  };
  if (instanciador_lv) {
    v_3667 = sub_164;
  } else {
    v_3667 = sub_166;
  };
  if (instanciador_cv) {
    v_3668 = v_3667;
  } else {
    v_3668 = false;
  };
  if (instanciador_lv) {
    v_3665 = sub_166;
  } else {
    v_3665 = false;
  };
  if (instanciador_cv) {
    v_3666 = sub_163;
  } else {
    v_3666 = v_3665;
  };
  if (instanciador_c_vent) {
    sub_162 = v_3666;
  } else {
    sub_162 = v_3668;
  };
  if (instanciador_ck_17_1) {
    sub_167 = false;
  } else {
    sub_167 = sub_162;
  };
  if (instanciador_lx) {
    v_3671 = sub_167;
  } else {
    v_3671 = false;
  };
  if (instanciador_c_lampExt) {
    v_3672 = v_3671;
  } else {
    v_3672 = false;
  };
  if (instanciador_lx) {
    v_3669 = sub_162;
  } else {
    v_3669 = sub_167;
  };
  if (instanciador_c_lampExt) {
    v_3670 = sub_162;
  } else {
    v_3670 = v_3669;
  };
  if (instanciador_cx) {
    sub_161 = v_3670;
  } else {
    sub_161 = v_3672;
  };
  if (instanciador_ck_15_1) {
    sub_160 = sub_161;
  } else {
    sub_160 = false;
  };
  if (instanciador_l4) {
    v_3675 = sub_160;
  } else {
    v_3675 = sub_161;
  };
  if (instanciador_c4_lamp) {
    v_3676 = v_3675;
  } else {
    v_3676 = sub_161;
  };
  if (instanciador_l4) {
    v_3673 = false;
  } else {
    v_3673 = sub_160;
  };
  if (instanciador_c4_lamp) {
    v_3674 = false;
  } else {
    v_3674 = v_3673;
  };
  if (instanciador_c4) {
    sub_159 = v_3674;
  } else {
    sub_159 = v_3676;
  };
  if (instanciador_ck_13_1) {
    sub_168 = false;
  } else {
    sub_168 = sub_159;
  };
  if (instanciador_c3_lamp) {
    v_3679 = sub_168;
  } else {
    v_3679 = false;
  };
  if (instanciador_l3) {
    v_3680 = v_3679;
  } else {
    v_3680 = false;
  };
  if (instanciador_c3_lamp) {
    v_3677 = sub_159;
  } else {
    v_3677 = sub_168;
  };
  if (instanciador_l3) {
    v_3678 = sub_159;
  } else {
    v_3678 = v_3677;
  };
  if (instanciador_c3) {
    sub_158 = v_3678;
  } else {
    sub_158 = v_3680;
  };
  if (instanciador_ck_11_1) {
    sub_157 = sub_158;
  } else {
    sub_157 = false;
  };
  if (instanciador_c2_lamp) {
    v_3683 = sub_157;
  } else {
    v_3683 = sub_158;
  };
  if (instanciador_l2) {
    v_3684 = v_3683;
  } else {
    v_3684 = sub_158;
  };
  if (instanciador_c2_lamp) {
    v_3681 = false;
  } else {
    v_3681 = sub_157;
  };
  if (instanciador_l2) {
    v_3682 = false;
  } else {
    v_3682 = v_3681;
  };
  if (instanciador_c2) {
    sub_156 = v_3682;
  } else {
    sub_156 = v_3684;
  };
  if (instanciador_ck_9_1) {
    sub_155 = sub_156;
  } else {
    sub_155 = false;
  };
  if (instanciador_c1_lamp) {
    v_3687 = sub_155;
  } else {
    v_3687 = sub_156;
  };
  if (instanciador_l1) {
    v_3688 = v_3687;
  } else {
    v_3688 = sub_156;
  };
  if (instanciador_c1_lamp) {
    v_3685 = false;
  } else {
    v_3685 = sub_155;
  };
  if (instanciador_l1) {
    v_3686 = false;
  } else {
    v_3686 = v_3685;
  };
  if (instanciador_c1) {
    sub_154 = v_3686;
  } else {
    sub_154 = v_3688;
  };
  sub_153 = sub_154;
  sub_152 = sub_153;
  sub_189 = sub_130;
  sub_188 = sub_189;
  sub_187 = sub_188;
  sub_186 = sub_187;
  sub_185 = sub_186;
  sub_184 = sub_185;
  sub_183 = sub_184;
  sub_182 = sub_183;
  sub_181 = sub_182;
  sub_180 = sub_181;
  sub_179 = sub_180;
  sub_178 = sub_179;
  sub_177 = sub_178;
  sub_176 = sub_177;
  sub_175 = sub_176;
  sub_174 = sub_175;
  sub_173 = sub_174;
  sub_172 = sub_173;
  sub_171 = sub_172;
  sub_170 = sub_171;
  if (instanciador_neutro_input) {
    v_3689 = sub_170;
  } else {
    v_3689 = sub_120;
  };
  if (instanciador_ck_19_1) {
    sub_201 = sub_164;
  } else {
    sub_201 = false;
  };
  if (instanciador_lv) {
    v_3642 = false;
  } else {
    v_3642 = sub_201;
  };
  if (instanciador_cv) {
    v_3643 = v_3642;
  } else {
    v_3643 = sub_163;
  };
  if (instanciador_lv) {
    v_3640 = sub_201;
  } else {
    v_3640 = sub_164;
  };
  if (instanciador_cv) {
    v_3641 = false;
  } else {
    v_3641 = v_3640;
  };
  if (instanciador_c_vent) {
    sub_200 = v_3641;
  } else {
    sub_200 = v_3643;
  };
  if (instanciador_ck_17_1) {
    sub_199 = sub_200;
  } else {
    sub_199 = false;
  };
  if (instanciador_lx) {
    v_3646 = sub_199;
  } else {
    v_3646 = sub_200;
  };
  if (instanciador_c_lampExt) {
    v_3647 = v_3646;
  } else {
    v_3647 = sub_200;
  };
  if (instanciador_lx) {
    v_3644 = false;
  } else {
    v_3644 = sub_199;
  };
  if (instanciador_c_lampExt) {
    v_3645 = false;
  } else {
    v_3645 = v_3644;
  };
  if (instanciador_cx) {
    sub_198 = v_3645;
  } else {
    sub_198 = v_3647;
  };
  if (instanciador_ck_15_1) {
    sub_197 = sub_198;
  } else {
    sub_197 = false;
  };
  if (instanciador_l4) {
    v_3650 = sub_197;
  } else {
    v_3650 = sub_198;
  };
  if (instanciador_c4_lamp) {
    v_3651 = v_3650;
  } else {
    v_3651 = sub_198;
  };
  if (instanciador_l4) {
    v_3648 = false;
  } else {
    v_3648 = sub_197;
  };
  if (instanciador_c4_lamp) {
    v_3649 = false;
  } else {
    v_3649 = v_3648;
  };
  if (instanciador_c4) {
    sub_196 = v_3649;
  } else {
    sub_196 = v_3651;
  };
  if (instanciador_ck_13_1) {
    sub_195 = sub_196;
  } else {
    sub_195 = false;
  };
  if (instanciador_c3_lamp) {
    v_3654 = sub_195;
  } else {
    v_3654 = sub_196;
  };
  if (instanciador_l3) {
    v_3655 = v_3654;
  } else {
    v_3655 = sub_196;
  };
  if (instanciador_c3_lamp) {
    v_3652 = false;
  } else {
    v_3652 = sub_195;
  };
  if (instanciador_l3) {
    v_3653 = false;
  } else {
    v_3653 = v_3652;
  };
  if (instanciador_c3) {
    sub_194 = v_3653;
  } else {
    sub_194 = v_3655;
  };
  if (instanciador_ck_11_1) {
    sub_193 = sub_194;
  } else {
    sub_193 = false;
  };
  if (instanciador_c2_lamp) {
    v_3658 = sub_193;
  } else {
    v_3658 = sub_194;
  };
  if (instanciador_l2) {
    v_3659 = v_3658;
  } else {
    v_3659 = sub_194;
  };
  if (instanciador_c2_lamp) {
    v_3656 = false;
  } else {
    v_3656 = sub_193;
  };
  if (instanciador_l2) {
    v_3657 = false;
  } else {
    v_3657 = v_3656;
  };
  if (instanciador_c2) {
    sub_192 = v_3657;
  } else {
    sub_192 = v_3659;
  };
  if (instanciador_ck_9_1) {
    sub_191 = sub_192;
  } else {
    sub_191 = false;
  };
  if (instanciador_c1_lamp) {
    v_3662 = sub_191;
  } else {
    v_3662 = sub_192;
  };
  if (instanciador_l1) {
    v_3663 = v_3662;
  } else {
    v_3663 = sub_192;
  };
  if (instanciador_c1_lamp) {
    v_3660 = false;
  } else {
    v_3660 = sub_191;
  };
  if (instanciador_l1) {
    v_3661 = false;
  } else {
    v_3661 = v_3660;
  };
  if (instanciador_c1) {
    sub_190 = v_3661;
  } else {
    sub_190 = v_3663;
  };
  if (instanciador_neutro_input) {
    sub_169 = sub_170;
  } else {
    sub_169 = sub_190;
  };
  if (instanciador_seguranca_input) {
    v_3690 = sub_169;
  } else {
    v_3690 = v_3689;
  };
  if (instanciador_domingol_input) {
    v_3691 = sub_152;
  } else {
    v_3691 = v_3690;
  };
  if (instanciador_domingo_input) {
    sub_151 = sub_137;
  } else {
    sub_151 = v_3691;
  };
  if (instanciador_v_341) {
    v_3692 = sub_136;
  } else {
    v_3692 = sub_151;
  };
  if (instanciador_sexta_input) {
    sub_150 = sub_136;
  } else {
    sub_150 = v_3692;
  };
  if (instanciador_v_339) {
    v_3737 = sub_150;
  } else {
    v_3737 = sub_114;
  };
  if (instanciador_neutro_input) {
    sub_206 = sub_170;
  } else {
    sub_206 = sub_140;
  };
  if (instanciador_seguranca_input) {
    v_3639 = sub_169;
  } else {
    v_3639 = sub_206;
  };
  if (instanciador_domingol_input) {
    sub_205 = sub_152;
  } else {
    sub_205 = v_3639;
  };
  if (instanciador_domingo_input) {
    sub_204 = sub_137;
  } else {
    sub_204 = sub_205;
  };
  if (instanciador_v_341) {
    sub_203 = sub_136;
  } else {
    sub_203 = sub_204;
  };
  sub_202 = sub_203;
  if (instanciador_v_339) {
    v_3738 = sub_150;
  } else {
    v_3738 = sub_202;
  };
  if (instanciador_ebd_input) {
    sub_113 = v_3737;
  } else {
    sub_113 = v_3738;
  };
  if (instanciador_seguranca_input) {
    v_3635 = sub_190;
  } else {
    v_3635 = sub_170;
  };
  if (instanciador_domingol_input) {
    v_3636 = sub_152;
    v_3634 = sub_152;
  } else {
    v_3636 = v_3635;
    v_3634 = sub_138;
  };
  if (instanciador_domingo_input) {
    v_3637 = v_3634;
  } else {
    v_3637 = v_3636;
  };
  if (instanciador_domingol_input) {
    v_3633 = sub_152;
    v_3632 = sub_152;
  } else {
    v_3633 = sub_169;
    v_3632 = sub_206;
  };
  if (instanciador_domingo_input) {
    sub_208 = v_3632;
  } else {
    sub_208 = v_3633;
  };
  if (instanciador_v_341) {
    v_3638 = v_3637;
  } else {
    v_3638 = sub_208;
  };
  if (instanciador_sexta_input) {
    sub_207 = sub_136;
  } else {
    sub_207 = v_3638;
  };
  if (instanciador_neutro_input) {
    v = sub_170;
  } else {
    v = sub_154;
  };
  if (instanciador_seguranca_input) {
    sub_210 = sub_169;
  } else {
    sub_210 = v;
  };
  if (instanciador_domingo_input) {
    sub_209 = sub_137;
  } else {
    sub_209 = sub_210;
  };
  if (instanciador_v_341) {
    v_3853 = sub_205;
  } else {
    v_3853 = sub_209;
  };
  if (instanciador_sexta_input) {
    v_3854 = sub_136;
  } else {
    v_3854 = v_3853;
  };
  if (instanciador_v_339) {
    v_3855 = v_3854;
  } else {
    v_3855 = sub_207;
  };
  if (instanciador_ebd_input) {
    v_3856 = sub_116;
  } else {
    v_3856 = v_3855;
  };
  if (instanciador_v_340) {
    v_3857 = v_3856;
  } else {
    v_3857 = sub_113;
  };
  if (p_instanciador_csp) {
    sub_0 = v_3857;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_csp = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c_somP_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_c_vent, int instanciador_cv,
  int instanciador_cx, int instanciador_c4, int instanciador_c3,
  int instanciador_c2, int instanciador_c1, int instanciador_c_lampExt,
  int instanciador_c4_lamp, int instanciador_c3_lamp,
  int instanciador_c2_lamp, int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c_somP_out* _out) {
  
  int v_4079;
  int v_4078;
  int v_4077;
  int v_4076;
  int v_4075;
  int v_4074;
  int v_4073;
  int v_4072;
  int v_4071;
  int v_4070;
  int v_4069;
  int v_4068;
  int v_4067;
  int v_4066;
  int v_4065;
  int v_4064;
  int v_4063;
  int v_4062;
  int v_4061;
  int v_4060;
  int v_4059;
  int v_4058;
  int v_4057;
  int v_4056;
  int v_4055;
  int v_4054;
  int v_4053;
  int v_4052;
  int v_4051;
  int v_4050;
  int v_4049;
  int v_4048;
  int v_4047;
  int v_4046;
  int v_4045;
  int v_4044;
  int v_4043;
  int v_4042;
  int v_4041;
  int v_4040;
  int v_4039;
  int v_4038;
  int v_4037;
  int v_4036;
  int v_4035;
  int v_4034;
  int v_4033;
  int v_4032;
  int v_4031;
  int v_4030;
  int v_4029;
  int v_4028;
  int v_4027;
  int v_4026;
  int v_4025;
  int v_4024;
  int v_4023;
  int v_4022;
  int v_4021;
  int v_4020;
  int v_4019;
  int v_4018;
  int v_4017;
  int v_4016;
  int v_4015;
  int v_4014;
  int v_4013;
  int v_4012;
  int v_4011;
  int v_4010;
  int v_4009;
  int v_4008;
  int v_4007;
  int v_4006;
  int v_4005;
  int v_4004;
  int v_4003;
  int v_4002;
  int v_4001;
  int v_4000;
  int v_3999;
  int v_3998;
  int v_3997;
  int v_3996;
  int v_3995;
  int v_3994;
  int v_3993;
  int v_3992;
  int v_3991;
  int v_3990;
  int v_3989;
  int v_3988;
  int v_3987;
  int v_3986;
  int v_3985;
  int v_3984;
  int v_3983;
  int v_3982;
  int v_3981;
  int v_3980;
  int v_3979;
  int v_3978;
  int v_3977;
  int v_3976;
  int v_3975;
  int v_3974;
  int v_3973;
  int v_3972;
  int v_3971;
  int v_3970;
  int v_3969;
  int v_3968;
  int v_3967;
  int v_3966;
  int v_3965;
  int v_3964;
  int v_3963;
  int v_3962;
  int v_3961;
  int v_3960;
  int v_3959;
  int v_3958;
  int v_3957;
  int v_3956;
  int v_3955;
  int v_3954;
  int v_3953;
  int v_3952;
  int v_3951;
  int v_3950;
  int v_3949;
  int v_3948;
  int v_3947;
  int v_3946;
  int v_3945;
  int v_3944;
  int v_3943;
  int v_3942;
  int v_3941;
  int v_3940;
  int v_3939;
  int v_3938;
  int v_3937;
  int v_3936;
  int v_3935;
  int v_3934;
  int v_3933;
  int v_3932;
  int v_3931;
  int v_3930;
  int v_3929;
  int v_3928;
  int v_3927;
  int v_3926;
  int v_3925;
  int v_3924;
  int v_3923;
  int v_3922;
  int v_3921;
  int v_3920;
  int v_3919;
  int v_3918;
  int v_3917;
  int v_3916;
  int v_3915;
  int v_3914;
  int v_3913;
  int v_3912;
  int v_3911;
  int v_3910;
  int v_3909;
  int v_3908;
  int v_3907;
  int v_3906;
  int v_3905;
  int v_3904;
  int v_3903;
  int v_3902;
  int v_3901;
  int v_3900;
  int v_3899;
  int v_3898;
  int v_3897;
  int v_3896;
  int v_3895;
  int v_3894;
  int v_3893;
  int v_3892;
  int v_3891;
  int v_3890;
  int v_3889;
  int v_3888;
  int v_3887;
  int v_3886;
  int v_3885;
  int v_3884;
  int v_3883;
  int v_3882;
  int v_3881;
  int v_3880;
  int v_3879;
  int v_3878;
  int v_3877;
  int v_3876;
  int v_3875;
  int v_3874;
  int v_3873;
  int v_3872;
  int v_3871;
  int v_3870;
  int v_3869;
  int v_3868;
  int v_3867;
  int v_3866;
  int v_3865;
  int v_3864;
  int v_3863;
  int v_3862;
  int v_3861;
  int v_3860;
  int v_3859;
  int v_3858;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  int sub_187;
  int sub_188;
  int sub_189;
  int sub_190;
  int sub_191;
  int sub_192;
  int sub_193;
  int sub_194;
  int sub_195;
  int sub_196;
  int sub_197;
  int sub_198;
  int sub_199;
  int sub_200;
  int sub_201;
  sub_23 = false;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_29 = true;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  if (instanciador_ck_25_1) {
    sub_24 = sub_25;
  } else {
    sub_24 = sub_19;
  };
  if (instanciador_inpSp) {
    sub_18 = sub_19;
  } else {
    sub_18 = sub_24;
  };
  sub_17 = sub_18;
  if (instanciador_ck_19_1) {
    sub_30 = false;
  } else {
    sub_30 = sub_17;
  };
  if (instanciador_lv) {
    v_4047 = sub_17;
  } else {
    v_4047 = sub_30;
  };
  if (instanciador_cv) {
    v_4048 = v_4047;
  } else {
    v_4048 = false;
  };
  if (instanciador_lv) {
    v_4045 = sub_30;
  } else {
    v_4045 = false;
  };
  if (instanciador_cv) {
    v_4046 = sub_17;
  } else {
    v_4046 = v_4045;
  };
  if (instanciador_c_vent) {
    sub_16 = v_4046;
  } else {
    sub_16 = v_4048;
  };
  if (instanciador_ck_17_1) {
    sub_15 = sub_16;
  } else {
    sub_15 = false;
  };
  if (instanciador_lx) {
    v_4051 = sub_15;
    v_4049 = false;
  } else {
    v_4051 = sub_16;
    v_4049 = sub_15;
  };
  if (instanciador_c_lampExt) {
    v_4050 = false;
  } else {
    v_4050 = v_4049;
  };
  sub_31 = sub_16;
  if (instanciador_c_lampExt) {
    v_4052 = v_4051;
  } else {
    v_4052 = sub_31;
  };
  if (instanciador_cx) {
    sub_14 = v_4050;
  } else {
    sub_14 = v_4052;
  };
  if (instanciador_ck_15_1) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (instanciador_l4) {
    v_4055 = sub_13;
  } else {
    v_4055 = sub_14;
  };
  if (instanciador_c4_lamp) {
    v_4056 = v_4055;
  } else {
    v_4056 = sub_14;
  };
  if (instanciador_l4) {
    v_4053 = false;
  } else {
    v_4053 = sub_13;
  };
  if (instanciador_c4_lamp) {
    v_4054 = false;
  } else {
    v_4054 = v_4053;
  };
  if (instanciador_c4) {
    sub_12 = v_4054;
  } else {
    sub_12 = v_4056;
  };
  if (instanciador_ck_13_1) {
    sub_32 = false;
  } else {
    sub_32 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_4059 = sub_32;
  } else {
    v_4059 = false;
  };
  if (instanciador_l3) {
    v_4060 = v_4059;
  } else {
    v_4060 = false;
  };
  if (instanciador_c3_lamp) {
    v_4057 = sub_12;
  } else {
    v_4057 = sub_32;
  };
  if (instanciador_l3) {
    v_4058 = sub_12;
  } else {
    v_4058 = v_4057;
  };
  if (instanciador_c3) {
    sub_11 = v_4058;
  } else {
    sub_11 = v_4060;
  };
  if (instanciador_ck_11_1) {
    sub_33 = false;
  } else {
    sub_33 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_4063 = sub_33;
  } else {
    v_4063 = false;
  };
  if (instanciador_l2) {
    v_4064 = v_4063;
  } else {
    v_4064 = false;
  };
  if (instanciador_c2_lamp) {
    v_4061 = sub_11;
  } else {
    v_4061 = sub_33;
  };
  if (instanciador_l2) {
    v_4062 = sub_11;
  } else {
    v_4062 = v_4061;
  };
  if (instanciador_c2) {
    sub_10 = v_4062;
  } else {
    sub_10 = v_4064;
  };
  if (instanciador_ck_9_1) {
    sub_34 = false;
  } else {
    sub_34 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_4067 = sub_34;
  } else {
    v_4067 = false;
  };
  if (instanciador_l1) {
    v_4068 = v_4067;
  } else {
    v_4068 = false;
  };
  if (instanciador_c1_lamp) {
    v_4065 = sub_10;
  } else {
    v_4065 = sub_34;
  };
  if (instanciador_l1) {
    v_4066 = sub_10;
  } else {
    v_4066 = v_4065;
  };
  if (instanciador_c1) {
    sub_9 = v_4066;
  } else {
    sub_9 = v_4068;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (instanciador_ck_17_1) {
    sub_44 = false;
  } else {
    sub_44 = sub_16;
  };
  if (instanciador_lx) {
    v_4027 = sub_44;
  } else {
    v_4027 = false;
  };
  if (instanciador_c_lampExt) {
    v_4028 = v_4027;
  } else {
    v_4028 = false;
  };
  if (instanciador_lx) {
    v_4025 = sub_16;
  } else {
    v_4025 = sub_44;
  };
  if (instanciador_c_lampExt) {
    v_4026 = sub_31;
  } else {
    v_4026 = v_4025;
  };
  if (instanciador_cx) {
    sub_43 = v_4026;
  } else {
    sub_43 = v_4028;
  };
  if (instanciador_ck_15_1) {
    sub_45 = false;
  } else {
    sub_45 = sub_43;
  };
  if (instanciador_l4) {
    v_4031 = sub_45;
  } else {
    v_4031 = false;
  };
  if (instanciador_c4_lamp) {
    v_4032 = v_4031;
  } else {
    v_4032 = false;
  };
  if (instanciador_l4) {
    v_4029 = sub_43;
  } else {
    v_4029 = sub_45;
  };
  if (instanciador_c4_lamp) {
    v_4030 = sub_43;
  } else {
    v_4030 = v_4029;
  };
  if (instanciador_c4) {
    sub_42 = v_4030;
  } else {
    sub_42 = v_4032;
  };
  if (instanciador_ck_13_1) {
    sub_46 = false;
  } else {
    sub_46 = sub_42;
  };
  if (instanciador_c3_lamp) {
    v_4035 = sub_46;
  } else {
    v_4035 = false;
  };
  if (instanciador_l3) {
    v_4036 = v_4035;
  } else {
    v_4036 = false;
  };
  if (instanciador_c3_lamp) {
    v_4033 = sub_42;
  } else {
    v_4033 = sub_46;
  };
  if (instanciador_l3) {
    v_4034 = sub_42;
  } else {
    v_4034 = v_4033;
  };
  if (instanciador_c3) {
    sub_41 = v_4034;
  } else {
    sub_41 = v_4036;
  };
  if (instanciador_ck_11_1) {
    sub_47 = false;
  } else {
    sub_47 = sub_41;
  };
  if (instanciador_c2_lamp) {
    v_4039 = sub_47;
  } else {
    v_4039 = false;
  };
  if (instanciador_l2) {
    v_4040 = v_4039;
  } else {
    v_4040 = false;
  };
  if (instanciador_c2_lamp) {
    v_4037 = sub_41;
  } else {
    v_4037 = sub_47;
  };
  if (instanciador_l2) {
    v_4038 = sub_41;
  } else {
    v_4038 = v_4037;
  };
  if (instanciador_c2) {
    sub_40 = v_4038;
  } else {
    sub_40 = v_4040;
  };
  if (instanciador_ck_9_1) {
    sub_48 = false;
  } else {
    sub_48 = sub_40;
  };
  if (instanciador_c1_lamp) {
    v_4043 = sub_48;
  } else {
    v_4043 = false;
  };
  if (instanciador_l1) {
    v_4044 = v_4043;
  } else {
    v_4044 = false;
  };
  if (instanciador_c1_lamp) {
    v_4041 = sub_40;
  } else {
    v_4041 = sub_48;
  };
  if (instanciador_l1) {
    v_4042 = sub_40;
  } else {
    v_4042 = v_4041;
  };
  if (instanciador_c1) {
    sub_39 = v_4042;
  } else {
    sub_39 = v_4044;
  };
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  if (instanciador_v_341) {
    sub_4 = sub_35;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  sub_64 = sub_19;
  sub_63 = sub_64;
  sub_62 = sub_63;
  if (instanciador_ck_19_1) {
    sub_65 = false;
  } else {
    sub_65 = sub_63;
  };
  if (instanciador_lv) {
    v_3999 = sub_63;
  } else {
    v_3999 = sub_65;
  };
  if (instanciador_cv) {
    v_4000 = v_3999;
  } else {
    v_4000 = false;
  };
  if (instanciador_lv) {
    v_3997 = sub_65;
  } else {
    v_3997 = false;
  };
  if (instanciador_cv) {
    v_3998 = sub_62;
  } else {
    v_3998 = v_3997;
  };
  if (instanciador_c_vent) {
    sub_61 = v_3998;
  } else {
    sub_61 = v_4000;
  };
  if (instanciador_ck_17_1) {
    sub_66 = false;
  } else {
    sub_66 = sub_61;
  };
  if (instanciador_lx) {
    v_4003 = sub_66;
  } else {
    v_4003 = false;
  };
  if (instanciador_c_lampExt) {
    v_4004 = v_4003;
  } else {
    v_4004 = false;
  };
  if (instanciador_lx) {
    v_4001 = sub_61;
  } else {
    v_4001 = sub_66;
  };
  if (instanciador_c_lampExt) {
    v_4002 = sub_61;
  } else {
    v_4002 = v_4001;
  };
  if (instanciador_cx) {
    sub_60 = v_4002;
  } else {
    sub_60 = v_4004;
  };
  if (instanciador_ck_15_1) {
    sub_59 = sub_60;
  } else {
    sub_59 = false;
  };
  if (instanciador_l4) {
    v_4007 = sub_59;
  } else {
    v_4007 = sub_60;
  };
  if (instanciador_c4_lamp) {
    v_4008 = v_4007;
  } else {
    v_4008 = sub_60;
  };
  if (instanciador_l4) {
    v_4005 = false;
  } else {
    v_4005 = sub_59;
  };
  if (instanciador_c4_lamp) {
    v_4006 = false;
  } else {
    v_4006 = v_4005;
  };
  if (instanciador_c4) {
    sub_58 = v_4006;
  } else {
    sub_58 = v_4008;
  };
  if (instanciador_ck_13_1) {
    sub_67 = false;
  } else {
    sub_67 = sub_58;
  };
  if (instanciador_c3_lamp) {
    v_4011 = sub_67;
  } else {
    v_4011 = false;
  };
  if (instanciador_l3) {
    v_4012 = v_4011;
  } else {
    v_4012 = false;
  };
  if (instanciador_c3_lamp) {
    v_4009 = sub_58;
  } else {
    v_4009 = sub_67;
  };
  if (instanciador_l3) {
    v_4010 = sub_58;
  } else {
    v_4010 = v_4009;
  };
  if (instanciador_c3) {
    sub_57 = v_4010;
  } else {
    sub_57 = v_4012;
  };
  if (instanciador_ck_11_1) {
    sub_56 = sub_57;
  } else {
    sub_56 = false;
  };
  if (instanciador_c2_lamp) {
    v_4015 = sub_56;
  } else {
    v_4015 = sub_57;
  };
  if (instanciador_l2) {
    v_4016 = v_4015;
  } else {
    v_4016 = sub_57;
  };
  if (instanciador_c2_lamp) {
    v_4013 = false;
  } else {
    v_4013 = sub_56;
  };
  if (instanciador_l2) {
    v_4014 = false;
  } else {
    v_4014 = v_4013;
  };
  if (instanciador_c2) {
    sub_55 = v_4014;
  } else {
    sub_55 = v_4016;
  };
  if (instanciador_ck_9_1) {
    sub_54 = sub_55;
  } else {
    sub_54 = false;
  };
  if (instanciador_c1_lamp) {
    v_4019 = sub_54;
  } else {
    v_4019 = sub_55;
  };
  if (instanciador_l1) {
    v_4020 = v_4019;
  } else {
    v_4020 = sub_55;
  };
  if (instanciador_c1_lamp) {
    v_4017 = false;
  } else {
    v_4017 = sub_54;
  };
  if (instanciador_l1) {
    v_4018 = false;
  } else {
    v_4018 = v_4017;
  };
  if (instanciador_c1) {
    sub_53 = v_4018;
  } else {
    sub_53 = v_4020;
  };
  sub_52 = sub_53;
  sub_51 = sub_52;
  sub_85 = sub_62;
  sub_84 = sub_85;
  sub_83 = sub_84;
  sub_82 = sub_83;
  sub_81 = sub_82;
  sub_80 = sub_81;
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  if (instanciador_neutro_input) {
    v_4021 = sub_69;
  } else {
    v_4021 = sub_9;
  };
  if (instanciador_ck_19_1) {
    sub_97 = sub_63;
  } else {
    sub_97 = false;
  };
  if (instanciador_lv) {
    v_3975 = false;
  } else {
    v_3975 = sub_97;
  };
  if (instanciador_cv) {
    v_3976 = v_3975;
  } else {
    v_3976 = sub_62;
  };
  if (instanciador_lv) {
    v_3973 = sub_97;
  } else {
    v_3973 = sub_63;
  };
  if (instanciador_cv) {
    v_3974 = false;
  } else {
    v_3974 = v_3973;
  };
  if (instanciador_c_vent) {
    sub_96 = v_3974;
  } else {
    sub_96 = v_3976;
  };
  if (instanciador_ck_17_1) {
    sub_95 = sub_96;
  } else {
    sub_95 = false;
  };
  if (instanciador_lx) {
    v_3979 = sub_95;
  } else {
    v_3979 = sub_96;
  };
  if (instanciador_c_lampExt) {
    v_3980 = v_3979;
  } else {
    v_3980 = sub_96;
  };
  if (instanciador_lx) {
    v_3977 = false;
  } else {
    v_3977 = sub_95;
  };
  if (instanciador_c_lampExt) {
    v_3978 = false;
  } else {
    v_3978 = v_3977;
  };
  if (instanciador_cx) {
    sub_94 = v_3978;
  } else {
    sub_94 = v_3980;
  };
  if (instanciador_ck_15_1) {
    sub_93 = sub_94;
  } else {
    sub_93 = false;
  };
  if (instanciador_l4) {
    v_3983 = sub_93;
  } else {
    v_3983 = sub_94;
  };
  if (instanciador_c4_lamp) {
    v_3984 = v_3983;
  } else {
    v_3984 = sub_94;
  };
  if (instanciador_l4) {
    v_3981 = false;
  } else {
    v_3981 = sub_93;
  };
  if (instanciador_c4_lamp) {
    v_3982 = false;
  } else {
    v_3982 = v_3981;
  };
  if (instanciador_c4) {
    sub_92 = v_3982;
  } else {
    sub_92 = v_3984;
  };
  if (instanciador_ck_13_1) {
    sub_91 = sub_92;
  } else {
    sub_91 = false;
  };
  if (instanciador_c3_lamp) {
    v_3987 = sub_91;
  } else {
    v_3987 = sub_92;
  };
  if (instanciador_l3) {
    v_3988 = v_3987;
  } else {
    v_3988 = sub_92;
  };
  if (instanciador_c3_lamp) {
    v_3985 = false;
  } else {
    v_3985 = sub_91;
  };
  if (instanciador_l3) {
    v_3986 = false;
  } else {
    v_3986 = v_3985;
  };
  if (instanciador_c3) {
    sub_90 = v_3986;
  } else {
    sub_90 = v_3988;
  };
  if (instanciador_ck_11_1) {
    sub_89 = sub_90;
  } else {
    sub_89 = false;
  };
  if (instanciador_c2_lamp) {
    v_3991 = sub_89;
  } else {
    v_3991 = sub_90;
  };
  if (instanciador_l2) {
    v_3992 = v_3991;
  } else {
    v_3992 = sub_90;
  };
  if (instanciador_c2_lamp) {
    v_3989 = false;
  } else {
    v_3989 = sub_89;
  };
  if (instanciador_l2) {
    v_3990 = false;
  } else {
    v_3990 = v_3989;
  };
  if (instanciador_c2) {
    sub_88 = v_3990;
  } else {
    sub_88 = v_3992;
  };
  if (instanciador_ck_9_1) {
    sub_87 = sub_88;
  } else {
    sub_87 = false;
  };
  if (instanciador_c1_lamp) {
    v_3995 = sub_87;
  } else {
    v_3995 = sub_88;
  };
  if (instanciador_l1) {
    v_3996 = v_3995;
  } else {
    v_3996 = sub_88;
  };
  if (instanciador_c1_lamp) {
    v_3993 = false;
  } else {
    v_3993 = sub_87;
  };
  if (instanciador_l1) {
    v_3994 = false;
  } else {
    v_3994 = v_3993;
  };
  if (instanciador_c1) {
    sub_86 = v_3994;
  } else {
    sub_86 = v_3996;
  };
  if (instanciador_neutro_input) {
    sub_68 = sub_69;
  } else {
    sub_68 = sub_86;
  };
  if (instanciador_seguranca_input) {
    v_4022 = sub_68;
  } else {
    v_4022 = v_4021;
  };
  if (instanciador_domingol_input) {
    v_4023 = sub_51;
  } else {
    v_4023 = v_4022;
  };
  if (instanciador_domingo_input) {
    sub_50 = sub_36;
  } else {
    sub_50 = v_4023;
  };
  if (instanciador_v_341) {
    v_4024 = sub_35;
  } else {
    v_4024 = sub_50;
  };
  if (instanciador_sexta_input) {
    sub_49 = sub_35;
  } else {
    sub_49 = v_4024;
  };
  if (instanciador_v_339) {
    v_4069 = sub_49;
  } else {
    v_4069 = sub_3;
  };
  if (instanciador_neutro_input) {
    sub_102 = sub_69;
  } else {
    sub_102 = sub_39;
  };
  if (instanciador_seguranca_input) {
    v_3972 = sub_68;
  } else {
    v_3972 = sub_102;
  };
  if (instanciador_domingol_input) {
    sub_101 = sub_51;
  } else {
    sub_101 = v_3972;
  };
  if (instanciador_domingo_input) {
    sub_100 = sub_36;
  } else {
    sub_100 = sub_101;
  };
  if (instanciador_v_341) {
    sub_99 = sub_35;
  } else {
    sub_99 = sub_100;
  };
  sub_98 = sub_99;
  if (instanciador_v_339) {
    v_4070 = sub_49;
  } else {
    v_4070 = sub_98;
  };
  if (instanciador_ebd_input) {
    sub_2 = v_4069;
  } else {
    sub_2 = v_4070;
  };
  if (instanciador_seguranca_input) {
    v_3968 = sub_86;
  } else {
    v_3968 = sub_69;
  };
  if (instanciador_domingol_input) {
    v_3969 = sub_51;
    v_3967 = sub_51;
  } else {
    v_3969 = v_3968;
    v_3967 = sub_37;
  };
  if (instanciador_domingo_input) {
    v_3970 = v_3967;
  } else {
    v_3970 = v_3969;
  };
  if (instanciador_domingol_input) {
    v_3966 = sub_51;
    v_3965 = sub_51;
  } else {
    v_3966 = sub_68;
    v_3965 = sub_102;
  };
  if (instanciador_domingo_input) {
    sub_104 = v_3965;
  } else {
    sub_104 = v_3966;
  };
  if (instanciador_v_341) {
    v_3971 = v_3970;
  } else {
    v_3971 = sub_104;
  };
  if (instanciador_sexta_input) {
    sub_103 = sub_35;
  } else {
    sub_103 = v_3971;
  };
  if (instanciador_neutro_input) {
    v_3964 = sub_69;
  } else {
    v_3964 = sub_53;
  };
  if (instanciador_seguranca_input) {
    sub_106 = sub_68;
  } else {
    sub_106 = v_3964;
  };
  if (instanciador_domingo_input) {
    sub_105 = sub_36;
  } else {
    sub_105 = sub_106;
  };
  if (instanciador_v_341) {
    v_4071 = sub_101;
  } else {
    v_4071 = sub_105;
  };
  if (instanciador_sexta_input) {
    v_4072 = sub_35;
  } else {
    v_4072 = v_4071;
  };
  if (instanciador_v_339) {
    v_4073 = v_4072;
  } else {
    v_4073 = sub_103;
  };
  if (instanciador_ebd_input) {
    v_4074 = sub_5;
  } else {
    v_4074 = v_4073;
  };
  if (instanciador_v_340) {
    sub_1 = v_4074;
  } else {
    sub_1 = sub_2;
  };
  sub_124 = sub_25;
  sub_123 = sub_124;
  sub_122 = sub_123;
  if (instanciador_ck_19_1) {
    sub_125 = false;
  } else {
    sub_125 = sub_123;
  };
  if (instanciador_lv) {
    v_3940 = sub_123;
  } else {
    v_3940 = sub_125;
  };
  if (instanciador_cv) {
    v_3941 = v_3940;
  } else {
    v_3941 = false;
  };
  if (instanciador_lv) {
    v_3938 = sub_125;
  } else {
    v_3938 = false;
  };
  if (instanciador_cv) {
    v_3939 = sub_122;
  } else {
    v_3939 = v_3938;
  };
  if (instanciador_c_vent) {
    sub_121 = v_3939;
  } else {
    sub_121 = v_3941;
  };
  if (instanciador_ck_17_1) {
    sub_120 = sub_121;
  } else {
    sub_120 = false;
  };
  if (instanciador_lx) {
    v_3944 = sub_120;
    v_3942 = false;
  } else {
    v_3944 = sub_121;
    v_3942 = sub_120;
  };
  if (instanciador_c_lampExt) {
    v_3943 = false;
  } else {
    v_3943 = v_3942;
  };
  sub_126 = sub_121;
  if (instanciador_c_lampExt) {
    v_3945 = v_3944;
  } else {
    v_3945 = sub_126;
  };
  if (instanciador_cx) {
    sub_119 = v_3943;
  } else {
    sub_119 = v_3945;
  };
  if (instanciador_ck_15_1) {
    sub_118 = sub_119;
  } else {
    sub_118 = false;
  };
  if (instanciador_l4) {
    v_3948 = sub_118;
  } else {
    v_3948 = sub_119;
  };
  if (instanciador_c4_lamp) {
    v_3949 = v_3948;
  } else {
    v_3949 = sub_119;
  };
  if (instanciador_l4) {
    v_3946 = false;
  } else {
    v_3946 = sub_118;
  };
  if (instanciador_c4_lamp) {
    v_3947 = false;
  } else {
    v_3947 = v_3946;
  };
  if (instanciador_c4) {
    sub_117 = v_3947;
  } else {
    sub_117 = v_3949;
  };
  if (instanciador_ck_13_1) {
    sub_127 = false;
  } else {
    sub_127 = sub_117;
  };
  if (instanciador_c3_lamp) {
    v_3952 = sub_127;
  } else {
    v_3952 = false;
  };
  if (instanciador_l3) {
    v_3953 = v_3952;
  } else {
    v_3953 = false;
  };
  if (instanciador_c3_lamp) {
    v_3950 = sub_117;
  } else {
    v_3950 = sub_127;
  };
  if (instanciador_l3) {
    v_3951 = sub_117;
  } else {
    v_3951 = v_3950;
  };
  if (instanciador_c3) {
    sub_116 = v_3951;
  } else {
    sub_116 = v_3953;
  };
  if (instanciador_ck_11_1) {
    sub_128 = false;
  } else {
    sub_128 = sub_116;
  };
  if (instanciador_c2_lamp) {
    v_3956 = sub_128;
  } else {
    v_3956 = false;
  };
  if (instanciador_l2) {
    v_3957 = v_3956;
  } else {
    v_3957 = false;
  };
  if (instanciador_c2_lamp) {
    v_3954 = sub_116;
  } else {
    v_3954 = sub_128;
  };
  if (instanciador_l2) {
    v_3955 = sub_116;
  } else {
    v_3955 = v_3954;
  };
  if (instanciador_c2) {
    sub_115 = v_3955;
  } else {
    sub_115 = v_3957;
  };
  if (instanciador_ck_9_1) {
    sub_129 = false;
  } else {
    sub_129 = sub_115;
  };
  if (instanciador_c1_lamp) {
    v_3960 = sub_129;
  } else {
    v_3960 = false;
  };
  if (instanciador_l1) {
    v_3961 = v_3960;
  } else {
    v_3961 = false;
  };
  if (instanciador_c1_lamp) {
    v_3958 = sub_115;
  } else {
    v_3958 = sub_129;
  };
  if (instanciador_l1) {
    v_3959 = sub_115;
  } else {
    v_3959 = v_3958;
  };
  if (instanciador_c1) {
    sub_114 = v_3959;
  } else {
    sub_114 = v_3961;
  };
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  if (instanciador_ck_17_1) {
    sub_139 = false;
  } else {
    sub_139 = sub_121;
  };
  if (instanciador_lx) {
    v_3920 = sub_139;
  } else {
    v_3920 = false;
  };
  if (instanciador_c_lampExt) {
    v_3921 = v_3920;
  } else {
    v_3921 = false;
  };
  if (instanciador_lx) {
    v_3918 = sub_121;
  } else {
    v_3918 = sub_139;
  };
  if (instanciador_c_lampExt) {
    v_3919 = sub_126;
  } else {
    v_3919 = v_3918;
  };
  if (instanciador_cx) {
    sub_138 = v_3919;
  } else {
    sub_138 = v_3921;
  };
  if (instanciador_ck_15_1) {
    sub_140 = false;
  } else {
    sub_140 = sub_138;
  };
  if (instanciador_l4) {
    v_3924 = sub_140;
  } else {
    v_3924 = false;
  };
  if (instanciador_c4_lamp) {
    v_3925 = v_3924;
  } else {
    v_3925 = false;
  };
  if (instanciador_l4) {
    v_3922 = sub_138;
  } else {
    v_3922 = sub_140;
  };
  if (instanciador_c4_lamp) {
    v_3923 = sub_138;
  } else {
    v_3923 = v_3922;
  };
  if (instanciador_c4) {
    sub_137 = v_3923;
  } else {
    sub_137 = v_3925;
  };
  if (instanciador_ck_13_1) {
    sub_141 = false;
  } else {
    sub_141 = sub_137;
  };
  if (instanciador_c3_lamp) {
    v_3928 = sub_141;
  } else {
    v_3928 = false;
  };
  if (instanciador_l3) {
    v_3929 = v_3928;
  } else {
    v_3929 = false;
  };
  if (instanciador_c3_lamp) {
    v_3926 = sub_137;
  } else {
    v_3926 = sub_141;
  };
  if (instanciador_l3) {
    v_3927 = sub_137;
  } else {
    v_3927 = v_3926;
  };
  if (instanciador_c3) {
    sub_136 = v_3927;
  } else {
    sub_136 = v_3929;
  };
  if (instanciador_ck_11_1) {
    sub_142 = false;
  } else {
    sub_142 = sub_136;
  };
  if (instanciador_c2_lamp) {
    v_3932 = sub_142;
  } else {
    v_3932 = false;
  };
  if (instanciador_l2) {
    v_3933 = v_3932;
  } else {
    v_3933 = false;
  };
  if (instanciador_c2_lamp) {
    v_3930 = sub_136;
  } else {
    v_3930 = sub_142;
  };
  if (instanciador_l2) {
    v_3931 = sub_136;
  } else {
    v_3931 = v_3930;
  };
  if (instanciador_c2) {
    sub_135 = v_3931;
  } else {
    sub_135 = v_3933;
  };
  if (instanciador_ck_9_1) {
    sub_143 = false;
  } else {
    sub_143 = sub_135;
  };
  if (instanciador_c1_lamp) {
    v_3936 = sub_143;
  } else {
    v_3936 = false;
  };
  if (instanciador_l1) {
    v_3937 = v_3936;
  } else {
    v_3937 = false;
  };
  if (instanciador_c1_lamp) {
    v_3934 = sub_135;
  } else {
    v_3934 = sub_143;
  };
  if (instanciador_l1) {
    v_3935 = sub_135;
  } else {
    v_3935 = v_3934;
  };
  if (instanciador_c1) {
    sub_134 = v_3935;
  } else {
    sub_134 = v_3937;
  };
  sub_133 = sub_134;
  sub_132 = sub_133;
  sub_131 = sub_132;
  sub_130 = sub_131;
  if (instanciador_v_341) {
    sub_109 = sub_130;
  } else {
    sub_109 = sub_110;
  };
  sub_108 = sub_109;
  if (instanciador_inpSp) {
    sub_159 = sub_24;
  } else {
    sub_159 = sub_25;
  };
  sub_158 = sub_159;
  sub_157 = sub_158;
  if (instanciador_ck_19_1) {
    sub_160 = false;
  } else {
    sub_160 = sub_158;
  };
  if (instanciador_lv) {
    v_3892 = sub_158;
  } else {
    v_3892 = sub_160;
  };
  if (instanciador_cv) {
    v_3893 = v_3892;
  } else {
    v_3893 = false;
  };
  if (instanciador_lv) {
    v_3890 = sub_160;
  } else {
    v_3890 = false;
  };
  if (instanciador_cv) {
    v_3891 = sub_157;
  } else {
    v_3891 = v_3890;
  };
  if (instanciador_c_vent) {
    sub_156 = v_3891;
  } else {
    sub_156 = v_3893;
  };
  if (instanciador_ck_17_1) {
    sub_161 = false;
  } else {
    sub_161 = sub_156;
  };
  if (instanciador_lx) {
    v_3896 = sub_161;
  } else {
    v_3896 = false;
  };
  if (instanciador_c_lampExt) {
    v_3897 = v_3896;
  } else {
    v_3897 = false;
  };
  if (instanciador_lx) {
    v_3894 = sub_156;
  } else {
    v_3894 = sub_161;
  };
  if (instanciador_c_lampExt) {
    v_3895 = sub_156;
  } else {
    v_3895 = v_3894;
  };
  if (instanciador_cx) {
    sub_155 = v_3895;
  } else {
    sub_155 = v_3897;
  };
  if (instanciador_ck_15_1) {
    sub_154 = sub_155;
  } else {
    sub_154 = false;
  };
  if (instanciador_l4) {
    v_3900 = sub_154;
  } else {
    v_3900 = sub_155;
  };
  if (instanciador_c4_lamp) {
    v_3901 = v_3900;
  } else {
    v_3901 = sub_155;
  };
  if (instanciador_l4) {
    v_3898 = false;
  } else {
    v_3898 = sub_154;
  };
  if (instanciador_c4_lamp) {
    v_3899 = false;
  } else {
    v_3899 = v_3898;
  };
  if (instanciador_c4) {
    sub_153 = v_3899;
  } else {
    sub_153 = v_3901;
  };
  if (instanciador_ck_13_1) {
    sub_162 = false;
  } else {
    sub_162 = sub_153;
  };
  if (instanciador_c3_lamp) {
    v_3904 = sub_162;
  } else {
    v_3904 = false;
  };
  if (instanciador_l3) {
    v_3905 = v_3904;
  } else {
    v_3905 = false;
  };
  if (instanciador_c3_lamp) {
    v_3902 = sub_153;
  } else {
    v_3902 = sub_162;
  };
  if (instanciador_l3) {
    v_3903 = sub_153;
  } else {
    v_3903 = v_3902;
  };
  if (instanciador_c3) {
    sub_152 = v_3903;
  } else {
    sub_152 = v_3905;
  };
  if (instanciador_ck_11_1) {
    sub_151 = sub_152;
  } else {
    sub_151 = false;
  };
  if (instanciador_c2_lamp) {
    v_3908 = sub_151;
  } else {
    v_3908 = sub_152;
  };
  if (instanciador_l2) {
    v_3909 = v_3908;
  } else {
    v_3909 = sub_152;
  };
  if (instanciador_c2_lamp) {
    v_3906 = false;
  } else {
    v_3906 = sub_151;
  };
  if (instanciador_l2) {
    v_3907 = false;
  } else {
    v_3907 = v_3906;
  };
  if (instanciador_c2) {
    sub_150 = v_3907;
  } else {
    sub_150 = v_3909;
  };
  if (instanciador_ck_9_1) {
    sub_149 = sub_150;
  } else {
    sub_149 = false;
  };
  if (instanciador_c1_lamp) {
    v_3912 = sub_149;
  } else {
    v_3912 = sub_150;
  };
  if (instanciador_l1) {
    v_3913 = v_3912;
  } else {
    v_3913 = sub_150;
  };
  if (instanciador_c1_lamp) {
    v_3910 = false;
  } else {
    v_3910 = sub_149;
  };
  if (instanciador_l1) {
    v_3911 = false;
  } else {
    v_3911 = v_3910;
  };
  if (instanciador_c1) {
    sub_148 = v_3911;
  } else {
    sub_148 = v_3913;
  };
  sub_147 = sub_148;
  sub_146 = sub_147;
  sub_180 = sub_122;
  sub_179 = sub_180;
  sub_178 = sub_179;
  sub_177 = sub_178;
  sub_176 = sub_177;
  sub_175 = sub_176;
  sub_174 = sub_175;
  sub_173 = sub_174;
  sub_172 = sub_173;
  sub_171 = sub_172;
  sub_170 = sub_171;
  sub_169 = sub_170;
  sub_168 = sub_169;
  sub_167 = sub_168;
  sub_166 = sub_167;
  sub_165 = sub_166;
  sub_164 = sub_165;
  if (instanciador_neutro_input) {
    v_3914 = sub_164;
  } else {
    v_3914 = sub_114;
  };
  if (instanciador_ck_19_1) {
    sub_192 = sub_158;
  } else {
    sub_192 = false;
  };
  if (instanciador_lv) {
    v_3868 = false;
  } else {
    v_3868 = sub_192;
  };
  if (instanciador_cv) {
    v_3869 = v_3868;
  } else {
    v_3869 = sub_157;
  };
  if (instanciador_lv) {
    v_3866 = sub_192;
  } else {
    v_3866 = sub_158;
  };
  if (instanciador_cv) {
    v_3867 = false;
  } else {
    v_3867 = v_3866;
  };
  if (instanciador_c_vent) {
    sub_191 = v_3867;
  } else {
    sub_191 = v_3869;
  };
  if (instanciador_ck_17_1) {
    sub_190 = sub_191;
  } else {
    sub_190 = false;
  };
  if (instanciador_lx) {
    v_3872 = sub_190;
  } else {
    v_3872 = sub_191;
  };
  if (instanciador_c_lampExt) {
    v_3873 = v_3872;
  } else {
    v_3873 = sub_191;
  };
  if (instanciador_lx) {
    v_3870 = false;
  } else {
    v_3870 = sub_190;
  };
  if (instanciador_c_lampExt) {
    v_3871 = false;
  } else {
    v_3871 = v_3870;
  };
  if (instanciador_cx) {
    sub_189 = v_3871;
  } else {
    sub_189 = v_3873;
  };
  if (instanciador_ck_15_1) {
    sub_188 = sub_189;
  } else {
    sub_188 = false;
  };
  if (instanciador_l4) {
    v_3876 = sub_188;
  } else {
    v_3876 = sub_189;
  };
  if (instanciador_c4_lamp) {
    v_3877 = v_3876;
  } else {
    v_3877 = sub_189;
  };
  if (instanciador_l4) {
    v_3874 = false;
  } else {
    v_3874 = sub_188;
  };
  if (instanciador_c4_lamp) {
    v_3875 = false;
  } else {
    v_3875 = v_3874;
  };
  if (instanciador_c4) {
    sub_187 = v_3875;
  } else {
    sub_187 = v_3877;
  };
  if (instanciador_ck_13_1) {
    sub_186 = sub_187;
  } else {
    sub_186 = false;
  };
  if (instanciador_c3_lamp) {
    v_3880 = sub_186;
  } else {
    v_3880 = sub_187;
  };
  if (instanciador_l3) {
    v_3881 = v_3880;
  } else {
    v_3881 = sub_187;
  };
  if (instanciador_c3_lamp) {
    v_3878 = false;
  } else {
    v_3878 = sub_186;
  };
  if (instanciador_l3) {
    v_3879 = false;
  } else {
    v_3879 = v_3878;
  };
  if (instanciador_c3) {
    sub_185 = v_3879;
  } else {
    sub_185 = v_3881;
  };
  if (instanciador_ck_11_1) {
    sub_184 = sub_185;
  } else {
    sub_184 = false;
  };
  if (instanciador_c2_lamp) {
    v_3884 = sub_184;
  } else {
    v_3884 = sub_185;
  };
  if (instanciador_l2) {
    v_3885 = v_3884;
  } else {
    v_3885 = sub_185;
  };
  if (instanciador_c2_lamp) {
    v_3882 = false;
  } else {
    v_3882 = sub_184;
  };
  if (instanciador_l2) {
    v_3883 = false;
  } else {
    v_3883 = v_3882;
  };
  if (instanciador_c2) {
    sub_183 = v_3883;
  } else {
    sub_183 = v_3885;
  };
  if (instanciador_ck_9_1) {
    sub_182 = sub_183;
  } else {
    sub_182 = false;
  };
  if (instanciador_c1_lamp) {
    v_3888 = sub_182;
  } else {
    v_3888 = sub_183;
  };
  if (instanciador_l1) {
    v_3889 = v_3888;
  } else {
    v_3889 = sub_183;
  };
  if (instanciador_c1_lamp) {
    v_3886 = false;
  } else {
    v_3886 = sub_182;
  };
  if (instanciador_l1) {
    v_3887 = false;
  } else {
    v_3887 = v_3886;
  };
  if (instanciador_c1) {
    sub_181 = v_3887;
  } else {
    sub_181 = v_3889;
  };
  if (instanciador_neutro_input) {
    sub_163 = sub_164;
  } else {
    sub_163 = sub_181;
  };
  if (instanciador_seguranca_input) {
    v_3915 = sub_163;
  } else {
    v_3915 = v_3914;
  };
  if (instanciador_domingol_input) {
    v_3916 = sub_146;
  } else {
    v_3916 = v_3915;
  };
  if (instanciador_domingo_input) {
    sub_145 = sub_131;
  } else {
    sub_145 = v_3916;
  };
  if (instanciador_v_341) {
    v_3917 = sub_130;
  } else {
    v_3917 = sub_145;
  };
  if (instanciador_sexta_input) {
    sub_144 = sub_130;
  } else {
    sub_144 = v_3917;
  };
  if (instanciador_v_339) {
    v_3962 = sub_144;
  } else {
    v_3962 = sub_108;
  };
  if (instanciador_neutro_input) {
    sub_197 = sub_164;
  } else {
    sub_197 = sub_134;
  };
  if (instanciador_seguranca_input) {
    v_3865 = sub_163;
  } else {
    v_3865 = sub_197;
  };
  if (instanciador_domingol_input) {
    sub_196 = sub_146;
  } else {
    sub_196 = v_3865;
  };
  if (instanciador_domingo_input) {
    sub_195 = sub_131;
  } else {
    sub_195 = sub_196;
  };
  if (instanciador_v_341) {
    sub_194 = sub_130;
  } else {
    sub_194 = sub_195;
  };
  sub_193 = sub_194;
  if (instanciador_v_339) {
    v_3963 = sub_144;
  } else {
    v_3963 = sub_193;
  };
  if (instanciador_ebd_input) {
    sub_107 = v_3962;
  } else {
    sub_107 = v_3963;
  };
  if (instanciador_seguranca_input) {
    v_3861 = sub_181;
  } else {
    v_3861 = sub_164;
  };
  if (instanciador_domingol_input) {
    v_3862 = sub_146;
    v_3860 = sub_146;
  } else {
    v_3862 = v_3861;
    v_3860 = sub_132;
  };
  if (instanciador_domingo_input) {
    v_3863 = v_3860;
  } else {
    v_3863 = v_3862;
  };
  if (instanciador_domingol_input) {
    v_3859 = sub_146;
    v_3858 = sub_146;
  } else {
    v_3859 = sub_163;
    v_3858 = sub_197;
  };
  if (instanciador_domingo_input) {
    sub_199 = v_3858;
  } else {
    sub_199 = v_3859;
  };
  if (instanciador_v_341) {
    v_3864 = v_3863;
  } else {
    v_3864 = sub_199;
  };
  if (instanciador_sexta_input) {
    sub_198 = sub_130;
  } else {
    sub_198 = v_3864;
  };
  if (instanciador_neutro_input) {
    v = sub_164;
  } else {
    v = sub_148;
  };
  if (instanciador_seguranca_input) {
    sub_201 = sub_163;
  } else {
    sub_201 = v;
  };
  if (instanciador_domingo_input) {
    sub_200 = sub_131;
  } else {
    sub_200 = sub_201;
  };
  if (instanciador_v_341) {
    v_4075 = sub_196;
  } else {
    v_4075 = sub_200;
  };
  if (instanciador_sexta_input) {
    v_4076 = sub_130;
  } else {
    v_4076 = v_4075;
  };
  if (instanciador_v_339) {
    v_4077 = v_4076;
  } else {
    v_4077 = sub_198;
  };
  if (instanciador_ebd_input) {
    v_4078 = sub_110;
  } else {
    v_4078 = v_4077;
  };
  if (instanciador_v_340) {
    v_4079 = v_4078;
  } else {
    v_4079 = sub_107;
  };
  if (p_instanciador_c_somP) {
    sub_0 = v_4079;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c_somP = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c_vent_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_cv, int instanciador_cx,
  int instanciador_c4, int instanciador_c3, int instanciador_c2,
  int instanciador_c1, int instanciador_c_lampExt, int instanciador_c4_lamp,
  int instanciador_c3_lamp, int instanciador_c2_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c_vent_out* _out) {
  
  int v_4273;
  int v_4272;
  int v_4271;
  int v_4270;
  int v_4269;
  int v_4268;
  int v_4267;
  int v_4266;
  int v_4265;
  int v_4264;
  int v_4263;
  int v_4262;
  int v_4261;
  int v_4260;
  int v_4259;
  int v_4258;
  int v_4257;
  int v_4256;
  int v_4255;
  int v_4254;
  int v_4253;
  int v_4252;
  int v_4251;
  int v_4250;
  int v_4249;
  int v_4248;
  int v_4247;
  int v_4246;
  int v_4245;
  int v_4244;
  int v_4243;
  int v_4242;
  int v_4241;
  int v_4240;
  int v_4239;
  int v_4238;
  int v_4237;
  int v_4236;
  int v_4235;
  int v_4234;
  int v_4233;
  int v_4232;
  int v_4231;
  int v_4230;
  int v_4229;
  int v_4228;
  int v_4227;
  int v_4226;
  int v_4225;
  int v_4224;
  int v_4223;
  int v_4222;
  int v_4221;
  int v_4220;
  int v_4219;
  int v_4218;
  int v_4217;
  int v_4216;
  int v_4215;
  int v_4214;
  int v_4213;
  int v_4212;
  int v_4211;
  int v_4210;
  int v_4209;
  int v_4208;
  int v_4207;
  int v_4206;
  int v_4205;
  int v_4204;
  int v_4203;
  int v_4202;
  int v_4201;
  int v_4200;
  int v_4199;
  int v_4198;
  int v_4197;
  int v_4196;
  int v_4195;
  int v_4194;
  int v_4193;
  int v_4192;
  int v_4191;
  int v_4190;
  int v_4189;
  int v_4188;
  int v_4187;
  int v_4186;
  int v_4185;
  int v_4184;
  int v_4183;
  int v_4182;
  int v_4181;
  int v_4180;
  int v_4179;
  int v_4178;
  int v_4177;
  int v_4176;
  int v_4175;
  int v_4174;
  int v_4173;
  int v_4172;
  int v_4171;
  int v_4170;
  int v_4169;
  int v_4168;
  int v_4167;
  int v_4166;
  int v_4165;
  int v_4164;
  int v_4163;
  int v_4162;
  int v_4161;
  int v_4160;
  int v_4159;
  int v_4158;
  int v_4157;
  int v_4156;
  int v_4155;
  int v_4154;
  int v_4153;
  int v_4152;
  int v_4151;
  int v_4150;
  int v_4149;
  int v_4148;
  int v_4147;
  int v_4146;
  int v_4145;
  int v_4144;
  int v_4143;
  int v_4142;
  int v_4141;
  int v_4140;
  int v_4139;
  int v_4138;
  int v_4137;
  int v_4136;
  int v_4135;
  int v_4134;
  int v_4133;
  int v_4132;
  int v_4131;
  int v_4130;
  int v_4129;
  int v_4128;
  int v_4127;
  int v_4126;
  int v_4125;
  int v_4124;
  int v_4123;
  int v_4122;
  int v_4121;
  int v_4120;
  int v_4119;
  int v_4118;
  int v_4117;
  int v_4116;
  int v_4115;
  int v_4114;
  int v_4113;
  int v_4112;
  int v_4111;
  int v_4110;
  int v_4109;
  int v_4108;
  int v_4107;
  int v_4106;
  int v_4105;
  int v_4104;
  int v_4103;
  int v_4102;
  int v_4101;
  int v_4100;
  int v_4099;
  int v_4098;
  int v_4097;
  int v_4096;
  int v_4095;
  int v_4094;
  int v_4093;
  int v_4092;
  int v_4091;
  int v_4090;
  int v_4089;
  int v_4088;
  int v_4087;
  int v_4086;
  int v_4085;
  int v_4084;
  int v_4083;
  int v_4082;
  int v_4081;
  int v_4080;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  int sub_180;
  int sub_181;
  int sub_182;
  int sub_183;
  int sub_184;
  int sub_185;
  int sub_186;
  sub_23 = false;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_31 = true;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  if (instanciador_ck_19_1) {
    sub_24 = sub_25;
  } else {
    sub_24 = sub_17;
  };
  if (instanciador_lv) {
    v_4242 = sub_17;
  } else {
    v_4242 = sub_24;
  };
  if (instanciador_ck_19_1) {
    v_4241 = false;
  } else {
    v_4241 = sub_25;
  };
  if (instanciador_lv) {
    sub_32 = v_4241;
  } else {
    sub_32 = false;
  };
  if (instanciador_cv) {
    sub_16 = v_4242;
  } else {
    sub_16 = sub_32;
  };
  if (instanciador_ck_17_1) {
    sub_15 = sub_16;
  } else {
    sub_15 = false;
  };
  if (instanciador_lx) {
    v_4245 = sub_15;
    v_4243 = false;
  } else {
    v_4245 = sub_16;
    v_4243 = sub_15;
  };
  if (instanciador_c_lampExt) {
    v_4244 = false;
  } else {
    v_4244 = v_4243;
  };
  sub_33 = sub_16;
  if (instanciador_c_lampExt) {
    v_4246 = v_4245;
  } else {
    v_4246 = sub_33;
  };
  if (instanciador_cx) {
    sub_14 = v_4244;
  } else {
    sub_14 = v_4246;
  };
  if (instanciador_ck_15_1) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (instanciador_l4) {
    v_4249 = sub_13;
  } else {
    v_4249 = sub_14;
  };
  if (instanciador_c4_lamp) {
    v_4250 = v_4249;
  } else {
    v_4250 = sub_14;
  };
  if (instanciador_l4) {
    v_4247 = false;
  } else {
    v_4247 = sub_13;
  };
  if (instanciador_c4_lamp) {
    v_4248 = false;
  } else {
    v_4248 = v_4247;
  };
  if (instanciador_c4) {
    sub_12 = v_4248;
  } else {
    sub_12 = v_4250;
  };
  if (instanciador_ck_13_1) {
    sub_34 = false;
  } else {
    sub_34 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_4253 = sub_34;
  } else {
    v_4253 = false;
  };
  if (instanciador_l3) {
    v_4254 = v_4253;
  } else {
    v_4254 = false;
  };
  if (instanciador_c3_lamp) {
    v_4251 = sub_12;
  } else {
    v_4251 = sub_34;
  };
  if (instanciador_l3) {
    v_4252 = sub_12;
  } else {
    v_4252 = v_4251;
  };
  if (instanciador_c3) {
    sub_11 = v_4252;
  } else {
    sub_11 = v_4254;
  };
  if (instanciador_ck_11_1) {
    sub_35 = false;
  } else {
    sub_35 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_4257 = sub_35;
  } else {
    v_4257 = false;
  };
  if (instanciador_l2) {
    v_4258 = v_4257;
  } else {
    v_4258 = false;
  };
  if (instanciador_c2_lamp) {
    v_4255 = sub_11;
  } else {
    v_4255 = sub_35;
  };
  if (instanciador_l2) {
    v_4256 = sub_11;
  } else {
    v_4256 = v_4255;
  };
  if (instanciador_c2) {
    sub_10 = v_4256;
  } else {
    sub_10 = v_4258;
  };
  if (instanciador_ck_9_1) {
    sub_36 = false;
  } else {
    sub_36 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_4261 = sub_36;
  } else {
    v_4261 = false;
  };
  if (instanciador_l1) {
    v_4262 = v_4261;
  } else {
    v_4262 = false;
  };
  if (instanciador_c1_lamp) {
    v_4259 = sub_10;
  } else {
    v_4259 = sub_36;
  };
  if (instanciador_l1) {
    v_4260 = sub_10;
  } else {
    v_4260 = v_4259;
  };
  if (instanciador_c1) {
    sub_9 = v_4260;
  } else {
    sub_9 = v_4262;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (instanciador_ck_17_1) {
    sub_47 = false;
  } else {
    sub_47 = sub_16;
  };
  if (instanciador_lx) {
    v_4223 = sub_47;
  } else {
    v_4223 = false;
  };
  if (instanciador_c_lampExt) {
    v_4224 = v_4223;
  } else {
    v_4224 = false;
  };
  if (instanciador_lx) {
    v_4221 = sub_16;
  } else {
    v_4221 = sub_47;
  };
  if (instanciador_c_lampExt) {
    v_4222 = sub_33;
  } else {
    v_4222 = v_4221;
  };
  if (instanciador_cx) {
    sub_46 = v_4222;
  } else {
    sub_46 = v_4224;
  };
  sub_45 = sub_46;
  if (instanciador_ck_15_1) {
    sub_48 = false;
  } else {
    sub_48 = sub_46;
  };
  if (instanciador_l4) {
    v_4227 = sub_48;
  } else {
    v_4227 = false;
  };
  if (instanciador_c4_lamp) {
    v_4228 = v_4227;
  } else {
    v_4228 = false;
  };
  if (instanciador_l4) {
    v_4225 = sub_46;
  } else {
    v_4225 = sub_48;
  };
  if (instanciador_c4_lamp) {
    v_4226 = sub_45;
  } else {
    v_4226 = v_4225;
  };
  if (instanciador_c4) {
    sub_44 = v_4226;
  } else {
    sub_44 = v_4228;
  };
  if (instanciador_ck_13_1) {
    sub_49 = false;
  } else {
    sub_49 = sub_44;
  };
  if (instanciador_c3_lamp) {
    v_4231 = sub_49;
  } else {
    v_4231 = false;
  };
  if (instanciador_l3) {
    v_4232 = v_4231;
  } else {
    v_4232 = false;
  };
  if (instanciador_c3_lamp) {
    v_4229 = sub_44;
  } else {
    v_4229 = sub_49;
  };
  if (instanciador_l3) {
    v_4230 = sub_44;
  } else {
    v_4230 = v_4229;
  };
  if (instanciador_c3) {
    sub_43 = v_4230;
  } else {
    sub_43 = v_4232;
  };
  if (instanciador_ck_11_1) {
    sub_50 = false;
  } else {
    sub_50 = sub_43;
  };
  if (instanciador_c2_lamp) {
    v_4235 = sub_50;
  } else {
    v_4235 = false;
  };
  if (instanciador_l2) {
    v_4236 = v_4235;
  } else {
    v_4236 = false;
  };
  if (instanciador_c2_lamp) {
    v_4233 = sub_43;
  } else {
    v_4233 = sub_50;
  };
  if (instanciador_l2) {
    v_4234 = sub_43;
  } else {
    v_4234 = v_4233;
  };
  if (instanciador_c2) {
    sub_42 = v_4234;
  } else {
    sub_42 = v_4236;
  };
  if (instanciador_ck_9_1) {
    sub_51 = false;
  } else {
    sub_51 = sub_42;
  };
  if (instanciador_c1_lamp) {
    v_4239 = sub_51;
  } else {
    v_4239 = false;
  };
  if (instanciador_l1) {
    v_4240 = v_4239;
  } else {
    v_4240 = false;
  };
  if (instanciador_c1_lamp) {
    v_4237 = sub_42;
  } else {
    v_4237 = sub_51;
  };
  if (instanciador_l1) {
    v_4238 = sub_42;
  } else {
    v_4238 = v_4237;
  };
  if (instanciador_c1) {
    sub_41 = v_4238;
  } else {
    sub_41 = v_4240;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (instanciador_v_341) {
    sub_4 = sub_37;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (instanciador_ck_15_1) {
    sub_62 = sub_46;
  } else {
    sub_62 = false;
  };
  if (instanciador_l4) {
    v_4203 = sub_62;
  } else {
    v_4203 = sub_46;
  };
  if (instanciador_c4_lamp) {
    v_4204 = v_4203;
  } else {
    v_4204 = sub_45;
  };
  if (instanciador_l4) {
    v_4201 = false;
  } else {
    v_4201 = sub_62;
  };
  if (instanciador_c4_lamp) {
    v_4202 = false;
  } else {
    v_4202 = v_4201;
  };
  if (instanciador_c4) {
    sub_61 = v_4202;
  } else {
    sub_61 = v_4204;
  };
  if (instanciador_ck_13_1) {
    sub_63 = false;
  } else {
    sub_63 = sub_61;
  };
  if (instanciador_c3_lamp) {
    v_4207 = sub_63;
  } else {
    v_4207 = false;
  };
  if (instanciador_l3) {
    v_4208 = v_4207;
  } else {
    v_4208 = false;
  };
  if (instanciador_c3_lamp) {
    v_4205 = sub_61;
  } else {
    v_4205 = sub_63;
  };
  if (instanciador_l3) {
    v_4206 = sub_61;
  } else {
    v_4206 = v_4205;
  };
  if (instanciador_c3) {
    sub_60 = v_4206;
  } else {
    sub_60 = v_4208;
  };
  if (instanciador_ck_11_1) {
    sub_59 = sub_60;
  } else {
    sub_59 = false;
  };
  if (instanciador_c2_lamp) {
    v_4211 = sub_59;
  } else {
    v_4211 = sub_60;
  };
  if (instanciador_l2) {
    v_4212 = v_4211;
  } else {
    v_4212 = sub_60;
  };
  if (instanciador_c2_lamp) {
    v_4209 = false;
  } else {
    v_4209 = sub_59;
  };
  if (instanciador_l2) {
    v_4210 = false;
  } else {
    v_4210 = v_4209;
  };
  if (instanciador_c2) {
    sub_58 = v_4210;
  } else {
    sub_58 = v_4212;
  };
  if (instanciador_ck_9_1) {
    sub_57 = sub_58;
  } else {
    sub_57 = false;
  };
  if (instanciador_c1_lamp) {
    v_4215 = sub_57;
  } else {
    v_4215 = sub_58;
  };
  if (instanciador_l1) {
    v_4216 = v_4215;
  } else {
    v_4216 = sub_58;
  };
  if (instanciador_c1_lamp) {
    v_4213 = false;
  } else {
    v_4213 = sub_57;
  };
  if (instanciador_l1) {
    v_4214 = false;
  } else {
    v_4214 = v_4213;
  };
  if (instanciador_c1) {
    sub_56 = v_4214;
  } else {
    sub_56 = v_4216;
  };
  sub_55 = sub_56;
  sub_54 = sub_55;
  sub_81 = sub_17;
  sub_80 = sub_81;
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  sub_65 = sub_66;
  if (instanciador_neutro_input) {
    v_4217 = sub_65;
  } else {
    v_4217 = sub_9;
  };
  if (instanciador_ck_19_1) {
    v_4180 = sub_17;
  } else {
    v_4180 = false;
  };
  if (instanciador_lv) {
    sub_93 = false;
  } else {
    sub_93 = v_4180;
  };
  if (instanciador_cv) {
    sub_92 = sub_93;
  } else {
    sub_92 = sub_81;
  };
  if (instanciador_ck_17_1) {
    sub_91 = sub_92;
  } else {
    sub_91 = false;
  };
  if (instanciador_lx) {
    v_4183 = sub_91;
  } else {
    v_4183 = sub_92;
  };
  if (instanciador_c_lampExt) {
    v_4184 = v_4183;
  } else {
    v_4184 = sub_92;
  };
  if (instanciador_lx) {
    v_4181 = false;
  } else {
    v_4181 = sub_91;
  };
  if (instanciador_c_lampExt) {
    v_4182 = false;
  } else {
    v_4182 = v_4181;
  };
  if (instanciador_cx) {
    sub_90 = v_4182;
  } else {
    sub_90 = v_4184;
  };
  if (instanciador_ck_15_1) {
    sub_89 = sub_90;
  } else {
    sub_89 = false;
  };
  if (instanciador_l4) {
    v_4187 = sub_89;
  } else {
    v_4187 = sub_90;
  };
  if (instanciador_c4_lamp) {
    v_4188 = v_4187;
  } else {
    v_4188 = sub_90;
  };
  if (instanciador_l4) {
    v_4185 = false;
  } else {
    v_4185 = sub_89;
  };
  if (instanciador_c4_lamp) {
    v_4186 = false;
  } else {
    v_4186 = v_4185;
  };
  if (instanciador_c4) {
    sub_88 = v_4186;
  } else {
    sub_88 = v_4188;
  };
  if (instanciador_ck_13_1) {
    sub_87 = sub_88;
  } else {
    sub_87 = false;
  };
  if (instanciador_c3_lamp) {
    v_4191 = sub_87;
  } else {
    v_4191 = sub_88;
  };
  if (instanciador_l3) {
    v_4192 = v_4191;
  } else {
    v_4192 = sub_88;
  };
  if (instanciador_c3_lamp) {
    v_4189 = false;
  } else {
    v_4189 = sub_87;
  };
  if (instanciador_l3) {
    v_4190 = false;
  } else {
    v_4190 = v_4189;
  };
  if (instanciador_c3) {
    sub_86 = v_4190;
  } else {
    sub_86 = v_4192;
  };
  if (instanciador_ck_11_1) {
    sub_85 = sub_86;
  } else {
    sub_85 = false;
  };
  if (instanciador_c2_lamp) {
    v_4195 = sub_85;
  } else {
    v_4195 = sub_86;
  };
  if (instanciador_l2) {
    v_4196 = v_4195;
  } else {
    v_4196 = sub_86;
  };
  if (instanciador_c2_lamp) {
    v_4193 = false;
  } else {
    v_4193 = sub_85;
  };
  if (instanciador_l2) {
    v_4194 = false;
  } else {
    v_4194 = v_4193;
  };
  if (instanciador_c2) {
    sub_84 = v_4194;
  } else {
    sub_84 = v_4196;
  };
  if (instanciador_ck_9_1) {
    sub_83 = sub_84;
  } else {
    sub_83 = false;
  };
  if (instanciador_c1_lamp) {
    v_4199 = sub_83;
  } else {
    v_4199 = sub_84;
  };
  if (instanciador_l1) {
    v_4200 = v_4199;
  } else {
    v_4200 = sub_84;
  };
  if (instanciador_c1_lamp) {
    v_4197 = false;
  } else {
    v_4197 = sub_83;
  };
  if (instanciador_l1) {
    v_4198 = false;
  } else {
    v_4198 = v_4197;
  };
  if (instanciador_c1) {
    sub_82 = v_4198;
  } else {
    sub_82 = v_4200;
  };
  if (instanciador_neutro_input) {
    sub_64 = sub_65;
  } else {
    sub_64 = sub_82;
  };
  if (instanciador_seguranca_input) {
    v_4218 = sub_64;
  } else {
    v_4218 = v_4217;
  };
  if (instanciador_domingol_input) {
    v_4219 = sub_54;
  } else {
    v_4219 = v_4218;
  };
  if (instanciador_domingo_input) {
    sub_53 = sub_38;
  } else {
    sub_53 = v_4219;
  };
  if (instanciador_v_341) {
    v_4220 = sub_37;
  } else {
    v_4220 = sub_53;
  };
  if (instanciador_sexta_input) {
    sub_52 = sub_37;
  } else {
    sub_52 = v_4220;
  };
  if (instanciador_v_339) {
    v_4263 = sub_52;
  } else {
    v_4263 = sub_3;
  };
  if (instanciador_neutro_input) {
    sub_98 = sub_65;
  } else {
    sub_98 = sub_41;
  };
  if (instanciador_seguranca_input) {
    v_4179 = sub_64;
  } else {
    v_4179 = sub_98;
  };
  if (instanciador_domingol_input) {
    sub_97 = sub_54;
  } else {
    sub_97 = v_4179;
  };
  if (instanciador_domingo_input) {
    sub_96 = sub_38;
  } else {
    sub_96 = sub_97;
  };
  if (instanciador_v_341) {
    sub_95 = sub_37;
  } else {
    sub_95 = sub_96;
  };
  sub_94 = sub_95;
  if (instanciador_v_339) {
    v_4264 = sub_52;
  } else {
    v_4264 = sub_94;
  };
  if (instanciador_ebd_input) {
    sub_2 = v_4263;
  } else {
    sub_2 = v_4264;
  };
  if (instanciador_seguranca_input) {
    v_4175 = sub_82;
  } else {
    v_4175 = sub_65;
  };
  if (instanciador_domingol_input) {
    v_4176 = sub_54;
    v_4174 = sub_54;
  } else {
    v_4176 = v_4175;
    v_4174 = sub_39;
  };
  if (instanciador_domingo_input) {
    v_4177 = v_4174;
  } else {
    v_4177 = v_4176;
  };
  if (instanciador_domingol_input) {
    v_4173 = sub_54;
    v_4172 = sub_54;
  } else {
    v_4173 = sub_64;
    v_4172 = sub_98;
  };
  if (instanciador_domingo_input) {
    sub_100 = v_4172;
  } else {
    sub_100 = v_4173;
  };
  if (instanciador_v_341) {
    v_4178 = v_4177;
  } else {
    v_4178 = sub_100;
  };
  if (instanciador_sexta_input) {
    sub_99 = sub_37;
  } else {
    sub_99 = v_4178;
  };
  if (instanciador_neutro_input) {
    v_4171 = sub_65;
  } else {
    v_4171 = sub_56;
  };
  if (instanciador_seguranca_input) {
    sub_102 = sub_64;
  } else {
    sub_102 = v_4171;
  };
  if (instanciador_domingo_input) {
    sub_101 = sub_38;
  } else {
    sub_101 = sub_102;
  };
  if (instanciador_v_341) {
    v_4265 = sub_97;
  } else {
    v_4265 = sub_101;
  };
  if (instanciador_sexta_input) {
    v_4266 = sub_37;
  } else {
    v_4266 = v_4265;
  };
  if (instanciador_v_339) {
    v_4267 = v_4266;
  } else {
    v_4267 = sub_99;
  };
  if (instanciador_ebd_input) {
    v_4268 = sub_5;
  } else {
    v_4268 = v_4267;
  };
  if (instanciador_v_340) {
    sub_1 = v_4268;
  } else {
    sub_1 = sub_2;
  };
  sub_118 = sub_25;
  if (instanciador_cv) {
    sub_117 = sub_118;
  } else {
    sub_117 = sub_32;
  };
  if (instanciador_ck_17_1) {
    sub_116 = sub_117;
  } else {
    sub_116 = false;
  };
  if (instanciador_lx) {
    v_4151 = sub_116;
    v_4149 = false;
  } else {
    v_4151 = sub_117;
    v_4149 = sub_116;
  };
  if (instanciador_c_lampExt) {
    v_4150 = false;
  } else {
    v_4150 = v_4149;
  };
  sub_119 = sub_117;
  if (instanciador_c_lampExt) {
    v_4152 = v_4151;
  } else {
    v_4152 = sub_119;
  };
  if (instanciador_cx) {
    sub_115 = v_4150;
  } else {
    sub_115 = v_4152;
  };
  if (instanciador_ck_15_1) {
    sub_114 = sub_115;
  } else {
    sub_114 = false;
  };
  if (instanciador_l4) {
    v_4155 = sub_114;
  } else {
    v_4155 = sub_115;
  };
  if (instanciador_c4_lamp) {
    v_4156 = v_4155;
  } else {
    v_4156 = sub_115;
  };
  if (instanciador_l4) {
    v_4153 = false;
  } else {
    v_4153 = sub_114;
  };
  if (instanciador_c4_lamp) {
    v_4154 = false;
  } else {
    v_4154 = v_4153;
  };
  if (instanciador_c4) {
    sub_113 = v_4154;
  } else {
    sub_113 = v_4156;
  };
  if (instanciador_ck_13_1) {
    sub_120 = false;
  } else {
    sub_120 = sub_113;
  };
  if (instanciador_c3_lamp) {
    v_4159 = sub_120;
  } else {
    v_4159 = false;
  };
  if (instanciador_l3) {
    v_4160 = v_4159;
  } else {
    v_4160 = false;
  };
  if (instanciador_c3_lamp) {
    v_4157 = sub_113;
  } else {
    v_4157 = sub_120;
  };
  if (instanciador_l3) {
    v_4158 = sub_113;
  } else {
    v_4158 = v_4157;
  };
  if (instanciador_c3) {
    sub_112 = v_4158;
  } else {
    sub_112 = v_4160;
  };
  if (instanciador_ck_11_1) {
    sub_121 = false;
  } else {
    sub_121 = sub_112;
  };
  if (instanciador_c2_lamp) {
    v_4163 = sub_121;
  } else {
    v_4163 = false;
  };
  if (instanciador_l2) {
    v_4164 = v_4163;
  } else {
    v_4164 = false;
  };
  if (instanciador_c2_lamp) {
    v_4161 = sub_112;
  } else {
    v_4161 = sub_121;
  };
  if (instanciador_l2) {
    v_4162 = sub_112;
  } else {
    v_4162 = v_4161;
  };
  if (instanciador_c2) {
    sub_111 = v_4162;
  } else {
    sub_111 = v_4164;
  };
  if (instanciador_ck_9_1) {
    sub_122 = false;
  } else {
    sub_122 = sub_111;
  };
  if (instanciador_c1_lamp) {
    v_4167 = sub_122;
  } else {
    v_4167 = false;
  };
  if (instanciador_l1) {
    v_4168 = v_4167;
  } else {
    v_4168 = false;
  };
  if (instanciador_c1_lamp) {
    v_4165 = sub_111;
  } else {
    v_4165 = sub_122;
  };
  if (instanciador_l1) {
    v_4166 = sub_111;
  } else {
    v_4166 = v_4165;
  };
  if (instanciador_c1) {
    sub_110 = v_4166;
  } else {
    sub_110 = v_4168;
  };
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  sub_106 = sub_107;
  if (instanciador_ck_17_1) {
    sub_133 = false;
  } else {
    sub_133 = sub_117;
  };
  if (instanciador_lx) {
    v_4131 = sub_133;
  } else {
    v_4131 = false;
  };
  if (instanciador_c_lampExt) {
    v_4132 = v_4131;
  } else {
    v_4132 = false;
  };
  if (instanciador_lx) {
    v_4129 = sub_117;
  } else {
    v_4129 = sub_133;
  };
  if (instanciador_c_lampExt) {
    v_4130 = sub_119;
  } else {
    v_4130 = v_4129;
  };
  if (instanciador_cx) {
    sub_132 = v_4130;
  } else {
    sub_132 = v_4132;
  };
  sub_131 = sub_132;
  if (instanciador_ck_15_1) {
    sub_134 = false;
  } else {
    sub_134 = sub_132;
  };
  if (instanciador_l4) {
    v_4135 = sub_134;
  } else {
    v_4135 = false;
  };
  if (instanciador_c4_lamp) {
    v_4136 = v_4135;
  } else {
    v_4136 = false;
  };
  if (instanciador_l4) {
    v_4133 = sub_132;
  } else {
    v_4133 = sub_134;
  };
  if (instanciador_c4_lamp) {
    v_4134 = sub_131;
  } else {
    v_4134 = v_4133;
  };
  if (instanciador_c4) {
    sub_130 = v_4134;
  } else {
    sub_130 = v_4136;
  };
  if (instanciador_ck_13_1) {
    sub_135 = false;
  } else {
    sub_135 = sub_130;
  };
  if (instanciador_c3_lamp) {
    v_4139 = sub_135;
  } else {
    v_4139 = false;
  };
  if (instanciador_l3) {
    v_4140 = v_4139;
  } else {
    v_4140 = false;
  };
  if (instanciador_c3_lamp) {
    v_4137 = sub_130;
  } else {
    v_4137 = sub_135;
  };
  if (instanciador_l3) {
    v_4138 = sub_130;
  } else {
    v_4138 = v_4137;
  };
  if (instanciador_c3) {
    sub_129 = v_4138;
  } else {
    sub_129 = v_4140;
  };
  if (instanciador_ck_11_1) {
    sub_136 = false;
  } else {
    sub_136 = sub_129;
  };
  if (instanciador_c2_lamp) {
    v_4143 = sub_136;
  } else {
    v_4143 = false;
  };
  if (instanciador_l2) {
    v_4144 = v_4143;
  } else {
    v_4144 = false;
  };
  if (instanciador_c2_lamp) {
    v_4141 = sub_129;
  } else {
    v_4141 = sub_136;
  };
  if (instanciador_l2) {
    v_4142 = sub_129;
  } else {
    v_4142 = v_4141;
  };
  if (instanciador_c2) {
    sub_128 = v_4142;
  } else {
    sub_128 = v_4144;
  };
  if (instanciador_ck_9_1) {
    sub_137 = false;
  } else {
    sub_137 = sub_128;
  };
  if (instanciador_c1_lamp) {
    v_4147 = sub_137;
  } else {
    v_4147 = false;
  };
  if (instanciador_l1) {
    v_4148 = v_4147;
  } else {
    v_4148 = false;
  };
  if (instanciador_c1_lamp) {
    v_4145 = sub_128;
  } else {
    v_4145 = sub_137;
  };
  if (instanciador_l1) {
    v_4146 = sub_128;
  } else {
    v_4146 = v_4145;
  };
  if (instanciador_c1) {
    sub_127 = v_4146;
  } else {
    sub_127 = v_4148;
  };
  sub_126 = sub_127;
  sub_125 = sub_126;
  sub_124 = sub_125;
  sub_123 = sub_124;
  if (instanciador_v_341) {
    sub_105 = sub_123;
  } else {
    sub_105 = sub_106;
  };
  sub_104 = sub_105;
  if (instanciador_ck_15_1) {
    sub_148 = sub_132;
  } else {
    sub_148 = false;
  };
  if (instanciador_l4) {
    v_4111 = sub_148;
  } else {
    v_4111 = sub_132;
  };
  if (instanciador_c4_lamp) {
    v_4112 = v_4111;
  } else {
    v_4112 = sub_131;
  };
  if (instanciador_l4) {
    v_4109 = false;
  } else {
    v_4109 = sub_148;
  };
  if (instanciador_c4_lamp) {
    v_4110 = false;
  } else {
    v_4110 = v_4109;
  };
  if (instanciador_c4) {
    sub_147 = v_4110;
  } else {
    sub_147 = v_4112;
  };
  if (instanciador_ck_13_1) {
    sub_149 = false;
  } else {
    sub_149 = sub_147;
  };
  if (instanciador_c3_lamp) {
    v_4115 = sub_149;
  } else {
    v_4115 = false;
  };
  if (instanciador_l3) {
    v_4116 = v_4115;
  } else {
    v_4116 = false;
  };
  if (instanciador_c3_lamp) {
    v_4113 = sub_147;
  } else {
    v_4113 = sub_149;
  };
  if (instanciador_l3) {
    v_4114 = sub_147;
  } else {
    v_4114 = v_4113;
  };
  if (instanciador_c3) {
    sub_146 = v_4114;
  } else {
    sub_146 = v_4116;
  };
  if (instanciador_ck_11_1) {
    sub_145 = sub_146;
  } else {
    sub_145 = false;
  };
  if (instanciador_c2_lamp) {
    v_4119 = sub_145;
  } else {
    v_4119 = sub_146;
  };
  if (instanciador_l2) {
    v_4120 = v_4119;
  } else {
    v_4120 = sub_146;
  };
  if (instanciador_c2_lamp) {
    v_4117 = false;
  } else {
    v_4117 = sub_145;
  };
  if (instanciador_l2) {
    v_4118 = false;
  } else {
    v_4118 = v_4117;
  };
  if (instanciador_c2) {
    sub_144 = v_4118;
  } else {
    sub_144 = v_4120;
  };
  if (instanciador_ck_9_1) {
    sub_143 = sub_144;
  } else {
    sub_143 = false;
  };
  if (instanciador_c1_lamp) {
    v_4123 = sub_143;
  } else {
    v_4123 = sub_144;
  };
  if (instanciador_l1) {
    v_4124 = v_4123;
  } else {
    v_4124 = sub_144;
  };
  if (instanciador_c1_lamp) {
    v_4121 = false;
  } else {
    v_4121 = sub_143;
  };
  if (instanciador_l1) {
    v_4122 = false;
  } else {
    v_4122 = v_4121;
  };
  if (instanciador_c1) {
    sub_142 = v_4122;
  } else {
    sub_142 = v_4124;
  };
  sub_141 = sub_142;
  sub_140 = sub_141;
  sub_166 = sub_118;
  sub_165 = sub_166;
  sub_164 = sub_165;
  sub_163 = sub_164;
  sub_162 = sub_163;
  sub_161 = sub_162;
  sub_160 = sub_161;
  sub_159 = sub_160;
  sub_158 = sub_159;
  sub_157 = sub_158;
  sub_156 = sub_157;
  sub_155 = sub_156;
  sub_154 = sub_155;
  sub_153 = sub_154;
  sub_152 = sub_153;
  sub_151 = sub_152;
  if (instanciador_neutro_input) {
    v_4125 = sub_151;
  } else {
    v_4125 = sub_110;
  };
  if (instanciador_lv) {
    v_4088 = sub_24;
  } else {
    v_4088 = sub_25;
  };
  if (instanciador_cv) {
    sub_177 = sub_93;
  } else {
    sub_177 = v_4088;
  };
  if (instanciador_ck_17_1) {
    sub_176 = sub_177;
  } else {
    sub_176 = false;
  };
  if (instanciador_lx) {
    v_4091 = sub_176;
  } else {
    v_4091 = sub_177;
  };
  if (instanciador_c_lampExt) {
    v_4092 = v_4091;
  } else {
    v_4092 = sub_177;
  };
  if (instanciador_lx) {
    v_4089 = false;
  } else {
    v_4089 = sub_176;
  };
  if (instanciador_c_lampExt) {
    v_4090 = false;
  } else {
    v_4090 = v_4089;
  };
  if (instanciador_cx) {
    sub_175 = v_4090;
  } else {
    sub_175 = v_4092;
  };
  if (instanciador_ck_15_1) {
    sub_174 = sub_175;
  } else {
    sub_174 = false;
  };
  if (instanciador_l4) {
    v_4095 = sub_174;
  } else {
    v_4095 = sub_175;
  };
  if (instanciador_c4_lamp) {
    v_4096 = v_4095;
  } else {
    v_4096 = sub_175;
  };
  if (instanciador_l4) {
    v_4093 = false;
  } else {
    v_4093 = sub_174;
  };
  if (instanciador_c4_lamp) {
    v_4094 = false;
  } else {
    v_4094 = v_4093;
  };
  if (instanciador_c4) {
    sub_173 = v_4094;
  } else {
    sub_173 = v_4096;
  };
  if (instanciador_ck_13_1) {
    sub_172 = sub_173;
  } else {
    sub_172 = false;
  };
  if (instanciador_c3_lamp) {
    v_4099 = sub_172;
  } else {
    v_4099 = sub_173;
  };
  if (instanciador_l3) {
    v_4100 = v_4099;
  } else {
    v_4100 = sub_173;
  };
  if (instanciador_c3_lamp) {
    v_4097 = false;
  } else {
    v_4097 = sub_172;
  };
  if (instanciador_l3) {
    v_4098 = false;
  } else {
    v_4098 = v_4097;
  };
  if (instanciador_c3) {
    sub_171 = v_4098;
  } else {
    sub_171 = v_4100;
  };
  if (instanciador_ck_11_1) {
    sub_170 = sub_171;
  } else {
    sub_170 = false;
  };
  if (instanciador_c2_lamp) {
    v_4103 = sub_170;
  } else {
    v_4103 = sub_171;
  };
  if (instanciador_l2) {
    v_4104 = v_4103;
  } else {
    v_4104 = sub_171;
  };
  if (instanciador_c2_lamp) {
    v_4101 = false;
  } else {
    v_4101 = sub_170;
  };
  if (instanciador_l2) {
    v_4102 = false;
  } else {
    v_4102 = v_4101;
  };
  if (instanciador_c2) {
    sub_169 = v_4102;
  } else {
    sub_169 = v_4104;
  };
  if (instanciador_ck_9_1) {
    sub_168 = sub_169;
  } else {
    sub_168 = false;
  };
  if (instanciador_c1_lamp) {
    v_4107 = sub_168;
  } else {
    v_4107 = sub_169;
  };
  if (instanciador_l1) {
    v_4108 = v_4107;
  } else {
    v_4108 = sub_169;
  };
  if (instanciador_c1_lamp) {
    v_4105 = false;
  } else {
    v_4105 = sub_168;
  };
  if (instanciador_l1) {
    v_4106 = false;
  } else {
    v_4106 = v_4105;
  };
  if (instanciador_c1) {
    sub_167 = v_4106;
  } else {
    sub_167 = v_4108;
  };
  if (instanciador_neutro_input) {
    sub_150 = sub_151;
  } else {
    sub_150 = sub_167;
  };
  if (instanciador_seguranca_input) {
    v_4126 = sub_150;
  } else {
    v_4126 = v_4125;
  };
  if (instanciador_domingol_input) {
    v_4127 = sub_140;
  } else {
    v_4127 = v_4126;
  };
  if (instanciador_domingo_input) {
    sub_139 = sub_124;
  } else {
    sub_139 = v_4127;
  };
  if (instanciador_v_341) {
    v_4128 = sub_123;
  } else {
    v_4128 = sub_139;
  };
  if (instanciador_sexta_input) {
    sub_138 = sub_123;
  } else {
    sub_138 = v_4128;
  };
  if (instanciador_v_339) {
    v_4169 = sub_138;
  } else {
    v_4169 = sub_104;
  };
  if (instanciador_neutro_input) {
    sub_182 = sub_151;
  } else {
    sub_182 = sub_127;
  };
  if (instanciador_seguranca_input) {
    v_4087 = sub_150;
  } else {
    v_4087 = sub_182;
  };
  if (instanciador_domingol_input) {
    sub_181 = sub_140;
  } else {
    sub_181 = v_4087;
  };
  if (instanciador_domingo_input) {
    sub_180 = sub_124;
  } else {
    sub_180 = sub_181;
  };
  if (instanciador_v_341) {
    sub_179 = sub_123;
  } else {
    sub_179 = sub_180;
  };
  sub_178 = sub_179;
  if (instanciador_v_339) {
    v_4170 = sub_138;
  } else {
    v_4170 = sub_178;
  };
  if (instanciador_ebd_input) {
    sub_103 = v_4169;
  } else {
    sub_103 = v_4170;
  };
  if (instanciador_seguranca_input) {
    v_4083 = sub_167;
  } else {
    v_4083 = sub_151;
  };
  if (instanciador_domingol_input) {
    v_4084 = sub_140;
    v_4082 = sub_140;
  } else {
    v_4084 = v_4083;
    v_4082 = sub_125;
  };
  if (instanciador_domingo_input) {
    v_4085 = v_4082;
  } else {
    v_4085 = v_4084;
  };
  if (instanciador_domingol_input) {
    v_4081 = sub_140;
    v_4080 = sub_140;
  } else {
    v_4081 = sub_150;
    v_4080 = sub_182;
  };
  if (instanciador_domingo_input) {
    sub_184 = v_4080;
  } else {
    sub_184 = v_4081;
  };
  if (instanciador_v_341) {
    v_4086 = v_4085;
  } else {
    v_4086 = sub_184;
  };
  if (instanciador_sexta_input) {
    sub_183 = sub_123;
  } else {
    sub_183 = v_4086;
  };
  if (instanciador_neutro_input) {
    v = sub_151;
  } else {
    v = sub_142;
  };
  if (instanciador_seguranca_input) {
    sub_186 = sub_150;
  } else {
    sub_186 = v;
  };
  if (instanciador_domingo_input) {
    sub_185 = sub_124;
  } else {
    sub_185 = sub_186;
  };
  if (instanciador_v_341) {
    v_4269 = sub_181;
  } else {
    v_4269 = sub_185;
  };
  if (instanciador_sexta_input) {
    v_4270 = sub_123;
  } else {
    v_4270 = v_4269;
  };
  if (instanciador_v_339) {
    v_4271 = v_4270;
  } else {
    v_4271 = sub_183;
  };
  if (instanciador_ebd_input) {
    v_4272 = sub_106;
  } else {
    v_4272 = v_4271;
  };
  if (instanciador_v_340) {
    v_4273 = v_4272;
  } else {
    v_4273 = sub_103;
  };
  if (p_instanciador_c_vent) {
    sub_0 = v_4273;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c_vent = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_cv_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_cx, int instanciador_c4,
  int instanciador_c3, int instanciador_c2, int instanciador_c1,
  int instanciador_c_lampExt, int instanciador_c4_lamp,
  int instanciador_c3_lamp, int instanciador_c2_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_cv_out* _out) {
  
  int v_4463;
  int v_4462;
  int v_4461;
  int v_4460;
  int v_4459;
  int v_4458;
  int v_4457;
  int v_4456;
  int v_4455;
  int v_4454;
  int v_4453;
  int v_4452;
  int v_4451;
  int v_4450;
  int v_4449;
  int v_4448;
  int v_4447;
  int v_4446;
  int v_4445;
  int v_4444;
  int v_4443;
  int v_4442;
  int v_4441;
  int v_4440;
  int v_4439;
  int v_4438;
  int v_4437;
  int v_4436;
  int v_4435;
  int v_4434;
  int v_4433;
  int v_4432;
  int v_4431;
  int v_4430;
  int v_4429;
  int v_4428;
  int v_4427;
  int v_4426;
  int v_4425;
  int v_4424;
  int v_4423;
  int v_4422;
  int v_4421;
  int v_4420;
  int v_4419;
  int v_4418;
  int v_4417;
  int v_4416;
  int v_4415;
  int v_4414;
  int v_4413;
  int v_4412;
  int v_4411;
  int v_4410;
  int v_4409;
  int v_4408;
  int v_4407;
  int v_4406;
  int v_4405;
  int v_4404;
  int v_4403;
  int v_4402;
  int v_4401;
  int v_4400;
  int v_4399;
  int v_4398;
  int v_4397;
  int v_4396;
  int v_4395;
  int v_4394;
  int v_4393;
  int v_4392;
  int v_4391;
  int v_4390;
  int v_4389;
  int v_4388;
  int v_4387;
  int v_4386;
  int v_4385;
  int v_4384;
  int v_4383;
  int v_4382;
  int v_4381;
  int v_4380;
  int v_4379;
  int v_4378;
  int v_4377;
  int v_4376;
  int v_4375;
  int v_4374;
  int v_4373;
  int v_4372;
  int v_4371;
  int v_4370;
  int v_4369;
  int v_4368;
  int v_4367;
  int v_4366;
  int v_4365;
  int v_4364;
  int v_4363;
  int v_4362;
  int v_4361;
  int v_4360;
  int v_4359;
  int v_4358;
  int v_4357;
  int v_4356;
  int v_4355;
  int v_4354;
  int v_4353;
  int v_4352;
  int v_4351;
  int v_4350;
  int v_4349;
  int v_4348;
  int v_4347;
  int v_4346;
  int v_4345;
  int v_4344;
  int v_4343;
  int v_4342;
  int v_4341;
  int v_4340;
  int v_4339;
  int v_4338;
  int v_4337;
  int v_4336;
  int v_4335;
  int v_4334;
  int v_4333;
  int v_4332;
  int v_4331;
  int v_4330;
  int v_4329;
  int v_4328;
  int v_4327;
  int v_4326;
  int v_4325;
  int v_4324;
  int v_4323;
  int v_4322;
  int v_4321;
  int v_4320;
  int v_4319;
  int v_4318;
  int v_4317;
  int v_4316;
  int v_4315;
  int v_4314;
  int v_4313;
  int v_4312;
  int v_4311;
  int v_4310;
  int v_4309;
  int v_4308;
  int v_4307;
  int v_4306;
  int v_4305;
  int v_4304;
  int v_4303;
  int v_4302;
  int v_4301;
  int v_4300;
  int v_4299;
  int v_4298;
  int v_4297;
  int v_4296;
  int v_4295;
  int v_4294;
  int v_4293;
  int v_4292;
  int v_4291;
  int v_4290;
  int v_4289;
  int v_4288;
  int v_4287;
  int v_4286;
  int v_4285;
  int v_4284;
  int v_4283;
  int v_4282;
  int v_4281;
  int v_4280;
  int v_4279;
  int v_4278;
  int v_4277;
  int v_4276;
  int v_4275;
  int v_4274;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  int sub_157;
  int sub_158;
  int sub_159;
  int sub_160;
  int sub_161;
  int sub_162;
  int sub_163;
  int sub_164;
  int sub_165;
  int sub_166;
  int sub_167;
  int sub_168;
  int sub_169;
  int sub_170;
  int sub_171;
  int sub_172;
  int sub_173;
  int sub_174;
  int sub_175;
  int sub_176;
  int sub_177;
  int sub_178;
  int sub_179;
  sub_24 = false;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_31 = true;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  if (instanciador_ck_19_1) {
    sub_17 = sub_25;
  } else {
    sub_17 = sub_18;
  };
  if (instanciador_lv) {
    sub_16 = sub_17;
  } else {
    sub_16 = sub_25;
  };
  if (instanciador_ck_17_1) {
    sub_15 = sub_16;
  } else {
    sub_15 = false;
  };
  if (instanciador_lx) {
    v_4435 = sub_15;
    v_4433 = false;
  } else {
    v_4435 = sub_16;
    v_4433 = sub_15;
  };
  if (instanciador_c_lampExt) {
    v_4434 = false;
  } else {
    v_4434 = v_4433;
  };
  sub_32 = sub_16;
  if (instanciador_c_lampExt) {
    v_4436 = v_4435;
  } else {
    v_4436 = sub_32;
  };
  if (instanciador_cx) {
    sub_14 = v_4434;
  } else {
    sub_14 = v_4436;
  };
  if (instanciador_ck_15_1) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (instanciador_l4) {
    v_4439 = sub_13;
  } else {
    v_4439 = sub_14;
  };
  if (instanciador_c4_lamp) {
    v_4440 = v_4439;
  } else {
    v_4440 = sub_14;
  };
  if (instanciador_l4) {
    v_4437 = false;
  } else {
    v_4437 = sub_13;
  };
  if (instanciador_c4_lamp) {
    v_4438 = false;
  } else {
    v_4438 = v_4437;
  };
  if (instanciador_c4) {
    sub_12 = v_4438;
  } else {
    sub_12 = v_4440;
  };
  if (instanciador_ck_13_1) {
    sub_33 = false;
  } else {
    sub_33 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_4443 = sub_33;
  } else {
    v_4443 = false;
  };
  if (instanciador_l3) {
    v_4444 = v_4443;
  } else {
    v_4444 = false;
  };
  if (instanciador_c3_lamp) {
    v_4441 = sub_12;
  } else {
    v_4441 = sub_33;
  };
  if (instanciador_l3) {
    v_4442 = sub_12;
  } else {
    v_4442 = v_4441;
  };
  if (instanciador_c3) {
    sub_11 = v_4442;
  } else {
    sub_11 = v_4444;
  };
  if (instanciador_ck_11_1) {
    sub_34 = false;
  } else {
    sub_34 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_4447 = sub_34;
  } else {
    v_4447 = false;
  };
  if (instanciador_l2) {
    v_4448 = v_4447;
  } else {
    v_4448 = false;
  };
  if (instanciador_c2_lamp) {
    v_4445 = sub_11;
  } else {
    v_4445 = sub_34;
  };
  if (instanciador_l2) {
    v_4446 = sub_11;
  } else {
    v_4446 = v_4445;
  };
  if (instanciador_c2) {
    sub_10 = v_4446;
  } else {
    sub_10 = v_4448;
  };
  if (instanciador_ck_9_1) {
    sub_35 = false;
  } else {
    sub_35 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_4451 = sub_35;
  } else {
    v_4451 = false;
  };
  if (instanciador_l1) {
    v_4452 = v_4451;
  } else {
    v_4452 = false;
  };
  if (instanciador_c1_lamp) {
    v_4449 = sub_10;
  } else {
    v_4449 = sub_35;
  };
  if (instanciador_l1) {
    v_4450 = sub_10;
  } else {
    v_4450 = v_4449;
  };
  if (instanciador_c1) {
    sub_9 = v_4450;
  } else {
    sub_9 = v_4452;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (instanciador_ck_17_1) {
    sub_46 = false;
  } else {
    sub_46 = sub_16;
  };
  if (instanciador_lx) {
    v_4415 = sub_46;
  } else {
    v_4415 = false;
  };
  if (instanciador_c_lampExt) {
    v_4416 = v_4415;
  } else {
    v_4416 = false;
  };
  if (instanciador_lx) {
    v_4413 = sub_16;
  } else {
    v_4413 = sub_46;
  };
  if (instanciador_c_lampExt) {
    v_4414 = sub_32;
  } else {
    v_4414 = v_4413;
  };
  if (instanciador_cx) {
    sub_45 = v_4414;
  } else {
    sub_45 = v_4416;
  };
  sub_44 = sub_45;
  if (instanciador_ck_15_1) {
    sub_47 = false;
  } else {
    sub_47 = sub_45;
  };
  if (instanciador_l4) {
    v_4419 = sub_47;
  } else {
    v_4419 = false;
  };
  if (instanciador_c4_lamp) {
    v_4420 = v_4419;
  } else {
    v_4420 = false;
  };
  if (instanciador_l4) {
    v_4417 = sub_45;
  } else {
    v_4417 = sub_47;
  };
  if (instanciador_c4_lamp) {
    v_4418 = sub_44;
  } else {
    v_4418 = v_4417;
  };
  if (instanciador_c4) {
    sub_43 = v_4418;
  } else {
    sub_43 = v_4420;
  };
  if (instanciador_ck_13_1) {
    sub_48 = false;
  } else {
    sub_48 = sub_43;
  };
  if (instanciador_c3_lamp) {
    v_4423 = sub_48;
  } else {
    v_4423 = false;
  };
  if (instanciador_l3) {
    v_4424 = v_4423;
  } else {
    v_4424 = false;
  };
  if (instanciador_c3_lamp) {
    v_4421 = sub_43;
  } else {
    v_4421 = sub_48;
  };
  if (instanciador_l3) {
    v_4422 = sub_43;
  } else {
    v_4422 = v_4421;
  };
  if (instanciador_c3) {
    sub_42 = v_4422;
  } else {
    sub_42 = v_4424;
  };
  if (instanciador_ck_11_1) {
    sub_49 = false;
  } else {
    sub_49 = sub_42;
  };
  if (instanciador_c2_lamp) {
    v_4427 = sub_49;
  } else {
    v_4427 = false;
  };
  if (instanciador_l2) {
    v_4428 = v_4427;
  } else {
    v_4428 = false;
  };
  if (instanciador_c2_lamp) {
    v_4425 = sub_42;
  } else {
    v_4425 = sub_49;
  };
  if (instanciador_l2) {
    v_4426 = sub_42;
  } else {
    v_4426 = v_4425;
  };
  if (instanciador_c2) {
    sub_41 = v_4426;
  } else {
    sub_41 = v_4428;
  };
  if (instanciador_ck_9_1) {
    sub_50 = false;
  } else {
    sub_50 = sub_41;
  };
  if (instanciador_c1_lamp) {
    v_4431 = sub_50;
  } else {
    v_4431 = false;
  };
  if (instanciador_l1) {
    v_4432 = v_4431;
  } else {
    v_4432 = false;
  };
  if (instanciador_c1_lamp) {
    v_4429 = sub_41;
  } else {
    v_4429 = sub_50;
  };
  if (instanciador_l1) {
    v_4430 = sub_41;
  } else {
    v_4430 = v_4429;
  };
  if (instanciador_c1) {
    sub_40 = v_4430;
  } else {
    sub_40 = v_4432;
  };
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  if (instanciador_v_341) {
    sub_4 = sub_36;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (instanciador_ck_15_1) {
    sub_61 = sub_45;
  } else {
    sub_61 = false;
  };
  if (instanciador_l4) {
    v_4395 = sub_61;
  } else {
    v_4395 = sub_45;
  };
  if (instanciador_c4_lamp) {
    v_4396 = v_4395;
  } else {
    v_4396 = sub_44;
  };
  if (instanciador_l4) {
    v_4393 = false;
  } else {
    v_4393 = sub_61;
  };
  if (instanciador_c4_lamp) {
    v_4394 = false;
  } else {
    v_4394 = v_4393;
  };
  if (instanciador_c4) {
    sub_60 = v_4394;
  } else {
    sub_60 = v_4396;
  };
  if (instanciador_ck_13_1) {
    sub_62 = false;
  } else {
    sub_62 = sub_60;
  };
  if (instanciador_c3_lamp) {
    v_4399 = sub_62;
  } else {
    v_4399 = false;
  };
  if (instanciador_l3) {
    v_4400 = v_4399;
  } else {
    v_4400 = false;
  };
  if (instanciador_c3_lamp) {
    v_4397 = sub_60;
  } else {
    v_4397 = sub_62;
  };
  if (instanciador_l3) {
    v_4398 = sub_60;
  } else {
    v_4398 = v_4397;
  };
  if (instanciador_c3) {
    sub_59 = v_4398;
  } else {
    sub_59 = v_4400;
  };
  if (instanciador_ck_11_1) {
    sub_58 = sub_59;
  } else {
    sub_58 = false;
  };
  if (instanciador_c2_lamp) {
    v_4403 = sub_58;
  } else {
    v_4403 = sub_59;
  };
  if (instanciador_l2) {
    v_4404 = v_4403;
  } else {
    v_4404 = sub_59;
  };
  if (instanciador_c2_lamp) {
    v_4401 = false;
  } else {
    v_4401 = sub_58;
  };
  if (instanciador_l2) {
    v_4402 = false;
  } else {
    v_4402 = v_4401;
  };
  if (instanciador_c2) {
    sub_57 = v_4402;
  } else {
    sub_57 = v_4404;
  };
  if (instanciador_ck_9_1) {
    sub_56 = sub_57;
  } else {
    sub_56 = false;
  };
  if (instanciador_c1_lamp) {
    v_4407 = sub_56;
  } else {
    v_4407 = sub_57;
  };
  if (instanciador_l1) {
    v_4408 = v_4407;
  } else {
    v_4408 = sub_57;
  };
  if (instanciador_c1_lamp) {
    v_4405 = false;
  } else {
    v_4405 = sub_56;
  };
  if (instanciador_l1) {
    v_4406 = false;
  } else {
    v_4406 = v_4405;
  };
  if (instanciador_c1) {
    sub_55 = v_4406;
  } else {
    sub_55 = v_4408;
  };
  sub_54 = sub_55;
  sub_53 = sub_54;
  sub_79 = sub_18;
  sub_78 = sub_79;
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  sub_65 = sub_66;
  sub_64 = sub_65;
  if (instanciador_neutro_input) {
    v_4409 = sub_64;
  } else {
    v_4409 = sub_9;
  };
  if (instanciador_ck_17_1) {
    sub_89 = sub_79;
  } else {
    sub_89 = false;
  };
  if (instanciador_lx) {
    v_4375 = sub_89;
  } else {
    v_4375 = sub_79;
  };
  if (instanciador_c_lampExt) {
    v_4376 = v_4375;
  } else {
    v_4376 = sub_78;
  };
  if (instanciador_lx) {
    v_4373 = false;
  } else {
    v_4373 = sub_89;
  };
  if (instanciador_c_lampExt) {
    v_4374 = false;
  } else {
    v_4374 = v_4373;
  };
  if (instanciador_cx) {
    sub_88 = v_4374;
  } else {
    sub_88 = v_4376;
  };
  if (instanciador_ck_15_1) {
    sub_87 = sub_88;
  } else {
    sub_87 = false;
  };
  if (instanciador_l4) {
    v_4379 = sub_87;
  } else {
    v_4379 = sub_88;
  };
  if (instanciador_c4_lamp) {
    v_4380 = v_4379;
  } else {
    v_4380 = sub_88;
  };
  if (instanciador_l4) {
    v_4377 = false;
  } else {
    v_4377 = sub_87;
  };
  if (instanciador_c4_lamp) {
    v_4378 = false;
  } else {
    v_4378 = v_4377;
  };
  if (instanciador_c4) {
    sub_86 = v_4378;
  } else {
    sub_86 = v_4380;
  };
  if (instanciador_ck_13_1) {
    sub_85 = sub_86;
  } else {
    sub_85 = false;
  };
  if (instanciador_c3_lamp) {
    v_4383 = sub_85;
  } else {
    v_4383 = sub_86;
  };
  if (instanciador_l3) {
    v_4384 = v_4383;
  } else {
    v_4384 = sub_86;
  };
  if (instanciador_c3_lamp) {
    v_4381 = false;
  } else {
    v_4381 = sub_85;
  };
  if (instanciador_l3) {
    v_4382 = false;
  } else {
    v_4382 = v_4381;
  };
  if (instanciador_c3) {
    sub_84 = v_4382;
  } else {
    sub_84 = v_4384;
  };
  if (instanciador_ck_11_1) {
    sub_83 = sub_84;
  } else {
    sub_83 = false;
  };
  if (instanciador_c2_lamp) {
    v_4387 = sub_83;
  } else {
    v_4387 = sub_84;
  };
  if (instanciador_l2) {
    v_4388 = v_4387;
  } else {
    v_4388 = sub_84;
  };
  if (instanciador_c2_lamp) {
    v_4385 = false;
  } else {
    v_4385 = sub_83;
  };
  if (instanciador_l2) {
    v_4386 = false;
  } else {
    v_4386 = v_4385;
  };
  if (instanciador_c2) {
    sub_82 = v_4386;
  } else {
    sub_82 = v_4388;
  };
  if (instanciador_ck_9_1) {
    sub_81 = sub_82;
  } else {
    sub_81 = false;
  };
  if (instanciador_c1_lamp) {
    v_4391 = sub_81;
  } else {
    v_4391 = sub_82;
  };
  if (instanciador_l1) {
    v_4392 = v_4391;
  } else {
    v_4392 = sub_82;
  };
  if (instanciador_c1_lamp) {
    v_4389 = false;
  } else {
    v_4389 = sub_81;
  };
  if (instanciador_l1) {
    v_4390 = false;
  } else {
    v_4390 = v_4389;
  };
  if (instanciador_c1) {
    sub_80 = v_4390;
  } else {
    sub_80 = v_4392;
  };
  if (instanciador_neutro_input) {
    sub_63 = sub_64;
  } else {
    sub_63 = sub_80;
  };
  if (instanciador_seguranca_input) {
    v_4410 = sub_63;
  } else {
    v_4410 = v_4409;
  };
  if (instanciador_domingol_input) {
    v_4411 = sub_53;
  } else {
    v_4411 = v_4410;
  };
  if (instanciador_domingo_input) {
    sub_52 = sub_37;
  } else {
    sub_52 = v_4411;
  };
  if (instanciador_v_341) {
    v_4412 = sub_36;
  } else {
    v_4412 = sub_52;
  };
  if (instanciador_sexta_input) {
    sub_51 = sub_36;
  } else {
    sub_51 = v_4412;
  };
  if (instanciador_v_339) {
    v_4453 = sub_51;
  } else {
    v_4453 = sub_3;
  };
  if (instanciador_neutro_input) {
    sub_94 = sub_64;
  } else {
    sub_94 = sub_40;
  };
  if (instanciador_seguranca_input) {
    v_4372 = sub_63;
  } else {
    v_4372 = sub_94;
  };
  if (instanciador_domingol_input) {
    sub_93 = sub_53;
  } else {
    sub_93 = v_4372;
  };
  if (instanciador_domingo_input) {
    sub_92 = sub_37;
  } else {
    sub_92 = sub_93;
  };
  if (instanciador_v_341) {
    sub_91 = sub_36;
  } else {
    sub_91 = sub_92;
  };
  sub_90 = sub_91;
  if (instanciador_v_339) {
    v_4454 = sub_51;
  } else {
    v_4454 = sub_90;
  };
  if (instanciador_ebd_input) {
    sub_2 = v_4453;
  } else {
    sub_2 = v_4454;
  };
  if (instanciador_seguranca_input) {
    v_4368 = sub_80;
  } else {
    v_4368 = sub_64;
  };
  if (instanciador_domingol_input) {
    v_4369 = sub_53;
    v_4367 = sub_53;
  } else {
    v_4369 = v_4368;
    v_4367 = sub_38;
  };
  if (instanciador_domingo_input) {
    v_4370 = v_4367;
  } else {
    v_4370 = v_4369;
  };
  if (instanciador_domingol_input) {
    v_4366 = sub_53;
    v_4365 = sub_53;
  } else {
    v_4366 = sub_63;
    v_4365 = sub_94;
  };
  if (instanciador_domingo_input) {
    sub_96 = v_4365;
  } else {
    sub_96 = v_4366;
  };
  if (instanciador_v_341) {
    v_4371 = v_4370;
  } else {
    v_4371 = sub_96;
  };
  if (instanciador_sexta_input) {
    sub_95 = sub_36;
  } else {
    sub_95 = v_4371;
  };
  if (instanciador_neutro_input) {
    v_4364 = sub_64;
  } else {
    v_4364 = sub_55;
  };
  if (instanciador_seguranca_input) {
    sub_98 = sub_63;
  } else {
    sub_98 = v_4364;
  };
  if (instanciador_domingo_input) {
    sub_97 = sub_37;
  } else {
    sub_97 = sub_98;
  };
  if (instanciador_v_341) {
    v_4455 = sub_93;
  } else {
    v_4455 = sub_97;
  };
  if (instanciador_sexta_input) {
    v_4456 = sub_36;
  } else {
    v_4456 = v_4455;
  };
  if (instanciador_v_339) {
    v_4457 = v_4456;
  } else {
    v_4457 = sub_95;
  };
  if (instanciador_ebd_input) {
    v_4458 = sub_5;
  } else {
    v_4458 = v_4457;
  };
  if (instanciador_v_340) {
    sub_1 = v_4458;
  } else {
    sub_1 = sub_2;
  };
  sub_113 = sub_25;
  if (instanciador_ck_17_1) {
    sub_112 = sub_113;
  } else {
    sub_112 = false;
  };
  if (instanciador_lx) {
    v_4344 = sub_112;
    v_4342 = false;
  } else {
    v_4344 = sub_113;
    v_4342 = sub_112;
  };
  if (instanciador_c_lampExt) {
    v_4343 = false;
  } else {
    v_4343 = v_4342;
  };
  sub_114 = sub_113;
  if (instanciador_c_lampExt) {
    v_4345 = v_4344;
  } else {
    v_4345 = sub_114;
  };
  if (instanciador_cx) {
    sub_111 = v_4343;
  } else {
    sub_111 = v_4345;
  };
  if (instanciador_ck_15_1) {
    sub_110 = sub_111;
  } else {
    sub_110 = false;
  };
  if (instanciador_l4) {
    v_4348 = sub_110;
  } else {
    v_4348 = sub_111;
  };
  if (instanciador_c4_lamp) {
    v_4349 = v_4348;
  } else {
    v_4349 = sub_111;
  };
  if (instanciador_l4) {
    v_4346 = false;
  } else {
    v_4346 = sub_110;
  };
  if (instanciador_c4_lamp) {
    v_4347 = false;
  } else {
    v_4347 = v_4346;
  };
  if (instanciador_c4) {
    sub_109 = v_4347;
  } else {
    sub_109 = v_4349;
  };
  if (instanciador_ck_13_1) {
    sub_115 = false;
  } else {
    sub_115 = sub_109;
  };
  if (instanciador_c3_lamp) {
    v_4352 = sub_115;
  } else {
    v_4352 = false;
  };
  if (instanciador_l3) {
    v_4353 = v_4352;
  } else {
    v_4353 = false;
  };
  if (instanciador_c3_lamp) {
    v_4350 = sub_109;
  } else {
    v_4350 = sub_115;
  };
  if (instanciador_l3) {
    v_4351 = sub_109;
  } else {
    v_4351 = v_4350;
  };
  if (instanciador_c3) {
    sub_108 = v_4351;
  } else {
    sub_108 = v_4353;
  };
  if (instanciador_ck_11_1) {
    sub_116 = false;
  } else {
    sub_116 = sub_108;
  };
  if (instanciador_c2_lamp) {
    v_4356 = sub_116;
  } else {
    v_4356 = false;
  };
  if (instanciador_l2) {
    v_4357 = v_4356;
  } else {
    v_4357 = false;
  };
  if (instanciador_c2_lamp) {
    v_4354 = sub_108;
  } else {
    v_4354 = sub_116;
  };
  if (instanciador_l2) {
    v_4355 = sub_108;
  } else {
    v_4355 = v_4354;
  };
  if (instanciador_c2) {
    sub_107 = v_4355;
  } else {
    sub_107 = v_4357;
  };
  if (instanciador_ck_9_1) {
    sub_117 = false;
  } else {
    sub_117 = sub_107;
  };
  if (instanciador_c1_lamp) {
    v_4360 = sub_117;
  } else {
    v_4360 = false;
  };
  if (instanciador_l1) {
    v_4361 = v_4360;
  } else {
    v_4361 = false;
  };
  if (instanciador_c1_lamp) {
    v_4358 = sub_107;
  } else {
    v_4358 = sub_117;
  };
  if (instanciador_l1) {
    v_4359 = sub_107;
  } else {
    v_4359 = v_4358;
  };
  if (instanciador_c1) {
    sub_106 = v_4359;
  } else {
    sub_106 = v_4361;
  };
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  sub_102 = sub_103;
  if (instanciador_ck_17_1) {
    sub_128 = false;
  } else {
    sub_128 = sub_113;
  };
  if (instanciador_lx) {
    v_4324 = sub_128;
  } else {
    v_4324 = false;
  };
  if (instanciador_c_lampExt) {
    v_4325 = v_4324;
  } else {
    v_4325 = false;
  };
  if (instanciador_lx) {
    v_4322 = sub_113;
  } else {
    v_4322 = sub_128;
  };
  if (instanciador_c_lampExt) {
    v_4323 = sub_114;
  } else {
    v_4323 = v_4322;
  };
  if (instanciador_cx) {
    sub_127 = v_4323;
  } else {
    sub_127 = v_4325;
  };
  sub_126 = sub_127;
  if (instanciador_ck_15_1) {
    sub_129 = false;
  } else {
    sub_129 = sub_127;
  };
  if (instanciador_l4) {
    v_4328 = sub_129;
  } else {
    v_4328 = false;
  };
  if (instanciador_c4_lamp) {
    v_4329 = v_4328;
  } else {
    v_4329 = false;
  };
  if (instanciador_l4) {
    v_4326 = sub_127;
  } else {
    v_4326 = sub_129;
  };
  if (instanciador_c4_lamp) {
    v_4327 = sub_126;
  } else {
    v_4327 = v_4326;
  };
  if (instanciador_c4) {
    sub_125 = v_4327;
  } else {
    sub_125 = v_4329;
  };
  if (instanciador_ck_13_1) {
    sub_130 = false;
  } else {
    sub_130 = sub_125;
  };
  if (instanciador_c3_lamp) {
    v_4332 = sub_130;
  } else {
    v_4332 = false;
  };
  if (instanciador_l3) {
    v_4333 = v_4332;
  } else {
    v_4333 = false;
  };
  if (instanciador_c3_lamp) {
    v_4330 = sub_125;
  } else {
    v_4330 = sub_130;
  };
  if (instanciador_l3) {
    v_4331 = sub_125;
  } else {
    v_4331 = v_4330;
  };
  if (instanciador_c3) {
    sub_124 = v_4331;
  } else {
    sub_124 = v_4333;
  };
  if (instanciador_ck_11_1) {
    sub_131 = false;
  } else {
    sub_131 = sub_124;
  };
  if (instanciador_c2_lamp) {
    v_4336 = sub_131;
  } else {
    v_4336 = false;
  };
  if (instanciador_l2) {
    v_4337 = v_4336;
  } else {
    v_4337 = false;
  };
  if (instanciador_c2_lamp) {
    v_4334 = sub_124;
  } else {
    v_4334 = sub_131;
  };
  if (instanciador_l2) {
    v_4335 = sub_124;
  } else {
    v_4335 = v_4334;
  };
  if (instanciador_c2) {
    sub_123 = v_4335;
  } else {
    sub_123 = v_4337;
  };
  if (instanciador_ck_9_1) {
    sub_132 = false;
  } else {
    sub_132 = sub_123;
  };
  if (instanciador_c1_lamp) {
    v_4340 = sub_132;
  } else {
    v_4340 = false;
  };
  if (instanciador_l1) {
    v_4341 = v_4340;
  } else {
    v_4341 = false;
  };
  if (instanciador_c1_lamp) {
    v_4338 = sub_123;
  } else {
    v_4338 = sub_132;
  };
  if (instanciador_l1) {
    v_4339 = sub_123;
  } else {
    v_4339 = v_4338;
  };
  if (instanciador_c1) {
    sub_122 = v_4339;
  } else {
    sub_122 = v_4341;
  };
  sub_121 = sub_122;
  sub_120 = sub_121;
  sub_119 = sub_120;
  sub_118 = sub_119;
  if (instanciador_v_341) {
    sub_101 = sub_118;
  } else {
    sub_101 = sub_102;
  };
  sub_100 = sub_101;
  if (instanciador_ck_15_1) {
    sub_143 = sub_127;
  } else {
    sub_143 = false;
  };
  if (instanciador_l4) {
    v_4304 = sub_143;
  } else {
    v_4304 = sub_127;
  };
  if (instanciador_c4_lamp) {
    v_4305 = v_4304;
  } else {
    v_4305 = sub_126;
  };
  if (instanciador_l4) {
    v_4302 = false;
  } else {
    v_4302 = sub_143;
  };
  if (instanciador_c4_lamp) {
    v_4303 = false;
  } else {
    v_4303 = v_4302;
  };
  if (instanciador_c4) {
    sub_142 = v_4303;
  } else {
    sub_142 = v_4305;
  };
  if (instanciador_ck_13_1) {
    sub_144 = false;
  } else {
    sub_144 = sub_142;
  };
  if (instanciador_c3_lamp) {
    v_4308 = sub_144;
  } else {
    v_4308 = false;
  };
  if (instanciador_l3) {
    v_4309 = v_4308;
  } else {
    v_4309 = false;
  };
  if (instanciador_c3_lamp) {
    v_4306 = sub_142;
  } else {
    v_4306 = sub_144;
  };
  if (instanciador_l3) {
    v_4307 = sub_142;
  } else {
    v_4307 = v_4306;
  };
  if (instanciador_c3) {
    sub_141 = v_4307;
  } else {
    sub_141 = v_4309;
  };
  if (instanciador_ck_11_1) {
    sub_140 = sub_141;
  } else {
    sub_140 = false;
  };
  if (instanciador_c2_lamp) {
    v_4312 = sub_140;
  } else {
    v_4312 = sub_141;
  };
  if (instanciador_l2) {
    v_4313 = v_4312;
  } else {
    v_4313 = sub_141;
  };
  if (instanciador_c2_lamp) {
    v_4310 = false;
  } else {
    v_4310 = sub_140;
  };
  if (instanciador_l2) {
    v_4311 = false;
  } else {
    v_4311 = v_4310;
  };
  if (instanciador_c2) {
    sub_139 = v_4311;
  } else {
    sub_139 = v_4313;
  };
  if (instanciador_ck_9_1) {
    sub_138 = sub_139;
  } else {
    sub_138 = false;
  };
  if (instanciador_c1_lamp) {
    v_4316 = sub_138;
  } else {
    v_4316 = sub_139;
  };
  if (instanciador_l1) {
    v_4317 = v_4316;
  } else {
    v_4317 = sub_139;
  };
  if (instanciador_c1_lamp) {
    v_4314 = false;
  } else {
    v_4314 = sub_138;
  };
  if (instanciador_l1) {
    v_4315 = false;
  } else {
    v_4315 = v_4314;
  };
  if (instanciador_c1) {
    sub_137 = v_4315;
  } else {
    sub_137 = v_4317;
  };
  sub_136 = sub_137;
  sub_135 = sub_136;
  sub_159 = sub_114;
  sub_158 = sub_159;
  sub_157 = sub_158;
  sub_156 = sub_157;
  sub_155 = sub_156;
  sub_154 = sub_155;
  sub_153 = sub_154;
  sub_152 = sub_153;
  sub_151 = sub_152;
  sub_150 = sub_151;
  sub_149 = sub_150;
  sub_148 = sub_149;
  sub_147 = sub_148;
  sub_146 = sub_147;
  if (instanciador_neutro_input) {
    v_4318 = sub_146;
  } else {
    v_4318 = sub_106;
  };
  if (instanciador_lv) {
    sub_170 = sub_18;
  } else {
    sub_170 = sub_17;
  };
  if (instanciador_ck_17_1) {
    sub_169 = sub_170;
  } else {
    sub_169 = false;
  };
  if (instanciador_lx) {
    v_4284 = sub_169;
  } else {
    v_4284 = sub_170;
  };
  if (instanciador_c_lampExt) {
    v_4285 = v_4284;
  } else {
    v_4285 = sub_170;
  };
  if (instanciador_lx) {
    v_4282 = false;
  } else {
    v_4282 = sub_169;
  };
  if (instanciador_c_lampExt) {
    v_4283 = false;
  } else {
    v_4283 = v_4282;
  };
  if (instanciador_cx) {
    sub_168 = v_4283;
  } else {
    sub_168 = v_4285;
  };
  if (instanciador_ck_15_1) {
    sub_167 = sub_168;
  } else {
    sub_167 = false;
  };
  if (instanciador_l4) {
    v_4288 = sub_167;
  } else {
    v_4288 = sub_168;
  };
  if (instanciador_c4_lamp) {
    v_4289 = v_4288;
  } else {
    v_4289 = sub_168;
  };
  if (instanciador_l4) {
    v_4286 = false;
  } else {
    v_4286 = sub_167;
  };
  if (instanciador_c4_lamp) {
    v_4287 = false;
  } else {
    v_4287 = v_4286;
  };
  if (instanciador_c4) {
    sub_166 = v_4287;
  } else {
    sub_166 = v_4289;
  };
  if (instanciador_ck_13_1) {
    sub_165 = sub_166;
  } else {
    sub_165 = false;
  };
  if (instanciador_c3_lamp) {
    v_4292 = sub_165;
  } else {
    v_4292 = sub_166;
  };
  if (instanciador_l3) {
    v_4293 = v_4292;
  } else {
    v_4293 = sub_166;
  };
  if (instanciador_c3_lamp) {
    v_4290 = false;
  } else {
    v_4290 = sub_165;
  };
  if (instanciador_l3) {
    v_4291 = false;
  } else {
    v_4291 = v_4290;
  };
  if (instanciador_c3) {
    sub_164 = v_4291;
  } else {
    sub_164 = v_4293;
  };
  if (instanciador_ck_11_1) {
    sub_163 = sub_164;
  } else {
    sub_163 = false;
  };
  if (instanciador_c2_lamp) {
    v_4296 = sub_163;
  } else {
    v_4296 = sub_164;
  };
  if (instanciador_l2) {
    v_4297 = v_4296;
  } else {
    v_4297 = sub_164;
  };
  if (instanciador_c2_lamp) {
    v_4294 = false;
  } else {
    v_4294 = sub_163;
  };
  if (instanciador_l2) {
    v_4295 = false;
  } else {
    v_4295 = v_4294;
  };
  if (instanciador_c2) {
    sub_162 = v_4295;
  } else {
    sub_162 = v_4297;
  };
  if (instanciador_ck_9_1) {
    sub_161 = sub_162;
  } else {
    sub_161 = false;
  };
  if (instanciador_c1_lamp) {
    v_4300 = sub_161;
  } else {
    v_4300 = sub_162;
  };
  if (instanciador_l1) {
    v_4301 = v_4300;
  } else {
    v_4301 = sub_162;
  };
  if (instanciador_c1_lamp) {
    v_4298 = false;
  } else {
    v_4298 = sub_161;
  };
  if (instanciador_l1) {
    v_4299 = false;
  } else {
    v_4299 = v_4298;
  };
  if (instanciador_c1) {
    sub_160 = v_4299;
  } else {
    sub_160 = v_4301;
  };
  if (instanciador_neutro_input) {
    sub_145 = sub_146;
  } else {
    sub_145 = sub_160;
  };
  if (instanciador_seguranca_input) {
    v_4319 = sub_145;
  } else {
    v_4319 = v_4318;
  };
  if (instanciador_domingol_input) {
    v_4320 = sub_135;
  } else {
    v_4320 = v_4319;
  };
  if (instanciador_domingo_input) {
    sub_134 = sub_119;
  } else {
    sub_134 = v_4320;
  };
  if (instanciador_v_341) {
    v_4321 = sub_118;
  } else {
    v_4321 = sub_134;
  };
  if (instanciador_sexta_input) {
    sub_133 = sub_118;
  } else {
    sub_133 = v_4321;
  };
  if (instanciador_v_339) {
    v_4362 = sub_133;
  } else {
    v_4362 = sub_100;
  };
  if (instanciador_neutro_input) {
    sub_175 = sub_146;
  } else {
    sub_175 = sub_122;
  };
  if (instanciador_seguranca_input) {
    v_4281 = sub_145;
  } else {
    v_4281 = sub_175;
  };
  if (instanciador_domingol_input) {
    sub_174 = sub_135;
  } else {
    sub_174 = v_4281;
  };
  if (instanciador_domingo_input) {
    sub_173 = sub_119;
  } else {
    sub_173 = sub_174;
  };
  if (instanciador_v_341) {
    sub_172 = sub_118;
  } else {
    sub_172 = sub_173;
  };
  sub_171 = sub_172;
  if (instanciador_v_339) {
    v_4363 = sub_133;
  } else {
    v_4363 = sub_171;
  };
  if (instanciador_ebd_input) {
    sub_99 = v_4362;
  } else {
    sub_99 = v_4363;
  };
  if (instanciador_seguranca_input) {
    v_4277 = sub_160;
  } else {
    v_4277 = sub_146;
  };
  if (instanciador_domingol_input) {
    v_4278 = sub_135;
    v_4276 = sub_135;
  } else {
    v_4278 = v_4277;
    v_4276 = sub_120;
  };
  if (instanciador_domingo_input) {
    v_4279 = v_4276;
  } else {
    v_4279 = v_4278;
  };
  if (instanciador_domingol_input) {
    v_4275 = sub_135;
    v_4274 = sub_135;
  } else {
    v_4275 = sub_145;
    v_4274 = sub_175;
  };
  if (instanciador_domingo_input) {
    sub_177 = v_4274;
  } else {
    sub_177 = v_4275;
  };
  if (instanciador_v_341) {
    v_4280 = v_4279;
  } else {
    v_4280 = sub_177;
  };
  if (instanciador_sexta_input) {
    sub_176 = sub_118;
  } else {
    sub_176 = v_4280;
  };
  if (instanciador_neutro_input) {
    v = sub_146;
  } else {
    v = sub_137;
  };
  if (instanciador_seguranca_input) {
    sub_179 = sub_145;
  } else {
    sub_179 = v;
  };
  if (instanciador_domingo_input) {
    sub_178 = sub_119;
  } else {
    sub_178 = sub_179;
  };
  if (instanciador_v_341) {
    v_4459 = sub_174;
  } else {
    v_4459 = sub_178;
  };
  if (instanciador_sexta_input) {
    v_4460 = sub_118;
  } else {
    v_4460 = v_4459;
  };
  if (instanciador_v_339) {
    v_4461 = v_4460;
  } else {
    v_4461 = sub_176;
  };
  if (instanciador_ebd_input) {
    v_4462 = sub_102;
  } else {
    v_4462 = v_4461;
  };
  if (instanciador_v_340) {
    v_4463 = v_4462;
  } else {
    v_4463 = sub_99;
  };
  if (p_instanciador_cv) {
    sub_0 = v_4463;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_cv = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_cx_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_c4, int instanciador_c3,
  int instanciador_c2, int instanciador_c1, int instanciador_c_lampExt,
  int instanciador_c4_lamp, int instanciador_c3_lamp,
  int instanciador_c2_lamp, int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_cx_out* _out) {
  
  int v_4549;
  int v_4548;
  int v_4547;
  int v_4546;
  int v_4545;
  int v_4544;
  int v_4543;
  int v_4542;
  int v_4541;
  int v_4540;
  int v_4539;
  int v_4538;
  int v_4537;
  int v_4536;
  int v_4535;
  int v_4534;
  int v_4533;
  int v_4532;
  int v_4531;
  int v_4530;
  int v_4529;
  int v_4528;
  int v_4527;
  int v_4526;
  int v_4525;
  int v_4524;
  int v_4523;
  int v_4522;
  int v_4521;
  int v_4520;
  int v_4519;
  int v_4518;
  int v_4517;
  int v_4516;
  int v_4515;
  int v_4514;
  int v_4513;
  int v_4512;
  int v_4511;
  int v_4510;
  int v_4509;
  int v_4508;
  int v_4507;
  int v_4506;
  int v_4505;
  int v_4504;
  int v_4503;
  int v_4502;
  int v_4501;
  int v_4500;
  int v_4499;
  int v_4498;
  int v_4497;
  int v_4496;
  int v_4495;
  int v_4494;
  int v_4493;
  int v_4492;
  int v_4491;
  int v_4490;
  int v_4489;
  int v_4488;
  int v_4487;
  int v_4486;
  int v_4485;
  int v_4484;
  int v_4483;
  int v_4482;
  int v_4481;
  int v_4480;
  int v_4479;
  int v_4478;
  int v_4477;
  int v_4476;
  int v_4475;
  int v_4474;
  int v_4473;
  int v_4472;
  int v_4471;
  int v_4470;
  int v_4469;
  int v_4468;
  int v_4467;
  int v_4466;
  int v_4465;
  int v_4464;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  sub_22 = false;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (instanciador_ck_17_1) {
    v_4524 = sub_15;
  } else {
    v_4524 = false;
  };
  if (instanciador_lx) {
    v_4525 = v_4524;
  } else {
    v_4525 = sub_15;
  };
  sub_31 = true;
  if (p_instanciador_cx) {
    sub_30 = sub_31;
  } else {
    sub_30 = sub_22;
  };
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  if (instanciador_ck_17_1) {
    v_4526 = sub_23;
  } else {
    v_4526 = sub_15;
  };
  if (instanciador_lx) {
    v_4527 = sub_15;
  } else {
    v_4527 = v_4526;
  };
  if (instanciador_c_lampExt) {
    sub_14 = v_4525;
  } else {
    sub_14 = v_4527;
  };
  if (instanciador_ck_15_1) {
    sub_13 = sub_14;
  } else {
    sub_13 = false;
  };
  if (instanciador_l4) {
    v_4530 = sub_13;
  } else {
    v_4530 = sub_14;
  };
  if (instanciador_c4_lamp) {
    v_4531 = v_4530;
  } else {
    v_4531 = sub_14;
  };
  if (instanciador_l4) {
    v_4528 = false;
  } else {
    v_4528 = sub_13;
  };
  if (instanciador_c4_lamp) {
    v_4529 = false;
  } else {
    v_4529 = v_4528;
  };
  if (instanciador_c4) {
    sub_12 = v_4529;
  } else {
    sub_12 = v_4531;
  };
  sub_11 = sub_12;
  if (instanciador_ck_13_1) {
    sub_32 = false;
  } else {
    sub_32 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_4534 = sub_32;
  } else {
    v_4534 = false;
  };
  if (instanciador_l3) {
    v_4535 = v_4534;
  } else {
    v_4535 = false;
  };
  if (instanciador_c3_lamp) {
    v_4532 = sub_12;
  } else {
    v_4532 = sub_32;
  };
  if (instanciador_l3) {
    v_4533 = sub_11;
  } else {
    v_4533 = v_4532;
  };
  if (instanciador_c3) {
    sub_10 = v_4533;
  } else {
    sub_10 = v_4535;
  };
  if (instanciador_ck_11_1) {
    sub_33 = false;
  } else {
    sub_33 = sub_10;
  };
  if (instanciador_c2_lamp) {
    v_4538 = sub_33;
  } else {
    v_4538 = false;
  };
  if (instanciador_l2) {
    v_4539 = v_4538;
  } else {
    v_4539 = false;
  };
  if (instanciador_c2_lamp) {
    v_4536 = sub_10;
  } else {
    v_4536 = sub_33;
  };
  if (instanciador_l2) {
    v_4537 = sub_10;
  } else {
    v_4537 = v_4536;
  };
  if (instanciador_c2) {
    sub_9 = v_4537;
  } else {
    sub_9 = v_4539;
  };
  if (instanciador_ck_9_1) {
    sub_34 = false;
  } else {
    sub_34 = sub_9;
  };
  if (instanciador_c1_lamp) {
    v_4542 = sub_34;
  } else {
    v_4542 = false;
  };
  if (instanciador_l1) {
    v_4543 = v_4542;
  } else {
    v_4543 = false;
  };
  if (instanciador_c1_lamp) {
    v_4540 = sub_9;
  } else {
    v_4540 = sub_34;
  };
  if (instanciador_l1) {
    v_4541 = sub_9;
  } else {
    v_4541 = v_4540;
  };
  if (instanciador_c1) {
    sub_8 = v_4541;
  } else {
    sub_8 = v_4543;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_51 = sub_31;
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  if (instanciador_ck_17_1) {
    v_4506 = false;
  } else {
    v_4506 = sub_45;
  };
  if (instanciador_lx) {
    v_4507 = sub_45;
  } else {
    v_4507 = v_4506;
  };
  if (instanciador_ck_17_1) {
    v_4504 = sub_45;
  } else {
    v_4504 = sub_23;
  };
  if (instanciador_lx) {
    v_4505 = v_4504;
  } else {
    v_4505 = sub_45;
  };
  if (instanciador_c_lampExt) {
    sub_44 = v_4505;
  } else {
    sub_44 = v_4507;
  };
  sub_43 = sub_44;
  if (instanciador_ck_15_1) {
    sub_52 = false;
  } else {
    sub_52 = sub_44;
  };
  if (instanciador_l4) {
    v_4510 = sub_52;
  } else {
    v_4510 = false;
  };
  if (instanciador_c4_lamp) {
    v_4511 = v_4510;
  } else {
    v_4511 = false;
  };
  if (instanciador_l4) {
    v_4508 = sub_44;
  } else {
    v_4508 = sub_52;
  };
  if (instanciador_c4_lamp) {
    v_4509 = sub_43;
  } else {
    v_4509 = v_4508;
  };
  if (instanciador_c4) {
    sub_42 = v_4509;
  } else {
    sub_42 = v_4511;
  };
  if (instanciador_ck_13_1) {
    sub_53 = false;
  } else {
    sub_53 = sub_42;
  };
  if (instanciador_c3_lamp) {
    v_4514 = sub_53;
  } else {
    v_4514 = false;
  };
  if (instanciador_l3) {
    v_4515 = v_4514;
  } else {
    v_4515 = false;
  };
  if (instanciador_c3_lamp) {
    v_4512 = sub_42;
  } else {
    v_4512 = sub_53;
  };
  if (instanciador_l3) {
    v_4513 = sub_42;
  } else {
    v_4513 = v_4512;
  };
  if (instanciador_c3) {
    sub_41 = v_4513;
  } else {
    sub_41 = v_4515;
  };
  if (instanciador_ck_11_1) {
    sub_54 = false;
  } else {
    sub_54 = sub_41;
  };
  if (instanciador_c2_lamp) {
    v_4518 = sub_54;
  } else {
    v_4518 = false;
  };
  if (instanciador_l2) {
    v_4519 = v_4518;
  } else {
    v_4519 = false;
  };
  if (instanciador_c2_lamp) {
    v_4516 = sub_41;
  } else {
    v_4516 = sub_54;
  };
  if (instanciador_l2) {
    v_4517 = sub_41;
  } else {
    v_4517 = v_4516;
  };
  if (instanciador_c2) {
    sub_40 = v_4517;
  } else {
    sub_40 = v_4519;
  };
  if (instanciador_ck_9_1) {
    sub_55 = false;
  } else {
    sub_55 = sub_40;
  };
  if (instanciador_c1_lamp) {
    v_4522 = sub_55;
  } else {
    v_4522 = false;
  };
  if (instanciador_l1) {
    v_4523 = v_4522;
  } else {
    v_4523 = false;
  };
  if (instanciador_c1_lamp) {
    v_4520 = sub_40;
  } else {
    v_4520 = sub_55;
  };
  if (instanciador_l1) {
    v_4521 = sub_40;
  } else {
    v_4521 = v_4520;
  };
  if (instanciador_c1) {
    sub_39 = v_4521;
  } else {
    sub_39 = v_4523;
  };
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  if (instanciador_v_341) {
    sub_3 = sub_35;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  if (instanciador_ck_15_1) {
    sub_66 = sub_44;
  } else {
    sub_66 = false;
  };
  if (instanciador_l4) {
    v_4486 = sub_66;
  } else {
    v_4486 = sub_44;
  };
  if (instanciador_c4_lamp) {
    v_4487 = v_4486;
  } else {
    v_4487 = sub_43;
  };
  if (instanciador_l4) {
    v_4484 = false;
  } else {
    v_4484 = sub_66;
  };
  if (instanciador_c4_lamp) {
    v_4485 = false;
  } else {
    v_4485 = v_4484;
  };
  if (instanciador_c4) {
    sub_65 = v_4485;
  } else {
    sub_65 = v_4487;
  };
  if (instanciador_ck_13_1) {
    sub_67 = false;
  } else {
    sub_67 = sub_65;
  };
  if (instanciador_c3_lamp) {
    v_4490 = sub_67;
  } else {
    v_4490 = false;
  };
  if (instanciador_l3) {
    v_4491 = v_4490;
  } else {
    v_4491 = false;
  };
  if (instanciador_c3_lamp) {
    v_4488 = sub_65;
  } else {
    v_4488 = sub_67;
  };
  if (instanciador_l3) {
    v_4489 = sub_65;
  } else {
    v_4489 = v_4488;
  };
  if (instanciador_c3) {
    sub_64 = v_4489;
  } else {
    sub_64 = v_4491;
  };
  if (instanciador_ck_11_1) {
    sub_63 = sub_64;
  } else {
    sub_63 = false;
  };
  if (instanciador_c2_lamp) {
    v_4494 = sub_63;
  } else {
    v_4494 = sub_64;
  };
  if (instanciador_l2) {
    v_4495 = v_4494;
  } else {
    v_4495 = sub_64;
  };
  if (instanciador_c2_lamp) {
    v_4492 = false;
  } else {
    v_4492 = sub_63;
  };
  if (instanciador_l2) {
    v_4493 = false;
  } else {
    v_4493 = v_4492;
  };
  if (instanciador_c2) {
    sub_62 = v_4493;
  } else {
    sub_62 = v_4495;
  };
  if (instanciador_ck_9_1) {
    sub_61 = sub_62;
  } else {
    sub_61 = false;
  };
  if (instanciador_c1_lamp) {
    v_4498 = sub_61;
  } else {
    v_4498 = sub_62;
  };
  if (instanciador_l1) {
    v_4499 = v_4498;
  } else {
    v_4499 = sub_62;
  };
  if (instanciador_c1_lamp) {
    v_4496 = false;
  } else {
    v_4496 = sub_61;
  };
  if (instanciador_l1) {
    v_4497 = false;
  } else {
    v_4497 = v_4496;
  };
  if (instanciador_c1) {
    sub_60 = v_4497;
  } else {
    sub_60 = v_4499;
  };
  sub_59 = sub_60;
  sub_58 = sub_59;
  sub_82 = sub_23;
  sub_81 = sub_82;
  sub_80 = sub_81;
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  if (instanciador_neutro_input) {
    v_4500 = sub_69;
  } else {
    v_4500 = sub_8;
  };
  if (instanciador_ck_13_1) {
    sub_88 = sub_12;
  } else {
    sub_88 = false;
  };
  if (instanciador_c3_lamp) {
    v_4474 = sub_88;
  } else {
    v_4474 = sub_12;
  };
  if (instanciador_l3) {
    v_4475 = v_4474;
  } else {
    v_4475 = sub_11;
  };
  if (instanciador_c3_lamp) {
    v_4472 = false;
  } else {
    v_4472 = sub_88;
  };
  if (instanciador_l3) {
    v_4473 = false;
  } else {
    v_4473 = v_4472;
  };
  if (instanciador_c3) {
    sub_87 = v_4473;
  } else {
    sub_87 = v_4475;
  };
  if (instanciador_ck_11_1) {
    sub_86 = sub_87;
  } else {
    sub_86 = false;
  };
  if (instanciador_c2_lamp) {
    v_4478 = sub_86;
  } else {
    v_4478 = sub_87;
  };
  if (instanciador_l2) {
    v_4479 = v_4478;
  } else {
    v_4479 = sub_87;
  };
  if (instanciador_c2_lamp) {
    v_4476 = false;
  } else {
    v_4476 = sub_86;
  };
  if (instanciador_l2) {
    v_4477 = false;
  } else {
    v_4477 = v_4476;
  };
  if (instanciador_c2) {
    sub_85 = v_4477;
  } else {
    sub_85 = v_4479;
  };
  if (instanciador_ck_9_1) {
    sub_84 = sub_85;
  } else {
    sub_84 = false;
  };
  if (instanciador_c1_lamp) {
    v_4482 = sub_84;
  } else {
    v_4482 = sub_85;
  };
  if (instanciador_l1) {
    v_4483 = v_4482;
  } else {
    v_4483 = sub_85;
  };
  if (instanciador_c1_lamp) {
    v_4480 = false;
  } else {
    v_4480 = sub_84;
  };
  if (instanciador_l1) {
    v_4481 = false;
  } else {
    v_4481 = v_4480;
  };
  if (instanciador_c1) {
    sub_83 = v_4481;
  } else {
    sub_83 = v_4483;
  };
  if (instanciador_neutro_input) {
    sub_68 = sub_69;
  } else {
    sub_68 = sub_83;
  };
  if (instanciador_seguranca_input) {
    v_4501 = sub_68;
  } else {
    v_4501 = v_4500;
  };
  if (instanciador_domingol_input) {
    v_4502 = sub_58;
  } else {
    v_4502 = v_4501;
  };
  if (instanciador_domingo_input) {
    sub_57 = sub_36;
  } else {
    sub_57 = v_4502;
  };
  if (instanciador_v_341) {
    v_4503 = sub_35;
  } else {
    v_4503 = sub_57;
  };
  if (instanciador_sexta_input) {
    sub_56 = sub_35;
  } else {
    sub_56 = v_4503;
  };
  if (instanciador_v_339) {
    v_4544 = sub_56;
  } else {
    v_4544 = sub_2;
  };
  if (instanciador_neutro_input) {
    sub_93 = sub_69;
  } else {
    sub_93 = sub_39;
  };
  if (instanciador_seguranca_input) {
    v_4471 = sub_68;
  } else {
    v_4471 = sub_93;
  };
  if (instanciador_domingol_input) {
    sub_92 = sub_58;
  } else {
    sub_92 = v_4471;
  };
  if (instanciador_domingo_input) {
    sub_91 = sub_36;
  } else {
    sub_91 = sub_92;
  };
  if (instanciador_v_341) {
    sub_90 = sub_35;
  } else {
    sub_90 = sub_91;
  };
  sub_89 = sub_90;
  if (instanciador_v_339) {
    v_4545 = sub_56;
  } else {
    v_4545 = sub_89;
  };
  if (instanciador_ebd_input) {
    sub_1 = v_4544;
  } else {
    sub_1 = v_4545;
  };
  if (instanciador_seguranca_input) {
    v_4467 = sub_83;
  } else {
    v_4467 = sub_69;
  };
  if (instanciador_domingol_input) {
    v_4468 = sub_58;
    v_4466 = sub_58;
  } else {
    v_4468 = v_4467;
    v_4466 = sub_37;
  };
  if (instanciador_domingo_input) {
    v_4469 = v_4466;
  } else {
    v_4469 = v_4468;
  };
  if (instanciador_domingol_input) {
    v_4465 = sub_58;
    v_4464 = sub_58;
  } else {
    v_4465 = sub_68;
    v_4464 = sub_93;
  };
  if (instanciador_domingo_input) {
    sub_95 = v_4464;
  } else {
    sub_95 = v_4465;
  };
  if (instanciador_v_341) {
    v_4470 = v_4469;
  } else {
    v_4470 = sub_95;
  };
  if (instanciador_sexta_input) {
    sub_94 = sub_35;
  } else {
    sub_94 = v_4470;
  };
  if (instanciador_neutro_input) {
    v = sub_69;
  } else {
    v = sub_60;
  };
  if (instanciador_seguranca_input) {
    sub_97 = sub_68;
  } else {
    sub_97 = v;
  };
  if (instanciador_domingo_input) {
    sub_96 = sub_36;
  } else {
    sub_96 = sub_97;
  };
  if (instanciador_v_341) {
    v_4546 = sub_92;
  } else {
    v_4546 = sub_96;
  };
  if (instanciador_sexta_input) {
    v_4547 = sub_35;
  } else {
    v_4547 = v_4546;
  };
  if (instanciador_v_339) {
    v_4548 = v_4547;
  } else {
    v_4548 = sub_94;
  };
  if (instanciador_ebd_input) {
    v_4549 = sub_4;
  } else {
    v_4549 = v_4548;
  };
  if (instanciador_v_340) {
    sub_0 = v_4549;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_cx = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c4_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_c3, int instanciador_c2,
  int instanciador_c1, int instanciador_c_lampExt, int instanciador_c4_lamp,
  int instanciador_c3_lamp, int instanciador_c2_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c4_out* _out) {
  
  int v_4699;
  int v_4698;
  int v_4697;
  int v_4696;
  int v_4695;
  int v_4694;
  int v_4693;
  int v_4692;
  int v_4691;
  int v_4690;
  int v_4689;
  int v_4688;
  int v_4687;
  int v_4686;
  int v_4685;
  int v_4684;
  int v_4683;
  int v_4682;
  int v_4681;
  int v_4680;
  int v_4679;
  int v_4678;
  int v_4677;
  int v_4676;
  int v_4675;
  int v_4674;
  int v_4673;
  int v_4672;
  int v_4671;
  int v_4670;
  int v_4669;
  int v_4668;
  int v_4667;
  int v_4666;
  int v_4665;
  int v_4664;
  int v_4663;
  int v_4662;
  int v_4661;
  int v_4660;
  int v_4659;
  int v_4658;
  int v_4657;
  int v_4656;
  int v_4655;
  int v_4654;
  int v_4653;
  int v_4652;
  int v_4651;
  int v_4650;
  int v_4649;
  int v_4648;
  int v_4647;
  int v_4646;
  int v_4645;
  int v_4644;
  int v_4643;
  int v_4642;
  int v_4641;
  int v_4640;
  int v_4639;
  int v_4638;
  int v_4637;
  int v_4636;
  int v_4635;
  int v_4634;
  int v_4633;
  int v_4632;
  int v_4631;
  int v_4630;
  int v_4629;
  int v_4628;
  int v_4627;
  int v_4626;
  int v_4625;
  int v_4624;
  int v_4623;
  int v_4622;
  int v_4621;
  int v_4620;
  int v_4619;
  int v_4618;
  int v_4617;
  int v_4616;
  int v_4615;
  int v_4614;
  int v_4613;
  int v_4612;
  int v_4611;
  int v_4610;
  int v_4609;
  int v_4608;
  int v_4607;
  int v_4606;
  int v_4605;
  int v_4604;
  int v_4603;
  int v_4602;
  int v_4601;
  int v_4600;
  int v_4599;
  int v_4598;
  int v_4597;
  int v_4596;
  int v_4595;
  int v_4594;
  int v_4593;
  int v_4592;
  int v_4591;
  int v_4590;
  int v_4589;
  int v_4588;
  int v_4587;
  int v_4586;
  int v_4585;
  int v_4584;
  int v_4583;
  int v_4582;
  int v_4581;
  int v_4580;
  int v_4579;
  int v_4578;
  int v_4577;
  int v_4576;
  int v_4575;
  int v_4574;
  int v_4573;
  int v_4572;
  int v_4571;
  int v_4570;
  int v_4569;
  int v_4568;
  int v_4567;
  int v_4566;
  int v_4565;
  int v_4564;
  int v_4563;
  int v_4562;
  int v_4561;
  int v_4560;
  int v_4559;
  int v_4558;
  int v_4557;
  int v_4556;
  int v_4555;
  int v_4554;
  int v_4553;
  int v_4552;
  int v_4551;
  int v_4550;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  int sub_149;
  int sub_150;
  int sub_151;
  int sub_152;
  int sub_153;
  int sub_154;
  int sub_155;
  int sub_156;
  sub_23 = false;
  sub_22 = sub_23;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  if (instanciador_ck_17_1) {
    v_4674 = sub_16;
  } else {
    v_4674 = false;
  };
  if (instanciador_lx) {
    v_4675 = v_4674;
  } else {
    v_4675 = sub_16;
  };
  sub_24 = sub_16;
  if (instanciador_c_lampExt) {
    sub_15 = v_4675;
  } else {
    sub_15 = sub_24;
  };
  if (instanciador_ck_15_1) {
    v_4676 = sub_15;
  } else {
    v_4676 = false;
  };
  if (instanciador_l4) {
    sub_14 = v_4676;
  } else {
    sub_14 = sub_15;
  };
  if (instanciador_c4_lamp) {
    sub_13 = sub_14;
  } else {
    sub_13 = sub_15;
  };
  sub_12 = sub_13;
  if (instanciador_ck_13_1) {
    sub_25 = false;
  } else {
    sub_25 = sub_13;
  };
  if (instanciador_c3_lamp) {
    v_4679 = sub_25;
  } else {
    v_4679 = false;
  };
  if (instanciador_l3) {
    v_4680 = v_4679;
  } else {
    v_4680 = false;
  };
  if (instanciador_c3_lamp) {
    v_4677 = sub_13;
  } else {
    v_4677 = sub_25;
  };
  if (instanciador_l3) {
    v_4678 = sub_12;
  } else {
    v_4678 = v_4677;
  };
  if (instanciador_c3) {
    sub_11 = v_4678;
  } else {
    sub_11 = v_4680;
  };
  if (instanciador_ck_11_1) {
    sub_26 = false;
  } else {
    sub_26 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_4683 = sub_26;
  } else {
    v_4683 = false;
  };
  if (instanciador_l2) {
    v_4684 = v_4683;
  } else {
    v_4684 = false;
  };
  if (instanciador_c2_lamp) {
    v_4681 = sub_11;
  } else {
    v_4681 = sub_26;
  };
  if (instanciador_l2) {
    v_4682 = sub_11;
  } else {
    v_4682 = v_4681;
  };
  if (instanciador_c2) {
    sub_10 = v_4682;
  } else {
    sub_10 = v_4684;
  };
  if (instanciador_ck_9_1) {
    sub_27 = false;
  } else {
    sub_27 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_4687 = sub_27;
  } else {
    v_4687 = false;
  };
  if (instanciador_l1) {
    v_4688 = v_4687;
  } else {
    v_4688 = false;
  };
  if (instanciador_c1_lamp) {
    v_4685 = sub_10;
  } else {
    v_4685 = sub_27;
  };
  if (instanciador_l1) {
    v_4686 = sub_10;
  } else {
    v_4686 = v_4685;
  };
  if (instanciador_c1) {
    sub_9 = v_4686;
  } else {
    sub_9 = v_4688;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (instanciador_ck_17_1) {
    v_4659 = false;
  } else {
    v_4659 = sub_16;
  };
  if (instanciador_lx) {
    v_4660 = sub_16;
  } else {
    v_4660 = v_4659;
  };
  if (instanciador_c_lampExt) {
    sub_37 = sub_24;
  } else {
    sub_37 = v_4660;
  };
  sub_47 = true;
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  if (instanciador_ck_17_1) {
    v_4657 = false;
  } else {
    v_4657 = sub_40;
  };
  if (instanciador_lx) {
    v_4658 = sub_40;
  } else {
    v_4658 = v_4657;
  };
  sub_39 = sub_40;
  if (instanciador_c_lampExt) {
    sub_38 = sub_39;
  } else {
    sub_38 = v_4658;
  };
  if (instanciador_ck_15_1) {
    sub_36 = sub_38;
  } else {
    sub_36 = sub_37;
  };
  if (instanciador_l4) {
    v_4661 = sub_36;
  } else {
    v_4661 = sub_38;
  };
  if (instanciador_ck_15_1) {
    v_4656 = false;
  } else {
    v_4656 = sub_38;
  };
  if (instanciador_l4) {
    sub_48 = sub_38;
  } else {
    sub_48 = v_4656;
  };
  if (instanciador_c4_lamp) {
    sub_35 = v_4661;
  } else {
    sub_35 = sub_48;
  };
  if (instanciador_ck_13_1) {
    sub_49 = false;
  } else {
    sub_49 = sub_35;
  };
  if (instanciador_c3_lamp) {
    v_4664 = sub_49;
  } else {
    v_4664 = false;
  };
  if (instanciador_l3) {
    v_4665 = v_4664;
  } else {
    v_4665 = false;
  };
  if (instanciador_c3_lamp) {
    v_4662 = sub_35;
  } else {
    v_4662 = sub_49;
  };
  if (instanciador_l3) {
    v_4663 = sub_35;
  } else {
    v_4663 = v_4662;
  };
  if (instanciador_c3) {
    sub_34 = v_4663;
  } else {
    sub_34 = v_4665;
  };
  if (instanciador_ck_11_1) {
    sub_50 = false;
  } else {
    sub_50 = sub_34;
  };
  if (instanciador_c2_lamp) {
    v_4668 = sub_50;
  } else {
    v_4668 = false;
  };
  if (instanciador_l2) {
    v_4669 = v_4668;
  } else {
    v_4669 = false;
  };
  if (instanciador_c2_lamp) {
    v_4666 = sub_34;
  } else {
    v_4666 = sub_50;
  };
  if (instanciador_l2) {
    v_4667 = sub_34;
  } else {
    v_4667 = v_4666;
  };
  if (instanciador_c2) {
    sub_33 = v_4667;
  } else {
    sub_33 = v_4669;
  };
  if (instanciador_ck_9_1) {
    sub_51 = false;
  } else {
    sub_51 = sub_33;
  };
  if (instanciador_c1_lamp) {
    v_4672 = sub_51;
  } else {
    v_4672 = false;
  };
  if (instanciador_l1) {
    v_4673 = v_4672;
  } else {
    v_4673 = false;
  };
  if (instanciador_c1_lamp) {
    v_4670 = sub_33;
  } else {
    v_4670 = sub_51;
  };
  if (instanciador_l1) {
    v_4671 = sub_33;
  } else {
    v_4671 = v_4670;
  };
  if (instanciador_c1) {
    sub_32 = v_4671;
  } else {
    sub_32 = v_4673;
  };
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (instanciador_v_341) {
    sub_4 = sub_28;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (instanciador_ck_15_1) {
    v_4639 = sub_37;
  } else {
    v_4639 = false;
  };
  if (instanciador_l4) {
    sub_62 = v_4639;
  } else {
    sub_62 = sub_37;
  };
  if (instanciador_c4_lamp) {
    sub_61 = sub_62;
  } else {
    sub_61 = sub_37;
  };
  if (instanciador_ck_13_1) {
    sub_63 = false;
  } else {
    sub_63 = sub_61;
  };
  if (instanciador_c3_lamp) {
    v_4642 = sub_63;
  } else {
    v_4642 = false;
  };
  if (instanciador_l3) {
    v_4643 = v_4642;
  } else {
    v_4643 = false;
  };
  if (instanciador_c3_lamp) {
    v_4640 = sub_61;
  } else {
    v_4640 = sub_63;
  };
  if (instanciador_l3) {
    v_4641 = sub_61;
  } else {
    v_4641 = v_4640;
  };
  if (instanciador_c3) {
    sub_60 = v_4641;
  } else {
    sub_60 = v_4643;
  };
  if (instanciador_ck_11_1) {
    sub_59 = sub_60;
  } else {
    sub_59 = false;
  };
  if (instanciador_c2_lamp) {
    v_4646 = sub_59;
  } else {
    v_4646 = sub_60;
  };
  if (instanciador_l2) {
    v_4647 = v_4646;
  } else {
    v_4647 = sub_60;
  };
  if (instanciador_c2_lamp) {
    v_4644 = false;
  } else {
    v_4644 = sub_59;
  };
  if (instanciador_l2) {
    v_4645 = false;
  } else {
    v_4645 = v_4644;
  };
  if (instanciador_c2) {
    sub_58 = v_4645;
  } else {
    sub_58 = v_4647;
  };
  if (instanciador_ck_9_1) {
    sub_57 = sub_58;
  } else {
    sub_57 = false;
  };
  if (instanciador_c1_lamp) {
    v_4650 = sub_57;
  } else {
    v_4650 = sub_58;
  };
  if (instanciador_l1) {
    v_4651 = v_4650;
  } else {
    v_4651 = sub_58;
  };
  if (instanciador_c1_lamp) {
    v_4648 = false;
  } else {
    v_4648 = sub_57;
  };
  if (instanciador_l1) {
    v_4649 = false;
  } else {
    v_4649 = v_4648;
  };
  if (instanciador_c1) {
    sub_56 = v_4649;
  } else {
    sub_56 = v_4651;
  };
  sub_55 = sub_56;
  sub_54 = sub_55;
  sub_76 = sub_24;
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  sub_65 = sub_66;
  if (instanciador_neutro_input) {
    v_4652 = sub_65;
  } else {
    v_4652 = sub_9;
  };
  if (instanciador_ck_13_1) {
    sub_82 = sub_13;
  } else {
    sub_82 = false;
  };
  if (instanciador_c3_lamp) {
    v_4629 = sub_82;
  } else {
    v_4629 = sub_13;
  };
  if (instanciador_l3) {
    v_4630 = v_4629;
  } else {
    v_4630 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_4627 = false;
  } else {
    v_4627 = sub_82;
  };
  if (instanciador_l3) {
    v_4628 = false;
  } else {
    v_4628 = v_4627;
  };
  if (instanciador_c3) {
    sub_81 = v_4628;
  } else {
    sub_81 = v_4630;
  };
  if (instanciador_ck_11_1) {
    sub_80 = sub_81;
  } else {
    sub_80 = false;
  };
  if (instanciador_c2_lamp) {
    v_4633 = sub_80;
  } else {
    v_4633 = sub_81;
  };
  if (instanciador_l2) {
    v_4634 = v_4633;
  } else {
    v_4634 = sub_81;
  };
  if (instanciador_c2_lamp) {
    v_4631 = false;
  } else {
    v_4631 = sub_80;
  };
  if (instanciador_l2) {
    v_4632 = false;
  } else {
    v_4632 = v_4631;
  };
  if (instanciador_c2) {
    sub_79 = v_4632;
  } else {
    sub_79 = v_4634;
  };
  if (instanciador_ck_9_1) {
    sub_78 = sub_79;
  } else {
    sub_78 = false;
  };
  if (instanciador_c1_lamp) {
    v_4637 = sub_78;
  } else {
    v_4637 = sub_79;
  };
  if (instanciador_l1) {
    v_4638 = v_4637;
  } else {
    v_4638 = sub_79;
  };
  if (instanciador_c1_lamp) {
    v_4635 = false;
  } else {
    v_4635 = sub_78;
  };
  if (instanciador_l1) {
    v_4636 = false;
  } else {
    v_4636 = v_4635;
  };
  if (instanciador_c1) {
    sub_77 = v_4636;
  } else {
    sub_77 = v_4638;
  };
  if (instanciador_neutro_input) {
    sub_64 = sub_65;
  } else {
    sub_64 = sub_77;
  };
  if (instanciador_seguranca_input) {
    v_4653 = sub_64;
  } else {
    v_4653 = v_4652;
  };
  if (instanciador_domingol_input) {
    v_4654 = sub_54;
  } else {
    v_4654 = v_4653;
  };
  if (instanciador_domingo_input) {
    sub_53 = sub_29;
  } else {
    sub_53 = v_4654;
  };
  if (instanciador_v_341) {
    v_4655 = sub_28;
  } else {
    v_4655 = sub_53;
  };
  if (instanciador_sexta_input) {
    sub_52 = sub_28;
  } else {
    sub_52 = v_4655;
  };
  if (instanciador_v_339) {
    v_4689 = sub_52;
  } else {
    v_4689 = sub_3;
  };
  if (instanciador_neutro_input) {
    sub_87 = sub_65;
  } else {
    sub_87 = sub_32;
  };
  if (instanciador_seguranca_input) {
    v_4626 = sub_64;
  } else {
    v_4626 = sub_87;
  };
  if (instanciador_domingol_input) {
    sub_86 = sub_54;
  } else {
    sub_86 = v_4626;
  };
  if (instanciador_domingo_input) {
    sub_85 = sub_29;
  } else {
    sub_85 = sub_86;
  };
  if (instanciador_v_341) {
    sub_84 = sub_28;
  } else {
    sub_84 = sub_85;
  };
  sub_83 = sub_84;
  if (instanciador_v_339) {
    v_4690 = sub_52;
  } else {
    v_4690 = sub_83;
  };
  if (instanciador_ebd_input) {
    sub_2 = v_4689;
  } else {
    sub_2 = v_4690;
  };
  if (instanciador_seguranca_input) {
    v_4622 = sub_77;
  } else {
    v_4622 = sub_65;
  };
  if (instanciador_domingol_input) {
    v_4623 = sub_54;
    v_4621 = sub_54;
  } else {
    v_4623 = v_4622;
    v_4621 = sub_30;
  };
  if (instanciador_domingo_input) {
    v_4624 = v_4621;
  } else {
    v_4624 = v_4623;
  };
  if (instanciador_domingol_input) {
    v_4620 = sub_54;
    v_4619 = sub_54;
  } else {
    v_4620 = sub_64;
    v_4619 = sub_87;
  };
  if (instanciador_domingo_input) {
    sub_89 = v_4619;
  } else {
    sub_89 = v_4620;
  };
  if (instanciador_v_341) {
    v_4625 = v_4624;
  } else {
    v_4625 = sub_89;
  };
  if (instanciador_sexta_input) {
    sub_88 = sub_28;
  } else {
    sub_88 = v_4625;
  };
  if (instanciador_neutro_input) {
    v_4618 = sub_65;
  } else {
    v_4618 = sub_56;
  };
  if (instanciador_seguranca_input) {
    sub_91 = sub_64;
  } else {
    sub_91 = v_4618;
  };
  if (instanciador_domingo_input) {
    sub_90 = sub_29;
  } else {
    sub_90 = sub_91;
  };
  if (instanciador_v_341) {
    v_4691 = sub_86;
  } else {
    v_4691 = sub_90;
  };
  if (instanciador_sexta_input) {
    v_4692 = sub_28;
  } else {
    v_4692 = v_4691;
  };
  if (instanciador_v_339) {
    v_4693 = v_4692;
  } else {
    v_4693 = sub_88;
  };
  if (instanciador_ebd_input) {
    v_4694 = sub_5;
  } else {
    v_4694 = v_4693;
  };
  if (instanciador_v_340) {
    sub_1 = v_4694;
  } else {
    sub_1 = sub_2;
  };
  if (instanciador_ck_17_1) {
    v_4599 = sub_40;
  } else {
    v_4599 = false;
  };
  if (instanciador_lx) {
    v_4600 = v_4599;
  } else {
    v_4600 = sub_40;
  };
  if (instanciador_c_lampExt) {
    v_4601 = v_4600;
  } else {
    v_4601 = sub_39;
  };
  if (instanciador_ck_15_1) {
    v_4602 = v_4601;
  } else {
    v_4602 = sub_15;
  };
  if (instanciador_l4) {
    v_4603 = sub_15;
  } else {
    v_4603 = v_4602;
  };
  if (instanciador_c4_lamp) {
    sub_103 = sub_14;
  } else {
    sub_103 = v_4603;
  };
  sub_102 = sub_103;
  if (instanciador_ck_13_1) {
    sub_104 = false;
  } else {
    sub_104 = sub_103;
  };
  if (instanciador_c3_lamp) {
    v_4606 = sub_104;
  } else {
    v_4606 = false;
  };
  if (instanciador_l3) {
    v_4607 = v_4606;
  } else {
    v_4607 = false;
  };
  if (instanciador_c3_lamp) {
    v_4604 = sub_103;
  } else {
    v_4604 = sub_104;
  };
  if (instanciador_l3) {
    v_4605 = sub_102;
  } else {
    v_4605 = v_4604;
  };
  if (instanciador_c3) {
    sub_101 = v_4605;
  } else {
    sub_101 = v_4607;
  };
  if (instanciador_ck_11_1) {
    sub_105 = false;
  } else {
    sub_105 = sub_101;
  };
  if (instanciador_c2_lamp) {
    v_4610 = sub_105;
  } else {
    v_4610 = false;
  };
  if (instanciador_l2) {
    v_4611 = v_4610;
  } else {
    v_4611 = false;
  };
  if (instanciador_c2_lamp) {
    v_4608 = sub_101;
  } else {
    v_4608 = sub_105;
  };
  if (instanciador_l2) {
    v_4609 = sub_101;
  } else {
    v_4609 = v_4608;
  };
  if (instanciador_c2) {
    sub_100 = v_4609;
  } else {
    sub_100 = v_4611;
  };
  if (instanciador_ck_9_1) {
    sub_106 = false;
  } else {
    sub_106 = sub_100;
  };
  if (instanciador_c1_lamp) {
    v_4614 = sub_106;
  } else {
    v_4614 = false;
  };
  if (instanciador_l1) {
    v_4615 = v_4614;
  } else {
    v_4615 = false;
  };
  if (instanciador_c1_lamp) {
    v_4612 = sub_100;
  } else {
    v_4612 = sub_106;
  };
  if (instanciador_l1) {
    v_4613 = sub_100;
  } else {
    v_4613 = v_4612;
  };
  if (instanciador_c1) {
    sub_99 = v_4613;
  } else {
    sub_99 = v_4615;
  };
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  if (instanciador_c4_lamp) {
    sub_114 = sub_38;
  } else {
    sub_114 = sub_48;
  };
  if (instanciador_ck_13_1) {
    sub_115 = false;
  } else {
    sub_115 = sub_114;
  };
  if (instanciador_c3_lamp) {
    v_4589 = sub_115;
  } else {
    v_4589 = false;
  };
  if (instanciador_l3) {
    v_4590 = v_4589;
  } else {
    v_4590 = false;
  };
  if (instanciador_c3_lamp) {
    v_4587 = sub_114;
  } else {
    v_4587 = sub_115;
  };
  if (instanciador_l3) {
    v_4588 = sub_114;
  } else {
    v_4588 = v_4587;
  };
  if (instanciador_c3) {
    sub_113 = v_4588;
  } else {
    sub_113 = v_4590;
  };
  if (instanciador_ck_11_1) {
    sub_116 = false;
  } else {
    sub_116 = sub_113;
  };
  if (instanciador_c2_lamp) {
    v_4593 = sub_116;
  } else {
    v_4593 = false;
  };
  if (instanciador_l2) {
    v_4594 = v_4593;
  } else {
    v_4594 = false;
  };
  if (instanciador_c2_lamp) {
    v_4591 = sub_113;
  } else {
    v_4591 = sub_116;
  };
  if (instanciador_l2) {
    v_4592 = sub_113;
  } else {
    v_4592 = v_4591;
  };
  if (instanciador_c2) {
    sub_112 = v_4592;
  } else {
    sub_112 = v_4594;
  };
  if (instanciador_ck_9_1) {
    sub_117 = false;
  } else {
    sub_117 = sub_112;
  };
  if (instanciador_c1_lamp) {
    v_4597 = sub_117;
  } else {
    v_4597 = false;
  };
  if (instanciador_l1) {
    v_4598 = v_4597;
  } else {
    v_4598 = false;
  };
  if (instanciador_c1_lamp) {
    v_4595 = sub_112;
  } else {
    v_4595 = sub_117;
  };
  if (instanciador_l1) {
    v_4596 = sub_112;
  } else {
    v_4596 = v_4595;
  };
  if (instanciador_c1) {
    sub_111 = v_4596;
  } else {
    sub_111 = v_4598;
  };
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  sub_107 = sub_108;
  if (instanciador_v_341) {
    sub_94 = sub_107;
  } else {
    sub_94 = sub_95;
  };
  sub_93 = sub_94;
  if (instanciador_l4) {
    v_4570 = sub_37;
  } else {
    v_4570 = sub_36;
  };
  if (instanciador_c4_lamp) {
    sub_127 = sub_62;
  } else {
    sub_127 = v_4570;
  };
  if (instanciador_ck_13_1) {
    sub_128 = false;
  } else {
    sub_128 = sub_127;
  };
  if (instanciador_c3_lamp) {
    v_4573 = sub_128;
  } else {
    v_4573 = false;
  };
  if (instanciador_l3) {
    v_4574 = v_4573;
  } else {
    v_4574 = false;
  };
  if (instanciador_c3_lamp) {
    v_4571 = sub_127;
  } else {
    v_4571 = sub_128;
  };
  if (instanciador_l3) {
    v_4572 = sub_127;
  } else {
    v_4572 = v_4571;
  };
  if (instanciador_c3) {
    sub_126 = v_4572;
  } else {
    sub_126 = v_4574;
  };
  if (instanciador_ck_11_1) {
    sub_125 = sub_126;
  } else {
    sub_125 = false;
  };
  if (instanciador_c2_lamp) {
    v_4577 = sub_125;
  } else {
    v_4577 = sub_126;
  };
  if (instanciador_l2) {
    v_4578 = v_4577;
  } else {
    v_4578 = sub_126;
  };
  if (instanciador_c2_lamp) {
    v_4575 = false;
  } else {
    v_4575 = sub_125;
  };
  if (instanciador_l2) {
    v_4576 = false;
  } else {
    v_4576 = v_4575;
  };
  if (instanciador_c2) {
    sub_124 = v_4576;
  } else {
    sub_124 = v_4578;
  };
  if (instanciador_ck_9_1) {
    sub_123 = sub_124;
  } else {
    sub_123 = false;
  };
  if (instanciador_c1_lamp) {
    v_4581 = sub_123;
  } else {
    v_4581 = sub_124;
  };
  if (instanciador_l1) {
    v_4582 = v_4581;
  } else {
    v_4582 = sub_124;
  };
  if (instanciador_c1_lamp) {
    v_4579 = false;
  } else {
    v_4579 = sub_123;
  };
  if (instanciador_l1) {
    v_4580 = false;
  } else {
    v_4580 = v_4579;
  };
  if (instanciador_c1) {
    sub_122 = v_4580;
  } else {
    sub_122 = v_4582;
  };
  sub_121 = sub_122;
  sub_120 = sub_121;
  sub_141 = sub_39;
  sub_140 = sub_141;
  sub_139 = sub_140;
  sub_138 = sub_139;
  sub_137 = sub_138;
  sub_136 = sub_137;
  sub_135 = sub_136;
  sub_134 = sub_135;
  sub_133 = sub_134;
  sub_132 = sub_133;
  sub_131 = sub_132;
  sub_130 = sub_131;
  if (instanciador_neutro_input) {
    v_4583 = sub_130;
  } else {
    v_4583 = sub_99;
  };
  if (instanciador_ck_13_1) {
    sub_147 = sub_103;
  } else {
    sub_147 = false;
  };
  if (instanciador_c3_lamp) {
    v_4560 = sub_147;
  } else {
    v_4560 = sub_103;
  };
  if (instanciador_l3) {
    v_4561 = v_4560;
  } else {
    v_4561 = sub_102;
  };
  if (instanciador_c3_lamp) {
    v_4558 = false;
  } else {
    v_4558 = sub_147;
  };
  if (instanciador_l3) {
    v_4559 = false;
  } else {
    v_4559 = v_4558;
  };
  if (instanciador_c3) {
    sub_146 = v_4559;
  } else {
    sub_146 = v_4561;
  };
  if (instanciador_ck_11_1) {
    sub_145 = sub_146;
  } else {
    sub_145 = false;
  };
  if (instanciador_c2_lamp) {
    v_4564 = sub_145;
  } else {
    v_4564 = sub_146;
  };
  if (instanciador_l2) {
    v_4565 = v_4564;
  } else {
    v_4565 = sub_146;
  };
  if (instanciador_c2_lamp) {
    v_4562 = false;
  } else {
    v_4562 = sub_145;
  };
  if (instanciador_l2) {
    v_4563 = false;
  } else {
    v_4563 = v_4562;
  };
  if (instanciador_c2) {
    sub_144 = v_4563;
  } else {
    sub_144 = v_4565;
  };
  if (instanciador_ck_9_1) {
    sub_143 = sub_144;
  } else {
    sub_143 = false;
  };
  if (instanciador_c1_lamp) {
    v_4568 = sub_143;
  } else {
    v_4568 = sub_144;
  };
  if (instanciador_l1) {
    v_4569 = v_4568;
  } else {
    v_4569 = sub_144;
  };
  if (instanciador_c1_lamp) {
    v_4566 = false;
  } else {
    v_4566 = sub_143;
  };
  if (instanciador_l1) {
    v_4567 = false;
  } else {
    v_4567 = v_4566;
  };
  if (instanciador_c1) {
    sub_142 = v_4567;
  } else {
    sub_142 = v_4569;
  };
  if (instanciador_neutro_input) {
    sub_129 = sub_130;
  } else {
    sub_129 = sub_142;
  };
  if (instanciador_seguranca_input) {
    v_4584 = sub_129;
  } else {
    v_4584 = v_4583;
  };
  if (instanciador_domingol_input) {
    v_4585 = sub_120;
  } else {
    v_4585 = v_4584;
  };
  if (instanciador_domingo_input) {
    sub_119 = sub_108;
  } else {
    sub_119 = v_4585;
  };
  if (instanciador_v_341) {
    v_4586 = sub_107;
  } else {
    v_4586 = sub_119;
  };
  if (instanciador_sexta_input) {
    sub_118 = sub_107;
  } else {
    sub_118 = v_4586;
  };
  if (instanciador_v_339) {
    v_4616 = sub_118;
  } else {
    v_4616 = sub_93;
  };
  if (instanciador_neutro_input) {
    sub_152 = sub_130;
  } else {
    sub_152 = sub_111;
  };
  if (instanciador_seguranca_input) {
    v_4557 = sub_129;
  } else {
    v_4557 = sub_152;
  };
  if (instanciador_domingol_input) {
    sub_151 = sub_120;
  } else {
    sub_151 = v_4557;
  };
  if (instanciador_domingo_input) {
    sub_150 = sub_108;
  } else {
    sub_150 = sub_151;
  };
  if (instanciador_v_341) {
    sub_149 = sub_107;
  } else {
    sub_149 = sub_150;
  };
  sub_148 = sub_149;
  if (instanciador_v_339) {
    v_4617 = sub_118;
  } else {
    v_4617 = sub_148;
  };
  if (instanciador_ebd_input) {
    sub_92 = v_4616;
  } else {
    sub_92 = v_4617;
  };
  if (instanciador_seguranca_input) {
    v_4553 = sub_142;
  } else {
    v_4553 = sub_130;
  };
  if (instanciador_domingol_input) {
    v_4554 = sub_120;
    v_4552 = sub_120;
  } else {
    v_4554 = v_4553;
    v_4552 = sub_109;
  };
  if (instanciador_domingo_input) {
    v_4555 = v_4552;
  } else {
    v_4555 = v_4554;
  };
  if (instanciador_domingol_input) {
    v_4551 = sub_120;
    v_4550 = sub_120;
  } else {
    v_4551 = sub_129;
    v_4550 = sub_152;
  };
  if (instanciador_domingo_input) {
    sub_154 = v_4550;
  } else {
    sub_154 = v_4551;
  };
  if (instanciador_v_341) {
    v_4556 = v_4555;
  } else {
    v_4556 = sub_154;
  };
  if (instanciador_sexta_input) {
    sub_153 = sub_107;
  } else {
    sub_153 = v_4556;
  };
  if (instanciador_neutro_input) {
    v = sub_130;
  } else {
    v = sub_122;
  };
  if (instanciador_seguranca_input) {
    sub_156 = sub_129;
  } else {
    sub_156 = v;
  };
  if (instanciador_domingo_input) {
    sub_155 = sub_108;
  } else {
    sub_155 = sub_156;
  };
  if (instanciador_v_341) {
    v_4695 = sub_151;
  } else {
    v_4695 = sub_155;
  };
  if (instanciador_sexta_input) {
    v_4696 = sub_107;
  } else {
    v_4696 = v_4695;
  };
  if (instanciador_v_339) {
    v_4697 = v_4696;
  } else {
    v_4697 = sub_153;
  };
  if (instanciador_ebd_input) {
    v_4698 = sub_95;
  } else {
    v_4698 = v_4697;
  };
  if (instanciador_v_340) {
    v_4699 = v_4698;
  } else {
    v_4699 = sub_92;
  };
  if (p_instanciador_c4) {
    sub_0 = v_4699;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c4 = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c3_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_c2, int instanciador_c1,
  int instanciador_c_lampExt, int instanciador_c4_lamp,
  int instanciador_c3_lamp, int instanciador_c2_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c3_out* _out) {
  
  int v_4831;
  int v_4830;
  int v_4829;
  int v_4828;
  int v_4827;
  int v_4826;
  int v_4825;
  int v_4824;
  int v_4823;
  int v_4822;
  int v_4821;
  int v_4820;
  int v_4819;
  int v_4818;
  int v_4817;
  int v_4816;
  int v_4815;
  int v_4814;
  int v_4813;
  int v_4812;
  int v_4811;
  int v_4810;
  int v_4809;
  int v_4808;
  int v_4807;
  int v_4806;
  int v_4805;
  int v_4804;
  int v_4803;
  int v_4802;
  int v_4801;
  int v_4800;
  int v_4799;
  int v_4798;
  int v_4797;
  int v_4796;
  int v_4795;
  int v_4794;
  int v_4793;
  int v_4792;
  int v_4791;
  int v_4790;
  int v_4789;
  int v_4788;
  int v_4787;
  int v_4786;
  int v_4785;
  int v_4784;
  int v_4783;
  int v_4782;
  int v_4781;
  int v_4780;
  int v_4779;
  int v_4778;
  int v_4777;
  int v_4776;
  int v_4775;
  int v_4774;
  int v_4773;
  int v_4772;
  int v_4771;
  int v_4770;
  int v_4769;
  int v_4768;
  int v_4767;
  int v_4766;
  int v_4765;
  int v_4764;
  int v_4763;
  int v_4762;
  int v_4761;
  int v_4760;
  int v_4759;
  int v_4758;
  int v_4757;
  int v_4756;
  int v_4755;
  int v_4754;
  int v_4753;
  int v_4752;
  int v_4751;
  int v_4750;
  int v_4749;
  int v_4748;
  int v_4747;
  int v_4746;
  int v_4745;
  int v_4744;
  int v_4743;
  int v_4742;
  int v_4741;
  int v_4740;
  int v_4739;
  int v_4738;
  int v_4737;
  int v_4736;
  int v_4735;
  int v_4734;
  int v_4733;
  int v_4732;
  int v_4731;
  int v_4730;
  int v_4729;
  int v_4728;
  int v_4727;
  int v_4726;
  int v_4725;
  int v_4724;
  int v_4723;
  int v_4722;
  int v_4721;
  int v_4720;
  int v_4719;
  int v_4718;
  int v_4717;
  int v_4716;
  int v_4715;
  int v_4714;
  int v_4713;
  int v_4712;
  int v_4711;
  int v_4710;
  int v_4709;
  int v_4708;
  int v_4707;
  int v_4706;
  int v_4705;
  int v_4704;
  int v_4703;
  int v_4702;
  int v_4701;
  int v_4700;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  int sub_128;
  int sub_129;
  int sub_130;
  int sub_131;
  int sub_132;
  int sub_133;
  int sub_134;
  int sub_135;
  int sub_136;
  int sub_137;
  int sub_138;
  int sub_139;
  int sub_140;
  int sub_141;
  int sub_142;
  int sub_143;
  int sub_144;
  int sub_145;
  int sub_146;
  int sub_147;
  int sub_148;
  sub_22 = false;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (instanciador_ck_17_1) {
    v_4808 = sub_15;
  } else {
    v_4808 = false;
  };
  if (instanciador_lx) {
    v_4809 = v_4808;
  } else {
    v_4809 = sub_15;
  };
  sub_23 = sub_15;
  if (instanciador_c_lampExt) {
    sub_14 = v_4809;
  } else {
    sub_14 = sub_23;
  };
  if (instanciador_ck_15_1) {
    v_4810 = sub_14;
  } else {
    v_4810 = false;
  };
  if (instanciador_l4) {
    v_4811 = v_4810;
  } else {
    v_4811 = sub_14;
  };
  if (instanciador_c4_lamp) {
    sub_13 = v_4811;
  } else {
    sub_13 = sub_14;
  };
  sub_33 = true;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  if (instanciador_ck_17_1) {
    v_4804 = sub_26;
  } else {
    v_4804 = false;
  };
  if (instanciador_lx) {
    v_4805 = v_4804;
  } else {
    v_4805 = sub_26;
  };
  sub_34 = sub_26;
  if (instanciador_c_lampExt) {
    sub_25 = v_4805;
  } else {
    sub_25 = sub_34;
  };
  if (instanciador_ck_15_1) {
    v_4806 = sub_25;
  } else {
    v_4806 = false;
  };
  if (instanciador_l4) {
    v_4807 = v_4806;
  } else {
    v_4807 = sub_25;
  };
  if (instanciador_c4_lamp) {
    sub_24 = v_4807;
  } else {
    sub_24 = sub_25;
  };
  if (instanciador_ck_13_1) {
    sub_12 = sub_24;
  } else {
    sub_12 = sub_13;
  };
  if (instanciador_c3_lamp) {
    v_4812 = sub_12;
  } else {
    v_4812 = sub_24;
  };
  if (instanciador_ck_13_1) {
    v_4803 = false;
  } else {
    v_4803 = sub_24;
  };
  if (instanciador_c3_lamp) {
    sub_35 = sub_24;
  } else {
    sub_35 = v_4803;
  };
  if (instanciador_l3) {
    sub_11 = v_4812;
  } else {
    sub_11 = sub_35;
  };
  if (instanciador_ck_11_1) {
    sub_36 = false;
  } else {
    sub_36 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_4815 = sub_36;
  } else {
    v_4815 = false;
  };
  if (instanciador_l2) {
    v_4816 = v_4815;
  } else {
    v_4816 = false;
  };
  if (instanciador_c2_lamp) {
    v_4813 = sub_11;
  } else {
    v_4813 = sub_36;
  };
  if (instanciador_l2) {
    v_4814 = sub_11;
  } else {
    v_4814 = v_4813;
  };
  if (instanciador_c2) {
    sub_10 = v_4814;
  } else {
    sub_10 = v_4816;
  };
  if (instanciador_ck_9_1) {
    sub_37 = false;
  } else {
    sub_37 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_4819 = sub_37;
  } else {
    v_4819 = false;
  };
  if (instanciador_l1) {
    v_4820 = v_4819;
  } else {
    v_4820 = false;
  };
  if (instanciador_c1_lamp) {
    v_4817 = sub_10;
  } else {
    v_4817 = sub_37;
  };
  if (instanciador_l1) {
    v_4818 = sub_10;
  } else {
    v_4818 = v_4817;
  };
  if (instanciador_c1) {
    sub_9 = v_4818;
  } else {
    sub_9 = v_4820;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (instanciador_ck_17_1) {
    v_4789 = false;
  } else {
    v_4789 = sub_15;
  };
  if (instanciador_lx) {
    v_4790 = sub_15;
  } else {
    v_4790 = v_4789;
  };
  if (instanciador_c_lampExt) {
    sub_47 = sub_23;
  } else {
    sub_47 = v_4790;
  };
  if (instanciador_ck_15_1) {
    v_4791 = false;
  } else {
    v_4791 = sub_47;
  };
  if (instanciador_l4) {
    v_4792 = sub_47;
  } else {
    v_4792 = v_4791;
  };
  sub_46 = sub_47;
  if (instanciador_c4_lamp) {
    sub_45 = sub_46;
  } else {
    sub_45 = v_4792;
  };
  if (instanciador_ck_17_1) {
    v_4785 = false;
  } else {
    v_4785 = sub_26;
  };
  if (instanciador_lx) {
    v_4786 = sub_26;
  } else {
    v_4786 = v_4785;
  };
  if (instanciador_c_lampExt) {
    sub_50 = sub_34;
  } else {
    sub_50 = v_4786;
  };
  if (instanciador_ck_15_1) {
    v_4787 = false;
  } else {
    v_4787 = sub_50;
  };
  if (instanciador_l4) {
    v_4788 = sub_50;
  } else {
    v_4788 = v_4787;
  };
  sub_49 = sub_50;
  if (instanciador_c4_lamp) {
    sub_48 = sub_49;
  } else {
    sub_48 = v_4788;
  };
  if (instanciador_ck_13_1) {
    v_4793 = sub_48;
  } else {
    v_4793 = sub_45;
  };
  if (instanciador_c3_lamp) {
    v_4794 = v_4793;
  } else {
    v_4794 = sub_48;
  };
  if (instanciador_ck_13_1) {
    v_4784 = false;
  } else {
    v_4784 = sub_48;
  };
  if (instanciador_c3_lamp) {
    sub_51 = sub_48;
  } else {
    sub_51 = v_4784;
  };
  if (instanciador_l3) {
    sub_44 = v_4794;
  } else {
    sub_44 = sub_51;
  };
  if (instanciador_ck_11_1) {
    sub_52 = false;
  } else {
    sub_52 = sub_44;
  };
  if (instanciador_c2_lamp) {
    v_4797 = sub_52;
  } else {
    v_4797 = false;
  };
  if (instanciador_l2) {
    v_4798 = v_4797;
  } else {
    v_4798 = false;
  };
  if (instanciador_c2_lamp) {
    v_4795 = sub_44;
  } else {
    v_4795 = sub_52;
  };
  if (instanciador_l2) {
    v_4796 = sub_44;
  } else {
    v_4796 = v_4795;
  };
  if (instanciador_c2) {
    sub_43 = v_4796;
  } else {
    sub_43 = v_4798;
  };
  if (instanciador_ck_9_1) {
    sub_53 = false;
  } else {
    sub_53 = sub_43;
  };
  if (instanciador_c1_lamp) {
    v_4801 = sub_53;
  } else {
    v_4801 = false;
  };
  if (instanciador_l1) {
    v_4802 = v_4801;
  } else {
    v_4802 = false;
  };
  if (instanciador_c1_lamp) {
    v_4799 = sub_43;
  } else {
    v_4799 = sub_53;
  };
  if (instanciador_l1) {
    v_4800 = sub_43;
  } else {
    v_4800 = v_4799;
  };
  if (instanciador_c1) {
    sub_42 = v_4800;
  } else {
    sub_42 = v_4802;
  };
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  if (instanciador_v_341) {
    sub_4 = sub_38;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (instanciador_ck_15_1) {
    v_4768 = sub_47;
  } else {
    v_4768 = false;
  };
  if (instanciador_l4) {
    v_4769 = v_4768;
  } else {
    v_4769 = sub_47;
  };
  if (instanciador_c4_lamp) {
    sub_63 = v_4769;
  } else {
    sub_63 = sub_46;
  };
  if (instanciador_ck_15_1) {
    v_4766 = sub_50;
  } else {
    v_4766 = false;
  };
  if (instanciador_l4) {
    v_4767 = v_4766;
  } else {
    v_4767 = sub_50;
  };
  if (instanciador_c4_lamp) {
    sub_64 = v_4767;
  } else {
    sub_64 = sub_49;
  };
  if (instanciador_ck_13_1) {
    v_4770 = sub_64;
  } else {
    v_4770 = sub_63;
  };
  if (instanciador_c3_lamp) {
    v_4771 = v_4770;
  } else {
    v_4771 = sub_64;
  };
  if (instanciador_ck_13_1) {
    v_4765 = false;
  } else {
    v_4765 = sub_64;
  };
  if (instanciador_c3_lamp) {
    sub_65 = sub_64;
  } else {
    sub_65 = v_4765;
  };
  if (instanciador_l3) {
    sub_62 = v_4771;
  } else {
    sub_62 = sub_65;
  };
  if (instanciador_ck_11_1) {
    sub_61 = sub_62;
  } else {
    sub_61 = false;
  };
  if (instanciador_c2_lamp) {
    v_4774 = sub_61;
  } else {
    v_4774 = sub_62;
  };
  if (instanciador_l2) {
    v_4775 = v_4774;
  } else {
    v_4775 = sub_62;
  };
  if (instanciador_c2_lamp) {
    v_4772 = false;
  } else {
    v_4772 = sub_61;
  };
  if (instanciador_l2) {
    v_4773 = false;
  } else {
    v_4773 = v_4772;
  };
  if (instanciador_c2) {
    sub_60 = v_4773;
  } else {
    sub_60 = v_4775;
  };
  if (instanciador_ck_9_1) {
    sub_59 = sub_60;
  } else {
    sub_59 = false;
  };
  if (instanciador_c1_lamp) {
    v_4778 = sub_59;
  } else {
    v_4778 = sub_60;
  };
  if (instanciador_l1) {
    v_4779 = v_4778;
  } else {
    v_4779 = sub_60;
  };
  if (instanciador_c1_lamp) {
    v_4776 = false;
  } else {
    v_4776 = sub_59;
  };
  if (instanciador_l1) {
    v_4777 = false;
  } else {
    v_4777 = v_4776;
  };
  if (instanciador_c1) {
    sub_58 = v_4777;
  } else {
    sub_58 = v_4779;
  };
  sub_57 = sub_58;
  sub_56 = sub_57;
  sub_77 = sub_23;
  sub_76 = sub_77;
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  if (instanciador_neutro_input) {
    v_4780 = sub_67;
  } else {
    v_4780 = sub_9;
  };
  if (instanciador_ck_13_1) {
    v_4756 = sub_13;
  } else {
    v_4756 = false;
  };
  if (instanciador_c3_lamp) {
    sub_83 = v_4756;
  } else {
    sub_83 = sub_13;
  };
  if (instanciador_l3) {
    sub_82 = sub_83;
  } else {
    sub_82 = sub_13;
  };
  if (instanciador_ck_11_1) {
    sub_81 = sub_82;
  } else {
    sub_81 = false;
  };
  if (instanciador_c2_lamp) {
    v_4759 = sub_81;
  } else {
    v_4759 = sub_82;
  };
  if (instanciador_l2) {
    v_4760 = v_4759;
  } else {
    v_4760 = sub_82;
  };
  if (instanciador_c2_lamp) {
    v_4757 = false;
  } else {
    v_4757 = sub_81;
  };
  if (instanciador_l2) {
    v_4758 = false;
  } else {
    v_4758 = v_4757;
  };
  if (instanciador_c2) {
    sub_80 = v_4758;
  } else {
    sub_80 = v_4760;
  };
  if (instanciador_ck_9_1) {
    sub_79 = sub_80;
  } else {
    sub_79 = false;
  };
  if (instanciador_c1_lamp) {
    v_4763 = sub_79;
  } else {
    v_4763 = sub_80;
  };
  if (instanciador_l1) {
    v_4764 = v_4763;
  } else {
    v_4764 = sub_80;
  };
  if (instanciador_c1_lamp) {
    v_4761 = false;
  } else {
    v_4761 = sub_79;
  };
  if (instanciador_l1) {
    v_4762 = false;
  } else {
    v_4762 = v_4761;
  };
  if (instanciador_c1) {
    sub_78 = v_4762;
  } else {
    sub_78 = v_4764;
  };
  if (instanciador_neutro_input) {
    sub_66 = sub_67;
  } else {
    sub_66 = sub_78;
  };
  if (instanciador_seguranca_input) {
    v_4781 = sub_66;
  } else {
    v_4781 = v_4780;
  };
  if (instanciador_domingol_input) {
    v_4782 = sub_56;
  } else {
    v_4782 = v_4781;
  };
  if (instanciador_domingo_input) {
    sub_55 = sub_39;
  } else {
    sub_55 = v_4782;
  };
  if (instanciador_v_341) {
    v_4783 = sub_38;
  } else {
    v_4783 = sub_55;
  };
  if (instanciador_sexta_input) {
    sub_54 = sub_38;
  } else {
    sub_54 = v_4783;
  };
  if (instanciador_v_339) {
    v_4821 = sub_54;
  } else {
    v_4821 = sub_3;
  };
  if (instanciador_neutro_input) {
    sub_88 = sub_67;
  } else {
    sub_88 = sub_42;
  };
  if (instanciador_seguranca_input) {
    v_4755 = sub_66;
  } else {
    v_4755 = sub_88;
  };
  if (instanciador_domingol_input) {
    sub_87 = sub_56;
  } else {
    sub_87 = v_4755;
  };
  if (instanciador_domingo_input) {
    sub_86 = sub_39;
  } else {
    sub_86 = sub_87;
  };
  if (instanciador_v_341) {
    sub_85 = sub_38;
  } else {
    sub_85 = sub_86;
  };
  sub_84 = sub_85;
  if (instanciador_v_339) {
    v_4822 = sub_54;
  } else {
    v_4822 = sub_84;
  };
  if (instanciador_ebd_input) {
    sub_2 = v_4821;
  } else {
    sub_2 = v_4822;
  };
  if (instanciador_seguranca_input) {
    v_4751 = sub_78;
  } else {
    v_4751 = sub_67;
  };
  if (instanciador_domingol_input) {
    v_4752 = sub_56;
    v_4750 = sub_56;
  } else {
    v_4752 = v_4751;
    v_4750 = sub_40;
  };
  if (instanciador_domingo_input) {
    v_4753 = v_4750;
  } else {
    v_4753 = v_4752;
  };
  if (instanciador_domingol_input) {
    v_4749 = sub_56;
    v_4748 = sub_56;
  } else {
    v_4749 = sub_66;
    v_4748 = sub_88;
  };
  if (instanciador_domingo_input) {
    sub_90 = v_4748;
  } else {
    sub_90 = v_4749;
  };
  if (instanciador_v_341) {
    v_4754 = v_4753;
  } else {
    v_4754 = sub_90;
  };
  if (instanciador_sexta_input) {
    sub_89 = sub_38;
  } else {
    sub_89 = v_4754;
  };
  if (instanciador_neutro_input) {
    v_4747 = sub_67;
  } else {
    v_4747 = sub_58;
  };
  if (instanciador_seguranca_input) {
    sub_92 = sub_66;
  } else {
    sub_92 = v_4747;
  };
  if (instanciador_domingo_input) {
    sub_91 = sub_39;
  } else {
    sub_91 = sub_92;
  };
  if (instanciador_v_341) {
    v_4823 = sub_87;
  } else {
    v_4823 = sub_91;
  };
  if (instanciador_sexta_input) {
    v_4824 = sub_38;
  } else {
    v_4824 = v_4823;
  };
  if (instanciador_v_339) {
    v_4825 = v_4824;
  } else {
    v_4825 = sub_89;
  };
  if (instanciador_ebd_input) {
    v_4826 = sub_5;
  } else {
    v_4826 = v_4825;
  };
  if (instanciador_v_340) {
    sub_1 = v_4826;
  } else {
    sub_1 = sub_2;
  };
  if (instanciador_l3) {
    sub_102 = sub_24;
  } else {
    sub_102 = sub_35;
  };
  if (instanciador_ck_11_1) {
    sub_103 = false;
  } else {
    sub_103 = sub_102;
  };
  if (instanciador_c2_lamp) {
    v_4739 = sub_103;
  } else {
    v_4739 = false;
  };
  if (instanciador_l2) {
    v_4740 = v_4739;
  } else {
    v_4740 = false;
  };
  if (instanciador_c2_lamp) {
    v_4737 = sub_102;
  } else {
    v_4737 = sub_103;
  };
  if (instanciador_l2) {
    v_4738 = sub_102;
  } else {
    v_4738 = v_4737;
  };
  if (instanciador_c2) {
    sub_101 = v_4738;
  } else {
    sub_101 = v_4740;
  };
  if (instanciador_ck_9_1) {
    sub_104 = false;
  } else {
    sub_104 = sub_101;
  };
  if (instanciador_c1_lamp) {
    v_4743 = sub_104;
  } else {
    v_4743 = false;
  };
  if (instanciador_l1) {
    v_4744 = v_4743;
  } else {
    v_4744 = false;
  };
  if (instanciador_c1_lamp) {
    v_4741 = sub_101;
  } else {
    v_4741 = sub_104;
  };
  if (instanciador_l1) {
    v_4742 = sub_101;
  } else {
    v_4742 = v_4741;
  };
  if (instanciador_c1) {
    sub_100 = v_4742;
  } else {
    sub_100 = v_4744;
  };
  sub_99 = sub_100;
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  if (instanciador_l3) {
    sub_111 = sub_48;
  } else {
    sub_111 = sub_51;
  };
  if (instanciador_ck_11_1) {
    sub_112 = false;
  } else {
    sub_112 = sub_111;
  };
  if (instanciador_c2_lamp) {
    v_4731 = sub_112;
  } else {
    v_4731 = false;
  };
  if (instanciador_l2) {
    v_4732 = v_4731;
  } else {
    v_4732 = false;
  };
  if (instanciador_c2_lamp) {
    v_4729 = sub_111;
  } else {
    v_4729 = sub_112;
  };
  if (instanciador_l2) {
    v_4730 = sub_111;
  } else {
    v_4730 = v_4729;
  };
  if (instanciador_c2) {
    sub_110 = v_4730;
  } else {
    sub_110 = v_4732;
  };
  if (instanciador_ck_9_1) {
    sub_113 = false;
  } else {
    sub_113 = sub_110;
  };
  if (instanciador_c1_lamp) {
    v_4735 = sub_113;
  } else {
    v_4735 = false;
  };
  if (instanciador_l1) {
    v_4736 = v_4735;
  } else {
    v_4736 = false;
  };
  if (instanciador_c1_lamp) {
    v_4733 = sub_110;
  } else {
    v_4733 = sub_113;
  };
  if (instanciador_l1) {
    v_4734 = sub_110;
  } else {
    v_4734 = v_4733;
  };
  if (instanciador_c1) {
    sub_109 = v_4734;
  } else {
    sub_109 = v_4736;
  };
  sub_108 = sub_109;
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_105 = sub_106;
  if (instanciador_v_341) {
    sub_95 = sub_105;
  } else {
    sub_95 = sub_96;
  };
  sub_94 = sub_95;
  if (instanciador_l3) {
    sub_122 = sub_64;
  } else {
    sub_122 = sub_65;
  };
  if (instanciador_ck_11_1) {
    sub_121 = sub_122;
  } else {
    sub_121 = false;
  };
  if (instanciador_c2_lamp) {
    v_4719 = sub_121;
  } else {
    v_4719 = sub_122;
  };
  if (instanciador_l2) {
    v_4720 = v_4719;
  } else {
    v_4720 = sub_122;
  };
  if (instanciador_c2_lamp) {
    v_4717 = false;
  } else {
    v_4717 = sub_121;
  };
  if (instanciador_l2) {
    v_4718 = false;
  } else {
    v_4718 = v_4717;
  };
  if (instanciador_c2) {
    sub_120 = v_4718;
  } else {
    sub_120 = v_4720;
  };
  if (instanciador_ck_9_1) {
    sub_119 = sub_120;
  } else {
    sub_119 = false;
  };
  if (instanciador_c1_lamp) {
    v_4723 = sub_119;
  } else {
    v_4723 = sub_120;
  };
  if (instanciador_l1) {
    v_4724 = v_4723;
  } else {
    v_4724 = sub_120;
  };
  if (instanciador_c1_lamp) {
    v_4721 = false;
  } else {
    v_4721 = sub_119;
  };
  if (instanciador_l1) {
    v_4722 = false;
  } else {
    v_4722 = v_4721;
  };
  if (instanciador_c1) {
    sub_118 = v_4722;
  } else {
    sub_118 = v_4724;
  };
  sub_117 = sub_118;
  sub_116 = sub_117;
  sub_134 = sub_34;
  sub_133 = sub_134;
  sub_132 = sub_133;
  sub_131 = sub_132;
  sub_130 = sub_131;
  sub_129 = sub_130;
  sub_128 = sub_129;
  sub_127 = sub_128;
  sub_126 = sub_127;
  sub_125 = sub_126;
  sub_124 = sub_125;
  if (instanciador_neutro_input) {
    v_4725 = sub_124;
  } else {
    v_4725 = sub_100;
  };
  if (instanciador_c3_lamp) {
    v_4708 = sub_13;
  } else {
    v_4708 = sub_12;
  };
  if (instanciador_l3) {
    sub_139 = sub_83;
  } else {
    sub_139 = v_4708;
  };
  if (instanciador_ck_11_1) {
    sub_138 = sub_139;
  } else {
    sub_138 = false;
  };
  if (instanciador_c2_lamp) {
    v_4711 = sub_138;
  } else {
    v_4711 = sub_139;
  };
  if (instanciador_l2) {
    v_4712 = v_4711;
  } else {
    v_4712 = sub_139;
  };
  if (instanciador_c2_lamp) {
    v_4709 = false;
  } else {
    v_4709 = sub_138;
  };
  if (instanciador_l2) {
    v_4710 = false;
  } else {
    v_4710 = v_4709;
  };
  if (instanciador_c2) {
    sub_137 = v_4710;
  } else {
    sub_137 = v_4712;
  };
  if (instanciador_ck_9_1) {
    sub_136 = sub_137;
  } else {
    sub_136 = false;
  };
  if (instanciador_c1_lamp) {
    v_4715 = sub_136;
  } else {
    v_4715 = sub_137;
  };
  if (instanciador_l1) {
    v_4716 = v_4715;
  } else {
    v_4716 = sub_137;
  };
  if (instanciador_c1_lamp) {
    v_4713 = false;
  } else {
    v_4713 = sub_136;
  };
  if (instanciador_l1) {
    v_4714 = false;
  } else {
    v_4714 = v_4713;
  };
  if (instanciador_c1) {
    sub_135 = v_4714;
  } else {
    sub_135 = v_4716;
  };
  if (instanciador_neutro_input) {
    sub_123 = sub_124;
  } else {
    sub_123 = sub_135;
  };
  if (instanciador_seguranca_input) {
    v_4726 = sub_123;
  } else {
    v_4726 = v_4725;
  };
  if (instanciador_domingol_input) {
    v_4727 = sub_116;
  } else {
    v_4727 = v_4726;
  };
  if (instanciador_domingo_input) {
    sub_115 = sub_106;
  } else {
    sub_115 = v_4727;
  };
  if (instanciador_v_341) {
    v_4728 = sub_105;
  } else {
    v_4728 = sub_115;
  };
  if (instanciador_sexta_input) {
    sub_114 = sub_105;
  } else {
    sub_114 = v_4728;
  };
  if (instanciador_v_339) {
    v_4745 = sub_114;
  } else {
    v_4745 = sub_94;
  };
  if (instanciador_neutro_input) {
    sub_144 = sub_124;
  } else {
    sub_144 = sub_109;
  };
  if (instanciador_seguranca_input) {
    v_4707 = sub_123;
  } else {
    v_4707 = sub_144;
  };
  if (instanciador_domingol_input) {
    sub_143 = sub_116;
  } else {
    sub_143 = v_4707;
  };
  if (instanciador_domingo_input) {
    sub_142 = sub_106;
  } else {
    sub_142 = sub_143;
  };
  if (instanciador_v_341) {
    sub_141 = sub_105;
  } else {
    sub_141 = sub_142;
  };
  sub_140 = sub_141;
  if (instanciador_v_339) {
    v_4746 = sub_114;
  } else {
    v_4746 = sub_140;
  };
  if (instanciador_ebd_input) {
    sub_93 = v_4745;
  } else {
    sub_93 = v_4746;
  };
  if (instanciador_seguranca_input) {
    v_4703 = sub_135;
  } else {
    v_4703 = sub_124;
  };
  if (instanciador_domingol_input) {
    v_4704 = sub_116;
    v_4702 = sub_116;
  } else {
    v_4704 = v_4703;
    v_4702 = sub_107;
  };
  if (instanciador_domingo_input) {
    v_4705 = v_4702;
  } else {
    v_4705 = v_4704;
  };
  if (instanciador_domingol_input) {
    v_4701 = sub_116;
    v_4700 = sub_116;
  } else {
    v_4701 = sub_123;
    v_4700 = sub_144;
  };
  if (instanciador_domingo_input) {
    sub_146 = v_4700;
  } else {
    sub_146 = v_4701;
  };
  if (instanciador_v_341) {
    v_4706 = v_4705;
  } else {
    v_4706 = sub_146;
  };
  if (instanciador_sexta_input) {
    sub_145 = sub_105;
  } else {
    sub_145 = v_4706;
  };
  if (instanciador_neutro_input) {
    v = sub_124;
  } else {
    v = sub_118;
  };
  if (instanciador_seguranca_input) {
    sub_148 = sub_123;
  } else {
    sub_148 = v;
  };
  if (instanciador_domingo_input) {
    sub_147 = sub_106;
  } else {
    sub_147 = sub_148;
  };
  if (instanciador_v_341) {
    v_4827 = sub_143;
  } else {
    v_4827 = sub_147;
  };
  if (instanciador_sexta_input) {
    v_4828 = sub_105;
  } else {
    v_4828 = v_4827;
  };
  if (instanciador_v_339) {
    v_4829 = v_4828;
  } else {
    v_4829 = sub_145;
  };
  if (instanciador_ebd_input) {
    v_4830 = sub_96;
  } else {
    v_4830 = v_4829;
  };
  if (instanciador_v_340) {
    v_4831 = v_4830;
  } else {
    v_4831 = sub_93;
  };
  if (p_instanciador_c3) {
    sub_0 = v_4831;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c3 = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c2_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_c1,
  int instanciador_c_lampExt, int instanciador_c4_lamp,
  int instanciador_c3_lamp, int instanciador_c2_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c2_out* _out) {
  
  int v_4925;
  int v_4924;
  int v_4923;
  int v_4922;
  int v_4921;
  int v_4920;
  int v_4919;
  int v_4918;
  int v_4917;
  int v_4916;
  int v_4915;
  int v_4914;
  int v_4913;
  int v_4912;
  int v_4911;
  int v_4910;
  int v_4909;
  int v_4908;
  int v_4907;
  int v_4906;
  int v_4905;
  int v_4904;
  int v_4903;
  int v_4902;
  int v_4901;
  int v_4900;
  int v_4899;
  int v_4898;
  int v_4897;
  int v_4896;
  int v_4895;
  int v_4894;
  int v_4893;
  int v_4892;
  int v_4891;
  int v_4890;
  int v_4889;
  int v_4888;
  int v_4887;
  int v_4886;
  int v_4885;
  int v_4884;
  int v_4883;
  int v_4882;
  int v_4881;
  int v_4880;
  int v_4879;
  int v_4878;
  int v_4877;
  int v_4876;
  int v_4875;
  int v_4874;
  int v_4873;
  int v_4872;
  int v_4871;
  int v_4870;
  int v_4869;
  int v_4868;
  int v_4867;
  int v_4866;
  int v_4865;
  int v_4864;
  int v_4863;
  int v_4862;
  int v_4861;
  int v_4860;
  int v_4859;
  int v_4858;
  int v_4857;
  int v_4856;
  int v_4855;
  int v_4854;
  int v_4853;
  int v_4852;
  int v_4851;
  int v_4850;
  int v_4849;
  int v_4848;
  int v_4847;
  int v_4846;
  int v_4845;
  int v_4844;
  int v_4843;
  int v_4842;
  int v_4841;
  int v_4840;
  int v_4839;
  int v_4838;
  int v_4837;
  int v_4836;
  int v_4835;
  int v_4834;
  int v_4833;
  int v_4832;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  sub_22 = false;
  sub_23 = true;
  if (p_instanciador_c2) {
    sub_21 = sub_23;
  } else {
    sub_21 = sub_22;
  };
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  if (instanciador_ck_17_1) {
    v_4906 = sub_14;
  } else {
    v_4906 = false;
  };
  if (instanciador_lx) {
    v_4907 = v_4906;
  } else {
    v_4907 = sub_14;
  };
  sub_24 = sub_14;
  if (instanciador_c_lampExt) {
    sub_13 = v_4907;
  } else {
    sub_13 = sub_24;
  };
  if (instanciador_ck_15_1) {
    v_4908 = sub_13;
  } else {
    v_4908 = false;
  };
  if (instanciador_l4) {
    v_4909 = v_4908;
  } else {
    v_4909 = sub_13;
  };
  if (instanciador_c4_lamp) {
    sub_12 = v_4909;
  } else {
    sub_12 = sub_13;
  };
  if (instanciador_ck_13_1) {
    v_4910 = false;
  } else {
    v_4910 = sub_12;
  };
  if (instanciador_c3_lamp) {
    v_4911 = sub_12;
  } else {
    v_4911 = v_4910;
  };
  sub_11 = sub_12;
  if (instanciador_l3) {
    sub_10 = sub_11;
  } else {
    sub_10 = v_4911;
  };
  sub_34 = sub_23;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  if (instanciador_ck_17_1) {
    v_4900 = sub_28;
  } else {
    v_4900 = false;
  };
  if (instanciador_lx) {
    v_4901 = v_4900;
  } else {
    v_4901 = sub_28;
  };
  sub_35 = sub_28;
  if (instanciador_c_lampExt) {
    sub_27 = v_4901;
  } else {
    sub_27 = sub_35;
  };
  if (instanciador_ck_15_1) {
    v_4902 = sub_27;
  } else {
    v_4902 = false;
  };
  if (instanciador_l4) {
    v_4903 = v_4902;
  } else {
    v_4903 = sub_27;
  };
  if (instanciador_c4_lamp) {
    sub_26 = v_4903;
  } else {
    sub_26 = sub_27;
  };
  if (instanciador_ck_13_1) {
    v_4904 = false;
  } else {
    v_4904 = sub_26;
  };
  if (instanciador_c3_lamp) {
    v_4905 = sub_26;
  } else {
    v_4905 = v_4904;
  };
  if (instanciador_l3) {
    sub_25 = sub_26;
  } else {
    sub_25 = v_4905;
  };
  if (instanciador_ck_11_1) {
    v_4914 = false;
  } else {
    v_4914 = sub_25;
  };
  if (instanciador_c2_lamp) {
    v_4915 = sub_25;
  } else {
    v_4915 = v_4914;
  };
  if (instanciador_ck_11_1) {
    v_4912 = sub_25;
  } else {
    v_4912 = sub_10;
  };
  if (instanciador_c2_lamp) {
    v_4913 = v_4912;
  } else {
    v_4913 = sub_25;
  };
  if (instanciador_l2) {
    sub_9 = v_4913;
  } else {
    sub_9 = v_4915;
  };
  if (instanciador_ck_9_1) {
    sub_36 = false;
  } else {
    sub_36 = sub_9;
  };
  if (instanciador_c1_lamp) {
    v_4918 = sub_36;
  } else {
    v_4918 = false;
  };
  if (instanciador_l1) {
    v_4919 = v_4918;
  } else {
    v_4919 = false;
  };
  if (instanciador_c1_lamp) {
    v_4916 = sub_9;
  } else {
    v_4916 = sub_36;
  };
  if (instanciador_l1) {
    v_4917 = sub_9;
  } else {
    v_4917 = v_4916;
  };
  if (instanciador_c1) {
    sub_8 = v_4917;
  } else {
    sub_8 = v_4919;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  if (instanciador_ck_17_1) {
    v_4886 = false;
  } else {
    v_4886 = sub_14;
  };
  if (instanciador_lx) {
    v_4887 = sub_14;
  } else {
    v_4887 = v_4886;
  };
  if (instanciador_c_lampExt) {
    sub_46 = sub_24;
  } else {
    sub_46 = v_4887;
  };
  if (instanciador_ck_15_1) {
    v_4888 = false;
  } else {
    v_4888 = sub_46;
  };
  if (instanciador_l4) {
    v_4889 = sub_46;
  } else {
    v_4889 = v_4888;
  };
  sub_45 = sub_46;
  if (instanciador_c4_lamp) {
    sub_44 = sub_45;
  } else {
    sub_44 = v_4889;
  };
  if (instanciador_ck_13_1) {
    v_4890 = false;
  } else {
    v_4890 = sub_44;
  };
  if (instanciador_c3_lamp) {
    v_4891 = sub_44;
  } else {
    v_4891 = v_4890;
  };
  if (instanciador_l3) {
    sub_43 = sub_44;
  } else {
    sub_43 = v_4891;
  };
  if (instanciador_ck_17_1) {
    v_4880 = false;
  } else {
    v_4880 = sub_28;
  };
  if (instanciador_lx) {
    v_4881 = sub_28;
  } else {
    v_4881 = v_4880;
  };
  if (instanciador_c_lampExt) {
    sub_49 = sub_35;
  } else {
    sub_49 = v_4881;
  };
  if (instanciador_ck_15_1) {
    v_4882 = false;
  } else {
    v_4882 = sub_49;
  };
  if (instanciador_l4) {
    v_4883 = sub_49;
  } else {
    v_4883 = v_4882;
  };
  if (instanciador_c4_lamp) {
    sub_48 = sub_49;
  } else {
    sub_48 = v_4883;
  };
  if (instanciador_ck_13_1) {
    v_4884 = false;
  } else {
    v_4884 = sub_48;
  };
  if (instanciador_c3_lamp) {
    v_4885 = sub_48;
  } else {
    v_4885 = v_4884;
  };
  if (instanciador_l3) {
    sub_47 = sub_48;
  } else {
    sub_47 = v_4885;
  };
  if (instanciador_ck_11_1) {
    v_4894 = false;
  } else {
    v_4894 = sub_47;
  };
  if (instanciador_c2_lamp) {
    v_4895 = sub_47;
  } else {
    v_4895 = v_4894;
  };
  if (instanciador_ck_11_1) {
    v_4892 = sub_47;
  } else {
    v_4892 = sub_43;
  };
  if (instanciador_c2_lamp) {
    v_4893 = v_4892;
  } else {
    v_4893 = sub_47;
  };
  if (instanciador_l2) {
    sub_42 = v_4893;
  } else {
    sub_42 = v_4895;
  };
  if (instanciador_ck_9_1) {
    sub_50 = false;
  } else {
    sub_50 = sub_42;
  };
  if (instanciador_c1_lamp) {
    v_4898 = sub_50;
  } else {
    v_4898 = false;
  };
  if (instanciador_l1) {
    v_4899 = v_4898;
  } else {
    v_4899 = false;
  };
  if (instanciador_c1_lamp) {
    v_4896 = sub_42;
  } else {
    v_4896 = sub_50;
  };
  if (instanciador_l1) {
    v_4897 = sub_42;
  } else {
    v_4897 = v_4896;
  };
  if (instanciador_c1) {
    sub_41 = v_4897;
  } else {
    sub_41 = v_4899;
  };
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  if (instanciador_v_341) {
    sub_3 = sub_37;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  sub_68 = sub_22;
  sub_67 = sub_68;
  sub_66 = sub_67;
  sub_65 = sub_66;
  sub_64 = sub_65;
  sub_63 = sub_64;
  sub_62 = sub_63;
  if (instanciador_ck_17_1) {
    v_4859 = false;
  } else {
    v_4859 = sub_62;
  };
  if (instanciador_lx) {
    v_4860 = sub_62;
  } else {
    v_4860 = v_4859;
  };
  sub_61 = sub_62;
  if (instanciador_c_lampExt) {
    sub_60 = sub_61;
  } else {
    sub_60 = v_4860;
  };
  if (instanciador_ck_15_1) {
    v_4861 = sub_60;
  } else {
    v_4861 = false;
  };
  if (instanciador_l4) {
    v_4862 = v_4861;
  } else {
    v_4862 = sub_60;
  };
  if (instanciador_c4_lamp) {
    sub_59 = v_4862;
  } else {
    sub_59 = sub_60;
  };
  if (instanciador_ck_13_1) {
    v_4863 = false;
  } else {
    v_4863 = sub_59;
  };
  if (instanciador_c3_lamp) {
    v_4864 = sub_59;
  } else {
    v_4864 = v_4863;
  };
  if (instanciador_l3) {
    sub_58 = sub_59;
  } else {
    sub_58 = v_4864;
  };
  if (instanciador_ck_11_1) {
    v_4865 = sub_58;
  } else {
    v_4865 = false;
  };
  if (instanciador_c2_lamp) {
    v_4866 = v_4865;
  } else {
    v_4866 = sub_58;
  };
  if (instanciador_ck_15_1) {
    v_4857 = sub_46;
  } else {
    v_4857 = false;
  };
  if (instanciador_l4) {
    v_4858 = v_4857;
  } else {
    v_4858 = sub_46;
  };
  if (instanciador_c4_lamp) {
    sub_69 = v_4858;
  } else {
    sub_69 = sub_45;
  };
  if (instanciador_ck_13_1) {
    v_4867 = false;
  } else {
    v_4867 = sub_69;
  };
  if (instanciador_c3_lamp) {
    v_4868 = sub_69;
  } else {
    v_4868 = v_4867;
  };
  if (instanciador_l3) {
    v_4869 = sub_69;
  } else {
    v_4869 = v_4868;
  };
  if (instanciador_ck_11_1) {
    v_4870 = v_4869;
  } else {
    v_4870 = sub_58;
  };
  if (instanciador_c2_lamp) {
    v_4871 = sub_58;
  } else {
    v_4871 = v_4870;
  };
  if (instanciador_l2) {
    sub_57 = v_4866;
  } else {
    sub_57 = v_4871;
  };
  if (instanciador_ck_9_1) {
    sub_56 = sub_57;
  } else {
    sub_56 = false;
  };
  if (instanciador_c1_lamp) {
    v_4874 = sub_56;
  } else {
    v_4874 = sub_57;
  };
  if (instanciador_l1) {
    v_4875 = v_4874;
  } else {
    v_4875 = sub_57;
  };
  if (instanciador_c1_lamp) {
    v_4872 = false;
  } else {
    v_4872 = sub_56;
  };
  if (instanciador_l1) {
    v_4873 = false;
  } else {
    v_4873 = v_4872;
  };
  if (instanciador_c1) {
    sub_55 = v_4873;
  } else {
    sub_55 = v_4875;
  };
  sub_54 = sub_55;
  sub_53 = sub_54;
  sub_80 = sub_24;
  sub_79 = sub_80;
  sub_78 = sub_79;
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_73 = sub_74;
  sub_72 = sub_73;
  sub_71 = sub_72;
  if (instanciador_neutro_input) {
    v_4876 = sub_71;
  } else {
    v_4876 = sub_8;
  };
  if (instanciador_ck_13_1) {
    v_4848 = sub_12;
  } else {
    v_4848 = false;
  };
  if (instanciador_c3_lamp) {
    v_4849 = v_4848;
  } else {
    v_4849 = sub_12;
  };
  if (instanciador_l3) {
    v_4850 = v_4849;
  } else {
    v_4850 = sub_11;
  };
  if (instanciador_ck_17_1) {
    v_4840 = sub_62;
  } else {
    v_4840 = false;
  };
  if (instanciador_lx) {
    v_4841 = v_4840;
  } else {
    v_4841 = sub_62;
  };
  if (instanciador_c_lampExt) {
    sub_86 = v_4841;
  } else {
    sub_86 = sub_61;
  };
  if (instanciador_ck_15_1) {
    v_4842 = sub_86;
  } else {
    v_4842 = false;
  };
  if (instanciador_l4) {
    v_4843 = v_4842;
  } else {
    v_4843 = sub_86;
  };
  if (instanciador_c4_lamp) {
    sub_85 = v_4843;
  } else {
    sub_85 = sub_86;
  };
  if (instanciador_ck_13_1) {
    v_4844 = sub_85;
  } else {
    v_4844 = false;
  };
  if (instanciador_c3_lamp) {
    v_4845 = v_4844;
  } else {
    v_4845 = sub_85;
  };
  if (instanciador_l3) {
    sub_84 = v_4845;
  } else {
    sub_84 = sub_85;
  };
  if (instanciador_ck_11_1) {
    v_4851 = v_4850;
  } else {
    v_4851 = sub_84;
  };
  if (instanciador_c2_lamp) {
    v_4852 = sub_84;
  } else {
    v_4852 = v_4851;
  };
  if (instanciador_ck_11_1) {
    v_4846 = sub_84;
  } else {
    v_4846 = false;
  };
  if (instanciador_c2_lamp) {
    v_4847 = v_4846;
  } else {
    v_4847 = sub_84;
  };
  if (instanciador_l2) {
    sub_83 = v_4847;
  } else {
    sub_83 = v_4852;
  };
  if (instanciador_ck_9_1) {
    sub_82 = sub_83;
  } else {
    sub_82 = false;
  };
  if (instanciador_c1_lamp) {
    v_4855 = sub_82;
  } else {
    v_4855 = sub_83;
  };
  if (instanciador_l1) {
    v_4856 = v_4855;
  } else {
    v_4856 = sub_83;
  };
  if (instanciador_c1_lamp) {
    v_4853 = false;
  } else {
    v_4853 = sub_82;
  };
  if (instanciador_l1) {
    v_4854 = false;
  } else {
    v_4854 = v_4853;
  };
  if (instanciador_c1) {
    sub_81 = v_4854;
  } else {
    sub_81 = v_4856;
  };
  if (instanciador_neutro_input) {
    sub_70 = sub_71;
  } else {
    sub_70 = sub_81;
  };
  if (instanciador_seguranca_input) {
    v_4877 = sub_70;
  } else {
    v_4877 = v_4876;
  };
  if (instanciador_domingol_input) {
    v_4878 = sub_53;
  } else {
    v_4878 = v_4877;
  };
  if (instanciador_domingo_input) {
    sub_52 = sub_38;
  } else {
    sub_52 = v_4878;
  };
  if (instanciador_v_341) {
    v_4879 = sub_37;
  } else {
    v_4879 = sub_52;
  };
  if (instanciador_sexta_input) {
    sub_51 = sub_37;
  } else {
    sub_51 = v_4879;
  };
  if (instanciador_v_339) {
    v_4920 = sub_51;
  } else {
    v_4920 = sub_2;
  };
  if (instanciador_neutro_input) {
    sub_91 = sub_71;
  } else {
    sub_91 = sub_41;
  };
  if (instanciador_seguranca_input) {
    v_4839 = sub_70;
  } else {
    v_4839 = sub_91;
  };
  if (instanciador_domingol_input) {
    sub_90 = sub_53;
  } else {
    sub_90 = v_4839;
  };
  if (instanciador_domingo_input) {
    sub_89 = sub_38;
  } else {
    sub_89 = sub_90;
  };
  if (instanciador_v_341) {
    sub_88 = sub_37;
  } else {
    sub_88 = sub_89;
  };
  sub_87 = sub_88;
  if (instanciador_v_339) {
    v_4921 = sub_51;
  } else {
    v_4921 = sub_87;
  };
  if (instanciador_ebd_input) {
    sub_1 = v_4920;
  } else {
    sub_1 = v_4921;
  };
  if (instanciador_seguranca_input) {
    v_4835 = sub_81;
  } else {
    v_4835 = sub_71;
  };
  if (instanciador_domingol_input) {
    v_4836 = sub_53;
    v_4834 = sub_53;
  } else {
    v_4836 = v_4835;
    v_4834 = sub_39;
  };
  if (instanciador_domingo_input) {
    v_4837 = v_4834;
  } else {
    v_4837 = v_4836;
  };
  if (instanciador_domingol_input) {
    v_4833 = sub_53;
    v_4832 = sub_53;
  } else {
    v_4833 = sub_70;
    v_4832 = sub_91;
  };
  if (instanciador_domingo_input) {
    sub_93 = v_4832;
  } else {
    sub_93 = v_4833;
  };
  if (instanciador_v_341) {
    v_4838 = v_4837;
  } else {
    v_4838 = sub_93;
  };
  if (instanciador_sexta_input) {
    sub_92 = sub_37;
  } else {
    sub_92 = v_4838;
  };
  if (instanciador_neutro_input) {
    v = sub_71;
  } else {
    v = sub_55;
  };
  if (instanciador_seguranca_input) {
    sub_95 = sub_70;
  } else {
    sub_95 = v;
  };
  if (instanciador_domingo_input) {
    sub_94 = sub_38;
  } else {
    sub_94 = sub_95;
  };
  if (instanciador_v_341) {
    v_4922 = sub_90;
  } else {
    v_4922 = sub_94;
  };
  if (instanciador_sexta_input) {
    v_4923 = sub_37;
  } else {
    v_4923 = v_4922;
  };
  if (instanciador_v_339) {
    v_4924 = v_4923;
  } else {
    v_4924 = sub_92;
  };
  if (instanciador_ebd_input) {
    v_4925 = sub_4;
  } else {
    v_4925 = v_4924;
  };
  if (instanciador_v_340) {
    sub_0 = v_4925;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c2 = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c1_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_c_lampExt,
  int instanciador_c4_lamp, int instanciador_c3_lamp,
  int instanciador_c2_lamp, int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c1_out* _out) {
  
  int v_5029;
  int v_5028;
  int v_5027;
  int v_5026;
  int v_5025;
  int v_5024;
  int v_5023;
  int v_5022;
  int v_5021;
  int v_5020;
  int v_5019;
  int v_5018;
  int v_5017;
  int v_5016;
  int v_5015;
  int v_5014;
  int v_5013;
  int v_5012;
  int v_5011;
  int v_5010;
  int v_5009;
  int v_5008;
  int v_5007;
  int v_5006;
  int v_5005;
  int v_5004;
  int v_5003;
  int v_5002;
  int v_5001;
  int v_5000;
  int v_4999;
  int v_4998;
  int v_4997;
  int v_4996;
  int v_4995;
  int v_4994;
  int v_4993;
  int v_4992;
  int v_4991;
  int v_4990;
  int v_4989;
  int v_4988;
  int v_4987;
  int v_4986;
  int v_4985;
  int v_4984;
  int v_4983;
  int v_4982;
  int v_4981;
  int v_4980;
  int v_4979;
  int v_4978;
  int v_4977;
  int v_4976;
  int v_4975;
  int v_4974;
  int v_4973;
  int v_4972;
  int v_4971;
  int v_4970;
  int v_4969;
  int v_4968;
  int v_4967;
  int v_4966;
  int v_4965;
  int v_4964;
  int v_4963;
  int v_4962;
  int v_4961;
  int v_4960;
  int v_4959;
  int v_4958;
  int v_4957;
  int v_4956;
  int v_4955;
  int v_4954;
  int v_4953;
  int v_4952;
  int v_4951;
  int v_4950;
  int v_4949;
  int v_4948;
  int v_4947;
  int v_4946;
  int v_4945;
  int v_4944;
  int v_4943;
  int v_4942;
  int v_4941;
  int v_4940;
  int v_4939;
  int v_4938;
  int v_4937;
  int v_4936;
  int v_4935;
  int v_4934;
  int v_4933;
  int v_4932;
  int v_4931;
  int v_4930;
  int v_4929;
  int v_4928;
  int v_4927;
  int v_4926;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  int sub_122;
  int sub_123;
  int sub_124;
  int sub_125;
  int sub_126;
  int sub_127;
  sub_22 = false;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  if (instanciador_ck_17_1) {
    v_5009 = sub_15;
  } else {
    v_5009 = false;
  };
  if (instanciador_lx) {
    v_5010 = v_5009;
  } else {
    v_5010 = sub_15;
  };
  sub_23 = sub_15;
  if (instanciador_c_lampExt) {
    sub_14 = v_5010;
  } else {
    sub_14 = sub_23;
  };
  if (instanciador_ck_15_1) {
    v_5011 = sub_14;
  } else {
    v_5011 = false;
  };
  if (instanciador_l4) {
    v_5012 = v_5011;
  } else {
    v_5012 = sub_14;
  };
  if (instanciador_c4_lamp) {
    sub_13 = v_5012;
  } else {
    sub_13 = sub_14;
  };
  if (instanciador_ck_13_1) {
    v_5013 = false;
  } else {
    v_5013 = sub_13;
  };
  if (instanciador_c3_lamp) {
    v_5014 = sub_13;
  } else {
    v_5014 = v_5013;
  };
  sub_12 = sub_13;
  if (instanciador_l3) {
    sub_11 = sub_12;
  } else {
    sub_11 = v_5014;
  };
  if (instanciador_ck_11_1) {
    v_5015 = false;
  } else {
    v_5015 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_5016 = sub_11;
  } else {
    v_5016 = v_5015;
  };
  if (instanciador_l2) {
    sub_10 = sub_11;
  } else {
    sub_10 = v_5016;
  };
  sub_36 = true;
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  sub_32 = sub_33;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  if (instanciador_ck_17_1) {
    v_5001 = sub_29;
  } else {
    v_5001 = false;
  };
  if (instanciador_lx) {
    v_5002 = v_5001;
  } else {
    v_5002 = sub_29;
  };
  sub_37 = sub_29;
  if (instanciador_c_lampExt) {
    sub_28 = v_5002;
  } else {
    sub_28 = sub_37;
  };
  if (instanciador_ck_15_1) {
    v_5003 = sub_28;
  } else {
    v_5003 = false;
  };
  if (instanciador_l4) {
    v_5004 = v_5003;
  } else {
    v_5004 = sub_28;
  };
  if (instanciador_c4_lamp) {
    sub_27 = v_5004;
  } else {
    sub_27 = sub_28;
  };
  if (instanciador_ck_13_1) {
    v_5005 = false;
  } else {
    v_5005 = sub_27;
  };
  if (instanciador_c3_lamp) {
    v_5006 = sub_27;
  } else {
    v_5006 = v_5005;
  };
  sub_26 = sub_27;
  if (instanciador_l3) {
    sub_25 = sub_26;
  } else {
    sub_25 = v_5006;
  };
  if (instanciador_ck_11_1) {
    v_5007 = false;
  } else {
    v_5007 = sub_25;
  };
  if (instanciador_c2_lamp) {
    v_5008 = sub_25;
  } else {
    v_5008 = v_5007;
  };
  if (instanciador_l2) {
    sub_24 = sub_25;
  } else {
    sub_24 = v_5008;
  };
  if (instanciador_ck_9_1) {
    v_5017 = sub_24;
  } else {
    v_5017 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_5018 = v_5017;
  } else {
    v_5018 = sub_24;
  };
  if (instanciador_ck_9_1) {
    v_5000 = false;
  } else {
    v_5000 = sub_24;
  };
  if (instanciador_c1_lamp) {
    sub_38 = sub_24;
  } else {
    sub_38 = v_5000;
  };
  if (instanciador_l1) {
    sub_9 = v_5018;
  } else {
    sub_9 = sub_38;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  if (instanciador_ck_17_1) {
    v_4990 = false;
  } else {
    v_4990 = sub_15;
  };
  if (instanciador_lx) {
    v_4991 = sub_15;
  } else {
    v_4991 = v_4990;
  };
  if (instanciador_c_lampExt) {
    sub_48 = sub_23;
  } else {
    sub_48 = v_4991;
  };
  if (instanciador_ck_15_1) {
    v_4992 = false;
  } else {
    v_4992 = sub_48;
  };
  if (instanciador_l4) {
    v_4993 = sub_48;
  } else {
    v_4993 = v_4992;
  };
  sub_47 = sub_48;
  if (instanciador_c4_lamp) {
    sub_46 = sub_47;
  } else {
    sub_46 = v_4993;
  };
  if (instanciador_ck_13_1) {
    v_4994 = false;
  } else {
    v_4994 = sub_46;
  };
  if (instanciador_c3_lamp) {
    v_4995 = sub_46;
  } else {
    v_4995 = v_4994;
  };
  if (instanciador_l3) {
    sub_45 = sub_46;
  } else {
    sub_45 = v_4995;
  };
  if (instanciador_ck_11_1) {
    v_4996 = false;
  } else {
    v_4996 = sub_45;
  };
  if (instanciador_c2_lamp) {
    v_4997 = sub_45;
  } else {
    v_4997 = v_4996;
  };
  if (instanciador_l2) {
    sub_44 = sub_45;
  } else {
    sub_44 = v_4997;
  };
  if (instanciador_ck_17_1) {
    v_4982 = false;
  } else {
    v_4982 = sub_29;
  };
  if (instanciador_lx) {
    v_4983 = sub_29;
  } else {
    v_4983 = v_4982;
  };
  if (instanciador_c_lampExt) {
    sub_53 = sub_37;
  } else {
    sub_53 = v_4983;
  };
  if (instanciador_ck_15_1) {
    v_4984 = false;
  } else {
    v_4984 = sub_53;
  };
  if (instanciador_l4) {
    v_4985 = sub_53;
  } else {
    v_4985 = v_4984;
  };
  sub_52 = sub_53;
  if (instanciador_c4_lamp) {
    sub_51 = sub_52;
  } else {
    sub_51 = v_4985;
  };
  if (instanciador_ck_13_1) {
    v_4986 = false;
  } else {
    v_4986 = sub_51;
  };
  if (instanciador_c3_lamp) {
    v_4987 = sub_51;
  } else {
    v_4987 = v_4986;
  };
  if (instanciador_l3) {
    sub_50 = sub_51;
  } else {
    sub_50 = v_4987;
  };
  if (instanciador_ck_11_1) {
    v_4988 = false;
  } else {
    v_4988 = sub_50;
  };
  if (instanciador_c2_lamp) {
    v_4989 = sub_50;
  } else {
    v_4989 = v_4988;
  };
  if (instanciador_l2) {
    sub_49 = sub_50;
  } else {
    sub_49 = v_4989;
  };
  if (instanciador_ck_9_1) {
    v_4998 = sub_49;
  } else {
    v_4998 = sub_44;
  };
  if (instanciador_c1_lamp) {
    v_4999 = v_4998;
  } else {
    v_4999 = sub_49;
  };
  if (instanciador_ck_9_1) {
    v_4981 = false;
  } else {
    v_4981 = sub_49;
  };
  if (instanciador_c1_lamp) {
    sub_54 = sub_49;
  } else {
    sub_54 = v_4981;
  };
  if (instanciador_l1) {
    sub_43 = v_4999;
  } else {
    sub_43 = sub_54;
  };
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (instanciador_v_341) {
    sub_4 = sub_39;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (instanciador_ck_15_1) {
    v_4970 = sub_48;
  } else {
    v_4970 = false;
  };
  if (instanciador_l4) {
    v_4971 = v_4970;
  } else {
    v_4971 = sub_48;
  };
  if (instanciador_c4_lamp) {
    sub_63 = v_4971;
  } else {
    sub_63 = sub_47;
  };
  if (instanciador_ck_13_1) {
    v_4972 = false;
  } else {
    v_4972 = sub_63;
  };
  if (instanciador_c3_lamp) {
    v_4973 = sub_63;
  } else {
    v_4973 = v_4972;
  };
  if (instanciador_l3) {
    sub_62 = sub_63;
  } else {
    sub_62 = v_4973;
  };
  if (instanciador_ck_11_1) {
    v_4974 = sub_62;
  } else {
    v_4974 = false;
  };
  if (instanciador_c2_lamp) {
    v_4975 = v_4974;
  } else {
    v_4975 = sub_62;
  };
  if (instanciador_l2) {
    sub_61 = v_4975;
  } else {
    sub_61 = sub_62;
  };
  if (instanciador_ck_9_1) {
    v_4976 = sub_61;
  } else {
    v_4976 = false;
  };
  if (instanciador_c1_lamp) {
    sub_60 = v_4976;
  } else {
    sub_60 = sub_61;
  };
  if (instanciador_l1) {
    sub_59 = sub_60;
  } else {
    sub_59 = sub_61;
  };
  sub_58 = sub_59;
  sub_57 = sub_58;
  sub_73 = sub_23;
  sub_72 = sub_73;
  sub_71 = sub_72;
  sub_70 = sub_71;
  sub_69 = sub_70;
  sub_68 = sub_69;
  sub_67 = sub_68;
  sub_66 = sub_67;
  sub_65 = sub_66;
  if (instanciador_neutro_input) {
    v_4977 = sub_65;
  } else {
    v_4977 = sub_9;
  };
  if (instanciador_ck_13_1) {
    v_4965 = sub_13;
  } else {
    v_4965 = false;
  };
  if (instanciador_c3_lamp) {
    v_4966 = v_4965;
  } else {
    v_4966 = sub_13;
  };
  if (instanciador_l3) {
    sub_77 = v_4966;
  } else {
    sub_77 = sub_12;
  };
  if (instanciador_ck_11_1) {
    v_4967 = sub_77;
  } else {
    v_4967 = false;
  };
  if (instanciador_c2_lamp) {
    v_4968 = v_4967;
  } else {
    v_4968 = sub_77;
  };
  if (instanciador_l2) {
    sub_76 = v_4968;
  } else {
    sub_76 = sub_77;
  };
  if (instanciador_ck_9_1) {
    v_4969 = sub_76;
  } else {
    v_4969 = false;
  };
  if (instanciador_c1_lamp) {
    sub_75 = v_4969;
  } else {
    sub_75 = sub_76;
  };
  if (instanciador_l1) {
    sub_74 = sub_75;
  } else {
    sub_74 = sub_76;
  };
  if (instanciador_neutro_input) {
    sub_64 = sub_65;
  } else {
    sub_64 = sub_74;
  };
  if (instanciador_seguranca_input) {
    v_4978 = sub_64;
  } else {
    v_4978 = v_4977;
  };
  if (instanciador_domingol_input) {
    v_4979 = sub_57;
  } else {
    v_4979 = v_4978;
  };
  if (instanciador_domingo_input) {
    sub_56 = sub_40;
  } else {
    sub_56 = v_4979;
  };
  if (instanciador_v_341) {
    v_4980 = sub_39;
  } else {
    v_4980 = sub_56;
  };
  if (instanciador_sexta_input) {
    sub_55 = sub_39;
  } else {
    sub_55 = v_4980;
  };
  if (instanciador_v_339) {
    v_5019 = sub_55;
  } else {
    v_5019 = sub_3;
  };
  if (instanciador_neutro_input) {
    sub_82 = sub_65;
  } else {
    sub_82 = sub_43;
  };
  if (instanciador_seguranca_input) {
    v_4964 = sub_64;
  } else {
    v_4964 = sub_82;
  };
  if (instanciador_domingol_input) {
    sub_81 = sub_57;
  } else {
    sub_81 = v_4964;
  };
  if (instanciador_domingo_input) {
    sub_80 = sub_40;
  } else {
    sub_80 = sub_81;
  };
  if (instanciador_v_341) {
    sub_79 = sub_39;
  } else {
    sub_79 = sub_80;
  };
  sub_78 = sub_79;
  if (instanciador_v_339) {
    v_5020 = sub_55;
  } else {
    v_5020 = sub_78;
  };
  if (instanciador_ebd_input) {
    sub_2 = v_5019;
  } else {
    sub_2 = v_5020;
  };
  if (instanciador_seguranca_input) {
    v_4960 = sub_74;
  } else {
    v_4960 = sub_65;
  };
  if (instanciador_domingol_input) {
    v_4961 = sub_57;
    v_4959 = sub_57;
  } else {
    v_4961 = v_4960;
    v_4959 = sub_41;
  };
  if (instanciador_domingo_input) {
    v_4962 = v_4959;
  } else {
    v_4962 = v_4961;
  };
  if (instanciador_domingol_input) {
    v_4958 = sub_57;
    v_4957 = sub_57;
  } else {
    v_4958 = sub_64;
    v_4957 = sub_82;
  };
  if (instanciador_domingo_input) {
    sub_84 = v_4957;
  } else {
    sub_84 = v_4958;
  };
  if (instanciador_v_341) {
    v_4963 = v_4962;
  } else {
    v_4963 = sub_84;
  };
  if (instanciador_sexta_input) {
    sub_83 = sub_39;
  } else {
    sub_83 = v_4963;
  };
  if (instanciador_neutro_input) {
    v_4956 = sub_65;
  } else {
    v_4956 = sub_59;
  };
  if (instanciador_seguranca_input) {
    sub_86 = sub_64;
  } else {
    sub_86 = v_4956;
  };
  if (instanciador_domingo_input) {
    sub_85 = sub_40;
  } else {
    sub_85 = sub_86;
  };
  if (instanciador_v_341) {
    v_5021 = sub_81;
  } else {
    v_5021 = sub_85;
  };
  if (instanciador_sexta_input) {
    v_5022 = sub_39;
  } else {
    v_5022 = v_5021;
  };
  if (instanciador_v_339) {
    v_5023 = v_5022;
  } else {
    v_5023 = sub_83;
  };
  if (instanciador_ebd_input) {
    v_5024 = sub_5;
  } else {
    v_5024 = v_5023;
  };
  if (instanciador_v_340) {
    sub_1 = v_5024;
  } else {
    sub_1 = sub_2;
  };
  if (instanciador_l1) {
    sub_94 = sub_24;
  } else {
    sub_94 = sub_38;
  };
  sub_93 = sub_94;
  sub_92 = sub_93;
  sub_91 = sub_92;
  sub_90 = sub_91;
  if (instanciador_l1) {
    sub_99 = sub_49;
  } else {
    sub_99 = sub_54;
  };
  sub_98 = sub_99;
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_95 = sub_96;
  if (instanciador_v_341) {
    sub_89 = sub_95;
  } else {
    sub_89 = sub_90;
  };
  sub_88 = sub_89;
  if (instanciador_ck_15_1) {
    v_4941 = sub_53;
  } else {
    v_4941 = false;
  };
  if (instanciador_l4) {
    v_4942 = v_4941;
  } else {
    v_4942 = sub_53;
  };
  if (instanciador_c4_lamp) {
    sub_106 = v_4942;
  } else {
    sub_106 = sub_52;
  };
  if (instanciador_ck_13_1) {
    v_4943 = false;
  } else {
    v_4943 = sub_106;
  };
  if (instanciador_c3_lamp) {
    v_4944 = sub_106;
  } else {
    v_4944 = v_4943;
  };
  if (instanciador_l3) {
    sub_105 = sub_106;
  } else {
    sub_105 = v_4944;
  };
  if (instanciador_ck_11_1) {
    v_4945 = sub_105;
  } else {
    v_4945 = false;
  };
  if (instanciador_c2_lamp) {
    v_4946 = v_4945;
  } else {
    v_4946 = sub_105;
  };
  if (instanciador_l2) {
    v_4947 = v_4946;
  } else {
    v_4947 = sub_105;
  };
  if (instanciador_ck_9_1) {
    v_4948 = v_4947;
  } else {
    v_4948 = sub_61;
  };
  if (instanciador_c1_lamp) {
    v_4949 = sub_61;
  } else {
    v_4949 = v_4948;
  };
  if (instanciador_l1) {
    sub_104 = sub_60;
  } else {
    sub_104 = v_4949;
  };
  sub_103 = sub_104;
  sub_102 = sub_103;
  sub_116 = sub_37;
  sub_115 = sub_116;
  sub_114 = sub_115;
  sub_113 = sub_114;
  sub_112 = sub_113;
  sub_111 = sub_112;
  sub_110 = sub_111;
  sub_109 = sub_110;
  sub_108 = sub_109;
  if (instanciador_neutro_input) {
    v_4950 = sub_108;
  } else {
    v_4950 = sub_94;
  };
  if (instanciador_ck_13_1) {
    v_4934 = sub_27;
  } else {
    v_4934 = false;
  };
  if (instanciador_c3_lamp) {
    v_4935 = v_4934;
  } else {
    v_4935 = sub_27;
  };
  if (instanciador_l3) {
    sub_118 = v_4935;
  } else {
    sub_118 = sub_26;
  };
  if (instanciador_ck_11_1) {
    v_4936 = sub_118;
  } else {
    v_4936 = false;
  };
  if (instanciador_c2_lamp) {
    v_4937 = v_4936;
  } else {
    v_4937 = sub_118;
  };
  if (instanciador_l2) {
    v_4938 = v_4937;
  } else {
    v_4938 = sub_118;
  };
  if (instanciador_ck_9_1) {
    v_4939 = v_4938;
  } else {
    v_4939 = sub_76;
  };
  if (instanciador_c1_lamp) {
    v_4940 = sub_76;
  } else {
    v_4940 = v_4939;
  };
  if (instanciador_l1) {
    sub_117 = sub_75;
  } else {
    sub_117 = v_4940;
  };
  if (instanciador_neutro_input) {
    sub_107 = sub_108;
  } else {
    sub_107 = sub_117;
  };
  if (instanciador_seguranca_input) {
    v_4951 = sub_107;
  } else {
    v_4951 = v_4950;
  };
  if (instanciador_domingol_input) {
    v_4952 = sub_102;
  } else {
    v_4952 = v_4951;
  };
  if (instanciador_domingo_input) {
    sub_101 = sub_96;
  } else {
    sub_101 = v_4952;
  };
  if (instanciador_v_341) {
    v_4953 = sub_95;
  } else {
    v_4953 = sub_101;
  };
  if (instanciador_sexta_input) {
    sub_100 = sub_95;
  } else {
    sub_100 = v_4953;
  };
  if (instanciador_v_339) {
    v_4954 = sub_100;
  } else {
    v_4954 = sub_88;
  };
  if (instanciador_neutro_input) {
    sub_123 = sub_108;
  } else {
    sub_123 = sub_99;
  };
  if (instanciador_seguranca_input) {
    v_4933 = sub_107;
  } else {
    v_4933 = sub_123;
  };
  if (instanciador_domingol_input) {
    sub_122 = sub_102;
  } else {
    sub_122 = v_4933;
  };
  if (instanciador_domingo_input) {
    sub_121 = sub_96;
  } else {
    sub_121 = sub_122;
  };
  if (instanciador_v_341) {
    sub_120 = sub_95;
  } else {
    sub_120 = sub_121;
  };
  sub_119 = sub_120;
  if (instanciador_v_339) {
    v_4955 = sub_100;
  } else {
    v_4955 = sub_119;
  };
  if (instanciador_ebd_input) {
    sub_87 = v_4954;
  } else {
    sub_87 = v_4955;
  };
  if (instanciador_seguranca_input) {
    v_4929 = sub_117;
  } else {
    v_4929 = sub_108;
  };
  if (instanciador_domingol_input) {
    v_4930 = sub_102;
    v_4928 = sub_102;
  } else {
    v_4930 = v_4929;
    v_4928 = sub_97;
  };
  if (instanciador_domingo_input) {
    v_4931 = v_4928;
  } else {
    v_4931 = v_4930;
  };
  if (instanciador_domingol_input) {
    v_4927 = sub_102;
    v_4926 = sub_102;
  } else {
    v_4927 = sub_107;
    v_4926 = sub_123;
  };
  if (instanciador_domingo_input) {
    sub_125 = v_4926;
  } else {
    sub_125 = v_4927;
  };
  if (instanciador_v_341) {
    v_4932 = v_4931;
  } else {
    v_4932 = sub_125;
  };
  if (instanciador_sexta_input) {
    sub_124 = sub_95;
  } else {
    sub_124 = v_4932;
  };
  if (instanciador_neutro_input) {
    v = sub_108;
  } else {
    v = sub_104;
  };
  if (instanciador_seguranca_input) {
    sub_127 = sub_107;
  } else {
    sub_127 = v;
  };
  if (instanciador_domingo_input) {
    sub_126 = sub_96;
  } else {
    sub_126 = sub_127;
  };
  if (instanciador_v_341) {
    v_5025 = sub_122;
  } else {
    v_5025 = sub_126;
  };
  if (instanciador_sexta_input) {
    v_5026 = sub_95;
  } else {
    v_5026 = v_5025;
  };
  if (instanciador_v_339) {
    v_5027 = v_5026;
  } else {
    v_5027 = sub_124;
  };
  if (instanciador_ebd_input) {
    v_5028 = sub_90;
  } else {
    v_5028 = v_5027;
  };
  if (instanciador_v_340) {
    v_5029 = v_5028;
  } else {
    v_5029 = sub_87;
  };
  if (p_instanciador_c1) {
    sub_0 = v_5029;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c1 = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c_lampExt_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_c4_lamp,
  int instanciador_c3_lamp, int instanciador_c2_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c_lampExt_out* _out) {
  
  int v_5127;
  int v_5126;
  int v_5125;
  int v_5124;
  int v_5123;
  int v_5122;
  int v_5121;
  int v_5120;
  int v_5119;
  int v_5118;
  int v_5117;
  int v_5116;
  int v_5115;
  int v_5114;
  int v_5113;
  int v_5112;
  int v_5111;
  int v_5110;
  int v_5109;
  int v_5108;
  int v_5107;
  int v_5106;
  int v_5105;
  int v_5104;
  int v_5103;
  int v_5102;
  int v_5101;
  int v_5100;
  int v_5099;
  int v_5098;
  int v_5097;
  int v_5096;
  int v_5095;
  int v_5094;
  int v_5093;
  int v_5092;
  int v_5091;
  int v_5090;
  int v_5089;
  int v_5088;
  int v_5087;
  int v_5086;
  int v_5085;
  int v_5084;
  int v_5083;
  int v_5082;
  int v_5081;
  int v_5080;
  int v_5079;
  int v_5078;
  int v_5077;
  int v_5076;
  int v_5075;
  int v_5074;
  int v_5073;
  int v_5072;
  int v_5071;
  int v_5070;
  int v_5069;
  int v_5068;
  int v_5067;
  int v_5066;
  int v_5065;
  int v_5064;
  int v_5063;
  int v_5062;
  int v_5061;
  int v_5060;
  int v_5059;
  int v_5058;
  int v_5057;
  int v_5056;
  int v_5055;
  int v_5054;
  int v_5053;
  int v_5052;
  int v_5051;
  int v_5050;
  int v_5049;
  int v_5048;
  int v_5047;
  int v_5046;
  int v_5045;
  int v_5044;
  int v_5043;
  int v_5042;
  int v_5041;
  int v_5040;
  int v_5039;
  int v_5038;
  int v_5037;
  int v_5036;
  int v_5035;
  int v_5034;
  int v_5033;
  int v_5032;
  int v_5031;
  int v_5030;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  int sub_75;
  int sub_76;
  int sub_77;
  int sub_78;
  int sub_79;
  int sub_80;
  int sub_81;
  int sub_82;
  int sub_83;
  int sub_84;
  int sub_85;
  int sub_86;
  int sub_87;
  int sub_88;
  int sub_89;
  int sub_90;
  int sub_91;
  int sub_92;
  int sub_93;
  int sub_94;
  int sub_95;
  int sub_96;
  int sub_97;
  int sub_98;
  int sub_99;
  int sub_100;
  int sub_101;
  int sub_102;
  int sub_103;
  int sub_104;
  int sub_105;
  int sub_106;
  int sub_107;
  int sub_108;
  int sub_109;
  int sub_110;
  int sub_111;
  int sub_112;
  int sub_113;
  int sub_114;
  int sub_115;
  int sub_116;
  int sub_117;
  int sub_118;
  int sub_119;
  int sub_120;
  int sub_121;
  sub_22 = false;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  if (instanciador_ck_15_1) {
    v_5109 = sub_14;
  } else {
    v_5109 = false;
  };
  if (instanciador_l4) {
    v_5110 = v_5109;
  } else {
    v_5110 = sub_14;
  };
  sub_23 = sub_14;
  if (instanciador_c4_lamp) {
    sub_13 = v_5110;
  } else {
    sub_13 = sub_23;
  };
  if (instanciador_ck_13_1) {
    v_5111 = false;
  } else {
    v_5111 = sub_13;
  };
  if (instanciador_c3_lamp) {
    v_5112 = sub_13;
  } else {
    v_5112 = v_5111;
  };
  sub_12 = sub_13;
  if (instanciador_l3) {
    sub_11 = sub_12;
  } else {
    sub_11 = v_5112;
  };
  if (instanciador_ck_11_1) {
    v_5113 = false;
  } else {
    v_5113 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_5114 = sub_11;
  } else {
    v_5114 = v_5113;
  };
  if (instanciador_l2) {
    sub_10 = sub_11;
  } else {
    sub_10 = v_5114;
  };
  if (instanciador_ck_9_1) {
    v_5115 = false;
  } else {
    v_5115 = sub_10;
  };
  if (instanciador_c1_lamp) {
    v_5116 = sub_10;
  } else {
    v_5116 = v_5115;
  };
  if (instanciador_l1) {
    sub_9 = sub_10;
  } else {
    sub_9 = v_5116;
  };
  sub_8 = sub_9;
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_42 = true;
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  sub_38 = sub_39;
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_35 = sub_36;
  if (instanciador_ck_17_1) {
    sub_34 = sub_35;
  } else {
    sub_34 = sub_15;
  };
  if (instanciador_lx) {
    sub_33 = sub_15;
  } else {
    sub_33 = sub_34;
  };
  if (instanciador_ck_15_1) {
    v_5101 = false;
  } else {
    v_5101 = sub_33;
  };
  if (instanciador_l4) {
    v_5102 = sub_33;
  } else {
    v_5102 = v_5101;
  };
  sub_32 = sub_33;
  if (instanciador_c4_lamp) {
    sub_31 = sub_32;
  } else {
    sub_31 = v_5102;
  };
  if (instanciador_ck_13_1) {
    v_5103 = false;
  } else {
    v_5103 = sub_31;
  };
  if (instanciador_c3_lamp) {
    v_5104 = sub_31;
  } else {
    v_5104 = v_5103;
  };
  if (instanciador_l3) {
    sub_30 = sub_31;
  } else {
    sub_30 = v_5104;
  };
  if (instanciador_ck_11_1) {
    v_5105 = false;
  } else {
    v_5105 = sub_30;
  };
  if (instanciador_c2_lamp) {
    v_5106 = sub_30;
  } else {
    v_5106 = v_5105;
  };
  if (instanciador_l2) {
    sub_29 = sub_30;
  } else {
    sub_29 = v_5106;
  };
  if (instanciador_ck_9_1) {
    v_5107 = false;
  } else {
    v_5107 = sub_29;
  };
  if (instanciador_c1_lamp) {
    v_5108 = sub_29;
  } else {
    v_5108 = v_5107;
  };
  if (instanciador_l1) {
    sub_28 = sub_29;
  } else {
    sub_28 = v_5108;
  };
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  if (instanciador_v_341) {
    sub_4 = sub_24;
  } else {
    sub_4 = sub_5;
  };
  sub_3 = sub_4;
  if (instanciador_ck_15_1) {
    v_5089 = sub_33;
  } else {
    v_5089 = false;
  };
  if (instanciador_l4) {
    v_5090 = v_5089;
  } else {
    v_5090 = sub_33;
  };
  if (instanciador_c4_lamp) {
    sub_50 = v_5090;
  } else {
    sub_50 = sub_32;
  };
  if (instanciador_ck_13_1) {
    v_5091 = false;
  } else {
    v_5091 = sub_50;
  };
  if (instanciador_c3_lamp) {
    v_5092 = sub_50;
  } else {
    v_5092 = v_5091;
  };
  if (instanciador_l3) {
    sub_49 = sub_50;
  } else {
    sub_49 = v_5092;
  };
  if (instanciador_ck_11_1) {
    v_5093 = sub_49;
  } else {
    v_5093 = false;
  };
  if (instanciador_c2_lamp) {
    v_5094 = v_5093;
  } else {
    v_5094 = sub_49;
  };
  if (instanciador_l2) {
    sub_48 = v_5094;
  } else {
    sub_48 = sub_49;
  };
  if (instanciador_ck_9_1) {
    v_5095 = sub_48;
  } else {
    v_5095 = false;
  };
  if (instanciador_c1_lamp) {
    v_5096 = v_5095;
  } else {
    v_5096 = sub_48;
  };
  if (instanciador_l1) {
    sub_47 = v_5096;
  } else {
    sub_47 = sub_48;
  };
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_58 = sub_23;
  sub_57 = sub_58;
  sub_56 = sub_57;
  sub_55 = sub_56;
  sub_54 = sub_55;
  sub_53 = sub_54;
  sub_52 = sub_53;
  if (instanciador_neutro_input) {
    v_5097 = sub_52;
  } else {
    v_5097 = sub_9;
  };
  if (instanciador_ck_13_1) {
    v_5083 = sub_13;
  } else {
    v_5083 = false;
  };
  if (instanciador_c3_lamp) {
    v_5084 = v_5083;
  } else {
    v_5084 = sub_13;
  };
  if (instanciador_l3) {
    sub_61 = v_5084;
  } else {
    sub_61 = sub_12;
  };
  if (instanciador_ck_11_1) {
    v_5085 = sub_61;
  } else {
    v_5085 = false;
  };
  if (instanciador_c2_lamp) {
    v_5086 = v_5085;
  } else {
    v_5086 = sub_61;
  };
  if (instanciador_l2) {
    sub_60 = v_5086;
  } else {
    sub_60 = sub_61;
  };
  if (instanciador_ck_9_1) {
    v_5087 = sub_60;
  } else {
    v_5087 = false;
  };
  if (instanciador_c1_lamp) {
    v_5088 = v_5087;
  } else {
    v_5088 = sub_60;
  };
  if (instanciador_l1) {
    sub_59 = v_5088;
  } else {
    sub_59 = sub_60;
  };
  if (instanciador_neutro_input) {
    sub_51 = sub_52;
  } else {
    sub_51 = sub_59;
  };
  if (instanciador_seguranca_input) {
    v_5098 = sub_51;
  } else {
    v_5098 = v_5097;
  };
  if (instanciador_domingol_input) {
    v_5099 = sub_45;
  } else {
    v_5099 = v_5098;
  };
  if (instanciador_domingo_input) {
    sub_44 = sub_25;
  } else {
    sub_44 = v_5099;
  };
  if (instanciador_v_341) {
    v_5100 = sub_24;
  } else {
    v_5100 = sub_44;
  };
  if (instanciador_sexta_input) {
    sub_43 = sub_24;
  } else {
    sub_43 = v_5100;
  };
  if (instanciador_v_339) {
    v_5117 = sub_43;
  } else {
    v_5117 = sub_3;
  };
  if (instanciador_neutro_input) {
    sub_66 = sub_52;
  } else {
    sub_66 = sub_28;
  };
  if (instanciador_seguranca_input) {
    v_5082 = sub_51;
  } else {
    v_5082 = sub_66;
  };
  if (instanciador_domingol_input) {
    sub_65 = sub_45;
  } else {
    sub_65 = v_5082;
  };
  if (instanciador_domingo_input) {
    sub_64 = sub_25;
  } else {
    sub_64 = sub_65;
  };
  if (instanciador_v_341) {
    sub_63 = sub_24;
  } else {
    sub_63 = sub_64;
  };
  sub_62 = sub_63;
  if (instanciador_v_339) {
    v_5118 = sub_43;
  } else {
    v_5118 = sub_62;
  };
  if (instanciador_ebd_input) {
    sub_2 = v_5117;
  } else {
    sub_2 = v_5118;
  };
  if (instanciador_seguranca_input) {
    v_5078 = sub_59;
  } else {
    v_5078 = sub_52;
  };
  if (instanciador_domingol_input) {
    v_5079 = sub_45;
    v_5077 = sub_45;
  } else {
    v_5079 = v_5078;
    v_5077 = sub_26;
  };
  if (instanciador_domingo_input) {
    v_5080 = v_5077;
  } else {
    v_5080 = v_5079;
  };
  if (instanciador_domingol_input) {
    v_5076 = sub_45;
    v_5075 = sub_45;
  } else {
    v_5076 = sub_51;
    v_5075 = sub_66;
  };
  if (instanciador_domingo_input) {
    sub_68 = v_5075;
  } else {
    sub_68 = v_5076;
  };
  if (instanciador_v_341) {
    v_5081 = v_5080;
  } else {
    v_5081 = sub_68;
  };
  if (instanciador_sexta_input) {
    sub_67 = sub_24;
  } else {
    sub_67 = v_5081;
  };
  if (instanciador_neutro_input) {
    v_5074 = sub_52;
  } else {
    v_5074 = sub_47;
  };
  if (instanciador_seguranca_input) {
    sub_70 = sub_51;
  } else {
    sub_70 = v_5074;
  };
  if (instanciador_domingo_input) {
    sub_69 = sub_25;
  } else {
    sub_69 = sub_70;
  };
  if (instanciador_v_341) {
    v_5119 = sub_65;
  } else {
    v_5119 = sub_69;
  };
  if (instanciador_sexta_input) {
    v_5120 = sub_24;
  } else {
    v_5120 = v_5119;
  };
  if (instanciador_v_339) {
    v_5121 = v_5120;
  } else {
    v_5121 = sub_67;
  };
  if (instanciador_ebd_input) {
    v_5122 = sub_5;
  } else {
    v_5122 = v_5121;
  };
  if (instanciador_v_340) {
    sub_1 = v_5122;
  } else {
    sub_1 = sub_2;
  };
  if (instanciador_lx) {
    sub_83 = sub_34;
  } else {
    sub_83 = sub_35;
  };
  if (instanciador_ck_15_1) {
    v_5064 = sub_83;
  } else {
    v_5064 = false;
  };
  if (instanciador_l4) {
    v_5065 = v_5064;
  } else {
    v_5065 = sub_83;
  };
  if (instanciador_c4_lamp) {
    sub_82 = v_5065;
  } else {
    sub_82 = sub_83;
  };
  if (instanciador_ck_13_1) {
    v_5066 = false;
  } else {
    v_5066 = sub_82;
  };
  if (instanciador_c3_lamp) {
    v_5067 = sub_82;
  } else {
    v_5067 = v_5066;
  };
  sub_81 = sub_82;
  if (instanciador_l3) {
    sub_80 = sub_81;
  } else {
    sub_80 = v_5067;
  };
  if (instanciador_ck_11_1) {
    v_5068 = false;
  } else {
    v_5068 = sub_80;
  };
  if (instanciador_c2_lamp) {
    v_5069 = sub_80;
  } else {
    v_5069 = v_5068;
  };
  if (instanciador_l2) {
    sub_79 = sub_80;
  } else {
    sub_79 = v_5069;
  };
  if (instanciador_ck_9_1) {
    v_5070 = false;
  } else {
    v_5070 = sub_79;
  };
  if (instanciador_c1_lamp) {
    v_5071 = sub_79;
  } else {
    v_5071 = v_5070;
  };
  if (instanciador_l1) {
    sub_78 = sub_79;
  } else {
    sub_78 = v_5071;
  };
  sub_77 = sub_78;
  sub_76 = sub_77;
  sub_75 = sub_76;
  sub_74 = sub_75;
  sub_93 = sub_35;
  if (instanciador_ck_15_1) {
    v_5056 = false;
  } else {
    v_5056 = sub_93;
  };
  if (instanciador_l4) {
    v_5057 = sub_93;
  } else {
    v_5057 = v_5056;
  };
  sub_92 = sub_93;
  if (instanciador_c4_lamp) {
    sub_91 = sub_92;
  } else {
    sub_91 = v_5057;
  };
  if (instanciador_ck_13_1) {
    v_5058 = false;
  } else {
    v_5058 = sub_91;
  };
  if (instanciador_c3_lamp) {
    v_5059 = sub_91;
  } else {
    v_5059 = v_5058;
  };
  if (instanciador_l3) {
    sub_90 = sub_91;
  } else {
    sub_90 = v_5059;
  };
  if (instanciador_ck_11_1) {
    v_5060 = false;
  } else {
    v_5060 = sub_90;
  };
  if (instanciador_c2_lamp) {
    v_5061 = sub_90;
  } else {
    v_5061 = v_5060;
  };
  if (instanciador_l2) {
    sub_89 = sub_90;
  } else {
    sub_89 = v_5061;
  };
  if (instanciador_ck_9_1) {
    v_5062 = false;
  } else {
    v_5062 = sub_89;
  };
  if (instanciador_c1_lamp) {
    v_5063 = sub_89;
  } else {
    v_5063 = v_5062;
  };
  if (instanciador_l1) {
    sub_88 = sub_89;
  } else {
    sub_88 = v_5063;
  };
  sub_87 = sub_88;
  sub_86 = sub_87;
  sub_85 = sub_86;
  sub_84 = sub_85;
  if (instanciador_v_341) {
    sub_73 = sub_84;
  } else {
    sub_73 = sub_74;
  };
  sub_72 = sub_73;
  if (instanciador_ck_15_1) {
    v_5044 = sub_93;
  } else {
    v_5044 = false;
  };
  if (instanciador_l4) {
    v_5045 = v_5044;
  } else {
    v_5045 = sub_93;
  };
  if (instanciador_c4_lamp) {
    sub_101 = v_5045;
  } else {
    sub_101 = sub_92;
  };
  if (instanciador_ck_13_1) {
    v_5046 = false;
  } else {
    v_5046 = sub_101;
  };
  if (instanciador_c3_lamp) {
    v_5047 = sub_101;
  } else {
    v_5047 = v_5046;
  };
  if (instanciador_l3) {
    sub_100 = sub_101;
  } else {
    sub_100 = v_5047;
  };
  if (instanciador_ck_11_1) {
    v_5048 = sub_100;
  } else {
    v_5048 = false;
  };
  if (instanciador_c2_lamp) {
    v_5049 = v_5048;
  } else {
    v_5049 = sub_100;
  };
  if (instanciador_l2) {
    sub_99 = v_5049;
  } else {
    sub_99 = sub_100;
  };
  if (instanciador_ck_9_1) {
    v_5050 = sub_99;
  } else {
    v_5050 = false;
  };
  if (instanciador_c1_lamp) {
    v_5051 = v_5050;
  } else {
    v_5051 = sub_99;
  };
  if (instanciador_l1) {
    sub_98 = v_5051;
  } else {
    sub_98 = sub_99;
  };
  sub_97 = sub_98;
  sub_96 = sub_97;
  sub_109 = sub_92;
  sub_108 = sub_109;
  sub_107 = sub_108;
  sub_106 = sub_107;
  sub_105 = sub_106;
  sub_104 = sub_105;
  sub_103 = sub_104;
  if (instanciador_neutro_input) {
    v_5052 = sub_103;
  } else {
    v_5052 = sub_78;
  };
  if (instanciador_ck_13_1) {
    v_5038 = sub_82;
  } else {
    v_5038 = false;
  };
  if (instanciador_c3_lamp) {
    v_5039 = v_5038;
  } else {
    v_5039 = sub_82;
  };
  if (instanciador_l3) {
    sub_112 = v_5039;
  } else {
    sub_112 = sub_81;
  };
  if (instanciador_ck_11_1) {
    v_5040 = sub_112;
  } else {
    v_5040 = false;
  };
  if (instanciador_c2_lamp) {
    v_5041 = v_5040;
  } else {
    v_5041 = sub_112;
  };
  if (instanciador_l2) {
    sub_111 = v_5041;
  } else {
    sub_111 = sub_112;
  };
  if (instanciador_ck_9_1) {
    v_5042 = sub_111;
  } else {
    v_5042 = false;
  };
  if (instanciador_c1_lamp) {
    v_5043 = v_5042;
  } else {
    v_5043 = sub_111;
  };
  if (instanciador_l1) {
    sub_110 = v_5043;
  } else {
    sub_110 = sub_111;
  };
  if (instanciador_neutro_input) {
    sub_102 = sub_103;
  } else {
    sub_102 = sub_110;
  };
  if (instanciador_seguranca_input) {
    v_5053 = sub_102;
  } else {
    v_5053 = v_5052;
  };
  if (instanciador_domingol_input) {
    v_5054 = sub_96;
  } else {
    v_5054 = v_5053;
  };
  if (instanciador_domingo_input) {
    sub_95 = sub_85;
  } else {
    sub_95 = v_5054;
  };
  if (instanciador_v_341) {
    v_5055 = sub_84;
  } else {
    v_5055 = sub_95;
  };
  if (instanciador_sexta_input) {
    sub_94 = sub_84;
  } else {
    sub_94 = v_5055;
  };
  if (instanciador_v_339) {
    v_5072 = sub_94;
  } else {
    v_5072 = sub_72;
  };
  if (instanciador_neutro_input) {
    sub_117 = sub_103;
  } else {
    sub_117 = sub_88;
  };
  if (instanciador_seguranca_input) {
    v_5037 = sub_102;
  } else {
    v_5037 = sub_117;
  };
  if (instanciador_domingol_input) {
    sub_116 = sub_96;
  } else {
    sub_116 = v_5037;
  };
  if (instanciador_domingo_input) {
    sub_115 = sub_85;
  } else {
    sub_115 = sub_116;
  };
  if (instanciador_v_341) {
    sub_114 = sub_84;
  } else {
    sub_114 = sub_115;
  };
  sub_113 = sub_114;
  if (instanciador_v_339) {
    v_5073 = sub_94;
  } else {
    v_5073 = sub_113;
  };
  if (instanciador_ebd_input) {
    sub_71 = v_5072;
  } else {
    sub_71 = v_5073;
  };
  if (instanciador_seguranca_input) {
    v_5033 = sub_110;
  } else {
    v_5033 = sub_103;
  };
  if (instanciador_domingol_input) {
    v_5034 = sub_96;
    v_5032 = sub_96;
  } else {
    v_5034 = v_5033;
    v_5032 = sub_86;
  };
  if (instanciador_domingo_input) {
    v_5035 = v_5032;
  } else {
    v_5035 = v_5034;
  };
  if (instanciador_domingol_input) {
    v_5031 = sub_96;
    v_5030 = sub_96;
  } else {
    v_5031 = sub_102;
    v_5030 = sub_117;
  };
  if (instanciador_domingo_input) {
    sub_119 = v_5030;
  } else {
    sub_119 = v_5031;
  };
  if (instanciador_v_341) {
    v_5036 = v_5035;
  } else {
    v_5036 = sub_119;
  };
  if (instanciador_sexta_input) {
    sub_118 = sub_84;
  } else {
    sub_118 = v_5036;
  };
  if (instanciador_neutro_input) {
    v = sub_103;
  } else {
    v = sub_98;
  };
  if (instanciador_seguranca_input) {
    sub_121 = sub_102;
  } else {
    sub_121 = v;
  };
  if (instanciador_domingo_input) {
    sub_120 = sub_85;
  } else {
    sub_120 = sub_121;
  };
  if (instanciador_v_341) {
    v_5123 = sub_116;
  } else {
    v_5123 = sub_120;
  };
  if (instanciador_sexta_input) {
    v_5124 = sub_84;
  } else {
    v_5124 = v_5123;
  };
  if (instanciador_v_339) {
    v_5125 = v_5124;
  } else {
    v_5125 = sub_118;
  };
  if (instanciador_ebd_input) {
    v_5126 = sub_74;
  } else {
    v_5126 = v_5125;
  };
  if (instanciador_v_340) {
    v_5127 = v_5126;
  } else {
    v_5127 = sub_71;
  };
  if (p_instanciador_c_lampExt) {
    sub_0 = v_5127;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c_lampExt = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c4_lamp_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_c3_lamp,
  int instanciador_c2_lamp, int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c4_lamp_out* _out) {
  
  int v_5169;
  int v_5168;
  int v_5167;
  int v_5166;
  int v_5165;
  int v_5164;
  int v_5163;
  int v_5162;
  int v_5161;
  int v_5160;
  int v_5159;
  int v_5158;
  int v_5157;
  int v_5156;
  int v_5155;
  int v_5154;
  int v_5153;
  int v_5152;
  int v_5151;
  int v_5150;
  int v_5149;
  int v_5148;
  int v_5147;
  int v_5146;
  int v_5145;
  int v_5144;
  int v_5143;
  int v_5142;
  int v_5141;
  int v_5140;
  int v_5139;
  int v_5138;
  int v_5137;
  int v_5136;
  int v_5135;
  int v_5134;
  int v_5133;
  int v_5132;
  int v_5131;
  int v_5130;
  int v_5129;
  int v_5128;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  int sub_64;
  int sub_65;
  int sub_66;
  int sub_67;
  int sub_68;
  int sub_69;
  int sub_70;
  int sub_71;
  int sub_72;
  int sub_73;
  int sub_74;
  sub_22 = false;
  sub_21 = sub_22;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_32 = p_instanciador_c4_lamp;
  sub_31 = sub_32;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  if (instanciador_ck_15_1) {
    v_5157 = sub_23;
  } else {
    v_5157 = sub_14;
  };
  if (instanciador_l4) {
    sub_13 = v_5157;
  } else {
    sub_13 = sub_23;
  };
  if (instanciador_ck_13_1) {
    v_5158 = false;
  } else {
    v_5158 = sub_13;
  };
  if (instanciador_c3_lamp) {
    v_5159 = sub_13;
  } else {
    v_5159 = v_5158;
  };
  sub_12 = sub_13;
  if (instanciador_l3) {
    sub_11 = sub_12;
  } else {
    sub_11 = v_5159;
  };
  if (instanciador_ck_11_1) {
    v_5160 = false;
  } else {
    v_5160 = sub_11;
  };
  if (instanciador_c2_lamp) {
    v_5161 = sub_11;
  } else {
    v_5161 = v_5160;
  };
  sub_10 = sub_11;
  if (instanciador_l2) {
    sub_9 = sub_10;
  } else {
    sub_9 = v_5161;
  };
  if (instanciador_ck_9_1) {
    v_5162 = false;
  } else {
    v_5162 = sub_9;
  };
  if (instanciador_c1_lamp) {
    v_5163 = sub_9;
  } else {
    v_5163 = v_5162;
  };
  if (instanciador_l1) {
    sub_8 = sub_9;
  } else {
    sub_8 = v_5163;
  };
  sub_7 = sub_8;
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_48 = true;
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  if (instanciador_ck_15_1) {
    v_5150 = sub_41;
  } else {
    v_5150 = sub_23;
  };
  if (instanciador_l4) {
    sub_40 = sub_23;
  } else {
    sub_40 = v_5150;
  };
  if (instanciador_ck_13_1) {
    v_5151 = false;
  } else {
    v_5151 = sub_40;
  };
  if (instanciador_c3_lamp) {
    v_5152 = sub_40;
  } else {
    v_5152 = v_5151;
  };
  if (instanciador_l3) {
    sub_39 = sub_40;
  } else {
    sub_39 = v_5152;
  };
  if (instanciador_ck_11_1) {
    v_5153 = false;
  } else {
    v_5153 = sub_39;
  };
  if (instanciador_c2_lamp) {
    v_5154 = sub_39;
  } else {
    v_5154 = v_5153;
  };
  if (instanciador_l2) {
    sub_38 = sub_39;
  } else {
    sub_38 = v_5154;
  };
  if (instanciador_ck_9_1) {
    v_5155 = false;
  } else {
    v_5155 = sub_38;
  };
  if (instanciador_c1_lamp) {
    v_5156 = sub_38;
  } else {
    v_5156 = v_5155;
  };
  if (instanciador_l1) {
    sub_37 = sub_38;
  } else {
    sub_37 = v_5156;
  };
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_34 = sub_35;
  sub_33 = sub_34;
  if (instanciador_v_341) {
    sub_3 = sub_33;
  } else {
    sub_3 = sub_4;
  };
  sub_2 = sub_3;
  if (instanciador_ck_11_1) {
    v_5142 = sub_11;
  } else {
    v_5142 = false;
  };
  if (instanciador_c2_lamp) {
    v_5143 = v_5142;
  } else {
    v_5143 = sub_11;
  };
  if (instanciador_l2) {
    sub_54 = v_5143;
  } else {
    sub_54 = sub_10;
  };
  if (instanciador_ck_9_1) {
    v_5144 = sub_54;
  } else {
    v_5144 = false;
  };
  if (instanciador_c1_lamp) {
    v_5145 = v_5144;
  } else {
    v_5145 = sub_54;
  };
  if (instanciador_l1) {
    sub_53 = v_5145;
  } else {
    sub_53 = sub_54;
  };
  sub_52 = sub_53;
  sub_51 = sub_52;
  sub_62 = sub_23;
  sub_61 = sub_62;
  sub_60 = sub_61;
  sub_59 = sub_60;
  sub_58 = sub_59;
  sub_57 = sub_58;
  sub_56 = sub_57;
  if (instanciador_neutro_input) {
    v_5146 = sub_56;
  } else {
    v_5146 = sub_8;
  };
  if (instanciador_ck_13_1) {
    v_5136 = sub_13;
  } else {
    v_5136 = false;
  };
  if (instanciador_c3_lamp) {
    v_5137 = v_5136;
  } else {
    v_5137 = sub_13;
  };
  if (instanciador_l3) {
    sub_65 = v_5137;
  } else {
    sub_65 = sub_12;
  };
  if (instanciador_ck_11_1) {
    v_5138 = sub_65;
  } else {
    v_5138 = false;
  };
  if (instanciador_c2_lamp) {
    v_5139 = v_5138;
  } else {
    v_5139 = sub_65;
  };
  if (instanciador_l2) {
    sub_64 = v_5139;
  } else {
    sub_64 = sub_65;
  };
  if (instanciador_ck_9_1) {
    v_5140 = sub_64;
  } else {
    v_5140 = false;
  };
  if (instanciador_c1_lamp) {
    v_5141 = v_5140;
  } else {
    v_5141 = sub_64;
  };
  if (instanciador_l1) {
    sub_63 = v_5141;
  } else {
    sub_63 = sub_64;
  };
  if (instanciador_neutro_input) {
    sub_55 = sub_56;
  } else {
    sub_55 = sub_63;
  };
  if (instanciador_seguranca_input) {
    v_5147 = sub_55;
  } else {
    v_5147 = v_5146;
  };
  if (instanciador_domingol_input) {
    v_5148 = sub_51;
  } else {
    v_5148 = v_5147;
  };
  if (instanciador_domingo_input) {
    sub_50 = sub_34;
  } else {
    sub_50 = v_5148;
  };
  if (instanciador_v_341) {
    v_5149 = sub_33;
  } else {
    v_5149 = sub_50;
  };
  if (instanciador_sexta_input) {
    sub_49 = sub_33;
  } else {
    sub_49 = v_5149;
  };
  if (instanciador_v_339) {
    v_5164 = sub_49;
  } else {
    v_5164 = sub_2;
  };
  if (instanciador_neutro_input) {
    sub_70 = sub_56;
  } else {
    sub_70 = sub_37;
  };
  if (instanciador_seguranca_input) {
    v_5135 = sub_55;
  } else {
    v_5135 = sub_70;
  };
  if (instanciador_domingol_input) {
    sub_69 = sub_51;
  } else {
    sub_69 = v_5135;
  };
  if (instanciador_domingo_input) {
    sub_68 = sub_34;
  } else {
    sub_68 = sub_69;
  };
  if (instanciador_v_341) {
    sub_67 = sub_33;
  } else {
    sub_67 = sub_68;
  };
  sub_66 = sub_67;
  if (instanciador_v_339) {
    v_5165 = sub_49;
  } else {
    v_5165 = sub_66;
  };
  if (instanciador_ebd_input) {
    sub_1 = v_5164;
  } else {
    sub_1 = v_5165;
  };
  if (instanciador_seguranca_input) {
    v_5131 = sub_63;
  } else {
    v_5131 = sub_56;
  };
  if (instanciador_domingol_input) {
    v_5132 = sub_51;
    v_5130 = sub_51;
  } else {
    v_5132 = v_5131;
    v_5130 = sub_35;
  };
  if (instanciador_domingo_input) {
    v_5133 = v_5130;
  } else {
    v_5133 = v_5132;
  };
  if (instanciador_domingol_input) {
    v_5129 = sub_51;
    v_5128 = sub_51;
  } else {
    v_5129 = sub_55;
    v_5128 = sub_70;
  };
  if (instanciador_domingo_input) {
    sub_72 = v_5128;
  } else {
    sub_72 = v_5129;
  };
  if (instanciador_v_341) {
    v_5134 = v_5133;
  } else {
    v_5134 = sub_72;
  };
  if (instanciador_sexta_input) {
    sub_71 = sub_33;
  } else {
    sub_71 = v_5134;
  };
  if (instanciador_neutro_input) {
    v = sub_56;
  } else {
    v = sub_53;
  };
  if (instanciador_seguranca_input) {
    sub_74 = sub_55;
  } else {
    sub_74 = v;
  };
  if (instanciador_domingo_input) {
    sub_73 = sub_34;
  } else {
    sub_73 = sub_74;
  };
  if (instanciador_v_341) {
    v_5166 = sub_69;
  } else {
    v_5166 = sub_73;
  };
  if (instanciador_sexta_input) {
    v_5167 = sub_33;
  } else {
    v_5167 = v_5166;
  };
  if (instanciador_v_339) {
    v_5168 = v_5167;
  } else {
    v_5168 = sub_71;
  };
  if (instanciador_ebd_input) {
    v_5169 = sub_4;
  } else {
    v_5169 = v_5168;
  };
  if (instanciador_v_340) {
    sub_0 = v_5169;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c4_lamp = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c3_lamp_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_c2_lamp,
  int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c3_lamp_out* _out) {
  
  int v_5197;
  int v_5196;
  int v_5195;
  int v_5194;
  int v_5193;
  int v_5192;
  int v_5191;
  int v_5190;
  int v_5189;
  int v_5188;
  int v_5187;
  int v_5186;
  int v_5185;
  int v_5184;
  int v_5183;
  int v_5182;
  int v_5181;
  int v_5180;
  int v_5179;
  int v_5178;
  int v_5177;
  int v_5176;
  int v_5175;
  int v_5174;
  int v_5173;
  int v_5172;
  int v_5171;
  int v_5170;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  int sub_60;
  int sub_61;
  int sub_62;
  int sub_63;
  sub_21 = p_instanciador_c3_lamp;
  sub_20 = sub_21;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_30 = true;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  if (instanciador_ck_13_1) {
    v_5187 = sub_22;
  } else {
    v_5187 = sub_11;
  };
  if (instanciador_l3) {
    sub_10 = sub_11;
  } else {
    sub_10 = v_5187;
  };
  if (instanciador_ck_11_1) {
    v_5188 = false;
  } else {
    v_5188 = sub_10;
  };
  if (instanciador_c2_lamp) {
    v_5189 = sub_10;
  } else {
    v_5189 = v_5188;
  };
  sub_9 = sub_10;
  if (instanciador_l2) {
    sub_8 = sub_9;
  } else {
    sub_8 = v_5189;
  };
  if (instanciador_ck_9_1) {
    v_5190 = false;
  } else {
    v_5190 = sub_8;
  };
  if (instanciador_c1_lamp) {
    v_5191 = sub_8;
  } else {
    v_5191 = v_5190;
  };
  if (instanciador_l1) {
    sub_7 = sub_8;
  } else {
    sub_7 = v_5191;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  if (instanciador_ck_11_1) {
    v_5182 = sub_10;
  } else {
    v_5182 = false;
  };
  if (instanciador_c2_lamp) {
    v_5183 = v_5182;
  } else {
    v_5183 = sub_10;
  };
  if (instanciador_l2) {
    sub_38 = v_5183;
  } else {
    sub_38 = sub_9;
  };
  if (instanciador_ck_9_1) {
    v_5184 = sub_38;
  } else {
    v_5184 = false;
  };
  if (instanciador_c1_lamp) {
    v_5185 = v_5184;
  } else {
    v_5185 = sub_38;
  };
  if (instanciador_l1) {
    sub_37 = v_5185;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_44 = sub_11;
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_57 = false;
  sub_56 = sub_57;
  sub_55 = sub_56;
  sub_54 = sub_55;
  sub_53 = sub_54;
  sub_52 = sub_53;
  sub_51 = sub_52;
  sub_50 = sub_51;
  sub_49 = sub_50;
  sub_48 = sub_49;
  if (instanciador_ck_13_1) {
    v_5177 = sub_11;
  } else {
    v_5177 = sub_48;
  };
  if (instanciador_l3) {
    sub_47 = v_5177;
  } else {
    sub_47 = sub_11;
  };
  if (instanciador_ck_11_1) {
    v_5178 = sub_47;
  } else {
    v_5178 = false;
  };
  if (instanciador_c2_lamp) {
    v_5179 = v_5178;
  } else {
    v_5179 = sub_47;
  };
  if (instanciador_l2) {
    sub_46 = v_5179;
  } else {
    sub_46 = sub_47;
  };
  if (instanciador_ck_9_1) {
    v_5180 = sub_46;
  } else {
    v_5180 = false;
  };
  if (instanciador_c1_lamp) {
    v_5181 = v_5180;
  } else {
    v_5181 = sub_46;
  };
  if (instanciador_l1) {
    sub_45 = v_5181;
  } else {
    sub_45 = sub_46;
  };
  if (instanciador_neutro_input) {
    sub_39 = sub_40;
    sub_58 = sub_40;
  } else {
    sub_39 = sub_45;
    sub_58 = sub_7;
  };
  if (instanciador_seguranca_input) {
    v_5186 = sub_39;
  } else {
    v_5186 = sub_58;
  };
  if (instanciador_domingol_input) {
    sub_34 = sub_35;
  } else {
    sub_34 = v_5186;
  };
  if (instanciador_domingo_input) {
    sub_33 = sub_4;
  } else {
    sub_33 = sub_34;
  };
  if (instanciador_v_341) {
    sub_32 = sub_3;
  } else {
    sub_32 = sub_33;
  };
  if (instanciador_sexta_input) {
    sub_31 = sub_3;
  } else {
    sub_31 = sub_32;
  };
  if (instanciador_v_339) {
    v_5192 = sub_31;
  } else {
    v_5192 = sub_2;
  };
  sub_59 = sub_32;
  if (instanciador_v_339) {
    v_5193 = sub_31;
  } else {
    v_5193 = sub_59;
  };
  if (instanciador_ebd_input) {
    sub_1 = v_5192;
  } else {
    sub_1 = v_5193;
  };
  if (instanciador_seguranca_input) {
    v_5173 = sub_45;
  } else {
    v_5173 = sub_40;
  };
  if (instanciador_domingol_input) {
    v_5174 = sub_35;
    v_5172 = sub_35;
  } else {
    v_5174 = v_5173;
    v_5172 = sub_5;
  };
  if (instanciador_domingo_input) {
    v_5175 = v_5172;
  } else {
    v_5175 = v_5174;
  };
  if (instanciador_domingol_input) {
    v_5171 = sub_35;
    v_5170 = sub_35;
  } else {
    v_5171 = sub_39;
    v_5170 = sub_58;
  };
  if (instanciador_domingo_input) {
    sub_61 = v_5170;
  } else {
    sub_61 = v_5171;
  };
  if (instanciador_v_341) {
    v_5176 = v_5175;
  } else {
    v_5176 = sub_61;
  };
  if (instanciador_sexta_input) {
    sub_60 = sub_3;
  } else {
    sub_60 = v_5176;
  };
  if (instanciador_neutro_input) {
    v = sub_40;
  } else {
    v = sub_37;
  };
  if (instanciador_seguranca_input) {
    sub_63 = sub_39;
  } else {
    sub_63 = v;
  };
  if (instanciador_domingo_input) {
    sub_62 = sub_4;
  } else {
    sub_62 = sub_63;
  };
  if (instanciador_v_341) {
    v_5194 = sub_34;
  } else {
    v_5194 = sub_62;
  };
  if (instanciador_sexta_input) {
    v_5195 = sub_3;
  } else {
    v_5195 = v_5194;
  };
  if (instanciador_v_339) {
    v_5196 = v_5195;
  } else {
    v_5196 = sub_60;
  };
  if (instanciador_ebd_input) {
    v_5197 = sub_2;
  } else {
    v_5197 = v_5196;
  };
  if (instanciador_v_340) {
    sub_0 = v_5197;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c3_lamp = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c2_lamp_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp, int instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c2_lamp_out* _out) {
  
  int v_5216;
  int v_5215;
  int v_5214;
  int v_5213;
  int v_5212;
  int v_5211;
  int v_5210;
  int v_5209;
  int v_5208;
  int v_5207;
  int v_5206;
  int v_5205;
  int v_5204;
  int v_5203;
  int v_5202;
  int v_5201;
  int v_5200;
  int v_5199;
  int v_5198;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  int sub_59;
  sub_20 = p_instanciador_c2_lamp;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_30 = true;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (instanciador_ck_11_1) {
    v_5208 = sub_21;
  } else {
    v_5208 = sub_9;
  };
  if (instanciador_l2) {
    sub_8 = sub_9;
  } else {
    sub_8 = v_5208;
  };
  if (instanciador_ck_9_1) {
    v_5209 = false;
  } else {
    v_5209 = sub_8;
  };
  if (instanciador_c1_lamp) {
    v_5210 = sub_8;
  } else {
    v_5210 = v_5209;
  };
  if (instanciador_l1) {
    sub_7 = sub_8;
  } else {
    sub_7 = v_5210;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_49 = false;
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (instanciador_ck_11_1) {
    v_5204 = sub_9;
  } else {
    v_5204 = sub_39;
  };
  if (instanciador_l2) {
    sub_38 = v_5204;
  } else {
    sub_38 = sub_9;
  };
  if (instanciador_ck_9_1) {
    v_5205 = sub_38;
  } else {
    v_5205 = false;
  };
  if (instanciador_c1_lamp) {
    v_5206 = v_5205;
  } else {
    v_5206 = sub_38;
  };
  if (instanciador_l1) {
    sub_37 = v_5206;
  } else {
    sub_37 = sub_38;
  };
  sub_36 = sub_37;
  sub_35 = sub_36;
  sub_53 = sub_9;
  sub_52 = sub_53;
  sub_51 = sub_52;
  if (instanciador_neutro_input) {
    sub_50 = sub_51;
    sub_54 = sub_51;
  } else {
    sub_50 = sub_37;
    sub_54 = sub_7;
  };
  if (instanciador_seguranca_input) {
    v_5207 = sub_50;
  } else {
    v_5207 = sub_54;
  };
  if (instanciador_domingol_input) {
    sub_34 = sub_35;
  } else {
    sub_34 = v_5207;
  };
  if (instanciador_domingo_input) {
    sub_33 = sub_4;
  } else {
    sub_33 = sub_34;
  };
  if (instanciador_v_341) {
    sub_32 = sub_3;
  } else {
    sub_32 = sub_33;
  };
  if (instanciador_sexta_input) {
    sub_31 = sub_3;
  } else {
    sub_31 = sub_32;
  };
  if (instanciador_v_339) {
    v_5211 = sub_31;
  } else {
    v_5211 = sub_2;
  };
  sub_55 = sub_32;
  if (instanciador_v_339) {
    v_5212 = sub_31;
  } else {
    v_5212 = sub_55;
  };
  if (instanciador_ebd_input) {
    sub_1 = v_5211;
  } else {
    sub_1 = v_5212;
  };
  if (instanciador_seguranca_input) {
    v_5200 = sub_36;
  } else {
    v_5200 = sub_51;
  };
  if (instanciador_domingol_input) {
    v_5201 = sub_35;
    v_5199 = sub_35;
  } else {
    v_5201 = v_5200;
    v_5199 = sub_5;
  };
  if (instanciador_domingo_input) {
    v_5202 = v_5199;
  } else {
    v_5202 = v_5201;
  };
  if (instanciador_domingol_input) {
    v = sub_35;
  } else {
    v = sub_54;
  };
  sub_58 = sub_50;
  if (instanciador_domingol_input) {
    v_5198 = sub_35;
  } else {
    v_5198 = sub_58;
  };
  if (instanciador_domingo_input) {
    sub_57 = v;
  } else {
    sub_57 = v_5198;
  };
  if (instanciador_v_341) {
    v_5203 = v_5202;
  } else {
    v_5203 = sub_57;
  };
  if (instanciador_sexta_input) {
    sub_56 = sub_3;
  } else {
    sub_56 = v_5203;
  };
  if (instanciador_domingo_input) {
    sub_59 = sub_4;
  } else {
    sub_59 = sub_58;
  };
  if (instanciador_v_341) {
    v_5213 = sub_34;
  } else {
    v_5213 = sub_59;
  };
  if (instanciador_sexta_input) {
    v_5214 = sub_3;
  } else {
    v_5214 = v_5213;
  };
  if (instanciador_v_339) {
    v_5215 = v_5214;
  } else {
    v_5215 = sub_56;
  };
  if (instanciador_ebd_input) {
    v_5216 = sub_2;
  } else {
    v_5216 = v_5215;
  };
  if (instanciador_v_340) {
    sub_0 = v_5216;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c2_lamp = sub_0;;
}

void Instanciador_controller__instanciador_controller_instanciador_c1_lamp_step(
  int instanciador_sexta_input, int instanciador_ebd_input,
  int instanciador_domingo_input, int instanciador_domingol_input,
  int instanciador_neutro_input, int instanciador_seguranca_input,
  int instanciador_l1, int instanciador_l2, int instanciador_l3,
  int instanciador_l4, int instanciador_lx, int instanciador_lv,
  int instanciador_inpMl, int instanciador_inpMp, int instanciador_inpSp,
  int instanciador_inpSl, int instanciador_inpProj, int instanciador_inpGela,
  int instanciador_inpAlarm, int instanciador_v_341, int instanciador_v_340,
  int instanciador_v_339, int instanciador_pnr_13, int instanciador_ck_9_1,
  int instanciador_pnr_12, int instanciador_ck_11_1, int instanciador_pnr_11,
  int instanciador_ck_13_1, int instanciador_pnr_10,
  int instanciador_ck_15_1, int instanciador_pnr_9, int instanciador_ck_17_1,
  int instanciador_pnr_8, int instanciador_ck_19_1, int instanciador_pnr_7,
  int instanciador_ck_21_1, int instanciador_pnr_6, int instanciador_ck_23_1,
  int instanciador_pnr_5, int instanciador_ck_25_1, int instanciador_pnr_4,
  int instanciador_ck_27_1, int instanciador_pnr_3, int instanciador_ck_29_1,
  int instanciador_pnr_2, int instanciador_ck_31_1, int instanciador_pnr_1,
  int instanciador_ck_33_1, int instanciador_pnr, int p_instanciador_ca,
  int p_instanciador_c_alarm, int p_instanciador_cg,
  int p_instanciador_c_gela, int p_instanciador_cp,
  int p_instanciador_c_proj, int p_instanciador_cmp,
  int p_instanciador_c_microP, int p_instanciador_cml,
  int p_instanciador_c_microL, int p_instanciador_csl,
  int p_instanciador_c_somL, int p_instanciador_csp,
  int p_instanciador_c_somP, int p_instanciador_c_vent,
  int p_instanciador_cv, int p_instanciador_cx, int p_instanciador_c4,
  int p_instanciador_c3, int p_instanciador_c2, int p_instanciador_c1,
  int p_instanciador_c_lampExt, int p_instanciador_c4_lamp,
  int p_instanciador_c3_lamp, int p_instanciador_c2_lamp,
  int p_instanciador_c1_lamp,
  Instanciador_controller__instanciador_controller_instanciador_c1_lamp_out* _out) {
  
  int v_5231;
  int v_5230;
  int v_5229;
  int v_5228;
  int v_5227;
  int v_5226;
  int v_5225;
  int v_5224;
  int v_5223;
  int v_5222;
  int v_5221;
  int v_5220;
  int v_5219;
  int v_5218;
  int v_5217;
  int v;
  int sub_0;
  int sub_1;
  int sub_2;
  int sub_3;
  int sub_4;
  int sub_5;
  int sub_6;
  int sub_7;
  int sub_8;
  int sub_9;
  int sub_10;
  int sub_11;
  int sub_12;
  int sub_13;
  int sub_14;
  int sub_15;
  int sub_16;
  int sub_17;
  int sub_18;
  int sub_19;
  int sub_20;
  int sub_21;
  int sub_22;
  int sub_23;
  int sub_24;
  int sub_25;
  int sub_26;
  int sub_27;
  int sub_28;
  int sub_29;
  int sub_30;
  int sub_31;
  int sub_32;
  int sub_33;
  int sub_34;
  int sub_35;
  int sub_36;
  int sub_37;
  int sub_38;
  int sub_39;
  int sub_40;
  int sub_41;
  int sub_42;
  int sub_43;
  int sub_44;
  int sub_45;
  int sub_46;
  int sub_47;
  int sub_48;
  int sub_49;
  int sub_50;
  int sub_51;
  int sub_52;
  int sub_53;
  int sub_54;
  int sub_55;
  int sub_56;
  int sub_57;
  int sub_58;
  sub_20 = p_instanciador_c1_lamp;
  sub_19 = sub_20;
  sub_18 = sub_19;
  sub_17 = sub_18;
  sub_16 = sub_17;
  sub_15 = sub_16;
  sub_14 = sub_15;
  sub_13 = sub_14;
  sub_12 = sub_13;
  sub_11 = sub_12;
  sub_10 = sub_11;
  sub_9 = sub_10;
  sub_8 = sub_9;
  sub_31 = true;
  sub_30 = sub_31;
  sub_29 = sub_30;
  sub_28 = sub_29;
  sub_27 = sub_28;
  sub_26 = sub_27;
  sub_25 = sub_26;
  sub_24 = sub_25;
  sub_23 = sub_24;
  sub_22 = sub_23;
  sub_21 = sub_22;
  if (instanciador_ck_9_1) {
    v_5225 = sub_21;
  } else {
    v_5225 = sub_8;
  };
  if (instanciador_l1) {
    sub_7 = sub_8;
  } else {
    sub_7 = v_5225;
  };
  sub_6 = sub_7;
  sub_5 = sub_6;
  sub_4 = sub_5;
  sub_3 = sub_4;
  sub_2 = sub_3;
  sub_50 = false;
  sub_49 = sub_50;
  sub_48 = sub_49;
  sub_47 = sub_48;
  sub_46 = sub_47;
  sub_45 = sub_46;
  sub_44 = sub_45;
  sub_43 = sub_44;
  sub_42 = sub_43;
  sub_41 = sub_42;
  sub_40 = sub_41;
  sub_39 = sub_40;
  if (instanciador_ck_9_1) {
    v_5223 = sub_8;
  } else {
    v_5223 = sub_39;
  };
  if (instanciador_l1) {
    sub_38 = v_5223;
  } else {
    sub_38 = sub_8;
  };
  sub_37 = sub_38;
  sub_36 = sub_37;
  sub_52 = sub_8;
  if (instanciador_neutro_input) {
    sub_51 = sub_52;
    sub_53 = sub_52;
  } else {
    sub_51 = sub_38;
    sub_53 = sub_7;
  };
  if (instanciador_seguranca_input) {
    v_5224 = sub_51;
  } else {
    v_5224 = sub_53;
  };
  if (instanciador_domingol_input) {
    sub_35 = sub_36;
  } else {
    sub_35 = v_5224;
  };
  if (instanciador_domingo_input) {
    sub_34 = sub_4;
  } else {
    sub_34 = sub_35;
  };
  if (instanciador_v_341) {
    sub_33 = sub_3;
  } else {
    sub_33 = sub_34;
  };
  if (instanciador_sexta_input) {
    sub_32 = sub_3;
  } else {
    sub_32 = sub_33;
  };
  if (instanciador_v_339) {
    v_5226 = sub_32;
  } else {
    v_5226 = sub_2;
  };
  sub_54 = sub_33;
  if (instanciador_v_339) {
    v_5227 = sub_32;
  } else {
    v_5227 = sub_54;
  };
  if (instanciador_ebd_input) {
    sub_1 = v_5226;
  } else {
    sub_1 = v_5227;
  };
  if (instanciador_seguranca_input) {
    v_5219 = sub_37;
  } else {
    v_5219 = sub_52;
  };
  if (instanciador_domingol_input) {
    v_5220 = sub_36;
    v_5218 = sub_36;
  } else {
    v_5220 = v_5219;
    v_5218 = sub_5;
  };
  if (instanciador_domingo_input) {
    v_5221 = v_5218;
  } else {
    v_5221 = v_5220;
  };
  if (instanciador_domingol_input) {
    v = sub_36;
  } else {
    v = sub_53;
  };
  sub_57 = sub_51;
  if (instanciador_domingol_input) {
    v_5217 = sub_36;
  } else {
    v_5217 = sub_57;
  };
  if (instanciador_domingo_input) {
    sub_56 = v;
  } else {
    sub_56 = v_5217;
  };
  if (instanciador_v_341) {
    v_5222 = v_5221;
  } else {
    v_5222 = sub_56;
  };
  if (instanciador_sexta_input) {
    sub_55 = sub_3;
  } else {
    sub_55 = v_5222;
  };
  if (instanciador_domingo_input) {
    sub_58 = sub_4;
  } else {
    sub_58 = sub_57;
  };
  if (instanciador_v_341) {
    v_5228 = sub_35;
  } else {
    v_5228 = sub_58;
  };
  if (instanciador_sexta_input) {
    v_5229 = sub_3;
  } else {
    v_5229 = v_5228;
  };
  if (instanciador_v_339) {
    v_5230 = v_5229;
  } else {
    v_5230 = sub_55;
  };
  if (instanciador_ebd_input) {
    v_5231 = sub_2;
  } else {
    v_5231 = v_5230;
  };
  if (instanciador_v_340) {
    sub_0 = v_5231;
  } else {
    sub_0 = sub_1;
  };
  _out->instanciador_c1_lamp = sub_0;;
}

void Instanciador_controller__instanciador_controller_step(int instanciador_sexta_input,
                                                           int instanciador_ebd_input,
                                                           int instanciador_domingo_input,
                                                           int instanciador_domingol_input,
                                                           int instanciador_neutro_input,
                                                           int instanciador_seguranca_input,
                                                           int instanciador_l1,
                                                           int instanciador_l2,
                                                           int instanciador_l3,
                                                           int instanciador_l4,
                                                           int instanciador_lx,
                                                           int instanciador_lv,
                                                           int instanciador_inpMl,
                                                           int instanciador_inpMp,
                                                           int instanciador_inpSp,
                                                           int instanciador_inpSl,
                                                           int instanciador_inpProj,
                                                           int instanciador_inpGela,
                                                           int instanciador_inpAlarm,
                                                           int instanciador_v_341,
                                                           int instanciador_v_340,
                                                           int instanciador_v_339,
                                                           int instanciador_pnr_13,
                                                           int instanciador_ck_9_1,
                                                           int instanciador_pnr_12,
                                                           int instanciador_ck_11_1,
                                                           int instanciador_pnr_11,
                                                           int instanciador_ck_13_1,
                                                           int instanciador_pnr_10,
                                                           int instanciador_ck_15_1,
                                                           int instanciador_pnr_9,
                                                           int instanciador_ck_17_1,
                                                           int instanciador_pnr_8,
                                                           int instanciador_ck_19_1,
                                                           int instanciador_pnr_7,
                                                           int instanciador_ck_21_1,
                                                           int instanciador_pnr_6,
                                                           int instanciador_ck_23_1,
                                                           int instanciador_pnr_5,
                                                           int instanciador_ck_25_1,
                                                           int instanciador_pnr_4,
                                                           int instanciador_ck_27_1,
                                                           int instanciador_pnr_3,
                                                           int instanciador_ck_29_1,
                                                           int instanciador_pnr_2,
                                                           int instanciador_ck_31_1,
                                                           int instanciador_pnr_1,
                                                           int instanciador_ck_33_1,
                                                           int instanciador_pnr,
                                                           int p_instanciador_ca,
                                                           int p_instanciador_c_alarm,
                                                           int p_instanciador_cg,
                                                           int p_instanciador_c_gela,
                                                           int p_instanciador_cp,
                                                           int p_instanciador_c_proj,
                                                           int p_instanciador_cmp,
                                                           int p_instanciador_c_microP,
                                                           int p_instanciador_cml,
                                                           int p_instanciador_c_microL,
                                                           int p_instanciador_csl,
                                                           int p_instanciador_c_somL,
                                                           int p_instanciador_csp,
                                                           int p_instanciador_c_somP,
                                                           int p_instanciador_c_vent,
                                                           int p_instanciador_cv,
                                                           int p_instanciador_cx,
                                                           int p_instanciador_c4,
                                                           int p_instanciador_c3,
                                                           int p_instanciador_c2,
                                                           int p_instanciador_c1,
                                                           int p_instanciador_c_lampExt,
                                                           int p_instanciador_c4_lamp,
                                                           int p_instanciador_c3_lamp,
                                                           int p_instanciador_c2_lamp,
                                                           int p_instanciador_c1_lamp,
                                                           Instanciador_controller__instanciador_controller_out* _out) {
  Instanciador_controller__instanciador_controller_instanciador_c3_out Instanciador_controller__instanciador_controller_instanciador_c3_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c_somP_out Instanciador_controller__instanciador_controller_instanciador_c_somP_out_st;
  Instanciador_controller__instanciador_controller_instanciador_cml_out Instanciador_controller__instanciador_controller_instanciador_cml_out_st;
  Instanciador_controller__instanciador_controller_instanciador_cg_out Instanciador_controller__instanciador_controller_instanciador_cg_out_st;
  Instanciador_controller__instanciador_controller_instanciador_cp_out Instanciador_controller__instanciador_controller_instanciador_cp_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c_gela_out Instanciador_controller__instanciador_controller_instanciador_c_gela_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c4_out Instanciador_controller__instanciador_controller_instanciador_c4_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c2_out Instanciador_controller__instanciador_controller_instanciador_c2_out_st;
  Instanciador_controller__instanciador_controller_instanciador_csl_out Instanciador_controller__instanciador_controller_instanciador_csl_out_st;
  Instanciador_controller__instanciador_controller_instanciador_cmp_out Instanciador_controller__instanciador_controller_instanciador_cmp_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c_vent_out Instanciador_controller__instanciador_controller_instanciador_c_vent_out_st;
  Instanciador_controller__instanciador_controller_instanciador_ca_out Instanciador_controller__instanciador_controller_instanciador_ca_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c3_lamp_out Instanciador_controller__instanciador_controller_instanciador_c3_lamp_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c1_out Instanciador_controller__instanciador_controller_instanciador_c1_out_st;
  Instanciador_controller__instanciador_controller_instanciador_cv_out Instanciador_controller__instanciador_controller_instanciador_cv_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c_microP_out Instanciador_controller__instanciador_controller_instanciador_c_microP_out_st;
  Instanciador_controller__instanciador_controller_instanciador_cx_out Instanciador_controller__instanciador_controller_instanciador_cx_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c1_lamp_out Instanciador_controller__instanciador_controller_instanciador_c1_lamp_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c4_lamp_out Instanciador_controller__instanciador_controller_instanciador_c4_lamp_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c_lampExt_out Instanciador_controller__instanciador_controller_instanciador_c_lampExt_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c_somL_out Instanciador_controller__instanciador_controller_instanciador_c_somL_out_st;
  Instanciador_controller__instanciador_controller_instanciador_csp_out Instanciador_controller__instanciador_controller_instanciador_csp_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c_microL_out Instanciador_controller__instanciador_controller_instanciador_c_microL_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c2_lamp_out Instanciador_controller__instanciador_controller_instanciador_c2_lamp_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c_alarm_out Instanciador_controller__instanciador_controller_instanciador_c_alarm_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c_proj_out Instanciador_controller__instanciador_controller_instanciador_c_proj_out_st;
  Instanciador_controller__instanciador_controller_instanciador_c1_lamp_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_inpMl, instanciador_inpMp,
  instanciador_inpSp, instanciador_inpSl, instanciador_inpProj,
  instanciador_inpGela, instanciador_inpAlarm, instanciador_v_341,
  instanciador_v_340, instanciador_v_339, instanciador_pnr_13,
  instanciador_ck_9_1, instanciador_pnr_12, instanciador_ck_11_1,
  instanciador_pnr_11, instanciador_ck_13_1, instanciador_pnr_10,
  instanciador_ck_15_1, instanciador_pnr_9, instanciador_ck_17_1,
  instanciador_pnr_8, instanciador_ck_19_1, instanciador_pnr_7,
  instanciador_ck_21_1, instanciador_pnr_6, instanciador_ck_23_1,
  instanciador_pnr_5, instanciador_ck_25_1, instanciador_pnr_4,
  instanciador_ck_27_1, instanciador_pnr_3, instanciador_ck_29_1,
  instanciador_pnr_2, instanciador_ck_31_1, instanciador_pnr_1,
  instanciador_ck_33_1, instanciador_pnr, p_instanciador_ca,
  p_instanciador_c_alarm, p_instanciador_cg, p_instanciador_c_gela,
  p_instanciador_cp, p_instanciador_c_proj, p_instanciador_cmp,
  p_instanciador_c_microP, p_instanciador_cml, p_instanciador_c_microL,
  p_instanciador_csl, p_instanciador_c_somL, p_instanciador_csp,
  p_instanciador_c_somP, p_instanciador_c_vent, p_instanciador_cv,
  p_instanciador_cx, p_instanciador_c4, p_instanciador_c3, p_instanciador_c2,
  p_instanciador_c1, p_instanciador_c_lampExt, p_instanciador_c4_lamp,
  p_instanciador_c3_lamp, p_instanciador_c2_lamp, p_instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_c1_lamp_out_st);
  _out->instanciador_c1_lamp = Instanciador_controller__instanciador_controller_instanciador_c1_lamp_out_st.instanciador_c1_lamp;
  Instanciador_controller__instanciador_controller_instanciador_c2_lamp_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_inpMl, instanciador_inpMp,
  instanciador_inpSp, instanciador_inpSl, instanciador_inpProj,
  instanciador_inpGela, instanciador_inpAlarm, instanciador_v_341,
  instanciador_v_340, instanciador_v_339, instanciador_pnr_13,
  instanciador_ck_9_1, instanciador_pnr_12, instanciador_ck_11_1,
  instanciador_pnr_11, instanciador_ck_13_1, instanciador_pnr_10,
  instanciador_ck_15_1, instanciador_pnr_9, instanciador_ck_17_1,
  instanciador_pnr_8, instanciador_ck_19_1, instanciador_pnr_7,
  instanciador_ck_21_1, instanciador_pnr_6, instanciador_ck_23_1,
  instanciador_pnr_5, instanciador_ck_25_1, instanciador_pnr_4,
  instanciador_ck_27_1, instanciador_pnr_3, instanciador_ck_29_1,
  instanciador_pnr_2, instanciador_ck_31_1, instanciador_pnr_1,
  instanciador_ck_33_1, instanciador_pnr, p_instanciador_ca,
  p_instanciador_c_alarm, p_instanciador_cg, p_instanciador_c_gela,
  p_instanciador_cp, p_instanciador_c_proj, p_instanciador_cmp,
  p_instanciador_c_microP, p_instanciador_cml, p_instanciador_c_microL,
  p_instanciador_csl, p_instanciador_c_somL, p_instanciador_csp,
  p_instanciador_c_somP, p_instanciador_c_vent, p_instanciador_cv,
  p_instanciador_cx, p_instanciador_c4, p_instanciador_c3, p_instanciador_c2,
  p_instanciador_c1, p_instanciador_c_lampExt, p_instanciador_c4_lamp,
  p_instanciador_c3_lamp, p_instanciador_c2_lamp, p_instanciador_c1_lamp,
  _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_c2_lamp_out_st);
  _out->instanciador_c2_lamp = Instanciador_controller__instanciador_controller_instanciador_c2_lamp_out_st.instanciador_c2_lamp;
  Instanciador_controller__instanciador_controller_instanciador_c3_lamp_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_inpMl, instanciador_inpMp,
  instanciador_inpSp, instanciador_inpSl, instanciador_inpProj,
  instanciador_inpGela, instanciador_inpAlarm, instanciador_v_341,
  instanciador_v_340, instanciador_v_339, instanciador_pnr_13,
  instanciador_ck_9_1, instanciador_pnr_12, instanciador_ck_11_1,
  instanciador_pnr_11, instanciador_ck_13_1, instanciador_pnr_10,
  instanciador_ck_15_1, instanciador_pnr_9, instanciador_ck_17_1,
  instanciador_pnr_8, instanciador_ck_19_1, instanciador_pnr_7,
  instanciador_ck_21_1, instanciador_pnr_6, instanciador_ck_23_1,
  instanciador_pnr_5, instanciador_ck_25_1, instanciador_pnr_4,
  instanciador_ck_27_1, instanciador_pnr_3, instanciador_ck_29_1,
  instanciador_pnr_2, instanciador_ck_31_1, instanciador_pnr_1,
  instanciador_ck_33_1, instanciador_pnr, p_instanciador_ca,
  p_instanciador_c_alarm, p_instanciador_cg, p_instanciador_c_gela,
  p_instanciador_cp, p_instanciador_c_proj, p_instanciador_cmp,
  p_instanciador_c_microP, p_instanciador_cml, p_instanciador_c_microL,
  p_instanciador_csl, p_instanciador_c_somL, p_instanciador_csp,
  p_instanciador_c_somP, p_instanciador_c_vent, p_instanciador_cv,
  p_instanciador_cx, p_instanciador_c4, p_instanciador_c3, p_instanciador_c2,
  p_instanciador_c1, p_instanciador_c_lampExt, p_instanciador_c4_lamp,
  p_instanciador_c3_lamp, p_instanciador_c2_lamp, p_instanciador_c1_lamp,
  _out->instanciador_c2_lamp, _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_c3_lamp_out_st);
  _out->instanciador_c3_lamp = Instanciador_controller__instanciador_controller_instanciador_c3_lamp_out_st.instanciador_c3_lamp;
  Instanciador_controller__instanciador_controller_instanciador_c4_lamp_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_inpMl, instanciador_inpMp,
  instanciador_inpSp, instanciador_inpSl, instanciador_inpProj,
  instanciador_inpGela, instanciador_inpAlarm, instanciador_v_341,
  instanciador_v_340, instanciador_v_339, instanciador_pnr_13,
  instanciador_ck_9_1, instanciador_pnr_12, instanciador_ck_11_1,
  instanciador_pnr_11, instanciador_ck_13_1, instanciador_pnr_10,
  instanciador_ck_15_1, instanciador_pnr_9, instanciador_ck_17_1,
  instanciador_pnr_8, instanciador_ck_19_1, instanciador_pnr_7,
  instanciador_ck_21_1, instanciador_pnr_6, instanciador_ck_23_1,
  instanciador_pnr_5, instanciador_ck_25_1, instanciador_pnr_4,
  instanciador_ck_27_1, instanciador_pnr_3, instanciador_ck_29_1,
  instanciador_pnr_2, instanciador_ck_31_1, instanciador_pnr_1,
  instanciador_ck_33_1, instanciador_pnr, p_instanciador_ca,
  p_instanciador_c_alarm, p_instanciador_cg, p_instanciador_c_gela,
  p_instanciador_cp, p_instanciador_c_proj, p_instanciador_cmp,
  p_instanciador_c_microP, p_instanciador_cml, p_instanciador_c_microL,
  p_instanciador_csl, p_instanciador_c_somL, p_instanciador_csp,
  p_instanciador_c_somP, p_instanciador_c_vent, p_instanciador_cv,
  p_instanciador_cx, p_instanciador_c4, p_instanciador_c3, p_instanciador_c2,
  p_instanciador_c1, p_instanciador_c_lampExt, p_instanciador_c4_lamp,
  p_instanciador_c3_lamp, p_instanciador_c2_lamp, p_instanciador_c1_lamp,
  _out->instanciador_c3_lamp, _out->instanciador_c2_lamp,
  _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_c4_lamp_out_st);
  _out->instanciador_c4_lamp = Instanciador_controller__instanciador_controller_instanciador_c4_lamp_out_st.instanciador_c4_lamp;
  Instanciador_controller__instanciador_controller_instanciador_c_lampExt_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_inpMl, instanciador_inpMp,
  instanciador_inpSp, instanciador_inpSl, instanciador_inpProj,
  instanciador_inpGela, instanciador_inpAlarm, instanciador_v_341,
  instanciador_v_340, instanciador_v_339, instanciador_pnr_13,
  instanciador_ck_9_1, instanciador_pnr_12, instanciador_ck_11_1,
  instanciador_pnr_11, instanciador_ck_13_1, instanciador_pnr_10,
  instanciador_ck_15_1, instanciador_pnr_9, instanciador_ck_17_1,
  instanciador_pnr_8, instanciador_ck_19_1, instanciador_pnr_7,
  instanciador_ck_21_1, instanciador_pnr_6, instanciador_ck_23_1,
  instanciador_pnr_5, instanciador_ck_25_1, instanciador_pnr_4,
  instanciador_ck_27_1, instanciador_pnr_3, instanciador_ck_29_1,
  instanciador_pnr_2, instanciador_ck_31_1, instanciador_pnr_1,
  instanciador_ck_33_1, instanciador_pnr, p_instanciador_ca,
  p_instanciador_c_alarm, p_instanciador_cg, p_instanciador_c_gela,
  p_instanciador_cp, p_instanciador_c_proj, p_instanciador_cmp,
  p_instanciador_c_microP, p_instanciador_cml, p_instanciador_c_microL,
  p_instanciador_csl, p_instanciador_c_somL, p_instanciador_csp,
  p_instanciador_c_somP, p_instanciador_c_vent, p_instanciador_cv,
  p_instanciador_cx, p_instanciador_c4, p_instanciador_c3, p_instanciador_c2,
  p_instanciador_c1, p_instanciador_c_lampExt, p_instanciador_c4_lamp,
  p_instanciador_c3_lamp, p_instanciador_c2_lamp, p_instanciador_c1_lamp,
  _out->instanciador_c4_lamp, _out->instanciador_c3_lamp,
  _out->instanciador_c2_lamp, _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_c_lampExt_out_st);
  _out->instanciador_c_lampExt = Instanciador_controller__instanciador_controller_instanciador_c_lampExt_out_st.instanciador_c_lampExt;
  Instanciador_controller__instanciador_controller_instanciador_c1_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_inpMl, instanciador_inpMp,
  instanciador_inpSp, instanciador_inpSl, instanciador_inpProj,
  instanciador_inpGela, instanciador_inpAlarm, instanciador_v_341,
  instanciador_v_340, instanciador_v_339, instanciador_pnr_13,
  instanciador_ck_9_1, instanciador_pnr_12, instanciador_ck_11_1,
  instanciador_pnr_11, instanciador_ck_13_1, instanciador_pnr_10,
  instanciador_ck_15_1, instanciador_pnr_9, instanciador_ck_17_1,
  instanciador_pnr_8, instanciador_ck_19_1, instanciador_pnr_7,
  instanciador_ck_21_1, instanciador_pnr_6, instanciador_ck_23_1,
  instanciador_pnr_5, instanciador_ck_25_1, instanciador_pnr_4,
  instanciador_ck_27_1, instanciador_pnr_3, instanciador_ck_29_1,
  instanciador_pnr_2, instanciador_ck_31_1, instanciador_pnr_1,
  instanciador_ck_33_1, instanciador_pnr, p_instanciador_ca,
  p_instanciador_c_alarm, p_instanciador_cg, p_instanciador_c_gela,
  p_instanciador_cp, p_instanciador_c_proj, p_instanciador_cmp,
  p_instanciador_c_microP, p_instanciador_cml, p_instanciador_c_microL,
  p_instanciador_csl, p_instanciador_c_somL, p_instanciador_csp,
  p_instanciador_c_somP, p_instanciador_c_vent, p_instanciador_cv,
  p_instanciador_cx, p_instanciador_c4, p_instanciador_c3, p_instanciador_c2,
  p_instanciador_c1, p_instanciador_c_lampExt, p_instanciador_c4_lamp,
  p_instanciador_c3_lamp, p_instanciador_c2_lamp, p_instanciador_c1_lamp,
  _out->instanciador_c_lampExt, _out->instanciador_c4_lamp,
  _out->instanciador_c3_lamp, _out->instanciador_c2_lamp,
  _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_c1_out_st);
  _out->instanciador_c1 = Instanciador_controller__instanciador_controller_instanciador_c1_out_st.instanciador_c1;
  Instanciador_controller__instanciador_controller_instanciador_c2_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_inpMl, instanciador_inpMp,
  instanciador_inpSp, instanciador_inpSl, instanciador_inpProj,
  instanciador_inpGela, instanciador_inpAlarm, instanciador_v_341,
  instanciador_v_340, instanciador_v_339, instanciador_pnr_13,
  instanciador_ck_9_1, instanciador_pnr_12, instanciador_ck_11_1,
  instanciador_pnr_11, instanciador_ck_13_1, instanciador_pnr_10,
  instanciador_ck_15_1, instanciador_pnr_9, instanciador_ck_17_1,
  instanciador_pnr_8, instanciador_ck_19_1, instanciador_pnr_7,
  instanciador_ck_21_1, instanciador_pnr_6, instanciador_ck_23_1,
  instanciador_pnr_5, instanciador_ck_25_1, instanciador_pnr_4,
  instanciador_ck_27_1, instanciador_pnr_3, instanciador_ck_29_1,
  instanciador_pnr_2, instanciador_ck_31_1, instanciador_pnr_1,
  instanciador_ck_33_1, instanciador_pnr, p_instanciador_ca,
  p_instanciador_c_alarm, p_instanciador_cg, p_instanciador_c_gela,
  p_instanciador_cp, p_instanciador_c_proj, p_instanciador_cmp,
  p_instanciador_c_microP, p_instanciador_cml, p_instanciador_c_microL,
  p_instanciador_csl, p_instanciador_c_somL, p_instanciador_csp,
  p_instanciador_c_somP, p_instanciador_c_vent, p_instanciador_cv,
  p_instanciador_cx, p_instanciador_c4, p_instanciador_c3, p_instanciador_c2,
  p_instanciador_c1, p_instanciador_c_lampExt, p_instanciador_c4_lamp,
  p_instanciador_c3_lamp, p_instanciador_c2_lamp, p_instanciador_c1_lamp,
  _out->instanciador_c1, _out->instanciador_c_lampExt,
  _out->instanciador_c4_lamp, _out->instanciador_c3_lamp,
  _out->instanciador_c2_lamp, _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_c2_out_st);
  _out->instanciador_c2 = Instanciador_controller__instanciador_controller_instanciador_c2_out_st.instanciador_c2;
  Instanciador_controller__instanciador_controller_instanciador_c3_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_inpMl, instanciador_inpMp,
  instanciador_inpSp, instanciador_inpSl, instanciador_inpProj,
  instanciador_inpGela, instanciador_inpAlarm, instanciador_v_341,
  instanciador_v_340, instanciador_v_339, instanciador_pnr_13,
  instanciador_ck_9_1, instanciador_pnr_12, instanciador_ck_11_1,
  instanciador_pnr_11, instanciador_ck_13_1, instanciador_pnr_10,
  instanciador_ck_15_1, instanciador_pnr_9, instanciador_ck_17_1,
  instanciador_pnr_8, instanciador_ck_19_1, instanciador_pnr_7,
  instanciador_ck_21_1, instanciador_pnr_6, instanciador_ck_23_1,
  instanciador_pnr_5, instanciador_ck_25_1, instanciador_pnr_4,
  instanciador_ck_27_1, instanciador_pnr_3, instanciador_ck_29_1,
  instanciador_pnr_2, instanciador_ck_31_1, instanciador_pnr_1,
  instanciador_ck_33_1, instanciador_pnr, p_instanciador_ca,
  p_instanciador_c_alarm, p_instanciador_cg, p_instanciador_c_gela,
  p_instanciador_cp, p_instanciador_c_proj, p_instanciador_cmp,
  p_instanciador_c_microP, p_instanciador_cml, p_instanciador_c_microL,
  p_instanciador_csl, p_instanciador_c_somL, p_instanciador_csp,
  p_instanciador_c_somP, p_instanciador_c_vent, p_instanciador_cv,
  p_instanciador_cx, p_instanciador_c4, p_instanciador_c3, p_instanciador_c2,
  p_instanciador_c1, p_instanciador_c_lampExt, p_instanciador_c4_lamp,
  p_instanciador_c3_lamp, p_instanciador_c2_lamp, p_instanciador_c1_lamp,
  _out->instanciador_c2, _out->instanciador_c1, _out->instanciador_c_lampExt,
  _out->instanciador_c4_lamp, _out->instanciador_c3_lamp,
  _out->instanciador_c2_lamp, _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_c3_out_st);
  _out->instanciador_c3 = Instanciador_controller__instanciador_controller_instanciador_c3_out_st.instanciador_c3;
  Instanciador_controller__instanciador_controller_instanciador_c4_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_inpMl, instanciador_inpMp,
  instanciador_inpSp, instanciador_inpSl, instanciador_inpProj,
  instanciador_inpGela, instanciador_inpAlarm, instanciador_v_341,
  instanciador_v_340, instanciador_v_339, instanciador_pnr_13,
  instanciador_ck_9_1, instanciador_pnr_12, instanciador_ck_11_1,
  instanciador_pnr_11, instanciador_ck_13_1, instanciador_pnr_10,
  instanciador_ck_15_1, instanciador_pnr_9, instanciador_ck_17_1,
  instanciador_pnr_8, instanciador_ck_19_1, instanciador_pnr_7,
  instanciador_ck_21_1, instanciador_pnr_6, instanciador_ck_23_1,
  instanciador_pnr_5, instanciador_ck_25_1, instanciador_pnr_4,
  instanciador_ck_27_1, instanciador_pnr_3, instanciador_ck_29_1,
  instanciador_pnr_2, instanciador_ck_31_1, instanciador_pnr_1,
  instanciador_ck_33_1, instanciador_pnr, p_instanciador_ca,
  p_instanciador_c_alarm, p_instanciador_cg, p_instanciador_c_gela,
  p_instanciador_cp, p_instanciador_c_proj, p_instanciador_cmp,
  p_instanciador_c_microP, p_instanciador_cml, p_instanciador_c_microL,
  p_instanciador_csl, p_instanciador_c_somL, p_instanciador_csp,
  p_instanciador_c_somP, p_instanciador_c_vent, p_instanciador_cv,
  p_instanciador_cx, p_instanciador_c4, p_instanciador_c3, p_instanciador_c2,
  p_instanciador_c1, p_instanciador_c_lampExt, p_instanciador_c4_lamp,
  p_instanciador_c3_lamp, p_instanciador_c2_lamp, p_instanciador_c1_lamp,
  _out->instanciador_c3, _out->instanciador_c2, _out->instanciador_c1,
  _out->instanciador_c_lampExt, _out->instanciador_c4_lamp,
  _out->instanciador_c3_lamp, _out->instanciador_c2_lamp,
  _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_c4_out_st);
  _out->instanciador_c4 = Instanciador_controller__instanciador_controller_instanciador_c4_out_st.instanciador_c4;
  Instanciador_controller__instanciador_controller_instanciador_cx_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_inpMl, instanciador_inpMp,
  instanciador_inpSp, instanciador_inpSl, instanciador_inpProj,
  instanciador_inpGela, instanciador_inpAlarm, instanciador_v_341,
  instanciador_v_340, instanciador_v_339, instanciador_pnr_13,
  instanciador_ck_9_1, instanciador_pnr_12, instanciador_ck_11_1,
  instanciador_pnr_11, instanciador_ck_13_1, instanciador_pnr_10,
  instanciador_ck_15_1, instanciador_pnr_9, instanciador_ck_17_1,
  instanciador_pnr_8, instanciador_ck_19_1, instanciador_pnr_7,
  instanciador_ck_21_1, instanciador_pnr_6, instanciador_ck_23_1,
  instanciador_pnr_5, instanciador_ck_25_1, instanciador_pnr_4,
  instanciador_ck_27_1, instanciador_pnr_3, instanciador_ck_29_1,
  instanciador_pnr_2, instanciador_ck_31_1, instanciador_pnr_1,
  instanciador_ck_33_1, instanciador_pnr, p_instanciador_ca,
  p_instanciador_c_alarm, p_instanciador_cg, p_instanciador_c_gela,
  p_instanciador_cp, p_instanciador_c_proj, p_instanciador_cmp,
  p_instanciador_c_microP, p_instanciador_cml, p_instanciador_c_microL,
  p_instanciador_csl, p_instanciador_c_somL, p_instanciador_csp,
  p_instanciador_c_somP, p_instanciador_c_vent, p_instanciador_cv,
  p_instanciador_cx, p_instanciador_c4, p_instanciador_c3, p_instanciador_c2,
  p_instanciador_c1, p_instanciador_c_lampExt, p_instanciador_c4_lamp,
  p_instanciador_c3_lamp, p_instanciador_c2_lamp, p_instanciador_c1_lamp,
  _out->instanciador_c4, _out->instanciador_c3, _out->instanciador_c2,
  _out->instanciador_c1, _out->instanciador_c_lampExt,
  _out->instanciador_c4_lamp, _out->instanciador_c3_lamp,
  _out->instanciador_c2_lamp, _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_cx_out_st);
  _out->instanciador_cx = Instanciador_controller__instanciador_controller_instanciador_cx_out_st.instanciador_cx;
  Instanciador_controller__instanciador_controller_instanciador_cv_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_inpMl, instanciador_inpMp,
  instanciador_inpSp, instanciador_inpSl, instanciador_inpProj,
  instanciador_inpGela, instanciador_inpAlarm, instanciador_v_341,
  instanciador_v_340, instanciador_v_339, instanciador_pnr_13,
  instanciador_ck_9_1, instanciador_pnr_12, instanciador_ck_11_1,
  instanciador_pnr_11, instanciador_ck_13_1, instanciador_pnr_10,
  instanciador_ck_15_1, instanciador_pnr_9, instanciador_ck_17_1,
  instanciador_pnr_8, instanciador_ck_19_1, instanciador_pnr_7,
  instanciador_ck_21_1, instanciador_pnr_6, instanciador_ck_23_1,
  instanciador_pnr_5, instanciador_ck_25_1, instanciador_pnr_4,
  instanciador_ck_27_1, instanciador_pnr_3, instanciador_ck_29_1,
  instanciador_pnr_2, instanciador_ck_31_1, instanciador_pnr_1,
  instanciador_ck_33_1, instanciador_pnr, p_instanciador_ca,
  p_instanciador_c_alarm, p_instanciador_cg, p_instanciador_c_gela,
  p_instanciador_cp, p_instanciador_c_proj, p_instanciador_cmp,
  p_instanciador_c_microP, p_instanciador_cml, p_instanciador_c_microL,
  p_instanciador_csl, p_instanciador_c_somL, p_instanciador_csp,
  p_instanciador_c_somP, p_instanciador_c_vent, p_instanciador_cv,
  p_instanciador_cx, p_instanciador_c4, p_instanciador_c3, p_instanciador_c2,
  p_instanciador_c1, p_instanciador_c_lampExt, p_instanciador_c4_lamp,
  p_instanciador_c3_lamp, p_instanciador_c2_lamp, p_instanciador_c1_lamp,
  _out->instanciador_cx, _out->instanciador_c4, _out->instanciador_c3,
  _out->instanciador_c2, _out->instanciador_c1, _out->instanciador_c_lampExt,
  _out->instanciador_c4_lamp, _out->instanciador_c3_lamp,
  _out->instanciador_c2_lamp, _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_cv_out_st);
  _out->instanciador_cv = Instanciador_controller__instanciador_controller_instanciador_cv_out_st.instanciador_cv;
  Instanciador_controller__instanciador_controller_instanciador_c_vent_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_inpMl, instanciador_inpMp,
  instanciador_inpSp, instanciador_inpSl, instanciador_inpProj,
  instanciador_inpGela, instanciador_inpAlarm, instanciador_v_341,
  instanciador_v_340, instanciador_v_339, instanciador_pnr_13,
  instanciador_ck_9_1, instanciador_pnr_12, instanciador_ck_11_1,
  instanciador_pnr_11, instanciador_ck_13_1, instanciador_pnr_10,
  instanciador_ck_15_1, instanciador_pnr_9, instanciador_ck_17_1,
  instanciador_pnr_8, instanciador_ck_19_1, instanciador_pnr_7,
  instanciador_ck_21_1, instanciador_pnr_6, instanciador_ck_23_1,
  instanciador_pnr_5, instanciador_ck_25_1, instanciador_pnr_4,
  instanciador_ck_27_1, instanciador_pnr_3, instanciador_ck_29_1,
  instanciador_pnr_2, instanciador_ck_31_1, instanciador_pnr_1,
  instanciador_ck_33_1, instanciador_pnr, p_instanciador_ca,
  p_instanciador_c_alarm, p_instanciador_cg, p_instanciador_c_gela,
  p_instanciador_cp, p_instanciador_c_proj, p_instanciador_cmp,
  p_instanciador_c_microP, p_instanciador_cml, p_instanciador_c_microL,
  p_instanciador_csl, p_instanciador_c_somL, p_instanciador_csp,
  p_instanciador_c_somP, p_instanciador_c_vent, p_instanciador_cv,
  p_instanciador_cx, p_instanciador_c4, p_instanciador_c3, p_instanciador_c2,
  p_instanciador_c1, p_instanciador_c_lampExt, p_instanciador_c4_lamp,
  p_instanciador_c3_lamp, p_instanciador_c2_lamp, p_instanciador_c1_lamp,
  _out->instanciador_cv, _out->instanciador_cx, _out->instanciador_c4,
  _out->instanciador_c3, _out->instanciador_c2, _out->instanciador_c1,
  _out->instanciador_c_lampExt, _out->instanciador_c4_lamp,
  _out->instanciador_c3_lamp, _out->instanciador_c2_lamp,
  _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_c_vent_out_st);
  _out->instanciador_c_vent = Instanciador_controller__instanciador_controller_instanciador_c_vent_out_st.instanciador_c_vent;
  Instanciador_controller__instanciador_controller_instanciador_c_somP_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_inpMl, instanciador_inpMp,
  instanciador_inpSp, instanciador_inpSl, instanciador_inpProj,
  instanciador_inpGela, instanciador_inpAlarm, instanciador_v_341,
  instanciador_v_340, instanciador_v_339, instanciador_pnr_13,
  instanciador_ck_9_1, instanciador_pnr_12, instanciador_ck_11_1,
  instanciador_pnr_11, instanciador_ck_13_1, instanciador_pnr_10,
  instanciador_ck_15_1, instanciador_pnr_9, instanciador_ck_17_1,
  instanciador_pnr_8, instanciador_ck_19_1, instanciador_pnr_7,
  instanciador_ck_21_1, instanciador_pnr_6, instanciador_ck_23_1,
  instanciador_pnr_5, instanciador_ck_25_1, instanciador_pnr_4,
  instanciador_ck_27_1, instanciador_pnr_3, instanciador_ck_29_1,
  instanciador_pnr_2, instanciador_ck_31_1, instanciador_pnr_1,
  instanciador_ck_33_1, instanciador_pnr, p_instanciador_ca,
  p_instanciador_c_alarm, p_instanciador_cg, p_instanciador_c_gela,
  p_instanciador_cp, p_instanciador_c_proj, p_instanciador_cmp,
  p_instanciador_c_microP, p_instanciador_cml, p_instanciador_c_microL,
  p_instanciador_csl, p_instanciador_c_somL, p_instanciador_csp,
  p_instanciador_c_somP, p_instanciador_c_vent, p_instanciador_cv,
  p_instanciador_cx, p_instanciador_c4, p_instanciador_c3, p_instanciador_c2,
  p_instanciador_c1, p_instanciador_c_lampExt, p_instanciador_c4_lamp,
  p_instanciador_c3_lamp, p_instanciador_c2_lamp, p_instanciador_c1_lamp,
  _out->instanciador_c_vent, _out->instanciador_cv, _out->instanciador_cx,
  _out->instanciador_c4, _out->instanciador_c3, _out->instanciador_c2,
  _out->instanciador_c1, _out->instanciador_c_lampExt,
  _out->instanciador_c4_lamp, _out->instanciador_c3_lamp,
  _out->instanciador_c2_lamp, _out->instanciador_c1_lamp,
  &Instanciador_controller__instanciador_controller_instanciador_c_somP_out_st);
  _out->instanciador_c_somP = Instanciador_controller__instanciador_controller_instanciador_c_somP_out_st.instanciador_c_somP;
  Instanciador_controller__instanciador_controller_instanciador_csp_step(
  instanciador_sexta_input, instanciador_ebd_input,
  instanciador_domingo_input, instanciador_domingol_input,
  instanciador_neutro_input, instanciador_seguranca_input, instanciador_l1,
  instanciador_l2, instanciador_l3, instanciador_l4, instanciador_lx,
  instanciador_lv, instanciador_inpMl, instanciador_inpMp,
  instanciador_inpSp, instanciador_inpSl, instanciador_inpProj,
  instanciador_inpGela, instanciador_inpAlarm, instanciador_v_341,
  instanciador_v_340, instanciador_v_339, instanciador_pnr_13,
  instanciador_ck_9_1, instanciador_pnr_12, instanciador_ck_11_1,
  instanciador_pnr_11, instanciador_ck_13_1, instanciador_pnr_10,
  instanciador_ck_15_1, instanciador_pnr_9, instanciador_ck_17_1,
  instanciador_pnr_8, instanciador_ck_19_1, instanciador_pnr_7,
  instanciador_ck_21_1, instanciador_pnr_6, instanciador_ck_23_1,
  instanciador_pnr_5, instanciador_ck_25_1, instanciador_pnr_4,
  instanciador_ck_27_1, instanciador_pnr_3, instanciador_ck_29_1,
  instanciador_pnr_2, instanciador_ck_31_1, instanciador_pnr_1,
  instanciador_ck_33_1, instanciador_pnr, p_instanciador_ca,
  p_instanciador_c_alarm, p_instanciador_cg, p_instanciador_c_gela,
  p_instanciador_cp, p_instanciador_c_proj, p_instanciador_cmp,
  p_instanciador_c_microP, p_instanciador_cml, p_instanciador_c_microL,
