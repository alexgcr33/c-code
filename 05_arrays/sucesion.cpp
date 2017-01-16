
#include <stdio.h>
#include <stdlib.h>

int main () {

int numpri = 0, pri=1 , contador = 2, ahora;

printf(" %i, %i,", numpri+pri);

do{
        ahora= numpri+pri;
        printf(" %i,", ahora);

        numpri= pri;
        pri= ahora;
        contador++;

}while (contador <20);

    printf(" \n");
return EXIT_SUCCESS;


}
