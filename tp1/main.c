#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{   int val;
    float numUno=0;
    float numDos;
    float result;
    int fact;
    char seguir='s';
    int opcion;
    char opt[300]="3- Calcular la suma (A+B)\n4- Calcular la resta (A-B)\n5- Calcular la division (A/B)\n6- Calcular la multiplicacion (A*B)\n7- Calcular el factorial (A!)\n8- Calcular todas las operaciones\n9- Salir\n";
    char error[100]="error desea seguir ingresando?, s o n\n";
    int flag2=0;
    int flag1=0;
    while(seguir=='s')
    {
            if(flag1==1)
            {
                printf("1- Ingresar 1er operando (A=%.4f)\n",numUno);

            }   else
                {
                    printf("1- Ingresar 1er operando (A=x)\n");
                }
             if(flag2==1)
            {
                printf("2- Ingresar 2do operando (B=%.4f)\n",numDos);

            }   else
                {
                    printf("2- Ingresar 2do operando (B=y)\n");
                }
            opcion=menu(opt,error,1,9);



        switch(opcion)
        {
            case 1:
                val=scanf("%f", &numUno);
                fflush(stdin);
                if(val==0)
                {
                    printf("error,no ingreso un numero\n");
                    numUno=0;
                }   else
                    {
                        flag1=1;
                    }

                break;
            case 2:
                val=scanf("%f", &numDos);
                fflush(stdin);
                if(val==0)
                {
                    printf("error,no ingresó un numero\n");
                    numDos=0;
                }   else
                    {
                        flag2=1;
                    }

                break;
            case 3:
                if(flag1==1&&flag2==1)
                {
                    result=suma(numUno,numDos);
                    printf("la suma de los numeros es %.4f\n",result);
                    break;
                }   else
                printf("Debe ingresar los operandos\n");
                break;

            case 4:
                if(flag1==1&&flag2==1)
                {
                    result=resta(numUno,numDos);
                    printf("la resta de los numeros es %.4f\n",result);
                    break;
                } else
                printf("Debe ingresar los operandos\n");
                break;
            case 5:
                if(flag1==1&&flag2==1)
                {
                   if(numDos==0)
                    {
                        printf("Ud no puede dividir por 0\n");
                        break;
                    } else
                    {
                        result=division(numUno,numDos);
                        printf("la division de los numeros es %.4f\n",result);
                        break;
                    }
                } else
                printf("Debe ingresar los operandos\n");
                break;
            case 6:
                if(flag1==1&&flag2==1)
                {
                    result=multiplicacion(numUno,numDos);
                    printf("la multiplicacion de los numeros es %.4f\n",result);
                    break;
                }   else
                printf("Debe ingresar los operandos\n");
                break;
            case 7:
                if(flag1==1)
                {
                    if(numUno>0)
                    {
                        fact=factorial(numUno);
                        printf("el factorial de A es %d\n", fact);
                        break;
                    }   else
                        {
                            printf("error solo numeros enteros positivos\n");
                            break;
                        }

                }else
                printf("Debe ingresar operando A\n");
                break;
            case 8:
                if(flag1==1&&flag2==1)
                {
                    result=suma(numUno,numDos);
                    printf("la suma de los numeros es %.4f\n",result);

                    result=resta(numUno,numDos);
                    printf("la resta de los numeros es %.4f\n",result);

                   if(numDos==0)
                        {
                            printf("Ud no puede dividir por 0\n");

                        } else
                        {
                            result=division(numUno,numDos);
                            printf("la division de los numeros es %.4f\n",result);
                        }
                    result=multiplicacion(numUno,numDos);
                    printf("la multiplicacion de los numeros es %.4f\n",result);
                    break;


                    while(numUno>0)
                    {
                        fact=factorial(numUno);
                        printf("el factorial de A es %d\n", fact);
                        break;
                    }
                }   else
                printf("Debe ingresar los operandos\n");
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
