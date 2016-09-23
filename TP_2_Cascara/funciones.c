#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>
#define CANT 20
#define LLENO 1
#define VACIO 0
#define MIN 10000000
#define MAX 99999999
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
    EPersona listado, buffer;
    int x,y;
    listado.estado=LLENO;
    printf("ingrese su nombre: \n");
    fflush(stdin);
    gets(listado.nombre);
    printf("ingrese su dni: \n");
    fflush(stdin);
    x=scanf("%d", &buffer.dni);
        if(x==1)
        {
            if(buffer.dni<MIN || buffer.dni>MAX)
            {
                printf("El numero de dni no es válido\n");
                listado.estado=VACIO;
            }   else
                {
                    listado.dni=buffer.dni;
                }
        }   else
            {
               printf("No ingreso un numero\n");
               listado.estado=VACIO; 
            }    
    printf("ingrese su edad: \n");
    fflush(stdin);
    y=scanf("%d", &buffer.edad);
        if(y==1)
        {
            if(buffer.edad>0 && buffer.edad<120)
            {
                listado.edad=buffer.edad;
            }   else
                {
                    printf("La edad no es válida\n");
                    listado.estado=VACIO;
                }
        }   else
            {
                printf("No ingreso un numero\n");
                listado.estado=VACIO;
            }
return listado;
}







