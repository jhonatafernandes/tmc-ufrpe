/* --- Generated the 9/9/2019 at 10:10 --- */
/* --- heptagon compiler, version 1.03.00 (compiled thu. may. 3 2:35:29 CET 2018) --- */
/* --- Command line: /usr/local/bin/heptc -target c -target z3z -s twovens atividade3.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Atividade3__twovens_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int finish;
  int start;
  int c;
  int cold;
  int temp_ok;
  Atividade3__twovens_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Atividade3__twovens_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    printf("finish ? ");
    scanf("%d", &finish);;
    
    printf("start ? ");
    scanf("%d", &start);;
    
    printf("c ? ");
    scanf("%d", &c);;
    
    printf("cold ? ");
    scanf("%d", &cold);;
    
    printf("temp_ok ? ");
    scanf("%d", &temp_ok);;
    Atividade3__twovens_step(finish, start, c, cold, temp_ok, &_res, &mem);
    printf("=> ");
    printf("%d ", _res.estate);
    printf("=> ");
    printf("%d ", _res.power);
    puts("");
    fflush(stdout);
  };
  return 0;
}

