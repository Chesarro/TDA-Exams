#include "memoria.h"

float *memoriaNuevoMalloc(FILE* file){
  int size=0;
  float Basura;
  float Basura2;
  float *buffer=NULL;
  while(fscanf(file, "%f,%f\n", &Basura, &Basura2)==1){
    size=size+1;
  }
  buffer = malloc(size+1);
  return buffer;
}
