//
//  dispersion.c
//
//
//  Created by Carlos Ibarra on 08/10/2020.
//

#include <stdio.h>
#include <math.h>

#define dispersion_IMPORT

float desviacion (array2, media, n){

  int i;
  float suma = 0;
  for (i=0; i <n; i++){

    suma = suma + ((array2[i] - media) * (array2[i] - media));
  }
  suma = suma / n;
  suma = sqrt (suma);
  return suma;
}
    
float rango (array2, n){

  float ran;
  ran = array2[n] - array2[0];
  return ran;
}

float intercuartil (array2, n){

  //por el momento se regresa la ultima posicion
  return array2[n];
}
