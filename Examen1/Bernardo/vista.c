//
//  vista.c
//
//
//  Created by Bernardo García 8/oct/2020
//

#include "vista.h"

void vista_archivo(char *archivo){
  system("clear");
  printf("Dame el nombre del archivo: ");
  scanf("%s", archivo);
  fpurge(stdin);
}

void vista_error(){
  printf("\nINVALIDO. Presiona enter para volver a intentar: ");
  getchar();
  fpurge(stdin);
}
