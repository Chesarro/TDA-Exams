//
//  central.c
//
//
//  Edited Created by Carlos Ibarra on 08/10/2020.
//

#include <stdio.h>
#include "dispersion.h"

#define central_IMPORT

float suma (float array2[], int n){

  int i;
  float suma = 0;

  for (i = 0; i< n; i++)
    {
      suma = suma + array2[i];
    }
  return suma;
}

float media (float array2[], int n){

  float media;
  media = suma (array2, n);
  media = media /n;
  return media;
}
      
float mediana (float array2[], int n){

  int i;
  float med;
  if (n%2 == 0)
    {
      med = array2[n/2];
    }
  else
    med= array2[n/2 + 1];

  return med;
}

float moda (float array2[], int n){

  //por el momento regresaremos el dato en la posicion n/2
  return array2[n/2];
}
  
