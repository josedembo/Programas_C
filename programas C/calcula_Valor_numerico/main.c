#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int i,x, cont=0;
    double resultado;

    for(i=0;i<14;i++){
         x =i;
       // resultado = (x-1)* pow((x-3),3);
        resultado = pow(x,4)-10*pow(x,3)+ 36*pow(x,2)+27;


        if(resultado == 0){
            printf("resultado %f \n", i,resultado);
            printf("VALOR: %d \n", x);
            cont +=1;
        }

    }
    printf("quantidades de Numeros = %d", cont);
    return 0;
}
