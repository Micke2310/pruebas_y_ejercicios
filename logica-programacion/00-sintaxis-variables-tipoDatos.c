/** pagina oficial del 
 * lenguaje que utilizamos
 *
 * https://devdocs.io/c 
 * */

// sintaxis de comentario en C

/* sintaxis de comentario en formato admitido por Betty en C*/


# pagina oficial en Phyton
# https://python.org 
# sntaxis de un comentario en Python

"""
esto tambien es un comentario
en varias lineas en Python
"""

'''
esto tambien
es comentario
en Python
'''


/*VARAIABLES en C = cajas donde guartdar datos , los cuales pueden cambiar tras cada llamado*/


char variable_general = "esto es una caja donde guardar datos en sus distintos tipos"

char caracter; //  'A' caracteres en C
bool buleano; // 'T'verdadero o 'F'falso en C
	      
float flotantesSimple; // numeros con coma 3.14f simple en C
double flotantesDobles; // numeros con coma doble 3.141592653589793 en C
long double flotanterxtendido; //numeros con coma extendidos 3.14159265358979323846L en C

int enteros; // 10 numeros enteros en C
short enteroCortos; // 1000 enteros cortos en C
long enterosLargos; // 1000000L enteros largos en C
long long enterosLargosLargos; // 1000000000LL enteros largos largos en C

/*CONSTANTES EN C = hay 2 formas de declarar constantes en C, se usan paar que su valores sean incambiables*/
/*y evitar errores o fallas en durante la ejecucion del programa
 * */

/*por "#define" no utiliza memoria del programa, se pueden remplazar/modificar  directo en el codigo fuente
 * "#define" PI 3.141592653589793
 * "#define" TAMANO_MAXIMO 100 */

/*por palabra clave "const", SI ocupan memoria ,porque son inmutables, no cambian nuca su valor
 * "const float" = 3.141592653589793;
 * "const int" = 100;
 * */

/*"EN RESUMEN , CONSTANTES EN C, SON VALORES QUE NO CAMBIAN DURANTE LA EJECUCUIN DEL PROGRAMA, HACEN QUE EL CODIGO SEA
 *  MAS LEGIBLE , MANTENIBLE Y MENOS PROPENSO A ERRORES ACCIDENTALES."
 *  */





#VARIABLES EN Python = son cajas donde guardamos datos los cuales pueden mutar en cada llamdo
'''
snake case... toda nueva palabra 
se separa con '_' y en minusculas
'''

my_variable = "Mi variable"
my_variable = "Nuevo valor de mi variable"
my_int = 1
my_float = 1.5
my_boll = true
my_boll = false
my_string = "mi cadena de texto"
my_orther_string = 'mi otra cadena de texto, con comillas simples'


#constantes = no existen como tal.
'''
no existen en Python
puedo crear un av ariable con el nombre de constante
pero solo sera como referencia al leer que no debo cambiar
su valor y considerarlo como una CONSTANTE
'''

MY_CONSTANT = "Mi constante" # por convencion


/*como imprimer texto en pantalla en C*/

#include <stdio.h>
int main()
{
printf( "Hola C!\n"); // printf() es de la biblioteca estandar (stdio.h), tambien puedo con los especificadores
			  // imprimir valores o datos desde las variables.

return (0);
}


#como imprimir texto en pantalla en Python

print("Hola Python!")

