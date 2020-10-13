//
//  controlador.c
//
//
//  Created by Mauricio de Garay, Bernardo García and Fernando Tapia on 29/09/2020.
//
#include "controlador.h"
#define TRUE 1
#define FALSE 0


/* Function prototypes. */
/*
* La función Principal se encarga de controlar el flujo de programa, ya que ésta es la encargada de conectar a los módulos de vista y modelo, así como revisar las validaciones.
*
*
* @params
    
*
* @returns
       void

*/
void controlador_Principal()
{
    char nombreArch[50];
    int Validacion;
    Validacion=FALSE;
    do
    {
        nombreArch[0]=0;
        vistaSolicitarDatos(nombreArch);
        strcat(nombreArch, ".csv");
        Validacion=pipesDoesFileExist(nombreArch);
        if(Validacion==FALSE)
        {
            printf("ERROR: No existe el archivo llamado %s.\n", nombreArch);
        }
    }
    while(Validacion==FALSE);
    modeloPrincipal(nombreArch);
    vistaDesplegarDatos();
}
