#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"
#include <string.h>




int parserEmployee(FILE *pFile , ArrayList *pArrayListEmployee)
{
    char id[50];
    char nombre[50];
    char apellido[50];
    char estado[50];
    int cantElem;

    pFile = fopen("data.csv", "r");
    Employee *aux = employee_new();

    if(pFile != NULL)
    {
        // Archivo abierto correctamente.
        cantElem = pArrayListEmployee->len(pArrayListEmployee);
        while(!feof(pFile))
        {

            fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n", id, nombre, apellido, estado);

                if(strcmp(nombre, "first_name")==0)
                {
                    continue;
                }
                Employee *empleados = employee_new();
                if(empleados!=NULL)
                {

                    if(strcmp(estado, "true") == 0)
                    {
                        empleados->isEmpty = 1;
                    } else
                        {
                            empleados->isEmpty = 0;
                        }


                    strcpy(empleados->name, nombre);
                    strcpy(empleados->lastName, apellido);


                    empleados->id = atoi(id);



                } else
                    {
                        printf("Error no existe el empleado.");
                    }




        }





    }

    printf("\nArchivo parseado correctamente.\n");
    fclose(pFile);
    return 1;
}

