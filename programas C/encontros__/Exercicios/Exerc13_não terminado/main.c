#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Elabore um algoritmo que mostre as os elementos distintos de um vetor dado. Por exemplo, 
se o vetor dado for (3, 2, 1, 3, 4, 1, 5, 5, 2), o programa deve fornecer (3, 2, 1, 4, 5). */

int main(int argc, char *argv[]) {
	int vetor[9] = {3, 2, 1, 3, 4, 1, 5, 5, 2};
	int vetor2[9];
	int i, j, auxi, cont_numeros = 1;
	
	auxi = vetor[0];
	vetor2[0] = vetor[0];
	for(i = 0;i < 9; i ++){
		if(auxi != vetor[i]){
			for(j = i;j<9; j++){
				if(auxi != vetor2[i]){
					vetor2[j] = auxi;
					printf("%d ", vetor2[j]);
				}

			}
			
		}
			
		auxi = vetor[i];
	}
	
	


	return 0;
}
