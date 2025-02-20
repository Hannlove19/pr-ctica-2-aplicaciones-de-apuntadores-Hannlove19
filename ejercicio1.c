#include <stdio.h>

int main () {
  char *ap, c, d, e;
  c = 'x';
  d = 'z';
  e = '\t';
  
  //Escribe el código para imprimir las direcciones de c, d y e 
  printf("%p\n  %p\n %p\n", &c, &d, &e );
  //El apuntador apunta c (direccion de memoria) 
  ap = &c;

  // imprime el carácter de la localidad a la que apunta, en este caso c 
  printf("Carácter: %c\n",*ap);

  // imprime el código ASCII de la localidad a la que apunta
  printf("Código ASCII: %d\n",*ap);
  // imprime la dirección de memoria de la localidad a la que apunta
  printf("Dirección de memoria: %d\n",ap);

  ap = &d;
  // imprime el carácter de la localidad a la que apunta
  printf("Carácter: %c\n",*ap);
  // imprime el código ASCII de la localidad a la que apunta
  printf("Código ASCII: %d\n",*ap);
  // imprime la dirección de memoria de la localidad a la que apunta
  printf("Dirección de memoria: %d\n",ap);

  ap = &e;
  // imprime el carácter de la localidad a la que apunta
  printf("Carácter: %c\n",*ap);
  // imprime el código ASCII de la localidad a la que apunta
  printf("Código ASCII: %d\n",*ap);
  // imprime la dirección de memoria de la localidad a la que apunta
  printf("Dirección de memoria: %d\n",ap);

 return 0;
}
