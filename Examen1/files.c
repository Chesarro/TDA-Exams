//
//  template.c
//  
//
//  Created by Juan Carlos Garcia on 08/10/20.
//

#include "main.h"
#include "procesos.h"
#include "files.h"

void imprimirRes(float mediana,float media,int mod,float stDev,float Rang,float DistInt,FILE * arch2){
    fprintf(arch2, "mediana: , %f\n",mediana);
    fprintf(arch2, "media: , %f\n",media);
    fprintf(arch2, "moda: , %d\n",mod );
    fprintf(arch2, "Desviacion Estandar: , %f\n",mediana );
    fprintf(arch2, "Rango: , %f\n",Rang );
    fprintf(arch2, "Distancia intercuartíl: , %f\n",DistInt );
}

void imprimirHist(float arr[],FILE * arch3){
    int cont;
    
    for(cont = 0; cont < 50; cont ++){
        fprintf(arch3,"%d ,%d\n",cont, (int)arr[cont]);
    }
    
    
}
