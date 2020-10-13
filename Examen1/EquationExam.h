
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



EXTERN void calculaVC(float *valorestabla, int MAX, float *media, float *mediana, float *moda);
EXTERN void calculaVD(float *valorestabla,int MAX, float mediana, float *desviacion, float *distancia);


#undef equations_IMPORT
#undef EXTERN
#endif /* equiations_h */
