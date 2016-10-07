#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 50

typedef struct{
    char nombre[100];
    int itemId;
    int marcaId;
    int estado; // Activo (1) o Inactivo (0)
}items;

/**
 * \brief Ordena el array por nombre
 * \param array Es el array ordenar
 * \param tamanio Indica la logitud del array
 * \return void
 *
 */
void ordenarxNombre(items arrayUno[], int tamanio)

/**
 * \brief Muestra los items activos por pantalla
 * \param arrayrray Es el array de items
 * \param tamanio Indica la logitud del array
 * \return -
 */
void showArray(items array[],int tamanio);

/**
 * \brief Carga los valores del item
 * \param array Es el array de items
 * \param espLibre Indica la posicion a setear
 * \param itemId id del item
 * \param nombre del item
 * \param marca Id de la marca
 * \return -
 *
 */
void altaItem(items array[],int espLibre, int itemId,char nombre[], int marca);

/**
 * \brief Busca si el id del item ya existe
 * \param array Es el array en el cual buscar
 * \param tamanio Indica la logitud del array
 * \param itemId Es el valor que se busca
 * \return Si no lo encuentra (-1) y si lo hace la posicion del mismo(i)
 *
 */
int buscarItemxId(items array[],int tamanio,int itemId);

/**
 * \brief Busca el primer lugar no utilizado en el array
 * \param array Es el array en el cual buscar
 * \param tamanio Indica la logitud del array
 * \return Si no hay lugares libres (-1) y si la hay la posicion del mismo (i)
 *
 */
int buscarEspacioLibre(items array[], int tamanio);

/**
 * \brief Inicializa el estado en un array de -items-
 * \param array Es el array en el cual buscar
 * \param tamaño Indica la logitud del array
 * \param valor Es el valor que se asignara al estado
 * \return -
 *
 */

void cambiarEstado(items array[], int tamanio, int valor);

/**
 * \brief Verifica si el valor recibido es numérico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */
int esNumerico(char str[]);

/**
 * \brief Solicita un numero entero al usuario y lo valida
 * \param texto Es el mensaje a ser mostrado para solicitar el dato
 * \param mensajError Es el mensaje a ser mostrado en caso de error
 * \return El número ingresado por el usuario
 *
 */
int ValidarInt(char texto[],char mensajError[], int desde, int hasta);

/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int esSoloLetras(char str[]);

/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int getStringLetras(char mensaje[],char input[]);

/**
 * \brief Solicita un string
 * \param texto Es el mensaje a ser mostrado para solicitar el dato
 * \param mensajError Es el mensaje a ser mostrado en caso de error
 * \param Array donde se cargará el texto ingresado
 * \return -
 *
 */
void validarString(char texto[],char mensajError[], char array[]);




