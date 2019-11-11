

#include <sys/types.h>
#ifndef _WIN32
#include <sys/select.h>
#include <sys/socket.h>
#else
#include <winsock2.h>
#endif
#include <string.h>
#include <microhttpd.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "_main.h"

#define PORT 8082
#define n 20

Projeto__instanciador_mem mem;
int glob_cnt=0;


struct item
{
    const char *key;
    const char *value;
};


struct item dict[n];

int save_items (void *cls, enum MHD_ValueKind kind, 
                   const char *key, const char *value)
{
  dict[glob_cnt].key = key; 
  dict[glob_cnt].value = value;
  glob_cnt += 1;
  return MHD_YES;
}

static int
answer_to_connection (void *cls, struct MHD_Connection *connection,
                      const char *url, const char *method,
                      const char *version, const char *upload_data,
                      size_t *upload_data_size, void **con_cls)
{
  char *json = malloc( 10000 );
  memset(json, 0,sizeof(10000));
  setlocale(LC_ALL, "Portuguese_Brasil");
  struct MHD_Response *response;
  int ret;
  MHD_get_connection_values(connection, MHD_GET_ARGUMENT_KIND, &save_items, NULL);
  printf("Counter:%d", glob_cnt);
  
  glob_cnt = 0; int step_c;int step_max;int sexta_input=0;int ebd_input=0;int domingo_input=0;int domingol_input=0;int neutro_input=0;int seguranca_input=0;int l1=0;int l2=0;int l3=0;int l4=0;int lx=0;int lv=0;int inpMl=0;int inpMp=0;int inpSp=0;int inpSl=0;int inpProj=0;int inpGela=0;int inpAlarm=0;Projeto__instanciador_out _res;
  int i;
  for(i= 0; i < n; i++){
if (strcmp(dict[i].key, "sexta_input") == 0){ sexta_input= atoi(dict[i].value);} else if (strcmp(dict[i].key, "ebd_input") == 0){ ebd_input= atoi(dict[i].value);} else if (strcmp(dict[i].key, "domingo_input") == 0){ domingo_input= atoi(dict[i].value);} else if (strcmp(dict[i].key, "domingol_input") == 0){ domingol_input= atoi(dict[i].value);} else if (strcmp(dict[i].key, "neutro_input") == 0){ neutro_input= atoi(dict[i].value);} else if (strcmp(dict[i].key, "seguranca_input") == 0){ seguranca_input= atoi(dict[i].value);} else if (strcmp(dict[i].key, "l1") == 0){ l1= atoi(dict[i].value);} else if (strcmp(dict[i].key, "l2") == 0){ l2= atoi(dict[i].value);} else if (strcmp(dict[i].key, "l3") == 0){ l3= atoi(dict[i].value);} else if (strcmp(dict[i].key, "l4") == 0){ l4= atoi(dict[i].value);} else if (strcmp(dict[i].key, "lx") == 0){ lx= atoi(dict[i].value);} else if (strcmp(dict[i].key, "lv") == 0){ lv= atoi(dict[i].value);} else if (strcmp(dict[i].key, "inpMl") == 0){ inpMl= atoi(dict[i].value);} else if (strcmp(dict[i].key, "inpMp") == 0){ inpMp= atoi(dict[i].value);} else if (strcmp(dict[i].key, "inpSp") == 0){ inpSp= atoi(dict[i].value);} else if (strcmp(dict[i].key, "inpSl") == 0){ inpSl= atoi(dict[i].value);} else if (strcmp(dict[i].key, "inpProj") == 0){ inpProj= atoi(dict[i].value);} else if (strcmp(dict[i].key, "inpGela") == 0){ inpGela= atoi(dict[i].value);} else if (strcmp(dict[i].key, "inpAlarm") == 0){ inpAlarm= atoi(dict[i].value);} else 
    {
      printf("Not implemented %s", dict[i].key);
    }
  }
  

  for(i= 0; i < n; i++)
  {
    printf("%s, %s",dict[i].key, dict[i].value);
  }  Projeto__instanciador_step(sexta_input,ebd_input,domingo_input,domingol_input,neutro_input,seguranca_input,l1,l2,l3,l4,lx,lv,inpMl,inpMp,inpSp,inpSl,inpProj,inpGela,inpAlarm,
  &_res, &mem);

  char aux[1];
  //strcat(json, "{");strcat(json, "'policy':");sprintf(aux, "%d", _res.policy);strcat(json, aux);strcat(json, ", 'estateLamp1':");sprintf(aux, "%d", _res.estateLamp1);strcat(json, aux);strcat(json, ", 'estateLamp2':");sprintf(aux, "%d", _res.estateLamp2);strcat(json, aux);strcat(json, ", 'estateLamp3':");sprintf(aux, "%d", _res.estateLamp3);strcat(json, aux);strcat(json, ", 'estateLamp4':");sprintf(aux, "%d", _res.estateLamp4);strcat(json, aux);strcat(json, ", 'estateLampExt':");sprintf(aux, "%d", _res.estateLampExt);strcat(json, aux);strcat(json, ", 'estateVent':");sprintf(aux, "%d", _res.estateVent);strcat(json, aux);strcat(json, ", 'estateMicroL':");sprintf(aux, "%d", _res.estateMicroL);strcat(json, aux);strcat(json, ", 'estateMicrop':");sprintf(aux, "%d", _res.estateMicrop);strcat(json, aux);strcat(json, ", 'estateSomp':");sprintf(aux, "%d", _res.estateSomp);strcat(json, aux);strcat(json, ", 'estateSoml':");sprintf(aux, "%d", _res.estateSoml);strcat(json, aux);strcat(json, ", 'estateProj':");sprintf(aux, "%d", _res.estateProj);strcat(json, aux);strcat(json, ", 'estateGela':");sprintf(aux, "%d", _res.estateGela);strcat(json, aux);strcat(json, ", 'estateAlarm':");sprintf(aux, "%d", _res.estateAlarm);strcat(json, aux);strcat(json, "}");
  strcat(json, "{");strcat(json, "'policy':");sprintf(aux, "%d", _res.policy);strcat(json, aux);strcat(json, "}");

  response =
  MHD_create_response_from_buffer (strlen (json), (void *) json, 
             MHD_RESPMEM_PERSISTENT);
  ret = MHD_queue_response (connection, MHD_HTTP_OK, response);
  MHD_destroy_response (response);


  return ret;
}

int main(int argc, char** argv) {
  

  
  struct MHD_Daemon *daemon;
  Projeto__instanciador_reset(&mem);
  int i;
  for(i= 0; i < n; i++)
  {
    dict[i].key = "";
    dict[i].value = "";
  }

  daemon = MHD_start_daemon (MHD_USE_SELECT_INTERNALLY, PORT, NULL, NULL,
                             &answer_to_connection, NULL, MHD_OPTION_END);
  if (NULL == daemon)
    return 1;

  (void) getchar ();

  MHD_stop_daemon (daemon);
  return 0;
} 