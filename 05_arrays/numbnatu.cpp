
#include <stdio.h>
#include <stdlib.h>

int main(){

int secuencia [10];

for (int cont=0; cont<10; cont++){


    secuencia[cont]=(1+cont)*(1+cont);

   printf ("secuencia :%i\n", secuencia[cont]);


}


return EXIT_SUCCESS;


}
