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
void calculaVC(float arreglo[], float *media, float *mediana, float *moda)
{
  for(i=0;i<=MAX-1;i++)
    suma=suma+arreglo[i];
  *media=suma/MAX;
  printf("%f", media);
}

