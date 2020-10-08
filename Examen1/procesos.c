//
//  template.c
//  
//
//  Created by Juan Carlos Garcia on 08/10/20.
//

#include "main.h"
#include "procesos.h"
#include "files.h"

float median(float array[]){
    float res;
    res = ((array[24] + array[23])/2);
    
    
    
    return res;
}

int mode(float array[]){
    int res,cont,x,max;
    for(cont = 0; cont < 50; cont ++){
        int num = 0;
        for(x = 0; x < 50; x ++){
            if((int)array[x] == (int)array[cont]){
                num ++;
            }//end if
        }//end for (x)
        if(num > max){
            max = num;
            res = (int)array[cont];
        }//end if
    }//end for (cont)
    return res;
}

float mean(float array[]){
    float res;
    int cont;
    for(cont = 0; cont < 50; cont ++){
        res += array[cont];
    }
    res /= 50;
    
    
    return res;
}

float stdev(float array[], float mean){
    float res;
    int cont;
    
    for(cont = 0; cont < 50; cont ++){
        res += pow(array[cont]-mean,2);
    }
    res /= 50;
    
    return res;
}

float range(float array[]){
    float res;
    
    res = array[49] - array[0];
    
    return res;
}

float IQR(float array[]){
    float res, Q1, Q3;
    Q1 = (array[10]+array[11])/2;
    Q3 = (array[36]+array[37])/2;
    res = Q3 - Q1;
    
    return res;
}
