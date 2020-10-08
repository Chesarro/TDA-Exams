
#ifndef EquationExam_h
#define EquationExam_h


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



#ifndef equations_IMPORT
#define EXTERN
#else
#define EXTERN extern
#endif

/* Types declarations. */

/* Global variables declarations. */


/* Function prototypes. */


/*
 *
 * La funcion equations_fuezas calcula la fuerza externa
 *
 * @params
 *      masa (double):
 * masa proporcionada por el usuario dado por el usuario 
 *      Dt(double); 
 *   diferencia de tiempo
 *    K (double):
 *  Constante del bongee
.*     xt (double)
 *   posicion 2 segundos atras atras
 * @returns
  int
*/


EXTERN void equations_fuerzas(double valorestabla[], double *media, double *mediana, double *moda);



#undef equations_IMPORT
#undef EXTERN
#endif /* equiations_h */
