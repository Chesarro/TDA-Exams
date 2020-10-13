//
//  controlador.h
//
//
//  Created by Mauricio de Garay, Bernardo García and Fernando Tapia on 29/09/2020.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include "vista.h"
#include "modelo.h"
#ifndef controlador_h
#define controlador_h
#ifndef controlador_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif


/* Función del módulo. */
/*
* El módulo controlador se encarga de controlar el flujo de programa, ya que ésta es la encargada de conectar a los módulos de vista y modelo, así como revisar las validaciones.
*
*
*/
/* Function prototypes. */
/*
* La función Principal se encarga de controlar el flujo de programa, ya que ésta es la encargada de conectar a los módulos de vista y modelo, así como revisar las validaciones.
*
*
* @params
    
*
* @returns
       void

*/
EXTERN void controlador_Principal();

#undef controlador_IMPORT
#undef EXTERN
#endif 