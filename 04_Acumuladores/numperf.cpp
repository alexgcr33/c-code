
#include <stdio.h>
#include <stdlib.h>

int main(){

int numb, suma=0;

printf("Dame un numero y te dire si es perfecto!! :\n ");

scanf (" %i", &numb);

for(int pru=1;pru<numb; pru++){

        if(numb%pru ==0)
            suma += pru;
        }

if (numb == suma){

printf("El numero es perfecto! :\n");

}else{

        printf("El numero no es perfecto... \n");
}
return EXIT_SUCCESS;


}
