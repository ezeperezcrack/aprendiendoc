#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define CANT 20
typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/**
 * Muestra un listado de opciones
 */
void funcionMostrar();

/**
 * Efectua la carga de datos de la estructura
 * @return los datos de la estructura a la estructura items
 */
EPersona cargaDeDatos();


/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param doc el doc a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro doc
 */
int buscarPorDni(EPersona lista[CANT], int doc);


#endif // FUNCIONES_H_INCLUDED
