#include"TDA_Statistics.h"

FILE * modelo_Archivo(char * nombre_archivo, char * modo)
{
  FILE * Archivo = NULL;

  Archivo = fopen(nombre_archivo,modo);

  return Archivo;
}
