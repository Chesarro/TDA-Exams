//
//  vista.h
//
//
//  Created by Bernardo García 8/oct/2020
//

#ifndef vista_h
#define vista_h

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

#ifndef vista_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif


/* Global variables declarations. */
//

/* Function prototypes. */

EXTERN void vista_archivo(char *archivo);

EXTERN void vista_error();
/*
 *
 *
*/

#undef vista_IMPORT
#undef EXTERN
#endif /* vista_h */
