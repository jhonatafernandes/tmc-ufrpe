/* --- Generated the 9/9/2019 at 10:10 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s twovens atividade3.ept --- */

#ifndef ATIVIDADE3_TYPES_H
#define ATIVIDADE3_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Atividade3__St_1_Standby,
  Atividade3__St_1_Reheat,
  Atividade3__St_1_Off,
  Atividade3__St_1_Maintain,
  Atividade3__St_1_Heat
} Atividade3__st_1;

Atividade3__st_1 Atividade3__st_1_of_string(char* s);

char* string_of_Atividade3__st_1(Atividade3__st_1 x, char* buf);

typedef enum {
  Atividade3__St_Standby,
  Atividade3__St_Reheat,
  Atividade3__St_Off,
  Atividade3__St_Maintain,
  Atividade3__St_Heat
} Atividade3__st;

Atividade3__st Atividade3__st_of_string(char* s);

char* string_of_Atividade3__st(Atividade3__st x, char* buf);

#endif // ATIVIDADE3_TYPES_H
