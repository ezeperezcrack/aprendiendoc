#include "funciones.h"
#include <stdio.h>
/** \brief sumar dos numeros
 * \param A variable float a sumar
 * \param B variable float a sumar
 * \return total de la suma
 *
 */

float suma(float A, float B)
{
    float total;
    total=A+B;
    return total;
}
/** \brief restar dos numeros
 * \param A variable float a restar
 * \param B variable float a restar
 * \return total de la resta
 *
 */

float resta(float A, float B)
{
    float total;
    total=A-B;
    return total;
}
/** \brief dividir dos numeros
 * \param A variable float dividendo
 * \param B variable float divisor
 * \return total de la division
 *
 */
float division(float A, float B)
{
    float total;
    total=A/B;
    return total;
}
/** \brief multiplicar dos numeros
 * \param A variable float a multi
 * \param B variable float a multi
 * \return total de la multiplicacion
 *
 */
float multiplicacion(float A, float B)
{
    float total;
    total=A*B;
    return total;
}
/** \brief sacar factorial de un numero
 * \param A variable int a factorizar
 * \return valor del factorial
 *
 */
int factorial (int A)
{
    int valor;
    if(A==0)
    {
        return 1;
    }
    valor=A*factorial(A-1);
    return valor;
}

/** \brief Mostrar un menu
 * \param Texto del menu
 * \param Texto del error
 * \param parametro desde
 * \param parametro hasta
 * \return entero segun opcion
 *
 */
int menu(char texto[],char error[],int desde, int hasta)
{
    int opcion;
    char respuesta='s';
    int x;
    int val;


        printf("%s", texto);
        val=scanf("%d", &opcion);
        if(1==val)
        {
            if(opcion<=hasta && opcion>=desde)
            {
               x=opcion;

            } else
            {
                printf("%s", error);
                fflush(stdin);
                scanf("%c",&respuesta);
                if(respuesta=='s')
                {
                 x=-1;
                } else
                    {
                        x=9;
                    }

            }

        }   else
            {
                x=-1;
            }


    return x;
}
