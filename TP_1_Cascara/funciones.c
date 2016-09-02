#include "funciones.h"

float suma(float A, float B)
{
    float total;
    total=A+B;
    return total;
}
float resta(float A, float B)
{
    float total;
    total=A-B;
    return total;
}
float division(float A, float B)
{
    float total;
    total=A/B;
    return total;
}
float multiplicacion(float A, float B)
{
    float total;
    total=A*B;
    return total;
}
int factorial(int A)
{
    int total;
    int i=0;
    while(i<A)
    {
        if(i==0)
        {
            total=A;
        }   else
            {
                total=total*i;
            }

        i++;
    }
    return total;
}
/*int menu(char texto[])
{
    int opcion;
    printf("%s", texto);
    scanf("%d", &opcion);
    return opcion;

}
*/
int menu(char error[],int desde, int hasta)
{
    int opcion;
    char respuesta;


/*    do
    {
        printf("%, texto");
        scanf("%d", &opcion);
        if(opcion<=hasta && opcion>=desde)
        {
            return opcion;
        }
        printf("%s", error);
        scanf("%c", &respuesta);
    } while('s'==respuesta);
    return -1;
*/
        do
            {
                printf("1- Ingresar 1er operando (A=x)\n2- Ingresar 2do operando (B=y)\n3- Calcular la suma (A+B)\n4- Calcular la resta (A-B)\n5- Calcular la division (A/B)\n6- Calcular la multiplicacion (A*B)\n7- Calcular el factorial (A!)\n8- Calcular todas las operacione\n9- Salir\n");
                scanf("%d", &opcion);
                if(opcion>hasta || opcion<desde)
                {
                    printf("%s", error);
                    scanf("%c", &respuesta);

                }
            } while('s'==respuesta);
        return opcion;
}
