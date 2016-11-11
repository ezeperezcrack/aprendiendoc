#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int estado;//0 vacio, 1 dado de alta, -1 BORRADO
    int id;
    char titulo[20];
    char genero[20];
    int duracion;
    char descripcion[50];
    int puntaje;
    char linkImagen[50];
}EMovie;

/** \brief
 *
 * \param movie[] EMovie
 * \param espLibre int
 * \param nombre[] char
 * \param genero[] char
 * \param descripcion[] char
 * \param itemId int
 * \return void
 *
 */
void agregarPelicula(EMovie movie[],int espLibre,char nombre[], char genero[], char descripcion[], int itemId,int duracion, int puntaje);

/** \brief
 *
 * \param movie[] EMovie
 * \param tamanio int
 * \param valor int
 * \return void
 *
 */
void cambiarEstado(EMovie movie[], int tamanio, int valor);

/** \brief
 *
 * \param movie[] EMovie
 * \param tamanio int
 * \return int
 *
 */
int buscarEspacioLibre(EMovie movie[], int tamanio);

/**
 *  Borra una pelicula del archivo binario
 *  @param movie la estructura a ser eliminada al archivo
 *  @return retorna 1 o 0 de acuerdo a si pudo eliminar la pelicula o no
 */
int borrarPelicula(EMovie movie[]);

/**
 *  Crea una pelicula del archivo binario
 *  @param movie la estructura a ser eliminada al archivo
 *  @return retorna 1 o 0 de acuerdo a si pudo eliminar la pelicula o no
 */
int crearPelicula(EMovie movie[]);

/**
 *  Genera un archivo html a partir de las peliculas cargadas en el archivo binario.
 *  @param lista la lista de peliculas a ser agregadas en el archivo.
 *  @param nombre el nombre para el archivo.
 */
void generarPagina(EMovie lista[], char nombre[]);

/** \brief
 *
 * \param movie[] EMovie
 * \param tamanio int
 * \param itemId int
 * \return int
 *
 */
int buscarItemxId(EMovie movie[],int tamanio,int itemId);

/** \brief
 *
 * \param movie[] EMovie
 * \return int
 *
 */
int leerPelicula(EMovie movie[]);
