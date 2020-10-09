// modelo.c
//
//
//  Created by Mauricio de Garay on 08/10/2020
//
#include "modelo.h"

#include <math.h>

void modeloPrincipal(char NombreArchivo[]);
DatosCSV* modeloLeerDatosArchivo(char NombreArchivo[]);
DatosCSV* modeloObtenerDatosHistograma(DatosCSV *DatosOrigen);
/* Function prototypes. */


/*
* La función modeloPrincipal  se encarga de controlar el flujo del modelo.
*
*
* @params
    NombreArchivo: el nombre del archivo donde están los datos
*
* @returns
      

*/
void modeloPrincipal(char NombreArchivo[])
{
    DatosCSV *Datos, *DatosHistograma;
    Datos=modeloLeerDatosArchivo(NombreArchivo);
    DatosHistograma=modeloObtenerDatosHistograma(Datos);
    FILE * Archivo;
    Archivo=pipesOpenFile("write", "data_statistic.csv");
    int tamano=DatosHistograma[0].tamano;
    pipesWriteFile(tamano, DatosHistograma, Archivo);
    fclose(Archivo);
    free(Datos);
    free(DatosHistograma);
}
DatosCSV* modeloLeerDatosArchivo(char NombreArchivo[])
{
    FILE *Archivo;
    DatosCSV *Datos;
    Archivo=pipesOpenFile("read", NombreArchivo);
    Datos=pipesReadCSV(Archivo);
    fclose(Archivo);
    return Datos;
}
DatosCSV* modeloObtenerDatosHistograma(DatosCSV DatosOrigen[])
{
    float Media, Mediana, Moda, std, min, max, intercuartil;
    int i;
    float suma=0;
    Media=0;
    int tamano=DatosOrigen[0].tamano;
    for(i=0; i<tamano; i++)
    {
        suma=suma+DatosOrigen[i].valor;
    }
    

    Media=suma/(float)tamano;
    float temp=0;
    for(int i=0; i<tamano; i++)
    {
        for(int j=i+1; j<tamano; j++)
        {
            if(DatosOrigen[i].valor>DatosOrigen[j].valor)
            {
                temp=DatosOrigen[j].valor;
                DatosOrigen[j].valor=DatosOrigen[i].valor;
                DatosOrigen[i].valor=temp;
            }
        }
    }
 
    if(tamano%2==0)
    {
        Mediana=DatosOrigen[tamano/2].valor;
    }
    else
    {
        
        Mediana=(DatosOrigen[(int)(tamano/2)].valor+DatosOrigen[(int)(tamano/2)+1].valor)/2;
    }
    float Numeros[100], Repeticiones[100];
    int totalnumeros=0, bandera=0;
    for(i=0; i<tamano;i++)
    {
        bandera=0;
        for(int j=0; j<totalnumeros; j++)
        {
            if(Numeros[j]==DatosOrigen[i].valor)
            {
                bandera=1;
            }
        }
        if(bandera==0)
        {
            Numeros[totalnumeros]=DatosOrigen[i].valor;
            totalnumeros+=1;
        }
        
        
    }
    
    for(i=0; i<totalnumeros;i++)
    {
        Repeticiones[i]=0;
        for(int j=0; j<tamano; j++)
        {
            
            if(Numeros[i]==DatosOrigen[j].valor)
            {
                Repeticiones[i]+=1;
            }
        }
    }
    int MaxRep=0;
    for(i=0; i<totalnumeros; i++)
    {
        if(Repeticiones[i]>MaxRep)
        {
            MaxRep=Repeticiones[i];
            Moda=Numeros[i];
        }
    }
    float sumastd=0;
    for(i=0; i<tamano;i++)
    {
        sumastd=sumastd+pow((DatosOrigen[i].valor-Media),2);
    }
    std=sumastd/tamano;
    std=sqrt(std);
    min=10000;
    for(i=0; i<tamano; i++)
    {
        if(DatosOrigen[i].valor<min)
        {
            min=DatosOrigen[i].valor;
        }
    }
    max=-1000;
    for(i=0; i<tamano; i++)
    {
        if(DatosOrigen[i].valor>max)
        {
            max=DatosOrigen[i].valor;
        }
    }
    int noventacinco=tamano*0.95; // %95
    int venticinco=tamano*0.25; // %25
    intercuartil=DatosOrigen[noventacinco].valor-DatosOrigen[venticinco].valor;
    DatosCSV *Final;
    int totalnumeroshisto=0;
    int NumerosHisto[100], Frecuencia[100];
    char stringcast[10];
    int numerocast;
    for(i=0; i<tamano;i++)
    {
        bandera=0;
        stringcast[0]=0;
        sprintf(stringcast, "%.0f",DatosOrigen[i].valor);
        
        sscanf(stringcast,"%d",&numerocast);
        fflush(stdin);
        for(int j=0; j<totalnumeroshisto; j++)
        {
            
            if(NumerosHisto[j]==numerocast)
            {
                
                bandera=1;
            }
        }
        if(bandera==0)
        {
            NumerosHisto[totalnumeroshisto]=numerocast;
            totalnumeroshisto+=1;
        }
        
    }
    for(i=0; i<totalnumeroshisto;i++)
    {
        stringcast[0]=0;
        Frecuencia[i]=0;
        for(int j=0; j<tamano; j++)
        {
            
            sprintf(stringcast, "%.0f",DatosOrigen[j].valor);
            sscanf(stringcast,"%d",&numerocast);
            fflush(stdin);
            if(NumerosHisto[i]==numerocast)
            {
                Frecuencia[i]+=1;
            }
        }
    }
    Final=(DatosCSV*)malloc(sizeof(DatosCSV)*100);
    for(i=0;i<totalnumeroshisto; i++)
    {
        Final[i].valor=NumerosHisto[i];
        Final[i].indice=Frecuencia[i];
    }
    Final[0].tamano=totalnumeroshisto;
    FILE *ArchEstadisticos;
    ArchEstadisticos=pipesOpenFile("write", "Estadisticos.txt");
    fprintf(ArchEstadisticos, "Media: %f\nMediana: %f\nModa: %f\nDesviacion Estandar: %f\nMinimo: %f\nMaximo: %f\nDistancia Intercuartil: %f\n", Media, Mediana, Moda, std, min, max, intercuartil);
    fclose(ArchEstadisticos);
    return Final;
}