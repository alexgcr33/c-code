#include <stdio.h>
#include <stdlib.h>

int main(){

    int numb=0, nummenor=0;

    printf("dame 5 numeros cheeeco :\n");
   
    for(int i=0; i<5; i++){

        printf("numero %i: ", i+1 );

        scanf ( " %i", &numb);

        if( i==0 )
            nummenor=numb;

        if (numb<nummenor)
            nummenor=numb;

    }

        printf("El numero mas pequeño que has introducido es %i. \n", nummenor);
return EXIT_SUCCESS;


}
