#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"
#include "parser.h"
#include <windows.h>

/****************************************************
    Menu:
        1. Parse del archivo data.csv OK
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{
    int i;
    int bandera = 0;
    char buffer[1024];
    int cantidadElementos = 0;
    FILE *pFile = NULL;
    ArrayList *listaDeEmpleados = al_newArrayList();
    Employee *auxiliar = employee_new();
    Employee *auxiliarAlta;

    char seguir = 's';
    int opcion = 1;

    while(seguir=='s')
    {
    system("cls");
    printf("1. Parse del archivo data.csv\n");
    printf("2. Listar Empleados \n");
    printf("3. Ordenar por nombre\n");
    printf("4. Agregar un elemento\n");
    printf("5. Elimina un elemento\n");
    printf("6. Listar Empleados (Desde/Hasta)\n");
    printf("7. Salir\n");

    fflush(stdin);
    scanf("%d", &opcion);


    switch(opcion)
    {

    case 1:
        parserEmployee(pFile, listaDeEmpleados);
        system("pause");
         break;

    case 2:

        if(listaDeEmpleados != NULL)
        {
            cantidadElementos = al_len(listaDeEmpleados);
            printf("\nLa cantidad de elementos cargados es: %d", cantidadElementos);
        } else
            {
                printf("ERROR 2.");
            }




        system("pause");
        break;


    case 3:

        if(listaDeEmpleados != NULL)
        {


        } else
            {
                printf("ERROR 3.");
            }
        system("pause");
         break;

    case 4:
        auxiliarAlta = employee_new();
        cantidadElementos = al_len(listaDeEmpleados);
        printf("La cantidad de elementos es: %d", cantidadElementos);

        auxiliarAlta->id = cantidadElementos+1;
        auxiliarAlta->isEmpty = 1;

        printf("\nIngrese nombre:");
        fflush(stdin);
        gets(auxiliarAlta->name);
        printf("\nIngrese apellido:");
        fflush(stdin);
        gets(auxiliarAlta->lastName);

        listaDeEmpleados->add(listaDeEmpleados, auxiliarAlta);


        system("pause");
         break;

    case 5: // Eliminar un elemento.
        printf("Por favor");
        system("pause");
         break;

    case 6:
        system("pause");
         break;

    case 7:
        exit(1);

    }


    }







    return 0;
}
