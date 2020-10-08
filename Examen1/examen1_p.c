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
  inicio= NULL;
  printf("\n\t---> BIENVENIDO <---\n\n");
  printf("Por favor inserte el nombre de su Data Flie:");
  cargar_datos("data.csv", &inicio,&aux);
}
