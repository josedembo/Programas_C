#include <stdio.h>
#include <stdlib.h>

/* Elabore um algoritmo que permute as posições de duas linhas de uma matriz dada. 
   1 2 3 
   4 6 5 
   9 3 8
*/

int main(int argc, char *argv[]) {
	int matriz[3][3] = {{1, 2 ,3},{4, 6, 5}, {9, 3, 8}};
	int novaMatriz[3][3];
	int i , j;
	int linha1, linha2;
	
	// imprimindo a matriz original
	printf("Matriz orginal\n");
	for ( i = 0; i < 3; i++){
		for( j = 0;j < 3; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	for ( i = 0; i < 3; i++){
		for( j = 0; j < 3; j++){
			
			if(i == 0){
				
				novaMatriz[2][j] = matriz[i][j];	
			}else{
				
				if(i == 2){
					
					novaMatriz[0][j] = matriz[i][j];
				}else{
					novaMatriz[i][j] = matriz[i][j];
				}
			}
		}
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
