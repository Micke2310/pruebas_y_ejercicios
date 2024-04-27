#include "shell-done.h"

/**
 * prompt - imprime el promp en pantalla de la shell
 *
 */

void prompt(void)
{
	_puts("shell-done$"); /*Impriome el  prompt*/
}

/**
 *read-line l Lee un alinea de la entrada estandar
 * 
 *Return: Puntero a ala linea de entrada leida (sin caracter de nueva linea)
 * 		Null si se ha llegadoal final del archivo o si hay error
 * */

char *read_line(void)
{
	char *line = NULL;
	size_t bufsize = 0;

	if (getline(&line, &bufsize, stdin) == -1)
	{
		if(feof(stdin))
		{
			free(line);
			return (NULL); /* EOF encontrado*/
		}

		perror("read_line");/*Error al leer la linea*/
		exit(EXIT_FAILURE);
	}
return (line);

}


/**
 *_puts -imprime una cadena de caracteres en la salida estandar
 *@str: cadena de caracteres a imprimir
 * */

void _puts(char *str)
{
	while(*str)
	{
		putchar(*str); /*imprime el caracter actual*/
		str++; /* avanza al siguiente caracter*/
	}
}


/**
 *prompt(void): Esta función imprime el prompt de la shell, que en este caso es ($) seguido de un espacio.
read_line(void): Esta función lee una línea de la entrada estándar utilizando la función getline. Devuelve un puntero a la línea leída
_puts(char *str): Esta función imprime una cadena de caracteres en la salida estándar utilizando la función putchar.
*/
