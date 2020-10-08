#include"TDA_Statistics.h"

float * modelo_Lee_Archivo(FILE * Archivo, int * dimension)
{
  int count_datos = 0, i = 0;
  
  int temp;
  float temp2;
  
  float * data_array;

  //Primero lo leemos sin guardar nada para determinar su tamaño.
  while(!feof(Archivo))
  {
    fscanf(Archivo,"%d,%f\n",&temp,&temp2);
    count_datos++;
  }

  *dimension = count_datos;

  //Con la cantidad obtenida, instanciamos el arreglo.
  data_array = (float *)malloc(count_datos * sizeof(float));

  rewind(Archivo);

  //Lo leemos nuevamente y esta vez guardamos los datos en el arreglo
  while(!feof(Archivo))
  {
    fscanf(Archivo,"%d,%f\n",&temp,&data_array[i]);
    i++;
  }

  //Lo retornamos cuando hayamos recopilado los datos.
  return data_array;
}
