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
    float temporario, media, mediana, stDev, Rang, DistInt;
    float *arr = malloc(50 * sizeof(float));
    
    arch1 = fopen("data1.csv", "r");
    arch2 = fopen("dataStatistic.csv", "w");
    arch3 = fopen("Histograma.csv", "w");
    
    for(cont = 0; cont < 50; cont ++){
        fscanf(arch1, "%f, %f", &arr[cont], &arr[cont]);
        //printf("%d: %f \n",cont, arr[cont]);
    }
    
    for(i = 0; i < 49; i++){
        for(j = 0; j < 49 - i; j++){
            if(arr[j]> arr[j+1]){
                temporario = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temporario;
            }
        }
    }
    mediana = median( arr);
    media = mean( arr);
    mod = mode(arr);
    
    stDev = stdev(arr,media);
    Rang = range(arr);
    DistInt = IQR(arr);
    
    imprimirRes(mediana,media,mod,stDev,Rang,DistInt,arch2);
    imprimirHist(arr,arch3);
        
    free(arr);
    fclose(arch1);
}
