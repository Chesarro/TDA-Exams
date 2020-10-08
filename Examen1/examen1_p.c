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
  inicio= NULL;
  printf("\n\t---> BIENVENIDO <---\n\n");
  printf("Por favor inserte el nombre de su Data Flie:");
  gets(archivo);
  cargar_datos(archivo, &inicio,&aux);

  
  
  //liberar memoria
  liberar(inicio);
}
