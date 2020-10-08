#include <stdio.h>
#include <stdlib.h>
//#include "dispersion.h"
#include "media.h"
#include "files.h"

int crearhnum(int aux[100][2], int num[]);
int main(void)
{
char ar[50];
int num[100];
int hnum[100][2];
int cant;
int auxcant;
int media, mediana, moda;
//int dispersion
printf("Inserte el nombre del archivo a leer: ");
scanf("%s", ar);

files_leer(ar, num, &cant);
media=media_media(num, cant);
mediana=media_mediana(num,cant);
moda=media_moda(num,cant);

auxcant=crearhnum(hnum, num,cant);

files_meterdata(media, mediana, moda);

files_meterhisto(hnum, auxcant);

return 0;
}

int crearhnum(int aux[100][2], int num[], int cant)
{
int i;
int auxcant=0;
int j=0;
int moda=0, nummoda=0;
for(i=0;i<cant;i++)
{
	if(i==0)
	{
	aux[0][0]=num[i];
	aux[0][1]=1;
	auxcant++;
	}
	else
	{
		for(j=0;j<auxcant;j++)
		{
			if(num[i]==aux[j][0])
			aux[j][1]++;
		}
		if(j==auxcant)
		{
			aux[auxcant][0]=num[i];
			aux[auxcant][1]=1;
			auxcant++;
		}
	}

}
return auxcant;
}
