//
//  funciones.h
//  
//
//  Created by Castro Bouquet Ildefonso on 08/10/2020.
//
#ifndef funciones_h
#define funciones_h

#include <stdio.h>

#ifdef funciones_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

/* funciones.h -- Function prototypes */

EXTERN int readFile(float array[]);
EXTERN void orderArray(float *a,int n);
EXTERN void calculate(DATOS *datos,float array[]);
EXTERN void printValues(DATOS *datos);
EXTERN void fillFile(float array[],DATOS *datos);

#undef funciones_IMPORT
#undef EXTERN

#endif /* funciones_h */