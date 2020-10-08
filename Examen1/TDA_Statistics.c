//
//  main.c
//  
//
//  Created by Castro Bouquet Ildefonso on 08/10/2020.
//

/* Libraries */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Custom Libraries */
#include"tipo.h"
#include"funciones.h"

/* Main */
int main(void)
{
    FILE *gnu_socket;
    DATOS datos;
    float array[100];
    datos.cant=readFile(&array);
    orderArray(&array,datos.cant);
    calculate(&datos,&array);
    printValues(&datos);
    fillFile(array,&datos);
    char *nombre="data_statistic";
    gnu_socket=popen("gnuplot -persist","w");
    fprintf(gnu_socket,"plot \"%s.csv\" using 1:2 with lines\n",nombre);/*Command for calling gnuplot internally*/
    pclose(gnu_socket);
}