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
    printf("1\n");
    /*datos.cant=readFile(array);*/
    datos.cant=llenarArray(array);
    printf("2\n");
    orderArray(array,datos.cant);
    printf("3\n");
    calculate(&datos,array);
    printf("4\n");
    printValues(&datos);
    printf("5\n");
    fillFile(array,&datos);
    printf("6\n");
    char *nombre="data_statistic";
    gnu_socket=popen("gnuplot -persist","w");
    fprintf(gnu_socket,"plot \"%s.csv\" using 1:2 with lines\n",nombre);/*Command for calling gnuplot internally*/
    pclose(gnu_socket);
    printf("7\n");
}