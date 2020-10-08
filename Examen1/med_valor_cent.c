/* med_valor_cent.c - see module med_valor_cent.h for Copyright*/

#include <string.h>
#include "med_valor_cent.h"

#define med_valor_cent_IMPORT

/*
 *
 * Inicializa la lista de datos desde un archivo 
 *
 * @params
 *     Char (* nombre[]):
            char [] variable.
 *      float (* dato):
            float variable.
 *      listdata **(*  inicio):
            listdata struct.
 *       listdata **(*  aux):
            listdata struct.

 * @returns
       void
*/


EXTERN void cargar_datos(char nombre[], listdata **inicio, listdata **aux){
  int cont, t, i=0;
  float dat;
  char str[255], strf[100];
  FILE *fp;
  fp = fopen("data.csv", "r");
  listdata *nodo;
  nodo = malloc(sizeof(listdata));
  if(nodo == NULL){
    printf("\n\nNO HAY MEMORIA SUFICIENTE\n\n");
    exit(1);
  }

  if(fp == NULL)
    {
      printf("\n\nNo se puede abrir el archivo \n\n");
      exit(0);
    }
  else
    {
      while(fgets(str, 255, fp) != NULL){
	printf("\n%s", str);
	scanf(str, "%d,%f", &cont, &dat);
	printf("\n%d,%f", cont, dat);
	      
	/*if(*inicio == NULL){
	    *inicio = nodo;
	  }
	  else{
	    (*aux)->sig = nodo;
	  }

	  *aux = nodo;
	  nodo->sig=NULL;
	  printf("\n--> %f", nodo->numero);
	  fclose(fp);*/
      
      }
    }
}
	
    

/*
 *
 * Ordena los datos de la lista
 *
 * @params
  *       listdata *(*  inicio):
            listdata struct.

 * @returns
        void
*/


EXTERN void ordenar_datos(listdata *inicio){
}

/*
 *
 * Libera el espacio de memoria que ocupo la lista de datos
 *
 * @params
 *       listdata *(*  inicio):
            listdata struct.
 * @returns
        void
*/


EXTERN void liberar(listdata *inicio){

}
/*
 *
 * Obtine la media de la lista
 *
 * @params
 *       listdata *(*  inicio):
            listdata struct.
 * @returns
        float
*/


EXTERN float media(listdata *inicio){

}

/*
 *
 * Obtine la mediana de la lista
 *
 * @params
 *       listdata *(*  inicio):
            listdata struct.
 * @returns
        float
*/


EXTERN float mediana(listdata *inicio){

}

/*
 *
 * Obtine la Moda de la lista
 *
 * @params
 *       listdata *(*  inicio):
            listdata struct.
 * @returns
        float
*/


EXTERN float moda(listdata *inicio){

}
