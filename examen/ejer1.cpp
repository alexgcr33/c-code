
#include <stdio.h>
#include <stdlib.h>

    typedef struct Pila{
     int valor;
     struct Pila *siguiente;

}TPila;


  typedef struct cabece {
   
    struct Pila *cima;
    int numeroEle;
}cabecera;



void inicializar(cabecera *c){
        c -> cima = NULL;
        c -> numeroEle = 0;
}

void push( int numero, cabecera *c ){
        printf( "push %i \n", numero );
        TPila *elemento;
        elemento = (TPila *) malloc( sizeof(TPila));
        elemento -> valor = numero;
        elemento -> siguiente = c -> cima;
        c -> numeroEle ++;
        c -> cima = elemento;

}

void pintar( cabecera *c ){
printf("vamos a pintar \n");
printf(" %i \n %i \n" , c -> cima -> valor, c -> numeroEle );

}



 
//PROGRAMA!!

int main(){

  int numero;
printf("numeros \n");

cabecera *cab;

cab = (cabecera *) malloc(sizeof (cabecera));

inicializar(cab);

while(numero > 0){

scanf( "%i",&numero);

push(numero, cab);




pintar(cab);


};


return EXIT_SUCCESS;


}
