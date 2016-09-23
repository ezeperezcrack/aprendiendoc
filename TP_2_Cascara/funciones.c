#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>
#define CANT 20
#define LLENO 1

void funcionMostrar()
{
    printf("1- Agregar persona\n");
    printf("2- Borrar persona\n");
    printf("3- Imprimir lista ordenada por  nombre\n");
    printf("4- Imprimir grafico de edades\n\n");
    printf("5- Salir\n");
}


int buscarPorDni(EPersona lista[], int doc)
{
    int i,pos;
    for(i=0;i<CANT;i++)
    {
        if(doc==lista[i].dni)
        {
            pos=i;
            break;
        }
    }

return pos;
}

EPersona cargaDeDatos()
{
    EPersona listado;
    listado.estado=LLENO;
    printf("ingrese su nombre: \n");
    fflush(stdin);
    gets(listado.nombre);
    printf("ingrese su dni: \n");
    fflush(stdin);
    scanf("%d", &listado.dni);
    printf("ingrese su edad: \n");
    fflush(stdin);
    scanf("%d", &listado.edad);
return listado;
}







