#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * execute_command - Ejecuta un comando externo
 * @args: Array de punteros a cadenas de caracteres (argumentos)
 *
 * Return: 1 si el comando se ejecutó correctamente, 0 si hubo un erro
 */
int execute_command(char **args)
{
pid_t pid;
int status;

pid = fork();
if (pid == 0)
{
/* Proceso hijo */
if (execve(args[0], args, NULL) == -1)
{
perror("execute_command");
exit(EXIT_FAILURE);
}
}
else if (pid < 0)
{
/* Error al crear el proceso hijo */
perror("execute_command");
exit(EXIT_FAILURE);
}
else
{
/* Proceso padre */
do
{
waitpid(pid, &status, WUNTRACED);
} while (!WIFEXITED(status) && !WIFSIGNALED(status));
}

return 1;
}

