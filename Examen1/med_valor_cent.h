/**
 *
 *Funciones de Medidas de valor Central: funciones para el cálculo de la media, mediana y moda. Al igual que lee datos de un archivo .csv
 *@Copyright OTO20 LTDA_A
 *@license free for all
 *@author Jesus E. Dominguez B.
 *@version 1.0
 *@file
 */

#ifndef med_valor_cent_H
#define med_valor_cent_H

//Bibliotecas estandar 
#include <stdio.h>
#include <stdlib.h>

//Bibliotecas definidas por el usuario


#ifdef med_valor_cent_IMPORT
   #define EXTERN
#else
   #define EXTERN extern
#endif

//Constantes

//tipos de datos nuevos
typedef struct datos{
  float media;
  float mediana;
  int moda;
}stats;

typedef struct lista{
  float numero;
  struct lista *sig;
}listdata;

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


EXTERN void cargar_datos(char nombre[], listdata **inicio, listdata **aux);

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


EXTERN void ordenar_datos(listdata *inicio);

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


EXTERN void liberar(listdata *inicio);

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


EXTERN float media(listdata *inicio);

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


EXTERN float mediana(listdata *inicio);

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


EXTERN float moda(listdata *inicio);

#endif //Fin
