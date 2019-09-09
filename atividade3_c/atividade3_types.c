/* --- Generated the 9/9/2019 at 10:10 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s twovens atividade3.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "atividade3_types.h"

Atividade3__st_1 Atividade3__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_Standby")==0)) {
    return Atividade3__St_1_Standby;
  };
  if ((strcmp(s, "St_1_Reheat")==0)) {
    return Atividade3__St_1_Reheat;
  };
  if ((strcmp(s, "St_1_Off")==0)) {
    return Atividade3__St_1_Off;
  };
  if ((strcmp(s, "St_1_Maintain")==0)) {
    return Atividade3__St_1_Maintain;
  };
  if ((strcmp(s, "St_1_Heat")==0)) {
    return Atividade3__St_1_Heat;
  };
}

char* string_of_Atividade3__st_1(Atividade3__st_1 x, char* buf) {
  switch (x) {
    case Atividade3__St_1_Standby:
      strcpy(buf, "St_1_Standby");
      break;
    case Atividade3__St_1_Reheat:
      strcpy(buf, "St_1_Reheat");
      break;
    case Atividade3__St_1_Off:
      strcpy(buf, "St_1_Off");
      break;
    case Atividade3__St_1_Maintain:
      strcpy(buf, "St_1_Maintain");
      break;
    case Atividade3__St_1_Heat:
      strcpy(buf, "St_1_Heat");
      break;
    default:
      break;
  };
  return buf;
}

Atividade3__st Atividade3__st_of_string(char* s) {
  if ((strcmp(s, "St_Standby")==0)) {
    return Atividade3__St_Standby;
  };
  if ((strcmp(s, "St_Reheat")==0)) {
    return Atividade3__St_Reheat;
  };
  if ((strcmp(s, "St_Off")==0)) {
    return Atividade3__St_Off;
  };
  if ((strcmp(s, "St_Maintain")==0)) {
    return Atividade3__St_Maintain;
  };
  if ((strcmp(s, "St_Heat")==0)) {
    return Atividade3__St_Heat;
  };
}

char* string_of_Atividade3__st(Atividade3__st x, char* buf) {
  switch (x) {
    case Atividade3__St_Standby:
      strcpy(buf, "St_Standby");
      break;
    case Atividade3__St_Reheat:
      strcpy(buf, "St_Reheat");
      break;
    case Atividade3__St_Off:
      strcpy(buf, "St_Off");
      break;
    case Atividade3__St_Maintain:
      strcpy(buf, "St_Maintain");
      break;
    case Atividade3__St_Heat:
      strcpy(buf, "St_Heat");
      break;
    default:
      break;
  };
  return buf;
}

