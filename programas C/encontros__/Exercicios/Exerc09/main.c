#include <stdio.h>
#include <stdlib.h>

/* Elabore uma fun��o que receba um n�mero inteiro, 
calcule e retorne o algarismo da casa das unidades desse n�mero. 
Elabore tamb�m um programa principal para mostrar no v�deo o retorno da fun��o. */

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
