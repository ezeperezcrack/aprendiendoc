#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{
    char seguir='s';
    int opcion=0;
    float numUno;
    float numDos;
    float sum;
    float res;
    float div;
    float mul;
    int fact;
    int flag=0;
    int max=9;
    int min=1;
    char error='La opcion no se encuentra entre las posibles, desea ingresar otra opcion? s o n';
    while(seguir=='s')
    {

        opcion=menu(error,max,min);

        switch(opcion)
        {
            case 1:
                scanf("%d", &numUno);
                break;
            case 2:
                scanf("%d", &numDos);
                break;
            case 3:
                sum=suma(numUno,numDos);
                printf("la suma de los numeros es %d\n",sum);
                break;
            case 4:
                res=resta(numUno,numDos);
                printf("la resta de los numeros es %d\n",res);
                break;
            case 5:
                 while(numDos==0)
                    {
                        printf("Ud no puede dividir por 0\n");
                        break;
                    }
                div=division(numUno,numDos);
                printf("la division de los numeros es %f\n",div);
                break;
            case 6:
                mul=multiplicacion(numUno,numDos);
                printf("la multiplicacion de los numeros es %d\n",mul);
                break;
            case 7:
                fact=factorial(numUno);
                printf("el factorial de A es %d\n", fact);
                break;
            case 8:
                sum=suma(numUno,numDos);
                printf("la suma de los numeros es %d\n",sum);

                res=resta(numUno,numDos);
                printf("la resta de los numeros es %d\n",res);

                     while(numDos==0)
                    {
                        printf("Ud no puede dividir por 0\n");
                        break;
                    }
                div=division(numUno,numDos);
                printf("la division de los numeros es %f\n",div);

                mul=multiplicacion(numUno,numDos);
                printf("la multiplicacion de los numeros es %d\n",mul);

                fact=factorial(numUno);
                printf("el factorial de A es %d\n", fact);
                break;
            case 9:
                seguir = 'n';
                break;
            default:
                break;
        }

    }
    return 0;
}


