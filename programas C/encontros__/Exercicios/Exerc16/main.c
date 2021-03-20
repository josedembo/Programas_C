#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Elabore um algoritmo que preencha dois vetores A e B com números inteiros.
 Em seguida deve mostrar os elementos de A que não estão em B. Por exemplo,
 se o vetor A dado fosse (3, 5, 6, 8, 1, 4) e o vetor B fosse (5, 4, 2, 3, 7, 8) o resultado seria os elementos 6 e 1. */

int main(int argc, char *argv[]) {
	
	int i, j;
	int vetor_A[6] = {3, 5, 6, 8, 1, 4};
	int vetor_B[6] = {5, 4, 2, 3, 7, 8};
	
	bool existe = true;
	for (i = 0; i < 6; i++ ){
		for(j = 0; j < 6; j++){
			if(vetor_A[i] != vetor_B[j])
			{
	 			existe = true;
			}else{
				existe = false;
				break;
			}
		}
		if(existe == true){
			printf("%d ", vetor_A[i]);
		}	
	}
	return 0;
}
