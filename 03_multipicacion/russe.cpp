#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv []){

        //declaro las variables op1, op2, resultado
        //pedir op1 y op2
        //poner resultado a 07
        //
        //      si op2 es impar
        //      acumular op1 en resultado
        //      divide op2/2
        //       duplica op1
        //      repetir si op1 es mayor que 0[>0
int op1 ,o1 , o2, op2, resultado=0;

printf("operando 1: ");
scanf(" %i",&op1); //se lee de tal manera que accede a la parte de memoria de op1
o1= op1;

printf("operando 2: ");
scanf(" %i",&op2); //se lee de tal manera que accede a la parte de memoria de op2
o2=op2;


do {
if (op2%2==1)
        resultado += op1;
        op2>>=1;
        op1 <<=1;
        

}while (op2 > 0);
printf(" %i x %i= %i/n", op1, op2 , resultado);

return EXIT_SUCCESS;
}
