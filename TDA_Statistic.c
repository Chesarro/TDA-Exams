//
//  TDA_statistic.c
//
//
//  Created by Carlos Ibarra on 08/10/2020.
//

#include <stdio.h>
#include <stdlib.h>

#include "central.h"
#include "dispersion.h"

int main (void){

  int i=0; //index para crear array
  int ancho_clase; //para histograma
  int n; //numero de datos
  
  FILE * fp; //abre .csv
  float array1[100]; //arreglo con los datos del archivo sin ordenar
  float x; //ayudante para lectura de file

  //estadisticos
  float media, mediana, moda, desviacion, rango, intercuartil;
  float array2[100]; //arreglo ordenado;

  //Leer datos
  fp = fopen ("data.csv", "r");
  if (fp != NULL){
   
    while (fscanf (fp, "%f", &x)==1){
      array1[i] = x;
      i++;
    }
    n = i;
    fclose (fp);
  }

  //Aqui se ordena el arreglo
  //array2 = array1 ordenado
  
  //Medidas de tendencia central
  media = media (array2, n);
  mediana = mediana (array2, n);
  moda = moda (array2, n);
  //Medidas de dispersion
  desviacion = desviacion (array2, n);
  rango = rango (array2, n);
  intercuartil = intercuartil (array2, n);

  printf("Ancho de clase: ");
  scanf("%d",&ancho_clase);

  //histograma (array2); 

  //Guardar datos
  //fp = fopen ("data_statistics.csv", "w");
  //fprintf (informacion de clases del histograma)
  //fprintf todos los estadisticos
  //fclose(fp);

  //pipe a gnuplot
}
  
