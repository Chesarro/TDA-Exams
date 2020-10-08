/*#include "main.h"
#include "equations.h"
#include "files.h"
*/
int main(void){
  char nombre[];
  int indice;
  float valor, valorestabla[];
    FILE * arch1;
    printf("Dime el nombre del archivo\n");
    get(nombre);
    arch1 = fopen(nombre,"rb");
    for(i=1;i<=50;i++)
    {fscanf("%d%f", indice, valor);
    valorestabla[i]=valor;
    }
     for(i=1;i<=50;i++)
    {printf("%f",valorestabla[i] );
    
    }
    fclose(arch1);
    return 0;
}
