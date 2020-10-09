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
#include "struct.h"
#define TRUE 1
#define FALSE 0



/* Function prototypes. */


/*
* La función openFile  se encarga de retornar un filepointer con un nuevo archivo de tipo que recibe.
*
*
* @params
    ReadOrWrite: string indicando el modo con el que se desea abrir el archivo.
*
* @returns
       *FILE fpointer

*/
FILE* pipesOpenFile(char ReadOrWrite[], char Nombre[])
{
    if((strcasecmp(ReadOrWrite, "write")==0)==TRUE)
    {
        return (fopen(Nombre, "wt"));
    }
    else
    {
        return (fopen(Nombre, "rt"));
        
        
    }
}
/*
* La función writeFile  se encarga de escribir un archivo CSV con los arreglos que recibe.
*
*
* @params
    int rows
    DatosCSV[] DatosHistograma
    FILE * fpointer
*
* @returns
*/
void pipesWriteFile(int rows, DatosCSV DatosHistograma[], FILE *fpointer)
{
    int i;
	for(i=0; i<rows; i++)
    {
		fprintf(fpointer, "%f \t %d \n", DatosHistograma[i].valor, DatosHistograma[i].indice);	
	}	
}

/*
* La función openGnuPlot  se encarga de retornar un pipepointer que tenga una conexión establecida con GNUPlot.
*
*
* @params
    
*
* @returns
       FILE * gnupointer

*/
FILE* pipesOpenGnuPlot()
{
    return (popen("gnuplot -persist", "w"));
}

/*
* La función pipesGraphGnuPlot se encarga de graficar en GNUPlot los datos que tenga en un archivo.
*
*
* @params
    gnupointer
    NombreArch
*
* @returns
*/
void pipesGraphGnuPlot(FILE * gnupointer, char NombreArch[])
{
    char cont;
    fflush(stdin);
    fprintf(gnupointer,"set datafile separator \",\"\nset style data histograms\nplot \"%s\" using 2:xtic(1)\n", NombreArch);
    fflush(gnupointer);
    printf("Presiona enter para continuar...\n");
    scanf("%c", &cont);
    fflush(stdin);
}
/*
* La función pipesDoesFileExist se validar si existe un archivo con el nombre que recibe.
*
*
* @params
    NombreArch: El nombre del archivo a validar
*
* @returns
    TRUE si existe, FALSE si no.
*/
int pipesDoesFileExist(char NombreArch[])
{
    FILE * Archivo;
    if((Archivo=fopen(NombreArch, "rt"))==NULL)
    {
        return FALSE;
    }
    fclose(Archivo);
    return TRUE;
}
/*
* La función pipesReadCSV lee datos en formato .csv y lee un arreglo de una estructura con campos indice y valor.
*
*
* @params
    fpointer: apuntador de archivo a leer.
*
* @returns
    Datos: Datos leídos.
*/
DatosCSV* pipesReadCSV(FILE* fpointer)
{
    DatosCSV *Datos;
    Datos=(DatosCSV*)malloc((sizeof(DatosCSV))*100);
    int i=0;
    int indiceTemp;
    float valorTemp;
    while((fscanf(fpointer, "%d,%f\n", &indiceTemp, &valorTemp))==2)
    {
        
        Datos[i].indice=indiceTemp;
        Datos[i].valor=valorTemp;
        i=i+1;
    }
    Datos[0].tamano=i;
    
    return Datos;
}

