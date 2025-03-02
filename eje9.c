// 9. Suma con Apuntadores
#include <stdio.h>

int sumaArreglo(int *arr, int tamaño) {
    // Implementar la suma aquí

    int suma = 0;
    for (int i = 0; i < tamaño; i++) {
        suma += *(arr + i); 
    }
    
    return suma;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    // Código para calcular y mostrar la suma

    int tamaño = sizeof(numeros) / sizeof(numeros[0]); 
    int suma = sumaArreglo(numeros, tamaño);
    printf("La suma de los elementos del arreglo es: %d\n", suma);

    return 0;
}
