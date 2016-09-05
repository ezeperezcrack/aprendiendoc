#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    float numUno;
    float numDos;
    float sum;
    float res;
    float div;
    float mul;
    int fact;
    char seguir='s';
    int opcion;
    char opt[]=("1- Ingresar 1er operando (A=x)\n2- Ingresar 2do operando (B=y)\n3- Calcular la suma (A+B)\n4- Calcular la resta (A-B)\n5- Calcular la division (A/B)\n6- Calcular la multiplicacion (A*B)\n7- Calcular el factorial (A!)\n8- Calcular todas las operacione\n9- Salir\n");
    char error[]=("error desea seguir ingresando?, s o n");
    while(seguir=='s')
    {
        opcion=menu(opt,error,1,9);

        switch(opcion)
        {
            case 1:
                scanf("%f", &numUno);
                break;
            case 2:
                scanf("%f", &numDos);
                break;
            case 3:
                sum=suma(numUno,numDos);
                printf("la suma de los numeros es %f\n",sum);
                break;
            case 4:
                res=resta(numUno,numDos);
                printf("la resta de los numeros es %f\n",res);
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
                printf("la multiplicacion de los numeros es %f\n",mul);
                break;
            case 7:
                fact=factorial(numUno);
                printf("el factorial de A es %d\n", fact);
                break;
            case 8:
                sum=suma(numUno,numDos);
                printf("la suma de los numeros es %f\n",sum);

                res=resta(numUno,numDos);
                printf("la resta de los numeros es %f\n",res);

                     while(numDos==0)
                    {
                        printf("Ud no puede dividir por 0\n");
                        break;
                    }
                div=division(numUno,numDos);
                printf("la division de los numeros es %f\n",div);

                mul=multiplicacion(numUno,numDos);
                printf("la multiplicacion de los numeros es %f\n",mul);

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
