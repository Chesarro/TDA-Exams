#include "EquationExam.h"
#include "ExamMain.h"
#include "files.h"

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
  int i;
  for(i=0;i<=MAX;i++)
    suma=suma+arreglo[i];
  *mediana=suma/MAX;
  printf("%f", *mediana);
  
   for (i = 0; i < (MAX - 1); i++) 
  { 
    for (j = i + 1; j < MAX; j++) 
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
      printf("%f", arreglo[i]);

     
  
}

