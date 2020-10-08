//
//  pipes.c
//
//
//  Created by Mauricio de Garay, Bernardo García and Fernando Tapia on 29/09/2020.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>



/* Function prototypes. */


/*
* La función openFile  se encarga de retornar un filepointer con un nuevo archivo de tipo lectura.
*
*
* @params

*
* @returns
       *FILE fpointer

*/
FILE* pipesOpenFile(char *archivo)
{
    return (fopen(archivo, "rt"));
}


/*
* La función closeFile  se encarga de cerrar el filepointer del archivo.
*
*
* @params
    archivo
*
* @returns
       void

*/
void pipesCloseFile(FILE *data)
{
    fclose(data);
}

/*
* La función writeFile  se encarga de escribir un archivo CSV con los arreglos que recibe.
*
*
* @params
    int rows
    float[] RespuestaResorte
    float[] TiempoDiscreto
    FILE * fpointer
*
* @returns
*/

void pipesObtenerValores(float *arreglo, FILE *archivo){
  float Valor;
  int Basura;
  while(fscanf(archivo, "%d,%f\n", &Basura, &Valor)==1){
    printf("%f\n", Valor);
  }
  getchar();
    //archivo[i]=Valor;
  //}
}

/*
void pipesWriteFile(int rows, float RespuestaResorte[], float TiempoDiscreto[], FILE * fpointer)
{
    int i;
	for(i=0; i<rows; i++)
    {
		fprintf(fpointer, "%.2f \t %.4f \n", TiempoDiscreto[i], RespuestaResorte[i]);
	}
}

* La función openGnuPlot  se encarga de retornar un pipepointer que tenga una conexión establecida con GNUPlot.
*
*
* @params

*
* @returns
       FILE * gnupointer


void pipesOpenGnuPlot()
{
    return (popen("gnuplot -persist", "w"));
}

* La función pipesGraphGnuPlot se encarga de graficar en GNUPlot los datos que tenga en un archivo.
*
*
* @params
    gnupointer
    NombreArch
*
* @returns
void pipesGraphGnuPlot(FILE * gnupointer, char NombreArch[])
{
    char cont;
    fprintf(gnupointer,"plot \"%s\" using 1:2 with lines\n", NombreArch);
    sleep(1);
    fflush(gnupointer);
    printf("Presiona enter para continuar...\n");
    scanf("%c", &cont);
    fflush(stdin);
}

*/
