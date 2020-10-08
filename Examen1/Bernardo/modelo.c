//
//  vista.c
//
//
//  Created by Bernardo García 8/oct/2020
//

#include "modelo.h"
#include <math.h>

void ordenar(float *arreglo);
float media(float *arreglo);
float mediana(float *arreglo);
float moda(float *arreglo);

void modelo(){
}

void ordenar(float *arreglo){
  float extra=0;
  for(int i=0; i<sizeof(arreglo); i++){
    for(int j=i+1; j<sizeof(arreglo); j++){
      if(arreglo[i]>arreglo[j]){
        extra=arreglo[j];
        arreglo[j]=arreglo[i];
        arreglo[i]=arreglo[j];
      }
    }
  }
}

void modeloMedidasValorCentral(float *arreglo){
  media(arreglo);
}

float media(float *arreglo){
  float Sum=0;
  for(int i=0; i<sizeof(arreglo); i++){
    Sum=Sum+arreglo[i];
  }
  return Sum=Sum/sizeof(arreglo);
}

float mediana(float *arreglo){
  int mediana;
  mediana=sizeof(arreglo)/2;
  if(mediana%2==0){
    return mediana;
  }
  else{
    mediana=((int)(mediana)+(int)(mediana)+1)/2;
    return mediana;
  }
}

float moda(float *arreglo){
  int contador=0;
  int max=0;
  float moda=0;
  for(int i=0; i<sizeof(arreglo); i++){
    contador=0;
    for(int j=0; j<sizeof(arreglo); j++){
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

float desviacion(float *arreglo, float media){
  float Sum=0;
  for(int i=0; i<sizeof(arreglo); i++){
    Sum=Sum+(pow(arreglo[i]-media,2));
  }
  Sum=Sum/sizeof(arreglo);
  return sqrt(Sum);
}

float minimo(float *arreglo){
  float Minimo=99999;
  for(int i=0; i<sizeof(arreglo); i++){
    if(arreglo[i]<Minimo){
      Minimo=arreglo[i];
    }
  }
  return Minimo;
}

float maximo(float *arreglo){
  float Maximo=0;
  for(int i=0; i<sizeof(arreglo); i++){
    if(arreglo[i]>Maximo){
      Maximo=arreglo[i];
    }
  }
  return Maximo;
}

float distancia(float *arreglo){
  int A=(int)sizeof(arreglo)*0.95;
  int B=(int)sizeof(arreglo)*0.25;
  float distancia=arreglo[A]-arreglo[B];
  return distancia;
}
