#include <stdio.h>
#include <stdlib.h>
#include "dispersion.h"
#include "files.h"

int main(void)
{
char ar[50];
int num[100];
int cant;
int media, mediana, moda;
//int dispersion
printf("Inserte el nombre del archivo a leer: ");
scanf("%s", ar);

files_leer(ar, num, &cant);
media=media_media(num, cant);
mediana=media_mediana(num,cant);
moda=media_moda(num,cant);

//files_meterdata();
//files_meterhisto();


return 0;
}
