// vista.h
//
//
//  Created by Mauricio de Garay on 08/10/2020
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "pipes.h"
#include "struct.h"
#define TRUE 1
#define FALSE 0
#ifndef vista_h
#define vista_h
#ifndef vista_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif


/* Función del módulo. */
/*
* El módulo vista se encarga de obtener el nombre del archivo del usuario y además desplegar el histograma al final del programa.
*
*
*/


/* Function prototypes. */


/*
* La función vistaSolicitarDatos  se encarga de pedirle un nombre de archivo al usuario
*
*
* @params
    NombreArchivo: el nombre del archivo donde están los datos
*
* @returns
      

*/
EXTERN void vistaSolicitarDatos(char NombreArchivo[]);
/*
* La función vistaDesplegarDatos  se encarga de desplegarle el histograma al usuario.
*
*
* @params
   
*
* @returns
      

*/
EXTERN void vistaDesplegarDatos();

#undef vista_IMPORT
#undef EXTERN
#endif 