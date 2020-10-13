// modelo.h
//
//
//  Created by Mauricio de Garay on 29/09/2020.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "pipes.h"
#include "struct.h"
#define TRUE 1
#define FALSE 0
#ifndef modelo_h
#define modelo_h
#ifndef modelo_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif


/* Función del módulo. */
/*
* El módulo modelo se encarga de obtener los datos del CSV con apoyo de pipes, hacer los cálculos estadísticos y posteriormente escribir el archivo final (con ayuda de pipes)
*
*
*/


/* Function prototypes. */


/*
* La función modeloPrincipal  se encarga de controlar el flujo del modelo.
*
*
* @params
    NombreArchivo: el nombre del archivo donde están los datos
*
* @returns
      

*/
EXTERN void modeloPrincipal(char NombreArchivo[]);

#undef modelo_IMPORT
#undef EXTERN
#endif 