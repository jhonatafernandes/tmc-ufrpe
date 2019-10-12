/* --- Generated the 12/10/2019 at 12:21 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s instanciador atividade5.ept --- */

#ifndef ATIVIDADE5_TYPES_H
#define ATIVIDADE5_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "instanciador_controller.h"
typedef enum {
  Atividade5__St_13_Sexta_feira,
  Atividade5__St_13_Seguranca,
  Atividade5__St_13_Neutro,
  Atividade5__St_13_Ebd,
  Atividade5__St_13_DomingoL,
  Atividade5__St_13_Domingo
} Atividade5__st_13;

Atividade5__st_13 Atividade5__st_13_of_string(char* s);

char* string_of_Atividade5__st_13(Atividade5__st_13 x, char* buf);

typedef enum {
  Atividade5__St_12_On,
  Atividade5__St_12_Off
} Atividade5__st_12;

Atividade5__st_12 Atividade5__st_12_of_string(char* s);

char* string_of_Atividade5__st_12(Atividade5__st_12 x, char* buf);

typedef enum {
  Atividade5__St_11_On,
  Atividade5__St_11_Off
} Atividade5__st_11;

Atividade5__st_11 Atividade5__st_11_of_string(char* s);

char* string_of_Atividade5__st_11(Atividade5__st_11 x, char* buf);

typedef enum {
  Atividade5__St_10_On,
  Atividade5__St_10_Off
} Atividade5__st_10;

Atividade5__st_10 Atividade5__st_10_of_string(char* s);

char* string_of_Atividade5__st_10(Atividade5__st_10 x, char* buf);

typedef enum {
  Atividade5__St_9_On,
  Atividade5__St_9_Off
} Atividade5__st_9;

Atividade5__st_9 Atividade5__st_9_of_string(char* s);

char* string_of_Atividade5__st_9(Atividade5__st_9 x, char* buf);

typedef enum {
  Atividade5__St_8_On,
  Atividade5__St_8_Off
} Atividade5__st_8;

Atividade5__st_8 Atividade5__st_8_of_string(char* s);

char* string_of_Atividade5__st_8(Atividade5__st_8 x, char* buf);

typedef enum {
  Atividade5__St_7_On,
  Atividade5__St_7_Off
} Atividade5__st_7;

Atividade5__st_7 Atividade5__st_7_of_string(char* s);

char* string_of_Atividade5__st_7(Atividade5__st_7 x, char* buf);

typedef enum {
  Atividade5__St_6_On,
  Atividade5__St_6_Off
} Atividade5__st_6;

Atividade5__st_6 Atividade5__st_6_of_string(char* s);

char* string_of_Atividade5__st_6(Atividade5__st_6 x, char* buf);

typedef enum {
  Atividade5__St_5_On,
  Atividade5__St_5_Off
} Atividade5__st_5;

Atividade5__st_5 Atividade5__st_5_of_string(char* s);

char* string_of_Atividade5__st_5(Atividade5__st_5 x, char* buf);

typedef enum {
  Atividade5__St_4_On,
  Atividade5__St_4_Off
} Atividade5__st_4;

Atividade5__st_4 Atividade5__st_4_of_string(char* s);

char* string_of_Atividade5__st_4(Atividade5__st_4 x, char* buf);

typedef enum {
  Atividade5__St_3_On,
  Atividade5__St_3_Off
} Atividade5__st_3;

Atividade5__st_3 Atividade5__st_3_of_string(char* s);

char* string_of_Atividade5__st_3(Atividade5__st_3 x, char* buf);

typedef enum {
  Atividade5__St_2_On,
  Atividade5__St_2_Off
} Atividade5__st_2;

Atividade5__st_2 Atividade5__st_2_of_string(char* s);

char* string_of_Atividade5__st_2(Atividade5__st_2 x, char* buf);

typedef enum {
  Atividade5__St_1_On,
  Atividade5__St_1_Off
} Atividade5__st_1;

Atividade5__st_1 Atividade5__st_1_of_string(char* s);

char* string_of_Atividade5__st_1(Atividade5__st_1 x, char* buf);

typedef enum {
  Atividade5__St_Sexta_feira,
  Atividade5__St_Seguranca,
  Atividade5__St_Neutro,
  Atividade5__St_Ebd,
  Atividade5__St_DomingoL,
  Atividade5__St_Domingo
} Atividade5__st;

Atividade5__st Atividade5__st_of_string(char* s);

char* string_of_Atividade5__st(Atividade5__st x, char* buf);

typedef enum {
  Atividade5__SEXTA,
  Atividade5__EBD,
  Atividade5__DOMINGO,
  Atividade5__DOMINGOL,
  Atividade5__NEUTRO,
  Atividade5__SEGURANCA
} Atividade5__modes;

Atividade5__modes Atividade5__modes_of_string(char* s);

char* string_of_Atividade5__modes(Atividade5__modes x, char* buf);

#endif // ATIVIDADE5_TYPES_H
