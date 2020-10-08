//
//  files.h
//
//
//  Created by David Perez on 08/10/2020.
//

#ifndef files_h
#define files_h


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

#ifndef files_IMPORT
#define EXTERN
#else
#define EXTERN extern
#endif

/* Types declarations. */

/* Global variables declarations. */


/* Function prototypes. */


/*
 *
 * La funcion files_leer lee el archivo dado por el usuario
 *
 * @params
 *      name (char[]):
 *  nombre del archivo a leer
 *      num(int[]); 
 *   arreglo de numeros a leer
 *    cant (int*):
 *  cantidad leida de datos
 * @returns
 *  void
*/


EXTERN void files_leer(char name[], int num[], int *cant);
/*
 *
 * La funcion files_meterdata metes los datos calculados a un archivo; 
 *
 * @params
 *
 *    media(int);
 *   media calculada
 *    mediana (int);
 *   mediana calculada
 *    moda(int);
 *   moda calculada
 * @returns
 *  void.
*/


EXTERN void files_meterdata(int media, int mediana, int moda);

/*
 *
 * La funcion files_meterhisto crear el archivo que GNUPLOT puede leer
 *
 * @params
 *       num[int **]
 *  arreglo doble para ver numeros
 *      cant (int);
 *   cantidad de numeros
 * @returns
 *  void
*/


EXTERN void files_meterhisto(int num[100][2], int cant);

#undef files_IMPORT
#undef EXTERN
#endif /* files_h */
