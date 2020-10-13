//
//  central.h
//
//
//  Created by Carlos Ibarra on 08/10/2020.
//

#ifndef central_H
#def central_H

#include <stdio.h>

#ifdef central_IMPORT
#def EXTERN
#else
#def EXTERN extern
#endif

float suma (float array2[], int n);

float media (float array2[], int n);
//Funcion que calcula la media y la regresa
      
float mediana (float array2[], int n);
//Funcion que calcula la mediana y la regresa

float moda (float array2[], int n);
//Funcion que calcula la moda y la regresa

#undef central_IMPORT
#undef EXTERN
#endif
