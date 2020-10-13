#include <stdio.h>
#include <stdlib.h>
#include "files.h"

void files_leer(char name[], int num[], int *cant)
{
FILE *archivo=NULL;
char linea[50];

int i=0,aux;
archivo=fopen(name, "rt");

while(!feof(archivo))
{
fgets(linea, 50, archivo);
sscanf(linea, "%d,%d",&aux, &num[i]);
if(feof(archivo))
break;
i++;

}
(*cant)=i;
fclose(archivo);
}


void files_meterhisto(int num[100][2], int cant)
{
 FILE *archivo;
int i;
archivo=fopen("Data_histo.csv", "wt");
for(i=0;i<cant;i++)
fprintf(archivo, "%d, %d", num[i][0], num[i][1]);

fclose(archivo);
}

void files_meterdata(int media, int mediana, int moda)
{
FILE *archivo;
archivo=fopen("Data_Statistic.csv", "wt");

fprintf(archivo, "Media:\n\t%d\n", media);
fprintf(archivo, "Mediana:\n\t%d\n", mediana);
fprintf(archivo, "Moda:\n\t%d\n", moda);

fclose(archivo);

}
