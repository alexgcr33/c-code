
#include <stdio.h>
#include <stdlib.h>

int main () {

        int SumTo=0 ,numero, media;

        printf("dame 5 numeros y te dire la media: \n");

        for(int i=0; i < 5; i++){

        printf("Numero %i:", i+1);
        scanf (" %i", &numero);

        SumTo += numero;

     }
        media = SumTo/5;
        printf("Tu media total es de: %i.\n", media);

        return EXIT_SUCCESS;


}
