#include"TDA_Statistics.h"

void modelo_Calcula_Centrales(float * array, int * tamano)
{
  float suma=0,media=0,mediana=0;
  int i;

  for(i=0;i<*tamano;i++)
  {
    suma = suma + array[i];
  }

  media = suma / *tamano;

  if(*tamano % 2 != 0)
  {
    mediana = array[*tamano/2];
  }

  else
  {
    mediana = (array[(int) *tamano/2] + array[((int) *tamano/2)+1])/2;
  }

  printf("Media = %f\n",media);
  printf("Mediana = %f\n",mediana);


  //Se manda un uno en el valor de la moda ya que no hubi tiempo de calcular la moda.
  modelo_Crea_Archivo(media,mediana,1);

}
