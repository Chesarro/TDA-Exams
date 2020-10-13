//
//  TDA_Statistics.h
//  
//
//  Creado por Rodrigo Garcia el 8 de octubre del 2020.
//  Sinceramente siento que dos horas no son suficientes para esto. Una disculpa por el estado del examen, hice todo para lo que me dio tiempo.

#ifndef TDA_Statistics_h
#define TDA_Statistics_h


/*
* System headers required by the following declarations
* (the implementation will import its specific dependencies):
*/

#include <stdio.h>
#include <stdlib.h>

/*
* Application specific headers required by the following declarations
* (the implementation will import its specific dependencies):
*/

/* Constants declarations. */

/* Set EXTERN macro: */

#ifndef TDA_Statistics_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

/* Types declarations. */


/* Global variables declarations. */
#define COLUMNS 2


/* Function prototypes. */


/*
 *
 * La funcion vista_Menu proporciona al usuario un menu con la bienvenida y la forma de operar del sistema.
 * Pedira el nombre del archivo y se mandara al controlador
 *
 * @params
 *      void
        
 * @returns
        none
*/


EXTERN void vista_Menu(void);


/*
 *
 * La funcion controlador_Proceso settea todas las variables correspondientes y realiza las llamadas a la funciones.
 * 
 *
 * @params
 *      nombre_archivo (char *):
            nombre del archivo que busca abrirse
        
 * @returns
        none
*/


EXTERN void controlador_Proceso(char * nombre_archivo);


/*
 *
 * La funcion modelo_Archivo abre un archivo del nombre recibido en el modo recibido
 * 
 *
 * @params
 *     nombre_archivo (char *):
            Nombre del archivo a abrir
 *     modo (char *):
            modo de apertura del archivo

 * @returns
       Archivo abierto en el modo indicado
*/


EXTERN FILE * modelo_Archivo(char * nombre_archivo, char * modo);


/*
 *
 * La funcion modelo_Euler_Method predice la posicion de la persona en el bongee dependiendo de los valores dados
 * y la regresa al controlador para ser analizada
 *
 * @params
 *     Archivo (FILE *):
            Archivo que se va a leer
 *     dimension (int *)
            Puntero a entero que se llevarà el valor del tamanño del array
            
 * @returns
       array de floats con los valores del archivo
*/


EXTERN float * modelo_Lee_Archivo(FILE * Archivo, int * dimension);

/*
 *
 * La funcion modelo_Calcula_Centrales calculas las medidas de valor central del arreglo de valores
 *
 * @params
 *     array (float *):
            Arreglo de los valores con lo que se haran los calculos
 *     dimension (int *)
            Tamaño del array

 * @returns
        void
*/

EXTERN void modelo_Calcula_Centrales(float * array, int * dimension);


/*
 *
 * La funcion modelo_Crea_Archivo crea un archivo .csv con los datos obtenidos de los calculos
 *
 * @params
 *     media (float ):
            Valor de la media calculada
 *     mediana (float )
            Valor de la mediana calculada
 *     moda (float )  
            valor de la moda calculado

 * @returns
        void
*/

EXTERN void modelo_Crea_Archivo(float media, float mediana, float moda);




#undef TDA_Statistics_IMPORT
#undef EXTERN



#endif /* TDA_Statistics_h */
