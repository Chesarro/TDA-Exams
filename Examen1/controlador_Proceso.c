#include"TDA_Statistics.h"

void controlador_Proceso(char * nombre_archivo)
{
  int i;

  int * tamano;
  FILE * Archivo = NULL;
  float * array;

  Archivo = modelo_Archivo(nombre_archivo,"r");

  array = modelo_Lee_Archivo(Archivo,tamano);

  modelo_Calcula_Centrales(array,tamano);
  
  free(array);

  fclose(Archivo);
}
