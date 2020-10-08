//
//  template.h
//  
//
//  Created by Juan Carlos Garcia on 08/10/20.
//

#ifndef files_h
#define files_h

#include <stdio.h>
#include <stdlib.h>

#ifndef files_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

/*
 * @function
 *
 * @params
 *
 * @return
 *
 */
EXTERN void imprimirRes(float mediana,float media,int mod,float stDev,float Rang,float DistInt,FILE * arch2);



/*
 * @function
 *
 * @params
 *
 * @return
 *
 */
EXTERN void imprimirHist(float arr[],FILE * arch3);

#endif /* files_h */
