//
//  pipes.h
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
#ifndef pipes_h
#define pipes_h
#ifndef pipes_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif


/* Función del módulo. */
/*
* El módulo pipes se encarga de abrir y escribir el archivo csv con los resultados, y además de establecer la conexión con GNUPlot y graficar este archivo.
*
*
*/


/* Function prototypes. */


/*
* La función openFile  se encarga de retornar un filepointer con un nuevo archivo de tipo escritura.
*
*
* @params
    
*
* @returns
       *FILE fpointer

*/
EXTERN FILE* pipesOpenFile(char ReadOrWrite[], char Nombre[]);
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
EXTERN void pipesWriteFile(int rows, DatosCSV DatosHistograma[], FILE *fpointer);

/*
* La función openGnuPlot  se encarga de retornar un pipepointer que tenga una conexión establecida con GNUPlot.
*
*
* @params
    
*
* @returns
       FILE * gnupointer

*/
EXTERN FILE* pipesOpenGnuPlot();

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
EXTERN void pipesGraphGnuPlot(FILE * gnupointer, char NombreArch[]);
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
EXTERN int pipesDoesFileExist(char NombreArch[]);
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
EXTERN DatosCSV* pipesReadCSV(FILE* fpointer);
#undef pipes_IMPORT
#undef EXTERN
#endif 