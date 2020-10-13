// vista.c
//
//
//  Created by Mauricio de Garay on 08/10/2020
//
#include "vista.h"
/* Función del módulo. */
/*
* El módulo vista se encarga de obtener el nombre del archivo del usuario y además desplegar el histograma al final del programa.
*
*
*/


/* Function prototypes. */


/*
* La función vistaSolicitarDatos  se encarga de pedirle un nombre de archivo al usuario
*
*
* @params
    NombreArchivo: el nombre del archivo donde están los datos
*
* @returns
      

*/
char Menu();
void vistaSolicitarDatos(char NombreArchivo[])
{
    system("clear");
    char op, cont;
    do
    {
        op=Menu();
        switch (op)
        {
            case '1':
            printf("Dime el nombre de tu archivo sin extension:\n ");
            fgets(NombreArchivo, 70, stdin);
            NombreArchivo[strlen(NombreArchivo)-1]=0;
            fflush(stdin);
            return;
            break;
            case '2':
            exit(100);
            break;
            default:
            printf("Error: Opcion invalida\n");
            printf("Presiona enter para continuar...\n");
            scanf("%c", &cont);
            fflush(stdin);
            break;
        }
        /* code */
    } while (op!='2');
    
    

}
/*
* La función vistaDesplegarDatos  se encarga de desplegarle el histograma al usuario.
*
*
* @params
   
*
* @returns
      

*/
 void vistaDesplegarDatos()
{
    FILE * gnupointer;
    gnupointer=pipesOpenGnuPlot();
    printf("Histograma:\n");
    pipesGraphGnuPlot(gnupointer, "data_statistic.csv");
    printf("Nota: Se creo un archivo de texto 'Estadisticos.txt' con todos los estadisticos (media, mediana, moda, std, min, max, distancia intercuartil).\n");
    fflush(stdin);
    fclose(gnupointer);
}
char Menu()
{
    char op;
    printf("\tMenu:\n\n");
    printf("\t1.-Ingresar Nombre del Archivo\n");
    printf("\t2.-Salir\n");
    scanf("%c", &op);
    fflush(stdin);
    return op;

}