#include <stdio.h>
#include <stdlib.h>
#include<Math.h>
/* Soma de Armstrong*/

int somaDigitos(int k){
	int resto, soma, numero;
	soma =0;
	numero = k;

	
	while(k>0){
		resto = k%10;
		resto = pow(resto,3);
		k= k/10;
		soma = soma + resto;
	}
	
	printf("soma = %d\n",soma);
	if(soma==numero){
		return (1);
	}else{
		return (0);
	}
}

int main(int argc, char *argv[]) {
	int numero, resultado;
	printf("Informe um numero\nR:");
	scanf("%d",&numero);
	
	resultado = somaDigitos(numero);
	
	printf("Retorno: %d",resultado);
	
	return 0;
}
