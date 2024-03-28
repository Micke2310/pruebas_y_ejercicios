 /*
  * DIRECTIVAS DEL PREPROCESADOR                                                                                                       *                                                                                                                                    * */

#include <stdio.h>  /*archivo de cabecera ,bibliotecas standar del sistema*/
/*#include " nombre del archivo .h"*/  /* archivo de cabecera".h" creado por el usuario en el archivo general,
                                      se llama con comillas dobles '""'*/

/* crea constantes simbolicas y maacros*/
#define PI 3.14159 /*constante definida por medio de  "#define" , como esta fuera de las funciones se puede utilizar,
		     son inmutables, no pueden cambiar por eso no tienen signo de igual*/
#define CUBO(a) a*a*a  /*macros */
/**ejemplo de suma**/
/*ejemplo del cubo de a*/
int main()
{

	/*int suma;*/
	/*suma = PI + 3;*/

	int a = 3; /*declaro variable qeu hace referencia a la macro*/
	printf("El cubo de la variable a es: %i \n", CUBO(a)); /*llamo a la macro ya con el valor asignado a la variable, 'a':wq*/









return (0);
}


