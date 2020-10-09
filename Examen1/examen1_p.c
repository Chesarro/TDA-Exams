//
//  examen1_p.c
//  
//
//  Created by Jesús E. Domínguez B. on october 8th 2020.
//

/* Libraries */
#include<stdio.h>
#include<stdlib.h>
#include"med_valor_cent.h"

int main(void)
{
  listdata *inicio, *aux;
  char archivo[60];
  float med, med1ana;
  float m0da;
  inicio= NULL;
  printf("\n\t---> BIENVENIDO <---\n\n");
  printf("Por favor inserte el nombre de su Data Flie:");
  gets(archivo);
  cargar_datos(archivo, &inicio,&aux);

  ordenar_datos(inicio);

  med = media(inicio);
  printf("\n\n Media = %f\n\n", med);

  med1ana = mediana(inicio);
  printf("\n\n Mediana = %f\n\n", med1ana);

  m0da = moda(inicio);
  printf("\n\n Moda = %f\n\n", m0da);
  
  //liberar memoria
  liberar(inicio);
}
