/* --- Generated the 11/11/2019 at 8:46 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s instanciador projeto.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "projeto.h"

void Projeto__managementPolicy_reset(Projeto__managementPolicy_mem* self) {
  self->pnr = false;
  self->v_282 = false;
  self->v_283 = false;
  self->v_284 = false;
}

void Projeto__managementPolicy_step(int sexta_input, int ebd_input,
                                    int domingo_input, int domingol_input,
                                    int neutro_input, int seguranca_input,
                                    Projeto__managementPolicy_out* _out,
                                    Projeto__managementPolicy_mem* self) {
  
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
  int ns_St_Seguranca_2_0;
  int ns_St_Seguranca_3_0_0;
  int ns_St_Seguranca_3_0_1;
  int ns_St_Seguranca_2_1;
  int ns_St_Seguranca_3_1_0;
  int ns_St_Seguranca_3_1_1;
  int ns_St_Neutro_2_0;
  int ns_St_Neutro_3_0_0;
  int ns_St_Neutro_3_0_1;
  int ns_St_Neutro_2_1;
  int ns_St_Neutro_3_1_0;
  int ns_St_Neutro_3_1_1;
  int ns_St_DomingoL_2_0;
  int ns_St_DomingoL_3_0_0;
  int ns_St_DomingoL_3_0_1;
  int ns_St_DomingoL_2_1;
  int ns_St_DomingoL_3_1_0;
  int ns_St_DomingoL_3_1_1;
  int ns_St_Domingo_2_0;
  int ns_St_Domingo_3_0_0;
  int ns_St_Domingo_3_0_1;
  int ns_St_Domingo_2_1;
  int ns_St_Domingo_3_1_0;
  int ns_St_Domingo_3_1_1;
  int ns_St_Ebd_2_0;
  int ns_St_Ebd_3_0_0;
  int ns_St_Ebd_3_0_1;
  int ns_St_Ebd_2_1;
  int ns_St_Ebd_3_1_0;
  int ns_St_Ebd_3_1_1;
  int ns_St_Sexta_feira_2_0;
  int ns_St_Sexta_feira_3_0_0;
  int ns_St_Sexta_feira_3_0_1;
  int ns_St_Sexta_feira_2_1;
  int ns_St_Sexta_feira_3_1_0;
  int ns_St_Sexta_feira_3_1_1;
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
  int mode_St_Seguranca;
  int nr_St_Neutro;
  int ns_St_Neutro_3;
  int ns_St_Neutro_2;
  int ns_St_Neutro_1;
  int mode_St_Neutro;
  int nr_St_DomingoL;
  int ns_St_DomingoL_3;
  int ns_St_DomingoL_2;
  int ns_St_DomingoL_1;
  int mode_St_DomingoL;
  int nr_St_Domingo;
  int ns_St_Domingo_3;
  int ns_St_Domingo_2;
  int ns_St_Domingo_1;
  int mode_St_Domingo;
  int nr_St_Ebd;
  int ns_St_Ebd_3;
  int ns_St_Ebd_2;
  int ns_St_Ebd_1;
  int mode_St_Ebd;
  int nr_St_Sexta_feira;
  int ns_St_Sexta_feira_3;
  int ns_St_Sexta_feira_2;
  int ns_St_Sexta_feira_1;
  int mode_St_Sexta_feira;
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
  ck_1_4 = self->v_282;
  ck_2 = self->v_283;
  ck_3 = self->v_284;
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
        v_303 = r_St_Domingo;
        v_285 = s_St_Domingo_1;
        v_286 = s_St_Domingo_2;
        v_287 = s_St_Domingo_3;
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
        v_303 = r_St_DomingoL;
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
        v_285 = s_St_DomingoL_1;
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
        v_286 = s_St_DomingoL_2;
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
        v_287 = s_St_DomingoL_3;
      };
      v_297 = v_285;
      v_298 = v_286;
      v_299 = v_287;
      v_305 = v_303;
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
        v_304 = true;
        v_288 = true;
        v_289 = true;
        v_290 = true;
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
        v_304 = r_St_Ebd;
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
        v_288 = s_St_Ebd_1;
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
        v_289 = s_St_Ebd_2;
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
        v_290 = s_St_Ebd_3;
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
      v_297 = v_288;
      v_298 = v_289;
      v_299 = v_290;
      v_305 = v_304;
    };
    s_1 = v_297;
    s_2 = v_298;
    s_3 = v_299;
    r = v_305;
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
        v_306 = r_St_Neutro;
        v_291 = s_St_Neutro_1;
        v_292 = s_St_Neutro_2;
        v_293 = s_St_Neutro_3;
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
        v_306 = r_St_Seguranca;
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
        v_291 = s_St_Seguranca_1;
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
        v_292 = s_St_Seguranca_2;
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
        v_293 = s_St_Seguranca_3;
      };
      v_300 = v_291;
      v_301 = v_292;
      v_302 = v_293;
      v_308 = v_306;
    } else {
      ck_3_0_0 = ck_3;
      if (ck_3_0_0) {
        v_307 = true;
        v_294 = true;
        v_295 = true;
        v_296 = true;
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
        v_307 = r_St_Sexta_feira;
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
        v_294 = s_St_Sexta_feira_1;
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
        v_295 = s_St_Sexta_feira_2;
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
        v_296 = s_St_Sexta_feira_3;
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
      v_300 = v_294;
      v_301 = v_295;
      v_302 = v_296;
      v_308 = v_307;
    };
    s_1 = v_300;
    s_2 = v_301;
    s_3 = v_302;
    r = v_308;
  };
  ck_1_1 = s_1;
  ck_1_2 = s_2;
  ck_1_3 = s_3;
  if (ck_1_1) {
    ck_1_2_1 = ck_1_2;
    if (ck_1_2_1) {
      ck_1_3_1_1 = ck_1_3;
      if (ck_1_3_1_1) {
        mode_St_Domingo = 3;
        nr_St_Domingo = false;
        ns_St_Domingo_1 = true;
        ns_St_Domingo_2 = true;
        ns_St_Domingo_3 = true;
        v_252 = mode_St_Domingo;
        v_276 = nr_St_Domingo;
        v_258 = ns_St_Domingo_1;
        v_259 = ns_St_Domingo_2;
        v_260 = ns_St_Domingo_3;
      } else {
        mode_St_DomingoL = 4;
        v_252 = mode_St_DomingoL;
        nr_St_DomingoL = false;
        v_276 = nr_St_DomingoL;
        ns_St_DomingoL_1 = true;
        v_258 = ns_St_DomingoL_1;
        ns_St_DomingoL_2 = true;
        v_259 = ns_St_DomingoL_2;
        ns_St_DomingoL_3 = false;
        v_260 = ns_St_DomingoL_3;
      };
      v_254 = v_252;
      v_270 = v_258;
      v_271 = v_259;
      v_272 = v_260;
      v_278 = v_276;
      if (ck_1_3_1_1) {
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
        v_253 = 0;
        v_277 = true;
        v_261 = true;
        v_262 = true;
        v_263 = true;
      } else {
        mode_St_Ebd = 2;
        v_253 = mode_St_Ebd;
        nr_St_Ebd = false;
        v_277 = nr_St_Ebd;
        ns_St_Ebd_1 = true;
        v_261 = ns_St_Ebd_1;
        ns_St_Ebd_2 = false;
        v_262 = ns_St_Ebd_2;
        ns_St_Ebd_3 = false;
        v_263 = ns_St_Ebd_3;
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
      v_254 = v_253;
      v_270 = v_261;
      v_271 = v_262;
      v_272 = v_263;
      v_278 = v_277;
    };
    _out->mode = v_254;
    ns_1 = v_270;
    ns_2 = v_271;
    ns_3 = v_272;
    nr = v_278;
  } else {
    ck_1_2_0 = ck_1_2;
    if (ck_1_2_0) {
      ck_1_3_0_1 = ck_1_3;
      if (ck_1_3_0_1) {
        mode_St_Neutro = 5;
        nr_St_Neutro = false;
        ns_St_Neutro_1 = false;
        ns_St_Neutro_2 = true;
        ns_St_Neutro_3 = true;
        v_255 = mode_St_Neutro;
        v_279 = nr_St_Neutro;
        v_264 = ns_St_Neutro_1;
        v_265 = ns_St_Neutro_2;
        v_266 = ns_St_Neutro_3;
      } else {
        mode_St_Seguranca = 6;
        v_255 = mode_St_Seguranca;
        nr_St_Seguranca = false;
        v_279 = nr_St_Seguranca;
        ns_St_Seguranca_1 = false;
        v_264 = ns_St_Seguranca_1;
        ns_St_Seguranca_2 = true;
        v_265 = ns_St_Seguranca_2;
        ns_St_Seguranca_3 = false;
        v_266 = ns_St_Seguranca_3;
      };
      v_257 = v_255;
      v_273 = v_264;
      v_274 = v_265;
      v_275 = v_266;
      v_281 = v_279;
    } else {
      ck_1_3_0_0 = ck_1_3;
      if (ck_1_3_0_0) {
        v_256 = 0;
        v_280 = true;
        v_267 = true;
        v_268 = true;
        v_269 = true;
      } else {
        mode_St_Sexta_feira = 1;
        v_256 = mode_St_Sexta_feira;
        nr_St_Sexta_feira = false;
        v_280 = nr_St_Sexta_feira;
        ns_St_Sexta_feira_1 = false;
        v_267 = ns_St_Sexta_feira_1;
        ns_St_Sexta_feira_2 = false;
        v_268 = ns_St_Sexta_feira_2;
        ns_St_Sexta_feira_3 = false;
        v_269 = ns_St_Sexta_feira_3;
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
      v_257 = v_256;
      v_273 = v_267;
      v_274 = v_268;
      v_275 = v_269;
      v_281 = v_280;
    };
    _out->mode = v_257;
    ns_1 = v_273;
    ns_2 = v_274;
    ns_3 = v_275;
    nr = v_281;
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
  if (!(ck_1_1)) {
    if (ck_1_2_0) {
      if (ck_1_3_0_1) {
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
  self->v_282 = ns_1;
  self->v_283 = ns_2;
  self->v_284 = ns_3;;
}

void Projeto__lamp1_reset(Projeto__lamp1_mem* self) {
  self->pnr = false;
  self->ck_1 = true;
}

void Projeto__lamp1_step(int c1_lamp, int c1, int l1,
                         Projeto__lamp1_out* _out, Projeto__lamp1_mem* self) {
  
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

void Projeto__instanciador_reset(Projeto__instanciador_mem* self) {
  self->pnr = false;
  self->ck_33_1 = true;
  self->pnr_1 = false;
  self->ck_31_1 = true;
  self->pnr_2 = false;
  self->ck_29_1 = true;
  self->pnr_3 = false;
  self->ck_27_1 = true;
  self->pnr_4 = false;
  self->ck_25_1 = true;
  self->pnr_5 = false;
  self->ck_23_1 = true;
  self->pnr_6 = false;
  self->ck_21_1 = true;
  self->pnr_7 = false;
  self->ck_19_1 = true;
  self->pnr_8 = false;
  self->ck_17_1 = true;
  self->pnr_9 = false;
  self->ck_15_1 = true;
  self->pnr_10 = false;
  self->ck_13_1 = true;
  self->pnr_11 = false;
  self->ck_11_1 = true;
  self->pnr_12 = false;
  self->ck_9_1 = true;
  self->pnr_13 = false;
  self->v_339 = false;
  self->v_340 = false;
  self->v_341 = false;
}

void Projeto__instanciador_step(int sexta_input, int ebd_input,
                                int domingo_input, int domingol_input,
                                int neutro_input, int seguranca_input,
                                int l1, int l2, int l3, int l4, int lx,
                                int lv, int inpMl, int inpMp, int inpSp,
                                int inpSl, int inpProj, int inpGela,
                                int inpAlarm,
                                Projeto__instanciador_out* _out,
                                Projeto__instanciador_mem* self) {
  Instanciador_controller__instanciador_controller_out Instanciador_controller__instanciador_controller_out_st;
  
  int nr_St_2_On;
  int ns_St_2_On_1;
  int estateLamp1_13_St_2_On;
  int nr_St_2_Off;
  int ns_St_2_Off_1;
  int estateLamp1_13_St_2_Off;
  int ck_34_1;
  int v_251;
  int v_250;
  int v_249;
  int v_248;
  int v_247;
  int v_246;
  int v_245;
  int r_St_2_On;
  int s_St_2_On_1;
  int r_St_2_Off;
  int s_St_2_Off_1;
  int nr_1_St_3_On;
  int ns_1_St_3_On_1;
  int estateLamp1_12_St_3_On;
  int nr_1_St_3_Off;
  int ns_1_St_3_Off_1;
  int estateLamp1_12_St_3_Off;
  int ck_32_1;
  int v_244;
  int v_243;
  int v_242;
  int v_241;
  int v_240;
  int v_239;
  int v_238;
  int r_1_St_3_On;
  int s_1_St_3_On_1;
  int r_1_St_3_Off;
  int s_1_St_3_Off_1;
  int nr_2_St_4_On;
  int ns_2_St_4_On_1;
  int estateLamp1_11_St_4_On;
  int nr_2_St_4_Off;
  int ns_2_St_4_Off_1;
  int estateLamp1_11_St_4_Off;
  int ck_30_1;
  int v_237;
  int v_236;
  int v_235;
  int v_234;
  int v_233;
  int v_232;
  int v_231;
  int r_2_St_4_On;
  int s_2_St_4_On_1;
  int r_2_St_4_Off;
  int s_2_St_4_Off_1;
  int nr_3_St_5_On;
  int ns_3_St_5_On_1;
  int estateLamp1_10_St_5_On;
  int nr_3_St_5_Off;
  int ns_3_St_5_Off_1;
  int estateLamp1_10_St_5_Off;
  int ck_28_1;
  int v_230;
  int v_229;
  int v_228;
  int v_227;
  int v_226;
  int v_225;
  int v_224;
  int r_3_St_5_On;
  int s_3_St_5_On_1;
  int r_3_St_5_Off;
  int s_3_St_5_Off_1;
  int nr_4_St_6_On;
  int ns_4_St_6_On_1;
  int estateLamp1_9_St_6_On;
  int nr_4_St_6_Off;
  int ns_4_St_6_Off_1;
  int estateLamp1_9_St_6_Off;
  int ck_26_1;
  int v_223;
  int v_222;
  int v_221;
  int v_220;
  int v_219;
  int v_218;
  int v_217;
  int r_4_St_6_On;
  int s_4_St_6_On_1;
  int r_4_St_6_Off;
  int s_4_St_6_Off_1;
  int nr_5_St_7_On;
  int ns_5_St_7_On_1;
  int estateLamp1_8_St_7_On;
  int nr_5_St_7_Off;
  int ns_5_St_7_Off_1;
  int estateLamp1_8_St_7_Off;
  int ck_24_1;
  int v_216;
  int v_215;
  int v_214;
  int v_213;
  int v_212;
  int v_211;
  int v_210;
  int r_5_St_7_On;
  int s_5_St_7_On_1;
  int r_5_St_7_Off;
  int s_5_St_7_Off_1;
  int nr_6_St_8_On;
  int ns_6_St_8_On_1;
  int estateLamp1_7_St_8_On;
  int nr_6_St_8_Off;
  int ns_6_St_8_Off_1;
  int estateLamp1_7_St_8_Off;
  int ck_22_1;
  int v_209;
  int v_208;
  int v_207;
  int v_206;
  int v_205;
  int v_204;
  int v_203;
  int r_6_St_8_On;
  int s_6_St_8_On_1;
  int r_6_St_8_Off;
  int s_6_St_8_Off_1;
  int nr_7_St_9_On;
  int ns_7_St_9_On_1;
  int estateLamp1_6_St_9_On;
  int nr_7_St_9_Off;
  int ns_7_St_9_Off_1;
  int estateLamp1_6_St_9_Off;
  int ck_20_1;
  int v_202;
  int v_201;
  int v_200;
  int v_199;
  int v_198;
  int v_197;
  int v_196;
  int r_7_St_9_On;
  int s_7_St_9_On_1;
  int r_7_St_9_Off;
  int s_7_St_9_Off_1;
  int nr_8_St_10_On;
  int ns_8_St_10_On_1;
  int estateLamp1_5_St_10_On;
  int nr_8_St_10_Off;
  int ns_8_St_10_Off_1;
  int estateLamp1_5_St_10_Off;
  int ck_18_1;
  int v_195;
  int v_194;
  int v_193;
  int v_192;
  int v_191;
  int v_190;
  int v_189;
  int r_8_St_10_On;
  int s_8_St_10_On_1;
  int r_8_St_10_Off;
  int s_8_St_10_Off_1;
  int nr_9_St_11_On;
  int ns_9_St_11_On_1;
  int estateLamp1_4_St_11_On;
  int nr_9_St_11_Off;
  int ns_9_St_11_Off_1;
  int estateLamp1_4_St_11_Off;
  int ck_16_1;
  int v_188;
  int v_187;
  int v_186;
  int v_185;
  int v_184;
  int v_183;
  int v_182;
  int r_9_St_11_On;
  int s_9_St_11_On_1;
  int r_9_St_11_Off;
  int s_9_St_11_Off_1;
  int nr_10_St_12_On;
  int ns_10_St_12_On_1;
  int estateLamp1_3_St_12_On;
  int nr_10_St_12_Off;
  int ns_10_St_12_Off_1;
  int estateLamp1_3_St_12_Off;
  int ck_14_1;
  int v_181;
  int v_180;
  int v_179;
  int v_178;
  int v_177;
  int v_176;
  int v_175;
  int r_10_St_12_On;
  int s_10_St_12_On_1;
  int r_10_St_12_Off;
  int s_10_St_12_Off_1;
  int nr_11_St_13_On;
  int ns_11_St_13_On_1;
  int estateLamp1_2_St_13_On;
  int nr_11_St_13_Off;
  int ns_11_St_13_Off_1;
  int estateLamp1_2_St_13_Off;
  int ck_12_1;
  int v_174;
  int v_173;
  int v_172;
  int v_171;
  int v_170;
  int v_169;
  int v_168;
  int r_11_St_13_On;
  int s_11_St_13_On_1;
  int r_11_St_13_Off;
  int s_11_St_13_Off_1;
  int nr_12_St_14_On;
  int ns_12_St_14_On_1;
  int estateLamp1_1_St_14_On;
  int nr_12_St_14_Off;
  int ns_12_St_14_Off_1;
  int estateLamp1_1_St_14_Off;
  int ck_10_1;
  int v_167;
  int v_166;
  int v_165;
  int v_164;
  int v_163;
  int v_162;
  int v_161;
  int r_12_St_14_On;
  int s_12_St_14_On_1;
  int r_12_St_14_Off;
  int s_12_St_14_Off_1;
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
  int ns_13_St_15_Seguranca_2_0;
  int ns_13_St_15_Seguranca_3_0_0;
  int ns_13_St_15_Seguranca_3_0_1;
  int ns_13_St_15_Seguranca_2_1;
  int ns_13_St_15_Seguranca_3_1_0;
  int ns_13_St_15_Seguranca_3_1_1;
  int ns_13_St_15_Neutro_2_0;
  int ns_13_St_15_Neutro_3_0_0;
  int ns_13_St_15_Neutro_3_0_1;
  int ns_13_St_15_Neutro_2_1;
  int ns_13_St_15_Neutro_3_1_0;
  int ns_13_St_15_Neutro_3_1_1;
  int ns_13_St_15_DomingoL_2_0;
  int ns_13_St_15_DomingoL_3_0_0;
  int ns_13_St_15_DomingoL_3_0_1;
  int ns_13_St_15_DomingoL_2_1;
  int ns_13_St_15_DomingoL_3_1_0;
  int ns_13_St_15_DomingoL_3_1_1;
  int ns_13_St_15_Domingo_2_0;
  int ns_13_St_15_Domingo_3_0_0;
  int ns_13_St_15_Domingo_3_0_1;
  int ns_13_St_15_Domingo_2_1;
  int ns_13_St_15_Domingo_3_1_0;
  int ns_13_St_15_Domingo_3_1_1;
  int ns_13_St_15_Ebd_2_0;
  int ns_13_St_15_Ebd_3_0_0;
  int ns_13_St_15_Ebd_3_0_1;
  int ns_13_St_15_Ebd_2_1;
  int ns_13_St_15_Ebd_3_1_0;
  int ns_13_St_15_Ebd_3_1_1;
  int ns_13_St_15_Sexta_feira_2_0;
  int ns_13_St_15_Sexta_feira_3_0_0;
  int ns_13_St_15_Sexta_feira_3_0_1;
  int ns_13_St_15_Sexta_feira_2_1;
  int ns_13_St_15_Sexta_feira_3_1_0;
  int ns_13_St_15_Sexta_feira_3_1_1;
  int ck_8_2_0;
  int ck_8_3_0_0;
  int ck_8_3_0_1;
  int ck_8_2_1;
  int ck_8_3_1_0;
  int ck_8_3_1_1;
  int nr_13_St_15_Seguranca;
  int ns_13_St_15_Seguranca_3;
  int ns_13_St_15_Seguranca_2;
  int ns_13_St_15_Seguranca_1;
  int mode_St_15_Seguranca;
  int nr_13_St_15_Neutro;
  int ns_13_St_15_Neutro_3;
  int ns_13_St_15_Neutro_2;
  int ns_13_St_15_Neutro_1;
  int mode_St_15_Neutro;
  int nr_13_St_15_DomingoL;
  int ns_13_St_15_DomingoL_3;
  int ns_13_St_15_DomingoL_2;
  int ns_13_St_15_DomingoL_1;
  int mode_St_15_DomingoL;
  int nr_13_St_15_Domingo;
  int ns_13_St_15_Domingo_3;
  int ns_13_St_15_Domingo_2;
  int ns_13_St_15_Domingo_1;
  int mode_St_15_Domingo;
  int nr_13_St_15_Ebd;
  int ns_13_St_15_Ebd_3;
  int ns_13_St_15_Ebd_2;
  int ns_13_St_15_Ebd_1;
  int mode_St_15_Ebd;
  int nr_13_St_15_Sexta_feira;
  int ns_13_St_15_Sexta_feira_3;
  int ns_13_St_15_Sexta_feira_2;
  int ns_13_St_15_Sexta_feira_1;
  int mode_St_15_Sexta_feira;
  int ck_8_3;
  int ck_8_2;
  int ck_8_1;
  int v_159_2_0;
  int v_159_3_0_0;
  int v_159_3_0_1;
  int v_159_2_1;
  int v_159_3_1_0;
  int v_159_3_1_1;
  int v_157_2_0;
  int v_157_3_0_0;
  int v_157_3_0_1;
  int v_157_2_1;
  int v_157_3_1_0;
  int v_157_3_1_1;
  int v_155_2_0;
  int v_155_3_0_0;
  int v_155_3_0_1;
  int v_155_2_1;
  int v_155_3_1_0;
  int v_155_3_1_1;
  int v_153_2_0;
  int v_153_3_0_0;
  int v_153_3_0_1;
  int v_153_2_1;
  int v_153_3_1_0;
  int v_153_3_1_1;
  int v_160;
  int v_159_3;
  int v_159_2;
  int v_159_1;
  int v_158;
  int v_157_3;
  int v_157_2;
  int v_157_1;
  int v_156;
  int v_155_3;
  int v_155_2;
  int v_155_1;
  int v_154;
  int v_153_3;
  int v_153_2;
  int v_153_1;
  int v_151_2_0;
  int v_151_3_0_0;
  int v_151_3_0_1;
  int v_151_2_1;
  int v_151_3_1_0;
  int v_151_3_1_1;
  int v_149_2_0;
  int v_149_3_0_0;
  int v_149_3_0_1;
  int v_149_2_1;
  int v_149_3_1_0;
  int v_149_3_1_1;
  int v_147_2_0;
  int v_147_3_0_0;
  int v_147_3_0_1;
  int v_147_2_1;
  int v_147_3_1_0;
  int v_147_3_1_1;
  int v_145_2_0;
  int v_145_3_0_0;
  int v_145_3_0_1;
  int v_145_2_1;
  int v_145_3_1_0;
  int v_145_3_1_1;
  int v_152;
  int v_151_3;
  int v_151_2;
  int v_151_1;
  int v_150;
  int v_149_3;
  int v_149_2;
  int v_149_1;
  int v_148;
  int v_147_3;
  int v_147_2;
  int v_147_1;
  int v_146;
  int v_145_3;
  int v_145_2;
  int v_145_1;
  int v_143_2_0;
  int v_143_3_0_0;
  int v_143_3_0_1;
  int v_143_2_1;
  int v_143_3_1_0;
  int v_143_3_1_1;
  int v_141_2_0;
  int v_141_3_0_0;
  int v_141_3_0_1;
  int v_141_2_1;
  int v_141_3_1_0;
  int v_141_3_1_1;
  int v_139_2_0;
  int v_139_3_0_0;
  int v_139_3_0_1;
  int v_139_2_1;
  int v_139_3_1_0;
  int v_139_3_1_1;
  int v_137_2_0;
  int v_137_3_0_0;
  int v_137_3_0_1;
  int v_137_2_1;
  int v_137_3_1_0;
  int v_137_3_1_1;
  int v_144;
  int v_143_3;
  int v_143_2;
  int v_143_1;
  int v_142;
  int v_141_3;
  int v_141_2;
  int v_141_1;
  int v_140;
  int v_139_3;
  int v_139_2;
  int v_139_1;
  int v_138;
  int v_137_3;
  int v_137_2;
  int v_137_1;
  int v_135_2_0;
  int v_135_3_0_0;
  int v_135_3_0_1;
  int v_135_2_1;
  int v_135_3_1_0;
  int v_135_3_1_1;
  int v_133_2_0;
  int v_133_3_0_0;
  int v_133_3_0_1;
  int v_133_2_1;
  int v_133_3_1_0;
  int v_133_3_1_1;
  int v_131_2_0;
  int v_131_3_0_0;
  int v_131_3_0_1;
  int v_131_2_1;
  int v_131_3_1_0;
  int v_131_3_1_1;
  int v_129_2_0;
  int v_129_3_0_0;
  int v_129_3_0_1;
  int v_129_2_1;
  int v_129_3_1_0;
  int v_129_3_1_1;
  int v_136;
  int v_135_3;
  int v_135_2;
  int v_135_1;
  int v_134;
  int v_133_3;
  int v_133_2;
  int v_133_1;
  int v_132;
  int v_131_3;
  int v_131_2;
  int v_131_1;
  int v_130;
  int v_129_3;
  int v_129_2;
  int v_129_1;
  int v_127_2_0;
  int v_127_3_0_0;
  int v_127_3_0_1;
  int v_127_2_1;
  int v_127_3_1_0;
  int v_127_3_1_1;
  int v_125_2_0;
  int v_125_3_0_0;
  int v_125_3_0_1;
  int v_125_2_1;
  int v_125_3_1_0;
  int v_125_3_1_1;
  int v_123_2_0;
  int v_123_3_0_0;
  int v_123_3_0_1;
  int v_123_2_1;
  int v_123_3_1_0;
  int v_123_3_1_1;
  int v_121_2_0;
  int v_121_3_0_0;
  int v_121_3_0_1;
  int v_121_2_1;
  int v_121_3_1_0;
  int v_121_3_1_1;
  int v_128;
  int v_127_3;
  int v_127_2;
  int v_127_1;
  int v_126;
  int v_125_3;
  int v_125_2;
  int v_125_1;
  int v_124;
  int v_123_3;
  int v_123_2;
  int v_123_1;
  int v_122;
  int v_121_3;
  int v_121_2;
  int v_121_1;
  int v_119_2_0;
  int v_119_3_0_0;
  int v_119_3_0_1;
  int v_119_2_1;
  int v_119_3_1_0;
  int v_119_3_1_1;
  int v_117_2_0;
  int v_117_3_0_0;
  int v_117_3_0_1;
  int v_117_2_1;
  int v_117_3_1_0;
  int v_117_3_1_1;
  int v_115_2_0;
  int v_115_3_0_0;
  int v_115_3_0_1;
  int v_115_2_1;
  int v_115_3_1_0;
  int v_115_3_1_1;
  int v_113_2_0;
  int v_113_3_0_0;
  int v_113_3_0_1;
  int v_113_2_1;
  int v_113_3_1_0;
  int v_113_3_1_1;
  int v_120;
  int v_119_3;
  int v_119_2;
  int v_119_1;
  int v_118;
  int v_117_3;
  int v_117_2;
  int v_117_1;
  int v_116;
  int v_115_3;
  int v_115_2;
  int v_115_1;
  int v_114;
  int v_113_3;
  int v_113_2;
  int v_113_1;
  int v_365;
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
  int s_13_St_15_Seguranca_2_0;
  int s_13_St_15_Seguranca_3_0_0;
  int s_13_St_15_Seguranca_3_0_1;
  int s_13_St_15_Seguranca_2_1;
  int s_13_St_15_Seguranca_3_1_0;
  int s_13_St_15_Seguranca_3_1_1;
  int s_13_St_15_Neutro_2_0;
  int s_13_St_15_Neutro_3_0_0;
  int s_13_St_15_Neutro_3_0_1;
  int s_13_St_15_Neutro_2_1;
  int s_13_St_15_Neutro_3_1_0;
  int s_13_St_15_Neutro_3_1_1;
  int s_13_St_15_DomingoL_2_0;
  int s_13_St_15_DomingoL_3_0_0;
  int s_13_St_15_DomingoL_3_0_1;
  int s_13_St_15_DomingoL_2_1;
  int s_13_St_15_DomingoL_3_1_0;
  int s_13_St_15_DomingoL_3_1_1;
  int s_13_St_15_Domingo_2_0;
  int s_13_St_15_Domingo_3_0_0;
  int s_13_St_15_Domingo_3_0_1;
  int s_13_St_15_Domingo_2_1;
  int s_13_St_15_Domingo_3_1_0;
  int s_13_St_15_Domingo_3_1_1;
  int s_13_St_15_Ebd_2_0;
  int s_13_St_15_Ebd_3_0_0;
  int s_13_St_15_Ebd_3_0_1;
  int s_13_St_15_Ebd_2_1;
  int s_13_St_15_Ebd_3_1_0;
  int s_13_St_15_Ebd_3_1_1;
  int s_13_St_15_Sexta_feira_2_0;
  int s_13_St_15_Sexta_feira_3_0_0;
  int s_13_St_15_Sexta_feira_3_0_1;
  int s_13_St_15_Sexta_feira_2_1;
  int s_13_St_15_Sexta_feira_3_1_0;
  int s_13_St_15_Sexta_feira_3_1_1;
  int ck_7_2_0;
  int ck_7_3_0_0;
  int ck_7_3_0_1;
  int ck_7_2_1;
  int ck_7_3_1_0;
  int ck_7_3_1_1;
  int r_13_St_15_Seguranca;
  int s_13_St_15_Seguranca_3;
  int s_13_St_15_Seguranca_2;
  int s_13_St_15_Seguranca_1;
  int r_13_St_15_Neutro;
  int s_13_St_15_Neutro_3;
  int s_13_St_15_Neutro_2;
  int s_13_St_15_Neutro_1;
  int r_13_St_15_DomingoL;
  int s_13_St_15_DomingoL_3;
  int s_13_St_15_DomingoL_2;
  int s_13_St_15_DomingoL_1;
  int r_13_St_15_Domingo;
  int s_13_St_15_Domingo_3;
  int s_13_St_15_Domingo_2;
  int s_13_St_15_Domingo_1;
  int r_13_St_15_Ebd;
  int s_13_St_15_Ebd_3;
  int s_13_St_15_Ebd_2;
  int s_13_St_15_Ebd_1;
  int r_13_St_15_Sexta_feira;
  int s_13_St_15_Sexta_feira_3;
  int s_13_St_15_Sexta_feira_2;
  int s_13_St_15_Sexta_feira_1;
  int ck_7_3;
  int ck_7_2;
  int ck_7_1;
  int s_13_2_0;
  int s_13_3_0_0;
  int s_13_3_0_1;
  int s_13_2_1;
  int s_13_3_1_0;
  int s_13_3_1_1;
  int ns_13_2_0;
  int ns_13_3_0_0;
  int ns_13_3_0_1;
  int ns_13_2_1;
  int ns_13_3_1_0;
  int ns_13_3_1_1;
  int s_13_3;
  int s_13_2;
  int s_13_1;
  int ns_13_3;
  int ns_13_2;
  int ns_13_1;
  int r_13;
  int nr_13;
  int s_12_1;
  int ns_12_1;
  int r_12;
  int nr_12;
  int s_11_1;
  int ns_11_1;
  int r_11;
  int nr_11;
  int s_10_1;
  int ns_10_1;
  int r_10;
  int nr_10;
  int s_9_1;
  int ns_9_1;
  int r_9;
  int nr_9;
  int s_8_1;
  int ns_8_1;
  int r_8;
  int nr_8;
  int s_7_1;
  int ns_7_1;
  int r_7;
  int nr_7;
  int s_6_1;
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
  int c1_lamp_13;
  int c1_13;
  int l1_13;
  int estateLamp1_13;
  int c1_lamp_12;
  int c1_12;
  int l1_12;
  int estateLamp1_12;
  int c1_lamp_11;
  int c1_11;
  int l1_11;
  int estateLamp1_11;
  int c1_lamp_10;
  int c1_10;
  int l1_10;
  int estateLamp1_10;
  int c1_lamp_9;
  int c1_9;
  int l1_9;
  int estateLamp1_9;
  int c1_lamp_8;
  int c1_8;
  int l1_8;
  int estateLamp1_8;
  int c1_lamp_7;
  int c1_7;
  int l1_7;
  int estateLamp1_7;
  int c1_lamp_6;
  int c1_6;
  int l1_6;
  int estateLamp1_6;
  int c1_lamp_5;
  int c1_5;
  int l1_5;
  int estateLamp1_5;
  int c1_lamp_4;
  int c1_4;
  int l1_4;
  int estateLamp1_4;
  int c1_lamp_3;
  int c1_3;
  int l1_3;
  int estateLamp1_3;
  int c1_lamp_2;
  int c1_2;
  int l1_2;
  int estateLamp1_2;
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
  int mode;
  int ck_6;
  int regra_false_false_false_false_true;
  int regra_false_false_false_false_false;
  int ck_5;
  int regra_false_false_false_true;
  int regra_false_false_false_false;
  int ck_4;
  int regra_false_false_true;
  int regra_false_false_false;
  int ck_3;
  int regra_false_true;
  int regra_false_false;
  int ck;
  int regra_true;
  int regra_false;
  int regra5;
  int regra4;
  int regra3;
  int regra2;
  int regra1;
  int regra;
  int v;
  int v_54;
  int v_55;
  int v_56;
  int v_57;
  int v_58;
  int v_59;
  int v_60;
  int v_61;
  int v_62;
  int v_63;
  int v_64;
  int v_65;
  int v_66;
  int v_67;
  int v_68;
  int v_69;
  int v_70;
  int v_71;
  int v_72;
  int v_73;
  int v_74;
  int v_75;
  int v_76;
  int v_77;
  int v_78;
  int v_79;
  int v_80;
  int v_81;
  int v_82;
  int v_83;
  int v_84;
  int v_85;
  int v_86;
  int v_87;
  int v_88;
  int v_89;
  int v_90;
  int v_91;
  int v_92;
  int v_93;
  int v_94;
  int v_95;
  int v_96;
  int v_97;
  int v_98;
  int v_99;
  int v_100;
  int v_101;
  int v_102;
  int v_103;
  int v_104;
  int v_105;
  int v_106;
  int v_107;
  int v_108;
  int v_109;
  int v_110;
  int v_111;
  int v_112;
  int ca;
  int c_alarm;
  int cg;
  int c_gela;
  int cp;
  int c_proj;
  int cmp;
  int c_microP;
  int cml;
  int c_microL;
  int csl;
  int c_somL;
  int csp;
  int c_somP;
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
  l1_13 = inpAlarm;
  l1_12 = inpGela;
  l1_11 = inpProj;
  l1_10 = inpSl;
  l1_9 = inpSp;
  l1_8 = inpMp;
  l1_7 = inpMl;
  l1_6 = lv;
  l1_5 = lx;
  l1_4 = l4;
  l1_3 = l3;
  l1_2 = l2;
  l1_1 = l1;
  sexta_input_1 = sexta_input;
  ebd_input_1 = ebd_input;
  domingo_input_1 = domingo_input;
  domingol_input_1 = domingol_input;
  neutro_input_1 = neutro_input;
  seguranca_input_1 = seguranca_input;
  ck_7_1 = self->v_339;
  ck_7_2 = self->v_340;
  ck_7_3 = self->v_341;
  Instanciador_controller__instanciador_controller_step(sexta_input,
                                                        ebd_input,
                                                        domingo_input,
                                                        domingol_input,
                                                        neutro_input,
                                                        seguranca_input, l1,
                                                        l2, l3, l4, lx, lv,
                                                        inpMl, inpMp, inpSp,
                                                        inpSl, inpProj,
                                                        inpGela, inpAlarm,
                                                        self->v_341,
                                                        self->v_340,
                                                        self->v_339,
                                                        self->pnr_13,
                                                        self->ck_9_1,
                                                        self->pnr_12,
                                                        self->ck_11_1,
                                                        self->pnr_11,
                                                        self->ck_13_1,
                                                        self->pnr_10,
                                                        self->ck_15_1,
                                                        self->pnr_9,
                                                        self->ck_17_1,
                                                        self->pnr_8,
                                                        self->ck_19_1,
                                                        self->pnr_7,
                                                        self->ck_21_1,
                                                        self->pnr_6,
                                                        self->ck_23_1,
                                                        self->pnr_5,
                                                        self->ck_25_1,
                                                        self->pnr_4,
                                                        self->ck_27_1,
                                                        self->pnr_3,
                                                        self->ck_29_1,
                                                        self->pnr_2,
                                                        self->ck_31_1,
                                                        self->pnr_1,
                                                        self->ck_33_1,
                                                        self->pnr, true,
                                                        true, true, true,
                                                        true, true, true,
                                                        true, true, true,
                                                        true, true, true,
                                                        true, true, true,
                                                        true, true, true,
                                                        true, true, true,
                                                        true, true, true,
                                                        true,
                                                        &Instanciador_controller__instanciador_controller_out_st);
  ca = Instanciador_controller__instanciador_controller_out_st.instanciador_ca;
  c_alarm = Instanciador_controller__instanciador_controller_out_st.instanciador_c_alarm;
  cg = Instanciador_controller__instanciador_controller_out_st.instanciador_cg;
  c_gela = Instanciador_controller__instanciador_controller_out_st.instanciador_c_gela;
  cp = Instanciador_controller__instanciador_controller_out_st.instanciador_cp;
  c_proj = Instanciador_controller__instanciador_controller_out_st.instanciador_c_proj;
  cmp = Instanciador_controller__instanciador_controller_out_st.instanciador_cmp;
  c_microP = Instanciador_controller__instanciador_controller_out_st.instanciador_c_microP;
  cml = Instanciador_controller__instanciador_controller_out_st.instanciador_cml;
  c_microL = Instanciador_controller__instanciador_controller_out_st.instanciador_c_microL;
  csl = Instanciador_controller__instanciador_controller_out_st.instanciador_csl;
  c_somL = Instanciador_controller__instanciador_controller_out_st.instanciador_c_somL;
  csp = Instanciador_controller__instanciador_controller_out_st.instanciador_csp;
  c_somP = Instanciador_controller__instanciador_controller_out_st.instanciador_c_somP;
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
  c1_lamp_13 = c_alarm;
  c1_13 = ca;
  c1_lamp_12 = c_gela;
  c1_12 = cg;
  c1_lamp_11 = c_proj;
  c1_11 = cp;
  c1_lamp_10 = c_somL;
  c1_10 = csl;
  c1_lamp_9 = c_somP;
  c1_9 = csp;
  c1_lamp_8 = c_microP;
  c1_8 = cmp;
  c1_lamp_7 = c_microL;
  c1_7 = cml;
  c1_lamp_6 = c_vent;
  c1_6 = cv;
  c1_lamp_5 = c_lampExt;
  c1_5 = cx;
  c1_lamp_4 = c4_lamp;
  c1_4 = c4;
  c1_lamp_3 = c3_lamp;
  c1_3 = c3;
  c1_lamp_2 = c2_lamp;
  c1_2 = c2;
  c1_lamp_1 = c1_lamp;
  c1_1 = c1;
  if (self->ck_33_1) {
    v_250 = (c1_lamp_13||l1_13);
    v_251 = (v_250&&c1_13);
    if (v_251) {
      r_St_2_Off = true;
      s_St_2_Off_1 = false;
    } else {
      r_St_2_Off = self->pnr;
      s_St_2_Off_1 = true;
    };
    r = r_St_2_Off;
    s_1_2 = s_St_2_Off_1;
  } else {
    v_248 = !(c1_13);
    v_246 = !(l1_13);
    v_245 = !(c1_lamp_13);
    v_247 = (v_245||v_246);
    v_249 = (v_247&&v_248);
    if (v_249) {
      r_St_2_On = true;
    } else {
      r_St_2_On = self->pnr;
    };
    r = r_St_2_On;
    if (v_249) {
      s_St_2_On_1 = true;
    } else {
      s_St_2_On_1 = false;
    };
    s_1_2 = s_St_2_On_1;
  };
  ck_34_1 = s_1_2;
  if (ck_34_1) {
    estateLamp1_13_St_2_Off = false;
    nr_St_2_Off = false;
    ns_St_2_Off_1 = true;
    estateLamp1_13 = estateLamp1_13_St_2_Off;
    nr = nr_St_2_Off;
    ns_1_2 = ns_St_2_Off_1;
  } else {
    estateLamp1_13_St_2_On = true;
    estateLamp1_13 = estateLamp1_13_St_2_On;
    nr_St_2_On = false;
    nr = nr_St_2_On;
    ns_St_2_On_1 = false;
    ns_1_2 = ns_St_2_On_1;
  };
  _out->estateAlarm = estateLamp1_13;
  if (self->ck_31_1) {
    v_243 = (c1_lamp_12||l1_12);
    v_244 = (v_243&&c1_12);
    if (v_244) {
      r_1_St_3_Off = true;
      s_1_St_3_Off_1 = false;
    } else {
      r_1_St_3_Off = self->pnr_1;
      s_1_St_3_Off_1 = true;
    };
    r_1 = r_1_St_3_Off;
    s_1_1 = s_1_St_3_Off_1;
  } else {
    v_241 = !(c1_12);
    v_239 = !(l1_12);
    v_238 = !(c1_lamp_12);
    v_240 = (v_238||v_239);
    v_242 = (v_240&&v_241);
    if (v_242) {
      r_1_St_3_On = true;
    } else {
      r_1_St_3_On = self->pnr_1;
    };
    r_1 = r_1_St_3_On;
    if (v_242) {
      s_1_St_3_On_1 = true;
    } else {
      s_1_St_3_On_1 = false;
    };
    s_1_1 = s_1_St_3_On_1;
  };
  ck_32_1 = s_1_1;
  if (ck_32_1) {
    estateLamp1_12_St_3_Off = false;
    nr_1_St_3_Off = false;
    ns_1_St_3_Off_1 = true;
    estateLamp1_12 = estateLamp1_12_St_3_Off;
    nr_1 = nr_1_St_3_Off;
    ns_1_1 = ns_1_St_3_Off_1;
  } else {
    estateLamp1_12_St_3_On = true;
    estateLamp1_12 = estateLamp1_12_St_3_On;
    nr_1_St_3_On = false;
    nr_1 = nr_1_St_3_On;
    ns_1_St_3_On_1 = false;
    ns_1_1 = ns_1_St_3_On_1;
  };
  _out->estateGela = estateLamp1_12;
  if (self->ck_29_1) {
    v_236 = (c1_lamp_11||l1_11);
    v_237 = (v_236&&c1_11);
    if (v_237) {
      r_2_St_4_Off = true;
      s_2_St_4_Off_1 = false;
    } else {
      r_2_St_4_Off = self->pnr_2;
      s_2_St_4_Off_1 = true;
    };
    r_2 = r_2_St_4_Off;
    s_2_1 = s_2_St_4_Off_1;
  } else {
    v_234 = !(c1_11);
    v_232 = !(l1_11);
    v_231 = !(c1_lamp_11);
    v_233 = (v_231||v_232);
    v_235 = (v_233&&v_234);
    if (v_235) {
      r_2_St_4_On = true;
    } else {
      r_2_St_4_On = self->pnr_2;
    };
    r_2 = r_2_St_4_On;
    if (v_235) {
      s_2_St_4_On_1 = true;
    } else {
      s_2_St_4_On_1 = false;
    };
    s_2_1 = s_2_St_4_On_1;
  };
  ck_30_1 = s_2_1;
  if (ck_30_1) {
    estateLamp1_11_St_4_Off = false;
    nr_2_St_4_Off = false;
    ns_2_St_4_Off_1 = true;
    estateLamp1_11 = estateLamp1_11_St_4_Off;
    nr_2 = nr_2_St_4_Off;
    ns_2_1 = ns_2_St_4_Off_1;
  } else {
    estateLamp1_11_St_4_On = true;
    estateLamp1_11 = estateLamp1_11_St_4_On;
    nr_2_St_4_On = false;
    nr_2 = nr_2_St_4_On;
    ns_2_St_4_On_1 = false;
    ns_2_1 = ns_2_St_4_On_1;
  };
  _out->estateProj = estateLamp1_11;
  if (self->ck_27_1) {
    v_229 = (c1_lamp_10||l1_10);
    v_230 = (v_229&&c1_10);
    if (v_230) {
      r_3_St_5_Off = true;
      s_3_St_5_Off_1 = false;
    } else {
      r_3_St_5_Off = self->pnr_3;
      s_3_St_5_Off_1 = true;
    };
    r_3 = r_3_St_5_Off;
    s_3_1 = s_3_St_5_Off_1;
  } else {
    v_227 = !(c1_10);
    v_225 = !(l1_10);
    v_224 = !(c1_lamp_10);
    v_226 = (v_224||v_225);
    v_228 = (v_226&&v_227);
    if (v_228) {
      r_3_St_5_On = true;
    } else {
      r_3_St_5_On = self->pnr_3;
    };
    r_3 = r_3_St_5_On;
    if (v_228) {
      s_3_St_5_On_1 = true;
    } else {
      s_3_St_5_On_1 = false;
    };
    s_3_1 = s_3_St_5_On_1;
  };
  ck_28_1 = s_3_1;
  if (ck_28_1) {
    estateLamp1_10_St_5_Off = false;
    nr_3_St_5_Off = false;
    ns_3_St_5_Off_1 = true;
    estateLamp1_10 = estateLamp1_10_St_5_Off;
    nr_3 = nr_3_St_5_Off;
    ns_3_1 = ns_3_St_5_Off_1;
  } else {
    estateLamp1_10_St_5_On = true;
    estateLamp1_10 = estateLamp1_10_St_5_On;
    nr_3_St_5_On = false;
    nr_3 = nr_3_St_5_On;
    ns_3_St_5_On_1 = false;
    ns_3_1 = ns_3_St_5_On_1;
  };
  _out->estateSoml = estateLamp1_10;
  v_77 = (_out->estateAlarm||_out->estateSoml);
  v_89 = (_out->estateAlarm||_out->estateSoml);
  v_101 = (_out->estateAlarm||_out->estateSoml);
  if (self->ck_25_1) {
    v_222 = (c1_lamp_9||l1_9);
    v_223 = (v_222&&c1_9);
    if (v_223) {
      r_4_St_6_Off = true;
      s_4_St_6_Off_1 = false;
    } else {
      r_4_St_6_Off = self->pnr_4;
      s_4_St_6_Off_1 = true;
    };
    r_4 = r_4_St_6_Off;
    s_4_1 = s_4_St_6_Off_1;
  } else {
    v_220 = !(c1_9);
    v_218 = !(l1_9);
    v_217 = !(c1_lamp_9);
    v_219 = (v_217||v_218);
    v_221 = (v_219&&v_220);
    if (v_221) {
      r_4_St_6_On = true;
    } else {
      r_4_St_6_On = self->pnr_4;
    };
    r_4 = r_4_St_6_On;
    if (v_221) {
      s_4_St_6_On_1 = true;
    } else {
      s_4_St_6_On_1 = false;
    };
    s_4_1 = s_4_St_6_On_1;
  };
  ck_26_1 = s_4_1;
  if (ck_26_1) {
    estateLamp1_9_St_6_Off = false;
    nr_4_St_6_Off = false;
    ns_4_St_6_Off_1 = true;
    estateLamp1_9 = estateLamp1_9_St_6_Off;
    nr_4 = nr_4_St_6_Off;
    ns_4_1 = ns_4_St_6_Off_1;
  } else {
    estateLamp1_9_St_6_On = true;
    estateLamp1_9 = estateLamp1_9_St_6_On;
    nr_4_St_6_On = false;
    nr_4 = nr_4_St_6_On;
    ns_4_St_6_On_1 = false;
    ns_4_1 = ns_4_St_6_On_1;
  };
  _out->estateSomp = estateLamp1_9;
  v_65 = (_out->estateAlarm||_out->estateSomp);
  if (self->ck_23_1) {
    v_215 = (c1_lamp_8||l1_8);
    v_216 = (v_215&&c1_8);
    if (v_216) {
      r_5_St_7_Off = true;
      s_5_St_7_Off_1 = false;
    } else {
      r_5_St_7_Off = self->pnr_5;
      s_5_St_7_Off_1 = true;
    };
    r_5 = r_5_St_7_Off;
    s_5_1 = s_5_St_7_Off_1;
  } else {
    v_213 = !(c1_8);
    v_211 = !(l1_8);
    v_210 = !(c1_lamp_8);
    v_212 = (v_210||v_211);
    v_214 = (v_212&&v_213);
    if (v_214) {
      r_5_St_7_On = true;
    } else {
      r_5_St_7_On = self->pnr_5;
    };
    r_5 = r_5_St_7_On;
    if (v_214) {
      s_5_St_7_On_1 = true;
    } else {
      s_5_St_7_On_1 = false;
    };
    s_5_1 = s_5_St_7_On_1;
  };
  ck_24_1 = s_5_1;
  if (ck_24_1) {
    estateLamp1_8_St_7_Off = false;
    nr_5_St_7_Off = false;
    ns_5_St_7_Off_1 = true;
    estateLamp1_8 = estateLamp1_8_St_7_Off;
    nr_5 = nr_5_St_7_Off;
    ns_5_1 = ns_5_St_7_Off_1;
  } else {
    estateLamp1_8_St_7_On = true;
    estateLamp1_8 = estateLamp1_8_St_7_On;
    nr_5_St_7_On = false;
    nr_5 = nr_5_St_7_On;
    ns_5_St_7_On_1 = false;
    ns_5_1 = ns_5_St_7_On_1;
  };
  _out->estateMicrop = estateLamp1_8;
  v_66 = (v_65||_out->estateMicrop);
  if (self->ck_21_1) {
    v_208 = (c1_lamp_7||l1_7);
    v_209 = (v_208&&c1_7);
    if (v_209) {
      r_6_St_8_Off = true;
      s_6_St_8_Off_1 = false;
    } else {
      r_6_St_8_Off = self->pnr_6;
      s_6_St_8_Off_1 = true;
    };
    r_6 = r_6_St_8_Off;
    s_6_1 = s_6_St_8_Off_1;
  } else {
    v_206 = !(c1_7);
    v_204 = !(l1_7);
    v_203 = !(c1_lamp_7);
    v_205 = (v_203||v_204);
    v_207 = (v_205&&v_206);
    if (v_207) {
      r_6_St_8_On = true;
    } else {
      r_6_St_8_On = self->pnr_6;
    };
    r_6 = r_6_St_8_On;
    if (v_207) {
      s_6_St_8_On_1 = true;
    } else {
      s_6_St_8_On_1 = false;
    };
    s_6_1 = s_6_St_8_On_1;
  };
  ck_22_1 = s_6_1;
  if (ck_22_1) {
    estateLamp1_7_St_8_Off = false;
    nr_6_St_8_Off = false;
    ns_6_St_8_Off_1 = true;
    estateLamp1_7 = estateLamp1_7_St_8_Off;
    nr_6 = nr_6_St_8_Off;
    ns_6_1 = ns_6_St_8_Off_1;
  } else {
    estateLamp1_7_St_8_On = true;
    estateLamp1_7 = estateLamp1_7_St_8_On;
    nr_6_St_8_On = false;
    nr_6 = nr_6_St_8_On;
    ns_6_St_8_On_1 = false;
    ns_6_1 = ns_6_St_8_On_1;
  };
  _out->estateMicroL = estateLamp1_7;
  v_78 = (v_77||_out->estateMicroL);
  v_79 = (v_78||_out->estateProj);
  v_80 = !(v_79);
  v_90 = (v_89||_out->estateMicroL);
  v_91 = (v_90||_out->estateProj);
  v_102 = (v_101||_out->estateMicroL);
  v_103 = (v_102||_out->estateProj);
  v_104 = !(v_103);
  if (self->ck_19_1) {
    v_201 = (c1_lamp_6||l1_6);
    v_202 = (v_201&&c1_6);
    if (v_202) {
      r_7_St_9_Off = true;
      s_7_St_9_Off_1 = false;
    } else {
      r_7_St_9_Off = self->pnr_7;
      s_7_St_9_Off_1 = true;
    };
    r_7 = r_7_St_9_Off;
    s_7_1 = s_7_St_9_Off_1;
  } else {
    v_199 = !(c1_6);
    v_197 = !(l1_6);
    v_196 = !(c1_lamp_6);
    v_198 = (v_196||v_197);
    v_200 = (v_198&&v_199);
    if (v_200) {
      r_7_St_9_On = true;
    } else {
      r_7_St_9_On = self->pnr_7;
    };
    r_7 = r_7_St_9_On;
    if (v_200) {
      s_7_St_9_On_1 = true;
    } else {
      s_7_St_9_On_1 = false;
    };
    s_7_1 = s_7_St_9_On_1;
  };
  ck_20_1 = s_7_1;
  if (ck_20_1) {
    estateLamp1_6_St_9_Off = false;
    nr_7_St_9_Off = false;
    ns_7_St_9_Off_1 = true;
    estateLamp1_6 = estateLamp1_6_St_9_Off;
    nr_7 = nr_7_St_9_Off;
    ns_7_1 = ns_7_St_9_Off_1;
  } else {
    estateLamp1_6_St_9_On = true;
    estateLamp1_6 = estateLamp1_6_St_9_On;
    nr_7_St_9_On = false;
    nr_7 = nr_7_St_9_On;
    ns_7_St_9_On_1 = false;
    ns_7_1 = ns_7_St_9_On_1;
  };
  _out->estateVent = estateLamp1_6;
  if (self->ck_17_1) {
    v_194 = (c1_lamp_5||l1_5);
    v_195 = (v_194&&c1_5);
    if (v_195) {
      r_8_St_10_Off = true;
      s_8_St_10_Off_1 = false;
    } else {
      r_8_St_10_Off = self->pnr_8;
      s_8_St_10_Off_1 = true;
    };
    r_8 = r_8_St_10_Off;
    s_8_1 = s_8_St_10_Off_1;
  } else {
    v_192 = !(c1_5);
    v_190 = !(l1_5);
    v_189 = !(c1_lamp_5);
    v_191 = (v_189||v_190);
    v_193 = (v_191&&v_192);
    if (v_193) {
      r_8_St_10_On = true;
    } else {
      r_8_St_10_On = self->pnr_8;
    };
    r_8 = r_8_St_10_On;
    if (v_193) {
      s_8_St_10_On_1 = true;
    } else {
      s_8_St_10_On_1 = false;
    };
    s_8_1 = s_8_St_10_On_1;
  };
  ck_18_1 = s_8_1;
  if (ck_18_1) {
    estateLamp1_5_St_10_Off = false;
    nr_8_St_10_Off = false;
    ns_8_St_10_Off_1 = true;
    estateLamp1_5 = estateLamp1_5_St_10_Off;
    nr_8 = nr_8_St_10_Off;
    ns_8_1 = ns_8_St_10_Off_1;
  } else {
    estateLamp1_5_St_10_On = true;
    estateLamp1_5 = estateLamp1_5_St_10_On;
    nr_8_St_10_On = false;
    nr_8 = nr_8_St_10_On;
    ns_8_St_10_On_1 = false;
    ns_8_1 = ns_8_St_10_On_1;
  };
  _out->estateLampExt = estateLamp1_5;
  if (self->ck_15_1) {
    v_187 = (c1_lamp_4||l1_4);
    v_188 = (v_187&&c1_4);
    if (v_188) {
      r_9_St_11_Off = true;
      s_9_St_11_Off_1 = false;
    } else {
      r_9_St_11_Off = self->pnr_9;
      s_9_St_11_Off_1 = true;
    };
    r_9 = r_9_St_11_Off;
    s_9_1 = s_9_St_11_Off_1;
  } else {
    v_185 = !(c1_4);
    v_183 = !(l1_4);
    v_182 = !(c1_lamp_4);
    v_184 = (v_182||v_183);
    v_186 = (v_184&&v_185);
    if (v_186) {
      r_9_St_11_On = true;
    } else {
      r_9_St_11_On = self->pnr_9;
    };
    r_9 = r_9_St_11_On;
    if (v_186) {
      s_9_St_11_On_1 = true;
    } else {
      s_9_St_11_On_1 = false;
    };
    s_9_1 = s_9_St_11_On_1;
  };
  ck_16_1 = s_9_1;
  if (ck_16_1) {
    estateLamp1_4_St_11_Off = false;
    nr_9_St_11_Off = false;
    ns_9_St_11_Off_1 = true;
    estateLamp1_4 = estateLamp1_4_St_11_Off;
    nr_9 = nr_9_St_11_Off;
    ns_9_1 = ns_9_St_11_Off_1;
  } else {
    estateLamp1_4_St_11_On = true;
    estateLamp1_4 = estateLamp1_4_St_11_On;
    nr_9_St_11_On = false;
    nr_9 = nr_9_St_11_On;
    ns_9_St_11_On_1 = false;
    ns_9_1 = ns_9_St_11_On_1;
  };
  _out->estateLamp4 = estateLamp1_4;
  v_92 = (v_91||_out->estateLamp4);
  v_93 = (v_92||_out->estateLampExt);
  v_94 = !(v_93);
  if (self->ck_13_1) {
    v_180 = (c1_lamp_3||l1_3);
    v_181 = (v_180&&c1_3);
    if (v_181) {
      r_10_St_12_Off = true;
      s_10_St_12_Off_1 = false;
    } else {
      r_10_St_12_Off = self->pnr_10;
      s_10_St_12_Off_1 = true;
    };
    r_10 = r_10_St_12_Off;
    s_10_1 = s_10_St_12_Off_1;
  } else {
    v_178 = !(c1_3);
    v_176 = !(l1_3);
    v_175 = !(c1_lamp_3);
    v_177 = (v_175||v_176);
    v_179 = (v_177&&v_178);
    if (v_179) {
      r_10_St_12_On = true;
    } else {
      r_10_St_12_On = self->pnr_10;
    };
    r_10 = r_10_St_12_On;
    if (v_179) {
      s_10_St_12_On_1 = true;
    } else {
      s_10_St_12_On_1 = false;
    };
    s_10_1 = s_10_St_12_On_1;
  };
  ck_14_1 = s_10_1;
  if (ck_14_1) {
    estateLamp1_3_St_12_Off = false;
    nr_10_St_12_Off = false;
    ns_10_St_12_Off_1 = true;
    estateLamp1_3 = estateLamp1_3_St_12_Off;
    nr_10 = nr_10_St_12_Off;
    ns_10_1 = ns_10_St_12_Off_1;
  } else {
    estateLamp1_3_St_12_On = true;
    estateLamp1_3 = estateLamp1_3_St_12_On;
    nr_10_St_12_On = false;
    nr_10 = nr_10_St_12_On;
    ns_10_St_12_On_1 = false;
    ns_10_1 = ns_10_St_12_On_1;
  };
  _out->estateLamp3 = estateLamp1_3;
  if (self->ck_11_1) {
    v_173 = (c1_lamp_2||l1_2);
    v_174 = (v_173&&c1_2);
    if (v_174) {
      r_11_St_13_Off = true;
      s_11_St_13_Off_1 = false;
    } else {
      r_11_St_13_Off = self->pnr_11;
      s_11_St_13_Off_1 = true;
    };
    r_11 = r_11_St_13_Off;
    s_11_1 = s_11_St_13_Off_1;
  } else {
    v_171 = !(c1_2);
    v_169 = !(l1_2);
    v_168 = !(c1_lamp_2);
    v_170 = (v_168||v_169);
    v_172 = (v_170&&v_171);
    if (v_172) {
      r_11_St_13_On = true;
    } else {
      r_11_St_13_On = self->pnr_11;
    };
    r_11 = r_11_St_13_On;
    if (v_172) {
      s_11_St_13_On_1 = true;
    } else {
      s_11_St_13_On_1 = false;
    };
    s_11_1 = s_11_St_13_On_1;
  };
  ck_12_1 = s_11_1;
  if (ck_12_1) {
    estateLamp1_2_St_13_Off = false;
    nr_11_St_13_Off = false;
    ns_11_St_13_Off_1 = true;
    estateLamp1_2 = estateLamp1_2_St_13_Off;
    nr_11 = nr_11_St_13_Off;
    ns_11_1 = ns_11_St_13_Off_1;
  } else {
    estateLamp1_2_St_13_On = true;
    estateLamp1_2 = estateLamp1_2_St_13_On;
    nr_11_St_13_On = false;
    nr_11 = nr_11_St_13_On;
    ns_11_St_13_On_1 = false;
    ns_11_1 = ns_11_St_13_On_1;
  };
  _out->estateLamp2 = estateLamp1_2;
  if (self->ck_9_1) {
    v_166 = (c1_lamp_1||l1_1);
    v_167 = (v_166&&c1_1);
    if (v_167) {
      r_12_St_14_Off = true;
      s_12_St_14_Off_1 = false;
    } else {
      r_12_St_14_Off = self->pnr_12;
      s_12_St_14_Off_1 = true;
    };
    r_12 = r_12_St_14_Off;
    s_12_1 = s_12_St_14_Off_1;
  } else {
    v_164 = !(c1_1);
    v_162 = !(l1_1);
    v_161 = !(c1_lamp_1);
    v_163 = (v_161||v_162);
    v_165 = (v_163&&v_164);
    if (v_165) {
      r_12_St_14_On = true;
    } else {
      r_12_St_14_On = self->pnr_12;
    };
    r_12 = r_12_St_14_On;
    if (v_165) {
      s_12_St_14_On_1 = true;
    } else {
      s_12_St_14_On_1 = false;
    };
    s_12_1 = s_12_St_14_On_1;
  };
  ck_10_1 = s_12_1;
  if (ck_10_1) {
    estateLamp1_1_St_14_Off = false;
    nr_12_St_14_Off = false;
    ns_12_St_14_Off_1 = true;
    estateLamp1_1 = estateLamp1_1_St_14_Off;
    nr_12 = nr_12_St_14_Off;
    ns_12_1 = ns_12_St_14_Off_1;
  } else {
    estateLamp1_1_St_14_On = true;
    estateLamp1_1 = estateLamp1_1_St_14_On;
    nr_12_St_14_On = false;
    nr_12 = nr_12_St_14_On;
    ns_12_St_14_On_1 = false;
    ns_12_1 = ns_12_St_14_On_1;
  };
  _out->estateLamp1 = estateLamp1_1;
  v = (_out->estateLamp1||_out->estateLamp2);
  v_54 = (v||_out->estateLamp3);
  v_55 = (v_54||_out->estateLamp4);
  v_56 = (v_55||_out->estateLampExt);
  v_57 = (v_56||_out->estateVent);
  v_58 = (v_57||_out->estateMicrop);
  v_59 = (v_58||_out->estateSomp);
  v_60 = (v_59||_out->estateSoml);
  v_61 = (v_60||_out->estateMicroL);
  v_62 = (v_61||_out->estateGela);
  v_63 = (v_62||_out->estateProj);
  v_64 = !(v_63);
  regra5 = (_out->estateAlarm&&v_64);
  v_67 = (v_66||_out->estateLamp1);
  v_68 = (v_67||_out->estateLamp2);
  v_69 = (v_68||_out->estateLamp4);
  v_70 = !(v_69);
  v_71 = (v_70&&_out->estateLamp3);
  v_72 = (v_71&&_out->estateLampExt);
  v_73 = (v_72&&_out->estateVent);
  v_74 = (v_73&&_out->estateMicroL);
  v_75 = (v_74&&_out->estateSoml);
  v_76 = (v_75&&_out->estateProj);
  regra4 = (v_76&&_out->estateGela);
  v_81 = (v_80&&_out->estateLamp1);
  v_82 = (v_81&&_out->estateLamp2);
  v_83 = (v_82&&_out->estateLamp3);
  v_84 = (v_83&&_out->estateLamp4);
  v_85 = (v_84&&_out->estateLampExt);
  v_86 = (v_85&&_out->estateVent);
  v_87 = (v_86&&_out->estateMicrop);
  v_88 = (v_87&&_out->estateSomp);
  regra3 = (v_88&&_out->estateGela);
  v_95 = (v_94&&_out->estateLamp1);
  v_96 = (v_95&&_out->estateLamp2);
  v_97 = (v_96&&_out->estateLamp3);
  v_98 = (v_97&&_out->estateVent);
  v_99 = (v_98&&_out->estateMicrop);
  v_100 = (v_99&&_out->estateSomp);
  regra2 = (v_100&&_out->estateGela);
  v_105 = (v_104&&_out->estateLamp1);
  v_106 = (v_105&&_out->estateLamp2);
  v_107 = (v_106&&_out->estateLamp3);
  v_108 = (v_107&&_out->estateLamp4);
  v_109 = (v_108&&_out->estateLampExt);
  v_110 = (v_109&&_out->estateVent);
  v_111 = (v_110&&_out->estateMicrop);
  v_112 = (v_111&&_out->estateSomp);
  regra1 = (v_112&&_out->estateGela);
  if (ck_7_1) {
    ck_7_2_1 = ck_7_2;
    if (ck_7_2_1) {
      ck_7_3_1_1 = ck_7_3;
      if (ck_7_3_1_1) {
        if (seguranca_input_1) {
          v_138 = true;
        } else {
          v_138 = self->pnr_13;
        };
        if (neutro_input_1) {
          v_140 = true;
        } else {
          v_140 = v_138;
        };
        if (domingol_input_1) {
          v_142 = true;
        } else {
          v_142 = v_140;
        };
        if (sexta_input_1) {
          v_144 = true;
        } else {
          v_144 = v_142;
        };
        if (ebd_input_1) {
          r_13_St_15_Domingo = true;
        } else {
          r_13_St_15_Domingo = v_144;
        };
        if (seguranca_input_1) {
          v_137_1 = false;
        } else {
          v_137_1 = true;
        };
        if (neutro_input_1) {
          v_139_1 = false;
        } else {
          v_139_1 = v_137_1;
        };
        if (domingol_input_1) {
          v_141_1 = true;
        } else {
          v_141_1 = v_139_1;
        };
        if (sexta_input_1) {
          v_143_1 = false;
        } else {
          v_143_1 = v_141_1;
        };
        if (ebd_input_1) {
          s_13_St_15_Domingo_1 = true;
        } else {
          s_13_St_15_Domingo_1 = v_143_1;
        };
        if (seguranca_input_1) {
          v_137_2 = true;
        } else {
          v_137_2 = true;
        };
        if (neutro_input_1) {
          v_139_2 = true;
        } else {
          v_139_2 = v_137_2;
        };
        if (domingol_input_1) {
          v_141_2 = true;
        } else {
          v_141_2 = v_139_2;
        };
        if (sexta_input_1) {
          v_143_2 = false;
        } else {
          v_143_2 = v_141_2;
        };
        if (ebd_input_1) {
          s_13_St_15_Domingo_2 = false;
        } else {
          s_13_St_15_Domingo_2 = v_143_2;
        };
        if (seguranca_input_1) {
          v_137_3 = false;
        } else {
          v_137_3 = true;
        };
        if (neutro_input_1) {
          v_139_3 = true;
        } else {
          v_139_3 = v_137_3;
        };
        if (domingol_input_1) {
          v_141_3 = false;
        } else {
          v_141_3 = v_139_3;
        };
        if (sexta_input_1) {
          v_143_3 = false;
        } else {
          v_143_3 = v_141_3;
        };
        if (ebd_input_1) {
          s_13_St_15_Domingo_3 = false;
        } else {
          s_13_St_15_Domingo_3 = v_143_3;
        };
        v_360 = r_13_St_15_Domingo;
        v_342 = s_13_St_15_Domingo_1;
        v_343 = s_13_St_15_Domingo_2;
        v_344 = s_13_St_15_Domingo_3;
      } else {
        if (seguranca_input_1) {
          v_130 = true;
        } else {
          v_130 = self->pnr_13;
        };
        if (neutro_input_1) {
          v_132 = true;
        } else {
          v_132 = v_130;
        };
        if (domingo_input_1) {
          v_134 = true;
        } else {
          v_134 = v_132;
        };
        if (sexta_input_1) {
          v_136 = true;
        } else {
          v_136 = v_134;
        };
        if (ebd_input_1) {
          r_13_St_15_DomingoL = true;
        } else {
          r_13_St_15_DomingoL = v_136;
        };
        v_360 = r_13_St_15_DomingoL;
        if (seguranca_input_1) {
          v_129_1 = false;
        } else {
          v_129_1 = true;
        };
        if (neutro_input_1) {
          v_131_1 = false;
        } else {
          v_131_1 = v_129_1;
        };
        if (domingo_input_1) {
          v_133_1 = true;
        } else {
          v_133_1 = v_131_1;
        };
        if (sexta_input_1) {
          v_135_1 = false;
        } else {
          v_135_1 = v_133_1;
        };
        if (ebd_input_1) {
          s_13_St_15_DomingoL_1 = true;
        } else {
          s_13_St_15_DomingoL_1 = v_135_1;
        };
        v_342 = s_13_St_15_DomingoL_1;
        if (seguranca_input_1) {
          v_129_2 = true;
        } else {
          v_129_2 = true;
        };
        if (neutro_input_1) {
          v_131_2 = true;
        } else {
          v_131_2 = v_129_2;
        };
        if (domingo_input_1) {
          v_133_2 = true;
        } else {
          v_133_2 = v_131_2;
        };
        if (sexta_input_1) {
          v_135_2 = false;
        } else {
          v_135_2 = v_133_2;
        };
        if (ebd_input_1) {
          s_13_St_15_DomingoL_2 = false;
        } else {
          s_13_St_15_DomingoL_2 = v_135_2;
        };
        v_343 = s_13_St_15_DomingoL_2;
        if (seguranca_input_1) {
          v_129_3 = false;
        } else {
          v_129_3 = false;
        };
        if (neutro_input_1) {
          v_131_3 = true;
        } else {
          v_131_3 = v_129_3;
        };
        if (domingo_input_1) {
          v_133_3 = true;
        } else {
          v_133_3 = v_131_3;
        };
        if (sexta_input_1) {
          v_135_3 = false;
        } else {
          v_135_3 = v_133_3;
        };
        if (ebd_input_1) {
          s_13_St_15_DomingoL_3 = false;
        } else {
          s_13_St_15_DomingoL_3 = v_135_3;
        };
        v_344 = s_13_St_15_DomingoL_3;
      };
      v_354 = v_342;
      v_355 = v_343;
      v_356 = v_344;
      v_362 = v_360;
      if (ck_7_3_1_1) {
        if (v_137_1) {
          v_137_2_1 = v_137_2;
          if (v_137_2_1) {
            v_137_3_1_1 = v_137_3;
          } else {
            v_137_3_1_0 = v_137_3;
          };
        } else {
          v_137_2_0 = v_137_2;
          if (v_137_2_0) {
            v_137_3_0_1 = v_137_3;
          } else {
            v_137_3_0_0 = v_137_3;
          };
        };
        if (v_139_1) {
          v_139_2_1 = v_139_2;
          if (v_139_2_1) {
            v_139_3_1_1 = v_139_3;
          } else {
            v_139_3_1_0 = v_139_3;
          };
        } else {
          v_139_2_0 = v_139_2;
          if (v_139_2_0) {
            v_139_3_0_1 = v_139_3;
          } else {
            v_139_3_0_0 = v_139_3;
          };
        };
        if (v_141_1) {
          v_141_2_1 = v_141_2;
          if (v_141_2_1) {
            v_141_3_1_1 = v_141_3;
          } else {
            v_141_3_1_0 = v_141_3;
          };
        } else {
          v_141_2_0 = v_141_2;
          if (v_141_2_0) {
            v_141_3_0_1 = v_141_3;
          } else {
            v_141_3_0_0 = v_141_3;
          };
        };
        if (v_143_1) {
          v_143_2_1 = v_143_2;
          if (v_143_2_1) {
            v_143_3_1_1 = v_143_3;
          } else {
            v_143_3_1_0 = v_143_3;
          };
        } else {
          v_143_2_0 = v_143_2;
          if (v_143_2_0) {
            v_143_3_0_1 = v_143_3;
          } else {
            v_143_3_0_0 = v_143_3;
          };
        };
        if (s_13_St_15_Domingo_1) {
          s_13_St_15_Domingo_2_1 = s_13_St_15_Domingo_2;
          if (s_13_St_15_Domingo_2_1) {
            s_13_St_15_Domingo_3_1_1 = s_13_St_15_Domingo_3;
          } else {
            s_13_St_15_Domingo_3_1_0 = s_13_St_15_Domingo_3;
          };
        } else {
          s_13_St_15_Domingo_2_0 = s_13_St_15_Domingo_2;
          if (s_13_St_15_Domingo_2_0) {
            s_13_St_15_Domingo_3_0_1 = s_13_St_15_Domingo_3;
          } else {
            s_13_St_15_Domingo_3_0_0 = s_13_St_15_Domingo_3;
          };
        };
      } else {
        if (v_129_1) {
          v_129_2_1 = v_129_2;
          if (v_129_2_1) {
            v_129_3_1_1 = v_129_3;
          } else {
            v_129_3_1_0 = v_129_3;
          };
        } else {
          v_129_2_0 = v_129_2;
          if (v_129_2_0) {
            v_129_3_0_1 = v_129_3;
          } else {
            v_129_3_0_0 = v_129_3;
          };
        };
        if (v_131_1) {
          v_131_2_1 = v_131_2;
          if (v_131_2_1) {
            v_131_3_1_1 = v_131_3;
          } else {
            v_131_3_1_0 = v_131_3;
          };
        } else {
          v_131_2_0 = v_131_2;
          if (v_131_2_0) {
            v_131_3_0_1 = v_131_3;
          } else {
            v_131_3_0_0 = v_131_3;
          };
        };
        if (v_133_1) {
          v_133_2_1 = v_133_2;
          if (v_133_2_1) {
            v_133_3_1_1 = v_133_3;
          } else {
            v_133_3_1_0 = v_133_3;
          };
        } else {
          v_133_2_0 = v_133_2;
          if (v_133_2_0) {
            v_133_3_0_1 = v_133_3;
          } else {
            v_133_3_0_0 = v_133_3;
          };
        };
        if (v_135_1) {
          v_135_2_1 = v_135_2;
          if (v_135_2_1) {
            v_135_3_1_1 = v_135_3;
          } else {
            v_135_3_1_0 = v_135_3;
          };
        } else {
          v_135_2_0 = v_135_2;
          if (v_135_2_0) {
            v_135_3_0_1 = v_135_3;
          } else {
            v_135_3_0_0 = v_135_3;
          };
        };
        if (s_13_St_15_DomingoL_1) {
          s_13_St_15_DomingoL_2_1 = s_13_St_15_DomingoL_2;
          if (s_13_St_15_DomingoL_2_1) {
            s_13_St_15_DomingoL_3_1_1 = s_13_St_15_DomingoL_3;
          } else {
            s_13_St_15_DomingoL_3_1_0 = s_13_St_15_DomingoL_3;
          };
        } else {
          s_13_St_15_DomingoL_2_0 = s_13_St_15_DomingoL_2;
          if (s_13_St_15_DomingoL_2_0) {
            s_13_St_15_DomingoL_3_0_1 = s_13_St_15_DomingoL_3;
          } else {
            s_13_St_15_DomingoL_3_0_0 = s_13_St_15_DomingoL_3;
          };
        };
      };
    } else {
      ck_7_3_1_0 = ck_7_3;
      if (ck_7_3_1_0) {
        v_361 = true;
        v_345 = true;
        v_346 = true;
        v_347 = true;
      } else {
        if (seguranca_input_1) {
          v_146 = true;
        } else {
          v_146 = self->pnr_13;
        };
        if (neutro_input_1) {
          v_148 = true;
        } else {
          v_148 = v_146;
        };
        if (domingol_input_1) {
          v_150 = true;
        } else {
          v_150 = v_148;
        };
        if (domingo_input_1) {
          v_152 = true;
        } else {
          v_152 = v_150;
        };
        if (sexta_input_1) {
          r_13_St_15_Ebd = true;
        } else {
          r_13_St_15_Ebd = v_152;
        };
        v_361 = r_13_St_15_Ebd;
        if (seguranca_input_1) {
          v_145_1 = false;
        } else {
          v_145_1 = true;
        };
        if (neutro_input_1) {
          v_147_1 = false;
        } else {
          v_147_1 = v_145_1;
        };
        if (domingol_input_1) {
          v_149_1 = true;
        } else {
          v_149_1 = v_147_1;
        };
        if (domingo_input_1) {
          v_151_1 = true;
        } else {
          v_151_1 = v_149_1;
        };
        if (sexta_input_1) {
          s_13_St_15_Ebd_1 = false;
        } else {
          s_13_St_15_Ebd_1 = v_151_1;
        };
        v_345 = s_13_St_15_Ebd_1;
        if (seguranca_input_1) {
          v_145_2 = true;
        } else {
          v_145_2 = false;
        };
        if (neutro_input_1) {
          v_147_2 = true;
        } else {
          v_147_2 = v_145_2;
        };
        if (domingol_input_1) {
          v_149_2 = true;
        } else {
          v_149_2 = v_147_2;
        };
        if (domingo_input_1) {
          v_151_2 = true;
        } else {
          v_151_2 = v_149_2;
        };
        if (sexta_input_1) {
          s_13_St_15_Ebd_2 = false;
        } else {
          s_13_St_15_Ebd_2 = v_151_2;
        };
        v_346 = s_13_St_15_Ebd_2;
        if (seguranca_input_1) {
          v_145_3 = false;
        } else {
          v_145_3 = false;
        };
        if (neutro_input_1) {
          v_147_3 = true;
        } else {
          v_147_3 = v_145_3;
        };
        if (domingol_input_1) {
          v_149_3 = false;
        } else {
          v_149_3 = v_147_3;
        };
        if (domingo_input_1) {
          v_151_3 = true;
        } else {
          v_151_3 = v_149_3;
        };
        if (sexta_input_1) {
          s_13_St_15_Ebd_3 = false;
        } else {
          s_13_St_15_Ebd_3 = v_151_3;
        };
        v_347 = s_13_St_15_Ebd_3;
        if (v_145_1) {
          v_145_2_1 = v_145_2;
          if (v_145_2_1) {
            v_145_3_1_1 = v_145_3;
          } else {
            v_145_3_1_0 = v_145_3;
          };
        } else {
          v_145_2_0 = v_145_2;
          if (v_145_2_0) {
            v_145_3_0_1 = v_145_3;
          } else {
            v_145_3_0_0 = v_145_3;
          };
        };
        if (v_147_1) {
          v_147_2_1 = v_147_2;
          if (v_147_2_1) {
            v_147_3_1_1 = v_147_3;
          } else {
            v_147_3_1_0 = v_147_3;
          };
        } else {
          v_147_2_0 = v_147_2;
          if (v_147_2_0) {
            v_147_3_0_1 = v_147_3;
          } else {
            v_147_3_0_0 = v_147_3;
          };
        };
        if (v_149_1) {
          v_149_2_1 = v_149_2;
          if (v_149_2_1) {
            v_149_3_1_1 = v_149_3;
          } else {
            v_149_3_1_0 = v_149_3;
          };
        } else {
          v_149_2_0 = v_149_2;
          if (v_149_2_0) {
            v_149_3_0_1 = v_149_3;
          } else {
            v_149_3_0_0 = v_149_3;
          };
        };
        if (v_151_1) {
          v_151_2_1 = v_151_2;
          if (v_151_2_1) {
            v_151_3_1_1 = v_151_3;
          } else {
            v_151_3_1_0 = v_151_3;
          };
        } else {
          v_151_2_0 = v_151_2;
          if (v_151_2_0) {
            v_151_3_0_1 = v_151_3;
          } else {
            v_151_3_0_0 = v_151_3;
          };
        };
        if (s_13_St_15_Ebd_1) {
          s_13_St_15_Ebd_2_1 = s_13_St_15_Ebd_2;
          if (s_13_St_15_Ebd_2_1) {
            s_13_St_15_Ebd_3_1_1 = s_13_St_15_Ebd_3;
          } else {
            s_13_St_15_Ebd_3_1_0 = s_13_St_15_Ebd_3;
          };
        } else {
          s_13_St_15_Ebd_2_0 = s_13_St_15_Ebd_2;
          if (s_13_St_15_Ebd_2_0) {
            s_13_St_15_Ebd_3_0_1 = s_13_St_15_Ebd_3;
          } else {
            s_13_St_15_Ebd_3_0_0 = s_13_St_15_Ebd_3;
          };
        };
      };
      v_354 = v_345;
      v_355 = v_346;
      v_356 = v_347;
      v_362 = v_361;
    };
    s_13_1 = v_354;
    s_13_2 = v_355;
    s_13_3 = v_356;
    r_13 = v_362;
  } else {
    ck_7_2_0 = ck_7_2;
    if (ck_7_2_0) {
      ck_7_3_0_1 = ck_7_3;
      if (ck_7_3_0_1) {
        if (seguranca_input_1) {
          v_122 = true;
        } else {
          v_122 = self->pnr_13;
        };
        if (domingo_input_1) {
          v_124 = true;
        } else {
          v_124 = v_122;
        };
        if (domingol_input_1) {
          v_126 = true;
        } else {
          v_126 = v_124;
        };
        if (sexta_input_1) {
          v_128 = true;
        } else {
          v_128 = v_126;
        };
        if (ebd_input_1) {
          r_13_St_15_Neutro = true;
        } else {
          r_13_St_15_Neutro = v_128;
        };
        if (seguranca_input_1) {
          v_121_1 = false;
        } else {
          v_121_1 = false;
        };
        if (domingo_input_1) {
          v_123_1 = true;
        } else {
          v_123_1 = v_121_1;
        };
        if (domingol_input_1) {
          v_125_1 = true;
        } else {
          v_125_1 = v_123_1;
        };
        if (sexta_input_1) {
          v_127_1 = false;
        } else {
          v_127_1 = v_125_1;
        };
        if (ebd_input_1) {
          s_13_St_15_Neutro_1 = true;
        } else {
          s_13_St_15_Neutro_1 = v_127_1;
        };
        if (seguranca_input_1) {
          v_121_2 = true;
        } else {
          v_121_2 = true;
        };
        if (domingo_input_1) {
          v_123_2 = true;
        } else {
          v_123_2 = v_121_2;
        };
        if (domingol_input_1) {
          v_125_2 = true;
        } else {
          v_125_2 = v_123_2;
        };
        if (sexta_input_1) {
          v_127_2 = false;
        } else {
          v_127_2 = v_125_2;
        };
        if (ebd_input_1) {
          s_13_St_15_Neutro_2 = false;
        } else {
          s_13_St_15_Neutro_2 = v_127_2;
        };
        if (seguranca_input_1) {
          v_121_3 = false;
        } else {
          v_121_3 = true;
        };
        if (domingo_input_1) {
          v_123_3 = true;
        } else {
          v_123_3 = v_121_3;
        };
        if (domingol_input_1) {
          v_125_3 = false;
        } else {
          v_125_3 = v_123_3;
        };
        if (sexta_input_1) {
          v_127_3 = false;
        } else {
          v_127_3 = v_125_3;
        };
        if (ebd_input_1) {
          s_13_St_15_Neutro_3 = false;
        } else {
          s_13_St_15_Neutro_3 = v_127_3;
        };
        v_363 = r_13_St_15_Neutro;
        v_348 = s_13_St_15_Neutro_1;
        v_349 = s_13_St_15_Neutro_2;
        v_350 = s_13_St_15_Neutro_3;
      } else {
        if (domingo_input_1) {
          v_114 = true;
        } else {
          v_114 = self->pnr_13;
        };
        if (neutro_input_1) {
          v_116 = true;
        } else {
          v_116 = v_114;
        };
        if (domingol_input_1) {
          v_118 = true;
        } else {
          v_118 = v_116;
        };
        if (sexta_input_1) {
          v_120 = true;
        } else {
          v_120 = v_118;
        };
        if (ebd_input_1) {
          r_13_St_15_Seguranca = true;
        } else {
          r_13_St_15_Seguranca = v_120;
        };
        v_363 = r_13_St_15_Seguranca;
        if (domingo_input_1) {
          v_113_1 = true;
        } else {
          v_113_1 = false;
        };
        if (neutro_input_1) {
          v_115_1 = false;
        } else {
          v_115_1 = v_113_1;
        };
        if (domingol_input_1) {
          v_117_1 = true;
        } else {
          v_117_1 = v_115_1;
        };
        if (sexta_input_1) {
          v_119_1 = false;
        } else {
          v_119_1 = v_117_1;
        };
        if (ebd_input_1) {
          s_13_St_15_Seguranca_1 = true;
        } else {
          s_13_St_15_Seguranca_1 = v_119_1;
        };
        v_348 = s_13_St_15_Seguranca_1;
        if (domingo_input_1) {
          v_113_2 = true;
        } else {
          v_113_2 = true;
        };
        if (neutro_input_1) {
          v_115_2 = true;
        } else {
          v_115_2 = v_113_2;
        };
        if (domingol_input_1) {
          v_117_2 = true;
        } else {
          v_117_2 = v_115_2;
        };
        if (sexta_input_1) {
          v_119_2 = false;
        } else {
          v_119_2 = v_117_2;
        };
        if (ebd_input_1) {
          s_13_St_15_Seguranca_2 = false;
        } else {
          s_13_St_15_Seguranca_2 = v_119_2;
        };
        v_349 = s_13_St_15_Seguranca_2;
        if (domingo_input_1) {
          v_113_3 = true;
        } else {
          v_113_3 = false;
        };
        if (neutro_input_1) {
          v_115_3 = true;
        } else {
          v_115_3 = v_113_3;
        };
        if (domingol_input_1) {
          v_117_3 = false;
        } else {
          v_117_3 = v_115_3;
        };
        if (sexta_input_1) {
          v_119_3 = false;
        } else {
          v_119_3 = v_117_3;
        };
        if (ebd_input_1) {
          s_13_St_15_Seguranca_3 = false;
        } else {
          s_13_St_15_Seguranca_3 = v_119_3;
        };
        v_350 = s_13_St_15_Seguranca_3;
      };
      v_357 = v_348;
      v_358 = v_349;
      v_359 = v_350;
      v_365 = v_363;
    } else {
      ck_7_3_0_0 = ck_7_3;
      if (ck_7_3_0_0) {
        v_364 = true;
        v_351 = true;
        v_352 = true;
        v_353 = true;
      } else {
        if (seguranca_input_1) {
          v_154 = true;
        } else {
          v_154 = self->pnr_13;
        };
        if (neutro_input_1) {
          v_156 = true;
        } else {
          v_156 = v_154;
        };
        if (domingol_input_1) {
          v_158 = true;
        } else {
          v_158 = v_156;
        };
        if (domingo_input_1) {
          v_160 = true;
        } else {
          v_160 = v_158;
        };
        if (ebd_input_1) {
          r_13_St_15_Sexta_feira = true;
        } else {
          r_13_St_15_Sexta_feira = v_160;
        };
        v_364 = r_13_St_15_Sexta_feira;
        if (seguranca_input_1) {
          v_153_1 = false;
        } else {
          v_153_1 = false;
        };
        if (neutro_input_1) {
          v_155_1 = false;
        } else {
          v_155_1 = v_153_1;
        };
        if (domingol_input_1) {
          v_157_1 = true;
        } else {
          v_157_1 = v_155_1;
        };
        if (domingo_input_1) {
          v_159_1 = true;
        } else {
          v_159_1 = v_157_1;
        };
        if (ebd_input_1) {
          s_13_St_15_Sexta_feira_1 = true;
        } else {
          s_13_St_15_Sexta_feira_1 = v_159_1;
        };
        v_351 = s_13_St_15_Sexta_feira_1;
        if (seguranca_input_1) {
          v_153_2 = true;
        } else {
          v_153_2 = false;
        };
        if (neutro_input_1) {
          v_155_2 = true;
        } else {
          v_155_2 = v_153_2;
        };
        if (domingol_input_1) {
          v_157_2 = true;
        } else {
          v_157_2 = v_155_2;
        };
        if (domingo_input_1) {
          v_159_2 = true;
        } else {
          v_159_2 = v_157_2;
        };
        if (ebd_input_1) {
          s_13_St_15_Sexta_feira_2 = false;
        } else {
          s_13_St_15_Sexta_feira_2 = v_159_2;
        };
        v_352 = s_13_St_15_Sexta_feira_2;
        if (seguranca_input_1) {
          v_153_3 = false;
        } else {
          v_153_3 = false;
        };
        if (neutro_input_1) {
          v_155_3 = true;
        } else {
          v_155_3 = v_153_3;
        };
        if (domingol_input_1) {
          v_157_3 = false;
        } else {
          v_157_3 = v_155_3;
        };
        if (domingo_input_1) {
          v_159_3 = true;
        } else {
          v_159_3 = v_157_3;
        };
        if (ebd_input_1) {
          s_13_St_15_Sexta_feira_3 = false;
        } else {
          s_13_St_15_Sexta_feira_3 = v_159_3;
        };
        v_353 = s_13_St_15_Sexta_feira_3;
        if (v_153_1) {
          v_153_2_1 = v_153_2;
          if (v_153_2_1) {
            v_153_3_1_1 = v_153_3;
          } else {
            v_153_3_1_0 = v_153_3;
          };
        } else {
          v_153_2_0 = v_153_2;
          if (v_153_2_0) {
            v_153_3_0_1 = v_153_3;
          } else {
            v_153_3_0_0 = v_153_3;
          };
        };
        if (v_155_1) {
          v_155_2_1 = v_155_2;
          if (v_155_2_1) {
            v_155_3_1_1 = v_155_3;
          } else {
            v_155_3_1_0 = v_155_3;
          };
        } else {
          v_155_2_0 = v_155_2;
          if (v_155_2_0) {
            v_155_3_0_1 = v_155_3;
          } else {
            v_155_3_0_0 = v_155_3;
          };
        };
        if (v_157_1) {
          v_157_2_1 = v_157_2;
          if (v_157_2_1) {
            v_157_3_1_1 = v_157_3;
          } else {
            v_157_3_1_0 = v_157_3;
          };
        } else {
          v_157_2_0 = v_157_2;
          if (v_157_2_0) {
            v_157_3_0_1 = v_157_3;
          } else {
            v_157_3_0_0 = v_157_3;
          };
        };
        if (v_159_1) {
          v_159_2_1 = v_159_2;
          if (v_159_2_1) {
            v_159_3_1_1 = v_159_3;
          } else {
            v_159_3_1_0 = v_159_3;
          };
        } else {
          v_159_2_0 = v_159_2;
          if (v_159_2_0) {
            v_159_3_0_1 = v_159_3;
          } else {
            v_159_3_0_0 = v_159_3;
          };
        };
        if (s_13_St_15_Sexta_feira_1) {
          s_13_St_15_Sexta_feira_2_1 = s_13_St_15_Sexta_feira_2;
          if (s_13_St_15_Sexta_feira_2_1) {
            s_13_St_15_Sexta_feira_3_1_1 = s_13_St_15_Sexta_feira_3;
          } else {
            s_13_St_15_Sexta_feira_3_1_0 = s_13_St_15_Sexta_feira_3;
          };
        } else {
          s_13_St_15_Sexta_feira_2_0 = s_13_St_15_Sexta_feira_2;
          if (s_13_St_15_Sexta_feira_2_0) {
            s_13_St_15_Sexta_feira_3_0_1 = s_13_St_15_Sexta_feira_3;
          } else {
            s_13_St_15_Sexta_feira_3_0_0 = s_13_St_15_Sexta_feira_3;
          };
        };
      };
      v_357 = v_351;
      v_358 = v_352;
      v_359 = v_353;
      v_365 = v_364;
    };
    s_13_1 = v_357;
    s_13_2 = v_358;
    s_13_3 = v_359;
    r_13 = v_365;
  };
  ck_8_1 = s_13_1;
  ck_8_2 = s_13_2;
  ck_8_3 = s_13_3;
  if (ck_8_1) {
    ck_8_2_1 = ck_8_2;
    if (ck_8_2_1) {
      ck_8_3_1_1 = ck_8_3;
      if (ck_8_3_1_1) {
        mode_St_15_Domingo = 3;
        nr_13_St_15_Domingo = false;
        ns_13_St_15_Domingo_1 = true;
        ns_13_St_15_Domingo_2 = true;
        ns_13_St_15_Domingo_3 = true;
        v_309 = mode_St_15_Domingo;
        v_333 = nr_13_St_15_Domingo;
        v_315 = ns_13_St_15_Domingo_1;
        v_316 = ns_13_St_15_Domingo_2;
        v_317 = ns_13_St_15_Domingo_3;
      } else {
        mode_St_15_DomingoL = 4;
        v_309 = mode_St_15_DomingoL;
        nr_13_St_15_DomingoL = false;
        v_333 = nr_13_St_15_DomingoL;
        ns_13_St_15_DomingoL_1 = true;
        v_315 = ns_13_St_15_DomingoL_1;
        ns_13_St_15_DomingoL_2 = true;
        v_316 = ns_13_St_15_DomingoL_2;
        ns_13_St_15_DomingoL_3 = false;
        v_317 = ns_13_St_15_DomingoL_3;
      };
      v_311 = v_309;
      v_327 = v_315;
      v_328 = v_316;
      v_329 = v_317;
      v_335 = v_333;
      if (ck_8_3_1_1) {
        if (ns_13_St_15_Domingo_1) {
          ns_13_St_15_Domingo_2_1 = ns_13_St_15_Domingo_2;
          if (ns_13_St_15_Domingo_2_1) {
            ns_13_St_15_Domingo_3_1_1 = ns_13_St_15_Domingo_3;
          } else {
            ns_13_St_15_Domingo_3_1_0 = ns_13_St_15_Domingo_3;
          };
        } else {
          ns_13_St_15_Domingo_2_0 = ns_13_St_15_Domingo_2;
          if (ns_13_St_15_Domingo_2_0) {
            ns_13_St_15_Domingo_3_0_1 = ns_13_St_15_Domingo_3;
          } else {
            ns_13_St_15_Domingo_3_0_0 = ns_13_St_15_Domingo_3;
          };
        };
      } else {
        if (ns_13_St_15_DomingoL_1) {
          ns_13_St_15_DomingoL_2_1 = ns_13_St_15_DomingoL_2;
          if (ns_13_St_15_DomingoL_2_1) {
            ns_13_St_15_DomingoL_3_1_1 = ns_13_St_15_DomingoL_3;
          } else {
            ns_13_St_15_DomingoL_3_1_0 = ns_13_St_15_DomingoL_3;
          };
        } else {
          ns_13_St_15_DomingoL_2_0 = ns_13_St_15_DomingoL_2;
          if (ns_13_St_15_DomingoL_2_0) {
            ns_13_St_15_DomingoL_3_0_1 = ns_13_St_15_DomingoL_3;
          } else {
            ns_13_St_15_DomingoL_3_0_0 = ns_13_St_15_DomingoL_3;
          };
        };
      };
    } else {
      ck_8_3_1_0 = ck_8_3;
      if (ck_8_3_1_0) {
        v_310 = 0;
        v_334 = true;
        v_318 = true;
        v_319 = true;
        v_320 = true;
      } else {
        mode_St_15_Ebd = 2;
        v_310 = mode_St_15_Ebd;
        nr_13_St_15_Ebd = false;
        v_334 = nr_13_St_15_Ebd;
        ns_13_St_15_Ebd_1 = true;
        v_318 = ns_13_St_15_Ebd_1;
        ns_13_St_15_Ebd_2 = false;
        v_319 = ns_13_St_15_Ebd_2;
        ns_13_St_15_Ebd_3 = false;
        v_320 = ns_13_St_15_Ebd_3;
        if (ns_13_St_15_Ebd_1) {
          ns_13_St_15_Ebd_2_1 = ns_13_St_15_Ebd_2;
          if (ns_13_St_15_Ebd_2_1) {
            ns_13_St_15_Ebd_3_1_1 = ns_13_St_15_Ebd_3;
          } else {
            ns_13_St_15_Ebd_3_1_0 = ns_13_St_15_Ebd_3;
          };
        } else {
          ns_13_St_15_Ebd_2_0 = ns_13_St_15_Ebd_2;
          if (ns_13_St_15_Ebd_2_0) {
            ns_13_St_15_Ebd_3_0_1 = ns_13_St_15_Ebd_3;
          } else {
            ns_13_St_15_Ebd_3_0_0 = ns_13_St_15_Ebd_3;
          };
        };
      };
      v_311 = v_310;
      v_327 = v_318;
      v_328 = v_319;
      v_329 = v_320;
      v_335 = v_334;
    };
    mode = v_311;
    ns_13_1 = v_327;
    ns_13_2 = v_328;
    ns_13_3 = v_329;
    nr_13 = v_335;
  } else {
    ck_8_2_0 = ck_8_2;
    if (ck_8_2_0) {
      ck_8_3_0_1 = ck_8_3;
      if (ck_8_3_0_1) {
        mode_St_15_Neutro = 5;
        nr_13_St_15_Neutro = false;
        ns_13_St_15_Neutro_1 = false;
        ns_13_St_15_Neutro_2 = true;
        ns_13_St_15_Neutro_3 = true;
        v_312 = mode_St_15_Neutro;
        v_336 = nr_13_St_15_Neutro;
        v_321 = ns_13_St_15_Neutro_1;
        v_322 = ns_13_St_15_Neutro_2;
        v_323 = ns_13_St_15_Neutro_3;
      } else {
        mode_St_15_Seguranca = 6;
        v_312 = mode_St_15_Seguranca;
        nr_13_St_15_Seguranca = false;
        v_336 = nr_13_St_15_Seguranca;
        ns_13_St_15_Seguranca_1 = false;
        v_321 = ns_13_St_15_Seguranca_1;
        ns_13_St_15_Seguranca_2 = true;
        v_322 = ns_13_St_15_Seguranca_2;
        ns_13_St_15_Seguranca_3 = false;
        v_323 = ns_13_St_15_Seguranca_3;
      };
      v_314 = v_312;
      v_330 = v_321;
      v_331 = v_322;
      v_332 = v_323;
      v_338 = v_336;
    } else {
      ck_8_3_0_0 = ck_8_3;
      if (ck_8_3_0_0) {
        v_313 = 0;
        v_337 = true;
        v_324 = true;
        v_325 = true;
        v_326 = true;
      } else {
        mode_St_15_Sexta_feira = 1;
        v_313 = mode_St_15_Sexta_feira;
        nr_13_St_15_Sexta_feira = false;
        v_337 = nr_13_St_15_Sexta_feira;
        ns_13_St_15_Sexta_feira_1 = false;
        v_324 = ns_13_St_15_Sexta_feira_1;
        ns_13_St_15_Sexta_feira_2 = false;
        v_325 = ns_13_St_15_Sexta_feira_2;
        ns_13_St_15_Sexta_feira_3 = false;
        v_326 = ns_13_St_15_Sexta_feira_3;
        if (ns_13_St_15_Sexta_feira_1) {
          ns_13_St_15_Sexta_feira_2_1 = ns_13_St_15_Sexta_feira_2;
          if (ns_13_St_15_Sexta_feira_2_1) {
            ns_13_St_15_Sexta_feira_3_1_1 = ns_13_St_15_Sexta_feira_3;
          } else {
            ns_13_St_15_Sexta_feira_3_1_0 = ns_13_St_15_Sexta_feira_3;
          };
        } else {
          ns_13_St_15_Sexta_feira_2_0 = ns_13_St_15_Sexta_feira_2;
          if (ns_13_St_15_Sexta_feira_2_0) {
            ns_13_St_15_Sexta_feira_3_0_1 = ns_13_St_15_Sexta_feira_3;
          } else {
            ns_13_St_15_Sexta_feira_3_0_0 = ns_13_St_15_Sexta_feira_3;
          };
        };
      };
      v_314 = v_313;
      v_330 = v_324;
      v_331 = v_325;
      v_332 = v_326;
      v_338 = v_337;
    };
    mode = v_314;
    ns_13_1 = v_330;
    ns_13_2 = v_331;
    ns_13_3 = v_332;
    nr_13 = v_338;
  };
  _out->policy = mode;
  ck = (_out->policy==1);
  if (ck) {
    regra_true = regra1;
    regra = regra_true;
  } else {
    ck_3 = (_out->policy==2);
    if (ck_3) {
      regra_false_true = regra2;
      regra_false = regra_false_true;
    } else {
      ck_4 = (_out->policy==3);
      if (ck_4) {
        regra_false_false_true = regra3;
        regra_false_false = regra_false_false_true;
      } else {
        ck_5 = (_out->policy==4);
        if (ck_5) {
          regra_false_false_false_true = regra4;
          regra_false_false_false = regra_false_false_false_true;
        } else {
          ck_6 = (_out->policy==5);
          if (ck_6) {
            regra_false_false_false_false_true = true;
            regra_false_false_false_false = regra_false_false_false_false_true;
          } else {
            regra_false_false_false_false_false = regra5;
            regra_false_false_false_false = regra_false_false_false_false_false;
          };
          regra_false_false_false = regra_false_false_false_false;
        };
        regra_false_false = regra_false_false_false;
      };
      regra_false = regra_false_false;
    };
    regra = regra_false;
  };
  if (ns_13_1) {
    ns_13_2_1 = ns_13_2;
    if (ns_13_2_1) {
      ns_13_3_1_1 = ns_13_3;
    } else {
      ns_13_3_1_0 = ns_13_3;
    };
  } else {
    ns_13_2_0 = ns_13_2;
    if (ns_13_2_0) {
      ns_13_3_0_1 = ns_13_3;
    } else {
      ns_13_3_0_0 = ns_13_3;
    };
  };
  if (!(ck_8_1)) {
    if (ck_8_2_0) {
      if (ck_8_3_0_1) {
        if (ns_13_St_15_Neutro_1) {
          ns_13_St_15_Neutro_2_1 = ns_13_St_15_Neutro_2;
          if (ns_13_St_15_Neutro_2_1) {
            ns_13_St_15_Neutro_3_1_1 = ns_13_St_15_Neutro_3;
          } else {
            ns_13_St_15_Neutro_3_1_0 = ns_13_St_15_Neutro_3;
          };
        } else {
          ns_13_St_15_Neutro_2_0 = ns_13_St_15_Neutro_2;
          if (ns_13_St_15_Neutro_2_0) {
            ns_13_St_15_Neutro_3_0_1 = ns_13_St_15_Neutro_3;
          } else {
            ns_13_St_15_Neutro_3_0_0 = ns_13_St_15_Neutro_3;
          };
        };
      } else {
        if (ns_13_St_15_Seguranca_1) {
          ns_13_St_15_Seguranca_2_1 = ns_13_St_15_Seguranca_2;
          if (ns_13_St_15_Seguranca_2_1) {
            ns_13_St_15_Seguranca_3_1_1 = ns_13_St_15_Seguranca_3;
          } else {
            ns_13_St_15_Seguranca_3_1_0 = ns_13_St_15_Seguranca_3;
          };
        } else {
          ns_13_St_15_Seguranca_2_0 = ns_13_St_15_Seguranca_2;
          if (ns_13_St_15_Seguranca_2_0) {
            ns_13_St_15_Seguranca_3_0_1 = ns_13_St_15_Seguranca_3;
          } else {
            ns_13_St_15_Seguranca_3_0_0 = ns_13_St_15_Seguranca_3;
          };
        };
      };
    };
  };
  if (s_13_1) {
    s_13_2_1 = s_13_2;
    if (s_13_2_1) {
      s_13_3_1_1 = s_13_3;
    } else {
      s_13_3_1_0 = s_13_3;
    };
  } else {
    s_13_2_0 = s_13_2;
    if (s_13_2_0) {
      s_13_3_0_1 = s_13_3;
    } else {
      s_13_3_0_0 = s_13_3;
    };
  };
  if (!(ck_7_1)) {
    if (ck_7_2_0) {
      if (ck_7_3_0_1) {
        if (v_121_1) {
          v_121_2_1 = v_121_2;
          if (v_121_2_1) {
            v_121_3_1_1 = v_121_3;
          } else {
            v_121_3_1_0 = v_121_3;
          };
        } else {
          v_121_2_0 = v_121_2;
          if (v_121_2_0) {
            v_121_3_0_1 = v_121_3;
          } else {
            v_121_3_0_0 = v_121_3;
          };
        };
        if (v_123_1) {
          v_123_2_1 = v_123_2;
          if (v_123_2_1) {
            v_123_3_1_1 = v_123_3;
          } else {
            v_123_3_1_0 = v_123_3;
          };
        } else {
          v_123_2_0 = v_123_2;
          if (v_123_2_0) {
            v_123_3_0_1 = v_123_3;
          } else {
            v_123_3_0_0 = v_123_3;
          };
        };
        if (v_125_1) {
          v_125_2_1 = v_125_2;
          if (v_125_2_1) {
            v_125_3_1_1 = v_125_3;
          } else {
            v_125_3_1_0 = v_125_3;
          };
        } else {
          v_125_2_0 = v_125_2;
          if (v_125_2_0) {
            v_125_3_0_1 = v_125_3;
          } else {
            v_125_3_0_0 = v_125_3;
          };
        };
        if (v_127_1) {
          v_127_2_1 = v_127_2;
          if (v_127_2_1) {
            v_127_3_1_1 = v_127_3;
          } else {
            v_127_3_1_0 = v_127_3;
          };
        } else {
          v_127_2_0 = v_127_2;
          if (v_127_2_0) {
            v_127_3_0_1 = v_127_3;
          } else {
            v_127_3_0_0 = v_127_3;
          };
        };
        if (s_13_St_15_Neutro_1) {
          s_13_St_15_Neutro_2_1 = s_13_St_15_Neutro_2;
          if (s_13_St_15_Neutro_2_1) {
            s_13_St_15_Neutro_3_1_1 = s_13_St_15_Neutro_3;
          } else {
            s_13_St_15_Neutro_3_1_0 = s_13_St_15_Neutro_3;
          };
        } else {
          s_13_St_15_Neutro_2_0 = s_13_St_15_Neutro_2;
          if (s_13_St_15_Neutro_2_0) {
            s_13_St_15_Neutro_3_0_1 = s_13_St_15_Neutro_3;
          } else {
            s_13_St_15_Neutro_3_0_0 = s_13_St_15_Neutro_3;
          };
        };
      } else {
        if (v_113_1) {
          v_113_2_1 = v_113_2;
          if (v_113_2_1) {
            v_113_3_1_1 = v_113_3;
          } else {
            v_113_3_1_0 = v_113_3;
          };
        } else {
          v_113_2_0 = v_113_2;
          if (v_113_2_0) {
            v_113_3_0_1 = v_113_3;
          } else {
            v_113_3_0_0 = v_113_3;
          };
        };
        if (v_115_1) {
          v_115_2_1 = v_115_2;
          if (v_115_2_1) {
            v_115_3_1_1 = v_115_3;
          } else {
            v_115_3_1_0 = v_115_3;
          };
        } else {
          v_115_2_0 = v_115_2;
          if (v_115_2_0) {
            v_115_3_0_1 = v_115_3;
          } else {
            v_115_3_0_0 = v_115_3;
          };
        };
        if (v_117_1) {
          v_117_2_1 = v_117_2;
          if (v_117_2_1) {
            v_117_3_1_1 = v_117_3;
          } else {
            v_117_3_1_0 = v_117_3;
          };
        } else {
          v_117_2_0 = v_117_2;
          if (v_117_2_0) {
            v_117_3_0_1 = v_117_3;
          } else {
            v_117_3_0_0 = v_117_3;
          };
        };
        if (v_119_1) {
          v_119_2_1 = v_119_2;
          if (v_119_2_1) {
            v_119_3_1_1 = v_119_3;
          } else {
            v_119_3_1_0 = v_119_3;
          };
        } else {
          v_119_2_0 = v_119_2;
          if (v_119_2_0) {
            v_119_3_0_1 = v_119_3;
          } else {
            v_119_3_0_0 = v_119_3;
          };
        };
        if (s_13_St_15_Seguranca_1) {
          s_13_St_15_Seguranca_2_1 = s_13_St_15_Seguranca_2;
          if (s_13_St_15_Seguranca_2_1) {
            s_13_St_15_Seguranca_3_1_1 = s_13_St_15_Seguranca_3;
          } else {
            s_13_St_15_Seguranca_3_1_0 = s_13_St_15_Seguranca_3;
          };
        } else {
          s_13_St_15_Seguranca_2_0 = s_13_St_15_Seguranca_2;
          if (s_13_St_15_Seguranca_2_0) {
            s_13_St_15_Seguranca_3_0_1 = s_13_St_15_Seguranca_3;
          } else {
            s_13_St_15_Seguranca_3_0_0 = s_13_St_15_Seguranca_3;
          };
        };
      };
    };
  };
  self->pnr = nr;
  self->ck_33_1 = ns_1_2;
  self->pnr_1 = nr_1;
  self->ck_31_1 = ns_1_1;
  self->pnr_2 = nr_2;
  self->ck_29_1 = ns_2_1;
  self->pnr_3 = nr_3;
  self->ck_27_1 = ns_3_1;
  self->pnr_4 = nr_4;
  self->ck_25_1 = ns_4_1;
  self->pnr_5 = nr_5;
  self->ck_23_1 = ns_5_1;
  self->pnr_6 = nr_6;
  self->ck_21_1 = ns_6_1;
  self->pnr_7 = nr_7;
  self->ck_19_1 = ns_7_1;
  self->pnr_8 = nr_8;
  self->ck_17_1 = ns_8_1;
  self->pnr_9 = nr_9;
  self->ck_15_1 = ns_9_1;
  self->pnr_10 = nr_10;
  self->ck_13_1 = ns_10_1;
  self->pnr_11 = nr_11;
  self->ck_11_1 = ns_11_1;
  self->pnr_12 = nr_12;
  self->ck_9_1 = ns_12_1;
  self->pnr_13 = nr_13;
  self->v_339 = ns_13_1;
  self->v_340 = ns_13_2;
  self->v_341 = ns_13_3;;
}

