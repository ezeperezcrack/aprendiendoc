#include "Emovie.h"
#include "Validaciones.h"

int main()
{
    EMovie peliculas[5];
    cambiarEstado(peliculas,5,0);
    char auxTit[100];
    char auxDesc[1000];
    char auxGen[100];
    char seguir='s';
    int opcion=0, espLibre,contId=0, auxDur, auxPunt,posMod,modId;
    if(leerPelicula(peliculas)==0)
    {
        printf("error!");
    }
    while(seguir=='s')
    {
        opcion=ValidarInt("1- Agregar pelicula\n2- Borrar pelicula\n3- Generar pagina web\n4- Salir\n","Debe ingresar un numero!\n",1,4);
        switch(opcion)
        {
            case 1:
                espLibre=buscarEspacioLibre(peliculas,5);
                if(espLibre==-1)
                {
                    printf("\n\nNO QUEDAN LUGARES LIBRES!!!\n");
                    break;
                }
                printf("Ingrese el titulo de la pelicula\n");
                fflush(stdin);
                gets(auxTit);
                auxDur=ValidarInt("Ingrese una duracion estimada en minutos","Error no ingreso un numero.n",1,240);
                auxPunt=ValidarInt("Ingrese una puntuacion para esta pelicula","Error no ingreso un numero.",1,5);
                validarString("Ingrese una descripcion para esta pelicula", "Debe ingresar solo letras", auxDesc);
                validarString("Ingrese el genero de la pelicula","Debe ingresar solo letras",auxGen);
                contId++;
                agregarPelicula(peliculas,espLibre,auxTit,auxGen,auxDesc,contId,auxDur,auxPunt);
                if(crearPelicula(peliculas)==1)
                {
                    printf("ID: %d\nTitulo: %s\nDescripcion: %s\nGenero: %s\nDuracion: %d:00 Minutos\nPuntuacion: %d\n",peliculas[espLibre].id,peliculas[espLibre].titulo,peliculas[espLibre].descripcion,peliculas[espLibre].genero,peliculas[espLibre].duracion,peliculas[espLibre].puntaje);
                } else
                {
                    peliculas[espLibre].estado=0;
                    contId--;
                }
                break;
            case 2:
                modId=ValidarInt("Ingrese id de la pelicula a Borrar", "El id del item debe ser numerico",1,5);
                posMod=buscarItemxId(peliculas,5,modId);
                if(posMod==-1)
                {
                    printf("\n\nEL ID NO EXISTE!!! NO SE PUEDE EFECTUAR LA ELIMINACION\n");
                    break;
                }
                peliculas[posMod].estado=-1;
                printf("La pelicula Id: %d Titulo: %s ha sido eliminada \n", peliculas[posMod].id, peliculas[posMod].titulo);
                break;
            case 3:

               break;
            case 4:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
