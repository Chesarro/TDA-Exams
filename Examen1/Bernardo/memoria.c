#include "memoria.h"

float *memoriaNuevoMalloc(FILE* file, int *size){
  int Basura;
  float Basura2;
  float *buffer=NULL;
  while(fscanf(file, "%d,%f", &Basura, &Basura2)==2){
    *size=*size+1;
  }
  buffer = malloc(*size+1);
  return buffer;
}
