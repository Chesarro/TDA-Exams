//
//  controlador.h
//
//
//  Created by Bernardo García 8/oct/2020
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "vista.h"
#include "modelo.h"
#include "pipes.h"
#include "seguridad.h"
#include "memoria.h"
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
void controlador();

#undef controlador_IMPORT
#undef EXTERN
#endif /*controlador.h*/
