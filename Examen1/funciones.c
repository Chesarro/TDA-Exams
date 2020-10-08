//
//  funciones.c
//  
//
//  Created by Castro Bouquet Ildefonso on 08/10/2020.
//

/* Libraries */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#include"tipo.h"

/* funciones.c -- Functions */
int readFile(float array[])
{
    int i,cont;
    i=0;
    cont=0;
    FILE *file;
    file=fopen("data.csv","r");
    if(file==NULL)
    {
        printf("No se pudo abrir el archivo\n");
        exit(0);
    }
    while(fscanf(file,"%f\n",&array[i]))//scanning every value
    {
        i++;
    }
    cont=i;
    for(i=cont;i<100;i++)//putting 0 in empty array, avoiding array trash
    {
        array[i]=0;
    }
    fclose(file);
    return cont;
}
void orderArray(float *a,int n)
{
    int j,i;
    float tmp;
    for (int i = 0; i < n; i++)             //Loop for ascending ordering
	{
		for (int j = 0; j < n; j++)         //Loop for comparing other values
		{
			if (a[j] > a[i])                //Comparing other array elements
			{
				int tmp = a[i];         //Using temporary variable for storing last value
				a[i] = a[j];            //replacing value
				a[j] = tmp;             //storing last value
			}  
        }
    }	
}
void calculate(DATOS *datos,float array[])
{
    int cont,frecuencia,i;
    float suma=0;
    float mitad;
    int mitadint;
    float varianza;
    //start media
    for(i=0;i<datos->cant;i++)
    {
        suma=suma+array[i];
    }
    datos->media=suma/datos->cant;
    //end media
    //start mediana
    mitad=datos->cant/2;
    if(datos->cant%2==0)
    {   
        mitad=datos->cant/2;
        mitadint=mitad;
        datos->mediana=(array[mitadint-1]+array[mitadint])/2;
    }
    else
    {
        mitad=datos->cant/2;
        mitad=mitad-0.5;
        mitadint=mitad;
        datos->mediana=array[mitadint];
    }
    //end mediana
    //start moda
    i=0;
    cont=0;
    datos->moda=array[i];
    while(i<datos->cant)
    {
        if(array[i]==array[i+1])
        {
            cont++;
            i++;
        }
        else
        {
            if(cont>frecuencia)
            {
                datos->moda=array[i];
                frecuencia=cont;
                cont=1;
                i++;
            }
            else
            {
                cont=1;
                i++;
            }
        }
    }
    //end moda
    //start desviacion
    for(i=0;i<datos->cant;i++)
    {
        varianza+=pow((array[i]-datos->media),2.0);
    }
    datos->desv=sqrt(varianza);
    //end desviacion
    //start rango
    datos->rango[0]=array[0];
    datos->rango[1]=array[datos->cant-1];
    //end rango
    //start distancia intercuantil
    int idk=0;
    float idk2=0;
    int idk3=0;
    float idk4=0;
    idk2=datos->cant*0.95;
    idk4=datos->cant*0.25;
    idk=idk2;
    idk3=idk4;
    datos->dist=array[idk]-array[idk3];
    //end distancia intercuantil
}
void printValues(DATOS *datos)
{
    printf("De los %d valores introducidos,\n",datos->cant);
    printf("Los valores obtenidos son:\n");
    printf("La media es : %f\n",datos->media);
    printf("La mediana es : %f\n",datos->mediana);
    printf("La moda es : %f\n",datos->moda);
    printf("La desviacion Estandar es : %f\n",datos->desv);
    printf("El rango es : %f, %f\n",datos->rango[0],datos->rango[1]);
    printf("La distancia intercuantil es : %f\n",datos->dist);
}
void fillFile(float array[],DATOS *datos)
{
    int i;

    FILE *file;
    file=fopen("data_statistic.csv","w");
    for(i=0;i<datos->cant;i++)
    {
        fprintf(file,"%d, %f\n",);
    }
}