#include <stdio.h>  /*librerias de encabezado .h */

int main ()
{
int num1, num2, resultado;  /*declaro todas las variables juntas del mismo tipo, "INT" en este caso*/
int a = 10, b = 20;    /*creo 2 variables de tipo "int" y las inicializo en '0'*/


printf("DIGITA PRIMER VALOR: \n");
scanf("%d",&num1);   /*pido el valor de "num1" y lo guardo en su variable*/

printf("DIGITA EL SEGUNDO VALOR: \n");
scanf("%d",&num2);   /*pido el valor de "num2" y lo guardo en su variable*/

resultado = a*(num1 - num2) + b*(a + b);
printf("EL RESULTADO ES:%d \n", resultado);

return 0; /* Retorna un entero ya que "main" es de tipo "int". '0' es el valor de éxito. */
}
