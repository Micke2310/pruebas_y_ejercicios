#include <stdio.h>
#include <stdlib.h>

// Estructura de un nodo
struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

// Función para recorrer e imprimir los elementos de la lista enlazada
void recorrerLista(struct Nodo* cabeza) {
    struct Nodo* actual = cabeza; // Comenzar desde el nodo cabeza

    printf("Elementos de la lista enlazada: ");
    while (actual != NULL) {
        printf("%d ", actual->dato); // Imprimir el dato del nodo actual
        actual = actual->siguiente; // Moverse al siguiente nodo
    }
    printf("\n");
}

int main() {
    // Crear una lista enlazada simple de ejemplo: 1 -> 2 -> 3 -> NULL
    struct Nodo* cabeza = (struct Nodo*)malloc(sizeof(struct Nodo));
    struct Nodo* segundo = (struct Nodo*)malloc(sizeof(struct Nodo));
    struct Nodo* tercero = (struct Nodo*)malloc(sizeof(struct Nodo));

    cabeza->dato = 1;
    cabeza->siguiente = segundo;
    segundo->dato = 2;
    segundo->siguiente = tercero;
    tercero->dato = 3;
    tercero->siguiente = NULL;

    // Recorrer e imprimir la lista enlazada
    recorrerLista(cabeza);

    // Liberar la memoria asignada
    free(cabeza);
    free(segundo);
    free(tercero);

    return 0;
}

