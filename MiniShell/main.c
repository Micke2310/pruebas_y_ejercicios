#include "shel-done.h"
/**
 *main - Entry point of the shell-done
 *
 *
 * Return: Always is 0 on success
 * */

int main(void)
{
		char *line;

		while (1)
		{
		promp(); /*imprime el prompt para indicar que el shell esta listo para recibir comandos*/
		line = read_line(); /*lee la linea de comando ingresad por el usuario*/

			if (line == NULL) /*si "read_line()" devuelve "NULL",se llega al final del arhio "(EOF)"*/
			       			/* "EN OF FILE (EOF)"*/	
			{
				_puts("\n"); /*imprime una nueva linea paara hacerlo visualmente claro*/
				break;
			}

			/*aqui se deberia de implemeetar la logica para ejcutar el comando*/
			free(line); /*libera la memoria asignada por la funcion "read_line()"*/

		}


/*Este es un esqueleto básico para nuestro programa principal. Explicaré cada part*/

/*Incluimos el archivo de cabecera shell.h, donde se declararán los prototipos de las funciones que utilizaremos
La función main es el punto de entrada de nuestro programa
Dentro del bucle while(1) (bucle infinito), llamamos a la función prompt() para mostrar el prompt de la shell y luego llamamos a read_line() para leer la entrada del usuario.
Si read_line() devuelve NULL, significa que hemos llegado al final del archivo (EOF), por lo que imprimimos una nueva línea y salimos del bucle.
Antes de salir, liberamos la memoria asignada para almacenar la línea de comando con free(line)*/
return (0);
}
