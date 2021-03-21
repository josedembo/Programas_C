#include <stdio.h>
#include <stdlib.h>

/* Elabore uma função que receba um número inteiro, 
calcule e retorne o algarismo da casa das unidades desse número. 
Elabore também um programa principal para mostrar no vídeo o retorno da função. */

void encontraUnidade(int k){
	int unidade;
	while(k>0){
		if(k/10 == 0){
			break;
		}
		k= k/10;
	}
	printf("Unidade = %d ",k);
}
int main(int argc, char *argv[]) {
	int numero;
	
	printf("informe um numero inteiro: ");
	scanf("%d", &numero);
	
	encontraUnidade(numero);
	return 0;
}
