//
//  seguridad.h
//
//
//  Created by Bernardo García 8/oct/2020
//

#ifndef seguridad_h
#define seguridad_h

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

#ifndef seguridad_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif


/* Global variables declarations. */

typedef enum{
    SUCCESS,
    MEM_ERROR,
    VALUE_ERROR,
    INVALID,
}ERROR_CODE;
//

/* Function prototypes. */

EXTERN ERROR_CODE seguridad_validar(char *archivo);

#undef seguridad_IMPORT
#undef EXTERN
#endif /* seguridad_h */
