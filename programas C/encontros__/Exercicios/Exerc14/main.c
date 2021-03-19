#include <stdio.h>
#include <stdlib.h>

/* Elabore um algoritmo que remova um elemento de índice dado. Por exemplo, 
se o vetor dado for (2, 5, 7, 10, 12, 13) e o elemento a ser removido for o de índice 4, 
o algoritmo deve fornecer o vetor (2, 5, 7, 12, 13).*/

void removaElemento(int vetor[], int indice, int tamanho){
	int i, j;
	
	for (i = 0; i<tamanho; i++){
		if (i >= indice){
			vetor[i] = vetor[i+1];
		}else{
			vetor[i] = vetor[i];
		}
	}
	
	for(j = 0; j < tamanho - 1; j++){
		printf("%d ", vetor[j]);
	
	}
	
}


int main(int argc, char *argv[]) {
/*
	int vetor[6] = {2, 5, 7, 10, 12, 13};
	int i;
	for(i = 0; i<6;i++){
		printf("%d",vetor[i]);
	}
*/
	int vetor[6] = {2, 5, 7, 10, 12, 13};
	removaElemento(vetor,0,6);
	return 0;
}
