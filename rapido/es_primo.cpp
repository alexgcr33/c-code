
#include <stdio.h>
#include <stdlib.h>
bool es_primo (int num){
for (int i = num-1;i>1; i-- ){

    if(num % i==0)
        return 0;
}

return 1;
}


int main(){

    printf(" %i %s primo. \n", 7, es_primo (7)? "es ": " no es ");


return EXIT_SUCCESS;


}
