#include <stdio.h>
#include <stdlib.h>

/* Elabore uma fun��o que receba 2 (dois) inteiros positivos e retorne o resto da divis�o inteira do primeiro pelo segundo.
 Elabore tamb�m um programa principal para mostrar no v�deo o retorno da fun��o. */

int divisaoInteira(int numero1, int numero2){
	int resto;
	resto = numero1 % numero2 ;
	return (resto);
}


int main(int argc, char *argv[]) {
	int n1, n2, result;
	
	printf("informe o primeiro numero inteiro: ");
	scanf("%d",&n1);
	
	printf("informe o segundo numero inteiro: ");
	scanf("%d",&n2);
	
	result = divisaoInteira(n1, n2);
	
	printf("O resto da divisao inteira entre %d e %d he: %d \n", n1, n2,result);
	return 0;
}
