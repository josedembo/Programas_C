#include <stdio.h>
#include <stdlib.h>

/* Elabore um algoritmo que permute as posições de duas linhas de uma matriz dada. 
   1 2 3 
   4 6 5 
   9 3 8
*/

int main(int argc, char *argv[]) {
	int matriz[3][3] = {{1, 2 ,3},{4, 6, 5}, {9, 3, 8}}; // declarando e prienchendo  a matriz directamente
	int novaMatriz[3][3];
	int i , j;
	int linha1, linha2;
	
	
	// fazendo a troca das linhas da matriz
	for ( i = 0; i < 3; i++){
		for( j = 0; j < 3; j++){
			
			if(i == 0){ // trocando  a primeira linha da matriz original
				
				novaMatriz[2][j] = matriz[i][j]; // colancodo na ultima linha da matriz nova
			}else{
				
				if(i == 2){ // pegando a ultima linha da matriz original 
					
					novaMatriz[0][j] = matriz[i][j]; // colocando na primeira linha da matriz nova
				}else{
					novaMatriz[i][j] = matriz[i][j]; // completando a outra linha da matriz nova com a linha da matriz original 
				}
			}
		}
	}
	
	// imprimindo a matriz original
	printf("Matriz orginal\n");
	for ( i = 0; i < 3; i++){
		for( j = 0;j < 3; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	// imprimindo a matriz com as linhas trocadas
	printf("Matriz com linhas trocadas\n");
	for ( i = 0; i < 3; i++){
		for( j = 0;j < 3; j++){
			printf("%d ", novaMatriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
