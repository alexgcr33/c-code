

#include <stdio.h>
#include <stdlib.h>

int main(){

          int numb= 0, numMayor= 0;

          printf("introduce 10 numeros, y te dire el mayor de ellos!!  \n");

          for(int i = 0; i < 10; i++){
                printf("Numerito %i: ", i+1);

                scanf(" %i", &numb);

                if (numb > numMayor)
                    numMayor =numb;
              

          }
        printf("el numero introducido mayor es el %i.\n", numb);


return EXIT_SUCCESS;


}
