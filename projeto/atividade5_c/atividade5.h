/* --- Generated the 12/10/2019 at 12:21 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s instanciador atividade5.ept --- */

#ifndef ATIVIDADE5_H
#define ATIVIDADE5_H

#include "atividade5_types.h"
#include "instanciador_controller.h"
typedef struct Atividade5__managementPolicy_mem {
  int v_226;
  int v_225;
  int v_224;
  int pnr;
} Atividade5__managementPolicy_mem;

typedef struct Atividade5__managementPolicy_out {
  int mode_3;
  int mode_2;
  int mode_1;
} Atividade5__managementPolicy_out;

void Atividade5__managementPolicy_reset(Atividade5__managementPolicy_mem* self);

void Atividade5__managementPolicy_step(int sexta_input, int ebd_input,
                                       int domingo_input, int domingol_input,
                                       int neutro_input, int seguranca_input,
                                       Atividade5__managementPolicy_out* _out,
                                       Atividade5__managementPolicy_mem* self);

typedef struct Atividade5__lamp1_mem {
  int ck_1;
  int pnr;
} Atividade5__lamp1_mem;

typedef struct Atividade5__lamp1_out {
  int estateLamp1;
} Atividade5__lamp1_out;

void Atividade5__lamp1_reset(Atividade5__lamp1_mem* self);

void Atividade5__lamp1_step(int c1_lamp, int c1, int l1,
                            Atividade5__lamp1_out* _out,
                            Atividade5__lamp1_mem* self);

typedef struct Atividade5__lamp2_mem {
  int ck_1;
  int pnr;
} Atividade5__lamp2_mem;

typedef struct Atividade5__lamp2_out {
  int estateLamp2;
} Atividade5__lamp2_out;

void Atividade5__lamp2_reset(Atividade5__lamp2_mem* self);

void Atividade5__lamp2_step(int c2_lamp, int c2, int l2,
                            Atividade5__lamp2_out* _out,
                            Atividade5__lamp2_mem* self);

typedef struct Atividade5__lamp3_mem {
  int ck_1;
  int pnr;
} Atividade5__lamp3_mem;

typedef struct Atividade5__lamp3_out {
  int estateLamp3;
} Atividade5__lamp3_out;

void Atividade5__lamp3_reset(Atividade5__lamp3_mem* self);

void Atividade5__lamp3_step(int c3_lamp, int c3, int l3,
                            Atividade5__lamp3_out* _out,
                            Atividade5__lamp3_mem* self);

typedef struct Atividade5__lamp4_mem {
  int ck_1;
  int pnr;
} Atividade5__lamp4_mem;

typedef struct Atividade5__lamp4_out {
  int estateLamp4;
} Atividade5__lamp4_out;

void Atividade5__lamp4_reset(Atividade5__lamp4_mem* self);

void Atividade5__lamp4_step(int c4_lamp, int c4, int l4,
                            Atividade5__lamp4_out* _out,
                            Atividade5__lamp4_mem* self);

typedef struct Atividade5__lampExt_mem {
  int ck_1;
  int pnr;
} Atividade5__lampExt_mem;

typedef struct Atividade5__lampExt_out {
  int estateLampExt;
} Atividade5__lampExt_out;

void Atividade5__lampExt_reset(Atividade5__lampExt_mem* self);

void Atividade5__lampExt_step(int c_lampExt, int cx, int lx,
                              Atividade5__lampExt_out* _out,
                              Atividade5__lampExt_mem* self);

typedef struct Atividade5__ventiladores_mem {
  int ck_1;
  int pnr;
} Atividade5__ventiladores_mem;

typedef struct Atividade5__ventiladores_out {
  int estateVent;
} Atividade5__ventiladores_out;

void Atividade5__ventiladores_reset(Atividade5__ventiladores_mem* self);

void Atividade5__ventiladores_step(int c_vent, int cv, int lv,
                                   Atividade5__ventiladores_out* _out,
                                   Atividade5__ventiladores_mem* self);

typedef struct Atividade5__instanciador_mem {
  int ck_20_1;
  int ck_18_1;
  int ck_16_1;
  int ck_14_1;
  int ck_12_1;
  int ck_10_1;
  int v_301;
  int v_300;
  int v_299;
  int pnr_6;
  int pnr_5;
  int pnr_4;
  int pnr_3;
  int pnr_2;
  int pnr_1;
  int pnr;
} Atividade5__instanciador_mem;

typedef struct Atividade5__instanciador_out {
  int policy_3;
  int policy_2;
  int policy_1;
  int estateLamp1;
  int estateLamp2;
  int estateLamp3;
  int estateLamp4;
  int estateLampExt;
  int estateVent;
} Atividade5__instanciador_out;

void Atividade5__instanciador_reset(Atividade5__instanciador_mem* self);

void Atividade5__instanciador_step(int sexta_input, int ebd_input,
                                   int domingo_input, int domingol_input,
                                   int neutro_input, int seguranca_input,
                                   int l1, int l2, int l3, int l4, int lx,
                                   int lv,
                                   Atividade5__instanciador_out* _out,
                                   Atividade5__instanciador_mem* self);

#endif // ATIVIDADE5_H
