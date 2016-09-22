#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define CANT 20
typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

void funcionMostrar();

EPersona cargaDeDatos();


/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[CANT], int doc);


#endif // FUNCIONES_H_INCLUDED
