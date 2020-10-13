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
  float media1, mediana1, moda1, desviacion1, rango1, intercuartil1;
  float array2[100]; //arreglo ordenado;

  //Leer datos
  fp = fopen ("data.csv", "r");
  if (fp != NULL){
   
    while (fscanf (fp, "%f", &x)==1){
      array1[i] = x;
      i++;
    }
    fclose (fp);
  }

  //Aqui se ordena el arreglo
  //array2 = array1 ordenado

  n = sizeof(array2)/sizeof(array2[0]);
  
  //Medidas de tendencia central
  media1 = media (array2, n);
  mediana1 = mediana (array2, n);
  moda1 = moda (array2, n);
  //Medidas de dispersion
  desviacion1 = desviacion (array2, n);
  rango1 = rango (array2, n);
  intercuartil1 = intercuartil (array2, n);

  printf("Ancho de clase: ");
  scanf("%d",&ancho_clase);

  //histograma (array2); 

  //Guardar datos
  fp = fopen ("data_statistics.csv", "w");
  
  fprintf(fp, "media: &.2f", media1);
  fprintf(fp, "mediana: &.2f", mediana1);
  fprintf(fp, "moda: &.2f", moda1);
  fprintf(fp, "desviacion: &.2f", desviacion1);
  fprintf(fp, "rango: &.2f", rango1);
  fprintf(fp, "distancia intercuaritil: &.2f", intercuartil1);
  fclose(fp);

  //Segundo archivo, con datos de histograma, para graficar
  //fp = fopen ("data_graphics.csv", "w");
  //fprintf (informacion de clases del histograma);
  //fclose(fp);

  //pipe a gnuplot
  /*pipe = popen("gnuplot -persist");
  fprintf(pipe, "plot data_graphics.csv with lines");
  pclose(pipe);
}*)
  
