#include <stdio.h>
/*
 * TOMA DE DESICIONES "if":
 *
 * Operadores de Igualdad:             |  Operadores de Relacion:
 *   == 'X' es igual que 'Y'           |     > 'X' es mayor que 'Y'
 *   != 'X' es distinto que 'Y'        |     < 'X' es menor que 'Y' 
 *                                     |    >= 'X' es mayor o igual que 'Y'
 *                                     |    <= 'X' es manor o igual que 'Y'*/


int main()  /*funcion main donde se realiza el programa*/
{
int edad;
int numeros_leidos;

printf("Ingresa tu edad: \n");
numeros_leidos = scanf("%d", &edad);

if (numeros_leidos != 1) /*'1' indica que scanf pudo leer '1' valor numerico, '0' indica que no hay valor numerico, es un error*/
{	printf("Error , vuelve a ingresar un valor NUMERICO. \n"); 
                return (1);
}
if (edad <= 17)
	printf("Eres menor de edad \n");
else
	printf("Eres mayor de edad \n");

return (0); /*final del programa, reorna'0' succes, retorna '1' hay error*/
}
