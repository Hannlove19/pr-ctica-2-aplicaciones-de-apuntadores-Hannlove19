// 10. Ordenamiento con Apuntadores (Burbuja)
#include <stdio.h>

void ordenarBurbuja(int *arr, int tamaño) {
    // Implementar algoritmo de ordenamiento aquí
    int temp;
    for (int i = 0; i < tamaño - 1; i++) {
        for (int j = 0; j < tamaño - 1 - i; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {34, 12, 56, 78, 23};
    // Código para ordenar y mostrar el arreglo

    int tamaño = sizeof(arr) / sizeof(arr[0]);  // Calcula el tamaño del arreglo
    printf("Arreglo original:\n");
    for (int i = 0; i < tamaño; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Llama a la función de ordenamiento
    ordenarBurbuja(arr, tamaño);

    printf("Arreglo ordenado:\n");
    for (int i = 0; i < tamaño; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
