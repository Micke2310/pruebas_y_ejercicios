#include "shell.h"
#include <stdlib.h>
#include <string.h>

/**
 * split_line - Divide una línea de comandos en argumento
 * @line: Línea de comandos a dividi
 *
 * Return: Array de punteros a cadenas de caracteres (argumentos)
 */
char **split_line(char *line)
{
int bufsize = 64;
int position = 0;
char **tokens = malloc(bufsize * sizeof(char *));
char *token;

if (!tokens)
{
perror("split_line: error de asignación de memoria");
exit(EXIT_FAILURE);
}

token = strtok(line, " \t\r\n\a");
while (token != NULL)
{
tokens[position] = token;
position++;

if (position >= bufsize)
{
bufsize += 64;
tokens = realloc(tokens, bufsize * sizeof(char *));
if (!tokens)
{
perror("split_line: error de asignación de memoria")
exit(EXIT_FAILURE);
}
}

token = strtok(NULL, " \t\r\n\a");
}
tokens[position] = NULL;
return tokens;
}

