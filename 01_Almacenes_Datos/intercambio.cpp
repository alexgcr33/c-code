
#include <stdio.h>
#include <stdlib.h>

int main(){

int numpri , numsec, alm;

printf("Dame un numero!!:\n");

scanf(" %i",&numpri);

printf ("Dame otro numero maxxquina : \n");

scanf( " %i", &numsec);


printf ("Ahora habra un cambio inesperado!!..\n");
        alm=numpri;
        numpri=numsec;
        numsec=alm;

        printf("Ahora se ha cambiado todo el primer numero es %i y el segundo es %i..\n", numpri, numsec);



return EXIT_SUCCESS;


}
