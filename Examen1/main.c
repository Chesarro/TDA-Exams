//
//  template.c
//  
//
//  Created by Juan Carlos Garcia on 08/10/20.
//

#include "main.h"
#include "procesos.h"
#include "files.h"

int main(void){
    FILE * arch1, * arch2, * arch3;
    int cont = 0,i,j, mod;
    float temporario, media, mediana, stDev, Rang, DistInt; /*Declaración de variables*/
    float *arr = malloc(50 * sizeof(float));
    
    arch1 = fopen("data1.csv", "r");
    arch2 = fopen("dataStatistic.csv", "w"); /*Definicion de archivos*/
    arch3 = fopen("Histograma.csv", "w");
    
    for(cont = 0; cont < 50; cont ++){
        fscanf(arch1, "%f, %f", &arr[cont], &arr[cont]); /*Extraer datos de data1.csv */
    }
    
    for(i = 0; i < 49; i++){ /*Ordenar el array*/
        for(j = 0; j < 49 - i; j++){
            if(arr[j]> arr[j+1]){
                temporario = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temporario;
            }//end if
        }//end for (j)
    }//end for (i)
    
    mediana = median( arr); /*conseguir la mediana*/
    media = mean( arr); /*conseguir la media*/
    mod = mode(arr); /*conseguir la moda*/
    
    stDev = stdev(arr,media); /*conseguir la desviación estandar*/
    Rang = range(arr); /*conseguir el rango*/
    DistInt = IQR(arr); /*conseguir la distancia intercuartíl*/
    
    imprimirRes(mediana,media,mod,stDev,Rang,DistInt,arch2); /*imprimir los datos a archivos csv*/
    imprimirHist(arr,arch3);
        
    free(arr);
    fclose(arch1);
    fclose(arch2);//cerrar archivos y liberar memoria
    fclose(arch3);
}
