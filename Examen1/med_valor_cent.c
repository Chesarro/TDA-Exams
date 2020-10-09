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
  int cont=0, t, i=0;
  float dat;
  char str[255], strf[100];
  char c;
  FILE *fp;
  fp = fopen(nombre, "r");
  listdata *nodo;
  

  if(fp == NULL)
    {
      printf("\n\nNo se puede abrir el archivo \n\n");
      exit(0);
    }
  else
    {
      while((c=getc(fp)) != EOF){
	nodo = malloc(sizeof(listdata));
	if(nodo == NULL){
	  printf("\n\nNO HAY MEMORIA SUFICIENTE\n\n");
	  exit(1);
	}
	
	
	    if(c == ',')
	      t = 1;
	    if(t == 1 && c != ','){
	      strf[i]=c;
	      i++;
	    }
	    if(c == '\n'){
	      t=0;
	      i=0;
	      cont++;
	      sscanf(strf, "%f", &dat);
	      	if(dat != 0.0)
		  nodo->numero = dat;
		if(*inicio == NULL){
		  *inicio = nodo;
		}
		else{
		  (*aux)->sig = nodo;
		}

		*aux = nodo;
		nodo->sig=NULL;
	    }	  
      
      }
      
    }
  fclose(fp);
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
  listdata *nodo, *aux;
  float temp;

  nodo = inicio;
  aux = inicio->sig;
  
  while(aux != NULL){
    if(nodo->numero > aux->numero)
      {
	if(nodo->numero != 0 && aux->numero != 0){
	  temp = nodo->numero;
	  nodo->numero = aux->numero;
	  aux->numero = temp;
	}
      }
    if(aux->sig == NULL){
      nodo = nodo->sig;
      aux = nodo->sig;
          }
    else
      aux = aux->sig;

    if(nodo == NULL)
      aux = NULL;
    
  }
   
 
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
  listdata *nodo;
  nodo = inicio;
  while(nodo != NULL)
    {
      inicio = inicio->sig;
      free(nodo);
      nodo=inicio;
    }
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
  
  listdata *nodo;
  float media=0;
  int n=0;
  nodo = inicio;

  while(nodo != NULL){
    n++;
    media = media + nodo->numero;
    nodo = nodo->sig;
  }
  media = media/n;

  return media;
    
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
  listdata *nodo;
  float mediana=0;
  nodo = inicio;
  int c, m=0;
  while(nodo != NULL)
    {
      c++;
      nodo = nodo->sig;
    }
  nodo = inicio;
  c = c + 1;
  c = c / 2;
  if(c%2 == 1)
    {

      while(nodo != NULL)
	{
	  m++;
	  if(m == c || m == c+1)
	    mediana = mediana + nodo->numero;
	  nodo = nodo->sig;
	}
      mediana = mediana /2;
      
      
    }
  else
    {
      do
	{
	  mediana=nodo->numero;
	  nodo = nodo->sig;
	  
	  printf("\n-->%f", mediana);
	}while(m == c);
    }
  
  return mediana;

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
  listdata *nodo;
  nodo = inicio;
  int cont=0, veces[100], i, j=0;
  for(i=0; i<100; i++){
    veces[i]=0;
    
  }
  

  while(nodo != NULL)
    {
      cont++;
      nodo = nodo->sig;
    }
  int numeros[cont];
  nodo = inicio;
  cont = 0;
  while(nodo != NULL)
    {
      
      numeros[cont] = nodo->numero;
      cont++;
      nodo = nodo->sig;
    }

  for(i=0; i<cont; i++){
    for(j=0; j<cont; j++){
      
      if(i == numeros[j]){
	veces[i] += 1;
      }
    }
  }
  
  j=0;
  for(i=0; i<cont; i++){
    if(veces[i] > j)
      j = i;
    
  }

  return j;

}
