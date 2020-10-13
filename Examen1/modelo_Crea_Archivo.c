#include"TDA_Statistics.h"

void modelo_Crea_Archivo(float media, float mediana, float moda)
{
  FILE * Archivo = NULL;

  Archivo = modelo_Archivo("data_statistics.csv","w");

  fprintf(Archivo, "Media: %f\n",media);
  fprintf(Archivo, "Mediana: %f\n",mediana);
  fprintf(Archivo, "Moda: %f\n",moda);

  fclose(Archivo);
  
}
