
#include <stdio.h>
#include <stdlib.h>

bool es_par(int n) {

if(n%2==0){
        return 1;
}
        else{
            return 0;
        }
}

int main(){

int numero;

printf("numero: ");
scanf(" %i", &numero);

printf("tu numero %s es par \n", es_par(numero)? "": "no ");



return EXIT_SUCCESS;


}
