#ifndef SHELL-DONE_H
#define SHELL-DONE_H

#include <stdio.h>
#include <stdlib.h>

/*prototipos de funciones a usar en el codigo*/
void prompt(void);
char *read_line(void);
void _puts(char *str);
char **split_line(char *line);
int execute_command(char **args);
/*#ifndef, #define y #endif: Estas son directivas de preprocesador que evitan la inclusión múltiple del archivo de cabecera shellh
#include <stdio.h> y #include <stdlib.h>: Incluimos los archivos de cabecera necesarios para las funciones estándar de entrada y salida, así como para la gestión de memoria dinámic
void prompt(void);: Prototipo de la función que imprime el prompt de la shell
char *read_line(void);: Prototipo de la función que lee la línea de comando introducida por el usuario.
void _puts(char *str);: Prototipo de la función que imprime una cadena de caracteres en la salida estánda*/

#endif /*SHELL-DONE_H*/
