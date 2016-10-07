#include "BibliotecaLab.h"

int esSoloLetras(char str[])
{
   int i;
   for(i=0;i<strlen(str);i++)
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
    printf("%s",mensaje);
    scanf ("%s", aux);
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

void cambiarEstado(items array[], int tamanio, int valor)
{
    int i;
    for(i=0;i < tamanio; i++)
    {
        array[i].estado = valor;
    }
}

int buscarEspacioLibre(items array[], int tamanio)
{
    int i;
    for(i=0;i < tamanio; i++)
    {
        if(array[i].estado == 0)
        {
            return i;
        }
    }
    return -1;
}

int buscarItemxId(items array[],int tamanio,int itemId)
{
    int i;
    for(i=0;i < tamanio; i++)
    {
        if(array[i].itemId == itemId && array[i].estado == 1)
        {
            return i;
        }
    }
    return -1;
}

void altaItem(items array[],int espLibre, int itemId,char nombre[], int marca)
{

    array[espLibre].itemId = itemId;
    strcpy(array[espLibre].nombre,nombre);
    array[espLibre].marcaId = marca;
    array[espLibre].estado = 1;
}

void showArray(items array[],int tamanio)
{
    int i;
    printf("\n| CODIGO  |                      NOMBRE              | MARCA | STOCK |");
    for(i=0;i < tamanio; i++)
    {
        if(array[i].estado != 0)
        {
            printf("\n| %6d  | %-40s | %5d | %5d |",array[i].itemId,array[i].nombre,array[i].marcaId,array[i].stock);
        }
    }

}

void ordenarxNombre(items arrayUno[], int tamanio)
{
    items arrayAux;
    int i,j;

    for(i=0; i < tamanio - 1; i++)
    {
        if(arrayUno[i].estado == 0)
        {
            continue;
        }
        for(j=i+1; j < tamanio; j++)
        {
            if(arrayUno[j].estado == 0)
            {
                continue;
            }
            if(strcmp(arrayUno[j].nombre,arrayUno[i].nombre)<0)
            {
                arrayAux = arrayUno[j];
                arrayUno[j] = arrayUno[i];
                arrayUno[i] = arrayAux;
            }
            else if(strcmp(arrayUno[j].nombre,arrayUno[i].nombre) == 0)
            {
                if(arrayUno[i].itemId > arrayUno[j].itemId)
                {
                    arrayAux = arrayUno[j];
                    arrayUno[j] = arrayUno[i];
                    arrayUno[i] = arrayAux;
                }
            }
        }
    }
}
