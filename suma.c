#include <stdio.h>  /*include es un aclador de bibliotecas, las que se usan para las funciones*/
                    /*en los archivos .h se guardan las cabeceras, en las cuales van losprototipos de las funciones*/

int main () /*funcion MAIN , ES DONDE SIEMPRE SE DESARROLLARA EL PROGRAMA*/
	   /*este programa busca sumar 2 numeros enteros*/
{
int num1;   /*se declaran variables de tipo INT (numerica enteros)*/
int num2;   /* tambien se podia escribir asi :  int num1, int num2;*/
int resultado; /*tambien se escribe : reultado = num1 + num2; */

printf("DIGITE EL VALOR NUMERO 1:\n");
scanf("%d", &num1);

printf("DIGITE EL VALOR NUMERO 2: \n");
scanf("%d", &num2);

resultado = num1 + num2;
printf("EL RESULTADO ES: %d \n", resultado);

return (0); /*retorno un entero ya que la funcion MAIN es de tipo INT*/

}
