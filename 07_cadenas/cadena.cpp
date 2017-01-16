
#include <stdio.h>
#include <stdlib.h>

int main(){
char palabra[] = "Holoncio";

int distancia= sizeof(palabra)/sizeof(char) -1;

char reves[8];

for(int i=0; i<sizeof(palabra)/sizeof(char)-1;i++){

    reves[distancia]= palabra[i];
    distancia --;
}

printf (" %s\n", reves);


return EXIT_SUCCESS;


}
