#include "ExamMain.h"
#include "EquationExam.h"
//#include "files.h"

int MAX;
int main(void){
  char nombre[100];
  int indice,i;
  float valor, valorestabla[100], media, mediana, moda;
    FILE * arch1;
    printf("Dime el nombre del archivo\n");
    gets(nombre);
    arch1 = fopen(nombre,"r");
  fscanf(arch1, "%s", nombre);
  MAX=50;
    for(i=1;i<=MAX;i++)
    {fscanf(arch1, "%d,%f", &indice, &valor);
     //printf("%d%f\n",indice, valor);
    valorestabla[i]=valor;
    }
     for(i=1;i<=MAX;i++)
    {printf("%d,%f\n",i, valorestabla[i] );
    
    }
  calculaVC(valorestabla, &media, &mediana, &moda);
  
    fclose(arch1);
    return 0;
}
