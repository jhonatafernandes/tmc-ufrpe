/* --- Generated the 11/11/2019 at 8:46 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s instanciador projeto.ept --- */

#ifndef PROJETO_H
#define PROJETO_H

#include "projeto_types.h"
#include "instanciador_controller.h"
typedef struct Projeto__managementPolicy_mem {
  int v_284;
  int v_283;
  int v_282;
  int pnr;
} Projeto__managementPolicy_mem;

typedef struct Projeto__managementPolicy_out {
  int mode;
} Projeto__managementPolicy_out;

void Projeto__managementPolicy_reset(Projeto__managementPolicy_mem* self);

void Projeto__managementPolicy_step(int sexta_input, int ebd_input,
                                    int domingo_input, int domingol_input,
                                    int neutro_input, int seguranca_input,
                                    Projeto__managementPolicy_out* _out,
                                    Projeto__managementPolicy_mem* self);

typedef struct Projeto__lamp1_mem {
  int ck_1;
  int pnr;
} Projeto__lamp1_mem;

typedef struct Projeto__lamp1_out {
  int estateLamp1;
} Projeto__lamp1_out;

void Projeto__lamp1_reset(Projeto__lamp1_mem* self);

void Projeto__lamp1_step(int c1_lamp, int c1, int l1,
                         Projeto__lamp1_out* _out, Projeto__lamp1_mem* self);

typedef struct Projeto__instanciador_mem {
  int ck_33_1;
  int ck_31_1;
  int ck_29_1;
  int ck_27_1;
  int ck_25_1;
  int ck_23_1;
  int ck_21_1;
  int ck_19_1;
  int ck_17_1;
  int ck_15_1;
  int ck_13_1;
  int ck_11_1;
  int ck_9_1;
  int v_341;
  int v_340;
  int v_339;
  int pnr_13;
  int pnr_12;
  int pnr_11;
  int pnr_10;
  int pnr_9;
  int pnr_8;
  int pnr_7;
  int pnr_6;
  int pnr_5;
  int pnr_4;
  int pnr_3;
  int pnr_2;
  int pnr_1;
  int pnr;
} Projeto__instanciador_mem;

typedef struct Projeto__instanciador_out {
  int policy;
  int estateLamp1;
  int estateLamp2;
  int estateLamp3;
  int estateLamp4;
  int estateLampExt;
  int estateVent;
  int estateMicroL;
  int estateMicrop;
  int estateSomp;
  int estateSoml;
  int estateProj;
  int estateGela;
  int estateAlarm;
} Projeto__instanciador_out;

void Projeto__instanciador_reset(Projeto__instanciador_mem* self);

void Projeto__instanciador_step(int sexta_input, int ebd_input,
                                int domingo_input, int domingol_input,
                                int neutro_input, int seguranca_input,
                                int l1, int l2, int l3, int l4, int lx,
                                int lv, int inpMl, int inpMp, int inpSp,
                                int inpSl, int inpProj, int inpGela,
                                int inpAlarm,
                                Projeto__instanciador_out* _out,
                                Projeto__instanciador_mem* self);

#endif // PROJETO_H
