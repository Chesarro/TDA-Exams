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
 *  imprimirRes- manda los datos procesados a un .csv
 * @params
 *  mediana- la mediana de los datos
 *  media- la media de los datos (promedio)
 *  mod- la moda de los datos
 *  stDev- la desviacion estandar de los datos
 *  Rang- el rango de los datos
 *  DistInt- la distancia intercuartíl de los datos
 *  arch2- archivo a donde van los datos
 * @return
 *  N/A
 */
EXTERN void imprimirRes(float mediana,float media,int mod,float stDev,float Rang,float DistInt,FILE * arch2);



/*
 * @function
 *  imprimirHist- manda los datos a un .csv para conseguir el histograma
 * @params
 *  arr[]- arreglo con los datos
 *  arch3- el archivo a donde se va a imprimir
 * @return
 *  N/A
 */
EXTERN void imprimirHist(float arr[],FILE * arch3);

#endif /* files_h */
