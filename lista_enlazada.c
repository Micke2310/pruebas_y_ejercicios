/*INCLUSION DE BIBLIOTECAS O CABECERAS ".h"*/

#include <stdio.h>            /* NECSARIA PARA ENTRADA/SALIDA ESTANDAR*/  

#include <stdlib.h>           /* NECESARIA PARA USAR MALLOC() Y FRE() PARA LA ASIGNACION Y LIBERACION DE MEMORIA DINAMICA*/

/*definicion DE ESTRUCTURA del "NODO" */

struct Nodo   /* DEFINE UNA ESTRUCTURA QUE REPRESENTA UN NODO EN LA LISTA ENLAZAD  "struct Nodo {}"*/
{
int dato;     /*CONTIENE UN ESPACIO PARA ALMACERNAR UN DATO INT "int dato"*/
struct Nodo* siguiente; /*Y UN PUNTERO AL SIGUIENTE NODO EN LA LISTA "struct Nodo*"*/

};

/* funcion  para imprimir la lista*/

void imprimirLista(struct Nodo* cabeza) /*"imprimirLista()" toma la CABEZA DE LA LISTA COMO ARGUMENTO E IMPRIME TODOS LOS ELEMNTOS*/
{ 	                                /*ELEMNTOS DE LA LISTA ENLAZADA*/

while (cabeza != NULL)      /*UTILIZA EL BUCLE "WHILE" PARA RECORRER LA LISTA ENLAZAD, MIENTRAS LA "CABEZA" NO SEA "NULL"*/
{                            

printf("%d", cabeza->dato);  /* IMPRIME EL DATO DEL "NODO" ACTUAL Y*/
cabeza = cabeza->siguiente;  /* LUEGO ACTUALIZA LA CABEZA AL "SIGUIENTE NODO."*/
}
printf("\n");

}


/* crear "NODOS" */

int main()   /*FUNCION PRINCIPAL DEL PPRGRAMA*/
{
struct Nodo* primero = (struct Nodo*)malloc(sizeof(struct Nodo));  /*SE CREAN 3 "NODOS" USANDO "MALLOC"*/
struct Nodo* segundo = (struct Nodo*)malloc(sizeof(struct Nodo));  /*PARA ASIGNARLES MEMORIA DINAMICA PARA CADA UNO*/
struct Nodo* tercero = (struct Nodo*)malloc(sizeof(struct Nodo));


/* Asignar valores y enlaces */

primero->dato = 1;             /*SE ASIGNAN "VALORES" A LOS "NODOS"*/
primero->siguiente = segundo;  /*Y SE ESTABLENCEN LOS "ENLACES ENTRE ELLOS"*/

segundo->dato = 2;
segundo->siguiente = tercero;

tercero->dato = 3;
tercero->siguiente = NULL; /*El ultimo "NODO" apunta a "NULL"*/

/** Imprimir la lista */

printf("Lista enlazada: ");      /*SE IMPRIME LA LISTA ENLAZADA ENTRE ELLOS*/
imprimirLista(primero);          /*USANDO LA FUNCION "IMPRIMIRLISTA()"*/


/*  Liberar memoria */
free(primero);                     /*SE LIBERA LA MEMORIA USANDO "FREE" PARA CADA "NODO"*/
free(segundo);                     /*EVITANDO FUGAS DE MEMORIA*/
free(tercero);

return (0);                              /*RETORNA "0" INDICANDO UNA FINALIZACION EXITOSA DEL PROGRAMA*/

}
