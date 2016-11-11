
#include "Validaciones.h"
#include "Emovie.h"
int ValidarInt(char texto[],char mensajError[], int desde, int hasta)
{
    char auxStr[256];
    int auxInt;
    while(1)
    {
        printf("%s\n",texto);
        fflush(stdin);
        gets(auxStr);
        if (!esNumerico(auxStr))
        {
            printf ("%s\n",mensajError);
            continue;

        }
        auxInt = atoi(auxStr);
        if(auxInt < desde || auxInt > hasta)
        {
            printf ("El numero debe estar entre %d y %d\n",desde,hasta);
            continue;

        }
        return auxInt;

    }
}
int esNumerico(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9')
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int esSoloLetras(char str[])
{
    int i;
    for(i=0; i<strlen(str); i++)
    {
        if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
        {
            return 0;
        }
    }
    return 1;
}


int getStringLetras(char mensaje[],char input[])
{
    char aux[250];
    printf("%s\n",mensaje);
    gets(aux);
    if(esSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}


void validarString(char texto[],char mensajError[], char array[])//uso esta que anida a las otras
{

    while(1)
    {
        if (!getStringLetras(texto,array))
        {
            printf ("%s\n",mensajError);
            continue;
        }
        fflush(stdin);
        break;
    }

}
