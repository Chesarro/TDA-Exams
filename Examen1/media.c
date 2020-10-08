//
//  media.h
//
//
//  Created by David Perez on 08/10/2020.
//


#include <stdio.h>
#include <stdlib.h>
#include "media.h"

/*
 *
 * La funcion media_media calcula la media de los datos
 *
 * @params
 *      num (int[]):
 *   arreglo de numeros del archivo
 *      cant(int);
 *   cantidad de datos del array
 * @returns
 *     int
*/


int media_media(int num[], int cant)
{
	int i, sum=0;
for(i=0;i<cant; i++)
	sum=sum+num[i];
return (sum/cant);
}
/*
 *
 * La funcion media_mediana encuenta la mediana de los datos
 * del archivo.
 *
 * @params
 *
 *    num(int []);
 *   arreglo de numeros del archivo
 *    cant(int);
 *   cantidad de elementos
 * @returns
 *  int.
*/


int media_mediana(int num[], int cant)
{

	if(cant%2==1)
return num[(cant/2)];
else
return ((num[cant/2] + num[(cant/2)-1])/2)
}

/*
 *
 * La funcion media_moda regresa el valor que mas veces se repitio.
 *
 * @params
 *      num(int[]);
 *   arreglos de numeros
 *      num(int);
 *   cantidad de elementos.
 * @returns
 *  double
*/


int media_moda(int num[], int cant)
{
int i, aux[cant][2];
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
for(j=0;j<auxcant;j++)
{
if(aux[j][1]>=nummoda)
{
nummoda=aux[j][1];
moda=aux[j][0];
}
}

return moda;
}
