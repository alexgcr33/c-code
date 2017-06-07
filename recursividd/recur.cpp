
#include <stdio.h>
#include <stdlib.h>

bool es_primo(int p, int d){

if(d == 1)
    return true;
return p%d != 0 && es_primo(p, d-1);

}


int main(){
int num;


    printf("introduce un numero!! \n");
        scanf(" %i", &num);

if(es_primo(num,num-1))
    printf("el numero es primo \n");
else 
    printf("El numero no es primo \n" );


return EXIT_SUCCESS;


}
