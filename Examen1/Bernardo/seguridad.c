#include "seguridad.h"

ERROR_CODE seguridad_validar(char *archivo){
  
  if(strcmp("data.csv", archivo)==0){
    return SUCCESS;
  }
  else{
    return INVALID;
  }

}
