#include <stdio.h>

/* ARRAYS EN C*/

int main()
{

/*int array[4] = {3,4,1,5};  /* los arrays comiensan de la posicion 0 , en la posicion 0 esta el 3, en la possicion 1 esta el 4,*/
/*			      en la psosicion 2 esta el 1 y en la posicion 3 tengo guardado el valor 5*/
/*printf("%i\n", array[2]); /*en este caso, en posicion [2], tengo el valor 1, eso es lo que imprimira, el 1*/

/*char array[] = ;*/


	/* aqui arrays simple o UNIDIMENCIONALES*/	
/*int sizeA;
printf("ingrese el tamaño del araryn");
scanf("%i", &sizeA);

int age[sizeA];
for (int i= 0; i < sizeA; i++)
{
printf("ingresa el valor %i \n", i+1);
scanf("%i", &age[i]);
}
printf("Los valores ingresados del array son:\n");
for (int i= 0; i < sizeA; i++)
{
printf("%i-", age[i]);
}
printf("\n");*/



/*AQUI EJEMPLOD DE ARRAY MULTI-DIMENCIONALES*/
/*columna| 0 1 2
 * fila 0| 5 3 1
 * fila 1| 6 4 2 
 * */

int multi[2][3] = {{5,3,1},{6,4,2}}; /*primer [son cantidad de filas 2] , segundo [son columnas 3]*/
/* las [2] filas son {las llaves despues del signo de igual '='{{1},{2}}*/

printf("%i\n", multi[0][2]);/*en este caso seria la fila '0' en la columna '2',imprimir 1., como coordenadas*/


return (0);
}
