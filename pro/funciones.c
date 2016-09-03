#include "funciones.h"


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

