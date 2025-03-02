// 11. Buscar en un Arreglo
#include <stdio.h>

int *buscarElemento(int *arr, int tamaño, int valor) {
    // Implementar búsqueda aquí
    for (int i = 0; i < tamaño; i++) {
        if (*(arr + i) == valor) {
            return (arr + i);  // Retorna la dirección de memoria del elemento encontrado
        }
    }
    return NULL;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    // Código para buscar un número y mostrar su dirección
    int tamaño = sizeof(arr) / sizeof(arr[0]); 
    int valorBuscado = 30; 

    // Llamamos a la función para buscar el valor y obtener su dirección
    int *direccion = buscarElemento(arr, tamaño, valorBuscado);

    if (direccion != NULL) {
        printf("Elemento encontrado: %d\n", *direccion);  
        printf("Direccion de memoria del elemento: %p\n", direccion);
    } else {
        printf("Elemento %d no encontrado en el arreglo.\n", valorBuscado);
    }
    return 0;
}
