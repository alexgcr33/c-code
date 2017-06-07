
#include <stdio.h>
#include <stdlib.h>


void incrementa(int *nivel){
*nivel= *nivel + 1;


}


void decrementa(int * nivel){
*nivel= *nivel - 1  ;

}


//void imprimir(int * nivel){

//printf("el nivel actual es: %i \n", *nivel);
//}

int main(){

int nivel = 10;
int x;
char e;

  void (*seleccion[2])(int *nivel) {
      &incrementa,
      &decrementa
                };

  printf("El nivel actual es: %i \n", nivel);

  printf(" Si quieres aumentar pulsa + , si quieres decrementar pulsa -\n Deberas de introducir un espacio para oficializar el cambio \n ");

while(1){
  printf("Selecciona:");
  scanf("%c",&e);

if(e == '+' ){

   x = 0;


}else if(e == '-'){
x = 1;


}else if (e == ' '){

(*seleccion[x])(&nivel);

printf("El nivel actual es: %i \n", nivel);

}
}
return EXIT_SUCCESS;

}
