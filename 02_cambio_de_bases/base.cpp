
#include <stdio.h>
#include <stdlib.h>

int main(){
        int decimal;

        printf("decimal:");
        //printf muestra por pantalla
        scanf(" %i", &decimal);
        //hacer:
        // &  operador que lee la direccion de memoria de..//
        //scan f es una llamada a la funcion
        //mientras decimal/2 >0
        //imprimir decimal%2
        //decimal=decimal/2
do {


    printf ("%i", decimal % 2);
    decimal /= 2;
  
} while (decimal>0);

printf("\n");

return EXIT_SUCCESS;
}
