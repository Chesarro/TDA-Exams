#include "ExamMain.h"
#include "EquationExam.h"
//#include "files.h"

int MAX;
int main(void){
  char nombre[100];
  int indice,i;
  float valor, valorestabla[100], media, mediana, moda, desviacion, distancia;
    FILE * arch1;
    printf("Dime el nombre del archivo\n");
    gets(nombre);
    arch1 = fopen(nombre,"r");
  fscanf(arch1, "%s", nombre);
  MAX=49;
    for(i=0;i<=MAX;i++)
    {fscanf(arch1, "%d,%f", &indice, &valor);
     printf("%d%f\n",indice, valor);
    valorestabla[i]=valor;
    }
     for(i=0;i<=MAX;i++)
    {printf("%d,%f\n",i, valorestabla[i] );
    
    }
  calculaVC(valorestabla, MAX, &media, &mediana, &moda);
   calculaVD(valorestabla, MAX, mediana, &desviacion, &distancia);
   
    fclose(arch1);
    arch2 = fopen("resultados","w");
  fprintf(arch2, "Media = %f\nMediana = %f\nDesviacion = %f\nDistancia = %f\nRango=%f",media, mediana, desviacion, distancia, distancia);
  fclose(arch2);
  return 0;
}
