#include "EquationExam.h"
#include "ExamMain.h"
#include "files.h"
#include <math.h>

/**
 * Obtiene el resultado de la ecuacion de las fuerzas del sistema.
 * @param
 *  masa (double):
 *      La masa del usuario en Kg. 
 *  Dt (double ):
 *      nuestra constante de cambio
 *  k (double):
 *      la constante de nuestro bungee
 *
 * @return double.
*/
void calculaVC(float *arreglo, int MAX, float *media, float *mediana, float *moda)
{
  float suma=0, temp;
  int i,j;
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
   for(i=0;i<=MAX;i++)
      printf("%f\n", arreglo[i]);

 if((MAX+1)%2==0)
 {*media=arreglo[MAX/2];
   printf("%f\n", arreglo[MAX/2]);
 }
  else
  { *media= (arreglo[MAX/2]+arreglo[MAX/2+1])/2;
     printf("%f\n", (arreglo[MAX/2]+arreglo[MAX/2+1])/2);
  }
     
  
}
void calculaVD(float *arreglo,int MAX, float mediana, float *desviacion)
{ float sumatoria=0;
 int k;
 for(k=0;k<MAX;k++)
 // sumatoria=sumatoria+(arreglo[i]-mediana)*(arreglo[i]-mediana);
  printf("aqui si\n");
 //*desviacion=sqrt(sumatoria/MAX);
//  printf("%f\n", *desviacion);
}

