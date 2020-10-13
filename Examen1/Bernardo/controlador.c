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
  float med, mod, medi, desvi, min, max, dist;
  int size=0;
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
  arreglo=memoriaNuevoMalloc(data, &size);
  rewind(data);
  pipesObtenerValores(arreglo, data);
  ordenar(arreglo, size);
  med=media(arreglo, size);
  mod=moda(arreglo, size);
  medi=mediana(arreglo, size);
  desvi=desviacion(arreglo, med, size);
  min=minimo(arreglo, size);
  max=maximo(arreglo, size);
  dist=distancia(arreglo, size);
  FILE *info=pipesWriteNewFile("data_statistic.txt");
  pipesWrite(info, med, mod, medi, desvi, min, max, dist);
  cast(arreglo, size);
  pipesCloseFile(info);
  FILE *especial=pipesWriteNewFile("data_plot.csv");
  pipesWritePlot(especial, arreglo, size);
  FILE* plot=pipesOpenGnuPlot();
  pipesGraphGnuPlot(plot, "data_plot.csv");
  free(arreglo);
  fclose(plot);
  pipesCloseFile(data);
  pipesCloseFile(especial);

}
