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
 * split_line - divide una linea de comandos en argumentos
 *@line_: linea de comandos a dividir
 *
 * Return: Array de punteros a cadenas decaracteres (argumentos)
 * */

char **split_line(char *line)
{
	/*implementacion dela funcion split_line aqui*/
}

/**
 * execute_comannd - ejecuta un comando externo
 *@args: array de puntero a cadenas de caracteres (argumentos)
 * 
 *Return: 1 si el comando se ejecuto correctamente, 0 si hubo un error
 * */
int execute_command(char **args)
{
	/* aqui la implementacion de la funcion execute_command*/
}



/**
 *prompt(void): Esta función imprime el prompt de la shell, que en este caso es ($) seguido de un espacio.
read_line(void): Esta función lee una línea de la entrada estándar utilizando la función getline. Devuelve un puntero a la línea leída
_puts(char *str): Esta función imprime una cadena de caracteres en la salida estándar utilizando la función putchar.
*/
