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

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

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
        }

    }
    return 0;
}


