#include "ExamMain.h"
//#include "equations.h"
//#include "files.h"


int main(void){
  char nombre[100];
  int indice,i;
  float valor, valorestabla[100];
    FILE * arch1;
    printf("Dime el nombre del archivo\n");
    gets(nombre);
    arch1 = fopen(nombre,"r");
  fscanf(arch1, "%s", nombre);
    for(i=1;i<=50;i++)
    {fscanf(arch1, "%d,%f", &indice, &valor);
     printf("%d%f\n",indice, valor);
    valorestabla[i]=valor;
    }
     for(i=1;i<=50;i++)
    {printf("%d,%f\n",i, valorestabla[i] );
    
    }
    fclose(arch1);
    return 0;
}
