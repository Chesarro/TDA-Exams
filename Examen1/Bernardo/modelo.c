//
//  vista.c
//
//
//  Created by Bernardo García 8/oct/2020
//

#include "modelo.h"
#include <math.h>

void ordenar(float *arreglo, int size){
  float extra=0;
  for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
      if(arreglo[i]>arreglo[j]){
        extra=arreglo[j];
        arreglo[j]=arreglo[i];
        arreglo[i]=extra;
      }
    }
  }
}

float media(float *arreglo, int size){
  float Sum=0;
  for(int i=0; i<size; i++){
    Sum=Sum+arreglo[i];
  }
  return Sum=Sum/size;
}

float mediana(float *arreglo, int size){
  int mediana;
  mediana=size;
  mediana=mediana/2;
  if(size%2==0){
    return arreglo[mediana];
  }
  else{
    return (arreglo[mediana]+arreglo[mediana+1])/2;
  }
}

float moda(float *arreglo, int size){
  int contador=0;
  int max=0;
  float moda=0;
  for(int i=0; i<size; i++){
    contador=0;
    for(int j=0; j<size; j++){
      if(arreglo[i]==arreglo[contador]){
        contador=contador+1;
      }
    }
    if(contador>max){
      moda=arreglo[i];
    }
  }
  return moda;
}

float desviacion(float *arreglo, float media, int size){
  float Sum=0;
  for(int i=0; i<size; i++){
    Sum=Sum+(pow(arreglo[i]-media,2));
  }
  Sum=Sum/size;
  return sqrt(Sum);
}

float minimo(float *arreglo, int size){
  float Minimo=99999;
  for(int i=0; i<size; i++){
    if(arreglo[i]<Minimo){
      Minimo=arreglo[i];
    }
  }
  return Minimo;
}

float maximo(float *arreglo, int size){
  float Maximo=0;
  for(int i=0; i<size; i++){
    if(arreglo[i]>Maximo){
      Maximo=arreglo[i];
    }
  }
  return Maximo;
}

float distancia(float *arreglo, int size){
  int A=(int)size*0.95;
  int B=(int)size*0.25;
  float distancia=arreglo[A]-arreglo[B];
  return distancia;
}

void cast(float *arreglo, int size){
  for(int i=0; i<size; i++){
    arreglo[i]=(int)arreglo[i];
  }
}
