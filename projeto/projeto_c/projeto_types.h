/* --- Generated the 11/11/2019 at 8:46 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s instanciador projeto.ept --- */

#ifndef PROJETO_TYPES_H
#define PROJETO_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "instanciador_controller.h"
typedef enum {
  Projeto__St_15_Sexta_feira,
  Projeto__St_15_Seguranca,
  Projeto__St_15_Neutro,
  Projeto__St_15_Ebd,
  Projeto__St_15_DomingoL,
  Projeto__St_15_Domingo
} Projeto__st_15;

Projeto__st_15 Projeto__st_15_of_string(char* s);

char* string_of_Projeto__st_15(Projeto__st_15 x, char* buf);

typedef enum {
  Projeto__St_14_On,
  Projeto__St_14_Off
} Projeto__st_14;

Projeto__st_14 Projeto__st_14_of_string(char* s);

char* string_of_Projeto__st_14(Projeto__st_14 x, char* buf);

typedef enum {
  Projeto__St_13_On,
  Projeto__St_13_Off
} Projeto__st_13;

Projeto__st_13 Projeto__st_13_of_string(char* s);

char* string_of_Projeto__st_13(Projeto__st_13 x, char* buf);

typedef enum {
  Projeto__St_12_On,
  Projeto__St_12_Off
} Projeto__st_12;

Projeto__st_12 Projeto__st_12_of_string(char* s);

char* string_of_Projeto__st_12(Projeto__st_12 x, char* buf);

typedef enum {
  Projeto__St_11_On,
  Projeto__St_11_Off
} Projeto__st_11;

Projeto__st_11 Projeto__st_11_of_string(char* s);

char* string_of_Projeto__st_11(Projeto__st_11 x, char* buf);

typedef enum {
  Projeto__St_10_On,
  Projeto__St_10_Off
} Projeto__st_10;

Projeto__st_10 Projeto__st_10_of_string(char* s);

char* string_of_Projeto__st_10(Projeto__st_10 x, char* buf);

typedef enum {
  Projeto__St_9_On,
  Projeto__St_9_Off
} Projeto__st_9;

Projeto__st_9 Projeto__st_9_of_string(char* s);

char* string_of_Projeto__st_9(Projeto__st_9 x, char* buf);

typedef enum {
  Projeto__St_8_On,
  Projeto__St_8_Off
} Projeto__st_8;

Projeto__st_8 Projeto__st_8_of_string(char* s);

char* string_of_Projeto__st_8(Projeto__st_8 x, char* buf);

typedef enum {
  Projeto__St_7_On,
  Projeto__St_7_Off
} Projeto__st_7;

Projeto__st_7 Projeto__st_7_of_string(char* s);

char* string_of_Projeto__st_7(Projeto__st_7 x, char* buf);

typedef enum {
  Projeto__St_6_On,
  Projeto__St_6_Off
} Projeto__st_6;

Projeto__st_6 Projeto__st_6_of_string(char* s);

char* string_of_Projeto__st_6(Projeto__st_6 x, char* buf);

typedef enum {
  Projeto__St_5_On,
  Projeto__St_5_Off
} Projeto__st_5;

Projeto__st_5 Projeto__st_5_of_string(char* s);

char* string_of_Projeto__st_5(Projeto__st_5 x, char* buf);

typedef enum {
  Projeto__St_4_On,
  Projeto__St_4_Off
} Projeto__st_4;

Projeto__st_4 Projeto__st_4_of_string(char* s);

char* string_of_Projeto__st_4(Projeto__st_4 x, char* buf);

typedef enum {
  Projeto__St_3_On,
  Projeto__St_3_Off
} Projeto__st_3;

Projeto__st_3 Projeto__st_3_of_string(char* s);

char* string_of_Projeto__st_3(Projeto__st_3 x, char* buf);

typedef enum {
  Projeto__St_2_On,
  Projeto__St_2_Off
} Projeto__st_2;

Projeto__st_2 Projeto__st_2_of_string(char* s);

char* string_of_Projeto__st_2(Projeto__st_2 x, char* buf);

typedef enum {
  Projeto__St_1_On,
  Projeto__St_1_Off
} Projeto__st_1;

Projeto__st_1 Projeto__st_1_of_string(char* s);

char* string_of_Projeto__st_1(Projeto__st_1 x, char* buf);

typedef enum {
  Projeto__St_Sexta_feira,
  Projeto__St_Seguranca,
  Projeto__St_Neutro,
  Projeto__St_Ebd,
  Projeto__St_DomingoL,
  Projeto__St_Domingo
} Projeto__st;

Projeto__st Projeto__st_of_string(char* s);

char* string_of_Projeto__st(Projeto__st x, char* buf);

#endif // PROJETO_TYPES_H
