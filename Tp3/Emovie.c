#include "Emovie.h"

void agregarPelicula(EMovie movie[],int espLibre,char nombre[], char genero[], char descripcion[], int itemId, int duracion, int puntaje)
{
    movie[espLibre].id=itemId;
    strcpy(movie[espLibre].titulo,nombre);
    strcpy(movie[espLibre].genero,genero);
    strcpy(movie[espLibre].descripcion,descripcion);
    movie[espLibre].duracion=duracion;
    movie[espLibre].puntaje=puntaje;
    movie[espLibre].estado=1;
}
void cambiarEstado(EMovie movie[], int tamanio, int valor)
{
    int i;
    for(i=0; i < tamanio; i++)
    {
        movie[i].estado = valor;
    }
}

int buscarEspacioLibre(EMovie movie[], int tamanio)
{
    int i;
    for(i=0; i < tamanio; i++)
    {
        if(movie[i].estado == 0)
        {
            return i;
        }
    }
    return -1;
}

int buscarItemxId(EMovie movie[],int tamanio,int itemId)
{
    int i;
    for(i=0; i < tamanio; i++)
    {
        if(movie[i].id == itemId && movie[i].estado == 1)
        {
            return i;
        }
    }
    return -1;
}

int crearPelicula(EMovie movie[])
{
    int flag=1;
    FILE *f;
    if( (f = fopen("d://bin.dat", "a"))== NULL)
    {
        printf("No se pudo abrir el archivo");
        flag=0;
    }
    else
    {
        fwrite(&movie, sizeof(EMovie), 1, f);
        fclose(f);
    }
    return flag;
}

int leerPelicula(EMovie movie[])
{

    FILE *f;
    int cant, i=0;
    int flag=1;
    if( (f = fopen("d://bin.dat", "r"))== NULL)
    {
        printf("No se pudo abrir el archivo");
        flag=0;
    }
    else
    {
        while(!feof(f))
        {
            cant=fread(&movie[i], sizeof(EMovie), 1, f);
            i++;
            if(cant!=1)
            {
                if(feof(f))
                {
                    break;
                }
                else
                {
                    printf("No leyo el ultimo registro");
                    break;
                }
            }
        }
        fclose(f);

        for(i=0; i<5; i++)
        {
            if(movie[i].estado==1)
            {
                printf("\n%s", movie[i].titulo);
            }

        }

    }

    return flag;
}
