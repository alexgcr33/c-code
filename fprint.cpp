
#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *tubo;

    tubo = fopen("ficherofantsma.txt", "w");

    printf("hola\n");//imprime en pantalla el mensaje
    fprintf(stdout,"Zanahoria"); //imprime en la pantalla especificandolo.
    fprintf(tubo, "hola?\n"); //imprime en la varible creada y de esa variable al archivo fanstasma.

    fclose(tubo);

return EXIT_SUCCESS;


}
