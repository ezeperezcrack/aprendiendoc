/**
 * \brief Solicita un numero entero al usuario y lo valida
 * \param texto Es el mensaje a ser mostrado para solicitar el dato
 * \param mensajError Es el mensaje a ser mostrado en caso de error
 * \return El número ingresado por el usuario
 *
 */
int ValidarInt(char texto[],char mensajError[], int desde, int hasta);

/**
 * \brief Verifica si el valor recibido es numérico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */
int esNumerico(char str[]);

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
