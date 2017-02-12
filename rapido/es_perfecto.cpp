

#include <stdio.h>
#include <stdlib.h>
bool es_perf (int num){

    int alm=0;

for (int i = num-1 ; i>0 ; i-- ){
        if (num % i ==0)
        alm += i;

        if( alm == num)
        return 1;
}

return 0;
}


int main(){
    int numer=0;
    printf(" dame un numero bueno y vemos si es perfecto:  ");
    scanf(" %i",&numer);

    printf(" %i %s perfecto. \n", numer, es_perf (numer)? "es ": " no es ");


return EXIT_SUCCESS;


}
