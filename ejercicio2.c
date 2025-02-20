#include <stdio.h>
/*
 Este programa crea un apuntador de tipo entero
 que apunta al inicio de un arreglo.
*/
int main () {
  short arr[5] ={1,2, 3, 4, 5}, *apArr;
  apArr = &arr[0]; // apArr = arr;
  // imprime la dirección de memoria del arreglo en la posición [0]
  printf("Dirección del arreglo en la primera posición: %x\n",&arr[0]);
  // imprime la dirección de memoria del arreglo  (el nombre del arreglo es un apuntador)
  
  //%x es para imprimir hexadecimales como p 
  printf("Dirección del arreglo: %x\n",&arr);
  printf("Dirección del arreglo: %x\n",&arr);

  // imprime la dirección de memoria almacenada en el apuntador apArr
  printf("Dirección almacenada en el apuntador: %x\n",apArr);


  printf("*apArr = %i\n",*apArr);
  // suma una localidad al inicio del arreglo e imprime su valor
  printf("*(apArr+1) = %i\n",*(apArr+1));
  printf("*(apArr+2) = %i\n",*(apArr+2));
  printf("*(apArr+3) = %i\n",*(apArr+3));
  printf("*(apArr+4) = %i\n",*(apArr+4));

 // Escribe una línea de código para mostrar el valor apuntado por apArr
  printf("Valor apuntado por apArr = %d\n", *apArr);
  printf("Recorriendo el arreglo usando un apuntador:\n");
  for (int i = 0; i < 5; i++) {
    printf("Elemento %d: %d\n", i, *(apArr + i));
  }

  //Modifica apArr para que apunte al tercer elemento
  apArr=&arr[3];

  //Accede al elemento con indice -2 usando el apuntador
  /*No se pueden imprimir direcciones de memeoria negativas */
  
  printf("Elemento -2: %d\n", apArr[-2]);
  printf("Elemento -3 (primer elemento): %d\n", apArr[-3]);
  printf("Elemento 0: %d\n", apArr[0]);

  //Ajusta el ciclo for para que se pueda recorrer completo el arreglo de acuerdo al elemento apuntado
  printf(" \n");
  printf("Imprimimos el arreglo con un ciclo for \n ");
  for (int i = -3; i < 2; i++) {
    printf("Elemento %d: %d\n", i, *(apArr + i));
  }

  //Modifica apArr para que apunte al cuarto elemento
  apArr=&arr[4];

  printf(" \n");
  printf("Imprimimos el arreglo con un ciclo for ahora con el cuarto elemento \n ");
  for (int i = -4; i < 1; i++) { //para que imptima el 0
    printf("Elemento %d: %d\n", i, *(apArr + i));
  }


  return 0;
}
