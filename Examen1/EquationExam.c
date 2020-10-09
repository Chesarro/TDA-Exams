#include "EquationExam.h"
#include "ExamMain.h"
#include "files.h"
#include <math.h>

/**
 * Obtiene el resultado de las medidas de valor central.
 * @param
 *  arreglo (float):
 *      El arreglo con nuestros datos. 
 *  MAX (float):
 *      El numero de nuestros datos
 *  media (float):
 *      Valor medio de nuestro arreglo
 *  mediana (float):
 *      Valor promedio de nuestro arreglo
 *
 * @return double.
*/
void calculaVC(float *arreglo, int MAX, float *media, float *mediana, float *moda)
{
  float suma=0, temp, modatemp[2][MAX];
  int i,j;
  
  for (i=0; i<2; i++)
 for (j=0; j<MAX; j++)
 modatemp[i][j] = 0;
  
  for(i=0;i<=MAX;i++)
    suma=suma+arreglo[i];
  *mediana=suma/MAX;
  printf("%f", *mediana);
  
   for (i = 0; i <= MAX; i++) 
  { 
    for (j = i + 1; j <= MAX; j++) 
    { 
      if (arreglo[j] < arreglo[i]) 
      { 
        temp = arreglo[j]; 
        arreglo[j] = arreglo[i]; 
        arreglo[i] = temp; 
      } 
    } 
  } 
   /*for(i=0;i<=MAX;i++)
   {for(j=0;j<=MAX;j++)
   {if(arreglo[i]!=modatemp[1][j])
     {modatemp[1][i]=arreglo[i];
     }
    else
      modatemp[2][i]=modatemp[2][i]+1;
    printf("%f, %f\n", modatemp[1][i],modatemp[2][i]);
   }
   
     printf("%f\n", arreglo[i]);
   }*/
 if((MAX+1)%2==0)
 {*media=arreglo[MAX/2];
   printf("%f\n", arreglo[MAX/2]);
 }
  else
  { *media= (arreglo[MAX/2]+arreglo[MAX/2+1])/2;
     printf("%f\n", (arreglo[MAX/2]+arreglo[MAX/2+1])/2);
  }
     
  
}
void calculaVD(float *arreglo,int MAX, float mediana, float *desviacion, float *distancia)
{ float sumatoria=0, q1=0, q3=0;
 int k, posicionq1, posicionq3;
 for(k=0;k<MAX;k++)
 sumatoria=sumatoria+(arreglo[k]-mediana)*(arreglo[k]-mediana);
  printf("aqui si\n");
 *desviacion=sqrt(sumatoria/MAX);
 printf("%f\n", *desviacion);
 
 //calculamos cuartil1 y cuartil3
 posicionq1=(int)MAX/4;
 posicionq3=(int)(MAX*3)/4;
 for(k=0;k<=MAX;k++)
 { if(k==posicionq1||k==posicionq1+1)
 {q1=q1+arreglo[k];}
 else
 {if(k==posicionq3||k==posicionq3+1)
          q3=q3+arreglo[k];}
 }
 q3=q3/2;
 q1=q1/2;
 *distancia=q3-q1;
 printf("%d, %d,%f,%f,%f\n", posicionq1, posicionq3, q1,q3, *distancia);
 
}

