#include <stdio.h>
#include <stdlib.h>

/* Quando o n�mero de linhas � igual ao n�mero de colunas a matriz � dita quadrada. Neste
caso, os elementos de �ndices iguais constituem a diagonal principal. A soma dos elementos
da diagonal principal de uma matriz quadrada � chamada de tra�o da matriz. Elabore um
programa que determine o tra�o de uma matriz quadrada de ordem n dada, com n menor
ou igual a 30. */

int main(int argc, char *argv[]) {
	int ordem_n, i, j;
	
	printf("informe a ordem da matriz: ");
	scanf("%d",&ordem_n);
	
	int matriz[ordem_n][ordem_n];
	
	for(i = 0; i < ordem_n; i++){
		for(j = 0; j < ordem_n; j++){
			printf("informe o valor de %.%: ", i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	return 0;
}
