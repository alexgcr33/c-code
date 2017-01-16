
#include <stdio.h>
#include <stdlib.h>

int main(){


    int num, fila=1, columna;

    printf("Dame el numero de lista que tienes!! \n");

    scanf(" %i", &num);

    while( num>17 ){

        num -= 17;
        fila++;
          }

columna = num;

printf("pues macho, te sientas en la fila %i y en la columna %i\n", fila,columna);

return EXIT_SUCCESS;


}
