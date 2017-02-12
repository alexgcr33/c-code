
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void leer( double *a, double *b ){
printf("la base es %2.3lf\n", *a);
printf("el exponente es %2.3lf \n", *b);


}

int main(){

    double base, expo;
printf(" Dame una base: ");
scanf(" %lf", &base);


printf("Dame ahora un exponente: ");
scanf(" %lf", &expo);

leer( &base, &expo );



return EXIT_SUCCESS;


}
