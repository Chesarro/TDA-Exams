//
//  controlador.c
//
//
//  Created by Bernardo García 8/oct/2020
//
//#include "controlador.h"
#include "controlador.h"

int main()
{
  controlador();
}

void controlador(){
  char archivo[20];
  ERROR_CODE validar;
  float *arreglo=NULL;
  do{
    vista_archivo(archivo);
    validar=seguridad_validar(archivo);
    if(validar==INVALID)
      vista_error();
  }while(validar==INVALID);

  FILE* data=pipesOpenFile(archivo);
  arreglo=memoriaNuevoMalloc(data);
  rewind(data);
  pipesObtenerValores(arreglo, data);
  free(arreglo);
  //pipesReadFile(data);
  pipesCloseFile(data);
}
