//
//  memoria.h
//
//
//  Created by Bernardo García 8/oct/2020
//

#ifndef memoria_h
#define memoria_h

/*
* System headers required by the following declarations
* (the implementation will import its specific dependencies):
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
* Application specific headers required by the following declarations
* (the implementation will import its specific dependencies):
*/

/* Constants declarations. */

/* Set EXTERN macro: */

#ifndef memoria_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif


/* Global variables declarations. */


/* Function prototypes. */
EXTERN float *memoriaNuevoMalloc(FILE* data, int *size);

#undef memoria_IMPORT
#undef EXTERN
#endif /* memoria_h */
