#include <stdio.h>
#include <stdlib.h>

/* Quando o número de linhas é igual ao número de colunas a matriz é dita quadrada. Neste
caso, os elementos de índices iguais constituem a diagonal principal. A soma dos elementos
da diagonal principal de uma matriz quadrada é chamada de traço da matriz. Elabore um
programa que determine o traço de uma matriz quadrada de ordem n dada, com n menor
ou igual a 30. */

int main(int argc, char *argv[]) {
	int ordem_n, i, j, soma;
	
	printf("informe a ordem da matriz: ");
	scanf("%d",&ordem_n);
	
	int matriz[ordem_n][ordem_n];
	
	// prienchendo a matriz
	for(i = 0; i < ordem_n; i++){
		for(j = 0; j < ordem_n; j++){
			printf("informe o valor de %d.%d: ", i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	// somando os valores da diagonal da matriz
	soma = 0;
	
	for (i = 0; i < ordem_n; i++){
		for(j = 0; j < ordem_n; j++){
			if(i==j){
				soma = soma + matriz[i][j];
			}
		}
	}
	
	// imprimindo a matriz
	for (i = 0; i < ordem_n; i++){
		for(j = 0; j < ordem_n;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	printf("A soma dos valores da diagonal h: %d", soma);
	
	
	return 0;
}
