//
//  media.h
//
//
//  Created by David Perez on 28/09/2020.
//

#ifndef media_h
#define media_h


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

#ifndef media_IMPORT
#define EXTERN
#else
#define EXTERN extern
#endif

/* Types declarations. */

/* Global variables declarations. */


/* Function prototypes. */


/*
 *
 * La funcion media_media calcula la media de los datos
 *
 * @params
 *      num (int[]):
 *   arreglo de numeros del archivo
 *      cant(int);
 *   cantidad de datos del array
 * @returns
 *     int
*/


EXTERN int media_media(int mun[], int cant);
/*
 *
 * La funcion media_mediana encuenta la mediana de los datos
 * del archivo.
 *
 * @params
 *
 *    num(int []);
 *   arreglo de numeros del archivo
 *    cant(int);
 *   cantidad de elementos
 * @returns
 *  int.
*/


EXTERN int media_mediana(int num[], int cant);

/*
 *
 * La funcion media_moda regresa el valor que mas veces se repitio.
 *
 * @params
 *      num(int[]);
 *   arreglos de numeros
 *      num(int);
 *   cantidad de elementos.
 * @returns
 *  double
*/


EXTERN int media_moda(int num[], int cant);

#undef media_IMPORT
#undef EXTERN
#endif /* media_h */
