#include"TDA_Statistics.h"

void vista_Menu()
{
  char nombre_archivo[50];
  
  system("clear");

  printf("\n\nIngrese el nombre del archivo para la captura de datos.");
  printf("\nNombre del archivo: ");
  gets(nombre_archivo);

  controlador_Proceso(nombre_archivo);

  
}

