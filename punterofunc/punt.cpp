
#include <stdio.h>
#include <stdlib.h>

void sumando(int num1, int num2){

   int res=num1+num2;

    printf("el resultado es: %i \n", res);
};

void restando(int num1, int num2){

    int res=num1-num2;

    printf("El resultado de la resta es: %i \n", res);
}


int main(){

int num1=5;
int num2=10;
void (*arra[2])(int num1, int num2)={ &sumando, &restando};
int sel;


printf("Selecciona: \n 1.Suma \n 2.Resta \n");
scanf(" %i", &sel);

arra[sel -1](num1, num2);




return EXIT_SUCCESS;


}
