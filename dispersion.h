//
//  dispersion.h
//
//
//  Created by Carlos Ibarra on 08/10/2020.
//

#ifndef dispersion_H
#def dispersion_H

#include <stdio.h>
#include <math.h>

#ifdef dispersion_IMPORT
#def EXTERN
#else
#def EXTERN extern
#endif

float desviacion (array2, n);
//Funcion que calcula la desviacion y la regresa
      
float rango (array2, n);
//Funcion que calcula el rango y lo regresa

float intercuartil (array2, n);
//Funcion que calcula la la distanicia intercuartil y la regresa

#undef dispersion_IMPORT
#undef EXTERN
#endif
