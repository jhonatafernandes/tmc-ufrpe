/* --- Generated the 12/10/2019 at 12:21 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s instanciador atividade5.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "atividade5.h"

void Atividade5__managementPolicy_reset(Atividade5__managementPolicy_mem* self) {
  self->pnr = false;
  self->v_224 = false;
  self->v_225 = false;
  self->v_226 = false;
}

void Atividade5__managementPolicy_step(int sexta_input, int ebd_input,
                                       int domingo_input, int domingol_input,
                                       int neutro_input, int seguranca_input,
                                       Atividade5__managementPolicy_out* _out,
                                       Atividade5__managementPolicy_mem* self) {
  
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
  int ns_St_Seguranca_2_0;
  int ns_St_Seguranca_3_0_0;
  int ns_St_Seguranca_3_0_1;
  int ns_St_Seguranca_2_1;
  int ns_St_Seguranca_3_1_0;
  int ns_St_Seguranca_3_1_1;
  int mode_St_Seguranca_2_0;
  int mode_St_Seguranca_3_0_0;
  int mode_St_Seguranca_3_0_1;
  int mode_St_Seguranca_2_1;
  int mode_St_Seguranca_3_1_0;
  int mode_St_Seguranca_3_1_1;
  int ns_St_Neutro_2_0;
  int ns_St_Neutro_3_0_0;
  int ns_St_Neutro_3_0_1;
  int ns_St_Neutro_2_1;
  int ns_St_Neutro_3_1_0;
  int ns_St_Neutro_3_1_1;
  int mode_St_Neutro_2_0;
  int mode_St_Neutro_3_0_0;
  int mode_St_Neutro_3_0_1;
  int mode_St_Neutro_2_1;
  int mode_St_Neutro_3_1_0;
  int mode_St_Neutro_3_1_1;
  int ns_St_DomingoL_2_0;
  int ns_St_DomingoL_3_0_0;
  int ns_St_DomingoL_3_0_1;
  int ns_St_DomingoL_2_1;
  int ns_St_DomingoL_3_1_0;
  int ns_St_DomingoL_3_1_1;
  int mode_St_DomingoL_2_0;
  int mode_St_DomingoL_3_0_0;
  int mode_St_DomingoL_3_0_1;
  int mode_St_DomingoL_2_1;
  int mode_St_DomingoL_3_1_0;
  int mode_St_DomingoL_3_1_1;
  int ns_St_Domingo_2_0;
  int ns_St_Domingo_3_0_0;
  int ns_St_Domingo_3_0_1;
  int ns_St_Domingo_2_1;
  int ns_St_Domingo_3_1_0;
  int ns_St_Domingo_3_1_1;
  int mode_St_Domingo_2_0;
  int mode_St_Domingo_3_0_0;
  int mode_St_Domingo_3_0_1;
  int mode_St_Domingo_2_1;
  int mode_St_Domingo_3_1_0;
  int mode_St_Domingo_3_1_1;
  int ns_St_Ebd_2_0;
  int ns_St_Ebd_3_0_0;
  int ns_St_Ebd_3_0_1;
  int ns_St_Ebd_2_1;
  int ns_St_Ebd_3_1_0;
  int ns_St_Ebd_3_1_1;
  int mode_St_Ebd_2_0;
  int mode_St_Ebd_3_0_0;
  int mode_St_Ebd_3_0_1;
  int mode_St_Ebd_2_1;
  int mode_St_Ebd_3_1_0;
  int mode_St_Ebd_3_1_1;
  int ns_St_Sexta_feira_2_0;
  int ns_St_Sexta_feira_3_0_0;
  int ns_St_Sexta_feira_3_0_1;
  int ns_St_Sexta_feira_2_1;
  int ns_St_Sexta_feira_3_1_0;
  int ns_St_Sexta_feira_3_1_1;
  int mode_St_Sexta_feira_2_0;
  int mode_St_Sexta_feira_3_0_0;
  int mode_St_Sexta_feira_3_0_1;
  int mode_St_Sexta_feira_2_1;
  int mode_St_Sexta_feira_3_1_0;
  int mode_St_Sexta_feira_3_1_1;
  int ck_1_2_0;
  int ck_1_3_0_0;
  int ck_1_3_0_1;
  int ck_1_2_1;
  int ck_1_3_1_0;
  int ck_1_3_1_1;
  int nr_St_Seguranca;
  int ns_St_Seguranca_3;
  int ns_St_Seguranca_2;
  int ns_St_Seguranca_1;
  int mode_St_Seguranca_3;
  int mode_St_Seguranca_2;
  int mode_St_Seguranca_1;
  int nr_St_Neutro;
  int ns_St_Neutro_3;
  int ns_St_Neutro_2;
  int ns_St_Neutro_1;
  int mode_St_Neutro_3;
  int mode_St_Neutro_2;
  int mode_St_Neutro_1;
  int nr_St_DomingoL;
  int ns_St_DomingoL_3;
  int ns_St_DomingoL_2;
  int ns_St_DomingoL_1;
  int mode_St_DomingoL_3;
  int mode_St_DomingoL_2;
  int mode_St_DomingoL_1;
  int nr_St_Domingo;
  int ns_St_Domingo_3;
  int ns_St_Domingo_2;
  int ns_St_Domingo_1;
  int mode_St_Domingo_3;
  int mode_St_Domingo_2;
  int mode_St_Domingo_1;
  int nr_St_Ebd;
  int ns_St_Ebd_3;
  int ns_St_Ebd_2;
  int ns_St_Ebd_1;
  int mode_St_Ebd_3;
  int mode_St_Ebd_2;
  int mode_St_Ebd_1;
  int nr_St_Sexta_feira;
  int ns_St_Sexta_feira_3;
  int ns_St_Sexta_feira_2;
  int ns_St_Sexta_feira_1;
  int mode_St_Sexta_feira_3;
  int mode_St_Sexta_feira_2;
  int mode_St_Sexta_feira_1;
  int ck_1_3;
  int ck_1_2;
  int ck_1_1;
  int v_46_2_0;
  int v_46_3_0_0;
  int v_46_3_0_1;
  int v_46_2_1;
  int v_46_3_1_0;
  int v_46_3_1_1;
  int v_44_2_0;
  int v_44_3_0_0;
  int v_44_3_0_1;
  int v_44_2_1;
  int v_44_3_1_0;
  int v_44_3_1_1;
  int v_42_2_0;
  int v_42_3_0_0;
  int v_42_3_0_1;
  int v_42_2_1;
  int v_42_3_1_0;
  int v_42_3_1_1;
  int v_40_2_0;
  int v_40_3_0_0;
  int v_40_3_0_1;
  int v_40_2_1;
  int v_40_3_1_0;
  int v_40_3_1_1;
  int v_47;
  int v_46_3;
  int v_46_2;
  int v_46_1;
  int v_45;
  int v_44_3;
  int v_44_2;
  int v_44_1;
  int v_43;
  int v_42_3;
  int v_42_2;
  int v_42_1;
  int v_41;
  int v_40_3;
  int v_40_2;
  int v_40_1;
  int v_38_2_0;
  int v_38_3_0_0;
  int v_38_3_0_1;
  int v_38_2_1;
  int v_38_3_1_0;
  int v_38_3_1_1;
  int v_36_2_0;
  int v_36_3_0_0;
  int v_36_3_0_1;
  int v_36_2_1;
  int v_36_3_1_0;
  int v_36_3_1_1;
  int v_34_2_0;
  int v_34_3_0_0;
  int v_34_3_0_1;
  int v_34_2_1;
  int v_34_3_1_0;
  int v_34_3_1_1;
  int v_32_2_0;
  int v_32_3_0_0;
  int v_32_3_0_1;
  int v_32_2_1;
  int v_32_3_1_0;
  int v_32_3_1_1;
  int v_39;
  int v_38_3;
  int v_38_2;
  int v_38_1;
  int v_37;
  int v_36_3;
  int v_36_2;
  int v_36_1;
  int v_35;
  int v_34_3;
  int v_34_2;
  int v_34_1;
  int v_33;
  int v_32_3;
  int v_32_2;
  int v_32_1;
  int v_30_2_0;
  int v_30_3_0_0;
  int v_30_3_0_1;
  int v_30_2_1;
  int v_30_3_1_0;
  int v_30_3_1_1;
  int v_28_2_0;
  int v_28_3_0_0;
  int v_28_3_0_1;
  int v_28_2_1;
  int v_28_3_1_0;
  int v_28_3_1_1;
  int v_26_2_0;
  int v_26_3_0_0;
  int v_26_3_0_1;
  int v_26_2_1;
  int v_26_3_1_0;
  int v_26_3_1_1;
  int v_24_2_0;
  int v_24_3_0_0;
  int v_24_3_0_1;
  int v_24_2_1;
  int v_24_3_1_0;
  int v_24_3_1_1;
  int v_31;
  int v_30_3;
  int v_30_2;
  int v_30_1;
  int v_29;
  int v_28_3;
  int v_28_2;
  int v_28_1;
  int v_27;
  int v_26_3;
  int v_26_2;
  int v_26_1;
  int v_25;
  int v_24_3;
  int v_24_2;
  int v_24_1;
  int v_22_2_0;
  int v_22_3_0_0;
  int v_22_3_0_1;
  int v_22_2_1;
  int v_22_3_1_0;
  int v_22_3_1_1;
  int v_20_2_0;
  int v_20_3_0_0;
  int v_20_3_0_1;
  int v_20_2_1;
  int v_20_3_1_0;
  int v_20_3_1_1;
  int v_18_2_0;
  int v_18_3_0_0;
  int v_18_3_0_1;
  int v_18_2_1;
  int v_18_3_1_0;
  int v_18_3_1_1;
  int v_16_2_0;
  int v_16_3_0_0;
  int v_16_3_0_1;
  int v_16_2_1;
  int v_16_3_1_0;
  int v_16_3_1_1;
  int v_23;
  int v_22_3;
  int v_22_2;
  int v_22_1;
  int v_21;
  int v_20_3;
  int v_20_2;
  int v_20_1;
  int v_19;
  int v_18_3;
  int v_18_2;
  int v_18_1;
  int v_17;
  int v_16_3;
  int v_16_2;
  int v_16_1;
  int v_14_2_0;
  int v_14_3_0_0;
  int v_14_3_0_1;
  int v_14_2_1;
  int v_14_3_1_0;
  int v_14_3_1_1;
  int v_12_2_0;
  int v_12_3_0_0;
  int v_12_3_0_1;
  int v_12_2_1;
  int v_12_3_1_0;
  int v_12_3_1_1;
  int v_10_2_0;
  int v_10_3_0_0;
  int v_10_3_0_1;
  int v_10_2_1;
  int v_10_3_1_0;
  int v_10_3_1_1;
  int v_8_2_0;
  int v_8_3_0_0;
  int v_8_3_0_1;
  int v_8_2_1;
  int v_8_3_1_0;
  int v_8_3_1_1;
  int v_15;
  int v_14_3;
  int v_14_2;
  int v_14_1;
  int v_13;
  int v_12_3;
  int v_12_2;
  int v_12_1;
  int v_11;
  int v_10_3;
  int v_10_2;
  int v_10_1;
  int v_9;
  int v_8_3;
  int v_8_2;
  int v_8_1;
  int v_6_2_0;
  int v_6_3_0_0;
  int v_6_3_0_1;
  int v_6_2_1;
  int v_6_3_1_0;
  int v_6_3_1_1;
  int v_4_2_0;
  int v_4_3_0_0;
  int v_4_3_0_1;
  int v_4_2_1;
  int v_4_3_1_0;
  int v_4_3_1_1;
  int v_2_2_0;
  int v_2_3_0_0;
  int v_2_3_0_1;
  int v_2_2_1;
  int v_2_3_1_0;
  int v_2_3_1_1;
  int v_2_4_0;
  int v_3_1_0_0;
  int v_3_1_0_1;
  int v_2_4_1;
  int v_3_1_1_0;
  int v_3_1_1_1;
  int v_7;
  int v_6_3;
  int v_6_2;
  int v_6_1;
  int v_5;
  int v_4_3;
  int v_4_2;
  int v_4_1;
  int v_3;
  int v_2_3;
  int v_2_2;
  int v_2_1;
  int v_1;
  int v_3_1;
  int v_2_4;
  int v_1_1;
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
  int s_St_Seguranca_2_0;
  int s_St_Seguranca_3_0_0;
  int s_St_Seguranca_3_0_1;
  int s_St_Seguranca_2_1;
  int s_St_Seguranca_3_1_0;
  int s_St_Seguranca_3_1_1;
  int s_St_Neutro_2_0;
  int s_St_Neutro_3_0_0;
  int s_St_Neutro_3_0_1;
  int s_St_Neutro_2_1;
  int s_St_Neutro_3_1_0;
  int s_St_Neutro_3_1_1;
  int s_St_DomingoL_2_0;
  int s_St_DomingoL_3_0_0;
  int s_St_DomingoL_3_0_1;
  int s_St_DomingoL_2_1;
  int s_St_DomingoL_3_1_0;
  int s_St_DomingoL_3_1_1;
  int s_St_Domingo_2_0;
  int s_St_Domingo_3_0_0;
  int s_St_Domingo_3_0_1;
  int s_St_Domingo_2_1;
  int s_St_Domingo_3_1_0;
  int s_St_Domingo_3_1_1;
  int s_St_Ebd_2_0;
  int s_St_Ebd_3_0_0;
  int s_St_Ebd_3_0_1;
  int s_St_Ebd_2_1;
  int s_St_Ebd_3_1_0;
  int s_St_Ebd_3_1_1;
  int s_St_Sexta_feira_2_0;
  int s_St_Sexta_feira_3_0_0;
  int s_St_Sexta_feira_3_0_1;
  int s_St_Sexta_feira_2_1;
  int s_St_Sexta_feira_3_1_0;
  int s_St_Sexta_feira_3_1_1;
  int ck_2_0;
  int ck_3_0_0;
  int ck_3_0_1;
  int ck_2_1;
  int ck_3_1_0;
  int ck_3_1_1;
  int r_St_Seguranca;
  int s_St_Seguranca_3;
  int s_St_Seguranca_2;
  int s_St_Seguranca_1;
  int r_St_Neutro;
  int s_St_Neutro_3;
  int s_St_Neutro_2;
  int s_St_Neutro_1;
  int r_St_DomingoL;
  int s_St_DomingoL_3;
  int s_St_DomingoL_2;
  int s_St_DomingoL_1;
  int r_St_Domingo;
  int s_St_Domingo_3;
  int s_St_Domingo_2;
  int s_St_Domingo_1;
  int r_St_Ebd;
  int s_St_Ebd_3;
  int s_St_Ebd_2;
  int s_St_Ebd_1;
  int r_St_Sexta_feira;
  int s_St_Sexta_feira_3;
  int s_St_Sexta_feira_2;
  int s_St_Sexta_feira_1;
  int ck_3;
  int ck_2;
  int ck_1_4;
  int mode_2_0;
  int mode_3_0_0;
  int mode_3_0_1;
  int mode_2_1;
  int mode_3_1_0;
  int mode_3_1_1;
  int s_2_0;
  int s_3_0_0;
  int s_3_0_1;
  int s_2_1;
  int s_3_1_0;
  int s_3_1_1;
  int ns_2_0;
  int ns_3_0_0;
  int ns_3_0_1;
  int ns_2_1;
  int ns_3_1_0;
  int ns_3_1_1;
  int s_3;
  int s_2;
  int s_1;
  int ns_3;
  int ns_2;
  int ns_1;
  int r;
  int nr;
  ck_1_4 = self->v_224;
  ck_2 = self->v_225;
  ck_3 = self->v_226;
  if (ck_1_4) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        if (seguranca_input) {
          v_25 = true;
        } else {
          v_25 = self->pnr;
        };
        if (neutro_input) {
          v_27 = true;
        } else {
          v_27 = v_25;
        };
        if (domingol_input) {
          v_29 = true;
        } else {
          v_29 = v_27;
        };
        if (sexta_input) {
          v_31 = true;
        } else {
          v_31 = v_29;
        };
        if (ebd_input) {
          r_St_Domingo = true;
        } else {
          r_St_Domingo = v_31;
        };
        if (seguranca_input) {
          v_24_1 = false;
        } else {
          v_24_1 = true;
        };
        if (neutro_input) {
          v_26_1 = false;
        } else {
          v_26_1 = v_24_1;
        };
        if (domingol_input) {
          v_28_1 = true;
        } else {
          v_28_1 = v_26_1;
        };
        if (sexta_input) {
          v_30_1 = false;
        } else {
          v_30_1 = v_28_1;
        };
        if (ebd_input) {
          s_St_Domingo_1 = true;
        } else {
          s_St_Domingo_1 = v_30_1;
        };
        if (seguranca_input) {
          v_24_2 = true;
        } else {
          v_24_2 = true;
        };
        if (neutro_input) {
          v_26_2 = true;
        } else {
          v_26_2 = v_24_2;
        };
        if (domingol_input) {
          v_28_2 = true;
        } else {
          v_28_2 = v_26_2;
        };
        if (sexta_input) {
          v_30_2 = false;
        } else {
          v_30_2 = v_28_2;
        };
        if (ebd_input) {
          s_St_Domingo_2 = false;
        } else {
          s_St_Domingo_2 = v_30_2;
        };
        if (seguranca_input) {
          v_24_3 = false;
        } else {
          v_24_3 = true;
        };
        if (neutro_input) {
          v_26_3 = true;
        } else {
          v_26_3 = v_24_3;
        };
        if (domingol_input) {
          v_28_3 = false;
        } else {
          v_28_3 = v_26_3;
        };
        if (sexta_input) {
          v_30_3 = false;
        } else {
          v_30_3 = v_28_3;
        };
        if (ebd_input) {
          s_St_Domingo_3 = false;
        } else {
          s_St_Domingo_3 = v_30_3;
        };
        v_245 = r_St_Domingo;
        v_227 = s_St_Domingo_1;
        v_228 = s_St_Domingo_2;
        v_229 = s_St_Domingo_3;
      } else {
        if (seguranca_input) {
          v_17 = true;
        } else {
          v_17 = self->pnr;
        };
        if (neutro_input) {
          v_19 = true;
        } else {
          v_19 = v_17;
        };
        if (domingo_input) {
          v_21 = true;
        } else {
          v_21 = v_19;
        };
        if (sexta_input) {
          v_23 = true;
        } else {
          v_23 = v_21;
        };
        if (ebd_input) {
          r_St_DomingoL = true;
        } else {
          r_St_DomingoL = v_23;
        };
        v_245 = r_St_DomingoL;
        if (seguranca_input) {
          v_16_1 = false;
        } else {
          v_16_1 = true;
        };
        if (neutro_input) {
          v_18_1 = false;
        } else {
          v_18_1 = v_16_1;
        };
        if (domingo_input) {
          v_20_1 = true;
        } else {
          v_20_1 = v_18_1;
        };
        if (sexta_input) {
          v_22_1 = false;
        } else {
          v_22_1 = v_20_1;
        };
        if (ebd_input) {
          s_St_DomingoL_1 = true;
        } else {
          s_St_DomingoL_1 = v_22_1;
        };
        v_227 = s_St_DomingoL_1;
        if (seguranca_input) {
          v_16_2 = true;
        } else {
          v_16_2 = true;
        };
        if (neutro_input) {
          v_18_2 = true;
        } else {
          v_18_2 = v_16_2;
        };
        if (domingo_input) {
          v_20_2 = true;
        } else {
          v_20_2 = v_18_2;
        };
        if (sexta_input) {
          v_22_2 = false;
        } else {
          v_22_2 = v_20_2;
        };
        if (ebd_input) {
          s_St_DomingoL_2 = false;
        } else {
          s_St_DomingoL_2 = v_22_2;
        };
        v_228 = s_St_DomingoL_2;
        if (seguranca_input) {
          v_16_3 = false;
        } else {
          v_16_3 = false;
        };
        if (neutro_input) {
          v_18_3 = true;
        } else {
          v_18_3 = v_16_3;
        };
        if (domingo_input) {
          v_20_3 = true;
        } else {
          v_20_3 = v_18_3;
        };
        if (sexta_input) {
          v_22_3 = false;
        } else {
          v_22_3 = v_20_3;
        };
        if (ebd_input) {
          s_St_DomingoL_3 = false;
        } else {
          s_St_DomingoL_3 = v_22_3;
        };
        v_229 = s_St_DomingoL_3;
      };
      v_239 = v_227;
      v_240 = v_228;
      v_241 = v_229;
      v_247 = v_245;
      if (ck_3_1_1) {
        if (v_24_1) {
          v_24_2_1 = v_24_2;
          if (v_24_2_1) {
            v_24_3_1_1 = v_24_3;
          } else {
            v_24_3_1_0 = v_24_3;
          };
        } else {
          v_24_2_0 = v_24_2;
          if (v_24_2_0) {
            v_24_3_0_1 = v_24_3;
          } else {
            v_24_3_0_0 = v_24_3;
          };
        };
        if (v_26_1) {
          v_26_2_1 = v_26_2;
          if (v_26_2_1) {
            v_26_3_1_1 = v_26_3;
          } else {
            v_26_3_1_0 = v_26_3;
          };
        } else {
          v_26_2_0 = v_26_2;
          if (v_26_2_0) {
            v_26_3_0_1 = v_26_3;
          } else {
            v_26_3_0_0 = v_26_3;
          };
        };
        if (v_28_1) {
          v_28_2_1 = v_28_2;
          if (v_28_2_1) {
            v_28_3_1_1 = v_28_3;
          } else {
            v_28_3_1_0 = v_28_3;
          };
        } else {
          v_28_2_0 = v_28_2;
          if (v_28_2_0) {
            v_28_3_0_1 = v_28_3;
          } else {
            v_28_3_0_0 = v_28_3;
          };
        };
        if (v_30_1) {
          v_30_2_1 = v_30_2;
          if (v_30_2_1) {
            v_30_3_1_1 = v_30_3;
          } else {
            v_30_3_1_0 = v_30_3;
          };
        } else {
          v_30_2_0 = v_30_2;
          if (v_30_2_0) {
            v_30_3_0_1 = v_30_3;
          } else {
            v_30_3_0_0 = v_30_3;
          };
        };
        if (s_St_Domingo_1) {
          s_St_Domingo_2_1 = s_St_Domingo_2;
          if (s_St_Domingo_2_1) {
            s_St_Domingo_3_1_1 = s_St_Domingo_3;
          } else {
            s_St_Domingo_3_1_0 = s_St_Domingo_3;
          };
        } else {
          s_St_Domingo_2_0 = s_St_Domingo_2;
          if (s_St_Domingo_2_0) {
            s_St_Domingo_3_0_1 = s_St_Domingo_3;
          } else {
            s_St_Domingo_3_0_0 = s_St_Domingo_3;
          };
        };
      } else {
        if (v_16_1) {
          v_16_2_1 = v_16_2;
          if (v_16_2_1) {
            v_16_3_1_1 = v_16_3;
          } else {
            v_16_3_1_0 = v_16_3;
          };
        } else {
          v_16_2_0 = v_16_2;
          if (v_16_2_0) {
            v_16_3_0_1 = v_16_3;
          } else {
            v_16_3_0_0 = v_16_3;
          };
        };
        if (v_18_1) {
          v_18_2_1 = v_18_2;
          if (v_18_2_1) {
            v_18_3_1_1 = v_18_3;
          } else {
            v_18_3_1_0 = v_18_3;
          };
        } else {
          v_18_2_0 = v_18_2;
          if (v_18_2_0) {
            v_18_3_0_1 = v_18_3;
          } else {
            v_18_3_0_0 = v_18_3;
          };
        };
        if (v_20_1) {
          v_20_2_1 = v_20_2;
          if (v_20_2_1) {
            v_20_3_1_1 = v_20_3;
          } else {
            v_20_3_1_0 = v_20_3;
          };
        } else {
          v_20_2_0 = v_20_2;
          if (v_20_2_0) {
            v_20_3_0_1 = v_20_3;
          } else {
            v_20_3_0_0 = v_20_3;
          };
        };
        if (v_22_1) {
          v_22_2_1 = v_22_2;
          if (v_22_2_1) {
            v_22_3_1_1 = v_22_3;
          } else {
            v_22_3_1_0 = v_22_3;
          };
        } else {
          v_22_2_0 = v_22_2;
          if (v_22_2_0) {
            v_22_3_0_1 = v_22_3;
          } else {
            v_22_3_0_0 = v_22_3;
          };
        };
        if (s_St_DomingoL_1) {
          s_St_DomingoL_2_1 = s_St_DomingoL_2;
          if (s_St_DomingoL_2_1) {
            s_St_DomingoL_3_1_1 = s_St_DomingoL_3;
          } else {
            s_St_DomingoL_3_1_0 = s_St_DomingoL_3;
          };
        } else {
          s_St_DomingoL_2_0 = s_St_DomingoL_2;
          if (s_St_DomingoL_2_0) {
            s_St_DomingoL_3_0_1 = s_St_DomingoL_3;
          } else {
            s_St_DomingoL_3_0_0 = s_St_DomingoL_3;
          };
        };
      };
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_246 = true;
        v_230 = true;
        v_231 = true;
        v_232 = true;
      } else {
        if (seguranca_input) {
          v_33 = true;
        } else {
          v_33 = self->pnr;
        };
        if (neutro_input) {
          v_35 = true;
        } else {
          v_35 = v_33;
        };
        if (domingol_input) {
          v_37 = true;
        } else {
          v_37 = v_35;
        };
        if (domingo_input) {
          v_39 = true;
        } else {
          v_39 = v_37;
        };
        if (sexta_input) {
          r_St_Ebd = true;
        } else {
          r_St_Ebd = v_39;
        };
        v_246 = r_St_Ebd;
        if (seguranca_input) {
          v_32_1 = false;
        } else {
          v_32_1 = true;
        };
        if (neutro_input) {
          v_34_1 = false;
        } else {
          v_34_1 = v_32_1;
        };
        if (domingol_input) {
          v_36_1 = true;
        } else {
          v_36_1 = v_34_1;
        };
        if (domingo_input) {
          v_38_1 = true;
        } else {
          v_38_1 = v_36_1;
        };
        if (sexta_input) {
          s_St_Ebd_1 = false;
        } else {
          s_St_Ebd_1 = v_38_1;
        };
        v_230 = s_St_Ebd_1;
        if (seguranca_input) {
          v_32_2 = true;
        } else {
          v_32_2 = false;
        };
        if (neutro_input) {
          v_34_2 = true;
        } else {
          v_34_2 = v_32_2;
        };
        if (domingol_input) {
          v_36_2 = true;
        } else {
          v_36_2 = v_34_2;
        };
        if (domingo_input) {
          v_38_2 = true;
        } else {
          v_38_2 = v_36_2;
        };
        if (sexta_input) {
          s_St_Ebd_2 = false;
        } else {
          s_St_Ebd_2 = v_38_2;
        };
        v_231 = s_St_Ebd_2;
        if (seguranca_input) {
          v_32_3 = false;
        } else {
          v_32_3 = false;
        };
        if (neutro_input) {
          v_34_3 = true;
        } else {
          v_34_3 = v_32_3;
        };
        if (domingol_input) {
          v_36_3 = false;
        } else {
          v_36_3 = v_34_3;
        };
        if (domingo_input) {
          v_38_3 = true;
        } else {
          v_38_3 = v_36_3;
        };
        if (sexta_input) {
          s_St_Ebd_3 = false;
        } else {
          s_St_Ebd_3 = v_38_3;
        };
        v_232 = s_St_Ebd_3;
        if (v_32_1) {
          v_32_2_1 = v_32_2;
          if (v_32_2_1) {
            v_32_3_1_1 = v_32_3;
          } else {
            v_32_3_1_0 = v_32_3;
          };
        } else {
          v_32_2_0 = v_32_2;
          if (v_32_2_0) {
            v_32_3_0_1 = v_32_3;
          } else {
            v_32_3_0_0 = v_32_3;
          };
        };
        if (v_34_1) {
          v_34_2_1 = v_34_2;
          if (v_34_2_1) {
            v_34_3_1_1 = v_34_3;
          } else {
            v_34_3_1_0 = v_34_3;
          };
        } else {
          v_34_2_0 = v_34_2;
          if (v_34_2_0) {
            v_34_3_0_1 = v_34_3;
          } else {
            v_34_3_0_0 = v_34_3;
          };
        };
        if (v_36_1) {
          v_36_2_1 = v_36_2;
          if (v_36_2_1) {
            v_36_3_1_1 = v_36_3;
          } else {
            v_36_3_1_0 = v_36_3;
          };
        } else {
          v_36_2_0 = v_36_2;
          if (v_36_2_0) {
            v_36_3_0_1 = v_36_3;
          } else {
            v_36_3_0_0 = v_36_3;
          };
        };
        if (v_38_1) {
          v_38_2_1 = v_38_2;
          if (v_38_2_1) {
            v_38_3_1_1 = v_38_3;
          } else {
            v_38_3_1_0 = v_38_3;
          };
        } else {
          v_38_2_0 = v_38_2;
          if (v_38_2_0) {
            v_38_3_0_1 = v_38_3;
          } else {
            v_38_3_0_0 = v_38_3;
          };
        };
        if (s_St_Ebd_1) {
          s_St_Ebd_2_1 = s_St_Ebd_2;
          if (s_St_Ebd_2_1) {
            s_St_Ebd_3_1_1 = s_St_Ebd_3;
          } else {
            s_St_Ebd_3_1_0 = s_St_Ebd_3;
          };
        } else {
          s_St_Ebd_2_0 = s_St_Ebd_2;
          if (s_St_Ebd_2_0) {
            s_St_Ebd_3_0_1 = s_St_Ebd_3;
          } else {
            s_St_Ebd_3_0_0 = s_St_Ebd_3;
          };
        };
      };
      v_239 = v_230;
      v_240 = v_231;
      v_241 = v_232;
      v_247 = v_246;
    };
    s_1 = v_239;
    s_2 = v_240;
    s_3 = v_241;
    r = v_247;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        if (seguranca_input) {
          v_9 = true;
        } else {
          v_9 = self->pnr;
        };
        if (domingo_input) {
          v_11 = true;
        } else {
          v_11 = v_9;
        };
        if (domingol_input) {
          v_13 = true;
        } else {
          v_13 = v_11;
        };
        if (sexta_input) {
          v_15 = true;
        } else {
          v_15 = v_13;
        };
        if (ebd_input) {
          r_St_Neutro = true;
        } else {
          r_St_Neutro = v_15;
        };
        if (seguranca_input) {
          v_8_1 = false;
        } else {
          v_8_1 = false;
        };
        if (domingo_input) {
          v_10_1 = true;
        } else {
          v_10_1 = v_8_1;
        };
        if (domingol_input) {
          v_12_1 = true;
        } else {
          v_12_1 = v_10_1;
        };
        if (sexta_input) {
          v_14_1 = false;
        } else {
          v_14_1 = v_12_1;
        };
        if (ebd_input) {
          s_St_Neutro_1 = true;
        } else {
          s_St_Neutro_1 = v_14_1;
        };
        if (seguranca_input) {
          v_8_2 = true;
        } else {
          v_8_2 = true;
        };
        if (domingo_input) {
          v_10_2 = true;
        } else {
          v_10_2 = v_8_2;
        };
        if (domingol_input) {
          v_12_2 = true;
        } else {
          v_12_2 = v_10_2;
        };
        if (sexta_input) {
          v_14_2 = false;
        } else {
          v_14_2 = v_12_2;
        };
        if (ebd_input) {
          s_St_Neutro_2 = false;
        } else {
          s_St_Neutro_2 = v_14_2;
        };
        if (seguranca_input) {
          v_8_3 = false;
        } else {
          v_8_3 = true;
        };
        if (domingo_input) {
          v_10_3 = true;
        } else {
          v_10_3 = v_8_3;
        };
        if (domingol_input) {
          v_12_3 = false;
        } else {
          v_12_3 = v_10_3;
        };
        if (sexta_input) {
          v_14_3 = false;
        } else {
          v_14_3 = v_12_3;
        };
        if (ebd_input) {
          s_St_Neutro_3 = false;
        } else {
          s_St_Neutro_3 = v_14_3;
        };
        v_248 = r_St_Neutro;
        v_233 = s_St_Neutro_1;
        v_234 = s_St_Neutro_2;
        v_235 = s_St_Neutro_3;
      } else {
        if (domingo_input) {
          v_1 = true;
        } else {
          v_1 = self->pnr;
        };
        if (neutro_input) {
          v_3 = true;
        } else {
          v_3 = v_1;
        };
        if (domingol_input) {
          v_5 = true;
        } else {
          v_5 = v_3;
        };
        if (sexta_input) {
          v_7 = true;
        } else {
          v_7 = v_5;
        };
        if (ebd_input) {
          r_St_Seguranca = true;
        } else {
          r_St_Seguranca = v_7;
        };
        v_248 = r_St_Seguranca;
        if (domingo_input) {
          v_1_1 = true;
        } else {
          v_1_1 = false;
        };
        if (neutro_input) {
          v_2_1 = false;
        } else {
          v_2_1 = v_1_1;
        };
        if (domingol_input) {
          v_4_1 = true;
        } else {
          v_4_1 = v_2_1;
        };
        if (sexta_input) {
          v_6_1 = false;
        } else {
          v_6_1 = v_4_1;
        };
        if (ebd_input) {
          s_St_Seguranca_1 = true;
        } else {
          s_St_Seguranca_1 = v_6_1;
        };
        v_233 = s_St_Seguranca_1;
        if (domingo_input) {
          v_2_4 = true;
        } else {
          v_2_4 = true;
        };
        if (neutro_input) {
          v_2_2 = true;
        } else {
          v_2_2 = v_2_4;
        };
        if (domingol_input) {
          v_4_2 = true;
        } else {
          v_4_2 = v_2_2;
        };
        if (sexta_input) {
          v_6_2 = false;
        } else {
          v_6_2 = v_4_2;
        };
        if (ebd_input) {
          s_St_Seguranca_2 = false;
        } else {
          s_St_Seguranca_2 = v_6_2;
        };
        v_234 = s_St_Seguranca_2;
        if (domingo_input) {
          v_3_1 = true;
        } else {
          v_3_1 = false;
        };
        if (neutro_input) {
          v_2_3 = true;
        } else {
          v_2_3 = v_3_1;
        };
        if (domingol_input) {
          v_4_3 = false;
        } else {
          v_4_3 = v_2_3;
        };
        if (sexta_input) {
          v_6_3 = false;
        } else {
          v_6_3 = v_4_3;
        };
        if (ebd_input) {
          s_St_Seguranca_3 = false;
        } else {
          s_St_Seguranca_3 = v_6_3;
        };
        v_235 = s_St_Seguranca_3;
      };
      v_242 = v_233;
      v_243 = v_234;
      v_244 = v_235;
      v_250 = v_248;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_249 = true;
        v_236 = true;
        v_237 = true;
        v_238 = true;
      } else {
        if (seguranca_input) {
          v_41 = true;
        } else {
          v_41 = self->pnr;
        };
        if (neutro_input) {
          v_43 = true;
        } else {
          v_43 = v_41;
        };
        if (domingol_input) {
          v_45 = true;
        } else {
          v_45 = v_43;
        };
        if (domingo_input) {
          v_47 = true;
        } else {
          v_47 = v_45;
        };
        if (ebd_input) {
          r_St_Sexta_feira = true;
        } else {
          r_St_Sexta_feira = v_47;
        };
        v_249 = r_St_Sexta_feira;
        if (seguranca_input) {
          v_40_1 = false;
        } else {
          v_40_1 = false;
        };
        if (neutro_input) {
          v_42_1 = false;
        } else {
          v_42_1 = v_40_1;
        };
        if (domingol_input) {
          v_44_1 = true;
        } else {
          v_44_1 = v_42_1;
        };
        if (domingo_input) {
          v_46_1 = true;
        } else {
          v_46_1 = v_44_1;
        };
        if (ebd_input) {
          s_St_Sexta_feira_1 = true;
        } else {
          s_St_Sexta_feira_1 = v_46_1;
        };
        v_236 = s_St_Sexta_feira_1;
        if (seguranca_input) {
          v_40_2 = true;
        } else {
          v_40_2 = false;
        };
        if (neutro_input) {
          v_42_2 = true;
        } else {
          v_42_2 = v_40_2;
        };
        if (domingol_input) {
          v_44_2 = true;
        } else {
          v_44_2 = v_42_2;
        };
        if (domingo_input) {
          v_46_2 = true;
        } else {
          v_46_2 = v_44_2;
        };
        if (ebd_input) {
          s_St_Sexta_feira_2 = false;
        } else {
          s_St_Sexta_feira_2 = v_46_2;
        };
        v_237 = s_St_Sexta_feira_2;
        if (seguranca_input) {
          v_40_3 = false;
        } else {
          v_40_3 = false;
        };
        if (neutro_input) {
          v_42_3 = true;
        } else {
          v_42_3 = v_40_3;
        };
        if (domingol_input) {
          v_44_3 = false;
        } else {
          v_44_3 = v_42_3;
        };
        if (domingo_input) {
          v_46_3 = true;
        } else {
          v_46_3 = v_44_3;
        };
        if (ebd_input) {
          s_St_Sexta_feira_3 = false;
        } else {
          s_St_Sexta_feira_3 = v_46_3;
        };
        v_238 = s_St_Sexta_feira_3;
        if (v_40_1) {
          v_40_2_1 = v_40_2;
          if (v_40_2_1) {
            v_40_3_1_1 = v_40_3;
          } else {
            v_40_3_1_0 = v_40_3;
          };
        } else {
          v_40_2_0 = v_40_2;
          if (v_40_2_0) {
            v_40_3_0_1 = v_40_3;
          } else {
            v_40_3_0_0 = v_40_3;
          };
        };
        if (v_42_1) {
          v_42_2_1 = v_42_2;
          if (v_42_2_1) {
            v_42_3_1_1 = v_42_3;
          } else {
            v_42_3_1_0 = v_42_3;
          };
        } else {
          v_42_2_0 = v_42_2;
          if (v_42_2_0) {
            v_42_3_0_1 = v_42_3;
          } else {
            v_42_3_0_0 = v_42_3;
          };
        };
        if (v_44_1) {
          v_44_2_1 = v_44_2;
          if (v_44_2_1) {
            v_44_3_1_1 = v_44_3;
          } else {
            v_44_3_1_0 = v_44_3;
          };
        } else {
          v_44_2_0 = v_44_2;
          if (v_44_2_0) {
            v_44_3_0_1 = v_44_3;
          } else {
            v_44_3_0_0 = v_44_3;
          };
        };
        if (v_46_1) {
          v_46_2_1 = v_46_2;
          if (v_46_2_1) {
            v_46_3_1_1 = v_46_3;
          } else {
            v_46_3_1_0 = v_46_3;
          };
        } else {
          v_46_2_0 = v_46_2;
          if (v_46_2_0) {
            v_46_3_0_1 = v_46_3;
          } else {
            v_46_3_0_0 = v_46_3;
          };
        };
        if (s_St_Sexta_feira_1) {
          s_St_Sexta_feira_2_1 = s_St_Sexta_feira_2;
          if (s_St_Sexta_feira_2_1) {
            s_St_Sexta_feira_3_1_1 = s_St_Sexta_feira_3;
          } else {
            s_St_Sexta_feira_3_1_0 = s_St_Sexta_feira_3;
          };
        } else {
          s_St_Sexta_feira_2_0 = s_St_Sexta_feira_2;
          if (s_St_Sexta_feira_2_0) {
            s_St_Sexta_feira_3_0_1 = s_St_Sexta_feira_3;
          } else {
            s_St_Sexta_feira_3_0_0 = s_St_Sexta_feira_3;
          };
        };
      };
      v_242 = v_236;
      v_243 = v_237;
      v_244 = v_238;
      v_250 = v_249;
    };
    s_1 = v_242;
    s_2 = v_243;
    s_3 = v_244;
    r = v_250;
  };
  ck_1_1 = s_1;
  ck_1_2 = s_2;
  ck_1_3 = s_3;
  if (ck_1_1) {
    ck_1_2_1 = ck_1_2;
    if (ck_1_2_1) {
      ck_1_3_1_1 = ck_1_3;
      if (ck_1_3_1_1) {
        mode_St_Domingo_1 = false;
        mode_St_Domingo_2 = true;
        mode_St_Domingo_3 = true;
        nr_St_Domingo = false;
        ns_St_Domingo_1 = true;
        ns_St_Domingo_2 = true;
        ns_St_Domingo_3 = true;
        v_182 = mode_St_Domingo_1;
        v_183 = mode_St_Domingo_2;
        v_184 = mode_St_Domingo_3;
        v_218 = nr_St_Domingo;
        v_200 = ns_St_Domingo_1;
        v_201 = ns_St_Domingo_2;
        v_202 = ns_St_Domingo_3;
      } else {
        mode_St_DomingoL_1 = true;
        v_182 = mode_St_DomingoL_1;
        mode_St_DomingoL_2 = false;
        v_183 = mode_St_DomingoL_2;
        mode_St_DomingoL_3 = false;
        v_184 = mode_St_DomingoL_3;
        nr_St_DomingoL = false;
        v_218 = nr_St_DomingoL;
        ns_St_DomingoL_1 = true;
        v_200 = ns_St_DomingoL_1;
        ns_St_DomingoL_2 = true;
        v_201 = ns_St_DomingoL_2;
        ns_St_DomingoL_3 = false;
        v_202 = ns_St_DomingoL_3;
      };
      v_194 = v_182;
      v_195 = v_183;
      v_196 = v_184;
      v_212 = v_200;
      v_213 = v_201;
      v_214 = v_202;
      v_220 = v_218;
      if (ck_1_3_1_1) {
        if (mode_St_Domingo_1) {
          mode_St_Domingo_2_1 = mode_St_Domingo_2;
          if (mode_St_Domingo_2_1) {
            mode_St_Domingo_3_1_1 = mode_St_Domingo_3;
          } else {
            mode_St_Domingo_3_1_0 = mode_St_Domingo_3;
          };
        } else {
          mode_St_Domingo_2_0 = mode_St_Domingo_2;
          if (mode_St_Domingo_2_0) {
            mode_St_Domingo_3_0_1 = mode_St_Domingo_3;
          } else {
            mode_St_Domingo_3_0_0 = mode_St_Domingo_3;
          };
        };
        if (ns_St_Domingo_1) {
          ns_St_Domingo_2_1 = ns_St_Domingo_2;
          if (ns_St_Domingo_2_1) {
            ns_St_Domingo_3_1_1 = ns_St_Domingo_3;
          } else {
            ns_St_Domingo_3_1_0 = ns_St_Domingo_3;
          };
        } else {
          ns_St_Domingo_2_0 = ns_St_Domingo_2;
          if (ns_St_Domingo_2_0) {
            ns_St_Domingo_3_0_1 = ns_St_Domingo_3;
          } else {
            ns_St_Domingo_3_0_0 = ns_St_Domingo_3;
          };
        };
      } else {
        if (mode_St_DomingoL_1) {
          mode_St_DomingoL_2_1 = mode_St_DomingoL_2;
          if (mode_St_DomingoL_2_1) {
            mode_St_DomingoL_3_1_1 = mode_St_DomingoL_3;
          } else {
            mode_St_DomingoL_3_1_0 = mode_St_DomingoL_3;
          };
        } else {
          mode_St_DomingoL_2_0 = mode_St_DomingoL_2;
          if (mode_St_DomingoL_2_0) {
            mode_St_DomingoL_3_0_1 = mode_St_DomingoL_3;
          } else {
            mode_St_DomingoL_3_0_0 = mode_St_DomingoL_3;
          };
        };
        if (ns_St_DomingoL_1) {
          ns_St_DomingoL_2_1 = ns_St_DomingoL_2;
          if (ns_St_DomingoL_2_1) {
            ns_St_DomingoL_3_1_1 = ns_St_DomingoL_3;
          } else {
            ns_St_DomingoL_3_1_0 = ns_St_DomingoL_3;
          };
        } else {
          ns_St_DomingoL_2_0 = ns_St_DomingoL_2;
          if (ns_St_DomingoL_2_0) {
            ns_St_DomingoL_3_0_1 = ns_St_DomingoL_3;
          } else {
            ns_St_DomingoL_3_0_0 = ns_St_DomingoL_3;
          };
        };
      };
    } else {
      ck_1_3_1_0 = ck_1_3;
      if (ck_1_3_1_0) {
        v_185 = true;
        v_186 = true;
        v_187 = true;
        v_219 = true;
        v_203 = true;
        v_204 = true;
        v_205 = true;
      } else {
        mode_St_Ebd_1 = false;
        v_185 = mode_St_Ebd_1;
        mode_St_Ebd_2 = true;
        v_186 = mode_St_Ebd_2;
        mode_St_Ebd_3 = false;
        v_187 = mode_St_Ebd_3;
        nr_St_Ebd = false;
        v_219 = nr_St_Ebd;
        ns_St_Ebd_1 = true;
        v_203 = ns_St_Ebd_1;
        ns_St_Ebd_2 = false;
        v_204 = ns_St_Ebd_2;
        ns_St_Ebd_3 = false;
        v_205 = ns_St_Ebd_3;
        if (mode_St_Ebd_1) {
          mode_St_Ebd_2_1 = mode_St_Ebd_2;
          if (mode_St_Ebd_2_1) {
            mode_St_Ebd_3_1_1 = mode_St_Ebd_3;
          } else {
            mode_St_Ebd_3_1_0 = mode_St_Ebd_3;
          };
        } else {
          mode_St_Ebd_2_0 = mode_St_Ebd_2;
          if (mode_St_Ebd_2_0) {
            mode_St_Ebd_3_0_1 = mode_St_Ebd_3;
          } else {
            mode_St_Ebd_3_0_0 = mode_St_Ebd_3;
          };
        };
        if (ns_St_Ebd_1) {
          ns_St_Ebd_2_1 = ns_St_Ebd_2;
          if (ns_St_Ebd_2_1) {
            ns_St_Ebd_3_1_1 = ns_St_Ebd_3;
          } else {
            ns_St_Ebd_3_1_0 = ns_St_Ebd_3;
          };
        } else {
          ns_St_Ebd_2_0 = ns_St_Ebd_2;
          if (ns_St_Ebd_2_0) {
            ns_St_Ebd_3_0_1 = ns_St_Ebd_3;
          } else {
            ns_St_Ebd_3_0_0 = ns_St_Ebd_3;
          };
        };
      };
      v_194 = v_185;
      v_195 = v_186;
      v_196 = v_187;
      v_212 = v_203;
      v_213 = v_204;
      v_214 = v_205;
      v_220 = v_219;
    };
    _out->mode_1 = v_194;
    _out->mode_2 = v_195;
    _out->mode_3 = v_196;
    ns_1 = v_212;
    ns_2 = v_213;
    ns_3 = v_214;
    nr = v_220;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      ck_1_3_0_1 = ck_1_3;
      if (ck_1_3_0_1) {
        mode_St_Neutro_1 = true;
        mode_St_Neutro_2 = true;
        mode_St_Neutro_3 = false;
        nr_St_Neutro = false;
        ns_St_Neutro_1 = false;
        ns_St_Neutro_2 = true;
        ns_St_Neutro_3 = true;
        v_188 = mode_St_Neutro_1;
        v_189 = mode_St_Neutro_2;
        v_190 = mode_St_Neutro_3;
        v_221 = nr_St_Neutro;
        v_206 = ns_St_Neutro_1;
        v_207 = ns_St_Neutro_2;
        v_208 = ns_St_Neutro_3;
      } else {
        mode_St_Seguranca_1 = true;
        v_188 = mode_St_Seguranca_1;
        mode_St_Seguranca_2 = true;
        v_189 = mode_St_Seguranca_2;
        mode_St_Seguranca_3 = true;
        v_190 = mode_St_Seguranca_3;
        nr_St_Seguranca = false;
        v_221 = nr_St_Seguranca;
        ns_St_Seguranca_1 = false;
        v_206 = ns_St_Seguranca_1;
        ns_St_Seguranca_2 = true;
        v_207 = ns_St_Seguranca_2;
        ns_St_Seguranca_3 = false;
        v_208 = ns_St_Seguranca_3;
      };
      v_197 = v_188;
      v_198 = v_189;
      v_199 = v_190;
      v_215 = v_206;
      v_216 = v_207;
      v_217 = v_208;
      v_223 = v_221;
    } else {
      ck_1_3_0_0 = ck_1_3;
      if (ck_1_3_0_0) {
        v_191 = true;
        v_192 = true;
        v_193 = true;
        v_222 = true;
        v_209 = true;
        v_210 = true;
        v_211 = true;
      } else {
        mode_St_Sexta_feira_1 = false;
        v_191 = mode_St_Sexta_feira_1;
        mode_St_Sexta_feira_2 = false;
        v_192 = mode_St_Sexta_feira_2;
        mode_St_Sexta_feira_3 = false;
        v_193 = mode_St_Sexta_feira_3;
        nr_St_Sexta_feira = false;
        v_222 = nr_St_Sexta_feira;
        ns_St_Sexta_feira_1 = false;
        v_209 = ns_St_Sexta_feira_1;
        ns_St_Sexta_feira_2 = false;
        v_210 = ns_St_Sexta_feira_2;
        ns_St_Sexta_feira_3 = false;
        v_211 = ns_St_Sexta_feira_3;
        if (mode_St_Sexta_feira_1) {
          mode_St_Sexta_feira_2_1 = mode_St_Sexta_feira_2;
          if (mode_St_Sexta_feira_2_1) {
            mode_St_Sexta_feira_3_1_1 = mode_St_Sexta_feira_3;
          } else {
            mode_St_Sexta_feira_3_1_0 = mode_St_Sexta_feira_3;
          };
        } else {
          mode_St_Sexta_feira_2_0 = mode_St_Sexta_feira_2;
          if (mode_St_Sexta_feira_2_0) {
            mode_St_Sexta_feira_3_0_1 = mode_St_Sexta_feira_3;
          } else {
            mode_St_Sexta_feira_3_0_0 = mode_St_Sexta_feira_3;
          };
        };
        if (ns_St_Sexta_feira_1) {
          ns_St_Sexta_feira_2_1 = ns_St_Sexta_feira_2;
          if (ns_St_Sexta_feira_2_1) {
            ns_St_Sexta_feira_3_1_1 = ns_St_Sexta_feira_3;
          } else {
            ns_St_Sexta_feira_3_1_0 = ns_St_Sexta_feira_3;
          };
        } else {
          ns_St_Sexta_feira_2_0 = ns_St_Sexta_feira_2;
          if (ns_St_Sexta_feira_2_0) {
            ns_St_Sexta_feira_3_0_1 = ns_St_Sexta_feira_3;
          } else {
            ns_St_Sexta_feira_3_0_0 = ns_St_Sexta_feira_3;
          };
        };
      };
      v_197 = v_191;
      v_198 = v_192;
      v_199 = v_193;
      v_215 = v_209;
      v_216 = v_210;
      v_217 = v_211;
      v_223 = v_222;
    };
    _out->mode_1 = v_197;
    _out->mode_2 = v_198;
    _out->mode_3 = v_199;
    ns_1 = v_215;
    ns_2 = v_216;
    ns_3 = v_217;
    nr = v_223;
  };
  if (ns_1) {
    ns_2_1 = ns_2;
    if (ns_2_1) {
      ns_3_1_1 = ns_3;
    } else {
      ns_3_1_0 = ns_3;
    };
  } else {
    ns_2_0 = ns_2;
    if (ns_2_0) {
      ns_3_0_1 = ns_3;
    } else {
      ns_3_0_0 = ns_3;
    };
  };
  if (_out->mode_1) {
    mode_2_1 = _out->mode_2;
    if (mode_2_1) {
      mode_3_1_1 = _out->mode_3;
    } else {
      mode_3_1_0 = _out->mode_3;
    };
  } else {
    mode_2_0 = _out->mode_2;
    if (mode_2_0) {
      mode_3_0_1 = _out->mode_3;
    } else {
      mode_3_0_0 = _out->mode_3;
    };
  };
  if (!(ck_1_1)) {
    if (ck_1_2_0) {
      if (ck_1_3_0_1) {
        if (mode_St_Neutro_1) {
          mode_St_Neutro_2_1 = mode_St_Neutro_2;
          if (mode_St_Neutro_2_1) {
            mode_St_Neutro_3_1_1 = mode_St_Neutro_3;
          } else {
            mode_St_Neutro_3_1_0 = mode_St_Neutro_3;
          };
        } else {
          mode_St_Neutro_2_0 = mode_St_Neutro_2;
          if (mode_St_Neutro_2_0) {
            mode_St_Neutro_3_0_1 = mode_St_Neutro_3;
          } else {
            mode_St_Neutro_3_0_0 = mode_St_Neutro_3;
          };
        };
        if (ns_St_Neutro_1) {
          ns_St_Neutro_2_1 = ns_St_Neutro_2;
          if (ns_St_Neutro_2_1) {
            ns_St_Neutro_3_1_1 = ns_St_Neutro_3;
          } else {
            ns_St_Neutro_3_1_0 = ns_St_Neutro_3;
          };
        } else {
          ns_St_Neutro_2_0 = ns_St_Neutro_2;
          if (ns_St_Neutro_2_0) {
            ns_St_Neutro_3_0_1 = ns_St_Neutro_3;
          } else {
            ns_St_Neutro_3_0_0 = ns_St_Neutro_3;
          };
        };
      } else {
        if (mode_St_Seguranca_1) {
          mode_St_Seguranca_2_1 = mode_St_Seguranca_2;
          if (mode_St_Seguranca_2_1) {
            mode_St_Seguranca_3_1_1 = mode_St_Seguranca_3;
          } else {
            mode_St_Seguranca_3_1_0 = mode_St_Seguranca_3;
          };
        } else {
          mode_St_Seguranca_2_0 = mode_St_Seguranca_2;
          if (mode_St_Seguranca_2_0) {
            mode_St_Seguranca_3_0_1 = mode_St_Seguranca_3;
          } else {
            mode_St_Seguranca_3_0_0 = mode_St_Seguranca_3;
          };
        };
        if (ns_St_Seguranca_1) {
          ns_St_Seguranca_2_1 = ns_St_Seguranca_2;
          if (ns_St_Seguranca_2_1) {
            ns_St_Seguranca_3_1_1 = ns_St_Seguranca_3;
          } else {
            ns_St_Seguranca_3_1_0 = ns_St_Seguranca_3;
          };
        } else {
          ns_St_Seguranca_2_0 = ns_St_Seguranca_2;
          if (ns_St_Seguranca_2_0) {
            ns_St_Seguranca_3_0_1 = ns_St_Seguranca_3;
          } else {
            ns_St_Seguranca_3_0_0 = ns_St_Seguranca_3;
          };
        };
      };
    };
  };
  if (s_1) {
    s_2_1 = s_2;
    if (s_2_1) {
      s_3_1_1 = s_3;
    } else {
      s_3_1_0 = s_3;
    };
  } else {
    s_2_0 = s_2;
    if (s_2_0) {
      s_3_0_1 = s_3;
    } else {
      s_3_0_0 = s_3;
    };
  };
  if (!(ck_1_4)) {
    if (ck_2_0) {
      if (ck_3_0_1) {
        if (v_8_1) {
          v_8_2_1 = v_8_2;
          if (v_8_2_1) {
            v_8_3_1_1 = v_8_3;
          } else {
            v_8_3_1_0 = v_8_3;
          };
        } else {
          v_8_2_0 = v_8_2;
          if (v_8_2_0) {
            v_8_3_0_1 = v_8_3;
          } else {
            v_8_3_0_0 = v_8_3;
          };
        };
        if (v_10_1) {
          v_10_2_1 = v_10_2;
          if (v_10_2_1) {
            v_10_3_1_1 = v_10_3;
          } else {
            v_10_3_1_0 = v_10_3;
          };
        } else {
          v_10_2_0 = v_10_2;
          if (v_10_2_0) {
            v_10_3_0_1 = v_10_3;
          } else {
            v_10_3_0_0 = v_10_3;
          };
        };
        if (v_12_1) {
          v_12_2_1 = v_12_2;
          if (v_12_2_1) {
            v_12_3_1_1 = v_12_3;
          } else {
            v_12_3_1_0 = v_12_3;
          };
        } else {
          v_12_2_0 = v_12_2;
          if (v_12_2_0) {
            v_12_3_0_1 = v_12_3;
          } else {
            v_12_3_0_0 = v_12_3;
          };
        };
        if (v_14_1) {
          v_14_2_1 = v_14_2;
          if (v_14_2_1) {
            v_14_3_1_1 = v_14_3;
          } else {
            v_14_3_1_0 = v_14_3;
          };
        } else {
          v_14_2_0 = v_14_2;
          if (v_14_2_0) {
            v_14_3_0_1 = v_14_3;
          } else {
            v_14_3_0_0 = v_14_3;
          };
        };
        if (s_St_Neutro_1) {
          s_St_Neutro_2_1 = s_St_Neutro_2;
          if (s_St_Neutro_2_1) {
            s_St_Neutro_3_1_1 = s_St_Neutro_3;
          } else {
            s_St_Neutro_3_1_0 = s_St_Neutro_3;
          };
        } else {
          s_St_Neutro_2_0 = s_St_Neutro_2;
          if (s_St_Neutro_2_0) {
            s_St_Neutro_3_0_1 = s_St_Neutro_3;
          } else {
            s_St_Neutro_3_0_0 = s_St_Neutro_3;
          };
        };
      } else {
        if (v_1_1) {
          v_2_4_1 = v_2_4;
          if (v_2_4_1) {
            v_3_1_1_1 = v_3_1;
          } else {
            v_3_1_1_0 = v_3_1;
          };
        } else {
          v_2_4_0 = v_2_4;
          if (v_2_4_0) {
            v_3_1_0_1 = v_3_1;
          } else {
            v_3_1_0_0 = v_3_1;
          };
        };
        if (v_2_1) {
          v_2_2_1 = v_2_2;
          if (v_2_2_1) {
            v_2_3_1_1 = v_2_3;
          } else {
            v_2_3_1_0 = v_2_3;
          };
        } else {
          v_2_2_0 = v_2_2;
          if (v_2_2_0) {
            v_2_3_0_1 = v_2_3;
          } else {
            v_2_3_0_0 = v_2_3;
          };
        };
        if (v_4_1) {
          v_4_2_1 = v_4_2;
          if (v_4_2_1) {
            v_4_3_1_1 = v_4_3;
          } else {
            v_4_3_1_0 = v_4_3;
          };
        } else {
          v_4_2_0 = v_4_2;
          if (v_4_2_0) {
            v_4_3_0_1 = v_4_3;
          } else {
            v_4_3_0_0 = v_4_3;
          };
        };
        if (v_6_1) {
          v_6_2_1 = v_6_2;
          if (v_6_2_1) {
            v_6_3_1_1 = v_6_3;
          } else {
            v_6_3_1_0 = v_6_3;
          };
        } else {
          v_6_2_0 = v_6_2;
          if (v_6_2_0) {
            v_6_3_0_1 = v_6_3;
          } else {
            v_6_3_0_0 = v_6_3;
          };
        };
        if (s_St_Seguranca_1) {
          s_St_Seguranca_2_1 = s_St_Seguranca_2;
          if (s_St_Seguranca_2_1) {
            s_St_Seguranca_3_1_1 = s_St_Seguranca_3;
          } else {
            s_St_Seguranca_3_1_0 = s_St_Seguranca_3;
          };
        } else {
          s_St_Seguranca_2_0 = s_St_Seguranca_2;
          if (s_St_Seguranca_2_0) {
            s_St_Seguranca_3_0_1 = s_St_Seguranca_3;
          } else {
            s_St_Seguranca_3_0_0 = s_St_Seguranca_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->v_224 = ns_1;
  self->v_225 = ns_2;
  self->v_226 = ns_3;;
}

void Atividade5__lamp1_reset(Atividade5__lamp1_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Atividade5__lamp1_step(int c1_lamp, int c1, int l1,
                            Atividade5__lamp1_out* _out,
                            Atividade5__lamp1_mem* self) {
  
  int nr_St_1_On;
  int ns_St_1_On_1;
  int estateLamp1_St_1_On;
  int nr_St_1_Off;
  int ns_St_1_Off_1;
  int estateLamp1_St_1_Off;
  int ck_2_1;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_49;
  int v_48;
  int v;
  int r_St_1_On;
  int s_St_1_On_1;
  int r_St_1_Off;
  int s_St_1_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_52 = (c1_lamp||l1);
    v_53 = (v_52&&c1);
    if (v_53) {
      r_St_1_Off = true;
      s_St_1_Off_1 = false;
    } else {
      r_St_1_Off = self->pnr;
      s_St_1_Off_1 = true;
    };
    r = r_St_1_Off;
    s_1 = s_St_1_Off_1;
  } else {
    v_50 = !(c1);
    v_48 = !(l1);
    v = !(c1_lamp);
    v_49 = (v||v_48);
    v_51 = (v_49&&v_50);
    if (v_51) {
      r_St_1_On = true;
    } else {
      r_St_1_On = self->pnr;
    };
    r = r_St_1_On;
    if (v_51) {
      s_St_1_On_1 = true;
    } else {
      s_St_1_On_1 = false;
    };
    s_1 = s_St_1_On_1;
  };
  ck_2_1 = s_1;
  if (ck_2_1) {
    estateLamp1_St_1_Off = false;
    nr_St_1_Off = false;
    ns_St_1_Off_1 = true;
    _out->estateLamp1 = estateLamp1_St_1_Off;
    nr = nr_St_1_Off;
    ns_1 = ns_St_1_Off_1;
  } else {
    estateLamp1_St_1_On = true;
    _out->estateLamp1 = estateLamp1_St_1_On;
    nr_St_1_On = false;
    nr = nr_St_1_On;
    ns_St_1_On_1 = false;
    ns_1 = ns_St_1_On_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Atividade5__lamp2_reset(Atividade5__lamp2_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Atividade5__lamp2_step(int c2_lamp, int c2, int l2,
                            Atividade5__lamp2_out* _out,
                            Atividade5__lamp2_mem* self) {
  
  int nr_St_2_On;
  int ns_St_2_On_1;
  int estateLamp2_St_2_On;
  int nr_St_2_Off;
  int ns_St_2_Off_1;
  int estateLamp2_St_2_Off;
  int ck_3_1;
  int v_59;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v;
  int r_St_2_On;
  int s_St_2_On_1;
  int r_St_2_Off;
  int s_St_2_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_58 = (c2_lamp||l2);
    v_59 = (v_58&&c2);
    if (v_59) {
      r_St_2_Off = true;
      s_St_2_Off_1 = false;
    } else {
      r_St_2_Off = self->pnr;
      s_St_2_Off_1 = true;
    };
    r = r_St_2_Off;
    s_1 = s_St_2_Off_1;
  } else {
    v_56 = !(c2);
    v_54 = !(l2);
    v = !(c2_lamp);
    v_55 = (v||v_54);
    v_57 = (v_55&&v_56);
    if (v_57) {
      r_St_2_On = true;
    } else {
      r_St_2_On = self->pnr;
    };
    r = r_St_2_On;
    if (v_57) {
      s_St_2_On_1 = true;
    } else {
      s_St_2_On_1 = false;
    };
    s_1 = s_St_2_On_1;
  };
  ck_3_1 = s_1;
  if (ck_3_1) {
    estateLamp2_St_2_Off = false;
    nr_St_2_Off = false;
    ns_St_2_Off_1 = true;
    _out->estateLamp2 = estateLamp2_St_2_Off;
    nr = nr_St_2_Off;
    ns_1 = ns_St_2_Off_1;
  } else {
    estateLamp2_St_2_On = true;
    _out->estateLamp2 = estateLamp2_St_2_On;
    nr_St_2_On = false;
    nr = nr_St_2_On;
    ns_St_2_On_1 = false;
    ns_1 = ns_St_2_On_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Atividade5__lamp3_reset(Atividade5__lamp3_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Atividade5__lamp3_step(int c3_lamp, int c3, int l3,
                            Atividade5__lamp3_out* _out,
                            Atividade5__lamp3_mem* self) {
  
  int nr_St_3_On;
  int ns_St_3_On_1;
  int estateLamp3_St_3_On;
  int nr_St_3_Off;
  int ns_St_3_Off_1;
  int estateLamp3_St_3_Off;
  int ck_4_1;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v;
  int r_St_3_On;
  int s_St_3_On_1;
  int r_St_3_Off;
  int s_St_3_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_64 = (c3_lamp||l3);
    v_65 = (v_64&&c3);
    if (v_65) {
      r_St_3_Off = true;
      s_St_3_Off_1 = false;
    } else {
      r_St_3_Off = self->pnr;
      s_St_3_Off_1 = true;
    };
    r = r_St_3_Off;
    s_1 = s_St_3_Off_1;
  } else {
    v_62 = !(c3);
    v_60 = !(l3);
    v = !(c3_lamp);
    v_61 = (v||v_60);
    v_63 = (v_61&&v_62);
    if (v_63) {
      r_St_3_On = true;
    } else {
      r_St_3_On = self->pnr;
    };
    r = r_St_3_On;
    if (v_63) {
      s_St_3_On_1 = true;
    } else {
      s_St_3_On_1 = false;
    };
    s_1 = s_St_3_On_1;
  };
  ck_4_1 = s_1;
  if (ck_4_1) {
    estateLamp3_St_3_Off = false;
    nr_St_3_Off = false;
    ns_St_3_Off_1 = true;
    _out->estateLamp3 = estateLamp3_St_3_Off;
    nr = nr_St_3_Off;
    ns_1 = ns_St_3_Off_1;
  } else {
    estateLamp3_St_3_On = true;
    _out->estateLamp3 = estateLamp3_St_3_On;
    nr_St_3_On = false;
    nr = nr_St_3_On;
    ns_St_3_On_1 = false;
    ns_1 = ns_St_3_On_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Atividade5__lamp4_reset(Atividade5__lamp4_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Atividade5__lamp4_step(int c4_lamp, int c4, int l4,
                            Atividade5__lamp4_out* _out,
                            Atividade5__lamp4_mem* self) {
  
  int nr_St_4_On;
  int ns_St_4_On_1;
  int estateLamp4_St_4_On;
  int nr_St_4_Off;
  int ns_St_4_Off_1;
  int estateLamp4_St_4_Off;
  int ck_5_1;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v;
  int r_St_4_On;
  int s_St_4_On_1;
  int r_St_4_Off;
  int s_St_4_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_70 = (c4_lamp||l4);
    v_71 = (v_70&&c4);
    if (v_71) {
      r_St_4_Off = true;
      s_St_4_Off_1 = false;
    } else {
      r_St_4_Off = self->pnr;
      s_St_4_Off_1 = true;
    };
    r = r_St_4_Off;
    s_1 = s_St_4_Off_1;
  } else {
    v_68 = !(c4);
    v_66 = !(l4);
    v = !(c4_lamp);
    v_67 = (v||v_66);
    v_69 = (v_67&&v_68);
    if (v_69) {
      r_St_4_On = true;
    } else {
      r_St_4_On = self->pnr;
    };
    r = r_St_4_On;
    if (v_69) {
      s_St_4_On_1 = true;
    } else {
      s_St_4_On_1 = false;
    };
    s_1 = s_St_4_On_1;
  };
  ck_5_1 = s_1;
  if (ck_5_1) {
    estateLamp4_St_4_Off = false;
    nr_St_4_Off = false;
    ns_St_4_Off_1 = true;
    _out->estateLamp4 = estateLamp4_St_4_Off;
    nr = nr_St_4_Off;
    ns_1 = ns_St_4_Off_1;
  } else {
    estateLamp4_St_4_On = true;
    _out->estateLamp4 = estateLamp4_St_4_On;
    nr_St_4_On = false;
    nr = nr_St_4_On;
    ns_St_4_On_1 = false;
    ns_1 = ns_St_4_On_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Atividade5__lampExt_reset(Atividade5__lampExt_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Atividade5__lampExt_step(int c_lampExt, int cx, int lx,
                              Atividade5__lampExt_out* _out,
                              Atividade5__lampExt_mem* self) {
  
  int nr_St_5_On;
  int ns_St_5_On_1;
  int estateLampExt_St_5_On;
  int nr_St_5_Off;
  int ns_St_5_Off_1;
  int estateLampExt_St_5_Off;
  int ck_6_1;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int v;
  int r_St_5_On;
  int s_St_5_On_1;
  int r_St_5_Off;
  int s_St_5_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_76 = (c_lampExt||lx);
    v_77 = (v_76&&cx);
    if (v_77) {
      r_St_5_Off = true;
      s_St_5_Off_1 = false;
    } else {
      r_St_5_Off = self->pnr;
      s_St_5_Off_1 = true;
    };
    r = r_St_5_Off;
    s_1 = s_St_5_Off_1;
  } else {
    v_74 = !(cx);
    v_72 = !(lx);
    v = !(c_lampExt);
    v_73 = (v||v_72);
    v_75 = (v_73&&v_74);
    if (v_75) {
      r_St_5_On = true;
    } else {
      r_St_5_On = self->pnr;
    };
    r = r_St_5_On;
    if (v_75) {
      s_St_5_On_1 = true;
    } else {
      s_St_5_On_1 = false;
    };
    s_1 = s_St_5_On_1;
  };
  ck_6_1 = s_1;
  if (ck_6_1) {
    estateLampExt_St_5_Off = false;
    nr_St_5_Off = false;
    ns_St_5_Off_1 = true;
    _out->estateLampExt = estateLampExt_St_5_Off;
    nr = nr_St_5_Off;
    ns_1 = ns_St_5_Off_1;
  } else {
    estateLampExt_St_5_On = true;
    _out->estateLampExt = estateLampExt_St_5_On;
    nr_St_5_On = false;
    nr = nr_St_5_On;
    ns_St_5_On_1 = false;
    ns_1 = ns_St_5_On_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Atividade5__ventiladores_reset(Atividade5__ventiladores_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Atividade5__ventiladores_step(int c_vent, int cv, int lv,
                                   Atividade5__ventiladores_out* _out,
                                   Atividade5__ventiladores_mem* self) {
  
  int nr_St_6_On;
  int ns_St_6_On_1;
  int estateVent_St_6_On;
  int nr_St_6_Off;
  int ns_St_6_Off_1;
  int estateVent_St_6_Off;
  int ck_7_1;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int v;
  int r_St_6_On;
  int s_St_6_On_1;
  int r_St_6_Off;
  int s_St_6_Off_1;
  int s_1;
  int ns_1;
  int r;
  int nr;
  if (self->ck_1) {
    v_82 = (c_vent||lv);
    v_83 = (v_82&&cv);
    if (v_83) {
      r_St_6_Off = true;
      s_St_6_Off_1 = false;
    } else {
      r_St_6_Off = self->pnr;
      s_St_6_Off_1 = true;
    };
    r = r_St_6_Off;
    s_1 = s_St_6_Off_1;
  } else {
    v_80 = !(cv);
    v_78 = !(lv);
    v = !(c_vent);
    v_79 = (v||v_78);
    v_81 = (v_79&&v_80);
    if (v_81) {
      r_St_6_On = true;
    } else {
      r_St_6_On = self->pnr;
    };
    r = r_St_6_On;
    if (v_81) {
      s_St_6_On_1 = true;
    } else {
      s_St_6_On_1 = false;
    };
    s_1 = s_St_6_On_1;
  };
  ck_7_1 = s_1;
  if (ck_7_1) {
    estateVent_St_6_Off = false;
    nr_St_6_Off = false;
    ns_St_6_Off_1 = true;
    _out->estateVent = estateVent_St_6_Off;
    nr = nr_St_6_Off;
    ns_1 = ns_St_6_Off_1;
  } else {
    estateVent_St_6_On = true;
    _out->estateVent = estateVent_St_6_On;
    nr_St_6_On = false;
    nr = nr_St_6_On;
    ns_St_6_On_1 = false;
    ns_1 = ns_St_6_On_1;
  };
  self->pnr = nr;
  self->ck_1 = ns_1;;
}

void Atividade5__instanciador_reset(Atividade5__instanciador_mem* self) {
  self->pnr = false;
  self->ck_20_1 = true;
  self->pnr_1 = false;
  self->ck_18_1 = true;
  self->pnr_2 = false;
  self->ck_16_1 = true;
  self->pnr_3 = false;
  self->ck_14_1 = true;
  self->pnr_4 = false;
  self->ck_12_1 = true;
  self->pnr_5 = false;
  self->ck_10_1 = true;
  self->pnr_6 = false;
  self->v_299 = false;
  self->v_300 = false;
  self->v_301 = false;
}

void Atividade5__instanciador_step(int sexta_input, int ebd_input,
                                   int domingo_input, int domingol_input,
                                   int neutro_input, int seguranca_input,
                                   int l1, int l2, int l3, int l4, int lx,
                                   int lv,
                                   Atividade5__instanciador_out* _out,
                                   Atividade5__instanciador_mem* self) {
  Instanciador_controller__instanciador_controller_out Instanciador_controller__instanciador_controller_out_st;
  
  int nr_St_7_On;
  int ns_St_7_On_1;
  int estateVent_1_St_7_On;
  int nr_St_7_Off;
  int ns_St_7_Off_1;
  int estateVent_1_St_7_Off;
  int ck_21_1;
  int v_181;
  int v_180;
  int v_179;
  int v_178;
  int v_177;
  int v_176;
  int v_175;
  int r_St_7_On;
  int s_St_7_On_1;
  int r_St_7_Off;
  int s_St_7_Off_1;
  int nr_1_St_8_On;
  int ns_1_St_8_On_1;
  int estateLampExt_1_St_8_On;
  int nr_1_St_8_Off;
  int ns_1_St_8_Off_1;
  int estateLampExt_1_St_8_Off;
  int ck_19_1;
  int v_174;
  int v_173;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int v_168;
  int r_1_St_8_On;
  int s_1_St_8_On_1;
  int r_1_St_8_Off;
  int s_1_St_8_Off_1;
  int nr_2_St_9_On;
  int ns_2_St_9_On_1;
  int estateLamp4_1_St_9_On;
  int nr_2_St_9_Off;
  int ns_2_St_9_Off_1;
  int estateLamp4_1_St_9_Off;
  int ck_17_1;
  int v_167;
  int v_166;
  int v_165;
  int v_164;
  int v_163;
  int v_162;
  int v_161;
  int r_2_St_9_On;
  int s_2_St_9_On_1;
  int r_2_St_9_Off;
  int s_2_St_9_Off_1;
  int nr_3_St_10_On;
  int ns_3_St_10_On_1;
  int estateLamp3_1_St_10_On;
  int nr_3_St_10_Off;
  int ns_3_St_10_Off_1;
  int estateLamp3_1_St_10_Off;
  int ck_15_1;
  int v_160;
  int v_159;
  int v_158;
  int v_157;
  int v_156;
  int v_155;
  int v_154;
  int r_3_St_10_On;
  int s_3_St_10_On_1;
  int r_3_St_10_Off;
  int s_3_St_10_Off_1;
  int nr_4_St_11_On;
  int ns_4_St_11_On_1;
  int estateLamp2_1_St_11_On;
  int nr_4_St_11_Off;
  int ns_4_St_11_Off_1;
  int estateLamp2_1_St_11_Off;
  int ck_13_1;
  int v_153;
  int v_152;
  int v_151;
  int v_150;
  int v_149;
  int v_148;
  int v_147;
  int r_4_St_11_On;
  int s_4_St_11_On_1;
  int r_4_St_11_Off;
  int s_4_St_11_Off_1;
  int nr_5_St_12_On;
  int ns_5_St_12_On_1;
  int estateLamp1_1_St_12_On;
  int nr_5_St_12_Off;
  int ns_5_St_12_Off_1;
  int estateLamp1_1_St_12_Off;
  int ck_11_1;
  int v_146;
  int v_145;
  int v_144;
  int v_143;
  int v_142;
  int v_141;
  int v_140;
  int r_5_St_12_On;
  int s_5_St_12_On_1;
  int r_5_St_12_Off;
  int s_5_St_12_Off_1;
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
  int ns_6_St_13_Seguranca_2_0;
  int ns_6_St_13_Seguranca_3_0_0;
  int ns_6_St_13_Seguranca_3_0_1;
  int ns_6_St_13_Seguranca_2_1;
  int ns_6_St_13_Seguranca_3_1_0;
  int ns_6_St_13_Seguranca_3_1_1;
  int mode_St_13_Seguranca_2_0;
  int mode_St_13_Seguranca_3_0_0;
  int mode_St_13_Seguranca_3_0_1;
  int mode_St_13_Seguranca_2_1;
  int mode_St_13_Seguranca_3_1_0;
  int mode_St_13_Seguranca_3_1_1;
  int ns_6_St_13_Neutro_2_0;
  int ns_6_St_13_Neutro_3_0_0;
  int ns_6_St_13_Neutro_3_0_1;
  int ns_6_St_13_Neutro_2_1;
  int ns_6_St_13_Neutro_3_1_0;
  int ns_6_St_13_Neutro_3_1_1;
  int mode_St_13_Neutro_2_0;
  int mode_St_13_Neutro_3_0_0;
  int mode_St_13_Neutro_3_0_1;
  int mode_St_13_Neutro_2_1;
  int mode_St_13_Neutro_3_1_0;
  int mode_St_13_Neutro_3_1_1;
  int ns_6_St_13_DomingoL_2_0;
  int ns_6_St_13_DomingoL_3_0_0;
  int ns_6_St_13_DomingoL_3_0_1;
  int ns_6_St_13_DomingoL_2_1;
  int ns_6_St_13_DomingoL_3_1_0;
  int ns_6_St_13_DomingoL_3_1_1;
  int mode_St_13_DomingoL_2_0;
  int mode_St_13_DomingoL_3_0_0;
  int mode_St_13_DomingoL_3_0_1;
  int mode_St_13_DomingoL_2_1;
  int mode_St_13_DomingoL_3_1_0;
  int mode_St_13_DomingoL_3_1_1;
  int ns_6_St_13_Domingo_2_0;
  int ns_6_St_13_Domingo_3_0_0;
  int ns_6_St_13_Domingo_3_0_1;
  int ns_6_St_13_Domingo_2_1;
  int ns_6_St_13_Domingo_3_1_0;
  int ns_6_St_13_Domingo_3_1_1;
  int mode_St_13_Domingo_2_0;
  int mode_St_13_Domingo_3_0_0;
  int mode_St_13_Domingo_3_0_1;
  int mode_St_13_Domingo_2_1;
  int mode_St_13_Domingo_3_1_0;
  int mode_St_13_Domingo_3_1_1;
  int ns_6_St_13_Ebd_2_0;
  int ns_6_St_13_Ebd_3_0_0;
  int ns_6_St_13_Ebd_3_0_1;
  int ns_6_St_13_Ebd_2_1;
  int ns_6_St_13_Ebd_3_1_0;
  int ns_6_St_13_Ebd_3_1_1;
  int mode_St_13_Ebd_2_0;
  int mode_St_13_Ebd_3_0_0;
  int mode_St_13_Ebd_3_0_1;
  int mode_St_13_Ebd_2_1;
  int mode_St_13_Ebd_3_1_0;
  int mode_St_13_Ebd_3_1_1;
  int ns_6_St_13_Sexta_feira_2_0;
  int ns_6_St_13_Sexta_feira_3_0_0;
  int ns_6_St_13_Sexta_feira_3_0_1;
  int ns_6_St_13_Sexta_feira_2_1;
  int ns_6_St_13_Sexta_feira_3_1_0;
  int ns_6_St_13_Sexta_feira_3_1_1;
  int mode_St_13_Sexta_feira_2_0;
  int mode_St_13_Sexta_feira_3_0_0;
  int mode_St_13_Sexta_feira_3_0_1;
  int mode_St_13_Sexta_feira_2_1;
  int mode_St_13_Sexta_feira_3_1_0;
  int mode_St_13_Sexta_feira_3_1_1;
  int ck_9_2_0;
  int ck_9_3_0_0;
  int ck_9_3_0_1;
  int ck_9_2_1;
  int ck_9_3_1_0;
  int ck_9_3_1_1;
  int nr_6_St_13_Seguranca;
  int ns_6_St_13_Seguranca_3;
  int ns_6_St_13_Seguranca_2;
  int ns_6_St_13_Seguranca_1;
  int mode_St_13_Seguranca_3;
  int mode_St_13_Seguranca_2;
  int mode_St_13_Seguranca_1;
  int nr_6_St_13_Neutro;
  int ns_6_St_13_Neutro_3;
  int ns_6_St_13_Neutro_2;
  int ns_6_St_13_Neutro_1;
  int mode_St_13_Neutro_3;
  int mode_St_13_Neutro_2;
  int mode_St_13_Neutro_1;
  int nr_6_St_13_DomingoL;
  int ns_6_St_13_DomingoL_3;
  int ns_6_St_13_DomingoL_2;
  int ns_6_St_13_DomingoL_1;
  int mode_St_13_DomingoL_3;
  int mode_St_13_DomingoL_2;
  int mode_St_13_DomingoL_1;
  int nr_6_St_13_Domingo;
  int ns_6_St_13_Domingo_3;
  int ns_6_St_13_Domingo_2;
  int ns_6_St_13_Domingo_1;
  int mode_St_13_Domingo_3;
  int mode_St_13_Domingo_2;
  int mode_St_13_Domingo_1;
  int nr_6_St_13_Ebd;
  int ns_6_St_13_Ebd_3;
  int ns_6_St_13_Ebd_2;
  int ns_6_St_13_Ebd_1;
  int mode_St_13_Ebd_3;
  int mode_St_13_Ebd_2;
  int mode_St_13_Ebd_1;
  int nr_6_St_13_Sexta_feira;
  int ns_6_St_13_Sexta_feira_3;
  int ns_6_St_13_Sexta_feira_2;
  int ns_6_St_13_Sexta_feira_1;
  int mode_St_13_Sexta_feira_3;
  int mode_St_13_Sexta_feira_2;
  int mode_St_13_Sexta_feira_1;
  int ck_9_3;
  int ck_9_2;
  int ck_9_1;
  int v_138_2_0;
  int v_138_3_0_0;
  int v_138_3_0_1;
  int v_138_2_1;
  int v_138_3_1_0;
  int v_138_3_1_1;
  int v_136_2_0;
  int v_136_3_0_0;
  int v_136_3_0_1;
  int v_136_2_1;
  int v_136_3_1_0;
  int v_136_3_1_1;
  int v_134_2_0;
  int v_134_3_0_0;
  int v_134_3_0_1;
  int v_134_2_1;
  int v_134_3_1_0;
  int v_134_3_1_1;
  int v_132_2_0;
  int v_132_3_0_0;
  int v_132_3_0_1;
  int v_132_2_1;
  int v_132_3_1_0;
  int v_132_3_1_1;
  int v_139;
  int v_138_3;
  int v_138_2;
  int v_138_1;
  int v_137;
  int v_136_3;
  int v_136_2;
  int v_136_1;
  int v_135;
  int v_134_3;
  int v_134_2;
  int v_134_1;
  int v_133;
  int v_132_3;
  int v_132_2;
  int v_132_1;
  int v_130_2_0;
  int v_130_3_0_0;
  int v_130_3_0_1;
  int v_130_2_1;
  int v_130_3_1_0;
  int v_130_3_1_1;
  int v_128_2_0;
  int v_128_3_0_0;
  int v_128_3_0_1;
  int v_128_2_1;
  int v_128_3_1_0;
  int v_128_3_1_1;
  int v_126_2_0;
  int v_126_3_0_0;
  int v_126_3_0_1;
  int v_126_2_1;
  int v_126_3_1_0;
  int v_126_3_1_1;
  int v_124_2_0;
  int v_124_3_0_0;
  int v_124_3_0_1;
  int v_124_2_1;
  int v_124_3_1_0;
  int v_124_3_1_1;
  int v_131;
  int v_130_3;
  int v_130_2;
  int v_130_1;
  int v_129;
  int v_128_3;
  int v_128_2;
  int v_128_1;
  int v_127;
  int v_126_3;
  int v_126_2;
  int v_126_1;
  int v_125;
  int v_124_3;
  int v_124_2;
  int v_124_1;
  int v_122_2_0;
  int v_122_3_0_0;
  int v_122_3_0_1;
  int v_122_2_1;
  int v_122_3_1_0;
  int v_122_3_1_1;
  int v_120_2_0;
  int v_120_3_0_0;
  int v_120_3_0_1;
  int v_120_2_1;
  int v_120_3_1_0;
  int v_120_3_1_1;
  int v_118_2_0;
  int v_118_3_0_0;
  int v_118_3_0_1;
  int v_118_2_1;
  int v_118_3_1_0;
  int v_118_3_1_1;
  int v_116_2_0;
  int v_116_3_0_0;
  int v_116_3_0_1;
  int v_116_2_1;
  int v_116_3_1_0;
  int v_116_3_1_1;
  int v_123;
  int v_122_3;
  int v_122_2;
  int v_122_1;
  int v_121;
  int v_120_3;
  int v_120_2;
  int v_120_1;
  int v_119;
  int v_118_3;
  int v_118_2;
  int v_118_1;
  int v_117;
  int v_116_3;
  int v_116_2;
  int v_116_1;
  int v_114_2_0;
  int v_114_3_0_0;
  int v_114_3_0_1;
  int v_114_2_1;
  int v_114_3_1_0;
  int v_114_3_1_1;
  int v_112_2_0;
  int v_112_3_0_0;
  int v_112_3_0_1;
  int v_112_2_1;
  int v_112_3_1_0;
  int v_112_3_1_1;
  int v_110_2_0;
  int v_110_3_0_0;
  int v_110_3_0_1;
  int v_110_2_1;
  int v_110_3_1_0;
  int v_110_3_1_1;
  int v_108_2_0;
  int v_108_3_0_0;
  int v_108_3_0_1;
  int v_108_2_1;
  int v_108_3_1_0;
  int v_108_3_1_1;
  int v_115;
  int v_114_3;
  int v_114_2;
  int v_114_1;
  int v_113;
  int v_112_3;
  int v_112_2;
  int v_112_1;
  int v_111;
  int v_110_3;
  int v_110_2;
  int v_110_1;
  int v_109;
  int v_108_3;
  int v_108_2;
  int v_108_1;
  int v_106_2_0;
  int v_106_3_0_0;
  int v_106_3_0_1;
  int v_106_2_1;
  int v_106_3_1_0;
  int v_106_3_1_1;
  int v_104_2_0;
  int v_104_3_0_0;
  int v_104_3_0_1;
  int v_104_2_1;
  int v_104_3_1_0;
  int v_104_3_1_1;
  int v_102_2_0;
  int v_102_3_0_0;
  int v_102_3_0_1;
  int v_102_2_1;
  int v_102_3_1_0;
  int v_102_3_1_1;
  int v_100_2_0;
  int v_100_3_0_0;
  int v_100_3_0_1;
  int v_100_2_1;
  int v_100_3_1_0;
  int v_100_3_1_1;
  int v_107;
  int v_106_3;
  int v_106_2;
  int v_106_1;
  int v_105;
  int v_104_3;
  int v_104_2;
  int v_104_1;
  int v_103;
  int v_102_3;
  int v_102_2;
  int v_102_1;
  int v_101;
  int v_100_3;
  int v_100_2;
  int v_100_1;
  int v_98_2_0;
  int v_98_3_0_0;
  int v_98_3_0_1;
  int v_98_2_1;
  int v_98_3_1_0;
  int v_98_3_1_1;
  int v_96_2_0;
  int v_96_3_0_0;
  int v_96_3_0_1;
  int v_96_2_1;
  int v_96_3_1_0;
  int v_96_3_1_1;
  int v_94_2_0;
  int v_94_3_0_0;
  int v_94_3_0_1;
  int v_94_2_1;
  int v_94_3_1_0;
  int v_94_3_1_1;
  int v_92_2_0;
  int v_92_3_0_0;
  int v_92_3_0_1;
  int v_92_2_1;
  int v_92_3_1_0;
  int v_92_3_1_1;
  int v_99;
  int v_98_3;
  int v_98_2;
  int v_98_1;
  int v_97;
  int v_96_3;
  int v_96_2;
  int v_96_1;
  int v_95;
  int v_94_3;
  int v_94_2;
  int v_94_1;
  int v_93;
  int v_92_3;
  int v_92_2;
  int v_92_1;
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
  int s_6_St_13_Seguranca_2_0;
  int s_6_St_13_Seguranca_3_0_0;
  int s_6_St_13_Seguranca_3_0_1;
  int s_6_St_13_Seguranca_2_1;
  int s_6_St_13_Seguranca_3_1_0;
  int s_6_St_13_Seguranca_3_1_1;
  int s_6_St_13_Neutro_2_0;
  int s_6_St_13_Neutro_3_0_0;
  int s_6_St_13_Neutro_3_0_1;
  int s_6_St_13_Neutro_2_1;
  int s_6_St_13_Neutro_3_1_0;
  int s_6_St_13_Neutro_3_1_1;
  int s_6_St_13_DomingoL_2_0;
  int s_6_St_13_DomingoL_3_0_0;
  int s_6_St_13_DomingoL_3_0_1;
  int s_6_St_13_DomingoL_2_1;
  int s_6_St_13_DomingoL_3_1_0;
  int s_6_St_13_DomingoL_3_1_1;
  int s_6_St_13_Domingo_2_0;
  int s_6_St_13_Domingo_3_0_0;
  int s_6_St_13_Domingo_3_0_1;
  int s_6_St_13_Domingo_2_1;
  int s_6_St_13_Domingo_3_1_0;
  int s_6_St_13_Domingo_3_1_1;
  int s_6_St_13_Ebd_2_0;
  int s_6_St_13_Ebd_3_0_0;
  int s_6_St_13_Ebd_3_0_1;
  int s_6_St_13_Ebd_2_1;
  int s_6_St_13_Ebd_3_1_0;
  int s_6_St_13_Ebd_3_1_1;
  int s_6_St_13_Sexta_feira_2_0;
  int s_6_St_13_Sexta_feira_3_0_0;
  int s_6_St_13_Sexta_feira_3_0_1;
  int s_6_St_13_Sexta_feira_2_1;
  int s_6_St_13_Sexta_feira_3_1_0;
  int s_6_St_13_Sexta_feira_3_1_1;
  int ck_8_2_0;
  int ck_8_3_0_0;
  int ck_8_3_0_1;
  int ck_8_2_1;
  int ck_8_3_1_0;
  int ck_8_3_1_1;
  int r_6_St_13_Seguranca;
  int s_6_St_13_Seguranca_3;
  int s_6_St_13_Seguranca_2;
  int s_6_St_13_Seguranca_1;
  int r_6_St_13_Neutro;
  int s_6_St_13_Neutro_3;
  int s_6_St_13_Neutro_2;
  int s_6_St_13_Neutro_1;
  int r_6_St_13_DomingoL;
  int s_6_St_13_DomingoL_3;
  int s_6_St_13_DomingoL_2;
  int s_6_St_13_DomingoL_1;
  int r_6_St_13_Domingo;
  int s_6_St_13_Domingo_3;
  int s_6_St_13_Domingo_2;
  int s_6_St_13_Domingo_1;
  int r_6_St_13_Ebd;
  int s_6_St_13_Ebd_3;
  int s_6_St_13_Ebd_2;
  int s_6_St_13_Ebd_1;
  int r_6_St_13_Sexta_feira;
  int s_6_St_13_Sexta_feira_3;
  int s_6_St_13_Sexta_feira_2;
  int s_6_St_13_Sexta_feira_1;
  int ck_8_3;
  int ck_8_2;
  int ck_8_1;
  int policy_2_0;
  int policy_3_0_0;
  int policy_3_0_1;
  int policy_2_1;
  int policy_3_1_0;
  int policy_3_1_1;
  int s_6_2_0;
  int s_6_3_0_0;
  int s_6_3_0_1;
  int s_6_2_1;
  int s_6_3_1_0;
  int s_6_3_1_1;
  int ns_6_2_0;
  int ns_6_3_0_0;
  int ns_6_3_0_1;
  int ns_6_2_1;
  int ns_6_3_1_0;
  int ns_6_3_1_1;
  int mode_2_0;
  int mode_3_0_0;
  int mode_3_0_1;
  int mode_2_1;
  int mode_3_1_0;
  int mode_3_1_1;
  int s_6_3;
  int s_6_2;
  int s_6_1;
  int ns_6_3;
  int ns_6_2;
  int ns_6_1;
  int r_6;
  int nr_6;
  int s_5_1;
  int ns_5_1;
  int r_5;
  int nr_5;
  int s_4_1;
  int ns_4_1;
  int r_4;
  int nr_4;
  int s_3_1;
  int ns_3_1;
  int r_3;
  int nr_3;
  int s_2_1;
  int ns_2_1;
  int r_2;
  int nr_2;
  int s_1_1;
  int ns_1_1;
  int r_1;
  int nr_1;
  int s_1_2;
  int ns_1_2;
  int r;
  int nr;
  int c_vent_1;
  int cv_1;
  int lv_1;
  int estateVent_1;
  int c_lampExt_1;
  int cx_1;
  int lx_1;
  int estateLampExt_1;
  int c4_lamp_1;
  int c4_1;
  int l4_1;
  int estateLamp4_1;
  int c3_lamp_1;
  int c3_1;
  int l3_1;
  int estateLamp3_1;
  int c2_lamp_1;
  int c2_1;
  int l2_1;
  int estateLamp2_1;
  int c1_lamp_1;
  int c1_1;
  int l1_1;
  int estateLamp1_1;
  int sexta_input_1;
  int ebd_input_1;
  int domingo_input_1;
  int domingol_input_1;
  int neutro_input_1;
  int seguranca_input_1;
  int mode_3;
  int mode_2;
  int mode_1;
  int v_256;
  int v_255;
  int v_254;
  int v_253;
  int v_252;
  int v_251;
  int ck_1;
  int ck_2;
  int ck_3;
  int regra_SEXTA;
  int regra_EBD;
  int regra_DOMINGO;
  int regra_DOMINGOL;
  int regra_NEUTRO;
  int regra_SEGURANCA;
  int ck_3_1_1;
  int ck_3_1_0;
  int ck_2_1;
  int ck_3_0_1;
  int ck_3_0_0;
  int ck_2_0;
  int regra2;
  int regra1;
  int regra;
  int v;
  int v_84;
  int v_85;
  int v_86;
  int v_87;
  int v_88;
  int v_89;
  int v_90;
  int v_91;
  int c_vent;
  int cv;
  int cx;
  int c4;
  int c3;
  int c2;
  int c1;
  int c_lampExt;
  int c4_lamp;
  int c3_lamp;
  int c2_lamp;
  int c1_lamp;
  lv_1 = lv;
  lx_1 = lx;
  l4_1 = l4;
  l3_1 = l3;
  l2_1 = l2;
  l1_1 = l1;
  sexta_input_1 = sexta_input;
  ebd_input_1 = ebd_input;
  domingo_input_1 = domingo_input;
  domingol_input_1 = domingol_input;
  neutro_input_1 = neutro_input;
  seguranca_input_1 = seguranca_input;
  ck_8_1 = self->v_299;
  ck_8_2 = self->v_300;
  ck_8_3 = self->v_301;
  Instanciador_controller__instanciador_controller_step(sexta_input,
                                                        ebd_input,
                                                        domingo_input,
                                                        domingol_input,
                                                        neutro_input,
                                                        seguranca_input, l1,
                                                        l2, l3, l4, lx, lv,
                                                        self->v_301,
                                                        self->v_300,
                                                        self->v_299,
                                                        self->pnr_6,
                                                        self->ck_10_1,
                                                        self->pnr_5,
                                                        self->ck_12_1,
                                                        self->pnr_4,
                                                        self->ck_14_1,
                                                        self->pnr_3,
                                                        self->ck_16_1,
                                                        self->pnr_2,
                                                        self->ck_18_1,
                                                        self->pnr_1,
                                                        self->ck_20_1,
                                                        self->pnr, true,
                                                        true, true, true,
                                                        true, true, true,
                                                        true, true, true,
                                                        true, true,
                                                        &Instanciador_controller__instanciador_controller_out_st);
  c_vent = Instanciador_controller__instanciador_controller_out_st.instanciador_c_vent;
  cv = Instanciador_controller__instanciador_controller_out_st.instanciador_cv;
  cx = Instanciador_controller__instanciador_controller_out_st.instanciador_cx;
  c4 = Instanciador_controller__instanciador_controller_out_st.instanciador_c4;
  c3 = Instanciador_controller__instanciador_controller_out_st.instanciador_c3;
  c2 = Instanciador_controller__instanciador_controller_out_st.instanciador_c2;
  c1 = Instanciador_controller__instanciador_controller_out_st.instanciador_c1;
  c_lampExt = Instanciador_controller__instanciador_controller_out_st.instanciador_c_lampExt;
  c4_lamp = Instanciador_controller__instanciador_controller_out_st.instanciador_c4_lamp;
  c3_lamp = Instanciador_controller__instanciador_controller_out_st.instanciador_c3_lamp;
  c2_lamp = Instanciador_controller__instanciador_controller_out_st.instanciador_c2_lamp;
  c1_lamp = Instanciador_controller__instanciador_controller_out_st.instanciador_c1_lamp;
  c_vent_1 = c_vent;
  cv_1 = cv;
  c_lampExt_1 = c_lampExt;
  cx_1 = cx;
  c4_lamp_1 = c4_lamp;
  c4_1 = c4;
  c3_lamp_1 = c3_lamp;
  c3_1 = c3;
  c2_lamp_1 = c2_lamp;
  c2_1 = c2;
  c1_lamp_1 = c1_lamp;
  c1_1 = c1;
  if (self->ck_20_1) {
    v_180 = (c_vent_1||lv_1);
    v_181 = (v_180&&cv_1);
    if (v_181) {
      r_St_7_Off = true;
      s_St_7_Off_1 = false;
    } else {
      r_St_7_Off = self->pnr;
      s_St_7_Off_1 = true;
    };
    r = r_St_7_Off;
    s_1_2 = s_St_7_Off_1;
  } else {
    v_178 = !(cv_1);
    v_176 = !(lv_1);
    v_175 = !(c_vent_1);
    v_177 = (v_175||v_176);
    v_179 = (v_177&&v_178);
    if (v_179) {
      r_St_7_On = true;
    } else {
      r_St_7_On = self->pnr;
    };
    r = r_St_7_On;
    if (v_179) {
      s_St_7_On_1 = true;
    } else {
      s_St_7_On_1 = false;
    };
    s_1_2 = s_St_7_On_1;
  };
  ck_21_1 = s_1_2;
  if (ck_21_1) {
    estateVent_1_St_7_Off = false;
    nr_St_7_Off = false;
    ns_St_7_Off_1 = true;
    estateVent_1 = estateVent_1_St_7_Off;
    nr = nr_St_7_Off;
    ns_1_2 = ns_St_7_Off_1;
  } else {
    estateVent_1_St_7_On = true;
    estateVent_1 = estateVent_1_St_7_On;
    nr_St_7_On = false;
    nr = nr_St_7_On;
    ns_St_7_On_1 = false;
    ns_1_2 = ns_St_7_On_1;
  };
  _out->estateVent = estateVent_1;
  if (self->ck_18_1) {
    v_173 = (c_lampExt_1||lx_1);
    v_174 = (v_173&&cx_1);
    if (v_174) {
      r_1_St_8_Off = true;
      s_1_St_8_Off_1 = false;
    } else {
      r_1_St_8_Off = self->pnr_1;
      s_1_St_8_Off_1 = true;
    };
    r_1 = r_1_St_8_Off;
    s_1_1 = s_1_St_8_Off_1;
  } else {
    v_171 = !(cx_1);
    v_169 = !(lx_1);
    v_168 = !(c_lampExt_1);
    v_170 = (v_168||v_169);
    v_172 = (v_170&&v_171);
    if (v_172) {
      r_1_St_8_On = true;
    } else {
      r_1_St_8_On = self->pnr_1;
    };
    r_1 = r_1_St_8_On;
    if (v_172) {
      s_1_St_8_On_1 = true;
    } else {
      s_1_St_8_On_1 = false;
    };
    s_1_1 = s_1_St_8_On_1;
  };
  ck_19_1 = s_1_1;
  if (ck_19_1) {
    estateLampExt_1_St_8_Off = false;
    nr_1_St_8_Off = false;
    ns_1_St_8_Off_1 = true;
    estateLampExt_1 = estateLampExt_1_St_8_Off;
    nr_1 = nr_1_St_8_Off;
    ns_1_1 = ns_1_St_8_Off_1;
  } else {
    estateLampExt_1_St_8_On = true;
    estateLampExt_1 = estateLampExt_1_St_8_On;
    nr_1_St_8_On = false;
    nr_1 = nr_1_St_8_On;
    ns_1_St_8_On_1 = false;
    ns_1_1 = ns_1_St_8_On_1;
  };
  _out->estateLampExt = estateLampExt_1;
  if (self->ck_16_1) {
    v_166 = (c4_lamp_1||l4_1);
    v_167 = (v_166&&c4_1);
    if (v_167) {
      r_2_St_9_Off = true;
      s_2_St_9_Off_1 = false;
    } else {
      r_2_St_9_Off = self->pnr_2;
      s_2_St_9_Off_1 = true;
    };
    r_2 = r_2_St_9_Off;
    s_2_1 = s_2_St_9_Off_1;
  } else {
    v_164 = !(c4_1);
    v_162 = !(l4_1);
    v_161 = !(c4_lamp_1);
    v_163 = (v_161||v_162);
    v_165 = (v_163&&v_164);
    if (v_165) {
      r_2_St_9_On = true;
    } else {
      r_2_St_9_On = self->pnr_2;
    };
    r_2 = r_2_St_9_On;
    if (v_165) {
      s_2_St_9_On_1 = true;
    } else {
      s_2_St_9_On_1 = false;
    };
    s_2_1 = s_2_St_9_On_1;
  };
  ck_17_1 = s_2_1;
  if (ck_17_1) {
    estateLamp4_1_St_9_Off = false;
    nr_2_St_9_Off = false;
    ns_2_St_9_Off_1 = true;
    estateLamp4_1 = estateLamp4_1_St_9_Off;
    nr_2 = nr_2_St_9_Off;
    ns_2_1 = ns_2_St_9_Off_1;
  } else {
    estateLamp4_1_St_9_On = true;
    estateLamp4_1 = estateLamp4_1_St_9_On;
    nr_2_St_9_On = false;
    nr_2 = nr_2_St_9_On;
    ns_2_St_9_On_1 = false;
    ns_2_1 = ns_2_St_9_On_1;
  };
  _out->estateLamp4 = estateLamp4_1;
  v = (_out->estateLampExt||_out->estateLamp4);
  v_84 = !(v);
  if (self->ck_14_1) {
    v_159 = (c3_lamp_1||l3_1);
    v_160 = (v_159&&c3_1);
    if (v_160) {
      r_3_St_10_Off = true;
      s_3_St_10_Off_1 = false;
    } else {
      r_3_St_10_Off = self->pnr_3;
      s_3_St_10_Off_1 = true;
    };
    r_3 = r_3_St_10_Off;
    s_3_1 = s_3_St_10_Off_1;
  } else {
    v_157 = !(c3_1);
    v_155 = !(l3_1);
    v_154 = !(c3_lamp_1);
    v_156 = (v_154||v_155);
    v_158 = (v_156&&v_157);
    if (v_158) {
      r_3_St_10_On = true;
    } else {
      r_3_St_10_On = self->pnr_3;
    };
    r_3 = r_3_St_10_On;
    if (v_158) {
      s_3_St_10_On_1 = true;
    } else {
      s_3_St_10_On_1 = false;
    };
    s_3_1 = s_3_St_10_On_1;
  };
  ck_15_1 = s_3_1;
  if (ck_15_1) {
    estateLamp3_1_St_10_Off = false;
    nr_3_St_10_Off = false;
    ns_3_St_10_Off_1 = true;
    estateLamp3_1 = estateLamp3_1_St_10_Off;
    nr_3 = nr_3_St_10_Off;
    ns_3_1 = ns_3_St_10_Off_1;
  } else {
    estateLamp3_1_St_10_On = true;
    estateLamp3_1 = estateLamp3_1_St_10_On;
    nr_3_St_10_On = false;
    nr_3 = nr_3_St_10_On;
    ns_3_St_10_On_1 = false;
    ns_3_1 = ns_3_St_10_On_1;
  };
  _out->estateLamp3 = estateLamp3_1;
  if (self->ck_12_1) {
    v_152 = (c2_lamp_1||l2_1);
    v_153 = (v_152&&c2_1);
    if (v_153) {
      r_4_St_11_Off = true;
      s_4_St_11_Off_1 = false;
    } else {
      r_4_St_11_Off = self->pnr_4;
      s_4_St_11_Off_1 = true;
    };
    r_4 = r_4_St_11_Off;
    s_4_1 = s_4_St_11_Off_1;
  } else {
    v_150 = !(c2_1);
    v_148 = !(l2_1);
    v_147 = !(c2_lamp_1);
    v_149 = (v_147||v_148);
    v_151 = (v_149&&v_150);
    if (v_151) {
      r_4_St_11_On = true;
    } else {
      r_4_St_11_On = self->pnr_4;
    };
    r_4 = r_4_St_11_On;
    if (v_151) {
      s_4_St_11_On_1 = true;
    } else {
      s_4_St_11_On_1 = false;
    };
    s_4_1 = s_4_St_11_On_1;
  };
  ck_13_1 = s_4_1;
  if (ck_13_1) {
    estateLamp2_1_St_11_Off = false;
    nr_4_St_11_Off = false;
    ns_4_St_11_Off_1 = true;
    estateLamp2_1 = estateLamp2_1_St_11_Off;
    nr_4 = nr_4_St_11_Off;
    ns_4_1 = ns_4_St_11_Off_1;
  } else {
    estateLamp2_1_St_11_On = true;
    estateLamp2_1 = estateLamp2_1_St_11_On;
    nr_4_St_11_On = false;
    nr_4 = nr_4_St_11_On;
    ns_4_St_11_On_1 = false;
    ns_4_1 = ns_4_St_11_On_1;
  };
  _out->estateLamp2 = estateLamp2_1;
  if (self->ck_10_1) {
    v_145 = (c1_lamp_1||l1_1);
    v_146 = (v_145&&c1_1);
    if (v_146) {
      r_5_St_12_Off = true;
      s_5_St_12_Off_1 = false;
    } else {
      r_5_St_12_Off = self->pnr_5;
      s_5_St_12_Off_1 = true;
    };
    r_5 = r_5_St_12_Off;
    s_5_1 = s_5_St_12_Off_1;
  } else {
    v_143 = !(c1_1);
    v_141 = !(l1_1);
    v_140 = !(c1_lamp_1);
    v_142 = (v_140||v_141);
    v_144 = (v_142&&v_143);
    if (v_144) {
      r_5_St_12_On = true;
    } else {
      r_5_St_12_On = self->pnr_5;
    };
    r_5 = r_5_St_12_On;
    if (v_144) {
      s_5_St_12_On_1 = true;
    } else {
      s_5_St_12_On_1 = false;
    };
    s_5_1 = s_5_St_12_On_1;
  };
  ck_11_1 = s_5_1;
  if (ck_11_1) {
    estateLamp1_1_St_12_Off = false;
    nr_5_St_12_Off = false;
    ns_5_St_12_Off_1 = true;
    estateLamp1_1 = estateLamp1_1_St_12_Off;
    nr_5 = nr_5_St_12_Off;
    ns_5_1 = ns_5_St_12_Off_1;
  } else {
    estateLamp1_1_St_12_On = true;
    estateLamp1_1 = estateLamp1_1_St_12_On;
    nr_5_St_12_On = false;
    nr_5 = nr_5_St_12_On;
    ns_5_St_12_On_1 = false;
    ns_5_1 = ns_5_St_12_On_1;
  };
  _out->estateLamp1 = estateLamp1_1;
  v_85 = (_out->estateLamp1&&_out->estateLamp2);
  v_86 = (v_85&&_out->estateLamp3);
  v_87 = (v_86&&_out->estateVent);
  regra2 = (v_84&&v_87);
  v_88 = (_out->estateLamp1&&_out->estateLamp2);
  v_89 = (v_88&&_out->estateLamp3);
  v_90 = (v_89&&_out->estateLamp4);
  v_91 = (v_90&&_out->estateLampExt);
  regra1 = (v_91&&_out->estateVent);
  if (ck_8_1) {
    ck_8_2_1 = ck_8_2;
    if (ck_8_2_1) {
      ck_8_3_1_1 = ck_8_3;
      if (ck_8_3_1_1) {
        if (seguranca_input_1) {
          v_117 = true;
        } else {
          v_117 = self->pnr_6;
        };
        if (neutro_input_1) {
          v_119 = true;
        } else {
          v_119 = v_117;
        };
        if (domingol_input_1) {
          v_121 = true;
        } else {
          v_121 = v_119;
        };
        if (sexta_input_1) {
          v_123 = true;
        } else {
          v_123 = v_121;
        };
        if (ebd_input_1) {
          r_6_St_13_Domingo = true;
        } else {
          r_6_St_13_Domingo = v_123;
        };
        if (seguranca_input_1) {
          v_116_1 = false;
        } else {
          v_116_1 = true;
        };
        if (neutro_input_1) {
          v_118_1 = false;
        } else {
          v_118_1 = v_116_1;
        };
        if (domingol_input_1) {
          v_120_1 = true;
        } else {
          v_120_1 = v_118_1;
        };
        if (sexta_input_1) {
          v_122_1 = false;
        } else {
          v_122_1 = v_120_1;
        };
        if (ebd_input_1) {
          s_6_St_13_Domingo_1 = true;
        } else {
          s_6_St_13_Domingo_1 = v_122_1;
        };
        if (seguranca_input_1) {
          v_116_2 = true;
        } else {
          v_116_2 = true;
        };
        if (neutro_input_1) {
          v_118_2 = true;
        } else {
          v_118_2 = v_116_2;
        };
        if (domingol_input_1) {
          v_120_2 = true;
        } else {
          v_120_2 = v_118_2;
        };
        if (sexta_input_1) {
          v_122_2 = false;
        } else {
          v_122_2 = v_120_2;
        };
        if (ebd_input_1) {
          s_6_St_13_Domingo_2 = false;
        } else {
          s_6_St_13_Domingo_2 = v_122_2;
        };
        if (seguranca_input_1) {
          v_116_3 = false;
        } else {
          v_116_3 = true;
        };
        if (neutro_input_1) {
          v_118_3 = true;
        } else {
          v_118_3 = v_116_3;
        };
        if (domingol_input_1) {
          v_120_3 = false;
        } else {
          v_120_3 = v_118_3;
        };
        if (sexta_input_1) {
          v_122_3 = false;
        } else {
          v_122_3 = v_120_3;
        };
        if (ebd_input_1) {
          s_6_St_13_Domingo_3 = false;
        } else {
          s_6_St_13_Domingo_3 = v_122_3;
        };
        v_320 = r_6_St_13_Domingo;
        v_302 = s_6_St_13_Domingo_1;
        v_303 = s_6_St_13_Domingo_2;
        v_304 = s_6_St_13_Domingo_3;
      } else {
        if (seguranca_input_1) {
          v_109 = true;
        } else {
          v_109 = self->pnr_6;
        };
        if (neutro_input_1) {
          v_111 = true;
        } else {
          v_111 = v_109;
        };
        if (domingo_input_1) {
          v_113 = true;
        } else {
          v_113 = v_111;
        };
        if (sexta_input_1) {
          v_115 = true;
        } else {
          v_115 = v_113;
        };
        if (ebd_input_1) {
          r_6_St_13_DomingoL = true;
        } else {
          r_6_St_13_DomingoL = v_115;
        };
        v_320 = r_6_St_13_DomingoL;
        if (seguranca_input_1) {
          v_108_1 = false;
        } else {
          v_108_1 = true;
        };
        if (neutro_input_1) {
          v_110_1 = false;
        } else {
          v_110_1 = v_108_1;
        };
        if (domingo_input_1) {
          v_112_1 = true;
        } else {
          v_112_1 = v_110_1;
        };
        if (sexta_input_1) {
          v_114_1 = false;
        } else {
          v_114_1 = v_112_1;
        };
        if (ebd_input_1) {
          s_6_St_13_DomingoL_1 = true;
        } else {
          s_6_St_13_DomingoL_1 = v_114_1;
        };
        v_302 = s_6_St_13_DomingoL_1;
        if (seguranca_input_1) {
          v_108_2 = true;
        } else {
          v_108_2 = true;
        };
        if (neutro_input_1) {
          v_110_2 = true;
        } else {
          v_110_2 = v_108_2;
        };
        if (domingo_input_1) {
          v_112_2 = true;
        } else {
          v_112_2 = v_110_2;
        };
        if (sexta_input_1) {
          v_114_2 = false;
        } else {
          v_114_2 = v_112_2;
        };
        if (ebd_input_1) {
          s_6_St_13_DomingoL_2 = false;
        } else {
          s_6_St_13_DomingoL_2 = v_114_2;
        };
        v_303 = s_6_St_13_DomingoL_2;
        if (seguranca_input_1) {
          v_108_3 = false;
        } else {
          v_108_3 = false;
        };
        if (neutro_input_1) {
          v_110_3 = true;
        } else {
          v_110_3 = v_108_3;
        };
        if (domingo_input_1) {
          v_112_3 = true;
        } else {
          v_112_3 = v_110_3;
        };
        if (sexta_input_1) {
          v_114_3 = false;
        } else {
          v_114_3 = v_112_3;
        };
        if (ebd_input_1) {
          s_6_St_13_DomingoL_3 = false;
        } else {
          s_6_St_13_DomingoL_3 = v_114_3;
        };
        v_304 = s_6_St_13_DomingoL_3;
      };
      v_314 = v_302;
      v_315 = v_303;
      v_316 = v_304;
      v_322 = v_320;
      if (ck_8_3_1_1) {
        if (v_116_1) {
          v_116_2_1 = v_116_2;
          if (v_116_2_1) {
            v_116_3_1_1 = v_116_3;
          } else {
            v_116_3_1_0 = v_116_3;
          };
        } else {
          v_116_2_0 = v_116_2;
          if (v_116_2_0) {
            v_116_3_0_1 = v_116_3;
          } else {
            v_116_3_0_0 = v_116_3;
          };
        };
        if (v_118_1) {
          v_118_2_1 = v_118_2;
          if (v_118_2_1) {
            v_118_3_1_1 = v_118_3;
          } else {
            v_118_3_1_0 = v_118_3;
          };
        } else {
          v_118_2_0 = v_118_2;
          if (v_118_2_0) {
            v_118_3_0_1 = v_118_3;
          } else {
            v_118_3_0_0 = v_118_3;
          };
        };
        if (v_120_1) {
          v_120_2_1 = v_120_2;
          if (v_120_2_1) {
            v_120_3_1_1 = v_120_3;
          } else {
            v_120_3_1_0 = v_120_3;
          };
        } else {
          v_120_2_0 = v_120_2;
          if (v_120_2_0) {
            v_120_3_0_1 = v_120_3;
          } else {
            v_120_3_0_0 = v_120_3;
          };
        };
        if (v_122_1) {
          v_122_2_1 = v_122_2;
          if (v_122_2_1) {
            v_122_3_1_1 = v_122_3;
          } else {
            v_122_3_1_0 = v_122_3;
          };
        } else {
          v_122_2_0 = v_122_2;
          if (v_122_2_0) {
            v_122_3_0_1 = v_122_3;
          } else {
            v_122_3_0_0 = v_122_3;
          };
        };
        if (s_6_St_13_Domingo_1) {
          s_6_St_13_Domingo_2_1 = s_6_St_13_Domingo_2;
          if (s_6_St_13_Domingo_2_1) {
            s_6_St_13_Domingo_3_1_1 = s_6_St_13_Domingo_3;
          } else {
            s_6_St_13_Domingo_3_1_0 = s_6_St_13_Domingo_3;
          };
        } else {
          s_6_St_13_Domingo_2_0 = s_6_St_13_Domingo_2;
          if (s_6_St_13_Domingo_2_0) {
            s_6_St_13_Domingo_3_0_1 = s_6_St_13_Domingo_3;
          } else {
            s_6_St_13_Domingo_3_0_0 = s_6_St_13_Domingo_3;
          };
        };
      } else {
        if (v_108_1) {
          v_108_2_1 = v_108_2;
          if (v_108_2_1) {
            v_108_3_1_1 = v_108_3;
          } else {
            v_108_3_1_0 = v_108_3;
          };
        } else {
          v_108_2_0 = v_108_2;
          if (v_108_2_0) {
            v_108_3_0_1 = v_108_3;
          } else {
            v_108_3_0_0 = v_108_3;
          };
        };
        if (v_110_1) {
          v_110_2_1 = v_110_2;
          if (v_110_2_1) {
            v_110_3_1_1 = v_110_3;
          } else {
            v_110_3_1_0 = v_110_3;
          };
        } else {
          v_110_2_0 = v_110_2;
          if (v_110_2_0) {
            v_110_3_0_1 = v_110_3;
          } else {
            v_110_3_0_0 = v_110_3;
          };
        };
        if (v_112_1) {
          v_112_2_1 = v_112_2;
          if (v_112_2_1) {
            v_112_3_1_1 = v_112_3;
          } else {
            v_112_3_1_0 = v_112_3;
          };
        } else {
          v_112_2_0 = v_112_2;
          if (v_112_2_0) {
            v_112_3_0_1 = v_112_3;
          } else {
            v_112_3_0_0 = v_112_3;
          };
        };
        if (v_114_1) {
          v_114_2_1 = v_114_2;
          if (v_114_2_1) {
            v_114_3_1_1 = v_114_3;
          } else {
            v_114_3_1_0 = v_114_3;
          };
        } else {
          v_114_2_0 = v_114_2;
          if (v_114_2_0) {
            v_114_3_0_1 = v_114_3;
          } else {
            v_114_3_0_0 = v_114_3;
          };
        };
        if (s_6_St_13_DomingoL_1) {
          s_6_St_13_DomingoL_2_1 = s_6_St_13_DomingoL_2;
          if (s_6_St_13_DomingoL_2_1) {
            s_6_St_13_DomingoL_3_1_1 = s_6_St_13_DomingoL_3;
          } else {
            s_6_St_13_DomingoL_3_1_0 = s_6_St_13_DomingoL_3;
          };
        } else {
          s_6_St_13_DomingoL_2_0 = s_6_St_13_DomingoL_2;
          if (s_6_St_13_DomingoL_2_0) {
            s_6_St_13_DomingoL_3_0_1 = s_6_St_13_DomingoL_3;
          } else {
            s_6_St_13_DomingoL_3_0_0 = s_6_St_13_DomingoL_3;
          };
        };
      };
    } else {
      ck_8_3_1_0 = ck_8_3;
      if (ck_8_3_1_0) {
        v_321 = true;
        v_305 = true;
        v_306 = true;
        v_307 = true;
      } else {
        if (seguranca_input_1) {
          v_125 = true;
        } else {
          v_125 = self->pnr_6;
        };
        if (neutro_input_1) {
          v_127 = true;
        } else {
          v_127 = v_125;
        };
        if (domingol_input_1) {
          v_129 = true;
        } else {
          v_129 = v_127;
        };
        if (domingo_input_1) {
          v_131 = true;
        } else {
          v_131 = v_129;
        };
        if (sexta_input_1) {
          r_6_St_13_Ebd = true;
        } else {
          r_6_St_13_Ebd = v_131;
        };
        v_321 = r_6_St_13_Ebd;
        if (seguranca_input_1) {
          v_124_1 = false;
        } else {
          v_124_1 = true;
        };
        if (neutro_input_1) {
          v_126_1 = false;
        } else {
          v_126_1 = v_124_1;
        };
        if (domingol_input_1) {
          v_128_1 = true;
        } else {
          v_128_1 = v_126_1;
        };
        if (domingo_input_1) {
          v_130_1 = true;
        } else {
          v_130_1 = v_128_1;
        };
        if (sexta_input_1) {
          s_6_St_13_Ebd_1 = false;
        } else {
          s_6_St_13_Ebd_1 = v_130_1;
        };
        v_305 = s_6_St_13_Ebd_1;
        if (seguranca_input_1) {
          v_124_2 = true;
        } else {
          v_124_2 = false;
        };
        if (neutro_input_1) {
          v_126_2 = true;
        } else {
          v_126_2 = v_124_2;
        };
        if (domingol_input_1) {
          v_128_2 = true;
        } else {
          v_128_2 = v_126_2;
        };
        if (domingo_input_1) {
          v_130_2 = true;
        } else {
          v_130_2 = v_128_2;
        };
        if (sexta_input_1) {
          s_6_St_13_Ebd_2 = false;
        } else {
          s_6_St_13_Ebd_2 = v_130_2;
        };
        v_306 = s_6_St_13_Ebd_2;
        if (seguranca_input_1) {
          v_124_3 = false;
        } else {
          v_124_3 = false;
        };
        if (neutro_input_1) {
          v_126_3 = true;
        } else {
          v_126_3 = v_124_3;
        };
        if (domingol_input_1) {
          v_128_3 = false;
        } else {
          v_128_3 = v_126_3;
        };
        if (domingo_input_1) {
          v_130_3 = true;
        } else {
          v_130_3 = v_128_3;
        };
        if (sexta_input_1) {
          s_6_St_13_Ebd_3 = false;
        } else {
          s_6_St_13_Ebd_3 = v_130_3;
        };
        v_307 = s_6_St_13_Ebd_3;
        if (v_124_1) {
          v_124_2_1 = v_124_2;
          if (v_124_2_1) {
            v_124_3_1_1 = v_124_3;
          } else {
            v_124_3_1_0 = v_124_3;
          };
        } else {
          v_124_2_0 = v_124_2;
          if (v_124_2_0) {
            v_124_3_0_1 = v_124_3;
          } else {
            v_124_3_0_0 = v_124_3;
          };
        };
        if (v_126_1) {
          v_126_2_1 = v_126_2;
          if (v_126_2_1) {
            v_126_3_1_1 = v_126_3;
          } else {
            v_126_3_1_0 = v_126_3;
          };
        } else {
          v_126_2_0 = v_126_2;
          if (v_126_2_0) {
            v_126_3_0_1 = v_126_3;
          } else {
            v_126_3_0_0 = v_126_3;
          };
        };
        if (v_128_1) {
          v_128_2_1 = v_128_2;
          if (v_128_2_1) {
            v_128_3_1_1 = v_128_3;
          } else {
            v_128_3_1_0 = v_128_3;
          };
        } else {
          v_128_2_0 = v_128_2;
          if (v_128_2_0) {
            v_128_3_0_1 = v_128_3;
          } else {
            v_128_3_0_0 = v_128_3;
          };
        };
        if (v_130_1) {
          v_130_2_1 = v_130_2;
          if (v_130_2_1) {
            v_130_3_1_1 = v_130_3;
          } else {
            v_130_3_1_0 = v_130_3;
          };
        } else {
          v_130_2_0 = v_130_2;
          if (v_130_2_0) {
            v_130_3_0_1 = v_130_3;
          } else {
            v_130_3_0_0 = v_130_3;
          };
        };
        if (s_6_St_13_Ebd_1) {
          s_6_St_13_Ebd_2_1 = s_6_St_13_Ebd_2;
          if (s_6_St_13_Ebd_2_1) {
            s_6_St_13_Ebd_3_1_1 = s_6_St_13_Ebd_3;
          } else {
            s_6_St_13_Ebd_3_1_0 = s_6_St_13_Ebd_3;
          };
        } else {
          s_6_St_13_Ebd_2_0 = s_6_St_13_Ebd_2;
          if (s_6_St_13_Ebd_2_0) {
            s_6_St_13_Ebd_3_0_1 = s_6_St_13_Ebd_3;
          } else {
            s_6_St_13_Ebd_3_0_0 = s_6_St_13_Ebd_3;
          };
        };
      };
      v_314 = v_305;
      v_315 = v_306;
      v_316 = v_307;
      v_322 = v_321;
    };
    s_6_1 = v_314;
    s_6_2 = v_315;
    s_6_3 = v_316;
    r_6 = v_322;
  } else {
    ck_8_2_0 = ck_8_2;
    if (ck_8_2_0) {
      ck_8_3_0_1 = ck_8_3;
      if (ck_8_3_0_1) {
        if (seguranca_input_1) {
          v_101 = true;
        } else {
          v_101 = self->pnr_6;
        };
        if (domingo_input_1) {
          v_103 = true;
        } else {
          v_103 = v_101;
        };
        if (domingol_input_1) {
          v_105 = true;
        } else {
          v_105 = v_103;
        };
        if (sexta_input_1) {
          v_107 = true;
        } else {
          v_107 = v_105;
        };
        if (ebd_input_1) {
          r_6_St_13_Neutro = true;
        } else {
          r_6_St_13_Neutro = v_107;
        };
        if (seguranca_input_1) {
          v_100_1 = false;
        } else {
          v_100_1 = false;
        };
        if (domingo_input_1) {
          v_102_1 = true;
        } else {
          v_102_1 = v_100_1;
        };
        if (domingol_input_1) {
          v_104_1 = true;
        } else {
          v_104_1 = v_102_1;
        };
        if (sexta_input_1) {
          v_106_1 = false;
        } else {
          v_106_1 = v_104_1;
        };
        if (ebd_input_1) {
          s_6_St_13_Neutro_1 = true;
        } else {
          s_6_St_13_Neutro_1 = v_106_1;
        };
        if (seguranca_input_1) {
          v_100_2 = true;
        } else {
          v_100_2 = true;
        };
        if (domingo_input_1) {
          v_102_2 = true;
        } else {
          v_102_2 = v_100_2;
        };
        if (domingol_input_1) {
          v_104_2 = true;
        } else {
          v_104_2 = v_102_2;
        };
        if (sexta_input_1) {
          v_106_2 = false;
        } else {
          v_106_2 = v_104_2;
        };
        if (ebd_input_1) {
          s_6_St_13_Neutro_2 = false;
        } else {
          s_6_St_13_Neutro_2 = v_106_2;
        };
        if (seguranca_input_1) {
          v_100_3 = false;
        } else {
          v_100_3 = true;
        };
        if (domingo_input_1) {
          v_102_3 = true;
        } else {
          v_102_3 = v_100_3;
        };
        if (domingol_input_1) {
          v_104_3 = false;
        } else {
          v_104_3 = v_102_3;
        };
        if (sexta_input_1) {
          v_106_3 = false;
        } else {
          v_106_3 = v_104_3;
        };
        if (ebd_input_1) {
          s_6_St_13_Neutro_3 = false;
        } else {
          s_6_St_13_Neutro_3 = v_106_3;
        };
        v_323 = r_6_St_13_Neutro;
        v_308 = s_6_St_13_Neutro_1;
        v_309 = s_6_St_13_Neutro_2;
        v_310 = s_6_St_13_Neutro_3;
      } else {
        if (domingo_input_1) {
          v_93 = true;
        } else {
          v_93 = self->pnr_6;
        };
        if (neutro_input_1) {
          v_95 = true;
        } else {
          v_95 = v_93;
        };
        if (domingol_input_1) {
          v_97 = true;
        } else {
          v_97 = v_95;
        };
        if (sexta_input_1) {
          v_99 = true;
        } else {
          v_99 = v_97;
        };
        if (ebd_input_1) {
          r_6_St_13_Seguranca = true;
        } else {
          r_6_St_13_Seguranca = v_99;
        };
        v_323 = r_6_St_13_Seguranca;
        if (domingo_input_1) {
          v_92_1 = true;
        } else {
          v_92_1 = false;
        };
        if (neutro_input_1) {
          v_94_1 = false;
        } else {
          v_94_1 = v_92_1;
        };
        if (domingol_input_1) {
          v_96_1 = true;
        } else {
          v_96_1 = v_94_1;
        };
        if (sexta_input_1) {
          v_98_1 = false;
        } else {
          v_98_1 = v_96_1;
        };
        if (ebd_input_1) {
          s_6_St_13_Seguranca_1 = true;
        } else {
          s_6_St_13_Seguranca_1 = v_98_1;
        };
        v_308 = s_6_St_13_Seguranca_1;
        if (domingo_input_1) {
          v_92_2 = true;
        } else {
          v_92_2 = true;
        };
        if (neutro_input_1) {
          v_94_2 = true;
        } else {
          v_94_2 = v_92_2;
        };
        if (domingol_input_1) {
          v_96_2 = true;
        } else {
          v_96_2 = v_94_2;
        };
        if (sexta_input_1) {
          v_98_2 = false;
        } else {
          v_98_2 = v_96_2;
        };
        if (ebd_input_1) {
          s_6_St_13_Seguranca_2 = false;
        } else {
          s_6_St_13_Seguranca_2 = v_98_2;
        };
        v_309 = s_6_St_13_Seguranca_2;
        if (domingo_input_1) {
          v_92_3 = true;
        } else {
          v_92_3 = false;
        };
        if (neutro_input_1) {
          v_94_3 = true;
        } else {
          v_94_3 = v_92_3;
        };
        if (domingol_input_1) {
          v_96_3 = false;
        } else {
          v_96_3 = v_94_3;
        };
        if (sexta_input_1) {
          v_98_3 = false;
        } else {
          v_98_3 = v_96_3;
        };
        if (ebd_input_1) {
          s_6_St_13_Seguranca_3 = false;
        } else {
          s_6_St_13_Seguranca_3 = v_98_3;
        };
        v_310 = s_6_St_13_Seguranca_3;
      };
      v_317 = v_308;
      v_318 = v_309;
      v_319 = v_310;
      v_325 = v_323;
    } else {
      ck_8_3_0_0 = ck_8_3;
      if (ck_8_3_0_0) {
        v_324 = true;
        v_311 = true;
        v_312 = true;
        v_313 = true;
      } else {
        if (seguranca_input_1) {
          v_133 = true;
        } else {
          v_133 = self->pnr_6;
        };
        if (neutro_input_1) {
          v_135 = true;
        } else {
          v_135 = v_133;
        };
        if (domingol_input_1) {
          v_137 = true;
        } else {
          v_137 = v_135;
        };
        if (domingo_input_1) {
          v_139 = true;
        } else {
          v_139 = v_137;
        };
        if (ebd_input_1) {
          r_6_St_13_Sexta_feira = true;
        } else {
          r_6_St_13_Sexta_feira = v_139;
        };
        v_324 = r_6_St_13_Sexta_feira;
        if (seguranca_input_1) {
          v_132_1 = false;
        } else {
          v_132_1 = false;
        };
        if (neutro_input_1) {
          v_134_1 = false;
        } else {
          v_134_1 = v_132_1;
        };
        if (domingol_input_1) {
          v_136_1 = true;
        } else {
          v_136_1 = v_134_1;
        };
        if (domingo_input_1) {
          v_138_1 = true;
        } else {
          v_138_1 = v_136_1;
        };
        if (ebd_input_1) {
          s_6_St_13_Sexta_feira_1 = true;
        } else {
          s_6_St_13_Sexta_feira_1 = v_138_1;
        };
        v_311 = s_6_St_13_Sexta_feira_1;
        if (seguranca_input_1) {
          v_132_2 = true;
        } else {
          v_132_2 = false;
        };
        if (neutro_input_1) {
          v_134_2 = true;
        } else {
          v_134_2 = v_132_2;
        };
        if (domingol_input_1) {
          v_136_2 = true;
        } else {
          v_136_2 = v_134_2;
        };
        if (domingo_input_1) {
          v_138_2 = true;
        } else {
          v_138_2 = v_136_2;
        };
        if (ebd_input_1) {
          s_6_St_13_Sexta_feira_2 = false;
        } else {
          s_6_St_13_Sexta_feira_2 = v_138_2;
        };
        v_312 = s_6_St_13_Sexta_feira_2;
        if (seguranca_input_1) {
          v_132_3 = false;
        } else {
          v_132_3 = false;
        };
        if (neutro_input_1) {
          v_134_3 = true;
        } else {
          v_134_3 = v_132_3;
        };
        if (domingol_input_1) {
          v_136_3 = false;
        } else {
          v_136_3 = v_134_3;
        };
        if (domingo_input_1) {
          v_138_3 = true;
        } else {
          v_138_3 = v_136_3;
        };
        if (ebd_input_1) {
          s_6_St_13_Sexta_feira_3 = false;
        } else {
          s_6_St_13_Sexta_feira_3 = v_138_3;
        };
        v_313 = s_6_St_13_Sexta_feira_3;
        if (v_132_1) {
          v_132_2_1 = v_132_2;
          if (v_132_2_1) {
            v_132_3_1_1 = v_132_3;
          } else {
            v_132_3_1_0 = v_132_3;
          };
        } else {
          v_132_2_0 = v_132_2;
          if (v_132_2_0) {
            v_132_3_0_1 = v_132_3;
          } else {
            v_132_3_0_0 = v_132_3;
          };
        };
        if (v_134_1) {
          v_134_2_1 = v_134_2;
          if (v_134_2_1) {
            v_134_3_1_1 = v_134_3;
          } else {
            v_134_3_1_0 = v_134_3;
          };
        } else {
          v_134_2_0 = v_134_2;
          if (v_134_2_0) {
            v_134_3_0_1 = v_134_3;
          } else {
            v_134_3_0_0 = v_134_3;
          };
        };
        if (v_136_1) {
          v_136_2_1 = v_136_2;
          if (v_136_2_1) {
            v_136_3_1_1 = v_136_3;
          } else {
            v_136_3_1_0 = v_136_3;
          };
        } else {
          v_136_2_0 = v_136_2;
          if (v_136_2_0) {
            v_136_3_0_1 = v_136_3;
          } else {
            v_136_3_0_0 = v_136_3;
          };
        };
        if (v_138_1) {
          v_138_2_1 = v_138_2;
          if (v_138_2_1) {
            v_138_3_1_1 = v_138_3;
          } else {
            v_138_3_1_0 = v_138_3;
          };
        } else {
          v_138_2_0 = v_138_2;
          if (v_138_2_0) {
            v_138_3_0_1 = v_138_3;
          } else {
            v_138_3_0_0 = v_138_3;
          };
        };
        if (s_6_St_13_Sexta_feira_1) {
          s_6_St_13_Sexta_feira_2_1 = s_6_St_13_Sexta_feira_2;
          if (s_6_St_13_Sexta_feira_2_1) {
            s_6_St_13_Sexta_feira_3_1_1 = s_6_St_13_Sexta_feira_3;
          } else {
            s_6_St_13_Sexta_feira_3_1_0 = s_6_St_13_Sexta_feira_3;
          };
        } else {
          s_6_St_13_Sexta_feira_2_0 = s_6_St_13_Sexta_feira_2;
          if (s_6_St_13_Sexta_feira_2_0) {
            s_6_St_13_Sexta_feira_3_0_1 = s_6_St_13_Sexta_feira_3;
          } else {
            s_6_St_13_Sexta_feira_3_0_0 = s_6_St_13_Sexta_feira_3;
          };
        };
      };
      v_317 = v_311;
      v_318 = v_312;
      v_319 = v_313;
      v_325 = v_324;
    };
    s_6_1 = v_317;
    s_6_2 = v_318;
    s_6_3 = v_319;
    r_6 = v_325;
  };
  ck_9_1 = s_6_1;
  ck_9_2 = s_6_2;
  ck_9_3 = s_6_3;
  if (ck_9_1) {
    ck_9_2_1 = ck_9_2;
    if (ck_9_2_1) {
      ck_9_3_1_1 = ck_9_3;
      if (ck_9_3_1_1) {
        mode_St_13_Domingo_1 = false;
        mode_St_13_Domingo_2 = true;
        mode_St_13_Domingo_3 = true;
        nr_6_St_13_Domingo = false;
        ns_6_St_13_Domingo_1 = true;
        ns_6_St_13_Domingo_2 = true;
        ns_6_St_13_Domingo_3 = true;
        v_257 = mode_St_13_Domingo_1;
        v_258 = mode_St_13_Domingo_2;
        v_259 = mode_St_13_Domingo_3;
        v_293 = nr_6_St_13_Domingo;
        v_275 = ns_6_St_13_Domingo_1;
        v_276 = ns_6_St_13_Domingo_2;
        v_277 = ns_6_St_13_Domingo_3;
      } else {
        mode_St_13_DomingoL_1 = true;
        v_257 = mode_St_13_DomingoL_1;
        mode_St_13_DomingoL_2 = false;
        v_258 = mode_St_13_DomingoL_2;
        mode_St_13_DomingoL_3 = false;
        v_259 = mode_St_13_DomingoL_3;
        nr_6_St_13_DomingoL = false;
        v_293 = nr_6_St_13_DomingoL;
        ns_6_St_13_DomingoL_1 = true;
        v_275 = ns_6_St_13_DomingoL_1;
        ns_6_St_13_DomingoL_2 = true;
        v_276 = ns_6_St_13_DomingoL_2;
        ns_6_St_13_DomingoL_3 = false;
        v_277 = ns_6_St_13_DomingoL_3;
      };
      v_269 = v_257;
      v_270 = v_258;
      v_271 = v_259;
      v_287 = v_275;
      v_288 = v_276;
      v_289 = v_277;
      v_295 = v_293;
      if (ck_9_3_1_1) {
        if (mode_St_13_Domingo_1) {
          mode_St_13_Domingo_2_1 = mode_St_13_Domingo_2;
          if (mode_St_13_Domingo_2_1) {
            mode_St_13_Domingo_3_1_1 = mode_St_13_Domingo_3;
          } else {
            mode_St_13_Domingo_3_1_0 = mode_St_13_Domingo_3;
          };
        } else {
          mode_St_13_Domingo_2_0 = mode_St_13_Domingo_2;
          if (mode_St_13_Domingo_2_0) {
            mode_St_13_Domingo_3_0_1 = mode_St_13_Domingo_3;
          } else {
            mode_St_13_Domingo_3_0_0 = mode_St_13_Domingo_3;
          };
        };
        if (ns_6_St_13_Domingo_1) {
          ns_6_St_13_Domingo_2_1 = ns_6_St_13_Domingo_2;
          if (ns_6_St_13_Domingo_2_1) {
            ns_6_St_13_Domingo_3_1_1 = ns_6_St_13_Domingo_3;
          } else {
            ns_6_St_13_Domingo_3_1_0 = ns_6_St_13_Domingo_3;
          };
        } else {
          ns_6_St_13_Domingo_2_0 = ns_6_St_13_Domingo_2;
          if (ns_6_St_13_Domingo_2_0) {
            ns_6_St_13_Domingo_3_0_1 = ns_6_St_13_Domingo_3;
          } else {
            ns_6_St_13_Domingo_3_0_0 = ns_6_St_13_Domingo_3;
          };
        };
      } else {
        if (mode_St_13_DomingoL_1) {
          mode_St_13_DomingoL_2_1 = mode_St_13_DomingoL_2;
          if (mode_St_13_DomingoL_2_1) {
            mode_St_13_DomingoL_3_1_1 = mode_St_13_DomingoL_3;
          } else {
            mode_St_13_DomingoL_3_1_0 = mode_St_13_DomingoL_3;
          };
        } else {
          mode_St_13_DomingoL_2_0 = mode_St_13_DomingoL_2;
          if (mode_St_13_DomingoL_2_0) {
            mode_St_13_DomingoL_3_0_1 = mode_St_13_DomingoL_3;
          } else {
            mode_St_13_DomingoL_3_0_0 = mode_St_13_DomingoL_3;
          };
        };
        if (ns_6_St_13_DomingoL_1) {
          ns_6_St_13_DomingoL_2_1 = ns_6_St_13_DomingoL_2;
          if (ns_6_St_13_DomingoL_2_1) {
            ns_6_St_13_DomingoL_3_1_1 = ns_6_St_13_DomingoL_3;
          } else {
            ns_6_St_13_DomingoL_3_1_0 = ns_6_St_13_DomingoL_3;
          };
        } else {
          ns_6_St_13_DomingoL_2_0 = ns_6_St_13_DomingoL_2;
          if (ns_6_St_13_DomingoL_2_0) {
            ns_6_St_13_DomingoL_3_0_1 = ns_6_St_13_DomingoL_3;
          } else {
            ns_6_St_13_DomingoL_3_0_0 = ns_6_St_13_DomingoL_3;
          };
        };
      };
    } else {
      ck_9_3_1_0 = ck_9_3;
      if (ck_9_3_1_0) {
        v_260 = true;
        v_261 = true;
        v_262 = true;
        v_294 = true;
        v_278 = true;
        v_279 = true;
        v_280 = true;
      } else {
        mode_St_13_Ebd_1 = false;
        v_260 = mode_St_13_Ebd_1;
        mode_St_13_Ebd_2 = true;
        v_261 = mode_St_13_Ebd_2;
        mode_St_13_Ebd_3 = false;
        v_262 = mode_St_13_Ebd_3;
        nr_6_St_13_Ebd = false;
        v_294 = nr_6_St_13_Ebd;
        ns_6_St_13_Ebd_1 = true;
        v_278 = ns_6_St_13_Ebd_1;
        ns_6_St_13_Ebd_2 = false;
        v_279 = ns_6_St_13_Ebd_2;
        ns_6_St_13_Ebd_3 = false;
        v_280 = ns_6_St_13_Ebd_3;
        if (mode_St_13_Ebd_1) {
          mode_St_13_Ebd_2_1 = mode_St_13_Ebd_2;
          if (mode_St_13_Ebd_2_1) {
            mode_St_13_Ebd_3_1_1 = mode_St_13_Ebd_3;
          } else {
            mode_St_13_Ebd_3_1_0 = mode_St_13_Ebd_3;
          };
        } else {
          mode_St_13_Ebd_2_0 = mode_St_13_Ebd_2;
          if (mode_St_13_Ebd_2_0) {
            mode_St_13_Ebd_3_0_1 = mode_St_13_Ebd_3;
          } else {
            mode_St_13_Ebd_3_0_0 = mode_St_13_Ebd_3;
          };
        };
        if (ns_6_St_13_Ebd_1) {
          ns_6_St_13_Ebd_2_1 = ns_6_St_13_Ebd_2;
          if (ns_6_St_13_Ebd_2_1) {
            ns_6_St_13_Ebd_3_1_1 = ns_6_St_13_Ebd_3;
          } else {
            ns_6_St_13_Ebd_3_1_0 = ns_6_St_13_Ebd_3;
          };
        } else {
          ns_6_St_13_Ebd_2_0 = ns_6_St_13_Ebd_2;
          if (ns_6_St_13_Ebd_2_0) {
            ns_6_St_13_Ebd_3_0_1 = ns_6_St_13_Ebd_3;
          } else {
            ns_6_St_13_Ebd_3_0_0 = ns_6_St_13_Ebd_3;
          };
        };
      };
      v_269 = v_260;
      v_270 = v_261;
      v_271 = v_262;
      v_287 = v_278;
      v_288 = v_279;
      v_289 = v_280;
      v_295 = v_294;
    };
    mode_1 = v_269;
    mode_2 = v_270;
    mode_3 = v_271;
    ns_6_1 = v_287;
    ns_6_2 = v_288;
    ns_6_3 = v_289;
    nr_6 = v_295;
  } else {
    ck_9_2_0 = ck_9_2;
    if (ck_9_2_0) {
      ck_9_3_0_1 = ck_9_3;
      if (ck_9_3_0_1) {
        mode_St_13_Neutro_1 = true;
        mode_St_13_Neutro_2 = true;
        mode_St_13_Neutro_3 = false;
        nr_6_St_13_Neutro = false;
        ns_6_St_13_Neutro_1 = false;
        ns_6_St_13_Neutro_2 = true;
        ns_6_St_13_Neutro_3 = true;
        v_263 = mode_St_13_Neutro_1;
        v_264 = mode_St_13_Neutro_2;
        v_265 = mode_St_13_Neutro_3;
        v_296 = nr_6_St_13_Neutro;
        v_281 = ns_6_St_13_Neutro_1;
        v_282 = ns_6_St_13_Neutro_2;
        v_283 = ns_6_St_13_Neutro_3;
      } else {
        mode_St_13_Seguranca_1 = true;
        v_263 = mode_St_13_Seguranca_1;
        mode_St_13_Seguranca_2 = true;
        v_264 = mode_St_13_Seguranca_2;
        mode_St_13_Seguranca_3 = true;
        v_265 = mode_St_13_Seguranca_3;
        nr_6_St_13_Seguranca = false;
        v_296 = nr_6_St_13_Seguranca;
        ns_6_St_13_Seguranca_1 = false;
        v_281 = ns_6_St_13_Seguranca_1;
        ns_6_St_13_Seguranca_2 = true;
        v_282 = ns_6_St_13_Seguranca_2;
        ns_6_St_13_Seguranca_3 = false;
        v_283 = ns_6_St_13_Seguranca_3;
      };
      v_272 = v_263;
      v_273 = v_264;
      v_274 = v_265;
      v_290 = v_281;
      v_291 = v_282;
      v_292 = v_283;
      v_298 = v_296;
    } else {
      ck_9_3_0_0 = ck_9_3;
      if (ck_9_3_0_0) {
        v_266 = true;
        v_267 = true;
        v_268 = true;
        v_297 = true;
        v_284 = true;
        v_285 = true;
        v_286 = true;
      } else {
        mode_St_13_Sexta_feira_1 = false;
        v_266 = mode_St_13_Sexta_feira_1;
        mode_St_13_Sexta_feira_2 = false;
        v_267 = mode_St_13_Sexta_feira_2;
        mode_St_13_Sexta_feira_3 = false;
        v_268 = mode_St_13_Sexta_feira_3;
        nr_6_St_13_Sexta_feira = false;
        v_297 = nr_6_St_13_Sexta_feira;
        ns_6_St_13_Sexta_feira_1 = false;
        v_284 = ns_6_St_13_Sexta_feira_1;
        ns_6_St_13_Sexta_feira_2 = false;
        v_285 = ns_6_St_13_Sexta_feira_2;
        ns_6_St_13_Sexta_feira_3 = false;
        v_286 = ns_6_St_13_Sexta_feira_3;
        if (mode_St_13_Sexta_feira_1) {
          mode_St_13_Sexta_feira_2_1 = mode_St_13_Sexta_feira_2;
          if (mode_St_13_Sexta_feira_2_1) {
            mode_St_13_Sexta_feira_3_1_1 = mode_St_13_Sexta_feira_3;
          } else {
            mode_St_13_Sexta_feira_3_1_0 = mode_St_13_Sexta_feira_3;
          };
        } else {
          mode_St_13_Sexta_feira_2_0 = mode_St_13_Sexta_feira_2;
          if (mode_St_13_Sexta_feira_2_0) {
            mode_St_13_Sexta_feira_3_0_1 = mode_St_13_Sexta_feira_3;
          } else {
            mode_St_13_Sexta_feira_3_0_0 = mode_St_13_Sexta_feira_3;
          };
        };
        if (ns_6_St_13_Sexta_feira_1) {
          ns_6_St_13_Sexta_feira_2_1 = ns_6_St_13_Sexta_feira_2;
          if (ns_6_St_13_Sexta_feira_2_1) {
            ns_6_St_13_Sexta_feira_3_1_1 = ns_6_St_13_Sexta_feira_3;
          } else {
            ns_6_St_13_Sexta_feira_3_1_0 = ns_6_St_13_Sexta_feira_3;
          };
        } else {
          ns_6_St_13_Sexta_feira_2_0 = ns_6_St_13_Sexta_feira_2;
          if (ns_6_St_13_Sexta_feira_2_0) {
            ns_6_St_13_Sexta_feira_3_0_1 = ns_6_St_13_Sexta_feira_3;
          } else {
            ns_6_St_13_Sexta_feira_3_0_0 = ns_6_St_13_Sexta_feira_3;
          };
        };
      };
      v_272 = v_266;
      v_273 = v_267;
      v_274 = v_268;
      v_290 = v_284;
      v_291 = v_285;
      v_292 = v_286;
      v_298 = v_297;
    };
    mode_1 = v_272;
    mode_2 = v_273;
    mode_3 = v_274;
    ns_6_1 = v_290;
    ns_6_2 = v_291;
    ns_6_3 = v_292;
    nr_6 = v_298;
  };
  _out->policy_1 = mode_1;
  ck_1 = _out->policy_1;
  _out->policy_2 = mode_2;
  ck_2 = _out->policy_2;
  _out->policy_3 = mode_3;
  ck_3 = _out->policy_3;
  if (ck_1) {
    ck_2_1 = ck_2;
    if (ck_2_1) {
      ck_3_1_1 = ck_3;
      if (ck_3_1_1) {
        regra_SEGURANCA = regra2;
        v_255 = regra_SEGURANCA;
      } else {
        regra_NEUTRO = regra2;
        v_255 = regra_NEUTRO;
      };
      v_256 = v_255;
    } else {
      ck_3_1_0 = ck_3;
      if (ck_3_1_0) {
        v_254 = true;
      } else {
        regra_DOMINGOL = regra2;
        v_254 = regra_DOMINGOL;
      };
      v_256 = v_254;
    };
    regra = v_256;
  } else {
    ck_2_0 = ck_2;
    if (ck_2_0) {
      ck_3_0_1 = ck_3;
      if (ck_3_0_1) {
        regra_DOMINGO = regra2;
        v_252 = regra_DOMINGO;
      } else {
        regra_EBD = regra2;
        v_252 = regra_EBD;
      };
      v_253 = v_252;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_251 = true;
      } else {
        regra_SEXTA = regra1;
        v_251 = regra_SEXTA;
      };
      v_253 = v_251;
    };
    regra = v_253;
  };
  if (_out->policy_1) {
    policy_2_1 = _out->policy_2;
    if (policy_2_1) {
      policy_3_1_1 = _out->policy_3;
    } else {
      policy_3_1_0 = _out->policy_3;
    };
  } else {
    policy_2_0 = _out->policy_2;
    if (policy_2_0) {
      policy_3_0_1 = _out->policy_3;
    } else {
      policy_3_0_0 = _out->policy_3;
    };
  };
  if (mode_1) {
    mode_2_1 = mode_2;
    if (mode_2_1) {
      mode_3_1_1 = mode_3;
    } else {
      mode_3_1_0 = mode_3;
    };
  } else {
    mode_2_0 = mode_2;
    if (mode_2_0) {
      mode_3_0_1 = mode_3;
    } else {
      mode_3_0_0 = mode_3;
    };
  };
  if (ns_6_1) {
    ns_6_2_1 = ns_6_2;
    if (ns_6_2_1) {
      ns_6_3_1_1 = ns_6_3;
    } else {
      ns_6_3_1_0 = ns_6_3;
    };
  } else {
    ns_6_2_0 = ns_6_2;
    if (ns_6_2_0) {
      ns_6_3_0_1 = ns_6_3;
    } else {
      ns_6_3_0_0 = ns_6_3;
    };
  };
  if (!(ck_9_1)) {
    if (ck_9_2_0) {
      if (ck_9_3_0_1) {
        if (mode_St_13_Neutro_1) {
          mode_St_13_Neutro_2_1 = mode_St_13_Neutro_2;
          if (mode_St_13_Neutro_2_1) {
            mode_St_13_Neutro_3_1_1 = mode_St_13_Neutro_3;
          } else {
            mode_St_13_Neutro_3_1_0 = mode_St_13_Neutro_3;
          };
        } else {
          mode_St_13_Neutro_2_0 = mode_St_13_Neutro_2;
          if (mode_St_13_Neutro_2_0) {
            mode_St_13_Neutro_3_0_1 = mode_St_13_Neutro_3;
          } else {
            mode_St_13_Neutro_3_0_0 = mode_St_13_Neutro_3;
          };
        };
        if (ns_6_St_13_Neutro_1) {
          ns_6_St_13_Neutro_2_1 = ns_6_St_13_Neutro_2;
          if (ns_6_St_13_Neutro_2_1) {
            ns_6_St_13_Neutro_3_1_1 = ns_6_St_13_Neutro_3;
          } else {
            ns_6_St_13_Neutro_3_1_0 = ns_6_St_13_Neutro_3;
          };
        } else {
          ns_6_St_13_Neutro_2_0 = ns_6_St_13_Neutro_2;
          if (ns_6_St_13_Neutro_2_0) {
            ns_6_St_13_Neutro_3_0_1 = ns_6_St_13_Neutro_3;
          } else {
            ns_6_St_13_Neutro_3_0_0 = ns_6_St_13_Neutro_3;
          };
        };
      } else {
        if (mode_St_13_Seguranca_1) {
          mode_St_13_Seguranca_2_1 = mode_St_13_Seguranca_2;
          if (mode_St_13_Seguranca_2_1) {
            mode_St_13_Seguranca_3_1_1 = mode_St_13_Seguranca_3;
          } else {
            mode_St_13_Seguranca_3_1_0 = mode_St_13_Seguranca_3;
          };
        } else {
          mode_St_13_Seguranca_2_0 = mode_St_13_Seguranca_2;
          if (mode_St_13_Seguranca_2_0) {
            mode_St_13_Seguranca_3_0_1 = mode_St_13_Seguranca_3;
          } else {
            mode_St_13_Seguranca_3_0_0 = mode_St_13_Seguranca_3;
          };
        };
        if (ns_6_St_13_Seguranca_1) {
          ns_6_St_13_Seguranca_2_1 = ns_6_St_13_Seguranca_2;
          if (ns_6_St_13_Seguranca_2_1) {
            ns_6_St_13_Seguranca_3_1_1 = ns_6_St_13_Seguranca_3;
          } else {
            ns_6_St_13_Seguranca_3_1_0 = ns_6_St_13_Seguranca_3;
          };
        } else {
          ns_6_St_13_Seguranca_2_0 = ns_6_St_13_Seguranca_2;
          if (ns_6_St_13_Seguranca_2_0) {
            ns_6_St_13_Seguranca_3_0_1 = ns_6_St_13_Seguranca_3;
          } else {
            ns_6_St_13_Seguranca_3_0_0 = ns_6_St_13_Seguranca_3;
          };
        };
      };
    };
  };
  if (s_6_1) {
    s_6_2_1 = s_6_2;
    if (s_6_2_1) {
      s_6_3_1_1 = s_6_3;
    } else {
      s_6_3_1_0 = s_6_3;
    };
  } else {
    s_6_2_0 = s_6_2;
    if (s_6_2_0) {
      s_6_3_0_1 = s_6_3;
    } else {
      s_6_3_0_0 = s_6_3;
    };
  };
  if (!(ck_8_1)) {
    if (ck_8_2_0) {
      if (ck_8_3_0_1) {
        if (v_100_1) {
          v_100_2_1 = v_100_2;
          if (v_100_2_1) {
            v_100_3_1_1 = v_100_3;
          } else {
            v_100_3_1_0 = v_100_3;
          };
        } else {
          v_100_2_0 = v_100_2;
          if (v_100_2_0) {
            v_100_3_0_1 = v_100_3;
          } else {
            v_100_3_0_0 = v_100_3;
          };
        };
        if (v_102_1) {
          v_102_2_1 = v_102_2;
          if (v_102_2_1) {
            v_102_3_1_1 = v_102_3;
          } else {
            v_102_3_1_0 = v_102_3;
          };
        } else {
          v_102_2_0 = v_102_2;
          if (v_102_2_0) {
            v_102_3_0_1 = v_102_3;
          } else {
            v_102_3_0_0 = v_102_3;
          };
        };
        if (v_104_1) {
          v_104_2_1 = v_104_2;
          if (v_104_2_1) {
            v_104_3_1_1 = v_104_3;
          } else {
            v_104_3_1_0 = v_104_3;
          };
        } else {
          v_104_2_0 = v_104_2;
          if (v_104_2_0) {
            v_104_3_0_1 = v_104_3;
          } else {
            v_104_3_0_0 = v_104_3;
          };
        };
        if (v_106_1) {
          v_106_2_1 = v_106_2;
          if (v_106_2_1) {
            v_106_3_1_1 = v_106_3;
          } else {
            v_106_3_1_0 = v_106_3;
          };
        } else {
          v_106_2_0 = v_106_2;
          if (v_106_2_0) {
            v_106_3_0_1 = v_106_3;
          } else {
            v_106_3_0_0 = v_106_3;
          };
        };
        if (s_6_St_13_Neutro_1) {
          s_6_St_13_Neutro_2_1 = s_6_St_13_Neutro_2;
          if (s_6_St_13_Neutro_2_1) {
            s_6_St_13_Neutro_3_1_1 = s_6_St_13_Neutro_3;
          } else {
            s_6_St_13_Neutro_3_1_0 = s_6_St_13_Neutro_3;
          };
        } else {
          s_6_St_13_Neutro_2_0 = s_6_St_13_Neutro_2;
          if (s_6_St_13_Neutro_2_0) {
            s_6_St_13_Neutro_3_0_1 = s_6_St_13_Neutro_3;
          } else {
            s_6_St_13_Neutro_3_0_0 = s_6_St_13_Neutro_3;
          };
        };
      } else {
        if (v_92_1) {
          v_92_2_1 = v_92_2;
          if (v_92_2_1) {
            v_92_3_1_1 = v_92_3;
          } else {
            v_92_3_1_0 = v_92_3;
          };
        } else {
          v_92_2_0 = v_92_2;
          if (v_92_2_0) {
            v_92_3_0_1 = v_92_3;
          } else {
            v_92_3_0_0 = v_92_3;
          };
        };
        if (v_94_1) {
          v_94_2_1 = v_94_2;
          if (v_94_2_1) {
            v_94_3_1_1 = v_94_3;
          } else {
            v_94_3_1_0 = v_94_3;
          };
        } else {
          v_94_2_0 = v_94_2;
          if (v_94_2_0) {
            v_94_3_0_1 = v_94_3;
          } else {
            v_94_3_0_0 = v_94_3;
          };
        };
        if (v_96_1) {
          v_96_2_1 = v_96_2;
          if (v_96_2_1) {
            v_96_3_1_1 = v_96_3;
          } else {
            v_96_3_1_0 = v_96_3;
          };
        } else {
          v_96_2_0 = v_96_2;
          if (v_96_2_0) {
            v_96_3_0_1 = v_96_3;
          } else {
            v_96_3_0_0 = v_96_3;
          };
        };
        if (v_98_1) {
          v_98_2_1 = v_98_2;
          if (v_98_2_1) {
            v_98_3_1_1 = v_98_3;
          } else {
            v_98_3_1_0 = v_98_3;
          };
        } else {
          v_98_2_0 = v_98_2;
          if (v_98_2_0) {
            v_98_3_0_1 = v_98_3;
          } else {
            v_98_3_0_0 = v_98_3;
          };
        };
        if (s_6_St_13_Seguranca_1) {
          s_6_St_13_Seguranca_2_1 = s_6_St_13_Seguranca_2;
          if (s_6_St_13_Seguranca_2_1) {
            s_6_St_13_Seguranca_3_1_1 = s_6_St_13_Seguranca_3;
          } else {
            s_6_St_13_Seguranca_3_1_0 = s_6_St_13_Seguranca_3;
          };
        } else {
          s_6_St_13_Seguranca_2_0 = s_6_St_13_Seguranca_2;
          if (s_6_St_13_Seguranca_2_0) {
            s_6_St_13_Seguranca_3_0_1 = s_6_St_13_Seguranca_3;
          } else {
            s_6_St_13_Seguranca_3_0_0 = s_6_St_13_Seguranca_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->ck_20_1 = ns_1_2;
  self->pnr_1 = nr_1;
  self->ck_18_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->ck_16_1 = ns_2_1;
  self->pnr_3 = nr_3;
  self->ck_14_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->ck_12_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->ck_10_1 = ns_5_1;
  self->pnr_6 = nr_6;
  self->v_299 = ns_6_1;
  self->v_300 = ns_6_2;
  self->v_301 = ns_6_3;;
}

