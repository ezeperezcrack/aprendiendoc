#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    float numUno;
    float numDos;
    float result;
    int fact;
    char seguir='s';
    int opcion;
    char opt[300]="1- Ingresar 1er operando (A=x)\n2- Ingresar 2do operando (B=y)\n3- Calcular la suma (A+B)\n4- Calcular la resta (A-B)\n5- Calcular la division (A/B)\n6- Calcular la multiplicacion (A*B)\n7- Calcular el factorial (A!)\n8- Calcular todas las operacione\n9- Salir\n";
    char error[100]="error desea seguir ingresando?, s o n";
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
                result=suma(numUno,numDos);
                printf("la suma de los numeros es %f\n",result);
                break;
            case 4:
                result=resta(numUno,numDos);
                printf("la resta de los numeros es %f\n",result);
                break;
            case 5:
                 while(numDos==0)
                    {
                        printf("Ud no puede dividir por 0\n");
                        break;
                    }
                result=division(numUno,numDos);
                printf("la division de los numeros es %f\n",result);
                break;
            case 6:
                result=multiplicacion(numUno,numDos);
                printf("la multiplicacion de los numeros es %f\n",result);
                break;
            case 7:
                fact=factorial(numUno);
                printf("el factorial de A es %d\n", fact);
                break;
            case 8:
                result=suma(numUno,numDos);
                printf("la suma de los numeros es %f\n",result);

                result=resta(numUno,numDos);
                printf("la resta de los numeros es %f\n",result);

                     while(numDos==0)
                    {
                        printf("Ud no puede dividir por 0\n");
                        break;
                    }
                result=division(numUno,numDos);
                printf("la division de los numeros es %f\n",result);

                result=multiplicacion(numUno,numDos);
                printf("la multiplicacion de los numeros es %f\n",result);

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
