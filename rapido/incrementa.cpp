
#include <stdio.h>
#include <stdlib.h>

void incrementa( int *num1, int num2 ){
    *num1 +=num2;

}
int main(){

    int a=2 , b=5;

    incrementa (&a, 5); /*en la funcion lo que metemos es el valor a y luego al añadorle el 5 en la variable num 2 absorbe la segunda variable */
    incrementa (&b, 3);
    incrementa (&a, -2);

    printf("el numero de a es: %i \n  el numero de b es: %i \n", a , b);

    return EXIT_SUCCESS;


}
