//
//  central.c
//
//
//  Edited Created by Carlos Ibarra on 08/10/2020.
//

#include <stdio.h>

#define central_IMPORT

float media (array2, n){

  int i;
  float suma= 0;

  for (i = 0; i< n; i++)
    {
      suma= suma + array2[i];
    }
  suma = suma / n;
  return suma;
}
      
float mediana (array2, n){

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

float moda (array2, n){

  //por el momento regresaremos el dato en la posicion n/2
  return array[n/2];
}
  
