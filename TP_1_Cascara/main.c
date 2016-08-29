#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int suma(int A, int B);
int resta(int A, int B);
float division(float A, float B);
int multiplicacion(int A, int B);
int factorial(int A);


int main()
{
    char seguir='s';
    int opcion=0;
    int numUno;
    int numDos;
    int sum;
    int res;
    float div;
    int mul;
    int fact;
    int contador=0;
    while(seguir=='s')
    {
        contador++;
        switch(contador)
        {
            case 1:
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        break;
            case 2:
        printf("1- Ingresar 1er operando (A=%d)\n", numUno);
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        break;
            case 3:
        printf("1- Ingresar 1er operando (A=%d)\n", numUno);
        printf("2- Ingresar 2do operando (B=%d)\n", numDos);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        break;
            default:
        printf("1- Ingresar 1er operando (A=%d)\n", numUno);
        printf("2- Ingresar 2do operando (B=%d)\n", numDos);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        break;
        }


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
                    printf("ingrese un divisor distinto de 0 \n");
                    scanf("%d", &numDos);
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
                        printf("ingrese un divisor distinto de 0 \n");
                        scanf("%d", &numDos);
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

int suma(int A, int B)
{
    int total;
    total=A+B;
    return total;
}
int resta(int A, int B)
{
    int total;
    total=A-B;
    return total;
}
float division(float A, float B)
{
    float total;
    total=A/B;
    return total;
}
int multiplicacion(int A, int B)
{
    int total;
    total=A*B;
    return total;
}
int factorial(int A)
{
    int total;
    int i=0;
    int acumulador=0;
    while(i<A)
    {
        i++;
        total=i*A;
        acumulador=acumulador+total;

    }
    return acumulador;
}

