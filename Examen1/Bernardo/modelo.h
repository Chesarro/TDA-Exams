//
//  modelo.h
//
//
//  Created by Bernardo García 8/oct/2020
//

#ifndef modelo_h
#define modelo_h

/*
* System headers required by the following declarations
* (the implementation will import its specific dependencies):
*/

#include <stdio.h>
#include <stdlib.h>

/*
* Application specific headers required by the following declarations
* (the implementation will import its specific dependencies):
*/

/* Constants declarations. */

/* Set EXTERN macro: */

#ifndef modelo_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif


/* Global variables declarations. */
//

/* Function prototypes. */

EXTERN void ordenar(float *arreglo, int size);

EXTERN float media(float *arreglo, int size);

EXTERN float mediana(float *arreglo, int size);

EXTERN float moda(float *arreglo, int size);

EXTERN float desviacion(float *arreglo, float media, int size);

EXTERN float minimo(float *arreglo, int size);

EXTERN float maximo(float *arreglo, int size);

EXTERN float distancia(float *arreglo, int size);

EXTERN void cast(float*arreglo, int size);
/*
 *
 *
*/

#undef modelo_IMPORT
#undef EXTERN
#endif /* modelo_h */
