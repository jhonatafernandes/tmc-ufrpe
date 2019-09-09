/* --- Generated the 9/9/2019 at 10:10 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s twovens atividade3.ept --- */

#ifndef ATIVIDADE3_H
#define ATIVIDADE3_H

#include "atividade3_types.h"
typedef struct Atividade3__oven_mem {
  int v_55;
  int v_54;
  int v_53;
  int pnr;
} Atividade3__oven_mem;

typedef struct Atividade3__oven_out {
  int estate;
  int power;
} Atividade3__oven_out;

void Atividade3__oven_reset(Atividade3__oven_mem* self);

void Atividade3__oven_step(int finish, int start, int c, int cold,
                           int temp_ok, Atividade3__oven_out* _out,
                           Atividade3__oven_mem* self);

typedef struct Atividade3__twovens_mem {
  int v_108;
  int v_107;
  int v_106;
  int pnr;
} Atividade3__twovens_mem;

typedef struct Atividade3__twovens_out {
  int estate;
  int power;
} Atividade3__twovens_out;

void Atividade3__twovens_reset(Atividade3__twovens_mem* self);

void Atividade3__twovens_step(int finish, int start, int c, int cold,
                              int temp_ok, Atividade3__twovens_out* _out,
                              Atividade3__twovens_mem* self);

#endif // ATIVIDADE3_H
