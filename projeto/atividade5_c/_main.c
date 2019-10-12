/* --- Generated the 12/10/2019 at 12:21 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s instanciador atividade5.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Atividade5__instanciador_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int sexta_input;
  int ebd_input;
  int domingo_input;
  int domingol_input;
  int neutro_input;
  int seguranca_input;
  int l1;
  int l2;
  int l3;
  int l4;
  int lx;
  int lv;
  Atividade5__instanciador_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Atividade5__instanciador_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("sexta_input ? ");
    scanf("%d", &sexta_input);;
    
    printf("ebd_input ? ");
    scanf("%d", &ebd_input);;
    
    printf("domingo_input ? ");
    scanf("%d", &domingo_input);;
    
    printf("domingol_input ? ");
    scanf("%d", &domingol_input);;
    
    printf("neutro_input ? ");
    scanf("%d", &neutro_input);;
    
    printf("seguranca_input ? ");
    scanf("%d", &seguranca_input);;
    
    printf("l1 ? ");
    scanf("%d", &l1);;
    
    printf("l2 ? ");
    scanf("%d", &l2);;
    
    printf("l3 ? ");
    scanf("%d", &l3);;
    
    printf("l4 ? ");
    scanf("%d", &l4);;
    
    printf("lx ? ");
    scanf("%d", &lx);;
    
    printf("lv ? ");
    scanf("%d", &lv);;
    Atividade5__instanciador_step(sexta_input, ebd_input, domingo_input,
                                  domingol_input, neutro_input,
                                  seguranca_input, l1, l2, l3, l4, lx, lv,
                                  &_res, &mem);
    printf("=> ");
    printf("%d ", _res.policy_3);
    printf("=> ");
    printf("%d ", _res.policy_2);
    printf("=> ");
    printf("%d ", _res.policy_1);
    printf("=> ");
    printf("%d ", _res.estateLamp1);
    printf("=> ");
    printf("%d ", _res.estateLamp2);
    printf("=> ");
    printf("%d ", _res.estateLamp3);
    printf("=> ");
    printf("%d ", _res.estateLamp4);
    printf("=> ");
    printf("%d ", _res.estateLampExt);
    printf("=> ");
    printf("%d ", _res.estateVent);
    puts("");
    fflush(stdout);
  };
  return 0;
}

